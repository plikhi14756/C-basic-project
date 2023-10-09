#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include<time.h>

#define multiply(a, b) (a * b);




int firstprogram ()
{
    printf("************************Introduction Program ************************\n");
    
    printf ("Greetings !!! \n"); // this function (printf) will print output on the screen and (\n) is used to seperate two outputs with space
    
    printf ("This is my first program to make a fresh start in Computer industry\n");
    printf("\n************************ The End ************************\n");
    
    return 0;
}

int datatypes ()
{
    // RULES FOR DECLARING VARIABLES
    // 1. a variable shouldnot have any spaces like int num 1;
    // 2. special keywords like if, else and many others cannot be used as variables
    // 3. every variable must have specific data type if you want to use it
    
    // types of variables in C language
    
    // Global scope - these are the type of variables which can be used/accesed inside and outside of useer defined function.
   
    // Local scope -these are the type of variables which can be used/accesed only inside of useer defined function.
    
    int age; // declearing Variable where int is the integer data type which will only store ineger values like 0,1 and so on
    age = 22; // giving value to a variable
    
    printf("\n************************ Introduction to Data types ************************\n");
    printf ("\n int Age: %d", age); // printing variable value as output and %d is the integer data type identifier
    
    int age1 = age; // giving the value of old variable to the new variable
    
    printf ("\n Age1 = %d", age1);
    
    int num1, num2 = 44; // the value is only given to num2 is 44 and num1 is not given any value so num1 will have a garbage or random value as an output
    
    printf ("\n num1: %d", num1);
    
    printf ("\n num2: %d\n", num2);
    
    // types of datatypes -;
    /*
     
     1. int (integer data type) - 4 bits = 32 bits (size of int) and it can store 2^32 distinct values from -2147483648 to 2147483647, %d used for printing
     
    2. double - 8 bytes, %lf is used for printing (it is used for storing decimal and exponential values but has larger range and numbers with more precision)
     
     3. float - 4 bytes, %f is used for printing (it is used for storing decimal and exponential values)
     
     4. char - 1 bytes, %c is used for printing (it is used for storing charctor values) (but the charector is actual stored in computor in the form of integer not an actual charector but we can also print ineger value of that charactor by using ( %d) format specifier when printing any char variable)
 
     ** while using char variable the value assigned to that variable should be like this char ch = 'p' only
     
     ** to find the actual size of the data types by using program the syntax used in c language is printf ("int size = zu", sizeof (age)); (where "zu" is the format specifier and sizeof () is the syntax and (age) is the variable and this will provide the size of data type in bytes only
    
     */
    
    double number = 12.45; // number is the double type variable and 12.5 is the floating point value
    printf ("Double number 6 decimal places = %lf\n", number); //since double is a type of data type which will give output like 12.450000
    
    printf ("Double number 2 decimal places = %.2lf\n", number); // %.2lf means the output number will not exceed 2 decimal places
    printf ("Double number 1 decimal places = %.1lf\n", number); // %.1lf means the output number will not exceed 1 decimal place so in this way we can control the output of both float and double data types
    
// in similarly way float can be used in same way
    float num3 = 23.5f;
    printf ("Float num3 = %.2f\n", num3);
    
    // now we will use char data type
    
    char charactor = 'Z';
    printf ("Char charactor = %c\n", charactor);
    
    // now we will get nummerical value of this charactor z
    printf ("Char charactor number 'z' = %d\n", charactor);
    
// we will the sizeof () operator and %zu with printf statement format specifier in c language to get the size of data types
    printf (" int size = %zu\n", sizeof(age));
    printf("\n-------------------- The End -------------------------------\n");
    
    return 0;
}

int userinput ()
{
    // ** Keyword shotcut to use comments in Mac is (Command + /) and for windows it is (ctrl + /)
// Multine comments can be used by using syntax /* (during start of comment) and */ (at the end of the line)
    // ** keyword shortcut to use multiline comments on mac is (Command + shift + /) and on windows it is (ctrl + shift + /)
    
    printf("\n************************ Introduction to User input operator ************************\n");
    printf("\nThis program will show the use of input operator in our program to input values and print them back\n");
    int age, age1;
    char alphabet, alpha;
    double num1;
    
    printf ("\nEnter age =");
    scanf ("%d", &age);// this is the syntax scanf(); which we will take output from the user in C language
    
    printf ("Enter Alphabet =");
    scanf ("\n%c", &alphabet);
    
    printf("Enter double number =");
    scanf("\n %lf", &num1); // to print user input for double variable and get answere in 2 decimal places the syntax (%.2lf) should be used only for printf () not for scanf() because it will give 0.00 as output not the user desired output if used in both printf() and scanf()
    
    printf("\nAge is - %d\n", age);
    printf("Alphabet is - %c\n", alphabet);
    printf("Double number is - %.2lf\n", num1);
    
    printf("Enter age1 and Alpha -");
    scanf(" %d %c/n", &age1, &alpha);
    
    printf("age1 is %d and Alpha is %c\n", age1, alpha); // THIS is the another type of syntax which we can get user output for various variables by using 1 scanf() function only
    
    printf("\n************************The End ************************\n");
    
    return 0;
}

