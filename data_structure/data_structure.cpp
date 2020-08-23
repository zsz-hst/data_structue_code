#include <iostream>
#include <stdio.h>
#include<stdlib.h>
//#include <cstdlib>
//#include <stddef.h>
//#include <cstddef>
# include <string.h>

#define Length 9
#define MaxSize 10

using namespace std;


//***************************************************************************//
//***************************************************************************//
//*********************************基本模型**********************************//
//***************************************************************************//
//***************************************************************************//
//***************************************************************************//
////带头结点的单链表
//typedef struct LNode
//{
//    int data;
//    struct LNode *next;
//}LNode;
//
////创建带头结点的链表
//void create_Link(LNode *&L,int x)
//{
//    L = (LNode*)malloc(sizeof(LNode));
//    LNode *p,*a = L;
//    while(x>0)
//    {
//        p = (LNode*)malloc(sizeof(LNode));
//        cin >> p->data;
//        p->next = NULL;
//        a->next = p;
//        a = p;
//        x--;
//    }
//}
//
////递归输出
//void print_Link(LNode *&L)
//{
//    if(L->next == NULL)
//        return;
//    else
//        cout << L->next->data << endl;
//    print_Link(L->next);
//
//}





////创建带头结点的循环双链表
//typedef struct DLNode
//{
//    int data;
//    struct DLNode *prior;
//    struct DLNode *next;
//}DLNode;

//void create_DLink(DLNode *&DL,int x)
//{
//    DL = (DLNode*)malloc(sizeof(DLNode));
//    DL->next = DL;
//    DL->prior = DL;
//    DLNode *p,*a = DL;
//    while(x>0)
//    {
//        p = (DLNode*)malloc(sizeof(DLNode));
//        cin >> p->data;
//        p->next = DL;
//        p->prior = a;
//        a->next = p;
//        DL->prior = p;
//        a = p;
//        x--;
//    }
//}
//
////输出循环（单/双）链表
//void print_DLink(DLNode *DL)
//{
//    DLNode *a = DL;
//    while(a->next != DL)
//    {
//        cout << a->next->data <<endl;
//        a = a->next;
//    }
//}






//////创建带头结点的循环单链表
//typedef struct CLNode
//{
//    int data;
//    struct CLNode *next;
//}CLNode;

//void create_CLink(CLNode *&CL,int x)
//{
//    CL = (CLNode*)malloc(sizeof(CLNode));
//    CLNode *p,*a = CL;
//    while(x>0)
//    {
//        p = (CLNode*)malloc(sizeof(CLNode));
//        cin >> p->data;
//        if(x == 1)
//            p->next = CL;
//        a->next = p;
//        a = p;
//        x--;
//    }
//}


////输出循环（单/双）链表
//void print_DLink(DLNode *DL)
//{
//    DLNode *a = DL;
//    while(a->next != DL)
//    {
//        cout << a->next->data <<endl;
//        a = a->next;
//    }
//}






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


////T2.3.2
////带头结点L删除所有x
//
//typedef struct LNode
//{
//    int data;
//    struct LNode *next;
//}LNode;
//
////创建带头结点的链表
//void create_Link(LNode *&L,int x)
//{
//    L = (LNode*)malloc(sizeof(LNode));
//    LNode *p,*a = L;
//    while(x>0)
//    {
//        p = (LNode*)malloc(sizeof(LNode));
//        cin >> p->data;
//        p->next = NULL;
//        a->next = p;
//        a = p;
//        x--;
//    }
//}
////打印带头结点的链表
//void print_Link(LNode *L)
//{
//    LNode *a = L->next;
//    while(a != NULL)
//    {
//        cout << a->data << endl;
//        a = a->next;
//    }
//}
//
//// 1)递归
//void del_x(LNode *&L,int x)
//{
//    if(L==NULL)
//        return;
//    else if(L->data == x) //这里没有刻意处理头结点，头结点的data没有赋值不会为x的;;;;如果不放心想处理，把mian里面的此函数参数改成L->next
//    {
//        LNode *p;
//        p = L;
//        L = L->next;
//        free(p);
//        del_x(L,x);
//    }
//    else
//        del_x(L->next,x);
//}
//
//// 2)非递归调用
//void del_X(LNode *&L, int x)
//{
//    LNode *pre = L,*a = L->next,*p;
//    while(a != NULL)
//    {
//        if(a->data == x)
//        {
//            p = a;
//            pre->next = a->next;
//            free(p);
//        }
//        else
//            pre = a;
//        a = pre->next;
//    }
//
//}
//
//int main()
//{
//    LNode *L;
//    create_Link(L,5);
//    //del_x(L->next,3);
//    del_X(L,3);
//    print_Link(L);
//}





////T2.3.2
////带头结点L删除所有x
//
//typedef struct LNode
//{
//    int data;
//    struct LNode *next;
//}LNode;
//
////创建带头结点的链表
//void create_Link(LNode *&L,int x)
//{
//    L = (LNode*)malloc(sizeof(LNode));
//    LNode *p,*a = L;
//    while(x>0)
//    {
//        p = (LNode*)malloc(sizeof(LNode));
//        cin >> p->data;
//        p->next = NULL;
//        a->next = p;
//        a = p;
//        x--;
//    }
//}
//
////递归输出
//void reverse_print(LNode *&L)
//{
//    if(L->next == NULL)
//        return;
//    else
//        reverse_print(L->next);
//    cout << L->next->data << endl;
//}
//
//int main()
//{
//    LNode *L;
//    create_Link(L,5);
//    reverse_print(L);
//}




////T2.3.3
////带头结点L删除最小值节点
//
//typedef struct LNode
//{
//    int data;
//    struct LNode *next;
//}LNode;
//
////创建带头结点的链表
//void create_Link(LNode *&L,int x)
//{
//    L = (LNode*)malloc(sizeof(LNode));
//    LNode *p,*a = L;
//    while(x>0)
//    {
//        p = (LNode*)malloc(sizeof(LNode));
//        cin >> p->data;
//        p->next = NULL;
//        a->next = p;
//        a = p;
//        x--;
//    }
//}
//
//int del_min(LNode *&L)
//{
//    LNode *minptr = L->next,*pre = L,*a = L->next,*minpre = L;
//    int minnum = L->next->data;
//    while(a != NULL)
//    {
//        if (a->data < minnum)
//        {
//            minnum = a->data;
//            minptr = a;
//            minpre = pre;
//            a = a->next;
//
//        }
//        pre = a;
//        a = a->next;
//    }
//    minpre->next = minptr;
//    free(minptr);
//    return minnum;
//}
//
//int main()
//{
//    LNode *L;
//    create_Link(L,5);
//    int a = del_min(L);
//    cout << "The Minimum Number Is:" << a << endl;
//}


//
////2.3.4
////带头结点单链表逆置（头插法）
//typedef struct LNode
//{
//    int data;
//    struct LNode *next;
//}LNode;
//
////创建带头结点的链表
//void create_Link(LNode *&L,int x)
//{
//    L = (LNode*)malloc(sizeof(LNode));
//    LNode *p,*a = L;
//    while(x>0)
//    {
//        p = (LNode*)malloc(sizeof(LNode));
//        cin >> p->data;
//        p->next = NULL;
//        a->next = p;
//        a = p;
//        x--;
//    }
//}
//
////递归输出
//void print_Link(LNode *&L)
//{
//    if(L->next == NULL)
//        return;
//    else
//        cout << L->next->data << endl;
//    print_Link(L->next);
//
//}
//
//
//void Reverse(LNode *&L)
//{
//    LNode *a = L->next,*b;
//    L->next = NULL;
//    while(a != NULL)
//    {
//        b = a->next;  //如果这句话放在此段最后，会出现b = NULL -> next 情况，需要额外判断a是否等于NULL
//        a->next = L->next;
//        L->next = a;
//        a= b;
//    }
//}
//
//int main()
//{
//    LNode *L;
//    create_Link(L,5);
//    Reverse(L);
//    print_Link(L);
//}


////T2.3.6
////带头结点单链使其递增
//typedef struct LNode
//{
//    int data;
//    struct LNode *next;
//}LNode;
//
////创建带头结点的链表
//void create_Link(LNode *&L,int x)
//{
//    L = (LNode*)malloc(sizeof(LNode));
//    LNode *p,*a = L;
//    while(x>0)
//    {
//        p = (LNode*)malloc(sizeof(LNode));
//        cin >> p->data;
//        p->next = NULL;
//        a->next = p;
//        a = p;
//        x--;
//    }
//}
//
////递归输出
//void print_Link(LNode *&L)
//{
//    if(L->next == NULL)
//        return;
//    else
//        cout << L->next->data << endl;
//    print_Link(L->next);
//
//}
//
//////计算有多少节点
////int count_Link(LNode *L)
////{
////    if (L == NULL)
////        return -1; //由于包含头结点，最后用-1抵消头结点影响
////    else
////        return count_Link(L->next)+1;
////}
////
////void Sort(LNode *&L)  //这种冒泡算法不好，还要数有多少个节点循环n-1次
////{
////    LNode *start = L->next,*a ,*b;
////    int x = count_Link(L);
////    while(x > 0)
////    {
////        a = start;
////        b = a->next;
////        while(b!=NULL) //b!=NULL 判断条件可改为 int y = x;while(y--) ;次数为1+2+3....+n时间少一半但时间复杂度还是O(n^2)
////        {
////            int temp;
////            if(a->data > b->data)
////            {
////                temp = a->data;
////                a->data = b->data;
////                b->data = temp;
////            }
////            a = b;
////            b = b->next;
////        }
////        start = start;
////    }
////}
//
//
////标答：先把头结点和第一个结点与后面的断开生成一个链，再把后面的插入合适的位置
//void Sort2(LNode *&L)
//{
//    LNode *pre = L,*p = L->next,*r = p->next;
//    p->next = NULL;
//    p = r;
//    while(p != NULL)
//    {
//        pre = L;
//        r= p->next;
//        while(pre->next!= NULL && pre->next->data<p->data)
//        {
//            pre = pre->next;
//        }
//        p->next = pre->next;
//        pre->next = p;
//        p = r;
//    }
//}
//
//int main()
//{
//    LNode *L;
//    create_Link(L,5);
//    Sort2(L);
//    print_Link(L);
//}





