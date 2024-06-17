

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k = 0, count = 1;
        for (int i = 0; i < nums.size(); i++) {
            if (i == 0 || nums[i] != nums[i - 1]) {
                nums[k++] = nums[i];
                count = 1;
            }else{
                if(count<2){
                    nums[k++] = nums[i];
                    count++;
                }
            }
        }
        return k;   
    }
    
};

int main(){
    vector<int> array = {0,0,1,1,1,2,2,3,3,4}; 
    Solution solution;
    int size = solution.removeDuplicates(array);
    for(int i = 0; i < 9; i++){
        cout<<array[i]<<" ";    
    }
    
return 0;
}