int Operators ()
{
    
    printf("\n************************ Introduction to Operators ************************\n");
    
    printf("\n-------------------- Introduction to Arithemic Operators ---------------------------\n");
    // In this function we will see the use of Arithmetic operators (arthemetic operators)
    // Operators - In c programing an operator is a special symbol that is used to perform operations on various values and variables.
    // TYPES OF OPERATORS ARE -;
    
    /*
     1. Arithmetic Operators
     2. Relational Operators
     3. Logical Operators
     4. Bitwise Operators
     5. Assignment Operators
     6. Misc Operators
     */
    
    // Arithmetic Operators - these are the type of basic operators like + (Addition), - (Substraction), * (Multiplication), / (Division), % (gives Remainder as anwere or Modulas), ++ (Increment - increase by 1) and -- (Decrement - decrease by 1)
    
    // ** Modulas or Remainder operator can be used only with integer values and data types only but if used with other type of data types or values then it will give an error and the program will not work
    
    //** prefix increment means using increment operator before variable like (++a) and postfix increment operator means using increment operator after variable like (a++)
    
    //** we can also use multiple arthimetic operators on a single variable like int x = 1 + 3 / 7 * 23 - 18;
    //** while using multiple operators in one variable like  x = 1 + 3 / 7 * 23 - 18; it recomended to use parenthesis to make it more clearer and with parenthesis it will look like  x = (1 + 3) / (7 * 23) - 18; where () is parenthesis
    
    // while using multiple arthemetic operators like  x = 1 + 3 / 7 * 23 - 18; these operators will exeute in specific order according to their precedence and associativity(which means operators with higher precedence will be executed first and operators with lower precende will be execured last) for example  (x = 1 + 3 / 7 * 23 - 18;) in this case division operator will be executed first(due to higher precedence) then multiplication, then addition and then substraction(due to lower precedence)
    
    printf("\nThis program will add 2 numbers to show the use '+' operator in our program\n");
    int a = 24; //where int is a type of assignment operator which assign a value to the variable
    int reasult = a + 6; // this is an example of using (+) operation and in a similar way we ca use
    
    printf("Reasult = %d\n", reasult);
    
    int reasult1 = (2/4)+(7*5)-1; // this is the example of using multiple operators with one variable
    printf("Reasult1 = %d\n", reasult1);
    
    int A = 25;
    
    double b =10.45;
    
    double c = A + b;
    
    printf("C = %.2lf\n", c); // this is the example of using (+ operator) with data types in similar way we can use other operators except for modulas/Remainder (% operator)
    printf("\n-------------------- The End ---------------------------\n");
    
    printf("\n-------------------- Introduction to Logical/Boolean Operators ---------------------------\n");
    /*
     
     Boolen operators - they are the type of operators which are used with logical operators (AND, OR and NOT) they give output in the form of 0 and 1 only (1 is for true and 0 is for false). Boolean operator is used to run logical operators in our program
     
     * it is important to learn about Boolean/Logical operators they help us in making decision making programs
     
     * In order to use Boolean operator a special header file (#include <stdbool.h>) need to be imported in the c program in which you will need
     
     * %d is used as a format specifier to print boolean/logical operator output because it does not have its own format specifier and it stores its data in the form of ( 0 (false) and 1 (true) ) and gives an integer output.
     
     There are 3 types of basic Logical/Boolean operators -;
     
     1. AND (&&) - this operator will compare 2 different conditions if both conditions are true or fulfilled it wil give true (1) as answer and
     and this operator will give false (0) as output ( (if one condition is fulfilled/true and one is not fulfilled/false) and (if both the conditions are not fulfilled/false) )
     
     2. OR (||) - This operator will also compare 2 different conditions but in a different manner if both conditions are fulfiled it will give (1 - true as output) but if both conditions are notfulfilled/false then it will give (0 - false as output) else if while comparing both conditions even if 1 condition is fulfilled/true then it does'nt matter if other is fulfilled or not it will give overeall (1 - false as output)
     
     3. NOT (!) - This is special operator because it will reverse the reasults of both operators AND and OR
     
     * there are some other operators which are used to compare different values of the variable -;
     1 (4 > 5) - this will check if 4 is greater than 5
     2 (4 < 5) - this will check if 4 is less than 5
     3 (4 => 5) - this will check if 4 is greater than or equal to 5
     4 (4 =< 5) - this will check if 4 is less than or equal 5
     5 (4 == 5) - - this will check if 4 is equal 5
     
     */
    
    int b3 = 21;
    
    int b4 = 32;
    
    int b5 = 2;
    
    int b6 = 35;
    
    bool reasult2 = (b3 > b4) && (b5 < b6); // this is the example of using AND operator
    
    bool reasult3 = (b3 > b4) || (b5 < b6); // this is the example of using OR operator
    
    bool reasult4 = !(b3 > b4) && (b5 < b6); // this is the example of using NOT operator
    
    printf("Reasult (AND operator) = %d\n", reasult2);
    printf("Reasult (OR operator) = %d\n", reasult3);
    printf("Reasult (NOT operator) = %d\n", reasult4); // in this example the output of reasult 2 variable in which AND variable output is stored was switched feom 0 to 1 by using NOT operator
    
    
    
    
    printf("\n-------------------- The End ---------------------------\n");
    
    printf("\n-------------------- Introduction to else - if statement ---------------------------\n");
    
    // if-else statement is also a type of boolean expression but with these statements we can control which part of program will be executed according to the conditions
    
    printf("\n This program will check whether you are elligible to vote or not by using if-else statements \n");
    int age;
    
    printf("\nPlease Enter your age - \n");
    scanf("%d", &age);
    
    if (age > 100) // this is the example of using if, else and else if statements we can also use these statements by combining them with logical operators (AND, OR and NOT)
    {
        printf("\n Invalid age !!\n");
        
    }
    
    else if (age >= 18)
    {
        
        printf("\nCongratulations you are eligible to vote :)\n");
    }
    
    
    else
    {
        printf("\nSorry you are not eligible to vote :(\n");
    }
    
    // down below we will have example of using nested if - else statement in C language
    int num1;
    
    printf("Enter your number -");
    scanf("%d", &num1);
    
    if (num1 >0)
    {
        
        printf("Enter the number again -");
        scanf("%d",&num1);
        
        if (num1 == 0)
        {
            printf("The number is zero\n");
        }
        else
        {
            printf("The number is invalid :| /n");
        }
        
    }
    
    else
    {
        printf(":) || :(\n");
    }
    
    printf("\n-------------------- The End ---------------------------\n");
    
    
    
    
    printf("\n--------------------  Introduction to Ternary operator ---------------------------\n");
    
    // Ternary operator is a type of operator which we can use to replace if-else statement in order to maker our code look cleaner and it also saves a lot of space and easy to manage
    
    // ** This operator can be used in replacement with if-else statement only if we have to test a single or to do a single task because it will make the code confusing and complicated
    
    // this is the syntax for using ternary operator ((expression == '+') ? N1 + N2 : N1 - N2;) where (expression == '+') is the test condition and (N1 - N2 : N1 + N2) are the decision makers which means if expression == (+) then N1+N2 will be executed otherwise or else N1-N2 will be executed
    printf("\nIn this program we will use ternary operator to do whether addition or substraction of numbers 20 and 15 according to choice of our operator\n");

    char E1;
    printf("\n Choose your expression (+ or -) -");
    scanf(" %c", &E1);
    
    int N1 = 20;
    int N2 = 15;
    
    int R = (E1 == '+') ? N1 + N2 : N1 - N2; // this is example of using Ternary operator
    
    printf ("Reasult = %d \n", R);
    
    
    printf ("\n-------------------- The End ---------------------------\n");
    
    printf ("\n-------------------- Introduction to Switch statement ---------------------------\n");
    
    // Switch statement is the type of statement which can be used to replace if-else statement because it makes code look cleaner and more understandable
    
    // Now we will create a program which will A basic calculate using Switch statement
    
    char OP;
    int N3;
    int N4;
    
    printf("\nThis program will use Switch statement to create a calculator which will perform the calculation of any two integer values that you will enter \n");
    printf("\nEnter First Number -");
    scanf("%d", &N3);
    
    printf("\nEnter Second Number -");
    scanf("%d", &N4);
    
    printf("\nPlease choose your operator (+, -, *, / and MODULUS) -");
    scanf(" %c", &OP);
    
    double total;
    // below this is the syntax of using Switch statement
    switch (OP)
    {
        case '+':
      
            total = N3 + N4;
            printf("Reasult - %.2lf\n", total);
            break;
            
        case '-':
      
            total = N3 - N4;
            printf("Reasult - %.2lf\n", total);
            break;
            
        case '*':
      
            total = N3 * N4;
            printf("Reasult - %.2lf\n", total);
            break;
            
        case '/':
      
            total = N3 / N4;
            printf("Reasult - %.2lf\n", total);
            break;
            
        case '%':
      
            total = N3 % N4;
            printf("Reasult - %.2lf\n", total);
            break;
            
        default:
      
            printf("Invalid choice :(\n");
            
    }

    
    printf ("\n-------------------- The End ---------------------------\n");
    
    
    printf ("\n************************ The End ************************\n");
    
    return 0;
}

