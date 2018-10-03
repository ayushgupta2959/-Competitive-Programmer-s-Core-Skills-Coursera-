import java.io.*;
import java.util.Scanner;
import java.util.StringTokenizer;

public class LIS {
    public static void main(String[] arg) {
        Scanner in = new Scanner(System.in);
        PrintWriter out = new PrintWriter(System.out);

        int n;
        n = in.nextInt();
        int[] a = new int[n];
        for (int i = 0; i < n; ++i)
            a[i] = in.nextInt();

        int result = 0;
        // your code

        out.println(result);

        out.close();
    }
}