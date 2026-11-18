// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// BindDelegate<ADebugCameraController> @ 147aacfb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FInputActionUnifiedDelegate::BindDelegate<ADebugCameraController>
          (FInputActionUnifiedDelegate *this,ADebugCameraController *param_1,pmf_df982789 *param_2)

{
  EBoundDelegate EVar1;
  FInputActionHandlerDynamicSignature *this_00;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  TReferenceControllerBase<1> *pTVar8;
  TDelegate<void___cdecl(FKey),FDefaultDelegateUserPolicy> *this_01;
  TReferenceControllerBase<1> *pTVar9;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *pTVar10;
  undefined8 local_res18;
  ADebugCameraController *local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_c8;
  FDelegateAllocation local_c0;
  undefined1 local_b0 [24];
  FSharedReferencer<1> local_98;
  char local_90;
  FDestructionSentinel local_88;
  FDestructionSentinel local_70;
  FDestructionSentinel local_58;
  FDelegateAllocation *local_40;
  
  EVar1 = this->BoundDelegateType;
  pTVar9 = (TReferenceControllerBase<1> *)0x0;
  if (EVar1 == Delegate) {
    if ((this->FuncDelegate).Object ==
        (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    this_01 = (TDelegate<void___cdecl(FKey),FDefaultDelegateUserPolicy> *)
              (this->FuncDelegate).Object;
  }
  else {
    if (EVar1 != DelegateWithKey) {
      if (EVar1 == DynamicDelegate) {
        if ((this->FuncDynDelegate).Object == (FInputActionHandlerDynamicSignature *)0x0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L"");
          if (bVar5) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        this_00 = (this->FuncDynDelegate).Object;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
                   (FWriteAccessScope *)(local_b0 + 0x10));
        local_res18 = 0;
        FWeakObjectPtr::operator=((FWeakObjectPtr *)&this_00->field_0x8,(FObjectPtr)&local_res18);
        *(undefined8 *)&this_00->field_0x10 = 0;
        if (local_90 == '\0') {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                    ((FMRSWRecursiveAccessDetector *)local_98.ReferenceController,
                     (FDestructionSentinel *)(local_b0 + 0x10));
        }
      }
      goto LAB_147aad0c9;
    }
    if ((this->FuncDelegateWithKey).Object ==
        (TDelegate<void___cdecl(FKey),FDefaultDelegateUserPolicy> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    this_01 = (this->FuncDelegateWithKey).Object;
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_01);
LAB_147aad0c9:
  this->BoundDelegateType = Delegate;
  uVar3 = *(undefined8 *)param_2;
  uVar4 = *(undefined8 *)&param_2->field_0x8;
  local_c8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_c0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_c0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_c8,(FWriteAccessScope *)&local_58);
  local_40 = &local_c0;
  puVar6 = UE::Core::Private::DelegateAllocate(0x30,&local_c0);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VADebugCameraController____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (ADebugCameraController *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    puVar6[3] = 0;
    local_res20 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (ADebugCameraController *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar6 + 3),(FObjectPtr)&local_res20);
    puVar6[4] = uVar3;
    puVar6[5] = uVar4;
  }
  if (local_58.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
  }
  pTVar8 = ::operator_new(0x28);
  if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
    local_b0._0_8_ = ___xmm_00000000000000000000000000000010;
    pTVar10 = (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&DAT_00000010;
    local_b0._8_8_ = _UNK_150651568;
  }
  else {
    pTVar8->SharedReferenceCount = (atomic<int>)0x1;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8[1]._padding_ = 0;
    pTVar8->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TDelegate___A6AXXZUFDefaultDelegateUserPolicy_____00_SharedPointerInternals__6B_
    ;
    pTVar8[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar8[1].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar8[2]._padding_ = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_c8,(FWriteAccessScope *)&local_88);
    if (*(void **)&pTVar8[1].SharedReferenceCount != (void *)0x0) {
      FMemory::Free(*(void **)&pTVar8[1].SharedReferenceCount);
    }
    *(ForElementType<TAlignedBytes<16,16>_> *)&pTVar8[1].SharedReferenceCount =
         local_c0.DelegateAllocator;
    local_c0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)&pTVar8[2]._padding_ = local_c0.DelegateSize;
    local_c0.DelegateSize = 0;
    if (local_88.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_88.Accessor,&local_88);
    }
    pTVar10 = (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(pTVar8 + 1);
    if (pTVar10 == (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
    local_b0._8_8_ = pTVar8;
    pTVar9 = pTVar8;
    local_b0._0_8_ = pTVar10;
  }
  if (this != (FInputActionUnifiedDelegate *)local_b0) {
    (this->FuncDelegate).Object = pTVar10;
    local_b0._0_8_ = (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->FuncDelegate).SharedReferenceCount,(FSharedReferencer<1> *)(local_b0 + 8));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_b0._8_8_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_c8,(FWriteAccessScope *)&local_70);
  if ((local_c0.DelegateSize != 0) &&
     (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_c0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_c0,0,0,0x10);
    local_c0.DelegateSize = 0;
  }
  if (local_70.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_70.Accessor,&local_70);
  }
  if (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_c0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_c8.AccessDetector);
  return;
}

