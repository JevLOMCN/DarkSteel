// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ApplicationCore
// Functions: 19

// ClipboardCopy @ 1423d2c30

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FWindowsPlatformApplicationMisc::ClipboardCopy(wchar_t *param_1)

{
  code *pcVar1;
  bool bVar2;
  BOOL BVar3;
  int iVar4;
  HWND hWndNewOwner;
  HGLOBAL hMem;
  wchar_t *pwVar5;
  HANDLE pvVar6;
  
  hWndNewOwner = GetActiveWindow();
  BVar3 = OpenClipboard(hWndNewOwner);
  if (BVar3 == 0) {
    UE::Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    if (2 < (byte)LogWindows._0_1_) {
      GetLastError();
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogWindows);
    }
  }
  else {
    BVar3 = EmptyClipboard();
    if ((BVar3 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("EmptyClipboard()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ApplicationCore\\Private\\Windows\\WindowsPlatformApplicationMisc.cpp"
                           ,0x191,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    iVar4 = TCString<wchar_t>::Strlen(param_1);
    hMem = GlobalAlloc(2,(longlong)(iVar4 + 1) << 1);
    if ((hMem == (HGLOBAL)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("GlobalMem",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ApplicationCore\\Private\\Windows\\WindowsPlatformApplicationMisc.cpp"
                           ,0x195,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pwVar5 = GlobalLock(hMem);
    TCString<wchar_t>::Strncpy(pwVar5,param_1,(longlong)(iVar4 + 1));
    GlobalUnlock(hMem);
    pvVar6 = SetClipboardData(0xd,hMem);
    if (pvVar6 == (HANDLE)0x0) {
      UE::Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      GetLastError();
      UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogWindows);
    }
    BVar3 = CloseClipboard();
    if ((BVar3 == 0) &&
       (UE::Core::Private::FormatStringSan::
        AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>(),
       2 < (byte)LogWindows._0_1_)) {
      GetLastError();
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogWindows);
    }
  }
  return;
}

// ClipboardPaste @ 1423d2eb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FWindowsPlatformApplicationMisc::ClipboardPaste(FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  wchar_t wVar3;
  BOOL BVar4;
  HWND hWndNewOwner;
  bool bVar5;
  int local_94;
  HGLOBAL local_88;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_80;
  uint local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  int local_60;
  wchar_t *local_58;
  wchar_t *local_50;
  undefined4 local_48;
  undefined4 local_44;
  FScriptContainerElement *local_30;
  FString *local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  hWndNewOwner = GetActiveWindow();
  BVar4 = OpenClipboard(hWndNewOwner);
  if (BVar4 == 0) {
    ::FString::operator=(param_1,L"");
    local_18 = 0;
    local_14 = 0;
    UE::Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    local_64 = (uint)((byte)LogWindows._0_1_ < 3);
    if ((byte)LogWindows._0_1_ >= 3) {
      GetLastError();
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogWindows);
    }
  }
  else {
    local_88 = GetClipboardData(0xd);
    bVar5 = local_88 == (HANDLE)0x0;
    if (bVar5) {
      local_88 = GetClipboardData(1);
    }
    if (local_88 == (HGLOBAL)0x0) {
      ::FString::operator=(param_1,L"");
    }
    else {
      local_58 = GlobalLock(local_88);
      if ((local_58 == (wchar_t *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("Data",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ApplicationCore\\Private\\Windows\\WindowsPlatformApplicationMisc.cpp"
                             ,0x1ba,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (bVar5) {
        local_50 = local_58;
        for (local_94 = 0; *(char *)((longlong)local_58 + (longlong)local_94) != '\0';
            local_94 = local_94 + 1) {
        }
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
                  (&local_80.AllocatorInstance);
        local_80.ArrayNum = 0;
        local_80.ArrayMax =
             TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                       (&local_80.AllocatorInstance);
        UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_94 + 1,&local_80.AllocatorInstance,&local_80.ArrayNum,
                   &local_80.ArrayMax);
        for (local_94 = 0; local_60 = local_80.ArrayNum, local_94 < local_80.ArrayNum;
            local_94 = local_94 + 1) {
          wVar3 = CharCast<wchar_t,char>(*(char *)((longlong)local_50 + (longlong)local_94));
          local_6c = (uint)(-1 < local_94);
          local_70 = (uint)(local_94 < local_80.ArrayNum);
          if (-1 >= local_94 || local_94 >= local_80.ArrayNum) {
            local_48 = 0;
            local_44 = 0;
            UE::Core::Private::FormatStringSan::
            AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar5) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
          }
          local_30 = local_80.AllocatorInstance.Data + (longlong)local_94 * 2;
          *(wchar_t *)local_30 = wVar3;
        }
        local_28 = param_1;
        TArray<wchar_t,TSizedDefaultAllocator<32>_>::operator=(&param_1->Data,&local_80);
        TArray<wchar_t,TSizedDefaultAllocator<32>_>::~TArray<wchar_t,TSizedDefaultAllocator<32>_>
                  (&local_80);
      }
      else {
        ::FString::operator=(param_1,local_58);
      }
      GlobalUnlock(local_88);
    }
    BVar4 = CloseClipboard();
    if (BVar4 == 0) {
      local_20 = 0;
      local_1c = 0;
      UE::Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      local_68 = (uint)((byte)LogWindows._0_1_ < 3);
      if ((byte)LogWindows._0_1_ >= 3) {
        GetLastError();
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogWindows);
      }
    }
  }
  return;
}

// CreateApplication @ 1423d5390

GenericApplication * __cdecl FWindowsPlatformApplicationMisc::CreateApplication(void)

{
  HINSTANCE__ *pHVar1;
  FWindowsApplication *pFVar2;
  bool bVar3;
  wchar_t *pwVar4;
  FNullApplication *this;
  HICON pHVar5;
  FWindowsApplication *this_00;
  FWindowsApplication *pFVar6;
  
  pwVar4 = FCommandLine::Get();
  bVar3 = FParse::Param(pwVar4,L"RenderOffScreen");
  if (bVar3) {
    pFVar6 = (FWindowsApplication *)NullApplication;
    pFVar2 = WindowsApplication;
    if (NullApplication == (FNullApplication *)0x0) {
      this = ::operator_new(0x120);
      if (this == (FNullApplication *)0x0) {
        NullApplication = this;
        return (GenericApplication *)0x0;
      }
      NullApplication = FNullApplication::FNullApplication(this);
      return (GenericApplication *)NullApplication;
    }
  }
  else {
    pHVar5 = LoadIconW((HINSTANCE)hInstance,(LPCWSTR)0x7b);
    if (pHVar5 == (HICON)0x0) {
      pHVar5 = LoadIconW((HINSTANCE)0x0,(LPCWSTR)0x7f00);
    }
    pHVar1 = hInstance;
    this_00 = ::operator_new(0x2e0);
    pFVar6 = (FWindowsApplication *)0x0;
    pFVar2 = pFVar6;
    if (this_00 != (FWindowsApplication *)0x0) {
      pFVar6 = FWindowsApplication::FWindowsApplication(this_00,pHVar1,(HICON__ *)pHVar5);
      pFVar2 = pFVar6;
    }
  }
  WindowsApplication = pFVar2;
  return (GenericApplication *)pFVar6;
}

// CreateConsoleOutputDevice @ 1423d5d60

/* WARNING: Enum "Type": Some values do not have unique names */

FOutputDeviceConsole * __cdecl FWindowsPlatformApplicationMisc::CreateConsoleOutputDevice(void)

{
  bool bVar1;
  wchar_t *pwVar2;
  FWindowsConsoleOutputDevice2 *pFVar3;
  FWindowsConsoleOutputDevice *pFVar4;
  
  pwVar2 = FCommandLine::Get();
  bVar1 = FParse::Param(pwVar2,L"NewConsole");
  if (bVar1) {
    pFVar3 = ::operator_new(0xa30);
    if (pFVar3 != (FWindowsConsoleOutputDevice2 *)0x0) {
      pFVar3 = FWindowsConsoleOutputDevice2::FWindowsConsoleOutputDevice2(pFVar3);
      return (FOutputDeviceConsole *)pFVar3;
    }
  }
  else {
    pFVar4 = ::operator_new(0x990);
    if (pFVar4 != (FWindowsConsoleOutputDevice *)0x0) {
      pFVar4 = FWindowsConsoleOutputDevice::FWindowsConsoleOutputDevice(pFVar4);
      return (FOutputDeviceConsole *)pFVar4;
    }
  }
  return (FOutputDeviceConsole *)0x0;
}

// GetAppIcon @ 1423ddbb0

int __cdecl FWindowsPlatformApplicationMisc::GetAppIcon(void)

{
  return 0x7b;
}

// GetBestGPUInfo @ 1423ddbd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FGPUInfo * __cdecl FWindowsPlatformApplicationMisc::GetBestGPUInfo(FGPUInfo *__return_storage_ptr__)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  longlong lVar12;
  longlong *plVar13;
  int iVar14;
  ulonglong uVar15;
  undefined1 auStack_2b8 [32];
  longlong *local_298;
  longlong *local_290;
  undefined8 local_288 [32];
  uint local_188;
  uint local_184;
  ulonglong local_178;
  undefined8 local_158 [34];
  ulonglong local_48;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_2b8;
  iVar14 = 0;
  local_290 = (longlong *)0x0;
  iVar9 = CreateDXGIFactory1(&_GUID_770aae78_f26f_4dba_a829_253c83d1b387);
  plVar13 = local_290;
  if ((iVar9 == 0) && (local_290 != (longlong *)0x0)) {
    memset(local_288,0,0x130);
    local_298 = (longlong *)0x0;
    uVar15 = local_178;
    while( true ) {
      plVar6 = local_298;
      pcVar1 = *(code **)(*plVar13 + 0x38);
      if (local_298 != (longlong *)0x0) {
        local_298 = (longlong *)0x0;
        (**(code **)(*plVar6 + 0x10))();
      }
      iVar9 = (*pcVar1)(plVar13,iVar14,&local_298);
      if (iVar9 == -0x7785fffe) break;
      if ((local_298 != (longlong *)0x0) &&
         (((**(code **)(*local_298 + 0x40))(local_298,local_158), uVar15 < local_48 || (iVar14 == 0)
          ))) {
        lVar12 = 2;
        puVar7 = local_158;
        puVar8 = local_288;
        do {
          puVar11 = puVar8;
          puVar10 = puVar7;
          uVar2 = puVar10[1];
          uVar3 = puVar10[2];
          uVar4 = puVar10[3];
          *puVar11 = *puVar10;
          puVar11[1] = uVar2;
          uVar2 = puVar10[4];
          uVar5 = puVar10[5];
          puVar11[2] = uVar3;
          puVar11[3] = uVar4;
          uVar3 = puVar10[6];
          uVar4 = puVar10[7];
          puVar11[4] = uVar2;
          puVar11[5] = uVar5;
          uVar2 = puVar10[8];
          uVar5 = puVar10[9];
          puVar11[6] = uVar3;
          puVar11[7] = uVar4;
          uVar3 = puVar10[10];
          uVar4 = puVar10[0xb];
          puVar11[8] = uVar2;
          puVar11[9] = uVar5;
          uVar2 = puVar10[0xc];
          uVar5 = puVar10[0xd];
          puVar11[10] = uVar3;
          puVar11[0xb] = uVar4;
          uVar3 = puVar10[0xe];
          uVar4 = puVar10[0xf];
          puVar11[0xc] = uVar2;
          puVar11[0xd] = uVar5;
          puVar11[0xe] = uVar3;
          puVar11[0xf] = uVar4;
          lVar12 = lVar12 + -1;
          puVar7 = puVar10 + 0x10;
          puVar8 = puVar11 + 0x10;
        } while (lVar12 != 0);
        uVar2 = puVar10[0x11];
        uVar3 = puVar10[0x12];
        uVar4 = puVar10[0x13];
        puVar11[0x10] = puVar10[0x10];
        puVar11[0x11] = uVar2;
        uVar2 = puVar10[0x14];
        uVar5 = puVar10[0x15];
        puVar11[0x12] = uVar3;
        puVar11[0x13] = uVar4;
        puVar11[0x14] = uVar2;
        puVar11[0x15] = uVar5;
        uVar15 = local_178;
      }
      iVar14 = iVar14 + 1;
      plVar13 = local_290;
    }
    __return_storage_ptr__->VendorId = local_188;
    __return_storage_ptr__->DeviceId = local_184;
    __return_storage_ptr__->DedicatedVideoMemory = uVar15;
    if (local_298 != (longlong *)0x0) {
      (**(code **)(*local_298 + 0x10))();
    }
    if (local_290 == (longlong *)0x0) {
      return __return_storage_ptr__;
    }
    lVar12 = *local_290;
  }
  else {
    __return_storage_ptr__->VendorId = 0;
    __return_storage_ptr__->DeviceId = 0;
    __return_storage_ptr__->DedicatedVideoMemory = 0;
    if (local_290 == (longlong *)0x0) {
      return __return_storage_ptr__;
    }
    lVar12 = *local_290;
  }
  (**(code **)(lVar12 + 0x10))(local_290);
  return __return_storage_ptr__;
}

// GetDPIScaleFactorAtPoint @ 1423de140

float __cdecl FWindowsPlatformApplicationMisc::GetDPIScaleFactorAtPoint(float param_1,float param_2)

{
  POINT pt;
  int iVar1;
  HMONITOR pHVar2;
  HDC hdc;
  float fVar3;
  uint local_res18;
  int iStackX_1c;
  uint local_res20 [2];
  
  fVar3 = __real_3f800000;
  if (bEnableHighDPIAwareness != 0) {
    if (GetDpiForMonitor == (_func___cdecl_T_HRESULT_HMONITOR___ptr_int_uint_ptr_uint_ptr *)0x0) {
      hdc = GetDC((HWND)0x0);
      iVar1 = GetDeviceCaps(hdc,0x58);
      fVar3 = (float)iVar1 *
              `public:_static_bool___cdecl_UE::Core::Private::TIsType<TValueOrError<TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_>,FFileSystemError>::FWrapErrorType,TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_>,TValueOrError<class_TUniquePtr<class_IFileHandle,struct_TDefaultDelete<class_IFileHandle>_>,class_FFileSystemError>::FWrapErrorType,TValueOrError<class_TUniquePtr<class_IFileHandle,struct_TDefaultDelete<class_IFileHandle>_>,class_FFileSystemError>::FEmptyType>::IsSame(unsigned___int64)'
              ::__l2::bIsSameType._4_4_;
      ReleaseDC((HWND)0x0,hdc);
    }
    else {
      local_res18 = (uint)param_1;
      iStackX_1c = (int)param_2;
      pt.y = iStackX_1c;
      pt.x = local_res18;
      pHVar2 = MonitorFromPoint(pt,2);
      if (pHVar2 != (HMONITOR)0x0) {
        local_res18 = 0;
        local_res20[0] = 0;
        iVar1 = (*GetDpiForMonitor)((HMONITOR__ *)pHVar2,0,&local_res18,local_res20);
        if (-1 < iVar1) {
          return (float)local_res18 *
                 `public:_static_bool___cdecl_UE::Core::Private::TIsType<TValueOrError<TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_>,FFileSystemError>::FWrapErrorType,TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_>,TValueOrError<class_TUniquePtr<class_IFileHandle,struct_TDefaultDelete<class_IFileHandle>_>,class_FFileSystemError>::FWrapErrorType,TValueOrError<class_TUniquePtr<class_IFileHandle,struct_TDefaultDelete<class_IFileHandle>_>,class_FFileSystemError>::FEmptyType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType._4_4_;
        }
      }
    }
  }
  return fVar3;
}

