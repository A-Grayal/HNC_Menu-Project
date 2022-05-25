#include <stdio.h>
#include <string.h>

void printMenu();

//variables
int get_number();
void calculate_factorial(int);
char* Forename();
char* Surname();
void create_username(char getForename[100], char getSurname[100]);

int main(void) 
{
    //Menu Functions
    int choice1;
    int choice2;
    int choice3;

    //Menu Options

    do {
        printMenu();
        scanf("%d", &choice3);
      switch (choice3)
        {
          case 1:
            printf("------------------------------------------------\n");
            printf("Username Generator\n");
            printf("------------------------------------------------\n");
            //choice code

              //Variables
              char getForename [100];
              char getSurname [100];
              int ticker;
            

              //program
              strcpy(getForename, Forename());
              strcpy(getSurname, Surname());
              create_username(getForename, getSurname);
        
            printf("------------------------------------------------\n");
          break;

          case 2:
            printf("------------------------------------------------\n");
            printf("Factorial Calculator\n");
            printf("------------------------------------------------\n");
            //choice code
            
            //variables
            int user_input;
            int count;
            float factorial = 1;

            //program
            user_input = get_number();
            calculate_factorial(user_input);

            printf("------------------------------------------------\n");
          break;

          case 3:
            printf("------------------------------------------------\n");
            printf("Exiting Program\n");
            printf("------------------------------------------------\n");
          break;
        }
    } while (choice3 != 3);
}

void printMenu()
  {
    printf("Option 1 - Username Generator\n");
    printf("Option 2 - Factorial Calculator\n");
    printf("Option 3 - Exit Program\n");
    printf("Please make your choice\n");
  }

//Case 2 User Defined Functions
int get_number()
{
  int user_input;
  printf("Please enter a positive number to find its factorial\n");
  scanf("%d", &user_input);
  return user_input;
}

void calculate_factorial(int user_input)
{
  double factorial = 1;
  if (user_input > 0)
  {
    for (int count = 1; count <= user_input; count++)
    {
      factorial = factorial * count;
    }
     printf("factorial of %d = %.2f\n", user_input, factorial);
  }
  else 
  {
    printf("Number must be positive\n");
  }
}

//Case 1 User Defined Function
char* Forename()
{
  static char getForename[100];
  printf("Please enter your forename\n");
  scanf("%s", &getForename);
  return getForename;
}

char* Surname()
{
  static char getSurname[10];
  printf("Please enter your surname\n");
  scanf("%s", &getSurname);
  return getSurname; 
}

void create_username(char getForename[100], char getSurname[100])
{
    //capitising the surname
  for (int ticker = 0; getSurname[ticker] != '\0'; ticker++)
    {
    if (getSurname[ticker] >= 'a' && getSurname[ticker] <= 'z')
      {
       getSurname[ticker] = getSurname[ticker] - 32;
      }
    }
    printf("%.1s", getForename);
    printf("%s\n", getSurname);
}