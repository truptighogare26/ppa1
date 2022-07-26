#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    
    char ch;
    char s1[100];
    char sen[100];
      scanf("%c\n",&ch);

       scanf("%[^\n]s\n",s1);
    
       scanf(" %[^\n]s",sen);
    
    printf("%c\n",ch);
    printf("%s\n", s1);
     printf("%s",sen);
    
    
    
    return 0;
}