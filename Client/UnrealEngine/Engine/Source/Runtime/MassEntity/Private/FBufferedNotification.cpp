// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntity
// Functions: 4

// AppendEntities<FMassArchetypeEntityCollection_const_&> @ 1471befb0

void __thiscall
UE::Mass::ObserverManager::FBufferedNotification::
AppendEntities<FMassArchetypeEntityCollection_const_&>
          (FBufferedNotification *this,FMassArchetypeEntityCollection *param_1)

{
  int *piVar1;
  TVariant<UE::Mass::FEntityCollection,FMassEntityHandle> *this_00;
  uchar uVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FEntityCollection *this_01;
  
  this_00 = &this->AffectedEntities;
  uVar2 = (this->AffectedEntities).TypeIndex;
  this_01 = (FEntityCollection *)this_00;
  if (uVar2 != '\0') {
    this_01 = (FEntityCollection *)0x0;
  }
  if (this_01 == (FEntityCollection *)0x0) {
    if (uVar2 != '\x01') {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    lVar3 = this_00->_padding_;
    TVariant<UE::Mass::FEntityCollection,FMassEntityHandle>::
    Emplace<UE::Mass::FEntityCollection,FMassArchetypeEntityCollection_const_&>(this_00,param_1);
    if ((this->AffectedEntities).TypeIndex != '\0') {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar6 = (int)(this->AffectedEntities)._padding_;
    piVar1 = (int *)((longlong)&(this->AffectedEntities)._padding_ + 4);
    if (iVar6 == *piVar1) {
      iVar6 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)this_00,piVar1);
    }
    *(int *)&(this->AffectedEntities)._padding_ = iVar6 + 1;
    *(longlong *)(this_00->_padding_ + (longlong)iVar6 * 8) = lVar3;
    FEntityCollection::MarkDirty((FEntityCollection *)this_00);
    *(undefined4 *)&(this->AffectedEntities)._padding_ = 1;
  }
  else if (((param_1->Ranges).ArrayNum != 0) ||
          ((param_1->Archetype).ArchetypeHandle.DataPtr.Object != (FMassArchetypeData *)0x0)) {
    iVar6 = (this_01->EntityHandles).ArrayNum;
    bVar5 = FMassArchetypeEntityCollection::ExportEntityHandles(param_1,&this_01->EntityHandles);
    if (bVar5) {
      FEntityCollection::ConditionallyStoreCollection<FMassArchetypeEntityCollection_const_&>
                (this_01,iVar6 == 0,param_1);
      return;
    }
  }
  return;
}

// ConvertStoredHandleToCollection<TArrayView<FMassEntityHandle_const_,int>_const_&> @ 1471c1670

FEntityCollection * __thiscall
UE::Mass::ObserverManager::FBufferedNotification::
ConvertStoredHandleToCollection<TArrayView<FMassEntityHandle_const_,int>_const_&>
          (FBufferedNotification *this,TArrayView<FMassEntityHandle_const_,int> *param_1)

