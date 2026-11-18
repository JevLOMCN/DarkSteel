// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 15

// ~FHZBOcclusionTester @ 145405210

void __thiscall FHZBOcclusionTester::~FHZBOcclusionTester(FHZBOcclusionTester *this)

{
  FRHIGPUTextureReadback *pFVar1;
  FRHITexture *this_00;
  FOcclusionPrimitive *pFVar2;
  longlong lVar3;
  FRHIGPUTextureReadback *pFVar4;
  
  this->_padding_ = (longlong)&___7FHZBOcclusionTester__6B_;
  pFVar1 = (this->ResultsReadback).Ptr;
  if (pFVar1 != (FRHIGPUTextureReadback *)0x0) {
    lVar3 = 8;
    pFVar4 = pFVar1 + 1;
    do {
      this_00 = pFVar4[-1].DestinationStagingTextures[7].Reference;
      pFVar4 = (FRHIGPUTextureReadback *)(pFVar4[-1].DestinationStagingTextures + 7);
      lVar3 = lVar3 + -1;
      if (this_00 != (FRHITexture *)0x0) {
        FRHIResource::Release((FRHIResource *)this_00);
      }
    } while (lVar3 != 0);
    pFVar1->_padding_ = (longlong)&___7FRHIGPUMemoryReadback__6B_;
    if ((FRHIResource *)pFVar1->_padding_ != (FRHIResource *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar1->_padding_);
    }
    ::operator_delete(pFVar1,0x58);
  }
  pFVar2 = (this->Primitives).AllocatorInstance.Data;
  if (pFVar2 != (FOcclusionPrimitive *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(pFVar2);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

// FHZBOcclusionTester @ 145477260

FHZBOcclusionTester * __thiscall FHZBOcclusionTester::FHZBOcclusionTester(FHZBOcclusionTester *this)

{
  FRenderResource::FRenderResource((FRenderResource *)this);
  this->ValidFrameNumber = 0xffffffff;
  this->_padding_ = (longlong)&___7FHZBOcclusionTester__6B_;
  (this->Primitives).AllocatorInstance.Data = (FOcclusionPrimitive *)0x0;
  (this->Primitives).ArrayNum = 0;
  (this->Primitives).ArrayMax = 0;
  this->ResultsBuffer = (uchar *)0x0;
  this->ResultsBufferRowPitch = 0;
  (this->ResultsReadback).Ptr = (FRHIGPUTextureReadback *)0x0;
  return this;
}

// operator() @ 14548e290

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`FHZBOcclusionTester::Submit'::__l13::<lambda_2>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  double dVar1;
  uint uVar2;
  longlong lVar3;
  FRDGResource *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  size_t _Size;
  ulonglong uVar14;
  undefined1 auStackY_888 [32];
  FUpdateTextureRegion2D local_858;
  float local_838 [256];
  float local_438 [256];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_888;
  uVar2 = *(uint *)((longlong)this + 8);
  uVar14 = 0;
  if (uVar2 != 0) {
    do {
      uVar10 = uVar2 - (int)uVar14;
      if (0x40 < uVar10) {
        uVar10 = 0x40;
      }
      uVar11 = (ulonglong)uVar10;
      uVar9 = 0;
      uVar13 = uVar14;
      if (uVar10 != 0) {
        do {
          uVar12 = (uint)uVar13;
          uVar7 = 0;
          if ((int)uVar12 < *(int *)((longlong)this + 8)) {
            uVar7 = ~uVar12 >> 0x1f;
          }
          if ((uVar7 == 0) &&
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
          lVar8 = (longlong)(int)uVar12;
          lVar3 = *(longlong *)this;
          *(float *)((longlong)local_838 + uVar9) = (float)*(double *)(lVar3 + lVar8 * 0x30);
          *(float *)((longlong)local_838 + uVar9 + 4) = (float)*(double *)(lVar3 + 8 + lVar8 * 0x30)
          ;
          dVar1 = *(double *)(lVar3 + 0x10 + lVar8 * 0x30);
          *(undefined4 *)((longlong)local_838 + uVar9 + 0xc) = 0;
          *(float *)((longlong)local_838 + uVar9 + 8) = (float)dVar1;
          *(float *)((longlong)local_438 + uVar9) = (float)*(double *)(lVar3 + 0x18 + lVar8 * 0x30);
          *(float *)((longlong)local_438 + uVar9 + 4) =
               (float)*(double *)(lVar3 + 0x20 + lVar8 * 0x30);
          dVar1 = *(double *)(lVar3 + 0x28 + lVar8 * 0x30);
          *(undefined4 *)((longlong)local_438 + uVar9 + 0xc) = 0x3f800000;
          *(float *)((longlong)local_438 + uVar9 + 8) = (float)dVar1;
          uVar11 = uVar11 - 1;
          uVar9 = uVar9 + 0x10;
          uVar13 = (ulonglong)(uVar12 + 1);
        } while (uVar11 != 0);
      }
      if (uVar10 < 0x40) {
        uVar9 = (ulonglong)(uVar10 * 4);
        _Size = uVar9 * -4 + 0x400;
        memset(local_838 + uVar9,0,_Size);
        memset(local_438 + uVar9,0,_Size);
      }
      pFVar4 = *(FRDGResource **)((longlong)this + 0x10);
      uVar10 = (uint)(uVar14 >> 6);
      local_858.SrcX = 0;
      local_858.SrcY = 0;
      local_858.DestY = (uVar10 >> 5) << 3;
      local_858.DestX = (uVar10 & 0x1f) << 3;
      local_858.Width = 8;
      local_858.Height = 8;
      FRDGResource::ValidateRHIAccess(pFVar4);
      FRHICommandListBase::UpdateTexture2D
                ((FRHICommandListBase *)&GRHICommandList.CommandListImmediate,
                 (FRHITexture *)pFVar4->ResourceRHI,0,&local_858,0x80,(uchar *)local_838);
      pFVar4 = *(FRDGResource **)((longlong)this + 0x18);
      FRDGResource::ValidateRHIAccess(pFVar4);
      FRHICommandListBase::UpdateTexture2D
                ((FRHICommandListBase *)&GRHICommandList.CommandListImmediate,
                 (FRHITexture *)pFVar4->ResourceRHI,0,&local_858,0x80,(uchar *)local_438);
      uVar10 = (int)uVar14 + 0x40;
      uVar14 = (ulonglong)uVar10;
    } while (uVar10 < uVar2);
  }
  return;
}

// AddBounds @ 145491ab0

uint __thiscall
FHZBOcclusionTester::AddBounds
          (FHZBOcclusionTester *this,TVector<double> *param_1,TVector<double> *param_2)

{
  TArray<FOcclusionPrimitive,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
  *pTVar1;
  int *piVar2;
  TVector<double> *pTVar3;
  double dVar4;
  FOcclusionPrimitive *pFVar5;
  FOcclusionPrimitive *pFVar6;
  code *pcVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  bool bVar12;
  uint uVar13;
  uint uVar14;
  
  uVar13 = (this->Primitives).ArrayNum;
  pTVar1 = &this->Primitives;
  piVar2 = &(this->Primitives).ArrayMax;
  if (uVar13 == *piVar2) {
    uVar13 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FOcclusionPrimitive>_>
                       (0x830,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->Primitives).ArrayNum = uVar13 + 1;
  if ((0xffff < uVar13) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Index < SizeX * SizeY",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneOcclusion.cpp"
                          ,0x342,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    uVar13 = (*pcVar7)();
    return uVar13;
  }
  uVar8 = *(undefined4 *)&param_1->field0_0x0;
  uVar9 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 4);
  uVar10 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 8);
  uVar11 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 0xc);
  dVar4 = (param_1->field0_0x0)._s_0.Z;
  uVar14 = 0;
  if ((int)uVar13 < (this->Primitives).ArrayNum) {
    uVar14 = ~uVar13 >> 0x1f;
  }
  if ((uVar14 == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar7 = (code *)swi(3);
    uVar13 = (*pcVar7)();
    return uVar13;
  }
  pFVar5 = (pTVar1->AllocatorInstance).Data;
  pFVar6 = pFVar5 + (int)uVar13;
  *(undefined4 *)&(pFVar6->Center).field0_0x0 = uVar8;
  *(undefined4 *)((longlong)&(pFVar6->Center).field0_0x0 + 4) = uVar9;
  *(undefined4 *)((longlong)&(pFVar6->Center).field0_0x0 + 8) = uVar10;
  *(undefined4 *)((longlong)&(pFVar6->Center).field0_0x0 + 0xc) = uVar11;
  pFVar5[(int)uVar13].Center.field0_0x0._s_0.Z = dVar4;
  uVar8 = *(undefined4 *)&param_2->field0_0x0;
  uVar9 = *(undefined4 *)((longlong)&param_2->field0_0x0 + 4);
  uVar10 = *(undefined4 *)((longlong)&param_2->field0_0x0 + 8);
  uVar11 = *(undefined4 *)((longlong)&param_2->field0_0x0 + 0xc);
  dVar4 = (param_2->field0_0x0)._s_0.Z;
  uVar14 = 0;
  if ((int)uVar13 < (this->Primitives).ArrayNum) {
    uVar14 = ~uVar13 >> 0x1f;
  }
  if ((uVar14 == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar7 = (code *)swi(3);
    uVar13 = (*pcVar7)();
    return uVar13;
  }
  pFVar6 = (pTVar1->AllocatorInstance).Data;
  pTVar3 = &pFVar6[(int)uVar13].Extent;
  *(undefined4 *)&pTVar3->field0_0x0 = uVar8;
  *(undefined4 *)((longlong)&pTVar3->field0_0x0 + 4) = uVar9;
  *(undefined4 *)((longlong)&pTVar3->field0_0x0 + 8) = uVar10;
  *(undefined4 *)((longlong)&pTVar3->field0_0x0 + 0xc) = uVar11;
  pFVar6[(int)uVar13].Extent.field0_0x0._s_0.Z = dVar4;
  return uVar13;
}

// InitRHI @ 1454ab330

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall FHZBOcclusionTester::InitRHI(FHZBOcclusionTester *this,FRHICommandListBase *param_1)

{
  byte bVar1;
  Type TVar2;
  FRHIGPUTextureReadback *this_00;
  FName *pFVar3;
  FRHIGPUTextureReadback *pFVar4;
  FName local_res8;
  
  bVar1 = *(byte *)((longlong)&this->_padding_ + 4);
  TVar2 = (uint)bVar1;
  if (bVar1 == 5) {
    TVar2 = GMaxRHIFeatureLevel;
  }
  if (2 < (int)TVar2) {
    this_00 = ::operator_new(0x58);
    pFVar4 = (FRHIGPUTextureReadback *)0x0;
    if (this_00 != (FRHIGPUTextureReadback *)0x0) {
      pFVar3 = ::FName::FName(&local_res8,L"HZBGPUReadback");
      pFVar4 = FRHIGPUTextureReadback::FRHIGPUTextureReadback(this_00,*pFVar3);
    }
    TUniquePtr<FRHIGPUTextureReadback,TDefaultDelete<FRHIGPUTextureReadback>_>::Reset
              (&this->ResultsReadback,pFVar4);
  }
  return;
}

// IsInvalidFrame @ 1454ac090

bool __thiscall FHZBOcclusionTester::IsInvalidFrame(FHZBOcclusionTester *this)

{
  return this->ValidFrameNumber == 0xffffffff;
}

// IsValidFrame @ 1454ac360

bool __thiscall FHZBOcclusionTester::IsValidFrame(FHZBOcclusionTester *this,uint param_1)

{
  return (param_1 & 0x7fffffff) == this->ValidFrameNumber;
}

// IsVisible @ 1454ac380

bool __thiscall FHZBOcclusionTester::IsVisible(FHZBOcclusionTester *this,uint param_1)

{
  return this->ResultsBuffer
         [(int)(((((param_1 & 0x3f) >> 3) + (param_1 >> 0xb) * 8) * this->ResultsBufferRowPitch +
                 (param_1 >> 6 & 0x1f) * 8 + (param_1 & 7)) * 4)] != '\0';
}

// MapResults @ 1454ac7c0

void __thiscall
FHZBOcclusionTester::MapResults(FHZBOcclusionTester *this,FRHICommandListImmediate *param_1)

{
  FRHIGPUMask FVar1;
  FRHIGPUTextureReadback *this_00;
  code *pcVar2;
  bool bVar3;
  uchar *puVar4;
  int local_res8 [2];
  LARGE_INTEGER local_res18;
  LARGE_INTEGER local_res20;
  FScopeIdle local_38;
  int local_30;
  char local_2c;
  DWORD local_28;
  
  if (this->ResultsBuffer != (uchar *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!ResultsBuffer",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneOcclusion.cpp"
                       ,0x34a,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (this->ValidFrameNumber != 0xffffffff) {
    bVar3 = IsInRHIThread();
    UE::Stats::FThreadIdleStats::FScopeIdle::FScopeIdle(&local_38,!bVar3);
    local_30 = 1;
    bVar3 = IsInRenderingThread();
    if (bVar3) {
      local_2c = '\x01';
      QueryPerformanceCounter(&local_res18);
      local_28 = local_res18.s.LowPart;
    }
    else {
      local_2c = '\0';
      local_28 = 0;
    }
    FVar1.GPUMask = *(uint *)&param_1->field_0x29c;
    FRHIComputeCommandList::SetGPUMask
              ((FRHIComputeCommandList *)param_1,
               (FRHIGPUMask)(uint)((this->ResultsReadback).Ptr)->_padding_);
    this_00 = (this->ResultsReadback).Ptr;
    local_res8[0] = 0;
    this->ResultsBufferRowPitch = 0;
    puVar4 = FRHIGPUTextureReadback::Lock(this_00,&this->ResultsBufferRowPitch,local_res8);
    this->ResultsBuffer = puVar4;
    if (puVar4 != (uchar *)0x0) {
      if (this->ResultsBufferRowPitch < 0x100) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("ResultsBufferRowPitch >= SizeX",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneOcclusion.cpp"
                           ,0x358,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      if (local_res8[0] < 0x100) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("ResultBufferHeight >= SizeY",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneOcclusion.cpp"
                           ,0x359,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
    }
    FRHIComputeCommandList::SetGPUMask((FRHIComputeCommandList *)param_1,FVar1);
    if (local_2c != '\0') {
      QueryPerformanceCounter(&local_res20);
      GRenderThreadIdle[local_30] = GRenderThreadIdle[local_30] + (local_res20.s.LowPart - local_28)
      ;
    }
    UE::Stats::FThreadIdleStats::FScopeIdle::~FScopeIdle(&local_38);
  }
  if (this->ResultsBuffer == (uchar *)0x0) {
    this->ValidFrameNumber = 0xffffffff;
    this->ResultsBuffer = FirstFrameBuffer;
  }
  return;
}

// ReleaseRHI @ 1454b4f50

void __thiscall FHZBOcclusionTester::ReleaseRHI(FHZBOcclusionTester *this)

{
  byte bVar1;
  Type TVar2;
  
  bVar1 = *(byte *)((longlong)&this->_padding_ + 4);
  TVar2 = (uint)bVar1;
  if (bVar1 == 5) {
    TVar2 = GMaxRHIFeatureLevel;
  }
  if (2 < (int)TVar2) {
    TUniquePtr<FRHIGPUTextureReadback,TDefaultDelete<FRHIGPUTextureReadback>_>::Reset
              (&this->ResultsReadback,(FRHIGPUTextureReadback *)0x0);
    return;
  }
  return;
}

// SetInvalidFrameNumber @ 1454b95c0

void __thiscall FHZBOcclusionTester::SetInvalidFrameNumber(FHZBOcclusionTester *this)

{
  this->ValidFrameNumber = 0xffffffff;
  return;
}

// SetValidFrameNumber @ 1454b9d30

void __thiscall FHZBOcclusionTester::SetValidFrameNumber(FHZBOcclusionTester *this,uint param_1)

{
  this->ValidFrameNumber = param_1 & 0x7fffffff;
  return;
}

// Submit @ 1454bc180

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall
FHZBOcclusionTester::Submit(FHZBOcclusionTester *this,FRDGBuilder *param_1,FViewInfo *param_2)

{
  char cVar1;
  longlong lVar2;
  FGlobalShaderMap *this_00;
  code *pcVar3;
  undefined8 uVar4;
  TRefCountPtr<FRHIBlendState> TVar5;
  TRefCountPtr<FRHIDepthStencilState> TVar6;
  TRefCountPtr<FRHIRasterizerState> TVar7;
  FRDGTexture *pFVar8;
  bool bVar9;
  int iVar10;
  FRDGScope *this_01;
  FRDGTexture *pFVar11;
  undefined8 *puVar12;
  FRDGEventName *pFVar13;
  FLowLevelMemTracker *this_02;
  FPageAllocator *this_03;
  FParameters *pFVar14;
  FShaderParametersMetadata *pFVar15;
  FHZBParameters *pFVar16;
  FShaderType *pFVar17;
  FName this_04;
  EUniformBufferBindingFlags EVar18;
  undefined8 *puVar19;
  uint *puVar20;
  int *piVar21;
  undefined1 auStackY_398 [32];
  undefined8 *local_330;
  FRenderTargetBinding local_328;
  undefined4 local_308;
  undefined4 uStack_304;
  undefined4 local_300;
  undefined4 uStack_2fc;
  FRDGTexture *local_2f8;
  undefined4 local_2f0;
  undefined4 uStack_2ec;
  FRDGTexture *local_2e8;
  TRDGEventScopeGuard<FRDGScope_RHI> local_2e0;
  char local_2d0;
  <lambda_2> local_2c8;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_2a8;
  undefined1 local_298 [8];
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<10>_const_*,std::tuple<>_> local_290;
  FString local_280;
  TIntRect<int>_u_0 local_270;
  TShaderRefBase<FHZBTestPS,FShaderMapPointerTable> local_258;
  FResolveRect local_248;
  FRDGTextureAccess local_238;
  FRDGTextureAccess local_220;
  uint uStack_1fc;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  FRDGEventName local_1e8;
  FRDGEventName local_1d0;
  FHZBParameters local_1b8;
  undefined1 local_e8 [24];
  float local_d0;
  int local_cc;
  undefined4 local_c8;
  undefined1 *local_c4;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined2 local_b4;
  void *local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined1 local_98 [24];
  float local_80;
  int local_7c;
  undefined4 local_78;
  undefined1 *local_74;
  undefined4 local_6c;
  undefined4 local_68;
  undefined2 local_64;
  void *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_398;
  cVar1 = *(char *)((longlong)&param_1->_padding_ + 6);
  puVar19 = (undefined8 *)0x0;
  local_2d0 = '\0';
  if ((cVar1 != '\0') && ((cVar1 != '\x01' || ((param_1->_padding_ & 4) == 0)))) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      local_1f8 = 0;
      uStack_1f4 = 0;
      ::Desc._12_8_ = ZEXT48(uStack_1fc);
      ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
      ::Desc._padding_._4_4_ = 0;
      ::Desc._padding_ = (longlong)u_SubmitHZB;
      ::Desc._padding_ = (longlong)u_SubmitHZB;
      ::Desc._padding_._0_4_ = 0x3b4;
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
      ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
      ::Desc.TraceGpuSpecId = 0;
      ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
      atexit(```FHZBOcclusionTester::Submit'::__l7::Desc::operator()<>'::__l3::<lambda_1>::
             operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__);
      _Init_thread_footer(&::_TSS0);
    }
    local_290._Myfirst._Val = &::Desc;
    local_2e0.State = (FRDGScopeState *)param_1;
    this_01 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                        ((FRDGAllocator *)&param_1->_padding_,(FRDGScope **)param_1);
    param_1->_padding_ = (longlong)this_01;
    local_2e0.Scope = this_01;
    TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
    Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<10>_const_*,std::tuple<>_>_>
              (&(this_01->Impl).Impl,(FRDGScopeState *)param_1,&local_290);
    if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
      FRDGScope::BeginCPU(this_01,(FRHIComputeCommandList *)param_1->_padding_,false);
      FRDGScope::BeginGPU(this_01,(FRHIComputeCommandList *)param_1->_padding_);
    }
    local_2d0 = '\x01';
  }
  if (param_2->_padding_ != 0) {
    local_d0 = FClearValueBinding::None.Value.Color[3];
    local_308 = 0x100;
    local_cc = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
    uStack_304 = 0x100;
    local_c4 = &DAT_10000000100;
    local_e8._0_8_ = 9;
    local_e8._8_8_ = FClearValueBinding::None._0_8_;
    local_e8._16_8_ = FClearValueBinding::None.Value._4_8_;
    local_c8 = 0;
    local_bc = 0x10001;
    local_b8 = 0x1000101;
    local_b4 = 0xff00;
    local_a8 = (void *)0x0;
    local_a0 = 0;
    local_9c = 1;
    local_2f8 = FRDGBuilder::CreateTexture
                          (param_1,(FRDGTextureDesc *)local_e8,L"HZBBoundsCenter",None);
    pFVar11 = FRDGBuilder::CreateTexture
                        (param_1,(FRDGTextureDesc *)local_e8,L"HZBBoundsExtent",None);
    if (local_a8 != (void *)0x0) {
      FMemory::Free(local_a8);
    }
    local_80 = FClearValueBinding::None.Value.Color[3];
    local_300 = 0x100;
    local_7c = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
    uStack_2fc = 0x100;
    local_74 = &DAT_10000000100;
    local_98._0_8_ = 9;
    local_98._8_8_ = FClearValueBinding::None._0_8_;
    local_98._16_8_ = FClearValueBinding::None.Value._4_8_;
    local_78 = 0;
    local_6c = 0x10001;
    local_68 = 0x2000101;
    local_64 = 0xff00;
    local_58 = (void *)0x0;
    local_50 = 0;
    local_4c = 1;
    local_2e8 = FRDGBuilder::CreateTexture
                          (param_1,(FRDGTextureDesc *)local_98,L"HZBResultsGPU",None);
    if (local_58 != (void *)0x0) {
      FMemory::Free(local_58);
    }
    puVar12 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x40,0x10);
    if (puVar12 == (undefined8 *)0x0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Object",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                         ,0x61,L"");
      if (bVar9) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    else {
      puVar12[2] = 0;
      *puVar12 = &___7__TObject_VFHZBOcclusionUpdateTexturesParameters___FRDGAllocator__6B_;
      *(undefined4 *)(puVar12 + 3) = 0;
      *(undefined8 *)((longlong)puVar12 + 0x1c) = 0;
      puVar12[5] = 0;
      *(undefined4 *)(puVar12 + 6) = 0;
      *(undefined8 *)((longlong)puVar12 + 0x34) = 0;
      puVar19 = puVar12;
    }
    local_330 = puVar19;
    if ((((undefined8 **)param_1->_padding_ <= &local_330) &&
        (&local_330 <
         (undefined8 **)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4))) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar9)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar10 = (int)param_1->_padding_;
    piVar21 = (int *)((longlong)&param_1->_padding_ + 4);
    if (iVar10 == *piVar21) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,(ForAnyElementType *)&param_1->_padding_,piVar21);
    }
    pFVar8 = local_2f8;
    *(int *)&param_1->_padding_ = iVar10 + 1;
    *(undefined8 **)(param_1->_padding_ + (longlong)iVar10 * 8) = local_330;
    FRDGTextureAccess::FRDGTextureAccess(&local_238,local_2f8,CopyDest);
    puVar19[2] = local_238.Texture;
    *(FRDGTextureSubresourceRange *)(puVar19 + 3) = local_238.SubresourceRange;
    puVar19[4] = local_238._16_8_;
    FRDGTextureAccess::FRDGTextureAccess(&local_220,pFVar11,CopyDest);
    puVar19[5] = local_220.Texture;
    *(FRDGTextureSubresourceRange *)(puVar19 + 6) = local_220.SubresourceRange;
    local_2c8.BoundsCenterTexture = pFVar8;
    puVar19[7] = local_220._16_8_;
    local_2c8.Primitives.AllocatorInstance.Data = (this->Primitives).AllocatorInstance.Data;
    (this->Primitives).AllocatorInstance.Data = (FOcclusionPrimitive *)0x0;
    local_2c8.Primitives.ArrayNum = (this->Primitives).ArrayNum;
    local_2c8.Primitives.ArrayMax = (this->Primitives).ArrayMax;
    (this->Primitives).ArrayNum = 0;
    (this->Primitives).ArrayMax = 0;
    local_2c8.BoundsExtentTexture = pFVar11;
    pFVar13 = FRDGEventName::FRDGEventName(&local_1e8,1,L"UpdateTextures");
    FRDGBuilder::
    AddPass<FHZBOcclusionUpdateTexturesParameters,_FHZBOcclusionTester::Submit_::__l13::<lambda_2>_>
              (param_1,pFVar13,(FHZBOcclusionUpdateTexturesParameters *)(puVar19 + 2),Copy,
               &local_2c8);
    if (local_1e8.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
    {
      FMemory::Free(local_1e8.FormattedEventName.Data.AllocatorInstance.Data);
    }
    if (local_2c8.Primitives.AllocatorInstance.Data != (FOcclusionPrimitive *)0x0) {
      puVar20 = (uint *)((longlong)
                         &local_2c8.Primitives.AllocatorInstance.Data[-1].Extent.field0_0x0 + 0x10);
      MemoryTrace_Free((ulong64)puVar20,0,0);
      if (FLowLevelMemTracker::EnabledState != Disabled) {
        this_02 = FLowLevelMemTracker::TrackerInstance;
        if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
          this_02 = FLowLevelMemTracker::Construct();
        }
        FLowLevelMemTracker::OnLowLevelFree(this_02,Default,puVar20,FMalloc,true);
      }
      piVar21 = (int *)((longlong)puVar20 - (ulonglong)*puVar20);
      LOCK();
      iVar10 = *piVar21;
      *piVar21 = *piVar21 + -1;
      UNLOCK();
      if (iVar10 == 1) {
        lVar2 = *(longlong *)(piVar21 + 0x10);
        MemoryTrace_UnmarkAllocAsHeap((ulong64)piVar21,0,0);
        if (lVar2 - (longlong)piVar21 == 0x10000) {
          this_03 = FPageAllocator::Get();
          FPageAllocator::Free(this_03,piVar21);
        }
        else {
          (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,piVar21);
        }
      }
    }
    pFVar14 = FRDGAllocator::Alloc<FHZBTestPS::FParameters>((FRDGAllocator *)&param_1->_padding_);
    pFVar15 = FViewUniformShaderParameters::GetStructMetadata();
    local_328.LoadAction = ENoAction;
    local_328.MipIndex = '\0';
    local_328.ArraySlice = -1;
    EVar18 = Static;
    if (pFVar15->BindingFlags != StaticAndShader) {
      EVar18 = pFVar15->BindingFlags;
    }
    lVar2 = param_2->_padding_;
    pFVar14->BoundsCenterTexture = local_2f8;
    pFVar14->BoundsExtentTexture = pFVar11;
    local_328.ResolveTexture = (FRDGTexture *)CONCAT71(local_328.ResolveTexture._1_7_,EVar18);
    pFVar11 = local_328.ResolveTexture;
    local_328.Texture = local_2e8;
    local_328.ResolveTexture = (FRDGTexture *)0x0;
    *(longlong *)&pFVar14->View = lVar2;
    *(FRDGTexture **)&(pFVar14->View).field_0x8 = pFVar11;
    bVar9 = FRenderTargetBinding::Validate(&local_328);
    if ((!bVar9) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Validate()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                           ,0x216,L""), bVar9)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (pFVar14->RenderTargets).Output.Elements[0].Texture = local_328.Texture;
    (pFVar14->RenderTargets).Output.Elements[0].ResolveTexture = local_328.ResolveTexture;
    (pFVar14->RenderTargets).Output.Elements[0].LoadAction = local_328.LoadAction;
    (pFVar14->RenderTargets).Output.Elements[0].MipIndex = local_328.MipIndex;
    (pFVar14->RenderTargets).Output.Elements[0].ArraySlice = local_328.ArraySlice;
    *(undefined4 *)&(pFVar14->RenderTargets).Output.Elements[0].field_0x14 = local_328._20_4_;
    pFVar16 = GetHZBParameters(&local_1b8,param_1,param_2,FurthestHZB);
    local_2f0 = 0x3b800000;
    uStack_2ec = 0x3b800000;
    (pFVar14->HZBParameters).HZBTexture = pFVar16->HZBTexture;
    (pFVar14->HZBParameters).HZBSampler = pFVar16->HZBSampler;
    (pFVar14->HZBParameters).HZBTextureSampler = pFVar16->HZBTextureSampler;
    (pFVar14->HZBParameters).ClosestHZBTexture = pFVar16->ClosestHZBTexture;
    (pFVar14->HZBParameters).ClosestHZBTextureSampler = pFVar16->ClosestHZBTextureSampler;
    (pFVar14->HZBParameters).FurthestHZBTexture = pFVar16->FurthestHZBTexture;
    (pFVar14->HZBParameters).FurthestHZBTextureSampler = pFVar16->FurthestHZBTextureSampler;
    (pFVar14->HZBParameters).HZBSize.field0_0x0 = (pFVar16->HZBSize).field0_0x0;
    (pFVar14->HZBParameters).HZBViewSize.field0_0x0 = (pFVar16->HZBViewSize).field0_0x0;
    (pFVar14->HZBParameters).HZBViewRect.field0_0x0._s_0.Min.field0_0x0 =
         (pFVar16->HZBViewRect).field0_0x0._s_0.Min.field0_0x0;
    (pFVar14->HZBParameters).HZBViewRect.field0_0x0._s_0.Max.field0_0x0 =
         (pFVar16->HZBViewRect).field0_0x0._s_0.Max.field0_0x0;
    (pFVar14->HZBParameters).ViewportUVToHZBBufferUV.field0_0x0 =
         (pFVar16->ViewportUVToHZBBufferUV).field0_0x0;
    uVar4 = *(undefined8 *)((longlong)&(pFVar16->HZBUvFactorAndInvFactor).field0_0x0 + 8);
    *(undefined8 *)&(pFVar14->HZBParameters).HZBUvFactorAndInvFactor.field0_0x0 =
         *(undefined8 *)&(pFVar16->HZBUvFactorAndInvFactor).field0_0x0;
    *(undefined8 *)((longlong)&(pFVar14->HZBParameters).HZBUvFactorAndInvFactor.field0_0x0 + 8) =
         uVar4;
    uVar4 = *(undefined8 *)((longlong)&(pFVar16->HZBUVToScreenUVScaleBias).field0_0x0 + 8);
    *(undefined8 *)&(pFVar14->HZBParameters).HZBUVToScreenUVScaleBias.field0_0x0 =
         *(undefined8 *)&(pFVar16->HZBUVToScreenUVScaleBias).field0_0x0;
    *(undefined8 *)((longlong)&(pFVar14->HZBParameters).HZBUVToScreenUVScaleBias.field0_0x0 + 8) =
         uVar4;
    (pFVar14->HZBParameters).HZBBaseTexelSize.field0_0x0 = (pFVar16->HZBBaseTexelSize).field0_0x0;
    (pFVar14->HZBParameters).SamplePixelToHZBUV.field0_0x0 =
         (pFVar16->SamplePixelToHZBUV).field0_0x0;
    (pFVar14->HZBParameters).bIsHZBValid = pFVar16->bIsHZBValid;
    (pFVar14->HZBParameters).bIsFurthestHZBValid = pFVar16->bIsFurthestHZBValid;
    (pFVar14->HZBParameters).bIsClosestHZBValid = pFVar16->bIsClosestHZBValid;
    uVar4 = *(undefined8 *)((longlong)&(pFVar16->ScreenPosToHZBUVScaleBias).field0_0x0 + 8);
    *(undefined8 *)&(pFVar14->HZBParameters).ScreenPosToHZBUVScaleBias.field0_0x0 =
         *(undefined8 *)&(pFVar16->ScreenPosToHZBUVScaleBias).field0_0x0;
    *(undefined8 *)((longlong)&(pFVar14->HZBParameters).ScreenPosToHZBUVScaleBias.field0_0x0 + 8) =
         uVar4;
    (pFVar14->HZBParameters).DummyHZB.field0_0x0 = (pFVar16->DummyHZB).field0_0x0;
    pFVar14->BoundsCenterSampler =
         TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
         ::StaticResource.StateRHI.Reference;
    pFVar14->BoundsExtentSampler =
         TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
         ::StaticResource.StateRHI.Reference;
    (pFVar14->InvTestTargetSize).field0_0x0 = (TVector2<float>_u_0)0x3b8000003b800000;
    this_00 = param_2->ShaderMap;
    pFVar17 = (FShaderType *)FHZBTestPS::GetStaticType();
    FGlobalShaderMap::GetShader(this_00,&local_2a8,pFVar17,0);
    if (local_2a8.ShaderContent == (FShader *)0x0) {
      this_04 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_298);
      ::FName::ToString((FName *)this_04,&local_280);
      FHZBTestPS::GetStaticType();
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Shader.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                         ,0xc0,L"Failed to find shader type %s in Platform %s");
      if (local_280.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_280.Data.AllocatorInstance.Data);
      }
      if (bVar9) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    FHZBTestPS::GetStaticType();
    TVar7 = TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
            ::StaticResource.StateRHI;
    TVar6 = TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
            ::StaticResource.StateRHI;
    TVar5 = TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
            ::StaticResource.StateRHI;
    local_258.ShaderContent = (FHZBTestPS *)local_2a8.ShaderContent;
    local_258.ShaderMap = local_2a8.ShaderMap;
    local_270._s_0.Min.field0_0x0 =
         (TIntPoint<int>)(TIntPoint<int>)___xmm_00000100000001000000000000000000;
    local_270._s_0.Max.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>)_UNK_150fabfc8;
    pFVar13 = FRDGEventName::FRDGEventName(&local_1d0,1,L"TestHZB");
    FPixelShaderUtils::AddFullscreenPass<FHZBTestPS>
              (param_1,param_2->ShaderMap,pFVar13,&local_258,pFVar14,
               (TIntRect<int> *)&local_270._s_0,TVar5.Reference,TVar7.Reference,TVar6.Reference,0,
               None);
    if (local_1d0.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
    {
      FMemory::Free(local_1d0.FormattedEventName.Data.AllocatorInstance.Data);
    }
    local_248.X1 = ___xmm_ffffffffffffffffffffffffffffffff;
    local_248.Y1 = _UNK_15060db24;
    local_248.X2 = _UNK_15060db28;
    local_248.Y2 = _UNK_15060db2c;
    AddEnqueueCopyPass(param_1,(this->ResultsReadback).Ptr,local_2e8,&local_248,0);
  }
  if (local_2d0 != '\0') {
    TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_2e0);
  }
  return;
}

