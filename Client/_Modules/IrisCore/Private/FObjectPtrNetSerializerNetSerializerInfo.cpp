// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 3

// GetDefaultConfig @ 144330290

FNetSerializerConfig * __cdecl
UE::Net::FObjectPtrNetSerializerNetSerializerInfo::GetDefaultConfig(void)

{
  return (FNetSerializerConfig *)&FObjectPtrNetSerializer::DefaultConfig;
}

// GetQuantizedTypeAlignment @ 144330cf0

uint __cdecl UE::Net::FObjectPtrNetSerializerNetSerializerInfo::GetQuantizedTypeAlignment(void)

{
  return 8;
}

// GetQuantizedTypeSize @ 144331030

uint __cdecl UE::Net::FObjectPtrNetSerializerNetSerializerInfo::GetQuantizedTypeSize(void)

{
  return 0x18;
}

