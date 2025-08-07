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

float Nat_log(float a){              //For Natural log
        float Nlog;
        Nlog= log(a);
    return Nlog;
}

float com_log(float a){               //For Common log
        float Clog;
        Clog= log10(a);
    return Clog;
}

float Nat_anLog(float a){            //Antilog base e
    float NAlog = exp(a);
    return NAlog;
}

float com_anLog(float a){            //Antilog base 10
    float NCAlog = pow(10,a);
    return NCAlog;
}


int out(){
    return 1;
}


int main()
{

    float a, b, ans = 0; char choice;
    printf("Enter The Number: ");
    scanf("%f", &a);

    printf("Enter the number of selected the operation (Characters should be Capital): \n +: Addition \n -: Subtraction\n *: Multiply \n /: Division\n S: Square \n R: Square root \n C: Cube \n Q: Cube root \n !: Factorial \n L: log(Natural & Common log) \n A: Antilog \n X: Exit \n");

    while(choice != 'X')
    {
        scanf(" %c", &choice);
        switch(choice)
            {
                case '+': 
                        printf("Enter Second Number: ");
                        scanf("%f", &b);  
                        ans = add(a, b);                 //func calling of add so on....
                        printf("Result is: %.2f \n", ans);
                        printf("Enter the Next operation: ");
                        break;  
                case '-': 
                        
                        printf("Enter Second Number: ");
                        scanf("%f", &b);  
                        ans = sub(a, b);
                        printf("Result is: %.2f\n", ans); 
                        printf("Enter the Next operation: ");
                        break;       
                case '*':  
                        
                        printf("Enter Second Number: ");
                        scanf("%f", &b);  
                        ans = mul(a, b); 
                        printf("Result is: %.2f \n", ans);
                        printf("Enter the Next operation: ");
                        break;
                case '/': 
                        
                        printf("Enter Second Number: ");
                        scanf("%f", &b);  
                        ans = div(a, b);
                        printf("Result is: %.2f \n", ans);
                        printf("Enter the Next operation: ");
                        break;

                case 'S': 
                        ans = square(a);
                        printf("Result is: %.2f \n", ans);
                        printf("Enter the Next operation: ");
                        break;
                case 'R': 
                        ans = square_root(a);
                        printf("Result is: %.2f \n", ans);
                        printf("Enter the Next operation: ");
                        break;
                case 'C': 
                        ans = cube(a);  
                        printf("Result is: %.2f \n", ans);  
                        printf("Enter the Next operation: ");
                        break;
                case 'Q': 
                        ans = cube_root(a); 
                        printf("Result is: %.2f \n", ans);
                        printf("Enter the Next operation: ");
                        break;
                case '!': 
                        ans = factorial(a); 
                        printf("Result is: %.2f \n", ans);
                        printf("Enter the Next operation: ");
                        break;
                case 'L':
                        char choose_log;
                        printf("Enter N: Natural log(base e), C: Common log(log₁₀): ");
                        scanf(" %c", &choose_log);

                            if(choose_log == 'N')
                             {
                                ans = Nat_log(a);
                                printf("Natural log 'ln x' (base e) ≈ %lf\n", ans);
                             }
                            else if(choose_log == 'C')
                             {
                                ans = com_log(a);
                                printf("Common log (log₁₀) ≈ %lf\n", ans);

                             }
                            else printf("Please Enter correct option! ");
                        printf("Enter the Next operation: ");
                        break;

                case 'A': 
                        char choose_Antlog;
                        printf("Enter N: Antilog base e (e^x), C: Antilog base 10 (10^x)");
                        scanf(" %c", &choose_Antlog);
                             if(choose_Antlog == 'N')
                             {
                                ans = Nat_anLog(a);
                                printf("Antilog base e (e^x) = %lf\n", ans);
                             }
                             else if(choose_Antlog == 'C')
                                {
                                    ans = com_anLog(a);
                                    printf("Antilog base 10 (10^x) = %lf\n", ans);
                                }
                              else printf("Please Enter correct option! ");
                            printf("Enter the Next operation: ");
                            break;
                            

                case 'X': 
                        out();  
                        break;    
                default: 
                        printf("Enter Correct Operaton! ");
                        break;
            }
        a = ans;
    }

    return 0;
}

