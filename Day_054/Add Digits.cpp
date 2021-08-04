class Solution {
public:
    int addDigits(int num) {
        while(num>9){
            num = add_digits(num);      
        }
        return num;
    }
    int add_digits(int num){
        int new_num =0;
        while(num!=0){
            new_num+=num%10;
            num /=10;
        }
        return new_num;
    }
};
