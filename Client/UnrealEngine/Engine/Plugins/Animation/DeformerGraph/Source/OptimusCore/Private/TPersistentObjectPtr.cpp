// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 1

// Reset @ 14e219120

void __thiscall
TPersistentObjectPtr<FSoftObjectPath>::Reset(TPersistentObjectPtr<FSoftObjectPath> *this)

{
  (this->WeakPtr).ObjectIndex = 0;
  (this->WeakPtr).ObjectSerialNumber = 0;
  (this->ObjectID).AssetPath.AssetName.ComparisonIndex = 0;
  (this->ObjectID).AssetPath.AssetName.Number = 0;
  (this->ObjectID).AssetPath.PackageName.ComparisonIndex = 0;
  (this->ObjectID).AssetPath.PackageName.Number = 0;
  FUtf8String::Reset(&(this->ObjectID).SubPathString,0);
  return;
}

