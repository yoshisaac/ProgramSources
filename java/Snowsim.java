import java.util.*;
import java.io.*;

public class Snowsim {

    public static void main(String[] args) throws IOException, InterruptedException {
        
        while (true)
        {
            for (int x = 0; x < 999; x++)
            {
                for (int i = 0; i < Math.random()*100; i++)
                {
                    System.out.print('\t');
                }
                
                System.out.println('*');
            }
            
            new ProcessBuilder("cmd", "/c", "cls").inheritIO().start().waitFor();
        }
        
    }
}
