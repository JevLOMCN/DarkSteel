// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 14

// FVirtualTextureUploadCache @ 1489b51e0

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FVirtualTextureUploadCache * __thiscall
FVirtualTextureUploadCache::FVirtualTextureUploadCache(FVirtualTextureUploadCache *this)

{
  code *pcVar1;
  TConsoleVariableData<int> *pTVar2;
  bool bVar3;
  FVirtualTextureUploadCache *pFVar4;
  
  this->_padding_ = (longlong)&___7IVirtualTextureFinalizer__6B_;
  FRenderResource::FRenderResource((FRenderResource *)&this->_padding_);
  this->_padding_ = (longlong)&_vftable__for__IVirtualTextureFinalizer__;
  this->_padding_ = (longlong)&_vftable__for__FRenderResource__;
  (this->Pools).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Pools).ArrayNum = 0;
  (this->Pools).ArrayMax = 0;
  (this->TileAllocator).Mutex.State = (atomic<unsigned_char>)0x0;
  (this->TileAllocator).FormatDescs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TileAllocator).FormatDescs.ArrayNum = 0;
  (this->TileAllocator).FormatDescs.ArrayMax = 0;
  (this->TileAllocator).FormatBuffers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TileAllocator).FormatBuffers.ArrayNum = 0;
  (this->TileAllocator).FormatBuffers.ArrayMax = 0;
  (this->TileAllocator).NumAllocatedBytes = 0;
  *(undefined8 *)&this->PendingUpload = 0;
  *(undefined8 *)&(this->PendingUpload).field_0x8 = 0;
  *(undefined8 *)&(this->PendingUpload).field_0x20 = 0;
  *(undefined4 *)&(this->PendingUpload).field_0x28 = 0;
  *(undefined4 *)&(this->PendingUpload).field_0x2c = 0x80;
  *(undefined4 *)&(this->PendingUpload).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PendingUpload).field_0x34 = 0;
  *(undefined8 *)&this->PendingRelease = 0;
  *(undefined8 *)&(this->PendingRelease).field_0x8 = 0;
  *(undefined8 *)&(this->PendingRelease).field_0x20 = 0;
  *(undefined4 *)&(this->PendingRelease).field_0x28 = 0;
  *(undefined4 *)&(this->PendingRelease).field_0x2c = 0x80;
  *(undefined4 *)&(this->PendingRelease).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PendingRelease).field_0x34 = 0;
  pTVar2 = CVarVTUploadUseLegacyPath.Ref;
  bVar3 = IsInParallelGameThread();
  if (!bVar3) {
    bVar3 = IsInGameThread();
    if (!bVar3) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007945>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6c9,"GetShadowIndex() == 0");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FVirtualTextureUploadCache *)(*pcVar1)();
        return pFVar4;
      }
    }
  }
  if (pTVar2->ShadowedValue[0] != 0) {
    this->UploadType = StagingTexture;
    return this;
  }
  if ((GRHIGlobals.SupportsDirectGPUMemoryLock != false) &&
     (GRHIGlobals.SupportsUpdateFromBufferTexture != false)) {
    this->UploadType = PersistentBuffer;
    return this;
  }
  this->UploadType = StagingCopy;
  return this;
}

// ~FVirtualTextureUploadCache @ 1489ba150

void __thiscall
FVirtualTextureUploadCache::~FVirtualTextureUploadCache(FVirtualTextureUploadCache *this)

{
  FScriptContainerElement *pFVar1;
  
  TSparseArray<FVirtualTextureUploadCache::FTileEntry,FDefaultSparseArrayAllocator>::
  ~TSparseArray<FVirtualTextureUploadCache::FTileEntry,FDefaultSparseArrayAllocator>
            (&this->PendingRelease);
  TSparseArray<FVirtualTextureUploadCache::FTileEntry,FDefaultSparseArrayAllocator>::
  ~TSparseArray<FVirtualTextureUploadCache::FTileEntry,FDefaultSparseArrayAllocator>
            (&this->PendingUpload);
  DestructItems<FVTUploadTileAllocator::FSharedFormatBuffers,int>
            ((FSharedFormatBuffers *)(this->TileAllocator).FormatBuffers.AllocatorInstance.Data,
             (this->TileAllocator).FormatBuffers.ArrayNum);
  pFVar1 = (this->TileAllocator).FormatBuffers.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TileAllocator).FormatDescs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FVirtualTextureUploadCache::FPoolEntry,int>
            ((FPoolEntry *)(this->Pools).AllocatorInstance.Data,(this->Pools).ArrayNum);
  pFVar1 = (this->Pools).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FRenderResource::~FRenderResource((FRenderResource *)&this->_padding_);
  return;
}

