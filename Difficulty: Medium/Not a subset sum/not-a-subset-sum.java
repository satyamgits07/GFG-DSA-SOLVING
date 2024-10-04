//{ Driver Code Starts
// Initial Template for Java
import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        sc.nextLine(); // Consume the newline character
        while (t-- > 0) {
            String input = sc.nextLine();
            String[] inputArr = input.split(" ");
            int[] arr = new int[inputArr.length];
            for (int i = 0; i < inputArr.length; i++) {
                arr[i] = Integer.parseInt(inputArr[i]);
            }

            Solution ob = new Solution();
            long ans = ob.findSmallest(arr);
            System.out.println(ans);
        }
        sc.close();
    }
}

// } Driver Code Ends


class Solution {
    public long findSmallest(int[] arr) {
        // Your code goes here
        if(arr[0]>1)return 1;
        long sum = arr[0];
        for(int i=1; i<arr.length;i++){
            if(arr[i]<=sum+1){
                sum = sum+arr[i];
            }else return sum+1;
        }
        return sum+1;
    }
}