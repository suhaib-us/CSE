
class Vehicle {
    void start() {
        System.out.println("Vehicle started");
    }
}
class Car extends Vehicle {
    void start() {
        System.out.println("Car started");
    }
}

public class veichle {
    public static void main(String[] args) {
        Vehicle vehicle = new Vehicle();
        vehicle.start();  
        Car car = new Car();
        car.start();  
    }
}
