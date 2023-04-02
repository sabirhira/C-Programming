#include<stdio.h>
int main(){
    int a,b,sum,sub,multi,div_c1t1,div_c1t2,div_c2t1,div_c2t2,rem_t1,rem_t2;
    float div_c1t3,div_c2t3;
    a=3,b=20;
    sum = a+b; 
    printf("Summation: %d\n",sum);
    sub = a - b;
    printf("Subtraction: %d\n",sub);
    multi = a * b;
    printf("Multiplication: %d\n",multi);
    printf("\t\t|Division case-1|\n");
    div_c1t1 = b / a;
    printf("Division Type-1: %d\n",div_c1t1);
    div_c1t2 = b * 1.0 / a;  
    printf("Division Type-2: %d\n",div_c1t2);
    div_c1t3 = b * 1.0 / a; 
    printf("Division Type-3: %0.2f\n",div_c1t3);
    printf("\t\t|Division case-2|\n");
    div_c2t1 = a / b;
    printf("Division Type-1: %d\n",div_c2t1);
    div_c2t2 = a * 1.0 / b; 
    printf("Division Type-2: %d\n",div_c2t2);
    div_c2t3 = a * 1.0 / b;  
    printf("Division Type-3: %0.3f\n",div_c2t3);
    printf("\t\t|Reminder|\n");
    rem_t1 = b % a;  //20%3 = 2;
    printf("Reminder Type-1: %d\n",rem_t1);
    rem_t2 = a % b;  //3%20 = 3;
    printf("Reminder Type-2: %d\n",rem_t2);
    return 0;
}
