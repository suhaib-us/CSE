
class Animal {
    public void makeSound() {
        System.out.println("Some generic animal sound");
    }
}

class Mammal extends Animal {
    
    public void giveBirth() {
        System.out.println("Giving birth");
    }
}

class Dog extends Mammal {
    @Override
    public void makeSound() {
        System.out.println("Woof!");
    }
}


public class Main {
    public static void main(String[] args) {
        
        Animal animal = new Animal();
        animal.makeSound();

    
        Mammal mammal = new Mammal();
        mammal.makeSound();
        mammal.giveBirth();
        Dog dog = new Dog();
        dog.makeSound();
        dog.giveBirth();
    }
}