// FInputActionUnifiedDelegate @ 1489079a0

FInputActionUnifiedDelegate * __thiscall
FInputActionUnifiedDelegate::FInputActionUnifiedDelegate
          (FInputActionUnifiedDelegate *this,FInputActionUnifiedDelegate *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  (this->FuncDelegate).Object = (param_1->FuncDelegate).Object;
  pTVar1 = (param_1->FuncDelegate).SharedReferenceCount.ReferenceController;
  (this->FuncDelegate).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  (this->FuncDelegateWithKey).Object = (param_1->FuncDelegateWithKey).Object;
  pTVar1 = (param_1->FuncDelegateWithKey).SharedReferenceCount.ReferenceController;
  (this->FuncDelegateWithKey).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  (this->FuncDynDelegate).Object = (param_1->FuncDynDelegate).Object;
  pTVar1 = (param_1->FuncDynDelegate).SharedReferenceCount.ReferenceController;
  (this->FuncDynDelegate).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  this->BoundDelegateType = param_1->BoundDelegateType;
  return this;
}

// Execute @ 14893db80

void __thiscall
FInputActionUnifiedDelegate::Execute(FInputActionUnifiedDelegate *this,FKey *param_1)

{
  atomic<int> *paVar1;
  EBoundDelegate EVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  TScriptDelegate<FNotThreadSafeDelegateMode> *pTVar6;
  TDelegate<void___cdecl(FKey),FDefaultDelegateUserPolicy> *this_00;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *this_01;
  longlong *plVar7;
  FKey local_68;
  FName local_50;
  FKeyDetails *local_48;
  TReferenceControllerBase<1> *local_40;
  FReadAccessScope local_38;
  FReadAccessScope local_20;
  
  EVar2 = this->BoundDelegateType;
  if (EVar2 == Delegate) {
    if (((this->FuncDelegate).Object ==
         (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    bVar5 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                      ((TDelegateBase<FNotThreadSafeDelegateMode> *)(this->FuncDelegate).Object);
    if (bVar5) {
      this_01 = TSharedPtr<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,1>::operator->
                          (&this->FuncDelegate);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_01,&local_20);
      if (*(int *)&this_01->field_0x10 == 0) {
        plVar7 = (longlong *)0x0;
      }
      else {
        plVar7 = *(longlong **)&this_01->field_0x8;
      }
      (**(code **)(*plVar7 + 0x60))();
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_20);
    }
  }
  else if (EVar2 == DelegateWithKey) {
    if (((this->FuncDelegateWithKey).Object ==
         (TDelegate<void___cdecl(FKey),FDefaultDelegateUserPolicy> *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    bVar5 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                      ((TDelegateBase<FNotThreadSafeDelegateMode> *)
                       (this->FuncDelegateWithKey).Object);
    if (bVar5) {
      this_00 = TSharedPtr<TDelegate<void___cdecl(FKey),FDefaultDelegateUserPolicy>,1>::operator->
                          (&this->FuncDelegateWithKey);
      local_40 = (param_1->KeyDetails).SharedReferenceCount.ReferenceController;
      local_50 = param_1->KeyName;
      local_48 = (param_1->KeyDetails).Object;
      if (local_40 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_40->SharedReferenceCount = (atomic<int>)((int)local_40->SharedReferenceCount + 1);
        UNLOCK();
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_38);
      if (*(int *)&this_00->field_0x10 == 0) {
        plVar7 = (longlong *)0x0;
      }
      else {
        plVar7 = *(longlong **)&this_00->field_0x8;
      }
      (**(code **)(*plVar7 + 0x60))(plVar7,&local_50);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_38);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
    }
  }
  else if (EVar2 == DynamicDelegate) {
    if (((this->FuncDynDelegate).Object == (FInputActionHandlerDynamicSignature *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    bVar5 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
                      ((TScriptDelegate<FNotThreadSafeDelegateMode> *)(this->FuncDynDelegate).Object
                      );
    if (bVar5) {
      pTVar6 = (TScriptDelegate<FNotThreadSafeDelegateMode> *)
               TSharedPtr<FInputActionHandlerDynamicSignature,1>::operator->(&this->FuncDynDelegate)
      ;
      pTVar3 = (param_1->KeyDetails).SharedReferenceCount.ReferenceController;
      local_68.KeyName = param_1->KeyName;
      local_68.KeyDetails.Object = (param_1->KeyDetails).Object;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        paVar1 = &pTVar3->SharedReferenceCount;
        LOCK();
        *paVar1 = (atomic<int>)((int)*paVar1 + 1);
        UNLOCK();
        LOCK();
        *paVar1 = (atomic<int>)((int)*paVar1 + 1);
        UNLOCK();
      }
      local_68.KeyDetails.SharedReferenceCount.ReferenceController = pTVar3;
      FInputActionHandlerDynamicSignature_DelegateWrapper(pTVar6,&local_68);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->KeyDetails).SharedReferenceCount.ReferenceController);
  return;
}

