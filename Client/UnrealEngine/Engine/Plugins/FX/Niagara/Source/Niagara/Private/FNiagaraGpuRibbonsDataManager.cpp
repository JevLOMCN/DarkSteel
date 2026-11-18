// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 7

// ~FNiagaraGpuRibbonsDataManager @ 149336140

void __thiscall
FNiagaraGpuRibbonsDataManager::~FNiagaraGpuRibbonsDataManager(FNiagaraGpuRibbonsDataManager *this)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  FNiagaraRibbonGPUInitComputeBuffers *this_00;
  longlong lVar3;
  
  this->_padding_ = (longlong)&___7FNiagaraGpuRibbonsDataManager__6B_;
  DestructItems<FNiagaraGpuRibbonsDataManager::FIndexBufferEntry,int>
            ((FIndexBufferEntry *)(this->Index32BufferCache).AllocatorInstance.Data,
             (this->Index32BufferCache).ArrayNum);
  pFVar1 = (this->Index32BufferCache).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FNiagaraGpuRibbonsDataManager::FIndirectDrawBufferEntry,int>
            ((FIndirectDrawBufferEntry *)(this->IndirectDrawBufferCache).AllocatorInstance.Data,
             (this->IndirectDrawBufferCache).ArrayNum);
  pFVar1 = (this->IndirectDrawBufferCache).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this_00 = &this->ComputeBuffers;
  FNiagaraRibbonGPUInitComputeBuffers::~FNiagaraRibbonGPUInitComputeBuffers(this_00);
  lVar3 = 2;
  do {
    lVar2 = (longlong)(this_00 + -1);
    this_00 = (FNiagaraRibbonGPUInitComputeBuffers *)((longlong)(this_00 + -1) + 0x90);
    lVar3 = lVar3 + -1;
    DestructItems<FNiagaraRibbonGPUInitParameters,int>
              (*(FNiagaraRibbonGPUInitParameters **)this_00,*(int *)(lVar2 + 0x98));
    if (*(void **)this_00 != (void *)0x0) {
      FMemory::Free(*(void **)this_00);
    }
  } while (lVar3 != 0);
  this->_padding_ = (longlong)&___7FNiagaraGpuComputeDataManager__6B_;
  return;
}

