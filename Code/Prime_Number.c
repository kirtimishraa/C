#include<stdio.h>     
#include<math.h>
#include<stdbool.h>
int main()
{
    int N,rem,R;
    printf("Enter a number for that you want to find prime number: \n");
    scanf("%d", &N);
    bool Result=false;
    R = sqrt(N);
    for(int i=2; i<=R; i++)
    {
        rem = N%i;
        if(rem==0)
        Result=true;
        break;
    }
    if(Result)
    printf("Number is Not a prime number");
    else("Number is a prime Number");
}





  /**double R, Rem, N;
    printf("Enter a number that you want to check whether it's prime or not ? \n ");
    scanf("%f", &N);
    R=sqrt(N);
    for(N!=0; N/R; R--)
    {  
       Rem=N%R;
       if(Rem==0)
       return Rem;
    }
    printf("Number is prime"); */







    /*{                                              
    /*int R, Rem, N;
    bool prime=false;     
    printf("Enter a number that you want to check whether it's prime or not ? \n ");                               
    scanf("%d", &N);                                    
    R=sqrt(N);
    for(int i=2; i<=R; i++)
    {
       if(N%i==0)
       { 
        prime = true;                                       
        break;                                             
        }  
    }                                                    
        if(prime) printf("Number is prime");                 
        else printf("Number is not prime");              
}
   */
   