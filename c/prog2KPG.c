//
// Created by kaleb.gilson on 2/14/2023.
//
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void loop();
char* strtolower();

int csMajors = 0;
int dataMajors = 0;
int cyberMajors = 0;
int otherMajors = 0;
int totalMajors = 0;

int dataMinors = 0;
int cyberMinors = 0;
int mathMinors = 0;
int otherMinors = 0;

int main() {
    loop();

    totalMajors = csMajors + dataMajors + dataMajors + otherMajors;

    double csMajorPercent = ((double) csMajors / totalMajors) * 100;
    double dataMajorPercent = ((double) dataMajors / totalMajors) * 100;
    double cyberMajorPercent = ((double) cyberMajors / totalMajors) * 100;
    double otherMajorPercent = ((double) otherMajors / totalMajors) * 100;

    double dataMinorPercent = ((double) dataMinors / csMajors) * 100;
    double cyberMinorPercent = ((double) cyberMinors / csMajors) * 100;
    double mathMinorPercent = ((double) mathMinors / csMajors) * 100;
    double otherMinorPercent = ((double) otherMinors / csMajors) * 100;

    printf("Total number of students: %d\n", totalMajors);

    printf("Majors of students in CS160\n");
    printf("%-20s %3d %10.2f\n", "Computer Science", csMajors, csMajorPercent);
    printf("%-20s %3d %10.2f\n", "Data Science", dataMajors, dataMajorPercent);
    printf("%-20s %3d %10.2f\n", "Cyber Security", cyberMajors, cyberMajorPercent);
    printf("%-20s %3d %10.2f\n\n", "Other Majors", otherMajors, otherMajorPercent);

    printf("Minors for Computer Science Majors in CS160\n");
    printf("%-20s %3d %10.2f\n", "Data Science", dataMinors, dataMinorPercent);
    printf("%-20s %3d %10.2f\n", "Cyber Security", cyberMinors, cyberMinorPercent);
    printf("%-20s %3d %10.2f\n", "Mathematics", mathMinors, mathMinorPercent);
    printf("%-20s %3d %10.2f\n", "Other Minors", otherMinors, otherMinorPercent);
    return 0;
}

void loop() {
    int done = 0;

    while (done == 0) {
        fflush(stdin);
        char major[50], minor[50];

        printf("Enter major: ");
        fgets(major, 49, stdin);
        major[strcspn (major, "[\r\n]")] = 0;
        if (strcmp(strtolower(major), "done") == 0) { done = 1; }
        else if (strcmp(strtolower(major), "cs") == 0) {
            csMajors++;

            printf("Enter minor: ");
            fflush(stdin);
            fgets(minor, 49, stdin);
            minor[strcspn (minor, "[\r\n]")] = 0;
            if (strcmp(strtolower(minor), "data") == 0) { dataMinors++; }
            else if (strcmp(strtolower(minor), "cyber") == 0) { cyberMinors++; }
            else if (strcmp(strtolower(minor), "math") == 0) { mathMinors++; }
            else otherMinors++;
        } else if (strcmp(strtolower(major), "data") == 0) { dataMajors++; }
        else if (strcmp(strtolower(major), "cyber") == 0) { cyberMajors++; }
        else { otherMajors++; }
    }
}

char* strtolower(char* string) {
    for(char *chr=string; *chr; chr++) *chr=tolower(*chr);
    return string;
}