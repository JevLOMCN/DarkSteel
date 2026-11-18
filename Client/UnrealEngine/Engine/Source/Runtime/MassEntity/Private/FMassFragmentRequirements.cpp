// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntity
// Functions: 21

// AddRequirement<FMassDebugLogFragment> @ 1471bd530

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FMassFragmentRequirements * __thiscall
FMassFragmentRequirements::AddRequirement<FMassDebugLogFragment>
          (FMassFragmentRequirements *this,EMassFragmentAccess param_1,EMassFragmentPresence param_2
          )

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FMassFragmentRequirements *pFVar5;
  UPackage *pUVar6;
  UScriptStruct *pUVar7;
  longlong lVar8;
  FBitSetContainer *this_00;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  FName local_res8;
  FString local_28;
  
  if ((this->bInitialized == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("bInitialized",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassRequirements.h"
                         ,0xd6,L"Modifying requirements before initialization is not supported."),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FMassFragmentRequirements *)(*pcVar2)();
    return pFVar5;
  }
  pFVar10 = (this->FragmentRequirements).AllocatorInstance.Data;
  pFVar9 = pFVar10 + (longlong)(this->FragmentRequirements).ArrayNum * 0x10;
  pUVar7 = Z_Registration_Info_UScriptStruct_FMassDebugLogFragment.OuterSingleton;
  for (; pFVar10 != pFVar9; pFVar10 = pFVar10 + 0x10) {
    if (pUVar7 == (UScriptStruct *)0x0) {
      pUVar6 = Z_Construct_UPackage__Script_MassEntity();
      pUVar7 = GetStaticStruct(Z_Construct_UScriptStruct_FMassDebugLogFragment,(UObject *)pUVar6,
                               L"MassDebugLogFragment");
      Z_Registration_Info_UScriptStruct_FMassDebugLogFragment.OuterSingleton = pUVar7;
    }
    if (*(UScriptStruct **)pFVar10 == pUVar7) {
      if (pUVar7 == (UScriptStruct *)0x0) {
        pUVar6 = Z_Construct_UPackage__Script_MassEntity();
        pUVar7 = GetStaticStruct(Z_Construct_UScriptStruct_FMassDebugLogFragment,(UObject *)pUVar6,
                                 L"MassDebugLogFragment");
        Z_Registration_Info_UScriptStruct_FMassDebugLogFragment.OuterSingleton = pUVar7;
      }
      local_res8 = (FName)pUVar7->_padding_;
      ::FName::ToString(&local_res8,&local_28);
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("FragmentRequirements.FindByPredicate([](const FMassFragmentRequirementDescription& Item) { return Item.StructType == T::StaticStruct(); }) == nullptr"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassRequirements.h"
                         ,0xd8,L"Duplicated requirements are not supported. %s already present");
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      pUVar7 = Z_Registration_Info_UScriptStruct_FMassDebugLogFragment.OuterSingleton;
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FMassFragmentRequirements *)(*pcVar2)();
        return pFVar5;
      }
      break;
    }
  }
  if (param_2 != None) {
    if (pUVar7 == (UScriptStruct *)0x0) {
      pUVar6 = Z_Construct_UPackage__Script_MassEntity();
      pUVar7 = GetStaticStruct(Z_Construct_UScriptStruct_FMassDebugLogFragment,(UObject *)pUVar6,
                               L"MassDebugLogFragment");
      Z_Registration_Info_UScriptStruct_FMassDebugLogFragment.OuterSingleton = pUVar7;
    }
    iVar4 = (this->FragmentRequirements).ArrayNum;
    piVar1 = &(this->FragmentRequirements).ArrayMax;
    if (iVar4 == *piVar1) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)this,piVar1);
    }
    (this->FragmentRequirements).ArrayNum = iVar4 + 1;
    lVar8 = (longlong)iVar4;
    pFVar10 = (this->FragmentRequirements).AllocatorInstance.Data;
    *(UScriptStruct **)(pFVar10 + lVar8 * 0x10) = pUVar7;
    pFVar10[lVar8 * 0x10 + 8] = (FScriptContainerElement)param_1;
    pFVar10[lVar8 * 0x10 + 9] = (FScriptContainerElement)param_2;
    if ((pUVar7 == (UScriptStruct *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InStruct",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassRequirements.h"
                           ,0x265,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FMassFragmentRequirements *)(*pcVar2)();
      return pFVar5;
    }
  }
  if (param_2 == All) {
    iVar4 = TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>::
            GetTypeIndex<FMassDebugLogFragment>();
    this_00 = (FBitSetContainer *)&this->RequiredAllFragments;
  }
  else if (param_2 == Any) {
    iVar4 = TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>::
            GetTypeIndex<FMassDebugLogFragment>();
    this_00 = (FBitSetContainer *)&this->RequiredAnyFragments;
  }
  else if (param_2 == None) {
    iVar4 = TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>::
            GetTypeIndex<FMassDebugLogFragment>();
    this_00 = (FBitSetContainer *)&this->RequiredNoneFragments;
  }
  else {
    if (param_2 != Optional) goto LAB_1471bd77d;
    iVar4 = TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>::
            GetTypeIndex<FMassDebugLogFragment>();
    this_00 = (FBitSetContainer *)&this->RequiredOptionalFragments;
  }
  FStructTypeBitSet::FBitSetContainer::AddAtIndex(this_00,iVar4);
LAB_1471bd77d:
  this->IncrementalChangesCount = this->IncrementalChangesCount + 1;
  this->bPropertiesCached = 0;
  return this;
}

// FMassFragmentRequirements @ 1471d9380

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FMassFragmentRequirements * __thiscall
FMassFragmentRequirements::FMassFragmentRequirements
          (FMassFragmentRequirements *this,FMassFragmentRequirements *param_1)

{
  int *piVar1;
  TArray<FMassFragmentRequirementDescription,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  ushort uVar6;
  
  piVar1 = &(this->FragmentRequirements).ArrayMax;
  (this->FragmentRequirements).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->FragmentRequirements).ArrayNum;
  pFVar4 = (param_1->FragmentRequirements).AllocatorInstance.Data;
  (this->FragmentRequirements).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar3,0,(ForAnyElementType *)this,iVar3,piVar1);
    memcpy((this->FragmentRequirements).AllocatorInstance.Data,pFVar4,(longlong)iVar3 << 4);
  }
  pTVar2 = &this->ChunkFragmentRequirements;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->ChunkFragmentRequirements).ArrayMax;
  iVar3 = (param_1->ChunkFragmentRequirements).ArrayNum;
  pFVar4 = (param_1->ChunkFragmentRequirements).AllocatorInstance.Data;
  (this->ChunkFragmentRequirements).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar3,0,&pTVar2->AllocatorInstance,iVar3,piVar1);
    memcpy((pTVar2->AllocatorInstance).Data,pFVar4,(longlong)iVar3 << 4);
  }
  pTVar2 = &this->ConstSharedFragmentRequirements;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->ConstSharedFragmentRequirements).ArrayMax;
  iVar3 = (param_1->ConstSharedFragmentRequirements).ArrayNum;
  pFVar4 = (param_1->ConstSharedFragmentRequirements).AllocatorInstance.Data;
  (this->ConstSharedFragmentRequirements).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar3,0,&pTVar2->AllocatorInstance,iVar3,piVar1);
    memcpy((pTVar2->AllocatorInstance).Data,pFVar4,(longlong)iVar3 << 4);
  }
  pTVar2 = &this->SharedFragmentRequirements;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->SharedFragmentRequirements).ArrayMax;
  iVar3 = (param_1->SharedFragmentRequirements).ArrayNum;
  pFVar4 = (param_1->SharedFragmentRequirements).AllocatorInstance.Data;
  (this->SharedFragmentRequirements).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar3,0,&pTVar2->AllocatorInstance,iVar3,piVar1);
    memcpy((pTVar2->AllocatorInstance).Data,pFVar4,(longlong)iVar3 << 4);
  }
  FStructTypeBitSet::FBitSetContainer::FBitSetContainer
            ((FBitSetContainer *)&this->RequiredAllTags,
             (FBitSetContainer *)&param_1->RequiredAllTags);
  FStructTypeBitSet::FBitSetContainer::FBitSetContainer
            ((FBitSetContainer *)&this->RequiredAnyTags,
             (FBitSetContainer *)&param_1->RequiredAnyTags);
  FStructTypeBitSet::FBitSetContainer::FBitSetContainer
            ((FBitSetContainer *)&this->RequiredNoneTags,
             (FBitSetContainer *)&param_1->RequiredNoneTags);
  FStructTypeBitSet::FBitSetContainer::FBitSetContainer
            ((FBitSetContainer *)&this->RequiredOptionalTags,
             (FBitSetContainer *)&param_1->RequiredOptionalTags);
  FStructTypeBitSet::FBitSetContainer::FBitSetContainer
            ((FBitSetContainer *)&this->RequiredAllFragments,
             (FBitSetContainer *)&param_1->RequiredAllFragments);
  FStructTypeBitSet::FBitSetContainer::FBitSetContainer
            ((FBitSetContainer *)&this->RequiredAnyFragments,
             (FBitSetContainer *)&param_1->RequiredAnyFragments);
  FStructTypeBitSet::FBitSetContainer::FBitSetContainer
            ((FBitSetContainer *)&this->RequiredOptionalFragments,
             (FBitSetContainer *)&param_1->RequiredOptionalFragments);
  FStructTypeBitSet::FBitSetContainer::FBitSetContainer
            ((FBitSetContainer *)&this->RequiredNoneFragments,
             (FBitSetContainer *)&param_1->RequiredNoneFragments);
  FStructTypeBitSet::FBitSetContainer::FBitSetContainer
            ((FBitSetContainer *)&this->RequiredAllChunkFragments,
             (FBitSetContainer *)&param_1->RequiredAllChunkFragments);
  FStructTypeBitSet::FBitSetContainer::FBitSetContainer
            ((FBitSetContainer *)&this->RequiredOptionalChunkFragments,
             (FBitSetContainer *)&param_1->RequiredOptionalChunkFragments);
  FStructTypeBitSet::FBitSetContainer::FBitSetContainer
            ((FBitSetContainer *)&this->RequiredNoneChunkFragments,
             (FBitSetContainer *)&param_1->RequiredNoneChunkFragments);
  FStructTypeBitSet::FBitSetContainer::FBitSetContainer
            ((FBitSetContainer *)&this->RequiredAllSharedFragments,
             (FBitSetContainer *)&param_1->RequiredAllSharedFragments);
  FStructTypeBitSet::FBitSetContainer::FBitSetContainer
            ((FBitSetContainer *)&this->RequiredOptionalSharedFragments,
             (FBitSetContainer *)&param_1->RequiredOptionalSharedFragments);
  FStructTypeBitSet::FBitSetContainer::FBitSetContainer
            ((FBitSetContainer *)&this->RequiredNoneSharedFragments,
             (FBitSetContainer *)&param_1->RequiredNoneSharedFragments);
  FStructTypeBitSet::FBitSetContainer::FBitSetContainer
            ((FBitSetContainer *)&this->RequiredAllConstSharedFragments,
             (FBitSetContainer *)&param_1->RequiredAllConstSharedFragments);
  FStructTypeBitSet::FBitSetContainer::FBitSetContainer
            ((FBitSetContainer *)&this->RequiredOptionalConstSharedFragments,
             (FBitSetContainer *)&param_1->RequiredOptionalConstSharedFragments);
  FStructTypeBitSet::FBitSetContainer::FBitSetContainer
            ((FBitSetContainer *)&this->RequiredNoneConstSharedFragments,
             (FBitSetContainer *)&param_1->RequiredNoneConstSharedFragments);
  (this->CachedEntityManager).Object = (param_1->CachedEntityManager).Object;
  pTVar5 = (param_1->CachedEntityManager).SharedReferenceCount.ReferenceController;
  (this->CachedEntityManager).SharedReferenceCount.ReferenceController = pTVar5;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  uVar6 = (ZPULL(*(undefined2 *)&this->field_0x270,0,1) ^ param_1->bPropertiesCached) & 1 ^
          *(undefined2 *)&this->field_0x270;
  *(ushort *)&this->field_0x270 = uVar6;
  uVar6 = (uVar6 ^ *(ushort *)&param_1->field_0x270) & 2 ^ uVar6;
  *(ushort *)&this->field_0x270 = uVar6;
  uVar6 = (uVar6 ^ *(ushort *)&param_1->field_0x270) & 4 ^ uVar6;
  *(ushort *)&this->field_0x270 = uVar6;
  uVar6 = (uVar6 ^ *(ushort *)&param_1->field_0x270) & 8 ^ uVar6;
  *(ushort *)&this->field_0x270 = uVar6;
  *(ushort *)&this->field_0x270 = (uVar6 ^ *(ushort *)&param_1->field_0x270) & 0x10 ^ uVar6;
  this->IncrementalChangesCount = param_1->IncrementalChangesCount;
  this->bRequiresGameThreadExecution = param_1->bRequiresGameThreadExecution;
  return this;
}

