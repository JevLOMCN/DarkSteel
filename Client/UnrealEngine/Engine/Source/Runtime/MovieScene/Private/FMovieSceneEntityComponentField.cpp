// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 12

// FMovieSceneEntityComponentField @ 1460935d0

FMovieSceneEntityComponentField * __thiscall
FMovieSceneEntityComponentField::FMovieSceneEntityComponentField
          (FMovieSceneEntityComponentField *this,FMovieSceneEntityComponentField *param_1)

{
  FMovieSceneEvaluationFieldEntityTree::FMovieSceneEvaluationFieldEntityTree
            (&this->PersistentEntityTree,&param_1->PersistentEntityTree);
  FMovieSceneEvaluationFieldEntityTree::FMovieSceneEvaluationFieldEntityTree
            (&this->OneShotEntityTree,&param_1->OneShotEntityTree);
  (this->Entities).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Entities).AllocatorInstance.Data = (param_1->Entities).AllocatorInstance.Data;
  (param_1->Entities).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Entities).ArrayNum = (param_1->Entities).ArrayNum;
  (this->Entities).ArrayMax = (param_1->Entities).ArrayMax;
  (param_1->Entities).ArrayNum = 0;
  (param_1->Entities).ArrayMax = 0;
  (this->EntityMetaData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EntityMetaData).AllocatorInstance.Data = (param_1->EntityMetaData).AllocatorInstance.Data;
  (param_1->EntityMetaData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EntityMetaData).ArrayNum = (param_1->EntityMetaData).ArrayNum;
  (this->EntityMetaData).ArrayMax = (param_1->EntityMetaData).ArrayMax;
  (param_1->EntityMetaData).ArrayNum = 0;
  (param_1->EntityMetaData).ArrayMax = 0;
  (this->SharedMetaData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SharedMetaData).AllocatorInstance.Data = (param_1->SharedMetaData).AllocatorInstance.Data;
  (param_1->SharedMetaData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SharedMetaData).ArrayNum = (param_1->SharedMetaData).ArrayNum;
  (this->SharedMetaData).ArrayMax = (param_1->SharedMetaData).ArrayMax;
  (param_1->SharedMetaData).ArrayNum = 0;
  (param_1->SharedMetaData).ArrayMax = 0;
  return this;
}

// FMovieSceneEntityComponentField @ 1460936c0

FMovieSceneEntityComponentField * __thiscall
FMovieSceneEntityComponentField::FMovieSceneEntityComponentField
          (FMovieSceneEntityComponentField *this)

{
  uint local_res8;
  uint local_res10;
  
  local_res8 = CONCAT31(local_res8._1_3_,2);
  (this->PersistentEntityTree).SerializedData._padding_ = (ulonglong)local_res8;
  local_res10 = CONCAT31(local_res10._1_3_,2);
  (this->PersistentEntityTree).SerializedData._padding_ = (ulonglong)local_res10;
  (this->PersistentEntityTree).SerializedData._padding_ = -1;
  (this->PersistentEntityTree).SerializedData._padding_ = -1;
  (this->PersistentEntityTree).SerializedData._padding_ = 0;
  (this->PersistentEntityTree).SerializedData._padding_ = 0;
  (this->PersistentEntityTree).SerializedData._padding_ = 0;
  (this->PersistentEntityTree).SerializedData._padding_ = 0;
  (this->PersistentEntityTree).SerializedData.Data.Entries.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PersistentEntityTree).SerializedData.Data.Entries.ArrayNum = 0;
  (this->PersistentEntityTree).SerializedData.Data.Entries.ArrayMax = 0;
  (this->PersistentEntityTree).SerializedData.Data.Items.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PersistentEntityTree).SerializedData.Data.Items.ArrayNum = 0;
  (this->PersistentEntityTree).SerializedData.Data.Items.ArrayMax = 0;
  local_res8 = CONCAT31(local_res8._1_3_,2);
  (this->OneShotEntityTree).SerializedData._padding_ = (ulonglong)local_res8;
  local_res10 = CONCAT31(local_res10._1_3_,2);
  (this->OneShotEntityTree).SerializedData._padding_ = (ulonglong)local_res10;
  (this->OneShotEntityTree).SerializedData._padding_ = -1;
  (this->OneShotEntityTree).SerializedData._padding_ = -1;
  (this->OneShotEntityTree).SerializedData._padding_ = 0;
  (this->OneShotEntityTree).SerializedData._padding_ = 0;
  (this->OneShotEntityTree).SerializedData._padding_ = 0;
  (this->OneShotEntityTree).SerializedData._padding_ = 0;
  (this->OneShotEntityTree).SerializedData.Data.Entries.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->OneShotEntityTree).SerializedData.Data.Entries.ArrayNum = 0;
  (this->OneShotEntityTree).SerializedData.Data.Entries.ArrayMax = 0;
  (this->OneShotEntityTree).SerializedData.Data.Items.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->OneShotEntityTree).SerializedData.Data.Items.ArrayNum = 0;
  (this->OneShotEntityTree).SerializedData.Data.Items.ArrayMax = 0;
  (this->Entities).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Entities).ArrayNum = 0;
  (this->Entities).ArrayMax = 0;
  (this->EntityMetaData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EntityMetaData).ArrayNum = 0;
  (this->EntityMetaData).ArrayMax = 0;
  (this->SharedMetaData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SharedMetaData).ArrayNum = 0;
  (this->SharedMetaData).ArrayMax = 0;
  return this;
}

