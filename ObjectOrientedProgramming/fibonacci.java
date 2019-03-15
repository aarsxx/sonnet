package fibonacci;

import java.util.Scanner;
import java.util.Vector;
import java.util.ArrayList;
import java.util.Collections; 

public class fibonacci {

	public static void main(String[] args) {
		
		//Array
		String[] cars;
		String[] cars1 = {"Volvo", "BMW", "Ford", "Mazda"};
		for (String i : cars1) {
		System.out.println(i);
		}
		
		// arrayList
		ArrayList<String> cars2 = new ArrayList<String>();

	    cars2.add("Volvo");
	    cars2.add("BMW");
	    cars2.add("Ford");
	    cars2.add("Mazda");

	    Collections.sort(cars2);  // Sort cars

	    for (String i : cars2) {
	      System.out.println(i);
	    }
	    
	    
	    // Vector
	    Vector<String> Cars3 = new Vector<>(); 
	    Cars3.addElement("Volvo");
	    Cars3.addElement("BMW");
	    Cars3.addElement("Peugot");
	    Cars3.addElement("Mazda");

	    Collections.sort(Cars3);  // Sort cars

	    for (String i : Cars3) {
	      System.out.println(i);
	    }
	}

}
