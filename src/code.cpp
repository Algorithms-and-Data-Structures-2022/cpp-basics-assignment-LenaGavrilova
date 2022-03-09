#include "assignment/code.hpp"

#include <iostream>   // cout, printf
#include <algorithm>  // fill, copy

namespace assignment {

  // Task 1
  int squared_diff(int left, int right) {
    int res = left - right;
    return res*res;
  }

  // Task 2
  bool check_bit(int mask, int bit_pos) {
    if (mask<=0 || bit_pos<0){
      return false;
    }
    int bit=0;
    int coun = 0;
    while(mask>0){
      bit=mask%2;
      if(coun==bit_pos && bit==1){
        return true;
      }
      mask/=2;
      coun++;
    }
    return false;
  }


  // Task 3
  int max3(int left, int middle, int right) {
    int first = (left>middle ? left : middle);
    int second = (right>middle ? right : middle);
    if (first>second){
      return first;
    } else {
      return second;
    }
  }

  // Task 4
  void swap_args(int *left, int *right) {
    if(left !=nullptr && right != nullptr) {

      int temp = *left;
      *left = *right;
      *right = temp;
    }
  }

  // Task 5
  int arr_sum(int *arr, int length) {
    if(length<=0 || arr == nullptr){
      return 0;
    }
    int res=0;
    int i = 0;
    while(i<length){
      res+=arr[i];
      i++;
    }

    return res;
  }

  // Task 6
  int *find_max_elem(int *arr, int length) {

    if( arr== nullptr || length<=0){
      return 0;
    }
    int max=-999999999;
    int* max_p=&arr[0];
    for (int i=0;i<length;i++){
      if (arr[i]>max){
        max=arr[i];
        max_p=&arr[i];
      }
    }
    return max_p;

  }

  // Task 7
  int *allocate_arr(int length, int init_value) {
    if (length<=0) {
      return nullptr;
    }
  int *arr = new int[length];
  for(int i = 0; i<length; i++){
    arr[i]=init_value;
  }
  return arr;


  }

  // Task 8
  int *clone_arr(int *arr_in, int length) {

    if(arr_in== nullptr || length<=0){
      return nullptr;
    }
    int *new_arr= new int[length];
    for(int i = 0 ; i<length;i++){
      new_arr[i]=arr_in[i];
    }
    return new_arr;
  }

  // Task 9
  void print_kth_elements(int *arr, int length, int k, std::ostream &os) {

    if(arr == nullptr){
      os<<"Invalid argument: arr \n";
      return;
    }
    if(length<=0){
      os<<"Invalid argument: length \n";
      return;
    }
    if(k<=0){
      os<<"Invalid argument: k \n";
      return;
    }
    for(int i=0;i<length;i++){
      if (i %k==0){
        os<<arr[i]<<"\t";
      }
    }
  }

}  // namespace assignment
