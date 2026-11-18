// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 1

// FWidgetMaterialPath @ 1468ffe40

FWidgetMaterialPath * __thiscall
UE::MovieScene::FWidgetMaterialPath::FWidgetMaterialPath
          (FWidgetMaterialPath *this,FWidgetMaterialPath *param_1)

{
  ForElementType<FName> FVar1;
  
  (this->Path).AllocatorInstance.SecondaryData = (ForElementType<FName>)0x0;
  if ((param_1->Path).AllocatorInstance.SecondaryData == (ForElementType<FName>)0x0) {
    memmove(this,param_1,0x10);
  }
  FVar1 = (this->Path).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<FName>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  (this->Path).AllocatorInstance.SecondaryData = (param_1->Path).AllocatorInstance.SecondaryData;
  (param_1->Path).AllocatorInstance.SecondaryData = (ForElementType<FName>)0x0;
  (this->Path).ArrayNum = (param_1->Path).ArrayNum;
  (this->Path).ArrayMax = (param_1->Path).ArrayMax;
  (param_1->Path).ArrayNum = 0;
  (param_1->Path).ArrayMax = 2;
  return this;
}

