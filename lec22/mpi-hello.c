#
# To compile and run
# $ mpicc mpi-hello.c 
# $ mpirun --oversubscribe -n 4 ./a.out
#
#include "mpi.h"
#include <stdio.h>

int main(argc,  argv) 
int argc;
char *argv[];
{
  int rank, size;

  MPI_Init(&argc, &argv);

  MPI_Comm_rank(MPI_COMM_WORLD, &rank);
  MPI_Comm_size(MPI_COMM_WORLD, &size);

  printf("Hello world! I'm rank %d of %d.\n",
         rank, size);

  MPI_Finalize();
  return 0;
}
