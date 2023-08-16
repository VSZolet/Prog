#include <string.h>
#include <stdio.h>

int main () {
   char str[28] = "aaabbbcccaaabbbcccaaabbbccc";
   const char s[5] = "aabb";
   char *token;

   /* get the first token */
   token = strtok(str, s);

   /* walk through other tokens */
   while( token != NULL ) {
      printf( " %s\n", token );

      token = strtok(NULL, s);
   }

   return(0);
}
