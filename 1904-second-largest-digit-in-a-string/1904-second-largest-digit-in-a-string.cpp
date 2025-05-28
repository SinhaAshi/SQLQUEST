class Solution {
public:
    int secondHighest(string s) {
         vector<int> digitArray;
        int maxElement=INT_MIN;
        int secondMaxElement=INT_MIN;
         for (char ch : s) {
        if (isdigit(ch)) {
            digitArray.push_back(ch - '0');
        }
    }
    for(int i=0;i<digitArray.size();i++){
        if(digitArray[i]>maxElement){
            secondMaxElement=maxElement;
            maxElement=digitArray[i];
        }
        else if(digitArray[i]>secondMaxElement && digitArray[i]<maxElement){
            secondMaxElement=digitArray[i];
        }
    }
    return (secondMaxElement == INT_MIN) ? -1 : secondMaxElement;
        
    }
};