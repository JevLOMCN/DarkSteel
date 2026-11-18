// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// GetDefaultConfig @ 147bdf6f0

FNetSerializerConfig * __cdecl
UE::Net::FRootMotionSourceGroupNetSerializerNetSerializerInfo::GetDefaultConfig(void)

{
  return (FNetSerializerConfig *)&FRootMotionSourceGroupNetSerializer::DefaultConfig;
}

// GetQuantizedTypeAlignment @ 147be6840

uint __cdecl
UE::Net::FRootMotionSourceGroupNetSerializerNetSerializerInfo::GetQuantizedTypeAlignment(void)

{
  return 0x10;
}

// GetQuantizedTypeSize @ 147be6880

uint __cdecl
UE::Net::FRootMotionSourceGroupNetSerializerNetSerializerInfo::GetQuantizedTypeSize(void)

{
  return 0x50;
}

