//palindrome string without looping complete string
#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main()
{
    char N[100]; int len, i, j; bool palin = true;
    printf("Enter any word without space to check whether its palindrome or not: \n");
    scanf("%s", N);
    len = strlen(N);
    i=0;
    j=len-1;

    while(i<j)
    {
        if(N[i]!=N[j])
            {
                palin = false;
                break;
            }
        i++;
        j--;
    }
    if(palin)
    printf("Entered word is a palindrome.");
    else printf("Entered word is not a palindrome.");

}