////T2.3.8
////带头结点单链使其递增
//typedef struct LNode
//{
//    int data;
//    struct LNode *next;
//}LNode;
//
////创建带头结点的链表
//void create_Link(LNode *&L,int x)
//{
//    L = (LNode*)malloc(sizeof(LNode));
//    LNode *p,*a = L;
//    while(x>0)
//    {
//        p = (LNode*)malloc(sizeof(LNode));
//        cin >> p->data;
//        p->next = NULL;
//        a->next = p;
//        a = p;
//        x--;
//    }
//}
//
////递归输出
//void print_Link(LNode *&L)
//{
//    if(L->next == NULL)
//        return;
//    else
//        cout << L->next->data << endl;
//    print_Link(L->next);
//
//}
//
////计算有多少节点
//int count_Link(LNode *L)
//{
//    if (L == NULL)
//        return 0; //由于包含头结点，计算结果包括头结点
//    else
//        return count_Link(L->next)+1;
//}
//
//LNode *Find_same(LNode *L1,LNode *L2)
//{
//    LNode *a = L1,*b = L2;
//    int length1 = count_Link(L1);
//    int length2 = count_Link(L2);
//    if(length1 < length2)
//    {
//        for(int k = length2-length1;k>0;k--)
//            b = b->next;
//    }
//    else if(length2 < length1)
//    {
//        for(int k = length1-length2;k>0;k--)
//            a = a->next;
//    }
//
//    while(a != NULL)
//    {
//        if(a == b)
//            return a;
//        a = a->next;
//        b = b->next;
//    }
//    if(a == NULL)
//        return false;
//}
//
//int main()
//{
//    LNode *L1 ,*L2;
//    L2 = (LNode*)malloc(sizeof(LNode));
//    create_Link(L1,5);
//    L2->next = L1->next->next->next;
//    LNode *a = Find_same(L1,L2);
//    cout << a->data <<endl;
//}



////T2.3.10
////头结点链表分成AB两个，A奇数位置，B偶数
//typedef struct LNode
//{
//    int data;
//    struct LNode *next;
//}LNode;
//
////创建带头结点的链表
//void create_Link(LNode *&L,int x)
//{
//    L = (LNode*)malloc(sizeof(LNode));
//    LNode *p,*a = L;
//    while(x>0)
//    {
//        p = (LNode*)malloc(sizeof(LNode));
//        cin >> p->data;
//        p->next = NULL;
//        a->next = p;
//        a = p;
//        x--;
//    }
//}
//
////递归输出
//void print_Link(LNode *&L)
//{
//    if(L->next == NULL)
//        return;
//    else
//        cout << L->next->data << endl;
//    print_Link(L->next);
//
//}
//
////计算有多少节点
//int count_Link(LNode *L)
//{
//    if (L == NULL)
//        return 0; //由于包含头结点，计算结果包括头结点
//    else
//        return count_Link(L->next)+1;
//}
//
//LNode *seperate(LNode *&L)
//{
//    LNode *L2,*a = L->next,*pre = L,*ptr2;
//    L2 = (LNode*)malloc(sizeof(LNode));
//    L2->next = NULL;
//    ptr2 = L2;
//    for(int i = 1;a!=NULL;i++)
//    {
//        if(i%2 == 0)
//        {
//            pre->next = a->next;
//            a->next = ptr2->next;
//            ptr2->next = a;
//            ptr2 = ptr2->next;
//            a = pre->next;
//        }
//        else
//        {
//            pre = pre->next;
//            a = a->next;
//        }
//
//
//    }
//    return L2;
//}
//
//int main()
//{
//    LNode *L,*L2;
//    create_Link(L,5);
//    L2 = seperate(L);
//    cout << "L1: "<<endl;
//    print_Link(L);
//    cout<< "L2"<<endl;
//    print_Link(L2);
//
//}





////T2.3.13
////两个递增变成一个递减
//typedef struct LNode
//{
//    int data;
//    struct LNode *next;
//}LNode;
//
////创建带头结点的链表
//void create_Link(LNode *&L,int x)
//{
//    L = (LNode*)malloc(sizeof(LNode));
//    LNode *p,*a = L;
//    while(x>0)
//    {
//        p = (LNode*)malloc(sizeof(LNode));
//        cin >> p->data;
//        p->next = NULL;
//        a->next = p;
//        a = p;
//        x--;
//    }
//}
//
////递归输出
//void print_Link(LNode *&L)
//{
//    if(L->next == NULL)
//        return;
//    else
//        cout << L->next->data << endl;
//    print_Link(L->next);
//
//}
//
//
//void combine(LNode *&L1,LNode *&L2)
//{
//    LNode *a1 = L1->next,*a2 = L2->next,*r1 = a1,*r2;
//    L1->next = NULL;
//    while(a1!=NULL && a2 != NULL)
//    {
//        if(a1->data < a2->data)
//        {
//            r1 = a1->next;
//            a1->next = L1->next;
//            L1->next = a1;
//            a1 = r1;
//        }
//        else
//        {
//            r2 = a2->next;
//            a2->next = L1->next;
//            L1->next = a2;
//            a2 = r2;
//        }
//    }
//    while(a1 != NULL)
//    {
//        r1 = a1->next;
//        a1->next = L1->next;
//        L1 ->next = a1;
//        a1 = r1;
//    }
//    while(a2 != NULL)
//    {
//        r2 = a2->next;
//        a2->next = L1->next;
//        L1 ->next = a2;
//        a2 = r2;
//    }
//}
//
//int main()
//{
//    LNode *L1,*L2;
//    create_Link(L1,5);
//    create_Link(L2,6);
//    combine(L1,L2);
//    print_Link(L1);
//}



////T2.3.14
////两个递增AB取相同元素构成C，AB不变（两个指针分别指向最小的元素，小的后移，相等一起后移）
//typedef struct LNode
//{
//    int data;
//    struct LNode *next;
//}LNode;
//
////创建带头结点的链表
//void create_Link(LNode *&L,int x)
//{
//    L = (LNode*)malloc(sizeof(LNode));
//    LNode *p,*a = L;
//    while(x>0)
//    {
//        p = (LNode*)malloc(sizeof(LNode));
//        cin >> p->data;
//        p->next = NULL;
//        a->next = p;
//        a = p;
//        x--;
//    }
//}
//
////递归输出
//void print_Link(LNode *&L)
//{
//    if(L->next == NULL)
//        return;
//    else
//
//
//
//LNode* find_same(LNode *&L1,LNode *&L2)
//{
//    LNode *C,*a1 = L1->next,*b1 = L2->next,*c1;
//    C = (LNode*)malloc(sizeof(LNode));
//    c1 = C;
//    while(a1 != NULL && b1 != NULL)
//    {
//        if(a1->data < b1->data)
//            a1 = a1->next;
//        else if(a1->data > b1->data)
//            b1 = b1->next;
//        else
//        {
//            LNode *s;
//            s = (LNode*)malloc(sizeof(LNode));
//            s->data = a1->data;
//
//            c1 ->next = s;
//            c1 = c1->next;
//            a1 = a1->next;
//            b1 = b1->next;
//        }
//    }
//    c1->next = NULL; //保证新链表最后一个结点指向NULL
//    return C;
//
//}
//
//int main()
//{
//    LNode *A,*B,*C;
//    create_Link(A,5);
//    create_Link(B,6);
//    C = find_same(A,B);
//    print_Link(C);
//}
//
//      cout << L->next->data << endl;
//    print_Link(L->next);
//
//}
//
//
//LNode* find_same(LNode *&L1,LNode *&L2)
//{
//    LNode *C,*a1 = L1->next,*b1 = L2->next,*c1;
//    C = (LNode*)malloc(sizeof(LNode));
//    c1 = C;
//    while(a1 != NULL && b1 != NULL)
//    {
//        if(a1->data < b1->data)
//            a1 = a1->next;
//        else if(a1->data > b1->data)
//            b1 = b1->next;
//        else
//        {
//            LNode *s;
//            s = (LNode*)malloc(sizeof(LNode));
//            s->data = a1->data;
//
//            c1 ->next = s;
//            c1 = c1->next;
//            a1 = a1->next;
//            b1 = b1->next;
//        }
//    }
//    c1->next = NULL; //保证新链表最后一个结点指向NULL
//    return C;
//
//}
//
//int main()
//{
//    LNode *A,*B,*C;
//    create_Link(A,5);
//    create_Link(B,6);
//    C = find_same(A,B);
//    print_Link(C);
//}



////T2.3.15
////两个递增AB取相同元素基于A构成C，AB释放（和上一题类似）
//typedef struct LNode
//{
//    int data;
//    struct LNode *next;
//}LNode;
//
////创建带头结点的链表
//void create_Link(LNode *&L,int x)
//{
//    L = (LNode*)malloc(sizeof(LNode));
//    LNode *p,*a = L;
//    while(x>0)
//    {
//        p = (LNode*)malloc(sizeof(LNode));
//        cin >> p->data;
//        p->next = NULL;
//        a->next = p;
//        a = p;
//        x--;
//    }
//}
//
////递归输出
//void print_Link(LNode *&L)
//{
//    if(L->next == NULL)
//        return;
//    else
//        cout << L->next->data << endl;
//    print_Link(L->next);
//
//}
//
//void find_same(LNode *&L1,LNode *&L2)
//{
//    LNode *a1 = L1->next,*b1 = L2->next,*c1 = L1,*s;
//    free(L2);
//    while(a1 != NULL && b1 != NULL)
//    {
//        if(a1->data < b1->data)
//        {
//            s = a1;
//            a1 = a1->next;
//            free(s);
//        }
//
//        else if(a1->data > b1->data)
//        {
//            s = b1;
//            b1 = b1->next;
//            free(s);
//        }
//        else
//        {
//            c1 ->next = a1;
//            c1 = c1->next;
//            s = a1;
//            a1 = a1->next;
//            free(s);
//            s = b1;
//            b1 = b1->next;
//            free(s);
//        }
//    }
//    if(b1)
//        a1 = b1;
//    while(a1)
//    {
//        s = a1;
//        a1 = a1->next;
//        free(s);
//    }
//    c1->next = NULL;
//}
//
//int main()
//{
//    LNode *A,*B,*C;
//    create_Link(A,5);
//    create_Link(B,6);
//    find_same(A,B);
//    print_Link(A);
//}




////T2.3.16
////判断B是否为A的子链
//typedef struct LNode
//{
//    int data;
//    struct LNode *next;
//}LNode;
//
////创建带头结点的链表
//void create_Link(LNode *&L,int x)
//{
//    L = (LNode*)malloc(sizeof(LNode));
//    LNode *p,*a = L;
//    while(x>0)
//    {
//        p = (LNode*)malloc(sizeof(LNode));
//        cin >> p->data;
//        p->next = NULL;
//        a->next = p;
//        a = p;
//        x--;
//    }
//}
//
//bool judge_son(LNode *L1,LNode *L2)
//{
//    LNode *pre = L1->next,*a1,*b1;
//    while(pre)
//    {
//        a1 = pre;
//        b1 = L2->next;
//        while(a1 && b1)
//        {
//            if(a1->data == b1->data)
//            {
//                a1 = a1 ->next;
//                b1 = b1->next;
//            }
//            else
//            {
//                pre = pre->next;
//                break;
//            }
//        }
//        if (b1 == NULL)
//            return true;
//    }
//    return false;
//}
//
//int main()
//{
//    LNode *A,*B;
//    cout << "Input A:" <<endl;
//    create_Link(A,6);
//    cout <<endl << "Input B:" <<endl;
//    create_Link(B,3);
//    bool a = judge_son(A,B);
//    cout << endl << "The Result Is:" <<endl<< a <<endl;
//}