int typeconversion ()
{
    printf ("\n************************ Introduction to Data type Conversion ************************\n");
    // In this function we will have information about data type conversion Concepts
    /*
     There are two types of coversion which takes place is C language Explicit and inplicit
     
     1. Explicit Conversion - It is the type of conversion in which data types are converted by the user forcefully
     
     2. inplicit Conversion - it is the type of conversion in which data types are converted by the compiler itself according to data type
     hiraicy order.
     
     Here is the data type conversion order -;
     1. long double
     2. double
     3. float
     4. long
     5. int
     6. short
     7. char
     
     ** According to this order char will be converted into short and all the data types will be coverted in this order all the way from low to high
     
     
     */
    
    char a = '5'; // in this example the compiler converts this charactor value into ascii value so that it can be added with int variable which is 53
    int b = 9;
    
    int reasult1 = a + b;
    
    printf("\n The Reasult1 = %d \n", reasult1); // this is the example of getting the reasult of converted datatype in int form (from int to char), so the final output will be 53 + 9
    
    int r1 = '8' + 12; // this is the shortcut meathod of using data type conversion
    
    printf("\n Reasult3 = %d \n", r1);
    
    // similarly we can convert datatypes into different forms according to our needs
    
    int a1 = 5.67; // in this example higher data type variable (float or double) get automatically coverted into lower data (int) (an example of automatic/implicit type coversion)
    
    printf("\n int value (inplicit conversion) = %d\n", a1);
    
    double a2 = 5.67;
    int b1 = 9;
    
    int reasult2 = (int)a2 + b1; //By this syntax we can forcefully convert one datatype variable into another datatype, in this example we have converted the double variable type into int variable type
 
    // Similarly in this way we can convert datatype into other types according to our needs
    
    printf("\n The Reasult2 (Explicit Conversion) = %d \n", reasult2);
    
    printf ("\n********************* The End ************************\n");
    return 0;
}

int loops ()

{
    
    
    printf ("\n********************* Introduction to the concept of loops ************************\n");
   
    // Loops are the type of statements in c language which are used to run a piece of code multiple times according to our needs.
    /*
     There are 3 types of loops in C language
     1. While Loop
     2. Do While loop
     3. For loop
     
     * from above 3 loop types we can use any loop type in our program because all them will the same task but only their sytax and way of working is different than each other
     */
    
    printf ("\n-------------------- Introduction to While loop  ---------------------------\n");
   
    // Below this is example in which shows how While loop can be used in our c program
    int count;
    int limit;
    printf("\nThis program will use While loop to display the massage 'I LOVE YOU :)'\n");
    printf("\nPlease enter your massage display limit -");
    scanf("%d", &limit);

    printf("\nEnter your value to start displaying the message -");
    scanf("%d", &count);

    while (count < limit) { // this the sntax of using While loop in our program
        printf("\n I LOVE YOU :) \n");
        count = count + 1;
    }
    printf ("\n-------------------- The End ---------------------------\n");
    
    printf ("\n-------------------- Introduction to do-While loop  ---------------------------\n");
   
    // this type of loop is different from others because it can excuted if your condition is false/unfulfilled because in this lopp the statements inside do {} get executed and then it is checked at while (); ending
    int value;
    
    printf("This program will allow you to create multiplication table of any number upto 10 by using do-while loop\n");
    printf("\nPlease enter you Desired Number - \n");
    scanf("%d", &value);
    
    int count1;
    count1 = 1;
    
    do{ // this is he syntax of using do-wihile loop
        
        int product = value * count1;
        printf("\n%d X %d = %d\n", value, count1, product);
        count1 = count1 + 1;
    } while(count1 <= 10);
    
    printf ("\n-------------------- The End  ---------------------------\n");

    printf ("\n-------------------- Introduction to For loop  ---------------------------\n");

    // this is the example of using for loop in c language
    printf("\nIn this program we will use the For loop to calculate the sum of first 100 odd numbers\n\n");
        int num = 0;
        int i;
        for (i = 1; i < 100; i = i + 2) // this the syntax of using for loop in c language
        {
            num = num + i;
            printf("%d + %d = %d\n",num, i, num);
        }
    printf ("\n-------------------- The End  ---------------------------\n");
    
    printf ("\n-------------------- Introduction to the concept of break-continue operator and proper way to write a program with the help of comments in C language  ---------------------------\n");
    
    // Break - it is a type of operator by which we can terminate the loop at any point within our program according to our needs
    
    // Continue - it is a type of operator by we can alter the sequence of the loops in our program according to our needs
    
    // * the break and continue should be used only with the combination of if-else statements and loops (for, while and do-while) in order to make them work correctly
    
    
    // Below this is the example of using break and continue in C language programing with while loop but it can be used in a similar way with other type of loops
    
    
    printf ("\nThis program will give 1 to 10 numbers but its loop will be altered with the help of break and continue keywords \n");
    int I = 0;
          // loop from 1 to 10
      while (I < 10) {
          I++;
          // If i is equals to 4,
          // continue to next iteration
          // without printing
          if (I == 3) { // this syntax of using Break and contunue operator in our program with the help of if-else statements
              continue;
          }
          else {
              // otherwise print the value of i
              
              printf(" %d\n", I);
          }
          
          if (I == 8) {
              break;
          }
          else {
              
              
          }
          
       }
    
    printf ("\n-------------------- The End  ---------------------------\n");
   
    printf ("\n********************* The End ************************\n");
    return 0;
}

