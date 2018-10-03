import java.io.PrintWriter;
import java.util.Scanner;

public class CompareSums {
    public static void main(String[] arg) {
        Scanner in = new Scanner(System.in);
        PrintWriter out = new PrintWriter(System.out);

        int n;
        n = in.nextInt();
        double[] a = new double[n];
        double[] b = new double[n];
        for (int i = 0; i < n; ++i)
            a[i] = in.nextDouble();
        for (int i = 0; i < n; ++i)
            b[i] = in.nextDouble();

        boolean equal_sum = false;
        boolean sum_a_larger = false;

        // your code

        if (equal_sum)
            out.println("SUM(A)=SUM(B)");
        else {
            if (sum_a_larger)
                out.println("SUM(A)>SUM(B)");
            else
                out.println("SUM(A)<SUM(B)");
        }

        in.close();
        out.close();
    }
}