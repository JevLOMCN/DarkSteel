// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 9

// Create<UObject> @ 1468e4f50

TAttribute<FLinearColor> * __cdecl
TAttribute<FLinearColor>::Create<UObject>
          (TAttribute<FLinearColor> *__return_storage_ptr__,UObject *param_1,FName *param_2)

{
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  TAttribute<FLinearColor> *pTVar6;
  UObject *this;
  UFunction *pUVar7;
  UObject *local_res8;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  *(undefined8 *)&(__return_storage_ptr__->Value).field0_0x0 = 0;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->Value).field0_0x0 + 8) = 0;
  puVar1 = &(__return_storage_ptr__->Getter).field_0x8;
  *(undefined4 *)&(__return_storage_ptr__->Getter).field_0x14 = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Getter).field_0x10 = 0;
  *(undefined8 *)&__return_storage_ptr__->Getter = 0;
  __return_storage_ptr__->bIsSet = true;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &__return_storage_ptr__->Getter,(FWriteAccessScope *)&local_38);
  local_20 = puVar1;
  puVar4 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)puVar1);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6A_AUFLinearColor__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar5;
    *puVar4 = &
              ___7__TBaseUFunctionDelegateInstance_VUObject____A6A_AUFLinearColor__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FName *)(puVar4 + 4) = *param_2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(param_1);
    }
    puVar4[5] = 0;
    local_res8 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar4 + 5),(FObjectPtr)&local_res8);
    if ((*param_2 == (FName)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InFunctionName != NAME_None",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                           ,0x56,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TAttribute<FLinearColor> *)(*pcVar2)();
      return pTVar6;
    }
    if (param_1 != (UObject *)0x0) {
      this = FWeakObjectPtr::Get((FWeakObjectPtr *)(puVar4 + 5));
      pUVar7 = UObject::FindFunctionChecked(this,*param_2);
      puVar4[3] = pUVar7;
    }
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return __return_storage_ptr__;
}

// IdenticalTo @ 146929260

bool __thiscall
TAttribute<FAnchors>::IdenticalTo(TAttribute<FAnchors> *this,TAttribute<FAnchors> *param_1)

{
  char cVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  FReadAccessScope local_38;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,&local_38);
  if (((*(int *)&(this->Getter).field_0x10 == 0) ||
      (plVar3 = *(longlong **)&(this->Getter).field_0x8, plVar3 == (longlong *)0x0)) ||
     (cVar1 = (**(code **)(*plVar3 + 0x38))(), cVar1 == '\0')) {
    cVar1 = '\0';
  }
  else {
    cVar1 = '\x01';
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_38);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1->Getter,&local_38);
  if (((*(int *)&(param_1->Getter).field_0x10 == 0) ||
      (plVar3 = *(longlong **)&(param_1->Getter).field_0x8, plVar3 == (longlong *)0x0)) ||
     (cVar2 = (**(code **)(*plVar3 + 0x38))(), cVar2 == '\0')) {
    cVar2 = '\0';
  }
  else {
    cVar2 = '\x01';
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_38);
  if (cVar1 == cVar2) {
    if (cVar1 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,&local_38);
      lVar4 = 0;
      lVar5 = lVar4;
      if ((*(int *)&(this->Getter).field_0x10 != 0) &&
         (plVar3 = *(longlong **)&(this->Getter).field_0x8, plVar3 != (longlong *)0x0)) {
        plVar3 = (longlong *)(**(code **)(*plVar3 + 0x40))(plVar3,local_res8);
        lVar5 = *plVar3;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_38);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1->Getter,
                 &local_38);
      if ((*(int *)&(param_1->Getter).field_0x10 != 0) &&
         (plVar3 = *(longlong **)&(param_1->Getter).field_0x8, plVar3 != (longlong *)0x0)) {
        plVar3 = (longlong *)(**(code **)(*plVar3 + 0x40))(plVar3,local_res8);
        lVar4 = *plVar3;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_38);
      return lVar5 == lVar4;
    }
    if ((((this->bIsSet == param_1->bIsSet) &&
         ((param_1->Value).Minimum.field0_0x0._s_0.X == (this->Value).Minimum.field0_0x0._s_0.X)) &&
        ((param_1->Value).Minimum.field0_0x0._s_0.Y == (this->Value).Minimum.field0_0x0._s_0.Y)) &&
       (((param_1->Value).Maximum.field0_0x0._s_0.X == (this->Value).Maximum.field0_0x0._s_0.X &&
        ((param_1->Value).Maximum.field0_0x0._s_0.Y == (this->Value).Maximum.field0_0x0._s_0.Y)))) {
      return true;
    }
  }
  return false;
}

// IsBound @ 14692c440

bool __thiscall TAttribute<FAnchors>::IsBound(TAttribute<FAnchors> *this)

