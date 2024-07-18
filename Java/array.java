import java.util.Arrays;

public class array{
    public static void main(String[] args) {
        int[] ab = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        int[] b = {1, 4, 3, 5, 6, 7, 8, 9, 0, 0};
        int max = ab[0];
        for (int i = 1; i <10; i++) {
            if (ab[i] > max) {
                max = ab[i];
            }
        }
        System.out.println("Max element is " + max);


        int[] sumArray = addArrays(ab, b);
        System.out.println("Sum of arrays: " + Arrays.toString(sumArray));
    }

    
    public static int[] addArrays(int[] ar1, int[] ar2) {
        if (ar1.length != ar2.length) {
           System.out.println(" arrays must have the same length");
        }

        int[] sum = new int[ar1.length];
        for (int i = 0; i < ar1.length; i++) {
            sum[i] = ar1[i] + ar2[i];
        }
        return sum;
    }
}
