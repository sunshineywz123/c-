#include<iostream>
using namespace std;
template<class T>
class sq_LList
{
private:
    int mm;  //容量
    int nn;    //长度
    T *v;   //首地址
public:
    sq_LList(){mm=0;nn=0;return;}
    sq_LList(int);   //建立空顺序表，申请储存空间  ＊＊输入变量为容量mm
    void prt_sq_LList();    //顺序输出顺序表中的元素与顺序表长度 ＊＊输出顺序表长度nn ＊＊输出顺序表所有元素
    int flag_sq_LList();    //检测顺序表的状态
    void ins_sq_LList(int,T);   //在表的指定元素前插入新元素
    void del_sq_LList(int);     //在表中删除指定元素
};
//建立空顺序表，申请储存空间
template<class T>
sq_LList<T>::sq_LList(int m){
    mm=m;
    v=new T[mm];
    nn=0;
    return;
}
//顺序输出顺序表中的元素与顺序表长度
template<class T>
void sq_LList<T>::prt_sq_LList(){
    int i;
    cout<<"nn="<<nn<<endl;
    for(i=0;i<nn;i++)cout<<v[i]<<endl;
    return;
}
//检测顺序表的状态
template<class T>
int sq_LList<T>::flag_sq_LList(){
    if(nn==mm)return(-1);
    if(nn==0)return(0);
    return(1);
}
//在表的指定元素前插入新元素
template<class T>
void sq_LList<T>::ins_sq_LList(int i, T b){
    int k;
    if(nn==mm)
    {
        cout<<"overflow"<<endl;return;
    }
    if(i>nn)i=nn+1;
    if(i<1)i=1;
    for(k=nn;k>i;k--)
        v[k]=v[k-1];
    v[i-1]=b;
    nn=nn+1;
    return;
}
//在表中删除指定元素
template<class T>
void sq_LList<T>::del_sq_LList(int i)
{
    int k;
    if(nn==0){
        cout<<"underflow!"<<endl;return;
    }
    if((i<1)||(i>nn)){
        cout<<"not this element in this list!"<<endl;
        return;
    }
    for(k=i;k<nn;k++)
        v[k-1]=v[k];
    nn=nn-1;
    return;
}
