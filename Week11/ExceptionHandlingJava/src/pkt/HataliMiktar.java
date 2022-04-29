package pkt;

public class HataliMiktar extends ArithmeticException {
	public HataliMiktar(String mesaj) {
		super(mesaj);
	}
	public HataliMiktar() {
		super("Hatalı Miktar");
	}
}
