// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AssetRegistry
// Functions: 44

// TryGetBoundFunctionName @ 142ab0740

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArrayView<FAssetData_const_,int>),FDefaultTSDelegateUserPolicy,TFunction<void___cdecl(TArrayView<FAssetData_const_,int>)>_const_>
::TryGetBoundFunctionName
          (TBaseFunctorDelegateInstance<void___cdecl(TArrayView<FAssetData_const_,int>),FDefaultTSDelegateUserPolicy,TFunction<void___cdecl(TArrayView<FAssetData_const_,int>)>_const_>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// GetUObject @ 142ab0750

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArrayView<FAssetData_const_,int>),FDefaultTSDelegateUserPolicy,TFunction<void___cdecl(TArrayView<FAssetData_const_,int>)>_const_>
::GetUObject(TBaseFunctorDelegateInstance<void___cdecl(TArrayView<FAssetData_const_,int>),FDefaultTSDelegateUserPolicy,TFunction<void___cdecl(TArrayView<FAssetData_const_,int>)>_const_>
             *this)

{
  return (UObject *)0x0;
}

// GetObjectForTimerManager @ 142ab0760

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArrayView<FAssetData_const_,int>),FDefaultTSDelegateUserPolicy,TFunction<void___cdecl(TArrayView<FAssetData_const_,int>)>_const_>
::GetObjectForTimerManager
          (TBaseFunctorDelegateInstance<void___cdecl(TArrayView<FAssetData_const_,int>),FDefaultTSDelegateUserPolicy,TFunction<void___cdecl(TArrayView<FAssetData_const_,int>)>_const_>
           *this)

{
  return (void *)0x0;
}

// GetBoundProgramCounterForTimerManager @ 142ab0770

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArrayView<FAssetData_const_,int>),FDefaultTSDelegateUserPolicy,TFunction<void___cdecl(TArrayView<FAssetData_const_,int>)>_const_>
::GetBoundProgramCounterForTimerManager
          (TBaseFunctorDelegateInstance<void___cdecl(TArrayView<FAssetData_const_,int>),FDefaultTSDelegateUserPolicy,TFunction<void___cdecl(TArrayView<FAssetData_const_,int>)>_const_>
           *this)

{
  return 0;
}

// HasSameObject @ 142ab0780

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArrayView<FAssetData_const_,int>),FDefaultTSDelegateUserPolicy,TFunction<void___cdecl(TArrayView<FAssetData_const_,int>)>_const_>
::HasSameObject(TBaseFunctorDelegateInstance<void___cdecl(TArrayView<FAssetData_const_,int>),FDefaultTSDelegateUserPolicy,TFunction<void___cdecl(TArrayView<FAssetData_const_,int>)>_const_>
                *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 142ab0790

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArrayView<FAssetData_const_,int>),FDefaultTSDelegateUserPolicy,TFunction<void___cdecl(TArrayView<FAssetData_const_,int>)>_const_>
::IsSafeToExecute(TBaseFunctorDelegateInstance<void___cdecl(TArrayView<FAssetData_const_,int>),FDefaultTSDelegateUserPolicy,TFunction<void___cdecl(TArrayView<FAssetData_const_,int>)>_const_>
                  *this)

{
  return true;
}

