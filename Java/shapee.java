
abstract class Shape {
    public abstract double calculateArea();
}

class Rectangle extends Shape {

    private double length;
    private double width;
    public Rectangle(double length, double width) {
        this.length = length;
        this.width = width;
    }  
    public double calculateArea() {
        return length * width;
    }
}

class Triangle extends Shape {
  
    private double base;
    private double height;
    public Triangle(double base, double height) {
        this.base = base;
        this.height = height;
    }

  
    @Override
    public double calculateArea() {
        return 0.5 * base * height;
    }
}


public class shapee {
    public static void main(String[] args) {
        Rectangle rectangle = new Rectangle(5, 3);
        System.out.println("Area of Rectangle: " + rectangle.calculateArea());
        Triangle triangle = new Triangle(4, 6);
        System.out.println("Area of Triangle: " + triangle.calculateArea());
    }
}
