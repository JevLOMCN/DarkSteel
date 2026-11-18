// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 3

// GetDefaultConfig @ 1443303c0

FNetSerializerConfig * __cdecl
UE::Net::FUint16NetSerializerNetSerializerInfo::GetDefaultConfig(void)

{
  return (FNetSerializerConfig *)&FUint16NetSerializer::DefaultConfig;
}

// GetQuantizedTypeAlignment @ 144330e20

uint __cdecl UE::Net::FUint16NetSerializerNetSerializerInfo::GetQuantizedTypeAlignment(void)

{
  return 2;
}

// GetQuantizedTypeSize @ 144331160

uint __cdecl UE::Net::FUint16NetSerializerNetSerializerInfo::GetQuantizedTypeSize(void)

{
  return 2;
}

