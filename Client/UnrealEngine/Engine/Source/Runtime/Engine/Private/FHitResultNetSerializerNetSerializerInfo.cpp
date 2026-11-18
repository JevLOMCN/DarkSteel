// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// GetDefaultConfig @ 147bdf6e0

FNetSerializerConfig * __cdecl
UE::Net::FHitResultNetSerializerNetSerializerInfo::GetDefaultConfig(void)

{
  return (FNetSerializerConfig *)&FHitResultNetSerializer::DefaultConfig;
}

// GetQuantizedTypeAlignment @ 147be6830

uint __cdecl UE::Net::FHitResultNetSerializerNetSerializerInfo::GetQuantizedTypeAlignment(void)

{
  return 0x10;
}

// GetQuantizedTypeSize @ 147be6870

uint __cdecl UE::Net::FHitResultNetSerializerNetSerializerInfo::GetQuantizedTypeSize(void)

{
  return 0x140;
}

