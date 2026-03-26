#include <stdio.h>
#include "Quicksort.h"

int operaciones = 0;

int partition(int arr[], int low, int high){
  int pivot = arr[high];
  int i =(low -1);
  int j;
