import java.io.*;
import java.util.Scanner;
import java.util.StringTokenizer;

public class EditDistance {
    public static void main(String[] arg) {
        Scanner in = new Scanner(System.in);
        PrintWriter out = new PrintWriter(System.out);

        int n, m;
        n = in.nextInt();
        m = in.nextInt();
        String u, w;
        u = in.next();
        w = in.next();
        int I, D, S;
        I = in.nextInt();
        D = in.nextInt();
        S = in.nextInt();

        int result = 0;

        // your code

        out.println(result);

        out.close();
    }
}