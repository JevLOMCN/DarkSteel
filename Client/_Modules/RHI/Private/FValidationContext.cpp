// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 76

// FValidationContext @ 145cd1e00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

FValidationContext * __thiscall
FValidationContext::FValidationContext(FValidationContext *this,EType param_1)

{
  int *piVar1;
  int *piVar2;
  FState *this_00;
  FString *this_01;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  FValidationContext *pFVar6;
  FBoundUniformBuffers *this_02;
  longlong lVar7;
  FBoundUniformBuffers *pFVar8;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7IRHICommandContext__6B_;
  FRHIRenderPassInfo::FRHIRenderPassInfo((FRHIRenderPassInfo *)&this->_padding_);
  this->Type = param_1;
  this_00 = &this->State;
  this->_padding_ = (longlong)&___7FValidationContext__6B_;
  this->RHIContext = (IRHICommandContext *)0x0;
  RHIValidation::FTracker::FTracker(&this_00->TrackerInstance,Graphics);
  piVar1 = &(this->State).StaticUniformBuffers.Bindings.ArrayMax;
  (this->State).StaticUniformBuffers.Bindings.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  this_02 = &(this->State).BoundUniformBuffers;
  *piVar1 = 0;
  (this->State).StaticUniformBuffers.Bindings.ArrayNum = 0;
  (this->State).StaticUniformBuffers.bInSetPipelineStateCall = false;
  lVar7 = 0xc;
  pFVar8 = this_02;
  do {
    piVar2 = &pFVar8->StageBindings[0].Buffers.ArrayMax;
    pFVar8->StageBindings[0].Buffers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar8->StageBindings[0].Buffers.ArrayNum = 0;
    *piVar2 = 0;
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0x20,(ForAnyElementType *)pFVar8,0,piVar2);
    pFVar8 = (FBoundUniformBuffers *)(pFVar8->StageBindings + 1);
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  FRHIRenderPassInfo::FRHIRenderPassInfo(&(this->State).RenderPassInfo);
  (this->State).PreviousRenderPassName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this_01 = &(this->State).RenderPassName;
  (this_01->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->State).RenderPassName.Data.ArrayNum = 0;
  (this->State).RenderPassName.Data.ArrayMax = 0;
  (this->State).PreviousRenderPassName.Data.ArrayNum = 0;
  (this->State).PreviousRenderPassName.Data.ArrayMax = 0;
  (this->State).ComputePassName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->State).ComputePassName.Data.ArrayNum = 0;
  (this->State).ComputePassName.Data.ArrayMax = 0;
  (this->State).BoundShaders[0] = (FRHIShader *)0x0;
  (this->State).BoundShaders[1] = (FRHIShader *)0x0;
  (this->State).BoundShaders[2] = (FRHIShader *)0x0;
  (this->State).BoundShaders[3] = (FRHIShader *)0x0;
  (this->State).BoundShaders[4] = (FRHIShader *)0x0;
  (this->State).BoundShaders[5] = (FRHIShader *)0x0;
  (this->State).BoundShaders[6] = (FRHIShader *)0x0;
  (this->State).BoundShaders[7] = (FRHIShader *)0x0;
  (this->State).BoundShaders[8] = (FRHIShader *)0x0;
  (this->State).BoundShaders[9] = (FRHIShader *)0x0;
  (this->State).BoundShaders[10] = (FRHIShader *)0x0;
  (this->State).BoundShaders[0xb] = (FRHIShader *)0x0;
  (this->State).bGfxPSOSet = false;
  (this->State).bInsideBeginRenderPass = false;
  ::FString::Reset(this_01,0);
  ::FString::Reset(&(this->State).PreviousRenderPassName,0);
  ::FString::Reset(&(this->State).ComputePassName,0);
  (this->State).BoundShaders[0] = (FRHIShader *)0x0;
  (this->State).BoundShaders[1] = (FRHIShader *)0x0;
  (this->State).BoundShaders[2] = (FRHIShader *)0x0;
  (this->State).BoundShaders[3] = (FRHIShader *)0x0;
  (this->State).BoundShaders[4] = (FRHIShader *)0x0;
  (this->State).BoundShaders[5] = (FRHIShader *)0x0;
  (this->State).BoundShaders[6] = (FRHIShader *)0x0;
  (this->State).BoundShaders[7] = (FRHIShader *)0x0;
  (this->State).BoundShaders[8] = (FRHIShader *)0x0;
  (this->State).BoundShaders[9] = (FRHIShader *)0x0;
  (this->State).BoundShaders[10] = (FRHIShader *)0x0;
  (this->State).BoundShaders[0xb] = (FRHIShader *)0x0;
  RHIValidation::FTracker::ResetAllUAVState(&this_00->TrackerInstance);
  iVar3 = *piVar1;
  (this->State).StaticUniformBuffers.Bindings.ArrayNum = 0;
  if (iVar3 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)&(this->State).StaticUniformBuffers,0,piVar1);
  }
  if (((this->State).StaticUniformBuffers.bInSetPipelineStateCall != false) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bInSetPipelineStateCall",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIValidation.cpp"
                         ,0x5ad,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar6 = (FValidationContext *)(*pcVar4)();
    return pFVar6;
  }
  for (; (FRHIRenderPassInfo *)this_02 != &(this->State).RenderPassInfo;
      this_02 = (FBoundUniformBuffers *)(&this_02->StageBindings[0].Buffers + 1)) {
    RHIValidation::FStageBoundUniformBuffers::Reset(this_02->StageBindings);
  }
  this->_padding_ = (longlong)this_00;
  return this;
}

// GetLowestLevelContext @ 145cdcba0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

IRHIComputeContext * __thiscall FValidationContext::GetLowestLevelContext(FValidationContext *this)

{
  return (IRHIComputeContext *)this->RHIContext;
}

// RHIBeginBreadcrumbGPU @ 145ce2db0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __thiscall
FValidationContext::RHIBeginBreadcrumbGPU(FValidationContext *this,FRHIBreadcrumbNode *param_1)

