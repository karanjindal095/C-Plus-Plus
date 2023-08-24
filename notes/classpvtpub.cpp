#include <iostream>
using namespace std;
class person
{
private:
    int s;
    string def;

public: 
    void score()
    {
        s = 200;
        cout << "india score " << s << endl;
    }
    void definition()
    {
        def = "team india won the match";
        cout << def;
    }
};
int main()
{
    person object;
    object.score();
    object.definition();
    return 0;
}