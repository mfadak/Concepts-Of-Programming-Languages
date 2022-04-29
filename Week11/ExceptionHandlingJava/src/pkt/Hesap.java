package pkt;

public class Hesap {
	private double bakiye;
	
	public Hesap() {
		bakiye = 0;
	}	
	void paraCek(double miktar){
		if(miktar > this.bakiye) throw new YetersizBakiye();
		this.bakiye -= miktar;
	}
	void paraYatir(double miktar){
		if(miktar <= 0) throw new HataliMiktar();
		this.bakiye += miktar;
	}
	double getBakiye(){
		return this.bakiye;
	}
}