////T2.3.17
////头结点循环双链表是否对称
//typedef struct DLNode
//{
//    int data;
//    struct DLNode *prior;
//    struct DLNode *next;
//}DLNode;
//
////创建带头结点的循环双链表
//void create_DLink(DLNode *&DL,int x)
//{
//    DL = (DLNode*)malloc(sizeof(DLNode));
//    DL->next = DL;
//    DL->prior = DL;
//    DLNode *p,*a = DL;
//    while(x>0)
//    {
//        p = (DLNode*)malloc(sizeof(DLNode));
//        cin >> p->data;
//        p->next = DL;
//        p->prior = a;
//        a->next = p;
//        DL->prior = p;
//        a = p;
//        x--;
//    }
//}
//
//bool judge_symmetry(DLNode *DL)
//{
//    DLNode *a = DL->next,*b = DL->prior;
//    while(a ->prior != b && a != b)
//    {
//        if(a->data != b->data)
//            return false;
//        else
//        {
//            a = a->next;
//            b = b->prior;
//        }
//    }
//    return true;
//}
//
////输出循环（单/双）链表
//void print_DLink(DLNode *DL)
//{
//    DLNode *a = DL;
//    while(a->next != DL)
//    {
//        cout << a->next->data <<endl;
//        a = a->next;
//    }
//}
//
//int main()
//{
//    DLNode *A;
//    create_DLink(A,5);
//    bool a = judge_symmetry(A);
//    cout << endl << "The Result Is:"<< a <<endl;
//}







////T2.3.19
////循环找到带头结点循环单链表最小值输出并删除结点
//typedef struct CLNode
//{
//    int data;
//    struct CLNode *next;
//}CLNode;
//
//////创建带头结点的循环单链表
//void create_CLink(CLNode *&CL,int x)
//{
//    CL = (CLNode*)malloc(sizeof(CLNode));
//    CLNode *p,*a = CL;
//    while(x>0)
//    {
//        p = (CLNode*)malloc(sizeof(CLNode));
//        cin >> p->data;
//        if(x == 1)
//            p->next = CL;
//        a->next = p;
//        a = p;
//        x--;
//    }
//}
//
//void search_del_min(CLNode *CL)
//{
//    CLNode *pre ,*p ,*minpre,*minp ;
//    int minnum ;
//    while(CL->next != CL)
//    {
//        pre = CL;
//        p = CL->next;
//        minpre = CL;
//        minp = p;
//        minnum = p->data;
//        while(p != CL)
//        {
//            if(p -> data < minnum) //这里的minnum可以用minp->data代替，可以少一个变量
//            {
//                minnum = p->data;
//                minpre = pre;
//                minp = p;
//            }
//            pre = p;
//            p = p->next;
//        }
//        cout << minnum <<endl;
//        minpre->next = minp ->next;
//        free(minp);
//    }
//    free(CL);
//}
//
//int main()
//{
//    CLNode *CL;
//    cout << "Input CL:" <<endl;
//    create_CLink(CL,6);
//    search_del_min(CL);
//}



////T2.3.20
////有表头双向单链表结点有个访问频度域的值（freq），初始为0，没进行一次操作Locate(L,x)，所有值为x的结点freq值加一并排在同等频度结点前面
////思想：从前往后遍历，直到结尾，找到值为x的结点,一定是向前移位的
//////创建带头结点的循环双链表
//typedef struct DLNode
//{
//    int data;
//    int freq = 0;
//    struct DLNode *prior;
//    struct DLNode *next;
//}DLNode;
//
//////创建带头结点的双链表
//void create_DLink(DLNode *&DL,int x)
//{
//    DL = (DLNode*)malloc(sizeof(DLNode));
//    DL->next = DL;
//    DL->prior = DL;
//    DLNode *p,*a = DL;
//    while(x>0)
//    {
//        p = (DLNode*)malloc(sizeof(DLNode));
//        cin >> p->data;
//        p->next = DL;
//        p->prior = a;
//        a->next = p;
//        DL->prior = p;
//        a = p;
//        x--;
//    }
//    DL-> prior -> next = NULL;
//    DL->prior = NULL;
//
//}
//
//void Locate(DLNode *&DL,int x)
//{
//    DLNode *p = DL->next,*q,*r;
//    while(p != NULL)
//    {
//        r = p->next;
//        if(p->data == x)
//        {
//            p->freq +=1;
//            p->prior->next = p->next;
//            if(p->next != NULL)  //考虑p是最后一个结点情况
//                p->next->prior = p->prior;
//
//            q = p -> prior;
//            while(q->freq <= p->freq && q->prior != NULL) //找到第一个比p的次数大的结点q
//                q = q->prior;
//            q->next->prior = p;
//            p ->next = q->next;
//            p->prior = q;
//            q->next = p;
//        }
//        p = r;
//    }
//}
//
////输出循环（单/双）链表
//void print_DLink(DLNode *DL)
//{
//    DLNode *a = DL;
//    while(a->next != NULL)
//    {
//        cout << a->next->data <<endl;
//        a = a->next;
//    }
//}
//
//int main()
//{
//    DLNode *DL;
//    create_DLink(DL,5);
//    Locate(DL,4);
//    print_DLink(DL);
//}








////T2.3.21
////头结点单链表输出倒数第k个值 头指针：List data Link
//////带头结点的单链表
//typedef struct LNode
//{
//    int data;
//    struct LNode *link;
//}LNode;
//
////创建带头结点的链表
//void create_Link(LNode *&L,int x)
//{
//    L = (LNode*)malloc(sizeof(LNode));
//    LNode *p,*a = L;
//    while(x>0)
//    {
//        p = (LNode*)malloc(sizeof(LNode));
//        cin >> p->data;
//        p->link = NULL;
//        a->link = p;
//        a = p;
//        x--;
//    }
//}
//
////需要遍历两次结点，为什么非得遍历一次才满分？效率不是一样的马
////int count_Link(LNode *L)
////{
////    if (L==NULL)
////        return 0;
////    else
////        return count_Link(L->link) + 1;
////}
////
////bool find_n(LNode *L,int k)
////{
////    int n = count_Link(L);
////    LNode *a = L;
////    if(k >= n || k<=0)
////        return false;
////    for(int i = n-k;i > 0;i--)
////            a = a->link;
////    cout << a->data <<endl;
////    return true;
////}
//
//
////这是标答
//bool find_n(LNode *L,int k)
//{
//    LNode *p = L,*q = L;
//    while(k-- > 0)
//    {
//        if(q->link == NULL)
//            return false;
//        q = q->link;
//    }
//    while(q != NULL)
//    {
//        q = q->link;
//        p = p->link;
//    }
//    cout << p->data <<endl;
//    return true;
//}
//
//int main()
//{
//    LNode *List;
//    create_Link(List,5);
//    bool a = find_n(List,5);
//}




////T2.3.22
////找到两个单词相同的后缀起始位置，和T8很像,建议回去看看T2.3.8的解答
//typedef struct LNode
//{
//    char data;
//    struct LNode *next;
//}LNode;
//
////创建带头结点的单链表
//void create_Link(LNode *&L,int x)
//{
//    L = (LNode*)malloc(sizeof(LNode));
//    LNode *p,*a = L;
//    while(x>0)
//    {
//        p = (LNode*)malloc(sizeof(LNode));
//        cin >> p->data;
//        p->next = NULL;
//        a->next = p;
//        a = p;
//        x--;
//    }
//}
//
//
//int count_Link(LNode *L)
//{
//    if (L==NULL)
//        return 0;
//    else
//        return count_Link(L->next) + 1;
//}
//
//LNode *Search_start(LNode *L1,LNode *L2)
//{
//    int a1 = count_Link(L1);
//    int a2 = count_Link(L2);
//    LNode *p1 = L1->next,*p2 = L2->next,*start;
//    if(a1>a2)
//    {
//        for(int i = 0;i <a1-a2;i++)
//            p1 = p1->next;
//    }
//    else if(a1<a2)
//    {
//        for(int i = 0;i<a2-a1;i++)
//            p2 = p2->next;
//    }
//    while(p1 != NULL)
//    {
//        if(p1 == p2)
//            return p1;
//        p1 = p1->next;
//        p2 = p2->next;
//    }
//    return NULL;
//}
//
//int main()
//{
//    LNode *L1,*L2,*start;
//    create_Link(L1,5);
//    create_Link(L2,8);
//    start = Search_start(L1,L2);
//
//}
//




////T2.3.23
////查找带头结点单链表绝对值相等的数，只保留第一个，时间复杂度尽可能高效
//typedef struct LNode
//{
//    int data;
//    struct LNode *next;
//}LNode;
//
////创建带头结点的单链表
//void create_Link(LNode *&L,int x)
//{
//    L = (LNode*)malloc(sizeof(LNode));
//    LNode *p,*a = L;
//    while(x>0)
//    {
//        p = (LNode*)malloc(sizeof(LNode));
//        cin >> p->data;
//        p->next = NULL;
//        a->next = p;
//        a = p;
//        x--;
//    }
//}
//
////递归输出
//void print_Link(LNode *&L)
//{
//    if(L->next == NULL)
//        return;
//    else
//        cout << L->next->data << endl;
//    print_Link(L->next);
//
//}
//
//void del_same(LNode *&L)
//{
//    int n=6;
//    int num[n+1];
//    for(int i = 0;i<n+1;i++)
//        num[i] = 0;
//    LNode *p = L->next,*pre = L;
//    while(p != NULL)
//    {
//        int m = (p->data > 0 ? p->data : -p->data);
//        if(num[m] == 0)
//        {
//            num[m] = 1;
//            pre = pre->next;
//        }
//        else
//        {
//            num[m]++;
//            pre->next = p->next;
//            free(p);
//        }
//        p = pre->next;
//    }
//
//}
//
//int main()
//{
//    LNode *L;
//    create_Link(L,6);
//    del_same(L);
//    print_Link(L);
//}
//






//T3.3.24 做不出来
















////T3.3.25
////头结点单链表（a1,a2.......an）变成 （a1,an,a2,an-1.....）
////先找到中间结点，后半段逆置，前后两段依次插入
//typedef struct LNode
//{
//    int data;
//    struct LNode *next;
//}LNode;
//
////创建带头结点的单链表
//void create_Link(LNode *&L,int x)
//{
//    L = (LNode*)malloc(sizeof(LNode));
//    LNode *p,*a = L;
//    while(x>0)
//    {
//        p = (LNode*)malloc(sizeof(LNode));
//        cin >> p->data;
//        p->next = NULL;
//        a->next = p;
//        a = p;
//        x--;
//    }
//}
//
////递归输出
//void print_Link(LNode *&L)
//{
//    if(L->next == NULL)
//        return;
//    else
//        cout << L->next->data << endl;
//    print_Link(L->next);
//
//}
//
//void resort(LNode *&L)
//{
//    LNode *p = L,*q = L ,*r;
//    while(q->next != NULL) //p为中间结点
//    {
//        p = p->next;
//        q = q->next;
//        if(q->next != NULL)
//            q = q->next;
//    }
//    q = p->next;
//    p ->next = NULL;
//    while(q != NULL)
//    {
//        r = q->next;
//        q->next = p->next;
//        p->next = q;
//        q = r;
//    }
//    q = p->next;
//    p->next = NULL;
//    p = L->next;
//    L->next = NULL;
//    r = L;
//    while(p != NULL) //这里用的尾插法轮流插入头结点所组成的链最后面，标答是第二个链插入第一个链对应位置
//    {
//        r->next = p;
//        r = p;
//        p = p->next;
//        if(q != NULL)
//        {
//            r->next = q;
//            r = q;
//            q = q->next;
//        }
//    }
//    r->next = NULL;
//}
//
//int main()
//{
//    LNode *L;
//    create_Link(L,8);
//    resort(L);
//    print_Link(L);
//}






