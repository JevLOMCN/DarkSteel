// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// FMaterialCacheTileEntry @ 144e72760

FMaterialCacheTileEntry * __thiscall
FMaterialCacheTileEntry::FMaterialCacheTileEntry
          (FMaterialCacheTileEntry *this,FMaterialCacheTileEntry *param_1)

{
  int *piVar1;
  int iVar2;
  ForElementType<FVTProduceTargetLayer> FVar3;
  ForElementType<FVTProduceTargetLayer> _Dst;
  ForElementType<FVTProduceTargetLayer> _Src;
  
  (this->TargetLayers).AllocatorInstance.SecondaryData = (ForElementType<FVTProduceTargetLayer>)0x0;
  FVar3 = (param_1->TargetLayers).AllocatorInstance.SecondaryData;
  iVar2 = (param_1->TargetLayers).ArrayNum;
  (this->TargetLayers).ArrayNum = iVar2;
  _Src = (ForElementType<FVTProduceTargetLayer>)param_1;
  if (FVar3 != (ForElementType<FVTProduceTargetLayer>)0x0) {
    _Src = FVar3;
  }
  piVar1 = &(this->TargetLayers).ArrayMax;
  if (iVar2 == 0) {
    *piVar1 = 8;
  }
  else {
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FVTProduceTargetLayer>_>
              (0x20,8,iVar2,0,(ForElementType<FVTProduceTargetLayer> *)this,iVar2,piVar1);
    FVar3 = (this->TargetLayers).AllocatorInstance.SecondaryData;
    _Dst = (ForElementType<FVTProduceTargetLayer>)this;
    if (FVar3 != (ForElementType<FVTProduceTargetLayer>)0x0) {
      _Dst = FVar3;
    }
    memcpy((void *)_Dst,(void *)_Src,(longlong)iVar2 << 5);
  }
  this->Address = param_1->Address;
  this->Level = param_1->Level;
  return this;
}

