#include <iostream>
#include "DLPlaylist.h"
#include "SongNode.h"

using namespace std;
SongNode* DLPlaylist::getCurrent() { 
	return Index; 
	
} 

void DLPlaylist::setCurrent(SongNode* newPos)
{
	Index = newPos; 
}

void DLPlaylist::goToNext() { 
	Index = (*Index).getNext(); 
} 

void DLPlaylist::goToPrev() {
	Index = (*Index).getPrev(); 
}

void DLPlaylist::goToStart() {
	Index = startOfList; 
}

void DLPlaylist::goToTail() {
	Index = tailOfList;
}


	DLPlaylist::DLPlaylist(SongNode* start, SongNode* tail) {
		Index = start; 
		startOfList = start; 
		tailOfList = tail;
	} 
	

	string DLPlaylist::toString() {
		int i = 1;
		string playlist;
		Index = startOfList;
		while (Index != nullptr) {
			
			playlist = playlist + to_string(i) + ". \"" + Index->getSong() + "\" by " + Index->getArtist() + "\n";
			
			Index = Index->getNext();
			
			i++;
		}
		Index = startOfList;
		return playlist;
	}
	void DLPlaylist::insertAtBeginning(SongNode* newNode) {

		newNode->setNext(startOfList);

		if (startOfList != nullptr) {
			
			startOfList->setPrev(newNode);
		}
		startOfList = newNode;

	}

	void DLPlaylist::insertAtEnd(SongNode* newNode) {
		if (tailOfList != nullptr) {

				newNode->setPrev(tailOfList);

				tailOfList->setNext(newNode);

				tailOfList = newNode;
		}
		else {
			startOfList = newNode;
		}
	}

	void DLPlaylist::insertBeforeCurrentLocation(int& pos, SongNode* newNode) {
		int i = 1;
		Index = startOfList;
		
		while (i < pos) {
			Index = Index->getNext();
			i++;
			}

		newNode->setNext(Index);

		newNode->setPrev(Index->getPrev());
		
		(Index->getPrev())->setNext(newNode);
		
		Index->setPrev(newNode);
			
	}

	void DLPlaylist::deleteNode(SongNode* node) {
		if (node->getPrev() != nullptr) {
			(node->getPrev())->setNext(node->getNext());

		}
		else {
			
			startOfList = node->getNext();
		}
		if (node->getNext() != nullptr) {

			(node->getNext())->setPrev(node->getPrev());
		}
		else {
			
			tailOfList = node->getPrev();
		}
		
		node->setNext(nullptr);
		
		node->setPrev(nullptr);
		
		delete node;
	}
	
