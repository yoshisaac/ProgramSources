import java.util.*;
import java.math.*;

class Main {
    public static void main(String[] args) throws InterruptedException  {

	double i = 0.0;
	
	while (true) {
	    for (int h = 0; h < 100 * Math.abs(Math.cos(i)); h++) {
		System.out.print(" ");
	    }

	    System.out.println("*");

	    i+=0.1;

	    Thread.sleep(65);
	}
    }
}
