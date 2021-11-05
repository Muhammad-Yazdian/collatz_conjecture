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
  unsigned int num_left = 0;
  unsigned int num_right = 0;
  char line[256];
  unsigned int line_counter = 1;
  int n;
  int offset = 0;
  FILE* file;
  file = fopen("temp.txt", "a+");
  if (!file){
    fprintf(stderr, "Error: Could not find the file!\n");
    exit(-1);
  }
  //fseek(file, 0, SEEK_SET );
  //while (fscanf(file, "(%d, %d), ", &num_left, &num_right) != EOF){
  //while (end_of_file = fgets(file, "(%d, %d), ", &num_left, &num_right) != EOF){
  while(fgets(line, sizeof(line), file))
  {
    line_counter++; // Do nothing. This gives us the last line.
  }
  printf("The last line is %s\n", line);
  printf("Getting data from last line (%d) ... ", line_counter);
  fprintf(file, "\n");
  while(sscanf(line + offset, " (%d, %d),%n", &num_left, &num_right, &n) == 2){
    offset += n;
    printf("(%d, %d), ", num_left, num_right);
    fprintf(file, "(%d, %d), ", num_left+1, 2 * num_left);
    // if ((num_a - 1) % 3 == 0 && num_a !=1){
    //   num_a = (num_a - 1) / 3;
    //   fprintf(file, "%d, ", num_a);
    // }
  }
  offset = 0;
  n = 0;
  fclose(file);
  return 0;
}