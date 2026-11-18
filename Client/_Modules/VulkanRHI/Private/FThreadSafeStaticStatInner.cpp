// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 11

// GetStatId @ 145ae7730

/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall
FThreadSafeStaticStatInner<`FVulkanPipelineCacheChunk::CreatePSO<FVulkanGraphicsPipelineState>'::__l37::FStat_STAT_Vulkan_RHICreateGraphicsPipelineState_CREATE_Chunk_Flush,1>
::GetStatId(void *this)

{
  FName *pFVar1;
  TAtomic<FMinimalName> TVar2;
  TStatIdData *in_RDX;
  FName local_res8;
  
  if (*(TAtomic<FMinimalName> *)this == (TAtomic<FMinimalName>)0x0) {
    pFVar1 = ::FName::FName(&local_res8,
                            "STAT_Vulkan_RHICreateGraphicsPipelineState_CREATE_Chunk_Flush");
    TVar2 = (TAtomic<FMinimalName>)
            FThreadSafeStaticStatBase::DoSetup
                      (this,*pFVar1,L"STAT_Vulkan_RHICreateGraphicsPipelineState_CREATE_Chunk_Flush"
                       ,"STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,
                       MCR_Invalid);
    in_RDX->Name = TVar2;
    return (TStatId)in_RDX;
  }
  in_RDX->Name = *(TAtomic<FMinimalName> *)this;
  return (TStatId)in_RDX;
}

// GetStatId @ 145b1f0d0

/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall
FThreadSafeStaticStatInner<FStat_STAT_VulkanMemory2,1>::GetStatId
          (FThreadSafeStaticStatInner<FStat_STAT_VulkanMemory2,1> *this)

{
  FName *pFVar1;
  TAtomic<FMinimalName> TVar2;
  TStatIdData *in_RDX;
  FName local_res8;
  
  if (*(TAtomic<FMinimalName> *)this == (TAtomic<FMinimalName>)0x0) {
    pFVar1 = ::FName::FName(&local_res8,"STAT_VulkanMemory2");
    TVar2 = (TAtomic<FMinimalName>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)this,*pFVar1,L"MemoryPool 2",
                       "STATGROUP_VulkanMemoryRaw","STATCAT_Advanced",L"Vulkan Memory Raw",true,
                       false,ST_int64,false,true,MCR_Physical);
    in_RDX->Name = TVar2;
    return (TStatId)in_RDX;
  }
  in_RDX->Name = *(TAtomic<FMinimalName> *)this;
  return (TStatId)in_RDX;
}

// GetStatId @ 145b1f180

/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall
FThreadSafeStaticStatInner<FStat_STAT_VulkanMemory2Reserved,1>::GetStatId
          (FThreadSafeStaticStatInner<FStat_STAT_VulkanMemory2Reserved,1> *this)

{
  FName *pFVar1;
  TAtomic<FMinimalName> TVar2;
  TStatIdData *in_RDX;
  FName local_res8;
  
  if (*(TAtomic<FMinimalName> *)this == (TAtomic<FMinimalName>)0x0) {
    pFVar1 = ::FName::FName(&local_res8,"STAT_VulkanMemory2Reserved");
    TVar2 = (TAtomic<FMinimalName>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)this,*pFVar1,L"MemoryPool 2 Reserved",
                       "STATGROUP_VulkanMemoryRaw","STATCAT_Advanced",L"Vulkan Memory Raw",true,
                       false,ST_int64,false,true,MCR_Physical);
    in_RDX->Name = TVar2;
    return (TStatId)in_RDX;
  }
  in_RDX->Name = *(TAtomic<FMinimalName> *)this;
  return (TStatId)in_RDX;
}

// GetStatId @ 145b1f230

/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall
FThreadSafeStaticStatInner<FStat_STAT_VulkanMemory3,1>::GetStatId
          (FThreadSafeStaticStatInner<FStat_STAT_VulkanMemory3,1> *this)

{
  FName *pFVar1;
  TAtomic<FMinimalName> TVar2;
  TStatIdData *in_RDX;
  FName local_res8;
  
  if (*(TAtomic<FMinimalName> *)this == (TAtomic<FMinimalName>)0x0) {
    pFVar1 = ::FName::FName(&local_res8,"STAT_VulkanMemory3");
    TVar2 = (TAtomic<FMinimalName>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)this,*pFVar1,L"MemoryPool 3",
                       "STATGROUP_VulkanMemoryRaw","STATCAT_Advanced",L"Vulkan Memory Raw",true,
                       false,ST_int64,false,true,MCR_Physical);
    in_RDX->Name = TVar2;
    return (TStatId)in_RDX;
  }
  in_RDX->Name = *(TAtomic<FMinimalName> *)this;
  return (TStatId)in_RDX;
}

// GetStatId @ 145b1f2e0

/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall
FThreadSafeStaticStatInner<FStat_STAT_VulkanMemory3Reserved,1>::GetStatId
          (FThreadSafeStaticStatInner<FStat_STAT_VulkanMemory3Reserved,1> *this)

{
  FName *pFVar1;
  TAtomic<FMinimalName> TVar2;
  TStatIdData *in_RDX;
  FName local_res8;
  
  if (*(TAtomic<FMinimalName> *)this == (TAtomic<FMinimalName>)0x0) {
    pFVar1 = ::FName::FName(&local_res8,"STAT_VulkanMemory3Reserved");
    TVar2 = (TAtomic<FMinimalName>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)this,*pFVar1,L"MemoryPool 3 Reserved",
                       "STATGROUP_VulkanMemoryRaw","STATCAT_Advanced",L"Vulkan Memory Raw",true,
                       false,ST_int64,false,true,MCR_Physical);
    in_RDX->Name = TVar2;
    return (TStatId)in_RDX;
  }
  in_RDX->Name = *(TAtomic<FMinimalName> *)this;
  return (TStatId)in_RDX;
}

// GetStatId @ 145b1f390

/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall
FThreadSafeStaticStatInner<FStat_STAT_VulkanMemory4,1>::GetStatId
          (FThreadSafeStaticStatInner<FStat_STAT_VulkanMemory4,1> *this)

{
  FName *pFVar1;
  TAtomic<FMinimalName> TVar2;
  TStatIdData *in_RDX;
  FName local_res8;
  
  if (*(TAtomic<FMinimalName> *)this == (TAtomic<FMinimalName>)0x0) {
    pFVar1 = ::FName::FName(&local_res8,"STAT_VulkanMemory4");
    TVar2 = (TAtomic<FMinimalName>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)this,*pFVar1,L"MemoryPool 4",
                       "STATGROUP_VulkanMemoryRaw","STATCAT_Advanced",L"Vulkan Memory Raw",true,
                       false,ST_int64,false,true,MCR_Physical);
    in_RDX->Name = TVar2;
    return (TStatId)in_RDX;
  }
  in_RDX->Name = *(TAtomic<FMinimalName> *)this;
  return (TStatId)in_RDX;
}

// GetStatId @ 145b1f440

/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall
FThreadSafeStaticStatInner<FStat_STAT_VulkanMemory5,1>::GetStatId
          (FThreadSafeStaticStatInner<FStat_STAT_VulkanMemory5,1> *this)

{
  FName *pFVar1;
  TAtomic<FMinimalName> TVar2;
  TStatIdData *in_RDX;
  FName local_res8;
  
  if (*(TAtomic<FMinimalName> *)this == (TAtomic<FMinimalName>)0x0) {
    pFVar1 = ::FName::FName(&local_res8,"STAT_VulkanMemory5");
    TVar2 = (TAtomic<FMinimalName>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)this,*pFVar1,L"MemoryPool 5",
                       "STATGROUP_VulkanMemoryRaw","STATCAT_Advanced",L"Vulkan Memory Raw",true,
                       false,ST_int64,false,true,MCR_Physical);
    in_RDX->Name = TVar2;
    return (TStatId)in_RDX;
  }
  in_RDX->Name = *(TAtomic<FMinimalName> *)this;
  return (TStatId)in_RDX;
}

// GetStatId @ 145b1f4f0

/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall
FThreadSafeStaticStatInner<FStat_STAT_VulkanMemory5Reserved,1>::GetStatId
          (FThreadSafeStaticStatInner<FStat_STAT_VulkanMemory5Reserved,1> *this)

{
  FName *pFVar1;
  TAtomic<FMinimalName> TVar2;
  TStatIdData *in_RDX;
  FName local_res8;
  
  if (*(TAtomic<FMinimalName> *)this == (TAtomic<FMinimalName>)0x0) {
    pFVar1 = ::FName::FName(&local_res8,"STAT_VulkanMemory5Reserved");
    TVar2 = (TAtomic<FMinimalName>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)this,*pFVar1,L"MemoryPool 5 Reserved",
                       "STATGROUP_VulkanMemoryRaw","STATCAT_Advanced",L"Vulkan Memory Raw",true,
                       false,ST_int64,false,true,MCR_Physical);
    in_RDX->Name = TVar2;
    return (TStatId)in_RDX;
  }
  in_RDX->Name = *(TAtomic<FMinimalName> *)this;
  return (TStatId)in_RDX;
}

// GetStatId @ 145b6ae80

/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall
FThreadSafeStaticStatInner<`FVulkanPipelineStateCacheManager::CreateVKPipeline'::__l20::FStat_STAT_VulkanPSOCreationTimeLRU,1>
::GetStatId(void *this)

