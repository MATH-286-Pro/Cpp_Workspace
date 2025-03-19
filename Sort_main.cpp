#include <iostream>
#include <vector>
#include <cmath>
#include "Function.h"


using namespace std;



/// @brief 堆数据结构 + 堆排序
class Heap{
    private:
        int n_;                   // heap 元素数
        int h_;                   // heap 高度
        bool built_flag = 0;      // heap 是否建堆标志位
        std::vector<int> A;       // heap 数据

    public:
        // 构造函数 (初始化)
        Heap(std::vector<int> Array) : A(Array) {
            A.insert(A.begin(), 0);         // 起始位置插入无用数据，方便数据索引
            n_ = A.size() - 1;              // 去除额外 0 索引 
            h_ = log2(n_) + 1;

            std::cout << "_size_ is " << n_ - 1 << std::endl;
            std::cout << "Height is " << h_     << std::endl;
        }  

        int Left(int i){return 2*i;}        // 左子节点 index 对于起始点索引 = 1 来说

        int Right(int i){return 2*i + 1;}   // 右子节点 index

        void exchange(int & a, int & b){
            int temp = a;
            a = b;
            b = temp;
        }

        // 数据打印
        void print(){
            for (int i=1; i<= n_; i++){
            // for (int i=1; i<= n_-1; i++){
                    std::cout << A[i] << " ";
            }
            std::cout << std::endl;
        }


        // Heap 打印
        void print_heap(){
            for (int i = 0; i <= h_-1; i++){   
                for (int j = pow(2,i); j <= pow(2,i+1) - 1; j++){
                    std::cout << A[j] << " ";
                }
                std::cout << std::endl;
            }
        }

        // 基操作
        void Max_Heapify(int i, int n_set){

            int l = Left(i);    // 左 index
            int r = Right(i);   // 右 index
            int max_index = i;  // 比较数据
            

            // 选出子节点最大数据与根节点比较，子节点大就交换
            if(l <= n_set and A[l] > A[max_index])  {max_index = l;}

            if(r <= n_set and A[r] > A[max_index])  {max_index = r;}
            
            // 需要交换
            if (max_index != i){
                exchange(A[i], A[max_index]);
                Max_Heapify(max_index, n_set);
            }
        }

        // 建堆
        void Build_Heap(){
            for(int i = n_/2; i>=1; i--){  // i >= 是为了不用管第一个数字 0
                Max_Heapify(i, n_);
            }

            built_flag = 1;

        }

        // 堆排序
        void Heap_Sort(){
            // 是否建堆
            if(built_flag == 0){
                Build_Heap();
            }
            // 排序
            for (int i = 0; i <= n_ - 1; i++){
                exchange(A[1], A[n_ - i]);
                Max_Heapify(1, n_ - i - 1);
            }
        }
};




int main(){
    cout << endl << "Start Programme" << endl;

    std::vector<int> array_vector = {4,3,2,1,0,8,9,5,6,7};
    // Merge_Sort_vector(array_vector, 0, 9);  // 归并排序
    // Insert_Sort_vector(array_vector);       // 插入排序
    // Print_array_vector(array_vector);

    // 创建数组
    float test[2]={0};
    // cout << test[0] << endl << test[1] << endl;


    // Heap 排序
    Heap Test_Heap(array_vector);

    Test_Heap.print();
    Test_Heap.Heap_Sort();
    Test_Heap.print();

    return 0;
}