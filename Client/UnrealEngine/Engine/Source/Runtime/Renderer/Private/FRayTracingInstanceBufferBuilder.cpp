// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 9

// operator() @ 145302c30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`FRayTracingInstanceBufferBuilder::FillAccelerationStructureAddressesBuffer'::__l10::<lambda_1>::
operator()(void *this,FRHICommandListBase *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  undefined8 uVar5;
  uint uVar6;
  longlong lVar7;
  bool bVar8;
  
  bVar8 = -1 < CpuChannel->Enabled;
  if (bVar8) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1025,"GetAccelerationStructuresAddresses",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RayTracing\\RayTracingInstanceBufferUtil.cpp"
               ,0x401);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1025);
  }
  uVar6 = 0;
  if (0 < *(int *)((longlong)this + 0x10)) {
    lVar7 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar6 < *(int *)((longlong)this + 0x10)) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      plVar1 = *(longlong **)(lVar7 + *(longlong *)((longlong)this + 8));
      uVar5 = (**(code **)(*plVar1 + 0x10))(plVar1,*(undefined4 *)((longlong)this + 0x18));
      uVar6 = uVar6 + 1;
      *(undefined8 *)(lVar7 + *(longlong *)this) = uVar5;
      lVar7 = lVar7 + 8;
    } while ((int)uVar6 < *(int *)((longlong)this + 0x10));
  }
  if (!bVar8) {
    return;
  }
  FCpuProfilerTrace::OutputEndEvent();
  return;
}

// BuildRayTracingInstanceBuffer @ 1453117b0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FRayTracingInstanceBufferBuilder::BuildRayTracingInstanceBuffer
          (FRayTracingInstanceBufferBuilder *this,FRHICommandList *param_1,FGPUScene *param_2,
          FRayTracingCullingParameters *param_3,FRHIUnorderedAccessView *param_4,
          FRHIUnorderedAccessView *param_5,uint param_6,bool param_7,
          FRHIUnorderedAccessView *param_8,uint param_9,FRHIUnorderedAccessView *param_10)

{
  double dVar1;
  double dVar2;
  double dVar3;
  FGPUSceneResourceParametersRHI *pFVar4;
  TVector<float>_u_0 local_d8;
  undefined8 local_cc;
  float local_c4;
  FGPUSceneResourceParametersRHI local_b8;
  FGPUSceneResourceParametersRHI local_68;
  
  local_b8.GPUSceneLightData = (FRHIShaderResourceView *)0x0;
  local_b8.GPUSceneInstanceSceneData = (FRHIShaderResourceView *)0x0;
  local_b8.GPUSceneInstancePayloadData = (FRHIShaderResourceView *)0x0;
  local_b8.GPUScenePrimitiveSceneData = (FRHIShaderResourceView *)0x0;
  local_b8.GPUSceneLightmapData = (FRHIShaderResourceView *)0x0;
  if (param_2 != (FGPUScene *)0x0) {
    pFVar4 = FGPUScene::GetShaderParametersRHI(param_2,&local_68);
    local_b8.CommonParameters.GPUSceneInstanceDataTileSizeLog2 =
         (pFVar4->CommonParameters).GPUSceneInstanceDataTileSizeLog2;
    local_b8.CommonParameters.GPUSceneInstanceDataTileSizeMask =
         (pFVar4->CommonParameters).GPUSceneInstanceDataTileSizeMask;
    local_b8.CommonParameters.GPUSceneInstanceDataTileStride =
         (pFVar4->CommonParameters).GPUSceneInstanceDataTileStride;
    local_b8.CommonParameters.GPUSceneFrameNumber = (pFVar4->CommonParameters).GPUSceneFrameNumber;
    local_b8.CommonParameters.GPUSceneMaxAllocatedInstanceId =
         (pFVar4->CommonParameters).GPUSceneMaxAllocatedInstanceId;
    local_b8.CommonParameters.GPUSceneMaxPersistentPrimitiveIndex =
         (pFVar4->CommonParameters).GPUSceneMaxPersistentPrimitiveIndex;
    local_b8.CommonParameters.GPUSceneNumLightmapDataItems =
         (pFVar4->CommonParameters).GPUSceneNumLightmapDataItems;
    local_b8.CommonParameters._28_4_ = *(undefined4 *)&(pFVar4->CommonParameters).field_0x1c;
    local_b8.GPUSceneInstanceSceneData = pFVar4->GPUSceneInstanceSceneData;
    local_b8.GPUSceneInstancePayloadData = pFVar4->GPUSceneInstancePayloadData;
    local_b8.GPUScenePrimitiveSceneData = pFVar4->GPUScenePrimitiveSceneData;
    local_b8.GPUSceneLightmapData = pFVar4->GPUSceneLightmapData;
    local_b8.GPUSceneLightData = pFVar4->GPUSceneLightData;
    local_b8._72_8_ = *(undefined8 *)&pFVar4->field_0x48;
  }
  dVar1 = (this->PreViewTranslation).field0_0x0._s_0.X;
  dVar2 = (this->PreViewTranslation).field0_0x0._s_0.Y;
  dVar3 = (this->PreViewTranslation).field0_0x0._s_0.Z;
  pFVar4 = &local_b8;
  if (param_2 == (FGPUScene *)0x0) {
    pFVar4 = (FGPUSceneResourceParametersRHI *)0x0;
  }
  local_d8._s_0.X = (float)dVar1;
  local_d8._s_0.Z = (float)dVar3;
  local_d8._s_0.Y = (float)dVar2;
  local_c4 = (float)(dVar3 - (double)local_d8._s_0.Z);
  local_cc = CONCAT44((float)(dVar2 - (double)local_d8._s_0.Y),
                      (float)(dVar1 - (double)local_d8._s_0.X));
  ::BuildRayTracingInstanceBuffer
            (param_1,pFVar4,(FDFVector3 *)&local_d8._s_0,param_4,param_5,
             (this->InstanceGroupUploadSRV).Reference,(this->InstanceUploadSRV).Reference,
             (this->AccelerationStructureAddressesBuffer).SRV.Reference,
             (this->TransformUploadSRV).Reference,param_6,(this->Data).NumGPUInstanceGroups,
             (this->Data).NumCPUInstanceGroups,(this->Data).NumGPUInstanceDescriptors,
             (this->Data).NumCPUInstanceDescriptors,param_3,param_7,param_8,param_9,param_10);
  return;
}

