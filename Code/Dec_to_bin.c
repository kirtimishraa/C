#include<stdio.h>
int main()
{
    int N, rem, reverse, temp=1;
    printf("Enter a number for which you want binary: \n");
    scanf("%d", &N);

    while(N!=0)
    {
        rem=N%2;
        reverse=rem*temp+reverse;
        temp = temp*10;
        N=N/2;
    }
    printf("The binary of Entered Number is: %d", reverse);
}
