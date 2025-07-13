#include<stdio.h>
int main()
{
    int bin, N, rem, rem2;
    printf("Enter any number: \n");
    scanf("%d", &N);
    while(rem!=0){

        N = N/2;
        rem = N%2;
    }
    for(;rem!=0; rem=rem/10)
    {
        rem2=rem%10;
        bin=10*bin+rem2;

    printf("Binary of your entered decimal number is: ", bin);
    }

}












