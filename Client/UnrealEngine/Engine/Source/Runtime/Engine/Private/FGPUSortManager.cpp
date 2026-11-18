// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 13

// FGPUSortManager @ 147cc38a0

FGPUSortManager * __thiscall FGPUSortManager::FGPUSortManager(FGPUSortManager *this,Type param_1)

{
  *(undefined8 *)&(this->PostPreRenderEvent).field_0x18 = 2;
  *(undefined8 *)&this->PostPreRenderEvent = 0;
  *(undefined8 *)&(this->PostPreRenderEvent).field_0x8 = 0;
  *(undefined8 *)&(this->PostPreRenderEvent).field_0x10 = 0;
  *(undefined8 *)&this->PostPostRenderEvent = 0;
  *(undefined8 *)&(this->PostPostRenderEvent).field_0x8 = 0;
  *(undefined8 *)&(this->PostPostRenderEvent).field_0x10 = 0;
  (this->AddTaskMutex).State = (atomic<unsigned_char>)0x0;
  (this->SortBatches).AllocatorInstance.SecondaryData =
       (ForElementType<FGPUSortManager::FSortBatch>)0x0;
  *(undefined8 *)&(this->PostPostRenderEvent).field_0x18 = 2;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FGPUSortManager__6B_;
  (this->SortBatches).ArrayNum = 0;
  *(undefined8 *)&(this->SortBatches).ArrayMax = 4;
  (this->Settings).BufferSlack = 2.0;
  (this->Settings).FrameCountBeforeShrinking = 100;
  (this->Settings).MinBufferSize = 0x2000;
  (this->DynamicValueBufferPool).Array.AllocatorInstance.SecondaryData = (ForElementType<void_*>)0x0
  ;
  (this->DynamicValueBufferPool).Array.ArrayNum = 0;
  (this->DynamicValueBufferPool).Array.ArrayMax = 4;
  (this->SortBuffersPool).AllocatorInstance.SecondaryData =
       (ForElementType<FParticleSortBuffers_*>)0x0;
  (this->SortBuffersPool).ArrayNum = 0;
  (this->SortBuffersPool).ArrayMax = 2;
  (this->Callbacks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Callbacks).ArrayNum = 0;
  (this->Callbacks).ArrayMax = 0;
  this->FeatureLevel = param_1;
  if (__real_3f800000 < GGPUSortBufferSlack) {
    (this->Settings).BufferSlack = GGPUSortBufferSlack;
  }
  (this->Settings).FrameCountBeforeShrinking = GGPUSortFrameCountBeforeBufferShrinking;
  (this->Settings).MinBufferSize = GGPUSortMinBufferSize;
  return this;
}

// ~FGPUSortManager @ 147cc8690

