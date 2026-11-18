// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 3

// GetDefaultConfig @ 1443301f0

FNetSerializerConfig * __cdecl UE::Net::FInt64NetSerializerNetSerializerInfo::GetDefaultConfig(void)

{
  return (FNetSerializerConfig *)&FInt64NetSerializer::DefaultConfig;
}

// GetQuantizedTypeAlignment @ 144330c50

uint __cdecl UE::Net::FInt64NetSerializerNetSerializerInfo::GetQuantizedTypeAlignment(void)

{
  return 8;
}

// GetQuantizedTypeSize @ 144330f90

uint __cdecl UE::Net::FInt64NetSerializerNetSerializerInfo::GetQuantizedTypeSize(void)

{
  return 8;
}

