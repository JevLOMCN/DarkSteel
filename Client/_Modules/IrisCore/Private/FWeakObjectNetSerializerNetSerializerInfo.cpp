// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 3

// GetDefaultConfig @ 1443304e0

FNetSerializerConfig * __cdecl
UE::Net::FWeakObjectNetSerializerNetSerializerInfo::GetDefaultConfig(void)

{
  return (FNetSerializerConfig *)&FWeakObjectNetSerializer::DefaultConfig;
}

// GetQuantizedTypeAlignment @ 144330f40

uint __cdecl UE::Net::FWeakObjectNetSerializerNetSerializerInfo::GetQuantizedTypeAlignment(void)

{
  return 8;
}

// GetQuantizedTypeSize @ 144331280

uint __cdecl UE::Net::FWeakObjectNetSerializerNetSerializerInfo::GetQuantizedTypeSize(void)

{
  return 0x18;
}

