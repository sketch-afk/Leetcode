class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int sumEven = n*(n+1);
        int sumOdd = n*n;
        while(sumEven>0 && sumOdd>0){
            if(sumEven>sumOdd) sumEven=sumEven%sumOdd;
            else sumOdd = sumOdd%sumEven;
        }
        if(sumEven == 0) return sumOdd;
        else return sumEven;
    }
};