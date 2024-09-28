#include<stdio.h>

void main(){
    int   month = 0;
    int   frequency = 1;
    float savingsPerMonth = 30000.00;   //Rupee
    float intRate = 0.0005;              //Percent
    float totalAmount = 0.0;            //Rupee
    float year;

    while(totalAmount <= 10000000){
        totalAmount = (totalAmount + savingsPerMonth + ((totalAmount + savingsPerMonth) *  intRate));
        month = month + frequency;
        printf("%d %f \n",month,totalAmount);
    }
    year = (month*1.0)/12;
    printf("Total year :%5f y \n",year);
}