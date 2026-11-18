// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 3

// GetDefaultConfig @ 1443303a0

FNetSerializerConfig * __cdecl
UE::Net::FStringNetSerializerNetSerializerInfo::GetDefaultConfig(void)

{
  return (FNetSerializerConfig *)&FStringNetSerializer::DefaultConfig;
}

// GetQuantizedTypeAlignment @ 144330e00

uint __cdecl UE::Net::FStringNetSerializerNetSerializerInfo::GetQuantizedTypeAlignment(void)

{
  return 8;
}

// GetQuantizedTypeSize @ 144331140

uint __cdecl UE::Net::FStringNetSerializerNetSerializerInfo::GetQuantizedTypeSize(void)

{
  return 0x10;
}

