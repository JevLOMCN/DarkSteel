// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ApplicationCore
// Functions: 7

// FTaskbarList @ 1423c2740

FTaskbarList * __thiscall FTaskbarList::FTaskbarList(FTaskbarList *this)

{
  this->TaskBarList3 = (ITaskbarList3 *)0x0;
  return this;
}

// ~FTaskbarList @ 1423c6ca0

void __thiscall FTaskbarList::~FTaskbarList(FTaskbarList *this)

{
  bool bVar1;
  
  if (this->TaskBarList3 != (ITaskbarList3 *)0x0) {
    bVar1 = FWindowsPlatformMisc::CoInitialize(Singlethreaded);
    if (bVar1) {
      (**(code **)((longlong)*this->TaskBarList3 + 0x10))();
    }
    this->TaskBarList3 = (ITaskbarList3 *)0x0;
    return;
  }
  this->TaskBarList3 = (ITaskbarList3 *)0x0;
  return;
}

// Create @ 1423d5280

TSharedRef<FTaskbarList,1> * __cdecl
FTaskbarList::Create(TSharedRef<FTaskbarList,1> *__return_storage_ptr__)

{
  TRawPtrProxy<FTaskbarList> local_res8 [4];
  
  local_res8[0].Object = ::operator_new(8);
  if (local_res8[0].Object != (FTaskbarList *)0x0) {
    (local_res8[0].Object)->TaskBarList3 = (ITaskbarList3 *)0x0;
  }
  TSharedRef<FTaskbarList,1>::TSharedRef<FTaskbarList,1><FTaskbarList>
            (__return_storage_ptr__,local_res8);
  Initialize(__return_storage_ptr__->Object);
  return __return_storage_ptr__;
}

// Initialize @ 1423e7cb0

void __thiscall FTaskbarList::Initialize(FTaskbarList *this)

{
  bool bVar1;
  HRESULT HVar2;
  wchar_t *pwVar3;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__)
  {
    _Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                         _thread_safe_static_guard_0__);
    if (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
        == -1) {
      pwVar3 = FCommandLine::Get();
      `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
           FParse::Param(pwVar3,L"nullrhi");
      _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                           _thread_safe_static_guard_0__);
    }
  }
  if (((PRIVATE_GIsRunningCommandlet == false) || (PRIVATE_GAllowCommandletRendering != false)) &&
     (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline ==
      false)) {
    bVar1 = FWindowsPlatformMisc::CoInitialize(Singlethreaded);
    if (bVar1) {
      HVar2 = CoCreateInstance((IID *)&CLSID_TaskbarList,(LPUNKNOWN)0x0,1,(IID *)&IID_ITaskbarList3,
                               &this->TaskBarList3);
      if (HVar2 != 0) {
        this->TaskBarList3 = (ITaskbarList3 *)0x0;
      }
    }
  }
  return;
}

// SetOverlayIcon @ 1424053f0

void __thiscall
FTaskbarList::SetOverlayIcon(FTaskbarList *this,HWND__ *param_1,HICON__ *param_2,FText *param_3)

{
  ITaskbarList3 *pIVar1;
  code *pcVar2;
  ITextData *pIVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  
  pIVar1 = this->TaskBarList3;
  if (pIVar1 != (ITaskbarList3 *)0x0) {
    pcVar2 = *(code **)((longlong)*pIVar1 + 0x90);
    pFVar4 = FText::ToString(param_3);
    if ((pFVar4->Data).ArrayNum == 0) {
      pwVar5 = L"";
    }
    else {
      pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
    }
    (*pcVar2)(pIVar1,param_1,param_2,pwVar5);
  }
  pIVar3 = (param_3->TextData).Reference;
  if (pIVar3 != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142405475. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*pIVar3 + 0x10))();
    return;
  }
  return;
}

// SetProgressState @ 142405660

void __thiscall FTaskbarList::SetProgressState(FTaskbarList *this,HWND__ *param_1,Type param_2)

{
  if (this->TaskBarList3 != (ITaskbarList3 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014240566b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*this->TaskBarList3 + 0x50))();
    return;
  }
  return;
}

// SetProgressValue @ 142405680

void __thiscall
FTaskbarList::SetProgressValue(FTaskbarList *this,HWND__ *param_1,ulong64 param_2,ulong64 param_3)

{
  if (this->TaskBarList3 != (ITaskbarList3 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014240568b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*this->TaskBarList3 + 0x48))();
    return;
  }
  return;
}

