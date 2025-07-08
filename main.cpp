#include <Windows.h>

//Windowsアプリでのエントリーポイント(main関数)
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
	//出力ウィンドウへの文字入力
	OutputDebugStringA("Hell,DirectX!\n");

	return 0;
}