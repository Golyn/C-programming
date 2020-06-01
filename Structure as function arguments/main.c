#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Books{
     char title[50];
     char author[50];
     char subject[100];
     int book_id;
};

/* function declaration */
void printBook(struct Books book);

int main()
{
    struct Books Book1;  /* Declare Book1 of type Book */
    struct Books Book2;  /* Declare Book2 of type Book */

  /* book 1 specification */
    strcpy(Book1.title, "C language");
    strcpy(Book1.author, "Seth Amankwah");
    strcpy(Book1.subject, "Structure in C language");
    Book1.book_id = 101;

     /* book 2 specification */
    strcpy( Book2.title, "Programming in C");
    strcpy( Book2.author, "Ismaila");
    strcpy( Book2.subject, "Function arguements");
    Book2.book_id = 123;

     /* print Book1 info */
     printBook( Book1 );

    printf("\n\n");

     /* Print Book2 info */
     printBook( Book2 );

    return 0;
}
//Function definition
void printBook(struct Books book)
{
     printf( "Book title : %s\n", book.title);
     printf( "Book author : %s\n", book.author);
     printf( "Book subject : %s\n", book.subject);
     printf( "Book book_id : %d\n", book.book_id);

}
