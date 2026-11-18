// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EnhancedInput
// Functions: 27

// StaticStruct @ 14a6bbe30

UScriptStruct * __cdecl FPlayerKeyMapping::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPlayerKeyMapping.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_EnhancedInput();
    Z_Registration_Info_UScriptStruct_FPlayerKeyMapping.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPlayerKeyMapping,(UObject *)pUVar1,
                         L"PlayerKeyMapping");
  }
  return Z_Registration_Info_UScriptStruct_FPlayerKeyMapping.OuterSingleton;
}

// FPlayerKeyMapping @ 14a6ca780

FPlayerKeyMapping * __thiscall
FPlayerKeyMapping::FPlayerKeyMapping(FPlayerKeyMapping *this,FPlayerKeyMapping *param_1)

{
  undefined1 *this_00;
  ITextData *pIVar1;
  ITextData *pIVar2;
  TReferenceControllerBase<1> *pTVar3;
  FKeyDetails *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  FName FVar6;
  undefined3 uVar7;
  int iVar8;
  undefined1 local_res8 [8];
  
  (this->MappingName).ComparisonIndex = 0;
  (this->MappingName).Number = 0;
  FText::FText(&this->DisplayName);
  FText::FText(&this->DisplayCategory);
  (this->DefaultKey).KeyName.ComparisonIndex = 0;
  (this->DefaultKey).KeyName.Number = 0;
  (this->DefaultKey).KeyDetails.Object = (FKeyDetails *)0x0;
  (this->DefaultKey).KeyDetails.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->CurrentKey).KeyName.ComparisonIndex = 0;
  (this->CurrentKey).KeyName.Number = 0;
  (this->CurrentKey).KeyDetails.Object = (FKeyDetails *)0x0;
  (this->CurrentKey).KeyDetails.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  FHardwareDeviceIdentifier::FHardwareDeviceIdentifier(&this->HardwareDeviceId);
  this_00 = &(this->AssociatedInputActionSoft).SoftObjectPtr.field_0x18;
  (this->AssociatedInputAction).field0_0x0.DebugPtr = (UInputAction *)0x0;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->AssociatedInputActionSoft).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->AssociatedInputActionSoft).SoftObjectPtr = 0;
  *(undefined8 *)&(this->AssociatedInputActionSoft).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->AssociatedInputActionSoft).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  this->MappingName = param_1->MappingName;
  pIVar1 = (param_1->DisplayName).TextData.Reference;
  pIVar2 = (this->DisplayName).TextData.Reference;
  if (pIVar2 != pIVar1) {
    (this->DisplayName).TextData.Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  (this->DisplayName).Flags = (param_1->DisplayName).Flags;
  pIVar1 = (param_1->DisplayCategory).TextData.Reference;
  pIVar2 = (this->DisplayCategory).TextData.Reference;
  if (pIVar2 != pIVar1) {
    (this->DisplayCategory).TextData.Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  (this->DisplayCategory).Flags = (param_1->DisplayCategory).Flags;
  this->Slot = param_1->Slot;
  this->field_0x29 = this->field_0x29 ^ (this->bIsDirty ^ param_1->bIsDirty) & 1;
  (this->DefaultKey).KeyName = (param_1->DefaultKey).KeyName;
  pTVar3 = (param_1->DefaultKey).KeyDetails.SharedReferenceCount.ReferenceController;
  pFVar4 = (param_1->DefaultKey).KeyDetails.Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = (this->DefaultKey).KeyDetails.SharedReferenceCount.ReferenceController;
  (this->DefaultKey).KeyDetails.Object = pFVar4;
  (this->DefaultKey).KeyDetails.SharedReferenceCount.ReferenceController = pTVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  (this->CurrentKey).KeyName = (param_1->CurrentKey).KeyName;
  pTVar3 = (param_1->CurrentKey).KeyDetails.SharedReferenceCount.ReferenceController;
  pFVar4 = (param_1->CurrentKey).KeyDetails.Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = (this->CurrentKey).KeyDetails.SharedReferenceCount.ReferenceController;
  (this->CurrentKey).KeyDetails.Object = pFVar4;
  (this->CurrentKey).KeyDetails.SharedReferenceCount.ReferenceController = pTVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  FVar6 = (param_1->HardwareDeviceId).HardwareDeviceIdentifier;
  (this->HardwareDeviceId).InputClassName = (param_1->HardwareDeviceId).InputClassName;
  (this->HardwareDeviceId).HardwareDeviceIdentifier = FVar6;
  uVar7 = *(undefined3 *)&(param_1->HardwareDeviceId).field_0x11;
  iVar8 = (param_1->HardwareDeviceId).SupportedFeaturesMask;
  (this->HardwareDeviceId).PrimaryDeviceType = (param_1->HardwareDeviceId).PrimaryDeviceType;
  *(undefined3 *)&(this->HardwareDeviceId).field_0x11 = uVar7;
  (this->HardwareDeviceId).SupportedFeaturesMask = iVar8;
  TPersistentObjectPtr<FSoftObjectPath>::operator=
            ((TPersistentObjectPtr<FSoftObjectPath> *)&this->AssociatedInputActionSoft,
             (TPersistentObjectPtr<FSoftObjectPath> *)&param_1->AssociatedInputActionSoft);
  return this;
}

// FPlayerKeyMapping @ 14a6ca940

FPlayerKeyMapping * __thiscall
FPlayerKeyMapping::FPlayerKeyMapping
          (FPlayerKeyMapping *this,FEnhancedActionKeyMapping *param_1,EPlayerMappableKeySlot param_2
          ,FHardwareDeviceIdentifier *param_3)

{
  undefined1 *this_00;
  ITextData *pIVar1;
  TReferenceControllerBase<1> *pTVar2;
  UInputAction *pUVar3;
  FName FVar4;
  undefined3 uVar5;
  int iVar6;
  UPlayerMappableKeySettings *pUVar7;
  FText *pFVar8;
  UInputAction *local_res8;
  
  pUVar7 = FEnhancedActionKeyMapping::GetPlayerMappableKeySettings(param_1);
  if (pUVar7 != (UPlayerMappableKeySettings *)0x0) {
    pUVar7 = FEnhancedActionKeyMapping::GetPlayerMappableKeySettings(param_1);
    if (pUVar7 != (UPlayerMappableKeySettings *)0x0) {
      (**(code **)(pUVar7->_padding_ + 0x2b0))(pUVar7,this,param_1);
      goto LAB_14a6ca995;
    }
  }
  (this->MappingName).ComparisonIndex = 0;
  (this->MappingName).Number = 0;
LAB_14a6ca995:
  pUVar7 = FEnhancedActionKeyMapping::GetPlayerMappableKeySettings(param_1);
  if (pUVar7 == (UPlayerMappableKeySettings *)0x0) {
    pFVar8 = FText::GetEmpty();
  }
  else {
    pFVar8 = &pUVar7->DisplayName;
  }
  (this->DisplayName).TextData.Reference = (ITextData *)0x0;
  pIVar1 = (pFVar8->TextData).Reference;
  (this->DisplayName).TextData.Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))();
  }
  (this->DisplayName).Flags = pFVar8->Flags;
  pUVar7 = FEnhancedActionKeyMapping::GetPlayerMappableKeySettings(param_1);
  if (pUVar7 == (UPlayerMappableKeySettings *)0x0) {
    pFVar8 = FText::GetEmpty();
  }
  else {
    pFVar8 = &pUVar7->DisplayCategory;
  }
  (this->DisplayCategory).TextData.Reference = (ITextData *)0x0;
  pIVar1 = (pFVar8->TextData).Reference;
  (this->DisplayCategory).TextData.Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))();
  }
  (this->DisplayCategory).Flags = pFVar8->Flags;
  this->bIsDirty = '\0';
  this->Slot = param_2;
  (this->DefaultKey).KeyName = (param_1->Key).KeyName;
  (this->DefaultKey).KeyDetails.Object = (param_1->Key).KeyDetails.Object;
  pTVar2 = (param_1->Key).KeyDetails.SharedReferenceCount.ReferenceController;
  (this->DefaultKey).KeyDetails.SharedReferenceCount.ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  (this->CurrentKey).KeyName = (param_1->Key).KeyName;
  (this->CurrentKey).KeyDetails.Object = (param_1->Key).KeyDetails.Object;
  pTVar2 = (param_1->Key).KeyDetails.SharedReferenceCount.ReferenceController;
  (this->CurrentKey).KeyDetails.SharedReferenceCount.ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  FVar4 = param_3->HardwareDeviceIdentifier;
  (this->HardwareDeviceId).InputClassName = param_3->InputClassName;
  (this->HardwareDeviceId).HardwareDeviceIdentifier = FVar4;
  uVar5 = *(undefined3 *)&param_3->field_0x11;
  iVar6 = param_3->SupportedFeaturesMask;
  (this->HardwareDeviceId).PrimaryDeviceType = param_3->PrimaryDeviceType;
  *(undefined3 *)&(this->HardwareDeviceId).field_0x11 = uVar5;
  (this->HardwareDeviceId).SupportedFeaturesMask = iVar6;
  (this->AssociatedInputAction).field0_0x0.DebugPtr = (UInputAction *)0x0;
  pUVar3 = (param_1->Action).field0_0x0.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (pUVar3 != (UInputAction *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UInputAction *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
  }
  this_00 = &(this->AssociatedInputActionSoft).SoftObjectPtr.field_0x18;
  *(undefined8 *)&(this->AssociatedInputActionSoft).SoftObjectPtr = 0;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->AssociatedInputActionSoft).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->AssociatedInputActionSoft).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->AssociatedInputActionSoft).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  local_res8 = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UInputAction *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  FSoftObjectPtr::operator=
            (&(this->AssociatedInputActionSoft).SoftObjectPtr,(FObjectPtr)&local_res8);
  return this;
}