// BuildRayTracingInstanceBuffer @ 1453119b0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FRayTracingInstanceBufferBuilder::BuildRayTracingInstanceBuffer
          (FRayTracingInstanceBufferBuilder *this,FRHICommandList *param_1,FGPUScene *param_2,
          FGPUSceneResourceParametersRHI *param_3,FRayTracingCullingParameters *param_4,
          FRHIUnorderedAccessView *param_5,FRHIUnorderedAccessView *param_6,uint param_7,
          bool param_8,FRHIUnorderedAccessView *param_9,uint param_10,
          FRHIUnorderedAccessView *param_11)

{
  double dVar1;
  double dVar2;
  double dVar3;
  TConsoleVariableData<bool> *pTVar4;
  bool bVar5;
  FGPUSceneResourceParametersRHI *pFVar6;
  TVector<float>_u_0 local_e8;
  undefined8 local_dc;
  float local_d4;
  FGPUSceneResourceParametersRHI local_c8;
  FGPUSceneResourceParametersRHI local_78;
  
  pTVar4 = CVarRayTracingInstanceBufferLateGetGPUSceneParameters.Ref;
  bVar5 = IsInParallelGameThread();
  if (!bVar5) {
    bVar5 = IsInGameThread();
    pFVar6 = (FGPUSceneResourceParametersRHI *)&DAT_00000001;
    if (!bVar5) goto LAB_145311a03;
  }
  pFVar6 = (FGPUSceneResourceParametersRHI *)0x0;
LAB_145311a03:
  if (pTVar4->ShadowedValue[(longlong)&pFVar6->CommonParameters] != false) {
    local_c8.GPUSceneLightData = (FRHIShaderResourceView *)0x0;
    local_c8.GPUSceneInstanceSceneData = (FRHIShaderResourceView *)0x0;
    local_c8.GPUSceneInstancePayloadData = (FRHIShaderResourceView *)0x0;
    local_c8.GPUScenePrimitiveSceneData = (FRHIShaderResourceView *)0x0;
    local_c8.GPUSceneLightmapData = (FRHIShaderResourceView *)0x0;
    param_3 = (FGPUSceneResourceParametersRHI *)0x0;
    if (param_2 != (FGPUScene *)0x0) {
      pFVar6 = FGPUScene::GetShaderParametersRHI(param_2,&local_78);
      local_c8.CommonParameters.GPUSceneInstanceDataTileSizeLog2 =
           (pFVar6->CommonParameters).GPUSceneInstanceDataTileSizeLog2;
      local_c8.CommonParameters.GPUSceneInstanceDataTileSizeMask =
           (pFVar6->CommonParameters).GPUSceneInstanceDataTileSizeMask;
      local_c8.CommonParameters.GPUSceneInstanceDataTileStride =
           (pFVar6->CommonParameters).GPUSceneInstanceDataTileStride;
      local_c8.CommonParameters.GPUSceneFrameNumber = (pFVar6->CommonParameters).GPUSceneFrameNumber
      ;
      local_c8.CommonParameters.GPUSceneMaxAllocatedInstanceId =
           (pFVar6->CommonParameters).GPUSceneMaxAllocatedInstanceId;
      local_c8.CommonParameters.GPUSceneMaxPersistentPrimitiveIndex =
           (pFVar6->CommonParameters).GPUSceneMaxPersistentPrimitiveIndex;
      local_c8.CommonParameters.GPUSceneNumLightmapDataItems =
           (pFVar6->CommonParameters).GPUSceneNumLightmapDataItems;
      local_c8.CommonParameters._28_4_ = *(undefined4 *)&(pFVar6->CommonParameters).field_0x1c;
      local_c8.GPUSceneInstanceSceneData = pFVar6->GPUSceneInstanceSceneData;
      local_c8.GPUSceneInstancePayloadData = pFVar6->GPUSceneInstancePayloadData;
      local_c8.GPUScenePrimitiveSceneData = pFVar6->GPUScenePrimitiveSceneData;
      local_c8.GPUSceneLightmapData = pFVar6->GPUSceneLightmapData;
      local_c8.GPUSceneLightData = pFVar6->GPUSceneLightData;
      local_c8._72_8_ = *(undefined8 *)&pFVar6->field_0x48;
      param_3 = &local_c8;
    }
  }
  dVar1 = (this->PreViewTranslation).field0_0x0._s_0.X;
  dVar2 = (this->PreViewTranslation).field0_0x0._s_0.Y;
  dVar3 = (this->PreViewTranslation).field0_0x0._s_0.Z;
  local_e8._s_0.X = (float)dVar1;
  local_e8._s_0.Z = (float)dVar3;
  local_e8._s_0.Y = (float)dVar2;
  local_d4 = (float)(dVar3 - (double)local_e8._s_0.Z);
  local_dc = CONCAT44((float)(dVar2 - (double)local_e8._s_0.Y),
                      (float)(dVar1 - (double)local_e8._s_0.X));
  ::BuildRayTracingInstanceBuffer
            (param_1,param_3,(FDFVector3 *)&local_e8._s_0,param_5,param_6,
             (this->InstanceGroupUploadSRV).Reference,(this->InstanceUploadSRV).Reference,
             (this->AccelerationStructureAddressesBuffer).SRV.Reference,
             (this->TransformUploadSRV).Reference,param_7,(this->Data).NumGPUInstanceGroups,
             (this->Data).NumCPUInstanceGroups,(this->Data).NumGPUInstanceDescriptors,
             (this->Data).NumCPUInstanceDescriptors,param_4,param_8,param_9,param_10,param_11);
  return;
}

// FillAccelerationStructureAddressesBuffer @ 14531f880

/* WARNING: Removing unreachable block (ram,0x00014531fa1f) */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRayTracingInstanceBufferBuilder::FillAccelerationStructureAddressesBuffer
          (FRayTracingInstanceBufferBuilder *this,FRHICommandList *param_1)

