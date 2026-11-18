// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 8

// FContentScopeGuard @ 142294660

/* WARNING: Enum "Type": Some values do not have unique names */

FContentScopeGuard * __thiscall
verse::FContentScopeGuard::FContentScopeGuard
          (FContentScopeGuard *this,TSharedRef<verse::FContentScope,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FScriptContainerElement *_Src;
  code *pcVar2;
  bool bVar3;
  FContentScopeGuard *pFVar4;
  FScriptTimeLimiter *this_00;
  longlong lVar5;
  ForAnyElementType local_18;
  int local_10;
  int local_c;
  
  (this->ContentScope).Object = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->ContentScope).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  this->Parent = (FContentScopeGuard *)0x0;
  (this->PendingOnInactiveCallbacks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PendingOnInactiveCallbacks).ArrayNum = 0;
  (this->PendingOnInactiveCallbacks).ArrayMax = 0;
  if ((param_1->Object->bTerminated != false) &&
     (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_1312181176865128405>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\VerseVM\\VVMContentScope.cpp"
                         ,0x2b,"Scope->ShouldExecuteCodeWithThisScope()"), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FContentScopeGuard *)(*pcVar2)();
    return pFVar4;
  }
  lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  this->Parent = *(FContentScopeGuard **)(lVar5 + 0xd50);
  *(FContentScopeGuard **)(lVar5 + 0xd50) = this;
  this_00 = UE::FScriptTimeLimiter::Get();
  UE::FScriptTimeLimiter::StartTimer(this_00);
  if (5 < (byte)LogContentScope._0_1_) {
    local_18.Data = (FScriptContainerElement *)0x0;
    local_10 = (param_1->Object->CreatorDebugName).Data.ArrayNum;
    lVar5 = (longlong)local_10;
    _Src = (param_1->Object->CreatorDebugName).Data.AllocatorInstance.Data;
    if (local_10 == 0) {
      local_c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_10,0,&local_18,local_10,&local_c);
      memcpy(local_18.Data,_Src,lVar5 * 2);
    }
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogContentScope);
    if (local_18.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data);
    }
  }
  return this;
}

// ~FContentScopeGuard @ 142295a70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall verse::FContentScopeGuard::~FContentScopeGuard(FContentScopeGuard *this)

