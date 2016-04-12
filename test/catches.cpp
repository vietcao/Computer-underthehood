#include <stdio.h>

void mmm(int B , int n) {
	int i, j, k;
	int i1, j1, k1;
	for (i = 0; i < n; i+=B)
		for (j = 0; j < n; j+=B)
			for (k = 0; k < n; k+=B)
 /* B x B mini matrix multiplications */
				for (i1 = i; i1 < i+B; i1++)
					for (j1 = j; j1 < j+B; j1++)
						for (k1 = k; k1 < k+B; k1++)
							printf("%d\t%d\t%d\n", i1*n+ j1, i1*n+ k1, k1*n + j1 );
}
int main(){
	mmm( 3, 8 );
	return 1;
}
