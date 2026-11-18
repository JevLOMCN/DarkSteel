// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EnhancedInput
// Functions: 3

// FInputDebugKeyDelegateBinding<FInputDebugKeyHandlerDynamicSignature> @ 14a6c9ae0

FInputDebugKeyDelegateBinding<FInputDebugKeyHandlerDynamicSignature> * __thiscall
FInputDebugKeyDelegateBinding<FInputDebugKeyHandlerDynamicSignature>::
FInputDebugKeyDelegateBinding<FInputDebugKeyHandlerDynamicSignature>
          (FInputDebugKeyDelegateBinding<FInputDebugKeyHandlerDynamicSignature> *this,
          FInputChord *param_1,EInputEvent param_2,bool param_3)

{
  undefined4 uVar1;
  TReferenceControllerBase<1> *pTVar2;
  FName FVar3;
  FKeyDetails *pFVar4;
  uint uVar5;
  uint uVar6;
  atomic<int> *paVar7;
  uint local_res20;
  
  pTVar2 = (param_1->Key).KeyDetails.SharedReferenceCount.ReferenceController;
  FVar3 = (param_1->Key).KeyName;
  pFVar4 = (param_1->Key).KeyDetails.Object;
  if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
    paVar7 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar7 = &pTVar2->SharedReferenceCount;
    LOCK();
    *paVar7 = (atomic<int>)((int)*paVar7 + 1);
    UNLOCK();
  }
  uVar1 = *(undefined4 *)&param_1->field_0x18;
  *(bool *)((longlong)&this->_padding_ + 1) = param_3;
  uVar6 = (ZPULL(uVar1,0,1) ^ local_res20) & 1 ^ local_res20;
  uVar6 = (uVar6 ^ uVar1) & 2 ^ uVar6;
  uVar6 = (uVar6 ^ uVar1) & 4 ^ uVar6;
  uVar6 = (uVar6 ^ uVar1) & 8 ^ uVar6;
  *(uint *)&this->_padding_ = GInputBindingHandle;
  GInputBindingHandle = GInputBindingHandle + 1;
  this->_padding_ = (longlong)&___7FInputDebugKeyBinding__6B_;
  *(char *)&this->_padding_ = (char)param_2;
  this->_padding_ = (longlong)FVar3;
  this->_padding_ = (longlong)pFVar4;
  this->_padding_ = (longlong)pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar7 = (atomic<int>)((int)*paVar7 + 1);
    UNLOCK();
  }
  uVar5 = ((uint)this->_padding_ ^ uVar6) & 1 ^ (uint)this->_padding_;
  uVar5 = (uVar5 ^ uVar6) & 2 ^ uVar5;
  uVar5 = (uVar5 ^ uVar6) & 4 ^ uVar5;
  *(uint *)&this->_padding_ = (uVar5 ^ uVar6) & 8 ^ uVar5;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  this->_padding_ =
       (longlong)&___7__FInputDebugKeyDelegateBinding_VFInputDebugKeyHandlerDynamicSignature____6B_;
  (this->Delegate).Delegate.Object = (FInputDebugKeyHandlerDynamicSignature *)0x0;
  (this->Delegate).Delegate.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->Delegate).bShouldFireWithEditorScriptGuard = false;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->Key).KeyDetails.SharedReferenceCount.ReferenceController);
  return this;
}

// Clone @ 14a6d6820

TUniquePtr<FInputDebugKeyBinding,TDefaultDelete<FInputDebugKeyBinding>_> __thiscall
FInputDebugKeyDelegateBinding<FInputDebugKeyHandlerDynamicSignature>::Clone
          (FInputDebugKeyDelegateBinding<FInputDebugKeyHandlerDynamicSignature> *this)

{
  TReferenceControllerBase<1> *pTVar1;
  FInputDebugKeyBinding *this_00;
  FInputDebugKeyBinding *in_RDX;
  
  this_00 = ::operator_new(0x50);
  if (this_00 != (FInputDebugKeyBinding *)0x0) {
    FInputDebugKeyBinding::FInputDebugKeyBinding(this_00,(FInputDebugKeyBinding *)this,ForceClone);
    this_00->_padding_ =
         (longlong)
         &___7__FInputDebugKeyDelegateBinding_VFInputDebugKeyHandlerDynamicSignature____6B_;
    this_00[1]._padding_ = (longlong)(this->Delegate).Delegate.Object;
    pTVar1 = (this->Delegate).Delegate.SharedReferenceCount.ReferenceController;
    this_00[1]._padding_ = (longlong)pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    this_00[1].KeyEvent.Value = (this->Delegate).bShouldFireWithEditorScriptGuard;
    in_RDX->_padding_ = (longlong)this_00;
    return (TUniquePtr<FInputDebugKeyBinding,TDefaultDelete<FInputDebugKeyBinding>_>)in_RDX;
  }
  in_RDX->_padding_ = 0;
  return (TUniquePtr<FInputDebugKeyBinding,TDefaultDelete<FInputDebugKeyBinding>_>)in_RDX;
}

// Execute @ 14a6dbf50

void __thiscall
FInputDebugKeyDelegateBinding<FInputDebugKeyHandlerDynamicSignature>::Execute
          (FInputDebugKeyDelegateBinding<FInputDebugKeyHandlerDynamicSignature> *this,
          FInputActionValue *param_1)

{
  atomic<int> *paVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong lVar3;
  longlong lVar4;
  TScriptDelegate<FNotThreadSafeDelegateMode> *pTVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  bool bVar11;
  longlong local_68;
  longlong local_60;
  TReferenceControllerBase<1> *pTStack_58;
  double local_50;
  double dStack_48;
  double local_40;
  undefined8 uStack_38;
  
  pTVar2 = (TReferenceControllerBase<1> *)this->_padding_;
  lVar3 = this->_padding_;
  lVar4 = this->_padding_;
  dVar7 = (param_1->Value).field0_0x0._s_0.X;
  dVar8 = (param_1->Value).field0_0x0._s_0.Y;
  dVar9 = (param_1->Value).field0_0x0._s_0.Z;
  uVar10 = *(undefined8 *)&param_1->ValueType;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = (TScriptDelegate<FNotThreadSafeDelegateMode> *)(this->Delegate).Delegate.Object;
  if ((pTVar5 != (TScriptDelegate<FNotThreadSafeDelegateMode> *)0x0) &&
     (bVar11 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound(pTVar5), bVar11)) {
    if (((this->Delegate).Delegate.Object == (FInputDebugKeyHandlerDynamicSignature *)0x0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar11)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pTVar5 = (TScriptDelegate<FNotThreadSafeDelegateMode> *)(this->Delegate).Delegate.Object;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      paVar1 = &pTVar2->SharedReferenceCount;
      LOCK();
      *paVar1 = (atomic<int>)((int)*paVar1 + 1);
      UNLOCK();
      LOCK();
      *paVar1 = (atomic<int>)((int)*paVar1 + 1);
      UNLOCK();
      LOCK();
      *paVar1 = (atomic<int>)((int)*paVar1 + 1);
      UNLOCK();
    }
    local_68 = lVar3;
    local_60 = lVar4;
    pTStack_58 = pTVar2;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    local_50 = dVar7;
    dStack_48 = dVar8;
    local_40 = dVar9;
    uStack_38 = uVar10;
    TScriptDelegate<FNotThreadSafeDelegateMode>::ProcessDelegate<UObject>(pTVar5,&local_68);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_58);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return;
}

