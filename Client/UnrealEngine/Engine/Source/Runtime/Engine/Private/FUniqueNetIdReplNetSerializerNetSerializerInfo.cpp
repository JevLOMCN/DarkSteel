// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// GetDefaultConfig @ 147bdf700

FNetSerializerConfig * __cdecl
UE::Net::FUniqueNetIdReplNetSerializerNetSerializerInfo::GetDefaultConfig(void)

{
  return (FNetSerializerConfig *)&FUniqueNetIdReplNetSerializer::DefaultConfig;
}

// GetQuantizedTypeAlignment @ 147be6850

uint __cdecl
UE::Net::FUniqueNetIdReplNetSerializerNetSerializerInfo::GetQuantizedTypeAlignment(void)

{
  return 8;
}

// GetQuantizedTypeSize @ 147be6890

uint __cdecl UE::Net::FUniqueNetIdReplNetSerializerNetSerializerInfo::GetQuantizedTypeSize(void)

{
  return 0x40;
}

