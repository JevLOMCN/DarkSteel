// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 2

// StaticStruct @ 146168540

UScriptStruct * __cdecl FMovieSceneSequenceHierarchyNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneSequenceHierarchyNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieScene();
    Z_Registration_Info_UScriptStruct_FMovieSceneSequenceHierarchyNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchyNode,
                         (UObject *)pUVar1,L"MovieSceneSequenceHierarchyNode");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneSequenceHierarchyNode.OuterSingleton;
}

// FMovieSceneSequenceHierarchyNode @ 146180350

FMovieSceneSequenceHierarchyNode * __thiscall
FMovieSceneSequenceHierarchyNode::FMovieSceneSequenceHierarchyNode
          (FMovieSceneSequenceHierarchyNode *this,FMovieSceneSequenceHierarchyNode *param_1)

{
  TArray<FMovieSceneSequenceID,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  
  pTVar1 = &this->Children;
  (this->ParentID).Value = (param_1->ParentID).Value;
  piVar2 = &(this->Children).ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->Children).ArrayNum;
  _Src = (param_1->Children).AllocatorInstance.Data;
  (this->Children).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar3 << 2);
  }
  return this;
}

