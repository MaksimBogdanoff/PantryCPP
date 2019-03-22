#	21/03/2019
#	Algorithm "Sort by selection".
#	info: create .pyc =  python -m compileall file.py file.py 

arr = [3,6,15,8,1];

def findSmallest(arr):
	smallest = arr[0]; 
	smallest_index = 0;
	for i in range(1, len(arr)):
		if arr[i] < smallest:
			smallest = arr[i];
			smallest_index = i;
	return smallest_index; 

print("SmallElement: ",findSmallest(arr));


def selectionSort(arr):
	newArr = [];
	for i in range(len(arr)):
		smallest = findSmallest(arr);
		newArr.append(arr.pop(smallest));
	return newArr;

print(selectionSort(arr));