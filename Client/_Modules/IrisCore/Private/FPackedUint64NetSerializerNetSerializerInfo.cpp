// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 3

// GetDefaultConfig @ 1443302d0

FNetSerializerConfig * __cdecl
UE::Net::FPackedUint64NetSerializerNetSerializerInfo::GetDefaultConfig(void)

{
  return (FNetSerializerConfig *)&FPackedUint64NetSerializer::DefaultConfig;
}

// GetQuantizedTypeAlignment @ 144330d30

uint __cdecl UE::Net::FPackedUint64NetSerializerNetSerializerInfo::GetQuantizedTypeAlignment(void)

{
  return 8;
}

// GetQuantizedTypeSize @ 144331070

uint __cdecl UE::Net::FPackedUint64NetSerializerNetSerializerInfo::GetQuantizedTypeSize(void)

{
  return 8;
}

