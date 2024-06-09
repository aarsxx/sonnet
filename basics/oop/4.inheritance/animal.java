package inheritance;

public class animal {
	public boolean isVegetarian() {
		return vegetarian;
	}

	public void setVegetarian(boolean vegetarian) {
		this.vegetarian = vegetarian;
	}

	public String getEats() {
		return eats;
	}

	public void setEats(String eats) {
		this.eats = eats;
	}

	public int getLegNumbers() {
		return legNumbers;
	}

	public void setLegNumbers(int legNumbers) {
		this.legNumbers = legNumbers;
	}

	private boolean vegetarian;
	private String eats;
	private int legNumbers;
	
	public animal() {}
	
	public animal(boolean veg, String food, int legs) {
		
		this.vegetarian =  veg;
		this.eats = food;
		this.legNumbers = legs;
	}
		

}
