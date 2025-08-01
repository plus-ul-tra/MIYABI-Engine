#include "cpch.h"
#include "Engine.h"
#include "GameManager.h"
int main() {

	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
	HRESULT hr = CoInitializeEx(nullptr, COINIT_APARTMENTTHREADED);
	if (FAILED(hr))
		return -1;

	MIYABI::Core::GetInstance().Initialize();
	GameManager::GetInstance().Initialize();
	MIYABI::Core::GetInstance().StartGameLoop();
	


	CoUninitialize();
	return 0;

}