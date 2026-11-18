// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 3

// GetDefaultConfig @ 144330490

FNetSerializerConfig * __cdecl
UE::Net::FVectorNetQuantize100NetSerializerNetSerializerInfo::GetDefaultConfig(void)

{
  return (FNetSerializerConfig *)
         &Net::Private::
          FVectorNetQuantizeNetSerializerBase<FVectorNetQuantize100NetSerializerConfig,7>::
          DefaultConfig;
}

// GetQuantizedTypeAlignment @ 144330ef0

uint __cdecl
UE::Net::FVectorNetQuantize100NetSerializerNetSerializerInfo::GetQuantizedTypeAlignment(void)

{
  return 8;
}

// GetQuantizedTypeSize @ 144331230

uint __cdecl
UE::Net::FVectorNetQuantize100NetSerializerNetSerializerInfo::GetQuantizedTypeSize(void)

{
  return 0x20;
}