// GenerateAllGPUData @ 149347c20

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FNiagaraGpuRibbonsDataManager::GenerateAllGPUData
          (FNiagaraGpuRibbonsDataManager *this,FRHICommandListImmediate *param_1,
          TArray<FNiagaraRibbonGPUInitParameters,TSizedDefaultAllocator<32>_> *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;
  TReferenceControllerBase<1> *pTVar4;
  FNiagaraRibbonRenderingFrameResources *pFVar5;
  code *pcVar6;
  atomic<int> aVar7;
  undefined4 uVar8;
  bool bVar9;
  uint uVar10;
  atomic<unsigned_int> aVar11;
  atomic<int> aVar12;
  int iVar13;
  FRHIBreadcrumbAllocator *pFVar14;
  FRHIBreadcrumbNode *pFVar15;
  FScriptContainerElement *pFVar16;
  FScriptContainerElement *pFVar17;
  FNiagaraRibbonGPUInitParameters *pFVar18;
  FNiagaraRibbonGPUInitParameters *pFVar19;
  undefined1 local_res20 [8];
  undefined1 local_a8;
  undefined1 local_a7 [7];
  FNiagaraGpuComputeDispatchInterface *local_a0;
  TSharedPtr<FNiagaraRibbonRenderingFrameResources,1> local_98;
  FRHIBreadcrumbScope local_88;
  char local_78;
  char *local_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  TGPUStat<TRHIGPUStatNameProvider_NiagaraGPURibbons> *local_60;
  wchar_t *pwStack_58;
  
  if (param_2->ArrayNum != 0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      uStack_68 = 0xb47;
      local_70 = 
      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraRendererRibbons.cpp"
      ;
      local_60 = &GPUStat_NiagaraGPURibbons;
      pwStack_58 = L"Niagara GPU Ribbons";
      ::Desc._padding_._0_4_ = 0x51df4b80;
      ::Desc._padding_._4_4_ = 1;
      ::Desc._padding_._0_4_ = 0xb47;
      ::Desc._padding_._4_4_ = uStack_64;
      ::Desc._padding_._0_4_ = 0x54c822f0;
      ::Desc._padding_._4_4_ = 1;
      ::Desc._padding_._0_4_ = 0x51de6420;
      ::Desc._padding_._4_4_ = 1;
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
      ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
      ::Desc.TraceGpuSpecId = 0;
      ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
      atexit(``FNiagaraGpuRibbonsDataManager::GenerateAllGPUData'::__l10::<lambda_1>::operator()<>'
             ::__l2::_dynamic_atexit_destructor_for__Desc__);
      _Init_thread_footer(&::_TSS0);
    }
    pFVar14 = FRHIComputeCommandList::GetBreadcrumbAllocator((FRHIComputeCommandList *)param_1);
    pFVar15 = FMemStackBase::Alloc(&pFVar14->Inner,0x50,8);
    pFVar15->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
    pFVar15->Parent = FRHIBreadcrumbNode::Sentinel;
    pFVar15->ListLink = (FRHIBreadcrumbNode *)0x0;
    (pFVar15->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
    (pFVar15->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
    pFVar15->Data = (FRHIBreadcrumbData *)&::Desc;
    pFVar15->Allocator = pFVar14;
    pFVar15->TraceCpuSpecId = 0;
    pFVar15->TraceCpuMetadataId = 0;
    LOCK();
    UNLOCK();
    uVar10 = (uint)FRHIBreadcrumbNode::NextID | 0x80000000;
    FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
    pFVar15->BeginPipes = (atomic<unsigned_char>)0x0;
    pFVar15->EndPipes = (atomic<unsigned_char>)0x0;
    pFVar15->ID = uVar10;
    pFVar15->_padding_ =
         (longlong)
         &
         ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0A___V_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
    ;
    pFVar15[1]._padding_ = (longlong)&::Desc;
    if ((::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) &&
       (bVar9 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable(), bVar9)) {
      EnterCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
      if (::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
        aVar11 = (atomic<unsigned_int>)
                 FCpuProfilerTrace::OutputEventType
                           ((wchar_t *)CONCAT44(::Desc._padding_._4_4_,(undefined4)::Desc._padding_)
                            ,(char *)CONCAT44(::Desc._padding_._4_4_,(undefined4)::Desc._padding_),
                            (uint)::Desc._padding_);
        LOCK();
        ::Desc.TraceCpuSpecId = aVar11;
        UNLOCK();
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
    }
    pFVar15->TraceCpuSpecId = (uint)::Desc.TraceCpuSpecId;
    FRHIBreadcrumbScope::FRHIBreadcrumbScope(&local_88,(FRHIComputeCommandList *)param_1,pFVar15);
    iVar2 = param_2->ArrayNum;
    local_a0 = (FNiagaraGpuComputeDispatchInterface *)this->_padding_;
    pFVar18 = (FNiagaraRibbonGPUInitParameters *)(param_2->AllocatorInstance).Data;
    pFVar19 = pFVar18 + iVar2;
    local_78 = '\x01';
LAB_149347da0:
    if (param_2->ArrayNum != iVar2) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<FNiagaraRibbonGPUInitParameters,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res20);
    }
    if (pFVar18 != pFVar19) {
      pTVar4 = (pFVar18->RenderingResources).WeakReferenceCount.ReferenceController;
      local_98.Object = (FNiagaraRibbonRenderingFrameResources *)0x0;
      local_98.SharedReferenceCount.ReferenceController = pTVar4;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        aVar7 = pTVar4->SharedReferenceCount;
        do {
          if (aVar7 == (atomic<int>)0x0) {
            local_98.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      ((TReferenceControllerBase<1> *)0x0);
            pFVar18 = pFVar18 + 1;
            goto LAB_149347da0;
          }
          LOCK();
          aVar12 = pTVar4->SharedReferenceCount;
          bVar9 = aVar7 == aVar12;
          if (bVar9) {
            pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar7 + 1);
            aVar12 = aVar7;
          }
          UNLOCK();
          aVar7 = aVar12;
        } while (!bVar9);
        if ((pTVar4 != (TReferenceControllerBase<1> *)0x0) &&
           (local_98.Object = (pFVar18->RenderingResources).Object,
           local_98.Object != (FNiagaraRibbonRenderingFrameResources *)0x0)) {
          uVar10 = pFVar18->NumInstances;
          if ((ulonglong)(this->ComputeBuffers).SortBuffer.NumBytes <
              (ulonglong)((longlong)(int)uVar10 << 2)) {
            FRWBuffer::Initialize
                      (&(this->ComputeBuffers).SortBuffer,(FRHICommandListBase *)param_1,
                       L"NiagarGPUInit-SortedIndices",4,uVar10,PF_R32_UINT,
                       SRVMask|VertexOrIndexBuffer,None,(FResourceArrayUploadInterface *)0x0);
          }
          if ((pFVar18->Renderer->GenerationConfig).bWantsAutomaticTessellation == 0) {
            iVar13 = 0;
          }
          else {
            iVar13 = 3;
            if ((pFVar18->Renderer->GenerationConfig).bHasTwist != 0) {
              iVar13 = 5;
            }
          }
          if ((ulonglong)(this->ComputeBuffers).TransientTessellationStats.NumBytes <
              (ulonglong)(iVar13 * uVar10) << 2) {
            FRWBuffer::Initialize
                      (&(this->ComputeBuffers).TransientTessellationStats,
                       (FRHICommandListBase *)param_1,L"NiagaraGPUInit-Tessellation-0",4,
                       iVar13 * uVar10,PF_R32_FLOAT,SRVMask,Static,
                       (FResourceArrayUploadInterface *)0x0);
          }
          if ((this->ComputeBuffers).TransientAccumulation[0].NumBytes < uVar10 << 5) {
            FRWBufferStructured::Initialize
                      ((this->ComputeBuffers).TransientAccumulation,(FRHICommandListBase *)param_1,
                       L"NiagaraGPUInit-Accumulation-0",0x20,uVar10,Static,false,false,SRVMask);
            FRWBufferStructured::Initialize
                      ((this->ComputeBuffers).TransientAccumulation + 1,
                       (FRHICommandListBase *)param_1,L"NiagaraGPUInit-Accumulation-1",0x20,uVar10,
                       Static,false,false,SRVMask);
          }
          FNiagaraRendererRibbons::InitializeVertexBuffersGPU
                    (pFVar18->Renderer,param_1,local_a0,pFVar18,&this->ComputeBuffers,&local_98);
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      pFVar18 = pFVar18 + 1;
      goto LAB_149347da0;
    }
    iVar2 = param_2->ArrayNum;
    pFVar18 = (FNiagaraRibbonGPUInitParameters *)(param_2->AllocatorInstance).Data;
    pFVar19 = pFVar18 + iVar2;
LAB_149347fc6:
    if (param_2->ArrayNum != iVar2) {
      local_a8 = 0;
      `TCheckedPointerIterator<FNiagaraRibbonGPUInitParameters,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(&local_a8);
    }
    if (pFVar18 != pFVar19) {
      pTVar4 = (pFVar18->RenderingResources).WeakReferenceCount.ReferenceController;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        aVar7 = pTVar4->SharedReferenceCount;
        do {
          if (aVar7 == (atomic<int>)0x0) {
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      ((TReferenceControllerBase<1> *)0x0);
            pFVar18 = pFVar18 + 1;
            goto LAB_149347fc6;
          }
          LOCK();
          aVar12 = pTVar4->SharedReferenceCount;
          bVar9 = aVar7 == aVar12;
          if (bVar9) {
            pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar7 + 1);
            aVar12 = aVar7;
          }
          UNLOCK();
          aVar7 = aVar12;
        } while (!bVar9);
        pFVar5 = (pFVar18->RenderingResources).Object;
        if (pFVar5 != (FNiagaraRibbonRenderingFrameResources *)0x0) {
          iVar13 = (pFVar5->ViewResources).ArrayNum;
          pFVar16 = (pFVar5->ViewResources).AllocatorInstance.Data;
          pFVar17 = pFVar16 + (longlong)iVar13 * 0x10;
          while( true ) {
            if ((pFVar5->ViewResources).ArrayNum != iVar13) {
              local_a7[0] = 0;
              `TCheckedPointerIterator<TSharedPtr<FNiagaraRibbonRenderingFrameViewResources,1>,int,0>
              ::operator!='::__l2::<lambda_1>::operator()(local_a7);
            }
            if (pFVar16 == pFVar17) break;
            if ((*(longlong *)pFVar16 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar9)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            if ((*(FNiagaraRibbonRenderingFrameViewResources **)pFVar16)->
                bNeedsIndexBufferGeneration != false) {
              FNiagaraRendererRibbons::InitializeViewIndexBuffersGPU
                        (pFVar18->Renderer,param_1,local_a0,pFVar18,
                         *(FNiagaraRibbonRenderingFrameViewResources **)pFVar16);
            }
            pFVar16 = pFVar16 + 0x10;
          }
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      pFVar18 = pFVar18 + 1;
      goto LAB_149347fc6;
    }
    DestructItems<FNiagaraRibbonGPUInitParameters,int>
              ((FNiagaraRibbonGPUInitParameters *)(param_2->AllocatorInstance).Data,
               param_2->ArrayNum);
    param_2->ArrayNum = 0;
    if (param_2->ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,&param_2->AllocatorInstance,0,&param_2->ArrayMax);
    }
    if (local_78 != '\0') {
      FRHIBreadcrumbScope::~FRHIBreadcrumbScope(&local_88);
    }
  }
  return;
}

