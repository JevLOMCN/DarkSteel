// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuCO
// Functions: 1

// FMutableMaterialPlaceHolderParam @ 14abbc810

FMutableMaterialPlaceHolderParam * __thiscall
FMutableMaterialPlaceholder::FMutableMaterialPlaceHolderParam::FMutableMaterialPlaceHolderParam
          (FMutableMaterialPlaceHolderParam *this,FMutableMaterialPlaceHolderParam *param_1)

{
  UTexture *pUVar1;
  undefined8 uVar2;
  
  this->ParamName = param_1->ParamName;
  this->Type = param_1->Type;
  this->LayerIndex = param_1->LayerIndex;
  this->Scalar = param_1->Scalar;
  uVar2 = *(undefined8 *)((longlong)&(param_1->Vector).field0_0x0 + 8);
  *(undefined8 *)&(this->Vector).field0_0x0 = *(undefined8 *)&(param_1->Vector).field0_0x0;
  *(undefined8 *)((longlong)&(this->Vector).field0_0x0 + 8) = uVar2;
  ::FString::FString(&(this->Texture).Name,&(param_1->Texture).Name);
  pUVar1 = (param_1->Texture).Texture.field0_0x0.DebugPtr;
  (this->Texture).Texture.field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UTexture *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  return this;
}

