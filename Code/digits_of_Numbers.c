#include<stdio.h>
int main(){
    int N, digits=0, rem, temp=1;
    printf("Enter the Number to know its digits: \n");
    scanf("%d", &N);

    while(N!=0){
        digits=digits+1;
        N=N/10;
             
}
    printf("Entered Number have %d digits", digits);
}