int function ()
{
    
    printf ("\n********************* introduction to the concept of functions ************************\n");
    
    printf ("\n-------------------- Introduction to user-defined functions ---------------------------\n");
    
    printf("\nTHIS SECTION WILL SHOW NO OUTPUT BECAUSE WE CANNOT DEFINE FUNCTIONS WITHIN A FUNCTION IN C LANGUAGE \n");
  // function - it is a group of related statement that perform a specific task, they help us in dividing a large program into smaller chunks which makes it easier to understand modify (helps in focusing a specific part of program at a time).
    
    // Function paremeters - it is a value which is accepted by the function when it is called during execution of the program
    
    // * functions helps in achieving code reusability in c language which means once we have created a function in c language it can reused again and again in our program
    
    // * while creating function we should use descriptive names so that only just by reading the user can understand what is the purpose of this function in C language
    
    // There are two types of functions in C language -;
    
    //1. User defined - The type of functions which are defined by the user are called User-defined functions
    
    //2. Standard Liberary - The type of functions which are pre-defined in the C language and which can used at anytime just by adding the header files in the C program are called Standard Liberary functions.
    
    /*
     
     void greet() // this is the another way/syntax of defining a function
     {
     
     printf ("Good Morning");
     
     }
     
     void calculatesquare (int number) // this how we can create a function with paremeters and (int number) is the paremeter of the function
     {
     int square = number * number;
     printf ("squre of %d is %d", number, square);
     
     }
     
     int addnumbers(int number1, int number2); // this is the function prototype which we will use to call a functions which will be defined after main() and return statement
     
     int main () // this ts where the excution of every c program starts
     {
      
     greet(); // this is the way by which we can call function in c language
     calculatesquare(7); // this is how we can call a function with paremeters
     
     int reasult = addnumbers(34, 34); // this is another way of calling/using a function in c program to use function in this way the function should return a value that's we have the value of sum in our function instead of 0.
         
         printf("Reasult = %d\n", addnumbers(34, 34));
         
         return 0;
     
         return 0; // this is where the execution ends
     
     int addnumbers(int number1, int number2)
         {
         int sum = number1 + number2;
       
         return sum; // this is the return statement which we can use to return any value from function because since the function is giving some value it needs to be stored somwhere that's why we use the return statement to store the value produced by the function and in this function the sum is the integer value produced by the combination of two numbers (number 1 + number 2)
         
         }
     
         
     }
     */
    
    printf ("\n-------------------- The End  ---------------------------\n");
    
    printf ("\n-------------------- Introduction to standard liberary functions  ---------------------------\n");
    
    printf("\nThis program will calculate the square root, cube root and raise to power of a number using Standard liberary functions from math.h header file\n");
    
    float sq;
    
    float cb;
    
    sq = sqrt(25); // sqrt() is a standard liberary function which can be accesed in the program only by using math.h header file which can be include by using syntax '#include <math.h>
    
    cb = cbrtf(27);
    
    printf("\nThe square root of a number is %lf\n", sq);
    
    printf("\nThe cube root of a number is %lf\n", cb);
    
    int p = 2;
    int r = 5;
    
    double Ans = pow(p, r); //pow() is a standard liberary function which can be accesed in the program only by using math.h header file which can be include by using syntax '#include <math.h>
    printf("\nThe raise to power of 2 and 5 = %lf\n", Ans);
    
    
    printf("\nThis program will convert the lowercase charactor into upercase and vice versa\n");
    char ch1 = 'a';
   
    char upper = toupper(ch1); //toupper() is a standard liberary function which can be accesed in the program only by using ctype.h header file which can be include by using syntax '#include <ctype.h>
    
    printf("\nThe uppercase version of '%c' = %c\n", ch1, upper);
    
    char alpha = 'P';
    
    char lower = tolower(alpha);  //tolower() is a standard liberary function which can be accesed in the program only by using ctype.h header file which can be include by using syntax '#include <ctype.h>

    
    printf("\nThe lowercase version of '%c' = %c\n", alpha, lower);
    
    // Benifits of using Standard liberary functions
    
/*
 1. WE can directly use them in our program just by including header file and don't have to worry about function defination and prototype.
 
 2. they save a lot of time and are error-free becuse they are already tested which means we can use them without any problems.

 */
    
    printf ("\n-------------------- The End  ---------------------------\n");
    
    printf ("\n********************* The End ************************\n");
    

    return 0;
}


int recursionfunction()
{
    
    printf ("\n********************* introduction to the concept of recursive functions ************************\n");
    
    printf("\nTHIS SECTION WILL SHOW NO OUTPUT BECAUSE WE CANNOT DEFINE FUNCTIONS WITHIN A FUNCTION IN C LANGUAGE\n");
    
    
    // Recursive functions - The function which call itself inside the body of the function is called recursive function
    
    // * if we just call the function inside the body of the function then it will lead to infinite execution of that functions until memory of the computer runs out
    
    //* to prevent this from happening we should always use if-else statements while call/using function in a recursive way
    
    // below is the example of how a function can be used in recursive way properly in c language
    
    
    /*int calculatesquare (int number) // This the example of creating a recursive function
     {
     int square = number * number;
     printf("%d\n", square);
     
     if (number != 0)
     {
     return calculatesquare(number - 1); // this is a recursive/itself call by the user and (number -1) is the paremeter of the function
     }
     else{
     return square;
     }
     
     }
     
     int main()
     {
     int n1;
     int ans;
     printf("Enter your number - ");
     scanf("%d", &n1);
     
     ans = calculatesquare(n1);
     
     return 0;
     }
     */
    
    printf ("\n********************* The End ************************\n");
    return 0;
    
    
}



int arrays ()

{
    
    printf ("\n********************* Introduction to Arrays ************************\n");
    
    // arrays - it is type of variable in c language by which we can store multiple values in a single variable.
    
    // arrays are used c language because they saves a lot of time and energy
    
    // arrays should be used with loops to make things more easier and efficient
    
    // datatypes arrays are fixed means once the type of datatype cannot be changed using datatype conversion once decleared.
    
    // by using this syntax int total = marks[0] + marks[1] + marks[2] + marks[3] + marks[4]; we can perform calculations of array elements
    
    printf ("\n-------------------- Introduction to 1-d array  ---------------------------\n");
    
    printf("\n This program will use a single variable to take input of 5 numbers and then print it \n");
     
     int value[5]; // this is syntax of declearing an array in in c language
         
       printf("Enter 5 desirable values -");
       scanf("%d", &value[0]); // this is the syntax storing user input values in c language
       scanf("%d", &value[1]);
       scanf("%d", &value[2]);
       scanf("%d", &value[3]);
       scanf("%d", &value[4]);
       
       printf("\n Your desirable values are \n");
       printf("\n %d \n", value[0]); // this is the syntax printing user input values in c language
       printf("\n %d \n", value[1]);
       printf("\n %d \n", value[2]);
       printf("\n %d \n", value[3]);
       printf("\n %d \n", value[4]);
       
       printf("\n This program will use a single variable to take input of 5 numbers and then print it with the help of loop \n");
       
       int age[5];
       
       printf("\n Enter age of 5 different people \n");
       int a;
       for (a = 0; a < 5; a++) { // this is the syntax storing user input values in c language by using loop
           
           scanf("%d", &age[a]);
       }
       
       printf("\n Your desirable age values are \n");
       for (a = 0; a < 5; a++) {
           
           printf("\n%d\n", age[a]); // this is the syntax of print user input values in c language by using loops
       }
    printf ("\n-------------------- The End  ---------------------------\n");
    
    printf ("\n-------------------- Introduction to multi-dimentional array  ---------------------------\n");
   
    printf ("\n This is program is the example of matrix multiplication table created using the concept of multi-dimentional arrays \n");
    
    int arr[2][3] = { {34, 56, 90} , {1, 6, 5} };
        
        printf("%d\n", arr[0][0]);
        printf("%d\n", arr[0][1]);
        printf("%d\n", arr[0][2]);
        
        printf("%d\n", arr[1][0]);
        printf("%d\n", arr[1][1]);
        printf("%d\n", arr[1][2]);
        printf("\n");
        
    
    printf ("\n This program will array elements from user and arrange them in matrix table form  \n");
        int arr2[2][3];
        
        
        
        int i , j;
        
        
        for (i = 0; i < 2; ++i) {
            
            for (j = 0; j < 3; ++j)
            {
                scanf("%d", &arr2[i][j]);
            }
            printf("\n");
        }
        
        for (i = 0; i < 2; ++i) {
            
            for (j = 0; j < 3; ++j)
            {
                printf("%d ", arr2[i][j]);
            }
            printf("\n");
        }

        
    printf ("\n-------------------- The End  ---------------------------\n");
    
    printf ("\n-------------------- Introduction to concept arrays with functions  ---------------------------\n");
    
    printf("\nTHIS SECTION WILL SHOW NO OUTPUT BECAUSE WE CANNOT DEFINE FUNCTIONS WITHIN A FUNCTION IN C LANGUAGE\n");
    
    // when we create a function by using array elements as function parameter. while calling it inside main() we use name of that array
    
    /*
    // function to find the sum of all array elements
    // we have also provided array size in parameter
    double findSum(double marks[4]) {
      double sum = 0.0;

      for (int i = 0; i < 4; ++i) {
        sum = sum + marks[i];
      }

      return sum;
    }

    int main() {

      double marks[4] = {79.25, 83.9, 71.95, 75.33};

      // call the function with array as argument
      double result = findSum(marks); // this is how we usual call a function if it is created by using array
      printf("%.2lf", result);    // Output: 310.43
     */
    
    printf ("\n-------------------- The End  ---------------------------\n");
    
    printf ("\n********************* The End ************************\n");
    
    
    return 0;
}


