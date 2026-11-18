// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntity
// Functions: 2

// FScopedEntityQueryContext @ 1471dc290

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FScopedEntityQueryContext * __thiscall
FScopedEntityQueryContext::FScopedEntityQueryContext
          (FScopedEntityQueryContext *this,FMassEntityQuery *param_1,FMassExecutionContext *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  FScopedEntityQueryContext *pFVar4;
  TArrayView<FMassFragmentRequirementDescription_const_,int> *pTVar5;
  FMassRequirementAccessDetector *this_00;
  TArrayView<FMassFragmentRequirementDescription_const_,int> local_88;
  TArrayView<FMassFragmentRequirementDescription_const_,int> local_78;
  TArrayView<FMassFragmentRequirementDescription_const_,int> local_68;
  TArrayView<FMassFragmentRequirementDescription_const_,int> local_58;
  TArrayView<FMassFragmentRequirementDescription_const_,int> local_48;
  TArrayView<FMassFragmentRequirementDescription_const_,int> local_38;
  TArrayView<FMassFragmentRequirementDescription_const_,int> local_28;
  TArrayView<FMassFragmentRequirementDescription_const_,int> local_18;
  
  this->CachedExecutionContext = param_2;
  this->Query = param_1;
  (this->ScopedAccessDetector).EntityManager.Object = (FMassEntityManager *)param_1->_padding_;
  pTVar1 = (TReferenceControllerBase<1> *)param_1->_padding_;
  (this->ScopedAccessDetector).EntityManager.SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  (this->ScopedAccessDetector).Query = param_1;
  if ((this->ScopedAccessDetector).EntityManager.Object == (FMassEntityManager *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FScopedEntityQueryContext *)(*pcVar2)();
      return pFVar4;
    }
  }
  this_00 = &((this->ScopedAccessDetector).EntityManager.Object)->RequirementAccessDetector;
  if (UE::Mass::Private::bTrackRequirementsAccess != false) {
    FMassRequirementAccessDetector::
    Operation<TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>_>
              (this_00,(TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>
                        *)&param_1->_padding_,(pmf_6fcdee88)0x1471eb370);
    FMassRequirementAccessDetector::
    Operation<TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>_>
              (this_00,(TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>
                        *)&param_1->_padding_,(pmf_6fcdee88)0x1471eb3d0);
    pTVar5 = TArrayView<FMassFragmentRequirementDescription_const_,int>::
             TArrayView<FMassFragmentRequirementDescription_const_,int><TArray<FMassFragmentRequirementDescription,TSizedDefaultAllocator<32>_>_const_&,TArray<FMassFragmentRequirementDescription,TSizedDefaultAllocator<32>_>_>
                       (&local_48,
                        (TArray<FMassFragmentRequirementDescription,TSizedDefaultAllocator<32>_> *)
                        param_1);
    local_88.DataPtr = pTVar5->DataPtr;
    local_88.ArrayNum = pTVar5->ArrayNum;
    local_88._12_4_ = *(undefined4 *)&pTVar5->field_0xc;
    FMassRequirementAccessDetector::Aquire(this_00,&local_88);
    pTVar5 = TArrayView<FMassFragmentRequirementDescription_const_,int>::
             TArrayView<FMassFragmentRequirementDescription_const_,int><TArray<FMassFragmentRequirementDescription,TSizedDefaultAllocator<32>_>_const_&,TArray<FMassFragmentRequirementDescription,TSizedDefaultAllocator<32>_>_>
                       (&local_38,
                        (TArray<FMassFragmentRequirementDescription,TSizedDefaultAllocator<32>_> *)
                        &param_1->_padding_);
    local_78.DataPtr = pTVar5->DataPtr;
    local_78.ArrayNum = pTVar5->ArrayNum;
    local_78._12_4_ = *(undefined4 *)&pTVar5->field_0xc;
    FMassRequirementAccessDetector::Aquire(this_00,&local_78);
    pTVar5 = TArrayView<FMassFragmentRequirementDescription_const_,int>::
             TArrayView<FMassFragmentRequirementDescription_const_,int><TArray<FMassFragmentRequirementDescription,TSizedDefaultAllocator<32>_>_const_&,TArray<FMassFragmentRequirementDescription,TSizedDefaultAllocator<32>_>_>
                       (&local_28,
                        (TArray<FMassFragmentRequirementDescription,TSizedDefaultAllocator<32>_> *)
                        &param_1->_padding_);
    local_68.DataPtr = pTVar5->DataPtr;
    local_68.ArrayNum = pTVar5->ArrayNum;
    local_68._12_4_ = *(undefined4 *)&pTVar5->field_0xc;
    FMassRequirementAccessDetector::Aquire(this_00,&local_68);
    pTVar5 = TArrayView<FMassFragmentRequirementDescription_const_,int>::
             TArrayView<FMassFragmentRequirementDescription_const_,int><TArray<FMassFragmentRequirementDescription,TSizedDefaultAllocator<32>_>_const_&,TArray<FMassFragmentRequirementDescription,TSizedDefaultAllocator<32>_>_>
                       (&local_18,
                        (TArray<FMassFragmentRequirementDescription,TSizedDefaultAllocator<32>_> *)
                        &param_1->_padding_);
    local_58.DataPtr = pTVar5->DataPtr;
    local_58.ArrayNum = pTVar5->ArrayNum;
    local_58._12_4_ = *(undefined4 *)&pTVar5->field_0xc;
    FMassRequirementAccessDetector::Aquire(this_00,&local_58);
  }
  FMassExecutionContext::PushQuery(this->CachedExecutionContext,param_1);
  bVar3 = FMassSubsystemAccess::CacheSubsystemRequirements
                    (&this->CachedExecutionContext->SubsystemAccess,
                     (FMassSubsystemRequirements *)&param_1->_padding_);
  this->bSubsystemRequirementsCached = bVar3;
  return this;
}

