// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 6

// Create @ 1419309a0

/* WARNING: Removing unreachable block (ram,0x000141930b05) */

FActivity * __thiscall
FTrackedActivityManager::Create
          (FTrackedActivityManager *this,wchar_t *param_1,wchar_t *param_2,
          ETrackedActivityLight param_3,EType param_4,int param_5)

{
  int *piVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FActivity *pFVar7;
  FActivity *local_38;
  FString local_30;
  FScriptContainerElement local_20;
  FScriptContainerElement local_1f;
  
  pFVar7 = ::operator_new(0x30);
  local_38 = (FActivity *)0x0;
  if (pFVar7 != (FActivity *)0x0) {
    pFVar7->Type = Activity;
    pFVar7->SortValue = 0;
    *(undefined8 *)&pFVar7->Id = 0;
    (pFVar7->Name).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar7->Name).Data.ArrayNum = 0;
    (pFVar7->Name).Data.ArrayMax = 0;
    (pFVar7->Stack).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar7->Stack).ArrayNum = 0;
    (pFVar7->Stack).ArrayMax = 0;
    local_38 = pFVar7;
  }
  ::FString::operator=(&local_38->Name,param_1);
  pFVar7 = local_38;
  local_38->Type = param_4;
  local_38->SortValue = param_5;
  ::FString::FString(&local_30,param_2);
  local_1f = (FScriptContainerElement)0x0;
  pFVar3 = (pFVar7->Stack).AllocatorInstance.Data;
  local_20 = (FScriptContainerElement)param_3;
  if (((pFVar3 <= (FScriptContainerElement *)&local_30) &&
      ((FScriptContainerElement *)&local_30 < pFVar3 + (longlong)(pFVar7->Stack).ArrayMax * 0x18))
     && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar7 = (FActivity *)(*pcVar4)();
    return pFVar7;
  }
  iVar6 = (pFVar7->Stack).ArrayNum;
  piVar1 = &(pFVar7->Stack).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&(pFVar7->Stack).AllocatorInstance,piVar1);
  }
  (pFVar7->Stack).ArrayNum = iVar6 + 1;
  pFVar3 = (pFVar7->Stack).AllocatorInstance.Data;
  *(undefined8 *)(pFVar3 + (longlong)iVar6 * 0x18) = 0;
  pFVar3 = pFVar3 + (longlong)iVar6 * 0x18;
  *(FScriptContainerElement **)pFVar3 = local_30.Data.AllocatorInstance.Data;
  *(int *)(pFVar3 + 8) = local_30.Data.ArrayNum;
  *(int *)(pFVar3 + 0xc) = local_30.Data.ArrayMax;
  pFVar3[0x10] = local_20;
  pFVar3[0x11] = local_1f;
  local_30.Data.ArrayNum = 0;
  local_30.Data.ArrayMax = 0;
  local_30.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if ((this == (FTrackedActivityManager *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar7 = (FActivity *)(*pcVar4)();
    return pFVar7;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  uVar2 = this->IdCounter;
  this->IdCounter = uVar2 + 1;
  local_38->Id = uVar2;
  pFVar3 = (this->Activities).AllocatorInstance.Data;
  if (((pFVar3 <= (FScriptContainerElement *)&local_38) &&
      ((FScriptContainerElement *)&local_38 < pFVar3 + (longlong)(this->Activities).ArrayMax * 8))
     && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar7 = (FActivity *)(*pcVar4)();
    return pFVar7;
  }
  iVar6 = (this->Activities).ArrayNum;
  piVar1 = &(this->Activities).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Activities).AllocatorInstance,piVar1);
  }
  (this->Activities).ArrayNum = iVar6 + 1;
  *(FActivity **)((this->Activities).AllocatorInstance.Data + (longlong)iVar6 * 8) = local_38;
  SendEvent(this,Added,local_38);
  pFVar7 = local_38;
  LeaveCriticalSection((LPCRITICAL_SECTION)this);
  return pFVar7;
}

// Destroy @ 141933530

