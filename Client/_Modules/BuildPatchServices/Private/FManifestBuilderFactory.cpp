// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 1

// Create @ 143248040

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

TSharedRef<BuildPatchServices::IManifestBuilder,1> * __cdecl
BuildPatchServices::FManifestBuilderFactory::Create
          (TSharedRef<BuildPatchServices::IManifestBuilder,1> *__return_storage_ptr__,
          IFileSystem *param_1,FManifestBuilderConfig *param_2,FManifestDetails *param_3)

{
  FManifestBuilder *this;
  TRawPtrProxy<BuildPatchServices::FManifestBuilder> local_res8;
  
  this = ::operator_new(0xe0);
  local_res8.Object = (FManifestBuilder *)0x0;
  if (this != (FManifestBuilder *)0x0) {
    local_res8.Object = FManifestBuilder::FManifestBuilder(this,param_1,param_2,param_3);
  }
  TSharedRef<BuildPatchServices::IManifestBuilder,1>::
  TSharedRef<BuildPatchServices::IManifestBuilder,1><BuildPatchServices::FManifestBuilder>
            (__return_storage_ptr__,&local_res8);
  return __return_storage_ptr__;
}

