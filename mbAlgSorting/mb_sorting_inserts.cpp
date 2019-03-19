/*
*	19/03/2019
*	mb_programmer.... 
*	Algorithm "sorting inserts".
*/


#include <stdlib.h>
#include <string>
#include <iostream>
using namespace std;



// std ^_^ swapping variables.
template <class T> void mb_swap ( T& a, T& b ){

  T c(a); a=b; b=c;
}


// out information to console.
template<typename T>
void out_to_console(T data[],int size){
	cout << endl;
	
	// out information...
	int i(0);
	while(i < size){ 
		cout << "Array["<< i <<"]: " << data[i] << endl;
		i++;
	}

	cout << endl;
}


// method( from larger to smaller ).
template<typename T> 
void sorting_insert(T data[], int size){
	if(size <= 0 )return;

	int i=0, j=0;
	for(i=1; i < size; i++){
		j=i;
		while((data[j] < data[j-1]) ){
			mb_swap<T>(data[j] , data[j-1]);

			i=0;
			break;
		}
	}

}

// method
template<typename T>
void sorting_bubble(T a[], int size){
	if(size <= 0 )return;

	int top = size;
	while(top != 0){
		for(int i= 0; i < size-1; i++){
			if( a[i] > a[i+1] ){
				int temp = 0;
				temp 	= a[i];
				a[i] 	= a[i+1];
				a[i+1] 	= temp; 	
			}
		}
		--top;
	}
}



int main(int argc, char** argv)
{
	cout << endl;
	cout << "Algorithm: Sorting inserts." << endl;
	cout << "___________________________" << endl << endl;

	//--------------------------------------------------------------------------------

	// array 1...
	int array_int[] 			= {25,45,10,1,230,65,9,5,18,898};
	int size_array 				= sizeof(array_int);
	int size_one_element 		= sizeof(array_int[0]);
	int count_element_to_array 	= (size_array / size_one_element);

	//cout << "Size array: " << size_array << endl;
	//cout << "Size one element: " << size_one_element << endl;
	//cout << "Count element to array: " << count_element_to_array << endl << endl;

	// work...
	sorting_insert(array_int, count_element_to_array);
	out_to_console(array_int, count_element_to_array);


	//--------------------------------------------------------------------------------
	
	// array 2...
	float array_float[] 	= {20.0, 2.0, 125.0, 1.0, 4.3, 65.0, 9.0, 5.0, 18.0, 798.0};
	size_array 				= sizeof(array_float);
	size_one_element 		= sizeof(array_float[0]);
	count_element_to_array 	= (size_array / size_one_element);

	//cout <<  "Count element to array: " << count_element_to_array << endl;
	
	// work...
	sorting_bubble<float>(array_float,count_element_to_array);
	out_to_console<float>(array_float,count_element_to_array);

	//--------------------------------------------------------------------------------

	system("pause");
	return 0;
}