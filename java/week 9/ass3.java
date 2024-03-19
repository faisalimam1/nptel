import java.util.*;

public class W09_P3 {
    public static void main(String[] args) {
        try {
            byte byte_array[] = {
                'N', 'P', 'T', 'E', 'L', ' ', 
                '-', ' ', 
                'P', 'R', 'O', 'G', 'R', 'A', 'M', 'M', 'I', 'N', 'G', ' ', 
                'I', 'N', ' ', 
                'J', 'A', 'V', 'A'};
            Scanner inr = new Scanner(System.in);
            int n = inr.nextInt();
            inr.close();
          //from here
       if (n >= 0 && n < byte_array.length) {
                System.out.print("byte_array[" + n + "] = '" + (char) byte_array[n] + "'");
            } else {
                throw new ArrayIndexOutOfBoundsException();
            }
        } catch (InputMismatchException e) {
           System.out.println("Input must be an integer");
        } catch (ArrayIndexOutOfBoundsException e) {
            System.out.print("Array index is out of range");
        }
      //to here
  catch (Exception e) {
            System.out.println("Exception occurred");
        }
    }
}
