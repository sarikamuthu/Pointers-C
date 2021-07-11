#include <stdio.h>
char* trim(char* str)
{
    static char str1[99];
    int count = 0, b, c;
    while (str[count] == ' ') {
        count++;
    }
    for (b = count, c = 0;
         str[b] != '\0'; b++, c++) {
        str1[c] = str[b];
    }
    str1[c] = '\0';
  
    return str1;
}
  

int main()
{
    char str[100];
    printf("Enter string:\n");
    scanf("%[^\n]",str);
    char* ptr;
    ptr = trim(str);
    printf("String after trim:\n");
    printf("%s", ptr);
    return 0;
}