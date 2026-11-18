// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntity
// Functions: 26

// GetFragmentView<FMassRelationFragment> @ 1471c8780

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

TArrayView<FMassRelationFragment_const_,int> * __thiscall
FMassExecutionContext::GetFragmentView<FMassRelationFragment>
          (FMassExecutionContext *this,
          TArrayView<FMassRelationFragment_const_,int> *__return_storage_ptr__,
          TNotNull<UScriptStruct_const_*> param_1)

{
  int iVar1;
  FMassRelationFragment *pFVar2;
  code *pcVar3;
  bool bVar4;
  UPackage *pUVar5;
  TArrayView<FMassRelationFragment_const_,int> *pTVar6;
  ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_> FVar7;
  ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_> FVar8;
  FName local_res8;
  FString local_18;
  
  if (Z_Registration_Info_UScriptStruct_FMassRelationFragment.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar5 = Z_Construct_UPackage__Script_MassEntity();
    Z_Registration_Info_UScriptStruct_FMassRelationFragment.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMassRelationFragment,(UObject *)pUVar5,
                         L"MassRelationFragment");
    if (Z_Registration_Info_UScriptStruct_FMassRelationFragment.OuterSingleton !=
        (UScriptStruct *)0x0) goto LAB_1471c87d0;
  }
  else {
LAB_1471c87d0:
    iVar1 = (int)(Z_Registration_Info_UScriptStruct_FMassRelationFragment.OuterSingleton)->_padding_
    ;
    if (((int)(param_1.Val)->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)((param_1.Val)->_padding_ + (longlong)iVar1 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FMassRelationFragment.OuterSingleton)->_padding_)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) goto LAB_1471c881a;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("FragmentType->IsChildOf(TFragmentBase::StaticStruct())",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassExecutionContext.h"
                     ,0x1d3,L"");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TArrayView<FMassRelationFragment_const_,int> *)(*pcVar3)();
    return pTVar6;
  }
LAB_1471c881a:
  FVar7 = (this->FragmentViews).AllocatorInstance.SecondaryData;
  FVar8 = (ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_>)
          this;
  if (FVar7 != (ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_>
                )0x0) {
    FVar8 = FVar7;
  }
  FVar7 = (ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_>)
          ((longlong)(this->FragmentViews).ArrayNum * 0x20 + (longlong)FVar8);
  for (; FVar8 != FVar7;
      FVar8 = (ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_>
              )((longlong)FVar8 + 0x20)) {
    if (*(UScriptStruct **)FVar8 == param_1.Val) goto LAB_1471c88d2;
  }
  FVar8 = (ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_>)0x0
  ;
  if (param_1.Val == (UScriptStruct *)0x0) {
    ::FString::FString(&local_18,L"None");
  }
  else {
    local_res8 = (FName)(param_1.Val)->_padding_;
    ::FName::ToString(&local_res8,&local_18);
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("View",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassExecutionContext.h"
                     ,0x1c4,
                     L"Requested fragment type not bound, type %s. Make sure it has been listed as required."
                    );
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TArrayView<FMassRelationFragment_const_,int> *)(*pcVar3)();
    return pTVar6;
  }
LAB_1471c88d2:
  iVar1 = *(int *)((longlong)FVar8 + 0x18);
  pFVar2 = *(FMassRelationFragment **)((longlong)FVar8 + 0x10);
  if ((iVar1 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TArrayView<FMassRelationFragment_const_,int> *)(*pcVar3)();
    return pTVar6;
  }
  __return_storage_ptr__->DataPtr = pFVar2;
  __return_storage_ptr__->ArrayNum = iVar1;
  if ((iVar1 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TArrayView<FMassRelationFragment_const_,int> *)(*pcVar3)();
    return pTVar6;
  }
  return __return_storage_ptr__;
}

// FMassExecutionContext @ 1471d86c0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FMassExecutionContext * __thiscall
FMassExecutionContext::FMassExecutionContext
          (FMassExecutionContext *this,FMassExecutionContext *param_1)

{
  uint uVar1;
  ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_> FVar2;
  ForElementType<FMassExecutionContext::TFragmentView<FStructView>_> FVar3;
  ForElementType<FMassExecutionContext::TFragmentView<FConstStructView>_> FVar4;
  UScriptStruct *pUVar5;
  uchar *puVar6;
  TReferenceControllerBase<1> *pTVar7;
  ForElementType<FMassExecutionContext::FQueryTransientRuntime> FVar8;
  int iVar9;
  undefined4 uVar10;
  
  (this->FragmentViews).AllocatorInstance.SecondaryData =
       (ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_>)0x0;
  if ((param_1->FragmentViews).AllocatorInstance.SecondaryData ==
      (ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_>)0x0) {
    memmove(this,param_1,0x100);
  }
  FVar2 = (this->FragmentViews).AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_>
                )0x0) {
    FMemory::Free((void *)FVar2);
  }
  (this->FragmentViews).AllocatorInstance.SecondaryData =
       (param_1->FragmentViews).AllocatorInstance.SecondaryData;
  (param_1->FragmentViews).AllocatorInstance.SecondaryData =
       (ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_>)0x0;
  (this->FragmentViews).ArrayNum = (param_1->FragmentViews).ArrayNum;
  (this->FragmentViews).ArrayMax = (param_1->FragmentViews).ArrayMax;
  (param_1->FragmentViews).ArrayNum = 0;
  (param_1->FragmentViews).ArrayMax = 8;
  (this->ChunkFragmentViews).AllocatorInstance.SecondaryData =
       (ForElementType<FMassExecutionContext::TFragmentView<FStructView>_>)0x0;
  if ((param_1->ChunkFragmentViews).AllocatorInstance.SecondaryData ==
      (ForElementType<FMassExecutionContext::TFragmentView<FStructView>_>)0x0) {
    memmove(&this->ChunkFragmentViews,&param_1->ChunkFragmentViews,0x80);
  }
  FVar3 = (this->ChunkFragmentViews).AllocatorInstance.SecondaryData;
  if (FVar3 != (ForElementType<FMassExecutionContext::TFragmentView<FStructView>_>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  (this->ChunkFragmentViews).AllocatorInstance.SecondaryData =
       (param_1->ChunkFragmentViews).AllocatorInstance.SecondaryData;
  (param_1->ChunkFragmentViews).AllocatorInstance.SecondaryData =
       (ForElementType<FMassExecutionContext::TFragmentView<FStructView>_>)0x0;
  (this->ChunkFragmentViews).ArrayNum = (param_1->ChunkFragmentViews).ArrayNum;
  (this->ChunkFragmentViews).ArrayMax = (param_1->ChunkFragmentViews).ArrayMax;
  (param_1->ChunkFragmentViews).ArrayNum = 0;
  (param_1->ChunkFragmentViews).ArrayMax = 4;
  (this->ConstSharedFragmentViews).AllocatorInstance.SecondaryData =
       (ForElementType<FMassExecutionContext::TFragmentView<FConstStructView>_>)0x0;
  if ((param_1->ConstSharedFragmentViews).AllocatorInstance.SecondaryData ==
      (ForElementType<FMassExecutionContext::TFragmentView<FConstStructView>_>)0x0) {
    memmove(&this->ConstSharedFragmentViews,&param_1->ConstSharedFragmentViews,0x80);
  }
  FVar4 = (this->ConstSharedFragmentViews).AllocatorInstance.SecondaryData;
  if (FVar4 != (ForElementType<FMassExecutionContext::TFragmentView<FConstStructView>_>)0x0) {
    FMemory::Free((void *)FVar4);
  }
  (this->ConstSharedFragmentViews).AllocatorInstance.SecondaryData =
       (param_1->ConstSharedFragmentViews).AllocatorInstance.SecondaryData;
  (param_1->ConstSharedFragmentViews).AllocatorInstance.SecondaryData =
       (ForElementType<FMassExecutionContext::TFragmentView<FConstStructView>_>)0x0;
  (this->ConstSharedFragmentViews).ArrayNum = (param_1->ConstSharedFragmentViews).ArrayNum;
  (this->ConstSharedFragmentViews).ArrayMax = (param_1->ConstSharedFragmentViews).ArrayMax;
  (param_1->ConstSharedFragmentViews).ArrayNum = 0;
  (param_1->ConstSharedFragmentViews).ArrayMax = 4;
  (this->SharedFragmentViews).AllocatorInstance.SecondaryData =
       (ForElementType<FMassExecutionContext::TFragmentView<FStructView>_>)0x0;
  if ((param_1->SharedFragmentViews).AllocatorInstance.SecondaryData ==
      (ForElementType<FMassExecutionContext::TFragmentView<FStructView>_>)0x0) {
    memmove(&this->SharedFragmentViews,&param_1->SharedFragmentViews,0x80);
  }
  FVar3 = (this->SharedFragmentViews).AllocatorInstance.SecondaryData;
  if (FVar3 != (ForElementType<FMassExecutionContext::TFragmentView<FStructView>_>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  (this->SharedFragmentViews).AllocatorInstance.SecondaryData =
       (param_1->SharedFragmentViews).AllocatorInstance.SecondaryData;
  (param_1->SharedFragmentViews).AllocatorInstance.SecondaryData =
       (ForElementType<FMassExecutionContext::TFragmentView<FStructView>_>)0x0;
  (this->SharedFragmentViews).ArrayNum = (param_1->SharedFragmentViews).ArrayNum;
  (this->SharedFragmentViews).ArrayMax = (param_1->SharedFragmentViews).ArrayMax;
  (param_1->SharedFragmentViews).ArrayNum = 0;
  (param_1->SharedFragmentViews).ArrayMax = 4;
  FStructTypeBitSet::FBitSetContainer::FBitSetContainer
            ((FBitSetContainer *)&this->SubsystemAccess,
             (FBitSetContainer *)&param_1->SubsystemAccess);
  FStructTypeBitSet::FBitSetContainer::FBitSetContainer
            ((FBitSetContainer *)&(this->SubsystemAccess).MutableSubsystemsBitSet,
             (FBitSetContainer *)&(param_1->SubsystemAccess).MutableSubsystemsBitSet);
  (this->SubsystemAccess).Subsystems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SubsystemAccess).Subsystems.AllocatorInstance.Data =
       (param_1->SubsystemAccess).Subsystems.AllocatorInstance.Data;
  (param_1->SubsystemAccess).Subsystems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SubsystemAccess).Subsystems.ArrayNum = (param_1->SubsystemAccess).Subsystems.ArrayNum;
  (this->SubsystemAccess).Subsystems.ArrayMax = (param_1->SubsystemAccess).Subsystems.ArrayMax;
  (param_1->SubsystemAccess).Subsystems.ArrayNum = 0;
  (param_1->SubsystemAccess).Subsystems.ArrayMax = 0;
  (this->SubsystemAccess).World.WeakPtr = (param_1->SubsystemAccess).World.WeakPtr;
  (this->DeferredCommandBuffer).Object = (param_1->DeferredCommandBuffer).Object;
  (this->DeferredCommandBuffer).SharedReferenceCount.ReferenceController =
       (param_1->DeferredCommandBuffer).SharedReferenceCount.ReferenceController;
  (param_1->DeferredCommandBuffer).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (param_1->DeferredCommandBuffer).Object = (FMassCommandBuffer *)0x0;
  iVar9 = (param_1->EntityListView).ArrayNum;
  uVar10 = *(undefined4 *)&(param_1->EntityListView).field_0xc;
  (this->EntityListView).DataPtr = (param_1->EntityListView).DataPtr;
  (this->EntityListView).ArrayNum = iVar9;
  *(undefined4 *)&(this->EntityListView).field_0xc = uVar10;
  (this->EntityCollection).Ranges.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EntityCollection).Ranges.AllocatorInstance.Data =
       (param_1->EntityCollection).Ranges.AllocatorInstance.Data;
  (param_1->EntityCollection).Ranges.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EntityCollection).Ranges.ArrayNum = (param_1->EntityCollection).Ranges.ArrayNum;
  (this->EntityCollection).Ranges.ArrayMax = (param_1->EntityCollection).Ranges.ArrayMax;
  (param_1->EntityCollection).Ranges.ArrayNum = 0;
  (param_1->EntityCollection).Ranges.ArrayMax = 0;
  (this->EntityCollection).Archetype.ArchetypeHandle.DataPtr.Object =
       (param_1->EntityCollection).Archetype.ArchetypeHandle.DataPtr.Object;
  (this->EntityCollection).Archetype.ArchetypeHandle.DataPtr.SharedReferenceCount.
  ReferenceController =
       (param_1->EntityCollection).Archetype.ArchetypeHandle.DataPtr.SharedReferenceCount.
       ReferenceController;
  (param_1->EntityCollection).Archetype.ArchetypeHandle.DataPtr.SharedReferenceCount.
  ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (param_1->EntityCollection).Archetype.ArchetypeHandle.DataPtr.Object = (FMassArchetypeData *)0x0;
  (this->EntityCollection).Archetype.HandleVersion =
       (param_1->EntityCollection).Archetype.HandleVersion;
  pUVar5 = (param_1->AuxData).ScriptStruct.field0_0x0.DebugPtr;
  puVar6 = (param_1->AuxData).StructMemory;
  (this->AuxData).ScriptStruct.field0_0x0.DebugPtr = pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  (this->AuxData).StructMemory = puVar6;
  (param_1->AuxData).ScriptStruct.field0_0x0.DebugPtr = (UScriptStruct *)0x0;
  (param_1->AuxData).StructMemory = (uchar *)0x0;
  this->DeltaTimeSeconds = param_1->DeltaTimeSeconds;
  this->ChunkSerialModificationNumber = param_1->ChunkSerialModificationNumber;
  FStructTypeBitSet::FBitSetContainer::FBitSetContainer
            ((FBitSetContainer *)&this->CurrentArchetypeCompositionDescriptor,
             (FBitSetContainer *)&param_1->CurrentArchetypeCompositionDescriptor);
  FStructTypeBitSet::FBitSetContainer::FBitSetContainer
            ((FBitSetContainer *)&(this->CurrentArchetypeCompositionDescriptor).Tags,
             (FBitSetContainer *)&(param_1->CurrentArchetypeCompositionDescriptor).Tags);
  FStructTypeBitSet::FBitSetContainer::FBitSetContainer
            ((FBitSetContainer *)&(this->CurrentArchetypeCompositionDescriptor).ChunkFragments,
             (FBitSetContainer *)&(param_1->CurrentArchetypeCompositionDescriptor).ChunkFragments);
  FStructTypeBitSet::FBitSetContainer::FBitSetContainer
            ((FBitSetContainer *)&(this->CurrentArchetypeCompositionDescriptor).SharedFragments,
             (FBitSetContainer *)&(param_1->CurrentArchetypeCompositionDescriptor).SharedFragments);
  FStructTypeBitSet::FBitSetContainer::FBitSetContainer
            ((FBitSetContainer *)&(this->CurrentArchetypeCompositionDescriptor).ConstSharedFragments
             ,(FBitSetContainer *)
              &(param_1->CurrentArchetypeCompositionDescriptor).ConstSharedFragments);
  (this->DebugColor).field0_0x0 = (param_1->DebugColor).field0_0x0;
  (this->EntityManager).Object = (param_1->EntityManager).Object;
  pTVar7 = (param_1->EntityManager).SharedReferenceCount.ReferenceController;
  (this->EntityManager).SharedReferenceCount.ReferenceController = pTVar7;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  (this->QueriesStack).AllocatorInstance.SecondaryData =
       (ForElementType<FMassExecutionContext::FQueryTransientRuntime>)0x0;
  if ((param_1->QueriesStack).AllocatorInstance.SecondaryData ==
      (ForElementType<FMassExecutionContext::FQueryTransientRuntime>)0x0) {
    memmove(&this->QueriesStack,&param_1->QueriesStack,0x130);
  }
  FVar8 = (this->QueriesStack).AllocatorInstance.SecondaryData;
  if (FVar8 != (ForElementType<FMassExecutionContext::FQueryTransientRuntime>)0x0) {
    FMemory::Free((void *)FVar8);
  }
  (this->QueriesStack).AllocatorInstance.SecondaryData =
       (param_1->QueriesStack).AllocatorInstance.SecondaryData;
  (param_1->QueriesStack).AllocatorInstance.SecondaryData =
       (ForElementType<FMassExecutionContext::FQueryTransientRuntime>)0x0;
  (this->QueriesStack).ArrayNum = (param_1->QueriesStack).ArrayNum;
  (this->QueriesStack).ArrayMax = (param_1->QueriesStack).ArrayMax;
  (param_1->QueriesStack).ArrayNum = 0;
  (param_1->QueriesStack).ArrayMax = 2;
  uVar1 = param_1->IteratorSerialNumberGenerator;
  (this->DebugExecutionDescription).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->IteratorSerialNumberGenerator = uVar1;
  (this->DebugExecutionDescription).Data.AllocatorInstance.Data =
       (param_1->DebugExecutionDescription).Data.AllocatorInstance.Data;
  (param_1->DebugExecutionDescription).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DebugExecutionDescription).Data.ArrayNum =
       (param_1->DebugExecutionDescription).Data.ArrayNum;
  (this->DebugExecutionDescription).Data.ArrayMax =
       (param_1->DebugExecutionDescription).Data.ArrayMax;
  (param_1->DebugExecutionDescription).Data.ArrayNum = 0;
  (param_1->DebugExecutionDescription).Data.ArrayMax = 0;
  (this->DebugProcessor).WeakPtr = (param_1->DebugProcessor).WeakPtr;
  this->bFlushDeferredCommands = param_1->bFlushDeferredCommands;
  this->ExecutionType = param_1->ExecutionType;
  return this;
}

