#include<stdio.h>
#include<windows.h>
#include<mmsystem.h>
#pragma comment(lib,"winmm.lib")

int main() {
	// ��������
	//���ȣ�Ҫ����Ҫ���ŵĸ�����ļ�����ͬһ�ļ�����
	//��Σ������ú󣬻�������Ҫ�Ҽ�����Ŀ��������ԣ�������������еĸ߼������ַ�����Ϊʹ�ö��ֽ��ַ�����
	//�ٵ������ҳ��C/C++ ���ڳ����а�SDL ����� �� ��Ϊ ��
	mciSendString("close Swimy.mp3",0,0,0);//close�رղ��ŵ����֣���ֹ�ϴ�û�в����ꡣSwimy.mp3��Ϊʾ����������
	mciSendString("play Swimy.mp3", 0, 0, 0);//play ��ʼ�������֡�
	while (1);//����ѭ������ֹ˲���˳���
	return 0;
}
