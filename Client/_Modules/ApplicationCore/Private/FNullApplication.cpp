// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ApplicationCore
// Functions: 42

// FNullApplication @ 1423c20f0

/* WARNING: Enum "Type": Some values do not have unique names */

FNullApplication * __thiscall FNullApplication::FNullApplication(FNullApplication *this)

{
  longlong lVar1;
  code *pcVar2;
  void *pvVar3;
  bool bVar4;
  FNullCursor *pFVar5;
  wchar_t *pwVar6;
  FNullApplication *pFVar7;
  ulonglong uVar8;
  uint local_res8 [2];
  uint local_res10 [2];
  TRawPtrProxy<FNullCursor> local_res18;
  FNullApplication *local_res20;
  <lambda_1> local_58;
  wchar_t *local_50;
  int local_48;
  TSharedPtr<ICursor,1> local_40 [2];
  
  pFVar5 = ::operator_new(0x10);
  pvVar3 = ThreadLocalStoragePointer;
  if (pFVar5 == (FNullCursor *)0x0) {
    pFVar5 = (FNullCursor *)0x0;
  }
  else {
    uVar8 = (ulonglong)_tls_index;
    pFVar5->_padding_ = (longlong)&___7FNullCursor__6B_;
    if (*(int *)(*(longlong *)((longlong)pvVar3 + uVar8 * 8) + 0x9d4c) <
        `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
       ) {
      _Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                           _thread_safe_static_guard_0__);
      if (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
          _thread_safe_static_guard_0__ == -1) {
        pwVar6 = FCommandLine::Get();
        `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
             FParse::Param(pwVar6,L"nullrhi");
        _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                             _thread_safe_static_guard_0__);
      }
    }
    if ((((PRIVATE_GIsRunningCommandlet != false) && (PRIVATE_GAllowCommandletRendering == false))
        || (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline
            != false)) && (4 < (byte)LogInit._0_1_)) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogInit);
    }
  }
  local_res18.Object = pFVar5;
  TSharedPtr<ICursor,1>::TSharedPtr<ICursor,1><FNullCursor>(local_40,&local_res18);
  GenericApplication::GenericApplication((GenericApplication *)this,local_40);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_40[0].SharedReferenceCount.ReferenceController);
  FSelfRegisteringExec::FSelfRegisteringExec((FSelfRegisteringExec *)&this->_padding_);
  uVar8 = (ulonglong)_tls_index;
  this->_padding_ = (longlong)&_vftable__for__GenericApplication__;
  (this->Windows).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->_padding_ = (longlong)&_vftable__for__FSelfRegisteringExec__;
  this->_padding_ = (longlong)&_vftable__for__IInputInterface__;
  pvVar3 = ThreadLocalStoragePointer;
  (this->Windows).ArrayNum = 0;
  (this->Windows).ArrayMax = 0;
  (this->ExternalInputDevices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExternalInputDevices).ArrayNum = 0;
  (this->ExternalInputDevices).ArrayMax = 0;
  lVar1 = *(longlong *)((longlong)pvVar3 + uVar8 * 8);
  (this->CurrentlyActiveWindow).Object = (FNullWindow *)0x0;
  (this->CurrentlyActiveWindow).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->PreviousActiveWindow).Object = (FNullWindow *)0x0;
  (this->PreviousActiveWindow).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->WorkArea).Left = 0;
  (this->WorkArea).Top = 0;
  this->bHasLoadedInputPlugins = false;
  (this->WorkArea).Right = 0x1000;
  (this->WorkArea).Bottom = 0x1000;
  if (*(int *)(lVar1 + 0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
        IConsoleManager::SetupSingleton();
        if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Singleton != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                             ,0x4fb,L"");
          if (bVar4) {
            pcVar2 = (code *)swi(3);
            pFVar7 = (FNullApplication *)(*pcVar2)();
            return pFVar7;
          }
        }
      }
      CVarSystemResolution =
           (IConsoleVariable *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                     (IConsoleManager::Singleton,L"r.SetRes",1);
      _Init_thread_footer(&::_TSS0);
    }
  }
  (**(code **)(*(longlong *)CVarSystemResolution + 0xd8))(CVarSystemResolution,&local_50);
  local_res8[0] = 0;
  pwVar6 = L"";
  if (local_48 != 0) {
    pwVar6 = local_50;
  }
  bVar4 = ParseResolution(this,pwVar6,local_res10,local_res8);
  if (bVar4) {
    (this->WorkArea).Right = local_res10[0];
    (this->WorkArea).Bottom = local_res8[0];
  }
  local_res20 = this;
  TMulticastDelegateRegistration<void___cdecl(unsigned_int,unsigned_int),FDefaultDelegateUserPolicy>
  ::AddLambda<_FNullApplication::FNullApplication_::__l2::<lambda_1>_>
            ((TMulticastDelegateRegistration<void___cdecl(unsigned_int,unsigned_int),FDefaultDelegateUserPolicy>
              *)&FCoreDelegates::OnSystemResolutionChanged,&local_58);
  if (local_50 != (wchar_t *)0x0) {
    FMemory::Free(local_50);
  }
  return this;
}

// ~FNullApplication @ 1423c6b60

void __thiscall FNullApplication::~FNullApplication(FNullApplication *this)

{
  FScriptContainerElement *pFVar1;
  IModularFeatures *pIVar2;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this_00;
  
  this->_padding_ = (longlong)&_vftable__for__GenericApplication__;
  this->_padding_ = (longlong)&_vftable__for__FSelfRegisteringExec__;
  this->_padding_ = (longlong)&_vftable__for__IInputInterface__;
  pIVar2 = IModularFeatures::Get();
  this_00 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
            (**(code **)((longlong)*pIVar2 + 0x38))(pIVar2);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll(this_00,this);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->PreviousActiveWindow).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CurrentlyActiveWindow).SharedReferenceCount.ReferenceController);
  DestructItems<TSharedPtr<IInputDevice,1>,int>
            ((TSharedPtr<IInputDevice,1> *)(this->ExternalInputDevices).AllocatorInstance.Data,
             (this->ExternalInputDevices).ArrayNum);
  pFVar1 = (this->ExternalInputDevices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TSharedRef<FNullWindow,1>,int>
            ((TSharedRef<FNullWindow,1> *)(this->Windows).AllocatorInstance.Data,
             (this->Windows).ArrayNum);
  pFVar1 = (this->Windows).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IInputInterface__6B_;
  FSelfRegisteringExec::~FSelfRegisteringExec((FSelfRegisteringExec *)&this->_padding_);
  GenericApplication::~GenericApplication((GenericApplication *)this);
  return;
}