// FPlayerKeyMapping @ 14a6cab20

FPlayerKeyMapping * __thiscall FPlayerKeyMapping::FPlayerKeyMapping(FPlayerKeyMapping *this)

{
  atomic<int> *paVar1;
  undefined1 *this_00;
  ITextData *pIVar2;
  FSharedReferencer<1> FVar3;
  FName FVar4;
  undefined3 uVar5;
  int iVar6;
  FText *pFVar7;
  undefined8 local_res8;
  
  (this->MappingName).ComparisonIndex = 0;
  (this->MappingName).Number = 0;
  pFVar7 = FText::GetEmpty();
  (this->DisplayName).TextData.Reference = (ITextData *)0x0;
  pIVar2 = (pFVar7->TextData).Reference;
  (this->DisplayName).TextData.Reference = pIVar2;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 8))();
  }
  (this->DisplayName).Flags = pFVar7->Flags;
  pFVar7 = FText::GetEmpty();
  (this->DisplayCategory).TextData.Reference = (ITextData *)0x0;
  pIVar2 = (pFVar7->TextData).Reference;
  (this->DisplayCategory).TextData.Reference = pIVar2;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 8))();
  }
  (this->DisplayCategory).Flags = pFVar7->Flags;
  this->bIsDirty = '\0';
  this->Slot = Unspecified;
  (this->DefaultKey).KeyName = EKeys::Invalid.KeyName;
  (this->DefaultKey).KeyDetails.Object = EKeys::Invalid.KeyDetails.Object;
  FVar3 = EKeys::Invalid.KeyDetails.SharedReferenceCount;
  (this->DefaultKey).KeyDetails.SharedReferenceCount.ReferenceController =
       EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController;
  if (FVar3.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(FVar3.ReferenceController)->SharedReferenceCount;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  (this->CurrentKey).KeyName = EKeys::Invalid.KeyName;
  (this->CurrentKey).KeyDetails.Object = EKeys::Invalid.KeyDetails.Object;
  FVar3 = EKeys::Invalid.KeyDetails.SharedReferenceCount;
  (this->CurrentKey).KeyDetails.SharedReferenceCount.ReferenceController =
       EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController;
  if (FVar3.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(FVar3.ReferenceController)->SharedReferenceCount;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  FVar4 = FHardwareDeviceIdentifier::Invalid.HardwareDeviceIdentifier;
  this_00 = &(this->AssociatedInputActionSoft).SoftObjectPtr.field_0x18;
  (this->HardwareDeviceId).InputClassName = FHardwareDeviceIdentifier::Invalid.InputClassName;
  (this->HardwareDeviceId).HardwareDeviceIdentifier = FVar4;
  uVar5 = FHardwareDeviceIdentifier::Invalid._17_3_;
  iVar6 = FHardwareDeviceIdentifier::Invalid.SupportedFeaturesMask;
  (this->HardwareDeviceId).PrimaryDeviceType = FHardwareDeviceIdentifier::Invalid.PrimaryDeviceType;
  *(undefined3 *)&(this->HardwareDeviceId).field_0x11 = uVar5;
  (this->HardwareDeviceId).SupportedFeaturesMask = iVar6;
  (this->AssociatedInputAction).field0_0x0.DebugPtr = (UInputAction *)0x0;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->AssociatedInputActionSoft).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->AssociatedInputActionSoft).SoftObjectPtr = 0;
  *(undefined8 *)&(this->AssociatedInputActionSoft).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->AssociatedInputActionSoft).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  local_res8 = 0;
  FSoftObjectPtr::operator=
            (&(this->AssociatedInputActionSoft).SoftObjectPtr,(FObjectPtr)&local_res8);
  return this;
}