// FMassFragmentRequirements @ 1471d9710

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FMassFragmentRequirements * __thiscall
FMassFragmentRequirements::FMassFragmentRequirements
          (FMassFragmentRequirements *this,TSharedPtr<FMassEntityManager,1> *param_1)

{
  TSharedPtr<FMassEntityManager,1> *pTVar1;
  undefined1 *puVar2;
  FMassEntityManager *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  bool bVar6;
  FMassFragmentRequirements *pFVar7;
  FMassEntityManager *local_28;
  FSharedReferencer<1> local_20;
  
  pTVar1 = &this->CachedEntityManager;
  (this->FragmentRequirements).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FragmentRequirements).ArrayNum = 0;
  (this->FragmentRequirements).ArrayMax = 0;
  (this->ChunkFragmentRequirements).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChunkFragmentRequirements).ArrayNum = 0;
  (this->ChunkFragmentRequirements).ArrayMax = 0;
  (this->ConstSharedFragmentRequirements).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConstSharedFragmentRequirements).ArrayNum = 0;
  (this->ConstSharedFragmentRequirements).ArrayMax = 0;
  (this->SharedFragmentRequirements).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SharedFragmentRequirements).ArrayNum = 0;
  (this->SharedFragmentRequirements).ArrayMax = 0;
  *(undefined8 *)&(this->RequiredAllTags).field_0x10 = 0;
  *(undefined4 *)&(this->RequiredAllTags).field_0x18 = 0;
  *(undefined4 *)&(this->RequiredAllTags).field_0x1c = 0x80;
  *(undefined8 *)&(this->RequiredAnyTags).field_0x10 = 0;
  *(undefined4 *)&(this->RequiredAnyTags).field_0x18 = 0;
  *(undefined4 *)&(this->RequiredAnyTags).field_0x1c = 0x80;
  *(undefined8 *)&(this->RequiredNoneTags).field_0x10 = 0;
  *(undefined4 *)&(this->RequiredNoneTags).field_0x18 = 0;
  *(undefined4 *)&(this->RequiredNoneTags).field_0x1c = 0x80;
  *(undefined8 *)&(this->RequiredOptionalTags).field_0x10 = 0;
  *(undefined4 *)&(this->RequiredOptionalTags).field_0x18 = 0;
  *(undefined4 *)&(this->RequiredOptionalTags).field_0x1c = 0x80;
  *(undefined8 *)&(this->RequiredAllFragments).field_0x10 = 0;
  *(undefined4 *)&(this->RequiredAllFragments).field_0x18 = 0;
  *(undefined4 *)&(this->RequiredAllFragments).field_0x1c = 0x80;
  *(undefined8 *)&(this->RequiredAnyFragments).field_0x10 = 0;
  *(undefined4 *)&(this->RequiredAnyFragments).field_0x18 = 0;
  *(undefined4 *)&(this->RequiredAnyFragments).field_0x1c = 0x80;
  *(undefined8 *)&(this->RequiredOptionalFragments).field_0x10 = 0;
  *(undefined4 *)&(this->RequiredOptionalFragments).field_0x18 = 0;
  *(undefined4 *)&(this->RequiredOptionalFragments).field_0x1c = 0x80;
  *(undefined8 *)&(this->RequiredNoneFragments).field_0x10 = 0;
  *(undefined4 *)&(this->RequiredNoneFragments).field_0x18 = 0;
  *(undefined4 *)&(this->RequiredNoneFragments).field_0x1c = 0x80;
  *(undefined8 *)&(this->RequiredAllChunkFragments).field_0x10 = 0;
  *(undefined4 *)&(this->RequiredAllChunkFragments).field_0x18 = 0;
  *(undefined4 *)&(this->RequiredAllChunkFragments).field_0x1c = 0x80;
  *(undefined8 *)&(this->RequiredOptionalChunkFragments).field_0x10 = 0;
  *(undefined4 *)&(this->RequiredOptionalChunkFragments).field_0x18 = 0;
  *(undefined4 *)&(this->RequiredOptionalChunkFragments).field_0x1c = 0x80;
  *(undefined8 *)&(this->RequiredNoneChunkFragments).field_0x10 = 0;
  *(undefined4 *)&(this->RequiredNoneChunkFragments).field_0x18 = 0;
  *(undefined4 *)&(this->RequiredNoneChunkFragments).field_0x1c = 0x80;
  *(undefined8 *)&(this->RequiredAllSharedFragments).field_0x10 = 0;
  *(undefined4 *)&(this->RequiredAllSharedFragments).field_0x18 = 0;
  *(undefined4 *)&(this->RequiredAllSharedFragments).field_0x1c = 0x80;
  *(undefined8 *)&(this->RequiredOptionalSharedFragments).field_0x10 = 0;
  *(undefined4 *)&(this->RequiredOptionalSharedFragments).field_0x18 = 0;
  *(undefined4 *)&(this->RequiredOptionalSharedFragments).field_0x1c = 0x80;
  *(undefined8 *)&(this->RequiredNoneSharedFragments).field_0x10 = 0;
  *(undefined4 *)&(this->RequiredNoneSharedFragments).field_0x18 = 0;
  *(undefined4 *)&(this->RequiredNoneSharedFragments).field_0x1c = 0x80;
  *(undefined8 *)&(this->RequiredAllConstSharedFragments).field_0x10 = 0;
  *(undefined4 *)&(this->RequiredAllConstSharedFragments).field_0x18 = 0;
  *(undefined4 *)&(this->RequiredAllConstSharedFragments).field_0x1c = 0x80;
  *(undefined8 *)&(this->RequiredOptionalConstSharedFragments).field_0x10 = 0;
  *(undefined4 *)&(this->RequiredOptionalConstSharedFragments).field_0x18 = 0;
  *(undefined4 *)&(this->RequiredOptionalConstSharedFragments).field_0x1c = 0x80;
  *(undefined8 *)&(this->RequiredNoneConstSharedFragments).field_0x10 = 0;
  *(undefined4 *)&(this->RequiredNoneConstSharedFragments).field_0x18 = 0;
  *(undefined4 *)&(this->RequiredNoneConstSharedFragments).field_0x1c = 0x80;
  pTVar1->Object = (FMassEntityManager *)0x0;
  (this->CachedEntityManager).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->bPropertiesCached = 0;
  this->bInitialized = 0;
  this->bHasOptionalRequirements = 0;
  this->bHasNegativeRequirements = 0;
  this->bHasPositiveRequirements = 0;
  this->IncrementalChangesCount = 0;
  this->bRequiresGameThreadExecution = false;
  pFVar3 = param_1->Object;
  if (pFVar3 == (FMassEntityManager *)0x0) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<2502732341651177565>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassRequirements.cpp"
                       ,0x5d,"EntityManager");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FMassFragmentRequirements *)(*pcVar5)();
      return pFVar7;
    }
  }
  else {
    pTVar4 = (param_1->SharedReferenceCount).ReferenceController;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (((2 < (byte)LogMass._0_1_) && (pTVar1->Object != (FMassEntityManager *)0x0)) &&
       (pTVar1->Object != pFVar3)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMass);
    }
    if (this->bInitialized == 0) {
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_28 = pFVar3;
      local_20.ReferenceController = pTVar4;
      if (pTVar1 != (TSharedPtr<FMassEntityManager,1> *)&local_28) {
        pTVar1->Object = pFVar3;
        local_28 = (FMassEntityManager *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->CachedEntityManager).SharedReferenceCount,&local_20);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_20.ReferenceController);
      this->bInitialized = 1;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  }
  return this;
}

// FMassFragmentRequirements @ 1471d99f0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FMassFragmentRequirements * __thiscall
FMassFragmentRequirements::FMassFragmentRequirements
          (FMassFragmentRequirements *this,TSharedRef<FMassEntityManager,1> *param_1)

