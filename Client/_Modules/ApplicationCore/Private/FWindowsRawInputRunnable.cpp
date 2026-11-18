// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ApplicationCore
// Functions: 13

// GetInstance @ 1423df660

FWindowsRawInputRunnable * __cdecl
UE::WindowsApplication::RawInputThread::FWindowsRawInputRunnable::GetInstance(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_class_UE::WindowsApplication::RawInputThread::FWindowsRawInputRunnable&___ptr64___cdecl_UE::WindowsApplication::RawInputThread::FWindowsRawInputRunnable::GetInstance(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_class_UE::WindowsApplication::RawInputThread::FWindowsRawInputRunnable&___ptr64___cdecl_UE::WindowsApplication::RawInputThread::FWindowsRawInputRunnable::GetInstance(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_class_UE::WindowsApplication::RawInputThread::FWindowsRawInputRunnable&___ptr64___cdecl_UE::WindowsApplication::RawInputThread::FWindowsRawInputRunnable::GetInstance(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `private:_static_class_UE::WindowsApplication::RawInputThread::FWindowsRawInputRunnable&___ptr64___cdecl_UE::WindowsApplication::RawInputThread::FWindowsRawInputRunnable::GetInstance(void)'
      ::__l2::Singleton.WindowHandle = (HWND__ *)0x0;
      `private:_static_class_UE::WindowsApplication::RawInputThread::FWindowsRawInputRunnable&___ptr64___cdecl_UE::WindowsApplication::RawInputThread::FWindowsRawInputRunnable::GetInstance(void)'
      ::__l2::Singleton._0_8_ =
           &___7FWindowsRawInputRunnable_RawInputThread_WindowsApplication_UE__6B_;
      `private:_static_class_UE::WindowsApplication::RawInputThread::FWindowsRawInputRunnable&___ptr64___cdecl_UE::WindowsApplication::RawInputThread::FWindowsRawInputRunnable::GetInstance(void)'
      ::__l2::Singleton.MouseInputs.Head = ::operator_new(0x20);
      if (`private:_static_class_UE::WindowsApplication::RawInputThread::FWindowsRawInputRunnable&___ptr64___cdecl_UE::WindowsApplication::RawInputThread::FWindowsRawInputRunnable::GetInstance(void)'
          ::__l2::Singleton.MouseInputs.Head != (TNode *)0x0) {
        (`private:_static_class_UE::WindowsApplication::RawInputThread::FWindowsRawInputRunnable&___ptr64___cdecl_UE::WindowsApplication::RawInputThread::FWindowsRawInputRunnable::GetInstance(void)'
         ::__l2::Singleton.MouseInputs.Head)->NextNode = (TNode *)0x0;
        ((`private:_static_class_UE::WindowsApplication::RawInputThread::FWindowsRawInputRunnable&___ptr64___cdecl_UE::WindowsApplication::RawInputThread::FWindowsRawInputRunnable::GetInstance(void)'
          ::__l2::Singleton.MouseInputs.Head)->Item).usFlags = 0;
        *(undefined2 *)
         &((`private:_static_class_UE::WindowsApplication::RawInputThread::FWindowsRawInputRunnable&___ptr64___cdecl_UE::WindowsApplication::RawInputThread::FWindowsRawInputRunnable::GetInstance(void)'
            ::__l2::Singleton.MouseInputs.Head)->Item).field_0x2 = 0;
        ((`private:_static_class_UE::WindowsApplication::RawInputThread::FWindowsRawInputRunnable&___ptr64___cdecl_UE::WindowsApplication::RawInputThread::FWindowsRawInputRunnable::GetInstance(void)'
          ::__l2::Singleton.MouseInputs.Head)->Item).field1_0x4 = (tagRAWMOUSE_u_4)0x0;
        ((`private:_static_class_UE::WindowsApplication::RawInputThread::FWindowsRawInputRunnable&___ptr64___cdecl_UE::WindowsApplication::RawInputThread::FWindowsRawInputRunnable::GetInstance(void)'
          ::__l2::Singleton.MouseInputs.Head)->Item).ulRawButtons = 0;
        ((`private:_static_class_UE::WindowsApplication::RawInputThread::FWindowsRawInputRunnable&___ptr64___cdecl_UE::WindowsApplication::RawInputThread::FWindowsRawInputRunnable::GetInstance(void)'
          ::__l2::Singleton.MouseInputs.Head)->Item).lLastX = 0;
        ((`private:_static_class_UE::WindowsApplication::RawInputThread::FWindowsRawInputRunnable&___ptr64___cdecl_UE::WindowsApplication::RawInputThread::FWindowsRawInputRunnable::GetInstance(void)'
          ::__l2::Singleton.MouseInputs.Head)->Item).lLastY = 0;
        ((`private:_static_class_UE::WindowsApplication::RawInputThread::FWindowsRawInputRunnable&___ptr64___cdecl_UE::WindowsApplication::RawInputThread::FWindowsRawInputRunnable::GetInstance(void)'
          ::__l2::Singleton.MouseInputs.Head)->Item).ulExtraInformation = 0;
        (`private:_static_class_UE::WindowsApplication::RawInputThread::FWindowsRawInputRunnable&___ptr64___cdecl_UE::WindowsApplication::RawInputThread::FWindowsRawInputRunnable::GetInstance(void)'
         ::__l2::Singleton.MouseInputs.Head)->NextNode = (TNode *)0x0;
      }
      `private:_static_class_UE::WindowsApplication::RawInputThread::FWindowsRawInputRunnable&___ptr64___cdecl_UE::WindowsApplication::RawInputThread::FWindowsRawInputRunnable::GetInstance(void)'
      ::__l2::Singleton.InputCount = (atomic<unsigned_int>)0x0;
      `private:_static_class_UE::WindowsApplication::RawInputThread::FWindowsRawInputRunnable&___ptr64___cdecl_UE::WindowsApplication::RawInputThread::FWindowsRawInputRunnable::GetInstance(void)'
      ::__l2::Singleton.bRegistered = false;
      `private:_static_class_UE::WindowsApplication::RawInputThread::FWindowsRawInputRunnable&___ptr64___cdecl_UE::WindowsApplication::RawInputThread::FWindowsRawInputRunnable::GetInstance(void)'
      ::__l2::Singleton.MouseInputs.Tail =
           `private:_static_class_UE::WindowsApplication::RawInputThread::FWindowsRawInputRunnable&___ptr64___cdecl_UE::WindowsApplication::RawInputThread::FWindowsRawInputRunnable::GetInstance(void)'
           ::__l2::Singleton.MouseInputs.Head;
      atexit(`UE::WindowsApplication::RawInputThread::FWindowsRawInputRunnable::GetInstance'::__l2::
             _dynamic_atexit_destructor_for__Singleton__);
      _Init_thread_footer(&`private:_static_class_UE::WindowsApplication::RawInputThread::FWindowsRawInputRunnable&___ptr64___cdecl_UE::WindowsApplication::RawInputThread::FWindowsRawInputRunnable::GetInstance(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`private:_static_class_UE::WindowsApplication::RawInputThread::FWindowsRawInputRunnable&___ptr64___cdecl_UE::WindowsApplication::RawInputThread::FWindowsRawInputRunnable::GetInstance(void)'
              ::__l2::Singleton;
    }
  }
  return &`private:_static_class_UE::WindowsApplication::RawInputThread::FWindowsRawInputRunnable&___ptr64___cdecl_UE::WindowsApplication::RawInputThread::FWindowsRawInputRunnable::GetInstance(void)'
          ::__l2::Singleton;
}

// HandleInputMessage @ 1423e6a70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall
UE::WindowsApplication::RawInputThread::FWindowsRawInputRunnable::HandleInputMessage
          (FWindowsRawInputRunnable *this,HRAWINPUT__ *param_1)

{
  undefined8 uVar1;
  TNode *pTVar2;
  undefined8 uVar3;
  UINT UVar4;
  ulonglong uVar5;
  TNode *pTVar6;
  LPVOID pData;
  undefined1 *puVar7;
  undefined1 auStackY_48 [32];
  uint local_18 [2];
  ulonglong local_10;
  
  puVar7 = auStackY_48;
  local_10 = __security_cookie.value ^ (ulonglong)local_18;
  local_18[0] = 0;
  UVar4 = GetRawInputData((HRAWINPUT)param_1,0x10000003,(LPVOID)0x0,local_18,0x18);
  if (UVar4 == 0) {
    if (local_18[0] == 0) {
      pData = (LPVOID)0x0;
      puVar7 = auStackY_48;
    }
    else {
      uVar5 = (ulonglong)(local_18[0] + 0xf) + 0xf;
      if (uVar5 <= local_18[0] + 0xf) {
        uVar5 = 0xffffffffffffff0;
      }
      puVar7 = auStackY_48 + -(uVar5 & 0xfffffffffffffff0);
      pData = (LPVOID)((longlong)&local_10 + -(uVar5 & 0xfffffffffffffff0));
    }
    *(undefined4 *)(puVar7 + 0x20) = 0x18;
    *(undefined8 *)(puVar7 + -8) = 0x1423e6b20;
    UVar4 = GetRawInputData((HRAWINPUT)param_1,0x10000003,pData,local_18,*(UINT *)(puVar7 + 0x20));
    if (UVar4 == local_18[0]) {
      *(undefined8 *)(puVar7 + -8) = 0x1423e6b2f;
      pTVar6 = ::operator_new(0x20);
      if (pTVar6 != (TNode *)0x0) {
        pTVar6->NextNode = (TNode *)0x0;
        uVar1 = *(undefined8 *)((longlong)pData + 0x18);
        uVar3 = *(undefined8 *)((longlong)pData + 0x20);
        (pTVar6->Item).usFlags = (short)uVar1;
        *(short *)&(pTVar6->Item).field_0x2 = (short)((ulonglong)uVar1 >> 0x10);
        (pTVar6->Item).field1_0x4 = (tagRAWMOUSE_u_4)(int)((ulonglong)uVar1 >> 0x20);
        (pTVar6->Item).ulRawButtons = (int)uVar3;
        (pTVar6->Item).lLastX = (int)((ulonglong)uVar3 >> 0x20);
        uVar1 = *(undefined8 *)((longlong)pData + 0x28);
        (pTVar6->Item).lLastY = (int)uVar1;
        (pTVar6->Item).ulExtraInformation = (int)((ulonglong)uVar1 >> 0x20);
        pTVar2 = (this->MouseInputs).Head;
        (this->MouseInputs).Head = pTVar6;
        pTVar2->NextNode = pTVar6;
      }
      LOCK();
      this->InputCount = (atomic<unsigned_int>)((int)this->InputCount + 1);
      UNLOCK();
    }
  }
  *(undefined8 *)(puVar7 + -8) = 0x1423e6b6b;
  return;
}

// HandleRegister @ 1423e7290

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::WindowsApplication::RawInputThread::FWindowsRawInputRunnable::HandleRegister
          (FWindowsRawInputRunnable *this)

{
  BOOL BVar1;
  RAWINPUTDEVICE local_18;
  
  if (this->bRegistered == false) {
    local_18.hwndTarget = (HWND)this->WindowHandle;
    local_18.usUsagePage = 1;
    local_18.usUsage = 2;
    local_18.dwFlags = 0x30;
    BVar1 = RegisterRawInputDevices(&local_18,1,0x10);
    this->bRegistered = BVar1 == 1;
    if (5 < (byte)LogWindowsRawInputThread._0_1_) {
      Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWindowsRawInputThread);
    }
  }
  return;
}

// HandleUnregister @ 1423e7500

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::WindowsApplication::RawInputThread::FWindowsRawInputRunnable::HandleUnregister
          (FWindowsRawInputRunnable *this)

{
  BOOL BVar1;
  RAWINPUTDEVICE local_18;
  
  if (this->bRegistered != false) {
    local_18.usUsagePage = 1;
    local_18.usUsage = 2;
    local_18.dwFlags = 1;
    local_18.hwndTarget = (HWND)0x0;
    BVar1 = RegisterRawInputDevices(&local_18,1,0x10);
    this->bRegistered = BVar1 != 1;
    if (5 < (byte)LogWindowsRawInputThread._0_1_) {
      Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWindowsRawInputThread);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001423e756f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetEvent(UnregisterEvent);
  return;
}

// Initialize @ 1423e7d80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::WindowsApplication::RawInputThread::FWindowsRawInputRunnable::Initialize(HINSTANCE__ *param_1)

{
  code *pcVar1;
  bool bVar2;
  FWindowsRawInputRunnable *pFVar3;
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8717070949721045977>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ApplicationCore\\Private\\Windows\\WindowsApplication.cpp"
                       ,0x427,"IsInGameThread()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (bInitialized == false) {
    if (Thread != (FRunnableThread *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Thread == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ApplicationCore\\Private\\Windows\\WindowsApplication.cpp"
                         ,0x42b,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    CreateWindowEvent = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCWSTR)0x0);
    UnregisterEvent = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
    if ((CreateWindowEvent != (void *)0x0) && (UnregisterEvent != (HANDLE)0x0)) {
      InstanceHandle = param_1;
      pFVar3 = GetInstance();
      Thread = FRunnableThread::Create
                         ((FRunnable *)pFVar3,L"WindowsRawInputThread",0,TPri_Highest,
                          0xffffffffffffffff,None);
      WaitForSingleObject(CreateWindowEvent,0xffffffff);
      if (pFVar3->WindowHandle != (HWND__ *)0x0) {
        bInitialized = true;
        return;
      }
      CloseHandle(UnregisterEvent);
      UnregisterEvent = (void *)0x0;
      CloseHandle(CreateWindowEvent);
      CreateWindowEvent = (void *)0x0;
      return;
    }
    if (1 < (byte)LogWindowsDesktop._0_1_) {
      GetLastError();
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWindowsDesktop);
    }
    if (UnregisterEvent != (void *)0x0) {
      CloseHandle(UnregisterEvent);
      UnregisterEvent = (void *)0x0;
    }
    if (CreateWindowEvent != (void *)0x0) {
      CloseHandle(CreateWindowEvent);
      CreateWindowEvent = (void *)0x0;
    }
  }
  return;
}

// PopMouseInput @ 1423f2a40

void __cdecl
UE::WindowsApplication::RawInputThread::FWindowsRawInputRunnable::PopMouseInput
          (tagRAWMOUSE *param_1)

{
  TNode *pTVar1;
  TNode *pTVar2;
  code *pcVar3;
  undefined2 uVar4;
  tagRAWMOUSE_u_4 tVar5;
  ulong uVar6;
  long lVar7;
  bool bVar8;
  FWindowsRawInputRunnable *pFVar9;
  
  bVar8 = IsInGameThread();
  if (!bVar8) {
    bVar8 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8717070949721045883>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ApplicationCore\\Private\\Windows\\WindowsApplication.cpp"
                       ,0x485,"IsInGameThread()");
    if (bVar8) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar9 = GetInstance();
  pTVar1 = ((pFVar9->MouseInputs).Tail)->NextNode;
  if (pTVar1 != (TNode *)0x0) {
    uVar4 = *(undefined2 *)&(pTVar1->Item).field_0x2;
    tVar5 = (pTVar1->Item).field1_0x4;
    uVar6 = (pTVar1->Item).ulRawButtons;
    lVar7 = (pTVar1->Item).lLastX;
    param_1->usFlags = (pTVar1->Item).usFlags;
    *(undefined2 *)&param_1->field_0x2 = uVar4;
    param_1->field1_0x4 = tVar5;
    param_1->ulRawButtons = uVar6;
    param_1->lLastX = lVar7;
    uVar6 = (pTVar1->Item).ulExtraInformation;
    param_1->lLastY = (pTVar1->Item).lLastY;
    param_1->ulExtraInformation = uVar6;
    pTVar2 = (pFVar9->MouseInputs).Tail;
    (pFVar9->MouseInputs).Tail = pTVar1;
    (pTVar1->Item).usFlags = 0;
    *(undefined2 *)&(pTVar1->Item).field_0x2 = 0;
    (pTVar1->Item).field1_0x4 = (tagRAWMOUSE_u_4)0x0;
    (pTVar1->Item).ulRawButtons = 0;
    (pTVar1->Item).lLastX = 0;
    (pTVar1->Item).lLastY = 0;
    (pTVar1->Item).ulExtraInformation = 0;
    ::operator_delete(pTVar2,0x20);
    return;
  }
  return;
}

// Register @ 1423fe040

void __cdecl UE::WindowsApplication::RawInputThread::FWindowsRawInputRunnable::Register(void)

{
  code *pcVar1;
  bool bVar2;
  FWindowsRawInputRunnable *pFVar3;
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8717070949721045903>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ApplicationCore\\Private\\Windows\\WindowsApplication.cpp"
                       ,0x471,"IsInGameThread()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pFVar3 = GetInstance();
                    /* WARNING: Could not recover jumptable at 0x0001423fe092. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SendMessageW((HWND)pFVar3->WindowHandle,0x8001,0,0);
  return;
}

// Run @ 142402330

/* WARNING: Enum "Type": Some values do not have unique names */

uint __thiscall
UE::WindowsApplication::RawInputThread::FWindowsRawInputRunnable::Run
          (FWindowsRawInputRunnable *this)

{
  ATOM AVar1;
  int iVar2;
  BOOL BVar3;
  HWND pHVar4;
  RAWINPUTDEVICE local_98;
  WNDCLASSW local_88;
  tagMSG local_38;
  
  local_88.style = 0;
  local_88._4_4_ = 0;
  local_88.lpfnWndProc = WndProc;
  local_88.hInstance = (HINSTANCE)InstanceHandle;
  local_88.cbClsExtra = 0;
  local_88.cbWndExtra = 0;
  local_88.lpszClassName = L"UnrealRawInputWindow";
  local_88.hIcon = (HICON)0x0;
  local_88.hCursor = (HCURSOR)0x0;
  local_88.hbrBackground = (HBRUSH)0x0;
  local_88.lpszMenuName = (LPCWSTR)0x0;
  AVar1 = RegisterClassW(&local_88);
  if (AVar1 == 0) {
    if (1 < (byte)LogWindowsDesktop._0_1_) {
      GetLastError();
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWindowsDesktop);
    }
  }
  else {
    pHVar4 = CreateWindowExW(0,local_88.lpszClassName,local_88.lpszClassName,0,0,0,0,0,
                             (HWND)0xfffffffffffffffd,(HMENU)0x0,(HINSTANCE)InstanceHandle,
                             (LPVOID)0x0);
    this->WindowHandle = (HWND__ *)pHVar4;
    if (pHVar4 == (HWND)0x0) {
      if (1 < (byte)LogWindowsDesktop._0_1_) {
        GetLastError();
        Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWindowsDesktop);
      }
    }
    else {
      SetEvent(CreateWindowEvent);
      iVar2 = GetMessageW(&local_38,(HWND)0x0,0,0);
      while (iVar2 != 0) {
        if (iVar2 != -1) {
          TranslateMessage(&local_38);
          DispatchMessageW(&local_38);
        }
        iVar2 = GetMessageW(&local_38,(HWND)0x0,0,0);
      }
      if (this->bRegistered != false) {
        local_98.usUsagePage = 1;
        local_98.usUsage = 2;
        local_98.dwFlags = 1;
        local_98.hwndTarget = (HWND)0x0;
        BVar3 = RegisterRawInputDevices(&local_98,1,0x10);
        this->bRegistered = BVar3 != 1;
        if (5 < (byte)LogWindowsRawInputThread._0_1_) {
          Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWindowsRawInputThread)
          ;
        }
      }
      SetEvent(UnregisterEvent);
      DestroyWindow((HWND)this->WindowHandle);
      this->WindowHandle = (HWND__ *)0x0;
    }
    UnregisterClassW(local_88.lpszClassName,(HINSTANCE)InstanceHandle);
  }
  SetEvent(CreateWindowEvent);
  return 0;
}

// Shutdown @ 142407970

void __cdecl UE::WindowsApplication::RawInputThread::FWindowsRawInputRunnable::Shutdown(void)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8717070949721045925>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ApplicationCore\\Private\\Windows\\WindowsApplication.cpp"
                       ,0x45b,"IsInGameThread()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (bInitialized != false) {
    bInitialized = false;
    if (Thread != (FRunnableThread *)0x0) {
      (**(code **)(Thread->_padding_ + 0x18))(Thread,1);
      if (Thread != (FRunnableThread *)0x0) {
        (**(code **)(Thread->_padding_ + 0x30))(Thread,1);
      }
      Thread = (FRunnableThread *)0x0;
    }
    CloseHandle(CreateWindowEvent);
    CreateWindowEvent = (void *)0x0;
    InstanceHandle = (HINSTANCE__ *)0x0;
  }
  return;
}

// Stop @ 1424087b0

void __thiscall
UE::WindowsApplication::RawInputThread::FWindowsRawInputRunnable::Stop
          (FWindowsRawInputRunnable *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001424087bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SendMessageW((HWND)this->WindowHandle,0x8000,0,0);
  return;
}

// TakeMouseInputCount @ 1424089b0

uint __cdecl
UE::WindowsApplication::RawInputThread::FWindowsRawInputRunnable::TakeMouseInputCount(void)

{
  atomic<unsigned_int> aVar1;
  FWindowsRawInputRunnable *pFVar2;
  
  if (Thread != (FRunnableThread *)0x0) {
    pFVar2 = GetInstance();
    LOCK();
    aVar1 = pFVar2->InputCount;
    pFVar2->InputCount = (atomic<unsigned_int>)0x0;
    UNLOCK();
    return (uint)aVar1;
  }
  return 0;
}

// Unregister @ 14240b020

void __cdecl UE::WindowsApplication::RawInputThread::FWindowsRawInputRunnable::Unregister(void)

{
  code *pcVar1;
  bool bVar2;
  FWindowsRawInputRunnable *pFVar3;
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8717070949721045896>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ApplicationCore\\Private\\Windows\\WindowsApplication.cpp"
                       ,0x478,"IsInGameThread()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pFVar3 = GetInstance();
  SendMessageW((HWND)pFVar3->WindowHandle,0x8002,0,0);
                    /* WARNING: Could not recover jumptable at 0x00014240b084. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  WaitForSingleObject(UnregisterEvent,0xffffffff);
  return;
}

// WndProc @ 14240c970

/* WARNING: Enum "Type": Some values do not have unique names */

long64 __cdecl
UE::WindowsApplication::RawInputThread::FWindowsRawInputRunnable::WndProc
          (HWND__ *param_1,uint param_2,ulong64 param_3,long64 param_4)

{
  code *pcVar1;
  bool bVar2;
  BOOL BVar3;
  LRESULT LVar4;
  FWindowsRawInputRunnable *pFVar5;
  long64 lVar6;
  RAWINPUTDEVICE local_28;
  RAWINPUTDEVICE local_18;
  
  if (param_2 == 0xff) {
    pFVar5 = GetInstance();
    HandleInputMessage(pFVar5,(HRAWINPUT__ *)param_4);
    if ((char)param_3 != '\0') {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("((wParam) & 0xff) == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ApplicationCore\\Private\\Windows\\WindowsApplication.cpp"
                         ,0x3e2,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        lVar6 = (*pcVar1)();
        return lVar6;
      }
    }
    DefWindowProcW((HWND)param_1,0xff,param_3,param_4);
  }
  else {
    if (param_2 == 0x8000) {
      PostQuitMessage(0);
      return 0;
    }
    if (param_2 != 0x8001) {
      if (param_2 != 0x8002) {
                    /* WARNING: Could not recover jumptable at 0x00014240c9bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        LVar4 = DefWindowProcW((HWND)param_1,param_2,param_3,param_4);
        return LVar4;
      }
      pFVar5 = GetInstance();
      if (pFVar5->bRegistered != false) {
        local_28.usUsagePage = 1;
        local_28.usUsage = 2;
        local_28.dwFlags = 1;
        local_28.hwndTarget = (HWND)0x0;
        BVar3 = RegisterRawInputDevices(&local_28,1,0x10);
        pFVar5->bRegistered = BVar3 != 1;
        if (5 < (byte)LogWindowsRawInputThread._0_1_) {
          Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWindowsRawInputThread)
          ;
        }
      }
      SetEvent(UnregisterEvent);
      return 0;
    }
    pFVar5 = GetInstance();
    if (pFVar5->bRegistered == false) {
      local_18.hwndTarget = (HWND)pFVar5->WindowHandle;
      local_18.usUsagePage = 1;
      local_18.usUsage = 2;
      local_18.dwFlags = 0x30;
      BVar3 = RegisterRawInputDevices(&local_18,1,0x10);
      pFVar5->bRegistered = BVar3 == 1;
      if (5 < (byte)LogWindowsRawInputThread._0_1_) {
        Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWindowsRawInputThread);
        return 0;
      }
    }
  }
  return 0;
}

