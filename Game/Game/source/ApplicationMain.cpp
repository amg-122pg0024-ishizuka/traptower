
#include "AppFrame.h"
#include "ApplicationMain.h"
#include "ApplicationGlobal.h"
#include "ModeGame.h"
#include "ModeTitle.h"
#include "ModeAmgLogo.h"

// 実体
ApplicationMain				g_oApplicationMain;

bool ApplicationMain::Initialize(HINSTANCE hInstance) {
	if (!base::Initialize(hInstance)) { return false; }

	// アプリケーショングローバルの初期化
	gGlobal.Init();

	// モードの登録
	ModeServer::GetInstance()->Add(new ModeAmgLogo(), 1, "logo");

	return true;
}

bool ApplicationMain::Terminate() {
	base::Terminate();
	return true;
}


bool ApplicationMain::Input() {
	base::Input();
	return true;
}

bool ApplicationMain::Process() {
	base::Process();
	return true;
}

bool ApplicationMain::Render() {
	base::Render();
	return true;
}

