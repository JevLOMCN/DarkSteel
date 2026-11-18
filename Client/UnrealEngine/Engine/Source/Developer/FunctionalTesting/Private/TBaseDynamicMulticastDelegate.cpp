// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FunctionalTesting
// Functions: 1

// __Internal_AddDynamic<APhasedAutomationActorBase> @ 148c7e0c0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void>::
__Internal_AddDynamic<APhasedAutomationActorBase>
          (TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void> *this,
          APhasedAutomationActorBase *param_1,pmf_2d818a1d param_2,FName param_3)

{
  code *pcVar1;
  bool bVar2;
  UObject *this_00;
  UFunction *pUVar3;
  <lambda_1> local_res8 [8];
  FName local_res10 [2];
  APhasedAutomationActorBase *local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_a8;
  FWeakObjectPtr local_a0;
  FName local_98;
  FName *local_90;
  TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> local_88;
  FDestructionSentinel local_78;
  FReadAccessScope local_60;
  FReadAccessScope local_48;
  
  if (((param_1 == (APhasedAutomationActorBase *)0x0) || (param_2 == (pmf_2d818a1d)0x0)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && InMethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                         ,0x4c8,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_a8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_a0.ObjectIndex = 0;
  local_a0.ObjectSerialNumber = 0;
  local_98.ComparisonIndex.Value = 0;
  local_98.Number = 0;
  local_res10[0] = param_3;
  if (((param_1 == (APhasedAutomationActorBase *)0x0) || (param_2 == (pmf_2d818a1d)0x0)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && InMethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                         ,0x46d,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_res20 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_1 != (APhasedAutomationActorBase *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&local_a0,(FObjectPtr)&local_res20);
  local_98 = local_res10[0];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_a8,&local_60);
  if ((local_98 == (FName)0x0) ||
     (this_00 = FWeakObjectPtr::Get(&local_a0), this_00 == (UObject *)0x0)) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_60);
  }
  else {
    pUVar3 = UObject::FindFunction(this_00,local_98);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_60);
    if (pUVar3 != (UFunction *)0x0) goto LAB_148c7e1dc;
  }
  local_90 = local_res10;
  `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void>::
  __Internal_BindDynamic<APhasedAutomationActorBase>'::__l2::<lambda_1>::operator()(&local_90);
LAB_148c7e1dc:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_a8,&local_48);
  local_88.Object = local_a0;
  local_88.FunctionName = local_98;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_48);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_78);
  TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
  RemoveAllSwap<_TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::CompactInvocationList_::__l2::<lambda_1>_>
            ((TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
              *)&this->field_0x8,local_res8,Default);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::AddInternal
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)this,&local_88);
  if (local_78.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_a8.AccessDetector);
  return;
}