void __thiscall FTrackedActivityManager::Destroy(FTrackedActivityManager *this,FActivity *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  FActivity *pFVar8;
  int iVar9;
  FActivity *local_res10;
  
  local_res10 = param_1;
  if (((param_1->Stack).ArrayNum != 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Activity->Stack.Num() == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\TrackedActivity.cpp"
                         ,0x3f,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((this == (FTrackedActivityManager *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  pFVar2 = (this->Activities).AllocatorInstance.Data;
  if (((pFVar2 <= (FScriptContainerElement *)&local_res10) &&
      ((FScriptContainerElement *)&local_res10 < pFVar2 + (longlong)(this->Activities).ArrayMax * 8)
      ) && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar1 = (this->Activities).ArrayNum;
  pFVar8 = local_res10;
  if (iVar1 != 0) {
    iVar9 = 0;
    pFVar2 = (this->Activities).AllocatorInstance.Data;
    bVar4 = *(FActivity **)pFVar2 != local_res10;
    lVar5 = 0;
    iVar6 = 0;
    do {
      iVar7 = iVar6;
      do {
        lVar5 = lVar5 + 1;
        iVar7 = iVar7 + 1;
        if (iVar1 <= lVar5) break;
      } while (bVar4 == (*(FActivity **)(pFVar2 + lVar5 * 8) != pFVar8));
      if (bVar4 != false) {
        if (iVar9 != iVar6) {
          memmove(pFVar2 + (longlong)iVar9 * 8,pFVar2 + (longlong)iVar6 * 8,
                  (longlong)(iVar7 - iVar6) << 3);
          pFVar8 = local_res10;
        }
        iVar9 = iVar9 + (iVar7 - iVar6);
      }
      bVar4 = (bool)(bVar4 ^ 1);
      iVar6 = iVar7;
    } while (lVar5 < iVar1);
    (this->Activities).ArrayNum = iVar9;
  }
  SendEvent(this,Removed,pFVar8);
  if (this != (FTrackedActivityManager *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)this);
  }
  pFVar8 = local_res10;
  if (local_res10 != (FActivity *)0x0) {
    DestructItems<FTrackedActivityManager::FInfo,int>
              ((FInfo *)(local_res10->Stack).AllocatorInstance.Data,(local_res10->Stack).ArrayNum);
    pFVar2 = (pFVar8->Stack).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    pFVar2 = (pFVar8->Name).Data.AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    ::operator_delete(pFVar8,0x30);
  }
  return;
}

// Get @ 141944bb0

FTrackedActivityManager * __cdecl FTrackedActivityManager::Get(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FTrackedActivityManager&___ptr64___cdecl_FTrackedActivityManager::Get(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FTrackedActivityManager&___ptr64___cdecl_FTrackedActivityManager::Get(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FTrackedActivityManager&___ptr64___cdecl_FTrackedActivityManager::Get(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      InitializeCriticalSectionAndSpinCount
                ((LPCRITICAL_SECTION)
                 &`public:_static_class_FTrackedActivityManager&___ptr64___cdecl_FTrackedActivityManager::Get(void)'
                  ::__l2::Manager,4000);
      `public:_static_class_FTrackedActivityManager&___ptr64___cdecl_FTrackedActivityManager::Get(void)'
      ::__l2::Manager.EventFuncMaxDepth = 0xffffffff;
      `public:_static_class_FTrackedActivityManager&___ptr64___cdecl_FTrackedActivityManager::Get(void)'
      ::__l2::Manager.Activities.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      `public:_static_class_FTrackedActivityManager&___ptr64___cdecl_FTrackedActivityManager::Get(void)'
      ::__l2::Manager.Activities.ArrayNum = 0;
      `public:_static_class_FTrackedActivityManager&___ptr64___cdecl_FTrackedActivityManager::Get(void)'
      ::__l2::Manager.Activities.ArrayMax = 0;
      `public:_static_class_FTrackedActivityManager&___ptr64___cdecl_FTrackedActivityManager::Get(void)'
      ::__l2::Manager.EventFunc._0_8_ = 0;
      `public:_static_class_FTrackedActivityManager&___ptr64___cdecl_FTrackedActivityManager::Get(void)'
      ::__l2::Manager.EventFunc._40_8_ = 0;
      `public:_static_class_FTrackedActivityManager&___ptr64___cdecl_FTrackedActivityManager::Get(void)'
      ::__l2::Manager.IdCounter = 1;
      atexit(`FTrackedActivityManager::Get'::__l2::_dynamic_atexit_destructor_for__Manager__);
      _Init_thread_footer(&`public:_static_class_FTrackedActivityManager&___ptr64___cdecl_FTrackedActivityManager::Get(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_class_FTrackedActivityManager&___ptr64___cdecl_FTrackedActivityManager::Get(void)'
              ::__l2::Manager;
    }
  }
  return &`public:_static_class_FTrackedActivityManager&___ptr64___cdecl_FTrackedActivityManager::Get(void)'
          ::__l2::Manager;
}

// GetInfo @ 1419480a0

FInfo * __thiscall
FTrackedActivityManager::GetInfo
          (FTrackedActivityManager *this,FInfo *__return_storage_ptr__,FActivity *param_1,
          uint param_2,TStringBuilderWithBuffer<wchar_t,256> *param_3)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FInfo *pFVar6;
  longlong lVar7;
  size_t sVar8;
  uint uVar9;
  wchar_t *_Str;
  FScriptContainerElement FVar10;
  int iVar11;
  wchar_t *pwVar12;
  uint uVar13;
  
  uVar5 = (param_1->Stack).ArrayNum;
  if (uVar5 < param_2) {
    param_2 = uVar5;
  }
  uVar9 = param_2 - 1;
  uVar13 = 0;
  if ((int)uVar9 < (int)uVar5) {
    uVar13 = ~uVar9 >> 0x1f;
  }
  if ((uVar13 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FInfo *)(*pcVar3)();
    return pFVar6;
  }
  lVar7 = (longlong)(int)uVar9;
  pwVar12 = L"";
  pFVar2 = (param_1->Stack).AllocatorInstance.Data;
  if (*(int *)(pFVar2 + lVar7 * 0x18 + 8) == 0) {
    _Str = L"";
  }
  else {
    _Str = *(wchar_t **)(pFVar2 + lVar7 * 0x18);
  }
  FVar10 = pFVar2[lVar7 * 0x18 + 0x10];
  if (pFVar2[lVar7 * 0x18 + 0x11] != (FScriptContainerElement)0x0) {
    uVar13 = param_2 - 2;
    uVar5 = 0;
    if ((int)uVar13 < (param_1->Stack).ArrayNum) {
      uVar5 = ~uVar13 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FInfo *)(*pcVar3)();
      return pFVar6;
    }
    pFVar2 = (param_1->Stack).AllocatorInstance.Data + (longlong)(int)uVar13 * 0x18;
    iVar1 = *(int *)(pFVar2 + 8);
    iVar11 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar11 = 0;
    }
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>
              ((TStringBuilderBase<wchar_t> *)param_3,*(wchar_t **)pFVar2,iVar11);
    iVar11 = 0;
    if (_Str != (wchar_t *)0x0) {
      sVar8 = wcslen(_Str);
      iVar11 = (int)sVar8;
    }
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>
              ((TStringBuilderBase<wchar_t> *)param_3,_Str,iVar11);
    if ((ulonglong)param_3->_padding_ < param_3->_padding_ + 2U) {
      TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)param_3,1);
    }
    *(undefined2 *)param_3->_padding_ = 0;
    _Str = (wchar_t *)param_3->_padding_;
  }
  do {
    if (FVar10 != (FScriptContainerElement)0x4) {
LAB_14194828b:
      if ((param_1->Name).Data.ArrayNum != 0) {
        pwVar12 = (wchar_t *)(param_1->Name).Data.AllocatorInstance.Data;
      }
      __return_storage_ptr__->Type = param_1->Type;
      __return_storage_ptr__->SortValue = param_1->SortValue;
      __return_storage_ptr__->Id = param_1->Id;
      __return_storage_ptr__->Name = pwVar12;
      __return_storage_ptr__->Status = _Str;
      __return_storage_ptr__->Light = (ETrackedActivityLight)FVar10;
      return __return_storage_ptr__;
    }
    if (uVar9 == 0) {
      FVar10 = (FScriptContainerElement)0x0;
      goto LAB_14194828b;
    }
    uVar13 = -uVar9;
    uVar9 = uVar9 - 1;
    uVar5 = 0;
    if ((int)uVar9 < (param_1->Stack).ArrayNum) {
      uVar5 = uVar13 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FInfo *)(*pcVar3)();
      return pFVar6;
    }
    FVar10 = (param_1->Stack).AllocatorInstance.Data[(longlong)(int)uVar9 * 0x18 + 0x10];
  } while( true );
}

// SendEvent @ 141969440

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FTrackedActivityManager::SendEvent(FTrackedActivityManager *this,EEvent param_1,FActivity *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStackY_298 [32];
  EEvent local_268 [2];
  FInfo local_260;
  TStringBuilderWithBuffer<wchar_t,256> local_238;
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStackY_298;
  if (*(longlong *)&this->EventFunc != 0) {
    local_238._padding_ = (longlong)local_238.StringBuffer;
    local_238._padding_ = (longlong)local_238.StringBuffer;
    local_238._padding_._0_2_ = 0;
    local_238._padding_ = (longlong)local_18;
    GetInfo(this,&local_260,param_2,this->EventFuncMaxDepth,&local_238);
    local_268[0] = param_1;
    UE::Core::Private::Function::CheckCallable(*(void **)&this->EventFunc);
    plVar1 = *(longlong **)&(this->EventFunc).field_0x28;
    pcVar2 = *(code **)&this->EventFunc;
    plVar4 = (longlong *)&(this->EventFunc).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar4 = plVar1;
    }
    uVar3 = (**(code **)(*plVar4 + 8))();
    (*pcVar2)(uVar3,local_268,&local_260);
    if ((char)local_238._padding_ != '\0') {
      FMemory::Free((void *)local_238._padding_);
    }
  }
  return;
}

// TraverseActivities @ 141975120

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FTrackedActivityManager::TraverseActivities
          (FTrackedActivityManager *this,
          TFunction<void___cdecl(FTrackedActivity::FInfo_const_&)> *param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  wchar_t *pwVar9;
  void *pvVar10;
  size_t sVar11;
  wchar_t *pwVar12;
  undefined8 uVar13;
  uint uVar14;
  ulonglong uVar15;
  longlong *plVar16;
  uint uVar17;
  int iVar19;
  char cVar20;
  FScriptContainerElement *pFVar21;
  longlong lVar22;
  undefined1 auStack_308 [32];
  longlong local_2e8;
  longlong local_2e0;
  longlong local_2d8;
  undefined1 local_2c8 [8];
  wchar_t *local_2c0;
  uint local_2b8;
  void *local_2b0;
  FScriptContainerElement *local_2a8;
  ulong64 local_2a0;
  TFunction<void___cdecl(FTrackedActivity::FInfo_const_&)> *local_298;
  FTrackedActivityManager *local_290;
  FScriptContainerElement *local_288;
  wchar_t *local_280;
  wchar_t *local_278;
  char local_270;
  undefined4 local_26c;
  undefined4 local_268;
  undefined4 local_264;
  wchar_t *local_258;
  wchar_t *local_250;
  wchar_t *local_248;
  undefined2 local_240;
  wchar_t local_238 [256];
  ulonglong local_38 [2];
  int iVar18;
  
  local_38[0] = __security_cookie.value ^ (ulonglong)auStack_308;
  local_298 = param_1;
  local_290 = this;
  if ((this == (FTrackedActivityManager *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  local_2b8 = (this->Activities).ArrayNum;
  uVar15 = (ulonglong)(int)local_2b8;
  pFVar21 = (this->Activities).AllocatorInstance.Data;
  local_288 = pFVar21 + uVar15 * 8;
  do {
    pFVar3 = local_288;
    local_2a8 = pFVar21;
    if ((this->Activities).ArrayNum != (int)uVar15) {
      local_2c8[0] = 0;
      `TCheckedPointerIterator<FTrackedActivityManager::FActivity_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_2c8);
    }
    if (pFVar21 == pFVar3) {
      if (this != (FTrackedActivityManager *)0x0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)this);
      }
      return;
    }
    puVar1 = *(undefined8 **)pFVar21;
    local_258 = local_238;
    local_250 = local_238;
    local_248 = (wchar_t *)local_38;
    local_240 = 0;
    iVar19 = *(int *)(puVar1 + 3);
    iVar18 = -1;
    if (iVar19 != -1) {
      iVar18 = iVar19;
    }
    uVar17 = iVar18 - 1;
    uVar6 = 0;
    if ((int)uVar17 < iVar19) {
      uVar6 = ~uVar17 >> 0x1f;
    }
    if (uVar6 == 0) {
      local_2e8 = (longlong)(int)uVar17;
      local_2e0 = (longlong)iVar19;
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    lVar7 = (longlong)(int)uVar17;
    lVar22 = puVar1[2];
    if (*(int *)(lVar22 + 8 + lVar7 * 0x18) == 0) {
      local_2c0 = L"";
    }
    else {
      local_2c0 = *(wchar_t **)(lVar22 + lVar7 * 0x18);
    }
    cVar20 = *(char *)(lVar22 + 0x10 + lVar7 * 0x18);
    lVar4 = local_2e0;
    if (*(char *)(lVar22 + 0x11 + lVar7 * 0x18) != '\0') {
      uVar6 = iVar18 - 2;
      uVar14 = 0;
      if ((int)uVar6 < *(int *)(puVar1 + 3)) {
        uVar14 = ~uVar6 >> 0x1f;
      }
      if (uVar14 == 0) {
        local_2e8 = (longlong)(int)uVar6;
        local_2e0 = (longlong)*(int *)(puVar1 + 3);
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      iVar18 = *(int *)(puVar1[2] + 8 + (longlong)(int)uVar6 * 0x18);
      local_2b0 = *(void **)(puVar1[2] + (longlong)(int)uVar6 * 0x18);
      iVar19 = iVar18 + -1;
      if (iVar18 == 0) {
        iVar19 = 0;
      }
      lVar22 = (longlong)iVar19;
      if (local_248 < local_250 + lVar22) {
        if (local_240._1_1_ != '\0') {
          local_2e0 = (longlong)local_248 - (longlong)local_258 >> 1;
          local_2e8 = (longlong)local_250 - (longlong)local_258 >> 1;
          local_2d8 = lVar22;
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("!bIsExternal",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\StringBuilder.cpp"
                             ,0x24,
                             L"Extending the capacity of an external string builder is not supported. Size = %I64u Capacity = %I64u ExtraCapacity = %I64u."
                            );
          if (bVar5) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        uVar15 = ((longlong)local_248 - (longlong)local_258 >> 1) + -1 + lVar22;
        uVar15 = uVar15 >> 1 | uVar15;
        uVar15 = uVar15 >> 2 | uVar15;
        uVar15 = uVar15 >> 4 | uVar15;
        uVar15 = uVar15 >> 8 | uVar15;
        uVar8 = (uVar15 >> 0x10 | uVar15) + 1;
        uVar15 = 0x20;
        if (0x20 < uVar8) {
          uVar15 = uVar8;
        }
        local_2a0 = uVar15 * 2;
        pwVar9 = FMemory::Malloc(local_2a0,2);
        lVar7 = (longlong)local_250 - (longlong)local_258 >> 1;
        if (lVar7 != 0) {
          memcpy(pwVar9,local_258,lVar7 * 2);
        }
        if ((char)local_240 != '\0') {
          FMemory::Free(local_258);
        }
        local_250 = pwVar9 + lVar7;
        local_248 = (wchar_t *)(local_2a0 + (longlong)pwVar9);
        local_240 = CONCAT11(local_240._1_1_,1);
        local_258 = pwVar9;
      }
      if (iVar19 != 0) {
        pvVar10 = FGenericPlatformString::Memcpy(local_250,local_2b0,lVar22 * 2);
        local_250 = (wchar_t *)((longlong)pvVar10 + lVar22 * 2);
      }
      pwVar9 = local_250;
      iVar19 = 0;
      if (local_2c0 != (wchar_t *)0x0) {
        sVar11 = wcslen(local_2c0);
        iVar19 = (int)sVar11;
      }
      lVar22 = (longlong)iVar19;
      if (local_248 < pwVar9 + lVar22) {
        if (local_240._1_1_ != '\0') {
          local_2e0 = (longlong)local_248 - (longlong)local_258 >> 1;
          local_2e8 = (longlong)pwVar9 - (longlong)local_258 >> 1;
          local_2d8 = lVar22;
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("!bIsExternal",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\StringBuilder.cpp"
                             ,0x24,
                             L"Extending the capacity of an external string builder is not supported. Size = %I64u Capacity = %I64u ExtraCapacity = %I64u."
                            );
          if (bVar5) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        uVar15 = ((longlong)local_248 - (longlong)local_258 >> 1) + -1 + lVar22;
        uVar15 = uVar15 >> 1 | uVar15;
        uVar15 = uVar15 >> 2 | uVar15;
        uVar15 = uVar15 >> 4 | uVar15;
        uVar15 = uVar15 >> 8 | uVar15;
        uVar8 = (uVar15 >> 0x10 | uVar15) + 1;
        uVar15 = 0x20;
        if (0x20 < uVar8) {
          uVar15 = uVar8;
        }
        local_2b0 = (void *)(uVar15 * 2);
        pwVar12 = FMemory::Malloc((ulong64)local_2b0,2);
        lVar7 = (longlong)local_250 - (longlong)local_258 >> 1;
        if (lVar7 != 0) {
          memcpy(pwVar12,local_258,lVar7 * 2);
        }
        if ((char)local_240 != '\0') {
          FMemory::Free(local_258);
        }
        pwVar9 = pwVar12 + lVar7;
        local_248 = (wchar_t *)((longlong)local_2b0 + (longlong)pwVar12);
        local_240 = CONCAT11(local_240._1_1_,1);
        local_258 = pwVar12;
        local_250 = pwVar9;
      }
      if (iVar19 != 0) {
        pvVar10 = FGenericPlatformString::Memcpy(pwVar9,local_2c0,lVar22 * 2);
        pwVar9 = (wchar_t *)((longlong)pvVar10 + lVar22 * 2);
        local_250 = pwVar9;
      }
      if (local_248 < pwVar9 + 1) {
        if (local_240._1_1_ != '\0') {
          local_2e0 = (longlong)local_248 - (longlong)local_258 >> 1;
          local_2d8 = 1;
          local_2e8 = (longlong)pwVar9 - (longlong)local_258 >> 1;
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("!bIsExternal",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\StringBuilder.cpp"
                             ,0x24,
                             L"Extending the capacity of an external string builder is not supported. Size = %I64u Capacity = %I64u ExtraCapacity = %I64u."
                            );
          if (bVar5) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        uVar15 = (longlong)local_248 - (longlong)local_258 >> 1;
        uVar15 = uVar15 >> 1 | uVar15;
        uVar15 = uVar15 >> 2 | uVar15;
        uVar15 = uVar15 >> 4 | uVar15;
        uVar15 = uVar15 >> 8 | uVar15;
        uVar8 = (uVar15 >> 0x10 | uVar15) + 1;
        uVar15 = 0x20;
        if (0x20 < uVar8) {
          uVar15 = uVar8;
        }
        pwVar12 = FMemory::Malloc(uVar15 * 2,2);
        lVar22 = (longlong)local_250 - (longlong)local_258 >> 1;
        if (lVar22 != 0) {
          memcpy(pwVar12,local_258,lVar22 * 2);
        }
        if ((char)local_240 != '\0') {
          FMemory::Free(local_258);
        }
        pwVar9 = pwVar12 + lVar22;
        local_248 = pwVar12 + uVar15;
        local_240 = CONCAT11(local_240._1_1_,1);
        local_258 = pwVar12;
        local_250 = pwVar9;
      }
      *pwVar9 = L'\0';
      local_2c0 = local_258;
      lVar4 = local_2e0;
      pFVar21 = local_2a8;
      param_1 = local_298;
    }
    while (cVar20 == '\x04') {
      if (uVar17 == 0) {
        cVar20 = '\0';
        break;
      }
      local_2e0 = (longlong)*(int *)(puVar1 + 3);
      uVar14 = -uVar17;
      uVar17 = uVar17 - 1;
      uVar6 = 0;
      if ((int)uVar17 < *(int *)(puVar1 + 3)) {
        uVar6 = uVar14 >> 0x1f;
      }
      if (uVar6 == 0) {
        local_2e8 = (longlong)(int)uVar17;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        lVar4 = local_2e0;
        if (bVar5) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      local_2e0 = lVar4;
      lVar4 = local_2e0;
      cVar20 = *(char *)(puVar1[2] + 0x10 + (longlong)(int)uVar17 * 0x18);
    }
    if (*(int *)(puVar1 + 1) == 0) {
      local_280 = L"";
    }
    else {
      local_280 = (wchar_t *)*puVar1;
    }
    local_26c = *(undefined4 *)(puVar1 + 4);
    local_268 = *(undefined4 *)((longlong)puVar1 + 0x24);
    local_264 = *(undefined4 *)(puVar1 + 5);
    local_2e0 = lVar4;
    local_278 = local_2c0;
    local_270 = cVar20;
    UE::Core::Private::Function::CheckCallable(*(void **)param_1);
    pcVar2 = *(code **)param_1;
    plVar16 = *(longlong **)&param_1->field_0x28;
    if (*(longlong **)&param_1->field_0x28 == (longlong *)0x0) {
      plVar16 = (longlong *)&param_1->field_0x10;
    }
    uVar13 = (**(code **)(*plVar16 + 8))();
    (*pcVar2)(uVar13,&local_280);
    if ((char)local_240 != '\0') {
      FMemory::Free(local_258);
    }
    pFVar21 = pFVar21 + 8;
    uVar15 = (ulonglong)local_2b8;
    this = local_290;
  } while( true );
}

