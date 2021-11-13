#include<stdio.h>
#include<string.h>
#define SIZE 100
char string[SIZE];
int choise, key;
void encrypt()
{
    puts("enter the key of encryption");
    scanf("%d", &key);
    fflush (stdin);
    puts("The string you want to encrypt? ");
    fgets(string, SIZE, stdin);
    for(int i=0; i<strlen(string); ++i)
    {
            string[i]+=key;
    }
    printf("after encryption: %s\n",string);
}
void decrypt()
{
    puts("enter the key of decryption");
    scanf("%d", &key);
    fflush (stdin);
    puts("The string you want to decrypt? ");
    scanf("%s",string);
    for(int i=0; i<strlen(string); ++i)
    {
            string[i]-=key;
    }
    printf("after decryption: %s\n",string);
}
int main(void)
{
    puts("press 1 to encrypt\npress 2 to decrypt\npress 3 to exit");
    scanf("%d",&choise);
    while(choise!=3)
    {
        if(choise==1)
            encrypt();
        else if(choise==2)
            decrypt();
        else
            puts("Invalid option");
        puts("press 1 to encrypt\npress 2 to decrypt\npress 3 to exit");
        scanf("%d",&choise);
    }
    puts("Pleased to help you!");
        return 0;
}