//*******************************************************************************//
//*******************************************************************************//
//*******************************************************************************//
//***********************************栈和队列************************************//
//*******************************************************************************//
//*******************************************************************************//
//*******************************************************************************//
//T3.1.4
//带头结点的单链表是否对称

//方法（1）
//空间复杂度为1，但是会破坏原链
////类似于T3.3.25
//typedef struct LNode
//{
//    int data;
//    struct LNode* next;
//}LNode;
//
////递归输出
//void print_Link(LNode*& L)
//{
//    if (L->next == NULL)
//        return;
//    else
//        cout << L->next->data << endl;
//    print_Link(L->next);
//
//}
//
////创建带头结点的单链表
//void create_Link(LNode*& L, int x)
//{
//    L = (LNode*)malloc(sizeof(LNode));
//    LNode* p, * a = L;
//    while (x > 0)
//    {
//        p = (LNode*)malloc(sizeof(LNode));
//        cin >> p->data;
//        p->next = NULL;
//        a->next = p;
//        a = p;
//        x--;
//    }
//}
//
//bool judge_symmetry(LNode* L)
//{
//    LNode* p = L, * q = L, * r;  //p,q 从头结点开始，p每次走一步，q每次走两步最终找到中间结点
//    while (q->next != NULL)
//    {
//        p = p->next;
//        q = q->next;
//        if (q->next != NULL)
//            q = q->next;
//    }
//    q = p->next;
//    p->next = NULL;
//    while (q != NULL)  //后半段头插法转置
//    {
//        r = q->next;
//        q->next = p->next;
//        p->next = q;
//        q = r;
//    }
//    q = p->next;
//    p = L->next;
//    while (q != NULL)
//    {
//        if (p->data != q->data)
//            return false;
//        p = p->next;
//        q = q->next;
//    }
//    return true;
//}
//
//int main()
//{
//    LNode* L;
//    create_Link(L, 8);
//    bool a = judge_symmetry(L);
//    cout << a << endl << endl;
//    print_Link(L);
//
//}





////（2）答案，空间复杂度为n，需要建立堆栈
//typedef struct LNode
//{
//    char data;
//    struct LNode* next;
//}LNode;
//
////递归输出
//void print_Link(LNode*& L)
//{
//    if (L->next == NULL)
//        return;
//    else
//{
//    L = (LNode*)malloc(sizeof(LNode));
//    LNode* p, * a = L;
//    while (x > 0)
//    {
//        p = (LNode*)malloc(sizeof(LNode));
//        cin >> p->data;
//        p->next = NULL;
//        a->next = p;
//        a = p;
//        x--;
//    }
//}
//
//bool judge_symmetry(LNode*&L,int n)
//{
//    LNode *p;
//    char Stract[n/2];
//    int top = -1;
//    p = L->next;
//    for(int i = 0;i < n/2;i++)
//    {
//        Stract[++top] =  p->data;
//        p = p->next;
//    }
//    if(n%2 == 1)
//        p = p->next;
//    while(top > -1 )
//    {
//        if(Stract[top--] != p->data)
//            return false;
//        p = p->next;
//    }
//    return true;
//}
//
//int main()
//{
//    LNode* L;
//    create_Link(L, 8);
//    bool a = judge_symmetry(L,8);
//    cout << a << endl << endl;
//    print_Link(L);
//
//}
//        cout << L->next->data << endl;
//    print_Link(L->next);
//}
//
////创建带头结点的单链表
//void create_Link(LNode*& L, int x)
//{
//    L = (LNode*)malloc(sizeof(LNode));
//    LNode* p, * a = L;
//    while (x > 0)
//    {
//        p = (LNode*)malloc(sizeof(LNode));
//        cin >> p->data;
//        p->next = NULL;
//        a->next = p;
//        a = p;
//        x--;
//    }
//}
//
//bool judge_symmetry(LNode*&L,int n)
//{
//    LNode *p;
//    char Stract[n/2];
//    int top = -1;
//    p = L->next;
//    for(int i = 0;i < n/2;i++)
//    {
//        Stract[++top] =  p->data;
//        p = p->next;
//    }
//    if(n%2 == 1)
//        p = p->next;
//    while(top > -1 )
//    {
//        if(Stract[top--] != p->data)
//            return false;
//        p = p->next;
//    }
//    return true;
//}
//
//int main()
//{
//    LNode* L;
//    create_Link(L, 8);
//    bool a = judge_symmetry(L,8);
//    cout << a << endl << endl;
//    print_Link(L);
//
//}





////T3.2.1
////循环队列 tag标志，front，rear，入队、出队算法
//typedef struct sqQueue {
//    int data[MaxSize];  //结构体内不能直接赋值
//    int Front;
//    int Rear;
//    int tag;
//}sqQueue;
//
//
//bool enQueue(sqQueue*& sq, int x)
//{
//    if (sq->Front == sq->Rear && sq->tag == 1)
//        return false;
//    sq->data[sq->Rear] = x;
//    sq->Rear = (sq->Rear + 1) % MaxSize;
//    sq->tag = 1;
//}
//
//bool deQueue(sqQueue*& sq)
//{
//    if (sq->Front == sq->Rear && sq->tag == 0)
//        return false;
//    cout << sq->data[sq->Front] << endl;
//    sq->Front = (sq->Front + 1) % MaxSize;
//    sq->tag = 0;
//}
//
//
//int main()
//{
//    sqQueue* sq;
//    sq = (sqQueue*)malloc(sizeof(sqQueue));
//    sq->Front = 0; sq->Rear = 0; sq->tag = 0;  //这里要初始化
//    enQueue(sq, 1);
//    deQueue(sq);
//}





////T3.3.3
////用栈实现递归（看看答案怎么写的，这不是标答）
//typedef struct Strack{
//        double data[MaxSize];
//        int top;
//    }Strack;
//
//void calculate_p(int n ,double x)
//{
//    Strack *st;
//    st = (Strack*)malloc(sizeof(Strack));
//    st->top = -1;
//    double val0 = 1;
//    double val1 = 2*x;
//    st->data[0] = 1;
//    st->data[1] = 2*x;
//    st->top = 2;
//    while(st->top < n+1)
//    {
//        st->data[st->top] = 2*x*val1-2*(st->top-1)*val0;
//        st->data[st->top] == 0? 0:st->data[st->top]; //避免输出-0
//        val0 = val1;
//        val1 = st->data[st->top];
//        st->top++;
//    }
//    if(n==0)
//        cout << 0 << endl;
//    else if (n==1)
//        cout << 2*x << endl;
//    else
//        cout << st->data[n] <<endl;
//        cout << (-0 == 0)<<endl;
//}
//
//
//int main()
//{
//    calculate_p(4,0);
//}




//*******************************树********************************//

////先序创建二叉树
//typedef char ElemType;
//typedef struct BiTNode {
//    ElemType data;
//    BiTNode* lChild, * rChild;
//}BiTNode, * BiTree;
//
////先序创建二叉树
//void CreateBitTree(BiTree& T)
//{
//    char ch;
//    cin >> ch;
//    if (ch == '#')
//        T = NULL;
//    else {
//        T = (BiTNode*)malloc(sizeof(BiTNode));
//        T->data = ch;
//        CreateBitTree(T->lChild);
//        CreateBitTree(T->rChild);
//    }
//}
//
////先序递归遍历二叉树
//void PreOrder(BiTree& T)
//{
//    if (T != NULL)
//    {
//        cout << T->data << endl;
//        PreOrder(T->lChild);
//        PreOrder(T->rChild);
//    }
//}
//
////中序遍历二叉树
//void InOrder(BiTree& T)
//{
//    if (T != NULL)
//    {
//        InOrder(T->lChild);
//        cout << T->data << endl;
//        InOrder(T->rChild);
//    }
//}
//
////后序遍历二叉树
//void PostOrder(BiTree& T)
//{
//    if (T != NULL)
//    {
//        PostOrder(T->lChild);
//        PostOrder(T->rChild);
//        cout << T->data << endl;
//    }
//}
//
//
////*************//
////*************//
////用栈遍历
////栈的定义
//typedef struct {
//    BiTNode* data[MaxSize];
//    int top;
//}SqStack;
//void InitStack(SqStack& S)
//{
//    S.top = -1;
//}
//bool Push(SqStack& S, BiTNode* x)
//{
//    if (S.top == MaxSize - 1)
//        return false;
//    S.data[++S.top] = x;
//    return true;
//}
//bool Pop(SqStack& S, BiTNode*& x)
//{
//    if (S.top == -1)
//        return false;
//    x = S.data[S.top--];
//    return true;
//}
////栈先序遍历
//void PreOrder2(BiTree T) {
//    SqStack S;
//    InitStack(S);
//    BiTree p = T;
//    while (p || S.top > -1)
//    {
//        if (p)
//        {
//            cout << p->data << endl;
//            Push(S, p);
//            p = p->lChild;
//        }
//        else {
//            Pop(S, p);
//            p = p->rChild;
//        }
//    }
//}
//
////栈中序遍历
//void InOrder2(BiTree T) {
//    SqStack S;
//    InitStack(S);
//    BiTree p = T;
//    while (p || S.top > -1)
//    {
//        if (p)
//        {
//            Push(S, p);
//            p = p->lChild;
//        }
//        else {
//            Pop(S, p);
//            cout << p->data << endl;
//            p = p->rChild;
//        }
//    }
//}
//
////栈后序遍历
//void PostOrder2(BiTree& T)
//{
//    SqStack S;
//    InitStack(S);
//    BiTNode* p = T, * r = NULL;
//    while (p || S.top != -1)
//    {
//        if (p)
//        {
//            Push(S, p);
//            p = p->lChild;
//        }
//        else {
//            p = S.data[S.top];
//            if (p->rChild && p->rChild != r)
//            {
//                p = p->rChild;
//                Push(S, p);
//                p = p->lChild;
//            }
//            else {
//                Pop(S, p);
//                cout << p->data << endl;
//                r = p;
//                p = NULL;
//            }
//        }
//    }
//}
//
//
////通过队列实现层次遍历
////队列初始化操作
//typedef struct {
//    BiTNode* data[MaxSize];
//    int front, rear;
//}SqQueue;
//void InitQueue(SqQueue& Q)
//{
//    Q.front = Q.rear = 0;
//}
//bool EnQueue(SqQueue& Q, BiTNode* x)
//{
//    if ((Q.rear + 1) % MaxSize == Q.front)
//        return false;
//    Q.data[Q.rear] = x;
//    Q.rear = (Q.rear + 1) % MaxSize;
//    return true;
//}
//bool DeQueue(SqQueue& Q, BiTNode*& x)
//{
//    if (Q.front == Q.rear)
//        return false;
//    x = Q.data[Q.front];
//    Q.front = (Q.front + 1) % MaxSize;
//    return true;
//}
//void LevelOrder(BiTree& T)
//{
//    SqQueue Q;
//    InitQueue(Q);
//    BiTree p = T;
//    EnQueue(Q, T);
//    while (!(Q.front == Q.rear))
//    {
//
//        DeQueue(Q, p);
//        cout << p->data << endl;
//        if (p->lChild != NULL)
//            EnQueue(Q, p->lChild);
//        if (p->rChild != NULL)
//            EnQueue(Q, p->rChild);
//    }
//}
//
//
//int main()
//{
//    BiTNode* T;
//    CreateBitTree(T);
//    PreOrder(T);
//    cout << endl << endl;
//    InOrder(T);
//    cout << endl << endl;
//    PostOrder(T);
//    cout << endl << endl;
//    cout << endl << endl;
//    cout << endl << endl;
//    PreOrder2(T);
//    cout << endl << endl;
//    InOrder2(T);
//    cout << endl << endl;
//    PostOrder2(T);
//    cout << endl << endl;
//    LevelOrder(T);
//
//}



