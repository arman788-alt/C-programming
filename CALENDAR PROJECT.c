#include <stdio.h>



int input_year(void)
{
 int year;
  printf("Please enter a year : ");
    scanf("%d",&year);

    return year;
}

int month(void)
{
    int month;
    printf("Please enter a month(1 to 12): ");
    scanf("%d",&month);

    return month;
}




int main() {



int yearr = input_year();
int monthh = month();

    

    // Display calendar based on the selected month
     switch (monthh) {
        case 1:
            printf("January %d\n", yearr);
            break;
        case 2:
            printf("February %d\n", yearr);
            break;
        case 3:
            printf("March %d\n", yearr);
            break;
        case 4:
            printf("April %d\n", yearr);
            break;
        case 5:
            printf("May %d\n", yearr);
            break;
        case 6:
            printf("June %d\n", yearr);
            break;
        case 7:
            printf("July %d\n", yearr);
            break;
        case 8:
            printf("August %d\n", yearr);
            break;
        case 9:
            printf("September %d\n", yearr);
            break;
        case 10:
            printf("October %d\n", yearr);
            break;
        case 11:
            printf("November %d\n", yearr);
            break;
        case 12:
            printf("December %d\n", yearr);
            break;
        default:
            printf("Invalid month\n");
            return 1; // Exit the program with an error code
    }

    // Display the days of the week
    printf("Sun Mon Tue Wed Thu Fri Sat\n");

    // Determine the starting day of the month (1st day of the month)
    // For simplicity, let's assume January 1, 1 AD was a Monday
    int startingDay = 1;

    // Determine the number of days in the selected month
    int daysInMonth;
    switch (monthh) {
        case 2:
            // Check if it's a leap year
            if ((yearr % 4 == 0 && yearr % 100 != 0) || (yearr % 400 == 0))
                daysInMonth = 29;
            else
                daysInMonth = 28;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            daysInMonth = 30;
            break;
        default:
            daysInMonth = 31;
    }

    // Print leading spaces before the 1st day of the month
    for (int i = 0; i < startingDay; i++) {
        printf("    ");
    }

    // Print the days of the month
    for (int day = 1; day <= daysInMonth; day++) {
        printf("%3d ", day);

        // Move to the next line if it's the last day of the week
        if ((startingDay + day) % 7 == 0)
            printf("\n");
    }

    printf("\n");

    return 0;
}
