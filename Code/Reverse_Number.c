#include<stdio.h>
int main()
{
    int n,i=0;
    printf("Enter a number for which you want reverse value \n");
    scanf("%d", &n);
    
    for(;n!=0; n=n/10)
    {
        int rem = n%10; 
         i = i*10+rem; 
    }
    printf("Integers are: %d", i);

}
