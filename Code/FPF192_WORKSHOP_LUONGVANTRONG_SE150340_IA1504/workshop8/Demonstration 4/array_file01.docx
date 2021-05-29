/*Write a C-program that will:
	-Read the array contained in the above file.
	-Print it’s elements in ascending order to monitor.
	-Write it to the file array2.txt using the same format with the file array1.txt.
*/

/*array_file01.c*/
#include <stdio.h>
/*Read data in a fiel to arry*/
void fileToArray( char* fname, int*a, int*pn){
	FILE* f= fopen(fname, "r");
	/*Read the first number in the file -> number of elements*/
	fscanf(f, "%d", pn);
	/*read elements*/
	int i;
	for(i=0; i<*pn; i++) fscanf(f, "%d", &a[i]);
	fclose (f);
}

void asc_sort(int *a, int n){
	int i, j, t;
	for(i=0; i<n-1; i++)
	   for(j=n-1; j>i; j--)
	      if(a[j]<a[j-1]){
	      	t=a[j];
	      	a[j]=a[j-1];
	      	a[j-1]=t;
		  }
} 
/*print out array to monitor*/
int print(int *a, int n){
	int i;
	for(i=0; i<n; i++) printf("%d ", a[i]);
}
/*write array to file*/
int printToFile (char* fname, int *a, int n){
	FILE* f= fopen(fname, "w");
	fprintf(f, "%d ", n); /*write number of elements to file*/
	int i;
	for (i=0; i<n; i++) /*write elements to file*/
	  fprintf(f, "%d ", a[i]);
	fclose(f);
}

int main(){
	char infName[]= "array1.txt";
	char outfName[]= "array2.txt";
	int a[200];
	int n=0;
	fileToArray(infName, a, &n);
	asc_sort(a,n);
	/*print array to monitor - stdout: monitor*/
	print(a, n);
	/*print array to file*/
	printToFile(outfName, a, n);
	getchar();
	return 0;
}
