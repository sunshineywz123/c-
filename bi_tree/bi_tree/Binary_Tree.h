
#include<iostream>
using namespace std;
//定义二叉链表类型
template<class T>
struct Btnode{
    T d;
    Btnode *lchild;
    Btnode *rchild;
};
//二叉链表类
template<class T>    //类模版，T为虚拟类型
class Binary_Tree{
private:
    Btnode<T> *BT;   //根结点指针
public:
    Binary_Tree(T){BT=NULL;return;}  //初始化
    void creat_Binary_Tree(T);   //生成二叉链表
    void pretrav_Binary_Tree(); //前序遍历
    void intrav_Binary_Tree();  //中序遍历
    void postrav_Binary_Tree(); //后序遍历
};
//生成二叉链表
template<class T>
void Binary_Tree<T>::creat_Binary_Tree(T end){
    Btnode<T>*p;
    T x;
    cin>>x; // 输入第一个结点值
    if(x==end)return;   //第一个值为结束符值
    p=new Btnode<T>;    //申请二叉表根结点
    p->d=x;p->lchild=NULL;p->rchild=NULL;
    BT=p;   //二叉树根结点
    creat(p,1,end); //输入左子结点值
    creat(p,2,end); //输入右子结点值
    return;
}
template<class T>
void creat(Btnode<T> *p,int k,T end){
    Btnode<T> *q;
    T x;
    cin>>x; //输入结点值
    if(x!=end)  //结点值为非结束符值
    {
        q=new Btnode<T>;    //申请一个二叉链表结点
        q->d=x;q->lchild=NULL;q->rchild=NULL;
        if(k==1)p->lchild=q;    //链接到左子树
        if(k==2)p->rchild=q;    //链接到右子树
        creat(q,1,end);     //输入左子结点值
        creat(q,2,end); //输入右子结点值
    }
    return;
}
//前序遍历
template<class T>
void Binary_Tree<T>::pretrav_Binary_Tree(){
    Btnode<T> *p;
    p=BT;    //从根结点开始前序遍历
    pretrav(p);
    cout<<endl;
    return;
}
template<class T>
void pretrav(Btnode<T> *p){
    if(p!=NULL){
        cout<<p->d<<""; //输出根结点
        pretrav(p->lchild); //前序遍历左子树
        pretrav(p->rchild); //前序遍历右子树
    }
    return;
}
//中序遍历
template<class T>
void Binary_Tree<T>::intrav_Binary_Tree(){
    Btnode<T>*p;
    p=BT;
    intrav(p);
    cout<<endl;
    return;
}
template<class T>
void intrav(Btnode<T>*p){
    if(p!=NULL){
        intrav(p->lchild);
        cout<<p->d<<"";
        intrav(p->rchild);
    }
    return;
}
//后序遍历
template<class T>
void Binary_Tree<T>::postrav_Binary_Tree(){
    Btnode<T>*p;
    p=BT;
    postrav(p);
    cout<<endl;
    return;
}
template<class T>
void postrav(Btnode<T>*p){
    if(p!=NULL){
        postrav(p->lchild);
        postrav(p->rchild);
        cout<<p->d<<"";
    }
    return;
}
