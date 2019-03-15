package inheritance;

public class main {
	public main() {
		cat cat =  new cat(false, "milk", 4);
		System.out.println("Cat is Vegetarian?" + cat.isVegetarian());
		System.out.println("Cat eats " + cat.getEats());
		System.out.println("Cat has " + cat.getLegNumbers() + " legs.");
		System.out.println("Cat color is " + cat.getColor());
		
	}

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		new main();

	}

}
