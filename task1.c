#include <stdio.h>
#include <string.h>

 int main()
{

    int regi_password;
    char regi_name[30];

   

    printf("REGISTRATION \nenter your name and password :\n");
    scanf("%s %d", regi_name, &regi_password);

     int password;
    char name[30];

    printf("LOGIN  \nenter your name and password :\n");
    scanf("%s %d",name,&password);

    if (strcmp(regi_name, name) == 0 && regi_password == password)
        printf("LOGIN SUCCESS");
    else
        printf("LOGIN FAILED");


    return 0;
}