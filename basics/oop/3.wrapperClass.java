package basicJava;

public class wrapperClass {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		// primitive data type ga bisa dibuat ke object, butuh wrapper
		
		Integer angkaInteger = 5;
		Float angkaFloat = 10f;
		Character karakter = 'A'; 
		Boolean bool = true;
		//object dapat di set NULL     
		angkaInteger =  null;
		
		angkaInteger = Integer.valueOf("150");
		System.out.println(angkaInteger);
		
		System.out.println(angkaInteger.MIN_VALUE);
		System.out.println(angkaFloat.MIN_VALUE);
		System.out.println(angkaInteger.MAX_VALUE);
		System.out.println(angkaFloat.MAX_VALUE);
		
		
		// String
		String kata1 = "UMN";
		String kata2 =  new String("BINUS");
		System.out.println(kata1 +" "+ kata2);
		
		// compare  == , equals,  compareTo
		if(kata1 == kata2) {
			System.out.println("Kata1 sama dengan 2");
		}else {
			System.out.println("kata1 tidak sama dengan 2");
		}
		if(kata1.equals(kata2)) {
			System.out.println("Kata1 sama dengan 2");
		}else {
			System.out.println("kata1 tidak sama dengan 2");
		}
		
		// Length
		System.out.println(kata1.length());
		System.out.println(kata1.charAt(0));
		System.out.println(kata1.concat(kata2));
		System.out.println(kata1.substring(2, 5));
		System.out.println(kata1.toLowerCase());
		System.out.println(kata1.toUpperCase());
		// trim
		kata1 = "    Course   ";
		System.out.println(kata1.trim());
		kata1 = "Course";
		
		System.out.println(kata1.replace("e", "i"));
		System.out.println(kata1.replaceFirst("e", "i"));
		
		String kataSplit = "CN#UMN";
		String[] hasil = kataSplit.split("#");
		
		System.out.println(Math.round(4.5));
		
		
		
	}

}
