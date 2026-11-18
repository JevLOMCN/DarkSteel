// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 3

// GetDefaultConfig @ 144330450

FNetSerializerConfig * __cdecl
UE::Net::FUnitQuat4fNetSerializerNetSerializerInfo::GetDefaultConfig(void)

{
  return (FNetSerializerConfig *)&FUnitQuat4fNetSerializer::DefaultConfig;
}

// GetQuantizedTypeAlignment @ 144330eb0

uint __cdecl UE::Net::FUnitQuat4fNetSerializerNetSerializerInfo::GetQuantizedTypeAlignment(void)

{
  return 4;
}

// GetQuantizedTypeSize @ 1443311f0

uint __cdecl UE::Net::FUnitQuat4fNetSerializerNetSerializerInfo::GetQuantizedTypeSize(void)

{
  return 0x10;
}

