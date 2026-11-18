// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 165

// TryGetBoundFunctionName @ 14a201920

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_25>_>
::TryGetBoundFunctionName
          (TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_25>_>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// GetUObject @ 14a201930

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_25>_>
::GetUObject(TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_25>_>
             *this)

{
  return (UObject *)0x0;
}

// GetObjectForTimerManager @ 14a201940

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_25>_>
::GetObjectForTimerManager
          (TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_25>_>
           *this)

{
  return (void *)0x0;
}

// GetBoundProgramCounterForTimerManager @ 14a201950

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_25>_>
::GetBoundProgramCounterForTimerManager
          (TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_25>_>
           *this)

{
  return 0;
}

// HasSameObject @ 14a201960

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_25>_>
::HasSameObject(TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_25>_>
                *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 14a201970

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_25>_>
::IsSafeToExecute(TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_25>_>
                  *this)

{
  return true;
}

// CreateCopy @ 14a201980

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_25>_>
::CreateCopy(TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_25>_>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

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
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &_vftable_;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14a201a30

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_25>_>
::CreateCopy(TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_25>_>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

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
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14a201ab0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_25>_>
::CreateCopy(TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_25>_>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &_vftable_;
  }
  return;
}

// Execute @ 14a201af0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_25>_>
::Execute(TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_25>_>
          *this,IConsoleVariable *param_1)

{
  ::<lambda_25>::operator()(&this->Functor,param_1);
  return;
}

// ExecuteIfSafe @ 14a201b10

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_25>_>
::ExecuteIfSafe(TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_25>_>
                *this,IConsoleVariable *param_1)

{
  ::<lambda_25>::operator()(&this->Functor,param_1);
  return true;
}

// CreateCopy @ 14a24a340

void __thiscall
TBaseFunctorDelegateInstance<TArray<TObjectPtr<UAssetUserData>,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy,`FAnimNode_ControlRigBase::UpdateGetAssetUserDataDelegate'::__l2::<lambda_1>_>
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
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TArray_U__TObjectPtr_VUAssetUserData____V__TSizedDefaultAllocator__0CA_____XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &TBaseFunctorDelegateInstance<TArray<TObjectPtr<UAssetUserData>,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy,`FAnimNode_ControlRigBase::UpdateGetAssetUserDataDelegate'::`2'::<lambda_1>_>
               ::_vftable_;
    uVar1 = *(undefined8 *)((longlong)this + 0x20);
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar2[4] = uVar1;
    puVar2[5] = *(undefined8 *)((longlong)this + 0x28);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14a24a3d0

void __thiscall
TBaseFunctorDelegateInstance<TArray<TObjectPtr<UAssetUserData>,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy,`FAnimNode_ControlRigBase::UpdateGetAssetUserDataDelegate'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TArray_U__TObjectPtr_VUAssetUserData____V__TSizedDefaultAllocator__0CA_____XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &TBaseFunctorDelegateInstance<TArray<TObjectPtr<UAssetUserData>,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy,`FAnimNode_ControlRigBase::UpdateGetAssetUserDataDelegate'::`2'::<lambda_1>_>
               ::_vftable_;
    uVar1 = *(undefined8 *)((longlong)this + 0x20);
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar2[4] = uVar1;
    puVar2[5] = *(undefined8 *)((longlong)this + 0x28);
  }
  return;
}

// CreateCopy @ 14a24a430

void __thiscall
TBaseFunctorDelegateInstance<TArray<TObjectPtr<UAssetUserData>,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy,`FAnimNode_ControlRigBase::UpdateGetAssetUserDataDelegate'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined8 *puVar6;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar6 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TArray_U__TObjectPtr_VUAssetUserData____V__TSizedDefaultAllocator__0CA_____XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar6 = &TBaseFunctorDelegateInstance<TArray<TObjectPtr<UAssetUserData>,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy,`FAnimNode_ControlRigBase::UpdateGetAssetUserDataDelegate'::`2'::<lambda_1>_>
               ::_vftable_;
    uVar2 = *(undefined4 *)((longlong)this + 0x1c);
    uVar3 = *(undefined4 *)((longlong)this + 0x20);
    uVar4 = *(undefined4 *)((longlong)this + 0x24);
    *(undefined4 *)(puVar6 + 3) = *(undefined4 *)((longlong)this + 0x18);
    *(undefined4 *)((longlong)puVar6 + 0x1c) = uVar2;
    *(undefined4 *)(puVar6 + 4) = uVar3;
    *(undefined4 *)((longlong)puVar6 + 0x24) = uVar4;
    puVar6[5] = *(undefined8 *)((longlong)this + 0x28);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14a24a4e0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigReplay::StartRecording'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUControlRig__AEBVFName___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigReplay::StartRecording'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14a24a560

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigReplay::StartRecording'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUControlRig__AEBVFName___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigReplay::StartRecording'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14a24a5b0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigReplay::StartRecording'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUControlRig__AEBVFName___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigReplay::StartRecording'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14a24a650

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigTestData::StartRecording'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUControlRig__AEBVFName___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigTestData::StartRecording'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14a24a6d0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigTestData::StartRecording'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUControlRig__AEBVFName___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigTestData::StartRecording'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14a24a720

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigTestData::StartRecording'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUControlRig__AEBVFName___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigTestData::StartRecording'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14a24a7c0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigReplay::StartReplay'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUControlRig__AEBVFName___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigReplay::StartReplay'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14a24a840

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigReplay::StartReplay'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUControlRig__AEBVFName___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigReplay::StartReplay'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14a24a890

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigReplay::StartReplay'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUControlRig__AEBVFName___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigReplay::StartReplay'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14a24a930

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigTestData::StartReplay'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUControlRig__AEBVFName___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigTestData::StartReplay'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14a24a9b0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigTestData::StartReplay'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUControlRig__AEBVFName___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigTestData::StartReplay'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14a24aa00

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigTestData::StartReplay'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUControlRig__AEBVFName___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigTestData::StartReplay'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14a24aaa0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigReplay::StartRecording'::__l2::<lambda_2>_>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVURigVMHost__AEBVFName___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigReplay::StartRecording'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14a24ab20

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigReplay::StartRecording'::__l2::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVURigVMHost__AEBVFName___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigReplay::StartRecording'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14a24ab70

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigReplay::StartRecording'::__l2::<lambda_2>_>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVURigVMHost__AEBVFName___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigReplay::StartRecording'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14a24ac10

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigTestData::StartRecording'::__l2::<lambda_2>_>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVURigVMHost__AEBVFName___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigTestData::StartRecording'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14a24ac90

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigTestData::StartRecording'::__l2::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVURigVMHost__AEBVFName___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigTestData::StartRecording'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14a24ace0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigTestData::StartRecording'::__l2::<lambda_2>_>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVURigVMHost__AEBVFName___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigTestData::StartRecording'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14a24ad80

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigReplay::StartReplay'::__l2::<lambda_2>_>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVURigVMHost__AEBVFName___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigReplay::StartReplay'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14a24ae00

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigReplay::StartReplay'::__l2::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVURigVMHost__AEBVFName___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigReplay::StartReplay'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14a24ae50

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigReplay::StartReplay'::__l2::<lambda_2>_>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVURigVMHost__AEBVFName___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigReplay::StartReplay'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14a24aef0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigTestData::StartReplay'::__l2::<lambda_2>_>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVURigVMHost__AEBVFName___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigTestData::StartReplay'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14a24af70

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigTestData::StartReplay'::__l2::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVURigVMHost__AEBVFName___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigTestData::StartReplay'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14a24afc0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigTestData::StartReplay'::__l2::<lambda_2>_>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVURigVMHost__AEBVFName___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigTestData::StartReplay'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14a24b060

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigReplay::StartRecording'::__l2::<lambda_3>_>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVURigVMHost__AEBVFName___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigReplay::StartRecording'::`2'::<lambda_3>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14a24b0e0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigReplay::StartRecording'::__l2::<lambda_3>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVURigVMHost__AEBVFName___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigReplay::StartRecording'::`2'::<lambda_3>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14a24b130

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigReplay::StartRecording'::__l2::<lambda_3>_>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVURigVMHost__AEBVFName___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigReplay::StartRecording'::`2'::<lambda_3>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14a24b1d0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigTestData::StartRecording'::__l2::<lambda_3>_>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVURigVMHost__AEBVFName___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigTestData::StartRecording'::`2'::<lambda_3>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14a24b250

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigTestData::StartRecording'::__l2::<lambda_3>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVURigVMHost__AEBVFName___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigTestData::StartRecording'::`2'::<lambda_3>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14a24b2a0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigTestData::StartRecording'::__l2::<lambda_3>_>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVURigVMHost__AEBVFName___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigTestData::StartRecording'::`2'::<lambda_3>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14a24b340

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigReplay::StartReplay'::__l2::<lambda_3>_>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVURigVMHost__AEBVFName___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigReplay::StartReplay'::`2'::<lambda_3>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14a24b3c0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigReplay::StartReplay'::__l2::<lambda_3>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVURigVMHost__AEBVFName___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigReplay::StartReplay'::`2'::<lambda_3>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14a24b410

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigReplay::StartReplay'::__l2::<lambda_3>_>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVURigVMHost__AEBVFName___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigReplay::StartReplay'::`2'::<lambda_3>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14a24b4b0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigTestData::StartReplay'::__l2::<lambda_3>_>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVURigVMHost__AEBVFName___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigTestData::StartReplay'::`2'::<lambda_3>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14a24b530

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigTestData::StartReplay'::__l2::<lambda_3>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVURigVMHost__AEBVFName___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigTestData::StartReplay'::`2'::<lambda_3>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14a24b580

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigTestData::StartReplay'::__l2::<lambda_3>_>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVURigVMHost__AEBVFName___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigTestData::StartReplay'::`2'::<lambda_3>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14a253930

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TArray<TObjectPtr<UAssetUserData>,TSizedDefaultAllocator<32>_> * __thiscall
TBaseFunctorDelegateInstance<TArray<TObjectPtr<UAssetUserData>,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy,`FAnimNode_ControlRigBase::UpdateGetAssetUserDataDelegate'::__l2::<lambda_1>_>
::Execute(void *this,
         TArray<TObjectPtr<UAssetUserData>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  UE::Core::Private::Tuple::TTupleBase<TIntegerSequence<unsigned_int>_>::
  ApplyAfter<_FAnimNode_ControlRigBase::UpdateGetAssetUserDataDelegate_::__l2::<lambda_1>_&>
            ((TTupleBase<TIntegerSequence<unsigned_int>_> *)((longlong)this + 8),
             __return_storage_ptr__,(<lambda_1> *)((longlong)this + 0x18));
  return __return_storage_ptr__;
}

// Execute @ 14a253960

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigReplay::StartRecording'::__l2::<lambda_1>_>
::Execute(void *this,UControlRig *param_1,FName *param_2)

{
  FName local_res8;
  
  FLazyName::Resolve(&FRigUnit_PrepareForExecution::EventName);
  if (*param_2 == local_res8) {
    FSampleTrackHost::AddTimeSample
              ((FSampleTrackHost *)(*(longlong *)((longlong)this + 0x18) + 0x78),
               *(float *)((longlong)&param_1->_padding_ + 4),*(float *)&param_1->_padding_);
    FControlRigReplayTracks::StoreVariables
              ((FControlRigReplayTracks *)(*(longlong *)((longlong)this + 0x18) + 0x78),
               (URigVMHost *)param_1);
    *(undefined1 *)(*(longlong *)((longlong)this + 0x18) + 0x3d0) = 0;
  }
  return;
}

// Execute @ 14a2539e0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigTestData::StartRecording'::__l2::<lambda_1>_>
::Execute(void *this,UControlRig *param_1,FName *param_2)

{
  FControlRigTestDataFrame::Store
            ((FControlRigTestDataFrame *)(*(longlong *)((longlong)this + 0x18) + 1000),param_1,true)
  ;
  return;
}

// Execute @ 14a253a00

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigReplay::StartReplay'::__l2::<lambda_1>_>
::Execute(void *this,UControlRig *param_1,FName *param_2)

{
  FName local_res8;
  TFunction<void___cdecl(EMessageSeverity::Type,FName_const_&,FString_const_&)> local_38;
  
  FLazyName::Resolve(&FRigUnit_PrepareForExecution::EventName);
  if (*param_2 == local_res8) {
    local_38._0_8_ = 0;
    local_38._40_8_ = 0;
    FControlRigReplayTracks::RestoreVariables
              ((FControlRigReplayTracks *)(*(longlong *)((longlong)this + 0x18) + 0x78),0,
               (URigVMHost *)param_1,&local_38);
    *(undefined1 *)(*(longlong *)((longlong)this + 0x18) + 0x3d0) = 0;
  }
  return;
}

// Execute @ 14a253a80

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigTestData::StartReplay'::__l2::<lambda_1>_>
::Execute(void *this,UControlRig *param_1,FName *param_2)

{
  FControlRigTestDataFrame::Restore
            ((FControlRigTestDataFrame *)(*(longlong *)((longlong)this + 0x18) + 1000),param_1,true)
  ;
  return;
}

// Execute @ 14a253aa0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigReplay::StartRecording'::__l2::<lambda_2>_>
::Execute(void *this,URigVMHost *param_1,FName *param_2)

{
  `UControlRigReplay::StartRecording'::__l2::<lambda_2>::operator()
            ((void *)((longlong)this + 0x18),param_1,param_2);
  return;
}

