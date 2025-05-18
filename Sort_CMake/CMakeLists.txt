# 最低 Cmake 版本要求
cmake_minimum_required(VERSION 3.22)

# 项目名称
project(sort)

# 头文件
include_directories(${PROJECT_SOURCE_DIR}/Inc)

# 源代码
add_executable(Sort Src/Sort_main.cpp)

# 添加 make run 快捷命令
add_custom_target(run
    DEPENDS Sort                    # 先确保 cpp_test 被构建
    COMMAND $<TARGET_FILE:Sort>     # 然后运行可执行文件
    WORKING_DIRECTORY ${CMAKE_BINARY_DIR}  # 在 build 目录下执行
    COMMENT "Building and running Sort..."
)