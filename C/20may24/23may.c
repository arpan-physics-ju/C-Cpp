#include<stdio.h>

int main(){
    int x;
    printf("The table of: \t");
    scanf("%d",&x);
    table(x);
    return 0;
}

void table(int x){
    int ans;
    for(int i = 1; 1 <= 10; i++){
        ans = i*x;
        printf("%d \n",ans);
    }
}