// GetErrorOutputDevice @ 1423de620

FOutputDeviceError * __cdecl FWindowsPlatformApplicationMisc::GetErrorOutputDevice(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FWindowsErrorOutputDevice::FWindowsErrorOutputDevice
                ((FWindowsErrorOutputDevice *)&::Singleton);
      ::Singleton._0_8_ = &___7FWindowsApplicationErrorOutputDevice__6B_;
      atexit(`FWindowsPlatformApplicationMisc::GetErrorOutputDevice'::__l2::
             _dynamic_atexit_destructor_for__Singleton__);
      _Init_thread_footer(&::_TSS0);
      return (FOutputDeviceError *)&::Singleton;
    }
  }
  return (FOutputDeviceError *)&::Singleton;
}

// GetFeedbackContext @ 1423de6c0

FFeedbackContext * __cdecl FWindowsPlatformApplicationMisc::GetFeedbackContext(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FFeedbackContext::FFeedbackContext((FFeedbackContext *)&::Singleton);
      ::Singleton._padding_ = (longlong)&___7FFeedbackContextAnsi__6B_;
      ::Singleton.Context = (FContextSupplier *)0x0;
      ::Singleton.AuxOut = (FOutputDevice *)0x0;
      atexit(`FGenericPlatformOutputDevices::GetFeedbackContext'::__l2::
             _dynamic_atexit_destructor_for__Singleton__);
      _Init_thread_footer(&::_TSS0);
      return (FFeedbackContext *)&::Singleton;
    }
  }
  return (FFeedbackContext *)&::Singleton;
}

