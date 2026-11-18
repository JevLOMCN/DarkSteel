// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 11

// CreateCopy @ 14d59c4d0

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(FStateTreeExecutionContext_const_&,UStateTree_const_*,TArrayView<FStateTreeExternalDataDesc_const_,int>,TArrayView<FStateTreeDataView,int>),FDefaultDelegateUserPolicy,`UE::Cameras::FStateTreeCameraDirectorEvaluator::SetContextRequirements'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6A_NAEBUFStateTreeExecutionContext__PEBVUStateTree__V__TArrayView___CBUFStateTreeExternalDataDesc__H__V__TArrayView_UFStateTreeDataView__H___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<bool___cdecl(FStateTreeExecutionContext_const_&,UStateTree_const_*,TArrayView<FStateTreeExternalDataDesc_const_,int>,TArrayView<FStateTreeDataView,int>),FDefaultDelegateUserPolicy,`UE::Cameras::FStateTreeCameraDirectorEvaluator::SetContextRequirements'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d59c550

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(FStateTreeExecutionContext_const_&,UStateTree_const_*,TArrayView<FStateTreeExternalDataDesc_const_,int>,TArrayView<FStateTreeDataView,int>),FDefaultDelegateUserPolicy,`UE::Cameras::FStateTreeCameraDirectorEvaluator::SetContextRequirements'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_NAEBUFStateTreeExecutionContext__PEBVUStateTree__V__TArrayView___CBUFStateTreeExternalDataDesc__H__V__TArrayView_UFStateTreeDataView__H___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<bool___cdecl(FStateTreeExecutionContext_const_&,UStateTree_const_*,TArrayView<FStateTreeExternalDataDesc_const_,int>,TArrayView<FStateTreeDataView,int>),FDefaultDelegateUserPolicy,`UE::Cameras::FStateTreeCameraDirectorEvaluator::SetContextRequirements'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14d59c5a0

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(FStateTreeExecutionContext_const_&,UStateTree_const_*,TArrayView<FStateTreeExternalDataDesc_const_,int>,TArrayView<FStateTreeDataView,int>),FDefaultDelegateUserPolicy,`UE::Cameras::FStateTreeCameraDirectorEvaluator::SetContextRequirements'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6A_NAEBUFStateTreeExecutionContext__PEBVUStateTree__V__TArrayView___CBUFStateTreeExternalDataDesc__H__V__TArrayView_UFStateTreeDataView__H___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<bool___cdecl(FStateTreeExecutionContext_const_&,UStateTree_const_*,TArrayView<FStateTreeExternalDataDesc_const_,int>,TArrayView<FStateTreeDataView,int>),FDefaultDelegateUserPolicy,`UE::Cameras::FStateTreeCameraDirectorEvaluator::SetContextRequirements'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14d5a3400

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(FStateTreeExecutionContext_const_&,UStateTree_const_*,TArrayView<FStateTreeExternalDataDesc_const_,int>,TArrayView<FStateTreeDataView,int>),FDefaultDelegateUserPolicy,`UE::Cameras::FStateTreeCameraDirectorEvaluator::SetContextRequirements'::__l2::<lambda_1>_>
::Execute(void *this,FStateTreeExecutionContext *param_1,UStateTree *param_2,
         TArrayView<FStateTreeExternalDataDesc_const_,int> *param_3,
         TArrayView<FStateTreeDataView,int> *param_4)

{
  bool bVar1;
  TArrayView<FStateTreeDataView,int> local_28;
  TArrayView<FStateTreeExternalDataDesc_const_,int> local_18;
  
  local_18.DataPtr = param_3->DataPtr;
  local_18.ArrayNum = param_3->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_3->field_0xc;
  local_28.DataPtr = param_4->DataPtr;
  local_28.ArrayNum = param_4->ArrayNum;
  local_28._12_4_ = *(undefined4 *)&param_4->field_0xc;
  bVar1 = `UE::Cameras::FStateTreeCameraDirectorEvaluator::SetContextRequirements'::__l2::<lambda_1>
          ::operator()((void *)((longlong)this + 0x18),param_1,param_2,&local_18,&local_28);
  return bVar1;
}

// ExecuteIfSafe @ 14d5a3c00

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(FStateTreeExecutionContext_const_&,UStateTree_const_*,TArrayView<FStateTreeExternalDataDesc_const_,int>,TArrayView<FStateTreeDataView,int>),FDefaultDelegateUserPolicy,`UE::Cameras::FStateTreeCameraDirectorEvaluator::SetContextRequirements'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FStateTreeExecutionContext *param_1,UStateTree *param_2,
               TArrayView<FStateTreeExternalDataDesc_const_,int> *param_3,
               TArrayView<FStateTreeDataView,int> *param_4)

{
  TArrayView<FStateTreeDataView,int> local_28;
  TArrayView<FStateTreeExternalDataDesc_const_,int> local_18;
  
  local_18.DataPtr = param_3->DataPtr;
  local_18.ArrayNum = param_3->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_3->field_0xc;
  local_28.DataPtr = param_4->DataPtr;
  local_28.ArrayNum = param_4->ArrayNum;
  local_28._12_4_ = *(undefined4 *)&param_4->field_0xc;
  `UE::Cameras::FStateTreeCameraDirectorEvaluator::SetContextRequirements'::__l2::<lambda_1>::
  operator()((void *)((longlong)this + 0x18),param_1,param_2,&local_18,&local_28);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 14d5a6b30

ulong64 __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(FStateTreeExecutionContext_const_&,UStateTree_const_*,TArrayView<FStateTreeExternalDataDesc_const_,int>,TArrayView<FStateTreeDataView,int>),FDefaultDelegateUserPolicy,`UE::Cameras::FStateTreeCameraDirectorEvaluator::SetContextRequirements'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetObjectForTimerManager @ 14d5a8a40

void * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(FStateTreeExecutionContext_const_&,UStateTree_const_*,TArrayView<FStateTreeExternalDataDesc_const_,int>,TArrayView<FStateTreeDataView,int>),FDefaultDelegateUserPolicy,`UE::Cameras::FStateTreeCameraDirectorEvaluator::SetContextRequirements'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetUObject @ 14d5abda0

UObject * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(FStateTreeExecutionContext_const_&,UStateTree_const_*,TArrayView<FStateTreeExternalDataDesc_const_,int>,TArrayView<FStateTreeDataView,int>),FDefaultDelegateUserPolicy,`UE::Cameras::FStateTreeCameraDirectorEvaluator::SetContextRequirements'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 14d5ad280

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(FStateTreeExecutionContext_const_&,UStateTree_const_*,TArrayView<FStateTreeExternalDataDesc_const_,int>,TArrayView<FStateTreeDataView,int>),FDefaultDelegateUserPolicy,`UE::Cameras::FStateTreeCameraDirectorEvaluator::SetContextRequirements'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 14d5b4980

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(FStateTreeExecutionContext_const_&,UStateTree_const_*,TArrayView<FStateTreeExternalDataDesc_const_,int>,TArrayView<FStateTreeDataView,int>),FDefaultDelegateUserPolicy,`UE::Cameras::FStateTreeCameraDirectorEvaluator::SetContextRequirements'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// TryGetBoundFunctionName @ 14d5d13e0

FName __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(FStateTreeExecutionContext_const_&,UStateTree_const_*,TArrayView<FStateTreeExternalDataDesc_const_,int>,TArrayView<FStateTreeDataView,int>),FDefaultDelegateUserPolicy,`UE::Cameras::FStateTreeCameraDirectorEvaluator::SetContextRequirements'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