// Execute @ 14a253ab0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigTestData::StartRecording'::__l2::<lambda_2>_>
::Execute(void *this,URigVMHost *param_1,FName *param_2)

{
  `UControlRigTestData::StartRecording'::__l2::<lambda_2>::operator()
            ((void *)((longlong)this + 0x18),param_1,param_2);
  return;
}

// Execute @ 14a253ac0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigReplay::StartReplay'::__l2::<lambda_2>_>
::Execute(void *this,URigVMHost *param_1,FName *param_2)

{
  `UControlRigReplay::StartReplay'::__l2::<lambda_2>::operator()
            ((void *)((longlong)this + 0x18),param_1,param_2);
  return;
}

// Execute @ 14a253ad0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigTestData::StartReplay'::__l2::<lambda_2>_>
::Execute(void *this,URigVMHost *param_1,FName *param_2)

{
  `UControlRigTestData::StartReplay'::__l2::<lambda_2>::operator()
            ((void *)((longlong)this + 0x18),param_1,param_2);
  return;
}

// Execute @ 14a253ae0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigReplay::StartRecording'::__l2::<lambda_3>_>
::Execute(void *this,URigVMHost *param_1,FName *param_2)

{
  `UControlRigReplay::StartRecording'::__l2::<lambda_3>::operator()
            ((void *)((longlong)this + 0x18),param_1,param_2);
  return;
}

