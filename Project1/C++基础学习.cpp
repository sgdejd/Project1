#include <iostream>
using namespace std;
#include "string"
#include "swap.h"
#include "ctime"
#include "vector"
#include   "map"
#include  "list"
#
//int main()
//{
//
//	cout << "hello world" << endl;
//
//	system("pause");//按任意键继续
//	return 0;
//}

//#include<iostream>
//using namespace std;
//int main() {
//	//int a =10;
//	//int b = 30;
//	//cout << (a > b) << endl;//结果为0
//
//	int a = 20;
//	int b = 20;
//	cout << (a <= b) << endl;
//
//	system("pause");
//	return 0;
//
//}

//#include <iostream>
//using namespace std;
//int main() {
//	int a = 10;
//	//取反（a为真，则!a为假）
//	cout << !a << endl;//结果为0（在C++中，除了0都是真）
//	cout << !!a << endl;
//
//	system("pause");
//	return 0;
//}


//#include <iostream>
//using namespace std;
//int main() {
//	int a = 10;
//	int b = 10;
//	cout << (a && b) << endl;//结果为1
//
//
//	a = 0;
//	b = 2;
//	cout << (a && b) << endl;//结果为0
//	
//	
//
//	system("pause");
//	return 0;
//
//}

//#include <iostream>
//using namespace std;
//int main() {
//
//	int score = 0;
//	cin >> score;
//	if (score > 600) {
//	
//		cout << "恭喜" << endl;
//	}
//	else {
//	
//		cout << "失败" << endl;
//	}
//	system("pause");
//	return 0;
//}


//#include <iostream>
//using namespace std;
//int main() {
//	int score = 0;
//	cin >> score;
//
//	if (score > 600) {
//		cout << "一本" << endl;
//	}
//	else if(score>500) {
//		cout << "二本" << endl;
//	}
//	else if (score > 400) {
//		cout << "三本" << endl;
//	}
//	else {
//		cout << "大学都上不了" << endl;
//
//	}
//	system("pause");
//	return 0;
//
//}

//#include <iostream>
//using namespace std;
//int main() {
//	int score = 0;
//	cin >> score;
//	if (score > 600) {
//		if (score > 700) {
//			cout << "清华" << endl;
//		}
//		else if (score > 650) {
//			cout << "北大" << endl;
//		}
//		else {
//			cout << "一本" << endl;
//		}
//	}
//	else if(score>500) {
//		cout << "二本" << endl;
//	}
//	else if (score > 400) {
//		cout << "三本" << endl;
//	}
//	else {
//		cout << "大学都上不了" << endl;
//	}
//	system("pause");
//	return 0;
//}

//#include <iostream>
//using namespace std;
//int main() {
//	int a = 10;
//	int b = 30;
//	int c = 20;
//	if (a > b) {
//		if (a > c) {
//			cout << "a是最大的" << endl;
//		}
//		else { 
//			cout << "c是最大的" << endl; 
//		}
//	}
//	else if(b>c) 
//	{
//		cout << "b是最大的" << endl;
//	}
//	else {
//		cout << "c是最大的" << endl;
//	}
//	system("pause");
//	return 0;
//}

//#include <iostream>
//using namespace std;
//int main() {
//	int a = 10;
//	int b = 20;
//	int c = 0;
//	c = a > b ? a : b;
//	cout << c << endl;
//    (a > b ? a : b) = 100;
//	cout << a << endl;
//	cout << b << endl;
//	system("pause");
//	return 0;
//}
//#include <iostream>
//using namespace std;
//int main() {
//	int score = 0;
//	cout << "输入分数:" << endl;
//	cin >> score;
//	switch (score)
//	{
//	case 10:
//			cout << "很好" << endl;
//			break;
//	case 9:
//		cout << "不错" << endl;
//		break;
//
//	default:
//		cout << "烂片" << endl;
//		break;
//	}
//	system("pause");
//	return 0;
//}


//#include <iostream>
//using namespace std;
//int main() {
//	int num = 0;
//	while (num < 10) {
//		cout << num << endl;
//		num++;
//	}
//	
//	system("pause");
//	return 0;
//}

