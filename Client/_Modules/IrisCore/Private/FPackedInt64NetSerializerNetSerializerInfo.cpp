// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 3

// GetDefaultConfig @ 1443302b0

FNetSerializerConfig * __cdecl
UE::Net::FPackedInt64NetSerializerNetSerializerInfo::GetDefaultConfig(void)

{
  return (FNetSerializerConfig *)&FPackedInt64NetSerializer::DefaultConfig;
}

// GetQuantizedTypeAlignment @ 144330d10

uint __cdecl UE::Net::FPackedInt64NetSerializerNetSerializerInfo::GetQuantizedTypeAlignment(void)

{
  return 8;
}

// GetQuantizedTypeSize @ 144331050

uint __cdecl UE::Net::FPackedInt64NetSerializerNetSerializerInfo::GetQuantizedTypeSize(void)

{
  return 8;
}

