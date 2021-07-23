class Solution:  
    def findMean(self, arr, queries, n, q): 
        result =[]
        prefixSum=[0]*len(arr)
        prefixSum[0]=0
        for i in range(1,len(arr)):
            prefixSum[i]=prefixSum[i-1]+arr[i-1]
        for i in range(0,q ,2):
            l=queries[i]
            r=queries[i+1]
            sum = prefixSum[r]-prefixSum[l] +arr[r
            result.append(int(sum/(r-l+1)))
        return result
