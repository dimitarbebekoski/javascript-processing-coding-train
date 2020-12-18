#include <iostream>
#include <mpi.h>
using namespace std;

int main(int argc, char *argv[])
{
    int n, nproc;
    MPI_Init(&argc, &argv);

    MPI_Comm_size(MPI_COMM_WORLD, &nproc);
    MPI_Comm_rank(MPI_COMM_WORLD, &n);

    cout << n << nproc << endl;

    MPI_Finalize();
    return 0;
}