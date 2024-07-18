import java.util.Scanner;

public class InsurancePremium {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter health (excellent/poor): ");
        String health = scanner.next();
        System.out.print("Enter age: ");
        int age = scanner.nextInt();
        System.out.print("Enter location (city/village): ");
        String location = scanner.next();
        System.out.print("Enter sex (male/female): ");
        String sex = scanner.next();

        if (health.equals("excellent") && age >= 25 && age <= 35 && location.equals("city")) {
            if (sex.equals("male")) {
                System.out.println("Insured, Premium rate: Rs. 4 per thousand, Max policy amount: Rs. 2 lakhs.");
            } else if (sex.equals("female")) {
                System.out.println("Insured, Premium rate: Rs. 3 per thousand, Max policy amount: Rs. 1 lakh.");
            }
        } else if (health.equals("poor") && age >= 25 && age <= 35 && location.equals("village") && sex.equals("male")) {
            System.out.println("Insured, Premium rate: Rs. 6 per thousand, Max policy amount: Rs. 10,000.");
        } else {
            System.out.println("Not insured.");
        }
    }
}
