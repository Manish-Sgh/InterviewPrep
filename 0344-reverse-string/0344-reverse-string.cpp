class Solution {
public:

    void swap(char &a , char &b) {
        char temp;
        temp = a;
        a = b ;
        b = temp;
    }
    void reverseString(vector<char>& s) {
        int size = s.size();  
        int low = 0; 
        int high  = size - 1;
        while(low <= high ) {
            swap(s[low], s[high]);
            low++;
            high--;
        }
    }
};