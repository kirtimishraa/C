#include<stdio.h>
#include<string.h>
int main()
{
    int age;
    char Name[100], Religion[100], Hobby[100];
    printf("Enter Your Name: ");
    fgets(Name, sizeof(Name), stdin);
    Name[strcspn(Hobby, "\n")]=0;

    printf("Enter your age: ");
    scanf("%d", &age);
    getchar();

    printf("Enter your Hobby: ");
    fgets(Hobby, sizeof(Hobby), stdin);
    Hobby[strcspn(Hobby, "\n")] = 0;
    
    printf("Enter your religion: ");
    fgets(Religion, sizeof(Religion), stdin);  
    Religion[strcspn(Religion, "\n")]=0;
    
    printf("So Your Name is %s, you're %d Year old, %s is you hobby and %s is your religeion right?\n", Name, age, Hobby, Religion);

    printf("Y/N\n");
    char getconf;
    scanf("%c", &getconf);

    return 0; 
}





