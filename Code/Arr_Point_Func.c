#include<stdio.h>
float func(int *N, int n)
{
    float sum=0, fun_avg;
    for(int i=0; i<n; i++)
    {
        sum = sum+N[i];
    }
    fun_avg=sum/n;
    return fun_avg;
}


int main(){
    int N[100], n; float sum=0, avg;
    printf("Enter for how many Number you want to calculate Average:\n");
    scanf("%d", &n);

    printf("Enter those %d Numbers:\n", n);
    if(n<0 || n>100)
    printf("You have entered either negative or You have Entered More than 100 digits, please check and re-enter");
    else{

    for(int i=0; i<n; i++){
        scanf("%d", &N[i]);
    }

    avg = func(N, n);
    printf("Average of entered Number is: %.2f", avg);
}
}