{
  int iVar1;
  FContentScope *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined8 uVar5;
  FScriptTimeLimiter *this_00;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  longlong *plVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res8 [8];
  ForAnyElementType local_28;
  int local_20;
  int local_1c;
  
  plVar9 = (longlong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xd50);
  if (this == (FContentScopeGuard *)*plVar9) {
    if (5 < (byte)LogContentScope._0_1_) {
      pFVar2 = (this->ContentScope).Object;
      local_28.Data = (FScriptContainerElement *)0x0;
      local_20 = (pFVar2->CreatorDebugName).Data.ArrayNum;
      lVar7 = (longlong)local_20;
      pFVar10 = (pFVar2->CreatorDebugName).Data.AllocatorInstance.Data;
      if (local_20 == 0) {
        local_1c = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_20,0,&local_28,local_20,&local_1c);
        memcpy(local_28.Data,pFVar10,lVar7 * 2);
      }
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogContentScope);
      if (local_28.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data);
      }
    }
    EnforceExecutionTime(this);
    *plVar9 = (longlong)this->Parent;
    if (this->Parent == (FContentScopeGuard *)0x0) {
      pFVar10 = (this->PendingOnInactiveCallbacks).AllocatorInstance.Data;
      iVar1 = (this->PendingOnInactiveCallbacks).ArrayNum;
      pFVar8 = pFVar10 + (longlong)iVar1 * 0x30;
      while( true ) {
        if ((this->PendingOnInactiveCallbacks).ArrayNum != iVar1) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<TFunction<void___cdecl(void)>,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res8);
        }
        if (pFVar10 == pFVar8) break;
        UE::Core::Private::Function::CheckCallable(*(void **)pFVar10);
        pcVar3 = *(code **)pFVar10;
        pFVar6 = pFVar10 + 0x10;
        if (*(FScriptContainerElement **)(pFVar10 + 0x28) != (FScriptContainerElement *)0x0) {
          pFVar6 = *(FScriptContainerElement **)(pFVar10 + 0x28);
        }
        uVar5 = (**(code **)(*(longlong *)pFVar6 + 8))();
        (*pcVar3)(uVar5);
        pFVar10 = pFVar10 + 0x30;
      }
      DestructItems<TFunction<void___cdecl(void)>,int>
                ((TFunction<void___cdecl(void)> *)
                 (this->PendingOnInactiveCallbacks).AllocatorInstance.Data,
                 (this->PendingOnInactiveCallbacks).ArrayNum);
      (this->PendingOnInactiveCallbacks).ArrayNum = 0;
      if ((this->PendingOnInactiveCallbacks).ArrayMax != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x30,0x10,0,&(this->PendingOnInactiveCallbacks).AllocatorInstance,0,
                   &(this->PendingOnInactiveCallbacks).ArrayMax);
      }
    }
    this_00 = UE::FScriptTimeLimiter::Get();
    UE::FScriptTimeLimiter::StopTimer(this_00);
    if (((this->PendingOnInactiveCallbacks).ArrayNum != 0) &&
       (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_1312181176865128370>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\VerseVM\\VVMContentScope.cpp"
                           ,0x4e,"PendingOnInactiveCallbacks.Num() == 0"), bVar4))
    goto code_r0x000142295cab;
  }
  else {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1312181176865128391>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\VerseVM\\VVMContentScope.cpp"
                       ,0x39,"this == ActiveScopeGuard");
    if (bVar4) {
code_r0x000142295cab:
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  DestructItems<TFunction<void___cdecl(void)>,int>
            ((TFunction<void___cdecl(void)> *)
             (this->PendingOnInactiveCallbacks).AllocatorInstance.Data,
             (this->PendingOnInactiveCallbacks).ArrayNum);
  pFVar10 = (this->PendingOnInactiveCallbacks).AllocatorInstance.Data;
  if (pFVar10 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ContentScope).SharedReferenceCount.ReferenceController);
  return;
}

// EnforceExecutionTime @ 14229a160

bool __thiscall verse::FContentScopeGuard::EnforceExecutionTime(FContentScopeGuard *this)

{
  FContentScope *pFVar1;
  FScriptContainerElement *_Src;
  bool bVar2;
  FScriptTimeLimiter *this_00;
  longlong lVar3;
  ForAnyElementType local_38;
  int local_30;
  int local_2c;
  FString local_28;
  FText local_18;
  
  if (((this->ContentScope).Object)->bTerminated == false) {
    this_00 = UE::FScriptTimeLimiter::Get();
    bVar2 = UE::FScriptTimeLimiter::HasExceededTimeLimit(this_00);
    if (bVar2) {
      pFVar1 = (this->ContentScope).Object;
      local_38.Data = (FScriptContainerElement *)0x0;
      local_30 = (pFVar1->CreatorDebugName).Data.ArrayNum;
      lVar3 = (longlong)local_30;
      _Src = (pFVar1->CreatorDebugName).Data.AllocatorInstance.Data;
      if (local_30 == 0) {
        local_2c = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_30,0,&local_38,local_30,&local_2c);
        memcpy(local_38.Data,_Src,lVar3 * 2);
      }
      ::FString::PrintfImpl
                (&local_28,
                 L"Script (%s) has exceeded its maximum running time. Possible infinite loop or excessive computation."
                );
      FText::FromString(&local_18,&local_28);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (local_38.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data);
      }
      Verse::RaiseVerseRuntimeError(ErrRuntime_ComputationLimitExceeded,&local_18);
      if (local_18.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
      }
      return false;
    }
  }
  return true;
}

// EnforceExecutionTimeForActiveContentScope @ 14229a290

bool __cdecl verse::FContentScopeGuard::EnforceExecutionTimeForActiveContentScope(void)

