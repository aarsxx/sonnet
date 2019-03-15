package inheritance;

public class cat extends animal{

	private String color;
	public cat(boolean veg, String food, int legs) {
		super(veg, food, legs);
		this.color = "white";
	}
	public cat(boolean veg, String food, int legs, String color) {
		super(veg, food, legs);
		this.color = color;
	}
	public String getColor() {
		return color;
	}
	public void setColor(String color) {
		this.color = color;
	}

}
