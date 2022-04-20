package pkt;

public class Daire extends Sekil {
	private double yaricap;
	
	public Daire(double yaricap,String renk) {
		super(renk);
		this.yaricap = yaricap;
	}
	
	@Override
	public double alan() {
		return Math.PI*Math.pow(yaricap, 2);
	}
	@Override
	public double cevre() {
		return 2*Math.PI*yaricap;
	}
}
