#include<stdio.h>
#include<stdlib.h>
void *delimiter(char *,char *,char *);
int main(){
    char *s="becse@ssn";
    char *t;
    t=(char *)malloc(sizeof(char));
    char *u;
    u=(char *)malloc(sizeof(char));
    delimiter(s,t,u);
    printf("%s\n",t);
    printf("%s\n",u);

    return 0;
}
void *delimiter(char *a,char *b,char *c){
    char *first,*second,*back;
    first=b;
    second=c;
    while(*a!='\0'){
        if(*a=='@'){
            a++;
           while(*a!='\0'){
            *second=*a;
            // printf(" %c\n",*second);
            second++;
            a++;
        }
        printf("\n");
        }
        
        else{
            *first=*a;
            first++;
            // printf(" %c",*first);
            a++;
        }
        
    }
    
    // printf("%s\n",b);
    // printf("%s",c);
    
}