// GetOrAllocateIndexBuffer @ 1493549d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

TSharedPtr<FNiagaraRibbonIndexBuffer,1> * __thiscall
FNiagaraGpuRibbonsDataManager::GetOrAllocateIndexBuffer
          (FNiagaraGpuRibbonsDataManager *this,
          TSharedPtr<FNiagaraRibbonIndexBuffer,1> *__return_storage_ptr__,
          FRHICommandListBase *param_1,int param_2,int param_3)

{
  FRHIBuffer *pFVar1;
  FName *pFVar2;
  FMutex *this_00;
  TArray<FNiagaraGpuRibbonsDataManager::FIndexBufferEntry,TSizedDefaultAllocator<32>_> *pTVar3;
  atomic<unsigned_char> aVar4;
  FRenderResource *this_01;
  FRHIResource *pFVar5;
  FName this_02;
  TReferenceControllerBase<1> *pTVar6;
  code *pcVar7;
  undefined4 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  FRHICommandListBase *this_03;
  bool bVar13;
  int iVar14;
  TSharedPtr<FNiagaraRibbonIndexBuffer,1> *pTVar15;
  FScriptContainerElement *pFVar16;
  TSharedRef<FNiagaraRibbonIndexBuffer,1> *pTVar17;
  TRefCountPtr<FRHIBuffer> TVar18;
  TRefCountPtr<FRHIShaderResourceView> TVar19;
  TRefCountPtr<FRHIUnorderedAccessView> TVar20;
  uint uVar21;
  FScriptContainerElement *pFVar22;
  FRHIResource *local_res10;
  FRHICommandListBase *local_res18;
  FNiagaraRibbonIndexBuffer *local_f8;
  FSharedReferencer<1> local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  int local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  int iStack_cc;
  wchar_t *local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 local_a4;
  undefined1 local_a0 [16];
  longlong local_90;
  longlong lStack_88;
  TSharedRef<FNiagaraRibbonIndexBuffer,1> local_80;
  longlong local_70;
  longlong lStack_68;
  wchar_t *local_60;
  longlong lStack_58;
  longlong local_50;
  longlong lStack_48;
  longlong local_40;
  
  this_00 = &this->AllocateGuard;
  local_res18 = param_1;
  if ((this_00 == (FMutex *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("Mutex",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                          ,0x1b,L""), bVar13)) {
    pcVar7 = (code *)swi(3);
    pTVar15 = (TSharedPtr<FNiagaraRibbonIndexBuffer,1> *)(*pcVar7)();
    return pTVar15;
  }
  LOCK();
  bVar13 = this_00->State == (atomic<unsigned_char>)0x0;
  if (bVar13) {
    this_00->State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar13) {
    UE::FMutex::LockSlow(this_00);
  }
  uVar21 = param_2;
  if ((-1 < GNiagaraRibbonGpuBufferCachePurgeCounter) &&
     (uVar21 = param_3, GNiagaraRibbonGpuAllocateMaxCount == 0)) {
    uVar21 = param_2 + -1 + GNiagaraRibbonGpuBufferAlign & -GNiagaraRibbonGpuBufferAlign;
  }
  pTVar3 = &this->Index32BufferCache;
  pFVar22 = (pTVar3->AllocatorInstance).Data;
  iVar14 = (this->Index32BufferCache).ArrayNum;
  pFVar16 = pFVar22 + (longlong)iVar14 * 0x20;
  if (pFVar22 != pFVar16) {
    do {
      if ((*(ulong64 *)pFVar22 != this->FrameCounter) && (*(uint *)(pFVar22 + 8) == uVar21)) {
        if (pFVar22 != (FScriptContainerElement *)0x0) goto LAB_149354ce4;
        break;
      }
      pFVar22 = pFVar22 + 0x20;
    } while (pFVar22 != pFVar16);
  }
  if (iVar14 == (this->Index32BufferCache).ArrayMax) {
    iVar14 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x820,&pTVar3->AllocatorInstance,&(this->Index32BufferCache).ArrayMax);
    (this->Index32BufferCache).ArrayNum = iVar14;
  }
  iVar14 = (this->Index32BufferCache).ArrayNum;
  pFVar22 = (pTVar3->AllocatorInstance).Data + (longlong)iVar14 * 0x20;
  (this->Index32BufferCache).ArrayNum = iVar14 + 1;
  DefaultConstructItems<FNiagaraGpuRibbonsDataManager::FIndexBufferEntry,int>(pFVar22,1);
  *(uint *)(pFVar22 + 8) = uVar21;
  pTVar17 = MakeShared<FNiagaraRibbonIndexBuffer,1>(&local_80);
  local_f0.ReferenceController = (pTVar17->SharedReferenceCount).ReferenceController;
  local_f8 = pTVar17->Object;
  if (local_f0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_f0.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_f0.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar16 = pFVar22 + 0x10;
  if (pFVar16 != (FScriptContainerElement *)&local_f8) {
    *(FNiagaraRibbonIndexBuffer **)pFVar16 = local_f8;
    local_f8 = (FNiagaraRibbonIndexBuffer *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)(pFVar22 + 0x18),&local_f0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_f0.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_80.SharedReferenceCount.ReferenceController);
  if ((*(longlong *)pFVar16 == 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar13)) {
    pcVar7 = (code *)swi(3);
    pTVar15 = (TSharedPtr<FNiagaraRibbonIndexBuffer,1> *)(*pcVar7)();
    return pTVar15;
  }
  this_01 = *(FRenderResource **)pFVar16;
  FRenderResource::InitResource(this_01,local_res18);
  this_03 = local_res18;
  local_d8 = uVar21 * 4;
  local_c8 = L"NiagaraRibbonIndexBuffer";
  uStack_d4 = 4;
  uStack_ac = 0;
  uStack_a8 = 0;
  iStack_cc = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
  uStack_c0 = 0;
  uStack_b4 = 0;
  uStack_b0 = 0;
  local_a4 = 0;
  local_60 = L"NiagaraRibbonIndexBuffer";
  lStack_58 = 0;
  uStack_d0 = 0x8109;
  local_70 = CONCAT44(4,local_d8);
  lStack_68 = CONCAT44(iStack_cc,0x8109);
  local_b8 = 8;
  local_40 = 0;
  local_50 = 8;
  lStack_48 = 0;
  TVar18 = FRHICommandListBase::CreateBuffer(local_res18,(FRHIBufferCreateDesc *)&local_res10);
  pFVar1 = (FRHIBuffer *)(this_01 + 1);
  if (pFVar1 != TVar18.Reference) {
    pFVar5 = (FRHIResource *)pFVar1->_padding_;
    pFVar1->_padding_ = (TVar18.Reference)->_padding_;
    (TVar18.Reference)->_padding_ = 0;
    if (pFVar5 != (FRHIResource *)0x0) {
      FRHIResource::Release(pFVar5);
    }
  }
  if (local_res10 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_res10);
  }
  lStack_88 = 0;
  local_90 = 0x11c00;
  TVar19 = FRHICommandListBase::CreateShaderResourceView
                     (this_03,(FRHIBuffer *)local_a0,(FInitializer *)pFVar1->_padding_);
  pFVar2 = &this_01[1].ResourceName;
  if ((FRHIShaderResourceView *)pFVar2 != TVar19.Reference) {
    this_02 = *pFVar2;
    uVar8 = *(undefined4 *)&(TVar19.Reference)->field_0x4;
    pFVar2->ComparisonIndex = (FNameEntryId)*(undefined4 *)&(TVar19.Reference)->field_0x0;
    pFVar2->Number = uVar8;
    *(undefined8 *)TVar19.Reference = 0;
    if (this_02 != (FName)0x0) {
      FRHIResource::Release((FRHIResource *)this_02);
    }
  }
  if ((FRHIResource *)local_a0._0_8_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)local_a0._0_8_);
  }
  uStack_e0 = 0;
  local_e8 = 0x11c01;
  TVar20 = FRHICommandListBase::CreateUnorderedAccessView
                     (this_03,(FRHIBuffer *)(local_a0 + 8),(FInitializer *)this_01[1]._padding_);
  if ((FRHIUnorderedAccessView *)&this_01[1].ListIndex != TVar20.Reference) {
    pFVar5 = *(FRHIResource **)&this_01[1].ListIndex;
    uVar9 = (TVar20.Reference)->field_0x4;
    uVar10 = (TVar20.Reference)->field_0x5;
    uVar11 = (TVar20.Reference)->field_0x6;
    uVar12 = (TVar20.Reference)->field_0x7;
    this_01[1].ListIndex = *(undefined4 *)&(TVar20.Reference)->field_0x0;
    this_01[1].FeatureLevel = (TEnumAsByte<ERHIFeatureLevel::Type>)uVar9;
    this_01[1].InitPhase = uVar10;
    this_01[1].ResourceState = uVar11;
    this_01[1].field_0x1f = uVar12;
    *(undefined8 *)TVar20.Reference = 0;
    if (pFVar5 != (FRHIResource *)0x0) {
      FRHIResource::Release(pFVar5);
    }
  }
  if ((FRHIResource *)local_a0._8_8_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)local_a0._8_8_);
  }
