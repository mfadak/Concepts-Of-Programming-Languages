package project;

public class Test {

	public static void main(String[] args) {
		Number num1 = new Number(100);
		Number num2 = new Number(100);
		Number num3 = new Number(127);
		
		if(num1.equals(num2)) System.out.println("num1 is equal to num2");
		else System.out.println("num1 and num2 are not equal");
		
		if(num3.isPrime()) System.out.println("num3 is prime number");
		else System.out.println("num3 is not prime number");
		
		short[] num3Digits = num3.getDigits();
		System.out.print("num3 digits: ");
		for(short digit : num3Digits) {
			System.out.print(digit+" ");
		}
		System.out.println();
		System.out.println("num1 is "+num1);
		System.out.println("num2 is "+num2);
		System.out.println("num3 is "+num3);
	}

}
