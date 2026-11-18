// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 1

// GetDelegateForManualSet @ 146a74840

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> * __thiscall
FInputActionUnifiedDelegate::GetDelegateForManualSet(FInputActionUnifiedDelegate *this)

{
  EBoundDelegate EVar1;
  FInputActionHandlerDynamicSignature *this_00;
  code *pcVar2;
  bool bVar3;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *pTVar4;
  TDelegate<void___cdecl(FKey),FDefaultDelegateUserPolicy> *this_01;
  TReferenceControllerBase<1> *pTVar5;
  undefined8 local_res10;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *local_48;
  FSharedReferencer<1> FStack_40;
  FDestructionSentinel local_38;
  
  EVar1 = this->BoundDelegateType;
  pTVar5 = (TReferenceControllerBase<1> *)0x0;
  if (EVar1 == Delegate) {
    if ((this->FuncDelegate).Object ==
        (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar4 = (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(*pcVar2)();
        return pTVar4;
      }
    }
    this_01 = (TDelegate<void___cdecl(FKey),FDefaultDelegateUserPolicy> *)
              (this->FuncDelegate).Object;
  }
  else {
    if (EVar1 != DelegateWithKey) {
      if (EVar1 == DynamicDelegate) {
        if ((this->FuncDynDelegate).Object == (FInputActionHandlerDynamicSignature *)0x0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L"");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            pTVar4 = (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(*pcVar2)();
            return pTVar4;
          }
        }
        this_00 = (this->FuncDynDelegate).Object;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
                   (FWriteAccessScope *)&local_38);
        local_res10 = 0;
        FWeakObjectPtr::operator=((FWeakObjectPtr *)&this_00->field_0x8,(FObjectPtr)&local_res10);
        *(undefined8 *)&this_00->field_0x10 = 0;
        if (local_38.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
        }
      }
      goto LAB_146a74952;
    }
    if ((this->FuncDelegateWithKey).Object ==
        (TDelegate<void___cdecl(FKey),FDefaultDelegateUserPolicy> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar4 = (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(*pcVar2)();
        return pTVar4;
      }
    }
    this_01 = (this->FuncDelegateWithKey).Object;
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_01);
LAB_146a74952:
  this->BoundDelegateType = Delegate;
  FStack_40.ReferenceController = ::operator_new(0x28);
  if (FStack_40.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
    local_48 = ___xmm_00000000000000000000000000000010;
    pTVar4 = (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&DAT_00000010;
    FStack_40.ReferenceController = _UNK_150651568;
  }
  else {
    (FStack_40.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4 = (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             (FStack_40.ReferenceController + 1);
    (FStack_40.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    (FStack_40.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TDelegate___A6AXXZUFDefaultDelegateUserPolicy_____00_SharedPointerInternals__6B_
    ;
    FStack_40.ReferenceController[2]._padding_ = 0;
    FStack_40.ReferenceController[1]._padding_ = 0;
    FStack_40.ReferenceController[1].SharedReferenceCount = (atomic<int>)0x0;
    FStack_40.ReferenceController[1].WeakReferenceCount = (atomic<int>)0x0;
    if (pTVar4 == (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar4 = (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(*pcVar2)();
        return pTVar4;
      }
    }
    LOCK();
    (FStack_40.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FStack_40.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    pTVar5 = FStack_40.ReferenceController;
    local_48 = pTVar4;
  }
  if (this != (FInputActionUnifiedDelegate *)&local_48) {
    (this->FuncDelegate).Object = pTVar4;
    local_48 = (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->FuncDelegate).SharedReferenceCount,&FStack_40);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_40.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  if ((this->FuncDelegate).Object == (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)0x0
     ) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return (this->FuncDelegate).Object;
}