////T5.3.4
////自下而上，从右到左遍历
////层次压栈，出栈
////队列初始化操作
//typedef struct BiTNode {
//    char data;
//    BiTNode* lChild, * rChild;
//}BiTNode, * BiTree;
//
//void CreateBitTree(BiTree& T)
//{
//    char ch;
//    cin >> ch;
//    if (ch == '#')
//        T = NULL;
//    else {
//        T = (BiTNode*)malloc(sizeof(BiTNode));
//        T->data = ch;
//        CreateBitTree(T->lChild);
//        CreateBitTree(T->rChild);
//    }
//}
//
//typedef struct {
//    BiTNode* data[MaxSize];
//    int front, rear;
//}SqQueue;
//void InitQueue(SqQueue& Q)
//{
//    Q.front = Q.rear = 0;
//}
//bool EnQueue(SqQueue& Q, BiTNode* x)
//{
//    if ((Q.rear + 1) % MaxSize == Q.front)
//        return false;
//    Q.data[Q.rear] = x;
//    Q.rear = (Q.rear + 1) % MaxSize;
//    return true;
//}
//bool DeQueue(SqQueue& Q, BiTNode*& x)
//{
//    if (Q.front == Q.rear)
//        return false;
//    x = Q.data[Q.front];
//    Q.front = (Q.front + 1) % MaxSize;
//    return true;
//}
////栈的定义
//typedef struct {
//    BiTNode* data[MaxSize];
//    int top;
//}SqStack;
//void InitStack(SqStack& S)
//{
//    S.top = -1;
//}
//bool Push(SqStack& S, BiTNode* x)
//{
//    if (S.top == MaxSize - 1)
//        return false;
//    S.data[++S.top] = x;
//    return true;
//}
//bool Pop(SqStack& S, BiTNode*& x)
//{
//    if (S.top == -1)
//        return false;
//    x = S.data[S.top--];
//    return true;
//}
//
//void ReLevelOrder(BiTree& T)
//{
//    SqStack S;
//    SqQueue Q;
//    InitQueue(Q);
//    InitStack(S);
//    BiTNode* p = T;
//    EnQueue(Q, p);
//    while (Q.front != Q.rear)
//    {
//        DeQueue(Q, p);
//        Push(S, p);
//        if (p->lChild != NULL)
//            EnQueue(Q, p->lChild);
//        if (p->rChild != NULL)
//            EnQueue(Q, p->rChild);
//    }
//    while (S.top != -1)
//    {
//        Pop(S, p);
//        cout << p->data << endl;
//    }
//}
//
//int main()
//{
//    BiTree T;
//    CreateBitTree(T);
//    ReLevelOrder(T);
//}



////T5.3.5
////计算二叉树高度
////递归调用（取左子树和右子树的最大高度）
//typedef struct BiTNode{
//    char data;
//    BiTNode *lChild,*rChild;
//}BiTNode,*BiTree;
//void CreateBitTree(BiTree &T)
//{
//    char ch;
//    cin  >> ch;
//    if(ch == '#')
//        T = NULL;
//    else{
//        T = (BiTNode*)malloc(sizeof(BiTNode));
//        T->data = ch;
//        CreateBitTree(T->lChild);
//        CreateBitTree(T->rChild);
//    }
//
//}
////非递归，利用层次遍历一层层遍历的特点，last表示每层最后一个元素，每次遍历到last就表明多了一层
//typedef struct SqQueue{
//    BiTNode* data[MaxSize];
//    int front;
//    int rear;
//}SqQueue;
//void InitQueue(SqQueue &Q)
//{
//    Q.front =Q.rear =0;
//}
//bool EnQueue(SqQueue &Q,BiTNode *x)
//{
//    if((Q.rear+1)%MaxSize == Q.front)
//        return false;
//    Q.data[Q.rear] = x;
//    Q.rear = (Q.rear +1)%MaxSize;
//    return true;
//}
//bool DeQueue(SqQueue &Q,BiTNode *&x)
//{
//    if(Q.front == Q.rear)
//        return false;
//    x = Q.data[Q.front];
//    Q.front = (Q.front +1)%MaxSize;
//    return true;
//}
//int find_hight2(BiTree T)
//{
//    SqQueue Q;
//    InitQueue(Q);
//    BiTNode *q = T;
//    EnQueue(Q,q);
//    int last = Q.rear,level = 0;
//    while(Q.front != Q.rear)
//    {
//        DeQueue(Q,q);
//        if(q->lChild)
//            EnQueue(Q,q->lChild);
//        if(q->rChild)
//            EnQueue(Q,q->rChild);
//        if(Q.front == last)
//        {
//            level ++;
//            last = Q.rear;
//        }
//    }
//    return level;
//}
//
////递归算法
////int find_hight(BiTree &T)
////{
////    if (T == NULL)
////        return 0;
////    else{
////        return find_hight(T->lChild) > find_hight(T->rChild) ? find_hight(T->lChild) +1 :find_hight(T->rChild) +1;
////    }
////}
//
//int main()
//{
//    BiTree T;
//    CreateBitTree(T);
//    int high = find_hight2(T);
//    cout << high << endl;
//}



////T5.3.6
////先序、中序分别在A[1....n]、B[1....n]中，构建二叉树
//typedef struct BiTNode {
//    char data;
//    BiTNode* lChild, * rChild;
//}BiTNode, * BiTree;
//
//BiTNode* buildBiTree(char *A, char *B, int l1, int h1, int l2, int h2)
//{
//    BiTree T;
//    T = (BiTNode*)malloc(sizeof(BiTNode));
//    T->data = A[l1];
//    int i;
//    for (i = l2; B[i] != A[l1]; i++);
//    int llen = i - l2;
//    int rlen = h2 - i;
//    if (llen)
//        T->lChild = buildBiTree(A, B, l1 + 1, l1 + llen, l2, l2 + llen - 1);
//    else
//        T->lChild = NULL;
//    if (rlen)
//        T->rChild = buildBiTree(A, B, h1 - rlen + 1, h1, h2 - rlen + 1, h2);
//    else
//        T->rChild = NULL;
//    return T;
//}
//void PreOreder(BiTNode* T)
//{
//    if (T)
//    {
//        cout << T->data << endl;
//        PreOreder(T->lChild);
//        PreOreder(T->rChild);
//    }
//}
//int main()
//{
//    BiTree T;
//    char A[10] = { 'z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i' };
//    char B[10] = { 'z', 'b', 'c', 'a', 'e', 'd', 'g', 'h', 'f', 'i' };
//    T = buildBiTree(A, B, 1, 9, 1, 9);
//    PreOreder(T);
//}
//


////T5.3.7
////判断是否为完全二叉树
//typedef struct BiTNode {
//    char data;
//    BiTNode* lChild, * rChild;
//}BiTNode, * BiTree;
//void CreateBiTree(BiTree &T)
//{
//    char ch;
//    cin >> ch;
//    if(ch == '#')
//        T = NULL;
//    else
//    {
//        T = (BiTNode*)malloc(sizeof(BiTNode));
//        T->data = ch;
//        CreateBiTree(T->lChild);
//        CreateBiTree(T->rChild);
//    }
//}
//typedef struct SqQueue{
//    BiTNode*data[MaxSize];
//    int front;
//    int rear;
//}SqQueue;
//void InitQueue(SqQueue &Q)
//{
//    Q.front = Q.rear = 0;
//}
//bool EnQueue(SqQueue &Q,BiTree T)
//{
//    if((Q.rear+1)%MaxSize == Q.front)
//        return false;
//    Q.data[Q.rear] = T;
//    Q.rear = (Q.rear+1)%MaxSize;
//    return true;
//}
//bool DeQueue(SqQueue &Q,BiTree &T)
//{
//    if(Q.front == Q.rear)
//        return false;
//    T = Q.data[Q.front];
//    Q.front = (Q.front+1)%MaxSize;
//    return true;
//}
//bool judgeCompleteBiTree(BiTree &T)
//{
//    SqQueue Q;
//    InitQueue(Q);
//    BiTree q = T;
//    EnQueue(Q,q);
//    if(!T)
//        return true;
//    while(Q.front != Q.rear)
//    {
//        DeQueue(Q,q);
//        if(q)
//        {
//            EnQueue(Q,q->lChild);
//            EnQueue(Q,q->rChild);
//        }
//        else{
//            while(Q.front != Q.rear)
//            {
//                DeQueue(Q,q);
//                if(q)
//                    return false;
//            }
//            return true;
//        }
//    }
//    //答案把return true写在这里，我觉得一样的
//}
//
//int main()
//{
//    BiTree T;
//    CreateBiTree(T);
//    int a = judgeCompleteBiTree(T);
//    cout << a;
//}





////T5.3.8
////计算双分支结点个数
//typedef struct BiTNode {
//    char data;
//    BiTNode* lChild, * rChild;
//}BiTNode, * BiTree;
//void CreateBiTree(BiTree &T)
//{
//    char ch;
//    cin >> ch;
//    if(ch == '#')
//        T= NULL;
//    else{
//        T = (BiTNode*)malloc(sizeof(BiTNode));
//        T->data = ch;
//        CreateBiTree(T->lChild);
//        CreateBiTree(T->rChild);
//    }
//}
////自己写的
//int count_double_node(BiTree &T)
//{
//    if(T->lChild && T->rChild)
//    {
//        return (count_double_node(T->lChild) + count_double_node(T->rChild) +1);
//    }
//    else if(T->rChild)
//        return count_double_node(T->rChild);
//    else if(T->lChild)
//        return count_double_node(T->lChild);
//    else
//        return 0;
//}
////答案上的
//int DsonNodes(BiTree T)
//{
//    if(T == NULL)
//        return 0;
//    else if(T->lChild && T->rChild)
//        return DsonNodes(T->lChild) + DsonNodes(T->rChild) +1;
//    else
//        return DsonNodes(T->lChild) + DsonNodes(T->rChild);
//}
//int main()
//{
//    BiTree T;
//    CreateBiTree(T);
//    int a = count_double_node(T);
//    cout << a << endl;
//}




