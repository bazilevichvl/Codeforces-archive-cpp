#include <iostream>
#include <string>
#include <string_view>

int main(void){
    std::string song;
    std::cin >> song;

    std::string original_song;
    
    // Remove prefix
    while(song.substr(0, 3) == "WUB"){
        song.erase(0, 3);
    }

    // start collecting words
    while(song.size() > 0){
        int index = song.find("WUB");

        // We have word WUB in a song, but it's not in the beginning of the song
        if(index != std::string::npos && index > 0){
            original_song += song.substr(0, index);
            original_song += " ";
            song.erase(0, 3+index);
        } else if(index == 0){ // song starts with WUB
            song.erase(0, 3);
        } else { // no WUB in a song
            original_song += song;
            song.erase(0);
        }
    }

    std::cout << original_song <<  std::endl;
}
