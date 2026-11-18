// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// HasMergedInstances @ 144d8b440

bool __thiscall FLumenPrimitiveGroup::HasMergedInstances(FLumenPrimitiveGroup *this)

{
  int iVar1;
  ForElementType<FPrimitiveSceneInfo_*> FVar2;
  TArray<FPrimitiveSceneInfo_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *pTVar3;
  uint uVar4;
  undefined1 local_res8 [8];
  
  if (-1 < this->PrimitiveInstanceIndex) {
    return false;
  }
  FVar2 = (this->Primitives).AllocatorInstance.SecondaryData;
  iVar1 = (this->Primitives).ArrayNum;
  uVar4 = 0;
  pTVar3 = &this->Primitives;
  if (FVar2 != (ForElementType<FPrimitiveSceneInfo_*>)0x0) {
    this = (FLumenPrimitiveGroup *)FVar2;
  }
  FVar2 = (ForElementType<FPrimitiveSceneInfo_*>)((longlong)this + (longlong)iVar1 * 8);
  while( true ) {
    if (pTVar3->ArrayNum != iVar1) {
      `TCheckedPointerIterator<FPrimitiveSceneInfo_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if ((ForElementType<FPrimitiveSceneInfo_*>)this == FVar2) break;
    uVar4 = uVar4 + *(int *)(*(longlong *)this + 0x228);
    if (1 < uVar4) {
      return true;
    }
    this = (FLumenPrimitiveGroup *)((longlong)this + 8);
  }
  return false;
}