{
  longlong *plVar1;
  char cVar2;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,&local_28);
  if ((*(int *)&(this->Getter).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->Getter).field_0x8, plVar1 != (longlong *)0x0)) {
    cVar2 = (**(code **)(*plVar1 + 0x38))();
    if (cVar2 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      return true;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return false;
}

// TAttribute<FInputChord><FInputChord> @ 14696e0b0

TAttribute<FInputChord> * __thiscall
TAttribute<FInputChord>::TAttribute<FInputChord><FInputChord>
          (TAttribute<FInputChord> *this,FInputChord *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  uint uVar2;
  
  (this->Value).Key.KeyName = (param_1->Key).KeyName;
  (this->Value).Key.KeyDetails.Object = (param_1->Key).KeyDetails.Object;
  pTVar1 = (param_1->Key).KeyDetails.SharedReferenceCount.ReferenceController;
  (this->Value).Key.KeyDetails.SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  uVar2 = ((this->Value).bShift ^ param_1->bShift) & 1 ^ *(uint *)&(this->Value).field_0x18;
  *(uint *)&(this->Value).field_0x18 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0x18) & 2 ^ uVar2;
  *(uint *)&(this->Value).field_0x18 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0x18) & 4 ^ uVar2;
  *(uint *)&(this->Value).field_0x18 = uVar2;
  *(uint *)&(this->Value).field_0x18 = (uVar2 ^ *(uint *)&param_1->field_0x18) & 8 ^ uVar2;
  this->bIsSet = true;
  *(undefined8 *)&(this->Getter).field_0x10 = 0;
  *(undefined8 *)&this->Getter = 0;
  *(undefined8 *)&(this->Getter).field_0x8 = 0;
  return this;
}

// Create<UObject> @ 146973d10

TAttribute<float> * __cdecl
TAttribute<float>::Create<UObject>
          (TAttribute<float> *__return_storage_ptr__,UObject *param_1,FName *param_2)

{
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  TAttribute<float> *pTVar6;
  UObject *this;
  UFunction *pUVar7;
  UObject *local_res8;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  __return_storage_ptr__->Value = 0.0;
  puVar1 = &(__return_storage_ptr__->Getter).field_0x8;
  *(undefined4 *)&(__return_storage_ptr__->Getter).field_0x14 = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Getter).field_0x10 = 0;
  *(undefined8 *)&__return_storage_ptr__->Getter = 0;
  __return_storage_ptr__->bIsSet = true;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &__return_storage_ptr__->Getter,(FWriteAccessScope *)&local_38);
  local_20 = puVar1;
  puVar4 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)puVar1);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &___7__TCommonDelegateInstanceState___A6AMXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar5;
    *puVar4 = &
              ___7__TBaseUFunctionDelegateInstance_VUObject____A6AMXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FName *)(puVar4 + 4) = *param_2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(param_1);
    }
    puVar4[5] = 0;
    local_res8 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar4 + 5),(FObjectPtr)&local_res8);
    if ((*param_2 == (FName)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InFunctionName != NAME_None",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                           ,0x56,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TAttribute<float> *)(*pcVar2)();
      return pTVar6;
    }
    if (param_1 != (UObject *)0x0) {
      this = FWeakObjectPtr::Get((FWeakObjectPtr *)(puVar4 + 5));
      pUVar7 = UObject::FindFunctionChecked(this,*param_2);
      puVar4[3] = pUVar7;
    }
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return __return_storage_ptr__;
}

// Create<UObject> @ 146973e70

TAttribute<FSlateColor> * __cdecl
TAttribute<FSlateColor>::Create<UObject>
          (TAttribute<FSlateColor> *__return_storage_ptr__,UObject *param_1,FName *param_2)

{
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  TAttribute<FSlateColor> *pTVar6;
  UObject *this;
  UFunction *pUVar7;
  UObject *local_res8;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  *(undefined8 *)&(__return_storage_ptr__->Value).SpecifiedColor.field0_0x0 = 0x3f800000;
  (__return_storage_ptr__->Value).SpecifiedColor.field0_0x0._s_0.B = 1.0;
  (__return_storage_ptr__->Value).SpecifiedColor.field0_0x0._s_0.A = 1.0;
  (__return_storage_ptr__->Value).ColorUseRule = UseColor_Specified;
  puVar1 = &(__return_storage_ptr__->Getter).field_0x8;
  *(undefined4 *)&(__return_storage_ptr__->Getter).field_0x14 = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Getter).field_0x10 = 0;
  *(undefined8 *)&__return_storage_ptr__->Getter = 0;
  __return_storage_ptr__->bIsSet = true;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &__return_storage_ptr__->Getter,(FWriteAccessScope *)&local_38);
  local_20 = puVar1;
  puVar4 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)puVar1);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6A_AUFSlateColor__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar5;
    *puVar4 = &
              ___7__TBaseUFunctionDelegateInstance_VUObject____A6A_AUFSlateColor__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FName *)(puVar4 + 4) = *param_2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(param_1);
    }
    puVar4[5] = 0;
    local_res8 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar4 + 5),(FObjectPtr)&local_res8);
    if ((*param_2 == (FName)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InFunctionName != NAME_None",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                           ,0x56,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TAttribute<FSlateColor> *)(*pcVar2)();
      return pTVar6;
    }
    if (param_1 != (UObject *)0x0) {
      this = FWeakObjectPtr::Get((FWeakObjectPtr *)(puVar4 + 5));
      pUVar7 = UObject::FindFunctionChecked(this,*param_2);
      puVar4[3] = pUVar7;
    }
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return __return_storage_ptr__;
}

