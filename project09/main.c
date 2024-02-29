#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Classroom
{
    int evaluationNotes;
    char name[30];
};

int main()
{
    /*
        enum week {Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday}; // List in ascending order starting at 0
        int daysWeek = Monday; // 1 is Monday

        if(daysWeek == Sunday || daysWeek == Saturday)
        {
            printf("Weekend!");
        }
        else
        {
            printf("Work day.");
        }
    */

    struct Classroom Students[25];

    Students[0].evaluationNotes = 10;
    strcpy(Students[0].name, "Anderson");

    Students[1].evaluationNotes = 3;
    strcpy(Students[1].name, "Tairon");

    for (int i = 0; i < 2; i++) {
        printf("%d - Student: %s - Note: %d.\n", i + 1, Students[i].name, Students[i].evaluationNotes);
    }

    return 0;
}
