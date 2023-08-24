#include<iostream>
#include<string>
using namespace std;
class publication
{
    protected:
    string title;
    float price;
    public:
    void get_data()
    {
        cout<<"Enter the title : ";
        cin>>title;
        cout<<"Enter the price : ";
        cin>>price;
    } 
    void put_data()
    {
        cout<<"Title : "<<title<<endl;
        cout<<"Price : "<<price<<endl;
    }
};
class book: public publication
{
    protected:
    int pagecount;
    public:
    void get_data()
    {
        cout<<"Enter the number of pages : ";
        cin>>pagecount;
    }
    void put_data()
    {
        cout<<"Page count : "<<pagecount<<endl;
    }
};
class tape : public publication
{
    protected:
    float playtime;
    public:
    void get_data()
    {
        cout<<"Enter the playing time : ";
        cin>>playtime;
    }
    void put_data()
    {
        cout<<"Playing time : "<<playtime<<endl;
    }
};
int main()
{
    book b;
    tape t;
    cout<<"Enter Book details : "<<endl;
    b.publication::get_data();
    b.get_data();
    cout<<"Enter Tape details : "<<endl;
    t.publication::get_data();
    t.get_data();
    cout<<"Book details : "<<endl;
    b.publication::put_data();
    b.put_data();
    cout<<"Tape details : "<<endl;
    t.publication::put_data();
    t.put_data();
    return 0;
}