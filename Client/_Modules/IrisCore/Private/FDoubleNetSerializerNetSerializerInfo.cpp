// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 3

// GetDefaultConfig @ 144303620

FNetSerializerConfig * __cdecl
UE::Net::FDoubleNetSerializerNetSerializerInfo::GetDefaultConfig(void)

{
  return (FNetSerializerConfig *)&FDoubleNetSerializer::DefaultConfig;
}

// GetQuantizedTypeAlignment @ 144304480

uint __cdecl UE::Net::FDoubleNetSerializerNetSerializerInfo::GetQuantizedTypeAlignment(void)

{
  return 8;
}

// GetQuantizedTypeSize @ 144304590

uint __cdecl UE::Net::FDoubleNetSerializerNetSerializerInfo::GetQuantizedTypeSize(void)

{
  return 8;
}

