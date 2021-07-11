#include<stdio.h>
void st(char *p);
int main(){
    char s[5]="Hello"; //we can use char *s="Hello" also
    st(s);

    return 0;
}
void st(char *p){
    int i=0;
    while(p[i]!='\0'){
        printf(" %c",p[i]);
        i++;
    }
    
}