// GetMonitorDPI @ 1423dfbe0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __cdecl FWindowsPlatformApplicationMisc::GetMonitorDPI(FMonitorInfo *param_1)

{
  int iVar1;
  HMONITOR pHVar2;
  HDC hdc;
  undefined1 auStack_48 [32];
  uint local_28 [2];
  RECT local_20;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  if (bEnableHighDPIAwareness != 0) {
    if (GetDpiForMonitor == (_func___cdecl_T_HRESULT_HMONITOR___ptr_int_uint_ptr_uint_ptr *)0x0) {
      hdc = GetDC((HWND)0x0);
      iVar1 = GetDeviceCaps(hdc,0x58);
      ReleaseDC((HWND)0x0,hdc);
      return iVar1;
    }
    local_20.left = (param_1->DisplayRect).Left;
    local_20.top = (param_1->DisplayRect).Top;
    local_20.right = (param_1->DisplayRect).Right;
    local_20.bottom = (param_1->DisplayRect).Bottom;
    pHVar2 = MonitorFromRect(&local_20,2);
    if (pHVar2 != (HMONITOR)0x0) {
      local_28[0] = 0;
      local_28[1] = 0;
      iVar1 = (*GetDpiForMonitor)((HMONITOR__ *)pHVar2,0,local_28,local_28 + 1);
      if (-1 < iVar1) {
        return local_28[0];
      }
    }
  }
  return 0x60;
}

