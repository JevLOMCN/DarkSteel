// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// FWorldCompositionTile @ 148a41ab0

FWorldCompositionTile * __thiscall
FWorldCompositionTile::FWorldCompositionTile
          (FWorldCompositionTile *this,FWorldCompositionTile *param_1)

{
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  
  pTVar1 = &this->LODPackageNames;
  this->PackageName = param_1->PackageName;
  piVar2 = &(this->LODPackageNames).ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->LODPackageNames).ArrayNum;
  _Src = (param_1->LODPackageNames).AllocatorInstance.Data;
  (this->LODPackageNames).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar3 << 3);
  }
  FWorldTileInfo::FWorldTileInfo(&this->Info,&param_1->Info);
  this->StreamingLevelStateChangeTime = param_1->StreamingLevelStateChangeTime;
  return this;
}

