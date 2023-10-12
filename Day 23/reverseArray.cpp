void reverse(int arr[], int n)
{
    int first = 0;
    int last = n-1;
    int temp = 0;
    while(first < last){
        temp = arr[first];
        arr[first] = arr[last];
        arr[last] = temp;
        first++;
        last--;
    }
}

void rotate(int arr[], int n)
{
    int first = 0;
    int last = n-1;
    int temp = 0;
    while(first < last){
        temp = arr[first];
        arr[first] = arr[last];
        arr[last] = temp;
        first++;
        // last--;
    } 
}