{
  void *_Src;
  longlong *plVar1;
  bool bVar2;
  FScriptTimeLimiter *this;
  longlong lVar3;
  ForAnyElementType FStack_38;
  int iStack_30;
  int iStack_2c;
  FString FStack_28;
  FText FStack_18;
  
  plVar1 = *(longlong **)
            (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xd50)
  ;
  if (plVar1 == (longlong *)0x0) {
    return true;
  }
  if (*(char *)(*plVar1 + 0x48) == '\0') {
    this = UE::FScriptTimeLimiter::Get();
    bVar2 = UE::FScriptTimeLimiter::HasExceededTimeLimit(this);
    if (bVar2) {
      FStack_38.Data = (FScriptContainerElement *)0x0;
      iStack_30 = *(int *)(*plVar1 + 0x38);
      lVar3 = (longlong)iStack_30;
      _Src = *(void **)(*plVar1 + 0x30);
      if (iStack_30 == 0) {
        iStack_2c = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iStack_30,0,&FStack_38,iStack_30,&iStack_2c);
        memcpy(FStack_38.Data,_Src,lVar3 * 2);
      }
      ::FString::PrintfImpl
                (&FStack_28,
                 L"Script (%s) has exceeded its maximum running time. Possible infinite loop or excessive computation."
                );
      FText::FromString(&FStack_18,&FStack_28);
      if (FStack_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_28.Data.AllocatorInstance.Data);
      }
      if (FStack_38.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_38.Data);
      }
      Verse::RaiseVerseRuntimeError(ErrRuntime_ComputationLimitExceeded,&FStack_18);
      if (FStack_18.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*FStack_18.TextData.Reference + 0x10))();
      }
      return false;
    }
  }
  return true;
}

// GetActiveScopeGuard @ 14229cd80

FContentScopeGuard ** __cdecl verse::FContentScopeGuard::GetActiveScopeGuard(void)

{
  return (FContentScopeGuard **)
         (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xd50);
}

// GetRootScopeGuard @ 14229ea70

FContentScopeGuard * __cdecl verse::FContentScopeGuard::GetRootScopeGuard(void)

{
  FContentScopeGuard *pFVar1;
  FContentScopeGuard *pFVar2;
  
  pFVar1 = *(FContentScopeGuard **)
            (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xd50)
  ;
  if (pFVar1 != (FContentScopeGuard *)0x0) {
    do {
      pFVar2 = pFVar1;
      pFVar1 = pFVar2->Parent;
    } while (pFVar1 != (FContentScopeGuard *)0x0);
    return pFVar2;
  }
  return (FContentScopeGuard *)0x0;
}

// OnInactive @ 1422a3c80

void __cdecl verse::FContentScopeGuard::OnInactive(TFunction<void___cdecl(void)> *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  FScriptContainerElement *pFVar8;
  
  lVar1 = *(longlong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xd50);
  if (lVar1 != 0) {
    do {
      lVar5 = lVar1;
      lVar1 = *(longlong *)(lVar5 + 0x10);
    } while (*(longlong *)(lVar5 + 0x10) != 0);
    if (lVar5 != 0) {
      if (((*(TFunction<void___cdecl(void)> **)(lVar5 + 0x18) <= param_1) &&
          (param_1 < *(TFunction<void___cdecl(void)> **)(lVar5 + 0x18) + *(int *)(lVar5 + 0x24))) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar4 = *(int *)(lVar5 + 0x20);
      if (iVar4 == *(int *)(lVar5 + 0x24)) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x1030,(ForAnyElementType *)(lVar5 + 0x18),(int *)(lVar5 + 0x24));
      }
      *(int *)(lVar5 + 0x20) = iVar4 + 1;
      pFVar8 = ((ForAnyElementType *)(lVar5 + 0x18))->Data + (longlong)iVar4 * 0x30;
      *(undefined8 *)pFVar8 = *(undefined8 *)param_1;
      *(undefined8 *)(pFVar8 + 0x28) = *(undefined8 *)&param_1->field_0x28;
      *(undefined8 *)&param_1->field_0x28 = 0;
      uVar6 = *(undefined8 *)&param_1->field_0x18;
      *(undefined8 *)(pFVar8 + 0x10) = *(undefined8 *)&param_1->field_0x10;
      *(undefined8 *)(pFVar8 + 0x18) = uVar6;
      *(undefined8 *)(pFVar8 + 0x20) = *(undefined8 *)&param_1->field_0x20;
      if (*(longlong *)pFVar8 == 0) {
        return;
      }
      *(undefined8 *)param_1 = 0;
      return;
    }
  }
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar2 = *(code **)param_1;
  plVar7 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar7 = *(longlong **)&param_1->field_0x28;
  }
  uVar6 = (**(code **)(*plVar7 + 8))();
  (*pcVar2)(uVar6);
  return;
}

