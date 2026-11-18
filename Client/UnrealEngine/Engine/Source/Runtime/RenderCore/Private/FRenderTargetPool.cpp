// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 17

// ReleaseRHI @ 145ddbb30

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FRenderTargetPool::ReleaseRHI(FRenderTargetPool *this)

{
  FRecursiveMutex *this_00;
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  
  this_00 = &this->Mutex;
  if (this_00 == (FRecursiveMutex *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  UE::FRecursiveMutex::Lock(this_00);
  DestructItems<TRefCountPtr<FPooledRenderTarget>,int>
            ((TRefCountPtr<FPooledRenderTarget> *)(this->DeferredDeleteArray).AllocatorInstance.Data
             ,(this->DeferredDeleteArray).ArrayNum);
  piVar1 = &(this->DeferredDeleteArray).ArrayMax;
  (this->DeferredDeleteArray).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->DeferredDeleteArray).AllocatorInstance,0,piVar1);
  }
  DestructItems<TRefCountPtr<FPooledRenderTarget>,int>
            ((TRefCountPtr<FPooledRenderTarget> *)(this->PooledRenderTargets).AllocatorInstance.Data
             ,(this->PooledRenderTargets).ArrayNum);
  piVar1 = &(this->PooledRenderTargets).ArrayMax;
  (this->PooledRenderTargets).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->PooledRenderTargets).AllocatorInstance,0,piVar1);
  }
  if (this_00 != (FRecursiveMutex *)0x0) {
    UE::FRecursiveMutex::Unlock(this_00);
  }
  return;
}

// CompactPool @ 145dfe050

void __thiscall FRenderTargetPool::CompactPool(FRenderTargetPool *this)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  uVar10 = (this->PooledRenderTargets).ArrayNum;
  uVar8 = 0;
  if (uVar10 != 0) {
    do {
      uVar9 = ~uVar8 >> 0x1f;
      uVar6 = 0;
      if ((int)uVar8 < (this->PooledRenderTargets).ArrayNum) {
        uVar6 = uVar9;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (*(longlong *)
           ((this->PooledRenderTargets).AllocatorInstance.Data + (longlong)(int)uVar8 * 8) == 0) {
        uVar6 = 0;
        if ((int)uVar8 < (this->PooledRenderTargets).ArrayNum) {
          uVar6 = uVar9;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        TArray<TRefCountPtr<FPooledRenderTarget>,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
                  (&this->PooledRenderTargets,uVar8);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&(this->PooledRenderTargets).AllocatorInstance,
                   (this->PooledRenderTargets).ArrayNum,&(this->PooledRenderTargets).ArrayMax);
        uVar6 = 0;
        if ((int)uVar8 < (this->PooledRenderTargetHashes).ArrayNum) {
          uVar6 = uVar9;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar2 = (this->PooledRenderTargetHashes).ArrayNum;
        pFVar3 = (this->PooledRenderTargetHashes).AllocatorInstance.Data;
        iVar7 = iVar2 + ~uVar8;
        if (1 < iVar7) {
          iVar7 = 1;
        }
        if (iVar7 != 0) {
          memmove(pFVar3 + (longlong)(int)uVar8 * 4,pFVar3 + (longlong)(iVar2 - iVar7) * 4,
                  (longlong)iVar7 << 2);
        }
        piVar1 = &(this->PooledRenderTargetHashes).ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,&(this->PooledRenderTargetHashes).AllocatorInstance,
                   (this->PooledRenderTargetHashes).ArrayNum,
                   &(this->PooledRenderTargetHashes).ArrayMax);
        uVar10 = uVar10 - 1;
      }
      else {
        uVar8 = uVar8 + 1;
      }
    } while (uVar8 < uVar10);
  }
  return;
}

// CreateRenderTarget @ 145e01250

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FPooledRenderTarget * __thiscall
FRenderTargetPool::CreateRenderTarget
          (FRenderTargetPool *this,FRHICommandListBase *param_1,FRHITextureDesc *param_2,
          uint param_3,wchar_t *param_4)

