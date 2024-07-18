import java.util.Scanner;

public class steelgrade {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter hardness: ");
        int hardness = scanner.nextInt();
        System.out.print("Enter carbon content: ");
        double carbonContent = scanner.nextDouble();
        System.out.print("Enter tensile strength: ");
        int tensileStrength = scanner.nextInt();

        int grade;
        if (hardness > 50 && carbonContent < 0.7 && tensileStrength > 5600) {
            grade = 10;
        } else if (hardness > 50 && carbonContent < 0.7) {
            grade = 9;
        } else if (carbonContent < 0.7 && tensileStrength > 5600) {
            grade = 8;
        } else if (hardness > 50 && tensileStrength > 5600) {
            grade = 7;
        } else if (hardness > 50 || carbonContent < 0.7 || tensileStrength > 5600) {
            grade = 6;
        } else {
            grade = 5;
        }

        System.out.println("Steel grade: " + grade);
    }
}
