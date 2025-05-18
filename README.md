# C++ 学习

## Makefile 使用方式 
- `make` 编译
- `make run` 编译运行
- `make clean` 删除 .exe

## CMake 使用方式

### 文件夹结构  
```bash
# your_project/
# ├── CMakeLists.txt
# ├── src/
# │   └── main.cpp
# └── build/

# 方法1
cd build      # 进入 build 文件夹
cmake ..      # 生成 Makefile
make          # 编译
./cpp_test    # 运行可执行文件

#方法2
cd build
cmake ..
cmake --build .
./cpp_test
```

## vector 容器使用方式


## 面向对象编程 OOP Object Oriented Programming 
```c++
// .cpp


// .h
class Heap_class{
    private:

    public:
}

```


## 学习日志
- **2025.3.10 周一**
  - 完成 插入排序
- **2025.3.11 周二**
  - 完成 归并排序
- **2025.3.19 周三**
  - 使用 class 完成 heap_sort
- **2025.5.18 周日**
  - 整理代码，加入 CMake