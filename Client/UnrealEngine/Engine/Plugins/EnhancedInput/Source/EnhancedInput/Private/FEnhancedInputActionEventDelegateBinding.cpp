// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EnhancedInput
// Functions: 5

// Clone @ 14a6d6760

TUniquePtr<FEnhancedInputActionEventBinding,TDefaultDelete<FEnhancedInputActionEventBinding>_>
__thiscall
FEnhancedInputActionEventDelegateBinding<FEnhancedInputActionHandlerDynamicSignature>::Clone
          (FEnhancedInputActionEventDelegateBinding<FEnhancedInputActionHandlerDynamicSignature>
           *this)

{
  byte bVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong lVar3;
  undefined8 *puVar4;
  FEnhancedInputActionEventBinding *in_RDX;
  
  puVar4 = ::operator_new(0x38);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &___7FInputBindingHandle__6B_;
    lVar3 = this->_padding_;
    *puVar4 = &___7FEnhancedInputActionEventBinding__6B_;
    *(int *)(puVar4 + 1) = (int)lVar3;
    puVar4[2] = this->_padding_;
    *(char *)(puVar4 + 3) = (char)this->_padding_;
    bVar1 = *(byte *)((longlong)&this->_padding_ + 1);
    *puVar4 = &
              ___7__FEnhancedInputActionEventDelegateBinding_VFEnhancedInputActionHandlerDynamicSignature____6B_
    ;
    *(byte *)((longlong)puVar4 + 0x19) =
         *(byte *)((longlong)puVar4 + 0x19) ^ (*(byte *)((longlong)puVar4 + 0x19) ^ bVar1) & 1;
    puVar4[4] = (this->Delegate).Delegate.Object;
    pTVar2 = (this->Delegate).Delegate.SharedReferenceCount.ReferenceController;
    puVar4[5] = pTVar2;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(bool *)(puVar4 + 6) = (this->Delegate).bShouldFireWithEditorScriptGuard;
    *(bool *)(puVar4 + 6) = (this->Delegate).bShouldFireWithEditorScriptGuard;
    in_RDX->_padding_ = (longlong)puVar4;
    return (TUniquePtr<FEnhancedInputActionEventBinding,TDefaultDelete<FEnhancedInputActionEventBinding>_>
            )in_RDX;
  }
  in_RDX->_padding_ = 0;
  return (TUniquePtr<FEnhancedInputActionEventBinding,TDefaultDelete<FEnhancedInputActionEventBinding>_>
          )in_RDX;
}

// Execute @ 14a6dbde0

void __thiscall
FEnhancedInputActionEventDelegateBinding<FEnhancedInputActionHandlerDynamicSignature>::Execute
          (FEnhancedInputActionEventDelegateBinding<FEnhancedInputActionHandlerDynamicSignature>
           *this,FInputActionInstance *param_1)