{
  FName *pFVar1;
  TAtomic<FMinimalName> TVar2;
  TStatIdData *in_RDX;
  FName local_res8;
  
  if (*(TAtomic<FMinimalName> *)this == (TAtomic<FMinimalName>)0x0) {
    pFVar1 = ::FName::FName(&local_res8,"STAT_VulkanPSOCreationTimeLRU");
    TVar2 = (TAtomic<FMinimalName>)
            FThreadSafeStaticStatBase::DoSetup
                      (this,*pFVar1,L"STAT_VulkanPSOCreationTimeLRU","STATGROUP_Quick",
                       "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    in_RDX->Name = TVar2;
    return (TStatId)in_RDX;
  }
  in_RDX->Name = *(TAtomic<FMinimalName> *)this;
  return (TStatId)in_RDX;
}

// GetStatId @ 145b6af30

/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall
FThreadSafeStaticStatInner<`FVulkanPipelineStateCacheManager::CreateVKPipeline'::__l63::FStat_STAT_Vulkan_Calc_LRU_Size,1>
::GetStatId(void *this)

{
  FName *pFVar1;
  TAtomic<FMinimalName> TVar2;
  TStatIdData *in_RDX;
  FName local_res8;
  
  if (*(TAtomic<FMinimalName> *)this == (TAtomic<FMinimalName>)0x0) {
    pFVar1 = ::FName::FName(&local_res8,"STAT_Vulkan_Calc_LRU_Size");
    TVar2 = (TAtomic<FMinimalName>)
            FThreadSafeStaticStatBase::DoSetup
                      (this,*pFVar1,L"STAT_Vulkan_Calc_LRU_Size","STATGROUP_Quick",
                       "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    in_RDX->Name = TVar2;
    return (TStatId)in_RDX;
  }
  in_RDX->Name = *(TAtomic<FMinimalName> *)this;
  return (TStatId)in_RDX;
}

// GetStatId @ 145b6afe0

/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall
FThreadSafeStaticStatInner<`FVulkanPipelineStateCacheManager::RHICreateGraphicsPipelineState'::__l80::FStat_STAT_Vulkan_RHICreateGraphicsPipelineState_LRU_PSOLock,1>
::GetStatId(void *this)

{
  FName *pFVar1;
  TAtomic<FMinimalName> TVar2;
  TStatIdData *in_RDX;
  FName local_res8;
  
  if (*(TAtomic<FMinimalName> *)this == (TAtomic<FMinimalName>)0x0) {
    pFVar1 = ::FName::FName(&local_res8,"STAT_Vulkan_RHICreateGraphicsPipelineState_LRU_PSOLock");
    TVar2 = (TAtomic<FMinimalName>)
            FThreadSafeStaticStatBase::DoSetup
                      (this,*pFVar1,L"STAT_Vulkan_RHICreateGraphicsPipelineState_LRU_PSOLock",
                       "STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,
                       MCR_Invalid);
    in_RDX->Name = TVar2;
    return (TStatId)in_RDX;
  }
  in_RDX->Name = *(TAtomic<FMinimalName> *)this;
  return (TStatId)in_RDX;
}