int strings()
{
    
    printf ("\n********************* Introduction to the concept of Strings ************************\n");

    printf ("\n-------------------- intoduction to strings  ---------------------------\n");
    
    // Strings - it is type array in which we can store multiple charactors.
     
      // This is how we can use strings with the help of for loop but it is recomended to use %s format specifier like this [fgets(str2, sizeof(str2), stdin);] as it helps user in using strings with white spaces
      
      // if we try to use string with loop then we cannot write input according to our need we will have to write string input according to our specified string size
    
    // %s is the format specifier which represents string variable
    
    // we do not use scanf() for taking input of charactors from user because it we cannot use strings with white spaces
   
    // below this is the example of using strings with loop as we use arrays
    
    // While using fgets(str2, sizeof(str2), stdin) in our program to use strings with white spaces it can sometimes result in unexpected behavior due to newline character due to which it does not work
    
    // it is recommended to getchar() everytime before using fgets(str2, sizeof(str2), stdin) in our program while working with strings because it consumes /n(new line charactor from the buffer) before it reaches fgets and cause errors in our program
    
    printf("\n This program will use the concept of strings with the help of loop take user intenton about c languagr as input and then print it \n ");
    char str[1000];

    printf("\n Do you love or hate c language:");
          int i;
          
          for (i = 0; i < 7 ; ++i) {
              scanf("%c", &str[i]);
          }
          
    
    printf("\n Your intention about this language is:");
          for (i = 0; i < 10; ++i)
          {
              printf("%c", str[i]);
              
          }
          printf("\n");
    
    
    // below this is the best way to use strigs in c language programing
    
    printf("\n This program will use the concept of strings take user adress as input and then print it \n ");
      char str2[1000];
      
    getchar(); // this will consume the \n (new line charactor) before it reaches fgets and we can use fgets propoerly without any errors
    
      printf("\n Enter you adress: ");
      fgets(str2, sizeof(str2), stdin); // to get user input for string variable instead of scanf() function
      //scanf("%s", str);
      
      
     
      printf("\n Your Adress is: %s\n", str2);
      

    printf ("\n-------------------- The End  ---------------------------\n");
    
    
    printf ("\n-------------------- Introduction to string functions  ---------------------------\n");
   
    printf ("\nThis program will calculate the length of strings using standard liberary function from string.h header file \n");
    
    
    char language[] = "C Program";
    
    printf("%s", language);
    
    printf("\n Length of string = %zu", strlen(language)); // strlen() is a string function which we can use to get or calculate the length of our string this is a standard liberary function which can be used by #including<string.h> header file in our program
    
    printf("\n");
    
    
    printf ("\nThis program will copy the one string into another using standard liberary function from string.h header file \n");
    
    char food[] = "Pizza";
       
       char bestfood[strlen(food)];
       
       strcpy(bestfood, food);
       
       printf("\nBest food = %s\n", bestfood);
    
    printf("\n");
    
    printf ("\nThis program will combine 2 different strings with each other using standard liberary function from string.h header file \n");
    
        char text1[50] = "Glory's nickname ";
       char text2[] = "is Lulu";

       // concatenates str1 and str2
       // The resultant string is stored in str1.
       strcat(text1, text2); // strcat() is a string function which we can use to combine 2 strings together this is a standard liberary function which can be used by #including<string.h> header file in our program

        printf("%s\n", text1);
    
    printf ("\nThis program will compare 2 strings with each other using standard liberary function from string.h header file if the reasult is 0 it means the strings equal else they are not equal \n");
    
    char str4[] = "boy";
       char str5[] = "boy";
       
      int reasult = strcmp(str4, str5); // strcmp() is a standard liberary function by which we can compare 2 strings if reasult is 0 then both strings are same/equal otherwise they are not equal which can be use by including string.h header file in our program
       
       printf("\n Reasult = %d \n", reasult);

    printf ("\n-------------------- The End  ---------------------------\n");
    
    printf ("\n********************* The End ************************\n");
    return 0;
}

