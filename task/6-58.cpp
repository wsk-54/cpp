#include<stdio.h>
#include<stdlib.h>
#include<iostream>
typedef char ElemType;

typedef struct ThreadedBTree{
    struct ThreadedBTree *lchild;
    int LTag;       //LTag为0，lchild指向节点的左孩子；LTag为1，lchild指向节点的前驱
    ElemType data;
    int RTag;       //RTag为0，rchild指向节点的右孩子；RTag为1，rchild指向节点的后继
    struct ThreadedBTree *rchild;
}*TBTList, TBTNode;

void PreCreatBTree(TBTList *T){       //先序构造二叉树
    ElemType elem;
    scanf("%s", &elem);
    if(*T != NULL || elem != '#'){
        if(!(*T = (TBTList)malloc(sizeof(TBTNode))))
            exit(-1);
        (*T)->data = elem;
        (*T)->lchild = NULL;
        (*T)->rchild = NULL;
        (*T)->LTag = 0;
        (*T)->RTag = 0;
        PreCreatBTree(&(*T)->lchild);
        PreCreatBTree(&(*T)->rchild);
    }
}

void BTreeDestroy(TBTList T){                       //删除树
    if(T->LTag == 0 && T->lchild != NULL){
        BTreeDestroy(T->lchild);
    }
    if(T->RTag == 0 && T->rchild != NULL){
        BTreeDestroy(T->rchild);
    }
    free(T);
}

void InOrderThread(TBTList T, TBTList &pre){      //递归线索化
    if(T != NULL){
        InOrderThread(T->lchild, pre);
        if(T->lchild == NULL){
            T->LTag = 1;
            T->lchild = pre;
        }
        if(pre != NULL && pre->rchild == NULL){
            pre->RTag = 1;
            pre->rchild = T;
        }
        pre = T;
        InOrderThread(T->rchild, pre);
    }
}

TBTList Search(TBTList T, ElemType target){      //中序线索二叉树查找
    TBTList temp;
    temp = T;
    while (temp != NULL)
    {
        if(temp->data == target){
            return temp;
        }
        else if(temp->LTag == 0){
            temp = temp->lchild;
        }
        else{
            temp = temp->rchild;            //指向temp的后继
            while (temp->RTag == 1)         //temp的后继没有右孩子,还是后继
            {
                temp = temp->rchild;
            }
            temp = temp->rchild;        //指向temp的右孩子
        }
    }
    return NULL;
}

void Insert(TBTList p, TBTList x){              //在p下插入只有左子树的x
    if(x->rchild != NULL){
        printf("插入的中序线索二叉树不符合规范\n");
        return;
    }
    TBTList temp;
    temp = p->lchild;
    if(p->LTag == 1){
        p->LTag = 0;
        p->lchild = x;
        x->RTag = 1;
        x->rchild = p;
        TBTList pnew = x;
        while (pnew->lchild != NULL)
        {
            pnew = pnew->lchild;
        }
        pnew->LTag = 1;
        pnew->lchild = temp;
    }
    else{
        p->lchild = x;
        x->rchild = temp;
    }
}

void show(TBTList T){
    TBTList temp;
    temp = T;
    while (temp != NULL)
    {
        printf("%c ", temp->data);
        if(temp->LTag == 0){
            temp = temp->lchild;
        }
        else{
            printf("# ");
            if(temp->RTag == 1){
                printf("# ");
            }
            temp = temp->rchild;
            if(temp == NULL){
                printf("# ");
                return;
            }
            if(temp->LTag == 0){
                while (temp->RTag == 1 )
                {
                    printf("# ");
                    temp = temp->rchild;
                    if(temp == NULL){
                        return;
                    }
                }
                temp = temp->rchild;
            }
        }
    }
}

int main(){
    printf("请按先序次序输入二叉树节点的值，中止符号为#\n");
    TBTList T, null;
    T = NULL;
    null = NULL;
    PreCreatBTree(&T);
    InOrderThread(T, null);
    printf("请按先序次序输入要插入的只有左子树的第二个二叉树的节点的值，中止符号为#\n");
    TBTList x;
    x = NULL;
    null = NULL;
    PreCreatBTree(&x);
    InOrderThread(x, null);
    printf("请输入待插入的节点的值\n");
    ElemType c;
    TBTList target;
    fflush(stdin);      //清空输入缓冲区
    scanf("%c", &c);
    target = Search(T, c);
    if(target == NULL){
        printf("未找到该节点\n");
        system("pause");
        return 0;
    }
    else{
        Insert(target, x);
    }
    show(T);
    printf("\n");
    BTreeDestroy(T);
    system("pause");
    return 0;
}