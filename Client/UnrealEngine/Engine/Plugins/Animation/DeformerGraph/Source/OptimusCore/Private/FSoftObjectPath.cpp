// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 1

// FSoftObjectPath @ 14e157d40

FSoftObjectPath * __thiscall FSoftObjectPath::FSoftObjectPath(FSoftObjectPath *this)

{
  (this->AssetPath).PackageName.ComparisonIndex = 0;
  (this->AssetPath).PackageName.Number = 0;
  (this->AssetPath).AssetName.ComparisonIndex = 0;
  (this->AssetPath).AssetName.Number = 0;
  (this->SubPathString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SubPathString).Data.ArrayNum = 0;
  (this->SubPathString).Data.ArrayMax = 0;
  return this;
}

