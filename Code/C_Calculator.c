#include<stdio.h>
#include<math.h>

float add(float a, float b){        //For Addition
    return a+b;
}

float sub(float a, float b){        //For Subtraction 
    return a-b;
}

float mul(float a, float b){        //For Multiplication
    return a*b;
}

float div(float a, float b){        //For division
    return a/b;
}

float square(float a){              //For Square
    return pow(a, 2);
}

float square_root(float a){         //For Square root
      return sqrt(a);
}

float cube(float a){                //For Cube
    return pow(a, 3);
}

float cube_root(float a){           //For Cube root
    return cbrt(a);
}

float factorial(float a)            //For factorial
{
    float fact = 1;  
    for(int i=1; i<=a; i++)
        {
            fact = fact*i;
        }
    return fact; 
}

float Operations(float *a, float *b, int *choice)    //Have passed Swicth to the fucntion operations of all operations/calculations.
{

    switch(*choice)
    {
        case 0: return add(*a, *b); break;          //func calling of add so on....
        case 1: return sub(*a, *b); break;       
        case 2: return mul(*a, *b); break;
        case 3: return div(*a, *b); break;
        case 4: return square(*a);  break;
        case 5: return square_root(*a); break;
        case 6: return cube(*a);    break;
        case 7: return cube_root(*a); break;
        case 8: return factorial(*a); break;
    }
}

int main()
{

    float a, b, result = 0; int choice; char sec_ops;
    printf("Enter The Number: ");
    scanf("%f", &a);
    printf("Enter  the number of selected the operation: \n 0: Addition(+) \n 1: Subtraction(-) \n 2: Multiply(*) \n 3: Division(/) \n 4: Square \n 5: Square root \n 6: Cube \n 7: Cube root \n 8: Factorial \n");
    scanf("%d", &choice);

    if(choice<0 || choice>8){
        printf("\nYou have Entered an invalid operation. Enter the valid one: \n");
        scanf("%d", &choice);
        }

    if(choice<4 && choice>=0)           //For choices/calculations which need 2nd digit to execute
        {
            printf("Enter The Second Number: ");
            scanf("%f", &b);
        }

    result = Operations(&a, &b, &choice);

        printf("Result is : %.2f\n", result);

    
    printf("Enter y to proceed calculation with result -> %.2f", result);
    scanf(" %c", &sec_ops);

    if(sec_ops == 'y' || sec_ops == 'Y')
    {
        scanf("%d", &choice);
        Operations(&a, &b, &choice);

    }
    
    return 0;
}
