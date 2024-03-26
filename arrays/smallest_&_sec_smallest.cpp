vector<int> minAnd2ndMin(int a[], int n) {
    // int smallest=-1, second_smallest=-1;
    int smallest=INT_MAX,second_smallest=INT_MAX;
    for(int i=0;i<n;i++){
        if(a[i]<smallest){
            second_smallest=smallest;
            smallest=a[i];
        }else if(a[i]<second_smallest && a[i]!=smallest){
            second_smallest=a[i];
        }
    }
    
    if(second_smallest==INT_MAX ||second_smallest==smallest){
        smallest=-1;
        second_smallest=-1;
    }
    vector<int> v(2);
    v[0]=smallest;
    v[1]=second_smallest;
    return v;           
}
//question link:https://www.geeksforgeeks.org/problems/find-the-smallest-and-second-smallest-element-in-an-array3226/1
