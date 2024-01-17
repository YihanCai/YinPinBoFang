#include<stdio.h>
#include<windows.h>
#include<mmsystem.h>
#pragma comment(lib,"winmm.lib")
void play_music(char filename[]);
int main() {
    char filename[100];

    // Get user input for the music filename
    printf("请输入你所要收听的音乐文件名（包括文件扩展名，如.mp3）:\n");
    scanf("%s", filename);
    play_music(filename);
    while (1);
    return 0;
}

void play_music(char filename[]) {
    // Construct and execute the MCI commands
    char openCommand[256], playCommand[256];

    // Close any currently playing music
    sprintf(openCommand, "close %s", filename);
    mciSendString(openCommand, 0, 0, 0);

    // Open the specified music file with an alias
    sprintf(openCommand, "open %s alias music", filename);
    mciSendString(openCommand, 0, 0, 0);

    // Play the music
    sprintf(playCommand, "play music");
    mciSendString(playCommand, 0, 0, 0);

}