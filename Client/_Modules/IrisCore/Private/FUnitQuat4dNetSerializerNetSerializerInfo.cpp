// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 3

// GetDefaultConfig @ 144330440

FNetSerializerConfig * __cdecl
UE::Net::FUnitQuat4dNetSerializerNetSerializerInfo::GetDefaultConfig(void)

{
  return (FNetSerializerConfig *)&FUnitQuat4dNetSerializer::DefaultConfig;
}

// GetQuantizedTypeAlignment @ 144330ea0

uint __cdecl UE::Net::FUnitQuat4dNetSerializerNetSerializerInfo::GetQuantizedTypeAlignment(void)

{
  return 8;
}

// GetQuantizedTypeSize @ 1443311e0

uint __cdecl UE::Net::FUnitQuat4dNetSerializerNetSerializerInfo::GetQuantizedTypeSize(void)

{
  return 0x20;
}

