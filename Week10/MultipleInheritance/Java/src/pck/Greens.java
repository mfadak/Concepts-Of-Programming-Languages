package pck;

public class Greens implements IFood,ISalad {
	private String name;
	private double cookingTime;
	
	public Greens(String name, double cookingTime) {
		this.name = name;
		this.cookingTime = cookingTime;
	}

	@Override
	public String getFood() {
		return name + " " + cookingTime;
	}

	@Override
	public String getSalad() {
		return name;
	}
	
	
}
