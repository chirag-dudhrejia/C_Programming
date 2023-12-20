#include<stdio.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>
 
int main() {
   int upper = 0, lower = 0, i = 0;
   char ch[100];
   scanf(" %[^\n]s", ch);

   while (ch[i] != '\0')
   {
        if (ch[i] >= 'A' && ch[i] <= 'Z')
        {
            upper += 1;
        }
   
        if (ch[i] >= 'a' && ch[i] <= 'z')
        {
            lower += 1;
        }
        
        i++;
   }

   printf("Uppercase Letters : %d\n", upper); /*prints number of uppercase letters */
   printf("Lowercase Letters : %d", lower); /*prints number of lowercase letters */
 
   return (0);
}