// ~FMovieSceneEntityComponentField @ 146097a60

void __thiscall
FMovieSceneEntityComponentField::~FMovieSceneEntityComponentField
          (FMovieSceneEntityComponentField *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  pFVar1 = (this->SharedMetaData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FMovieSceneEvaluationFieldEntityMetaData,int>
            ((FMovieSceneEvaluationFieldEntityMetaData *)
             (this->EntityMetaData).AllocatorInstance.Data,(this->EntityMetaData).ArrayNum);
  pFVar1 = (this->EntityMetaData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Entities).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->OneShotEntityTree).SerializedData.Data.Items.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->OneShotEntityTree).SerializedData.Data.Entries.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = (void *)(this->OneShotEntityTree).SerializedData._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pvVar2 = (void *)(this->OneShotEntityTree).SerializedData._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pFVar1 = (this->PersistentEntityTree).SerializedData.Data.Items.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PersistentEntityTree).SerializedData.Data.Entries.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = (void *)(this->PersistentEntityTree).SerializedData._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pvVar2 = (void *)(this->PersistentEntityTree).SerializedData._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
    return;
  }
  return;
}

// operator= @ 146099c10

FMovieSceneEntityComponentField * __thiscall
FMovieSceneEntityComponentField::operator=
          (FMovieSceneEntityComponentField *this,FMovieSceneEntityComponentField *param_1)

{
  TArray<FMovieSceneEvaluationFieldEntity,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FMovieSceneEvaluationFieldEntity,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FMovieSceneEvaluationFieldEntityMetaData,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FMovieSceneEvaluationFieldEntityMetaData,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<FMovieSceneEvaluationFieldSharedEntityMetaData,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<FMovieSceneEvaluationFieldSharedEntityMetaData,TSizedDefaultAllocator<32>_> *pTVar6;
  FScriptContainerElement *pFVar7;
  
  FMovieSceneEvaluationFieldEntityTree::operator=
            (&this->PersistentEntityTree,&param_1->PersistentEntityTree);
  FMovieSceneEvaluationFieldEntityTree::operator=
            (&this->OneShotEntityTree,&param_1->OneShotEntityTree);
  pTVar1 = &param_1->Entities;
  pTVar2 = &this->Entities;
  if (pTVar2 != pTVar1) {
    pFVar7 = (pTVar2->AllocatorInstance).Data;
    if (pFVar7 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar7);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->Entities).ArrayNum = (param_1->Entities).ArrayNum;
    (this->Entities).ArrayMax = (param_1->Entities).ArrayMax;
    (param_1->Entities).ArrayNum = 0;
    (param_1->Entities).ArrayMax = 0;
  }
  pTVar3 = &param_1->EntityMetaData;
  pTVar4 = &this->EntityMetaData;
  if (pTVar4 != pTVar3) {
    DestructItems<FMovieSceneEvaluationFieldEntityMetaData,int>
              ((FMovieSceneEvaluationFieldEntityMetaData *)(pTVar4->AllocatorInstance).Data,
               (this->EntityMetaData).ArrayNum);
    pFVar7 = (pTVar4->AllocatorInstance).Data;
    if (pFVar7 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar7);
    }
    (pTVar4->AllocatorInstance).Data = (pTVar3->AllocatorInstance).Data;
    (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->EntityMetaData).ArrayNum = (param_1->EntityMetaData).ArrayNum;
    (this->EntityMetaData).ArrayMax = (param_1->EntityMetaData).ArrayMax;
    (param_1->EntityMetaData).ArrayNum = 0;
    (param_1->EntityMetaData).ArrayMax = 0;
  }
  pTVar5 = &param_1->SharedMetaData;
  pTVar6 = &this->SharedMetaData;
  if (pTVar6 != pTVar5) {
    pFVar7 = (pTVar6->AllocatorInstance).Data;
    if (pFVar7 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar7);
    }
    (pTVar6->AllocatorInstance).Data = (pTVar5->AllocatorInstance).Data;
    (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->SharedMetaData).ArrayNum = (param_1->SharedMetaData).ArrayNum;
    (this->SharedMetaData).ArrayMax = (param_1->SharedMetaData).ArrayMax;
    (param_1->SharedMetaData).ArrayNum = 0;
    (param_1->SharedMetaData).ArrayMax = 0;
  }
  return this;
}

// operator= @ 146099d20

FMovieSceneEntityComponentField * __thiscall
FMovieSceneEntityComponentField::operator=
          (FMovieSceneEntityComponentField *this,FMovieSceneEntityComponentField *param_1)

