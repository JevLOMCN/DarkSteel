// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 3

// GetDefaultConfig @ 1443302c0

FNetSerializerConfig * __cdecl
UE::Net::FPackedUint32NetSerializerNetSerializerInfo::GetDefaultConfig(void)

{
  return (FNetSerializerConfig *)&FPackedUint32NetSerializer::DefaultConfig;
}

// GetQuantizedTypeAlignment @ 144330d20

uint __cdecl UE::Net::FPackedUint32NetSerializerNetSerializerInfo::GetQuantizedTypeAlignment(void)

{
  return 4;
}

// GetQuantizedTypeSize @ 144331060

uint __cdecl UE::Net::FPackedUint32NetSerializerNetSerializerInfo::GetQuantizedTypeSize(void)

{
  return 4;
}