{
  RHIValidation::FTracker::BeginBreadcrumbGPU((FTracker *)this->_padding_,param_1);
                    /* WARNING: Could not recover jumptable at 0x000145ce2de0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->RHIContext->_padding_ + 200))(this->RHIContext,param_1);
  return;
}

// RHIBeginParallelRenderPass @ 145ce2df0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __thiscall
FValidationContext::RHIBeginParallelRenderPass
          (FValidationContext *this,TSharedPtr<FRHIParallelRenderPassInfo,1> *param_1,
          wchar_t *param_2)

{
  IRHICommandContext *pIVar1;
  code *pcVar2;
  FRHIParallelRenderPassInfo *local_18;
  TReferenceControllerBase<1> *local_10;
  
  pIVar1 = this->RHIContext;
  pcVar2 = *(code **)(pIVar1->_padding_ + 0x238);
  local_18 = param_1->Object;
  local_10 = (param_1->SharedReferenceCount).ReferenceController;
  if (local_10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_10->SharedReferenceCount = (atomic<int>)((int)local_10->SharedReferenceCount + 1);
    UNLOCK();
  }
  (*pcVar2)(pIVar1,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// RHIBeginRenderPass @ 145ce2e40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FValidationContext::RHIBeginRenderPass
          (FValidationContext *this,FRHIRenderPassInfo *param_1,wchar_t *param_2)

{
  byte bVar1;
  ERHIPipeline EVar2;
  uint uVar3;
  FRHITexture *pFVar4;
  FTracker *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  Type TVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  undefined4 uVar16;
  FRHITexture **ppFVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  uint local_res8;
  int local_res20;
  undefined4 uStack_2c4;
  undefined2 local_273;
  undefined1 local_271;
  undefined2 local_26b;
  undefined1 local_269;
  undefined2 local_263;
  undefined1 local_261;
  undefined2 local_25b;
  undefined1 local_259;
  undefined2 local_253;
  undefined1 local_251;
  undefined2 local_24b;
  undefined1 local_249;
  undefined2 local_243;
  undefined1 local_241;
  FOperation local_240;
  FOperation local_1f8;
  FOperation local_1b0;
  FOperation local_168;
  FOperation local_120;
  FOperation local_d8;
  FOperation local_90;
  
  if (((this->State).bInsideBeginRenderPass != false) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!State.bInsideBeginRenderPass",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIValidationContext.h"
                         ,0x41b,L"Trying to begin RenderPass \'%s\', but already inside \'%s\'!"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if ((param_2 == (wchar_t *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InName!=nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIValidationContext.h"
                         ,0x41c,L"RenderPass should have a name!"), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  (this->State).bInsideBeginRenderPass = true;
  FRHIRenderPassInfo::operator=(&(this->State).RenderPassInfo,param_1);
  ::FString::operator=(&(this->State).RenderPassName,param_2);
  local_res20 = 0;
  iVar20 = 0;
  local_res8 = 0;
  iVar21 = 0;
  ppFVar17 = &(this->State).RenderPassInfo.ColorRenderTargets.Elements[0].ResolveTarget;
  do {
    if (((FColorEntry *)(ppFVar17 + -1))->RenderTarget == (FRHITexture *)0x0) {
      if ((*ppFVar17 != (FRHITexture *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("RTV.ResolveTarget == nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIValidationContext.h"
                             ,0x429,L"Render target is null, but resolve target is not."), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    else {
      bVar1 = *(uchar *)((longlong)ppFVar17 + 0xc);
      lVar10 = (**(code **)(((FColorEntry *)(ppFVar17 + -1))->RenderTarget->_padding_ + 0x20))();
      uVar19 = (uint)(*(ushort *)(lVar10 + 0x2c) >> (bVar1 & 0x1f));
      iVar8 = *(int *)(lVar10 + 0x24) >> (bVar1 & 0x1f);
      iVar18 = *(int *)(lVar10 + 0x28) >> (bVar1 & 0x1f);
      iVar14 = 1;
      if (1 < iVar8) {
        iVar14 = iVar8;
      }
      iVar8 = 1;
      if (1 < iVar18) {
        iVar8 = iVar18;
      }
      uVar22 = 1;
      if (1 < uVar19) {
        uVar22 = uVar19;
      }
      if (((((local_res20 != UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.X) ||
            (iVar20 != UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Y)) ||
           (local_res8 != UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z)) &&
          (((local_res20 != iVar14 || (iVar20 != iVar8)) || (local_res8 != uVar22)))) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("ViewDimensions.IsZero() || ViewDimensions == MipDimensions",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIValidationContext.h"
                             ,0x42f,
                             L"Render target size mismatch (RT%d: %dx%d vs. Expected: %dx%d). All render and depth target views must have the same effective dimensions."
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar19 = *(uint *)(ppFVar17 + 1);
      pFVar5 = (FTracker *)this->_padding_;
      uVar13 = ~uVar19 >> 0x1f;
      uVar12 = 0;
      if (-1 < (int)uVar19) {
        uVar12 = uVar19;
      }
      bVar1 = *(uchar *)((longlong)ppFVar17 + 0xc);
      local_240.field1_0x8.Data_BeginTransition.Identity.Resource =
           (FResource *)
           (**(code **)(((FColorEntry *)(ppFVar17 + -1))->RenderTarget->_padding_ + 8))();
      uVar15 = uVar13;
      if ((int)uVar19 < 0) {
        uVar15 = (local_240.field1_0x8.Data_BeginTransition.Identity.Resource)->NumArraySlices;
      }
      uVar3 = (local_240.field1_0x8.Data_BeginTransition.Identity.Resource)->NumPlanes;
      EVar2 = pFVar5->Pipeline;
      LOCK();
      ((local_240.field1_0x8.Data_BeginTransition.Identity.Resource)->NumOpRefs).Counter =
           ((local_240.field1_0x8.Data_BeginTransition.Identity.Resource)->NumOpRefs).Counter + 1;
      UNLOCK();
      local_240._4_4_ = uStack_2c4;
      local_240.Type = Assert;
      local_240.field1_0x8._12_4_ = 1;
      local_240.field1_0x8._8_4_ = (uint)bVar1;
      local_240.field1_0x8.Data_AliasingOverlap.CreateBacktrace = (void *)CONCAT44(uVar15,uVar12);
      local_240.field1_0x8._24_8_ = (ulonglong)uVar3 << 0x20;
      local_240.field1_0x8._36_1_ = EVar2;
      local_240.field1_0x8._32_4_ = 0x1000;
      local_240.field1_0x8._37_2_ = local_273;
      local_240.field1_0x8._39_1_ = local_271;
      RHIValidation::FTracker::AddOp(pFVar5,&local_240);
      local_res8 = uVar22;
      local_res20 = iVar14;
      iVar20 = iVar8;
      if (*ppFVar17 != (FRHITexture *)0x0) {
        lVar10 = (**(code **)(((FColorEntry *)(ppFVar17 + -1))->RenderTarget->_padding_ + 0x20))();
        lVar11 = (**(code **)((*ppFVar17)->_padding_ + 0x20))();
        if (((*(int *)(lVar10 + 0x24) != *(int *)(lVar11 + 0x24)) ||
            (*(int *)(lVar10 + 0x28) != *(int *)(lVar11 + 0x28))) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("RenderTargetDesc.Extent == ResolveTargetDesc.Extent",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIValidationContext.h"
                               ,0x441,L"Render target extent must match resolve target extent."),
           bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if ((*(char *)(lVar10 + 0x33) != *(char *)(lVar11 + 0x33)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("RenderTargetDesc.Format == ResolveTargetDesc.Format",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIValidationContext.h"
                               ,0x442,L"Render target format must match resolve target format."),
           bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar5 = (FTracker *)this->_padding_;
        bVar1 = *(uchar *)((longlong)ppFVar17 + 0xc);
        local_1f8.field1_0x8.Data_BeginTransition.Identity.Resource =
             (FResource *)(**(code **)((*ppFVar17)->_padding_ + 8))();
        if ((int)uVar19 < 0) {
          uVar13 = (local_1f8.field1_0x8.Data_BeginTransition.Identity.Resource)->NumArraySlices;
        }
        uVar19 = (local_1f8.field1_0x8.Data_BeginTransition.Identity.Resource)->NumPlanes;
        EVar2 = pFVar5->Pipeline;
        LOCK();
        ((local_1f8.field1_0x8.Data_BeginTransition.Identity.Resource)->NumOpRefs).Counter =
             ((local_1f8.field1_0x8.Data_BeginTransition.Identity.Resource)->NumOpRefs).Counter + 1;
        UNLOCK();
        local_1f8._4_4_ = uStack_2c4;
        local_1f8.Type = Assert;
        local_1f8.field1_0x8._12_4_ = 1;
        local_1f8.field1_0x8._8_4_ = (uint)bVar1;
        local_1f8.field1_0x8.Data_AliasingOverlap.CreateBacktrace = (void *)CONCAT44(uVar13,uVar12);
        local_1f8.field1_0x8._24_8_ = (ulonglong)uVar19 << 0x20;
        local_1f8.field1_0x8._36_1_ = EVar2;
        local_1f8.field1_0x8._32_4_ = 0x4000;
        local_1f8.field1_0x8._37_2_ = local_26b;
        local_1f8.field1_0x8._39_1_ = local_269;
        RHIValidation::FTracker::AddOp(pFVar5,&local_1f8);
      }
    }
    iVar21 = iVar21 + 1;
    ppFVar17 = ppFVar17 + 3;
  } while (iVar21 < 8);
  pFVar4 = (this->State).RenderPassInfo.DepthStencilRenderTarget.DepthStencilTarget;
  if (pFVar4 != (FRHITexture *)0x0) {
    lVar10 = (**(code **)(pFVar4->_padding_ + 0x20))();
    iVar21 = 1;
    if (1 < *(int *)(lVar10 + 0x24)) {
      iVar21 = *(int *)(lVar10 + 0x24);
    }
    iVar14 = 1;
    if (1 < *(int *)(lVar10 + 0x28)) {
      iVar14 = *(int *)(lVar10 + 0x28);
    }
    uVar19 = 1;
    if (1 < *(ushort *)(lVar10 + 0x2c)) {
      uVar19 = (uint)*(ushort *)(lVar10 + 0x2c);
    }
    if ((((local_res20 != UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.X) ||
         (iVar20 != UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Y)) ||
        (local_res8 != UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z)) &&
       ((((local_res20 != iVar21 || (iVar20 != iVar14)) || (local_res8 != uVar19)) &&
        (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                           ("ViewDimensions.IsZero() || ViewDimensions == MipDimensions",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIValidationContext.h"
                            ,0x44e,
                            L"Depth target size mismatch (Depth: %dx%d vs. Expected: %dx%d). All render and depth target views must have the same effective dimensions."
                           ), bVar7)))) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if ((this->State).RenderPassInfo.DepthStencilRenderTarget.ResolveTarget != (FRHITexture *)0x0) {
      lVar10 = (**(code **)(((this->State).RenderPassInfo.DepthStencilRenderTarget.
                            DepthStencilTarget)->_padding_ + 0x20))();
      lVar11 = (**(code **)(((this->State).RenderPassInfo.DepthStencilRenderTarget.ResolveTarget)->
                            _padding_ + 0x20))();
      if (((*(int *)(lVar10 + 0x24) != *(int *)(lVar11 + 0x24)) ||
          (*(int *)(lVar10 + 0x28) != *(int *)(lVar11 + 0x28))) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("DepthStencilTargetDesc.Extent == ResolveTargetDesc.Extent",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIValidationContext.h"
                             ,0x456,L"Depth stencil target extent must match resolve target extent."
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if ((((*(char *)(lVar10 + 0x32) != '\0') && (*(char *)(lVar10 + 0x32) != '\x01')) ||
          ((*(char *)(lVar11 + 0x32) != '\0' && (*(char *)(lVar11 + 0x32) != '\x01')))) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("DepthStencilTargetDesc.IsTexture2D() && ResolveTargetDesc.IsTexture2D()"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIValidationContext.h"
                             ,0x457,L"Only 2D depth stencil resolves are supported."), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
  }
  TVar9 = (this->State).RenderPassInfo.DepthStencilRenderTarget.ExclusiveDepthStencil.Value &
          DepthMask;
  if (TVar9 != DepthNop) {
    uVar16 = 0x200;
    if (TVar9 == DepthWrite) {
      uVar16 = 0x8000;
    }
    if (((this->State).RenderPassInfo.DepthStencilRenderTarget.DepthStencilTarget ==
         (FRHITexture *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("DSV.DepthStencilTarget",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIValidationContext.h"
                           ,0x464,
                           L"Depth read/write is enabled but no depth stencil texture is bound."),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar5 = (FTracker *)this->_padding_;
    local_1b0.field1_0x8.Data_BeginTransition.Identity.Resource =
         (FResource *)
         (**(code **)(((this->State).RenderPassInfo.DepthStencilRenderTarget.DepthStencilTarget)->
                      _padding_ + 8))();
    EVar2 = pFVar5->Pipeline;
    uVar19 = (local_1b0.field1_0x8.Data_BeginTransition.Identity.Resource)->NumArraySlices;
    LOCK();
    ((local_1b0.field1_0x8.Data_BeginTransition.Identity.Resource)->NumOpRefs).Counter =
         ((local_1b0.field1_0x8.Data_BeginTransition.Identity.Resource)->NumOpRefs).Counter + 1;
    UNLOCK();
    local_1b0._4_4_ = uStack_2c4;
    local_1b0.Type = Assert;
    local_1b0.field1_0x8.Data_AliasingOverlap.ResourceAfter =
         (FResource *)
         ((ulonglong)(local_1b0.field1_0x8.Data_BeginTransition.Identity.Resource)->NumMips << 0x20)
    ;
    local_1b0.field1_0x8.Data_AliasingOverlap.CreateBacktrace = (void *)((ulonglong)uVar19 << 0x20);
    local_1b0.field1_0x8._24_8_ = 0x100000000;
    local_1b0.field1_0x8._36_1_ = EVar2;
    local_1b0.field1_0x8._32_4_ = uVar16;
    local_1b0.field1_0x8._37_2_ = local_263;
    local_1b0.field1_0x8._39_1_ = local_261;
    RHIValidation::FTracker::AddOp(pFVar5,&local_1b0);
    pFVar4 = (this->State).RenderPassInfo.DepthStencilRenderTarget.ResolveTarget;
    if (pFVar4 != (FRHITexture *)0x0) {
      pFVar5 = (FTracker *)this->_padding_;
      local_168.field1_0x8.Data_BeginTransition.Identity.Resource =
           (FResource *)(**(code **)(pFVar4->_padding_ + 8))(&pFVar4->_padding_);
      EVar2 = pFVar5->Pipeline;
      uVar19 = (local_168.field1_0x8.Data_BeginTransition.Identity.Resource)->NumArraySlices;
      LOCK();
      ((local_168.field1_0x8.Data_BeginTransition.Identity.Resource)->NumOpRefs).Counter =
           ((local_168.field1_0x8.Data_BeginTransition.Identity.Resource)->NumOpRefs).Counter + 1;
      UNLOCK();
      local_168._4_4_ = uStack_2c4;
      local_168.Type = Assert;
      local_168.field1_0x8.Data_AliasingOverlap.ResourceAfter =
           (FResource *)
           ((ulonglong)(local_168.field1_0x8.Data_BeginTransition.Identity.Resource)->NumMips <<
           0x20);
      local_168.field1_0x8.Data_AliasingOverlap.CreateBacktrace =
           (void *)((ulonglong)uVar19 << 0x20);
      local_168.field1_0x8._24_8_ = 0x100000000;
      local_168.field1_0x8._36_1_ = EVar2;
      local_168.field1_0x8._32_4_ = 0x4000;
      local_168.field1_0x8._37_2_ = local_25b;
      local_168.field1_0x8._39_1_ = local_259;
      RHIValidation::FTracker::AddOp(pFVar5,&local_168);
    }
  }
  TVar9 = (this->State).RenderPassInfo.DepthStencilRenderTarget.ExclusiveDepthStencil.Value &
          StencilMask;
  if (TVar9 != DepthNop) {
    uVar16 = 0x200;
    if (TVar9 == DepthNop_StencilWrite) {
      uVar16 = 0x8000;
    }
    if (((this->State).RenderPassInfo.DepthStencilRenderTarget.DepthStencilTarget ==
         (FRHITexture *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("DSV.DepthStencilTarget",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIValidationContext.h"
                           ,0x474,
                           L"Stencil read/write is enabled but no depth stencil texture is bound."),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    lVar10 = (**(code **)(((this->State).RenderPassInfo.DepthStencilRenderTarget.DepthStencilTarget)
                          ->_padding_ + 0x20))();
    if ((*(char *)(lVar10 + 0x33) == '\v') || (*(char *)(lVar10 + 0x33) == ',')) {
      pFVar5 = (FTracker *)this->_padding_;
      local_120.field1_0x8.Data_BeginTransition.Identity.Resource =
           (FResource *)
           (**(code **)(((this->State).RenderPassInfo.DepthStencilRenderTarget.DepthStencilTarget)->
                        _padding_ + 8))();
      EVar2 = pFVar5->Pipeline;
      uVar19 = (local_120.field1_0x8.Data_BeginTransition.Identity.Resource)->NumArraySlices;
      LOCK();
      ((local_120.field1_0x8.Data_BeginTransition.Identity.Resource)->NumOpRefs).Counter =
           ((local_120.field1_0x8.Data_BeginTransition.Identity.Resource)->NumOpRefs).Counter + 1;
      UNLOCK();
      local_120._4_4_ = uStack_2c4;
      local_120.Type = Assert;
      local_120.field1_0x8.Data_AliasingOverlap.ResourceAfter =
           (FResource *)
           ((ulonglong)(local_120.field1_0x8.Data_BeginTransition.Identity.Resource)->NumMips <<
           0x20);
      local_120.field1_0x8.Data_AliasingOverlap.CreateBacktrace =
           (void *)((ulonglong)uVar19 << 0x20);
      local_120.field1_0x8._24_8_ = &DAT_100000001;
      local_120.field1_0x8._36_1_ = EVar2;
      local_120.field1_0x8._32_4_ = uVar16;
      local_120.field1_0x8._37_2_ = local_253;
      local_120.field1_0x8._39_1_ = local_251;
      RHIValidation::FTracker::AddOp(pFVar5,&local_120);
      pFVar4 = (this->State).RenderPassInfo.DepthStencilRenderTarget.ResolveTarget;
      if (pFVar4 != (FRHITexture *)0x0) {
        pFVar5 = (FTracker *)this->_padding_;
        local_d8.field1_0x8.Data_BeginTransition.Identity.Resource =
             (FResource *)(**(code **)(pFVar4->_padding_ + 8))(&pFVar4->_padding_);
        EVar2 = pFVar5->Pipeline;
        uVar19 = (local_d8.field1_0x8.Data_BeginTransition.Identity.Resource)->NumArraySlices;
        LOCK();
        ((local_d8.field1_0x8.Data_BeginTransition.Identity.Resource)->NumOpRefs).Counter =
             ((local_d8.field1_0x8.Data_BeginTransition.Identity.Resource)->NumOpRefs).Counter + 1;
        UNLOCK();
        local_d8._4_4_ = uStack_2c4;
        local_d8.Type = Assert;
        local_d8.field1_0x8.Data_AliasingOverlap.ResourceAfter =
             (FResource *)
             ((ulonglong)(local_d8.field1_0x8.Data_BeginTransition.Identity.Resource)->NumMips <<
             0x20);
        local_d8.field1_0x8.Data_AliasingOverlap.CreateBacktrace =
             (void *)((ulonglong)uVar19 << 0x20);
        local_d8.field1_0x8._24_8_ = &DAT_100000001;
        local_d8.field1_0x8._36_1_ = EVar2;
        local_d8.field1_0x8._32_4_ = 0x4000;
        local_d8.field1_0x8._37_2_ = local_24b;
        local_d8.field1_0x8._39_1_ = local_249;
        RHIValidation::FTracker::AddOp(pFVar5,&local_d8);
      }
    }
    else {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("bIsStencilFormat",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIValidationContext.h"
                         ,0x477,
                         L"Stencil read/write is enabled but depth stencil texture doesn\'t have a stencil plane."
                        );
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
  }
  pFVar4 = (this->State).RenderPassInfo.ShadingRateTexture.Reference;
  if (pFVar4 != (FRHITexture *)0x0) {
    FRHIResource::AddRef((FRHIResource *)pFVar4);
    lVar10 = (**(code **)(pFVar4->_padding_ + 0x20))(pFVar4);
    if ((*(EPixelFormat *)(lVar10 + 0x33) != GRHIGlobals.VariableRateShading.ImageFormat) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("ShadingRateTexture->GetFormat() == GRHIGlobals.VariableRateShading.ImageFormat"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIValidationContext.h"
                           ,0x487,
                           L"Shading rate texture is bound, but is not the correct format for this RHI."
                          ), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar5 = (FTracker *)this->_padding_;
    local_90.field1_0x8.Data_BeginTransition.Identity.Resource =
         (FResource *)(**(code **)(pFVar4->_padding_ + 8))(&pFVar4->_padding_);
    EVar2 = pFVar5->Pipeline;
    uVar19 = (local_90.field1_0x8.Data_BeginTransition.Identity.Resource)->NumArraySlices;
    uVar22 = (local_90.field1_0x8.Data_BeginTransition.Identity.Resource)->NumPlanes;
    LOCK();
    ((local_90.field1_0x8.Data_BeginTransition.Identity.Resource)->NumOpRefs).Counter =
         ((local_90.field1_0x8.Data_BeginTransition.Identity.Resource)->NumOpRefs).Counter + 1;
    UNLOCK();
    local_90._4_4_ = uStack_2c4;
    local_90.Type = Assert;
    local_90.field1_0x8.Data_AliasingOverlap.ResourceAfter =
         (FResource *)
         ((ulonglong)(local_90.field1_0x8.Data_BeginTransition.Identity.Resource)->NumMips << 0x20);
    local_90.field1_0x8.Data_AliasingOverlap.CreateBacktrace = (void *)((ulonglong)uVar19 << 0x20);
    local_90.field1_0x8._24_8_ = (ulonglong)uVar22 << 0x20;
    local_90.field1_0x8._36_1_ = EVar2;
    local_90.field1_0x8._32_4_ = 0x80000;
    local_90.field1_0x8._37_2_ = local_243;
    local_90.field1_0x8._39_1_ = local_241;
    RHIValidation::FTracker::AddOp(pFVar5,&local_90);
    FRHIResource::Release((FRHIResource *)pFVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x000145ce38e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->RHIContext->_padding_ + 0x248))(this->RHIContext,param_1,param_2);
  return;
}

// RHIBeginRenderQuery @ 145ce3900

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __thiscall
FValidationContext::RHIBeginRenderQuery(FValidationContext *this,FRHIRenderQuery *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000145ce390a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->RHIContext->_padding_ + 0x180))();
  return;
}

// RHIBeginTransitions @ 145ce3b30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FValidationContext::RHIBeginTransitions
          (FValidationContext *this,TArrayView<FRHITransition_const_*,int> *param_1)

{
  FRHITransition **ppFVar1;
  FOperation *pFVar2;
  int iVar3;
  FRHITransition *pFVar4;
  FTracker *pFVar5;
  FOperation *pFVar6;
  FRHITransition **ppFVar7;
  FRHITransition **ppFVar8;
  undefined1 local_res18 [8];
  FRHITransition **local_res20;
  undefined4 local_58;
  undefined4 uStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  
  ppFVar7 = param_1->DataPtr;
  ppFVar1 = ppFVar7 + param_1->ArrayNum;
  local_res20 = ppFVar7;
  if (ppFVar7 != ppFVar1) {
    do {
      pFVar4 = *ppFVar7;
      if (((pFVar4->Flags & AllowDuringRenderPass) == None) &&
         ((this->State).bInsideBeginRenderPass != false)) {
        `FValidationContext::RHIBeginTransitions'::__l9::<lambda_1>::operator()(local_res18);
      }
      iVar3 = (int)pFVar4->_padding_;
      pFVar6 = (FOperation *)pFVar4->_padding_;
      pFVar5 = (FTracker *)this->_padding_;
      pFVar2 = pFVar6 + iVar3;
      while( true ) {
        if ((int)pFVar4->_padding_ != iVar3) {
          `TCheckedPointerIterator<RHIValidation::FOperation_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res18);
        }
        if (pFVar6 == pFVar2) break;
        RHIValidation::FTracker::AddOp(pFVar5,pFVar6);
        pFVar6 = pFVar6 + 1;
      }
      ppFVar7 = ppFVar7 + 1;
      ppFVar8 = local_res20;
    } while (ppFVar7 != ppFVar1);
    do {
      pFVar4 = *ppFVar8;
      pFVar5 = (FTracker *)this->_padding_;
      iVar3 = (int)pFVar4->_padding_;
      pFVar6 = (FOperation *)pFVar4->_padding_;
      pFVar2 = pFVar6 + iVar3;
      while( true ) {
        if ((int)pFVar4->_padding_ != iVar3) {
          `TCheckedPointerIterator<RHIValidation::FOperation_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res18);
        }
        if (pFVar6 == pFVar2) break;
        RHIValidation::FTracker::AddOp(pFVar5,pFVar6);
        pFVar6 = pFVar6 + 1;
      }
      ppFVar8 = ppFVar8 + 1;
      ppFVar7 = local_res20;
    } while (ppFVar8 != ppFVar1);
    do {
      pFVar4 = *ppFVar7;
      iVar3 = (int)pFVar4->_padding_;
      pFVar6 = (FOperation *)pFVar4->_padding_;
      pFVar5 = (FTracker *)this->_padding_;
      pFVar2 = pFVar6 + iVar3;
      while( true ) {
        if ((int)pFVar4->_padding_ != iVar3) {
          `TCheckedPointerIterator<RHIValidation::FOperation_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res18);
        }
        if (pFVar6 == pFVar2) break;
        RHIValidation::FTracker::AddOp(pFVar5,pFVar6);
        pFVar6 = pFVar6 + 1;
      }
      ppFVar7 = ppFVar7 + 1;
    } while (ppFVar7 != ppFVar1);
  }
  local_58 = *(undefined4 *)&param_1->DataPtr;
  uStack_54 = *(undefined4 *)((longlong)&param_1->DataPtr + 4);
  iStack_50 = param_1->ArrayNum;
  uStack_4c = *(undefined4 *)&param_1->field_0xc;
  (**(code **)(this->RHIContext->_padding_ + 0x48))(this->RHIContext,&local_58);
  return;
}

// RHIBeginUAVOverlap @ 145ce3eb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FValidationContext::RHIBeginUAVOverlap
          (FValidationContext *this,TArrayView<FRHIUnorderedAccessView_*_const,int> *param_1)

{
  FRHIUnorderedAccessView **ppFVar1;
  FTracker *this_00;
  FRHIUnorderedAccessView **ppFVar2;
  undefined4 local_d8;
  undefined4 uStack_d4;
  int iStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  FResource *pFStack_c0;
  uint local_a8;
  uint uStack_a4;
  ERHIAccess EStack_a0;
  undefined4 uStack_9c;
  FState local_98;
  undefined8 uStack_90;
  void *local_88;
  FViewIdentity local_80;
  FOperation local_58;
  
  ppFVar2 = param_1->DataPtr;
  ppFVar1 = ppFVar2 + param_1->ArrayNum;
  for (; ppFVar2 != ppFVar1; ppFVar2 = ppFVar2 + 1) {
    this_00 = (FTracker *)this->_padding_;
    RHIValidation::FViewIdentity::FViewIdentity
              (&local_80,*(FRHIViewableResource **)&(*ppFVar2)->field_0x18,
               (FRHIViewDesc *)&(*ppFVar2)->field_0x20);
    LOCK();
    ((FThreadSafeCounter *)(local_80._padding_ + 0xa8))->Counter =
         ((FThreadSafeCounter *)(local_80._padding_ + 0xa8))->Counter + 1;
    UNLOCK();
    pFStack_c0 = (FResource *)local_80._padding_;
    EStack_a0 = CONCAT31(EStack_a0._1_3_,1);
    local_58.field1_0x8.Data_BeginTransition.Identity.SubresourceRange.MipIndex =
         (undefined4)local_80._padding_;
    local_58.field1_0x8.Data_SetTrackedAccess.State.Pipelines = local_80._padding_._4_1_;
    local_58.field1_0x8.Data_BeginTransition.Identity.SubresourceRange.NumMips._1_3_ =
         local_80._padding_._5_3_;
    local_58.field1_0x8.Data_AliasingOverlap.CreateBacktrace = (void *)local_80._padding_;
    local_c8 = 0xc;
    local_58._4_4_ = uStack_c4;
    local_58.Type = SpecificUAVOverlap;
    local_58.field1_0x8.Data_BeginTransition.Identity.Resource = (FResource *)local_80._padding_;
    local_58.field1_0x8.Data_BeginTransition.CreateBacktrace = local_88;
    local_a8 = (uint)local_80._padding_;
    uStack_a4 = local_80._padding_._4_4_;
    local_58.field1_0x8.Data_BeginTransition.Identity.SubresourceRange.PlaneIndex =
         (uint)local_80._padding_;
    local_58.field1_0x8.Data_BeginTransition.Identity.SubresourceRange.NumPlanes =
         local_80._padding_._4_4_;
    local_58.field1_0x8.Data_BeginTransition.PreviousState.Access = EStack_a0;
    local_58.field1_0x8._36_4_ = uStack_9c;
    local_58.field1_0x8.Data_BeginTransition.NextState = local_98;
    local_58.field1_0x8._48_8_ = uStack_90;
    RHIValidation::FTracker::AddOp(this_00,&local_58);
  }
  local_d8 = *(undefined4 *)&param_1->DataPtr;
  uStack_d4 = *(undefined4 *)((longlong)&param_1->DataPtr + 4);
  iStack_d0 = param_1->ArrayNum;
  uStack_cc = *(undefined4 *)&param_1->field_0xc;
  (**(code **)(this->RHIContext->_padding_ + 0x80))(this->RHIContext,&local_d8);
  return;
}

// RHIBeginUAVOverlap @ 145ce3ff0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall FValidationContext::RHIBeginUAVOverlap(FValidationContext *this)

{
  undefined4 uStack_94;
  undefined7 uStack_8f;
  FOperation local_50;
  
  local_50._4_4_ = uStack_94;
  local_50.Type = AllUAVsOverlap;
  local_50.field1_0x8._1_7_ = uStack_8f;
  local_50.field1_0x8._0_1_ = 1;
  RHIValidation::FTracker::AddOp((FTracker *)this->_padding_,&local_50);
                    /* WARNING: Could not recover jumptable at 0x000145ce4056. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->RHIContext->_padding_ + 0x88))();
  return;
}

// RHIBindAccelerationStructureMemory @ 145ce40d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __thiscall
FValidationContext::RHIBindAccelerationStructureMemory
          (FValidationContext *this,FRHIRayTracingScene *param_1,FRHIBuffer *param_2,uint param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000145ce40da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->RHIContext->_padding_ + 0x140))();
  return;
}

// RHIBuildAccelerationStructures @ 145ce49c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EVertexElementType": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FValidationContext::RHIBuildAccelerationStructures
          (FValidationContext *this,TArrayView<FRayTracingGeometryBuildParams_const_,int> *param_1,
          FRHIBufferRange *param_2)

{
  FScriptContainerElement *pFVar1;
  ERHIPipeline EVar2;
  uint uVar3;
  int iVar4;
  FRHIRayTracingGeometry *pFVar5;
  FRHIBuffer *pFVar6;
  FTracker *pFVar7;
  longlong lVar8;
  undefined2 uVar9;
  undefined1 uVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  FRHIBufferRange *local_res18;
  FRayTracingGeometryBuildParams *local_res20;
  undefined4 uStack_f4;
  FRayTracingGeometryBuildParams *local_a8;
  int iStack_a0;
  undefined4 uStack_9c;
  FOperation local_98;
  
  local_res20 = param_1->DataPtr;
  local_a8 = local_res20 + param_1->ArrayNum;
  local_res10 = param_1;
  local_res18 = param_2;
  if (local_res20 != local_a8) {
    do {
      pFVar5 = (local_res20->Geometry).Reference;
      pFVar6 = (pFVar5->Initializer).IndexBuffer.Reference;
      if (pFVar6 != (FRHIBuffer *)0x0) {
        pFVar7 = (FTracker *)this->_padding_;
        local_98.field1_0x8.Data_BeginTransition.Identity.Resource = (FResource *)&pFVar6->_padding_
        ;
        uVar3 = *(uint *)((longlong)&pFVar6->_padding_ + 4);
        EVar2 = pFVar7->Pipeline;
        LOCK();
        *(int *)&pFVar6->_padding_ = (int)pFVar6->_padding_ + 1;
        UNLOCK();
        local_98._4_4_ = uStack_f4;
        local_98.Type = Assert;
        local_98.field1_0x8.Data_AliasingOverlap.ResourceAfter =
             (FResource *)
             ((ulonglong)(uint)*(longlong *)local_98.field1_0x8.Data_BreadcrumbRange.Range.First <<
             0x20);
        local_98.field1_0x8.Data_AliasingOverlap.CreateBacktrace =
             (void *)((ulonglong)uVar3 << 0x20);
        local_98.field1_0x8._24_8_ = (ulonglong)(uint)pFVar6->_padding_ << 0x20;
        local_98.field1_0x8._36_1_ = EVar2;
        local_98.field1_0x8._32_4_ = 0x10;
        local_98.field1_0x8._37_2_ = local_res10._5_2_;
        local_98.field1_0x8._39_1_ = local_res10._7_1_;
        RHIValidation::FTracker::AddOp(pFVar7,&local_98);
      }
      iVar4 = (pFVar5->Initializer).Segments.ArrayNum;
      pFVar11 = (pFVar5->Initializer).Segments.AllocatorInstance.Data;
      uVar10 = local_res10._7_1_;
      uVar9 = local_res10._5_2_;
      pFVar1 = pFVar11 + (longlong)iVar4 * 0x28;
      while( true ) {
        if ((pFVar5->Initializer).Segments.ArrayNum != iVar4) {
          `TCheckedPointerIterator<FRayTracingGeometrySegment_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res8);
        }
        if (pFVar11 == pFVar1) break;
        lVar8 = *(longlong *)pFVar11;
        pFVar7 = (FTracker *)this->_padding_;
        local_98.field1_0x8.Data_BeginTransition.Identity.Resource = (FResource *)(lVar8 + 0x28);
        uVar3 = (local_98.field1_0x8.Data_BeginTransition.Identity.Resource)->NumMips;
        EVar2 = pFVar7->Pipeline;
        LOCK();
        *(int *)(lVar8 + 0xd0) = *(int *)(lVar8 + 0xd0) + 1;
        UNLOCK();
        local_98.field1_0x8.Data_AliasingOverlap.ResourceAfter =
             (FResource *)((ulonglong)uVar3 << 0x20);
        local_98.field1_0x8.Data_AliasingOverlap.CreateBacktrace =
             (void *)((ulonglong)*(uint *)(lVar8 + 0x2c) << 0x20);
        local_98._4_4_ = uStack_f4;
        local_98.Type = Assert;
        local_98.field1_0x8._24_8_ = (ulonglong)*(uint *)(lVar8 + 0x30) << 0x20;
        local_98.field1_0x8._36_1_ = EVar2;
        local_98.field1_0x8._32_4_ = 0x10;
        local_98.field1_0x8._37_2_ = uVar9;
        local_98.field1_0x8._39_1_ = uVar10;
        RHIValidation::FTracker::AddOp(pFVar7,&local_98);
        pFVar11 = pFVar11 + 0x28;
      }
      local_res20 = local_res20 + 1;
    } while (local_res20 != local_a8);
  }
  local_a8 = local_res10->DataPtr;
  iStack_a0 = local_res10->ArrayNum;
  uStack_9c = *(undefined4 *)&local_res10->field_0xc;
  (**(code **)(this->RHIContext->_padding_ + 0x138))(this->RHIContext,&local_a8,local_res18);
  return;
}

// RHIBuildAccelerationStructures @ 145ce4c10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FValidationContext::RHIBuildAccelerationStructures
          (FValidationContext *this,TArrayView<FRayTracingSceneBuildParams_const_,int> *param_1)

{
  ERHIPipeline EVar1;
  uint uVar2;
  FRHIRayTracingScene *pFVar3;
  FTracker *pFVar4;
  FRHIBuffer *pFVar5;
  FRayTracingSceneBuildParams *pFVar6;
  FRayTracingSceneBuildParams *pFVar7;
  undefined2 uStackX_15;
  undefined1 uStackX_17;
  undefined4 uStack_c4;
  FOperation local_80;
  undefined4 local_38;
  undefined4 uStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  
  pFVar6 = param_1->DataPtr;
  pFVar7 = pFVar6 + param_1->ArrayNum;
  if (pFVar6 != pFVar7) {
    uStackX_17 = (undefined1)((ulonglong)param_1 >> 0x38);
    uStackX_15 = (undefined2)((ulonglong)param_1 >> 0x28);
    do {
      pFVar3 = pFVar6->Scene;
      if (pFVar3 != (FRHIRayTracingScene *)0x0) {
        pFVar4 = (FTracker *)this->_padding_;
        local_80.field1_0x8.Data_BeginTransition.Identity.Resource =
             (FResource *)&pFVar3->field_0x18;
        EVar1 = pFVar4->Pipeline;
        LOCK();
        *(int *)&pFVar3->field_0xc0 = *(int *)&pFVar3->field_0xc0 + 1;
        UNLOCK();
        local_80.field1_0x8.Data_AliasingOverlap.ResourceAfter =
             (FResource *)
             ((ulonglong)*(uint *)local_80.field1_0x8.Data_BeginTransition.Identity.Resource << 0x20
             );
        local_80.field1_0x8.Data_AliasingOverlap.CreateBacktrace =
             (void *)((ulonglong)*(uint *)&pFVar3->field_0x1c << 0x20);
        local_80._4_4_ = uStack_c4;
        local_80.Type = Assert;
        local_80.field1_0x8._24_8_ = (ulonglong)*(uint *)&pFVar3->field_0x20 << 0x20;
        local_80.field1_0x8._36_1_ = EVar1;
        local_80.field1_0x8._32_4_ = 0x20000;
        local_80.field1_0x8._37_2_ = uStackX_15;
        local_80.field1_0x8._39_1_ = uStackX_17;
        RHIValidation::FTracker::AddOp(pFVar4,&local_80);
      }
      pFVar5 = pFVar6->InstanceBuffer;
      if (pFVar5 != (FRHIBuffer *)0x0) {
        pFVar4 = (FTracker *)this->_padding_;
        local_80.field1_0x8.Data_BeginTransition.Identity.Resource = (FResource *)&pFVar5->_padding_
        ;
        uVar2 = *(uint *)((longlong)&pFVar5->_padding_ + 4);
        EVar1 = pFVar4->Pipeline;
        LOCK();
        *(int *)&pFVar5->_padding_ = (int)pFVar5->_padding_ + 1;
        UNLOCK();
        local_80.field1_0x8.Data_AliasingOverlap.ResourceAfter =
             (FResource *)
             ((ulonglong)(uint)*(longlong *)local_80.field1_0x8.Data_BreadcrumbRange.Range.First <<
             0x20);
        local_80.field1_0x8.Data_AliasingOverlap.CreateBacktrace =
             (void *)((ulonglong)uVar2 << 0x20);
        local_80._4_4_ = uStack_c4;
        local_80.Type = Assert;
        local_80.field1_0x8._24_8_ = (ulonglong)(uint)pFVar5->_padding_ << 0x20;
        local_80.field1_0x8._36_1_ = EVar1;
        local_80.field1_0x8._32_4_ = 0x10;
        local_80.field1_0x8._37_2_ = uStackX_15;
        local_80.field1_0x8._39_1_ = uStackX_17;
        RHIValidation::FTracker::AddOp(pFVar4,&local_80);
      }
      pFVar5 = pFVar6->ScratchBuffer;
      if (pFVar5 != (FRHIBuffer *)0x0) {
        pFVar4 = (FTracker *)this->_padding_;
        local_80.field1_0x8.Data_BeginTransition.Identity.Resource = (FResource *)&pFVar5->_padding_
        ;
        uVar2 = *(uint *)((longlong)&pFVar5->_padding_ + 4);
        EVar1 = pFVar4->Pipeline;
        LOCK();
        *(int *)&pFVar5->_padding_ = (int)pFVar5->_padding_ + 1;
        UNLOCK();
        local_80.field1_0x8.Data_AliasingOverlap.ResourceAfter =
             (FResource *)
             ((ulonglong)(uint)*(longlong *)local_80.field1_0x8.Data_BreadcrumbRange.Range.First <<
             0x20);
        local_80.field1_0x8.Data_AliasingOverlap.CreateBacktrace =
             (void *)((ulonglong)uVar2 << 0x20);
        local_80._4_4_ = uStack_c4;
        local_80.Type = Assert;
        local_80.field1_0x8._24_8_ = (ulonglong)(uint)pFVar5->_padding_ << 0x20;
        local_80.field1_0x8._36_1_ = EVar1;
        local_80.field1_0x8._32_4_ = 0x400;
        local_80.field1_0x8._37_2_ = uStackX_15;
        local_80.field1_0x8._39_1_ = uStackX_17;
        RHIValidation::FTracker::AddOp(pFVar4,&local_80);
      }
      pFVar6 = pFVar6 + 1;
    } while (pFVar6 != pFVar7);
  }
  local_38 = *(undefined4 *)&param_1->DataPtr;
  uStack_34 = *(undefined4 *)((longlong)&param_1->DataPtr + 4);
  iStack_30 = param_1->ArrayNum;
  uStack_2c = *(undefined4 *)&param_1->field_0xc;
  (**(code **)(this->RHIContext->_padding_ + 0x130))(this->RHIContext,&local_38);
  return;
}

// RHIClearShaderBindingTable @ 145ce5080

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __thiscall
FValidationContext::RHIClearShaderBindingTable
          (FValidationContext *this,FRHIShaderBindingTable *param_1)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  
  bVar3 = 1 < (int)param_1->_padding_;
  if (!bVar3) {
    TSet<RHIValidation::FResourceIdentity,DefaultKeyFuncs<RHIValidation::FResourceIdentity,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<RHIValidation::FResourceIdentity,DefaultKeyFuncs<RHIValidation::FResourceIdentity,0>,FDefaultSetAllocator>
                      *)&param_1->_padding_);
  }
  piVar1 = (int *)((longlong)&param_1->_padding_ + 4);
  *(undefined4 *)&param_1->_padding_ = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)&param_1->_padding_,0,piVar1);
  }
  *(undefined4 *)&param_1->_padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&param_1->_padding_ + 4) = 0;
  iVar2 = *(int *)((longlong)&param_1->_padding_ + 4);
  *(undefined4 *)&param_1->_padding_ = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)((longlong)&param_1->_padding_ + 4) = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&param_1->_padding_,0);
  }
  if (bVar3) {
    *(undefined4 *)&param_1->_padding_ = 1;
    TSet<RHIValidation::FResourceIdentity,DefaultKeyFuncs<RHIValidation::FResourceIdentity,0>,FDefaultSetAllocator>
    ::Rehash((TSet<RHIValidation::FResourceIdentity,DefaultKeyFuncs<RHIValidation::FResourceIdentity,0>,FDefaultSetAllocator>
              *)&param_1->_padding_);
  }
  bVar3 = 1 < (int)param_1->_padding_;
  if (!bVar3) {
    TSet<RHIValidation::FUAVBinding,DefaultKeyFuncs<RHIValidation::FUAVBinding,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<RHIValidation::FUAVBinding,DefaultKeyFuncs<RHIValidation::FUAVBinding,0>,FDefaultSetAllocator>
                      *)&param_1->_padding_);
  }
  piVar1 = (int *)((longlong)&param_1->_padding_ + 4);
  *(undefined4 *)&param_1->_padding_ = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)&param_1->_padding_,0,piVar1);
  }
  *(undefined4 *)&param_1->_padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&param_1->_padding_ + 4) = 0;
  iVar2 = *(int *)((longlong)&param_1->_padding_ + 4);
  *(undefined4 *)&param_1->_padding_ = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)((longlong)&param_1->_padding_ + 4) = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&param_1->_padding_,0);
  }
  if (bVar3) {
    *(undefined4 *)&param_1->_padding_ = 1;
    TSet<RHIValidation::FUAVBinding,DefaultKeyFuncs<RHIValidation::FUAVBinding,0>,FDefaultSetAllocator>
    ::Rehash((TSet<RHIValidation::FUAVBinding,DefaultKeyFuncs<RHIValidation::FUAVBinding,0>,FDefaultSetAllocator>
              *)&param_1->_padding_);
  }
  *(undefined1 *)((longlong)&param_1->_padding_ + 3) = 1;
                    /* WARNING: Could not recover jumptable at 0x000145ce51ed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->RHIContext->_padding_ + 0x270))(this->RHIContext,param_1);
  return;
}

// RHIClearUAVFloat @ 145ce5310

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __thiscall
FValidationContext::RHIClearUAVFloat
          (FValidationContext *this,FRHIUnorderedAccessView *param_1,TVector4<float> *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000145ce531a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->RHIContext->_padding_ + 0x58))();
  return;
}

// RHIClearUAVUint @ 145ce5350

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __thiscall
FValidationContext::RHIClearUAVUint
          (FValidationContext *this,FRHIUnorderedAccessView *param_1,
          TIntVector4<unsigned_int> *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000145ce535a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->RHIContext->_padding_ + 0x60))();
  return;
}

// RHICommitShaderBindingTable @ 145ce5520

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FValidationContext::RHICommitShaderBindingTable
          (FValidationContext *this,FRHIShaderBindingTable *param_1,FRHIBuffer *param_2)

{
  ERHIPipeline EVar1;
  uint uVar2;
  FTracker *this_00;
  undefined2 local_resd;
  undefined1 local_resf;
  undefined4 uStack_94;
  FOperation local_50;
  
  RHIValidation::FShaderBindingTable::Commit((FShaderBindingTable *)&param_1->_padding_);
  if (param_2 != (FRHIBuffer *)0x0) {
    this_00 = (FTracker *)this->_padding_;
    local_50.field1_0x8.Data_BeginTransition.Identity.Resource = (FResource *)&param_2->_padding_;
    uVar2 = *(uint *)((longlong)&param_2->_padding_ + 4);
    EVar1 = this_00->Pipeline;
    LOCK();
    *(int *)&param_2->_padding_ = (int)param_2->_padding_ + 1;
    UNLOCK();
    local_50.field1_0x8.Data_AliasingOverlap.ResourceAfter =
         (FResource *)
         ((ulonglong)(uint)*(longlong *)local_50.field1_0x8.Data_BreadcrumbRange.Range.First << 0x20
         );
    local_50.field1_0x8.Data_AliasingOverlap.CreateBacktrace = (void *)((ulonglong)uVar2 << 0x20);
    local_50._4_4_ = uStack_94;
    local_50.Type = Assert;
    local_50.field1_0x8._24_8_ = (ulonglong)(uint)param_2->_padding_ << 0x20;
    local_50.field1_0x8._36_1_ = EVar1;
    local_50.field1_0x8._32_4_ = 0x2000;
    local_50.field1_0x8._37_2_ = local_resd;
    local_50.field1_0x8._39_1_ = local_resf;
    RHIValidation::FTracker::AddOp(this_00,&local_50);
  }
                    /* WARNING: Could not recover jumptable at 0x000145ce560a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->RHIContext->_padding_ + 0x280))(this->RHIContext,param_1,param_2);
  return;
}

// RHICopyBufferRegion @ 145ce5640

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FValidationContext::RHICopyBufferRegion
          (FValidationContext *this,FRHIBuffer *param_1,ulong64 param_2,FRHIBuffer *param_3,
          ulong64 param_4,ulong64 param_5)

{
  ERHIPipeline EVar1;
  uint uVar2;
  FTracker *pFVar3;
  undefined2 local_resd;
  undefined1 local_resf;
  undefined4 uStack_b4;
  FOperation local_70;
  
  local_70.field1_0x8.Data_BeginTransition.Identity.Resource = (FResource *)&param_3->_padding_;
  uVar2 = *(uint *)((longlong)&param_3->_padding_ + 4);
  pFVar3 = (FTracker *)this->_padding_;
  EVar1 = pFVar3->Pipeline;
  LOCK();
  *(int *)&param_3->_padding_ = (int)param_3->_padding_ + 1;
  UNLOCK();
  local_70._4_4_ = uStack_b4;
  local_70.Type = Assert;
  local_70.field1_0x8.Data_AliasingOverlap.ResourceAfter =
       (FResource *)((ulonglong)(uint)param_3->_padding_ << 0x20);
  local_70.field1_0x8.Data_AliasingOverlap.CreateBacktrace = (void *)((ulonglong)uVar2 << 0x20);
  local_70.field1_0x8._24_8_ = (ulonglong)(uint)param_3->_padding_ << 0x20;
  local_70.field1_0x8._36_1_ = EVar1;
  local_70.field1_0x8._32_4_ = 0x80;
  local_70.field1_0x8._37_2_ = local_resd;
  local_70.field1_0x8._39_1_ = local_resf;
  RHIValidation::FTracker::AddOp(pFVar3,&local_70);
  pFVar3 = (FTracker *)this->_padding_;
  local_70.field1_0x8.Data_BeginTransition.Identity.Resource = (FResource *)&param_1->_padding_;
  uVar2 = *(uint *)((longlong)&param_1->_padding_ + 4);
  EVar1 = pFVar3->Pipeline;
  LOCK();
  *(int *)&param_1->_padding_ = (int)param_1->_padding_ + 1;
  UNLOCK();
  local_70.Type = Assert;
  local_70.field1_0x8.Data_AliasingOverlap.ResourceAfter =
       (FResource *)
       ((ulonglong)(uint)*(longlong *)local_70.field1_0x8.Data_BreadcrumbRange.Range.First << 0x20);
  local_70.field1_0x8.Data_AliasingOverlap.CreateBacktrace = (void *)((ulonglong)uVar2 << 0x20);
  local_70.field1_0x8._24_8_ = (ulonglong)(uint)param_1->_padding_ << 0x20;
  local_70.field1_0x8._36_1_ = EVar1;
  local_70.field1_0x8._32_4_ = 0x2000;
  RHIValidation::FTracker::AddOp(pFVar3,&local_70);
                    /* WARNING: Could not recover jumptable at 0x000145ce57c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->RHIContext->_padding_ + 0x268))(this->RHIContext,param_1,param_2,param_3);
  return;
}

// RHICopyTexture @ 145ce57d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FValidationContext::RHICopyTexture
          (FValidationContext *this,FRHITexture *param_1,FRHITexture *param_2,
          FRHICopyTextureInfo *param_3)

{
  ERHIPipeline EVar1;
  uint uVar2;
  uint uVar3;
  FTracker *pFVar4;
  undefined1 local_res8 [5];
  undefined2 local_resd;
  undefined1 local_resf;
  undefined4 uStack_b4;
  FOperation local_70;
  
  if ((this->State).bInsideBeginRenderPass != false) {
    `FValidationContext::RHICopyTexture'::__l2::<lambda_1>::operator()(local_res8);
  }
  pFVar4 = (FTracker *)this->_padding_;
  local_70.field1_0x8.Data_BeginTransition.Identity.Resource =
       (FResource *)(**(code **)(param_1->_padding_ + 8))(&param_1->_padding_);
  EVar1 = pFVar4->Pipeline;
  uVar2 = (local_70.field1_0x8.Data_BeginTransition.Identity.Resource)->NumArraySlices;
  uVar3 = (local_70.field1_0x8.Data_BeginTransition.Identity.Resource)->NumPlanes;
  LOCK();
  ((local_70.field1_0x8.Data_BeginTransition.Identity.Resource)->NumOpRefs).Counter =
       ((local_70.field1_0x8.Data_BeginTransition.Identity.Resource)->NumOpRefs).Counter + 1;
  UNLOCK();
  local_70._4_4_ = uStack_b4;
  local_70.Type = Assert;
  local_70.field1_0x8.Data_AliasingOverlap.ResourceAfter =
       (FResource *)
       ((ulonglong)(local_70.field1_0x8.Data_BeginTransition.Identity.Resource)->NumMips << 0x20);
  local_70.field1_0x8.Data_AliasingOverlap.CreateBacktrace = (void *)((ulonglong)uVar2 << 0x20);
  local_70.field1_0x8._24_8_ = (ulonglong)uVar3 << 0x20;
  local_70.field1_0x8._36_1_ = EVar1;
  local_70.field1_0x8._32_4_ = 0x80;
  local_70.field1_0x8._37_2_ = local_resd;
  local_70.field1_0x8._39_1_ = local_resf;
  RHIValidation::FTracker::AddOp(pFVar4,&local_70);
  pFVar4 = (FTracker *)this->_padding_;
  local_70.field1_0x8.Data_BeginTransition.Identity.Resource =
       (FResource *)(**(code **)(param_2->_padding_ + 8))(&param_2->_padding_);
  EVar1 = pFVar4->Pipeline;
  uVar2 = (local_70.field1_0x8.Data_BeginTransition.Identity.Resource)->NumArraySlices;
  uVar3 = (local_70.field1_0x8.Data_BeginTransition.Identity.Resource)->NumPlanes;
  LOCK();
  ((local_70.field1_0x8.Data_BeginTransition.Identity.Resource)->NumOpRefs).Counter =
       ((local_70.field1_0x8.Data_BeginTransition.Identity.Resource)->NumOpRefs).Counter + 1;
  UNLOCK();
  local_70.Type = Assert;
  local_70.field1_0x8.Data_AliasingOverlap.ResourceAfter =
       (FResource *)
       ((ulonglong)(local_70.field1_0x8.Data_BeginTransition.Identity.Resource)->NumMips << 0x20);
  local_70.field1_0x8.Data_AliasingOverlap.CreateBacktrace = (void *)((ulonglong)uVar2 << 0x20);
  local_70.field1_0x8._24_8_ = (ulonglong)uVar3 << 0x20;
  local_70.field1_0x8._36_1_ = EVar1;
  local_70.field1_0x8._32_4_ = 0x2000;
  local_70.field1_0x8._37_2_ = local_resd;
  local_70.field1_0x8._39_1_ = local_resf;
  RHIValidation::FTracker::AddOp(pFVar4,&local_70);
  FValidationRHIUtils::ValidateCopyTexture(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x000145ce5973. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->RHIContext->_padding_ + 0x260))(this->RHIContext,param_1,param_2,param_3);
  return;
}

// RHICopyToStagingBuffer @ 145ce5b30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FValidationContext::RHICopyToStagingBuffer
          (FValidationContext *this,FRHIBuffer *param_1,FRHIStagingBuffer *param_2,uint param_3,
          uint param_4)

{
  FTracker *this_00;
  FName FVar1;
  FName FVar2;
  uint uVar3;
  FString *pFVar4;
  ForAnyElementType FVar5;
  bool bVar6;
  FName local_res8;
  FName local_res10;
  FString local_d8;
  undefined4 local_c8;
  undefined4 uStack_c4;
  longlong *plStack_c0;
  undefined4 local_b8;
  uint uStack_b4;
  undefined4 uStack_b0;
  uint uStack_ac;
  undefined4 local_a8;
  uint uStack_a4;
  undefined4 uStack_a0;
  ERHIPipeline EStack_9c;
  undefined2 uStack_9b;
  undefined1 uStack_99;
  FString local_80;
  FOperation local_70;
  
  FVar1 = local_res8;
  plStack_c0 = &param_1->_padding_;
  bVar6 = false;
  local_res8 = (FName)((ulonglong)local_res8 & 0xffffffff00000000);
  FVar2 = local_res8;
  this_00 = (FTracker *)this->_padding_;
  uStack_b4 = (uint)*plStack_c0;
  uStack_ac = *(uint *)((longlong)&param_1->_padding_ + 4);
  uStack_a4 = (uint)param_1->_padding_;
  EStack_9c = this_00->Pipeline;
  LOCK();
  *(int *)&param_1->_padding_ = (int)param_1->_padding_ + 1;
  UNLOCK();
  local_res8.Number._1_2_ = FVar1.Number._1_2_;
  uStack_9b = local_res8.Number._1_2_;
  local_res8.Number._3_1_ = FVar1.Number._3_1_;
  uStack_99 = local_res8.Number._3_1_;
  local_c8 = 7;
  local_70._4_4_ = uStack_c4;
  local_70.Type = Assert;
  local_b8 = 0;
  uStack_b0 = 0;
  local_70.field1_0x8.Data_AliasingOverlap.ResourceAfter =
       (FResource *)((ulonglong)uStack_b4 << 0x20);
  local_70.field1_0x8.Data_AliasingOverlap.CreateBacktrace = (void *)((ulonglong)uStack_ac << 0x20);
  local_a8 = 0;
  uStack_a0 = 0x80;
  local_70.field1_0x8._24_8_ = (ulonglong)uStack_a4 << 0x20;
  local_70.field1_0x8._36_1_ = EStack_9c;
  local_70.field1_0x8._32_4_ = 0x80;
  local_70.field1_0x8._37_2_ = local_res8.Number._1_2_;
  local_70.field1_0x8._39_1_ = local_res8.Number._3_1_;
  local_res8 = FVar2;
  local_70.field1_0x8.Data_BreadcrumbRange.Range.First = (FRHIBreadcrumbNode *)plStack_c0;
  RHIValidation::FTracker::AddOp(this_00,&local_70);
  if ((GRHIValidateBufferSourceCopy != false) && (((param_1->Desc).Usage & SourceCopy) == None)) {
    local_res8 = (FName)param_1->_padding_;
    uVar3 = ::FName::GetStringLength(&local_res8);
    if (uVar3 != 0) {
      local_res10 = (FName)param_1->_padding_;
      pFVar4 = ::FName::ToString(&local_res10,&local_80);
      if ((pFVar4->Data).ArrayNum == 0) {
        bVar6 = true;
      }
      else {
        bVar6 = true;
      }
    }
    ::FString::PrintfImpl
              (&local_d8,
               L"Buffers used as copy source need to be created with BUF_SourceCopy! Resource: \"%s\" (0x%p)."
              );
    if ((bVar6) && (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_80.Data.AllocatorInstance.Data);
    }
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_d8.Data.ArrayNum != 0) {
      FVar5.Data = local_d8.Data.AllocatorInstance.Data;
    }
    FValidationRHI::ReportValidationFailure((wchar_t *)FVar5.Data);
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000145ce5cd1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->RHIContext->_padding_ + 0xd8))(this->RHIContext,param_1,param_2,param_3);
  return;
}

// RHIDispatchComputeShader @ 145ce8100

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __thiscall
FValidationContext::RHIDispatchComputeShader
          (FValidationContext *this,uint param_1,uint param_2,uint param_3)

{
  FRHIShader *pFVar1;
  FTracker *pFVar2;
  FState local_res8;
  
  pFVar1 = (this->State).BoundShaders[5];
  if (pFVar1 == (FRHIShader *)0x0) {
    FValidationRHI::ReportValidationFailure
              (L"A compute PSO has to be set before dispatching a compute shader.");
  }
  else {
    ValidateBoundUniformBuffers
              (pFVar1,&(this->State).StaticUniformBuffers,
               (this->State).BoundUniformBuffers.StageBindings + 5);
  }
  FValidationRHI::ValidateThreadGroupCount(param_1,param_2,param_3);
  (**(code **)(this->RHIContext->_padding_ + 0x18))(this->RHIContext,param_1,param_2,param_3);
  pFVar2 = (FTracker *)this->_padding_;
  local_res8.Access = UAVCompute;
  local_res8.Pipelines = pFVar2->Pipeline;
  RHIValidation::FTracker::FUAVTracker::DrawOrDispatch(pFVar2->UAVTrackers + 1,pFVar2,&local_res8);
  return;
}

// RHIDispatchComputeShaderBundle @ 145ce84c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FValidationContext::RHIDispatchComputeShaderBundle
          (FValidationContext *this,FRHIShaderBundle *param_1,FRHIBuffer *param_2,
          TArrayView<FRHIShaderParameterResource_const_,int> *param_3,
          TArrayView<FRHIShaderBundleComputeDispatch_const_,int> *param_4,bool param_5)

{
  int *piVar1;
  ERHIPipeline EVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  FTracker *this_00;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  FRHIShaderBundleComputeDispatch *pFVar9;
  FRHIShaderBundleComputeDispatch *pFVar10;
  undefined2 local_resd;
  undefined1 local_resf;
  undefined4 uStack_134;
  undefined4 uStack_dc;
  undefined4 uStack_cc;
  TArrayView<FRHIShaderParameterResource_const_,int> local_c8;
  TArrayView<FRHIShaderParameterResource_const_,int> local_b8;
  undefined4 local_a8;
  undefined4 uStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  FOperation local_88;
  
  if ((!GRHIGlobals.ShaderBundles.RequiresSharedBindlessParameters) && (param_3->ArrayNum != 0)) {
    FValidationRHI::ReportValidationFailure
              (L"SharedBindlessParameters should not be set on this platform and configuration");
  }
  iVar3 = param_4->ArrayNum;
  if (iVar3 < 1) {
    FValidationRHI::ReportValidationFailure
              (L"A shader bundle must be dispatched with at least one record.");
  }
  pFVar9 = param_4->DataPtr;
  pFVar10 = pFVar9 + iVar3;
  do {
    if (pFVar9 == pFVar10) {
      this_00 = (FTracker *)this->_padding_;
      local_88.field1_0x8.Data_BeginTransition.Identity.Resource = (FResource *)&param_2->_padding_;
      uVar4 = *(uint *)((longlong)&param_2->_padding_ + 4);
      EVar2 = this_00->Pipeline;
      LOCK();
      *(int *)&param_2->_padding_ = (int)param_2->_padding_ + 1;
      UNLOCK();
      local_88.field1_0x8.Data_AliasingOverlap.ResourceAfter =
           (FResource *)
           ((ulonglong)(uint)*(longlong *)local_88.field1_0x8.Data_BreadcrumbRange.Range.First <<
           0x20);
      local_88.field1_0x8.Data_AliasingOverlap.CreateBacktrace = (void *)((ulonglong)uVar4 << 0x20);
      local_88._4_4_ = uStack_134;
      local_88.Type = Assert;
      local_88.field1_0x8._24_8_ = (ulonglong)(uint)param_2->_padding_ << 0x20;
      local_88.field1_0x8._36_1_ = EVar2;
      local_88.field1_0x8._32_4_ = 4;
      local_88.field1_0x8._37_2_ = local_resd;
      local_88.field1_0x8._39_1_ = local_resf;
      RHIValidation::FTracker::AddOp(this_00,&local_88);
      local_a8 = *(undefined4 *)&param_4->DataPtr;
      uStack_a4 = *(undefined4 *)((longlong)&param_4->DataPtr + 4);
      iStack_a0 = param_4->ArrayNum;
      uStack_9c = *(undefined4 *)&param_4->field_0xc;
      local_98 = *(undefined4 *)&param_3->DataPtr;
      uStack_94 = *(undefined4 *)((longlong)&param_3->DataPtr + 4);
      iStack_90 = param_3->ArrayNum;
      uStack_8c = *(undefined4 *)&param_3->field_0xc;
      (**(code **)(this->RHIContext->_padding_ + 0x70))
                (this->RHIContext,param_1,param_2,&local_98,&local_a8,param_5);
      return;
    }
    if (pFVar9->RecordIndex != 0xffffffff) {
      lVar5 = this->_padding_;
      piVar1 = (int *)(lVar5 + 0x30);
      (this->State).BoundShaders[5] = (FRHIShader *)pFVar9->Shader;
      iVar3 = *piVar1;
      if (iVar3 < 0) {
        iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (8,8,-iVar3,(ForAnyElementType *)(lVar5 + 0x28),piVar1,
                           (int *)(lVar5 + 0x34));
        memset((void *)(*(longlong *)(lVar5 + 0x28) + (longlong)iVar8 * 8),0,(longlong)-iVar3 << 3);
      }
      else if (0 < iVar3) {
        *piVar1 = *piVar1 - iVar3;
      }
      if (((pFVar9->Parameters).bIsSet == false) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      local_c8.DataPtr = (pFVar9->Parameters).TypedValue.ResourceParameters.DataPtr;
      local_c8._12_4_ = uStack_dc;
      local_c8.ArrayNum = (pFVar9->Parameters).TypedValue.ResourceParameters.ArrayNum;
      ValidateShaderParameters
                ((FRHIShader *)pFVar9->Shader,(FTracker *)this->_padding_,
                 &(this->State).StaticUniformBuffers,
                 (this->State).BoundUniformBuffers.StageBindings + 5,&local_c8,SRVCompute,Compute);
      if (((pFVar9->Parameters).bIsSet == false) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      local_b8.DataPtr = (pFVar9->Parameters).TypedValue.BindlessParameters.DataPtr;
      local_b8._12_4_ = uStack_cc;
      local_b8.ArrayNum = (pFVar9->Parameters).TypedValue.BindlessParameters.ArrayNum;
      ValidateShaderParameters
                ((FRHIShader *)pFVar9->Shader,(FTracker *)this->_padding_,
                 &(this->State).StaticUniformBuffers,
                 (this->State).BoundUniformBuffers.StageBindings + 5,&local_b8,SRVCompute,Compute);
      if (param_5) {
        FValidationRHI::ValidateIndirectArgsBuffer
                  (param_2,param_1->ArgStride * pFVar9->RecordIndex + param_1->ArgOffset,0xc,0);
      }
    }
    pFVar9 = pFVar9 + 1;
  } while( true );
}

// RHIDispatchGraphicsShaderBundle @ 145ce8a80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FValidationContext::RHIDispatchGraphicsShaderBundle
          (FValidationContext *this,FRHIShaderBundle *param_1,FRHIBuffer *param_2,
          FRHIShaderBundleGraphicsState *param_3,
          TArrayView<FRHIShaderParameterResource_const_,int> *param_4,
          TArrayView<FRHIShaderBundleGraphicsDispatch_const_,int> *param_5,bool param_6)

{
  longlong lVar1;
  FRHIBreadcrumbNode *this_00;
  bool bVar2;
  wchar_t wVar3;
  FOutputDeviceRedirector *this_01;
  ulonglong uVar4;
  wchar_t *pwVar5;
  uint local_res8 [2];
  uint local_88 [2];
  FString local_80;
  FString local_70;
  FString local_60;
  undefined4 local_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  
  if ((GRHIGlobals.ShaderBundles.RequiresSharedBindlessParameters) || (param_4->ArrayNum == 0))
  goto LAB_145ce8cb0;
  uVar4 = 0xffffffff;
  pwVar5 = L"SharedBindlessParameters should not be set on this platform and configuration";
  wVar3 = L'S';
  do {
    pwVar5 = pwVar5 + 1;
    local_res8[0] =
         FCrc::CRCTablesSB8[1][uVar4 >> 0x10 & 0xff] ^
         FCrc::CRCTablesSB8[2][((ushort)wVar3 ^ uVar4) >> 8 & 0xff] ^
         FCrc::CRCTablesSB8[0][uVar4 >> 0x18] ^
         FCrc::CRCTablesSB8[3][((ushort)wVar3 ^ uVar4) & 0xff];
    uVar4 = (ulonglong)local_res8[0];
    wVar3 = *pwVar5;
  } while (wVar3 != L'\0');
  local_res8[0] = ~local_res8[0];
  EnterCriticalSection((LPCRITICAL_SECTION)&FValidationRHI::SeenFailureHashesMutex);
  TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::
  Emplace<unsigned_int_const_&>(&FValidationRHI::SeenFailureHashes,local_88,(bool *)local_res8);
  LeaveCriticalSection((LPCRITICAL_SECTION)&FValidationRHI::SeenFailureHashesMutex);
  if ((char)param_4 != '\0') goto LAB_145ce8cb0;
  local_80.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_80.Data.ArrayNum = 0;
  local_80.Data.ArrayMax = 0;
  lVar1 = *(longlong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xec8);
  if ((lVar1 == 0) ||
     (this_00 = *(FRHIBreadcrumbNode **)(lVar1 + 0x30), this_00 == (FRHIBreadcrumbNode *)0x0)) {
    local_60.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_60.Data.ArrayNum = 0;
    local_60.Data.ArrayMax = 0;
LAB_145ce8c10:
    ::FString::operator=
              (&local_80,
               L"SharedBindlessParameters should not be set on this platform and configuration");
  }
  else {
    FRHIBreadcrumbNode::GetFullPath(this_00,&local_60);
    if (local_60.Data.ArrayNum < 2) goto LAB_145ce8c10;
    ::FString::PrintfImpl
              (&local_70,
               L"%sBreadcrumbs: %s\n--------------------------------------------------------------------\n"
              );
    if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.Data.AllocatorInstance.Data);
    }
    local_80.Data.AllocatorInstance.Data = local_70.Data.AllocatorInstance.Data;
    local_70.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_80.Data.ArrayNum = local_70.Data.ArrayNum;
    local_80.Data.ArrayMax = local_70.Data.ArrayMax;
    local_70.Data.ArrayNum = 0;
    local_70.Data.ArrayMax = 0;
  }
  if (1 < (byte)LogRHI._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  bVar2 = FWindowsPlatformMisc::IsDebuggerPresent();
  if ((bVar2) && (RHIValidation::GBreakOnTransitionError != 0)) {
    FGenericPlatformMisc::LowLevelOutputDebugStringf(L"%s\n");
    this_01 = GetGlobalLogSingleton();
                    /* WARNING: Subroutine does not return */
    FOutputDeviceRedirector::Flush(this_01);
  }
  if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.Data.AllocatorInstance.Data);
  }
  if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.Data.AllocatorInstance.Data);
  }
