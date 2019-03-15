package basicJava;

import java.util.ArrayList;
import java.util.Vector;

public class ArrayListVector {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		 int[] angka = new int[5];
		 angka[2] = 5;
		 System.out.println(angka[2]);
		 
		 String nama[] = new String[5];
		 nama[0] = "asd";
		 
	
		 // duplicate array
		 int [] SourceArray= {2,3,4,8};
		 
		 int [] TargetArray1= new int[4];
		 int [] TargetArray2= new int[4];
		 int [] TargetArray3= new int[4];
		 
		 // 1. looping
		 for(int i1=0; i1<SourceArray.length;i1++) {
			 TargetArray1[i1]=SourceArray[i1];
		 }
		 for(int i1=0; i1<TargetArray1.length;i1++) {
			 System.out.println(TargetArray1[i1]);
		 }
		 
		 //2. Arraycopy
		 System.arraycopy(SourceArray, 0, 
				 TargetArray2, 0, 4);
		 
		 for(int i1=0; i1<TargetArray2.length;i1++) {
			 System.out.println(TargetArray2[i1]);
		 }

		 //3. clone
		 TargetArray3 = SourceArray.clone();
		 for(int i1=0; i1<TargetArray3.length;i1++) {
			 System.out.println(TargetArray3[i1]);
		 }
		 
		 
		 // array 2d
		 int angka1[] = {'2','3','4'};
		 int angka2[][] = {{'1','2','3'},
				 			{'4','5','6'},
				 			{'7','8','9'}
				 			};
		 
		 
		 
		 ArrayList<String>cars = new ArrayList<String>();
		 	
		 
		    cars.add("Volvo");
		    cars.add("BMW");
		    cars.add("Ford");
		    cars.add("Mazda");
		    
		    
		    
		    for (String i : cars) {
		      System.out.println(i);
		    }
		    
		    
		    cars.set(4, "Honda");
		    cars.size();
		    cars.indexOf("BMW");
		    cars.get(4);
		    cars.remove(0);
		    cars.clear();
		    
	  		} 
		 
		 Vector<String> vec = new Vector<String>();
		 
	

}
