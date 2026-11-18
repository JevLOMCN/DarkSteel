// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 6

// StaticStruct @ 149a16cd0

UScriptStruct * __cdecl FPCGActorSelectorSettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPCGActorSelectorSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UScriptStruct_FPCGActorSelectorSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPCGActorSelectorSettings,(UObject *)pUVar1,
                         L"PCGActorSelectorSettings");
  }
  return Z_Registration_Info_UScriptStruct_FPCGActorSelectorSettings.OuterSingleton;
}

// FPCGActorSelectorSettings @ 149acf8b0

FPCGActorSelectorSettings * __thiscall
FPCGActorSelectorSettings::FPCGActorSelectorSettings(FPCGActorSelectorSettings *this)

{
  this->ActorFilter = Self;
  this->bMustOverlapSelf = false;
  this->bIncludeChildren = false;
  this->bDisableFilter = false;
  (this->ActorSelectionTag).ComparisonIndex = 0;
  (this->ActorSelectionTag).Number = 0;
  (this->ActorSelectionClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  this->ActorSelection = ByTag;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
            (&this->ActorReferenceSelector);
  this->bSelectMultiple = false;
  this->bIgnoreSelfAndChildren = false;
  this->bShowActorFilter = true;
  this->bShowIncludeChildren = true;
  this->bShowActorSelection = true;
  this->bShowActorSelectionClass = true;
  this->bShowSelectMultiple = true;
  this->bShowIgnoreSelfAndChildren = true;
  (this->ActorSelectionTagString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActorSelectionTagString).Data.ArrayNum = 0;
  (this->ActorSelectionTagString).Data.ArrayMax = 0;
  this->bTagContainsWildcards = false;
  this->bHasPreparedTag = false;
  return this;
}

// GetAssociatedKey @ 149b14fe0

FPCGSelectionKey * __thiscall
FPCGActorSelectorSettings::GetAssociatedKey
          (FPCGActorSelectorSettings *this,FPCGSelectionKey *__return_storage_ptr__)

{
  EPCGActorFilter EVar1;
  UClass *pUVar2;
  FName FVar3;
  
  EVar1 = this->ActorFilter;
  if (EVar1 == AllWorldActors) {
    if (this->ActorSelection == ByTag) {
      FVar3 = this->ActorSelectionTag;
      __return_storage_ptr__->ActorFilter = AllWorldActors;
      __return_storage_ptr__->Selection = Unknown;
      (__return_storage_ptr__->Tag).ComparisonIndex = 0;
      (__return_storage_ptr__->Tag).Number = 0;
      (__return_storage_ptr__->SelectionClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
      (__return_storage_ptr__->ObjectPath).AssetPath.PackageName.ComparisonIndex = 0;
      (__return_storage_ptr__->ObjectPath).AssetPath.PackageName.Number = 0;
      (__return_storage_ptr__->ObjectPath).AssetPath.AssetName.ComparisonIndex = 0;
      (__return_storage_ptr__->ObjectPath).AssetPath.AssetName.Number = 0;
      (__return_storage_ptr__->ObjectPath).SubPathString.Data.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->ObjectPath).SubPathString.Data.ArrayNum = 0;
      (__return_storage_ptr__->ObjectPath).SubPathString.Data.ArrayMax = 0;
      (__return_storage_ptr__->OptionalExtraDependency).field0_0x0.DebugPtr = (UClass *)0x0;
      FInstancedStruct::FInstancedStruct(&(__return_storage_ptr__->CustomKey).InstancedStruct);
      (__return_storage_ptr__->CachedTagString).Data.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->CachedTagString).Data.ArrayNum = 0;
      (__return_storage_ptr__->CachedTagString).Data.ArrayMax = 0;
      __return_storage_ptr__->bTagContainsWildcard = false;
      __return_storage_ptr__->ActorFilter = AllWorldActors;
      __return_storage_ptr__->Selection = ByTag;
      __return_storage_ptr__->Tag = FVar3;
      PCGActorSelector::PrepareTag
                (true,FVar3,&__return_storage_ptr__->bTagContainsWildcard,
                 &__return_storage_ptr__->CachedTagString);
      return __return_storage_ptr__;
    }
    if (this->ActorSelection == ByClass) {
      pUVar2 = (this->ActorSelectionClass).Class.field0_0x0.DebugPtr;
      if ((UE::GC::GIsIncrementalReachabilityPending) && (pUVar2 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar2);
      }
      __return_storage_ptr__->ActorFilter = AllWorldActors;
      __return_storage_ptr__->Selection = Unknown;
      (__return_storage_ptr__->Tag).ComparisonIndex = 0;
      (__return_storage_ptr__->Tag).Number = 0;
      (__return_storage_ptr__->SelectionClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
      (__return_storage_ptr__->ObjectPath).AssetPath.PackageName.ComparisonIndex = 0;
      (__return_storage_ptr__->ObjectPath).AssetPath.PackageName.Number = 0;
      (__return_storage_ptr__->ObjectPath).AssetPath.AssetName.ComparisonIndex = 0;
      (__return_storage_ptr__->ObjectPath).AssetPath.AssetName.Number = 0;
      (__return_storage_ptr__->ObjectPath).SubPathString.Data.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->ObjectPath).SubPathString.Data.ArrayNum = 0;
      (__return_storage_ptr__->ObjectPath).SubPathString.Data.ArrayMax = 0;
      (__return_storage_ptr__->OptionalExtraDependency).field0_0x0.DebugPtr = (UClass *)0x0;
      FInstancedStruct::FInstancedStruct(&(__return_storage_ptr__->CustomKey).InstancedStruct);
      (__return_storage_ptr__->CachedTagString).Data.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->CachedTagString).Data.ArrayNum = 0;
      (__return_storage_ptr__->CachedTagString).Data.ArrayMax = 0;
      __return_storage_ptr__->bTagContainsWildcard = false;
      __return_storage_ptr__->Selection = ByClass;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar2);
      }
      (__return_storage_ptr__->SelectionClass).Class.field0_0x0.DebugPtr = pUVar2;
      __return_storage_ptr__->ActorFilter = AllWorldActors;
      return __return_storage_ptr__;
    }
  }
  else if (EVar1 != FromInput) {
    __return_storage_ptr__->ActorFilter = AllWorldActors;
    __return_storage_ptr__->Selection = Unknown;
    (__return_storage_ptr__->Tag).ComparisonIndex = 0;
    (__return_storage_ptr__->Tag).Number = 0;
    (__return_storage_ptr__->SelectionClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
    (__return_storage_ptr__->ObjectPath).AssetPath.PackageName.ComparisonIndex = 0;
    (__return_storage_ptr__->ObjectPath).AssetPath.PackageName.Number = 0;
    (__return_storage_ptr__->ObjectPath).AssetPath.AssetName.ComparisonIndex = 0;
    (__return_storage_ptr__->ObjectPath).AssetPath.AssetName.Number = 0;
    (__return_storage_ptr__->ObjectPath).SubPathString.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->ObjectPath).SubPathString.Data.ArrayNum = 0;
    (__return_storage_ptr__->ObjectPath).SubPathString.Data.ArrayMax = 0;
    (__return_storage_ptr__->OptionalExtraDependency).field0_0x0.DebugPtr = (UClass *)0x0;
    FInstancedStruct::FInstancedStruct(&(__return_storage_ptr__->CustomKey).InstancedStruct);
    (__return_storage_ptr__->CachedTagString).Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->CachedTagString).Data.ArrayNum = 0;
    (__return_storage_ptr__->CachedTagString).Data.ArrayMax = 0;
    __return_storage_ptr__->ActorFilter = EVar1;
    __return_storage_ptr__->bTagContainsWildcard = false;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->ActorFilter = Self;
  __return_storage_ptr__->Selection = ByTag;
  *(undefined2 *)&__return_storage_ptr__->field_0x2 = 0;
  (__return_storage_ptr__->Tag).ComparisonIndex = 0;
  *(undefined8 *)&(__return_storage_ptr__->Tag).Number = 0;
  (__return_storage_ptr__->SelectionClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (__return_storage_ptr__->ObjectPath).AssetPath.PackageName.ComparisonIndex = 0;
  (__return_storage_ptr__->ObjectPath).AssetPath.PackageName.Number = 0;
  (__return_storage_ptr__->ObjectPath).AssetPath.AssetName.ComparisonIndex = 0;
  (__return_storage_ptr__->ObjectPath).AssetPath.AssetName.Number = 0;
  (__return_storage_ptr__->ObjectPath).SubPathString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->ObjectPath).SubPathString.Data.ArrayNum = 0;
  (__return_storage_ptr__->ObjectPath).SubPathString.Data.ArrayMax = 0;
  (__return_storage_ptr__->OptionalExtraDependency).field0_0x0.DebugPtr = (UClass *)0x0;
  (__return_storage_ptr__->CustomKey).InstancedStruct.ScriptStruct.field0_0x0.DebugPtr =
       (UScriptStruct *)0x0;
  (__return_storage_ptr__->CustomKey).InstancedStruct.StructMemory = (uchar *)0x0;
  (__return_storage_ptr__->CachedTagString).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->CachedTagString).Data.ArrayNum = 0;
  (__return_storage_ptr__->CachedTagString).Data.ArrayMax = 0;
  *(undefined8 *)&__return_storage_ptr__->bTagContainsWildcard = 0;
  __return_storage_ptr__->CachedObject = (UObject *)0x0;
  FPCGSelectionKey::FPCGSelectionKey(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// MatchesTag @ 149b1f3c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
FPCGActorSelectorSettings::MatchesTag(FPCGActorSelectorSettings *this,AActor *param_1)

{
  FName *pFVar1;
  bool bVar2;
  FName *pFVar3;
  
  if (this->bHasPreparedTag == false) {
    PCGActorSelector::PrepareTag
              (this->ActorSelection == ByTag,this->ActorSelectionTag,&this->bTagContainsWildcards,
               &this->ActorSelectionTagString);
    this->bHasPreparedTag = true;
  }
  if (this->bTagContainsWildcards == false) {
    pFVar3 = (FName *)(param_1->Tags).AllocatorInstance.Data;
    pFVar1 = pFVar3 + (param_1->Tags).ArrayNum;
    if (pFVar3 != pFVar1) {
      do {
        if (*pFVar3 == this->ActorSelectionTag) {
          return true;
        }
        pFVar3 = pFVar3 + 1;
      } while (pFVar3 != pFVar1);
    }
    bVar2 = false;
  }
  else {
    bVar2 = Algo::
            NoneOf<TArray<FName,TSizedDefaultAllocator<32>_>,_PCGActorSelector::TagListMatchesTag<TArray<FName,TSizedDefaultAllocator<32>_>_>_::__l5::<lambda_1>_>
                      (&param_1->Tags,(<lambda_1>)&this->ActorSelectionTagString);
    bVar2 = !bVar2;
  }
  return bVar2;
}

// PrepareForFiltering @ 149b22650

void __thiscall
FPCGActorSelectorSettings::PrepareForFiltering(FPCGActorSelectorSettings *this,bool param_1)

{
  if ((param_1) || (this->bHasPreparedTag == false)) {
    PCGActorSelector::PrepareTag
              (this->ActorSelection == ByTag,this->ActorSelectionTag,&this->bTagContainsWildcards,
               &this->ActorSelectionTagString);
    this->bHasPreparedTag = true;
  }
  return;
}

// ReconstructFromKey @ 149b23b50

FPCGActorSelectorSettings * __cdecl
FPCGActorSelectorSettings::ReconstructFromKey
          (FPCGActorSelectorSettings *__return_storage_ptr__,FPCGSelectionKey *param_1)

{
  EPCGActorFilter EVar1;
  EPCGActorSelection EVar2;
  int iVar3;
  FName FVar4;
  bool bVar5;
  UClass *pUVar6;
  UClass *pUVar7;
  UClass *pUVar8;
  UClass *pUVar9;
  FPCGAttributePropertySelector FStack_70;
  undefined8 uStack_30;
  FString local_28;
  undefined8 local_18;
  
  pUVar8 = (param_1->SelectionClass).Class.field0_0x0.DebugPtr;
  pUVar9 = (UClass *)0x0;
  if ((pUVar8 != (UClass *)0x0) &&
     (pUVar6 = Z_Construct_UClass_UObject_NoRegister(), pUVar6 != (UClass *)0x0)) {
    iVar3 = (int)pUVar6->_padding_;
    if (((int)pUVar8->_padding_ < iVar3) ||
       ((longlong *)*(undefined1 **)(pUVar8->_padding_ + (longlong)iVar3 * 8) != &pUVar6->_padding_)
       ) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if ((bVar5) &&
       (pUVar8 = (param_1->SelectionClass).Class.field0_0x0.DebugPtr, pUVar8 != (UClass *)0x0)) {
      pUVar7 = Z_Construct_UClass_UObject_NoRegister();
      pUVar6 = pUVar9;
      if (pUVar7 != (UClass *)0x0) {
        iVar3 = (int)pUVar7->_padding_;
        if (((int)pUVar8->_padding_ < iVar3) ||
           ((longlong *)*(undefined1 **)(pUVar8->_padding_ + (longlong)iVar3 * 8) !=
            &pUVar7->_padding_)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if (bVar5) {
          pUVar6 = (param_1->SelectionClass).Class.field0_0x0.DebugPtr;
        }
      }
      pUVar8 = Z_Construct_UClass_AActor_NoRegister();
      if (pUVar8 != (UClass *)0x0) {
        iVar3 = (int)pUVar8->_padding_;
        if (((int)pUVar6->_padding_ < iVar3) ||
           ((longlong *)*(undefined1 **)(pUVar6->_padding_ + (longlong)iVar3 * 8) !=
            &pUVar8->_padding_)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if (bVar5) goto LAB_149b23c60;
      }
      __return_storage_ptr__->ActorFilter = Self;
      __return_storage_ptr__->bMustOverlapSelf = false;
      __return_storage_ptr__->bIncludeChildren = false;
      __return_storage_ptr__->bDisableFilter = false;
      __return_storage_ptr__->ActorSelection = ByTag;
      *(undefined3 *)&__return_storage_ptr__->field_0x5 = 0;
      (__return_storage_ptr__->ActorSelectionTag).ComparisonIndex = 0;
      (__return_storage_ptr__->ActorSelectionTag).Number = 0;
      (__return_storage_ptr__->ActorSelectionClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
      *(undefined8 *)&__return_storage_ptr__->ActorReferenceSelector = 0;
      *(undefined8 *)&(__return_storage_ptr__->ActorReferenceSelector).field_0x8 = 0;
      *(undefined8 *)&(__return_storage_ptr__->ActorReferenceSelector).field_0x10 = 0;
      *(undefined8 *)&(__return_storage_ptr__->ActorReferenceSelector).field_0x18 = 0;
      *(undefined8 *)&(__return_storage_ptr__->ActorReferenceSelector).field_0x20 = 0;
      *(undefined8 *)&(__return_storage_ptr__->ActorReferenceSelector).field_0x28 = 0;
      *(undefined8 *)&(__return_storage_ptr__->ActorReferenceSelector).field_0x30 = 0;
      *(undefined8 *)&(__return_storage_ptr__->ActorReferenceSelector).field_0x38 = 0;
      __return_storage_ptr__->bSelectMultiple = false;
      __return_storage_ptr__->bIgnoreSelfAndChildren = false;
      __return_storage_ptr__->bShowActorFilter = false;
      __return_storage_ptr__->bShowIncludeChildren = false;
      __return_storage_ptr__->bShowActorSelection = false;
      __return_storage_ptr__->bShowActorSelectionClass = false;
      __return_storage_ptr__->bShowSelectMultiple = false;
      __return_storage_ptr__->bShowIgnoreSelfAndChildren = false;
      (__return_storage_ptr__->ActorSelectionTagString).Data.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->ActorSelectionTagString).Data.ArrayNum = 0;
      (__return_storage_ptr__->ActorSelectionTagString).Data.ArrayMax = 0;
      __return_storage_ptr__->bTagContainsWildcards = false;
      __return_storage_ptr__->bHasPreparedTag = false;
      *(undefined6 *)&__return_storage_ptr__->field_0x72 = 0;
      FPCGActorSelectorSettings(__return_storage_ptr__);
      return __return_storage_ptr__;
    }
  }
LAB_149b23c60:
  local_18 = 0;
  FStack_70._padding_ = 0;
  FStack_70.Selection = Attribute;
  FStack_70.DomainName.ComparisonIndex.Value = 0;
  FStack_70.DomainName.Number = 0;
  FStack_70.AttributeName.ComparisonIndex.Value = 0;
  FStack_70.AttributeName.Number = 0;
  FStack_70.PropertyName.ComparisonIndex.Value = 0;
  FStack_70.PropertyName.Number = 0;
  FStack_70._36_4_ = 0;
  FStack_70.ExtraNames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_70.ExtraNames.ArrayNum = 0;
  FStack_70.ExtraNames.ArrayMax = 0;
  FStack_70.ExtraProperty = Index;
  FStack_70._57_7_ = 0;
  uStack_30 = 0;
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
            ((FPCGAttributePropertyInputSelector *)&FStack_70);
  EVar1 = param_1->ActorFilter;
  pUVar8 = (param_1->SelectionClass).Class.field0_0x0.DebugPtr;
  EVar2 = param_1->Selection;
  FVar4 = param_1->Tag;
  uStack_30 = 0x101010101010000;
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  local_18 = local_18 & 0xffffffffffff0000;
  if ((pUVar8 != (UClass *)0x0) &&
     (pUVar6 = Z_Construct_UClass_UObject_NoRegister(), pUVar6 != (UClass *)0x0)) {
    iVar3 = (int)pUVar6->_padding_;
    if (((int)pUVar8->_padding_ < iVar3) ||
       ((longlong *)*(undefined1 **)(pUVar8->_padding_ + (longlong)iVar3 * 8) != &pUVar6->_padding_)
       ) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) {
      pUVar9 = (param_1->SelectionClass).Class.field0_0x0.DebugPtr;
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar9);
  }
  if (local_18._1_1_ == '\0') {
    PCGActorSelector::PrepareTag(EVar2 == ByTag,FVar4,(bool *)&local_18,&local_28);
    local_18._0_2_ = CONCAT11(1,local_18._0_1_);
  }
  __return_storage_ptr__->ActorFilter = EVar1;
  __return_storage_ptr__->bMustOverlapSelf = false;
  __return_storage_ptr__->bIncludeChildren = false;
  __return_storage_ptr__->bDisableFilter = false;
  __return_storage_ptr__->ActorSelection = EVar2;
  __return_storage_ptr__->ActorSelectionTag = FVar4;
  (__return_storage_ptr__->ActorSelectionClass).Class.field0_0x0.DebugPtr = pUVar9;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar9);
  }
  FPCGAttributePropertySelector::FPCGAttributePropertySelector
            ((FPCGAttributePropertySelector *)&__return_storage_ptr__->ActorReferenceSelector,
             &FStack_70);
  *(undefined ***)&__return_storage_ptr__->ActorReferenceSelector =
       &___7FPCGAttributePropertyInputSelector__6B_;
  __return_storage_ptr__->bSelectMultiple = uStack_30._0_1_;
  __return_storage_ptr__->bIgnoreSelfAndChildren = uStack_30._1_1_;
  __return_storage_ptr__->bShowActorFilter = uStack_30._2_1_;
  __return_storage_ptr__->bShowIncludeChildren = uStack_30._3_1_;
  __return_storage_ptr__->bShowActorSelection = uStack_30._4_1_;
  __return_storage_ptr__->bShowActorSelectionClass = uStack_30._5_1_;
  __return_storage_ptr__->bShowSelectMultiple = uStack_30._6_1_;
  __return_storage_ptr__->bShowIgnoreSelfAndChildren = uStack_30._7_1_;
  (__return_storage_ptr__->ActorSelectionTagString).Data.AllocatorInstance.Data =
       local_28.Data.AllocatorInstance.Data;
  (__return_storage_ptr__->ActorSelectionTagString).Data.ArrayNum = local_28.Data.ArrayNum;
  (__return_storage_ptr__->ActorSelectionTagString).Data.ArrayMax = local_28.Data.ArrayMax;
  __return_storage_ptr__->bTagContainsWildcards = local_18._0_1_;
  __return_storage_ptr__->bHasPreparedTag = (bool)local_18._1_1_;
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  DestructItems<FString,int>
            ((FString *)FStack_70.ExtraNames.AllocatorInstance.Data,FStack_70.ExtraNames.ArrayNum);
  if (FStack_70.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_70.ExtraNames.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

