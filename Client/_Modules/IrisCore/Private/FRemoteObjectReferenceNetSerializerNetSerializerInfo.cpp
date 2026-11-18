// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 3

// GetDefaultConfig @ 1443302f0

FNetSerializerConfig * __cdecl
UE::Net::FRemoteObjectReferenceNetSerializerNetSerializerInfo::GetDefaultConfig(void)

{
  return (FNetSerializerConfig *)&FRemoteObjectReferenceNetSerializer::DefaultConfig;
}

// GetQuantizedTypeAlignment @ 144330d50

uint __cdecl
UE::Net::FRemoteObjectReferenceNetSerializerNetSerializerInfo::GetQuantizedTypeAlignment(void)

{
  return 8;
}

// GetQuantizedTypeSize @ 144331090

uint __cdecl
UE::Net::FRemoteObjectReferenceNetSerializerNetSerializerInfo::GetQuantizedTypeSize(void)

{
  return 0x30;
}

