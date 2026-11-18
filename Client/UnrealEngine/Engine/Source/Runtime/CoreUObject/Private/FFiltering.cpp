// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 3

// MarkDirty @ 141eadb00

void __cdecl UE::AssetRegistry::FFiltering::MarkDirty(void)

{
  return;
}

// ShouldSkipAsset @ 141ebc870

bool __cdecl
UE::AssetRegistry::FFiltering::ShouldSkipAsset(FTopLevelAssetPath *param_1,uint param_2)

{
  return false;
}

// ShouldSkipAsset @ 141ebc880

bool __cdecl UE::AssetRegistry::FFiltering::ShouldSkipAsset(UObject *param_1)

{
  UPackage *pUVar1;
  FTopLevelAssetPath local_18;
  
  if (param_1 != (UObject *)0x0) {
    pUVar1 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)param_1);
    if (pUVar1 != (UPackage *)0x0) {
      UStruct::GetStructPathName(*(UStruct **)&param_1->field_0x10,&local_18);
    }
  }
  return false;
}

