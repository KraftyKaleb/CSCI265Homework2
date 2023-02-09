import java.util.Scanner;

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
                String minor = scanner.next();
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

        totalMajors=csMajors+dataMajors+dataMajors;
        System.out.println("Total number of students" + totalMajors);

        System.out.println("Majors of students in CS160");
        System.out.println("Computer Science     " + csMajors);
        System.out.println("Data Science         " + dataMajors);
        System.out.println("Cyber Security       " + cyberMajors);
        System.out.println("Other Majors         " + otherMajors);
        System.out.println();

        System.out.println("Minors for Computer Science Majors in CS160");
        System.out.println("Data Science         " + dataMinors);
        System.out.println("Cyber Security       " + cyberMinors);
        System.out.println("Mathematics          " + mathMinors);
        System.out.println("Other Majors         " + otherMinors);

    }
}