// Execute @ 14a253af0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigTestData::StartRecording'::__l2::<lambda_3>_>
::Execute(void *this,URigVMHost *param_1,FName *param_2)

{
  `UControlRigTestData::StartRecording'::__l2::<lambda_3>::operator()
            ((void *)((longlong)this + 0x18),param_1,param_2);
  return;
}

// Execute @ 14a253b00

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigReplay::StartReplay'::__l2::<lambda_3>_>
::Execute(void *this,URigVMHost *param_1,FName *param_2)

{
  `UControlRigReplay::StartReplay'::__l2::<lambda_3>::operator()
            ((void *)((longlong)this + 0x18),param_1,param_2);
  return;
}

// Execute @ 14a253b10

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigTestData::StartReplay'::__l2::<lambda_3>_>
::Execute(void *this,URigVMHost *param_1,FName *param_2)

{
  `UControlRigTestData::StartReplay'::__l2::<lambda_3>::operator()
            ((void *)((longlong)this + 0x18),param_1,param_2);
  return;
}

// ExecuteIfSafe @ 14a2573a0

bool __thiscall
TBaseFunctorDelegateInstance<TArray<TObjectPtr<UAssetUserData>,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy,`FAnimNode_ControlRigBase::UpdateGetAssetUserDataDelegate'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this)

{
  int iVar1;
  TObjectPtr<UAssetUserData> *pTVar2;
  bool bVar3;
  ForAnyElementType local_18;
  undefined8 local_10;
  
  bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)((longlong)this + 0x20));
  if (bVar3) {
    local_18.Data = (FScriptContainerElement *)0x0;
    iVar1 = *(int *)(*(longlong *)((longlong)this + 0x28) + 0x98);
    pTVar2 = *(TObjectPtr<UAssetUserData> **)(*(longlong *)((longlong)this + 0x28) + 0x90);
    local_10 = CONCAT44(local_10._4_4_,iVar1);
    if (iVar1 == 0) {
      local_10 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar1,0,&local_18,iVar1,(int *)((longlong)&local_10 + 4));
      ConstructItems<TObjectPtr<UAssetUserData>,TObjectPtr<UAssetUserData>,int>
                (local_18.Data,pTVar2,iVar1);
    }
  }
  else {
    if ((*(longlong *)((longlong)this + 0x18) != 0) &&
       ((*(uint *)(*(longlong *)((longlong)this + 0x18) + 8) >> 0x1e & 1) == 0)) {
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)
                 (*(longlong *)((longlong)this + 0x18) + 0x888));
    }
    local_18.Data = (FScriptContainerElement *)0x0;
    local_10 = 0;
  }
  if (local_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return true;
}

