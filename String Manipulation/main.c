#include <stdio.h>
#include <stdlib.h>
#include <string.h> //strstr(s1, s2):
/* C supports a wide range of functions that manipulate null-terminated strings:
-) strcpy(s1, s2): Copies string s2 into string s1.
-) strcat(s1, s2): Concatenates string s2 onto the end of string s1.
-) strlen(s1): Returns the length of string s1.
-) strcmp(s1, s2): Returns 0 if s1 and s2 are the same; less than 0 if s1<s2; greater than 0 if s1>s2.
-) strchr(s1, ch): Returns a pointer to the first occurrence of character ch in string s1.
-) strstr(s1, s2): Returns a pointer to the first occurrence of string s2 in string s1.
                  strstr(s1, s2):  s1: This is the main string to be examined.
                  strstr(s1, s2):  s2: This is the sub-string to be searched in s1 string.
                  Return Value: This function returns a pointer points to the first character of the
                  found s2 in s1 otherwise a null pointer if s2 is not present in s1. If s2 points to
                  an empty string, s1 is returned.

*/


int main()
{
    char str1[10] = "Hello";
    char str2[12] = "World";
    char str3[15] ;
    int len;

     /* Copy str1 into str3 */
    strcpy(str3, str1);
    printf("strcpy(str3, str1) is %s\n", str3);

    /* Concatenate str2 onto str1 */
    strcat(str1, str2);
    printf("strcat(str1, str2) is %s\n", str1);

   /* Total lenghth of str1 after concatenation */
    len = strlen(str1);
    printf("strlen(str1) is %d\n", len);

   // Finding the first occurrence of check("ll") in s1
    char check[] = "ll";
    char *che;
    che = strstr(str1, check);
    if(che){
        printf("String found\n");
        printf("First occurrence of string '%s' in '%s' is '%s'", check, str1, che);
    } else
        printf("String not found\n");

  /*
// eg2.
    Take any two strings
    char s1[] = "GeeksforGeeks";
    char s2[] = "for";
    char* p;

    // Find first occurrence of s2 in s1
    p = strstr(s1, s2);

    // Prints the result
    if (p) {
        printf("String found\n");
        printf("First occurrence of string '%s' in '%s' is '%s'", s2, s1, p);
    } else
        printf("String not found\n");
        */
    return 0;
}
