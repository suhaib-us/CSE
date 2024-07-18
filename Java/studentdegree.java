import java.util.Scanner;
public class studentdegree {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter marks in A: ");
        double marksA = scanner.nextDouble();

        System.out.print("Enter marks in B: ");
        double marksB = scanner.nextDouble();

        String result;

        if (marksA >= 55 && marksB >= 45) {
            result = "Passed";
        } else if (marksA < 55 && marksB >= 55 && marksA >= 45) {
            result = "Passed";
        } else if (marksA >= 65 && marksB < 45) {
            result = "Reappear in B";
        } else {
            result = "Failed";
        }

        System.out.println("Student qualification: " + result);
    }
}
