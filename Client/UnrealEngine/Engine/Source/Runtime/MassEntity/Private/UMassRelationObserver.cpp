// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntity
// Functions: 9

// StaticClass @ 1471b5030

UClass * __cdecl UMassRelationObserver::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMassRelationObserver.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MassEntity",L"MassRelationObserver",
               &Z_Registration_Info_UClass_UMassRelationObserver.InnerSingleton,
               StaticRegisterNativesUMassRelationObserver,0x470,0x10,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Mass",
               InternalConstructor<UMassRelationObserver>,
               InternalVTableHelperCtorCaller<UMassRelationObserver>,local_res8,
               UMassObserverProcessor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMassRelationObserver.InnerSingleton;
}

// UMassRelationObserver @ 1471ddf60

/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

UMassRelationObserver * __thiscall
UMassRelationObserver::UMassRelationObserver(UMassRelationObserver *this,FVTableHelper *param_1)

{
  UMassProcessor::UMassProcessor((UMassProcessor *)this,param_1);
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = (longlong)&___7UMassRelationObserver__6B_;
  this->_padding_ = 0;
  *(undefined2 *)&this->_padding_ = 4;
  FMassEntityQuery::FMassEntityQuery(&this->EntityQuery);
  (this->RelationTypeHandle).TypeKey.ObjectKey = (FObjectKey)0x0;
  this->ObservedTypeAccess = ReadWrite;
  this->RelationFragmentAccessType = ReadWrite;
  this->bAutoAddRelationFragmentRequirement = true;
  this->bAutoAddRelationTagRequirement = true;
  (this->DebugDescription).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DebugDescription).Data.ArrayNum = 0;
  (this->DebugDescription).Data.ArrayMax = 0;
  return this;
}

// UMassRelationObserver @ 1471ddfe0

/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

UMassRelationObserver * __thiscall
UMassRelationObserver::UMassRelationObserver(UMassRelationObserver *this)

{
  byte *pbVar1;
  FMassEntityQuery *this_00;
  undefined1 *puVar2;
  undefined1 *puVar3;
  
  UMassProcessor::UMassProcessor((UMassProcessor *)this);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 & 0xfe;
  *(undefined1 *)&this->_padding_ = 1;
  this_00 = &this->EntityQuery;
  this->_padding_ = (longlong)&___7UMassRelationObserver__6B_;
  this->_padding_ = 0;
  *(undefined2 *)&this->_padding_ = 4;
  FMassFragmentRequirements::FMassFragmentRequirements((FMassFragmentRequirements *)this_00);
  (this->EntityQuery)._padding_ = 0;
  *(undefined4 *)&(this->EntityQuery)._padding_ = 0;
  *(undefined4 *)((longlong)&(this->EntityQuery)._padding_ + 4) = 0x80;
  (this->EntityQuery)._padding_ = 0;
  *(undefined4 *)&(this->EntityQuery)._padding_ = 0;
  *(undefined4 *)((longlong)&(this->EntityQuery)._padding_ + 4) = 0x80;
  *(undefined1 *)&(this->EntityQuery)._padding_ = 0;
  (this->EntityQuery).bRegistered = '\0';
  *(undefined8 *)&(this->EntityQuery).ChunkCondition = 0;
  puVar3 = &(this->EntityQuery).field_0x348;
  (this->EntityQuery).bAllowParallelCommands = '\x01';
  (this->EntityQuery).bRequiresMutatingWorldAccess = '\0';
  *(undefined8 *)&(this->EntityQuery).ChunkCondition.field_0x28 = 0;
  (this->EntityQuery).EntitySubsystemHash = 0;
  (this->EntityQuery).LastUpdatedArchetypeDataVersion = 0;
  (this->EntityQuery).ValidArchetypes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EntityQuery).ValidArchetypes.ArrayNum = 0;
  (this->EntityQuery).ValidArchetypes.ArrayMax = 0;
  (this->EntityQuery).OrderedArchetypeIndices.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntityQuery).OrderedArchetypeIndices.ArrayNum = 0;
  (this->EntityQuery).OrderedArchetypeIndices.ArrayMax = 0;
  (this->EntityQuery).ArchetypeFragmentMapping.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntityQuery).ArchetypeFragmentMapping.ArrayNum = 0;
  (this->EntityQuery).ArchetypeFragmentMapping.ArrayMax = 0;
  (this->EntityQuery).GroupSortingSteps.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EntityQuery).GroupSortingSteps.ArrayNum = 0;
  (this->EntityQuery).GroupSortingSteps.ArrayMax = 0;
  (this->EntityQuery).CachedGroupIDs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EntityQuery).CachedGroupIDs.ArrayNum = 0;
  (this->EntityQuery).CachedGroupIDs.ArrayMax = 0;
  (this->EntityQuery).ExpectedContextType = Local;
  FMassTrace::QueryCreated(this_00);
  FMassEntityQuery::RegisterWithProcessor(this_00,(UMassProcessor *)this);
  (this->RelationTypeHandle).TypeKey.ObjectKey = (FObjectKey)0x0;
  (this->DebugDescription).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DebugDescription).Data.ArrayNum = 0;
  (this->DebugDescription).Data.ArrayMax = 0;
  *(undefined1 *)&this->_padding_ = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 1) = 0;
  this->ObservedTypeAccess = ReadWrite;
  this->RelationFragmentAccessType = ReadWrite;
  this->bAutoAddRelationFragmentRequirement = true;
  this->bAutoAddRelationTagRequirement = true;
  return this;
}

