// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 6

// InitRHI @ 14539b2b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FReflectionEnvironmentCubemapArray::InitRHI
          (FReflectionEnvironmentCubemapArray *this,FRHICommandListBase *param_1)

{
  ulonglong uVar1;
  byte bVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  FRHITextureDesc *pFVar6;
  Type TVar7;
  int iVar8;
  undefined1 auStackY_118 [32];
  FPooledRenderTargetDesc local_d8;
  undefined1 local_78 [80];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_118;
  bVar2 = *(byte *)((longlong)&this->_padding_ + 4);
  TVar7 = (uint)bVar2;
  if (bVar2 == 5) {
    TVar7 = GMaxRHIFeatureLevel;
  }
  bVar5 = SupportsTextureCubeArray(TVar7);
  if (bVar5) {
    if (this->MaxCubemaps == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("MaxCubemaps > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\ReflectionEnvironment.cpp"
                         ,0x98,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    if (this->CubemapSize < 1) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("CubemapSize > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\ReflectionEnvironment.cpp"
                         ,0x99,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar8 = 1;
    if (this->CubemapSize != 0) {
      iVar8 = this->CubemapSize;
    }
    uVar1 = (ulonglong)(iVar8 - 1) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    FRenderTargetPool::FreeUnusedResource
              ((FRenderTargetPool *)&GRenderTargetPool,&this->ReflectionEnvs);
    local_d8.Extent.field0_0x0._s_0.X = this->CubemapSize;
    local_d8.ArraySize = 2;
    if (2 < this->MaxCubemaps) {
      local_d8.ArraySize = (ushort)this->MaxCubemaps;
    }
    if (local_d8.Extent.field0_0x0._s_0.X == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InExtent",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RendererInterface.h"
                         ,0xd5,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    local_d8.ClearValue.Value.Color[3] = FClearValueBinding::None.Value.Color[3];
    local_d8.Format = PF_FloatRGBA;
    local_d8.UAVFormat = PF_Unknown;
    local_d8.NumSamples = '\x01';
    local_d8.FastVRAMPercentage = 0xff;
    local_d8.AliasableFormats.AllocatorInstance.SecondaryData = (ForElementType<EPixelFormat>)0x0;
    local_d8.field13_0x58.PackedBits = (1 < local_d8.ArraySize) + '\x02';
    local_d8.AliasableFormats.ArrayNum = 0;
    local_d8.DebugName = L"UnknownTextureCube";
    local_d8.AliasableFormats.ArrayMax = 1;
    local_d8.ClearValue._0_8_ = FClearValueBinding::None._0_8_;
    local_d8.ClearValue.Value._4_8_ = FClearValueBinding::None.Value._4_8_;
    local_d8.Depth = 0;
    local_d8.Flags = None;
    local_d8.Extent.field0_0x0._s_0.Y = local_d8.Extent.field0_0x0._s_0.X;
    local_d8.NumMips = (char)lVar3 + '\x01';
    pFVar6 = (FRHITextureDesc *)::Translate((FRDGTextureDesc *)local_78,&local_d8);
    FRenderTargetPool::FindFreeElement
              ((FRenderTargetPool *)&GRenderTargetPool,param_1,pFVar6,&this->ReflectionEnvs,
               L"ReflectionEnvs");
    if ((void *)local_78._64_8_ != (void *)0x0) {
      FMemory::Free((void *)local_78._64_8_);
    }
    if (local_d8.AliasableFormats.AllocatorInstance.SecondaryData !=
        (ForElementType<EPixelFormat>)0x0) {
      FMemory::Free((void *)local_d8.AliasableFormats.AllocatorInstance.SecondaryData);
    }
  }
  return;
}

// ReleaseCubeArray @ 14539fad0

void __thiscall
FReflectionEnvironmentCubemapArray::ReleaseCubeArray(FReflectionEnvironmentCubemapArray *this)

{
  FRenderTargetPool::FreeUnusedResource
            ((FRenderTargetPool *)&GRenderTargetPool,&this->ReflectionEnvs);
  return;
}

// ReleaseRHI @ 14539fc60

void __thiscall
FReflectionEnvironmentCubemapArray::ReleaseRHI(FReflectionEnvironmentCubemapArray *this)

{
  FRenderTargetPool::FreeUnusedResource
            ((FRenderTargetPool *)&GRenderTargetPool,&this->ReflectionEnvs);
  return;
}

// Reset @ 1453a63c0

void __thiscall FReflectionEnvironmentCubemapArray::Reset(FReflectionEnvironmentCubemapArray *this)

{
  (**(code **)(this->_padding_ + 0x10))();
  this->MaxCubemaps = 0;
  this->CubemapSize = 0;
  return;
}

// ResizeCubemapArrayGPU @ 1453a6810

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FReflectionEnvironmentCubemapArray::ResizeCubemapArrayGPU
          (FReflectionEnvironmentCubemapArray *this,uint param_1,int param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3)

{
  ulonglong uVar1;
  int iVar2;
  IPooledRenderTarget *pIVar3;
  FRHITexture *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  atomic<unsigned_int> aVar9;
  uint uVar10;
  FRHIBreadcrumbAllocator *pFVar11;
  FRHIBreadcrumbNode *pFVar12;
  IRHICommandContext *pIVar13;
  undefined8 *puVar14;
  char cVar15;
  int iVar16;
  FRHITexture *pFVar17;
  longlong lVar18;
  uint local_res10;
  TRefCountPtr<IPooledRenderTarget> local_1e8;
  longlong local_1e0;
  undefined8 local_1d8;
  int iStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  int iStack_1c4;
  undefined8 uStack_1c0;
  int local_1b8;
  int iStack_1b4;
  int iStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  int local_1a0;
  longlong local_198;
  FRHITexture *local_190;
  FRHITransitionInfo local_188;
  undefined4 local_158;
  undefined2 local_154;
  FRHITexture *local_150;
  undefined1 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined1 local_13c;
  undefined1 local_130;
  FRHITransitionInfo local_128;
  undefined4 local_f8;
  undefined2 local_f4;
  FRHITexture *local_f0;
  undefined1 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined1 local_dc;
  undefined1 local_d0;
  FRHITransitionInfo *local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  FRHITransitionInfo *local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  char *local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  wchar_t *pwStack_90;
  FRHIBreadcrumbScope local_88;
  char local_78;
  TArrayView<FRHITransitionInfo_const_,int> local_68;
  TArrayView<FRHITransitionInfo_const_,int> local_58;
  
  bVar6 = IsInRenderingThread();
  if ((!bVar6) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                         ,0x1594,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((param_1 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InMaxCubemaps > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\ReflectionEnvironment.cpp"
                         ,0x219,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((param_2 < 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCubemapSize > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\ReflectionEnvironment.cpp"
                         ,0x21a,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (((int)this->_padding_ == -1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInitialized()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\ReflectionEnvironment.cpp"
                         ,0x21b,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((param_2 != this->CubemapSize) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCubemapSize == CubemapSize",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\ReflectionEnvironment.cpp"
                         ,0x21c,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_1e8.Reference = (this->ReflectionEnvs).Reference;
  if (local_1e8.Reference != (IPooledRenderTarget *)0x0) {
    (**(code **)((local_1e8.Reference)->_padding_ + 0x30))();
  }
  pIVar3 = (this->ReflectionEnvs).Reference;
  if (pIVar3 != (IPooledRenderTarget *)0x0) {
    (this->ReflectionEnvs).Reference = (IPooledRenderTarget *)0x0;
    (**(code **)(pIVar3->_padding_ + 0x38))();
  }
  uVar10 = this->MaxCubemaps;
  this->MaxCubemaps = param_1;
  (**(code **)(this->_padding_ + 8))(this,0x154be5ed0);
  pFVar17 = ((local_1e8.Reference)->RenderTargetItem).TargetableTexture.Reference;
  local_190 = pFVar17;
  if (pFVar17 != (FRHITexture *)0x0) {
    FRHIResource::AddRef((FRHIResource *)pFVar17);
  }
  iVar7 = 1;
  if (param_2 != 0) {
    iVar7 = param_2;
  }
  uVar1 = (ulonglong)(iVar7 - 1) * 2 + 1;
  lVar18 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar18 == 0; lVar18 = lVar18 + -1) {
    }
  }
  iVar7 = (int)lVar18 + 1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    uStack_a0 = 0x22a;
    local_a8 = 
    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\ReflectionEnvironment.cpp"
    ;
    local_98 = 0;
    pwStack_90 = L"ReflectionEnvironment_ResizeCubemapArray";
    ::Desc._padding_._0_4_ = 0x50f8b670;
    ::Desc._padding_._4_4_ = 1;
    ::Desc._padding_._0_4_ = 0x22a;
    ::Desc._padding_._4_4_ = uStack_9c;
    ::Desc._padding_._0_4_ = 0;
    ::Desc._padding_._4_4_ = 0;
    ::Desc._padding_._0_4_ = 0x50f8b800;
    ::Desc._padding_._4_4_ = 1;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
    ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
    ::Desc.TraceGpuSpecId = 0;
    ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
    atexit(``FReflectionEnvironmentCubemapArray::ResizeCubemapArrayGPU'::__l36::<lambda_1>::
           operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__);
    _Init_thread_footer(&::_TSS0);
  }
  pFVar11 = FRHIComputeCommandList::GetBreadcrumbAllocator
                      ((FRHIComputeCommandList *)&GRHICommandList.CommandListImmediate);
  pFVar12 = FMemStackBase::Alloc(&pFVar11->Inner,0x50,8);
  pFVar12->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
  pFVar12->Parent = FRHIBreadcrumbNode::Sentinel;
  pFVar12->ListLink = (FRHIBreadcrumbNode *)0x0;
  (pFVar12->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
  (pFVar12->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
  pFVar12->Data = (FRHIBreadcrumbData *)&::Desc;
  pFVar12->Allocator = pFVar11;
  pFVar12->TraceCpuSpecId = 0;
  pFVar12->TraceCpuMetadataId = 0;
  LOCK();
  UNLOCK();
  uVar8 = (uint)FRHIBreadcrumbNode::NextID | 0x80000000;
  FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
  pFVar12->BeginPipes = (atomic<unsigned_char>)0x0;
  pFVar12->EndPipes = (atomic<unsigned_char>)0x0;
  pFVar12->ID = uVar8;
  pFVar12->_padding_ =
       (longlong)
       &
       ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0A___V_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
  ;
  pFVar12[1]._padding_ = (longlong)&::Desc;
  if ((::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) &&
     (bVar6 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable(), bVar6)) {
    EnterCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
    if (::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
      aVar9 = (atomic<unsigned_int>)
              FCpuProfilerTrace::OutputEventType
                        ((wchar_t *)CONCAT44(::Desc._padding_._4_4_,(undefined4)::Desc._padding_),
                         (char *)CONCAT44(::Desc._padding_._4_4_,(undefined4)::Desc._padding_),
                         (uint)::Desc._padding_);
      LOCK();
      ::Desc.TraceCpuSpecId = aVar9;
      UNLOCK();
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
  }
  pFVar12->TraceCpuSpecId = (uint)::Desc.TraceCpuSpecId;
  FRHIBreadcrumbScope::FRHIBreadcrumbScope
            (&local_88,(FRHIComputeCommandList *)&GRHICommandList.CommandListImmediate,pFVar12);
  uStack_c0 = 2;
  local_78 = '\x01';
  local_188.field1_0x8 =
       (FRHITransitionInfo_u_8)((local_1e8.Reference)->RenderTargetItem).TargetableTexture.Reference
  ;
  local_188._padding_._4_2_ = 0xffff;
  local_188._padding_._0_4_ = 0xffffffff;
  local_188.Type = Texture;
  local_188.AccessBefore = None;
  local_188.AccessAfter = CopySrc;
  local_188.Flags = None;
  local_188.CommitInfo.bIsSet = false;
  local_150 = (((this->ReflectionEnvs).Reference)->RenderTargetItem).TargetableTexture.Reference;
  local_c8 = &local_188;
  local_68._12_4_ = uStack_bc;
  local_68.ArrayNum = 2;
  local_154 = 0xffff;
  local_158 = 0xffffffff;
  local_148 = 1;
  local_144 = 0;
  local_140 = 0x2000;
  local_13c = 0;
  local_130 = 0;
  local_68.DataPtr = local_c8;
  FRHIComputeCommandList::Transition
            ((FRHIComputeCommandList *)&GRHICommandList.CommandListImmediate,&local_68,None);
  local_res10 = 0;
  cVar15 = '\x01';
  local_198 = (longlong)(int)uVar10;
  if (0 < (int)uVar10) {
    local_1e0 = 0;
    do {
      lVar18 = local_1e0;
      uVar10 = 0;
      if ((int)local_res10 < param_3->ArrayNum) {
        uVar10 = ~local_res10 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar2 = *(int *)((param_3->AllocatorInstance).Data + lVar18 * 4);
      if (iVar2 != -1) {
        if (((int)this->MaxCubemaps <= iVar2) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("DestCubemapIndex < (int32)MaxCubemaps",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\ReflectionEnvironment.cpp"
                               ,0x238,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar16 = iVar2 * 6;
        lVar18 = 6;
        do {
          iStack_1d0 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
          iStack_1c4 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
          local_1b8 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
          iStack_1b4 = iVar16 + (local_res10 - iVar2) * 6;
          local_1d8 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
          uStack_1cc = (undefined4)UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
          uStack_1c8 = (undefined4)
                       ((ulonglong)UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_ >> 0x20);
          uStack_1c0 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
          uStack_1ac = 1;
          uStack_1a8 = 0;
          uStack_1a4 = 0;
          pFVar17 = (((this->ReflectionEnvs).Reference)->RenderTargetItem).TargetableTexture.
                    Reference;
          pFVar4 = ((local_1e8.Reference)->RenderTargetItem).TargetableTexture.Reference;
          iStack_1b0 = iVar16;
          local_1a0 = iVar7;
          if (((pFVar4 == (FRHITexture *)0x0) || (pFVar17 == (FRHITexture *)0x0)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("SourceTextureRHI && DestTextureRHI",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                                 ,0x1077,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          if ((pFVar4 == pFVar17) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("SourceTextureRHI != DestTextureRHI",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                                 ,0x1078,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          if (((GRHICommandList.CommandListImmediate._667_1_ & 2) != 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsOutsideRenderPass()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                                 ,0x1079,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          if ((GRHICommandList.bLatchedBypass == false) ||
             ((GRHICommandList.CommandListImmediate._667_1_ & 0x20) == 0)) {
            puVar14 = FMemStackBase::Alloc
                                ((FMemStackBase *)&GRHICommandList.CommandListImmediate,0x60,8);
            GRHICommandList.CommandListImmediate._96_4_ =
                 GRHICommandList.CommandListImmediate._96_4_ + 1;
            *(undefined8 **)GRHICommandList.CommandListImmediate._48_8_ = puVar14;
            GRHICommandList.CommandListImmediate._48_8_ = puVar14 + 1;
            *(undefined8 *)GRHICommandList.CommandListImmediate._48_8_ = 0;
            *puVar14 = &___7FRHICommandCopyTexture__6B_;
            puVar14[2] = local_1d8;
            puVar14[3] = CONCAT44(uStack_1cc,iStack_1d0);
            puVar14[4] = CONCAT44(iStack_1c4,uStack_1c8);
            puVar14[5] = uStack_1c0;
            puVar14[6] = CONCAT44(iStack_1b4,local_1b8);
            puVar14[7] = CONCAT44(uStack_1ac,iStack_1b0);
            puVar14[8] = CONCAT44(uStack_1a4,uStack_1a8);
            *(int *)(puVar14 + 9) = local_1a0;
            puVar14[10] = pFVar4;
            puVar14[0xb] = pFVar17;
            if ((pFVar4 == (FRHITexture *)0x0) &&
               (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                                  (&bGEnsureHasExecuted<6604847226579585294>,false,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                                   ,0x90e,"SourceTexture"), bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            if ((puVar14[0xb] == 0) &&
               (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                                  (&bGEnsureHasExecuted<6604847226579585295>,false,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                                   ,0x90f,"DestTexture"), bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
          else {
            pIVar13 = FRHICommandListBase::GetContext
                                ((FRHICommandListBase *)&GRHICommandList.CommandListImmediate);
            (**(code **)(pIVar13->_padding_ + 0x260))(pIVar13,pFVar4,pFVar17,&local_1d8);
          }
          iVar16 = iVar16 + 1;
          lVar18 = lVar18 + -1;
        } while (lVar18 != 0);
      }
      local_res10 = local_res10 + 1;
      local_1e0 = local_1e0 + 1;
      pFVar17 = local_190;
      cVar15 = local_78;
    } while (local_1e0 < local_198);
  }
  uStack_b0 = 2;
  local_128.field1_0x8 =
       (FRHITransitionInfo_u_8)((local_1e8.Reference)->RenderTargetItem).TargetableTexture.Reference
  ;
  local_128._padding_._4_2_ = 0xffff;
  local_128._padding_._0_4_ = 0xffffffff;
  local_128.Type = Texture;
  local_128.AccessBefore = CopySrc;
  local_128.AccessAfter = SRVMask;
  local_128.Flags = None;
  local_128.CommitInfo.bIsSet = false;
  local_f0 = (((this->ReflectionEnvs).Reference)->RenderTargetItem).TargetableTexture.Reference;
  local_b8 = &local_128;
  local_58._12_4_ = uStack_ac;
  local_58.ArrayNum = 2;
  local_f4 = 0xffff;
  local_f8 = 0xffffffff;
  local_e8 = 1;
  local_e4 = 0x2000;
  local_e0 = 0x70;
  local_dc = 0;
  local_d0 = 0;
  local_58.DataPtr = local_b8;
  FRHIComputeCommandList::Transition
            ((FRHIComputeCommandList *)&GRHICommandList.CommandListImmediate,&local_58,None);
  if (cVar15 != '\0') {
    FRHIBreadcrumbScope::~FRHIBreadcrumbScope(&local_88);
  }
  FRenderTargetPool::FreeUnusedResource((FRenderTargetPool *)&GRenderTargetPool,&local_1e8);
  if (pFVar17 != (FRHITexture *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar17);
  }
  if (local_1e8.Reference != (IPooledRenderTarget *)0x0) {
    (**(code **)((local_1e8.Reference)->_padding_ + 0x38))();
  }
  return;
}

// UpdateMaxCubemaps @ 1453b6980

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FReflectionEnvironmentCubemapArray::UpdateMaxCubemaps
          (FReflectionEnvironmentCubemapArray *this,uint param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InMaxCubemaps > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\ReflectionEnvironment.cpp"
                       ,0x250,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_2 < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCubemapSize > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\ReflectionEnvironment.cpp"
                       ,0x251,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->MaxCubemaps = param_1;
  this->CubemapSize = param_2;
  bVar2 = IsInRenderingThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x1594,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((int)this->_padding_ != -1) {
    FRenderResource::UpdateRHI
              ((FRenderResource *)this,(FRHICommandListBase *)&GRHICommandList.CommandListImmediate)
    ;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001453b6a56. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))();
  return;
}

