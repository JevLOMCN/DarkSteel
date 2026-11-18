// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 3

// GetDefaultConfig @ 144330400

FNetSerializerConfig * __cdecl
UE::Net::FUint64NetSerializerNetSerializerInfo::GetDefaultConfig(void)

{
  return (FNetSerializerConfig *)&FUint64NetSerializer::DefaultConfig;
}

// GetQuantizedTypeAlignment @ 144330e60

uint __cdecl UE::Net::FUint64NetSerializerNetSerializerInfo::GetQuantizedTypeAlignment(void)

{
  return 8;
}

// GetQuantizedTypeSize @ 1443311a0

uint __cdecl UE::Net::FUint64NetSerializerNetSerializerInfo::GetQuantizedTypeSize(void)

{
  return 8;
}

