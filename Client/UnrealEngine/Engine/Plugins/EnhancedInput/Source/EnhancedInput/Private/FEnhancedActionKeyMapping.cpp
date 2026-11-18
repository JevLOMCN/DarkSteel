// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EnhancedInput
// Functions: 13

// StaticStruct @ 14a6b32f0

UScriptStruct * __cdecl FEnhancedActionKeyMapping::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FEnhancedActionKeyMapping.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_EnhancedInput();
    Z_Registration_Info_UScriptStruct_FEnhancedActionKeyMapping.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FEnhancedActionKeyMapping,(UObject *)pUVar1,
                         L"EnhancedActionKeyMapping");
  }
  return Z_Registration_Info_UScriptStruct_FEnhancedActionKeyMapping.OuterSingleton;
}

// Equals<1> @ 14a6c1050

bool __thiscall
FEnhancedActionKeyMapping::Equals<1>
          (FEnhancedActionKeyMapping *this,FEnhancedActionKeyMapping *param_1)

{
  longlong lVar1;
  longlong lVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  UObject *pUVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  
  if ((((this->Action).field0_0x0.DebugPtr == (param_1->Action).field0_0x0.DebugPtr) &&
      ((this->Key).KeyName == (param_1->Key).KeyName)) &&
     (iVar10 = (this->Modifiers).ArrayNum, iVar10 == (param_1->Modifiers).ArrayNum)) {
    uVar11 = 0;
    if (0 < iVar10) {
      lVar12 = 0;
      do {
        uVar9 = 0;
        if ((int)uVar11 < iVar10) {
          uVar9 = ~uVar11 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          uVar8 = (*pcVar6)();
          return (bool)uVar8;
        }
        lVar1 = *(longlong *)((this->Modifiers).AllocatorInstance.Data + lVar12);
        uVar9 = 0;
        if ((int)uVar11 < (param_1->Modifiers).ArrayNum) {
          uVar9 = ~uVar11 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          uVar8 = (*pcVar6)();
          return (bool)uVar8;
        }
        lVar2 = *(longlong *)((param_1->Modifiers).AllocatorInstance.Data + lVar12);
        if ((lVar1 == 0) != (lVar2 == 0)) {
          return false;
        }
        if (lVar1 != 0) {
          pUVar3 = *(UClass **)(lVar1 + 0x10);
          pUVar4 = *(UClass **)(lVar2 + 0x10);
          if (pUVar3 != pUVar4) {
            return false;
          }
          if ((pUVar3->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
            UClass::InternalCreateDefaultObjectWrapper(pUVar3);
          }
          pUVar5 = (pUVar3->ClassDefaultObject).field0_0x0.DebugPtr;
          if ((pUVar4->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
            UClass::InternalCreateDefaultObjectWrapper(pUVar4);
          }
          if (pUVar5 != (pUVar4->ClassDefaultObject).field0_0x0.DebugPtr) {
            return false;
          }
        }
        iVar10 = (this->Modifiers).ArrayNum;
        uVar11 = uVar11 + 1;
        lVar12 = lVar12 + 8;
      } while ((int)uVar11 < iVar10);
    }
    iVar10 = (this->Triggers).ArrayNum;
    if (iVar10 == (param_1->Triggers).ArrayNum) {
      uVar11 = 0;
      if (0 < iVar10) {
        lVar12 = 0;
        do {
          uVar9 = 0;
          if ((int)uVar11 < iVar10) {
            uVar9 = ~uVar11 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            uVar8 = (*pcVar6)();
            return (bool)uVar8;
          }
          lVar1 = *(longlong *)((this->Triggers).AllocatorInstance.Data + lVar12);
          uVar9 = 0;
          if ((int)uVar11 < (param_1->Triggers).ArrayNum) {
            uVar9 = ~uVar11 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            uVar8 = (*pcVar6)();
            return (bool)uVar8;
          }
          lVar2 = *(longlong *)((param_1->Triggers).AllocatorInstance.Data + lVar12);
          if ((lVar1 == 0) != (lVar2 == 0)) {
            return false;
          }
          if (lVar1 != 0) {
            pUVar3 = *(UClass **)(lVar1 + 0x10);
            pUVar4 = *(UClass **)(lVar2 + 0x10);
            if (pUVar3 != pUVar4) {
              return false;
            }
            if ((pUVar3->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
              UClass::InternalCreateDefaultObjectWrapper(pUVar3);
            }
            pUVar5 = (pUVar3->ClassDefaultObject).field0_0x0.DebugPtr;
            if ((pUVar4->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
              UClass::InternalCreateDefaultObjectWrapper(pUVar4);
            }
            if (pUVar5 != (pUVar4->ClassDefaultObject).field0_0x0.DebugPtr) {
              return false;
            }
          }
          iVar10 = (this->Triggers).ArrayNum;
          uVar11 = uVar11 + 1;
          lVar12 = lVar12 + 8;
        } while ((int)uVar11 < iVar10);
      }
      return true;
    }
  }
  return false;
}

// FEnhancedActionKeyMapping @ 14a6c9ec0

FEnhancedActionKeyMapping * __thiscall
FEnhancedActionKeyMapping::FEnhancedActionKeyMapping
          (FEnhancedActionKeyMapping *this,FEnhancedActionKeyMapping *param_1)

{
  UInputAction *pUVar1;
  UPlayerMappableKeySettings *pUVar2;
  byte bVar3;
  
  (this->Triggers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Triggers).AllocatorInstance.Data = (param_1->Triggers).AllocatorInstance.Data;
  (param_1->Triggers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Triggers).ArrayNum = (param_1->Triggers).ArrayNum;
  (this->Triggers).ArrayMax = (param_1->Triggers).ArrayMax;
  (param_1->Triggers).ArrayNum = 0;
  (param_1->Triggers).ArrayMax = 0;
  (this->Modifiers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Modifiers).AllocatorInstance.Data = (param_1->Modifiers).AllocatorInstance.Data;
  (param_1->Modifiers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Modifiers).ArrayNum = (param_1->Modifiers).ArrayNum;
  (this->Modifiers).ArrayMax = (param_1->Modifiers).ArrayMax;
  (param_1->Modifiers).ArrayNum = 0;
  (param_1->Modifiers).ArrayMax = 0;
  pUVar1 = (param_1->Action).field0_0x0.DebugPtr;
  (this->Action).field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UInputAction *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->Key).KeyName = (param_1->Key).KeyName;
  (this->Key).KeyDetails.Object = (param_1->Key).KeyDetails.Object;
  (this->Key).KeyDetails.SharedReferenceCount.ReferenceController =
       (param_1->Key).KeyDetails.SharedReferenceCount.ReferenceController;
  (param_1->Key).KeyDetails.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (param_1->Key).KeyDetails.Object = (FKeyDetails *)0x0;
  bVar3 = (this->bShouldBeIgnored ^ param_1->bShouldBeIgnored) & 1 ^ this->field_0x40;
  this->field_0x40 = bVar3;
  this->field_0x40 = (bVar3 ^ param_1->field_0x40) & 2 ^ bVar3;
  this->SettingBehavior = param_1->SettingBehavior;
  pUVar2 = (param_1->PlayerMappableKeySettings).field0_0x0.DebugPtr;
  (this->PlayerMappableKeySettings).field0_0x0.DebugPtr = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar2 != (UPlayerMappableKeySettings *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  return this;
}

// FEnhancedActionKeyMapping @ 14a6c9fb0

FEnhancedActionKeyMapping * __thiscall
FEnhancedActionKeyMapping::FEnhancedActionKeyMapping
          (FEnhancedActionKeyMapping *this,FEnhancedActionKeyMapping *param_1)

{
  int *piVar1;
  TArray<TObjectPtr<UInputModifier>,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  UInputAction *pUVar5;
  TReferenceControllerBase<1> *pTVar6;
  UPlayerMappableKeySettings *pUVar7;
  byte bVar8;
  
  piVar1 = &(this->Triggers).ArrayMax;
  (this->Triggers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->Triggers).ArrayNum;
  pFVar4 = (param_1->Triggers).AllocatorInstance.Data;
  (this->Triggers).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar3,0,(ForAnyElementType *)this,iVar3,piVar1);
    ConstructItems<TObjectPtr<UInputTrigger>,TObjectPtr<UInputTrigger>,int>
              ((this->Triggers).AllocatorInstance.Data,(TObjectPtr<UInputTrigger> *)pFVar4,iVar3);
  }
  pTVar2 = &this->Modifiers;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->Modifiers).ArrayMax;
  iVar3 = (param_1->Modifiers).ArrayNum;
  pFVar4 = (param_1->Modifiers).AllocatorInstance.Data;
  (this->Modifiers).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar3,0,&pTVar2->AllocatorInstance,iVar3,piVar1);
    ConstructItems<TObjectPtr<UInputModifier>,TObjectPtr<UInputModifier>,int>
              ((pTVar2->AllocatorInstance).Data,(TObjectPtr<UInputModifier> *)pFVar4,iVar3);
  }
  pUVar5 = (param_1->Action).field0_0x0.DebugPtr;
  (this->Action).field0_0x0.DebugPtr = pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UInputAction *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  (this->Key).KeyName = (param_1->Key).KeyName;
  (this->Key).KeyDetails.Object = (param_1->Key).KeyDetails.Object;
  pTVar6 = (param_1->Key).KeyDetails.SharedReferenceCount.ReferenceController;
  (this->Key).KeyDetails.SharedReferenceCount.ReferenceController = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar8 = (this->bShouldBeIgnored ^ param_1->bShouldBeIgnored) & 1 ^ this->field_0x40;
  this->field_0x40 = bVar8;
  this->field_0x40 = (bVar8 ^ param_1->field_0x40) & 2 ^ bVar8;
  this->SettingBehavior = param_1->SettingBehavior;
  pUVar7 = (param_1->PlayerMappableKeySettings).field0_0x0.DebugPtr;
  (this->PlayerMappableKeySettings).field0_0x0.DebugPtr = pUVar7;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar7 != (UPlayerMappableKeySettings *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  return this;
}

