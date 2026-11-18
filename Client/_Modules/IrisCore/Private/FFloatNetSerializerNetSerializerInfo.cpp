// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 3

// GetDefaultConfig @ 1443036c0

FNetSerializerConfig * __cdecl UE::Net::FFloatNetSerializerNetSerializerInfo::GetDefaultConfig(void)

{
  return (FNetSerializerConfig *)&FFloatNetSerializer::DefaultConfig;
}

// GetQuantizedTypeAlignment @ 144304520

uint __cdecl UE::Net::FFloatNetSerializerNetSerializerInfo::GetQuantizedTypeAlignment(void)

{
  return 4;
}

// GetQuantizedTypeSize @ 144304630

uint __cdecl UE::Net::FFloatNetSerializerNetSerializerInfo::GetQuantizedTypeSize(void)

{
  return 4;
}

