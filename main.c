/** 
 * File:    main.c
 * 
 * Author:  S. Muhammad Yazdian (muhammad.yazdian@gmail.com) 
 * Date:    2021-11-04 
 * 
 * Summary of File: 
 * 
 *   This file contains code which creates Collatz Conjecture (a.k.a 3n+1)
 *
 * Development Steps:
 *   1- Pick a random number n from 1-9 or 1-100
 *   2- If the number is 
 *        - odd  => n = 3n+1
 *        - even => n = n/2
 *   3- Repeate step #2 until you are in a 4-2-1 loop
 *   4- Find the number of iterations to get from intial n to 1
 */
#include<stdio.h>

int main(void){
  // Test for range of initial values
  unsigned int range_upper_limit = 1;
  unsigned int num = 0;
  unsigned int iterations = 0;
  
  printf("Collatz Conjecture\n");
  printf("Enter the upper limit of a range [1, n]: ");
  scanf("%d", &range_upper_limit);
  
  FILE* file_out;
  file_out = fopen("iteration_by_n.txt", "w");
  
  if(file_out){
    fprintf(file_out, "n\tIteration\n");
  }

  int i = 1;
  for(i; i<=range_upper_limit; i++){
    num = i;
    iterations = 0;
    while(num !=1){
      // Apply Collatz conjecture rules
      if(num % 2 == 0){
        num /= 2;
      }else{
        num = 3 * num + 1;
      }
      iterations++;
      //printf("Iteration #%d: %d\n", iterations, num);
    }
    // Number of iterations for each value
    fprintf(file_out, "%d\t%d\n", i, iterations);
  }
  return 0;
}