// FMassExecutionContext @ 1471d8bb0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FMassExecutionContext * __thiscall
FMassExecutionContext::FMassExecutionContext
          (FMassExecutionContext *this,FMassEntityManager *param_1,float param_2,bool param_3)

{
  bool bVar1;
  UObject *pUVar2;
  UWorld *pUVar3;
  
  pUVar3 = (UWorld *)0x0;
  (this->FragmentViews).AllocatorInstance.SecondaryData =
       (ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_>)0x0;
  (this->FragmentViews).ArrayNum = 0;
  (this->FragmentViews).ArrayMax = 8;
  (this->ChunkFragmentViews).AllocatorInstance.SecondaryData =
       (ForElementType<FMassExecutionContext::TFragmentView<FStructView>_>)0x0;
  (this->ChunkFragmentViews).ArrayNum = 0;
  (this->ChunkFragmentViews).ArrayMax = 4;
  (this->ConstSharedFragmentViews).AllocatorInstance.SecondaryData =
       (ForElementType<FMassExecutionContext::TFragmentView<FConstStructView>_>)0x0;
  (this->ConstSharedFragmentViews).ArrayNum = 0;
  (this->ConstSharedFragmentViews).ArrayMax = 4;
  (this->SharedFragmentViews).AllocatorInstance.SecondaryData =
       (ForElementType<FMassExecutionContext::TFragmentView<FStructView>_>)0x0;
  (this->SharedFragmentViews).ArrayNum = 0;
  (this->SharedFragmentViews).ArrayMax = 4;
  bVar1 = FWeakObjectPtr::IsValid(&(param_1->Owner).WeakPtr);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&(param_1->Owner).WeakPtr);
    pUVar3 = (UWorld *)(**(code **)(*(longlong *)pUVar2 + 0x180))(pUVar2);
  }
  FMassSubsystemAccess::FMassSubsystemAccess(&this->SubsystemAccess,pUVar3);
  (this->DeferredCommandBuffer).Object = (FMassCommandBuffer *)0x0;
  (this->DeferredCommandBuffer).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->EntityListView).DataPtr = (FMassEntityHandle *)0x0;
  (this->EntityListView).ArrayNum = 0;
  (this->EntityCollection).Ranges.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EntityCollection).Ranges.ArrayNum = 0;
  (this->EntityCollection).Ranges.ArrayMax = 0;
  (this->EntityCollection).Archetype.ArchetypeHandle.DataPtr.Object = (FMassArchetypeData *)0x0;
  (this->EntityCollection).Archetype.ArchetypeHandle.DataPtr.SharedReferenceCount.
  ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->EntityCollection).Archetype.HandleVersion = 0;
  FInstancedStruct::FInstancedStruct(&this->AuxData);
  this->DeltaTimeSeconds = param_2;
  this->ChunkSerialModificationNumber = -1;
  *(undefined8 *)&(this->CurrentArchetypeCompositionDescriptor).Fragments.field_0x10 = 0;
  *(undefined4 *)&(this->CurrentArchetypeCompositionDescriptor).Fragments.field_0x18 = 0;
  *(undefined4 *)&(this->CurrentArchetypeCompositionDescriptor).Fragments.field_0x1c = 0x80;
  *(undefined8 *)&(this->CurrentArchetypeCompositionDescriptor).Tags.field_0x10 = 0;
  *(undefined4 *)&(this->CurrentArchetypeCompositionDescriptor).Tags.field_0x18 = 0;
  *(undefined4 *)&(this->CurrentArchetypeCompositionDescriptor).Tags.field_0x1c = 0x80;
  *(undefined8 *)&(this->CurrentArchetypeCompositionDescriptor).ChunkFragments.field_0x10 = 0;
  *(undefined4 *)&(this->CurrentArchetypeCompositionDescriptor).ChunkFragments.field_0x18 = 0;
  *(undefined4 *)&(this->CurrentArchetypeCompositionDescriptor).ChunkFragments.field_0x1c = 0x80;
  *(undefined8 *)&(this->CurrentArchetypeCompositionDescriptor).SharedFragments.field_0x10 = 0;
  *(undefined4 *)&(this->CurrentArchetypeCompositionDescriptor).SharedFragments.field_0x18 = 0;
  *(undefined4 *)&(this->CurrentArchetypeCompositionDescriptor).SharedFragments.field_0x1c = 0x80;
  *(undefined8 *)&(this->CurrentArchetypeCompositionDescriptor).ConstSharedFragments.field_0x10 = 0;
  *(undefined4 *)&(this->CurrentArchetypeCompositionDescriptor).ConstSharedFragments.field_0x18 = 0;
  *(undefined4 *)&(this->CurrentArchetypeCompositionDescriptor).ConstSharedFragments.field_0x1c =
       0x80;
  TSharedFromThis<FMassEntityManager,1>::AsShared
            ((TSharedFromThis<FMassEntityManager,1> *)&param_1->_padding_,&this->EntityManager);
  (this->QueriesStack).AllocatorInstance.SecondaryData =
       (ForElementType<FMassExecutionContext::FQueryTransientRuntime>)0x0;
  (this->QueriesStack).ArrayNum = 0;
  *(undefined8 *)&(this->QueriesStack).ArrayMax = 2;
  this->bFlushDeferredCommands = param_3;
  (this->DebugExecutionDescription).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DebugExecutionDescription).Data.ArrayNum = 0;
  (this->DebugExecutionDescription).Data.ArrayMax = 0;
  (this->DebugProcessor).WeakPtr = (FWeakObjectPtr)0x0;
  this->ExecutionType = Local;
  return this;
}

// FMassExecutionContext @ 1471d8dd0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FMassExecutionContext * __thiscall
FMassExecutionContext::FMassExecutionContext
          (FMassExecutionContext *this,FMassExecutionContext *param_1)

