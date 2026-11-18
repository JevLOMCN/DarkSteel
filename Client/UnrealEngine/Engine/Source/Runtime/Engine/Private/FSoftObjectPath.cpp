// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// FSoftObjectPath @ 147e54ce0

FSoftObjectPath * __thiscall
FSoftObjectPath::FSoftObjectPath(FSoftObjectPath *this,FString *param_1)

{
  int iVar1;
  int iVar2;
  TStringView<wchar_t> local_18;
  
  (this->AssetPath).PackageName.ComparisonIndex = 0;
  (this->AssetPath).PackageName.Number = 0;
  (this->AssetPath).AssetName.ComparisonIndex = 0;
  (this->AssetPath).AssetName.Number = 0;
  (this->SubPathString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SubPathString).Data.ArrayNum = 0;
  (this->SubPathString).Data.ArrayMax = 0;
  local_18.DataPtr = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  iVar1 = (param_1->Data).ArrayNum;
  iVar2 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  local_18.Size = iVar2;
  SetPath(this,&local_18);
  return this;
}

