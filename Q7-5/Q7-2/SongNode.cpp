#include <iostream>
#include "SongNode.h"
using namespace std;



	SongNode::SongNode(string s, string a) {
		songName = s;
		artistName = a;
		prevSong = NULL;
		nextSong = NULL;
	} 
	string SongNode::getSong() { 
		return songName;
	} 

	string SongNode::getArtist() {
		return artistName;
	}
	void SongNode::setNext(SongNode* nxt)
	{
		nextSong = nxt; 
	}

	SongNode* SongNode::getNext() { 
		return nextSong;
	} 

	void SongNode::setPrev(SongNode* prev)
	{
		prevSong = prev;
	}

	SongNode* SongNode::getPrev() {
		return prevSong;
	}






