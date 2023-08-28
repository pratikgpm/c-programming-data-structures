#include <iostream>
using namespace std;

class YouTube
{
protected:
    string channelName;
    float rating;

public:
    YouTube(string a, float b) : channelName(a), rating(b)
    {
    }
    void display(void)
    {
        cout << "Bogus Code " << endl;
    }
};

class videos : virtual public YouTube
{
protected:
    int video_length = 0;

public:
    videos(int l, string a, float r) : YouTube(a, r), video_length(l)
    {
    }
     void display(void)
    {
        cout << "Videos YouTube channel name is : " << channelName << endl;
        cout << "Videos YouTube channel rating is : " << rating << endl;
        cout << "Videos YouTube channel Length is : " << video_length << endl;
    }
};

class text : virtual public YouTube , public videos
{
protected:
    int words = 0;

public:
    text(int w, string s, float f,int lk) : YouTube(s, f), words(w),videos(lk,s,f)
    {
    }
    void display(void)
    {
        cout << "Text YouTube channel name is : " << channelName << endl;
        cout << "Text YouTube channel rating is : " << rating << endl;
        cout << "Text YouTube channel Length is : " << words << endl;
    }
};

int main()
{
    // Data variables
    string channel = "Daily Routine";
    int rating = 5;
    int word_count = 365;
    float rate = 4.5;

    // Class object declaration
    // (int w, string s, float f,int lk
    text mytext(word_count, channel,rate,999);
    // mytext.display();

    YouTube *tuts;

    tuts = &mytext;
   // tuts->display();

    // Data Variables
    int vidl = 53;
    string tit = "Lets_Try_This";
    float rt = 4.69;

    videos myvideos(vidl, tit, rt);
    YouTube *sec;
    sec = &myvideos;
   // sec->display();
    videos *dd;
    dd= &mytext;
    mytext.display();
    cout<<"\n";
    dd->display();

    return 0;
}