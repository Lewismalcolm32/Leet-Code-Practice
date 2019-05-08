class Solution {
public:

    //isNine will handle the 3 case I came accross when there's a nine in my array:
    //1 - A nine at the beginning of the array
    //2 - A nine in the array (next to another nine)
    //3 - A nine in the array (next to a non nine number)

    void isNine(vector<int>& num, int index){
        int initSize = num.size();

        while (num[index] == 9){ //1 (when index is 0)
            if (index == 0){
                    num.push_back(1);
                    swap(num[0],num[num.size() - 1]);
                    num[num.size() - 1] = 0;
                    break;
            }

            else { //2 (when index is not 0)
                num[index] = 0;}

            index-=1;
        }

         if ((num[index]<9)&&(initSize==num.size())) num[index]+=1; //3 (when index-1 is not 9)

    }

    //plusOne adds one correctly to container of intgers (less than 10) seperated by commas
    vector<int> plusOne(vector<int>& digits) {

        if (digits[digits.size()-1] !=9) { digits[digits.size()-1] +=1;}
        else {isNine(digits, digits.size()-1);}
        return digits;
    }

};


//Time Comp: 0(n)
//Space Comp: O(1)
