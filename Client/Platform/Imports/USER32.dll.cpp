// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Imports
// Functions: 159

// GetMessageW @ 150159a2f

BOOL __stdcall GetMessageW(LPMSG lpMsg,HWND hWnd,UINT wMsgFilterMin,UINT wMsgFilterMax)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159a2f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetMessageW(lpMsg,hWnd,wMsgFilterMin,wMsgFilterMax);
  return BVar1;
}

// TranslateMessage @ 150159a3b

BOOL __stdcall TranslateMessage(MSG *lpMsg)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159a3b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = TranslateMessage(lpMsg);
  return BVar1;
}

// DispatchMessageW @ 150159a47

LRESULT __stdcall DispatchMessageW(MSG *lpMsg)

{
  LRESULT LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159a47. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = DispatchMessageW(lpMsg);
  return LVar1;
}

// PeekMessageW @ 150159a53

BOOL __stdcall
PeekMessageW(LPMSG lpMsg,HWND hWnd,UINT wMsgFilterMin,UINT wMsgFilterMax,UINT wRemoveMsg)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159a53. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = PeekMessageW(lpMsg,hWnd,wMsgFilterMin,wMsgFilterMax,wRemoveMsg);
  return BVar1;
}

// SendMessageW @ 150159a5f

LRESULT __stdcall SendMessageW(HWND hWnd,UINT Msg,WPARAM wParam,LPARAM lParam)

{
  LRESULT LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159a5f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = SendMessageW(hWnd,Msg,wParam,lParam);
  return LVar1;
}

// PostQuitMessage @ 150159a6b

void __stdcall PostQuitMessage(int nExitCode)

