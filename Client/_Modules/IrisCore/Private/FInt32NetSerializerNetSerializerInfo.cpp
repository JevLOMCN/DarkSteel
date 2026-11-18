// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 3

// GetDefaultConfig @ 1443301d0

FNetSerializerConfig * __cdecl UE::Net::FInt32NetSerializerNetSerializerInfo::GetDefaultConfig(void)

{
  return (FNetSerializerConfig *)&FInt32NetSerializer::DefaultConfig;
}

// GetQuantizedTypeAlignment @ 144330c30

uint __cdecl UE::Net::FInt32NetSerializerNetSerializerInfo::GetQuantizedTypeAlignment(void)

{
  return 4;
}

// GetQuantizedTypeSize @ 144330f70

uint __cdecl UE::Net::FInt32NetSerializerNetSerializerInfo::GetQuantizedTypeSize(void)

{
  return 4;
}

