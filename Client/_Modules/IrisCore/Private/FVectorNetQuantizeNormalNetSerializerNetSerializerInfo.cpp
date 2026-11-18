// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 3

// GetDefaultConfig @ 1443304c0

FNetSerializerConfig * __cdecl
UE::Net::FVectorNetQuantizeNormalNetSerializerNetSerializerInfo::GetDefaultConfig(void)

{
  return (FNetSerializerConfig *)&FVectorNetQuantizeNormalNetSerializer::DefaultConfig;
}

// GetQuantizedTypeAlignment @ 144330f20

uint __cdecl
UE::Net::FVectorNetQuantizeNormalNetSerializerNetSerializerInfo::GetQuantizedTypeAlignment(void)

{
  return 4;
}

// GetQuantizedTypeSize @ 144331260

uint __cdecl
UE::Net::FVectorNetQuantizeNormalNetSerializerNetSerializerInfo::GetQuantizedTypeSize(void)

{
  return 0x10;
}

