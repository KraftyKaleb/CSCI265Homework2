import java.util.Scanner;

/*
 *
 * Java portion of Project2
 * CSCI 265
 * Kaleb Gilson - kaleb.gilson@und.edu - 2/9/23
 */
public class prog2KPG {
    public static void main(String[] args) {
        boolean done = false;
        int csMajors = 0;
        int dataMajors = 0;
        int cyberMajors = 0;
        int otherMajors = 0;
        int totalMajors = 0;

        int dataMinors = 0;
        int cyberMinors = 0;
        int mathMinors = 0;
        int otherMinors = 0;

        Scanner scanner = new Scanner(System.in);

        while (!done) {
            System.out.print("Enter major: ");
            String major = scanner.nextLine();
            if (major.equalsIgnoreCase("done")) done = true;
            else if (major.equalsIgnoreCase("cs")) {
                csMajors++;

                System.out.print("Enter minor: ");
                String minor = scanner.nextLine();
                if (minor.equalsIgnoreCase("data")) dataMinors++;
                else if (minor.equalsIgnoreCase("cyber")) cyberMinors++;
                else if (minor.equalsIgnoreCase("math")) mathMinors++;
                else otherMinors++;
            }
            else if (major.equalsIgnoreCase("data")) dataMajors++;
            else if (major.equalsIgnoreCase("cyber")) cyberMajors++;
            else otherMajors++;

            System.out.println();
        }

        totalMajors=csMajors+dataMajors+dataMajors+otherMajors;

        double csMajorPercent = ((double) csMajors/totalMajors)*100;
        double dataMajorPercent = ((double) dataMajors/totalMajors)*100;
        double cyberMajorPercent = ((double) cyberMajors/totalMajors)*100;
        double otherMajorPercent = ((double) otherMajors/totalMajors)*100;

        double dataMinorPercent = ((double) dataMinors/csMajors)*100;
        double cyberMinorPercent = ((double) cyberMinors/csMajors)*100;
        double mathMinorPercent = ((double) mathMinors/csMajors)*100;
        double otherMinorPercent = ((double) otherMinors/csMajors)*100;

        System.out.println("Total number of students: " + totalMajors);

        System.out.println("Majors of students in CS160");
        System.out.format("%-20s %3s %10.2f\n", "Computer Science", csMajors, csMajorPercent);
        System.out.format("%-20s %3s %10.2f\n", "Data Science", dataMajors, dataMajorPercent);
        System.out.format("%-20s %3s %10.2f\n", "Cyber Security", cyberMajors, cyberMajorPercent);
        System.out.format("%-20s %3s %10.2f\n\n", "Other Majors", otherMajors, otherMajorPercent);

        System.out.println("Minors for Computer Science Majors in CS160");
        System.out.format("%-20s %3s %10.2f\n", "Data Science", dataMinors, dataMinorPercent);
        System.out.format("%-20s %3s %10.2f\n", "Cyber Security", cyberMinors, cyberMinorPercent);
        System.out.format("%-20s %3s %10.2f\n", "Mathematics", mathMinors, mathMinorPercent);
        System.out.format("%-20s %3s %10.2f\n", "Other Minors", otherMinors, otherMinorPercent);
    }
}