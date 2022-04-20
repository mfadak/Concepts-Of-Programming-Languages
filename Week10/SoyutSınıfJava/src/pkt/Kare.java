package pkt;

public class Kare extends Sekil {
	public double kenar;
	public Kare(double kenar,String renk) {
		super(renk);
		this.kenar = kenar;		
	}
	
	@Override
	public double alan() {
		return Math.pow(kenar, 2);
	}
	@Override
	public double cevre() {
		return 4*kenar;
	}
	
}