{
  int *piVar1;
  TVariant<UE::Mass::FEntityCollection,FMassEntityHandle> *this_00;
  longlong lVar2;
  code *pcVar3;
  FMassEntityHandle *_Src;
  bool bVar4;
  int iVar5;
  FEntityCollection *pFVar6;
  ulonglong uVar7;
  
  this_00 = &this->AffectedEntities;
  if ((this->AffectedEntities).TypeIndex != '\x01') {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index == TypeIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                       ,0x97,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FEntityCollection *)(*pcVar3)();
      return pFVar6;
    }
  }
  uVar7 = (ulonglong)(this->AffectedEntities).TypeIndex;
  lVar2 = this_00->_padding_;
  if (1 < uVar7) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FEntityCollection *)(*pcVar3)();
      return pFVar6;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Mass::FEntityCollection,FMassEntityHandle>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[uVar7])(this_00);
  _Src = param_1->DataPtr;
  iVar5 = param_1->ArrayNum;
  piVar1 = (int *)((longlong)&(this->AffectedEntities)._padding_ + 4);
  this_00->_padding_ = 0;
  *(int *)&(this->AffectedEntities)._padding_ = iVar5;
  if (iVar5 == 0) {
    *piVar1 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar5,0,(ForAnyElementType *)this_00,iVar5,piVar1);
    memcpy((void *)this_00->_padding_,_Src,(longlong)iVar5 << 3);
  }
  (this->AffectedEntities)._padding_ = 0;
  (this->AffectedEntities)._padding_ = 0;
  *(undefined4 *)&(this->AffectedEntities)._padding_ = 0;
  (this->AffectedEntities).TypeIndex = '\0';
  iVar5 = (int)(this->AffectedEntities)._padding_;
  if (iVar5 == *piVar1) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)this_00,piVar1);
  }
  *(int *)&(this->AffectedEntities)._padding_ = iVar5 + 1;
  *(longlong *)(this_00->_padding_ + (longlong)iVar5 * 8) = lVar2;
  FEntityCollection::MarkDirty((FEntityCollection *)this_00);
  *(undefined4 *)&(this->AffectedEntities)._padding_ = 1;
  return (FEntityCollection *)this_00;
}

// AddHandle @ 1471ee470

void __thiscall
UE::Mass::ObserverManager::FBufferedNotification::AddHandle
          (FBufferedNotification *this,FMassEntityHandle param_1)

{
  int *piVar1;
  TVariant<UE::Mass::FEntityCollection,FMassEntityHandle> *this_00;
  uchar uVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  ulonglong uVar7;
  FEntityCollection *this_01;
  
  uVar2 = (this->AffectedEntities).TypeIndex;
  this_00 = &this->AffectedEntities;
  this_01 = (FEntityCollection *)this_00;
  if (uVar2 != '\0') {
    this_01 = (FEntityCollection *)0x0;
  }
  if (this_01 == (FEntityCollection *)0x0) {
    if (uVar2 != '\x01') {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    uVar7 = (ulonglong)(this->AffectedEntities).TypeIndex;
    lVar3 = this_00->_padding_;
    if (1 < uVar7) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Mass::FEntityCollection,FMassEntityHandle>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar7])(this_00);
    this_00->_padding_ = 0;
    piVar1 = (int *)((longlong)&(this->AffectedEntities)._padding_ + 4);
    *piVar1 = 0;
    *(undefined4 *)&(this->AffectedEntities)._padding_ = 0;
    (this->AffectedEntities)._padding_ = 0;
    (this->AffectedEntities)._padding_ = 0;
    *(undefined4 *)&(this->AffectedEntities)._padding_ = 0;
    (this->AffectedEntities).TypeIndex = '\0';
    iVar6 = (int)(this->AffectedEntities)._padding_;
    if (iVar6 == *piVar1) {
      iVar6 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)this_00,piVar1);
    }
    *(int *)&(this->AffectedEntities)._padding_ = iVar6 + 1;
    *(longlong *)(this_00->_padding_ + (longlong)iVar6 * 8) = lVar3;
    FEntityCollection::MarkDirty((FEntityCollection *)this_00);
    *(undefined4 *)&(this->AffectedEntities)._padding_ = 1;
    this_01 = (FEntityCollection *)this_00;
  }
  iVar6 = (this_01->EntityHandles).ArrayNum;
  piVar1 = &(this_01->EntityHandles).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)this_01,piVar1);
  }
  (this_01->EntityHandles).ArrayNum = iVar6 + 1;
  *(FMassEntityHandle *)((this_01->EntityHandles).AllocatorInstance.Data + (longlong)iVar6 * 8) =
       param_1;
  FEntityCollection::MarkDirty(this_01);
  this_01->CollectionCreationDuplicatesHandling = FoldDuplicates;
  return;
}

// AreCompositionsEqual @ 1471f3f00

