MiniPy Compiler using Flex & Bison
=========================================


A small example of a compiler for a mini language similar to Python written with Flex & Bison.

## 1- Compiling

Compile using the **`run.bat`**

    $ run.bat

or manually using the following commands

    $ flex lexical.l
    $ bison -d synt.y -v
    $ gcc lex.yy.c synt.tab.c -lfl -ly -o prog.exe

To test the script write it first in **`Input/file.mpy`** then execute it using

    $ ./prog

---

## 2- MiniPy
A program in minipy is composed of a series of declarations and instructions. Each statement must be on a single line (and it does not end with a ';'). Blocks are identified by indentation, (four spaces or 1 tab). An increase in indentation marks the start of a block, and a decrease in indentation marks the end of the current block

The language also offers the following features:

*   **Comments** : Start with `'#'`

        #This is a comment

*   **Variable Types** : There's 4 types:
    
    * **Int** : is a sequence of digits. It can be signed or unsigned such that its value is between -32768 and 32767. If the integer constant is signed, it must be enclosed in parentheses.
        
            X = 32
            Y = (-13)

    * **Float** : is a sequence of digits containing the decimal point. It can be signed or unsigned. If the actual constant is signed, it must be enclosed in parentheses.  

            X = 12.3
            Y = (-74.641)
    
    * **Char** : is an alphabetic character between ' '

            X = 'H'
            Y = 'i'
    
    * **Bool** : is either true or false

            X = true
            Y = false

*   **Identifier** : is an alpha-numeric sequence that begins with a capital letter followed by a sequence of numbers and lowercase letters. An IDF must not contain more than 8 characters

        int A, B    #Here A and B are Identifiers

*   **Declaration** : Variable declaration has two types

    * **Variable Declaration** : 
        
        * **With Type Declaration** : it includes a type at the start
            
                int X
                int Y, Z 

        * **Without Type Declaration** : initialized depending on the value

                X = 100
                Y = ’C’

    * **Array Declaration** : it must include the type and size

            bool Tab[10]
    
*   **Operateurs** : There's 3 types of operators
    *   **Arithmetic Operators** : `+`, `-` , `*`, `/` 

    *   **Logic Operators** : `and`, `or`, `not`

    *   **Comparison Operators** : `>`, `<`, `>=`, `<=`, `==`, `!=`

*   **Operator Associativity and Priority** : All operators have left to right associativity
    *   **High Priority** : `*`, `/`

    *   **Mid Priority** : `+`, `-`

    *   **Low Priority** : `>`, `<`, `>=`, `<=`, `==`, `!=`

*   **Conditions** : is an expression that returns '1' or '0'. It can take the form of a comparison expression or a logical expression

*   **Instructions:**
    *   **Assignment** : Giving a value to an already declared variable
            
            X = (X + 7 + B) / (5.3 - (-2))
            Y = false

    *   **Conditional Instructions** : 
        *   **If Statement Alone** : if the condition is verified it executes the instructions of the first block

                if ((1 + 1) == 2):
                    X = 2

        *   **If & Else Statement** : it does what the previous instruction does but executes the instructions of the second block too if the condition is false

                if (Aa > Bb):
                    Cc = E + 2.6
                else:
                    Cc = 0 

*   **Loops** :

    *   **For Loop (in range)** : the variable successively takes the values between lower-bound and upper-bound

            Y = 0
            for I in range (0,5):
                Y = Y + I

    *   **For Loop (in Array)** : the variable successively takes the value of array elements from index 0 to the last element

            Y = 0
            for I in Tab:   #Tab is an array
                Y = Y + I

    *   **While Loop** : the block of instructions is executed as long as the condition is true

            while (I < N):
                I = I + 2      

---