// operator() @ 1489bf0b0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`FVirtualTextureUploadCache::FinalizeWithLegacyCopyTexture'::__l4::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  longlong lVar1;
  byte bVar2;
  int iVar3;
  FRDGResource *this_00;
  FRHIResource *pFVar4;
  FRHIResource *pFVar5;
  ulonglong uVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  IRHICommandContext *pIVar10;
  undefined8 *puVar11;
  uint uVar12;
  FMemScope FVar13;
  ulonglong uVar14;
  FRHITransitionInfo *pFVar15;
  uint uVar16;
  uint uVar17;
  FLLMScope local_res18 [2];
  int local_res20 [2];
  TArrayView<FRHITransitionInfo_const_,int> local_158;
  FMemScope local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  int local_138;
  int iStack_134;
  undefined4 uStack_130;
  int iStack_12c;
  int local_128;
  undefined4 uStack_124;
  int iStack_120;
  int iStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined4 local_e0;
  undefined2 local_dc;
  FMemScope local_d8;
  FRHITransitionInfo local_d0;
  undefined4 local_a0;
  undefined2 local_9c;
  undefined8 local_98;
  undefined1 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined1 local_84;
  undefined1 local_78;
  FRHITransitionInfo *local_70 [2];
  int local_60;
  TArrayView<FRHITransitionInfo_const_,int> local_58;
  
  bVar2 = *(byte *)((longlong)this + 0x38);
  local_e0 = 1;
  uVar14 = 0;
  FVar13 = (FMemScope)((longlong)this + 0x20);
  local_f0 = 0;
  local_e8 = 0;
  local_res20[0] = GPixelFormats[bVar2].BlockBytes;
  uVar16 = (uint)(*(int *)((longlong)this + 8) + -1 + GPixelFormats[bVar2].BlockSizeX) /
           (uint)GPixelFormats[bVar2].BlockSizeX;
  local_dc = 0;
  uVar17 = (uint)(*(int *)((longlong)this + 8) + -1 + GPixelFormats[bVar2].BlockSizeY) /
           (uint)GPixelFormats[bVar2].BlockSizeY;
  local_f8 = *(undefined8 *)FVar13;
  local_148 = FVar13;
  FLLMScope::FLLMScope(local_res18,Textures,false,None,Default,true);
  FMemScope::FMemScope(&local_d8,Textures,true);
  (**(code **)(GDynamicRHI->_padding_ + 0x1e0))(GDynamicRHI,local_70,param_1,&local_f8);
  FMemScope::~FMemScope(&local_d8);
  FLLMScope::~FLLMScope(local_res18);
  iVar3 = local_res20[0];
  local_158.DataPtr = local_70[0];
  if (*(int *)((longlong)this + 0xc) != 0) {
    do {
      uVar12 = 0;
      lVar1 = *(longlong *)((longlong)this + 0x18) + uVar14 * 0x18;
      uVar6 = (ulonglong)*(uint *)((longlong)this + 0x28);
      iVar9 = (int)(uVar14 / uVar6) * local_60;
      pFVar15 = local_70[0];
      if (uVar17 != 0) {
        do {
          memcpy((void *)((longlong)&local_70[0]->_padding_ +
                         (ulonglong)(uVar12 * local_60) +
                         (ulonglong)((int)(uVar14 % uVar6) * uVar16 * iVar3) +
                         (ulonglong)(iVar9 * uVar17)),
                 (void *)((ulonglong)(uVar12 * *(int *)(lVar1 + 0x14)) +
                          (ulonglong)*(uint *)(lVar1 + 0x10) + *(longlong *)(lVar1 + 8)),
                 (ulonglong)(uVar16 * iVar3));
          uVar12 = uVar12 + 1;
          pFVar15 = local_158.DataPtr;
        } while (uVar12 < uVar17);
      }
      uVar12 = (int)uVar14 + 1;
      uVar14 = (ulonglong)uVar12;
      FVar13 = local_148;
      local_70[0] = pFVar15;
    } while (uVar12 < *(uint *)((longlong)this + 0xc));
  }
  uVar14 = 0;
  FLLMScope::FLLMScope((FLLMScope *)local_res20,Textures,false,None,Default,true);
  FMemScope::FMemScope(&local_148,Textures,true);
  (**(code **)(GDynamicRHI->_padding_ + 0x1e8))(GDynamicRHI,param_1,&local_f8);
  FMemScope::~FMemScope(&local_148);
  FLLMScope::~FLLMScope((FLLMScope *)local_res20);
  local_158.ArrayNum = 1;
  local_d0._padding_._0_4_ = 0xffffffff;
  local_d0._padding_._4_2_ = 0xffff;
  local_d0.field1_0x8 = *(FRHITransitionInfo_u_8 *)FVar13;
  local_158.DataPtr = &local_d0;
  local_d0.Type = Texture;
  local_d0.AccessBefore = SRVMask;
  local_d0.AccessAfter = CopySrc;
  local_d0.Flags = None;
  local_d0.CommitInfo.bIsSet = false;
  FRHIComputeCommandList::Transition
            ((FRHIComputeCommandList *)param_1,&local_158,AllowDecayPipelines);
  if (*(int *)((longlong)this + 0xc) != 0) {
    do {
      iVar3 = *(int *)((longlong)this + 8);
      iStack_12c = *(int *)(*(longlong *)((longlong)this + 0x10) + 0x20 + uVar14 * 0x28);
      lVar1 = *(longlong *)((longlong)this + 0x10) + uVar14 * 0x28;
      local_138 = iVar3 + iStack_12c * -2;
      uVar6 = (ulonglong)*(uint *)((longlong)this + 0x28);
      iStack_120 = local_138 * *(int *)(lVar1 + 0x18);
      iStack_11c = local_138 * *(int *)(lVar1 + 0x1c);
      uStack_114 = 0;
      uStack_110 = 0;
      local_128 = iVar3 * (int)(uVar14 / uVar6) + iStack_12c;
      uStack_10c = 1;
      uStack_108 = 0;
      uStack_104 = 0;
      local_100 = 1;
      iStack_12c = iVar3 * (int)(uVar14 % uVar6) + iStack_12c;
      uStack_130 = 1;
      uStack_124 = 0;
      local_118 = 0;
      this_00 = *(FRDGResource **)(lVar1 + 0x10);
      iStack_134 = local_138;
      FRDGResource::ValidateRHIAccess(this_00);
      pFVar4 = *(FRHIResource **)((longlong)this + 0x20);
      pFVar5 = this_00->ResourceRHI;
      if (((pFVar4 == (FRHIResource *)0x0) || (pFVar5 == (FRHIResource *)0x0)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("SourceTextureRHI && DestTextureRHI",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                             ,0x1077,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if ((pFVar4 == pFVar5) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("SourceTextureRHI != DestTextureRHI",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                             ,0x1078,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if (((param_1->field_0x29b & 2) != 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsOutsideRenderPass()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                             ,0x1079,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if ((GRHICommandList.bLatchedBypass == false) || ((param_1->field_0x29b & 0x20) == 0)) {
        puVar11 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x60,8);
        *(int *)&param_1->field_0x60 = *(int *)&param_1->field_0x60 + 1;
        **(undefined8 **)&param_1->field_0x30 = puVar11;
        *(undefined8 **)&param_1->field_0x30 = puVar11 + 1;
        puVar11[1] = 0;
        *puVar11 = &___7FRHICommandCopyTexture__6B_;
        puVar11[2] = CONCAT44(iStack_134,local_138);
        puVar11[3] = CONCAT44(iStack_12c,uStack_130);
        puVar11[4] = CONCAT44(uStack_124,local_128);
        puVar11[5] = CONCAT44(iStack_11c,iStack_120);
        puVar11[6] = CONCAT44(uStack_114,local_118);
        puVar11[7] = CONCAT44(uStack_10c,uStack_110);
        puVar11[8] = CONCAT44(uStack_104,uStack_108);
        *(undefined4 *)(puVar11 + 9) = local_100;
        puVar11[10] = pFVar4;
        puVar11[0xb] = pFVar5;
        if ((pFVar4 == (FRHIResource *)0x0) &&
           (bVar8 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<6604847226579585294>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                               ,0x90e,"SourceTexture"), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if ((puVar11[0xb] == 0) &&
           (bVar8 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<6604847226579585295>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                               ,0x90f,"DestTexture"), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      else {
        pIVar10 = FRHICommandListBase::GetContext((FRHICommandListBase *)param_1);
        (**(code **)(pIVar10->_padding_ + 0x260))(pIVar10,pFVar4,pFVar5,&local_138);
      }
      uVar16 = (int)uVar14 + 1;
      uVar14 = (ulonglong)uVar16;
    } while (uVar16 < *(uint *)((longlong)this + 0xc));
  }
  uStack_140 = 1;
  local_9c = 0xffff;
  local_98 = *(undefined8 *)((longlong)this + 0x20);
  local_148 = (FMemScope)&local_a0;
  local_a0 = 0xffffffff;
  local_58._12_4_ = uStack_13c;
  local_58.ArrayNum = 1;
  local_90 = 1;
  local_8c = 0x80;
  local_88 = 0x70;
  local_84 = 0;
  local_78 = 0;
  local_58.DataPtr = (FRHITransitionInfo *)local_148;
  FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_58,None);
  return;
}

// operator() @ 1489bfc40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`FVirtualTextureUploadCache::FinalizeWithUpdateTexture'::__l11::<lambda_1>::operator()
          (void *this,FRDGAsyncTask param_1,FRHICommandList *param_2)

{
  longlong lVar1;
  longlong lVar2;
  FRHIGPUMask FVar3;
  uint uVar4;
  FRDGResource *pFVar5;
  longlong lVar6;
  bool bVar7;
  atomic<unsigned_int> aVar8;
  FRHIBreadcrumbAllocator *pFVar9;
  FRHIBreadcrumbNode *pFVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<FStat_STAT_VTP_FlushUpload> FVar12;
  FColor_u_0 FVar13;
  FName FVar14;
  undefined1 uVar15;
  ulonglong uVar16;
  uint uVar17;
  FColor_u_0 local_res18;
  uint uStackX_1c;
  FName local_res20;
  FUpdateTextureRegion2D local_80;
  FRHIBreadcrumbScope local_68;
  undefined8 local_58;
  wchar_t *pwStack_50;
  FRHIBuffer *local_48;
  
  FVar3.GPUMask = *(uint *)&param_2->field_0x29c;
  FRHIComputeCommandList::SetGPUMask
            ((FRHIComputeCommandList *)param_2,
             (FRHIGPUMask)((1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1));
  uVar16 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    local_68.RHICmdList = (FRHIComputeCommandList *)0x151c032b0;
    pwStack_50 = L"FVirtualTextureUploadCache_Finalize";
    local_68.Node._0_4_ = 499;
    local_58 = 0;
    ::Desc._padding_._0_4_ = 0x51c032b0;
    ::Desc._padding_._4_4_ = 1;
    ::Desc._padding_._0_4_ = 499;
    ::Desc._padding_._4_4_ = local_68.Node._4_4_;
    ::Desc._padding_._0_4_ = 0;
    ::Desc._padding_._4_4_ = 0;
    ::Desc._padding_._0_4_ = 0x51c03540;
    ::Desc._padding_._4_4_ = 1;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
    ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
    ::Desc.TraceGpuSpecId = 0;
    ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
    atexit(```FVirtualTextureUploadCache::FinalizeWithUpdateTexture'::__l11::Desc::operator()'::__l7
           ::<lambda_1>::operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__);
    _Init_thread_footer(&::_TSS0);
  }
  pFVar9 = FRHIComputeCommandList::GetBreadcrumbAllocator((FRHIComputeCommandList *)param_2);
  pFVar10 = FMemStackBase::Alloc(&pFVar9->Inner,0x50,8);
  pFVar10->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
  pFVar10->Parent = FRHIBreadcrumbNode::Sentinel;
  pFVar10->ListLink = (FRHIBreadcrumbNode *)0x0;
  (pFVar10->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
  (pFVar10->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
  pFVar10->Data = (FRHIBreadcrumbData *)&::Desc;
  pFVar10->Allocator = pFVar9;
  pFVar10->TraceCpuSpecId = 0;
  pFVar10->TraceCpuMetadataId = 0;
  LOCK();
  UNLOCK();
  uVar17 = (uint)FRHIBreadcrumbNode::NextID | 0x80000000;
  FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
  pFVar10->BeginPipes = (atomic<unsigned_char>)0x0;
  pFVar10->EndPipes = (atomic<unsigned_char>)0x0;
  pFVar10->ID = uVar17;
  pFVar10->_padding_ =
       (longlong)
       &
       ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0A___V_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
  ;
  pFVar10[1]._padding_ = (longlong)&::Desc;
  if ((::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) &&
     (bVar7 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable(), bVar7)) {
    EnterCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
    if (::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
      aVar8 = (atomic<unsigned_int>)
              FCpuProfilerTrace::OutputEventType
                        ((wchar_t *)CONCAT44(::Desc._padding_._4_4_,(undefined4)::Desc._padding_),
                         (char *)CONCAT44(::Desc._padding_._4_4_,(undefined4)::Desc._padding_),
                         (uint)::Desc._padding_);
      LOCK();
      ::Desc.TraceCpuSpecId = aVar8;
      UNLOCK();
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
  }
  pFVar10->TraceCpuSpecId = (uint)::Desc.TraceCpuSpecId;
  FRHIBreadcrumbScope::FRHIBreadcrumbScope(&local_68,(FRHIComputeCommandList *)param_2,pFVar10);
  local_58 = CONCAT71(local_58._1_7_,1);
  FVar12 = StatPtr_STAT_VTP_FlushUpload;
  if (StatPtr_STAT_VTP_FlushUpload == (FThreadSafeStaticStat<FStat_STAT_VTP_FlushUpload>)0x0) {
    pFVar11 = ::FName::FName(&local_res20,"STAT_VTP_FlushUpload");
    FVar12 = (FThreadSafeStaticStat<FStat_STAT_VTP_FlushUpload>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VTP_FlushUpload,*pFVar11,
                        L"flush upload","STATGROUP_VTP","STATCAT_Advanced",
                        L"Virtual Texturing Paging",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar14 = *(FName *)FVar12;
  uVar15 = 0;
  local_res18.Bits = local_res18.Bits & 0xffffff00;
  FVar13.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar17 = FVar14.Number;
  if ((FVar13.Bits != 0) || (uVar17 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      uVar15 = 1;
      local_res18._s_0.B = 1;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar13.Bits;
        uStackX_1c = uVar17;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\VT\\VirtualTextureUploadCache.cpp"
                   ,500);
        uVar15 = 3;
        local_res18._s_0.B = 3;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res18.Bits = FVar13.Bits;
      uStackX_1c = uVar17;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      local_res18.Bits = CONCAT31(local_res18.Bits._1_3_,uVar15) | 4;
      goto LAB_1489bfed6;
    }
  }
  FVar14.ComparisonIndex.Value = 0;
  FVar14.Number = 0;
LAB_1489bfed6:
  local_res20.ComparisonIndex.Value._0_1_ = param_2->field_0x69;
  param_2->field_0x69 = 0;
  if (*(int *)((longlong)this + 4) != 0) {
    do {
      local_80.SrcX = *(int *)(*(longlong *)((longlong)this + 8) + 0x20 + uVar16 * 0x28);
      lVar1 = *(longlong *)((longlong)this + 8) + uVar16 * 0x28;
      local_80.Width = *(int *)this + local_80.SrcX * -2;
      local_80.DestX = local_80.Width * *(int *)(lVar1 + 0x18);
      local_80.DestY = local_80.Width * *(int *)(lVar1 + 0x1c);
      lVar2 = *(longlong *)((longlong)this + 0x10) + uVar16 * 0x18;
      local_48 = *(FRHIBuffer **)(*(longlong *)((longlong)this + 0x10) + uVar16 * 0x18);
      uVar17 = *(uint *)(lVar2 + 0x10);
      local_80.SrcY = local_80.SrcX;
      local_80.Height = local_80.Width;
      if (local_48 == (FRHIBuffer *)0x0) {
        lVar6 = *(longlong *)(lVar2 + 8);
        pFVar5 = *(FRDGResource **)(lVar1 + 0x10);
        uVar4 = *(uint *)(lVar2 + 0x14);
        FRDGResource::ValidateRHIAccess(pFVar5);
        FRHICommandListBase::UpdateTexture2D
                  ((FRHICommandListBase *)param_2,(FRHITexture *)pFVar5->ResourceRHI,0,&local_80,
                   uVar4,(uchar *)(lVar6 + (ulonglong)uVar17));
      }
      else {
        uVar4 = *(uint *)(lVar2 + 0x14);
        pFVar5 = *(FRDGResource **)(lVar1 + 0x10);
        FRDGResource::ValidateRHIAccess(pFVar5);
        FRHICommandListBase::UpdateFromBufferTexture2D
                  ((FRHICommandListBase *)param_2,(FRHITexture *)pFVar5->ResourceRHI,0,&local_80,
                   uVar4,local_48,uVar17);
      }
      uVar17 = (int)uVar16 + 1;
      uVar16 = (ulonglong)uVar17;
    } while (uVar17 < *(uint *)((longlong)this + 4));
  }
  FVar13 = local_res18;
  param_2->field_0x69 = (undefined1)local_res20.ComparisonIndex.Value;
  if ((local_res18.Bits & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((FVar13.Bits & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((FVar13.Bits & 4) != 0) {
    FThreadStats::AddMessage(FVar14,CycleScopeEnd);
  }
  FRHIBreadcrumbScope::~FRHIBreadcrumbScope(&local_68);
  FRHIComputeCommandList::SetGPUMask((FRHIComputeCommandList *)param_2,FVar3);
  return;
}

// CancelTile @ 1489ced00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FVirtualTextureUploadCache::CancelTile
          (FVirtualTextureUploadCache *this,FRHICommandListBase *param_1,
          FVTUploadTileHandle *param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 *puVar4;
  
  uVar1 = param_2->Index;
  if ((-1 < (int)uVar1) && ((int)uVar1 < *(int *)&(this->PendingUpload).field_0x28)) {
    if (*(int *)&(this->PendingUpload).field_0x28 <= (int)uVar1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5c6,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    puVar4 = *(undefined1 **)&(this->PendingUpload).field_0x20;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->PendingUpload).field_0x10;
    }
    if ((*(uint *)(puVar4 + (longlong)((int)(uVar1 + ((int)uVar1 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar1 & 0x1f) & 1) != 0) goto LAB_1489cedb3;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("PendingUpload.IsValidIndex(InHandle.Index)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\VT\\VirtualTextureUploadCache.cpp"
                     ,0x24a,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_1489cedb3:
  FVTUploadTileAllocator::Free
            (&this->TileAllocator,param_1,
             *(uint *)(*(longlong *)&this->PendingUpload + 4 + (longlong)(int)param_2->Index * 0x28)
            );
  TSparseArray<FVirtualTextureUploadCache::FTileEntry,FDefaultSparseArrayAllocator>::RemoveAt
            (&this->PendingUpload,param_2->Index,1);
  return;
}

// Finalize @ 1489e0560

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FVirtualTextureUploadCache::Finalize(FVirtualTextureUploadCache *this,FRDGBuilder *param_1)

{
  EVTUploadType EVar1;
  
  EVar1 = this->UploadType;
  if (EVar1 == StagingTexture) {
    FinalizeWithLegacyCopyTexture(this,param_1);
    return;
  }
  if ((EVar1 != StagingCopy) && (EVar1 != PersistentBuffer)) {
    return;
  }
  FinalizeWithUpdateTexture(this,param_1);
  return;
}

// FinalizeWithLegacyCopyTexture @ 1489e0590

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FVirtualTextureUploadCache::FinalizeWithLegacyCopyTexture
          (FVirtualTextureUploadCache *this,FRDGBuilder *param_1)

{
  FScriptContainerElement *pFVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  EPixelFormat EVar4;
  EPixelFormat EVar5;
  FName FVar6;
  FRHIResource *this_00;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  code *pcVar10;
  IPooledRenderTarget *pIVar11;
  void *pvVar12;
  TArray<FRDGTextureAccess,TRDGArrayAllocator<0>_> *pTVar13;
  FVirtualTextureUploadCache *pFVar14;
  bool bVar15;
  bool bVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  longlong lVar20;
  uchar auVar21 [8];
  FName *pFVar22;
  FThreadSafeStaticStat<FStat_STAT_TotalGPUUploadSize> FVar23;
  FThreadStats *pFVar24;
  FThreadStatsPool *pFVar25;
  FTileEntry *pFVar26;
  FVTUploadTileBufferExt *pFVar27;
  longlong lVar28;
  FRDGTexture *pFVar29;
  FRDGTextureAccess *pFVar30;
  FVTUploadTileBufferExt *pFVar31;
  FRDGEventName *pFVar32;
  longlong *plVar33;
  ELLMTag EVar34;
  FNameEntryId FVar35;
  uint uVar36;
  uint uVar37;
  TArray<FRDGTextureAccess,TRDGArrayAllocator<0>_> *pTVar38;
  FTileEntry *pFVar39;
  FRDGBuilder *this_01;
  uint uVar40;
  FScriptContainerElement FVar41;
  undefined1 auStackY_408 [32];
  uint local_3a4;
  FLLMScope local_39c;
  uint local_398;
  TArray<FRDGTextureAccess,TRDGArrayAllocator<0>_> *local_390;
  uint local_388;
  FRHIResource *local_380;
  FRDGBuilder *local_378;
  FVirtualTextureUploadCache *local_370;
  uint local_368;
  uint uStack_364;
  uint local_360;
  uint uStack_35c;
  FMemScope local_358;
  uint local_350;
  uint uStack_34c;
  TRefCountPtr<IPooledRenderTarget> local_348;
  FScriptContainerElement *local_340;
  longlong local_338;
  FName local_330;
  FName local_328;
  FVTUploadTileBufferExt *local_320;
  FName local_318;
  FStatMessage local_310;
  FStatMessage local_300;
  <lambda_1> local_2f0;
  FName local_2b0;
  FRDGEventName local_2a8;
  FRDGTextureAccess local_290;
  FVTUploadTileBufferExt local_278;
  FRHITextureDesc local_258;
  wchar_t *local_208;
  undefined8 local_200;
  longlong local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  FRHITextureDesc local_1d8;
  wchar_t *local_188;
  int local_180;
  undefined4 local_17c;
  longlong local_178;
  undefined8 local_170;
  undefined8 local_168;
  ETextureCreateFlags local_158;
  undefined1 local_150 [20];
  uint local_13c;
  uint local_138;
  TIntPoint<int>_u_0 local_134;
  ushort local_12c;
  ushort local_12a;
  uchar local_128;
  uchar local_127;
  ETextureDimension local_126;
  EPixelFormat local_125;
  EPixelFormat local_124;
  uchar local_123;
  undefined1 local_120 [8];
  void *local_118;
  undefined4 local_110;
  undefined4 local_10c;
  wchar_t *local_108;
  ERHIAccess local_100;
  undefined4 local_fc;
  longlong local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined1 local_d8 [48];
  longlong local_a8;
  longlong local_98 [3];
  longlong *local_80;
  FRHICommandListBase *local_78;
  FRHITexture *local_70;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_408;
  local_398 = 0;
  local_3a4 = 0;
  if (0 < (this->Pools).ArrayNum) {
    local_338 = 0;
    local_378 = param_1;
    local_370 = this;
    do {
      lVar20 = local_338;
      pFVar14 = local_370;
      uVar17 = 0;
      if ((int)local_3a4 < (local_370->Pools).ArrayNum) {
        uVar17 = ~local_3a4 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pTVar38 = (TArray<FRDGTextureAccess,TRDGArrayAllocator<0>_> *)
                ((pFVar14->Pools).AllocatorInstance.Data + lVar20);
      uVar17 = *(uint *)&pTVar38[6].AllocatorInstance.Data;
      local_390 = pTVar38;
      if (uVar17 != 0) {
        uVar40 = *(uint *)&pTVar38[5].AllocatorInstance.Data;
        EVar4 = *(EPixelFormat *)&(pTVar38->AllocatorInstance).Data;
        local_388 = *(uint *)((longlong)&(pTVar38->AllocatorInstance).Data + 4);
        pFVar1 = (FScriptContainerElement *)((longlong)pTVar38 + (ulonglong)uVar40 * 0x18 + 8);
        *(uint *)&pTVar38[5].AllocatorInstance.Data = (uVar40 + 1) % 3;
        bVar15 = GIsRunningRHIInSeparateThread_InternalUseOnly;
        FVar41 = (FScriptContainerElement)(GIsRunningRHIInSeparateThread_InternalUseOnly == false);
        local_340 = pFVar1;
        if (((*(uint *)(pFVar1 + 0xc) < uVar17) || (uVar17 * 2 <= *(uint *)(pFVar1 + 0xc))) ||
           (FVar41 != pFVar1[0x10])) {
          uVar8 = (ulonglong)local_388;
          uVar9 = (ulonglong)(uint)GRHIGlobals.MaxTextureDimensions.Value;
          iVar18 = (int)(uVar9 / uVar8);
          if (((uint)(iVar18 * iVar18) < uVar17) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("BatchCount <= MaxCapacity",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\VT\\VirtualTextureUploadCache.cpp"
                                  ,0x14a,L""), bVar16)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          uVar40 = (int)((ulonglong)((uVar17 - 1) + iVar18) / (uVar9 / uVar8)) + 3U & 0xfffffffc;
          if ((uVar40 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("WidthInTiles > 0u",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\VT\\VirtualTextureUploadCache.cpp"
                                  ,0x14c,L""), bVar16)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          uVar19 = ((uVar40 - 1) + uVar17) / uVar40;
          if ((uVar19 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("HeightInTiles > 0u",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\VT\\VirtualTextureUploadCache.cpp"
                                  ,0x14e,L""), bVar16)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          if (*(longlong **)pFVar1 != (longlong *)0x0) {
            EVar5 = *(EPixelFormat *)&(pTVar38->AllocatorInstance).Data;
            lVar20 = (**(code **)(**(longlong **)pFVar1 + 0x20))();
            uVar36 = *(uint *)(lVar20 + 0x28);
            lVar20 = (**(code **)(**(longlong **)pFVar1 + 0x20))();
            auVar21 = (uchar  [8])CalcTextureSize(*(uint *)(lVar20 + 0x24),uVar36,EVar5,1);
            if (auVar21 != (uchar  [8])0x0) {
              FVar23 = StatPtr_STAT_TotalGPUUploadSize;
              if (StatPtr_STAT_TotalGPUUploadSize ==
                  (FThreadSafeStaticStat<FStat_STAT_TotalGPUUploadSize>)0x0) {
                pFVar22 = ::FName::FName(&local_2b0,"STAT_TotalGPUUploadSize");
                FVar23 = (FThreadSafeStaticStat<FStat_STAT_TotalGPUUploadSize>)
                         FThreadSafeStaticStatBase::DoSetup
                                   ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TotalGPUUploadSize,
                                    *pFVar22,L"Total GPU Upload Memory",
                                    "STATGROUP_VirtualTextureMemory","STATCAT_Advanced",
                                    L"Virtual Texture Memory",true,false,ST_int64,false,false,
                                    MCR_GPU);
              }
              FVar6 = *(FName *)FVar23;
              FVar35 = FVar6.ComparisonIndex.Value;
              uVar36 = FVar6.Number;
              local_368 = FVar35.Value;
              uStack_364 = uVar36;
              if (((FVar6 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
                 (FThreadStats::TlsSlot != 0xffffffff)) {
                pFVar24 = TlsGetValue(FThreadStats::TlsSlot);
                if (pFVar24 == (FThreadStats *)0x0) {
                  pFVar25 = FThreadStatsPool::Get();
                  pFVar24 = FThreadStatsPool::GetFromPool(pFVar25);
                }
                local_310.NameAndInfo.Number = uVar36 & 0xffffbfff | 0xb000;
                local_330 = FVar6;
                local_310.StatData.Pad = auVar21;
                local_310.NameAndInfo.Index.Value = FVar35.Value;
                FThreadStats::AddStatMessage(pFVar24,&local_310);
                FStatsTrace::Add(&local_330,-(longlong)auVar21);
                if (pFVar24->ScopeCount == 0) {
                  FThreadStats::Flush(pFVar24,false,false);
                }
                else if (FThreadStats::bIsRawStatsActive != false) {
                  FThreadStats::FlushRawStats(pFVar24,false,false);
                }
              }
            }
          }
          local_258.Flags = None;
          local_258.ClearValue.Value._4_8_ = 0;
          uVar37 = uVar40 * local_388;
          local_258.GPUMask.GPUMask = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1;
          local_258.ClearValue.Value.Color[3] = 0.0;
          uVar36 = uVar19 * local_388;
          local_208 = L"VirtualTexture_UploadCacheStagingTexture";
          local_258.ExtData = 0;
          local_258.Dimension = Texture2D;
          local_258.AliasableFormats.AllocatorInstance.SecondaryData =
               (ForElementType<EPixelFormat>)0x0;
          local_258.AliasableFormats.ArrayNum = 0;
          local_200 = 0;
          local_1f8 = 0;
          local_1f0 = 0;
          local_1e8 = 0;
          local_258.Extent.field0_0x0._s_0.Y = uVar36;
          local_258.Extent.field0_0x0._s_0.X = uVar37;
          local_258.ClearValue._0_8_ = 1;
          local_258.Depth = 1;
          local_258.ArraySize = 1;
          local_258.NumMips = '\x01';
          local_258.NumSamples = '\x01';
          local_258.Format = *(EPixelFormat *)&(local_390->AllocatorInstance).Data;
          local_258.UAVFormat = PF_Unknown;
          local_258.FastVRAMPercentage = 0xff;
          local_258.AliasableFormats.ArrayMax = 1;
          local_360 = uVar37;
          uStack_35c = uVar36;
          FRHITextureDesc::FRHITextureDesc(&local_1d8,&local_258);
          local_188 = local_208;
          local_180 = (int)local_200;
          local_17c = local_200._4_4_;
          local_178 = local_1f8;
          local_170 = local_1f0;
          local_168 = local_1e8;
          if (local_258.AliasableFormats.AllocatorInstance.SecondaryData !=
              (ForElementType<EPixelFormat>)0x0) {
            FMemory::Free((void *)local_258.AliasableFormats.AllocatorInstance.SecondaryData);
          }
          if (bVar15 == false) {
            local_1d8.Flags = local_1d8.Flags | CPUWritable;
          }
          EVar34 = Textures;
          if ((local_1d8.Flags & (DepthStencilTargetable|RenderTargetable)) != None) {
            EVar34 = RenderTargets;
          }
          lVar20 = local_378->_padding_;
          FLLMScope::FLLMScope(&local_39c,EVar34,false,None,Default,true);
          EVar34 = Textures;
          if ((local_1d8.Flags & (DepthStencilTargetable|RenderTargetable)) != None) {
            EVar34 = RenderTargets;
          }
          FMemScope::FMemScope(&local_358,EVar34,true);
          if (local_180 == 0) {
            local_126 = local_1d8.Dimension;
            local_158 = local_1d8.Flags;
            local_125 = local_1d8.Format;
            local_124 = local_1d8.UAVFormat;
            local_134 = local_1d8.Extent.field0_0x0;
            local_12c = local_1d8.Depth;
            local_12a = local_1d8.ArraySize;
            local_128 = local_1d8.NumMips;
            local_127 = local_1d8.NumSamples;
            local_150._16_4_ = local_1d8.ClearValue.Value.Color[3];
            local_138 = local_1d8.ExtData;
            local_123 = local_1d8.FastVRAMPercentage;
            local_13c = local_1d8.GPUMask.GPUMask;
            local_118 = (void *)0x0;
            local_110 = 0;
            local_10c = 1;
            local_150._0_8_ = local_1d8.ClearValue._0_8_;
            local_150._8_8_ = local_1d8.ClearValue.Value._4_8_;
            TArray<enum_EPixelFormat,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::
            operator=(local_120,&local_1d8.AliasableFormats);
            local_108 = local_188;
            local_100 = local_180;
            local_fc = local_17c;
            local_f0 = local_170;
            local_f8 = local_178;
            local_e8 = local_168;
            local_100 = RHIGetDefaultResourceState(local_1d8.Flags,local_178 != 0);
            (**(code **)(GDynamicRHI->_padding_ + 0x198))(GDynamicRHI,local_d8,lVar20,&local_158);
            if (local_118 != (void *)0x0) {
              FMemory::Free(local_118);
            }
            FMemScope::~FMemScope(&local_358);
            FLLMScope::~FLLMScope(&local_39c);
          }
          else {
            (**(code **)(GDynamicRHI->_padding_ + 0x198))(GDynamicRHI,local_d8,lVar20,&local_1d8);
            FMemScope::~FMemScope(&local_358);
            FLLMScope::~FLLMScope(&local_39c);
          }
          FRHITextureInitializer::Finalize((FRHITextureInitializer *)local_d8);
          if ((local_78 != (FRHICommandListBase *)0x0) && (local_70 != (FRHITexture *)0x0)) {
            FRHITextureInitializer::RemovePendingTextureUpload((FRHITextureInitializer *)local_d8);
          }
          if (local_a8 != 0) {
            plVar33 = local_98;
            if (local_80 != (longlong *)0x0) {
              plVar33 = local_80;
            }
            (**(code **)(*plVar33 + 0x10))();
          }
          if (local_d8._0_8_ != 0) {
            plVar33 = (longlong *)(local_d8 + 0x10);
            if ((longlong *)local_d8._40_8_ != (longlong *)0x0) {
              plVar33 = (longlong *)local_d8._40_8_;
            }
            (**(code **)(*plVar33 + 0x10))();
          }
          pFVar1 = local_340;
          if (local_340 == (FScriptContainerElement *)&local_380) {
LAB_1489e0d25:
            if (local_380 != (FRHIResource *)0x0) {
              FRHIResource::Release(local_380);
            }
          }
          else {
            this_00 = *(FRHIResource **)local_340;
            *(FRHIResource **)local_340 = local_380;
            local_380 = (FRHIResource *)0x0;
            if (this_00 != (FRHIResource *)0x0) {
              FRHIResource::Release(this_00);
              goto LAB_1489e0d25;
            }
          }
          pTVar38 = local_390;
          *(uint *)(pFVar1 + 8) = uVar40;
          pFVar1[0x10] = FVar41;
          *(uint *)(pFVar1 + 0xc) = uVar19 * uVar40;
          auVar21 = (uchar  [8])
                    CalcTextureSize(uVar37,uVar36,
                                    *(EPixelFormat *)&(local_390->AllocatorInstance).Data,1);
          if (auVar21 != (uchar  [8])0x0) {
            FVar23 = StatPtr_STAT_TotalGPUUploadSize;
            if (StatPtr_STAT_TotalGPUUploadSize ==
                (FThreadSafeStaticStat<FStat_STAT_TotalGPUUploadSize>)0x0) {
              pFVar22 = ::FName::FName(&local_318,"STAT_TotalGPUUploadSize");
              FVar23 = (FThreadSafeStaticStat<FStat_STAT_TotalGPUUploadSize>)
                       FThreadSafeStaticStatBase::DoSetup
                                 ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TotalGPUUploadSize,
                                  *pFVar22,L"Total GPU Upload Memory",
                                  "STATGROUP_VirtualTextureMemory","STATCAT_Advanced",
                                  L"Virtual Texture Memory",true,false,ST_int64,false,false,MCR_GPU)
              ;
            }
            FVar6 = *(FName *)FVar23;
            FVar35 = FVar6.ComparisonIndex.Value;
            uVar40 = FVar6.Number;
            local_350 = FVar35.Value;
            uStack_34c = uVar40;
            if (((FVar6 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
               (FThreadStats::TlsSlot != 0xffffffff)) {
              pFVar24 = TlsGetValue(FThreadStats::TlsSlot);
              if (pFVar24 == (FThreadStats *)0x0) {
                pFVar25 = FThreadStatsPool::Get();
                pFVar24 = FThreadStatsPool::GetFromPool(pFVar25);
              }
              local_300.NameAndInfo.Number = uVar40 & 0xffffafff | 0xa000;
              local_328 = FVar6;
              local_300.StatData.Pad = auVar21;
              local_300.NameAndInfo.Index.Value = FVar35.Value;
              FThreadStats::AddStatMessage(pFVar24,&local_300);
              FStatsTrace::Add(&local_328,(long64)auVar21);
              if (pFVar24->ScopeCount == 0) {
                FThreadStats::Flush(pFVar24,false,false);
              }
              else if (FThreadStats::bIsRawStatsActive != false) {
                FThreadStats::FlushRawStats(pFVar24,false,false);
              }
            }
          }
          if (local_1d8.AliasableFormats.AllocatorInstance.SecondaryData !=
              (ForElementType<EPixelFormat>)0x0) {
            FMemory::Free((void *)local_1d8.AliasableFormats.AllocatorInstance.SecondaryData);
          }
        }
        this_01 = local_378;
        pFVar26 = FMemStackBase::Alloc
                            ((FMemStackBase *)&local_378->_padding_,(ulonglong)uVar17 * 0x28,8);
        pFVar27 = FMemStackBase::Alloc
                            ((FMemStackBase *)&this_01->_padding_,(ulonglong)uVar17 * 0x18,8);
        local_320 = pFVar27;
        local_390 = (TArray<FRDGTextureAccess,TRDGArrayAllocator<0>_> *)
                    FRDGBuilder::AllocParameters<FVirtualTextureUploadCacheParameters>(this_01);
        uVar40 = 0;
        pFVar31 = pFVar27;
        pFVar39 = pFVar26;
        if (uVar17 != 0) {
          do {
            uVar19 = 0;
            if ((int)uVar40 < *(int *)&pTVar38[6].AllocatorInstance.Data) {
              uVar19 = ~uVar40 >> 0x1f;
            }
            if ((uVar19 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            lVar7 = *(longlong *)&pTVar38[5].ArrayNum;
            lVar28 = (longlong)(int)uVar40;
            lVar20 = lVar7 + lVar28 * 0x28;
            if ((uVar40 < 2) ||
               (*(IPooledRenderTarget **)(lVar20 + 8) != pFVar26[uVar40 - 1].PooledRenderTarget)) {
              local_348.Reference = *(IPooledRenderTarget **)(lVar20 + 8);
              if (local_348.Reference != (IPooledRenderTarget *)0x0) {
                (**(code **)((local_348.Reference)->_padding_ + 0x30))();
              }
              pFVar29 = FRDGBuilder::RegisterExternalTexture(local_378,&local_348,None);
              *(FRDGTexture **)(lVar7 + 0x10 + lVar28 * 0x28) = pFVar29;
              if (local_348.Reference != (IPooledRenderTarget *)0x0) {
                (**(code **)((local_348.Reference)->_padding_ + 0x38))();
              }
              pFVar30 = FRDGTextureAccess::FRDGTextureAccess
                                  (&local_290,*(FRDGTexture **)(lVar7 + 0x10 + lVar28 * 0x28),
                                   CopyDest);
              TArray<FRDGTextureAccess,TRDGArrayAllocator<0>_>::AddUniqueImpl<FRDGTextureAccess>
                        (local_390,pFVar30);
            }
            else {
              *(FRDGTexture **)(lVar7 + 0x10 + lVar28 * 0x28) = pFVar26[uVar40 - 1].Texture;
            }
            puVar2 = (undefined8 *)(lVar7 + lVar28 * 0x28);
            uVar3 = *puVar2;
            pIVar11 = (IPooledRenderTarget *)puVar2[1];
            pFVar39->PoolIndex = (int)uVar3;
            pFVar39->TileHandle = (int)((ulonglong)uVar3 >> 0x20);
            pFVar39->PooledRenderTarget = pIVar11;
            puVar2 = (undefined8 *)(lVar7 + 0x10 + lVar28 * 0x28);
            uVar3 = puVar2[1];
            pFVar39->Texture = (FRDGTexture *)*puVar2;
            pFVar39->SubmitDestX = (int)uVar3;
            pFVar39->SubmitDestY = (int)((ulonglong)uVar3 >> 0x20);
            uVar3 = *(undefined8 *)(lVar7 + 0x20 + lVar28 * 0x28);
            pFVar39->SubmitSkipBorderSize = (int)uVar3;
            pFVar39->FrameSubmitted = (int)((ulonglong)uVar3 >> 0x20);
            pFVar31 = FVTUploadTileAllocator::GetBufferFromHandleExt
                                (&local_370->TileAllocator,&local_278,
                                 *(uint *)(lVar7 + 4 + lVar28 * 0x28));
            uVar40 = uVar40 + 1;
            pvVar12 = pFVar31->BufferMemory;
            uVar19 = pFVar31->BufferOffset;
            uVar36 = pFVar31->Stride;
            pFVar27->RHIBuffer = pFVar31->RHIBuffer;
            pFVar27->BufferMemory = pvVar12;
            pFVar27->BufferOffset = uVar19;
            pFVar27->Stride = uVar36;
            pFVar27 = pFVar27 + 1;
            pFVar31 = local_320;
            this_01 = local_378;
            pFVar39 = pFVar39 + 1;
          } while (uVar40 < uVar17);
        }
        pTVar13 = local_390;
        iVar18 = *(int *)((longlong)&pTVar38[6].AllocatorInstance.Data + 4);
        *(undefined4 *)&pTVar38[6].AllocatorInstance.Data = 0;
        if (iVar18 < 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x28,8,0,(ForAnyElementType *)&pTVar38[5].ArrayNum,0,
                     (int *)((longlong)&pTVar38[6].AllocatorInstance.Data + 4));
        }
        pFVar1 = local_340;
        local_2f0.__this = local_370;
        local_2f0.TileSize = local_388;
        local_2f0.StagingTexture.RHITexture.Reference = *(FRHITexture **)local_340;
        local_2f0.BatchCount = uVar17;
        local_2f0.TileEntries = pFVar26;
        local_2f0.UploadBuffers = pFVar31;
        if (local_2f0.StagingTexture.RHITexture.Reference != (FRHITexture *)0x0) {
          FRHIResource::AddRef((FRHIResource *)local_2f0.StagingTexture.RHITexture.Reference);
        }
        local_2f0.StagingTexture.WidthInTiles = *(uint *)(pFVar1 + 8);
        local_2f0.StagingTexture.BatchCapacity = *(uint *)(pFVar1 + 0xc);
        local_2f0.StagingTexture.bIsCPUWritable = *(bool *)(pFVar1 + 0x10);
        local_2f0.Format = EVar4;
        pFVar32 = FRDGEventName::FRDGEventName(&local_2a8,1,L"VirtualTextureUploadLegacy");
        FRDGBuilder::
        AddPass<FVirtualTextureUploadCacheParameters,_FVirtualTextureUploadCache::FinalizeWithLegacyCopyTexture_::__l4::<lambda_1>_>
                  (this_01,pFVar32,(FVirtualTextureUploadCacheParameters *)pTVar13,Copy,&local_2f0);
        uVar17 = local_398;
        local_398 = local_398 & 0xfffffffd;
        if (local_2a8.FormattedEventName.Data.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2a8.FormattedEventName.Data.AllocatorInstance.Data);
        }
        if (((uVar17 & 1) != 0) && (local_398 = uVar17 & 0xfffffffc, local_318 != (FName)0x0)) {
          FMemory::Free((void *)local_318);
        }
        if (local_2f0.StagingTexture.RHITexture.Reference != (FRHITexture *)0x0) {
          FRHIResource::Release((FRHIResource *)local_2f0.StagingTexture.RHITexture.Reference);
        }
      }
      local_3a4 = local_3a4 + 1;
      local_338 = local_338 + 0x68;
    } while ((int)local_3a4 < (local_370->Pools).ArrayNum);
  }
  return;
}

// FinalizeWithUpdateTexture @ 1489e11d0

/* WARNING: Removing unreachable block (ram,0x0001489e1662) */
/* WARNING: Removing unreachable block (ram,0x0001489e167b) */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FVirtualTextureUploadCache::FinalizeWithUpdateTexture
          (FVirtualTextureUploadCache *this,FRDGBuilder *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  void *pvVar7;
  FScriptContainerElement *pFVar8;
  longlong lVar9;
  bool bVar10;
  ERDGPassFlags EVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  TArray<FRDGTextureAccess,TRDGArrayAllocator<0>_> *this_00;
  FRDGTexture *pFVar15;
  FRDGTextureAccess *pFVar16;
  FVTUploadTileBufferExt *pFVar17;
  FRDGEventName *this_01;
  FShaderParametersMetadata *pFVar18;
  wchar_t *pwVar19;
  FRDGPass *this_02;
  FScriptContainerElement *pFVar20;
  uint uVar21;
  undefined8 *puVar22;
  uint local_res20;
  TRefCountPtr<IPooledRenderTarget> local_b8;
  FScriptContainerElement *local_b0;
  undefined8 *local_a8;
  longlong local_a0;
  FRDGParameterStruct local_98;
  FRDGEventName local_80;
  FRDGTextureAccess local_68;
  FVTUploadTileBufferExt local_50;
  
  if (((this->UploadType != StagingCopy) && (this->UploadType != PersistentBuffer)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("UploadType == EVTUploadType::StagingCopy || UploadType == EVTUploadType::PersistentBuffer"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\VT\\VirtualTextureUploadCache.cpp"
                          ,0x1c2,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  local_res20 = 0;
  if (0 < (this->Pools).ArrayNum) {
    local_a0 = 0;
    do {
      lVar9 = local_a0;
      uVar12 = 0;
      if ((int)local_res20 < (this->Pools).ArrayNum) {
        uVar12 = ~local_res20 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar5 = (this->Pools).AllocatorInstance.Data;
      uVar12 = *(uint *)(pFVar5 + lVar9 + 0x60);
      if (uVar12 != 0) {
        uVar4 = *(undefined4 *)(pFVar5 + lVar9 + 4);
        local_b0 = FMemStackBase::Alloc
                             ((FMemStackBase *)&param_1->_padding_,(ulonglong)uVar12 * 0x28,8);
        local_a8 = FMemStackBase::Alloc
                             ((FMemStackBase *)&param_1->_padding_,(ulonglong)uVar12 * 0x18,8);
        this_00 = (TArray<FRDGTextureAccess,TRDGArrayAllocator<0>_> *)
                  FRDGBuilder::AllocParameters<FVirtualTextureUploadCacheParameters>(param_1);
        pFVar8 = local_b0;
        uVar21 = 0;
        pFVar20 = local_b0;
        puVar22 = local_a8;
        if (uVar12 != 0) {
          do {
            uVar13 = 0;
            if ((int)uVar21 < *(int *)(pFVar5 + lVar9 + 0x60)) {
              uVar13 = ~uVar21 >> 0x1f;
            }
            if ((uVar13 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            puVar2 = (undefined8 *)
                     (*(longlong *)(pFVar5 + lVar9 + 0x58) + (longlong)(int)uVar21 * 0x28);
            if ((uVar21 < 2) ||
               (puVar2[1] != *(longlong *)(pFVar8 + ((ulonglong)(uVar21 - 1) * 5 + 1) * 8))) {
              local_b8.Reference = (IPooledRenderTarget *)puVar2[1];
              if (local_b8.Reference != (IPooledRenderTarget *)0x0) {
                (**(code **)((local_b8.Reference)->_padding_ + 0x30))();
              }
              pFVar15 = FRDGBuilder::RegisterExternalTexture(param_1,&local_b8,None);
              puVar2[2] = pFVar15;
              if (local_b8.Reference != (IPooledRenderTarget *)0x0) {
                (**(code **)((local_b8.Reference)->_padding_ + 0x38))();
              }
              pFVar16 = FRDGTextureAccess::FRDGTextureAccess
                                  (&local_68,(FRDGTexture *)puVar2[2],CopyDest);
              TArray<FRDGTextureAccess,TRDGArrayAllocator<0>_>::AddUniqueImpl<FRDGTextureAccess>
                        (this_00,pFVar16);
            }
            else {
              puVar2[2] = *(undefined8 *)(pFVar8 + ((ulonglong)(uVar21 - 1) * 5 + 2) * 8);
            }
            uVar3 = puVar2[1];
            *(undefined8 *)pFVar20 = *puVar2;
            *(undefined8 *)(pFVar20 + 8) = uVar3;
            uVar3 = puVar2[3];
            *(undefined8 *)(pFVar20 + 0x10) = puVar2[2];
            *(undefined8 *)(pFVar20 + 0x18) = uVar3;
            *(undefined8 *)(pFVar20 + 0x20) = puVar2[4];
            pFVar17 = FVTUploadTileAllocator::GetBufferFromHandleExt
                                (&this->TileAllocator,&local_50,*(uint *)((longlong)puVar2 + 4));
            uVar21 = uVar21 + 1;
            pvVar7 = pFVar17->BufferMemory;
            uVar3 = *(undefined8 *)&pFVar17->BufferOffset;
            *puVar22 = pFVar17->RHIBuffer;
            puVar22[1] = pvVar7;
            puVar22[2] = uVar3;
            pFVar20 = pFVar20 + 0x28;
            puVar22 = puVar22 + 3;
          } while (uVar21 < uVar12);
        }
        *(undefined4 *)(pFVar5 + lVar9 + 0x60) = 0;
        if (*(int *)(pFVar5 + lVar9 + 100) < 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x28,8,0,(ForAnyElementType *)(pFVar5 + lVar9 + 0x58),0,
                     (int *)(pFVar5 + lVar9 + 100));
        }
        this_01 = FRDGEventName::FRDGEventName(&local_80,1,L"VirtualTextureUpload");
        pFVar18 = FVirtualTextureUploadCacheParameters::FTypeInfo::GetStructMetadata();
        FRDGUserValidation::ValidateAddPass(&param_1->UserValidation,this_00,pFVar18,this_01,Copy);
        FRDGBuilder::FlushAccessModeQueue(param_1);
        pwVar19 = FRDGEventName::GetTCHAR(this_01);
        EVar11 = FRDGBuilder::OverridePassFlags(param_1,pwVar19,Copy);
        this_02 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x1a0,8);
        local_98.Contents = (uchar *)this_00;
        if (((pFVar18->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsLayoutInitialized()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                                ,0x17c,L""), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        local_98.Layout.Reference = (pFVar18->Layout).Reference;
        if (local_98.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
          FRHIResource::AddRef((FRHIResource *)local_98.Layout.Reference);
        }
        local_98.Metadata = pFVar18;
        FRDGPass::FRDGPass(this_02,this_01,&local_98,EVar11,Async);
        this_02->_padding_ =
             (longlong)
             &TRDGLambdaPass<FVirtualTextureUploadCacheParameters,`FVirtualTextureUploadCache::FinalizeWithUpdateTexture'::`11'::<lambda_1>_>
              ::_vftable_;
        *(undefined4 *)&this_02[1]._padding_ = uVar4;
        *(uint *)((longlong)&this_02[1]._padding_ + 4) = uVar12;
        this_02[1].FullPathIfDebug.Data.AllocatorInstance.Data = local_b0;
        *(undefined8 **)&this_02[1].FullPathIfDebug.Data.ArrayNum = local_a8;
        this_02[1].Name.EventFormat = (wchar_t *)this_00;
        FRDGBuilder::ClobberPassOutputs(param_1,this_02);
        iVar14 = (param_1->Passes).Array.ArrayNum;
        piVar1 = &(param_1->Passes).Array.ArrayMax;
        if (iVar14 == *piVar1) {
          iVar14 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                             (0x808,(ForElementType<FRDGPass_*> *)&param_1->Passes,piVar1);
        }
        (param_1->Passes).Array.ArrayNum = iVar14 + 1;
        (param_1->Passes).Array.AllocatorInstance.Data[iVar14] = this_02;
        (this_02->Handle).Index = (param_1->Passes).Array.ArrayNum - 1;
        FRDGBuilder::SetupParameterPass(param_1,this_02);
        if (local_80.FormattedEventName.Data.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_80.FormattedEventName.Data.AllocatorInstance.Data);
        }
      }
      local_res20 = local_res20 + 1;
      local_a0 = local_a0 + 0x68;
    } while ((int)local_res20 < (this->Pools).ArrayNum);
  }
  return;
}

// GetOrCreatePoolIndex @ 1489eae30

int __thiscall
FVirtualTextureUploadCache::GetOrCreatePoolIndex
          (FVirtualTextureUploadCache *this,EPixelFormat param_1,uint param_2)

{
  TArray<FVirtualTextureUploadCache::FPoolEntry,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  
  pTVar1 = &this->Pools;
  uVar8 = 0;
  if (0 < (this->Pools).ArrayNum) {
    lVar9 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar8 < (this->Pools).ArrayNum) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        iVar7 = (*pcVar4)();
        return iVar7;
      }
      pFVar3 = (pTVar1->AllocatorInstance).Data;
      if ((pFVar3[lVar9] == (FScriptContainerElement)param_1) &&
         (*(uint *)(pFVar3 + lVar9 + 4) == param_2)) {
        return uVar8;
      }
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 0x68;
    } while ((int)uVar8 < (this->Pools).ArrayNum);
  }
  uVar8 = (this->Pools).ArrayNum;
  piVar2 = &(this->Pools).ArrayMax;
  if (uVar8 == *piVar2) {
    uVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x868,&pTVar1->AllocatorInstance,piVar2);
    (this->Pools).ArrayNum = uVar8;
  }
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  lVar9 = (longlong)(int)uVar8 * 0x68;
  (this->Pools).ArrayNum = uVar8 + 1;
  DefaultConstructItems<FVirtualTextureUploadCache::FPoolEntry,int>(pFVar3 + lVar9,1);
  uVar6 = 0;
  if ((int)uVar8 < (this->Pools).ArrayNum) {
    uVar6 = ~uVar8 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    iVar7 = (*pcVar4)();
    return iVar7;
  }
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  pFVar3[lVar9] = (FScriptContainerElement)param_1;
  *(uint *)(pFVar3 + lVar9 + 4) = param_2;
  return uVar8;
}

// IsInMemoryBudget @ 1489f8a90

uint __thiscall FVirtualTextureUploadCache::IsInMemoryBudget(FVirtualTextureUploadCache *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  TConsoleVariableData<int> *pTVar6;
  TConsoleVariableData<int> *pTVar7;
  bool bVar8;
  uint uVar9;
  
  pTVar7 = CVarMaxUploadRequests.Ref;
  iVar1 = *(int *)&(this->PendingUpload).field_0x8;
  iVar2 = *(int *)&(this->PendingRelease).field_0x8;
  iVar3 = *(int *)&(this->PendingUpload).field_0x34;
  iVar4 = *(int *)&(this->PendingRelease).field_0x34;
  bVar8 = IsInParallelRenderingThread();
  if ((!bVar8) &&
     (bVar8 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007955>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6d3,"IsInParallelRenderingThread()"), bVar8)) {
    pcVar5 = (code *)swi(3);
    uVar9 = (*pcVar5)();
    return uVar9;
  }
  pTVar6 = CVarVTMaxUploadMemory.Ref;
  if ((iVar2 - iVar4) + (iVar1 - iVar3) <= pTVar7->ShadowedValue[1]) {
    bVar8 = IsInParallelRenderingThread();
    if ((!bVar8) &&
       (bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<6409875433831007955>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                           ,0x6d3,"IsInParallelRenderingThread()"), bVar8)) {
      pcVar5 = (code *)swi(3);
      uVar9 = (*pcVar5)();
      return uVar9;
    }
    if ((this->TileAllocator).NumAllocatedBytes <=
        (ulonglong)((longlong)pTVar6->ShadowedValue[1] * 0x100000)) {
      return 1;
    }
  }
  return 0;
}

