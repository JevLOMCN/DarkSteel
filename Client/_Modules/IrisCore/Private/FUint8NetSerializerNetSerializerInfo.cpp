// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 3

// GetDefaultConfig @ 144330420

FNetSerializerConfig * __cdecl UE::Net::FUint8NetSerializerNetSerializerInfo::GetDefaultConfig(void)

{
  return (FNetSerializerConfig *)&FUint8NetSerializer::DefaultConfig;
}

// GetQuantizedTypeAlignment @ 144330e80

uint __cdecl UE::Net::FUint8NetSerializerNetSerializerInfo::GetQuantizedTypeAlignment(void)

{
  return 1;
}

// GetQuantizedTypeSize @ 1443311c0

uint __cdecl UE::Net::FUint8NetSerializerNetSerializerInfo::GetQuantizedTypeSize(void)

{
  return 1;
}

