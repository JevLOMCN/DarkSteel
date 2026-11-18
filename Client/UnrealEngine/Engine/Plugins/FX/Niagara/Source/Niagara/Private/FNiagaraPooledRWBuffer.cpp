// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 7

// EndGraphUsage @ 14939fa70

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall FNiagaraPooledRWBuffer::EndGraphUsage(FNiagaraPooledRWBuffer *this)

{
  this->TransientRDGBuffer = (FRDGBuffer *)0x0;
  this->TransientRDGSRV = (FRDGBufferSRV *)0x0;
  this->TransientRDGUAV = (FRDGBufferUAV *)0x0;
  return;
}

// GetOrCreateBuffer @ 1493a67d0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGBuffer * __thiscall
FNiagaraPooledRWBuffer::GetOrCreateBuffer(FNiagaraPooledRWBuffer *this,FRDGBuilder *param_1)

{
  code *pcVar1;
  bool bVar2;
  FRDGBuffer *pFVar3;
  
  if ((this->Buffer).Reference == (FRDGPooledBuffer *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraRenderGraphUtils.cpp"
                       ,0x2b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FRDGBuffer *)(*pcVar1)();
      return pFVar3;
    }
  }
  if (this->TransientRDGBuffer == (FRDGBuffer *)0x0) {
    pFVar3 = FRDGBuilder::RegisterExternalBuffer(param_1,&this->Buffer,None);
    this->TransientRDGBuffer = pFVar3;
    return pFVar3;
  }
  pFVar3 = FRDGBuilder::FindExternalBuffer(param_1,(this->Buffer).Reference);
  if (pFVar3 == (FRDGBuffer *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GraphBuilder.FindExternalBuffer(Buffer) != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraRenderGraphUtils.cpp"
                       ,0x32,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FRDGBuffer *)(*pcVar1)();
      return pFVar3;
    }
  }
  return this->TransientRDGBuffer;
}

// GetOrCreateSRV @ 1493a6880

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGBufferSRV * __thiscall
FNiagaraPooledRWBuffer::GetOrCreateSRV(FNiagaraPooledRWBuffer *this,FRDGBuilder *param_1)

{
  int *piVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FRDGBufferSRV *pFVar6;
  FRDGBuffer *pFVar7;
  FRDGBufferSRVDesc local_28;
  
  if ((this->Buffer).Reference == (FRDGPooledBuffer *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraRenderGraphUtils.cpp"
                       ,0x39,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FRDGBufferSRV *)(*pcVar3)();
      return pFVar6;
    }
  }
  if (this->TransientRDGSRV == (FRDGBufferSRV *)0x0) {
    local_28._padding_._0_4_ = CONCAT31(local_28._padding_._1_3_,this->PixelFormat);
    local_28._padding_._4_4_ = 0;
    local_28._padding_._0_4_ = 0xffffffff;
    local_28._padding_ = 0;
    local_28.Buffer = GetOrCreateBuffer(this,param_1);
    FRDGUserValidation::ValidateCreateSRV(&param_1->UserValidation,&local_28);
    pFVar7 = local_28.Buffer;
    pFVar6 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x50,8);
    lVar2 = pFVar7->_padding_;
    piVar1 = &(param_1->Views).Array.ArrayMax;
    *(byte *)&pFVar6->_padding_ = (byte)pFVar6->_padding_ & 0xfe;
    *(undefined8 *)((longlong)&pFVar6->_padding_ + 4) = 0xffffffffffffffff;
    pFVar6->_padding_ = lVar2;
    pFVar6->_padding_ = 0;
    *(undefined1 *)&pFVar6->_padding_ = 3;
    pFVar6->_padding_ = (longlong)&___7FRDGBufferSRV__6B_;
    (pFVar6->Desc)._padding_ = CONCAT44(local_28._padding_._4_4_,(undefined4)local_28._padding_);
    (pFVar6->Desc)._padding_ = CONCAT44(local_28._padding_._4_4_,(undefined4)local_28._padding_);
    (pFVar6->Desc)._padding_ = local_28._padding_;
    (pFVar6->Desc).Buffer = local_28.Buffer;
    iVar5 = (param_1->Views).Array.ArrayNum;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGView_*>_>
                        (0x808,(ForElementType<FRDGView_*> *)&param_1->Views,piVar1);
    }
    (param_1->Views).Array.ArrayNum = iVar5 + 1;
    (param_1->Views).Array.AllocatorInstance.Data[iVar5] = (FRDGView *)pFVar6;
    *(int *)((longlong)&pFVar6->_padding_ + 4) = (param_1->Views).Array.ArrayNum + -1;
    FRDGUserValidation::ValidateCreateSRV(&param_1->UserValidation,pFVar6);
    this->TransientRDGSRV = pFVar6;
    return pFVar6;
  }
  pFVar7 = FRDGBuilder::FindExternalBuffer(param_1,(this->Buffer).Reference);
  if (pFVar7 == (FRDGBuffer *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("GraphBuilder.FindExternalBuffer(Buffer) != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraRenderGraphUtils.cpp"
                       ,0x40,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FRDGBufferSRV *)(*pcVar3)();
      return pFVar6;
    }
  }
  return this->TransientRDGSRV;
}