// PrepareTileForUpload @ 148a02370

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FVTUploadTileHandle __thiscall
FVirtualTextureUploadCache::PrepareTileForUpload
          (FVirtualTextureUploadCache *this,FRHICommandListBase *param_1,
          FVTUploadTileBuffer *param_2,EPixelFormat param_3,uint param_4)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<FStat_STAT_VTP_StageTile> FVar13;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName FVar14;
  undefined7 in_register_00000089;
  longlong *plVar15;
  longlong lVar16;
  FScriptContainerElement *pFVar17;
  uint uVar18;
  uint uVar19;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  uint in_stack_00000030;
  LARGE_INTEGER local_90;
  FName local_88;
  FName local_80;
  FStatMessage local_70;
  FTileEntry local_60;
  
  plVar15 = (longlong *)CONCAT71(in_register_00000089,param_3);
  FVar13 = StatPtr_STAT_VTP_StageTile;
  if (StatPtr_STAT_VTP_StageTile == (FThreadSafeStaticStat<FStat_STAT_VTP_StageTile>)0x0) {
    pFVar12 = ::FName::FName(&local_88,"STAT_VTP_StageTile");
    FVar13 = (FThreadSafeStaticStat<FStat_STAT_VTP_StageTile>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VTP_StageTile,*pFVar12,
                        L"StageTile","STATGROUP_VTP","STATCAT_Advanced",L"Virtual Texturing Paging",
                        true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar14 = *(FName *)FVar13;
  bVar6 = false;
  bVar8 = false;
  local_80.ComparisonIndex.Value = 0;
  local_80.Number = 0;
  if ((FVar14.ComparisonIndex.Value.Value != 0) || (FVar14.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar13 + 0x10));
      bVar6 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar14.ComparisonIndex.Value.Value;
        local_res10.Number = FVar14.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\VT\\VirtualTextureUploadCache.cpp"
                   ,0x223);
        bVar6 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar7 = true;
      goto LAB_148a024ca;
    }
  }
  bVar7 = false;
  FVar14 = local_80;