{
  int *piVar1;
  TArray<FMovieSceneEvaluationFieldEntity,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FMovieSceneEvaluationFieldEntityMetaData,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FMovieSceneEvaluationFieldSharedEntityMetaData,TSizedDefaultAllocator<32>_> *pTVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  FMovieSceneEvaluationFieldEntityMetaData *pFVar7;
  
  FMovieSceneEvaluationFieldEntityTree::operator=
            (&this->PersistentEntityTree,&param_1->PersistentEntityTree);
  FMovieSceneEvaluationFieldEntityTree::operator=
            (&this->OneShotEntityTree,&param_1->OneShotEntityTree);
  pTVar2 = &this->Entities;
  if (pTVar2 != &param_1->Entities) {
    iVar5 = (param_1->Entities).ArrayNum;
    piVar1 = &(this->Entities).ArrayMax;
    pFVar6 = (param_1->Entities).AllocatorInstance.Data;
    (this->Entities).ArrayNum = iVar5;
    if ((iVar5 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,iVar5,*piVar1,&pTVar2->AllocatorInstance,iVar5,piVar1);
      if (iVar5 != 0) {
        memcpy((pTVar2->AllocatorInstance).Data,pFVar6,(longlong)iVar5 << 4);
      }
    }
  }
  pTVar3 = &this->EntityMetaData;
  if (pTVar3 != &param_1->EntityMetaData) {
    DestructItems<FMovieSceneEvaluationFieldEntityMetaData,int>
              ((FMovieSceneEvaluationFieldEntityMetaData *)(pTVar3->AllocatorInstance).Data,
               (this->EntityMetaData).ArrayNum);
    iVar5 = (param_1->EntityMetaData).ArrayNum;
    piVar1 = &(this->EntityMetaData).ArrayMax;
    pFVar7 = (FMovieSceneEvaluationFieldEntityMetaData *)
             (param_1->EntityMetaData).AllocatorInstance.Data;
    (this->EntityMetaData).ArrayNum = iVar5;
    if ((iVar5 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x48,8,iVar5,*piVar1,&pTVar3->AllocatorInstance,iVar5,piVar1);
      ConstructItems<FMovieSceneEvaluationFieldEntityMetaData,FMovieSceneEvaluationFieldEntityMetaData,int>
                ((pTVar3->AllocatorInstance).Data,pFVar7,iVar5);
    }
  }
  pTVar4 = &this->SharedMetaData;
  if (pTVar4 != &param_1->SharedMetaData) {
    iVar5 = (param_1->SharedMetaData).ArrayNum;
    piVar1 = &(this->SharedMetaData).ArrayMax;
    pFVar6 = (param_1->SharedMetaData).AllocatorInstance.Data;
    (this->SharedMetaData).ArrayNum = iVar5;
    if ((iVar5 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,iVar5,*piVar1,&pTVar4->AllocatorInstance,iVar5,piVar1);
      if (iVar5 != 0) {
        memcpy((pTVar4->AllocatorInstance).Data,pFVar6,(longlong)iVar5 << 4);
      }
    }
  }
  return this;
}

// FindMetaData @ 146131a10

FMovieSceneEvaluationFieldEntityMetaData * __thiscall
FMovieSceneEntityComponentField::FindMetaData
          (FMovieSceneEntityComponentField *this,FMovieSceneEvaluationFieldEntityQuery *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  FMovieSceneEvaluationFieldEntityMetaData *pFVar4;
  uint uVar5;
  
  uVar1 = param_1->MetaDataIndex;
  if (uVar1 == 0xffffffff) {
    return (FMovieSceneEvaluationFieldEntityMetaData *)0x0;
  }
  uVar5 = 0;
  if ((int)uVar1 < (this->EntityMetaData).ArrayNum) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FMovieSceneEvaluationFieldEntityMetaData *)(*pcVar2)();
      return pFVar4;
    }
  }
  return (FMovieSceneEvaluationFieldEntityMetaData *)
         ((this->EntityMetaData).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x48);
}

// FindSharedMetaData @ 146131f30

FMovieSceneEvaluationFieldSharedEntityMetaData * __thiscall
FMovieSceneEntityComponentField::FindSharedMetaData
          (FMovieSceneEntityComponentField *this,FMovieSceneEvaluationFieldEntityQuery *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  FMovieSceneEvaluationFieldSharedEntityMetaData *pFVar4;
  uint uVar5;
  
  uVar1 = (param_1->Entity).SharedMetaDataIndex;
  if (uVar1 == 0xffffffff) {
    return (FMovieSceneEvaluationFieldSharedEntityMetaData *)0x0;
  }
  uVar5 = 0;
  if ((int)uVar1 < (this->SharedMetaData).ArrayNum) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FMovieSceneEvaluationFieldSharedEntityMetaData *)(*pcVar2)();
      return pFVar4;
    }
  }
  return (FMovieSceneEvaluationFieldSharedEntityMetaData *)
         ((this->SharedMetaData).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x10);
}

// StaticStruct @ 146163d80

UScriptStruct * __cdecl FMovieSceneEntityComponentField::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneEntityComponentField.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieScene();
    Z_Registration_Info_UScriptStruct_FMovieSceneEntityComponentField.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneEntityComponentField,(UObject *)pUVar1
                         ,L"MovieSceneEntityComponentField");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneEntityComponentField.OuterSingleton;
}

// HasAnyOneShotEntities @ 1461b5430

bool __thiscall
FMovieSceneEntityComponentField::HasAnyOneShotEntities(FMovieSceneEntityComponentField *this)

