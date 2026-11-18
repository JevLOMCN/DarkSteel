// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 1

// FindNode @ 1468b40a0

FMovieSceneSequenceHierarchyNode * __thiscall
FMovieSceneSequenceHierarchy::FindNode
          (FMovieSceneSequenceHierarchy *this,FMovieSceneSequenceID *param_1)

{
  uint uVar1;
  int iVar2;
  FMovieSceneSequenceHierarchyNode *pFVar3;
  FMovieSceneSequenceHierarchyNode *pFVar4;
  undefined1 *puVar5;
  FMovieSceneSequenceHierarchyNode *pFVar6;
  
  uVar1 = param_1->Value;
  if (uVar1 == 0) {
    return &this->RootNode;
  }
  pFVar6 = (FMovieSceneSequenceHierarchyNode *)0x0;
  pFVar3 = pFVar6;
  if (*(int *)&(this->Hierarchy).field_0x8 != *(int *)&(this->Hierarchy).field_0x34) {
    puVar5 = *(undefined1 **)&(this->Hierarchy).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->Hierarchy).field_0x38;
    }
    iVar2 = *(int *)(puVar5 + (ulonglong)(*(int *)&(this->Hierarchy).field_0x48 - 1U & uVar1) * 4);
    if (iVar2 != -1) {
      do {
        pFVar3 = (FMovieSceneSequenceHierarchyNode *)
                 (*(longlong *)&this->Hierarchy + (longlong)iVar2 * 0x28);
        if (*(uint *)(*(longlong *)&this->Hierarchy + (longlong)iVar2 * 0x28) == uVar1) break;
        iVar2 = *(int *)&pFVar3[1].Children.AllocatorInstance.Data;
        pFVar3 = pFVar6;
      } while (iVar2 != -1);
    }
  }
  pFVar4 = (FMovieSceneSequenceHierarchyNode *)&pFVar3->Children;
  if (pFVar3 == (FMovieSceneSequenceHierarchyNode *)0x0) {
    pFVar4 = pFVar6;
  }
  return pFVar4;
}

