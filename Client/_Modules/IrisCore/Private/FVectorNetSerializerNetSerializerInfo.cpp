// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 3

// GetDefaultConfig @ 1443304d0

FNetSerializerConfig * __cdecl
UE::Net::FVectorNetSerializerNetSerializerInfo::GetDefaultConfig(void)

{
  return (FNetSerializerConfig *)&FVectorNetSerializer::DefaultConfig;
}

// GetQuantizedTypeAlignment @ 144330f30

uint __cdecl UE::Net::FVectorNetSerializerNetSerializerInfo::GetQuantizedTypeAlignment(void)

{
  return 8;
}

// GetQuantizedTypeSize @ 144331270

uint __cdecl UE::Net::FVectorNetSerializerNetSerializerInfo::GetQuantizedTypeSize(void)

{
  return 0x18;
}

