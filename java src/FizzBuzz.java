public class FizzBuzz {

    static String x;
    
    public static void main(String[] args) {
        for (int i = 100; i > 0; i--)
        {
            x = Integer.toString(i);
            
            if (i%3 == 0 && i%5 == 0)
            {
                x = "FizzBuzz";
            }
            else if (i % 3 == 0)
            {
                x = "Fizz";
            }
            else if (i % 5 == 0)
            {
                x = "Buzz";
            }
            
            System.out.println(i + " - " + x);
        }
    }
}
