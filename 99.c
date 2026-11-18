#include <stdio.h>
void changeDate(int day, int month, int year)
{
    char *months[] = {
        "Jan", "Feb", "Mar", "Apr",
        "May", "Jun", "Jul", "Aug",
        "Sep", "Oct", "Nov", "Dec"
    };
    printf("%02d-%s-%04d", day, months[month - 1], year);
}
int main()
{
    int day, month, year;
    printf("Enter date (dd/mm/yyyy): ");
    scanf("%d/%d/%d", &day, &month, &year);
    changeDate(day, month, year);
    return 0;
}