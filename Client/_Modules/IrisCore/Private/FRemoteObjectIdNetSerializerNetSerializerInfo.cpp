// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 3

// GetDefaultConfig @ 1443302e0

FNetSerializerConfig * __cdecl
UE::Net::FRemoteObjectIdNetSerializerNetSerializerInfo::GetDefaultConfig(void)

{
  return (FNetSerializerConfig *)&FRemoteObjectIdNetSerializer::DefaultConfig;
}

// GetQuantizedTypeAlignment @ 144330d40

uint __cdecl UE::Net::FRemoteObjectIdNetSerializerNetSerializerInfo::GetQuantizedTypeAlignment(void)

{
  return 8;
}

// GetQuantizedTypeSize @ 144331080

uint __cdecl UE::Net::FRemoteObjectIdNetSerializerNetSerializerInfo::GetQuantizedTypeSize(void)

{
  return 8;
}

