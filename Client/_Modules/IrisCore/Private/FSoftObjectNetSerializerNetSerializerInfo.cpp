// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 3

// GetDefaultConfig @ 144330380

FNetSerializerConfig * __cdecl
UE::Net::FSoftObjectNetSerializerNetSerializerInfo::GetDefaultConfig(void)

{
  return (FNetSerializerConfig *)&FSoftObjectNetSerializer::DefaultConfig;
}

// GetQuantizedTypeAlignment @ 144330de0

uint __cdecl UE::Net::FSoftObjectNetSerializerNetSerializerInfo::GetQuantizedTypeAlignment(void)

{
  return 8;
}

// GetQuantizedTypeSize @ 144331120

uint __cdecl UE::Net::FSoftObjectNetSerializerNetSerializerInfo::GetQuantizedTypeSize(void)

{
  return 0x30;
}

