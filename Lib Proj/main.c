// Library Project in C
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Dynamic Memory Allocation is the process of allocating memory at runtime. Library fnx known as "memory management fnx" are used for allocating and freeing memory during execution of a program. These fnx are defined in stdlib.h
The memory is allocated to a variable or program at the run time. The only way to access this dynamically allocated memeory is through pointer.
-malloc();
The malloc() fnx allocates a block of size bytes from the memory heap. It allows a program to allocates as it's needed and in the exact amount needed.
*/

// Library Structure
typedef struct Library
{
    char bookTitle[30];
    char author[30];1
    int pages;
    float price;
}Lib;

Lib *book; // Global Book type pointer

int keepcount = 0; // Global count variable
int sizes;  // Global variable for dynamic memeory allocation

// Function to Add New Book
void addBook()
{
    system("cls");
    system("color 97");  // Changing console color
    printf("\n********* Add New Book Details ********* ");
    printf("\nEnter Book Title : ");
   // gets(book[keepcount].bookTitle);
    fgets(book[keepcount].bookTitle,30,stdin);
    printf("\nEnter The Author : ");
   // gets(book[keepcount].author);
    fgets(book[keepcount].author,30,stdin);
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
    system("cls"); // Clearing console screen
    int i;
    system("color 71"); // Changing console color
    printf("\n\n\t\t================================= Book Details ======================================");
    printf("\n\n\t\t-------------------------------------------------------------------------------------");
    printf("\n\t\tBOOK TITLE\t\tBOOK AUTHOR\t\tNUMBER OF PAGES\t\tPRICE OF BOOK");
    printf("\n\t\t-------------------------------------------------------------------------------------\n");
    for(i = 0; i < keepcount; i++)
    {
        printf("\n\t\t%s", book[i].bookTitle);
        printf("\t\t%s", book[i].author);
        printf("\t\t%d", book[i].pages);
        printf("\t\tC%.2f\n", book[i].price);

    }
}

// Function to Search Book by Title
void searchBook()
{
    system("cls");
    char bk_title[30];
    int i;
    printf("\nEnter Book title to be Searched: ");
    //gets(bk_title);
    fgets(bk_title,30,stdin);
    for(i = 0; i < keepcount; i++)
    {
        if(strcmp(bk_title, book[i].bookTitle)==0)
        {
            system("cls");

            printf("\n\t\t ========== BOOK DETAILS ==========");
            printf("\n\t\tBook Title :  %s", book[i].bookTitle);
            printf("\n\t\tAuthor :  %s", book[i].author);
            printf("\n\t\tNumber of Pages :  %d", book[i].pages);
            printf("\n\t\tPrice :  C%.2f", book[i].price);

        }
    }
}

// Function to Remove Book by Title
void removeBook()
{
    system("cls");
    char bk_title[30];
    int i,j;
   // Lib temp;
    printf("\nEnter Book Title to Remove : ");
    fgets(bk_title,30,stdin);
    for(i = 0; i < keepcount; i++)
    {
        if(strcmp(bk_title, book[i].bookTitle)==0)
        {
            system("cls");

            printf("\n\t\t ========== Remove Book Details ==========");
            printf("\n\t\tBook Title :  %s", book[i].bookTitle);
            printf("\n\t\tAuthor :  %s", book[i].author);
            printf("\n\t\tNumber of Pages :  %d", book[i].pages);
            printf("\n\t\tPrice :  C%.2f", book[i].price);
            for(j = i; j < keepcount - 1; j++)
                book = book+1;
            keepcount--;
            return;
        }
    }

}

// Function to get the highest priced Book
void highestPricedBook()
{
   system("cls");
   int i;
   float highestPrice=0;
   printf("\n\t\t ========== Highest Priced Book ==========");
   for(i = 0; i < keepcount; i++)
   {
        if(highestPrice < book[i].price)
        {
            highestPrice = book[i].price;
        }

    }
    printf("\nHighest Price : C%.2f\n",  highestPrice);
}

// Number of Books
void numberOfBooks()
{
      system("cls");
      printf("\n\t\t==========Total Number of Books in library========");
      printf("\n No of books in library : %d", keepcount);
}

int main()
{
    int selection;
    printf("\nEnter Total No. of Books You Want to Add in Library : ");
    scanf("%d",&sizes);

    // Create Book Dynamic Array Using size input by User
    book = (Lib*)malloc(sizeof(Lib)*sizes);

    // Looping Infinitely till a condition is met
    do
    {
        printf("\n1.Add Book\n2.Show All Books\n3.Search Book\n4.Remove Book\n5.Highest Priced Book\n6.Number of Books\n7.Exit\n");
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
                  highestPricedBook();
                  break;
              case 6:
                  numberOfBooks();
                  break;
              case 7:
                  exit (0); // return; can be used as well
        }
  }while(1);
 return 0;
}
