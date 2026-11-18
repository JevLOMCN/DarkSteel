// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 3

// GetDefaultConfig @ 144330340

FNetSerializerConfig * __cdecl
UE::Net::FRotatorAsShortNetSerializerNetSerializerInfo::GetDefaultConfig(void)

{
  return (FNetSerializerConfig *)&FRotatorAsShortNetSerializer::DefaultConfig;
}

// GetQuantizedTypeAlignment @ 144330da0

uint __cdecl UE::Net::FRotatorAsShortNetSerializerNetSerializerInfo::GetQuantizedTypeAlignment(void)

{
  return 2;
}

// GetQuantizedTypeSize @ 1443310e0

uint __cdecl UE::Net::FRotatorAsShortNetSerializerNetSerializerInfo::GetQuantizedTypeSize(void)

{
  return 8;
}