////T5.3.9
////所有子树左右交换
//typedef struct BiTNode {
//    char data;
//    BiTNode* lChild, * rChild;
//}BiTNode, * BiTree;
//void CreateBiTree(BiTree &T)
//{
//    char ch;
//    cin >> ch;
//    if(ch == '#')
//        T= NULL;
//    else{
//        T = (BiTNode*)malloc(sizeof(BiTNode));
//        T->data = ch;
//        CreateBiTree(T->lChild);
//        CreateBiTree(T->rChild);
//    }
//}
//
//void swapLRChild(BiTree &T)
//{
//    if(T != NULL)
//    {
//        //这三行和下面两行可以交换
//        BiTree p = T->lChild;
//        T->lChild = T->rChild;
//        T->rChild = p;
//
//        swapLRChild(T->lChild);
//        swapLRChild(T->rChild);
//
//    }
//}
//void PreOrder(BiTree &T)
//{
//    if(T != NULL)
//    {
//        cout << T->data <<endl;
//        PreOrder(T->lChild);
//        PreOrder(T->rChild);
//    }
//}
//int main()
//{
//    BiTree T;
//    CreateBiTree(T);
//    swapLRChild(T);
//    PreOrder(T);
//}




////T5.3.10
////找到正序二叉树第k个值
//typedef struct BiTNode {
//    char data;
//    BiTNode* lChild, * rChild;
//}BiTNode, * BiTree;
//void CreateBiTree(BiTree &T)
//{
//    char ch;
//    cin >> ch;
//    if(ch == '#')
//        T= NULL;
//    else{
//        T = (BiTNode*)malloc(sizeof(BiTNode));
//        T->data = ch;
//        CreateBiTree(T->lChild);
//        CreateBiTree(T->rChild);
//    }
//}
//
//typedef struct SqStuck{
//    BiTNode *data[MaxSize];
//    int top;
//}SqStuck;
//void InitStuck(SqStuck &S)
//{
//    S.top = -1;
//}
//bool Push(SqStuck &S,BiTNode *T)
//{
//    if(S.top == MaxSize-1)
//        return false;
//    S.data[++S.top] = T;
//    return true;
//}
//bool Pop(SqStuck &S,BiTNode *&T)
//{
//    if(S.top == -1)
//        return  false;
//    T = S.data[S.top--];
//    return true;
//}
//
////自己写的、用栈
//char find_k_value(BiTree &T,int k)
//{
//    SqStuck S;
//    InitStuck(S);
//    BiTree q = T;
//    int i = 0;
//    while(q || S.top!=-1)
//    {
//        if(q)
//        {
//            if(++i == k)
//                return q->data;
//            Push(S,q);
//            q = q->lChild;
//        }
//        else
//        {
//            Pop(S,q);
//            //上面的if语句放在这是中序
//            q = q->rChild;
//        }
//    }
//    return '#'; //k太大了返回#
//}
////答案、递归
//int i = 1;
//char PreNode(BiTree &T,int k)
//{
//    if(T == NULL)
//        return '#';
//    if(i==k)
//        return T->data;
//    i++;
//    char ch;
//    ch = PreNode(T->lChild,k);
//    if (ch != '#')
//        return ch;  //找到ch后一层层向上传
//    ch = PreNode(T->rChild,k);
//    return ch;  //右子树不管返回什么都原封不动返回
//}
//
//int main()
//{
//    BiTree T;
//    CreateBiTree(T);
//    //find_k_value(T,3);
//    char a = PreNode(T,3);
//    cout << a <<endl;
//}





////T5.3.11
////删除所有值为k的结点及子树
//typedef struct BiTNode {
//    char data;
//    BiTNode* lChild, * rChild;
//}BiTNode, * BiTree;
//void CreateBiTree(BiTree& T)
//{
//    char ch;
//    cin >> ch;
//    if (ch == '#')
//        T = NULL;
//    else {
//        T = (BiTNode*)malloc(sizeof(BiTNode));
//        T->data = ch;
//        CreateBiTree(T->lChild);
//        CreateBiTree(T->rChild);
//    }
//}
//
//typedef struct SqQueue{
//    BiTNode*data[MaxSize];
//    int front;
//    int rear;
//}SqQueue;
//void InitQueue(SqQueue &Q)
//{
//    Q.front = Q.rear = 0;
//}
//bool EnQueue(SqQueue &Q,BiTree T)
//{
//    if((Q.rear+1)%MaxSize == Q.front)
//        return false;
//    Q.data[Q.rear] = T;
//    Q.rear = (Q.rear+1)%MaxSize;
//    return true;
//}
//bool DeQueue(SqQueue &Q,BiTree &T)
//{
//    if(Q.front == Q.rear)
//        return false;
//    T = Q.data[Q.front];
//    Q.front = (Q.front+1)%MaxSize;
//    return true;
//}
//void DelXTree(BiTree& T)
//{
//    if (T)
//    {
//        DelXTree(T->lChild);
//        DelXTree(T->rChild);
//        free(T);
//    }
//}
//void find_x(BiTree& T, char x)
//{
//    SqQueue Q;
//    InitQueue(Q);
//    BiTNode* q = T;
//    EnQueue(Q, q);
//    while (Q.front != Q.rear)
//    {
//        DeQueue(Q, q);
//        if (q->lChild)
//        {
//            if (q->lChild->data == x)
//            {
//                DelXTree(q->lChild);
//                q->lChild = NULL;
//            }
//            else
//            {
//                EnQueue(Q, q->lChild);
//            }
//        }
//        if (q->rChild)
//        {
//            if (q->rChild->data == x)
//            {
//                DelXTree(q->rChild);
//                q->rChild = NULL;
//            }
//            else
//            {
//                EnQueue(Q, q->rChild);
//            }
//        }
//    }
//}
//void LevelOrder(BiTree T)
//{
//    SqQueue Q;
//    InitQueue(Q);
//    BiTree q = T;
//    EnQueue(Q, q);
//    while(Q.front != Q.rear)
//    {
//        DeQueue(Q, q);
//        cout << q->data << endl;
//        if (q->lChild)
//            EnQueue(Q,q->lChild);
//        if (q->rChild)
//            EnQueue(Q,q->rChild);
//    }
//}
//int main()
//{
//    BiTree T;
//    CreateBiTree(T);
//    find_x(T, 'c');
//    LevelOrder(T);
//}


////T5.3.12打印值为x结点的所有祖先
////压栈后序
//typedef struct BiTNode {
//    char data;
//    BiTNode* lChild, * rChild;
//}BiTNode, * BiTree;
////栈的定义
//typedef struct {
//    BiTNode* data[MaxSize];
//    int top;
//}SqStack;
//void InitStack(SqStack& S)
//{
//    S.top = -1;
//}
//bool Push(SqStack& S, BiTNode* x)
//{
//    if (S.top == MaxSize - 1)
//        return false;
//    S.data[++S.top] = x;
//    return true;
//}
//bool Pop(SqStack& S, BiTNode*& x)
//{
//    if (S.top == -1)
//        return false;
//    x = S.data[S.top--];
//    return true;
//}
//
//void CreateBiTree(BiTree& T)
//{
//    char ch;
//    cin >> ch;
//    if (ch == '#')
//        T = NULL;
//    else {
//        T = (BiTree)malloc(sizeof(BiTNode));
//        T->data = ch;
//        CreateBiTree(T->lChild);
//        CreateBiTree(T->rChild);
//    }
//}
//
//void findXParents(BiTree T,char x)
//{
//    SqStack S;
//    InitStack(S);
//    BiTNode* p = T, *r = NULL;
//    while (p || S.top != -1)
//    {
//        if (p)
//        {
//            Push(S, p);
//            p = p->lChild;
//        }
//        else {
//            p = S.data[S.top];
//            if (p->rChild && p->rChild != NULL)
//            {
//                p = p->rChild;
//                Push(S, p);
//                p = p->lChild;
//            }
//            else {
//                Pop(S, p);
//                if (p->data == x)
//                {
//                    while (S.top != -1)
//                    {
//                        Pop(S, p);
//                        cout << p->data << endl;
//                    }
//                    exit(0);
//                }
//                r = p;
//                p = NULL;
//            }
//        }
//    }
//}
//int main()
//{
//    BiTNode* T;
//    CreateBiTree(T);
//    findXParents(T, 'd');
//}





//T5.3.13
//补一下





















////T5.3.14
////层次遍历
////自己根据T5.3.5改的，标答不想看，有兴趣可以看下
//typedef struct BiTNode {
//    char data;
//    BiTNode* lChild, * rChild;
//}BiTNode, * BiTree;
//void CreatBiTree(BiTree& T)
//{
//    char ch;
//    cin >> ch;
//    if (ch == '#')
//        T = NULL;
//    else {
//        T = (BiTNode*)malloc(sizeof(BiTNode));
//        T->data = ch;
//        CreatBiTree(T->lChild);
//        CreatBiTree(T->rChild);
//    }
//}
//typedef struct SqQueue {
//    BiTNode* data[MaxSize];
//    int front;
//    int rear;
//}SqQueue;
//void InitQueue(SqQueue& Q)
//{
//    Q.front = Q.rear = 0;
//}
//bool EnQueue(SqQueue& Q, BiTree T)
//{
//    if ((Q.rear + 1) % MaxSize == Q.front)
//        return false;
//    Q.data[Q.rear] = T;
//    Q.rear = (Q.rear + 1) % MaxSize;
//    return true;
//}
//bool DeQueue(SqQueue& Q, BiTree& T)
//{
//    if (Q.front == Q.rear)
//        return false;
//    T = Q.data[Q.front];
//    Q.front = (Q.front + 1) % MaxSize;
//    return true;
//}
//int CulWidth(BiTree &T)
//{
//    SqQueue Q;
//    InitQueue(Q);
//    if (T == NULL)
//        return 0;
//    BiTree q = T;
//    EnQueue(Q, q);
//    int Count = 0, Max = 0, last = 1;
//    while (Q.front != Q.rear)
//    {
//        DeQueue(Q, q);
//        Count++;
//        if (q->lChild)
//            EnQueue(Q, q->lChild);
//        if (q->rChild)
//            EnQueue(Q, q->rChild);
//        if (Q.front == last)
//        {
//            if (Count > Max)
//                Max = Count;
//            Count = 0;
//            last = Q.rear;
//        }
//    }
//    return Max;
//}
//int main()
//{
//    BiTree T;
//    CreatBiTree(T);
//    int max = CulWidth(T);
//    cout << max << endl;
//}


////T5.3.15
////满二叉树先序pre，求后序post
////自己写的，和标答差不多
//typedef struct BiTNode {
//    char data;
//    BiTNode* lChild, * rChild;
//}BiTNode, * BiTree;

////每次把第一个移到最后一个，其他的向前移一位；   前（n-1）/2         和       除去前（n-1）/2和最后一个剩下的（n-1）/2     继续进行此函数
//void getPost(char *pre /* 这里为什么不能用*&pre */ ,int from,int to,char *&post)
//{
//    if(from != to)
//    {
//        int n = (to-from)/2;
//        char ch = pre[from];
//        for(int i = from;i < to;i++)
//            pre[i] = pre[i+1];
//        pre[to] = ch;
//        getPost(pre,from,from+n-1,post);
//        getPost(pre,from+n,to-1,post);
//    }
//    else
//        post = pre;
//}
//
//int main()
//{
//    char  pre[7] = {'a','b','c','d','e','f','g'};
//    char *post;
//    getPost(pre,0,6,post);
//    for(int i = 0;i < 7;i++)
//        cout << post[i]<<endl;
//}