// ExecuteIfSafe @ 14a257480

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigReplay::StartRecording'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,UControlRig *param_1,FName *param_2)

{
  FName local_res8;
  
  FLazyName::Resolve(&FRigUnit_PrepareForExecution::EventName);
  if (*param_2 == local_res8) {
    FSampleTrackHost::AddTimeSample
              ((FSampleTrackHost *)(*(longlong *)((longlong)this + 0x18) + 0x78),
               *(float *)((longlong)&param_1->_padding_ + 4),*(float *)&param_1->_padding_);
    FControlRigReplayTracks::StoreVariables
              ((FControlRigReplayTracks *)(*(longlong *)((longlong)this + 0x18) + 0x78),
               (URigVMHost *)param_1);
    *(undefined1 *)(*(longlong *)((longlong)this + 0x18) + 0x3d0) = 0;
  }
  return true;
}

// ExecuteIfSafe @ 14a257500

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigTestData::StartRecording'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,UControlRig *param_1,FName *param_2)

{
  FControlRigTestDataFrame::Store
            ((FControlRigTestDataFrame *)(*(longlong *)((longlong)this + 0x18) + 1000),param_1,true)
  ;
  return true;
}

// ExecuteIfSafe @ 14a257530

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigReplay::StartReplay'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,UControlRig *param_1,FName *param_2)

