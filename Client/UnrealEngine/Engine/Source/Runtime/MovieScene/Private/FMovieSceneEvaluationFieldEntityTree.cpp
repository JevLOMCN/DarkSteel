// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 4

// FMovieSceneEvaluationFieldEntityTree @ 1460937d0

FMovieSceneEvaluationFieldEntityTree * __thiscall
FMovieSceneEvaluationFieldEntityTree::FMovieSceneEvaluationFieldEntityTree
          (FMovieSceneEvaluationFieldEntityTree *this,FMovieSceneEvaluationFieldEntityTree *param_1)

{
  longlong lVar1;
  uint local_res8;
  uint local_res10;
  
  lVar1 = (param_1->SerializedData)._padding_;
  local_res8 = CONCAT31(local_res8._1_3_,2);
  (this->SerializedData)._padding_ = (param_1->SerializedData)._padding_;
  (this->SerializedData)._padding_ = lVar1;
  lVar1 = (param_1->SerializedData)._padding_;
  local_res10 = CONCAT31(local_res10._1_3_,2);
  (this->SerializedData)._padding_ = (param_1->SerializedData)._padding_;
  (this->SerializedData)._padding_ = lVar1;
  (this->SerializedData)._padding_ = 0;
  (this->SerializedData)._padding_ = (param_1->SerializedData)._padding_;
  (param_1->SerializedData)._padding_ = 0;
  *(int *)&(this->SerializedData)._padding_ = (int)(param_1->SerializedData)._padding_;
  *(undefined4 *)((longlong)&(this->SerializedData)._padding_ + 4) =
       *(undefined4 *)((longlong)&(param_1->SerializedData)._padding_ + 4);
  (param_1->SerializedData)._padding_ = 0;
  (this->SerializedData)._padding_ = 0;
  (this->SerializedData)._padding_ = (param_1->SerializedData)._padding_;
  (param_1->SerializedData)._padding_ = 0;
  *(int *)&(this->SerializedData)._padding_ = (int)(param_1->SerializedData)._padding_;
  *(undefined4 *)((longlong)&(this->SerializedData)._padding_ + 4) =
       *(undefined4 *)((longlong)&(param_1->SerializedData)._padding_ + 4);
  (param_1->SerializedData)._padding_ = 0;
  (param_1->SerializedData)._padding_ = (ulonglong)local_res8;
  (param_1->SerializedData)._padding_ = (ulonglong)local_res10;
  (param_1->SerializedData)._padding_ = -1;
  (param_1->SerializedData)._padding_ = -1;
  (this->SerializedData).Data.Entries.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SerializedData).Data.Entries.AllocatorInstance.Data =
       (param_1->SerializedData).Data.Entries.AllocatorInstance.Data;
  (param_1->SerializedData).Data.Entries.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SerializedData).Data.Entries.ArrayNum = (param_1->SerializedData).Data.Entries.ArrayNum;
  (this->SerializedData).Data.Entries.ArrayMax = (param_1->SerializedData).Data.Entries.ArrayMax;
  (param_1->SerializedData).Data.Entries.ArrayNum = 0;
  (param_1->SerializedData).Data.Entries.ArrayMax = 0;
  (this->SerializedData).Data.Items.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SerializedData).Data.Items.AllocatorInstance.Data =
       (param_1->SerializedData).Data.Items.AllocatorInstance.Data;
  (param_1->SerializedData).Data.Items.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SerializedData).Data.Items.ArrayNum = (param_1->SerializedData).Data.Items.ArrayNum;
  (this->SerializedData).Data.Items.ArrayMax = (param_1->SerializedData).Data.Items.ArrayMax;
  (param_1->SerializedData).Data.Items.ArrayNum = 0;
  (param_1->SerializedData).Data.Items.ArrayMax = 0;
  return this;
}

// operator= @ 14609a2d0

FMovieSceneEvaluationFieldEntityTree * __thiscall
FMovieSceneEvaluationFieldEntityTree::operator=
          (FMovieSceneEvaluationFieldEntityTree *this,FMovieSceneEvaluationFieldEntityTree *param_1)

