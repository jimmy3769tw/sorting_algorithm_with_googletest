//
// Created by JING-MING CHEN on 2023/1/20.
//
#ifndef SORT__BUBBLE_SORT_H_
#define SORT__BUBBLE_SORT_H_
#include <vector>
#include <utility>
using std::vector;
using std::swap;
void BubbleSort(vector<int>& vec) {
  auto sz = vec.size();
  for (int i = 0; i<sz-1; i++) {
    for (int j = 0; j < sz-i-1; j++) {
      if ( vec[j] > vec[j+1] ) {
        swap(vec[j], vec[j+1]);
      }
    }
  }
}
#endif// SORT__BUBBLE_SORT_H_



