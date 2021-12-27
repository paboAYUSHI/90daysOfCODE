vector<int> subarraySum(int arr[], int n, long long s)
    {
        int i = 0;
        int j = 0;
        long long sum = arr[0];
        while(i < n && j < n){
            if(sum == s){
                if(i == j)
                    return {i + 1,i + 1};
                else
                    return {i + 1,j + 1};
            }
            if(sum < s)
                sum += arr[++j];
            else
                sum -= arr[i++];
        }
        return {-1};
    }