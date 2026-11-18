// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 3

// GetDefaultConfig @ 144330250

FNetSerializerConfig * __cdecl UE::Net::FNameNetSerializerNetSerializerInfo::GetDefaultConfig(void)

{
  return (FNetSerializerConfig *)&FNameNetSerializer::DefaultConfig;
}

// GetQuantizedTypeAlignment @ 144330cb0

uint __cdecl UE::Net::FNameNetSerializerNetSerializerInfo::GetQuantizedTypeAlignment(void)

{
  return 8;
}

// GetQuantizedTypeSize @ 144330ff0

uint __cdecl UE::Net::FNameNetSerializerNetSerializerInfo::GetQuantizedTypeSize(void)

{
  return 0x18;
}

