// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 21

// StaticStruct @ 149a16b10

UScriptStruct * __cdecl FPCGSelectionKey::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPCGSelectionKey.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UScriptStruct_FPCGSelectionKey.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPCGSelectionKey,(UObject *)pUVar1,
                         L"PCGSelectionKey");
  }
  return Z_Registration_Info_UScriptStruct_FPCGSelectionKey.OuterSingleton;
}

// <lambda_invoker_cdecl> @ 149a18ec0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __cdecl
`FPCGSelectionKey::IsMatching'::__l8::<lambda_1>::<lambda_invoker_cdecl>(AActor *param_1)

{
  return true;
}

// <lambda_invoker_cdecl> @ 149a18ed0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __cdecl
`FPCGSelectionKey::IsMatching'::__l8::<lambda_2>::<lambda_invoker_cdecl>(AActor *param_1)

{
  return true;
}

// FPCGSelectionKey @ 149acfc30

FPCGSelectionKey * __thiscall
FPCGSelectionKey::FPCGSelectionKey(FPCGSelectionKey *this,FPCGActorSelectorSettings *param_1)

{
  EPCGActorFilter EVar1;
  EPCGActorSelection EVar2;
  UClass *pUVar3;
  code *pcVar4;
  bool bVar5;
  FPCGSelectionKey *pFVar6;
  
  this->ActorFilter = AllWorldActors;
  this->Selection = Unknown;
  (this->Tag).ComparisonIndex = 0;
  (this->Tag).Number = 0;
  (this->SelectionClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->ObjectPath).AssetPath.PackageName.ComparisonIndex = 0;
  (this->ObjectPath).AssetPath.PackageName.Number = 0;
  (this->ObjectPath).AssetPath.AssetName.ComparisonIndex = 0;
  (this->ObjectPath).AssetPath.AssetName.Number = 0;
  (this->ObjectPath).SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ObjectPath).SubPathString.Data.ArrayNum = 0;
  (this->ObjectPath).SubPathString.Data.ArrayMax = 0;
  (this->OptionalExtraDependency).field0_0x0.DebugPtr = (UClass *)0x0;
  FInstancedStruct::FInstancedStruct(&(this->CustomKey).InstancedStruct);
  (this->CachedTagString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedTagString).Data.ArrayNum = 0;
  (this->CachedTagString).Data.ArrayMax = 0;
  this->bTagContainsWildcard = false;
  if (param_1->ActorFilter == FromInput) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InActorSelector.ActorFilter != EPCGActorFilter::FromInput",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGActorSelector.cpp"
                       ,299,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar6 = (FPCGSelectionKey *)(*pcVar4)();
      return pFVar6;
    }
  }
  EVar1 = param_1->ActorFilter;
  this->ActorFilter = EVar1;
  if (EVar1 == AllWorldActors) {
    if ((param_1->ActorSelection != ByTag) && (param_1->ActorSelection != ByClass)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InActorSelector.ActorSelection == EPCGActorSelection::ByTag || InActorSelector.ActorSelection == EPCGActorSelection::ByClass"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGActorSelector.cpp"
                         ,0x12f,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar6 = (FPCGSelectionKey *)(*pcVar4)();
        return pFVar6;
      }
    }
    EVar2 = param_1->ActorSelection;
    this->Selection = EVar2;
    if (EVar2 == ByTag) {
      this->Tag = param_1->ActorSelectionTag;
      return this;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar3 = (param_1->ActorSelectionClass).Class.field0_0x0.DebugPtr, pUVar3 != (UClass *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    (this->SelectionClass).Class.field0_0x0 = (param_1->ActorSelectionClass).Class.field0_0x0;
  }
  return this;
}

// FPCGSelectionKey @ 149acfd50

FPCGSelectionKey * __thiscall
FPCGSelectionKey::FPCGSelectionKey(FPCGSelectionKey *this,TSubclassOf<UObject> param_1)

{
  this->ActorFilter = AllWorldActors;
  this->Selection = Unknown;
  (this->Tag).ComparisonIndex = 0;
  (this->Tag).Number = 0;
  (this->SelectionClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->ObjectPath).AssetPath.PackageName.ComparisonIndex = 0;
  (this->ObjectPath).AssetPath.PackageName.Number = 0;
  (this->ObjectPath).AssetPath.AssetName.ComparisonIndex = 0;
  (this->ObjectPath).AssetPath.AssetName.Number = 0;
  (this->ObjectPath).SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ObjectPath).SubPathString.Data.ArrayNum = 0;
  (this->ObjectPath).SubPathString.Data.ArrayMax = 0;
  (this->OptionalExtraDependency).field0_0x0.DebugPtr = (UClass *)0x0;
  FInstancedStruct::FInstancedStruct(&(this->CustomKey).InstancedStruct);
  (this->CachedTagString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedTagString).Data.ArrayNum = 0;
  (this->CachedTagString).Data.ArrayMax = 0;
  this->bTagContainsWildcard = false;
  this->Selection = ByClass;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (*(UObject **)param_1.Class.field0_0x0 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(*(UObject **)param_1.Class.field0_0x0);
  }
  (this->SelectionClass).Class.field0_0x0 = *(TObjectPtr<UClass>_u_0 *)param_1.Class.field0_0x0;
  this->ActorFilter = AllWorldActors;
  return this;
}

// FPCGSelectionKey @ 149acfde0

FPCGSelectionKey * __thiscall
FPCGSelectionKey::FPCGSelectionKey(FPCGSelectionKey *this,FName param_1)

{
  this->ActorFilter = AllWorldActors;
  this->Selection = Unknown;
  (this->Tag).ComparisonIndex = 0;
  (this->Tag).Number = 0;
  (this->SelectionClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->ObjectPath).AssetPath.PackageName.ComparisonIndex = 0;
  (this->ObjectPath).AssetPath.PackageName.Number = 0;
  (this->ObjectPath).AssetPath.AssetName.ComparisonIndex = 0;
  (this->ObjectPath).AssetPath.AssetName.Number = 0;
  (this->ObjectPath).SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ObjectPath).SubPathString.Data.ArrayNum = 0;
  (this->ObjectPath).SubPathString.Data.ArrayMax = 0;
  (this->OptionalExtraDependency).field0_0x0.DebugPtr = (UClass *)0x0;
  FInstancedStruct::FInstancedStruct(&(this->CustomKey).InstancedStruct);
  (this->CachedTagString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedTagString).Data.ArrayNum = 0;
  (this->CachedTagString).Data.ArrayMax = 0;
  this->ActorFilter = AllWorldActors;
  this->Selection = ByTag;
  this->Tag = param_1;
  this->bTagContainsWildcard = false;
  PCGActorSelector::PrepareTag(true,param_1,&this->bTagContainsWildcard,&this->CachedTagString);
  return this;
}

// FPCGSelectionKey @ 149acfe60

FPCGSelectionKey * __thiscall
FPCGSelectionKey::FPCGSelectionKey(FPCGSelectionKey *this,EPCGActorFilter param_1)

