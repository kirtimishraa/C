#include<stdio.h>
void Swap(int *x, int *y)
{
    int t;
    t = *x;
    *x = *y;
    *y = t;
}

int main()
{
    int x,a ,b;
    printf("Enter Two value that you want to swap \n : %d %d \n", a,b);
    scanf("%d %d", &a, &b);
    Swap(&a, &b);
    printf("Swapped values are: %d %d", a, b);
}






