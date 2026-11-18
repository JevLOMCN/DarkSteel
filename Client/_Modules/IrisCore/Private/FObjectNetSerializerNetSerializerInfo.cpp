// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 3

// GetDefaultConfig @ 144330280

FNetSerializerConfig * __cdecl
UE::Net::FObjectNetSerializerNetSerializerInfo::GetDefaultConfig(void)

{
  return (FNetSerializerConfig *)&FObjectNetSerializer::DefaultConfig;
}

// GetQuantizedTypeAlignment @ 144330ce0

uint __cdecl UE::Net::FObjectNetSerializerNetSerializerInfo::GetQuantizedTypeAlignment(void)

{
  return 8;
}

// GetQuantizedTypeSize @ 144331020

uint __cdecl UE::Net::FObjectNetSerializerNetSerializerInfo::GetQuantizedTypeSize(void)

{
  return 0x18;
}