LAB_145ce8cb0:
  local_38 = *(undefined4 *)&param_4->DataPtr;
  uStack_34 = *(undefined4 *)((longlong)&param_4->DataPtr + 4);
  iStack_30 = param_4->ArrayNum;
  uStack_2c = *(undefined4 *)&param_4->field_0xc;
  local_48 = *(undefined4 *)&param_5->DataPtr;
  uStack_44 = *(undefined4 *)((longlong)&param_5->DataPtr + 4);
  iStack_40 = param_5->ArrayNum;
  uStack_3c = *(undefined4 *)&param_5->field_0xc;
  (**(code **)(this->RHIContext->_padding_ + 0x78))
            (this->RHIContext,param_1,param_2,param_3,&local_38,&local_48,param_6);
  return;
}

// RHIDispatchIndirectComputeShader @ 145ce8e60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FValidationContext::RHIDispatchIndirectComputeShader
          (FValidationContext *this,FRHIBuffer *param_1,uint param_2)

{
  ERHIPipeline EVar1;
  uint uVar2;
  FRHIShader *pFVar3;
  FTracker *pFVar4;
  FState local_res8;
  undefined4 uStack_94;
  FOperation local_50;
  
  pFVar3 = (this->State).BoundShaders[5];
  if (pFVar3 == (FRHIShader *)0x0) {
    FValidationRHI::ReportValidationFailure
              (L"A compute PSO has to be set before dispatching a compute shader.");
  }
  else {
    ValidateBoundUniformBuffers
              (pFVar3,&(this->State).StaticUniformBuffers,
               (this->State).BoundUniformBuffers.StageBindings + 5);
  }
  FValidationRHI::ValidateIndirectArgsBuffer(param_1,param_2,0xc,0);
  pFVar4 = (FTracker *)this->_padding_;
  local_50.field1_0x8.Data_BeginTransition.Identity.Resource = (FResource *)&param_1->_padding_;
  uVar2 = *(uint *)((longlong)&param_1->_padding_ + 4);
  EVar1 = pFVar4->Pipeline;
  LOCK();
  *(int *)&param_1->_padding_ = (int)param_1->_padding_ + 1;
  UNLOCK();
  local_50.field1_0x8.Data_AliasingOverlap.ResourceAfter =
       (FResource *)
       ((ulonglong)(uint)*(longlong *)local_50.field1_0x8.Data_BreadcrumbRange.Range.First << 0x20);
  local_50.field1_0x8.Data_AliasingOverlap.CreateBacktrace = (void *)((ulonglong)uVar2 << 0x20);
  local_50._4_4_ = uStack_94;
  local_50.Type = Assert;
  local_50.field1_0x8._24_8_ = (ulonglong)(uint)param_1->_padding_ << 0x20;
  local_50.field1_0x8._36_1_ = EVar1;
  local_50.field1_0x8._32_4_ = 4;
  local_50.field1_0x8._37_2_ = local_res8._5_2_;
  local_50.field1_0x8._39_1_ = local_res8._7_1_;
  RHIValidation::FTracker::AddOp(pFVar4,&local_50);
  (**(code **)(this->RHIContext->_padding_ + 0x30))(this->RHIContext,param_1,param_2);
  pFVar4 = (FTracker *)this->_padding_;
  local_res8.Access = UAVCompute;
  local_res8.Pipelines = pFVar4->Pipeline;
  RHIValidation::FTracker::FUAVTracker::DrawOrDispatch(pFVar4->UAVTrackers + 1,pFVar4,&local_res8);
  return;
}

