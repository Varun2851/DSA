void BubbleSort(int *a,int n,int i){
	// base case
	if(i == n-1){
		return;
	}
	// recursive case
	for(int j = 0 ; j < n - 1 - i ; j++){
		if(a[j]>a[j+1]){
			swap(a[j],a[j+1]);
		}
	}
	// when j will become n-1-i
	BubbleSort(a,n,i+1);
}