{
                    /* WARNING: Could not recover jumptable at 0x000150159a6b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  PostQuitMessage(nExitCode);
  return;
}

// IsChild @ 150159a77

BOOL __stdcall IsChild(HWND hWndParent,HWND hWnd)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159a77. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = IsChild(hWndParent,hWnd);
  return BVar1;
}

// DestroyWindow @ 150159a83

BOOL __stdcall DestroyWindow(HWND hWnd)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159a83. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = DestroyWindow(hWnd);
  return BVar1;
}

// ShowWindow @ 150159a8f

BOOL __stdcall ShowWindow(HWND hWnd,int nCmdShow)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159a8f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ShowWindow(hWnd,nCmdShow);
  return BVar1;
}

// SetWindowPos @ 150159a9b

BOOL __stdcall SetWindowPos(HWND hWnd,HWND hWndInsertAfter,int X,int Y,int cx,int cy,UINT uFlags)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159a9b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetWindowPos(hWnd,hWndInsertAfter,X,Y,cx,cy,uFlags);
  return BVar1;
}

// IsWindowVisible @ 150159aa7

BOOL __stdcall IsWindowVisible(HWND hWnd)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159aa7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = IsWindowVisible(hWnd);
  return BVar1;
}

// CreateDialogParamW @ 150159ab3

HWND __stdcall
CreateDialogParamW(HINSTANCE hInstance,LPCWSTR lpTemplateName,HWND hWndParent,DLGPROC lpDialogFunc,
                  LPARAM dwInitParam)

{
  HWND pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159ab3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CreateDialogParamW(hInstance,lpTemplateName,hWndParent,lpDialogFunc,dwInitParam);
  return pHVar1;
}

// GetDlgItem @ 150159abf

HWND __stdcall GetDlgItem(HWND hDlg,int nIDDlgItem)

{
  HWND pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159abf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetDlgItem(hDlg,nIDDlgItem);
  return pHVar1;
}

// SetDlgItemTextW @ 150159acb

BOOL __stdcall SetDlgItemTextW(HWND hDlg,int nIDDlgItem,LPCWSTR lpString)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159acb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetDlgItemTextW(hDlg,nIDDlgItem,lpString);
  return BVar1;
}

// OpenClipboard @ 150159ad7

BOOL __stdcall OpenClipboard(HWND hWndNewOwner)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159ad7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = OpenClipboard(hWndNewOwner);
  return BVar1;
}

// CloseClipboard @ 150159ae3

BOOL __stdcall CloseClipboard(void)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159ae3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = CloseClipboard();
  return BVar1;
}

// SetClipboardData @ 150159aef

HANDLE __stdcall SetClipboardData(UINT uFormat,HANDLE hMem)

{
  HANDLE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159aef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = SetClipboardData(uFormat,hMem);
  return pvVar1;
}

// EmptyClipboard @ 150159afb

BOOL __stdcall EmptyClipboard(void)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159afb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = EmptyClipboard();
  return BVar1;
}

// LoadAcceleratorsW @ 150159b07

HACCEL __stdcall LoadAcceleratorsW(HINSTANCE hInstance,LPCWSTR lpTableName)

{
  HACCEL pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159b07. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = LoadAcceleratorsW(hInstance,lpTableName);
  return pHVar1;
}

// DestroyAcceleratorTable @ 150159b13

BOOL __stdcall DestroyAcceleratorTable(HACCEL hAccel)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159b13. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = DestroyAcceleratorTable(hAccel);
  return BVar1;
}

// TranslateAcceleratorW @ 150159b1f

int __stdcall TranslateAcceleratorW(HWND hWnd,HACCEL hAccTable,LPMSG lpMsg)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159b1f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = TranslateAcceleratorW(hWnd,hAccTable,lpMsg);
  return iVar1;
}

// GetSystemMetrics @ 150159b2b

int __stdcall GetSystemMetrics(int nIndex)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159b2b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetSystemMetrics(nIndex);
  return iVar1;
}

// DrawTextW @ 150159b37

int __stdcall DrawTextW(HDC hdc,LPCWSTR lpchText,int cchText,LPRECT lprc,UINT format)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159b37. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = DrawTextW(hdc,lpchText,cchText,lprc,format);
  return iVar1;
}

// SetForegroundWindow @ 150159b43

BOOL __stdcall SetForegroundWindow(HWND hWnd)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159b43. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetForegroundWindow(hWnd);
  return BVar1;
}

// AllowSetForegroundWindow @ 150159b4f

BOOL __stdcall AllowSetForegroundWindow(DWORD dwProcessId)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159b4f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = AllowSetForegroundWindow(dwProcessId);
  return BVar1;
}

// BeginPaint @ 150159b5b

HDC __stdcall BeginPaint(HWND hWnd,LPPAINTSTRUCT lpPaint)

{
  HDC pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159b5b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = BeginPaint(hWnd,lpPaint);
  return pHVar1;
}

// EndPaint @ 150159b67

BOOL __stdcall EndPaint(HWND hWnd,PAINTSTRUCT *lpPaint)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159b67. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = EndPaint(hWnd,lpPaint);
  return BVar1;
}

// InvalidateRect @ 150159b73

BOOL __stdcall InvalidateRect(HWND hWnd,RECT *lpRect,BOOL bErase)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159b73. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = InvalidateRect(hWnd,lpRect,bErase);
  return BVar1;
}

// SetWindowTextW @ 150159b7f

BOOL __stdcall SetWindowTextW(HWND hWnd,LPCWSTR lpString)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159b7f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetWindowTextW(hWnd,lpString);
  return BVar1;
}

// GetClientRect @ 150159b8b

BOOL __stdcall GetClientRect(HWND hWnd,LPRECT lpRect)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159b8b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetClientRect(hWnd,lpRect);
  return BVar1;
}

// GetWindowRect @ 150159b97

BOOL __stdcall GetWindowRect(HWND hWnd,LPRECT lpRect)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159b97. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetWindowRect(hWnd,lpRect);
  return BVar1;
}

// MessageBoxW @ 150159ba3

int __stdcall MessageBoxW(HWND hWnd,LPCWSTR lpText,LPCWSTR lpCaption,UINT uType)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159ba3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = MessageBoxW(hWnd,lpText,lpCaption,uType);
  return iVar1;
}

// ScreenToClient @ 150159baf

BOOL __stdcall ScreenToClient(HWND hWnd,LPPOINT lpPoint)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159baf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ScreenToClient(hWnd,lpPoint);
  return BVar1;
}

// GetSysColorBrush @ 150159bbb

HBRUSH __stdcall GetSysColorBrush(int nIndex)

{
  HBRUSH pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159bbb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetSysColorBrush(nIndex);
  return pHVar1;
}

// FillRect @ 150159bc7

int __stdcall FillRect(HDC hDC,RECT *lprc,HBRUSH hbr)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159bc7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = FillRect(hDC,lprc,hbr);
  return iVar1;
}

// GetWindowLongW @ 150159bd3

LONG __stdcall GetWindowLongW(HWND hWnd,int nIndex)

{
  LONG LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159bd3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = GetWindowLongW(hWnd,nIndex);
  return LVar1;
}

// SetWindowLongW @ 150159bdf

LONG __stdcall SetWindowLongW(HWND hWnd,int nIndex,LONG dwNewLong)

{
  LONG LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159bdf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = SetWindowLongW(hWnd,nIndex,dwNewLong);
  return LVar1;
}

// GetWindowLongPtrW @ 150159beb

LONG_PTR __stdcall GetWindowLongPtrW(HWND hWnd,int nIndex)

{
  LONG_PTR LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159beb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = GetWindowLongPtrW(hWnd,nIndex);
  return LVar1;
}

// SetWindowLongPtrW @ 150159bf7

LONG_PTR __stdcall SetWindowLongPtrW(HWND hWnd,int nIndex,LONG_PTR dwNewLong)

{
  LONG_PTR LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159bf7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = SetWindowLongPtrW(hWnd,nIndex,dwNewLong);
  return LVar1;
}

// EnumWindows @ 150159c03

BOOL __stdcall EnumWindows(WNDENUMPROC lpEnumFunc,LPARAM lParam)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159c03. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = EnumWindows(lpEnumFunc,lParam);
  return BVar1;
}

// GetTopWindow @ 150159c0f

HWND __stdcall GetTopWindow(HWND hWnd)

{
  HWND pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159c0f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetTopWindow(hWnd);
  return pHVar1;
}

// GetWindowThreadProcessId @ 150159c1b

DWORD __stdcall GetWindowThreadProcessId(HWND hWnd,LPDWORD lpdwProcessId)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159c1b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetWindowThreadProcessId(hWnd,lpdwProcessId);
  return DVar1;
}

// GetWindow @ 150159c27

HWND __stdcall GetWindow(HWND hWnd,UINT uCmd)

{
  HWND pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159c27. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetWindow(hWnd,uCmd);
  return pHVar1;
}

// IsDialogMessageW @ 150159c33

BOOL __stdcall IsDialogMessageW(HWND hDlg,LPMSG lpMsg)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159c33. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = IsDialogMessageW(hDlg,lpMsg);
  return BVar1;
}

// EnumDisplaySettingsW @ 150159c3f

BOOL __stdcall EnumDisplaySettingsW(LPCWSTR lpszDeviceName,DWORD iModeNum,DEVMODEW *lpDevMode)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159c3f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = EnumDisplaySettingsW(lpszDeviceName,iModeNum,lpDevMode);
  return BVar1;
}

// EnumDisplayDevicesW @ 150159c4b

BOOL __stdcall
EnumDisplayDevicesW(LPCWSTR lpDevice,DWORD iDevNum,PDISPLAY_DEVICEW lpDisplayDevice,DWORD dwFlags)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159c4b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = EnumDisplayDevicesW(lpDevice,iDevNum,lpDisplayDevice,dwFlags);
  return BVar1;
}

// MonitorFromWindow @ 150159c57

HMONITOR __stdcall MonitorFromWindow(HWND hwnd,DWORD dwFlags)

{
  HMONITOR pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159c57. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = MonitorFromWindow(hwnd,dwFlags);
  return pHVar1;
}

// GetMonitorInfoW @ 150159c63

BOOL __stdcall GetMonitorInfoW(HMONITOR hMonitor,LPMONITORINFO lpmi)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159c63. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetMonitorInfoW(hMonitor,lpmi);
  return BVar1;
}

// EnumDisplayMonitors @ 150159c6f

BOOL __stdcall EnumDisplayMonitors(HDC hdc,LPCRECT lprcClip,MONITORENUMPROC lpfnEnum,LPARAM dwData)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159c6f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = EnumDisplayMonitors(hdc,lprcClip,lpfnEnum,dwData);
  return BVar1;
}

// MapVirtualKeyW @ 150159c7b

UINT __stdcall MapVirtualKeyW(UINT uCode,UINT uMapType)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159c7b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = MapVirtualKeyW(uCode,uMapType);
  return UVar1;
}

// ActivateKeyboardLayout @ 150159c87

HKL __stdcall ActivateKeyboardLayout(HKL hkl,UINT Flags)

{
  HKL pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159c87. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = ActivateKeyboardLayout(hkl,Flags);
  return pHVar1;
}

// GetKeyboardLayoutList @ 150159c93

int __stdcall GetKeyboardLayoutList(int nBuff,HKL *lpList)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159c93. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetKeyboardLayoutList(nBuff,lpList);
  return iVar1;
}

// GetKeyboardLayout @ 150159c9f

HKL __stdcall GetKeyboardLayout(DWORD idThread)

{
  HKL pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159c9f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetKeyboardLayout(idThread);
  return pHVar1;
}

// DisableProcessWindowsGhosting @ 150159cab

void __stdcall DisableProcessWindowsGhosting(void)

{
                    /* WARNING: Could not recover jumptable at 0x000150159cab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DisableProcessWindowsGhosting();
  return;
}

// TrackMouseEvent @ 150159cb7

BOOL __stdcall TrackMouseEvent(LPTRACKMOUSEEVENT lpEventTrack)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159cb7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = TrackMouseEvent(lpEventTrack);
  return BVar1;
}

// GetMessageExtraInfo @ 150159cc3

LPARAM __stdcall GetMessageExtraInfo(void)

{
  LPARAM LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159cc3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = GetMessageExtraInfo();
  return LVar1;
}

// PostMessageW @ 150159ccf

BOOL __stdcall PostMessageW(HWND hWnd,UINT Msg,WPARAM wParam,LPARAM lParam)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159ccf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = PostMessageW(hWnd,Msg,wParam,lParam);
  return BVar1;
}

// DefWindowProcW @ 150159cdb

LRESULT __stdcall DefWindowProcW(HWND hWnd,UINT Msg,WPARAM wParam,LPARAM lParam)

{
  LRESULT LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159cdb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = DefWindowProcW(hWnd,Msg,wParam,lParam);
  return LVar1;
}

// RegisterClassW @ 150159ce7

ATOM __stdcall RegisterClassW(WNDCLASSW *lpWndClass)

{
  ATOM AVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159ce7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AVar1 = RegisterClassW(lpWndClass);
  return AVar1;
}

// UnregisterClassW @ 150159cf3

BOOL __stdcall UnregisterClassW(LPCWSTR lpClassName,HINSTANCE hInstance)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159cf3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = UnregisterClassW(lpClassName,hInstance);
  return BVar1;
}

// RegisterClassExW @ 150159cff

ATOM __stdcall RegisterClassExW(WNDCLASSEXW *param_1)

{
  ATOM AVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159cff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AVar1 = RegisterClassExW(param_1);
  return AVar1;
}

// CreateWindowExW @ 150159d0b

HWND __stdcall
CreateWindowExW(DWORD dwExStyle,LPCWSTR lpClassName,LPCWSTR lpWindowName,DWORD dwStyle,int X,int Y,
               int nWidth,int nHeight,HWND hWndParent,HMENU hMenu,HINSTANCE hInstance,LPVOID lpParam
               )

{
  HWND pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159d0b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CreateWindowExW(dwExStyle,lpClassName,lpWindowName,dwStyle,X,Y,nWidth,nHeight,hWndParent,
                           hMenu,hInstance,lpParam);
  return pHVar1;
}

// IsWindow @ 150159d17

BOOL __stdcall IsWindow(HWND hWnd)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159d17. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = IsWindow(hWnd);
  return BVar1;
}

// PrintWindow @ 150159d23

BOOL __stdcall PrintWindow(HWND hwnd,HDC hdcBlt,UINT nFlags)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159d23. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = PrintWindow(hwnd,hdcBlt,nFlags);
  return BVar1;
}

// SetLayeredWindowAttributes @ 150159d2f

BOOL __stdcall SetLayeredWindowAttributes(HWND hwnd,COLORREF crKey,BYTE bAlpha,DWORD dwFlags)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159d2f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetLayeredWindowAttributes(hwnd,crKey,bAlpha,dwFlags);
  return BVar1;
}

// FlashWindowEx @ 150159d3b

BOOL __stdcall FlashWindowEx(PFLASHWINFO pfwi)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159d3b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = FlashWindowEx(pfwi);
  return BVar1;
}

// MoveWindow @ 150159d47

BOOL __stdcall MoveWindow(HWND hWnd,int X,int Y,int nWidth,int nHeight,BOOL bRepaint)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159d47. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = MoveWindow(hWnd,X,Y,nWidth,nHeight,bRepaint);
  return BVar1;
}

// GetWindowPlacement @ 150159d53

BOOL __stdcall GetWindowPlacement(HWND hWnd,WINDOWPLACEMENT *lpwndpl)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159d53. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetWindowPlacement(hWnd,lpwndpl);
  return BVar1;
}

// SetWindowPlacement @ 150159d5f

BOOL __stdcall SetWindowPlacement(HWND hWnd,WINDOWPLACEMENT *lpwndpl)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159d5f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetWindowPlacement(hWnd,lpwndpl);
  return BVar1;
}

// IsIconic @ 150159d6b

BOOL __stdcall IsIconic(HWND hWnd)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159d6b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = IsIconic(hWnd);
  return BVar1;
}

// IsZoomed @ 150159d77

BOOL __stdcall IsZoomed(HWND hWnd)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159d77. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = IsZoomed(hWnd);
  return BVar1;
}

// GetDlgItemTextW @ 150159d83

UINT __stdcall GetDlgItemTextW(HWND hDlg,int nIDDlgItem,LPWSTR lpString,int cchMax)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159d83. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = GetDlgItemTextW(hDlg,nIDDlgItem,lpString,cchMax);
  return UVar1;
}

// GetClipboardData @ 150159d8f

HANDLE __stdcall GetClipboardData(UINT uFormat)

{
  HANDLE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159d8f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = GetClipboardData(uFormat);
  return pvVar1;
}

// AddClipboardFormatListener @ 150159d9b

BOOL __stdcall AddClipboardFormatListener(HWND hwnd)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159d9b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = AddClipboardFormatListener(hwnd);
  return BVar1;
}

// SetFocus @ 150159da7

HWND __stdcall SetFocus(HWND hWnd)

{
  HWND pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159da7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = SetFocus(hWnd);
  return pHVar1;
}

// GetActiveWindow @ 150159db3

HWND __stdcall GetActiveWindow(void)

{
  HWND pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159db3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetActiveWindow();
  return pHVar1;
}

// GetFocus @ 150159dbf

HWND __stdcall GetFocus(void)

{
  HWND pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159dbf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetFocus();
  return pHVar1;
}

// GetKeyState @ 150159dcb

SHORT __stdcall GetKeyState(int nVirtKey)

{
  SHORT SVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159dcb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SVar1 = GetKeyState(nVirtKey);
  return SVar1;
}

// GetAsyncKeyState @ 150159dd7

SHORT __stdcall GetAsyncKeyState(int vKey)

{
  SHORT SVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159dd7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SVar1 = GetAsyncKeyState(vKey);
  return SVar1;
}

// SendInput @ 150159de3

UINT __stdcall SendInput(UINT cInputs,LPINPUT pInputs,int cbSize)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159de3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = SendInput(cInputs,pInputs,cbSize);
  return UVar1;
}

// GetTouchInputInfo @ 150159def

BOOL __stdcall
GetTouchInputInfo(HTOUCHINPUT hTouchInput,UINT cInputs,PTOUCHINPUT pInputs,int cbSize)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159def. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetTouchInputInfo(hTouchInput,cInputs,pInputs,cbSize);
  return BVar1;
}

// CloseTouchInputHandle @ 150159dfb

BOOL __stdcall CloseTouchInputHandle(HTOUCHINPUT hTouchInput)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159dfb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = CloseTouchInputHandle(hTouchInput);
  return BVar1;
}

// RegisterTouchWindow @ 150159e07

BOOL __stdcall RegisterTouchWindow(HWND hwnd,ULONG ulFlags)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159e07. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = RegisterTouchWindow(hwnd,ulFlags);
  return BVar1;
}

// GetCapture @ 150159e13

HWND __stdcall GetCapture(void)

{
  HWND pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159e13. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetCapture();
  return pHVar1;
}

// SetCapture @ 150159e1f

HWND __stdcall SetCapture(HWND hWnd)

{
  HWND pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159e1f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = SetCapture(hWnd);
  return pHVar1;
}

// ReleaseCapture @ 150159e2b

BOOL __stdcall ReleaseCapture(void)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159e2b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ReleaseCapture();
  return BVar1;
}

// MsgWaitForMultipleObjects @ 150159e37

DWORD __stdcall
MsgWaitForMultipleObjects
          (DWORD nCount,HANDLE *pHandles,BOOL fWaitAll,DWORD dwMilliseconds,DWORD dwWakeMask)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159e37. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = MsgWaitForMultipleObjects(nCount,pHandles,fWaitAll,dwMilliseconds,dwWakeMask);
  return DVar1;
}

// EnableWindow @ 150159e43

BOOL __stdcall EnableWindow(HWND hWnd,BOOL bEnable)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159e43. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = EnableWindow(hWnd,bEnable);
  return BVar1;
}

// IsWindowEnabled @ 150159e4f

BOOL __stdcall IsWindowEnabled(HWND hWnd)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159e4f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = IsWindowEnabled(hWnd);
  return BVar1;
}

// GetSystemMenu @ 150159e5b

HMENU __stdcall GetSystemMenu(HWND hWnd,BOOL bRevert)

{
  HMENU pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159e5b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetSystemMenu(hWnd,bRevert);
  return pHVar1;
}

// CreatePopupMenu @ 150159e67

HMENU __stdcall CreatePopupMenu(void)

{
  HMENU pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159e67. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CreatePopupMenu();
  return pHVar1;
}

// EnableMenuItem @ 150159e73

BOOL __stdcall EnableMenuItem(HMENU hMenu,UINT uIDEnableItem,UINT uEnable)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159e73. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = EnableMenuItem(hMenu,uIDEnableItem,uEnable);
  return BVar1;
}

// DeleteMenu @ 150159e7f

BOOL __stdcall DeleteMenu(HMENU hMenu,UINT uPosition,UINT uFlags)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159e7f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = DeleteMenu(hMenu,uPosition,uFlags);
  return BVar1;
}

// TrackPopupMenu @ 150159e8b

BOOL __stdcall
TrackPopupMenu(HMENU hMenu,UINT uFlags,int x,int y,int nReserved,HWND hWnd,RECT *prcRect)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159e8b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = TrackPopupMenu(hMenu,uFlags,x,y,nReserved,hWnd,prcRect);
  return BVar1;
}

// InsertMenuItemW @ 150159e97

BOOL __stdcall InsertMenuItemW(HMENU hmenu,UINT item,BOOL fByPosition,LPCMENUITEMINFOW lpmi)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159e97. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = InsertMenuItemW(hmenu,item,fByPosition,lpmi);
  return BVar1;
}

// DrawStateW @ 150159ea3

BOOL __stdcall
DrawStateW(HDC hdc,HBRUSH hbrFore,DRAWSTATEPROC qfnCallBack,LPARAM lData,WPARAM wData,int x,int y,
          int cx,int cy,UINT uFlags)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159ea3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = DrawStateW(hdc,hbrFore,qfnCallBack,lData,wData,x,y,cx,cy,uFlags);
  return BVar1;
}

// UpdateWindow @ 150159eaf

BOOL __stdcall UpdateWindow(HWND hWnd)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159eaf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = UpdateWindow(hWnd);
  return BVar1;
}

// SetActiveWindow @ 150159ebb

HWND __stdcall SetActiveWindow(HWND hWnd)

{
  HWND pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159ebb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = SetActiveWindow(hWnd);
  return pHVar1;
}

// GetForegroundWindow @ 150159ec7

HWND __stdcall GetForegroundWindow(void)

{
  HWND pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159ec7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetForegroundWindow();
  return pHVar1;
}

// GetDC @ 150159ed3

HDC __stdcall GetDC(HWND hWnd)

{
  HDC pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159ed3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetDC(hWnd);
  return pHVar1;
}

// GetDCEx @ 150159edf

HDC __stdcall GetDCEx(HWND hWnd,HRGN hrgnClip,DWORD flags)

{
  HDC pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159edf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetDCEx(hWnd,hrgnClip,flags);
  return pHVar1;
}

// ReleaseDC @ 150159eeb

int __stdcall ReleaseDC(HWND hWnd,HDC hDC)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159eeb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = ReleaseDC(hWnd,hDC);
  return iVar1;
}

// SetWindowRgn @ 150159ef7

int __stdcall SetWindowRgn(HWND hWnd,HRGN hRgn,BOOL bRedraw)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159ef7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = SetWindowRgn(hWnd,hRgn,bRedraw);
  return iVar1;
}

// RedrawWindow @ 150159f03

BOOL __stdcall RedrawWindow(HWND hWnd,RECT *lprcUpdate,HRGN hrgnUpdate,UINT flags)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159f03. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = RedrawWindow(hWnd,lprcUpdate,hrgnUpdate,flags);
  return BVar1;
}

// GetWindowTextW @ 150159f0f

int __stdcall GetWindowTextW(HWND hWnd,LPWSTR lpString,int nMaxCount)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159f0f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetWindowTextW(hWnd,lpString,nMaxCount);
  return iVar1;
}

// GetWindowTextLengthW @ 150159f1b

int __stdcall GetWindowTextLengthW(HWND hWnd)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159f1b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetWindowTextLengthW(hWnd);
  return iVar1;
}

// AdjustWindowRectEx @ 150159f27

BOOL __stdcall AdjustWindowRectEx(LPRECT lpRect,DWORD dwStyle,BOOL bMenu,DWORD dwExStyle)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159f27. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = AdjustWindowRectEx(lpRect,dwStyle,bMenu,dwExStyle);
  return BVar1;
}

// ShowCursor @ 150159f33

int __stdcall ShowCursor(BOOL bShow)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159f33. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = ShowCursor(bShow);
  return iVar1;
}

// SetCursorPos @ 150159f3f

BOOL __stdcall SetCursorPos(int X,int Y)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159f3f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetCursorPos(X,Y);
  return BVar1;
}

// SetCursor @ 150159f4b

HCURSOR __stdcall SetCursor(HCURSOR hCursor)

{
  HCURSOR pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159f4b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = SetCursor(hCursor);
  return pHVar1;
}

// GetCursorPos @ 150159f57

BOOL __stdcall GetCursorPos(LPPOINT lpPoint)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159f57. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetCursorPos(lpPoint);
  return BVar1;
}

// GetClipCursor @ 150159f63

BOOL __stdcall GetClipCursor(LPRECT lpRect)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159f63. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetClipCursor(lpRect);
  return BVar1;
}

// ClientToScreen @ 150159f6f

BOOL __stdcall ClientToScreen(HWND hWnd,LPPOINT lpPoint)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159f6f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ClientToScreen(hWnd,lpPoint);
  return BVar1;
}

// MapWindowPoints @ 150159f7b

int __stdcall MapWindowPoints(HWND hWndFrom,HWND hWndTo,LPPOINT lpPoints,UINT cPoints)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159f7b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = MapWindowPoints(hWndFrom,hWndTo,lpPoints,cPoints);
  return iVar1;
}

// WindowFromPoint @ 150159f87

HWND __stdcall WindowFromPoint(POINT Point)

{
  HWND pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159f87. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = WindowFromPoint(Point);
  return pHVar1;
}

// ClipCursor @ 150159f93

BOOL __stdcall ClipCursor(RECT *lpRect)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159f93. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ClipCursor(lpRect);
  return BVar1;
}

// GetSysColor @ 150159f9f

DWORD __stdcall GetSysColor(int nIndex)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159f9f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetSysColor(nIndex);
  return DVar1;
}

// PtInRect @ 150159fab

BOOL __stdcall PtInRect(RECT *lprc,POINT pt)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159fab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = PtInRect(lprc,pt);
  return BVar1;
}

// GetClassLongPtrW @ 150159fb7

ULONG_PTR __stdcall GetClassLongPtrW(HWND hWnd,int nIndex)

{
  ULONG_PTR UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159fb7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = GetClassLongPtrW(hWnd,nIndex);
  return UVar1;
}

// GetParent @ 150159fc3

HWND __stdcall GetParent(HWND hWnd)

{
  HWND pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159fc3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetParent(hWnd);
  return pHVar1;
}

// EnumChildWindows @ 150159fcf

BOOL __stdcall EnumChildWindows(HWND hWndParent,WNDENUMPROC lpEnumFunc,LPARAM lParam)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159fcf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = EnumChildWindows(hWndParent,lpEnumFunc,lParam);
  return BVar1;
}

// FindWindowW @ 150159fdb

HWND __stdcall FindWindowW(LPCWSTR lpClassName,LPCWSTR lpWindowName)

{
  HWND pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159fdb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = FindWindowW(lpClassName,lpWindowName);
  return pHVar1;
}

// SetWindowsHookExW @ 150159fe7

HHOOK __stdcall SetWindowsHookExW(int idHook,HOOKPROC lpfn,HINSTANCE hmod,DWORD dwThreadId)

{
  HHOOK pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159fe7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = SetWindowsHookExW(idHook,lpfn,hmod,dwThreadId);
  return pHVar1;
}

// UnhookWindowsHookEx @ 150159ff3

BOOL __stdcall UnhookWindowsHookEx(HHOOK hhk)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159ff3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = UnhookWindowsHookEx(hhk);
  return BVar1;
}

// CallNextHookEx @ 150159fff

LRESULT __stdcall CallNextHookEx(HHOOK hhk,int nCode,WPARAM wParam,LPARAM lParam)

{
  LRESULT LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159fff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = CallNextHookEx(hhk,nCode,wParam,lParam);
  return LVar1;
}

// LoadCursorW @ 15015a00b

HCURSOR __stdcall LoadCursorW(HINSTANCE hInstance,LPCWSTR lpCursorName)

{
  HCURSOR pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015a00b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = LoadCursorW(hInstance,lpCursorName);
  return pHVar1;
}

// LoadCursorFromFileW @ 15015a017

HCURSOR __stdcall LoadCursorFromFileW(LPCWSTR lpFileName)

{
  HCURSOR pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015a017. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = LoadCursorFromFileW(lpFileName);
  return pHVar1;
}

// LoadIconW @ 15015a023

HICON __stdcall LoadIconW(HINSTANCE hInstance,LPCWSTR lpIconName)

{
  HICON pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015a023. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = LoadIconW(hInstance,lpIconName);
  return pHVar1;
}

// LoadImageW @ 15015a02f

HANDLE __stdcall LoadImageW(HINSTANCE hInst,LPCWSTR name,UINT type,int cx,int cy,UINT fuLoad)

{
  HANDLE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015a02f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = LoadImageW(hInst,name,type,cx,cy,fuLoad);
  return pvVar1;
}

// DrawIconEx @ 15015a03b

BOOL __stdcall
DrawIconEx(HDC hdc,int xLeft,int yTop,HICON hIcon,int cxWidth,int cyWidth,UINT istepIfAniCur,
          HBRUSH hbrFlickerFreeDraw,UINT diFlags)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015a03b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = DrawIconEx(hdc,xLeft,yTop,hIcon,cxWidth,cyWidth,istepIfAniCur,hbrFlickerFreeDraw,diFlags);
  return BVar1;
}

// CreateIconIndirect @ 15015a047

HICON __stdcall CreateIconIndirect(PICONINFO piconinfo)

{
  HICON pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015a047. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CreateIconIndirect(piconinfo);
  return pHVar1;
}

// GetGuiResources @ 15015a053

DWORD __stdcall GetGuiResources(HANDLE hProcess,DWORD uiFlags)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015a053. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetGuiResources(hProcess,uiFlags);
  return DVar1;
}

// SystemParametersInfoW @ 15015a05f

BOOL __stdcall SystemParametersInfoW(UINT uiAction,UINT uiParam,PVOID pvParam,UINT fWinIni)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015a05f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SystemParametersInfoW(uiAction,uiParam,pvParam,fWinIni);
  return BVar1;
}

// MonitorFromPoint @ 15015a06b

HMONITOR __stdcall MonitorFromPoint(POINT pt,DWORD dwFlags)

{
  HMONITOR pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015a06b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = MonitorFromPoint(pt,dwFlags);
  return pHVar1;
}

// MonitorFromRect @ 15015a077

HMONITOR __stdcall MonitorFromRect(LPCRECT lprc,DWORD dwFlags)

{
  HMONITOR pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015a077. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = MonitorFromRect(lprc,dwFlags);
  return pHVar1;
}

// GetWindowInfo @ 15015a083

BOOL __stdcall GetWindowInfo(HWND hwnd,PWINDOWINFO pwi)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015a083. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetWindowInfo(hwnd,pwi);
  return BVar1;
}

// GetRawInputData @ 15015a08f

UINT __stdcall
GetRawInputData(HRAWINPUT hRawInput,UINT uiCommand,LPVOID pData,PUINT pcbSize,UINT cbSizeHeader)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015a08f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = GetRawInputData(hRawInput,uiCommand,pData,pcbSize,cbSizeHeader);
  return UVar1;
}

// GetRawInputDeviceInfoA @ 15015a09b

UINT __stdcall GetRawInputDeviceInfoA(HANDLE hDevice,UINT uiCommand,LPVOID pData,PUINT pcbSize)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015a09b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = GetRawInputDeviceInfoA(hDevice,uiCommand,pData,pcbSize);
  return UVar1;
}

// RegisterRawInputDevices @ 15015a0a7

BOOL __stdcall
RegisterRawInputDevices(PCRAWINPUTDEVICE pRawInputDevices,UINT uiNumDevices,UINT cbSize)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015a0a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = RegisterRawInputDevices(pRawInputDevices,uiNumDevices,cbSize);
  return BVar1;
}

// GetRawInputDeviceList @ 15015a0b3

UINT __stdcall
GetRawInputDeviceList(PRAWINPUTDEVICELIST pRawInputDeviceList,PUINT puiNumDevices,UINT cbSize)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015a0b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = GetRawInputDeviceList(pRawInputDeviceList,puiNumDevices,cbSize);
  return UVar1;
}

// SetRect @ 15015a0bf

BOOL __stdcall SetRect(LPRECT lprc,int xLeft,int yTop,int xRight,int yBottom)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015a0bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetRect(lprc,xLeft,yTop,xRight,yBottom);
  return BVar1;
}

// SetRectEmpty @ 15015a0cb

BOOL __stdcall SetRectEmpty(LPRECT lprc)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015a0cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetRectEmpty(lprc);
  return BVar1;
}

// ChangeDisplaySettingsW @ 15015a0d7

LONG __stdcall ChangeDisplaySettingsW(DEVMODEW *lpDevMode,DWORD dwFlags)

{
  LONG LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015a0d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = ChangeDisplaySettingsW(lpDevMode,dwFlags);
  return LVar1;
}

// ChangeDisplaySettingsExW @ 15015a0e3

LONG __stdcall
ChangeDisplaySettingsExW
          (LPCWSTR lpszDeviceName,DEVMODEW *lpDevMode,HWND hwnd,DWORD dwflags,LPVOID lParam)

{
  LONG LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015a0e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = ChangeDisplaySettingsExW(lpszDeviceName,lpDevMode,hwnd,dwflags,lParam);
  return LVar1;
}

// GetKeyNameTextW @ 15015a0ef

int __stdcall GetKeyNameTextW(LONG lParam,LPWSTR lpString,int cchSize)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015a0ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetKeyNameTextW(lParam,lpString,cchSize);
  return iVar1;
}

// GetWindowDisplayAffinity @ 15015a0fb

BOOL __stdcall GetWindowDisplayAffinity(HWND hWnd,DWORD *pdwAffinity)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015a0fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetWindowDisplayAffinity(hWnd,pdwAffinity);
  return BVar1;
}

// SetWindowDisplayAffinity @ 15015a107

BOOL __stdcall SetWindowDisplayAffinity(HWND hWnd,DWORD dwAffinity)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015a107. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetWindowDisplayAffinity(hWnd,dwAffinity);
  return BVar1;
}

// RegisterWindowMessageW @ 15015a113

UINT __stdcall RegisterWindowMessageW(LPCWSTR lpString)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015a113. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = RegisterWindowMessageW(lpString);
  return UVar1;
}

// GetDesktopWindow @ 15015a11f

HWND __stdcall GetDesktopWindow(void)

{
  HWND pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015a11f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetDesktopWindow();
  return pHVar1;
}

// AttachThreadInput @ 15015a12b

BOOL __stdcall AttachThreadInput(DWORD idAttach,DWORD idAttachTo,BOOL fAttach)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015a12b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = AttachThreadInput(idAttach,idAttachTo,fAttach);
  return BVar1;
}

// GetProcessWindowStation @ 15015a137

HWINSTA __stdcall GetProcessWindowStation(void)

{
  HWINSTA pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015a137. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetProcessWindowStation();
  return pHVar1;
}

// GetUserObjectInformationW @ 15015a143

BOOL __stdcall
GetUserObjectInformationW(HANDLE hObj,int nIndex,PVOID pvInfo,DWORD nLength,LPDWORD lpnLengthNeeded)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015a143. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetUserObjectInformationW(hObj,nIndex,pvInfo,nLength,lpnLengthNeeded);
  return BVar1;
}

// PostThreadMessageW @ 15015a14f

BOOL __stdcall PostThreadMessageW(DWORD idThread,UINT Msg,WPARAM wParam,LPARAM lParam)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015a14f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = PostThreadMessageW(idThread,Msg,wParam,lParam);
  return BVar1;
}

// GetQueueStatus @ 15015a15b

DWORD __stdcall GetQueueStatus(UINT flags)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015a15b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetQueueStatus(flags);
  return DVar1;
}

// EnumDisplayDevicesA @ 15015a167

BOOL __stdcall
EnumDisplayDevicesA(LPCSTR lpDevice,DWORD iDevNum,PDISPLAY_DEVICEA lpDisplayDevice,DWORD dwFlags)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015a167. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = EnumDisplayDevicesA(lpDevice,iDevNum,lpDisplayDevice,dwFlags);
  return BVar1;
}

// GetDisplayConfigBufferSizes @ 15015a173

LONG __stdcall
GetDisplayConfigBufferSizes
          (UINT32 flags,UINT32 *numPathArrayElements,UINT32 *numModeInfoArrayElements)

{
  LONG LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015a173. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = GetDisplayConfigBufferSizes(flags,numPathArrayElements,numModeInfoArrayElements);
  return LVar1;
}

// QueryDisplayConfig @ 15015a17f

/* WARNING: Enum "enum_689": Some values do not have unique names */
/* WARNING: Enum "enum_690": Some values do not have unique names */

LONG __stdcall
QueryDisplayConfig(UINT32 flags,UINT32 *numPathArrayElements,DISPLAYCONFIG_PATH_INFO *pathArray,
                  UINT32 *numModeInfoArrayElements,DISPLAYCONFIG_MODE_INFO *modeInfoArray,
                  DISPLAYCONFIG_TOPOLOGY_ID *currentTopologyId)

{
  LONG LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015a17f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = QueryDisplayConfig(flags,numPathArrayElements,pathArray,numModeInfoArrayElements,
                             modeInfoArray,currentTopologyId);
  return LVar1;
}

// DisplayConfigGetDeviceInfo @ 15015a18b

LONG __stdcall DisplayConfigGetDeviceInfo(DISPLAYCONFIG_DEVICE_INFO_HEADER *requestPacket)

{
  LONG LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015a18b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = DisplayConfigGetDeviceInfo(requestPacket);
  return LVar1;
}

// MessageBoxA @ 15015a197

int __stdcall MessageBoxA(HWND hWnd,LPCSTR lpText,LPCSTR lpCaption,UINT uType)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015a197. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = MessageBoxA(hWnd,lpText,lpCaption,uType);
  return iVar1;
}

