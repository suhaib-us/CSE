import java.util.Scanner;

public class CharacterType {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter a character: ");
        char ch = scanner.next().charAt(0);

        if (ch >= 'A' && ch <= 'Z') {
            System.out.println("Capital letter.");
        } else if (ch >= 'a' && ch <= 'z') {
            System.out.println("Small case letter.");
        } else if (ch >= '0' && ch <= '9') {
            System.out.println("Digit.");
        } else {
            System.out.println("Special symbol.");
        }
    }
}
