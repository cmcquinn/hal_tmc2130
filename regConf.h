#include <string>
#include <iostream>
#include <map>

using namespace std;

class regConf
{
public:
    regConf()
    {

    }

    ~regConf()
    {

    }

private:
    typedef struct
    {
        string name;
        char addr;
        char value[4];
    } register_t;

    map<string, register_t> reg_map;
};