// ActivateWindow @ 1423cf490

void __thiscall
FNullApplication::ActivateWindow(FNullApplication *this,TSharedPtr<FNullWindow,1> *param_1)

{
  TSharedPtr<FNullWindow,1> *pTVar1;
  int iVar2;
  FNullWindow *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  int *piVar8;
  TSharedRef<FNullWindow,1> *pTVar9;
  FString local_b0;
  int local_a0;
  int local_9c;
  int local_98;
  char local_94;
  int local_90;
  char local_8c;
  int local_88;
  char local_84;
  int local_80;
  char local_7c;
  undefined1 local_78;
  FNullWindow *local_68;
  TReferenceControllerBase<1> *local_60;
  FNullWindow *local_58;
  TReferenceControllerBase<1> *local_50;
  FNullWindow *local_48;
  TReferenceControllerBase<1> *pTStack_40;
  FNullWindow *local_38;
  TReferenceControllerBase<1> *pTStack_30;
  TSharedRef<FNullWindow,1> local_28;
  
  if (param_1->Object == (FNullWindow *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  piVar8 = (int *)(**(code **)(param_1->Object->_padding_ + 0xe0))();
  iVar2 = *piVar8;
  ::FString::FString(&local_b0,(FString *)(piVar8 + 0xe));
  local_a0 = piVar8[0x12];
  local_9c = piVar8[0x13];
  local_94 = (char)piVar8[0x15];
  if (local_94 != '\0') {
    local_98 = piVar8[0x14];
  }
  local_8c = (char)piVar8[0x17];
  if (local_8c != '\0') {
    local_90 = piVar8[0x16];
  }
  local_84 = (char)piVar8[0x19];
  if (local_84 != '\0') {
    local_88 = piVar8[0x18];
  }
  local_7c = (char)piVar8[0x1b];
  if (local_7c != '\0') {
    local_80 = piVar8[0x1a];
  }
  local_78 = (undefined1)piVar8[0x1c];
  if (1 < iVar2 - 2U) {
    pTVar1 = &this->CurrentlyActiveWindow;
    pFVar3 = pTVar1->Object;
    if (pFVar3 != param_1->Object) {
      pTVar4 = (this->CurrentlyActiveWindow).SharedReferenceCount.ReferenceController;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_48 = (this->PreviousActiveWindow).Object;
      pTStack_40 = (this->PreviousActiveWindow).SharedReferenceCount.ReferenceController;
      (this->PreviousActiveWindow).Object = pFVar3;
      (this->PreviousActiveWindow).SharedReferenceCount.ReferenceController = pTVar4;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_40);
      pTVar4 = (param_1->SharedReferenceCount).ReferenceController;
      pFVar3 = param_1->Object;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_38 = pTVar1->Object;
      pTStack_30 = (this->CurrentlyActiveWindow).SharedReferenceCount.ReferenceController;
      pTVar1->Object = pFVar3;
      (this->CurrentlyActiveWindow).SharedReferenceCount.ReferenceController = pTVar4;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_30);
      if ((this->PreviousActiveWindow).Object != (FNullWindow *)0x0) {
        plVar5 = (longlong *)this->_padding_;
        pcVar6 = *(code **)(*plVar5 + 0x170);
        pTVar9 = TSharedPtr<FNullWindow,1>::ToSharedRef(&this->PreviousActiveWindow,&local_28);
        local_68 = pTVar9->Object;
        local_60 = (pTVar9->SharedReferenceCount).ReferenceController;
        if (local_60 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          local_60->SharedReferenceCount = (atomic<int>)((int)local_60->SharedReferenceCount + 1);
          UNLOCK();
        }
        (*pcVar6)(plVar5,&local_68,2);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_60);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_28.SharedReferenceCount.ReferenceController);
      }
      plVar5 = (longlong *)this->_padding_;
      pcVar6 = *(code **)(*plVar5 + 0x170);
      if ((this->CurrentlyActiveWindow).Object == (FNullWindow *)0x0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L"");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      pTVar4 = (this->CurrentlyActiveWindow).SharedReferenceCount.ReferenceController;
      pFVar3 = (this->CurrentlyActiveWindow).Object;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (pFVar3 == (FNullWindow *)0x0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L"");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_58 = pFVar3;
      local_50 = pTVar4;
      (*pcVar6)(plVar5,&local_58,0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_50);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    }
  }
  if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b0.Data.AllocatorInstance.Data);
  }
  return;
}

// CreateNullApplication @ 1423d76b0

FNullApplication * __cdecl FNullApplication::CreateNullApplication(void)

{
  FNullApplication *this;
  
  if (NullApplication == (FNullApplication *)0x0) {
    this = ::operator_new(0x120);
    if (this != (FNullApplication *)0x0) {
      NullApplication = FNullApplication(this);
      return NullApplication;
    }
    NullApplication = (FNullApplication *)0x0;
  }
  return NullApplication;
}

// DestroyApplication @ 1423d8e10

void __thiscall FNullApplication::DestroyApplication(FNullApplication *this)

{
  return;
}

// DestroyWindow @ 1423d9840

void __thiscall
FNullApplication::DestroyWindow(FNullApplication *this,TSharedRef<FNullWindow,1> *param_1)

