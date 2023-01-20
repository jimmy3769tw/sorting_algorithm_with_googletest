//
// Created by JING-MING CHEN on 2023/1/20.
//
//
#ifndef SORT__INSERT_SORT_H_
#define SORT__INSERT_SORT_H_

#include <vector>
#include <utility>
using std::swap;
using std::vector;

int getInsertIdx(vector<int>& vec, int end) {
  for (int i = 0; i < end; i++) {
    if (vec[i] >= vec[end]) {
      return i;
    }
  }
  return end;
}

void Insert(vector<int>& vec, int i, int j) {
  for (; i < j; j--) {
    swap(vec[j-1], vec[j]);
  }
}

void InsertSort(vector<int>& vec) {
  for (int i = 1; i < vec.size(); i++) {
    Insert(vec, getInsertIdx(vec, i), i);
  }
}
#endif // SORT__INSERT_SORT_H_
