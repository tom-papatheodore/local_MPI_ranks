#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <mpi.h>
#include <sched.h>

int main(int argc, char *argv[])
{
    MPI_Init(&argc, &argv);

    int size;
    MPI_Comm_size(MPI_COMM_WORLD, &size);

    int rank;
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);

    char name[MPI_MAX_PROCESSOR_NAME];
    int resultlength;
    MPI_Get_processor_name(name, &resultlength);

    const char* nl_rank = getenv("OMPI_COMM_WORLD_LOCAL_RANK");
    int node_local_rank = atoi(nl_rank);

    int hwthread = sched_getcpu();

	printf("Global Rank: %03d of %03d, Local Rank: %03d, HWThread %03d, Node: %s\n", rank, size, node_local_rank, hwthread, name);

	return 0;
}
