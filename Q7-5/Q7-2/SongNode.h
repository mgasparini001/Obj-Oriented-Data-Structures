#pragma once
#include <string>
#include <iostream>
using namespace std;

class SongNode {
private:
	string songName;
	string artistName;
	SongNode* prevSong;
	SongNode* nextSong;

public: 
	SongNode(string s, string a); 
	string getSong(); 
	
	string getArtist();
	void setNext(SongNode* nxt);

	SongNode* getNext(); 

	void setPrev(SongNode* prev);

	SongNode* getPrev();

	

};
