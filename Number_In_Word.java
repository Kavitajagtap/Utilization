
 //  This program besically takes input as a number(1digit, 3 digit, 4 digit) and return it's output in word format..

 /*

   Output:
   Enter any number: 1
   one
   ------------------------------------
   Enter any number: 159
   one Hundred And Fifty Nine
   ------------------------------------
   Enter any number: 1608
   one Thousand Six Hundred And Eight

*/

import java.util.*;
public class Number_In_Word {
    public static void main(String[] args)
    {
      Scanner ip = new Scanner(System.in);
        int rem = 0,rev = 0;
        System.out.print("Enter any number: ");
        int num = ip.nextInt();
        while(num > 0)
        {
            rem = num % 10;
            rev = rev * 10 + rem;
            num /= 10;
        }
        while(rev > 0)
        {
            if(rev > 999) {
                rem = rev % 10;
                switch (rem) {
                    case 1:
                        System.out.print("One Thousand");
                        break;
                    case 2:
                        System.out.print("Two Thousand");
                        break;
                    case 3:
                        System.out.print("Three Thousand");
                        break;
                    case 4:
                        System.out.print("Four Thousand");
                        break;
                    case 5:
                        System.out.print("Five Thousand");
                        break;
                    case 6:
                        System.out.print("Six Thousand");
                        break;
                    case 7:
                        System.out.print("Seven Thousand");
                        break;
                    case 8:
                        System.out.print("Eight Thousand");
                        break;
                    case 9:
                        System.out.print("Nine Thousand");
                        break;
                }
            }
            else if(rev > 99)
            {
                rem = rev % 10;
                switch(rem)
                {
                    case 1 : System.out.print(" One Hundred And"); break;
                    case 2 : System.out.print(" Two Hundred And"); break;
                    case 3 : System.out.print(" Three Hundred And"); break;
                    case 4 : System.out.print(" Four Hundred And"); break;
                    case 5 : System.out.print(" Five Hundred And"); break;
                    case 6 : System.out.print(" Six Hundred And"); break;
                    case 7 : System.out.print(" Seven Hundred And"); break;
                    case 8 : System.out.print(" Eight Hundred And"); break;
                    case 9 : System.out.print(" Nine Hundred And"); break;
                }
            }
            else if(rev > 9)
            {
                rem = rev % 10;
                switch(rem)
                {
                    case 1 : System.out.print(" Ten"); break;
                    case 2 : System.out.print(" Twenty"); break;
                    case 3 : System.out.print(" Thirty"); break;
                    case 4 : System.out.print(" Forty"); break;
                    case 5 : System.out.print(" Fifty"); break;
                    case 6 : System.out.print(" Sixty"); break;
                    case 7 : System.out.print(" Seventy"); break;
                    case 8 : System.out.print(" Eighty"); break;
                    case 9 : System.out.print(" Ninety"); break;
                }
            }
            else
            {
                rem = rev % 10;
                switch(rem)
                {
                    case 1 : System.out.println(" One"); break;
                    case 2 : System.out.println(" Two"); break;
                    case 3 : System.out.println(" Three"); break;
                    case 4 : System.out.println(" Four"); break;
                    case 5 : System.out.println(" Five"); break;
                    case 6 : System.out.println(" Six"); break;
                    case 7 : System.out.println(" Seven"); break;
                    case 8 : System.out.println(" Eight"); break;
                    case 9 : System.out.println(" Nine"); break;
                }
            }
            rev /= 10;
        }
    }
}