{
  FByteAddressBuffer *pFVar1;
  ulonglong uVar2;
  FRHIBuffer *pFVar3;
  FRHIShaderResourceView *this_00;
  FScriptContainerElement *_Src;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  TRefCountPtr<FRHIBuffer> TVar8;
  TRefCountPtr<FRHIShaderResourceView> TVar9;
  longlong lVar10;
  FName _Dst;
  undefined8 *puVar11;
  TRefCountPtr<FRHIShaderResourceView> *pTVar12;
  int iVar13;
  uint uVar14;
  uint local_res10;
  undefined1 local_c8 [16];
  wchar_t *local_b8;
  undefined8 uStack_b0;
  longlong local_a8;
  FName FStack_a0;
  FNameEntryId local_98;
  uint uStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  wchar_t *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  iVar6 = (this->Data).ReferencedGeometries.ArrayNum;
  iVar13 = 1;
  if (iVar6 != 0) {
    iVar13 = iVar6;
  }
  uVar2 = (ulonglong)(iVar13 - 1) * 2 + 1;
  lVar10 = 0x3f;
  if (uVar2 != 0) {
    for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
    }
  }
  iVar13 = 1 << ((byte)lVar10 & 0x1f);
  iVar6 = 1;
  if (iVar13 != 0) {
    iVar6 = iVar13;
  }
  uVar2 = (ulonglong)(iVar6 - 1) * 2 + 1;
  lVar10 = 0x3f;
  if (uVar2 != 0) {
    for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
    }
  }
  uVar7 = (1 << ((byte)lVar10 & 0x1f)) << 3;
  if ((this->AccelerationStructureAddressesBuffer).NumBytes < uVar7) {
    pFVar1 = &this->AccelerationStructureAddressesBuffer;
    (this->AccelerationStructureAddressesBuffer).NumBytes = uVar7;
    local_88 = CONCAT44(4,uVar7);
    uStack_80 = CONCAT44((1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1,0x30114);
    local_68 = 0x70;
    uStack_60 = 0;
    local_78 = L"FRayTracingScene::AccelerationStructureAddressesBuffer";
    uStack_70 = 0;
    local_58 = 0;
    TVar8 = FRHICommandListBase::CreateBuffer
                      ((FRHICommandListBase *)param_1,(FRHIBufferCreateDesc *)local_c8);
    if ((FRHIBuffer *)pFVar1 != TVar8.Reference) {
      pFVar3 = (pFVar1->Buffer).Reference;
      (pFVar1->Buffer).Reference = (FRHIBuffer *)(TVar8.Reference)->_padding_;
      (TVar8.Reference)->_padding_ = 0;
      if (pFVar3 != (FRHIBuffer *)0x0) {
        FRHIResource::Release((FRHIResource *)pFVar3);
      }
    }
    if ((FRHIResource *)local_c8._0_8_ != (FRHIResource *)0x0) {
      FRHIResource::Release((FRHIResource *)local_c8._0_8_);
    }
    uStack_b0 = (FResourceArrayUploadInterface *)0x0;
    local_b8 = (wchar_t *)&DAT_00040000;
    TVar9 = FRHICommandListBase::CreateShaderResourceView
                      ((FRHICommandListBase *)param_1,(FRHIBuffer *)(local_c8 + 8),
                       (FInitializer *)(pFVar1->Buffer).Reference);
    pTVar12 = &(this->AccelerationStructureAddressesBuffer).SRV;
    if ((FRHIShaderResourceView *)pTVar12 != TVar9.Reference) {
      this_00 = pTVar12->Reference;
                    /* WARNING: Load size is inaccurate */
      pTVar12->Reference = *TVar9.Reference;
      *(undefined8 *)TVar9.Reference = 0;
      if (this_00 != (FRHIShaderResourceView *)0x0) {
        FRHIResource::Release((FRHIResource *)this_00);
      }
    }
    if ((FRHIResource *)local_c8._8_8_ != (FRHIResource *)0x0) {
      FRHIResource::Release((FRHIResource *)local_c8._8_8_);
    }
  }
  local_res10 = *(uint *)&param_1->field_0x29c;
  iVar6 = 0;
  if (local_res10 != 0) {
    for (; (local_res10 >> iVar6 & 1) == 0; iVar6 = iVar6 + 1) {
    }
  }
  if (local_res10 != 0) {
    uVar7 = uStack_b0._4_4_;
    do {
      pFVar3 = (this->AccelerationStructureAddressesBuffer).Buffer.Reference;
      if (((((GRHICommandList.bLatchedBypass == false) || ((param_1->field_0x29b & 0x20) == 0)) &&
           (param_1->field_0x64 != '\0')) &&
          ((GRHICommandList.bLatchedBypass == false || ((param_1->field_0x29b & 0x20) == 0)))) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsTopOfPipe() || Bypass()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                             ,0x30b,
                             L"Buffers may only be locked while recording RHI command lists, not during RHI command list execution."
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar10 = (**(code **)(GDynamicRHI->_padding_ + 0x150))
                         (GDynamicRHI,param_1,pFVar3,iVar6,0,iVar13 * 8,1);
      uVar14 = (this->Data).ReferencedGeometries.ArrayNum;
      _Src = (this->Data).ReferencedGeometries.AllocatorInstance.Data;
      if ((int)uVar14 < 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
LAB_14531fb11:
        _Dst = (FName)FMemStackBase::Alloc((FMemStackBase *)param_1,(longlong)(int)uVar14 << 3,8);
        memcpy((void *)_Dst,_Src,(longlong)(int)uVar14 << 3);
        if (((int)uVar14 < 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("ArrayNum >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xfe,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      else {
        if (uVar14 != 0) goto LAB_14531fb11;
        _Dst.ComparisonIndex.Value = 0;
        _Dst.Number = 0;
        uVar14 = 0;
      }
      uStack_94 = uVar7;
      local_a8 = lVar10;
      FStack_a0 = _Dst;
      local_98.Value = uVar14;
      iStack_90 = iVar6;
      if (((GRHICommandList.bLatchedBypass == false) || ((param_1->field_0x29b & 0x20) == 0)) &&
         (param_1->field_0x64 == '\0')) {
        puVar11 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x38,8);
        *(int *)&param_1->field_0x60 = *(int *)&param_1->field_0x60 + 1;
        **(undefined8 **)&param_1->field_0x30 = puVar11;
        *(undefined8 **)&param_1->field_0x30 = puVar11 + 1;
        puVar11[1] = 0;
        *puVar11 = &TRHILambdaCommand<FRHICommandList,`FRayTracingInstanceBufferBuilder::FillAccelerationStructureAddressesBuffer'::`10'::<lambda_1>_>
                    ::_vftable_;
        puVar11[2] = local_a8;
        *(FName *)(puVar11 + 3) = FStack_a0;
        puVar11[6] = L"TRHILambdaCommand";
        puVar11[4] = CONCAT44(uStack_94,local_98.Value);
        puVar11[5] = CONCAT44(uStack_8c,iStack_90);
      }
      else {
        `FRayTracingInstanceBufferBuilder::FillAccelerationStructureAddressesBuffer'::__l10::
        <lambda_1>::operator()(&local_a8,(FRHICommandListBase *)param_1);
      }
      pFVar3 = (this->AccelerationStructureAddressesBuffer).Buffer.Reference;
      if ((((GRHICommandList.bLatchedBypass == false) || ((param_1->field_0x29b & 0x20) == 0)) &&
          ((param_1->field_0x64 != '\0' &&
           ((GRHICommandList.bLatchedBypass == false || ((param_1->field_0x29b & 0x20) == 0)))))) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsTopOfPipe() || Bypass()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                             ,0x312,
                             L"Buffers may only be unlocked while recording RHI command lists, not during RHI command list execution."
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      (**(code **)(GDynamicRHI->_padding_ + 0x160))(GDynamicRHI,param_1,pFVar3,iVar6);
      local_res10 = local_res10 & ~(1 << ((byte)iVar6 & 0x1f));
      iVar6 = 0;
      if (local_res10 != 0) {
        for (; (local_res10 >> iVar6 & 1) == 0; iVar6 = iVar6 + 1) {
        }
      }
    } while (local_res10 != 0);
  }
  return;
}

// FillRayTracingInstanceUploadBuffer @ 145320220

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRayTracingInstanceBufferBuilder::FillRayTracingInstanceUploadBuffer
          (FRayTracingInstanceBufferBuilder *this,FRHICommandList *param_1)

{
  TRefCountPtr<FRHIBuffer> *pTVar1;
  TRefCountPtr<FRHIShaderResourceView> *pTVar2;
  TRefCountPtr<FRHIBuffer> *pTVar3;
  TRefCountPtr<FRHIBuffer> *pTVar4;
  bool bVar5;
  <lambda_1> <Var6;
  uint uVar7;
  int iVar8;
  int iVar9;
  FRHIBuffer *pFVar10;
  FRHIShaderResourceView *pFVar11;
  code *pcVar12;
  int iVar13;
  double dVar14;
  undefined8 uVar15;
  TConsoleVariableData<bool> *pTVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  uint uVar20;
  ERHIAccess EVar21;
  TRefCountPtr<FRHIBuffer> TVar22;
  TRefCountPtr<FRHIShaderResourceView> TVar23;
  byte bVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  bool bVar29;
  void *local_368;
  undefined4 uStack_34c;
  undefined1 local_2a0 [16];
  TConsoleVariableData<bool> *local_290;
  FResourceArrayUploadInterface *local_288;
  void *local_280;
  FName local_278;
  undefined1 local_268 [16];
  undefined1 local_258 [16];
  TArrayView<std::nullptr_t,int> local_248;
  code *local_238;
  FName local_230;
  FName local_228;
  int iStack_220;
  undefined4 uStack_21c;
  FScriptContainerElement *local_218;
  int iStack_210;
  undefined4 uStack_20c;
  FScriptContainerElement *local_208;
  int iStack_200;
  undefined4 uStack_1fc;
  FScriptContainerElement *local_1f8;
  int iStack_1f0;
  undefined4 uStack_1ec;
  FResourceArrayUploadInterface *local_1e8;
  uint local_1e0;
  undefined4 local_1dc;
  void *local_1d8;
  uint local_1d0;
  undefined4 local_1cc;
  void *local_1c8;
  int local_1c0;
  undefined4 local_1bc;
  uint local_1b8;
  uint local_1b4;
  uint local_1b0;
  uint local_1ac;
  FRayTracingGeometryInstance *local_1a8;
  undefined8 uStack_1a0;
  TBitArray<FDefaultBitArrayAllocator> *local_198;
  <lambda_1> local_190;
  undefined1 local_18f;
  undefined1 local_18e;
  FName local_188;
  undefined8 uStack_180;
  FScriptContainerElement *local_178;
  undefined8 uStack_170;
  FScriptContainerElement *local_168;
  undefined8 uStack_160;
  FScriptContainerElement *local_158;
  undefined8 uStack_150;
  double local_148;
  undefined8 uStack_140;
  FName local_138;
  undefined1 local_130;
  FInitializer local_128;
  FInitializer local_118;
  FInitializer local_108;
  FRayTracingGeometryInstance *local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  wchar_t *local_d8;
  undefined8 uStack_d0;
  ulonglong local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  wchar_t *local_a0;
  undefined8 uStack_98;
  ulonglong local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  wchar_t *local_68;
  undefined8 uStack_60;
  ulonglong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  uVar20 = (this->Data).NumGPUInstanceDescriptors + (this->Data).NumCPUInstanceDescriptors;
  uVar27 = (this->Data).NumGPUInstanceGroups + (this->Data).NumCPUInstanceGroups;
  pTVar1 = &this->InstanceGroupUploadBuffer;
  uVar26 = 1;
  if (1 < uVar20) {
    uVar26 = uVar20;
  }
  uVar28 = 1;
  if (1 < (this->Data).NumNativeCPUInstances) {
    uVar28 = (this->Data).NumNativeCPUInstances;
  }
  uVar25 = 1;
  if (1 < uVar27) {
    uVar25 = uVar27;
  }
  uVar25 = (uVar25 + 0x1fff >> 0xd) << 0xf;
  if (((pTVar1->Reference == (FRHIBuffer *)0x0) ||
      (uVar7 = (pTVar1->Reference->Desc).Size, uVar7 < uVar25)) || (uVar25 < uVar7 >> 1)) {
    bVar24 = (byte)GNumExplicitGPUsForRendering;
    EVar21 = RHIGetDefaultResourceState(StructuredBuffer|ShaderResource|Volatile,false);
    local_e8 = CONCAT44(4,uVar25);
    uStack_e0 = CONCAT44((1 << (bVar24 & 0x1f)) + -1,0x10104);
    local_c8 = (ulonglong)EVar21;
    uStack_c0 = 0;
    local_d8 = L"FRayTracingScene::InstanceGroupUploadBuffer";
    uStack_d0 = 0;
    local_b8 = 0;
    TVar22 = FRHICommandListBase::CreateBuffer
                       ((FRHICommandListBase *)param_1,(FRHIBufferCreateDesc *)local_268);
    if ((FRHIBuffer *)pTVar1 != TVar22.Reference) {
      pFVar10 = pTVar1->Reference;
      pTVar1->Reference = (FRHIBuffer *)(TVar22.Reference)->_padding_;
      (TVar22.Reference)->_padding_ = 0;
      if (pFVar10 != (FRHIBuffer *)0x0) {
        FRHIResource::Release((FRHIResource *)pFVar10);
      }
    }
    if ((FRHIResource *)local_268._0_8_ != (FRHIResource *)0x0) {
      FRHIResource::Release((FRHIResource *)local_268._0_8_);
    }
    local_128._0_8_ = 0;
    local_128._8_8_ = 0;
    FRHIViewDesc::FBufferSRV::FInitializer::SetTypeFromBuffer(&local_128,pTVar1->Reference);
    TVar23 = FRHICommandListBase::CreateShaderResourceView
                       ((FRHICommandListBase *)param_1,(FRHIBuffer *)(local_268 + 8),
                        (FInitializer *)pTVar1->Reference);
    pTVar2 = &this->InstanceGroupUploadSRV;
    if ((FRHIShaderResourceView *)pTVar2 != TVar23.Reference) {
      pFVar11 = pTVar2->Reference;
                    /* WARNING: Load size is inaccurate */
      pTVar2->Reference = *TVar23.Reference;
      *(undefined8 *)TVar23.Reference = 0;
      if (pFVar11 != (FRHIShaderResourceView *)0x0) {
        FRHIResource::Release((FRHIResource *)pFVar11);
      }
    }
    if ((FRHIResource *)local_268._8_8_ != (FRHIResource *)0x0) {
      FRHIResource::Release((FRHIResource *)local_268._8_8_);
    }
  }
  pTVar3 = &this->InstanceUploadBuffer;
  uVar26 = (uVar26 + 0x1fff & 0xffffe000) * 0x1c;
  if (((pTVar3->Reference == (FRHIBuffer *)0x0) ||
      (uVar25 = (pTVar3->Reference->Desc).Size, uVar25 < uVar26)) || (uVar26 < uVar25 >> 1)) {
    bVar24 = (byte)GNumExplicitGPUsForRendering;
    EVar21 = RHIGetDefaultResourceState(StructuredBuffer|ShaderResource|Volatile,false);
    local_b0 = CONCAT44(0x1c,uVar26);
    uStack_a8 = CONCAT44((1 << (bVar24 & 0x1f)) + -1,0x10104);
    local_90 = (ulonglong)EVar21;
    uStack_88 = 0;
    local_a0 = L"FRayTracingScene::InstanceUploadBuffer";
    uStack_98 = 0;
    local_80 = 0;
    TVar22 = FRHICommandListBase::CreateBuffer
                       ((FRHICommandListBase *)param_1,(FRHIBufferCreateDesc *)local_258);
    if ((FRHIBuffer *)pTVar3 != TVar22.Reference) {
      pFVar10 = pTVar3->Reference;
      pTVar3->Reference = (FRHIBuffer *)(TVar22.Reference)->_padding_;
      (TVar22.Reference)->_padding_ = 0;
      if (pFVar10 != (FRHIBuffer *)0x0) {
        FRHIResource::Release((FRHIResource *)pFVar10);
      }
    }
    if ((FRHIResource *)local_258._0_8_ != (FRHIResource *)0x0) {
      FRHIResource::Release((FRHIResource *)local_258._0_8_);
    }
    local_118._0_8_ = 0;
    local_118._8_8_ = 0;
    FRHIViewDesc::FBufferSRV::FInitializer::SetTypeFromBuffer(&local_118,pTVar3->Reference);
    TVar23 = FRHICommandListBase::CreateShaderResourceView
                       ((FRHICommandListBase *)param_1,(FRHIBuffer *)(local_258 + 8),
                        (FInitializer *)pTVar3->Reference);
    pTVar2 = &this->InstanceUploadSRV;
    if ((FRHIShaderResourceView *)pTVar2 != TVar23.Reference) {
      pFVar11 = pTVar2->Reference;
                    /* WARNING: Load size is inaccurate */
      pTVar2->Reference = *TVar23.Reference;
      *(undefined8 *)TVar23.Reference = 0;
      if (pFVar11 != (FRHIShaderResourceView *)0x0) {
        FRHIResource::Release((FRHIResource *)pFVar11);
      }
    }
    if ((FRHIResource *)local_258._8_8_ != (FRHIResource *)0x0) {
      FRHIResource::Release((FRHIResource *)local_258._8_8_);
    }
  }
  pTVar4 = &this->TransformUploadBuffer;
  uVar26 = (uVar28 + 0x1fff & 0xffffe000) * 0x30;
  if (((pTVar4->Reference == (FRHIBuffer *)0x0) ||
      (uVar28 = (pTVar4->Reference->Desc).Size, uVar28 < uVar26)) || (uVar26 < uVar28 >> 1)) {
    bVar24 = (byte)GNumExplicitGPUsForRendering;
    EVar21 = RHIGetDefaultResourceState(StructuredBuffer|ShaderResource|Volatile,false);
    local_78 = CONCAT44(0x10,uVar26);
    uStack_70 = CONCAT44((1 << (bVar24 & 0x1f)) + -1,0x10104);
    local_58 = (ulonglong)EVar21;
    uStack_50 = 0;
    local_68 = L"FRayTracingScene::TransformUploadBuffer";
    uStack_60 = 0;
    local_48 = 0;
    TVar22 = FRHICommandListBase::CreateBuffer
                       ((FRHICommandListBase *)param_1,(FRHIBufferCreateDesc *)local_2a0);
    if ((FRHIBuffer *)pTVar4 != TVar22.Reference) {
      pFVar10 = pTVar4->Reference;
      pTVar4->Reference = (FRHIBuffer *)(TVar22.Reference)->_padding_;
      (TVar22.Reference)->_padding_ = 0;
      if (pFVar10 != (FRHIBuffer *)0x0) {
        FRHIResource::Release((FRHIResource *)pFVar10);
      }
    }
    if ((FRHIResource *)local_2a0._0_8_ != (FRHIResource *)0x0) {
      FRHIResource::Release((FRHIResource *)local_2a0._0_8_);
    }
    local_108._0_8_ = 0;
    local_108._8_8_ = 0;
    FRHIViewDesc::FBufferSRV::FInitializer::SetTypeFromBuffer(&local_108,pTVar4->Reference);
    TVar23 = FRHICommandListBase::CreateShaderResourceView
                       ((FRHICommandListBase *)param_1,(FRHIBuffer *)(local_2a0 + 8),
                        (FInitializer *)pTVar4->Reference);
    pTVar2 = &this->TransformUploadSRV;
    if ((FRHIShaderResourceView *)pTVar2 != TVar23.Reference) {
      pFVar11 = pTVar2->Reference;
                    /* WARNING: Load size is inaccurate */
      pTVar2->Reference = *TVar23.Reference;
      *(undefined8 *)TVar23.Reference = 0;
      if (pFVar11 != (FRHIShaderResourceView *)0x0) {
        FRHIResource::Release((FRHIResource *)pFVar11);
      }
    }
    if ((FRHIResource *)local_2a0._8_8_ != (FRHIResource *)0x0) {
      FRHIResource::Release((FRHIResource *)local_2a0._8_8_);
    }
  }
  uVar26 = (this->Data).NumNativeCPUInstances;
  local_288 = FRHICommandListBase::LockBuffer
                        ((FRHICommandListBase *)param_1,pTVar1->Reference,0,uVar27 * 4,RLM_WriteOnly
                        );
  local_280 = FRHICommandListBase::LockBuffer
                        ((FRHICommandListBase *)param_1,pTVar3->Reference,0,uVar20 * 0x1c,
                         RLM_WriteOnly);
  if ((this->Data).NumNativeCPUInstances == 0) {
    local_368 = (void *)0x0;
  }
  else {
    local_368 = FRHICommandListBase::LockBuffer
                          ((FRHICommandListBase *)param_1,pTVar4->Reference,0,uVar26 * 0x30,
                           RLM_WriteOnly);
  }
  iVar13 = (this->Data).NumNativeCPUInstances * 3;
  if ((iVar13 < 0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar17)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  if (((int)uVar20 < 0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar17)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  if (((int)uVar27 < 0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar17)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  uVar26 = (this->Data).NumCPUInstanceDescriptors;
  iVar8 = (this->Data).InstanceGroupEntryRefs.ArrayNum;
  uVar28 = (this->Data).NumGPUInstanceDescriptors;
  uVar25 = (this->Data).NumCPUInstanceGroups;
  uVar7 = (this->Data).NumGPUInstanceGroups;
  local_1f8 = (this->Data).InstanceGroupEntryRefs.AllocatorInstance.Data;
  if ((iVar8 < 0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar17)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  local_208 = (this->Data).BaseInstancePrefixSum.AllocatorInstance.Data;
  iVar9 = (this->Data).BaseInstancePrefixSum.ArrayNum;
  iStack_1f0 = iVar8;
  if ((iVar9 < 0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar17)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  local_218 = (this->Data).BaseUploadBufferOffsets.AllocatorInstance.Data;
  iVar8 = (this->Data).BaseUploadBufferOffsets.ArrayNum;
  iStack_200 = iVar9;
  if ((iVar8 < 0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar17)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  local_228 = (FName)(this->Data).InstanceGeometryIndices.AllocatorInstance.Data;
  iVar9 = (this->Data).InstanceGeometryIndices.ArrayNum;
  iStack_210 = iVar8;
  if ((iVar9 < 0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar17)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  bVar17 = this->bDisableTriangleCull;
  local_f8 = (this->Instances).DataPtr;
  uStack_f0 = *(undefined8 *)&(this->Instances).ArrayNum;
  bVar5 = this->bForceOpaque;
  <Var6 = (<lambda_1>)this->bUseLightingChannels;
  dVar14 = (this->PreViewTranslation).field0_0x0._s_0.X;
  uVar15 = *(undefined8 *)((longlong)&(this->PreViewTranslation).field0_0x0 + 8);
  local_278 = (FName)(this->PreViewTranslation).field0_0x0._s_0.Z;
  bVar29 = -1 < CpuChannel->Enabled;
  iStack_220 = iVar9;
  if (bVar29) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId345,"FillRayTracingInstanceUploadBuffer",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RayTracing\\RayTracingInstanceBufferUtil.cpp"
               ,0x159);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId345);
  }
  pTVar16 = CVarRayTracingInstanceBufferRLE.Ref;
  bVar18 = IsInParallelRenderingThread();
  if ((!bVar18) &&
     (bVar18 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar18)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  iVar8 = (this->VisibleInstances).NumBits;
  bVar18 = pTVar16->ShadowedValue[1];
  local_290 = CVarRayTracingInstanceBufferParallelFill.Ref;
  bVar19 = IsInParallelRenderingThread();
  if ((!bVar19) &&
     (bVar19 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar19)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  uStack_170 = CONCAT44(uStack_20c,iStack_210);
  local_248.DataPtr = (void **)0x0;
  local_1e8 = local_288;
  uStack_34c = (undefined4)((ulonglong)uVar15 >> 0x20);
  local_1dc = uStack_34c;
  local_1d8 = local_280;
  local_1cc = uStack_34c;
  local_1c8 = local_368;
  local_1bc = uStack_34c;
  local_1a8 = local_f8;
  uStack_1a0 = uStack_f0;
  local_238 = UE::Core::Private::Function::
              TFunctionRefCaller<`FillRayTracingInstanceUploadBuffer'::__l2::<lambda_1>,void,int>::
              Call;
  local_230 = (FName)&local_1e8;
  uStack_180 = CONCAT44(uStack_21c,iStack_220);
  local_188 = local_228;
  uStack_160 = CONCAT44(uStack_1fc,iStack_200);
  local_248.ArrayNum = 0;
  local_178 = local_218;
  uStack_150 = CONCAT44(uStack_1ec,iStack_1f0);
  local_168 = local_208;
  local_158 = local_1f8;
  local_138 = local_278;
  local_1e0 = uVar27;
  local_1d0 = uVar20;
  local_1c0 = iVar13;
  local_1b8 = uVar7;
  local_1b4 = uVar25;
  local_1b0 = uVar28;
  local_1ac = uVar26;
  local_198 = &this->VisibleInstances;
  local_190 = <Var6;
  local_18f = bVar5;
  local_18e = bVar17;
  local_148 = dVar14;
  uStack_140 = uVar15;
  local_130 = bVar18;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"FillRayTracingInstanceUploadBuffer_Parallel",iVar8,0x80,
             (TFunctionRef<void___cdecl(int)> *)&local_238,<Var6,
             (uint)(local_290->ShadowedValue[1] == false),&local_248);
  if (bVar29) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FRHICommandListBase::UnlockBuffer
            ((FRHICommandListBase *)param_1,(this->InstanceGroupUploadBuffer).Reference);
  FRHICommandListBase::UnlockBuffer((FRHICommandListBase *)param_1,pTVar3->Reference);
  if ((this->Data).NumNativeCPUInstances != 0) {
    FRHICommandListBase::UnlockBuffer((FRHICommandListBase *)param_1,pTVar4->Reference);
  }
  return;
}

// Init @ 14532ea90

void __thiscall
FRayTracingInstanceBufferBuilder::Init
          (FRayTracingInstanceBufferBuilder *this,
          FRayTracingInstanceBufferBuilderInitializer *param_1)

{
  TBitArray<FDefaultBitArrayAllocator> *_Dst;
  ForElementType<unsigned_int> FVar1;
  double dVar2;
  int iVar3;
  undefined4 uVar4;
  FRayTracingSceneInitializationData *pFVar5;
  TArrayView<FRayTracingGeometryInstance_const_,int> local_88;
  FRayTracingSceneInitializationData local_78;
  
  iVar3 = (param_1->Instances).ArrayNum;
  uVar4 = *(undefined4 *)&(param_1->Instances).field_0xc;
  _Dst = &this->VisibleInstances;
  (this->Instances).DataPtr = (param_1->Instances).DataPtr;
  (this->Instances).ArrayNum = iVar3;
  *(undefined4 *)&(this->Instances).field_0xc = uVar4;
  if (_Dst != &param_1->VisibleInstances) {
    if ((param_1->VisibleInstances).AllocatorInstance.SecondaryData ==
        (ForElementType<unsigned_int>)0x0) {
      memmove(_Dst,&param_1->VisibleInstances,0x10);
    }
    FVar1 = (this->VisibleInstances).AllocatorInstance.SecondaryData;
    if (FVar1 != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)FVar1);
    }
    (this->VisibleInstances).AllocatorInstance.SecondaryData =
         (param_1->VisibleInstances).AllocatorInstance.SecondaryData;
    (param_1->VisibleInstances).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    (this->VisibleInstances).NumBits = (param_1->VisibleInstances).NumBits;
    (this->VisibleInstances).MaxBits = (param_1->VisibleInstances).MaxBits;
    (param_1->VisibleInstances).NumBits = 0;
    (param_1->VisibleInstances).MaxBits = 0;
  }
  dVar2 = (param_1->PreViewTranslation).field0_0x0._s_0.Y;
  (this->PreViewTranslation).field0_0x0._s_0.X = (param_1->PreViewTranslation).field0_0x0._s_0.X;
  (this->PreViewTranslation).field0_0x0._s_0.Y = dVar2;
  local_88.DataPtr = (this->Instances).DataPtr;
  local_88.ArrayNum = (this->Instances).ArrayNum;
  local_88._12_4_ = *(undefined4 *)&(this->Instances).field_0xc;
  (this->PreViewTranslation).field0_0x0._s_0.Z = (param_1->PreViewTranslation).field0_0x0._s_0.Z;
  this->bUseLightingChannels = param_1->bUseLightingChannels;
  this->bForceOpaque = param_1->bForceOpaque;
  this->bDisableTriangleCull = param_1->bDisableTriangleCull;
  pFVar5 = BuildRayTracingSceneInitializationData(&local_78,&local_88,_Dst);
  FRayTracingSceneInitializationData::operator=(&this->Data,pFVar5);
  if (local_78.ReferencedGeometries.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.ReferencedGeometries.AllocatorInstance.Data);
  }
  if (local_78.InstanceGroupEntryRefs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.InstanceGroupEntryRefs.AllocatorInstance.Data);
  }
  if (local_78.BaseInstancePrefixSum.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.BaseInstancePrefixSum.AllocatorInstance.Data);
  }
  if (local_78.BaseUploadBufferOffsets.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.BaseUploadBufferOffsets.AllocatorInstance.Data);
  }
  if (local_78.InstanceGeometryIndices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.InstanceGeometryIndices.AllocatorInstance.Data);
  }
  FVar1 = (param_1->VisibleInstances).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  return;
}

