#include <stdio.h>


typedef struct {
        int day;
        int month;
        int year;
} Date;


Date inputDate() {
    int day, month, year;
    printf("Day:");
    scanf("%d", &day);
    printf("Month:");
    scanf("%d", &month);
    printf("Year:");
    scanf("%d", &year);
    Date res = {day, month, year};
    return res;
};


void inputDate2(Date *date) {
    int day, month, year;
    printf("Day:");
    scanf("%d", &date -> day);
    printf("Month:");
    scanf("%d", &(*date).month);
    printf("Year:");
    scanf("%d", &date -> year);
}


void printDate(Date date1) {
    printf("%d.%d.%d \n", date1.day, date1.month, date1.year);
}


int main() {
    Date date1;
    date1.day = 12;
    date1.month = 10;
    date1.year = 2021;
    printDate(date1);

    Date date2;
    date2 = inputDate();
    printDate(date2);

    Date date3;
    inputDate2(&date3);
    printDate(date3);
}
