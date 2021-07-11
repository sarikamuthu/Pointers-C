#include<stdio.h>
#include<stdlib.h>
char *concatenate(char *a,char *b,char *c);
int main(){
    char *a="Hi";
    char *b="Sarika";
    char *c;
    char m=concatenate(a,b,c);
    printf("%s",m);
    return 0;
}
char *concatenate(char *a,char *b,char *c){
    c=(char *)malloc(sizeof(a)+sizeof(b));
    char *temp;
    temp=c;
    while(*a!='\0'){
        *c=*a;
        a++;
        c++;
    }
    while(*b!='\0'){
        *c=*b;
        b++;
        c++;
    }
   
    *c='\0';
    return temp;
}