// Init @ 14532ebd0

void __thiscall
FRayTracingInstanceBufferBuilder::Init
          (FRayTracingInstanceBufferBuilder *this,
          TArrayView<FRayTracingGeometryInstance_const_,int> *param_1,TVector<double> *param_2)

{
  double dVar1;
  int iVar2;
  code *pcVar3;
  double dVar4;
  undefined4 uVar5;
  bool bVar6;
  FRayTracingSceneInitializationData *pFVar7;
  TArrayView<FRayTracingGeometryInstance_const_,int> local_88;
  FRayTracingSceneInitializationData local_78;
  
  if ((this->Instances).ArrayNum != 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Instances.IsEmpty()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RayTracing\\RayTracingInstanceBufferUtil.cpp"
                       ,0x365,L"RayTracingInstanceBufferBuilder was already initialized.");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar2 = param_1->ArrayNum;
  uVar5 = *(undefined4 *)&param_1->field_0xc;
  dVar1 = (param_2->field0_0x0)._s_0.Z;
  (this->Instances).DataPtr = param_1->DataPtr;
  (this->Instances).ArrayNum = iVar2;
  *(undefined4 *)&(this->Instances).field_0xc = uVar5;
  iVar2 = (this->Instances).ArrayNum;
  dVar4 = (param_2->field0_0x0)._s_0.Y;
  (this->PreViewTranslation).field0_0x0._s_0.X = (param_2->field0_0x0)._s_0.X;
  (this->PreViewTranslation).field0_0x0._s_0.Y = dVar4;
  (this->PreViewTranslation).field0_0x0._s_0.Z = dVar1;
  TBitArray<FDefaultBitArrayAllocator>::SetNum<bool>(&this->VisibleInstances,iVar2,true);
  local_88.DataPtr = (this->Instances).DataPtr;
  local_88.ArrayNum = (this->Instances).ArrayNum;
  local_88._12_4_ = *(undefined4 *)&(this->Instances).field_0xc;
  pFVar7 = BuildRayTracingSceneInitializationData(&local_78,&local_88,&this->VisibleInstances);
  FRayTracingSceneInitializationData::operator=(&this->Data,pFVar7);
  if (local_78.ReferencedGeometries.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.ReferencedGeometries.AllocatorInstance.Data);
  }
  if (local_78.InstanceGroupEntryRefs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.InstanceGroupEntryRefs.AllocatorInstance.Data);
  }
  if (local_78.BaseInstancePrefixSum.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.BaseInstancePrefixSum.AllocatorInstance.Data);
  }
  if (local_78.BaseUploadBufferOffsets.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.BaseUploadBufferOffsets.AllocatorInstance.Data);
  }
  if (local_78.InstanceGeometryIndices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.InstanceGeometryIndices.AllocatorInstance.Data);
  }
  return;
}

