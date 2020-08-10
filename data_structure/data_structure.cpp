#include <iostream>
#include <stdio.h>
#include<stdlib.h>
#include <cstdlib>
#include <stddef.h>
#include <cstddef>
# include <string.h>

#define Length 9
#define MaxSize 10

using namespace std;




//int insertElem(int sqList[], int &length ,int p, int e);
//int deletElem(int sqList[],int &length, int p, int &e);
//
//typedef struct LNode
//{
//    int data;
//    struct LNode *next;
//}LNode;
//
//void createLinkListR(LNode *&head)
//{
//    head = (LNode*)malloc(sizeof(LNode));
//    head->next = NULL;
//    LNode *p /* = NULL报错 */,*r = head;
//    int n;
//    cin>>n;
//    for (int i = 0;i<n;i++)
//    {
//        p = (LNode*)malloc(sizeof(LNode ));
//        p->next = NULL;
//        cin >> p->data;
//        p->next = r->next;
//        r->next = p;\
//        r= p;
//    }
//
//}
//
//int main()
//{
//    /*插入删除顺序表
//    int sqList[maxSize] = {0,1,2,3,4,5,6,7,8};
//    int length = 9;
//    insertElem(sqList,length,3,15);
//    int a;
//    deletElem(sqList,length,3,a);
//    for (int j=0;j<length;j++)
//        printf("%d \n",sqList[j]);
//    printf("%d",a );*/
//
//    //生成带头结点单链表
//    LNode *head;
//    createLinkListR(head);
//    LNode *p = head->next;
//    while (p)
//    {
//        cout<<p->data << endl;
//        p = p->next;
//    }
//    return 0;
//}
//
//int deletElem(int sqList[],int &length, int p, int &e)
//{
//    if (p<0||p>length-1)
//        return 0;
//    e = sqList[p];
//    for (int i = p;i < length-1;i++)
//        sqList[i] = sqList[i+1];
//    length--;
//    return 1;
//}
//
//int insertElem(int sqList[], int &length ,int p, int e)
//{
//    if (p<0||p>length||length >= maxSize)
//        return 0;
//
//    for (int i =length-1;i >=p;i--)
//    {
//        sqList[i+1] = sqList[i];
//    }
//    sqList[p] = e;
//    ++length;
//    return 1;
//}






////输入很多字母，不重复createLinkNoSameElem的组成单链表
//typedef struct LNode
//{
//    char data;
//    struct LNode *next;
//}LNode;
//
//void createLinkNoSameElem(LNode *&head)
//{
//    head = (LNode*)malloc(sizeof(LNode));
//    head->next = NULL;
//    LNode *p;
//    int n;
//    char ch;
//    cin >> n;
//    for (int i = 0;i < n;i++)
//    {
//        cin >> ch;
//        p = head->next;
//        while(p)
//        {
//            if (p->data == ch)
//                break;
//            p = p->next;
//        }
//        if (p == NULL)
//        {
//            p = (LNode*)malloc(sizeof(LNode));
//            p->data = ch;
//            p -> next  = head->next;
//            head->next = p;
//        }
//    }
//}
//
//int main ()
//{
//    LNode *head,*p;
//    createLinkNoSameElem(head);
//    p  = head->next ;
//    while (p)
//    {
//        cout << p->data;
//        p = p->next;
//    }
//}




////T2.2.1
////线性表找最小值删除，由最后一个替换
//typedef struct sqList
//{
//    int data[MaxSize];
//    int length = Length;
//    int maxSize = MaxSize;
//}sqList;
//
//int setoutMin(sqList &List)
//{
//    int minIdx = 0;
//    int Min = List.data[0];
//    if (List.length == 0)
//        return false;
//    for(int i = 0;i<List.length;i++)
//    {
//        if(Min > List.data[i])
//        {
//            Min = List.data[i];
//            minIdx = i;
//        }
//    }
//    List.data[minIdx] = List.data[List.length-1];
//    List.length--;
//    return Min;
//}
//
//int main()
//{
//    sqList List;
//    for(int i = 0;i<List.length;i++)
//        List.data[i] = i;
//    int Min = setoutMin(List);
//    cout<<Min<<"   " <<endl <<endl;
//    for(int i = 0;i<List.length;i++)
//        cout<< List.data[i] << endl;
//}




////T2.2.2
////线性表逆置
//typedef struct sqList
//{
//    int data[MaxSize];
//    int length = Length;
//    int maxSize = MaxSize;
//}sqList;
//
//void Swap(int &a,int &b)
//{
//    int temp = a;
//    a = b;
//    b = temp;
//}
//
//void Reverse(sqList &List)
//{
//    for (int i = 0,j = List.length-1;i<j;i++,j-- )
//        Swap(List.data[i],List.data[j]);
//
//}
//
//int main()
//{
//    sqList List;
//    for(int i = 0;i<List.length;i++)
//        List.data[i] = i;
//    Reverse(List);
//    for(int i = 0;i<List.length;i++)
//        cout<< List.data[i] << endl;
//}