{
  code *pcVar1;
  bool bVar2;
  FPCGSelectionKey *pFVar3;
  
  this->ActorFilter = AllWorldActors;
  this->Selection = Unknown;
  (this->Tag).ComparisonIndex = 0;
  (this->Tag).Number = 0;
  (this->SelectionClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->ObjectPath).AssetPath.PackageName.ComparisonIndex = 0;
  (this->ObjectPath).AssetPath.PackageName.Number = 0;
  (this->ObjectPath).AssetPath.AssetName.ComparisonIndex = 0;
  (this->ObjectPath).AssetPath.AssetName.Number = 0;
  (this->ObjectPath).SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ObjectPath).SubPathString.Data.ArrayNum = 0;
  (this->ObjectPath).SubPathString.Data.ArrayMax = 0;
  (this->OptionalExtraDependency).field0_0x0.DebugPtr = (UClass *)0x0;
  FInstancedStruct::FInstancedStruct(&(this->CustomKey).InstancedStruct);
  (this->CachedTagString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedTagString).Data.ArrayNum = 0;
  (this->CachedTagString).Data.ArrayMax = 0;
  this->bTagContainsWildcard = false;
  if ((param_1 - AllWorldActors & 0xfd) == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InFilter != EPCGActorFilter::AllWorldActors && InFilter != EPCGActorFilter::FromInput"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGActorSelector.cpp"
                       ,0x13f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FPCGSelectionKey *)(*pcVar1)();
      return pFVar3;
    }
  }
  this->ActorFilter = param_1;
  return this;
}

// FPCGSelectionKey @ 149acff00

FPCGSelectionKey * __thiscall FPCGSelectionKey::FPCGSelectionKey(FPCGSelectionKey *this)

{
  this->ActorFilter = AllWorldActors;
  this->Selection = Unknown;
  (this->Tag).ComparisonIndex = 0;
  (this->Tag).Number = 0;
  (this->SelectionClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->ObjectPath).AssetPath.PackageName.ComparisonIndex = 0;
  (this->ObjectPath).AssetPath.PackageName.Number = 0;
  (this->ObjectPath).AssetPath.AssetName.ComparisonIndex = 0;
  (this->ObjectPath).AssetPath.AssetName.Number = 0;
  (this->ObjectPath).SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ObjectPath).SubPathString.Data.ArrayNum = 0;
  (this->ObjectPath).SubPathString.Data.ArrayMax = 0;
  (this->OptionalExtraDependency).field0_0x0.DebugPtr = (UClass *)0x0;
  FInstancedStruct::FInstancedStruct(&(this->CustomKey).InstancedStruct);
  (this->CachedTagString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedTagString).Data.ArrayNum = 0;
  (this->CachedTagString).Data.ArrayMax = 0;
  this->bTagContainsWildcard = false;
  return this;
}

// operator== @ 149ad4010

/* WARNING: Type propagation algorithm not settling */

bool __thiscall FPCGSelectionKey::operator==(FPCGSelectionKey *this,FPCGSelectionKey *param_1)

{
  EPCGActorSelection EVar1;
  int iVar2;
  uchar *puVar3;
  UScriptStruct *pUVar4;
  code *pcVar5;
  UClass *pUVar6;
  char cVar7;
  char cVar8;
  bool bVar9;
  undefined1 uVar10;
  FPCGCustomSelectionKey *pFVar11;
  FPCGCustomSelectionKey *pFVar12;
  longlong lVar13;
  longlong lVar14;
  UClass *pUVar15;
  UClass *pUVar16;
  UClass *pUVar17;
  
  if (((this->ActorFilter == param_1->ActorFilter) && (this->Selection == param_1->Selection)) &&
     ((this->OptionalExtraDependency).field0_0x0.DebugPtr ==
      (param_1->OptionalExtraDependency).field0_0x0.DebugPtr)) {
    puVar3 = (this->CustomKey).InstancedStruct.StructMemory;
    if ((puVar3 == (uchar *)0x0) ||
       ((this->CustomKey).InstancedStruct.ScriptStruct.field0_0x0.DebugPtr == (UScriptStruct *)0x0))
    {
      cVar8 = '\0';
    }
    else {
      cVar8 = '\x01';
    }
    if (((param_1->CustomKey).InstancedStruct.StructMemory == (uchar *)0x0) ||
       ((param_1->CustomKey).InstancedStruct.ScriptStruct.field0_0x0.DebugPtr ==
        (UScriptStruct *)0x0)) {
      cVar7 = '\0';
    }
    else {
      cVar7 = '\x01';
    }
    if (cVar8 == cVar7) {
      if ((puVar3 != (uchar *)0x0) &&
         (pUVar4 = (this->CustomKey).InstancedStruct.ScriptStruct.field0_0x0.DebugPtr,
         pUVar4 != (UScriptStruct *)0x0)) {
        pFVar11 = UE::StructUtils::GetStructRef<FPCGCustomSelectionKey>(pUVar4,puVar3);
        pFVar12 = UE::StructUtils::GetStructRef<FPCGCustomSelectionKey>
                            ((param_1->CustomKey).InstancedStruct.ScriptStruct.field0_0x0.DebugPtr,
                             (param_1->CustomKey).InstancedStruct.StructMemory);
        pcVar5 = *(code **)((longlong)*pFVar12 + 8);
        lVar13 = (**(code **)((longlong)*pFVar11 + 8))(pFVar11);
        lVar14 = (*pcVar5)(pFVar12);
        if (lVar13 != lVar14) {
          return false;
        }
        cVar8 = (**(code **)((longlong)*pFVar11 + 0x18))(pFVar11,pFVar12);
        if (cVar8 == '\0') {
          return false;
        }
      }
      EVar1 = this->Selection;
      if (EVar1 == ByTag) {
        return this->Tag == param_1->Tag;
      }
      if (EVar1 != ByName) {
        if (EVar1 == ByClass) {
          pUVar6 = (this->SelectionClass).Class.field0_0x0.DebugPtr;
          pUVar16 = (UClass *)0x0;
          pUVar17 = pUVar16;
          if ((pUVar6 != (UClass *)0x0) &&
             (pUVar15 = Z_Construct_UClass_UObject_NoRegister(), pUVar15 != (UClass *)0x0)) {
            iVar2 = (int)pUVar15->_padding_;
            if (((int)pUVar6->_padding_ < iVar2) ||
               ((longlong *)*(undefined1 **)(pUVar6->_padding_ + (longlong)iVar2 * 8) !=
                &pUVar15->_padding_)) {
              bVar9 = false;
            }
            else {
              bVar9 = true;
            }
            if (bVar9) {
              pUVar17 = (this->SelectionClass).Class.field0_0x0.DebugPtr;
            }
          }
          pUVar6 = (param_1->SelectionClass).Class.field0_0x0.DebugPtr;
          if ((pUVar6 != (UClass *)0x0) &&
             (pUVar15 = Z_Construct_UClass_UObject_NoRegister(), pUVar15 != (UClass *)0x0)) {
            iVar2 = (int)pUVar15->_padding_;
            if (((int)pUVar6->_padding_ < iVar2) ||
               ((longlong *)*(undefined1 **)(pUVar6->_padding_ + (longlong)iVar2 * 8) !=
                &pUVar15->_padding_)) {
              bVar9 = false;
            }
            else {
              bVar9 = true;
            }
            if (bVar9) {
              pUVar16 = (param_1->SelectionClass).Class.field0_0x0.DebugPtr;
            }
          }
          return pUVar17 == pUVar16;
        }
        if (EVar1 == ByPath) {
          bVar9 = FSoftObjectPath::operator==(&this->ObjectPath,&param_1->ObjectPath);
          return bVar9;
        }
        if ((EVar1 != Unknown) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("!\"Enclosing block should never be called\"",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGActorSelector.cpp"
                               ,0x25e,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          uVar10 = (*pcVar5)();
          return (bool)uVar10;
        }
      }
      return true;
    }
  }
  return false;
}

// CreateFromObjectPtr @ 149afd2b0

FPCGSelectionKey * __cdecl
FPCGSelectionKey::CreateFromObjectPtr(FPCGSelectionKey *__return_storage_ptr__,UObject *param_1)

{
  FUtf8String *pFVar1;
  FScriptContainerElement *pFVar2;
  FSoftObjectPath local_28;
  
  local_28.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_28.AssetPath.PackageName.Number = 0;
  local_28.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetPath.AssetName.Number = 0;
  local_28.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.SubPathString.Data.ArrayNum = 0;
  local_28.SubPathString.Data.ArrayMax = 0;
  FSoftObjectPath::SetPath(&local_28,param_1);
  __return_storage_ptr__->ActorFilter = Self;
  __return_storage_ptr__->Selection = ByTag;
  *(undefined2 *)&__return_storage_ptr__->field_0x2 = 0;
  (__return_storage_ptr__->Tag).ComparisonIndex = 0;
  *(undefined8 *)&(__return_storage_ptr__->Tag).Number = 0;
  pFVar1 = &(__return_storage_ptr__->ObjectPath).SubPathString;
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
  __return_storage_ptr__->ActorFilter = AllWorldActors;
  __return_storage_ptr__->Selection = Unknown;
  FInstancedStruct::FInstancedStruct(&(__return_storage_ptr__->CustomKey).InstancedStruct);
  (__return_storage_ptr__->CachedTagString).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->CachedTagString).Data.ArrayNum = 0;
  (__return_storage_ptr__->CachedTagString).Data.ArrayMax = 0;
  __return_storage_ptr__->bTagContainsWildcard = false;
  __return_storage_ptr__->Selection = ByPath;
  (__return_storage_ptr__->ObjectPath).AssetPath.PackageName = local_28.AssetPath.PackageName;
  (__return_storage_ptr__->ObjectPath).AssetPath.AssetName = local_28.AssetPath.AssetName;
  if (pFVar1 != &local_28.SubPathString) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = local_28.SubPathString.Data.AllocatorInstance.Data;
    (__return_storage_ptr__->ObjectPath).SubPathString.Data.ArrayNum =
         local_28.SubPathString.Data.ArrayNum;
    (__return_storage_ptr__->ObjectPath).SubPathString.Data.ArrayMax =
         local_28.SubPathString.Data.ArrayMax;
    local_28.SubPathString.Data.ArrayNum = 0;
    local_28.SubPathString.Data.ArrayMax = 0;
    local_28.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  __return_storage_ptr__->ActorFilter = AllWorldActors;
  if (local_28.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.SubPathString.Data.AllocatorInstance.Data);
  }
  __return_storage_ptr__->CachedObject = param_1;
  return __return_storage_ptr__;
}