{
  FName local_res8;
  TFunction<void___cdecl(EMessageSeverity::Type,FName_const_&,FString_const_&)> local_38;
  
  FLazyName::Resolve(&FRigUnit_PrepareForExecution::EventName);
  if (*param_2 == local_res8) {
    local_38._0_8_ = 0;
    local_38._40_8_ = 0;
    FControlRigReplayTracks::RestoreVariables
              ((FControlRigReplayTracks *)(*(longlong *)((longlong)this + 0x18) + 0x78),0,
               (URigVMHost *)param_1,&local_38);
    *(undefined1 *)(*(longlong *)((longlong)this + 0x18) + 0x3d0) = 0;
  }
  return true;
}

// ExecuteIfSafe @ 14a2575b0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigTestData::StartReplay'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,UControlRig *param_1,FName *param_2)

{
  FControlRigTestDataFrame::Restore
            ((FControlRigTestDataFrame *)(*(longlong *)((longlong)this + 0x18) + 1000),param_1,true)
  ;
  return true;
}

// ExecuteIfSafe @ 14a2575e0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigReplay::StartRecording'::__l2::<lambda_2>_>
::ExecuteIfSafe(void *this,URigVMHost *param_1,FName *param_2)

{
  `UControlRigReplay::StartRecording'::__l2::<lambda_2>::operator()
            ((void *)((longlong)this + 0x18),param_1,param_2);
  return true;
}

// ExecuteIfSafe @ 14a257600

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigTestData::StartRecording'::__l2::<lambda_2>_>
::ExecuteIfSafe(void *this,URigVMHost *param_1,FName *param_2)

{
  `UControlRigTestData::StartRecording'::__l2::<lambda_2>::operator()
            ((void *)((longlong)this + 0x18),param_1,param_2);
  return true;
}

