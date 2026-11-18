// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeCore
// Functions: 1

// FSoftObjectPath @ 14e400a40

FSoftObjectPath * __thiscall
FSoftObjectPath::FSoftObjectPath(FSoftObjectPath *this,UObject *param_1)

{
  (this->AssetPath).PackageName.ComparisonIndex = 0;
  (this->AssetPath).PackageName.Number = 0;
  (this->AssetPath).AssetName.ComparisonIndex = 0;
  (this->AssetPath).AssetName.Number = 0;
  (this->SubPathString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SubPathString).Data.ArrayNum = 0;
  (this->SubPathString).Data.ArrayMax = 0;
  SetPath(this,param_1);
  return this;
}