// CreateFromPath @ 149afd3a0

FPCGSelectionKey * __cdecl
FPCGSelectionKey::CreateFromPath(FPCGSelectionKey *__return_storage_ptr__,FSoftObjectPath *param_1)

{
  FUtf8String *pFVar1;
  FScriptContainerElement *pFVar2;
  FName FVar3;
  FUtf8String *pFVar4;
  
  pFVar1 = &(__return_storage_ptr__->ObjectPath).SubPathString;
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
  __return_storage_ptr__->ActorFilter = AllWorldActors;
  __return_storage_ptr__->Selection = Unknown;
  FInstancedStruct::FInstancedStruct(&(__return_storage_ptr__->CustomKey).InstancedStruct);
  __return_storage_ptr__->Selection = ByPath;
  (__return_storage_ptr__->CachedTagString).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->CachedTagString).Data.ArrayNum = 0;
  (__return_storage_ptr__->CachedTagString).Data.ArrayMax = 0;
  __return_storage_ptr__->bTagContainsWildcard = false;
  FVar3 = (param_1->AssetPath).AssetName;
  pFVar4 = &param_1->SubPathString;
  (__return_storage_ptr__->ObjectPath).AssetPath.PackageName = (param_1->AssetPath).PackageName;
  (__return_storage_ptr__->ObjectPath).AssetPath.AssetName = FVar3;
  if (pFVar1 != pFVar4) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
    (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->ObjectPath).SubPathString.Data.ArrayNum =
         (param_1->SubPathString).Data.ArrayNum;
    (__return_storage_ptr__->ObjectPath).SubPathString.Data.ArrayMax =
         (param_1->SubPathString).Data.ArrayMax;
    (param_1->SubPathString).Data.ArrayNum = 0;
    (param_1->SubPathString).Data.ArrayMax = 0;
  }
  __return_storage_ptr__->ActorFilter = AllWorldActors;
  return __return_storage_ptr__;
}

// CreateFromPath @ 149afd460

FPCGSelectionKey * __cdecl
FPCGSelectionKey::CreateFromPath(FPCGSelectionKey *__return_storage_ptr__,FSoftObjectPath *param_1)

{
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
  __return_storage_ptr__->ActorFilter = AllWorldActors;
  __return_storage_ptr__->Selection = Unknown;
  FInstancedStruct::FInstancedStruct(&(__return_storage_ptr__->CustomKey).InstancedStruct);
  __return_storage_ptr__->Selection = ByPath;
  (__return_storage_ptr__->CachedTagString).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->CachedTagString).Data.ArrayNum = 0;
  (__return_storage_ptr__->CachedTagString).Data.ArrayMax = 0;
  __return_storage_ptr__->bTagContainsWildcard = false;
  FSoftObjectPath::operator=(&__return_storage_ptr__->ObjectPath,param_1);
  __return_storage_ptr__->ActorFilter = AllWorldActors;
  return __return_storage_ptr__;
}

// GetObjectFromPath @ 149b16870

UObject * __thiscall FPCGSelectionKey::GetObjectFromPath(FPCGSelectionKey *this)

{
  UObject *pUVar1;
  
  pUVar1 = this->CachedObject;
  if ((pUVar1 == (UObject *)0x0) && ((this->ObjectPath).AssetPath.PackageName != (FName)0x0)) {
    pUVar1 = FSoftObjectPath::ResolveObject(&this->ObjectPath);
    this->CachedObject = pUVar1;
  }
  return pUVar1;
}

