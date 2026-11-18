// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 6

// FD3D12RayTracingScene @ 1459f4090

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "D3D_ROOT_SIGNATURE_VERSION": Some values do not have unique names */
/* WARNING: Enum "D3D_SHADER_MODEL": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

FD3D12RayTracingScene * __thiscall
FD3D12RayTracingScene::FD3D12RayTracingScene
          (FD3D12RayTracingScene *this,FD3D12Adapter *param_1,FRayTracingSceneInitializer *param_2)

{
  longlong lVar1;
  FName FVar2;
  code *pcVar3;
  uint uVar4;
  ERayTracingSceneLifetime EVar5;
  ERayTracingAccelerationStructureFlags EVar6;
  longlong lVar7;
  bool bVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<FStat_STAT_D3D12RayTracingAllocatedTLAS> FVar10;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FD3D12RayTracingScene *pFVar11;
  longlong *plVar12;
  FName local_res8;
  FName local_res10;
  FStatMessage local_48;
  undefined1 local_38 [32];
  
  FRHIRayTracingAccelerationStructure::FRHIRayTracingAccelerationStructure
            ((FRHIRayTracingAccelerationStructure *)this);
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7FD3D12RayTracingScene__6B_;
  this->NumInstances = 0;
  this->AccelerationStructureBuffers[0].Reference = (FD3D12Buffer *)0x0;
  this->AccelerationStructureBuffers[1].Reference = (FD3D12Buffer *)0x0;
  this->AccelerationStructureBuffers[2].Reference = (FD3D12Buffer *)0x0;
  this->AccelerationStructureBuffers[3].Reference = (FD3D12Buffer *)0x0;
  this->AccelerationStructureBuffers[4].Reference = (FD3D12Buffer *)0x0;
  this->AccelerationStructureBuffers[5].Reference = (FD3D12Buffer *)0x0;
  this->AccelerationStructureBuffers[6].Reference = (FD3D12Buffer *)0x0;
  this->AccelerationStructureBuffers[7].Reference = (FD3D12Buffer *)0x0;
  this->BufferOffset = 0;
  uVar4 = param_2->NumTotalSegments;
  EVar5 = param_2->Lifetime;
  EVar6 = param_2->BuildFlags;
  (this->Initializer).MaxNumInstances = param_2->MaxNumInstances;
  (this->Initializer).NumTotalSegments = uVar4;
  (this->Initializer).Lifetime = EVar5;
  (this->Initializer).BuildFlags = EVar6;
  (this->Initializer).DebugName = param_2->DebugName;
  (this->ReferencedGeometries).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ReferencedGeometries).ArrayNum = 0;
  (this->ReferencedGeometries).ArrayMax = 0;
  this->ResourcesToMakeResident[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->ResourcesToMakeResident[0].ArrayNum = 0;
  this->ResourcesToMakeResident[0].ArrayMax = 0;
  this->ResourcesToMakeResident[1].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->ResourcesToMakeResident[1].ArrayNum = 0;
  this->ResourcesToMakeResident[1].ArrayMax = 0;
  this->ResourcesToMakeResident[2].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->ResourcesToMakeResident[2].ArrayNum = 0;
  this->ResourcesToMakeResident[2].ArrayMax = 0;
  this->ResourcesToMakeResident[3].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->ResourcesToMakeResident[3].ArrayNum = 0;
  this->ResourcesToMakeResident[3].ArrayMax = 0;
  this->ResourcesToMakeResident[4].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->ResourcesToMakeResident[4].ArrayNum = 0;
  this->ResourcesToMakeResident[4].ArrayMax = 0;
  this->ResourcesToMakeResident[5].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->ResourcesToMakeResident[5].ArrayNum = 0;
  this->ResourcesToMakeResident[5].ArrayMax = 0;
  this->ResourcesToMakeResident[6].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->ResourcesToMakeResident[6].ArrayNum = 0;
  this->ResourcesToMakeResident[6].ArrayMax = 0;
  this->ResourcesToMakeResident[7].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->ResourcesToMakeResident[7].ArrayNum = 0;
  this->ResourcesToMakeResident[7].ArrayMax = 0;
  this->bBuilt = false;
  this->Mutex = (atomic<unsigned_char>)0x0;
  FVar10 = StatPtr_STAT_D3D12RayTracingAllocatedTLAS;
  if (StatPtr_STAT_D3D12RayTracingAllocatedTLAS ==
      (FThreadSafeStaticStat<FStat_STAT_D3D12RayTracingAllocatedTLAS>)0x0) {
    pFVar9 = ::FName::FName(&local_res10,"STAT_D3D12RayTracingAllocatedTLAS");
    FVar10 = (FThreadSafeStaticStat<FStat_STAT_D3D12RayTracingAllocatedTLAS>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12RayTracingAllocatedTLAS,
                        *pFVar9,L"Allocated top level acceleration structures",
                        "STATGROUP_D3D12RayTracing","STATCAT_Advanced",L"D3D12RHI: Ray Tracing",true
                        ,false,ST_int64,false,false,MCR_Invalid);
  }
  FVar2 = *(FName *)FVar10;
  local_res8 = FVar2;
  if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    local_48.NameAndInfo.Number = FVar2.Number & 0xffffafff | 0xa000;
    local_48.StatData.Pad[0] = '\x01';
    local_48.StatData.Pad[1] = '\0';
    local_48.StatData.Pad[2] = '\0';
    local_48.StatData.Pad[3] = '\0';
    local_48.StatData.Pad[4] = '\0';
    local_48.StatData.Pad[5] = '\0';
    local_48.StatData.Pad[6] = '\0';
    local_48.StatData.Pad[7] = '\0';
    local_res8 = FVar2;
    local_48.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(this_00,&local_48);
    FStatsTrace::Add(&local_res8,1);
    if (this_00->ScopeCount == 0) {
      FThreadStats::Flush(this_00,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(this_00,false,false);
    }
  }
  if ((this->Initializer).Lifetime != RTSL_SingleFrame) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Initializer.Lifetime == RTSL_SingleFrame",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                       ,0x10e0,L"Only single-frame ray tracing scenes are currently implemented.");
    if (bVar8) {
      pcVar3 = (code *)swi(3);
      pFVar11 = (FD3D12RayTracingScene *)(*pcVar3)();
      return pFVar11;
    }
  }
  plVar12 = (longlong *)
            (**(code **)(GDynamicRHI->_padding_ + 0x470))(GDynamicRHI,local_38,&this->Initializer);
  lVar7 = plVar12[1];
  lVar1 = plVar12[2];
  this->_padding_ = *plVar12;
  this->_padding_ = lVar7;
  this->_padding_ = lVar1;
  return this;
}

// ~FD3D12RayTracingScene @ 1459f93a0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FD3D12RayTracingScene::~FD3D12RayTracingScene(FD3D12RayTracingScene *this)

{
  TRefCountPtr<FD3D12Buffer> *pTVar1;
  FName FVar2;
  FScriptContainerElement *pFVar3;
  FName *pFVar4;
  FThreadSafeStaticStat<FStat_STAT_D3D12RayTracingAllocatedTLAS> FVar5;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  longlong lVar6;
  TArray<FD3D12Resource_const_*,TSizedDefaultAllocator<32>_> *pTVar7;
  longlong lVar8;
  TRefCountPtr<FD3D12Buffer> *pTVar9;
  FName local_res8;
  FStatMessage local_18;
  
  this->_padding_ = (longlong)&___7FD3D12RayTracingScene__6B_;
  ReleaseBuffer(this);
  FVar5 = StatPtr_STAT_D3D12RayTracingAllocatedTLAS;
  if (StatPtr_STAT_D3D12RayTracingAllocatedTLAS ==
      (FThreadSafeStaticStat<FStat_STAT_D3D12RayTracingAllocatedTLAS>)0x0) {
    pFVar4 = ::FName::FName(&local_res8,"STAT_D3D12RayTracingAllocatedTLAS");
    FVar5 = (FThreadSafeStaticStat<FStat_STAT_D3D12RayTracingAllocatedTLAS>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12RayTracingAllocatedTLAS,
                       *pFVar4,L"Allocated top level acceleration structures",
                       "STATGROUP_D3D12RayTracing","STATCAT_Advanced",L"D3D12RHI: Ray Tracing",true,
                       false,ST_int64,false,false,MCR_Invalid);
  }
  FVar2 = *(FName *)FVar5;
  local_res8 = FVar2;
  if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    local_18.NameAndInfo.Number = FVar2.Number & 0xffffbfff | 0xb000;
    local_18.StatData.Pad[0] = '\x01';
    local_18.StatData.Pad[1] = '\0';
    local_18.StatData.Pad[2] = '\0';
    local_18.StatData.Pad[3] = '\0';
    local_18.StatData.Pad[4] = '\0';
    local_18.StatData.Pad[5] = '\0';
    local_18.StatData.Pad[6] = '\0';
    local_18.StatData.Pad[7] = '\0';
    local_res8 = FVar2;
    local_18.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(this_00,&local_18);
    FStatsTrace::Add(&local_res8,-1);
    if (this_00->ScopeCount == 0) {
      FThreadStats::Flush(this_00,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(this_00,false,false);
    }
  }
  lVar6 = 8;
  pTVar7 = (TArray<FD3D12Resource_const_*,TSizedDefaultAllocator<32>_> *)&this->bBuilt;
  lVar8 = 8;
  do {
    pFVar3 = pTVar7[-1].AllocatorInstance.Data;
    pTVar7 = pTVar7 + -1;
    lVar8 = lVar8 + -1;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
  } while (lVar8 != 0);
  DestructItems<TRefCountPtr<FRHIRayTracingGeometry>,int>
            ((TRefCountPtr<FRHIRayTracingGeometry> *)
             (this->ReferencedGeometries).AllocatorInstance.Data,
             (this->ReferencedGeometries).ArrayNum);
  pFVar3 = (this->ReferencedGeometries).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pTVar9 = (TRefCountPtr<FD3D12Buffer> *)&this->BufferOffset;
  do {
    pTVar1 = pTVar9 + -1;
    pTVar9 = pTVar9 + -1;
    lVar6 = lVar6 + -1;
    if (pTVar1->Reference != (FD3D12Buffer *)0x0) {
      (**(code **)(pTVar1->Reference->_padding_ + 0x10))();
    }
  } while (lVar6 != 0);
  RHIValidation::FResource::~FResource((FResource *)&this->_padding_);
  FRHIResource::~FRHIResource((FRHIResource *)this);
  return;
}

// BindBuffer @ 145a04730

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FD3D12RayTracingScene::BindBuffer(FD3D12RayTracingScene *this,FRHIBuffer *param_1,uint param_2)

{
  FD3D12Buffer *pFVar1;
  FName FVar2;
  FD3D12Buffer *pFVar3;
  code *pcVar4;
  bool bVar5;
  FName *pFVar6;
  FThreadSafeStaticStat<FStat_STAT_D3D12RayTracingUsedVideoMemory> FVar7;
  FThreadStats *pFVar8;
  FThreadStatsPool *pFVar9;
  FThreadSafeStaticStat<FStat_STAT_D3D12RayTracingTLASMemory> FVar10;
  uchar auVar11 [8];
  uchar auVar12 [8];
  uint uVar13;
  ulonglong uVar14;
  FNameEntryId FVar15;
  uchar auVar16 [8];
  uchar auVar17 [8];
  undefined1 local_res8 [8];
  FRHIBuffer *local_res10;
  uint local_res18;
  uint local_res20;
  uint uStackX_24;
  FName local_d0;
  FName local_c8;
  FName local_c0;
  FName local_b8;
  FStatMessage local_b0;
  FStatMessage local_a0;
  FStatMessage local_90;
  FStatMessage local_80;
  FName local_70;
  FName local_68;
  FName local_60;
  FName local_58 [3];
  
  local_res10 = param_1;
  local_res18 = param_2;
  if (((ulonglong)(param_1->Desc).Size < (ulonglong)param_2 + this->_padding_) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("SizeInfo.ResultSize + InBufferOffset <= InBuffer->GetSize()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                         ,0x10fd,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar14 = 0;
  if (GNumExplicitGPUsForRendering == 0) {
    this->BufferOffset = local_res18;
    return;
  }
  do {
    pFVar1 = this->AccelerationStructureBuffers[uVar14].Reference;
    if (pFVar1 != (FD3D12Buffer *)0x0) {
      uVar13 = (uint)pFVar1->_padding_;
      auVar11[4] = '\0';
      auVar11[5] = '\0';
      auVar11[6] = '\0';
      auVar11[7] = '\0';
      auVar11[0] = (char)uVar13;
      auVar11[1] = (char)(uVar13 >> 8);
      auVar11[2] = (char)(uVar13 >> 0x10);
      auVar11[3] = (char)(uVar13 >> 0x18);
      if (auVar11 != (uchar  [8])0x0) {
        FVar7 = StatPtr_STAT_D3D12RayTracingUsedVideoMemory;
        if (StatPtr_STAT_D3D12RayTracingUsedVideoMemory ==
            (FThreadSafeStaticStat<FStat_STAT_D3D12RayTracingUsedVideoMemory>)0x0) {
          pFVar6 = ::FName::FName(&local_70,"STAT_D3D12RayTracingUsedVideoMemory");
          FVar7 = (FThreadSafeStaticStat<FStat_STAT_D3D12RayTracingUsedVideoMemory>)
                  FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)
                             &StatPtr_STAT_D3D12RayTracingUsedVideoMemory,*pFVar6,
                             L"Total Used Video Memory","STATGROUP_D3D12RayTracing",
                             "STATCAT_Advanced",L"D3D12RHI: Ray Tracing",true,false,ST_int64,false,
                             false,MCR_Physical);
        }
        FVar2 = *(FName *)FVar7;
        FVar15 = FVar2.ComparisonIndex.Value;
        uVar13 = FVar2.Number;
        local_res20 = FVar15.Value;
        uStackX_24 = uVar13;
        if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
           (FThreadStats::TlsSlot != 0xffffffff)) {
          pFVar8 = TlsGetValue(FThreadStats::TlsSlot);
          if (pFVar8 == (FThreadStats *)0x0) {
            pFVar9 = FThreadStatsPool::Get();
            pFVar8 = FThreadStatsPool::GetFromPool(pFVar9);
          }
          local_b0.NameAndInfo.Number = uVar13 & 0xffffbfff | 0xb000;
          local_d0 = FVar2;
          local_b0.StatData.Pad = auVar11;
          local_b0.NameAndInfo.Index.Value = FVar15.Value;
          FThreadStats::AddStatMessage(pFVar8,&local_b0);
          FStatsTrace::Add(&local_d0,-(longlong)auVar11);
          if (pFVar8->ScopeCount == 0) {
            FThreadStats::Flush(pFVar8,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(pFVar8,false,false);
          }
        }
      }
      uVar13 = (uint)(this->AccelerationStructureBuffers[uVar14].Reference)->_padding_;
      auVar12[4] = '\0';
      auVar12[5] = '\0';
      auVar12[6] = '\0';
      auVar12[7] = '\0';
      auVar12[0] = (char)uVar13;
      auVar12[1] = (char)(uVar13 >> 8);
      auVar12[2] = (char)(uVar13 >> 0x10);
      auVar12[3] = (char)(uVar13 >> 0x18);
      if (auVar12 != (uchar  [8])0x0) {
        FVar10 = StatPtr_STAT_D3D12RayTracingTLASMemory;
        if (StatPtr_STAT_D3D12RayTracingTLASMemory ==
            (FThreadSafeStaticStat<FStat_STAT_D3D12RayTracingTLASMemory>)0x0) {
          pFVar6 = ::FName::FName(&local_68,"STAT_D3D12RayTracingTLASMemory");
          FVar10 = (FThreadSafeStaticStat<FStat_STAT_D3D12RayTracingTLASMemory>)
                   FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12RayTracingTLASMemory,
                              *pFVar6,L"TL AS Memory","STATGROUP_D3D12RayTracing","STATCAT_Advanced"
                              ,L"D3D12RHI: Ray Tracing",true,false,ST_int64,false,false,MCR_Physical
                             );
        }
        FVar2 = *(FName *)FVar10;
        if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
           (FThreadStats::TlsSlot != 0xffffffff)) {
          pFVar8 = TlsGetValue(FThreadStats::TlsSlot);
          if (pFVar8 == (FThreadStats *)0x0) {
            pFVar9 = FThreadStatsPool::Get();
            pFVar8 = FThreadStatsPool::GetFromPool(pFVar9);
          }
          local_a0.NameAndInfo.Number = FVar2.Number & 0xffffbfff | 0xb000;
          local_c8 = FVar2;
          local_a0.StatData.Pad = auVar12;
          local_a0.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
          FThreadStats::AddStatMessage(pFVar8,&local_a0);
          FStatsTrace::Add(&local_c8,-(longlong)auVar12);
          if (pFVar8->ScopeCount == 0) {
            FThreadStats::Flush(pFVar8,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(pFVar8,false,false);
          }
        }
      }
    }
    pFVar1 = this->AccelerationStructureBuffers[uVar14].Reference;
    pFVar3 = (FD3D12Buffer *)(&local_res10[1]._padding_)[uVar14];
    if (pFVar1 != pFVar3) {
      this->AccelerationStructureBuffers[uVar14].Reference = pFVar3;
      if (pFVar3 != (FD3D12Buffer *)0x0) {
        (**(code **)(pFVar3->_padding_ + 8))(&pFVar3->_padding_,local_res8);
      }
      if (pFVar1 != (FD3D12Buffer *)0x0) {
        (**(code **)(pFVar1->_padding_ + 0x10))();
      }
    }
    uVar13 = (uint)(this->AccelerationStructureBuffers[uVar14].Reference)->_padding_;
    auVar16[4] = '\0';
    auVar16[5] = '\0';
    auVar16[6] = '\0';
    auVar16[7] = '\0';
    auVar16[0] = (char)uVar13;
    auVar16[1] = (char)(uVar13 >> 8);
    auVar16[2] = (char)(uVar13 >> 0x10);
    auVar16[3] = (char)(uVar13 >> 0x18);
    if (auVar16 != (uchar  [8])0x0) {
      FVar7 = StatPtr_STAT_D3D12RayTracingUsedVideoMemory;
      if (StatPtr_STAT_D3D12RayTracingUsedVideoMemory ==
          (FThreadSafeStaticStat<FStat_STAT_D3D12RayTracingUsedVideoMemory>)0x0) {
        pFVar6 = ::FName::FName(&local_60,"STAT_D3D12RayTracingUsedVideoMemory");
        FVar7 = (FThreadSafeStaticStat<FStat_STAT_D3D12RayTracingUsedVideoMemory>)
                FThreadSafeStaticStatBase::DoSetup
                          ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12RayTracingUsedVideoMemory
                           ,*pFVar6,L"Total Used Video Memory","STATGROUP_D3D12RayTracing",
                           "STATCAT_Advanced",L"D3D12RHI: Ray Tracing",true,false,ST_int64,false,
                           false,MCR_Physical);
      }
      FVar2 = *(FName *)FVar7;
      if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar8 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar8 == (FThreadStats *)0x0) {
          pFVar9 = FThreadStatsPool::Get();
          pFVar8 = FThreadStatsPool::GetFromPool(pFVar9);
        }
        local_90.NameAndInfo.Number = FVar2.Number & 0xffffafff | 0xa000;
        local_c0 = FVar2;
        local_90.StatData.Pad = auVar16;
        local_90.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
        FThreadStats::AddStatMessage(pFVar8,&local_90);
        FStatsTrace::Add(&local_c0,(long64)auVar16);
        if (pFVar8->ScopeCount == 0) {
          FThreadStats::Flush(pFVar8,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar8,false,false);
        }
      }
    }
    uVar13 = (uint)(this->AccelerationStructureBuffers[uVar14].Reference)->_padding_;
    auVar17[4] = '\0';
    auVar17[5] = '\0';
    auVar17[6] = '\0';
    auVar17[7] = '\0';
    auVar17[0] = (char)uVar13;
    auVar17[1] = (char)(uVar13 >> 8);
    auVar17[2] = (char)(uVar13 >> 0x10);
    auVar17[3] = (char)(uVar13 >> 0x18);
    if (auVar17 != (uchar  [8])0x0) {
      FVar10 = StatPtr_STAT_D3D12RayTracingTLASMemory;
      if (StatPtr_STAT_D3D12RayTracingTLASMemory ==
          (FThreadSafeStaticStat<FStat_STAT_D3D12RayTracingTLASMemory>)0x0) {
        pFVar6 = ::FName::FName(local_58,"STAT_D3D12RayTracingTLASMemory");
        FVar10 = (FThreadSafeStaticStat<FStat_STAT_D3D12RayTracingTLASMemory>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12RayTracingTLASMemory,
                            *pFVar6,L"TL AS Memory","STATGROUP_D3D12RayTracing","STATCAT_Advanced",
                            L"D3D12RHI: Ray Tracing",true,false,ST_int64,false,false,MCR_Physical);
      }
      FVar2 = *(FName *)FVar10;
      if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar8 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar8 == (FThreadStats *)0x0) {
          pFVar9 = FThreadStatsPool::Get();
          pFVar8 = FThreadStatsPool::GetFromPool(pFVar9);
        }
        local_80.NameAndInfo.Number = FVar2.Number & 0xffffafff | 0xa000;
        local_b8 = FVar2;
        local_80.StatData.Pad = auVar17;
        local_80.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
        FThreadStats::AddStatMessage(pFVar8,&local_80);
        FStatsTrace::Add(&local_b8,(long64)auVar17);
        if (pFVar8->ScopeCount == 0) {
          FThreadStats::Flush(pFVar8,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar8,false,false);
        }
      }
    }
    uVar13 = (int)uVar14 + 1;
    uVar14 = (ulonglong)uVar13;
  } while (uVar13 < GNumExplicitGPUsForRendering);
  this->BufferOffset = local_res18;
  return;
}

// GetInitializer @ 145a19450

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

FRayTracingSceneInitializer * __thiscall
FD3D12RayTracingScene::GetInitializer(FD3D12RayTracingScene *this)

{
  return &this->Initializer;
}

// ReleaseBuffer @ 145a2a6a0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FD3D12RayTracingScene::ReleaseBuffer(FD3D12RayTracingScene *this)

{
  uint uVar1;
  FName FVar2;
  FD3D12Buffer *pFVar3;
  FName *pFVar4;
  FThreadSafeStaticStat<FStat_STAT_D3D12RayTracingUsedVideoMemory> FVar5;
  FThreadStats *pFVar6;
  FThreadStatsPool *pFVar7;
  FThreadSafeStaticStat<FStat_STAT_D3D12RayTracingTLASMemory> FVar8;
  uchar auVar9 [8];
  uchar auVar10 [8];
  TRefCountPtr<FD3D12Buffer> *pTVar11;
  FName local_res18;
  FName local_res20;
  FName local_78;
  FStatMessage local_70;
  FStatMessage local_60 [2];
  
  FVar5 = StatPtr_STAT_D3D12RayTracingUsedVideoMemory;
  for (pTVar11 = this->AccelerationStructureBuffers;
      pTVar11 != (TRefCountPtr<FD3D12Buffer> *)&this->BufferOffset; pTVar11 = pTVar11 + 1) {
    StatPtr_STAT_D3D12RayTracingUsedVideoMemory = FVar5;
    if (pTVar11->Reference != (FD3D12Buffer *)0x0) {
      uVar1 = (uint)pTVar11->Reference->_padding_;
      auVar9[4] = '\0';
      auVar9[5] = '\0';
      auVar9[6] = '\0';
      auVar9[7] = '\0';
      auVar9[0] = (char)uVar1;
      auVar9[1] = (char)(uVar1 >> 8);
      auVar9[2] = (char)(uVar1 >> 0x10);
      auVar9[3] = (char)(uVar1 >> 0x18);
      if (auVar9 != (uchar  [8])0x0) {
        if (FVar5 == (FThreadSafeStaticStat<FStat_STAT_D3D12RayTracingUsedVideoMemory>)0x0) {
          pFVar4 = ::FName::FName(&local_res20,"STAT_D3D12RayTracingUsedVideoMemory");
          FVar5 = (FThreadSafeStaticStat<FStat_STAT_D3D12RayTracingUsedVideoMemory>)
                  FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)
                             &StatPtr_STAT_D3D12RayTracingUsedVideoMemory,*pFVar4,
                             L"Total Used Video Memory","STATGROUP_D3D12RayTracing",
                             "STATCAT_Advanced",L"D3D12RHI: Ray Tracing",true,false,ST_int64,false,
                             false,MCR_Physical);
        }
        FVar2 = *(FName *)FVar5;
        if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
           (FThreadStats::TlsSlot != 0xffffffff)) {
          pFVar6 = TlsGetValue(FThreadStats::TlsSlot);
          if (pFVar6 == (FThreadStats *)0x0) {
            pFVar7 = FThreadStatsPool::Get();
            pFVar6 = FThreadStatsPool::GetFromPool(pFVar7);
          }
          local_70.NameAndInfo.Number = FVar2.Number & 0xffffbfff | 0xb000;
          local_res18 = FVar2;
          local_70.StatData.Pad = auVar9;
          local_70.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
          FThreadStats::AddStatMessage(pFVar6,&local_70);
          FStatsTrace::Add(&local_res18,-(longlong)auVar9);
          if (pFVar6->ScopeCount == 0) {
            FThreadStats::Flush(pFVar6,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(pFVar6,false,false);
          }
        }
      }
      uVar1 = (uint)pTVar11->Reference->_padding_;
      auVar10[4] = '\0';
      auVar10[5] = '\0';
      auVar10[6] = '\0';
      auVar10[7] = '\0';
      auVar10[0] = (char)uVar1;
      auVar10[1] = (char)(uVar1 >> 8);
      auVar10[2] = (char)(uVar1 >> 0x10);
      auVar10[3] = (char)(uVar1 >> 0x18);
      if (auVar10 != (uchar  [8])0x0) {
        FVar8 = StatPtr_STAT_D3D12RayTracingTLASMemory;
        if (StatPtr_STAT_D3D12RayTracingTLASMemory ==
            (FThreadSafeStaticStat<FStat_STAT_D3D12RayTracingTLASMemory>)0x0) {
          pFVar4 = ::FName::FName(&local_78,"STAT_D3D12RayTracingTLASMemory");
          FVar8 = (FThreadSafeStaticStat<FStat_STAT_D3D12RayTracingTLASMemory>)
                  FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12RayTracingTLASMemory,
                             *pFVar4,L"TL AS Memory","STATGROUP_D3D12RayTracing","STATCAT_Advanced",
                             L"D3D12RHI: Ray Tracing",true,false,ST_int64,false,false,MCR_Physical);
        }
        FVar2 = *(FName *)FVar8;
        if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
           (FThreadStats::TlsSlot != 0xffffffff)) {
          pFVar6 = TlsGetValue(FThreadStats::TlsSlot);
          if (pFVar6 == (FThreadStats *)0x0) {
            pFVar7 = FThreadStatsPool::Get();
            pFVar6 = FThreadStatsPool::GetFromPool(pFVar7);
          }
          local_60[0].NameAndInfo.Number = FVar2.Number & 0xffffbfff | 0xb000;
          local_res18 = FVar2;
          local_60[0].StatData.Pad = auVar10;
          local_60[0].NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
          FThreadStats::AddStatMessage(pFVar6,local_60);
          FStatsTrace::Add(&local_res18,-(longlong)auVar10);
          if (pFVar6->ScopeCount == 0) {
            FThreadStats::Flush(pFVar6,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(pFVar6,false,false);
          }
        }
      }
    }
    pFVar3 = pTVar11->Reference;
    if (pFVar3 != (FD3D12Buffer *)0x0) {
      pTVar11->Reference = (FD3D12Buffer *)0x0;
      (**(code **)(pFVar3->_padding_ + 0x10))();
    }
    FVar5 = StatPtr_STAT_D3D12RayTracingUsedVideoMemory;
  }
  StatPtr_STAT_D3D12RayTracingUsedVideoMemory = FVar5;
  return;
}

// UpdateResidency @ 145a37400

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12RayTracingScene::UpdateResidency(FD3D12RayTracingScene *this,FD3D12CommandContext *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FD3D12Resource *pFVar3;
  code *pcVar4;
  ulonglong uVar5;
  FScriptContainerElement *pFVar6;
  TArray<FD3D12Resource_const_*,TSizedDefaultAllocator<32>_> *pTVar7;
  bool bVar8;
  undefined1 local_res8 [8];
  uint local_res10;
  
  local_res10 = 0;
  bVar8 = *(int *)&param_1->field_0x2f8 != 0;
  if (bVar8) {
    for (; (*(uint *)&param_1->field_0x2f8 >> local_res10 & 1) == 0; local_res10 = local_res10 + 1)
    {
    }
  }
  uVar5 = 0x20;
  if (bVar8) {
    uVar5 = (ulonglong)local_res10;
  }
  pFVar3 = (FD3D12Resource *)(this->AccelerationStructureBuffers[uVar5].Reference)->_padding_;
  if (pFVar3 == (FD3D12Resource *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Resource",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12CommandContext.h"
                       ,0x1a5,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (*(longlong *)&param_1->field_0x188 == 0) {
    (**(code **)(*(longlong *)param_1 + 8))(param_1);
  }
  FD3D12CommandList::UpdateResidency(*(FD3D12CommandList **)&param_1->field_0x188,pFVar3);
  pTVar7 = this->ResourcesToMakeResident + uVar5;
  pFVar6 = (pTVar7->AllocatorInstance).Data;
  iVar2 = pTVar7->ArrayNum;
  pFVar1 = pFVar6 + (longlong)iVar2 * 8;
  while( true ) {
    if (pTVar7->ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FD3D12Resource_const_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar6 == pFVar1) break;
    pFVar3 = *(FD3D12Resource **)pFVar6;
    if (pFVar3 == (FD3D12Resource *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Resource",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12CommandContext.h"
                         ,0x1a5,L"");
      if (bVar8) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    if (*(longlong *)&param_1->field_0x188 == 0) {
      (**(code **)(*(longlong *)param_1 + 8))(param_1);
    }
    FD3D12CommandList::UpdateResidency(*(FD3D12CommandList **)&param_1->field_0x188,pFVar3);
    pFVar6 = pFVar6 + 8;
  }
  return;
}

