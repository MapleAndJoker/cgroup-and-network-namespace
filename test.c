
#include<stdlib.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<string.h>
#include "create_service.h"
#include "network_namespace.h"
int main()
{
    /* char* py_path = "/usr/lib/aa.py";
    test_in_linux(py_path);
    create("aa", "/usr/lib/aa.py","fcc");
    modify_limit("aa","CPUQuota","40%"); */
    //create_network_namespace("abcd");//一次性命令，已创建同名不能再创建
    //create_default_veth_pair();
    //create_specified_veth_pair("aaa","bbb");//一次性命令，已创建同名不能再创建
    //veth_into_namespace("aaa","abcd");
    config_ip_online("abcd","aaa","10.10.1.10/24");
    return 0;
}