// ExecuteIfSafe @ 14a257620

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigReplay::StartReplay'::__l2::<lambda_2>_>
::ExecuteIfSafe(void *this,URigVMHost *param_1,FName *param_2)

{
  `UControlRigReplay::StartReplay'::__l2::<lambda_2>::operator()
            ((void *)((longlong)this + 0x18),param_1,param_2);
  return true;
}

// ExecuteIfSafe @ 14a257640

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigTestData::StartReplay'::__l2::<lambda_2>_>
::ExecuteIfSafe(void *this,URigVMHost *param_1,FName *param_2)

{
  `UControlRigTestData::StartReplay'::__l2::<lambda_2>::operator()
            ((void *)((longlong)this + 0x18),param_1,param_2);
  return true;
}

// ExecuteIfSafe @ 14a257660

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigReplay::StartRecording'::__l2::<lambda_3>_>
::ExecuteIfSafe(void *this,URigVMHost *param_1,FName *param_2)

{
  `UControlRigReplay::StartRecording'::__l2::<lambda_3>::operator()
            ((void *)((longlong)this + 0x18),param_1,param_2);
  return true;
}

// ExecuteIfSafe @ 14a257680

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigTestData::StartRecording'::__l2::<lambda_3>_>
::ExecuteIfSafe(void *this,URigVMHost *param_1,FName *param_2)

{
  `UControlRigTestData::StartRecording'::__l2::<lambda_3>::operator()
            ((void *)((longlong)this + 0x18),param_1,param_2);
  return true;
}

// ExecuteIfSafe @ 14a2576a0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigReplay::StartReplay'::__l2::<lambda_3>_>
::ExecuteIfSafe(void *this,URigVMHost *param_1,FName *param_2)

