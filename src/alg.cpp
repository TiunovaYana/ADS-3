// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
    int n = 0;
    int mid1;
    int i = 0, j = size - 1;
    while (i <= j) {
        int mid = (j + i) / 2;
        if (arr[mid] == value) {
            n++;
            mid1 = mid;
            break;
        }
        if (value < arr[mid])
            j = mid - 1;
        else
            i = mid + 1;
    }
    if (mid1 >= 0) {
        for (int m = 0; m < mid1; m++) {
            if (arr[m] == value)
                n++;
        }
    for (int l = size - 1; l > mid1; l--) {
        if (arr[l] == value)
            n++;
    }
    return n;
}
