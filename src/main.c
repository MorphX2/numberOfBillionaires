/* Program to test the Billionaire count Model against data from 2000 to 2001, 2002, 2003, 2004, where x is the years since 2000 and N is the number of Billionaires counted that year. If the value output from the the model is equal to the data then the model is accurate. */
#include<stdio.h>
#include<string.h>
#include<math.h>

float operation(float evaluatedValue, int yearsSinceTwoThousand) {
  evaluatedValue = ((17 * pow(yearsSinceTwoThousand, 2)) - ((65.4 * (yearsSinceTwoThousand)) + (302.2)));
  return evaluatedValue;
}

int main() {
  const int numberOfBillionaires = 313;
  int yearsSinceTwoThousand = 7.0;
  float evaluatedValue;

  operation( evaluatedValue,  yearsSinceTwoThousand);

  if ( evaluatedValue == numberOfBillionaires ) {
    printf("Model describes data well. \n");
  } else {
    printf("Model is not accurate \n");
  }
  printf("%.2f \n", evaluatedValue);

  return 0;
}