// ScheduleTerminateContentScope @ 1422a60d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
verse::FContentScopeGuard::ScheduleTerminateContentScope
          (TSharedRef<verse::FContentScope,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong lVar2;
  code **ppcVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  FScriptContainerElement *pFVar10;
  undefined1 auStack_98 [32];
  code **local_78;
  code **local_70;
  longlong local_68;
  longlong local_60;
  undefined8 local_58;
  code *local_48 [2];
  undefined8 local_38;
  undefined8 uStack_30;
  TReferenceControllerBase<1> *local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  uStack_30 = param_1->Object;
  if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
    local_38 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`verse::FContentScopeGuard::ScheduleTerminateContentScope'::`2'::<lambda_1>,0,0>
                ::_vftable_;
    local_28 = pTVar1;
  }
  else {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    local_38 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`verse::FContentScopeGuard::ScheduleTerminateContentScope'::`2'::<lambda_1>,0,0>
                ::_vftable_;
    local_28 = pTVar1;
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_20 = (longlong *)0x0;
  local_38 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`verse::FContentScopeGuard::ScheduleTerminateContentScope'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`verse::FContentScopeGuard::ScheduleTerminateContentScope'::__l2::<lambda_1>,void>
                ::Call;
  lVar2 = *(longlong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xd50);
  local_28 = pTVar1;
  if (lVar2 == 0) {
LAB_1422a626e:
    UE::Core::Private::Function::CheckCallable
              (UE::Core::Private::Function::
               TFunctionRefCaller<`verse::FContentScopeGuard::ScheduleTerminateContentScope'::__l2::<lambda_1>,void>
               ::Call);
    pcVar4 = local_48[0];
    plVar9 = &local_38;
    if (local_20 != (longlong *)0x0) {
      plVar9 = local_20;
    }
    uVar7 = (**(code **)(*plVar9 + 8))();
    (*pcVar4)(uVar7);
  }
  else {
    do {
      lVar8 = lVar2;
      lVar2 = *(longlong *)(lVar8 + 0x10);
    } while (*(longlong *)(lVar8 + 0x10) != 0);
    if (lVar8 == 0) goto LAB_1422a626e;
    ppcVar3 = *(code ***)(lVar8 + 0x18);
    if ((ppcVar3 <= local_48) && (local_48 < ppcVar3 + (longlong)*(int *)(lVar8 + 0x24) * 6)) {
      local_60 = (longlong)*(int *)(lVar8 + 0x20);
      local_58 = 0x30;
      local_78 = local_48;
      local_70 = ppcVar3;
      local_68 = (longlong)*(int *)(lVar8 + 0x24);
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar6 = *(int *)(lVar8 + 0x20);
    if (iVar6 == *(int *)(lVar8 + 0x24)) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x1030,(ForAnyElementType *)(lVar8 + 0x18),(int *)(lVar8 + 0x24));
    }
    *(int *)(lVar8 + 0x20) = iVar6 + 1;
    pFVar10 = ((ForAnyElementType *)(lVar8 + 0x18))->Data + (longlong)iVar6 * 0x30;
    *(code **)pFVar10 = local_48[0];
    *(longlong **)(pFVar10 + 0x28) = local_20;
    local_20 = (longlong *)0x0;
    *(undefined4 *)(pFVar10 + 0x10) = (undefined4)local_38;
    *(undefined4 *)(pFVar10 + 0x14) = local_38._4_4_;
    *(undefined4 *)(pFVar10 + 0x18) = (undefined4)uStack_30;
    *(undefined4 *)(pFVar10 + 0x1c) = uStack_30._4_4_;
    *(TReferenceControllerBase<1> **)(pFVar10 + 0x20) = local_28;
    if (*(longlong *)pFVar10 != 0) {
      local_48[0] = (code *)0x0;
      goto LAB_1422a62b0;
    }
  }
  if (local_48[0] != (code *)0x0) {
    plVar9 = &local_38;
    if (local_20 != (longlong *)0x0) {
      plVar9 = local_20;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
LAB_1422a62b0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