// ~FScopedEntityQueryContext @ 1471e08b0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
FScopedEntityQueryContext::~FScopedEntityQueryContext(FScopedEntityQueryContext *this)

{
  int *piVar1;
  FMassExecutionContext *pFVar2;
  uint uStack_c;
  
  if (this->bSubsystemRequirementsCached != false) {
    pFVar2 = this->CachedExecutionContext;
    piVar1 = &(pFVar2->FragmentViews).ArrayMax;
    (pFVar2->FragmentViews).ArrayNum = 0;
    if (*piVar1 < 0) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_>_>
                (0x20,8,0,(ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_>
                           *)pFVar2,0,piVar1);
    }
    piVar1 = &(pFVar2->ChunkFragmentViews).ArrayMax;
    (pFVar2->ChunkFragmentViews).ArrayNum = 0;
    if (*piVar1 < 0) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FMassExecutionContext::TFragmentView<FStructView>_>_>
                (0x20,8,0,&(pFVar2->ChunkFragmentViews).AllocatorInstance,0,piVar1);
    }
    piVar1 = &(pFVar2->ConstSharedFragmentViews).ArrayMax;
    (pFVar2->ConstSharedFragmentViews).ArrayNum = 0;
    if (*piVar1 < 0) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FMassExecutionContext::TFragmentView<FConstStructView>_>_>
                (0x20,8,0,&(pFVar2->ConstSharedFragmentViews).AllocatorInstance,0,piVar1);
    }
    piVar1 = &(pFVar2->SharedFragmentViews).ArrayMax;
    (pFVar2->SharedFragmentViews).ArrayNum = 0;
    if (*piVar1 < 0) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FMassExecutionContext::TFragmentView<FStructView>_>_>
                (0x20,8,0,&(pFVar2->SharedFragmentViews).AllocatorInstance,0,piVar1);
    }
    *(undefined4 *)&(pFVar2->CurrentArchetypeCompositionDescriptor).Fragments.field_0x18 = 0;
    *(undefined4 *)&(pFVar2->CurrentArchetypeCompositionDescriptor).Tags.field_0x18 = 0;
    *(undefined4 *)&(pFVar2->CurrentArchetypeCompositionDescriptor).ChunkFragments.field_0x18 = 0;
    *(undefined4 *)&(pFVar2->CurrentArchetypeCompositionDescriptor).SharedFragments.field_0x18 = 0;
    *(undefined4 *)&(pFVar2->CurrentArchetypeCompositionDescriptor).ConstSharedFragments.field_0x18
         = 0;
    (pFVar2->DebugColor).field0_0x0.Bits = 0;
    pFVar2->ChunkSerialModificationNumber = -1;
    (pFVar2->EntityListView).DataPtr = (FMassEntityHandle *)0x0;
    *(ulonglong *)&(pFVar2->EntityListView).ArrayNum = (ulonglong)uStack_c << 0x20;
    pFVar2 = this->CachedExecutionContext;
    if ((pFVar2->bFlushDeferredCommands != false) &&
       ((pFVar2->DeferredCommandBuffer).Object != (FMassCommandBuffer *)0x0)) {
      FMassEntityManager::FlushCommands
                ((pFVar2->EntityManager).Object,&pFVar2->DeferredCommandBuffer);
    }
  }
  FMassExecutionContext::PopQuery(this->CachedExecutionContext,this->Query);
  UE::Mass::Debug::FScopedRequirementAccessDetector::~FScopedRequirementAccessDetector
            (&this->ScopedAccessDetector);
  return;
}

