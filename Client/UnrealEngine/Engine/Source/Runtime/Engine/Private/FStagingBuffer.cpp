// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// ~FStagingBuffer @ 1489b94d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall FVTUploadTileAllocator::FStagingBuffer::~FStagingBuffer(FStagingBuffer *this)

{
  FScriptContainerElement *pFVar1;
  FRHIBuffer *this_00;
  
  Release(this,(FRHICommandListBase *)0x0);
  pFVar1 = (this->TileFreeList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this_00 = (this->RHIBuffer).Reference;
  if (this_00 != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
    return;
  }
  return;
}

// Init @ 1489f2920

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FVTUploadTileAllocator::FStagingBuffer::Init
          (FStagingBuffer *this,FRHICommandListBase *param_1,EVTUploadType param_2,uint param_3,
          uint param_4)

{
  int *piVar1;
  undefined1 *puVar2;
  ERHIPipeline EVar3;
  FRHIBuffer *pFVar4;
  FName FVar5;
  code *pcVar6;
  TConsoleVariableData<int> *pTVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  TRefCountPtr<FRHIBuffer> TVar11;
  void *pvVar12;
  FName *pFVar13;
  FThreadSafeStaticStat<FStat_STAT_TotalGPUUploadSize> FVar14;
  FThreadStats *this_00;
  FThreadStatsPool *pFVar15;
  FThreadSafeStaticStat<FStat_STAT_TotalCPUUploadSize> FVar16;
  longlong lVar17;
  uchar auVar18 [8];
  uint uVar19;
  uint uVar20;
  uchar auVar21 [8];
  ushort uVar22;
  uint local_res8;
  uint uStackX_c;
  FName local_b0;
  FName local_a8;
  FStatMessage local_a0;
  FStatMessage local_90;
  FName local_80;
  FName local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  wchar_t *local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  this->TileSize = param_4;
  this->TileSizeAligned = param_4 + 0x7f & 0xffffff80;
  pTVar7 = CVarVTUploadMemoryPageSize.Ref;
  bVar8 = IsInParallelRenderingThread();
  if ((!bVar8) &&
     (bVar8 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007955>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6d3,"IsInParallelRenderingThread()"), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar20 = this->TileSizeAligned;
  piVar1 = &(this->TileFreeList).ArrayNum;
  uVar9 = (pTVar7->ShadowedValue[1] * 0x100000 + -1 + uVar20) / uVar20;
  uVar19 = 0x2000;
  if (uVar9 < 0x2000) {
    uVar19 = uVar9;
  }
  this->NumTiles = uVar19;
  uVar19 = uVar19 * uVar20;
  if ((*piVar1 != 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("TileFreeList.Num() == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\VT\\VirtualTextureUploadCache.cpp"
                         ,0xb8,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,this->NumTiles,&(this->TileFreeList).AllocatorInstance,piVar1,
             &(this->TileFreeList).ArrayMax);
  uVar20 = this->NumTiles;
  uVar9 = 0;
  if (uVar20 != 0) {
    do {
      uVar22 = (ushort)uVar9;
      uVar10 = 0;
      if ((int)uVar9 < (this->TileFreeList).ArrayNum) {
        uVar10 = ~uVar9 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar17 = (longlong)(int)uVar9;
      uVar9 = uVar9 + 1;
      *(ushort *)((this->TileFreeList).AllocatorInstance.Data + lVar17 * 2) =
           (short)uVar20 + ~uVar22;
      uVar20 = this->NumTiles & 0xffff;
    } while (uVar9 < this->NumTiles);
  }
  if (param_2 == PersistentBuffer) {
    local_70 = CONCAT44(param_3,uVar19);
    uStack_68 = CONCAT44((1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1,0x10301);
    local_50 = 0x70;
    uStack_48 = 0;
    local_60 = L"StagingBuffer";
    uStack_58 = 0;
    local_40 = 0;
    TVar11 = FRHICommandListBase::CreateBuffer(param_1,(FRHIBufferCreateDesc *)&local_res8);
    if ((FRHIBuffer *)this != TVar11.Reference) {
      pFVar4 = (this->RHIBuffer).Reference;
      (this->RHIBuffer).Reference = (FRHIBuffer *)(TVar11.Reference)->_padding_;
      (TVar11.Reference)->_padding_ = 0;
      if (pFVar4 != (FRHIBuffer *)0x0) {
        FRHIResource::Release((FRHIResource *)pFVar4);
      }
    }
    if ((FRHIResource *)CONCAT44(uStackX_c,local_res8) != (FRHIResource *)0x0) {
      FRHIResource::Release((FRHIResource *)CONCAT44(uStackX_c,local_res8));
    }
    pFVar4 = (this->RHIBuffer).Reference;
    if (((((GRHICommandList.bLatchedBypass == false) ||
          ((param_1->PersistentState).bImmediate == '\0')) && (param_1->bExecuting != false)) &&
        ((GRHICommandList.bLatchedBypass == false || ((param_1->PersistentState).bImmediate == '\0')
         ))) && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsTopOfPipe() || Bypass()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                                    ,0x2ed,
                                    L"Buffers may only be locked while recording RHI command lists, not during RHI command list execution."
                                   ), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    EVar3 = param_1->ActivePipelines;
    if (((EVar3 != None) && ((EVar3 & EVar3 - Graphics) != None)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("ActivePipelines == ERHIPipeline::None || IsSingleRHIPipeline(ActivePipelines)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                           ,0x2a5,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    bVar8 = param_1->ActivePipelines == None;
    if (bVar8) {
      FRHICommandListBase::SwitchPipeline(param_1,Graphics);
    }
    pvVar12 = (void *)(**(code **)(GDynamicRHI->_padding_ + 0x148))
                                (GDynamicRHI,param_1,pFVar4,0,uVar19,2);
    if (bVar8) {
      FRHICommandListBase::SwitchPipeline(param_1,None);
    }
    this->Memory = pvVar12;
    auVar21[4] = '\0';
    auVar21[5] = '\0';
    auVar21[6] = '\0';
    auVar21[7] = '\0';
    auVar21._0_4_ = uVar19;
    if (uVar19 == 0) {
      return;
    }
    FVar14 = StatPtr_STAT_TotalGPUUploadSize;
    if (StatPtr_STAT_TotalGPUUploadSize == (FThreadSafeStaticStat<FStat_STAT_TotalGPUUploadSize>)0x0
       ) {
      pFVar13 = ::FName::FName(&local_80,"STAT_TotalGPUUploadSize");
      FVar14 = (FThreadSafeStaticStat<FStat_STAT_TotalGPUUploadSize>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TotalGPUUploadSize,*pFVar13,
                          L"Total GPU Upload Memory","STATGROUP_VirtualTextureMemory",
                          "STATCAT_Advanced",L"Virtual Texture Memory",true,false,ST_int64,false,
                          false,MCR_GPU);
    }
    FVar5 = *(FName *)FVar14;
    if (FVar5 == (FName)0x0) {
      return;
    }
    if (FThreadStats::bPrimaryDisableForever != false) {
      return;
    }
    if (FThreadStats::TlsSlot == 0xffffffff) {
      return;
    }
    local_res8 = FVar5.ComparisonIndex.Value.Value;
    uStackX_c = FVar5.Number;
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      pFVar15 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(pFVar15);
    }
    local_a0.NameAndInfo.Number = FVar5.Number & 0xffffafff | 0xa000;
    local_b0 = FVar5;
    local_a0.StatData.Pad = auVar21;
    local_a0.NameAndInfo.Index.Value = FVar5.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(this_00,&local_a0);
    pFVar13 = &local_b0;
  }
  else {
    auVar18[4] = '\0';
    auVar18[5] = '\0';
    auVar18[6] = '\0';
    auVar18[7] = '\0';
    auVar18._0_4_ = uVar19;
    pvVar12 = FMemory::Malloc((ulonglong)uVar19,0x80);
    this->Memory = pvVar12;
    if (uVar19 == 0) {
      return;
    }
    FVar16 = StatPtr_STAT_TotalCPUUploadSize;
    if (StatPtr_STAT_TotalCPUUploadSize == (FThreadSafeStaticStat<FStat_STAT_TotalCPUUploadSize>)0x0
       ) {
      pFVar13 = ::FName::FName(&local_78,"STAT_TotalCPUUploadSize");
      FVar16 = (FThreadSafeStaticStat<FStat_STAT_TotalCPUUploadSize>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TotalCPUUploadSize,*pFVar13,
                          L"Total CPU Upload Memory","STATGROUP_VirtualTextureMemory",
                          "STATCAT_Advanced",L"Virtual Texture Memory",true,false,ST_int64,false,
                          false,MCR_Physical);
    }
    FVar5 = *(FName *)FVar16;
    if (FVar5 == (FName)0x0) {
      return;
    }
    if (FThreadStats::bPrimaryDisableForever != false) {
      return;
    }
    if (FThreadStats::TlsSlot == 0xffffffff) {
      return;
    }
    local_res8 = FVar5.ComparisonIndex.Value.Value;
    uStackX_c = FVar5.Number;
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      pFVar15 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(pFVar15);
    }
    local_90.NameAndInfo.Number = FVar5.Number & 0xffffafff | 0xa000;
    local_a8 = FVar5;
    local_90.StatData.Pad = auVar18;
    local_90.NameAndInfo.Index.Value = FVar5.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(this_00,&local_90);
    pFVar13 = &local_a8;
  }
  FStatsTrace::Add(pFVar13,(ulonglong)uVar19);
  if (this_00->ScopeCount == 0) {
    FThreadStats::Flush(this_00,false,false);
  }
  else if (FThreadStats::bIsRawStatsActive != false) {
    FThreadStats::FlushRawStats(this_00,false,false);
  }
  return;
}

// Release @ 148a075d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FVTUploadTileAllocator::FStagingBuffer::Release(FStagingBuffer *this,FRHICommandListBase *param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  ERHIPipeline EVar3;
  FRHIBuffer *this_00;
  FName FVar4;
  code *pcVar5;
  bool bVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<FStat_STAT_TotalGPUUploadSize> FVar8;
  FThreadStats *pFVar9;
  FThreadStatsPool *pFVar10;
  FThreadSafeStaticStat<FStat_STAT_TotalCPUUploadSize> FVar11;
  uchar auVar12 [8];
  uchar auVar13 [8];
  uint uVar14;
  FName local_res8;
  FName local_res18;
  FName local_res20;
  FName local_68;
  FStatMessage local_60;
  FStatMessage local_50;
  
  uVar14 = this->NumTiles * this->TileSizeAligned;
  if ((this->RHIBuffer).Reference != (FRHIBuffer *)0x0) {
    if ((param_1 == (FRHICommandListBase *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("RHICmdList",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\VT\\VirtualTextureUploadCache.cpp"
                           ,0xde,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if ((((GRHICommandList.bLatchedBypass == false) ||
         ((param_1->PersistentState).bImmediate == '\0')) && (param_1->bExecuting != false)) &&
       (((GRHICommandList.bLatchedBypass == false || ((param_1->PersistentState).bImmediate == '\0')
         ) && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsTopOfPipe() || Bypass()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                                  ,0x2f5,
                                  L"Buffers may only be unlocked while recording RHI command lists, not during RHI command list execution."
                                 ), bVar6)))) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    EVar3 = param_1->ActivePipelines;
    if (((EVar3 != None) && ((EVar3 & EVar3 - Graphics) != None)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ActivePipelines == ERHIPipeline::None || IsSingleRHIPipeline(ActivePipelines)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                           ,0x2a5,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (param_1->ActivePipelines == None) {
      FRHICommandListBase::SwitchPipeline(param_1,Graphics);
      (**(code **)(GDynamicRHI->_padding_ + 0x158))();
      FRHICommandListBase::SwitchPipeline(param_1,None);
    }
    else {
      (**(code **)(GDynamicRHI->_padding_ + 0x158))(GDynamicRHI,param_1);
    }
    this_00 = (this->RHIBuffer).Reference;
    if (this_00 != (FRHIBuffer *)0x0) {
      (this->RHIBuffer).Reference = (FRHIBuffer *)0x0;
      FRHIResource::Release((FRHIResource *)this_00);
    }
    this->Memory = (void *)0x0;
    auVar12[4] = '\0';
    auVar12[5] = '\0';
    auVar12[6] = '\0';
    auVar12[7] = '\0';
    auVar12._0_4_ = uVar14;
    if (uVar14 != 0) {
      FVar8 = StatPtr_STAT_TotalGPUUploadSize;
      if (StatPtr_STAT_TotalGPUUploadSize ==
          (FThreadSafeStaticStat<FStat_STAT_TotalGPUUploadSize>)0x0) {
        pFVar7 = ::FName::FName(&local_res20,"STAT_TotalGPUUploadSize");
        FVar8 = (FThreadSafeStaticStat<FStat_STAT_TotalGPUUploadSize>)
                FThreadSafeStaticStatBase::DoSetup
                          ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TotalGPUUploadSize,*pFVar7,
                           L"Total GPU Upload Memory","STATGROUP_VirtualTextureMemory",
                           "STATCAT_Advanced",L"Virtual Texture Memory",true,false,ST_int64,false,
                           false,MCR_GPU);
      }
      FVar4 = *(FName *)FVar8;
      local_res8 = FVar4;
      if (((FVar4 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar9 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar9 == (FThreadStats *)0x0) {
          pFVar10 = FThreadStatsPool::Get();
          pFVar9 = FThreadStatsPool::GetFromPool(pFVar10);
        }
        local_60.NameAndInfo.Number = FVar4.Number & 0xffffbfff | 0xb000;
        local_res8 = FVar4;
        local_60.StatData.Pad = auVar12;
        local_60.NameAndInfo.Index.Value = FVar4.ComparisonIndex.Value.Value;
        FThreadStats::AddStatMessage(pFVar9,&local_60);
        FStatsTrace::Add(&local_res8,-(longlong)auVar12);
        if (pFVar9->ScopeCount == 0) {
          FThreadStats::Flush(pFVar9,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar9,false,false);
        }
      }
    }
  }
  if (this->Memory != (void *)0x0) {
    FMemory::Free(this->Memory);
    this->Memory = (void *)0x0;
    auVar13[4] = '\0';
    auVar13[5] = '\0';
    auVar13[6] = '\0';
    auVar13[7] = '\0';
    auVar13._0_4_ = uVar14;
    if (uVar14 != 0) {
      FVar11 = StatPtr_STAT_TotalCPUUploadSize;
      if (StatPtr_STAT_TotalCPUUploadSize ==
          (FThreadSafeStaticStat<FStat_STAT_TotalCPUUploadSize>)0x0) {
        pFVar7 = ::FName::FName(&local_68,"STAT_TotalCPUUploadSize");
        FVar11 = (FThreadSafeStaticStat<FStat_STAT_TotalCPUUploadSize>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TotalCPUUploadSize,*pFVar7,
                            L"Total CPU Upload Memory","STATGROUP_VirtualTextureMemory",
                            "STATCAT_Advanced",L"Virtual Texture Memory",true,false,ST_int64,false,
                            false,MCR_Physical);
      }
      FVar4 = *(FName *)FVar11;
      local_res8 = FVar4;
      if (((FVar4 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar9 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar9 == (FThreadStats *)0x0) {
          pFVar10 = FThreadStatsPool::Get();
          pFVar9 = FThreadStatsPool::GetFromPool(pFVar10);
        }
        local_50.NameAndInfo.Number = FVar4.Number & 0xffffbfff | 0xb000;
        local_res18 = FVar4;
        local_50.StatData.Pad = auVar13;
        local_50.NameAndInfo.Index.Value = FVar4.ComparisonIndex.Value.Value;
        FThreadStats::AddStatMessage(pFVar9,&local_50);
        FStatsTrace::Add(&local_res18,-(longlong)auVar13);
        if (pFVar9->ScopeCount == 0) {
          FThreadStats::Flush(pFVar9,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar9,false,false);
        }
      }
    }
  }
  this->TileSize = 0;
  this->NumTiles = 0;
  piVar1 = &(this->TileFreeList).ArrayMax;
  (this->TileFreeList).ArrayNum = 0;
  if (*piVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,0,&(this->TileFreeList).AllocatorInstance,0,piVar1);
  }
  return;
}

