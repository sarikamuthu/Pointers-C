#include<stdio.h>
#include<stdlib.h>
char *copy(char *a,char *b);
int main(){
    char s[]="Hello";
    char *t;
    char a =copy(s,t);
    printf("%s",a);
    return 0;
}
char *copy(char *a,char *b){
    b=(char *)malloc(sizeof(a));
    char *temp;
    temp=b;
    while(*a!='\0'){
        *b=*a;
        a++;
        b++;
    }
   
    *b='\0';
    return temp;
}