// RHIDispatchIndirectMeshShader @ 145ce8fb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FValidationContext::RHIDispatchIndirectMeshShader
          (FValidationContext *this,FRHIBuffer *param_1,uint param_2)

{
  ERHIPipeline EVar1;
  uint uVar2;
  FTracker *pFVar3;
  FState local_res8;
  undefined4 uStack_94;
  FOperation local_50;
  
  ValidateDrawing(this);
  FValidationRHI::ValidateIndirectArgsBuffer(param_1,param_2,0xc,0);
  pFVar3 = (FTracker *)this->_padding_;
  local_50.field1_0x8.Data_BeginTransition.Identity.Resource = (FResource *)&param_1->_padding_;
  uVar2 = *(uint *)((longlong)&param_1->_padding_ + 4);
  EVar1 = pFVar3->Pipeline;
  LOCK();
  *(int *)&param_1->_padding_ = (int)param_1->_padding_ + 1;
  UNLOCK();
  local_50.field1_0x8.Data_AliasingOverlap.ResourceAfter =
       (FResource *)
       ((ulonglong)(uint)*(longlong *)local_50.field1_0x8.Data_BreadcrumbRange.Range.First << 0x20);
  local_50.field1_0x8.Data_AliasingOverlap.CreateBacktrace = (void *)((ulonglong)uVar2 << 0x20);
  local_50._4_4_ = uStack_94;
  local_50.Type = Assert;
  local_50.field1_0x8._24_8_ = (ulonglong)(uint)param_1->_padding_ << 0x20;
  local_50.field1_0x8._36_1_ = EVar1;
  local_50.field1_0x8._32_4_ = 4;
  local_50.field1_0x8._37_2_ = local_res8._5_2_;
  local_50.field1_0x8._39_1_ = local_res8._7_1_;
  RHIValidation::FTracker::AddOp(pFVar3,&local_50);
  (**(code **)(this->RHIContext->_padding_ + 0x218))(this->RHIContext,param_1,param_2);
  pFVar3 = (FTracker *)this->_padding_;
  local_res8.Access = UAVGraphics;
  local_res8.Pipelines = pFVar3->Pipeline;
  RHIValidation::FTracker::FUAVTracker::DrawOrDispatch(pFVar3->UAVTrackers,pFVar3,&local_res8);
  return;
}

