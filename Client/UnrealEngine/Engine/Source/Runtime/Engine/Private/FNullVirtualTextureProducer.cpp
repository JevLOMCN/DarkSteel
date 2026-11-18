// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// IsPageStreamed @ 1489f9520

bool __thiscall
_anon_F30F0AC2::FNullVirtualTextureProducer::IsPageStreamed
          (FNullVirtualTextureProducer *this,uchar param_1,uint param_2)

{
  return false;
}

// ProducePageData @ 148a02970

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

IVirtualTextureFinalizer * __thiscall
_anon_F30F0AC2::FNullVirtualTextureProducer::ProducePageData
          (FNullVirtualTextureProducer *this,FRHICommandListBase *param_1,Type param_2,
          EVTProducePageFlags param_3,FVirtualTextureProducerHandle *param_4,uchar param_5,
          uchar param_6,ulong64 param_7,ulong64 param_8,FVTProduceTargetLayer *param_9)

{
  return (IVirtualTextureFinalizer *)0x0;
}

// RequestPageData @ 148a0e270

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FVTRequestPageResult * __thiscall
_anon_F30F0AC2::FNullVirtualTextureProducer::RequestPageData
          (FNullVirtualTextureProducer *this,FVTRequestPageResult *__return_storage_ptr__,
          FRHICommandListBase *param_1,FVirtualTextureProducerHandle *param_2,uchar param_3,
          uchar param_4,ulong64 param_5,EVTRequestPagePriority param_6)

{
  __return_storage_ptr__->Handle = 0;
  __return_storage_ptr__->Status = Invalid;
  return __return_storage_ptr__;
}

