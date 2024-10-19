#include<stdio.h>

#define TRUE    1
#define FALSE   0

int days_in_month[]={0,31,28,31,30,31,30,31,31,30,31,30,31};


int inputyear(void)
{
	int year;
	
	printf("Please enter a year: ");
	scanf("%d", &year);
	return year;
}

int determinedaycode(int year)
{
	int daycode;
	int d1, d2, d3;
	
	d1 = (year - 1.)/ 4.0;
	d2 = (year - 1.)/ 100.;
	d3 = (year - 1.)/ 400.;
	daycode = (year + d1 - d2 + d3) %7;
	return daycode;
}


int determineleapyear(int year)
{
	if(year% 4 == FALSE && year % 100 != FALSE || year%400 == FALSE)
	{
		days_in_month[2] = 29;//etaa leap year bochor hobe , and feb month 29 din e hobe.
		return TRUE;
	}
	else
	{
		days_in_month[2] = 28; // leap year noi tai feb month 28 days e hobe.
		return FALSE;
	}
}

void calendar(int year, int daycode)
{
	int month, day;

    printf(" Please enter a month(1 to 12: ");

    scanf("%d",&month);


switch (month) {
        case 1:
            printf("January %d\n", year);
            break;
        case 2:
            printf("February %d\n", year);
            break;
        case 3:
            printf("March %d\n", year);
            break;
        case 4:
            printf("April %d\n", year);
            break;
        case 5:
            printf("May %d\n", year);
            break;
        case 6:
            printf("June %d\n", year);
            break;
        case 7:
            printf("July %d\n", year);
            break;
        case 8:
            printf("August %d\n", year);
            break;
        case 9:
            printf("September %d\n", year);
            break;
        case 10:
            printf("October %d\n", year);
            break;
        case 11:
            printf("November %d\n", year);
            break;
        case 12:
            printf("December %d\n", year);
            break;
        default:
            printf("Invalid month\n");
             // Exit the program with an error code
}
		
		printf("\n\nSun  Mon  Tue  Wed  Thu  Fri  Sat\n" );
		
		// Correct the position for the first date
		for ( day = 1; day <= 1 + daycode * 5; day++ )
		{
			printf(" ");
		}
		
		// Print all the dates for one month
		for ( day = 1; day <= days_in_month[month]; day++ )
		{
			printf("%2d ", day );
			
			// Is day before Sat? Else start next line Sun.
			if ( ( day + daycode ) % 7 > 0 )
				printf("   " );
			else
				printf("\n " );
		}
			// Set position for next month
			daycode = ( daycode + days_in_month[month] ) % 7;
	}


int main(void)
{
	int year, daycode;
	
	year = inputyear();
	daycode = determinedaycode(year);
	determineleapyear(year);
	calendar(year, daycode);
	printf("\n");
}