// operator= @ 14a6d09e0

FPlayerKeyMapping * __thiscall
FPlayerKeyMapping::operator=(FPlayerKeyMapping *this,FPlayerKeyMapping *param_1)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  TReferenceControllerBase<1> *pTVar3;
  FKeyDetails *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  FName FVar6;
  undefined3 uVar7;
  int iVar8;
  undefined1 local_res8 [8];
  
  this->MappingName = param_1->MappingName;
  pIVar1 = (param_1->DisplayName).TextData.Reference;
  pIVar2 = (this->DisplayName).TextData.Reference;
  if (pIVar2 != pIVar1) {
    (this->DisplayName).TextData.Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  (this->DisplayName).Flags = (param_1->DisplayName).Flags;
  pIVar1 = (param_1->DisplayCategory).TextData.Reference;
  pIVar2 = (this->DisplayCategory).TextData.Reference;
  if (pIVar2 != pIVar1) {
    (this->DisplayCategory).TextData.Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  (this->DisplayCategory).Flags = (param_1->DisplayCategory).Flags;
  this->Slot = param_1->Slot;
  this->field_0x29 = this->field_0x29 ^ (this->bIsDirty ^ param_1->bIsDirty) & 1;
  (this->DefaultKey).KeyName = (param_1->DefaultKey).KeyName;
  pTVar3 = (param_1->DefaultKey).KeyDetails.SharedReferenceCount.ReferenceController;
  pFVar4 = (param_1->DefaultKey).KeyDetails.Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = (this->DefaultKey).KeyDetails.SharedReferenceCount.ReferenceController;
  (this->DefaultKey).KeyDetails.Object = pFVar4;
  (this->DefaultKey).KeyDetails.SharedReferenceCount.ReferenceController = pTVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  (this->CurrentKey).KeyName = (param_1->CurrentKey).KeyName;
  pTVar3 = (param_1->CurrentKey).KeyDetails.SharedReferenceCount.ReferenceController;
  pFVar4 = (param_1->CurrentKey).KeyDetails.Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = (this->CurrentKey).KeyDetails.SharedReferenceCount.ReferenceController;
  (this->CurrentKey).KeyDetails.Object = pFVar4;
  (this->CurrentKey).KeyDetails.SharedReferenceCount.ReferenceController = pTVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  FVar6 = (param_1->HardwareDeviceId).HardwareDeviceIdentifier;
  (this->HardwareDeviceId).InputClassName = (param_1->HardwareDeviceId).InputClassName;
  (this->HardwareDeviceId).HardwareDeviceIdentifier = FVar6;
  uVar7 = *(undefined3 *)&(param_1->HardwareDeviceId).field_0x11;
  iVar8 = (param_1->HardwareDeviceId).SupportedFeaturesMask;
  (this->HardwareDeviceId).PrimaryDeviceType = (param_1->HardwareDeviceId).PrimaryDeviceType;
  *(undefined3 *)&(this->HardwareDeviceId).field_0x11 = uVar7;
  (this->HardwareDeviceId).SupportedFeaturesMask = iVar8;
  TPersistentObjectPtr<FSoftObjectPath>::operator=
            ((TPersistentObjectPtr<FSoftObjectPath> *)&this->AssociatedInputActionSoft,
             (TPersistentObjectPtr<FSoftObjectPath> *)&param_1->AssociatedInputActionSoft);
  return this;
}

// operator= @ 14a6d0b20

FPlayerKeyMapping * __thiscall
FPlayerKeyMapping::operator=(FPlayerKeyMapping *this,FPlayerKeyMapping *param_1)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  TReferenceControllerBase<1> *pTVar3;
  FKeyDetails *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  FName FVar6;
  undefined3 uVar7;
  int iVar8;
  undefined1 local_res8 [8];
  
  this->MappingName = param_1->MappingName;
  pIVar1 = (param_1->DisplayName).TextData.Reference;
  pIVar2 = (this->DisplayName).TextData.Reference;
  if (pIVar2 != pIVar1) {
    (this->DisplayName).TextData.Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  (this->DisplayName).Flags = (param_1->DisplayName).Flags;
  pIVar1 = (param_1->DisplayCategory).TextData.Reference;
  pIVar2 = (this->DisplayCategory).TextData.Reference;
  if (pIVar2 != pIVar1) {
    (this->DisplayCategory).TextData.Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  (this->DisplayCategory).Flags = (param_1->DisplayCategory).Flags;
  this->Slot = param_1->Slot;
  this->field_0x29 = this->field_0x29 ^ (this->bIsDirty ^ param_1->bIsDirty) & 1;
  (this->DefaultKey).KeyName = (param_1->DefaultKey).KeyName;
  pTVar3 = (param_1->DefaultKey).KeyDetails.SharedReferenceCount.ReferenceController;
  pFVar4 = (param_1->DefaultKey).KeyDetails.Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = (this->DefaultKey).KeyDetails.SharedReferenceCount.ReferenceController;
  (this->DefaultKey).KeyDetails.Object = pFVar4;
  (this->DefaultKey).KeyDetails.SharedReferenceCount.ReferenceController = pTVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  (this->CurrentKey).KeyName = (param_1->CurrentKey).KeyName;
  pTVar3 = (param_1->CurrentKey).KeyDetails.SharedReferenceCount.ReferenceController;
  pFVar4 = (param_1->CurrentKey).KeyDetails.Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = (this->CurrentKey).KeyDetails.SharedReferenceCount.ReferenceController;
  (this->CurrentKey).KeyDetails.Object = pFVar4;
  (this->CurrentKey).KeyDetails.SharedReferenceCount.ReferenceController = pTVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  FVar6 = (param_1->HardwareDeviceId).HardwareDeviceIdentifier;
  (this->HardwareDeviceId).InputClassName = (param_1->HardwareDeviceId).InputClassName;
  (this->HardwareDeviceId).HardwareDeviceIdentifier = FVar6;
  uVar7 = *(undefined3 *)&(param_1->HardwareDeviceId).field_0x11;
  iVar8 = (param_1->HardwareDeviceId).SupportedFeaturesMask;
  (this->HardwareDeviceId).PrimaryDeviceType = (param_1->HardwareDeviceId).PrimaryDeviceType;
  *(undefined3 *)&(this->HardwareDeviceId).field_0x11 = uVar7;
  (this->HardwareDeviceId).SupportedFeaturesMask = iVar8;
  TPersistentObjectPtr<FSoftObjectPath>::operator=
            ((TPersistentObjectPtr<FSoftObjectPath> *)&this->AssociatedInputActionSoft,
             (TPersistentObjectPtr<FSoftObjectPath> *)&param_1->AssociatedInputActionSoft);
  return this;
}

// operator== @ 14a6d0e60

bool __thiscall FPlayerKeyMapping::operator==(FPlayerKeyMapping *this,FPlayerKeyMapping *param_1)

{
  bool bVar1;
  
  if ((this->MappingName == param_1->MappingName) && (this->Slot == param_1->Slot)) {
    bVar1 = FHardwareDeviceIdentifier::operator==
                      (&this->HardwareDeviceId,&param_1->HardwareDeviceId);
    if ((bVar1) &&
       (((this->CurrentKey).KeyName == (param_1->CurrentKey).KeyName &&
        ((this->DefaultKey).KeyName == (param_1->DefaultKey).KeyName)))) {
      return true;
    }
  }
  return false;
}

// operator!= @ 14a6d0ed0

bool __thiscall FPlayerKeyMapping::operator!=(FPlayerKeyMapping *this,FPlayerKeyMapping *param_1)

{
  bool bVar1;
  
  if ((this->MappingName == param_1->MappingName) && (this->Slot == param_1->Slot)) {
    bVar1 = FHardwareDeviceIdentifier::operator==
                      (&this->HardwareDeviceId,&param_1->HardwareDeviceId);
    if ((bVar1) &&
       (((this->CurrentKey).KeyName == (param_1->CurrentKey).KeyName &&
        ((this->DefaultKey).KeyName == (param_1->DefaultKey).KeyName)))) {
      return false;
    }
  }
  return true;
}

// GetAssociatedInputAction @ 14a6de8c0

UInputAction * __thiscall FPlayerKeyMapping::GetAssociatedInputAction(FPlayerKeyMapping *this)

{
  int iVar1;
  UInputAction *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = (UInputAction *)
           TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&this->AssociatedInputActionSoft);
  if (pUVar2 != (UInputAction *)0x0) {
    pUVar3 = UInputAction::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return pUVar2;
    }
  }
  return (UInputAction *)0x0;
}