bool __cdecl
UE::Mass::ObserverManager::FBufferedNotification::AreCompositionsEqual
          (TVariant<UE::Mass::ObserverManager::FBufferedNotification::FEmptyComposition,FMassArchetypeCompositionDescriptor,TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>_>
           *param_1,
          TVariant<UE::Mass::ObserverManager::FBufferedNotification::FEmptyComposition,FMassArchetypeCompositionDescriptor,TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>_>
          *param_2)

{
  uchar uVar1;
  bool bVar2;
  TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct> *this;
  TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct> *pTVar3;
  TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct> *this_00;
  TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct> *pTVar4;
  FMassArchetypeCompositionDescriptor *this_01;
  FMassArchetypeCompositionDescriptor *pFVar5;
  
  uVar1 = param_1->TypeIndex;
  if (uVar1 == param_2->TypeIndex) {
    if (uVar1 == '\0') {
      return true;
    }
    if (uVar1 == '\x01') {
      this_01 = TVariant<UE::Mass::ObserverManager::FBufferedNotification::FEmptyComposition,FMassArchetypeCompositionDescriptor,TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>_>
                ::Get<FMassArchetypeCompositionDescriptor>(param_1);
      pFVar5 = TVariant<UE::Mass::ObserverManager::FBufferedNotification::FEmptyComposition,FMassArchetypeCompositionDescriptor,TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>_>
               ::Get<FMassArchetypeCompositionDescriptor>(param_2);
      bVar2 = FStructTypeBitSet::FConstBitSetContainer::operator==
                        ((FConstBitSetContainer *)this_01,(FConstBitSetContainer *)pFVar5);
      if ((((bVar2) &&
           (bVar2 = FStructTypeBitSet::FConstBitSetContainer::operator==
                              ((FConstBitSetContainer *)&this_01->Tags,
                               (FConstBitSetContainer *)&pFVar5->Tags), bVar2)) &&
          (bVar2 = FStructTypeBitSet::FConstBitSetContainer::operator==
                             ((FConstBitSetContainer *)&this_01->ChunkFragments,
                              (FConstBitSetContainer *)&pFVar5->ChunkFragments), bVar2)) &&
         ((bVar2 = FStructTypeBitSet::FConstBitSetContainer::operator==
                             ((FConstBitSetContainer *)&this_01->SharedFragments,
                              (FConstBitSetContainer *)&pFVar5->SharedFragments), bVar2 &&
          (bVar2 = FStructTypeBitSet::FConstBitSetContainer::operator==
                             ((FConstBitSetContainer *)&this_01->ConstSharedFragments,
                              (FConstBitSetContainer *)&pFVar5->ConstSharedFragments), bVar2)))) {
        return true;
      }
    }
    else {
      if (uVar1 == '\x02') {
        this_00 = TVariant<UE::Mass::ObserverManager::FBufferedNotification::FEmptyComposition,FMassArchetypeCompositionDescriptor,TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>_>
                  ::
                  Get<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>_>
                            (param_1);
        pTVar4 = TVariant<UE::Mass::ObserverManager::FBufferedNotification::FEmptyComposition,FMassArchetypeCompositionDescriptor,TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>_>
                 ::
                 Get<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>_>
                           (param_2);
        bVar2 = FStructTypeBitSet::FConstBitSetContainer::operator==
                          ((FConstBitSetContainer *)this_00,(FConstBitSetContainer *)pTVar4);
        return bVar2;
      }
      if (uVar1 == '\x03') {
        this = TVariant<UE::Mass::ObserverManager::FBufferedNotification::FEmptyComposition,FMassArchetypeCompositionDescriptor,TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>_>
               ::Get<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>_>
                         (param_1);
        pTVar3 = TVariant<UE::Mass::ObserverManager::FBufferedNotification::FEmptyComposition,FMassArchetypeCompositionDescriptor,TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>_>
                 ::
                 Get<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>_>
                           (param_2);
        bVar2 = FStructTypeBitSet::FConstBitSetContainer::operator==
                          ((FConstBitSetContainer *)this,(FConstBitSetContainer *)pTVar3);
        return bVar2;
      }
    }
  }
  return false;
}

