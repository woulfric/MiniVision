#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// structure de la table des symboles IDF
typedef struct TS_IDF{

    char name[20];
    char code[20];
    char type[20];
    float val;
    struct TS_IDF *next;
}TS_IDF;


//structure de la table des symbole des mots clé et separateurs
typedef struct TS_MC_SEP{

    char name[20];
    char type[20];
    struct TS_MC_SEP *next;
}TS_MC_SEP;


TS_MC_SEP *liste_MC  = NULL;
TS_MC_SEP *liste_SEP = NULL;
TS_MC_SEP *Q = NULL;
TS_MC_SEP *new2 = NULL;

TS_IDF *liste_IDF = NULL;
TS_IDF *p = NULL;
TS_IDF *new = NULL;


//fonctions

//initialisation
void initialisation(){

    liste_MC = NULL;
    liste_SEP = NULL;
    liste_IDF = NULL;
}

//insertion d'elelment
void insertion(char name[], char type[], char code[], float val, int y){

    switch(y){

        //insertion idf
        case 0:
            if (liste_IDF == NULL){
                    liste_IDF = malloc(sizeof(TS_IDF));
                    strcpy(liste_IDF->name, name);
                    strcpy(liste_IDF->type, type);
                    strcpy(liste_IDF->code, code);
                    liste_IDF->val = val;
                    liste_IDF->next = NULL;
            }
            else{

                p = liste_IDF;
                new = malloc(sizeof(TS_IDF));
                strcpy(new->name, name);
                strcpy(new->type, type);
                strcpy(new->code, code);
                new->val = val;
                new->next = NULL;

                while(p->next != NULL){
                    p = p->next;
                }
                p->next = new;
            }
            break;

        //insertion mots clé
        case 1:

            if (liste_MC == NULL){
                
                liste_MC = malloc(sizeof(TS_MC_SEP));
                strcpy(liste_MC->name, name);
                strcpy(liste_MC->type, type);
                liste_MC->next = NULL;
            }
            else{
                
                Q = liste_MC;
                new2 = malloc(sizeof(TS_MC_SEP));
                strcpy(new2->name, name);
                strcpy(new2->type, type);
                new2->next = NULL;
                while (Q->next != NULL){

                    Q = Q->next;
                }
                Q->next = new2;
            }
            break;

        //insertion separateur
        case 2: 

        if (liste_SEP == NULL){

            liste_SEP = malloc(sizeof(TS_MC_SEP));
            strcpy(liste_SEP->name, name);
            strcpy(liste_SEP->type, type);
            liste_SEP->next = NULL;
        }
        else{

            Q = liste_SEP;
            new2 = malloc(sizeof(TS_MC_SEP));
            strcpy(new2->name, name);
            strcpy(new2->type, type);
            new2->next = NULL;
            while (Q->next != NULL){

                Q = Q->next;
            }
            Q->next = new2;
        }
        break;

    default:

        break;
    }
} 

int returnType(char name[])
{
    p = liste_IDF;
    while(p!=NULL && strcmp(name,p->name) != 0){

            p = p->next;
        }
    if(p!=NULL){

        if(strcmp(p->type,"INTEGER")==0) return(1);
        if(strcmp(p->type,"FLOAT")==0) return(2);
        if(strcmp(p->type,"CHAR")==0) return(3);
        if(strcmp(p->type,"STRING")==0) return(4);
    }
    else return (0);
}  



// a revoir 
int idfExiste(char name[],char tab[50][50],int n)
{
    int a=0;
    if(n==0)  return (0); 
    
    while( a<n && strcmp(name,tab[a]) != 0)
        a++;

    if( a<n ) return (1); //si l'idf existe, on retourne 1
    else  return (0); //sinon, on retourne 0
    
}

int DivParZero(int x){
    if (x == 0) {
        return 1;
    }
    else return 0;
}

// ????
void insererType(char name[], char type[])
{
    p = liste_IDF;
    while(p!= NULL && strcmp(name,p->name) != 0){

            p = p->next;
        }
    if(p!=NULL){
        strcpy(p->type,type);
        }
}


void rechercher(char name[], char code[], char type[], float val, int y){

    switch(y){

        case 0: // verification de l'existance dans la table des idf
            p = liste_IDF;
            while(p != NULL && strcmp(p->name, name) != 0){
                p = p->next;
            }
            //si il n'existe pas on l'insert
            if (p == NULL){
                insertion(name, type, code, val, 0);
            }
            else{
                // printf("\n l'entite %s existe deja dans la tables des IDF\n",name); 
            }
        break;

        case 1: //verification de l'existance dans la table des Mots clé
            Q = liste_MC;
            while(Q != NULL && strcmp(Q->name, name) != 0){

                Q= Q->next;
            }
            if (Q == NULL){
                insertion(name, type, code, val, 1);
            }
            else{
                // printf("\n l'entite %s existe deja dans la tables des Mots clés\n",name); 
            }
            break;

        case 2: //Verifier si l'entite existe dans la liste separateurs
        
            Q = liste_SEP;
            while (Q != NULL && (strcmp(name, Q->name) != 0)){

                Q = Q->next;
            }

            if (Q == NULL) {

                insertion(name, type, code, val, 2);
            }
            else{
                
                // printf("\n l'entite %s existe deja dans la tables des separateurs\n",name); 
            }
            break;

        default:
            break;

    }
}

//AFFICHAGE DE LA TS (code lyes)
void afficher()
{

    printf("\n\n\n\n/*************** TABLE DES SYMBOLES *************/\n");
    printf("\n\n\n\n/*************** Table des symboles IDF et CONST *************/\n");
    printf("______________________________________________________________________\n");
    printf("\t|   Nom_Entite   |  Code_Entite  |   Type_Entite  |  Val_Entite \n");
    printf("______________________________________________________________________\n");

    p = liste_IDF;
    while (p != NULL)
    {
        if (strcmp(p->code, "CONST") == 0 && ((strcmp(p->type, "FLOAT") == 0 || strcmp(p->type, "INT") == 0)))
            printf("\t|%14s    |%10s     | %10s     | %10f \t\n", p->name, p->code, p->type, p->val);
        else
            printf("\t|%14s    |%10s     | %10s     | \t\n", p->name, p->code, p->type);

        p = p->next;
    }

    printf("\n\n\n\n/*************** Table des symboles mots cles *************/\n");
    printf("_____________________________________________________\n");
    printf("\t| 	 Nom_Entite        |   CodeEntite   | \n");
    printf("_____________________________________________________\n");

    Q = liste_MC;
    while (Q != NULL)
    {
        printf("\t|%25s |%12s    | \n", Q->name, Q->type);
        Q = Q->next;
    }

    printf("\n\n\n\n/*************** Table des symboles separateurs *************/\n");
    printf("___________________________________\n");
    printf("\t| NomEntite |  CodeEntite | \n");
    printf("___________________________________\n");

    Q = liste_SEP;
    while (Q != NULL)
    {
        printf("\t|%8s   |%8s     | \n", Q->name, Q->type);
        Q = Q->next;
    }   
}