{
  TSharedRef<FNullWindow,1> *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  longlong lVar5;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  pTVar1 = (TSharedRef<FNullWindow,1> *)(this->Windows).AllocatorInstance.Data;
  if ((pTVar1 <= param_1) && (param_1 < pTVar1 + (this->Windows).ArrayMax)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar9 = (this->Windows).ArrayNum;
  lVar5 = (longlong)iVar9;
  if (iVar9 != 0) {
    pFVar2 = (this->Windows).AllocatorInstance.Data;
    iVar11 = 0;
    bVar4 = *(FNullWindow **)pFVar2 != param_1->Object;
    lVar7 = 0;
    iVar9 = 0;
    do {
      lVar7 = lVar7 + 1;
      iVar10 = iVar9 + 1;
      if (lVar7 < lVar5) {
        pFVar6 = pFVar2 + lVar7 * 0x10;
        do {
          if (bVar4 != (*(FNullWindow **)pFVar6 != param_1->Object)) break;
          iVar10 = iVar10 + 1;
          lVar7 = lVar7 + 1;
          pFVar6 = pFVar6 + 0x10;
        } while (lVar7 < lVar5);
      }
      iVar8 = iVar10 - iVar9;
      if (bVar4 == false) {
        DestructItems<TSharedRef<FNullWindow,1>,int>
                  ((TSharedRef<FNullWindow,1> *)(pFVar2 + (longlong)iVar9 * 0x10),iVar8);
      }
      else {
        if (iVar11 != iVar9) {
          memmove(pFVar2 + (longlong)iVar11 * 0x10,pFVar2 + (longlong)iVar9 * 0x10,
                  (longlong)iVar8 << 4);
        }
        iVar11 = iVar11 + iVar8;
      }
      bVar4 = (bool)(bVar4 ^ 1);
      iVar9 = iVar10;
    } while (lVar7 < lVar5);
    (this->Windows).ArrayNum = iVar11;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// DestroyWindow @ 1423d99f0

void __cdecl FNullApplication::DestroyWindow(FGenericWindow *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  FNullApplication *pFVar4;
  longlong lVar5;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  FNullWindow *local_48;
  TReferenceControllerBase<1> *pTStack_40;
  TSharedPtr<FNullWindow,1> local_38;
  
  if (NullApplication == (FNullApplication *)0x0) {
    pFVar4 = ::operator_new(0x120);
    if (pFVar4 == (FNullApplication *)0x0) {
      NullApplication = (FNullApplication *)0x0;
    }
    else {
      NullApplication = FNullApplication(pFVar4);
    }
    if (NullApplication == (FNullApplication *)0x0) {
      return;
    }
  }
  pFVar4 = NullApplication;
  FindWindowByPtr(NullApplication,&local_38,param_1);
  if (local_38.Object == (FNullWindow *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
    return;
  }
  if ((local_38.Object == (FNullWindow *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_48 = local_38.Object;
  pTStack_40 = local_38.SharedReferenceCount.ReferenceController;
  if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((local_38.Object == (FNullWindow *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar1 = (pFVar4->Windows).AllocatorInstance.Data;
  if (((pFVar1 <= (FScriptContainerElement *)&local_48) &&
      ((FScriptContainerElement *)&local_48 < pFVar1 + (longlong)(pFVar4->Windows).ArrayMax * 0x10))
     && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar9 = (pFVar4->Windows).ArrayNum;
  lVar5 = (longlong)iVar9;
  if (iVar9 != 0) {
    pFVar1 = (pFVar4->Windows).AllocatorInstance.Data;
    iVar11 = 0;
    bVar3 = *(FNullWindow **)pFVar1 != local_48;
    lVar7 = 0;
    iVar9 = 0;
    do {
      lVar7 = lVar7 + 1;
      iVar10 = iVar9 + 1;
      if (lVar7 < lVar5) {
        pFVar6 = pFVar1 + lVar7 * 0x10;
        do {
          if (bVar3 != (*(FNullWindow **)pFVar6 != local_48)) break;
          iVar10 = iVar10 + 1;
          lVar7 = lVar7 + 1;
          pFVar6 = pFVar6 + 0x10;
        } while (lVar7 < lVar5);
      }
      iVar8 = iVar10 - iVar9;
      if (bVar3 == false) {
        DestructItems<TSharedRef<FNullWindow,1>,int>
                  ((TSharedRef<FNullWindow,1> *)(pFVar1 + (longlong)iVar9 * 0x10),iVar8);
      }
      else {
        if (iVar11 != iVar9) {
          memmove(pFVar1 + (longlong)iVar11 * 0x10,pFVar1 + (longlong)iVar9 * 0x10,
                  (longlong)iVar8 << 4);
        }
        iVar11 = iVar11 + iVar8;
      }
      bVar3 = (bool)(bVar3 ^ 1);
      iVar9 = iVar10;
    } while (lVar7 < lVar5);
    (pFVar4->Windows).ArrayNum = iVar11;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_40);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  return;
}

// Exec_Dev @ 1423db150

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FNullApplication::Exec_Dev
          (FNullApplication *this,UWorld *param_1,wchar_t *param_2,FOutputDevice *param_3)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  wchar_t *local_res18 [2];
  wchar_t *local_28;
  undefined1 local_20 [24];
  
  local_res18[0] = param_2;
  bVar2 = FParse::Command(local_res18,L"NullApp",true);
  if (bVar2) {
    bVar2 = FParse::Command(local_res18,L"Cursor",true);
    if (bVar2) {
      local_28 = local_res18[0];
      bVar2 = FParse::Command(&local_28,L"Status",true);
      if (bVar2) {
        (**(code **)(*(longlong *)this[-1]._padding_ + 0x20))
                  ((longlong *)this[-1]._padding_,local_20);
        FOutputDevice::Log(param_3,L"Cursor status:");
        FOutputDevice::LogfImpl(param_3,L"Position: (%f, %f)");
        return true;
      }
    }
    else {
      bVar2 = FParse::Command(local_res18,L"Window",true);
      if (bVar2) {
        local_28 = local_res18[0];
        bVar2 = FParse::Command(&local_28,L"List",true);
        if (bVar2) {
          FOutputDevice::Log(param_3,L"Window list:");
          iVar1 = (int)this->_padding_;
          iVar3 = 0;
          if (0 < iVar1) {
            do {
              FOutputDevice::LogfImpl(param_3,L"%d");
              iVar3 = iVar3 + 1;
            } while (iVar3 < iVar1);
          }
          return true;
        }
      }
    }
  }
  return false;
}

// FindWindowByPtr @ 1423dc7a0

TSharedPtr<FNullWindow,1> * __thiscall
FNullApplication::FindWindowByPtr
          (FNullApplication *this,TSharedPtr<FNullWindow,1> *__return_storage_ptr__,
          FGenericWindow *param_1)

{
  FScriptContainerElement *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  FNullWindow *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  TSharedPtr<FNullWindow,1> *pTVar7;
  uint uVar8;
  longlong lVar9;
  
  uVar8 = 0;
  if (0 < (this->Windows).ArrayNum) {
    lVar9 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar8 < (this->Windows).ArrayNum) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSharedPtr<FNullWindow,1> *)(*pcVar4)();
        return pTVar7;
      }
      pFVar1 = (this->Windows).AllocatorInstance.Data;
      pTVar2 = *(TReferenceControllerBase<1> **)(pFVar1 + lVar9 + 8);
      pFVar3 = *(FNullWindow **)(pFVar1 + lVar9);
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (pFVar3 == (FNullWindow *)param_1) {
        __return_storage_ptr__->Object = pFVar3;
        (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
        if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
        return __return_storage_ptr__;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 0x10;
    } while ((int)uVar8 < (this->Windows).ArrayNum);
  }
  __return_storage_ptr__->Object = (FNullWindow *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetCapture @ 1423dde80

void * __thiscall FNullApplication::GetCapture(FNullApplication *this)

{
  return (void *)0x0;
}

// GetFullscreenInfo @ 1423df090

void __cdecl
FNullApplication::GetFullscreenInfo(int *param_1,int *param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  FNullApplication *this;
  int *piVar5;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined1 local_18 [16];
  
  if (NullApplication == (FNullApplication *)0x0) {
    this = ::operator_new(0x120);
    if (this == (FNullApplication *)0x0) {
      NullApplication = (FNullApplication *)0x0;
    }
    else {
      NullApplication = FNullApplication(this);
    }
    if (NullApplication == (FNullApplication *)0x0) {
      return;
    }
  }
  local_28 = 0;
  uStack_20 = 0;
  piVar5 = (int *)(**(code **)(NullApplication->_padding_ + 0xb0))
                            (NullApplication,local_18,&local_28);
  iVar1 = *piVar5;
  iVar2 = piVar5[1];
  iVar3 = piVar5[2];
  iVar4 = piVar5[3];
  *param_1 = iVar1;
  *param_2 = iVar2;
  *param_3 = iVar3 - iVar1;
  *param_4 = iVar4 - iVar2;
  return;
}

// GetInputInterface @ 1423df610

IInputInterface * __thiscall FNullApplication::GetInputInterface(FNullApplication *this)

{
  IInputInterface *pIVar1;
  
  pIVar1 = (IInputInterface *)&this->_padding_;
  if (this == (FNullApplication *)0x0) {
    pIVar1 = (IInputInterface *)0x0;
  }
  return pIVar1;
}

// GetModifierKeys @ 1423dfac0

FModifierKeysState __thiscall FNullApplication::GetModifierKeys(FNullApplication *this)

{
  ushort *in_RDX;
  
  *in_RDX = *in_RDX & 0xfe00;
  return SUB82(in_RDX,0);
}

// GetWindowTransparencySupport @ 1423e57d0

EWindowTransparency __thiscall
FNullApplication::GetWindowTransparencySupport(FNullApplication *this)

{
  return PerWindow;
}

// GetWindowUnderCursor @ 1423e5800

TSharedPtr<FGenericWindow,1> * __thiscall
FNullApplication::GetWindowUnderCursor
          (FNullApplication *this,TSharedPtr<FGenericWindow,1> *__return_storage_ptr__)

{
  __return_storage_ptr__->Object = (FGenericWindow *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetWorkArea @ 1423e5900

FPlatformRect * __thiscall
FNullApplication::GetWorkArea
          (FNullApplication *this,FPlatformRect *__return_storage_ptr__,FPlatformRect *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = (this->WorkArea).Top;
  iVar2 = (this->WorkArea).Right;
  iVar3 = (this->WorkArea).Bottom;
  __return_storage_ptr__->Left = (this->WorkArea).Left;
  __return_storage_ptr__->Top = iVar1;
  __return_storage_ptr__->Right = iVar2;
  __return_storage_ptr__->Bottom = iVar3;
  return __return_storage_ptr__;
}

// HandleCursorCommand @ 1423e6940

bool __thiscall
FNullApplication::HandleCursorCommand
          (FNullApplication *this,wchar_t *param_1,FOutputDevice *param_2)

{
  bool bVar1;
  wchar_t *local_res10 [3];
  undefined1 local_18 [16];
  
  local_res10[0] = param_1;
  bVar1 = FParse::Command(local_res10,L"Status",true);
  if (bVar1) {
    (**(code **)(*(longlong *)this->_padding_ + 0x20))((longlong *)this->_padding_,local_18);
    FOutputDevice::Log(param_2,L"Cursor status:");
    FOutputDevice::LogfImpl(param_2,L"Position: (%f, %f)");
    return true;
  }
  return false;
}

// HandleWindowCommand @ 1423e7580

bool __thiscall
FNullApplication::HandleWindowCommand
          (FNullApplication *this,wchar_t *param_1,FOutputDevice *param_2)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  wchar_t *local_res10;
  
  local_res10 = param_1;
  bVar2 = FParse::Command(&local_res10,L"List",true);
  if (bVar2) {
    FOutputDevice::Log(param_2,L"Window list:");
    iVar1 = (this->Windows).ArrayNum;
    iVar3 = 0;
    if (0 < iVar1) {
      do {
        FOutputDevice::LogfImpl(param_2,L"%d");
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar1);
    }
    return true;
  }
  return false;
}

// HideWindow @ 1423e7860

void __cdecl FNullApplication::HideWindow(FGenericWindow *param_1)

{
  FNullApplication *this;
  FNullApplication *pFVar1;
  TSharedPtr<FNullWindow,1> local_18;
  
  if (NullApplication == (FNullApplication *)0x0) {
    this = ::operator_new(0x120);
    pFVar1 = (FNullApplication *)0x0;
    if (this != (FNullApplication *)0x0) {
      pFVar1 = FNullApplication(this);
    }
    NullApplication = pFVar1;
    if (pFVar1 == (FNullApplication *)0x0) {
      return;
    }
  }
  FindWindowByPtr(NullApplication,&local_18,param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return;
}

// InitializeWindow @ 1423e97e0

void __thiscall
FNullApplication::InitializeWindow
          (FNullApplication *this,TSharedRef<FGenericWindow,1> *param_1,
          TSharedRef<FGenericWindowDefinition,1> *param_2,TSharedPtr<FGenericWindow,1> *param_3,
          bool param_4)

{
  int *piVar1;
  TArray<TSharedRef<FNullWindow,1>,TSizedDefaultAllocator<32>_> *pTVar2;
  float fVar3;
  FGenericWindow *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  FGenericWindow *local_28;
  TReferenceControllerBase<1> *local_20;
  FGenericWindowDefinition *local_18;
  FSharedReferencer<1> local_10;
  
  pFVar4 = param_1->Object;
  local_20 = (param_1->SharedReferenceCount).ReferenceController;
  if (local_20 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_20->SharedReferenceCount = (atomic<int>)((int)local_20->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = (param_3->SharedReferenceCount).ReferenceController;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_10.ReferenceController = (param_2->SharedReferenceCount).ReferenceController;
  local_18 = param_2->Object;
  if (local_10.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_10.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_10.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28 = pFVar4;
  if (&pFVar4->Definition != (TSharedPtr<FGenericWindowDefinition,1> *)&local_18) {
    (pFVar4->Definition).Object = local_18;
    local_18 = (FGenericWindowDefinition *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(pFVar4->Definition).SharedReferenceCount,&local_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_10.ReferenceController);
  *(int *)((longlong)&pFVar4[1].Definition.Object + 4) =
       (int)param_2->Object->XDesiredPositionOnScreen;
  *(int *)&pFVar4[1].Definition.SharedReferenceCount.ReferenceController =
       (int)param_2->Object->YDesiredPositionOnScreen;
  *(int *)((longlong)&pFVar4[1].Definition.SharedReferenceCount.ReferenceController + 4) =
       (int)param_2->Object->WidthDesiredOnScreen;
  pTVar2 = &this->Windows;
  fVar3 = param_2->Object->HeightDesiredOnScreen;
  *(undefined1 *)((longlong)&pFVar4[2]._padding_ + 5) = 1;
  *(int *)&pFVar4[2]._padding_ = (int)fVar3;
  pFVar6 = (pTVar2->AllocatorInstance).Data;
  if ((pFVar6 <= (FScriptContainerElement *)&local_28) &&
     ((FScriptContainerElement *)&local_28 < pFVar6 + (longlong)(this->Windows).ArrayMax * 0x10)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar9 = (this->Windows).ArrayNum;
  piVar1 = &(this->Windows).ArrayMax;
  if (iVar9 == *piVar1) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar2->AllocatorInstance,piVar1);
  }
  pFVar6 = (pTVar2->AllocatorInstance).Data;
  (this->Windows).ArrayNum = iVar9 + 1;
  *(FGenericWindow **)(pFVar6 + (longlong)iVar9 * 0x10) = local_28;
  *(TReferenceControllerBase<1> **)(pFVar6 + (longlong)iVar9 * 0x10 + 8) = local_20;
  if (local_20 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_20->SharedReferenceCount = (atomic<int>)((int)local_20->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
  return;
}

// IsCursorDirectlyOverSlateWindow @ 1423ea420

bool __thiscall FNullApplication::IsCursorDirectlyOverSlateWindow(FNullApplication *this)

{
  return true;
}

// IsGamepadAttached @ 1423ea8e0

bool __thiscall FNullApplication::IsGamepadAttached(FNullApplication *this)

{
  return false;
}

// IsMouseAttached @ 1423eac80

bool __thiscall FNullApplication::IsMouseAttached(FNullApplication *this)

{
  return true;
}

// IsUsingHighPrecisionMouseMode @ 1423eb4a0

bool __thiscall FNullApplication::IsUsingHighPrecisionMouseMode(FNullApplication *this)

{
  return this->bUsingHighPrecisionMouseInput;
}

// MakeWindow @ 1423eeb50

TSharedRef<FGenericWindow,1> * __thiscall
FNullApplication::MakeWindow
          (FNullApplication *this,TSharedRef<FGenericWindow,1> *__return_storage_ptr__)

{
  TRawPtrProxy<FNullWindow> local_res10 [3];
  TSharedRef<FNullWindow,1> local_18;
  
  local_res10[0].Object = ::operator_new(0x38);
  if (local_res10[0].Object != (FNullWindow *)0x0) {
    (local_res10[0].Object)->_padding_ = 0;
    (local_res10[0].Object)->_padding_ = 0;
    (local_res10[0].Object)->_padding_ = (longlong)&___7FNullWindow__6B_;
    (local_res10[0].Object)->DPIScaleFactor = 1.0;
    ((local_res10[0].Object)->ScreenPosition).field0_0x0._s_0 =
         (TIntPoint<int>_u_0_s_0)UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
    ((local_res10[0].Object)->SizeInScreen).field0_0x0._s_0 =
         (TIntPoint<int>_u_0_s_0)UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
    (local_res10[0].Object)->bIsVisible = false;
    (local_res10[0].Object)->bIsInitialized = false;
  }
  TSharedRef<FNullWindow,1>::TSharedRef<FNullWindow,1><FNullWindow>(&local_18,local_res10);
  __return_storage_ptr__->Object = (FGenericWindow *)local_18.Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       local_18.SharedReferenceCount.ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// MoveWindowTo @ 1423ef310

void __cdecl FNullApplication::MoveWindowTo(FGenericWindow *param_1,int param_2,int param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  FNullApplication *pFVar5;
  TSharedPtr<FNullWindow,1> local_48;
  FNullWindow *local_38;
  TReferenceControllerBase<1> *local_30;
  
  if (NullApplication == (FNullApplication *)0x0) {
    pFVar5 = ::operator_new(0x120);
    if (pFVar5 == (FNullApplication *)0x0) {
      NullApplication = (FNullApplication *)0x0;
    }
    else {
      NullApplication = FNullApplication(pFVar5);
    }
    if (NullApplication == (FNullApplication *)0x0) {
      return;
    }
  }
  pFVar5 = NullApplication;
  FindWindowByPtr(NullApplication,&local_48,param_1);
  pTVar1 = (TReferenceControllerBase<1> *)pFVar5->_padding_;
  plVar2 = (longlong *)pFVar5->_padding_;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pcVar3 = *(code **)(*plVar2 + 0x168);
  if ((local_48.Object == (FNullWindow *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((local_48.Object == (FNullWindow *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_38 = local_48.Object;
  local_30 = local_48.SharedReferenceCount.ReferenceController;
  if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  (*pcVar3)(plVar2,&local_38,param_2,param_3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  return;
}

// OnInputDeviceModuleRegistered @ 1423f0850

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FNullApplication::OnInputDeviceModuleRegistered
          (FNullApplication *this,FName *param_1,IModularFeature *param_2)

{
  int *piVar1;
  TArray<TSharedPtr<IInputDevice,1>,TSizedDefaultAllocator<32>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  IModularFeature *pIVar6;
  FScriptContainerElement *pFVar7;
  longlong local_18;
  TReferenceControllerBase<1> *local_10;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_class_FName___cdecl_IInputDeviceModule::GetModularFeatureName(void)'::__l2::
       _thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_FName___cdecl_IInputDeviceModule::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_FName___cdecl_IInputDeviceModule::GetModularFeatureName(void)'::__l2::
     _thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`public:_static_class_FName___cdecl_IInputDeviceModule::GetModularFeatureName(void)'
                    ::__l2::FeatureName,L"InputDevice");
    _Init_thread_footer(&`public:_static_class_FName___cdecl_IInputDeviceModule::GetModularFeatureName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if (*param_1 ==
      `public:_static_class_FName___cdecl_IInputDeviceModule::GetModularFeatureName(void)'::__l2::
      FeatureName) {
    pIVar6 = param_2 + -8;
    if (param_2 == (IModularFeature *)0x0) {
      pIVar6 = (IModularFeature *)0x0;
    }
    (**(code **)(*(longlong *)pIVar6 + 0x48))(pIVar6,&local_18,&this->_padding_);
    if (local_18 != 0) {
      if (4 < (byte)LogInit._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogInit);
      }
      pTVar2 = &this->ExternalInputDevices;
      pFVar7 = (pTVar2->AllocatorInstance).Data;
      if (((pFVar7 <= (FScriptContainerElement *)&local_18) &&
          ((FScriptContainerElement *)&local_18 <
           pFVar7 + (longlong)(this->ExternalInputDevices).ArrayMax * 0x10)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar5 = (this->ExternalInputDevices).ArrayNum;
      piVar1 = &(this->ExternalInputDevices).ArrayMax;
      if (iVar5 == *piVar1) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&pTVar2->AllocatorInstance,piVar1);
      }
      (this->ExternalInputDevices).ArrayNum = iVar5 + 1;
      pFVar7 = (pTVar2->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
      *(longlong *)pFVar7 = local_18;
      *(TReferenceControllerBase<1> **)(pFVar7 + 8) = local_10;
      local_10 = (TReferenceControllerBase<1> *)0x0;
      local_18 = 0;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  }
  return;
}

// OnSizeChanged @ 1423f12c0

void __cdecl FNullApplication::OnSizeChanged(FGenericWindow *param_1,int param_2,int param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  FNullApplication *pFVar5;
  TSharedPtr<FNullWindow,1> local_48;
  FNullWindow *local_38;
  TReferenceControllerBase<1> *local_30;
  
  if (NullApplication == (FNullApplication *)0x0) {
    pFVar5 = ::operator_new(0x120);
    if (pFVar5 == (FNullApplication *)0x0) {
      NullApplication = (FNullApplication *)0x0;
    }
    else {
      NullApplication = FNullApplication(pFVar5);
    }
    if (NullApplication == (FNullApplication *)0x0) {
      return;
    }
  }
  pFVar5 = NullApplication;
  FindWindowByPtr(NullApplication,&local_48,param_1);
  pTVar1 = (TReferenceControllerBase<1> *)pFVar5->_padding_;
  plVar2 = (longlong *)pFVar5->_padding_;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pcVar3 = *(code **)(*plVar2 + 0x128);
  if ((local_48.Object == (FNullWindow *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((local_48.Object == (FNullWindow *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_38 = local_48.Object;
  local_30 = local_48.SharedReferenceCount.ReferenceController;
  if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  (*pcVar3)(plVar2,&local_38,param_2,param_3,0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  return;
}

// ParseResolution @ 1423f2040

bool __thiscall
FNullApplication::ParseResolution
          (FNullApplication *this,wchar_t *param_1,uint *param_2,uint *param_3)

{
  bool bVar1;
  uint uVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  ForAnyElementType FVar5;
  uint uVar6;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  if (*param_1 != L'\0') {
    ::FString::FString(&local_58,param_1);
    pFVar3 = ::FString::TrimStartAndEnd(&local_58,&local_28);
    pFVar3 = ::FString::ToLower(pFVar3,&local_38);
    if (&local_58 != pFVar3) {
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      local_58.Data.AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
      (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_58.Data.ArrayNum = (pFVar3->Data).ArrayNum;
      local_58.Data.ArrayMax = (pFVar3->Data).ArrayMax;
      (pFVar3->Data).ArrayNum = 0;
      (pFVar3->Data).ArrayMax = 0;
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_58.Data.ArrayNum != 0) {
      FVar5.Data = local_58.Data.AllocatorInstance.Data;
    }
    uVar2 = _wtoi((wchar_t *)FVar5.Data);
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.Data.ArrayNum = 0;
    local_48.Data.ArrayMax = 0;
    uVar6 = 0;
    if (0 < (int)uVar2) {
      uVar6 = uVar2;
    }
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_58.Data.ArrayNum != 0) {
      FVar5.Data = local_58.Data.AllocatorInstance.Data;
    }
    pwVar4 = wcschr((wchar_t *)FVar5.Data,L'x');
    if (pwVar4 != (wchar_t *)0x0) {
      FVar5.Data = (FScriptContainerElement *)L"";
      if (local_58.Data.ArrayNum != 0) {
        FVar5.Data = local_58.Data.AllocatorInstance.Data;
      }
      pwVar4 = wcschr((wchar_t *)FVar5.Data,L'x');
      pwVar4 = pwVar4 + 1;
      ::FString::operator=(&local_48,pwVar4);
      pFVar3 = ::FString::TrimStartAndEnd(&local_48,&local_28);
      if (&local_48 != pFVar3) {
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
        local_48.Data.AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
        (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_48.Data.ArrayNum = (pFVar3->Data).ArrayNum;
        local_48.Data.ArrayMax = (pFVar3->Data).ArrayMax;
        (pFVar3->Data).ArrayNum = 0;
        (pFVar3->Data).ArrayMax = 0;
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (pwVar4 != (wchar_t *)0x0) {
        uVar2 = local_48.Data.ArrayNum - 1;
        if (local_48.Data.ArrayNum == 0) {
          uVar2 = 0;
        }
        if ((0 < (int)uVar2) && (bVar1 = ::FString::IsNumeric(&local_48), bVar1)) {
          uVar2 = _wtoi(pwVar4);
          *param_2 = uVar6;
          uVar6 = 0;
          if (0 < (int)uVar2) {
            uVar6 = uVar2;
          }
          *param_3 = uVar6;
          if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_48.Data.AllocatorInstance.Data);
          }
          if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_58.Data.AllocatorInstance.Data);
          }
          return true;
        }
      }
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  return false;
}

// PollGameDeviceState @ 1423f2240

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FNullApplication::PollGameDeviceState(FNullApplication *this,float param_1)

{
  int *piVar1;
  TArray<TSharedPtr<IInputDevice,1>,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  IModularFeatures *pIVar9;
  TMulticastDelegateRegistration<void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
  *this_00;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  longlong local_68;
  TReferenceControllerBase<1> *local_60;
  TArray<IInputDeviceModule_*,TSizedDefaultAllocator<32>_> local_58;
  code *local_48;
  undefined8 uStack_40;
  
  IPlatformInputDeviceMapper::Get();
  uVar10 = 0;
  if (this->bHasLoadedInputPlugins == false) {
    pIVar9 = IModularFeatures::Get();
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `public:_static_class_FName___cdecl_IInputDeviceModule::GetModularFeatureName(void)'::__l2
         ::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_static_class_FName___cdecl_IInputDeviceModule::GetModularFeatureName(void)'
                             ::__l2::_thread_safe_static_guard_0__),
       `public:_static_class_FName___cdecl_IInputDeviceModule::GetModularFeatureName(void)'::__l2::
       _thread_safe_static_guard_0__ == -1)) {
      ::FName::FName(&`public:_static_class_FName___cdecl_IInputDeviceModule::GetModularFeatureName(void)'
                      ::__l2::FeatureName,L"InputDevice");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_IInputDeviceModule::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
    IModularFeatures::GetModularFeatureImplementations<IInputDeviceModule>
              (pIVar9,&local_58,
               `public:_static_class_FName___cdecl_IInputDeviceModule::GetModularFeatureName(void)'
               ::__l2::FeatureName);
    uVar11 = uVar10;
    while ((-1 < (int)uVar11 && ((int)uVar11 < local_58.ArrayNum))) {
      uVar7 = 0;
      if ((int)uVar11 < local_58.ArrayNum) {
        uVar7 = ~uVar11 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      (**(code **)(**(longlong **)(local_58.AllocatorInstance.Data + (longlong)(int)uVar11 * 8) +
                  0x48))(*(longlong **)(local_58.AllocatorInstance.Data + (longlong)(int)uVar11 * 8)
                         ,&local_68,&this->_padding_);
      if (local_68 == 0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_60);
        uVar11 = uVar11 + 1;
      }
      else {
        if (4 < (byte)LogInit._0_1_) {
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogInit);
        }
        pTVar2 = &this->ExternalInputDevices;
        pFVar3 = (pTVar2->AllocatorInstance).Data;
        if (((pFVar3 <= (FScriptContainerElement *)&local_68) &&
            ((FScriptContainerElement *)&local_68 <
             pFVar3 + (longlong)(this->ExternalInputDevices).ArrayMax * 0x10)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar8 = (this->ExternalInputDevices).ArrayNum;
        piVar1 = &(this->ExternalInputDevices).ArrayMax;
        if (iVar8 == *piVar1) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&pTVar2->AllocatorInstance,piVar1);
        }
        (this->ExternalInputDevices).ArrayNum = iVar8 + 1;
        pFVar3 = (pTVar2->AllocatorInstance).Data;
        *(longlong *)(pFVar3 + (longlong)iVar8 * 0x10) = local_68;
        *(TReferenceControllerBase<1> **)(pFVar3 + (longlong)iVar8 * 0x10 + 8) = local_60;
        local_60 = (TReferenceControllerBase<1> *)0x0;
        local_68 = 0;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        uVar11 = uVar11 + 1;
      }
    }
    pIVar9 = IModularFeatures::Get();
    this_00 = (TMulticastDelegateRegistration<void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
               *)(**(code **)((longlong)*pIVar9 + 0x38))(pIVar9);
    uStack_40 = (ulonglong)uStack_40._4_4_ << 0x20;
    local_48 = OnInputDeviceModuleRegistered;
    TMulticastDelegateRegistration<void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
    ::AddRaw<FNullApplication>(this_00,(FNullApplication *)&stack0x00000008,(pmf_3e5da4d2 *)this);
    this->bHasLoadedInputPlugins = true;
    if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.AllocatorInstance.Data);
    }
  }
  while( true ) {
    if (((int)uVar10 < 0) || ((this->ExternalInputDevices).ArrayNum <= (int)uVar10)) {
      return;
    }
    if (((int)uVar10 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar3 = (this->ExternalInputDevices).AllocatorInstance.Data;
    lVar12 = (longlong)(int)uVar10;
    if ((*(longlong *)(pFVar3 + lVar12 * 0x10) == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    plVar4 = *(longlong **)(pFVar3 + lVar12 * 0x10);
    (**(code **)(*plVar4 + 8))(plVar4,param_1);
    uVar11 = 0;
    if ((int)uVar10 < (this->ExternalInputDevices).ArrayNum) {
      uVar11 = ~uVar10 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) break;
    pFVar3 = (this->ExternalInputDevices).AllocatorInstance.Data;
    if ((*(longlong *)(pFVar3 + lVar12 * 0x10) == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    (**(code **)(**(longlong **)(pFVar3 + lVar12 * 0x10) + 0x10))();
    uVar10 = uVar10 + 1;
  }
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

// ProcessDeferredEvents @ 1423f3060

void __thiscall FNullApplication::ProcessDeferredEvents(FNullApplication *this,float param_1)

{
  return;
}

// PumpMessages @ 1423fc9d0

void __thiscall FNullApplication::PumpMessages(FNullApplication *this,float param_1)

{
  return;
}

// ResetLightColor @ 142401680

void __thiscall FNullApplication::ResetLightColor(FNullApplication *this,int param_1)

{
  return;
}

// SetCapture @ 142403e50

void __thiscall
FNullApplication::SetCapture(FNullApplication *this,TSharedPtr<FGenericWindow,1> *param_1)

{
  return;
}

// SetForceFeedbackChannelValue @ 1424043d0

void __thiscall
FNullApplication::SetForceFeedbackChannelValue
          (FNullApplication *this,int param_1,FForceFeedbackChannelType param_2,float param_3)

{
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  
  if ((!FApp::bUseVRFocus) || (FApp::bHasVRFocus)) {
    for (iVar5 = 0; (-1 < iVar5 && (iVar5 < (int)this->_padding_)); iVar5 = iVar5 + 1) {
      if ((iVar5 < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar1 = this->_padding_;
      if ((*(longlong *)(lVar1 + (longlong)iVar5 * 0x10) == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      plVar2 = *(longlong **)(lVar1 + (longlong)iVar5 * 0x10);
      (**(code **)(*plVar2 + 0x28))(plVar2,param_1,param_2,param_3);
    }
  }
  return;
}

// SetForceFeedbackChannelValues @ 1424045f0

void __thiscall
FNullApplication::SetForceFeedbackChannelValues
          (FNullApplication *this,int param_1,FForceFeedbackValues *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  
  if ((!FApp::bUseVRFocus) || (FApp::bHasVRFocus)) {
    for (uVar7 = 0; (-1 < (int)uVar7 && ((int)uVar7 < (int)this->_padding_)); uVar7 = uVar7 + 1) {
      if (((int)uVar7 < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar1 = this->_padding_;
      lVar8 = (longlong)(int)uVar7;
      if ((*(longlong *)(lVar1 + lVar8 * 0x10) == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      cVar5 = (**(code **)(**(longlong **)(lVar1 + lVar8 * 0x10) + 0x60))();
      if (cVar5 != '\0') {
        uVar6 = 0;
        if ((int)uVar7 < (int)this->_padding_) {
          uVar6 = ~uVar7 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        lVar1 = this->_padding_;
        if ((*(longlong *)(lVar1 + lVar8 * 0x10) == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        plVar2 = *(longlong **)(lVar1 + lVar8 * 0x10);
        (**(code **)(*plVar2 + 0x30))(plVar2,param_1,param_2);
      }
    }
  }
  return;
}

// SetHapticFeedbackValues @ 142404b10

void __thiscall
FNullApplication::SetHapticFeedbackValues
          (FNullApplication *this,int param_1,int param_2,FHapticFeedbackValues *param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong *plVar5;
  
  if ((!FApp::bUseVRFocus) || (FApp::bHasVRFocus)) {
    for (iVar4 = 0; (-1 < iVar4 && (iVar4 < (int)this->_padding_)); iVar4 = iVar4 + 1) {
      if ((iVar4 < 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      plVar5 = (longlong *)((longlong)iVar4 * 0x10 + this->_padding_);
      if ((*plVar5 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      puVar3 = (undefined8 *)(**(code **)(*(longlong *)*plVar5 + 0x58))();
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3,param_1,param_2,param_3);
      }
    }
  }
  return;
}

// SetHighPrecisionMouseMode @ 142404f30

void __thiscall
FNullApplication::SetHighPrecisionMouseMode
          (FNullApplication *this,bool param_1,TSharedPtr<FGenericWindow,1> *param_2)

{
  (**(code **)(*(longlong *)this->_padding_ + 0x80))();
  this->bUsingHighPrecisionMouseInput = param_1;
  return;
}

// SetLightColor @ 1424050a0

void __thiscall FNullApplication::SetLightColor(FNullApplication *this,int param_1,FColor param_2)

{
  return;
}

// SetMessageHandler @ 142405160

void __thiscall
FNullApplication::SetMessageHandler
          (FNullApplication *this,TSharedRef<FGenericApplicationMessageHandler,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FGenericApplicationMessageHandler *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  pFVar2 = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (TReferenceControllerBase<1> *)this->_padding_;
  this->_padding_ = (longlong)pFVar2;
  this->_padding_ = (longlong)pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// SetWorkArea @ 142406320

void __thiscall FNullApplication::SetWorkArea(FNullApplication *this,FPlatformRect *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_1->Top;
  iVar2 = param_1->Right;
  iVar3 = param_1->Bottom;
  (this->WorkArea).Left = param_1->Left;
  (this->WorkArea).Top = iVar1;
  (this->WorkArea).Right = iVar2;
  (this->WorkArea).Bottom = iVar3;
  return;
}

// ShowWindow @ 1424075c0

void __cdecl FNullApplication::ShowWindow(FGenericWindow *param_1)

{
  FNullApplication *pFVar1;
  TSharedPtr<FNullWindow,1> local_18;
  
  if (NullApplication == (FNullApplication *)0x0) {
    pFVar1 = ::operator_new(0x120);
    if (pFVar1 == (FNullApplication *)0x0) {
      NullApplication = (FNullApplication *)0x0;
    }
    else {
      NullApplication = FNullApplication(pFVar1);
    }
    if (NullApplication == (FNullApplication *)0x0) {
      return;
    }
  }
  pFVar1 = NullApplication;
  FindWindowByPtr(NullApplication,&local_18,param_1);
  ActivateWindow(pFVar1,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return;
}

