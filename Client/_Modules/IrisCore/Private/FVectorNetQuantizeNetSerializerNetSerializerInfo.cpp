// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 3

// GetDefaultConfig @ 1443304b0

FNetSerializerConfig * __cdecl
UE::Net::FVectorNetQuantizeNetSerializerNetSerializerInfo::GetDefaultConfig(void)

{
  return (FNetSerializerConfig *)
         &Net::Private::FVectorNetQuantizeNetSerializerBase<FVectorNetQuantizeNetSerializerConfig,0>
          ::DefaultConfig;
}

// GetQuantizedTypeAlignment @ 144330f10

uint __cdecl
UE::Net::FVectorNetQuantizeNetSerializerNetSerializerInfo::GetQuantizedTypeAlignment(void)

{
  return 8;
}

// GetQuantizedTypeSize @ 144331250

uint __cdecl UE::Net::FVectorNetQuantizeNetSerializerNetSerializerInfo::GetQuantizedTypeSize(void)

{
  return 0x20;
}