// IsMatching @ 149b1d550

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
FPCGSelectionKey::IsMatching
          (FPCGSelectionKey *this,FPCGSelectionKey *param_1,
          TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *param_2,
          TSet<UPCGComponent_*,DefaultKeyFuncs<UPCGComponent_*,0>,FDefaultSetAllocator> *param_3,
          TSet<UPCGComponent_*,DefaultKeyFuncs<UPCGComponent_*,0>,FDefaultSetAllocator> *param_4)

{
  FScriptContainerElement *pFVar1;
  EPCGActorFilter EVar2;
  EPCGActorSelection EVar3;
  uchar *puVar4;
  UScriptStruct *pUVar5;
  code *pcVar6;
  FPCGCustomSelectionKey *pFVar7;
  FName FVar8;
  char cVar9;
  char cVar10;
  bool bVar11;
  undefined1 uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  AActor *this_00;
  UPCGComponent *pUVar16;
  longlong lVar17;
  longlong lVar18;
  UClass *pUVar19;
  AActor *pAVar20;
  UClass *pUVar21;
  UClass *pUVar22;
  ulonglong uVar23;
  ForElementType<FSetElementId> FVar24;
  ForElementType<FSetElementId> FVar25;
  ForAnyElementType FVar26;
  ForElementType<UActorComponent_*> FVar27;
  ForElementType<UActorComponent_*> FVar28;
  undefined1 auStackY_518 [32];
  bool local_4c8;
  TArray<AActor_*,TSizedDefaultAllocator<32>_> local_4c0;
  undefined1 local_4b0;
  undefined1 local_4af [7];
  AActor *local_4a8;
  FPCGCustomSelectionKey *local_4a0;
  UPCGComponent *local_498;
  TSet<UPCGComponent_*,DefaultKeyFuncs<UPCGComponent_*,0>,FDefaultSetAllocator> *local_490;
  UClass *local_488;
  UClass *local_480;
  UClass *local_478;
  ForElementType<UActorComponent_*> local_470;
  int local_268;
  uint local_264;
  TArray<UActorComponent_*,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>_> local_260;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_518;
  this_00 = (AActor *)param_1->CachedObject;
  local_490 = param_4;
  if (this_00 == (AActor *)0x0) {
    if ((param_1->ObjectPath).AssetPath.PackageName != (FName)0x0) {
      this_00 = (AActor *)FSoftObjectPath::ResolveObject(&param_1->ObjectPath);
      param_1->CachedObject = (UObject *)this_00;
    }
    if (this_00 == (AActor *)0x0) {
      return false;
    }
  }
  puVar4 = (this->CustomKey).InstancedStruct.StructMemory;
  if ((puVar4 == (uchar *)0x0) ||
     ((this->CustomKey).InstancedStruct.ScriptStruct.field0_0x0.DebugPtr == (UScriptStruct *)0x0)) {
    cVar10 = '\0';
  }
  else {
    cVar10 = '\x01';
  }
  if (((param_1->CustomKey).InstancedStruct.StructMemory == (uchar *)0x0) ||
     ((param_1->CustomKey).InstancedStruct.ScriptStruct.field0_0x0.DebugPtr == (UScriptStruct *)0x0)
     ) {
    cVar9 = '\0';
  }
  else {
    cVar9 = '\x01';
  }
  if (cVar10 != cVar9) {
    return false;
  }
  if ((puVar4 != (uchar *)0x0) &&
     (pUVar5 = (this->CustomKey).InstancedStruct.ScriptStruct.field0_0x0.DebugPtr,
     pUVar5 != (UScriptStruct *)0x0)) {
    pUVar16 = (UPCGComponent *)UE::StructUtils::GetStructRef<FPCGCustomSelectionKey>(pUVar5,puVar4);
    local_498 = pUVar16;
    local_4a0 = UE::StructUtils::GetStructRef<FPCGCustomSelectionKey>
                          ((param_1->CustomKey).InstancedStruct.ScriptStruct.field0_0x0.DebugPtr,
                           (param_1->CustomKey).InstancedStruct.StructMemory);
    pcVar6 = *(code **)(pUVar16->_padding_ + 8);
    lVar17 = (**(code **)((longlong)*local_4a0 + 8))(local_4a0);
    lVar18 = (*pcVar6)(local_498);
    if (lVar18 != lVar17) {
      return false;
    }
    cVar10 = (**(code **)(local_498->_padding_ + 0x10))(local_498,local_4a0);
    if (cVar10 == '\0') {
      return false;
    }
  }
  if (this->ActorFilter == AllWorldActors) {
    EVar3 = this->Selection;
    if (EVar3 == ByTag) {
      pUVar19 = Z_Construct_UClass_AActor_NoRegister();
      iVar13 = (int)pUVar19->_padding_;
      if ((*(int *)(this_00->_padding_ + 0x38) < iVar13) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar13 * 8) !=
          &pUVar19->_padding_)) {
        this_00 = (AActor *)0x0;
      }
      if (this->bTagContainsWildcard == false) {
        FVar8 = this->Tag;
        uVar14 = ::GetTypeHash(FVar8.ComparisonIndex.Value);
        if (*(int *)&(param_2->Elements).field_0x8 != *(int *)&(param_2->Elements).field_0x34) {
          FVar25 = (param_2->Hash).SecondaryData;
          if (FVar25 == (ForElementType<FSetElementId>)0x0) {
            FVar25 = (ForElementType<FSetElementId>)&param_2->Hash;
          }
          iVar13 = *(int *)((longlong)FVar25 +
                           (ulonglong)(param_2->HashSize - 1U & FVar8.Number + uVar14) * 4);
          if (iVar13 != -1) {
            do {
              if (*(FName *)(*(longlong *)&param_2->Elements + (longlong)iVar13 * 0x10) == FVar8)
              goto LAB_149b1dc7a;
              iVar13 = *(int *)(*(longlong *)&param_2->Elements + 8 + (longlong)iVar13 * 0x10);
            } while (iVar13 != -1);
          }
        }
        iVar13 = -1;
LAB_149b1dc7a:
        bVar11 = iVar13 != -1;
      }
      else {
        bVar11 = Algo::
                 NoneOf<TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,_PCGActorSelector::TagListMatchesTag<TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>_::__l5::<lambda_1>_>
                           (param_2,(<lambda_1>)&this->CachedTagString);
        bVar11 = !bVar11;
      }
      if ((!bVar11) &&
         ((this_00 == (AActor *)0x0 ||
          (bVar11 = PCGActorSelector::TagListMatchesTag<TArray<FName,TSizedDefaultAllocator<32>_>_>
                              (&this_00->Tags,&this->Tag,this->bTagContainsWildcard,
                               &this->CachedTagString), !bVar11)))) {
        return false;
      }
      bVar11 = true;
      goto LAB_149b1dcb0;
    }
    if (EVar3 == ByClass) {
      pUVar19 = (this->SelectionClass).Class.field0_0x0.DebugPtr;
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
        if (pUVar19 != (UClass *)0x0) goto LAB_149b1db79;
LAB_149b1dba7:
        pUVar19 = (UClass *)0x0;
      }
      else {
        if (pUVar19 == (UClass *)0x0) goto LAB_149b1dba7;
        UE::GC::MarkAsReachable((UObject *)pUVar19);
LAB_149b1db79:
        pUVar21 = Z_Construct_UClass_UObject_NoRegister();
        if (pUVar21 == (UClass *)0x0) goto LAB_149b1dba7;
        iVar13 = (int)pUVar21->_padding_;
        if (((int)pUVar19->_padding_ < iVar13) ||
           ((longlong *)*(undefined1 **)(pUVar19->_padding_ + (longlong)iVar13 * 8) !=
            &pUVar21->_padding_)) {
          bVar11 = false;
        }
        else {
          bVar11 = true;
        }
        if (!bVar11) goto LAB_149b1dba7;
      }
      iVar13 = (int)pUVar19->_padding_;
      if ((*(int *)(this_00->_padding_ + 0x38) < iVar13) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar13 * 8) !=
          &pUVar19->_padding_)) {
        bVar11 = false;
      }
      else {
        bVar11 = true;
      }
    }
    else {
      if (EVar3 != ByPath) {
        return false;
      }
      bVar11 = FSoftObjectPath::operator==(&param_1->ObjectPath,&this->ObjectPath);
    }
    if (bVar11 == false) {
      return false;
    }