// GetScreenPixelColor @ 1423e2640

FLinearColor * __cdecl
FWindowsPlatformApplicationMisc::GetScreenPixelColor
          (FLinearColor *__return_storage_ptr__,TVector2<double> *param_1,float param_2)

{
  float fVar1;
  COLORREF CVar2;
  HDC hdc;
  
  hdc = GetDC((HWND)0x0);
  CVar2 = GetPixel(hdc,(int)(param_1->field0_0x0)._s_0.X,(int)(param_1->field0_0x0)._s_0.Y);
  ReleaseDC((HWND)0x0,hdc);
  (__return_storage_ptr__->field0_0x0)._s_0.A = 1.0;
  (__return_storage_ptr__->field0_0x0)._s_0.R =
       FLinearColor::sRGBToLinearTable[(ulonglong)CVar2 & 0xff];
  fVar1 = FLinearColor::sRGBToLinearTable[(ulonglong)(CVar2 >> 8) & 0xff];
  (__return_storage_ptr__->field0_0x0)._s_0.B =
       FLinearColor::sRGBToLinearTable[CVar2 >> 0x10 & 0xff];
  (__return_storage_ptr__->field0_0x0)._s_0.G = fVar1;
  return __return_storage_ptr__;
}

// GetWindowTitleMatchingText @ 1423e5700

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
FWindowsPlatformApplicationMisc::GetWindowTitleMatchingText(wchar_t *param_1,FString *param_2)