// RHIDispatchMeshShader @ 145ce90d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __thiscall
FValidationContext::RHIDispatchMeshShader
          (FValidationContext *this,uint param_1,uint param_2,uint param_3)

{
  FTracker *pFVar1;
  FState local_res8;
  
  ValidateDrawing(this);
  FValidationRHI::ValidateThreadGroupCount(param_1,param_2,param_3);
  (**(code **)(this->RHIContext->_padding_ + 0x210))(this->RHIContext,param_1,param_2,param_3);
  pFVar1 = (FTracker *)this->_padding_;
  local_res8.Access = UAVGraphics;
  local_res8.Pipelines = pFVar1->Pipeline;
  RHIValidation::FTracker::FUAVTracker::DrawOrDispatch(pFVar1->UAVTrackers,pFVar1,&local_res8);
  return;
}

// RHIDrawIndexedIndirect @ 145ce9160

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FValidationContext::RHIDrawIndexedIndirect
          (FValidationContext *this,FRHIBuffer *param_1,FRHIBuffer *param_2,int param_3,uint param_4
          )

{
  ERHIPipeline EVar1;
  uint uVar2;
  FTracker *pFVar3;
  FState local_res8;
  undefined4 uStack_a4;
  FOperation local_60;
  
  ValidateDrawing(this);
  FValidationRHI::ValidateIndirectArgsBuffer(param_2,param_3 * (param_2->Desc).Stride,0x14,0);
  pFVar3 = (FTracker *)this->_padding_;
  local_60.field1_0x8.Data_BeginTransition.Identity.Resource = (FResource *)&param_2->_padding_;
  uVar2 = *(uint *)((longlong)&param_2->_padding_ + 4);
  EVar1 = pFVar3->Pipeline;
  LOCK();
  *(int *)&param_2->_padding_ = (int)param_2->_padding_ + 1;
  UNLOCK();
  local_60._4_4_ = uStack_a4;
  local_60.Type = Assert;
  local_60.field1_0x8.Data_AliasingOverlap.ResourceAfter =
       (FResource *)
       ((ulonglong)(uint)*(longlong *)local_60.field1_0x8.Data_BreadcrumbRange.Range.First << 0x20);
  local_60.field1_0x8.Data_AliasingOverlap.CreateBacktrace = (void *)((ulonglong)uVar2 << 0x20);
  local_60.field1_0x8._24_8_ = (ulonglong)(uint)param_2->_padding_ << 0x20;
  local_60.field1_0x8._36_1_ = EVar1;
  local_60.field1_0x8._32_4_ = 4;
  local_60.field1_0x8._37_2_ = local_res8._5_2_;
  local_60.field1_0x8._39_1_ = local_res8._7_1_;
  RHIValidation::FTracker::AddOp(pFVar3,&local_60);
  pFVar3 = (FTracker *)this->_padding_;
  local_60.field1_0x8.Data_BeginTransition.Identity.Resource = (FResource *)&param_1->_padding_;
  uVar2 = *(uint *)((longlong)&param_1->_padding_ + 4);
  EVar1 = pFVar3->Pipeline;
  LOCK();
  *(int *)&param_1->_padding_ = (int)param_1->_padding_ + 1;
  UNLOCK();
  local_60.Type = Assert;
  local_60.field1_0x8.Data_AliasingOverlap.ResourceAfter =
       (FResource *)
       ((ulonglong)(uint)*(longlong *)local_60.field1_0x8.Data_BreadcrumbRange.Range.First << 0x20);
  local_60.field1_0x8.Data_AliasingOverlap.CreateBacktrace = (void *)((ulonglong)uVar2 << 0x20);
  local_60.field1_0x8._24_8_ = (ulonglong)(uint)param_1->_padding_ << 0x20;
  local_60.field1_0x8._36_1_ = EVar1;
  local_60.field1_0x8._32_4_ = 8;
  local_60.field1_0x8._37_2_ = local_res8._5_2_;
  local_60.field1_0x8._39_1_ = local_res8._7_1_;
  RHIValidation::FTracker::AddOp(pFVar3,&local_60);
  (**(code **)(this->RHIContext->_padding_ + 0x1f0))
            (this->RHIContext,param_1,param_2,param_3,param_4);
  pFVar3 = (FTracker *)this->_padding_;
  local_res8.Access = UAVGraphics;
  local_res8.Pipelines = pFVar3->Pipeline;
  RHIValidation::FTracker::FUAVTracker::DrawOrDispatch(pFVar3->UAVTrackers,pFVar3,&local_res8);
  return;
}

// RHIDrawIndexedPrimitive @ 145ce9330

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FValidationContext::RHIDrawIndexedPrimitive
          (FValidationContext *this,FRHIBuffer *param_1,int param_2,uint param_3,uint param_4,
          uint param_5,uint param_6,uint param_7)

