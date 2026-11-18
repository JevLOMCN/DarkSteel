// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 43

// FValidationComputeContext @ 145cd1c60

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FValidationComputeContext * __thiscall
FValidationComputeContext::FValidationComputeContext(FValidationComputeContext *this,EType param_1)

{
  FState *this_00;
  int *piVar1;
  int *piVar2;
  int *piVar3;
  FString *this_01;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FValidationComputeContext *pFVar8;
  
  this->_padding_ = 0;
  this_00 = &this->State;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->Type = param_1;
  this->_padding_ = (longlong)&___7FValidationComputeContext__6B_;
  this->RHIContext = (IRHIComputeContext *)0x0;
  RHIValidation::FTracker::FTracker(&this_00->TrackerInstance,AsyncCompute);
  (this->State).StaticUniformBuffers.Bindings.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  piVar1 = &(this->State).BoundUniformBuffers.Buffers.ArrayMax;
  (this->State).StaticUniformBuffers.Bindings.ArrayNum = 0;
  piVar2 = &(this->State).StaticUniformBuffers.Bindings.ArrayMax;
  piVar3 = &(this->State).BoundUniformBuffers.Buffers.ArrayNum;
  *piVar2 = 0;
  (this->State).StaticUniformBuffers.bInSetPipelineStateCall = false;
  (this->State).BoundUniformBuffers.Buffers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar3 = 0;
  *piVar1 = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,0x20,(ForAnyElementType *)&(this->State).BoundUniformBuffers,0,piVar1);
  this_01 = &(this->State).ComputePassName;
  (this->State).BoundShader = (FRHIComputeShader *)0x0;
  (this_01->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->State).ComputePassName.Data.ArrayNum = 0;
  (this->State).ComputePassName.Data.ArrayMax = 0;
  ::FString::Reset(this_01,0);
  (this->State).BoundShader = (FRHIComputeShader *)0x0;
  RHIValidation::FTracker::ResetAllUAVState(&this_00->TrackerInstance);
  iVar4 = *piVar2;
  (this->State).StaticUniformBuffers.Bindings.ArrayNum = 0;
  if (iVar4 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)&(this->State).StaticUniformBuffers,0,piVar2);
  }
  if ((this->State).StaticUniformBuffers.bInSetPipelineStateCall != false) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bInSetPipelineStateCall",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIValidation.cpp"
                       ,0x5ad,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar8 = (FValidationComputeContext *)(*pcVar5)();
      return pFVar8;
    }
  }
  iVar4 = *piVar3;
  if (iVar4 < 0) {
    iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,-iVar4,(ForAnyElementType *)&(this->State).BoundUniformBuffers,piVar3,
                       piVar1);
    memset((this->State).BoundUniformBuffers.Buffers.AllocatorInstance.Data + (longlong)iVar7 * 8,0,
           (longlong)-iVar4 << 3);
  }
  else if (0 < iVar4) {
    *piVar3 = *piVar3 - iVar4;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,(ForAnyElementType *)&(this->State).BoundUniformBuffers,*piVar3,piVar1);
  }
  this->_padding_ = (longlong)this_00;
  return this;
}

// ~FValidationComputeContext @ 145cd2d30

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FValidationComputeContext::~FValidationComputeContext(FValidationComputeContext *this)

{
  this->_padding_ = (longlong)&___7FValidationComputeContext__6B_;
  FState::~FState(&this->State);
  this->_padding_ = (longlong)&___7IRHIComputeContext__6B_;
  return;
}

// GetLowestLevelContext @ 145cdcb90

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

IRHIComputeContext * __thiscall
FValidationComputeContext::GetLowestLevelContext(FValidationComputeContext *this)

{
  return this->RHIContext;
}

// RHIBeginBreadcrumbGPU @ 145ce2d70

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FValidationComputeContext::RHIBeginBreadcrumbGPU
          (FValidationComputeContext *this,FRHIBreadcrumbNode *param_1)

