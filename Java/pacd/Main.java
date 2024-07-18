package cse.iust.main;

import java.util.Scanner;

import cse.iust.math.calculator;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        calculator calculator = new calculator();

        System.out.print("Enter first number: ");
        double num1 = sc.nextDouble();

        System.out.print("Enter second number: ");
        double num2 = sc.nextDouble();

        System.out.println("Addition: " + calculator.add(num1, num2));
        System.out.println("Subtraction: " + calculator.subtract(num1, num2));
        System.out.println("Multiplication: " + calculator.multiply(num1, num2));
        System.out.println("Division: " + calculator.divide(num1, num2));
    }
}
