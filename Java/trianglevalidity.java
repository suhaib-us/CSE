import java.util.Scanner;

public class trianglevalidity{
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter side 1: ");
        int side1 = scanner.nextInt();
        System.out.print("Enter side 2: ");
        int side2 = scanner.nextInt();
        System.out.print("Enter side 3: ");
        int side3 = scanner.nextInt();

        if (side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1) {
            System.out.println("The triangle is valid.");
        } else {
            System.out.println("The triangle is not valid.");
        }
    }
}
