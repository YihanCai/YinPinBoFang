#include<stdio.h>
#include<windows.h>
#include<mmsystem.h>
#pragma comment(lib,"winmm.lib")

int main() {
	// 播放音乐
	//首先，要把你要播放的歌与该文件放在同一文件夹下
	//其次，代码打好后，还不够，要右键该项目，点击属性，点击配置属性中的高级，将字符集改为使用多字节字符集。
	//再点击属性页的C/C++ ，在常规中把SDL 检查由 是 改为 否。
	mciSendString("close Swimy.mp3",0,0,0);//close关闭播放的音乐，防止上次没有播放完。Swimy.mp3仅为示例。即歌名
	mciSendString("play Swimy.mp3", 0, 0, 0);//play 开始播放音乐。
	while (1);//无限循环，防止瞬间退出。
	return 0;
}