////T5.3.16
////所有叶子节点从左到右形成单链，最左边是head
//typedef struct BiTNode {
//    char data;
//    BiTNode* lChild, * rChild;
//}BiTNode, * BiTree;
//void CreatBiTree(BiTree& T)
//{
//    char ch;
//    cin >> ch;
//    if (ch == '#')
//        T = NULL;
//    else {
//        T = (BiTNode*)malloc(sizeof(BiTNode));
//        T->data = ch;
//        CreatBiTree(T->lChild);
//        CreatBiTree(T->rChild);
//    }
//}
//
//typedef struct {
//    BiTNode* data[MaxSize];
//    int top;
//}SqStack;
//void InitStack(SqStack& S)
//{
//    S.top = -1;
//}
//bool Push(SqStack& S, BiTNode* x)
//{
//    if (S.top == MaxSize - 1)
//        return false;
//    S.data[++S.top] = x;
//    return true;
//}
//bool Pop(SqStack& S, BiTNode*& x)
//{
//    if (S.top == -1)
//        return false;
//    x = S.data[S.top--];
//    return true;
//}
//
//////使用栈，自己写的
////void LinkLeves(BiTree T, BiTree& head)
////{
////    SqStack S;
////    InitStack(S);
////    BiTree q = T, p = NULL;
////    while (q || S.top != -1)
////    {
////        if (q)
////        {
////            Push(S, q);
////            if (!(q->lChild || q->rChild)) //可以放在下面
////            {
////                if (p == NULL)
////                    head = q;
////                else
////                    p->rChild = q;
////                p = q;
////            }
////            q = q->lChild;
////        }
////        else {
////            Pop(S, q);
////            //上面的if代码可以放在这里
////            q = q->rChild;
////        }
////    }
////    p->rChild = NULL;  //这一句感觉没必要，叶子结点右子节点本来就是NULL
////}
//
////答案，使用递归
//BiTree head = NULL,pre = NULL;
//void LinkLeves(BiTree T)
//{
//    if(T)
//    {
//        if(!(T->lChild ||T->rChild))
//        {
//            if(pre == NULL)
//                head = T;
//            else
//                pre->rChild = T;
//            pre = T;
//        }
//        LinkLeves(T->lChild);
//        LinkLeves(T->rChild);
//    }
//}
//
//int main()
//{
//    BiTree T;
//    CreatBiTree(T);
//    LinkLeves(T);
//    while (head != NULL)
//    {
//        cout << head->data << endl;
//        head = head->rChild;
//    }
//}




////T5.3.17
////判断两个树是否相似
//typedef struct BiTNode {
//    char data;
//    BiTNode* lChild, * rChild;
//}BiTNode, * BiTree;
//void CreatBiTree(BiTree& T)
//{
//    char ch;
//    cin >> ch;
//    if (ch == '#')
//        T = NULL;
//    else {
//        T = (BiTNode*)malloc(sizeof(BiTNode));
//        T->data = ch;
//        CreatBiTree(T->lChild);
//        CreatBiTree(T->rChild);
//    }
//}
//bool judge_same(BiTree T1,BiTree T2)
//{
//    if((T1 == NULL && T2 != NULL) || (T1 != NULL && T2 == NULL) )
//        return false;
//    else if(T1 == NULL && T2 ==NULL)
//        return true;
//    else
//        return(judge_same(T1->lChild,T2->lChild) &&  judge_same(T1->rChild,T2->rChild) );
//}
//
//int main()
//{
//    BiTree T1,T2;
//    CreatBiTree(T1);
//    CreatBiTree(T2);
//    int a = judge_same(T1,T1);
//    cout << a <<endl;
//}





////*********************************************//
////中序线索二叉树*******************************//
//typedef struct BiTNode {
//    char data;
//    int ltag;
//    int rtag;
//    BiTNode* lChild, * rChild;
//}BiTNode, * BiTree;
//void CreatBiTree(BiTree& T)
//{
//    char ch;
//    cin >> ch;
//    if (ch == '#')
//        T = NULL;
//    else {
//        T = (BiTNode*)malloc(sizeof(BiTNode));
//        T->data = ch;
//        T->ltag = T->rtag = 0;
//        CreatBiTree(T->lChild);
//        CreatBiTree(T->rChild);
//    }
//}
//void InThread(BiTree& T, BiTree& pre)
//{
//    if (T)
//    {
//        InThread(T->lChild, pre);
//        if (T->lChild == NULL)
//        {
//            T->lChild = pre;
//            T->ltag = 1;
//        }
//        if (pre != NULL && pre->rChild == NULL)
//        {
//            pre->rChild = T;
//            pre->rtag = 1;
//        }
//        pre = T;
//        InThread(T->rChild, pre);
//    }
//}
////找到中序线索二叉树的第一个结点
//BiTree FirstNode(BiTree T)
//{
//    while (T->ltag == 0) T = T->lChild;
//    return T;
//}
////找到二叉树的中p点的后继结点
//BiTree NextNode(BiTree T)
//{
//    if (T->rtag == 1) return T->rChild;
//    else return (FirstNode(T->rChild));
//}
////中序线索二叉树中序遍历
//void InOrder(BiTree T)
//{
//    for (BiTree p = FirstNode(T); p != NULL; p = NextNode(p))
//        cout << p->data << endl;
//}
//int main()
//{
//    BiTree T, pre = NULL, q;
//    CreatBiTree(T);
//    InThread(T, pre);
//    pre->rChild = NULL;
//    pre->rtag = 1;
//    //q = NextNode(T);
//    //cout << q->data <<endl;
//    InOrder(T);
//}




//T5.3.18
//四种情况：
//1、有右子女就是有子女
//2、无右子女右左子女是左子女
//3、依次向上找父母，如果父母有左子女就是父母的左子女（如果父母的ltag为1就无左子女，父母的lChild就是父母的父母）
//4、ltag为1，lChild不是父母而是NULL，或者到最上的父母ltag为1，lChild为NULL








////T5.3.19
////计算所有叶子节点带权路径之和
//typedef struct BiTNode {
//    int weight;
//    BiTNode* left, * right;
//}BiTNode, * BiTree;
//void CreatBiTree(BiTree& T)
//{
//    int ch;
//    cin >> ch;
//    if (ch == -1)
//        T = NULL;
//    else {
//        T = (BiTNode*)malloc(sizeof(BiTNode));
//        T->weight = ch;
//        CreatBiTree(T->left);
//        CreatBiTree(T->right);
//    }
//}
//typedef struct SqQueue {
//    BiTNode* data[MaxSize];
//    int front;
//    int rear;
//}SqQueue;
//
//////自己写的基于层次遍历，答案也有一个层次遍历，没看，感觉差不多
////void InitQueue(SqQueue& Q)
////{
////    Q.front = Q.rear = 0;
////}
////bool EnQueue(SqQueue& Q, BiTree T)
////{
////    if ((Q.rear + 1) % MaxSize == Q.front)
////        return false;
////    Q.data[Q.rear] = T;
////    Q.rear = (Q.rear + 1) % MaxSize;
////    return true;
////}
////bool DeQueue(SqQueue& Q, BiTree& T)
////{
////    if (Q.front == Q.rear)
////        return false;
////    T = Q.data[Q.front];
////    Q.front = (Q.front + 1) % MaxSize;
////    return true;
////}
////int CulRoate(BiTree root)
////{
////    SqQueue Q;
////    InitQueue(Q);
////    BiTree q = root;
////    int last= 1,WPL = 0,level = 0; //leve初始值为0，如果对应的层数的话就是1，但是带权路径为层数减一
////    EnQueue(Q,q);
////    while(Q.front != Q.rear)
////    {
////        DeQueue(Q,q);
////        if(q->left)
////            EnQueue(Q,q->left);
////        if(q->right)
////            EnQueue(Q,q->right);
////        if(q->left == NULL && q->right == NULL) //这个if和下面的if的顺序 与 level、last的初始值要好好考虑
////            WPL+=(level*q->weight);
////        if(Q.front == last)
////        {
////            level++;
////            last = Q.rear;
////        }
////    }
////    return WPL;
////}
//
//
////递归,参照答案做了点改动
//int wpl_PreOrder(BiTree root,int level) //level本意是层数，但是带权路径为层数减一
//{
//    if(root == NULL)
//        return 0;
//    if(root->left == NULL && root->right == NULL)
//        return level*root->weight;
//    else
//        return (wpl_PreOrder(root->left,level+1)+wpl_PreOrder(root->right,level+1));
//}
//
//
//int main()
//{
//    BiTree root;
//    CreatBiTree(root);
//    int a = wpl_PreOrder(root,0);
//    cout << a <<endl;
//}






////T5.3.20
////转换中缀表达式
//typedef struct BiTNode {
//    char data;
//    BiTNode* lChild, * rChild;
//}BiTNode, * BiTree;
//void CreatBiTree(BiTree& T)
//{
//    char ch;
//    cin >> ch;
//    if (ch == '#')
//        T = NULL;
//    else {
//        T = (BiTNode*)malloc(sizeof(BiTNode));
//        T->data = ch;
//        CreatBiTree(T->lChild);
//        CreatBiTree(T->rChild);
//    }
//}
//
//void BtreeToExp(BiTree T,int level)
//{
//    if(T)
//    {
//        if(T->lChild==NULL && T->rChild==NULL)
//            cout << T->data;
//        else
//        {
//            if(level > 1)
//                cout << '(';
//            BtreeToExp(T->lChild,level+1);
//            cout << T->data;
//            BtreeToExp(T->rChild,level+1);
//            if(level > 1)
//                cout << ')';
//        }
//    }
//}
//void BTreeToE(BiTree root)
//{
//    BtreeToExp(root,1);
//}
//int main()
//{
//    BiTree T;
//    CreatBiTree(T);
//    BTreeToE(T);
//
//}



//
////T5.4.6
////孩子兄弟表示法存储的叶子结点数
////计算无子结点的结点数
//typedef struct CSNode{
//    char data;
//    struct CSNode *firstchild,*nestsibling;
//}CSNode ,*CSTree;
//void CreatCSTree(CSTree &T)
//{
//    char ch;
//    cin >> ch;
//    if(ch=='#')
//        T = NULL;
//    else{
//        T = (CSNode*)malloc(sizeof(CSNode));
//        T->data = ch;
//        CreatCSTree(T->firstchild);
//        CreatCSTree(T->nestsibling);
//    }
//}
//int count_leaves(CSTree T)
//{
//    if(T == NULL)
//        return 0;
//    if(T->firstchild == NULL)
//        return 1+count_leaves(T->nestsibling);
//    else
//        return count_leaves(T->firstchild)+count_leaves(T->nestsibling);
//}
//int main()
//{
//    CSTree T;
//    CreatCSTree(T);
//    int a = count_leaves(T);
//    cout << a << endl;
//}
//





