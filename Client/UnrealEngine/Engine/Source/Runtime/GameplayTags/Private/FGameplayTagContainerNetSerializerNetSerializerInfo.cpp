// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayTags
// Functions: 3

// GetDefaultConfig @ 146ade2b0

FNetSerializerConfig * __cdecl
UE::Net::FGameplayTagContainerNetSerializerNetSerializerInfo::GetDefaultConfig(void)

{
  return (FNetSerializerConfig *)&FGameplayTagContainerNetSerializer::DefaultConfig;
}

// GetQuantizedTypeAlignment @ 146adfa30

uint __cdecl
UE::Net::FGameplayTagContainerNetSerializerNetSerializerInfo::GetQuantizedTypeAlignment(void)

{
  return 8;
}

// GetQuantizedTypeSize @ 146adfa50

uint __cdecl
UE::Net::FGameplayTagContainerNetSerializerNetSerializerInfo::GetQuantizedTypeSize(void)

{
  return 0x10;
}

