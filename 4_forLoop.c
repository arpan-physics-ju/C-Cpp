#include<stdio.h>

void main(){
    #define FIRSTMONTH 0
    #define LASTMONTH 300
    #define FREQUENCY 1

    float savingsPerMonth = 30000.00;
    float intRate = 0.0005;
    float totalAmount = 0.0;
    int month;

    for(month = FIRSTMONTH ; month <= LASTMONTH ; month = month + FREQUENCY){
        totalAmount = (totalAmount + savingsPerMonth + ((totalAmount + savingsPerMonth) *  intRate));
        printf("%d %f \n",month,totalAmount);
    }
}