// ~FRayTracingInstanceBufferBuilder @ 145363a30

void __thiscall
FRayTracingInstanceBufferBuilder::~FRayTracingInstanceBufferBuilder
          (FRayTracingInstanceBufferBuilder *this)

{
  FRHIShaderResourceView *pFVar1;
  FRHIBuffer *pFVar2;
  FScriptContainerElement *pFVar3;
  ForElementType<unsigned_int> FVar4;
  
  pFVar1 = (this->AccelerationStructureAddressesBuffer).SRV.Reference;
  if (pFVar1 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar2 = (this->AccelerationStructureAddressesBuffer).Buffer.Reference;
  if (pFVar2 != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  pFVar1 = (this->TransformUploadSRV).Reference;
  if (pFVar1 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar2 = (this->TransformUploadBuffer).Reference;
  if (pFVar2 != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  pFVar1 = (this->InstanceUploadSRV).Reference;
  if (pFVar1 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar2 = (this->InstanceUploadBuffer).Reference;
  if (pFVar2 != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  pFVar1 = (this->InstanceGroupUploadSRV).Reference;
  if (pFVar1 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar2 = (this->InstanceGroupUploadBuffer).Reference;
  if (pFVar2 != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  pFVar3 = (this->Data).ReferencedGeometries.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->Data).InstanceGroupEntryRefs.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->Data).BaseInstancePrefixSum.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->Data).BaseUploadBufferOffsets.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->Data).InstanceGeometryIndices.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  FVar4 = (this->VisibleInstances).AllocatorInstance.SecondaryData;
  if (FVar4 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar4);
    return;
  }
  return;
}

// operator= @ 1453641e0

FRayTracingInstanceBufferBuilder * __thiscall
FRayTracingInstanceBufferBuilder::operator=
          (FRayTracingInstanceBufferBuilder *this,FRayTracingInstanceBufferBuilder *param_1)

{
  TRefCountPtr<FRHIBuffer> *pTVar1;
  TRefCountPtr<FRHIBuffer> *pTVar2;
  TRefCountPtr<FRHIShaderResourceView> *pTVar3;
  TRefCountPtr<FRHIShaderResourceView> *pTVar4;
  FByteAddressBuffer *pFVar5;
  ForElementType<unsigned_int> FVar6;
  FRHIBuffer *pFVar7;
  FRHIShaderResourceView *pFVar8;
  double dVar9;
  int iVar10;
  undefined4 uVar11;
  FByteAddressBuffer *pFVar12;
  
  iVar10 = (param_1->Instances).ArrayNum;
  uVar11 = *(undefined4 *)&(param_1->Instances).field_0xc;
  (this->Instances).DataPtr = (param_1->Instances).DataPtr;
  (this->Instances).ArrayNum = iVar10;
  *(undefined4 *)&(this->Instances).field_0xc = uVar11;
  if (&this->VisibleInstances != &param_1->VisibleInstances) {
    if ((param_1->VisibleInstances).AllocatorInstance.SecondaryData ==
        (ForElementType<unsigned_int>)0x0) {
      memmove(&this->VisibleInstances,&param_1->VisibleInstances,0x10);
    }
    FVar6 = (this->VisibleInstances).AllocatorInstance.SecondaryData;
    if (FVar6 != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)FVar6);
    }
    (this->VisibleInstances).AllocatorInstance.SecondaryData =
         (param_1->VisibleInstances).AllocatorInstance.SecondaryData;
    (param_1->VisibleInstances).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    (this->VisibleInstances).NumBits = (param_1->VisibleInstances).NumBits;
    (this->VisibleInstances).MaxBits = (param_1->VisibleInstances).MaxBits;
    (param_1->VisibleInstances).NumBits = 0;
    (param_1->VisibleInstances).MaxBits = 0;
  }
  dVar9 = (param_1->PreViewTranslation).field0_0x0._s_0.Y;
  (this->PreViewTranslation).field0_0x0._s_0.X = (param_1->PreViewTranslation).field0_0x0._s_0.X;
  (this->PreViewTranslation).field0_0x0._s_0.Y = dVar9;
  (this->PreViewTranslation).field0_0x0._s_0.Z = (param_1->PreViewTranslation).field0_0x0._s_0.Z;
  this->bUseLightingChannels = param_1->bUseLightingChannels;
  this->bForceOpaque = param_1->bForceOpaque;
  this->bDisableTriangleCull = param_1->bDisableTriangleCull;
  FRayTracingSceneInitializationData::operator=(&this->Data,&param_1->Data);
  pTVar1 = &param_1->InstanceGroupUploadBuffer;
  pTVar2 = &this->InstanceGroupUploadBuffer;
  if (pTVar2 != pTVar1) {
    pFVar7 = pTVar2->Reference;
    pTVar2->Reference = pTVar1->Reference;
    pTVar1->Reference = (FRHIBuffer *)0x0;
    if (pFVar7 != (FRHIBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar7);
    }
  }
  pTVar3 = &param_1->InstanceGroupUploadSRV;
  pTVar4 = &this->InstanceGroupUploadSRV;
  if (pTVar4 != pTVar3) {
    pFVar8 = pTVar4->Reference;
    pTVar4->Reference = pTVar3->Reference;
    pTVar3->Reference = (FRHIShaderResourceView *)0x0;
    if (pFVar8 != (FRHIShaderResourceView *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar8);
    }
  }
  pTVar1 = &param_1->InstanceUploadBuffer;
  pTVar2 = &this->InstanceUploadBuffer;
  if (pTVar2 != pTVar1) {
    pFVar7 = pTVar2->Reference;
    pTVar2->Reference = pTVar1->Reference;
    pTVar1->Reference = (FRHIBuffer *)0x0;
    if (pFVar7 != (FRHIBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar7);
    }
  }
  pTVar3 = &param_1->InstanceUploadSRV;
  pTVar4 = &this->InstanceUploadSRV;
  if (pTVar4 != pTVar3) {
    pFVar8 = pTVar4->Reference;
    pTVar4->Reference = pTVar3->Reference;
    pTVar3->Reference = (FRHIShaderResourceView *)0x0;
    if (pFVar8 != (FRHIShaderResourceView *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar8);
    }
  }
  pTVar1 = &param_1->TransformUploadBuffer;
  pTVar2 = &this->TransformUploadBuffer;
  if (pTVar2 != pTVar1) {
    pFVar7 = pTVar2->Reference;
    pTVar2->Reference = pTVar1->Reference;
    pTVar1->Reference = (FRHIBuffer *)0x0;
    if (pFVar7 != (FRHIBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar7);
    }
  }
  pTVar3 = &param_1->TransformUploadSRV;
  pTVar4 = &this->TransformUploadSRV;
  if (pTVar4 != pTVar3) {
    pFVar8 = pTVar4->Reference;
    pTVar4->Reference = pTVar3->Reference;
    pTVar3->Reference = (FRHIShaderResourceView *)0x0;
    if (pFVar8 != (FRHIShaderResourceView *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar8);
    }
  }
  pFVar12 = &param_1->AccelerationStructureAddressesBuffer;
  pFVar5 = &this->AccelerationStructureAddressesBuffer;
  if (pFVar5 != pFVar12) {
    pFVar7 = (pFVar5->Buffer).Reference;
    (pFVar5->Buffer).Reference = (pFVar12->Buffer).Reference;
    (pFVar12->Buffer).Reference = (FRHIBuffer *)0x0;
    if (pFVar7 != (FRHIBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar7);
    }
  }
  pTVar3 = &(param_1->AccelerationStructureAddressesBuffer).SRV;
  pTVar4 = &(this->AccelerationStructureAddressesBuffer).SRV;
  if (pTVar4 != pTVar3) {
    pFVar8 = pTVar4->Reference;
    pTVar4->Reference = pTVar3->Reference;
    pTVar3->Reference = (FRHIShaderResourceView *)0x0;
    if (pFVar8 != (FRHIShaderResourceView *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar8);
    }
  }
  (this->AccelerationStructureAddressesBuffer).NumBytes =
       (param_1->AccelerationStructureAddressesBuffer).NumBytes;
  return this;
}

