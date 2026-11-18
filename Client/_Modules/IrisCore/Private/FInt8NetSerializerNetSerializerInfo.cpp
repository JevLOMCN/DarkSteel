// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 3

// GetDefaultConfig @ 144330210

FNetSerializerConfig * __cdecl UE::Net::FInt8NetSerializerNetSerializerInfo::GetDefaultConfig(void)

{
  return (FNetSerializerConfig *)&FInt8NetSerializer::DefaultConfig;
}

// GetQuantizedTypeAlignment @ 144330c70

uint __cdecl UE::Net::FInt8NetSerializerNetSerializerInfo::GetQuantizedTypeAlignment(void)

{
  return 1;
}

// GetQuantizedTypeSize @ 144330fb0

uint __cdecl UE::Net::FInt8NetSerializerNetSerializerInfo::GetQuantizedTypeSize(void)

{
  return 1;
}

