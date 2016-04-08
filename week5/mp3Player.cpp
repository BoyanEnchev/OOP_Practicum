#include "stdafx.h"
#include <iostream>
using namespace std;


class Song 
{
    public:
        Song(char* name, float length);
        Song(char* name, float length, char* artist);
		Song();
		~Song();
        const char* getName() const;
		void setName(char* name);
        float getLength() const;
		void setLength(float length);
        const char* getArtist() const;
		void setArtist(char* artist);
    private:
        char* name; // ��� �� ������
        float length;//������� �� �������
        char* artist; // ��� �� ������(��� �������, ����� ��������� �������)
};
Song :: Song(char* Name, float Length){
		this->name = new char[strlen(Name)+1];
		strcpy_s(name, strlen(Name)+1, Name);
		this->length = Length;
	}
Song ::  Song(char* Name, float Length, char* Artist){
		name = new char[strlen(Name)+1];
		strcpy_s(name, strlen(Name)+1, Name);
		length = Length;
		artist = new char[strlen(Artist)+1];
		strcpy_s(artist, strlen(Artist)+1, Artist);
	}
Song :: Song(){
    this->artist = NULL;
    this->length = 0;
    this ->name = NULL;
}

const char* Song :: getName() const  {
	return name;
}
void Song :: setName(char* name){
	this->name = new char[strlen(name)+1];
	strcpy_s(this->name, strlen(name)+1 , name);
}
float Song :: getLength() const {
	return this->length;
}
void Song :: setLength(float length) {
	this->length = length;
}
const char* Song :: getArtist() const  {
	return artist;
}
void Song :: setArtist(char* artist){
	this->artist = new char[strlen(artist)+1];
	strcpy_s(this->artist, strlen(artist)+1 , artist);
}




class Album
{
    public:
        void addSong(const Song); // ������ �������� ����� ��� �����, ������ �� �� ������� ���� ������� �� �� ���� � ��� ���������� ��� �����
        void removeSong(const char* name); // ���� �������� �� ������ ����� �� �������
        void removeSong(const int index);  //�� ������ �� ������(�������� �� 0)
		int getCountSongs();
		int getCapacity();
		void setCapacity(int capacity);
		void printSongs();
		Song* getSongs();
		void setSongs(Song* songs, int capacity);
		Song getSongByIndex(int index);
        Album(char* name);
        Album(const char* name, Song* songs, int capacity, int size);
		Album();
		~Album();

    private:
        Song* songs;
        char* name; // ����� �� ������;
        int countSongs;
		int capacity;

};

Album :: Album(){
	   songs = NULL;
       name = NULL;
       countSongs = 0;
	   capacity = 0;
}
Album :: ~Album(){
	   delete[] name;
	   delete[] songs;
}
Album :: Album(char* name){
	this->name = new char[strlen(name)+1];
	strcpy_s(this->name, strlen(name)+1, name);
	this->countSongs = 0;
}
Album :: Album(const char* name, Song* songs, int capacity, int size){
	this->name = new char[strlen(name)+1];
	strcpy_s(this->name, strlen(name)+1, name);
	this->songs = new Song[capacity];
	this->capacity = capacity;
	this->countSongs = size;
	for(int i=0; i<size; ++i) this->songs[i] = songs[i]; 
}

void Album :: addSong(const Song song){
	this->songs[countSongs] = song;
	countSongs++;
}
void Album :: removeSong(const char* name){ // ���� �������� �� ������ ����� �� �������
	int removed = 0;
	for(int i=0; i<countSongs; i++){
		
		if ( strcmp(this->songs[i].getName(),name) == 0 ) {
			
			for(int j=i; j<countSongs-1; j++){
				songs[j] = songs[j+1];
			}
			
			removed++;
		}
	}
	countSongs -= removed;
}
void Album :: removeSong(const int index){ // ���� �������� �� ������ ����� �� �������
	int removed = 0;
	for(int i=index; i<countSongs-1; i++) songs[i] = songs[i+1];
	countSongs--;
}


int Album :: getCountSongs(){
	return countSongs;
}
int Album :: getCapacity(){
	return capacity;
}
void Album :: setCapacity(int capacity){
	this->capacity = capacity;
}
Song* Album :: getSongs(){
	return this->songs;
}
void Album :: setSongs(Song* songs, int capacity){
	for(int i=0; i<capacity; ++i) this->songs[i] = songs[i];
}
Song Album :: getSongByIndex(int index){
	return this->songs[index];
}
void Album :: printSongs(){
	for(int i=0; i<countSongs; i++) cout<<"name: "<<songs[i].getName()<<"   lenght: "
									<<songs[i].getLength()<<"   artist: "<<songs[i].getArtist()<<endl;
}



class MP3Player 
{
    public:
		Album* albums;
        MP3Player();
		~MP3Player();
        MP3Player(char* name, Song* songs, int songsCapacity, int size);
        MP3Player(char* name, Album* albums, int albumsCapacity, int size);
        MP3Player(char* name, Song* songs, Album* albums, int songsCapacity, int albumsCapacity, int songsSize, int albumsSize);

		
        void addSong(Song);
        void addSongs(Song* songs, int size);
        void addAlbum(Album album,  int  sizeSongs);
        void removeAlbum(char* name);
		Song getSongByIndex(int index);
		Song getSongFromAlbum(Album album, int index);
		

