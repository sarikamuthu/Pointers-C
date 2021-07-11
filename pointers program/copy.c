#include<stdio.h>
#include<stdlib.h>
void copy(char *,char *);
int main(){
    char s[]="Hello";
    char *t;
    t=(char *)malloc(sizeof(s));
    copy(s,t);
    printf("%s",t);
    return 0;
}
void copy(char *a,char *b){
    int i=0;
    while(*a!='\0'){
        *b=*a;
        a++;
        b++;
    }
    *b='\0';  //we need to end the string !! remember
}