// GetCurrentKey @ 14a6dec60

FKey * __thiscall FPlayerKeyMapping::GetCurrentKey(FPlayerKeyMapping *this)

{
  longlong lVar1;
  
  lVar1 = 0x48;
  if ((this->CurrentKey).KeyName == (this->DefaultKey).KeyName) {
    lVar1 = 0x30;
  }
  return (FKey *)((longlong)&(this->MappingName).ComparisonIndex.Value + lVar1);
}

// GetDefaultKey @ 14a6df160

FKey * __thiscall FPlayerKeyMapping::GetDefaultKey(FPlayerKeyMapping *this)

{
  return &this->DefaultKey;
}

// GetDisplayCategory @ 14a6df230

FText * __thiscall FPlayerKeyMapping::GetDisplayCategory(FPlayerKeyMapping *this)

{
  return &this->DisplayCategory;
}

// GetDisplayName @ 14a6df270

FText * __thiscall FPlayerKeyMapping::GetDisplayName(FPlayerKeyMapping *this)

{
  return &this->DisplayName;
}

// GetHardwareDeviceId @ 14a6df350

FHardwareDeviceIdentifier * __thiscall
FPlayerKeyMapping::GetHardwareDeviceId(FPlayerKeyMapping *this)

{
  return &this->HardwareDeviceId;
}

