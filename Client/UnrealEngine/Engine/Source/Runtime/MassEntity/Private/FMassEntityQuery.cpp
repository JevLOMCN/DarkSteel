// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntity
// Functions: 42

// <lambda_invoker_cdecl> @ 1471b91b0

bool __cdecl
`FMassEntityQuery::GroupBy'::__l2::<lambda_1>::<lambda_invoker_cdecl>
          (FArchetypeGroupID param_1,FArchetypeGroupID param_2)

{
  return (int)param_1.ID < (int)param_2.ID;
}

// FMassEntityQuery @ 1471d7c20

/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FMassEntityQuery * __thiscall
FMassEntityQuery::FMassEntityQuery(FMassEntityQuery *this,UMassProcessor *param_1)

{
  FMassFragmentRequirements::FMassFragmentRequirements((FMassFragmentRequirements *)this);
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x80;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x80;
  *(undefined1 *)&this->_padding_ = 0;
  this->bRegistered = '\0';
  *(undefined8 *)&this->ChunkCondition = 0;
  *(undefined8 *)&(this->ChunkCondition).field_0x28 = 0;
  this->EntitySubsystemHash = 0;
  this->LastUpdatedArchetypeDataVersion = 0;
  (this->ValidArchetypes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ValidArchetypes).ArrayNum = 0;
  (this->ValidArchetypes).ArrayMax = 0;
  (this->OrderedArchetypeIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OrderedArchetypeIndices).ArrayNum = 0;
  (this->OrderedArchetypeIndices).ArrayMax = 0;
  (this->ArchetypeFragmentMapping).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ArchetypeFragmentMapping).ArrayNum = 0;
  (this->ArchetypeFragmentMapping).ArrayMax = 0;
  (this->GroupSortingSteps).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GroupSortingSteps).ArrayNum = 0;
  (this->GroupSortingSteps).ArrayMax = 0;
  (this->CachedGroupIDs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedGroupIDs).ArrayNum = 0;
  (this->CachedGroupIDs).ArrayMax = 0;
  this->ExpectedContextType = Local;
  this->bAllowParallelCommands = '\x01';
  this->bRequiresMutatingWorldAccess = '\0';
  FMassTrace::QueryCreated(this);
  RegisterWithProcessor(this,param_1);
  return this;
}

// FMassEntityQuery @ 1471d7d10

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FMassEntityQuery * __thiscall
FMassEntityQuery::FMassEntityQuery(FMassEntityQuery *this,TSharedPtr<FMassEntityManager,1> *param_1)

{
  FMassFragmentRequirements::FMassFragmentRequirements((FMassFragmentRequirements *)this,param_1);
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x80;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x80;
  *(undefined1 *)&this->_padding_ = 0;
  this->bRegistered = '\0';
  *(undefined8 *)&this->ChunkCondition = 0;
  *(undefined8 *)&(this->ChunkCondition).field_0x28 = 0;
  this->EntitySubsystemHash = 0;
  this->LastUpdatedArchetypeDataVersion = 0;
  (this->ValidArchetypes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ValidArchetypes).ArrayNum = 0;
  (this->ValidArchetypes).ArrayMax = 0;
  (this->OrderedArchetypeIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OrderedArchetypeIndices).ArrayNum = 0;
  (this->OrderedArchetypeIndices).ArrayMax = 0;
  (this->ArchetypeFragmentMapping).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ArchetypeFragmentMapping).ArrayNum = 0;
  (this->ArchetypeFragmentMapping).ArrayMax = 0;
  (this->GroupSortingSteps).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GroupSortingSteps).ArrayNum = 0;
  (this->GroupSortingSteps).ArrayMax = 0;
  (this->CachedGroupIDs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedGroupIDs).ArrayNum = 0;
  (this->CachedGroupIDs).ArrayMax = 0;
  this->ExpectedContextType = Local;
  this->bAllowParallelCommands = '\x01';
  this->bRequiresMutatingWorldAccess = '\0';
  FMassTrace::QueryCreated(this);
  return this;
}

// FMassEntityQuery @ 1471d7df0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FMassEntityQuery * __thiscall
FMassEntityQuery::FMassEntityQuery
          (FMassEntityQuery *this,TSharedRef<FMassEntityManager,1> *param_1,
          TArrayView<UScriptStruct_const_*_const,int> *param_2)

{
  short *psVar1;
  UScriptStruct **ppUVar2;
  UScriptStruct *pUVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FMassEntityQuery *pFVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  UScriptStruct **ppUVar11;
  FName local_res8;
  FString local_38;
  
  FMassFragmentRequirements::FMassFragmentRequirements((FMassFragmentRequirements *)this,param_1);
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x80;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x80;
  *(undefined1 *)&this->_padding_ = 0;
  this->bRegistered = '\0';
  *(undefined8 *)&this->ChunkCondition = 0;
  *(undefined8 *)&(this->ChunkCondition).field_0x28 = 0;
  this->EntitySubsystemHash = 0;
  this->LastUpdatedArchetypeDataVersion = 0;
  (this->ValidArchetypes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ValidArchetypes).ArrayNum = 0;
  (this->ValidArchetypes).ArrayMax = 0;
  (this->OrderedArchetypeIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OrderedArchetypeIndices).ArrayNum = 0;
  (this->OrderedArchetypeIndices).ArrayMax = 0;
  (this->ArchetypeFragmentMapping).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ArchetypeFragmentMapping).ArrayNum = 0;
  (this->ArchetypeFragmentMapping).ArrayMax = 0;
  (this->GroupSortingSteps).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GroupSortingSteps).ArrayNum = 0;
  (this->GroupSortingSteps).ArrayMax = 0;
  (this->CachedGroupIDs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedGroupIDs).ArrayNum = 0;
  (this->CachedGroupIDs).ArrayMax = 0;
  this->ExpectedContextType = Local;
  this->bAllowParallelCommands = '\x01';
  this->bRequiresMutatingWorldAccess = '\0';
  FMassTrace::QueryCreated(this);
  ppUVar11 = param_2->DataPtr;
  ppUVar2 = ppUVar11 + param_2->ArrayNum;
  do {
    if (ppUVar11 == ppUVar2) {
      return this;
    }
    pUVar3 = *ppUVar11;
    if (((this->_padding_ & 0x10) == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("bInitialized",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassRequirements.h"
                           ,0xb5,L"Modifying requirements before initialization is not supported."),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      pFVar8 = (FMassEntityQuery *)(*pcVar5)();
      return pFVar8;
    }
    puVar9 = (undefined8 *)this->_padding_;
    puVar10 = puVar9 + (longlong)(int)this->_padding_ * 2;
    for (; puVar9 != puVar10; puVar9 = puVar9 + 2) {
      if ((UScriptStruct *)*puVar9 == pUVar3) {
        if (pUVar3 == (UScriptStruct *)0x0) {
          ::FString::FString(&local_38,L"None");
        }
        else {
          local_res8 = (FName)pUVar3->_padding_;
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
          pFVar8 = (FMassEntityQuery *)(*pcVar5)();
          return pFVar8;
        }
        break;
      }
    }
    iVar7 = (int)this->_padding_;
    if (iVar7 == *(int *)((longlong)&this->_padding_ + 4)) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)this,(int *)((longlong)&this->_padding_ + 4));
    }
    *(int *)&this->_padding_ = iVar7 + 1;
    lVar4 = this->_padding_;
    *(UScriptStruct **)(lVar4 + (longlong)iVar7 * 0x10) = pUVar3;
    *(undefined2 *)(lVar4 + 8 + (longlong)iVar7 * 0x10) = 2;
    if ((pUVar3 == (UScriptStruct *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InStruct",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassRequirements.h"
                           ,0x265,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      pFVar8 = (FMassEntityQuery *)(*pcVar5)();
      return pFVar8;
    }
    TTypeBitSetBase<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
    ::Add((TTypeBitSetBase<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
           *)&this->_padding_,pUVar3);
    psVar1 = (short *)((longlong)&this->_padding_ + 2);
    *psVar1 = *psVar1 + 1;
    ppUVar11 = ppUVar11 + 1;
    *(ushort *)&this->_padding_ = (ushort)this->_padding_ & 0xfffe;
  } while( true );
}

// FMassEntityQuery @ 1471d8090

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FMassEntityQuery * __thiscall
FMassEntityQuery::FMassEntityQuery
          (FMassEntityQuery *this,TSharedRef<FMassEntityManager,1> *param_1,
          initializer_list<UScriptStruct_*> *param_2)

{
  short *psVar1;
  UScriptStruct **ppUVar2;
  UScriptStruct *pUVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FMassEntityQuery *pFVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  UScriptStruct **ppUVar11;
  FName local_res8;
  FString local_38;
  
  FMassFragmentRequirements::FMassFragmentRequirements((FMassFragmentRequirements *)this,param_1);
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x80;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x80;
  *(undefined1 *)&this->_padding_ = 0;
  this->bRegistered = '\0';
  *(undefined8 *)&this->ChunkCondition = 0;
  *(undefined8 *)&(this->ChunkCondition).field_0x28 = 0;
  this->EntitySubsystemHash = 0;
  this->LastUpdatedArchetypeDataVersion = 0;
  (this->ValidArchetypes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ValidArchetypes).ArrayNum = 0;
  (this->ValidArchetypes).ArrayMax = 0;
  (this->OrderedArchetypeIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OrderedArchetypeIndices).ArrayNum = 0;
  (this->OrderedArchetypeIndices).ArrayMax = 0;
  (this->ArchetypeFragmentMapping).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ArchetypeFragmentMapping).ArrayNum = 0;
  (this->ArchetypeFragmentMapping).ArrayMax = 0;
  (this->GroupSortingSteps).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GroupSortingSteps).ArrayNum = 0;
  (this->GroupSortingSteps).ArrayMax = 0;
  (this->CachedGroupIDs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedGroupIDs).ArrayNum = 0;
  (this->CachedGroupIDs).ArrayMax = 0;
  this->ExpectedContextType = Local;
  this->bAllowParallelCommands = '\x01';
  this->bRequiresMutatingWorldAccess = '\0';
  FMassTrace::QueryCreated(this);
  ppUVar11 = param_2->_First;
  ppUVar2 = param_2->_Last;
  do {
    if (ppUVar11 == ppUVar2) {
      return this;
    }
    pUVar3 = *ppUVar11;
    if (((this->_padding_ & 0x10) == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("bInitialized",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassRequirements.h"
                           ,0xb5,L"Modifying requirements before initialization is not supported."),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      pFVar8 = (FMassEntityQuery *)(*pcVar5)();
      return pFVar8;
    }
    puVar9 = (undefined8 *)this->_padding_;
    puVar10 = puVar9 + (longlong)(int)this->_padding_ * 2;
    for (; puVar9 != puVar10; puVar9 = puVar9 + 2) {
      if ((UScriptStruct *)*puVar9 == pUVar3) {
        if (pUVar3 == (UScriptStruct *)0x0) {
          ::FString::FString(&local_38,L"None");
        }
        else {
          local_res8 = (FName)pUVar3->_padding_;
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
          pFVar8 = (FMassEntityQuery *)(*pcVar5)();
          return pFVar8;
        }
        break;
      }
    }
    iVar7 = (int)this->_padding_;
    if (iVar7 == *(int *)((longlong)&this->_padding_ + 4)) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)this,(int *)((longlong)&this->_padding_ + 4));
    }
    *(int *)&this->_padding_ = iVar7 + 1;
    lVar4 = this->_padding_;
    *(UScriptStruct **)(lVar4 + (longlong)iVar7 * 0x10) = pUVar3;
    *(undefined2 *)(lVar4 + 8 + (longlong)iVar7 * 0x10) = 2;
    if ((pUVar3 == (UScriptStruct *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InStruct",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassRequirements.h"
                           ,0x265,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      pFVar8 = (FMassEntityQuery *)(*pcVar5)();
      return pFVar8;
    }
    TTypeBitSetBase<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
    ::Add((TTypeBitSetBase<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
           *)&this->_padding_,pUVar3);
    psVar1 = (short *)((longlong)&this->_padding_ + 2);
    *psVar1 = *psVar1 + 1;
    ppUVar11 = ppUVar11 + 1;
    *(ushort *)&this->_padding_ = (ushort)this->_padding_ & 0xfffe;
  } while( true );
}

// FMassEntityQuery @ 1471d8330

FMassEntityQuery * __thiscall
FMassEntityQuery::FMassEntityQuery
          (FMassEntityQuery *this,TArrayView<UScriptStruct_const_*_const,int> *param_1)

{
  memset(this,0,0x350);
  FMassEntityQuery(this);
  return this;
}

// FMassEntityQuery @ 1471d8360

FMassEntityQuery * __thiscall
FMassEntityQuery::FMassEntityQuery
          (FMassEntityQuery *this,initializer_list<UScriptStruct_*> *param_1)

{
  memset(this,0,0x350);
  FMassEntityQuery(this);
  return this;
}

// operator() @ 1471e3930

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
`FMassEntityQuery::ParallelForEachEntityChunkInCollection'::__l2::<lambda_1>::operator()
          (void *this,int param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  undefined1 auStack_5d8 [32];
  longlong local_5b8;
  longlong local_5b0;
  FMassExecutionContext local_5a8;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_5d8;
  FMassExecutionContext::FMassExecutionContext
            (&local_5a8,*(FMassExecutionContext **)((longlong)this + 8));
  plVar2 = *(longlong **)((longlong)this + 0x18);
  iVar1 = (int)plVar2[1];
  uVar6 = 0;
  if (param_1 < iVar1) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if (uVar6 == 0) {
    local_5b8 = (longlong)param_1;
    local_5b0 = (longlong)iVar1;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  lVar3 = *plVar2;
  if ((local_5a8.EntityCollection.Ranges.ArrayNum != 0) ||
     (local_5a8.EntityCollection.Archetype.ArchetypeHandle.DataPtr.Object !=
      (FMassArchetypeData *)0x0)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("EntityCollection.IsEmpty()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassExecutionContext.cpp"
                       ,0x49,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  FMassArchetypeEntityCollection::operator=
            (&local_5a8.EntityCollection,
             (FMassArchetypeEntityCollection *)(lVar3 + (longlong)param_1 * 0x28));
  FMassEntityQuery::ParallelForEachEntityChunk
            (*(FMassEntityQuery **)this,&local_5a8,
             *(TFunction<void___cdecl(FMassExecutionContext_&)> **)((longlong)this + 0x10),
             *(EParallelExecutionFlags *)((longlong)this + 0x20));
  FMassExecutionContext::~FMassExecutionContext(&local_5a8);
  return;
}

// operator() @ 1471e40b0

bool __thiscall
`FMassEntityQuery::SortArchetypes'::__l22::<lambda_1>::operator()
          (void *this,int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  TArray<UE::Mass::FArchetypeGroupID,TSizedDefaultAllocator<32>_> *pTVar6;
  undefined8 uVar7;
  longlong *plVar8;
  uint uVar9;
  undefined4 local_res8 [2];
  undefined4 local_res20 [2];
  
  pTVar6 = TArrayView<TArray<UE::Mass::FArchetypeGroupID,TSizedDefaultAllocator<32>_>_const_,int>::
           operator[](*(TArrayView<TArray<UE::Mass::FArchetypeGroupID,TSizedDefaultAllocator<32>_>_const_,int>
                        **)((longlong)this + 8),param_2);
  uVar1 = *(uint *)this;
  uVar9 = 0;
  if ((int)uVar1 < pTVar6->ArrayNum) {
    uVar9 = ~uVar1 >> 0x1f;
  }
  if (uVar9 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  uVar2 = *(undefined4 *)((pTVar6->AllocatorInstance).Data + (longlong)(int)uVar1 * 4);
  pTVar6 = TArrayView<TArray<UE::Mass::FArchetypeGroupID,TSizedDefaultAllocator<32>_>_const_,int>::
           operator[](*(TArrayView<TArray<UE::Mass::FArchetypeGroupID,TSizedDefaultAllocator<32>_>_const_,int>
                        **)((longlong)this + 8),param_1);
  uVar1 = *(uint *)this;
  uVar9 = 0;
  if ((int)uVar1 < pTVar6->ArrayNum) {
    uVar9 = ~uVar1 >> 0x1f;
  }
  if (uVar9 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  local_res20[0] = *(undefined4 *)((pTVar6->AllocatorInstance).Data + (longlong)(int)uVar1 * 4);
  local_res8[0] = uVar2;
  UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x10));
  pcVar3 = *(code **)((longlong)this + 0x10);
  plVar8 = (longlong *)((longlong)this + 0x20);
  if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
    plVar8 = *(longlong **)((longlong)this + 0x38);
  }
  uVar7 = (**(code **)(*plVar8 + 8))();
  uVar5 = (*pcVar3)(uVar7,local_res20,local_res8);
  return (bool)uVar5;
}

// operator() @ 1471e54f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
`FMassEntityQuery::ParallelForEachEntityChunk'::__l108::<lambda_2>::operator()
          (void *this,FTaskContext *param_1,int param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  FMassArchetypeData *this_00;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  TSharedPtr<FMassCommandBuffer,1> *pTVar12;
  FMassQueryRequirementIndicesMapping *pFVar13;
  uint uVar14;
  undefined1 auStackY_8b8 [32];
  TSharedPtr<FMassCommandBuffer,1> local_868;
  FMassQueryRequirementIndicesMapping local_858;
  FMassQueryRequirementIndicesMapping local_718;
  FMassExecutionContext local_5d8;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_8b8;
  pTVar12 = FTaskContext::GetCommandBuffer(param_1,&local_868);
  FMassExecutionContext::FMassExecutionContext
            (&local_5d8,*(FMassExecutionContext **)((longlong)this + 8),*(FMassEntityQuery **)this,
             pTVar12);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_868.SharedReferenceCount.ReferenceController);
  plVar2 = *(longlong **)((longlong)this + 0x18);
  uVar14 = (uint)~param_2 >> 0x1f;
  uVar10 = 0;
  if (param_2 < (int)plVar2[1]) {
    uVar10 = uVar14;
  }
  if (uVar10 == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  lVar1 = (longlong)param_2 * 0x18;
  plVar3 = *(longlong **)((longlong)this + 0x18);
  this_00 = *(FMassArchetypeData **)(lVar1 + *plVar2);
  lVar4 = *(longlong *)this;
  uVar10 = 0;
  if (param_2 < (int)plVar3[1]) {
    uVar10 = uVar14;
  }
  if (uVar10 == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  lVar5 = *plVar3;
  plVar2 = *(longlong **)((longlong)this + 0x18);
  uVar11 = 0;
  uVar10 = uVar11;
  if (param_2 < (int)plVar2[1]) {
    uVar10 = uVar14;
  }
  if (uVar10 == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  if (*(int *)(lVar1 + 8 + *plVar2) == -1) {
    memset(&local_858,0,0x140);
    local_858.ChunkFragments.AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
    pFVar13 = &local_858;
    local_858.ChunkFragments.ArrayNum = 0;
    local_858.ConstSharedFragments.AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
    local_858.ConstSharedFragments.ArrayNum = 0;
    local_858.SharedFragments.AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
    local_858.SharedFragments.ArrayNum = 0;
    bVar8 = false;
    bVar9 = true;
    local_858.EntityFragments.ArrayMax = 0x10;
    local_858.ChunkFragments.ArrayMax = 0x10;
    local_858.ConstSharedFragments.ArrayMax = 0x10;
    local_858.SharedFragments.ArrayMax = 0x10;
  }
  else {
    plVar2 = *(longlong **)((longlong)this + 0x18);
    lVar6 = *(longlong *)this;
    uVar10 = uVar11;
    if (param_2 < (int)plVar2[1]) {
      uVar10 = uVar14;
    }
    if (uVar10 == 0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar9) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    uVar10 = *(uint *)(lVar1 + 8 + *plVar2);
    if ((int)uVar10 < *(int *)(lVar6 + 800)) {
      uVar11 = ~uVar10 >> 0x1f;
    }
    if (uVar11 == 0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar9) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    pFVar13 = FMassQueryRequirementIndicesMapping::FMassQueryRequirementIndicesMapping
                        (&local_718,
                         (FMassQueryRequirementIndicesMapping *)
                         ((longlong)(int)uVar10 * 0x140 + *(longlong *)(lVar6 + 0x318)));
    bVar8 = true;
    bVar9 = false;
  }
  FMassArchetypeData::ExecutionFunctionForChunk
            (this_00,&local_5d8,
             *(TFunction<void___cdecl(FMassExecutionContext_&)> **)((longlong)this + 0x10),pFVar13,
             (FArchetypeEntityRange *)(lVar5 + 0xc + lVar1),
             (TFunction<bool___cdecl(FMassExecutionContext_const_&)> *)(lVar4 + 0x2c0));
  if (bVar9) {
    if (local_858.SharedFragments.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
      FMemory::Free((void *)local_858.SharedFragments.AllocatorInstance.SecondaryData);
    }
    if (local_858.ConstSharedFragments.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0)
    {
      FMemory::Free((void *)local_858.ConstSharedFragments.AllocatorInstance.SecondaryData);
    }
    if (local_858.ChunkFragments.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
      FMemory::Free((void *)local_858.ChunkFragments.AllocatorInstance.SecondaryData);
    }
    if (local_858.EntityFragments.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
      FMemory::Free((void *)local_858.EntityFragments.AllocatorInstance.SecondaryData);
    }
  }
  if (bVar8) {
    if (local_718.SharedFragments.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
      FMemory::Free((void *)local_718.SharedFragments.AllocatorInstance.SecondaryData);
    }
    if (local_718.ConstSharedFragments.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0)
    {
      FMemory::Free((void *)local_718.ConstSharedFragments.AllocatorInstance.SecondaryData);
    }
    if (local_718.ChunkFragments.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
      FMemory::Free((void *)local_718.ChunkFragments.AllocatorInstance.SecondaryData);
    }
    if (local_718.EntityFragments.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
      FMemory::Free((void *)local_718.EntityFragments.AllocatorInstance.SecondaryData);
    }
  }
  FMassExecutionContext::PopQuery(&local_5d8,*(FMassEntityQuery **)this);
  FMassExecutionContext::~FMassExecutionContext(&local_5d8);
  return;
}

// operator() @ 1471e6fc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
`FMassEntityQuery::ParallelForEachEntityChunk'::__l114::<lambda_3>::operator()
          (void *this,int param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  FMassArchetypeData *this_00;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  FMassQueryRequirementIndicesMapping *pFVar12;
  uint uVar13;
  undefined1 auStackY_8b8 [32];
  TSharedPtr<FMassCommandBuffer,1> local_868;
  FMassQueryRequirementIndicesMapping local_858;
  FMassQueryRequirementIndicesMapping local_718;
  FMassExecutionContext local_5d8;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_8b8;
  local_868.Object = (FMassCommandBuffer *)0x0;
  local_868.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  FMassExecutionContext::FMassExecutionContext
            (&local_5d8,*(FMassExecutionContext **)((longlong)this + 8),*(FMassEntityQuery **)this,
             &local_868);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  plVar2 = *(longlong **)((longlong)this + 0x18);
  uVar13 = (uint)~param_1 >> 0x1f;
  uVar10 = 0;
  if (param_1 < (int)plVar2[1]) {
    uVar10 = uVar13;
  }
  if (uVar10 == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  lVar1 = (longlong)param_1 * 0x18;
  plVar3 = *(longlong **)((longlong)this + 0x18);
  this_00 = *(FMassArchetypeData **)(lVar1 + *plVar2);
  lVar4 = *(longlong *)this;
  uVar10 = 0;
  if (param_1 < (int)plVar3[1]) {
    uVar10 = uVar13;
  }
  if (uVar10 == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  lVar5 = *plVar3;
  plVar2 = *(longlong **)((longlong)this + 0x18);
  uVar11 = 0;
  uVar10 = uVar11;
  if (param_1 < (int)plVar2[1]) {
    uVar10 = uVar13;
  }
  if (uVar10 == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  if (*(int *)(*plVar2 + 8 + lVar1) == -1) {
    memset(&local_858,0,0x140);
    local_858.ChunkFragments.AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
    pFVar12 = &local_858;
    local_858.ChunkFragments.ArrayNum = 0;
    local_858.ConstSharedFragments.AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
    local_858.ConstSharedFragments.ArrayNum = 0;
    local_858.SharedFragments.AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
    local_858.SharedFragments.ArrayNum = 0;
    bVar8 = false;
    bVar9 = true;
    local_858.EntityFragments.ArrayMax = 0x10;
    local_858.ChunkFragments.ArrayMax = 0x10;
    local_858.ConstSharedFragments.ArrayMax = 0x10;
    local_858.SharedFragments.ArrayMax = 0x10;
  }
  else {
    plVar2 = *(longlong **)((longlong)this + 0x18);
    lVar6 = *(longlong *)this;
    uVar10 = uVar11;
    if (param_1 < (int)plVar2[1]) {
      uVar10 = uVar13;
    }
    if (uVar10 == 0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar9) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    uVar10 = *(uint *)(lVar1 + 8 + *plVar2);
    if ((int)uVar10 < *(int *)(lVar6 + 800)) {
      uVar11 = ~uVar10 >> 0x1f;
    }
    if (uVar11 == 0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar9) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    pFVar12 = FMassQueryRequirementIndicesMapping::FMassQueryRequirementIndicesMapping
                        (&local_718,
                         (FMassQueryRequirementIndicesMapping *)
                         ((longlong)(int)uVar10 * 0x140 + *(longlong *)(lVar6 + 0x318)));
    bVar8 = true;
    bVar9 = false;
  }
  FMassArchetypeData::ExecutionFunctionForChunk
            (this_00,&local_5d8,
             *(TFunction<void___cdecl(FMassExecutionContext_&)> **)((longlong)this + 0x10),pFVar12,
             (FArchetypeEntityRange *)(lVar5 + 0xc + lVar1),
             (TFunction<bool___cdecl(FMassExecutionContext_const_&)> *)(lVar4 + 0x2c0));
  if (bVar9) {
    if (local_858.SharedFragments.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
      FMemory::Free((void *)local_858.SharedFragments.AllocatorInstance.SecondaryData);
    }
    if (local_858.ConstSharedFragments.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0)
    {
      FMemory::Free((void *)local_858.ConstSharedFragments.AllocatorInstance.SecondaryData);
    }
    if (local_858.ChunkFragments.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
      FMemory::Free((void *)local_858.ChunkFragments.AllocatorInstance.SecondaryData);
    }
    if (local_858.EntityFragments.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
      FMemory::Free((void *)local_858.EntityFragments.AllocatorInstance.SecondaryData);
    }
  }
  if (bVar8) {
    if (local_718.SharedFragments.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
      FMemory::Free((void *)local_718.SharedFragments.AllocatorInstance.SecondaryData);
    }
    if (local_718.ConstSharedFragments.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0)
    {
      FMemory::Free((void *)local_718.ConstSharedFragments.AllocatorInstance.SecondaryData);
    }
    if (local_718.ChunkFragments.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
      FMemory::Free((void *)local_718.ChunkFragments.AllocatorInstance.SecondaryData);
    }
    if (local_718.EntityFragments.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
      FMemory::Free((void *)local_718.EntityFragments.AllocatorInstance.SecondaryData);
    }
  }
  FMassExecutionContext::PopQuery(&local_5d8,*(FMassEntityQuery **)this);
  FMassExecutionContext::~FMassExecutionContext(&local_5d8);
  return;
}

// BuildOrderedArchetypeIndices @ 1471fe680

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall FMassEntityQuery::BuildOrderedArchetypeIndices(FMassEntityQuery *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  uVar5 = (ulonglong)param_1;
  TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&this->OrderedArchetypeIndices,(this->ValidArchetypes).ArrayNum,Default);
  if (param_1 < (this->ValidArchetypes).ArrayNum) {
    lVar6 = uVar5 * 4;
    do {
      uVar4 = (uint)uVar5;
      uVar3 = 0;
      if ((int)uVar4 < (this->OrderedArchetypeIndices).ArrayNum) {
        uVar3 = ~uVar4 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      *(uint *)((this->OrderedArchetypeIndices).AllocatorInstance.Data + lVar6) = uVar4;
      uVar5 = (ulonglong)(uVar4 + 1);
      lVar6 = lVar6 + 4;
    } while ((int)(uVar4 + 1) < (this->ValidArchetypes).ArrayNum);
  }
  return;
}

// CacheArchetypes @ 1471fee30

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMassEntityQuery::CacheArchetypes(FMassEntityQuery *this,FMassEntityManager *param_1)

{
  TArray<FMassArchetypeHandle,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TArray<FMassQueryRequirementIndicesMapping,TSizedDefaultAllocator<32>_> *pTVar3;
  ulonglong uVar4;
  TArray<UE::Mass::FArchetypeGroupID,TSizedDefaultAllocator<32>_> *pTVar5;
  FMassQueryRequirementIndicesMapping *pFVar6;
  FMassArchetypeData *this_00;
  code *pcVar7;
  undefined8 uVar8;
  FMassFragmentRequirementDescription *pFVar9;
  bool bVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  FMassEntityManager *pFVar15;
  UObject *pUVar16;
  uint uVar17;
  longlong lVar18;
  longlong lVar19;
  FScriptContainerElement *pFVar20;
  FIdentityFunctor FStackX_8;
  undefined1 auStackX_10 [8];
  undefined1 auStackX_18 [8];
  undefined1 auStackX_20 [8];
  undefined1 auStack_138 [8];
  TArray<FMassArchetypeHandle,TSizedDefaultAllocator<32>_> TStack_130;
  uint uStack_120;
  longlong lStack_118;
  longlong lStack_110;
  longlong lStack_108;
  FMassFragmentRequirementDescription *pFStack_f8;
  int iStack_f0;
  undefined4 uStack_ec;
  FMassFragmentRequirementDescription *pFStack_e8;
  int iStack_e0;
  undefined4 uStack_dc;
  FMassFragmentRequirementDescription *pFStack_d8;
  int iStack_d0;
  undefined4 uStack_cc;
  FMassFragmentRequirementDescription *pFStack_c8;
  int iStack_c0;
  undefined4 uStack_bc;
  FString FStack_b8;
  FString FStack_a8;
  TArrayView<FMassFragmentRequirementDescription_const_,int> TStack_98;
  TArrayView<FMassFragmentRequirementDescription_const_,int> TStack_88;
  TArrayView<FMassFragmentRequirementDescription_const_,int> TStack_78;
  TArrayView<FMassFragmentRequirementDescription_const_,int> aTStack_68 [2];
  
  if ((this->_padding_ == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("CachedEntityManager",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityQuery.cpp"
                          ,0x76,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar4 = this->_padding_;
  uVar17 = ((uint)(uVar4 >> 0x14) & 0xffff ^ (uint)(uVar4 >> 4)) * -0x7a143595;
  uVar17 = (uVar17 >> 0xd ^ uVar17) * -0x3d4d51cb;
  uVar17 = uVar17 >> 0x10 ^ uVar17;
  if ((uVar4 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((this->EntitySubsystemHash == uVar17) && (*(short *)((longlong)&this->_padding_ + 2) == 0)) {
    if (*(uint *)(this->_padding_ + 0x74) == this->LastUpdatedArchetypeDataVersion) {
      return;
    }
  }
  else {
    this->EntitySubsystemHash = uVar17;
    piVar2 = &(this->ValidArchetypes).ArrayMax;
    pFVar20 = (this->ValidArchetypes).AllocatorInstance.Data;
    iVar13 = (this->ValidArchetypes).ArrayNum;
    if (*piVar2 < 0) {
      DestructItems<FMassArchetypeHandle,int>((FMassArchetypeHandle *)pFVar20,iVar13);
      (this->ValidArchetypes).ArrayNum = 0;
      if (*piVar2 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,&(this->ValidArchetypes).AllocatorInstance,0,piVar2);
      }
    }
    else {
      DestructItems<FMassArchetypeHandle,int>((FMassArchetypeHandle *)pFVar20,iVar13);
      (this->ValidArchetypes).ArrayNum = 0;
    }
    (this->OrderedArchetypeIndices).ArrayNum = 0;
    if ((this->OrderedArchetypeIndices).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&(this->OrderedArchetypeIndices).AllocatorInstance,0,
                 &(this->OrderedArchetypeIndices).ArrayMax);
    }
    piVar2 = &(this->CachedGroupIDs).ArrayMax;
    pTVar5 = (TArray<UE::Mass::FArchetypeGroupID,TSizedDefaultAllocator<32>_> *)
             (this->CachedGroupIDs).AllocatorInstance.Data;
    iVar13 = (this->CachedGroupIDs).ArrayNum;
    if (*piVar2 < 0) {
      DestructItems<TArray<UE::Mass::FArchetypeGroupID,TSizedDefaultAllocator<32>_>,int>
                (pTVar5,iVar13);
      (this->CachedGroupIDs).ArrayNum = 0;
      if (*piVar2 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,&(this->CachedGroupIDs).AllocatorInstance,0,piVar2);
      }
    }
    else {
      DestructItems<TArray<UE::Mass::FArchetypeGroupID,TSizedDefaultAllocator<32>_>,int>
                (pTVar5,iVar13);
      (this->CachedGroupIDs).ArrayNum = 0;
    }
    this->LastUpdatedArchetypeDataVersion = 0;
    piVar2 = &(this->ArchetypeFragmentMapping).ArrayMax;
    pFVar6 = (FMassQueryRequirementIndicesMapping *)
             (this->ArchetypeFragmentMapping).AllocatorInstance.Data;
    iVar13 = (this->ArchetypeFragmentMapping).ArrayNum;
    if (*piVar2 < 0) {
      DestructItems<FMassQueryRequirementIndicesMapping,int>(pFVar6,iVar13);
      (this->ArchetypeFragmentMapping).ArrayNum = 0;
      if (*piVar2 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x140,8,0,&(this->ArchetypeFragmentMapping).AllocatorInstance,0,piVar2);
      }
    }
    else {
      DestructItems<FMassQueryRequirementIndicesMapping,int>(pFVar6,iVar13);
      (this->ArchetypeFragmentMapping).ArrayNum = 0;
    }
    if (*(short *)((longlong)&this->_padding_ + 2) != 0) {
      *(undefined2 *)((longlong)&this->_padding_ + 2) = 0;
      bVar10 = FMassFragmentRequirements::CheckValidity((FMassFragmentRequirements *)this);
      if (!bVar10) {
        if (FVisualLogger::bIsRecording != 0) {
          FMassDebugger::GetRequirementsDescription(&FStack_b8,(FMassFragmentRequirements *)this);
          pFVar15 = TSharedPtr<FMassEntityManager,1>::operator->
                              ((TSharedPtr<FMassEntityManager,1> *)&this->_padding_);
          pUVar16 = FWeakObjectPtr::Get(&(pFVar15->Owner).WeakPtr);
          FVisualLogger::CategorizedLogfImpl
                    (pUVar16,(FName *)&LogMass.field_0x4,Error,
                     L"FMassEntityQuery::CacheArchetypes: requirements not valid: %s");
          if (FStack_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FStack_b8.Data.AllocatorInstance.Data);
          }
        }
        if ((byte)LogMass._0_1_ < 2) {
          return;
        }
        FMassDebugger::GetRequirementsDescription(&FStack_a8,(FMassFragmentRequirements *)this);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMass);
        goto LAB_1471ff736;
      }
      AlgoImpl::
      IntroSortInternal<FMassFragmentRequirementDescription,int,FIdentityFunctor,TDereferenceWrapper<FMassFragmentRequirementDescription,FScriptStructSortOperator>_>
                ((FMassFragmentRequirementDescription *)this->_padding_,(int)this->_padding_,
                 FStackX_8,(FScriptStructSortOperator *)auStackX_10);
      AlgoImpl::
      IntroSortInternal<FMassFragmentRequirementDescription,int,FIdentityFunctor,TDereferenceWrapper<FMassFragmentRequirementDescription,FScriptStructSortOperator>_>
                ((FMassFragmentRequirementDescription *)this->_padding_,(int)this->_padding_,
                 FStackX_8,(FScriptStructSortOperator *)auStackX_18);
      AlgoImpl::
      IntroSortInternal<FMassFragmentRequirementDescription,int,FIdentityFunctor,TDereferenceWrapper<FMassFragmentRequirementDescription,FScriptStructSortOperator>_>
                ((FMassFragmentRequirementDescription *)this->_padding_,(int)this->_padding_,
                 FStackX_8,(FScriptStructSortOperator *)auStackX_20);
      AlgoImpl::
      IntroSortInternal<FMassFragmentRequirementDescription,int,FIdentityFunctor,TDereferenceWrapper<FMassFragmentRequirementDescription,FScriptStructSortOperator>_>
                ((FMassFragmentRequirementDescription *)this->_padding_,(int)this->_padding_,
                 FStackX_8,(FScriptStructSortOperator *)auStack_138);
    }
  }
  TStack_130.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TStack_130.ArrayNum = 0;
  TStack_130.ArrayMax = 0;
  if ((this->_padding_ == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  FMassEntityManager::GetMatchingArchetypes
            ((FMassEntityManager *)this->_padding_,(FMassFragmentRequirements *)this,&TStack_130,
             this->LastUpdatedArchetypeDataVersion);
  if ((this->_padding_ == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  this->LastUpdatedArchetypeDataVersion = *(uint *)(this->_padding_ + 0x74);
  if (TStack_130.ArrayNum != 0) {
    pTVar1 = &this->ValidArchetypes;
    piVar2 = &(this->ValidArchetypes).ArrayNum;
    uVar17 = *piVar2;
    lVar18 = (longlong)(int)uVar17;
    uStack_120 = uVar17;
    if ((pTVar1 == &TStack_130) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(void*)this != (void*)&Source",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x96e,L""), bVar10)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    iVar13 = TStack_130.ArrayNum;
    if (TStack_130.ArrayNum != 0) {
      iVar12 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x10,8,TStack_130.ArrayNum,&pTVar1->AllocatorInstance,piVar2,
                          &(this->ValidArchetypes).ArrayMax);
      ConstructItems<FMassArchetypeHandle,FMassArchetypeHandle,int>
                ((pTVar1->AllocatorInstance).Data + (longlong)iVar12 * 0x10,
                 (FMassArchetypeHandle *)TStack_130.AllocatorInstance.Data,iVar13);
    }
    bVar10 = -1 < CpuChannel->Enabled;
    if (bVar10) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId178,"Mass RequirementsBinding",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityQuery.cpp"
                 ,0xb2);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId178);
    }
    pFStack_f8 = (FMassFragmentRequirementDescription *)this->_padding_;
    iVar13 = (int)this->_padding_;
    if ((iVar13 < 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar11)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    iVar12 = TStack_130.ArrayNum;
    iStack_f0 = iVar13;
    iVar13 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x140,8,TStack_130.ArrayNum,
                        &(this->ArchetypeFragmentMapping).AllocatorInstance,
                        &(this->ArchetypeFragmentMapping).ArrayNum,
                        &(this->ArchetypeFragmentMapping).ArrayMax);
    DefaultConstructItems<FMassQueryRequirementIndicesMapping,int>
              ((this->ArchetypeFragmentMapping).AllocatorInstance.Data + (longlong)iVar13 * 0x140,
               iVar12);
    pFVar9 = pFStack_f8;
    uVar14 = uVar17;
    if ((int)uVar17 < (this->ValidArchetypes).ArrayNum) {
      lStack_110 = lVar18 * 0x140;
      pTVar3 = &this->ArchetypeFragmentMapping;
      lVar19 = lVar18 << 4;
      uVar8._4_4_ = uStack_ec;
      uVar8._0_4_ = iStack_f0;
      lStack_118 = lVar18;
      do {
        uVar14 = 0;
        if ((int)uVar17 < (this->ValidArchetypes).ArrayNum) {
          uVar14 = ~uVar17 >> 0x1f;
        }
        lStack_108 = lVar19;
        if ((uVar14 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar20 = (this->ValidArchetypes).AllocatorInstance.Data + lVar19;
        if ((*(longlong *)pFVar20 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("ArchetypeHandle.IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Internal\\MassArchetypeData.h"
                                ,0x1ff,L""), bVar11)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        this_00 = *(FMassArchetypeData **)pFVar20;
        uVar14 = 0;
        if ((int)uVar17 < (this->ArchetypeFragmentMapping).ArrayNum) {
          uVar14 = ~uVar17 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        lVar18 = lStack_110;
        TStack_98.DataPtr = pFVar9;
        TStack_98._8_8_ = uVar8;
        FMassArchetypeData::GetRequirementsFragmentMapping
                  (this_00,&TStack_98,
                   (TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *)
                   ((pTVar3->AllocatorInstance).Data + lStack_110));
        if ((int)this->_padding_ != 0) {
          uVar14 = 0;
          if ((int)uVar17 < (this->ArchetypeFragmentMapping).ArrayNum) {
            uVar14 = ~uVar17 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pFVar20 = (pTVar3->AllocatorInstance).Data;
          pFStack_e8 = (FMassFragmentRequirementDescription *)this->_padding_;
          iVar13 = (int)this->_padding_;
          if ((iVar13 < 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InCount >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xeb,L""), bVar11)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          TStack_88._12_4_ = uStack_dc;
          TStack_88.ArrayNum = iVar13;
          TStack_88.DataPtr = pFStack_e8;
          iStack_e0 = iVar13;
          FMassArchetypeData::GetRequirementsChunkFragmentMapping
                    (this_00,&TStack_88,
                     (TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *)
                     (pFVar20 + lVar18 + 0x50));
        }
        if ((int)this->_padding_ != 0) {
          uVar14 = 0;
          if ((int)uVar17 < (this->ArchetypeFragmentMapping).ArrayNum) {
            uVar14 = ~uVar17 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          iVar13 = (int)this->_padding_;
          pFStack_d8 = (FMassFragmentRequirementDescription *)this->_padding_;
          pFVar20 = (pTVar3->AllocatorInstance).Data;
          if ((iVar13 < 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InCount >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xeb,L""), bVar11)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          TStack_78._12_4_ = uStack_cc;
          TStack_78.ArrayNum = iVar13;
          TStack_78.DataPtr = pFStack_d8;
          iStack_d0 = iVar13;
          FMassArchetypeData::GetRequirementsConstSharedFragmentMapping
                    (this_00,&TStack_78,
                     (TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *)
                     (pFVar20 + (longlong)(int)uVar17 * 0x140 + 0xa0));
        }
        if ((int)this->_padding_ != 0) {
          uVar14 = 0;
          if ((int)uVar17 < (this->ArchetypeFragmentMapping).ArrayNum) {
            uVar14 = ~uVar17 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          iVar13 = (int)this->_padding_;
          pFStack_c8 = (FMassFragmentRequirementDescription *)this->_padding_;
          pFVar20 = (pTVar3->AllocatorInstance).Data;
          if ((iVar13 < 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InCount >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xeb,L""), bVar11)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          aTStack_68[0]._12_4_ = uStack_bc;
          aTStack_68[0].ArrayNum = iVar13;
          aTStack_68[0].DataPtr = pFStack_c8;
          iStack_c0 = iVar13;
          FMassArchetypeData::GetRequirementsSharedFragmentMapping
                    (this_00,aTStack_68,
                     (TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *)
                     (pFVar20 + (longlong)(int)uVar17 * 0x140 + 0xf0));
        }
        uVar17 = uVar17 + 1;
        lStack_118 = lStack_118 + 1;
        lVar19 = lStack_108 + 0x10;
        lStack_110 = lStack_110 + 0x140;
        uVar14 = uStack_120;
        lStack_108 = lVar19;
      } while ((int)uVar17 < (this->ValidArchetypes).ArrayNum);
    }
    if ((this->GroupSortingSteps).ArrayNum == 0) {
      BuildOrderedArchetypeIndices(this,uVar14);
    }
    else {
      SortArchetypes(this,uVar14);
    }
    if (bVar10) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  DestructItems<FMassArchetypeHandle,int>
            ((FMassArchetypeHandle *)TStack_130.AllocatorInstance.Data,TStack_130.ArrayNum);
  FStack_a8.Data.AllocatorInstance.Data = TStack_130.AllocatorInstance.Data;
LAB_1471ff736:
  if (FStack_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_a8.Data.AllocatorInstance.Data);
  }
  return;
}

// CacheArchetypes @ 1471fee40

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FMassEntityQuery::CacheArchetypes(FMassEntityQuery *this)

{
  TArray<FMassArchetypeHandle,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TArray<FMassQueryRequirementIndicesMapping,TSizedDefaultAllocator<32>_> *pTVar3;
  ulonglong uVar4;
  TArray<UE::Mass::FArchetypeGroupID,TSizedDefaultAllocator<32>_> *pTVar5;
  FMassQueryRequirementIndicesMapping *pFVar6;
  FMassArchetypeData *this_00;
  code *pcVar7;
  undefined8 uVar8;
  FMassFragmentRequirementDescription *pFVar9;
  bool bVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  FMassEntityManager *pFVar15;
  UObject *pUVar16;
  uint uVar17;
  longlong lVar18;
  longlong lVar19;
  FScriptContainerElement *pFVar20;
  FIdentityFunctor local_res8;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_138 [8];
  TArray<FMassArchetypeHandle,TSizedDefaultAllocator<32>_> local_130;
  uint local_120;
  longlong local_118;
  longlong local_110;
  longlong local_108;
  FMassFragmentRequirementDescription *local_f8;
  int iStack_f0;
  undefined4 uStack_ec;
  FMassFragmentRequirementDescription *local_e8;
  int iStack_e0;
  undefined4 uStack_dc;
  FMassFragmentRequirementDescription *local_d8;
  int iStack_d0;
  undefined4 uStack_cc;
  FMassFragmentRequirementDescription *local_c8;
  int iStack_c0;
  undefined4 uStack_bc;
  FString local_b8;
  FString local_a8;
  TArrayView<FMassFragmentRequirementDescription_const_,int> local_98;
  TArrayView<FMassFragmentRequirementDescription_const_,int> local_88;
  TArrayView<FMassFragmentRequirementDescription_const_,int> local_78;
  TArrayView<FMassFragmentRequirementDescription_const_,int> local_68 [2];
  
  if ((this->_padding_ == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("CachedEntityManager",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityQuery.cpp"
                          ,0x76,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar4 = this->_padding_;
  uVar17 = ((uint)(uVar4 >> 0x14) & 0xffff ^ (uint)(uVar4 >> 4)) * -0x7a143595;
  uVar17 = (uVar17 >> 0xd ^ uVar17) * -0x3d4d51cb;
  uVar17 = uVar17 >> 0x10 ^ uVar17;
  if ((uVar4 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((this->EntitySubsystemHash == uVar17) && (*(short *)((longlong)&this->_padding_ + 2) == 0)) {
    if (*(uint *)(this->_padding_ + 0x74) == this->LastUpdatedArchetypeDataVersion) {
      return;
    }
  }
  else {
    this->EntitySubsystemHash = uVar17;
    piVar2 = &(this->ValidArchetypes).ArrayMax;
    pFVar20 = (this->ValidArchetypes).AllocatorInstance.Data;
    iVar13 = (this->ValidArchetypes).ArrayNum;
    if (*piVar2 < 0) {
      DestructItems<FMassArchetypeHandle,int>((FMassArchetypeHandle *)pFVar20,iVar13);
      (this->ValidArchetypes).ArrayNum = 0;
      if (*piVar2 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,&(this->ValidArchetypes).AllocatorInstance,0,piVar2);
      }
    }
    else {
      DestructItems<FMassArchetypeHandle,int>((FMassArchetypeHandle *)pFVar20,iVar13);
      (this->ValidArchetypes).ArrayNum = 0;
    }
    (this->OrderedArchetypeIndices).ArrayNum = 0;
    if ((this->OrderedArchetypeIndices).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&(this->OrderedArchetypeIndices).AllocatorInstance,0,
                 &(this->OrderedArchetypeIndices).ArrayMax);
    }
    piVar2 = &(this->CachedGroupIDs).ArrayMax;
    pTVar5 = (TArray<UE::Mass::FArchetypeGroupID,TSizedDefaultAllocator<32>_> *)
             (this->CachedGroupIDs).AllocatorInstance.Data;
    iVar13 = (this->CachedGroupIDs).ArrayNum;
    if (*piVar2 < 0) {
      DestructItems<TArray<UE::Mass::FArchetypeGroupID,TSizedDefaultAllocator<32>_>,int>
                (pTVar5,iVar13);
      (this->CachedGroupIDs).ArrayNum = 0;
      if (*piVar2 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,&(this->CachedGroupIDs).AllocatorInstance,0,piVar2);
      }
    }
    else {
      DestructItems<TArray<UE::Mass::FArchetypeGroupID,TSizedDefaultAllocator<32>_>,int>
                (pTVar5,iVar13);
      (this->CachedGroupIDs).ArrayNum = 0;
    }
    this->LastUpdatedArchetypeDataVersion = 0;
    piVar2 = &(this->ArchetypeFragmentMapping).ArrayMax;
    pFVar6 = (FMassQueryRequirementIndicesMapping *)
             (this->ArchetypeFragmentMapping).AllocatorInstance.Data;
    iVar13 = (this->ArchetypeFragmentMapping).ArrayNum;
    if (*piVar2 < 0) {
      DestructItems<FMassQueryRequirementIndicesMapping,int>(pFVar6,iVar13);
      (this->ArchetypeFragmentMapping).ArrayNum = 0;
      if (*piVar2 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x140,8,0,&(this->ArchetypeFragmentMapping).AllocatorInstance,0,piVar2);
      }
    }
    else {
      DestructItems<FMassQueryRequirementIndicesMapping,int>(pFVar6,iVar13);
      (this->ArchetypeFragmentMapping).ArrayNum = 0;
    }
    if (*(short *)((longlong)&this->_padding_ + 2) != 0) {
      *(undefined2 *)((longlong)&this->_padding_ + 2) = 0;
      bVar10 = FMassFragmentRequirements::CheckValidity((FMassFragmentRequirements *)this);
      if (!bVar10) {
        if (FVisualLogger::bIsRecording != 0) {
          FMassDebugger::GetRequirementsDescription(&local_b8,(FMassFragmentRequirements *)this);
          pFVar15 = TSharedPtr<FMassEntityManager,1>::operator->
                              ((TSharedPtr<FMassEntityManager,1> *)&this->_padding_);
          pUVar16 = FWeakObjectPtr::Get(&(pFVar15->Owner).WeakPtr);
          FVisualLogger::CategorizedLogfImpl
                    (pUVar16,(FName *)&LogMass.field_0x4,Error,
                     L"FMassEntityQuery::CacheArchetypes: requirements not valid: %s");
          if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_b8.Data.AllocatorInstance.Data);
          }
        }
        if ((byte)LogMass._0_1_ < 2) {
          return;
        }
        FMassDebugger::GetRequirementsDescription(&local_a8,(FMassFragmentRequirements *)this);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMass);
        goto LAB_1471ff736;
      }
      AlgoImpl::
      IntroSortInternal<FMassFragmentRequirementDescription,int,FIdentityFunctor,TDereferenceWrapper<FMassFragmentRequirementDescription,FScriptStructSortOperator>_>
                ((FMassFragmentRequirementDescription *)this->_padding_,(int)this->_padding_,
                 local_res8,(FScriptStructSortOperator *)local_res10);
      AlgoImpl::
      IntroSortInternal<FMassFragmentRequirementDescription,int,FIdentityFunctor,TDereferenceWrapper<FMassFragmentRequirementDescription,FScriptStructSortOperator>_>
                ((FMassFragmentRequirementDescription *)this->_padding_,(int)this->_padding_,
                 local_res8,(FScriptStructSortOperator *)local_res18);
      AlgoImpl::
      IntroSortInternal<FMassFragmentRequirementDescription,int,FIdentityFunctor,TDereferenceWrapper<FMassFragmentRequirementDescription,FScriptStructSortOperator>_>
                ((FMassFragmentRequirementDescription *)this->_padding_,(int)this->_padding_,
                 local_res8,(FScriptStructSortOperator *)local_res20);
      AlgoImpl::
      IntroSortInternal<FMassFragmentRequirementDescription,int,FIdentityFunctor,TDereferenceWrapper<FMassFragmentRequirementDescription,FScriptStructSortOperator>_>
                ((FMassFragmentRequirementDescription *)this->_padding_,(int)this->_padding_,
                 local_res8,(FScriptStructSortOperator *)local_138);
    }
  }
  local_130.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_130.ArrayNum = 0;
  local_130.ArrayMax = 0;
  if ((this->_padding_ == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  FMassEntityManager::GetMatchingArchetypes
            ((FMassEntityManager *)this->_padding_,(FMassFragmentRequirements *)this,&local_130,
             this->LastUpdatedArchetypeDataVersion);
  if ((this->_padding_ == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  this->LastUpdatedArchetypeDataVersion = *(uint *)(this->_padding_ + 0x74);
  if (local_130.ArrayNum != 0) {
    pTVar1 = &this->ValidArchetypes;
    piVar2 = &(this->ValidArchetypes).ArrayNum;
    uVar17 = *piVar2;
    lVar18 = (longlong)(int)uVar17;
    local_120 = uVar17;
    if ((pTVar1 == &local_130) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(void*)this != (void*)&Source",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x96e,L""), bVar10)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    iVar13 = local_130.ArrayNum;
    if (local_130.ArrayNum != 0) {
      iVar12 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x10,8,local_130.ArrayNum,&pTVar1->AllocatorInstance,piVar2,
                          &(this->ValidArchetypes).ArrayMax);
      ConstructItems<FMassArchetypeHandle,FMassArchetypeHandle,int>
                ((pTVar1->AllocatorInstance).Data + (longlong)iVar12 * 0x10,
                 (FMassArchetypeHandle *)local_130.AllocatorInstance.Data,iVar13);
    }
    bVar10 = -1 < CpuChannel->Enabled;
    if (bVar10) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId178,"Mass RequirementsBinding",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityQuery.cpp"
                 ,0xb2);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId178);
    }
    local_f8 = (FMassFragmentRequirementDescription *)this->_padding_;
    iVar13 = (int)this->_padding_;
    if ((iVar13 < 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar11)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    iVar12 = local_130.ArrayNum;
    iStack_f0 = iVar13;
    iVar13 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x140,8,local_130.ArrayNum,
                        &(this->ArchetypeFragmentMapping).AllocatorInstance,
                        &(this->ArchetypeFragmentMapping).ArrayNum,
                        &(this->ArchetypeFragmentMapping).ArrayMax);
    DefaultConstructItems<FMassQueryRequirementIndicesMapping,int>
              ((this->ArchetypeFragmentMapping).AllocatorInstance.Data + (longlong)iVar13 * 0x140,
               iVar12);
    pFVar9 = local_f8;
    uVar14 = uVar17;
    if ((int)uVar17 < (this->ValidArchetypes).ArrayNum) {
      local_110 = lVar18 * 0x140;
      pTVar3 = &this->ArchetypeFragmentMapping;
      lVar19 = lVar18 << 4;
      uVar8._4_4_ = uStack_ec;
      uVar8._0_4_ = iStack_f0;
      local_118 = lVar18;
      do {
        uVar14 = 0;
        if ((int)uVar17 < (this->ValidArchetypes).ArrayNum) {
          uVar14 = ~uVar17 >> 0x1f;
        }
        local_108 = lVar19;
        if ((uVar14 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar20 = (this->ValidArchetypes).AllocatorInstance.Data + lVar19;
        if ((*(longlong *)pFVar20 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("ArchetypeHandle.IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Internal\\MassArchetypeData.h"
                                ,0x1ff,L""), bVar11)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        this_00 = *(FMassArchetypeData **)pFVar20;
        uVar14 = 0;
        if ((int)uVar17 < (this->ArchetypeFragmentMapping).ArrayNum) {
          uVar14 = ~uVar17 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        lVar18 = local_110;
        local_98.DataPtr = pFVar9;
        local_98._8_8_ = uVar8;
        FMassArchetypeData::GetRequirementsFragmentMapping
                  (this_00,&local_98,
                   (TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *)
                   ((pTVar3->AllocatorInstance).Data + local_110));
        if ((int)this->_padding_ != 0) {
          uVar14 = 0;
          if ((int)uVar17 < (this->ArchetypeFragmentMapping).ArrayNum) {
            uVar14 = ~uVar17 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pFVar20 = (pTVar3->AllocatorInstance).Data;
          local_e8 = (FMassFragmentRequirementDescription *)this->_padding_;
          iVar13 = (int)this->_padding_;
          if ((iVar13 < 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InCount >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xeb,L""), bVar11)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          local_88._12_4_ = uStack_dc;
          local_88.ArrayNum = iVar13;
          local_88.DataPtr = local_e8;
          iStack_e0 = iVar13;
          FMassArchetypeData::GetRequirementsChunkFragmentMapping
                    (this_00,&local_88,
                     (TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *)
                     (pFVar20 + lVar18 + 0x50));
        }
        if ((int)this->_padding_ != 0) {
          uVar14 = 0;
          if ((int)uVar17 < (this->ArchetypeFragmentMapping).ArrayNum) {
            uVar14 = ~uVar17 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          iVar13 = (int)this->_padding_;
          local_d8 = (FMassFragmentRequirementDescription *)this->_padding_;
          pFVar20 = (pTVar3->AllocatorInstance).Data;
          if ((iVar13 < 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InCount >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xeb,L""), bVar11)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          local_78._12_4_ = uStack_cc;
          local_78.ArrayNum = iVar13;
          local_78.DataPtr = local_d8;
          iStack_d0 = iVar13;
          FMassArchetypeData::GetRequirementsConstSharedFragmentMapping
                    (this_00,&local_78,
                     (TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *)
                     (pFVar20 + (longlong)(int)uVar17 * 0x140 + 0xa0));
        }
        if ((int)this->_padding_ != 0) {
          uVar14 = 0;
          if ((int)uVar17 < (this->ArchetypeFragmentMapping).ArrayNum) {
            uVar14 = ~uVar17 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          iVar13 = (int)this->_padding_;
          local_c8 = (FMassFragmentRequirementDescription *)this->_padding_;
          pFVar20 = (pTVar3->AllocatorInstance).Data;
          if ((iVar13 < 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InCount >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xeb,L""), bVar11)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          local_68[0]._12_4_ = uStack_bc;
          local_68[0].ArrayNum = iVar13;
          local_68[0].DataPtr = local_c8;
          iStack_c0 = iVar13;
          FMassArchetypeData::GetRequirementsSharedFragmentMapping
                    (this_00,local_68,
                     (TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *)
                     (pFVar20 + (longlong)(int)uVar17 * 0x140 + 0xf0));
        }
        uVar17 = uVar17 + 1;
        local_118 = local_118 + 1;
        lVar19 = local_108 + 0x10;
        local_110 = local_110 + 0x140;
        uVar14 = local_120;
        local_108 = lVar19;
      } while ((int)uVar17 < (this->ValidArchetypes).ArrayNum);
    }
    if ((this->GroupSortingSteps).ArrayNum == 0) {
      BuildOrderedArchetypeIndices(this,uVar14);
    }
    else {
      SortArchetypes(this,uVar14);
    }
    if (bVar10) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  DestructItems<FMassArchetypeHandle,int>
            ((FMassArchetypeHandle *)local_130.AllocatorInstance.Data,local_130.ArrayNum);
  local_a8.Data.AllocatorInstance.Data = local_130.AllocatorInstance.Data;
LAB_1471ff736:
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  return;
}

// CreateMatchingEntitiesCollection @ 14720b2a0

TArray<FMassArchetypeEntityCollection,TSizedDefaultAllocator<32>_> * __thiscall
FMassEntityQuery::CreateMatchingEntitiesCollection
          (FMassEntityQuery *this,
          TArray<FMassArchetypeEntityCollection,TSizedDefaultAllocator<32>_> *__return_storage_ptr__
          )

{
  int *piVar1;
  FMassArchetypeEntityCollection *this_00;
  int iVar2;
  FScriptContainerElement *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  FMassArchetypeData *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  TArray<FMassArchetypeEntityCollection,TSizedDefaultAllocator<32>_> *pTVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  undefined1 local_res8 [8];
  
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  CacheArchetypes(this);
  uVar9 = (this->ValidArchetypes).ArrayNum;
  if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
  }
  if (*piVar1 < (int)uVar9) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,uVar9,&__return_storage_ptr__->AllocatorInstance,
               __return_storage_ptr__->ArrayNum,piVar1);
  }
  iVar2 = (this->ValidArchetypes).ArrayNum;
  pFVar12 = (this->ValidArchetypes).AllocatorInstance.Data;
  pFVar13 = pFVar12 + (longlong)iVar2 * 0x10;
  while( true ) {
    if ((this->ValidArchetypes).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FMassArchetypeHandle,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar12 == pFVar13) {
      return __return_storage_ptr__;
    }
    iVar8 = __return_storage_ptr__->ArrayNum;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x828,&__return_storage_ptr__->AllocatorInstance,piVar1);
    }
    lVar10 = (longlong)iVar8;
    __return_storage_ptr__->ArrayNum = iVar8 + 1;
    pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
    *(undefined8 *)(pFVar3 + lVar10 * 0x28) = 0;
    *(undefined8 *)(pFVar3 + lVar10 * 0x28 + 8) = 0;
    this_00 = (FMassArchetypeEntityCollection *)(pFVar3 + lVar10 * 0x28);
    (this_00->Archetype).ArchetypeHandle.DataPtr.Object = *(FMassArchetypeData **)pFVar12;
    pTVar4 = *(TReferenceControllerBase<1> **)(pFVar12 + 8);
    (this_00->Archetype).ArchetypeHandle.DataPtr.SharedReferenceCount.ReferenceController = pTVar4;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar5 = (this_00->Archetype).ArchetypeHandle.DataPtr.Object;
    uVar9 = 0;
    if (pFVar5 != (FMassArchetypeData *)0x0) {
      uVar9 = pFVar5->EntityOrderVersion;
    }
    (this_00->Archetype).HandleVersion = uVar9;
    if ((*(longlong *)pFVar12 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InArchetypeHandle.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassArchetypeTypes.cpp"
                           ,0xc9,L""), bVar7)) break;
    FMassArchetypeEntityCollection::GatherChunksFromArchetype(this_00);
    pFVar12 = pFVar12 + 0x10;
  }
  pcVar6 = (code *)swi(3);
  pTVar11 = (TArray<FMassArchetypeEntityCollection,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
  return pTVar11;
}

// DebugEnableEntityOwnerLogging @ 14720e210

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall FMassEntityQuery::DebugEnableEntityOwnerLogging(FMassEntityQuery *this)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>::
          GetTypeIndex<FMassDebugLogFragment>();
  bVar1 = FStructTypeBitSet::FConstBitSetContainer::Contains
                    ((FConstBitSetContainer *)&this->_padding_,iVar2);
  if (!bVar1) {
    FMassFragmentRequirements::AddRequirement<FMassDebugLogFragment>
              ((FMassFragmentRequirements *)this,ReadOnly,Optional);
    return;
  }
  return;
}

// ExportRequirements @ 147219210

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
FMassEntityQuery::ExportRequirements(FMassEntityQuery *this,FMassExecutionRequirements *param_1)

{
  FMassSubsystemRequirements::ExportRequirements
            ((FMassSubsystemRequirements *)&this->_padding_,param_1);
  FMassFragmentRequirements::ExportRequirements((FMassFragmentRequirements *)this,param_1);
  return;
}

// ForEachEntityChunk @ 14721c160

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
FMassEntityQuery::ForEachEntityChunk
          (FMassEntityQuery *this,FMassEntityManager *param_1,FMassExecutionContext *param_2,
          TFunction<void___cdecl(FMassExecutionContext_&)> *param_3)

{
  ForEachEntityChunk(this,param_2,param_3);
  return;
}

// ForEachEntityChunk @ 14721c180

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
FMassEntityQuery::ForEachEntityChunk
          (FMassEntityQuery *this,FMassExecutionContext *param_1,FExecutionLimiter *param_2,
          TFunction<void___cdecl(FMassExecutionContext_&)> *param_3)

{
  int iVar1;
  uint uVar2;
  FMassArchetypeData *this_00;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  DWORD DVar10;
  FScriptContainerElement *pFVar11;
  DWORD DVar12;
  undefined1 auStackY_108 [32];
  int local_d4;
  DWORD local_d0;
  int local_cc;
  DWORD local_c8;
  int local_c4;
  LARGE_INTEGER local_b8;
  TFunction<void___cdecl(FMassExecutionContext_&)> *local_b0;
  LARGE_INTEGER local_a8;
  FScopedEntityQueryContext local_a0;
  LARGE_INTEGER *local_70;
  longlong local_68;
  LARGE_INTEGER *local_60;
  longlong local_58;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_108;
  local_d0 = 0;
  local_cc = 0;
  local_c8 = 0;
  local_b0 = param_3;
  if (-1 < MassChannel->Enabled) {
    UE::Trace::Private::FLogScope::Enter<FMassTraceQueryForEachStartedFields>
              ((TLogScope<0> *)&local_70);
    QueryPerformanceCounter(&local_b8);
    *local_70 = local_b8;
    local_70[1] = (LARGE_INTEGER)this;
    *(undefined8 *)(local_68 + 0x28) = *(undefined8 *)(local_68 + 0x20);
  }
  if ((((FMassEntityManager *)this->_padding_ == (FMassEntityManager *)0x0) ||
      ((FMassEntityManager *)this->_padding_ != (param_1->EntityManager).Object)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("CachedEntityManager == ExecutionContext.GetSharedEntityManager() && CachedEntityManager.IsValid()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityQuery.cpp"
                         ,0x142,
                         L"FMassEntityQuery needs to be initialized with a valid EntityManager and the execution context has to come from the same manager"
                        ), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (((param_1->ExecutionType != this->ExpectedContextType) ||
      ((this->ExpectedContextType != Local && (this->bRegistered == 0)))) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ExecutionContext.GetExecutionType() == ExpectedContextType && (ExpectedContextType == EMassExecutionContextType::Local || bRegistered)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityQuery.cpp"
                         ,0x146,
                         L"ExecutionContextType mismatch, make sure all the queries run as part of processor execution are registered with some processor with a FMassEntityQuery::RegisterWithProcessor call"
                        ), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FScopedEntityQueryContext::FScopedEntityQueryContext(&local_a0,this,param_1);
  iVar9 = 0;
  DVar10 = 0;
  DVar12 = 0;
  if (local_a0.bSubsystemRequirementsCached != false) {
    bVar6 = FMassFragmentRequirements::IsEmpty((FMassFragmentRequirements *)this);
    if ((bVar6) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("FMassFragmentRequirements::IsEmpty() == false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityQuery.cpp"
                           ,0x152,
                           L"FExecutionLimiter is not supported for use with manually set entity collections."
                          ), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((((param_1->EntityCollection).Ranges.ArrayNum != 0) ||
        ((param_1->EntityCollection).Archetype.ArchetypeHandle.DataPtr.Object !=
         (FMassArchetypeData *)0x0)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ExecutionContext.GetEntityCollection().IsEmpty()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityQuery.cpp"
                           ,0x153,
                           L"FExecutionLimiter is not supported for use with manually set entity collections."
                          ), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    CacheArchetypes(this);
    bVar6 = FMassExecutionContext::IsCurrentQuery(param_1,this);
    if ((!bVar6) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsCurrentQuery(RequestingQuery)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassExecutionContext.h"
                           ,0x292,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    FMassExecutionContext::SetFragmentRequirements(param_1,(FMassFragmentRequirements *)this);
    iVar1 = (this->ValidArchetypes).ArrayNum;
    iVar9 = 0;
    DVar10 = 0;
    DVar12 = 0;
    if (iVar1 != 0) {
      local_d4 = param_2->ChunkIndex;
      if (((local_d4 < 0) || (local_c4 = param_2->ArchetypeIndex, local_c4 < 0)) ||
         (iVar1 <= local_c4)) {
        param_2->ChunkIndex = 0;
        param_2->ArchetypeIndex = 0;
        local_d4 = 0;
        local_c4 = 0;
      }
      bVar4 = false;
      bVar6 = false;
      param_2->EntityCountRemaining = param_2->EntityLimit;
      param_2->MaxChunkIndex = 0x7fffffff;
      bVar5 = false;
      do {
        uVar2 = param_2->ArchetypeIndex;
        uVar8 = 0;
        if ((int)uVar2 < (this->OrderedArchetypeIndices).ArrayNum) {
          uVar8 = ~uVar2 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar2 = *(uint *)((this->OrderedArchetypeIndices).AllocatorInstance.Data +
                         (longlong)(int)uVar2 * 4);
        uVar8 = 0;
        if ((int)uVar2 < (this->ValidArchetypes).ArrayNum) {
          uVar8 = ~uVar2 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar11 = (this->ValidArchetypes).AllocatorInstance.Data + (longlong)(int)uVar2 * 0x10;
        if ((*(longlong *)pFVar11 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("ArchetypeHandle.IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Internal\\MassArchetypeData.h"
                               ,0x1ff,L""), bVar7)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        this_00 = *(FMassArchetypeData **)pFVar11;
        if ((bVar5) && (local_d4 != 0)) {
          param_2->MaxChunkIndex = local_d4;
          bVar4 = true;
          bVar6 = true;
        }
        if (-1 < MassChannel->Enabled) {
          local_cc = local_cc + (this_00->Chunks).ArrayNum;
          local_d0 = local_d0 + 1;
          local_c8 = local_c8 +
                     (*(int *)&(this_00->EntityMap).field_0x8 -
                     *(int *)&(this_00->EntityMap).field_0x34);
        }
        uVar8 = 0;
        if ((int)uVar2 < (this->ArchetypeFragmentMapping).ArrayNum) {
          uVar8 = ~uVar2 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        FMassArchetypeData::ExecuteFunction
                  (this_00,param_1,local_b0,
                   (FMassQueryRequirementIndicesMapping *)
                   ((this->ArchetypeFragmentMapping).AllocatorInstance.Data +
                   (longlong)(int)uVar2 * 0x140),&this->ChunkCondition,param_2);
        bVar7 = FMassExecutionContext::IsCurrentQuery(param_1,this);
        if ((!bVar7) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsCurrentQuery(RequestingQuery)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassExecutionContext.h"
                               ,0x298,L""), bVar7)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        FMassExecutionContext::ClearFragmentViews(param_1);
        if ((this_00->Chunks).ArrayNum <= param_2->ChunkIndex) {
          param_2->ArchetypeIndex = param_2->ArchetypeIndex + 1;
          param_2->ChunkIndex = 0;
          iVar9 = param_2->ArchetypeIndex;
          if (iVar1 <= param_2->ArchetypeIndex) {
            param_2->ArchetypeIndex = 0;
            iVar9 = 0;
          }
          if (iVar9 == local_c4) {
            bVar6 = bVar4;
            if (local_d4 == 0) {
              bVar6 = true;
            }
            bVar5 = true;
            bVar4 = bVar6;
          }
        }
        iVar9 = local_cc;
        DVar10 = local_d0;
        DVar12 = local_c8;
      } while ((0 < param_2->EntityCountRemaining) && (!bVar6));
    }
  }
  FScopedEntityQueryContext::~FScopedEntityQueryContext(&local_a0);
  if (-1 < MassChannel->Enabled) {
    UE::Trace::Private::FLogScope::Enter<FMassTraceQueryForEachCompleteFields>
              ((TLogScope<0> *)&local_60);
    QueryPerformanceCounter(&local_a8);
    *local_60 = local_a8;
    local_60[1] = (LARGE_INTEGER)this;
    local_60[2].s.LowPart = DVar10;
    *(int *)((longlong)local_60 + 0x14) = iVar9;
    local_60[3].s.LowPart = DVar12;
    *(undefined8 *)(local_58 + 0x28) = *(undefined8 *)(local_58 + 0x20);
  }
  return;
}

// ForEachEntityChunk @ 14721c6b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMassEntityQuery::ForEachEntityChunk
          (FMassEntityQuery *this,FMassExecutionContext *param_1,
          TFunction<void___cdecl(FMassExecutionContext_&)> *param_2)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  FMassArchetypeData *pFVar3;
  code *pcVar4;
  FArchetypeEntityRange *pFVar5;
  bool bVar6;
  uint uVar7;
  FMassEntityManager *pFVar8;
  UObject *pUVar9;
  ulonglong uVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  FMassQueryRequirementIndicesMapping *pFVar14;
  DWORD DVar15;
  DWORD DVar16;
  DWORD DVar17;
  FArchetypeEntityRange *pFVar18;
  undefined1 auStackY_148 [32];
  undefined1 local_118;
  undefined1 local_117 [3];
  DWORD local_114;
  DWORD local_110;
  DWORD local_10c;
  FArchetypeEntityRange *local_108;
  int iStack_100;
  undefined4 uStack_fc;
  uint local_f8;
  TFunction<void___cdecl(FMassExecutionContext_&)> *local_f0;
  FString local_e8;
  FString local_d8;
  LARGE_INTEGER local_c8;
  LARGE_INTEGER local_c0;
  TArrayView<FMassArchetypeEntityCollection::FArchetypeEntityRange_const_,int> local_b8;
  TArrayView<FMassArchetypeEntityCollection::FArchetypeEntityRange_const_,int> local_a8;
  FScopedEntityQueryContext local_98;
  LARGE_INTEGER *local_68;
  longlong local_60;
  LARGE_INTEGER *local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_148;
  local_110 = 0;
  local_10c = 0;
  DVar16 = 0;
  local_114 = 0;
  local_f0 = param_2;
  if (-1 < MassChannel->Enabled) {
    UE::Trace::Private::FLogScope::Enter<FMassTraceQueryForEachStartedFields>
              ((TLogScope<0> *)&local_68);
    QueryPerformanceCounter(&local_c8);
    *local_68 = local_c8;
    local_68[1] = (LARGE_INTEGER)this;
    *(undefined8 *)(local_60 + 0x28) = *(undefined8 *)(local_60 + 0x20);
  }
  if ((((FMassEntityManager *)this->_padding_ == (FMassEntityManager *)0x0) ||
      ((FMassEntityManager *)this->_padding_ != (param_1->EntityManager).Object)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("CachedEntityManager == ExecutionContext.GetSharedEntityManager() && CachedEntityManager.IsValid()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityQuery.cpp"
                         ,0xea,
                         L"FMassEntityQuery needs to be initialized with a valid EntityManager and the execution context has to come from the same manager"
                        ), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (((param_1->ExecutionType != this->ExpectedContextType) ||
      ((this->ExpectedContextType != Local && (this->bRegistered == 0)))) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ExecutionContext.GetExecutionType() == ExpectedContextType && (ExpectedContextType == EMassExecutionContextType::Local || bRegistered)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityQuery.cpp"
                         ,0xee,
                         L"ExecutionContextType mismatch, make sure all the queries run as part of processor execution are registered with some processor with a FMassEntityQuery::RegisterWithProcessor call"
                        ), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FScopedEntityQueryContext::FScopedEntityQueryContext(&local_98,this,param_1);
  DVar17 = 0;
  DVar15 = DVar16;
  if (local_98.bSubsystemRequirementsCached != false) {
    bVar6 = FMassFragmentRequirements::IsEmpty((FMassFragmentRequirements *)this);
    if (bVar6) {
      if (((param_1->EntityCollection).Ranges.ArrayNum == 0) &&
         ((param_1->EntityCollection).Archetype.ArchetypeHandle.DataPtr.Object ==
          (FMassArchetypeData *)0x0)) {
        local_118 = 0;
        bVar6 = `FMassEntityQuery::ForEachEntityChunk'::__l27::<lambda_1>::operator()(&local_118);
        if (!bVar6) goto LAB_14721cd18;
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        atexit(`FMassEntityQuery::ForEachEntityChunk'::__l29::
               _dynamic_atexit_destructor_for__EmptyMapping__);
        _Init_thread_footer(&::_TSS0);
      }
      pTVar2 = (param_1->EntityCollection).Archetype.ArchetypeHandle.DataPtr.SharedReferenceCount.
               ReferenceController;
      pFVar3 = (param_1->EntityCollection).Archetype.ArchetypeHandle.DataPtr.Object;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((pFVar3 == (FMassArchetypeData *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArchetypeHandle.IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Internal\\MassArchetypeData.h"
                             ,0x1ff,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      local_108 = (FArchetypeEntityRange *)(param_1->EntityCollection).Ranges.AllocatorInstance.Data
      ;
      iVar1 = (param_1->EntityCollection).Ranges.ArrayNum;
      if ((iVar1 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      local_a8._12_4_ = uStack_fc;
      local_a8.ArrayNum = iVar1;
      local_a8.DataPtr = local_108;
      iStack_100 = iVar1;
      FMassArchetypeData::ExecuteFunction
                (pFVar3,param_1,param_2,&EmptyMapping,&local_a8,&this->ChunkCondition);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      DVar17 = local_114;
      DVar16 = local_114;
      DVar15 = local_114;
    }
    else {
      CacheArchetypes(this);
      if (((param_1->EntityCollection).Ranges.ArrayNum == 0) &&
         ((param_1->EntityCollection).Archetype.ArchetypeHandle.DataPtr.Object ==
          (FMassArchetypeData *)0x0)) {
        FMassExecutionContext::ApplyFragmentRequirements(param_1,this);
        local_f8 = (this->OrderedArchetypeIndices).ArrayNum;
        uVar10 = (ulonglong)(int)local_f8;
        pFVar18 = (FArchetypeEntityRange *)(this->OrderedArchetypeIndices).AllocatorInstance.Data;
        local_108 = (FArchetypeEntityRange *)(&pFVar18->ChunkIndex + uVar10);
        while( true ) {
          pFVar5 = local_108;
          if ((this->OrderedArchetypeIndices).ArrayNum != (int)uVar10) {
            local_117[0] = 0;
            `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_117);
          }
          DVar17 = local_110;
          DVar16 = local_10c;
          DVar15 = local_114;
          if (pFVar18 == pFVar5) break;
          uVar11 = pFVar18->ChunkIndex;
          uVar7 = 0;
          if ((int)uVar11 < (this->ValidArchetypes).ArrayNum) {
            uVar7 = ~uVar11 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar12 = (this->ValidArchetypes).AllocatorInstance.Data + (longlong)(int)uVar11 * 0x10;
          if ((*(longlong *)pFVar12 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("ArchetypeHandle.IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Internal\\MassArchetypeData.h"
                                 ,0x1ff,L""), bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar3 = *(FMassArchetypeData **)pFVar12;
          if (-1 < MassChannel->Enabled) {
            local_10c = local_10c + (pFVar3->Chunks).ArrayNum;
            local_110 = local_110 + 1;
            local_114 = local_114 +
                        (*(int *)&(pFVar3->EntityMap).field_0x8 -
                        *(int *)&(pFVar3->EntityMap).field_0x34);
          }
          uVar7 = 0;
          if ((int)uVar11 < (this->ArchetypeFragmentMapping).ArrayNum) {
            uVar7 = ~uVar11 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          FMassArchetypeData::ExecuteFunction
                    (pFVar3,param_1,param_2,
                     (FMassQueryRequirementIndicesMapping *)
                     ((this->ArchetypeFragmentMapping).AllocatorInstance.Data +
                     (longlong)(int)uVar11 * 0x140),&this->ChunkCondition,(FExecutionLimiter *)0x0);
          bVar6 = FMassExecutionContext::IsCurrentQuery(param_1,this);
          if ((!bVar6) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsCurrentQuery(RequestingQuery)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassExecutionContext.h"
                                 ,0x298,L""), bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          FMassExecutionContext::ClearFragmentViews(param_1);
          uVar10 = (ulonglong)local_f8;
          pFVar18 = (FArchetypeEntityRange *)&pFVar18->SubchunkStart;
        }
      }
      else {
        pTVar2 = (param_1->EntityCollection).Archetype.ArchetypeHandle.DataPtr.SharedReferenceCount.
                 ReferenceController;
        pFVar3 = (param_1->EntityCollection).Archetype.ArchetypeHandle.DataPtr.Object;
        if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
          UNLOCK();
        }
        pFVar12 = (this->ValidArchetypes).AllocatorInstance.Data;
        for (pFVar13 = pFVar12;
            pFVar13 != pFVar12 + (longlong)(this->ValidArchetypes).ArrayNum * 0x10;
            pFVar13 = pFVar13 + 0x10) {
          if (*(FMassArchetypeData **)pFVar13 == pFVar3) {
            if ((int)((longlong)pFVar13 - (longlong)pFVar12 >> 4) != -1) {
              FMassExecutionContext::ApplyFragmentRequirements(param_1,this);
              if ((pFVar3 == (FMassArchetypeData *)0x0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("ArchetypeHandle.IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Internal\\MassArchetypeData.h"
                                     ,0x1ff,L""), bVar6)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              if (-1 < MassChannel->Enabled) {
                local_10c = (pFVar3->Chunks).ArrayNum;
                local_114 = *(int *)&(pFVar3->EntityMap).field_0x8 -
                            *(int *)&(pFVar3->EntityMap).field_0x34;
                local_110 = 1;
              }
              iVar1 = (param_1->EntityCollection).Ranges.ArrayNum;
              pFVar18 = (FArchetypeEntityRange *)
                        (param_1->EntityCollection).Ranges.AllocatorInstance.Data;
              if ((iVar1 < 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("InCount >= 0",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                     ,0xeb,L""), bVar6)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              uStack_fc = local_b8._12_4_;
              if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
                UNLOCK();
              }
              local_108 = pFVar18;
              iStack_100 = iVar1;
              if ((*(int *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
                atexit(`FMassEntityQuery::GetRequirementsMappingForArchetype'::__l2::
                       _dynamic_atexit_destructor_for__FallbackEmptyMapping__);
                _Init_thread_footer(&::_TSS0);
              }
              if ((*(short *)((longlong)&this->_padding_ + 2) != 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("HasIncrementalChanges() == false",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityQuery.cpp"
                                     ,0x306,
                                     L"Fetching cached fragments mapping while the query\'s cached data is out of sync!"
                                    ), bVar6)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              pFVar12 = (this->ValidArchetypes).AllocatorInstance.Data;
              pFVar13 = pFVar12;
              if (pFVar12 == pFVar12 + (longlong)(this->ValidArchetypes).ArrayNum * 0x10)
              goto LAB_14721ccc2;
              goto LAB_14721ccb0;
            }
            break;
          }
        }
        if (FVisualLogger::bIsRecording != 0) {
          if (pFVar3 == (FMassArchetypeData *)0x0) {
            ::FString::FString(&local_e8,L"Invalid");
          }
          else {
            FMassDebugger::GetArchetypeRequirementCompatibilityDescription
                      (&local_e8,(FMassFragmentRequirements *)this,&pFVar3->CompositionDescriptor);
          }
          pFVar8 = TSharedPtr<FMassEntityManager,1>::operator->
                             ((TSharedPtr<FMassEntityManager,1> *)&this->_padding_);
          pUVar9 = FWeakObjectPtr::Get(&(pFVar8->Owner).WeakPtr);
          FVisualLogger::CategorizedLogfImpl
                    (pUVar9,(FName *)&LogMass.field_0x4,Verbose,
                     L"Attempted to execute FMassEntityQuery with an incompatible Archetype: %s. Note that this is fine for observers."
                    );
          if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_e8.Data.AllocatorInstance.Data);
          }
        }
        if (5 < (byte)LogMass._0_1_) {
          if (pFVar3 == (FMassArchetypeData *)0x0) {
            ::FString::FString(&local_d8,L"Invalid");
          }
          else {
            FMassDebugger::GetArchetypeRequirementCompatibilityDescription
                      (&local_d8,(FMassFragmentRequirements *)this,&pFVar3->CompositionDescriptor);
          }
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMass);
          if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_d8.Data.AllocatorInstance.Data);
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
        DVar17 = local_114;
        DVar16 = local_114;
        DVar15 = local_114;
      }
    }
  }
  goto LAB_14721cd18;
  while (pFVar13 = pFVar13 + 0x10,
        pFVar13 != pFVar12 + (longlong)(this->ValidArchetypes).ArrayNum * 0x10) {
LAB_14721ccb0:
    if (*(FMassArchetypeData **)pFVar13 == pFVar3) {
      uVar11 = (uint)((longlong)pFVar13 - (longlong)pFVar12 >> 4);
      if (uVar11 != 0xffffffff) {
        uVar7 = 0;
        if ((int)uVar11 < (this->ArchetypeFragmentMapping).ArrayNum) {
          uVar7 = ~uVar11 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar14 = (FMassQueryRequirementIndicesMapping *)
                  ((this->ArchetypeFragmentMapping).AllocatorInstance.Data +
                  (longlong)(int)uVar11 * 0x140);
        goto LAB_14721ccc9;
      }
      break;
    }
  }
LAB_14721ccc2:
  pFVar14 = &FallbackEmptyMapping;
LAB_14721ccc9:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  local_b8._12_4_ = uStack_fc;
  local_b8.ArrayNum = iStack_100;
  local_b8.DataPtr = local_108;
  FMassArchetypeData::ExecuteFunction
            (pFVar3,param_1,local_f0,pFVar14,&local_b8,&this->ChunkCondition);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  DVar17 = local_110;
  DVar16 = local_10c;
  DVar15 = local_114;
LAB_14721cd18:
  FScopedEntityQueryContext::~FScopedEntityQueryContext(&local_98);
  if (-1 < MassChannel->Enabled) {
    UE::Trace::Private::FLogScope::Enter<FMassTraceQueryForEachCompleteFields>
              ((TLogScope<0> *)&local_58);
    QueryPerformanceCounter(&local_c0);
    *local_58 = local_c0;
    local_58[1] = (LARGE_INTEGER)this;
    local_58[2].s.LowPart = DVar17;
    *(DWORD *)((longlong)local_58 + 0x14) = DVar16;
    local_58[3].s.LowPart = DVar15;
    *(undefined8 *)(local_50 + 0x28) = *(undefined8 *)(local_50 + 0x20);
  }
  return;
}

// ForEachEntityChunk @ 14721cf60

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
FMassEntityQuery::ForEachEntityChunk
          (FMassEntityQuery *this,FMassArchetypeEntityCollection *param_1,
          FMassEntityManager *param_2,FMassExecutionContext *param_3,
          TFunction<void___cdecl(FMassExecutionContext_&)> *param_4)

{
  ForEachEntityChunk(this,param_1,param_3,param_4);
  return;
}

// ForEachEntityChunk @ 14721cf80

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
FMassEntityQuery::ForEachEntityChunk
          (FMassEntityQuery *this,FMassArchetypeEntityCollection *param_1,
          FMassExecutionContext *param_2,TFunction<void___cdecl(FMassExecutionContext_&)> *param_3)

{
  code *pcVar1;
  bool bVar2;
  
  if (((param_2->EntityCollection).Ranges.ArrayNum != 0) ||
     ((param_2->EntityCollection).Archetype.ArchetypeHandle.DataPtr.Object !=
      (FMassArchetypeData *)0x0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("EntityCollection.IsEmpty()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassExecutionContext.cpp"
                       ,0x49,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FMassArchetypeEntityCollection::operator=(&param_2->EntityCollection,param_1);
  ForEachEntityChunk(this,param_2,param_3);
  FMassExecutionContext::ClearEntityCollection(param_2);
  return;
}

// ForEachEntityChunkInCollections @ 14721d030

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
FMassEntityQuery::ForEachEntityChunkInCollections
          (FMassEntityQuery *this,TArrayView<FMassArchetypeEntityCollection_const_,int> *param_1,
          FMassEntityManager *param_2,FMassExecutionContext *param_3,
          TFunction<void___cdecl(FMassExecutionContext_&)> *param_4)

{
  FMassArchetypeEntityCollection *pFVar1;
  FMassArchetypeEntityCollection *pFVar2;
  
  pFVar2 = param_1->DataPtr;
  pFVar1 = pFVar2 + (int)*(undefined8 *)&param_1->ArrayNum;
  for (; pFVar2 != pFVar1; pFVar2 = pFVar2 + 1) {
    ForEachEntityChunk(this,pFVar2,param_3,param_4);
  }
  return;
}

// ForEachEntityChunkInCollections @ 14721d0b0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
FMassEntityQuery::ForEachEntityChunkInCollections
          (FMassEntityQuery *this,TArrayView<FMassArchetypeEntityCollection_const_,int> *param_1,
          FMassExecutionContext *param_2,TFunction<void___cdecl(FMassExecutionContext_&)> *param_3)

{
  FMassArchetypeEntityCollection *pFVar1;
  FMassArchetypeEntityCollection *pFVar2;
  
  pFVar2 = param_1->DataPtr;
  pFVar1 = pFVar2 + param_1->ArrayNum;
  for (; pFVar2 != pFVar1; pFVar2 = pFVar2 + 1) {
    ForEachEntityChunk(this,pFVar2,param_2,param_3);
  }
  return;
}

// GetMatchingEntityHandles @ 1472232f0

TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> * __thiscall
FMassEntityQuery::GetMatchingEntityHandles
          (FMassEntityQuery *this,
          TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  ulonglong uVar7;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *pTVar8;
  FScriptContainerElement *pFVar9;
  void *_Src;
  longlong *plVar10;
  FScriptContainerElement *pFVar11;
  longlong *plVar12;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  uint local_res20;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  CacheArchetypes(this);
  local_res20 = (this->ValidArchetypes).ArrayNum;
  uVar7 = (ulonglong)(int)local_res20;
  pFVar11 = (this->ValidArchetypes).AllocatorInstance.Data;
  pFVar9 = pFVar11 + uVar7 * 0x10;
  while( true ) {
    if ((this->ValidArchetypes).ArrayNum != (int)uVar7) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FMassArchetypeHandle,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (pFVar11 == pFVar9) break;
    if (*(longlong *)pFVar11 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArchetypeHandle.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Internal\\MassArchetypeData.h"
                         ,0x1ff,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
        return pTVar8;
      }
    }
    lVar3 = *(longlong *)pFVar11;
    iVar1 = *(int *)(lVar3 + 0x1c8);
    plVar10 = *(longlong **)(lVar3 + 0x1c0);
    plVar12 = plVar10 + (longlong)iVar1 * 0x12;
    while( true ) {
      if (*(int *)(lVar3 + 0x1c8) != iVar1) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<FMassArchetypeChunk_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res18);
      }
      if (plVar10 == plVar12) break;
      iVar2 = (int)plVar10[2];
      _Src = (void *)((longlong)*(int *)(lVar3 + 0x2b0) + *plVar10);
      if ((_Src == (void *)0x0) && (iVar2 != 0)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Ptr != nullptr || Count == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x9c1,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pTVar8 = (TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
          return pTVar8;
        }
      }
      iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,iVar2,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayNum,&__return_storage_ptr__->ArrayMax);
      if (iVar2 != 0) {
        memcpy((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 8,_Src,
               (longlong)iVar2 << 3);
      }
      plVar10 = plVar10 + 0x12;
    }
    pFVar11 = pFVar11 + 0x10;
    uVar7 = (ulonglong)local_res20;
  }
  return __return_storage_ptr__;
}

// GetNumMatchingEntities @ 1472235d0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

int __thiscall
FMassEntityQuery::GetNumMatchingEntities(FMassEntityQuery *this,FMassEntityManager *param_1)

{
  int iVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  undefined1 local_res8 [8];
  
  CacheArchetypes(this);
  iVar1 = (this->ValidArchetypes).ArrayNum;
  iVar5 = 0;
  pFVar3 = (this->ValidArchetypes).AllocatorInstance.Data;
  pFVar4 = pFVar3 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->ValidArchetypes).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FMassArchetypeHandle,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar3 == pFVar4) break;
    lVar2 = *(longlong *)pFVar3;
    if (lVar2 != 0) {
      iVar5 = iVar5 + (*(int *)(lVar2 + 0x1d8) - *(int *)(lVar2 + 0x204));
    }
    pFVar3 = pFVar3 + 0x10;
  }
  return iVar5;
}

// GetNumMatchingEntities @ 147223660

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

int __thiscall
FMassEntityQuery::GetNumMatchingEntities
          (FMassEntityQuery *this,TArrayView<FMassArchetypeEntityCollection_const_,int> *param_1)

{
  FMassArchetypeEntityCollection *pFVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  TReferenceControllerBase<1> *pTVar4;
  FMassArchetypeData *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  FMassArchetypeEntityCollection *pFVar10;
  
  pFVar10 = param_1->DataPtr;
  iVar8 = 0;
  pFVar1 = pFVar10 + param_1->ArrayNum;
  while( true ) {
    if (pFVar10 == pFVar1) {
      return iVar8;
    }
    pTVar4 = (pFVar10->Archetype).ArchetypeHandle.DataPtr.SharedReferenceCount.ReferenceController;
    pFVar5 = (pFVar10->Archetype).ArchetypeHandle.DataPtr.Object;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((pFVar5 == (FMassArchetypeData *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArchetypeHandle.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassRequirements.cpp"
                           ,0xef,L""), bVar7)) break;
    bVar7 = FMassFragmentRequirements::DoesArchetypeMatchRequirements
                      ((FMassFragmentRequirements *)this,&pFVar5->CompositionDescriptor);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    if (bVar7) {
      iVar3 = (pFVar10->Ranges).ArrayNum;
      pFVar9 = (pFVar10->Ranges).AllocatorInstance.Data;
      if ((iVar3 < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        iVar8 = (*pcVar6)();
        return iVar8;
      }
      pFVar2 = pFVar9 + (longlong)iVar3 * 0xc;
      for (; pFVar9 != pFVar2; pFVar9 = pFVar9 + 0xc) {
        iVar8 = iVar8 + *(int *)(pFVar9 + 8);
      }
    }
    pFVar10 = pFVar10 + 1;
  }
  pcVar6 = (code *)swi(3);
  iVar8 = (*pcVar6)();
  return iVar8;
}

// GetNumMatchingEntities @ 147223780

int __thiscall FMassEntityQuery::GetNumMatchingEntities(FMassEntityQuery *this)

{
  int iVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  undefined1 local_res8 [8];
  
  CacheArchetypes(this);
  iVar1 = (this->ValidArchetypes).ArrayNum;
  iVar5 = 0;
  pFVar3 = (this->ValidArchetypes).AllocatorInstance.Data;
  pFVar4 = pFVar3 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->ValidArchetypes).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FMassArchetypeHandle,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar3 == pFVar4) break;
    lVar2 = *(longlong *)pFVar3;
    if (lVar2 != 0) {
      iVar5 = iVar5 + (*(int *)(lVar2 + 0x1d8) - *(int *)(lVar2 + 0x204));
    }
    pFVar3 = pFVar3 + 0x10;
  }
  return iVar5;
}

// GetRequirementsMappingForArchetype @ 1472263e0

FMassQueryRequirementIndicesMapping * __thiscall
FMassEntityQuery::GetRequirementsMappingForArchetype
          (FMassEntityQuery *this,FMassArchetypeHandle *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FMassQueryRequirementIndicesMapping *pFVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`FMassEntityQuery::GetRequirementsMappingForArchetype'::__l2::
             _dynamic_atexit_destructor_for__FallbackEmptyMapping__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (*(short *)((longlong)&this->_padding_ + 2) != 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasIncrementalChanges() == false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityQuery.cpp"
                       ,0x306,
                       L"Fetching cached fragments mapping while the query\'s cached data is out of sync!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FMassQueryRequirementIndicesMapping *)(*pcVar2)();
      return pFVar5;
    }
  }
  pFVar1 = (this->ValidArchetypes).AllocatorInstance.Data;
  if (pFVar1 != pFVar1 + (longlong)(this->ValidArchetypes).ArrayNum * 0x10) {
    pFVar7 = pFVar1;
    do {
      if (*(FMassArchetypeData **)pFVar7 == (param_1->DataPtr).Object) {
        uVar6 = (uint)((longlong)pFVar7 - (longlong)pFVar1 >> 4);
        if (uVar6 != 0xffffffff) {
          uVar4 = 0;
          if ((int)uVar6 < (this->ArchetypeFragmentMapping).ArrayNum) {
            uVar4 = ~uVar6 >> 0x1f;
          }
          if (uVar4 == 0) {
            bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar3) {
              pcVar2 = (code *)swi(3);
              pFVar5 = (FMassQueryRequirementIndicesMapping *)(*pcVar2)();
              return pFVar5;
            }
          }
          pFVar5 = (FMassQueryRequirementIndicesMapping *)
                   ((this->ArchetypeFragmentMapping).AllocatorInstance.Data +
                   (longlong)(int)uVar6 * 0x140);
          goto LAB_147226485;
        }
        break;
      }
      pFVar7 = pFVar7 + 0x10;
    } while (pFVar7 != pFVar1 + (longlong)(this->ValidArchetypes).ArrayNum * 0x10);
  }
  pFVar5 = &FallbackEmptyMapping;
LAB_147226485:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->DataPtr).SharedReferenceCount.ReferenceController);
  return pFVar5;
}

// GroupBy @ 147229150

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FMassEntityQuery::GroupBy(FMassEntityQuery *this,FArchetypeGroupType param_1)

{
  int *piVar1;
  short *psVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  longlong lVar5;
  undefined ***pppuVar6;
  undefined1 auStack_68 [32];
  code *local_48;
  undefined **local_38;
  code *local_30;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  local_20 = (undefined ***)0x0;
  local_38 = &
             ___7__TFunction_OwnedObject_P6A_NUFArchetypeGroupID_Mass_UE__0_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  piVar1 = &(this->GroupSortingSteps).ArrayMax;
  local_30 = `FMassEntityQuery::GroupBy'::__l2::<lambda_1>::<lambda_invoker_cdecl>;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<bool_(__cdecl*)(UE::Mass::FArchetypeGroupID,UE::Mass::FArchetypeGroupID),bool,UE::Mass::FArchetypeGroupID,UE::Mass::FArchetypeGroupID>
             ::Call;
  iVar4 = (this->GroupSortingSteps).ArrayNum;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1040,&(this->GroupSortingSteps).AllocatorInstance,piVar1);
  }
  (this->GroupSortingSteps).ArrayNum = iVar4 + 1;
  pFVar3 = (this->GroupSortingSteps).AllocatorInstance.Data;
  lVar5 = (longlong)iVar4 * 0x40;
  *(uint *)(pFVar3 + lVar5) = param_1.Identifier;
  *(code **)(pFVar3 + lVar5 + 0x10) = local_48;
  *(undefined8 *)(pFVar3 + lVar5 + 0x38) = 0;
  if (local_48 != (code *)0x0) {
    pppuVar6 = &local_38;
    if (local_20 != (undefined ***)0x0) {
      pppuVar6 = local_20;
    }
    (*(code *)**pppuVar6)();
  }
  psVar2 = (short *)((longlong)&this->_padding_ + 2);
  *psVar2 = *psVar2 + 1;
  *(ushort *)&this->_padding_ = (ushort)this->_padding_ & 0xfffe;
  if (local_48 != (code *)0x0) {
    pppuVar6 = &local_38;
    if (local_20 != (undefined ***)0x0) {
      pppuVar6 = local_20;
    }
    (*(code *)(*pppuVar6)[2])();
  }
  return;
}

// GroupBy @ 147229270

void __thiscall
FMassEntityQuery::GroupBy
          (FMassEntityQuery *this,FArchetypeGroupType param_1,
          TFunction<bool___cdecl(UE::Mass::FArchetypeGroupID,UE::Mass::FArchetypeGroupID)> *param_2)

{
  int *piVar1;
  short *psVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  undefined8 *puVar7;
  
  iVar5 = (this->GroupSortingSteps).ArrayNum;
  piVar1 = &(this->GroupSortingSteps).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1040,&(this->GroupSortingSteps).AllocatorInstance,piVar1);
  }
  (this->GroupSortingSteps).ArrayNum = iVar5 + 1;
  pFVar3 = (this->GroupSortingSteps).AllocatorInstance.Data;
  lVar6 = (longlong)iVar5 * 0x40;
  *(uint *)(pFVar3 + lVar6) = param_1.Identifier;
  lVar4 = *(longlong *)param_2;
  *(longlong *)(pFVar3 + lVar6 + 0x10) = lVar4;
  *(undefined8 *)(pFVar3 + lVar6 + 0x38) = 0;
  if (lVar4 != 0) {
    puVar7 = (undefined8 *)&param_2->field_0x10;
    if (*(undefined8 **)&param_2->field_0x28 != (undefined8 *)0x0) {
      puVar7 = *(undefined8 **)&param_2->field_0x28;
    }
    (**(code **)*puVar7)();
  }
  psVar2 = (short *)((longlong)&this->_padding_ + 2);
  *psVar2 = *psVar2 + 1;
  *(ushort *)&this->_padding_ = (ushort)this->_padding_ & 0xfffe;
  return;
}

// HasMatchingEntities @ 14722ac80

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
FMassEntityQuery::HasMatchingEntities(FMassEntityQuery *this,FMassEntityManager *param_1)

{
  int iVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  CacheArchetypes(this);
  iVar1 = (this->ValidArchetypes).ArrayNum;
  pFVar3 = (this->ValidArchetypes).AllocatorInstance.Data;
  pFVar4 = pFVar3 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->ValidArchetypes).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FMassArchetypeHandle,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar3 == pFVar4) break;
    lVar2 = *(longlong *)pFVar3;
    if ((lVar2 != 0) && (0 < *(int *)(lVar2 + 0x1d8) - *(int *)(lVar2 + 0x204))) {
      return true;
    }
    pFVar3 = pFVar3 + 0x10;
  }
  return false;
}

// HasMatchingEntities @ 14722ad10

bool __thiscall FMassEntityQuery::HasMatchingEntities(FMassEntityQuery *this)

{
  int iVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  CacheArchetypes(this);
  iVar1 = (this->ValidArchetypes).ArrayNum;
  pFVar3 = (this->ValidArchetypes).AllocatorInstance.Data;
  pFVar4 = pFVar3 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->ValidArchetypes).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FMassArchetypeHandle,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar3 == pFVar4) break;
    lVar2 = *(longlong *)pFVar3;
    if ((lVar2 != 0) && (0 < *(int *)(lVar2 + 0x1d8) - *(int *)(lVar2 + 0x204))) {
      return true;
    }
    pFVar3 = pFVar3 + 0x10;
  }
  return false;
}

// ParallelForEachEntityChunk @ 14723b280

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
FMassEntityQuery::ParallelForEachEntityChunk
          (FMassEntityQuery *this,FMassEntityManager *param_1,FMassExecutionContext *param_2,
          TFunction<void___cdecl(FMassExecutionContext_&)> *param_3,EParallelForMode param_4)

{
  ParallelForEachEntityChunk(this,param_2,param_3,param_4 & ForceParallelExecution);
  return;
}

// ParallelForEachEntityChunk @ 14723b2a0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMassEntityQuery::ParallelForEachEntityChunk
          (FMassEntityQuery *this,FMassExecutionContext *param_1,
          TFunction<void___cdecl(FMassExecutionContext_&)> *param_2,EParallelExecutionFlags param_3)

{
  FScriptContainerElement *pFVar1;
  FMassArchetypeVersionedHandle *pFVar2;
  FMassArchetypeData *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  FMassCommandBuffer *this_00;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  FMassEntityManager *pFVar11;
  UObject *pUVar12;
  TSharedPtr<FMassCommandBuffer,1> *pTVar13;
  FSharedReferencer<1> FVar14;
  longlong lVar15;
  FScriptContainerElement *pFVar16;
  uint uVar17;
  longlong lVar18;
  ForAnyElementType FVar19;
  <lambda_1> local_1b8 [8];
  TArray<_public:_void___cdecl_FMassEntityQuery::ParallelForEachEntityChunk(FMassExecutionContext_&,TFunction<void___cdecl(FMassExecutionContext_&)>_const_&,FMassEntityQuery::EParallelExecutionFlags)_::_2_::FChunkJob,TSizedDefaultAllocator<32>_>
  local_1b0;
  undefined1 local_1a0 [8];
  ForAnyElementType local_198;
  undefined8 local_190;
  longlong local_188;
  FMassArchetypeHandle local_180;
  FMassArchetypeData *local_170;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  longlong local_158;
  uint uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  FMassArchetypeData *local_140;
  int iStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  FString local_128;
  FString local_118;
  FMassArchetypeEntityCollection local_108;
  TArrayView<_public:_void___cdecl_FMassEntityQuery::ParallelForEachEntityChunk(FMassExecutionContext_&,TFunction<void___cdecl(FMassExecutionContext_&)>_const_&,FMassEntityQuery::EParallelExecutionFlags)_::_108_::FTaskContext,int>
  local_e0;
  code *local_d0;
  FMassEntityQuery **local_c8;
  <lambda_2> local_b8;
  FMassEntityQuery *local_98;
  FMassExecutionContext *local_90;
  TFunction<void___cdecl(FMassExecutionContext_&)> *local_88;
  TArray<_public:_void___cdecl_FMassEntityQuery::ParallelForEachEntityChunk(FMassExecutionContext_&,TFunction<void___cdecl(FMassExecutionContext_&)>_const_&,FMassEntityQuery::EParallelExecutionFlags)_::_2_::FChunkJob,TSizedDefaultAllocator<32>_>
  *local_80;
  TSharedPtr<FMassCommandBuffer,1> local_78;
  FScopedEntityQueryContext local_68;
  
  if ((!UE::Mass::Tweakables::bAllowParallelExecution) && ((param_3 & Force) == Default)) {
LAB_14723b357:
    ForEachEntityChunk(this,param_1,param_2);
    return;
  }
  if ((this->GroupSortingSteps).ArrayNum != 0) {
    if (FVisualLogger::bIsRecording != 0) {
      pFVar11 = TSharedPtr<FMassEntityManager,1>::operator->
                          ((TSharedPtr<FMassEntityManager,1> *)&this->_padding_);
      pUVar12 = FWeakObjectPtr::Get(&(pFVar11->Owner).WeakPtr);
      FVisualLogger::CategorizedLogfImpl
                (pUVar12,(FName *)&LogMass.field_0x4,Warning,
                 L"Calling %hs is not supported for grouping queries yet. Calling regular ForEachEntityChunk instead."
                );
    }
    if (2 < (byte)LogMass._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMass);
    }
    goto LAB_14723b357;
  }
  if ((((FMassEntityManager *)this->_padding_ == (FMassEntityManager *)0x0) ||
      ((FMassEntityManager *)this->_padding_ != (param_1->EntityManager).Object)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("CachedEntityManager == ExecutionContext.GetSharedEntityManager() && CachedEntityManager.IsValid()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityQuery.cpp"
                         ,0x1bd,
                         L"FMassEntityQuery needs to be initialized with a valid EntityManager and the execution context has to come from the same manager"
                        ), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (((param_1->ExecutionType != this->ExpectedContextType) ||
      ((this->ExpectedContextType != Local && (this->bRegistered == 0)))) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ExecutionContext.GetExecutionType() == ExpectedContextType && (ExpectedContextType == EMassExecutionContextType::Local || bRegistered)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityQuery.cpp"
                         ,0x1c1,
                         L"ExecutionContextType mismatch, make sure all the queries run as part of processor execution are registered with some processor with a FMassEntityQuery::RegisterWithProcessor call"
                        ), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FScopedEntityQueryContext::FScopedEntityQueryContext(&local_68,this,param_1);
  if (local_68.bSubsystemRequirementsCached == false) goto LAB_14723bdaf;
  uVar17 = 0;
  local_1b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1b0.ArrayNum = 0;
  local_1b0.ArrayMax = 0;
  bVar6 = FMassFragmentRequirements::IsEmpty((FMassFragmentRequirements *)this);
  if (bVar6) {
    pFVar2 = &(param_1->EntityCollection).Archetype;
    if (((param_1->EntityCollection).Ranges.ArrayNum == 0) &&
       ((pFVar2->ArchetypeHandle).DataPtr.Object == (FMassArchetypeData *)0x0)) {
      local_1a0[0] = 0;
      bVar6 = `FMassEntityQuery::ParallelForEachEntityChunk'::__l55::<lambda_1>::operator()
                        (local_1a0);
      if (!bVar6) goto LAB_14723bb5a;
    }
    FVar14.ReferenceController =
         (param_1->EntityCollection).Archetype.ArchetypeHandle.DataPtr.SharedReferenceCount.
         ReferenceController;
    pFVar3 = (pFVar2->ArchetypeHandle).DataPtr.Object;
    if (FVar14.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FVar14.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FVar14.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((pFVar3 == (FMassArchetypeData *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArchetypeHandle.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Internal\\MassArchetypeData.h"
                           ,0x1ff,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar7 = (param_1->EntityCollection).Ranges.ArrayNum;
    pFVar16 = (param_1->EntityCollection).Ranges.AllocatorInstance.Data;
    if ((iVar7 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar1 = pFVar16 + (longlong)iVar7 * 0xc;
    for (; pFVar16 != pFVar1; pFVar16 = pFVar16 + 0xc) {
      uStack_15c = *(undefined4 *)(pFVar16 + 8);
      uStack_168 = 0xffffffff;
      uStack_164 = (undefined4)*(undefined8 *)pFVar16;
      uStack_160 = (undefined4)((ulonglong)*(undefined8 *)pFVar16 >> 0x20);
      local_170 = pFVar3;
      if (((local_1b0.AllocatorInstance.Data <= (FScriptContainerElement *)&local_170) &&
          ((FScriptContainerElement *)&local_170 <
           local_1b0.AllocatorInstance.Data + (longlong)local_1b0.ArrayMax * 0x18)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (local_1b0.ArrayNum == local_1b0.ArrayMax) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,&local_1b0.AllocatorInstance,&local_1b0.ArrayMax);
        local_1b0.ArrayNum = iVar7;
      }
      lVar15 = (longlong)local_1b0.ArrayNum;
      local_1b0.ArrayNum = local_1b0.ArrayNum + 1;
      *(FMassArchetypeData **)(local_1b0.AllocatorInstance.Data + lVar15 * 0x18) = local_170;
      *(longlong *)(local_1b0.AllocatorInstance.Data + lVar15 * 0x18 + 8) =
           CONCAT44(uStack_164,uStack_168);
      *(ulonglong *)(local_1b0.AllocatorInstance.Data + lVar15 * 0x18 + 0x10) =
           CONCAT44(uStack_15c,uStack_160);
    }
LAB_14723bb40:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar14.ReferenceController);
LAB_14723bb5a:
    iVar7 = local_1b0.ArrayNum;
    if (local_1b0.ArrayNum != 0) {
      if (this->bAllowParallelCommands == 0) {
        local_80 = &local_1b0;
        local_c8 = &local_98;
        local_d0 = UE::Core::Private::Function::
                   TFunctionRefCaller<`FMassEntityQuery::ParallelForEachEntityChunk'::__l114::<lambda_3>,void,int>
                   ::Call;
        local_98 = this;
        local_90 = param_1;
        local_88 = param_2;
        ParallelFor(local_1b0.ArrayNum,(TFunctionRef<void___cdecl(int)> *)&local_d0,
                    param_3 & AutoBalance);
      }
      else {
        local_198.Data = (FScriptContainerElement *)0x0;
        local_190 = 0;
        if (0 < local_1b0.ArrayNum) {
          iVar9 = ParallelForImpl::GetNumberOfThreadTasks
                            (local_1b0.ArrayNum,1,param_3 & AutoBalance);
          if (local_190 < 0) {
            DestructItems<_FMassEntityQuery::ParallelForEachEntityChunk_::__l108::FTaskContext,int>
                      ((FTaskContext *)local_198.Data,(int)local_190);
            if (local_190._4_4_ != 0) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,0,&local_198,0,(int *)((longlong)&local_190 + 4));
            }
          }
          else {
            DestructItems<_FMassEntityQuery::ParallelForEachEntityChunk_::__l108::FTaskContext,int>
                      ((FTaskContext *)local_198.Data,(int)local_190);
          }
          iVar10 = UE::Core::Private::
                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x10,8,iVar9,&local_198,(int *)&local_190,
                              (int *)((longlong)&local_190 + 4));
          DefaultConstructItems<_FMassEntityQuery::ParallelForEachEntityChunk_::__l108::FTaskContext,int>
                    (local_198.Data + (longlong)iVar10 * 0x10,iVar9);
          local_e0.ArrayNum = (int)local_190;
          local_e0.DataPtr = (FTaskContext *)local_198.Data;
          if (((int)local_190 < 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("InCount >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xeb,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          local_b8.Jobs = &local_1b0;
          local_b8.__this = this;
          local_b8.ExecutionContext = param_1;
          local_b8.ExecuteFunction = param_2;
          ParallelForImpl::
          ParallelForInternal<_FMassEntityQuery::ParallelForEachEntityChunk_::__l108::<lambda_2>,_ParallelForWithTaskContext<_FMassEntityQuery::ParallelForEachEntityChunk_::__l108::FTaskContext,TSizedDefaultAllocator<32>,_FMassEntityQuery::ParallelForEachEntityChunk_::__l108::<lambda_2>_>_::__l5::<lambda_1>,_FMassEntityQuery::ParallelForEachEntityChunk_::__l108::FTaskContext>
                    (L"ParallelFor Task",iVar7,1,&local_b8,local_1b8[0],param_3 & AutoBalance,
                     &local_e0);
        }
        iVar7 = (int)local_190;
        pFVar16 = local_198.Data + (longlong)(int)local_190 * 0x10;
        FVar19.Data = local_198.Data;
        while( true ) {
          if ((int)local_190 != iVar7) {
            local_1b8[0] = (<lambda_1>)0x0;
            `TCheckedPointerIterator<`FMassEntityQuery::ParallelForEachEntityChunk'::__l108::FTaskContext,int,0>
            ::operator!='::__l2::<lambda_1>::operator()(local_1b8);
          }
          if (FVar19.Data == pFVar16) break;
          this_00 = (param_1->DeferredCommandBuffer).Object;
          pTVar13 = `FMassEntityQuery::ParallelForEachEntityChunk'::__l108::FTaskContext::
                    GetCommandBuffer(FVar19.Data,&local_78);
          if ((pTVar13->Object == (FMassCommandBuffer *)0x0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x44d,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          FMassCommandBuffer::MoveAppend(this_00,pTVar13->Object);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_78.SharedReferenceCount.ReferenceController);
          FVar19.Data = FVar19.Data + 0x10;
        }
        DestructItems<_FMassEntityQuery::ParallelForEachEntityChunk_::__l108::FTaskContext,int>
                  ((FTaskContext *)local_198.Data,(int)local_190);
        if (local_198.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_198.Data);
        }
      }
    }
  }
  else {
    CacheArchetypes(this);
    pFVar2 = &(param_1->EntityCollection).Archetype;
    if (((param_1->EntityCollection).Ranges.ArrayNum == 0) &&
       ((pFVar2->ArchetypeHandle).DataPtr.Object == (FMassArchetypeData *)0x0)) {
      FMassExecutionContext::ApplyFragmentRequirements(param_1,this);
      if (0 < (this->ValidArchetypes).ArrayNum) {
        local_188 = 0;
        do {
          lVar15 = local_188;
          uVar8 = 0;
          if ((int)uVar17 < (this->ValidArchetypes).ArrayNum) {
            uVar8 = ~uVar17 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar16 = (this->ValidArchetypes).AllocatorInstance.Data + lVar15;
          if ((*(longlong *)pFVar16 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("ArchetypeHandle.IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Internal\\MassArchetypeData.h"
                                 ,0x1ff,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          lVar15 = *(longlong *)pFVar16;
          local_108.Ranges.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_108.Ranges.ArrayNum = 0;
          local_108.Ranges.ArrayMax = 0;
          local_108.Archetype.ArchetypeHandle.DataPtr.Object = *(FMassArchetypeData **)pFVar16;
          local_108.Archetype.ArchetypeHandle.DataPtr.SharedReferenceCount.ReferenceController =
               *(TReferenceControllerBase<1> **)(pFVar16 + 8);
          if (local_108.Archetype.ArchetypeHandle.DataPtr.SharedReferenceCount.ReferenceController
              != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_108.Archetype.ArchetypeHandle.DataPtr.SharedReferenceCount.ReferenceController)->
            SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_108.Archetype.ArchetypeHandle.DataPtr.SharedReferenceCount.
                       ReferenceController)->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_108.Archetype.HandleVersion = 0;
          if (local_108.Archetype.ArchetypeHandle.DataPtr.Object != (FMassArchetypeData *)0x0) {
            local_108.Archetype.HandleVersion =
                 (local_108.Archetype.ArchetypeHandle.DataPtr.Object)->EntityOrderVersion;
          }
          if ((*(longlong *)pFVar16 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("InArchetypeHandle.IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassArchetypeTypes.cpp"
                                 ,0xc9,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          FMassArchetypeEntityCollection::GatherChunksFromArchetype(&local_108);
          FVar19.Data = local_108.Ranges.AllocatorInstance.Data;
          lVar18 = (longlong)local_108.Ranges.ArrayNum;
          if ((local_108.Ranges.ArrayNum < 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("InCount >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xeb,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar16 = FVar19.Data + lVar18 * 0xc;
          for (; FVar19.Data != pFVar16; FVar19.Data = FVar19.Data + 0xc) {
            uStack_144 = *(undefined4 *)(FVar19.Data + 8);
            uStack_14c = (undefined4)*(undefined8 *)FVar19.Data;
            uStack_148 = (undefined4)((ulonglong)*(undefined8 *)FVar19.Data >> 0x20);
            local_158 = lVar15;
            uStack_150 = uVar17;
            if (((local_1b0.AllocatorInstance.Data <= (FScriptContainerElement *)&local_158) &&
                ((FScriptContainerElement *)&local_158 <
                 local_1b0.AllocatorInstance.Data + (longlong)local_1b0.ArrayMax * 0x18)) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            iVar7 = local_1b0.ArrayNum;
            if (local_1b0.ArrayNum == local_1b0.ArrayMax) {
              iVar7 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x818,&local_1b0.AllocatorInstance,&local_1b0.ArrayMax);
            }
            local_1b0.ArrayNum = iVar7 + 1;
            *(longlong *)(local_1b0.AllocatorInstance.Data + (longlong)iVar7 * 0x18) = local_158;
            *(longlong *)(local_1b0.AllocatorInstance.Data + (longlong)iVar7 * 0x18 + 8) =
                 CONCAT44(uStack_14c,uStack_150);
            *(ulonglong *)(local_1b0.AllocatorInstance.Data + (longlong)iVar7 * 0x18 + 0x10) =
                 CONCAT44(uStack_144,uStack_148);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_108.Archetype.ArchetypeHandle.DataPtr.SharedReferenceCount.
                     ReferenceController);
          if (local_108.Ranges.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_108.Ranges.AllocatorInstance.Data);
          }
          uVar17 = uVar17 + 1;
          local_188 = local_188 + 0x10;
        } while ((int)uVar17 < (this->ValidArchetypes).ArrayNum);
      }
      goto LAB_14723bb5a;
    }
    local_180.DataPtr.SharedReferenceCount.ReferenceController =
         (param_1->EntityCollection).Archetype.ArchetypeHandle.DataPtr.SharedReferenceCount.
         ReferenceController;
    pFVar3 = (pFVar2->ArchetypeHandle).DataPtr.Object;
    if (local_180.DataPtr.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_180.DataPtr.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_180.DataPtr.SharedReferenceCount.ReferenceController)->SharedReferenceCount
           + 1);
      UNLOCK();
    }
    local_180.DataPtr.Object = pFVar3;
    iVar7 = TArray<FMassArchetypeHandle,TSizedDefaultAllocator<32>_>::Find
                      (&this->ValidArchetypes,&local_180);
    if (iVar7 != -1) {
      FMassExecutionContext::ApplyFragmentRequirements(param_1,this);
      if ((pFVar3 == (FMassArchetypeData *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArchetypeHandle.IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Internal\\MassArchetypeData.h"
                             ,0x1ff,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar9 = (param_1->EntityCollection).Ranges.ArrayNum;
      pFVar16 = (param_1->EntityCollection).Ranges.AllocatorInstance.Data;
      if ((iVar9 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar1 = pFVar16 + (longlong)iVar9 * 0xc;
      FVar14.ReferenceController = local_180.DataPtr.SharedReferenceCount.ReferenceController;
      for (; local_180.DataPtr.SharedReferenceCount.ReferenceController = FVar14.ReferenceController
          , pFVar16 != pFVar1; pFVar16 = pFVar16 + 0xc) {
        uStack_12c = *(undefined4 *)(pFVar16 + 8);
        uStack_134 = (undefined4)*(undefined8 *)pFVar16;
        uStack_130 = (undefined4)((ulonglong)*(undefined8 *)pFVar16 >> 0x20);
        local_140 = pFVar3;
        iStack_138 = iVar7;
        if (((local_1b0.AllocatorInstance.Data <= (FScriptContainerElement *)&local_140) &&
            ((FScriptContainerElement *)&local_140 <
             local_1b0.AllocatorInstance.Data + (longlong)local_1b0.ArrayMax * 0x18)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar9 = local_1b0.ArrayNum;
        if (local_1b0.ArrayNum == local_1b0.ArrayMax) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,&local_1b0.AllocatorInstance,&local_1b0.ArrayMax);
        }
        local_1b0.ArrayNum = iVar9 + 1;
        *(FMassArchetypeData **)(local_1b0.AllocatorInstance.Data + (longlong)iVar9 * 0x18) =
             local_140;
        *(longlong *)(local_1b0.AllocatorInstance.Data + (longlong)iVar9 * 0x18 + 8) =
             CONCAT44(uStack_134,iStack_138);
        *(ulonglong *)(local_1b0.AllocatorInstance.Data + (longlong)iVar9 * 0x18 + 0x10) =
             CONCAT44(uStack_12c,uStack_130);
        FVar14.ReferenceController = local_180.DataPtr.SharedReferenceCount.ReferenceController;
      }
      goto LAB_14723bb40;
    }
    if (FVisualLogger::bIsRecording != 0) {
      pTVar4 = (param_1->EntityCollection).Archetype.ArchetypeHandle.DataPtr.SharedReferenceCount.
               ReferenceController;
      pFVar3 = (pFVar2->ArchetypeHandle).DataPtr.Object;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (pFVar3 == (FMassArchetypeData *)0x0) {
        ::FString::FString(&local_128,L"Invalid");
      }
      else {
        FMassDebugger::GetArchetypeRequirementCompatibilityDescription
                  (&local_128,(FMassFragmentRequirements *)this,&pFVar3->CompositionDescriptor);
      }
      pFVar11 = TSharedPtr<FMassEntityManager,1>::operator->
                          ((TSharedPtr<FMassEntityManager,1> *)&this->_padding_);
      pUVar12 = FWeakObjectPtr::Get(&(pFVar11->Owner).WeakPtr);
      FVisualLogger::CategorizedLogfImpl
                (pUVar12,(FName *)&LogMass.field_0x4,Verbose,
                 L"Attempted to execute FMassEntityQuery with an incompatible Archetype: %s. Note that this is fine for observers."
                );
      if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_128.Data.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    }
    if (5 < (byte)LogMass._0_1_) {
      pFVar3 = (param_1->EntityCollection).Archetype.ArchetypeHandle.DataPtr.Object;
      pTVar4 = (param_1->EntityCollection).Archetype.ArchetypeHandle.DataPtr.SharedReferenceCount.
               ReferenceController;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (pFVar3 == (FMassArchetypeData *)0x0) {
        ::FString::FString(&local_118,L"Invalid");
      }
      else {
        FMassDebugger::GetArchetypeRequirementCompatibilityDescription
                  (&local_118,(FMassFragmentRequirements *)this,&pFVar3->CompositionDescriptor);
      }
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMass);
      if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.Data.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_180.DataPtr.SharedReferenceCount.ReferenceController);
  }
  if (local_1b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b0.AllocatorInstance.Data);
  }
LAB_14723bdaf:
  FScopedEntityQueryContext::~FScopedEntityQueryContext(&local_68);
  return;
}

// ParallelForEachEntityChunkInCollection @ 14723bde0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
FMassEntityQuery::ParallelForEachEntityChunkInCollection
          (FMassEntityQuery *this,TArrayView<FMassArchetypeEntityCollection_const_,int> *param_1,
          FMassEntityManager *param_2,FMassExecutionContext *param_3,
          TFunction<void___cdecl(FMassExecutionContext_&)> *param_4,EParallelForMode param_5)

{
  FMassArchetypeEntityCollection *pFVar1;
  FMassArchetypeEntityCollection *pFVar2;
  TArrayView<std::nullptr_t,int> local_68;
  code *local_58;
  FMassEntityQuery **local_50;
  FMassArchetypeEntityCollection *local_48;
  undefined8 uStack_40;
  FMassEntityQuery *local_38;
  FMassExecutionContext *local_30;
  TFunction<void___cdecl(FMassExecutionContext_&)> *local_28;
  FMassArchetypeEntityCollection **local_20;
  EParallelForMode local_18;
  
  local_48 = param_1->DataPtr;
  uStack_40 = *(undefined8 *)&param_1->ArrayNum;
  local_18 = param_5 & ForceParallelExecution;
  if ((!UE::Mass::Tweakables::bAllowParallelExecution) && ((char)local_18 == '\0')) {
    pFVar2 = param_1->DataPtr;
    pFVar1 = pFVar2 + (int)*(undefined8 *)&param_1->ArrayNum;
    for (; pFVar2 != pFVar1; pFVar2 = pFVar2 + 1) {
      ForEachEntityChunk(this,pFVar2,param_3,param_4);
    }
    return;
  }
  local_28 = param_4;
  local_20 = &local_48;
  local_58 = UE::Core::Private::Function::
             TFunctionRefCaller<`FMassEntityQuery::ParallelForEachEntityChunkInCollection'::__l2::<lambda_1>,void,int>
             ::Call;
  local_50 = &local_38;
  local_68.DataPtr = (void **)0x0;
  local_68.ArrayNum = 0;
  local_38 = this;
  local_30 = param_3;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",(int)uStack_40,1,(TFunctionRef<void___cdecl(int)> *)&local_58,
             (<lambda_1>)(undefined1)param_5,None,&local_68);
  return;
}

// ParallelForEachEntityChunkInCollection @ 14723bf20

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
FMassEntityQuery::ParallelForEachEntityChunkInCollection
          (FMassEntityQuery *this,TArrayView<FMassArchetypeEntityCollection_const_,int> *param_1,
          FMassExecutionContext *param_2,TFunction<void___cdecl(FMassExecutionContext_&)> *param_3,
          EParallelExecutionFlags param_4)

{
  FMassArchetypeEntityCollection *pFVar1;
  FMassArchetypeEntityCollection *pFVar2;
  <lambda_1> local_58;
  TArrayView<std::nullptr_t,int> local_50;
  code *local_40;
  FMassEntityQuery **local_38;
  FMassEntityQuery *local_30;
  FMassExecutionContext *local_28;
  TFunction<void___cdecl(FMassExecutionContext_&)> *local_20;
  TArrayView<FMassArchetypeEntityCollection_const_,int> *local_18;
  EParallelExecutionFlags local_10;
  
  if ((UE::Mass::Tweakables::bAllowParallelExecution) || ((param_4 & Force) != Default)) {
    local_10 = param_4;
    local_40 = UE::Core::Private::Function::
               TFunctionRefCaller<`FMassEntityQuery::ParallelForEachEntityChunkInCollection'::__l2::<lambda_1>,void,int>
               ::Call;
    local_38 = &local_30;
    local_50.DataPtr = (void **)0x0;
    local_50.ArrayNum = 0;
    local_30 = this;
    local_28 = param_2;
    local_20 = param_3;
    local_18 = param_1;
    ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
              (L"ParallelFor Task",param_1->ArrayNum,1,(TFunctionRef<void___cdecl(int)> *)&local_40,
               local_58,None,&local_50);
  }
  else {
    pFVar2 = param_1->DataPtr;
    pFVar1 = pFVar2 + (int)*(undefined8 *)&param_1->ArrayNum;
    for (; pFVar2 != pFVar1; pFVar2 = pFVar2 + 1) {
      ForEachEntityChunk(this,pFVar2,param_2,param_3);
    }
  }
  return;
}

// RegisterWithProcessor @ 147240950

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMassEntityQuery::RegisterWithProcessor(FMassEntityQuery *this,UMassProcessor *param_1)

{
  wchar_t wVar1;
  longlong lVar2;
  code *pcVar3;
  wchar_t *pwVar4;
  bool bVar5;
  undefined8 *puVar6;
  longlong lVar7;
  wchar_t *pwVar8;
  int iVar9;
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  FMassEntityQuery *local_68;
  void *local_60 [2];
  void *local_50 [2];
  void *local_40 [2];
  undefined8 *local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_98;
  if (param_1 == (UMassProcessor *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  if (-1 < MassChannel->Enabled) {
    UE::Trace::Private::FLogScope::Enter<FMassTraceQueryRegisteredToProcessorFields>
              ((TLogScope<1> *)&local_30);
    *local_30 = this;
    local_30[1] = param_1;
    puVar6 = (undefined8 *)(**(code **)(param_1->_padding_ + 0x2c0))(param_1,local_60);
    if (*(int *)(puVar6 + 1) == 0) {
      pwVar8 = L"";
    }
    else {
      pwVar8 = (wchar_t *)*puVar6;
    }
    iVar9 = 0;
    wVar1 = *pwVar8;
    pwVar4 = pwVar8;
    while (wVar1 != L'\0') {
      pwVar4 = pwVar4 + 1;
      iVar9 = iVar9 + 1;
      wVar1 = *pwVar4;
    }
    UE::Trace::Private::Field_WriteStringWide(2,pwVar8,iVar9);
    lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar2 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar2 = *(longlong *)(lVar2 + 0x20);
    **(undefined1 **)(lVar2 + 0x20) = 6;
    lVar7 = *(longlong *)(lVar2 + 0x20) + 1;
    *(longlong *)(lVar2 + 0x20) = lVar7;
    if (lVar2 != local_28) {
      *(longlong *)(lVar2 + 0x28) = lVar7;
    }
    *(undefined8 *)(local_28 + 0x28) = *(undefined8 *)(local_28 + 0x20);
    if (local_60[0] != (void *)0x0) {
      FMemory::Free(local_60[0]);
    }
  }
  this->ExpectedContextType = Processor;
  if ((this < param_1) ||
     (iVar9 = (int)*(short *)(param_1->_padding_ + 0x5c),
     (FMassEntityQuery *)
     ((longlong)&param_1->_padding_ +
     (longlong)(*(int *)(param_1->_padding_ + 0x58) + -1 + iVar9 & -iVar9)) < this + 1)) {
    puVar6 = (undefined8 *)(**(code **)(param_1->_padding_ + 0x2c0))(param_1,local_50);
    if (*(int *)(puVar6 + 1) == 0) {
      local_78 = L"";
    }
    else {
      local_78 = (wchar_t *)*puVar6;
    }
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassProcessor.cpp"
                       ,0x15f,
                       L"Registering entity query for %s while the query is not given processor\'s member variable. Skipping."
                      );
    if (local_50[0] != (void *)0x0) {
      FMemory::Free(local_50[0]);
    }
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (1 < (byte)LogMass._0_1_) {
      (**(code **)(param_1->_padding_ + 0x2c0))(param_1,local_40);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMass);
      if (local_40[0] != (void *)0x0) {
        FMemory::Free(local_40[0]);
      }
    }
  }
  else {
    local_68 = this;
    TArray<FMassEntityQuery_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FMassEntityQuery_*>
              (&param_1->OwnedQueries,&local_68);
  }
  this->bRegistered = '\x01';
  return;
}

// ResetGrouping @ 147248e60

void __thiscall FMassEntityQuery::ResetGrouping(FMassEntityQuery *this)

{
  int *piVar1;
  short *psVar2;
  int iVar3;
  FArchetypeGroupingStep *pFVar4;
  
  piVar1 = &(this->GroupSortingSteps).ArrayMax;
  pFVar4 = (FArchetypeGroupingStep *)(this->GroupSortingSteps).AllocatorInstance.Data;
  iVar3 = (this->GroupSortingSteps).ArrayNum;
  if ((this->GroupSortingSteps).ArrayMax < 0) {
    DestructItems<FMassEntityQuery::FArchetypeGroupingStep,int>(pFVar4,iVar3);
    (this->GroupSortingSteps).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x40,0x10,0,&(this->GroupSortingSteps).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FMassEntityQuery::FArchetypeGroupingStep,int>(pFVar4,iVar3);
    (this->GroupSortingSteps).ArrayNum = 0;
  }
  psVar2 = (short *)((longlong)&this->_padding_ + 2);
  *psVar2 = *psVar2 + 1;
  *(ushort *)&this->_padding_ = (ushort)this->_padding_ & 0xfffe;
  return;
}

// SortArchetypes @ 14724f4d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall FMassEntityQuery::SortArchetypes(FMassEntityQuery *this,int param_1)

{
  undefined1 *puVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  FScriptContainerElement *pFVar12;
  longlong *plVar13;
  uint uVar14;
  int iVar15;
  FIdentityFunctor FVar16;
  TArray<TArray<UE::Mass::FArchetypeGroupID,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  *this_00;
  FScriptContainerElement *pFVar17;
  undefined1 *puVar18;
  int *piVar19;
  int *piVar20;
  FScriptContainerElement *pFVar21;
  longlong lVar22;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar23;
  uint uVar24;
  longlong lVar25;
  FArchetypeGroups *pFVar26;
  undefined1 auStackY_168 [32];
  FIdentityFunctor local_118 [4];
  uint local_114;
  ForAnyElementType local_110;
  undefined8 local_108;
  undefined4 local_100;
  uint local_fc;
  longlong local_f8;
  uint local_f0;
  uint local_ec;
  longlong local_e8;
  TArray<TArray<UE::Mass::FArchetypeGroupID,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  *local_e0;
  int local_d8;
  uint uStack_d4;
  undefined4 local_d0;
  int iStack_cc;
  FMassEntityQuery *local_c8;
  TArray<int,TSizedDefaultAllocator<32>_> *local_c0;
  int *local_b8;
  undefined8 local_b0;
  FScriptContainerElement *local_a8;
  int local_a0;
  undefined4 local_98;
  int iStack_94;
  longlong local_90;
  uint local_88 [2];
  FScriptContainerElement **local_80;
  longlong local_78;
  longlong local_68 [3];
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_168;
  local_114 = param_1;
  local_c8 = this;
  if ((this->GroupSortingSteps).ArrayNum == 0) {
    BuildOrderedArchetypeIndices(this,param_1);
  }
  else {
    if ((this->_padding_ == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("CachedEntityManager",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityQuery.cpp"
                           ,0x2ba,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar6 = (this->ValidArchetypes).ArrayNum;
    this_00 = &this->CachedGroupIDs;
    iVar7 = (this->CachedGroupIDs).ArrayNum;
    piVar19 = &(this->CachedGroupIDs).ArrayNum;
    local_e0 = this_00;
    local_b8 = piVar19;
    if (iVar7 < (int)uVar6) {
      iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,uVar6 - iVar7,&this_00->AllocatorInstance,piVar19,
                         &(this->CachedGroupIDs).ArrayMax);
      memset((this_00->AllocatorInstance).Data + (longlong)iVar5 * 0x10,0,
             (longlong)(int)(uVar6 - iVar7) << 4);
    }
    else {
      if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
      }
      if ((int)uVar6 < iVar7) {
        uVar14 = iVar7 - uVar6;
        if (((int)(uVar14 | uVar6) < 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        param_1 = local_114;
        if (uVar14 != 0) {
          TArray<TArray<UE::Mass::FArchetypeGroupID,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
          ::RemoveAtImpl(this_00,uVar6,uVar14);
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,&this_00->AllocatorInstance,*piVar19,&(this->CachedGroupIDs).ArrayMax);
          param_1 = local_114;
        }
      }
    }
    pTVar23 = &this->OrderedArchetypeIndices;
    local_c0 = pTVar23;
    TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (pTVar23,(this->ValidArchetypes).ArrayNum,Default);
    piVar20 = piVar19;
    if (param_1 < (this->ValidArchetypes).ArrayNum) {
      lVar25 = (longlong)param_1;
      lVar22 = lVar25 << 4;
      do {
        uVar14 = (uint)~param_1 >> 0x1f;
        uVar6 = 0;
        if (param_1 < (this->OrderedArchetypeIndices).ArrayNum) {
          uVar6 = uVar14;
        }
        local_f8 = lVar22;
        local_e8 = lVar25;
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        *(int *)((this->OrderedArchetypeIndices).AllocatorInstance.Data + lVar25 * 4) = param_1;
        uVar6 = 0;
        if (param_1 < *piVar19) {
          uVar6 = uVar14;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar6 = (this->GroupSortingSteps).ArrayNum;
        pFVar17 = (this_00->AllocatorInstance).Data + lVar22;
        if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
        }
        pFVar2 = pFVar17 + 0xc;
        if (*(int *)(pFVar17 + 0xc) < (int)uVar6) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,uVar6,(ForAnyElementType *)pFVar17,*(int *)&pFVar17[8].field_0x0,
                     (int *)pFVar2);
        }
        if ((this->_padding_ == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar6 = 0;
        if (param_1 < (this->ValidArchetypes).ArrayNum) {
          uVar6 = uVar14;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        lVar22 = *(longlong *)((this->ValidArchetypes).AllocatorInstance.Data + lVar22);
        if (lVar22 == 0) {
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d4c)
               < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
            atexit(`FMassEntityManager::GetGroupsForArchetype'::__l5::
                   _dynamic_atexit_destructor_for__DummyGroups__);
            _Init_thread_footer(&::_TSS0);
            pFVar26 = &DummyGroups;
          }
          else {
            pFVar26 = &DummyGroups;
          }
        }
        else {
          pFVar26 = (FArchetypeGroups *)(lVar22 + 0x270);
        }
        local_fc = (this->GroupSortingSteps).ArrayNum;
        uVar11 = (ulonglong)(int)local_fc;
        pFVar12 = (this->GroupSortingSteps).AllocatorInstance.Data;
        pFVar21 = pFVar12 + uVar11 * 0x40;
        while( true ) {
          if ((local_c8->GroupSortingSteps).ArrayNum != (int)uVar11) {
            local_118[0] = (FIdentityFunctor)0x0;
            `TCheckedPointerIterator<FMassEntityQuery::FArchetypeGroupingStep,int,0>::operator!='::
            __l2::<lambda_1>::operator()(local_118);
          }
          if (pFVar12 == pFVar21) break;
          uVar6 = *(uint *)pFVar12;
          lVar22 = (longlong)(int)uVar6;
          if (((int)uVar6 < 0) || (*(int *)&(pFVar26->IDContainer).field_0x28 <= (int)uVar6)) {
LAB_14724f8df:
            local_100 = 0xffffffff;
          }
          else {
            if ((*(int *)&(pFVar26->IDContainer).field_0x28 <= (int)uVar6) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5c6,L""), bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            puVar1 = *(undefined1 **)&(pFVar26->IDContainer).field_0x20;
            puVar18 = &(pFVar26->IDContainer).field_0x10;
            if (puVar1 != (undefined1 *)0x0) {
              puVar18 = puVar1;
            }
            uVar14 = uVar6 & 0x1f;
            if ((int)uVar6 < 0) {
              uVar6 = uVar6 + 0x1f;
            }
            if ((*(uint *)(puVar18 + (longlong)((int)uVar6 >> 5) * 4) >> uVar14 & 1) == 0)
            goto LAB_14724f8df;
            local_100 = *(undefined4 *)(*(longlong *)&pFVar26->IDContainer + lVar22 * 8);
          }
          if (((*(undefined4 **)&pFVar17->field_0x0 <= &local_100) &&
              (&local_100 < *(undefined4 **)&pFVar17->field_0x0 + *(int *)pFVar2)) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          iVar7 = *(int *)&pFVar17[8].field_0x0;
          if (iVar7 == *(int *)pFVar2) {
            iVar7 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,(ForAnyElementType *)pFVar17,(int *)pFVar2);
          }
          pFVar12 = pFVar12 + 0x40;
          *(int *)&pFVar17[8].field_0x0 = iVar7 + 1;
          *(undefined4 *)(*(longlong *)&pFVar17->field_0x0 + (longlong)iVar7 * 4) = local_100;
          uVar11 = (ulonglong)local_fc;
        }
        param_1 = local_114 + 1;
        lVar25 = local_e8 + 1;
        lVar22 = local_f8 + 0x10;
        piVar19 = &local_e0->ArrayNum;
        this_00 = local_e0;
        piVar20 = local_b8;
        this = local_c8;
        pTVar23 = local_c0;
        local_114 = param_1;
        local_f8 = lVar22;
        local_e8 = lVar25;
      } while (param_1 < (local_c8->ValidArchetypes).ArrayNum);
    }
    local_a8 = (this_00->AllocatorInstance).Data;
    iVar7 = *piVar20;
    if ((iVar7 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iStack_94 = (this->OrderedArchetypeIndices).ArrayNum;
    local_110.Data = (FScriptContainerElement *)0x0;
    local_108 = 0;
    local_98 = 0;
    local_a0 = iVar7;
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,&local_110,(int *)((longlong)&local_108 + 4));
    local_f0 = 0;
    local_ec = 0;
    local_108 = CONCAT44(local_108._4_4_,iVar7 + 1);
    *(ulonglong *)(local_110.Data + (longlong)iVar7 * 8) = CONCAT44(iStack_94,local_98);
    iVar7 = (this->GroupSortingSteps).ArrayNum;
    uVar6 = (this->OrderedArchetypeIndices).ArrayNum;
    if (0 < iVar7) {
      piVar19 = (int *)0x0;
      local_b8 = (int *)0x0;
      local_e8 = 0;
      local_f8 = 0;
      FVar16 = local_118[0];
      do {
        if ((int)uVar6 < 2) break;
        local_fc = iVar7 - 1;
        local_90 = (longlong)(int)local_108;
        local_114 = 0;
        lVar22 = local_e8;
        uVar14 = local_f0;
        if ((longlong)piVar19 < local_90) {
          uVar6 = ~local_f0 >> 0x1f;
          local_e0 = (TArray<TArray<UE::Mass::FArchetypeGroupID,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                      *)CONCAT44(local_e0._4_4_,uVar6);
          do {
            uVar8 = 0;
            if ((int)local_ec < (int)local_108) {
              uVar8 = ~local_ec >> 0x1f;
            }
            if ((uVar8 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            uVar11 = *(ulonglong *)(local_110.Data + (longlong)piVar19 * 8);
            uVar24 = (uint)uVar11;
            iVar7 = (int)(uVar11 >> 0x20) - uVar24;
            uVar8 = 0;
            if ((int)uVar24 < pTVar23->ArrayNum) {
              uVar8 = ~uVar24 >> 0x1f;
            }
            local_b0 = uVar11;
            if ((uVar8 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pFVar17 = (pTVar23->AllocatorInstance).Data;
            if ((iVar7 < 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("ArrayNum >= 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0xfe,L""), bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            uVar8 = 0;
            if ((int)uVar14 < (local_c8->GroupSortingSteps).ArrayNum) {
              uVar8 = uVar6;
            }
            if ((uVar8 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pFVar2 = (local_c8->GroupSortingSteps).AllocatorInstance.Data;
            local_80 = &local_a8;
            local_78 = *(longlong *)(pFVar2 + local_f8 + 0x10);
            local_50 = (longlong *)0x0;
            local_88[0] = uVar14;
            if (local_78 != 0) {
              pFVar12 = pFVar2 + local_f8 + 0x20;
              if (*(FScriptContainerElement **)(pFVar2 + local_f8 + 0x38) !=
                  (FScriptContainerElement *)0x0) {
                pFVar12 = *(FScriptContainerElement **)(pFVar2 + local_f8 + 0x38);
              }
              (*(code *)**(undefined8 **)pFVar12)(pFVar12,local_68);
            }
            AlgoImpl::
            IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,_FMassEntityQuery::SortArchetypes_::__l22::<lambda_1>_>_>
                      ((int *)(pFVar17 + (longlong)(int)uVar24 * 4),iVar7,FVar16,
                       (<lambda_1> *)local_88);
            if (local_78 != 0) {
              plVar13 = local_68;
              if (local_50 != (longlong *)0x0) {
                plVar13 = local_50;
              }
              (**(code **)(*plVar13 + 0x10))();
            }
            pTVar23 = local_c0;
            if (uVar14 != local_fc) {
              uVar8 = 0;
              if ((int)uVar24 < local_c0->ArrayNum) {
                uVar8 = ~uVar24 >> 0x1f;
              }
              if ((uVar8 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              uVar8 = *(uint *)((pTVar23->AllocatorInstance).Data + (longlong)(int)uVar24 * 4);
              uVar9 = 0;
              if ((int)uVar8 < local_a0) {
                uVar9 = ~uVar8 >> 0x1f;
              }
              if ((uVar9 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                     ,0x14f,
                                     L"Array index out of bounds: %lld from an array of size %lld"),
                 bVar4)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              pFVar17 = local_a8 + (longlong)(int)uVar8 * 0x10;
              uVar8 = 0;
              if ((int)uVar14 < *(int *)(pFVar17 + 8)) {
                uVar8 = uVar6;
              }
              if ((uVar8 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              uVar24 = uVar24 + 1;
              iVar5 = local_b0._4_4_;
              iVar7 = *(int *)(*(longlong *)pFVar17 + lVar22);
              if ((int)uVar24 < local_b0._4_4_) {
                lVar22 = (longlong)(int)uVar24 * 4;
                do {
                  uVar6 = 0;
                  if ((int)uVar24 < pTVar23->ArrayNum) {
                    uVar6 = ~uVar24 >> 0x1f;
                  }
                  if ((uVar6 == 0) &&
                     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar4)) {
                    pcVar3 = (code *)swi(3);
                    (*pcVar3)();
                    return;
                  }
                  uVar6 = *(uint *)((pTVar23->AllocatorInstance).Data + lVar22);
                  uVar14 = 0;
                  if ((int)uVar6 < local_a0) {
                    uVar14 = ~uVar6 >> 0x1f;
                  }
                  if ((uVar14 == 0) &&
                     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                         ,0x14f,
                                         L"Array index out of bounds: %lld from an array of size %lld"
                                        ), bVar4)) {
                    pcVar3 = (code *)swi(3);
                    (*pcVar3)();
                    return;
                  }
                  pFVar17 = local_a8 + (longlong)(int)uVar6 * 0x10;
                  iVar10 = 0;
                  if ((int)local_f0 < *(int *)(pFVar17 + 8)) {
                    iVar10 = (uint)local_e0;
                  }
                  if ((iVar10 == 0) &&
                     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar4)) {
                    pcVar3 = (code *)swi(3);
                    (*pcVar3)();
                    return;
                  }
                  iVar10 = *(int *)(local_e8 + *(longlong *)pFVar17);
                  uVar6 = local_114;
                  if (iVar10 != iVar7) {
                    iVar15 = (int)uVar11;
                    local_d8 = iVar15;
                    uStack_d4 = uVar24;
                    if (((local_110.Data <= (FScriptContainerElement *)&local_d8) &&
                        ((FScriptContainerElement *)&local_d8 <
                         local_110.Data + (longlong)local_108._4_4_ * 8)) &&
                       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x7a5,
                                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                          ), bVar4)) {
                      pcVar3 = (code *)swi(3);
                      (*pcVar3)();
                      return;
                    }
                    iVar7 = (int)local_108;
                    if ((int)local_108 == local_108._4_4_) {
                      iVar7 = UE::Core::Private::
                              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                        (0x408,&local_110,(int *)((longlong)&local_108 + 4));
                    }
                    local_108 = CONCAT44(local_108._4_4_,iVar7 + 1);
                    *(ulonglong *)(local_110.Data + (longlong)iVar7 * 8) =
                         CONCAT44(uStack_d4,local_d8);
                    uVar11 = (ulonglong)uVar24;
                    iVar7 = iVar10;
                    uVar6 = uVar24 - iVar15;
                    if ((int)(uVar24 - iVar15) < (int)local_114) {
                      uVar6 = local_114;
                    }
                  }
                  local_114 = uVar6;
                  uVar24 = uVar24 + 1;
                  lVar22 = lVar22 + 4;
                  pTVar23 = local_c0;
                } while ((int)uVar24 < iVar5);
                lVar22 = local_e8;
                FVar16 = local_118[0];
                uVar6 = (uint)local_e0;
              }
              local_d0 = (undefined4)uVar11;
              iStack_cc = local_b0._4_4_;
              if (((local_110.Data <= (FScriptContainerElement *)&local_d0) &&
                  ((FScriptContainerElement *)&local_d0 <
                   local_110.Data + (longlong)local_108._4_4_ * 8)) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar4)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              iVar7 = (int)local_108;
              if ((int)local_108 == local_108._4_4_) {
                iVar7 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x408,&local_110,(int *)((longlong)&local_108 + 4));
              }
              local_108 = CONCAT44(local_108._4_4_,iVar7 + 1);
              *(ulonglong *)(local_110.Data + (longlong)iVar7 * 8) = CONCAT44(iStack_cc,local_d0);
              uVar14 = local_f0;
            }
            local_ec = local_ec + 1;
            piVar19 = (int *)((longlong)local_b8 + 1);
            pTVar23 = local_c0;
            local_b8 = piVar19;
          } while ((longlong)piVar19 < local_90);
          uVar6 = local_114;
          if ((int)local_114 < 1) goto LAB_147250056;
        }
        else {
LAB_147250056:
          uVar6 = local_114;
          if ((uVar14 != local_fc) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("MaxRangeSize >= 1 || bLastIteration",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityQuery.cpp"
                                 ,0x2fe,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        local_f0 = uVar14 + 1;
        local_f8 = local_f8 + 0x40;
        local_e8 = lVar22 + 4;
        iVar7 = (local_c8->GroupSortingSteps).ArrayNum;
        pTVar23 = local_c0;
      } while ((int)local_f0 < iVar7);
    }
    if (local_110.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_110.Data);
    }
  }
  return;
}

// operator() @ 150505150

bool __thiscall `FMassEntityQuery::ForEachEntityChunk'::__l27::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3093471691255316731>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3093471691255316731>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150505350

bool __thiscall
`FMassEntityQuery::ParallelForEachEntityChunk'::__l55::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3093471691255316950>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3093471691255316950>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