//#include <iostream>
//using namespace std;
//int main() {
//	srand((unsigned int)time(NULL));
//	int num = rand() % 100+1;
//	int val = 0;
//	while (1) {
//		cin >> val;
//		if (val > num) {
//			cout << "过大" << endl;
//		}
//		else if (val < num) {
//			cout << "过小" << endl;
//		}
//		else {
//			cout << "对了" << endl;
//			break;
//		}
//	}
//	system("pause");
//	return 0;
//}

//随机数

//#include <iostream>
//using namespace std;
//int main() {
//	srand((unsigned int)time(NULL));
//	int num = rand() % 1000;
//	cout << num << endl;
//	system("pause");
//	return 0;
//}

//#include <iostream>
//using namespace std;
//int main() {
//	int num = 0;
//	do {
//		cout << num << endl;
//		num++;
//	} while (num < 10);
//	system("pause");
//	return 0;
//}

//练习题

//水仙花数

//#include <iostream>
//using namespace std;
//int main() {
//	int num =100;
//	do {
//		int num1 = num % 10;
//		int num2 = num / 10 % 10;
//		int num3 = num / 100;
//		if (num1* num1* num1 + num2 * num2 * num2 + num3 * num3 * num3 == num)
//		{
//			cout << num << endl;
//		}
//		num++;
//	
//	} while (num < 1000);
//
//	system("pause");
//	return 0;
//}


//敲桌子

//#include <iostream>
//using namespace std;
//int main() 
//{
//	for (int i = 1; i < 101; i++) 
//	{
//		if (i % 10 == 7) 
//		{
//			cout << "敲桌子\n";
//		}
//		else if (i / 10 == 7) 
//		{
//			cout << "敲桌子\n";
//		}
//		else if(i%7==0)
//		{
//			cout << "敲桌子\n" ;
//		}
//		else {
//			cout << i <<"\n";
//		}
//	}
//	system("pause");
//	return 0;
//}


//打印10*10的*（嵌套循环）

//#include <iostream>
//using namespace std;
//int main() 
//{
//	for (int i = 0; i < 10; i++) 
//	{
//		for (int k = 0; k < 10; k++) {
//			cout << "*  ";
//		}
//		cout << endl;
//	}
//	system("pause");
//	return 0;
//}


////乘法口诀表

//#include <iostream>
//using namespace std;
//int main() 
//{
//	for (int i = 1; i < 10; i++) 
//	{
//		for (int k = 1; k <= i; k++) {
//			cout << k <<"*" << i <<"="<< i * k<<"\t";
//		}
//		cout << endl;
//	}
//	system("pause");
//	return 0;
//}

//十行五列“* ”

//#include<iostream>
//using namespace std;
//int main() 
//{
//	for (int i = 0; i < 10; i++) 
//	{
//		for (int j = 0; j < 10; j++)
//		{
//			if (j == 5)
//			{
//				break;
//			}
//			cout << "* ";
//		}
//		cout << endl;
//	}
//	system("pause");
//	return 0;
//}


//输出奇数

//#include<iostream>
//using namespace std;
//int main()
//{
//	for (int i = 0; i <= 100; i++)
//	{
//		if (i % 2 == 0)
//		{
//			continue;
//		}
//		cout << i<<endl;
//	}
//	system("pause");
//	return 0;
//}

//#include <iostream>
//using namespace std;
//int main()
//{
//	cout << "1" << endl;
//	goto flag;
//	cout << "2" << endl;
//	
//	cout << "3" << endl;
//	cout << "4" << endl;
//             flag:
//	cout << "5" << endl;
//	system("pause");
//	return 0;
//}

//地址

//#include <iostream>
//using namespace std;
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	//通过数组名统计内存空间
//	cout << "整个数组占用的内存空间" << sizeof(arr) << endl;
//	cout << "每个元素占用的内存空间" << sizeof(arr[0]) << endl;
//	cout << "数组里有多少个元素" << sizeof(arr) / sizeof(arr[0]) << endl;
//	//通过数组名查看数组地址
//	cout << "数组首地址为："<<(int)arr << endl;
//	cout << "第一个元素的地址：" << (int)&arr[0] << endl;
//	cout << "数组中第二个元素地址：" << (int)&arr[1] << endl;
//	system("pause");
//	return 0;
//}

//求数组内的最大值

