package pck;

public class Oven {
	public void cook(IFood food){
		System.out.println(food.getFood()+" hours remain to ready to eat.");
	}
}
