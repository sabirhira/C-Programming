#include<stdio.h>
int main(){
    int num1,num2;
    int sum,sub,multi;
    scanf("%d %d",&num1,&num2);
    sum = num1+num2;
    sub = num1-num2;
    multi = num1*num2;
    float div = (float)num1/num2; //type casting across float data type.
    printf("%d + %d = %d\n",num1,num2,sum);
    printf("%d - %d = %d\n",num1,num2,sub);
    printf("%d * %d = %d\n",num1,num2,multi);
    printf("%d / %d = %0.2f\n",num1,num2,div);
    return 0;
}