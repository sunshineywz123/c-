#include "Binary_Tree.h"
int main(){
    Binary_Tree<int> b(100);
    cout<<"输入各结点值（－1为结束符值）："<<endl;
    b.creat_Binary_Tree(-1);
    cout<<"前序遍历："<<endl;
    b.pretrav_Binary_Tree();
    cout<<"中序遍历："<<endl;
    b.intrav_Binary_Tree();
    cout<<"后序遍历："<<endl;
    b.postrav_Binary_Tree();
    return 0;
}