int pointers()
{
    printf ("\n********************* Introduction to the concept of Pointers ************************\n");
    
    // Pointer - the type of variable which stores/point towards the memory address of other variables is known as pointer variable
       
       // %p is the format specifier for using pointer variable with printf and scanf
    
    
    printf ("\n-------------------- introduction to the concept of pointers with datatypes  ---------------------------\n");
    
       int age = 25;
       
       int* ptr; // this is the syntax of creating pointer variable
       
       ptr = &age;
       
       printf("age = %d\n", age);
       
       printf("Memory address of age without using pointer = %p\n", &age);
       
       printf("Memory address of age using pointer variable  = %p\n", ptr);
       
       printf("Value of age by using pointer variable = %d\n", *ptr); // this is how we get value of a variable using pointer
       
       *ptr = 31; // this is how we change the value of age variable using pointer variable
       
       printf("The new Value of age by using pointer variable = %d\n", age);
    
    printf ("\n-------------------- The End  ---------------------------\n");
    
    printf ("\n--------------------Introduction to the use of pointers with arrays ---------------------------\n");
    
    // when we use %p (pointer) format specifier with arrays the name of arrays get automatically get converted into pointer varible
        
        int arr[5] = {2, 5, 7, 3, 8};
        int i;
        
    printf("\nThis program will print the array elements using pointers without using loop\n");
    
        *(arr) = 3; // this is how we can acess array elements using pointers
        
        printf("%d", *(arr));
        
        *(arr + 1) = 10;
        
        printf("\n");
        
        printf("%d\n", *(arr + 1));
        
    printf("\nThis program will print the array elements using pointers with the help of for loop\n");
   
    
        for (i = 0; i < 5; i++) {
           // printf("%d\n = %p\n", arr[i], &arr[i]); // this is the way by which we can use pointers to print memory address of each array variable.
            
           // printf("%d\n = %p\n", arr[i], arr + i); // this is the another way of us pointers to print memory address of each array element variable
            
            printf("Memory Adress of %d = %p\n", *(arr + i), (arr + i));
            
        }

    printf ("\n-------------------- The End  ---------------------------\n");
    
    printf ("\n-------------------- Use of pointers with functions  ---------------------------\n");
    
    printf("\nTHIS SECTION WILL SHOW NO OUTPUT BECAUSE WE CANNOT DEFINE FUNCTIONS WITHIN A FUNCTION IN C LANGUAGE\n");
    
    
    
    
 /*
    int calsquare (int* number) // this is how we can create a function by using pointer variable
    {
        
        int square = *number * *number;
        
        return square;
        
    }

    int addnumbers (int* num1, int* num2, int* sum) //this is how we can create a function by using pointer variables and storing the return value in the form of pointer variable
    {
        
        *sum = *num1 + *num2;
        
        return *sum;
        
    }

    int* findvalue (int* val) // this is the standard way of using
    {
        
        *val = 25;
        
        return val;
        
    }

    
        int num = 25;
        
        int reasult = calsquare(&num); // this how we can use function with pointer variable as argument in our program
        
        printf("Square of a number = %d\n", reasult);
        
        int number1 = 10;
        
        int number2 = 12;
        
        int total;
        
        int product = addnumbers(&number1, &number2, &total);// this how we can use function with multiple pointer variables as argument in our program
        
        printf("Sum of 2 numbers = %d\n", product);
        
        int val = 2;
        
        int* find = findvalue(&val); // this is how we can use a pointer function in our program
        
        printf("The value = %d\n", *find);
         
         */
    
    printf ("\n-------------------- The End  ---------------------------\n");
    
    printf ("\n-------------------- Use of pointers with structures  ---------------------------\n");
    
    printf("\nTHIS SECTION WILL SHOW NO OUTPUT BECAUSE WE CANNOT DEFINE STRUCTURES WITHIN A FUNCTION IN C LANGUAGE\n");
    
   
    // this is how we can use pointers with structures
    
    // Here, we have used the -> symbol instead of * to access the value using a pointer. This is because
    
   // pt -> age is equivalent to *pt.age
   // pt -> salary is equivalent to to *pt.salary
    
    // The use of -> makes our code syntactically cleaner, otherwise there is no major difference between using one or another.
    
    /*
     
     *pt accesses the value pointed by pt (which is person1)
     so the code pt -> age accesses the age variable for person1
     and pt -> age accesses the salary variable for person1

     */
    
    
    /*
    typedef struct Person {
      int age;
      double salary;
    } person;
    
    // create struct variable
     person person1 = {.age = 25, .salary = 51345.66};

    int main()
    {
        // create a pointer variable
        person* pt;
        
        // assign the address of person1 to pt
        pt = &person1;
        
        // access the struct members of person1 using pt
        printf("Age: %d\n", pt -> age);
        printf("Salary: %.2lf\n", pt -> salary);
     
        return 0;
    }
     */

    printf ("\n-------------------- The End  ---------------------------\n");
    
    printf ("\n********************* The End ************************\n");

    return 0;
}

int structures()
{
  
    printf ("\n********************* Introduction to the concept of structures ************************\n");
   
    printf ("\n-------------------- Explaination of structures  ---------------------------\n");
    
    printf("\nTHIS SECTION WILL SHOW NO OUTPUT BECAUSE WE CANNOT CREATE STRUCTURES WITHIN A FUNCTION IN C LANGUAGE \n");
    
    // Structures - these are type of variable in c language under which we can store different variables of different datatypes.
    
    // typedef is the keyword which allows to use structures with alternative names
    
    // structues should be defined outside of main() function in c language and initialised inside of main() function
    
    /*
     
     // below is the standard syntax of creating a structure in c language
     
    struct Person { // this is the example of strcture defination outside main() function in c language
    char name[35];
    int age;
        double salary;

    };

    typedef struct student { // this is the example of creating structues in c language with the help of typedef keyword
        char name[35];
        int age;
        char status [100];
    }Student;

    int main ()
    {
     
        struct Person p1; // this is how we initialise structures inside main() in c language
            printf("\nName of person 1: ");
            fgets(p1.name, sizeof(p1.name), stdin);
            printf("Age of person is: ");
            scanf("%d", &p1.age);
            printf("Salary of the person: ");
            scanf("%lf", &p1.salary);
            getchar(); // Consume the newline character

            printf("\nName of person 1: %s", p1.name);
            printf("\nAge of person is: %d", p1.age);
            printf("\nSalary of the person: %.2lf\n", p1.salary);
        
        struct Person p2;
        printf("Name of person 2: ");
        fgets(p2.name, sizeof(p2.name), stdin);
        printf("Age of person is: ");
        scanf("%d", &p2.age);
        printf("Salary of the person: ");
        scanf("%lf", &p2.salary);
        getchar(); // Consume the newline character

        printf("\nName of person 2: %s", p2.name);
        printf("\nAge of person is: %d\n", p2.age);
        printf("\nSalary of the person: %.2lf\n", p2.salary);

        Student s1; // this is how we can structures with alias(alternative name) instead of using struct student s1.
        getchar(); // to fix errors with fgets function and consuming /n(Newline) charactor from buffer
        printf("\nName of first Student:");
        fgets(s1.name, sizeof(s1.name), stdin);
        printf("\nAge of student:");
        scanf("%d", &s1.age);
        getchar();
        printf("\nEnter Student Status:");
        fgets(s1.status, sizeof(s1.status), stdin);
        
        printf("\nName of Student1: %s", s1.name);
        printf("\nAge of person is: %d\n", s1.age);
        printf("\nType of student: %s\n", s1.status);

        

        return 0;
    }

    */
    
    printf ("\n-------------------- The End  ---------------------------\n");
    
    printf ("\n-------------------- Use of functions with structures  ---------------------------\n");
   // this is how we can use structures with function defination
    
    
    /*
    struct Student {
      char name[50];
      int age;
    };
     
    // function definition
    void display(struct Student s1) {
      printf("Name: %s\n", s1.name);
      printf("Age: %d", s1.age);
    }
     
    int main() {
     
      // create and initialize struct variable
      struct Student student1 = {.name = "Adam", .age = 25};
     
      // function call
      display(student1);
     
      return 0;
    }
   */
    
    /*
     
     // this is the example which demostrates the use of functions with structures with using a structure as return value from a function
     
     // by using structures with functions in this way we can save a lot of time because in the entire program we have created variables just once and use them everywhere for inserting different data and different calculations
     
     // create a struct
     typedef struct Complex {
       double real;
       double imag;
     } complex;
      
     // function to add two complex numbers
     complex addNumbers(complex c1, complex c2) {
       complex sum;
       sum.real = c1.real + c2.real;
       sum.imag = c1.imag + c2.imag;
       return sum;
     }
      
     int main() {
      
       // create first complex variable
       complex c1 = {.real = 1.4, .imag = 4.5};
      
       // create second complex variable
       complex c2 = {.real = 5.4, .imag = -3.4};
       complex result;
      
       // function call
       result = addNumbers(c1, c2);
       printf("Sum: %.2lf + %.2lfi", result.real, result.imag);
      
       return 0;
     }
      
     // Output: Sum = 6.80 + 1.10i
     
     */
    
    
    printf ("\n-------------------- The End  ---------------------------\n");
    
    printf ("\n********************* The End ************************\n");
    
    return 0;
}

    int enumations ()
{
    
    printf ("\n********************* Introduction to the concept of enumations ************************\n");
    // emunations - there are the special type of datatypes in c language under which we can create variables in c language and these variables will have fixed integeral values
    
    
    enum Shoesize // This is the first way of using and creating enum vaiables in c language, This is how we define enum variable outside main() function
    
    
    {
        
        
        small = 25,
        Medium = 35,
        large = 40,
        extralarge = 55,
    };
        
        enum Shoesize Shoe1 = small; // this is how we use enum variables inside c language
        printf("%d\n", Shoe1);
        
        enum Shoesize Shoe2 = Medium;
        printf("%d\n", Shoe2);
        
        enum Shoesize Shoe3 = small;
        printf("%d\n", Shoe3);
        
    enum Size // This is the another way of using and creating enum vaiables in c language,
    {
      S,
      M,
      L,
        
    } sh1, sh2, sh3;
    
    sh1 = S;
    printf("%d\n", sh1);
    
    sh2 = M;
    printf("%d\n", sh2);
    
    sh3 = L;
    printf("%d\n", sh3);
    
    printf ("\n********************* The End ************************\n");
    return 0;
    
}