{
  ERHIPipeline EVar1;
  uint uVar2;
  FTracker *pFVar3;
  code *pcVar4;
  bool bVar5;
  FState local_res8;
  FName local_res10;
  undefined2 local_d3;
  undefined1 local_d1;
  undefined4 uStack_cc;
  FString local_88;
  FOperation local_78;
  
  ValidateDrawing(this);
  if (((param_1->Desc).Usage & IndexBuffer) == None) {
    local_res10 = (FName)param_1->_padding_;
    ::FName::ToString(&local_res10,&local_88);
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("EnumHasAnyFlags(IndexBuffer->GetUsage(), EBufferUsageFlags::IndexBuffer)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIValidationContext.h"
                       ,0x3c9,
                       L"The buffer \'%s\' is used as an index buffer, but was not created with the IndexBuffer flag."
                      );
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar3 = (FTracker *)this->_padding_;
  local_78.field1_0x8.Data_BeginTransition.Identity.Resource = (FResource *)&param_1->_padding_;
  uVar2 = *(uint *)((longlong)&param_1->_padding_ + 4);
  EVar1 = pFVar3->Pipeline;
  LOCK();
  *(int *)&param_1->_padding_ = (int)param_1->_padding_ + 1;
  UNLOCK();
  local_78.field1_0x8.Data_AliasingOverlap.ResourceAfter =
       (FResource *)
       ((ulonglong)(uint)*(longlong *)local_78.field1_0x8.Data_BreadcrumbRange.Range.First << 0x20);
  local_78.field1_0x8.Data_AliasingOverlap.CreateBacktrace = (void *)((ulonglong)uVar2 << 0x20);
  local_78._4_4_ = uStack_cc;
  local_78.Type = Assert;
  local_78.field1_0x8._24_8_ = (ulonglong)(uint)param_1->_padding_ << 0x20;
  local_78.field1_0x8._36_1_ = EVar1;
  local_78.field1_0x8._32_4_ = 8;
  local_78.field1_0x8._37_2_ = local_d3;
  local_78.field1_0x8._39_1_ = local_d1;
  RHIValidation::FTracker::AddOp(pFVar3,&local_78);
  (**(code **)(this->RHIContext->_padding_ + 0x1f8))
            (this->RHIContext,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  pFVar3 = (FTracker *)this->_padding_;
  local_res8.Access = UAVGraphics;
  local_res8.Pipelines = pFVar3->Pipeline;
  RHIValidation::FTracker::FUAVTracker::DrawOrDispatch(pFVar3->UAVTrackers,pFVar3,&local_res8);
  return;
}

// RHIDrawIndexedPrimitiveIndirect @ 145ce94e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FValidationContext::RHIDrawIndexedPrimitiveIndirect
          (FValidationContext *this,FRHIBuffer *param_1,FRHIBuffer *param_2,uint param_3)

{
  ERHIPipeline EVar1;
  uint uVar2;
  FTracker *pFVar3;
  code *pcVar4;
  bool bVar5;
  FState local_res8;
  FName local_res10;
  undefined2 local_res1d;
  undefined1 local_res1f;
  undefined4 uStack_114;
  undefined2 local_cb;
  undefined1 local_c9;
  FString local_c8;
  FOperation local_b8;
  FOperation local_70;
  
  ValidateDrawing(this);
  if (((param_1->Desc).Usage & IndexBuffer) == None) {
    local_res10 = (FName)param_1->_padding_;
    ::FName::ToString(&local_res10,&local_c8);
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("EnumHasAnyFlags(IndexBuffer->GetUsage(), EBufferUsageFlags::IndexBuffer)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIValidationContext.h"
                       ,0x3d2,
                       L"The buffer \'%s\' is used as an index buffer, but was not created with the IndexBuffer flag."
                      );
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  FValidationRHI::ValidateIndirectArgsBuffer(param_2,param_3,0x14,0);
  pFVar3 = (FTracker *)this->_padding_;
  local_b8.field1_0x8.Data_BeginTransition.Identity.Resource = (FResource *)&param_2->_padding_;
  uVar2 = *(uint *)((longlong)&param_2->_padding_ + 4);
  EVar1 = pFVar3->Pipeline;
  LOCK();
  *(int *)&param_2->_padding_ = (int)param_2->_padding_ + 1;
  UNLOCK();
  local_b8._4_4_ = uStack_114;
  local_b8.Type = Assert;
  local_b8.field1_0x8.Data_AliasingOverlap.ResourceAfter =
       (FResource *)
       ((ulonglong)(uint)*(longlong *)local_b8.field1_0x8.Data_BreadcrumbRange.Range.First << 0x20);
  local_b8.field1_0x8.Data_AliasingOverlap.CreateBacktrace = (void *)((ulonglong)uVar2 << 0x20);
  local_b8.field1_0x8._24_8_ = (ulonglong)(uint)param_2->_padding_ << 0x20;
  local_b8.field1_0x8._36_1_ = EVar1;
  local_b8.field1_0x8._32_4_ = 4;
  local_b8.field1_0x8._37_2_ = local_res1d;
  local_b8.field1_0x8._39_1_ = local_res1f;
  RHIValidation::FTracker::AddOp(pFVar3,&local_b8);
  pFVar3 = (FTracker *)this->_padding_;
  local_70.field1_0x8.Data_BeginTransition.Identity.Resource = (FResource *)&param_1->_padding_;
  uVar2 = *(uint *)((longlong)&param_1->_padding_ + 4);
  EVar1 = pFVar3->Pipeline;
  LOCK();
  *(int *)&param_1->_padding_ = (int)param_1->_padding_ + 1;
  UNLOCK();
  local_70._4_4_ = uStack_114;
  local_70.Type = Assert;
  local_70.field1_0x8.Data_AliasingOverlap.ResourceAfter =
       (FResource *)
       ((ulonglong)(uint)*(longlong *)local_70.field1_0x8.Data_BreadcrumbRange.Range.First << 0x20);
  local_70.field1_0x8.Data_AliasingOverlap.CreateBacktrace = (void *)((ulonglong)uVar2 << 0x20);
  local_70.field1_0x8._24_8_ = (ulonglong)(uint)param_1->_padding_ << 0x20;
  local_70.field1_0x8._36_1_ = EVar1;
  local_70.field1_0x8._32_4_ = 8;
  local_70.field1_0x8._37_2_ = local_cb;
  local_70.field1_0x8._39_1_ = local_c9;
  RHIValidation::FTracker::AddOp(pFVar3,&local_70);
  (**(code **)(this->RHIContext->_padding_ + 0x200))(this->RHIContext,param_1,param_2,param_3);
  pFVar3 = (FTracker *)this->_padding_;
  local_res8.Access = UAVGraphics;
  local_res8.Pipelines = pFVar3->Pipeline;
  RHIValidation::FTracker::FUAVTracker::DrawOrDispatch(pFVar3->UAVTrackers,pFVar3,&local_res8);
  return;
}

// RHIDrawPrimitive @ 145ce9720

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __thiscall
FValidationContext::RHIDrawPrimitive
          (FValidationContext *this,uint param_1,uint param_2,uint param_3)

{
  FTracker *pFVar1;
  FState local_res8;
  
  ValidateDrawing(this);
  (**(code **)(this->RHIContext->_padding_ + 0x1e0))(this->RHIContext,param_1,param_2,param_3);
  pFVar1 = (FTracker *)this->_padding_;
  local_res8.Access = UAVGraphics;
  local_res8.Pipelines = pFVar1->Pipeline;
  RHIValidation::FTracker::FUAVTracker::DrawOrDispatch(pFVar1->UAVTrackers,pFVar1,&local_res8);
  return;
}

// RHIDrawPrimitiveIndirect @ 145ce97a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FValidationContext::RHIDrawPrimitiveIndirect
          (FValidationContext *this,FRHIBuffer *param_1,uint param_2)

{
  ERHIPipeline EVar1;
  uint uVar2;
  FTracker *pFVar3;
  FState local_res8;
  undefined4 uStack_94;
  FOperation local_50;
  
  ValidateDrawing(this);
  FValidationRHI::ValidateIndirectArgsBuffer(param_1,param_2,0x10,0);
  pFVar3 = (FTracker *)this->_padding_;
  local_50.field1_0x8.Data_BeginTransition.Identity.Resource = (FResource *)&param_1->_padding_;
  uVar2 = *(uint *)((longlong)&param_1->_padding_ + 4);
  EVar1 = pFVar3->Pipeline;
  LOCK();
  *(int *)&param_1->_padding_ = (int)param_1->_padding_ + 1;
  UNLOCK();
  local_50.field1_0x8.Data_AliasingOverlap.ResourceAfter =
       (FResource *)
       ((ulonglong)(uint)*(longlong *)local_50.field1_0x8.Data_BreadcrumbRange.Range.First << 0x20);
  local_50.field1_0x8.Data_AliasingOverlap.CreateBacktrace = (void *)((ulonglong)uVar2 << 0x20);
  local_50._4_4_ = uStack_94;
  local_50.Type = Assert;
  local_50.field1_0x8._24_8_ = (ulonglong)(uint)param_1->_padding_ << 0x20;
  local_50.field1_0x8._36_1_ = EVar1;
  local_50.field1_0x8._32_4_ = 4;
  local_50.field1_0x8._37_2_ = local_res8._5_2_;
  local_50.field1_0x8._39_1_ = local_res8._7_1_;
  RHIValidation::FTracker::AddOp(pFVar3,&local_50);
  (**(code **)(this->RHIContext->_padding_ + 0x1e8))(this->RHIContext,param_1,param_2);
  pFVar3 = (FTracker *)this->_padding_;
  local_res8.Access = UAVGraphics;
  local_res8.Pipelines = pFVar3->Pipeline;
  RHIValidation::FTracker::FUAVTracker::DrawOrDispatch(pFVar3->UAVTrackers,pFVar3,&local_res8);
  return;
}

// RHIEndBreadcrumbGPU @ 145ce9900

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __thiscall
FValidationContext::RHIEndBreadcrumbGPU(FValidationContext *this,FRHIBreadcrumbNode *param_1)

{
  RHIValidation::FTracker::EndBreadcrumbGPU((FTracker *)this->_padding_,param_1);
                    /* WARNING: Could not recover jumptable at 0x000145ce9930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->RHIContext->_padding_ + 0xd0))(this->RHIContext,param_1);
  return;
}

// RHIEndDrawingViewport @ 145ce9940

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __thiscall
FValidationContext::RHIEndDrawingViewport
          (FValidationContext *this,FRHIViewport *param_1,bool param_2,bool param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000145ce994a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->RHIContext->_padding_ + 400))();
  return;
}

// RHIEndParallelRenderPass @ 145ce99c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __thiscall FValidationContext::RHIEndParallelRenderPass(FValidationContext *this)

{
                    /* WARNING: Could not recover jumptable at 0x000145ce99ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->RHIContext->_padding_ + 0x240))();
  return;
}

// RHIEndRenderPass @ 145ce99e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __thiscall FValidationContext::RHIEndRenderPass(FValidationContext *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  if ((this->State).bInsideBeginRenderPass == false) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("State.bInsideBeginRenderPass",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIValidationContext.h"
                       ,0x490,L"Trying to end a RenderPass but not inside one!");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  (**(code **)(this->RHIContext->_padding_ + 0x250))();
  (this->State).bInsideBeginRenderPass = false;
  iVar1 = (this->State).RenderPassName.Data.ArrayNum;
  iVar4 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar4 = 0;
  }
  ::FString::AssignRange
            (&(this->State).PreviousRenderPassName,
             (wchar_t *)(this->State).RenderPassName.Data.AllocatorInstance.Data,iVar4);
  return;
}

// RHIEndRenderQuery @ 145ce9a60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __thiscall
FValidationContext::RHIEndRenderQuery(FValidationContext *this,FRHIRenderQuery *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000145ce9a6a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->RHIContext->_padding_ + 0x188))();
  return;
}

// RHIEndTransitions @ 145ce9c70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FValidationContext::RHIEndTransitions
          (FValidationContext *this,TArrayView<FRHITransition_const_*,int> *param_1)

{
  FRHITransition **ppFVar1;
  FOperation *pFVar2;
  int iVar3;
  FRHITransition *pFVar4;
  FTracker *pFVar5;
  FOperation *pFVar6;
  FRHITransition **ppFVar7;
  FRHITransition **ppFVar8;
  undefined1 local_res18 [8];
  FRHITransition **local_res20;
  undefined4 local_58;
  undefined4 uStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  
  ppFVar7 = param_1->DataPtr;
  ppFVar1 = ppFVar7 + param_1->ArrayNum;
  local_res20 = ppFVar7;
  if (ppFVar7 != ppFVar1) {
    do {
      pFVar4 = *ppFVar7;
      if (((pFVar4->Flags & AllowDuringRenderPass) == None) &&
         ((this->State).bInsideBeginRenderPass != false)) {
        `FValidationContext::RHIEndTransitions'::__l9::<lambda_1>::operator()(local_res18);
      }
      iVar3 = (int)pFVar4->_padding_;
      pFVar6 = (FOperation *)pFVar4->_padding_;
      pFVar5 = (FTracker *)this->_padding_;
      pFVar2 = pFVar6 + iVar3;
      while( true ) {
        if ((int)pFVar4->_padding_ != iVar3) {
          `TCheckedPointerIterator<RHIValidation::FOperation_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res18);
        }
        if (pFVar6 == pFVar2) break;
        RHIValidation::FTracker::AddOp(pFVar5,pFVar6);
        pFVar6 = pFVar6 + 1;
      }
      ppFVar7 = ppFVar7 + 1;
      ppFVar8 = local_res20;
    } while (ppFVar7 != ppFVar1);
    do {
      pFVar4 = *ppFVar8;
      pFVar5 = (FTracker *)this->_padding_;
      iVar3 = (int)pFVar4->_padding_;
      pFVar6 = (FOperation *)pFVar4->_padding_;
      pFVar2 = pFVar6 + iVar3;
      while( true ) {
        if ((int)pFVar4->_padding_ != iVar3) {
          `TCheckedPointerIterator<RHIValidation::FOperation_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res18);
        }
        if (pFVar6 == pFVar2) break;
        RHIValidation::FTracker::AddOp(pFVar5,pFVar6);
        pFVar6 = pFVar6 + 1;
      }
      ppFVar8 = ppFVar8 + 1;
      ppFVar7 = local_res20;
    } while (ppFVar8 != ppFVar1);
    do {
      pFVar4 = *ppFVar7;
      iVar3 = (int)pFVar4->_padding_;
      pFVar6 = (FOperation *)pFVar4->_padding_;
      pFVar5 = (FTracker *)this->_padding_;
      pFVar2 = pFVar6 + iVar3;
      while( true ) {
        if ((int)pFVar4->_padding_ != iVar3) {
          `TCheckedPointerIterator<RHIValidation::FOperation_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res18);
        }
        if (pFVar6 == pFVar2) break;
        RHIValidation::FTracker::AddOp(pFVar5,pFVar6);
        pFVar6 = pFVar6 + 1;
      }
      ppFVar7 = ppFVar7 + 1;
    } while (ppFVar7 != ppFVar1);
  }
  local_58 = *(undefined4 *)&param_1->DataPtr;
  uStack_54 = *(undefined4 *)((longlong)&param_1->DataPtr + 4);
  iStack_50 = param_1->ArrayNum;
  uStack_4c = *(undefined4 *)&param_1->field_0xc;
  (**(code **)(this->RHIContext->_padding_ + 0x50))(this->RHIContext,&local_58);
  return;
}

// RHIEndUAVOverlap @ 145ce9ff0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FValidationContext::RHIEndUAVOverlap
          (FValidationContext *this,TArrayView<FRHIUnorderedAccessView_*_const,int> *param_1)

{
  FRHIUnorderedAccessView **ppFVar1;
  FTracker *this_00;
  FRHIUnorderedAccessView **ppFVar2;
  undefined4 local_d8;
  undefined4 uStack_d4;
  int iStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  FResource *pFStack_c0;
  uint local_a8;
  uint uStack_a4;
  ERHIAccess EStack_a0;
  undefined4 uStack_9c;
  FState local_98;
  undefined8 uStack_90;
  void *local_88;
  FViewIdentity local_80;
  FOperation local_58;
  
  ppFVar2 = param_1->DataPtr;
  ppFVar1 = ppFVar2 + param_1->ArrayNum;
  for (; ppFVar2 != ppFVar1; ppFVar2 = ppFVar2 + 1) {
    this_00 = (FTracker *)this->_padding_;
    RHIValidation::FViewIdentity::FViewIdentity
              (&local_80,*(FRHIViewableResource **)&(*ppFVar2)->field_0x18,
               (FRHIViewDesc *)&(*ppFVar2)->field_0x20);
    LOCK();
    ((FThreadSafeCounter *)(local_80._padding_ + 0xa8))->Counter =
         ((FThreadSafeCounter *)(local_80._padding_ + 0xa8))->Counter + 1;
    UNLOCK();
    pFStack_c0 = (FResource *)local_80._padding_;
    EStack_a0 = EStack_a0 & ~(CopySrc|SRVMask|VertexOrIndexBuffer|IndirectArgs|Present|CPURead);
    local_58.field1_0x8.Data_BeginTransition.Identity.SubresourceRange.MipIndex =
         (undefined4)local_80._padding_;
    local_58.field1_0x8.Data_SetTrackedAccess.State.Pipelines = local_80._padding_._4_1_;
    local_58.field1_0x8.Data_BeginTransition.Identity.SubresourceRange.NumMips._1_3_ =
         local_80._padding_._5_3_;
    local_58.field1_0x8.Data_AliasingOverlap.CreateBacktrace = (void *)local_80._padding_;
    local_c8 = 0xc;
    local_58._4_4_ = uStack_c4;
    local_58.Type = SpecificUAVOverlap;
    local_58.field1_0x8.Data_BeginTransition.Identity.Resource = (FResource *)local_80._padding_;
    local_58.field1_0x8.Data_BeginTransition.CreateBacktrace = local_88;
    local_a8 = (uint)local_80._padding_;
    uStack_a4 = local_80._padding_._4_4_;
    local_58.field1_0x8.Data_BeginTransition.Identity.SubresourceRange.PlaneIndex =
         (uint)local_80._padding_;
    local_58.field1_0x8.Data_BeginTransition.Identity.SubresourceRange.NumPlanes =
         local_80._padding_._4_4_;
    local_58.field1_0x8.Data_BeginTransition.PreviousState.Access = EStack_a0;
    local_58.field1_0x8._36_4_ = uStack_9c;
    local_58.field1_0x8.Data_BeginTransition.NextState = local_98;
    local_58.field1_0x8._48_8_ = uStack_90;
    RHIValidation::FTracker::AddOp(this_00,&local_58);
  }
  local_d8 = *(undefined4 *)&param_1->DataPtr;
  uStack_d4 = *(undefined4 *)((longlong)&param_1->DataPtr + 4);
  iStack_d0 = param_1->ArrayNum;
  uStack_cc = *(undefined4 *)&param_1->field_0xc;
  (**(code **)(this->RHIContext->_padding_ + 0x90))(this->RHIContext,&local_d8);
  return;
}

// RHIEndUAVOverlap @ 145cea130

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall FValidationContext::RHIEndUAVOverlap(FValidationContext *this)

{
  undefined4 uStack_94;
  uint7 uStack_8f;
  FOperation local_50;
  
  local_50._4_4_ = uStack_94;
  local_50.Type = AllUAVsOverlap;
  local_50.field1_0x8.Data_BeginTransition.Identity.Resource =
       (FResource *)((ulonglong)uStack_8f << 8);
  RHIValidation::FTracker::AddOp((FTracker *)this->_padding_,&local_50);
                    /* WARNING: Could not recover jumptable at 0x000145cea196. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->RHIContext->_padding_ + 0x98))();
  return;
}

// RHIExecuteMultiIndirectClusterOperation @ 145cea1f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EVertexElementType": Some values do not have unique names */

void __thiscall
FValidationContext::RHIExecuteMultiIndirectClusterOperation
          (FValidationContext *this,FRayTracingClusterOperationParams *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000145cea1fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->RHIContext->_padding_ + 0x128))();
  return;
}

// RHIGetGPUMask @ 145ceaa00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

FRHIGPUMask __thiscall FValidationContext::RHIGetGPUMask(FValidationContext *this)

{
  uint in_EDX;
  
  (**(code **)(this->RHIContext->_padding_ + 0xf0))();
  return (FRHIGPUMask)in_EDX;
}

// RHIGetNativeCommandBuffer @ 145ceaa90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void * __thiscall FValidationContext::RHIGetNativeCommandBuffer(FValidationContext *this)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000145ceaa9a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = (void *)(**(code **)(this->RHIContext->_padding_ + 0x158))();
  return pvVar1;
}

// RHIMultiDrawIndexedPrimitiveIndirect @ 145ceb680

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FValidationContext::RHIMultiDrawIndexedPrimitiveIndirect
          (FValidationContext *this,FRHIBuffer *param_1,FRHIBuffer *param_2,uint param_3,
          FRHIBuffer *param_4,uint param_5,uint param_6)

{
  ERHIPipeline EVar1;
  uint uVar2;
  FTracker *pFVar3;
  code *pcVar4;
  bool bVar5;
  FState local_res8;
  FName local_res10;
  undefined2 local_res1d;
  undefined1 local_res1f;
  undefined4 uStack_174;
  undefined2 local_12b;
  undefined1 local_129;
  undefined2 local_123;
  undefined1 local_121;
  FString local_120;
  FOperation local_110;
  FOperation local_c8;
  FOperation local_80;
  
  ValidateDrawing(this);
  if (((param_1->Desc).Usage & IndexBuffer) == None) {
    local_res10 = (FName)param_1->_padding_;
    ::FName::ToString(&local_res10,&local_120);
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("EnumHasAnyFlags(IndexBuffer->GetUsage(), EBufferUsageFlags::IndexBuffer)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIValidationContext.h"
                       ,0x3dd,
                       L"The buffer \'%s\' is used as an index buffer, but was not created with the IndexBuffer flag."
                      );
    if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_120.Data.AllocatorInstance.Data);
    }
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  FValidationRHI::ValidateIndirectArgsBuffer(param_2,param_3,0x14,0);
  pFVar3 = (FTracker *)this->_padding_;
  local_110.field1_0x8.Data_BeginTransition.Identity.Resource = (FResource *)&param_2->_padding_;
  uVar2 = *(uint *)((longlong)&param_2->_padding_ + 4);
  EVar1 = pFVar3->Pipeline;
  LOCK();
  *(int *)&param_2->_padding_ = (int)param_2->_padding_ + 1;
  UNLOCK();
  local_110._4_4_ = uStack_174;
  local_110.Type = Assert;
  local_110.field1_0x8.Data_AliasingOverlap.ResourceAfter =
       (FResource *)
       ((ulonglong)(uint)*(longlong *)local_110.field1_0x8.Data_BreadcrumbRange.Range.First << 0x20)
  ;
  local_110.field1_0x8.Data_AliasingOverlap.CreateBacktrace = (void *)((ulonglong)uVar2 << 0x20);
  local_110.field1_0x8._24_8_ = (ulonglong)(uint)param_2->_padding_ << 0x20;
  local_110.field1_0x8._36_1_ = EVar1;
  local_110.field1_0x8._32_4_ = 4;
  local_110.field1_0x8._37_2_ = local_res1d;
  local_110.field1_0x8._39_1_ = local_res1f;
  RHIValidation::FTracker::AddOp(pFVar3,&local_110);
  if (param_4 != (FRHIBuffer *)0x0) {
    pFVar3 = (FTracker *)this->_padding_;
    local_c8.field1_0x8.Data_BeginTransition.Identity.Resource = (FResource *)&param_4->_padding_;
    uVar2 = *(uint *)((longlong)&param_4->_padding_ + 4);
    EVar1 = pFVar3->Pipeline;
    LOCK();
    *(int *)&param_4->_padding_ = (int)param_4->_padding_ + 1;
    UNLOCK();
    local_c8._4_4_ = uStack_174;
    local_c8.Type = Assert;
    local_c8.field1_0x8.Data_AliasingOverlap.ResourceAfter =
         (FResource *)
         ((ulonglong)(uint)*(longlong *)local_c8.field1_0x8.Data_BreadcrumbRange.Range.First << 0x20
         );
    local_c8.field1_0x8.Data_AliasingOverlap.CreateBacktrace = (void *)((ulonglong)uVar2 << 0x20);
    local_c8.field1_0x8._24_8_ = (ulonglong)(uint)param_4->_padding_ << 0x20;
    local_c8.field1_0x8._36_1_ = EVar1;
    local_c8.field1_0x8._32_4_ = 4;
    local_c8.field1_0x8._37_2_ = local_12b;
    local_c8.field1_0x8._39_1_ = local_129;
    RHIValidation::FTracker::AddOp(pFVar3,&local_c8);
  }
  pFVar3 = (FTracker *)this->_padding_;
  local_80.field1_0x8.Data_BeginTransition.Identity.Resource = (FResource *)&param_1->_padding_;
  uVar2 = *(uint *)((longlong)&param_1->_padding_ + 4);
  EVar1 = pFVar3->Pipeline;
  LOCK();
  *(int *)&param_1->_padding_ = (int)param_1->_padding_ + 1;
  UNLOCK();
  local_80._4_4_ = uStack_174;
  local_80.Type = Assert;
  local_80.field1_0x8.Data_AliasingOverlap.ResourceAfter =
       (FResource *)
       ((ulonglong)(uint)*(longlong *)local_80.field1_0x8.Data_BreadcrumbRange.Range.First << 0x20);
  local_80.field1_0x8.Data_AliasingOverlap.CreateBacktrace = (void *)((ulonglong)uVar2 << 0x20);
  local_80.field1_0x8._24_8_ = (ulonglong)(uint)param_1->_padding_ << 0x20;
  local_80.field1_0x8._36_1_ = EVar1;
  local_80.field1_0x8._32_4_ = 8;
  local_80.field1_0x8._37_2_ = local_123;
  local_80.field1_0x8._39_1_ = local_121;
  RHIValidation::FTracker::AddOp(pFVar3,&local_80);
  (**(code **)(this->RHIContext->_padding_ + 0x208))
            (this->RHIContext,param_1,param_2,param_3,param_4,param_5,param_6);
  pFVar3 = (FTracker *)this->_padding_;
  local_res8.Access = UAVGraphics;
  local_res8.Pipelines = pFVar3->Pipeline;
  RHIValidation::FTracker::FUAVTracker::DrawOrDispatch(pFVar3->UAVTrackers,pFVar3,&local_res8);
  return;
}

// RHINextSubpass @ 145ceb9a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __thiscall FValidationContext::RHINextSubpass(FValidationContext *this)

