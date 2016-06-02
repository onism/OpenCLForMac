//
//  main.cpp
//  helloboost
//
//  Created by Junjie on 16/4/28.
//  Copyright © 2016年 Junjie. All rights reserved.
//

#include <iostream>
#include <boost/scoped_ptr.hpp>


int main(int argc, const char * argv[])
{
    
    // insert code here...
    std::cout << "Hello, World!\n";
    boost::scoped_ptr<int> i(new int);
    *i = 1;
    *i.get() = 2;
    i.reset(new int);
    
    return 0;
}