// GetHardwareDeviceSupportedFeatures @ 14a6df360

Type __thiscall FPlayerKeyMapping::GetHardwareDeviceSupportedFeatures(FPlayerKeyMapping *this)

{
  return (this->HardwareDeviceId).SupportedFeaturesMask;
}

// GetMappingName @ 14a6dfc60

FName __thiscall FPlayerKeyMapping::GetMappingName(FPlayerKeyMapping *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = this->MappingName;
  return in_RDX;
}

// GetPrimaryDeviceType @ 14a6e05a0

EHardwareDevicePrimaryType __thiscall
FPlayerKeyMapping::GetPrimaryDeviceType(FPlayerKeyMapping *this)

{
  return (this->HardwareDeviceId).PrimaryDeviceType;
}

// GetSlot @ 14a6e26b0

EPlayerMappableKeySlot __thiscall FPlayerKeyMapping::GetSlot(FPlayerKeyMapping *this)

{
  return this->Slot;
}

// IsCustomized @ 14a6e5980

bool __thiscall FPlayerKeyMapping::IsCustomized(FPlayerKeyMapping *this)

{
  return (this->CurrentKey).KeyName != (this->DefaultKey).KeyName;
}

// IsDirty @ 14a6e59a0

bool __thiscall FPlayerKeyMapping::IsDirty(FPlayerKeyMapping *this)