{
  TEvaluationTreeEntryContainer<FMovieSceneEvaluationFieldEntityTree::FEntityAndMetaDataIndex>
  *pTVar1;
  FScriptContainerElement *pFVar2;
  TEvaluationTreeEntryContainer<FMovieSceneEvaluationFieldEntityTree::FEntityAndMetaDataIndex>
  *pTVar3;
  TArray<FMovieSceneEvaluationFieldEntityTree::FEntityAndMetaDataIndex,TSizedDefaultAllocator<32>_>
  *pTVar4;
  TArray<FMovieSceneEvaluationFieldEntityTree::FEntityAndMetaDataIndex,TSizedDefaultAllocator<32>_>
  *pTVar5;
  
  FMovieSceneEvaluationTree::operator=
            ((FMovieSceneEvaluationTree *)this,(FMovieSceneEvaluationTree *)param_1);
  pTVar3 = &(param_1->SerializedData).Data;
  pTVar1 = &(this->SerializedData).Data;
  if (pTVar1 != pTVar3) {
    pFVar2 = (pTVar1->Entries).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pTVar1->Entries).AllocatorInstance.Data = (pTVar3->Entries).AllocatorInstance.Data;
    (pTVar3->Entries).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->SerializedData).Data.Entries.ArrayNum = (param_1->SerializedData).Data.Entries.ArrayNum;
    (this->SerializedData).Data.Entries.ArrayMax = (param_1->SerializedData).Data.Entries.ArrayMax;
    (param_1->SerializedData).Data.Entries.ArrayNum = 0;
    (param_1->SerializedData).Data.Entries.ArrayMax = 0;
  }
  pTVar4 = &(param_1->SerializedData).Data.Items;
  pTVar5 = &(this->SerializedData).Data.Items;
  if (pTVar5 != pTVar4) {
    pFVar2 = (pTVar5->AllocatorInstance).Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pTVar5->AllocatorInstance).Data = (pTVar4->AllocatorInstance).Data;
    (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->SerializedData).Data.Items.ArrayNum = (param_1->SerializedData).Data.Items.ArrayNum;
    (this->SerializedData).Data.Items.ArrayMax = (param_1->SerializedData).Data.Items.ArrayMax;
    (param_1->SerializedData).Data.Items.ArrayNum = 0;
    (param_1->SerializedData).Data.Items.ArrayMax = 0;
  }
  return this;
}

// operator= @ 14609a380

FMovieSceneEvaluationFieldEntityTree * __thiscall
FMovieSceneEvaluationFieldEntityTree::operator=
          (FMovieSceneEvaluationFieldEntityTree *this,FMovieSceneEvaluationFieldEntityTree *param_1)

{
  TEvaluationTreeEntryContainer<FMovieSceneEvaluationFieldEntityTree::FEntityAndMetaDataIndex>
  *pTVar1;
  int *piVar2;
  TArray<FMovieSceneEvaluationFieldEntityTree::FEntityAndMetaDataIndex,TSizedDefaultAllocator<32>_>
  *pTVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  TArray<FMovieSceneEvaluationFieldEntityTree::FEntityAndMetaDataIndex,TSizedDefaultAllocator<32>_>
  *pTVar7;
  TEvaluationTreeEntryContainer<FMovieSceneEvaluationFieldEntityTree::FEntityAndMetaDataIndex>
  *pTVar8;
  
  FMovieSceneEvaluationTree::operator=
            ((FMovieSceneEvaluationTree *)this,(FMovieSceneEvaluationTree *)param_1);
  pTVar8 = &(param_1->SerializedData).Data;
  pTVar1 = &(this->SerializedData).Data;
  if (pTVar1 != pTVar8) {
    iVar4 = (param_1->SerializedData).Data.Entries.ArrayNum;
    piVar2 = &(this->SerializedData).Data.Entries.ArrayMax;
    pFVar6 = (pTVar8->Entries).AllocatorInstance.Data;
    iVar5 = *piVar2;
    (this->SerializedData).Data.Entries.ArrayNum = iVar4;
    if ((iVar4 == 0) && (iVar5 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,iVar4,iVar5,(ForAnyElementType *)pTVar1,iVar4,piVar2);
      if (iVar4 != 0) {
        memcpy((pTVar1->Entries).AllocatorInstance.Data,pFVar6,(longlong)iVar4 * 0xc);
      }
    }
  }
  pTVar3 = &(param_1->SerializedData).Data.Items;
  pTVar7 = &(this->SerializedData).Data.Items;
  if (pTVar7 != pTVar3) {
    iVar4 = (param_1->SerializedData).Data.Items.ArrayNum;
    piVar2 = &(this->SerializedData).Data.Items.ArrayMax;
    pFVar6 = (pTVar3->AllocatorInstance).Data;
    iVar5 = *piVar2;
    (this->SerializedData).Data.Items.ArrayNum = iVar4;
    if ((iVar4 == 0) && (iVar5 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,iVar4,iVar5,&pTVar7->AllocatorInstance,iVar4,piVar2);
      if (iVar4 != 0) {
        memcpy((pTVar7->AllocatorInstance).Data,pFVar6,(longlong)iVar4 << 3);
      }
    }
  }
  return this;
}

// StaticStruct @ 146162fc0

UScriptStruct * __cdecl FMovieSceneEvaluationFieldEntityTree::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneEvaluationFieldEntityTree.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieScene();
    Z_Registration_Info_UScriptStruct_FMovieSceneEvaluationFieldEntityTree.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityTree,
                         (UObject *)pUVar1,L"MovieSceneEvaluationFieldEntityTree");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneEvaluationFieldEntityTree.OuterSingleton;
}