{
  int iVar1;
  HWND hWnd;
  size_t _MaxCount;
  undefined1 auStack_4048 [32];
  WCHAR local_4028 [8192];
  ulonglong local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x1423e570e;
  local_28 = __security_cookie.value ^ (ulonglong)auStack_4048;
  hWnd = FindWindowW((LPCWSTR)0x0,(LPCWSTR)0x0);
  if (hWnd != (HWND)0x0) {
    _MaxCount = wcslen(param_1);
    do {
      GetWindowTextW(hWnd,local_4028,0x2000);
      iVar1 = wcsncmp(param_1,local_4028,_MaxCount);
      if (iVar1 == 0) {
        ::FString::operator=(param_2,local_4028);
        return true;
      }
      hWnd = GetWindow(hWnd,2);
    } while (hWnd != (HWND)0x0);
  }
  return false;
}

// IsThisApplicationForeground @ 1423eb3d0

bool __cdecl FWindowsPlatformApplicationMisc::IsThisApplicationForeground(void)

{
  DWORD DVar1;
  HWND hWnd;
  DWORD local_res8 [8];
  
  hWnd = GetForegroundWindow();
  GetWindowThreadProcessId(hWnd,local_res8);
  DVar1 = GetCurrentProcessId();
  return local_res8[0] == DVar1;
}

