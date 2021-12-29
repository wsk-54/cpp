#include <iostream>

using namespace std;

struct bitree
{
    int data;
    bitree *lchild;
    bitree *rchild;
};

void InsertTree(bitree **T, int d)
{
    if(!(*T)){
        (*T) = (bitree *)malloc(sizeof(bitree));
        (*T) -> data = d;
        (*T) -> lchild = NULL;
        (*T) -> rchild = NULL;
    }
    else if(d < (*T) -> data)
        InsertTree(&((*T) -> lchild), d);
    else if(d > (*T) -> data)
        InsertTree(&((*T) -> rchild), d);
}

// 创建二叉排序树
void Creatree(bitree **T, int *a, int len)
{
    for(int i = 0; i < len; i++){
        InsertTree(&(*T), a[i]);
    }
}

// 统计二叉树的高度
int GetTreeHeight(bitree *T)
{
    int lhigh, rhigh, high;
    if(T){
        lhigh = GetTreeHeight(T -> lchild);
        rhigh = GetTreeHeight(T -> rchild);
        if(lhigh >= rhigh)
            high = lhigh + 1;
        else
            high = rhigh + 1;
        return high;
    }
    else
        return 0;
}

// 输出二叉树的叶子节点
void OutLeaf(bitree *T){
    if(!T)
        return;
    else if(!(T -> lchild) && !(T -> rchild))
        cout << T -> data << " ";
    else
    {
        OutLeaf(T -> lchild);
        OutLeaf(T -> rchild);
    }
}

// 中序遍历
void InOrder(bitree *T){
    if(T)
    {
        InOrder(T -> lchild);
        cout << T -> data << " ";
        InOrder(T -> rchild);
    }
}

// 复制二叉树
bitree *copy(bitree *sour)
{
    if(!sour) return NULL;
    else
    {
        bitree *dest;
        dest = (bitree *)malloc(sizeof(bitree));
        dest -> data = sour -> data;
        dest -> lchild = copy(sour -> lchild);
        dest -> rchild = copy(sour -> rchild);
        return dest;
    }
}

// 查找数据
bitree *Search(bitree *T, int data)
{
    if(!T)
        return NULL;
    else{
        if(T -> data == data)
            return T;
        else if(T -> data > data)
            return Search(T -> lchild, data);
        else
            return Search(T -> lchild, data);
    }
}

/*
// 删除数据
void DeleteData(bitree *T, int data)
{
    bitree *parent;
    bitree *p = Search(T, data);
    if(!p)
        cout << "二叉树副本中不存在该数据 " << data;
    else
    {

    }
}*/

int main(){
    bitree *T = NULL;
    int DataCount, MaxData, i, j;
    do{
        cout << "请输入数据个数(10~20): ";
        cin >> DataCount;
        cout << "请输入数据最大值(50~100): ";
        cin >> MaxData;
    }while(DataCount < 10 || DataCount > 20 || MaxData < 50 || MaxData > 100);
    int* a = new int[DataCount];
    for(i = 0; i < DataCount; i++){
        a[i] = rand() % (MaxData + 1);
        // 确保数字不重复
        for(j = 0; j < i; j++){
            if(a[j] == a[i]){
                i--;
                break;
            }
        }
    }
    cout << "不重复的随机数据数列: ";
    for (i = 0; i < DataCount; i++)
        cout << a[i] << " ";
    Creatree(&T, a, i);
    delete [] a;
    cout << endl << "二叉树的高度: " << GetTreeHeight(T) << endl;
    cout << "二叉树的叶子节点: ";
    OutLeaf(T);
    cout << endl << "中序遍历序列:";
    InOrder(T);
    cout << endl << "需要查找的数据: ";
    int search;
    cin >> search;
    bitree *p = Search(T, search);
    if(!p)
        cout << "对不起，没有找到" << search;
    else
        cout << "已找到" << p;
    return 0;
}