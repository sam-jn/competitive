void minheapify(int* a, int i, int n){
    int lc = 2*i + 1, rc = 2*i + 2;
    int smallest = i;
    if(lc < n && a[smallest] > a[lc]) smallest = lc;
    if(rc < n && a[smallest] > a[rc]) smallest = rc;
    if(smallest != i){ 
        swap(&a[smallest], &a[i]);
        minheapify(a, smallest, n);
    }
}
void buildminheap(int *a, int n){
    int x = (n - 1) / 2;
    while(x >= 0){
        minheapify(a, x, n);
        x--;
    }
}
void heapsort(int *a, int n){
    buildminheap(a, n);
    for(int i = 1; i <= n; i++){
        cout << a[0] << " ";
        swap(a[0], a[n - i]);
        minheapify(a, 0, n - i);
    }
}
