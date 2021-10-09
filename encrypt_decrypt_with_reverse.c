#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>


void encrypt();
void decrypt();
void addValue(char message[],int msgLength);
void subValue(char message[],int msgLength);
int strLength(char message[]);
void reverse(char message[],int start,int end);



int main(){
    char choice; 
    again:
   printf("\nWhat you want to do?");
   printf("\n 1.Encrypt");
   printf("\n 2.decrypt");
   printf("\n 3.Exit\n=>");
   
   choice=getche();
    switch(choice){
        
        case '1':
        system("cls");
        encrypt();
        printf("\n\npress any key");
        getch();
        system("cls");
        goto again;
        break;
        
        case '2':
        system("cls");
        decrypt();
        printf("\n\npress any key");
        getch();
        system("cls");
        goto again;
        break;
        
        case '3':
        exit(0);
        
        default:
        printf("!!invalid");
        system("cls");
        goto again;
        break;
    }    
}


