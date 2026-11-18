// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// GetDefaultConfig @ 147bdf6d0

FNetSerializerConfig * __cdecl
UE::Net::FCharacterNetworkSerializationPackedBitsNetSerializerNetSerializerInfo::GetDefaultConfig
          (void)

{
  return (FNetSerializerConfig *)
         &FCharacterNetworkSerializationPackedBitsNetSerializer::DefaultConfig;
}

// GetQuantizedTypeAlignment @ 147be6820

uint __cdecl
UE::Net::FCharacterNetworkSerializationPackedBitsNetSerializerNetSerializerInfo::
GetQuantizedTypeAlignment(void)

{
  return 8;
}

// GetQuantizedTypeSize @ 147be6860

uint __cdecl
UE::Net::FCharacterNetworkSerializationPackedBitsNetSerializerNetSerializerInfo::
GetQuantizedTypeSize(void)

{
  return 0x198;
}

