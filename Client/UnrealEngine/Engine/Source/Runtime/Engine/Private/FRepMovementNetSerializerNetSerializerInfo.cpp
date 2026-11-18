// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// GetDefaultConfig @ 1484d8590

FNetSerializerConfig * __cdecl
UE::Net::FRepMovementNetSerializerNetSerializerInfo::GetDefaultConfig(void)

{
  return (FNetSerializerConfig *)&FRepMovementNetSerializer::DefaultConfig;
}

// GetQuantizedTypeAlignment @ 1484d9ef0

uint __cdecl UE::Net::FRepMovementNetSerializerNetSerializerInfo::GetQuantizedTypeAlignment(void)

{
  return 8;
}

// GetQuantizedTypeSize @ 1484d9f00

uint __cdecl UE::Net::FRepMovementNetSerializerNetSerializerInfo::GetQuantizedTypeSize(void)

{
  return 0x98;
}

