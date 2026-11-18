// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 9

// GetStatId @ 1459c30d0

/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall
FThreadSafeStaticStatInner<FStat_STAT_BindlessSamplerDescriptorsAllocated,1>::GetStatId
          (FThreadSafeStaticStatInner<FStat_STAT_BindlessSamplerDescriptorsAllocated,1> *this)

{
  FName *pFVar1;
  TAtomic<FMinimalName> TVar2;
  TStatIdData *in_RDX;
  FName local_res8;
  
  if (*(TAtomic<FMinimalName> *)this == (TAtomic<FMinimalName>)0x0) {
    pFVar1 = ::FName::FName(&local_res8,"STAT_BindlessSamplerDescriptorsAllocated");
    TVar2 = (TAtomic<FMinimalName>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)this,*pFVar1,
                       L"Bindless Sampler Descriptors Allocated","STATGROUP_RHI","STATCAT_Advanced",
                       L"RHI",true,false,ST_int64,false,false,MCR_Invalid);
    in_RDX->Name = TVar2;
    return (TStatId)in_RDX;
  }
  in_RDX->Name = *(TAtomic<FMinimalName> *)this;
  return (TStatId)in_RDX;
}

// GetStatId @ 1459c3180

/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall
FThreadSafeStaticStatInner<FStat_STAT_D3D12MemoryCurrentTotal,1>::GetStatId
          (FThreadSafeStaticStatInner<FStat_STAT_D3D12MemoryCurrentTotal,1> *this)

{
  FName *pFVar1;
  TAtomic<FMinimalName> TVar2;
  TStatIdData *in_RDX;
  FName local_res8;
  
  if (*(TAtomic<FMinimalName> *)this == (TAtomic<FMinimalName>)0x0) {
    pFVar1 = ::FName::FName(&local_res8,"STAT_D3D12MemoryCurrentTotal");
    TVar2 = (TAtomic<FMinimalName>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)this,*pFVar1,L"TOTAL","STATGROUP_D3D12Resources"
                       ,"STATCAT_Advanced",L"D3D12RHI: Resources",true,false,ST_int64,false,false,
                       MCR_Physical);
    in_RDX->Name = TVar2;
    return (TStatId)in_RDX;
  }
  in_RDX->Name = *(TAtomic<FMinimalName> *)this;
  return (TStatId)in_RDX;
}

// GetStatId @ 1459c3230

/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall
FThreadSafeStaticStatInner<FStat_STAT_NumSamplerOnlineDescriptorHeaps,1>::GetStatId
          (FThreadSafeStaticStatInner<FStat_STAT_NumSamplerOnlineDescriptorHeaps,1> *this)

{
  FName *pFVar1;
  TAtomic<FMinimalName> TVar2;
  TStatIdData *in_RDX;
  FName local_res8;
  
  if (*(TAtomic<FMinimalName> *)this == (TAtomic<FMinimalName>)0x0) {
    pFVar1 = ::FName::FName(&local_res8,"STAT_NumSamplerOnlineDescriptorHeaps");
    TVar2 = (TAtomic<FMinimalName>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)this,*pFVar1,L"Sampler: Num descriptor heaps",
                       "STATGROUP_D3D12DescriptorHeap","STATCAT_Advanced",
                       L"D3D12RHI: Descriptor Heap (GPU Visible)",true,false,ST_int64,false,false,
                       MCR_Invalid);
    in_RDX->Name = TVar2;
    return (TStatId)in_RDX;
  }
  in_RDX->Name = *(TAtomic<FMinimalName> *)this;
  return (TStatId)in_RDX;
}

// GetStatId @ 1459c32e0

/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall
FThreadSafeStaticStatInner<FStat_STAT_NumViewOnlineDescriptorHeaps,1>::GetStatId
          (FThreadSafeStaticStatInner<FStat_STAT_NumViewOnlineDescriptorHeaps,1> *this)

{
  FName *pFVar1;
  TAtomic<FMinimalName> TVar2;
  TStatIdData *in_RDX;
  FName local_res8;
  
  if (*(TAtomic<FMinimalName> *)this == (TAtomic<FMinimalName>)0x0) {
    pFVar1 = ::FName::FName(&local_res8,"STAT_NumViewOnlineDescriptorHeaps");
    TVar2 = (TAtomic<FMinimalName>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)this,*pFVar1,L"View: Num descriptor heaps",
                       "STATGROUP_D3D12DescriptorHeap","STATCAT_Advanced",
                       L"D3D12RHI: Descriptor Heap (GPU Visible)",true,false,ST_int64,false,false,
                       MCR_Invalid);
    in_RDX->Name = TVar2;
    return (TStatId)in_RDX;
  }
  in_RDX->Name = *(TAtomic<FMinimalName> *)this;
  return (TStatId)in_RDX;
}

// GetStatId @ 1459c3390

/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall
FThreadSafeStaticStatInner<FStat_STAT_SamplerDescriptorsAllocated,1>::GetStatId
          (FThreadSafeStaticStatInner<FStat_STAT_SamplerDescriptorsAllocated,1> *this)

