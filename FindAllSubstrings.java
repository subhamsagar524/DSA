public class FindAllSubstrings {

    public static void getAllSubsets(String str, String result, int index) {
        if(index == str.length()) {
            if("" == result)
                System.out.print("'', ");
            else
                System.out.print(result + ", ");
            return;
        }
        getAllSubsets(str, result, index + 1);
        getAllSubsets(str, result + str.charAt(index), index + 1);
    }

    public static void main(String[] args) {
        System.out.println("All subsets of 'ABC'... ");
        getAllSubsets("ABC", "", 0);
    }
}
