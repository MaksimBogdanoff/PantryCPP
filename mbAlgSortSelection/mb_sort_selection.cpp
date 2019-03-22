/*
*	21/03/2019
*	mb_programmer....
*	Algorithm "Sort by selection".
*/

#include <stdlib.h>
#include <iostream>
using namespace std;


// struct data element.
template<typename T>
struct Element
{
	Element()
	{this->id=0;}

	Element(T val,int id=0)
		:value(val),id(id){}

	~Element(){}

	T value;
	int id;
};


// method find small element.
template<typename T>
int getFindSmallElementId(T data[], int size)
{
	Element<T> small_element(data[0]);
	//small_element.value = data[0];

	// find small element the array.
	for(int i = 1; i < size; i++ ){
		if( data[i] < small_element.value){
			small_element.value = data[i];
			small_element.id = i;
		}
	}

	return small_element.id;
}

// method find big element.
template<typename T>
int getFindBigElementId(T data[], int size)
{
	Element<T> big_element(data[0]);
	//big_element.value = data[0];

	// find big element the array.
	for(int i = 1; i < size; i++ ){
		if( data[i] > big_element.value){
			big_element.value = data[i];
			big_element.id = i;
		}
	}

	return big_element.id;
}


// method copy array.
template<typename T>
T COPY(T first, T last, T d_first)
{
    while (first != last) {
        *d_first++ = *first++;
    }
    return d_first;
}



//template <typename T,unsigned S>
//inline unsigned arraysize(const T (&v)[S]) { return S; }


// main //
int main(int argc, char** argv)
{
	cout << endl;
	cout << "Algorithm: Sort by selection." << endl;
	cout << "_____________________________" << endl << endl;

    int sArr = 10;
    int srcArray[sArr] = {0};

    // set data array...
    cout << "srcArray: ";
    for(int i(0); i < sArr; i++){
       srcArray[i] = rand()%20;
       cout << srcArray[i] << " ";
    }

    cout << endl;
    //-----------------------------------

    int outArray[sArr] = {0};
    int smlElId = 0;
    int bigEl = getFindBigElementId(srcArray,sArr);

    // work...
    for(int i(0); i < sArr; i++){
        smlElId = getFindSmallElementId(srcArray,sArr);
        outArray[i] = srcArray[smlElId];
        srcArray[smlElId] =  srcArray[bigEl];

        // test out info src array...
        /*cout <<"respArr: ";
        for(int j(0); j < sArr; j++){
            cout <<  pArr[j]<<" ";
        }
        */

    }


    cout << endl;
    //--------------------------------------

    // out res...
    cout << "outArray: ";
    for(int i(0); i < sArr; i++)
        cout <<  outArray[i] << " ";


    cout  << endl << endl;
    //--------------------------------------
    // update src array.
    COPY(outArray, outArray+9, srcArray);
    cout << "srcArray: ";
    for(int i(0); i < sArr; i++)
        cout <<  srcArray[i] << " ";


    cout << endl;

	system("pause");
	return 0;
}
