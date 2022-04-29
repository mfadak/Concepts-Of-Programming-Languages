package pkt;

public class YetersizBakiye extends IllegalArgumentException {
	public YetersizBakiye(String mesaj) {
		super(mesaj);
	}
	public YetersizBakiye() {
		super("Yetersiz Bakiye");
	}
}
