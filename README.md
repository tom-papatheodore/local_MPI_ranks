---

This program shows how to use OMPI arguments to determine
an MPI rank's node-local value.

---

For example, when run on 2 Summit nodes with the
following `jsrun` command:

```
$ jsrun -n2 -c21 -g3 -a2 -r1 ./local_MPI_ranks | sort
Global Rank: 000 of 004, Local Rank: 000, HWThread 000, Node: h28n18
Global Rank: 001 of 004, Local Rank: 001, HWThread 004, Node: h28n18
Global Rank: 002 of 004, Local Rank: 000, HWThread 000, Node: h33n13
Global Rank: 003 of 004, Local Rank: 001, HWThread 004, Node: h33n13
```