{
  TSharedPtr<FMassEntityManager,1> *pTVar1;
  undefined1 *puVar2;
  FMassEntityManager *local_18;
  FSharedReferencer<1> local_10;
  
  pTVar1 = &this->CachedEntityManager;
  (this->FragmentRequirements).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FragmentRequirements).ArrayNum = 0;
  (this->FragmentRequirements).ArrayMax = 0;
  (this->ChunkFragmentRequirements).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChunkFragmentRequirements).ArrayNum = 0;
  (this->ChunkFragmentRequirements).ArrayMax = 0;
  (this->ConstSharedFragmentRequirements).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConstSharedFragmentRequirements).ArrayNum = 0;
  (this->ConstSharedFragmentRequirements).ArrayMax = 0;
  (this->SharedFragmentRequirements).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SharedFragmentRequirements).ArrayNum = 0;
  (this->SharedFragmentRequirements).ArrayMax = 0;
  *(undefined8 *)&(this->RequiredAllTags).field_0x10 = 0;
  *(undefined4 *)&(this->RequiredAllTags).field_0x18 = 0;
  *(undefined4 *)&(this->RequiredAllTags).field_0x1c = 0x80;
  *(undefined8 *)&(this->RequiredAnyTags).field_0x10 = 0;
  *(undefined4 *)&(this->RequiredAnyTags).field_0x18 = 0;
  *(undefined4 *)&(this->RequiredAnyTags).field_0x1c = 0x80;
  *(undefined8 *)&(this->RequiredNoneTags).field_0x10 = 0;
  *(undefined4 *)&(this->RequiredNoneTags).field_0x18 = 0;
  *(undefined4 *)&(this->RequiredNoneTags).field_0x1c = 0x80;
  *(undefined8 *)&(this->RequiredOptionalTags).field_0x10 = 0;
  *(undefined4 *)&(this->RequiredOptionalTags).field_0x18 = 0;
  *(undefined4 *)&(this->RequiredOptionalTags).field_0x1c = 0x80;
  *(undefined8 *)&(this->RequiredAllFragments).field_0x10 = 0;
  *(undefined4 *)&(this->RequiredAllFragments).field_0x18 = 0;
  *(undefined4 *)&(this->RequiredAllFragments).field_0x1c = 0x80;
  *(undefined8 *)&(this->RequiredAnyFragments).field_0x10 = 0;
  *(undefined4 *)&(this->RequiredAnyFragments).field_0x18 = 0;
  *(undefined4 *)&(this->RequiredAnyFragments).field_0x1c = 0x80;
  *(undefined8 *)&(this->RequiredOptionalFragments).field_0x10 = 0;
  *(undefined4 *)&(this->RequiredOptionalFragments).field_0x18 = 0;
  *(undefined4 *)&(this->RequiredOptionalFragments).field_0x1c = 0x80;
  *(undefined8 *)&(this->RequiredNoneFragments).field_0x10 = 0;
  *(undefined4 *)&(this->RequiredNoneFragments).field_0x18 = 0;
  *(undefined4 *)&(this->RequiredNoneFragments).field_0x1c = 0x80;
  *(undefined8 *)&(this->RequiredAllChunkFragments).field_0x10 = 0;
  *(undefined4 *)&(this->RequiredAllChunkFragments).field_0x18 = 0;
  *(undefined4 *)&(this->RequiredAllChunkFragments).field_0x1c = 0x80;
  *(undefined8 *)&(this->RequiredOptionalChunkFragments).field_0x10 = 0;
  *(undefined4 *)&(this->RequiredOptionalChunkFragments).field_0x18 = 0;
  *(undefined4 *)&(this->RequiredOptionalChunkFragments).field_0x1c = 0x80;
  *(undefined8 *)&(this->RequiredNoneChunkFragments).field_0x10 = 0;
  *(undefined4 *)&(this->RequiredNoneChunkFragments).field_0x18 = 0;
  *(undefined4 *)&(this->RequiredNoneChunkFragments).field_0x1c = 0x80;
  *(undefined8 *)&(this->RequiredAllSharedFragments).field_0x10 = 0;
  *(undefined4 *)&(this->RequiredAllSharedFragments).field_0x18 = 0;
  *(undefined4 *)&(this->RequiredAllSharedFragments).field_0x1c = 0x80;
  *(undefined8 *)&(this->RequiredOptionalSharedFragments).field_0x10 = 0;
  *(undefined4 *)&(this->RequiredOptionalSharedFragments).field_0x18 = 0;
  *(undefined4 *)&(this->RequiredOptionalSharedFragments).field_0x1c = 0x80;
  *(undefined8 *)&(this->RequiredNoneSharedFragments).field_0x10 = 0;
  *(undefined4 *)&(this->RequiredNoneSharedFragments).field_0x18 = 0;
  *(undefined4 *)&(this->RequiredNoneSharedFragments).field_0x1c = 0x80;
  *(undefined8 *)&(this->RequiredAllConstSharedFragments).field_0x10 = 0;
  *(undefined4 *)&(this->RequiredAllConstSharedFragments).field_0x18 = 0;
  *(undefined4 *)&(this->RequiredAllConstSharedFragments).field_0x1c = 0x80;
  *(undefined8 *)&(this->RequiredOptionalConstSharedFragments).field_0x10 = 0;
  *(undefined4 *)&(this->RequiredOptionalConstSharedFragments).field_0x18 = 0;
  *(undefined4 *)&(this->RequiredOptionalConstSharedFragments).field_0x1c = 0x80;
  *(undefined8 *)&(this->RequiredNoneConstSharedFragments).field_0x10 = 0;
  *(undefined4 *)&(this->RequiredNoneConstSharedFragments).field_0x18 = 0;
  *(undefined4 *)&(this->RequiredNoneConstSharedFragments).field_0x1c = 0x80;
  pTVar1->Object = (FMassEntityManager *)0x0;
  (this->CachedEntityManager).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->bPropertiesCached = 0;
  this->bInitialized = 0;
  this->bHasOptionalRequirements = 0;
  this->bHasNegativeRequirements = 0;
  this->bHasPositiveRequirements = 0;
  this->IncrementalChangesCount = 0;
  this->bRequiresGameThreadExecution = false;
  if (this->bInitialized == 0) {
    local_10.ReferenceController = (param_1->SharedReferenceCount).ReferenceController;
    local_18 = param_1->Object;
    if (local_10.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_10.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_10.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pTVar1 != (TSharedPtr<FMassEntityManager,1> *)&local_18) {
      pTVar1->Object = local_18;
      local_18 = (FMassEntityManager *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->CachedEntityManager).SharedReferenceCount,&local_10);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_10.ReferenceController);
    this->bInitialized = 1;
  }
  return this;
}

// FMassFragmentRequirements @ 1471d9c40

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FMassFragmentRequirements * __thiscall
FMassFragmentRequirements::FMassFragmentRequirements
          (FMassFragmentRequirements *this,TArrayView<UScriptStruct_const_*_const,int> *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  UScriptStruct **ppUVar3;
  UScriptStruct *pUVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FMassFragmentRequirements *pFVar8;
  FScriptContainerElement *pFVar9;
  ushort uVar10;
  FScriptContainerElement *pFVar11;
  UScriptStruct **ppUVar12;
  FName local_res8;
  FString local_38;
  
  ppUVar12 = param_1->DataPtr;
  (this->FragmentRequirements).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FragmentRequirements).ArrayNum = 0;
  (this->FragmentRequirements).ArrayMax = 0;
  (this->ChunkFragmentRequirements).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChunkFragmentRequirements).ArrayNum = 0;
  (this->ChunkFragmentRequirements).ArrayMax = 0;
  (this->ConstSharedFragmentRequirements).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConstSharedFragmentRequirements).ArrayNum = 0;
  (this->ConstSharedFragmentRequirements).ArrayMax = 0;
  (this->SharedFragmentRequirements).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SharedFragmentRequirements).ArrayNum = 0;
  (this->SharedFragmentRequirements).ArrayMax = 0;
  *(undefined8 *)&(this->RequiredAllTags).field_0x10 = 0;
  *(undefined4 *)&(this->RequiredAllTags).field_0x18 = 0;
  *(undefined4 *)&(this->RequiredAllTags).field_0x1c = 0x80;
  *(undefined8 *)&(this->RequiredAnyTags).field_0x10 = 0;
  *(undefined4 *)&(this->RequiredAnyTags).field_0x18 = 0;
  *(undefined4 *)&(this->RequiredAnyTags).field_0x1c = 0x80;
  *(undefined8 *)&(this->RequiredNoneTags).field_0x10 = 0;
  *(undefined4 *)&(this->RequiredNoneTags).field_0x18 = 0;
  *(undefined4 *)&(this->RequiredNoneTags).field_0x1c = 0x80;
  *(undefined8 *)&(this->RequiredOptionalTags).field_0x10 = 0;
  *(undefined4 *)&(this->RequiredOptionalTags).field_0x18 = 0;
  *(undefined4 *)&(this->RequiredOptionalTags).field_0x1c = 0x80;
  *(undefined8 *)&(this->RequiredAllFragments).field_0x10 = 0;
  *(undefined4 *)&(this->RequiredAllFragments).field_0x18 = 0;
  *(undefined4 *)&(this->RequiredAllFragments).field_0x1c = 0x80;
  *(undefined8 *)&(this->RequiredAnyFragments).field_0x10 = 0;
  *(undefined4 *)&(this->RequiredAnyFragments).field_0x18 = 0;
  *(undefined4 *)&(this->RequiredAnyFragments).field_0x1c = 0x80;
  *(undefined8 *)&(this->RequiredOptionalFragments).field_0x10 = 0;
  *(undefined4 *)&(this->RequiredOptionalFragments).field_0x18 = 0;
  *(undefined4 *)&(this->RequiredOptionalFragments).field_0x1c = 0x80;
  *(undefined8 *)&(this->RequiredNoneFragments).field_0x10 = 0;
  *(undefined4 *)&(this->RequiredNoneFragments).field_0x18 = 0;
  *(undefined4 *)&(this->RequiredNoneFragments).field_0x1c = 0x80;
  *(undefined8 *)&(this->RequiredAllChunkFragments).field_0x10 = 0;
  *(undefined4 *)&(this->RequiredAllChunkFragments).field_0x18 = 0;
  *(undefined4 *)&(this->RequiredAllChunkFragments).field_0x1c = 0x80;
  *(undefined8 *)&(this->RequiredOptionalChunkFragments).field_0x10 = 0;
  *(undefined4 *)&(this->RequiredOptionalChunkFragments).field_0x18 = 0;
  *(undefined4 *)&(this->RequiredOptionalChunkFragments).field_0x1c = 0x80;
  *(undefined8 *)&(this->RequiredNoneChunkFragments).field_0x10 = 0;
  *(undefined4 *)&(this->RequiredNoneChunkFragments).field_0x18 = 0;
  *(undefined4 *)&(this->RequiredNoneChunkFragments).field_0x1c = 0x80;
  *(undefined8 *)&(this->RequiredAllSharedFragments).field_0x10 = 0;
  *(undefined4 *)&(this->RequiredAllSharedFragments).field_0x18 = 0;
  *(undefined4 *)&(this->RequiredAllSharedFragments).field_0x1c = 0x80;
  *(undefined8 *)&(this->RequiredOptionalSharedFragments).field_0x10 = 0;
  *(undefined4 *)&(this->RequiredOptionalSharedFragments).field_0x18 = 0;
  *(undefined4 *)&(this->RequiredOptionalSharedFragments).field_0x1c = 0x80;
  *(undefined8 *)&(this->RequiredNoneSharedFragments).field_0x10 = 0;
  *(undefined4 *)&(this->RequiredNoneSharedFragments).field_0x18 = 0;
  *(undefined4 *)&(this->RequiredNoneSharedFragments).field_0x1c = 0x80;
  *(undefined8 *)&(this->RequiredAllConstSharedFragments).field_0x10 = 0;
  *(undefined4 *)&(this->RequiredAllConstSharedFragments).field_0x18 = 0;
  *(undefined4 *)&(this->RequiredAllConstSharedFragments).field_0x1c = 0x80;
  *(undefined8 *)&(this->RequiredOptionalConstSharedFragments).field_0x10 = 0;
  *(undefined4 *)&(this->RequiredOptionalConstSharedFragments).field_0x18 = 0;
  *(undefined4 *)&(this->RequiredOptionalConstSharedFragments).field_0x1c = 0x80;
  *(undefined8 *)&(this->RequiredNoneConstSharedFragments).field_0x10 = 0;
  *(undefined4 *)&(this->RequiredNoneConstSharedFragments).field_0x18 = 0;
  *(undefined4 *)&(this->RequiredNoneConstSharedFragments).field_0x1c = 0x80;
  (this->CachedEntityManager).Object = (FMassEntityManager *)0x0;
  (this->CachedEntityManager).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  puVar1 = &this->field_0x270;
  uVar10 = *(ushort *)puVar1 & 0xffe0;
  this->IncrementalChangesCount = 0;
  this->bRequiresGameThreadExecution = false;
  iVar7 = param_1->ArrayNum;
  puVar2 = &this->field_0x270;
  this->bPropertiesCached = 0;
  this->bInitialized = 0;
  this->bHasOptionalRequirements = 0;
  this->bHasNegativeRequirements = 0;
  this->bHasPositiveRequirements = 0;
  ppUVar3 = ppUVar12 + iVar7;
  do {
    if (ppUVar12 == ppUVar3) {
      return this;
    }
    pUVar4 = *ppUVar12;
    if (((uVar10 & 0x10) == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("bInitialized",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassRequirements.h"
                           ,0xb5,L"Modifying requirements before initialization is not supported."),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      pFVar8 = (FMassFragmentRequirements *)(*pcVar5)();
      return pFVar8;
    }
    pFVar9 = (this->FragmentRequirements).AllocatorInstance.Data;
    pFVar11 = pFVar9 + (longlong)(this->FragmentRequirements).ArrayNum * 0x10;
    for (; pFVar9 != pFVar11; pFVar9 = pFVar9 + 0x10) {
      if (*(UScriptStruct **)pFVar9 == pUVar4) {
        if (pUVar4 == (UScriptStruct *)0x0) {
          ::FString::FString(&local_38,L"None");
        }
        else {
          local_res8 = (FName)pUVar4->_padding_;
          ::FName::ToString(&local_res8,&local_38);
        }
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("FragmentRequirements.FindByPredicate([FragmentType](const FMassFragmentRequirementDescription& Item){ return Item.StructType == FragmentType; }) == nullptr"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassRequirements.h"
                           ,0xb7,L"Duplicated requirements are not supported. %s already present");
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          pFVar8 = (FMassFragmentRequirements *)(*pcVar5)();
          return pFVar8;
        }
        break;
      }
    }
    iVar7 = (this->FragmentRequirements).ArrayNum;
    if (iVar7 == (this->FragmentRequirements).ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)this,&(this->FragmentRequirements).ArrayMax);
    }
    (this->FragmentRequirements).ArrayNum = iVar7 + 1;
    pFVar9 = (this->FragmentRequirements).AllocatorInstance.Data;
    *(UScriptStruct **)(pFVar9 + (longlong)iVar7 * 0x10) = pUVar4;
    *(undefined2 *)(pFVar9 + (longlong)iVar7 * 0x10 + 8) = 2;
    if ((pUVar4 == (UScriptStruct *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InStruct",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassRequirements.h"
                           ,0x265,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      pFVar8 = (FMassFragmentRequirements *)(*pcVar5)();
      return pFVar8;
    }
    TTypeBitSetBase<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
    ::Add((TTypeBitSetBase<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
           *)&this->RequiredAllFragments,pUVar4);
    this->bPropertiesCached = 0;
    ppUVar12 = ppUVar12 + 1;
    this->IncrementalChangesCount = this->IncrementalChangesCount + 1;
    uVar10 = *(ushort *)&this->field_0x270;
  } while( true );
}

