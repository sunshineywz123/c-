
#include "sq_LList.h"
int main(){

    
    sq_LList<double> s1(100);
    cout<<"第1次输出顺序表对象s1:"<<endl;
    s1.prt_sq_LList();
    s1.ins_sq_LList(1, 1.5);
    s1.ins_sq_LList(2, 2.5);
    s1.ins_sq_LList(4, 3.5);
    cout<<"第2次输出顺序表对象s1:"<<endl;
    s1.prt_sq_LList();
    s1.del_sq_LList(2);
    cout<<"第3次输出顺序表对象s1:"<<endl;
    s1.prt_sq_LList();
    return 0;
}