{
  RHIValidation::FTracker::BeginBreadcrumbGPU((FTracker *)this->_padding_,param_1);
                    /* WARNING: Could not recover jumptable at 0x000145ce2d9d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->RHIContext->_padding_ + 200))(this->RHIContext,param_1);
  return;
}

// RHIBeginTransitions @ 145ce3980

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FValidationComputeContext::RHIBeginTransitions
          (FValidationComputeContext *this,TArrayView<FRHITransition_const_*,int> *param_1)

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

// RHIBeginUAVOverlap @ 145ce3d10

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FValidationComputeContext::RHIBeginUAVOverlap
          (FValidationComputeContext *this,TArrayView<FRHIUnorderedAccessView_*_const,int> *param_1)

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

// RHIBeginUAVOverlap @ 145ce3e40

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall FValidationComputeContext::RHIBeginUAVOverlap(FValidationComputeContext *this)

{
  undefined4 uStack_94;
  undefined7 uStack_8f;
  FOperation local_50;
  
  local_50._4_4_ = uStack_94;
  local_50.Type = AllUAVsOverlap;
  local_50.field1_0x8._1_7_ = uStack_8f;
  local_50.field1_0x8._0_1_ = 1;
  RHIValidation::FTracker::AddOp((FTracker *)this->_padding_,&local_50);
                    /* WARNING: Could not recover jumptable at 0x000145ce3ea3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->RHIContext->_padding_ + 0x88))();
  return;
}

// RHIBindAccelerationStructureMemory @ 145ce40b0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FValidationComputeContext::RHIBindAccelerationStructureMemory
          (FValidationComputeContext *this,FRHIRayTracingScene *param_1,FRHIBuffer *param_2,
          uint param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000145ce40b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->RHIContext->_padding_ + 0x140))();
  return;
}

// RHIBuildAccelerationStructures @ 145ce44e0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVertexElementType": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FValidationComputeContext::RHIBuildAccelerationStructures
          (FValidationComputeContext *this,
          TArrayView<FRayTracingGeometryBuildParams_const_,int> *param_1,FRHIBufferRange *param_2)

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

// RHIBuildAccelerationStructures @ 145ce4730

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FValidationComputeContext::RHIBuildAccelerationStructures
          (FValidationComputeContext *this,
          TArrayView<FRayTracingSceneBuildParams_const_,int> *param_1)

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

// RHIClearUAVFloat @ 145ce5200

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FValidationComputeContext::RHIClearUAVFloat
          (FValidationComputeContext *this,FRHIUnorderedAccessView *param_1,TVector4<float> *param_2
          )

{
  ERHIPipeline EVar1;
  FTracker *this_00;
  undefined2 local_resd;
  undefined1 local_resf;
  undefined4 uStack_c4;
  undefined4 uStack_9c;
  FViewIdentity local_80;
  FOperation local_58;
  
  this_00 = (FTracker *)this->_padding_;
  RHIValidation::FViewIdentity::FViewIdentity
            (&local_80,*(FRHIViewableResource **)&param_1->field_0x18,
             (FRHIViewDesc *)&param_1->field_0x20);
  EVar1 = this_00->Pipeline;
  LOCK();
  ((FThreadSafeCounter *)(local_80._padding_ + 0xa8))->Counter =
       ((FThreadSafeCounter *)(local_80._padding_ + 0xa8))->Counter + 1;
  UNLOCK();
  uStack_9c = CONCAT31(CONCAT12(local_resf,local_resd),EVar1);
  local_58.field1_0x8.Data_BeginTransition.Identity.SubresourceRange.MipIndex =
       (undefined4)local_80._padding_;
  local_58.field1_0x8.Data_SetTrackedAccess.State.Pipelines = local_80._padding_._4_1_;
  local_58.field1_0x8.Data_BeginTransition.Identity.SubresourceRange.NumMips._1_3_ =
       local_80._padding_._5_3_;
  local_58.field1_0x8.Data_AliasingOverlap.CreateBacktrace = (void *)local_80._padding_;
  local_58._4_4_ = uStack_c4;
  local_58.Type = Assert;
  local_58.field1_0x8.Data_BeginTransition.Identity.Resource = (FResource *)local_80._padding_;
  local_58.field1_0x8.Data_BeginTransition.Identity.SubresourceRange.PlaneIndex =
       (uint)local_80._padding_;
  local_58.field1_0x8.Data_BeginTransition.Identity.SubresourceRange.NumPlanes =
       local_80._padding_._4_4_;
  local_58.field1_0x8.Data_BeginTransition.PreviousState.Access = UAVCompute;
  local_58.field1_0x8._36_4_ = uStack_9c;
  RHIValidation::FTracker::AddOp(this_00,&local_58);
                    /* WARNING: Could not recover jumptable at 0x000145ce52fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->RHIContext->_padding_ + 0x58))(this->RHIContext,param_1,param_2);
  return;
}

// RHIClearUAVUint @ 145ce5330

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FValidationComputeContext::RHIClearUAVUint
          (FValidationComputeContext *this,FRHIUnorderedAccessView *param_1,
          TIntVector4<unsigned_int> *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000145ce5337. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->RHIContext->_padding_ + 0x60))();
  return;
}

// RHICopyToStagingBuffer @ 145ce5980

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FValidationComputeContext::RHICopyToStagingBuffer
          (FValidationComputeContext *this,FRHIBuffer *param_1,FRHIStagingBuffer *param_2,
          uint param_3,uint param_4)

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
                    /* WARNING: Could not recover jumptable at 0x000145ce5b1e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->RHIContext->_padding_ + 0xd8))(this->RHIContext,param_1,param_2,param_3);
  return;
}

// RHICrossGPUTransfer @ 145ce7f90

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FValidationComputeContext::RHICrossGPUTransfer
          (FValidationComputeContext *this,TArrayView<FTransferResourceParams_const_,int> *param_1,
          TArrayView<FCrossGPUTransferFence_*_const,int> *param_2,
          TArrayView<FCrossGPUTransferFence_*_const,int> *param_3)

{
  FCrossGPUTransferFence **local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  local_38 = param_3->DataPtr;
  uStack_30 = *(undefined8 *)&param_3->ArrayNum;
  local_28 = *(undefined4 *)&param_2->DataPtr;
  uStack_24 = *(undefined4 *)((longlong)&param_2->DataPtr + 4);
  iStack_20 = param_2->ArrayNum;
  uStack_1c = *(undefined4 *)&param_2->field_0xc;
  local_18 = *(undefined4 *)&param_1->DataPtr;
  uStack_14 = *(undefined4 *)((longlong)&param_1->DataPtr + 4);
  iStack_10 = param_1->ArrayNum;
  uStack_c = *(undefined4 *)&param_1->field_0xc;
  (**(code **)(this->RHIContext->_padding_ + 0x110))(this->RHIContext,&local_18,&local_28,&local_38)
  ;
  return;
}

// RHICrossGPUTransferSignal @ 145ce7fe0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FValidationComputeContext::RHICrossGPUTransferSignal
          (FValidationComputeContext *this,TArrayView<FTransferResourceParams_const_,int> *param_1,
          TArrayView<FCrossGPUTransferFence_*_const,int> *param_2)

{
  undefined4 local_28;
  undefined4 uStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  local_28 = *(undefined4 *)&param_2->DataPtr;
  uStack_24 = *(undefined4 *)((longlong)&param_2->DataPtr + 4);
  iStack_20 = param_2->ArrayNum;
  uStack_1c = *(undefined4 *)&param_2->field_0xc;
  local_18 = *(undefined4 *)&param_1->DataPtr;
  uStack_14 = *(undefined4 *)((longlong)&param_1->DataPtr + 4);
  iStack_10 = param_1->ArrayNum;
  uStack_c = *(undefined4 *)&param_1->field_0xc;
  (**(code **)(this->RHIContext->_padding_ + 0x118))(this->RHIContext,&local_18,&local_28);
  return;
}

// RHICrossGPUTransferWait @ 145ce8020

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FValidationComputeContext::RHICrossGPUTransferWait
          (FValidationComputeContext *this,TArrayView<FCrossGPUTransferFence_*_const,int> *param_1)

{
  undefined4 local_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  local_18 = *(undefined4 *)&param_1->DataPtr;
  uStack_14 = *(undefined4 *)((longlong)&param_1->DataPtr + 4);
  iStack_10 = param_1->ArrayNum;
  uStack_c = *(undefined4 *)&param_1->field_0xc;
  (**(code **)(this->RHIContext->_padding_ + 0x120))(this->RHIContext,&local_18);
  return;
}

// RHIDispatchComputeShader @ 145ce8050

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __thiscall
FValidationComputeContext::RHIDispatchComputeShader
          (FValidationComputeContext *this,uint param_1,uint param_2,uint param_3)

{
  FRHIComputeShader *pFVar1;
  FTracker *pFVar2;
  FState local_res8;
  
  pFVar1 = (this->State).BoundShader;
  if (pFVar1 == (FRHIComputeShader *)0x0) {
    FValidationRHI::ReportValidationFailure
              (L"A compute PSO has to be set before dispatching a compute shader.");
  }
  else {
    ValidateBoundUniformBuffers
              ((FRHIShader *)pFVar1,&(this->State).StaticUniformBuffers,
               &(this->State).BoundUniformBuffers);
  }
  FValidationRHI::ValidateThreadGroupCount(param_1,param_2,param_3);
  (**(code **)(this->RHIContext->_padding_ + 0x18))(this->RHIContext,param_1,param_2,param_3);
  pFVar2 = (FTracker *)this->_padding_;
  local_res8.Access = UAVCompute;
  local_res8.Pipelines = pFVar2->Pipeline;
  RHIValidation::FTracker::FUAVTracker::DrawOrDispatch(pFVar2->UAVTrackers + 1,pFVar2,&local_res8);
  return;
}

// RHIDispatchComputeShaderBundle @ 145ce81b0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FValidationComputeContext::RHIDispatchComputeShaderBundle
          (FValidationComputeContext *this,FRHIShaderBundle *param_1,FRHIBuffer *param_2,
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
      (this->State).BoundShader = pFVar9->Shader;
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
                 &(this->State).StaticUniformBuffers,&(this->State).BoundUniformBuffers,&local_c8,
                 SRVCompute,Compute);
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
                 &(this->State).StaticUniformBuffers,&(this->State).BoundUniformBuffers,&local_b8,
                 SRVCompute,Compute);
      if (param_5) {
        FValidationRHI::ValidateIndirectArgsBuffer
                  (param_2,param_1->ArgStride * pFVar9->RecordIndex + param_1->ArgOffset,0xc,0);
      }
    }
    pFVar9 = pFVar9 + 1;
  } while( true );
}

// RHIDispatchGraphicsShaderBundle @ 145ce87e0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FValidationComputeContext::RHIDispatchGraphicsShaderBundle
          (FValidationComputeContext *this,FRHIShaderBundle *param_1,FRHIBuffer *param_2,
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
  goto LAB_145ce8a10;
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
  if ((char)param_4 != '\0') goto LAB_145ce8a10;
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
LAB_145ce8970:
    ::FString::operator=
              (&local_80,
               L"SharedBindlessParameters should not be set on this platform and configuration");
  }
  else {
    FRHIBreadcrumbNode::GetFullPath(this_00,&local_60);
    if (local_60.Data.ArrayNum < 2) goto LAB_145ce8970;
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
LAB_145ce8a10:
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

// RHIDispatchIndirectComputeShader @ 145ce8d20

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __thiscall
FValidationComputeContext::RHIDispatchIndirectComputeShader
          (FValidationComputeContext *this,FRHIBuffer *param_1,uint param_2)

{
  ERHIPipeline EVar1;
  uint uVar2;
  FRHIComputeShader *pFVar3;
  FTracker *pFVar4;
  FState local_res8;
  undefined4 uStack_94;
  FOperation local_50;
  
  pFVar3 = (this->State).BoundShader;
  if (pFVar3 == (FRHIComputeShader *)0x0) {
    FValidationRHI::ReportValidationFailure
              (L"A compute PSO has to be set before dispatching a compute shader.");
  }
  else {
    ValidateBoundUniformBuffers
              ((FRHIShader *)pFVar3,&(this->State).StaticUniformBuffers,
               &(this->State).BoundUniformBuffers);
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

// RHIEndBreadcrumbGPU @ 145ce98c0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FValidationComputeContext::RHIEndBreadcrumbGPU
          (FValidationComputeContext *this,FRHIBreadcrumbNode *param_1)

{
  RHIValidation::FTracker::EndBreadcrumbGPU((FTracker *)this->_padding_,param_1);
                    /* WARNING: Could not recover jumptable at 0x000145ce98ed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->RHIContext->_padding_ + 0xd0))(this->RHIContext,param_1);
  return;
}

// RHIEndTransitions @ 145ce9ac0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FValidationComputeContext::RHIEndTransitions
          (FValidationComputeContext *this,TArrayView<FRHITransition_const_*,int> *param_1)

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

// RHIEndUAVOverlap @ 145ce9e50

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FValidationComputeContext::RHIEndUAVOverlap
          (FValidationComputeContext *this,TArrayView<FRHIUnorderedAccessView_*_const,int> *param_1)

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

// RHIEndUAVOverlap @ 145ce9f80

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall FValidationComputeContext::RHIEndUAVOverlap(FValidationComputeContext *this)

{
  undefined4 uStack_94;
  uint7 uStack_8f;
  FOperation local_50;
  
  local_50._4_4_ = uStack_94;
  local_50.Type = AllUAVsOverlap;
  local_50.field1_0x8.Data_BeginTransition.Identity.Resource =
       (FResource *)((ulonglong)uStack_8f << 8);
  RHIValidation::FTracker::AddOp((FTracker *)this->_padding_,&local_50);
                    /* WARNING: Could not recover jumptable at 0x000145ce9fe3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->RHIContext->_padding_ + 0x98))();
  return;
}

// RHIExecuteMultiIndirectClusterOperation @ 145cea1d0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVertexElementType": Some values do not have unique names */

void __thiscall
FValidationComputeContext::RHIExecuteMultiIndirectClusterOperation
          (FValidationComputeContext *this,FRayTracingClusterOperationParams *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000145cea1d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->RHIContext->_padding_ + 0x128))();
  return;
}

