// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 20

// AddChunkRequirement<FTestChunkFragment_Int> @ 1470d2c80

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FMassFragmentRequirements * __thiscall
FMassFragmentRequirements::AddChunkRequirement<FTestChunkFragment_Int>
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
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  FName local_res8;
  FString local_28;
  
  if ((this->bInitialized == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("bInitialized",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassRequirements.h"
                         ,0x13a,L"Modifying requirements before initialization is not supported."),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FMassFragmentRequirements *)(*pcVar2)();
    return pFVar5;
  }
  pFVar9 = (this->ChunkFragmentRequirements).AllocatorInstance.Data;
  pFVar10 = pFVar9 + (longlong)(this->ChunkFragmentRequirements).ArrayNum * 0x10;
  pUVar7 = Z_Registration_Info_UScriptStruct_FTestChunkFragment_Int.OuterSingleton;
  for (; pFVar9 != pFVar10; pFVar9 = pFVar9 + 0x10) {
    if (pUVar7 == (UScriptStruct *)0x0) {
      pUVar6 = Z_Construct_UPackage__Script_MassEntityTestSuite();
      pUVar7 = GetStaticStruct(Z_Construct_UScriptStruct_FTestChunkFragment_Int,(UObject *)pUVar6,
                               L"TestChunkFragment_Int");
      Z_Registration_Info_UScriptStruct_FTestChunkFragment_Int.OuterSingleton = pUVar7;
    }
    if (*(UScriptStruct **)pFVar9 == pUVar7) {
      if (pUVar7 == (UScriptStruct *)0x0) {
        pUVar6 = Z_Construct_UPackage__Script_MassEntityTestSuite();
        pUVar7 = GetStaticStruct(Z_Construct_UScriptStruct_FTestChunkFragment_Int,(UObject *)pUVar6,
                                 L"TestChunkFragment_Int");
        Z_Registration_Info_UScriptStruct_FTestChunkFragment_Int.OuterSingleton = pUVar7;
      }
      local_res8 = (FName)pUVar7->_padding_;
      ::FName::ToString(&local_res8,&local_28);
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ChunkFragmentRequirements.FindByPredicate([](const FMassFragmentRequirementDescription& Item) { return Item.StructType == T::StaticStruct(); }) == nullptr"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassRequirements.h"
                         ,0x13c,L"Duplicated requirements are not supported. %s already present");
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FMassFragmentRequirements *)(*pcVar2)();
        return pFVar5;
      }
      break;
    }
  }
  if ((param_2 == Any) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Presence != EMassFragmentPresence::Any",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassRequirements.h"
                         ,0x13d,L"\'Any\' is not a valid Presence value for AddChunkRequirement."),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FMassFragmentRequirements *)(*pcVar2)();
    return pFVar5;
  }
  if (param_2 == All) {
    TStructTypeBitSet<FMassChunkFragment,FMassChunkFragmentBitSetStructTrackerWrapper,UScriptStruct>
    ::Add<FTestChunkFragment_Int>(&this->RequiredAllChunkFragments);
    if (Z_Registration_Info_UScriptStruct_FTestChunkFragment_Int.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar6 = Z_Construct_UPackage__Script_MassEntityTestSuite();
      Z_Registration_Info_UScriptStruct_FTestChunkFragment_Int.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FTestChunkFragment_Int,(UObject *)pUVar6,
                           L"TestChunkFragment_Int");
    }
    pUVar7 = Z_Registration_Info_UScriptStruct_FTestChunkFragment_Int.OuterSingleton;
    iVar4 = (this->ChunkFragmentRequirements).ArrayNum;
    piVar1 = &(this->ChunkFragmentRequirements).ArrayMax;
    if (iVar4 == *piVar1) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&(this->ChunkFragmentRequirements).AllocatorInstance,piVar1);
    }
    (this->ChunkFragmentRequirements).ArrayNum = iVar4 + 1;
    lVar8 = (longlong)iVar4;
    pFVar9 = (this->ChunkFragmentRequirements).AllocatorInstance.Data;
    *(UScriptStruct **)(pFVar9 + lVar8 * 0x10) = pUVar7;
    pFVar9[lVar8 * 0x10 + 8] = (FScriptContainerElement)param_1;
    pFVar9[lVar8 * 0x10 + 9] = (FScriptContainerElement)0x0;
    if ((pUVar7 == (UScriptStruct *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InStruct",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassRequirements.h"
                           ,0x265,L""), bVar3)) {
code_r0x0001470d2f5e:
      pcVar2 = (code *)swi(3);
      pFVar5 = (FMassFragmentRequirements *)(*pcVar2)();
      return pFVar5;
    }
  }
  else if (param_2 == None) {
    TStructTypeBitSet<FMassChunkFragment,FMassChunkFragmentBitSetStructTrackerWrapper,UScriptStruct>
    ::Add<FTestChunkFragment_Int>(&this->RequiredNoneChunkFragments);
  }
  else if (param_2 == Optional) {
    TStructTypeBitSet<FMassChunkFragment,FMassChunkFragmentBitSetStructTrackerWrapper,UScriptStruct>
    ::Add<FTestChunkFragment_Int>(&this->RequiredOptionalChunkFragments);
    if (Z_Registration_Info_UScriptStruct_FTestChunkFragment_Int.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar6 = Z_Construct_UPackage__Script_MassEntityTestSuite();
      Z_Registration_Info_UScriptStruct_FTestChunkFragment_Int.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FTestChunkFragment_Int,(UObject *)pUVar6,
                           L"TestChunkFragment_Int");
    }
    pUVar7 = Z_Registration_Info_UScriptStruct_FTestChunkFragment_Int.OuterSingleton;
    iVar4 = (this->ChunkFragmentRequirements).ArrayNum;
    piVar1 = &(this->ChunkFragmentRequirements).ArrayMax;
    if (iVar4 == *piVar1) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&(this->ChunkFragmentRequirements).AllocatorInstance,piVar1);
    }
    (this->ChunkFragmentRequirements).ArrayNum = iVar4 + 1;
    lVar8 = (longlong)iVar4;
    pFVar9 = (this->ChunkFragmentRequirements).AllocatorInstance.Data;
    *(UScriptStruct **)(pFVar9 + lVar8 * 0x10) = pUVar7;
    pFVar9[lVar8 * 0x10 + 8] = (FScriptContainerElement)param_1;
    pFVar9[lVar8 * 0x10 + 9] = (FScriptContainerElement)0x3;
    if ((pUVar7 == (UScriptStruct *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InStruct",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassRequirements.h"
                           ,0x265,L""), bVar3)) goto code_r0x0001470d2f5e;
  }
  this->IncrementalChangesCount = this->IncrementalChangesCount + 1;
  this->bPropertiesCached = 0;
  return this;
}