        void charge();
		void batteryIsFull();
        void stopCharge();
        void play(Song song); /* ����� �����, �� ��� ��������� �� ����� ����� ������� �������:
        ��� ��������� � ��-����� �� 15 % ������ �� ���� �������� ���������, �� ��������� ������.
        ��� ��������� �� ������� �� ���� ������� ������� ������� � �����( ����� �� ���� ������ ����, ����� �� �����, ����� � ����� 2.22 ����� 2 % �� ���������)
        ��� MP3Player-� �� ������� � ������� �� ����� �� ������� �����.
        ��� ������ ����� ���� �� ���� �� ������ �����.
        ��� shuffle e true ������ �� �� ����� ������ �����.
        ��� shuffle e false ������ �� �� ����� ������� ���������� �����.*/

	private:
		Song* songs;
		char* name;
		int battery;
		bool isCharging;
		int countSongs;
		int songsCapacity;
		int countAlbums;
		int albumsCapacity;
		int songsSize;
		int albumsSize;
};


MP3Player :: MP3Player(){
		songs = NULL;
		albums = NULL;
		name = NULL;
		battery = 0;
		isCharging = 0;
		countSongs = 0;
		songsCapacity = 1000;
		albumsCapacity = 30;
		countAlbums = 0;
}
MP3Player :: ~MP3Player(){
		delete[] name;
		delete[] songs;
		delete[] albums;
}
MP3Player :: MP3Player(char* name, Song* songs, int songsCapacity, int size){
	this->name = new char[strlen(name) + 1];                 
	strcpy_s(this->name, strlen(name) + 1, name);
	this->songs = new Song[songsCapacity];
	this->songsCapacity = songsCapacity;
	this->countSongs = size;
	for(int i=0; i<songsCapacity; ++i){
		this->songs[i] = songs[i];
	}
	battery = 0;
	isCharging = 0;
}
MP3Player :: MP3Player(char* name, Album* albums, int albumsCapacity, int size) {
	this->name = new char[strlen(name) + 1];                 
	strcpy_s(this->name, strlen(name) + 1, name);
	this->albums = new Album[albumsCapacity];
	this->albumsCapacity = albumsCapacity;
	this->countAlbums = size;
	for(int i=0; i<songsCapacity; ++i){
		this->albums[i] = albums[i];
	}
	battery = 0;
	isCharging = 0;
}
MP3Player :: MP3Player(char* name, Song* songs, Album* albums, int songsCapacity, int albumsCapacity, int songsSize, int albumsSize){
	
	this->name = new char[strlen(name) + 1];                 
	strcpy_s(this->name, strlen(name) + 1, name);

	this->songsSize= songsSize;
	this->albumsSize = albumsSize; 
	this->songsCapacity = songsCapacity;
	this->albumsCapacity= albumsCapacity;
	battery = 0;
	isCharging = 0;

	for (int i = 0; i < albumsSize; ++i)
	{
		this->songsSize+= albums[i].getCountSongs();
	}

	
	this->songs = new Song[songsCapacity];
	this->albums = new Album[albumsCapacity];

	for (int i = 0; i < songsSize; ++i)
	{
		this->songs[i] = songs[i];
	}

	for (int i = 0; i < albumsSize; ++i)
	{
		this->albums[i] = albums[i];
	}

	int counter = this->songsSize;
	
	for (int i = 0; i < this->albumsSize; ++i)
	{
		for (int j = 0; j < albums[j].getCountSongs(); ++j)
		{
			this->songs[counter] = albums[j].getSongByIndex(j);
			counter++;
		}
	}
	countSongs = counter;
}

Song MP3Player :: getSongByIndex(int index){
	return this->songs[index];
} 

void MP3Player :: addSong(Song song){
	songs[countSongs] = song;
	countSongs++;
}

 void MP3Player :: addSongs(Song* songs, int size){
	 int j = 0;
	 for(int i = countSongs; i< countSongs + size; ++i) {
		 this->songs[countSongs] = songs[j];
		 ++j;
	 }
	 countSongs += j;
 }

void MP3Player :: addAlbum(Album album, int  sizeSongs){
	;
	for(int i = 0; i<sizeSongs; i++){
		this->albums[countAlbums].getSongByIndex(i) = album.getSongByIndex(i);
	}
	countAlbums++;
}

Song MP3Player :: getSongFromAlbum(Album album, int index){
	return album.getSongByIndex(index);
}

void MP3Player :: charge(){
	isCharging = true;
}
void MP3Player :: batteryIsFull(){
	battery = 100;
}
void MP3Player :: stopCharge(){
	isCharging = false;
}
void MP3Player :: play(Song song){
	if(isCharging) cout<<"The battery is charging. You can`t play a song in the moment!";
	else{
		if(battery<=15) cout<<"The battery is low! Please charge it!"<<endl;
		else {
			if(battery>0){
				battery -= int(song.getLength());
			}
		}
	}

}




int main(int argc, _TCHAR* argv[])
{
	Song likeMe("Like me", 4, "Lil Wayne");
	Song lolipop("Lolipop", 3, "Lil Wayne");
	Song candyshop("Candy shop", 5, "50cent");
	Song littlebit("Just a little bit", 3, "50cent");
	Song pesho("Az sym pesho", 8, "pesho Qkiq");
	

	Song* loliPop = new Song[10];
	Song* candyShop = new Song[10];

	Album album1("Lolipop album",loliPop,10,2);
	Album album2("CandyShop album",candyShop,10,2);

	album1.addSong(likeMe);
	album1.addSong(lolipop);
	album2.addSong(candyshop);
	album2.addSong(littlebit);

	Album* myAlbums = new Album[20];
	myAlbums[0] = album1;
	myAlbums[1] = album2;

	Song* mySongs = new Song[3];
	mySongs[0] = pesho;
	mySongs[1] = likeMe;
	mySongs[2] = candyshop;
	
	
	
	
	return 0;
}