LAB_148a024ca:
  uVar10 = FVTUploadTileAllocator::Allocate
                     (&this->TileAllocator,(FRHICommandListBase *)param_2,this->UploadType,
                      (EPixelFormat)param_4,in_stack_00000030);
  uVar18 = uVar10 & 0x1f;
  if ((this->TileAllocator).FormatDescs.ArrayNum <= (int)uVar18) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar5 = (code *)swi(3);
      uVar10 = (*pcVar5)();
      return (FVTUploadTileHandle)uVar10;
    }
  }
  pFVar4 = (this->TileAllocator).FormatDescs.AllocatorInstance.Data;
  if ((this->TileAllocator).FormatBuffers.ArrayNum <= (int)uVar18) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar5 = (code *)swi(3);
      uVar10 = (*pcVar5)();
      return (FVTUploadTileHandle)uVar10;
    }
  }
  pFVar17 = (this->TileAllocator).FormatBuffers.AllocatorInstance.Data + (ulonglong)uVar18 * 0x10;
  uVar19 = uVar10 >> 5 & 0x3fff;
  if (*(int *)(pFVar17 + 8) <= (int)uVar19) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar5 = (code *)swi(3);
      uVar10 = (*pcVar5)();
      return (FVTUploadTileHandle)uVar10;
    }
  }
  lVar16 = (ulonglong)uVar19 * 0x30 + *(longlong *)pFVar17;
  uVar2 = *(undefined4 *)(pFVar4 + (ulonglong)uVar18 * 0xc + 4);
  uVar3 = *(undefined4 *)(lVar16 + 0x10);
  *plVar15 = (ulonglong)((uVar10 >> 0x13) * *(int *)(lVar16 + 0x14)) + *(longlong *)(lVar16 + 8);
  *(undefined4 *)(plVar15 + 1) = uVar3;
  *(undefined4 *)((longlong)plVar15 + 0xc) = uVar2;
  local_60.PoolIndex = GetOrCreatePoolIndex(this,(EPixelFormat)param_4,in_stack_00000030);
  uVar18 = 0;
  if ((int)local_60.PoolIndex < (this->Pools).ArrayNum) {
    uVar18 = ~local_60.PoolIndex >> 0x1f;
  }
  if (uVar18 == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar5 = (code *)swi(3);
      uVar10 = (*pcVar5)();
      return (FVTUploadTileHandle)uVar10;
    }
  }
  local_60.SubmitDestX = 0;
  local_60.SubmitDestY = 0;
  local_60.SubmitSkipBorderSize = 0;
  local_60.FrameSubmitted = 0;
  local_60.PooledRenderTarget = (IPooledRenderTarget *)0x0;
  local_60.Texture = (FRDGTexture *)0x0;
  local_60.TileHandle = uVar10;
  iVar11 = TSparseArray<FVirtualTextureUploadCache::FTileEntry,FDefaultSparseArrayAllocator>::
           Emplace<FVirtualTextureUploadCache::FTileEntry_&>(&this->PendingUpload,&local_60);
  *(int *)&(param_1->MemManager).Top = iVar11;
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar7) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_70.NameAndInfo.Index = FVar14.ComparisonIndex.Value;
      local_70.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_90);
      local_70.StatData.Pad[4] = '\0';
      local_70.StatData.Pad[5] = '\0';
      local_70.StatData.Pad[6] = '\0';
      local_70.StatData.Pad[7] = '\0';
      local_70.StatData.Pad[0] = local_90.s.LowPart._0_1_;
      local_70.StatData.Pad[1] = local_90.s.LowPart._1_1_;
      local_70.StatData.Pad[2] = local_90.s.LowPart._2_1_;
      local_70.StatData.Pad[3] = local_90.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_70);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return (FVTUploadTileHandle)(uint)param_1;
}