{
                    /* WARNING: Could not recover jumptable at 0x000145ceb9aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->RHIContext->_padding_ + 600))();
  return;
}

// RHIRayTraceDispatch @ 145ceba60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __thiscall
FValidationContext::RHIRayTraceDispatch
          (FValidationContext *this,FRHIRayTracingPipelineState *param_1,
          FRHIRayTracingShader *param_2,FRHIShaderBindingTable *param_3,
          FRayTracingShaderBindings *param_4,uint param_5,uint param_6)

{
  RHIValidation::FShaderBindingTable::ValidateStateForDispatch
            ((FShaderBindingTable *)&param_3->_padding_,(FTracker *)this->_padding_);
                    /* WARNING: Could not recover jumptable at 0x000145cebab8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->RHIContext->_padding_ + 0x20))(this->RHIContext,param_1,param_2,param_3);
  return;
}

// RHIRayTraceDispatchIndirect @ 145cebc80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FValidationContext::RHIRayTraceDispatchIndirect
          (FValidationContext *this,FRHIRayTracingPipelineState *param_1,
          FRHIRayTracingShader *param_2,FRHIShaderBindingTable *param_3,
          FRayTracingShaderBindings *param_4,FRHIBuffer *param_5,uint param_6)

{
  longlong *plVar1;
  ERHIPipeline EVar2;
  uint uVar3;
  FTracker *pFVar4;
  undefined4 uStack_b4;
  FOperation local_70;
  
  FValidationRHI::ValidateIndirectArgsBuffer(param_5,param_6,0xc,0);
  pFVar4 = (FTracker *)this->_padding_;
  plVar1 = &param_5->_padding_;
  uVar3 = *(uint *)((longlong)&param_5->_padding_ + 4);
  EVar2 = pFVar4->Pipeline;
  LOCK();
  *(int *)&param_5->_padding_ = (int)param_5->_padding_ + 1;
  UNLOCK();
  local_70.field1_0x8.Data_AliasingOverlap.ResourceAfter =
       (FResource *)((ulonglong)(uint)*plVar1 << 0x20);
  local_70.field1_0x8.Data_AliasingOverlap.CreateBacktrace = (void *)((ulonglong)uVar3 << 0x20);
  local_70._4_4_ = uStack_b4;
  local_70.Type = Assert;
  local_70.field1_0x8._24_8_ = (ulonglong)(uint)param_5->_padding_ << 0x20;
  local_70.field1_0x8._36_1_ = EVar2;
  local_70.field1_0x8._32_4_ = 4;
  local_70.field1_0x8._37_2_ = param_5._5_2_;
  local_70.field1_0x8._39_1_ = param_5._7_1_;
  local_70.field1_0x8.Data_BreadcrumbRange.Range.First = (FRHIBreadcrumbNode *)plVar1;
  RHIValidation::FTracker::AddOp(pFVar4,&local_70);
  pFVar4 = (FTracker *)this->_padding_;
  uVar3 = *(uint *)((longlong)&param_5->_padding_ + 4);
  EVar2 = pFVar4->Pipeline;
  LOCK();
  *(int *)&param_5->_padding_ = (int)param_5->_padding_ + 1;
  UNLOCK();
  local_70.field1_0x8.Data_AliasingOverlap.ResourceAfter =
       (FResource *)((ulonglong)(uint)*plVar1 << 0x20);
  local_70.field1_0x8.Data_AliasingOverlap.CreateBacktrace = (void *)((ulonglong)uVar3 << 0x20);
  local_70.Type = Assert;
  local_70.field1_0x8._24_8_ = (ulonglong)(uint)param_5->_padding_ << 0x20;
  local_70.field1_0x8._36_1_ = EVar2;
  local_70.field1_0x8._32_4_ = 0x10;
  local_70.field1_0x8.Data_BreadcrumbRange.Range.First = (FRHIBreadcrumbNode *)plVar1;
  RHIValidation::FTracker::AddOp(pFVar4,&local_70);
  RHIValidation::FShaderBindingTable::ValidateStateForDispatch
            ((FShaderBindingTable *)&param_3->_padding_,(FTracker *)this->_padding_);
                    /* WARNING: Could not recover jumptable at 0x000145cebe2a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->RHIContext->_padding_ + 0x28))(this->RHIContext,param_1,param_2,param_3);
  return;
}

// RHIResummarizeHTile @ 145cec230

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FValidationContext::RHIResummarizeHTile(FValidationContext *this,FRHITexture *param_1)

{
  ERHIPipeline EVar1;
  uint uVar2;
  uint uVar3;
  FTracker *this_00;
  undefined2 local_resd;
  undefined1 local_resf;
  undefined4 uStack_94;
  FOperation local_50;
  
  this_00 = (FTracker *)this->_padding_;
  local_50.field1_0x8.Data_BeginTransition.Identity.Resource =
       (FResource *)(**(code **)(param_1->_padding_ + 8))(&param_1->_padding_);
  EVar1 = this_00->Pipeline;
  uVar2 = (local_50.field1_0x8.Data_BeginTransition.Identity.Resource)->NumArraySlices;
  uVar3 = (local_50.field1_0x8.Data_BeginTransition.Identity.Resource)->NumPlanes;
  LOCK();
  ((local_50.field1_0x8.Data_BeginTransition.Identity.Resource)->NumOpRefs).Counter =
       ((local_50.field1_0x8.Data_BeginTransition.Identity.Resource)->NumOpRefs).Counter + 1;
  UNLOCK();
  local_50.field1_0x8.Data_AliasingOverlap.ResourceAfter =
       (FResource *)
       ((ulonglong)(local_50.field1_0x8.Data_BeginTransition.Identity.Resource)->NumMips << 0x20);
  local_50.field1_0x8.Data_AliasingOverlap.CreateBacktrace = (void *)((ulonglong)uVar2 << 0x20);
  local_50._4_4_ = uStack_94;
  local_50.Type = Assert;
  local_50.field1_0x8._24_8_ = (ulonglong)uVar3 << 0x20;
  local_50.field1_0x8._36_1_ = EVar1;
  local_50.field1_0x8._32_4_ = 0x8000;
  local_50.field1_0x8._37_2_ = local_resd;
  local_50.field1_0x8._39_1_ = local_resf;
  RHIValidation::FTracker::AddOp(this_00,&local_50);
                    /* WARNING: Could not recover jumptable at 0x000145cec30c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->RHIContext->_padding_ + 0x178))(this->RHIContext,param_1);
  return;
}

// RHISetAsyncComputeBudget @ 145cec360

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __thiscall
FValidationContext::RHISetAsyncComputeBudget(FValidationContext *this,EAsyncComputeBudget param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000145cec36a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->RHIContext->_padding_ + 0x38))();
  return;
}

// RHISetBindingsOnShaderBindingTable @ 145cec380

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __thiscall
FValidationContext::RHISetBindingsOnShaderBindingTable
          (FValidationContext *this,FRHIShaderBindingTable *param_1,
          FRHIRayTracingPipelineState *param_2,uint param_3,FRayTracingLocalShaderBindings *param_4,
          ERayTracingBindingType param_5)

{
  FRayTracingPipelineState *pFVar1;
  
  pFVar1 = (FRayTracingPipelineState *)&param_2->field_0x18;
  if (param_2 == (FRHIRayTracingPipelineState *)0x0) {
    pFVar1 = (FRayTracingPipelineState *)0x0;
  }
  RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable
            ((FShaderBindingTable *)&param_1->_padding_,pFVar1,param_3,param_4,param_5);
                    /* WARNING: Could not recover jumptable at 0x000145cec3ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->RHIContext->_padding_ + 0x278))(this->RHIContext,param_1,param_2,param_3);
  return;
}

// RHISetBlendFactor @ 145cec410

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __thiscall
FValidationContext::RHISetBlendFactor(FValidationContext *this,FLinearColor *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000145cec41a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->RHIContext->_padding_ + 0x1d8))();
  return;
}

// RHISetComputePipelineState @ 145cec490

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __thiscall
FValidationContext::RHISetComputePipelineState
          (FValidationContext *this,FRHIComputePipelineState *param_1)

{
  IRHICommandContext *pIVar1;
  
  (this->State).bGfxPSOSet = false;
  (this->State).BoundShaders[0] = (FRHIShader *)0x0;
  (this->State).BoundShaders[1] = (FRHIShader *)0x0;
  (this->State).BoundShaders[2] = (FRHIShader *)0x0;
  (this->State).BoundShaders[3] = (FRHIShader *)0x0;
  (this->State).BoundShaders[4] = (FRHIShader *)0x0;
  (this->State).BoundShaders[5] = (FRHIShader *)0x0;
  (this->State).BoundShaders[6] = (FRHIShader *)0x0;
  (this->State).BoundShaders[7] = (FRHIShader *)0x0;
  (this->State).BoundShaders[8] = (FRHIShader *)0x0;
  (this->State).BoundShaders[9] = (FRHIShader *)0x0;
  (this->State).BoundShaders[10] = (FRHIShader *)0x0;
  (this->State).BoundShaders[0xb] = (FRHIShader *)0x0;
  (this->State).BoundShaders[5] = (FRHIShader *)(param_1->ComputeShader).Reference;
  RHIValidation::FTracker::ResetUAVState((FTracker *)this->_padding_,Compute);
  pIVar1 = this->RHIContext;
  (this->State).StaticUniformBuffers.bInSetPipelineStateCall = true;
  (**(code **)(pIVar1->_padding_ + 0x10))(pIVar1,param_1);
  (this->State).StaticUniformBuffers.bInSetPipelineStateCall = false;
  return;
}

// RHISetDepthBounds @ 145cec520

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __thiscall
FValidationContext::RHISetDepthBounds(FValidationContext *this,float param_1,float param_2)

{
  code *pcVar1;
  float fVar2;
  bool bVar3;
  
  fVar2 = __real_3f800000;
  if ((param_1 < 0.0) || (__real_3f800000 < param_1)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("MinDepth >= 0.f && MinDepth <= 1.f",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIValidationContext.h"
                       ,0x402,L"Depth bounds min of %f is outside allowed range of [0, 1]");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((param_2 < 0.0) || (fVar2 < param_2)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("MaxDepth >= 0.f && MaxDepth <= 1.f",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIValidationContext.h"
                       ,0x403,L"Depth bounds max of %f is outside allowed range of [0, 1]");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000145cec5fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->RHIContext->_padding_ + 0x220))(this->RHIContext,param_1,param_2);
  return;
}

// RHISetGPUMask @ 145cec810

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __thiscall FValidationContext::RHISetGPUMask(FValidationContext *this,FRHIGPUMask param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000145cec81a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->RHIContext->_padding_ + 0xe8))();
  return;
}

// RHISetGraphicsPipelineState @ 145cec830

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __thiscall
FValidationContext::RHISetGraphicsPipelineState
          (FValidationContext *this,FRHIGraphicsPipelineState *param_1,uint param_2,bool param_3)

{
  IRHICommandContext *pIVar1;
  code *pcVar2;
  bool bVar3;
  FRHIShader *pFVar4;
  uint uVar5;
  uint uVar6;
  FRHIShader **ppFVar7;
  
  if ((this->State).bInsideBeginRenderPass == false) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("State.bInsideBeginRenderPass",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIValidationContext.h"
                       ,0x326,L"Graphics PSOs can only be set inside a RenderPass!");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  (this->State).bGfxPSOSet = true;
  ppFVar7 = (this->State).BoundShaders;
  uVar6 = 0;
  do {
    uVar5 = uVar6 & 0xff;
    if (((((char)uVar6 == '\0') || (uVar5 == 1)) || (uVar5 == 2)) || ((uVar5 == 3 || (uVar5 == 4))))
    {
      pFVar4 = (FRHIShader *)(**(code **)(param_1->_padding_ + 0x10))(param_1);
    }
    else {
      pFVar4 = (FRHIShader *)0x0;
    }
    *ppFVar7 = pFVar4;
    uVar6 = uVar6 + 1;
    ppFVar7 = ppFVar7 + 1;
  } while ((int)uVar6 < 0xc);
  if (((param_1->DSMode).Value & DepthMask) != DepthNop) {
    if (((this->State).RenderPassInfo.DepthStencilRenderTarget.ExclusiveDepthStencil.Value &
        DepthMask) == DepthNop) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("DSV.ExclusiveDepthStencil.IsUsingDepth()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIValidationContext.h"
                         ,0x553,
                         L"Graphics PSO is using depth but it\'s not enabled on the RenderPass.");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if ((((byte)(param_1->DSMode).Value & 0xf) != 1) &&
       (((byte)(this->State).RenderPassInfo.DepthStencilRenderTarget.ExclusiveDepthStencil.Value &
        0xf) != 2)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("DSMode.IsDepthRead() || DSV.ExclusiveDepthStencil.IsDepthWrite()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIValidationContext.h"
                         ,0x554,
                         L"Graphics PSO is writing to depth but RenderPass depth is ReadOnly.");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  if (((param_1->DSMode).Value & StencilMask) != DepthNop) {
    if (((this->State).RenderPassInfo.DepthStencilRenderTarget.ExclusiveDepthStencil.Value &
        StencilMask) == DepthNop) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("DSV.ExclusiveDepthStencil.IsUsingStencil()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIValidationContext.h"
                         ,0x55a,
                         L"Graphics PSO is using stencil but it\'s not enabled on the RenderPass.");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if ((((byte)(param_1->DSMode).Value & 0xf0) != 0x10) &&
       (((byte)(this->State).RenderPassInfo.DepthStencilRenderTarget.ExclusiveDepthStencil.Value &
        0xf0) != 0x20)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("DSMode.IsStencilRead() || DSV.ExclusiveDepthStencil.IsStencilWrite()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIValidationContext.h"
                         ,0x55b,
                         L"Graphics PSO is writing to stencil but RenderPass stencil is ReadOnly.");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  RHIValidation::FTracker::ResetUAVState((FTracker *)this->_padding_,Graphics);
  pIVar1 = this->RHIContext;
  (this->State).StaticUniformBuffers.bInSetPipelineStateCall = true;
  (**(code **)(pIVar1->_padding_ + 0x1b8))(pIVar1,param_1,param_2,param_3);
  (this->State).StaticUniformBuffers.bInSetPipelineStateCall = false;
  return;
}

// RHISetMultipleViewports @ 145ceca10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __thiscall
FValidationContext::RHISetMultipleViewports
          (FValidationContext *this,uint param_1,FViewportBounds *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000145ceca1a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->RHIContext->_padding_ + 0x170))();
  return;
}

// RHISetScissorRect @ 145ceca30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __thiscall
FValidationContext::RHISetScissorRect
          (FValidationContext *this,bool param_1,uint param_2,uint param_3,uint param_4,uint param_5
          )

{
                    /* WARNING: Could not recover jumptable at 0x000145ceca41. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->RHIContext->_padding_ + 0x1b0))();
  return;
}

// RHISetShaderParameters @ 145cecc60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __thiscall
FValidationContext::RHISetShaderParameters
          (FValidationContext *this,FRHIComputeShader *param_1,
          TArrayView<unsigned_char_const_,int> *param_2,
          TArrayView<FRHIShaderParameter_const_,int> *param_3,
          TArrayView<FRHIShaderParameterResource_const_,int> *param_4,
          TArrayView<FRHIShaderParameterResource_const_,int> *param_5)

{
  FRHIComputeShader *pFVar1;
  FRHIShaderParameterResource *pFVar2;
  TArrayView<FRHIShaderParameterResource_const_,int> local_68;
  FRHIShaderParameterResource *local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  
  pFVar1 = (FRHIComputeShader *)(this->State).BoundShaders[5];
  if (pFVar1 != (FRHIComputeShader *)0x0) {
    if (param_1 == pFVar1) {
      local_68.DataPtr = param_4->DataPtr;
      local_68.ArrayNum = param_4->ArrayNum;
      local_68._12_4_ = *(undefined4 *)&param_4->field_0xc;
      ValidateShaderParameters
                ((FRHIShader *)param_1,(FTracker *)this->_padding_,
                 &(this->State).StaticUniformBuffers,
                 (this->State).BoundUniformBuffers.StageBindings + 5,&local_68,SRVCompute,Compute);
      local_68.DataPtr = param_5->DataPtr;
      local_68.ArrayNum = param_5->ArrayNum;
      local_68._12_4_ = *(undefined4 *)&param_5->field_0xc;
      ValidateShaderParameters
                ((FRHIShader *)param_1,(FTracker *)this->_padding_,
                 &(this->State).StaticUniformBuffers,
                 (this->State).BoundUniformBuffers.StageBindings + 5,&local_68,SRVCompute,Compute);
      local_68.DataPtr = param_5->DataPtr;
      local_68.ArrayNum = param_5->ArrayNum;
      local_68._12_4_ = *(undefined4 *)&param_5->field_0xc;
      local_58 = param_4->DataPtr;
      uStack_50 = *(undefined8 *)&param_4->ArrayNum;
      local_48 = *(undefined4 *)&param_3->DataPtr;
      uStack_44 = *(undefined4 *)((longlong)&param_3->DataPtr + 4);
      iStack_40 = param_3->ArrayNum;
      uStack_3c = *(undefined4 *)&param_3->field_0xc;
      local_38 = *(undefined4 *)&param_2->DataPtr;
      uStack_34 = *(undefined4 *)((longlong)&param_2->DataPtr + 4);
      iStack_30 = param_2->ArrayNum;
      uStack_2c = *(undefined4 *)&param_2->field_0xc;
      (**(code **)(this->RHIContext->_padding_ + 0xa0))
                (this->RHIContext,param_1,&local_38,&local_48,&local_58,&local_68);
    }
    else {
      ::FString::PrintfImpl
                ((FString *)&local_68,
                 L"Invalid attempt to set parameters for compute shader \'%s\' while the currently bound shader is \'%s\'"
                );
      pFVar2 = (FRHIShaderParameterResource *)L"";
      if (local_68.ArrayNum != 0) {
        pFVar2 = local_68.DataPtr;
      }
      FValidationRHI::ReportValidationFailure((wchar_t *)pFVar2);
      if (local_68.DataPtr != (FRHIShaderParameterResource *)0x0) {
        FMemory::Free(local_68.DataPtr);
      }
    }
    return;
  }
  FValidationRHI::ReportValidationFailure
            (L"A compute PSO has to be set to set resources into a shader!");
  return;
}

// RHISetShaderParameters @ 145cece80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __thiscall
FValidationContext::RHISetShaderParameters
          (FValidationContext *this,FRHIGraphicsShader *param_1,
          TArrayView<unsigned_char_const_,int> *param_2,
          TArrayView<FRHIShaderParameter_const_,int> *param_3,
          TArrayView<FRHIShaderParameterResource_const_,int> *param_4,
          TArrayView<FRHIShaderParameterResource_const_,int> *param_5)

{
  FStageBoundUniformBuffers *pFVar1;
  ERHIAccess EVar2;
  TArrayView<FRHIShaderParameterResource_const_,int> local_68;
  FRHIShaderParameterResource *local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  
  if ((this->State).bGfxPSOSet == false) {
    FValidationRHI::ReportValidationFailure
              (L"A graphics PSO has to be set to set resources into a shader!");
    return;
  }
  pFVar1 = (this->State).BoundUniformBuffers.StageBindings + (byte)param_1->field_0x104;
  EVar2 = SRVGraphicsNonPixel;
  if (param_1->field_0x104 == 3) {
    EVar2 = SRVGraphicsPixel;
  }
  local_68.DataPtr = param_4->DataPtr;
  local_68.ArrayNum = param_4->ArrayNum;
  local_68._12_4_ = *(undefined4 *)&param_4->field_0xc;
  ValidateShaderParameters
            ((FRHIShader *)param_1,(FTracker *)this->_padding_,&(this->State).StaticUniformBuffers,
             pFVar1,&local_68,EVar2,Graphics);
  local_68.DataPtr = param_5->DataPtr;
  local_68.ArrayNum = param_5->ArrayNum;
  local_68._12_4_ = *(undefined4 *)&param_5->field_0xc;
  ValidateShaderParameters
            ((FRHIShader *)param_1,(FTracker *)this->_padding_,&(this->State).StaticUniformBuffers,
             pFVar1,&local_68,EVar2,Graphics);
  local_58 = param_4->DataPtr;
  uStack_50 = *(undefined8 *)&param_4->ArrayNum;
  local_68.DataPtr = param_5->DataPtr;
  local_68.ArrayNum = param_5->ArrayNum;
  local_68._12_4_ = *(undefined4 *)&param_5->field_0xc;
  local_38 = *(undefined4 *)&param_2->DataPtr;
  uStack_34 = *(undefined4 *)((longlong)&param_2->DataPtr + 4);
  iStack_30 = param_2->ArrayNum;
  uStack_2c = *(undefined4 *)&param_2->field_0xc;
  local_48 = *(undefined4 *)&param_3->DataPtr;
  uStack_44 = *(undefined4 *)((longlong)&param_3->DataPtr + 4);
  iStack_40 = param_3->ArrayNum;
  uStack_3c = *(undefined4 *)&param_3->field_0xc;
  (**(code **)(this->RHIContext->_padding_ + 0x1c0))
            (this->RHIContext,param_1,&local_38,&local_48,&local_58,&local_68);
  return;
}

// RHISetShaderRootConstants @ 145ced040

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __thiscall
FValidationContext::RHISetShaderRootConstants
          (FValidationContext *this,TIntVector4<unsigned_int> *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000145ced04a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->RHIContext->_padding_ + 0x68))();
  return;
}

// RHISetShaderUnbinds @ 145ced290

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __thiscall
FValidationContext::RHISetShaderUnbinds
          (FValidationContext *this,FRHIComputeShader *param_1,
          TArrayView<FRHIShaderParameterUnbind_const_,int> *param_2)

{
  longlong lVar1;
  FRHIBreadcrumbNode *this_00;
  bool bVar2;
  wchar_t wVar3;
  FOutputDeviceRedirector *this_01;
  ulonglong uVar4;
  wchar_t *pwVar5;
  char local_res8;
  uint local_res20 [2];
  uint local_58 [2];
  FString local_50;
  FString local_40;
  FString local_30;
  undefined4 local_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  if ((this->State).BoundShaders[5] != (FRHIShader *)0x0) {
    local_18 = *(undefined4 *)&param_2->DataPtr;
    uStack_14 = *(undefined4 *)((longlong)&param_2->DataPtr + 4);
    iStack_10 = param_2->ArrayNum;
    uStack_c = *(undefined4 *)&param_2->field_0xc;
    (**(code **)(this->RHIContext->_padding_ + 0xa8))(this->RHIContext,param_1,&local_18);
    return;
  }
  uVar4 = 0xffffffff;
  pwVar5 = L"A compute PSO has to be set to set resources into a shader!";
  wVar3 = L'A';
  do {
    pwVar5 = pwVar5 + 1;
    local_res20[0] =
         FCrc::CRCTablesSB8[1][uVar4 >> 0x10 & 0xff] ^
         FCrc::CRCTablesSB8[2][((ushort)wVar3 ^ uVar4) >> 8 & 0xff] ^
         FCrc::CRCTablesSB8[0][uVar4 >> 0x18] ^
         FCrc::CRCTablesSB8[3][((ushort)wVar3 ^ uVar4) & 0xff];
    uVar4 = (ulonglong)local_res20[0];
    wVar3 = *pwVar5;
  } while (wVar3 != L'\0');
  local_res20[0] = ~local_res20[0];
  EnterCriticalSection((LPCRITICAL_SECTION)&FValidationRHI::SeenFailureHashesMutex);
  TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::
  Emplace<unsigned_int_const_&>(&FValidationRHI::SeenFailureHashes,local_58,(bool *)local_res20);
  LeaveCriticalSection((LPCRITICAL_SECTION)&FValidationRHI::SeenFailureHashesMutex);
  if (local_res8 != '\0') {
    return;
  }
  local_50.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_50.Data.ArrayNum = 0;
  local_50.Data.ArrayMax = 0;
  lVar1 = *(longlong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xec8);
  if ((lVar1 == 0) ||
     (this_00 = *(FRHIBreadcrumbNode **)(lVar1 + 0x30), this_00 == (FRHIBreadcrumbNode *)0x0)) {
    local_30.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_30.Data.ArrayNum = 0;
    local_30.Data.ArrayMax = 0;
  }
  else {
    FRHIBreadcrumbNode::GetFullPath(this_00,&local_30);
    if (1 < local_30.Data.ArrayNum) {
      ::FString::PrintfImpl
                (&local_40,
                 L"%sBreadcrumbs: %s\n--------------------------------------------------------------------\n"
                );
      if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50.Data.AllocatorInstance.Data);
      }
      local_50.Data.AllocatorInstance.Data = local_40.Data.AllocatorInstance.Data;
      local_40.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_50.Data.ArrayNum = local_40.Data.ArrayNum;
      local_50.Data.ArrayMax = local_40.Data.ArrayMax;
      local_40.Data.ArrayNum = 0;
      local_40.Data.ArrayMax = 0;
      goto LAB_145ced404;
    }
  }
  ::FString::operator=(&local_50,L"A compute PSO has to be set to set resources into a shader!");
LAB_145ced404:
  if (1 < (byte)LogRHI._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  bVar2 = FWindowsPlatformMisc::IsDebuggerPresent();
  if ((bVar2) && (RHIValidation::GBreakOnTransitionError != 0)) {
    FGenericPlatformMisc::LowLevelOutputDebugStringf(L"%s\n");
    this_01 = GetGlobalLogSingleton();
                    /* WARNING: Subroutine does not return */
    FOutputDeviceRedirector::Flush(this_01);
  }
  if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Data.AllocatorInstance.Data);
  }
  if (local_50.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  FMemory::Free(local_50.Data.AllocatorInstance.Data);
  return;
}

