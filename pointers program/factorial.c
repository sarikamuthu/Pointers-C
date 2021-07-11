#include<stdio.h>
void factorial(int a,int *p);
int main(){
    int n=5;
    int fact;
    factorial(n,&fact);
    printf("Factorial is %d",fact);

    return 0;
}
void factorial(int a,int *p){
    
    *p=1;
    for(int i=1;i<=5;i++){
        *p=*p*i;
    }
}