#include<stdio.h>

void print(char arr[]);

int main(){

    char name[] = "Arpan Purkait";
    /*
    or 
    char name[] = {'A','r','p'........,'\0'};
    */
   print(name);

   return 0;
}

void print(char arr[]){
    for (int i = 0; arr[i] != '\0' ; i++){
        printf("%c", arr[i]);
    }
    printf("\n");
}
