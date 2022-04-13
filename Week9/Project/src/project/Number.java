package project;

public class Number {
	private int value;
	public Number(int value) {
		this.value = value;
	}
	public short[] getDigits() {
		return splitDigits(value);
	}
	private short[] splitDigits(int val) {
		int digitslength = (int)Math.floor(Math.log10(Math.abs(val))) + 1;
		short[] digits = new short[digitslength];
		for(int index=digits.length-1;index>=0;index--) {
			digits[index] = (short)(val % 10);
			val /= 10;
		}
		return digits;
	}
	public boolean isPrime() {
		for(int val=value-1;val>1;val--) {
			if(this.value%val == 0) return false;
		}
		return true;
	}
	@Override
	public boolean equals(Object obj) {
		if(obj == null || !(obj instanceof Number)) return false;
		Number rgt = (Number)obj;
		return this.value == rgt.value;
	}
	@Override
	public String toString() {
		return String.valueOf(value);
	}
}