// CreateCopy @ 142ab07a0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArrayView<FAssetData_const_,int>),FDefaultTSDelegateUserPolicy,TFunction<void___cdecl(TArrayView<FAssetData_const_,int>)>_const_>
::CreateCopy(TBaseFunctorDelegateInstance<void___cdecl(TArrayView<FAssetData_const_,int>),FDefaultTSDelegateUserPolicy,TFunction<void___cdecl(TArrayView<FAssetData_const_,int>)>_const_>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar4 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6AXV__TArrayView___CBUFAssetData__H___ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar4[2] = this->_padding_;
    *puVar4 = &
              ___7__TBaseFunctorDelegateInstance___A6AXV__TArrayView___CBUFAssetData__H___ZUFDefaultTSDelegateUserPolicy____CBV__TFunction___A6AXV__TArrayView___CBUFAssetData__H___Z____V__6B_
    ;
    lVar1 = *(longlong *)&this->Functor;
    puVar4[4] = lVar1;
    puVar4[9] = 0;
    if (lVar1 != 0) {
      puVar4 = *(undefined8 **)&(this->Functor).field_0x28;
      puVar5 = (undefined8 *)&(this->Functor).field_0x10;
      if (puVar4 != (undefined8 *)0x0) {
        puVar5 = puVar4;
      }
      (**(code **)*puVar5)();
    }
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142ab0860

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArrayView<FAssetData_const_,int>),FDefaultTSDelegateUserPolicy,TFunction<void___cdecl(TArrayView<FAssetData_const_,int>)>_const_>
::CreateCopy(TBaseFunctorDelegateInstance<void___cdecl(TArrayView<FAssetData_const_,int>),FDefaultTSDelegateUserPolicy,TFunction<void___cdecl(TArrayView<FAssetData_const_,int>)>_const_>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXV__TArrayView___CBUFAssetData__H___ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseFunctorDelegateInstance___A6AXV__TArrayView___CBUFAssetData__H___ZUFDefaultTSDelegateUserPolicy____CBV__TFunction___A6AXV__TArrayView___CBUFAssetData__H___Z____V__6B_
    ;
    lVar1 = *(longlong *)&this->Functor;
    puVar2[4] = lVar1;
    puVar2[9] = 0;
    if (lVar1 != 0) {
      puVar2 = *(undefined8 **)&(this->Functor).field_0x28;
      puVar3 = (undefined8 *)&(this->Functor).field_0x10;
      if (puVar2 != (undefined8 *)0x0) {
        puVar3 = puVar2;
      }
      (**(code **)*puVar3)();
    }
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142ab0910

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArrayView<FAssetData_const_,int>),FDefaultTSDelegateUserPolicy,TFunction<void___cdecl(TArrayView<FAssetData_const_,int>)>_const_>
::CreateCopy(TBaseFunctorDelegateInstance<void___cdecl(TArrayView<FAssetData_const_,int>),FDefaultTSDelegateUserPolicy,TFunction<void___cdecl(TArrayView<FAssetData_const_,int>)>_const_>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXV__TArrayView___CBUFAssetData__H___ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseFunctorDelegateInstance___A6AXV__TArrayView___CBUFAssetData__H___ZUFDefaultTSDelegateUserPolicy____CBV__TFunction___A6AXV__TArrayView___CBUFAssetData__H___Z____V__6B_
    ;
    lVar1 = *(longlong *)&this->Functor;
    puVar2[4] = lVar1;
    puVar2[9] = 0;
    if (lVar1 != 0) {
      puVar2 = *(undefined8 **)&(this->Functor).field_0x28;
      puVar3 = (undefined8 *)&(this->Functor).field_0x10;
      if (puVar2 != (undefined8 *)0x0) {
        puVar3 = puVar2;
      }
                    /* WARNING: Could not recover jumptable at 0x000142ab0974. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar3)();
      return;
    }
  }
  return;
}

// Execute @ 142ab0990

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArrayView<FAssetData_const_,int>),FDefaultTSDelegateUserPolicy,TFunction<void___cdecl(TArrayView<FAssetData_const_,int>)>_const_>
::Execute(TBaseFunctorDelegateInstance<void___cdecl(TArrayView<FAssetData_const_,int>),FDefaultTSDelegateUserPolicy,TFunction<void___cdecl(TArrayView<FAssetData_const_,int>)>_const_>
          *this,TArrayView<FAssetData_const_,int> *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  FAssetData *local_18;
  undefined8 uStack_10;
  
  local_18 = param_1->DataPtr;
  uStack_10 = *(undefined8 *)&param_1->ArrayNum;
  UE::Core::Private::Function::CheckCallable(*(void **)&this->Functor);
  plVar1 = *(longlong **)&(this->Functor).field_0x28;
  pcVar2 = *(code **)&this->Functor;
  plVar4 = (longlong *)&(this->Functor).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar4 = plVar1;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(uVar3,&local_18);
  return;
}

// ExecuteIfSafe @ 142ab09f0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArrayView<FAssetData_const_,int>),FDefaultTSDelegateUserPolicy,TFunction<void___cdecl(TArrayView<FAssetData_const_,int>)>_const_>
::ExecuteIfSafe(TBaseFunctorDelegateInstance<void___cdecl(TArrayView<FAssetData_const_,int>),FDefaultTSDelegateUserPolicy,TFunction<void___cdecl(TArrayView<FAssetData_const_,int>)>_const_>
                *this,TArrayView<FAssetData_const_,int> *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  FAssetData *local_18;
  undefined8 uStack_10;
  
  local_18 = param_1->DataPtr;
  uStack_10 = *(undefined8 *)&param_1->ArrayNum;
  UE::Core::Private::Function::CheckCallable(*(void **)&this->Functor);
  plVar1 = *(longlong **)&(this->Functor).field_0x28;
  pcVar2 = *(code **)&this->Functor;
  plVar4 = (longlong *)&(this->Functor).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar4 = plVar1;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(uVar3,&local_18);
  return true;
}

// TryGetBoundFunctionName @ 142b6e360

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IPakFile_const_&),FDefaultTSDelegateUserPolicy,`UE::AssetRegistry::Premade::FPreloader::DelayedInitialize'::__l10::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// GetUObject @ 142b6e370

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IPakFile_const_&),FDefaultTSDelegateUserPolicy,`UE::AssetRegistry::Premade::FPreloader::DelayedInitialize'::__l10::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetObjectForTimerManager @ 142b6e380

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IPakFile_const_&),FDefaultTSDelegateUserPolicy,`UE::AssetRegistry::Premade::FPreloader::DelayedInitialize'::__l10::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetBoundProgramCounterForTimerManager @ 142b6e390

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IPakFile_const_&),FDefaultTSDelegateUserPolicy,`UE::AssetRegistry::Premade::FPreloader::DelayedInitialize'::__l10::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// HasSameObject @ 142b6e3a0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IPakFile_const_&),FDefaultTSDelegateUserPolicy,`UE::AssetRegistry::Premade::FPreloader::DelayedInitialize'::__l10::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 142b6e3b0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IPakFile_const_&),FDefaultTSDelegateUserPolicy,`UE::AssetRegistry::Premade::FPreloader::DelayedInitialize'::__l10::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// CreateCopy @ 142b6e3c0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IPakFile_const_&),FDefaultTSDelegateUserPolicy,`UE::AssetRegistry::Premade::FPreloader::DelayedInitialize'::__l10::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVIPakFile___ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEBVIPakFile___ZUFDefaultTSDelegateUserPolicy__V<lambda_1>__9__DelayedInitialize_FPreloader_Premade_AssetRegistry_UE__AEAAXXZ___V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142b6e460

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IPakFile_const_&),FDefaultTSDelegateUserPolicy,`UE::AssetRegistry::Premade::FPreloader::DelayedInitialize'::__l10::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVIPakFile___ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEBVIPakFile___ZUFDefaultTSDelegateUserPolicy__V<lambda_1>__9__DelayedInitialize_FPreloader_Premade_AssetRegistry_UE__AEAAXXZ___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142b6e4e0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IPakFile_const_&),FDefaultTSDelegateUserPolicy,`UE::AssetRegistry::Premade::FPreloader::DelayedInitialize'::__l10::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVIPakFile___ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEBVIPakFile___ZUFDefaultTSDelegateUserPolicy__V<lambda_1>__9__DelayedInitialize_FPreloader_Premade_AssetRegistry_UE__AEAAXXZ___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// Execute @ 142b6e530

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IPakFile_const_&),FDefaultTSDelegateUserPolicy,`UE::AssetRegistry::Premade::FPreloader::DelayedInitialize'::__l10::<lambda_1>_>
::Execute(void *this,IPakFile *param_1)

{
  `UE::AssetRegistry::Premade::FPreloader::DelayedInitialize'::__l10::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return;
}

// ExecuteIfSafe @ 142b6e540

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IPakFile_const_&),FDefaultTSDelegateUserPolicy,`UE::AssetRegistry::Premade::FPreloader::DelayedInitialize'::__l10::<lambda_1>_>
::ExecuteIfSafe(void *this,IPakFile *param_1)

{
  `UE::AssetRegistry::Premade::FPreloader::DelayedInitialize'::__l10::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return true;
}

// CreateCopy @ 142b8abc0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::AssetDataGather::FResults_const_&),FDefaultTSDelegateUserPolicy,`UE::AssetRegistry::FAssetRegistryImpl::ScanPathsSynchronous'::__l18::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFResults_AssetDataGather_UE___ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(UE::AssetDataGather::FResults_const_&),FDefaultTSDelegateUserPolicy,`UE::AssetRegistry::FAssetRegistryImpl::ScanPathsSynchronous'::`18'::<lambda_2>_>
               ::_vftable_;
    uVar1 = *(undefined8 *)((longlong)this + 0x20);
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar2[4] = uVar1;
    uVar1 = *(undefined8 *)((longlong)this + 0x30);
    puVar2[5] = *(undefined8 *)((longlong)this + 0x28);
    puVar2[6] = uVar1;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142b8ac50

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::AssetDataGather::FResults_const_&),FDefaultTSDelegateUserPolicy,`UE::AssetRegistry::FAssetRegistryImpl::ScanPathsSynchronous'::__l18::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFResults_AssetDataGather_UE___ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(UE::AssetDataGather::FResults_const_&),FDefaultTSDelegateUserPolicy,`UE::AssetRegistry::FAssetRegistryImpl::ScanPathsSynchronous'::`18'::<lambda_2>_>
               ::_vftable_;
    uVar1 = *(undefined8 *)((longlong)this + 0x20);
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar2[4] = uVar1;
    uVar1 = *(undefined8 *)((longlong)this + 0x30);
    puVar2[5] = *(undefined8 *)((longlong)this + 0x28);
    puVar2[6] = uVar1;
  }
  return;
}

// CreateCopy @ 142b8aca0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::AssetDataGather::FResults_const_&),FDefaultTSDelegateUserPolicy,`UE::AssetRegistry::FAssetRegistryImpl::ScanPathsSynchronous'::__l18::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined8 *puVar7;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar6) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFResults_AssetDataGather_UE___ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar7[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar7 = &TBaseFunctorDelegateInstance<void___cdecl(UE::AssetDataGather::FResults_const_&),FDefaultTSDelegateUserPolicy,`UE::AssetRegistry::FAssetRegistryImpl::ScanPathsSynchronous'::`18'::<lambda_2>_>
               ::_vftable_;
    uVar2 = *(undefined4 *)((longlong)this + 0x1c);
    uVar3 = *(undefined4 *)((longlong)this + 0x20);
    uVar4 = *(undefined4 *)((longlong)this + 0x24);
    *(undefined4 *)(puVar7 + 3) = *(undefined4 *)((longlong)this + 0x18);
    *(undefined4 *)((longlong)puVar7 + 0x1c) = uVar2;
    *(undefined4 *)(puVar7 + 4) = uVar3;
    *(undefined4 *)((longlong)puVar7 + 0x24) = uVar4;
    uVar5 = *(undefined8 *)((longlong)this + 0x30);
    puVar7[5] = *(undefined8 *)((longlong)this + 0x28);
    puVar7[6] = uVar5;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142b8ad50

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,`UAssetRegistryImpl::RequestTick'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,`UAssetRegistryImpl::RequestTick'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142b8add0

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,`UAssetRegistryImpl::RequestTick'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,`UAssetRegistryImpl::RequestTick'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 142b8ae20

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,`UAssetRegistryImpl::RequestTick'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,`UAssetRegistryImpl::RequestTick'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 142b90e30

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::AssetDataGather::FResults_const_&),FDefaultTSDelegateUserPolicy,`UE::AssetRegistry::FAssetRegistryImpl::ScanPathsSynchronous'::__l18::<lambda_2>_>
::Execute(void *this,FResults *param_1)

{
  `UE::AssetRegistry::FAssetRegistryImpl::ScanPathsSynchronous'::__l18::<lambda_2>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return;
}

// Execute @ 142b90e40

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,`UAssetRegistryImpl::RequestTick'::__l2::<lambda_1>_>
::Execute(void *this,float param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(*(longlong *)((longlong)this + 0x18) + 0x28);
  (**(code **)(*plVar1 + 0x3a8))(plVar1,0);
  return false;
}

// ExecuteIfSafe @ 142b90f70

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::AssetDataGather::FResults_const_&),FDefaultTSDelegateUserPolicy,`UE::AssetRegistry::FAssetRegistryImpl::ScanPathsSynchronous'::__l18::<lambda_2>_>
::ExecuteIfSafe(void *this,FResults *param_1)

{
  `UE::AssetRegistry::FAssetRegistryImpl::ScanPathsSynchronous'::__l18::<lambda_2>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return true;
}

// ExecuteIfSafe @ 142b90f90

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,`UAssetRegistryImpl::RequestTick'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,float param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(*(longlong *)((longlong)this + 0x18) + 0x28);
  (**(code **)(*plVar1 + 0x3a8))(plVar1,0);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 142b95eb0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::AssetDataGather::FResults_const_&),FDefaultTSDelegateUserPolicy,`UE::AssetRegistry::FAssetRegistryImpl::ScanPathsSynchronous'::__l18::<lambda_2>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 142b95ec0

ulong64 __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,`UAssetRegistryImpl::RequestTick'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetObjectForTimerManager @ 142b97eb0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::AssetDataGather::FResults_const_&),FDefaultTSDelegateUserPolicy,`UE::AssetRegistry::FAssetRegistryImpl::ScanPathsSynchronous'::__l18::<lambda_2>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142b97ec0

void * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,`UAssetRegistryImpl::RequestTick'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetUObject @ 142b99470

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::AssetDataGather::FResults_const_&),FDefaultTSDelegateUserPolicy,`UE::AssetRegistry::FAssetRegistryImpl::ScanPathsSynchronous'::__l18::<lambda_2>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142b99480

UObject * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,`UAssetRegistryImpl::RequestTick'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 142b9a2e0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::AssetDataGather::FResults_const_&),FDefaultTSDelegateUserPolicy,`UE::AssetRegistry::FAssetRegistryImpl::ScanPathsSynchronous'::__l18::<lambda_2>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 142b9a2f0

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,`UAssetRegistryImpl::RequestTick'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 142b9c9a0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::AssetDataGather::FResults_const_&),FDefaultTSDelegateUserPolicy,`UE::AssetRegistry::FAssetRegistryImpl::ScanPathsSynchronous'::__l18::<lambda_2>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 142b9c9b0

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,`UAssetRegistryImpl::RequestTick'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// TryGetBoundFunctionName @ 142bb2fc0

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::AssetDataGather::FResults_const_&),FDefaultTSDelegateUserPolicy,`UE::AssetRegistry::FAssetRegistryImpl::ScanPathsSynchronous'::__l18::<lambda_2>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142bb2fd0

FName __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,`UAssetRegistryImpl::RequestTick'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

