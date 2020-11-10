int mx_popular_int(const int *arr, int size) {
  int count = 1, tempCount;
  int popular = arr[0];
  int temp = 0;
  for (int i = 0; i < (size - 1); i++) {
    temp = arr[i];
    tempCount = 0;
    for (int j = 1; j < size; j++) {
      if (temp == arr[j])
        tempCount++;
    }
    if (tempCount > count) {
      popular = temp;
      count = tempCount;
    }
  }
  return popular;
}