LAB_149b1dcb0:
    if (local_490 !=
        (TSet<UPCGComponent_*,DefaultKeyFuncs<UPCGComponent_*,0>,FDefaultSetAllocator> *)0x0) {
      TSet<UPCGComponent_*,DefaultKeyFuncs<UPCGComponent_*,0>,FDefaultSetAllocator>::
      Append<FDefaultSetAllocator>(local_490,param_3);
      return bVar11;
    }
    return bVar11;
  }
  local_4c8 = false;
  pUVar19 = Z_Construct_UClass_AActor_NoRegister();
  iVar13 = (int)pUVar19->_padding_;
  if (*(int *)(this_00->_padding_ + 0x38) < iVar13) {
    return false;
  }
  if ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar13 * 8)
      != &pUVar19->_padding_) {
    return false;
  }
  EVar2 = this->ActorFilter;
  local_268 = 0;
  local_470.SecondaryData = (ForElementType<UActorComponent_*>)0x0;
  local_264 = 0x40;
  if ((EVar2 != Self) && (EVar2 != Original)) {
    if ((EVar2 == Parent) ||
       ((EVar2 == Root && (pAVar20 = AActor::GetParentActor(this_00), pAVar20 == (AActor *)0x0)))) {
      local_4c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_4c0.ArrayNum = 0;
      local_4c0.ArrayMax = 0;
      AActor::GetAllChildActors(this_00,&local_4c0,this->ActorFilter == Root);
      local_4a8 = this_00;
      if ((local_4c0.AllocatorInstance.Data <= (FScriptContainerElement *)&local_4a8) &&
         (((FScriptContainerElement *)&local_4a8 <
           local_4c0.AllocatorInstance.Data + (longlong)local_4c0.ArrayMax * 8 &&
          (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar11)))) {
        pcVar6 = (code *)swi(3);
        uVar12 = (*pcVar6)();
        return (bool)uVar12;
      }
      iVar13 = local_4c0.ArrayNum;
      if (local_4c0.ArrayNum == local_4c0.ArrayMax) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&local_4c0.AllocatorInstance,&local_4c0.ArrayMax);
      }
      iVar15 = iVar13 + 1;
      local_4c0.ArrayNum = iVar15;
      *(AActor **)(local_4c0.AllocatorInstance.Data + (longlong)iVar13 * 8) = local_4a8;
      uVar23 = (ulonglong)iVar15;
      local_260.AllocatorInstance.SecondaryData = (ForElementType<UActorComponent_*>)0x0;
      local_260.ArrayNum = 0;
      local_260.ArrayMax = 0x40;
      pFVar1 = local_4c0.AllocatorInstance.Data + uVar23 * 8;
      FVar26.Data = local_4c0.AllocatorInstance.Data;
      while( true ) {
        if ((int)uVar23 != iVar15) {
          `TCheckedPointerIterator<AActor_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&local_4b0);
        }
        if (FVar26.Data == pFVar1) break;
        local_488 = Z_Construct_UClass_UPCGComponent_NoRegister();
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_488 != (UClass *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_488);
        }
        AActor::
        GetComponents<TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>,UActorComponent>
                  (this_00,(TSubclassOf<UActorComponent>)&local_488,&local_260,false);
        lVar17 = (longlong)local_260.ArrayNum;
        if (local_260.ArrayNum != 0) {
          iVar13 = UE::Core::Private::
                   ReallocGrow<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<UActorComponent_*>_>
                             (8,8,local_260.ArrayNum,&local_470,&local_268,(int *)&local_264);
          FVar27 = (ForElementType<UActorComponent_*>)&local_260;
          if (local_260.AllocatorInstance.SecondaryData != (ForElementType<UActorComponent_*>)0x0) {
            FVar27 = local_260.AllocatorInstance.SecondaryData;
          }
          FVar28 = (ForElementType<UActorComponent_*>)&local_470;
          if (local_470.SecondaryData != (ForElementType<UActorComponent_*>)0x0) {
            FVar28 = local_470.SecondaryData;
          }
          memcpy((ulonglong *)((longlong)FVar28 + (longlong)iVar13 * 8),(void *)FVar27,lVar17 << 3);
        }
        uVar23 = local_4c0._8_8_ & 0xffffffff;
        FVar26.Data = FVar26.Data + 8;
      }
      if (local_260.AllocatorInstance.SecondaryData != (ForElementType<UActorComponent_*>)0x0) {
        FMemory::Free((void *)local_260.AllocatorInstance.SecondaryData);
      }
      if (local_4c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_4c0.AllocatorInstance.Data);
      }
    }
    goto LAB_149b1d9d5;
  }
  pUVar19 = Z_Construct_UClass_UPCGComponent_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar19 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar19);
  }
  if (0x7fffffff < local_264) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<UActorComponent_*>_>
              (8,8,0,&local_470,0,(int *)&local_264);
  }
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar19 != (UClass *)0x0) goto LAB_149b1d93a;
LAB_149b1d96b:
    pUVar21 = (UClass *)0x0;
  }
  else {
    if (pUVar19 == (UClass *)0x0) goto LAB_149b1d96b;
    UE::GC::MarkAsReachable((UObject *)pUVar19);
LAB_149b1d93a:
    pUVar21 = Z_Construct_UClass_UActorComponent_NoRegister();
    if (pUVar21 == (UClass *)0x0) goto LAB_149b1d96b;
    iVar13 = (int)pUVar21->_padding_;
    if (((int)pUVar19->_padding_ < iVar13) ||
       ((longlong *)*(undefined1 **)(pUVar19->_padding_ + (longlong)iVar13 * 8) !=
        &pUVar21->_padding_)) {
      bVar11 = false;
    }
    else {
      bVar11 = true;
    }
    pUVar21 = pUVar19;
    if (!bVar11) goto LAB_149b1d96b;
  }
  pUVar22 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar21 == pUVar22) {
    local_480 = pUVar19;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar19 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar19);
    }
    AActor::
    ForEachComponent_Internal<UActorComponent,1,0,_AActor::GetComponents<TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>,UActorComponent>_::__l2::<lambda_1>_>
              (this_00,(TSubclassOf<UActorComponent>)&local_480,
               (TArray<UActorComponent_*,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>_>
                *)&local_470);
  }
  else {
    local_478 = pUVar19;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar19 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar19);
    }
    AActor::
    ForEachComponent_Internal<UActorComponent,0,0,_AActor::GetComponents<TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>,UActorComponent>_::__l2::<lambda_1>_>
              (this_00,(TSubclassOf<UActorComponent>)&local_478,
               (TArray<UActorComponent_*,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>_>
                *)&local_470);
  }
LAB_149b1d9d5:
  iVar13 = local_268;
  FVar27 = (ForElementType<UActorComponent_*>)&local_470;
  if (local_470.SecondaryData != (ForElementType<UActorComponent_*>)0x0) {
    FVar27 = local_470.SecondaryData;
  }
  FVar28 = (ForElementType<UActorComponent_*>)((longlong)FVar27 + (longlong)local_268 * 8);
LAB_149b1d9f3:
  do {
    if (local_268 != iVar13) {
      `TCheckedPointerIterator<UActorComponent_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_4af);
    }
    bVar11 = local_4c8;
    if (FVar27 == FVar28) {
LAB_149b1db0c:
      if (local_470.SecondaryData != (ForElementType<UActorComponent_*>)0x0) {
        FMemory::Free((void *)local_470.SecondaryData);
        return bVar11;
      }
      return bVar11;
    }
    pFVar7 = *(FPCGCustomSelectionKey **)FVar27;
    if (pFVar7 != (FPCGCustomSelectionKey *)0x0) {
      pUVar19 = Z_Construct_UClass_UPCGComponent_NoRegister();
      iVar15 = (int)pUVar19->_padding_;
      if ((*(int *)((longlong)pFVar7[2] + 0x38) < iVar15) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)((longlong)pFVar7[2] + 0x30) + (longlong)iVar15 * 8) !=
          &pUVar19->_padding_)) goto LAB_149b1daf9;
      uVar14 = ((uint)((ulonglong)pFVar7 >> 0x14) & 0xffff ^ (uint)((ulonglong)pFVar7 >> 4)) *
               -0x7a143595;
      uVar14 = (uVar14 >> 0xd ^ uVar14) * -0x3d4d51cb;
      local_4a0 = pFVar7;
      if (*(int *)&(param_3->Elements).field_0x8 == *(int *)&(param_3->Elements).field_0x34)
      goto LAB_149b1dafe;
      FVar25 = (param_3->Hash).SecondaryData;
      FVar24 = (ForElementType<FSetElementId>)&param_3->Hash;
      if (FVar25 != (ForElementType<FSetElementId>)0x0) {
        FVar24 = FVar25;
      }
      iVar15 = *(int *)((longlong)FVar24 +
                       (ulonglong)(param_3->HashSize - 1U & (uVar14 >> 0x10 ^ uVar14)) * 4);
      if (iVar15 == -1) goto LAB_149b1dafe;
      do {
        if (*(FPCGCustomSelectionKey **)(*(longlong *)&param_3->Elements + (longlong)iVar15 * 0x10)
            == pFVar7) {
          local_4c8 = true;
          bVar11 = true;
          if (local_490 ==
              (TSet<UPCGComponent_*,DefaultKeyFuncs<UPCGComponent_*,0>,FDefaultSetAllocator> *)0x0)
          goto LAB_149b1db0c;
          TSet<UPCGComponent_*,DefaultKeyFuncs<UPCGComponent_*,0>,FDefaultSetAllocator>::
          Emplace<UPCGComponent_*_const_&>(local_490,&local_498,(bool *)&local_4a0);
          FVar27 = (ForElementType<UActorComponent_*>)((longlong)FVar27 + 8);
          goto LAB_149b1d9f3;
        }
        iVar15 = *(int *)(*(longlong *)&param_3->Elements + 8 + (longlong)iVar15 * 0x10);
      } while (iVar15 != -1);
      FVar27 = (ForElementType<UActorComponent_*>)((longlong)FVar27 + 8);
      goto LAB_149b1d9f3;
    }
