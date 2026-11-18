// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 1

// FPendingTileElement @ 146e35de0

FPendingTileElement * __thiscall
FPendingTileElement::FPendingTileElement(FPendingTileElement *this,FPendingTileElement *param_1)

{
  TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  
  pTVar1 = &this->DirtyAreas;
  (this->Coord).field0_0x0 = (param_1->Coord).field0_0x0;
  this->SeedDistance = param_1->SeedDistance;
  this->CreationTime = param_1->CreationTime;
  this->DebugInvokerDistanceSquared = param_1->DebugInvokerDistanceSquared;
  this->DebugInvokerPriority = param_1->DebugInvokerPriority;
  this->SortingPriority = param_1->SortingPriority;
  this->bRebuildGeometry = param_1->bRebuildGeometry;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->DirtyAreas).ArrayMax;
  iVar3 = (param_1->DirtyAreas).ArrayNum;
  _Src = (param_1->DirtyAreas).AllocatorInstance.Data;
  (this->DirtyAreas).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar3 * 0x38);
  }
  return this;
}

