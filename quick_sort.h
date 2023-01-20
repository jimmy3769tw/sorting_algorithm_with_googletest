//
// Created by JING-MING CHEN on 2023/1/20.
//
#ifndef SORT__QUICK_SORT_H_
#define SORT__QUICK_SORT_H_


#include <vector>
#include <utility>
using std::vector;
using std::swap;

void QuickSort(int left, int right, vector<int>& vec);

void QuickSort(vector<int>& vec) {
  QuickSort(0, vec.size()-1, vec);

}
void QuickSort(int left, int right, vector<int>& vec) {
  int sz = vec.size();
  if (left >= right) {
    return;
  }
  int i = left;
  int j = right+1;
  while(i!=j) {
    while (i+1 < sz && vec[++i] < vec[left]) {
      // void
    }
    while (j-1 >= 0 && vec[--j] > vec[left]) {
      // void
    }
    if (i >= j) {
      break;
    }
    swap(vec[i], vec[j]);
  }
  swap(vec[left], vec[j]);

  QuickSort(left, j-1, vec);
  QuickSort(j+1, right, vec);
}
#endif //SORT__QUICK_SORT_H_
