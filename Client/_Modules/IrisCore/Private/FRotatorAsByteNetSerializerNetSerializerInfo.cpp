// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 3

// GetDefaultConfig @ 144330330

FNetSerializerConfig * __cdecl
UE::Net::FRotatorAsByteNetSerializerNetSerializerInfo::GetDefaultConfig(void)

{
  return (FNetSerializerConfig *)&FRotatorAsByteNetSerializer::DefaultConfig;
}

// GetQuantizedTypeAlignment @ 144330d90

uint __cdecl UE::Net::FRotatorAsByteNetSerializerNetSerializerInfo::GetQuantizedTypeAlignment(void)

{
  return 1;
}

// GetQuantizedTypeSize @ 1443310d0

uint __cdecl UE::Net::FRotatorAsByteNetSerializerNetSerializerInfo::GetQuantizedTypeSize(void)

{
  return 4;
}

