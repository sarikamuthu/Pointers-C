#include<stdio.h>
#include<stdlib.h>
void common(char *a,char*b,char *c){
    // printf("%c\n",*a);
    // printf("%c",*b);
    char *backup;
    
    backup=c;
    // backup=(char *)malloc(sizeof(char));
    // for(int i=0;b!='\0',i<7;i++)
    while(*a!='\0'){
        while(*b!='\0'){
        if(*a!=*b){
            *backup=*b;
            backup++;
            
        }
        b++;
        }
        b--;
        for(;*b!='\0';b--);
        b++;
        a++;
   
    }   
}
int main(){
    char str1[100], str2[100]; // Defining two strings. 
    printf("Enter two string:\n");
    scanf("%s %s", &str1, &str2); // Scanning two strings. 
    // char str1[100];
    // char str2[100];
    char *u;
    // printf("Enter string 1:\n");
    // scanf("%[^\n]",str1);
    // printf("\n");
    // printf("Enter string 2:\n");
    // scanf("%[^\n]",str2);
    // char *s="keyboard";
    // char *t="keypad";
  
    u=(char *)malloc(sizeof(char));
    common(str1,str2,u);
    printf("The common characters of both is:\n");
    printf("%s",u);

    return 0;
}