/** 
 * File:    main.c
 * 
 * Author:  S. Muhammad Yazdian (muhammad.yazdian@gmail.com) 
 * Date:    2021-11-04 
 * 
 * Summary of File: 
 * 
 *   This file contains code which creates ending sequence of Collatz 
 *   Conjecture (a.k.a 3n+1) using back propagation technique
 *
 */
#include<stdio.h>
#include<stdlib.h>

int main(void){
  // Start with number 1
  unsigned int num = 1;
  unsigned int num_a = 1;
  unsigned int num_b = 1;
  FILE* file;
  file = fopen("temp.txt", "r");
  if (!file){
    fprintf(stderr, "Error: Could not find the file!\n");
    exit(-1);
  }
  //fseek(file, 0, SEEK_SET );
  while (fscanf(file, "%d, ", &num) != EOF){
    printf("Reading ... %d\n", num);
  }
  num_a = num;
  num_b = num;
  fprintf(file, "\n");
  if ((num_a - 1) % 3 == 0 && num_a !=1){
    num_a = (num_a - 1) / 3;
    fprintf(file, "%d, ", num_a);
  }
  num_b = num_b * 2;
  fprintf(file, "%d, ", num_b);
  fclose(file);
  return 0;
}