// AddConstSharedRequirement<FTestConstSharedFragment_Int> @ 1470d2fa0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FMassFragmentRequirements * __thiscall
FMassFragmentRequirements::AddConstSharedRequirement<FTestConstSharedFragment_Int>
          (FMassFragmentRequirements *this,EMassFragmentPresence param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FMassFragmentRequirements *pFVar5;
  UPackage *pUVar6;
  UScriptStruct *pUVar7;
  longlong lVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  FName local_res8;
  FString local_28;
  
  if ((this->bInitialized == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("bInitialized",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassRequirements.h"
                         ,0x16e,L"Modifying requirements before initialization is not supported."),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FMassFragmentRequirements *)(*pcVar2)();
    return pFVar5;
  }
  pFVar9 = (this->ConstSharedFragmentRequirements).AllocatorInstance.Data;
  pFVar10 = pFVar9 + (longlong)(this->ConstSharedFragmentRequirements).ArrayNum * 0x10;
  pUVar7 = Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton;
  for (; pFVar9 != pFVar10; pFVar9 = pFVar9 + 0x10) {
    if (pUVar7 == (UScriptStruct *)0x0) {
      pUVar6 = Z_Construct_UPackage__Script_MassEntityTestSuite();
      pUVar7 = GetStaticStruct(Z_Construct_UScriptStruct_FTestConstSharedFragment_Int,
                               (UObject *)pUVar6,L"TestConstSharedFragment_Int");
      Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton = pUVar7;
    }
    if (*(UScriptStruct **)pFVar9 == pUVar7) {
      if (pUVar7 == (UScriptStruct *)0x0) {
        pUVar6 = Z_Construct_UPackage__Script_MassEntityTestSuite();
        pUVar7 = GetStaticStruct(Z_Construct_UScriptStruct_FTestConstSharedFragment_Int,
                                 (UObject *)pUVar6,L"TestConstSharedFragment_Int");
        Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton = pUVar7;
      }
      local_res8 = (FName)pUVar7->_padding_;
      ::FName::ToString(&local_res8,&local_28);
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ConstSharedFragmentRequirements.FindByPredicate([](const FMassFragmentRequirementDescription& Item) { return Item.StructType == T::StaticStruct(); }) == nullptr"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassRequirements.h"
                         ,0x170,L"Duplicated requirements are not supported. %s already present");
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FMassFragmentRequirements *)(*pcVar2)();
        return pFVar5;
      }
      break;
    }
  }
  if ((param_1 == Any) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Presence != EMassFragmentPresence::Any",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassRequirements.h"
                         ,0x171,
                         L"\'Any\' is not a valid Presence value for AddConstSharedRequirement."),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FMassFragmentRequirements *)(*pcVar2)();
    return pFVar5;
  }
  if (param_1 == All) {
    iVar4 = TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
            ::GetTypeIndex<FTestConstSharedFragment_Int>();
    FStructTypeBitSet::FBitSetContainer::AddAtIndex
              ((FBitSetContainer *)&this->RequiredAllConstSharedFragments,iVar4);
    if (Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar6 = Z_Construct_UPackage__Script_MassEntityTestSuite();
      Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FTestConstSharedFragment_Int,(UObject *)pUVar6,
                           L"TestConstSharedFragment_Int");
    }
    pUVar7 = Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton;
    iVar4 = (this->ConstSharedFragmentRequirements).ArrayNum;
    piVar1 = &(this->ConstSharedFragmentRequirements).ArrayMax;
    if (iVar4 == *piVar1) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&(this->ConstSharedFragmentRequirements).AllocatorInstance,piVar1);
    }
    (this->ConstSharedFragmentRequirements).ArrayNum = iVar4 + 1;
    lVar8 = (longlong)iVar4;
    pFVar9 = (this->ConstSharedFragmentRequirements).AllocatorInstance.Data;
    *(UScriptStruct **)(pFVar9 + lVar8 * 0x10) = pUVar7;
    pFVar9[lVar8 * 0x10 + 8] = (FScriptContainerElement)0x1;
    pFVar9[lVar8 * 0x10 + 9] = (FScriptContainerElement)0x0;
    if ((pUVar7 == (UScriptStruct *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InStruct",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassRequirements.h"
                           ,0x265,L""), bVar3)) {
code_r0x0001470d3289:
      pcVar2 = (code *)swi(3);
      pFVar5 = (FMassFragmentRequirements *)(*pcVar2)();
      return pFVar5;
    }
  }
  else if (param_1 == None) {
    iVar4 = TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
            ::GetTypeIndex<FTestConstSharedFragment_Int>();
    FStructTypeBitSet::FBitSetContainer::AddAtIndex
              ((FBitSetContainer *)&this->RequiredNoneConstSharedFragments,iVar4);
  }
  else if (param_1 == Optional) {
    iVar4 = TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
            ::GetTypeIndex<FTestConstSharedFragment_Int>();
    FStructTypeBitSet::FBitSetContainer::AddAtIndex
              ((FBitSetContainer *)&this->RequiredOptionalConstSharedFragments,iVar4);
    if (Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar6 = Z_Construct_UPackage__Script_MassEntityTestSuite();
      Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FTestConstSharedFragment_Int,(UObject *)pUVar6,
                           L"TestConstSharedFragment_Int");
    }
    pUVar7 = Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton;
    iVar4 = (this->ConstSharedFragmentRequirements).ArrayNum;
    piVar1 = &(this->ConstSharedFragmentRequirements).ArrayMax;
    if (iVar4 == *piVar1) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&(this->ConstSharedFragmentRequirements).AllocatorInstance,piVar1);
    }
    (this->ConstSharedFragmentRequirements).ArrayNum = iVar4 + 1;
    lVar8 = (longlong)iVar4;
    pFVar9 = (this->ConstSharedFragmentRequirements).AllocatorInstance.Data;
    *(UScriptStruct **)(pFVar9 + lVar8 * 0x10) = pUVar7;
    pFVar9[lVar8 * 0x10 + 8] = (FScriptContainerElement)0x1;
    pFVar9[lVar8 * 0x10 + 9] = (FScriptContainerElement)0x3;
    if ((pUVar7 == (UScriptStruct *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InStruct",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassRequirements.h"
                           ,0x265,L""), bVar3)) goto code_r0x0001470d3289;
  }
  this->IncrementalChangesCount = this->IncrementalChangesCount + 1;
  this->bPropertiesCached = 0;
  return this;
}