void __thiscall FGPUSortManager::~FGPUSortManager(FGPUSortManager *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FParticleSortBuffers_*> FVar3;
  FScriptContainerElement *pFVar4;
  ForElementType<void_*> FVar5;
  void *pvVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  ForElementType<FParticleSortBuffers_*> FVar10;
  ForElementType<FGPUSortManager::FSortBatch> FVar11;
  ForElementType<FParticleSortBuffers_*> FVar12;
  ForElementType<FParticleSortBuffers_*> FVar13;
  undefined1 local_res8 [8];
  
  this->_padding_ = (longlong)&___7FGPUSortManager__6B_;
  FVar11 = (this->SortBatches).AllocatorInstance.SecondaryData;
  iVar2 = (this->SortBatches).ArrayNum;
  if (FVar11 == (ForElementType<FGPUSortManager::FSortBatch>)0x0) {
    FVar11 = (ForElementType<FGPUSortManager::FSortBatch>)&this->SortBatches;
  }
  FVar13 = (ForElementType<FParticleSortBuffers_*>)((longlong)FVar11 + 0x18);
  while( true ) {
    if ((this->SortBatches).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FGPUSortManager::FSortBatch,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if ((ForElementType<FGPUSortManager::FSortBatch> *)((longlong)FVar13 + -0x18) ==
        (ForElementType<FGPUSortManager::FSortBatch> *)((longlong)FVar11 + (longlong)iVar2 * 0x28))
    break;
    if (*(longlong *)FVar13 != 0) {
      FVar12 = (ForElementType<FParticleSortBuffers_*>)&this->SortBuffersPool;
      FVar3 = (this->SortBuffersPool).AllocatorInstance.SecondaryData;
      FVar10 = FVar12;
      if (FVar3 != (ForElementType<FParticleSortBuffers_*>)0x0) {
        FVar10 = FVar3;
      }
      if ((ulonglong)FVar10 <= (ulonglong)FVar13) {
        FVar10 = FVar12;
        if (FVar3 != (ForElementType<FParticleSortBuffers_*>)0x0) {
          FVar10 = FVar3;
        }
        if (((ulonglong)FVar13 <
             (ulonglong)((longlong)FVar10 + (longlong)(this->SortBuffersPool).ArrayMax * 8)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      iVar9 = (this->SortBuffersPool).ArrayNum;
      piVar1 = &(this->SortBuffersPool).ArrayMax;
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FParticleSortBuffers_*>_>
                          (0x808,(ForElementType<FParticleSortBuffers_*> *)FVar12,piVar1);
      }
      (this->SortBuffersPool).ArrayNum = iVar9 + 1;
      FVar3 = (this->SortBuffersPool).AllocatorInstance.SecondaryData;
      if (FVar3 != (ForElementType<FParticleSortBuffers_*>)0x0) {
        FVar12 = FVar3;
      }
      *(longlong *)((longlong)FVar12 + (longlong)iVar9 * 8) = *(longlong *)FVar13;
      *(longlong *)FVar13 = 0;
    }
    FVar13 = (ForElementType<FParticleSortBuffers_*>)((longlong)FVar13 + 0x28);
  }
  ReleaseSortBuffers(this);
  DestructItems<FGPUSortManager::FCallbackInfo,int>
            ((FCallbackInfo *)(this->Callbacks).AllocatorInstance.Data,(this->Callbacks).ArrayNum);
  pFVar4 = (this->Callbacks).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  FVar13 = (this->SortBuffersPool).AllocatorInstance.SecondaryData;
  if (FVar13 != (ForElementType<FParticleSortBuffers_*>)0x0) {
    FMemory::Free((void *)FVar13);
  }
  TIndirectArray<FGPUSortManager::FDynamicValueBuffer,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  ::Empty(&this->DynamicValueBufferPool,0);
  FVar5 = (this->DynamicValueBufferPool).Array.AllocatorInstance.SecondaryData;
  if (FVar5 != (ForElementType<void_*>)0x0) {
    FMemory::Free((void *)FVar5);
  }
  FVar11 = (this->SortBatches).AllocatorInstance.SecondaryData;
  if (FVar11 != (ForElementType<FGPUSortManager::FSortBatch>)0x0) {
    FMemory::Free((void *)FVar11);
  }
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->PostPostRenderEvent).field_0x8,*(int *)&(this->PostPostRenderEvent).field_0x10
            );
  pvVar6 = *(void **)&(this->PostPostRenderEvent).field_0x8;
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->PostPostRenderEvent);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->PostPreRenderEvent).field_0x8,*(int *)&(this->PostPreRenderEvent).field_0x10);
  pvVar6 = *(void **)&(this->PostPreRenderEvent).field_0x8;
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->PostPreRenderEvent);
  this->_padding_ = (longlong)&___7FRefCountedObject__6B_;
  if (((int)this->_padding_ != 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!NumRefs",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\RefCounting.h"
                         ,0xff,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  return;
}

// operator() @ 147ccc170

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`FGPUSortManager::OnPostRenderOpaque'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  ForElementType<FGPUSortManager::FSortBatch> *pFVar1;
  code *pcVar2;
  void *pvVar3;
  bool bVar4;
  uint uVar5;
  atomic<unsigned_int> aVar6;
  int iVar7;
  FRHIBreadcrumbAllocator *pFVar8;
  FRHIBreadcrumbNode *pFVar9;
  longlong lVar10;
  TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<20,int,wchar_t_[1]>_> *pTVar11;
  ForElementType<FParticleSortBuffers_*> *pFVar12;
  ForElementType<FGPUSortManager::FSortBatch> *pFVar13;
  longlong lVar14;
  wchar_t *pwVar15;
  ForElementType<FParticleSortBuffers_*> *pFVar16;
  ForElementType<FParticleSortBuffers_*> *pFVar17;
  FParticleSortBuffers *pFVar18;
  undefined1 local_c8 [40];
  char *local_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  TGPUStat<TRHIGPUStatNameProvider_GPUKeyGenAndSort> *local_90;
  wchar_t *pwStack_88;
  FRHIBreadcrumbScope local_80;
  char local_70;
  FRHIBreadcrumbScope local_68;
  char local_58;
  uint uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  
  if (*(int *)(*(longlong *)this + 0x100) != 0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      local_a0 = 
      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GPUSortManager.cpp";
      local_90 = &GPUStat_GPUKeyGenAndSort;
      uStack_98 = 0x344;
      pwStack_88 = L"GPU KeyGen & Sort";
      ::Desc._padding_._0_4_ = 0x518dfa90;
      ::Desc._padding_._4_4_ = 1;
      ::Desc._padding_._0_4_ = 0x344;
      ::Desc._padding_._4_4_ = uStack_94;
      ::Desc._padding_._0_4_ = 0x54c440c0;
      ::Desc._padding_._4_4_ = 1;
      ::Desc._padding_._0_4_ = 0x518dc8a0;
      ::Desc._padding_._4_4_ = 1;
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
      ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
      ::Desc.TraceGpuSpecId = 0;
      ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
      atexit(```FGPUSortManager::OnPostRenderOpaque'::__l2::Desc::operator()'::__l10::<lambda_1>::
             operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__);
      _Init_thread_footer(&::_TSS0);
    }
    pFVar8 = FRHIComputeCommandList::GetBreadcrumbAllocator((FRHIComputeCommandList *)param_1);
    pFVar9 = FMemStackBase::Alloc(&pFVar8->Inner,0x50,8);
    pFVar9->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
    pFVar9->Parent = FRHIBreadcrumbNode::Sentinel;
    pFVar9->ListLink = (FRHIBreadcrumbNode *)0x0;
    (pFVar9->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
    (pFVar9->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
    pFVar9->Data = (FRHIBreadcrumbData *)&::Desc;
    pFVar9->Allocator = pFVar8;
    pFVar9->TraceCpuSpecId = 0;
    pFVar9->TraceCpuMetadataId = 0;
    LOCK();
    UNLOCK();
    uVar5 = (uint)FRHIBreadcrumbNode::NextID | 0x80000000;
    FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
    pFVar9->BeginPipes = (atomic<unsigned_char>)0x0;
    pFVar9->EndPipes = (atomic<unsigned_char>)0x0;
    pFVar9->ID = uVar5;
    pFVar9->_padding_ =
         (longlong)
         &
         ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0A___V_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
    ;
    pFVar9[1]._padding_ = (longlong)&::Desc;
    if ((::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) &&
       (bVar4 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable(), bVar4)) {
      EnterCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
      if (::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
        aVar6 = (atomic<unsigned_int>)
                FCpuProfilerTrace::OutputEventType
                          ((wchar_t *)CONCAT44(::Desc._padding_._4_4_,(undefined4)::Desc._padding_),
                           (char *)CONCAT44(::Desc._padding_._4_4_,(undefined4)::Desc._padding_),
                           (uint)::Desc._padding_);
        LOCK();
        ::Desc.TraceCpuSpecId = aVar6;
        UNLOCK();
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
    }
    pFVar9->TraceCpuSpecId = (uint)::Desc.TraceCpuSpecId;
    FRHIBreadcrumbScope::FRHIBreadcrumbScope(&local_68,(FRHIComputeCommandList *)param_1,pFVar9);
    pvVar3 = ThreadLocalStoragePointer;
    lVar14 = *(longlong *)this;
    local_58 = '\x01';
    if (*(int *)(lVar14 + 0x100) != 0) {
      do {
        pFVar1 = (ForElementType<FGPUSortManager::FSortBatch> *)(lVar14 + 0x58);
        if ((*(int *)(lVar14 + 0x100) < 1) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar13 = pFVar1;
        if (*(ForElementType<FGPUSortManager::FSortBatch> **)(lVar14 + 0xf8) !=
            (ForElementType<FGPUSortManager::FSortBatch> *)0x0) {
          pFVar13 = *(ForElementType<FGPUSortManager::FSortBatch> **)(lVar14 + 0xf8);
        }
        lVar10 = (longlong)*(int *)(lVar14 + 0x100);
        local_c8._0_8_ = *(undefined8 *)(pFVar13->InlineData + lVar10 * 0x28 + -0x28);
        local_c8._8_8_ = *(undefined8 *)(pFVar13->InlineData + lVar10 * 0x28 + -0x28 + 8);
        local_c8._16_8_ = *(undefined8 *)(pFVar13->InlineData + lVar10 * 0x28 + -0x18);
        local_c8._24_8_ = *(undefined8 *)(pFVar13->InlineData + lVar10 * 0x28 + -0x18 + 8);
        local_c8._32_8_ = *(undefined8 *)(pFVar13->InlineData + lVar10 * 0x28 + -8);
        uVar5 = *(int *)(lVar14 + 0x100) - 1;
        pFVar13 = *(ForElementType<FGPUSortManager::FSortBatch> **)(lVar14 + 0xf8);
        if (*(ForElementType<FGPUSortManager::FSortBatch> **)(lVar14 + 0xf8) ==
            (ForElementType<FGPUSortManager::FSortBatch> *)0x0) {
          pFVar13 = pFVar1;
        }
        iVar7 = ~uVar5 + *(int *)(lVar14 + 0x100);
        if (iVar7 != 0) {
          memmove(pFVar13->InlineData + (longlong)(int)uVar5 * 0x28,
                  pFVar13->InlineData + (longlong)(int)uVar5 * 0x28 + 0x28,(longlong)iVar7 * 0x28);
        }
        *(int *)(lVar14 + 0x100) = *(int *)(lVar14 + 0x100) + -1;
        UE::Core::Private::
        ReallocShrink<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FGPUSortManager::FSortBatch>_>
                  (0x28,8,pFVar1,*(int *)(lVar14 + 0x100),(int *)(lVar14 + 0x104));
        pwVar15 = L"HighPrecision";
        if ((local_c8._8_8_ & 1) != 0) {
          pwVar15 = L"LowPrecision";
        }
        if ((*(int *)(*(longlong *)((longlong)pvVar3 + (ulonglong)_tls_index * 8) + 0x9d4c) <
             ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
          local_40 = 0;
          uStack_3c = 0;
          ::Desc._12_8_ = ZEXT48(uStack_44);
          ::Desc._padding_._4_4_ = 0;
          ::Desc._padding_ = (longlong)u_GPUSortBatch;
          ::Desc._padding_ = (longlong)u_GPUSort_Batch_d;
          ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
          ::Desc._padding_._0_4_ = 0x34d;
          InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
          ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
          ::Desc.TraceGpuSpecId = 0;
          ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
          atexit(```FGPUSortManager::OnPostRenderOpaque'::__l2::<lambda_1>::operator()'::__l18::
                 <lambda_2>::operator()<int_&,wchar_t_const_(&)[1]>'::__l2::
                 _dynamic_atexit_destructor_for__Desc__);
          _Init_thread_footer(&::_TSS0);
        }
        pFVar8 = FRHIComputeCommandList::GetBreadcrumbAllocator((FRHIComputeCommandList *)param_1);
        pTVar11 = FRHIBreadcrumbAllocator::
                  Alloc<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<20,int,wchar_t_[1]>_>,FRHIBreadcrumbAllocator_&,UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<20,int,wchar_t_[1]>_const_&,int_&,wchar_t_const_(&)[1]>
                            (pFVar8,pFVar8,&::Desc,(int *)local_c8,(wchar_t (*) [1])pwVar15);
        FRHIBreadcrumbScope::FRHIBreadcrumbScope
                  (&local_80,(FRHIComputeCommandList *)param_1,(FRHIBreadcrumbNode *)pTVar11);
        local_70 = '\x01';
        if ((FParticleSortBuffers *)local_c8._24_8_ == (FParticleSortBuffers *)0x0) {
          lVar14 = *(longlong *)this;
          pFVar16 = (ForElementType<FParticleSortBuffers_*> *)(lVar14 + 0x148);
          if ((*(int *)(lVar14 + 0x160) < 1) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pFVar12 = *(ForElementType<FParticleSortBuffers_*> **)(lVar14 + 0x158);
          uVar5 = *(int *)(lVar14 + 0x160) - 1;
          lVar10 = (longlong)(int)uVar5 * 8;
          if (pFVar12 == (ForElementType<FParticleSortBuffers_*> *)0x0) {
            pFVar18 = *(FParticleSortBuffers **)(pFVar16->InlineData + lVar10);
            pFVar12 = pFVar16;
          }
          else {
            pFVar18 = *(FParticleSortBuffers **)(pFVar12->InlineData + lVar10);
          }
          iVar7 = ~uVar5 + *(int *)(lVar14 + 0x160);
          if (iVar7 != 0) {
            memmove(pFVar12->InlineData + lVar10,pFVar12->InlineData + lVar10 + 8,
                    (longlong)iVar7 << 3);
          }
          *(int *)(lVar14 + 0x160) = *(int *)(lVar14 + 0x160) + -1;
          UE::Core::Private::
          ReallocShrink<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FParticleSortBuffers_*>_>
                    (8,8,pFVar16,*(int *)(lVar14 + 0x160),(int *)(lVar14 + 0x164));
          local_c8._24_8_ = pFVar18;
        }
        FGPUSortManager::FSortBatch::GenerateKeys
                  ((FSortBatch *)local_c8,param_1,
                   (TArray<FGPUSortManager::FCallbackInfo,TSizedDefaultAllocator<32>_> *)
                   (*(longlong *)this + 0x168),KeyGenAfterPostRenderOpaque);
        FGPUSortManager::FSortBatch::SortAndResolve
                  ((FSortBatch *)local_c8,param_1,*(Type *)(*(longlong *)this + 0x178));
        *(int *)(local_c8._16_8_ + 0x38) = -1;
        lVar14 = *(longlong *)this;
        pFVar17 = (ForElementType<FParticleSortBuffers_*> *)(lVar14 + 0x148);
        pFVar16 = *(ForElementType<FParticleSortBuffers_*> **)(lVar14 + 0x158);
        pFVar12 = pFVar17;
        if (pFVar16 != (ForElementType<FParticleSortBuffers_*> *)0x0) {
          pFVar12 = pFVar16;
        }
        if (pFVar12 <= (ForElementType<FParticleSortBuffers_*> *)(local_c8 + 0x18)) {
          pFVar12 = pFVar17;
          if (pFVar16 != (ForElementType<FParticleSortBuffers_*> *)0x0) {
            pFVar12 = pFVar16;
          }
          if ((local_c8 + 0x18 < pFVar12->InlineData + (longlong)*(int *)(lVar14 + 0x164) * 8) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        iVar7 = *(int *)(lVar14 + 0x160);
        if (iVar7 == *(int *)(lVar14 + 0x164)) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FParticleSortBuffers_*>_>
                            (0x808,pFVar17,(int *)(lVar14 + 0x164));
        }
        *(int *)(lVar14 + 0x160) = iVar7 + 1;
        if (*(ForElementType<FParticleSortBuffers_*> **)(lVar14 + 0x158) !=
            (ForElementType<FParticleSortBuffers_*> *)0x0) {
          pFVar17 = *(ForElementType<FParticleSortBuffers_*> **)(lVar14 + 0x158);
        }
        *(undefined8 *)(pFVar17->InlineData + (longlong)iVar7 * 8) = local_c8._24_8_;
        local_c8._24_8_ = (FParticleSortBuffers *)0x0;
        if (local_70 != '\0') {
          FRHIBreadcrumbScope::~FRHIBreadcrumbScope(&local_80);
        }
        lVar14 = *(longlong *)this;
      } while (*(int *)(lVar14 + 0x100) != 0);
      if (local_58 == '\0') goto LAB_147ccc779;
    }
    FRHIBreadcrumbScope::~FRHIBreadcrumbScope(&local_68);
  }
LAB_147ccc779:
  TMulticastDelegate<void___cdecl(FRHICommandListImmediate_&),FDefaultDelegateUserPolicy>::Broadcast
            ((TMulticastDelegate<void___cdecl(FRHICommandListImmediate_&),FDefaultDelegateUserPolicy>
              *)(*(longlong *)this + 0x30),param_1);
  FGPUSortManager::ResetDynamicValuesBuffers
            (*(FGPUSortManager **)this,(FRHICommandListBase *)param_1);
  return;
}

// operator() @ 147ccc7b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`FGPUSortManager::OnPreRender'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  ForElementType<FGPUSortManager::FSortBatch> *pFVar1;
  FParticleSortBuffers *pFVar2;
  code *pcVar3;
  void *pvVar4;
  bool bVar5;
  uint uVar6;
  atomic<unsigned_int> aVar7;
  FRHIBreadcrumbAllocator *pFVar8;
  FRHIBreadcrumbNode *pFVar9;
  longlong lVar10;
  TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<20,int,wchar_t_[1]>_> *pTVar11;
  TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<28,int,wchar_t_[1]>_> *pTVar12;
  FSortBatch *pFVar13;
  uint uVar14;
  ForElementType<FGPUSortManager::FSortBatch> *pFVar15;
  ForElementType<FParticleSortBuffers_*> *pFVar16;
  uint *puVar17;
  wchar_t *pwVar18;
  longlong lVar19;
  int iVar20;
  FRHICommandListBase *pFVar21;
  longlong lVar22;
  FIdentityFunctor local_res8 [8];
  FRHICommandListBase *local_res10;
  undefined1 local_res18 [8];
  FLLMScope local_res20 [2];
  FMemScope local_128;
  FSortBatch local_120;
  char *local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  TGPUStat<TRHIGPUStatNameProvider_GPUKeyGenAndSort> *local_e8;
  wchar_t *pwStack_e0;
  FRHIBreadcrumbScope local_d8;
  char local_c8;
  FRHIBreadcrumbScope local_c0;
  undefined1 local_b0;
  FRHIBreadcrumbScope local_a8;
  undefined1 local_98;
  uint uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  uint uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  
  local_res10 = (FRHICommandListBase *)param_1;
  FLLMScope::FLLMScope(local_res20,GPUSort,false,None,Default,true);
  FMemScope::FMemScope(&local_128,GPUSort,true);
  lVar22 = *(longlong *)this;
  iVar20 = *(int *)(lVar22 + 0x100);
  lVar10 = *(longlong *)(lVar22 + 0xf8);
  if (*(longlong *)(lVar22 + 0xf8) == 0) {
    lVar10 = lVar22 + 0x58;
  }
  puVar17 = (uint *)(lVar10 + 8);
  while( true ) {
    if (*(int *)(lVar22 + 0x100) != iVar20) {
      local_res8[0] = (FIdentityFunctor)0x0;
      `TCheckedPointerIterator<FGPUSortManager::FSortBatch,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    pFVar21 = local_res10;
    if (puVar17 + -2 == (uint *)(lVar10 + (longlong)iVar20 * 0x28)) break;
    uVar6 = *puVar17;
    if (((byte)uVar6 & 0x30) == 0x30) {
      if ((uVar6 & 8) == 0) {
        uVar6 = uVar6 ^ 0x20;
      }
      else {
        uVar6 = uVar6 ^ 0x10;
      }
      *puVar17 = uVar6;
    }
    *(uint *)(*(longlong *)(puVar17 + 2) + 0x34) = uVar6;
    uVar6 = *puVar17;
    if ((uVar6 & 0x10) == 0) {
      if (((uVar6 & 0x20) == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("EnumHasAnyFlags(Flags, EGPUSortFlags::SortAfterPostRenderOpaque)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GPUSortManager.cpp"
                             ,0x1b9,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      puVar17[6] = ((byte)~(byte)*puVar17 & 4 | 8) >> 2;
      puVar17 = puVar17 + 10;
    }
    else {
      if (((uVar6 & 8) != 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("!EnumHasAnyFlags(Flags, EGPUSortFlags::KeyGenAfterPostRenderOpaque)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GPUSortManager.cpp"
                             ,0x1b4,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      puVar17[6] = 1;
      puVar17 = puVar17 + 10;
    }
  }
  FGPUSortManager::UpdateSortBuffersPool(*(FGPUSortManager **)this,local_res10);
  lVar22 = *(longlong *)this;
  if (*(int *)(lVar22 + 0x100) != 0) {
    pFVar13 = *(FSortBatch **)(lVar22 + 0xf8);
    if (*(FSortBatch **)(lVar22 + 0xf8) == (FSortBatch *)0x0) {
      pFVar13 = (FSortBatch *)(lVar22 + 0x58);
    }
    AlgoImpl::
    IntroSortInternal<FGPUSortManager::FSortBatch,int,FIdentityFunctor,TDereferenceWrapper<FGPUSortManager::FSortBatch,__FGPUSortManager::OnPreRender_::__l2::<lambda_1>::operator()_::__l5::<lambda_1>_>_>
              (pFVar13,*(int *)(lVar22 + 0x100),local_res8[0],(<lambda_1> *)local_res18);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      local_f8 = 
      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GPUSortManager.cpp";
      local_e8 = &GPUStat_GPUKeyGenAndSort;
      uStack_f0 = 0x30f;
      pwStack_e0 = L"GPU KeyGen & Sort";
      ::Desc._padding_._0_4_ = 0x518dfa90;
      ::Desc._padding_._4_4_ = 1;
      ::Desc._padding_._0_4_ = 0x30f;
      ::Desc._padding_._4_4_ = uStack_ec;
      ::Desc._padding_._0_4_ = 0x54c440c0;
      ::Desc._padding_._4_4_ = 1;
      ::Desc._padding_._0_4_ = 0x518dc8a0;
      ::Desc._padding_._4_4_ = 1;
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
      ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
      ::Desc.TraceGpuSpecId = 0;
      ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
      atexit(```FGPUSortManager::OnPreRender'::__l2::<lambda_1>::operator()'::__l10::<lambda_2>::
             operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__);
      _Init_thread_footer(&::_TSS0);
    }
    pFVar8 = FRHIComputeCommandList::GetBreadcrumbAllocator((FRHIComputeCommandList *)pFVar21);
    pFVar9 = FMemStackBase::Alloc(&pFVar8->Inner,0x50,8);
    pFVar9->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
    pFVar9->Parent = FRHIBreadcrumbNode::Sentinel;
    pFVar9->ListLink = (FRHIBreadcrumbNode *)0x0;
    (pFVar9->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
    (pFVar9->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
    pFVar9->Data = (FRHIBreadcrumbData *)&::Desc;
    pFVar9->Allocator = pFVar8;
    pFVar9->TraceCpuSpecId = 0;
    pFVar9->TraceCpuMetadataId = 0;
    LOCK();
    UNLOCK();
    uVar6 = (uint)FRHIBreadcrumbNode::NextID | 0x80000000;
    FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
    pFVar9->BeginPipes = (atomic<unsigned_char>)0x0;
    pFVar9->EndPipes = (atomic<unsigned_char>)0x0;
    pFVar9->ID = uVar6;
    pFVar9->_padding_ =
         (longlong)
         &
         ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0A___V_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
    ;
    pFVar9[1]._padding_ = (longlong)&::Desc;
    if ((::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) &&
       (bVar5 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable(), bVar5)) {
      EnterCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
      if (::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
        aVar7 = (atomic<unsigned_int>)
                FCpuProfilerTrace::OutputEventType
                          ((wchar_t *)CONCAT44(::Desc._padding_._4_4_,(undefined4)::Desc._padding_),
                           (char *)CONCAT44(::Desc._padding_._4_4_,(undefined4)::Desc._padding_),
                           (uint)::Desc._padding_);
        LOCK();
        ::Desc.TraceCpuSpecId = aVar7;
        UNLOCK();
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
    }
    pFVar9->TraceCpuSpecId = (uint)::Desc.TraceCpuSpecId;
    FRHIBreadcrumbScope::FRHIBreadcrumbScope(&local_d8,(FRHIComputeCommandList *)pFVar21,pFVar9);
    pvVar4 = ThreadLocalStoragePointer;
    lVar22 = *(longlong *)this;
    local_c8 = '\x01';
    iVar20 = *(int *)(lVar22 + 0x100);
    while (iVar20 != 0) {
      iVar20 = *(int *)(lVar22 + 0x100);
      uVar14 = iVar20 - 1;
      uVar6 = 0;
      if ((int)uVar14 < iVar20) {
        uVar6 = ~uVar14 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar10 = lVar22 + 0x58;
      if (*(longlong *)(lVar22 + 0xf8) != 0) {
        lVar10 = *(longlong *)(lVar22 + 0xf8);
      }
      if (*(int *)(lVar10 + -8 + (longlong)*(int *)(lVar22 + 0x100) * 0x28) != 1) break;
      lVar22 = *(longlong *)this;
      pFVar1 = (ForElementType<FGPUSortManager::FSortBatch> *)(lVar22 + 0x58);
      if ((*(int *)(lVar22 + 0x100) < 1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar15 = pFVar1;
      if (*(ForElementType<FGPUSortManager::FSortBatch> **)(lVar22 + 0xf8) !=
          (ForElementType<FGPUSortManager::FSortBatch> *)0x0) {
        pFVar15 = *(ForElementType<FGPUSortManager::FSortBatch> **)(lVar22 + 0xf8);
      }
      lVar10 = (longlong)*(int *)(lVar22 + 0x100);
      local_120._0_8_ = *(undefined8 *)(pFVar15->InlineData + lVar10 * 0x28 + -0x28);
      local_120._8_8_ = *(undefined8 *)(pFVar15->InlineData + lVar10 * 0x28 + -0x28 + 8);
      local_120.DynamicValueBuffer =
           *(FDynamicValueBuffer **)(pFVar15->InlineData + lVar10 * 0x28 + -0x18);
      local_120.SortBuffers =
           *(FParticleSortBuffers **)(pFVar15->InlineData + lVar10 * 0x28 + -0x18 + 8);
      local_120._32_8_ = *(undefined8 *)(pFVar15->InlineData + lVar10 * 0x28 + -8);
      uVar6 = *(int *)(lVar22 + 0x100) - 1;
      pFVar15 = *(ForElementType<FGPUSortManager::FSortBatch> **)(lVar22 + 0xf8);
      if (*(ForElementType<FGPUSortManager::FSortBatch> **)(lVar22 + 0xf8) ==
          (ForElementType<FGPUSortManager::FSortBatch> *)0x0) {
        pFVar15 = pFVar1;
      }
      iVar20 = ~uVar6 + *(int *)(lVar22 + 0x100);
      if (iVar20 != 0) {
        memmove(pFVar15->InlineData + (longlong)(int)uVar6 * 0x28,
                pFVar15->InlineData + (longlong)(int)uVar6 * 0x28 + 0x28,(longlong)iVar20 * 0x28);
      }
      *(int *)(lVar22 + 0x100) = *(int *)(lVar22 + 0x100) + -1;
      UE::Core::Private::
      ReallocShrink<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FGPUSortManager::FSortBatch>_>
                (0x28,8,pFVar1,*(int *)(lVar22 + 0x100),(int *)(lVar22 + 0x104));
      lVar22 = *(longlong *)this;
      uVar14 = *(int *)(lVar22 + 0x160) - 1;
      uVar6 = 0;
      if ((int)uVar14 < *(int *)(lVar22 + 0x160)) {
        uVar6 = ~uVar14 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar10 = lVar22 + 0x148;
      if (*(longlong *)(lVar22 + 0x158) != 0) {
        lVar10 = *(longlong *)(lVar22 + 0x158);
      }
      local_120.SortBuffers =
           *(FParticleSortBuffers **)(lVar10 + -8 + (longlong)*(int *)(lVar22 + 0x160) * 8);
      pwVar18 = L"HighPrecision";
      if ((local_120._8_8_ & 1) != 0) {
        pwVar18 = L"LowPrecision";
      }
      if ((*(int *)(*(longlong *)((longlong)pvVar4 + (ulonglong)_tls_index * 8) + 0x9d4c) < ::_TSS0)
         && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        local_80 = 0;
        uStack_7c = 0;
        ::Desc._12_8_ = ZEXT48(uStack_84);
        ::Desc._padding_._4_4_ = 0;
        ::Desc._padding_ = (longlong)u_GPUSortBatch;
        ::Desc._padding_ = (longlong)u_GPUSort_Batch_d;
        ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
        ::Desc._padding_._0_4_ = 0x31a;
        InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
        ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
        ::Desc.TraceGpuSpecId = 0;
        ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
        atexit(```FGPUSortManager::OnPreRender'::__l2::<lambda_1>::operator()'::__l18::<lambda_3>::
               operator()<int_&,wchar_t_const_(&)[1]>'::__l2::_dynamic_atexit_destructor_for__Desc__
              );
        _Init_thread_footer(&::_TSS0);
      }
      pFVar8 = FRHIComputeCommandList::GetBreadcrumbAllocator((FRHIComputeCommandList *)pFVar21);
      pTVar11 = FRHIBreadcrumbAllocator::
                Alloc<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<20,int,wchar_t_[1]>_>,FRHIBreadcrumbAllocator_&,UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<20,int,wchar_t_[1]>_const_&,int_&,wchar_t_const_(&)[1]>
                          (pFVar8,pFVar8,&::Desc,&local_120.Id,(wchar_t (*) [1])pwVar18);
      FRHIBreadcrumbScope::FRHIBreadcrumbScope
                (&local_c0,(FRHIComputeCommandList *)pFVar21,(FRHIBreadcrumbNode *)pTVar11);
      local_b0 = 1;
      FGPUSortManager::FSortBatch::GenerateKeys
                (&local_120,(FRHICommandListImmediate *)pFVar21,
                 (TArray<FGPUSortManager::FCallbackInfo,TSizedDefaultAllocator<32>_> *)
                 (*(longlong *)this + 0x168),KeyGenAfterPreRender);
      FGPUSortManager::FSortBatch::SortAndResolve
                (&local_120,(FRHICommandListImmediate *)pFVar21,*(Type *)(*(longlong *)this + 0x178)
                );
      (local_120.DynamicValueBuffer)->CurrentSortBatchId = -1;
      local_120.SortBuffers = (FParticleSortBuffers *)0x0;
      FRHIBreadcrumbScope::~FRHIBreadcrumbScope(&local_c0);
      lVar22 = *(longlong *)this;
      iVar20 = *(int *)(lVar22 + 0x100);
    }
    pvVar4 = ThreadLocalStoragePointer;
    uVar6 = *(int *)(*(longlong *)this + 0x100) - 1;
    if (-1 < (int)uVar6) {
      lVar22 = (longlong)(int)uVar6 * 0x28;
      do {
        lVar10 = *(longlong *)this;
        uVar14 = 0;
        if ((int)uVar6 < *(int *)(lVar10 + 0x100)) {
          uVar14 = ~uVar6 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        lVar19 = lVar10 + 0x58;
        if (*(longlong *)(lVar10 + 0xf8) != 0) {
          lVar19 = *(longlong *)(lVar10 + 0xf8);
        }
        pFVar21 = local_res10;
        if (*(int *)(lVar22 + 0x20 + lVar19) != 2) break;
        lVar10 = *(longlong *)this;
        uVar14 = 0;
        if ((int)uVar6 < *(int *)(lVar10 + 0x100)) {
          uVar14 = ~uVar6 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        lVar19 = lVar10 + 0x58;
        if (*(longlong *)(lVar10 + 0xf8) != 0) {
          lVar19 = *(longlong *)(lVar10 + 0xf8);
        }
        pFVar13 = (FSortBatch *)(lVar22 + lVar19);
        lVar10 = *(longlong *)this;
        if ((*(int *)(lVar10 + 0x160) < 1) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar16 = (ForElementType<FParticleSortBuffers_*> *)(lVar10 + 0x148);
        if (*(ForElementType<FParticleSortBuffers_*> **)(lVar10 + 0x158) !=
            (ForElementType<FParticleSortBuffers_*> *)0x0) {
          pFVar16 = *(ForElementType<FParticleSortBuffers_*> **)(lVar10 + 0x158);
        }
        iVar20 = *(int *)(lVar10 + 0x160) + -1;
        pFVar2 = *(FParticleSortBuffers **)
                  (pFVar16->InlineData + (longlong)*(int *)(lVar10 + 0x160) * 8 + -8);
        *(int *)(lVar10 + 0x160) = iVar20;
        UE::Core::Private::
        ReallocShrink<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FParticleSortBuffers_*>_>
                  (8,8,(ForElementType<FParticleSortBuffers_*> *)(lVar10 + 0x148),iVar20,
                   (int *)(lVar10 + 0x164));
        pFVar13->SortBuffers = pFVar2;
        pwVar18 = L"HighPrecision";
        if ((pFVar13->Flags & LowPrecisionKeys) != None) {
          pwVar18 = L"LowPrecision";
        }
        if ((*(int *)(*(longlong *)((longlong)pvVar4 + (ulonglong)_tls_index * 8) + 0x9d4c) <
             ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
          ::Desc._padding_._0_4_ = 0x32d;
          ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
          local_60 = 0;
          uStack_5c = 0;
          ::Desc._12_8_ = ZEXT48(uStack_64);
          ::Desc._padding_._4_4_ = 0;
          ::Desc._padding_ = (longlong)u_GPUSortBatchPre;
          ::Desc._padding_ = (longlong)u_GPUSort_Batch_d;
          InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
          ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
          ::Desc.TraceGpuSpecId = 0;
          ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
          atexit(```FGPUSortManager::OnPreRender'::__l2::<lambda_1>::operator()'::__l28::<lambda_4>
                 ::operator()<int_&,wchar_t_const_(&)[1]>'::__l2::
                 _dynamic_atexit_destructor_for__Desc__);
          _Init_thread_footer(&::_TSS0);
        }
        pFVar21 = local_res10;
        pFVar8 = FRHIComputeCommandList::GetBreadcrumbAllocator
                           ((FRHIComputeCommandList *)local_res10);
        pTVar12 = FRHIBreadcrumbAllocator::
                  Alloc<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<28,int,wchar_t_[1]>_>,FRHIBreadcrumbAllocator_&,UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<28,int,wchar_t_[1]>_const_&,int_&,wchar_t_const_(&)[1]>
                            (pFVar8,pFVar8,&::Desc,(int *)pFVar13,(wchar_t (*) [1])pwVar18);
        FRHIBreadcrumbScope::FRHIBreadcrumbScope
                  (&local_a8,(FRHIComputeCommandList *)pFVar21,(FRHIBreadcrumbNode *)pTVar12);
        local_98 = 1;
        FGPUSortManager::FSortBatch::GenerateKeys
                  (pFVar13,(FRHICommandListImmediate *)pFVar21,
                   (TArray<FGPUSortManager::FCallbackInfo,TSizedDefaultAllocator<32>_> *)
                   (*(longlong *)this + 0x168),KeyGenAfterPreRender);
        FRHIBreadcrumbScope::~FRHIBreadcrumbScope(&local_a8);
        lVar22 = lVar22 + -0x28;
        uVar6 = uVar6 - 1;
        pFVar21 = local_res10;
      } while (-1 < (int)uVar6);
    }
    if (local_c8 != '\0') {
      FRHIBreadcrumbScope::~FRHIBreadcrumbScope(&local_d8);
    }
  }
  TMulticastDelegate<void___cdecl(FRHICommandListImmediate_&),FDefaultDelegateUserPolicy>::Broadcast
            ((TMulticastDelegate<void___cdecl(FRHICommandListImmediate_&),FDefaultDelegateUserPolicy>
              *)(*(longlong *)this + 0x10),(FRHICommandListImmediate *)pFVar21);
  FMemScope::~FMemScope(&local_128);
  FLLMScope::~FLLMScope(local_res20);
  return;
}

// AddTask @ 147cd3770

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

bool __thiscall
FGPUSortManager::AddTask
          (FGPUSortManager *this,FRHICommandListBase *param_1,FAllocationInfo *param_2,int param_3,
          EGPUSortFlags param_4)

{
  FMutex *this_00;
  TArray<FGPUSortManager::FSortBatch,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  *pTVar1;
  ForElementType<FGPUSortManager::FSortBatch> FVar2;
  int *piVar3;
  atomic<unsigned_char> aVar4;
  int iVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  EGPUSortFlags EVar9;
  int iVar10;
  FDynamicValueBuffer *this_01;
  ForElementType<FGPUSortManager::FSortBatch> FVar11;
  undefined1 local_58 [4];
  FLLMScope local_54;
  FSettings *local_50;
  FMemScope local_48 [2];
  
  if (FXConsoleVariables::bAllowGPUSorting == 0) {
    return false;
  }
  FLLMScope::FLLMScope(&local_54,GPUSort,false,None,Default,true);
  FMemScope::FMemScope(local_48,GPUSort,true);
  local_50 = &this->Settings;
  if (((local_50->AllowedFlags & param_4) != param_4) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("EnumHasAllFlags(Settings.AllowedFlags, TaskFlags)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GPUSortManager.cpp"
                         ,0x272,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    uVar8 = (*pcVar6)();
    return (bool)uVar8;
  }
  this_00 = &this->AddTaskMutex;
  if ((this_00 == (FMutex *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    uVar8 = (*pcVar6)();
    return (bool)uVar8;
  }
  LOCK();
  bVar7 = this_00->State == (atomic<unsigned_char>)0x0;
  if (bVar7) {
    this_00->State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar7) {
    UE::FMutex::LockSlow(this_00);
  }
  FVar11 = (this->SortBatches).AllocatorInstance.SecondaryData;
  pTVar1 = &this->SortBatches;
  iVar5 = (this->SortBatches).ArrayNum;
  if (FVar11 == (ForElementType<FGPUSortManager::FSortBatch>)0x0) {
    FVar11 = (ForElementType<FGPUSortManager::FSortBatch>)pTVar1;
  }
  FVar2 = (ForElementType<FGPUSortManager::FSortBatch>)((longlong)FVar11 + (longlong)iVar5 * 0x28);
  while( true ) {
    if ((this->SortBatches).ArrayNum != iVar5) {
      `TCheckedPointerIterator<FGPUSortManager::FSortBatch,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_58);
    }
    if (FVar11 == FVar2) break;
    EVar9 = param_4 & *(EGPUSortFlags *)((longlong)FVar11 + 8);
    if (((EVar9 & AnyKeyPrecision) != None) && ((EVar9 & AnySortLocation) != None)) {
      param_2->SortBatchId = *(int *)FVar11;
      param_2->ElementIndex = *(int *)((longlong)FVar11 + 4);
      *(int *)((longlong)FVar11 + 4) = *(int *)((longlong)FVar11 + 4) + 1;
      this_01 = *(FDynamicValueBuffer **)((longlong)FVar11 + 0x10);
      *(EGPUSortFlags *)((longlong)FVar11 + 8) =
           (param_4 & (AnySortLocation|AnyKeyPrecision) | AnyKeyGenLocation) &
           *(EGPUSortFlags *)((longlong)FVar11 + 8) | param_4 & AnyKeyGenLocation;
LAB_147cd396c:
      FDynamicValueBuffer::Allocate(this_01,param_1,param_2,local_50,param_3,param_4);
      if (this_00 != (FMutex *)0x0) {
        LOCK();
        aVar4 = this_00->State;
        this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
        UNLOCK();
        if (((byte)aVar4 & 2) != 0) {
          UE::FMutex::WakeWaitingThread(this_00);
        }
      }
      FMemScope::~FMemScope(local_48);
      FLLMScope::~FLLMScope(&local_54);
      return true;
    }
    FVar11 = (ForElementType<FGPUSortManager::FSortBatch>)((longlong)FVar11 + 0x28);
  }
  iVar5 = (this->SortBatches).ArrayNum;
  piVar3 = &(this->SortBatches).ArrayMax;
  param_2->SortBatchId = iVar5;
  param_2->ElementIndex = 0;
  iVar10 = (this->SortBatches).ArrayNum;
  if (iVar10 == *piVar3) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FGPUSortManager::FSortBatch>_>
                       (0x828,&pTVar1->AllocatorInstance,piVar3);
  }
  (this->SortBatches).ArrayNum = iVar10 + 1;
  FVar11 = (this->SortBatches).AllocatorInstance.SecondaryData;
  if (FVar11 == (ForElementType<FGPUSortManager::FSortBatch>)0x0) {
    FVar11 = (ForElementType<FGPUSortManager::FSortBatch>)pTVar1;
  }
  piVar3 = (int *)((longlong)FVar11 + (longlong)iVar10 * 0x28);
  DefaultConstructItems<FGPUSortManager::FSortBatch,int>(piVar3,1);
  *piVar3 = iVar5;
  piVar3[1] = 1;
  piVar3[2] = param_4 & (AnySortLocation|AnyKeyGenLocation|AnyKeyPrecision);
  this_01 = GetDynamicValueBufferFromPool(this,param_4,iVar5);
  *(FDynamicValueBuffer **)(piVar3 + 4) = this_01;
  goto LAB_147cd396c;
}

// FinalizeSortBatches @ 147cf6830

void __thiscall FGPUSortManager::FinalizeSortBatches(FGPUSortManager *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  ForElementType<FGPUSortManager::FSortBatch> FVar5;
  uint *puVar6;
  undefined1 local_res8 [8];
  
  FVar5 = (this->SortBatches).AllocatorInstance.SecondaryData;
  iVar1 = (this->SortBatches).ArrayNum;
  if (FVar5 == (ForElementType<FGPUSortManager::FSortBatch>)0x0) {
    FVar5 = (ForElementType<FGPUSortManager::FSortBatch>)&this->SortBatches;
  }
  puVar6 = (uint *)((longlong)FVar5 + 8);
  while( true ) {
    if ((this->SortBatches).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FGPUSortManager::FSortBatch,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (puVar6 + -2 == (uint *)((longlong)FVar5 + (longlong)iVar1 * 0x28)) break;
    uVar4 = *puVar6;
    if (((byte)uVar4 & 0x30) == 0x30) {
      if ((uVar4 & 8) == 0) {
        uVar4 = uVar4 ^ 0x20;
      }
      else {
        uVar4 = uVar4 ^ 0x10;
      }
      *puVar6 = uVar4;
    }
    *(uint *)(*(longlong *)(puVar6 + 2) + 0x34) = uVar4;
    uVar4 = *puVar6;
    if ((uVar4 & 0x10) == 0) {
      if ((uVar4 & 0x20) == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("EnumHasAnyFlags(Flags, EGPUSortFlags::SortAfterPostRenderOpaque)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GPUSortManager.cpp"
                           ,0x1b9,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      puVar6[6] = ((byte)~(byte)*puVar6 & 4 | 8) >> 2;
      puVar6 = puVar6 + 10;
    }
    else {
      if ((uVar4 & 8) != 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("!EnumHasAnyFlags(Flags, EGPUSortFlags::KeyGenAfterPostRenderOpaque)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GPUSortManager.cpp"
                           ,0x1b4,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      puVar6[6] = 1;
      puVar6 = puVar6 + 10;
    }
  }
  return;
}

// GetDynamicValueBufferFromPool @ 147d041f0

FDynamicValueBuffer * __thiscall
FGPUSortManager::GetDynamicValueBufferFromPool
          (FGPUSortManager *this,EGPUSortFlags param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  TIndirectArray<FGPUSortManager::FDynamicValueBuffer,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  *pTVar3;
  ForElementType<void_*> FVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  ForElementType<void_*> FVar8;
  FDynamicValueBuffer *pFVar9;
  EGPUSortFlags EVar10;
  undefined1 local_res8 [8];
  FDynamicValueBuffer *local_78;
  ForElementType<void_*> local_70;
  int *piStack_68;
  undefined8 local_60;
  ForElementType<void_*> local_58;
  int *piStack_50;
  int local_48;
  undefined4 uStack_44;
  
  pTVar3 = &this->DynamicValueBufferPool;
  FVar8 = (this->DynamicValueBufferPool).Array.AllocatorInstance.SecondaryData;
  piVar1 = &(this->DynamicValueBufferPool).Array.ArrayNum;
  iVar7 = *piVar1;
  local_60 = CONCAT44(uStack_44,iVar7);
  if (FVar8 == (ForElementType<void_*>)0x0) {
    FVar8 = (ForElementType<void_*>)pTVar3;
  }
  FVar4 = (ForElementType<void_*>)((longlong)FVar8 + (longlong)iVar7 * 8);
  piStack_68 = piVar1;
  local_58 = FVar8;
  piStack_50 = piVar1;
  local_48 = iVar7;
  while( true ) {
    local_70 = FVar8;
    if (*piVar1 != iVar7) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<void_*,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (FVar8 == FVar4) break;
    pFVar9 = *(FDynamicValueBuffer **)FVar8;
    if (((pFVar9->CurrentSortBatchId == -1) &&
        (EVar10 = param_1 & pFVar9->LastSortBatchFlags, (EVar10 & AnyKeyPrecision) != None)) &&
       ((EVar10 & AnySortLocation) != None)) {
      pFVar9->CurrentSortBatchId = param_2;
      return pFVar9;
    }
    FVar8 = (ForElementType<void_*>)((longlong)FVar8 + 8);
  }
  pFVar9 = ::operator_new(0x40);
  if (pFVar9 != (FDynamicValueBuffer *)0x0) {
    (pFVar9->ValueBuffers).Array.AllocatorInstance.SecondaryData = (ForElementType<void_*>)0x0;
    (pFVar9->ValueBuffers).Array.ArrayNum = 0;
    *(undefined8 *)&(pFVar9->ValueBuffers).Array.ArrayMax = 4;
    pFVar9->LastSortBatchFlags = None;
  }
  pFVar9->CurrentSortBatchId = param_2;
  FVar8 = (this->DynamicValueBufferPool).Array.AllocatorInstance.SecondaryData;
  if (FVar8 == (ForElementType<void_*>)0x0) {
    FVar8 = (ForElementType<void_*>)pTVar3;
  }
  local_78 = pFVar9;
  if ((((ulonglong)FVar8 <= &local_78) &&
      (&local_78 <
       (FDynamicValueBuffer **)
       ((longlong)FVar8 + (longlong)(this->DynamicValueBufferPool).Array.ArrayMax * 8))) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar5 = (code *)swi(3);
    pFVar9 = (FDynamicValueBuffer *)(*pcVar5)();
    return pFVar9;
  }
  iVar7 = *piVar1;
  piVar2 = &(this->DynamicValueBufferPool).Array.ArrayMax;
  if (iVar7 == *piVar2) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<void_*>_>
                      (0x808,(ForElementType<void_*> *)pTVar3,piVar2);
  }
  *piVar1 = iVar7 + 1;
  FVar8 = (this->DynamicValueBufferPool).Array.AllocatorInstance.SecondaryData;
  if (FVar8 == (ForElementType<void_*>)0x0) {
    FVar8 = (ForElementType<void_*>)pTVar3;
  }
  *(FDynamicValueBuffer **)((longlong)FVar8 + (longlong)iVar7 * 8) = local_78;
  return pFVar9;
}

// OnPostRenderOpaque @ 147d1c220

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall FGPUSortManager::OnPostRenderOpaque(FGPUSortManager *this,FRDGBuilder *param_1)

{
  int *piVar1;
  FRHIGPUMask FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FRDGScope *this_00;
  FRDGEventName *pFVar6;
  void *this_01;
  TRDGEmptyLambdaPass<_public:_void___cdecl_FGPUSortManager::OnPostRenderOpaque(FRDGBuilder_&)_::_2_::<lambda_1>_>
  *pTVar7;
  ulonglong uVar8;
  FLLMScope local_res8 [2];
  <lambda_1> local_res10;
  FRHIComputeCommandList *local_res18;
  FMemScope local_res20;
  FRDGEventName local_68;
  
  FLLMScope::FLLMScope(local_res8,GPUSort,false,None,Default,true);
  FMemScope::FMemScope(&local_res20,GPUSort,true);
  this_00 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                      ((FRDGAllocator *)&param_1->_padding_,(FRDGScope **)param_1);
  param_1->_padding_ = (longlong)this_00;
  uVar8 = (ulonglong)(this_00->Impl).Impl.TypeIndex;
  if ((3 < uVar8) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  (*`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::Destruct(unsigned___int64,void*___ptr64)'
    ::__l2::Destructors[uVar8])(&this_00->Impl);
  (this_00->Impl).Impl._padding_ = (longlong)"GPUSort";
  FCsvProfiler::BeginExclusiveStat("GPUSort",(char *)0x0);
  (this_00->Impl).Impl.TypeIndex = '\x03';
  if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
    FRDGScope::BeginCPU(this_00,(FRHIComputeCommandList *)param_1->_padding_,false);
    FRDGScope::BeginGPU(this_00,(FRHIComputeCommandList *)param_1->_padding_);
  }
  local_res18 = (FRHIComputeCommandList *)param_1->_padding_;
  FVar2.GPUMask = *(uint *)&local_res18->field_0x29c;
  FRHIComputeCommandList::SetGPUMask
            (local_res18,(FRHIGPUMask)((1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1));
  local_res10.__this = this;
  pFVar6 = FRDGEventName::FRDGEventName(&local_68,1,L"FGPUSortManager::OnPostRenderOpaque");
  FRDGUserValidation::ValidateAddPass(&param_1->UserValidation,pFVar6,None);
  FRDGBuilder::FlushAccessModeQueue(param_1);
  this_01 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,400,8);
  pTVar7 = TRDGEmptyLambdaPass<`FGPUSortManager::OnPostRenderOpaque'::__l2::<lambda_1>_>::
           TRDGEmptyLambdaPass<_FGPUSortManager::OnPostRenderOpaque_::__l2::<lambda_1>_>
                     (this_01,pFVar6,NeverCull,&local_res10);
  piVar1 = &(param_1->Passes).Array.ArrayMax;
  iVar5 = (param_1->Passes).Array.ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                      (0x808,(ForElementType<FRDGPass_*> *)&param_1->Passes,piVar1);
  }
  (param_1->Passes).Array.ArrayNum = iVar5 + 1;
  (param_1->Passes).Array.AllocatorInstance.Data[iVar5] = (FRDGPass *)pTVar7;
  *(int *)&pTVar7->field_0x4c = (param_1->Passes).Array.ArrayNum + -1;
  FRDGBuilder::SetupEmptyPass(param_1,(FRDGPass *)pTVar7);
  if (local_68.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.FormattedEventName.Data.AllocatorInstance.Data);
  }
  FRHIComputeCommandList::SetGPUMask(local_res18,FVar2);
  if (this_00 != (FRDGScope *)0x0) {
    if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
      FRDGScope::EndGPU(this_00,(FRHIComputeCommandList *)param_1->_padding_);
      FRDGScope::EndCPU(this_00,(FRHIComputeCommandList *)param_1->_padding_,false);
    }
    FRDGScope::ImmediateEnd(this_00,(FRDGScopeState *)param_1);
    *(uint *)&param_1->_padding_ = (uint)param_1->_padding_ & 0xfffffff7;
    param_1->_padding_ = *(longlong *)param_1->_padding_;
  }
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// OnPreRender @ 147d1c4a0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall FGPUSortManager::OnPreRender(FGPUSortManager *this,FRDGBuilder *param_1)

{
  int *piVar1;
  FRHIGPUMask FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FRDGScope *this_00;
  FRDGEventName *pFVar6;
  void *this_01;
  TRDGEmptyLambdaPass<_public:_void___cdecl_FGPUSortManager::OnPreRender(FRDGBuilder_&)_::_2_::<lambda_1>_>
  *pTVar7;
  ulonglong uVar8;
  <lambda_1> local_res8;
  FRHIComputeCommandList *local_res10;
  FRDGEventName local_58;
  
  this_00 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                      ((FRDGAllocator *)&param_1->_padding_,(FRDGScope **)param_1);
  param_1->_padding_ = (longlong)this_00;
  uVar8 = (ulonglong)(this_00->Impl).Impl.TypeIndex;
  if ((3 < uVar8) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  (*`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::Destruct(unsigned___int64,void*___ptr64)'
    ::__l2::Destructors[uVar8])(&this_00->Impl);
  (this_00->Impl).Impl._padding_ = (longlong)"GPUSort";
  FCsvProfiler::BeginExclusiveStat("GPUSort",(char *)0x0);
  (this_00->Impl).Impl.TypeIndex = '\x03';
  if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
    FRDGScope::BeginCPU(this_00,(FRHIComputeCommandList *)param_1->_padding_,false);
    FRDGScope::BeginGPU(this_00,(FRHIComputeCommandList *)param_1->_padding_);
  }
  local_res10 = (FRHIComputeCommandList *)param_1->_padding_;
  FVar2.GPUMask = *(uint *)&local_res10->field_0x29c;
  FRHIComputeCommandList::SetGPUMask
            (local_res10,(FRHIGPUMask)((1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1));
  local_res8.__this = this;
  pFVar6 = FRDGEventName::FRDGEventName(&local_58,1,L"FGPUSortManager::OnPreRender");
  FRDGUserValidation::ValidateAddPass(&param_1->UserValidation,pFVar6,None);
  FRDGBuilder::FlushAccessModeQueue(param_1);
  this_01 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,400,8);
  pTVar7 = TRDGEmptyLambdaPass<`FGPUSortManager::OnPreRender'::__l2::<lambda_1>_>::
           TRDGEmptyLambdaPass<_FGPUSortManager::OnPreRender_::__l2::<lambda_1>_>
                     (this_01,pFVar6,NeverCull,&local_res8);
  piVar1 = &(param_1->Passes).Array.ArrayMax;
  iVar5 = (param_1->Passes).Array.ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                      (0x808,(ForElementType<FRDGPass_*> *)&param_1->Passes,piVar1);
  }
  (param_1->Passes).Array.ArrayNum = iVar5 + 1;
  (param_1->Passes).Array.AllocatorInstance.Data[iVar5] = (FRDGPass *)pTVar7;
  *(int *)&pTVar7->field_0x4c = (param_1->Passes).Array.ArrayNum + -1;
  FRDGBuilder::SetupEmptyPass(param_1,(FRDGPass *)pTVar7);
  if (local_58.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.FormattedEventName.Data.AllocatorInstance.Data);
  }
  FRHIComputeCommandList::SetGPUMask(local_res10,FVar2);
  if (this_00 != (FRDGScope *)0x0) {
    if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
      FRDGScope::EndGPU(this_00,(FRHIComputeCommandList *)param_1->_padding_);
      FRDGScope::EndCPU(this_00,(FRHIComputeCommandList *)param_1->_padding_,false);
    }
    FRDGScope::ImmediateEnd(this_00,(FRDGScopeState *)param_1);
    *(uint *)&param_1->_padding_ = (uint)param_1->_padding_ & 0xfffffff7;
    param_1->_padding_ = *(longlong *)param_1->_padding_;
  }
  return;
}

// Register @ 147d20060

void __thiscall
FGPUSortManager::Register
          (FGPUSortManager *this,
          TDelegate<void___cdecl(FRHICommandListImmediate_&,int,int,EGPUSortFlags,FRHIUnorderedAccessView_*,FRHIUnorderedAccessView_*),FDefaultDelegateUserPolicy>
          *param_1,EGPUSortFlags param_2,FName *param_3)

{
  int *piVar1;
  TDelegateBase<FNotThreadSafeDelegateMode> *this_00;
  longlong *plVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  undefined1 local_58 [8];
  ForAnyElementType local_50;
  int local_48;
  FDestructionSentinel local_40;
  FReadAccessScope local_28;
  
  if ((((byte)(param_2 >> 7) ^ (byte)(param_2 >> 6)) & 1) == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasEither(UsedFlags, EGPUSortFlags::ValuesAsInt32, EGPUSortFlags::ValuesAsG16R16F)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GPUSortManager.cpp"
                       ,0x25e,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  (this->Settings).AllowedFlags = (this->Settings).AllowedFlags | param_2;
  piVar1 = &(this->Callbacks).ArrayMax;
  iVar6 = (this->Callbacks).ArrayNum;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&(this->Callbacks).AllocatorInstance,piVar1);
  }
  (this->Callbacks).ArrayNum = iVar6 + 1;
  this_00 = (TDelegateBase<FNotThreadSafeDelegateMode> *)
            ((this->Callbacks).AllocatorInstance.Data + (longlong)iVar6 * 0x28);
  DefaultConstructItems<FGPUSortManager::FCallbackInfo,int>(this_00,1);
  if (param_1 !=
      (TDelegate<void___cdecl(FRHICommandListImmediate_&,int,int,EGPUSortFlags,FRHIUnorderedAccessView_*,FRHIUnorderedAccessView_*),FDefaultDelegateUserPolicy>
       *)this_00) {
    local_58 = (undefined1  [8])0x0;
    local_50.Data = (FScriptContainerElement *)0x0;
    local_48 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,&local_28);
    if ((*(int *)&param_1->field_0x10 != 0) &&
       (plVar2 = *(longlong **)&param_1->field_0x8, plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x50))(plVar2,local_58);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              (this_00,(TDelegateBase<FNotThreadSafeDelegateMode> *)local_58);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
               (FWriteAccessScope *)&local_40);
    if ((local_48 != 0) && (local_50.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_50.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_50,0,0,0x10);
      local_48 = 0;
    }
    if (local_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
    }
    if (local_50.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_58);
  }
  *(EGPUSortFlags *)(this_00 + 1) = param_2;
  uVar4 = param_3->Number;
  *(uint *)&this_00[1].field_0x4 = (param_3->ComparisonIndex).Value;
  *(uint *)&this_00[1].field_0x8 = uVar4;
  return;
}

// ReleaseSortBuffers @ 147d21820

void __thiscall FGPUSortManager::ReleaseSortBuffers(FGPUSortManager *this)

{
  int *piVar1;
  ForElementType<FParticleSortBuffers_*> FVar2;
  int iVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  ForElementType<FParticleSortBuffers_*> FVar7;
  undefined1 local_res8 [8];
  
  iVar3 = (this->SortBuffersPool).ArrayNum;
  FVar7 = (this->SortBuffersPool).AllocatorInstance.SecondaryData;
  if (FVar7 == (ForElementType<FParticleSortBuffers_*>)0x0) {
    FVar7 = (ForElementType<FParticleSortBuffers_*>)&this->SortBuffersPool;
  }
  FVar2 = (ForElementType<FParticleSortBuffers_*>)((longlong)FVar7 + (longlong)iVar3 * 8);
  while( true ) {
    if ((this->SortBuffersPool).ArrayNum != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FParticleSortBuffers_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (FVar7 == FVar2) break;
    plVar4 = *(longlong **)FVar7;
    if (plVar4 == (longlong *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("SortBuffers",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GPUSortManager.cpp"
                         ,0x395,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    (**(code **)(*plVar4 + 0x10))(plVar4);
    (**(code **)*plVar4)(plVar4,1);
    FVar7 = (ForElementType<FParticleSortBuffers_*>)((longlong)FVar7 + 8);
  }
  piVar1 = &(this->SortBuffersPool).ArrayMax;
  (this->SortBuffersPool).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FParticleSortBuffers_*>_>
              (8,8,0,&(this->SortBuffersPool).AllocatorInstance,0,piVar1);
  }
  return;
}

// ResetDynamicValuesBuffers @ 147d24950

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FGPUSortManager::ResetDynamicValuesBuffers(FGPUSortManager *this,FRHICommandListBase *param_1)

{
  int *piVar1;
  TIndirectArray<FGPUSortManager::FDynamicValueBuffer,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  *pTVar2;
  int iVar3;
  ForElementType<void_*> FVar4;
  FDynamicValueBuffer *this_00;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  ForElementType<void_*> FVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  
  if (((this->SortBatches).ArrayNum != 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!SortBatches.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GPUSortManager.cpp"
                         ,0x37b,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (GGPUSortStressTest != 0) {
    TIndirectArray<FGPUSortManager::FDynamicValueBuffer,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
    ::Empty(&this->DynamicValueBufferPool,0);
    ReleaseSortBuffers(this);
    return;
  }
  uVar10 = 0;
  if (0 < (this->DynamicValueBufferPool).Array.ArrayNum) {
    lVar11 = 0;
    pTVar2 = &this->DynamicValueBufferPool;
    do {
      uVar12 = ~uVar10 >> 0x1f;
      uVar7 = 0;
      if ((int)uVar10 < (this->DynamicValueBufferPool).Array.ArrayNum) {
        uVar7 = uVar12;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FVar4 = (this->DynamicValueBufferPool).Array.AllocatorInstance.SecondaryData;
      FVar9 = (ForElementType<void_*>)pTVar2;
      if (FVar4 != (ForElementType<void_*>)0x0) {
        FVar9 = FVar4;
      }
      FVar4 = *(ForElementType<void_*> *)((longlong)FVar9 + lVar11 * 8);
      FDynamicValueBuffer::SkrinkAndReset((FDynamicValueBuffer *)FVar4,param_1,&this->Settings);
      iVar3 = *(int *)((longlong)FVar4 + 0x28);
      if (iVar3 == 0) {
LAB_147d24acc:
        if (((int)uVar10 < 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\IndirectArray.h"
                               ,0x130,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (((this->DynamicValueBufferPool).Array.ArrayNum <= (int)uVar10) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index < Array.Num()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\IndirectArray.h"
                               ,0x131,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FVar4 = (this->DynamicValueBufferPool).Array.AllocatorInstance.SecondaryData;
        FVar9 = (ForElementType<void_*>)pTVar2;
        if (FVar4 != (ForElementType<void_*>)0x0) {
          FVar9 = FVar4;
        }
        this_00 = *(FDynamicValueBuffer **)((longlong)FVar9 + lVar11 * 8);
        if (this_00 != (FDynamicValueBuffer *)0x0) {
          FDynamicValueBuffer::_scalar_deleting_destructor_(this_00,1);
        }
        uVar7 = 0;
        if ((int)uVar10 < (this->DynamicValueBufferPool).Array.ArrayNum) {
          uVar7 = uVar12;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FVar4 = (this->DynamicValueBufferPool).Array.AllocatorInstance.SecondaryData;
        iVar3 = (this->DynamicValueBufferPool).Array.ArrayNum;
        FVar9 = (ForElementType<void_*>)pTVar2;
        if (FVar4 != (ForElementType<void_*>)0x0) {
          FVar9 = FVar4;
        }
        iVar8 = iVar3 + ~uVar10;
        if (1 < iVar8) {
          iVar8 = 1;
        }
        if (iVar8 != 0) {
          memmove((void *)((longlong)FVar9 + lVar11 * 8),
                  (void *)((longlong)FVar9 + (longlong)(iVar3 - iVar8) * 8),(longlong)iVar8 << 3);
        }
        piVar1 = &(this->DynamicValueBufferPool).Array.ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::
        ReallocShrink<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<void_*>_>
                  (8,8,(ForElementType<void_*> *)pTVar2,
                   (this->DynamicValueBufferPool).Array.ArrayNum,
                   &(this->DynamicValueBufferPool).Array.ArrayMax);
        uVar10 = uVar10 - 1;
        lVar11 = lVar11 + -1;
      }
      else {
        uVar7 = 0;
        if ((int)(iVar3 - 1U) < iVar3) {
          uVar7 = ~(iVar3 - 1U) >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FVar9 = FVar4;
        if (*(ForElementType<void_*> *)((longlong)FVar4 + 0x20) != (ForElementType<void_*>)0x0) {
          FVar9 = *(ForElementType<void_*> *)((longlong)FVar4 + 0x20);
        }
        if (*(int *)(*(longlong *)
                      ((longlong)FVar9 + -8 + (longlong)*(int *)((longlong)FVar4 + 0x28) * 8) + 0x58
                    ) == 0) goto LAB_147d24acc;
      }
      uVar10 = uVar10 + 1;
      lVar11 = lVar11 + 1;
    } while ((int)uVar10 < (this->DynamicValueBufferPool).Array.ArrayNum);
  }
  return;
}

// UpdateSortBuffersPool @ 147d387e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FGPUSortManager::UpdateSortBuffersPool(FGPUSortManager *this,FRHICommandListBase *param_1)

{
  int *piVar1;
  ForElementType<void_*> FVar2;
  TArray<FParticleSortBuffers_*,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *pTVar3;
  code *pcVar4;
  FRHICommandListBase *pFVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  FRenderResource *this_00;
  ForElementType<FParticleSortBuffers_*> FVar10;
  ForElementType<FParticleSortBuffers_*> FVar11;
  longlong lVar12;
  uint uVar13;
  ForElementType<void_*> FVar14;
  longlong *plVar15;
  longlong lVar16;
  int iVar17;
  bool bVar18;
  undefined1 local_res8 [8];
  FRHICommandListBase *local_res10;
  uint local_res18;
  FRenderResource *local_78;
  ForElementType<void_*> local_70;
  int *piStack_68;
  undefined8 local_60;
  ForElementType<void_*> local_58;
  int *piStack_50;
  int local_48;
  undefined4 uStack_44;
  
  local_48 = (this->DynamicValueBufferPool).Array.ArrayNum;
  FVar14 = (this->DynamicValueBufferPool).Array.AllocatorInstance.SecondaryData;
  bVar18 = local_48 != 0;
  local_60 = CONCAT44(uStack_44,local_48);
  if (FVar14 == (ForElementType<void_*>)0x0) {
    FVar14 = (ForElementType<void_*>)&this->DynamicValueBufferPool;
  }
  piStack_68 = &(this->DynamicValueBufferPool).Array.ArrayNum;
  FVar2 = (ForElementType<void_*>)((longlong)FVar14 + (longlong)local_48 * 8);
  uVar13 = 0;
  local_res10 = param_1;
  local_58 = FVar14;
  piStack_50 = piStack_68;
  iVar17 = 0;
  while( true ) {
    uVar8 = uVar13;
    local_70 = FVar14;
    if (*piStack_68 != (int)local_60) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<void_*,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (FVar14 == FVar2) break;
    lVar16 = *(longlong *)FVar14;
    iVar7 = 0;
    iVar9 = *(int *)(lVar16 + 0x28);
    if (iVar9 != 0) {
      uVar13 = 0;
      if ((int)(iVar9 - 1U) < iVar9) {
        uVar13 = ~(iVar9 - 1U) >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar12 = lVar16;
      if (*(longlong *)(lVar16 + 0x20) != 0) {
        lVar12 = *(longlong *)(lVar16 + 0x20);
      }
      iVar7 = *(int *)(*(longlong *)(lVar12 + -8 + (longlong)*(int *)(lVar16 + 0x28) * 8) + 0x58);
    }
    if (iVar7 < iVar17) {
      iVar7 = iVar17;
    }
    FVar14 = (ForElementType<void_*>)((longlong)FVar14 + 8);
    uVar13 = uVar8 + 1;
    iVar17 = iVar7;
    if (((byte)*(undefined4 *)(lVar16 + 0x34) & 0x24) != 0x24) {
      uVar13 = uVar8;
    }
  }
  if ((1 < (int)uVar8) &&
     (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<3044871271557890773>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GPUSortManager.cpp"
                         ,0x2d5,"NumDedicatedSortBuffersRequired <= 1"), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar5 = local_res10;
  local_res18 = uVar8;
  if ((int)uVar8 < (int)(uint)bVar18) {
    local_res18 = (uint)bVar18;
  }
  uVar13 = 0;
  lVar16 = (longlong)(int)local_res18;
  if (0 < (int)local_res18) {
    pTVar3 = &this->SortBuffersPool;
    lVar12 = 0;
    do {
      if (((int)uVar13 < 0) || ((this->SortBuffersPool).ArrayNum <= (int)uVar13)) {
        this_00 = ::operator_new(0x88);
        if (this_00 == (FRenderResource *)0x0) {
          this_00 = (FRenderResource *)0x0;
        }
        else {
          FRenderResource::FRenderResource(this_00);
          this_00->_padding_ = (longlong)&___7FParticleSortBuffers__6B_;
          this_00[1]._padding_ = 0;
          this_00[1].OwnerName.ComparisonIndex = 0;
          this_00[1].OwnerName.Number = 0;
          this_00[1].ResourceName.ComparisonIndex = 0;
          this_00[1].ResourceName.Number = 0;
          this_00[1].ListIndex = 0;
          this_00[1].FeatureLevel = '\0';
          this_00[1].InitPhase = Pre;
          this_00[1].ResourceState = Default;
          this_00[1].field_0x1f = 0;
          this_00[2]._padding_ = 0;
          this_00[2].OwnerName.ComparisonIndex = 0;
          this_00[2].OwnerName.Number = 0;
          this_00[2].ResourceName.ComparisonIndex = 0;
          this_00[2].ResourceName.Number = 0;
          this_00[2].ListIndex = 0;
          this_00[2].FeatureLevel = '\0';
          this_00[2].InitPhase = Pre;
          this_00[2].ResourceState = Default;
          this_00[2].field_0x1f = 0;
          this_00[3]._padding_ = 0;
          this_00[3].OwnerName.ComparisonIndex = 0;
          this_00[3].OwnerName.Number = 0;
          this_00[3].ResourceName.ComparisonIndex = 0;
          this_00[3].ResourceName.Number = 0;
          this_00[3].ListIndex = 0;
          this_00[3].FeatureLevel = '\0';
          this_00[3].InitPhase = Pre;
          this_00[3].ResourceState = Default;
          this_00[3].field_0x1f = 0;
        }
        *(int *)&this_00[4]._padding_ = iVar17;
        local_78 = this_00;
        (**(code **)(this_00->_padding_ + 8))(this_00,pFVar5);
        FVar11 = (this->SortBuffersPool).AllocatorInstance.SecondaryData;
        FVar10 = (ForElementType<FParticleSortBuffers_*>)pTVar3;
        if (FVar11 != (ForElementType<FParticleSortBuffers_*>)0x0) {
          FVar10 = FVar11;
        }
        if ((ulonglong)FVar10 <= &local_78) {
          FVar10 = (ForElementType<FParticleSortBuffers_*>)pTVar3;
          if (FVar11 != (ForElementType<FParticleSortBuffers_*>)0x0) {
            FVar10 = FVar11;
          }
          if ((&local_78 <
               (FRenderResource **)
               ((longlong)FVar10 + (longlong)(this->SortBuffersPool).ArrayMax * 8)) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar18)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        iVar9 = (this->SortBuffersPool).ArrayNum;
        piVar1 = &(this->SortBuffersPool).ArrayMax;
        if (iVar9 == *piVar1) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FParticleSortBuffers_*>_>
                            (0x808,&pTVar3->AllocatorInstance,piVar1);
        }
        (this->SortBuffersPool).ArrayNum = iVar9 + 1;
        FVar11 = (this->SortBuffersPool).AllocatorInstance.SecondaryData;
        FVar10 = (ForElementType<FParticleSortBuffers_*>)pTVar3;
        if (FVar11 != (ForElementType<FParticleSortBuffers_*>)0x0) {
          FVar10 = FVar11;
        }
        *(FRenderResource **)((longlong)FVar10 + (longlong)iVar9 * 8) = local_78;
      }
      else {
        uVar8 = 0;
        if ((int)uVar13 < (this->SortBuffersPool).ArrayNum) {
          uVar8 = ~uVar13 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FVar11 = (this->SortBuffersPool).AllocatorInstance.SecondaryData;
        FVar10 = (ForElementType<FParticleSortBuffers_*>)pTVar3;
        if (FVar11 != (ForElementType<FParticleSortBuffers_*>)0x0) {
          FVar10 = FVar11;
        }
        plVar15 = *(longlong **)((longlong)FVar10 + lVar12 * 8);
        if ((plVar15 == (longlong *)0x0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("SortBuffers",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GPUSortManager.cpp"
                                ,0x2e0,L""), bVar18)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if ((int)plVar15[0x10] != iVar17) {
          (**(code **)(*plVar15 + 0x10))(plVar15);
          *(int *)(plVar15 + 0x10) = iVar17;
          (**(code **)(*plVar15 + 8))(plVar15,pFVar5);
        }
      }
      uVar13 = uVar13 + 1;
      lVar12 = lVar12 + 1;
    } while (lVar12 < lVar16);
  }
  uVar13 = local_res18;
  if ((int)local_res18 < (this->SortBuffersPool).ArrayNum) {
    pTVar3 = &this->SortBuffersPool;
    do {
      if (((this->SortBuffersPool).ArrayNum < 1) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar17 = (this->SortBuffersPool).ArrayNum;
      FVar11 = (this->SortBuffersPool).AllocatorInstance.SecondaryData;
      uVar8 = iVar17 - 1;
      lVar16 = (longlong)(int)uVar8 * 8;
      if (FVar11 == (ForElementType<FParticleSortBuffers_*>)0x0) {
        plVar15 = *(longlong **)((pTVar3->AllocatorInstance).InlineData + lVar16);
        FVar11 = (ForElementType<FParticleSortBuffers_*>)pTVar3;
      }
      else {
        plVar15 = *(longlong **)((longlong)FVar11 + lVar16);
      }
      iVar17 = ~uVar8 + iVar17;
      if (iVar17 != 0) {
        memmove((void *)(lVar16 + (longlong)FVar11),(void *)(lVar16 + (longlong)FVar11 + 8),
                (longlong)iVar17 << 3);
      }
      piVar1 = &(this->SortBuffersPool).ArrayNum;
      *piVar1 = *piVar1 + -1;
      UE::Core::Private::
      ReallocShrink<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FParticleSortBuffers_*>_>
                (8,8,&pTVar3->AllocatorInstance,(this->SortBuffersPool).ArrayNum,
                 &(this->SortBuffersPool).ArrayMax);
      if ((plVar15 == (longlong *)0x0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("SortBuffers",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GPUSortManager.cpp"
                              ,0x2f5,L""), bVar18)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      (**(code **)(*plVar15 + 0x10))(plVar15);
      *(undefined4 *)(plVar15 + 0x10) = 0;
      (**(code **)*plVar15)(plVar15,1);
    } while ((int)uVar13 < (this->SortBuffersPool).ArrayNum);
  }
  return;
}

