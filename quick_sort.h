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
  int key = left;
  int i = left+1;
  int j = right;

  while(i<=j) { // 細節
    if (vec[i] < vec[left]) {
        i++;
    } else if (vec[j] >= vec[left]) {
        j--;
    } else {
        swap(vec[i], vec[j]);
    }
  }
  swap(vec[left], vec[j]);

  QuickSort(left, j, vec);
  QuickSort(j+1, right, vec);
}
#endif //SORT__QUICK_SORT_H_
