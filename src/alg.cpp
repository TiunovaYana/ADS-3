// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  int n = 0; 
  int i = 0, j = size - 1;
    while(i < j) {
        int mid = i + (j - i) / 2;
        if(arr[mid] == value)
            n++;
        else if(arr[mid] > value)
            j = mid;
        else
            i = mid + 1;
    }
    return n;
}
}
