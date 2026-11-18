// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 3

// GetDefaultConfig @ 144330310

FNetSerializerConfig * __cdecl
UE::Net::FRotator3dNetSerializerNetSerializerInfo::GetDefaultConfig(void)

{
  return (FNetSerializerConfig *)&FRotator3dNetSerializer::DefaultConfig;
}

// GetQuantizedTypeAlignment @ 144330d70

uint __cdecl UE::Net::FRotator3dNetSerializerNetSerializerInfo::GetQuantizedTypeAlignment(void)

{
  return 2;
}

// GetQuantizedTypeSize @ 1443310b0

uint __cdecl UE::Net::FRotator3dNetSerializerNetSerializerInfo::GetQuantizedTypeSize(void)

{
  return 8;
}

