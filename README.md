# Student Status Management System

Semester 3 C++ Project

### 相关信息 Information

-   项目名称 Project Name：学生学籍管理系统
-   日期 Date：2020 - 11 - 26
-   编程语言 Language：C/C++
-   开源协议：GNU GPL License

### 系统结构 System Architecture

##### 功能 Function

```uml
@startuml
class StudentStatus
{
- private id_
- private name_
- private sex_
- private math_
- private cProgram_
- private average_
- private sum_
+ public Get()
+ public Set()
- private CalcValue()
}
@enduml
```

```uml
@startuml
class CourseInfo
{
- private courseName_
- private sum_
- private average_
- private totalNumber_
- private passNumber_
- private passRatio_
+ public Get()
+ public Set()
- private CalcValue()
}
@enduml
```

##### 界面 User Interface

### 准备工作 Preparation

-   C++ (C++ Primer Plus / Modern Effective C++)
-   Git (Use Github)
-   IDE: QT 5.12.10 (QT Creator 4.13.1) Based on MinGW 7.3.0
-   Guide: Google Style Guide

### 开发流程 Development Flow

-   准备开发环境 QT Creator；
-   抽象文本数据，设计所需类；
-   设计 UI；
-   处理运行逻辑；

### 系统测试 Test

-   编译器：G++
-   采用 GDB 调试进行测试；

### 开发指导 Development Guide

参考 **Google Style Guide**

##### 文件名 File name

-   `.h` `.cpp` 文件同名
-   使用全小写英文与下划线连字符，不要使用空格；

##### 头文件 Header Files

-   头文件保护；

##### 变量名 Variables' Name

-   驼峰命名法；

##### 注释 Conments

-   行注释或块注释；
-   函数注释写于函数声明处；
-   文件注释写于文件首；