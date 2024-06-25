//1.4.1
//1.10
#include <iostream>
#include <cstdlib>

int main()
{
    int cr=10;
    while(cr!=-1){
        std::cout<<cr<<std::endl;
        cr--;
    }
    std::cout << "Hello, Wandbox!" << std::endl;
    return 0;
}

//1.9
#include <iostream>
#include <cstdlib>

int main()
{
    int cr=50,ans=0;
    while(cr!=101){
        ans+=cr;
        cr++;
    }
    std::cout<<ans<<std::endl;
    return 0;
}

//1.11

#include <iostream>
#include <cstdlib>

int main()
{
    int n1, n2;
    std::cout << "Enter two numbers:" << std::endl;
    std::cin >> n1 >> n2;
    int ans = 0;
    if (n1 < n2) {
        ans = n2;
        n2 = n1;
        n1 = ans;
    }
    n1++;
    while (n2 != n1) {
        std::cout << n2 << std::endl;
        n2++;
    }
    return 0;
}
//1.11不知为何在wandbox当中无法正确执行，cin似乎完全失去作用。
