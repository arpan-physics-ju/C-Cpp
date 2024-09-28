#include<stdio.h>

void namaste();
void bonjur();

int main(){
    printf("enter i for india, f for french:");
    char ch;
    scanf("%c", &ch);

    if (ch == 'i')
        namaste();
    else if (ch == 'f')
        bonjur();
    return 0;
}

void namaste(){
    printf("Namaste \n");
}

void bonjur(){
    printf("Bonjur \n");
}
