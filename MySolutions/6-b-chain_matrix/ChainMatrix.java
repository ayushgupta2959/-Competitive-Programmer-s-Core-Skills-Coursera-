import java.io.*;
import java.util.ArrayList;
import java.util.Scanner;
import java.util.StringTokenizer;

public class ChainMatrix {
    public static void main(String[] arg) {
        Scanner in = new Scanner(System.in);
        PrintWriter out = new PrintWriter(System.out);

        int n;
        n = in.nextInt();
        int[] m = new int[n + 1];
        for (int i = 0; i <= n; ++i)
            m[i] = in.nextInt();

        long result = 0;
        // your code

        out.println(result);

        out.close();
    }
}