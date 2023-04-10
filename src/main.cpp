#include "SingleList.h"

int main()
{
    List list;

    for (int i = 0; i < 10; ++i)
    {
        list.push_back(i);
    }
    
    list.show();

    list.clear();

    list.show();

    return 0;
}