// LoadStartupModules @ 1423eb9b0

void __cdecl FWindowsPlatformApplicationMisc::LoadStartupModules(void)

{
  FModuleManager *this;
  FName *pFVar1;
  FName local_res8 [4];
  
  this = FModuleManager::Get();
  pFVar1 = ::FName::FName(local_res8,L"HeadMountedDisplay");
  FModuleManager::LoadModule(this,*pFVar1,None);
  return;
}

// PreInit @ 1423f2b70

void __cdecl FWindowsPlatformApplicationMisc::PreInit(void)

{
  FApp::SetHasFocusFunction(IsThisApplicationForeground);
  return;
}

// PreventScreenSaver @ 1423f2b90

void __cdecl FWindowsPlatformApplicationMisc::PreventScreenSaver(void)

{
  tagINPUT local_38;
  
  local_38.field1_0x8.mi.dwFlags = 1;
  local_38.type = 0;
  local_38._4_4_ = 0;
  local_38.field1_0x8.ki.dwExtraInfo = 0;
  local_38.field1_0x8.mi.dx = 0;
  local_38.field1_0x8.hi.wParamL = 0;
  local_38.field1_0x8.hi.wParamH = 0;
  local_38.field1_0x8.mi.mouseData = 0;
  local_38.field1_0x8.mi.dwExtraInfo = 0;
  ::SendInput(1,&local_38,0x28);
  return;
}

// PumpMessages @ 1423fca60

void __cdecl FWindowsPlatformApplicationMisc::PumpMessages(bool param_1)

