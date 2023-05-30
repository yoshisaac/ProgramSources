import java.io.*;
import java.util.*;

class wave
{

    static Scanner GetInput = new Scanner(System.in);
    
    static int WaveLengthForward, WaveLengthBack, Wavetime;
    static String Character;

	final static char space = ' ';

	public static void main(String[] args) throws IOException, InterruptedException 
	{
            System.out.print("Wave Length Forward: ");
            WaveLengthForward = GetInput.nextInt();

            System.out.print('\n');

			System.out.print("Wave Length Back: ");
			WaveLengthBack = GetInput.nextInt();

			if (WaveLengthBack > WaveLengthForward)
			{
				new ProcessBuilder("cmd", "/c", "cls").inheritIO().start().waitFor();
				return;
			}

			System.out.print('\n');
            
            System.out.print("Wait per draw in ms: ");
            Wavetime = GetInput.nextInt();

            System.out.print('\n');

            System.out.print("Character to print: ");
            Character = GetInput.next();

            new ProcessBuilder("cmd", "/c", "cls").inheritIO().start().waitFor();

            
		while (true)
		{
			for (int spaces = WaveLengthBack; spaces < WaveLengthForward; spaces++)
			{
				spaces(spaces, space);
				System.out.println(Character);
				Thread.sleep(Wavetime);
			}

			for (int spaces = WaveLengthForward; spaces > WaveLengthBack; spaces--)
			{
				spaces(spaces, space);
				System.out.println(Character);
				Thread.sleep(Wavetime);
			}
		}
	}

	public static void spaces(int NumberOfCharacters, char character)
	{
		for (int c = 0; c < NumberOfCharacters; c++) { System.out.print(character); }
	}
}