// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 3

// GetDefaultConfig @ 144330390

FNetSerializerConfig * __cdecl
UE::Net::FSoftObjectPathNetSerializerNetSerializerInfo::GetDefaultConfig(void)

{
  return (FNetSerializerConfig *)&FSoftObjectPathNetSerializer::DefaultConfig;
}

// GetQuantizedTypeAlignment @ 144330df0

uint __cdecl UE::Net::FSoftObjectPathNetSerializerNetSerializerInfo::GetQuantizedTypeAlignment(void)

{
  return 8;
}

// GetQuantizedTypeSize @ 144331130

uint __cdecl UE::Net::FSoftObjectPathNetSerializerNetSerializerInfo::GetQuantizedTypeSize(void)

{
  return 0x10;
}

