// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuR
// Functions: 2

// Serialise @ 14aaf4b60

void __thiscall
UE::Mutable::Private::FMipmapGenerationSettings::Serialise
          (FMipmapGenerationSettings *this,FOutputArchive *param_1)

{
  EMipmapFilterType local_res8 [2];
  
  local_res8[0] = this->FilterType;
  (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,local_res8,4);
  local_res8[0] = this->AddressMode;
  (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,local_res8,4);
  return;
}

// Unserialise @ 14aafd5b0

void __thiscall
UE::Mutable::Private::FMipmapGenerationSettings::Unserialise
          (FMipmapGenerationSettings *this,FInputArchive *param_1)

{
  EMipmapFilterType local_res8 [2];
  
  (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,local_res8,4);
  this->FilterType = local_res8[0];
  (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,local_res8,4);
  this->AddressMode = local_res8[0];
  return;
}