// ~UMassRelationObserver @ 1471e1260

/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

void __thiscall UMassRelationObserver::~UMassRelationObserver(UMassRelationObserver *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMassRelationObserver__6B_;
  pFVar1 = (this->DebugDescription).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FMassEntityQuery::~FMassEntityQuery(&this->EntityQuery);
  this->_padding_ = (longlong)&___7UMassObserverProcessor__6B_;
  UMassProcessor::~UMassProcessor((UMassProcessor *)this);
  return;
}

// ConfigureQueries @ 147205fb0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
UMassRelationObserver::ConfigureQueries
          (UMassRelationObserver *this,TSharedRef<FMassEntityManager,1> *param_1)

{
  short *psVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  UScriptStruct *pUVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  UPackage *pUVar9;
  TTuple<UE::Mass::FTypeHandle,UE::Mass::FRelationData> *pTVar10;
  UObject *pUVar11;
  char *pcVar12;
  FString *pFVar13;
  FWeakObjectPtr local_res8 [2];
  FName local_res18;
  FObjectKey local_res20;
  FName local_88;
  FName local_80;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  if ((this->_padding_ == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("ObservedType",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassRelationObservers.cpp"
                         ,0x1b,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  lVar4 = this->_padding_;
  if (lVar4 == 0) {
LAB_147206063:
    lVar4 = this->_padding_;
    if (lVar4 != 0) {
      if (Z_Registration_Info_UScriptStruct_FMassTag.OuterSingleton == (UScriptStruct *)0x0) {
        pUVar9 = Z_Construct_UPackage__Script_MassEntity();
        Z_Registration_Info_UScriptStruct_FMassTag.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FMassTag,(UObject *)pUVar9,L"MassTag");
        if (Z_Registration_Info_UScriptStruct_FMassTag.OuterSingleton == (UScriptStruct *)0x0)
        goto LAB_1472060c9;
      }
      iVar3 = (int)(Z_Registration_Info_UScriptStruct_FMassTag.OuterSingleton)->_padding_;
      if ((*(int *)(lVar4 + 0x38) < iVar3) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar3 * 8) !=
          &(Z_Registration_Info_UScriptStruct_FMassTag.OuterSingleton)->_padding_)) {
        bVar8 = false;
      }
      else {
        bVar8 = true;
      }
      if (bVar8) goto LAB_147206134;
    }
LAB_1472060c9:
    local_res18 = *(FName *)(this->_padding_ + 0x18);
    ::FName::ToString(&local_res18,&local_58);
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("UE::Mass::IsA<FMassFragment>(ObservedType) || UE::Mass::IsA<FMassTag>(ObservedType)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassRelationObservers.cpp"
                       ,0x1e,
                       L"Only tags and fragments are valid observed types for RelationObservers. Received %s"
                      );
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  else {
    if (Z_Registration_Info_UScriptStruct_FMassFragment.OuterSingleton == (UScriptStruct *)0x0) {
      pUVar9 = Z_Construct_UPackage__Script_MassEntity();
      Z_Registration_Info_UScriptStruct_FMassFragment.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FMassFragment,(UObject *)pUVar9,L"MassFragment"
                          );
      if (Z_Registration_Info_UScriptStruct_FMassFragment.OuterSingleton == (UScriptStruct *)0x0)
      goto LAB_147206063;
    }
    iVar3 = (int)(Z_Registration_Info_UScriptStruct_FMassFragment.OuterSingleton)->_padding_;
    if ((*(int *)(lVar4 + 0x38) < iVar3) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar3 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FMassFragment.OuterSingleton)->_padding_)) {
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
    if (!bVar8) goto LAB_147206063;
  }
