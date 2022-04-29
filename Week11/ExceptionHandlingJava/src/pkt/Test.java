package pkt;

public class Test {

	public static void main(String[] args) {
		Hesap hesap = new Hesap();
		
		try{
			hesap.paraCek(1000);
			System.out.printf("\nBakiye: %lf",hesap.getBakiye());
		}
		catch(YetersizBakiye ex){
			System.out.printf("\n%s",ex.getMessage());
		}
		
		try{
			hesap.paraYatir(-50);
			System.out.printf("\nBakiye: %lf",hesap.getBakiye());
		}
		catch(HataliMiktar ex){
			System.out.printf("\n%s",ex.getMessage());
		}
	}

}
