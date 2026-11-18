// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 11

// BeginTransitions @ 145c91cf0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHIComputeCommandList::BeginTransitions
          (FRHIComputeCommandList *this,TArrayView<FRHITransition_const_*,int> *param_1)

{
  FRHITransition **ppFVar1;
  ERHIPipeline EVar2;
  byte bVar3;
  ERHIPipeline EVar4;
  int iVar5;
  FRHITransition *this_00;
  code *pcVar6;
  bool bVar7;
  ERHIPipeline EVar8;
  IRHIComputeContext *pIVar9;
  void *_Dst;
  undefined8 *puVar10;
  FRHITransition **ppFVar11;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  
  if ((GRHICommandList.bLatchedBypass) && ((this->field_0x29b & 0x20) != 0)) {
    pIVar9 = FRHICommandListBase::GetComputeContext((FRHICommandListBase *)this);
    local_28 = *(undefined4 *)&param_1->DataPtr;
    uStack_24 = *(undefined4 *)((longlong)&param_1->DataPtr + 4);
    iStack_20 = param_1->ArrayNum;
    uStack_1c = *(undefined4 *)&param_1->field_0xc;
    (**(code **)(pIVar9->_padding_ + 0x48))(pIVar9,&local_28);
    ppFVar11 = param_1->DataPtr;
    ppFVar1 = ppFVar11 + param_1->ArrayNum;
    for (; ppFVar11 != ppFVar1; ppFVar11 = ppFVar11 + 1) {
      bVar3 = this->field_0x6a;
      this_00 = *ppFVar11;
      if (((bVar3 != 0) && ((bVar3 & bVar3 - 1) != 0)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("ActivePipelines == ERHIPipeline::None || IsSingleRHIPipeline(ActivePipelines)"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                             ,0x2a5,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      EVar4 = this->field_0x6a;
      if (((this_00->AllowedSrc & EVar4) != EVar4) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("EnumHasAllFlags(AllowedSrc, Pipeline)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHITransition.h"
                             ,0x213,
                             L"Transition is being used on a source pipeline that it wasn\'t created for."
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      EVar8 = this_00->State;
      do {
        LOCK();
        EVar2 = this_00->State;
        bVar7 = EVar8 == EVar2;
        if (bVar7) {
          this_00->State = EVar8 & ~EVar4;
          EVar2 = EVar8;
        }
        EVar8 = EVar2;
        UNLOCK();
      } while (!bVar7);
      if (((EVar8 & EVar4) != EVar4) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(PreviousValue & Mask) == Mask",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHITransition.h"
                             ,0x218,
                             L"RHIBeginTransitions has been called twice on this transition for at least one pipeline."
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (EVar8 == EVar4) {
        FRHITransition::Cleanup(this_00);
      }
    }
  }
  else {
    iVar5 = param_1->ArrayNum;
    _Dst = FMemStackBase::Alloc((FMemStackBase *)this,(longlong)iVar5 << 3,8);
    memcpy(_Dst,param_1->DataPtr,(longlong)iVar5 << 3);
    puVar10 = FMemStackBase::Alloc((FMemStackBase *)this,0x20,8);
    *(int *)&this->field_0x60 = *(int *)&this->field_0x60 + 1;
    **(undefined8 **)&this->field_0x30 = puVar10;
    *(undefined8 **)&this->field_0x30 = puVar10 + 1;
    if ((iVar5 < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    puVar10[1] = 0;
    *puVar10 = &___7FRHICommandBeginTransitions__6B_;
    puVar10[2] = _Dst;
    puVar10[3] = CONCAT44(uStack_2c,iVar5);
  }
  return;
}

// BuildAccelerationStructure @ 145c925f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVertexElementType": Some values do not have unique names */

void __thiscall
FRHIComputeCommandList::BuildAccelerationStructure
          (FRHIComputeCommandList *this,FRHIRayTracingGeometry *param_1)

{
  TRefCountPtr<FRHIBuffer> TVar1;
  FRHIResource *local_res10;
  TArrayView<FRayTracingGeometryBuildParams_const_,int> local_98;
  longlong local_88;
  FRayTracingGeometryBuildParams local_78;
  FRHIBufferRange local_58;
  ulonglong local_40;
  undefined8 uStack_38;
  wchar_t *local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  
  local_78.Geometry.Reference = (FRHIRayTracingGeometry *)0x0;
  local_78.Segments.DataPtr = (FRayTracingGeometrySegment *)0x0;
  local_78.Segments.ArrayNum = 0;
  if (param_1 != (FRHIRayTracingGeometry *)0x0) {
    local_78.Geometry.Reference = param_1;
    FRHIResource::AddRef((FRHIResource *)param_1);
  }
  local_88 = param_1->_padding_;
  local_40 = param_1->_padding_ & 0xffffffff;
  uStack_38 = CONCAT44((1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1,0x90008);
  local_20 = 0x400;
  uStack_18 = 0;
  local_30 = L"RHIScratchBuffer";
  uStack_28 = 0;
  local_78.BuildMode = Build;
  local_10 = 0;
  local_58.Offset = 0;
  local_58.Size = 0;
  TVar1 = FRHICommandListBase::CreateBuffer
                    ((FRHICommandListBase *)this,(FRHIBufferCreateDesc *)&local_res10);
  local_58.Buffer = (FRHIBuffer *)(TVar1.Reference)->_padding_;
  if (local_res10 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_res10);
  }
  local_98.ArrayNum = 1;
  local_98.DataPtr = &local_78;
  BuildAccelerationStructures(this,&local_98,&local_58);
  if (local_78.Geometry.Reference != (FRHIRayTracingGeometry *)0x0) {
    FRHIResource::Release((FRHIResource *)local_78.Geometry.Reference);
  }
  return;
}

// BuildAccelerationStructures @ 145c92730

/* WARNING: Enum "EVertexElementType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHIComputeCommandList::BuildAccelerationStructures
          (FRHIComputeCommandList *this,
          TArrayView<FRayTracingGeometryBuildParams_const_,int> *param_1)

{
  uint uVar1;
  int iVar2;
  FRHIRayTracingGeometry *pFVar3;
  code *pcVar4;
  TConsoleVariableData<int> *pTVar5;
  bool bVar6;
  uint uVar7;
  FResourceArrayUploadInterface *pFVar8;
  TRefCountPtr<FRHIBuffer> TVar9;
  longlong lVar10;
  FRayTracingGeometryBuildParams *pFVar11;
  FResourceArrayUploadInterface *pFVar12;
  uint uVar13;
  uint uVar14;
  FResourceArrayUploadInterface *pFVar15;
  int iVar16;
  FRayTracingGeometryBuildParams *pFVar17;
  FRHIBufferCreateDesc local_f0;
  longlong local_b8;
  FRHIBufferRange local_b0;
  undefined1 local_98 [16];
  ulonglong local_88;
  undefined8 uStack_80;
  wchar_t *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  pTVar5 = CVarRHICmdMaxAccelerationStructureBuildScratchSize.Ref;
  bVar6 = IsInParallelRenderingThread();
  if ((!bVar6) &&
     (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007955>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6d3,"IsInParallelRenderingThread()"), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar11 = param_1->DataPtr;
  uVar1 = param_1->ArrayNum;
  uVar13 = 0x7fffffff;
  if ((uint)pTVar5->ShadowedValue[1] < 0x7fffffff) {
    uVar13 = pTVar5->ShadowedValue[1];
  }
  pFVar15 = (FResourceArrayUploadInterface *)0x0;
  pFVar17 = pFVar11 + (int)uVar1;
  pFVar12 = pFVar15;
  for (; pFVar11 != pFVar17; pFVar11 = pFVar11 + 1) {
    pFVar3 = (pFVar11->Geometry).Reference;
    if (pFVar11->BuildMode == Update) {
      local_f0._padding_ = pFVar3->_padding_;
      local_f0.DebugName = (wchar_t *)pFVar3->_padding_;
      pFVar8 = (FResourceArrayUploadInterface *)pFVar3->_padding_;
      local_f0.InitialData = pFVar8;
    }
    else {
      local_b8 = pFVar3->_padding_;
      pFVar8 = (FResourceArrayUploadInterface *)pFVar3->_padding_;
    }
    pFVar15 = (FResourceArrayUploadInterface *)(&pFVar8->field_0x0 + (longlong)&pFVar15->field_0x0);
    if (pFVar12 < pFVar8) {
      pFVar12 = pFVar8;
    }
  }
  local_b0.Offset = 0;
  local_b0.Size = 0;
  if ((FResourceArrayUploadInterface *)(ulonglong)uVar13 < pFVar15) {
    pFVar15 = (FResourceArrayUploadInterface *)(ulonglong)uVar13;
  }
  if (pFVar15 < pFVar12) {
    pFVar15 = pFVar12;
  }
  if (((FResourceArrayUploadInterface *)((ulonglong)pFVar15 & 0xffffffff) != pFVar15) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("uint32(TotalRequiredScratchMemorySize) == TotalRequiredScratchMemorySize",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHICommandList.cpp"
                         ,0x7e3,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_88 = (ulonglong)pFVar15 & 0xffffffff;
  uStack_80 = CONCAT44((1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1,0x90008);
  local_68 = 0x400;
  uStack_60 = 0;
  local_78 = L"RHIScratchBuffer";
  uStack_70 = 0;
  local_58 = 0;
  TVar9 = FRHICommandListBase::CreateBuffer((FRHICommandListBase *)this,&local_f0);
  local_b0.Buffer = (FRHIBuffer *)(TVar9.Reference)->_padding_;
  if ((FRHIResource *)local_f0._padding_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)local_f0._padding_);
  }
  uVar13 = 0;
  if (uVar1 != 0) {
    do {
      iVar16 = 0;
      pFVar12 = (FResourceArrayUploadInterface *)0x0;
      uVar14 = uVar13;
      if (uVar1 <= uVar13) {
        return;
      }
      do {
        iVar2 = param_1->ArrayNum;
        uVar7 = 0;
        if ((int)uVar14 < iVar2) {
          uVar7 = ~uVar14 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar3 = param_1->DataPtr[(int)uVar14].Geometry.Reference;
        if (param_1->DataPtr[(int)uVar14].BuildMode == Update) {
          local_f0.ClassName = (FName)pFVar3->_padding_;
          local_f0.OwnerName = (FName)pFVar3->_padding_;
          lVar10 = pFVar3->_padding_;
          local_b8 = lVar10;
        }
        else {
          local_b8 = pFVar3->_padding_;
          lVar10 = pFVar3->_padding_;
        }
        pFVar12 = (FResourceArrayUploadInterface *)(&pFVar12->field_0x0 + lVar10);
        if (pFVar15 < pFVar12) break;
        iVar16 = iVar16 + 1;
        uVar14 = uVar14 + 1;
      } while (uVar14 < uVar1);
      if (iVar16 != 0) {
        uVar7 = 0;
        if ((int)uVar13 < iVar2) {
          uVar7 = ~uVar13 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_f0._padding_ = (longlong)(param_1->DataPtr + (int)uVar13);
        local_f0.DebugName = (wchar_t *)CONCAT44(local_f0.DebugName._4_4_,iVar16);
        if ((iVar16 < 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("ArrayNum >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xfe,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_98._0_8_ = local_f0._padding_;
        local_98._8_8_ = local_f0.DebugName;
        BuildAccelerationStructures
                  (this,(TArrayView<FRayTracingGeometryBuildParams_const_,int> *)local_98,&local_b0)
        ;
      }
      uVar13 = uVar14;
    } while (uVar14 < uVar1);
  }
  return;
}

// EndTransitions @ 145c9d6c0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHIComputeCommandList::EndTransitions
          (FRHIComputeCommandList *this,TArrayView<FRHITransition_const_*,int> *param_1)

{
  FRHITransition **ppFVar1;
  byte bVar2;
  ERHIPipeline EVar3;
  int iVar4;
  FRHITransition *this_00;
  code *pcVar5;
  bool bVar6;
  byte bVar7;
  IRHIComputeContext *pIVar8;
  void *_Dst;
  undefined8 *puVar9;
  byte bVar10;
  FRHITransition **ppFVar11;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  
  if ((GRHICommandList.bLatchedBypass) && ((this->field_0x29b & 0x20) != 0)) {
    pIVar8 = FRHICommandListBase::GetComputeContext((FRHICommandListBase *)this);
    local_28 = *(undefined4 *)&param_1->DataPtr;
    uStack_24 = *(undefined4 *)((longlong)&param_1->DataPtr + 4);
    iStack_20 = param_1->ArrayNum;
    uStack_1c = *(undefined4 *)&param_1->field_0xc;
    (**(code **)(pIVar8->_padding_ + 0x50))(pIVar8,&local_28);
    ppFVar11 = param_1->DataPtr;
    ppFVar1 = ppFVar11 + param_1->ArrayNum;
    for (; ppFVar11 != ppFVar1; ppFVar11 = ppFVar11 + 1) {
      bVar7 = this->field_0x6a;
      this_00 = *ppFVar11;
      if (((bVar7 != 0) && ((bVar7 & bVar7 - 1) != 0)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("ActivePipelines == ERHIPipeline::None || IsSingleRHIPipeline(ActivePipelines)"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                             ,0x2a5,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      EVar3 = this->field_0x6a;
      if (((this_00->AllowedDst & EVar3) != EVar3) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("EnumHasAllFlags(AllowedDst, Pipeline)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHITransition.h"
                             ,0x223,
                             L"Transition is being used on a destination pipeline that it wasn\'t created for."
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      bVar10 = EVar3 << 2;
      bVar7 = this_00->State;
      do {
        LOCK();
        bVar2 = this_00->State;
        bVar6 = bVar7 == bVar2;
        if (bVar6) {
          this_00->State = bVar7 & ~bVar10;
          bVar2 = bVar7;
        }
        bVar7 = bVar2;
        UNLOCK();
      } while (!bVar6);
      if (((bVar10 & bVar7) != bVar10) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(PreviousValue & Mask) == Mask",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHITransition.h"
                             ,0x228,
                             L"RHIEndTransitions has been called twice on this transition for at least one pipeline."
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (bVar7 == bVar10) {
        FRHITransition::Cleanup(this_00);
      }
    }
  }
  else {
    iVar4 = param_1->ArrayNum;
    _Dst = FMemStackBase::Alloc((FMemStackBase *)this,(longlong)iVar4 << 3,8);
    memcpy(_Dst,param_1->DataPtr,(longlong)iVar4 << 3);
    puVar9 = FMemStackBase::Alloc((FMemStackBase *)this,0x20,8);
    *(int *)&this->field_0x60 = *(int *)&this->field_0x60 + 1;
    **(undefined8 **)&this->field_0x30 = puVar9;
    *(undefined8 **)&this->field_0x30 = puVar9 + 1;
    if ((iVar4 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    puVar9[1] = 0;
    *puVar9 = &___7FRHICommandEndTransitions__6B_;
    puVar9[2] = _Dst;
    puVar9[3] = CONCAT44(uStack_2c,iVar4);
  }
  return;
}

// RayTraceDispatch @ 145cbb890

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHIComputeCommandList::RayTraceDispatch
          (FRHIComputeCommandList *this,FRayTracingPipelineState *param_1,
          FRHIRayTracingShader *param_2,FRHIShaderBindingTable *param_3,
          FRHIBatchedShaderParameters *param_4,uint param_5,uint param_6)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  IRHIComputeContext *pIVar5;
  undefined8 *puVar6;
  FRHIRayTracingPipelineState *pFVar7;
  uint uStack_62c;
  FRayTracingShaderBindings local_628;
  
  UE::RHI::ConvertRayTracingShaderBindings(&local_628,param_4);
  if (param_3 == (FRHIShaderBindingTable *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("SBT != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0xe56,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if ((GRHICommandList.bLatchedBypass == false) || ((this->field_0x29b & 0x20) == 0)) {
    puVar6 = FMemStackBase::Alloc((FMemStackBase *)this,0x658,8);
    *(int *)&this->field_0x60 = *(int *)&this->field_0x60 + 1;
    **(undefined8 **)&this->field_0x30 = puVar6;
    *(undefined8 **)&this->field_0x30 = puVar6 + 1;
    *puVar6 = &___7FRHICommandRayTraceDispatch__6B_;
    puVar6[1] = 0;
    puVar6[2] = param_1;
    puVar6[3] = 0;
    puVar6[4] = param_3;
    FRayTracingShaderBindings::FRayTracingShaderBindings
              ((FRayTracingShaderBindings *)(puVar6 + 5),&local_628);
    *(uint *)((longlong)puVar6 + 0x64c) = param_5;
    *(uint *)(puVar6 + 0xca) = param_6;
    puVar6[199] = param_2;
    puVar6[200] = 0;
    *(undefined4 *)(puVar6 + 0xc9) = 0;
  }
  else {
    pIVar5 = FRHICommandListBase::GetComputeContext((FRHICommandListBase *)this);
    pcVar3 = *(code **)(pIVar5->_padding_ + 0x20);
    if (param_1 == (FRayTracingPipelineState *)0x0) {
      pFVar7 = (FRHIRayTracingPipelineState *)0x0;
    }
    else {
      if ((param_1->RHIPipeline).Reference == (FRHIRayTracingPipelineState *)0x0) {
        bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<4687553501859939675>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
                           ,0x55b,"PipelineState->RHIPipeline");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      puVar6 = (undefined8 *)param_1->_padding_;
      if (puVar6 != (undefined8 *)0x0) {
        param_1->_padding_ = 0;
        LOCK();
        piVar1 = (int *)(puVar6 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*puVar6)(puVar6,1);
        }
      }
      pFVar7 = (param_1->RHIPipeline).Reference;
    }
    (*pcVar3)(pIVar5,pFVar7,param_2,param_3,&local_628,param_5,param_6);
  }
  param_4->Allocator->AttachedParameters = (FRHIBatchedShaderParameters *)0x0;
  (param_4->ParametersData).DataPtr = (uchar *)0x0;
  *(ulonglong *)&(param_4->ParametersData).ArrayNum = (ulonglong)uStack_62c << 0x20;
  (param_4->Parameters).DataPtr = (FRHIShaderParameter *)0x0;
  *(ulonglong *)&(param_4->Parameters).ArrayNum = (ulonglong)uStack_62c << 0x20;
  (param_4->ResourceParameters).DataPtr = (FRHIShaderParameterResource *)0x0;
  *(ulonglong *)&(param_4->ResourceParameters).ArrayNum = (ulonglong)uStack_62c << 0x20;
  (param_4->BindlessParameters).DataPtr = (FRHIShaderParameterResource *)0x0;
  *(ulonglong *)&(param_4->BindlessParameters).ArrayNum = (ulonglong)uStack_62c << 0x20;
  if (local_628.BindlessParameters.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_628.BindlessParameters.AllocatorInstance.Data);
  }
  return;
}

// RayTraceDispatchIndirect @ 145cbbb00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHIComputeCommandList::RayTraceDispatchIndirect
          (FRHIComputeCommandList *this,FRayTracingPipelineState *param_1,
          FRHIRayTracingShader *param_2,FRHIShaderBindingTable *param_3,
          FRHIBatchedShaderParameters *param_4,FRHIBuffer *param_5,uint param_6)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  IRHIComputeContext *pIVar5;
  undefined8 *puVar6;
  FRHIRayTracingPipelineState *pFVar7;
  uint uStack_62c;
  FRayTracingShaderBindings local_628;
  
  UE::RHI::ConvertRayTracingShaderBindings(&local_628,param_4);
  if (param_3 == (FRHIShaderBindingTable *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("SBT != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0xe69,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if ((GRHICommandList.bLatchedBypass == false) || ((this->field_0x29b & 0x20) == 0)) {
    puVar6 = FMemStackBase::Alloc((FMemStackBase *)this,0x658,8);
    *(int *)&this->field_0x60 = *(int *)&this->field_0x60 + 1;
    **(undefined8 **)&this->field_0x30 = puVar6;
    *(undefined8 **)&this->field_0x30 = puVar6 + 1;
    *puVar6 = &___7FRHICommandRayTraceDispatch__6B_;
    puVar6[1] = 0;
    puVar6[2] = param_1;
    puVar6[3] = 0;
    puVar6[4] = param_3;
    FRayTracingShaderBindings::FRayTracingShaderBindings
              ((FRayTracingShaderBindings *)(puVar6 + 5),&local_628);
    puVar6[200] = param_5;
    *(uint *)(puVar6 + 0xc9) = param_6;
    puVar6[199] = param_2;
    *(undefined8 *)((longlong)puVar6 + 0x64c) = 0;
  }
  else {
    pIVar5 = FRHICommandListBase::GetComputeContext((FRHICommandListBase *)this);
    pcVar3 = *(code **)(pIVar5->_padding_ + 0x28);
    if (param_1 == (FRayTracingPipelineState *)0x0) {
      pFVar7 = (FRHIRayTracingPipelineState *)0x0;
    }
    else {
      if ((param_1->RHIPipeline).Reference == (FRHIRayTracingPipelineState *)0x0) {
        bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<4687553501859939675>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
                           ,0x55b,"PipelineState->RHIPipeline");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      puVar6 = (undefined8 *)param_1->_padding_;
      if (puVar6 != (undefined8 *)0x0) {
        param_1->_padding_ = 0;
        LOCK();
        piVar1 = (int *)(puVar6 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*puVar6)(puVar6,1);
        }
      }
      pFVar7 = (param_1->RHIPipeline).Reference;
    }
    (*pcVar3)(pIVar5,pFVar7,param_2,param_3,&local_628,param_5,param_6);
  }
  param_4->Allocator->AttachedParameters = (FRHIBatchedShaderParameters *)0x0;
  (param_4->ParametersData).DataPtr = (uchar *)0x0;
  *(ulonglong *)&(param_4->ParametersData).ArrayNum = (ulonglong)uStack_62c << 0x20;
  (param_4->Parameters).DataPtr = (FRHIShaderParameter *)0x0;
  *(ulonglong *)&(param_4->Parameters).ArrayNum = (ulonglong)uStack_62c << 0x20;
  (param_4->ResourceParameters).DataPtr = (FRHIShaderParameterResource *)0x0;
  *(ulonglong *)&(param_4->ResourceParameters).ArrayNum = (ulonglong)uStack_62c << 0x20;
  (param_4->BindlessParameters).DataPtr = (FRHIShaderParameterResource *)0x0;
  *(ulonglong *)&(param_4->BindlessParameters).ArrayNum = (ulonglong)uStack_62c << 0x20;
  if (local_628.BindlessParameters.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_628.BindlessParameters.AllocatorInstance.Data);
  }
  return;
}

// SetTrackedAccess @ 145cbffe0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHIComputeCommandList::SetTrackedAccess
          (FRHIComputeCommandList *this,TArrayView<FRHITrackedAccessInfo_const_,int> *param_1)

{
  int *piVar1;
  byte bVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  undefined8 *puVar6;
  void *_Dst;
  FRHITrackedAccessInfo *pFVar7;
  int iVar8;
  FRHITrackedAccessInfo *pFVar9;
  undefined8 *local_res18;
  undefined4 uStack_3c;
  
  if ((GRHICommandList.bLatchedBypass) && ((this->field_0x29b & 0x20) != 0)) {
    pFVar7 = param_1->DataPtr;
    pFVar9 = pFVar7 + param_1->ArrayNum;
    if (pFVar7 != pFVar9) {
      do {
        bVar2 = this->field_0x6a;
        if ((bVar2 == 0) || ((bVar2 & bVar2 - 1) != 0)) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSingleRHIPipeline(ActivePipelines)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                             ,0x2b7,
                             L"Exactly one pipeline must be active to call GetComputeContext(). Current pipeline mask is \'0x%02x\'."
                            );
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        if (*(longlong *)&this->field_0x40 == 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("ComputeContext",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                             ,0x2b8,
                             L"There is no active compute context on this command list. There may be a missing call to SwitchPipeline()."
                            );
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        (**(code **)(**(longlong **)&this->field_0x40 + 0x150))
                  (*(longlong **)&this->field_0x40,pFVar7);
        pFVar7 = pFVar7 + 1;
      } while (pFVar7 != pFVar9);
      return;
    }
  }
  else {
    puVar6 = FMemStackBase::Alloc((FMemStackBase *)this,0x20,8);
    *(int *)&this->field_0x60 = *(int *)&this->field_0x60 + 1;
    uVar3 = *(undefined8 *)&param_1->ArrayNum;
    **(undefined8 **)&this->field_0x30 = puVar6;
    *(undefined8 **)&this->field_0x30 = puVar6 + 1;
    iVar8 = (int)uVar3;
    if (iVar8 == 0) {
      _Dst = (void *)0x0;
    }
    else {
      _Dst = FMemStackBase::Alloc((FMemStackBase *)this,(longlong)iVar8 << 4,8);
      memcpy(_Dst,param_1->DataPtr,(longlong)iVar8 << 4);
      if (iVar8 < 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    puVar6[1] = 0;
    *puVar6 = &___7FRHICommandSetTrackedAccess__6B_;
    puVar6[2] = _Dst;
    puVar6[3] = CONCAT44(uStack_3c,iVar8);
    FRHICommandListBase::RHIThreadFence((FRHICommandListBase *)this,true);
    if (local_res18 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(local_res18 + 6);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)*local_res18)(local_res18,1);
      }
    }
  }
  return;
}

// SetTrackedAccess @ 145cc01e0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FRHIComputeCommandList::SetTrackedAccess
          (FRHIComputeCommandList *this,TArrayView<FRHITransitionInfo_const_,int> *param_1,
          ERHIPipeline param_2)

{
  int iVar1;
  FRHITrackedAccessInfo *pFVar2;
  FRHIViewableResource *pFVar3;
  FRHITransitionInfo *pFVar4;
  FRHITransitionInfo *pFVar5;
  int iVar6;
  FRHITrackedAccessInfo *pFVar7;
  FRHITrackedAccessInfo *pFVar8;
  undefined1 local_res8 [8];
  TArrayView<FRHITrackedAccessInfo_const_,int> local_38;
  
  iVar1 = param_1->ArrayNum;
  pFVar4 = param_1->DataPtr;
  pFVar2 = FMemStackBase::Alloc((FMemStackBase *)this,(longlong)iVar1 << 4,8);
  iVar6 = 0;
  pFVar5 = pFVar4 + iVar1;
  pFVar7 = pFVar2;
  if (pFVar4 != pFVar5) {
    do {
      if ((((short)pFVar4->_padding_ != -1) || (*(short *)((longlong)&pFVar4->_padding_ + 2) != -1))
         || (*(short *)((longlong)&pFVar4->_padding_ + 4) != -1)) {
        `FRHIComputeCommandList::SetTrackedAccess'::__l6::<lambda_1>::operator()(local_res8);
      }
      pFVar3 = GetViewableResource(pFVar4);
      pFVar8 = pFVar7;
      if (pFVar3 != (FRHIViewableResource *)0x0) {
        iVar6 = iVar6 + 1;
        pFVar8 = pFVar7 + 1;
        *(ERHIAccess *)&pFVar7->_padding_ = pFVar4->AccessAfter;
        *(ERHIPipeline *)((longlong)&pFVar7->_padding_ + 4) = param_2;
        pFVar7->Resource = pFVar3;
      }
      pFVar4 = pFVar4 + 1;
      pFVar7 = pFVar8;
    } while (pFVar4 != pFVar5);
    if (0 < iVar6) {
      local_38.ArrayNum = iVar6;
      local_38.DataPtr = pFVar2;
      SetTrackedAccess(this,&local_38);
    }
  }
  return;
}

// Transition @ 145cc4cb0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHIComputeCommandList::Transition
          (FRHIComputeCommandList *this,TArrayView<FRHITransitionInfo_const_,int> *param_1,
          ERHIPipeline param_2,ERHIPipeline param_3,ERHITransitionCreateFlags param_4)

{
  code *pcVar1;
  bool bVar2;
  ERHIPipeline EVar3;
  ERHIPipeline EVar4;
  FRHITransition *pFVar5;
  FRHITransitionInfo *pFVar6;
  FRHITransitionInfo *pFVar7;
  FRHITransition *local_res8;
  FRHITransition *local_res10;
  uint uStack_8c;
  TArrayView<FRHITransition_const_*,int> local_88;
  TArrayView<FRHITransition_const_*,int> local_78;
  TArrayView<FRHITransitionInfo_const_,int> local_68;
  FRHITransitionCreateInfo local_58;
  
  pFVar7 = param_1->DataPtr;
  pFVar6 = pFVar7 + param_1->ArrayNum;
  while( true ) {
    if (pFVar7 == pFVar6) {
      if (GRHIGlobals.SupportsEfficientAsyncCompute == false) {
        param_2 = Graphics;
        param_3 = Graphics;
      }
      local_58.TransitionInfos.DataPtr = param_1->DataPtr;
      local_58.TransitionInfos.ArrayNum = param_1->ArrayNum;
      local_58.TransitionInfos._12_4_ = *(undefined4 *)&param_1->field_0xc;
      local_58.AliasingInfos._8_8_ = (ulonglong)uStack_8c << 0x20;
      local_58.AliasingInfos.DataPtr = (FRHITransientAliasingInfo *)0x0;
      local_58.Flags = param_4;
      local_58.SrcPipelines = param_2;
      local_58.DstPipelines = param_3;
      pFVar5 = RHICreateTransition(&local_58);
      for (; EVar3 = param_3, param_2 != None; param_2 = param_2 & ~(~param_2 + Graphics)) {
        EVar3 = FRHICommandListBase::SwitchPipeline
                          ((FRHICommandListBase *)this,~param_2 + Graphics & param_2);
        local_88.DataPtr = &local_res8;
        local_88._12_4_ = uStack_8c;
        local_88.ArrayNum = 1;
        local_res8 = pFVar5;
        BeginTransitions(this,&local_88);
        FRHICommandListBase::SwitchPipeline((FRHICommandListBase *)this,EVar3);
      }
      for (; EVar3 != None; EVar3 = EVar3 & ~(~EVar3 + Graphics)) {
        EVar4 = FRHICommandListBase::SwitchPipeline
                          ((FRHICommandListBase *)this,~EVar3 + Graphics & EVar3);
        local_78.DataPtr = &local_res10;
        local_78._12_4_ = uStack_8c;
        local_78.ArrayNum = 1;
        local_res10 = pFVar5;
        EndTransitions(this,&local_78);
        FRHICommandListBase::SwitchPipeline((FRHICommandListBase *)this,EVar4);
      }
      EVar3 = FRHICommandListBase::SwitchPipeline
                        ((FRHICommandListBase *)this,(param_3 == AsyncCompute) + Graphics);
      local_68.DataPtr = param_1->DataPtr;
      local_68.ArrayNum = param_1->ArrayNum;
      local_68._12_4_ = *(undefined4 *)&param_1->field_0xc;
      SetTrackedAccess(this,&local_68,param_3);
      FRHICommandListBase::SwitchPipeline((FRHICommandListBase *)this,EVar3);
      return;
    }
    if (((((short)pFVar7->_padding_ != -1) || (*(short *)((longlong)&pFVar7->_padding_ + 2) != -1))
        || (*(short *)((longlong)&pFVar7->_padding_ + 4) != -1)) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Info.IsWholeResource()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHICommandList.cpp"
                           ,0x7a1,
                           L"Only whole resource transitions are allowed in FRHIComputeCommandList::Transition."
                          ), bVar2)) break;
    pFVar7 = pFVar7 + 1;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// Transition @ 145cc4ec0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHIComputeCommandList::Transition
          (FRHIComputeCommandList *this,TArrayView<FRHITransitionInfo_const_,int> *param_1,
          ERHITransitionCreateFlags param_2)

{
  TArrayView<FRHITransitionInfo_const_,int> local_18;
  
  local_18.DataPtr = param_1->DataPtr;
  local_18.ArrayNum = param_1->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  FRHICommandListBase::TransitionInternal((FRHICommandListBase *)this,&local_18,param_2);
  local_18.DataPtr = param_1->DataPtr;
  local_18.ArrayNum = param_1->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  SetTrackedAccess(this,&local_18,this->field_0x6a);
  return;
}

// operator() @ 1504da690

bool __thiscall `FRHIComputeCommandList::SetTrackedAccess'::__l6::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<6604847226579586042>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6604847226579586042>,
                       &`public:___cdecl_`public:_void___cdecl_FRHIComputeCommandList::SetTrackedAccess(TArrayView<FRHITransitionInfo_const_,int>,ERHIPipeline)___ptr64'::`6'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