// AddRequirement<FFarmCropFragment> @ 1470d37d0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FMassFragmentRequirements * __thiscall
FMassFragmentRequirements::AddRequirement<FFarmCropFragment>
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
  TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct> *this_00;
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
  pUVar7 = Z_Registration_Info_UScriptStruct_FFarmCropFragment.OuterSingleton;
  for (; pFVar10 != pFVar9; pFVar10 = pFVar10 + 0x10) {
    if (pUVar7 == (UScriptStruct *)0x0) {
      pUVar6 = Z_Construct_UPackage__Script_MassEntityTestSuite();
      pUVar7 = GetStaticStruct(Z_Construct_UScriptStruct_FFarmCropFragment,(UObject *)pUVar6,
                               L"FarmCropFragment");
      Z_Registration_Info_UScriptStruct_FFarmCropFragment.OuterSingleton = pUVar7;
    }
    if (*(UScriptStruct **)pFVar10 == pUVar7) {
      if (pUVar7 == (UScriptStruct *)0x0) {
        pUVar6 = Z_Construct_UPackage__Script_MassEntityTestSuite();
        pUVar7 = GetStaticStruct(Z_Construct_UScriptStruct_FFarmCropFragment,(UObject *)pUVar6,
                                 L"FarmCropFragment");
        Z_Registration_Info_UScriptStruct_FFarmCropFragment.OuterSingleton = pUVar7;
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
      pUVar7 = Z_Registration_Info_UScriptStruct_FFarmCropFragment.OuterSingleton;
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
      pUVar6 = Z_Construct_UPackage__Script_MassEntityTestSuite();
      pUVar7 = GetStaticStruct(Z_Construct_UScriptStruct_FFarmCropFragment,(UObject *)pUVar6,
                               L"FarmCropFragment");
      Z_Registration_Info_UScriptStruct_FFarmCropFragment.OuterSingleton = pUVar7;
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
    this_00 = &this->RequiredAllFragments;
  }
  else if (param_2 == Any) {
    this_00 = &this->RequiredAnyFragments;
  }
  else if (param_2 == None) {
    this_00 = &this->RequiredNoneFragments;
  }
  else {
    if (param_2 != Optional) goto LAB_1470d3a07;
    this_00 = &this->RequiredOptionalFragments;
  }
  TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>::
  Add<FFarmCropFragment>(this_00);
LAB_1470d3a07:
  this->IncrementalChangesCount = this->IncrementalChangesCount + 1;
  this->bPropertiesCached = 0;
  return this;
}

// AddRequirement<FFarmFlowerFragment> @ 1470d3a30

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FMassFragmentRequirements * __thiscall
FMassFragmentRequirements::AddRequirement<FFarmFlowerFragment>
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
  TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct> *this_00;
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
  pUVar7 = Z_Registration_Info_UScriptStruct_FFarmFlowerFragment.OuterSingleton;
  for (; pFVar10 != pFVar9; pFVar10 = pFVar10 + 0x10) {
    if (pUVar7 == (UScriptStruct *)0x0) {
      pUVar6 = Z_Construct_UPackage__Script_MassEntityTestSuite();
      pUVar7 = GetStaticStruct(Z_Construct_UScriptStruct_FFarmFlowerFragment,(UObject *)pUVar6,
                               L"FarmFlowerFragment");
      Z_Registration_Info_UScriptStruct_FFarmFlowerFragment.OuterSingleton = pUVar7;
    }
    if (*(UScriptStruct **)pFVar10 == pUVar7) {
      if (pUVar7 == (UScriptStruct *)0x0) {
        pUVar6 = Z_Construct_UPackage__Script_MassEntityTestSuite();
        pUVar7 = GetStaticStruct(Z_Construct_UScriptStruct_FFarmFlowerFragment,(UObject *)pUVar6,
                                 L"FarmFlowerFragment");
        Z_Registration_Info_UScriptStruct_FFarmFlowerFragment.OuterSingleton = pUVar7;
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
      pUVar7 = Z_Registration_Info_UScriptStruct_FFarmFlowerFragment.OuterSingleton;
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
      pUVar6 = Z_Construct_UPackage__Script_MassEntityTestSuite();
      pUVar7 = GetStaticStruct(Z_Construct_UScriptStruct_FFarmFlowerFragment,(UObject *)pUVar6,
                               L"FarmFlowerFragment");
      Z_Registration_Info_UScriptStruct_FFarmFlowerFragment.OuterSingleton = pUVar7;
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
    this_00 = &this->RequiredAllFragments;
  }
  else if (param_2 == Any) {
    this_00 = &this->RequiredAnyFragments;
  }
  else if (param_2 == None) {
    this_00 = &this->RequiredNoneFragments;
  }
  else {
    if (param_2 != Optional) goto LAB_1470d3c67;
    this_00 = &this->RequiredOptionalFragments;
  }
  TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>::
  Add<FFarmFlowerFragment>(this_00);
LAB_1470d3c67:
  this->IncrementalChangesCount = this->IncrementalChangesCount + 1;
  this->bPropertiesCached = 0;
  return this;
}

// AddRequirement<FFarmGridCellData> @ 1470d3c90

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FMassFragmentRequirements * __thiscall
FMassFragmentRequirements::AddRequirement<FFarmGridCellData>
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
  TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct> *this_00;
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
  pUVar7 = Z_Registration_Info_UScriptStruct_FFarmGridCellData.OuterSingleton;
  for (; pFVar10 != pFVar9; pFVar10 = pFVar10 + 0x10) {
    if (pUVar7 == (UScriptStruct *)0x0) {
      pUVar6 = Z_Construct_UPackage__Script_MassEntityTestSuite();
      pUVar7 = GetStaticStruct(Z_Construct_UScriptStruct_FFarmGridCellData,(UObject *)pUVar6,
                               L"FarmGridCellData");
      Z_Registration_Info_UScriptStruct_FFarmGridCellData.OuterSingleton = pUVar7;
    }
    if (*(UScriptStruct **)pFVar10 == pUVar7) {
      if (pUVar7 == (UScriptStruct *)0x0) {
        pUVar6 = Z_Construct_UPackage__Script_MassEntityTestSuite();
        pUVar7 = GetStaticStruct(Z_Construct_UScriptStruct_FFarmGridCellData,(UObject *)pUVar6,
                                 L"FarmGridCellData");
        Z_Registration_Info_UScriptStruct_FFarmGridCellData.OuterSingleton = pUVar7;
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
      pUVar7 = Z_Registration_Info_UScriptStruct_FFarmGridCellData.OuterSingleton;
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
      pUVar6 = Z_Construct_UPackage__Script_MassEntityTestSuite();
      pUVar7 = GetStaticStruct(Z_Construct_UScriptStruct_FFarmGridCellData,(UObject *)pUVar6,
                               L"FarmGridCellData");
      Z_Registration_Info_UScriptStruct_FFarmGridCellData.OuterSingleton = pUVar7;
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
    this_00 = &this->RequiredAllFragments;
  }
  else if (param_2 == Any) {
    this_00 = &this->RequiredAnyFragments;
  }
  else if (param_2 == None) {
    this_00 = &this->RequiredNoneFragments;
  }
  else {
    if (param_2 != Optional) goto LAB_1470d3ec7;
    this_00 = &this->RequiredOptionalFragments;
  }
  TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>::
  Add<FFarmGridCellData>(this_00);
LAB_1470d3ec7:
  this->IncrementalChangesCount = this->IncrementalChangesCount + 1;
  this->bPropertiesCached = 0;
  return this;
}

// AddRequirement<FFarmVisualFragment> @ 1470d3ef0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FMassFragmentRequirements * __thiscall
FMassFragmentRequirements::AddRequirement<FFarmVisualFragment>
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
  TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct> *this_00;
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
  pUVar7 = Z_Registration_Info_UScriptStruct_FFarmVisualFragment.OuterSingleton;
  for (; pFVar10 != pFVar9; pFVar10 = pFVar10 + 0x10) {
    if (pUVar7 == (UScriptStruct *)0x0) {
      pUVar6 = Z_Construct_UPackage__Script_MassEntityTestSuite();
      pUVar7 = GetStaticStruct(Z_Construct_UScriptStruct_FFarmVisualFragment,(UObject *)pUVar6,
                               L"FarmVisualFragment");
      Z_Registration_Info_UScriptStruct_FFarmVisualFragment.OuterSingleton = pUVar7;
    }
    if (*(UScriptStruct **)pFVar10 == pUVar7) {
      if (pUVar7 == (UScriptStruct *)0x0) {
        pUVar6 = Z_Construct_UPackage__Script_MassEntityTestSuite();
        pUVar7 = GetStaticStruct(Z_Construct_UScriptStruct_FFarmVisualFragment,(UObject *)pUVar6,
                                 L"FarmVisualFragment");
        Z_Registration_Info_UScriptStruct_FFarmVisualFragment.OuterSingleton = pUVar7;
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
      pUVar7 = Z_Registration_Info_UScriptStruct_FFarmVisualFragment.OuterSingleton;
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
      pUVar6 = Z_Construct_UPackage__Script_MassEntityTestSuite();
      pUVar7 = GetStaticStruct(Z_Construct_UScriptStruct_FFarmVisualFragment,(UObject *)pUVar6,
                               L"FarmVisualFragment");
      Z_Registration_Info_UScriptStruct_FFarmVisualFragment.OuterSingleton = pUVar7;
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
    this_00 = &this->RequiredAllFragments;
  }
  else if (param_2 == Any) {
    this_00 = &this->RequiredAnyFragments;
  }
  else if (param_2 == None) {
    this_00 = &this->RequiredNoneFragments;
  }
  else {
    if (param_2 != Optional) goto LAB_1470d4127;
    this_00 = &this->RequiredOptionalFragments;
  }
  TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>::
  Add<FFarmVisualFragment>(this_00);
LAB_1470d4127:
  this->IncrementalChangesCount = this->IncrementalChangesCount + 1;
  this->bPropertiesCached = 0;
  return this;
}

// AddRequirement<FFarmWaterFragment> @ 1470d4150

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FMassFragmentRequirements * __thiscall
FMassFragmentRequirements::AddRequirement<FFarmWaterFragment>
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
  TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct> *this_00;
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
  pUVar7 = Z_Registration_Info_UScriptStruct_FFarmWaterFragment.OuterSingleton;
  for (; pFVar10 != pFVar9; pFVar10 = pFVar10 + 0x10) {
    if (pUVar7 == (UScriptStruct *)0x0) {
      pUVar6 = Z_Construct_UPackage__Script_MassEntityTestSuite();
      pUVar7 = GetStaticStruct(Z_Construct_UScriptStruct_FFarmWaterFragment,(UObject *)pUVar6,
                               L"FarmWaterFragment");
      Z_Registration_Info_UScriptStruct_FFarmWaterFragment.OuterSingleton = pUVar7;
    }
    if (*(UScriptStruct **)pFVar10 == pUVar7) {
      if (pUVar7 == (UScriptStruct *)0x0) {
        pUVar6 = Z_Construct_UPackage__Script_MassEntityTestSuite();
        pUVar7 = GetStaticStruct(Z_Construct_UScriptStruct_FFarmWaterFragment,(UObject *)pUVar6,
                                 L"FarmWaterFragment");
        Z_Registration_Info_UScriptStruct_FFarmWaterFragment.OuterSingleton = pUVar7;
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
      pUVar7 = Z_Registration_Info_UScriptStruct_FFarmWaterFragment.OuterSingleton;
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
      pUVar6 = Z_Construct_UPackage__Script_MassEntityTestSuite();
      pUVar7 = GetStaticStruct(Z_Construct_UScriptStruct_FFarmWaterFragment,(UObject *)pUVar6,
                               L"FarmWaterFragment");
      Z_Registration_Info_UScriptStruct_FFarmWaterFragment.OuterSingleton = pUVar7;
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
    this_00 = &this->RequiredAllFragments;
  }
  else if (param_2 == Any) {
    this_00 = &this->RequiredAnyFragments;
  }
  else if (param_2 == None) {
    this_00 = &this->RequiredNoneFragments;
  }
  else {
    if (param_2 != Optional) goto LAB_1470d4387;
    this_00 = &this->RequiredOptionalFragments;
  }
  TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>::
  Add<FFarmWaterFragment>(this_00);
LAB_1470d4387:
  this->IncrementalChangesCount = this->IncrementalChangesCount + 1;
  this->bPropertiesCached = 0;
  return this;
}

// AddRequirement<FHarvestTimerFragment> @ 1470d43b0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FMassFragmentRequirements * __thiscall
FMassFragmentRequirements::AddRequirement<FHarvestTimerFragment>
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
  TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct> *this_00;
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
  pUVar7 = Z_Registration_Info_UScriptStruct_FHarvestTimerFragment.OuterSingleton;
  for (; pFVar10 != pFVar9; pFVar10 = pFVar10 + 0x10) {
    if (pUVar7 == (UScriptStruct *)0x0) {
      pUVar6 = Z_Construct_UPackage__Script_MassEntityTestSuite();
      pUVar7 = GetStaticStruct(Z_Construct_UScriptStruct_FHarvestTimerFragment,(UObject *)pUVar6,
                               L"HarvestTimerFragment");
      Z_Registration_Info_UScriptStruct_FHarvestTimerFragment.OuterSingleton = pUVar7;
    }
    if (*(UScriptStruct **)pFVar10 == pUVar7) {
      if (pUVar7 == (UScriptStruct *)0x0) {
        pUVar6 = Z_Construct_UPackage__Script_MassEntityTestSuite();
        pUVar7 = GetStaticStruct(Z_Construct_UScriptStruct_FHarvestTimerFragment,(UObject *)pUVar6,
                                 L"HarvestTimerFragment");
        Z_Registration_Info_UScriptStruct_FHarvestTimerFragment.OuterSingleton = pUVar7;
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
      pUVar7 = Z_Registration_Info_UScriptStruct_FHarvestTimerFragment.OuterSingleton;
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
      pUVar6 = Z_Construct_UPackage__Script_MassEntityTestSuite();
      pUVar7 = GetStaticStruct(Z_Construct_UScriptStruct_FHarvestTimerFragment,(UObject *)pUVar6,
                               L"HarvestTimerFragment");
      Z_Registration_Info_UScriptStruct_FHarvestTimerFragment.OuterSingleton = pUVar7;
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
    this_00 = &this->RequiredAllFragments;
  }
  else if (param_2 == Any) {
    this_00 = &this->RequiredAnyFragments;
  }
  else if (param_2 == None) {
    this_00 = &this->RequiredNoneFragments;
  }
  else {
    if (param_2 != Optional) goto LAB_1470d45e7;
    this_00 = &this->RequiredOptionalFragments;
  }
  TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>::
  Add<FHarvestTimerFragment>(this_00);
LAB_1470d45e7:
  this->IncrementalChangesCount = this->IncrementalChangesCount + 1;
  this->bPropertiesCached = 0;
  return this;
}

// AddRequirement<FMassChildOfFragment> @ 1470d4610

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FMassFragmentRequirements * __thiscall
FMassFragmentRequirements::AddRequirement<FMassChildOfFragment>
          (FMassFragmentRequirements *this,EMassFragmentAccess param_1,EMassFragmentPresence param_2
          )

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FMassFragmentRequirements *pFVar5;
  UScriptStruct *pUVar6;
  longlong lVar7;
  TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct> *this_00;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
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
  pFVar8 = (this->FragmentRequirements).AllocatorInstance.Data;
  pFVar9 = pFVar8 + (longlong)(this->FragmentRequirements).ArrayNum * 0x10;
  for (; pFVar8 != pFVar9; pFVar8 = pFVar8 + 0x10) {
    pUVar6 = FMassChildOfFragment::StaticStruct();
    if (*(UScriptStruct **)pFVar8 == pUVar6) {
      pUVar6 = FMassChildOfFragment::StaticStruct();
      local_res8 = (FName)pUVar6->_padding_;
      ::FName::ToString(&local_res8,&local_28);
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("FragmentRequirements.FindByPredicate([](const FMassFragmentRequirementDescription& Item) { return Item.StructType == T::StaticStruct(); }) == nullptr"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassRequirements.h"
                         ,0xd8,L"Duplicated requirements are not supported. %s already present");
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FMassFragmentRequirements *)(*pcVar2)();
        return pFVar5;
      }
      break;
    }
  }
  if (param_2 != None) {
    pUVar6 = FMassChildOfFragment::StaticStruct();
    piVar1 = &(this->FragmentRequirements).ArrayMax;
    iVar4 = (this->FragmentRequirements).ArrayNum;
    if (iVar4 == *piVar1) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)this,piVar1);
    }
    (this->FragmentRequirements).ArrayNum = iVar4 + 1;
    lVar7 = (longlong)iVar4;
    pFVar8 = (this->FragmentRequirements).AllocatorInstance.Data;
    *(UScriptStruct **)(pFVar8 + lVar7 * 0x10) = pUVar6;
    pFVar8[lVar7 * 0x10 + 8] = (FScriptContainerElement)param_1;
    pFVar8[lVar7 * 0x10 + 9] = (FScriptContainerElement)param_2;
    if ((pUVar6 == (UScriptStruct *)0x0) &&
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
    this_00 = &this->RequiredAllFragments;
  }
  else if (param_2 == Any) {
    this_00 = &this->RequiredAnyFragments;
  }
  else if (param_2 == None) {
    this_00 = &this->RequiredNoneFragments;
  }
  else {
    if (param_2 != Optional) goto LAB_1470d47a0;
    this_00 = &this->RequiredOptionalFragments;
  }
  TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>::
  Add<FMassChildOfFragment>(this_00);
LAB_1470d47a0:
  this->IncrementalChangesCount = this->IncrementalChangesCount + 1;
  this->bPropertiesCached = 0;
  return this;
}

// AddRequirement<FTestFragment_Array> @ 1470d47d0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FMassFragmentRequirements * __thiscall
FMassFragmentRequirements::AddRequirement<FTestFragment_Array>
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
  pUVar7 = Z_Registration_Info_UScriptStruct_FTestFragment_Array.OuterSingleton;
  for (; pFVar10 != pFVar9; pFVar10 = pFVar10 + 0x10) {
    if (pUVar7 == (UScriptStruct *)0x0) {
      pUVar6 = Z_Construct_UPackage__Script_MassEntityTestSuite();
      pUVar7 = GetStaticStruct(Z_Construct_UScriptStruct_FTestFragment_Array,(UObject *)pUVar6,
                               L"TestFragment_Array");
      Z_Registration_Info_UScriptStruct_FTestFragment_Array.OuterSingleton = pUVar7;
    }
    if (*(UScriptStruct **)pFVar10 == pUVar7) {
      if (pUVar7 == (UScriptStruct *)0x0) {
        pUVar6 = Z_Construct_UPackage__Script_MassEntityTestSuite();
        pUVar7 = GetStaticStruct(Z_Construct_UScriptStruct_FTestFragment_Array,(UObject *)pUVar6,
                                 L"TestFragment_Array");
        Z_Registration_Info_UScriptStruct_FTestFragment_Array.OuterSingleton = pUVar7;
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
      pUVar7 = Z_Registration_Info_UScriptStruct_FTestFragment_Array.OuterSingleton;
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
      pUVar6 = Z_Construct_UPackage__Script_MassEntityTestSuite();
      pUVar7 = GetStaticStruct(Z_Construct_UScriptStruct_FTestFragment_Array,(UObject *)pUVar6,
                               L"TestFragment_Array");
      Z_Registration_Info_UScriptStruct_FTestFragment_Array.OuterSingleton = pUVar7;
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
            GetTypeIndex<FTestFragment_Array>();
    this_00 = (FBitSetContainer *)&this->RequiredAllFragments;
  }
  else if (param_2 == Any) {
    iVar4 = TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>::
            GetTypeIndex<FTestFragment_Array>();
    this_00 = (FBitSetContainer *)&this->RequiredAnyFragments;
  }
  else if (param_2 == None) {
    iVar4 = TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>::
            GetTypeIndex<FTestFragment_Array>();
    this_00 = (FBitSetContainer *)&this->RequiredNoneFragments;
  }
  else {
    if (param_2 != Optional) goto LAB_1470d4a1d;
    iVar4 = TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>::
            GetTypeIndex<FTestFragment_Array>();
    this_00 = (FBitSetContainer *)&this->RequiredOptionalFragments;
  }
  FStructTypeBitSet::FBitSetContainer::AddAtIndex(this_00,iVar4);
LAB_1470d4a1d:
  this->IncrementalChangesCount = this->IncrementalChangesCount + 1;
  this->bPropertiesCached = 0;
  return this;
}

// AddRequirement<FTestFragment_Bool> @ 1470d4a40

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FMassFragmentRequirements * __thiscall
FMassFragmentRequirements::AddRequirement<FTestFragment_Bool>
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
  TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct> *this_00;
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
  pUVar7 = Z_Registration_Info_UScriptStruct_FTestFragment_Bool.OuterSingleton;
  for (; pFVar10 != pFVar9; pFVar10 = pFVar10 + 0x10) {
    if (pUVar7 == (UScriptStruct *)0x0) {
      pUVar6 = Z_Construct_UPackage__Script_MassEntityTestSuite();
      pUVar7 = GetStaticStruct(Z_Construct_UScriptStruct_FTestFragment_Bool,(UObject *)pUVar6,
                               L"TestFragment_Bool");
      Z_Registration_Info_UScriptStruct_FTestFragment_Bool.OuterSingleton = pUVar7;
    }
    if (*(UScriptStruct **)pFVar10 == pUVar7) {
      if (pUVar7 == (UScriptStruct *)0x0) {
        pUVar6 = Z_Construct_UPackage__Script_MassEntityTestSuite();
        pUVar7 = GetStaticStruct(Z_Construct_UScriptStruct_FTestFragment_Bool,(UObject *)pUVar6,
                                 L"TestFragment_Bool");
        Z_Registration_Info_UScriptStruct_FTestFragment_Bool.OuterSingleton = pUVar7;
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
      pUVar7 = Z_Registration_Info_UScriptStruct_FTestFragment_Bool.OuterSingleton;
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
      pUVar6 = Z_Construct_UPackage__Script_MassEntityTestSuite();
      pUVar7 = GetStaticStruct(Z_Construct_UScriptStruct_FTestFragment_Bool,(UObject *)pUVar6,
                               L"TestFragment_Bool");
      Z_Registration_Info_UScriptStruct_FTestFragment_Bool.OuterSingleton = pUVar7;
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
    this_00 = &this->RequiredAllFragments;
  }
  else if (param_2 == Any) {
    this_00 = &this->RequiredAnyFragments;
  }
  else if (param_2 == None) {
    this_00 = &this->RequiredNoneFragments;
  }
  else {
    if (param_2 != Optional) goto LAB_1470d4c77;
    this_00 = &this->RequiredOptionalFragments;
  }
  TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>::
  Add<FTestFragment_Bool>(this_00);
LAB_1470d4c77:
  this->IncrementalChangesCount = this->IncrementalChangesCount + 1;
  this->bPropertiesCached = 0;
  return this;
}

// AddRequirement<FTestFragment_Float> @ 1470d4ca0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FMassFragmentRequirements * __thiscall
FMassFragmentRequirements::AddRequirement<FTestFragment_Float>
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
  pUVar7 = Z_Registration_Info_UScriptStruct_FTestFragment_Float.OuterSingleton;
  for (; pFVar10 != pFVar9; pFVar10 = pFVar10 + 0x10) {
    if (pUVar7 == (UScriptStruct *)0x0) {
      pUVar6 = Z_Construct_UPackage__Script_MassEntityTestSuite();
      pUVar7 = GetStaticStruct(Z_Construct_UScriptStruct_FTestFragment_Float,(UObject *)pUVar6,
                               L"TestFragment_Float");
      Z_Registration_Info_UScriptStruct_FTestFragment_Float.OuterSingleton = pUVar7;
    }
    if (*(UScriptStruct **)pFVar10 == pUVar7) {
      if (pUVar7 == (UScriptStruct *)0x0) {
        pUVar6 = Z_Construct_UPackage__Script_MassEntityTestSuite();
        pUVar7 = GetStaticStruct(Z_Construct_UScriptStruct_FTestFragment_Float,(UObject *)pUVar6,
                                 L"TestFragment_Float");
        Z_Registration_Info_UScriptStruct_FTestFragment_Float.OuterSingleton = pUVar7;
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
      pUVar7 = Z_Registration_Info_UScriptStruct_FTestFragment_Float.OuterSingleton;
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
      pUVar6 = Z_Construct_UPackage__Script_MassEntityTestSuite();
      pUVar7 = GetStaticStruct(Z_Construct_UScriptStruct_FTestFragment_Float,(UObject *)pUVar6,
                               L"TestFragment_Float");
      Z_Registration_Info_UScriptStruct_FTestFragment_Float.OuterSingleton = pUVar7;
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
            GetTypeIndex<FTestFragment_Float>();
    this_00 = (FBitSetContainer *)&this->RequiredAllFragments;
  }
  else if (param_2 == Any) {
    iVar4 = TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>::
            GetTypeIndex<FTestFragment_Float>();
    this_00 = (FBitSetContainer *)&this->RequiredAnyFragments;
  }
  else if (param_2 == None) {
    iVar4 = TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>::
            GetTypeIndex<FTestFragment_Float>();
    this_00 = (FBitSetContainer *)&this->RequiredNoneFragments;
  }
  else {
    if (param_2 != Optional) goto LAB_1470d4eed;
    iVar4 = TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>::
            GetTypeIndex<FTestFragment_Float>();
    this_00 = (FBitSetContainer *)&this->RequiredOptionalFragments;
  }
  FStructTypeBitSet::FBitSetContainer::AddAtIndex(this_00,iVar4);
LAB_1470d4eed:
  this->IncrementalChangesCount = this->IncrementalChangesCount + 1;
  this->bPropertiesCached = 0;
  return this;
}

// AddRequirement<FTestFragment_Int> @ 1470d4f10

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FMassFragmentRequirements * __thiscall
FMassFragmentRequirements::AddRequirement<FTestFragment_Int>
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
  pUVar7 = Z_Registration_Info_UScriptStruct_FTestFragment_Int.OuterSingleton;
  for (; pFVar10 != pFVar9; pFVar10 = pFVar10 + 0x10) {
    if (pUVar7 == (UScriptStruct *)0x0) {
      pUVar6 = Z_Construct_UPackage__Script_MassEntityTestSuite();
      pUVar7 = GetStaticStruct(Z_Construct_UScriptStruct_FTestFragment_Int,(UObject *)pUVar6,
                               L"TestFragment_Int");
      Z_Registration_Info_UScriptStruct_FTestFragment_Int.OuterSingleton = pUVar7;
    }
    if (*(UScriptStruct **)pFVar10 == pUVar7) {
      if (pUVar7 == (UScriptStruct *)0x0) {
        pUVar6 = Z_Construct_UPackage__Script_MassEntityTestSuite();
        pUVar7 = GetStaticStruct(Z_Construct_UScriptStruct_FTestFragment_Int,(UObject *)pUVar6,
                                 L"TestFragment_Int");
        Z_Registration_Info_UScriptStruct_FTestFragment_Int.OuterSingleton = pUVar7;
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
      pUVar7 = Z_Registration_Info_UScriptStruct_FTestFragment_Int.OuterSingleton;
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
      pUVar6 = Z_Construct_UPackage__Script_MassEntityTestSuite();
      pUVar7 = GetStaticStruct(Z_Construct_UScriptStruct_FTestFragment_Int,(UObject *)pUVar6,
                               L"TestFragment_Int");
      Z_Registration_Info_UScriptStruct_FTestFragment_Int.OuterSingleton = pUVar7;
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
            GetTypeIndex<FTestFragment_Int>();
    this_00 = (FBitSetContainer *)&this->RequiredAllFragments;
  }
  else if (param_2 == Any) {
    iVar4 = TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>::
            GetTypeIndex<FTestFragment_Int>();
    this_00 = (FBitSetContainer *)&this->RequiredAnyFragments;
  }
  else if (param_2 == None) {
    iVar4 = TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>::
            GetTypeIndex<FTestFragment_Int>();
    this_00 = (FBitSetContainer *)&this->RequiredNoneFragments;
  }
  else {
    if (param_2 != Optional) goto LAB_1470d515d;
    iVar4 = TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>::
            GetTypeIndex<FTestFragment_Int>();
    this_00 = (FBitSetContainer *)&this->RequiredOptionalFragments;
  }
  FStructTypeBitSet::FBitSetContainer::AddAtIndex(this_00,iVar4);
LAB_1470d515d:
  this->IncrementalChangesCount = this->IncrementalChangesCount + 1;
  this->bPropertiesCached = 0;
  return this;
}

// AddRequirement<FTestFragment_Large> @ 1470d5180

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FMassFragmentRequirements * __thiscall
FMassFragmentRequirements::AddRequirement<FTestFragment_Large>
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
  TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct> *this_00;
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
  pUVar7 = Z_Registration_Info_UScriptStruct_FTestFragment_Large.OuterSingleton;
  for (; pFVar10 != pFVar9; pFVar10 = pFVar10 + 0x10) {
    if (pUVar7 == (UScriptStruct *)0x0) {
      pUVar6 = Z_Construct_UPackage__Script_MassEntityTestSuite();
      pUVar7 = GetStaticStruct(Z_Construct_UScriptStruct_FTestFragment_Large,(UObject *)pUVar6,
                               L"TestFragment_Large");
      Z_Registration_Info_UScriptStruct_FTestFragment_Large.OuterSingleton = pUVar7;
    }
    if (*(UScriptStruct **)pFVar10 == pUVar7) {
      if (pUVar7 == (UScriptStruct *)0x0) {
        pUVar6 = Z_Construct_UPackage__Script_MassEntityTestSuite();
        pUVar7 = GetStaticStruct(Z_Construct_UScriptStruct_FTestFragment_Large,(UObject *)pUVar6,
                                 L"TestFragment_Large");
        Z_Registration_Info_UScriptStruct_FTestFragment_Large.OuterSingleton = pUVar7;
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
      pUVar7 = Z_Registration_Info_UScriptStruct_FTestFragment_Large.OuterSingleton;
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
      pUVar6 = Z_Construct_UPackage__Script_MassEntityTestSuite();
      pUVar7 = GetStaticStruct(Z_Construct_UScriptStruct_FTestFragment_Large,(UObject *)pUVar6,
                               L"TestFragment_Large");
      Z_Registration_Info_UScriptStruct_FTestFragment_Large.OuterSingleton = pUVar7;
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
    this_00 = &this->RequiredAllFragments;
  }
  else if (param_2 == Any) {
    this_00 = &this->RequiredAnyFragments;
  }
  else if (param_2 == None) {
    this_00 = &this->RequiredNoneFragments;
  }
  else {
    if (param_2 != Optional) goto LAB_1470d53b7;
    this_00 = &this->RequiredOptionalFragments;
  }
  TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>::
  Add<FTestFragment_Large>(this_00);
LAB_1470d53b7:
  this->IncrementalChangesCount = this->IncrementalChangesCount + 1;
  this->bPropertiesCached = 0;
  return this;
}

// AddSharedRequirement<FTestSharedFragment_Int> @ 1470d53e0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FMassFragmentRequirements * __thiscall
FMassFragmentRequirements::AddSharedRequirement<FTestSharedFragment_Int>
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
  FBitSetContainer *this_00;
  longlong lVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  FName local_res8;
  FString local_28;
  
  if ((this->bInitialized == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("bInitialized",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassRequirements.h"
                         ,0x1a8,L"Modifying requirements before initialization is not supported."),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FMassFragmentRequirements *)(*pcVar2)();
    return pFVar5;
  }
  pFVar9 = (this->SharedFragmentRequirements).AllocatorInstance.Data;
  pFVar10 = pFVar9 + (longlong)(this->SharedFragmentRequirements).ArrayNum * 0x10;
  pUVar7 = Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton;
  for (; pFVar9 != pFVar10; pFVar9 = pFVar9 + 0x10) {
    if (pUVar7 == (UScriptStruct *)0x0) {
      pUVar6 = Z_Construct_UPackage__Script_MassEntityTestSuite();
      pUVar7 = GetStaticStruct(Z_Construct_UScriptStruct_FTestSharedFragment_Int,(UObject *)pUVar6,
                               L"TestSharedFragment_Int");
      Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton = pUVar7;
    }
    if (*(UScriptStruct **)pFVar9 == pUVar7) {
      if (pUVar7 == (UScriptStruct *)0x0) {
        pUVar6 = Z_Construct_UPackage__Script_MassEntityTestSuite();
        pUVar7 = GetStaticStruct(Z_Construct_UScriptStruct_FTestSharedFragment_Int,(UObject *)pUVar6
                                 ,L"TestSharedFragment_Int");
        Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton = pUVar7;
      }
      local_res8 = (FName)pUVar7->_padding_;
      ::FName::ToString(&local_res8,&local_28);
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedFragmentRequirements.FindByPredicate([](const FMassFragmentRequirementDescription& Item) { return Item.StructType == T::StaticStruct(); }) == nullptr"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassRequirements.h"
                         ,0x1aa,L"Duplicated requirements are not supported. %s already present");
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FMassFragmentRequirements *)(*pcVar2)();
        return pFVar5;
      }
      break;
    }
  }
  if ((param_2 == Any) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Presence != EMassFragmentPresence::Any",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassRequirements.h"
                         ,0x1ab,L"\'Any\' is not a valid Presence value for AddSharedRequirement."),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FMassFragmentRequirements *)(*pcVar2)();
    return pFVar5;
  }
  if (param_2 == All) {
    iVar4 = TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
            ::GetTypeIndex<FTestSharedFragment_Int>();
    this_00 = (FBitSetContainer *)&this->RequiredAllSharedFragments;
  }
  else {
    if (param_2 == None) {
      iVar4 = TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
              ::GetTypeIndex<FTestSharedFragment_Int>();
      FStructTypeBitSet::FBitSetContainer::AddAtIndex
                ((FBitSetContainer *)&this->RequiredNoneSharedFragments,iVar4);
      goto LAB_1470d5635;
    }
    if (param_2 != Optional) goto LAB_1470d5635;
    iVar4 = TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
            ::GetTypeIndex<FTestSharedFragment_Int>();
    this_00 = (FBitSetContainer *)&this->RequiredOptionalSharedFragments;
  }
  FStructTypeBitSet::FBitSetContainer::AddAtIndex(this_00,iVar4);
  if (Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar6 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestSharedFragment_Int,(UObject *)pUVar6,
                         L"TestSharedFragment_Int");
  }
  pUVar7 = Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton;
  iVar4 = (this->SharedFragmentRequirements).ArrayNum;
  piVar1 = &(this->SharedFragmentRequirements).ArrayMax;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->SharedFragmentRequirements).AllocatorInstance,piVar1);
  }
  (this->SharedFragmentRequirements).ArrayNum = iVar4 + 1;
  lVar8 = (longlong)iVar4;
  pFVar9 = (this->SharedFragmentRequirements).AllocatorInstance.Data;
  pFVar9[lVar8 * 0x10 + 9] = (FScriptContainerElement)param_2;
  pFVar9[lVar8 * 0x10 + 8] = (FScriptContainerElement)param_1;
  *(UScriptStruct **)(pFVar9 + lVar8 * 0x10) = pUVar7;
  if ((pUVar7 == (UScriptStruct *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InStruct",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassRequirements.h"
                         ,0x265,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FMassFragmentRequirements *)(*pcVar2)();
    return pFVar5;
  }
  if (param_1 == ReadWrite) {
    this->bRequiresGameThreadExecution = (bool)(this->bRequiresGameThreadExecution | 1);
  }
LAB_1470d5635:
  this->IncrementalChangesCount = this->IncrementalChangesCount + 1;
  this->bPropertiesCached = 0;
  return this;
}

