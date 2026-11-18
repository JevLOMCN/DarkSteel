// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 2

// StaticStruct @ 146168750

UScriptStruct * __cdecl FMovieSceneSubSequenceTree::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneSubSequenceTree.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieScene();
    Z_Registration_Info_UScriptStruct_FMovieSceneSubSequenceTree.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneSubSequenceTree,(UObject *)pUVar1,
                         L"MovieSceneSubSequenceTree");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneSubSequenceTree.OuterSingleton;
}

// operator= @ 146186af0

FMovieSceneSubSequenceTree * __thiscall
FMovieSceneSubSequenceTree::operator=
          (FMovieSceneSubSequenceTree *this,FMovieSceneSubSequenceTree *param_1)

{
  TEvaluationTreeEntryContainer<FMovieSceneSubSequenceTreeEntry> *pTVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *_Src;
  FMovieSceneSubSequenceTreeEntry *pFVar5;
  TArray<FMovieSceneSubSequenceTreeEntry,TSizedDefaultAllocator<32>_> *pTVar6;
  TEvaluationTreeEntryContainer<FMovieSceneSubSequenceTreeEntry> *pTVar7;
  TArray<FMovieSceneSubSequenceTreeEntry,TSizedDefaultAllocator<32>_> *pTVar8;
  
  FMovieSceneEvaluationTree::operator=
            ((FMovieSceneEvaluationTree *)this,(FMovieSceneEvaluationTree *)param_1);
  pTVar7 = &(param_1->Data).Data;
  pTVar1 = &(this->Data).Data;
  if (pTVar1 != pTVar7) {
    iVar3 = (param_1->Data).Data.Entries.ArrayNum;
    piVar2 = &(this->Data).Data.Entries.ArrayMax;
    _Src = (pTVar7->Entries).AllocatorInstance.Data;
    iVar4 = *piVar2;
    (this->Data).Data.Entries.ArrayNum = iVar3;
    if ((iVar3 == 0) && (iVar4 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,iVar3,iVar4,(ForAnyElementType *)pTVar1,iVar3,piVar2);
      if (iVar3 != 0) {
        memcpy((pTVar1->Entries).AllocatorInstance.Data,_Src,(longlong)iVar3 * 0xc);
      }
    }
  }
  pTVar8 = &(param_1->Data).Data.Items;
  pTVar6 = &(this->Data).Data.Items;
  if (pTVar6 != pTVar8) {
    DestructItems<FMovieSceneSubSequenceTreeEntry,int>
              ((FMovieSceneSubSequenceTreeEntry *)(pTVar6->AllocatorInstance).Data,
               (this->Data).Data.Items.ArrayNum);
    iVar3 = (param_1->Data).Data.Items.ArrayNum;
    piVar2 = &(this->Data).Data.Items.ArrayMax;
    pFVar5 = (FMovieSceneSubSequenceTreeEntry *)(pTVar8->AllocatorInstance).Data;
    iVar4 = *piVar2;
    (this->Data).Data.Items.ArrayNum = iVar3;
    if ((iVar3 == 0) && (iVar4 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,iVar3,iVar4,&pTVar6->AllocatorInstance,iVar3,piVar2);
      ConstructItems<FMovieSceneSubSequenceTreeEntry,FMovieSceneSubSequenceTreeEntry,int>
                ((pTVar6->AllocatorInstance).Data,pFVar5,iVar3);
    }
  }
  return this;
}

