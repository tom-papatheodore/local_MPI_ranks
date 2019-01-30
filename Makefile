CC = mpicc

local_MPI_ranks: local_MPI_ranks.o
	$(CC) local_MPI_ranks.o -o local_MPI_ranks

local_MPI_ranks.o: local_MPI_ranks.c
	$(CC) -c local_MPI_ranks.c

.PHONY: clean

clean:
	rm -f local_MPI_ranks *.o
