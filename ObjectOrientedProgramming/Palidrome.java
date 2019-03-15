package Palidrome;

import java.util.Scanner;

public class Palidrome {
	
	public static void main(String[] args)
	{
		int len;
		Scanner sc = new Scanner(System.in);
		System.out.println("masukan angka palindrome");
		String input = sc.nextLine();
		len = input.length();
		
		int i, start, middle, end;
		start = 0;
		end = len -1;
		middle = (start + end)/2;
		 
		for (i = start; i <= middle; i++) {
		      if (input.charAt(start) == input.charAt(end)) {
		        start++;
		        end--;
		      }
		      else {
		        break;
		      }
		    }
		
		if (i == middle + 1) {
		      System.out.println("Palindrome");
		    }
		else {
		      System.out.println("Not a palindrome");
		    }  
	}
}


