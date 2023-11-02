//
// Created by Shahla Bahmanyar on 31/10/2023.
// for running put this direction in terminal :  cd /Users/shahlabahmanyar/Projects/SoftwareEngineeringFork/Practice/6-2/
// then :  g++ -std=c++11 class.cpp -o class
// then :  ./class  and press entre to run
//
#include <iostream>
#include <list>

using namespace std;

class YouTubeChannel {
public:
    string Name;
    string OwnerName;
    int SubscribersCount;
    list <string> PublishedVideoTitles;
};
int main() {

YouTubeChannel ytChannel;
ytChannel.Name="C++ Programming";
ytChannel.OwnerName="Shahla";
ytChannel.SubscribersCount= 22;
ytChannel.PublishedVideoTitles = { "C++ Course Work", "C++ Practice", "C++ Tasks" };
cout << "Name: " << ytChannel.Name << endl;
cout << "OwnerName: " << ytChannel.OwnerName << endl;
cout << "SubscribersCount: " << ytChannel.SubscribersCount << endl;
cout << "Videos: " << endl;
for(string videoTitle : ytChannel.PublishedVideoTitles){
    cout << videoTitle << endl;
}


    return 0;

}