// ReleaseRHI @ 148a07be0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall FVirtualTextureUploadCache::ReleaseRHI(FVirtualTextureUploadCache *this)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  FVTUploadTileHandle local_res8 [2];
  undefined1 local_38 [12];
  uint local_2c;
  longlong local_28;
  uint local_20;
  uint local_1c;
  
  bVar3 = IsInRenderingThread();
  if ((!bVar3) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                         ,0x1594,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  UpdateFreeList((FVirtualTextureUploadCache *)&this[-1].PendingRelease.field_0x30,
                 (FRHICommandListBase *)&GRHICommandList.CommandListImmediate,true);
  TSparseArray<FVirtualTextureUploadCache::FTileEntry,FDefaultSparseArrayAllocator>::TIterator::
  TIterator((TIterator *)local_38,
            (TSparseArray<FVirtualTextureUploadCache::FTileEntry,FDefaultSparseArrayAllocator> *)
            &(this->TileAllocator).NumAllocatedBytes);
  if ((int)local_1c < *(int *)(local_28 + 0x18)) {
    do {
      local_res8[0].Index = local_1c;
      CancelTile((FVirtualTextureUploadCache *)&this[-1].PendingRelease.field_0x30,
                 (FRHICommandListBase *)&GRHICommandList.CommandListImmediate,local_res8);
      local_20 = local_20 & ~local_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_38 + 8));
    } while ((int)local_1c < *(int *)(local_28 + 0x18));
  }
  DestructItems<FVirtualTextureUploadCache::FPoolEntry,int>
            (*(FPoolEntry **)&this->UploadType,*(int *)&(this->Pools).AllocatorInstance.Data);
  piVar1 = (int *)((longlong)&(this->Pools).AllocatorInstance.Data + 4);
  *(undefined4 *)&(this->Pools).AllocatorInstance.Data = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x68,8,0,(ForAnyElementType *)&this->UploadType,0,piVar1);
  }
  return;
}

