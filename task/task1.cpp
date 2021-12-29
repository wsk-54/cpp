#include <iostream>

using namespace std;

struct bitree
{
    int data;
    bitree *lchild;
    bitree *rchild;
};

void InsertTree(bitree **T, int data)
{
    if(!(*T)){
        (*T) = (bitree *)malloc(sizeof(bitree));
        (*T) -> data = data;
        (*T) -> lchild = NULL;
        (*T) -> rchild = NULL;
    }
    else if(data < (*T) -> data)
        InsertTree(&((*T) -> lchild), data);
    else if(data > (*T) -> data)
        InsertTree(&((*T) -> rchild), data);
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

int main(){
    bitree *T = NULL;
    int DataCount, MaxData, i, j;
    do{
        cout << "请输入数据个数(10~20): ";
        cin >> DataCount;
        cout << "请输入数据最大值(50~100): ";
        cin >> MaxData;
    }while(DataCount < 10 || DataCount > 20 || MaxData < 50 || MaxData > 100);
    int a[DataCount];
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
    cout << endl << "二叉树的高度: " << GetTreeHeight(T) << endl;
    cout << "二叉树的叶子节点: ";
    OutLeaf(T);
    cout << endl << "中序遍历序列:";
    InOrder(T);
    return 0;
}