// AddTagRequirement<FFarmJustBecameReadyToHarvestTag> @ 1470d5b30

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FMassFragmentRequirements * __thiscall
FMassFragmentRequirements::AddTagRequirement<FFarmJustBecameReadyToHarvestTag>
          (FMassFragmentRequirements *this,EMassFragmentPresence param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FMassFragmentRequirements *pFVar4;
  FBitSetContainer *this_00;
  
  if (this->bInitialized == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bInitialized",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassRequirements.h"
                       ,0x114,L"Modifying requirements before initialization is not supported.");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FMassFragmentRequirements *)(*pcVar1)();
      return pFVar4;
    }
  }
  if (param_1 == MAX) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("int(Presence) != int(EMassFragmentPresence::MAX)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassRequirements.h"
                       ,0x115,L"MAX presence is not a valid value for AddTagRequirement");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FMassFragmentRequirements *)(*pcVar1)();
      return pFVar4;
    }
  }
  if (param_1 == All) {
    iVar3 = TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>::
            GetTypeIndex<FFarmJustBecameReadyToHarvestTag>();
    this_00 = (FBitSetContainer *)&this->RequiredAllTags;
  }
  else if (param_1 == Any) {
    iVar3 = TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>::
            GetTypeIndex<FFarmJustBecameReadyToHarvestTag>();
    this_00 = (FBitSetContainer *)&this->RequiredAnyTags;
  }
  else if (param_1 == None) {
    iVar3 = TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>::
            GetTypeIndex<FFarmJustBecameReadyToHarvestTag>();
    this_00 = (FBitSetContainer *)&this->RequiredNoneTags;
  }
  else {
    if (param_1 != Optional) goto LAB_1470d5be8;
    iVar3 = TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>::
            GetTypeIndex<FFarmJustBecameReadyToHarvestTag>();
    this_00 = (FBitSetContainer *)&this->RequiredOptionalTags;
  }
  FStructTypeBitSet::FBitSetContainer::AddAtIndex(this_00,iVar3);
