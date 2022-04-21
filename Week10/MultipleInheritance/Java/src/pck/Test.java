package pck;

public class Test {

	public static void main(String[] args) {
		Greens chard = new Greens("Chard",2);
		
		Oven oven = new Oven();
		oven.cook(chard);
		
		Shredder shredder = new Shredder();
		shredder.shred(chard);
		
	}

}
