#include<stdio.h>

void table(int x)
int main(){
    int x;
    printf("The table of: \t");
    scanf("%d",&x);
    table(x);
}

void table(int x){
    int ans;
    for(int i = 1; 1 <= 10; i++){
        ans = i*x;
        printf("%d \n",ans);
    }
}

