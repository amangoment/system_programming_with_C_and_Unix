#include <stdio.h>
#include <stdlib.h>

#define MAX_DATA 100

typedef enum EyeColor {
  BLUE_EYES, GREEN_EYES, BROWN_EYES,
  BLACK_EYES, OTHER_EYES
} EyeColor;

const char *EYE_COLOR_NAMES[] = {
  "Blue", "Green", "Brown", "Black", "Other"
};

typedef struct Person {
  int age;
  char first_name[MAX_DATA];
  char last_name[MAX_DATA];
  EyeColor eyes;
  float income;
} Person;

int main(int argc, char *argv[])
{
  Person you = {.age = 0 };
  int i = 0;
  char *in = NULL;
  char buf[100];
  char *p;
  char *q;
  char *r;

  printf("What's your First Name? ");
  in = fgets(you.first_name, MAX_DATA - 1, stdin);
  check(in != NULL, "Failed to read first name.");

  printf("What's your Last Name? ");
  in = fgets(you.last_name, MAX_DATA - 1, stdin);
  check(in != NULL, "Failed to read last name.");

  int myage;
  printf("How old are you? ");
  p = fgets(buf, MAX_DATA, stdin);                                       
  myage = strtol(buf, NULL, 10);
  check(myage > 0, "You have to enter a number.");

  printf("What color are your eyes:\n");
  for (i = 0; i <= OTHER_EYES; i++) {
    printf("%d) %s\n", i + 1, EYE_COLOR_NAMES[i]);
  }
  printf("> ");

  int eyes = -1;
  q = fgets(buf, MAX_DATA, stdin);
  eyes = strtol(buf, NULL, 10);
  check(eyes > 0, "You have to enter a number.");

  you.eyes = eyes - 1;
  check(you.eyes <= OTHER_EYES
	&& you.eyes >= 0, "Do it right, that's not an option.");

  float income;
  printf("How much do you make an hour? ");
  r = fgets(buf, MAX_DATA, stdin);
  income = strtof(buf, NULL);
  check(income > 0, "Enter a floating point number.");

  printf("----- RESULTS -----\n");

  printf("First Name: %s", you.first_name);
  printf("Last Name: %s", you.last_name);
  printf("Age: %d\n", you.age);
  printf("Eyes: %s\n", EYE_COLOR_NAMES[you.eyes]);
  printf("Income: %f\n", you.income);

  return 0;

}
