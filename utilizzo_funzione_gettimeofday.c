#include <sys/time.h>
#include <stdio.h>
 
 //con questa funzione si va a stampare la durata dell'esecuzione del programma e quindi puó esser utile per la stampa di morte dei filosofi. (?)
 
int main() {
 
  struct timeval start, end;
  gettimeofday(&start, NULL);
 
  for (int i = 0; i <1e5 ; i++) {
  }
 
  gettimeofday(&end, NULL);
  printf("Time taken to count to 10^5 is : %ld micro seconds\n",
    ((end.tv_sec * 1000000 + end.tv_usec) -
    (start.tv_sec * 1000000 + start.tv_usec)));

  return 0;
}
