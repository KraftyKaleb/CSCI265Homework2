/*
 * C++ portion of Project2
 * CSCI 265
 * Kaleb Gilson - kaleb.gilson@und.edu - 2/14/23
 */
#include <iostream>
#include <iomanip>

using namespace std;

string strtolower(string);

int main() {
    bool done = false;

    int csMajors = 0;
    int dataMajors = 0;
    int cyberMajors = 0;
    int otherMajors = 0;
    int totalMajors = 0;

    int dataMinors = 0;
    int cyberMinors = 0;
    int mathMinors = 0;
    int otherMinors = 0;

    while (!done) {
        string major, minor;

        cout << "Enter major: ";
        cin >> major;
        cin.ignore(256, '\n');
        for (int i = 0; i < major.length(); i++) {
            if (isupper(major.at(i))) {
                major[i] = tolower(major.at(i));
            }
        }
        if (major.compare("done") == 0) { done = true; }
        else if (major.compare("cs") == 0) {
            csMajors++;

            cout << "Enter minor: ";
            cin >> minor;
            cin.ignore(256, '\n');
            for (int i = 0; i < minor.length(); i++) {
                if (isupper(minor.at(i))) {
                    minor[i] = tolower(minor.at(i));
                }
            }
            if (minor.compare("data") == 0) { dataMinors++; }
            else if (minor.compare("cyber") == 0) { cyberMinors++; }
            else if (minor.compare("math") == 0) { mathMinors++; }
            else otherMinors++;
        } else if (major.compare("data") == 0) { dataMajors++; }
        else if (major.compare("cyber") == 0) { cyberMajors++; }
        else { otherMajors++; }
    }

    totalMajors = csMajors + dataMajors + dataMajors + otherMajors;

    double csMajorPercent = ((double) csMajors / totalMajors) * 100;
    double dataMajorPercent = ((double) dataMajors / totalMajors) * 100;
    double cyberMajorPercent = ((double) cyberMajors / totalMajors) * 100;
    double otherMajorPercent = ((double) otherMajors / totalMajors) * 100;

    double dataMinorPercent = ((double) dataMinors / csMajors) * 100;
    double cyberMinorPercent = ((double) cyberMinors / csMajors) * 100;
    double mathMinorPercent = ((double) mathMinors / csMajors) * 100;
    double otherMinorPercent = ((double) otherMinors / csMajors) * 100;

    cout << "\nTotal number of students: " << totalMajors << "\n";

    cout << "Majors of students in CS160\n";
    cout << left << setw(20) << "Computer Science" << right << setw(3) << csMajors << right << setw(10) << fixed << setprecision(2) << csMajorPercent << "\n";
    cout << left << setw(20) << "Data Science" << right << setw(3) << dataMajors << right << setw(10) << fixed << setprecision(2) << dataMajorPercent << "\n";
    cout << left << setw(20) << "Cyber Security" << right << setw(3) << cyberMajors << right << setw(10) << fixed << setprecision(2) << cyberMajorPercent << "\n";
    cout << left << setw(20) << "Other Majors" << right << setw(3) << otherMajors << right << setw(10) << fixed << setprecision(2) << otherMajorPercent << "\n\n";

    printf("Minors for Computer Science Majors in CS160\n");
    cout << left << setw(20) << "Data Science" << right << setw(3) << dataMinors << right << setw(10) << fixed << setprecision(2) << dataMinorPercent << "\n";
    cout << left << setw(20) << "Cyber Security" << right << setw(3) << cyberMinors << right << setw(10) << fixed << setprecision(2) << cyberMinorPercent << "\n";
    cout << left << setw(20) << "Mathematics" << right << setw(3) << mathMinors << right << setw(10) << fixed << setprecision(2) << mathMinorPercent << "\n";
    cout << left << setw(20) << "Other Minors" << right << setw(3) << otherMinors << right << setw(10) << fixed << setprecision(2) << otherMinorPercent << "\n\n";
    return 0;
}

string strtolower(string str) {
    string lowerCaseStr;
    for(int i = 0; i < str.length(); i++) {
        char ch = tolower(str[i]);
        lowerCaseStr.append(&ch);
    }
    return lowerCaseStr;
}