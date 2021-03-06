//-----------------------------------------------------------------------------------//
//              Windows Graphics Programming: Win32 GDI and DirectDraw               //
//                             ISBN  0-13-086985-6                                   //
//                                                                                   //
//  Written            by  Yuan, Feng                             www.fengyuan.com   //
//  Copyright (c) 2000 by  Hewlett-Packard Company                www.hp.com         //
//  Published          by  Prentice Hall PTR, Prentice-Hall, Inc. www.phptr.com      //
//                                                                                   //
//  FileName   : devpage.h				                                             //
//  Description: KDevicePage class                                                   //
//  Version    : 1.00.000, May 31, 2000                                              //
//-----------------------------------------------------------------------------------//

class KDevicePage : public KPropertySheetPage
{
	HINSTANCE m_hInstance;

    BOOL DlgProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam);

	BOOL OnInitDialog(HWND hWnd);

	BOOL OnDeviceChange(HWND hWnd);
	BOOL OnDeviceCaps(HWND hWnd);
	BOOL OnDCAttributes(HWND hWnd);

public:

    KDevicePage(HINSTANCE hInstance)
    {
		m_hInstance = hInstance;
    }

};
