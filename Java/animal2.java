
class Animal {
    public void move() {
        System.out.println("The animal is moving");
    }
}

class Bird extends Animal {

    public void move() {
        System.out.println("The bird is flying");
    }
}
class Fish extends Animal {
    @Override
    public void move() {
        System.out.println("The fish is swimming");
    }
}

public class animal2 {
    public static void main(String[] args) {
        Animal animal = new Animal();
        animal.move(); 
        
        Bird bird = new Bird();
        bird.move();    
        
        Fish fish = new Fish();
        fish.move();  
    }
}
