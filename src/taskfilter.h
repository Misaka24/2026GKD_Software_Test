#include "sensortaskbase.h"

class taskfilter : public sensortaskbase{
    public:
        taskfilter(int key);
        virtual void run() override;
        virtual void stop() override;
        virtual void callback(int msg) override;

    private:
        atomic<bool> running; //确保多线程读写的安全

};