// FMassFragmentRequirements @ 1471d9fe0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FMassFragmentRequirements * __thiscall
FMassFragmentRequirements::FMassFragmentRequirements
          (FMassFragmentRequirements *this,initializer_list<UScriptStruct_*> *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  UScriptStruct **ppUVar3;
  UScriptStruct *pUVar4;
  code *pcVar5;
  bool bVar6;
  ushort uVar7;
  int iVar8;
  FMassFragmentRequirements *pFVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  UScriptStruct **ppUVar12;
  FName local_res8;
  FString local_38;
  
  ppUVar12 = param_1->_First;
  ppUVar3 = param_1->_Last;
  (this->FragmentRequirements).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FragmentRequirements).ArrayNum = 0;
  (this->FragmentRequirements).ArrayMax = 0;
  (this->ChunkFragmentRequirements).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChunkFragmentRequirements).ArrayNum = 0;
  (this->ChunkFragmentRequirements).ArrayMax = 0;
  (this->ConstSharedFragmentRequirements).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConstSharedFragmentRequirements).ArrayNum = 0;
  (this->ConstSharedFragmentRequirements).ArrayMax = 0;
  (this->SharedFragmentRequirements).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SharedFragmentRequirements).ArrayNum = 0;
  (this->SharedFragmentRequirements).ArrayMax = 0;
  *(undefined8 *)&(this->RequiredAllTags).field_0x10 = 0;
  *(undefined4 *)&(this->RequiredAllTags).field_0x18 = 0;
  *(undefined4 *)&(this->RequiredAllTags).field_0x1c = 0x80;
  *(undefined8 *)&(this->RequiredAnyTags).field_0x10 = 0;
  *(undefined4 *)&(this->RequiredAnyTags).field_0x18 = 0;
  *(undefined4 *)&(this->RequiredAnyTags).field_0x1c = 0x80;
  *(undefined8 *)&(this->RequiredNoneTags).field_0x10 = 0;
  *(undefined4 *)&(this->RequiredNoneTags).field_0x18 = 0;
  *(undefined4 *)&(this->RequiredNoneTags).field_0x1c = 0x80;
  *(undefined8 *)&(this->RequiredOptionalTags).field_0x10 = 0;
  *(undefined4 *)&(this->RequiredOptionalTags).field_0x18 = 0;
  *(undefined4 *)&(this->RequiredOptionalTags).field_0x1c = 0x80;
  *(undefined8 *)&(this->RequiredAllFragments).field_0x10 = 0;
  *(undefined4 *)&(this->RequiredAllFragments).field_0x18 = 0;
  *(undefined4 *)&(this->RequiredAllFragments).field_0x1c = 0x80;
  *(undefined8 *)&(this->RequiredAnyFragments).field_0x10 = 0;
  *(undefined4 *)&(this->RequiredAnyFragments).field_0x18 = 0;
  *(undefined4 *)&(this->RequiredAnyFragments).field_0x1c = 0x80;
  *(undefined8 *)&(this->RequiredOptionalFragments).field_0x10 = 0;
  *(undefined4 *)&(this->RequiredOptionalFragments).field_0x18 = 0;
  *(undefined4 *)&(this->RequiredOptionalFragments).field_0x1c = 0x80;
  *(undefined8 *)&(this->RequiredNoneFragments).field_0x10 = 0;
  *(undefined4 *)&(this->RequiredNoneFragments).field_0x18 = 0;
  *(undefined4 *)&(this->RequiredNoneFragments).field_0x1c = 0x80;
  *(undefined8 *)&(this->RequiredAllChunkFragments).field_0x10 = 0;
  *(undefined4 *)&(this->RequiredAllChunkFragments).field_0x18 = 0;
  *(undefined4 *)&(this->RequiredAllChunkFragments).field_0x1c = 0x80;
  *(undefined8 *)&(this->RequiredOptionalChunkFragments).field_0x10 = 0;
  *(undefined4 *)&(this->RequiredOptionalChunkFragments).field_0x18 = 0;
  *(undefined4 *)&(this->RequiredOptionalChunkFragments).field_0x1c = 0x80;
  *(undefined8 *)&(this->RequiredNoneChunkFragments).field_0x10 = 0;
  *(undefined4 *)&(this->RequiredNoneChunkFragments).field_0x18 = 0;
  *(undefined4 *)&(this->RequiredNoneChunkFragments).field_0x1c = 0x80;
  *(undefined8 *)&(this->RequiredAllSharedFragments).field_0x10 = 0;
  *(undefined4 *)&(this->RequiredAllSharedFragments).field_0x18 = 0;
  *(undefined4 *)&(this->RequiredAllSharedFragments).field_0x1c = 0x80;
  *(undefined8 *)&(this->RequiredOptionalSharedFragments).field_0x10 = 0;
  *(undefined4 *)&(this->RequiredOptionalSharedFragments).field_0x18 = 0;
  *(undefined4 *)&(this->RequiredOptionalSharedFragments).field_0x1c = 0x80;
  *(undefined8 *)&(this->RequiredNoneSharedFragments).field_0x10 = 0;
  *(undefined4 *)&(this->RequiredNoneSharedFragments).field_0x18 = 0;
  *(undefined4 *)&(this->RequiredNoneSharedFragments).field_0x1c = 0x80;
  *(undefined8 *)&(this->RequiredAllConstSharedFragments).field_0x10 = 0;
  *(undefined4 *)&(this->RequiredAllConstSharedFragments).field_0x18 = 0;
  *(undefined4 *)&(this->RequiredAllConstSharedFragments).field_0x1c = 0x80;
  *(undefined8 *)&(this->RequiredOptionalConstSharedFragments).field_0x10 = 0;
  *(undefined4 *)&(this->RequiredOptionalConstSharedFragments).field_0x18 = 0;
  *(undefined4 *)&(this->RequiredOptionalConstSharedFragments).field_0x1c = 0x80;
  *(undefined8 *)&(this->RequiredNoneConstSharedFragments).field_0x10 = 0;
  *(undefined4 *)&(this->RequiredNoneConstSharedFragments).field_0x18 = 0;
  *(undefined4 *)&(this->RequiredNoneConstSharedFragments).field_0x1c = 0x80;
  (this->CachedEntityManager).Object = (FMassEntityManager *)0x0;
  (this->CachedEntityManager).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  puVar1 = &this->field_0x270;
  uVar7 = *(ushort *)puVar1 & 0xffe0;
  puVar2 = &this->field_0x270;
  this->bPropertiesCached = 0;
  this->bInitialized = 0;
  this->bHasOptionalRequirements = 0;
  this->bHasNegativeRequirements = 0;
  this->bHasPositiveRequirements = 0;
  this->IncrementalChangesCount = 0;
  this->bRequiresGameThreadExecution = false;
  do {
    if (ppUVar12 == ppUVar3) {
      return this;
    }
    pUVar4 = *ppUVar12;
    if (((uVar7 & 0x10) == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("bInitialized",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassRequirements.h"
                           ,0xb5,L"Modifying requirements before initialization is not supported."),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      pFVar9 = (FMassFragmentRequirements *)(*pcVar5)();
      return pFVar9;
    }
    pFVar10 = (this->FragmentRequirements).AllocatorInstance.Data;
    pFVar11 = pFVar10 + (longlong)(this->FragmentRequirements).ArrayNum * 0x10;
    for (; pFVar10 != pFVar11; pFVar10 = pFVar10 + 0x10) {
      if (*(UScriptStruct **)pFVar10 == pUVar4) {
        if (pUVar4 == (UScriptStruct *)0x0) {
          ::FString::FString(&local_38,L"None");
        }
        else {
          local_res8 = (FName)pUVar4->_padding_;
          ::FName::ToString(&local_res8,&local_38);
        }
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("FragmentRequirements.FindByPredicate([FragmentType](const FMassFragmentRequirementDescription& Item){ return Item.StructType == FragmentType; }) == nullptr"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassRequirements.h"
                           ,0xb7,L"Duplicated requirements are not supported. %s already present");
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          pFVar9 = (FMassFragmentRequirements *)(*pcVar5)();
          return pFVar9;
        }
        break;
      }
    }
    iVar8 = (this->FragmentRequirements).ArrayNum;
    if (iVar8 == (this->FragmentRequirements).ArrayMax) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)this,&(this->FragmentRequirements).ArrayMax);
    }
    (this->FragmentRequirements).ArrayNum = iVar8 + 1;
    pFVar10 = (this->FragmentRequirements).AllocatorInstance.Data;
    *(UScriptStruct **)(pFVar10 + (longlong)iVar8 * 0x10) = pUVar4;
    *(undefined2 *)(pFVar10 + (longlong)iVar8 * 0x10 + 8) = 2;
    if ((pUVar4 == (UScriptStruct *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InStruct",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassRequirements.h"
                           ,0x265,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      pFVar9 = (FMassFragmentRequirements *)(*pcVar5)();
      return pFVar9;
    }
    TTypeBitSetBase<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
    ::Add((TTypeBitSetBase<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
           *)&this->RequiredAllFragments,pUVar4);
    this->bPropertiesCached = 0;
    ppUVar12 = ppUVar12 + 1;
    this->IncrementalChangesCount = this->IncrementalChangesCount + 1;
    uVar7 = *(ushort *)&this->field_0x270;
  } while( true );
}

