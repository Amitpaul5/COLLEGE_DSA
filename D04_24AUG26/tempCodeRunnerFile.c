
void bubbleSort(int arr[],int size){
    for(int step=0;step<size-1;++step){
        for(int i=0;i<size-step-1;++i){
            if(arr[i]>arr[i+1]){
                // int temp=arr[i];
                // arr[i]=arr[i+1];
                // arr[i+1]=temp;
                swap(arr, i+1, i+1);
            }