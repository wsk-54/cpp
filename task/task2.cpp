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

// ��������������
void Creatree(bitree **T, int *a, int len)
{
    for(int i = 0; i < len; i++){
        InsertTree(&(*T), a[i]);
    }
}

// ͳ�ƶ������ĸ߶�
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

// �����������Ҷ�ӽڵ�
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

// �������
void InOrder(bitree *T){
    if(T)
    {
        InOrder(T -> lchild);
        cout << T -> data << " ";
        InOrder(T -> rchild);
    }
}

// ���ƶ�����
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

// ��������
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
// ɾ������
void DeleteData(bitree *T, int data)
{
    bitree *parent;
    bitree *p = Search(T, data);
    if(!p)
        cout << "�����������в����ڸ����� " << data;
    else
    {

    }
}*/

int main(){
    bitree *T = NULL;
    int DataCount, MaxData, i, j;
    do{
        cout << "���������ݸ���(10~20): ";
        cin >> DataCount;
        cout << "�������������ֵ(50~100): ";
        cin >> MaxData;
    }while(DataCount < 10 || DataCount > 20 || MaxData < 50 || MaxData > 100);
    int* a = new int[DataCount];
    for(i = 0; i < DataCount; i++){
        a[i] = rand() % (MaxData + 1);
        // ȷ�����ֲ��ظ�
        for(j = 0; j < i; j++){
            if(a[j] == a[i]){
                i--;
                break;
            }
        }
    }
    cout << "���ظ��������������: ";
    for (i = 0; i < DataCount; i++)
        cout << a[i] << " ";
    Creatree(&T, a, i);
    delete [] a;
    cout << endl << "�������ĸ߶�: " << GetTreeHeight(T) << endl;
    cout << "��������Ҷ�ӽڵ�: ";
    OutLeaf(T);
    cout << endl << "�����������:";
    InOrder(T);
    cout << endl << "��Ҫ���ҵ�����: ";
    int search;
    cin >> search;
    bitree *p = Search(T, search);
    if(!p)
        cout << "�Բ���û���ҵ�" << search;
    else
        cout << "���ҵ�" << p;
    return 0;
}