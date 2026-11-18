// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 1

// operator= @ 14ccc4fc0

TImageBuilder<UE::Math::TVector4<float>_> * __thiscall
UE::Geometry::TImageBuilder<UE::Math::TVector4<float>_>::operator=
          (TImageBuilder<UE::Math::TVector4<float>_> *this,
          TImageBuilder<UE::Math::TVector4<float>_> *param_1)

{
  TDenseGrid2<UE::Math::TVector4<float>_> *pTVar1;
  TDenseGrid2<UE::Math::TVector4<float>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  
  pTVar1 = &param_1->Image;
  pTVar2 = &this->Image;
  this->Dimensions = param_1->Dimensions;
  if (pTVar2 != pTVar1) {
    pFVar3 = (pTVar2->Buffer).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pTVar2->Buffer).AllocatorInstance.Data = (pTVar1->Buffer).AllocatorInstance.Data;
    (pTVar1->Buffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->Image).Buffer.ArrayNum = (param_1->Image).Buffer.ArrayNum;
    (this->Image).Buffer.ArrayMax = (param_1->Image).Buffer.ArrayMax;
    (param_1->Image).Buffer.ArrayNum = 0;
    (param_1->Image).Buffer.ArrayMax = 0;
  }
  (this->Image).DimensionX = (param_1->Image).DimensionX;
  (this->Image).DimensionY = (param_1->Image).DimensionY;
  return this;
}

