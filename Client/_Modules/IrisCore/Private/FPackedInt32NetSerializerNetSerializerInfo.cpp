// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 3

// GetDefaultConfig @ 1443302a0

FNetSerializerConfig * __cdecl
UE::Net::FPackedInt32NetSerializerNetSerializerInfo::GetDefaultConfig(void)

{
  return (FNetSerializerConfig *)&FPackedInt32NetSerializer::DefaultConfig;
}

// GetQuantizedTypeAlignment @ 144330d00

uint __cdecl UE::Net::FPackedInt32NetSerializerNetSerializerInfo::GetQuantizedTypeAlignment(void)

{
  return 4;
}

// GetQuantizedTypeSize @ 144331040

uint __cdecl UE::Net::FPackedInt32NetSerializerNetSerializerInfo::GetQuantizedTypeSize(void)

{
  return 4;
}

