// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 3

// GetDefaultConfig @ 1443036b0

FNetSerializerConfig * __cdecl
UE::Net::FFieldPathNetSerializerNetSerializerInfo::GetDefaultConfig(void)

{
  return (FNetSerializerConfig *)&FFieldPathNetSerializer::DefaultConfig;
}

// GetQuantizedTypeAlignment @ 144304510

uint __cdecl UE::Net::FFieldPathNetSerializerNetSerializerInfo::GetQuantizedTypeAlignment(void)

{
  return 8;
}

// GetQuantizedTypeSize @ 144304620

uint __cdecl UE::Net::FFieldPathNetSerializerNetSerializerInfo::GetQuantizedTypeSize(void)

{
  return 0x28;
}

