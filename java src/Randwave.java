import java.io.*;
import java.util.*;

class Randwave
{
    static Scanner GetInput = new Scanner(System.in);
    
    static String Character;

	static final char space = ' ';
    
    public static void main(String[] args) throws IOException, InterruptedException
    {
        System.out.print("Character to print: ");
        Character = GetInput.next();
        
        new ProcessBuilder("cmd", "/c", "cls").inheritIO().start().waitFor();

		double WaveLengthBackDouble;
		int WaveLengthBack = 0;

		double WaveLengthForwardDouble = (Math.random()*100)%17;
		int WaveLengthForward = (int) WaveLengthForwardDouble;
        
		while (true)
		{			
			for (int spaces = WaveLengthBack; spaces < WaveLengthForward; spaces++)
			{ spaces(spaces, space); System.out.println(Character); Thread.sleep(45); }

			WaveLengthBackDouble = (Math.random()*100)%17;
			WaveLengthBack = (int) WaveLengthBackDouble;
			while (WaveLengthBack > WaveLengthForward)
			{ WaveLengthBackDouble = (Math.random()*100)%17; WaveLengthBack = (int) WaveLengthBackDouble; }

			for (int spaces = WaveLengthForward; spaces > WaveLengthBack; spaces--)
			{ spaces(spaces, space); System.out.println(Character); Thread.sleep(45); }

			WaveLengthForwardDouble = (Math.random()*100)%17;
			WaveLengthForward = (int) WaveLengthForwardDouble;
			while (WaveLengthBack > WaveLengthForward)
			{ WaveLengthForwardDouble = (Math.random()*100)%17; WaveLengthForward = (int) WaveLengthForwardDouble; } 
		}
    }
    
    public static void spaces(int NumberOfCharacters, char Character)
    {
        for (int c = 0; c < NumberOfCharacters; c++) { System.out.print(Character); }
    }
}