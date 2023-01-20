//
// Created by JING-MING CHEN on 2023/1/21.
//

#ifndef SORTING_ALGORITHM_WITH_GOOGLETEST__HEAP_SORT_H_
#define SORTING_ALGORITHM_WITH_GOOGLETEST__HEAP_SORT_H_


#include <utility>
#include <vector>
using std::vector;
using std::swap;

void adjustHeap(vector<int>& vec, int i, int len);

void HeapSort(vector<int>& vec) {
  for (int i = vec.size() / 2 - 1; i >= 0; i--) {
    adjustHeap(vec, i, vec.size());
  }
  for (int i = vec.size() - 1; i > 0; i--) {
    swap(vec[i], vec[0]);
    adjustHeap(vec, 0, i);
  }
}

void adjustHeap(vector<int>& vec, int i, int len) {
  auto temp  = vec[i];

  for (int k = i*2+1; k < len; k = k*2+1) {
    if (k+1<len && vec[k] < vec[k+1]) {
      k++;
    }
    if (vec[k] > temp) {
      vec[i] = vec[k];
      i = k;
    } else {
      break;
    }

  }
  vec[i] = temp;
}



#endif //SORTING_ALGORITHM_WITH_GOOGLETEST__HEAP_SORT_H_
