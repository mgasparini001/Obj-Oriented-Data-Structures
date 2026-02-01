#include <iostream>
#include "SongNode.h"
#include "DLPlaylist.h"
#include <string>
#include <list>
using namespace std;
int main() {
	
	string name;

	int pos=0;

	cout << "Enter the name of a new song: ";
	getline(cin, name);

	string artist;
	cout << "Enter the artist: ";
	getline(cin,artist);

	
	SongNode* song1 = new SongNode(name, artist); 

	DLPlaylist playlist(song1, song1);

	cout << playlist.toString();

	int size = 1;

	while (true) {
		cout << "Would you like to:"
			<< "\n(1)add another song to the playlist\n(2)remove a song\n(3)neither ";
		int answer;
		cin >> answer;

		if (answer == 1) {
			cout << "Enter the name of a new song: ";
			getline(cin, name);
			cout << "Enter the artist: ";
			getline(cin, artist);
			cout << "What number would you like to this song to be on the playlist? ";
			cin >> pos;

			SongNode* song = new SongNode(name, artist);
			

			if (pos == 1) {
				playlist.insertAtBeginning(song);
			}
			else if (pos > size) {
				playlist.insertAtEnd(song);

			}
			else {
				playlist.insertBeforeCurrentLocation(pos, song);
			}

			size++;

		}
		
		else if (answer == 2) {
			if (size < 1) {
			cout << "Playlist already empty\n";
			continue;
		}
			cout << "What number do you want to delete? ";
			cin >> pos;
			playlist.goToStart();
			SongNode* currentIndex = playlist.getCurrent();
			
			int i = 1;
			while (currentIndex != nullptr && i < pos) {
				currentIndex = currentIndex->getNext();
				i++;
			}

			if (currentIndex != nullptr) {
				playlist.deleteNode(currentIndex);
				size--;
			}
			
		}
		else {
			cout << playlist.toString();
			break;
		}

	}









	return 0;
}