{
  TArrayView<FMovieSceneEvaluationTreeNode_const_,int> *pTVar1;
  TArrayView<FMovieSceneEvaluationFieldEntityTree::FEntityAndMetaDataIndex_const_,int> *pTVar2;
  TArrayView<FMovieSceneEvaluationTreeNode_const_,int> local_28;
  TArrayView<FMovieSceneEvaluationFieldEntityTree::FEntityAndMetaDataIndex_const_,int> local_18;
  
  if ((int)(this->OneShotEntityTree).SerializedData._padding_ == -1) {
    local_28.DataPtr = (FMovieSceneEvaluationTreeNode *)0x0;
    local_28.ArrayNum = 0;
    pTVar1 = &local_28;
  }
  else {
    pTVar1 = TEvaluationTreeEntryContainer<FMovieSceneEvaluationTreeNode>::Get
                       ((TEvaluationTreeEntryContainer<FMovieSceneEvaluationTreeNode> *)
                        &(this->OneShotEntityTree).SerializedData._padding_,&local_28,
                        (FEvaluationTreeEntryHandle)
                        (int)(this->OneShotEntityTree).SerializedData._padding_);
  }
  if ((int)*(undefined8 *)&pTVar1->ArrayNum == 0) {
    pTVar2 = TMovieSceneEvaluationTree<FMovieSceneEvaluationFieldEntityTree::FEntityAndMetaDataIndex>
             ::GetDataForSingleNode
                       (&(this->OneShotEntityTree).SerializedData,&local_18,
                        (FMovieSceneEvaluationTreeNode *)&this->OneShotEntityTree);
    if (pTVar2->ArrayNum == 0) {
      return false;
    }
  }
  return true;
}

// QueryOneShotEntities @ 1461c3fd0