LAB_1470d5be8:
  this->IncrementalChangesCount = this->IncrementalChangesCount + 1;
  this->bPropertiesCached = 0;
  return this;
}

// AddTagRequirement<FTestTag_A> @ 1470d5c10

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FMassFragmentRequirements * __thiscall
FMassFragmentRequirements::AddTagRequirement<FTestTag_A>
          (FMassFragmentRequirements *this,EMassFragmentPresence param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FMassFragmentRequirements *pFVar4;
  FBitSetContainer *this_00;
  
  if (this->bInitialized == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bInitialized",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassRequirements.h"
                       ,0x114,L"Modifying requirements before initialization is not supported.");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FMassFragmentRequirements *)(*pcVar1)();
      return pFVar4;
    }
  }
  if (param_1 == MAX) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("int(Presence) != int(EMassFragmentPresence::MAX)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassRequirements.h"
                       ,0x115,L"MAX presence is not a valid value for AddTagRequirement");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FMassFragmentRequirements *)(*pcVar1)();
      return pFVar4;
    }
  }
  if (param_1 == All) {
    iVar3 = TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>::
            GetTypeIndex<FTestTag_A>();
    this_00 = (FBitSetContainer *)&this->RequiredAllTags;
  }
  else if (param_1 == Any) {
    iVar3 = TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>::
            GetTypeIndex<FTestTag_A>();
    this_00 = (FBitSetContainer *)&this->RequiredAnyTags;
  }
  else if (param_1 == None) {
    iVar3 = TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>::
            GetTypeIndex<FTestTag_A>();
    this_00 = (FBitSetContainer *)&this->RequiredNoneTags;
  }
  else {
    if (param_1 != Optional) goto LAB_1470d5cc8;
    iVar3 = TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>::
            GetTypeIndex<FTestTag_A>();
    this_00 = (FBitSetContainer *)&this->RequiredOptionalTags;
  }
  FStructTypeBitSet::FBitSetContainer::AddAtIndex(this_00,iVar3);