LAB_149b1daf9:
    local_4a0 = (FPCGCustomSelectionKey *)0x0;
LAB_149b1dafe:
    FVar27 = (ForElementType<UActorComponent_*>)((longlong)FVar27 + 8);
  } while( true );
}

// IsMatching @ 149b1dd00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
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
FPCGSelectionKey::IsMatching
          (FPCGSelectionKey *this,FPCGSelectionKey *param_1,UPCGComponent *param_2)

{
  EPCGActorSelection EVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  UObject *pUVar5;
  UClass *pUVar6;
  UClass *pUVar7;
  undefined ***pppuVar8;
  ForAnyElementType FVar9;
  undefined1 auStackY_168 [32];
  TArrayView<AActor_*,int> local_138;
  TArray<AActor_*,TSizedDefaultAllocator<32>_> local_128;
  undefined1 local_118 [72];
  int local_d0;
  bool local_c0;
  ForAnyElementType local_b8;
  code *local_98 [2];
  undefined **local_88;
  code *local_80;
  undefined ***local_70;
  code *local_68 [2];
  undefined **local_58;
  code *local_50;
  undefined ***local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_168;
  pUVar5 = param_1->CachedObject;
  if (pUVar5 == (UObject *)0x0) {
    if ((param_1->ObjectPath).AssetPath.PackageName != (FName)0x0) {
      pUVar5 = FSoftObjectPath::ResolveObject(&param_1->ObjectPath);
      param_1->CachedObject = pUVar5;
    }
    if (pUVar5 == (UObject *)0x0) {
      return false;
    }
  }
  if (this->ActorFilter == AllWorldActors) {
    EVar1 = this->Selection;
    if (EVar1 == ByTag) {
      pUVar6 = Z_Construct_UClass_AActor_NoRegister();
      iVar2 = (int)pUVar6->_padding_;
      if (((iVar2 <= *(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38)) &&
          ((longlong *)
           *(undefined1 **)
            (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
           &pUVar6->_padding_)) &&
         (bVar4 = PCGActorSelector::TagListMatchesTag<TArray<FName,TSizedDefaultAllocator<32>_>_>
                            ((TArray<FName,TSizedDefaultAllocator<32>_> *)&pUVar5[0xc].field_0x18,
                             &this->Tag,this->bTagContainsWildcard,&this->CachedTagString), bVar4))
      {
        return true;
      }
    }
    else if (EVar1 == ByClass) {
      lVar3 = *(longlong *)&pUVar5->field_0x10;
      pUVar6 = (this->SelectionClass).Class.field0_0x0.DebugPtr;
      if ((pUVar6 != (UClass *)0x0) &&
         (pUVar7 = Z_Construct_UClass_UObject_NoRegister(), pUVar7 != (UClass *)0x0)) {
        iVar2 = (int)pUVar7->_padding_;
        if (((int)pUVar6->_padding_ < iVar2) ||
           ((longlong *)*(undefined1 **)(pUVar6->_padding_ + (longlong)iVar2 * 8) !=
            &pUVar7->_padding_)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if ((bVar4) &&
           (pUVar6 = (this->SelectionClass).Class.field0_0x0.DebugPtr, pUVar6 != (UClass *)0x0)) {
          iVar2 = (int)pUVar6->_padding_;
          if ((*(int *)(lVar3 + 0x38) < iVar2) ||
             ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar2 * 8) !=
              &pUVar6->_padding_)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if (bVar4) {
            return true;
          }
        }
      }
    }
    else if (EVar1 == ByPath) {
      bVar4 = FSoftObjectPath::operator==(&this->ObjectPath,&param_1->ObjectPath);
      return bVar4;
    }
  }
  else {
    pUVar6 = Z_Construct_UClass_AActor_NoRegister();
    iVar2 = (int)pUVar6->_padding_;
    if ((iVar2 <= *(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
        &pUVar6->_padding_)) {
      FPCGActorSelectorSettings::ReconstructFromKey((FPCGActorSelectorSettings *)local_118,this);
      local_88 = &
                 ___7__TFunction_OwnedObject_P6A_NPEBVAActor___Z_0A__0A__Function_Private_Core_UE__6B_
      ;
      local_80 = `FPCGSelectionKey::IsMatching'::__l8::<lambda_2>::<lambda_invoker_cdecl>;
      local_138._8_8_ = (ulonglong)(uint)local_128.ArrayMax << 0x20;
      local_50 = `FPCGSelectionKey::IsMatching'::__l8::<lambda_1>::<lambda_invoker_cdecl>;
      local_70 = (undefined ***)0x0;
      local_98[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<bool_(__cdecl*)(AActor_const_*),bool,AActor_const_*>::Call;
      local_40 = (undefined ***)0x0;
      local_58 = &
                 ___7__TFunction_OwnedObject_P6A_NPEBVAActor___Z_0A__0A__Function_Private_Core_UE__6B_
      ;
      local_68[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<bool_(__cdecl*)(AActor_const_*),bool,AActor_const_*>::Call;
      local_c0 = true;
      local_138.DataPtr = (AActor **)0x0;
      PCGActorSelector::FindActors
                (&local_128,(FPCGActorSelectorSettings *)local_118,param_2,
                 (TFunction<bool___cdecl(AActor_const_*)> *)local_68,
                 (TFunction<bool___cdecl(AActor_const_*)> *)local_98,&local_138);
      if (local_68[0] != (code *)0x0) {
        pppuVar8 = &local_58;
        if (local_40 != (undefined ***)0x0) {
          pppuVar8 = local_40;
        }
        (*(code *)(*pppuVar8)[2])();
      }
      if (local_98[0] != (code *)0x0) {
        pppuVar8 = &local_88;
        if (local_70 != (undefined ***)0x0) {
          pppuVar8 = local_70;
        }
        (*(code *)(*pppuVar8)[2])();
      }
      FVar9.Data = local_128.AllocatorInstance.Data;
      do {
        if (FVar9.Data == local_128.AllocatorInstance.Data + (longlong)local_128.ArrayNum * 8) {
          bVar4 = false;
LAB_149b1de80:
          if (local_128.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_128.AllocatorInstance.Data);
          }
          if (local_b8.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_b8.Data);
          }
          DestructItems<FString,int>((FString *)local_118._64_8_,local_d0);
          if ((FString *)local_118._64_8_ != (FString *)0x0) {
            FMemory::Free((void *)local_118._64_8_);
            return bVar4;
          }
          return bVar4;
        }
        if (*(UObject **)FVar9.Data == pUVar5) {
          bVar4 = true;
          goto LAB_149b1de80;
        }
        FVar9.Data = FVar9.Data + 8;
      } while( true );
    }
  }
  return false;
}

// IsMatching @ 149b1dfd0

bool __thiscall
FPCGSelectionKey::IsMatching
          (FPCGSelectionKey *this,UObject *param_1,FSoftObjectPath *param_2,
          TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *param_3,
          TSet<UPCGComponent_*,DefaultKeyFuncs<UPCGComponent_*,0>,FDefaultSetAllocator> *param_4,
          TSet<UPCGComponent_*,DefaultKeyFuncs<UPCGComponent_*,0>,FDefaultSetAllocator> *param_5)

{
  bool bVar1;
  FPCGSelectionKey local_88;
  
  if (((this->CustomKey).InstancedStruct.StructMemory == (uchar *)0x0) ||
     ((this->CustomKey).InstancedStruct.ScriptStruct.field0_0x0.DebugPtr == (UScriptStruct *)0x0)) {
    local_88._2_2_ = 0;
    local_88._12_4_ = 0;
    local_88.ActorFilter = AllWorldActors;
    local_88.Selection = Unknown;
    local_88.Tag.ComparisonIndex.Value = 0;
    local_88.Tag.Number = 0;
    local_88.SelectionClass.Class.field0_0x0 = (TObjectPtr<UClass>)(TObjectPtr<UClass>_u_0)0x0;
    local_88.ObjectPath.AssetPath.PackageName.ComparisonIndex.Value = 0;
    local_88.ObjectPath.AssetPath.PackageName.Number = 0;
    local_88.ObjectPath.AssetPath.AssetName.ComparisonIndex.Value = 0;
    local_88.ObjectPath.AssetPath.AssetName.Number = 0;
    local_88.ObjectPath.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_88.ObjectPath.SubPathString.Data.ArrayNum = 0;
    local_88.ObjectPath.SubPathString.Data.ArrayMax = 0;
    local_88.OptionalExtraDependency.field0_0x0.DebugPtr = (TObjectPtr<UClass_const_>_u_0)0x0;
    local_88.CustomKey.InstancedStruct.ScriptStruct.field0_0x0.DebugPtr =
         (TObjectPtr<UScriptStruct_const_>_u_0)0x0;
    local_88.CustomKey.InstancedStruct.StructMemory = (uchar *)0x0;
    local_88.CachedTagString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_88.CachedTagString.Data.ArrayNum = 0;
    local_88.CachedTagString.Data.ArrayMax = 0;
    local_88._96_8_ = 0;
    local_88.CachedObject = (UObject *)0x0;
    FInstancedStruct::FInstancedStruct(&local_88.CustomKey.InstancedStruct);
    local_88.CachedTagString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_88.CachedTagString.Data.ArrayNum = 0;
    local_88.CachedTagString.Data.ArrayMax = 0;
    local_88._96_8_ = local_88._96_8_ & 0xffffffffffffff00;
    local_88.Selection = ByPath;
    FSoftObjectPath::operator=(&local_88.ObjectPath,param_2);
    local_88.ActorFilter = AllWorldActors;
    local_88.CachedObject = param_1;
    bVar1 = IsMatching(this,&local_88,param_3,param_4,param_5);
    if (local_88.CachedTagString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.CachedTagString.Data.AllocatorInstance.Data);
    }
    FInstancedStruct::Reset(&local_88.CustomKey.InstancedStruct);
    if (local_88.ObjectPath.SubPathString.Data.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.ObjectPath.SubPathString.Data.AllocatorInstance.Data);
    }
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

// IsMatching @ 149b1e100

bool __thiscall
FPCGSelectionKey::IsMatching
          (FPCGSelectionKey *this,UObject *param_1,FSoftObjectPath *param_2,UPCGComponent *param_3)

{
  bool bVar1;
  FPCGSelectionKey local_88;
  
  if (((this->CustomKey).InstancedStruct.StructMemory == (uchar *)0x0) ||
     ((this->CustomKey).InstancedStruct.ScriptStruct.field0_0x0.DebugPtr == (UScriptStruct *)0x0)) {
    local_88._2_2_ = 0;
    local_88._12_4_ = 0;
    local_88.ActorFilter = AllWorldActors;
    local_88.Selection = Unknown;
    local_88.Tag.ComparisonIndex.Value = 0;
    local_88.Tag.Number = 0;
    local_88.SelectionClass.Class.field0_0x0 = (TObjectPtr<UClass>)(TObjectPtr<UClass>_u_0)0x0;
    local_88.ObjectPath.AssetPath.PackageName.ComparisonIndex.Value = 0;
    local_88.ObjectPath.AssetPath.PackageName.Number = 0;
    local_88.ObjectPath.AssetPath.AssetName.ComparisonIndex.Value = 0;
    local_88.ObjectPath.AssetPath.AssetName.Number = 0;
    local_88.ObjectPath.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_88.ObjectPath.SubPathString.Data.ArrayNum = 0;
    local_88.ObjectPath.SubPathString.Data.ArrayMax = 0;
    local_88.OptionalExtraDependency.field0_0x0.DebugPtr = (TObjectPtr<UClass_const_>_u_0)0x0;
    local_88.CustomKey.InstancedStruct.ScriptStruct.field0_0x0.DebugPtr =
         (TObjectPtr<UScriptStruct_const_>_u_0)0x0;
    local_88.CustomKey.InstancedStruct.StructMemory = (uchar *)0x0;
    local_88.CachedTagString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_88.CachedTagString.Data.ArrayNum = 0;
    local_88.CachedTagString.Data.ArrayMax = 0;
    local_88._96_8_ = 0;
    local_88.CachedObject = (UObject *)0x0;
    FInstancedStruct::FInstancedStruct(&local_88.CustomKey.InstancedStruct);
    local_88.CachedTagString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_88.CachedTagString.Data.ArrayNum = 0;
    local_88.CachedTagString.Data.ArrayMax = 0;
    local_88._96_8_ = local_88._96_8_ & 0xffffffffffffff00;
    local_88.Selection = ByPath;
    FSoftObjectPath::operator=(&local_88.ObjectPath,param_2);
    local_88.ActorFilter = AllWorldActors;
    local_88.CachedObject = param_1;
    bVar1 = IsMatching(this,&local_88,param_3);
    if (local_88.CachedTagString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.CachedTagString.Data.AllocatorInstance.Data);
    }
    FInstancedStruct::Reset(&local_88.CustomKey.InstancedStruct);
    if (local_88.ObjectPath.SubPathString.Data.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.ObjectPath.SubPathString.Data.AllocatorInstance.Data);
    }
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

// IsMatching @ 149b1e220

bool __thiscall
FPCGSelectionKey::IsMatching
          (FPCGSelectionKey *this,UObject *param_1,
          TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *param_2,
          TSet<UPCGComponent_*,DefaultKeyFuncs<UPCGComponent_*,0>,FDefaultSetAllocator> *param_3,
          TSet<UPCGComponent_*,DefaultKeyFuncs<UPCGComponent_*,0>,FDefaultSetAllocator> *param_4)

{
  bool bVar1;
  FPCGSelectionKey *pFVar2;
  FPCGSelectionKey local_78;
  
  if (((this->CustomKey).InstancedStruct.StructMemory == (uchar *)0x0) ||
     ((this->CustomKey).InstancedStruct.ScriptStruct.field0_0x0.DebugPtr == (UScriptStruct *)0x0)) {
    pFVar2 = CreateFromObjectPtr(&local_78,param_1);
    bVar1 = IsMatching(this,pFVar2,param_2,param_3,param_4);
    if (local_78.CachedTagString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.CachedTagString.Data.AllocatorInstance.Data);
    }
    FInstancedStruct::Reset(&local_78.CustomKey.InstancedStruct);
    if (local_78.ObjectPath.SubPathString.Data.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.ObjectPath.SubPathString.Data.AllocatorInstance.Data);
    }
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

// IsMatching @ 149b1e2d0

bool __thiscall
FPCGSelectionKey::IsMatching(FPCGSelectionKey *this,UObject *param_1,UPCGComponent *param_2)

{
  bool bVar1;
  FPCGSelectionKey *pFVar2;
  FPCGSelectionKey local_78;
  
  if (((this->CustomKey).InstancedStruct.StructMemory != (uchar *)0x0) &&
     ((this->CustomKey).InstancedStruct.ScriptStruct.field0_0x0.DebugPtr != (UScriptStruct *)0x0)) {
    return false;
  }
  pFVar2 = CreateFromObjectPtr(&local_78,param_1);
  bVar1 = IsMatching(this,pFVar2,param_2);
  if (local_78.CachedTagString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.CachedTagString.Data.AllocatorInstance.Data);
  }
  FInstancedStruct::Reset(&local_78.CustomKey.InstancedStruct);
  if (local_78.ObjectPath.SubPathString.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.ObjectPath.SubPathString.Data.AllocatorInstance.Data);
  }
  return bVar1;
}

// SetExtraDependency @ 149b25c30

void __thiscall FPCGSelectionKey::SetExtraDependency(FPCGSelectionKey *this,UClass *param_1)

{
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
    (this->OptionalExtraDependency).field0_0x0.DebugPtr = param_1;
    return;
  }
  (this->OptionalExtraDependency).field0_0x0.DebugPtr = param_1;
  return;
}

// UpdateAfterTagChange @ 149b2d900

void __thiscall FPCGSelectionKey::UpdateAfterTagChange(FPCGSelectionKey *this)

{
  PCGActorSelector::PrepareTag
            (this->Selection == ByTag,this->Tag,&this->bTagContainsWildcard,&this->CachedTagString);
  return;
}

