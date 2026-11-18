// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 3

// GetDefaultConfig @ 144330300

FNetSerializerConfig * __cdecl
UE::Net::FRemoteServerIdNetSerializerNetSerializerInfo::GetDefaultConfig(void)

{
  return (FNetSerializerConfig *)&FRemoteServerIdNetSerializer::DefaultConfig;
}

// GetQuantizedTypeAlignment @ 144330d60

uint __cdecl UE::Net::FRemoteServerIdNetSerializerNetSerializerInfo::GetQuantizedTypeAlignment(void)

{
  return 2;
}

// GetQuantizedTypeSize @ 1443310a0

uint __cdecl UE::Net::FRemoteServerIdNetSerializerNetSerializerInfo::GetQuantizedTypeSize(void)

{
  return 2;
}

