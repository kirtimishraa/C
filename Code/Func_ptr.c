 #include<stdio.h>

 int add(int a, int b){
    return a+b;
 }

int main(){
  int a, b, result;
    printf("Enter the Numbers: \n");
    scanf("%d %d", &a, &b);
    int (*funcPtr)(int, int);             // Ptr declaration for 2 parameters i.e inputs
    funcPtr = add;                        // assigning address of add function to the pointer funcPtr
    result = funcPtr(a,b);                // storing the value that pointer holds of function to the result
    printf("Sum of the number is: %d \n", result);
    return 0;
}