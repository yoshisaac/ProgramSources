import java.io.*;
import java.util.*;

class Randwave
{
    
    static Scanner GetInput = new Scanner(System.in);
    
    static String Character;
    
    public static void main(String[] args) throws IOException, InterruptedException
    {
        System.out.print("Character to print: ");
        Character = GetInput.next();
        
        new ProcessBuilder("cmd", "/c", "cls").inheritIO().start().waitFor();
        
        while (true)
	{
		double WaveLengthOne = (Math.random()*100)%17;
                int WaveLength = (int) WaveLengthOne;
                
		for (int i = 0; i < WaveLength; i++)
		{
			spaces(i);
			System.out.print(Character + '\n');
			Thread.sleep(45);
		}

		for (int x = WaveLength; x > 0; x--)
		{
			spaces(x);
			System.out.print(Character + '\n');
			Thread.sleep(45);
		}
	}
    }
    
    public static void spaces(int spaces)
    {
        for (int c = 0; c < spaces; c++) { System.out.print(" "); }
    }
}