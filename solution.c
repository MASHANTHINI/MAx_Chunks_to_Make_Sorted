
#define MAX(a,b) (((a)>(b))?(a):(b))
int maxChunksToSorted(int* arr, int arrSize) {
    int count=0;
    int m=0;
    for(int i=0;i<arrSize;i++){
        m=MAX(m,arr[i]);
        if(m==i)
        count++;
        
    }
    return count;
}
