// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 3

// GetDefaultConfig @ 144303610

FNetSerializerConfig * __cdecl
UE::Net::FDateTimeNetSerializerNetSerializerInfo::GetDefaultConfig(void)

{
  return (FNetSerializerConfig *)&FDateTimeNetSerializer::DefaultConfig;
}

// GetQuantizedTypeAlignment @ 144304470

uint __cdecl UE::Net::FDateTimeNetSerializerNetSerializerInfo::GetQuantizedTypeAlignment(void)

{
  return 8;
}

// GetQuantizedTypeSize @ 144304580

uint __cdecl UE::Net::FDateTimeNetSerializerNetSerializerInfo::GetQuantizedTypeSize(void)

{
  return 8;
}