LAB_149354ce4:
  *(ulong64 *)pFVar22 = this->FrameCounter;
  __return_storage_ptr__->Object = *(FNiagaraRibbonIndexBuffer **)(pFVar22 + 0x10);
  pTVar6 = *(TReferenceControllerBase<1> **)(pFVar22 + 0x18);
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (this_00 != (FMutex *)0x0) {
    LOCK();
    aVar4 = this_00->State;
    this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
    UNLOCK();
    if (((byte)aVar4 & 2) != 0) {
      UE::FMutex::WakeWaitingThread(this_00);
    }
  }
  return __return_storage_ptr__;
}

// GetOrAllocateIndirectDrawBuffer @ 149354d50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

TSharedPtr<FRWBuffer,1> * __thiscall
FNiagaraGpuRibbonsDataManager::GetOrAllocateIndirectDrawBuffer
          (FNiagaraGpuRibbonsDataManager *this,TSharedPtr<FRWBuffer,1> *__return_storage_ptr__,
          FRHICommandListBase *param_1)

{
  int *piVar1;
  FMutex *this_00;
  TArray<FNiagaraGpuRibbonsDataManager::FIndirectDrawBufferEntry,TSizedDefaultAllocator<32>_>
  *pTVar2;
  FScriptContainerElement *pFVar3;
  atomic<unsigned_char> aVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  TSharedPtr<FRWBuffer,1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  FScriptContainerElement *pFVar10;
  TReferenceControllerBase<1> *pTVar11;
  TReferenceControllerBase<1> *local_48;
  FSharedReferencer<1> FStack_40;
  
  this_00 = &this->AllocateGuard;
  if ((this_00 == (FMutex *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar8 = (TSharedPtr<FRWBuffer,1> *)(*pcVar5)();
    return pTVar8;
  }
  LOCK();
  bVar6 = this_00->State == (atomic<unsigned_char>)0x0;
  if (bVar6) {
    this_00->State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar6) {
    UE::FMutex::LockSlow(this_00);
  }
  pTVar2 = &this->IndirectDrawBufferCache;
  pFVar10 = (pTVar2->AllocatorInstance).Data;
  iVar7 = (this->IndirectDrawBufferCache).ArrayNum;
  pFVar3 = pFVar10 + (longlong)iVar7 * 0x18;
  if (pFVar10 != pFVar3) {
    do {
      if (*(ulong64 *)pFVar10 != this->FrameCounter) {
        if (pFVar10 != (FScriptContainerElement *)0x0) goto LAB_149354f8b;
        break;
      }
      pFVar10 = pFVar10 + 0x18;
    } while (pFVar10 != pFVar3);
  }
  piVar1 = &(this->IndirectDrawBufferCache).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&pTVar2->AllocatorInstance,piVar1);
    (this->IndirectDrawBufferCache).ArrayNum = iVar7;
  }
  iVar7 = (this->IndirectDrawBufferCache).ArrayNum;
  (this->IndirectDrawBufferCache).ArrayNum = iVar7 + 1;
  pFVar10 = (pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 0x18;
  DefaultConstructItems<FNiagaraGpuRibbonsDataManager::FIndirectDrawBufferEntry,int>(pFVar10,1);
  pTVar9 = ::operator_new(0x40);
  if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
    pTVar9 = (TReferenceControllerBase<1> *)0x0;
    local_48 = ___xmm_00000000000000000000000000000010;
    pTVar11 = (TReferenceControllerBase<1> *)&DAT_00000010;
    FStack_40.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar9->SharedReferenceCount = (atomic<int>)0x1;
    pTVar11 = pTVar9 + 1;
    pTVar9->WeakReferenceCount = (atomic<int>)0x1;
    pTVar9->_padding_ =
         (longlong)&___7__TIntrusiveReferenceController_UFRWBuffer___00_SharedPointerInternals__6B_;
    pTVar9[1]._padding_ = 0;
    pTVar9[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar9[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar9[2]._padding_ = 0;
    pTVar9[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar9[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar9[3]._padding_ = 0;
    pTVar9[3].SharedReferenceCount = (atomic<int>)0x0;
    if ((pTVar11 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      pTVar8 = (TSharedPtr<FRWBuffer,1> *)(*pcVar5)();
      return pTVar8;
    }
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
    FStack_40.ReferenceController = pTVar9;
    local_48 = pTVar11;
  }
  pFVar3 = pFVar10 + 8;
  if (pFVar3 != (FScriptContainerElement *)&local_48) {
    *(TReferenceControllerBase<1> **)pFVar3 = pTVar11;
    local_48 = (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)(pFVar10 + 0x10),&FStack_40);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_40.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  if ((*(longlong *)pFVar3 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar8 = (TSharedPtr<FRWBuffer,1> *)(*pcVar5)();
    return pTVar8;
  }
  FRWBuffer::Initialize
            (*(FRWBuffer **)pFVar3,param_1,L"RibbonIndirectDrawBuffer",4,0x11,PF_R32_UINT,
             SRVMask|IndirectArgs,DrawIndirect|Static,(FResourceArrayUploadInterface *)0x0);
LAB_149354f8b:
  *(ulong64 *)pFVar10 = this->FrameCounter;
  __return_storage_ptr__->Object = *(FRWBuffer **)(pFVar10 + 8);
  pTVar9 = *(TReferenceControllerBase<1> **)(pFVar10 + 0x10);
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar9;
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (this_00 != (FMutex *)0x0) {
    LOCK();
    aVar4 = this_00->State;
    this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
    UNLOCK();
    if (((byte)aVar4 & 2) != 0) {
      UE::FMutex::WakeWaitingThread(this_00);
    }
  }
  return __return_storage_ptr__;
}

// OnPostPostRender @ 149360840

void __thiscall
FNiagaraGpuRibbonsDataManager::OnPostPostRender
          (FNiagaraGpuRibbonsDataManager *this,FRHICommandListImmediate *param_1)

{
  GenerateAllGPUData(this,param_1,this->RenderersToGeneratePerStage + 1);
  return;
}

// OnPostPreRender @ 149360850

void __thiscall
FNiagaraGpuRibbonsDataManager::OnPostPreRender
          (FNiagaraGpuRibbonsDataManager *this,FRHICommandListImmediate *param_1)

{
  TArray<FNiagaraGpuRibbonsDataManager::FIndirectDrawBufferEntry,TSizedDefaultAllocator<32>_>
  *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  ulonglong uVar4;
  longlong lVar5;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  int iVar12;
  
  uVar4 = (ulonglong)GNiagaraRibbonGpuBufferCachePurgeCounter;
  pTVar1 = &this->IndirectDrawBufferCache;
  if (GNiagaraRibbonGpuBufferCachePurgeCounter < 0) {
    DestructItems<FNiagaraGpuRibbonsDataManager::FIndirectDrawBufferEntry,int>
              ((FIndirectDrawBufferEntry *)(pTVar1->AllocatorInstance).Data,
               (this->IndirectDrawBufferCache).ArrayNum);
    (this->IndirectDrawBufferCache).ArrayNum = 0;
    if ((this->IndirectDrawBufferCache).ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,&pTVar1->AllocatorInstance,0,&(this->IndirectDrawBufferCache).ArrayMax);
    }
    DestructItems<FNiagaraGpuRibbonsDataManager::FIndexBufferEntry,int>
              ((FIndexBufferEntry *)(this->Index32BufferCache).AllocatorInstance.Data,
               (this->Index32BufferCache).ArrayNum);
    piVar2 = &(this->Index32BufferCache).ArrayMax;
    (this->Index32BufferCache).ArrayNum = 0;
    if (*piVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,&(this->Index32BufferCache).AllocatorInstance,0,piVar2);
    }
  }
  else {
    iVar10 = (this->IndirectDrawBufferCache).ArrayNum;
    lVar5 = (longlong)iVar10;
    if (iVar10 != 0) {
      pFVar3 = (pTVar1->AllocatorInstance).Data;
      iVar12 = 0;
      bVar11 = this->FrameCounter - *(longlong *)pFVar3 <= uVar4;
      lVar7 = 0;
      iVar10 = 0;
      do {
        lVar7 = lVar7 + 1;
        iVar9 = iVar10 + 1;
        if (lVar7 < lVar5) {
          pFVar6 = pFVar3 + lVar7 * 0x18;
          do {
            if (bVar11 != this->FrameCounter - *(longlong *)pFVar6 <= uVar4) break;
            iVar9 = iVar9 + 1;
            lVar7 = lVar7 + 1;
            pFVar6 = pFVar6 + 0x18;
          } while (lVar7 < lVar5);
        }
        iVar8 = iVar9 - iVar10;
        if (bVar11 == false) {
          DestructItems<FNiagaraGpuRibbonsDataManager::FIndirectDrawBufferEntry,int>
                    ((FIndirectDrawBufferEntry *)(pFVar3 + (longlong)iVar10 * 0x18),iVar8);
        }
        else {
          if (iVar12 != iVar10) {
            memmove(pFVar3 + (longlong)iVar12 * 0x18,pFVar3 + (longlong)iVar10 * 0x18,
                    (longlong)iVar8 * 0x18);
          }
          iVar12 = iVar12 + iVar8;
        }
        bVar11 = (bool)(bVar11 ^ 1);
        iVar10 = iVar9;
      } while (lVar7 < lVar5);
      (this->IndirectDrawBufferCache).ArrayNum = iVar12;
    }
    iVar10 = (this->Index32BufferCache).ArrayNum;
    lVar5 = (longlong)iVar10;
    if (iVar10 != 0) {
      pFVar3 = (this->Index32BufferCache).AllocatorInstance.Data;
      iVar12 = 0;
      bVar11 = this->FrameCounter - *(longlong *)pFVar3 <= uVar4;
      lVar7 = 0;
      iVar10 = 0;
      do {
        lVar7 = lVar7 + 1;
        iVar9 = iVar10 + 1;
        if (lVar7 < lVar5) {
          pFVar6 = pFVar3 + lVar7 * 0x20;
          do {
            if (bVar11 != this->FrameCounter - *(longlong *)pFVar6 <= uVar4) break;
            iVar9 = iVar9 + 1;
            lVar7 = lVar7 + 1;
            pFVar6 = pFVar6 + 0x20;
          } while (lVar7 < lVar5);
        }
        iVar8 = iVar9 - iVar10;
        if (bVar11 == false) {
          DestructItems<FNiagaraGpuRibbonsDataManager::FIndexBufferEntry,int>
                    ((FIndexBufferEntry *)(pFVar3 + (longlong)iVar10 * 0x20),iVar8);
        }
        else {
          if (iVar12 != iVar10) {
            memmove(pFVar3 + (longlong)iVar12 * 0x20,pFVar3 + (longlong)iVar10 * 0x20,
                    (longlong)iVar8 << 5);
          }
          iVar12 = iVar12 + iVar8;
        }
        bVar11 = (bool)(bVar11 ^ 1);
        iVar10 = iVar9;
      } while (lVar7 < lVar5);
      (this->Index32BufferCache).ArrayNum = iVar12;
    }
    this->FrameCounter = this->FrameCounter + 1;
  }
  GenerateAllGPUData(this,param_1,this->RenderersToGeneratePerStage);
  return;
}

// RegisterRenderer @ 149364770

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FNiagaraGpuRibbonsDataManager::RegisterRenderer
          (FNiagaraGpuRibbonsDataManager *this,FNiagaraRendererRibbons *param_1,
          FNiagaraDataBuffer *param_2,TSharedPtr<FNiagaraRibbonRenderingFrameResources,1> *param_3)

{
  int *piVar1;
  FMutex *this_00;
  atomic<unsigned_char> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  ForAnyElementType *pFVar9;
  
  if ((param_3->Object == (FNiagaraRibbonRenderingFrameResources *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (0 < (param_3->Object->ViewResources).ArrayNum) {
    this_00 = &this->AllocateGuard;
    if ((this_00 == (FMutex *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                           ,0x1b,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    LOCK();
    bVar5 = this_00->State == (atomic<unsigned_char>)0x0;
    if (bVar5) {
      this_00->State = (atomic<unsigned_char>)0x1;
    }
    UNLOCK();
    if (!bVar5) {
      UE::FMutex::LockSlow(this_00);
    }
    lVar7 = 0x10;
    if (param_2->GPUDataReadyStage == Last) {
      lVar7 = 0x20;
    }
    pFVar9 = (ForAnyElementType *)
             ((longlong)
              &((FNiagaraGpuRibbonsDataManager *)(this->RenderersToGeneratePerStage + -1))->
               _padding_ + lVar7);
    iVar6 = *(int *)&pFVar9[1].Data;
    piVar1 = (int *)((longlong)&pFVar9[1].Data + 4);
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,pFVar9,piVar1);
    }
    *(int *)&pFVar9[1].Data = iVar6 + 1;
    pFVar8 = pFVar9->Data + (longlong)iVar6 * 0x20;
    *(FNiagaraRendererRibbons **)pFVar8 = param_1;
    *(uint *)(pFVar8 + 8) = param_2->NumInstances;
    *(uint *)(pFVar8 + 0xc) = param_2->GPUInstanceCountBufferOffset;
    *(FNiagaraRibbonRenderingFrameResources **)(pFVar8 + 0x10) = param_3->Object;
    pTVar3 = (param_3->SharedReferenceCount).ReferenceController;
    *(TReferenceControllerBase<1> **)(pFVar8 + 0x18) = pTVar3;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
      UNLOCK();
    }
    if (this_00 != (FMutex *)0x0) {
      LOCK();
      aVar2 = this_00->State;
      this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
      UNLOCK();
      if (((byte)aVar2 & 2) != 0) {
        UE::FMutex::WakeWaitingThread(this_00);
      }
    }
  }
  return;
}

