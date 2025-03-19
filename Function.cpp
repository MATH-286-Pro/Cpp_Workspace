#include "Function.h"

void Print_array_vector(std::vector<int> array){

    int n = array.size();

    int i;
    for (i=0; i<n; i++){
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;

}




/// @brief 插入排序
/// @param Array 
/// @param n 
void Insert_Sort_vector(std::vector<int>& Array){

    int KEY;
    int i;
    int j;

    int n = Array.size();

    for (i=1; i<n; i++){
        KEY = Array[i];
        j = i - 1;

        while((j >= 0) and (Array[j] > KEY)){
            Array[j+1] = Array[j]; // 后移
            j = j - 1;
        }
        Array[j+1] = KEY;          // 插入
    }

}



/// @brief 归并排序
/// @param Array 
/// @param l 
/// @param m 
/// @param r 
void Merge(std::vector<int>& Array, int l, int m, int r){

    // 构建新数组
    std::vector<int> L_Array(Array.begin() + l, Array.begin() + m + 1);         // l -> m-1
    std::vector<int> R_Array(Array.begin() + m + 1, Array.begin() + r + 1);     // m -> r


    // 插入哨兵值
    // L_Array.push_back(100); 
    // R_Array.push_back(100); 
    L_Array.push_back(std::numeric_limits<int>::max()); 
    R_Array.push_back(std::numeric_limits<int>::max());

    // 开始排序
    int L_index = 0;
    int R_index = 0;

    for (int i=l; i<=r; i++){
        if (L_Array[L_index] <= R_Array[R_index]){
            Array[i] = L_Array[L_index];
            L_index += 1;
        }
        else{
            Array[i] = R_Array[R_index];
            R_index += 1;
        }
    }
}

void Merge_Sort_vector(std::vector<int>& Array, int l, int r){  // & Array 代表引用，否则函数内只是值传递，无法影响 Array 数组
    if (l < r){                     // Check for base case
        int m = (l + r)/2 ;         // Divide
        Merge_Sort_vector(Array, l, m);    // Conquer
        Merge_Sort_vector(Array, m+1, r);  // Conquer
        Merge(Array, l, m, r);      // Combine
    }
}