// Create<UObject> @ 146973fe0

TAttribute<FText> * __cdecl
TAttribute<FText>::Create<UObject>
          (TAttribute<FText> *__return_storage_ptr__,UObject *param_1,FName *param_2)

{
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  TAttribute<FText> *pTVar6;
  UObject *this;
  UFunction *pUVar7;
  UObject *local_res8;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  FText::FText(&__return_storage_ptr__->Value);
  *(undefined4 *)&(__return_storage_ptr__->Getter).field_0x14 = 0;
  puVar1 = &(__return_storage_ptr__->Getter).field_0x8;
  *(undefined8 *)puVar1 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Getter).field_0x10 = 0;
  *(undefined8 *)&__return_storage_ptr__->Getter = 0;
  __return_storage_ptr__->bIsSet = true;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &__return_storage_ptr__->Getter,(FWriteAccessScope *)&local_38);
  local_20 = puVar1;
  puVar4 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)puVar1);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar5;
    *puVar4 = &
              ___7__TBaseUFunctionDelegateInstance_VUObject____A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FName *)(puVar4 + 4) = *param_2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(param_1);
    }
    puVar4[5] = 0;
    local_res8 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar4 + 5),(FObjectPtr)&local_res8);
    if ((*param_2 == (FName)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InFunctionName != NAME_None",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                           ,0x56,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TAttribute<FText> *)(*pcVar2)();
      return pTVar6;
    }
    if (param_1 != (UObject *)0x0) {
      this = FWeakObjectPtr::Get((FWeakObjectPtr *)(puVar4 + 5));
      pUVar7 = UObject::FindFunctionChecked(this,*param_2);
      puVar4[3] = pUVar7;
    }
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return __return_storage_ptr__;
}

// Create<UObject> @ 146974140

TAttribute<ECheckBoxState> * __cdecl
TAttribute<enum_ECheckBoxState>::Create<UObject>
          (TAttribute<ECheckBoxState> *__return_storage_ptr__,UObject *param_1,FName *param_2)

{
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  TAttribute<ECheckBoxState> *pTVar6;
  UObject *this;
  UFunction *pUVar7;
  UObject *local_res8;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  __return_storage_ptr__->Value = Unchecked;
  puVar1 = &(__return_storage_ptr__->Getter).field_0x8;
  *(undefined4 *)&(__return_storage_ptr__->Getter).field_0x14 = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Getter).field_0x10 = 0;
  *(undefined8 *)&__return_storage_ptr__->Getter = 0;
  __return_storage_ptr__->bIsSet = true;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &__return_storage_ptr__->Getter,(FWriteAccessScope *)&local_38);
  local_20 = puVar1;
  puVar4 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)puVar1);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6A_AW4ECheckBoxState__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar5;
    *puVar4 = &
              ___7__TBaseUFunctionDelegateInstance_VUObject____A6A_AW4ECheckBoxState__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FName *)(puVar4 + 4) = *param_2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(param_1);
    }
    puVar4[5] = 0;
    local_res8 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar4 + 5),(FObjectPtr)&local_res8);
    if ((*param_2 == (FName)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InFunctionName != NAME_None",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                           ,0x56,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TAttribute<ECheckBoxState> *)(*pcVar2)();
      return pTVar6;
    }
    if (param_1 != (UObject *)0x0) {
      this = FWeakObjectPtr::Get((FWeakObjectPtr *)(puVar4 + 5));
      pUVar7 = UObject::FindFunctionChecked(this,*param_2);
      puVar4[3] = pUVar7;
    }
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return __return_storage_ptr__;
}

// operator= @ 146994d30

TAttribute<bool> * __thiscall
TAttribute<bool>::operator=(TAttribute<bool> *this,TAttribute<bool> *param_1)

{
  longlong *plVar1;
  undefined1 local_38 [8];
  ForAnyElementType local_30;
  int local_28;
  FDestructionSentinel local_20;
  
  this->Value = param_1->Value;
  this->bIsSet = param_1->bIsSet;
  if (&param_1->Getter != &this->Getter) {
    local_38 = (undefined1  [8])0x0;
    local_30.Data = (FScriptContainerElement *)0x0;
    local_28 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1->Getter,
               (FReadAccessScope *)&local_20);
    if ((*(int *)&(param_1->Getter).field_0x10 != 0) &&
       (plVar1 = *(longlong **)&(param_1->Getter).field_0x8, plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x50))(plVar1,local_38);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_20);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_38);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_38,
               (FWriteAccessScope *)&local_20);
    if ((local_28 != 0) && (local_30.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_30.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
      local_28 = 0;
    }
    if (local_20.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_20.Accessor,&local_20);
    }
    if (local_30.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_38);
  }
  return this;
}

