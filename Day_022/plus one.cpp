class Solution {
  public:
    vector<int> increment(vector<int> arr ,int N) {
        int i;
        for(i=N-1; i>=0; i--){
            if(arr[i]!=9){
                arr[i]+=1;
                break;
            }
            arr[i]=0;
        }
        if(i==-1){
            arr.insert(arr.begin(),1);
            return arr;
        }
        return arr;
    }
};
