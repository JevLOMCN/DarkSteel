// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DesktopPlatform
// Functions: 16

// FWindowsNativeFeedbackContext @ 142d1c0b0

FWindowsNativeFeedbackContext * __thiscall
FWindowsNativeFeedbackContext::FWindowsNativeFeedbackContext(FWindowsNativeFeedbackContext *this)

{
  FFeedbackContext::FFeedbackContext((FFeedbackContext *)this);
  this->_padding_ = (longlong)&___7FWindowsNativeFeedbackContext__6B_;
  this->Context = (FContextSupplier *)0x0;
  this->hThread = (void *)0x0;
  this->hCloseEvent = (void *)0x0;
  this->hUpdateEvent = (void *)0x0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->CriticalSection,4000);
  (this->Status).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Status).Data.ArrayNum = 0;
  (this->Status).Data.ArrayMax = 0;
  this->Progress = 0.0;
  (this->LogOutput).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LogOutput).Data.ArrayNum = 0;
  (this->LogOutput).Data.ArrayMax = 0;
  this->bReceivedUserCancel = false;
  this->bShowCancelButton = false;
  return this;
}

// ~FWindowsNativeFeedbackContext @ 142d1cdb0

void __thiscall
FWindowsNativeFeedbackContext::~FWindowsNativeFeedbackContext(FWindowsNativeFeedbackContext *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FWindowsNativeFeedbackContext__6B_;
  DestroySlowTaskWindow(this);
  pFVar1 = (this->LogOutput).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Status).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->CriticalSection);
  FFeedbackContext::~FFeedbackContext((FFeedbackContext *)this);
  return;
}

// CreateSlowTaskWindow @ 142d1e800

void __thiscall
FWindowsNativeFeedbackContext::CreateSlowTaskWindow
          (FWindowsNativeFeedbackContext *this,FText *param_1,bool param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  bool bVar1;
  FString *pFVar2;
  HANDLE pvVar3;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if ((this->hThread == (void *)0x0) && (GIsSilent == false)) {
      bVar1 = FApp::IsUnattended();
      if ((!bVar1) && (PRIVATE_GIsRunningCommandlet == false)) {
        pFVar2 = FText::ToString(param_1);
        ::FString::operator=(&this->Status,pFVar2);
        this->Progress = 0.0;
        ::FString::Empty(&this->LogOutput);
        this->bReceivedUserCancel = false;
        this->bShowCancelButton = param_2;
        pvVar3 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCWSTR)0x0);
        this->hCloseEvent = pvVar3;
        pvVar3 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
        this->hUpdateEvent = pvVar3;
        pvVar3 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,SlowTaskThreadProc,this,0,(LPDWORD)0x0);
        this->hThread = pvVar3;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x000142d1e910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// DestroySlowTaskWindow @ 142d1ecc0