int dymelloc()
{
    
    // Dynamic memory allocation - this is a special feature/concept of c language which allows us to  create, destroy and reallocate the memory addresses of a variavle according to our need of the user
    
    // to use this concept c language provides us 3 functions -;
    
    // 1. malloc() - this functions allows user to allocate/reserve the block of memory to a specific variable according to the needs
    
    // 2. realloc() - this functions allows user to reallocate the block of memory to a specific variable according to the needs
    
    // 3. free() - this functions allows user to free up the memory allocated to the variable after the execution of program completes
    
    
    
    printf ("\n********************* Introduction to the concept of dynamic memory allocation ************************\n");
    
    int a = 4;
    
    int* ptr; // this is a pointer variable which points towards the memory address of vaiable (a);
    
    ptr = (int*) malloc(a * sizeof(int)); // this is the syntax of using malloc() function
    
    if (ptr == NULL)
    {
        printf("Memory allocation failed");
        
        return 0; // this is type of keyword which we can use to terminate the the program according to need of the user
        
        // exit(0); // this is type of keyword which we can use to terminate the the program according to need of the user but to use this function
    }
    
    printf("input values:");
    for (int i = 0; i < a; i++) {
        scanf("%d", ptr + i);
    }
    
    printf("input values:");
    for (int i = 0; i < a; i++) {
        printf("\n%p", ptr + i);
    }
        
        printf("\n");
    printf("\n");
    
    a = 6;
    
    ptr = realloc(ptr, a * sizeof(int)); // this is the syntax of using realloc() function
    
    printf("imput values:");
    for (int i = 0; i < a; i++) {
        scanf("%d", ptr + i);
    }
    
    printf("\ninput values are:");
    for (int i = 0; i < a; i++) {
        printf("\n%d", *(ptr + i));
    }
        
        free(ptr); // this is the syntax of using free() function
    
    printf ("\n********************* The End ************************\n");
    
        return 0;
    }

int fileoperations()
{
    
    printf ("\n********************* introduction to the concept of file operations ************************\n");
    
    // file handling functions - The type of functions which allows us to perform operations on external files like read, write/create and close are known as file handling functions
    
    // C language provide 2 functions to perform operations on files -;
    
    // 1. fopen() - this function allows us to open/create a file
    
    // if the the file is open in read mode (r) then we can only read contents from file and if in write mode(w) then we can edit the file content and
    
    // fgets () reads the contents of the desired file and FILE* fptr; is the pointer variable for files
    
    
    FILE* fptr; // This is the syntax of creating file pointer variable
    
       const char* filepath = "/Users/pranavlikhi/Desktop/newfile.txt"; // This is the syntax of creating the desired path where we place the place the file created by this program

       fptr = fopen(filepath, "w"); // this is the syntax of how we can create a file using c language programing where filepath is the variable which has information about the path wher the created file will be stored

       if (fptr == NULL) {
           printf("Failed to create the file.\n");
           return 1;
       }

    fputs("C programing using xcode compiler on macbook is best \n", fptr);
    fputs("Anmolpreet is my best friend :) ", fptr); // This is the another type syntax by which we can add/edit contents in the text file during the creation of file within the program
    
    
       //fprintf(fptr, "This is a new file created using C file handling in Xcode.\n"); // This is the syntax by which we can add/edit contents i the text file during the creation creation within the program

       fclose(fptr); // this is the syntax of closing the file that we have created in the program

    printf("\nFile name: newfile.txt\n");
       printf("\nFile created/edited and closed successfully.\n");
    
  //  FILE* fptr; // This is the syntax of creating file pointer variable
    
      // const char* filepath = "/Users/pranavlikhi/Desktop/newfile.txt"; // This is the syntax of creating the desired path where we place the place the file created by this program
    
    char content [10000]; // this the string/charactor variable where the contents ofile read bt fgets will be stored by

       fptr = fopen(filepath, "r"); // this is the syntax of how we can create/open a file using c language programing where filepath is the variable which has information about the path wher the created file will be stored and r is read mode

       if (fptr == NULL) {
           printf("Failed to create the file !!!! .\n");
           return 1;
       }
    printf("\nContents of newfile.txt:\n");
   
    
    while (fgets(content, 10000, fptr)) { // this is the syntax which allows us to read the content of file that we have created we have used loop because fgets can only read one sentewnce(1 line) at a time and with this loop we read as many as lines in files until it has content left to read
        
        
        printf("%s", content);
    }
    

       fclose(fptr); // this is the syntax of closing the file that we have created in the program

       printf("\nFile content read and closed successfully.\n");

    // this is the another way by which we can use and open a file in append mode in which the previous content will not get deleted but this will add content to previous line

      // open file in append mode
      fptr = fopen(filepath, "a");

      // add content to the file
      fputs(" I will make Anmolpreet my girlfriend when i will start my full-time job at Amazon and have my own car 'Hyundai Palisade.", fptr);
      
      // close file
      fclose(fptr);
    
    
    
    printf ("\n********************* The End ************************\n");
    
    return 0;
}

