public class CutTheRope {

    public static int getMaxNuberOfPieces(int n, int a, int b, int c) {
        if (n == 0)
            return 0;
        if (n < 0)
            return -1;

        // int max = 0, temp = 0;
        // temp = getMaxNuberOfPieces(n - a, a, b, c);
        // max = max < temp ? temp : max;
        // System.out.println("Max: " + max);
        // temp = getMaxNuberOfPieces(n - b, a, b, c);
        // max = max < temp ? temp : max;
        // System.out.println("Max: " + max);
        // temp = getMaxNuberOfPieces(n - c, a, b, c);
        // max = max < temp ? temp : max;
        // System.out.println("Max: " + max);

        int max = Math.max(Math.max(getMaxNuberOfPieces(n - a, a, b, c), getMaxNuberOfPieces(n - b, a, b, c)),
                getMaxNuberOfPieces(n - c, a, b, c));

        if (max == -1)
            return -1;

        return max + 1;
    }

    public static void main(String[] args) {
        System.out.println(getMaxNuberOfPieces(9, 2, 3, 5));
    }
}
