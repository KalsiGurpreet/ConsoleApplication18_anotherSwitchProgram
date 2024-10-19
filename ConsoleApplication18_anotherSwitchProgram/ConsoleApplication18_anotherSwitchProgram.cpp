#include<stdio.h>

int main(void)
{
	short month = 0;
	puts("Please enter the month of the year");
	scanf_s("%hd", &month);

	short jan = 31;
	short feb = 28;
	short mar = 31;
	short apr = 30;
	short may = 31;
	short jun = 30;
	short jul = 31;
	short aug = 31;
	short sep = 30;
	short oct = 31;
	short nov = 30;
	short dec = 31;
	short add1 = jan + feb + mar + apr + may;
	short add2 = jun + jul + aug + sep + oct;



	switch (month)
	{
	case 1: puts("January");
		puts("Days before this month is 0"); break;
	case 2: puts("February");
		printf("Days before this month is %hd\n", jan); break;
	case 3: puts("March"); 
		printf("Days before this month is %hd\n", jan + feb); break;
	case 4: puts("April");
		printf("Days before this month is %hd\n", jan + feb + mar); break;
	case 5: puts("May");
		printf("Days before this month is %hd\n", jan + feb + mar + apr); break;
	case 6: puts("June");
		printf("Days before this month is %hd\n", add1); break;
	case 7: puts("July");
		printf("Days before this month is %hd\n", add1 + jun); break;
	case 8: puts("August");
		printf("Days before this month is %hd\n", add1 + jun + jul); break;
	case 9: puts("September");
		printf("Days before this month is %hd\n", add1 + jun + jul + aug); break;
	case 10: puts("October");
		printf("Days before this month is %hd\n", add1 + jun + jul + aug + sep); break;
	case 11: puts("November");
		printf("Days before this month is %hd\n", add1 + add2); break;
	case 12: puts("December");
		printf("Days before this month is %hd\n", add1 + add2 + dec); break;
	default: puts("Please enter valid month"); break;
	}
	return 0;
}