{
  bool bVar1;
  int iVar2;
  wchar_t *pwVar3;
  bool bVar4;
  float fVar5;
  FString local_58;
  FString local_48;
  tagMSG local_38;
  
  bVar1 = GPumpingMessages;
  if (!GPumpingMessages) {
    GPumpingMessages = true;
  }
  if (param_1) {
    GPumpingMessagesOutsideOfMainLoop = false;
    bVar4 = -1 < CpuChannel->Enabled;
    if (bVar4) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId118,"WinPumpMessages",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ApplicationCore\\Private\\Windows\\WindowsPlatformApplicationMisc.cpp"
                 ,0x76);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId118);
    }
    iVar2 = PeekMessageW(&local_38,(HWND)0x0,0,0,1);
    while (iVar2 != 0) {
      TranslateMessage(&local_38);
      DispatchMessageW(&local_38);
      iVar2 = PeekMessageW(&local_38,(HWND)0x0,0,0,1);
    }
    if (bVar4) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (WindowsApplication != (FWindowsApplication *)0x0) {
      FWindowsApplication::PostPumpMessages(WindowsApplication);
    }
    bVar4 = FApp::HasFocus();
    if (bHadFocus != bVar4) {
      pwVar3 = L"false";
      if (bVar4) {
        pwVar3 = L"true";
      }
      ::FString::FString(&local_48,pwVar3);
      ::FString::FString(&local_58,L"Platform.AppHasFocus");
      FGenericCrashContext::SetEngineData(&local_58,&local_48);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
    fVar5 = __real_3f800000;
    bHadFocus = bVar4;
    if (!bVar4) {
      fVar5 = FApp::GetUnfocusedVolumeMultiplier();
    }
  }
  else {
    FWindowsPlatformMisc::PumpMessagesOutsideMainLoop();
    fVar5 = FApp::VolumeMultiplier;
  }
  FApp::VolumeMultiplier = fVar5;
  if (!bVar1) {
    GPumpingMessages = false;
  }
  return;
}

// RequestMinimize @ 1424014e0

void __cdecl FWindowsPlatformApplicationMisc::RequestMinimize(void)

{
  HWND hWnd;
  
  hWnd = GetActiveWindow();
                    /* WARNING: Could not recover jumptable at 0x0001424014f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ShowWindow(hWnd,6);
  return;
}

// SetHighDPIMode @ 142404d60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FWindowsPlatformApplicationMisc::SetHighDPIMode(void)

{
  bool bVar1;
  int iVar2;
  HMODULE pHVar3;
  code *pcVar4;
  code *pcVar5;
  bool local_res8 [8];
  int local_res10 [2];
  
  if (bEnableHighDPIAwareness != 0) {
    local_res8[0] = false;
    FConfigCacheIni::GetBool
              (GConfig,L"/Script/Engine.UserInterfaceSettings",L"bAllowHighDpiWhenUnattended",
               local_res8,&GEngineIni);
    pHVar3 = FWindowsPlatformProcess::GetDllHandle(L"shcore.dll");
    if (pHVar3 != (HMODULE)0x0) {
      pcVar4 = FWindowsPlatformProcess::GetDllExport(pHVar3,L"SetProcessDpiAwareness");
      GetDpiForMonitor = FWindowsPlatformProcess::GetDllExport(pHVar3,L"GetDpiForMonitor");
      pcVar5 = FWindowsPlatformProcess::GetDllExport(pHVar3,L"GetProcessDpiAwareness");
      if ((((pcVar4 != (code *)0x0) && (pcVar5 != (code *)0x0)) &&
          (PRIVATE_GIsRunningCommandlet == false)) &&
         ((bVar1 = FApp::IsUnattended(), !bVar1 || (local_res8[0] != false)))) {
        local_res10[0] = 0;
        (*pcVar5)(0,local_res10);
        if (local_res10[0] != 2) {
          if (4 < (byte)LogInit._0_1_) {
            UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogInit);
          }
          iVar2 = (*pcVar4)(2);
          if ((iVar2 != 0) && (2 < (byte)LogInit._0_1_)) {
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogInit);
          }
        }
      }
      FWindowsPlatformProcess::FreeDllHandle(pHVar3);
      return;
    }
    pHVar3 = GetModuleHandleW(L"user32.dll");
    if ((((pHVar3 != (HMODULE)0x0) &&
         (pcVar4 = FWindowsPlatformProcess::GetDllExport(pHVar3,L"SetProcessDPIAware"),
         pcVar4 != (code *)0x0)) && (PRIVATE_GIsRunningCommandlet == false)) &&
       ((bVar1 = FApp::IsUnattended(), !bVar1 || (local_res8[0] != false)))) {
      if (4 < (byte)LogInit._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogInit);
      }
      iVar2 = (*pcVar4)();
      if ((iVar2 == 0) && (2 < (byte)LogInit._0_1_)) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogInit);
      }
    }
  }
  return;
}