//#include <iostream>
//using namespace std;
//int main()
//{
//	int arr[5] = { 100,300,700,200,600 };
//	int max = 0;
//	for (int i = 0; i < 5; i++)
//	{
//		max = (arr[i] > max) ? arr[i] :max;
//	}
//	cout << "最大为：" <<max << endl;
//	system("pause");
//	return 0;
//}


//数组内的元素逆置互换

//#include <iostream>
//using namespace std;
//int main()
//{
//	int  arr[] = { 1,2,3,4,5,6 };
//	int start = 0;
//	int end = sizeof(arr) / sizeof(arr[0]) - 1;
//	int temp = 0;
//	for (int i=0; i < sizeof(arr) / sizeof(arr[0]); i++)
//	{
//		cout << arr[i] << "\t";
//	}	
//	cout << endl;
//    while (start<end) {
//			temp = arr[start];
//			arr[start] = arr[end];
//			arr[end] = temp;
//			start++, end--;
//		}
//	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//	{
//		cout << arr[i] << "\t";
//	}
//	cout << endl;
//	system("pause");
//	return 0;
//}

//冒泡排序

//#include <iostream>;
//using namespace std;
//int main()
//{
//	int temp = 0;
//	int arr[] = {8,3,7,9,6,};
//	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) 
//	{
//		cout << arr[i] << "\t";
//	}
//	cout << endl << endl;
//	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//	{
//		for (int j = 0; j < sizeof(arr) / sizeof(arr[0])- i - 1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j+1] = temp;
//			}
//		}
//	}
//	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) 
//	{
//		cout << arr[i] << "\t";
//	}
//	cout << endl;
//	system("pause");
//	return 0;
//}

//二维数组

//#include <iostream>
//using namespace std;
//int main()
//{
//	int arr[][3] = { 1,2,3,4,5,6,7};
//	int arr2[][3] =
//	{
//		{1,2,3},
//		{4,5,6},
//		{7,8}
//	};
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++) 
//		{
//			cout << arr2[i][j] << "\t";
//		}
//		cout << endl;
//	}
//}


//#include <iostream>
//using namespace std;
//int main()
//{
//	int arr[][3] =
//	{
//		{1,2,3},
//		{4,5,6}
//	};
//	cout << "二维数组占的内存空间：" << sizeof(arr)<<endl;
//	cout << "二维数组第一行所占内存空间：" << sizeof(arr[0]) << endl;
//	cout << "二维数组有多少行：" << sizeof(arr) / sizeof(arr[0])<<endl;
//	cout << "二维数组有多少列：" << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;
//
//	cout << "二维数组首元素（第一行首地址）地址：" << (int)&(arr[0][0]) /*或者(int)arr*/ << endl;
//	cout << "二维数组第二行首地址：" << (int)arr[1] << endl;
//	system("pause");
//	return 0;
//}

//#include <iostream>
//using namespace std;
//int add(int num1, int num2)
//{
//	int sum = num1 + num2;
//	return sum;
//}
//int main()
//{
//	int a;
//	int b;
//	int c;
//	cout << "输入第一个数：" << endl;
//	cin >> a;
//	cout << "输入第二个数：" << endl;
//	cin >> b;
//	c = add(a, b);
//	cout << "两个数相加=" << c << endl;
//	system("pause");
//	return 0;
//}


//#include <iostream>
//using namespace std;
//void swap(int num1, int num2)
//{
//	cout << num1 << endl;
//	cout << num2 << endl;
//	int temp = num1;
//	num1 = num2;
//	num2 = temp;
//	cout << num1 << endl;
//	cout << num2 << endl;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	cout << a << endl;
//	cout << b << endl;
//	
//	swap(a, b);
//	cout << a << endl;
//	cout << b << endl;
//	system("pause");
//	return 0;
//}

//头文件与源文件

//#include <iostream>
//#include "swap.h"
//using namespace std;
//int  main()
//{
//	int a = 10;
//	int b = 20;
//	cout<<max(a, b)<<endl;
//	system("pause");
//	return 0;
//}


//指针

