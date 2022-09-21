/*_____   Author  : Harsh _______*/
/*_____   Date  : 14-09-2022 _______*/
/*_____   Funtion : Program writes a matrix based on user input _______*/
# include <stdio.h> 
// Including header files
# include <stdlib.h>

int main(){
	int row , col , i , j ;
	int **p ;
	scanf ( "%d",&row ) ;
	scanf ( "%d",& col ) ;
	p=(int **) malloc ( sizeof ( int *) *row ) ;
	for ( i =0; i<row ; i++)
	*( p+i )=( int *) malloc ( sizeof ( int ) * col ) ;
	for ( i =0; i<row ; i++)
		for ( j =0; j<col ; j++)
	scanf ( "%d" , ( * ( p+i )+j ) ) ;
	for ( i =0; i<row ; i ++, printf ( "\n" ) )
		for ( j =0; j<col ; j++)
			printf ( "%d " , p [ i ] [ j ] ) ;
	return 0;
}
