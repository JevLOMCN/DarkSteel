// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayTags
// Functions: 3

// GetDefaultConfig @ 146ade2c0

FNetSerializerConfig * __cdecl
UE::Net::FGameplayTagNetSerializerNetSerializerInfo::GetDefaultConfig(void)

{
  return (FNetSerializerConfig *)&FGameplayTagNetSerializer::DefaultConfig;
}

// GetQuantizedTypeAlignment @ 146adfa40

uint __cdecl UE::Net::FGameplayTagNetSerializerNetSerializerInfo::GetQuantizedTypeAlignment(void)

{
  return 4;
}

// GetQuantizedTypeSize @ 146adfa60

uint __cdecl UE::Net::FGameplayTagNetSerializerNetSerializerInfo::GetQuantizedTypeSize(void)

{
  return 8;
}

