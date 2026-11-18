// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 22

// UnlockForRead @ 148e83c40

/* WARNING: Enum "Type": Some values do not have unique names */

TRefCountPtr<FNiagaraDataBuffer> __thiscall
FNiagaraDataBuffer::UnlockForRead(FNiagaraDataBuffer *this)

{
  FNiagaraDataBuffer *in_RDX;
  bool bVar1;
  undefined1 local_res8 [8];
  
  LOCK();
  bVar1 = (int)this->_padding_ == -1;
  if (bVar1) {
    *(undefined4 *)&this->_padding_ = 1;
  }
  UNLOCK();
  if (bVar1) {
    in_RDX->_padding_ = (longlong)this;
    return (TRefCountPtr<FNiagaraDataBuffer>)in_RDX;
  }
  `FNiagaraDataBuffer::UnlockForRead'::__l2::<lambda_1>::operator()(local_res8);
  in_RDX->_padding_ = (longlong)this;
  return (TRefCountPtr<FNiagaraDataBuffer>)in_RDX;
}

// FNiagaraDataBuffer @ 149212620

/* WARNING: Enum "Type": Some values do not have unique names */

FNiagaraDataBuffer * __thiscall
FNiagaraDataBuffer::FNiagaraDataBuffer(FNiagaraDataBuffer *this,FNiagaraDataSet *param_1)

{
  this->Owner = param_1;
  *(undefined4 *)&this->_padding_ = 0;
  (this->FloatData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FloatData).ArrayNum = 0;
  (this->FloatData).ArrayMax = 0;
  (this->Int32Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Int32Data).ArrayNum = 0;
  (this->Int32Data).ArrayMax = 0;
  (this->HalfData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HalfData).ArrayNum = 0;
  (this->HalfData).ArrayMax = 0;
  (this->IDToIndexTable).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IDToIndexTable).ArrayNum = 0;
  (this->IDToIndexTable).ArrayMax = 0;
  (this->GPUBufferFloat).Buffer.Reference = (FRHIBuffer *)0x0;
  (this->GPUBufferFloat).UAV.Reference = (FRHIUnorderedAccessView *)0x0;
  (this->GPUBufferFloat).SRV.Reference = (FRHIShaderResourceView *)0x0;
  (this->GPUBufferFloat).NumBytes = 0;
  (this->GPUBufferFloat).ClassName.ComparisonIndex = 0;
  this->_padding_ = (longlong)&___7FNiagaraDataBuffer__6B_;
  this->GPUDataReadyStage = First;
  this->GPUInstanceCountBufferOffset = 0xffffffff;
  *(undefined8 *)&(this->GPUBufferFloat).ClassName.Number = 0;
  (this->GPUBufferFloat).OwnerName.Number = 0;
  (this->GPUBufferInt).Buffer.Reference = (FRHIBuffer *)0x0;
  (this->GPUBufferInt).UAV.Reference = (FRHIUnorderedAccessView *)0x0;
  (this->GPUBufferInt).SRV.Reference = (FRHIShaderResourceView *)0x0;
  (this->GPUBufferInt).NumBytes = 0;
  (this->GPUBufferInt).ClassName.ComparisonIndex = 0;
  *(undefined8 *)&(this->GPUBufferInt).ClassName.Number = 0;
  (this->GPUBufferInt).OwnerName.Number = 0;
  (this->GPUIDToIndexTable).Buffer.Reference = (FRHIBuffer *)0x0;
  (this->GPUIDToIndexTable).UAV.Reference = (FRHIUnorderedAccessView *)0x0;
  (this->GPUIDToIndexTable).SRV.Reference = (FRHIShaderResourceView *)0x0;
  (this->GPUIDToIndexTable).NumBytes = 0;
  (this->GPUIDToIndexTable).ClassName.ComparisonIndex = 0;
  *(undefined8 *)&(this->GPUIDToIndexTable).ClassName.Number = 0;
  (this->GPUIDToIndexTable).OwnerName.Number = 0;
  (this->GPUBufferHalf).Buffer.Reference = (FRHIBuffer *)0x0;
  (this->GPUBufferHalf).UAV.Reference = (FRHIUnorderedAccessView *)0x0;
  (this->GPUBufferHalf).SRV.Reference = (FRHIShaderResourceView *)0x0;
  (this->GPUBufferHalf).NumBytes = 0;
  (this->GPUBufferHalf).ClassName.ComparisonIndex = 0;
  *(undefined8 *)&(this->GPUBufferHalf).ClassName.Number = 0;
  (this->GPUBufferHalf).OwnerName.Number = 0;
  this->AllocationSizeBytes = 0;
  this->NumInstances = 0;
  this->NumInstancesAllocated = 0;
  this->FloatStride = 0;
  this->Int32Stride = 0;
  this->HalfStride = 0;
  this->NumSpawnedInstances = 0;
  this->IDAcquireTag = 0;
  (this->RegisterTable).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RegisterTable).ArrayNum = 0;
  (this->RegisterTable).ArrayMax = 0;
  return this;
}

// ~FNiagaraDataBuffer @ 1492152f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FNiagaraDataBuffer::~FNiagaraDataBuffer(FNiagaraDataBuffer *this)

{
  FName FVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<FStat_STAT_NiagaraParticleMemory> FVar6;
  FThreadStats *pFVar7;
  FThreadStatsPool *pFVar8;
  FThreadSafeStaticStat<FStat_STAT_NiagaraGPUParticleMemory> FVar9;
  uchar auVar10 [8];
  FName local_res8;
  FName local_res10;
  FName local_res18;
  FName local_res20;
  FStatMessage local_58;
  FStatMessage local_48;
  
  this->_padding_ = (longlong)&___7FNiagaraDataBuffer__6B_;
  if ((int)this->_padding_ != 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsInUse()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataSet.cpp"
                       ,600,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  auVar10 = (uchar  [8])
            ((longlong)(this->HalfData).ArrayMax + (longlong)(this->Int32Data).ArrayMax +
            (longlong)(this->FloatData).ArrayMax);
  if (auVar10 != (uchar  [8])0x0) {
    FVar6 = StatPtr_STAT_NiagaraParticleMemory;
    if (StatPtr_STAT_NiagaraParticleMemory ==
        (FThreadSafeStaticStat<FStat_STAT_NiagaraParticleMemory>)0x0) {
      pFVar5 = ::FName::FName(&local_res18,"STAT_NiagaraParticleMemory");
      FVar6 = (FThreadSafeStaticStat<FStat_STAT_NiagaraParticleMemory>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraParticleMemory,*pFVar5,
                         L"Niagara particle data memory","STATGROUP_Niagara","STATCAT_Niagara",
                         L"Niagara",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar1 = *(FName *)FVar6;
    local_res8 = FVar1;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar7 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar7 == (FThreadStats *)0x0) {
        pFVar8 = FThreadStatsPool::Get();
        pFVar7 = FThreadStatsPool::GetFromPool(pFVar8);
      }
      local_58.NameAndInfo.Number = FVar1.Number & 0xffffbfff | 0xb000;
      local_res8 = FVar1;
      local_58.StatData.Pad = auVar10;
      local_58.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar7,&local_58);
      FStatsTrace::Add(&local_res8,-(longlong)auVar10);
      if (pFVar7->ScopeCount == 0) {
        FThreadStats::Flush(pFVar7,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar7,false,false);
      }
    }
  }
  auVar10 = (uchar  [8])(longlong)this->AllocationSizeBytes;
  if (auVar10 != (uchar  [8])0x0) {
    FVar9 = StatPtr_STAT_NiagaraGPUParticleMemory;
    if (StatPtr_STAT_NiagaraGPUParticleMemory ==
        (FThreadSafeStaticStat<FStat_STAT_NiagaraGPUParticleMemory>)0x0) {
      pFVar5 = ::FName::FName(&local_res20,"STAT_NiagaraGPUParticleMemory");
      FVar9 = (FThreadSafeStaticStat<FStat_STAT_NiagaraGPUParticleMemory>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraGPUParticleMemory,*pFVar5
                         ,L"Niagara GPU particle data memory","STATGROUP_Niagara","STATCAT_Niagara",
                         L"Niagara",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar1 = *(FName *)FVar9;
    local_res8 = FVar1;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar7 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar7 == (FThreadStats *)0x0) {
        pFVar8 = FThreadStatsPool::Get();
        pFVar7 = FThreadStatsPool::GetFromPool(pFVar8);
      }
      local_48.NameAndInfo.Number = FVar1.Number & 0xffffbfff | 0xb000;
      local_res10 = FVar1;
      local_48.StatData.Pad = auVar10;
      local_48.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar7,&local_48);
      FStatsTrace::Add(&local_res10,-(longlong)auVar10);
      if (pFVar7->ScopeCount == 0) {
        FThreadStats::Flush(pFVar7,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar7,false,false);
      }
    }
  }
  pFVar2 = (this->RegisterTable).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FRWBuffer::~FRWBuffer(&this->GPUBufferHalf);
  FRWBuffer::~FRWBuffer(&this->GPUIDToIndexTable);
  FRWBuffer::~FRWBuffer(&this->GPUBufferInt);
  FRWBuffer::~FRWBuffer(&this->GPUBufferFloat);
  pFVar2 = (this->IDToIndexTable).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->HalfData).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->Int32Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->FloatData).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  this->_padding_ = (longlong)&___7FNiagaraSharedObject__6B_;
  return;
}

// Allocate @ 14921ca40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall FNiagaraDataBuffer::Allocate(FNiagaraDataBuffer *this,uint param_1,bool param_2)

{
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar1;
  atomic<__int64> *paVar2;
  FNiagaraDataSetCompiledData *pFVar3;
  FName FVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<FStat_STAT_NiagaraParticleMemory> FVar11;
  FThreadStats *pFVar12;
  FThreadStatsPool *pFVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  EAllowShrinking EVar17;
  int iVar18;
  uchar auVar19 [8];
  uint uVar20;
  uint uVar21;
  bool local_res10;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_d0;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_c0;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_b0;
  uint local_a0;
  uint uStack_9c;
  FName local_98;
  uchar local_90 [8];
  FName local_88;
  FName local_80;
  FStatMessage local_78;
  FStatMessage local_68;
  FName local_58;
  FName local_50 [2];
  
  this->NumInstances = 0;
  if (!param_2) {
    (this->IDToIndexTable).ArrayNum = 0;
    if ((this->IDToIndexTable).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&(this->IDToIndexTable).AllocatorInstance,0,&(this->IDToIndexTable).ArrayMax)
      ;
    }
  }
  uVar20 = (param_1 * 4 + 0xf & 0xfffffff0) + 0x10;
  uVar21 = (param_1 * 2 + 0xf & 0xfffffff0) + 0x10;
  pFVar3 = (this->Owner->CompiledData).StructPtr;
  iVar15 = uVar20 * pFVar3->TotalFloatComponents;
  iVar16 = uVar20 * pFVar3->TotalInt32Components;
  iVar18 = uVar21 * pFVar3->TotalHalfComponents;
  iVar14 = (this->FloatData).ArrayNum;
  if (iVar15 == iVar14) {
    iVar14 = (this->Int32Data).ArrayNum;
    bVar8 = false;
    if (iVar16 == iVar14) {
      if (iVar18 == (this->HalfData).ArrayNum) {
        this->NumInstancesAllocated = param_1;
        goto LAB_14921d120;
      }
LAB_14921cb0a:
      iVar14 = (this->Int32Data).ArrayNum;
      bVar8 = iVar16 == iVar14;
    }
    if ((!bVar8 && iVar14 <= iVar16) || ((this->HalfData).ArrayNum < iVar18)) goto LAB_14921cbe3;
    iVar14 = iVar15;
    if (iVar15 < GNiagaraDataBufferMinSize) {
      iVar14 = GNiagaraDataBufferMinSize;
    }
    if ((iVar14 * GNiagaraDataBufferShrinkFactor < (this->FloatData).ArrayMax) || (iVar15 == 0)) {
      bVar7 = true;
    }
    else {
      bVar7 = false;
    }
    iVar14 = iVar16;
    if (iVar16 < GNiagaraDataBufferMinSize) {
      iVar14 = GNiagaraDataBufferMinSize;
    }
    if ((iVar14 * GNiagaraDataBufferShrinkFactor < (this->Int32Data).ArrayMax) || (iVar16 == 0)) {
      bVar8 = true;
      local_res10 = true;
    }
    else {
      bVar8 = false;
      local_res10 = false;
    }
    iVar14 = iVar18;
    if (iVar18 < GNiagaraDataBufferMinSize) {
      iVar14 = GNiagaraDataBufferMinSize;
    }
    if ((iVar14 * GNiagaraDataBufferShrinkFactor < (this->HalfData).ArrayMax) || (iVar18 == 0)) {
      EVar17 = Default;
    }
    else {
      EVar17 = No;
    }
    if (((!bVar7) && (!bVar8)) && (EVar17 == No)) {
      if (param_1 < this->NumInstancesAllocated) {
        param_1 = this->NumInstancesAllocated;
      }
      this->NumInstancesAllocated = param_1;
      uVar20 = (param_1 * 4 + 0xf & 0xfffffff0) + 0x10;
      uVar21 = (param_1 * 2 + 0xf & 0xfffffff0) + 0x10;
      goto LAB_14921d120;
    }
  }
  else {
    if (iVar15 <= iVar14) goto LAB_14921cb0a;
LAB_14921cbe3:
    bVar8 = false;
    bVar7 = false;
    local_res10 = false;
    EVar17 = No;
  }
  this->NumInstancesAllocated = param_1;
  local_90 = (uchar  [8])
             ((longlong)(this->HalfData).ArrayMax + (longlong)(this->Int32Data).ArrayMax +
             (longlong)(this->FloatData).ArrayMax);
  if (local_90 != (uchar  [8])0x0) {
    FVar11 = StatPtr_STAT_NiagaraParticleMemory;
    if (StatPtr_STAT_NiagaraParticleMemory ==
        (FThreadSafeStaticStat<FStat_STAT_NiagaraParticleMemory>)0x0) {
      pFVar10 = ::FName::FName(&local_58,"STAT_NiagaraParticleMemory");
      FVar11 = (FThreadSafeStaticStat<FStat_STAT_NiagaraParticleMemory>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraParticleMemory,*pFVar10,
                          L"Niagara particle data memory","STATGROUP_Niagara","STATCAT_Niagara",
                          L"Niagara",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar4 = *(FName *)FVar11;
    local_a0 = (uint)FVar4.ComparisonIndex.Value;
    uVar9 = FVar4.Number;
    uStack_9c = uVar9;
    local_98 = FVar4;
    if (((FVar4 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar12 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar12 == (FThreadStats *)0x0) {
        pFVar13 = FThreadStatsPool::Get();
        pFVar12 = FThreadStatsPool::GetFromPool(pFVar13);
      }
      auVar19 = local_90;
      local_78.NameAndInfo.Index = local_98.ComparisonIndex.Value;
      local_78.NameAndInfo.Number = uVar9 & 0xffffbfff | 0xb000;
      local_78.StatData.Pad[0] = local_90[0];
      local_78.StatData.Pad[1] = local_90[1];
      local_78.StatData.Pad[2] = local_90[2];
      local_78.StatData.Pad[3] = local_90[3];
      local_78.StatData.Pad[4] = local_90[4];
      local_78.StatData.Pad[5] = local_90[5];
      local_78.StatData.Pad[6] = local_90[6];
      local_78.StatData.Pad[7] = local_90[7];
      local_88 = FVar4;
      FThreadStats::AddStatMessage(pFVar12,&local_78);
      FStatsTrace::Add(&local_88,-(longlong)auVar19);
      bVar8 = local_res10;
      if (pFVar12->ScopeCount == 0) {
        FThreadStats::Flush(pFVar12,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar12,false,false);
      }
    }
  }
  LOCK();
  paVar2 = &this->Owner->BufferSizeBytes;
  *paVar2 = (atomic<__int64>)
            ((longlong)*paVar2 -
            ((longlong)(this->HalfData).ArrayMax + (longlong)(this->Int32Data).ArrayMax +
            (longlong)(this->FloatData).ArrayMax));
  UNLOCK();
  if (param_2) {
    local_b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b0.ArrayNum = 0;
    local_b0.ArrayMax = 0;
    local_c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_c0.ArrayNum = 0;
    local_c0.ArrayMax = 0;
    local_d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d0.ArrayNum = 0;
    local_d0.ArrayMax = 0;
    TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNum(&local_b0,iVar15,Default);
    TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNum(&local_c0,iVar16,Default);
    TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNum(&local_d0,iVar18,Default);
    if (uVar20 != 0) {
      uVar9 = this->FloatStride;
      if (uVar9 != 0) {
        if (uVar20 < uVar9) {
          uVar9 = uVar20;
        }
        iVar14 = ((this->Owner->CompiledData).StructPtr)->TotalFloatComponents - 1;
        if (-1 < iVar14) {
          do {
            memcpy(local_b0.AllocatorInstance.Data + iVar14 * uVar20,
                   (this->FloatData).AllocatorInstance.Data + iVar14 * this->FloatStride,
                   (ulonglong)uVar9);
            iVar14 = iVar14 + -1;
          } while (-1 < iVar14);
        }
      }
      uVar9 = this->Int32Stride;
      if (uVar9 != 0) {
        if (uVar20 < uVar9) {
          uVar9 = uVar20;
        }
        iVar14 = ((this->Owner->CompiledData).StructPtr)->TotalInt32Components - 1;
        if (-1 < iVar14) {
          do {
            memcpy(local_c0.AllocatorInstance.Data + iVar14 * uVar20,
                   (this->Int32Data).AllocatorInstance.Data + iVar14 * this->Int32Stride,
                   (ulonglong)uVar9);
            iVar14 = iVar14 + -1;
          } while (-1 < iVar14);
        }
      }
    }
    if ((uVar21 != 0) && (uVar9 = this->HalfStride, uVar9 != 0)) {
      if (uVar21 < uVar9) {
        uVar9 = uVar21;
      }
      iVar14 = ((this->Owner->CompiledData).StructPtr)->TotalHalfComponents - 1;
      if (-1 < iVar14) {
        do {
          memcpy(local_d0.AllocatorInstance.Data + iVar14 * uVar21,
                 (this->HalfData).AllocatorInstance.Data + iVar14 * this->HalfStride,
                 (ulonglong)uVar9);
          iVar14 = iVar14 + -1;
        } while (-1 < iVar14);
      }
    }
    pTVar1 = &this->FloatData;
    if (pTVar1 != &local_b0) {
      pFVar5 = (pTVar1->AllocatorInstance).Data;
      if (pFVar5 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar5);
      }
      (pTVar1->AllocatorInstance).Data = local_b0.AllocatorInstance.Data;
      (this->FloatData).ArrayNum = local_b0.ArrayNum;
      (this->FloatData).ArrayMax = local_b0.ArrayMax;
      local_b0.ArrayNum = 0;
      local_b0.ArrayMax = 0;
      local_b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    pTVar1 = &this->Int32Data;
    if (pTVar1 != &local_c0) {
      pFVar5 = (pTVar1->AllocatorInstance).Data;
      if (pFVar5 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar5);
      }
      (pTVar1->AllocatorInstance).Data = local_c0.AllocatorInstance.Data;
      (this->Int32Data).ArrayNum = local_c0.ArrayNum;
      (this->Int32Data).ArrayMax = local_c0.ArrayMax;
      local_c0.ArrayNum = 0;
      local_c0.ArrayMax = 0;
      local_c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    pTVar1 = &this->HalfData;
    if (pTVar1 != &local_d0) {
      pFVar5 = (pTVar1->AllocatorInstance).Data;
      if (pFVar5 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar5);
      }
      (pTVar1->AllocatorInstance).Data = local_d0.AllocatorInstance.Data;
      (this->HalfData).ArrayNum = local_d0.ArrayNum;
      (this->HalfData).ArrayMax = local_d0.ArrayMax;
      local_d0.ArrayNum = 0;
      local_d0.ArrayMax = 0;
      local_d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_d0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d0.AllocatorInstance.Data);
    }
    if (local_c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c0.AllocatorInstance.Data);
    }
    if (local_b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.AllocatorInstance.Data);
    }
  }
  else {
    TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNum(&this->FloatData,iVar15,bVar7);
    TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNum(&this->Int32Data,iVar16,bVar8);
    TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNum(&this->HalfData,iVar18,EVar17);
  }
  auVar19 = (uchar  [8])
            ((longlong)(this->HalfData).ArrayMax + (longlong)(this->Int32Data).ArrayMax +
            (longlong)(this->FloatData).ArrayMax);
  if (auVar19 != (uchar  [8])0x0) {
    FVar11 = StatPtr_STAT_NiagaraParticleMemory;
    if (StatPtr_STAT_NiagaraParticleMemory ==
        (FThreadSafeStaticStat<FStat_STAT_NiagaraParticleMemory>)0x0) {
      pFVar10 = ::FName::FName(local_50,"STAT_NiagaraParticleMemory");
      FVar11 = (FThreadSafeStaticStat<FStat_STAT_NiagaraParticleMemory>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraParticleMemory,*pFVar10,
                          L"Niagara particle data memory","STATGROUP_Niagara","STATCAT_Niagara",
                          L"Niagara",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar4 = *(FName *)FVar11;
    if (((FVar4 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar12 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar12 == (FThreadStats *)0x0) {
        pFVar13 = FThreadStatsPool::Get();
        pFVar12 = FThreadStatsPool::GetFromPool(pFVar13);
      }
      local_68.NameAndInfo.Number = FVar4.Number & 0xffffafff | 0xa000;
      local_80 = FVar4;
      local_68.StatData.Pad = auVar19;
      local_68.NameAndInfo.Index.Value = FVar4.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar12,&local_68);
      FStatsTrace::Add(&local_80,(long64)auVar19);
      if (pFVar12->ScopeCount == 0) {
        FThreadStats::Flush(pFVar12,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar12,false,false);
      }
    }
  }
  LOCK();
  paVar2 = &this->Owner->BufferSizeBytes;
  *paVar2 = (atomic<__int64>)
            ((longlong)*paVar2 +
            (longlong)(this->HalfData).ArrayMax + (longlong)(this->Int32Data).ArrayMax +
            (longlong)(this->FloatData).ArrayMax);
  UNLOCK();
LAB_14921d120:
  if (((uVar20 != this->FloatStride) || (uVar20 != this->Int32Stride)) ||
     (uVar21 != this->HalfStride)) {
    this->FloatStride = uVar20;
    this->Int32Stride = uVar20;
    this->HalfStride = uVar21;
    BuildRegisterTable(this);
  }
  if ((this->NumInstancesAllocated < this->NumInstances) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("GetNumInstances() <= NumInstancesAllocated",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataSet.cpp"
                         ,800,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (((this->FloatData).ArrayNum < iVar15) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("FloatData.Num() >= NewFloatNum",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataSet.cpp"
                         ,0x321,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (((this->Int32Data).ArrayNum < iVar16) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Int32Data.Num() >= NewInt32Num",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataSet.cpp"
                         ,0x322,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (((this->HalfData).ArrayNum < iVar18) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("HalfData.Num() >= NewHalfNum",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataSet.cpp"
                         ,0x323,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  return;
}

// AllocateGPU @ 14921d710

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FNiagaraDataBuffer::AllocateGPU
          (FNiagaraDataBuffer *this,FRHICommandListBase *param_1,uint param_2,Type param_3,
          wchar_t *param_4)

{
  atomic<__int64> *paVar1;
  FName FVar2;
  FRHIBuffer *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<FStat_STAT_NiagaraGPUParticleMemory> FVar8;
  FThreadStats *pFVar9;
  FThreadStatsPool *pFVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uchar auVar14 [8];
  undefined1 auStackY_218 [32];
  FName local_1b0;
  FName local_1a8;
  FStatMessage local_1a0;
  FStatMessage local_190;
  FName local_180;
  FName local_178 [2];
  TStringBuilderBase<wchar_t> local_168;
  wchar_t local_148 [128];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStackY_218;
  uVar13 = param_2 + 0x3f & 0xffffffc0;
  this->GPUInstanceCountBufferOffset = 0xffffffff;
  this->NumInstancesAllocated = param_2;
  if ((this->Owner->MaxAllocationCount < uVar13) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("PaddedNumInstances <= MaxAllocatedInstances",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataSet.cpp"
                         ,0x34c,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  auVar14 = (uchar  [8])(longlong)this->AllocationSizeBytes;
  this->FloatStride = uVar13 * 4;
  this->Int32Stride = uVar13 * 4;
  this->HalfStride = uVar13 * 2;
  if (auVar14 != (uchar  [8])0x0) {
    FVar8 = StatPtr_STAT_NiagaraGPUParticleMemory;
    if (StatPtr_STAT_NiagaraGPUParticleMemory ==
        (FThreadSafeStaticStat<FStat_STAT_NiagaraGPUParticleMemory>)0x0) {
      pFVar7 = ::FName::FName(&local_180,"STAT_NiagaraGPUParticleMemory");
      FVar8 = (FThreadSafeStaticStat<FStat_STAT_NiagaraGPUParticleMemory>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraGPUParticleMemory,*pFVar7
                         ,L"Niagara GPU particle data memory","STATGROUP_Niagara","STATCAT_Niagara",
                         L"Niagara",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar2 = *(FName *)FVar8;
    local_1b0 = FVar2;
    if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar9 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar9 == (FThreadStats *)0x0) {
        pFVar10 = FThreadStatsPool::Get();
        pFVar9 = FThreadStatsPool::GetFromPool(pFVar10);
      }
      local_1a0.NameAndInfo.Number = FVar2.Number & 0xffffbfff | 0xb000;
      local_1b0 = FVar2;
      local_1a0.StatData.Pad = auVar14;
      local_1a0.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar9,&local_1a0);
      FStatsTrace::Add(&local_1b0,-(longlong)auVar14);
      if (pFVar9->ScopeCount == 0) {
        FThreadStats::Flush(pFVar9,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar9,false,false);
      }
    }
  }
  LOCK();
  paVar1 = &this->Owner->BufferSizeBytes;
  *paVar1 = (atomic<__int64>)((longlong)*paVar1 - (longlong)this->AllocationSizeBytes);
  UNLOCK();
  uVar6 = 0;
  this->AllocationSizeBytes = 0;
  if (uVar13 == 0) {
    if ((this->GPUBufferFloat).Buffer.Reference != (FRHIBuffer *)0x0) {
      FRWBuffer::Release(&this->GPUBufferFloat);
    }
    if ((this->GPUBufferInt).Buffer.Reference != (FRHIBuffer *)0x0) {
      FRWBuffer::Release(&this->GPUBufferInt);
    }
    if ((this->GPUBufferHalf).Buffer.Reference != (FRHIBuffer *)0x0) {
      FRWBuffer::Release(&this->GPUBufferHalf);
    }
    if ((this->GPUIDToIndexTable).Buffer.Reference != (FRHIBuffer *)0x0) {
      FRWBuffer::Release(&this->GPUIDToIndexTable);
    }
  }
  else {
    uVar13 = (this->GPUBufferFloat).NumBytes;
    uVar12 = GNiagaraGPUDataBufferChunkSize + -1 +
             ((this->Owner->CompiledData).StructPtr)->TotalFloatComponents * this->FloatStride &
             -GNiagaraGPUDataBufferChunkSize;
    if (((int)uVar13 < (int)uVar12) ||
       ((int)(GNiagaraGPUDataBufferShrinkFactor * uVar12) < (int)uVar13)) {
      if ((this->GPUBufferFloat).Buffer.Reference != (FRHIBuffer *)0x0) {
        FRWBuffer::Release(&this->GPUBufferFloat);
      }
      if (((0 < GNiagaraGPUDataWarningSize) && (GNiagaraGPUDataWarningSize < (int)uVar12)) &&
         ((MaxEncountered < (int)uVar12 && (MaxEncountered = uVar12, 2 < (byte)LogNiagara._0_1_))))
      {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
      }
      FRWBuffer::Initialize
                (&this->GPUBufferFloat,param_1,L"GPUBufferFloat",4,
                 (uint)((ulonglong)(longlong)(int)uVar12 >> 2),PF_R32_FLOAT,SRVMask,
                 SourceCopy|Static,(FResourceArrayUploadInterface *)0x0);
    }
    uVar13 = (this->GPUBufferHalf).NumBytes;
    uVar12 = ((this->Owner->CompiledData).StructPtr)->TotalHalfComponents * this->HalfStride + -1 +
             GNiagaraGPUDataBufferChunkSize & -GNiagaraGPUDataBufferChunkSize;
    if (((int)uVar13 < (int)uVar12) ||
       ((int)(GNiagaraGPUDataBufferShrinkFactor * uVar12) < (int)uVar13)) {
      if ((this->GPUBufferHalf).Buffer.Reference != (FRHIBuffer *)0x0) {
        FRWBuffer::Release(&this->GPUBufferHalf);
      }
      if ((((0 < GNiagaraGPUDataWarningSize) && (GNiagaraGPUDataWarningSize < (int)uVar12)) &&
          (MaxEncountered < (int)uVar12)) && (MaxEncountered = uVar12, 2 < (byte)LogNiagara._0_1_))
      {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
      }
      FRWBuffer::Initialize
                (&this->GPUBufferHalf,param_1,L"GPUBufferHalf",2,
                 (uint)((ulonglong)(longlong)(int)uVar12 >> 1),PF_R16F,SRVMask,SourceCopy|Static,
                 (FResourceArrayUploadInterface *)0x0);
    }
    uVar13 = (this->GPUBufferInt).NumBytes;
    uVar12 = ((this->Owner->CompiledData).StructPtr)->TotalInt32Components * this->Int32Stride + -1
             + GNiagaraGPUDataBufferChunkSize & -GNiagaraGPUDataBufferChunkSize;
    if (((int)uVar13 < (int)uVar12) ||
       ((int)(GNiagaraGPUDataBufferShrinkFactor * uVar12) < (int)uVar13)) {
      if ((this->GPUBufferInt).Buffer.Reference != (FRHIBuffer *)0x0) {
        FRWBuffer::Release(&this->GPUBufferInt);
      }
      if (((0 < GNiagaraGPUDataWarningSize) && (GNiagaraGPUDataWarningSize < (int)uVar12)) &&
         ((MaxEncountered < (int)uVar12 && (MaxEncountered = uVar12, 2 < (byte)LogNiagara._0_1_))))
      {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
      }
      FRWBuffer::Initialize
                (&this->GPUBufferInt,param_1,L"GPUBufferInt",4,
                 (uint)((ulonglong)(longlong)(int)uVar12 >> 2),PF_R32_SINT,SRVMask,SourceCopy|Static
                 ,(FResourceArrayUploadInterface *)0x0);
    }
    if (((this->Owner->CompiledData).StructPtr)->bRequiresPersistentIDs != 0) {
      pFVar3 = (this->GPUIDToIndexTable).Buffer.Reference;
      if (pFVar3 != (FRHIBuffer *)0x0) {
        uVar6 = (pFVar3->Desc).Size >> 2;
      }
      uVar13 = this->Owner->GPUNumAllocatedIDs;
      if (uVar6 < uVar13) {
        if (pFVar3 != (FRHIBuffer *)0x0) {
          FRWBuffer::Release(&this->GPUIDToIndexTable);
        }
        iVar11 = uVar13 * 4;
        if ((((0 < GNiagaraGPUDataWarningSize) && (GNiagaraGPUDataWarningSize < iVar11)) &&
            (MaxEncountered < iVar11)) && (MaxEncountered = iVar11, 2 < (byte)LogNiagara._0_1_)) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
        }
        local_168.Base = local_148;
        local_168.bIsDynamic = false;
        local_168.bIsExternal = false;
        local_168.CurPos = local_148;
        local_168.End = (wchar_t *)local_48;
        TStringBuilderBase<wchar_t>::AppendfImpl(&local_168,L"NiagaraIDToIndexTable_%s_%p");
        if (local_168.End < local_168.CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(&local_168,1);
        }
        *local_168.CurPos = L'\0';
        FRWBuffer::Initialize
                  (&this->GPUIDToIndexTable,param_1,local_168.Base,4,uVar13,PF_R32_SINT,SRVCompute,
                   SourceCopy|Static,(FResourceArrayUploadInterface *)0x0);
        TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_168);
      }
    }
  }
  iVar11 = (this->GPUBufferHalf).NumBytes + (this->GPUIDToIndexTable).NumBytes +
           (this->GPUBufferInt).NumBytes + (this->GPUBufferFloat).NumBytes;
  this->AllocationSizeBytes = iVar11;
  LOCK();
  paVar1 = &this->Owner->BufferSizeBytes;
  *paVar1 = (atomic<__int64>)((longlong)*paVar1 + (longlong)iVar11);
  UNLOCK();
  auVar14 = (uchar  [8])(longlong)this->AllocationSizeBytes;
  if (auVar14 != (uchar  [8])0x0) {
    FVar8 = StatPtr_STAT_NiagaraGPUParticleMemory;
    if (StatPtr_STAT_NiagaraGPUParticleMemory ==
        (FThreadSafeStaticStat<FStat_STAT_NiagaraGPUParticleMemory>)0x0) {
      pFVar7 = ::FName::FName(local_178,"STAT_NiagaraGPUParticleMemory");
      FVar8 = (FThreadSafeStaticStat<FStat_STAT_NiagaraGPUParticleMemory>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraGPUParticleMemory,*pFVar7
                         ,L"Niagara GPU particle data memory","STATGROUP_Niagara","STATCAT_Niagara",
                         L"Niagara",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar2 = *(FName *)FVar8;
    if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar9 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar9 == (FThreadStats *)0x0) {
        pFVar10 = FThreadStatsPool::Get();
        pFVar9 = FThreadStatsPool::GetFromPool(pFVar10);
      }
      local_190.NameAndInfo.Number = FVar2.Number & 0xffffafff | 0xa000;
      local_1a8 = FVar2;
      local_190.StatData.Pad = auVar14;
      local_190.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar9,&local_190);
      FStatsTrace::Add(&local_1a8,(long64)auVar14);
      if (pFVar9->ScopeCount == 0) {
        FThreadStats::Flush(pFVar9,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar9,false,false);
      }
    }
  }
  return;
}

// BuildRegisterTable @ 14921fe70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FNiagaraDataBuffer::BuildRegisterTable(FNiagaraDataBuffer *this)

{
  int *piVar1;
  TArray<unsigned_char_*,TSizedDefaultAllocator<32>_> *pTVar2;
  ushort uVar3;
  ushort uVar4;
  code *pcVar5;
  bool bVar6;
  ulonglong uVar7;
  int *piVar8;
  uint uVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  uint uVar13;
  FNiagaraDataSetCompiledData *pFVar14;
  FScriptContainerElement *pFVar15;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_78 [4];
  uint local_74;
  uint local_70;
  int *local_68;
  FNiagaraDataSetCompiledData *local_60;
  FNiagaraDataSetCompiledData *local_58;
  
  pTVar2 = &this->RegisterTable;
  piVar8 = &(this->RegisterTable).ArrayNum;
  piVar1 = &(this->RegisterTable).ArrayMax;
  pFVar14 = (this->Owner->CompiledData).StructPtr;
  uVar9 = pFVar14->TotalHalfComponents + pFVar14->TotalInt32Components +
          pFVar14->TotalFloatComponents;
  *piVar8 = 0;
  local_68 = piVar8;
  if (*piVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&pTVar2->AllocatorInstance,0,piVar1);
  }
  iVar10 = *piVar8;
  if (iVar10 < (int)uVar9) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar9 - iVar10,&pTVar2->AllocatorInstance,piVar8,piVar1);
  }
  else {
    if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
    }
    if ((int)uVar9 < iVar10) {
      uVar12 = iVar10 - uVar9;
      if (((int)(uVar12 | uVar9) < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (uVar12 != 0) {
        pFVar15 = (pTVar2->AllocatorInstance).Data + (longlong)(int)uVar9 * 8;
        iVar10 = (*piVar8 - uVar12) - uVar9;
        if (iVar10 != 0) {
          memmove(pFVar15,pFVar15 + (longlong)(int)uVar12 * 8,(longlong)iVar10 << 3);
        }
        *piVar8 = *piVar8 - uVar12;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&pTVar2->AllocatorInstance,*piVar8,piVar1);
      }
    }
  }
  this->RegisterTypeOffsets[0] = 0;
  this->RegisterTypeOffsets[1] = 0;
  uVar9 = 0;
  this->RegisterTypeOffsets[2] = 0;
  local_58 = (this->Owner->CompiledData).StructPtr;
  local_70 = (local_58->VariableLayouts).ArrayNum;
  uVar7 = (ulonglong)(int)local_70;
  pFVar15 = (local_58->VariableLayouts).AllocatorInstance.Data;
  pFVar14 = (FNiagaraDataSetCompiledData *)(pFVar15 + uVar7 * 0x20);
  local_60 = pFVar14;
  do {
    local_74 = uVar9;
    if ((local_58->VariableLayouts).ArrayNum != (int)uVar7) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FNiagaraVariableLayoutInfo_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    piVar8 = local_68;
    if ((FNiagaraDataSetCompiledData *)pFVar15 == pFVar14) {
      this->RegisterTypeOffsets[1] = uVar9;
      local_60 = (this->Owner->CompiledData).StructPtr;
      local_70 = (local_60->VariableLayouts).ArrayNum;
      uVar7 = (ulonglong)(int)local_70;
      pFVar15 = (local_60->VariableLayouts).AllocatorInstance.Data;
      pFVar14 = (FNiagaraDataSetCompiledData *)(pFVar15 + uVar7 * 0x20);
      local_58 = pFVar14;
      do {
        if ((local_60->VariableLayouts).ArrayNum != (int)uVar7) {
          local_res18[0] = 0;
          `TCheckedPointerIterator<FNiagaraVariableLayoutInfo_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res18);
        }
        piVar8 = local_68;
        if ((FNiagaraDataSetCompiledData *)pFVar15 == pFVar14) {
          this->RegisterTypeOffsets[2] = uVar9;
          local_60 = (this->Owner->CompiledData).StructPtr;
          local_70 = (local_60->VariableLayouts).ArrayNum;
          uVar7 = (ulonglong)(int)local_70;
          pFVar15 = (local_60->VariableLayouts).AllocatorInstance.Data;
          pFVar14 = (FNiagaraDataSetCompiledData *)(pFVar15 + uVar7 * 0x20);
          local_58 = pFVar14;
          do {
            if ((local_60->VariableLayouts).ArrayNum != (int)uVar7) {
              local_res20[0] = 0;
              `TCheckedPointerIterator<FNiagaraVariableLayoutInfo_const_,int,0>::operator!='::__l2::
              <lambda_1>::operator()(local_res20);
            }
            piVar8 = local_68;
            if ((FNiagaraDataSetCompiledData *)pFVar15 == pFVar14) {
              iVar10 = (this->RegisterTable).ArrayNum;
              pFVar11 = (this->RegisterTable).AllocatorInstance.Data;
              pFVar15 = pFVar11 + (longlong)iVar10 * 8;
              piVar8 = &(this->RegisterTable).ArrayNum;
              while( true ) {
                if (*piVar8 != iVar10) {
                  local_78[0] = 0;
                  `TCheckedPointerIterator<unsigned_char_*,int,0>::operator!='::__l2::<lambda_1>::
                  operator()(local_78);
                }
                if (pFVar11 == pFVar15) break;
                if ((*(longlong *)pFVar11 == 0) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Register",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataSet.cpp"
                                       ,0x732,L""), bVar6)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                pFVar11 = pFVar11 + 8;
                piVar8 = local_68;
              }
              return;
            }
            uVar3 = *(ushort *)(pFVar15 + 0xc);
            iVar10 = 0;
            if (uVar3 != 0) {
              do {
                uVar4 = *(ushort *)(pFVar15 + 4);
                uVar12 = (uint)*(ushort *)(pFVar15 + 0xc) + iVar10 +
                         ((uint)*(ushort *)(pFVar15 + 10) + (uint)*(ushort *)(pFVar15 + 8)) * 2;
                uVar13 = 0;
                if ((int)uVar12 < *(int *)(pFVar15 + 0x18)) {
                  uVar13 = ~uVar12 >> 0x1f;
                }
                if ((uVar13 == 0) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar6)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                uVar13 = this->HalfStride;
                pFVar11 = (this->HalfData).AllocatorInstance.Data;
                uVar9 = *(int *)(*(longlong *)(pFVar15 + 0x10) + (longlong)(int)uVar12 * 4) + uVar9;
                uVar12 = 0;
                if ((int)uVar9 < *piVar8) {
                  uVar12 = ~uVar9 >> 0x1f;
                }
                if ((uVar12 == 0) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar6)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                *(FScriptContainerElement **)
                 ((this->RegisterTable).AllocatorInstance.Data + (longlong)(int)uVar9 * 8) =
                     pFVar11 + ((uint)uVar4 + iVar10) * uVar13;
                uVar12 = 0;
                if ((int)uVar9 < *piVar8) {
                  uVar12 = ~uVar9 >> 0x1f;
                }
                if ((uVar12 == 0) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar6)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                if ((*(longlong *)
                      ((this->RegisterTable).AllocatorInstance.Data + (longlong)(int)uVar9 * 8) == 0
                    ) && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                            ("RegisterTable[NumRegisters + CompRegisterOffset]",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataSet.cpp"
                                             ,0x72b,L""), bVar6)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                iVar10 = iVar10 + 1;
                pFVar14 = local_58;
                uVar9 = local_74;
              } while (iVar10 < (int)(uint)uVar3);
            }
            uVar9 = uVar9 + uVar3;
            uVar7 = (ulonglong)local_70;
            pFVar15 = pFVar15 + 0x20;
            local_74 = uVar9;
          } while( true );
        }
        uVar3 = *(ushort *)(pFVar15 + 10);
        iVar10 = 0;
        if (uVar3 != 0) {
          do {
            uVar4 = *(ushort *)(pFVar15 + 2);
            uVar12 = (uint)*(ushort *)(pFVar15 + 10) + iVar10 + (uint)*(ushort *)(pFVar15 + 8) * 2;
            uVar13 = 0;
            if ((int)uVar12 < *(int *)(pFVar15 + 0x18)) {
              uVar13 = ~uVar12 >> 0x1f;
            }
            if ((uVar13 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            uVar13 = this->Int32Stride;
            pFVar11 = (this->Int32Data).AllocatorInstance.Data;
            uVar9 = *(int *)(*(longlong *)(pFVar15 + 0x10) + (longlong)(int)uVar12 * 4) + uVar9;
            uVar12 = 0;
            if ((int)uVar9 < *piVar8) {
              uVar12 = ~uVar9 >> 0x1f;
            }
            if ((uVar12 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            *(FScriptContainerElement **)
             ((this->RegisterTable).AllocatorInstance.Data + (longlong)(int)uVar9 * 8) =
                 pFVar11 + ((uint)uVar4 + iVar10) * uVar13;
            uVar12 = 0;
            if ((int)uVar9 < *piVar8) {
              uVar12 = ~uVar9 >> 0x1f;
            }
            if ((uVar12 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            if ((*(longlong *)
                  ((this->RegisterTable).AllocatorInstance.Data + (longlong)(int)uVar9 * 8) == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("RegisterTable[NumRegisters + CompRegisterOffset]",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataSet.cpp"
                                   ,0x71d,L""), bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            iVar10 = iVar10 + 1;
            pFVar14 = local_58;
            uVar9 = local_74;
          } while (iVar10 < (int)(uint)uVar3);
        }
        uVar9 = uVar9 + uVar3;
        uVar7 = (ulonglong)local_70;
        pFVar15 = pFVar15 + 0x20;
        local_74 = uVar9;
      } while( true );
    }
    uVar3 = *(ushort *)(pFVar15 + 8);
    iVar10 = 0;
    if (uVar3 != 0) {
      do {
        uVar4 = *(ushort *)pFVar15;
        uVar13 = (uint)*(ushort *)(pFVar15 + 8) + iVar10;
        uVar12 = 0;
        if ((int)uVar13 < *(int *)(pFVar15 + 0x18)) {
          uVar12 = ~uVar13 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar12 = this->FloatStride;
        pFVar11 = (this->FloatData).AllocatorInstance.Data;
        uVar9 = *(int *)(*(longlong *)(pFVar15 + 0x10) + (longlong)(int)uVar13 * 4) + uVar9;
        uVar13 = 0;
        if ((int)uVar9 < *piVar8) {
          uVar13 = ~uVar9 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        *(FScriptContainerElement **)
         ((this->RegisterTable).AllocatorInstance.Data + (longlong)(int)uVar9 * 8) =
             pFVar11 + ((uint)uVar4 + iVar10) * uVar12;
        uVar12 = 0;
        if ((int)uVar9 < *piVar8) {
          uVar12 = ~uVar9 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if ((*(longlong *)((this->RegisterTable).AllocatorInstance.Data + (longlong)(int)uVar9 * 8)
             == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("RegisterTable[NumRegisters + CompRegisterOffset]",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataSet.cpp"
                               ,0x70f,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar10 = iVar10 + 1;
        pFVar14 = local_60;
        uVar9 = local_74;
      } while (iVar10 < (int)(uint)uVar3);
    }
    uVar9 = uVar9 + uVar3;
    uVar7 = (ulonglong)local_70;
    pFVar15 = pFVar15 + 0x20;
  } while( true );
}

// CheckForNaNs @ 149221be0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FNiagaraDataBuffer::CheckForNaNs(FNiagaraDataBuffer *this)

{
  uint uVar1;
  double _X;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  bool bVar6;
  
  bVar6 = false;
  iVar5 = 0;
  uVar1 = ((this->Owner->CompiledData).StructPtr)->TotalFloatComponents;
  if ((int)uVar1 < 1) {
    return false;
  }
  do {
    if (bVar6 != false) {
      return bVar6;
    }
    uVar4 = 0;
    if (0 < (int)this->NumInstances) {
      do {
        if (bVar6 != false) break;
        _X = (double)*(float *)((this->FloatData).AllocatorInstance.Data +
                               (ulonglong)(iVar5 * this->FloatStride) + uVar4 * 4);
        iVar2 = _isnan(_X);
        if ((iVar2 == 0) && (iVar2 = _finite(_X), iVar2 != 0)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        uVar3 = (int)uVar4 + 1;
        uVar4 = (ulonglong)uVar3;
      } while ((int)uVar3 < (int)this->NumInstances);
    }
    iVar5 = iVar5 + 1;
    if ((int)uVar1 <= iVar5) {
      return bVar6;
    }
  } while( true );
}

// CopyTo @ 149222770

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FNiagaraDataBuffer::CopyTo
          (FNiagaraDataBuffer *this,FNiagaraDataBuffer *param_1,int param_2,int param_3,int param_4)

{
  ulonglong uVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *_Src;
  uint uVar4;
  uint uVar5;
  
  if (-1 < param_2) {
    uVar1 = (ulonglong)(uint)param_2;
    if ((uint)param_2 < this->NumInstances) {
      if (param_4 == -1) {
        param_4 = this->NumInstances - param_2;
      }
      if (param_4 != 0) {
        uVar4 = param_4 + param_3;
        if ((param_3 < 0) || (param_1->NumInstancesAllocated <= uVar4)) {
          Allocate(param_1,uVar4,true);
        }
        SetNumInstances(param_1,uVar4);
        uVar5 = 0;
        uVar4 = ((this->Owner->CompiledData).StructPtr)->TotalFloatComponents;
        if (uVar4 != 0) {
          do {
            uVar2 = uVar5 * this->FloatStride;
            pFVar3 = (this->FloatData).AllocatorInstance.Data + (ulonglong)uVar2 + uVar1 * 4;
            memcpy((param_1->FloatData).AllocatorInstance.Data +
                   (ulonglong)(uVar5 * param_1->FloatStride) + (ulonglong)(uint)param_3 * 4,pFVar3,
                   (ulonglong)
                   ((this->FloatData).AllocatorInstance.Data +
                   (ulonglong)(uint)(param_4 + param_2) * 4 + ((ulonglong)uVar2 - (longlong)pFVar3))
                   & 0xfffffffffffffffc);
            uVar5 = uVar5 + 1;
          } while (uVar5 < uVar4);
        }
        uVar5 = 0;
        uVar4 = ((this->Owner->CompiledData).StructPtr)->TotalInt32Components;
        if (uVar4 != 0) {
          do {
            pFVar3 = (this->Int32Data).AllocatorInstance.Data;
            uVar2 = uVar5 * this->Int32Stride;
            _Src = pFVar3 + uVar1 * 4 + (ulonglong)uVar2;
            memcpy((param_1->Int32Data).AllocatorInstance.Data +
                   (ulonglong)(uint)param_3 * 4 + (ulonglong)(uVar5 * param_1->Int32Stride),_Src,
                   (ulonglong)
                   (pFVar3 + ((ulonglong)(uint)(param_4 + param_2) * 4 - (longlong)_Src) +
                             (ulonglong)uVar2) & 0xfffffffffffffffc);
            uVar5 = uVar5 + 1;
          } while (uVar5 < uVar4);
        }
        uVar5 = 0;
        uVar4 = ((this->Owner->CompiledData).StructPtr)->TotalHalfComponents;
        if (uVar4 != 0) {
          do {
            uVar2 = uVar5 * this->HalfStride;
            pFVar3 = (this->HalfData).AllocatorInstance.Data + uVar1 * 2 + (ulonglong)uVar2;
            memcpy((param_1->HalfData).AllocatorInstance.Data +
                   (ulonglong)(uVar5 * param_1->HalfStride) + (ulonglong)(uint)param_3 * 2,pFVar3,
                   ((longlong)
                    ((this->HalfData).AllocatorInstance.Data +
                    ((ulonglong)(uint)(param_2 + param_4) * 2 - (longlong)pFVar3) + (ulonglong)uVar2
                    ) >> 1) * 2);
            uVar5 = uVar5 + 1;
          } while (uVar5 < uVar4);
        }
      }
    }
  }
  return;
}

// CopyToUnrelated @ 149223ad0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FNiagaraDataBuffer::CopyToUnrelated
          (FNiagaraDataBuffer *this,FNiagaraDataBuffer *param_1,int param_2,int param_3,int param_4)

{
  ushort uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FNiagaraDataSetCompiledData *pFVar6;
  FNiagaraDataSetCompiledData *pFVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  longlong lVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  uint local_68;
  longlong local_58;
  longlong local_50;
  
  if ((-1 < param_2) && ((uint)param_2 < this->NumInstances)) {
    if (param_4 == -1) {
      param_4 = this->NumInstances - param_2;
    }
    if (param_4 != 0) {
      uVar12 = param_3 + param_4;
      if ((param_3 < 0) || (param_1->NumInstancesAllocated < uVar12)) {
        Allocate(param_1,uVar12,true);
      }
      SetNumInstances(param_1,uVar12);
      pFVar6 = FNiagaraDataSet::GetCompiledData(param_1->Owner);
      pFVar7 = FNiagaraDataSet::GetCompiledData(this->Owner);
      iVar8 = (pFVar6->Variables).ArrayNum;
      local_68 = 0;
      if (0 < iVar8) {
        local_50 = 0;
        local_58 = 0;
        do {
          uVar12 = 0;
          if ((int)local_68 < iVar8) {
            uVar12 = ~local_68 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar13 = (pFVar6->Variables).AllocatorInstance.Data + local_50;
          uVar12 = 0;
          if ((int)local_68 < (pFVar6->VariableLayouts).ArrayNum) {
            uVar12 = ~local_68 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar2 = (pFVar7->Variables).AllocatorInstance.Data;
          pFVar11 = (pFVar6->VariableLayouts).AllocatorInstance.Data + local_58;
          if (pFVar2 != pFVar2 + (longlong)(pFVar7->Variables).ArrayNum * 0xc) {
            pFVar9 = pFVar2;
LAB_149223c73:
            if ((*(longlong *)pFVar9 != *(longlong *)pFVar13) ||
               (*(int *)(pFVar9 + 8) != *(int *)(pFVar13 + 8))) goto LAB_149223c85;
            lVar10 = ((longlong)pFVar9 - (longlong)pFVar2) / 6 +
                     ((longlong)pFVar9 - (longlong)pFVar2 >> 0x3f);
            uVar12 = (int)(lVar10 >> 1) - (int)(lVar10 >> 0x3f);
            if (uVar12 != 0xffffffff) {
              uVar5 = 0;
              if ((int)uVar12 < (pFVar7->VariableLayouts).ArrayNum) {
                uVar5 = ~uVar12 >> 0x1f;
              }
              if ((uVar5 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              pFVar13 = (pFVar7->VariableLayouts).AllocatorInstance.Data +
                        (longlong)(int)uVar12 * 0x20;
              uVar1 = *(ushort *)(pFVar13 + 8);
              if ((uVar1 != *(ushort *)(pFVar11 + 8)) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("FloatComponents == DestVarLayout.GetNumFloatComponents()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataSet.cpp"
                                     ,0x44f,L""), bVar4)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              uVar12 = 0;
              if (uVar1 != 0) {
                do {
                  pFVar2 = (this->FloatData).AllocatorInstance.Data;
                  uVar5 = (*(ushort *)pFVar13 + uVar12) * this->FloatStride;
                  pFVar9 = pFVar2 + (ulonglong)uVar5 + (ulonglong)(uint)param_2 * 4;
                  memcpy((param_1->FloatData).AllocatorInstance.Data +
                         (ulonglong)((*(ushort *)pFVar11 + uVar12) * param_1->FloatStride) +
                         (ulonglong)(uint)param_3 * 4,pFVar9,
                         (ulonglong)
                         (pFVar2 + (ulonglong)(uint)(param_2 + param_4) * 4 +
                                   ((ulonglong)uVar5 - (longlong)pFVar9)) & 0xfffffffffffffffc);
                  uVar12 = uVar12 + 1;
                } while (uVar12 < uVar1);
              }
              uVar1 = *(ushort *)(pFVar13 + 10);
              if ((uVar1 != *(ushort *)(pFVar11 + 10)) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IntComponents == DestVarLayout.GetNumInt32Components()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataSet.cpp"
                                     ,0x463,L""), bVar4)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              uVar12 = 0;
              if (uVar1 != 0) {
                do {
                  pFVar2 = (this->Int32Data).AllocatorInstance.Data;
                  uVar5 = (*(ushort *)(pFVar13 + 2) + uVar12) * this->Int32Stride;
                  pFVar9 = pFVar2 + (ulonglong)(uint)param_2 * 4 + (ulonglong)uVar5;
                  memcpy((param_1->Int32Data).AllocatorInstance.Data +
                         (ulonglong)((*(ushort *)(pFVar11 + 2) + uVar12) * param_1->Int32Stride) +
                         (ulonglong)(uint)param_3 * 4,pFVar9,
                         (ulonglong)
                         (pFVar2 + ((ulonglong)(uint)(param_4 + param_2) * 4 - (longlong)pFVar9) +
                                   (ulonglong)uVar5) & 0xfffffffffffffffc);
                  uVar12 = uVar12 + 1;
                } while (uVar12 < uVar1);
              }
              uVar1 = *(ushort *)(pFVar13 + 0xc);
              if ((uVar1 != *(ushort *)(pFVar11 + 0xc)) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("HalfComponents == DestVarLayout.GetNumHalfComponents()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataSet.cpp"
                                     ,0x477,L""), bVar4)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              uVar12 = 0;
              if (uVar1 != 0) {
                do {
                  pFVar2 = (this->HalfData).AllocatorInstance.Data;
                  uVar5 = (*(ushort *)(pFVar13 + 4) + uVar12) * this->HalfStride;
                  pFVar9 = pFVar2 + (ulonglong)uVar5 + (ulonglong)(uint)param_2 * 2;
                  memcpy((param_1->HalfData).AllocatorInstance.Data +
                         (ulonglong)(uint)param_3 * 2 +
                         (ulonglong)((*(ushort *)(pFVar11 + 4) + uVar12) * param_1->HalfStride),
                         pFVar9,((longlong)
                                 (pFVar2 + ((ulonglong)(uint)(param_4 + param_2) * 2 -
                                           (longlong)pFVar9) + (ulonglong)uVar5) >> 1) * 2);
                  uVar12 = uVar12 + 1;
                } while (uVar12 < uVar1);
              }
              goto LAB_149224024;
            }
          }
LAB_149223c8e:
          uVar1 = *(ushort *)(pFVar11 + 8);
          uVar12 = 0;
          if (uVar1 != 0) {
            do {
              memset((param_1->FloatData).AllocatorInstance.Data +
                     (ulonglong)((*(ushort *)pFVar11 + uVar12) * param_1->FloatStride) +
                     (ulonglong)(uint)param_3 * 4,0,(ulonglong)(uint)param_4 << 2);
              uVar12 = uVar12 + 1;
            } while (uVar12 < uVar1);
          }
          uVar1 = *(ushort *)(pFVar11 + 10);
          uVar12 = 0;
          if (uVar1 != 0) {
            do {
              memset((param_1->Int32Data).AllocatorInstance.Data +
                     (ulonglong)((*(ushort *)(pFVar11 + 2) + uVar12) * param_1->Int32Stride) +
                     (ulonglong)(uint)param_3 * 4,0,(ulonglong)(uint)param_4 << 2);
              uVar12 = uVar12 + 1;
            } while (uVar12 < uVar1);
          }
          uVar1 = *(ushort *)(pFVar11 + 0xc);
          uVar12 = 0;
          if (uVar1 != 0) {
            do {
              memset((param_1->HalfData).AllocatorInstance.Data +
                     (ulonglong)(uint)param_3 * 2 +
                     (ulonglong)((*(ushort *)(pFVar11 + 4) + uVar12) * param_1->HalfStride),0,
                     (ulonglong)(uint)param_4 * 2);
              uVar12 = uVar12 + 1;
            } while (uVar12 < uVar1);
          }
LAB_149224024:
          local_68 = local_68 + 1;
          local_50 = local_50 + 0xc;
          local_58 = local_58 + 0x20;
          iVar8 = (pFVar6->Variables).ArrayNum;
        } while ((int)local_68 < iVar8);
      }
    }
  }
  return;
LAB_149223c85:
  pFVar9 = pFVar9 + 0xc;
  if (pFVar9 == pFVar2 + (longlong)(pFVar7->Variables).ArrayNum * 0xc) goto LAB_149223c8e;
  goto LAB_149223c73;
}

// Dump @ 14922c4d0

/* WARNING: Removing unreachable block (ram,0x00014922cb16) */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FNiagaraDataBuffer::Dump
          (FNiagaraDataBuffer *this,int param_1,int param_2,FString *param_3,FName *param_4)

{
  FScriptContainerElement *pFVar1;
  TTuple<float,FString> *pTVar2;
  FNiagaraDataSetCompiledData *pFVar3;
  uchar *puVar4;
  code *pcVar5;
  undefined8 uVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  FString *pFVar11;
  FNiagaraTypeDefinition *pFVar12;
  ulonglong uVar13;
  longlong lVar14;
  FScriptContainerElement *pFVar15;
  ForAnyElementType FVar16;
  uint uVar17;
  int iVar18;
  FNiagaraVariable *pFVar19;
  float fVar20;
  FIdentityFunctor local_res10 [8];
  int local_res18;
  FString *local_res20;
  undefined1 local_128;
  undefined1 local_127 [7];
  ForAnyElementType local_120;
  undefined8 local_118;
  undefined1 local_110 [8];
  FNiagaraDataVariableIterator local_108;
  int local_e8;
  undefined1 local_e0 [8];
  ForAnyElementType local_d8;
  undefined8 local_d0;
  float local_c8;
  int local_c4;
  FString local_c0;
  FString local_b0;
  FString local_a0;
  FString local_90;
  FString local_80 [4];
  
  bVar8 = false;
  local_108.Variables.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.Variables.ArrayNum = 0;
  local_108.Variables.ArrayMax = 0;
  pFVar3 = (this->Owner->CompiledData).StructPtr;
  iVar9 = (pFVar3->Variables).ArrayNum;
  pFVar15 = (pFVar3->Variables).AllocatorInstance.Data;
  local_res18 = param_2;
  local_res20 = param_3;
  local_108.Data = this;
  local_108.CurrIdx = param_1;
  if ((iVar9 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar17 = local_108.Variables.ArrayNum + iVar9;
  if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar17);
  }
  if (local_108.Variables.ArrayMax < (int)uVar17) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,uVar17,&local_108.Variables.AllocatorInstance,local_108.Variables.ArrayNum,
               &local_108.Variables.ArrayMax);
  }
  pFVar1 = pFVar15 + (longlong)iVar9 * 0xc;
  for (; pFVar15 != pFVar1; pFVar15 = pFVar15 + 0xc) {
    if (local_108.Variables.ArrayNum == local_108.Variables.ArrayMax) {
      local_108.Variables.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x820,&local_108.Variables.AllocatorInstance,&local_108.Variables.ArrayMax);
    }
    lVar14 = (longlong)local_108.Variables.ArrayNum * 0x20;
    *(undefined8 *)&local_108.Variables.AllocatorInstance.Data[lVar14].field_0x0 =
         *(undefined8 *)pFVar15;
    *(undefined4 *)(local_108.Variables.AllocatorInstance.Data + lVar14 + 8) =
         *(undefined4 *)(pFVar15 + 8);
    *(undefined8 *)(local_108.Variables.AllocatorInstance.Data + lVar14 + 0x10) = 0;
    *(undefined8 *)(local_108.Variables.AllocatorInstance.Data + lVar14 + 0x18) = 0;
    local_108.Variables.ArrayNum = local_108.Variables.ArrayNum + 1;
  }
  if (param_2 == -1) {
    param_2 = this->NumInstances - param_1;
    local_res18 = param_2;
  }
  uVar17 = this->NumInstances;
  iVar9 = 0;
  local_e8 = 0;
  local_120.Data = (FScriptContainerElement *)0x0;
  local_118 = 0;
  if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar17);
  }
  FVar16.Data = local_d8.Data;
  uVar6 = local_d0;
  if (0 < (int)uVar17) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,uVar17,&local_120,0,(int *)((longlong)&local_118 + 4));
    FVar16.Data = local_d8.Data;
    uVar6 = local_d0;
  }
  do {
    local_d0 = uVar6;
    local_d8.Data = FVar16.Data;
    if (((local_108.Data == (FNiagaraDataBuffer *)0x0) ||
        ((local_108.Data)->NumInstances <= local_108.CurrIdx)) || (param_2 <= iVar9)) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
        atexit(`FNiagaraDataBuffer::Dump'::__l2::_dynamic_atexit_destructor_for__Sep__);
        _Init_thread_footer(&::_TSS1);
      }
      iVar9 = Sep.Data.ArrayNum + -1;
      if (Sep.Data.ArrayNum == 0) {
        iVar9 = 0;
      }
      if (iVar9 == 0) {
        lVar14 = 0x32;
        do {
          ::FString::AppendChar(&Sep,L'=');
          lVar14 = lVar14 + -1;
        } while (lVar14 != 0);
      }
      if (bVar8) {
        AlgoImpl::
        StableSortInternal<TTuple<float,FString>,FIdentityFunctor,TDereferenceWrapper<TTuple<float,FString>,_FNiagaraDataBuffer::Dump_::__l29::<lambda_1>_>_>
                  ((TTuple<float,FString> *)local_120.Data,(int)local_118,local_res10[0],
                   (<lambda_1> *)local_110);
      }
      if (((4 < (byte)LogNiagara._0_1_) &&
          (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara),
          4 < (byte)LogNiagara._0_1_)) &&
         (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara),
         4 < (byte)LogNiagara._0_1_)) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
      }
      iVar9 = (int)local_118;
      if (bVar8) {
        pTVar2 = (TTuple<float,FString> *)(local_120.Data + (longlong)(int)local_118 * 0x18);
        FVar16.Data = local_120.Data;
        while( true ) {
          if ((int)local_118 != iVar9) {
            local_128 = 0;
            `TCheckedPointerIterator<TTuple<float,FString>,int,0>::operator!='::__l2::<lambda_1>::
            operator()(&local_128);
          }
          if ((TTuple<float,FString> *)FVar16.Data == pTVar2) break;
          if (4 < (byte)LogNiagara._0_1_) {
            UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
          }
          FVar16.Data = FVar16.Data + 0x18;
        }
      }
      else {
        pTVar2 = (TTuple<float,FString> *)(local_120.Data + (longlong)(int)local_118 * 0x18);
        pFVar15 = local_120.Data + 8;
        while( true ) {
          if ((int)local_118 != iVar9) {
            local_127[0] = 0;
            `TCheckedPointerIterator<TTuple<float,FString>,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_127);
          }
          if ((TTuple<float,FString> *)(pFVar15 + -8) == pTVar2) break;
          if (4 < (byte)LogNiagara._0_1_) {
            UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
          }
          pFVar15 = pFVar15 + 0x18;
        }
      }
      if (0 < (this->IDToIndexTable).ArrayNum) {
        if (4 < (byte)LogNiagara._0_1_) {
          UE::Logging::Private::BasicLog<5>
                    ((FStaticBasicLogRecord *)&PTR_u____ID_Table____151db4b80,
                     (FLogCategoryBase *)&LogNiagara);
        }
        uVar17 = 0;
        if (0 < (this->IDToIndexTable).ArrayNum) {
          do {
            if (4 < (byte)LogNiagara._0_1_) {
              uVar10 = 0;
              if ((int)uVar17 < (this->IDToIndexTable).ArrayNum) {
                uVar10 = ~uVar17 >> 0x1f;
              }
              if ((uVar10 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
            }
            uVar17 = uVar17 + 1;
          } while ((int)uVar17 < (this->IDToIndexTable).ArrayNum);
        }
      }
      if (4 < (byte)LogNiagara._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
      }
      DestructItems<TTuple<float,FString>,int>
                ((TTuple<float,FString> *)local_120.Data,(int)local_118);
      if ((TTuple<float,FString> *)local_120.Data != (TTuple<float,FString> *)0x0) {
        FMemory::Free(local_120.Data);
      }
      DestructItems<FNiagaraVariable,int>
                ((FNiagaraVariable *)local_108.Variables.AllocatorInstance.Data,
                 local_108.Variables.ArrayNum);
      if ((FNiagaraVariable *)local_108.Variables.AllocatorInstance.Data != (FNiagaraVariable *)0x0)
      {
        FMemory::Free(local_108.Variables.AllocatorInstance.Data);
      }
      return;
    }
    FNiagaraDataVariableIterator::Get(&local_108);
    ::FString::FString(&local_a0,L"| ");
    iVar9 = local_108.Variables.ArrayNum;
    uVar13 = (ulonglong)local_108.Variables.ArrayNum;
    pFVar19 = (FNiagaraVariable *)(local_108.Variables.AllocatorInstance.Data + uVar13 * 0x20);
    pFVar15 = local_108.Variables.AllocatorInstance.Data + 8;
    fVar20 = 0.0;
    while( true ) {
      if ((uint)uVar13 != iVar9) {
        local_res10[0] = (FIdentityFunctor)0x0;
        `TCheckedPointerIterator<FNiagaraVariable_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      FVar16.Data = local_a0.Data.AllocatorInstance.Data;
      if ((FNiagaraVariable *)(pFVar15 + -8) == pFVar19) break;
      pFVar11 = ::FName::ToString((FName *)(pFVar15 + -8),local_80);
      ::FString::ConcatFC(&local_b0,pFVar11,L"(");
      if (local_80[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_80[0].Data.AllocatorInstance.Data);
      }
      pFVar12 = FNiagaraTypeDefinitionHandle::Resolve((FNiagaraTypeDefinitionHandle *)pFVar15);
      puVar4 = *(uchar **)(pFVar15 + 8);
      if (((pFVar12->ClassStructOrEnum).field0_0x0.DebugPtr == (UObject *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraTypes.h"
                             ,0x445,L"Type definition is not valid."), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (puVar4 == (uchar *)0x0) {
        ::FString::FString(&local_c0,L"(null)");
      }
      else {
        FNiagaraTypeHelper::ToString
                  (&local_c0,puVar4,(pFVar12->ClassStructOrEnum).field0_0x0.DebugPtr);
      }
      iVar18 = local_c0.Data.ArrayNum + -1;
      if (local_c0.Data.ArrayNum == 0) {
        iVar18 = 0;
      }
      ::FString::AppendChars(&local_b0,(wchar_t *)local_c0.Data.AllocatorInstance.Data,iVar18);
      if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c0.Data.AllocatorInstance.Data);
      }
      ::FString::AppendChars(&local_b0,L")",1);
      ::FString::ConcatFC(&local_90,&local_b0,L" | ");
      iVar18 = local_90.Data.ArrayNum + -1;
      if (local_90.Data.ArrayNum == 0) {
        iVar18 = 0;
      }
      ::FString::AppendChars(&local_a0,(wchar_t *)local_90.Data.AllocatorInstance.Data,iVar18);
      if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_90.Data.AllocatorInstance.Data);
      }
      if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b0.Data.AllocatorInstance.Data);
      }
      if ((*param_4 == (FName)0x0) ||
         ((FName)((FNiagaraVariable *)(pFVar15 + -8))->_padding_ != *param_4)) {
LAB_14922c9cf:
        uVar13 = (ulonglong)(uint)local_108.Variables.ArrayNum;
        pFVar15 = pFVar15 + 0x20;
      }
      else {
        pFVar12 = FNiagaraTypeDefinitionHandle::Resolve((FNiagaraTypeDefinitionHandle *)pFVar15);
        if (((TObjectPtr<UObject>_u_0)(pFVar12->ClassStructOrEnum).field0_0x0.DebugPtr !=
             FNiagaraTypeDefinition::FloatDef.ClassStructOrEnum.field0_0x0) ||
           ((pFVar12->UnderlyingType != FNiagaraTypeDefinition::FloatDef.UnderlyingType ||
            (pFVar12->Flags != FNiagaraTypeDefinition::FloatDef.Flags)))) {
          pFVar12 = FNiagaraTypeDefinitionHandle::Resolve((FNiagaraTypeDefinitionHandle *)pFVar15);
          if ((((TObjectPtr<UObject>_u_0)(pFVar12->ClassStructOrEnum).field0_0x0.DebugPtr !=
                FNiagaraTypeDefinition::IntDef.ClassStructOrEnum.field0_0x0) ||
              (pFVar12->UnderlyingType != FNiagaraTypeDefinition::IntDef.UnderlyingType)) ||
             (pFVar12->Flags != FNiagaraTypeDefinition::IntDef.Flags)) goto LAB_14922c9cf;
          pFVar12 = FNiagaraTypeDefinitionHandle::Resolve((FNiagaraTypeDefinitionHandle *)pFVar15);
          iVar18 = FNiagaraTypeDefinition::GetSize(pFVar12);
          if ((iVar18 != 4) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("sizeof(T) == TypeDefHandle->GetSize()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraTypes.h"
                                 ,0x5e3,L""), bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          if (*(int *)(pFVar15 + 0x10) < 1) {
LAB_14922c982:
            bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsDataAllocated()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraTypes.h"
                               ,0x5e4,L"");
            if (bVar8) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
          else {
            pFVar12 = FNiagaraTypeDefinitionHandle::Resolve((FNiagaraTypeDefinitionHandle *)pFVar15)
            ;
            iVar18 = FNiagaraTypeDefinition::GetSize(pFVar12);
            if (*(int *)(pFVar15 + 0x10) != iVar18) goto LAB_14922c982;
          }
          pFVar12 = FNiagaraTypeDefinitionHandle::Resolve((FNiagaraTypeDefinitionHandle *)pFVar15);
          iVar18 = FNiagaraTypeDefinition::GetSize(pFVar12);
          memcpy(&local_c4,*(void **)(pFVar15 + 8),(longlong)iVar18);
          bVar8 = true;
          fVar20 = (float)local_c4;
          goto LAB_14922c9cf;
        }
        pFVar12 = FNiagaraTypeDefinitionHandle::Resolve((FNiagaraTypeDefinitionHandle *)pFVar15);
        iVar18 = FNiagaraTypeDefinition::GetSize(pFVar12);
        if ((iVar18 != 4) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("sizeof(T) == TypeDefHandle->GetSize()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraTypes.h"
                               ,0x5e3,L""), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (*(int *)(pFVar15 + 0x10) < 1) {
LAB_14922c8a2:
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsDataAllocated()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraTypes.h"
                             ,0x5e4,L"");
          if (bVar8) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        else {
          pFVar12 = FNiagaraTypeDefinitionHandle::Resolve((FNiagaraTypeDefinitionHandle *)pFVar15);
          iVar18 = FNiagaraTypeDefinition::GetSize(pFVar12);
          if (*(int *)(pFVar15 + 0x10) != iVar18) goto LAB_14922c8a2;
        }
        pFVar12 = FNiagaraTypeDefinitionHandle::Resolve((FNiagaraTypeDefinitionHandle *)pFVar15);
        iVar18 = FNiagaraTypeDefinition::GetSize(pFVar12);
        memcpy(&local_c8,*(void **)(pFVar15 + 8),(longlong)iVar18);
        uVar13 = (ulonglong)(uint)local_108.Variables.ArrayNum;
        pFVar15 = pFVar15 + 0x20;
        bVar8 = true;
        fVar20 = local_c8;
      }
    }
    local_d8.Data = (FScriptContainerElement *)0x0;
    iVar9 = local_a0.Data.ArrayNum;
    local_d0 = CONCAT44(local_d0._4_4_,iVar9);
    local_e0._0_4_ = fVar20;
    if (iVar9 == 0) {
      local_d0 = local_a0.Data._8_8_ & 0xffffffff;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar9,0,&local_d8,iVar9,(int *)((longlong)&local_d0 + 4));
      memcpy(local_d8.Data,FVar16.Data,(longlong)iVar9 * 2);
    }
    if (((local_120.Data <= (TTuple<float,FString> *)local_e0) &&
        ((FScriptContainerElement *)local_e0 < local_120.Data + (longlong)local_118._4_4_ * 0x18))
       && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar9 = (int)local_118;
    if ((int)local_118 == local_118._4_4_) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,&local_120,(int *)((longlong)&local_118 + 4));
    }
    param_2 = local_res18;
    local_118 = CONCAT44(local_118._4_4_,iVar9 + 1);
    lVar14 = (longlong)iVar9;
    *(undefined4 *)(local_120.Data + lVar14 * 0x18) = local_e0._0_4_;
    *(undefined8 *)(local_120.Data + lVar14 * 0x18 + 8) = 0;
    *(FScriptContainerElement **)(local_120.Data + lVar14 * 0x18 + 8) = local_d8.Data;
    local_d8.Data = (FScriptContainerElement *)0x0;
    FVar16.Data = local_d8.Data;
    *(undefined4 *)(local_120.Data + lVar14 * 0x18 + 0x10) = (undefined4)local_d0;
    *(undefined4 *)(local_120.Data + lVar14 * 0x18 + 0x14) = local_d0._4_4_;
    local_d0 = 0;
    uVar6 = local_d0;
    local_d0 = 0;
    local_d8.Data = (FScriptContainerElement *)0x0;
    local_108.CurrIdx = local_108.CurrIdx + 1;
    iVar9 = local_e8 + 1;
    local_e8 = iVar9;
    if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a0.Data.AllocatorInstance.Data);
      FVar16.Data = local_d8.Data;
      uVar6 = local_d0;
    }
  } while( true );
}

// GPUCopyFrom @ 149231180

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FNiagaraDataBuffer::GPUCopyFrom
          (FNiagaraDataBuffer *this,float *param_1,int *param_2,FFloat16 *param_3,int param_4,
          int param_5,uint param_6,uint param_7,uint param_8)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  void *pvVar4;
  uint uVar5;
  uint uVar6;
  
  Allocate(this,param_5,false);
  if ((this->NumInstancesAllocated < (uint)param_5) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InNumInstances <= NumInstancesAllocated",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                         ,0x9c,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this->NumInstances = param_5;
  if (0 < param_5) {
    uVar6 = 0;
    if (param_1 != (float *)0x0) {
      uVar5 = 0;
      uVar1 = ((this->Owner->CompiledData).StructPtr)->TotalFloatComponents;
      if (uVar1 != 0) {
        do {
          pvVar4 = (void *)((longlong)param_4 * 4 + (ulonglong)(uVar5 * param_6) + (longlong)param_1
                           );
          memcpy((this->FloatData).AllocatorInstance.Data + uVar5 * this->FloatStride,pvVar4,
                 (((longlong)param_4 + (longlong)param_5) * 4 - (longlong)pvVar4) +
                 (ulonglong)(uVar5 * param_6) + (longlong)param_1 & 0xfffffffffffffffc);
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar1);
      }
    }
    if (param_2 != (int *)0x0) {
      uVar5 = 0;
      uVar1 = ((this->Owner->CompiledData).StructPtr)->TotalInt32Components;
      if (uVar1 != 0) {
        do {
          pvVar4 = (void *)((longlong)param_4 * 4 + (ulonglong)(uVar5 * param_7) + (longlong)param_2
                           );
          memcpy((this->Int32Data).AllocatorInstance.Data + uVar5 * this->Int32Stride,pvVar4,
                 (((longlong)param_5 + (longlong)param_4) * 4 - (longlong)pvVar4) +
                 (ulonglong)(uVar5 * param_7) + (longlong)param_2 & 0xfffffffffffffffc);
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar1);
      }
    }
    if ((param_3 != (FFloat16 *)0x0) &&
       (uVar1 = ((this->Owner->CompiledData).StructPtr)->TotalHalfComponents, uVar1 != 0)) {
      do {
        pvVar4 = (void *)((longlong)&param_3[param_4].Encoded + (ulonglong)(uVar6 * param_8));
        memcpy((this->HalfData).AllocatorInstance.Data + uVar6 * this->HalfStride,pvVar4,
               ((longlong)
                ((((longlong)param_5 + (longlong)param_4) * 2 - (longlong)pvVar4) +
                 (ulonglong)(uVar6 * param_8) + (longlong)param_3) >> 1) * 2);
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar1);
    }
  }
  return;
}

// KillInstance @ 149242f40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FNiagaraDataBuffer::KillInstance(FNiagaraDataBuffer *this,uint param_1)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  
  uVar6 = (ulonglong)param_1;
  if ((this->NumInstances <= param_1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InstanceIdx < NumInstances",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataSet.cpp"
                         ,0x409,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  this->NumInstances = this->NumInstances - 1;
  uVar8 = 0;
  uVar7 = 0;
  uVar1 = ((this->Owner->CompiledData).StructPtr)->TotalFloatComponents;
  if (3 < uVar1) {
    iVar9 = 2;
    do {
      pFVar2 = (this->FloatData).AllocatorInstance.Data;
      uVar5 = (ulonglong)(uVar7 * this->FloatStride);
      uVar7 = uVar7 + 4;
      *(undefined4 *)(pFVar2 + uVar5 + uVar6 * 4) =
           *(undefined4 *)(pFVar2 + uVar5 + (ulonglong)this->NumInstances * 4);
      uVar5 = (ulonglong)((iVar9 + -1) * this->FloatStride);
      pFVar2 = (this->FloatData).AllocatorInstance.Data;
      *(undefined4 *)(pFVar2 + uVar5 + uVar6 * 4) =
           *(undefined4 *)(pFVar2 + uVar5 + (ulonglong)this->NumInstances * 4);
      uVar5 = (ulonglong)(iVar9 * this->FloatStride);
      pFVar2 = (this->FloatData).AllocatorInstance.Data;
      *(undefined4 *)(pFVar2 + uVar5 + uVar6 * 4) =
           *(undefined4 *)(pFVar2 + uVar5 + (ulonglong)this->NumInstances * 4);
      uVar5 = (ulonglong)((iVar9 + 1) * this->FloatStride);
      iVar9 = iVar9 + 4;
      pFVar2 = (this->FloatData).AllocatorInstance.Data;
      *(undefined4 *)(pFVar2 + uVar5 + uVar6 * 4) =
           *(undefined4 *)(pFVar2 + uVar5 + (ulonglong)this->NumInstances * 4);
    } while (uVar7 < uVar1 - 3);
  }
  for (; uVar7 < uVar1; uVar7 = uVar7 + 1) {
    uVar5 = (ulonglong)(uVar7 * this->FloatStride);
    pFVar2 = (this->FloatData).AllocatorInstance.Data;
    *(undefined4 *)(pFVar2 + uVar5 + uVar6 * 4) =
         *(undefined4 *)(pFVar2 + uVar5 + (ulonglong)this->NumInstances * 4);
  }
  uVar7 = 0;
  uVar1 = ((this->Owner->CompiledData).StructPtr)->TotalInt32Components;
  if (uVar1 != 0) {
    do {
      pFVar2 = (this->Int32Data).AllocatorInstance.Data;
      uVar5 = (ulonglong)(uVar7 * this->Int32Stride);
      uVar7 = uVar7 + 1;
      *(undefined4 *)(pFVar2 + uVar6 * 4 + uVar5) =
           *(undefined4 *)(pFVar2 + uVar5 + (ulonglong)this->NumInstances * 4);
    } while (uVar7 < uVar1);
  }
  uVar1 = ((this->Owner->CompiledData).StructPtr)->TotalHalfComponents;
  if (uVar1 != 0) {
    do {
      uVar5 = (ulonglong)(uVar8 * this->HalfStride);
      uVar8 = uVar8 + 1;
      pFVar2 = (this->HalfData).AllocatorInstance.Data;
      *(undefined2 *)(pFVar2 + uVar5 + uVar6 * 2) =
           *(undefined2 *)(pFVar2 + uVar5 + (ulonglong)this->NumInstances * 2);
    } while (uVar8 < uVar1);
  }
  return;
}

// PushCPUBuffersToGPU @ 149247700

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FNiagaraDataBuffer::PushCPUBuffersToGPU
          (FNiagaraDataBuffer *this,
          TArray<TRefCountPtr<FNiagaraDataBuffer>,TSizedDefaultAllocator<32>_> *param_1,bool param_2
          ,FRHICommandList *param_3,Type param_4,wchar_t *param_5,bool param_6)

{
  longlong *plVar1;
  longlong lVar2;
  FNiagaraDataSet *pFVar3;
  FRHIBuffer *pFVar4;
  FNiagaraDataSetCompiledData *pFVar5;
  longlong *plVar6;
  longlong *plVar7;
  code *pcVar8;
  FScriptContainerElement *pFVar9;
  bool bVar10;
  bool bVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  longlong *plVar15;
  ulonglong uVar16;
  longlong lVar17;
  FScriptContainerElement *pFVar18;
  size_t sVar19;
  FScriptContainerElement *pFVar20;
  uint uVar21;
  ulonglong uVar22;
  uint uVar23;
  void *pvVar24;
  void *_Dst;
  FScriptContainerElement *pFVar25;
  ushort *puVar26;
  undefined1 local_98;
  undefined1 local_97;
  undefined1 local_96;
  undefined1 local_95;
  undefined1 local_94 [4];
  uint local_90;
  void *local_88;
  void *local_80;
  void *local_78;
  longlong local_70;
  FScriptContainerElement *local_68;
  longlong local_60;
  longlong local_58;
  FScriptContainerElement *local_50;
  FScriptContainerElement *local_48;
  FNiagaraDataSetCompiledData *local_40;
  
  uVar23 = 0;
  if ((((this->Owner->CompiledData).StructPtr)->SimTarget != GPUComputeSim) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("GetOwner()->GetSimTarget() == ENiagaraSimTarget::GPUComputeSim",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataSet.cpp"
                          ,0x535,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pFVar18 = (param_1->AllocatorInstance).Data;
  bVar10 = true;
  iVar14 = param_1->ArrayNum;
  pFVar25 = pFVar18 + (longlong)iVar14 * 8;
  while( true ) {
    if (param_1->ArrayNum != iVar14) {
      local_98 = 0;
      `TCheckedPointerIterator<TRefCountPtr<FNiagaraDataBuffer>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_98);
    }
    if (pFVar18 == pFVar25) break;
    lVar2 = *(longlong *)pFVar18;
    if (lVar2 != 0) {
      lVar17 = *(longlong *)(lVar2 + 0x10);
      uVar23 = uVar23 + *(int *)(lVar2 + 0x124);
      if ((*(longlong *)(lVar17 + 8) == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("CompiledData.Get() != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                              ,0x169,L""), bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar12 = FNiagaraDataSetCompiledData::GetLayoutHash
                         (*(FNiagaraDataSetCompiledData **)(lVar17 + 8));
      pFVar3 = this->Owner;
      if (((pFVar3->CompiledData).StructPtr == (FNiagaraDataSetCompiledData *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("CompiledData.Get() != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                              ,0x169,L""), bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar13 = FNiagaraDataSetCompiledData::GetLayoutHash((pFVar3->CompiledData).StructPtr);
      bVar10 = (bool)(bVar10 & uVar12 == uVar13);
    }
    pFVar18 = pFVar18 + 8;
  }
  if (param_6) {
    AllocateGPU(this,(FRHICommandListBase *)param_3,uVar23,param_4,param_5);
  }
  if ((this->NumInstancesAllocated < uVar23) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("InNumInstances <= NumInstancesAllocated",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                          ,0x9c,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  this->NumInstances = uVar23;
  if (uVar23 != 0) {
    pFVar4 = (this->GPUBufferFloat).Buffer.Reference;
    pFVar5 = (this->Owner->CompiledData).StructPtr;
    uVar23 = pFVar5->TotalInt32Components;
    uVar12 = pFVar5->TotalHalfComponents;
    uVar13 = pFVar5->TotalFloatComponents;
    local_90 = uVar23;
    if (pFVar4 == (FRHIBuffer *)0x0) {
      local_80 = (void *)0x0;
    }
    else {
      local_80 = FRHICommandListBase::LockBuffer
                           ((FRHICommandListBase *)param_3,pFVar4,0,uVar13 * this->FloatStride,
                            RLM_WriteOnly);
    }
    pvVar24 = local_80;
    uVar21 = 0;
    pFVar4 = (this->GPUBufferInt).Buffer.Reference;
    if (pFVar4 == (FRHIBuffer *)0x0) {
      local_78 = (void *)0x0;
    }
    else {
      local_78 = FRHICommandListBase::LockBuffer
                           ((FRHICommandListBase *)param_3,pFVar4,0,uVar23 * this->Int32Stride,
                            RLM_WriteOnly);
    }
    pFVar4 = (this->GPUBufferHalf).Buffer.Reference;
    if (pFVar4 == (FRHIBuffer *)0x0) {
      local_88 = (void *)0x0;
    }
    else {
      local_88 = FRHICommandListBase::LockBuffer
                           ((FRHICommandListBase *)param_3,pFVar4,0,uVar12 * this->HalfStride,
                            RLM_WriteOnly);
    }
    if (bVar10) {
      if (uVar13 != 0) {
        do {
          local_80 = (void *)((longlong)pvVar24 + (ulonglong)this->FloatStride);
          pFVar18 = (param_1->AllocatorInstance).Data;
          iVar14 = param_1->ArrayNum;
          pFVar25 = pFVar18 + (longlong)iVar14 * 8;
          while( true ) {
            if (param_1->ArrayNum != iVar14) {
              `TCheckedPointerIterator<TRefCountPtr<FNiagaraDataBuffer>_const_,int,0>::operator!='::
              __l2::<lambda_1>::operator()(&local_96);
            }
            if (pFVar18 == pFVar25) break;
            lVar2 = *(longlong *)pFVar18;
            sVar19 = (longlong)*(int *)(lVar2 + 0x124) * 4;
            memcpy(pvVar24,(void *)((ulonglong)(uVar21 * *(int *)(lVar2 + 300)) +
                                   *(longlong *)(lVar2 + 0x18)),sVar19);
            pvVar24 = (void *)((longlong)pvVar24 + sVar19);
            pFVar18 = pFVar18 + 8;
          }
          uVar21 = uVar21 + 1;
          pvVar24 = local_80;
          uVar23 = local_90;
        } while (uVar21 < uVar13);
      }
      uVar13 = 0;
      if (uVar23 != 0) {
        do {
          pFVar18 = (param_1->AllocatorInstance).Data;
          iVar14 = param_1->ArrayNum;
          pFVar25 = pFVar18 + (longlong)iVar14 * 8;
          pvVar24 = local_78;
          local_78 = (void *)((longlong)local_78 + (ulonglong)this->Int32Stride);
          while( true ) {
            if (param_1->ArrayNum != iVar14) {
              `TCheckedPointerIterator<TRefCountPtr<FNiagaraDataBuffer>_const_,int,0>::operator!='::
              __l2::<lambda_1>::operator()(&local_95);
            }
            if (pFVar18 == pFVar25) break;
            lVar2 = *(longlong *)pFVar18;
            sVar19 = (longlong)*(int *)(lVar2 + 0x124) * 4;
            memcpy(pvVar24,(void *)((ulonglong)(uVar13 * *(int *)(lVar2 + 0x130)) +
                                   *(longlong *)(lVar2 + 0x28)),sVar19);
            pvVar24 = (void *)((longlong)pvVar24 + sVar19);
            pFVar18 = pFVar18 + 8;
          }
          uVar13 = uVar13 + 1;
        } while (uVar13 < uVar23);
      }
      uVar23 = 0;
      pvVar24 = local_88;
      _Dst = local_88;
      if (uVar12 != 0) {
        do {
          pvVar24 = (void *)((longlong)_Dst + (ulonglong)this->HalfStride);
          pFVar18 = (param_1->AllocatorInstance).Data;
          iVar14 = param_1->ArrayNum;
          pFVar25 = pFVar18 + (longlong)iVar14 * 8;
          while( true ) {
            if (param_1->ArrayNum != iVar14) {
              `TCheckedPointerIterator<TRefCountPtr<FNiagaraDataBuffer>_const_,int,0>::operator!='::
              __l2::<lambda_1>::operator()(local_94);
            }
            if (pFVar18 == pFVar25) break;
            lVar2 = *(longlong *)pFVar18;
            sVar19 = (longlong)*(int *)(lVar2 + 0x124) * 2;
            memcpy(_Dst,(void *)((ulonglong)(uVar23 * *(int *)(lVar2 + 0x134)) +
                                *(longlong *)(lVar2 + 0x38)),sVar19);
            _Dst = (void *)((longlong)_Dst + sVar19);
            pFVar18 = pFVar18 + 8;
          }
          uVar23 = uVar23 + 1;
          _Dst = pvVar24;
        } while (uVar23 < uVar12);
      }
    }
    else {
      pFVar3 = this->Owner;
      if (((pFVar3->CompiledData).StructPtr == (FNiagaraDataSetCompiledData *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("CompiledData.Get() != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                              ,0x169,L""), bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      local_40 = (pFVar3->CompiledData).StructPtr;
      iVar14 = (local_40->Variables).ArrayNum;
      pvVar24 = local_88;
      if (0 < iVar14) {
        local_58 = 0;
        local_70 = 0;
        local_60 = 0;
        do {
          pFVar5 = local_40;
          lVar17 = local_58;
          lVar2 = local_60;
          uVar22 = 0;
          uVar23 = 0;
          if ((int)uVar21 < iVar14) {
            uVar23 = ~uVar21 >> 0x1f;
          }
          if ((uVar23 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pFVar25 = (pFVar5->Variables).AllocatorInstance.Data + lVar2;
          uVar23 = 0;
          if ((int)uVar21 < (pFVar5->VariableLayouts).ArrayNum) {
            uVar23 = ~uVar21 >> 0x1f;
          }
          local_50 = pFVar25;
          if ((uVar23 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pFVar20 = (pFVar5->VariableLayouts).AllocatorInstance.Data + lVar17;
          _param_6 = 0;
          local_90 = param_1->ArrayNum;
          uVar16 = (ulonglong)(int)local_90;
          pFVar18 = (param_1->AllocatorInstance).Data;
          local_48 = pFVar18 + uVar16 * 8;
          while( true ) {
            pFVar9 = local_48;
            uVar23 = 0;
            local_68 = pFVar18;
            if (param_1->ArrayNum != (int)uVar16) {
              local_97 = 0;
              `TCheckedPointerIterator<TRefCountPtr<FNiagaraDataBuffer>_const_,int,0>::operator!='::
              __l2::<lambda_1>::operator()(&local_97);
            }
            if (pFVar18 == pFVar9) break;
            lVar2 = *(longlong *)pFVar18;
            if (*(int *)(lVar2 + 0x124) != 0) {
              lVar17 = *(longlong *)(lVar2 + 0x10);
              if ((*(longlong *)(lVar17 + 8) == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("CompiledData.Get() != nullptr",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                                      ,0x169,L""), bVar10)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              pvVar24 = local_80;
              plVar6 = *(longlong **)(lVar17 + 8);
              plVar7 = (longlong *)*plVar6;
              plVar1 = (longlong *)((longlong)plVar7 + (longlong)(int)plVar6[1] * 0xc);
              if (plVar7 != plVar1) {
                plVar15 = plVar7;
LAB_149247d30:
                if ((*plVar15 != *(longlong *)pFVar25) || ((int)plVar15[1] != *(int *)(pFVar25 + 8))
                   ) goto LAB_149247d41;
                lVar17 = ((longlong)plVar15 - (longlong)plVar7) / 6 +
                         ((longlong)plVar15 - (longlong)plVar7 >> 0x3f);
                uVar12 = (int)(lVar17 >> 1) - (int)(lVar17 >> 0x3f);
                if (uVar12 != 0xffffffff) {
                  uVar13 = 0;
                  if ((int)uVar12 < (int)plVar6[3]) {
                    uVar13 = ~uVar12 >> 0x1f;
                  }
                  if ((uVar13 == 0) &&
                     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar10)) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  puVar26 = (ushort *)((longlong)(int)uVar12 * 0x20 + plVar6[2]);
                  if ((puVar26[4] != *(ushort *)(pFVar20 + 8)) &&
                     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                         ("SrcVarLayout.GetNumFloatComponents() == DestVarLayout.GetNumFloatComponents()"
                                          ,
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataSet.cpp"
                                          ,0x596,L""), bVar10)) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  pvVar24 = local_80;
                  if (*(ushort *)(pFVar20 + 8) != 0) {
                    do {
                      memcpy((void *)((ulonglong)((*(ushort *)pFVar20 + uVar23) * this->FloatStride)
                                      + uVar22 * 4 + (longlong)pvVar24),
                             (void *)((ulonglong)((*puVar26 + uVar23) * *(int *)(lVar2 + 300)) +
                                     *(longlong *)(lVar2 + 0x18)),
                             (ulonglong)*(uint *)(lVar2 + 0x124) << 2);
                      uVar23 = uVar23 + 1;
                    } while (uVar23 < *(ushort *)(pFVar20 + 8));
                    uVar22 = (ulonglong)_param_6;
                  }
                  uVar23 = 0;
                  if ((puVar26[5] != *(ushort *)(pFVar20 + 10)) &&
                     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                         ("SrcVarLayout.GetNumInt32Components() == DestVarLayout.GetNumInt32Components()"
                                          ,
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataSet.cpp"
                                          ,0x5a0,L""), bVar10)) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  pvVar24 = local_78;
                  uVar12 = (uint)uVar22;
                  if (*(ushort *)(pFVar20 + 10) != 0) {
                    do {
                      memcpy((void *)((ulonglong)
                                      ((*(ushort *)(pFVar20 + 2) + uVar23) * this->Int32Stride) +
                                      uVar22 * 4 + (longlong)pvVar24),
                             (void *)((ulonglong)((puVar26[1] + uVar23) * *(int *)(lVar2 + 0x130)) +
                                     *(longlong *)(lVar2 + 0x28)),
                             (ulonglong)*(uint *)(lVar2 + 0x124) << 2);
                      uVar23 = uVar23 + 1;
                      uVar12 = _param_6;
                    } while (uVar23 < *(ushort *)(pFVar20 + 10));
                  }
                  uVar23 = 0;
                  if ((puVar26[6] != *(ushort *)(pFVar20 + 0xc)) &&
                     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                         ("SrcVarLayout.GetNumHalfComponents() == DestVarLayout.GetNumHalfComponents()"
                                          ,
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataSet.cpp"
                                          ,0x5aa,L""), bVar10)) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  pvVar24 = local_88;
                  uVar13 = uVar12;
                  if (*(ushort *)(pFVar20 + 0xc) != 0) {
                    do {
                      memcpy((void *)((ulonglong)
                                      ((*(ushort *)(pFVar20 + 4) + uVar23) * this->HalfStride) +
                                      (ulonglong)uVar12 * 2 + (longlong)pvVar24),
                             (void *)((ulonglong)((puVar26[2] + uVar23) * *(int *)(lVar2 + 0x134)) +
                                     *(longlong *)(lVar2 + 0x38)),
                             (ulonglong)*(uint *)(lVar2 + 0x124) * 2);
                      uVar23 = uVar23 + 1;
                      uVar13 = _param_6;
                    } while (uVar23 < *(ushort *)(pFVar20 + 0xc));
                  }
                  goto LAB_149247e38;
                }
              }
LAB_149247d4a:
              if (*(ushort *)(pFVar20 + 8) != 0) {
                uVar12 = uVar23;
                do {
                  memset((void *)((ulonglong)((*(ushort *)pFVar20 + uVar12) * this->FloatStride) +
                                  uVar22 * 4 + (longlong)pvVar24),0,
                         (ulonglong)*(uint *)(lVar2 + 0x124) << 2);
                  uVar12 = uVar12 + 1;
                } while (uVar12 < *(ushort *)(pFVar20 + 8));
                uVar22 = (ulonglong)_param_6;
              }
              pvVar24 = local_78;
              if (*(ushort *)(pFVar20 + 10) != 0) {
                uVar12 = uVar23;
                do {
                  memset((void *)((ulonglong)
                                  ((*(ushort *)(pFVar20 + 2) + uVar12) * this->Int32Stride) +
                                  uVar22 * 4 + (longlong)pvVar24),0,
                         (ulonglong)*(uint *)(lVar2 + 0x124) << 2);
                  uVar12 = uVar12 + 1;
                } while (uVar12 < *(ushort *)(pFVar20 + 10));
                uVar22 = (ulonglong)_param_6;
              }
              pvVar24 = local_88;
              uVar13 = (uint)uVar22;
              if (*(ushort *)(pFVar20 + 0xc) != 0) {
                do {
                  memset((void *)((ulonglong)
                                  ((*(ushort *)(pFVar20 + 4) + uVar23) * this->HalfStride) +
                                  uVar22 * 2 + (longlong)pvVar24),0,
                         (ulonglong)*(uint *)(lVar2 + 0x124) * 2);
                  uVar23 = uVar23 + 1;
                  uVar13 = _param_6;
                } while (uVar23 < *(ushort *)(pFVar20 + 0xc));
              }
LAB_149247e38:
              _param_6 = uVar13 + *(int *)(lVar2 + 0x124);
              uVar22 = (ulonglong)_param_6;
              pFVar25 = local_50;
              pFVar18 = local_68;
            }
            pFVar18 = pFVar18 + 8;
            uVar16 = (ulonglong)local_90;
          }
          uVar21 = uVar21 + 1;
          local_70 = local_70 + 1;
          local_60 = local_60 + 0xc;
          local_58 = local_58 + 0x20;
          iVar14 = (local_40->Variables).ArrayNum;
          pvVar24 = local_88;
        } while ((int)uVar21 < iVar14);
      }
    }
    if (local_80 != (void *)0x0) {
      FRHICommandListBase::UnlockBuffer
                ((FRHICommandListBase *)param_3,(this->GPUBufferFloat).Buffer.Reference);
    }
    if (local_78 != (void *)0x0) {
      FRHICommandListBase::UnlockBuffer
                ((FRHICommandListBase *)param_3,(this->GPUBufferInt).Buffer.Reference);
    }
    if (pvVar24 != (void *)0x0) {
      FRHICommandListBase::UnlockBuffer
                ((FRHICommandListBase *)param_3,(this->GPUBufferHalf).Buffer.Reference);
    }
  }
  return;
LAB_149247d41:
  plVar15 = (longlong *)((longlong)plVar15 + 0xc);
  if (plVar15 == plVar1) goto LAB_149247d4a;
  goto LAB_149247d30;
}

// ReleaseCPU @ 14924a400

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FNiagaraDataBuffer::ReleaseCPU(FNiagaraDataBuffer *this)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  atomic<__int64> *paVar4;
  FName FVar5;
  FName *pFVar6;
  FThreadSafeStaticStat<FStat_STAT_NiagaraParticleMemory> FVar7;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uchar auVar8 [8];
  FName local_res8;
  FStatMessage local_38;
  
  this->NumInstances = 0;
  this->NumInstancesAllocated = 0;
  (this->IDToIndexTable).ArrayNum = 0;
  if ((this->IDToIndexTable).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->IDToIndexTable).AllocatorInstance,0,&(this->IDToIndexTable).ArrayMax);
  }
  this->FloatStride = 0;
  this->Int32Stride = 0;
  piVar1 = &(this->FloatData).ArrayMax;
  this->HalfStride = 0;
  piVar2 = &(this->Int32Data).ArrayMax;
  piVar3 = &(this->HalfData).ArrayMax;
  auVar8 = (uchar  [8])((longlong)*piVar2 + (longlong)*piVar1 + (longlong)*piVar3);
  if (auVar8 != (uchar  [8])0x0) {
    FVar7 = StatPtr_STAT_NiagaraParticleMemory;
    if (StatPtr_STAT_NiagaraParticleMemory ==
        (FThreadSafeStaticStat<FStat_STAT_NiagaraParticleMemory>)0x0) {
      pFVar6 = ::FName::FName(&local_res8,"STAT_NiagaraParticleMemory");
      FVar7 = (FThreadSafeStaticStat<FStat_STAT_NiagaraParticleMemory>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraParticleMemory,*pFVar6,
                         L"Niagara particle data memory","STATGROUP_Niagara","STATCAT_Niagara",
                         L"Niagara",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar5 = *(FName *)FVar7;
    local_res8 = FVar5;
    if (((FVar5 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      local_38.NameAndInfo.Number = FVar5.Number & 0xffffbfff | 0xb000;
      local_res8 = FVar5;
      local_38.StatData.Pad = auVar8;
      local_38.NameAndInfo.Index.Value = FVar5.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(this_00,&local_38);
      FStatsTrace::Add(&local_res8,-(longlong)auVar8);
      if (this_00->ScopeCount == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  LOCK();
  paVar4 = &this->Owner->BufferSizeBytes;
  *paVar4 = (atomic<__int64>)
            ((longlong)*paVar4 - ((longlong)*piVar1 + (longlong)*piVar2 + (longlong)*piVar3));
  UNLOCK();
  (this->FloatData).ArrayNum = 0;
  if ((this->FloatData).ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,&(this->FloatData).AllocatorInstance,0,piVar1);
  }
  (this->Int32Data).ArrayNum = 0;
  if ((this->Int32Data).ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,&(this->Int32Data).AllocatorInstance,0,piVar2);
  }
  (this->HalfData).ArrayNum = 0;
  if ((this->HalfData).ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,&(this->HalfData).AllocatorInstance,0,piVar3);
  }
  return;
}

// ReleaseGPU @ 14924a6b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FNiagaraDataBuffer::ReleaseGPU(FNiagaraDataBuffer *this)

{
  atomic<__int64> *paVar1;
  FName FVar2;
  FRHIBuffer *pFVar3;
  FRHIUnorderedAccessView *pFVar4;
  FRHIShaderResourceView *pFVar5;
  code *pcVar6;
  bool bVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<FStat_STAT_NiagaraGPUParticleMemory> FVar9;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uchar auVar10 [8];
  FName local_res8;
  FName local_res10;
  FStatMessage local_28;
  
  bVar7 = IsInRenderingThread();
  if ((!bVar7) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataSet.cpp"
                         ,0x3c6,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  auVar10 = (uchar  [8])(longlong)this->AllocationSizeBytes;
  if (auVar10 != (uchar  [8])0x0) {
    FVar9 = StatPtr_STAT_NiagaraGPUParticleMemory;
    if (StatPtr_STAT_NiagaraGPUParticleMemory ==
        (FThreadSafeStaticStat<FStat_STAT_NiagaraGPUParticleMemory>)0x0) {
      pFVar8 = ::FName::FName(&local_res10,"STAT_NiagaraGPUParticleMemory");
      FVar9 = (FThreadSafeStaticStat<FStat_STAT_NiagaraGPUParticleMemory>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraGPUParticleMemory,*pFVar8
                         ,L"Niagara GPU particle data memory","STATGROUP_Niagara","STATCAT_Niagara",
                         L"Niagara",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar2 = *(FName *)FVar9;
    local_res8 = FVar2;
    if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      local_28.NameAndInfo.Number = FVar2.Number & 0xffffbfff | 0xb000;
      local_res8 = FVar2;
      local_28.StatData.Pad = auVar10;
      local_28.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(this_00,&local_28);
      FStatsTrace::Add(&local_res8,-(longlong)auVar10);
      if (this_00->ScopeCount == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  LOCK();
  paVar1 = &this->Owner->BufferSizeBytes;
  *paVar1 = (atomic<__int64>)((longlong)*paVar1 - (longlong)this->AllocationSizeBytes);
  UNLOCK();
  pFVar3 = (this->GPUBufferFloat).Buffer.Reference;
  this->AllocationSizeBytes = 0;
  this->NumInstancesAllocated = 0;
  this->FloatStride = 0;
  this->Int32Stride = 0;
  this->HalfStride = 0;
  this->GPUInstanceCountBufferOffset = 0xffffffff;
  if (pFVar3 != (FRHIBuffer *)0x0) {
    (this->GPUBufferFloat).NumBytes = 0;
    (this->GPUBufferFloat).Buffer.Reference = (FRHIBuffer *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar3);
    pFVar4 = (this->GPUBufferFloat).UAV.Reference;
    if (pFVar4 != (FRHIUnorderedAccessView *)0x0) {
      (this->GPUBufferFloat).UAV.Reference = (FRHIUnorderedAccessView *)0x0;
      FRHIResource::Release((FRHIResource *)pFVar4);
    }
    pFVar5 = (this->GPUBufferFloat).SRV.Reference;
    if (pFVar5 != (FRHIShaderResourceView *)0x0) {
      (this->GPUBufferFloat).SRV.Reference = (FRHIShaderResourceView *)0x0;
      FRHIResource::Release((FRHIResource *)pFVar5);
    }
  }
  pFVar3 = (this->GPUBufferInt).Buffer.Reference;
  if (pFVar3 != (FRHIBuffer *)0x0) {
    (this->GPUBufferInt).NumBytes = 0;
    (this->GPUBufferInt).Buffer.Reference = (FRHIBuffer *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar3);
    pFVar4 = (this->GPUBufferInt).UAV.Reference;
    if (pFVar4 != (FRHIUnorderedAccessView *)0x0) {
      (this->GPUBufferInt).UAV.Reference = (FRHIUnorderedAccessView *)0x0;
      FRHIResource::Release((FRHIResource *)pFVar4);
    }
    pFVar5 = (this->GPUBufferInt).SRV.Reference;
    if (pFVar5 != (FRHIShaderResourceView *)0x0) {
      (this->GPUBufferInt).SRV.Reference = (FRHIShaderResourceView *)0x0;
      FRHIResource::Release((FRHIResource *)pFVar5);
    }
  }
  pFVar3 = (this->GPUBufferHalf).Buffer.Reference;
  if (pFVar3 != (FRHIBuffer *)0x0) {
    (this->GPUBufferHalf).NumBytes = 0;
    (this->GPUBufferHalf).Buffer.Reference = (FRHIBuffer *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar3);
    pFVar4 = (this->GPUBufferHalf).UAV.Reference;
    if (pFVar4 != (FRHIUnorderedAccessView *)0x0) {
      (this->GPUBufferHalf).UAV.Reference = (FRHIUnorderedAccessView *)0x0;
      FRHIResource::Release((FRHIResource *)pFVar4);
    }
    pFVar5 = (this->GPUBufferHalf).SRV.Reference;
    if (pFVar5 != (FRHIShaderResourceView *)0x0) {
      (this->GPUBufferHalf).SRV.Reference = (FRHIShaderResourceView *)0x0;
      FRHIResource::Release((FRHIResource *)pFVar5);
    }
  }
  pFVar3 = (this->GPUIDToIndexTable).Buffer.Reference;
  if (pFVar3 != (FRHIBuffer *)0x0) {
    (this->GPUIDToIndexTable).NumBytes = 0;
    (this->GPUIDToIndexTable).Buffer.Reference = (FRHIBuffer *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar3);
    pFVar4 = (this->GPUIDToIndexTable).UAV.Reference;
    if (pFVar4 != (FRHIUnorderedAccessView *)0x0) {
      (this->GPUIDToIndexTable).UAV.Reference = (FRHIUnorderedAccessView *)0x0;
      FRHIResource::Release((FRHIResource *)pFVar4);
    }
    pFVar5 = (this->GPUIDToIndexTable).SRV.Reference;
    if (pFVar5 != (FRHIShaderResourceView *)0x0) {
      (this->GPUIDToIndexTable).SRV.Reference = (FRHIShaderResourceView *)0x0;
      FRHIResource::Release((FRHIResource *)pFVar5);
    }
  }
  return;
}

// SetNumInstances @ 14924d630

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FNiagaraDataBuffer::SetNumInstances(FNiagaraDataBuffer *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 <= this->NumInstancesAllocated) {
    this->NumInstances = param_1;
    return;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("InNumInstances <= NumInstancesAllocated",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                     ,0x9c,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this->NumInstances = param_1;
  return;
}

// SwapGPU @ 14924f5b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FNiagaraDataBuffer::SwapGPU(FNiagaraDataBuffer *this,FNiagaraDataBuffer *param_1)

{
  int iVar1;
  Type TVar2;
  uint uVar3;
  FRHIUnorderedAccessView *pFVar4;
  FRHIBuffer *pFVar5;
  FRHIUnorderedAccessView *pFVar6;
  FRHIShaderResourceView *pFVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  FNameEntryId FVar11;
  uint uVar12;
  FNameEntryId FVar13;
  
  iVar1 = this->AllocationSizeBytes;
  this->AllocationSizeBytes = param_1->AllocationSizeBytes;
  param_1->AllocationSizeBytes = iVar1;
  TVar2 = this->GPUDataReadyStage;
  this->GPUDataReadyStage = param_1->GPUDataReadyStage;
  param_1->GPUDataReadyStage = TVar2;
  uVar3 = this->GPUInstanceCountBufferOffset;
  this->GPUInstanceCountBufferOffset = param_1->GPUInstanceCountBufferOffset;
  param_1->GPUInstanceCountBufferOffset = uVar3;
  pFVar4 = (param_1->GPUBufferFloat).UAV.Reference;
  pFVar5 = (this->GPUBufferFloat).Buffer.Reference;
  pFVar6 = (this->GPUBufferFloat).UAV.Reference;
  pFVar7 = (this->GPUBufferFloat).SRV.Reference;
  uVar12 = (this->GPUBufferFloat).NumBytes;
  FVar13.Value = (this->GPUBufferFloat).ClassName.ComparisonIndex.Value;
  uVar8 = *(undefined8 *)&(this->GPUBufferFloat).ClassName.Number;
  uVar9 = *(undefined8 *)&(this->GPUBufferFloat).OwnerName.Number;
  (this->GPUBufferFloat).Buffer.Reference = (param_1->GPUBufferFloat).Buffer.Reference;
  (this->GPUBufferFloat).UAV.Reference = pFVar4;
  uVar3 = (param_1->GPUBufferFloat).NumBytes;
  FVar11.Value = (param_1->GPUBufferFloat).ClassName.ComparisonIndex.Value;
  (this->GPUBufferFloat).SRV.Reference = (param_1->GPUBufferFloat).SRV.Reference;
  (this->GPUBufferFloat).NumBytes = uVar3;
  (this->GPUBufferFloat).ClassName.ComparisonIndex = (FNameEntryId)FVar11.Value;
  uVar10 = *(undefined8 *)&(param_1->GPUBufferFloat).OwnerName.Number;
  *(undefined8 *)&(this->GPUBufferFloat).ClassName.Number =
       *(undefined8 *)&(param_1->GPUBufferFloat).ClassName.Number;
  *(undefined8 *)&(this->GPUBufferFloat).OwnerName.Number = uVar10;
  (param_1->GPUBufferFloat).Buffer.Reference = pFVar5;
  (param_1->GPUBufferFloat).UAV.Reference = pFVar6;
  (param_1->GPUBufferFloat).SRV.Reference = pFVar7;
  (param_1->GPUBufferFloat).NumBytes = uVar12;
  (param_1->GPUBufferFloat).ClassName.ComparisonIndex = (FNameEntryId)FVar13.Value;
  *(undefined8 *)&(param_1->GPUBufferFloat).ClassName.Number = uVar8;
  *(undefined8 *)&(param_1->GPUBufferFloat).OwnerName.Number = uVar9;
  pFVar4 = (param_1->GPUBufferInt).UAV.Reference;
  pFVar5 = (this->GPUBufferInt).Buffer.Reference;
  pFVar6 = (this->GPUBufferInt).UAV.Reference;
  pFVar7 = (this->GPUBufferInt).SRV.Reference;
  uVar12 = (this->GPUBufferInt).NumBytes;
  FVar13.Value = (this->GPUBufferInt).ClassName.ComparisonIndex.Value;
  uVar8 = *(undefined8 *)&(this->GPUBufferInt).ClassName.Number;
  uVar9 = *(undefined8 *)&(this->GPUBufferInt).OwnerName.Number;
  (this->GPUBufferInt).Buffer.Reference = (param_1->GPUBufferInt).Buffer.Reference;
  (this->GPUBufferInt).UAV.Reference = pFVar4;
  uVar3 = (param_1->GPUBufferInt).NumBytes;
  FVar11.Value = (param_1->GPUBufferInt).ClassName.ComparisonIndex.Value;
  (this->GPUBufferInt).SRV.Reference = (param_1->GPUBufferInt).SRV.Reference;
  (this->GPUBufferInt).NumBytes = uVar3;
  (this->GPUBufferInt).ClassName.ComparisonIndex = (FNameEntryId)FVar11.Value;
  uVar10 = *(undefined8 *)&(param_1->GPUBufferInt).OwnerName.Number;
  *(undefined8 *)&(this->GPUBufferInt).ClassName.Number =
       *(undefined8 *)&(param_1->GPUBufferInt).ClassName.Number;
  *(undefined8 *)&(this->GPUBufferInt).OwnerName.Number = uVar10;
  (param_1->GPUBufferInt).Buffer.Reference = pFVar5;
  (param_1->GPUBufferInt).UAV.Reference = pFVar6;
  (param_1->GPUBufferInt).SRV.Reference = pFVar7;
  (param_1->GPUBufferInt).NumBytes = uVar12;
  (param_1->GPUBufferInt).ClassName.ComparisonIndex = (FNameEntryId)FVar13.Value;
  *(undefined8 *)&(param_1->GPUBufferInt).ClassName.Number = uVar8;
  *(undefined8 *)&(param_1->GPUBufferInt).OwnerName.Number = uVar9;
  pFVar4 = (param_1->GPUIDToIndexTable).UAV.Reference;
  pFVar5 = (this->GPUIDToIndexTable).Buffer.Reference;
  pFVar6 = (this->GPUIDToIndexTable).UAV.Reference;
  pFVar7 = (this->GPUIDToIndexTable).SRV.Reference;
  uVar12 = (this->GPUIDToIndexTable).NumBytes;
  FVar13.Value = (this->GPUIDToIndexTable).ClassName.ComparisonIndex.Value;
  uVar8 = *(undefined8 *)&(this->GPUIDToIndexTable).ClassName.Number;
  uVar9 = *(undefined8 *)&(this->GPUIDToIndexTable).OwnerName.Number;
  (this->GPUIDToIndexTable).Buffer.Reference = (param_1->GPUIDToIndexTable).Buffer.Reference;
  (this->GPUIDToIndexTable).UAV.Reference = pFVar4;
  uVar3 = (param_1->GPUIDToIndexTable).NumBytes;
  FVar11.Value = (param_1->GPUIDToIndexTable).ClassName.ComparisonIndex.Value;
  (this->GPUIDToIndexTable).SRV.Reference = (param_1->GPUIDToIndexTable).SRV.Reference;
  (this->GPUIDToIndexTable).NumBytes = uVar3;
  (this->GPUIDToIndexTable).ClassName.ComparisonIndex = (FNameEntryId)FVar11.Value;
  uVar10 = *(undefined8 *)&(param_1->GPUIDToIndexTable).OwnerName.Number;
  *(undefined8 *)&(this->GPUIDToIndexTable).ClassName.Number =
       *(undefined8 *)&(param_1->GPUIDToIndexTable).ClassName.Number;
  *(undefined8 *)&(this->GPUIDToIndexTable).OwnerName.Number = uVar10;
  (param_1->GPUIDToIndexTable).Buffer.Reference = pFVar5;
  (param_1->GPUIDToIndexTable).UAV.Reference = pFVar6;
  (param_1->GPUIDToIndexTable).SRV.Reference = pFVar7;
  (param_1->GPUIDToIndexTable).NumBytes = uVar12;
  (param_1->GPUIDToIndexTable).ClassName.ComparisonIndex = (FNameEntryId)FVar13.Value;
  *(undefined8 *)&(param_1->GPUIDToIndexTable).ClassName.Number = uVar8;
  *(undefined8 *)&(param_1->GPUIDToIndexTable).OwnerName.Number = uVar9;
  pFVar4 = (param_1->GPUBufferHalf).UAV.Reference;
  pFVar5 = (this->GPUBufferHalf).Buffer.Reference;
  pFVar6 = (this->GPUBufferHalf).UAV.Reference;
  pFVar7 = (this->GPUBufferHalf).SRV.Reference;
  uVar12 = (this->GPUBufferHalf).NumBytes;
  FVar13.Value = (this->GPUBufferHalf).ClassName.ComparisonIndex.Value;
  uVar8 = *(undefined8 *)&(this->GPUBufferHalf).ClassName.Number;
  uVar9 = *(undefined8 *)&(this->GPUBufferHalf).OwnerName.Number;
  (this->GPUBufferHalf).Buffer.Reference = (param_1->GPUBufferHalf).Buffer.Reference;
  (this->GPUBufferHalf).UAV.Reference = pFVar4;
  uVar3 = (param_1->GPUBufferHalf).NumBytes;
  FVar11.Value = (param_1->GPUBufferHalf).ClassName.ComparisonIndex.Value;
  (this->GPUBufferHalf).SRV.Reference = (param_1->GPUBufferHalf).SRV.Reference;
  (this->GPUBufferHalf).NumBytes = uVar3;
  (this->GPUBufferHalf).ClassName.ComparisonIndex = (FNameEntryId)FVar11.Value;
  uVar10 = *(undefined8 *)&(param_1->GPUBufferHalf).OwnerName.Number;
  *(undefined8 *)&(this->GPUBufferHalf).ClassName.Number =
       *(undefined8 *)&(param_1->GPUBufferHalf).ClassName.Number;
  *(undefined8 *)&(this->GPUBufferHalf).OwnerName.Number = uVar10;
  (param_1->GPUBufferHalf).Buffer.Reference = pFVar5;
  (param_1->GPUBufferHalf).UAV.Reference = pFVar6;
  (param_1->GPUBufferHalf).SRV.Reference = pFVar7;
  (param_1->GPUBufferHalf).NumBytes = uVar12;
  (param_1->GPUBufferHalf).ClassName.ComparisonIndex = (FNameEntryId)FVar13.Value;
  *(undefined8 *)&(param_1->GPUBufferHalf).ClassName.Number = uVar8;
  *(undefined8 *)&(param_1->GPUBufferHalf).OwnerName.Number = uVar9;
  uVar3 = this->NumInstances;
  this->NumInstances = param_1->NumInstances;
  param_1->NumInstances = uVar3;
  uVar3 = this->NumInstancesAllocated;
  this->NumInstancesAllocated = param_1->NumInstancesAllocated;
  param_1->NumInstancesAllocated = uVar3;
  uVar3 = this->FloatStride;
  this->FloatStride = param_1->FloatStride;
  param_1->FloatStride = uVar3;
  uVar3 = this->Int32Stride;
  this->Int32Stride = param_1->Int32Stride;
  param_1->Int32Stride = uVar3;
  uVar3 = this->HalfStride;
  this->HalfStride = param_1->HalfStride;
  param_1->HalfStride = uVar3;
  uVar3 = this->NumSpawnedInstances;
  this->NumSpawnedInstances = param_1->NumSpawnedInstances;
  param_1->NumSpawnedInstances = uVar3;
  uVar3 = this->IDAcquireTag;
  this->IDAcquireTag = param_1->IDAcquireTag;
  param_1->IDAcquireTag = uVar3;
  return;
}

// SwapInstances @ 14924f800

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FNiagaraDataBuffer::SwapInstances(FNiagaraDataBuffer *this,uint param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined2 uVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  
  uVar12 = 0;
  uVar14 = (ulonglong)param_2;
  uVar13 = (ulonglong)param_1;
  uVar6 = ((this->Owner->CompiledData).StructPtr)->TotalFloatComponents;
  if (3 < uVar6) {
    iVar11 = 2;
    do {
      pFVar7 = (this->FloatData).AllocatorInstance.Data;
      uVar9 = (ulonglong)(uVar12 * this->FloatStride);
      uVar12 = uVar12 + 4;
      lVar2 = uVar9 + uVar14 * 4;
      uVar4 = *(undefined4 *)(pFVar7 + lVar2);
      lVar3 = uVar9 + uVar13 * 4;
      *(undefined4 *)(pFVar7 + lVar2) = *(undefined4 *)(pFVar7 + lVar3);
      *(undefined4 *)(pFVar7 + lVar3) = uVar4;
      uVar9 = (ulonglong)((iVar11 + -1) * this->FloatStride);
      pFVar7 = (this->FloatData).AllocatorInstance.Data;
      lVar2 = uVar9 + uVar14 * 4;
      uVar4 = *(undefined4 *)(pFVar7 + lVar2);
      lVar3 = uVar9 + uVar13 * 4;
      *(undefined4 *)(pFVar7 + lVar2) = *(undefined4 *)(pFVar7 + lVar3);
      *(undefined4 *)(pFVar7 + lVar3) = uVar4;
      uVar9 = (ulonglong)(iVar11 * this->FloatStride);
      pFVar7 = (this->FloatData).AllocatorInstance.Data;
      lVar2 = uVar9 + uVar14 * 4;
      uVar4 = *(undefined4 *)(pFVar7 + lVar2);
      lVar3 = uVar9 + uVar13 * 4;
      *(undefined4 *)(pFVar7 + lVar2) = *(undefined4 *)(pFVar7 + lVar3);
      iVar1 = iVar11 + 1;
      *(undefined4 *)(pFVar7 + lVar3) = uVar4;
      iVar11 = iVar11 + 4;
      uVar9 = (ulonglong)(iVar1 * this->FloatStride);
      pFVar7 = (this->FloatData).AllocatorInstance.Data;
      lVar2 = uVar9 + uVar14 * 4;
      uVar4 = *(undefined4 *)(pFVar7 + lVar2);
      lVar3 = uVar9 + uVar13 * 4;
      *(undefined4 *)(pFVar7 + lVar2) = *(undefined4 *)(pFVar7 + lVar3);
      *(undefined4 *)(pFVar7 + lVar3) = uVar4;
    } while (uVar12 < uVar6 - 3);
  }
  uVar10 = 0;
  for (; uVar12 < uVar6; uVar12 = uVar12 + 1) {
    pFVar7 = (this->FloatData).AllocatorInstance.Data;
    uVar9 = (ulonglong)(uVar12 * this->FloatStride);
    lVar2 = uVar9 + uVar14 * 4;
    uVar4 = *(undefined4 *)(pFVar7 + lVar2);
    lVar3 = uVar9 + uVar13 * 4;
    *(undefined4 *)(pFVar7 + lVar2) = *(undefined4 *)(pFVar7 + lVar3);
    *(undefined4 *)(pFVar7 + lVar3) = uVar4;
  }
  uVar12 = 0;
  uVar6 = ((this->Owner->CompiledData).StructPtr)->TotalInt32Components;
  if (uVar6 != 0) {
    do {
      pFVar7 = (this->Int32Data).AllocatorInstance.Data;
      uVar8 = uVar12 * this->Int32Stride;
      uVar12 = uVar12 + 1;
      uVar4 = *(undefined4 *)(pFVar7 + uVar14 * 4 + (ulonglong)uVar8);
      *(undefined4 *)(pFVar7 + uVar14 * 4 + (ulonglong)uVar8) =
           *(undefined4 *)(pFVar7 + uVar13 * 4 + (ulonglong)uVar8);
      *(undefined4 *)(pFVar7 + uVar13 * 4 + (ulonglong)uVar8) = uVar4;
    } while (uVar12 < uVar6);
  }
  uVar6 = ((this->Owner->CompiledData).StructPtr)->TotalHalfComponents;
  if (uVar6 != 0) {
    do {
      pFVar7 = (this->HalfData).AllocatorInstance.Data;
      uVar9 = (ulonglong)(uVar10 * this->HalfStride);
      uVar10 = uVar10 + 1;
      lVar2 = uVar9 + uVar14 * 2;
      uVar5 = *(undefined2 *)(pFVar7 + lVar2);
      lVar3 = uVar9 + uVar13 * 2;
      *(undefined2 *)(pFVar7 + lVar2) = *(undefined2 *)(pFVar7 + lVar3);
      *(undefined2 *)(pFVar7 + lVar3) = uVar5;
    } while (uVar10 < uVar6);
  }
  return;
}

// TransferGPUToCPUImmediate @ 149251310

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FNiagaraDataBuffer::TransferGPUToCPUImmediate
          (FNiagaraDataBuffer *this,FRHICommandListImmediate *param_1,
          FNiagaraGpuComputeDispatchInterface *param_2,FNiagaraDataBuffer *param_3)

{
  uint uVar1;
  uint uVar2;
  FNiagaraDataSet *pFVar3;
  FNiagaraDataSetCompiledData *this_00;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  ERHIAccess EVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  FRHITransitionInfo *pFVar11;
  longlong lVar12;
  FRHIStagingBuffer *this_01;
  FRHIStagingBuffer *pFVar13;
  FRHIStagingBuffer *this_02;
  FRHIStagingBuffer *pFVar14;
  int iVar15;
  int iVar16;
  undefined4 uVar17;
  undefined4 uStack_27c;
  FRHIStagingBuffer *local_270;
  FRHIStagingBuffer *local_268;
  FRHIStagingBuffer *local_260;
  FRHIStagingBuffer *local_258;
  FRHIStagingBuffer *local_250;
  FRHIStagingBuffer *local_248;
  FRHIStagingBuffer *local_240;
  TArrayView<FRHITransitionInfo_const_,int> local_238;
  FRHITransitionInfo local_228;
  FRHITransitionInfo local_1f8;
  FRHITransitionInfo local_1c8;
  FRHITransitionInfo local_198;
  FRHITransitionInfo local_168;
  FRHITransitionInfo local_138;
  FRHITransitionInfo local_108;
  FRHITransitionInfo local_d8;
  TArrayView<FRHITransitionInfo_const_,int> local_a8;
  TArrayView<FRHITransitionInfo_const_,int> local_98;
  TArrayView<FRHITransitionInfo_const_,int> local_88;
  TArrayView<FRHITransitionInfo_const_,int> local_78;
  TArrayView<FRHITransitionInfo_const_,int> local_68;
  TArrayView<FRHITransitionInfo_const_,int> local_58;
  TArrayView<FRHITransitionInfo_const_,int> local_48;
  
  pFVar3 = this->Owner;
  if (((pFVar3->CompiledData).StructPtr == (FNiagaraDataSetCompiledData *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("CompiledData.Get() != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                         ,0x169,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  this_00 = (pFVar3->CompiledData).StructPtr;
  pFVar3 = param_3->Owner;
  if (((pFVar3->CompiledData).StructPtr == (FNiagaraDataSetCompiledData *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("CompiledData.Get() != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                         ,0x169,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar8 = FNiagaraDataSetCompiledData::GetLayoutHash((pFVar3->CompiledData).StructPtr);
  uVar9 = FNiagaraDataSetCompiledData::GetLayoutHash(this_00);
  if ((uVar9 != uVar8) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("GetOwner()->GetCompiledData().GetLayoutHash() == CPUBuffer->GetOwner()->GetCompiledData().GetLayoutHash()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataSet.cpp"
                         ,0x5e4,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (this->GPUInstanceCountBufferOffset == 0xffffffff) {
    Allocate(param_3,0,false);
    param_3->NumInstances = 0;
    return;
  }
  (**(code **)(GDynamicRHI->_padding_ + 0xe0))(GDynamicRHI,&local_240);
  bVar7 = IsInParallelRenderingThread();
  if ((!bVar7) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInParallelRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraGpuComputeDispatchInterface.h"
                         ,0x6a,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  EVar6 = FNiagaraGPUInstanceCountManager::kCountBufferDefaultState;
  if (((param_2->GPUInstanceCounterManager).AllocatedInstanceCounts <
       (param_2->GPUInstanceCounterManager).UsedInstanceCounts) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("UsedInstanceCounts <= AllocatedInstanceCounts",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraGPUInstanceCountManager.h"
                         ,0x44,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_228.field1_0x8 =
       (FRHITransitionInfo_u_8)(param_2->GPUInstanceCounterManager).CountBuffer.Buffer.Reference;
  local_238.DataPtr = &local_228;
  local_238._12_4_ = uStack_27c;
  local_238.ArrayNum = 1;
  local_228._padding_._0_4_ = 0xffffffff;
  local_228._padding_._4_2_ = 0xffff;
  local_228.Type = Buffer;
  local_228.AccessBefore = EVar6;
  local_228.AccessAfter = CopySrc;
  local_228.Flags = None;
  local_228.CommitInfo.bIsSet = false;
  FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_238,None);
  pFVar13 = local_240;
  uVar8 = this->GPUInstanceCountBufferOffset;
  if (((param_2->GPUInstanceCounterManager).AllocatedInstanceCounts <
       (param_2->GPUInstanceCounterManager).UsedInstanceCounts) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("UsedInstanceCounts <= AllocatedInstanceCounts",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraGPUInstanceCountManager.h"
                         ,0x44,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FRHIComputeCommandList::CopyToStagingBuffer
            ((FRHIComputeCommandList *)param_1,
             (param_2->GPUInstanceCounterManager).CountBuffer.Buffer.Reference,pFVar13,uVar8 << 2,4)
  ;
  local_1f8.AccessAfter = FNiagaraGPUInstanceCountManager::kCountBufferDefaultState;
  if (((param_2->GPUInstanceCounterManager).AllocatedInstanceCounts <
       (param_2->GPUInstanceCounterManager).UsedInstanceCounts) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("UsedInstanceCounts <= AllocatedInstanceCounts",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraGPUInstanceCountManager.h"
                         ,0x44,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_1f8.field1_0x8 =
       (FRHITransitionInfo_u_8)(param_2->GPUInstanceCounterManager).CountBuffer.Buffer.Reference;
  pFVar11 = &local_1f8;
  uVar17 = 1;
  local_a8._12_4_ = uStack_27c;
  local_a8.ArrayNum = 1;
  local_1f8._padding_._0_4_ = 0xffffffff;
  local_1f8._padding_._4_2_ = 0xffff;
  local_1f8.Type = Buffer;
  local_1f8.AccessBefore = CopySrc;
  local_1f8.Flags = None;
  local_1f8.CommitInfo.bIsSet = false;
  local_a8.DataPtr = pFVar11;
  FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_a8,None);
  pFVar14 = (FRHIStagingBuffer *)0x0;
  local_248 = (FRHIStagingBuffer *)0x0;
  pFVar13 = pFVar14;
  if ((this->GPUBufferFloat).NumBytes != 0) {
    (**(code **)(GDynamicRHI->_padding_ + 0xe0))(GDynamicRHI,&local_260);
    pFVar13 = local_260;
    local_1c8.field1_0x8 = (FRHITransitionInfo_u_8)(this->GPUBufferFloat).Buffer.Reference;
    local_98.DataPtr = &local_1c8;
    local_98._12_4_ = uStack_27c;
    local_98.ArrayNum = 1;
    local_248 = local_260;
    local_260 = (FRHIStagingBuffer *)0x0;
    local_1c8._padding_._0_4_ = 0xffffffff;
    local_1c8._padding_._4_2_ = 0xffff;
    local_1c8.Type = Buffer;
    local_1c8.AccessBefore = SRVMask;
    local_1c8.AccessAfter = CopySrc;
    local_1c8.Flags = None;
    local_1c8.CommitInfo.bIsSet = false;
    FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_98,None);
    FRHIComputeCommandList::CopyToStagingBuffer
              ((FRHIComputeCommandList *)param_1,(this->GPUBufferFloat).Buffer.Reference,pFVar13,0,
               (this->GPUBufferFloat).NumBytes);
    local_198.field1_0x8 = (FRHITransitionInfo_u_8)(this->GPUBufferFloat).Buffer.Reference;
    pFVar11 = &local_198;
    uVar17 = 1;
    local_88._12_4_ = uStack_27c;
    local_88.ArrayNum = 1;
    local_198._padding_._0_4_ = 0xffffffff;
    local_198._padding_._4_2_ = 0xffff;
    local_198.Type = Buffer;
    local_198.AccessBefore = CopySrc;
    local_198.AccessAfter = SRVMask;
    local_198.Flags = None;
    local_198.CommitInfo.bIsSet = false;
    local_88.DataPtr = pFVar11;
    FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_88,None);
  }
  local_250 = (FRHIStagingBuffer *)0x0;
  this_02 = pFVar14;
  if ((this->GPUBufferHalf).NumBytes != 0) {
    (**(code **)(GDynamicRHI->_padding_ + 0xe0))(GDynamicRHI,&local_268);
    this_02 = local_268;
    local_168.field1_0x8 = (FRHITransitionInfo_u_8)(this->GPUBufferHalf).Buffer.Reference;
    local_78.DataPtr = &local_168;
    local_78._12_4_ = uStack_27c;
    local_78.ArrayNum = 1;
    local_250 = local_268;
    local_268 = (FRHIStagingBuffer *)0x0;
    local_168._padding_._0_4_ = 0xffffffff;
    local_168._padding_._4_2_ = 0xffff;
    local_168.Type = Buffer;
    local_168.AccessBefore = SRVMask;
    local_168.AccessAfter = CopySrc;
    local_168.Flags = None;
    local_168.CommitInfo.bIsSet = false;
    FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_78,None);
    FRHIComputeCommandList::CopyToStagingBuffer
              ((FRHIComputeCommandList *)param_1,(this->GPUBufferHalf).Buffer.Reference,this_02,0,
               (this->GPUBufferHalf).NumBytes);
    local_138.field1_0x8 = (FRHITransitionInfo_u_8)(this->GPUBufferHalf).Buffer.Reference;
    pFVar11 = &local_138;
    uVar17 = 1;
    local_68._12_4_ = uStack_27c;
    local_68.ArrayNum = 1;
    local_138._padding_._0_4_ = 0xffffffff;
    local_138._padding_._4_2_ = 0xffff;
    local_138.Type = Buffer;
    local_138.AccessBefore = CopySrc;
    local_138.AccessAfter = SRVMask;
    local_138.Flags = None;
    local_138.CommitInfo.bIsSet = false;
    local_68.DataPtr = pFVar11;
    FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_68,None);
  }
  local_258 = (FRHIStagingBuffer *)0x0;
  this_01 = pFVar14;
  if ((this->GPUBufferInt).NumBytes != 0) {
    (**(code **)(GDynamicRHI->_padding_ + 0xe0))(GDynamicRHI,&local_270);
    this_01 = local_270;
    local_108._padding_._4_2_ = 0xffff;
    local_108.field1_0x8 = (FRHITransitionInfo_u_8)(this->GPUBufferInt).Buffer.Reference;
    local_58.DataPtr = &local_108;
    local_58._12_4_ = uStack_27c;
    local_58.ArrayNum = 1;
    local_258 = local_270;
    local_270 = (FRHIStagingBuffer *)0x0;
    local_108._padding_._0_4_ = 0xffffffff;
    local_108.Type = Buffer;
    local_108.AccessBefore = SRVMask;
    local_108.AccessAfter = CopySrc;
    local_108.Flags = None;
    local_108.CommitInfo.bIsSet = false;
    FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_58,None);
    FRHIComputeCommandList::CopyToStagingBuffer
              ((FRHIComputeCommandList *)param_1,(this->GPUBufferInt).Buffer.Reference,this_01,0,
               (this->GPUBufferInt).NumBytes);
    uVar17 = 1;
    local_d8._padding_._4_2_ = 0xffff;
    local_d8.field1_0x8 = (FRHITransitionInfo_u_8)(this->GPUBufferInt).Buffer.Reference;
    pFVar11 = &local_d8;
    local_d8._padding_._0_4_ = 0xffffffff;
    local_48._12_4_ = uStack_27c;
    local_48.ArrayNum = 1;
    local_d8.Type = Buffer;
    local_d8.AccessBefore = CopySrc;
    local_d8.AccessAfter = SRVMask;
    local_d8.Flags = None;
    local_d8.CommitInfo.bIsSet = false;
    local_48.DataPtr = pFVar11;
    FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_48,None);
  }
  FRHICommandListImmediate::SubmitAndBlockUntilGPUIdle(param_1);
  FRHICommandListImmediate::SubmitAndBlockUntilGPUIdle(param_1);
  puVar10 = (uint *)(**(code **)(GDynamicRHI->_padding_ + 0xf8))
                              (GDynamicRHI,0x154be5ed0,local_240,0,0,4,pFVar11,uVar17);
  uVar8 = *puVar10;
  (**(code **)(GDynamicRHI->_padding_ + 0x100))(GDynamicRHI,0x154be5ed0);
  Allocate(param_3,uVar8,false);
  if ((param_3->NumInstancesAllocated < uVar8) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InNumInstances <= NumInstancesAllocated",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                         ,0x9c,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  param_3->NumInstances = uVar8;
  if (uVar8 == 0) {
    if (this_01 == (FRHIStagingBuffer *)0x0) goto LAB_149251ceb;
  }
  else {
    if (pFVar13 != (FRHIStagingBuffer *)0x0) {
      local_268 = (FRHIStagingBuffer *)CONCAT44(local_268._4_4_,this->FloatStride);
      pFVar11 = (FRHITransitionInfo *)
                (**(code **)(GDynamicRHI->_padding_ + 0xf8))
                          (GDynamicRHI,0x154be5ed0,pFVar13,0,0,(this->GPUBufferFloat).NumBytes);
      pFVar4 = (param_3->FloatData).AllocatorInstance.Data;
      uVar9 = param_3->FloatStride;
      local_260 = (FRHIStagingBuffer *)CONCAT44(local_260._4_4_,uVar9);
      uVar1 = ((param_3->Owner->CompiledData).StructPtr)->TotalFloatComponents;
      local_238.DataPtr = pFVar11;
      if (0 < (int)uVar1) {
        iVar16 = (int)local_268;
        do {
          iVar15 = (int)pFVar14;
          memcpy(pFVar4 + iVar15 * uVar9,
                 (void *)((longlong)&pFVar11->_padding_ + (ulonglong)(uint)(iVar15 * iVar16)),
                 (ulonglong)uVar8 << 2);
          pFVar14 = (FRHIStagingBuffer *)(ulonglong)(iVar15 + 1U);
          this_01 = local_258;
          pFVar13 = local_248;
          this_02 = local_250;
        } while ((int)(iVar15 + 1U) < (int)uVar1);
      }
      (**(code **)(GDynamicRHI->_padding_ + 0x100))(GDynamicRHI,0x154be5ed0,pFVar13);
    }
    if (this_02 != (FRHIStagingBuffer *)0x0) {
      local_268 = (FRHIStagingBuffer *)CONCAT44(local_268._4_4_,this->HalfStride);
      lVar12 = (**(code **)(GDynamicRHI->_padding_ + 0xf8))
                         (GDynamicRHI,0x154be5ed0,this_02,0,0,(this->GPUBufferHalf).NumBytes);
      pFVar11 = (FRHITransitionInfo *)(param_3->HalfData).AllocatorInstance.Data;
      iVar16 = 0;
      uVar9 = param_3->HalfStride;
      local_270 = (FRHIStagingBuffer *)CONCAT44(local_270._4_4_,uVar9);
      uVar1 = ((param_3->Owner->CompiledData).StructPtr)->TotalHalfComponents;
      local_238.DataPtr = pFVar11;
      if (0 < (int)uVar1) {
        iVar15 = (int)local_268;
        do {
          memcpy((void *)((longlong)&pFVar11->_padding_ + (ulonglong)(iVar16 * uVar9)),
                 (void *)((ulonglong)(uint)(iVar16 * iVar15) + lVar12),(ulonglong)uVar8 * 2);
          iVar16 = iVar16 + 1;
          this_01 = local_258;
          pFVar13 = local_248;
          this_02 = local_250;
        } while (iVar16 < (int)uVar1);
      }
      (**(code **)(GDynamicRHI->_padding_ + 0x100))(GDynamicRHI,0x154be5ed0,this_02);
    }
    iVar16 = 0;
    if (this_01 == (FRHIStagingBuffer *)0x0) goto LAB_149251ceb;
    uVar9 = this->Int32Stride;
    lVar12 = (**(code **)(GDynamicRHI->_padding_ + 0xf8))
                       (GDynamicRHI,0x154be5ed0,this_01,0,0,(this->GPUBufferInt).NumBytes);
    pFVar11 = (FRHITransitionInfo *)(param_3->Int32Data).AllocatorInstance.Data;
    uVar1 = param_3->Int32Stride;
    uVar2 = ((param_3->Owner->CompiledData).StructPtr)->TotalInt32Components;
    local_238.DataPtr = pFVar11;
    if (0 < (int)uVar2) {
      do {
        memcpy((void *)((longlong)&pFVar11->_padding_ + (ulonglong)(iVar16 * uVar1)),
               (void *)((ulonglong)(iVar16 * uVar9) + lVar12),(ulonglong)uVar8 << 2);
        iVar16 = iVar16 + 1;
        this_01 = local_258;
        pFVar13 = local_248;
        this_02 = local_250;
      } while (iVar16 < (int)uVar2);
    }
    (**(code **)(GDynamicRHI->_padding_ + 0x100))(GDynamicRHI,0x154be5ed0,this_01);
  }
  FRHIResource::Release((FRHIResource *)this_01);
LAB_149251ceb:
  if (this_02 != (FRHIStagingBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)this_02);
  }
  if (pFVar13 != (FRHIStagingBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar13);
  }
  if (local_240 != (FRHIStagingBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)local_240);
  }
  return;
}

// TransferInstance @ 149251d40

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
FNiagaraDataBuffer::TransferInstance
          (FNiagaraDataBuffer *this,FNiagaraDataBuffer *param_1,int param_2,bool param_3)

{
  longlong lVar1;
  uint uVar2;
  code *pcVar3;
  ulonglong uVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  longlong lVar11;
  
  uVar4 = (ulonglong)(uint)param_2;
  if (param_1->NumInstances <= (uint)param_2) {
    return -1;
  }
  uVar2 = this->NumInstances;
  uVar9 = (ulonglong)uVar2;
  if (uVar2 == this->NumInstancesAllocated) {
    Allocate(this,this->NumInstancesAllocated + 1,true);
  }
  if ((this->NumInstancesAllocated < uVar2 + 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InNumInstances <= NumInstancesAllocated",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                         ,0x9c,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    iVar6 = (*pcVar3)();
    return iVar6;
  }
  this->NumInstances = uVar2 + 1;
  uVar8 = ((this->Owner->CompiledData).StructPtr)->TotalFloatComponents;
  iVar6 = uVar8 - 1;
  if (-1 < iVar6) {
    if (3 < (int)uVar8) {
      lVar1 = uVar9 * 4;
      lVar11 = uVar4 * 4;
      do {
        *(undefined4 *)
         ((this->FloatData).AllocatorInstance.Data + (ulonglong)(iVar6 * this->FloatStride) + lVar1)
             = *(undefined4 *)
                ((param_1->FloatData).AllocatorInstance.Data +
                (ulonglong)(iVar6 * param_1->FloatStride) + lVar11);
        *(undefined4 *)
         ((this->FloatData).AllocatorInstance.Data +
         (ulonglong)((iVar6 + -1) * this->FloatStride) + lVar1) =
             *(undefined4 *)
              ((param_1->FloatData).AllocatorInstance.Data +
              (ulonglong)((iVar6 + -1) * param_1->FloatStride) + lVar11);
        *(undefined4 *)
         ((this->FloatData).AllocatorInstance.Data +
         (ulonglong)((iVar6 + -2) * this->FloatStride) + lVar1) =
             *(undefined4 *)
              ((param_1->FloatData).AllocatorInstance.Data +
              (ulonglong)((iVar6 + -2) * param_1->FloatStride) + lVar11);
        iVar7 = iVar6 + -3;
        iVar6 = iVar6 + -4;
        *(undefined4 *)
         ((this->FloatData).AllocatorInstance.Data + (ulonglong)(iVar7 * this->FloatStride) + lVar1)
             = *(undefined4 *)
                ((param_1->FloatData).AllocatorInstance.Data +
                (ulonglong)(iVar7 * param_1->FloatStride) + lVar11);
      } while (2 < iVar6);
    }
    if (-1 < iVar6) {
      do {
        uVar10 = iVar6 * param_1->FloatStride;
        uVar8 = iVar6 * this->FloatStride;
        iVar6 = iVar6 + -1;
        *(undefined4 *)((this->FloatData).AllocatorInstance.Data + (ulonglong)uVar8 + uVar9 * 4) =
             *(undefined4 *)
              ((param_1->FloatData).AllocatorInstance.Data + (ulonglong)uVar10 + uVar4 * 4);
      } while (-1 < iVar6);
    }
  }
  iVar6 = ((this->Owner->CompiledData).StructPtr)->TotalInt32Components - 1;
  if (-1 < iVar6) {
    do {
      uVar10 = iVar6 * param_1->Int32Stride;
      uVar8 = iVar6 * this->Int32Stride;
      iVar6 = iVar6 + -1;
      *(undefined4 *)((this->Int32Data).AllocatorInstance.Data + uVar9 * 4 + (ulonglong)uVar8) =
           *(undefined4 *)
            ((param_1->Int32Data).AllocatorInstance.Data + (ulonglong)uVar10 + uVar4 * 4);
    } while (-1 < iVar6);
  }
  if (param_3) {
    KillInstance(param_1,param_2);
  }
  return uVar2;
}

// ZeroCPUBuffers @ 149255ff0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FNiagaraDataBuffer::ZeroCPUBuffers(FNiagaraDataBuffer *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->FloatData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    memset(pFVar1,0,(longlong)(this->FloatData).ArrayNum);
  }
  pFVar1 = (this->Int32Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    memset(pFVar1,0,(longlong)(this->Int32Data).ArrayNum);
  }
  pFVar1 = (this->HalfData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    memset(pFVar1,0,(longlong)(this->HalfData).ArrayNum);
    return;
  }
  return;
}

// operator() @ 15053bc20

bool __thiscall `FNiagaraDataBuffer::UnlockForRead'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<5041675397956108386>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5041675397956108386>,
                       &`public:___cdecl_`public:_class_TRefCountPtr<FNiagaraDataBuffer>___cdecl_FNiagaraDataBuffer::UnlockForRead(void)___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

