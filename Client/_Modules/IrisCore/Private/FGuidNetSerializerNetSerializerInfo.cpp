// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 3

// GetDefaultConfig @ 1443036d0

FNetSerializerConfig * __cdecl UE::Net::FGuidNetSerializerNetSerializerInfo::GetDefaultConfig(void)

{
  return (FNetSerializerConfig *)&FGuidNetSerializer::DefaultConfig;
}

// GetQuantizedTypeAlignment @ 144304530

uint __cdecl UE::Net::FGuidNetSerializerNetSerializerInfo::GetQuantizedTypeAlignment(void)

{
  return 4;
}

// GetQuantizedTypeSize @ 144304640

uint __cdecl UE::Net::FGuidNetSerializerNetSerializerInfo::GetQuantizedTypeSize(void)

{
  return 0x10;
}