// FMassFragmentRequirements @ 1471da380

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FMassFragmentRequirements * __thiscall
FMassFragmentRequirements::FMassFragmentRequirements(FMassFragmentRequirements *this)

{
  undefined1 *puVar1;
  
  (this->FragmentRequirements).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FragmentRequirements).ArrayNum = 0;
  (this->FragmentRequirements).ArrayMax = 0;
  (this->ChunkFragmentRequirements).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChunkFragmentRequirements).ArrayNum = 0;
  (this->ChunkFragmentRequirements).ArrayMax = 0;
  (this->ConstSharedFragmentRequirements).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConstSharedFragmentRequirements).ArrayNum = 0;
  (this->ConstSharedFragmentRequirements).ArrayMax = 0;
  (this->SharedFragmentRequirements).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SharedFragmentRequirements).ArrayNum = 0;
  (this->SharedFragmentRequirements).ArrayMax = 0;
  *(undefined8 *)&(this->RequiredAllTags).field_0x10 = 0;
  *(undefined4 *)&(this->RequiredAllTags).field_0x18 = 0;
  *(undefined4 *)&(this->RequiredAllTags).field_0x1c = 0x80;
  *(undefined8 *)&(this->RequiredAnyTags).field_0x10 = 0;
  *(undefined4 *)&(this->RequiredAnyTags).field_0x18 = 0;
  *(undefined4 *)&(this->RequiredAnyTags).field_0x1c = 0x80;
  *(undefined8 *)&(this->RequiredNoneTags).field_0x10 = 0;
  *(undefined4 *)&(this->RequiredNoneTags).field_0x18 = 0;
  *(undefined4 *)&(this->RequiredNoneTags).field_0x1c = 0x80;
  *(undefined8 *)&(this->RequiredOptionalTags).field_0x10 = 0;
  *(undefined4 *)&(this->RequiredOptionalTags).field_0x18 = 0;
  *(undefined4 *)&(this->RequiredOptionalTags).field_0x1c = 0x80;
  *(undefined8 *)&(this->RequiredAllFragments).field_0x10 = 0;
  *(undefined4 *)&(this->RequiredAllFragments).field_0x18 = 0;
  *(undefined4 *)&(this->RequiredAllFragments).field_0x1c = 0x80;
  *(undefined8 *)&(this->RequiredAnyFragments).field_0x10 = 0;
  *(undefined4 *)&(this->RequiredAnyFragments).field_0x18 = 0;
  *(undefined4 *)&(this->RequiredAnyFragments).field_0x1c = 0x80;
  *(undefined8 *)&(this->RequiredOptionalFragments).field_0x10 = 0;
  *(undefined4 *)&(this->RequiredOptionalFragments).field_0x18 = 0;
  *(undefined4 *)&(this->RequiredOptionalFragments).field_0x1c = 0x80;
  *(undefined8 *)&(this->RequiredNoneFragments).field_0x10 = 0;
  *(undefined4 *)&(this->RequiredNoneFragments).field_0x18 = 0;
  *(undefined4 *)&(this->RequiredNoneFragments).field_0x1c = 0x80;
  *(undefined8 *)&(this->RequiredAllChunkFragments).field_0x10 = 0;
  *(undefined4 *)&(this->RequiredAllChunkFragments).field_0x18 = 0;
  *(undefined4 *)&(this->RequiredAllChunkFragments).field_0x1c = 0x80;
  *(undefined8 *)&(this->RequiredOptionalChunkFragments).field_0x10 = 0;
  *(undefined4 *)&(this->RequiredOptionalChunkFragments).field_0x18 = 0;
  *(undefined4 *)&(this->RequiredOptionalChunkFragments).field_0x1c = 0x80;
  *(undefined8 *)&(this->RequiredNoneChunkFragments).field_0x10 = 0;
  *(undefined4 *)&(this->RequiredNoneChunkFragments).field_0x18 = 0;
  *(undefined4 *)&(this->RequiredNoneChunkFragments).field_0x1c = 0x80;
  *(undefined8 *)&(this->RequiredAllSharedFragments).field_0x10 = 0;
  *(undefined4 *)&(this->RequiredAllSharedFragments).field_0x18 = 0;
  *(undefined4 *)&(this->RequiredAllSharedFragments).field_0x1c = 0x80;
  *(undefined8 *)&(this->RequiredOptionalSharedFragments).field_0x10 = 0;
  *(undefined4 *)&(this->RequiredOptionalSharedFragments).field_0x18 = 0;
  *(undefined4 *)&(this->RequiredOptionalSharedFragments).field_0x1c = 0x80;
  *(undefined8 *)&(this->RequiredNoneSharedFragments).field_0x10 = 0;
  *(undefined4 *)&(this->RequiredNoneSharedFragments).field_0x18 = 0;
  *(undefined4 *)&(this->RequiredNoneSharedFragments).field_0x1c = 0x80;
  *(undefined8 *)&(this->RequiredAllConstSharedFragments).field_0x10 = 0;
  *(undefined4 *)&(this->RequiredAllConstSharedFragments).field_0x18 = 0;
  *(undefined4 *)&(this->RequiredAllConstSharedFragments).field_0x1c = 0x80;
  *(undefined8 *)&(this->RequiredOptionalConstSharedFragments).field_0x10 = 0;
  *(undefined4 *)&(this->RequiredOptionalConstSharedFragments).field_0x18 = 0;
  *(undefined4 *)&(this->RequiredOptionalConstSharedFragments).field_0x1c = 0x80;
  *(undefined8 *)&(this->RequiredNoneConstSharedFragments).field_0x10 = 0;
  *(undefined4 *)&(this->RequiredNoneConstSharedFragments).field_0x18 = 0;
  *(undefined4 *)&(this->RequiredNoneConstSharedFragments).field_0x1c = 0x80;
  this->bPropertiesCached = 0;
  this->bInitialized = 0;
  this->bHasOptionalRequirements = 0;
  this->bHasNegativeRequirements = 0;
  this->bHasPositiveRequirements = 0;
  (this->CachedEntityManager).Object = (FMassEntityManager *)0x0;
  (this->CachedEntityManager).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->IncrementalChangesCount = 0;
  this->bRequiresGameThreadExecution = false;
  return this;
}

// AddTagRequirement @ 1471efc60

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
FMassFragmentRequirements::AddTagRequirement
          (FMassFragmentRequirements *this,UScriptStruct *param_1,EMassFragmentPresence param_2)

{
  code *pcVar1;
  bool bVar2;
  TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct> *this_00;
  
  if (param_1 == (UScriptStruct *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  if (this->bInitialized == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bInitialized",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassRequirements.h"
                       ,0xf7,L"Modifying requirements before initialization is not supported.");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_2 == MAX) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("int(Presence) != int(EMassFragmentPresence::MAX)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassRequirements.h"
                       ,0xf8,L"MAX presence is not a valid value for AddTagRequirement");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_2 == All) {
    this_00 = &this->RequiredAllTags;
  }
  else if (param_2 == Any) {
    this_00 = &this->RequiredAnyTags;
  }
  else if (param_2 == None) {
    this_00 = &this->RequiredNoneTags;
  }
  else {
    if (param_2 != Optional) goto LAB_1471efd17;
    this_00 = &this->RequiredOptionalTags;
  }
  TTypeBitSetBase<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>,FMassTag,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
  ::Add((TTypeBitSetBase<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>,FMassTag,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
         *)this_00,param_1);
LAB_1471efd17:
  this->IncrementalChangesCount = this->IncrementalChangesCount + 1;
  this->bPropertiesCached = 0;
  return;
}

// CheckValidity @ 147202470

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall FMassFragmentRequirements::CheckValidity(FMassFragmentRequirements *this)

