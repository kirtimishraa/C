#include<stdio.h>
#include<math.h>
int main(){
    int N, n, rem, result=0, digits=0, NC; //NC is copied value of N
    printf("Enter any Number to check whether it's Armstrong or not: \n");
    scanf("%d", &N);

    NC=N;
    while(NC!=0){   
        digits=digits+1; 
        NC=NC/10;
    }
    NC=N;
    while(NC!=0){
    rem=NC%10;
    NC=NC/10;
    result=result+pow(rem, digits);
    }
    if(N!=result)
        printf("Entered Number is not a armstrong Number");
    else printf("Entered Number is a armstrong Number");
}




