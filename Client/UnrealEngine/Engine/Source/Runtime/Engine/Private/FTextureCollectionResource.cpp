// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// FTextureCollectionResource @ 14887cc80

FTextureCollectionResource * __thiscall
FTextureCollectionResource::FTextureCollectionResource
          (FTextureCollectionResource *this,UTextureCollection *param_1)

{
  undefined4 uVar1;
  
  FRenderResource::FRenderResource((FRenderResource *)this);
  this->bIsBindless = false;
  this->_padding_ = (longlong)&___7FTextureCollectionResource__6B_;
  (this->CollectionName).ComparisonIndex = 0;
  (this->CollectionName).Number = 0;
  uVar1 = *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  (this->CollectionName).ComparisonIndex = (FNameEntryId)*(undefined4 *)&param_1->_padding_;
  (this->CollectionName).Number = uVar1;
  return this;
}

