// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundGenerator
// Functions: 1

// FromInitParams @ 14b2b0c60

FOperatorContext * __cdecl
Metasound::FOperatorContext::FromInitParams
          (FOperatorContext *__return_storage_ptr__,FGeneratorInitParams *param_1)

{
  IGraph *pIVar1;
  FName FVar2;
  FTopLevelAssetPath *pFVar3;
  
  pIVar1 = (param_1->Graph).Object;
  if (pIVar1 == (IGraph *)0x0) {
    pFVar3 = &param_1->AssetPath;
  }
  else {
    pFVar3 = (FTopLevelAssetPath *)(**(code **)((longlong)*pIVar1 + 0x50))();
  }
  FVar2 = pFVar3->AssetName;
  (__return_storage_ptr__->GraphAssetPath).PackageName = pFVar3->PackageName;
  (__return_storage_ptr__->GraphAssetPath).AssetName = FVar2;
  FVar2 = (param_1->AssetPath).AssetName;
  (__return_storage_ptr__->AssetPath).PackageName = (param_1->AssetPath).PackageName;
  (__return_storage_ptr__->AssetPath).AssetName = FVar2;
  return __return_storage_ptr__;
}

