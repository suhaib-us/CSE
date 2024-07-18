import java.util.Scanner;
public class WorkerEfficiency {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter time taken (hours): ");
        double timeTaken = scanner.nextDouble();

        String efficiency;

        if (timeTaken >= 2 && timeTaken <= 3) {
            efficiency = "Highly efficient";
        } else if (timeTaken > 3 && timeTaken <= 4) {
            efficiency = "Needs to improve speed";
        } else if (timeTaken > 4 && timeTaken <= 5) {
            efficiency = "Needs training to improve speed";
        } else if (timeTaken > 5) {
            efficiency = "Needs to leave the company";
        } else {
            efficiency = "Invalid time input";
        }

        System.out.println("Worker efficiency: " + efficiency);
    }
}
