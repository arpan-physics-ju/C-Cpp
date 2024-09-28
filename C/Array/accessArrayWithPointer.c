#include<stdio.h>


int marks[6];
void getMarks();
int percentage();


void main(){
    int n;
    int *ptr = &marks[0];
    getMarks();
    percentage();
    scanf("%d",&n);
    for(int i = 0; i <= n; i++){
        ptr++;
        printf("%d",ptr);
    }
        printf("%d",ptr);   
} 

void getMarks(){
    printf("Enter Score - \n");
    printf("Bengali: \t");
    scanf("%d",&marks[0]);

    printf("\n English: \t");
    scanf("%d",&marks[1]);

    printf("\n Physics: \t");
    scanf("%d",&marks[2]);

    printf("\n Mathematics: \t");
    scanf("%d",&marks[3]);

    printf("\n Biology: \t");
    scanf("%d",&marks[4]);

    printf("\n Chemistry: \t");
    scanf("%d",&marks[5]);
}

int percentage(){
    int sum = 0;
    for (int i = 0; i <= 5; i++)
    {
        sum += marks[i];
    }
    printf("Your Percentage is:\t%d\n",(sum / 6));
    return (sum / 6);
}