LAB_1470d5cc8:
  this->IncrementalChangesCount = this->IncrementalChangesCount + 1;
  this->bPropertiesCached = 0;
  return this;
}

// ~FMassFragmentRequirements @ 1470f85b0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
FMassFragmentRequirements::~FMassFragmentRequirements(FMassFragmentRequirements *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CachedEntityManager).SharedReferenceCount.ReferenceController);
  pvVar1 = *(void **)&(this->RequiredNoneConstSharedFragments).field_0x10;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)&(this->RequiredOptionalConstSharedFragments).field_0x10;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)&(this->RequiredAllConstSharedFragments).field_0x10;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)&(this->RequiredNoneSharedFragments).field_0x10;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)&(this->RequiredOptionalSharedFragments).field_0x10;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)&(this->RequiredAllSharedFragments).field_0x10;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)&(this->RequiredNoneChunkFragments).field_0x10;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)&(this->RequiredOptionalChunkFragments).field_0x10;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)&(this->RequiredAllChunkFragments).field_0x10;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)&(this->RequiredNoneFragments).field_0x10;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)&(this->RequiredOptionalFragments).field_0x10;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)&(this->RequiredAnyFragments).field_0x10;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)&(this->RequiredAllFragments).field_0x10;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)&(this->RequiredOptionalTags).field_0x10;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)&(this->RequiredNoneTags).field_0x10;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)&(this->RequiredAnyTags).field_0x10;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)&(this->RequiredAllTags).field_0x10;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pFVar2 = (this->SharedFragmentRequirements).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->ConstSharedFragmentRequirements).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->ChunkFragmentRequirements).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->FragmentRequirements).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
    return;
  }
  return;
}

