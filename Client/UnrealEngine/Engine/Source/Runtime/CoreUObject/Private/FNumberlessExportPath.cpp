// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 3

// ToName @ 141ebe620

FName __thiscall FixedTagPrivate::FNumberlessExportPath::ToName(FNumberlessExportPath *this)

{
  FName in_RDX;
  FName FVar1;
  FName FVar2;
  FTopLevelAssetPath local_48;
  FAssetRegistryExportPath local_38;
  
  FVar2.Number = 0;
  FVar2.ComparisonIndex.Value = (this->ClassObject).Value;
  local_38.Class.ComparisonIndex.Value = 0;
  local_38.Class.Number = 0;
  FVar1.Number = 0;
  FVar1.ComparisonIndex.Value = (this->ClassPackage).Value;
  local_48.PackageName.ComparisonIndex.Value = 0;
  local_48.PackageName.Number = 0;
  local_48.AssetName.ComparisonIndex.Value = 0;
  local_48.AssetName.Number = 0;
  FTopLevelAssetPath::TrySetPath(&local_48,FVar1,FVar2);
  local_38.Object.Number = 0;
  local_38.Object.ComparisonIndex.Value = (this->Object).Value;
  local_38.Package.Number = 0;
  local_38.Package.ComparisonIndex.Value = (this->Package).Value;
  local_38.ClassPath.PackageName = local_48.PackageName;
  local_38.ClassPath.AssetName = local_48.AssetName;
  FAssetRegistryExportPath::ToName(&local_38);
  return in_RDX;
}

// ToString @ 141ebea70

FString * __thiscall
FixedTagPrivate::FNumberlessExportPath::ToString
          (FNumberlessExportPath *this,FString *__return_storage_ptr__)

{
  FName FVar1;
  FName FVar2;
  FTopLevelAssetPath local_48;
  FAssetRegistryExportPath local_38;
  
  FVar2.Number = 0;
  FVar2.ComparisonIndex.Value = (this->ClassObject).Value;
  local_38.Class.ComparisonIndex.Value = 0;
  local_38.Class.Number = 0;
  FVar1.Number = 0;
  FVar1.ComparisonIndex.Value = (this->ClassPackage).Value;
  local_48.PackageName.ComparisonIndex.Value = 0;
  local_48.PackageName.Number = 0;
  local_48.AssetName.ComparisonIndex.Value = 0;
  local_48.AssetName.Number = 0;
  FTopLevelAssetPath::TrySetPath(&local_48,FVar1,FVar2);
  local_38.Object.Number = 0;
  local_38.Object.ComparisonIndex.Value = (this->Object).Value;
  local_38.Package.Number = 0;
  local_38.Package.ComparisonIndex.Value = (this->Package).Value;
  local_38.ClassPath.PackageName = local_48.PackageName;
  local_38.ClassPath.AssetName = local_48.AssetName;
  FAssetRegistryExportPath::ToString(&local_38,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// ToString @ 141ebeb10

void __thiscall
FixedTagPrivate::FNumberlessExportPath::ToString
          (FNumberlessExportPath *this,TStringBuilderBase<wchar_t> *param_1)

{
  FName FVar1;
  wchar_t **ppwVar2;
  FName FVar3;
  FTopLevelAssetPath local_58;
  FTopLevelAssetPath local_48;
  undefined8 local_38;
  FName local_30;
  FName local_28 [2];
  
  FVar3.Number = 0;
  FVar3.ComparisonIndex.Value = (this->ClassObject).Value;
  local_38 = 0;
  FVar1.Number = 0;
  FVar1.ComparisonIndex.Value = (this->ClassPackage).Value;
  local_58.PackageName.ComparisonIndex.Value = 0;
  local_58.PackageName.Number = 0;
  local_58.AssetName.ComparisonIndex.Value = 0;
  local_58.AssetName.Number = 0;
  FTopLevelAssetPath::TrySetPath(&local_58,FVar1,FVar3);
  local_28[0].Number = 0;
  local_28[0].ComparisonIndex.Value = (this->Object).Value;
  ppwVar2 = &param_1->CurPos;
  local_30.Number = 0;
  local_30.ComparisonIndex.Value = (this->Package).Value;
  local_48.PackageName = local_58.PackageName;
  local_48.AssetName = local_58.AssetName;
  if (local_58.PackageName != (FName)0x0) {
    FTopLevelAssetPath::AppendString(&local_48,param_1);
    if (param_1->End < *ppwVar2 + 1) {
      TStringBuilderBase<wchar_t>::Extend(param_1,1);
    }
    **ppwVar2 = L'\'';
    *ppwVar2 = *ppwVar2 + 1;
  }
  ::FName::AppendString(&local_30,param_1);
  if (local_28[0] != (FName)0x0) {
    if (param_1->End < *ppwVar2 + 1) {
      TStringBuilderBase<wchar_t>::Extend(param_1,1);
    }
    **ppwVar2 = L'.';
    *ppwVar2 = *ppwVar2 + 1;
    ::FName::AppendString(local_28,param_1);
  }
  if (local_48.PackageName != (FName)0x0) {
    if (param_1->End < *ppwVar2 + 1) {
      TStringBuilderBase<wchar_t>::Extend(param_1,1);
    }
    ppwVar2 = &param_1->CurPos;
    **ppwVar2 = L'\'';
    *ppwVar2 = *ppwVar2 + 1;
  }
  return;
}

