import java.util.*;
public class EvenOdd {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        System.out.println("enter the no ");
        int x = s.nextInt();

        if(x==0) {
            System.out.println("value is 0");
        }

         else if (x%2==0) {
            System.out.println("no is even");
        }
        else {
            System.out.println("no is odd");

        }

    }  

}