////T2.2.3
////去除顺序表为x的元素
//typedef struct sqList{
//    int data[MaxSize];
//    int length = Length;
//}sqList;
//
//void DelX(sqList &List,int x)
//{
//    int last = 0;
//    for(int i=0;i<List.length;i++)
//    {
//        if (List.data[i] !=x)
//        {
//            List.data[last++] = List.data[i];
//        }
//    }
//    List.length = last;
//
//}
//
//int main ()
//{
//    sqList List;
//    for(int i = 0;i<List.length;i++)
//        List.data[i] = i;
//    DelX(List,5);
//    for(int i = 0;i<List.length;i++)
//        cout<< List.data[i] << endl;
//}




////T2.3.4
////有序表删除（s,t）的元素
//typedef struct sqList{
//    int data[MaxSize];
//    int length = Length;
//}sqList;
//bool DelS_T(sqList &List,int s,int t)
//{
//    int i,j;
//    if(t<s||List.length==0)
//        return false;
//    for (i =0;i < List.length;i++)
//        if (List.data[i] >s)
//            break;
//    //int start = i--;
//    for (j = i; j < List.length;j++)
//    {
//        if (List.data[j] >= t)
//            break;
//    }
//    while(j < List.length)
//    {
//        List.data[i] = List.data[j];
//        ++i;++j;
//    }
//    List.length = i;
//    return true;
//}
//int main ()
//{
//    sqList List;
//    for(int i = 0;i<List.length;i++)
//        List.data[i] = i;
//    bool a = DelS_T(List,3,6);
//    for(int i = 0;i<List.length;i++)
//        cout<< List.data[i] << endl ;
//    cout <<endl << List.length<<endl;
//}



////T2.3.6
////有序表删除重复的元素
//typedef struct sqList{
//    int data[MaxSize];
//    int length = Length;
//}sqList;
//
//void DelRepeat(sqList &List )
//{
//    int temp = List.data[0];
//    int last = 1;
//    if(List.length == 1)
//        return ;
//    for (int i = 1;i <List.length;i++)
//    {
//        if(List.data[i] != temp)
//        {
//            List.data[last] = List.data[i];
//            temp = List.data[i];
//            last++;
//        }
//    }
//    List.length = last;
//}
//int main ()
//{
//    sqList List;
//    for(int i = 0;i<List.length;i++)
//        if (i%2 == 1)
//            List.data[i] = i-1;
//        else
//            List.data[i] = i;
//
//    DelRepeat(List);
//    for(int i = 0;i<List.length;i++)
//        cout<< List.data[i] << endl ;
//    cout <<endl << List.length<<endl;
//}
//


////T2.3.7
////有序表删除（s,t）的元素
//typedef struct sqList{
//    int data[MaxSize];
//    int length = Length/2;
//}sqList;
//typedef struct sqList2{
//    int data[MaxSize];
//    int length = 8;
//}sqList2;
//
//
//contract(sqList2 &List,sqList List1,sqList List2)
//{
//    int num1 = 0, num2 =0,i;
//    for (i = 0;num1 < List1.length&&num2 <List2.length;i++)
//    {
//        if (List1.data[num1] < List2.data[num2])
//            List.data[i] = List1.data[num1++];
//        else
//            List.data[i] = List2.data[num2++];
//    }
//    while(num1 < List1.length)
//        List.data[i++] = List1.data[num1++];
//    while(num2 < List2.length)
//        List.data[i++] = List2.data[num2++];
//}
//
//int main ()
//{
//    sqList List1,List2;
//    sqList2 List;
//    for(int i = 0;i<List1.length;i++)
//        List1.data[i] = i*2;
//    for(int i = 0;i<List2.length;i++)
//        List2.data[i] = i*2+1;
//    cout << List1.length << "    " << List2.length <<endl << List.length<<endl;;
//    contract(List,List1,List2);
//    for(int i = 0;i<List.length;i++)
//        cout<< List.data[i] << endl ;
//    cout <<endl << List.length<<endl;
//}
//






