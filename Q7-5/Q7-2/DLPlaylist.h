#pragma once
#include <iostream>
#include "SongNode.h"
class DLPlaylist {
private:
	SongNode* Index; 
	SongNode* startOfList; 
	SongNode* tailOfList;

public: 
	SongNode* getCurrent(); 
	
	void setCurrent(SongNode* newPos);
	

	void goToNext(); 

	void goToPrev();

	void goToTail();

	void goToStart();

	
	void insertAtBeginning(SongNode* newNode);

	void insertAtEnd(SongNode* newNode); 
	
	void insertBeforeCurrentLocation(int& pos, SongNode* newNode);

	string toString();

	void deleteNode(SongNode* node); 
	
	
	DLPlaylist(SongNode* start, SongNode* tail);

};