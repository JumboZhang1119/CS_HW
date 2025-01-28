int* concatenate(int* array_1, int* array_2, int size_1, int size_2) {
    int* array_3 = new int[size_1+size_2];
    for (int* i = array_1; i <= array_1+size_1; i++) {
        *(array_3 + (i-array_1)) = *i;
    }
    for (int* i = array_2; i <= array_2+size_2; i++) {
        *(array_3 + (i-array_2+size_1)) = *i;
    }
    return array_3;
}