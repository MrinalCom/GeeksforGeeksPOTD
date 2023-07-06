class Solution
{
    public:
   
    void quickSort(int arr[], int low, int high)
    {
       
        if(low>=high)
            return;
        
        int pivot=partition(arr,low,high);
        
        quickSort(arr,low,pivot-1);
        quickSort(arr,pivot+1,high);
    }
    
    public:
    int partition (int arr[], int low, int high)
    {
      
       int pi= arr[high]; 
       int i = low; 
       for(int j=low;j<high;j++){

          if(arr[j]<=pi){
              swap(arr[j],arr[i]);
              i++;
          }
       }
       
       swap(arr[i],arr[high]);
       return i; 
    }
};