// RHIGetGPUMask @ 145cea9d0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRHIGPUMask __thiscall FValidationComputeContext::RHIGetGPUMask(FValidationComputeContext *this)

{
  uint in_EDX;
  
  (**(code **)(this->RHIContext->_padding_ + 0xf0))();
  return (FRHIGPUMask)in_EDX;
}

// RHIRayTraceDispatch @ 145ceba00

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FValidationComputeContext::RHIRayTraceDispatch
          (FValidationComputeContext *this,FRHIRayTracingPipelineState *param_1,
          FRHIRayTracingShader *param_2,FRHIShaderBindingTable *param_3,
          FRayTracingShaderBindings *param_4,uint param_5,uint param_6)

{
  RHIValidation::FShaderBindingTable::ValidateStateForDispatch
            ((FShaderBindingTable *)&param_3->_padding_,(FTracker *)this->_padding_);
                    /* WARNING: Could not recover jumptable at 0x000145ceba55. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->RHIContext->_padding_ + 0x20))(this->RHIContext,param_1,param_2,param_3);
  return;
}

// RHIRayTraceDispatchIndirect @ 145cebad0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FValidationComputeContext::RHIRayTraceDispatchIndirect
          (FValidationComputeContext *this,FRHIRayTracingPipelineState *param_1,
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
                    /* WARNING: Could not recover jumptable at 0x000145cebc77. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->RHIContext->_padding_ + 0x28))(this->RHIContext,param_1,param_2,param_3);
  return;
}

// RHISetAsyncComputeBudget @ 145cec340

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FValidationComputeContext::RHISetAsyncComputeBudget
          (FValidationComputeContext *this,EAsyncComputeBudget param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000145cec347. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->RHIContext->_padding_ + 0x38))();
  return;
}

// RHISetComputePipelineState @ 145cec430

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FValidationComputeContext::RHISetComputePipelineState
          (FValidationComputeContext *this,FRHIComputePipelineState *param_1)

{
  IRHIComputeContext *pIVar1;
  
  (this->State).BoundShader = (param_1->ComputeShader).Reference;
  RHIValidation::FTracker::ResetUAVState((FTracker *)this->_padding_,Compute);
  pIVar1 = this->RHIContext;
  (this->State).StaticUniformBuffers.bInSetPipelineStateCall = true;
  (**(code **)(pIVar1->_padding_ + 0x10))(pIVar1,param_1);
  (this->State).StaticUniformBuffers.bInSetPipelineStateCall = false;
  return;
}

// RHISetGPUMask @ 145cec7f0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FValidationComputeContext::RHISetGPUMask(FValidationComputeContext *this,FRHIGPUMask param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000145cec7f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->RHIContext->_padding_ + 0xe8))();
  return;
}

// RHISetShaderParameters @ 145ceca50

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __thiscall
FValidationComputeContext::RHISetShaderParameters
          (FValidationComputeContext *this,FRHIComputeShader *param_1,
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
  
  pFVar1 = (this->State).BoundShader;
  if (pFVar1 != (FRHIComputeShader *)0x0) {
    if (param_1 == pFVar1) {
      local_68.DataPtr = param_4->DataPtr;
      local_68.ArrayNum = param_4->ArrayNum;
      local_68._12_4_ = *(undefined4 *)&param_4->field_0xc;
      ValidateShaderParameters
                ((FRHIShader *)param_1,(FTracker *)this->_padding_,
                 &(this->State).StaticUniformBuffers,&(this->State).BoundUniformBuffers,&local_68,
                 SRVCompute,Compute);
      local_68.DataPtr = param_5->DataPtr;
      local_68.ArrayNum = param_5->ArrayNum;
      local_68._12_4_ = *(undefined4 *)&param_5->field_0xc;
      ValidateShaderParameters
                ((FRHIShader *)param_1,(FTracker *)this->_padding_,
                 &(this->State).StaticUniformBuffers,&(this->State).BoundUniformBuffers,&local_68,
                 SRVCompute,Compute);
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

// RHISetShaderRootConstants @ 145ced020

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FValidationComputeContext::RHISetShaderRootConstants
          (FValidationComputeContext *this,TIntVector4<unsigned_int> *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000145ced027. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->RHIContext->_padding_ + 0x68))();
  return;
}

// RHISetShaderUnbinds @ 145ced060

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FValidationComputeContext::RHISetShaderUnbinds
          (FValidationComputeContext *this,FRHIComputeShader *param_1,
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
  
  if ((this->State).BoundShader != (FRHIComputeShader *)0x0) {
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
      goto LAB_145ced1d4;
    }
  }
  ::FString::operator=(&local_50,L"A compute PSO has to be set to set resources into a shader!");
LAB_145ced1d4:
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

// RHISetStaticUniformBuffer @ 145ced710

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FValidationComputeContext::RHISetStaticUniformBuffer
          (FValidationComputeContext *this,uchar param_1,FRHIUniformBuffer *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000145ced717. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->RHIContext->_padding_ + 0xb8))();
  return;
}

// RHISetStaticUniformBuffers @ 145ced750

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FValidationComputeContext::RHISetStaticUniformBuffers
          (FValidationComputeContext *this,FUniformBufferStaticBindings *param_1)

{
  FUniformBufferStaticBindings::Bind(param_1,&(this->State).StaticUniformBuffers.Bindings);
                    /* WARNING: Could not recover jumptable at 0x000145ced780. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->RHIContext->_padding_ + 0xb0))(this->RHIContext,param_1);
  return;
}

// RHITransferResourceSignal @ 145cee370

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FValidationComputeContext::RHITransferResourceSignal
          (FValidationComputeContext *this,
          TArrayView<FTransferResourceFenceData_*_const,int> *param_1,FRHIGPUMask param_2)

{
  undefined4 local_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  local_18 = *(undefined4 *)&param_1->DataPtr;
  uStack_14 = *(undefined4 *)((longlong)&param_1->DataPtr + 4);
  iStack_10 = param_1->ArrayNum;
  uStack_c = *(undefined4 *)&param_1->field_0xc;
  (**(code **)(this->RHIContext->_padding_ + 0x100))(this->RHIContext,&local_18);
  return;
}

// RHITransferResourceWait @ 145cee3a0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FValidationComputeContext::RHITransferResourceWait
          (FValidationComputeContext *this,
          TArrayView<FTransferResourceFenceData_*_const,int> *param_1)

{
  undefined4 local_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  local_18 = *(undefined4 *)&param_1->DataPtr;
  uStack_14 = *(undefined4 *)((longlong)&param_1->DataPtr + 4);
  iStack_10 = param_1->ArrayNum;
  uStack_c = *(undefined4 *)&param_1->field_0xc;
  (**(code **)(this->RHIContext->_padding_ + 0x108))(this->RHIContext,&local_18);
  return;
}

// RHITransferResources @ 145cee3d0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FValidationComputeContext::RHITransferResources
          (FValidationComputeContext *this,TArrayView<FTransferResourceParams_const_,int> *param_1)

{
  undefined4 local_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  local_18 = *(undefined4 *)&param_1->DataPtr;
  uStack_14 = *(undefined4 *)((longlong)&param_1->DataPtr + 4);
  iStack_10 = param_1->ArrayNum;
  uStack_c = *(undefined4 *)&param_1->field_0xc;
  (**(code **)(this->RHIContext->_padding_ + 0xf8))(this->RHIContext,&local_18);
  return;
}

// RHIWriteGPUFence @ 145ceec30

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FValidationComputeContext::RHIWriteGPUFence(FValidationComputeContext *this,FRHIGPUFence *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000145ceec37. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->RHIContext->_padding_ + 0xe0))();
  return;
}

// SetExecutingCommandList @ 145cf1a90

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FValidationComputeContext::SetExecutingCommandList
          (FValidationComputeContext *this,FRHICommandListBase *param_1)

{
  this->_padding_ = (longlong)param_1;
                    /* WARNING: Could not recover jumptable at 0x000145cf1a9b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->RHIContext->_padding_ + 0x168))();
  return;
}

// SetTrackedAccess @ 145cf1d10

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FValidationComputeContext::SetTrackedAccess
          (FValidationComputeContext *this,FRHITrackedAccessInfo *param_1)

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
                       ,0x7e,L"");
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
                       ,0x7f,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (*(char *)((longlong)&param_1->_padding_ + 4) == '\0') {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Info.Pipelines != ERHIPipeline::None",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIValidationContext.h"
                       ,0x80,L"");
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
                    /* WARNING: Could not recover jumptable at 0x000145cf1e02. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->RHIContext->_padding_ + 0x150))(this->RHIContext,param_1);
  return;
}

// ValidateDispatch @ 145cf4580

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __thiscall FValidationComputeContext::ValidateDispatch(FValidationComputeContext *this)

{
  FRHIComputeShader *pFVar1;
  
  pFVar1 = (this->State).BoundShader;
  if (pFVar1 == (FRHIComputeShader *)0x0) {
    FValidationRHI::ReportValidationFailure
              (L"A compute PSO has to be set before dispatching a compute shader.");
    return;
  }
  ValidateBoundUniformBuffers
            ((FRHIShader *)pFVar1,&(this->State).StaticUniformBuffers,
             &(this->State).BoundUniformBuffers);
  return;
}

