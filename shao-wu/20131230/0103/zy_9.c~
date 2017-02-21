#include <stdio.h>
#include <stdlib.h>

void which_m_d(int, int, int *, int *);
int main()
{
	int y,d;
	int pm = 1, pd = 1;
	printf("please input year and days: ");
	scanf("%d %d", &y,&d);
	printf("%d day in %d year is : ", d, y);
	which_m_d(y,d,&pm,&pd);
	return 0;
}

void which_m_d(int year, int day, int *r_month, int *r_day)
{
	int day_tab[][13] = { 
		{0,31,28,31,30,31,30,31,31,30,31,30,31},
		{0,31,29,31,30,31,30,31,31,30,31,30,31} 
	};

	int leap, maxday, i = 1;
	*r_month = i; 
	*r_day = day;
	leap = ( (year%4==0) && (year%100!=0) || (year%400==0) );
	maxday = ((leap==1) ? 366 : 365);
	if (day > maxday) {
		printf("you input is too large.\n");
		exit (-1);
	}
	
	int left;	
	while((day <= maxday ) && (day > (left = day_tab[leap][i]))) {		
		i++;
		day -= left;
		*r_month = i;
		*r_day = day;
	}
	printf("%d-%d-%d\n", year, *r_month, *r_day);
}

	    