////T2.3.8
////A[m+n]  m、n调换位置
//typedef struct sqList{
//    int data[MaxSize];
//    int length = Length;
//}sqList;
//
//void Reverse(sqList &List,int a,int b)
//{
//    while(a < b)
//    {
//        int Swap = List.data[a];
//        List.data[a] = List.data[b];
//        List.data[b] = Swap;
//        a++;
//        b--;
//    }
//}
//
//void Reverse_ab(sqList &List,int m)
//{
//    Reverse(List,0,m-1);
//    Reverse(List,m,List.length-1);
//    Reverse(List,0,List.length-1);
//}
//
//int main ()
//{
//    sqList List;
//    for(int i = 0;i<List.length;i++)
//        List.data[i] = i;
//    Reverse_ab(List,5);
//    for(int i = 0;i<List.length;i++)
//        cout<< List.data[i] << endl ;
//    cout <<endl << List.length<<endl;
//}



//
////T2.2.9
////有序顺序表找到x并与后一个元素换位，否则插入(折半查找)
//typedef struct sqList{
//    float data[MaxSize];
//    int length = Length;
//}sqList;
//
//void Search(sqList &List,int x)
//{
//    int low = 0,high = List.length-1,mid;
//    while (low<=high)
//    {
//        mid = (low + high)/2;
//        if (List.data[mid] == x)
//            break;
//        else if(x<List.data[mid])
//            high = mid-1;
//        else
//            low = mid+1;
//    }
//    if (List.data[mid] == x && mid != List.length-1)
//    {
//        int Swap = List.data[mid];
//        List.data[mid] = List.data[mid+1];
//        List.data[mid+1] = Swap;
//    }
//    cout <<high << "     " << low << "    " << List.length<<endl;
//    if(low>high )  //查找不到的话在high和low之间即在high的下一个
//    {
//        int i;
//        for (i = List.length-1;i>high;i--)
//            List.data[i+1] = List.data[i];
//        List.data[i+1] = x;
//    }
//}
//
//int main ()
//{
//    sqList List;
//    for(int i = 0;i<List.length;i++)
//        if (i <6)
//            List.data[i] = i;
//        else
//            List.data[i] = i+1;
//    for(int i = 0;i<List.length;i++)
//        cout<< List.data[i] << endl ;
//    cout <<endl ;
//    Search(List,6);
//    for(int i = 0;i<List.length;i++)
//        cout<< List.data[i] << endl ;
//    cout <<endl << List.length<<endl;
//}




////T2.2.12
////找出主元素
//typedef struct sqList{
//    float data[MaxSize];
//    int length = Length;
//}sqList;
//
//int findMain(sqList &List)
//{
//    int num;
//    int time = 0;
//    for (int i = 0;i < List.length;i++)
//    {
//        if (time == 0)
//        {
//            num = List.data[i];
//            time = 1;
//        }
//        else if (List.data[i] == num)
//            time++;
//        else
//            time--;
//    }
//    int times = 0;
//    for(int i = 0;i < List.length;i++)
//    {
//
//        if(List.data[i] == num)
//            times++;
//    }
//    if(times > List.length/2)
//        return num;
//    else
//        return -1;
//}
//
//int main ()
//{
//    sqList List;
//    for(int i = 0;i<List.length;i++)
//    {
//        if (i <= 4)
//            List.data[i] = 1;
//        else
//            List.data[i] = i;
//    }
//
//
//    int a = findMain(List);
//    cout << endl << endl << a <<endl << endl;
//    for(int i = 0;i<List.length;i++)
//        cout<< List.data[i] << endl ;
//    cout <<endl << List.length<<endl;
//}




//int FindLossMin(int A[],int n)
//{
//    int *B,i;
//    B = (int *)malloc(sizeof(int)*(n+1));
//    memset(B,0,sizeof(int)*(n+1));
//    for (i = 0;i < n;i++)
//    {
//        if(A[i] <= n &&A[i] > 0)
//            B[A[i]-1] = A[i];
//    }
//
//    for(int i = 0;i < n+1;i++)
//    {
//        if (B[i] == 0)
//        {
//            cout << i<< endl;
//            return i+1;
//        }
//
//    }
//}
//int main()
//{
//    int A[15] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
//    int a = FindLossMin(A,15);
//    cout << a <<endl;
//}





////T2.3.1
////递归删除不带头结点单链表L值为x的结点
//typedef struct LNode{
//    int data;
//    struct LNode *next;
//}LNode;
//
//void del_x(LNode *&L,int x)
// {
//     LNode *p;
//     if (L==NULL)
//        return;
//     if (L->data == x)
//     {
//         p = L;
//         L = L->next;
//         free(p);
//         del_x(L,x);
//     }
//     else
//        del_x(L->next,x);
//
// }
//
//void setup_LNode(LNode *&L)
//{
//    L = (LNode*)malloc(sizeof(LNode));
//    L->next = NULL;
//    L->data = 0;
//    LNode *s,*a = L;
//    for(int i = 1;i < 10 ;i++)
//    {
//        s = (LNode*)malloc(sizeof(LNode));
//        s->data = i;
//        s->next = NULL;
//        a->next = s;
//        a = a->next;
//    }
//}
//
//int main()
//{
//    LNode *L;
//    setup_LNode(L);
//
//    del_x(L,3);
//    LNode *x = L;
//    while(x)
//    {
//        cout << x->data <<endl;
//        x = x->next;
//    }
//}



