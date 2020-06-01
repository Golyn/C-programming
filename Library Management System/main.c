#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
// Structure definition
struct library
{
    char bookName[50];
    char authorName[50];
    int numberOfPages;
    float price;

};

int main()
{

    // Structure Variable declaration
    struct library lib[100];
    int i,j,keepcount;
    i=j=keepcount = 0;
    char arth_nm[30],book_nm[30];

    while(j!=6)
    {
        printf("\n\n1. Add book information\n2. Display book information\n");
        printf("3. List all books of given author\n");
        printf("4. List the title of specified book\n");
        printf("5. List the count of books in the library\n");
        printf("6. Display Highest Price Book\n");
        printf("7. Exit");
        printf ("\n\nSelect one of the above: ");
        scanf("%d",&j);
        fflush(stdin);

        switch(j)
        {
        case 1:
            printf ("Enter book name = ");
            //scanf ("%s",lib1[i].bookName);
            fgets(lib[i].bookName, sizeof(lib[i].bookName), stdin);

            printf ("Enter author name = ");
            //scanf ("%s",lib[i].authorName);
            fgets(lib[i].authorName, sizeof(lib[i].authorName), stdin);

            printf ("Enter pages = ");
            scanf ("%d",&lib[i].numberOfPages);

            printf ("Enter price = ");
            scanf ("%f",&lib[i].price);

            keepcount++;
        break;

        case 2:
            printf("You have entered the following information\n");
            for(i=0; i<keepcount; i++)
            {
                printf ("Book name = %s",lib[i].bookName);

                printf ("\tAuthor name = %s",lib[i].authorName);

                printf ("\tPages = %d",lib[i].numberOfPages);

                printf ("\tPrice = %f",lib[i].price);

                printf("\n");
            }

            break;

            case 3:
            printf ("Enter author name : ");
            fgets(arth_nm, 50, stdin);
            for (i=0; i<keepcount; i++)
            {
                if (strcmp(arth_nm, lib[i].authorName) == 0)
                printf ("%s %s %d %f",lib[i].bookName,lib[i].authorName,lib[i].numberOfPages,lib[i].price);
            }
            break;

            case 4:
            printf ("Enter book name : ");
            fgets(book_nm, 50, stdin);
            for (i=0; i<keepcount; i++)
            {
                if (strcmp(book_nm, lib[i].bookName) == 0)
                printf ("%s \t %s \t %d \t %f",lib[i].bookName,lib[i].authorName,lib[i].numberOfPages,lib[i].price);
            }
            break;

            case 5:
            printf("\n No of books in library : %d", keepcount);
            break;

            case 6:
            printf ("Highest Price Book : ");
            float temp = 0;
            for (i=0;i<keepcount;i++)
            {
                if(temp < lib[i].price)
                    temp = lib[i].price;
            }
            printf("%f", temp);

            break;

            case 7:
            exit (0);


        }


    }
    return 0;
}