{
  bool bVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  
  uVar5 = *(ushort *)&this->field_0x270;
  if (ZPULL(uVar5,0,1) == 0) {
    bVar1 = FStructTypeBitSet::FConstBitSetContainer::IsEmpty
                      ((FConstBitSetContainer *)&this->RequiredAllTags);
    uVar4 = 0;
    if ((((!bVar1) ||
         (bVar1 = FStructTypeBitSet::FConstBitSetContainer::IsEmpty
                            ((FConstBitSetContainer *)&this->RequiredAnyTags), !bVar1)) ||
        (bVar1 = FStructTypeBitSet::FConstBitSetContainer::IsEmpty
                           ((FConstBitSetContainer *)&this->RequiredAllFragments), !bVar1)) ||
       (((bVar1 = FStructTypeBitSet::FConstBitSetContainer::IsEmpty
                            ((FConstBitSetContainer *)&this->RequiredAnyFragments), !bVar1 ||
         (bVar1 = FStructTypeBitSet::FConstBitSetContainer::IsEmpty
                            ((FConstBitSetContainer *)&this->RequiredAllChunkFragments), !bVar1)) ||
        ((bVar1 = FStructTypeBitSet::FConstBitSetContainer::IsEmpty
                            ((FConstBitSetContainer *)&this->RequiredAllSharedFragments), !bVar1 ||
         (bVar1 = FStructTypeBitSet::FConstBitSetContainer::IsEmpty
                            ((FConstBitSetContainer *)&this->RequiredAllConstSharedFragments),
         uVar2 = uVar4, !bVar1)))))) {
      uVar2 = 2;
    }
    *(ushort *)&this->field_0x270 = uVar5 & 0xfffd | uVar2;
    bVar1 = FStructTypeBitSet::FConstBitSetContainer::IsEmpty
                      ((FConstBitSetContainer *)&this->RequiredNoneTags);
    if (((bVar1) &&
        (bVar1 = FStructTypeBitSet::FConstBitSetContainer::IsEmpty
                           ((FConstBitSetContainer *)&this->RequiredNoneFragments), bVar1)) &&
       ((bVar1 = FStructTypeBitSet::FConstBitSetContainer::IsEmpty
                           ((FConstBitSetContainer *)&this->RequiredNoneChunkFragments), bVar1 &&
        ((bVar1 = FStructTypeBitSet::FConstBitSetContainer::IsEmpty
                            ((FConstBitSetContainer *)&this->RequiredNoneSharedFragments), bVar1 &&
         (bVar1 = FStructTypeBitSet::FConstBitSetContainer::IsEmpty
                            ((FConstBitSetContainer *)&this->RequiredNoneConstSharedFragments),
         bVar1)))))) {
      uVar3 = 0;
    }
    else {
      uVar3 = 4;
    }
    *(ushort *)&this->field_0x270 = uVar5 & 0xfff9 | uVar2 | uVar3;
    bVar1 = FStructTypeBitSet::FConstBitSetContainer::IsEmpty
                      ((FConstBitSetContainer *)&this->RequiredOptionalFragments);
    if ((((!bVar1) ||
         (bVar1 = FStructTypeBitSet::FConstBitSetContainer::IsEmpty
                            ((FConstBitSetContainer *)&this->RequiredOptionalTags), !bVar1)) ||
        (bVar1 = FStructTypeBitSet::FConstBitSetContainer::IsEmpty
                           ((FConstBitSetContainer *)&this->RequiredOptionalChunkFragments), !bVar1)
        ) || ((bVar1 = FStructTypeBitSet::FConstBitSetContainer::IsEmpty
                                 ((FConstBitSetContainer *)&this->RequiredOptionalSharedFragments),
              !bVar1 || (bVar1 = FStructTypeBitSet::FConstBitSetContainer::IsEmpty
                                           ((FConstBitSetContainer *)
                                            &this->RequiredOptionalConstSharedFragments), !bVar1))))
    {
      uVar4 = 8;
    }
    uVar5 = uVar5 & 0xfff1 | uVar2 | uVar3 | uVar4 | 1;
    *(ushort *)&this->field_0x270 = uVar5;
  }
  return (uVar5 & 0xe) != 0;
}

// ClearTagRequirements @ 147203ad0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FMassFragmentRequirements * __thiscall
FMassFragmentRequirements::ClearTagRequirements
          (FMassFragmentRequirements *this,
          TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct> *param_1)

{
  FStructTypeBitSet::FBitSetContainer::operator-=
            ((FBitSetContainer *)&this->RequiredAllTags,
             (TBitArray<FDefaultBitArrayAllocator> *)param_1);
  FStructTypeBitSet::FBitSetContainer::operator-=
            ((FBitSetContainer *)&this->RequiredAnyTags,
             (TBitArray<FDefaultBitArrayAllocator> *)param_1);
  FStructTypeBitSet::FBitSetContainer::operator-=
            ((FBitSetContainer *)&this->RequiredNoneTags,
             (TBitArray<FDefaultBitArrayAllocator> *)param_1);
  FStructTypeBitSet::FBitSetContainer::operator-=
            ((FBitSetContainer *)&this->RequiredOptionalTags,
             (TBitArray<FDefaultBitArrayAllocator> *)param_1);
  return this;
}

// DoesArchetypeMatchRequirements @ 147214860

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
FMassFragmentRequirements::DoesArchetypeMatchRequirements
          (FMassFragmentRequirements *this,FMassArchetypeCompositionDescriptor *param_1)

{
  bool bVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  
  uVar5 = *(ushort *)&this->field_0x270;
  if (ZPULL(uVar5,0,1) == 0) {
    bVar1 = FStructTypeBitSet::FConstBitSetContainer::IsEmpty
                      ((FConstBitSetContainer *)&this->RequiredAllTags);
    uVar4 = 0;
    if ((((!bVar1) ||
         (bVar1 = FStructTypeBitSet::FConstBitSetContainer::IsEmpty
                            ((FConstBitSetContainer *)&this->RequiredAnyTags), !bVar1)) ||
        (bVar1 = FStructTypeBitSet::FConstBitSetContainer::IsEmpty
                           ((FConstBitSetContainer *)&this->RequiredAllFragments), !bVar1)) ||
       (((bVar1 = FStructTypeBitSet::FConstBitSetContainer::IsEmpty
                            ((FConstBitSetContainer *)&this->RequiredAnyFragments), !bVar1 ||
         (bVar1 = FStructTypeBitSet::FConstBitSetContainer::IsEmpty
                            ((FConstBitSetContainer *)&this->RequiredAllChunkFragments), !bVar1)) ||
        ((bVar1 = FStructTypeBitSet::FConstBitSetContainer::IsEmpty
                            ((FConstBitSetContainer *)&this->RequiredAllSharedFragments), !bVar1 ||
         (bVar1 = FStructTypeBitSet::FConstBitSetContainer::IsEmpty
                            ((FConstBitSetContainer *)&this->RequiredAllConstSharedFragments),
         uVar2 = uVar4, !bVar1)))))) {
      uVar2 = 2;
    }
    *(ushort *)&this->field_0x270 = uVar5 & 0xfffd | uVar2;
    bVar1 = FStructTypeBitSet::FConstBitSetContainer::IsEmpty
                      ((FConstBitSetContainer *)&this->RequiredNoneTags);
    if (((bVar1) &&
        (bVar1 = FStructTypeBitSet::FConstBitSetContainer::IsEmpty
                           ((FConstBitSetContainer *)&this->RequiredNoneFragments), bVar1)) &&
       ((bVar1 = FStructTypeBitSet::FConstBitSetContainer::IsEmpty
                           ((FConstBitSetContainer *)&this->RequiredNoneChunkFragments), bVar1 &&
        ((bVar1 = FStructTypeBitSet::FConstBitSetContainer::IsEmpty
                            ((FConstBitSetContainer *)&this->RequiredNoneSharedFragments), bVar1 &&
         (bVar1 = FStructTypeBitSet::FConstBitSetContainer::IsEmpty
                            ((FConstBitSetContainer *)&this->RequiredNoneConstSharedFragments),
         bVar1)))))) {
      uVar3 = 0;
    }
    else {
      uVar3 = 4;
    }
    *(ushort *)&this->field_0x270 = uVar5 & 0xfff9 | uVar2 | uVar3;
    bVar1 = FStructTypeBitSet::FConstBitSetContainer::IsEmpty
                      ((FConstBitSetContainer *)&this->RequiredOptionalFragments);
    if ((((!bVar1) ||
         (bVar1 = FStructTypeBitSet::FConstBitSetContainer::IsEmpty
                            ((FConstBitSetContainer *)&this->RequiredOptionalTags), !bVar1)) ||
        (bVar1 = FStructTypeBitSet::FConstBitSetContainer::IsEmpty
                           ((FConstBitSetContainer *)&this->RequiredOptionalChunkFragments), !bVar1)
        ) || ((bVar1 = FStructTypeBitSet::FConstBitSetContainer::IsEmpty
                                 ((FConstBitSetContainer *)&this->RequiredOptionalSharedFragments),
              !bVar1 || (bVar1 = FStructTypeBitSet::FConstBitSetContainer::IsEmpty
                                           ((FConstBitSetContainer *)
                                            &this->RequiredOptionalConstSharedFragments), !bVar1))))
    {
      uVar4 = 8;
    }
    uVar5 = uVar5 & 0xfff1 | uVar2 | uVar3 | uVar4 | 1;
    *(ushort *)&this->field_0x270 = uVar5;
  }
  if (((uVar5 & 4) == 0) ||
     (((bVar1 = FStructTypeBitSet::FConstBitSetContainer::HasAny
                          ((FConstBitSetContainer *)param_1,
                           (TBitArray<FDefaultBitArrayAllocator> *)&this->RequiredNoneFragments),
       !bVar1 && (bVar1 = FStructTypeBitSet::FConstBitSetContainer::HasAny
                                    ((FConstBitSetContainer *)&param_1->Tags,
                                     (TBitArray<FDefaultBitArrayAllocator> *)&this->RequiredNoneTags
                                    ), !bVar1)) &&
      ((bVar1 = FStructTypeBitSet::FConstBitSetContainer::HasAny
                          ((FConstBitSetContainer *)&param_1->ChunkFragments,
                           (TBitArray<FDefaultBitArrayAllocator> *)&this->RequiredNoneChunkFragments
                          ), !bVar1 &&
       ((bVar1 = FStructTypeBitSet::FConstBitSetContainer::HasAny
                           ((FConstBitSetContainer *)&param_1->SharedFragments,
                            (TBitArray<FDefaultBitArrayAllocator> *)
                            &this->RequiredNoneSharedFragments), !bVar1 &&
        (bVar1 = FStructTypeBitSet::FConstBitSetContainer::HasAny
                           ((FConstBitSetContainer *)&param_1->ConstSharedFragments,
                            (TBitArray<FDefaultBitArrayAllocator> *)
                            &this->RequiredNoneConstSharedFragments), !bVar1)))))))) {
    if ((uVar5 & 2) == 0) {
      if ((uVar5 & 8) == 0) {
        return true;
      }
      bVar1 = DoesMatchAnyOptionals(this,param_1);
      return bVar1;
    }
    bVar1 = FStructTypeBitSet::FConstBitSetContainer::HasAll
                      ((FConstBitSetContainer *)param_1,
                       (TBitArray<FDefaultBitArrayAllocator> *)&this->RequiredAllFragments);
    if ((bVar1) &&
       ((bVar1 = FStructTypeBitSet::FConstBitSetContainer::IsEmpty
                           ((FConstBitSetContainer *)&this->RequiredAnyFragments), bVar1 ||
        (bVar1 = FStructTypeBitSet::FConstBitSetContainer::HasAny
                           ((FConstBitSetContainer *)param_1,
                            (TBitArray<FDefaultBitArrayAllocator> *)&this->RequiredAnyFragments),
        bVar1)))) {
      bVar1 = FStructTypeBitSet::FConstBitSetContainer::HasAll
                        ((FConstBitSetContainer *)&param_1->Tags,
                         (TBitArray<FDefaultBitArrayAllocator> *)&this->RequiredAllTags);
      if (((bVar1) &&
          (((bVar1 = FStructTypeBitSet::FConstBitSetContainer::IsEmpty
                               ((FConstBitSetContainer *)&this->RequiredAnyTags), bVar1 ||
            (bVar1 = FStructTypeBitSet::FConstBitSetContainer::HasAny
                               ((FConstBitSetContainer *)&param_1->Tags,
                                (TBitArray<FDefaultBitArrayAllocator> *)&this->RequiredAnyTags),
            bVar1)) &&
           (bVar1 = FStructTypeBitSet::FConstBitSetContainer::HasAll
                              ((FConstBitSetContainer *)&param_1->ChunkFragments,
                               (TBitArray<FDefaultBitArrayAllocator> *)
                               &this->RequiredAllChunkFragments), bVar1)))) &&
         ((bVar1 = FStructTypeBitSet::FConstBitSetContainer::HasAll
                             ((FConstBitSetContainer *)&param_1->SharedFragments,
                              (TBitArray<FDefaultBitArrayAllocator> *)
                              &this->RequiredAllSharedFragments), bVar1 &&
          (bVar1 = FStructTypeBitSet::FConstBitSetContainer::HasAll
                             ((FConstBitSetContainer *)&param_1->ConstSharedFragments,
                              (TBitArray<FDefaultBitArrayAllocator> *)
                              &this->RequiredAllConstSharedFragments), bVar1)))) {
        return true;
      }
    }
  }
  return false;
}

