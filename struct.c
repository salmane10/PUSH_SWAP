#include <stdio.h>

typedef struct {
    int day;
    int month;
    int year;
}date;

typedef struct {
    char name[10];
    char lname[10];
    date bith;
}stager;
int main(void)
{
    stager s1,s2;
    printf("type ur name: ");
    scanf("%s", s1.name);
    printf("type ur last name: ");
    scanf("%s", s1.lname);
    printf("enter ur day of birth: ");
    scanf("%i", &s1.bith.day);
    printf("enter ur month of birth: ");
    scanf("%i", &s1.bith.month);
    printf("enter the year: ");
    scanf("%i", &s1.bith.year);

    printf("\nhere is the information of the stager 1\n");
    printf("name : %s\nlastname : %s\nDateOfBirth: %i/%i/%i\n", s1.name,s1.lname,s1.bith.day,s1.bith.month,s1.bith.year);
    return (0);
}