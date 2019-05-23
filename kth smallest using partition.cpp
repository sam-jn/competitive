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
int kth(vector<int> &A, int l, int r, int k){
    
    int p = part(A, l, r);
    if(p - l + 1 == k) return A[p];
    if(p - l + 1 > k){
        return kth(A, l, p - 1, k);
    }
    else{
        return kth(A, p + 1, r, k - (p - l + 1));
    }
}

void kthsmallest(vector<int> &A, int B) {
    int k = B;
    int n = A.size();
    cout << kth(A, 0, n - 1, k);
}