{
  `UControlRigReplay::StartReplay'::__l2::<lambda_3>::operator()
            ((void *)((longlong)this + 0x18),param_1,param_2);
  return true;
}

// ExecuteIfSafe @ 14a2576c0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigTestData::StartReplay'::__l2::<lambda_3>_>
::ExecuteIfSafe(void *this,URigVMHost *param_1,FName *param_2)

{
  `UControlRigTestData::StartReplay'::__l2::<lambda_3>::operator()
            ((void *)((longlong)this + 0x18),param_1,param_2);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 14a25f990

ulong64 __thiscall
TBaseFunctorDelegateInstance<TArray<TObjectPtr<UAssetUserData>,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy,`FAnimNode_ControlRigBase::UpdateGetAssetUserDataDelegate'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14a25f9a0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigReplay::StartRecording'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14a25f9b0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigTestData::StartRecording'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14a25f9c0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigReplay::StartReplay'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14a25f9d0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigTestData::StartReplay'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14a25f9e0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigReplay::StartRecording'::__l2::<lambda_2>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14a25f9f0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigTestData::StartRecording'::__l2::<lambda_2>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14a25fa00

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigReplay::StartReplay'::__l2::<lambda_2>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14a25fa10

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigTestData::StartReplay'::__l2::<lambda_2>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14a25fa20

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigReplay::StartRecording'::__l2::<lambda_3>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14a25fa30

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigTestData::StartRecording'::__l2::<lambda_3>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14a25fa40

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigReplay::StartReplay'::__l2::<lambda_3>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14a25fa50

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigTestData::StartReplay'::__l2::<lambda_3>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetObjectForTimerManager @ 14a2663d0

void * __thiscall
TBaseFunctorDelegateInstance<TArray<TObjectPtr<UAssetUserData>,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy,`FAnimNode_ControlRigBase::UpdateGetAssetUserDataDelegate'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14a2663e0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigReplay::StartRecording'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14a2663f0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigTestData::StartRecording'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14a266400

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigReplay::StartReplay'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14a266410

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigTestData::StartReplay'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14a266420

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigReplay::StartRecording'::__l2::<lambda_2>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14a266430

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigTestData::StartRecording'::__l2::<lambda_2>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14a266440

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigReplay::StartReplay'::__l2::<lambda_2>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14a266450

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigTestData::StartReplay'::__l2::<lambda_2>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14a266460

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigReplay::StartRecording'::__l2::<lambda_3>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14a266470

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigTestData::StartRecording'::__l2::<lambda_3>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14a266480

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigReplay::StartReplay'::__l2::<lambda_3>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14a266490

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigTestData::StartReplay'::__l2::<lambda_3>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetUObject @ 14a26cbc0

UObject * __thiscall
TBaseFunctorDelegateInstance<TArray<TObjectPtr<UAssetUserData>,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy,`FAnimNode_ControlRigBase::UpdateGetAssetUserDataDelegate'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14a26cbd0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigReplay::StartRecording'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14a26cbe0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigTestData::StartRecording'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14a26cbf0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigReplay::StartReplay'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14a26cc00

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigTestData::StartReplay'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14a26cc10

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigReplay::StartRecording'::__l2::<lambda_2>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14a26cc20

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigTestData::StartRecording'::__l2::<lambda_2>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14a26cc30

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigReplay::StartReplay'::__l2::<lambda_2>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14a26cc40

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigTestData::StartReplay'::__l2::<lambda_2>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14a26cc50

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigReplay::StartRecording'::__l2::<lambda_3>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14a26cc60

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigTestData::StartRecording'::__l2::<lambda_3>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14a26cc70

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigReplay::StartReplay'::__l2::<lambda_3>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14a26cc80

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigTestData::StartReplay'::__l2::<lambda_3>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 14a26f7c0

bool __thiscall
TBaseFunctorDelegateInstance<TArray<TObjectPtr<UAssetUserData>,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy,`FAnimNode_ControlRigBase::UpdateGetAssetUserDataDelegate'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14a26f7d0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigReplay::StartRecording'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14a26f7e0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigTestData::StartRecording'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14a26f7f0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigReplay::StartReplay'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14a26f800

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigTestData::StartReplay'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14a26f810

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigReplay::StartRecording'::__l2::<lambda_2>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14a26f820

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigTestData::StartRecording'::__l2::<lambda_2>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14a26f830

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigReplay::StartReplay'::__l2::<lambda_2>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14a26f840

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigTestData::StartReplay'::__l2::<lambda_2>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14a26f850

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigReplay::StartRecording'::__l2::<lambda_3>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14a26f860

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigTestData::StartRecording'::__l2::<lambda_3>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14a26f870

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigReplay::StartReplay'::__l2::<lambda_3>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14a26f880

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigTestData::StartReplay'::__l2::<lambda_3>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 14a275310

bool __thiscall
TBaseFunctorDelegateInstance<TArray<TObjectPtr<UAssetUserData>,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy,`FAnimNode_ControlRigBase::UpdateGetAssetUserDataDelegate'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14a275320

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigReplay::StartRecording'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14a275330

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigTestData::StartRecording'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14a275340

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigReplay::StartReplay'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14a275350

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigTestData::StartReplay'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14a275360

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigReplay::StartRecording'::__l2::<lambda_2>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14a275370

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigTestData::StartRecording'::__l2::<lambda_2>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14a275380

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigReplay::StartReplay'::__l2::<lambda_2>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14a275390

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigTestData::StartReplay'::__l2::<lambda_2>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14a2753a0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigReplay::StartRecording'::__l2::<lambda_3>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14a2753b0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigTestData::StartRecording'::__l2::<lambda_3>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14a2753c0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigReplay::StartReplay'::__l2::<lambda_3>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14a2753d0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigTestData::StartReplay'::__l2::<lambda_3>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// TryGetBoundFunctionName @ 14a29dce0

FName __thiscall
TBaseFunctorDelegateInstance<TArray<TObjectPtr<UAssetUserData>,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy,`FAnimNode_ControlRigBase::UpdateGetAssetUserDataDelegate'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14a29dcf0

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigReplay::StartRecording'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14a29dd00

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigTestData::StartRecording'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14a29dd10

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigReplay::StartReplay'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14a29dd20

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigTestData::StartReplay'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14a29dd30

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigReplay::StartRecording'::__l2::<lambda_2>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14a29dd40

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigTestData::StartRecording'::__l2::<lambda_2>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14a29dd50

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigReplay::StartReplay'::__l2::<lambda_2>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14a29dd60

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigTestData::StartReplay'::__l2::<lambda_2>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14a29dd70

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigReplay::StartRecording'::__l2::<lambda_3>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14a29dd80

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigTestData::StartRecording'::__l2::<lambda_3>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14a29dd90

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigReplay::StartReplay'::__l2::<lambda_3>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14a29dda0

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy,`UControlRigTestData::StartReplay'::__l2::<lambda_3>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// CreateCopy @ 14a4004f0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UControlRig_*),FDefaultDelegateUserPolicy,`UMovieSceneControlRigParameterSection::SetControlRig'::__l8::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUControlRig___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(UControlRig_*),FDefaultDelegateUserPolicy,`UMovieSceneControlRigParameterSection::SetControlRig'::`8'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14a400570

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UControlRig_*),FDefaultDelegateUserPolicy,`UMovieSceneControlRigParameterSection::SetControlRig'::__l8::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUControlRig___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(UControlRig_*),FDefaultDelegateUserPolicy,`UMovieSceneControlRigParameterSection::SetControlRig'::`8'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14a4005c0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UControlRig_*),FDefaultDelegateUserPolicy,`UMovieSceneControlRigParameterSection::SetControlRig'::__l8::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUControlRig___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(UControlRig_*),FDefaultDelegateUserPolicy,`UMovieSceneControlRigParameterSection::SetControlRig'::`8'::<lambda_1>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14a407ea0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UControlRig_*),FDefaultDelegateUserPolicy,`UMovieSceneControlRigParameterSection::SetControlRig'::__l8::<lambda_1>_>
::Execute(void *this,UControlRig *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)((longlong)this + 0x18));
  if (bVar1) {
    FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
    return;
  }
  return;
}

