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
  // Test for numbers 1 to 10
  unsigned int num = 0;
  unsigned int iterations = 0;
  printf("Collatz Conjecture\n");
  printf("Enter an integer number: ");
  scanf("%d", &num);
  printf("Iteration #%d: %d\n", iterations, num);

  // 2- If the number is odd  => n = 3n+1 elseif even => n = n/2
  // 3- Repeate step #2 until you are in a 4-2-1 loop
  while(num !=1){
    if(num % 2 == 0){
      num /= 2;
    }else{
      num = 3 * num + 1;
    }
    iterations++;
    printf("Iteration #%d: %d\n", iterations, num);
  }
    
  // 4- Find the number of iterations to get from intial n to 1
    printf("Totoal number of iterations = %d\n", iterations);
  return 0;
}