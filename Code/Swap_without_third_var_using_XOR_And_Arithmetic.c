//Using bitwise XOR:

/*#include<stdio.h>
int main(){
    int a, b; 
    printf("Enter two numbers that you want to swap: \n");
    scanf("%d %d", &a, &b);

    a=a^b; 
    b=a^b; 
    a=a^b;  
    printf("Swaped Numbers are: %d And %d ", a, b);

}*/

//Using Arithmetic:

#include<stdio.h>
int main()
{
    int a, b; 
    printf("Enter two numbers that you want to swap: \n");
    scanf("%d %d", &a, &b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("Swaped Numbers are: %d And %d ", a, b);
}