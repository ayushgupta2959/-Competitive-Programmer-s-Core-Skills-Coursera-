import java.io.*;
import java.util.Scanner;
import java.util.StringTokenizer;

public class FrequentSymbol {
    public static void main(String[] arg) {
        FastScanner in = new FastScanner(System.in);
        PrintWriter out = new PrintWriter(System.out);

        String s;
        s = in.next();
        int q;
        q = in.nextInt();
        int[] l = new int[q];
        int[] r = new int[q];
        for (int i = 0; i < q; ++i) {
            l[i] = in.nextInt();
            r[i] = in.nextInt();
        }

        char[] result = new char[q];

        // your code

        for (int i = 0; i < result.length; ++i) {
            out.println(result[i]);
        }

        out.close();
    }

    static class FastScanner {
        BufferedReader br;
        StringTokenizer st;

        FastScanner(InputStream stream) {
            try {
                br = new BufferedReader(new InputStreamReader(stream));
            } catch (Exception e) {
                e.printStackTrace();
            }
        }

        String next() {
            while (st == null || !st.hasMoreTokens()) {
                try {
                    st = new StringTokenizer(br.readLine());
                } catch (IOException e) {
                    e.printStackTrace();
                }
            }
            return st.nextToken();
        }

        int nextInt() {
            return Integer.parseInt(next());
        }
    }
}