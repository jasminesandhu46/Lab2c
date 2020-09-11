// Author: Jasmine Sandhu jps6818@psu.edu
// Collaborator: Carl Foust czf276@psu.edu
// Collaborator: Nathan Donahue ndd5167@psu.edu
// Collaborator: Nick Orf nco5067@psu.edu
// Section: 10
// Breakout:4

#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

int main(void){
  char *input = readline("Enter your CMPSC 131 grade: ");
  double grade = atof(input);

  if (grade >= 93.0){
    char letter[] = "A";
    printf("Your letter grade for CMPSC 131 is %s.\n", letter);
  }
  if (90.0 <= grade && grade < 93.0){
    char letter[] = "A-";
    printf("Your letter grade for CMPSC 131 is %s.\n", letter);
  }
  if (87.0 <= grade && grade < 90.0){
    char letter[] = "B+";
    printf("Your letter grade for CMPSC 131 is %s.\n", letter);
  }
  if (83.0 <= grade && grade < 87.0){
    char letter[] = "B";
    printf("Your letter grade for CMPSC 131 is %s.\n", letter);
  }
  if (80.0 <= grade && grade < 83.0){
    char letter[] = "B-";
    printf("Your letter grade for CMPSC 131 is %s.\n", letter);
  }
  if (77.0 <= grade && grade < 80.0){
    char letter[] = "C+";
    printf("Your letter grade for CMPSC 131 is %s.\n", letter);
  }
  if (70.0 <= grade && grade < 77.0){
    char letter[] = "C";
    printf("Your letter grade for CMPSC 131 is %s.\n", letter);
  }
  if (60.0 <= grade && grade < 70.0){
    char letter[] = "D";
    printf("Your letter grade for CMPSC 131 is %s.\n", letter);
  }
  if (grade < 60.0){
    char letter[] = "F";
    printf("Your letter grade for CMPSC 131 is %s.\n", letter);
  }
}
