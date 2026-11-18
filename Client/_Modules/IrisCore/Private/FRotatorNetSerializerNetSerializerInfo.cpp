// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 3

// GetDefaultConfig @ 144330350

FNetSerializerConfig * __cdecl
UE::Net::FRotatorNetSerializerNetSerializerInfo::GetDefaultConfig(void)

{
  return (FNetSerializerConfig *)&FRotatorNetSerializer::DefaultConfig;
}

// GetQuantizedTypeAlignment @ 144330db0

uint __cdecl UE::Net::FRotatorNetSerializerNetSerializerInfo::GetQuantizedTypeAlignment(void)

{
  return 2;
}

// GetQuantizedTypeSize @ 1443310f0

uint __cdecl UE::Net::FRotatorNetSerializerNetSerializerInfo::GetQuantizedTypeSize(void)

{
  return 8;
}

