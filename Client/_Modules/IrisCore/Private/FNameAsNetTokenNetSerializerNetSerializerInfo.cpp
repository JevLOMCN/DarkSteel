// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 3

// GetDefaultConfig @ 144330240

FNetSerializerConfig * __cdecl
UE::Net::FNameAsNetTokenNetSerializerNetSerializerInfo::GetDefaultConfig(void)

{
  return (FNetSerializerConfig *)&FNameAsNetTokenNetSerializer::DefaultConfig;
}

// GetQuantizedTypeAlignment @ 144330ca0

uint __cdecl UE::Net::FNameAsNetTokenNetSerializerNetSerializerInfo::GetQuantizedTypeAlignment(void)

{
  return 4;
}

// GetQuantizedTypeSize @ 144330fe0

uint __cdecl UE::Net::FNameAsNetTokenNetSerializerNetSerializerInfo::GetQuantizedTypeSize(void)

{
  return 0xc;
}

