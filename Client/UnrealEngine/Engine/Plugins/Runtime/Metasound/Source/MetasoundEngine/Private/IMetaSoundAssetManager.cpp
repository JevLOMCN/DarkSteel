// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundEngine
// Functions: 5

// ~IMetaSoundAssetManager @ 14b3523c0

void __thiscall
Metasound::Frontend::IMetaSoundAssetManager::~IMetaSoundAssetManager(IMetaSoundAssetManager *this)

{
  return;
}

// AddOrUpdateAsset @ 14b364b90

FMetaSoundAssetKey * __thiscall
Metasound::Frontend::IMetaSoundAssetManager::AddOrUpdateAsset
          (IMetaSoundAssetManager *this,FMetaSoundAssetKey *__return_storage_ptr__,
          FAssetData *param_1)

{
  (__return_storage_ptr__->Version).Major = 1;
  (__return_storage_ptr__->Version).Minor = 0;
  (__return_storage_ptr__->ClassName).Namespace.ComparisonIndex = 0;
  (__return_storage_ptr__->ClassName).Namespace.Number = 0;
  (__return_storage_ptr__->ClassName).Name.ComparisonIndex = 0;
  (__return_storage_ptr__->ClassName).Name.Number = 0;
  (__return_storage_ptr__->ClassName).Variant.ComparisonIndex = 0;
  (__return_storage_ptr__->ClassName).Variant.Number = 0;
  return __return_storage_ptr__;
}

// AddOrUpdateAsset @ 14b364bb0

FMetaSoundAssetKey * __thiscall
Metasound::Frontend::IMetaSoundAssetManager::AddOrUpdateAsset
          (IMetaSoundAssetManager *this,FMetaSoundAssetKey *__return_storage_ptr__,UObject *param_1)

{
  (__return_storage_ptr__->Version).Major = 1;
  (__return_storage_ptr__->Version).Minor = 0;
  (__return_storage_ptr__->ClassName).Namespace.ComparisonIndex = 0;
  (__return_storage_ptr__->ClassName).Namespace.Number = 0;
  (__return_storage_ptr__->ClassName).Name.ComparisonIndex = 0;
  (__return_storage_ptr__->ClassName).Name.Number = 0;
  (__return_storage_ptr__->ClassName).Variant.ComparisonIndex = 0;
  (__return_storage_ptr__->ClassName).Variant.Number = 0;
  return __return_storage_ptr__;
}

// CanAutoUpdate @ 14b3681a0

bool __thiscall
Metasound::Frontend::IMetaSoundAssetManager::CanAutoUpdate
          (IMetaSoundAssetManager *this,FMetasoundFrontendClassName *param_1)

{
  return true;
}

// IterateAssets @ 14b3c8fa0

void __thiscall
Metasound::Frontend::IMetaSoundAssetManager::IterateAssets
          (IMetaSoundAssetManager *this,
          TFunctionRef<void___cdecl(FMetaSoundAssetKey,TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_>_const_&)>
          *param_1)

{
  return;
}

