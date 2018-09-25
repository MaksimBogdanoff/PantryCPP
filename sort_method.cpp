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

    cout << "Просто тренировка алгоритмы!" << endl << endl;

    mbSort3();

    Human man1;

    return 0;
}




void mbSort()
{

    int n;

    cout << "Введите количество элементов:"<< endl;
    cin >> n;
    std::vector<int> a(n);


    // забить значениями вектор.
    for(int i=0; i < n; i++){
        cout << "Введите значения: ";
        cin >> a[i];
    }

    // отсортировать сектор с данными.
    std::sort(a.begin(),a.end());

    // вывести значения отсортированного вектора.
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
        // передать пару и положить ввектор (значение и номер).
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
    cout << "Введите кол. человек."<< endl;
    cin >> n;
    std::vector< Human > a(n);

    for (int i=0; i < n; i++){

        cout << "Введите рост имя"<< endl;
        Human temp;
        cin >> temp.height >> temp.name;


        a[i] = temp;
    }


    std::sort(a.begin(), a.end(),cmp);
    // устойчевая сортировка.
    //std::stable_sort(a.begin(), a.end(),cmp);

    for(auto now : a){
        cout << now.name << " ";
    }

}





bool cmp(Human a, Human b)
{
    return a.height < b.height;
}












