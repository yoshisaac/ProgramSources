import java.io.*;
import java.util.*;

class wave
{

    static Scanner GetInput = new Scanner(System.in);
    
    static int WaveLength, Wavetime;
    static String Character;

	public static void main(String[] args) throws InterruptedException 
	{
            System.out.print("Wave Length: ");
            WaveLength = GetInput.nextInt();

            System.out.print('\n');
            
            System.out.print("Wait per draw in ms: ");
            Wavetime = GetInput.nextInt();

            System.out.print('\n');

            System.out.print("Character to print: ");
            Character = GetInput.next();

            
		while (true)
		{
			for (int i = 0; i < WaveLength; i++)
			{
				spaces(i);
				System.out.print(Character + '\n');
				Thread.sleep(Wavetime);
			}

			for (int x = WaveLength; x > 0; x--)
			{
				spaces(x);
				System.out.print(Character + '\n');
				Thread.sleep(Wavetime);
			}
		}
	}

	public static void spaces(int spaces)
	{
		for (int c = 0; c < spaces; c++) { System.out.print(" "); }
	}
}