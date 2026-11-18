// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 3

// GetDefaultConfig @ 144330470

FNetSerializerConfig * __cdecl
UE::Net::FVector3dNetSerializerNetSerializerInfo::GetDefaultConfig(void)

{
  return (FNetSerializerConfig *)&FVector3dNetSerializer::DefaultConfig;
}

// GetQuantizedTypeAlignment @ 144330ed0

uint __cdecl UE::Net::FVector3dNetSerializerNetSerializerInfo::GetQuantizedTypeAlignment(void)

{
  return 8;
}

// GetQuantizedTypeSize @ 144331210

uint __cdecl UE::Net::FVector3dNetSerializerNetSerializerInfo::GetQuantizedTypeSize(void)

{
  return 0x18;
}