void __thiscall
FWindowsNativeFeedbackContext::DestroySlowTaskWindow(FWindowsNativeFeedbackContext *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (this->hThread != (void *)0x0) {
      SetEvent(this->hCloseEvent);
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      WaitForSingleObject(this->hThread,0xffffffff);
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      CloseHandle(this->hThread);
      this->hThread = (void *)0x0;
      CloseHandle(this->hCloseEvent);
      this->hCloseEvent = (void *)0x0;
      CloseHandle(this->hUpdateEvent);
      this->hUpdateEvent = (void *)0x0;
      ::FString::Empty(&this->LogOutput);
    }
                    /* WARNING: Could not recover jumptable at 0x000142d1ed86. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// FinalizeSlowTask @ 142d22050

void __thiscall FWindowsNativeFeedbackContext::FinalizeSlowTask(FWindowsNativeFeedbackContext *this)

{
  int *piVar1;
  double dVar2;
  longlong *plVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  LARGE_INTEGER local_res8;
  FGuid local_58;
  FDestructionSentinel local_48 [2];
  
  QueryPerformanceCounter(&local_res8);
  dVar5 = (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
          __real_4170000000000000;
  dVar2 = (double)this->_padding_;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_padding_,
             (FWriteAccessScope *)local_48);
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  *piVar1 = *piVar1 + 1;
  bVar6 = false;
  uVar11 = (int)this->_padding_ - 1;
  if ((int)uVar11 < 0) {
    piVar1 = (int *)((longlong)&this->_padding_ + 4);
    *piVar1 = *piVar1 + -1;
  }
  else {
    lVar10 = (longlong)(int)uVar11 << 4;
    do {
      uVar9 = 0;
      if ((int)uVar11 < (int)this->_padding_) {
        uVar9 = ~uVar11 >> 0x1f;
      }
      if (uVar9 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      if ((*(int *)(this->_padding_ + 8 + lVar10) == 0) ||
         (plVar3 = *(longlong **)(this->_padding_ + lVar10), plVar3 == (longlong *)0x0)) {
LAB_142d2214b:
        bVar6 = true;
      }
      else {
        cVar8 = (**(code **)(*plVar3 + 0x68))(plVar3,&this->_padding_,SUB84(dVar5 - dVar2,0));
        if (cVar8 == '\0') goto LAB_142d2214b;
      }
      lVar10 = lVar10 + -0x10;
      uVar11 = uVar11 - 1;
    } while (-1 < (int)uVar11);
    piVar1 = (int *)((longlong)&this->_padding_ + 4);
    *piVar1 = *piVar1 + -1;
    if (bVar6) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->_padding_,false);
    }
  }
  if (local_48[0].bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48[0].Accessor,local_48);
  }
  local_58._0_8_ = this->_padding_;
  local_58._8_8_ = this->_padding_;
  TMulticastDelegate<void___cdecl(FGuid,FText_const_&),FDefaultDelegateUserPolicy>::Broadcast
            ((TMulticastDelegate<void___cdecl(FGuid,FText_const_&),FDefaultDelegateUserPolicy> *)
             &this->_padding_,&local_58,(FText *)&this->_padding_);
  GIsSlowTask = false;
  DestroySlowTaskWindow(this);
  return;
}

// GetContext @ 142d22a40

FContextSupplier * __thiscall
FWindowsNativeFeedbackContext::GetContext(FWindowsNativeFeedbackContext *this)

{
  return this->Context;
}

// LayoutControls @ 142d2a5b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FWindowsNativeFeedbackContext::LayoutControls(HWND__ *param_1,FWindowParams *param_2)

{
  int iVar1;
  int Y;
  int X;
  HWND pHVar2;
  int nHeight;
  int iVar3;
  undefined1 auStackY_78 [32];
  tagRECT local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_78;
  GetClientRect((HWND)param_1,&local_48);
  iVar1 = param_2->ScaleX;
  Y = param_2->ScaleY;
  X = iVar1 * 2;
  iVar3 = local_48.right + iVar1 * -0xf;
  nHeight = (int)((Y * 7 >> 0x1f & 3U) + Y * 7) >> 2;
  pHVar2 = GetDlgItem((HWND)param_1,0xca);
  MoveWindow(pHVar2,iVar3,(Y * 4 - nHeight) / 2,(local_48.right - iVar3) + iVar1 * -2,nHeight,1);
  pHVar2 = GetDlgItem((HWND)param_1,200);
  iVar3 = iVar3 + iVar1 * -4;
  MoveWindow(pHVar2,X,Y,iVar3,param_2->ScaleY,1);
  pHVar2 = GetDlgItem((HWND)param_1,0xc9);
  MoveWindow(pHVar2,X,(param_2->ScaleY * 3) / 2 + Y,iVar3,(param_2->ScaleY + 1) / 2,1);
  pHVar2 = GetDlgItem((HWND)param_1,0xcb);
  MoveWindow(pHVar2,X,Y * 4,local_48.right + iVar1 * -4,local_48.bottom + Y * -5,1);
  return;
}

// ProgressReported @ 142d2da70

void __thiscall
FWindowsNativeFeedbackContext::ProgressReported
          (FWindowsNativeFeedbackContext *this,float param_1,FText *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  ITextData *pIVar1;
  FString *pFVar2;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (this->hThread != (void *)0x0) {
      this->Progress = param_1;
      pFVar2 = FText::ToString(param_2);
      ::FString::operator=(&this->Status,pFVar2);
      SetEvent(this->hUpdateEvent);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pIVar1 = (param_2->TextData).Reference;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))();
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// ReceivedUserCancel @ 142d30930

bool __thiscall
FWindowsNativeFeedbackContext::ReceivedUserCancel(FWindowsNativeFeedbackContext *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  bool bVar1;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    bVar1 = this->bReceivedUserCancel;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// Serialize @ 142d31f90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FWindowsNativeFeedbackContext::Serialize
          (FWindowsNativeFeedbackContext *this,wchar_t *param_1,Type param_2,FName *param_3)

{
  (**(code **)(this->_padding_ + 8))();
  return;
}

// Serialize @ 142d31fc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FWindowsNativeFeedbackContext::Serialize
          (FWindowsNativeFeedbackContext *this,wchar_t *param_1,Type param_2,FName *param_3,
          double param_4)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  size_t sVar1;
  
  FFeedbackContext::Serialize((FFeedbackContext *)this,param_1,param_2,param_3,param_4);
  if (GIsSlowTask != false) {
    lpCriticalSection = &this->CriticalSection;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (this->hThread != (void *)0x0) {
      sVar1 = wcslen(param_1);
      ::FString::AppendChars(&this->LogOutput,param_1,(int)sVar1);
      ::FString::AppendChars(&this->LogOutput,L"\r\n",2);
      SetEvent(this->hUpdateEvent);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// SerializeRecord @ 142d32080

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FWindowsNativeFeedbackContext::SerializeRecord
          (FWindowsNativeFeedbackContext *this,FLogRecord *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  void *pvVar1;
  undefined1 auStack_458 [32];
  TStringBuilderBase<wchar_t> local_438;
  wchar_t local_418 [512];
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStack_458;
  FFeedbackContext::SerializeRecord((FFeedbackContext *)this,param_1);
  if (GIsSlowTask != false) {
    local_438.Base = local_418;
    local_438.bIsDynamic = false;
    local_438.bIsExternal = false;
    local_438.CurPos = local_418;
    local_438.End = (wchar_t *)local_18;
    UE::FLogRecord::FormatMessageTo(param_1,&local_438);
    if (local_438.End < local_438.CurPos + 2) {
      TStringBuilderBase<wchar_t>::Extend(&local_438,2);
    }
    pvVar1 = FGenericPlatformString::Memcpy(local_438.CurPos,L"\r\n",4);
    local_438.CurPos = (wchar_t *)((longlong)pvVar1 + 4);
    lpCriticalSection = &this->CriticalSection;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (this->hThread != (void *)0x0) {
      ::FString::AppendChars
                (&this->LogOutput,local_438.Base,
                 (int)((longlong)local_438.CurPos - (longlong)local_438.Base >> 1));
      SetEvent(this->hUpdateEvent);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_438);
  }
  return;
}

// SetContext @ 142d32380

void __thiscall
FWindowsNativeFeedbackContext::SetContext
          (FWindowsNativeFeedbackContext *this,FContextSupplier *param_1)

{
  this->Context = param_1;
  return;
}

// SlowTaskThreadProc @ 142d32820

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulong __cdecl FWindowsNativeFeedbackContext::SlowTaskThreadProc(void *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  float fVar1;
  ATOM AVar2;
  uint uVar3;
  int iVar4;
  DWORD DVar5;
  int iVar6;
  HMODULE pHVar7;
  HWND__ *hWndParent;
  HFONT pHVar8;
  HDC pHVar9;
  HGDIOBJ h;
  HWND hWnd;
  HWND pHVar10;
  HWND hWnd_00;
  HWND hWnd_01;
  wchar_t *pwVar11;
  WPARAM wParam;
  bool bVar12;
  float fVar13;
  undefined1 auStackY_3f8 [32];
  FString local_388;
  HFONT local_378;
  HFONT local_370;
  HMODULE local_368;
  HANDLE local_360;
  undefined8 local_358;
  FWindowParams local_350;
  LPCWSTR local_330;
  WNDCLASSEXW local_328;
  tagMSG local_2d8;
  tagRECT local_2a8;
  tagTEXTMETRICW local_298;
  undefined4 local_258 [102];
  LOGFONTW local_c0;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_3f8;
  pHVar7 = GetModuleHandleW((LPCWSTR)0x0);
  local_368 = pHVar7;
  hWndParent = GetSplashScreenWindowHandle();
  local_328.cbSize = 0x50;
  local_328.cbClsExtra = 0;
  local_328.cbWndExtra = 0;
  local_328.lpszMenuName = (LPCWSTR)0x0;
  local_328.style = 0x203;
  if (*(char *)((longlong)param_1 + 0x1a9) != '\0') {
    local_328.style = 3;
  }
  local_328.hIconSm = (HICON)0x0;
  local_328.lpfnWndProc = SlowTaskWindowProc;
  uVar3 = FWindowsPlatformApplicationMisc::GetAppIcon();
  local_328.hIcon = LoadIconW(pHVar7,(LPCWSTR)(ulonglong)(uVar3 & 0xffff));
  local_328.hCursor = LoadCursorW((HINSTANCE)0x0,(LPCWSTR)0x7f00);
  local_328.lpszClassName = L"FFeedbackContextWindows";
  local_328.hbrBackground = (HBRUSH)&DAT_00000010;
  local_328.hInstance = pHVar7;
  AVar2 = RegisterClassExW(&local_328);
  local_258[0] = 0x1f8;
  SystemParametersInfoW(0x29,0x1f8,local_258,0);
  pHVar8 = CreateFontIndirectW(&local_c0);
  local_370 = pHVar8;
  pHVar9 = GetDC((HWND)0x0);
  iVar4 = GetDeviceCaps(pHVar9,0x5a);
  iVar4 = MulDiv(8,iVar4,0x48);
  local_378 = CreateFontW(-iVar4,0,0,0,400,0,0,0,0,0,0,4,0x31,L"Courier New");
  pHVar9 = CreateCompatibleDC((HDC)0x0);
  h = SelectObject(pHVar9,pHVar8);
  GetTextMetricsW(pHVar9,&local_298);
  SelectObject(pHVar9,h);
  DeleteDC(pHVar9);
  local_350.ScaleX = local_298.tmAveCharWidth;
  local_350.ScaleY = local_298.tmHeight;
  local_350.bLogVisible = false;
  local_350.StandardW = local_298.tmAveCharWidth * 0x50;
  local_350.StandardH = local_298.tmHeight * 4;
  local_350.Context = param_1;
  iVar4 = GetSystemMetrics(0);
  local_2a8.left = (iVar4 - local_350.StandardW) / 2;
  iVar4 = GetSystemMetrics(1);
  local_2a8.right = local_350.StandardW + local_2a8.left;
  local_2a8.top = (iVar4 - local_350.StandardH) / 2;
  local_2a8.bottom = local_2a8.top + local_350.StandardH;
  AdjustWindowRectEx(&local_2a8,0x10cc0000,0,0);
  local_330 = (LPCWSTR)(ulonglong)AVar2;
  hWnd = CreateWindowExW(0,(LPCWSTR)(ulonglong)AVar2,L"Unreal Engine",0x10cc0000,local_2a8.left,
                         local_2a8.top,local_2a8.right - local_2a8.left,
                         local_2a8.bottom - local_2a8.top,(HWND)hWndParent,(HMENU)0x0,pHVar7,
                         (LPVOID)0x0);
  SetWindowLongPtrW(hWnd,-0x15,(LONG_PTR)&local_350);
  pHVar8 = local_370;
  SendMessageW(hWnd,0x30,(WPARAM)local_370,0);
  iVar4 = 0;
  pHVar10 = CreateWindowExW(0,L"Button",L"Show log",0x50000f00,10,10,10,10,hWnd,(HMENU)0xca,pHVar7,
                            (LPVOID)0x0);
  SendMessageW(pHVar10,0x30,(WPARAM)pHVar8,0);
  pHVar10 = CreateWindowExW(0,L"Static",L"",0x50000001,10,10,10,10,hWnd,(HMENU)0xc8,pHVar7,
                            (LPVOID)0x0);
  SendMessageW(pHVar10,0x30,(WPARAM)pHVar8,0);
  pHVar7 = local_368;
  hWnd_00 = CreateWindowExW(0,L"msctls_progress32",L"",0x50000000,10,10,10,10,hWnd,(HMENU)0xc9,
                            local_368,(LPVOID)0x0);
  SendMessageW(hWnd_00,0x406,0,1000);
  hWnd_01 = CreateWindowExW(0x20000,L"Edit",L"",0x50300804,10,10,10,10,hWnd,(HMENU)0xcb,pHVar7,
                            (LPVOID)0x0);
  SendMessageW(hWnd_01,0x30,(WPARAM)local_378,0);
  LayoutControls((HWND__ *)hWnd,&local_350);
  SetEvent(*(HANDLE *)((longlong)param_1 + 0x150));
  ShowWindow(hWnd,5);
  UpdateWindow(hWnd);
  SetForegroundWindow(hWnd);
  local_388.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_360 = *(HANDLE *)((longlong)param_1 + 0x148);
  local_358 = *(undefined8 *)((longlong)param_1 + 0x150);
  local_388.Data.ArrayNum = 0;
  local_388.Data.ArrayMax = 0;
  fVar13 = 0.0;
  DVar5 = MsgWaitForMultipleObjects(2,&local_360,0,0xffffffff,0x1cbf);
  fVar1 = __real_447a0000;
  do {
    if (DVar5 == 0) {
      DestroyWindow(hWnd);
      DeleteObject(local_378);
      DeleteObject(local_370);
      UnregisterClassW(local_330,local_368);
      if (local_388.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_388.Data.AllocatorInstance.Data);
      }
      return 0;
    }
    if (DVar5 == 1) {
      lpCriticalSection = (LPCRITICAL_SECTION)((longlong)param_1 + 0x158);
      if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection(lpCriticalSection);
      iVar6 = *(int *)((longlong)param_1 + 0x188);
      if (iVar6 == local_388.Data.ArrayNum) {
        if (1 < iVar6) {
          iVar6 = FGenericPlatformStricmp::Stricmp
                            (*(wchar_t **)((longlong)param_1 + 0x180),
                             (wchar_t *)local_388.Data.AllocatorInstance.Data);
          bVar12 = iVar6 == 0;
          goto LAB_142d32d77;
        }
      }
      else {
        bVar12 = iVar6 + local_388.Data.ArrayNum == 1;
LAB_142d32d77:
        if (!bVar12) {
          if (*(int *)((longlong)param_1 + 0x188) == 0) {
            pwVar11 = L"";
          }
          else {
            pwVar11 = *(wchar_t **)((longlong)param_1 + 0x180);
          }
          SetWindowTextW(pHVar10,pwVar11);
          iVar6 = *(int *)((longlong)param_1 + 0x188) + -1;
          if (*(int *)((longlong)param_1 + 0x188) == 0) {
            iVar6 = 0;
          }
          ::FString::AssignRange(&local_388,*(wchar_t **)((longlong)param_1 + 0x180),iVar6);
        }
      }
      if (*(float *)((longlong)param_1 + 400) != fVar13) {
        SendMessageW(hWnd_00,0x402,(longlong)(int)(*(float *)((longlong)param_1 + 400) * fVar1),0);
        fVar13 = *(float *)((longlong)param_1 + 400);
      }
      iVar6 = *(int *)((longlong)param_1 + 0x1a0) + -1;
      if (*(int *)((longlong)param_1 + 0x1a0) == 0) {
        iVar6 = 0;
      }
      if (iVar4 < iVar6) {
        wParam = (WPARAM)iVar4;
        SendMessageW(hWnd_01,0xb1,wParam,wParam);
        if (*(int *)((longlong)param_1 + 0x1a0) == 0) {
          pwVar11 = L"";
        }
        else {
          pwVar11 = *(wchar_t **)((longlong)param_1 + 0x198);
        }
        SendMessageW(hWnd_01,0xc2,0,(LPARAM)(pwVar11 + wParam));
        SendMessageW(hWnd_01,0xb7,0,0);
        iVar4 = *(int *)((longlong)param_1 + 0x1a0) + -1;
        if (*(int *)((longlong)param_1 + 0x1a0) == 0) {
          iVar4 = 0;
        }
      }
      LeaveCriticalSection(lpCriticalSection);
    }
    iVar6 = PeekMessageW(&local_2d8,(HWND)0x0,0,0,1);
    while (iVar6 != 0) {
      TranslateMessage(&local_2d8);
      DispatchMessageW(&local_2d8);
      iVar6 = PeekMessageW(&local_2d8,(HWND)0x0,0,0,1);
    }
    local_360 = *(HANDLE *)((longlong)param_1 + 0x148);
    local_358 = *(undefined8 *)((longlong)param_1 + 0x150);
    DVar5 = MsgWaitForMultipleObjects(2,&local_360,0,0xffffffff,0x1cbf);
  } while( true );
}

// SlowTaskWindowProc @ 142d32fb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

long64 __cdecl
FWindowsNativeFeedbackContext::SlowTaskWindowProc
          (HWND__ *param_1,uint param_2,ulong64 param_3,long64 param_4)

{
  bool bVar1;
  DWORD dwStyle;
  LRESULT LVar2;
  FWindowParams *pFVar3;
  HWND hWnd;
  LONG_PTR LVar4;
  longlong *plVar5;
  int iVar6;
  LPCRITICAL_SECTION lpCriticalSection;
  wchar_t *lpString;
  undefined1 auStackY_78 [32];
  tagRECT local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_78;
  if (param_2 == 5) {
    pFVar3 = (FWindowParams *)GetWindowLongPtrW((HWND)param_1,-0x15);
    if (pFVar3 == (FWindowParams *)0x0) {
      return 0;
    }
  }
  else {
    if (param_2 == 0x10) {
      plVar5 = (longlong *)GetWindowLongPtrW((HWND)param_1,-0x15);
      lpCriticalSection = (LPCRITICAL_SECTION)(*plVar5 + 0x158);
      if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
        EnterCriticalSection(lpCriticalSection);
        *(undefined1 *)(*plVar5 + 0x1a8) = 1;
        LeaveCriticalSection(lpCriticalSection);
        return 0;
      }
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    if (param_2 == 0x24) {
      LVar4 = GetWindowLongPtrW((HWND)param_1,-0x15);
      if (LVar4 == 0) {
        return 0;
      }
      if (*(char *)(LVar4 + 0x18) == '\0') {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)(LVar4 + 0xc) * 5;
      }
      SetRect(&local_38,0,0,*(int *)(LVar4 + 0x10),*(int *)(LVar4 + 0x14) + iVar6);
      AdjustWindowRectEx(&local_38,0xc00000,0,0);
      *(LONG *)(param_4 + 0x18) = local_38.right - local_38.left;
      *(LONG *)(param_4 + 0x1c) = local_38.bottom - local_38.top;
      if (*(char *)(LVar4 + 0x18) != '\0') {
        return 0;
      }
      *(LONG *)(param_4 + 0x24) = local_38.bottom - local_38.top;
      return 0;
    }
    if (param_2 != 0x111) {
      LVar2 = DefWindowProcW((HWND)param_1,param_2,param_3,param_4);
      return LVar2;
    }
    if (param_3 != 0xca) {
      return 0;
    }
    pFVar3 = (FWindowParams *)GetWindowLongPtrW((HWND)param_1,-0x15);
    pFVar3->bLogVisible = (bool)(pFVar3->bLogVisible ^ 1);
    GetClientRect((HWND)param_1,&local_38);
    if (pFVar3->bLogVisible == false) {
      local_38.bottom = 0;
    }
    else {
      local_38.bottom = pFVar3->ScaleY * 10;
    }
    local_38.bottom = pFVar3->StandardH + local_38.bottom;
    dwStyle = GetWindowLongW((HWND)param_1,-0x10);
    AdjustWindowRectEx(&local_38,dwStyle,0,0);
    SetWindowPos((HWND)param_1,(HWND)0x0,0,0,local_38.right - local_38.left,
                 local_38.bottom - local_38.top,6);
    lpString = L"Show log";
    if (pFVar3->bLogVisible != false) {
      lpString = L"Hide log";
    }
    SetDlgItemTextW((HWND)param_1,0xca,lpString);
    bVar1 = pFVar3->bLogVisible;
    hWnd = GetDlgItem((HWND)param_1,0xcb);
    ShowWindow(hWnd,-(uint)(bVar1 != false) & 5);
  }
  LayoutControls(param_1,pFVar3);
  return 0;
}

// StartSlowTask @ 142d331e0

void __thiscall
FWindowsNativeFeedbackContext::StartSlowTask
          (FWindowsNativeFeedbackContext *this,FText *param_1,bool param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  bool bVar1;
  FString *pFVar2;
  HANDLE pvVar3;
  
  FFeedbackContext::StartSlowTask((FFeedbackContext *)this,param_1,param_2);
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if ((this->hThread == (void *)0x0) && (GIsSilent == false)) {
      bVar1 = FApp::IsUnattended();
      if ((!bVar1) && (PRIVATE_GIsRunningCommandlet == false)) {
        pFVar2 = FText::ToString(param_1);
        ::FString::operator=(&this->Status,pFVar2);
        this->Progress = 0.0;
        ::FString::Empty(&this->LogOutput);
        this->bReceivedUserCancel = false;
        this->bShowCancelButton = param_2;
        pvVar3 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCWSTR)0x0);
        this->hCloseEvent = pvVar3;
        pvVar3 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
        this->hUpdateEvent = pvVar3;
        pvVar3 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,SlowTaskThreadProc,this,0,(LPDWORD)0x0);
        this->hThread = pvVar3;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x000142d332f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

