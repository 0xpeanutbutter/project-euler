class Solution{
    public static void main(String[] args) {
        int n = 1000;
        int sum = 0;
        for(int i=1;i<n;i++){
            if(i%5==0 || i%3==0){
                sum+=i;
            }
        }
        System.out.println(sum);
    }
}