{
  return this->bIsDirty;
}

// IsValid @ 14a6e5cd0

bool __thiscall FPlayerKeyMapping::IsValid(FPlayerKeyMapping *this)

{
  bool bVar1;
  
  bVar1 = ::FName::IsWithinBounds((FNameEntryId)(this->MappingName).ComparisonIndex.Value);
  if (bVar1) {
    bVar1 = FKey::IsValid(&this->CurrentKey);
    if (bVar1) {
      return true;
    }
  }
  return false;
}

// ResetToDefault @ 14a6f4690

void __thiscall FPlayerKeyMapping::ResetToDefault(FPlayerKeyMapping *this)

{
  FName FVar1;
  TReferenceControllerBase<1> *pTVar2;
  FKeyDetails *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  
  FVar1 = (this->DefaultKey).KeyName;
  if ((this->CurrentKey).KeyName != FVar1) {
    this->bIsDirty = '\x01';
  }
  (this->CurrentKey).KeyName = FVar1;
  pTVar2 = (this->DefaultKey).KeyDetails.SharedReferenceCount.ReferenceController;
  pFVar3 = (this->DefaultKey).KeyDetails.Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar4 = (this->CurrentKey).KeyDetails.SharedReferenceCount.ReferenceController;
  (this->CurrentKey).KeyDetails.Object = pFVar3;
  (this->CurrentKey).KeyDetails.SharedReferenceCount.ReferenceController = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// SetCurrentKey @ 14a6f6370

void __thiscall FPlayerKeyMapping::SetCurrentKey(FPlayerKeyMapping *this,FKey *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FKeyDetails *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  if (param_1->KeyName != (this->CurrentKey).KeyName) {
    this->bIsDirty = '\x01';
  }
  (this->CurrentKey).KeyName = param_1->KeyName;
  pTVar1 = (param_1->KeyDetails).SharedReferenceCount.ReferenceController;
  pFVar2 = (param_1->KeyDetails).Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (this->CurrentKey).KeyDetails.SharedReferenceCount.ReferenceController;
  (this->CurrentKey).KeyDetails.Object = pFVar2;
  (this->CurrentKey).KeyDetails.SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// SetHardwareDeviceId @ 14a6f6440

void __thiscall
FPlayerKeyMapping::SetHardwareDeviceId(FPlayerKeyMapping *this,FHardwareDeviceIdentifier *param_1)

{
  FName FVar1;
  undefined3 uVar2;
  int iVar3;
  
  FVar1 = param_1->HardwareDeviceIdentifier;
  (this->HardwareDeviceId).InputClassName = param_1->InputClassName;
  (this->HardwareDeviceId).HardwareDeviceIdentifier = FVar1;
  uVar2 = *(undefined3 *)&param_1->field_0x11;
  iVar3 = param_1->SupportedFeaturesMask;
  (this->HardwareDeviceId).PrimaryDeviceType = param_1->PrimaryDeviceType;
  *(undefined3 *)&(this->HardwareDeviceId).field_0x11 = uVar2;
  (this->HardwareDeviceId).SupportedFeaturesMask = iVar3;
  return;
}

// ToString @ 14a6fc8e0

FString * __thiscall
FPlayerKeyMapping::ToString(FPlayerKeyMapping *this,FString *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  UEnum *this_00;
  bool bVar3;
  UPackage *pUVar4;
  FString *pFVar5;
  UObject *pUVar6;
  UClass *pUVar7;
  UObject *pUVar8;
  FName local_res10;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  pUVar8 = (UObject *)0x0;
  if (Z_Registration_Info_UEnum_EPlayerMappableKeySlot.OuterSingleton == (UEnum *)0x0) {
    pUVar4 = Z_Construct_UPackage__Script_EnhancedInput();
    Z_Registration_Info_UEnum_EPlayerMappableKeySlot.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_EnhancedInput_EPlayerMappableKeySlot,(UObject *)pUVar4,
                       L"EPlayerMappableKeySlot");
  }
  this_00 = Z_Registration_Info_UEnum_EPlayerMappableKeySlot.OuterSingleton;
  if ((Z_Registration_Info_UEnum_EPlayerMappableKeySlot.OuterSingleton == (UEnum *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("PlayerMappableEnumClass",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\EnhancedInput\\Source\\EnhancedInput\\Private\\UserSettings\\EnhancedInputUserSettings.cpp"
                         ,0xc9,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FString *)(*pcVar2)();
    return pFVar5;
  }
  pUVar6 = TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&this->AssociatedInputActionSoft);
  if (pUVar6 == (UObject *)0x0) goto LAB_14a6fca1a;
  pUVar7 = UInputAction::StaticClass();
  iVar1 = (int)pUVar7->_padding_;
  if ((*(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38) < iVar1) ||
     ((longlong *)
      *(undefined1 **)(*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) + (longlong)iVar1 * 8)
      != &pUVar7->_padding_)) goto LAB_14a6fca1a;
  pUVar6 = TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&this->AssociatedInputActionSoft);
  if (pUVar6 == (UObject *)0x0) {
LAB_14a6fc9d9:
    pUVar6 = pUVar8;
  }
  else {
    pUVar7 = UInputAction::StaticClass();
    iVar1 = (int)pUVar7->_padding_;
    if ((*(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar7->_padding_)) goto LAB_14a6fc9d9;
  }
  local_res10.ComparisonIndex.Value = *(uint *)&pUVar6->field_0x18;
  local_res10.Number = *(uint *)&pUVar6->field_0x1c;
  pUVar8 = (UObject *)&DAT_00000001;
  ::FName::ToString(&local_res10,&local_48);
LAB_14a6fca1a:
  FHardwareDeviceIdentifier::ToString(&this->HardwareDeviceId,&local_58);
  FKey::ToString(&this->CurrentKey,&local_68);
  FKey::ToString(&this->DefaultKey,&local_78);
  UEnum::GetNameStringByValue(this_00,&local_88,(ulonglong)this->Slot);
  ::FName::ToString(&this->MappingName,&local_98);
  ::FString::PrintfImpl
            (__return_storage_ptr__,
             L"Mapping Name: \'%s\'  Slot: \'%s\'  Default Key: \'%s\'  Player Mapped Key: \'%s\'  HardwareDevice:  \'%s\'   AssociatedInputAction: \'%s\'"
            );
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if ((pUVar8 != (UObject *)0x0) &&
     (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// UpdateDefaultKeyFromActionKeyMapping @ 14a6fff10

void __thiscall
FPlayerKeyMapping::UpdateDefaultKeyFromActionKeyMapping
          (FPlayerKeyMapping *this,FEnhancedActionKeyMapping *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FKeyDetails *pFVar2;
  code *pcVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  UPlayerMappableKeySettings *pUVar6;
  FName local_res8;
  
  pUVar6 = FEnhancedActionKeyMapping::GetPlayerMappableKeySettings(param_1);
  if (pUVar6 != (UPlayerMappableKeySettings *)0x0) {
    pUVar6 = FEnhancedActionKeyMapping::GetPlayerMappableKeySettings(param_1);
    if (pUVar6 == (UPlayerMappableKeySettings *)0x0) {
LAB_14a6fff61:
      local_res8.ComparisonIndex.Value = 0;
      local_res8.Number = 0;
    }
    else {
      pUVar6 = FEnhancedActionKeyMapping::GetPlayerMappableKeySettings(param_1);
      if (pUVar6 == (UPlayerMappableKeySettings *)0x0) goto LAB_14a6fff61;
      (**(code **)(pUVar6->_padding_ + 0x2b0))(pUVar6,&local_res8,param_1);
    }
    if (local_res8 == this->MappingName) goto LAB_14a6fff9f;
  }
  bVar5 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_4874167975445266132>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\EnhancedInput\\Source\\EnhancedInput\\Private\\UserSettings\\EnhancedInputUserSettings.cpp"
                     ,300,
                     "OriginalMapping.IsPlayerMappable() && OriginalMapping.GetMappingName() == MappingName"
                    );
  if (bVar5) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_14a6fff9f:
  (this->DefaultKey).KeyName = (param_1->Key).KeyName;
  pTVar1 = (param_1->Key).KeyDetails.SharedReferenceCount.ReferenceController;
  pFVar2 = (param_1->Key).KeyDetails.Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar4 = (this->DefaultKey).KeyDetails.SharedReferenceCount.ReferenceController;
  (this->DefaultKey).KeyDetails.Object = pFVar2;
  (this->DefaultKey).KeyDetails.SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  if ((this->CurrentKey).KeyName == (this->DefaultKey).KeyName) {
    this->bIsDirty = '\0';
  }
  return;
}

// UpdateMetadataFromActionKeyMapping @ 14a700000

void __thiscall
FPlayerKeyMapping::UpdateMetadataFromActionKeyMapping
          (FPlayerKeyMapping *this,FEnhancedActionKeyMapping *param_1)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  UInputAction *pUVar3;
  code *pcVar4;
  bool bVar5;
  UPlayerMappableKeySettings *pUVar6;
  FText *pFVar7;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  FName local_res18;
  UInputAction *local_res20;
  
  pUVar6 = FEnhancedActionKeyMapping::GetPlayerMappableKeySettings(param_1);
  if (pUVar6 != (UPlayerMappableKeySettings *)0x0) {
    pUVar6 = FEnhancedActionKeyMapping::GetPlayerMappableKeySettings(param_1);
    if (pUVar6 == (UPlayerMappableKeySettings *)0x0) {
LAB_14a700051:
      local_res18.ComparisonIndex.Value = 0;
      local_res18.Number = 0;
    }
    else {
      pUVar6 = FEnhancedActionKeyMapping::GetPlayerMappableKeySettings(param_1);
      if (pUVar6 == (UPlayerMappableKeySettings *)0x0) goto LAB_14a700051;
      (**(code **)(pUVar6->_padding_ + 0x2b0))(pUVar6,&local_res18,param_1);
    }
    if (local_res18 == this->MappingName) goto LAB_14a70008f;
  }
  bVar5 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_4874167975445266141>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\EnhancedInput\\Source\\EnhancedInput\\Private\\UserSettings\\EnhancedInputUserSettings.cpp"
                     ,0x123,
                     "OriginalMapping.IsPlayerMappable() && OriginalMapping.GetMappingName() == MappingName"
                    );
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
LAB_14a70008f:
  pUVar6 = FEnhancedActionKeyMapping::GetPlayerMappableKeySettings(param_1);
  if (pUVar6 == (UPlayerMappableKeySettings *)0x0) {
    pFVar7 = FText::GetEmpty();
  }
  else {
    pFVar7 = &pUVar6->DisplayCategory;
  }
  pIVar1 = (pFVar7->TextData).Reference;
  pIVar2 = (this->DisplayCategory).TextData.Reference;
  if (pIVar2 != pIVar1) {
    (this->DisplayCategory).TextData.Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  (this->DisplayCategory).Flags = pFVar7->Flags;
  pUVar6 = FEnhancedActionKeyMapping::GetPlayerMappableKeySettings(param_1);
  if (pUVar6 == (UPlayerMappableKeySettings *)0x0) {
    pFVar7 = FText::GetEmpty();
  }
  else {
    pFVar7 = &pUVar6->DisplayName;
  }
  pIVar1 = (pFVar7->TextData).Reference;
  pIVar2 = (this->DisplayName).TextData.Reference;
  if (pIVar2 != pIVar1) {
    (this->DisplayName).TextData.Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res10);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  (this->DisplayName).Flags = pFVar7->Flags;
  pUVar3 = (param_1->Action).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UInputAction *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  local_res20 = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UInputAction *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  FSoftObjectPtr::operator=
            (&(this->AssociatedInputActionSoft).SoftObjectPtr,(FObjectPtr)&local_res20);
  return;
}