// RHISetShaderUnbinds @ 145ced4c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __thiscall
FValidationContext::RHISetShaderUnbinds
          (FValidationContext *this,FRHIGraphicsShader *param_1,
          TArrayView<FRHIShaderParameterUnbind_const_,int> *param_2)

{
  longlong lVar1;
  FRHIBreadcrumbNode *this_00;
  bool bVar2;
  wchar_t wVar3;
  FOutputDeviceRedirector *this_01;
  ulonglong uVar4;
  wchar_t *pwVar5;
  char local_res8;
  uint local_res20 [2];
  uint local_58 [2];
  FString local_50;
  FString local_40;
  FString local_30;
  undefined4 local_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  if ((this->State).bGfxPSOSet != false) {
    local_18 = *(undefined4 *)&param_2->DataPtr;
    uStack_14 = *(undefined4 *)((longlong)&param_2->DataPtr + 4);
    iStack_10 = param_2->ArrayNum;
    uStack_c = *(undefined4 *)&param_2->field_0xc;
    (**(code **)(this->RHIContext->_padding_ + 0x1c8))(this->RHIContext,param_1,&local_18);
    return;
  }
  uVar4 = 0xffffffff;
  pwVar5 = L"A graphics PSO has to be set to set resources into a shader!";
  wVar3 = L'A';
  do {
    pwVar5 = pwVar5 + 1;
    local_res20[0] =
         FCrc::CRCTablesSB8[1][uVar4 >> 0x10 & 0xff] ^
         FCrc::CRCTablesSB8[2][((ushort)wVar3 ^ uVar4) >> 8 & 0xff] ^
         FCrc::CRCTablesSB8[0][uVar4 >> 0x18] ^
         FCrc::CRCTablesSB8[3][((ushort)wVar3 ^ uVar4) & 0xff];
    uVar4 = (ulonglong)local_res20[0];
    wVar3 = *pwVar5;
  } while (wVar3 != L'\0');
  local_res20[0] = ~local_res20[0];
  EnterCriticalSection((LPCRITICAL_SECTION)&FValidationRHI::SeenFailureHashesMutex);
  TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::
  Emplace<unsigned_int_const_&>(&FValidationRHI::SeenFailureHashes,local_58,(bool *)local_res20);
  LeaveCriticalSection((LPCRITICAL_SECTION)&FValidationRHI::SeenFailureHashesMutex);
  if (local_res8 != '\0') {
    return;
  }
  local_50.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_50.Data.ArrayNum = 0;
  local_50.Data.ArrayMax = 0;
  lVar1 = *(longlong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xec8);
  if ((lVar1 == 0) ||
     (this_00 = *(FRHIBreadcrumbNode **)(lVar1 + 0x30), this_00 == (FRHIBreadcrumbNode *)0x0)) {
    local_30.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_30.Data.ArrayNum = 0;
    local_30.Data.ArrayMax = 0;
  }
  else {
    FRHIBreadcrumbNode::GetFullPath(this_00,&local_30);
    if (1 < local_30.Data.ArrayNum) {
      ::FString::PrintfImpl
                (&local_40,
                 L"%sBreadcrumbs: %s\n--------------------------------------------------------------------\n"
                );
      if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50.Data.AllocatorInstance.Data);
      }
      local_50.Data.AllocatorInstance.Data = local_40.Data.AllocatorInstance.Data;
      local_40.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_50.Data.ArrayNum = local_40.Data.ArrayNum;
      local_50.Data.ArrayMax = local_40.Data.ArrayMax;
      local_40.Data.ArrayNum = 0;
      local_40.Data.ArrayMax = 0;
      goto LAB_145ced634;
    }
  }
  ::FString::operator=(&local_50,L"A graphics PSO has to be set to set resources into a shader!");
LAB_145ced634:
  if (1 < (byte)LogRHI._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  bVar2 = FWindowsPlatformMisc::IsDebuggerPresent();
  if ((bVar2) && (RHIValidation::GBreakOnTransitionError != 0)) {
    FGenericPlatformMisc::LowLevelOutputDebugStringf(L"%s\n");
    this_01 = GetGlobalLogSingleton();
                    /* WARNING: Subroutine does not return */
    FOutputDeviceRedirector::Flush(this_01);
  }
  if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Data.AllocatorInstance.Data);
  }
  if (local_50.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  FMemory::Free(local_50.Data.AllocatorInstance.Data);
  return;
}

// RHISetShadingRate @ 145ced6f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */

void __thiscall
FValidationContext::RHISetShadingRate
          (FValidationContext *this,EVRSShadingRate param_1,EVRSRateCombiner param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000145ced6fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->RHIContext->_padding_ + 0x230))();
  return;
}

// RHISetStaticUniformBuffer @ 145ced730

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __thiscall
FValidationContext::RHISetStaticUniformBuffer
          (FValidationContext *this,uchar param_1,FRHIUniformBuffer *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000145ced73a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->RHIContext->_padding_ + 0xb8))();
  return;
}

// RHISetStaticUniformBuffers @ 145ced790

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __thiscall
FValidationContext::RHISetStaticUniformBuffers
          (FValidationContext *this,FUniformBufferStaticBindings *param_1)

{
  FUniformBufferStaticBindings::Bind(param_1,&(this->State).StaticUniformBuffers.Bindings);
                    /* WARNING: Could not recover jumptable at 0x000145ced7c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->RHIContext->_padding_ + 0xb0))(this->RHIContext,param_1);
  return;
}

// RHISetStencilRef @ 145ced7e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __thiscall FValidationContext::RHISetStencilRef(FValidationContext *this,uint param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000145ced7ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->RHIContext->_padding_ + 0x1d0))();
  return;
}

// RHISetStereoViewport @ 145ced800

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __thiscall
FValidationContext::RHISetStereoViewport
          (FValidationContext *this,float param_1,float param_2,float param_3,float param_4,
          float param_5,float param_6,float param_7,float param_8,float param_9,float param_10)

{
                    /* WARNING: Could not recover jumptable at 0x000145ced810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->RHIContext->_padding_ + 0x1a8))(this->RHIContext,param_1);
  return;
}

// RHISetStreamSource @ 145ced820

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FValidationContext::RHISetStreamSource
          (FValidationContext *this,uint param_1,FRHIBuffer *param_2,uint param_3)

{
  ERHIPipeline EVar1;
  uint uVar2;
  FTracker *this_00;
  code *pcVar3;
  bool bVar4;
  undefined2 local_resd;
  undefined1 local_resf;
  undefined4 uStack_a4;
  FOperation local_60;
  
  if (param_2 != (FRHIBuffer *)0x0) {
    if ((this->State).bInsideBeginRenderPass == false) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("State.bInsideBeginRenderPass",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIValidationContext.h"
                         ,0x306,L"A RenderPass has to be set to set-up the vertex streams!");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    this_00 = (FTracker *)this->_padding_;
    local_60.field1_0x8.Data_BeginTransition.Identity.Resource = (FResource *)&param_2->_padding_;
    uVar2 = *(uint *)((longlong)&param_2->_padding_ + 4);
    EVar1 = this_00->Pipeline;
    LOCK();
    *(int *)&param_2->_padding_ = (int)param_2->_padding_ + 1;
    UNLOCK();
    local_60.field1_0x8.Data_AliasingOverlap.ResourceAfter =
         (FResource *)
         ((ulonglong)(uint)*(longlong *)local_60.field1_0x8.Data_BreadcrumbRange.Range.First << 0x20
         );
    local_60.field1_0x8.Data_AliasingOverlap.CreateBacktrace = (void *)((ulonglong)uVar2 << 0x20);
    local_60._4_4_ = uStack_a4;
    local_60.Type = Assert;
    local_60.field1_0x8._24_8_ = (ulonglong)(uint)param_2->_padding_ << 0x20;
    local_60.field1_0x8._36_1_ = EVar1;
    local_60.field1_0x8._32_4_ = 8;
    local_60.field1_0x8._37_2_ = local_resd;
    local_60.field1_0x8._39_1_ = local_resf;
    RHIValidation::FTracker::AddOp(this_00,&local_60);
  }
                    /* WARNING: Could not recover jumptable at 0x000145ced934. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->RHIContext->_padding_ + 0x198))(this->RHIContext,param_1,param_2,param_3);
  return;
}

// RHISetUniformBufferDynamicOffset @ 145ced950

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __thiscall
FValidationContext::RHISetUniformBufferDynamicOffset
          (FValidationContext *this,uchar param_1,uint param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000145ced95a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->RHIContext->_padding_ + 0xc0))();
  return;
}

// RHISetViewport @ 145ced970

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __thiscall
FValidationContext::RHISetViewport
          (FValidationContext *this,float param_1,float param_2,float param_3,float param_4,
          float param_5,float param_6)

{
                    /* WARNING: Could not recover jumptable at 0x000145ced97a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->RHIContext->_padding_ + 0x1a0))();
  return;
}

// RHIWriteGPUFence @ 145ceec50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __thiscall FValidationContext::RHIWriteGPUFence(FValidationContext *this,FRHIGPUFence *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000145ceec5a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->RHIContext->_padding_ + 0xe0))();
  return;
}

// SetExecutingCommandList @ 145cf1ab0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FValidationContext::SetExecutingCommandList(FValidationContext *this,FRHICommandListBase *param_1)

{
  this->_padding_ = (longlong)param_1;
                    /* WARNING: Could not recover jumptable at 0x000145cf1abe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->RHIContext->_padding_ + 0x168))();
  return;
}

// SetTrackedAccess @ 145cf1e10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __thiscall
FValidationContext::SetTrackedAccess(FValidationContext *this,FRHITrackedAccessInfo *param_1)

{
  ERHIPipeline EVar1;
  FTracker *this_00;
  code *pcVar2;
  longlong lVar3;
  bool bVar4;
  FResource *pFVar5;
  
  if (param_1->Resource == (FRHIViewableResource *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Info.Resource != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIValidationContext.h"
                       ,0x2df,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((int)param_1->_padding_ == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Info.Access != ERHIAccess::Unknown",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIValidationContext.h"
                       ,0x2e0,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  this_00 = (FTracker *)this->_padding_;
  EVar1 = *(ERHIPipeline *)((longlong)&param_1->_padding_ + 4);
  lVar3 = param_1->_padding_;
  pFVar5 = (FResource *)(**(code **)(param_1->Resource->_padding_ + 0x10))();
  RHIValidation::FTracker::SetTrackedAccess(this_00,pFVar5,(ERHIAccess)lVar3,EVar1);
                    /* WARNING: Could not recover jumptable at 0x000145cf1ed8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->RHIContext->_padding_ + 0x150))(this->RHIContext,param_1);
  return;
}

// ValidateDispatch @ 145cf45c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __thiscall FValidationContext::ValidateDispatch(FValidationContext *this)

{
  FRHIShader *pFVar1;
  
  pFVar1 = (this->State).BoundShaders[5];
  if (pFVar1 == (FRHIShader *)0x0) {
    FValidationRHI::ReportValidationFailure
              (L"A compute PSO has to be set before dispatching a compute shader.");
    return;
  }
  ValidateBoundUniformBuffers
            (pFVar1,&(this->State).StaticUniformBuffers,
             (this->State).BoundUniformBuffers.StageBindings + 5);
  return;
}

// ValidateDrawing @ 145cf4600

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __thiscall FValidationContext::ValidateDrawing(FValidationContext *this)

{
  FRHIShader *pFVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  if ((this->State).bGfxPSOSet == false) {
    FValidationRHI::ReportValidationFailure
              (L"A graphics PSO has to be set in order to be able to draw!");
    return;
  }
  uVar5 = 0;
  do {
    uVar3 = uVar5 & 0xff;
    if ((((((char)uVar5 == '\0') || (iVar2 = (int)uVar3, iVar2 == 1)) || (iVar2 == 2)) ||
        ((iVar2 == 3 || (iVar2 == 4)))) &&
       (pFVar1 = (this->State).BoundShaders[uVar3], pFVar1 != (FRHIShader *)0x0)) {
      ValidateBoundUniformBuffers
                (pFVar1,&(this->State).StaticUniformBuffers,
                 (this->State).BoundUniformBuffers.StageBindings + uVar3);
    }
    uVar4 = (int)uVar5 + 1;
    uVar5 = (ulonglong)uVar4;
  } while ((int)uVar4 < 0xc);
  return;
}

// operator() @ 1504daee0

bool __thiscall `FValidationContext::RHICopyTexture'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<6423452362324575416>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6423452362324575416>,
                       &`public:___cdecl_`public:_virtual_void___cdecl_FValidationContext::RHICopyTexture(FRHITexture*___ptr64,FRHITexture*___ptr64,FRHICopyTextureInfo_const&___ptr64)___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504dafe0

bool __thiscall `FValidationContext::RHIBeginTransitions'::__l9::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<6423452362324574897>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6423452362324574897>,
                       &`public:___cdecl_`public:_virtual_void___cdecl_FValidationContext::RHIBeginTransitions(TArrayView<FRHITransition_const*___ptr64,int>)___ptr64'::`9'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504db020

bool __thiscall `FValidationContext::RHIEndTransitions'::__l9::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<6423452362324574922>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6423452362324574922>,
                       &`public:___cdecl_`public:_virtual_void___cdecl_FValidationContext::RHIEndTransitions(TArrayView<FRHITransition_const*___ptr64,int>)___ptr64'::`9'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

