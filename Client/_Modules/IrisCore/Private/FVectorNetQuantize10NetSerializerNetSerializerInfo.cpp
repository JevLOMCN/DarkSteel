// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 3

// GetDefaultConfig @ 1443304a0

FNetSerializerConfig * __cdecl
UE::Net::FVectorNetQuantize10NetSerializerNetSerializerInfo::GetDefaultConfig(void)

{
  return (FNetSerializerConfig *)
         &Net::Private::
          FVectorNetQuantizeNetSerializerBase<FVectorNetQuantize10NetSerializerConfig,3>::
          DefaultConfig;
}

// GetQuantizedTypeAlignment @ 144330f00

uint __cdecl
UE::Net::FVectorNetQuantize10NetSerializerNetSerializerInfo::GetQuantizedTypeAlignment(void)

{
  return 8;
}

// GetQuantizedTypeSize @ 144331240

uint __cdecl UE::Net::FVectorNetQuantize10NetSerializerNetSerializerInfo::GetQuantizedTypeSize(void)

{
  return 0x20;
}

