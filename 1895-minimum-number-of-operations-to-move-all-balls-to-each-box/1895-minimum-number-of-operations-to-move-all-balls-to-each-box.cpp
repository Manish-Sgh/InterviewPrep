class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int> result(boxes.size(),0);

        for(int i = 0; i < boxes.size(); i++){
            int total = 0;
            for(int j = 0; j < boxes.size(); j++){
                if(boxes[j] == '1'){
                    total += abs(i-j);
                    
                } 
                result[i] = total;
            }
        }
        return result;
    }
};