// FEnhancedActionKeyMapping @ 14a6ca110

FEnhancedActionKeyMapping * __thiscall
FEnhancedActionKeyMapping::FEnhancedActionKeyMapping
          (FEnhancedActionKeyMapping *this,UInputAction *param_1,FKey *param_2)

{
  undefined1 *puVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  (this->Action).field0_0x0.DebugPtr = param_1;
  (this->Triggers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Triggers).ArrayNum = 0;
  (this->Triggers).ArrayMax = 0;
  (this->Modifiers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Modifiers).ArrayNum = 0;
  (this->Modifiers).ArrayMax = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UInputAction *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->Key).KeyName = param_2->KeyName;
  (this->Key).KeyDetails.Object = (param_2->KeyDetails).Object;
  pTVar2 = (param_2->KeyDetails).SharedReferenceCount.ReferenceController;
  (this->Key).KeyDetails.SharedReferenceCount.ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  this->bShouldBeIgnored = '\0';
  this->bHasAlwaysTickTrigger = '\0';
  this->SettingBehavior = InheritSettingsFromAction;
  (this->PlayerMappableKeySettings).field0_0x0.DebugPtr = (UPlayerMappableKeySettings *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->KeyDetails).SharedReferenceCount.ReferenceController);
  return this;
}

// operator= @ 14a6d07d0

