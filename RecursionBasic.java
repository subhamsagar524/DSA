
public class RecursionBasic {

    public static void print1toN(Integer n) {
        if(n == 0)  return;
        print1toN(n - 1);
        System.out.print(n + " ");
    }

    public static void print1toNEfficient(int n, Integer k) {
        if(n == 0)  return;
        System.out.print(k + " ");
        print1toNEfficient(n - 1, k + 1);
    }

    public static void printNto1(Integer n) {
        if(n == 0)  return;
        System.out.print(n + " ");
        print1toN(n - 1);
    }

    public static int getSumN(int n) {
        if(n == 0)  return 0;
        return n + getSumN(n - 1);
    }

    public static boolean isPalindrome(String str, int start, int end) {
        if(start >= end)  return true;
        return str.charAt(start) == str.charAt(end) && isPalindrome(str, start + 1, end - 1);
    }

    public static int getDigits(int n) {
        if(n == 0)  return 0;
        return 1 + getDigits(n/10);
    }

    public static int getSumofDigits(int n) {
        if(n <=9)   return n;
        return getSumofDigits(n / 10) + n % 10;
    }

    public static void main(String[] args) {
        System.out.print("Print 1 to 10: ");
        print1toN(10);
        System.out.println();
        System.out.print("Print 10 to 1: ");
        printNto1(10);
        System.out.println();
        System.out.print("Print 1 to 10 efficiently: ");
        print1toNEfficient(10, 1);
        System.out.println();
        System.out.print("Sum of 1 to 10: " + getSumN(10));
        System.out.println();
        System.out.print("Is ab5ba palindrome: " + isPalindrome("ab5ba", 0, 4));
        System.out.println();
        System.out.print("Count digits in 1232345: " + getDigits(1232345));
        System.out.println();
        System.out.print("Sum of digits in 1232345: " + getSumofDigits(1232345));
    }
}
