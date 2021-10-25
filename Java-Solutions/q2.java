class Solution {
    public static void main(String[] args) {
        int former = 0;
        int latter = 1;
        int tmp = former+latter;
        int sum = 0;
        while(tmp <= 4000000){
            if(tmp%2==0){
                sum+=tmp;
            }
            former = latter;
            latter= tmp;
            tmp = former+latter;
        }
        System.out.println(sum);
    }
}