//*******************************************************************************//
//*******************************************************************************//
//******************************单链表递归专题***********************************//
//*******************************************************************************//
//*******************************************************************************//
////（1） 无头结点的单链表
//typedef struct LNode{
//    int data;
//    struct LNode *next;
//}LNode;
//void creat_Link(LNode *&L, int n)
//{
//    if(n == 0)
//        return;
//    else{
//        L = (LNode*)malloc(sizeof(LNode));
//        cin >> L->data;
//        L->next = NULL;
//        creat_Link(L->next,n-1);
//    }
//}
//void cout_Link(LNode *L)
//{
//    if (L == NULL)
//        return;
//    else
//        cout << L->data <<endl; //如果要反序打印链表把这句跟下句换一下但是都在else作用范围内
//    cout_Link(L->next);
//} 
//int main()
//{
//    LNode *L;
//    creat_Link(L,5);
//    cout_Link(L);
//}
//




////(2)查找节点个数
//typedef struct LNode{
//    int data;
//    struct LNode *next;
//}LNode;
//
//void creat_Link(LNode *&L, int n)
//{
//    if(n == 0)
//        return;
//    else{
//        L = (LNode*)malloc(sizeof(LNode));
//        cin >> L->data;
//        L->next = NULL;
//        creat_Link(L->next,n-1);
//    }
//}
//int count_Link(LNode *L)
//{
//    if(L == NULL)
//        return 0;
//    else
//        return(1+count_Link(L->next));
//}
//int main()
//{
//    LNode *L;
//    creat_Link(L,5);
//    int num = count_Link(L);
//    cout << "The Number Of This Link Is: " << num <<endl;
//}





////（3）递归查找最大值
//typedef struct LNode{
//    int data;
//    struct LNode *next;
//}LNode;
//void creat_Link(LNode *&L, int n)
//{
//    if(n == 0)
//        return;
//    else{
//        L = (LNode*)malloc(sizeof(LNode));
//        cin >> L->data;
//        L->next = NULL;
//        creat_Link(L->next,n-1);
//    }
//}
////int find_max(LNode *L)  //这个方法不好,初值自己定一个就离谱
////{
////    static int i = 0;
////    if (L == NULL)
////        return i;
////    else{
////        if (L->data > i)
////            i = L->data;
////        find_max(L->next);
////    }
////}
//int find_max(LNode *L)
//{
//    int maxnum;
//    if(L->next == NULL)
//        maxnum = L->data;
//    else
//    {
//        maxnum = find_max(L->next);
//        if (L->data > maxnum)
//            maxnum = L->data;
//    }
//    return maxnum;
//}
//
//int main()
//{
//    LNode *L;
//    creat_Link(L,5);
//    int a  = find_max(L);
//    cout << "The Number Of This Link Is: " << a <<endl;
//}




////（3）递归判断是否递增
//typedef struct LNode{
//    int data;
//    struct LNode *next;
//}LNode;
//void creat_Link(LNode *&L, int n)
//{
//    if(n == 0)
//        return;
//    else{
//        L = (LNode*)malloc(sizeof(LNode));
//        cin >> L->data;
//        L->next = NULL;
//        creat_Link(L->next,n-1);
//    }
//}
//
//bool judge(LNode *L)
//{
//    if(L->next == NULL)
//        return true;
//    else if (L->data < L->next->data)
//        judge(L->next);
//    else
//        return false;
//}
//
//int main()
//{
//    LNode *L;
//    creat_Link(L,5);
//    bool a  = judge(L);
//    if (a)
//        cout<<"This Link Is In Order!" <<endl;
//    else
//        cout<<"This Link Is NOT In Order!" <<endl;
//}



//*************************************************************//
//*************************************************************//
//************************递归专题结束*************************//
//*************************************************************//
//*************************************************************//


//T2.3.2
//带头结点L删除所有x
// 1)递归
typedef struct LNode
{
    int data;
    struct LNode* next;
}LNode;

void create_Link(LNode*& L, int x)
{
    LNode* p, * a = L;
    L = (LNode*)malloc(sizeof(LNode));
    while (x)
    {
        p = (LNode)malloc(sizeof(LNode));
        cin >> p->data;
        a->next = p;
        a = p;
        x--;
    }
}

int main()
{
    LNode* L;
    create_Link(L, 5);
    bool a = judge(L);
    if (a)
        cout << "This Link Is In Order!" << endl;
    else
        cout << "This Link Is NOT In Order!" << endl;
}









