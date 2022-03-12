package pkt;

public class Program {
    public static void main(String[] args) {    
        Sayi p = new Sayi(100);
        Sayi r = new Sayi(50);
        Sayi tmp = p;
        p=r;
        r=tmp;
        System.out.println("p:"+p.deger);
        System.out.println("r:"+r.deger);        
    }
}
