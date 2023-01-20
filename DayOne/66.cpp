#include<bits/stdc++.h>
using namespace std;


vector<int> plusOne(vector<int>& digits) {
    int len = digits.size();

    /*for (int x : digits) {
        cout << x;
    }*/

    int carry = 0;
    for (int i = len - 1; i >= 0; i--) {
        if (digits[i] == 9) {
            digits[i] = 0;
            carry = 1;
        }
        else {
            if (carry == 0)
                carry = 1;
            digits[i] = digits[i] + carry;
            break;
        }
        if (carry == 1 && i == 0) {
            digits.insert(digits.begin() + 0, 1);
        }
    }

    return digits;

}


int main() {
    vector<int> nums = { 9,9,9,9,9 };
    vector<int> ans = plusOne(nums);

    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }

}


/*

class Solution {
public:
    vector<int> plusOne(vector<int>&digits) {
        int len = digits->size() ;
        int c= 0 ;
        for(int i=len-1 ; i>=0 ; i++){
            if(*digits[i]==9){
                digits[i]= 0 ;
                c = 1 ;

            }
            else {
                if (c ==0 ){
                    c =1 ;
                }
                digits[i] = digits[i]+ c;
                break ;
            }

            if (i==0 && c==1){
                digits.insert(0, 1);
                c=0 ;

            }
        }


        return digits;


    }
};

*/