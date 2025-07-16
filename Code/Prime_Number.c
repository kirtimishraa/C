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
   