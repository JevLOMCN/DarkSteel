// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 3

// GetDefaultConfig @ 144330270

FNetSerializerConfig * __cdecl UE::Net::FNopNetSerializerNetSerializerInfo::GetDefaultConfig(void)

{
  return (FNetSerializerConfig *)&FNopNetSerializer::DefaultConfig;
}

// GetQuantizedTypeAlignment @ 144330cd0

uint __cdecl UE::Net::FNopNetSerializerNetSerializerInfo::GetQuantizedTypeAlignment(void)

{
  return 1;
}

// GetQuantizedTypeSize @ 144331010

uint __cdecl UE::Net::FNopNetSerializerNetSerializerInfo::GetQuantizedTypeSize(void)

{
  return 0;
}

