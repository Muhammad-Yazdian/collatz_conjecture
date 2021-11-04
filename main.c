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
    // Pick a random number n from 1-9 or 1-100
    unsigned int num = 8;

    // 2- If the number is odd  => n = 3n+1 elseif even => n = n/2
    if(num % 2 == 0){
        num /= 2;
    }else{
        num = 3* num + 1;
    }
    printf("%d",num);
    // 3- Repeate step #2 until you are in a 4-2-1 loop
    
    // 4- Find the number of iterations to get from intial n to 1
    return 0;
}