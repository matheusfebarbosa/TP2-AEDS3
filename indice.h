#include <stdio.h>
#include <stdlib.h>

#define N_TAPES 20

typedef struct index{
	char word[20];
	int document;
	int frequency;
	int position;
} Index;


void updateIndex(FILE **index, FILE **data, int file);
void createBlocks(FILE **index, int memLimit, int nTapes);
int merge(int iTapes, int firstRTape, int firstWTape);
void heapSort(Index *indexes, int n);
void maxHeapify(Index *indexes, int n);
short sLessThan(char *wordA, char *wordB);
short iLessThan(Index *ia, Index *ib);
int min(Index *indexes, int n);
int readNextIndex(FILE **tape, Index *index);
void printIndex(FILE **tape, Index index, char append);
void copyIndex(FILE **index, int nTape);