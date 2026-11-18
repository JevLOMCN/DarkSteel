// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemNull
// Functions: 6

// ~IOnlinePurchase @ 14ed135c0

void __thiscall IOnlinePurchase::~IOnlinePurchase(IOnlinePurchase *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7IOnlinePurchase__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnUnexpectedPurchaseReceiptDelegates).field_0x8,
             *(int *)&(this->OnUnexpectedPurchaseReceiptDelegates).field_0x10);
  pvVar1 = *(void **)&(this->OnUnexpectedPurchaseReceiptDelegates).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnUnexpectedPurchaseReceiptDelegates);
  return;
}

// AddOnUnexpectedPurchaseReceiptDelegate_Handle @ 14ed1b410

FDelegateHandle __thiscall
IOnlinePurchase::AddOnUnexpectedPurchaseReceiptDelegate_Handle
          (IOnlinePurchase *this,
          TDelegate<void___cdecl(FUniqueNetId_const_&),FDefaultDelegateUserPolicy> *param_1)

{
  atomic<unsigned___int64> aVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *in_R8;
  undefined1 local_res8 [8];
  FReadAccessScope local_28;
  
  TMulticastDelegateRegistration<void___cdecl(FUniqueNetId_const_&),FDefaultDelegateUserPolicy>::Add
            ((TMulticastDelegateRegistration<void___cdecl(FUniqueNetId_const_&),FDefaultDelegateUserPolicy>
              *)&this->OnUnexpectedPurchaseReceiptDelegates,
             (TDelegate<void___cdecl(FUniqueNetId_const_&),FDefaultDelegateUserPolicy> *)local_res8)
  ;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(in_R8,&local_28);
  if ((*(int *)&in_R8[2].AccessDetector.State == 0) ||
     (aVar1 = in_R8[1].AccessDetector.State, aVar1 == (atomic<unsigned___int64>)0x0)) {
    uVar3 = 0;
  }
  else {
    puVar2 = (undefined8 *)(**(code **)(*(longlong *)aVar1 + 0x40))(aVar1,local_res8);
    uVar3 = *puVar2;
  }
  *(undefined8 *)param_1 = uVar3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return (FDelegateHandle)(ulong64)param_1;
}

// ClearOnUnexpectedPurchaseReceiptDelegate_Handle @ 14ed1e8e0

void __thiscall
IOnlinePurchase::ClearOnUnexpectedPurchaseReceiptDelegate_Handle
          (IOnlinePurchase *this,FDelegateHandle *param_1)

{
  if (param_1->ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &this->OnUnexpectedPurchaseReceiptDelegates,(FDelegateHandle)param_1->ID);
  }
  param_1->ID = 0;
  return;
}

// ClearOnUnexpectedPurchaseReceiptDelegates @ 14ed1e910

void __thiscall
IOnlinePurchase::ClearOnUnexpectedPurchaseReceiptDelegates(IOnlinePurchase *this,void *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &this->OnUnexpectedPurchaseReceiptDelegates,param_1);
  return;
}

// FinalizePurchase @ 14ed231d0

void __thiscall
IOnlinePurchase::FinalizePurchase
          (IOnlinePurchase *this,FUniqueNetId *param_1,FString *param_2,FString *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00014ed231d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x28))();
  return;
}

// TriggerOnUnexpectedPurchaseReceiptDelegates @ 14ed31990

void __thiscall
IOnlinePurchase::TriggerOnUnexpectedPurchaseReceiptDelegates
          (IOnlinePurchase *this,FUniqueNetId *param_1)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  FDestructionSentinel local_38;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->OnUnexpectedPurchaseReceiptDelegates,(FWriteAccessScope *)&local_38);
  puVar1 = &(this->OnUnexpectedPurchaseReceiptDelegates).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + 1;
  bVar5 = false;
  uVar9 = *(int *)&(this->OnUnexpectedPurchaseReceiptDelegates).field_0x10 - 1;
  if (-1 < (int)uVar9) {
    lVar10 = (longlong)(int)uVar9 << 4;
    bVar5 = false;
    do {
      uVar8 = 0;
      if ((int)uVar9 < *(int *)&(this->OnUnexpectedPurchaseReceiptDelegates).field_0x10) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar2 = *(longlong *)&(this->OnUnexpectedPurchaseReceiptDelegates).field_0x8;
      if (((*(int *)(lVar10 + 8 + lVar2) == 0) ||
          (plVar3 = *(longlong **)(lVar10 + lVar2), plVar3 == (longlong *)0x0)) ||
         (cVar7 = (**(code **)(*plVar3 + 0x68))(), cVar7 == '\0')) {
        bVar5 = true;
      }
      lVar10 = lVar10 + -0x10;
      uVar9 = uVar9 - 1;
    } while (-1 < (int)uVar9);
  }
  puVar1 = &(this->OnUnexpectedPurchaseReceiptDelegates).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + -1;
  if (bVar5) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &this->OnUnexpectedPurchaseReceiptDelegates,false);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return;
}

