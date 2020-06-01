#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

//fflush(stdin); is used when b4 u read characters just after reading integers
// Structure definition
struct library
{
    char bookName[50];
    char authorName[50];
    int numberOfPages;
    float priceOfBook;

};

int main()
{
    // Structure Variable declaration
    struct library lib[50];
    // Variables initialization
    int i,j,keepcount;
    i=j=keepcount = 0;
    // Character arrays
    char arth_nm[50],book_nm[50];
    float price;


    while(j!=7)
    {
        // Menu Selection
        printf("\n\n1. Add book information\n2. Display book information\n");
        printf("3. List all books of given author\n");
        printf("4. List the title of specified book\n");
        printf("5. List book information based on price\n");
        printf("6. List the count of books in the library\n");
        printf("7. Display Highest Price Book\n");
        printf("8. Exit");
        printf ("\n\nSelect one of the above: \n");
        //scanf("%d",&j);

        //gets(j);

        scanf("%d",&j);
        fflush(stdin);  // used right after reading integers b4 u proceed to read characters or strings

        switch(j)
        {
        // Entering book details
         case 1:
            printf ("\nEnter book name:  ");
            //fgets(lib[i].bookName, sizeof(lib[i].bookName), stdin);
             gets(lib[i].bookName);

            printf ("Enter author name: ");
            //fgets(lib[i].authorName, sizeof(lib[i].authorName), stdin);
            gets(lib[i].authorName);

            printf ("Enter pages: ");
            scanf ("%d",&lib[i].numberOfPages);
          // gets(lib[i].numberOfPages);
            //fgets (lib[i].numberOfPages, sizeof(lib[i].numberOfPages), stdin);

            printf ("Enter price: ");
            scanf ("%f",&lib[i].priceOfBook);


            //fgets(lib[i].price, sizeof(lib[i].price), stdin);
            //fflush(stdin);

            keepcount++;
        break;

       // All book details entered
        case 2:
            printf("You have entered the following information\n");
            for(i=0; i<keepcount; i++)
            {
                printf ("Book name = %s\t\t",lib[i].bookName);

                printf ("Author name = %s\t\t",lib[i].authorName);

                printf ("Pages = %d\t",lib[i].numberOfPages);

                printf ("Price = %f",lib[i].priceOfBook);

                printf("\n");
            }

        break;

        // Searching for book details by using the name of the Author
        case 3:
        printf ("Enter author name : ");
        //fgets(arth_nm, 50, stdin);
        gets(arth_nm);
        for (i=0; i<keepcount; i++)
        {
            if (strcmp(arth_nm, lib[i].authorName) == 0)
            printf ("%s \t %s  \t %d  \t %f",lib[i].bookName,lib[i].authorName,lib[i].numberOfPages,lib[i].priceOfBook);
        }
        break;

        // Searching for book details by using the name of the book
        case 4:
        printf ("Enter book name : ");
        //fgets(book_nm, 50, stdin);
        gets(book_nm);
        for (i=0; i<keepcount; i++)
        {
            if (strcmp(book_nm, lib[i].bookName) == 0)
            printf ("%s \t %s \t %d \t %f",lib[i].bookName,lib[i].authorName,lib[i].numberOfPages,lib[i].priceOfBook);
        }
        break;

        // Searching for book details by using the name of the book
        case 5:
         printf ("Enter the price of the book you are you want: ");
        //fgets(book_nm, 50, stdin);
        scanf("%f",&price);
        for (i=0; i<keepcount; i++)
        {
            if (price==lib[i].priceOfBook)
            printf ("%s \t %s \t %d \t %f",lib[i].bookName,lib[i].authorName,lib[i].numberOfPages,lib[i].priceOfBook);
        }
        break;

        // Case for Total many of books shelved
        case 6:
        printf("\n No of books in library : %d", keepcount);
        break;

        // Case for Highest paid book
        case 7:
        printf ("Highest Price Book : ");
        float temp = 0;
        for (i=0;i<keepcount;i++)
        {
            if(temp < lib[i].priceOfBook)
                temp = lib[i].priceOfBook;
        }
        printf("%f", temp);

        break;

        case 8:
        exit (0);


    }


    }

    return 0;
}