{
  float fVar1;
  float fVar2;
  EInputActionValueType EVar3;
  UInputAction *pUVar4;
  TScriptDelegate<FNotThreadSafeDelegateMode> *this_00;
  code *pcVar5;
  bool bVar6;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  float local_58;
  float local_54;
  UInputAction *local_50;
  
  pUVar4 = (param_1->SourceAction).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (pUVar4 != (UInputAction *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  fVar1 = param_1->ElapsedTriggeredTime;
  fVar2 = param_1->ElapsedProcessedTime;
  if (UE::EnhancedInput::bAlwaysGetRealValueFromActionInstanceData != false) {
    local_98 = *(undefined4 *)&(param_1->Value).Value.field0_0x0;
    uStack_94 = *(undefined4 *)((longlong)&(param_1->Value).Value.field0_0x0 + 4);
    uStack_90._0_4_ = *(undefined4 *)((longlong)&(param_1->Value).Value.field0_0x0 + 8);
    uStack_90._4_4_ = *(undefined4 *)((longlong)&(param_1->Value).Value.field0_0x0 + 0xc);
    uStack_88._0_4_ = *(undefined4 *)((longlong)&(param_1->Value).Value.field0_0x0 + 0x10);
    uStack_88._4_4_ = *(undefined4 *)((longlong)&(param_1->Value).Value.field0_0x0 + 0x14);
    uStack_80 = *(undefined4 *)&(param_1->Value).ValueType;
    uStack_7c = *(undefined4 *)&(param_1->Value).field_0x1c;
    goto LAB_14a6dbea4;
  }
  if (param_1->TriggerEvent == Triggered) {
    local_98 = *(undefined4 *)&(param_1->Value).Value.field0_0x0;
    uStack_94 = *(undefined4 *)((longlong)&(param_1->Value).Value.field0_0x0 + 4);
    uStack_90._0_4_ = *(undefined4 *)((longlong)&(param_1->Value).Value.field0_0x0 + 8);
    uStack_90._4_4_ = *(undefined4 *)((longlong)&(param_1->Value).Value.field0_0x0 + 0xc);
    uStack_88._0_4_ = *(undefined4 *)((longlong)&(param_1->Value).Value.field0_0x0 + 0x10);
    uStack_88._4_4_ = *(undefined4 *)((longlong)&(param_1->Value).Value.field0_0x0 + 0x14);
    uStack_80 = *(undefined4 *)&(param_1->Value).ValueType;
    uStack_7c = *(undefined4 *)&(param_1->Value).field_0x1c;
    goto LAB_14a6dbea4;
  }
  EVar3 = (param_1->Value).ValueType;
  uStack_80 = CONCAT31(uStack_80._1_3_,EVar3);
  uStack_90 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_;
  uStack_88 = UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_;
  if ((EVar3 == Boolean) || (EVar3 == Axis1D)) {
    uStack_90 = 0;
LAB_14a6dbe94:
    uStack_88 = 0;
  }
  else if (EVar3 == Axis2D) goto LAB_14a6dbe94;
  local_98 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,0);
  uStack_94 = (undefined4)
              ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_ >> 0x20);
LAB_14a6dbea4:
  this_00 = (TScriptDelegate<FNotThreadSafeDelegateMode> *)(this->Delegate).Delegate.Object;
  if ((this_00 != (TScriptDelegate<FNotThreadSafeDelegateMode> *)0x0) &&
     (bVar6 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound(this_00), bVar6)) {
    if (((this->Delegate).Delegate.Object == (FEnhancedInputActionHandlerDynamicSignature *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    local_78 = local_98;
    uStack_74 = uStack_94;
    uStack_70 = (undefined4)uStack_90;
    uStack_6c = uStack_90._4_4_;
    local_68 = (undefined4)uStack_88;
    uStack_64 = uStack_88._4_4_;
    uStack_60 = uStack_80;
    uStack_5c = uStack_7c;
    local_58 = fVar2;
    local_54 = fVar1;
    local_50 = pUVar4;
    TScriptDelegate<FNotThreadSafeDelegateMode>::ProcessDelegate<UObject>
              ((TScriptDelegate<FNotThreadSafeDelegateMode> *)(this->Delegate).Delegate.Object,
               &local_78);
  }
  return;
}

// GetUObject @ 14a6e2af0

UObject * __thiscall
FEnhancedInputActionEventDelegateBinding<FEnhancedInputActionHandlerDynamicSignature>::GetUObject
          (FEnhancedInputActionEventDelegateBinding<FEnhancedInputActionHandlerDynamicSignature>
           *this)

{
  TScriptDelegate<FNotThreadSafeDelegateMode> *this_00;
  FEnhancedInputActionHandlerDynamicSignature *this_01;
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  FDestructionSentinel local_28;
  
  this_00 = (TScriptDelegate<FNotThreadSafeDelegateMode> *)(this->Delegate).Delegate.Object;
  if (this_00 != (TScriptDelegate<FNotThreadSafeDelegateMode> *)0x0) {
    bVar2 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound(this_00);
    if (bVar2) {
      if ((this->Delegate).Delegate.Object == (FEnhancedInputActionHandlerDynamicSignature *)0x0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pUVar3 = (UObject *)(*pcVar1)();
          return pUVar3;
        }
      }
      this_01 = (this->Delegate).Delegate.Object;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_01,
                 (FWriteAccessScope *)&local_28);
      pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this_01->field_0x8);
      if (local_28.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
      }
      return pUVar3;
    }
  }
  return (UObject *)0x0;
}

// IsBoundToObject @ 14a6e5830

bool __thiscall
FEnhancedInputActionEventDelegateBinding<FEnhancedInputActionHandlerDynamicSignature>::
IsBoundToObject(FEnhancedInputActionEventDelegateBinding<FEnhancedInputActionHandlerDynamicSignature>
                *this,void *param_1)

{
  TScriptDelegate<FNotThreadSafeDelegateMode> *this_00;
  FEnhancedInputActionHandlerDynamicSignature *this_01;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UObject *pUVar4;
  FReadAccessScope local_38;
  FReadAccessScope local_20;
  
  this_00 = (TScriptDelegate<FNotThreadSafeDelegateMode> *)(this->Delegate).Delegate.Object;
  if (this_00 != (TScriptDelegate<FNotThreadSafeDelegateMode> *)0x0) {
    bVar2 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound(this_00);
    if (bVar2) {
      if ((this->Delegate).Delegate.Object == (FEnhancedInputActionHandlerDynamicSignature *)0x0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
      }
      this_01 = (this->Delegate).Delegate.Object;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_01,&local_38);
      if (param_1 != (void *)0x0) {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_01,&local_20);
        pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this_01->field_0x8);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_20);
        if (param_1 == pUVar4) {
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&local_38);
          return true;
        }
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_38);
    }
  }
  return false;
}

// SetShouldFireWithEditorScriptGuard @ 14a6f6670

void __thiscall
FEnhancedInputActionEventDelegateBinding<FEnhancedInputActionHandlerDynamicSignature>::
SetShouldFireWithEditorScriptGuard
          (FEnhancedInputActionEventDelegateBinding<FEnhancedInputActionHandlerDynamicSignature>
           *this,bool param_1)

{
  (this->Delegate).bShouldFireWithEditorScriptGuard = param_1;
  return;
}