// AddRequirement @ 14710fe10

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FMassFragmentRequirements * __thiscall
FMassFragmentRequirements::AddRequirement
          (FMassFragmentRequirements *this,UScriptStruct *param_1,EMassFragmentAccess param_2,
          EMassFragmentPresence param_3)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FMassFragmentRequirements *pFVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct> *this_00;
  FName local_res8;
  FString local_28;
  
  if ((this->bInitialized == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("bInitialized",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassRequirements.h"
                         ,0xb5,L"Modifying requirements before initialization is not supported."),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FMassFragmentRequirements *)(*pcVar2)();
    return pFVar5;
  }
  pFVar6 = (this->FragmentRequirements).AllocatorInstance.Data;
  pFVar7 = pFVar6 + (longlong)(this->FragmentRequirements).ArrayNum * 0x10;
  for (; pFVar6 != pFVar7; pFVar6 = pFVar6 + 0x10) {
    if (*(UScriptStruct **)pFVar6 == param_1) {
      if (param_1 == (UScriptStruct *)0x0) {
        ::FString::FString(&local_28,L"None");
      }
      else {
        local_res8 = (FName)param_1->_padding_;
        ::FName::ToString(&local_res8,&local_28);
      }
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("FragmentRequirements.FindByPredicate([FragmentType](const FMassFragmentRequirementDescription& Item){ return Item.StructType == FragmentType; }) == nullptr"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassRequirements.h"
                         ,0xb7,L"Duplicated requirements are not supported. %s already present");
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FMassFragmentRequirements *)(*pcVar2)();
        return pFVar5;
      }
      break;
    }
  }
  if (param_3 != None) {
    iVar4 = (this->FragmentRequirements).ArrayNum;
    piVar1 = &(this->FragmentRequirements).ArrayMax;
    if (iVar4 == *piVar1) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)this,piVar1);
    }
    (this->FragmentRequirements).ArrayNum = iVar4 + 1;
    lVar8 = (longlong)iVar4;
    pFVar6 = (this->FragmentRequirements).AllocatorInstance.Data;
    *(UScriptStruct **)(pFVar6 + lVar8 * 0x10) = param_1;
    pFVar6[lVar8 * 0x10 + 8] = (FScriptContainerElement)param_2;
    pFVar6[lVar8 * 0x10 + 9] = (FScriptContainerElement)param_3;
    if ((param_1 == (UScriptStruct *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InStruct",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassRequirements.h"
                           ,0x265,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FMassFragmentRequirements *)(*pcVar2)();
      return pFVar5;
    }
  }
  if (param_3 == All) {
    this_00 = &this->RequiredAllFragments;
  }
  else if (param_3 == Any) {
    this_00 = &this->RequiredAnyFragments;
  }
  else if (param_3 == None) {
    this_00 = &this->RequiredNoneFragments;
  }
  else {
    if (param_3 != Optional) goto LAB_14710ffc2;
    this_00 = &this->RequiredOptionalFragments;
  }
  TTypeBitSetBase<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
  ::Add((TTypeBitSetBase<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
         *)this_00,param_1);