//#include <iostream>
//using namespace std;
//int main()
//{
//	int a = 10;
//	int b = 10;
//	//int * p = &a;
//	//cout << p << endl;
//	//*p = 6786;
//	//cout << a<< endl;
//	//cout << *p << endl;
//	//cout << "p指针的内存大小："<< sizeof( p) << endl;//32位下4个字节，64位下8个字节；
//
//	//常量指针
//	//const int* p = &a;
//	//*p = 20;//错误，const已经修饰了*，所以无法改变指针所指的值
//	//p = &b;
//
//	//指针常量
//	//int* const p = &a;
//	//*p = 20;
//	//p = &b;//错误，const已经修饰了p，所以无法改变指针路径
//
//	//const既修饰指针，又修饰常量
//	const int * const p = &a;
//	*p = 20;//错误
//	p = &b;//错误
//	system("pause");
//	return 0;
//}    

//数组指针

//#include <iostream>
//using namespace std;
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;//指向数组的指针不用加&
//	cout << *p << endl;
//	p++;//指针向后偏移了4个字节
//	cout << "输出数组中第二个元素："<< * p << endl;
//	int* p2 = arr;
//	for (int i = 0; i < 10; i++)
//	{
//		cout << *p2 << endl;
//		p2++;
//	}
//	system("pause");
//	return 0;
//}


//地址传递

//int main()
//{
//	int a = 10;
//	int b = 20;
//	swap(&a, &b);
//	cout << a << endl;
//	cout << b << endl;
//	system("pause");
//	return 0;
//}

//数组，函数和指针结合运用

//int main()
//{
//	int arr[] = { 1,54,3,7,689,45,56,345,8,67 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	bubbleSort(arr, len);
//	printArray(arr, len);
//	system("pause");
//	return 0;
//}

//结构体

//struct Student
//{
//	string name;
//	int age;
//	int score;
//};
//struct teacher
//{
//	int id;
//	string name;
//	int age;
//	Student stu;
//};
//void printStudent(const Student* s)
//{
//	//s->age = 13;//加入const修饰后无法改变参数值
//	cout << s->name << s->age << s->score << endl;
//}
//int main()
//{
//	//初始化结构体
//	Student s1 = { "张三",20, 90,};      
//	cout << s1.name << endl;
//	cout << s1.age << endl;
//	cout << s1.score << endl;
//	
//	//结构体数组
//	Student stuArray[] = { {"李四",19,58},{"王麻子",78,60}};
//	int len = sizeof(stuArray) / sizeof(stuArray[0]);
//	for (int i = 0; i < len; i++)
//	{
//		cout<<stuArray[i] .name << endl
//			<<stuArray[i].age << endl
//			<<stuArray[i].score << endl;
//	}
//	//结构体指针
//	Student* p = &s1;
//	cout << p->name << p->age << p->score << endl;
//	Student  * p1 = stuArray;
//	cout << p1->name << p1->age << p1->score << endl;
//
//	//嵌套结构体
//	teacher t = { 0,"老王",50,s1 };
//	cout << t .id<<t.name<<t.age<<t.stu.name<<t.stu.age<<t.stu.score<< endl;
//
//	//结构体做函数参数运用
//	printStudent(&s1);
//	system("pause");
//	return 0;
//}

//结构体案例运用1

//struct Student
//{
//	string sName;
//	int score;
//};
//struct Teacher
//{
//	string tName;
//	Student sArray[5];
//};
//void allocateSpace(Teacher tArray[], int len) 
//{
//	srand((unsigned int)time(NULL));
//	string nameSeed = "ABCDE";
//	for (int i = 0; i < len; i++)
//	{
//		tArray[i].tName = "teacher_";
//		tArray[i].tName += nameSeed[i];
//		for (int  j = 0; j < 5; j++)
//		{
//			tArray[i].sArray[j].sName = "student_";
//			tArray[i].sArray[j].sName += nameSeed[j];
//			tArray[i].sArray[j].score = rand() % 61 + 40;
//		}
//	}
//}
//void printAll(Teacher tArray[], int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		cout <<"老师姓名："<< tArray[i].tName << endl;
//		for (int j = 0; j < 5; j++)
//		{
//			cout << "\t学生姓名：" << tArray[i].sArray[j].sName <<
//						"考试分数：" << tArray[i].sArray[j].score << endl;
//		}
//	}
//}
//int main()
//{
//	Teacher tArray[3];
//	int len = sizeof(tArray) / sizeof(tArray[0]);
//	allocateSpace(tArray, len);
//	printAll(tArray,len);
//	system("pause");
//	return 0;
//}

//结构体案例运用2

