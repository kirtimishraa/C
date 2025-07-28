#include<stdio.h>
#include<math.h>
# define BinOps 4            //  For operations which needs two digits
# define unOps 5            // For operations which needs one digits

float add(float a, float b){
    return a+b;
}

float sub(float a, float b){
    return a-b;
}

float mul(float a, float b){
    return a*b;
}

float div(float a, float b){
    return a/b;
}

float square(float a){
    return pow(a, 2);
}

float square_root(float a){
      return sqrt(a);
}

float cube(float a){
    return pow(a, 3);
}

float cube_root(float a){
    return cbrt(a);
}

float factorial(float a)
{
    float fact = 1;  
    for(int i=1; i<=a; i++)
        {
            fact = fact*i;
        }
    return fact; 
}

int main()
{   
    float a, b; int choice;
    printf("Enter the first Number: \n");
    scanf("%f", &a);

    printf("Click the number of selected the operation: \n 0: Addition \n 1: Subtraction \n 2: Multiply \n 3: Division \n 4: Square \n 5: Square root \n 6: Cube \n 7: Cube root \n 8: Factorial \n");
    scanf("%d", &choice);

    if(choice<4)            // If it's two digits operation take second input
    {
    printf("Enter the Second Number: \n");
    scanf("%f", &b);
    
    float (*Ptr[BinOps])(float, float) = {add, sub, mul, div};                 //Created an array [4]of pointer to take the address of each function respectively
    printf("The result of selected operation is: %.3f", Ptr[choice](a, b));
    }

    if(choice>=4)                                                              //if its one digit operation
    {       
        float(*ptr2[unOps])(float) = {square, square_root, cube, cube_root, factorial};     //Created array [5] of pointer to take the address of func respe...
        printf("The result of selected operation is: %.3f", ptr2[choice-4](a)); //As we want function indexing start from 4 not 0 by default, so if user enters 5 for square root it's 5-4=1 and then second element of array function which is square root
    }

    return 0;
}