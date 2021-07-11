#include<stdio.h>
void fl(char *p,int i);
void f_l(char [],int i);
int main(){
    char s[]="Hello";
    fl(s,1);
    printf("%s\n",s);
    f_l(s,4);
    printf("%s\n",s);
    return 0;
}
void fl(char *p,int i){
    *(p+i)='a';
}
void f_l(char b[],int i){
    b[i]='a';
}