LAB_147206134:
  lVar4 = this->_padding_;
  if (lVar4 == 0) {
LAB_1472061fe:
    FMassFragmentRequirements::AddRequirement
              ((FMassFragmentRequirements *)&this->EntityQuery,(UScriptStruct *)this->_padding_,
               this->ObservedTypeAccess,All);
  }
  else {
    if (Z_Registration_Info_UScriptStruct_FMassTag.OuterSingleton == (UScriptStruct *)0x0) {
      pUVar9 = Z_Construct_UPackage__Script_MassEntity();
      Z_Registration_Info_UScriptStruct_FMassTag.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FMassTag,(UObject *)pUVar9,L"MassTag");
      if (Z_Registration_Info_UScriptStruct_FMassTag.OuterSingleton == (UScriptStruct *)0x0)
      goto LAB_1472061fe;
    }
    iVar3 = (int)(Z_Registration_Info_UScriptStruct_FMassTag.OuterSingleton)->_padding_;
    if ((*(int *)(lVar4 + 0x38) < iVar3) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar3 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FMassTag.OuterSingleton)->_padding_)) {
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
    if (!bVar8) goto LAB_1472061fe;
    pUVar5 = (UScriptStruct *)this->_padding_;
    if (pUVar5 == (UScriptStruct *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    if ((((this->EntityQuery)._padding_ & 0x10) == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("bInitialized",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassRequirements.h"
                           ,0xf7,L"Modifying requirements before initialization is not supported."),
       bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    TTypeBitSetBase<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>,FMassTag,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
    ::Add((TTypeBitSetBase<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>,FMassTag,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
           *)&(this->EntityQuery)._padding_,pUVar5);
    psVar1 = (short *)((longlong)&(this->EntityQuery)._padding_ + 2);
    *psVar1 = *psVar1 + 1;
    plVar2 = &(this->EntityQuery)._padding_;
    *(ushort *)plVar2 = (ushort)*plVar2 & 0xfffe;
  }
  if ((this->bAutoAddRelationFragmentRequirement != false) ||
     (this->bAutoAddRelationTagRequirement != false)) {
    local_res20 = (this->RelationTypeHandle).TypeKey.ObjectKey;
    pTVar10 = TSet<TTuple<UE::Mass::FTypeHandle,UE::Mass::FRelationData>,TDefaultMapHashableKeyFuncs<UE::Mass::FTypeHandle,UE::Mass::FRelationData,0>,FDefaultSetAllocator>
              ::Find((TSet<TTuple<UE::Mass::FTypeHandle,UE::Mass::FRelationData>,TDefaultMapHashableKeyFuncs<UE::Mass::FTypeHandle,UE::Mass::FRelationData,0>,FDefaultSetAllocator>
                      *)&(param_1->Object->RelationManager).RelationsDataMap,
                     (FTypeHandle *)&local_res20);
    if ((pTVar10 == (TTuple<UE::Mass::FTypeHandle,UE::Mass::FRelationData> *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Pair != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                           ,0x27b,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if (this->bAutoAddRelationTagRequirement != false) {
      pUVar5 = *(UScriptStruct **)&pTVar10->field_0x18;
      if ((UScriptStruct *)this->_padding_ == (UScriptStruct *)0x0) {
        bVar8 = pUVar5 == (UScriptStruct *)0x0;
      }
      else {
        bVar8 = (UScriptStruct *)this->_padding_ == pUVar5;
      }
      if (!bVar8) {
        FMassFragmentRequirements::AddTagRequirement
                  ((FMassFragmentRequirements *)&this->EntityQuery,pUVar5,All);
      }
    }
    if ((this->bAutoAddRelationFragmentRequirement != false) &&
       (pUVar5 = *(UScriptStruct **)&pTVar10->field_0x20, pUVar5 != (UScriptStruct *)0x0)) {
      if (Z_Registration_Info_UScriptStruct_FMassFragment.OuterSingleton == (UScriptStruct *)0x0) {
        pUVar9 = Z_Construct_UPackage__Script_MassEntity();
        Z_Registration_Info_UScriptStruct_FMassFragment.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FMassFragment,(UObject *)pUVar9,
                             L"MassFragment");
        if (Z_Registration_Info_UScriptStruct_FMassFragment.OuterSingleton == (UScriptStruct *)0x0)
        goto LAB_147206352;
      }
      iVar3 = (int)(Z_Registration_Info_UScriptStruct_FMassFragment.OuterSingleton)->_padding_;
      if (((int)pUVar5->_padding_ < iVar3) ||
         ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar3 * 8) !=
          &(Z_Registration_Info_UScriptStruct_FMassFragment.OuterSingleton)->_padding_)) {
        bVar8 = false;
      }
      else {
        bVar8 = true;
      }
      if ((bVar8) &&
         (((UScriptStruct *)this->_padding_ == (UScriptStruct *)0x0 ||
          ((UScriptStruct *)this->_padding_ != pUVar5)))) {
        FMassFragmentRequirements::AddRequirement
                  ((FMassFragmentRequirements *)&this->EntityQuery,pUVar5,
                   this->RelationFragmentAccessType,All);
      }
    }
  }
LAB_147206352:
  switch(*(undefined1 *)((longlong)&this->_padding_ + 1)) {
  case 0:
    pcVar12 = "None";
    break;
  case 1:
    pcVar12 = "AddElement";
    break;
  case 2:
    pcVar12 = "RemoveElement";
    break;
  default:
    pcVar12 = "UNDEFINED";
    break;
  case 4:
    pcVar12 = "DestroyEntity";
    break;
  case 6:
    pcVar12 = "RemoveElement | DestroyEntity";
    break;
  case 8:
    pcVar12 = "CreateEntity";
    break;
  case 9:
    pcVar12 = "AddElement | CreateEntity";
    break;
  case 0xf:
    pcVar12 = "Add | Remove";
  }
  ::FString::FString(&local_38,pcVar12);
  local_88 = *(FName *)(this->_padding_ + 0x18);
  ::FName::ToString(&local_88,&local_48);
  local_res8[0].ObjectIndex = (this->RelationTypeHandle).TypeKey.ObjectKey.ObjectIndex;
  local_res8[0].ObjectSerialNumber = (this->RelationTypeHandle).TypeKey.ObjectKey.ObjectSerialNumber
  ;
  pUVar11 = FWeakObjectPtr::Get(local_res8);
  if (pUVar11 == (UObject *)0x0) {
    ::FString::FString(&local_68,L"None");
  }
  else {
    local_80.ComparisonIndex.Value = *(uint *)&pUVar11->field_0x18;
    local_80.Number = *(uint *)&pUVar11->field_0x1c;
    ::FName::ToString(&local_80,&local_68);
  }
  ::FString::PrintfImpl(&local_78,L"RelationType: %s ObservedType: %s Operation: %s");
  pFVar13 = &this->DebugDescription;
  if (pFVar13 != &local_78) {
    pFVar6 = (pFVar13->Data).AllocatorInstance.Data;
    if (pFVar6 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar6);
    }
    (pFVar13->Data).AllocatorInstance.Data = local_78.Data.AllocatorInstance.Data;
    (this->DebugDescription).Data.ArrayNum = local_78.Data.ArrayNum;
    (this->DebugDescription).Data.ArrayMax = local_78.Data.ArrayMax;
    local_78.Data.ArrayNum = 0;
    local_78.Data.ArrayMax = 0;
    local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// ConfigureRelationObserver @ 1472065b0

/* WARNING: Enum "ERemovalPolicy": Some values do not have unique names */
/* WARNING: Enum "EExternalMappingRequired": Some values do not have unique names */

bool __thiscall
UMassRelationObserver::ConfigureRelationObserver
          (UMassRelationObserver *this,FTypeHandle param_1,FRelationTypeTraits *param_2)

{
  UScriptStruct *pUVar1;
  
  pUVar1 = (param_2->RelationFragmentType).Val;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (pUVar1 != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  this->_padding_ = (longlong)pUVar1;
  (this->RelationTypeHandle).TypeKey.ObjectKey = (FObjectKey)param_1.TypeKey.ObjectKey;
  return true;
}

// GetPrivateStaticClass @ 147224e20

UClass * __cdecl UMassRelationObserver::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMassRelationObserver.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MassEntity",L"MassRelationObserver",
               &Z_Registration_Info_UClass_UMassRelationObserver.InnerSingleton,
               StaticRegisterNativesUMassRelationObserver,0x470,0x10,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Mass",
               InternalConstructor<UMassRelationObserver>,
               InternalVTableHelperCtorCaller<UMassRelationObserver>,local_res8,
               UMassObserverProcessor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMassRelationObserver.InnerSingleton;
}

// InitializeInternal @ 14722fd70

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
UMassRelationObserver::InitializeInternal
          (UMassRelationObserver *this,UObject *param_1,TSharedRef<FMassEntityManager,1> *param_2)

{
  return;
}

// StaticRegisterNativesUMassRelationObserver @ 147250790

void __cdecl UMassRelationObserver::StaticRegisterNativesUMassRelationObserver(void)

{
  return;
}