void __thiscall
FMovieSceneEntityComponentField::QueryOneShotEntities
          (FMovieSceneEntityComponentField *this,TRange<FFrameNumber> *param_1,
          TSet<FMovieSceneEvaluationFieldEntityQuery,FMovieSceneEvaluationFieldEntityKeyFuncs,FDefaultSetAllocator>
          *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FMovieSceneEvaluationTreeNodeHandle FVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  TSet<FMovieSceneEvaluationFieldEntityQuery,FMovieSceneEvaluationFieldEntityKeyFuncs,FDefaultSetAllocator>
  *this_00;
  FFrameNumber FVar7;
  TMovieSceneEvaluationTree<FMovieSceneEvaluationFieldEntityTree::FEntityAndMetaDataIndex> *this_01;
  bool bVar8;
  FFrameNumber *pFVar9;
  TArrayView<FMovieSceneEvaluationFieldEntityTree::FEntityAndMetaDataIndex_const_,int> *pTVar10;
  TArrayView<FMovieSceneEvaluationTreeNode_const_,int> *pTVar11;
  TMovieSceneEvaluationTree<FMovieSceneEvaluationFieldEntityTree::FEntityAndMetaDataIndex> *pTVar12;
  uint uVar13;
  FEvaluationTreeEntryHandle FVar14;
  TMovieSceneEvaluationTree<FMovieSceneEvaluationFieldEntityTree::FEntityAndMetaDataIndex> *pTVar15;
  uint uVar16;
  uint uVar17;
  TMovieSceneEvaluationTree<FMovieSceneEvaluationFieldEntityTree::FEntityAndMetaDataIndex> *pTVar18;
  int iVar19;
  undefined1 local_res8 [16];
  TSet<FMovieSceneEvaluationFieldEntityQuery,FMovieSceneEvaluationFieldEntityKeyFuncs,FDefaultSetAllocator>
  *local_res18;
  FEntityAndMetaDataIndex local_res20;
  TRangeBound<FFrameNumber> local_138;
  TRangeBound<FFrameNumber> TStack_130;
  FMovieSceneEvaluationTreeNodeHandle local_128;
  FMovieSceneEvaluationTreeRangeIterator local_120;
  TMovieSceneEvaluationTree<FMovieSceneEvaluationFieldEntityTree::FEntityAndMetaDataIndex>
  *local_100;
  TMovieSceneEvaluationTree<FMovieSceneEvaluationFieldEntityTree::FEntityAndMetaDataIndex>
  *pTStack_f8;
  ulonglong local_f0;
  FScriptContainerElement *local_e8;
  int iStack_e0;
  undefined8 local_d8;
  undefined4 uStack_d0;
  TMovieSceneEvaluationTreeDataIterator<FMovieSceneEvaluationFieldEntityTree::FEntityAndMetaDataIndex>
  local_c8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  int local_a0;
  TMovieSceneEvaluationTreeDataIterator<FMovieSceneEvaluationFieldEntityTree::FEntityAndMetaDataIndex>
  local_98;
  TArrayView<FMovieSceneEvaluationFieldEntityTree::FEntityAndMetaDataIndex_const_,int> local_80;
  TArrayView<FMovieSceneEvaluationTreeNode_const_,int> local_70;
  TArrayView<FMovieSceneEvaluationTreeNode_const_,int> local_60 [2];
  
  local_res8._8_8_ = param_1;
  local_res18 = param_2;
  FMovieSceneEvaluationTreeRangeIterator::FMovieSceneEvaluationTreeRangeIterator
            (&local_120,(FMovieSceneEvaluationTree *)&this->OneShotEntityTree,param_1->LowerBound);
  if (local_120.CurrentNodeHandle.ChildrenHandle.EntryIndex != -1) goto LAB_1461c4052;
  if ((local_120.CurrentNodeHandle.Index != 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Iterator",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Evaluation\\MovieSceneEvaluationField.cpp"
                         ,0xb4,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  do {
    if ((local_120.CurrentNodeHandle.ChildrenHandle.EntryIndex == -1) &&
       (local_120.CurrentNodeHandle.Index != 0)) {
      return;
    }
LAB_1461c4052:
    local_138 = local_120.CurrentRange.LowerBound;
    TStack_130 = local_120.CurrentRange.UpperBound;
    bVar8 = TRange<FFrameNumber>::IsEmpty(param_1);
    if (bVar8) {
      return;
    }
    if ((local_138.Type.Value != '\x02') && (TStack_130.Type.Value != '\x02')) {
      FVar7.Value = TStack_130.Value.Value;
      if ((local_138.Type.Value == '\x02') &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Type != ERangeBoundTypes::Open",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                             ,99,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (FVar7.Value < local_138.Value.Value) {
        return;
      }
      pFVar9 = TRangeBound<FFrameNumber>::GetValue(&TStack_130);
      iVar19 = pFVar9->Value;
      pFVar9 = TRangeBound<FFrameNumber>::GetValue(&local_138);
      if (pFVar9->Value == iVar19) {
        if (local_138.Type.Value == '\0') {
          return;
        }
        if (TStack_130.Type.Value == '\0') {
          return;
        }
      }
    }
    if (((param_1->UpperBound).Type.Value == '\x02') || (local_138.Type.Value == '\x02')) {
      bVar8 = true;
    }
    else {
      bVar8 = false;
    }
    if (((param_1->LowerBound).Type.Value == '\x02') || (TStack_130.Type.Value == '\x02')) {
      bVar6 = true;
    }
    else {
      bVar6 = false;
    }
    bVar5 = true;
    if (!bVar8) {
      if ((local_138.Type.Value == '\x02') &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Type != ERangeBoundTypes::Open",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                             ,99,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FVar7.Value = local_138.Value.Value;
      if (((param_1->UpperBound).Type.Value == '\x02') &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Type != ERangeBoundTypes::Open",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                             ,99,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar19 = (param_1->UpperBound).Value.Value;
      pFVar9 = TRangeBound<FFrameNumber>::GetValue(&local_138);
      iVar2 = pFVar9->Value;
      pFVar9 = TRangeBound<FFrameNumber>::GetValue(&param_1->UpperBound);
      if (((param_1->UpperBound).Type.Value == '\x01') && (local_138.Type.Value == '\x01')) {
        bVar8 = true;
      }
      else {
        bVar8 = false;
      }
      bVar5 = FVar7.Value < iVar19;
      if (bVar8) {
        bVar5 = iVar2 <= pFVar9->Value;
      }
    }
    bVar8 = true;
    if (!bVar6) {
      if ((TStack_130.Type.Value == '\x02') &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Type != ERangeBoundTypes::Open",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                             ,99,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FVar7.Value = TStack_130.Value.Value;
      if (((param_1->LowerBound).Type.Value == '\x02') &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Type != ERangeBoundTypes::Open",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                             ,99,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar19 = (param_1->LowerBound).Value.Value;
      pFVar9 = TRangeBound<FFrameNumber>::GetValue(&TStack_130);
      iVar2 = pFVar9->Value;
      pFVar9 = TRangeBound<FFrameNumber>::GetValue(&param_1->LowerBound);
      if (((param_1->LowerBound).Type.Value == '\x01') && (TStack_130.Type.Value == '\x01')) {
        bVar6 = true;
      }
      else {
        bVar6 = false;
      }
      bVar8 = iVar19 < FVar7.Value;
      if (bVar6) {
        bVar8 = pFVar9->Value <= iVar2;
      }
    }
    if (!bVar5) {
      return;
    }
    if (!bVar8) {
      return;
    }
    FVar3.Index = local_120.CurrentNodeHandle.Index;
    FVar3.ChildrenHandle.EntryIndex = local_120.CurrentNodeHandle.ChildrenHandle.EntryIndex;
    TMovieSceneEvaluationTreeDataIterator<FMovieSceneEvaluationFieldEntityTree::FEntityAndMetaDataIndex>
    ::
    TMovieSceneEvaluationTreeDataIterator<FMovieSceneEvaluationFieldEntityTree::FEntityAndMetaDataIndex>
              (&local_98,&(this->OneShotEntityTree).SerializedData,FVar3);
    local_f0 = local_98._16_8_;
    local_100 = local_98.Tree;
    pTStack_f8 = (TMovieSceneEvaluationTree<FMovieSceneEvaluationFieldEntityTree::FEntityAndMetaDataIndex>
                  *)local_98.CurrentNode;
    TMovieSceneEvaluationTreeDataIterator<FMovieSceneEvaluationFieldEntityTree::FEntityAndMetaDataIndex>
    ::
    TMovieSceneEvaluationTreeDataIterator<FMovieSceneEvaluationFieldEntityTree::FEntityAndMetaDataIndex>
              (&local_c8,local_98.Tree,(FMovieSceneEvaluationTreeNodeHandle)0xffffffffffffffff);
    this_01 = local_100;
    this_00 = local_res18;
    pTVar18 = (TMovieSceneEvaluationTree<FMovieSceneEvaluationFieldEntityTree::FEntityAndMetaDataIndex>
               *)(local_f0 & 0xffffffff);
    pTVar15 = pTStack_f8;
LAB_1461c42d0:
    uVar17 = (uint)pTVar18;
    if (((this_01 != local_c8.Tree) ||
        (pTVar15 !=
         (TMovieSceneEvaluationTree<FMovieSceneEvaluationFieldEntityTree::FEntityAndMetaDataIndex> *
         )local_c8.CurrentNode)) || (uVar17 != local_c8.DataIndex)) {
      pTVar10 = TMovieSceneEvaluationTree<FMovieSceneEvaluationFieldEntityTree::FEntityAndMetaDataIndex>
                ::GetDataForSingleNode(this_01,&local_80,(FMovieSceneEvaluationTreeNode *)pTVar15);
      uVar13 = 0;
      if ((int)uVar17 < pTVar10->ArrayNum) {
        uVar13 = ~uVar17 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      local_res20 = pTVar10->DataPtr[(int)uVar17];
      uVar16 = local_res20.EntityIndex;
      uVar13 = 0;
      if ((int)uVar16 < (this->Entities).ArrayNum) {
        uVar13 = ~uVar16 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar1 = (this->Entities).AllocatorInstance.Data + (longlong)(int)uVar16 * 0x10;
      local_b0 = *(undefined8 *)pFVar1;
      uStack_a8 = *(undefined8 *)(pFVar1 + 8);
      local_a0 = local_res20.MetaDataIndex;
      TSet<FMovieSceneEvaluationFieldEntityQuery,FMovieSceneEvaluationFieldEntityKeyFuncs,FDefaultSetAllocator>
      ::Emplace<FMovieSceneEvaluationFieldEntityQuery>
                (this_00,(FMovieSceneEvaluationFieldEntityQuery *)local_res8,(bool *)&local_b0);
      pTVar12 = pTVar15;
      pTVar18 = (TMovieSceneEvaluationTree<FMovieSceneEvaluationFieldEntityTree::FEntityAndMetaDataIndex>
                 *)(ulonglong)(uVar17 + 1);
      while (pTVar15 = pTVar12,
            pTVar15 !=
            (TMovieSceneEvaluationTree<FMovieSceneEvaluationFieldEntityTree::FEntityAndMetaDataIndex>
             *)0x0) {
        uVar17 = ((FEvaluationTreeEntryHandle *)&pTVar15->_padding_)[1].EntryIndex;
        if (uVar17 == 0xffffffff) {
          local_d8 = 0;
          uStack_d0 = 0;
          iVar19 = 0;
        }
        else {
          uVar13 = 0;
          if ((int)uVar17 < (this_01->Data).Entries.ArrayNum) {
            uVar13 = ~uVar17 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar1 = (this_01->Data).Entries.AllocatorInstance.Data;
          uVar13 = *(uint *)(pFVar1 + (longlong)(int)uVar17 * 0xc);
          iVar19 = *(int *)(pFVar1 + (longlong)(int)uVar17 * 0xc + 4);
          uVar17 = 0;
          if ((int)uVar13 < (this_01->Data).Items.ArrayNum) {
            uVar17 = ~uVar13 >> 0x1f;
          }
          if ((uVar17 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          local_e8 = (this_01->Data).Items.AllocatorInstance.Data + (longlong)(int)uVar13 * 8;
          iStack_e0 = iVar19;
          if ((iVar19 < 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("ArrayNum >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xfe,L""), iVar19 = iStack_e0, bVar8)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        pTVar12 = (TMovieSceneEvaluationTree<FMovieSceneEvaluationFieldEntityTree::FEntityAndMetaDataIndex>
                   *)0x0;
        if ((-1 < (int)pTVar18) && ((int)pTVar18 < iVar19)) break;
        pTVar18 = pTVar12;
        if (((((FMovieSceneEvaluationTreeNodeHandle *)&pTVar15->_padding_)->ChildrenHandle).
             EntryIndex != -1) ||
           (((FMovieSceneEvaluationTreeNodeHandle *)&pTVar15->_padding_)->Index == 0)) {
          FVar3 = *(FMovieSceneEvaluationTreeNodeHandle *)&pTVar15->_padding_;
          FVar14 = FVar3.ChildrenHandle.EntryIndex;
          local_128 = FVar3;
          if (FVar14.EntryIndex == -1) {
            bVar8 = FVar3.Index == 0;
          }
          else {
            pTVar11 = TEvaluationTreeEntryContainer<FMovieSceneEvaluationTreeNode>::Get
                                ((TEvaluationTreeEntryContainer<FMovieSceneEvaluationTreeNode> *)
                                 &this_01->_padding_,&local_70,FVar14);
            if (((longlong)FVar3 < 0) || (pTVar11->ArrayNum <= FVar3.Index)) {
              bVar8 = false;
            }
            else {
              bVar8 = true;
            }
          }
          if ((!bVar8) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid(Handle)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieSceneEvaluationTree.h"
                                 ,0x18d,L""), bVar8)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pTVar12 = this_01;
          if (FVar14.EntryIndex != -1) {
            pTVar11 = TEvaluationTreeEntryContainer<FMovieSceneEvaluationTreeNode>::Get
                                ((TEvaluationTreeEntryContainer<FMovieSceneEvaluationTreeNode> *)
                                 &this_01->_padding_,local_60,FVar14);
            pTVar12 = (TMovieSceneEvaluationTree<FMovieSceneEvaluationFieldEntityTree::FEntityAndMetaDataIndex>
                       *)TArrayView<FMovieSceneEvaluationTreeNode_const_,int>::operator[]
                                   (pTVar11,local_128.Index);
          }
        }
      }
      goto LAB_1461c42d0;
    }
    FMovieSceneEvaluationTreeRangeIterator::Iter(&local_120,true);
    param_1 = (TRange<FFrameNumber> *)local_res8._8_8_;
  } while( true );
}

// QueryPersistentEntities @ 1461c45e0

void __thiscall
FMovieSceneEntityComponentField::QueryPersistentEntities
          (FMovieSceneEntityComponentField *this,FFrameNumber param_1,TRange<FFrameNumber> *param_2,
          TSet<FMovieSceneEvaluationFieldEntityQuery,FMovieSceneEvaluationFieldEntityKeyFuncs,FDefaultSetAllocator>
          *param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  TRangeBound<FFrameNumber> TVar3;
  FMovieSceneEvaluationTreeNodeHandle FVar4;
  int iVar5;
  bool bVar6;
  TArrayView<FMovieSceneEvaluationFieldEntityTree::FEntityAndMetaDataIndex_const_,int> *pTVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  undefined4 local_res8;
  FEntityAndMetaDataIndex local_res18;
  TMovieSceneEvaluationTreeDataIterator<FMovieSceneEvaluationFieldEntityTree::FEntityAndMetaDataIndex>
  local_a8;
  TMovieSceneEvaluationTreeDataIterator<FMovieSceneEvaluationFieldEntityTree::FEntityAndMetaDataIndex>
  local_90;
  FMovieSceneEvaluationTreeRangeIterator local_78;
  undefined8 local_58;
  undefined8 uStack_50;
  int local_48;
  TMovieSceneEvaluationTreeDataIterator<FMovieSceneEvaluationFieldEntityTree::FEntityAndMetaDataIndex>
  local_40;
  TArrayView<FMovieSceneEvaluationFieldEntityTree::FEntityAndMetaDataIndex_const_,int> local_28;
  
  local_res8 = CONCAT31(local_res8._1_3_,1);
  TVar3.Value.Value = param_1.Value;
  TVar3._0_4_ = local_res8;
  FMovieSceneEvaluationTreeRangeIterator::FMovieSceneEvaluationTreeRangeIterator
            (&local_78,(FMovieSceneEvaluationTree *)this,TVar3);
  if ((local_78.CurrentNodeHandle.ChildrenHandle.EntryIndex == -1) &&
     (local_78.CurrentNodeHandle.Index != 0)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Iterator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Evaluation\\MovieSceneEvaluationField.cpp"
                       ,0x8c,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FVar4.Index = local_78.CurrentNodeHandle.Index;
  FVar4.ChildrenHandle.EntryIndex = local_78.CurrentNodeHandle.ChildrenHandle.EntryIndex;
  param_2->LowerBound = local_78.CurrentRange.LowerBound;
  param_2->UpperBound = local_78.CurrentRange.UpperBound;
  TMovieSceneEvaluationTreeDataIterator<FMovieSceneEvaluationFieldEntityTree::FEntityAndMetaDataIndex>
  ::
  TMovieSceneEvaluationTreeDataIterator<FMovieSceneEvaluationFieldEntityTree::FEntityAndMetaDataIndex>
            (&local_40,
             (TMovieSceneEvaluationTree<FMovieSceneEvaluationFieldEntityTree::FEntityAndMetaDataIndex>
              *)this,FVar4);
  local_a8.DataIndex = local_40.DataIndex;
  local_a8._20_4_ = local_40._20_4_;
  local_a8.Tree = local_40.Tree;
  local_a8.CurrentNode = local_40.CurrentNode;
  TMovieSceneEvaluationTreeDataIterator<FMovieSceneEvaluationFieldEntityTree::FEntityAndMetaDataIndex>
  ::
  TMovieSceneEvaluationTreeDataIterator<FMovieSceneEvaluationFieldEntityTree::FEntityAndMetaDataIndex>
            (&local_90,local_40.Tree,(FMovieSceneEvaluationTreeNodeHandle)0xffffffffffffffff);
  while( true ) {
    iVar5 = local_a8.DataIndex;
    lVar10 = (longlong)local_a8.DataIndex;
    if (((local_a8.Tree == local_90.Tree) && (local_a8.CurrentNode == local_90.CurrentNode)) &&
       (local_a8.DataIndex == local_90.DataIndex)) break;
    pTVar7 = TMovieSceneEvaluationTree<FMovieSceneEvaluationFieldEntityTree::FEntityAndMetaDataIndex>
             ::GetDataForSingleNode(local_a8.Tree,&local_28,local_a8.CurrentNode);
    uVar8 = 0;
    if (iVar5 < pTVar7->ArrayNum) {
      uVar8 = (uint)~iVar5 >> 0x1f;
    }
    if (uVar8 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
      if (bVar6) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    local_res18 = pTVar7->DataPtr[lVar10];
    uVar9 = local_res18.EntityIndex;
    uVar8 = 0;
    if ((int)uVar9 < (this->Entities).ArrayNum) {
      uVar8 = ~uVar9 >> 0x1f;
    }
    if (uVar8 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar1 = (this->Entities).AllocatorInstance.Data + (longlong)(int)uVar9 * 0x10;
    local_58 = *(undefined8 *)pFVar1;
    uStack_50 = *(undefined8 *)(pFVar1 + 8);
    local_48 = local_res18.MetaDataIndex;
    TSet<FMovieSceneEvaluationFieldEntityQuery,FMovieSceneEvaluationFieldEntityKeyFuncs,FDefaultSetAllocator>
    ::Emplace<FMovieSceneEvaluationFieldEntityQuery>
              (param_3,(FMovieSceneEvaluationFieldEntityQuery *)&stack0x00000010,(bool *)&local_58);
    TMovieSceneEvaluationTreeDataIterator<FMovieSceneEvaluationFieldEntityTree::FEntityAndMetaDataIndex>
    ::operator++(&local_a8);
  }
  return;
}

// QueryPersistentEntities @ 1461c4800

void __thiscall
FMovieSceneEntityComponentField::QueryPersistentEntities
          (FMovieSceneEntityComponentField *this,FFrameNumber param_1,
          TFunctionRef<bool___cdecl(FMovieSceneEvaluationFieldEntityQuery_const_&)> *param_2,
          TRange<FFrameNumber> *param_3)

{
  FScriptContainerElement *pFVar1;
  FEntityAndMetaDataIndex FVar2;
  code *pcVar3;
  TRangeBound<FFrameNumber> TVar4;
  FMovieSceneEvaluationTreeNodeHandle FVar5;
  int iVar6;
  bool bVar7;
  char cVar8;
  TArrayView<FMovieSceneEvaluationFieldEntityTree::FEntityAndMetaDataIndex_const_,int> *pTVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  undefined4 local_res8;
  int iStackX_24;
  TMovieSceneEvaluationTreeDataIterator<FMovieSceneEvaluationFieldEntityTree::FEntityAndMetaDataIndex>
  local_a8;
  TMovieSceneEvaluationTreeDataIterator<FMovieSceneEvaluationFieldEntityTree::FEntityAndMetaDataIndex>
  local_90;
  FMovieSceneEvaluationTreeRangeIterator local_78;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  int local_48;
  TMovieSceneEvaluationTreeDataIterator<FMovieSceneEvaluationFieldEntityTree::FEntityAndMetaDataIndex>
  local_40;
  TArrayView<FMovieSceneEvaluationFieldEntityTree::FEntityAndMetaDataIndex_const_,int> local_28;
  
  local_res8 = CONCAT31(local_res8._1_3_,1);
  TVar4.Value.Value = param_1.Value;
  TVar4._0_4_ = local_res8;
  FMovieSceneEvaluationTreeRangeIterator::FMovieSceneEvaluationTreeRangeIterator
            (&local_78,(FMovieSceneEvaluationTree *)this,TVar4);
  if (((local_78.CurrentNodeHandle.ChildrenHandle.EntryIndex == -1) &&
      (local_78.CurrentNodeHandle.Index != 0)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Iterator",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Evaluation\\MovieSceneEvaluationField.cpp"
                         ,0x9b,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FVar5.Index = local_78.CurrentNodeHandle.Index;
  FVar5.ChildrenHandle.EntryIndex = local_78.CurrentNodeHandle.ChildrenHandle.EntryIndex;
  param_3->LowerBound = local_78.CurrentRange.LowerBound;
  param_3->UpperBound = local_78.CurrentRange.UpperBound;
  TMovieSceneEvaluationTreeDataIterator<FMovieSceneEvaluationFieldEntityTree::FEntityAndMetaDataIndex>
  ::
  TMovieSceneEvaluationTreeDataIterator<FMovieSceneEvaluationFieldEntityTree::FEntityAndMetaDataIndex>
            (&local_40,
             (TMovieSceneEvaluationTree<FMovieSceneEvaluationFieldEntityTree::FEntityAndMetaDataIndex>
              *)this,FVar5);
  local_a8.DataIndex = local_40.DataIndex;
  local_a8._20_4_ = local_40._20_4_;
  local_a8.Tree = local_40.Tree;
  local_a8.CurrentNode = local_40.CurrentNode;
  TMovieSceneEvaluationTreeDataIterator<FMovieSceneEvaluationFieldEntityTree::FEntityAndMetaDataIndex>
  ::
  TMovieSceneEvaluationTreeDataIterator<FMovieSceneEvaluationFieldEntityTree::FEntityAndMetaDataIndex>
            (&local_90,local_40.Tree,(FMovieSceneEvaluationTreeNodeHandle)0xffffffffffffffff);
  while( true ) {
    iVar6 = local_a8.DataIndex;
    lVar12 = (longlong)local_a8.DataIndex;
    if (((local_a8.Tree == local_90.Tree) && (local_a8.CurrentNode == local_90.CurrentNode)) &&
       (local_a8.DataIndex == local_90.DataIndex)) {
      return;
    }
    pTVar9 = TMovieSceneEvaluationTree<FMovieSceneEvaluationFieldEntityTree::FEntityAndMetaDataIndex>
             ::GetDataForSingleNode(local_a8.Tree,&local_28,local_a8.CurrentNode);
    uVar10 = 0;
    if (iVar6 < pTVar9->ArrayNum) {
      uVar10 = (uint)~iVar6 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar7)) break;
    FVar2 = pTVar9->DataPtr[lVar12];
    uVar11 = FVar2.EntityIndex;
    uVar10 = 0;
    if ((int)uVar11 < (this->Entities).ArrayNum) {
      uVar10 = ~uVar11 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar1 = (this->Entities).AllocatorInstance.Data + (longlong)(int)uVar11 * 0x10;
    local_58 = *(undefined4 *)pFVar1;
    uStack_54 = *(undefined4 *)(pFVar1 + 4);
    uStack_50 = *(undefined4 *)(pFVar1 + 8);
    uStack_4c = *(undefined4 *)(pFVar1 + 0xc);
    iStackX_24 = FVar2.MetaDataIndex;
    local_48 = iStackX_24;
    cVar8 = (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,&local_58);
    if (cVar8 == '\0') {
      return;
    }
    TMovieSceneEvaluationTreeDataIterator<FMovieSceneEvaluationFieldEntityTree::FEntityAndMetaDataIndex>
    ::operator++(&local_a8);
  }
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

