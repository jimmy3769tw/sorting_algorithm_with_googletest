//
// Created by JING-MING CHEN on 2023/1/20.
//

#include "merge_sort.h"
#include <iostream>
#include <vector>
#include <cstdlib>
#include "bubble_sort.h"
#include "selection_sort.h"
#include "insert_sort.h"
#include "quick_sort.h"
#include "heap_sort.h"
#include <gtest/gtest.h>
using std::vector;
using std::cout;
using std::endl;
vector<int> original;
vector<int> ans;

vector<int> RandomVector(int size, int range_begin = 0) {
  vector<int> result(size);
  for (auto& x : result) {
    x = rand() % size + range_begin;
  }
  return result;
}


TEST(BubbleSort, test1) {
  auto temp = original;
  BubbleSort(temp);
  EXPECT_EQ(temp, ans);
}

TEST(SelectionSort, test1) {
  auto temp = original;
  SelectionSort(temp);
  EXPECT_EQ(temp, ans);
}

TEST(InsertSort, test1) {
  auto temp = original;
  InsertSort(temp);
  EXPECT_EQ(temp, ans);
}

TEST(MergeSort, test1) {
  auto temp = original;
  MergeSort(temp);
  EXPECT_EQ(temp, ans);
}

TEST(QuickSort, test1) {
  auto temp = original;
  QuickSort(temp);
  EXPECT_EQ(temp, ans);
}

TEST(HeapSort, test1) {
  auto temp = original;
  HeapSort(temp);
  EXPECT_EQ(temp, ans);
}




int main(int argc, char **argv) {
  testing::InitGoogleTest(&argc, argv);
  original = RandomVector(10000);
  ans = original;
  std::sort(ans.begin(), ans.end());
  return RUN_ALL_TESTS();
}
