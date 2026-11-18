// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 3

// GetDefaultConfig @ 144330320

FNetSerializerConfig * __cdecl
UE::Net::FRotator3fNetSerializerNetSerializerInfo::GetDefaultConfig(void)

{
  return (FNetSerializerConfig *)&FRotator3fNetSerializer::DefaultConfig;
}

// GetQuantizedTypeAlignment @ 144330d80

uint __cdecl UE::Net::FRotator3fNetSerializerNetSerializerInfo::GetQuantizedTypeAlignment(void)

{
  return 2;
}

// GetQuantizedTypeSize @ 1443310c0

uint __cdecl UE::Net::FRotator3fNetSerializerNetSerializerInfo::GetQuantizedTypeSize(void)

{
  return 8;
}

