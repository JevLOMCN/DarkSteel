// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 11

// InitRHI @ 1458a9320

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FVirtualTextureFeedback::InitRHI(FVirtualTextureFeedback *this,FRHICommandListBase *param_1)

{
  FRHIStagingBuffer *this_00;
  TRefCountPtr<FRHIStagingBuffer> *pTVar1;
  uint uVar2;
  TRefCountPtr<FRHIStagingBuffer> local_18 [2];
  
  uVar2 = 0;
  pTVar1 = &this->FeedbackItems[0].StagingBuffer;
  do {
    (**(code **)(GDynamicRHI->_padding_ + 0xe0))(GDynamicRHI,local_18);
    if (&this->FeedbackItems[(int)uVar2].StagingBuffer == local_18) {
LAB_1458a9388:
      if (local_18[0].Reference != (FRHIStagingBuffer *)0x0) {
        FRHIResource::Release((FRHIResource *)local_18[0].Reference);
      }
    }
    else {
      this_00 = pTVar1->Reference;
      pTVar1->Reference = local_18[0].Reference;
      local_18[0].Reference = (FRHIStagingBuffer *)0x0;
      if (this_00 != (FRHIStagingBuffer *)0x0) {
        FRHIResource::Release((FRHIResource *)this_00);
        goto LAB_1458a9388;
      }
    }
    uVar2 = uVar2 + 1;
    pTVar1 = pTVar1 + 3;
    if (7 < uVar2) {
      return;
    }
  } while( true );
}

// ReleaseRHI @ 1458a93c0

void __thiscall FVirtualTextureFeedback::ReleaseRHI(FVirtualTextureFeedback *this)

{
  FRHIStagingBuffer *this_00;
  FFeedbackGPUFencePool *pFVar1;
  FScriptContainerElement *pFVar2;
  FRHIResource *this_01;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  TRefCountPtr<FRHIStagingBuffer> *pTVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  
  pTVar8 = &this->FeedbackItems[0].StagingBuffer;
  lVar10 = 8;
  uVar9 = 0;
  do {
    this_00 = pTVar8->Reference;
    if (this_00 != (FRHIStagingBuffer *)0x0) {
      pTVar8->Reference = (FRHIStagingBuffer *)0x0;
      FRHIResource::Release((FRHIResource *)this_00);
    }
    pTVar8 = pTVar8 + 3;
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  pFVar1 = this->Fences;
  iVar6 = (pFVar1->Fences).ArrayNum;
  uVar11 = uVar9;
  if (0 < iVar6) {
    do {
      uVar7 = (uint)uVar9;
      uVar5 = 0;
      if ((int)uVar7 < iVar6) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = (pFVar1->Fences).AllocatorInstance.Data;
      this_01 = *(FRHIResource **)(pFVar2 + uVar11);
      if (this_01 != (FRHIResource *)0x0) {
        *(undefined8 *)(pFVar2 + uVar11) = 0;
        FRHIResource::Release(this_01);
      }
      iVar6 = (pFVar1->Fences).ArrayNum;
      uVar9 = (ulonglong)(uVar7 + 1);
      uVar11 = uVar11 + 8;
    } while ((int)(uVar7 + 1) < iVar6);
  }
  return;
}

// FVirtualTextureFeedback @ 1458ccef0

FVirtualTextureFeedback * __thiscall
FVirtualTextureFeedback::FVirtualTextureFeedback(FVirtualTextureFeedback *this)

{
  int *piVar1;
  int iVar2;
  FFeedbackGPUFencePool *pFVar3;
  int *piVar4;
  
  FRenderResource::FRenderResource((FRenderResource *)this);
  this->_padding_ = (longlong)&___7FVirtualTextureFeedback__6B_;
  this->FeedbackItems[0].Desc.BufferSize = 0;
  this->FeedbackItems[0].Desc.bSizeInHeader = false;
  this->FeedbackItems[0].Desc.bPageAndCount = false;
  this->FeedbackItems[0].GPUMask.GPUMask = 1;
  this->FeedbackItems[0].StagingBuffer.Reference = (FRHIStagingBuffer *)0x0;
  this->FeedbackItems[1].Desc.BufferSize = 0;
  this->FeedbackItems[1].Desc.bSizeInHeader = false;
  this->FeedbackItems[1].Desc.bPageAndCount = false;
  this->FeedbackItems[1].GPUMask.GPUMask = 1;
  this->FeedbackItems[1].StagingBuffer.Reference = (FRHIStagingBuffer *)0x0;
  this->FeedbackItems[2].Desc.BufferSize = 0;
  this->FeedbackItems[2].Desc.bSizeInHeader = false;
  this->FeedbackItems[2].Desc.bPageAndCount = false;
  this->FeedbackItems[2].GPUMask.GPUMask = 1;
  this->FeedbackItems[2].StagingBuffer.Reference = (FRHIStagingBuffer *)0x0;
  this->FeedbackItems[3].Desc.BufferSize = 0;
  this->FeedbackItems[3].Desc.bSizeInHeader = false;
  this->FeedbackItems[3].Desc.bPageAndCount = false;
  this->FeedbackItems[3].GPUMask.GPUMask = 1;
  this->FeedbackItems[3].StagingBuffer.Reference = (FRHIStagingBuffer *)0x0;
  this->FeedbackItems[4].Desc.BufferSize = 0;
  this->FeedbackItems[4].Desc.bSizeInHeader = false;
  this->FeedbackItems[4].Desc.bPageAndCount = false;
  this->FeedbackItems[4].GPUMask.GPUMask = 1;
  this->FeedbackItems[4].StagingBuffer.Reference = (FRHIStagingBuffer *)0x0;
  this->FeedbackItems[5].Desc.BufferSize = 0;
  this->FeedbackItems[5].Desc.bSizeInHeader = false;
  this->FeedbackItems[5].Desc.bPageAndCount = false;
  this->FeedbackItems[5].GPUMask.GPUMask = 1;
  this->FeedbackItems[5].StagingBuffer.Reference = (FRHIStagingBuffer *)0x0;
  this->FeedbackItems[6].Desc.BufferSize = 0;
  this->FeedbackItems[6].Desc.bSizeInHeader = false;
  this->FeedbackItems[6].Desc.bPageAndCount = false;
  this->FeedbackItems[6].GPUMask.GPUMask = 1;
  this->FeedbackItems[6].StagingBuffer.Reference = (FRHIStagingBuffer *)0x0;
  this->FeedbackItems[7].Desc.BufferSize = 0;
  this->FeedbackItems[7].Desc.bSizeInHeader = false;
  this->FeedbackItems[7].Desc.bPageAndCount = false;
  this->FeedbackItems[7].GPUMask.GPUMask = 1;
  this->FeedbackItems[7].StagingBuffer.Reference = (FRHIStagingBuffer *)0x0;
  this->NumPending = 0;
  this->WriteIndex = 0;
  this->ReadIndex = 0;
  (this->MapResources).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MapResources).ArrayNum = 0;
  (this->MapResources).ArrayMax = 0;
  (this->FreeMapResources).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FreeMapResources).ArrayNum = 0;
  (this->FreeMapResources).ArrayMax = 0;
  pFVar3 = ::operator_new(0x10);
  if (pFVar3 != (FFeedbackGPUFencePool *)0x0) {
    piVar1 = &(pFVar3->Fences).ArrayNum;
    (pFVar3->Fences).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    piVar4 = &(pFVar3->Fences).ArrayMax;
    *piVar1 = 0;
    *piVar4 = 0;
    iVar2 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,8,(ForAnyElementType *)pFVar3,piVar1,piVar4);
    DefaultConstructItems<TRefCountPtr<FRHIGPUFence>,int>
              ((pFVar3->Fences).AllocatorInstance.Data + (longlong)iVar2 * 8,8);
    this->Fences = pFVar3;
    return this;
  }
  this->Fences = (FFeedbackGPUFencePool *)0x0;
  return this;
}