//struct Hero
//{
//	string name;
//	int age;
//	string sex;
//};
//void bubbleSort(Hero heroArray[], int length)
//{
//	for (int i = 0; i < length-1; i++)
//	{
//		for (int j = 0; j < length-i-1; j++)
//		{
//			if (heroArray[j].age > heroArray[j + 1].age) 
//			{
//				Hero  temp = heroArray[j];
//				heroArray[j] = heroArray[j + 1];
//				heroArray[j + 1] = temp;
//			}
//		}
//	}
//}
//void printHero(Hero heroArray[], int length)
//{
//	for (int i = 0; i < length; i++)
//	{
//		cout << heroArray[i].name << heroArray[i].age << heroArray[i].sex << endl;
//	}
//}
//int main()
//{
//	Hero heroArray[5] =
//	{
//		{"刘备",23,"男"} ,
//		{"关羽",22,"男"},
//		{"张飞",20,"男"},
//		{"赵云",21,"男"},
//		{"貂蝉",19,"女"}
//	};
//	int length = sizeof(heroArray) / sizeof(heroArray[0]);
//	bubbleSort(heroArray, length);
//	printHero(heroArray, length);
//	system("pause");
//	return 0;
//}


//进制转换

class Solution {
public:
   
    string solve(int M, int N) {
        // write code here
        if (M == 0) { return 0; }
        bool flag = false;
        if (M < 0)
        { 
            flag = true; M = -M; 
        }
        string ret = "";
        string jz = { "0123456789ABCDEF" };
        while (M) 
        { 
            ret += jz[M % N]; 
            M /= N; 
        }
        reverse(ret.begin(), ret.end());
        if (flag)
        { 
            ret.insert(0, "-");
        }
        return ret;

    }
};

//明明的随机数


int main() {
	int N, n;
	while (cin >> N) {
		int a[1001] = { 0 };
				
		while (N--) {
			cin >> n;
			a[n] = 1;
		}
		
		for (int i = 0; i < 1001; i++)
			if (a[i])
				cout << i << endl;
	}
	return 0;
}


//字符个数统计


int main() {
    string input;
    while (getline(cin, input)) {
        int arr[128] = { 0 };
        for (int i = 0; i < input.size(); i++) {
            if (input[i] >= 0 && input[i] <= 127) {
                arr[input[i]] = 1;
            }
        }
        int result = 0;
        for (int i = 0; i < 128; i++) {
            result +=  arr[i];
        }
        cout << result << endl;
        return 0;
    }
}


	//反转链表
	
	
class Solution
{
public:
    ListNode* ReverseList(ListNode* pHead) 
    {
        ListNode* pre = nullptr;
        ListNode* cur = pHead;
        ListNode* nex = nullptr; // 这里可以指向nullptr，循环里面要重新指向
        while (cur) {
            nex = cur->next;
            cur->next = pre;
            pre = cur;
            cur = nex;
        }
        return pre;
    }
};


//两数之和

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int>m;
        for (int i = 0; i < nums.size(); ++i)
        {
            if (m.count(target - nums[i]))
            {
                return{ i,m[target - nums[i]] };
            }
            m[nums[i]] = i;
        }
        return{};
    }
    };


//两数相加

class Solution
{
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
    {
        int crray = 0;
        ListNode* head = nullptr, * tail = nullptr;
        while (l1 || l2)
        {
            int n1 = l1 ? l1->val : 0;
            int n2 = l2 ? l2->val : 0;
            int sum = n1 + n2 + crray;
            if (head == nullptr)
            {
                head = tail = new ListNode(sum % 10);
            }
            else
            {
                tail->next = new ListNode(sum % 10);
                tail = tail->next;
            }
            crray = sum / 10;
            if (l1)
            {
                l1 = l1->next;
            }
            if (l2)
            {
                l2 = l2->next;
            }
        }
        if (crray > 0)
        {
            tail->next = new ListNode(crray);
        }
        return head;
    }
    };

//最长子字符串

class Solution {
public:
    int longestBeautifulSubstring(string word) {
        if (word.size() < 5)return 0;
        int res = 0;
        int rlen = 1;
        int type = 1;
        for (int i = 0; i < word.size(); i++)
        {
            if (word[i + 1] >= word[i])rlen++;
            if (word[i + 1] > word[i])type++;
            if (word[i + 1] < word[i])
            {
                rlen = 1;
                type = 1;
            }
            if (type == 5)
            {
                res = res > rlen ? res : rlen;
            }
        }
        return res;
    }
};