// GetOrCreateUAV @ 1493a6cd0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGBufferUAV * __thiscall
FNiagaraPooledRWBuffer::GetOrCreateUAV(FNiagaraPooledRWBuffer *this,FRDGBuilder *param_1)

{
  int *piVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FRDGBufferUAV *pFVar6;
  FRDGBuffer *pFVar7;
  FRDGBufferUAVDesc local_18;
  
  if ((this->Buffer).Reference == (FRDGPooledBuffer *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraRenderGraphUtils.cpp"
                       ,0x47,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FRDGBufferUAV *)(*pcVar3)();
      return pFVar6;
    }
  }
  if (this->TransientRDGUAV == (FRDGBufferUAV *)0x0) {
    local_18._padding_._0_1_ = this->PixelFormat;
    local_18._padding_._1_2_ = 0;
    local_18.Buffer = GetOrCreateBuffer(this,param_1);
    FRDGUserValidation::ValidateCreateUAV(&param_1->UserValidation,&local_18);
    pFVar7 = local_18.Buffer;
    pFVar6 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x48,8);
    lVar2 = pFVar7->_padding_;
    piVar1 = &(param_1->Views).Array.ArrayMax;
    *(byte *)&pFVar6->_padding_ = (byte)pFVar6->_padding_ & 0xfe;
    *(undefined8 *)((longlong)&pFVar6->_padding_ + 4) = 0xffffffffffffffff;
    pFVar6->_padding_ = lVar2;
    pFVar6->_padding_ = 0;
    *(undefined1 *)&pFVar6->_padding_ = 2;
    *(undefined1 *)&pFVar6->_padding_ = 0;
    pFVar6->_padding_ = (longlong)&___7FRDGBufferUAV__6B_;
    (pFVar6->Desc)._padding_ =
         CONCAT53(local_18._padding_._3_5_,
                  CONCAT21(local_18._padding_._1_2_,(EPixelFormat)local_18._padding_));
    (pFVar6->Desc).Buffer = local_18.Buffer;
    iVar5 = (param_1->Views).Array.ArrayNum;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGView_*>_>
                        (0x808,(ForElementType<FRDGView_*> *)&param_1->Views,piVar1);
    }
    (param_1->Views).Array.ArrayNum = iVar5 + 1;
    (param_1->Views).Array.AllocatorInstance.Data[iVar5] = (FRDGView *)pFVar6;
    *(int *)((longlong)&pFVar6->_padding_ + 4) = (param_1->Views).Array.ArrayNum + -1;
    FRDGUserValidation::ValidateCreateUAV(&param_1->UserValidation,pFVar6);
    this->TransientRDGUAV = pFVar6;
    return pFVar6;
  }
  pFVar7 = FRDGBuilder::FindExternalBuffer(param_1,(this->Buffer).Reference);
  if (pFVar7 == (FRDGBuffer *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("GraphBuilder.FindExternalBuffer(Buffer) != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraRenderGraphUtils.cpp"
                       ,0x4e,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FRDGBufferUAV *)(*pcVar3)();
      return pFVar6;
    }
  }
  return this->TransientRDGUAV;
}

