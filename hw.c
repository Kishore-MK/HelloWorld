#include<stdio.h>
int main()
{
    char msg[20];
    printf("enter your message: ");
    fgets(msg,sizeof(msg),stdin);
    printf("%s", msg);
}