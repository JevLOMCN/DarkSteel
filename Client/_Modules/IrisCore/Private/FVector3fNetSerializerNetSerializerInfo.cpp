// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 3

// GetDefaultConfig @ 144330480

FNetSerializerConfig * __cdecl
UE::Net::FVector3fNetSerializerNetSerializerInfo::GetDefaultConfig(void)

{
  return (FNetSerializerConfig *)&FVector3fNetSerializer::DefaultConfig;
}

// GetQuantizedTypeAlignment @ 144330ee0

uint __cdecl UE::Net::FVector3fNetSerializerNetSerializerInfo::GetQuantizedTypeAlignment(void)

{
  return 4;
}

// GetQuantizedTypeSize @ 144331220

uint __cdecl UE::Net::FVector3fNetSerializerNetSerializerInfo::GetQuantizedTypeSize(void)

{
  return 0xc;
}

