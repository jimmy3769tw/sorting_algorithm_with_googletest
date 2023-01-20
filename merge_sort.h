//
// Created by JING-MING CHEN on 2023/1/20.
//
#ifndef SORTING_ALGORITHM_WITH_GOOGLETEST__MERGE_SORT_H_
#define SORTING_ALGORITHM_WITH_GOOGLETEST__MERGE_SORT_H_
#include <vector>
#include <utility>
using std::vector;
using std::swap;
void MergeSort(vector<int>& vec, int left, int right, vector<int>& temp);
void Merge(vector<int> & vec, int left, int mid, int right, vector<int>& temp);

void MergeSort(vector<int>& vec) {
  vector<int> result(vec.size());
  MergeSort(vec, 0, vec.size()-1, result);
}

void MergeSort(vector<int>& vec, int left, int right, vector<int>& temp) {
  if (left == right) return;
  int mid = left + (right - left)/2;
  // divide
  MergeSort(vec, left, mid, temp);
  MergeSort(vec, mid+1, right, temp);
  // conquer
  Merge(vec, left, mid, right, temp);
}

void Merge(vector<int>& vec, int left, int mid, int right, vector<int>& temp) {
  int i = left;
  int j = mid+1;
  int t = left;
  while(i <= mid && j <= right) {
    if (vec[i] < vec[j]) {
        temp[t++] = vec[i++];
    } else {
      temp[t++] = vec[j++];
    }
  }
  while (j <= right) {
    temp[t++] = vec[j++];
  }
  while (i <= mid) {
    temp[t++] = vec[i++];
  }
  t = left;
  int tempLeft = left;
  while(tempLeft<=right) {
    vec[tempLeft++] = temp[t++];
  }
}



#endif //SORTING_ALGORITHM_WITH_GOOGLETEST__MERGE_SORT_H_
