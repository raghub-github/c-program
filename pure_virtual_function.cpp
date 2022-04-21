#include <iostream>
#include <cstring>
using namespace std;

class code
{
protected:
    string title;
    float rating;

public:
    code(string s, float r)
    {
        title = s;
        rating = r;
    }
    virtual void display() = 0;  // do-nothing function --> pure virtual function
};

class codeVideo : public code
{
    float videoLength;

public:
    codeVideo(string s, float r, float vl) : code(s, r)
    {
        videoLength = vl;
    }

    void display()
    {
        cout << "This is an amazing video with title " << title << endl;
        cout << "Ratings: " << rating << " out of 5 stars" << endl;
        cout << "Length of the video is: " << videoLength << " minutes" << endl;
    }
};

class text : public code
{
    int words;

public:
    text(string s, float r, int wl) : code(s, r)
    {
        words = wl;
    }

    void display()
    {
        cout << "This is an amazing tutorial with title " << title << endl;
        cout << "Ratings of this text tutorial: " << rating << " out of 5 stars" << endl;
        cout << "No. of word in this text tutorial is: " << words << " minutes" << endl;
    }
};

int main()
{
    string title;
    float rating, vlen;
    int words;

    // For code video
    title = "code with dj";
    vlen = 6.24;
    rating = 4.6;
    codeVideo djVideo(title, rating, vlen);
    // djVideo.display();

    // For code text
    title = "code with text tutorial";
    words = 622;
    rating = 4.1;
    text djText(title, rating, words);
    // djText.display();

    code *tuts[2];
    tuts[0] = &djVideo;
    tuts[1] = &djText;
    tuts[0]->display();
    tuts[1]->display();
    return 0;
}