// DoesArchetypeMatchRequirements @ 147214b70

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
FMassFragmentRequirements::DoesArchetypeMatchRequirements
          (FMassFragmentRequirements *this,FMassArchetypeHandle *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if ((param_1->DataPtr).Object == (FMassArchetypeData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArchetypeHandle.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassRequirements.cpp"
                       ,0xef,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  bVar2 = DoesArchetypeMatchRequirements(this,&((param_1->DataPtr).Object)->CompositionDescriptor);
  return bVar2;
}

// DoesMatchAnyOptionals @ 147214f40

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
FMassFragmentRequirements::DoesMatchAnyOptionals
          (FMassFragmentRequirements *this,FMassArchetypeCompositionDescriptor *param_1)

{
  bool bVar1;
  
  if (this->bHasOptionalRequirements == 0) {
    return false;
  }
  bVar1 = FStructTypeBitSet::FConstBitSetContainer::HasAny
                    ((FConstBitSetContainer *)param_1,
                     (TBitArray<FDefaultBitArrayAllocator> *)&this->RequiredOptionalFragments);
  if ((((!bVar1) &&
       (bVar1 = FStructTypeBitSet::FConstBitSetContainer::HasAny
                          ((FConstBitSetContainer *)&param_1->Tags,
                           (TBitArray<FDefaultBitArrayAllocator> *)&this->RequiredOptionalTags),
       !bVar1)) &&
      (bVar1 = FStructTypeBitSet::FConstBitSetContainer::HasAny
                         ((FConstBitSetContainer *)&param_1->ChunkFragments,
                          (TBitArray<FDefaultBitArrayAllocator> *)
                          &this->RequiredOptionalChunkFragments), !bVar1)) &&
     ((bVar1 = FStructTypeBitSet::FConstBitSetContainer::HasAny
                         ((FConstBitSetContainer *)&param_1->SharedFragments,
                          (TBitArray<FDefaultBitArrayAllocator> *)
                          &this->RequiredOptionalSharedFragments), !bVar1 &&
      (bVar1 = FStructTypeBitSet::FConstBitSetContainer::HasAny
                         ((FConstBitSetContainer *)&param_1->ConstSharedFragments,
                          (TBitArray<FDefaultBitArrayAllocator> *)
                          &this->RequiredOptionalConstSharedFragments), !bVar1)))) {
    return false;
  }
  return true;
}

// ExportRequirements @ 147219250

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
FMassFragmentRequirements::ExportRequirements
          (FMassFragmentRequirements *this,FMassExecutionRequirements *param_1)

{
  FMassFragmentRequirementDescription *pFVar1;
  UStruct *pUVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UStruct *pUVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  UStruct *local_res10;
  undefined4 uStack_7c;
  undefined4 uStack_6c;
  undefined4 uStack_5c;
  TArrayView<FMassFragmentRequirementDescription_const_,int> local_58;
  TArrayView<FMassFragmentRequirementDescription_const_,int> local_48;
  TArrayView<FMassFragmentRequirementDescription_const_,int> local_38;
  
  iVar5 = (this->FragmentRequirements).ArrayNum;
  pFVar1 = (FMassFragmentRequirementDescription *)
           (this->FragmentRequirements).AllocatorInstance.Data;
  if ((iVar5 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_58._12_4_ = uStack_7c;
  local_58.ArrayNum = iVar5;
  local_58.DataPtr = pFVar1;
  UE::Mass::Private::
  ExportRequirements<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>_>
            (&local_58,&param_1->Fragments);
  local_48.DataPtr =
       (FMassFragmentRequirementDescription *)
       (this->ChunkFragmentRequirements).AllocatorInstance.Data;
  iVar5 = (this->ChunkFragmentRequirements).ArrayNum;
  if ((iVar5 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_48._12_4_ = uStack_6c;
  local_48.ArrayNum = iVar5;
  UE::Mass::Private::
  ExportRequirements<TStructTypeBitSet<FMassChunkFragment,FMassChunkFragmentBitSetStructTrackerWrapper,UScriptStruct>_>
            (&local_48,&param_1->ChunkFragments);
  local_38.DataPtr =
       (FMassFragmentRequirementDescription *)
       (this->SharedFragmentRequirements).AllocatorInstance.Data;
  iVar5 = (this->SharedFragmentRequirements).ArrayNum;
  if ((iVar5 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_38._12_4_ = uStack_5c;
  local_38.ArrayNum = iVar5;
  UE::Mass::Private::
  ExportRequirements<TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>_>
            (&local_38,&param_1->SharedFragments);
  iVar5 = (this->ConstSharedFragmentRequirements).ArrayNum;
  pFVar7 = (this->ConstSharedFragmentRequirements).AllocatorInstance.Data;
  if ((iVar5 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar8 = pFVar7 + (longlong)iVar5 * 0x10;
  do {
    if (pFVar7 == pFVar8) {
      if (&param_1->RequiredAllTags != &this->RequiredAllTags) {
        TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                  ((TBitArray<FDefaultBitArrayAllocator> *)&param_1->RequiredAllTags,
                   (TBitArray<FDefaultBitArrayAllocator> *)&this->RequiredAllTags);
      }
      if (&param_1->RequiredAnyTags != &this->RequiredAnyTags) {
        TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                  ((TBitArray<FDefaultBitArrayAllocator> *)&param_1->RequiredAnyTags,
                   (TBitArray<FDefaultBitArrayAllocator> *)&this->RequiredAnyTags);
      }
      if (&param_1->RequiredNoneTags != &this->RequiredNoneTags) {
        TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                  ((TBitArray<FDefaultBitArrayAllocator> *)&param_1->RequiredNoneTags,
                   (TBitArray<FDefaultBitArrayAllocator> *)&this->RequiredNoneTags);
      }
      return;
    }
    if (pFVar7[9] != (FScriptContainerElement)0x2) {
      if ((*(longlong *)pFVar7 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Requirement.StructType",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassRequirements.cpp"
                             ,0x2e,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (pFVar7[8] != (FScriptContainerElement)0x1) {
        local_res8[0] = 0;
        bVar4 = `UE::Mass::Private::
                ExportRequirements<TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>_>'
                ::__l17::<lambda_1>::operator()(local_res8);
        if (!bVar4) goto LAB_14721947c;
      }
      pUVar2 = *(UStruct **)pFVar7;
      pUVar6 = TTypeBitSetBase<TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassConstSharedFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
               ::GetBaseUStruct();
      if (pUVar6 == (UStruct *)0x0) {
LAB_147219446:
        local_res10 = pUVar2;
        bVar4 = `TTypeBitSetBase<TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassConstSharedFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
                ::Add'::__l6::<lambda_1>::operator()(&local_res10);
        if (!bVar4) goto LAB_14721947c;
      }
      else {
        iVar5 = (int)pUVar6->_padding_;
        if (((int)pUVar2->_padding_ < iVar5) ||
           ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar5 * 8) !=
            &pUVar6->_padding_)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (!bVar4) goto LAB_147219446;
      }
      iVar5 = FStructTracker::FindOrAddStructTypeIndex
                        (&FMassConstSharedFragmentBitSetStructTrackerWrapper::StructTracker,pUVar2);
      FStructTypeBitSet::FBitSetContainer::AddAtIndex
                ((FBitSetContainer *)&param_1->ConstSharedFragments,iVar5);
    }
LAB_14721947c:
    pFVar7 = pFVar7 + 0x10;
  } while( true );
}

// Initialize @ 14722cb40

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMassFragmentRequirements::Initialize
          (FMassFragmentRequirements *this,TSharedRef<FMassEntityManager,1> *param_1)

{
  FMassEntityManager *pFVar1;
  FMassEntityManager *local_18;
  FSharedReferencer<1> local_10;
  
  if (((2 < (byte)LogMass._0_1_) &&
      (pFVar1 = (this->CachedEntityManager).Object, pFVar1 != (FMassEntityManager *)0x0)) &&
     (pFVar1 != param_1->Object)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMass);
  }
  if (this->bInitialized == 0) {
    local_10.ReferenceController = (param_1->SharedReferenceCount).ReferenceController;
    local_18 = param_1->Object;
    if (local_10.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_10.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_10.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (&this->CachedEntityManager != (TSharedPtr<FMassEntityManager,1> *)&local_18) {
      (this->CachedEntityManager).Object = local_18;
      local_18 = (FMassEntityManager *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->CachedEntityManager).SharedReferenceCount,&local_10);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_10.ReferenceController);
    this->bInitialized = 1;
  }
  return;
}

// IsEmpty @ 147232380

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall FMassFragmentRequirements::IsEmpty(FMassFragmentRequirements *this)

{
  bool bVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  
  uVar5 = *(ushort *)&this->field_0x270;
  if (ZPULL(uVar5,0,1) == 0) {
    bVar1 = FStructTypeBitSet::FConstBitSetContainer::IsEmpty
                      ((FConstBitSetContainer *)&this->RequiredAllTags);
    uVar4 = 0;
    if ((((!bVar1) ||
         (bVar1 = FStructTypeBitSet::FConstBitSetContainer::IsEmpty
                            ((FConstBitSetContainer *)&this->RequiredAnyTags), !bVar1)) ||
        (bVar1 = FStructTypeBitSet::FConstBitSetContainer::IsEmpty
                           ((FConstBitSetContainer *)&this->RequiredAllFragments), !bVar1)) ||
       (((bVar1 = FStructTypeBitSet::FConstBitSetContainer::IsEmpty
                            ((FConstBitSetContainer *)&this->RequiredAnyFragments), !bVar1 ||
         (bVar1 = FStructTypeBitSet::FConstBitSetContainer::IsEmpty
                            ((FConstBitSetContainer *)&this->RequiredAllChunkFragments), !bVar1)) ||
        ((bVar1 = FStructTypeBitSet::FConstBitSetContainer::IsEmpty
                            ((FConstBitSetContainer *)&this->RequiredAllSharedFragments), !bVar1 ||
         (bVar1 = FStructTypeBitSet::FConstBitSetContainer::IsEmpty
                            ((FConstBitSetContainer *)&this->RequiredAllConstSharedFragments),
         uVar2 = uVar4, !bVar1)))))) {
      uVar2 = 2;
    }
    *(ushort *)&this->field_0x270 = uVar5 & 0xfffd | uVar2;
    bVar1 = FStructTypeBitSet::FConstBitSetContainer::IsEmpty
                      ((FConstBitSetContainer *)&this->RequiredNoneTags);
    if (((bVar1) &&
        (bVar1 = FStructTypeBitSet::FConstBitSetContainer::IsEmpty
                           ((FConstBitSetContainer *)&this->RequiredNoneFragments), bVar1)) &&
       ((bVar1 = FStructTypeBitSet::FConstBitSetContainer::IsEmpty
                           ((FConstBitSetContainer *)&this->RequiredNoneChunkFragments), bVar1 &&
        ((bVar1 = FStructTypeBitSet::FConstBitSetContainer::IsEmpty
                            ((FConstBitSetContainer *)&this->RequiredNoneSharedFragments), bVar1 &&
         (bVar1 = FStructTypeBitSet::FConstBitSetContainer::IsEmpty
                            ((FConstBitSetContainer *)&this->RequiredNoneConstSharedFragments),
         bVar1)))))) {
      uVar3 = 0;
    }
    else {
      uVar3 = 4;
    }
    *(ushort *)&this->field_0x270 = uVar5 & 0xfff9 | uVar2 | uVar3;
    bVar1 = FStructTypeBitSet::FConstBitSetContainer::IsEmpty
                      ((FConstBitSetContainer *)&this->RequiredOptionalFragments);
    if ((((!bVar1) ||
         (bVar1 = FStructTypeBitSet::FConstBitSetContainer::IsEmpty
                            ((FConstBitSetContainer *)&this->RequiredOptionalTags), !bVar1)) ||
        (bVar1 = FStructTypeBitSet::FConstBitSetContainer::IsEmpty
                           ((FConstBitSetContainer *)&this->RequiredOptionalChunkFragments), !bVar1)
        ) || ((bVar1 = FStructTypeBitSet::FConstBitSetContainer::IsEmpty
                                 ((FConstBitSetContainer *)&this->RequiredOptionalSharedFragments),
              !bVar1 || (bVar1 = FStructTypeBitSet::FConstBitSetContainer::IsEmpty
                                           ((FConstBitSetContainer *)
                                            &this->RequiredOptionalConstSharedFragments), !bVar1))))
    {
      uVar4 = 8;
    }
    uVar5 = uVar5 & 0xfff1 | uVar2 | uVar3 | uVar4 | 1;
    *(ushort *)&this->field_0x270 = uVar5;
  }
  return (uVar5 & 0xe) == 0;
}

// IsGameThreadOnlySharedFragment @ 1472329e0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
FMassFragmentRequirements::IsGameThreadOnlySharedFragment
          (FMassFragmentRequirements *this,TNotNull<UScriptStruct_const_*> param_1)

{
  FTypeManager *pFVar1;
  code *pcVar2;
  UScriptStruct *pUVar3;
  bool bVar4;
  undefined1 uVar5;
  FTypeInfo *pFVar6;
  TVariant<UE::Mass::FEmptyTypeTraits,UE::Mass::FSubsystemTypeTraits,UE::Mass::FSharedFragmentTypeTraits,UE::Mass::Relations::FRelationTypeTraits>
  *pTVar7;
  FWeakObjectPtr local_res8;
  UScriptStruct *local_res10;
  undefined8 local_res18;
  UScriptStruct *local_res20;
  FWeakObjectPtr local_38;
  UScriptStruct **local_30;
  UScriptStruct **local_28 [2];
  
  local_res10 = param_1.Val;
  if (((this->CachedEntityManager).Object == (FMassEntityManager *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("CachedEntityManager",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassRequirements.cpp"
                         ,0xa8,L"Not having a cached EntityManager at this point is not expected."),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  if (((this->CachedEntityManager).Object == (FMassEntityManager *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  pUVar3 = local_res10;
  local_res18 = 0;
  pFVar1 = (((this->CachedEntityManager).Object)->TypeManager).Object;
  if (local_res10 == (UScriptStruct *)0x0) {
    local_38.ObjectIndex = 0;
    local_38.ObjectSerialNumber = 0;
  }
  else {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)local_res10);
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res20 = pUVar3;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UScriptStruct *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res20);
    local_38 = local_res8;
  }
  pFVar6 = TMapBase<UE::Mass::FTypeHandle,UE::Mass::FTypeInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Mass::FTypeHandle,UE::Mass::FTypeInfo,0>_>
           ::Find((TMapBase<UE::Mass::FTypeHandle,UE::Mass::FTypeInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Mass::FTypeHandle,UE::Mass::FTypeInfo,0>_>
                   *)&pFVar1->TypeDataMap,(FTypeHandle *)&local_38);
  if (pFVar6 == (FTypeInfo *)0x0) {
    local_30 = &local_res10;
    bVar4 = `FMassFragmentRequirements::IsGameThreadOnlySharedFragment'::__l12::<lambda_1>::
            operator()(&local_30);
    if (!bVar4) {
      return true;
    }
  }
  pTVar7 = &pFVar6->Traits;
  if ((pFVar6->Traits).TypeIndex != '\x02') {
    pTVar7 = (TVariant<UE::Mass::FEmptyTypeTraits,UE::Mass::FSubsystemTypeTraits,UE::Mass::FSharedFragmentTypeTraits,UE::Mass::Relations::FRelationTypeTraits>
              *)0x0;
  }
  if (pTVar7 == (TVariant<UE::Mass::FEmptyTypeTraits,UE::Mass::FSubsystemTypeTraits,UE::Mass::FSharedFragmentTypeTraits,UE::Mass::Relations::FRelationTypeTraits>
                 *)0x0) {
    local_28[0] = &local_res10;
    bVar4 = `FMassFragmentRequirements::IsGameThreadOnlySharedFragment'::__l15::<lambda_2>::
            operator()(local_28);
    if (!bVar4) {
      return true;
    }
  }
  return (bool)*(undefined1 *)pTVar7;
}

// Reset @ 147248c10

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall FMassFragmentRequirements::Reset(FMassFragmentRequirements *this)

{
  (this->FragmentRequirements).ArrayNum = 0;
  if ((this->FragmentRequirements).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)this,0,&(this->FragmentRequirements).ArrayMax);
  }
  (this->ChunkFragmentRequirements).ArrayNum = 0;
  if ((this->ChunkFragmentRequirements).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->ChunkFragmentRequirements).AllocatorInstance,0,
               &(this->ChunkFragmentRequirements).ArrayMax);
  }
  (this->ConstSharedFragmentRequirements).ArrayNum = 0;
  if ((this->ConstSharedFragmentRequirements).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->ConstSharedFragmentRequirements).AllocatorInstance,0,
               &(this->ConstSharedFragmentRequirements).ArrayMax);
  }
  (this->SharedFragmentRequirements).ArrayNum = 0;
  if ((this->SharedFragmentRequirements).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->SharedFragmentRequirements).AllocatorInstance,0,
               &(this->SharedFragmentRequirements).ArrayMax);
  }
  *(undefined4 *)&(this->RequiredAllTags).field_0x18 = 0;
  *(undefined4 *)&(this->RequiredAnyTags).field_0x18 = 0;
  *(undefined4 *)&(this->RequiredNoneTags).field_0x18 = 0;
  *(undefined4 *)&(this->RequiredAllFragments).field_0x18 = 0;
  *(undefined4 *)&(this->RequiredAnyFragments).field_0x18 = 0;
  *(undefined4 *)&(this->RequiredOptionalFragments).field_0x18 = 0;
  *(undefined4 *)&(this->RequiredNoneFragments).field_0x18 = 0;
  *(undefined4 *)&(this->RequiredAllChunkFragments).field_0x18 = 0;
  *(undefined4 *)&(this->RequiredOptionalChunkFragments).field_0x18 = 0;
  *(undefined4 *)&(this->RequiredNoneChunkFragments).field_0x18 = 0;
  *(undefined4 *)&(this->RequiredAllSharedFragments).field_0x18 = 0;
  *(undefined4 *)&(this->RequiredOptionalSharedFragments).field_0x18 = 0;
  *(undefined4 *)&(this->RequiredNoneSharedFragments).field_0x18 = 0;
  *(undefined4 *)&(this->RequiredAllConstSharedFragments).field_0x18 = 0;
  *(undefined4 *)&(this->RequiredOptionalConstSharedFragments).field_0x18 = 0;
  *(undefined4 *)&(this->RequiredNoneConstSharedFragments).field_0x18 = 0;
  this->IncrementalChangesCount = 0;
  return;
}

// SortRequirements @ 1472501a0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall FMassFragmentRequirements::SortRequirements(FMassFragmentRequirements *this)

{
  FIdentityFunctor local_res8 [32];
  
  AlgoImpl::
  IntroSortInternal<FMassFragmentRequirementDescription,int,FIdentityFunctor,TDereferenceWrapper<FMassFragmentRequirementDescription,FScriptStructSortOperator>_>
            ((FMassFragmentRequirementDescription *)
             (this->FragmentRequirements).AllocatorInstance.Data,
             (this->FragmentRequirements).ArrayNum,local_res8[0],
             (FScriptStructSortOperator *)local_res8);
  AlgoImpl::
  IntroSortInternal<FMassFragmentRequirementDescription,int,FIdentityFunctor,TDereferenceWrapper<FMassFragmentRequirementDescription,FScriptStructSortOperator>_>
            ((FMassFragmentRequirementDescription *)
             (this->ChunkFragmentRequirements).AllocatorInstance.Data,
             (this->ChunkFragmentRequirements).ArrayNum,local_res8[0],
             (FScriptStructSortOperator *)local_res8);
  AlgoImpl::
  IntroSortInternal<FMassFragmentRequirementDescription,int,FIdentityFunctor,TDereferenceWrapper<FMassFragmentRequirementDescription,FScriptStructSortOperator>_>
            ((FMassFragmentRequirementDescription *)
             (this->ConstSharedFragmentRequirements).AllocatorInstance.Data,
             (this->ConstSharedFragmentRequirements).ArrayNum,local_res8[0],
             (FScriptStructSortOperator *)local_res8);
  AlgoImpl::
  IntroSortInternal<FMassFragmentRequirementDescription,int,FIdentityFunctor,TDereferenceWrapper<FMassFragmentRequirementDescription,FScriptStructSortOperator>_>
            ((FMassFragmentRequirementDescription *)
             (this->SharedFragmentRequirements).AllocatorInstance.Data,
             (this->SharedFragmentRequirements).ArrayNum,local_res8[0],
             (FScriptStructSortOperator *)local_res8);
  return;
}

// operator() @ 150505700

bool __thiscall
`FMassFragmentRequirements::IsGameThreadOnlySharedFragment'::__l12::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FName local_res10 [3];
  FString local_18;
  
  bVar4 = false;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<2502732341651177643>);
  if (bVar2) {
    local_res10[0] = *(FName *)(**(longlong **)this + 0x18);
    ::FName::ToString(local_res10,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<2502732341651177643>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150505778;
    }
  }
  bVar2 = false;
LAB_150505778:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 150505b50

bool __thiscall
`FMassFragmentRequirements::IsGameThreadOnlySharedFragment'::__l15::<lambda_2>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FName local_res10 [3];
  FString local_18;
  
  bVar4 = false;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<2502732341651177646>);
  if (bVar2) {
    local_res10[0] = *(FName *)(**(longlong **)this + 0x18);
    ::FName::ToString(local_res10,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<2502732341651177646>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150505bc8;
    }
  }
  bVar2 = false;
LAB_150505bc8:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