LAB_14710ffc2:
  this->IncrementalChangesCount = this->IncrementalChangesCount + 1;
  this->bPropertiesCached = 0;
  return this;
}

// AddSharedRequirement @ 14710fff0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FMassFragmentRequirements * __thiscall
FMassFragmentRequirements::AddSharedRequirement
          (FMassFragmentRequirements *this,TNotNull<UScriptStruct_const_*> param_1,
          EMassFragmentAccess param_2,EMassFragmentPresence param_3)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  UScriptStruct *pUVar6;
  FMassFragmentRequirements *pFVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
  *this_00;
  longlong lVar10;
  FName local_res8;
  FString local_28;
  
  if ((param_1.Val == (UScriptStruct *)0x0) ||
     (pUVar6 = FMassSharedFragment::StaticStruct(), pUVar6 == (UScriptStruct *)0x0)) {
LAB_147110043:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("UE::Mass::IsA<FMassSharedFragment>(SharedFragmentType)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassRequirements.h"
                       ,0x1c9,
                       L"Given struct doesn\'t represent a valid shared fragment type. Make sure to inherit from FMassSharedFragment or one of its child-types."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar7 = (FMassFragmentRequirements *)(*pcVar2)();
      return pFVar7;
    }
  }
  else {
    iVar5 = (int)pUVar6->_padding_;
    if (((int)(param_1.Val)->_padding_ < iVar5) ||
       ((longlong *)*(undefined1 **)((param_1.Val)->_padding_ + (longlong)iVar5 * 8) !=
        &pUVar6->_padding_)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_147110043;
  }
  if ((this->bInitialized == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("bInitialized",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassRequirements.h"
                         ,0x1ca,L"Modifying requirements before initialization is not supported."),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar7 = (FMassFragmentRequirements *)(*pcVar2)();
    return pFVar7;
  }
  pFVar8 = (this->SharedFragmentRequirements).AllocatorInstance.Data;
  pFVar9 = pFVar8 + (longlong)(this->SharedFragmentRequirements).ArrayNum * 0x10;
  for (; pFVar8 != pFVar9; pFVar8 = pFVar8 + 0x10) {
    if (param_1.Val == *(UScriptStruct **)pFVar8) {
      local_res8 = (FName)(param_1.Val)->_padding_;
      ::FName::ToString(&local_res8,&local_28);
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedFragmentRequirements.FindByPredicate([&SharedFragmentType](const FMassFragmentRequirementDescription& Item) { return Item.StructType == SharedFragmentType; }) == nullptr"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassRequirements.h"
                         ,0x1cc,L"Duplicated requirements are not supported. %s already present");
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar7 = (FMassFragmentRequirements *)(*pcVar2)();
        return pFVar7;
      }
      break;
    }
  }
  if ((param_3 == Any) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Presence != EMassFragmentPresence::Any",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassRequirements.h"
                         ,0x1cd,L"\'Any\' is not a valid Presence value for AddSharedRequirement."),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar7 = (FMassFragmentRequirements *)(*pcVar2)();
    return pFVar7;
  }
  if (param_3 == All) {
    this_00 = &this->RequiredAllSharedFragments;
  }
  else {
    if (param_3 == None) {
      TTypeBitSetBase<TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassSharedFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
      ::Add((TTypeBitSetBase<TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassSharedFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
             *)&this->RequiredNoneSharedFragments,param_1.Val);
      goto LAB_147110224;
    }
    if (param_3 != Optional) goto LAB_147110224;
    this_00 = &this->RequiredOptionalSharedFragments;
  }
  TTypeBitSetBase<TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassSharedFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
  ::Add((TTypeBitSetBase<TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassSharedFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
         *)this_00,param_1.Val);
  iVar5 = (this->SharedFragmentRequirements).ArrayNum;
  piVar1 = &(this->SharedFragmentRequirements).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->SharedFragmentRequirements).AllocatorInstance,piVar1);
  }
  (this->SharedFragmentRequirements).ArrayNum = iVar5 + 1;
  lVar10 = (longlong)iVar5;
  pFVar8 = (this->SharedFragmentRequirements).AllocatorInstance.Data;
  pFVar8[lVar10 * 0x10 + 9] = (FScriptContainerElement)param_3;
  pFVar8[lVar10 * 0x10 + 8] = (FScriptContainerElement)param_2;
  *(UScriptStruct **)(pFVar8 + lVar10 * 0x10) = param_1.Val;
  if ((param_1.Val == (UScriptStruct *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InStruct",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassRequirements.h"
                         ,0x265,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar7 = (FMassFragmentRequirements *)(*pcVar2)();
    return pFVar7;
  }
  if (param_2 == ReadWrite) {
    bVar3 = this->bRequiresGameThreadExecution;
    bVar4 = IsGameThreadOnlySharedFragment(this,param_1);
    this->bRequiresGameThreadExecution = (bool)(bVar4 | bVar3);
  }
LAB_147110224:
  this->IncrementalChangesCount = this->IncrementalChangesCount + 1;
  this->bPropertiesCached = 0;
  return this;
}