// ~FVirtualTextureFeedback @ 1458d1140

void __thiscall FVirtualTextureFeedback::~FVirtualTextureFeedback(FVirtualTextureFeedback *this)

{
  FFeedbackGPUFencePool *pFVar1;
  FScriptContainerElement *pFVar2;
  FRHIStagingBuffer *pFVar3;
  
  pFVar1 = this->Fences;
  this->_padding_ = (longlong)&___7FVirtualTextureFeedback__6B_;
  if (pFVar1 != (FFeedbackGPUFencePool *)0x0) {
    DestructItems<TRefCountPtr<FRHIGPUFence>,int>
              ((TRefCountPtr<FRHIGPUFence> *)(pFVar1->Fences).AllocatorInstance.Data,
               (pFVar1->Fences).ArrayNum);
    pFVar2 = (pFVar1->Fences).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    ::operator_delete(pFVar1,0x10);
  }
  pFVar2 = (this->FreeMapResources).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FVirtualTextureFeedback::FMapResources,int>
            ((FMapResources *)(this->MapResources).AllocatorInstance.Data,
             (this->MapResources).ArrayNum);
  pFVar2 = (this->MapResources).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar3 = this->FeedbackItems[7].StagingBuffer.Reference;
  if (pFVar3 != (FRHIStagingBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar3);
  }
  pFVar3 = this->FeedbackItems[6].StagingBuffer.Reference;
  if (pFVar3 != (FRHIStagingBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar3);
  }
  pFVar3 = this->FeedbackItems[5].StagingBuffer.Reference;
  if (pFVar3 != (FRHIStagingBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar3);
  }
  pFVar3 = this->FeedbackItems[4].StagingBuffer.Reference;
  if (pFVar3 != (FRHIStagingBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar3);
  }
  pFVar3 = this->FeedbackItems[3].StagingBuffer.Reference;
  if (pFVar3 != (FRHIStagingBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar3);
  }
  pFVar3 = this->FeedbackItems[2].StagingBuffer.Reference;
  if (pFVar3 != (FRHIStagingBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar3);
  }
  pFVar3 = this->FeedbackItems[1].StagingBuffer.Reference;
  if (pFVar3 != (FRHIStagingBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar3);
  }
  pFVar3 = this->FeedbackItems[0].StagingBuffer.Reference;
  if (pFVar3 != (FRHIStagingBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar3);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

// operator() @ 1458d3b90

void __thiscall
`FVirtualTextureFeedback::TransferGPUToCPU'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  FRDGResource *this_00;
  FVirtualTextureFeedback *this_01;
  FRHIBuffer *this_02;
  TRefCountPtr<FRHIBuffer> local_res8;
  
  this_00 = *(FRDGResource **)((longlong)this + 8);
  this_01 = *(FVirtualTextureFeedback **)this;
  FRDGResource::ValidateRHIAccess(this_00);
  this_02 = (FRHIBuffer *)this_00->ResourceRHI;
  local_res8.Reference = this_02;
  if (this_02 == (FRHIBuffer *)0x0) {
    FVirtualTextureFeedback::TransferGPUToCPU
              (this_01,(FRHICommandList *)param_1,&local_res8,
               (FVirtualTextureFeedbackBufferDesc *)((longlong)this + 0x10));
  }
  else {
    FRHIResource::AddRef((FRHIResource *)this_02);
    FVirtualTextureFeedback::TransferGPUToCPU
              (this_01,(FRHICommandList *)param_1,&local_res8,
               (FVirtualTextureFeedbackBufferDesc *)((longlong)this + 0x10));
    FRHIResource::Release((FRHIResource *)this_02);
  }
  return;
}

// CanMap @ 1458e15f0

bool __thiscall
FVirtualTextureFeedback::CanMap(FVirtualTextureFeedback *this,FRHICommandListImmediate *param_1)

{
  FRHIGPUMask FVar1;
  bool bVar2;
  
  if (this->NumPending != 0) {
    FVar1.GPUMask = *(uint *)&param_1->field_0x29c;
    FRHIComputeCommandList::SetGPUMask
              ((FRHIComputeCommandList *)param_1,
               (FRHIGPUMask)this->FeedbackItems[this->ReadIndex].GPUMask.GPUMask);
    bVar2 = FFeedbackGPUFencePool::Poll(this->Fences,(FRHICommandList *)param_1,this->ReadIndex);
    FRHIComputeCommandList::SetGPUMask((FRHIComputeCommandList *)param_1,FVar1);
    return bVar2;
  }
  return false;
}

// Map @ 145910830

/* WARNING: Enum "Type": Some values do not have unique names */

FMapResult * __thiscall
FVirtualTextureFeedback::Map
          (FVirtualTextureFeedback *this,FMapResult *__return_storage_ptr__,
          FRHICommandListImmediate *param_1)

{
  FName FVar1;
  FName *pFVar2;
  FThreadSafeStaticStat<FStat_STAT_VirtualTexture_PendingFeedback> FVar3;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  int iVar4;
  FName local_res8;
  FStatMessage local_38;
  
  if (FThreadStats::bPrimaryEnable) {
    FVar3 = StatPtr_STAT_VirtualTexture_PendingFeedback;
    if (StatPtr_STAT_VirtualTexture_PendingFeedback ==
        (FThreadSafeStaticStat<FStat_STAT_VirtualTexture_PendingFeedback>)0x0) {
      pFVar2 = ::FName::FName(&local_res8,"STAT_VirtualTexture_PendingFeedback");
      FVar3 = (FThreadSafeStaticStat<FStat_STAT_VirtualTexture_PendingFeedback>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VirtualTexture_PendingFeedback,
                         *pFVar2,L"Num Feedback Pending","STATGROUP_VirtualTexturing",
                         "STATCAT_Advanced",L"Virtual Texturing",true,true,ST_int64,false,false,
                         MCR_Invalid);
    }
    FVar1 = *(FName *)FVar3;
    iVar4 = this->NumPending;
    local_res8 = FVar1;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      local_38.NameAndInfo.Number = FVar1.Number & 0xffff8fff | 0x8000;
      local_res8 = FVar1;
      local_38.StatData.Pad = (uchar  [8])(longlong)iVar4;
      local_38.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(this_00,&local_38);
      FStatsTrace::Set(&local_res8,(longlong)iVar4);
      if (this_00->ScopeCount == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  iVar4 = 8;
  if (this->NumPending < GVirtualTextureFeedbackLatency) {
    iVar4 = 1;
  }
  Map(this,__return_storage_ptr__,param_1,iVar4);
  return __return_storage_ptr__;
}

// Map @ 145910a10

/* WARNING: Enum "Type": Some values do not have unique names */

FMapResult * __thiscall
FVirtualTextureFeedback::Map
          (FVirtualTextureFeedback *this,FMapResult *__return_storage_ptr__,
          FRHICommandListImmediate *param_1,int param_2)

{
  int *piVar1;
  void *_Dst;
  FRHIGPUMask FVar2;
  FRHIGPUMask FVar3;
  FFeedbackGPUFencePool *pFVar4;
  longlong *plVar5;
  FRHIStagingBuffer *pFVar6;
  FRHIResource *pFVar7;
  FName FVar8;
  FScriptContainerElement *pFVar9;
  code *pcVar10;
  TIntPoint<unsigned_int>_u_0 TVar11;
  TIntPoint<unsigned_int>_u_0 TVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  char cVar17;
  uint uVar18;
  uint uVar19;
  FName *pFVar20;
  FThreadSafeStaticStat<_public:_struct_FVirtualTextureFeedback::FMapResult___cdecl_FVirtualTextureFeedback::Map(FRHICommandListImmediate_&,int)_::_2_::FStat_STAT_VirtualTextureFeedback_Map>
  FVar21;
  FMapResult *pFVar22;
  TIntPoint<unsigned_int> *pTVar23;
  uchar auVar24 [8];
  FThreadSafeStaticStat<FStat_STAT_VirtualTexture_ReadFeedbackLostPage> FVar25;
  FThreadStats *pFVar26;
  FThreadStatsPool *pFVar27;
  uint *puVar28;
  FThreadSafeStaticStat<FStat_STAT_VirtualTexture_ReadFeedback> FVar29;
  ulonglong uVar30;
  FScriptContainerElement *pFVar31;
  uint uVar32;
  int iVar33;
  int iVar34;
  TIntPoint<unsigned_int>_u_0 *_Dst_00;
  uint uVar35;
  FNameEntryId FVar36;
  uchar auVar37 [8];
  FScriptContainerElement *pFVar38;
  char *in_stack_fffffffffffffea8;
  uint local_118;
  int local_114;
  int local_110;
  FName local_100;
  FColor_u_0 local_f8 [2];
  FName local_f0;
  uint local_e8;
  undefined4 uStack_e4;
  uint local_e0;
  undefined4 uStack_dc;
  uint local_d8;
  uint uStack_d4;
  FName local_d0;
  FName local_c0;
  FName local_b8;
  FName local_b0;
  FStatMessage local_a8;
  FStatMessage local_98;
  FStatMessage local_88;
  FName local_78;
  FName local_70;
  FName local_68;
  FName local_60;
  FName local_58 [3];
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_VirtualTextureFeedback_Map ==
        (FThreadSafeStaticStat<_public:_struct_FVirtualTextureFeedback::FMapResult___cdecl_FVirtualTextureFeedback::Map(FRHICommandListImmediate_&,int)_::_2_::FStat_STAT_VirtualTextureFeedback_Map>
         )0x0) {
      pFVar20 = ::FName::FName(&local_78,"STAT_VirtualTextureFeedback_Map");
      in_stack_fffffffffffffea8 = "STATCAT_Advanced";
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VirtualTextureFeedback_Map,*pFVar20,
                 L"STAT_VirtualTextureFeedback_Map","STATGROUP_Quick","STATCAT_Advanced",L"Quick",
                 true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar21 = StatPtr_STAT_VirtualTextureFeedback_Map;
  if (StatPtr_STAT_VirtualTextureFeedback_Map ==
      (FThreadSafeStaticStat<_public:_struct_FVirtualTextureFeedback::FMapResult___cdecl_FVirtualTextureFeedback::Map(FRHICommandListImmediate_&,int)_::_2_::FStat_STAT_VirtualTextureFeedback_Map>
       )0x0) {
    pFVar20 = ::FName::FName(&local_70,"STAT_VirtualTextureFeedback_Map");
    in_stack_fffffffffffffea8 = "STATCAT_Advanced";
    FVar21 = (FThreadSafeStaticStat<_public:_struct_FVirtualTextureFeedback::FMapResult___cdecl_FVirtualTextureFeedback::Map(FRHICommandListImmediate_&,int)_::_2_::FStat_STAT_VirtualTextureFeedback_Map>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VirtualTextureFeedback_Map,
                          *pFVar20,L"STAT_VirtualTextureFeedback_Map","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  local_100 = *(FName *)FVar21;
  bVar13 = false;
  bVar14 = false;
  local_d0.ComparisonIndex.Value = 0;
  local_d0.Number = 0;
  bVar15 = false;
  bVar16 = false;
  if ((local_100.ComparisonIndex.Value.Value != 0) || (local_100.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_f8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_f8[0]._s_0,(char *)*(FName *)((longlong)FVar21 + 0x10));
      bVar13 = false;
      bVar14 = true;
      bVar15 = false;
      bVar16 = true;
      if (-1 < CpuChannel->Enabled) {
        local_f0.ComparisonIndex.Value = local_100.ComparisonIndex.Value.Value;
        local_f0.Number = local_100.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_f0,(wchar_t *)*(FName *)((longlong)FVar21 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureFeedback.cpp"
                   ,0xc6);
        bVar13 = true;
        bVar14 = true;
        bVar15 = true;
        bVar16 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      FThreadStats::AddMessage(local_100,CycleScopeStart);
      bVar15 = true;
      goto LAB_145910bac;
    }
  }
  bVar14 = bVar16;
  bVar13 = bVar15;
  bVar15 = false;
  local_100 = local_d0;
LAB_145910bac:
  iVar33 = 0;
  __return_storage_ptr__->MapHandle = -1;
  __return_storage_ptr__->Data = (TIntPoint<unsigned_int> *)0x0;
  __return_storage_ptr__->Size = 0;
  local_114 = 0;
  local_118 = 0;
  if (0 < param_2) {
    do {
      if (this->NumPending <= iVar33) break;
      uVar18 = this->ReadIndex + iVar33 & 7;
      FVar2.GPUMask = *(uint *)&param_1->field_0x29c;
      FRHIComputeCommandList::SetGPUMask
                ((FRHIComputeCommandList *)param_1,
                 (FRHIGPUMask)this->FeedbackItems[uVar18].GPUMask.GPUMask);
      pFVar4 = this->Fences;
      if (((pFVar4->Fences).ArrayNum <= (int)uVar18) &&
         (in_stack_fffffffffffffea8 = (char *)(ulonglong)uVar18,
         bVar16 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar10 = (code *)swi(3);
        pFVar22 = (FMapResult *)(*pcVar10)();
        return pFVar22;
      }
      plVar5 = *(longlong **)
                ((pFVar4->Fences).AllocatorInstance.Data + (longlong)(ulonglong)uVar18 * 8);
      cVar17 = (**(code **)(*plVar5 + 0x18))(plVar5,*(undefined4 *)&param_1->field_0x29c);
      if (cVar17 == '\0') {
        FRHIComputeCommandList::SetGPUMask((FRHIComputeCommandList *)param_1,FVar2);
        break;
      }
      local_118 = local_118 + this->FeedbackItems[uVar18].Desc.BufferSize;
      local_114 = local_114 + 1;
      FRHIComputeCommandList::SetGPUMask((FRHIComputeCommandList *)param_1,FVar2);
      iVar33 = iVar33 + 1;
    } while (iVar33 < param_2);
    if (0 < local_114) {
      iVar33 = (this->FreeMapResources).ArrayNum;
      if (iVar33 == 0) {
        uVar18 = (this->MapResources).ArrayNum;
        piVar1 = &(this->MapResources).ArrayMax;
        if (uVar18 == *piVar1) {
          uVar18 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x818,&(this->MapResources).AllocatorInstance,piVar1);
        }
        (this->MapResources).ArrayNum = uVar18 + 1;
        DefaultConstructItems<FVirtualTextureFeedback::FMapResources,int>
                  ((this->MapResources).AllocatorInstance.Data + (longlong)(int)uVar18 * 0x18,1);
      }
      else {
        if ((iVar33 < 1) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar10 = (code *)swi(3);
          pFVar22 = (FMapResult *)(*pcVar10)();
          return pFVar22;
        }
        iVar33 = (this->FreeMapResources).ArrayNum;
        iVar34 = iVar33 + -1;
        uVar18 = *(uint *)((this->FreeMapResources).AllocatorInstance.Data +
                          (longlong)iVar33 * 4 + -4);
        in_stack_fffffffffffffea8 = (char *)&(this->FreeMapResources).ArrayMax;
        (this->FreeMapResources).ArrayNum = iVar34;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,&(this->FreeMapResources).AllocatorInstance,iVar34,
                   (int *)in_stack_fffffffffffffea8);
      }
      __return_storage_ptr__->MapHandle = uVar18;
      if ((local_114 == 1) &&
         (uVar35 = this->ReadIndex, this->FeedbackItems[uVar35].Desc.bPageAndCount != false)) {
        pFVar38 = (FScriptContainerElement *)(longlong)(int)uVar35;
        pFVar6 = this->FeedbackItems[(longlong)pFVar38].StagingBuffer.Reference;
        FVar2.GPUMask = this->FeedbackItems[(longlong)pFVar38].GPUMask.GPUMask;
        if (pFVar6 != (FRHIStagingBuffer *)0x0) {
          FRHIResource::AddRef((FRHIResource *)pFVar6);
        }
        FVar3.GPUMask = *(uint *)&param_1->field_0x29c;
        FRHIComputeCommandList::SetGPUMask((FRHIComputeCommandList *)param_1,FVar2);
        uVar18 = this->FeedbackItems[(longlong)pFVar38].Desc.BufferSize;
        pFVar4 = this->Fences;
        uVar19 = 0;
        if ((int)uVar35 < (pFVar4->Fences).ArrayNum) {
          uVar19 = ~uVar35 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (in_stack_fffffffffffffea8 = (char *)pFVar38,
           bVar16 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar16)) {
          pcVar10 = (code *)swi(3);
          pFVar22 = (FMapResult *)(*pcVar10)();
          return pFVar22;
        }
        pFVar7 = *(FRHIResource **)((pFVar4->Fences).AllocatorInstance.Data + (longlong)pFVar38 * 8)
        ;
        if (pFVar7 != (FRHIResource *)0x0) {
          FRHIResource::AddRef(pFVar7);
        }
        pTVar23 = (TIntPoint<unsigned_int> *)
                  (**(code **)(GDynamicRHI->_padding_ + 0xf8))
                            (GDynamicRHI,param_1,pFVar6,pFVar7,
                             (ulonglong)in_stack_fffffffffffffea8 & 0xffffffff00000000,uVar18 << 3);
        __return_storage_ptr__->Data = pTVar23;
        if (pFVar7 != (FRHIResource *)0x0) {
          FRHIResource::Release(pFVar7);
        }
        bVar16 = this->FeedbackItems[(longlong)pFVar38].Desc.bSizeInHeader;
        uVar18 = this->FeedbackItems[(longlong)pFVar38].Desc.BufferSize;
        __return_storage_ptr__->Size = uVar18;
        if (bVar16 != false) {
          uVar19 = (__return_storage_ptr__->Data->field0_0x0)._s_0.X;
          __return_storage_ptr__->Data = __return_storage_ptr__->Data + 1;
          uVar18 = uVar18 - 1;
          if (uVar19 < uVar18) {
            uVar18 = uVar19;
          }
          __return_storage_ptr__->Size = uVar18;
          auVar24[4] = '\0';
          auVar24[5] = '\0';
          auVar24[6] = '\0';
          auVar24[7] = '\0';
          auVar24._0_4_ = uVar19 - uVar18;
          if ((uVar19 - uVar18 != 0) && (FThreadStats::bPrimaryEnable != false)) {
            FVar25 = StatPtr_STAT_VirtualTexture_ReadFeedbackLostPage;
            if (StatPtr_STAT_VirtualTexture_ReadFeedbackLostPage ==
                (FThreadSafeStaticStat<FStat_STAT_VirtualTexture_ReadFeedbackLostPage>)0x0) {
              pFVar20 = ::FName::FName(&local_68,"STAT_VirtualTexture_ReadFeedbackLostPage");
              FVar25 = (FThreadSafeStaticStat<FStat_STAT_VirtualTexture_ReadFeedbackLostPage>)
                       FThreadSafeStaticStatBase::DoSetup
                                 ((FThreadSafeStaticStatBase *)
                                  &StatPtr_STAT_VirtualTexture_ReadFeedbackLostPage,*pFVar20,
                                  L"Num Feedback Lost Pages","STATGROUP_VirtualTexturing",
                                  "STATCAT_Advanced",L"Virtual Texturing",true,true,ST_int64,false,
                                  false,MCR_Invalid);
            }
            FVar8 = *(FName *)FVar25;
            if (((FVar8 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
               (FThreadStats::TlsSlot != 0xffffffff)) {
              pFVar26 = TlsGetValue(FThreadStats::TlsSlot);
              if (pFVar26 == (FThreadStats *)0x0) {
                pFVar27 = FThreadStatsPool::Get();
                pFVar26 = FThreadStatsPool::GetFromPool(pFVar27);
              }
              local_a8.NameAndInfo.Number = FVar8.Number & 0xffffafff | 0xa000;
              local_c0 = FVar8;
              local_a8.StatData.Pad = auVar24;
              local_a8.NameAndInfo.Index.Value = FVar8.ComparisonIndex.Value.Value;
              FThreadStats::AddStatMessage(pFVar26,&local_a8);
              FStatsTrace::Add(&local_c0,(long64)auVar24);
              if (pFVar26->ScopeCount == 0) {
                FThreadStats::Flush(pFVar26,false,false);
              }
              else if (FThreadStats::bIsRawStatsActive != false) {
                FThreadStats::FlushRawStats(pFVar26,false,false);
              }
            }
          }
        }
        uVar18 = __return_storage_ptr__->MapHandle;
        uVar19 = 0;
        if ((int)uVar18 < (this->MapResources).ArrayNum) {
          uVar19 = ~uVar18 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar10 = (code *)swi(3);
          pFVar22 = (FMapResult *)(*pcVar10)();
          return pFVar22;
        }
        *(uint *)((this->MapResources).AllocatorInstance.Data + (longlong)(int)uVar18 * 0x18) =
             uVar35;
        FRHIComputeCommandList::SetGPUMask((FRHIComputeCommandList *)param_1,FVar3);
        if (pFVar6 != (FRHIStagingBuffer *)0x0) {
          FRHIResource::Release((FRHIResource *)pFVar6);
        }
      }
      else {
        uVar35 = 0;
        if ((int)uVar18 < (this->MapResources).ArrayNum) {
          uVar35 = ~uVar18 >> 0x1f;
        }
        if (uVar35 == 0) {
          in_stack_fffffffffffffea8 = (char *)(longlong)(int)uVar18;
          bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar16) {
            pcVar10 = (code *)swi(3);
            pFVar22 = (FMapResult *)(*pcVar10)();
            return pFVar22;
          }
        }
        pFVar31 = (FScriptContainerElement *)(longlong)(int)local_118;
        pFVar9 = (this->MapResources).AllocatorInstance.Data;
        iVar33 = *(int *)(pFVar9 + (longlong)(int)uVar18 * 0x18 + 0x10);
        pFVar38 = pFVar9 + (longlong)(int)uVar18 * 0x18 + 0x10;
        if (iVar33 < (int)local_118) {
          UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,4,local_118 - iVar33,
                     (ForAnyElementType *)(pFVar9 + (longlong)(int)uVar18 * 0x18 + 8),(int *)pFVar38
                     ,(int *)(pFVar9 + (longlong)(int)uVar18 * 0x18 + 0x14));
          in_stack_fffffffffffffea8 = (char *)pFVar38;
        }
        else {
          if ((int)local_118 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum((ulonglong)local_118);
          }
          if ((int)local_118 < iVar33) {
            uVar35 = iVar33 - local_118;
            if (((int)(uVar35 | local_118) < 0) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x458,
                                    L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                   ), in_stack_fffffffffffffea8 = (char *)pFVar31, bVar16)) {
              pcVar10 = (code *)swi(3);
              pFVar22 = (FMapResult *)(*pcVar10)();
              return pFVar22;
            }
            if (uVar35 != 0) {
              _Dst = (void *)(*(longlong *)(pFVar9 + (longlong)(int)uVar18 * 0x18 + 8) +
                             (longlong)(int)local_118 * 8);
              iVar33 = (*(int *)pFVar38 - local_118) - uVar35;
              if (iVar33 != 0) {
                memmove(_Dst,(void *)((longlong)_Dst + (longlong)(int)uVar35 * 8),
                        (longlong)iVar33 << 3);
              }
              *(uint *)pFVar38 = *(int *)pFVar38 - uVar35;
            }
          }
        }
        uVar18 = __return_storage_ptr__->MapHandle;
        uVar35 = 0;
        if ((int)uVar18 < (this->MapResources).ArrayNum) {
          uVar35 = ~uVar18 >> 0x1f;
        }
        if ((uVar35 == 0) &&
           (in_stack_fffffffffffffea8 = (char *)(longlong)(int)uVar18,
           bVar16 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar16)) {
          pcVar10 = (code *)swi(3);
          pFVar22 = (FMapResult *)(*pcVar10)();
          return pFVar22;
        }
        pFVar38 = (this->MapResources).AllocatorInstance.Data;
        local_110 = 0;
        __return_storage_ptr__->Size = 0;
        __return_storage_ptr__->Data =
             *(TIntPoint<unsigned_int> **)(pFVar38 + (longlong)(longlong)(int)uVar18 * 0x18 + 8);
        do {
          uVar18 = this->ReadIndex + local_110 & 7;
          FVar2.GPUMask = this->FeedbackItems[uVar18].GPUMask.GPUMask;
          pFVar6 = this->FeedbackItems[uVar18].StagingBuffer.Reference;
          uVar35 = (this->FeedbackItems[uVar18].Desc.bPageAndCount != false) + 1;
          if (pFVar6 != (FRHIStagingBuffer *)0x0) {
            FRHIResource::AddRef((FRHIResource *)pFVar6);
          }
          FVar3.GPUMask = *(uint *)&param_1->field_0x29c;
          FRHIComputeCommandList::SetGPUMask((FRHIComputeCommandList *)param_1,FVar2);
          uVar19 = this->FeedbackItems[uVar18].Desc.BufferSize;
          pFVar4 = this->Fences;
          if (((pFVar4->Fences).ArrayNum <= (int)uVar18) &&
             (in_stack_fffffffffffffea8 = (char *)(ulonglong)uVar18,
             bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar10 = (code *)swi(3);
            pFVar22 = (FMapResult *)(*pcVar10)();
            return pFVar22;
          }
          pFVar7 = *(FRHIResource **)
                    ((pFVar4->Fences).AllocatorInstance.Data + (longlong)(ulonglong)uVar18 * 8);
          if (pFVar7 != (FRHIResource *)0x0) {
            FRHIResource::AddRef(pFVar7);
          }
          in_stack_fffffffffffffea8 =
               (char *)((ulonglong)in_stack_fffffffffffffea8 & 0xffffffff00000000);
          puVar28 = (uint *)(**(code **)(GDynamicRHI->_padding_ + 0xf8))
                                      (GDynamicRHI,param_1,pFVar6,pFVar7,in_stack_fffffffffffffea8,
                                       uVar35 * uVar19 * 4);
          if (pFVar7 != (FRHIResource *)0x0) {
            FRHIResource::Release(pFVar7);
          }
          _Dst_00 = &__return_storage_ptr__->Data[__return_storage_ptr__->Size].field0_0x0;
          if (this->FeedbackItems[uVar18].Desc.bSizeInHeader == false) {
            uVar35 = this->FeedbackItems[uVar18].Desc.BufferSize;
            uVar30 = (ulonglong)uVar35;
            if (this->FeedbackItems[uVar18].Desc.bPageAndCount == false) {
              if (0 < (int)uVar35) {
                uStack_e4 = 1;
                do {
                  local_e8 = *puVar28;
                  puVar28 = puVar28 + 1;
                  TVar11._s_0.Y = 1;
                  TVar11._s_0.X = local_e8;
                  *_Dst_00 = TVar11;
                  uVar30 = uVar30 - 1;
                  _Dst_00 = _Dst_00 + 1;
                } while (uVar30 != 0);
              }
              __return_storage_ptr__->Size =
                   __return_storage_ptr__->Size + this->FeedbackItems[uVar18].Desc.BufferSize;
            }
            else {
              memcpy(_Dst_00,puVar28,(longlong)(int)uVar35 << 3);
              __return_storage_ptr__->Size =
                   __return_storage_ptr__->Size + this->FeedbackItems[uVar18].Desc.BufferSize;
            }
          }
          else {
            uVar19 = *puVar28;
            uVar32 = this->FeedbackItems[uVar18].Desc.BufferSize - 1;
            if (uVar19 < uVar32) {
              uVar32 = uVar19;
            }
            uVar30 = (ulonglong)uVar32;
            puVar28 = puVar28 + uVar35;
            if (this->FeedbackItems[uVar18].Desc.bPageAndCount == false) {
              if (0 < (int)uVar32) {
                uStack_dc = 1;
                do {
                  local_e0 = *puVar28;
                  puVar28 = puVar28 + 1;
                  TVar12._s_0.Y = 1;
                  TVar12._s_0.X = local_e0;
                  *_Dst_00 = TVar12;
                  uVar30 = uVar30 - 1;
                  _Dst_00 = _Dst_00 + 1;
                } while (uVar30 != 0);
              }
            }
            else {
              memcpy(_Dst_00,puVar28,(longlong)(int)uVar32 << 3);
            }
            __return_storage_ptr__->Size = __return_storage_ptr__->Size + uVar32;
            auVar37[4] = '\0';
            auVar37[5] = '\0';
            auVar37[6] = '\0';
            auVar37[7] = '\0';
            auVar37._0_4_ = uVar19 - uVar32;
            if ((uVar19 - uVar32 != 0) && (FThreadStats::bPrimaryEnable != false)) {
              FVar25 = StatPtr_STAT_VirtualTexture_ReadFeedbackLostPage;
              if (StatPtr_STAT_VirtualTexture_ReadFeedbackLostPage ==
                  (FThreadSafeStaticStat<FStat_STAT_VirtualTexture_ReadFeedbackLostPage>)0x0) {
                pFVar20 = ::FName::FName(&local_60,"STAT_VirtualTexture_ReadFeedbackLostPage");
                in_stack_fffffffffffffea8 = "STATCAT_Advanced";
                FVar25 = (FThreadSafeStaticStat<FStat_STAT_VirtualTexture_ReadFeedbackLostPage>)
                         FThreadSafeStaticStatBase::DoSetup
                                   ((FThreadSafeStaticStatBase *)
                                    &StatPtr_STAT_VirtualTexture_ReadFeedbackLostPage,*pFVar20,
                                    L"Num Feedback Lost Pages","STATGROUP_VirtualTexturing",
                                    "STATCAT_Advanced",L"Virtual Texturing",true,true,ST_int64,false
                                    ,false,MCR_Invalid);
              }
              FVar8 = *(FName *)FVar25;
              FVar36 = FVar8.ComparisonIndex.Value;
              uVar18 = FVar8.Number;
              local_d8 = FVar36.Value;
              uStack_d4 = uVar18;
              if (((FVar8 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
                 (FThreadStats::TlsSlot != 0xffffffff)) {
                pFVar26 = TlsGetValue(FThreadStats::TlsSlot);
                if (pFVar26 == (FThreadStats *)0x0) {
                  pFVar27 = FThreadStatsPool::Get();
                  pFVar26 = FThreadStatsPool::GetFromPool(pFVar27);
                }
                local_98.NameAndInfo.Number = uVar18 & 0xffffafff | 0xa000;
                local_b8 = FVar8;
                local_98.StatData.Pad = auVar37;
                local_98.NameAndInfo.Index.Value = FVar36.Value;
                FThreadStats::AddStatMessage(pFVar26,&local_98);
                FStatsTrace::Add(&local_b8,(long64)auVar37);
                if (pFVar26->ScopeCount == 0) {
                  FThreadStats::Flush(pFVar26,false,false);
                }
                else if (FThreadStats::bIsRawStatsActive != false) {
                  FThreadStats::FlushRawStats(pFVar26,false,false);
                }
              }
            }
          }
          (**(code **)(GDynamicRHI->_padding_ + 0x100))(GDynamicRHI,param_1);
          FRHIComputeCommandList::SetGPUMask((FRHIComputeCommandList *)param_1,FVar3);
          if (pFVar6 != (FRHIStagingBuffer *)0x0) {
            FRHIResource::Release((FRHIResource *)pFVar6);
          }
          local_110 = local_110 + 1;
        } while (local_110 < local_114);
      }
      if (FThreadStats::bPrimaryEnable != false) {
        FVar29 = StatPtr_STAT_VirtualTexture_ReadFeedback;
        if (StatPtr_STAT_VirtualTexture_ReadFeedback ==
            (FThreadSafeStaticStat<FStat_STAT_VirtualTexture_ReadFeedback>)0x0) {
          pFVar20 = ::FName::FName(local_58,"STAT_VirtualTexture_ReadFeedback");
          FVar29 = (FThreadSafeStaticStat<FStat_STAT_VirtualTexture_ReadFeedback>)
                   FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VirtualTexture_ReadFeedback
                              ,*pFVar20,L"Num Feedback Reads","STATGROUP_VirtualTexturing",
                              "STATCAT_Advanced",L"Virtual Texturing",true,true,ST_int64,false,false
                              ,MCR_Invalid);
        }
        FVar8 = *(FName *)FVar29;
        if (((FVar8 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
           (FThreadStats::TlsSlot != 0xffffffff)) {
          pFVar26 = TlsGetValue(FThreadStats::TlsSlot);
          if (pFVar26 == (FThreadStats *)0x0) {
            pFVar27 = FThreadStatsPool::Get();
            pFVar26 = FThreadStatsPool::GetFromPool(pFVar27);
          }
          local_88.NameAndInfo.Number = FVar8.Number & 0xffffafff | 0xa000;
          local_b0 = FVar8;
          local_88.StatData.Pad = (uchar  [8])(longlong)local_114;
          local_88.NameAndInfo.Index.Value = FVar8.ComparisonIndex.Value.Value;
          FThreadStats::AddStatMessage(pFVar26,&local_88);
          FStatsTrace::Add(&local_b0,(longlong)local_114);
          if (pFVar26->ScopeCount == 0) {
            FThreadStats::Flush(pFVar26,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(pFVar26,false,false);
          }
        }
      }
      if ((local_118 < __return_storage_ptr__->Size) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("MapResult.Size <= TotalReadSize",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureFeedback.cpp"
                              ,0x122,L""), bVar16)) {
        pcVar10 = (code *)swi(3);
        pFVar22 = (FMapResult *)(*pcVar10)();
        return pFVar22;
      }
      this->NumPending = this->NumPending - local_114;
      this->ReadIndex = local_114 + this->ReadIndex & 7;
    }
  }
  if (bVar14) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar13) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar15) {
    FThreadStats::AddMessage(local_100,CycleScopeEnd);
  }
  return __return_storage_ptr__;
}

// TransferGPUToCPU @ 145924b60

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FVirtualTextureFeedback::TransferGPUToCPU
          (FVirtualTextureFeedback *this,FRDGBuilder *param_1,FRDGBuffer *param_2,
          FVirtualTextureFeedbackBufferDesc *param_3)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  FRDGEventName *pFVar6;
  undefined8 *local_58;
  <lambda_1> local_50;
  FRDGEventName local_38;
  
  puVar5 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x20,0x10);
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)0x0;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    puVar5[2] = 0;
    *puVar5 = &___7__TObject_VFVirtualTextureFeedbackCopyParameters___FRDGAllocator__6B_;
    *(undefined4 *)(puVar5 + 3) = 0x80;
  }
  local_58 = puVar5;
  if (((undefined8 **)param_1->_padding_ <= &local_58) &&
     (&local_58 < (undefined8 **)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4)))
  {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = (int)param_1->_padding_;
  piVar1 = (int *)((longlong)&param_1->_padding_ + 4);
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)&param_1->_padding_,piVar1);
  }
  *(int *)&param_1->_padding_ = iVar4 + 1;
  local_50.Buffer = (FRDGBuffer *)CONCAT44(local_50.Buffer._4_4_,0x80);
  *(undefined8 **)(param_1->_padding_ + (longlong)iVar4 * 8) = local_58;
  puVar5[2] = param_2;
  puVar5[3] = local_50.Buffer;
  local_50.Desc = *param_3;
  local_50.__this = this;
  local_50.Buffer = param_2;
  pFVar6 = FRDGEventName::FRDGEventName(&local_38,1,L"VirtualTextureFeedbackCopy");
  FRDGBuilder::
  AddPass<FVirtualTextureFeedbackCopyParameters,_FVirtualTextureFeedback::TransferGPUToCPU_::__l2::<lambda_1>_>
            (param_1,pFVar6,(FVirtualTextureFeedbackCopyParameters *)(puVar5 + 2),Readback,&local_50
            );
  if (local_38.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.FormattedEventName.Data.AllocatorInstance.Data);
  }
  return;
}

// TransferGPUToCPU @ 145924d20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FVirtualTextureFeedback::TransferGPUToCPU
          (FVirtualTextureFeedback *this,FRHICommandList *param_1,TRefCountPtr<FRHIBuffer> *param_2,
          FVirtualTextureFeedbackBufferDesc *param_3)

{
  uint *puVar1;
  uint uVar2;
  FRHIGPUMask FVar3;
  FName FVar4;
  FFeedbackGPUFencePool *pFVar5;
  FScriptContainerElement *pFVar6;
  FRHIResource *this_00;
  FRHIStagingBuffer *pFVar7;
  FRHIBuffer *pFVar8;
  code *pcVar9;
  bool bVar10;
  uint uVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<FStat_STAT_VirtualTexture_WriteFeedback> FVar13;
  FThreadStats *pFVar14;
  FThreadStatsPool *pFVar15;
  FThreadSafeStaticStat<FStat_STAT_VirtualTexture_LostFeedback> FVar16;
  IRHIComputeContext *pIVar17;
  undefined8 *puVar18;
  byte bVar19;
  FRHIGPUMask FVar20;
  int iVar21;
  FName local_78;
  FName local_70;
  FName local_68;
  FName local_60;
  FStatMessage local_58;
  FStatMessage local_48;
  
  if (param_3->BufferSize == 0) {
    bVar10 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_5670379655706705808>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureFeedback.cpp"
                        ,0x70,"Desc.BufferSize > 0");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  else {
    if (FThreadStats::bPrimaryEnable) {
      FVar13 = StatPtr_STAT_VirtualTexture_WriteFeedback;
      if (StatPtr_STAT_VirtualTexture_WriteFeedback ==
          (FThreadSafeStaticStat<FStat_STAT_VirtualTexture_WriteFeedback>)0x0) {
        pFVar12 = ::FName::FName(&local_68,"STAT_VirtualTexture_WriteFeedback");
        FVar13 = (FThreadSafeStaticStat<FStat_STAT_VirtualTexture_WriteFeedback>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VirtualTexture_WriteFeedback,
                            *pFVar12,L"Num Feedback Writes","STATGROUP_VirtualTexturing",
                            "STATCAT_Advanced",L"Virtual Texturing",true,true,ST_int64,false,false,
                            MCR_Invalid);
      }
      FVar4 = *(FName *)FVar13;
      if (((FVar4 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar14 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar14 == (FThreadStats *)0x0) {
          pFVar15 = FThreadStatsPool::Get();
          pFVar14 = FThreadStatsPool::GetFromPool(pFVar15);
        }
        local_58.NameAndInfo.Number = FVar4.Number & 0xffffafff | 0xa000;
        local_58.StatData.Pad[0] = '\x01';
        local_58.StatData.Pad[1] = '\0';
        local_58.StatData.Pad[2] = '\0';
        local_58.StatData.Pad[3] = '\0';
        local_58.StatData.Pad[4] = '\0';
        local_58.StatData.Pad[5] = '\0';
        local_58.StatData.Pad[6] = '\0';
        local_58.StatData.Pad[7] = '\0';
        local_78 = FVar4;
        local_58.NameAndInfo.Index.Value = FVar4.ComparisonIndex.Value.Value;
        FThreadStats::AddStatMessage(pFVar14,&local_58);
        FStatsTrace::Add(&local_78,1);
        if (pFVar14->ScopeCount == 0) {
          FThreadStats::Flush(pFVar14,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar14,false,false);
        }
      }
    }
    if (7 < (uint)this->NumPending) {
      if (FThreadStats::bPrimaryEnable != false) {
        FVar16 = StatPtr_STAT_VirtualTexture_LostFeedback;
        if (StatPtr_STAT_VirtualTexture_LostFeedback ==
            (FThreadSafeStaticStat<FStat_STAT_VirtualTexture_LostFeedback>)0x0) {
          pFVar12 = ::FName::FName(&local_60,"STAT_VirtualTexture_LostFeedback");
          FVar16 = (FThreadSafeStaticStat<FStat_STAT_VirtualTexture_LostFeedback>)
                   FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VirtualTexture_LostFeedback
                              ,*pFVar12,L"Num Feedback Lost Buffers","STATGROUP_VirtualTexturing",
                              "STATCAT_Advanced",L"Virtual Texturing",true,true,ST_int64,false,false
                              ,MCR_Invalid);
        }
        FVar4 = *(FName *)FVar16;
        if (((FVar4 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
           (FThreadStats::TlsSlot != 0xffffffff)) {
          pFVar14 = TlsGetValue(FThreadStats::TlsSlot);
          if (pFVar14 == (FThreadStats *)0x0) {
            pFVar15 = FThreadStatsPool::Get();
            pFVar14 = FThreadStatsPool::GetFromPool(pFVar15);
          }
          local_48.NameAndInfo.Number = FVar4.Number & 0xffffafff | 0xa000;
          local_48.StatData.Pad[0] = '\x01';
          local_48.StatData.Pad[1] = '\0';
          local_48.StatData.Pad[2] = '\0';
          local_48.StatData.Pad[3] = '\0';
          local_48.StatData.Pad[4] = '\0';
          local_48.StatData.Pad[5] = '\0';
          local_48.StatData.Pad[6] = '\0';
          local_48.StatData.Pad[7] = '\0';
          local_70 = FVar4;
          local_48.NameAndInfo.Index.Value = FVar4.ComparisonIndex.Value.Value;
          FThreadStats::AddStatMessage(pFVar14,&local_48);
          FStatsTrace::Add(&local_70,1);
          if (pFVar14->ScopeCount == 0) {
            FThreadStats::Flush(pFVar14,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(pFVar14,false,false);
          }
        }
      }
      uVar2 = this->ReadIndex;
      pFVar5 = this->Fences;
      uVar11 = 0;
      if ((int)uVar2 < (pFVar5->Fences).ArrayNum) {
        uVar11 = ~uVar2 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pFVar6 = (pFVar5->Fences).AllocatorInstance.Data;
      this_00 = *(FRHIResource **)(pFVar6 + (longlong)(int)uVar2 * 8);
      if (this_00 != (FRHIResource *)0x0) {
        *(undefined8 *)(pFVar6 + (longlong)(int)uVar2 * 8) = 0;
        FRHIResource::Release(this_00);
      }
      this->NumPending = this->NumPending + -1;
      this->ReadIndex = this->ReadIndex + 1 & 7;
    }
    puVar1 = &this->WriteIndex;
    uVar2 = *puVar1;
    this->FeedbackItems[uVar2].Desc = *param_3;
    iVar21 = 0;
    bVar10 = *(int *)&param_1->field_0x29c != 0;
    if (bVar10) {
      for (; (*(uint *)&param_1->field_0x29c >> iVar21 & 1) == 0; iVar21 = iVar21 + 1) {
      }
    }
    bVar19 = 0;
    if (bVar10) {
      bVar19 = (byte)iVar21;
    }
    FVar20.GPUMask = 1 << (bVar19 & 0x1f);
    this->FeedbackItems[uVar2].GPUMask.GPUMask = FVar20.GPUMask;
    FVar3.GPUMask = *(uint *)&param_1->field_0x29c;
    FRHIComputeCommandList::SetGPUMask((FRHIComputeCommandList *)param_1,FVar20);
    pFVar7 = this->FeedbackItems[uVar2].StagingBuffer.Reference;
    iVar21 = 4;
    if (param_3->bPageAndCount != false) {
      iVar21 = 8;
    }
    iVar21 = iVar21 * param_3->BufferSize;
    pFVar8 = param_2->Reference;
    if ((GRHICommandList.bLatchedBypass == false) || ((param_1->field_0x29b & 0x20) == 0)) {
      puVar18 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x28,8);
      *(int *)&param_1->field_0x60 = *(int *)&param_1->field_0x60 + 1;
      **(undefined8 **)&param_1->field_0x30 = puVar18;
      *(undefined8 **)&param_1->field_0x30 = puVar18 + 1;
      puVar18[1] = 0;
      *puVar18 = &___7FRHICommandCopyToStagingBuffer__6B_;
      puVar18[2] = pFVar8;
      puVar18[3] = pFVar7;
      *(undefined4 *)(puVar18 + 4) = 0;
      *(int *)((longlong)puVar18 + 0x24) = iVar21;
    }
    else {
      pIVar17 = FRHICommandListBase::GetComputeContext((FRHICommandListBase *)param_1);
      (**(code **)(pIVar17->_padding_ + 0xd8))(pIVar17,pFVar8,pFVar7,0,iVar21);
    }
    FFeedbackGPUFencePool::Allocate(this->Fences,param_1,*puVar1);
    uVar2 = *puVar1;
    pFVar5 = this->Fences;
    uVar11 = 0;
    if ((int)uVar2 < (pFVar5->Fences).ArrayNum) {
      uVar11 = ~uVar2 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    (**(code **)(GDynamicRHI->_padding_ + 0xc0))
              (GDynamicRHI,param_1,
               *(undefined8 *)((pFVar5->Fences).AllocatorInstance.Data + (longlong)(int)uVar2 * 8));
    this->NumPending = this->NumPending + 1;
    *puVar1 = *puVar1 + 1 & 7;
    FRHIComputeCommandList::SetGPUMask((FRHIComputeCommandList *)param_1,FVar3);
  }
  return;
}

// Unmap @ 145926d40

void __thiscall
FVirtualTextureFeedback::Unmap
          (FVirtualTextureFeedback *this,FRHICommandListImmediate *param_1,int param_2)

{
  int *piVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  FRHIGPUMask FVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  int local_res18 [2];
  
  if (-1 < param_2) {
    uVar8 = 0;
    if (param_2 < (this->MapResources).ArrayNum) {
      uVar8 = (uint)~param_2 >> 0x1f;
    }
    local_res18[0] = param_2;
    if (uVar8 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    pFVar5 = (this->MapResources).AllocatorInstance.Data;
    pFVar3 = pFVar5 + (longlong)param_2 * 0x18;
    iVar9 = *(int *)(pFVar5 + (longlong)param_2 * 0x18);
    if (-1 < iVar9) {
      FVar4.GPUMask = *(uint *)&param_1->field_0x29c;
      FRHIComputeCommandList::SetGPUMask
                ((FRHIComputeCommandList *)param_1,
                 (FRHIGPUMask)this->FeedbackItems[iVar9].GPUMask.GPUMask);
      (**(code **)(GDynamicRHI->_padding_ + 0x100))(GDynamicRHI,param_1);
      *(undefined4 *)pFVar3 = 0xffffffff;
      FRHIComputeCommandList::SetGPUMask((FRHIComputeCommandList *)param_1,FVar4);
    }
    *(undefined4 *)(pFVar3 + 0x10) = 0;
    if (*(int *)(pFVar3 + 0x14) < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,0,(ForAnyElementType *)(pFVar3 + 8),0,(int *)(pFVar3 + 0x14));
    }
    pTVar2 = &this->FreeMapResources;
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    if ((pFVar3 <= (FScriptContainerElement *)local_res18) &&
       ((FScriptContainerElement *)local_res18 <
        pFVar3 + (longlong)(this->FreeMapResources).ArrayMax * 4)) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    iVar9 = (this->FreeMapResources).ArrayNum;
    piVar1 = &(this->FreeMapResources).ArrayMax;
    if (iVar9 == *piVar1) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->FreeMapResources).ArrayNum = iVar9 + 1;
    *(int *)((pTVar2->AllocatorInstance).Data + (longlong)iVar9 * 4) = local_res18[0];
  }
  return;
}

