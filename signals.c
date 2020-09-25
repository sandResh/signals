/* hello_signal.c */
#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>

void handler(int signum)
{
  printf("Hello World!\n");
}

int main(int argc, char * argv[])
{
  while(1)
  {
      signal(SIGALRM,handler); //register handler to handle SIGALRM
      alarm(1);      
      sleep(1);
      printf("Turing was right \n");
  }
  printf("fas");
  return 0; //never reached
}