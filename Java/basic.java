import java.util.*;
class basic{

    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
                System.out.print("enter num1");

                int num1= s.nextInt();

                System.err.println("enter num 2");

                int num2= s.nextInt();

                int add = num1+num2;
                int sub = num1-num2;
                int multiply = num1*num2;
                int divide = num1*num2;
                int remainder = num1/num2;

                System.out.println("Sum: " + add);
        System.out.println("Difference: " + sub);
        System.out.println("Product: " + multiply);
        System.out.println("Quotient: " + divide);
        System.out.println("Remainder: " + remainder);

        s.close();
            }
        

    }
