//
// Created by JING-MING CHEN on 2023/1/20.
//
#ifndef SORT__SELECTION_SORT_H_
#define SORT__SELECTION_SORT_H_
#include <vector>
#include <utility>
using std::swap;
using std::vector;
int findMin(vector<int>&vec, int i) {
	int idx = i;
	i++;
	for (; i < vec.size(); i++) {
		if (vec[i] < vec[idx]) {
			idx = i;
		}
	}
	return idx;
}

void SelectionSort(vector<int>& vec) {
	for (int i = 0; i < vec.size()-1; i++) {
		auto j = findMin(vec, i);
		swap(vec[i], vec[j]);
	}
}
#endif// SORT__SELECTION_SORT_H_