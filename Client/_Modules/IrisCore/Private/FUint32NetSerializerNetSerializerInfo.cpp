// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 3

// GetDefaultConfig @ 1443303e0

FNetSerializerConfig * __cdecl
UE::Net::FUint32NetSerializerNetSerializerInfo::GetDefaultConfig(void)

{
  return (FNetSerializerConfig *)&FUint32NetSerializer::DefaultConfig;
}

// GetQuantizedTypeAlignment @ 144330e40

uint __cdecl UE::Net::FUint32NetSerializerNetSerializerInfo::GetQuantizedTypeAlignment(void)

{
  return 4;
}

// GetQuantizedTypeSize @ 144331180

uint __cdecl UE::Net::FUint32NetSerializerNetSerializerInfo::GetQuantizedTypeSize(void)

{
  return 4;
}