{
  FName *pFVar1;
  TAtomic<FMinimalName> TVar2;
  TStatIdData *in_RDX;
  FName local_res8;
  
  if (*(TAtomic<FMinimalName> *)this == (TAtomic<FMinimalName>)0x0) {
    pFVar1 = ::FName::FName(&local_res8,"STAT_SamplerDescriptorsAllocated");
    TVar2 = (TAtomic<FMinimalName>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)this,*pFVar1,L"Sampler Descriptors Allocated",
                       "STATGROUP_RHI","STATCAT_Advanced",L"RHI",true,false,ST_int64,false,false,
                       MCR_Invalid);
    in_RDX->Name = TVar2;
    return (TStatId)in_RDX;
  }
  in_RDX->Name = *(TAtomic<FMinimalName> *)this;
  return (TStatId)in_RDX;
}

// GetStatId @ 1459c3440

/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall
FThreadSafeStaticStatInner<FStat_STAT_SamplerOnlineDescriptorHeapMemory,1>::GetStatId
          (FThreadSafeStaticStatInner<FStat_STAT_SamplerOnlineDescriptorHeapMemory,1> *this)

{
  FName *pFVar1;
  TAtomic<FMinimalName> TVar2;
  TStatIdData *in_RDX;
  FName local_res8;
  
  if (*(TAtomic<FMinimalName> *)this == (TAtomic<FMinimalName>)0x0) {
    pFVar1 = ::FName::FName(&local_res8,"STAT_SamplerOnlineDescriptorHeapMemory");
    TVar2 = (TAtomic<FMinimalName>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)this,*pFVar1,L"Sampler DescriptorHeap Memory",
                       "STATGROUP_D3D12MemoryDetails","STATCAT_Advanced",L"D3D12RHI: Memory Details"
                       ,true,false,ST_int64,false,false,MCR_GPUSystem);
    in_RDX->Name = TVar2;
    return (TStatId)in_RDX;
  }
  in_RDX->Name = *(TAtomic<FMinimalName> *)this;
  return (TStatId)in_RDX;
}

// GetStatId @ 1459c34f0

/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall
FThreadSafeStaticStatInner<FStat_STAT_ViewOnlineDescriptorHeapMemory,1>::GetStatId
          (FThreadSafeStaticStatInner<FStat_STAT_ViewOnlineDescriptorHeapMemory,1> *this)

{
  FName *pFVar1;
  TAtomic<FMinimalName> TVar2;
  TStatIdData *in_RDX;
  FName local_res8;
  
  if (*(TAtomic<FMinimalName> *)this == (TAtomic<FMinimalName>)0x0) {
    pFVar1 = ::FName::FName(&local_res8,"STAT_ViewOnlineDescriptorHeapMemory");
    TVar2 = (TAtomic<FMinimalName>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)this,*pFVar1,
                       L"View DescriptorHeap Memory (SRV, CBV, UAV)","STATGROUP_D3D12MemoryDetails",
                       "STATCAT_Advanced",L"D3D12RHI: Memory Details",true,false,ST_int64,false,
                       false,MCR_GPUSystem);
    in_RDX->Name = TVar2;
    return (TStatId)in_RDX;
  }
  in_RDX->Name = *(TAtomic<FMinimalName> *)this;
  return (TStatId)in_RDX;
}

// GetStatId @ 145a1b590

/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall
FThreadSafeStaticStatInner<FStat_STAT_RTPSO_CreatePipeline,1>::GetStatId
          (FThreadSafeStaticStatInner<FStat_STAT_RTPSO_CreatePipeline,1> *this)

{
  FName *pFVar1;
  TAtomic<FMinimalName> TVar2;
  TStatIdData *in_RDX;
  FName local_res8;
  
  if (*(TAtomic<FMinimalName> *)this == (TAtomic<FMinimalName>)0x0) {
    pFVar1 = ::FName::FName(&local_res8,"STAT_RTPSO_CreatePipeline");
    TVar2 = (TAtomic<FMinimalName>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)this,*pFVar1,L"RTPSO Create Pipeline",
                       "STATGROUP_D3D12RayTracing","STATCAT_Advanced",L"D3D12RHI: Ray Tracing",true,
                       true,ST_int64,true,false,MCR_Invalid);
    in_RDX->Name = TVar2;
    return (TStatId)in_RDX;
  }
  in_RDX->Name = *(TAtomic<FMinimalName> *)this;
  return (TStatId)in_RDX;
}

// GetStatId @ 145a6afa0

/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall
FThreadSafeStaticStatInner<FStat_STAT_D3D12ReservedResourcePhysical,1>::GetStatId
          (FThreadSafeStaticStatInner<FStat_STAT_D3D12ReservedResourcePhysical,1> *this)

{
  FName *pFVar1;
  TAtomic<FMinimalName> TVar2;
  TStatIdData *in_RDX;
  FName local_res8;
  
  if (*(TAtomic<FMinimalName> *)this == (TAtomic<FMinimalName>)0x0) {
    pFVar1 = ::FName::FName(&local_res8,"STAT_D3D12ReservedResourcePhysical");
    TVar2 = (TAtomic<FMinimalName>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)this,*pFVar1,
                       L"Reserved Resource Physical Memory","STATGROUP_D3D12MemoryDetails",
                       "STATCAT_Advanced",L"D3D12RHI: Memory Details",true,false,ST_int64,false,
                       false,MCR_Physical);
    in_RDX->Name = TVar2;
    return (TStatId)in_RDX;
  }
  in_RDX->Name = *(TAtomic<FMinimalName> *)this;
  return (TStatId)in_RDX;
}

