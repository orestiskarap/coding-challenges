#include <bits/stdc++.h>

int main() {
  FILE *fptr;
  fptr = fopen("input.in", "r");
  FILE *fptr2;
  fptr2 = fopen("output.out", "w");

  if(fptr == NULL){
    printf("Error");
    exit(1);
  }

  int n;
  fscanf(fptr, "%d", &n);

  int j;
  float t=0;
  for(int i=0; i<n; i++){
    fscanf(fptr, "%d", &j);
    t=t+j;
  }

  float avg=t/n;

  printf("Average: %f\n", avg);
  fprintf(fptr2, "Average: %f\n", avg);
  fclose(fptr);
  fclose(fptr2);
  return 0;
}