{
  wchar_t *pwVar1;
  int *piVar2;
  longlong *plVar3;
  wchar_t wVar4;
  FScriptContainerElement *pFVar5;
  FRHIResource *pFVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  ushort uVar10;
  uint uVar11;
  longlong lVar12;
  FCsvProfiler *pFVar13;
  undefined4 *puVar14;
  FPooledRenderTarget *this_00;
  FPooledRenderTargetDesc *pFVar15;
  TRefCountPtr<FRHITexture> TVar16;
  FPooledRenderTarget *pFVar17;
  FInitializer *pFVar18;
  TRefCountPtr<FRHIUnorderedAccessView> TVar19;
  ulong64 uVar20;
  FWriteBuffer *pFVar21;
  longlong lVar22;
  EPixelFormat EVar23;
  int iVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined1 auStack_218 [32];
  FPooledRenderTarget **local_1f8;
  FScriptContainerElement *local_1f0;
  longlong local_1e8;
  longlong local_1e0;
  undefined8 local_1d8;
  FPooledRenderTarget *local_1c8 [2];
  FPooledRenderTarget *local_1b8;
  undefined4 local_1b0;
  undefined4 uStack_1ac;
  undefined1 local_1a8 [16];
  undefined1 local_198 [16];
  longlong lStack_188;
  undefined1 *local_180;
  longlong lStack_178;
  longlong local_168;
  longlong lStack_160;
  TLogScope<1> local_158;
  FRHITextureDesc local_148;
  wchar_t *local_f8;
  longlong local_f0;
  longlong local_e8;
  longlong local_e0;
  longlong local_d8;
  undefined1 local_c8 [16];
  FPooledRenderTargetDesc local_b8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_218;
  iVar24 = 0;
  local_1b0 = 0;
  bVar8 = false;
  local_1c8[0]._0_4_ = param_3;
  if (-1 < CpuChannel->Enabled) {
    UE::Trace::Private::FLogScope::ScopedStampedEnter<FCpuFRenderTargetPool_CreateTextureFields>
              (&local_158);
    wVar4 = *param_4;
    pwVar1 = param_4;
    while (wVar4 != L'\0') {
      pwVar1 = pwVar1 + 1;
      iVar24 = iVar24 + 1;
      wVar4 = *pwVar1;
    }
    UE::Trace::Private::Field_WriteStringWide(0,param_4,iVar24);
    lVar22 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar22 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar22 = *(longlong *)(lVar22 + 0x20);
    **(undefined1 **)(lVar22 + 0x20) = 6;
    lVar12 = *(longlong *)(lVar22 + 0x20) + 1;
    *(longlong *)(lVar22 + 0x20) = lVar12;
    if (lVar22 != local_158._8_8_) {
      *(longlong *)(lVar22 + 0x28) = lVar12;
    }
    bVar8 = true;
    *(undefined8 *)(local_158._8_8_ + 0x28) = *(undefined8 *)(local_158._8_8_ + 0x20);
  }
  if (0 < GRenderTargetPoolLogCreationSizes) {
    pFVar13 = FCsvProfiler::Get();
    if (pFVar13 != (FCsvProfiler *)0x0) {
      pFVar13 = FCsvProfiler::Get();
      bVar9 = FCsvProfiler::IsCapturing_Renderthread(pFVar13);
      if (bVar9) {
        pFVar13 = FCsvProfiler::Get();
        FCsvProfiler::GetCaptureFrameNumberRT(pFVar13);
      }
    }
    if (2 < (byte)LogRenderTargetPool._0_1_) {
      bVar9 = FRHITextureDesc::Validate(param_2,L"",false);
      if (bVar9) {
        puVar14 = (undefined4 *)
                  (**(code **)(GDynamicRHI->_padding_ + 0x178))(GDynamicRHI,local_c8,param_2,0);
        uVar25 = *puVar14;
        uVar26 = puVar14[1];
      }
      else {
        uVar25 = 0;
        uVar26 = 0;
        local_168 = 0;
        lStack_160 = 0;
      }
      local_1f8 = (FPooledRenderTarget **)CONCAT44(uVar26,uVar25);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRenderTargetPool);
    }
  }
  pFVar17 = (FPooledRenderTarget *)0x0;
  FRHITextureDesc::FRHITextureDesc(&local_148,param_2);
  local_f8 = param_4;
  local_f0 = 0x70;
  local_e8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  FLazyName::Resolve(&::ClassName);
  local_e0 = CONCAT44(uStack_1ac,local_1b0);
  this_00 = ::operator_new(0x110);
  if (this_00 != (FPooledRenderTarget *)0x0) {
    pFVar15 = ::Translate(&local_b8,&local_148);
    TVar16 = FRHICommandListBase::CreateTexture(param_1,(FRHITextureCreateDesc *)local_1a8);
    pFVar17 = FPooledRenderTarget::FPooledRenderTarget
                        (this_00,(FRHITexture *)(TVar16.Reference)->_padding_,pFVar15,this);
    if ((FRHIResource *)local_1a8._0_8_ != (FRHIResource *)0x0) {
      FRHIResource::Release((FRHIResource *)local_1a8._0_8_);
    }
  }
  if ((this_00 != (FPooledRenderTarget *)0x0) &&
     (local_b8.AliasableFormats.AllocatorInstance.SecondaryData != (ForElementType<EPixelFormat>)0x0
     )) {
    FMemory::Free((void *)local_b8.AliasableFormats.AllocatorInstance.SecondaryData);
  }
  if (pFVar17 != (FPooledRenderTarget *)0x0) {
    LOCK();
    pFVar17->NumRefs = pFVar17->NumRefs + 1;
    UNLOCK();
  }
  pFVar5 = (this->PooledRenderTargets).AllocatorInstance.Data;
  local_1b8 = pFVar17;
  if ((pFVar5 <= (FScriptContainerElement *)&local_1b8) &&
     (lVar22 = (longlong)(this->PooledRenderTargets).ArrayMax,
     (FScriptContainerElement *)&local_1b8 < pFVar5 + lVar22 * 8)) {
    local_1e0 = (longlong)(this->PooledRenderTargets).ArrayNum;
    local_1d8 = 8;
    local_1f8 = &local_1b8;
    local_1f0 = pFVar5;
    local_1e8 = lVar22;
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar9) {
      pcVar7 = (code *)swi(3);
      pFVar17 = (FPooledRenderTarget *)(*pcVar7)();
      return pFVar17;
    }
  }
  iVar24 = (this->PooledRenderTargets).ArrayNum;
  piVar2 = &(this->PooledRenderTargets).ArrayMax;
  if (iVar24 == *piVar2) {
    iVar24 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&(this->PooledRenderTargets).AllocatorInstance,piVar2);
  }
  (this->PooledRenderTargets).ArrayNum = iVar24 + 1;
  pFVar5 = (this->PooledRenderTargets).AllocatorInstance.Data;
  *(undefined8 *)(pFVar5 + (longlong)iVar24 * 8) = 0;
  *(FPooledRenderTarget **)(pFVar5 + (longlong)iVar24 * 8) = local_1b8;
  pFVar5 = (this->PooledRenderTargetHashes).AllocatorInstance.Data;
  local_1b8 = (FPooledRenderTarget *)0x0;
  if ((pFVar5 <= (FScriptContainerElement *)local_1c8) &&
     (lVar22 = (longlong)(this->PooledRenderTargetHashes).ArrayMax,
     (FScriptContainerElement *)local_1c8 < pFVar5 + lVar22 * 4)) {
    local_1e0 = (longlong)(this->PooledRenderTargetHashes).ArrayNum;
    local_1d8 = 4;
    local_1f8 = local_1c8;
    local_1f0 = pFVar5;
    local_1e8 = lVar22;
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar9) {
      pcVar7 = (code *)swi(3);
      pFVar17 = (FPooledRenderTarget *)(*pcVar7)();
      return pFVar17;
    }
  }
  iVar24 = (this->PooledRenderTargetHashes).ArrayNum;
  piVar2 = &(this->PooledRenderTargetHashes).ArrayMax;
  if (iVar24 == *piVar2) {
    iVar24 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x404,&(this->PooledRenderTargetHashes).AllocatorInstance,piVar2);
  }
  (this->PooledRenderTargetHashes).ArrayNum = iVar24 + 1;
  *(uint *)((this->PooledRenderTargetHashes).AllocatorInstance.Data + (longlong)iVar24 * 4) =
       (uint)local_1c8[0];
  if (((uint)(int)param_2->Flags >> 0x11 & 1) != 0) {
    if ((((int)GMaxRHIFeatureLevel < 3) && (GMaxRHIFeatureLevel != ES3_1)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("GMaxRHIFeatureLevel >= ERHIFeatureLevel::SM5 || GMaxRHIFeatureLevel == ERHIFeatureLevel::ES3_1"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderTargetPool.cpp"
                           ,0x73,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      pFVar17 = (FPooledRenderTarget *)(*pcVar7)();
      return pFVar17;
    }
    EVar23 = param_2->UAVFormat;
    if (GRHIGlobals.SupportsUAVFormatAliasing == false) {
      if (((EVar23 != PF_Unknown) && (EVar23 != param_2->Format)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Desc.UAVFormat == PF_Unknown || Desc.UAVFormat == Desc.Format",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderTargetPool.cpp"
                             ,0x83,L"UAV aliasing is not supported by the current RHI."), bVar9)) {
        pcVar7 = (code *)swi(3);
        pFVar17 = (FPooledRenderTarget *)(*pcVar7)();
        return pFVar17;
      }
      lStack_178 = 0;
      local_180 = &DAT_100000003;
      FRHIViewDesc::FTextureUAV::FInitializer::SetDimensionFromTexture
                ((FInitializer *)&local_180,(FRHITexture *)pFVar17->_padding_);
      TVar19 = FRHICommandListBase::CreateUnorderedAccessView
                         (param_1,(FRHITexture *)local_198,(FInitializer *)pFVar17->_padding_);
      plVar3 = &pFVar17->_padding_;
      if ((FRHIUnorderedAccessView *)plVar3 != TVar19.Reference) {
        pFVar6 = (FRHIResource *)*plVar3;
        *plVar3 = *(longlong *)TVar19.Reference;
        *(undefined8 *)TVar19.Reference = 0;
        if (pFVar6 != (FRHIResource *)0x0) {
          FRHIResource::Release(pFVar6);
        }
      }
    }
    else {
      if (EVar23 == PF_Unknown) {
        EVar23 = param_2->Format;
      }
      lStack_188 = 0;
      local_198._8_8_ = &DAT_100000003;
      pFVar18 = FRHIViewDesc::FTextureUAV::FInitializer::SetDimensionFromTexture
                          ((FInitializer *)(local_198 + 8),(FRHITexture *)pFVar17->_padding_);
      pFVar18->field_0x1 = EVar23;
      TVar19 = FRHICommandListBase::CreateUnorderedAccessView
                         (param_1,(FRHITexture *)(local_1a8 + 8),(FInitializer *)pFVar17->_padding_)
      ;
      plVar3 = &pFVar17->_padding_;
      local_198._0_8_ = local_1a8._8_8_;
      if ((FRHIUnorderedAccessView *)plVar3 != TVar19.Reference) {
        pFVar6 = (FRHIResource *)*plVar3;
        *plVar3 = *(longlong *)TVar19.Reference;
        *(undefined8 *)TVar19.Reference = 0;
        if (pFVar6 != (FRHIResource *)0x0) {
          FRHIResource::Release(pFVar6);
          local_198._0_8_ = local_1a8._8_8_;
        }
      }
    }
    if ((FRHIResource *)local_198._0_8_ != (FRHIResource *)0x0) {
      FRHIResource::Release((FRHIResource *)local_198._0_8_);
    }
  }
  uVar11 = ComputeSizeInKB(pFVar17);
  this->AllocationLevelInKB = this->AllocationLevelInKB + uVar11;
  __GTraceCounterRenderTargetPoolCount.Value = __GTraceCounterRenderTargetPoolCount.Value + 1;
  if (-1 < CountersChannel->Enabled) {
    if (__GTraceCounterRenderTargetPoolCount.CounterId == (atomic<unsigned_int>)0x0) {
      uVar10 = FCountersTrace::OutputInitCounter
                         (__GTraceCounterRenderTargetPoolCount.CounterName,TraceCounterType_Int,
                          __GTraceCounterRenderTargetPoolCount.CounterFlags & 0xf);
      LOCK();
      if (__GTraceCounterRenderTargetPoolCount.CounterId == (atomic<unsigned_int>)0x0) {
        __GTraceCounterRenderTargetPoolCount.CounterId._2_2_ = 0;
        __GTraceCounterRenderTargetPoolCount.CounterId._0_2_ = uVar10;
      }
      UNLOCK();
    }
    FCountersTrace::OutputSetValue
              (__GTraceCounterRenderTargetPoolCount.CounterId._0_2_,
               __GTraceCounterRenderTargetPoolCount.Value);
  }
  lVar22 = (ulonglong)this->AllocationLevelInKB << 10;
  if ((__GTraceCounterRenderTargetPoolSize.Value != lVar22) &&
     (__GTraceCounterRenderTargetPoolSize.Value = lVar22, -1 < CountersChannel->Enabled)) {
    if (__GTraceCounterRenderTargetPoolSize.CounterId == (atomic<unsigned_int>)0x0) {
      uVar10 = FCountersTrace::OutputInitCounter
                         (__GTraceCounterRenderTargetPoolSize.CounterName,TraceCounterType_Int,
                          __GTraceCounterRenderTargetPoolSize.CounterFlags & 0xf);
      LOCK();
      if (__GTraceCounterRenderTargetPoolSize.CounterId == (atomic<unsigned_int>)0x0) {
        __GTraceCounterRenderTargetPoolSize.CounterId._2_2_ = 0;
        __GTraceCounterRenderTargetPoolSize.CounterId._0_2_ = uVar10;
      }
      UNLOCK();
    }
    FCountersTrace::OutputSetValue
              (__GTraceCounterRenderTargetPoolSize.CounterId._0_2_,
               __GTraceCounterRenderTargetPoolSize.Value);
  }
  if (local_148.AliasableFormats.AllocatorInstance.SecondaryData !=
      (ForElementType<EPixelFormat>)0x0) {
    FMemory::Free((void *)local_148.AliasableFormats.AllocatorInstance.SecondaryData);
  }
  if (bVar8) {
    uVar20 = UE::Trace::Private::TimeGetTimestamp();
    lVar12 = uVar20 - UE::Trace::Private::GStartCycle;
    lVar22 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar22 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    pFVar21 = *(FWriteBuffer **)(lVar22 + 0x20);
    if ((int)pFVar21 - *(int *)&pFVar21->Cursor < 8) {
      pFVar21 = UE::Trace::Private::Writer_NextBuffer();
    }
    *(longlong *)pFVar21->Cursor = lVar12 * 0x100 + 0x12;
    pFVar21->Cursor = pFVar21->Cursor + 8;
    pFVar21->Committed = pFVar21->Cursor;
  }
  return pFVar17;
}