// ExecuteIfSafe @ 14a4090b0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UControlRig_*),FDefaultDelegateUserPolicy,`UMovieSceneControlRigParameterSection::SetControlRig'::__l8::<lambda_1>_>
::ExecuteIfSafe(void *this,UControlRig *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)((longlong)this + 0x18));
  if (bVar1) {
    FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  }
  return true;
}

// GetBoundProgramCounterForTimerManager @ 14a4115c0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UControlRig_*),FDefaultDelegateUserPolicy,`UMovieSceneControlRigParameterSection::SetControlRig'::__l8::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetObjectForTimerManager @ 14a4169c0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UControlRig_*),FDefaultDelegateUserPolicy,`UMovieSceneControlRigParameterSection::SetControlRig'::__l8::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetUObject @ 14a41a650

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UControlRig_*),FDefaultDelegateUserPolicy,`UMovieSceneControlRigParameterSection::SetControlRig'::__l8::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 14a41ce00

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UControlRig_*),FDefaultDelegateUserPolicy,`UMovieSceneControlRigParameterSection::SetControlRig'::__l8::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 14a428400

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UControlRig_*),FDefaultDelegateUserPolicy,`UMovieSceneControlRigParameterSection::SetControlRig'::__l8::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// TryGetBoundFunctionName @ 14a45cb00

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UControlRig_*),FDefaultDelegateUserPolicy,`UMovieSceneControlRigParameterSection::SetControlRig'::__l8::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

