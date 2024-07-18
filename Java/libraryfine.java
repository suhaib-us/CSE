import java.util.Scanner;

public class libraryfine {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter number of days late: ");
        int daysLate = scanner.nextInt();

        if (daysLate <= 5) {
            System.out.println("Fine: " + daysLate * 0.50 + " Rupees.");
        } else if (daysLate <= 10) {
            System.out.println("Fine: " + (5 * 0.50 + (daysLate - 5) * 1) + " Rupees.");
        } else if (daysLate <= 30) {
            System.out.println("Fine: " + (5 * 0.50 + 5 * 1 + (daysLate - 10) * 5) + " Rupees.");
        } else {
            System.out.println("Membership cancelled.");
        }
    }
}