////T5.4.7
////计算孩子兄弟表示法深度
//typedef struct CSNode{
//    char data;
//    struct CSNode *firstchild,*nestsibling;
//}CSNode ,*CSTree;
//void CreatCSTree(CSTree &T)
//{
//    char ch;
//    cin >> ch;
//    if(ch=='#')
//        T = NULL;
//    else{
//        T = (CSNode*)malloc(sizeof(CSNode));
//        T->data = ch;
//        CreatCSTree(T->firstchild);
//        CreatCSTree(T->nestsibling);
//    }
//}
//int culDeep(CSTree T)
//{
//    if(T==NULL)
//        return 0;
//    else
//        return (culDeep(T->firstchild)+1)>culDeep(T->nestsibling) ? (culDeep(T->firstchild)+1) : culDeep(T->nestsibling);
//}
//int main()
//{
//
//    CSTree T;
//    CreatCSTree(T);
//    int a = culDeep(T);
//    cout << a << endl;
//
//}


//T5.4.7
//补一下















////T5.5.6
////判断二叉树是否二叉排序
//typedef struct BiTNode {
//    int data;
//    BiTNode* lChild, * rChild;
//}BiTNode, * BiTree;
//void CreatBiTree(BiTree& T)
//{
//    int ch;
//    cin >> ch;
//    if (ch == -1)
//        T = NULL;
//    else {
//        T = (BiTNode*)malloc(sizeof(BiTNode));
//        T->data = ch;
//        CreatBiTree(T->lChild);
//        CreatBiTree(T->rChild);
//    }
//}
////自己写的，挺丑的
//bool judge_sort(BiTree T)
//{
//    if(T == NULL)
//        return true;
//    if((T->lChild!=NULL&&T->lChild->data>=T->data)||(T->rChild!=NULL&&T->rChild->data<=T->data))
//        return false;
//    else
//        return judge_sort(T->lChild)&&judge_sort(T->rChild);
//}
//int main()
//{
//    BiTree T;
//    CreatBiTree(T);
//    int a = judge_sort(T);
//    cout << a <<endl;
//}
//




////T5.5.8
////判断是否为平衡树
//typedef struct BiTNode {
//    char data;
//    BiTNode* lChild, * rChild;
//}BiTNode, * BiTree;
//void CreatBiTree(BiTree& T)
//{
//    char ch;
//    cin >> ch;
//    if (ch == '#')
//        T = NULL;
//    else {
//        T = (BiTNode*)malloc(sizeof(BiTNode));
//        T->data = ch;
//        CreatBiTree(T->lChild);
//        CreatBiTree(T->rChild);
//    }
//}
//int balence = 1;
//int judge_balence(BiTree T)
//{
//    if(T == NULL)
//    {
//        balence *=1;
//        return 0;
//    }
//    int l = judge_balence(T->lChild);
//    int r = judge_balence(T->rChild);
//    if(l>=r)
//    {
//        if(l-r < 2)
//            balence *= 1;
//        else
//            balence*=0;
//        return l+1;
//    }
//    else
//    {
//        if(r-l < 2)
//            balence *=1;
//        else
//            balence*=0;
//        return r+1;
//    }
//}
//int main()
//{
//    BiTree T;
//    CreatBiTree(T);
//    int level = judge_balence(T);
//    cout << level << "     " << balence <<endl;
//}



////T5.5.10
////排序二叉树从大到小输出大于k的值
//typedef struct BiTNode {
//    int data;
//    BiTNode* lChild, * rChild;
//}BiTNode, * BiTree;
//void CreatBiTree(BiTree& T)
//{
//    int ch;
//    cin >> ch;
//    if (ch == -1)
//        T = NULL;
//    else {
//        T = (BiTNode*)malloc(sizeof(BiTNode));
//        T->data = ch;
//        CreatBiTree(T->lChild);
//        CreatBiTree(T->rChild);
//    }
//}
////并不是只有前中后序，还可以自己设计顺序
//void CoutBiggerK(BiTree T,int k)
//{
//    if(T == NULL)
//        return;
//    CoutBiggerK(T->rChild,k);
//    if(T->data > k)
//        cout << T->data <<endl;
//    CoutBiggerK(T->lChild,k);
//}
//int main()
//{
//    BiTree T;
//    CreatBiTree(T);
//    CoutBiggerK(T,50);
//}



















////T7.2.6
////折半查找递归算法
//typedef struct {
//    int elem[MaxSize];
//    int length;
//}SSTable;
//
////递归
//int BinSearch(SSTable ST, int key, int low, int high)
//{
//    if (low > high)
//        return 0;
//    int mid = (low + high) / 2;
//    if (ST.elem[mid] == key)
//        return mid;
//    if (ST.elem[mid] > key)
//        BinSearch(ST, key, low, mid - 1);
//    else
//        BinSearch(ST, key, mid + 1, high);
//}
////非递归
//int BinSearch2(SSTable ST, int key)
//{
//    int low = 1,high = ST.length,mid;
//
//    while(low <= high)
//    {
//        mid = (low+high)/2;
//        if(ST.elem[mid] == key)
//            return mid;
//        if(ST.elem[mid] > key)
//            high  = mid-1;
//        else
//            low = mid +1;
//    }
//    return -1;
//}
//int main()
//{
//    SSTable ST;
//    ST.length = MaxSize - 1;
//    for (int i = 0; i < MaxSize; i++)
//    {
//        ST.elem[i] = i;
//    }
//    int a = BinSearch2(ST, 5);
//    cout << a << endl;
//}




////T8.3.2
////冒泡
//void BubbleSort(int A[], int n)
//{
//    for (int i = 0; i < n-1; i++)
//        for (int j = 0; j < n-i-1; j++)
//        {
//            if (A[j] > A[j + 1])
//            {
//                int temp = A[j];
//                A[j] = A[j + 1];
//                A[j + 1] = temp;
//            }
//        }
//}
////双向冒泡
//void DoubleBubble(int A[], int n)
//{
//
//    for (int i = 0; i < n / 2; i++)
//    {
//        for (int j = i; j < n -i - 1; j++)
//        {
//            if(A[j] > A[j+1])
//            {
//                int temp = A[j];
//                A[j] = A[j + 1];
//                A[j + 1] = temp;
//            }
//        }
//        for (int k = n - 1 - i; k > i; k--)
//        {
//            if (A[k] < A[k - 1])
//            {
//                int temp  = A[k];
//                A[k] = A[k -1];
//                A[k - 1] = temp;
//            }
//        }
//
//    }
//}
//
//int main()
//{
//    int A[10] = { 9,8,7,6,5,4,3,2,1,0};
//    DoubleBubble(A, 10);
//    for (int i = 0; i < 10; i++)
//        cout << A[i] << endl;
//}





////T8.3.2
////奇数放在偶数前面
//void swap(int &a, int &b)
//{
//    int temp = a;
//    a = b;
//    b = temp;
//}
//void sort(int A[], int n)
//{
//    int i = 0;
//    int j = n - 1;
//    while (i < j)
//    {
//        while (A[i] % 2 != 0)
//            i++;
//        while (A[j] % 2 == 0)
//            j--;
//        swap(A[i], A[j]);
//        i++, j--;
//
//    }
//}
//
//int main()
//{
//    int A[10] = { 9,8,7,6,5,4,3,2,1,0 };
//    sort(A, 10);
//    for (int i = 0; i < 10; i++)
//        cout << A[i] << endl;
//}
//





//void QuickSort(int A[], int low ,int high)
//{
//	int pre = A[low];
//	int i = low, j = high;
//	while (i < j)
//	{
//		while ((A[j] > pre)&&i<j)
//			j--;
//		A[i] = A[j];
//		while ((A[i] < pre) && i<j)
//			i++;
//		A[j] = A[i];
//	}
//	A[i] = pre;
//	QuickSort(A, low, i - 1);
//	QuickSort(A, i + 1, high);
//}
//int main()
//{
//    int A[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	QuickSort(A,0, 9);
//    for (int i = 0; i < 10; i++)
//        cout << A[i] << endl;
//}



////T8.3.6
////小的一半在前，大的一半在后
//void SeperateTwo(int A[],int n)
//{
//    int low1 ,low = 0,high1 ,high = n-1,temp,tag = 1;
//    while(tag)
//    {
//        temp = A[low];
//        low1 = low,high1 = high;
//        while(low1 < high1)
//        {
//            while (A[high1] > temp  &&  low1 < high1) high1--;
//            A[low1] = A[high1];
//            while (A[low1] < temp  &&  low1 < high1) low1++;
//            A[high1] = A[low1];
//        }
//        A[low1] = temp;
//        if(low1 == n/2-1)
//            tag = 0;
//        if(low1 <n/2-1)
//        {
//            low = low1+1;
//        }
//        else
//            high = high1-1;
//    }
//}
//int main()
//{
//    int A[10] = { 3,0,4,2,6,5,1,8,7,9 };
//	SeperateTwo(A,10);
//    for (int i = 0; i < 10; i++)
//        cout << A[i] << endl;
//}





////T8.5.7
////排成RYB顺序
//void RYB(char A[],int n)
//{
//    int i = 0,j = 0,k=n-1;
//    for(j; j <n;j++)
//    {
//        if(A[j]=='R')
//        {
//            char temp = A[i];
//            A[i] = A[j];
//            A[j] = temp;
//            i++;
//        }
//    }
//    for(j=i;j <k;j++) //如果为蓝色必须考虑A[k]是否为B
//    {
//        if(A[k]=='B')
//        {
//            k--;
//            j--;   //抵消j++
//        }
//        if(A[j]=='B' && A[k]!='B')
//        {
//            char temp = A[k];
//            A[k] = A[j];
//            A[j] = temp;
//            k--;
//        }
//
//    }
//}
//
//int main()
//{
//    char A[10] = {'R','B','B','B','Y','Y','Y','R','R','B'};
//	RYB(A,10);
//    for (int i = 0; i < 10; i++)
//        cout << A[i] << endl;
//}






//T8.4.4
//链表简单选择排序
////带头结点的单链表
typedef struct LNode
{
    int data;
    struct LNode* next;
}LNode;

//创建带头结点的链表
void create_Link(LNode*& L, int x)
{
    L = (LNode*)malloc(sizeof(LNode));
    LNode* p, * a = L;
    while (x > 0)
    {
        p = (LNode*)malloc(sizeof(LNode));
        cin >> p->data;
        p->next = NULL;
        a->next = p;
        a = p;
        x--;
    }
}
void SelectSort(LNode*& L)
{
    LNode* p, * pre, * q, * maxp, * maxpre;
    q = (LNode*)malloc(sizeof(LNode));
    q->next = L->next;
    L->next = NULL;
    while (q->next != NULL)
    {
        pre = q;
        p = q->next;
        maxp = p;
        maxpre = pre;
        while (p != NULL)
        {
            if (p->data > maxp->data)
            {
                maxp = p;
                maxpre = pre;
            }
            pre = p;
            p = p->next;
        }
        maxpre->next = maxp->next;
        maxp->next = L->next;
        L->next = maxp;


    }
    free(q);
}
//递归输出
void print_Link(LNode*& L)
{
    if (L->next == NULL)
        return;
    else
        cout << L->next->data << endl;
    print_Link(L->next);

}

int main()
{
    LNode* L;
    create_Link(L, 10);
    SelectSort(L);
    print_Link(L);
}

