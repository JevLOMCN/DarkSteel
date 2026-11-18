// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 3

// FMassEntityQuery @ 1470f48f0

FMassEntityQuery * __thiscall FMassEntityQuery::FMassEntityQuery(FMassEntityQuery *this)

{
  byte bVar1;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x80;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x80;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x80;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x80;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x80;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x80;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x80;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x80;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x80;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x80;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x80;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x80;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x80;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x80;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x80;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x80;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x80;
  *(ushort *)&this->_padding_ = (ushort)this->_padding_ & 0xffe0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined2 *)((longlong)&this->_padding_ + 2) = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x80;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x80;
  *(undefined1 *)&this->_padding_ = 0;
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
  this->bRegistered = '\0';
  (this->ArchetypeFragmentMapping).ArrayNum = 0;
  (this->ArchetypeFragmentMapping).ArrayMax = 0;
  this->bAllowParallelCommands = '\x01';
  this->bRequiresMutatingWorldAccess = '\0';
  (this->GroupSortingSteps).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GroupSortingSteps).ArrayNum = 0;
  (this->GroupSortingSteps).ArrayMax = 0;
  (this->CachedGroupIDs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedGroupIDs).ArrayNum = 0;
  (this->CachedGroupIDs).ArrayMax = 0;
  this->ExpectedContextType = Local;
  return this;
}

// ~FMassEntityQuery @ 1470f84b0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall FMassEntityQuery::~FMassEntityQuery(FMassEntityQuery *this)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  DestructItems<TArray<UE::Mass::FArchetypeGroupID,TSizedDefaultAllocator<32>_>,int>
            ((TArray<UE::Mass::FArchetypeGroupID,TSizedDefaultAllocator<32>_> *)
             (this->CachedGroupIDs).AllocatorInstance.Data,(this->CachedGroupIDs).ArrayNum);
  pFVar1 = (this->CachedGroupIDs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FMassEntityQuery::FArchetypeGroupingStep,int>
            ((FArchetypeGroupingStep *)(this->GroupSortingSteps).AllocatorInstance.Data,
             (this->GroupSortingSteps).ArrayNum);
  pFVar1 = (this->GroupSortingSteps).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FMassQueryRequirementIndicesMapping,int>
            ((FMassQueryRequirementIndicesMapping *)
             (this->ArchetypeFragmentMapping).AllocatorInstance.Data,
             (this->ArchetypeFragmentMapping).ArrayNum);
  pFVar1 = (this->ArchetypeFragmentMapping).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->OrderedArchetypeIndices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FMassArchetypeHandle,int>
            ((FMassArchetypeHandle *)(this->ValidArchetypes).AllocatorInstance.Data,
             (this->ValidArchetypes).ArrayNum);
  pFVar1 = (this->ValidArchetypes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if (*(longlong *)&this->ChunkCondition != 0) {
    plVar2 = *(longlong **)&(this->ChunkCondition).field_0x28;
    plVar3 = (longlong *)&(this->ChunkCondition).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar3 = plVar2;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  FMassFragmentRequirements::~FMassFragmentRequirements((FMassFragmentRequirements *)this);
  return;
}

// AddSubsystemRequirement @ 147110260

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FMassSubsystemRequirements * __thiscall
FMassEntityQuery::AddSubsystemRequirement
          (FMassEntityQuery *this,TSubclassOf<USubsystem> param_1,EMassFragmentAccess param_2)

{
  TObjectPtr<UClass>_u_0 TVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  FMassSubsystemRequirements *pFVar5;
  UClass *pUVar6;
  longlong *this_00;
  TObjectPtr<UClass>_u_0 local_res8;
  TObjectPtr<UClass>_u_0 local_res10;
  TSharedRef<FMassEntityManager,1> local_28;
  
  if (this->_padding_ == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FMassSubsystemRequirements *)(*pcVar2)();
      return pFVar5;
    }
  }
  local_28.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)this->_padding_
  ;
  local_28.Object = (FMassEntityManager *)this->_padding_;
  if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (local_28.Object == (FMassEntityManager *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FMassSubsystemRequirements *)(*pcVar2)();
      return pFVar5;
    }
  }
  TVar1 = *(TObjectPtr<UClass>_u_0 *)param_1.Class.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar1.DebugPtr != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)TVar1.DebugPtr);
  }
  local_res10 = TVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar1.DebugPtr != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)TVar1.DebugPtr);
  }
  bVar3 = FMassSubsystemRequirements::IsGameThreadOnlySubsystem
                    ((TSubclassOf<USubsystem>)&local_res10,&local_28);
  local_res8 = TVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar1.DebugPtr != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)TVar1.DebugPtr);
  }
  if ((param_2 == None) || (param_2 == MAX)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("AccessMode != EMassFragmentAccess::None && AccessMode != EMassFragmentAccess::MAX"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassRequirements.h"
                       ,0x69,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FMassSubsystemRequirements *)(*pcVar2)();
      return pFVar5;
    }
  }
  if (param_2 == ReadOnly) {
    pUVar6 = TSubclassOf<USubsystem>::operator*((TSubclassOf<USubsystem> *)&local_res8.ObjectPtr);
    this_00 = &this->_padding_;
  }
  else {
    if (param_2 != ReadWrite) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassRequirements.h"
                         ,0x76,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FMassSubsystemRequirements *)(*pcVar2)();
        return pFVar5;
      }
      goto LAB_1471103f7;
    }
    pUVar6 = TSubclassOf<USubsystem>::operator*((TSubclassOf<USubsystem> *)&local_res8.ObjectPtr);
    this_00 = &this->_padding_;
  }
  TTypeBitSetBase<TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>,USubsystem,UClass,FStructTypeBitSet::FBitSetContainer,1>
  ::Add((TTypeBitSetBase<TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>,USubsystem,UClass,FStructTypeBitSet::FBitSetContainer,1>
         *)this_00,pUVar6);
  *(byte *)&this->_padding_ = (byte)this->_padding_ | bVar3;
LAB_1471103f7:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  return (FMassSubsystemRequirements *)&this->_padding_;
}

