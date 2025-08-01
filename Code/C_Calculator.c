#include<stdio.h>
#include<math.h>

float add(float a, float b){        //For Addition
    float res = a+b;
    return res;
}

float sub(float a, float b){        //For Subtraction 
    float res = a-b;
    return res;
}

float mul(float a, float b){        //For Multiplication
    float res = a*b;
    return res;
}

float div(float a, float b){        //For division
   float res = a/b;
   return res;
}

float square(float a){              //For Square
    float res = pow(a, 2);
    return res;
}

float square_root(float a){         //For Square root
      float res = sqrt(a);
      return res;
}

float cube(float a){                //For Cube
    float res = pow(a, 3);
    return res;
}

float cube_root(float a){           //For Cube root
    float res = cbrt(a);
    return res;
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


int main()
{

    float a, b, ans = 0; char choice;
    printf("Enter The Number: ");
    scanf("%f", &a);

    printf("Enter the number of selected the operation: \n +: Addition \n - : Subtraction\n *: Multiply \n /: Division\n S: Square \n R: Square root \n C: Cube \n Q: Cube root \n !: Factorial \n");
    scanf("%d", &choice);

    while(choice!=0)
    {
        switch(choice)
            {
                case '+': 
                        float b;
                        printf("Enter Second Number: ");
                        scanf("%f", &b);  
                        ans = add(a, b); break;                  //func calling of add so on....
                case '-': 
                        
                        printf("Enter Second Number: ");
                        scanf("%f", &b);  
                        ans = sub(a, b); break;       
                case '*':  
                        
                        printf("Enter Second Number: ");
                        scanf("%f", &b);  
                        ans = mul(a, b); break;
                case '/': 
                        
                        printf("Enter Second Number: ");
                        scanf("%f", &b);  
                        ans = div(a, b); break;

                case 'S': 
                        ans = square(a);
                        break;
                case 'R': 
                        ans = square_root(a); 
                        break;
                case 'C': 
                        ans = cube(a);    
                        break;
                case 'Q': 
                        ans = cube_root(a); 
                        break;
                case '!': 
                        ans = factorial(a); 
                        break;
            }
        a = ans;
    }

}

//Stucked from here......

/*
float ans = 0;
int n1 = [input by user]

while (operator != '0'){
    char operator = [input by user - + * /];

    switch ( operator ){
       case '+':
           int n2 = [input by user]
           ans = add(n1, n2)
           break;
       case '-':
           int n2 = [input by user]
           ans = sub(n1, n2);
          break;
      default:
          printf("Enter valid operation");
   }

   n1 = ans;
}*/