//字符串加解密


string encryption(string password)
{
    string result;
    int size = password.size();
    for (int i = 0; i < size; ++i)
    {
        if (password[i] >= 'A' && password[i] <= 'Y')
        {
            result += password[i] + 33;
        }
        else if (password[i] == 'Z')
        {
            result += 97;
        }
        else if (password[i] >= 'a' && password[i] <= 'y')
        {
            result += password[i] - 31;
        }
        else if (password[i] == 'z')
        {
            result += 65;
        }
        else if (password[i] >= '0' && password[i] <= '8')
        {
            result += password[i] + 1;
        }
        else if (password[i] == '9')
        {
            result += '0';
        }
        else {
            result += password[i];
        }
    }
    return result;
}

string decrypt(string password)
{
    string result;
    int size = password.size();
    for (int i = 0; i < size; ++i)
    {
        if (password[i] >= 'B' && password[i] <= 'Z')
        {
            result += password[i] + 31;
        }
        else if (password[i] == 'A')
        {
            result += 'z';
        }
        else if (password[i] >= 'b' && password[i] <= 'z')
        {
            result += password[i] - 33;
        }
        else if (password[i] == 'a')
        {
            result += 'Z';
        }
        else if (password[i] >= '1' && password[i] <= '9')
        {
            result += password[i] - 1;
        }
        else if (password[i] == '0')
        {
            result += '9';
        }
        else {
            result += password[i];
        }
    }
    return result;
}

int main()
{
    string p1, p2;
    while (cin >> p1 >> p2)
    {
        string r1 = encryption(p1);
        string r2 = decrypt(p2);
        cout << r1 << endl << r2 << endl;
    }

    return 0;
}


//截取字符串


int main()
{
    string str;
    int sub;
    while (cin >> str >> sub)
    {
        for (int i = 0; i < sub; ++i)
        {
            cout << str[i];
        }
        cout << endl;
    }
    return 0;
}


//扑克牌中的顺子

class Solution {
public:
    bool isStraight(vector<int>& nums) {

        sort(nums.begin(), nums.end());
        int joker = 0;
        for (int i = 0; i < 5; i++) 
			{
            if (nums[i] == 0)
				 {
						 joker++;
				 }
            else if (nums[i] == nums[i +1])
				 {
                return false; //除去大小王无重复
              }
			}
        return nums[4] - nums[joker] < 5; //最大最小的差值在5之内

    }
};


//跳台阶

class Solution {
public:
    int jumpFloor(int number) {
        int a = 1, b = 1, c = 1;
        for (int i = 2; i <= number; i++)
        {
            c = a + b, a = b, b = c;
        }
        return c;
    }
};



//零钱问题、


class Solution {
public:
    int minMoney(vector<int>& arr, int aim) {
        //小于1的都返回0
        if (aim < 1)
            return 0;
        //dp[i]表示凑齐i元最少需要多少货币数
        vector<int> dp(aim + 1, aim + 1);
        dp[0] = 0;
        //遍历1-aim元
        for (int i = 1; i <= aim; i++) {
            //每种面值的货币都要枚举
            for (int j = 0; j < arr.size(); j++) {
                //如果面值不超过要凑的钱才能用
                if (arr[j] <= i)
                    //维护最小值
                    dp[i] = min(dp[i], dp[i - arr[j]] + 1);
            }
        }
        //如果最终答案大于aim代表无解
        return dp[aim] > aim ? -1 : dp[aim];
    }
};

//火锅问题

#include<iostream>
#include<string>
#include<cstdio>
using namespace std;
int main() {
    int ans = 0, fir, cnt = 0, len;
    string str, s1 = "chi1 huo3 guo1";
    while (1) {
        getline(cin, str);
        if (str == ".") break;
        ans++;
        len = str.length();
        for (int i = 0; i < len - 14; i++)//依次截取长度为14的字符串
            if (str.substr(i, 14) == s1) {
                if (cnt == 0) fir = ans;
                cnt++;
                break;
            }
    }
    cout << ans << endl;
    if (!cnt) puts("-_-#");
    else cout << fir << " " << cnt << endl;
    return 0;
}


