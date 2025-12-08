#include <iostream>
#include <thread>
#include <atomic>  //用于多线程安全

using namespace std;

class sensortaskbase{
    public:
        int key;
        int *p_in;
        int *p_out;

    sensortaskbase(int key){
    p_in = nullptr;
    p_out = nullptr;
    }

    virtual ~sensortaskbase(){
    }

    virtual void run() = 0;
    virtual void stop() = 0;
    virtual void callback(int msg) = 0;
};

