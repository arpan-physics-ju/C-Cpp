#include<stdio.h>

int main(){
    int scholership,marks;
    printf("Marks:");
    scanf("%d",&marks);
    /*
    if (marks >= 60){
        scholership = 120000;
    }
    else{
        scholership = 0;
    }
    */
    scholership = (marks >= 60) ? 120000 : 0;
    printf("\n Scholership = %d \n",scholership);
    return scholership;
}