import java.io.*;
import java.util.ArrayList;
import java.util.Scanner;
import java.util.StringTokenizer;

public class Knapsack {
    public static void main(String[] arg) {
        Scanner in = new Scanner(System.in);
        PrintWriter out = new PrintWriter(System.out);

        int n, W;
        n = in.nextInt();
        W = in.nextInt();

        int[] w = new int[n];
        int[] v = new int[n];
        for (int i = 0; i < n; ++i) {
            w[i] = in.nextInt();
            v[i] = in.nextInt();
        }

        ArrayList<Integer> result = new ArrayList<Integer>();
        // your code

        out.println(result.size());
        for (int i = 0; i < result.size(); ++i) {
            if (i != 0) out.print(' ');
            out.print(result.get(i));
        }
        out.println();

        out.close();
    }
}