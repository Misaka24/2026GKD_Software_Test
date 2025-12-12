#include "taskfilter.h"
#include <iostream>
#include <thread>

taskfilter::taskfilter(int key) : sensortaskbase(key){
    running.store(false);
}

void taskfilter::run(){
    running=true;
    while(running){
        if (p_in&&p_out&&*p_in != 0){
            int t = *p_in;
            *p_in = 0;
            *p_out = t + 1;

            cout<<"write filter"
        }
    }
}
