#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    if(num>=0){
        if(num%2==0){
            printf("even");
        }
        else{
            printf("odd");
        }
    }
    else{
        printf("You have entered wrong data as input!\nThis is not non-negative integer!\nYou need to take one non-negative integer as input.\n");
    }
    return 0;
}