{
  int *piVar1;
  TArray<FMassExecutionContext::FQueryTransientRuntime,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
  *pTVar2;
  int iVar3;
  TReferenceControllerBase<1> *pTVar4;
  ForElementType<FMassExecutionContext::FQueryTransientRuntime> FVar5;
  
  (this->FragmentViews).AllocatorInstance.SecondaryData =
       (ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_>)0x0;
  (this->FragmentViews).ArrayNum = 0;
  (this->FragmentViews).ArrayMax = 8;
  (this->ChunkFragmentViews).AllocatorInstance.SecondaryData =
       (ForElementType<FMassExecutionContext::TFragmentView<FStructView>_>)0x0;
  (this->ChunkFragmentViews).ArrayNum = 0;
  (this->ChunkFragmentViews).ArrayMax = 4;
  (this->ConstSharedFragmentViews).AllocatorInstance.SecondaryData =
       (ForElementType<FMassExecutionContext::TFragmentView<FConstStructView>_>)0x0;
  (this->ConstSharedFragmentViews).ArrayNum = 0;
  (this->ConstSharedFragmentViews).ArrayMax = 4;
  (this->SharedFragmentViews).AllocatorInstance.SecondaryData =
       (ForElementType<FMassExecutionContext::TFragmentView<FStructView>_>)0x0;
  (this->SharedFragmentViews).ArrayNum = 0;
  (this->SharedFragmentViews).ArrayMax = 4;
  FMassSubsystemAccess::FMassSubsystemAccess(&this->SubsystemAccess,(UWorld *)0x0);
  (this->DeferredCommandBuffer).Object = (FMassCommandBuffer *)0x0;
  (this->DeferredCommandBuffer).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->EntityListView).DataPtr = (FMassEntityHandle *)0x0;
  (this->EntityListView).ArrayNum = 0;
  (this->EntityCollection).Ranges.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EntityCollection).Ranges.ArrayNum = 0;
  (this->EntityCollection).Ranges.ArrayMax = 0;
  (this->EntityCollection).Archetype.ArchetypeHandle.DataPtr.Object = (FMassArchetypeData *)0x0;
  (this->EntityCollection).Archetype.ArchetypeHandle.DataPtr.SharedReferenceCount.
  ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->EntityCollection).Archetype.HandleVersion = 0;
  FInstancedStruct::FInstancedStruct(&this->AuxData);
  this->DeltaTimeSeconds = 0.0;
  this->ChunkSerialModificationNumber = -1;
  *(undefined8 *)&(this->CurrentArchetypeCompositionDescriptor).Fragments.field_0x10 = 0;
  *(undefined4 *)&(this->CurrentArchetypeCompositionDescriptor).Fragments.field_0x18 = 0;
  *(undefined4 *)&(this->CurrentArchetypeCompositionDescriptor).Fragments.field_0x1c = 0x80;
  *(undefined8 *)&(this->CurrentArchetypeCompositionDescriptor).Tags.field_0x10 = 0;
  *(undefined4 *)&(this->CurrentArchetypeCompositionDescriptor).Tags.field_0x18 = 0;
  *(undefined4 *)&(this->CurrentArchetypeCompositionDescriptor).Tags.field_0x1c = 0x80;
  *(undefined8 *)&(this->CurrentArchetypeCompositionDescriptor).ChunkFragments.field_0x10 = 0;
  *(undefined4 *)&(this->CurrentArchetypeCompositionDescriptor).ChunkFragments.field_0x18 = 0;
  *(undefined4 *)&(this->CurrentArchetypeCompositionDescriptor).ChunkFragments.field_0x1c = 0x80;
  *(undefined8 *)&(this->CurrentArchetypeCompositionDescriptor).SharedFragments.field_0x10 = 0;
  *(undefined4 *)&(this->CurrentArchetypeCompositionDescriptor).SharedFragments.field_0x18 = 0;
  *(undefined4 *)&(this->CurrentArchetypeCompositionDescriptor).SharedFragments.field_0x1c = 0x80;
  *(undefined8 *)&(this->CurrentArchetypeCompositionDescriptor).ConstSharedFragments.field_0x10 = 0;
  *(undefined4 *)&(this->CurrentArchetypeCompositionDescriptor).ConstSharedFragments.field_0x18 = 0;
  *(undefined4 *)&(this->CurrentArchetypeCompositionDescriptor).ConstSharedFragments.field_0x1c =
       0x80;
  (this->EntityManager).Object = (param_1->EntityManager).Object;
  pTVar4 = (param_1->EntityManager).SharedReferenceCount.ReferenceController;
  (this->EntityManager).SharedReferenceCount.ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  (this->QueriesStack).AllocatorInstance.SecondaryData =
       (ForElementType<FMassExecutionContext::FQueryTransientRuntime>)0x0;
  piVar1 = &(this->QueriesStack).ArrayMax;
  *piVar1 = 2;
  (this->QueriesStack).ArrayNum = 0;
  this->IteratorSerialNumberGenerator = 0;
  (this->DebugExecutionDescription).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DebugExecutionDescription).Data.ArrayNum = 0;
  (this->DebugExecutionDescription).Data.ArrayMax = 0;
  (this->DebugProcessor).WeakPtr = (FWeakObjectPtr)0x0;
  this->bFlushDeferredCommands = true;
  this->ExecutionType = Local;
  operator=(this,param_1);
  pTVar2 = &this->QueriesStack;
  iVar3 = (this->QueriesStack).ArrayNum;
  FVar5 = (this->QueriesStack).AllocatorInstance.SecondaryData;
  if ((this->QueriesStack).ArrayMax < 0) {
    if (FVar5 == (ForElementType<FMassExecutionContext::FQueryTransientRuntime>)0x0) {
      FVar5 = (ForElementType<FMassExecutionContext::FQueryTransientRuntime>)pTVar2;
    }
    DestructItems<FMassExecutionContext::FQueryTransientRuntime,int>
              ((FQueryTransientRuntime *)FVar5,iVar3);
    (this->QueriesStack).ArrayNum = 0;
    if ((this->QueriesStack).ArrayMax != 0) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FMassExecutionContext::FQueryTransientRuntime>_>
                (0x98,8,0,&pTVar2->AllocatorInstance,0,piVar1);
    }
  }
  else {
    if (FVar5 == (ForElementType<FMassExecutionContext::FQueryTransientRuntime>)0x0) {
      FVar5 = (ForElementType<FMassExecutionContext::FQueryTransientRuntime>)pTVar2;
    }
    DestructItems<FMassExecutionContext::FQueryTransientRuntime,int>
              ((FQueryTransientRuntime *)FVar5,iVar3);
    (this->QueriesStack).ArrayNum = 0;
  }
  return this;
}

// FMassExecutionContext @ 1471d9020

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FMassExecutionContext * __thiscall
FMassExecutionContext::FMassExecutionContext
          (FMassExecutionContext *this,FMassExecutionContext *param_1,FMassEntityQuery *param_2,
          TSharedPtr<FMassCommandBuffer,1> *param_3)

