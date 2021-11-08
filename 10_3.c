#include <stdio.h>


const int days_of_months[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
const char days_of_week[20][20] = {"Monday", "Tuesday","Wednesday","Thursday","Friday","Saturday", "Sunday"};
const int first_day = 5-1;


typedef struct Date{
        int day;
        int month;
        int year;
} Date;


void inputDate(struct Date *date) {
    int day, month, year;
    printf("Day:");
    scanf("%d", &date -> day);
    printf("Month:");
    scanf("%d", &(*date).month);
    printf("Year:");
    scanf("%d", &date -> year);
}


Date nextDay(struct Date date) {
    date.day += 1;
    if (date.day > days_of_months[date.month-1]){
        date.day = 1;
        date.month += 1;
    }
    if (date.month>12) {
        date.year++;
        date.day = 1;
        date.month = 1;
    }
    return date;
}


void printDayOfWeek(struct Date date){
    int days= date.day;
    for (int i=1; i<date.month; i++) {
        days += days_of_months[i];
    }
    printf("%s", days_of_week[(days+first_day-1)%7]);
}


void printDate(struct Date date1) {
    printf("%d.%d.%d \n", date1.day, date1.month, date1.year);
}


int main() {
    Date date1, date2;
    inputDate(&date1);
    printDate(date1);
    date2 = nextDay(date1);
    printDate(date2);
    printDayOfWeek(date1);
}
