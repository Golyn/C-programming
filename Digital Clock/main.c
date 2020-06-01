#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
void main()
{
	int h=0,m=0,s=0;
	double i=0;
	clrscr();
	printf("Please enter a time format in HH:MM:SS");
	scanf("%d%d%d",&h,&m,&s);
	start:
	for(h=0;h<24;h++)
	{
		for(m=0;m<60;m++)
		{
			for(s=0;s<60;s++)
			{
				clrscr();
				printf("\n\n\t\t\t%d:%d:%d",h,m,s);
				if(h<12)
				{
					printf(" AM");
				}
				else
				{
					printf(" PM");
				}
				printf("\n\n\t\t\tSunday 18 Nov 2018");
				for(i=0;i<3619999;i++)
				i++;
				i--;
			}
			s=0;
		}
		m=0;
	}
	h=0;
	goto start;
getch();
}
