#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("%d\t%d\t%d\t%d\n",5,10,15,20);  // /t means horizontal tab
    printf("%d\v%d\v%d\v%d\n",5,10,15,20);   // /v means vertical tab
    printf("Software\b program\n");    // /b deletes the last character of a word but not that of the last word
    printf("Software\b progr\bam\n");
    printf("SOFTWARE\b\b\b progr\bam"); //deletes the last 3 characters of software
    return 0;
}
