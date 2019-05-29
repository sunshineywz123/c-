//
//  main.cpp
//  树
//
//  Created by yuanweizhong on 17/4/19.
//  Copyright © 2017年 yuanweizhong. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    def build tree(inorder,postorder)；
    root=TreeNode.new(postoder.pop)
    position=inodrder.index(root.val)
    root.left=build_tree(inorder[0,position],postorder[0,position])
    root.right=build_tree(inorder[position+1,n-1],postorder[position,n-2])
    return root
    end
    
    
}
