// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 3

// GetDefaultConfig @ 144330370

FNetSerializerConfig * __cdecl
UE::Net::FSoftClassPathNetSerializerNetSerializerInfo::GetDefaultConfig(void)

{
  return (FNetSerializerConfig *)&FSoftClassPathNetSerializer::DefaultConfig;
}

// GetQuantizedTypeAlignment @ 144330dd0

uint __cdecl UE::Net::FSoftClassPathNetSerializerNetSerializerInfo::GetQuantizedTypeAlignment(void)

{
  return 8;
}

// GetQuantizedTypeSize @ 144331110

uint __cdecl UE::Net::FSoftClassPathNetSerializerNetSerializerInfo::GetQuantizedTypeSize(void)

{
  return 0x10;
}

