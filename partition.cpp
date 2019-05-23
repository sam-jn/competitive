int part(vector<int> &A, int l, int r){
    int i, x = A[r], temp, j = l;
    
    for(i = l; i < r; i++){
        if(A[i] < x){
            temp = A[i];
            A[i] = A[j];
            A[j] = temp;
            j++;
        }
    }
    temp = A[i];
    A[i] = A[j];
    A[j] = temp;
    return j;
}