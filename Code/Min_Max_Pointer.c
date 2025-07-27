#include<stdio.h>

void min_Max(int Num[], int n, int *min, int *max)
{   
    *min = *max = Num[0];
    for(int i=1; i<n; i++)
    {
        if(Num[i]>*max)
        *max=Num[i];
        if(Num[i]<*min)
        *min = Num[i]; 
    }
}

int main()
{
    int N[100], n, i, min, max;
    
    printf("Enter the Numbers in the series that you want to check the Max and min: \n")
    scanf("%d", &n);

    printf("Enter the series of numbers using space from which you want to get Min and Max: \n");

    for(i=0; i<n; i++)
        {
            scanf("%d", &N[i]);
        }
    min_Max(N, n, &min, &max);

    printf("The Minimmum Value from entered series is %d, And the Maximum value is: %d", max, min );
}

