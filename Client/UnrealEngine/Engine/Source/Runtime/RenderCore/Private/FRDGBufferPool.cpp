// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 8

// ReleaseRHI @ 145d73390

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FRDGBufferPool::ReleaseRHI(FRDGBufferPool *this)

{
  int *piVar1;
  
  DestructItems<TRefCountPtr<FRDGPooledBuffer>,int>
            ((TRefCountPtr<FRDGPooledBuffer> *)(this->AllocatedBuffers).AllocatorInstance.Data,
             (this->AllocatedBuffers).ArrayNum);
  piVar1 = &(this->AllocatedBuffers).ArrayMax;
  (this->AllocatedBuffers).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->AllocatedBuffers).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->AllocatedBufferHashes).ArrayMax;
  (this->AllocatedBufferHashes).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->AllocatedBufferHashes).AllocatorInstance,0,piVar1);
  }
  return;
}

// CreateBuffer @ 145da9b80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGPooledBuffer * __thiscall
FRDGBufferPool::CreateBuffer
          (FRDGBufferPool *this,FRHICommandListBase *param_1,FRDGBufferDesc *param_2,uint param_3,
          wchar_t *param_4)

{
  int *piVar1;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar2;
  wchar_t wVar3;
  longlong lVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  wchar_t *pwVar8;
  undefined8 uVar9;
  bool bVar10;
  ushort uVar11;
  longlong lVar12;
  FRDGPooledBuffer *pFVar13;
  FWriteBuffer *pFVar14;
  ulong64 uVar15;
  int iVar16;
  ulonglong uVar17;
  uint uVar18;
  TArray<TRefCountPtr<FRDGPooledBuffer>,TSizedDefaultAllocator<32>_> *pTVar19;
  bool bVar20;
  undefined1 auStackY_178 [32];
  uint local_128 [4];
  FRDGPooledBuffer *local_118;
  FLLMScope local_110;
  FLLMScope local_10c;
  FLLMScope local_108 [2];
  undefined1 local_100 [40];
  FName FStack_d8;
  FNameEntryId local_d0;
  uint uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  FMemScope local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  wchar_t *local_a0;
  FName FStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  uint *local_78;
  longlong local_70;
  TLogScope<0> local_68;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_178;
  bVar7 = false;
  uVar18 = param_2->NumElements * param_2->BytesPerElement;
  uVar17 = (ulonglong)_tls_index;
  local_128[0] = param_3;
  local_100._8_8_ = param_1;
  if (-1 < CpuChannel->Enabled) {
    UE::Trace::Private::FLogScope::ScopedStampedEnter<FCpuFRDGBufferPool_CreateBufferFields>
              ((TLogScope<1> *)&local_78);
    iVar16 = 0;
    wVar3 = *param_4;
    pwVar8 = param_4;
    while (wVar3 != L'\0') {
      pwVar8 = pwVar8 + 1;
      iVar16 = iVar16 + 1;
      wVar3 = *pwVar8;
    }
    UE::Trace::Private::Field_WriteStringWide(0,param_4,iVar16);
    *local_78 = uVar18;
    lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar17 * 8);
    if (*(char *)(lVar4 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar4 = *(longlong *)(lVar4 + 0x20);
    **(undefined1 **)(lVar4 + 0x20) = 6;
    lVar12 = *(longlong *)(lVar4 + 0x20) + 1;
    *(longlong *)(lVar4 + 0x20) = lVar12;
    if (lVar4 != local_70) {
      *(longlong *)(lVar4 + 0x28) = lVar12;
    }
    bVar7 = true;
    *(undefined8 *)(local_70 + 0x28) = *(undefined8 *)(local_70 + 0x20);
  }
  __GTraceCounterBufferPoolCount.Value = __GTraceCounterBufferPoolCount.Value + 1;
  if (-1 < CountersChannel->Enabled) {
    if (__GTraceCounterBufferPoolCount.CounterId == (atomic<unsigned_int>)0x0) {
      uVar11 = FCountersTrace::OutputInitCounter
                         (__GTraceCounterBufferPoolCount.CounterName,TraceCounterType_Int,
                          __GTraceCounterBufferPoolCount.CounterFlags & 0xf);
      LOCK();
      if (__GTraceCounterBufferPoolCount.CounterId == (atomic<unsigned_int>)0x0) {
        __GTraceCounterBufferPoolCount.CounterId._2_2_ = 0;
        __GTraceCounterBufferPoolCount.CounterId._0_2_ = uVar11;
      }
      UNLOCK();
    }
    FCountersTrace::OutputSetValue
              (__GTraceCounterBufferPoolCount.CounterId._0_2_,__GTraceCounterBufferPoolCount.Value);
  }
  __GTraceCounterBufferPoolCreateCount.Value = __GTraceCounterBufferPoolCreateCount.Value + 1;
  if (-1 < CountersChannel->Enabled) {
    if (__GTraceCounterBufferPoolCreateCount.CounterId == (atomic<unsigned_int>)0x0) {
      uVar11 = FCountersTrace::OutputInitCounter
                         (__GTraceCounterBufferPoolCreateCount.CounterName,TraceCounterType_Int,
                          __GTraceCounterBufferPoolCreateCount.CounterFlags & 0xf);
      LOCK();
      if (__GTraceCounterBufferPoolCreateCount.CounterId == (atomic<unsigned_int>)0x0) {
        __GTraceCounterBufferPoolCreateCount.CounterId._2_2_ = 0;
        __GTraceCounterBufferPoolCreateCount.CounterId._0_2_ = uVar11;
      }
      UNLOCK();
    }
    FCountersTrace::OutputSetValue
              (__GTraceCounterBufferPoolCreateCount.CounterId._0_2_,
               __GTraceCounterBufferPoolCreateCount.Value);
  }
  if ((uVar18 != 0) &&
     (__GTraceCounterBufferPoolSize.Value = __GTraceCounterBufferPoolSize.Value + (ulonglong)uVar18,
     -1 < CountersChannel->Enabled)) {
    if (__GTraceCounterBufferPoolSize.CounterId == (atomic<unsigned_int>)0x0) {
      uVar11 = FCountersTrace::OutputInitCounter
                         (__GTraceCounterBufferPoolSize.CounterName,TraceCounterType_Int,
                          __GTraceCounterBufferPoolSize.CounterFlags & 0xf);
      LOCK();
      if (__GTraceCounterBufferPoolSize.CounterId == (atomic<unsigned_int>)0x0) {
        __GTraceCounterBufferPoolSize.CounterId._2_2_ = 0;
        __GTraceCounterBufferPoolSize.CounterId._0_2_ = uVar11;
      }
      UNLOCK();
    }
    FCountersTrace::OutputSetValue
              (__GTraceCounterBufferPoolSize.CounterId._0_2_,__GTraceCounterBufferPoolSize.Value);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar17 * 8) + 0x9d4c) < ::_TSS0)
     && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name183,L"RHIMisc/BufferPool");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(local_108,LLMScope_Name183,false,None,Default,true);
  FMemScope::FMemScope(&local_b8,&LLMScope_Name183,true);
  bVar20 = -1 < MetadataChannel->Enabled;
  if (bVar20) {
    UE::Trace::Private::FLogScope::ScopedEnter<FMetadataStackClearScopeFields>(&local_68);
    *(undefined8 *)(local_68._8_8_ + 0x28) = *(undefined8 *)(local_68._8_8_ + 0x20);
  }
  FLLMClearScope::FLLMClearScope((FLLMClearScope *)&local_10c,Assets,Default);
  FLLMClearScope::FLLMClearScope((FLLMClearScope *)&local_110,AssetClasses,Default);
  local_100._20_4_ = param_2->BytesPerElement;
  local_100._24_4_ = param_2->Usage;
  local_100._28_4_ = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
  FStack_d8.ComparisonIndex.Value = 0;
  FStack_d8.Number = 0;
  uStack_cc = 0;
  uStack_c8 = 0;
  uStack_c4 = 0;
  uStack_c0 = 0;
  uStack_bc = 0;
  local_100._32_8_ = param_4;
  local_100._16_4_ = uVar18;
  local_d0.Value = RHIGetDefaultResourceState(local_100._24_4_,false);
  uVar9 = local_100._8_8_;
  local_b0 = CONCAT44(local_100._20_4_,local_100._16_4_);
  uStack_a8 = CONCAT44(local_100._28_4_,local_100._24_4_);
  local_90 = CONCAT44(uStack_cc,local_d0.Value);
  uStack_88 = CONCAT44(uStack_c4,uStack_c8);
  local_a0 = (wchar_t *)local_100._32_8_;
  FStack_98 = FStack_d8;
  local_80 = CONCAT44(uStack_bc,uStack_c0);
  FRHICommandListBase::CreateBuffer
            ((FRHICommandListBase *)local_100._8_8_,(FRHIBufferCreateDesc *)local_100);
  pFVar13 = ::operator_new(0xc0);
  if (pFVar13 == (FRDGPooledBuffer *)0x0) {
    local_118 = (FRDGPooledBuffer *)0x0;
  }
  else {
    local_100._8_8_ = local_100._0_8_;
    local_100._0_8_ = (FRHICommandListBase *)0x0;
    local_118 = FRDGPooledBuffer::FRDGPooledBuffer
                          (pFVar13,(FRHICommandListBase *)uVar9,(FRHIBuffer *)(local_100 + 8),
                           param_2,param_2->NumElements,param_4);
    if (local_118 != (FRDGPooledBuffer *)0x0) {
      LOCK();
      *(int *)&local_118->_padding_ = (int)local_118->_padding_ + 1;
      UNLOCK();
    }
  }
  pFVar13 = local_118;
  pTVar19 = &this->AllocatedBuffers;
  pFVar5 = (pTVar19->AllocatorInstance).Data;
  if (((pFVar5 <= (FScriptContainerElement *)&local_118) &&
      ((FScriptContainerElement *)&local_118 <
       pFVar5 + (longlong)(this->AllocatedBuffers).ArrayMax * 8)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar10)) {
    pcVar6 = (code *)swi(3);
    pFVar13 = (FRDGPooledBuffer *)(*pcVar6)();
    return pFVar13;
  }
  iVar16 = (this->AllocatedBuffers).ArrayNum;
  piVar1 = &(this->AllocatedBuffers).ArrayMax;
  if (iVar16 == *piVar1) {
    iVar16 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&pTVar19->AllocatorInstance,piVar1);
    (this->AllocatedBuffers).ArrayNum = iVar16;
  }
  (this->AllocatedBuffers).ArrayNum = iVar16 + 1;
  pTVar2 = &this->AllocatedBufferHashes;
  pFVar5 = (pTVar19->AllocatorInstance).Data + (longlong)iVar16 * 8;
  *(undefined8 *)pFVar5 = 0;
  *(FRDGPooledBuffer **)pFVar5 = local_118;
  pFVar5 = (pTVar2->AllocatorInstance).Data;
  local_118 = (FRDGPooledBuffer *)0x0;
  if (((pFVar5 <= (FScriptContainerElement *)local_128) &&
      ((FScriptContainerElement *)local_128 <
       pFVar5 + (longlong)(this->AllocatedBufferHashes).ArrayMax * 4)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar10)) {
    pcVar6 = (code *)swi(3);
    pFVar13 = (FRDGPooledBuffer *)(*pcVar6)();
    return pFVar13;
  }
  iVar16 = (this->AllocatedBufferHashes).ArrayNum;
  piVar1 = &(this->AllocatedBufferHashes).ArrayMax;
  if (iVar16 == *piVar1) {
    iVar16 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x404,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->AllocatedBufferHashes).ArrayNum = iVar16 + 1;
  *(uint *)((pTVar2->AllocatorInstance).Data + (longlong)iVar16 * 4) = local_128[0];
  if ((param_2->Usage & ReservedResource) != None) {
    pFVar13->CommittedSizeInBytes = 0;
  }
  if ((FRHICommandListBase *)local_100._0_8_ != (FRHICommandListBase *)0x0) {
    FRHIResource::Release((FRHIResource *)local_100._0_8_);
  }
  FLLMScope::~FLLMScope(&local_110);
  FLLMScope::~FLLMScope(&local_10c);
  if (bVar20) {
    lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar17 * 8);
    if (*(char *)(lVar4 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    pFVar14 = *(FWriteBuffer **)(lVar4 + 0x20);
    if ((int)pFVar14 - *(int *)&pFVar14->Cursor < 1) {
      pFVar14 = UE::Trace::Private::Writer_NextBuffer();
    }
    *pFVar14->Cursor = '\n';
    pFVar14->Cursor = pFVar14->Cursor + 1;
    pFVar14->Committed = pFVar14->Cursor;
  }
  FMemScope::~FMemScope(&local_b8);
  FLLMScope::~FLLMScope(local_108);
  if (bVar7) {
    uVar15 = UE::Trace::Private::TimeGetTimestamp();
    lVar12 = uVar15 - UE::Trace::Private::GStartCycle;
    lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar17 * 8);
    if (*(char *)(lVar4 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    pFVar14 = *(FWriteBuffer **)(lVar4 + 0x20);
    if ((int)pFVar14 - *(int *)&pFVar14->Cursor < 8) {
      pFVar14 = UE::Trace::Private::Writer_NextBuffer();
    }
    *(longlong *)pFVar14->Cursor = lVar12 * 0x100 + 0x12;
    pFVar14->Cursor = pFVar14->Cursor + 8;
    pFVar14->Committed = pFVar14->Cursor;
  }
  return pFVar13;
}

// DumpMemoryUsage @ 145dac2d0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FRDGBufferPool::DumpMemoryUsage(FRDGBufferPool *this,FOutputDevice *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  ForAnyElementType FVar3;
  FIdentityFunctor local_res8 [8];
  ForAnyElementType local_38;
  int local_30;
  int local_2c [5];
  
  FOutputDevice::Log(param_1,L"Pooled Buffers:");
  UE::FRecursiveMutex::Lock(&this->Mutex);
  iVar1 = (this->AllocatedBuffers).ArrayNum;
  pFVar2 = (this->AllocatedBuffers).AllocatorInstance.Data;
  local_38.Data = (FScriptContainerElement *)0x0;
  local_30 = iVar1;
  if (iVar1 == 0) {
    local_2c[0] = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar1,0,&local_38,iVar1,local_2c);
    ConstructItems<TRefCountPtr<FRDGPooledBuffer>,TRefCountPtr<FRDGPooledBuffer>,int>
              (local_38.Data,(TRefCountPtr<FRDGPooledBuffer> *)pFVar2,iVar1);
  }
  UE::FRecursiveMutex::Unlock(&this->Mutex);
  AlgoImpl::
  IntroSortInternal<TRefCountPtr<FRDGPooledBuffer>,int,FIdentityFunctor,_FRDGBufferPool::DumpMemoryUsage_::__l2::<lambda_1>_>
            ((TRefCountPtr<FRDGPooledBuffer> *)local_38.Data,local_30,local_res8[0],
             (<lambda_1>)local_res8[0]);
  iVar1 = local_30;
  pFVar2 = local_38.Data + (longlong)local_30 * 8;
  FVar3.Data = local_38.Data;
  while( true ) {
    if (local_30 != iVar1) {
      `TCheckedPointerIterator<TRefCountPtr<FRDGPooledBuffer>,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (FVar3.Data == pFVar2) break;
    FOutputDevice::LogfImpl
              (param_1,
               L"  %6.3fMB Name: %s, NumElements: %u, BytesPerElement: %u, UAV: %s, Frames Since Requested: %u"
              );
    FVar3.Data = FVar3.Data + 8;
  }
  DestructItems<TRefCountPtr<FRDGPooledBuffer>,int>
            ((TRefCountPtr<FRDGPooledBuffer> *)local_38.Data,local_30);
  if (local_38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data);
  }
  return;
}

// FindFreeBuffer @ 145db5e90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

TRefCountPtr<FRDGPooledBuffer> __thiscall
FRDGBufferPool::FindFreeBuffer
          (FRDGBufferPool *this,FRHICommandListBase *param_1,FRDGBufferDesc *param_2,
          wchar_t *param_3,ERDGPooledBufferAlignment param_4)

{
  FRecursiveMutex *this_00;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  FRDGBufferDesc *pFVar5;
  TRefCountPtr<FRDGPooledBuffer> TVar6;
  FRDGPooledBuffer *this_01;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined7 in_stack_00000029;
  ERDGPooledBufferAlignment in_stack_00000030;
  FRDGBufferDesc local_88;
  uint local_70;
  uint uStack_6c;
  EBufferUsageFlags EStack_68;
  undefined4 uStack_64;
  FShaderParametersMetadata *local_60;
  FRDGBufferDesc local_58;
  
  pFVar5 = GetAlignedBufferDesc
                     (&local_58,(FRDGBufferDesc *)param_3,
                      (wchar_t *)CONCAT71(in_stack_00000029,param_4),in_stack_00000030);
  local_88.BytesPerElement = pFVar5->BytesPerElement;
  local_88.NumElements = pFVar5->NumElements;
  local_88.Usage = pFVar5->Usage;
  local_88._12_4_ = *(undefined4 *)&pFVar5->field_0xc;
  local_88.Metadata = pFVar5->Metadata;
  uVar3 = ::GetTypeHash(&local_88);
  this_00 = &this->Mutex;
  if ((this_00 == (FRecursiveMutex *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    TVar6.Reference = (FRDGPooledBuffer *)(*pcVar1)();
    return (TRefCountPtr<FRDGPooledBuffer>)TVar6.Reference;
  }
  UE::FRecursiveMutex::Lock(this_00);
  uVar7 = 0;
  if (0 < (this->AllocatedBufferHashes).ArrayNum) {
    lVar9 = 0;
    lVar8 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar7 < (this->AllocatedBufferHashes).ArrayNum) {
        uVar4 = ~uVar7 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        TVar6.Reference = (FRDGPooledBuffer *)(*pcVar1)();
        return (TRefCountPtr<FRDGPooledBuffer>)TVar6.Reference;
      }
      if (*(uint *)((this->AllocatedBufferHashes).AllocatorInstance.Data + lVar8) == uVar3) {
        uVar4 = 0;
        if ((int)uVar7 < (this->AllocatedBuffers).ArrayNum) {
          uVar4 = ~uVar7 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          TVar6.Reference = (FRDGPooledBuffer *)(*pcVar1)();
          return (TRefCountPtr<FRDGPooledBuffer>)TVar6.Reference;
        }
        this_01 = *(FRDGPooledBuffer **)((this->AllocatedBuffers).AllocatorInstance.Data + lVar9);
        if ((uint)this_01->_padding_ < 2) {
          local_70 = (this_01->Desc).BytesPerElement;
          uStack_6c = (this_01->Desc).NumElements;
          EStack_68 = (this_01->Desc).Usage;
          uStack_64 = *(undefined4 *)&(this_01->Desc).field_0xc;
          local_60 = (this_01->Desc).Metadata;
          if ((((local_70 != local_88.BytesPerElement) ||
               (this_01->NumAllocatedElements != local_88.NumElements)) ||
              (EStack_68 != local_88.Usage)) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("Found->GetAlignedDesc() == Desc",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderGraphResourcePool.cpp"
                                 ,0x68,L""), bVar2)) {
            pcVar1 = (code *)swi(3);
            TVar6.Reference = (FRDGPooledBuffer *)(*pcVar1)();
            return (TRefCountPtr<FRDGPooledBuffer>)TVar6.Reference;
          }
          if (this_01 != (FRDGPooledBuffer *)0x0) goto LAB_145db60ac;
          break;
        }
      }
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 4;
      lVar9 = lVar9 + 8;
    } while ((int)uVar7 < (this->AllocatedBufferHashes).ArrayNum);
  }
  this_01 = CreateBuffer(this,(FRHICommandListBase *)param_2,&local_88,uVar3,
                         (wchar_t *)CONCAT71(in_stack_00000029,param_4));
LAB_145db60ac:
  (this_01->Desc).NumElements = *(uint *)(param_3 + 2);
  this_01->LastUsedFrame = this->FrameCounter;
  FRDGPooledBuffer::SetDebugLabelName
            (this_01,(FRHICommandListBase *)param_2,(wchar_t *)CONCAT71(in_stack_00000029,param_4));
  (param_1->MemManager).Top = (uchar *)this_01;
  LOCK();
  *(int *)&this_01->_padding_ = (int)this_01->_padding_ + 1;
  UNLOCK();
  if (this_00 != (FRecursiveMutex *)0x0) {
    UE::FRecursiveMutex::Unlock(this_00);
  }
  return (TRefCountPtr<FRDGPooledBuffer>)(FRDGPooledBuffer *)param_1;
}

// FinishSchedule @ 145db65c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRDGBufferPool::FinishSchedule
          (FRDGBufferPool *this,FRHICommandListBase *param_1,FRDGPooledBuffer *param_2)

{
  *(undefined4 *)&(param_2->Fences).TypedValue.field_0x11 = 0x1000000;
  (param_2->Fences).TypedValue.GraphicsForkJoin.Max = 0;
  (param_2->Fences).TypedValue.Pipelines = None;
  (param_2->Fences).TypedValue.Graphics = 0xffffffff;
  (param_2->Fences).TypedValue.AsyncCompute = 0xffffffff;
  (param_2->Fences).TypedValue.GraphicsForkJoin.Min = 0xffffffff;
  FRDGPooledBuffer::SetDebugLabelName(param_2,param_1,param_2->Name);
  return;
}

// ScheduleAllocation @ 145dcbaf0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGPooledBuffer * __thiscall
FRDGBufferPool::ScheduleAllocation
          (FRDGBufferPool *this,FRHICommandListBase *param_1,FRDGBufferDesc *param_2,
          wchar_t *param_3,ERDGPooledBufferAlignment param_4,FRHITransientAllocationFences *param_5)

{
  uint uVar1;
  FRDGBufferDesc *pFVar2;
  FRDGPooledBuffer *pFVar3;
  FRDGBufferDesc local_38;
  FRDGBufferDesc local_20;
  
  pFVar2 = GetAlignedBufferDesc(&local_20,param_2,param_3,param_4);
  local_38.BytesPerElement = pFVar2->BytesPerElement;
  local_38.NumElements = pFVar2->NumElements;
  local_38.Usage = pFVar2->Usage;
  local_38._12_4_ = *(undefined4 *)&pFVar2->field_0xc;
  local_38.Metadata = pFVar2->Metadata;
  uVar1 = ::GetTypeHash(&local_38);
  pFVar3 = TryFindPooledBuffer<_FRDGBufferPool::ScheduleAllocation_::__l2::<lambda_1>_>
                     (this,&local_38,uVar1,(<lambda_1> *)&param_5);
  if (pFVar3 == (FRDGPooledBuffer *)0x0) {
    pFVar3 = CreateBuffer(this,param_1,&local_38,uVar1,param_3);
  }
  (pFVar3->Desc).NumElements = param_2->NumElements;
  if ((pFVar3->Fences).bIsSet != false) {
    (pFVar3->Fences).bIsSet = false;
  }
  pFVar3->LastUsedFrame = this->FrameCounter;
  return pFVar3;
}

// ScheduleDeallocation @ 145dcbbe0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FRDGBufferPool::ScheduleDeallocation
          (FRDGBufferPool *this,FRDGPooledBuffer *param_1,FRHITransientAllocationFences *param_2)

{
  TInterval<unsigned_int> TVar1;
  uint uVar2;
  undefined3 uVar3;
  TOptional<FRHITransientAllocationFences> *pTVar4;
  
  pTVar4 = &param_1->Fences;
  if ((TOptional<FRHITransientAllocationFences> *)param_2 != pTVar4) {
    uVar2 = param_2->AsyncCompute;
    TVar1 = param_2->GraphicsForkJoin;
    (pTVar4->TypedValue).Graphics = param_2->Graphics;
    (pTVar4->TypedValue).AsyncCompute = uVar2;
    (param_1->Fences).TypedValue.GraphicsForkJoin = TVar1;
    uVar3 = *(undefined3 *)&param_2->field_0x11;
    (param_1->Fences).TypedValue.Pipelines = param_2->Pipelines;
    *(undefined3 *)&(param_1->Fences).TypedValue.field_0x11 = uVar3;
    (param_1->Fences).bIsSet = true;
  }
  return;
}

// TickPoolElements @ 145dd1d80

void __thiscall FRDGBufferPool::TickPoolElements(FRDGBufferPool *this)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  ushort uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  int local_res8;
  longlong local_res10;
  
  uVar9 = 0;
  local_res8 = 0;
  local_res10 = 0;
  if ((&this->Mutex == (FRecursiveMutex *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  UE::FRecursiveMutex::Lock(&this->Mutex);
  iVar10 = 0;
  if (0 < (this->AllocatedBuffers).ArrayNum) {
    lVar11 = 0;
    do {
      uVar12 = ~uVar9 >> 0x1f;
      uVar8 = 0;
      if ((int)uVar9 < (this->AllocatedBuffers).ArrayNum) {
        uVar8 = uVar12;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar3 = (this->AllocatedBuffers).AllocatorInstance.Data;
      iVar10 = 0;
      lVar4 = *(longlong *)(pFVar3 + lVar11 * 8);
      if (((lVar4 != 0) && (iVar10 = *(int *)(lVar4 + 8), iVar10 == 0)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Result > 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\RefCounting.h"
                             ,0x262,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar4 = *(longlong *)(pFVar3 + lVar11 * 8);
      if ((iVar10 == 1) && (0x1e < this->FrameCounter - *(int *)(lVar4 + 0xa0))) {
        local_res10 = local_res10 +
                      (ulonglong)(uint)(*(int *)(lVar4 + 0x10) * *(int *)(lVar4 + 0x9c));
        uVar8 = 0;
        if ((int)uVar9 < (this->AllocatedBuffers).ArrayNum) {
          uVar8 = uVar12;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        TArray<TRefCountPtr<FRDGPooledBuffer>,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
                  (&this->AllocatedBuffers,uVar9);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&(this->AllocatedBuffers).AllocatorInstance,(this->AllocatedBuffers).ArrayNum
                   ,&(this->AllocatedBuffers).ArrayMax);
        uVar8 = 0;
        if ((int)uVar9 < (this->AllocatedBufferHashes).ArrayNum) {
          uVar8 = uVar12;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar2 = (this->AllocatedBufferHashes).ArrayNum;
        pFVar3 = (this->AllocatedBufferHashes).AllocatorInstance.Data;
        iVar10 = ~uVar9 + iVar2;
        if (1 < iVar10) {
          iVar10 = 1;
        }
        if (iVar10 != 0) {
          memmove(pFVar3 + lVar11 * 4,pFVar3 + (longlong)(iVar2 - iVar10) * 4,(longlong)iVar10 << 2)
          ;
        }
        piVar1 = &(this->AllocatedBufferHashes).ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,&(this->AllocatedBufferHashes).AllocatorInstance,
                   (this->AllocatedBufferHashes).ArrayNum,&(this->AllocatedBufferHashes).ArrayMax);
        local_res8 = local_res8 + 1;
      }
      else {
        uVar9 = uVar9 + 1;
        lVar11 = lVar11 + 1;
      }
    } while ((int)uVar9 < (this->AllocatedBuffers).ArrayNum);
    iVar10 = local_res8;
    if ((local_res10 != 0) &&
       (__GTraceCounterBufferPoolSize.Value = __GTraceCounterBufferPoolSize.Value - local_res10,
       -1 < CountersChannel->Enabled)) {
      if (__GTraceCounterBufferPoolSize.CounterId == (atomic<unsigned_int>)0x0) {
        uVar7 = FCountersTrace::OutputInitCounter
                          (__GTraceCounterBufferPoolSize.CounterName,TraceCounterType_Int,
                           __GTraceCounterBufferPoolSize.CounterFlags & 0xf);
        LOCK();
        if (__GTraceCounterBufferPoolSize.CounterId == (atomic<unsigned_int>)0x0) {
          __GTraceCounterBufferPoolSize.CounterId._2_2_ = 0;
          __GTraceCounterBufferPoolSize.CounterId._0_2_ = uVar7;
        }
        UNLOCK();
      }
      FCountersTrace::OutputSetValue
                (__GTraceCounterBufferPoolSize.CounterId._0_2_,__GTraceCounterBufferPoolSize.Value);
    }
  }
  lVar11 = (longlong)iVar10;
  if ((lVar11 != 0) &&
     (__GTraceCounterBufferPoolCount.Value = __GTraceCounterBufferPoolCount.Value - lVar11,
     -1 < CountersChannel->Enabled)) {
    if (__GTraceCounterBufferPoolCount.CounterId == (atomic<unsigned_int>)0x0) {
      uVar7 = FCountersTrace::OutputInitCounter
                        (__GTraceCounterBufferPoolCount.CounterName,TraceCounterType_Int,
                         __GTraceCounterBufferPoolCount.CounterFlags & 0xf);
      LOCK();
      if (__GTraceCounterBufferPoolCount.CounterId == (atomic<unsigned_int>)0x0) {
        __GTraceCounterBufferPoolCount.CounterId._2_2_ = 0;
        __GTraceCounterBufferPoolCount.CounterId._0_2_ = uVar7;
      }
      UNLOCK();
    }
    FCountersTrace::OutputSetValue
              (__GTraceCounterBufferPoolCount.CounterId._0_2_,__GTraceCounterBufferPoolCount.Value);
  }
  if ((__GTraceCounterBufferPoolReleaseCount.Value != lVar11) &&
     (__GTraceCounterBufferPoolReleaseCount.Value = lVar11, -1 < CountersChannel->Enabled)) {
    if (__GTraceCounterBufferPoolReleaseCount.CounterId == (atomic<unsigned_int>)0x0) {
      uVar7 = FCountersTrace::OutputInitCounter
                        (__GTraceCounterBufferPoolReleaseCount.CounterName,TraceCounterType_Int,
                         __GTraceCounterBufferPoolReleaseCount.CounterFlags & 0xf);
      LOCK();
      if (__GTraceCounterBufferPoolReleaseCount.CounterId == (atomic<unsigned_int>)0x0) {
        __GTraceCounterBufferPoolReleaseCount.CounterId._2_2_ = 0;
        __GTraceCounterBufferPoolReleaseCount.CounterId._0_2_ = uVar7;
      }
      UNLOCK();
    }
    FCountersTrace::OutputSetValue
              (__GTraceCounterBufferPoolReleaseCount.CounterId._0_2_,
               __GTraceCounterBufferPoolReleaseCount.Value);
  }
  if ((__GTraceCounterBufferPoolCreateCount.Value != 0) &&
     (__GTraceCounterBufferPoolCreateCount.Value = 0, -1 < CountersChannel->Enabled)) {
    if (__GTraceCounterBufferPoolCreateCount.CounterId == (atomic<unsigned_int>)0x0) {
      uVar7 = FCountersTrace::OutputInitCounter
                        (__GTraceCounterBufferPoolCreateCount.CounterName,TraceCounterType_Int,
                         __GTraceCounterBufferPoolCreateCount.CounterFlags & 0xf);
      LOCK();
      if (__GTraceCounterBufferPoolCreateCount.CounterId == (atomic<unsigned_int>)0x0) {
        __GTraceCounterBufferPoolCreateCount.CounterId._2_2_ = 0;
        __GTraceCounterBufferPoolCreateCount.CounterId._0_2_ = uVar7;
      }
      UNLOCK();
    }
    FCountersTrace::OutputSetValue
              (__GTraceCounterBufferPoolCreateCount.CounterId._0_2_,
               __GTraceCounterBufferPoolCreateCount.Value);
  }
  this->FrameCounter = this->FrameCounter + 1;
  if (&this->Mutex != (FRecursiveMutex *)0x0) {
    UE::FRecursiveMutex::Unlock(&this->Mutex);
  }
  return;
}

