#include<stdio.h>
int main(){
    int N[100], i, n; float sum=0, avg; //Initialization
    printf("For how many numbers you want to calculate Average:\n");     //To get the digits
    scanf("%d", &n);

    printf("Fine! Enter those %d numners (Enter space after every number):\n", n);  //To get the numbers if that digits
    for(i=0; i<n; i++)
    {
        scanf("%d", &N[i]);                                 //i is poiting to first address of array 
        sum=sum+N[i];                                       // passiing the address to get the increment to the array after eveyr loop
    }
    avg=sum/n;
    printf("Average of entered Number is: %.2f", avg);
}