// CreateUntrackedElement @ 145e03a30

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FRenderTargetPool::CreateUntrackedElement
          (FRenderTargetPool *this,FPooledRenderTargetDesc *param_1,
          TRefCountPtr<IPooledRenderTarget> *param_2,FSceneRenderTargetItem *param_3)

{
  FPooledRenderTarget *pFVar1;
  FPooledRenderTarget *pFVar2;
  
  pFVar2 = ::operator_new(0x110);
  if (pFVar2 == (FPooledRenderTarget *)0x0) {
    pFVar2 = (FPooledRenderTarget *)0x0;
  }
  else {
    pFVar2 = FPooledRenderTarget::FPooledRenderTarget
                       (pFVar2,(param_3->TargetableTexture).Reference,param_1,
                        (FRenderTargetPool *)0x0);
  }
  FSceneRenderTargetItem::operator=((FSceneRenderTargetItem *)&pFVar2->_padding_,param_3);
  pFVar1 = (FPooledRenderTarget *)param_2->Reference;
  if (pFVar1 != pFVar2) {
    param_2->Reference = (IPooledRenderTarget *)pFVar2;
    if (pFVar2 != (FPooledRenderTarget *)0x0) {
      (**(code **)(pFVar2->_padding_ + 0x30))(pFVar2);
    }
    if (pFVar1 != (FPooledRenderTarget *)0x0) {
      (**(code **)(pFVar1->_padding_ + 0x38))(pFVar1);
    }
  }
  return;
}

// DumpMemoryUsage @ 145e05420

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FRenderTargetPool::DumpMemoryUsage(FRenderTargetPool *this,FOutputDevice *param_1)

