#include <iostream>
#include <vector>
#include "Function.h"


using namespace std;


int main(){
    cout << endl << "Start Programme" << endl;

    std::vector<int> array_vector = {4,3,2,1,0,8,9,5,6,7};
    // Merge_Sort_vector(array_vector, 0, 9);  // 归并排序
    Insert_Sort_vector(array_vector);    // 插入排序
    Print_array_vector(array_vector);

    // 创建数组
    float test[2]={0};
    // cout << test[0] << endl << test[1] << endl;

    return 0;
}