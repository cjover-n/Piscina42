#include <stdio.h>
#include <string.h>

int main()
{
   char s2[8] = "abcdefg";
   char s1[8];

   strncpy( s1, s2, 3 );
   printf( "s2=%s\n", s2 );
   printf( "s1=%s\n", s1 );

   return 0;
}
