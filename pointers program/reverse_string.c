#include<stdio.h>
#include<stdlib.h>
char * sreverse(char *,char *);
int main(){
    char *s="mom";
    char *reversestring;
    char *t;
    
    t=sreverse(s,reversestring);
    printf("%s\n",t);
    
    if(s==t){
        printf("Palindrome\n");
    }
    else{
        printf("Not palindrome");
    }
    return 0;
} 
char * sreverse(char *p,char *rs){
    rs=(char *)malloc(sizeof(p));
    char *sbackup,*rbackup;
    sbackup=p;
    rbackup=rs;
    for(;*p!='\0';p++);
    p--;
    while(sbackup!=p){
        *rs=*p;
        p--;
        rs++;
    }
    *rs=*p;
    rs++;
    *rs='\0';

    return rbackup;
}