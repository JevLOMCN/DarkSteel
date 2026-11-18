// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 3

// GetDefaultConfig @ 1443301b0

FNetSerializerConfig * __cdecl UE::Net::FInt16NetSerializerNetSerializerInfo::GetDefaultConfig(void)

{
  return (FNetSerializerConfig *)&FInt16NetSerializer::DefaultConfig;
}

// GetQuantizedTypeAlignment @ 144330c10

uint __cdecl UE::Net::FInt16NetSerializerNetSerializerInfo::GetQuantizedTypeAlignment(void)

{
  return 2;
}

// GetQuantizedTypeSize @ 144330f50

uint __cdecl UE::Net::FInt16NetSerializerNetSerializerInfo::GetQuantizedTypeSize(void)

{
  return 2;
}