int Macros()
{
    
    printf ("\n********************* Introduction to the concept of user-defined macro functions/directives  ************************\n");
    
    // Macro function - it is a special type of function in c language which allows us to give instructions to the program during the the time of compilation of the program.
    
    // this function is defined by using special syntax like this #define multiply(a, b) (a * b); // this is how we define a macro function in c language
    
    // The macro function is always defined outside of main() function near #include directives
    
 
    // There is also the another type of macro directive/function takes c language to a next level by giving us the ability to customise c program during compiling time
    
    // By using macro functions we can choose which part of the code will run during run time according to our needs
    
    /*
    
     * in this part of code we have used macro directive to choosen which part of will run during execution in this program
     
     ** In this program the part inside #ifndef and #endif will excute and the part inside #ifdef and #endif will not run
     
     *** This is a special type of macro which is defined and used inside main() function
     
     */
    
    
    
    int a = 25;
    
    int b = 25;
    
    int c;
    
#ifndef DEBUGEMODE
    
    c = multiply(a, b); // This is how we call the macro function inside main() in c language
    
    printf("%d * %d = %d\n", a, b, c);
    
#endif

#ifdef RELEASE
    
    printf("Program continued\n");
    
#endif
    
    printf ("\n********************* The End ************************\n");
    
    return 0;
}

void swapNumbers(int a, int b)
{
    
    // void swapNumbers(int a, int b) - we have defined function in this way because we cannot return multiple values of a and b to use this function we need the values of a and b and using void for defining function so that we can use multiple variable values and don't need to worry about returning a value
    
    
    // we have used temperary variable to swap 2 numbers because when  we will do a = b and b = a to swap two numbers because during this process a will lost lost its original value and instead of swapping we will get 2 same numbers

    
    
    
    int temp;
    
    printf("Values of a and b before swapping:");
    printf("\n a = %d and b = %d", a, b);
    
    temp = a;
    
    a = b;
    
    b = temp;
    
    printf("\nSwapped values of a and b are:\n a = %d and b = %d\n", a, b);
    
    }

int randomNumbers()
{
 
    printf ("\n********************* introduction to the use of random number generator in c language ************************\n");
    
    printf("\nThis program will use c language in-built random number generator to generate random nubers eveytime it exutes it will genrate different numbers according to user-defined limits\n");
    
    int limit;
    int number;
    int n;
    
    printf("\nTill what range you want to generate random numbers(max - 3152600) - ");
    scanf("%d", &limit);
    
    printf("\nHow many random numbers do you want to generate - ");
    scanf("%d", &n);
    // srand() - this function tells our program when to start generate new random numbers
    
    // rand() - this is the function which generates random numbers in our program.
    
    // if we use rand() without ant limits it will always genarate random numbers from 0 to 317500 [number = (rand() % 3) + 1;] this is the modified version of rand() function that is commonly used by c language programers(%3 will ensure that this function(rand()) will genrate random numbers between 0 and 3. we have use (+ 1) with rand() so that this program will generate numbers from 1 and 3 only

    // we have time(NULL) as pareter in srand() function because it gives our the ability to generate a random number everytime we execute the program
    
    
    // to use these functions in our program we alwaya need 2 header files [stdlib.h] - to acess rand() and srand() functions and [time.h] to time() function as paremeter in srand function
    
    // use of srand()
    srand(time(NULL)); // It is a special type of function in c language which allws the user to access c language built-in random number generater feature

    for (int i = 0; i < n; ++i) {
        number = (rand() % limit) + 1; // this is a special function because it should be used with srand only to complete random number generation program
        printf("%d\n", number);
    }
    
    
    
    
    printf ("\n********************* The End ************************\n");
    
    
    return 0;
}

    
    int main ()
    {
        
        firstprogram(); // this function has information regarding first program
        //datatypes(); //   this function has information regarding all data types used in C language
        //userinput(); // this function has information regarding syntax which is used in C language to take variable input from user.
        //typeconversion(); // This Function has information regarding the concept data type conversion
        //Operators(); // This function has information regarding all operators used in C language
        //loops(); // This function will have information about all types of loops used in c language program
        //function(); // this function will have information about the concept of functions in c language
        //recursionfunction(); // this function has all information about the concept of Recursive function in C language
        //arrays(); // This function will have information about the concept of arrays in c language
        //strings(); // this function has information about the concept strings in c language
        // pointers(); // this function has information about the cocept of pointers that we use in c language
        //structures(); // this function has information about the concept of structures that we comonnly use in c language
        //enumations(); // this function has information about the concept of enumations that we comonnly use in c language
        //dymelloc(); // this function has information about the concept of dynamic memory allocation that we comonnly use in c language
        //   fileoperations(); // this function has information about the concept of file handling operations that we comonnly use in c language
        // Macros();// this function has information about the concept of Mcro functions and directives that we comonnly use in c language
        //swapNumbers(5, 6); // this is the special function that we have created to swap any two numbers
        //randomNumbers();
        
        printf("\nThis program will use c language in-built random number generator to generate random nubers eveytime it exutes it will genrate different numbers according to user-defined limits\n");
        
        int limit;
        char number;
        int n;
        
        printf("\nTill what range you want to generate random numbers(max - 3152600) - ");
        scanf("%d", &limit);
        
        printf("\nHow many random numbers do you want to generate - ");
        scanf("%d", &n);
        // srand() - this function tells our program when to start generate new random numbers
        
        // rand() - this is the function which generates random numbers in our program.
        
        // if we use rand() without ant limits it will always genarate random numbers from 0 to 317500 [number = (rand() % 3) + 1;] this is the modified version of rand() function that is commonly used by c language programers(%3 will ensure that this function(rand()) will genrate random numbers between 0 and 3. we have use (+ 1) with rand() so that this program will generate numbers from 1 and 3 only

        // we have time(NULL) as pareter in srand() function because it gives our the ability to generate a random number everytime we execute the program
        
        
        // to use these functions in our program we alwaya need 2 header files [stdlib.h] - to acess rand() and srand() functions and [time.h] to time() function as paremeter in srand function
        
        // use of srand()
        srand(time(NULL)); // It is a special type of function in c language which allws the user to access c language built-in random number generater feature

        for (int i = 0; i < n; ++i) {
            number = (rand() % limit) + 1; // this is a special function because it should be used with srand only to complete random number generation program
            printf("%d\n", number);
        }
        
        
        
        
        printf ("\n********************* The End ************************\n");
        
        
        
        
        return 0;
    }