//岛屿问题
class Solution {
private:
    void dfs(vector<vector<char>>& grid, int r, int c) {
        int nr = grid.size();
        int nc = grid[0].size();

        grid[r][c] = '0';
        if (r - 1 >= 0 && grid[r - 1][c] == '1') dfs(grid, r - 1, c);
        if (r + 1 < nr && grid[r + 1][c] == '1') dfs(grid, r + 1, c);
        if (c - 1 >= 0 && grid[r][c - 1] == '1') dfs(grid, r, c - 1);
        if (c + 1 < nc && grid[r][c + 1] == '1') dfs(grid, r, c + 1);
    }

public:
    int numIslands(vector<vector<char>>& grid) {
        int nr = grid.size();
        if (!nr) return 0;
        int nc = grid[0].size();

        int num_islands = 0;
        for (int r = 0; r < nr; ++r) {
            for (int c = 0; c < nc; ++c) {
                if (grid[r][c] == '1') {
                    ++num_islands;
                    dfs(grid, r, c);
                }
            }
        }

        return num_islands;
    }
};





//迷宫问题

//// 构建结构体
//struct list
//{
//    int x, y;
//    struct list* next;
//};
//typedef struct list node;
//typedef node* link;
//link push(link path, int x, int y);
//link pop(link path, int* x, int* y);
//int chkExit(int x, int y, int ex, int ey);
//// 路径加入新点
//link push(link path, int x, int y)
//{
//    link newnode;
//    newnode = new node;
//    if (!newnode)
//    {
//        cout << "Error:内存分配失败！" << endl;
//        return NULL;
//    }
//    newnode->x = x;
//    newnode->y = y;
//    newnode->next = path;
//    path = newnode;
//    return path;
//}
//// 路径弹出不通的点
//link pop(link path, int* x, int* y)
//{
//    link top;
//    if (path != NULL)
//    {
//        link temp = path;
//        path = path->next;
//        *x = path->x;
//        *y = path->y;
//        delete temp;
//        return path;
//    }
//
//    return path;
//}
//// 到达终点
//int chkExit(int x, int y, int ex, int ey)
//{
//    if ((x == ex) && (y == ey))
//    {
//        return 1;
//    }
//    return 0;
//}
//
//int main()
//{
//    int row, col;
//    while (cin >> row >> col)
//    {
//        int** a = new int* [row];
//        for (int i = 0; i < row; ++i)
//        {
//            a[i] = new int[col];
//        }
//        for (int i = 0; i < row; i++)
//        {
//            for (int j = 0; j < col; j++)
//            {
//                cin >> a[i][j];
//            }
//        }
//        link path = NULL;
//        int x = 0, y = 0;
//        path = push(path, x, y);
//        while (x < row && y < col)
//        {
//            a[x][y] = 2;
//            // 往上走
//            if (x - 1 >= 0)
//            {
//                if (a[x - 1][y] == 0)
//                {
//                    x -= 1;
//                    path = push(path, x, y);
//                    continue;
//                }
//            }
//            // 往下走
//            if (x + 1 < row)
//            {
//                if (a[x + 1][y] == 0)
//                {
//                    x += 1;
//                    path = push(path, x, y);
//                    continue;
//                }
//            }
//            // 往左走
//            if (y - 1 >= 0)
//            {
//                if (a[x][y - 1] == 0)
//                {
//                    y -= 1;
//                    path = push(path, x, y);
//                    continue;
//                }
//            }
//            // 往右走
//            if (y + 1 < col)
//            {
//                if (a[x][y + 1] == 0)
//                {
//                    y += 1;
//                    path = push(path, x, y);
//                    continue;
//                }
//            }
//            // 判断是否到达终点
//            if (chkExit(x, y, row - 1, col - 1) == 1)
//            {
//                break;
//            }
//            // 倒退
//            path = pop(path, &x, &y);
//        }
//        vector<string> result;
//        while (path != NULL)
//        {
//            string p = "(" + to_string(path->x) + "," + to_string(path->y) + ")";
//            result.push_back(p);
//            path = path->next;
//        }
//        for (int i = result.size() - 1; i >= 0; --i)
//        {
//            cout << result[i] << endl;
//        }
//    }
//
//    return 0;
//}