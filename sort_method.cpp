#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
#include <string>


using namespace std;





struct Human{

    int height;
    string name;
};


void mbSort();
void mbSort2();
void mbSort3();
bool cmp(Human a, Human b);




int main()
{
    setlocale(0,"");

    cout << "mb sort_method"<< endl << endl;

    mbSort3();

    Human man1;

    return 0;
}




void mbSort()
{

    int n;

    cout << "Enter number count elementa:"<< endl;
    cin >> n;
    std::vector<int> a(n);
    
    for(int i=0; i < n; i++){
        cout << "Enter value: ";
        cin >> a[i];
    }

    // function sotr STL
    std::sort(a.begin(),a.end());

    // Out to console vector values.
    for(auto now : a){
        cout << now << " ";
    }

}



void mbSort2()
{
    int n;
    cin >> n;
    std::vector< pair <int,int> > a(n);

    for (int i=0; i < n; i++){
        int temp;
        cin >> temp;
        // 
        a[i] = {temp, i};
    }


    std::sort(a.begin(), a.end());
    //std::reverse(a.begin(),a.end());

    for(auto now : a){
        cout << now.second << " ";
    }


}



void mbSort3()
{

    int n;
    cout << "Enter count human: "<< endl;
    cin >> n;
    std::vector< Human > a(n);

    for (int i=0; i < n; i++){

        cout << "Enter human (height name): "<< endl;
        Human temp;
        cin >> temp.height >> temp.name;


        a[i] = temp;
    }

    // sort function + func cmp
    std::sort(a.begin(), a.end(),cmp);
    // 
    //std::stable_sort(a.begin(), a.end(),cmp);

    // out
    for(auto now : a){
        cout << now.name << " ";
    }

}





bool cmp(Human a, Human b)
{
    return a.height < b.height;
}












