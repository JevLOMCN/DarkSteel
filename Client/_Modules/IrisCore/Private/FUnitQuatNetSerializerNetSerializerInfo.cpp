// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 3

// GetDefaultConfig @ 144330460

FNetSerializerConfig * __cdecl
UE::Net::FUnitQuatNetSerializerNetSerializerInfo::GetDefaultConfig(void)

{
  return (FNetSerializerConfig *)&FUnitQuatNetSerializer::DefaultConfig;
}

// GetQuantizedTypeAlignment @ 144330ec0

uint __cdecl UE::Net::FUnitQuatNetSerializerNetSerializerInfo::GetQuantizedTypeAlignment(void)

{
  return 8;
}

// GetQuantizedTypeSize @ 144331200

uint __cdecl UE::Net::FUnitQuatNetSerializerNetSerializerInfo::GetQuantizedTypeSize(void)

{
  return 0x20;
}

