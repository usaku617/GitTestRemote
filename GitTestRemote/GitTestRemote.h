
// GitTestRemote.h : PROJECT_NAME アプリケーションのメイン ヘッダー ファイルです
//

#pragma once

#ifndef __AFXWIN_H__
	#error "PCH に対してこのファイルをインクルードする前に 'pch.h' をインクルードしてください"
#endif

#include "resource.h"		// メイン シンボル


// CGitTestRemoteApp:
// このクラスの実装については、GitTestRemote.cpp を参照してください
//

class CGitTestRemoteApp : public CWinApp
{
public:
	CGitTestRemoteApp();

// オーバーライド
public:
	virtual BOOL InitInstance();

// 実装

	DECLARE_MESSAGE_MAP()
};

extern CGitTestRemoteApp theApp;