// InitializeInternal @ 1493a9430

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FNiagaraPooledRWBuffer::InitializeInternal
          (FNiagaraPooledRWBuffer *this,FRDGBuilder *param_1,wchar_t *param_2,EPixelFormat param_3,
          FRDGBufferDesc *param_4)

{
  int *piVar1;
  longlong *plVar2;
  FRDGPooledBuffer *pFVar3;
  FRDGPooledBuffer *pFVar4;
  FRDGBufferDesc *pFVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  FRDGBuffer *pFVar9;
  TRefCountPtr<FRDGPooledBuffer> *pTVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<FStat_STAT_NiagaraGPUDataInterfaceMemory> FVar12;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uchar auVar13 [8];
  undefined1 local_48 [16];
  FShaderParametersMetadata *local_38;
  
  Release(this);
  pFVar5 = param_4;
  local_48._0_8_ = *(undefined8 *)param_4;
  local_48._8_4_ = param_4->Usage;
  local_48._12_4_ = *(int *)&param_4->field_0xc;
  local_38 = param_4->Metadata;
  FRDGUserValidation::ValidateCreateBuffer
            (&param_1->UserValidation,(FRDGBufferDesc *)local_48,param_2,None);
  uVar8 = local_48._0_4_;
  if (local_48._0_4_ == 0) {
    uVar8 = 1;
  }
  if (local_48._4_4_ == 0) {
    local_48._4_4_ = 1;
  }
  local_48._0_4_ = uVar8;
  pFVar9 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x130,8);
  pFVar9 = FRDGBuffer::FRDGBuffer(pFVar9,param_2,(FRDGBufferDesc *)local_48,None);
  piVar1 = &(param_1->Buffers).Array.ArrayMax;
  iVar7 = (param_1->Buffers).Array.ArrayNum;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGBuffer_*>_>
                      (0x808,(ForElementType<FRDGBuffer_*> *)&param_1->Buffers,piVar1);
  }
  (param_1->Buffers).Array.ArrayNum = iVar7 + 1;
  (param_1->Buffers).Array.AllocatorInstance.Data[iVar7] = pFVar9;
  (pFVar9->Handle).Index = (param_1->Buffers).Array.ArrayNum - 1;
  FRDGUserValidation::ValidateCreateBuffer(&param_1->UserValidation,pFVar9);
  FRDGTrace::AddResource(&param_1->Trace,(FRDGViewableResource *)pFVar9);
  this->TransientRDGBuffer = pFVar9;
  pTVar10 = FRDGBuilder::ConvertToExternalBuffer(param_1,pFVar9);
  pFVar3 = (this->Buffer).Reference;
  pFVar4 = pTVar10->Reference;
  if (pFVar3 != pFVar4) {
    (this->Buffer).Reference = pFVar4;
    if (pFVar4 != (FRDGPooledBuffer *)0x0) {
      LOCK();
      *(int *)&pFVar4->_padding_ = (int)pFVar4->_padding_ + 1;
      UNLOCK();
    }
    if (pFVar3 != (FRDGPooledBuffer *)0x0) {
      plVar2 = &pFVar3->_padding_;
      LOCK();
      lVar6 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if (((int)lVar6 == 1) && (plVar2 != (longlong *)0x0)) {
        (**(code **)pFVar3->_padding_)(pFVar3,1);
      }
    }
  }
  this->PixelFormat = param_3;
  uVar8 = pFVar5->NumElements * pFVar5->BytesPerElement;
  auVar13[4] = '\0';
  auVar13[5] = '\0';
  auVar13[6] = '\0';
  auVar13[7] = '\0';
  auVar13._0_4_ = uVar8;
  this->NumBytes = (ulong64)auVar13;
  if (uVar8 != 0) {
    FVar12 = StatPtr_STAT_NiagaraGPUDataInterfaceMemory;
    if (StatPtr_STAT_NiagaraGPUDataInterfaceMemory ==
        (FThreadSafeStaticStat<FStat_STAT_NiagaraGPUDataInterfaceMemory>)0x0) {
      pFVar11 = ::FName::FName((FName *)&param_4,"STAT_NiagaraGPUDataInterfaceMemory");
      FVar12 = (FThreadSafeStaticStat<FStat_STAT_NiagaraGPUDataInterfaceMemory>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraGPUDataInterfaceMemory,
                          *pFVar11,L"Niagara GPU data interface memory","STATGROUP_Niagara",
                          "STATCAT_Niagara",L"Niagara",true,false,ST_int64,false,false,MCR_Physical)
      ;
    }
    pFVar5 = *(FRDGBufferDesc **)FVar12;
    if (((pFVar5 != (FRDGBufferDesc *)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      param_4 = pFVar5;
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      local_48._8_8_ = (ulonglong)pFVar5 & 0xffffafffffffffff | 0xa00000000000;
      param_4 = pFVar5;
      local_48._0_8_ = auVar13;
      FThreadStats::AddStatMessage(this_00,(FStatMessage *)local_48);
      FStatsTrace::Add((FName *)&param_4,(long64)auVar13);
      if (this_00->ScopeCount == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// InitializeInternal @ 1493a9710

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FNiagaraPooledRWBuffer::InitializeInternal
          (FNiagaraPooledRWBuffer *this,FRDGBuilder *param_1,wchar_t *param_2,EPixelFormat param_3,
          uint param_4,uint param_5,EBufferUsageFlags param_6)

{
  undefined4 uStack_2c;
  FRDGBufferDesc local_20;
  
  local_20.NumElements = param_5;
  local_20.BytesPerElement = param_4;
  local_20._8_8_ = CONCAT44(uStack_2c,param_6) | 0x4109;
  local_20.Metadata = (FShaderParametersMetadata *)0x0;
  InitializeInternal(this,param_1,param_2,param_3,&local_20);
  return;
}

// Release @ 1493b4750

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FNiagaraPooledRWBuffer::Release(FNiagaraPooledRWBuffer *this)

{
  longlong *plVar1;
  uchar auVar2 [8];
  FName FVar3;
  FRDGPooledBuffer *pFVar4;
  longlong lVar5;
  FName *pFVar6;
  FThreadSafeStaticStat<FStat_STAT_NiagaraGPUDataInterfaceMemory> FVar7;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName local_res8;
  FStatMessage local_28;
  
  auVar2 = (uchar  [8])this->NumBytes;
  if (auVar2 != (uchar  [8])0x0) {
    FVar7 = StatPtr_STAT_NiagaraGPUDataInterfaceMemory;
    if (StatPtr_STAT_NiagaraGPUDataInterfaceMemory ==
        (FThreadSafeStaticStat<FStat_STAT_NiagaraGPUDataInterfaceMemory>)0x0) {
      pFVar6 = ::FName::FName(&local_res8,"STAT_NiagaraGPUDataInterfaceMemory");
      FVar7 = (FThreadSafeStaticStat<FStat_STAT_NiagaraGPUDataInterfaceMemory>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraGPUDataInterfaceMemory,
                         *pFVar6,L"Niagara GPU data interface memory","STATGROUP_Niagara",
                         "STATCAT_Niagara",L"Niagara",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar3 = *(FName *)FVar7;
    local_res8 = FVar3;
    if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      local_28.NameAndInfo.Number = FVar3.Number & 0xffffbfff | 0xb000;
      local_res8 = FVar3;
      local_28.StatData.Pad = auVar2;
      local_28.NameAndInfo.Index.Value = FVar3.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(this_00,&local_28);
      FStatsTrace::Add(&local_res8,-(longlong)auVar2);
      if (this_00->ScopeCount == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  this->NumBytes = 0;
  pFVar4 = (this->Buffer).Reference;
  if (pFVar4 == (FRDGPooledBuffer *)0x0) {
    this->PixelFormat = PF_Unknown;
    return;
  }
  (this->Buffer).Reference = (FRDGPooledBuffer *)0x0;
  plVar1 = &pFVar4->_padding_;
  LOCK();
  lVar5 = *plVar1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if (((int)lVar5 == 1) && (plVar1 != (longlong *)0x0)) {
    (**(code **)pFVar4->_padding_)(pFVar4,1);
  }
  this->PixelFormat = PF_Unknown;
  return;
}