// UnmapResults @ 1454be7f0

void __thiscall
FHZBOcclusionTester::UnmapResults(FHZBOcclusionTester *this,FRHICommandListImmediate *param_1)

{
  FRHIGPUMask FVar1;
  code *pcVar2;
  bool bVar3;
  
  if (this->ResultsBuffer == (uchar *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ResultsBuffer",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneOcclusion.cpp"
                       ,0x369,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (this->ValidFrameNumber != 0xffffffff) {
    FVar1.GPUMask = *(uint *)&param_1->field_0x29c;
    FRHIComputeCommandList::SetGPUMask
              ((FRHIComputeCommandList *)param_1,
               (FRHIGPUMask)(uint)((this->ResultsReadback).Ptr)->_padding_);
    FRHIGPUTextureReadback::Unlock((this->ResultsReadback).Ptr);
    FRHIComputeCommandList::SetGPUMask((FRHIComputeCommandList *)param_1,FVar1);
  }
  this->ResultsBuffer = (uchar *)0x0;
  return;
}

// GetGPUSizeBytes @ 1454f3e50

/* WARNING: Enum "Type": Some values do not have unique names */

ulong64 __thiscall FHZBOcclusionTester::GetGPUSizeBytes(FHZBOcclusionTester *this,bool param_1)

{
  FRHIGPUTextureReadback *this_00;
  ulong64 uVar1;
  FName local_res8;
  FString local_18;
  
  this_00 = (this->ResultsReadback).Ptr;
  if (this_00 != (FRHIGPUTextureReadback *)0x0) {
    uVar1 = FRHIGPUTextureReadback::GetGPUSizeBytes(this_00);
    if (((param_1) && (uVar1 != 0)) && (4 < (byte)LogRenderer._0_1_)) {
      local_res8 = *(FName *)(this_00->_padding_ + 0x1c);
      ::FName::ToString(&local_res8,&local_18);
      UE::Logging::Private::BasicLog<5>
                ((FStaticBasicLogRecord *)&PTR_u_LogSizes_Textur_150fb8768,
                 (FLogCategoryBase *)&LogRenderer);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    return uVar1;
  }
  return 0;
}

