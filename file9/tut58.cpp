#include <iostream>
using namespace std;


class CWH
{
protected:
    string title;
    float rating;

public:
    CWH(string s, float r)
    {
        title = s;
        rating = r;
    };
    virtual void display() = 0; // do-nothing function - Pure virtual function
};

class CWHVideo : public CWH
{
    float videoLength;

public:
    CWHVideo(string s, float r, float vl) : CWH(s, r)
    {
        videoLength = vl;
    }
    void display(){
        cout<< "This is an amazing video with title"<< title<<endl;
        cout<< "Ratings: "<<rating<<" out of 5 stars"<<endl;
        cout<< "length of the video is "<<videoLength<< " minutes."<<endl;
    }
};

class CWHText : public CWH
{
    int wordCount;

public:
    CWHText(string s, float r, int wc) : CWH(s, r)
    {
        wordCount = wc;
    }
    void display(){
        cout<< "This is an amazing text with title"<< title<<endl;
        cout<< "Ratings: "<<rating<<" out of 5 stars"<<endl;
        cout<< "Words of this text is "<<wordCount<< " words."<<endl;
    }
};

int main()
{
    cout<< "Abstract Base Class & Pure Virtual Functions in C++ "<<endl;  

    string title;
    float rating, vlen;
    int words;

    // code for CWH video
    title = "Django tuts";
    vlen = 3.44;
    rating = 4.32;
    CWHVideo djVideo(title, rating, vlen);
    // djVideo.display();

    // code for CWHText
    title = "Django tutorial text";
    words = 908;
    rating = 4.55;
    CWHText djText(title, rating, words);
    // djText.display();

    CWH *tuts[2];
    tuts[0] = &djVideo;
    tuts[0]->display();

    cout<< ""<<endl;

    tuts[1] = &djText;
    tuts[1]->display();


    return 0;
}