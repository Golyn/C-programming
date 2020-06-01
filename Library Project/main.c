// Library Project in C
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Library Structure

typedef struct Library
{
    char bookTitle[30];
    char author[30];
    int pages;
    float price;
}Lib;

Lib *book; // Global Book type pointer so that it can be used in another functions including the main function since it wasnt declared in the main()

int keepcount = 0; // Global variable
int sizes;  // Global variable for dynamic memeory allocation

// Function to Add New Book
void addBook()
{
    system("cls");
    system("color 97");  // Changing console color
    printf("\n********* Add New Book Details ********* ");
    printf("\nEnter Book Title : ");
    gets(book[keepcount].bookTitle);
    printf("\nEnter The Author : ");
    gets(book[keepcount].author);
    fflush(stdin);
    printf("\nEnter The Number of Pages : ");
    scanf("%d",&book[keepcount].pages);
    printf("\nEnter Book Price : ");
    scanf("%f",&book[keepcount].price);
    keepcount++;
}

// Function to Show All Books Records
void showAllRecords()
{
    system("cls");
    int i;
    system("color 71");
    printf("\n\n\t\t================================= Book Details ======================================");
    printf("\n\n\t\t-------------------------------------------------------------------------------------");
    printf("\n\t\tBOOK TITLE\t\tBOOK AUTHOR\t\tNUMBER OF PAGES\t\tPRICE OF BOOK");
    printf("\n\t\t-------------------------------------------------------------------------------------\n");
    for(i = 0; i < keepcount; i++)
    {
        printf("\n\t\t%s", book[i].bookTitle);
        printf("\t\t%s", book[i].author);
        printf("\t\t%d", book[i].pages);
        printf("\t\t%f\n", book[i].price);

    }
}

// Function to Search Book by Title
void searchBook()
{
    char bk_title[30];
    int i;
    printf("\Enter Book title to be Searched: ");
    gets(bk_title);
    for(i = 0; i < keepcount; i++)
    {
        if(strcmp(bk_title, book[i].bookTitle)==0)
        {
            system("cls");

            printf("\n\t\t ========== BOOK DETAILS ==========");
            printf("\n\t\tBook Title :  %s", book[i].bookTitle);
            printf("\n\t\tAuthor :  %s", book[i].author);
            printf("\n\t\tNumber of Pages :  %d", book[i].pages);
            printf("\n\t\tPrice :  %.2f", book[i].price);

        }
    }
}

// Function to Remove Book by Title
void removeBook()
{
    char bk_title[30];
    int i,j;
   // Lib temp;
    printf("\nEnter Book Title to Remove");
    gets(bk_title);
    for(i = 0; i < keepcount; i++)
    {
        if(strcmp(bk_title, book[i].bookTitle)==0)
        {
            system("cls");

            printf("\n\t\t ========== Remove Book Details ==========");
            printf("\n\t\tBook Title :  %s", book[i].bookTitle);
            printf("\n\t\tAuthor :  %s", book[i].author);
            printf("\n\t\tNumber of Pages :  %d", book[i].pages);
            printf("\n\t\tPrice :  %f", book[i].price);
            for(j = i; j < keepcount - 1; j++)
                book = book+1;
            keepcount--;
            return;
        }
    }

}

// Function to Update Book by Title
void updateBook()
{
   char bk_title[30];
   int i,j;
   Lib *temp;
   printf("\nEnter Book Title to Remove");
   gets(bk_title);
   for(i = 0; i < keepcount; i++)
   {
        if(strcmp(bk_title, book[i].bookTitle)==0)
        {
            system("cls");

            printf("\n\t\t ========== Remove Book Details ==========");
            printf("\n\t\tBook Title :  %s", book[i].bookTitle);
            printf("\n\t\tAuthor :  %s", book[i].author);
            printf("\n\t\tNumber of Pages :  %d", book[i].pages);
            printf("\n\t\tPrice :  %f", book[i].price);

            printf("\n********* Add New Book Details ********* ");
            printf("\nEnter Book Title : ");
            gets(book[i].bookTitle);
            printf("\nEnter The Author : ");
            gets(book[i].author);
            fflush(stdin);
            printf("\nEnter The Number of Pages : ");
            scanf("%d",&book[i].pages);
            printf("\nEnter Book Price : ");
            scanf("%f",&book[i].price);
        }
    }
}
int main()
{
    int selection;
    printf("\nEnter Total No. of Books You Want to Add in Library : ");
    scanf("%d",&sizes);

    // Create BOok Array Dynamic Using size input by User
    book = (Lib*)malloc(sizeof(Lib)*sizes);
    do
    {
        //system("cls");
        printf("\n1.Add Book\n2.Show All Books\n3.Search Book\n4.Remove Book\n5.Update Book\n6.Exit\n");
        printf("Select from the Menu: ");
        scanf("%d",&selection);
        fflush(stdin);
        switch(selection)
        {
              case 1:
                  addBook();
                  break;
              case 2:
                  showAllRecords();
                  break;
              case 3:
                  searchBook();
                  break;
              case 4:
                  removeBook();
                  break;
              case 5:
                  updateBook();
                  break;
              case 6:
                  exit (0); // return; can be used as well
        }
        getch();
  }while(1);
 return 0;
}
