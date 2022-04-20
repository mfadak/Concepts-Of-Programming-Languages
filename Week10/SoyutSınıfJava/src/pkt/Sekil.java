package pkt;

import java.util.Date;

public abstract class Sekil {
	private String renk;
	private Date olusturulmaTarihi;
	
	public Sekil(String renk) {
		this.renk = renk;
		olusturulmaTarihi = new Date();
	}
	public Date getOlusturulmaTarihi() {
		return olusturulmaTarihi;
	}
	public void setRenk(String renk) {
		this.renk = renk;
	}
	@Override
	public String toString() {
		String str = "Tarih: "+olusturulmaTarihi+
					 "\nRenk: "+renk+
					 "\nAlan: "+alan()+
					 "\nÇevre: "+cevre();
		return str;
	}
	
	public abstract double alan();
	public abstract double cevre();
}
