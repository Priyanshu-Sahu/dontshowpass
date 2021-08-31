/**
 * @Title= dontshowpass
 * This C file helps you to hide your 
 * password while typing it into the login interface
 * 
 * @by= Priyanshu Sahu
 */
#include <stdio.h>
#include <conio2.h>
#include <conio.c>

/* Password of maximum 10 characters + \0 */
#define MAX 11  

char pass[MAX];

/* dontshowpass funstion */

void dontshowpass(char pass[])
{
    int index=0;
    do{
        pass[index]=getch();
        if(pass[index]!='\r'){  
            printf("*");
        }
        index++;
    }while(pass[index-1]!='\r');
    pass[index-1]='\0';     /* End of array */
}

int main(void){
    
    printf("ENTER YOUR PASSWORD:\t\t");
    dontshowpass(pass);
    printf("\nYou have entered \'%s\' as your password. \nPLEASE SAVE IT!.",pass);
    getch();
}