FEnhancedActionKeyMapping * __thiscall
FEnhancedActionKeyMapping::operator=
          (FEnhancedActionKeyMapping *this,FEnhancedActionKeyMapping *param_1)

{
  TArray<TObjectPtr<UInputModifier>,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<TObjectPtr<UInputModifier>,TSizedDefaultAllocator<32>_> *pTVar2;
  TSharedPtr<FKeyDetails,1> *pTVar3;
  TSharedPtr<FKeyDetails,1> *pTVar4;
  FScriptContainerElement *pFVar5;
  UInputAction *pUVar6;
  UPlayerMappableKeySettings *pUVar7;
  byte bVar8;
  
  if (this != param_1) {
    pFVar5 = (this->Triggers).AllocatorInstance.Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    (this->Triggers).AllocatorInstance.Data = (param_1->Triggers).AllocatorInstance.Data;
    (param_1->Triggers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->Triggers).ArrayNum = (param_1->Triggers).ArrayNum;
    (this->Triggers).ArrayMax = (param_1->Triggers).ArrayMax;
    (param_1->Triggers).ArrayNum = 0;
    (param_1->Triggers).ArrayMax = 0;
  }
  pTVar1 = &param_1->Modifiers;
  pTVar2 = &this->Modifiers;
  if (pTVar2 != pTVar1) {
    pFVar5 = (pTVar2->AllocatorInstance).Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->Modifiers).ArrayNum = (param_1->Modifiers).ArrayNum;
    (this->Modifiers).ArrayMax = (param_1->Modifiers).ArrayMax;
    (param_1->Modifiers).ArrayNum = 0;
    (param_1->Modifiers).ArrayMax = 0;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar6 = (param_1->Action).field0_0x0.DebugPtr, pUVar6 != (UInputAction *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  pTVar3 = &(param_1->Key).KeyDetails;
  (this->Action).field0_0x0 = (param_1->Action).field0_0x0;
  pTVar4 = &(this->Key).KeyDetails;
  (this->Key).KeyName = (param_1->Key).KeyName;
  if (pTVar4 != pTVar3) {
    pTVar4->Object = pTVar3->Object;
    pTVar3->Object = (FKeyDetails *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->Key).KeyDetails.SharedReferenceCount,
               &(param_1->Key).KeyDetails.SharedReferenceCount);
  }
  bVar8 = (this->bShouldBeIgnored ^ param_1->bShouldBeIgnored) & 1 ^ this->field_0x40;
  this->field_0x40 = bVar8;
  this->field_0x40 = (bVar8 ^ param_1->field_0x40) & 2 ^ bVar8;
  this->SettingBehavior = param_1->SettingBehavior;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar7 = (param_1->PlayerMappableKeySettings).field0_0x0.DebugPtr,
     pUVar7 != (UPlayerMappableKeySettings *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  (this->PlayerMappableKeySettings).field0_0x0 = (param_1->PlayerMappableKeySettings).field0_0x0;
  return this;
}

// operator= @ 14a6d0910

FEnhancedActionKeyMapping * __thiscall
FEnhancedActionKeyMapping::operator=
          (FEnhancedActionKeyMapping *this,FEnhancedActionKeyMapping *param_1)

{
  UInputAction *pUVar1;
  TReferenceControllerBase<1> *pTVar2;
  FKeyDetails *pFVar3;
  UPlayerMappableKeySettings *pUVar4;
  TReferenceControllerBase<1> *pTVar5;
  byte bVar6;
  
  TArray<TObjectPtr<UInputTrigger>,TSizedDefaultAllocator<32>_>::operator=
            (&this->Triggers,&param_1->Triggers);
  TArray<TObjectPtr<UInputModifier>,TSizedDefaultAllocator<32>_>::operator=
            (&this->Modifiers,&param_1->Modifiers);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 = (param_1->Action).field0_0x0.DebugPtr, pUVar1 != (UInputAction *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->Action).field0_0x0 = (param_1->Action).field0_0x0;
  (this->Key).KeyName = (param_1->Key).KeyName;
  pTVar2 = (param_1->Key).KeyDetails.SharedReferenceCount.ReferenceController;
  pFVar3 = (param_1->Key).KeyDetails.Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = (this->Key).KeyDetails.SharedReferenceCount.ReferenceController;
  (this->Key).KeyDetails.Object = pFVar3;
  (this->Key).KeyDetails.SharedReferenceCount.ReferenceController = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  bVar6 = (this->bShouldBeIgnored ^ param_1->bShouldBeIgnored) & 1 ^ this->field_0x40;
  this->field_0x40 = bVar6;
  this->field_0x40 = (bVar6 ^ param_1->field_0x40) & 2 ^ bVar6;
  this->SettingBehavior = param_1->SettingBehavior;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar4 = (param_1->PlayerMappableKeySettings).field0_0x0.DebugPtr,
     pUVar4 != (UPlayerMappableKeySettings *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  (this->PlayerMappableKeySettings).field0_0x0 = (param_1->PlayerMappableKeySettings).field0_0x0;
  return this;
}

// operator== @ 14a6d0de0

bool __thiscall
FEnhancedActionKeyMapping::operator==
          (FEnhancedActionKeyMapping *this,FEnhancedActionKeyMapping *param_1)

{
  int iVar1;
  bool bVar2;
  
  if ((((this->Action).field0_0x0.DebugPtr == (param_1->Action).field0_0x0.DebugPtr) &&
      ((this->Key).KeyName == (param_1->Key).KeyName)) &&
     (iVar1 = (this->Triggers).ArrayNum, iVar1 == (param_1->Triggers).ArrayNum)) {
    bVar2 = CompareItems<TObjectPtr<UInputTrigger>,int>
                      ((TObjectPtr<UInputTrigger> *)(this->Triggers).AllocatorInstance.Data,
                       (TObjectPtr<UInputTrigger> *)(param_1->Triggers).AllocatorInstance.Data,iVar1
                      );
    if ((bVar2) && (iVar1 = (this->Modifiers).ArrayNum, iVar1 == (param_1->Modifiers).ArrayNum)) {
      bVar2 = CompareItems<TObjectPtr<UInputModifier>,int>
                        ((TObjectPtr<UInputModifier> *)(this->Modifiers).AllocatorInstance.Data,
                         (TObjectPtr<UInputModifier> *)(param_1->Modifiers).AllocatorInstance.Data,
                         iVar1);
      if (bVar2) {
        return true;
      }
    }
  }
  return false;
}

// GetDisplayCategory @ 14a6df200

FText * __thiscall FEnhancedActionKeyMapping::GetDisplayCategory(FEnhancedActionKeyMapping *this)

{
  UPlayerMappableKeySettings *pUVar1;
  FText *pFVar2;
  
  pUVar1 = GetPlayerMappableKeySettings(this);
  if (pUVar1 != (UPlayerMappableKeySettings *)0x0) {
    return &pUVar1->DisplayCategory;
  }
  pFVar2 = FText::GetEmpty();
  return pFVar2;
}

// GetDisplayName @ 14a6df240

FText * __thiscall FEnhancedActionKeyMapping::GetDisplayName(FEnhancedActionKeyMapping *this)

{
  UPlayerMappableKeySettings *pUVar1;
  FText *pFVar2;
  
  pUVar1 = GetPlayerMappableKeySettings(this);
  if (pUVar1 != (UPlayerMappableKeySettings *)0x0) {
    return &pUVar1->DisplayName;
  }
  pFVar2 = FText::GetEmpty();
  return pFVar2;
}

// GetMappingName @ 14a6dfbf0

FName __thiscall FEnhancedActionKeyMapping::GetMappingName(FEnhancedActionKeyMapping *this)

{
  UPlayerMappableKeySettings *pUVar1;
  FName in_RDX;
  
  pUVar1 = GetPlayerMappableKeySettings(this);
  if (pUVar1 != (UPlayerMappableKeySettings *)0x0) {
    pUVar1 = GetPlayerMappableKeySettings(this);
    if (pUVar1 != (UPlayerMappableKeySettings *)0x0) {
      (**(code **)(pUVar1->_padding_ + 0x2b0))(pUVar1);
      return in_RDX;
    }
  }
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// GetPlayerMappableKeySettings @ 14a6e0380

UPlayerMappableKeySettings * __thiscall
FEnhancedActionKeyMapping::GetPlayerMappableKeySettings(FEnhancedActionKeyMapping *this)

{
  UInputAction *pUVar1;
  UPlayerMappableKeySettings *pUVar2;
  
  if (this->SettingBehavior != InheritSettingsFromAction) {
    if (this->SettingBehavior != OverrideSettings) {
      return (UPlayerMappableKeySettings *)0x0;
    }
    return (this->PlayerMappableKeySettings).field0_0x0.DebugPtr;
  }
  pUVar1 = (this->Action).field0_0x0.DebugPtr;
  pUVar2 = (UPlayerMappableKeySettings *)0x0;
  if (((pUVar1 != (UInputAction *)0x0) &&
      (pUVar2 = (pUVar1->PlayerMappableKeySettings).field0_0x0.DebugPtr,
      UE::GC::GIsIncrementalReachabilityPending)) && (pUVar2 != (UPlayerMappableKeySettings *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
    return pUVar2;
  }
  return pUVar2;
}

// IsPlayerMappable @ 14a6e5ba0

bool __thiscall FEnhancedActionKeyMapping::IsPlayerMappable(FEnhancedActionKeyMapping *this)

{
  UPlayerMappableKeySettings *pUVar1;
  
  pUVar1 = GetPlayerMappableKeySettings(this);
  return pUVar1 != (UPlayerMappableKeySettings *)0x0;
}

