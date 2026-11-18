// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// FMaterialCacheTagLayout @ 147ea5fb0

FMaterialCacheTagLayout * __thiscall
FMaterialCacheTagLayout::FMaterialCacheTagLayout
          (FMaterialCacheTagLayout *this,FMaterialCacheTagLayout *param_1)

{
  ForElementType<FMaterialCacheLayer> FVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = (param_1->Guid).B;
  uVar3 = (param_1->Guid).C;
  uVar4 = (param_1->Guid).D;
  (this->Guid).A = (param_1->Guid).A;
  (this->Guid).B = uVar2;
  (this->Guid).C = uVar3;
  (this->Guid).D = uVar4;
  (this->Layers).AllocatorInstance.SecondaryData = (ForElementType<FMaterialCacheLayer>)0x0;
  if ((param_1->Layers).AllocatorInstance.SecondaryData == (ForElementType<FMaterialCacheLayer>)0x0)
  {
    memmove(&this->Layers,&param_1->Layers,0xc0);
  }
  FVar1 = (this->Layers).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<FMaterialCacheLayer>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  (this->Layers).AllocatorInstance.SecondaryData = (param_1->Layers).AllocatorInstance.SecondaryData
  ;
  (param_1->Layers).AllocatorInstance.SecondaryData = (ForElementType<FMaterialCacheLayer>)0x0;
  (this->Layers).ArrayNum = (param_1->Layers).ArrayNum;
  (this->Layers).ArrayMax = (param_1->Layers).ArrayMax;
  (param_1->Layers).ArrayNum = 0;
  (param_1->Layers).ArrayMax = 8;
  return this;
}