{
  FPooledRenderTarget *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  FRenderTargetWithSize *pFVar7;
  FRecursiveMutex *pFVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ForAnyElementType FVar11;
  uint uVar12;
  wchar_t *pwVar13;
  FIdentityFunctor local_res8;
  uint local_res18 [2];
  uchar local_res20;
  ForAnyElementType local_f0;
  undefined8 local_e8;
  uint local_e0;
  undefined1 local_dc [4];
  uint local_d8 [2];
  wchar_t *local_d0;
  FScriptContainerElement *local_c8;
  FRenderTargetWithSize local_c0;
  wchar_t *local_b0;
  wchar_t *local_a8;
  FRecursiveMutex *local_a0;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68 [2];
  
  uVar9 = 0;
  pFVar8 = &this->Mutex;
  local_res18[0] = 0;
  local_a0 = pFVar8;
  if ((pFVar8 == (FRecursiveMutex *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  UE::FRecursiveMutex::Lock(pFVar8);
  uVar12 = (this->PooledRenderTargets).ArrayNum;
  local_f0.Data = (FScriptContainerElement *)0x0;
  local_e8 = 0;
  if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
  }
  if (0 < (int)uVar12) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar12,&local_f0,0,(int *)((longlong)&local_e8 + 4));
  }
  uVar12 = 0;
  uVar10 = uVar9;
  if (0 < (this->PooledRenderTargets).ArrayNum) {
    do {
      uVar4 = 0;
      if ((int)uVar12 < (this->PooledRenderTargets).ArrayNum) {
        uVar4 = ~uVar12 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = *(FPooledRenderTarget **)
                ((this->PooledRenderTargets).AllocatorInstance.Data + uVar10);
      if (pFVar1 != (FPooledRenderTarget *)0x0) {
        local_c0.RenderTarget = pFVar1;
        local_c0.SizeInKB = ComputeSizeInKB(pFVar1);
        if (((local_f0.Data <= &local_c0) &&
            (&local_c0 < (FRenderTargetWithSize *)(local_f0.Data + (longlong)local_e8._4_4_ * 0x10))
            ) && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar5 = (uint)local_e8;
        if ((uint)local_e8 == local_e8._4_4_) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&local_f0,(int *)((longlong)&local_e8 + 4));
        }
        local_e8 = CONCAT44(local_e8._4_4_,iVar5 + 1);
        *(FPooledRenderTarget **)&local_f0.Data[(longlong)iVar5 * 0x10].field_0x0 =
             local_c0.RenderTarget;
        *(ulonglong *)(local_f0.Data + (longlong)iVar5 * 0x10 + 8) =
             CONCAT44(local_c0._12_4_,local_c0.SizeInKB);
      }
      uVar12 = uVar12 + 1;
      uVar10 = uVar10 + 8;
    } while ((int)uVar12 < (this->PooledRenderTargets).ArrayNum);
  }
  local_res8 = SUB81(this,0);
  AlgoImpl::
  IntroSortInternal<FRenderTargetWithSize,int,FIdentityFunctor,TDereferenceWrapper<FRenderTargetWithSize,TLess<void>_>_>
            ((FRenderTargetWithSize *)local_f0.Data,(uint)local_e8,local_res8,
             (TLess<void> *)local_dc);
  FOutputDevice::Log(param_1,L"Pooled Render Targets:");
  uVar6 = (ulonglong)(int)(uint)local_e8;
  pFVar7 = (FRenderTargetWithSize *)(local_f0.Data + uVar6 * 0x10);
  local_e0 = (uint)local_e8;
  uVar10 = uVar6;
  FVar11.Data = local_f0.Data;
  while( true ) {
    if ((int)uVar6 != (int)uVar10) {
      local_res18[0] = local_res18[0] & 0xffffff00;
      `TCheckedPointerIterator<FRenderTargetWithSize,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res18);
    }
    if ((FRenderTargetWithSize *)FVar11.Data == pFVar7) break;
    pFVar1 = ((FRenderTargetWithSize *)FVar11.Data)->RenderTarget;
    local_d0 = (pFVar1->Desc).DebugName;
    local_res20 = (pFVar1->Desc).NumMips;
    if (((pFVar1->Desc).field13_0x58.PackedBits & 1) != 0) {
      uVar9 = (ulonglong)((uint)uVar9 | 1);
      ::FString::PrintfImpl(&local_88,L"[%3d]");
    }
    if (1 < (pFVar1->Desc).Depth) {
      uVar9 = (ulonglong)((uint)uVar9 | 2);
      ::FString::PrintfImpl(&local_98,L"x%3d");
    }
    FOutputDevice::LogfImpl(param_1,L"  %6.3fMB %4dx%4d%s%s %2dmip(s) %s (%s) Unused frames: %d");
    if (((uVar9 & 2) != 0) &&
       (uVar9 = (ulonglong)((uint)uVar9 & 0xfffffffd),
       local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    if (((uVar9 & 1) != 0) &&
       (uVar9 = (ulonglong)((uint)uVar9 & 0xfffffffe),
       local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    uVar6 = local_e8 & 0xffffffff;
    FVar11.Data = FVar11.Data + 0x10;
    uVar10 = (ulonglong)local_e0;
  }
  local_e0 = 0;
  local_d8[0] = 0;
  local_d8[1] = 0;
  GetStats(this,&local_e0,local_d8 + 1,local_d8);
  FOutputDevice::LogfImpl(param_1,L"%.3fMB total, %.3fMB used, %.3fMB unused, %d render targets");
  FOutputDevice::Log(param_1,L"Deferred Render Targets:");
  uVar12 = 0;
  pFVar8 = &this->Mutex;
  if (0 < (this->DeferredDeleteArray).ArrayNum) {
    local_d0 = (wchar_t *)0x0;
    do {
      pwVar13 = local_d0;
      uVar4 = 0;
      if ((int)uVar12 < (this->DeferredDeleteArray).ArrayNum) {
        uVar4 = ~uVar12 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = *(FPooledRenderTarget **)
                ((this->DeferredDeleteArray).AllocatorInstance.Data + (longlong)pwVar13);
      if (pFVar1 != (FPooledRenderTarget *)0x0) {
        local_b0 = GPixelFormats[(pFVar1->Desc).Format].Name;
        local_a8 = (pFVar1->Desc).DebugName;
        local_res20 = (pFVar1->Desc).NumMips;
        if (((pFVar1->Desc).field13_0x58.PackedBits & 1) == 0) {
          local_c8 = (FScriptContainerElement *)0x151150a88;
        }
        else {
          uVar9 = (ulonglong)((uint)uVar9 | 4);
          ::FString::PrintfImpl(local_68,L"[%3d]");
          local_c8 = (FScriptContainerElement *)0x15060d16c;
          if (local_68[0].Data.ArrayNum != 0) {
            local_c8 = local_68[0].Data.AllocatorInstance.Data;
          }
        }
        if (1 < (pFVar1->Desc).Depth) {
          uVar9 = (ulonglong)((uint)uVar9 | 8);
          ::FString::PrintfImpl(&local_78,L"x%3d");
        }
        ComputeSizeInKB(pFVar1);
        FOutputDevice::LogfImpl(param_1,L"  %6.3fMB %4dx%4d%s%s %2dmip(s) %s (%s)");
        if (((uVar9 & 8) != 0) &&
           (uVar9 = (ulonglong)((uint)uVar9 & 0xfffffff7),
           local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
        if (((uVar9 & 4) != 0) &&
           (uVar9 = (ulonglong)((uint)uVar9 & 0xfffffffb),
           local_68[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_68[0].Data.AllocatorInstance.Data);
        }
        ComputeSizeInKB(pFVar1);
        pwVar13 = local_d0;
      }
      local_d0 = pwVar13 + 4;
      uVar12 = uVar12 + 1;
      pFVar8 = local_a0;
    } while ((int)uVar12 < (this->DeferredDeleteArray).ArrayNum);
  }
  FOutputDevice::LogfImpl(param_1,L"%.3fMB Deferred total");
  if ((FRenderTargetWithSize *)local_f0.Data != (FRenderTargetWithSize *)0x0) {
    FMemory::Free(local_f0.Data);
  }
  if (pFVar8 != (FRecursiveMutex *)0x0) {
    UE::FRecursiveMutex::Unlock(pFVar8);
  }
  return;
}

// FindFreeElement @ 145e098c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

TRefCountPtr<IPooledRenderTarget> __thiscall
FRenderTargetPool::FindFreeElement
          (FRenderTargetPool *this,FRHICommandListBase *param_1,FRHITextureDesc *param_2,
          wchar_t *param_3)

{
  FRecursiveMutex *this_00;
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  TRefCountPtr<IPooledRenderTarget> TVar6;
  FPooledRenderTarget *pFVar7;
  wchar_t *in_stack_00000028;
  <lambda_1> local_58 [24];
  
  *(ulonglong *)param_3 = *(ulonglong *)param_3 & 0xffffffffffdfbfff;
  *(ulonglong *)param_3 = *(ulonglong *)param_3 | 8;
  uVar4 = ::GetTypeHash((FRHITextureDesc *)param_3);
  this_00 = &this->Mutex;
  if (this_00 == (FRecursiveMutex *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      TVar6.Reference = (IPooledRenderTarget *)(*pcVar2)();
      return (TRefCountPtr<IPooledRenderTarget>)TVar6.Reference;
    }
  }
  UE::FRecursiveMutex::Lock(this_00);
  pFVar7 = TryFindRenderTarget<_FRenderTargetPool::TryFindRenderTarget_::__l2::<lambda_1>_>
                     (this,(FRHITextureDesc *)param_3,uVar4,local_58);
  if (pFVar7 == (FPooledRenderTarget *)0x0) {
    pFVar7 = CreateRenderTarget(this,(FRHICommandListBase *)param_2,(FRHITextureDesc *)param_3,uVar4
                                ,in_stack_00000028);
  }
  iVar5 = wcscmp((pFVar7->Desc).DebugName,in_stack_00000028);
  if (iVar5 != 0) {
    lVar1 = pFVar7->_padding_;
    (pFVar7->Desc).DebugName = in_stack_00000028;
    (**(code **)(GDynamicRHI->_padding_ + 0x218))(GDynamicRHI,param_2,lVar1,in_stack_00000028);
  }
  pFVar7->UnusedForNFrames = 0;
  (param_1->MemManager).Top = (uchar *)pFVar7;
  (**(code **)(pFVar7->_padding_ + 0x30))(pFVar7);
  if (this_00 != (FRecursiveMutex *)0x0) {
    UE::FRecursiveMutex::Unlock(this_00);
  }
  if (*(void **)(param_3 + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)(param_3 + 0x20));
  }
  return (TRefCountPtr<IPooledRenderTarget>)(IPooledRenderTarget *)param_1;
}

// FindFreeElement @ 145e099e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

bool __thiscall
FRenderTargetPool::FindFreeElement
          (FRenderTargetPool *this,FRHICommandListBase *param_1,FRHITextureDesc *param_2,
          TRefCountPtr<IPooledRenderTarget> *param_3,wchar_t *param_4)

{
  FRecursiveMutex *this_00;
  IPooledRenderTarget *pIVar1;
  ForElementType<EPixelFormat> FVar2;
  code *pcVar3;
  FRHICommandListBase *pFVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  bool bVar8;
  ushort uVar9;
  uint uVar10;
  int iVar11;
  FPooledRenderTargetDesc *pFVar12;
  FRHITextureDesc *pFVar13;
  longlong lVar14;
  FPooledRenderTarget *pFVar15;
  FPooledRenderTarget *pFVar16;
  undefined1 auStackY_148 [32];
  <lambda_1> local_118 [8];
  FRHICommandListBase *local_110;
  TRefCountPtr<IPooledRenderTarget> local_108;
  FRHITextureDesc local_100;
  undefined1 local_a8 [80];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_148;
  local_110 = param_1;
  bVar5 = FRHITextureDesc::Validate(param_2,L"",false);
  if (!bVar5) {
    return true;
  }
  if ((param_2->NumMips == '\0') &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Desc.NumMips > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderTargetPool.cpp"
                         ,0xe9,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  pFVar15 = (FPooledRenderTarget *)param_3->Reference;
  bVar5 = false;
  pFVar16 = (FPooledRenderTarget *)0x0;
  if (pFVar15 != (FPooledRenderTarget *)0x0) {
    pFVar12 = (FPooledRenderTargetDesc *)(**(code **)(pFVar15->_padding_ + 0x10))(pFVar15);
    pFVar13 = (FRHITextureDesc *)::Translate((FRDGTextureDesc *)local_a8,pFVar12);
    bVar5 = FRHITextureDesc::operator==(pFVar13,param_2);
    if ((void *)local_a8._64_8_ != (void *)0x0) {
      FMemory::Free((void *)local_a8._64_8_);
    }
    if (bVar5) {
      lVar14 = pFVar15->_padding_;
      (pFVar15->Desc).DebugName = param_4;
      if (lVar14 != 0) {
        (**(code **)(GDynamicRHI->_padding_ + 0x218))(GDynamicRHI,local_110,lVar14,param_4);
      }
      cVar7 = (**(code **)(param_3->Reference->_padding_ + 8))();
      if (cVar7 == '\0') {
        return true;
      }
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Out->IsFree()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderTargetPool.cpp"
                         ,0xfd,L"");
      if (!bVar5) {
        return true;
      }
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    pIVar1 = param_3->Reference;
    if (pIVar1 != (IPooledRenderTarget *)0x0) {
      param_3->Reference = (IPooledRenderTarget *)0x0;
      (**(code **)(pIVar1->_padding_ + 0x38))();
    }
    bVar5 = FPooledRenderTarget::IsFree(pFVar15);
    pFVar16 = pFVar15;
  }
  this_00 = &this->Mutex;
  if ((this_00 == (FRecursiveMutex *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar8)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  UE::FRecursiveMutex::Lock(this_00);
  if (bVar5 != false) {
    uVar10 = ComputeSizeInKB(pFVar16);
    this->AllocationLevelInKB = this->AllocationLevelInKB - uVar10;
    __GTraceCounterRenderTargetPoolCount.Value = __GTraceCounterRenderTargetPoolCount.Value + -1;
    if (-1 < CountersChannel->Enabled) {
      if (__GTraceCounterRenderTargetPoolCount.CounterId == (atomic<unsigned_int>)0x0) {
        uVar9 = FCountersTrace::OutputInitCounter
                          (__GTraceCounterRenderTargetPoolCount.CounterName,TraceCounterType_Int,
                           __GTraceCounterRenderTargetPoolCount.CounterFlags & 0xf);
        LOCK();
        if (__GTraceCounterRenderTargetPoolCount.CounterId == (atomic<unsigned_int>)0x0) {
          __GTraceCounterRenderTargetPoolCount.CounterId._2_2_ = 0;
          __GTraceCounterRenderTargetPoolCount.CounterId._0_2_ = uVar9;
        }
        UNLOCK();
      }
      FCountersTrace::OutputSetValue
                (__GTraceCounterRenderTargetPoolCount.CounterId._0_2_,
                 __GTraceCounterRenderTargetPoolCount.Value);
    }
    lVar14 = (ulonglong)this->AllocationLevelInKB << 10;
    if ((__GTraceCounterRenderTargetPoolSize.Value != lVar14) &&
       (__GTraceCounterRenderTargetPoolSize.Value = lVar14, -1 < CountersChannel->Enabled)) {
      if (__GTraceCounterRenderTargetPoolSize.CounterId == (atomic<unsigned_int>)0x0) {
        uVar9 = FCountersTrace::OutputInitCounter
                          (__GTraceCounterRenderTargetPoolSize.CounterName,TraceCounterType_Int,
                           __GTraceCounterRenderTargetPoolSize.CounterFlags & 0xf);
        LOCK();
        if (__GTraceCounterRenderTargetPoolSize.CounterId == (atomic<unsigned_int>)0x0) {
          __GTraceCounterRenderTargetPoolSize.CounterId._2_2_ = 0;
          __GTraceCounterRenderTargetPoolSize.CounterId._0_2_ = uVar9;
        }
        UNLOCK();
      }
      FCountersTrace::OutputSetValue
                (__GTraceCounterRenderTargetPoolSize.CounterId._0_2_,
                 __GTraceCounterRenderTargetPoolSize.Value);
    }
    iVar11 = FindIndex(this,(IPooledRenderTarget *)pFVar16);
    if ((iVar11 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderTargetPool.cpp"
                           ,0x110,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    FreeElementAtIndex(this,iVar11);
  }
  pFVar13 = FRHITextureDesc::FRHITextureDesc(&local_100,param_2);
  pFVar13->Flags = pFVar13->Flags & ~(FastVRAM|FastVRAMPartialAlloc);
  pFVar13->Flags = pFVar13->Flags | ShaderResource;
  uVar10 = ::GetTypeHash(pFVar13);
  if ((this_00 == (FRecursiveMutex *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  UE::FRecursiveMutex::Lock(this_00);
  pFVar15 = TryFindRenderTarget<_FRenderTargetPool::TryFindRenderTarget_::__l2::<lambda_1>_>
                      (this,pFVar13,uVar10,local_118);
  pFVar4 = local_110;
  if (pFVar15 == (FPooledRenderTarget *)0x0) {
    pFVar15 = CreateRenderTarget(this,local_110,pFVar13,uVar10,param_4);
  }
  iVar11 = wcscmp((pFVar15->Desc).DebugName,param_4);
  if (iVar11 != 0) {
    lVar14 = pFVar15->_padding_;
    (pFVar15->Desc).DebugName = param_4;
    (**(code **)(GDynamicRHI->_padding_ + 0x218))(GDynamicRHI,pFVar4,lVar14,param_4);
  }
  pFVar15->UnusedForNFrames = 0;
  (**(code **)(pFVar15->_padding_ + 0x30))(pFVar15);
  if (this_00 != (FRecursiveMutex *)0x0) {
    UE::FRecursiveMutex::Unlock(this_00);
  }
  FVar2 = (pFVar13->AliasableFormats).AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<EPixelFormat>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  if (param_3 == &local_108) {
    lVar14 = pFVar15->_padding_;
  }
  else {
    pFVar16 = (FPooledRenderTarget *)param_3->Reference;
    param_3->Reference = (IPooledRenderTarget *)pFVar15;
    if (pFVar16 == (FPooledRenderTarget *)0x0) goto LAB_145e09dc2;
    lVar14 = pFVar16->_padding_;
    pFVar15 = pFVar16;
  }
  (**(code **)(lVar14 + 0x38))(pFVar15);
LAB_145e09dc2:
  if (this_00 != (FRecursiveMutex *)0x0) {
    UE::FRecursiveMutex::Unlock(this_00);
  }
  return false;
}

// FindIndex @ 145e09de0

int __thiscall FRenderTargetPool::FindIndex(FRenderTargetPool *this,IPooledRenderTarget *param_1)

{
  FRecursiveMutex *this_00;
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  this_00 = &this->Mutex;
  if ((this_00 == (FRecursiveMutex *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  UE::FRecursiveMutex::Lock(this_00);
  if (param_1 != (IPooledRenderTarget *)0x0) {
    uVar1 = (this->PooledRenderTargets).ArrayNum;
    uVar6 = 0;
    if (uVar1 != 0) {
      do {
        uVar5 = 0;
        if ((int)uVar6 < (this->PooledRenderTargets).ArrayNum) {
          uVar5 = ~uVar6 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          iVar4 = (*pcVar2)();
          return iVar4;
        }
        if (*(IPooledRenderTarget **)
             ((this->PooledRenderTargets).AllocatorInstance.Data + (longlong)(int)uVar6 * 8) ==
            param_1) goto LAB_145e09eb1;
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar1);
    }
  }
  uVar6 = 0xffffffff;
LAB_145e09eb1:
  if (this_00 != (FRecursiveMutex *)0x0) {
    UE::FRecursiveMutex::Unlock(this_00);
  }
  return uVar6;
}

// FinishSchedule @ 145e0a740

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRenderTargetPool::FinishSchedule
          (FRenderTargetPool *this,FRHICommandListBase *param_1,FPooledRenderTarget *param_2,
          wchar_t *param_3)

{
  longlong lVar1;
  int iVar2;
  
  *(undefined4 *)&(param_2->PooledTexture).Fences.TypedValue.field_0x11 = 0x1000000;
  (param_2->PooledTexture).Fences.TypedValue.GraphicsForkJoin.Max = 0;
  (param_2->PooledTexture).Fences.TypedValue.Pipelines = None;
  (param_2->PooledTexture).Fences.TypedValue.Graphics = 0xffffffff;
  (param_2->PooledTexture).Fences.TypedValue.AsyncCompute = 0xffffffff;
  (param_2->PooledTexture).Fences.TypedValue.GraphicsForkJoin.Min = 0xffffffff;
  iVar2 = wcscmp((param_2->Desc).DebugName,param_3);
  if (iVar2 != 0) {
    lVar1 = param_2->_padding_;
    (param_2->Desc).DebugName = param_3;
    (**(code **)(GDynamicRHI->_padding_ + 0x218))(GDynamicRHI,param_1,lVar1,param_3);
  }
  return;
}

// FreeElementAtIndex @ 145e0b530

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FRenderTargetPool::FreeElementAtIndex(FRenderTargetPool *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  FPooledRenderTarget *this_00;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  
  lVar5 = (longlong)param_1;
  uVar4 = 0;
  if (param_1 < (this->PooledRenderTargets).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (this->PooledRenderTargets).AllocatorInstance.Data;
  this_00 = *(FPooledRenderTarget **)(pFVar1 + lVar5 * 8);
  if (this_00 != (FPooledRenderTarget *)0x0) {
    *(undefined8 *)(pFVar1 + lVar5 * 8) = 0;
    FPooledRenderTarget::Release(this_00);
  }
  uVar4 = 0;
  if (param_1 < (this->PooledRenderTargetHashes).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  *(undefined4 *)((this->PooledRenderTargetHashes).AllocatorInstance.Data + lVar5 * 4) = 0;
  return;
}

// FreeUnusedResource @ 145e0b620

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FRenderTargetPool::FreeUnusedResource
          (FRenderTargetPool *this,TRefCountPtr<IPooledRenderTarget> *param_1)

{
  FRecursiveMutex *this_00;
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FPooledRenderTarget *pFVar3;
  IPooledRenderTarget *pIVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  ushort uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  
  this_00 = &this->Mutex;
  if ((this_00 == (FRecursiveMutex *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  UE::FRecursiveMutex::Lock(this_00);
  uVar9 = FindIndex(this,param_1->Reference);
  if (uVar9 != 0xffffffff) {
    uVar10 = 0;
    if ((int)uVar9 < (this->PooledRenderTargets).ArrayNum) {
      uVar10 = ~uVar9 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar3 = *(FPooledRenderTarget **)
              ((this->PooledRenderTargets).AllocatorInstance.Data + (longlong)(int)uVar9 * 8);
    if (((uint)pFVar3->NumRefs < 2) &&
       (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_6180128158470110761>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderTargetPool.cpp"
                           ,0x1d7,"Element->GetRefCount() >= 2"), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pIVar4 = param_1->Reference;
    if (pIVar4 != (IPooledRenderTarget *)0x0) {
      param_1->Reference = (IPooledRenderTarget *)0x0;
      (**(code **)(pIVar4->_padding_ + 0x38))();
    }
    if (pFVar3->NumRefs == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("RefCount >= 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderTargetPool.cpp"
                         ,0x2c8,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    else if (pFVar3->NumRefs == 1) {
      uVar10 = ComputeSizeInKB(pFVar3);
      this->AllocationLevelInKB = this->AllocationLevelInKB - uVar10;
      __GTraceCounterRenderTargetPoolCount.Value = __GTraceCounterRenderTargetPoolCount.Value + -1;
      if (-1 < CountersChannel->Enabled) {
        if (__GTraceCounterRenderTargetPoolCount.CounterId == (atomic<unsigned_int>)0x0) {
          uVar8 = FCountersTrace::OutputInitCounter
                            (__GTraceCounterRenderTargetPoolCount.CounterName,TraceCounterType_Int,
                             __GTraceCounterRenderTargetPoolCount.CounterFlags & 0xf);
          LOCK();
          if (__GTraceCounterRenderTargetPoolCount.CounterId == (atomic<unsigned_int>)0x0) {
            __GTraceCounterRenderTargetPoolCount.CounterId._2_2_ = 0;
            __GTraceCounterRenderTargetPoolCount.CounterId._0_2_ = uVar8;
          }
          UNLOCK();
        }
        FCountersTrace::OutputSetValue
                  (__GTraceCounterRenderTargetPoolCount.CounterId._0_2_,
                   __GTraceCounterRenderTargetPoolCount.Value);
      }
      lVar12 = (ulonglong)this->AllocationLevelInKB << 10;
      if ((__GTraceCounterRenderTargetPoolSize.Value != lVar12) &&
         (__GTraceCounterRenderTargetPoolSize.Value = lVar12, -1 < CountersChannel->Enabled)) {
        if (__GTraceCounterRenderTargetPoolSize.CounterId == (atomic<unsigned_int>)0x0) {
          uVar8 = FCountersTrace::OutputInitCounter
                            (__GTraceCounterRenderTargetPoolSize.CounterName,TraceCounterType_Int,
                             __GTraceCounterRenderTargetPoolSize.CounterFlags & 0xf);
          LOCK();
          if (__GTraceCounterRenderTargetPoolSize.CounterId == (atomic<unsigned_int>)0x0) {
            __GTraceCounterRenderTargetPoolSize.CounterId._2_2_ = 0;
            __GTraceCounterRenderTargetPoolSize.CounterId._0_2_ = uVar8;
          }
          UNLOCK();
        }
        FCountersTrace::OutputSetValue
                  (__GTraceCounterRenderTargetPoolSize.CounterId._0_2_,
                   __GTraceCounterRenderTargetPoolSize.Value);
      }
      uVar10 = 0;
      if ((int)uVar9 < (this->PooledRenderTargets).ArrayNum) {
        uVar10 = ~uVar9 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar5 = (this->DeferredDeleteArray).AllocatorInstance.Data;
      pFVar2 = (this->PooledRenderTargets).AllocatorInstance.Data + (longlong)(int)uVar9 * 8;
      if (((pFVar5 <= pFVar2) &&
          (pFVar2 < pFVar5 + (longlong)(this->DeferredDeleteArray).ArrayMax * 8)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar11 = (this->DeferredDeleteArray).ArrayNum;
      piVar1 = &(this->DeferredDeleteArray).ArrayMax;
      if (iVar11 == *piVar1) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&(this->DeferredDeleteArray).AllocatorInstance,piVar1);
      }
      (this->DeferredDeleteArray).ArrayNum = iVar11 + 1;
      pFVar5 = (this->DeferredDeleteArray).AllocatorInstance.Data;
      *(undefined8 *)(pFVar5 + (longlong)iVar11 * 8) = 0;
      lVar12 = *(longlong *)pFVar2;
      *(longlong *)(pFVar5 + (longlong)iVar11 * 8) = lVar12;
      if (lVar12 != 0) {
        LOCK();
        *(int *)(lVar12 + 0x88) = *(int *)(lVar12 + 0x88) + 1;
        UNLOCK();
      }
      FreeElementAtIndex(this,uVar9);
    }
  }
  if (this_00 == (FRecursiveMutex *)0x0) {
    return;
  }
  UE::FRecursiveMutex::Unlock(this_00);
  return;
}

// FreeUnusedResources @ 145e0b990

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FRenderTargetPool::FreeUnusedResources(FRenderTargetPool *this)

{
  FRecursiveMutex *this_00;
  int *piVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  FPooledRenderTarget *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  ushort uVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  
  this_00 = &this->Mutex;
  if ((this_00 == (FRecursiveMutex *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  UE::FRecursiveMutex::Lock(this_00);
  uVar3 = (this->PooledRenderTargets).ArrayNum;
  uVar12 = 0;
  if (uVar3 != 0) {
    do {
      uVar9 = 0;
      if ((int)uVar12 < (this->PooledRenderTargets).ArrayNum) {
        uVar9 = ~uVar12 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar4 = *(FPooledRenderTarget **)
                ((this->PooledRenderTargets).AllocatorInstance.Data + (longlong)(int)uVar12 * 8);
      if (pFVar4 != (FPooledRenderTarget *)0x0) {
        if (pFVar4->NumRefs == 0) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("RefCount >= 1",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderTargetPool.cpp"
                             ,0x2c8,L"");
          if (bVar7) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        else if (pFVar4->NumRefs == 1) {
          uVar9 = ComputeSizeInKB(pFVar4);
          this->AllocationLevelInKB = this->AllocationLevelInKB - uVar9;
          __GTraceCounterRenderTargetPoolCount.Value =
               __GTraceCounterRenderTargetPoolCount.Value + -1;
          if (-1 < CountersChannel->Enabled) {
            if (__GTraceCounterRenderTargetPoolCount.CounterId == (atomic<unsigned_int>)0x0) {
              uVar8 = FCountersTrace::OutputInitCounter
                                (__GTraceCounterRenderTargetPoolCount.CounterName,
                                 TraceCounterType_Int,
                                 __GTraceCounterRenderTargetPoolCount.CounterFlags & 0xf);
              LOCK();
              if (__GTraceCounterRenderTargetPoolCount.CounterId == (atomic<unsigned_int>)0x0) {
                __GTraceCounterRenderTargetPoolCount.CounterId._2_2_ = 0;
                __GTraceCounterRenderTargetPoolCount.CounterId._0_2_ = uVar8;
              }
              UNLOCK();
            }
            FCountersTrace::OutputSetValue
                      (__GTraceCounterRenderTargetPoolCount.CounterId._0_2_,
                       __GTraceCounterRenderTargetPoolCount.Value);
          }
          lVar11 = (ulonglong)this->AllocationLevelInKB << 10;
          if ((__GTraceCounterRenderTargetPoolSize.Value != lVar11) &&
             (__GTraceCounterRenderTargetPoolSize.Value = lVar11, -1 < CountersChannel->Enabled)) {
            if (__GTraceCounterRenderTargetPoolSize.CounterId == (atomic<unsigned_int>)0x0) {
              uVar8 = FCountersTrace::OutputInitCounter
                                (__GTraceCounterRenderTargetPoolSize.CounterName,
                                 TraceCounterType_Int,
                                 __GTraceCounterRenderTargetPoolSize.CounterFlags & 0xf);
              LOCK();
              if (__GTraceCounterRenderTargetPoolSize.CounterId == (atomic<unsigned_int>)0x0) {
                __GTraceCounterRenderTargetPoolSize.CounterId._2_2_ = 0;
                __GTraceCounterRenderTargetPoolSize.CounterId._0_2_ = uVar8;
              }
              UNLOCK();
            }
            FCountersTrace::OutputSetValue
                      (__GTraceCounterRenderTargetPoolSize.CounterId._0_2_,
                       __GTraceCounterRenderTargetPoolSize.Value);
          }
          uVar9 = 0;
          if ((int)uVar12 < (this->PooledRenderTargets).ArrayNum) {
            uVar9 = ~uVar12 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar5 = (this->DeferredDeleteArray).AllocatorInstance.Data;
          pFVar2 = (this->PooledRenderTargets).AllocatorInstance.Data + (longlong)(int)uVar12 * 8;
          if (((pFVar5 <= pFVar2) &&
              (pFVar2 < pFVar5 + (longlong)(this->DeferredDeleteArray).ArrayMax * 8)) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar10 = (this->DeferredDeleteArray).ArrayNum;
          piVar1 = &(this->DeferredDeleteArray).ArrayMax;
          if (iVar10 == *piVar1) {
            iVar10 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&(this->DeferredDeleteArray).AllocatorInstance,piVar1);
          }
          (this->DeferredDeleteArray).ArrayNum = iVar10 + 1;
          pFVar5 = (this->DeferredDeleteArray).AllocatorInstance.Data;
          *(undefined8 *)(pFVar5 + (longlong)iVar10 * 8) = 0;
          lVar11 = *(longlong *)pFVar2;
          *(longlong *)(pFVar5 + (longlong)iVar10 * 8) = lVar11;
          if (lVar11 != 0) {
            LOCK();
            *(int *)(lVar11 + 0x88) = *(int *)(lVar11 + 0x88) + 1;
            UNLOCK();
          }
          FreeElementAtIndex(this,uVar12);
        }
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 < uVar3);
  }
  if (this_00 == (FRecursiveMutex *)0x0) {
    return;
  }
  UE::FRecursiveMutex::Unlock(this_00);
  return;
}

// GetElementById @ 145e0f130

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FPooledRenderTarget * __thiscall
FRenderTargetPool::GetElementById(FRenderTargetPool *this,uint param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FPooledRenderTarget *pFVar5;
  
  uVar1 = (this->PooledRenderTargets).ArrayNum;
  if (uVar1 <= param_1) {
    return (FPooledRenderTarget *)0x0;
  }
  uVar4 = 0;
  if ((int)param_1 < (int)uVar1) {
    uVar4 = ~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FPooledRenderTarget *)(*pcVar2)();
      return pFVar5;
    }
  }
  return *(FPooledRenderTarget **)
          ((this->PooledRenderTargets).AllocatorInstance.Data + (longlong)(int)param_1 * 8);
}

// GetStats @ 145e151d0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FRenderTargetPool::GetStats(FRenderTargetPool *this,uint *param_1,uint *param_2,uint *param_3)

{
  FRecursiveMutex *this_00;
  FPooledRenderTarget *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  
  this_00 = &this->Mutex;
  if ((this_00 == (FRecursiveMutex *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  UE::FRecursiveMutex::Lock(this_00);
  *param_1 = (this->PooledRenderTargets).ArrayNum;
  uVar5 = 0;
  *param_3 = 0;
  *param_2 = 0;
  if ((this->PooledRenderTargets).ArrayNum != 0) {
    do {
      uVar4 = 0;
      if ((int)uVar5 < (this->PooledRenderTargets).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = *(FPooledRenderTarget **)
                ((this->PooledRenderTargets).AllocatorInstance.Data + (longlong)(int)uVar5 * 8);
      if (pFVar1 != (FPooledRenderTarget *)0x0) {
        uVar4 = ComputeSizeInKB(pFVar1);
        *param_2 = *param_2 + uVar4;
        if (pFVar1->NumRefs == 0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("RefCount >= 1",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderTargetPool.cpp"
                             ,0x2c8,L"");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        else if (pFVar1->NumRefs == 1) goto LAB_145e152fe;
        *param_3 = *param_3 + uVar4;
      }
LAB_145e152fe:
      uVar5 = uVar5 + 1;
    } while (uVar5 < (uint)(this->PooledRenderTargets).ArrayNum);
  }
  if ((this->AllocationLevelInKB != *param_2) &&
     (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_6180128158470110920>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderTargetPool.cpp"
                         ,0x138,"AllocationLevelInKB == OutWholePoolInKB"), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (this_00 == (FRecursiveMutex *)0x0) {
    return;
  }
  UE::FRecursiveMutex::Unlock(this_00);
  return;
}

// ScheduleAllocation @ 145e24910

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FPooledRenderTarget * __thiscall
FRenderTargetPool::ScheduleAllocation
          (FRenderTargetPool *this,FRHICommandListBase *param_1,FRHITextureDesc *param_2,
          wchar_t *param_3,FRHITransientAllocationFences *param_4)

{
  ForElementType<EPixelFormat> FVar1;
  uint uVar2;
  FPooledRenderTarget *pFVar3;
  <lambda_1> local_48 [3];
  
  param_2->Flags = param_2->Flags & ~(FastVRAM|FastVRAMPartialAlloc);
  param_2->Flags = param_2->Flags | ShaderResource;
  uVar2 = ::GetTypeHash(param_2);
  local_48[0].Fences = param_4;
  pFVar3 = TryFindRenderTarget<_FRenderTargetPool::ScheduleAllocation_::__l2::<lambda_1>_>
                     (this,param_2,uVar2,local_48);
  if (pFVar3 == (FPooledRenderTarget *)0x0) {
    pFVar3 = CreateRenderTarget(this,param_1,param_2,uVar2,param_3);
  }
  if ((pFVar3->PooledTexture).Fences.bIsSet != false) {
    (pFVar3->PooledTexture).Fences.bIsSet = false;
  }
  pFVar3->UnusedForNFrames = 0;
  FVar1 = (param_2->AliasableFormats).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<EPixelFormat>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  return pFVar3;
}

// ScheduleDeallocation @ 145e249c0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FRenderTargetPool::ScheduleDeallocation
          (FRenderTargetPool *this,FPooledRenderTarget *param_1,
          FRHITransientAllocationFences *param_2)

{
  TInterval<unsigned_int> TVar1;
  uint uVar2;
  undefined3 uVar3;
  TOptional<FRHITransientAllocationFences> *pTVar4;
  
  pTVar4 = &(param_1->PooledTexture).Fences;
  if ((TOptional<FRHITransientAllocationFences> *)param_2 != pTVar4) {
    uVar2 = param_2->AsyncCompute;
    TVar1 = param_2->GraphicsForkJoin;
    (pTVar4->TypedValue).Graphics = param_2->Graphics;
    (pTVar4->TypedValue).AsyncCompute = uVar2;
    (param_1->PooledTexture).Fences.TypedValue.GraphicsForkJoin = TVar1;
    uVar3 = *(undefined3 *)&param_2->field_0x11;
    (param_1->PooledTexture).Fences.TypedValue.Pipelines = param_2->Pipelines;
    *(undefined3 *)&(param_1->PooledTexture).Fences.TypedValue.field_0x11 = uVar3;
    (param_1->PooledTexture).Fences.bIsSet = true;
  }
  return;
}

// TickPoolElements @ 145e350d0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FRenderTargetPool::TickPoolElements(FRenderTargetPool *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FPooledRenderTarget *pFVar3;
  FName FVar4;
  code *pcVar5;
  float fVar6;
  bool bVar7;
  ushort uVar8;
  uint uVar9;
  longlong lVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<FStat_STAT_RenderTargetPoolSize> FVar12;
  FThreadStats *pFVar13;
  FThreadStatsPool *pFVar14;
  FThreadSafeStaticStat<FStat_STAT_RenderTargetPoolUsed> FVar15;
  FThreadSafeStaticStat<FStat_STAT_RenderTargetPoolCount> FVar16;
  longlong *plVar17;
  TConsoleVariableData<int> *pTVar18;
  uint uVar19;
  FScriptContainerElement *pFVar20;
  uint uVar21;
  int iVar22;
  uchar auVar23 [8];
  int iVar24;
  FNameEntryId FVar25;
  uchar auVar26 [8];
  uint uVar27;
  uint local_res8;
  uint uStackX_c;
  uint local_res10;
  uint local_res20 [2];
  uint local_c8;
  uint local_c4;
  FName local_c0;
  FName local_b8;
  FName local_b0;
  FStatMessage local_a8;
  FStatMessage local_98;
  FStatMessage local_88;
  FName local_78;
  FName local_70;
  FName local_68 [5];
  
  if ((&this->Mutex == (FRecursiveMutex *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  UE::FRecursiveMutex::Lock(&this->Mutex);
  pFVar20 = (this->DeferredDeleteArray).AllocatorInstance.Data;
  iVar22 = 0;
  iVar24 = (this->DeferredDeleteArray).ArrayNum;
  pFVar2 = pFVar20 + (longlong)iVar24 * 8;
  while( true ) {
    if ((this->DeferredDeleteArray).ArrayNum != iVar24) {
      local_res8 = local_res8 & 0xffffff00;
      `TCheckedPointerIterator<TRefCountPtr<FPooledRenderTarget>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_res8);
    }
    if (pFVar20 == pFVar2) break;
    uVar9 = ComputeSizeInKB(*(FPooledRenderTarget **)pFVar20);
    iVar22 = iVar22 + uVar9;
    pFVar20 = pFVar20 + 8;
  }
  piVar1 = &(this->DeferredDeleteArray).ArrayMax;
  pFVar2 = (this->DeferredDeleteArray).AllocatorInstance.Data;
  iVar24 = (this->DeferredDeleteArray).ArrayNum;
  if ((this->DeferredDeleteArray).ArrayMax < 0) {
    DestructItems<TRefCountPtr<FPooledRenderTarget>,int>
              ((TRefCountPtr<FPooledRenderTarget> *)pFVar2,iVar24);
    (this->DeferredDeleteArray).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&(this->DeferredDeleteArray).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<TRefCountPtr<FPooledRenderTarget>,int>
              ((TRefCountPtr<FPooledRenderTarget> *)pFVar2,iVar24);
    (this->DeferredDeleteArray).ArrayNum = 0;
  }
  pTVar18 = (TConsoleVariableData<int> *)0x0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    if ((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
       ((IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0 &&
        (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                           ("Singleton != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                            ,0x4fb,L""), bVar7)))) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    plVar17 = (longlong *)
              (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                        (IConsoleManager::Singleton,L"r.RenderTargetPoolMin",1);
    if (plVar17 != (longlong *)0x0) {
      pTVar18 = (TConsoleVariableData<int> *)(**(code **)(*plVar17 + 0x68))(plVar17);
    }
    ::CVar = pTVar18;
    _Init_thread_footer(&::_TSS1);
  }
  pTVar18 = ::CVar;
  bVar7 = IsInParallelRenderingThread();
  if ((!bVar7) &&
     (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007955>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6d3,"IsInParallelRenderingThread()"), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar24 = 0;
  if (0 < pTVar18->ShadowedValue[1]) {
    iVar24 = pTVar18->ShadowedValue[1];
  }
  local_res10 = iVar24 << 10;
  CompactPool(this);
  uVar27 = 0;
  uVar21 = 0;
  uVar9 = iVar24 << 10;
  if ((this->PooledRenderTargets).ArrayNum != 0) {
    do {
      uVar9 = 0;
      if ((int)uVar21 < (this->PooledRenderTargets).ArrayNum) {
        uVar9 = ~uVar21 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar3 = *(FPooledRenderTarget **)
                ((this->PooledRenderTargets).AllocatorInstance.Data + (longlong)(int)uVar21 * 8);
      if (pFVar3 != (FPooledRenderTarget *)0x0) {
        iVar24 = pFVar3->NumRefs;
        if ((iVar24 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("RefCount >= 1",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderTargetPool.cpp"
                               ,0x2c8,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (iVar24 == 1) {
          pFVar3->UnusedForNFrames = pFVar3->UnusedForNFrames + 1;
        }
        else if ((pFVar3->UnusedForNFrames != 0) &&
                (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                   ("!UnusedForNFrames",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderTargetPool.cpp"
                                    ,0x289,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (2 < pFVar3->UnusedForNFrames) {
          uVar9 = ComputeSizeInKB(pFVar3);
          uVar27 = uVar27 + uVar9;
        }
      }
      uVar21 = uVar21 + 1;
      uVar9 = local_res10;
    } while (uVar21 < (uint)(this->PooledRenderTargets).ArrayNum);
  }
  uVar21 = this->AllocationLevelInKB;
  if (__CsvProfilerStat353 == false) {
    FCsvProfilerTrace::OutputInlineStat("UnusedMB",_GCsvCategory_RenderTargetPool.Index);
    __CsvProfilerStat353 = true;
  }
  fVar6 = __real_3a800000;
  FCsvProfiler::RecordCustomStat
            ("UnusedMB",_GCsvCategory_RenderTargetPool.Index,(float)uVar27 * __real_3a800000,Set);
  if (__CsvProfilerStat354 == false) {
    FCsvProfilerTrace::OutputInlineStat("PeakUsedMB",_GCsvCategory_RenderTargetPool.Index);
    __CsvProfilerStat354 = true;
  }
  FCsvProfiler::RecordCustomStat
            ("PeakUsedMB",_GCsvCategory_RenderTargetPool.Index,
             (float)((uVar21 + iVar22) - uVar27) * fVar6,Set);
  if (uVar9 < this->AllocationLevelInKB) {
    do {
      uVar21 = (this->PooledRenderTargets).ArrayNum;
      uVar19 = 0;
      uVar27 = 0xffffffff;
      if (uVar21 != 0) {
        do {
          uVar9 = 0;
          if ((int)uVar19 < (this->PooledRenderTargets).ArrayNum) {
            uVar9 = ~uVar19 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          lVar10 = *(longlong *)
                    ((this->PooledRenderTargets).AllocatorInstance.Data + (longlong)(int)uVar19 * 8)
          ;
          if ((lVar10 != 0) && (2 < *(uint *)(lVar10 + 0x8c))) {
            if (uVar27 != 0xffffffff) {
              uVar9 = 0;
              if ((int)uVar27 < (this->PooledRenderTargets).ArrayNum) {
                uVar9 = ~uVar27 >> 0x1f;
              }
              if ((uVar9 == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar7)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              if (*(uint *)(lVar10 + 0x8c) <=
                  *(uint *)(*(longlong *)
                             ((this->PooledRenderTargets).AllocatorInstance.Data +
                             (longlong)(int)uVar27 * 8) + 0x8c)) goto LAB_145e354e1;
            }
            uVar27 = uVar19;
          }
LAB_145e354e1:
          uVar19 = uVar19 + 1;
          uVar9 = local_res10;
        } while (uVar19 < uVar21);
      }
      if (uVar27 == 0xffffffff) {
        if (this->bCurrentlyOverBudget == false) {
          this->bCurrentlyOverBudget = true;
        }
        break;
      }
      uVar21 = 0;
      if ((int)uVar27 < (this->PooledRenderTargets).ArrayNum) {
        uVar21 = ~uVar27 >> 0x1f;
      }
      if ((uVar21 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar21 = ComputeSizeInKB(*(FPooledRenderTarget **)
                                ((this->PooledRenderTargets).AllocatorInstance.Data +
                                (longlong)(int)uVar27 * 8));
      this->AllocationLevelInKB = this->AllocationLevelInKB - uVar21;
      __GTraceCounterRenderTargetPoolCount.Value = __GTraceCounterRenderTargetPoolCount.Value + -1;
      if (-1 < CountersChannel->Enabled) {
        if (__GTraceCounterRenderTargetPoolCount.CounterId == (atomic<unsigned_int>)0x0) {
          uVar8 = FCountersTrace::OutputInitCounter
                            (__GTraceCounterRenderTargetPoolCount.CounterName,TraceCounterType_Int,
                             __GTraceCounterRenderTargetPoolCount.CounterFlags & 0xf);
          LOCK();
          if (__GTraceCounterRenderTargetPoolCount.CounterId == (atomic<unsigned_int>)0x0) {
            __GTraceCounterRenderTargetPoolCount.CounterId._2_2_ = 0;
            __GTraceCounterRenderTargetPoolCount.CounterId._0_2_ = uVar8;
          }
          UNLOCK();
        }
        FCountersTrace::OutputSetValue
                  (__GTraceCounterRenderTargetPoolCount.CounterId._0_2_,
                   __GTraceCounterRenderTargetPoolCount.Value);
      }
      lVar10 = (ulonglong)this->AllocationLevelInKB << 10;
      if ((__GTraceCounterRenderTargetPoolSize.Value != lVar10) &&
         (__GTraceCounterRenderTargetPoolSize.Value = lVar10, -1 < CountersChannel->Enabled)) {
        if (__GTraceCounterRenderTargetPoolSize.CounterId == (atomic<unsigned_int>)0x0) {
          uVar8 = FCountersTrace::OutputInitCounter
                            (__GTraceCounterRenderTargetPoolSize.CounterName,TraceCounterType_Int,
                             __GTraceCounterRenderTargetPoolSize.CounterFlags & 0xf);
          LOCK();
          if (__GTraceCounterRenderTargetPoolSize.CounterId == (atomic<unsigned_int>)0x0) {
            __GTraceCounterRenderTargetPoolSize.CounterId._2_2_ = 0;
            __GTraceCounterRenderTargetPoolSize.CounterId._0_2_ = uVar8;
          }
          UNLOCK();
        }
        FCountersTrace::OutputSetValue
                  (__GTraceCounterRenderTargetPoolSize.CounterId._0_2_,
                   __GTraceCounterRenderTargetPoolSize.Value);
      }
      FreeElementAtIndex(this,uVar27);
    } while (uVar9 < this->AllocationLevelInKB);
  }
  if ((this->AllocationLevelInKB <= uVar9) && (this->bCurrentlyOverBudget != false)) {
    if ((3 < (byte)LogRenderTargetPool._0_1_) && (uVar9 != 0)) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogRenderTargetPool);
    }
    this->bCurrentlyOverBudget = false;
  }
  GetStats(this,&local_c4,local_res20,&local_c8);
  if (__CsvProfilerStat423 == false) {
    FCsvProfilerTrace::OutputInlineStat("RenderTargetPoolSize",0);
    __CsvProfilerStat423 = true;
  }
  FCsvProfiler::RecordCustomStat("RenderTargetPoolSize",0,(float)local_res20[0] * fVar6,Set);
  if (__CsvProfilerStat424 == false) {
    FCsvProfilerTrace::OutputInlineStat("RenderTargetPoolUsed",0);
    __CsvProfilerStat424 = true;
  }
  FCsvProfiler::RecordCustomStat("RenderTargetPoolUsed",0,(float)local_c8 * fVar6,Set);
  if (__CsvProfilerStat425 == false) {
    FCsvProfilerTrace::OutputInlineStat("RenderTargetPoolCount",0);
    __CsvProfilerStat425 = true;
  }
  auVar23[4] = '\0';
  auVar23[5] = '\0';
  auVar23[6] = '\0';
  auVar23[7] = '\0';
  auVar23[0] = (undefined1)local_c4;
  auVar23[1] = local_c4._1_1_;
  auVar23[2] = local_c4._2_1_;
  auVar23[3] = local_c4._3_1_;
  FCsvProfiler::RecordCustomStat("RenderTargetPoolCount",0,local_c4,Set);
  FVar12 = StatPtr_STAT_RenderTargetPoolSize;
  if (StatPtr_STAT_RenderTargetPoolSize ==
      (FThreadSafeStaticStat<FStat_STAT_RenderTargetPoolSize>)0x0) {
    pFVar11 = ::FName::FName(&local_78,"STAT_RenderTargetPoolSize");
    FVar12 = (FThreadSafeStaticStat<FStat_STAT_RenderTargetPoolSize>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RenderTargetPoolSize,*pFVar11,
                        L"Pool Size","STATGROUP_RenderTargetPool","STATCAT_Advanced",
                        L"Render Target Pool",true,false,ST_int64,false,false,MCR_Physical);
  }
  FVar4 = *(FName *)FVar12;
  FVar25 = FVar4.ComparisonIndex.Value;
  uVar9 = FVar4.Number;
  auVar26 = (uchar  [8])((ulonglong)local_res20[0] << 10);
  local_res8 = FVar25.Value;
  uStackX_c = uVar9;
  if (((FVar4 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar13 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar13 == (FThreadStats *)0x0) {
      pFVar14 = FThreadStatsPool::Get();
      pFVar13 = FThreadStatsPool::GetFromPool(pFVar14);
    }
    local_a8.NameAndInfo.Number = uVar9 & 0xffff8fff | 0x8000;
    local_c0 = FVar4;
    local_a8.StatData.Pad = auVar26;
    local_a8.NameAndInfo.Index.Value = FVar25.Value;
    FThreadStats::AddStatMessage(pFVar13,&local_a8);
    FStatsTrace::Set(&local_c0,(long64)auVar26);
    if (pFVar13->ScopeCount == 0) {
      FThreadStats::Flush(pFVar13,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar13,false,false);
    }
  }
  FVar15 = StatPtr_STAT_RenderTargetPoolUsed;
  if (StatPtr_STAT_RenderTargetPoolUsed ==
      (FThreadSafeStaticStat<FStat_STAT_RenderTargetPoolUsed>)0x0) {
    pFVar11 = ::FName::FName(&local_70,"STAT_RenderTargetPoolUsed");
    FVar15 = (FThreadSafeStaticStat<FStat_STAT_RenderTargetPoolUsed>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RenderTargetPoolUsed,*pFVar11,
                        L"Pool Used","STATGROUP_RenderTargetPool","STATCAT_Advanced",
                        L"Render Target Pool",true,false,ST_int64,false,false,MCR_Physical);
  }
  FVar4 = *(FName *)FVar15;
  FVar25 = FVar4.ComparisonIndex.Value;
  uVar9 = FVar4.Number;
  auVar26 = (uchar  [8])((ulonglong)local_c8 << 10);
  local_res8 = FVar25.Value;
  uStackX_c = uVar9;
  if (((FVar4 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar13 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar13 == (FThreadStats *)0x0) {
      pFVar14 = FThreadStatsPool::Get();
      pFVar13 = FThreadStatsPool::GetFromPool(pFVar14);
    }
    local_98.NameAndInfo.Number = uVar9 & 0xffff8fff | 0x8000;
    local_b8 = FVar4;
    local_98.StatData.Pad = auVar26;
    local_98.NameAndInfo.Index.Value = FVar25.Value;
    FThreadStats::AddStatMessage(pFVar13,&local_98);
    FStatsTrace::Set(&local_b8,(long64)auVar26);
    if (pFVar13->ScopeCount == 0) {
      FThreadStats::Flush(pFVar13,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar13,false,false);
    }
  }
  if (FThreadStats::bPrimaryEnable != false) {
    FVar16 = StatPtr_STAT_RenderTargetPoolCount;
    if (StatPtr_STAT_RenderTargetPoolCount ==
        (FThreadSafeStaticStat<FStat_STAT_RenderTargetPoolCount>)0x0) {
      pFVar11 = ::FName::FName(local_68,"STAT_RenderTargetPoolCount");
      FVar16 = (FThreadSafeStaticStat<FStat_STAT_RenderTargetPoolCount>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RenderTargetPoolCount,*pFVar11,
                          L"Pool Count","STATGROUP_RenderTargetPool","STATCAT_Advanced",
                          L"Render Target Pool",true,true,ST_int64,false,false,MCR_Invalid);
    }
    FVar4 = *(FName *)FVar16;
    FVar25 = FVar4.ComparisonIndex.Value;
    uVar9 = FVar4.Number;
    local_res8 = FVar25.Value;
    uStackX_c = uVar9;
    if (((FVar4 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar13 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar13 == (FThreadStats *)0x0) {
        pFVar14 = FThreadStatsPool::Get();
        pFVar13 = FThreadStatsPool::GetFromPool(pFVar14);
      }
      local_88.NameAndInfo.Number = uVar9 & 0xffff8fff | 0x8000;
      local_b0 = FVar4;
      local_88.StatData.Pad = auVar23;
      local_88.NameAndInfo.Index.Value = FVar25.Value;
      FThreadStats::AddStatMessage(pFVar13,&local_88);
      FStatsTrace::Set(&local_b0,(long64)auVar23);
      if (pFVar13->ScopeCount == 0) {
        FThreadStats::Flush(pFVar13,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar13,false,false);
      }
    }
  }
  if (&this->Mutex != (FRecursiveMutex *)0x0) {
    UE::FRecursiveMutex::Unlock(&this->Mutex);
  }
  return;
}