{
  TArray<FMassExecutionContext::FQueryTransientRuntime,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
  *pTVar1;
  int *piVar2;
  TReferenceControllerBase<1> *pTVar3;
  FMassCommandBuffer *pFVar4;
  code *pcVar5;
  TReferenceControllerBase<1> *pTVar6;
  bool bVar7;
  int iVar8;
  FMassExecutionContext *pFVar9;
  uint uVar10;
  ForElementType<FMassExecutionContext::FQueryTransientRuntime> FVar11;
  uint uVar12;
  ForElementType<FMassExecutionContext::FQueryTransientRuntime> FVar13;
  undefined1 local_res8 [8];
  
  FMassExecutionContext(this,param_1);
  iVar8 = (param_1->QueriesStack).ArrayNum;
  uVar12 = iVar8 - 1;
  uVar10 = 0;
  if ((int)uVar12 < iVar8) {
    uVar10 = ~uVar12 >> 0x1f;
  }
  if (uVar10 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pFVar9 = (FMassExecutionContext *)(*pcVar5)();
      return pFVar9;
    }
  }
  FVar13 = (param_1->QueriesStack).AllocatorInstance.SecondaryData;
  if (FVar13 == (ForElementType<FMassExecutionContext::FQueryTransientRuntime>)0x0) {
    FVar13 = (ForElementType<FMassExecutionContext::FQueryTransientRuntime>)&param_1->QueriesStack;
  }
  if (*(FMassEntityQuery **)
       ((longlong)((longlong)FVar13 + -0x98) + (longlong)(param_1->QueriesStack).ArrayNum * 0x98) !=
      param_2) {
    local_res8[0] = 0;
    `FMassExecutionContext::FMassExecutionContext'::__l2::<lambda_1>::operator()(local_res8);
  }
  iVar8 = (param_1->QueriesStack).ArrayNum;
  pTVar1 = &this->QueriesStack;
  uVar12 = iVar8 - 1;
  uVar10 = 0;
  if ((int)uVar12 < iVar8) {
    uVar10 = ~uVar12 >> 0x1f;
  }
  if (uVar10 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pFVar9 = (FMassExecutionContext *)(*pcVar5)();
      return pFVar9;
    }
  }
  FVar13 = (param_1->QueriesStack).AllocatorInstance.SecondaryData;
  FVar11 = (this->QueriesStack).AllocatorInstance.SecondaryData;
  if (FVar13 == (ForElementType<FMassExecutionContext::FQueryTransientRuntime>)0x0) {
    FVar13 = (ForElementType<FMassExecutionContext::FQueryTransientRuntime>)&param_1->QueriesStack;
  }
  FVar13 = (ForElementType<FMassExecutionContext::FQueryTransientRuntime>)
           ((longlong)((param_1->QueriesStack).ArrayNum + -1) * 0x98 + (longlong)FVar13);
  if (FVar11 == (ForElementType<FMassExecutionContext::FQueryTransientRuntime>)0x0) {
    FVar11 = (ForElementType<FMassExecutionContext::FQueryTransientRuntime>)pTVar1;
  }
  if (((ulonglong)FVar11 <= (ulonglong)FVar13) &&
     ((ulonglong)FVar13 <
      (ulonglong)((longlong)(this->QueriesStack).ArrayMax * 0x98 + (longlong)FVar11))) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pFVar9 = (FMassExecutionContext *)(*pcVar5)();
      return pFVar9;
    }
  }
  iVar8 = (this->QueriesStack).ArrayNum;
  piVar2 = &(this->QueriesStack).ArrayMax;
  if (iVar8 == *piVar2) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FMassExecutionContext::FQueryTransientRuntime>_>
                      (0x898,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->QueriesStack).ArrayNum = iVar8 + 1;
  FVar11 = (this->QueriesStack).AllocatorInstance.SecondaryData;
  if (FVar11 == (ForElementType<FMassExecutionContext::FQueryTransientRuntime>)0x0) {
    FVar11 = (ForElementType<FMassExecutionContext::FQueryTransientRuntime>)pTVar1;
  }
  FQueryTransientRuntime::FQueryTransientRuntime
            ((FQueryTransientRuntime *)((longlong)FVar11 + (longlong)iVar8 * 0x98),
             (FQueryTransientRuntime *)FVar13);
  pTVar3 = (param_3->SharedReferenceCount).ReferenceController;
  pFVar4 = param_3->Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar6 = (this->DeferredCommandBuffer).SharedReferenceCount.ReferenceController;
  (this->DeferredCommandBuffer).Object = pFVar4;
  (this->DeferredCommandBuffer).SharedReferenceCount.ReferenceController = pTVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return this;
}

// ~FMassExecutionContext @ 1471e00b0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall FMassExecutionContext::~FMassExecutionContext(FMassExecutionContext *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  ForElementType<FMassExecutionContext::TFragmentView<FStructView>_> FVar3;
  ForElementType<FMassExecutionContext::TFragmentView<FConstStructView>_> FVar4;
  ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_> FVar5;
  ForElementType<FMassExecutionContext::FQueryTransientRuntime> FVar6;
  undefined1 local_res8 [8];
  
  if ((this->QueriesStack).ArrayNum != 0) {
    `FMassExecutionContext::~FMassExecutionContext'::__l2::<lambda_1>::operator()(local_res8);
  }
  pFVar1 = (this->DebugExecutionDescription).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FVar6 = (this->QueriesStack).AllocatorInstance.SecondaryData;
  if (FVar6 == (ForElementType<FMassExecutionContext::FQueryTransientRuntime>)0x0) {
    FVar6 = (ForElementType<FMassExecutionContext::FQueryTransientRuntime>)&this->QueriesStack;
  }
  DestructItems<FMassExecutionContext::FQueryTransientRuntime,int>
            ((FQueryTransientRuntime *)FVar6,(this->QueriesStack).ArrayNum);
  FVar6 = (this->QueriesStack).AllocatorInstance.SecondaryData;
  if (FVar6 != (ForElementType<FMassExecutionContext::FQueryTransientRuntime>)0x0) {
    FMemory::Free((void *)FVar6);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->EntityManager).SharedReferenceCount.ReferenceController);
  pvVar2 = *(void **)&(this->CurrentArchetypeCompositionDescriptor).ConstSharedFragments.field_0x10;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pvVar2 = *(void **)&(this->CurrentArchetypeCompositionDescriptor).SharedFragments.field_0x10;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pvVar2 = *(void **)&(this->CurrentArchetypeCompositionDescriptor).ChunkFragments.field_0x10;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pvVar2 = *(void **)&(this->CurrentArchetypeCompositionDescriptor).Tags.field_0x10;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pvVar2 = *(void **)&(this->CurrentArchetypeCompositionDescriptor).Fragments.field_0x10;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FInstancedStruct::Reset(&this->AuxData);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->EntityCollection).Archetype.ArchetypeHandle.DataPtr.SharedReferenceCount.
             ReferenceController);
  pFVar1 = (this->EntityCollection).Ranges.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->DeferredCommandBuffer).SharedReferenceCount.ReferenceController);
  pFVar1 = (this->SubsystemAccess).Subsystems.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = *(void **)&(this->SubsystemAccess).MutableSubsystemsBitSet.field_0x10;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pvVar2 = *(void **)&(this->SubsystemAccess).ConstSubsystemsBitSet.field_0x10;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FVar3 = (this->SharedFragmentViews).AllocatorInstance.SecondaryData;
  if (FVar3 != (ForElementType<FMassExecutionContext::TFragmentView<FStructView>_>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  FVar4 = (this->ConstSharedFragmentViews).AllocatorInstance.SecondaryData;
  if (FVar4 != (ForElementType<FMassExecutionContext::TFragmentView<FConstStructView>_>)0x0) {
    FMemory::Free((void *)FVar4);
  }
  FVar3 = (this->ChunkFragmentViews).AllocatorInstance.SecondaryData;
  if (FVar3 != (ForElementType<FMassExecutionContext::TFragmentView<FStructView>_>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  FVar5 = (this->FragmentViews).AllocatorInstance.SecondaryData;
  if (FVar5 != (ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_>
                )0x0) {
    FMemory::Free((void *)FVar5);
  }
  return;
}

// operator= @ 1471e2180

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FMassExecutionContext * __thiscall
FMassExecutionContext::operator=(FMassExecutionContext *this,FMassExecutionContext *param_1)

{
  TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass> *pTVar1;
  TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass> *this_00;
  TArray<USubsystem_*,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<USubsystem_*,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FMassExecutionContext::FQueryTransientRuntime,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
  *pTVar4;
  int iVar5;
  int iVar6;
  ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_> FVar7;
  FScriptContainerElement *_Src;
  TReferenceControllerBase<1> *pTVar8;
  FMassCommandBuffer *pFVar9;
  FMassEntityManager *pFVar10;
  TReferenceControllerBase<1> *pTVar11;
  undefined4 uVar12;
  int *piVar13;
  ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_> _Dst;
  ForElementType<FMassExecutionContext::TFragmentView<FConstStructView>_> _Dst_00;
  ForElementType<FMassExecutionContext::FQueryTransientRuntime> FVar14;
  ForElementType<FMassExecutionContext::FQueryTransientRuntime> FVar15;
  ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_> _Src_00;
  ForElementType<FMassExecutionContext::TFragmentView<FConstStructView>_> _Src_01;
  
  if (this == param_1) {
LAB_1471e2251:
    TArray<FMassExecutionContext::TFragmentView<FStructView>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
    ::operator=(&this->ChunkFragmentViews,&param_1->ChunkFragmentViews);
    if (this == param_1) goto LAB_1471e22f1;
  }
  else {
    FVar7 = (param_1->FragmentViews).AllocatorInstance.SecondaryData;
    piVar13 = &(this->FragmentViews).ArrayMax;
    iVar5 = (param_1->FragmentViews).ArrayNum;
    (this->FragmentViews).ArrayNum = iVar5;
    _Src_00 = (ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_>
              )param_1;
    if (FVar7 != (ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_>
                  )0x0) {
      _Src_00 = FVar7;
    }
    if ((iVar5 == 0) && (*piVar13 == 0)) {
      *piVar13 = 8;
    }
    else {
      UE::Core::Private::
      ReallocForCopy<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_>_>
                (0x20,8,iVar5,*piVar13,
                 (ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_>
                  *)this,iVar5,piVar13);
      FVar7 = (this->FragmentViews).AllocatorInstance.SecondaryData;
      _Dst = (ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_>)
             this;
      if (FVar7 != (ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_>
                    )0x0) {
        _Dst = FVar7;
      }
      if (iVar5 == 0) goto LAB_1471e2251;
      memcpy((void *)_Dst,(void *)_Src_00,(longlong)iVar5 << 5);
    }
    TArray<FMassExecutionContext::TFragmentView<FStructView>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
    ::operator=(&this->ChunkFragmentViews,&param_1->ChunkFragmentViews);
  }
  _Src_01 = (param_1->ConstSharedFragmentViews).AllocatorInstance.SecondaryData;
  piVar13 = &(this->ConstSharedFragmentViews).ArrayMax;
  iVar5 = (param_1->ConstSharedFragmentViews).ArrayNum;
  if (_Src_01 == (ForElementType<FMassExecutionContext::TFragmentView<FConstStructView>_>)0x0) {
    _Src_01 = (ForElementType<FMassExecutionContext::TFragmentView<FConstStructView>_>)
              &param_1->ConstSharedFragmentViews;
  }
  (this->ConstSharedFragmentViews).ArrayNum = iVar5;
  if ((iVar5 == 0) && (*piVar13 == 0)) {
    *piVar13 = 4;
  }
  else {
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FMassExecutionContext::TFragmentView<FConstStructView>_>_>
              (0x20,8,iVar5,*piVar13,&(this->ConstSharedFragmentViews).AllocatorInstance,iVar5,
               piVar13);
    _Dst_00 = (this->ConstSharedFragmentViews).AllocatorInstance.SecondaryData;
    if (iVar5 != 0) {
      if (_Dst_00 == (ForElementType<FMassExecutionContext::TFragmentView<FConstStructView>_>)0x0) {
        _Dst_00 = (ForElementType<FMassExecutionContext::TFragmentView<FConstStructView>_>)
                  &this->ConstSharedFragmentViews;
      }
      memcpy((void *)_Dst_00,(void *)_Src_01,(longlong)iVar5 << 5);
    }
  }
LAB_1471e22f1:
  TArray<FMassExecutionContext::TFragmentView<FStructView>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  ::operator=(&this->SharedFragmentViews,&param_1->SharedFragmentViews);
  if (&this->SubsystemAccess != &param_1->SubsystemAccess) {
    TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->SubsystemAccess,
               (TBitArray<FDefaultBitArrayAllocator> *)&param_1->SubsystemAccess);
  }
  pTVar1 = &(param_1->SubsystemAccess).MutableSubsystemsBitSet;
  this_00 = &(this->SubsystemAccess).MutableSubsystemsBitSet;
  if (this_00 != pTVar1) {
    TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
              ((TBitArray<FDefaultBitArrayAllocator> *)this_00,
               (TBitArray<FDefaultBitArrayAllocator> *)pTVar1);
  }
  pTVar2 = &(param_1->SubsystemAccess).Subsystems;
  pTVar3 = &(this->SubsystemAccess).Subsystems;
  if (pTVar3 != pTVar2) {
    iVar5 = (param_1->SubsystemAccess).Subsystems.ArrayNum;
    piVar13 = &(this->SubsystemAccess).Subsystems.ArrayMax;
    iVar6 = *piVar13;
    _Src = (pTVar2->AllocatorInstance).Data;
    (this->SubsystemAccess).Subsystems.ArrayNum = iVar5;
    if ((iVar5 == 0) && (iVar6 == 0)) {
      *piVar13 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar5,iVar6,&pTVar3->AllocatorInstance,iVar5,piVar13);
      if (iVar5 != 0) {
        memcpy((pTVar3->AllocatorInstance).Data,_Src,(longlong)iVar5 << 3);
      }
    }
  }
  (this->SubsystemAccess).World.WeakPtr = (param_1->SubsystemAccess).World.WeakPtr;
  pTVar8 = (param_1->DeferredCommandBuffer).SharedReferenceCount.ReferenceController;
  pFVar9 = (param_1->DeferredCommandBuffer).Object;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar11 = (this->DeferredCommandBuffer).SharedReferenceCount.ReferenceController;
  (this->DeferredCommandBuffer).Object = pFVar9;
  (this->DeferredCommandBuffer).SharedReferenceCount.ReferenceController = pTVar8;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  iVar5 = (param_1->EntityListView).ArrayNum;
  uVar12 = *(undefined4 *)&(param_1->EntityListView).field_0xc;
  (this->EntityListView).DataPtr = (param_1->EntityListView).DataPtr;
  (this->EntityListView).ArrayNum = iVar5;
  *(undefined4 *)&(this->EntityListView).field_0xc = uVar12;
  FMassArchetypeEntityCollection::operator=(&this->EntityCollection,&param_1->EntityCollection);
  if (&this->AuxData != &param_1->AuxData) {
    FInstancedStruct::InitializeAs
              (&this->AuxData,(param_1->AuxData).ScriptStruct.field0_0x0.DebugPtr,
               (param_1->AuxData).StructMemory);
  }
  this->DeltaTimeSeconds = param_1->DeltaTimeSeconds;
  this->ChunkSerialModificationNumber = param_1->ChunkSerialModificationNumber;
  FMassArchetypeCompositionDescriptor::operator=
            (&this->CurrentArchetypeCompositionDescriptor,
             &param_1->CurrentArchetypeCompositionDescriptor);
  (this->DebugColor).field0_0x0 = (param_1->DebugColor).field0_0x0;
  pTVar8 = (param_1->EntityManager).SharedReferenceCount.ReferenceController;
  pFVar10 = (param_1->EntityManager).Object;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar11 = (this->EntityManager).SharedReferenceCount.ReferenceController;
  (this->EntityManager).Object = pFVar10;
  (this->EntityManager).SharedReferenceCount.ReferenceController = pTVar8;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  pTVar4 = &this->QueriesStack;
  if (this != param_1) {
    FVar14 = (this->QueriesStack).AllocatorInstance.SecondaryData;
    if (FVar14 == (ForElementType<FMassExecutionContext::FQueryTransientRuntime>)0x0) {
      FVar14 = (ForElementType<FMassExecutionContext::FQueryTransientRuntime>)pTVar4;
    }
    DestructItems<FMassExecutionContext::FQueryTransientRuntime,int>
              ((FQueryTransientRuntime *)FVar14,(this->QueriesStack).ArrayNum);
    FVar14 = (param_1->QueriesStack).AllocatorInstance.SecondaryData;
    piVar13 = &(this->QueriesStack).ArrayMax;
    iVar5 = (param_1->QueriesStack).ArrayNum;
    if (FVar14 == (ForElementType<FMassExecutionContext::FQueryTransientRuntime>)0x0) {
      FVar14 = (ForElementType<FMassExecutionContext::FQueryTransientRuntime>)&param_1->QueriesStack
      ;
    }
    (this->QueriesStack).ArrayNum = iVar5;
    if ((iVar5 == 0) && (*piVar13 == 0)) {
      *piVar13 = 2;
    }
    else {
      UE::Core::Private::
      ReallocForCopy<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FMassExecutionContext::FQueryTransientRuntime>_>
                (0x98,8,iVar5,*piVar13,&pTVar4->AllocatorInstance,iVar5,piVar13);
      FVar15 = (this->QueriesStack).AllocatorInstance.SecondaryData;
      if (FVar15 == (ForElementType<FMassExecutionContext::FQueryTransientRuntime>)0x0) {
        FVar15 = (ForElementType<FMassExecutionContext::FQueryTransientRuntime>)pTVar4;
      }
      ConstructItems<FMassExecutionContext::FQueryTransientRuntime,FMassExecutionContext::FQueryTransientRuntime,int>
                ((void *)FVar15,(FQueryTransientRuntime *)FVar14,iVar5);
    }
  }
  this->IteratorSerialNumberGenerator = param_1->IteratorSerialNumberGenerator;
  ::FString::operator=(&this->DebugExecutionDescription,&param_1->DebugExecutionDescription);
  (this->DebugProcessor).WeakPtr = (param_1->DebugProcessor).WeakPtr;
  this->bFlushDeferredCommands = param_1->bFlushDeferredCommands;
  this->ExecutionType = param_1->ExecutionType;
  return this;
}

// operator() @ 1471e3e90

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
`FMassExecutionContext::PushQuery'::__l5::<lambda_1>::operator()
          (void *this,TArrayView<FMassFragmentRequirementDescription_const_,int> *param_1)

{
  UScriptStruct *pUVar1;
  ForElementType<FSetElementId> FVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  FEnvironment *pFVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  ForElementType<FSetElementId> FVar10;
  FMassFragmentRequirementDescription *pFVar11;
  FMassFragmentRequirementDescription *pFVar12;
  uint uVar13;
  UScriptStruct *local_res10;
  FWeakObjectPtr local_res18 [2];
  
  pFVar12 = param_1->DataPtr;
  pFVar11 = pFVar12 + param_1->ArrayNum;
  do {
    if (pFVar12 == pFVar11) {
      return;
    }
    if (((pFVar12->AccessMode == ReadWrite) &&
        (pUVar1 = pFVar12->StructType, UE::Mass::Debug::FBreakpoint::bHasBreakpoint != false)) &&
       (pFVar6 = FMassDebugger::GetActiveEnvironmentChecked
                           (*(FMassEntityManager **)((longlong)this + 8)),
       pFVar6->bHasBreakpoint != false)) {
      if (pUVar1 == (UScriptStruct *)0x0) {
        bVar4 = 0 < *(int *)&(pFVar6->FragmentsWithBreakpoints).Elements.field_0x8 -
                    *(int *)&(pFVar6->FragmentsWithBreakpoints).Elements.field_0x34;
      }
      else {
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pUVar1);
        }
        local_res18[0].ObjectIndex = 0;
        local_res18[0].ObjectSerialNumber = 0;
        local_res10 = pUVar1;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pUVar1);
        }
        FWeakObjectPtr::operator=(local_res18,(FObjectPtr)&local_res10);
        uVar9 = local_res18[0].ObjectIndex - local_res18[0].ObjectSerialNumber ^
                (uint)local_res18[0].ObjectSerialNumber >> 0xd;
        uVar7 = (-0x61c88647 - uVar9) - local_res18[0].ObjectSerialNumber ^ uVar9 << 8;
        uVar13 = (local_res18[0].ObjectSerialNumber - uVar7) - uVar9 ^ uVar7 >> 0xd;
        uVar9 = (uVar9 - uVar13) - uVar7 ^ uVar13 >> 0xc;
        uVar7 = (uVar7 - uVar13) - uVar9 ^ uVar9 << 0x10;
        uVar13 = (uVar13 - uVar7) - uVar9 ^ uVar7 >> 5;
        uVar9 = (uVar9 - uVar13) - uVar7 ^ uVar13 >> 3;
        uVar7 = (uVar7 - uVar9) - uVar13 ^ uVar9 << 10;
        if (*(int *)&(pFVar6->FragmentsWithBreakpoints).Elements.field_0x8 !=
            *(int *)&(pFVar6->FragmentsWithBreakpoints).Elements.field_0x34) {
          FVar2 = (pFVar6->FragmentsWithBreakpoints).Hash.SecondaryData;
          FVar10 = (ForElementType<FSetElementId>)&(pFVar6->FragmentsWithBreakpoints).Hash;
          if (FVar2 != (ForElementType<FSetElementId>)0x0) {
            FVar10 = FVar2;
          }
          iVar5 = *(int *)((longlong)FVar10 +
                          (ulonglong)
                          ((pFVar6->FragmentsWithBreakpoints).HashSize - 1U &
                          ((uVar13 - uVar7) - uVar9 ^ uVar7 >> 0xf)) * 4);
          if (iVar5 != -1) {
            lVar3 = *(longlong *)&(pFVar6->FragmentsWithBreakpoints).Elements;
            do {
              lVar8 = (longlong)iVar5;
              if ((*(int *)(lVar3 + lVar8 * 0x10) == local_res18[0].ObjectIndex) &&
                 (*(uint *)(lVar3 + 4 + lVar8 * 0x10) == local_res18[0].ObjectSerialNumber))
              goto LAB_1471e4041;
              iVar5 = *(int *)(lVar3 + 8 + lVar8 * 0x10);
            } while (iVar5 != -1);
          }
        }
        iVar5 = -1;
LAB_1471e4041:
        bVar4 = iVar5 != -1;
      }
      if ((bVar4) &&
         ((*(uint *)(*(longlong *)this + 0x8c) < 8 ||
          (bVar4 = ``FMassExecutionContext::PushQuery'::__l5::<lambda_1>::operator()'::__l9::
                   <lambda_1>::operator()(&local_res10), bVar4)))) {
        lVar3 = *(longlong *)this;
        pUVar1 = pFVar12->StructType;
        uVar7 = *(uint *)(lVar3 + 0x8c);
        *(uint *)(lVar3 + 0x8c) = uVar7 + 1;
        *(UScriptStruct **)(lVar3 + 0x48 + (ulonglong)uVar7 * 8) = pUVar1;
      }
    }
    pFVar12 = pFVar12 + 1;
  } while( true );
}

// ApplyFragmentRequirements @ 1471f3d10

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
FMassExecutionContext::ApplyFragmentRequirements
          (FMassExecutionContext *this,FMassEntityQuery *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = IsCurrentQuery(this,param_1);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsCurrentQuery(RequestingQuery)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassExecutionContext.h"
                       ,0x292,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  SetFragmentRequirements(this,(FMassFragmentRequirements *)param_1);
  return;
}

// CacheSubsystemRequirements @ 1471ffd10

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
FMassExecutionContext::CacheSubsystemRequirements
          (FMassExecutionContext *this,FMassSubsystemRequirements *param_1)

{
  bool bVar1;
  
  bVar1 = FMassSubsystemAccess::CacheSubsystemRequirements(&this->SubsystemAccess,param_1);
  return bVar1;
}

// ClearEntityCollection @ 147203120

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall FMassExecutionContext::ClearEntityCollection(FMassExecutionContext *this)

{
  FMassArchetypeVersionedHandle *pFVar1;
  int iVar2;
  undefined8 local_28;
  FSharedReferencer<1> FStack_20;
  uint local_18;
  undefined4 local_14;
  
  pFVar1 = &(this->EntityCollection).Archetype;
  local_14 = 0;
  local_18 = 0;
  local_28 = 0;
  FStack_20.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (pFVar1 != (FMassArchetypeVersionedHandle *)&local_28) {
    (pFVar1->ArchetypeHandle).DataPtr.Object = (FMassArchetypeData *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->EntityCollection).Archetype.ArchetypeHandle.DataPtr.SharedReferenceCount,
               &FStack_20);
  }
  (this->EntityCollection).Archetype.HandleVersion = local_18;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_20.ReferenceController);
  iVar2 = (this->EntityCollection).Ranges.ArrayMax;
  (this->EntityCollection).Ranges.ArrayNum = 0;
  if (iVar2 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,(ForAnyElementType *)&this->EntityCollection,0,
               &(this->EntityCollection).Ranges.ArrayMax);
  }
  return;
}

// ClearExecutionData @ 1472031c0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall FMassExecutionContext::ClearExecutionData(FMassExecutionContext *this)

{
  int *piVar1;
  uint uStack_c;
  
  piVar1 = &(this->FragmentViews).ArrayMax;
  (this->FragmentViews).ArrayNum = 0;
  if (*piVar1 < 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_>_>
              (0x20,8,0,(ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_>
                         *)this,0,piVar1);
  }
  piVar1 = &(this->ChunkFragmentViews).ArrayMax;
  (this->ChunkFragmentViews).ArrayNum = 0;
  if (*piVar1 < 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FMassExecutionContext::TFragmentView<FStructView>_>_>
              (0x20,8,0,&(this->ChunkFragmentViews).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->ConstSharedFragmentViews).ArrayMax;
  (this->ConstSharedFragmentViews).ArrayNum = 0;
  if (*piVar1 < 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FMassExecutionContext::TFragmentView<FConstStructView>_>_>
              (0x20,8,0,&(this->ConstSharedFragmentViews).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->SharedFragmentViews).ArrayMax;
  (this->SharedFragmentViews).ArrayNum = 0;
  if (*piVar1 < 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FMassExecutionContext::TFragmentView<FStructView>_>_>
              (0x20,8,0,&(this->SharedFragmentViews).AllocatorInstance,0,piVar1);
  }
  *(undefined4 *)&(this->CurrentArchetypeCompositionDescriptor).Fragments.field_0x18 = 0;
  *(undefined4 *)&(this->CurrentArchetypeCompositionDescriptor).Tags.field_0x18 = 0;
  *(undefined4 *)&(this->CurrentArchetypeCompositionDescriptor).ChunkFragments.field_0x18 = 0;
  *(undefined4 *)&(this->CurrentArchetypeCompositionDescriptor).SharedFragments.field_0x18 = 0;
  *(undefined4 *)&(this->CurrentArchetypeCompositionDescriptor).ConstSharedFragments.field_0x18 = 0;
  this->ChunkSerialModificationNumber = -1;
  (this->DebugColor).field0_0x0.Bits = 0;
  (this->EntityListView).DataPtr = (FMassEntityHandle *)0x0;
  *(ulonglong *)&(this->EntityListView).ArrayNum = (ulonglong)uStack_c << 0x20;
  return;
}

// ClearFragmentViews @ 147203300

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall FMassExecutionContext::ClearFragmentViews(FMassExecutionContext *this)

{
  uchar *puVar1;
  int iVar2;
  ForElementType<FMassExecutionContext::TFragmentView<FConstStructView>_> FVar3;
  ForElementType<FMassExecutionContext::TFragmentView<FStructView>_> FVar4;
  ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_> FVar5;
  undefined8 *puVar6;
  ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_> FVar7;
  undefined1 local_res8 [8];
  uint uStack_1c;
  
  FVar7 = (this->FragmentViews).AllocatorInstance.SecondaryData;
  iVar2 = (this->FragmentViews).ArrayNum;
  FVar5 = (ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_>)
          this;
  if (FVar7 != (ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_>
                )0x0) {
    FVar5 = FVar7;
  }
  FVar7 = (ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_>)
          ((longlong)iVar2 * 0x20 + (longlong)FVar5);
  while( true ) {
    if ((this->FragmentViews).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (FVar5 == FVar7) break;
    puVar1 = (uchar *)((longlong)FVar5 + 0x10);
    puVar1[0] = '\0';
    puVar1[1] = '\0';
    puVar1[2] = '\0';
    puVar1[3] = '\0';
    puVar1[4] = '\0';
    puVar1[5] = '\0';
    puVar1[6] = '\0';
    puVar1[7] = '\0';
    *(ulonglong *)((longlong)FVar5 + 0x18) = (ulonglong)uStack_1c << 0x20;
    FVar5 = (ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_>)
            ((longlong)FVar5 + 0x20);
  }
  FVar4 = (this->ChunkFragmentViews).AllocatorInstance.SecondaryData;
  iVar2 = (this->ChunkFragmentViews).ArrayNum;
  if (FVar4 == (ForElementType<FMassExecutionContext::TFragmentView<FStructView>_>)0x0) {
    FVar4 = (ForElementType<FMassExecutionContext::TFragmentView<FStructView>_>)
            &this->ChunkFragmentViews;
  }
  puVar6 = (undefined8 *)((longlong)FVar4 + 0x10);
  while( true ) {
    if ((this->ChunkFragmentViews).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FMassExecutionContext::TFragmentView<FStructView>,int,0>::operator!='
      ::__l2::<lambda_1>::operator()(local_res8);
    }
    if (puVar6 + -2 == (undefined8 *)((longlong)iVar2 * 0x20 + (longlong)FVar4)) break;
    puVar6[1] = 0;
    *puVar6 = 0;
    puVar6 = puVar6 + 4;
  }
  FVar3 = (this->ConstSharedFragmentViews).AllocatorInstance.SecondaryData;
  iVar2 = (this->ConstSharedFragmentViews).ArrayNum;
  if (FVar3 == (ForElementType<FMassExecutionContext::TFragmentView<FConstStructView>_>)0x0) {
    FVar3 = (ForElementType<FMassExecutionContext::TFragmentView<FConstStructView>_>)
            &this->ConstSharedFragmentViews;
  }
  puVar6 = (undefined8 *)((longlong)FVar3 + 0x10);
  while( true ) {
    if ((this->ConstSharedFragmentViews).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FMassExecutionContext::TFragmentView<FConstStructView>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (puVar6 + -2 == (undefined8 *)((longlong)iVar2 * 0x20 + (longlong)FVar3)) break;
    puVar6[1] = 0;
    *puVar6 = 0;
    puVar6 = puVar6 + 4;
  }
  FVar4 = (this->SharedFragmentViews).AllocatorInstance.SecondaryData;
  iVar2 = (this->SharedFragmentViews).ArrayNum;
  if (FVar4 == (ForElementType<FMassExecutionContext::TFragmentView<FStructView>_>)0x0) {
    FVar4 = (ForElementType<FMassExecutionContext::TFragmentView<FStructView>_>)
            &this->SharedFragmentViews;
  }
  puVar6 = (undefined8 *)((longlong)FVar4 + 0x10);
  while( true ) {
    if ((this->SharedFragmentViews).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FMassExecutionContext::TFragmentView<FStructView>,int,0>::operator!='
      ::__l2::<lambda_1>::operator()(local_res8);
    }
    if (puVar6 + -2 == (undefined8 *)((longlong)iVar2 * 0x20 + (longlong)FVar4)) break;
    puVar6[1] = 0;
    *puVar6 = 0;
    puVar6 = puVar6 + 4;
  }
  return;
}

// CreateEntityIterator @ 14720a1c0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FEntityIterator * __thiscall
FMassExecutionContext::CreateEntityIterator
          (FMassExecutionContext *this,FEntityIterator *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FQueryTransientRuntime *pFVar5;
  FEntityIterator *pFVar6;
  uint uVar7;
  ForElementType<FMassExecutionContext::FQueryTransientRuntime> FVar8;
  undefined1 local_res8 [8];
  
  if ((this->QueriesStack).ArrayNum == 0) {
    if (UE::AITestSuite::TestsInProgress < 1) {
      ``FMassExecutionContext::CreateEntityIterator'::__l3::<lambda_1>::operator()'::__l16::
      <lambda_1>::operator()(local_res8);
    }
    else if (2 < (byte)LogTestableEnsures._0_1_) {
      UE::Logging::Private::BasicLog<3>
                ((FStaticBasicLogRecord *)&PTR_u_Attempting_to_c_1515793e8,
                 (FLogCategoryBase *)&LogTestableEnsures);
    }
    __return_storage_ptr__->ExecutionContext = this;
    pFVar5 = FQueryTransientRuntime::GetDummyInstance();
    __return_storage_ptr__->QueryRuntime = pFVar5;
    __return_storage_ptr__->EntityIndex = -1;
    __return_storage_ptr__->NumEntities = -1;
    __return_storage_ptr__->SerialNumber = 0;
    return __return_storage_ptr__;
  }
  iVar1 = (this->QueriesStack).ArrayNum;
  uVar7 = iVar1 - 1;
  uVar4 = 0;
  if ((int)uVar7 < iVar1) {
    uVar4 = ~uVar7 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FEntityIterator *)(*pcVar2)();
      return pFVar6;
    }
  }
  FVar8 = (this->QueriesStack).AllocatorInstance.SecondaryData;
  iVar1 = (this->QueriesStack).ArrayNum;
  __return_storage_ptr__->EntityIndex = -1;
  if (FVar8 == (ForElementType<FMassExecutionContext::FQueryTransientRuntime>)0x0) {
    FVar8 = (ForElementType<FMassExecutionContext::FQueryTransientRuntime>)&this->QueriesStack;
  }
  __return_storage_ptr__->ExecutionContext = this;
  pFVar5 = (FQueryTransientRuntime *)((longlong)iVar1 * 0x98 + -0x98 + (longlong)FVar8);
  __return_storage_ptr__->QueryRuntime = pFVar5;
  iVar1 = (this->EntityListView).ArrayNum;
  __return_storage_ptr__->NumEntities = iVar1;
  __return_storage_ptr__->SerialNumber = pFVar5->IteratorSerialNumber;
  __return_storage_ptr__->EntityIndex = 0;
  if (((pFVar5->bCheckProcessorBreaks != false) || (pFVar5->BreakFragmentsCount != 0)) &&
     (0 < iVar1)) {
    FEntityIterator::TestBreakpoints(__return_storage_ptr__);
  }
  return __return_storage_ptr__;
}

// DebugGetProcessor @ 14720f190

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

UMassProcessor * __thiscall FMassExecutionContext::DebugGetProcessor(FMassExecutionContext *this)

{
  UMassProcessor *pUVar1;
  
  pUVar1 = (UMassProcessor *)FWeakObjectPtr::Get(&(this->DebugProcessor).WeakPtr);
  return pUVar1;
}

// FlushDeferred @ 14721bd20

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall FMassExecutionContext::FlushDeferred(FMassExecutionContext *this)

{
  if ((this->bFlushDeferredCommands != false) &&
     ((this->DeferredCommandBuffer).Object != (FMassCommandBuffer *)0x0)) {
    FMassEntityManager::FlushCommands((this->EntityManager).Object,&this->DeferredCommandBuffer);
    return;
  }
  return;
}

// GetDummyInstance @ 147220ba0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FMassExecutionContext * __cdecl FMassExecutionContext::GetDummyInstance(void)

{
  code *pcVar1;
  bool bVar2;
  TSharedRef<FMassEntityManager,1> *pTVar3;
  FMassEntityManager *this;
  FMassExecutionContext *pFVar4;
  TRawPtrProxy<FMassEntityManager> local_res8 [4];
  TSharedRef<FMassEntityManager,1> local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      this = ::operator_new(0x7d8);
      if (this == (FMassEntityManager *)0x0) {
        local_res8[0].Object = (FMassEntityManager *)0x0;
      }
      else {
        local_res8[0].Object = FMassEntityManager::FMassEntityManager(this,(UObject *)0x0);
        if ((((local_res8[0].Object != (FMassEntityManager *)0x0) &&
             ((local_res8[0].Object)->_padding_ != 0)) && ((local_res8[0].Object)->_padding_ != 0))
           && (0 < *(int *)((local_res8[0].Object)->_padding_ + 8))) {
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("!InObject || !InObject->DoesSharedInstanceExist()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x7a5,L"Trying to share an already-shared object");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            pFVar4 = (FMassExecutionContext *)(*pcVar1)();
            return pFVar4;
          }
        }
      }
      pTVar3 = TSharedRef<FMassEntityManager,1>::
               TSharedRef<FMassEntityManager,1><FMassEntityManager>(&local_18,local_res8);
      FMassExecutionContext(&DummyContext,pTVar3->Object,0.0,true);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
      atexit(`FMassExecutionContext::GetDummyInstance'::__l2::
             _dynamic_atexit_destructor_for__DummyContext__);
      _Init_thread_footer(&::_TSS0);
      return &DummyContext;
    }
  }
  return &DummyContext;
}