// SubmitTile @ 148a19850

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FVirtualTextureUploadCache::SubmitTile
          (FVirtualTextureUploadCache *this,FRHICommandListBase *param_1,
          FVTUploadTileHandle *param_2,FVTProduceTargetLayer *param_3,int param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  undefined1 *puVar10;
  FTileEntry local_38;
  
  uVar2 = param_2->Index;
  if ((-1 < (int)uVar2) && ((int)uVar2 < *(int *)&(this->PendingUpload).field_0x28)) {
    if (*(int *)&(this->PendingUpload).field_0x28 <= (int)uVar2) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5c6,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    puVar10 = *(undefined1 **)&(this->PendingUpload).field_0x20;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &(this->PendingUpload).field_0x10;
    }
    if ((*(uint *)(puVar10 + (longlong)((int)(uVar2 + ((int)uVar2 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar2 & 0x1f) & 1) != 0) goto LAB_148a19901;
  }
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("PendingUpload.IsValidIndex(InHandle.Index)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\VT\\VirtualTextureUploadCache.cpp"
                     ,0x236,L"");
  if (bVar6) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
LAB_148a19901:
  lVar3 = *(longlong *)&this->PendingUpload;
  lVar9 = (longlong)(int)param_2->Index;
  puVar1 = (undefined8 *)(lVar3 + lVar9 * 0x28);
  local_38._0_8_ = *puVar1;
  local_38.PooledRenderTarget = (IPooledRenderTarget *)puVar1[1];
  puVar1 = (undefined8 *)(lVar3 + 0x10 + lVar9 * 0x28);
  local_38.Texture = (FRDGTexture *)*puVar1;
  local_38._24_8_ = puVar1[1];
  local_38._32_8_ = *(undefined8 *)(lVar3 + 0x20 + lVar9 * 0x28);
  TSparseArray<FVirtualTextureUploadCache::FTileEntry,FDefaultSparseArrayAllocator>::RemoveAt
            (&this->PendingUpload,param_2->Index,1);
  local_38.FrameSubmitted = GFrameNumberRenderThread;
  TSparseArray<FVirtualTextureUploadCache::FTileEntry,FDefaultSparseArrayAllocator>::
  Emplace<FVirtualTextureUploadCache::FTileEntry_&>(&this->PendingRelease,&local_38);
  local_38.PooledRenderTarget = param_3->PooledRenderTarget;
  uVar2 = local_38.PoolIndex;
  local_38._24_8_ = *(undefined8 *)&(param_3->pPageLocation).field0_0x0;
  local_38.SubmitSkipBorderSize = param_4;
  uVar7 = 0;
  if ((int)local_38.PoolIndex < (this->Pools).ArrayNum) {
    uVar7 = ~local_38.PoolIndex >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar4 = (this->Pools).AllocatorInstance.Data;
  iVar8 = *(int *)(pFVar4 + (longlong)(int)uVar2 * 0x68 + 0x60);
  if (iVar8 == *(int *)(pFVar4 + (longlong)(int)uVar2 * 0x68 + 100)) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,(ForAnyElementType *)(pFVar4 + (longlong)(int)uVar2 * 0x68 + 0x58),
                       (int *)(pFVar4 + (longlong)(int)uVar2 * 0x68 + 100));
  }
  lVar9 = (longlong)iVar8;
  *(int *)(pFVar4 + (longlong)(int)uVar2 * 0x68 + 0x60) = iVar8 + 1;
  lVar3 = *(longlong *)(pFVar4 + (longlong)(int)uVar2 * 0x68 + 0x58);
  puVar1 = (undefined8 *)(lVar3 + lVar9 * 0x28);
  *puVar1 = local_38._0_8_;
  puVar1[1] = local_38.PooledRenderTarget;
  puVar1 = (undefined8 *)(lVar3 + 0x10 + lVar9 * 0x28);
  *puVar1 = local_38.Texture;
  puVar1[1] = local_38._24_8_;
  *(undefined8 *)(lVar3 + 0x20 + lVar9 * 0x28) = local_38._32_8_;
  return;
}

// UpdateFreeList @ 148a1ee20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FVirtualTextureUploadCache::UpdateFreeList
          (FVirtualTextureUploadCache *this,FRHICommandListBase *param_1,bool param_2)

{
  uint uVar1;
  TSparseArray<FVirtualTextureUploadCache::FTileEntry,FDefaultSparseArrayAllocator> *this_00;
  int iVar2;
  TSparseArray<FVirtualTextureUploadCache::FTileEntry,FDefaultSparseArrayAllocator> *local_38;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_30;
  
  uVar1 = GFrameNumberRenderThread;
  TSparseArray<FVirtualTextureUploadCache::FTileEntry,FDefaultSparseArrayAllocator>::TIterator::
  TIterator((TIterator *)&local_38,&this->PendingRelease);
  if (local_30.CurrentBitIndex < (local_30.Array)->NumBits) {
    do {
      iVar2 = local_30.CurrentBitIndex;
      this_00 = local_38;
      if (uVar1 < *(int *)(*(longlong *)local_38 + 0x24 + (longlong)local_30.CurrentBitIndex * 0x28)
                  + ReleaseFrameDelay) {
        return;
      }
      FVTUploadTileAllocator::Free
                (&this->TileAllocator,param_1,
                 *(uint *)(*(longlong *)local_38 + (longlong)local_30.CurrentBitIndex * 0x28 + 4));
      TSparseArray<FVirtualTextureUploadCache::FTileEntry,FDefaultSparseArrayAllocator>::RemoveAt
                (this_00,iVar2,1);
      local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
    } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
  }
  return;
}

