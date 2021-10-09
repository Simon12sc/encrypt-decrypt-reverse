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



void encrypt(){
    char message[100];
    int msgLength;
    printf("\nEnter message to encrypt:\n");
   fflush(stdin);
     gets(message);
     addValue(message,msgLength);
     msgLength=strLength(message);
     printf("Length:%d\n",msgLength);
     printf("\nEncryption 1st process=>   ");
     puts(message);
         printf("\nEncryption 2st process=>   ");
    reverse (message,0,msgLength-1);
        puts(message);
  printf("\nHence Message encrypted successfully!!\n");
}



void decrypt(){
    char message[100];
    int msgLength;
    printf("\nEnter message to decrypt:\n");
   fflush(stdin);
     gets(message);
     subValue(message,msgLength);
     msgLength=strLength(message);
     printf("Length:%d\n",msgLength);
     printf("\nDecryption 1st process=>   ");
     puts(message);
         printf("\nDecryption 2st process=>   ");
    reverse (message,0,msgLength-1);
        puts(message);
  printf("\nHence Message decrypted successfully!!\n");
}



void addValue(char message[],int msgLength){
    int i=0;
    while(message[i]!='\0'){
        message[i]+=2;
        i++;
    } 
}


void subValue(char message[],int msgLength){
    int i=0;
    while(message[i]!='\0'){
        message[i]-=2;
        i++;
    } 
}



int strLength(char message[]){
    int i=0;
    int length=0;
    while(message[i]!='\0'){
    length++;
    i++;
    }
    return length;
}



void reverse(char message[],int start,int end){
    char temp;
    if(start>=end){
        return;
    }
    temp=message[start];
    message[start]=message[end];
    message[end]=temp;
    reverse(message,start+1,end-1);
    
}