// GetWorld @ 147229100

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UWorld * __thiscall FMassExecutionContext::GetWorld(FMassExecutionContext *this)

{
  FMassEntityManager *pFVar1;
  bool bVar2;
  UObject *pUVar3;
  UWorld *pUVar4;
  
  pFVar1 = (this->EntityManager).Object;
  bVar2 = FWeakObjectPtr::IsValid(&(pFVar1->Owner).WeakPtr);
  if (bVar2) {
    pUVar3 = FWeakObjectPtr::Get(&(pFVar1->Owner).WeakPtr);
                    /* WARNING: Could not recover jumptable at 0x00014722913b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pUVar4 = (UWorld *)
             (**(code **)(*(longlong *)pUVar3 + 0x180))
                       (pUVar3,*(code **)(*(longlong *)pUVar3 + 0x180));
    return pUVar4;
  }
  return (UWorld *)0x0;
}

// IsCurrentQuery @ 147231f20

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
FMassExecutionContext::IsCurrentQuery(FMassExecutionContext *this,FMassEntityQuery *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  ForElementType<FMassExecutionContext::FQueryTransientRuntime> FVar6;
  
  iVar1 = (this->QueriesStack).ArrayNum;
  if (iVar1 != 0) {
    uVar5 = 0;
    if ((int)(iVar1 - 1U) < iVar1) {
      uVar5 = ~(iVar1 - 1U) >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    FVar6 = (this->QueriesStack).AllocatorInstance.SecondaryData;
    if (FVar6 == (ForElementType<FMassExecutionContext::FQueryTransientRuntime>)0x0) {
      FVar6 = (ForElementType<FMassExecutionContext::FQueryTransientRuntime>)&this->QueriesStack;
    }
    if (*(FMassEntityQuery **)
         ((longlong)((longlong)FVar6 + -0x98) + (longlong)(this->QueriesStack).ArrayNum * 0x98) ==
        param_1) {
      return true;
    }
  }
  return false;
}

// PopQuery @ 14723c880

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
FMassExecutionContext::PopQuery(FMassExecutionContext *this,FMassEntityQuery *param_1)

{
  TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass> *this_00;
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  ForElementType<FMassExecutionContext::FQueryTransientRuntime> FVar6;
  longlong lVar7;
  void *_Dst;
  uint uVar8;
  
  iVar5 = (this->QueriesStack).ArrayNum;
  uVar8 = iVar5 - 1;
  uVar4 = 0;
  if ((int)uVar8 < iVar5) {
    uVar4 = ~uVar8 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FVar6 = (this->QueriesStack).AllocatorInstance.SecondaryData;
  if (FVar6 == (ForElementType<FMassExecutionContext::FQueryTransientRuntime>)0x0) {
    FVar6 = (ForElementType<FMassExecutionContext::FQueryTransientRuntime>)&this->QueriesStack;
  }
  lVar7 = (longlong)(this->QueriesStack).ArrayNum * 0x98 + (longlong)FVar6;
  if (*(FMassEntityQuery **)(lVar7 + -0x98) != param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("&InQuery == RuntimeData.Query",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassExecutionContext.cpp"
                       ,0xaa,
                       L"Queries are stored in a stack and as such it requires elements to be added in LIFO order"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (&this->SubsystemAccess != (FMassSubsystemAccess *)(lVar7 + -0x90)) {
    TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->SubsystemAccess,
               (TBitArray<FDefaultBitArrayAllocator> *)(lVar7 + -0x90));
  }
  this_00 = &(this->SubsystemAccess).MutableSubsystemsBitSet;
  if ((TBitArray<FDefaultBitArrayAllocator> *)this_00 !=
      (TBitArray<FDefaultBitArrayAllocator> *)(lVar7 + -0x70)) {
    TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
              ((TBitArray<FDefaultBitArrayAllocator> *)this_00,
               (TBitArray<FDefaultBitArrayAllocator> *)(lVar7 + -0x70));
  }
  iVar5 = (this->QueriesStack).ArrayNum;
  uVar8 = iVar5 - 1;
  uVar4 = 0;
  if ((int)uVar8 < iVar5) {
    uVar4 = ~uVar8 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FVar6 = (this->QueriesStack).AllocatorInstance.SecondaryData;
  if (FVar6 == (ForElementType<FMassExecutionContext::FQueryTransientRuntime>)0x0) {
    FVar6 = (ForElementType<FMassExecutionContext::FQueryTransientRuntime>)&this->QueriesStack;
  }
  _Dst = (void *)((longlong)(int)uVar8 * 0x98 + (longlong)FVar6);
  if (*(void **)((longlong)_Dst + 0x38) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)_Dst + 0x38));
  }
  if (*(void **)((longlong)_Dst + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)_Dst + 0x18));
  }
  iVar5 = (this->QueriesStack).ArrayNum + ~uVar8;
  if (iVar5 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + 0x98),(longlong)iVar5 * 0x98);
  }
  piVar1 = &(this->QueriesStack).ArrayNum;
  *piVar1 = *piVar1 + -1;
  return;
}

// PushQuery @ 14723d7c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014723d9fb) */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

void __thiscall
FMassExecutionContext::PushQuery(FMassExecutionContext *this,FMassEntityQuery *param_1)

{
  TBitArray<FDefaultBitArrayAllocator> *this_00;
  TArray<FMassExecutionContext::FQueryTransientRuntime,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
  *pTVar1;
  int *piVar2;
  TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass> *pTVar3;
  FMassEntityManager *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  UMassProcessor *pUVar9;
  FEnvironment *pFVar10;
  uint uVar11;
  ForElementType<FMassExecutionContext::FQueryTransientRuntime> FVar12;
  TBitArray<FDefaultBitArrayAllocator> *_Dst;
  TBitArray<FDefaultBitArrayAllocator> *pTVar13;
  longlong lVar14;
  FMassSubsystemAccess *_Src;
  TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass> *_Src_00;
  undefined8 *puVar15;
  undefined1 auStack_178 [32];
  FMassEntityQuery **local_158;
  ForElementType<FMassExecutionContext::FQueryTransientRuntime> local_150;
  longlong local_148;
  longlong local_140;
  undefined8 local_138;
  FMassFragmentRequirementDescription *local_128;
  int iStack_120;
  undefined4 uStack_11c;
  undefined8 *local_118;
  FMassEntityManager *local_110;
  TArrayView<FMassFragmentRequirementDescription_const_,int> local_108;
  TArrayView<FMassFragmentRequirementDescription_const_,int> local_f8;
  TArrayView<FMassFragmentRequirementDescription_const_,int> local_e8;
  FMassEntityQuery *local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  void *local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  longlong local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 local_50;
  undefined8 local_4c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_178;
  pTVar1 = &this->QueriesStack;
  local_d8 = param_1;
  if (param_1 == (FMassEntityQuery *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  FVar12 = (this->QueriesStack).AllocatorInstance.SecondaryData;
  if (FVar12 == (ForElementType<FMassExecutionContext::FQueryTransientRuntime>)0x0) {
    FVar12 = (ForElementType<FMassExecutionContext::FQueryTransientRuntime>)pTVar1;
  }
  local_c0 = (void *)0x0;
  uStack_b8 = 0x8000000000;
  local_a0 = 0;
  uStack_98 = 0x8000000000;
  local_50 = 0;
  local_4c = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  if (((ulonglong)FVar12 <= &local_d8) &&
     (lVar14 = (longlong)(this->QueriesStack).ArrayMax,
     &local_d8 < (FMassEntityQuery **)(lVar14 * 0x98 + (longlong)FVar12))) {
    local_140 = (longlong)(this->QueriesStack).ArrayNum;
    local_138 = 0x98;
    local_158 = &local_d8;
    local_150 = FVar12;
    local_148 = lVar14;
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar7 = (this->QueriesStack).ArrayNum;
  piVar2 = &(this->QueriesStack).ArrayMax;
  if (iVar7 == *piVar2) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FMassExecutionContext::FQueryTransientRuntime>_>
                      (0x898,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->QueriesStack).ArrayNum = iVar7 + 1;
  FVar12 = (this->QueriesStack).AllocatorInstance.SecondaryData;
  if (FVar12 == (ForElementType<FMassExecutionContext::FQueryTransientRuntime>)0x0) {
    FVar12 = (ForElementType<FMassExecutionContext::FQueryTransientRuntime>)pTVar1;
  }
  puVar15 = (undefined8 *)((longlong)iVar7 * 0x98 + (longlong)FVar12);
  pTVar13 = (TBitArray<FDefaultBitArrayAllocator> *)(puVar15 + 1);
  *puVar15 = local_d8;
  puVar15[3] = 0;
  if (local_c0 == (void *)0x0) {
    memmove(pTVar13,&local_d0,0x10);
  }
  if ((void *)puVar15[3] != (void *)0x0) {
    FMemory::Free((void *)puVar15[3]);
  }
  this_00 = (TBitArray<FDefaultBitArrayAllocator> *)(puVar15 + 5);
  puVar15[3] = local_c0;
  local_c0 = (void *)0x0;
  *(undefined4 *)(puVar15 + 4) = (undefined4)uStack_b8;
  *(undefined4 *)((longlong)puVar15 + 0x24) = uStack_b8._4_4_;
  uStack_b8 = 0;
  puVar15[7] = 0;
  if (local_a0 == 0) {
    memmove(this_00,&local_b0,0x10);
  }
  if ((void *)puVar15[7] != (void *)0x0) {
    FMemory::Free((void *)puVar15[7]);
  }
  puVar15[7] = local_a0;
  *(undefined4 *)(puVar15 + 8) = (undefined4)uStack_98;
  *(undefined4 *)((longlong)puVar15 + 0x44) = uStack_98._4_4_;
  puVar15[9] = local_90;
  puVar15[10] = uStack_88;
  puVar15[0xb] = local_80;
  puVar15[0xc] = uStack_78;
  puVar15[0xd] = local_70;
  puVar15[0xe] = uStack_68;
  puVar15[0xf] = local_60;
  puVar15[0x10] = uStack_58;
  *(undefined1 *)(puVar15 + 0x11) = local_50;
  *(undefined4 *)((longlong)puVar15 + 0x8c) = (undefined4)local_4c;
  *(undefined4 *)(puVar15 + 0x12) = local_4c._4_4_;
  uStack_98 = 0;
  local_a0 = 0;
  if (local_c0 != (void *)0x0) {
    FMemory::Free(local_c0);
  }
  if ((int *)puVar15 != &(this->SharedFragmentViews).ArrayNum) {
    uVar11 = *(int *)&(this->SubsystemAccess).ConstSubsystemsBitSet.field_0x18 + 0x1fU & 0xffffffe0;
    *(undefined4 *)(puVar15 + 4) = 0;
    if ((*(int *)((longlong)puVar15 + 0x24) < (int)uVar11) ||
       (0x80 < *(int *)((longlong)puVar15 + 0x24))) {
      uVar8 = 0x80;
      if (0x80 < (int)uVar11) {
        uVar8 = uVar11;
      }
      *(uint *)((longlong)puVar15 + 0x24) = uVar8;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(pTVar13,0);
    }
    iVar7 = *(int *)&(this->SubsystemAccess).ConstSubsystemsBitSet.field_0x18;
    *(int *)(puVar15 + 4) = iVar7;
    if (iVar7 != 0) {
      _Src = *(FMassSubsystemAccess **)&(this->SubsystemAccess).ConstSubsystemsBitSet.field_0x10;
      if (_Src == (FMassSubsystemAccess *)0x0) {
        _Src = &this->SubsystemAccess;
      }
      _Dst = (TBitArray<FDefaultBitArrayAllocator> *)puVar15[3];
      if ((TBitArray<FDefaultBitArrayAllocator> *)puVar15[3] ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        _Dst = pTVar13;
      }
      memcpy(_Dst,_Src,(ulonglong)(iVar7 + 0x1fU >> 5) << 2);
    }
  }
  pTVar3 = &(this->SubsystemAccess).MutableSubsystemsBitSet;
  if (this_00 != (TBitArray<FDefaultBitArrayAllocator> *)pTVar3) {
    uVar11 = *(int *)&(this->SubsystemAccess).MutableSubsystemsBitSet.field_0x18 + 0x1fU &
             0xffffffe0;
    *(undefined4 *)(puVar15 + 8) = 0;
    if ((*(int *)((longlong)puVar15 + 0x44) < (int)uVar11) ||
       (0x80 < *(int *)((longlong)puVar15 + 0x44))) {
      uVar8 = 0x80;
      if (0x80 < (int)uVar11) {
        uVar8 = uVar11;
      }
      *(uint *)((longlong)puVar15 + 0x44) = uVar8;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(this_00,0);
    }
    iVar7 = *(int *)&(this->SubsystemAccess).MutableSubsystemsBitSet.field_0x18;
    *(int *)(puVar15 + 8) = iVar7;
    if (iVar7 != 0) {
      _Src_00 = *(TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>
                  **)&(this->SubsystemAccess).MutableSubsystemsBitSet.field_0x10;
      if (_Src_00 ==
          (TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass> *)
          0x0) {
        _Src_00 = pTVar3;
      }
      pTVar13 = (TBitArray<FDefaultBitArrayAllocator> *)puVar15[7];
      if ((TBitArray<FDefaultBitArrayAllocator> *)puVar15[7] ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar13 = this_00;
      }
      memcpy(pTVar13,_Src_00,(ulonglong)(iVar7 + 0x1fU >> 5) << 2);
    }
  }
  pFVar4 = (this->EntityManager).Object;
  pUVar9 = (UMassProcessor *)FWeakObjectPtr::Get(&(this->DebugProcessor).WeakPtr);
  bVar6 = FMassDebugger::HasAnyProcessorBreakpoints(pFVar4,pUVar9);
  *(bool *)(puVar15 + 0x11) = bVar6;
  if (((UE::Mass::Debug::FBreakpoint::bHasBreakpoint != false) &&
      (pFVar10 = FMassDebugger::GetActiveEnvironmentChecked(pFVar4),
      pFVar10->bHasBreakpoint != false)) &&
     (0 < *(int *)&(pFVar10->FragmentsWithBreakpoints).Elements.field_0x8 -
          *(int *)&(pFVar10->FragmentsWithBreakpoints).Elements.field_0x34)) {
    local_128 = (FMassFragmentRequirementDescription *)param_1->_padding_;
    iVar7 = (int)param_1->_padding_;
    local_118 = puVar15;
    local_110 = pFVar4;
    if ((iVar7 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    local_108._12_4_ = uStack_11c;
    local_108.ArrayNum = iVar7;
    local_108.DataPtr = local_128;
    iStack_120 = iVar7;
    `FMassExecutionContext::PushQuery'::__l5::<lambda_1>::operator()(&local_118,&local_108);
    local_128 = (FMassFragmentRequirementDescription *)param_1->_padding_;
    iVar7 = (int)param_1->_padding_;
    if ((iVar7 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    local_f8._12_4_ = uStack_11c;
    local_f8.ArrayNum = iVar7;
    local_f8.DataPtr = local_128;
    iStack_120 = iVar7;
    `FMassExecutionContext::PushQuery'::__l5::<lambda_1>::operator()(&local_118,&local_f8);
    local_128 = (FMassFragmentRequirementDescription *)param_1->_padding_;
    iVar7 = (int)param_1->_padding_;
    if ((iVar7 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    local_e8._12_4_ = uStack_11c;
    local_e8.ArrayNum = iVar7;
    local_e8.DataPtr = local_128;
    iStack_120 = iVar7;
    `FMassExecutionContext::PushQuery'::__l5::<lambda_1>::operator()(&local_118,&local_e8);
  }
  this->IteratorSerialNumberGenerator = this->IteratorSerialNumberGenerator + 1;
  *(uint *)(puVar15 + 0x12) = this->IteratorSerialNumberGenerator;
  return;
}

// SetEntityCollection @ 14724b9a0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
FMassExecutionContext::SetEntityCollection
          (FMassExecutionContext *this,FMassArchetypeEntityCollection *param_1)

{
  FMassArchetypeVersionedHandle *pFVar1;
  FMassArchetypeData *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  FMassArchetypeEntityCollection *pFVar6;
  FMassArchetypeVersionedHandle *pFVar7;
  
  if (((this->EntityCollection).Ranges.ArrayNum != 0) ||
     ((this->EntityCollection).Archetype.ArchetypeHandle.DataPtr.Object != (FMassArchetypeData *)0x0
     )) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("EntityCollection.IsEmpty()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassExecutionContext.cpp"
                       ,0x4f,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar1 = &param_1->Archetype;
  if ((((param_1->Ranges).ArrayNum != 0) ||
      ((pFVar1->ArchetypeHandle).DataPtr.Object != (FMassArchetypeData *)0x0)) &&
     ((pFVar2 = (pFVar1->ArchetypeHandle).DataPtr.Object, pFVar2 == (FMassArchetypeData *)0x0 ||
      (pFVar2->EntityOrderVersion != (param_1->Archetype).HandleVersion)))) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InEntityCollection.IsUpToDate()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassExecutionContext.cpp"
                       ,0x50,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar6 = &this->EntityCollection;
  if (pFVar6 != param_1) {
    pFVar3 = (pFVar6->Ranges).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar6->Ranges).AllocatorInstance.Data = (param_1->Ranges).AllocatorInstance.Data;
    (param_1->Ranges).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->EntityCollection).Ranges.ArrayNum = (param_1->Ranges).ArrayNum;
    (this->EntityCollection).Ranges.ArrayMax = (param_1->Ranges).ArrayMax;
    (param_1->Ranges).ArrayNum = 0;
    (param_1->Ranges).ArrayMax = 0;
  }
  pFVar7 = &(this->EntityCollection).Archetype;
  if (pFVar7 != pFVar1) {
    (pFVar7->ArchetypeHandle).DataPtr.Object = (pFVar1->ArchetypeHandle).DataPtr.Object;
    (pFVar1->ArchetypeHandle).DataPtr.Object = (FMassArchetypeData *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->EntityCollection).Archetype.ArchetypeHandle.DataPtr.SharedReferenceCount,
               &(param_1->Archetype).ArchetypeHandle.DataPtr.SharedReferenceCount);
  }
  (this->EntityCollection).Archetype.HandleVersion = (param_1->Archetype).HandleVersion;
  return;
}

// SetEntityCollection @ 14724bab0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
FMassExecutionContext::SetEntityCollection
          (FMassExecutionContext *this,FMassArchetypeEntityCollection *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (((this->EntityCollection).Ranges.ArrayNum != 0) ||
     ((this->EntityCollection).Archetype.ArchetypeHandle.DataPtr.Object != (FMassArchetypeData *)0x0
     )) {
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
  FMassArchetypeEntityCollection::operator=(&this->EntityCollection,param_1);
  return;
}

// SetFragmentRequirements @ 14724c010

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
FMassExecutionContext::SetFragmentRequirements
          (FMassExecutionContext *this,FMassFragmentRequirements *param_1)

{
  int *piVar1;
  TArray<FMassExecutionContext::TFragmentView<FStructView>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  *pTVar2;
  TArray<FMassExecutionContext::TFragmentView<FConstStructView>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  *pTVar3;
  ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_> FVar4;
  ForElementType<FMassExecutionContext::TFragmentView<FStructView>_> FVar5;
  ForElementType<FMassExecutionContext::TFragmentView<FConstStructView>_> FVar6;
  code *pcVar7;
  undefined8 uVar8;
  bool bVar9;
  int iVar10;
  longlong lVar11;
  ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_> FVar12;
  ForElementType<FMassExecutionContext::TFragmentView<FConstStructView>_> FVar13;
  ForElementType<FMassExecutionContext::TFragmentView<FStructView>_> FVar14;
  FScriptContainerElement *pFVar15;
  FScriptContainerElement *pFVar16;
  
  piVar1 = &(this->FragmentViews).ArrayMax;
  (this->FragmentViews).ArrayNum = 0;
  if (*piVar1 < 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_>_>
              (0x20,8,0,(ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_>
                         *)this,0,piVar1);
  }
  iVar10 = (param_1->FragmentRequirements).ArrayNum;
  pFVar15 = (param_1->FragmentRequirements).AllocatorInstance.Data;
  if ((iVar10 < 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar16 = pFVar15 + (longlong)iVar10 * 0x10;
  for (; pFVar15 != pFVar16; pFVar15 = pFVar15 + 0x10) {
    if (pFVar15[8] != (FScriptContainerElement)0x0) {
      iVar10 = (this->FragmentViews).ArrayNum;
      if (iVar10 == *piVar1) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_>_>
                           (0x820,(ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_>
                                   *)this,piVar1);
      }
      (this->FragmentViews).ArrayNum = iVar10 + 1;
      FVar4 = (this->FragmentViews).AllocatorInstance.SecondaryData;
      uVar8 = *(undefined8 *)(pFVar15 + 8);
      FVar12 = (ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_>
                )this;
      if (FVar4 != (ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_>
                    )0x0) {
        FVar12 = FVar4;
      }
      lVar11 = (longlong)iVar10 * 0x20;
      *(undefined8 *)(lVar11 + (longlong)FVar12) = *(undefined8 *)pFVar15;
      ((undefined8 *)(lVar11 + (longlong)FVar12))[1] = uVar8;
      *(undefined8 *)(lVar11 + 0x10 + (longlong)FVar12) = 0;
      *(undefined4 *)(lVar11 + 0x18 + (longlong)FVar12) = 0;
    }
  }
  pTVar2 = &this->ChunkFragmentViews;
  piVar1 = &(this->ChunkFragmentViews).ArrayMax;
  (this->ChunkFragmentViews).ArrayNum = 0;
  if (*piVar1 < 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FMassExecutionContext::TFragmentView<FStructView>_>_>
              (0x20,8,0,&pTVar2->AllocatorInstance,0,piVar1);
  }
  iVar10 = (param_1->ChunkFragmentRequirements).ArrayNum;
  pFVar15 = (param_1->ChunkFragmentRequirements).AllocatorInstance.Data;
  if ((iVar10 < 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar16 = pFVar15 + (longlong)iVar10 * 0x10;
  for (; pFVar15 != pFVar16; pFVar15 = pFVar15 + 0x10) {
    if (pFVar15[8] != (FScriptContainerElement)0x0) {
      iVar10 = (this->ChunkFragmentViews).ArrayNum;
      if (iVar10 == *piVar1) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FMassExecutionContext::TFragmentView<FStructView>_>_>
                           (0x820,&pTVar2->AllocatorInstance,piVar1);
      }
      (this->ChunkFragmentViews).ArrayNum = iVar10 + 1;
      FVar5 = (this->ChunkFragmentViews).AllocatorInstance.SecondaryData;
      uVar8 = *(undefined8 *)(pFVar15 + 8);
      FVar14 = (ForElementType<FMassExecutionContext::TFragmentView<FStructView>_>)pTVar2;
      if (FVar5 != (ForElementType<FMassExecutionContext::TFragmentView<FStructView>_>)0x0) {
        FVar14 = FVar5;
      }
      lVar11 = (longlong)iVar10 * 0x20;
      *(undefined8 *)(lVar11 + (longlong)FVar14) = *(undefined8 *)pFVar15;
      ((undefined8 *)(lVar11 + (longlong)FVar14))[1] = uVar8;
      *(undefined8 *)(lVar11 + 0x10 + (longlong)FVar14) = 0;
      *(undefined8 *)(lVar11 + 0x18 + (longlong)FVar14) = 0;
    }
  }
  pTVar3 = &this->ConstSharedFragmentViews;
  piVar1 = &(this->ConstSharedFragmentViews).ArrayMax;
  (this->ConstSharedFragmentViews).ArrayNum = 0;
  if (*piVar1 < 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FMassExecutionContext::TFragmentView<FConstStructView>_>_>
              (0x20,8,0,&pTVar3->AllocatorInstance,0,piVar1);
  }
  iVar10 = (param_1->ConstSharedFragmentRequirements).ArrayNum;
  pFVar15 = (param_1->ConstSharedFragmentRequirements).AllocatorInstance.Data;
  if ((iVar10 < 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar16 = pFVar15 + (longlong)iVar10 * 0x10;
  for (; pFVar15 != pFVar16; pFVar15 = pFVar15 + 0x10) {
    if (pFVar15[8] != (FScriptContainerElement)0x0) {
      iVar10 = (this->ConstSharedFragmentViews).ArrayNum;
      if (iVar10 == *piVar1) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FMassExecutionContext::TFragmentView<FConstStructView>_>_>
                           (0x820,&pTVar3->AllocatorInstance,piVar1);
      }
      (this->ConstSharedFragmentViews).ArrayNum = iVar10 + 1;
      FVar6 = (this->ConstSharedFragmentViews).AllocatorInstance.SecondaryData;
      uVar8 = *(undefined8 *)(pFVar15 + 8);
      FVar13 = (ForElementType<FMassExecutionContext::TFragmentView<FConstStructView>_>)pTVar3;
      if (FVar6 != (ForElementType<FMassExecutionContext::TFragmentView<FConstStructView>_>)0x0) {
        FVar13 = FVar6;
      }
      lVar11 = (longlong)iVar10 * 0x20;
      *(undefined8 *)(lVar11 + (longlong)FVar13) = *(undefined8 *)pFVar15;
      ((undefined8 *)(lVar11 + (longlong)FVar13))[1] = uVar8;
      *(undefined8 *)(lVar11 + 0x10 + (longlong)FVar13) = 0;
      *(undefined8 *)(lVar11 + 0x18 + (longlong)FVar13) = 0;
    }
  }
  pTVar2 = &this->SharedFragmentViews;
  piVar1 = &(this->SharedFragmentViews).ArrayMax;
  (this->SharedFragmentViews).ArrayNum = 0;
  if (*piVar1 < 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FMassExecutionContext::TFragmentView<FStructView>_>_>
              (0x20,8,0,&pTVar2->AllocatorInstance,0,piVar1);
  }
  iVar10 = (param_1->SharedFragmentRequirements).ArrayNum;
  pFVar15 = (param_1->SharedFragmentRequirements).AllocatorInstance.Data;
  if ((iVar10 < 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar16 = pFVar15 + (longlong)iVar10 * 0x10;
  for (; pFVar15 != pFVar16; pFVar15 = pFVar15 + 0x10) {
    if (pFVar15[8] != (FScriptContainerElement)0x0) {
      iVar10 = (this->SharedFragmentViews).ArrayNum;
      if (iVar10 == *piVar1) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FMassExecutionContext::TFragmentView<FStructView>_>_>
                           (0x820,&pTVar2->AllocatorInstance,piVar1);
      }
      (this->SharedFragmentViews).ArrayNum = iVar10 + 1;
      FVar5 = (this->SharedFragmentViews).AllocatorInstance.SecondaryData;
      uVar8 = *(undefined8 *)(pFVar15 + 8);
      FVar14 = (ForElementType<FMassExecutionContext::TFragmentView<FStructView>_>)pTVar2;
      if (FVar5 != (ForElementType<FMassExecutionContext::TFragmentView<FStructView>_>)0x0) {
        FVar14 = FVar5;
      }
      lVar11 = (longlong)iVar10 * 0x20;
      *(undefined8 *)(lVar11 + (longlong)FVar14) = *(undefined8 *)pFVar15;
      ((undefined8 *)(lVar11 + (longlong)FVar14))[1] = uVar8;
      *(undefined8 *)(lVar11 + 0x10 + (longlong)FVar14) = 0;
      *(undefined8 *)(lVar11 + 0x18 + (longlong)FVar14) = 0;
    }
  }
  return;
}

// operator() @ 150502060

bool __thiscall
`FMassExecutionContext::FMassExecutionContext'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3043274449961877470>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3043274449961877470>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1505020e0

bool __thiscall
`FMassExecutionContext::~FMassExecutionContext'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3043274449961877463>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3043274449961877463>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

