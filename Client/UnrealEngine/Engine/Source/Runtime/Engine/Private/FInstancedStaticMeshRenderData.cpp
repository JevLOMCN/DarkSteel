// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 5

// FInstancedStaticMeshRenderData @ 147cc5220

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FInstancedStaticMeshRenderData * __thiscall
FInstancedStaticMeshRenderData::FInstancedStaticMeshRenderData
          (FInstancedStaticMeshRenderData *this,FInstancedStaticMeshSceneProxyDesc *param_1,
          Type param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  UClass *pUVar7;
  FStaticMeshRenderData *pFVar8;
  FInstancedStaticMeshRenderData *pFVar9;
  uint uVar10;
  UInstancedStaticMeshComponent *pUVar11;
  UInstancedStaticMeshComponent *pUVar12;
  
  pUVar11 = (UInstancedStaticMeshComponent *)param_1->_padding_;
  pUVar12 = (UInstancedStaticMeshComponent *)0x0;
  if (pUVar11 != (UInstancedStaticMeshComponent *)0x0) {
    pUVar7 = Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister();
    iVar1 = (int)pUVar7->_padding_;
    if ((iVar1 <= *(int *)(pUVar11->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar11->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar7->_padding_)) goto LAB_147cc5266;
  }
  pUVar11 = pUVar12;
LAB_147cc5266:
  this->Component = pUVar11;
  this->LightMapCoordinateIndex = *(int *)(param_1->_padding_ + 0x1c0);
  (this->VertexFactories).Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VertexFactories).Array.ArrayNum = 0;
  (this->VertexFactories).Array.ArrayMax = 0;
  pFVar8 = UStaticMesh::GetRenderData((UStaticMesh *)param_1->_padding_);
  this->LODModels = &pFVar8->LODResources;
  (this->RayTracingProxyVertexFactories).Array.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->RayTracingProxyVertexFactories).Array.ArrayNum = 0;
  (this->RayTracingProxyVertexFactories).Array.ArrayMax = 0;
  this->RayTracingProxyLODs =
       (TIndirectArray<FStaticMeshRayTracingProxyLOD,TSizedDefaultAllocator<32>_> *)0x0;
  this->FeatureLevel = param_2;
  bVar5 = IsRayTracingAllowed();
  if (((bVar5) && (((UStaticMesh *)param_1->_padding_)->bSupportRayTracing != '\0')) &&
     (pFVar8 = UStaticMesh::GetRenderData((UStaticMesh *)param_1->_padding_),
     pFVar8->RayTracingProxy != (FStaticMeshRayTracingProxy *)0x0)) {
    pFVar8 = UStaticMesh::GetRenderData((UStaticMesh *)param_1->_padding_);
    this->RayTracingProxyLODs = &pFVar8->RayTracingProxy->LODs;
  }
  InitVertexFactories(this);
  if ((*(longlong *)(param_1->_padding_ + 0x210) != 0) &&
     (pUVar11 = pUVar12, 0 < (this->LODModels->Array).ArrayNum)) {
    do {
      plVar2 = (longlong *)param_1->_padding_;
      uVar10 = (uint)pUVar12;
      if (plVar2 != (longlong *)0x0) {
        lVar3 = param_1->_padding_;
        pcVar4 = *(code **)(*plVar2 + 0x3b0);
        uVar6 = 0;
        if ((int)uVar10 < (this->VertexFactories).Array.ArrayNum) {
          uVar6 = ~uVar10 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          pFVar9 = (FInstancedStaticMeshRenderData *)(*pcVar4)();
          return pFVar9;
        }
        (*pcVar4)(plVar2,*(undefined8 *)
                          ((longlong)&pUVar11->_padding_ +
                          (longlong)(this->VertexFactories).Array.AllocatorInstance.Data),lVar3);
      }
      pUVar12 = (UInstancedStaticMeshComponent *)(ulonglong)(uVar10 + 1);
      pUVar11 = (UInstancedStaticMeshComponent *)&pUVar11->_padding_;
    } while ((int)(uVar10 + 1) < (this->LODModels->Array).ArrayNum);
  }
  return this;
}

// BindBuffersToVertexFactories @ 147cd80c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall
FInstancedStaticMeshRenderData::BindBuffersToVertexFactories
          (FInstancedStaticMeshRenderData *this,FRHICommandListBase *param_1,
          FStaticMeshInstanceBuffer *param_2)

{
  EShaderPlatform EVar1;
  int iVar2;
  TIndirectArray<FStaticMeshLODResources,TSizedDefaultAllocator<32>_> *pTVar3;
  longlong lVar4;
  UInstancedStaticMeshComponent *pUVar5;
  FVertexFactory *pFVar6;
  TIndirectArray<FStaticMeshRayTracingProxyLOD,TSizedDefaultAllocator<32>_> *pTVar7;
  longlong lVar8;
  code *pcVar9;
  undefined8 uVar10;
  FRHIVertexDeclaration *pFVar11;
  undefined8 uVar12;
  FRHIShaderResourceView *pFVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  FInstancedStaticMeshRenderData *pFVar16;
  bool bVar17;
  uint uVar18;
  FInstancedStaticMeshDataType *pFVar19;
  char cVar20;
  FColorVertexBuffer *this_00;
  FStaticMeshVertexBuffer *pFVar21;
  uint uVar22;
  FInstancedStaticMeshDataType *pFVar23;
  uint uVar24;
  FInstancedStaticMeshDataType *pFVar25;
  bool bVar26;
  undefined1 auStack_368 [32];
  longlong local_348;
  longlong local_340;
  char local_338;
  NullBindStride local_334;
  longlong local_330;
  FInstancedStaticMeshRenderData *local_328;
  longlong local_320;
  FStaticMeshInstanceBuffer *local_318;
  FRHICommandListBase *local_310;
  longlong local_308;
  FInstancedStaticMeshDataType *local_300;
  FInstancedStaticMeshDataType local_2f8;
  FInstancedStaticMeshDataType local_278;
  FStaticMeshDataType local_1f8;
  undefined8 local_138;
  undefined8 uStack_130;
  ForElementType<FVertexFactory::FVertexStream> local_128;
  FStaticMeshDataType local_120;
  undefined8 local_60;
  undefined8 uStack_58;
  ForElementType<FVertexFactory::FVertexStream> local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_368;
  bVar26 = CpuChannel->Enabled < 0;
  local_328 = this;
  local_318 = param_2;
  local_310 = param_1;
  if (bVar26) {
    local_338 = '\0';
  }
  else {
    local_338 = '\x01';
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1020,
               "FInstancedStaticMeshRenderData::BindBuffersToVertexFactories",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstancedStaticMesh.cpp"
               ,0x3fc);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1020);
  }
  if ((param_2 != (FStaticMeshInstanceBuffer *)0x0) && (param_2->bFlushToGPUPending != false)) {
    if ((int)param_2->_padding_ == -1) {
      (**(code **)(param_2->_padding_ + 0x18))();
    }
    else {
      FRenderResource::UpdateRHI((FRenderResource *)param_2,param_1);
    }
    param_2->bFlushToGPUPending = false;
  }
  EVar1 = GRHIGlobals.ShaderPlatformForFeatureLevel[(int)this->FeatureLevel];
  if ((FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].bContainsValidPlatformInfo == 0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid(Platform)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                          ,0x2ce,L""), bVar17)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pFVar16 = local_328;
  pFVar19 = (FInstancedStaticMeshDataType *)0x0;
  local_334 = *(uint *)&FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].field_0x34 >> 0x15;
  cVar20 = !bVar26;
  if (0 < (this->VertexFactories).Array.ArrayNum) {
    local_330 = 0;
    local_320 = 0;
    local_300 = &local_2f8;
    if (param_2 == (FStaticMeshInstanceBuffer *)0x0) {
      local_300 = pFVar19;
    }
    do {
      lVar8 = local_320;
      pTVar3 = pFVar16->LODModels;
      uVar22 = (uint)pFVar19;
      uVar24 = ~uVar22 >> 0x1f;
      iVar2 = (pTVar3->Array).ArrayNum;
      uVar18 = 0;
      if ((int)uVar22 < iVar2) {
        uVar18 = uVar24;
      }
      if (uVar18 == 0) {
        local_348 = (longlong)(int)uVar22;
        local_340 = (longlong)iVar2;
        bVar26 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar26) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
      iVar2 = (pFVar16->VertexFactories).Array.ArrayNum;
      lVar4 = *(longlong *)((pTVar3->Array).AllocatorInstance.Data + lVar8);
      uVar18 = 0;
      if ((int)uVar22 < iVar2) {
        uVar18 = uVar24;
      }
      local_2f8.InstanceOriginComponent.VertexBuffer = (FVertexBuffer *)0x0;
      local_2f8.InstanceOriginComponent.StreamOffset = 0;
      local_2f8.InstanceOriginComponent.Offset = '\0';
      local_2f8.InstanceOriginComponent.Stride = '\0';
      local_2f8.InstanceOriginComponent.Type.Value = '\0';
      local_2f8.InstanceOriginComponent.VertexStreamUsage = Default;
      local_2f8.InstanceTransformComponent[0].VertexBuffer = (FVertexBuffer *)0x0;
      local_2f8.InstanceTransformComponent[0].StreamOffset = 0;
      local_2f8.InstanceTransformComponent[0].Offset = '\0';
      local_2f8.InstanceTransformComponent[0].Stride = '\0';
      local_2f8.InstanceTransformComponent[0].Type.Value = '\0';
      local_2f8.InstanceTransformComponent[0].VertexStreamUsage = Default;
      local_2f8.InstanceTransformComponent[1].VertexBuffer = (FVertexBuffer *)0x0;
      local_2f8.InstanceTransformComponent[1].StreamOffset = 0;
      local_2f8.InstanceTransformComponent[1].Offset = '\0';
      local_2f8.InstanceTransformComponent[1].Stride = '\0';
      local_2f8.InstanceTransformComponent[1].Type.Value = '\0';
      local_2f8.InstanceTransformComponent[1].VertexStreamUsage = Default;
      local_2f8.InstanceTransformComponent[2].VertexBuffer = (FVertexBuffer *)0x0;
      local_2f8.InstanceTransformComponent[2].StreamOffset = 0;
      local_2f8.InstanceTransformComponent[2].Offset = '\0';
      local_2f8.InstanceTransformComponent[2].Stride = '\0';
      local_2f8.InstanceTransformComponent[2].Type.Value = '\0';
      local_2f8.InstanceTransformComponent[2].VertexStreamUsage = Default;
      local_2f8.InstanceLightmapAndShadowMapUVBiasComponent.VertexBuffer = (FVertexBuffer *)0x0;
      local_2f8.InstanceLightmapAndShadowMapUVBiasComponent.StreamOffset = 0;
      local_2f8.InstanceLightmapAndShadowMapUVBiasComponent.Offset = '\0';
      local_2f8.InstanceLightmapAndShadowMapUVBiasComponent.Stride = '\0';
      local_2f8.InstanceLightmapAndShadowMapUVBiasComponent.Type.Value = '\0';
      local_2f8.InstanceLightmapAndShadowMapUVBiasComponent.VertexStreamUsage = Default;
      local_2f8.InstanceOriginSRV = (FRHIShaderResourceView *)0x0;
      local_2f8.InstanceTransformSRV = (FRHIShaderResourceView *)0x0;
      local_2f8.InstanceLightmapSRV = (FRHIShaderResourceView *)0x0;
      local_2f8.InstanceCustomDataSRV = (FRHIShaderResourceView *)0x0;
      local_2f8.NumCustomDataFloats = 0;
      local_1f8.PositionComponent.VertexBuffer = (FVertexBuffer *)0x0;
      local_1f8.PositionComponent.StreamOffset = 0;
      local_1f8.PositionComponent.Offset = '\0';
      local_1f8.PositionComponent.Stride = '\0';
      local_1f8.PositionComponent.Type.Value = '\0';
      local_1f8.PositionComponent.VertexStreamUsage = Default;
      local_1f8.TangentBasisComponents[0].VertexBuffer = (FVertexBuffer *)0x0;
      local_1f8.TangentBasisComponents[0].StreamOffset = 0;
      local_1f8.TangentBasisComponents[0].Offset = '\0';
      local_1f8.TangentBasisComponents[0].Stride = '\0';
      local_1f8.TangentBasisComponents[0].Type.Value = '\0';
      local_1f8.TangentBasisComponents[0].VertexStreamUsage = Default;
      local_1f8.TangentBasisComponents[1].VertexBuffer = (FVertexBuffer *)0x0;
      local_1f8.TangentBasisComponents[1].StreamOffset = 0;
      local_1f8.TangentBasisComponents[1].Offset = '\0';
      local_1f8.TangentBasisComponents[1].Stride = '\0';
      local_1f8.TangentBasisComponents[1].Type.Value = '\0';
      local_1f8.TangentBasisComponents[1].VertexStreamUsage = Default;
      local_1f8.TextureCoordinates.ArrayNum = 0;
      local_1f8.TextureCoordinates.ArrayMax = 4;
      local_1f8.LightMapCoordinateComponent.VertexBuffer = (FVertexBuffer *)0x0;
      local_1f8.LightMapCoordinateComponent.StreamOffset = 0;
      local_1f8.LightMapCoordinateComponent.Offset = '\0';
      local_1f8.LightMapCoordinateComponent.Stride = '\0';
      local_1f8.LightMapCoordinateComponent.Type.Value = '\0';
      local_1f8.LightMapCoordinateComponent.VertexStreamUsage = Default;
      local_1f8.ColorComponent.VertexBuffer = (FVertexBuffer *)0x0;
      local_1f8.ColorComponent.StreamOffset = 0;
      local_1f8.ColorComponent.Offset = '\0';
      local_1f8.ColorComponent.Stride = '\0';
      local_1f8.ColorComponent.Type.Value = '\0';
      local_1f8.ColorComponent.VertexStreamUsage = Default;
      local_1f8.ColorIndexMask = 0xffffffff;
      local_1f8.LightMapCoordinateIndex = -1;
      local_1f8.NumTexCoords = '\0';
      local_1f8.LODLightmapDataIndex = '\0';
      local_138 = 0;
      uStack_130 = 0;
      local_128 = (ForElementType<FVertexFactory::FVertexStream>)0x0;
      local_1f8.PositionComponentSRV = (FRHIShaderResourceView *)0x0;
      local_1f8.TangentsSRV = (FRHIShaderResourceView *)0x0;
      local_1f8.TextureCoordinatesSRV = (FRHIShaderResourceView *)0x0;
      local_1f8.ColorComponentsSRV = (FRHIShaderResourceView *)0x0;
      local_308 = lVar4;
      if (uVar18 == 0) {
        local_348 = (longlong)(int)uVar22;
        local_340 = (longlong)iVar2;
        bVar26 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar26) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
      pUVar5 = pFVar16->Component;
      this_00 = (FColorVertexBuffer *)(lVar4 + 0x1d8);
      if ((*(byte *)(lVar4 + 0x94) & 8) == 0) {
        this_00 = (FColorVertexBuffer *)0x0;
      }
      pFVar6 = *(FVertexFactory **)((pFVar16->VertexFactories).Array.AllocatorInstance.Data + lVar8)
      ;
      if (((pUVar5 != (UInstancedStaticMeshComponent *)0x0) && (-1 < (int)uVar22)) &&
         ((int)uVar22 < (int)pUVar5->_padding_)) {
        iVar2 = (int)pUVar5->_padding_;
        uVar18 = 0;
        if ((int)uVar22 < iVar2) {
          uVar18 = uVar24;
        }
        if (uVar18 == 0) {
          local_348 = (longlong)(int)uVar22;
          local_340 = (longlong)iVar2;
          bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar26) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
        }
        lVar8 = local_330;
        if (*(longlong *)(pUVar5->_padding_ + 0x40 + local_330) != 0) {
          pUVar5 = pFVar16->Component;
          iVar2 = (int)pUVar5->_padding_;
          uVar18 = 0;
          if ((int)uVar22 < iVar2) {
            uVar18 = uVar24;
          }
          if (uVar18 == 0) {
            local_348 = (longlong)(int)uVar22;
            local_340 = (longlong)iVar2;
            bVar26 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar26) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
          }
          this_00 = *(FColorVertexBuffer **)(pUVar5->_padding_ + 0x40 + lVar8);
        }
      }
      lVar8 = local_308;
      iVar2 = pFVar16->LightMapCoordinateIndex;
      pFVar21 = (FStaticMeshVertexBuffer *)(lVar4 + 0xd0);
      FPositionVertexBuffer::BindPositionVertexBuffer
                ((FPositionVertexBuffer *)(local_308 + 0x188),pFVar6,&local_1f8);
      FStaticMeshVertexBuffer::BindTangentVertexBuffer(pFVar21,pFVar6,&local_1f8);
      FStaticMeshVertexBuffer::BindPackedTexCoordVertexBuffer(pFVar21,pFVar6,&local_1f8,-1);
      if ((iVar2 < *(int *)(lVar8 + 0x178)) && (-1 < iVar2)) {
        FStaticMeshVertexBuffer::BindLightMapVertexBuffer(pFVar21,pFVar6,&local_1f8,iVar2);
      }
      if (this_00 == (FColorVertexBuffer *)0x0) {
        FColorVertexBuffer::BindDefaultColorVertexBuffer
                  (pFVar6,&local_1f8,~local_334 & ZeroForDefaultBufferBind);
      }
      else {
        FColorVertexBuffer::BindColorVertexBuffer(this_00,pFVar6,&local_1f8);
      }
      param_2 = local_318;
      if (local_318 != (FStaticMeshInstanceBuffer *)0x0) {
        FStaticMeshInstanceBuffer::BindInstanceVertexBuffer(local_318,pFVar6,&local_2f8);
      }
      FStaticMeshDataType::operator=((FStaticMeshDataType *)(pFVar6 + 1),&local_1f8);
      *(undefined8 *)(pFVar6[1].PositionStream.AllocatorInstance.InlineData + 0x10) = local_138;
      *(undefined8 *)(pFVar6[1].PositionStream.AllocatorInstance.InlineData + 0x18) = uStack_130;
      pFVar6[1].PositionStream.AllocatorInstance.SecondaryData = local_128;
      if (local_300 != (FInstancedStaticMeshDataType *)0x0) {
        uVar10 = *(undefined8 *)&(local_300->InstanceOriginComponent).StreamOffset;
        *(FVertexBuffer **)(pFVar6[1].PositionAndNormalStream.AllocatorInstance.InlineData + 0x10) =
             (local_300->InstanceOriginComponent).VertexBuffer;
        *(undefined8 *)(pFVar6[1].PositionAndNormalStream.AllocatorInstance.InlineData + 0x18) =
             uVar10;
        uVar10 = *(undefined8 *)&local_300->InstanceTransformComponent[0].StreamOffset;
        *(FVertexBuffer **)(pFVar6[1].PositionAndNormalStream.AllocatorInstance.InlineData + 0x20) =
             local_300->InstanceTransformComponent[0].VertexBuffer;
        *(undefined8 *)(pFVar6[1].PositionAndNormalStream.AllocatorInstance.InlineData + 0x28) =
             uVar10;
        uVar10._0_4_ = local_300->InstanceTransformComponent[1].StreamOffset;
        uVar10._4_1_ = local_300->InstanceTransformComponent[1].Offset;
        uVar10._5_1_ = local_300->InstanceTransformComponent[1].Stride;
        uVar10._6_1_ = local_300->InstanceTransformComponent[1].Type;
        uVar10._7_1_ = local_300->InstanceTransformComponent[1].VertexStreamUsage;
        pFVar6[1].PositionAndNormalStream.AllocatorInstance.SecondaryData =
             *(ForElementType<FVertexFactory::FVertexStream> *)
              (local_300->InstanceTransformComponent + 1);
        pFVar6[1].PositionAndNormalStream.ArrayNum = (undefined4)uVar10;
        pFVar6[1].PositionAndNormalStream.ArrayMax = (int)((ulonglong)uVar10 >> 0x20);
        pFVar11 = *(FRHIVertexDeclaration **)&local_300->InstanceTransformComponent[2].StreamOffset;
        pFVar6[1].Declaration.Reference =
             (FRHIVertexDeclaration *)local_300->InstanceTransformComponent[2].VertexBuffer;
        pFVar6[1].PositionDeclaration.Reference = pFVar11;
        uVar12._0_4_ = (local_300->InstanceLightmapAndShadowMapUVBiasComponent).StreamOffset;
        uVar12._4_1_ = (local_300->InstanceLightmapAndShadowMapUVBiasComponent).Offset;
        uVar12._5_1_ = (local_300->InstanceLightmapAndShadowMapUVBiasComponent).Stride;
        uVar12._6_1_ = (local_300->InstanceLightmapAndShadowMapUVBiasComponent).Type;
        uVar12._7_1_ = (local_300->InstanceLightmapAndShadowMapUVBiasComponent).VertexStreamUsage;
        pFVar6[1].PositionAndNormalDeclaration.Reference =
             (FRHIVertexDeclaration *)
             (local_300->InstanceLightmapAndShadowMapUVBiasComponent).VertexBuffer;
        pFVar6[1].PrimitiveIdStreamIndex[0] = (char)(undefined4)uVar12;
        pFVar6[1].PrimitiveIdStreamIndex[1] = (char)((ulonglong)uVar12 >> 8);
        pFVar6[1].PrimitiveIdStreamIndex[2] = (char)((ulonglong)uVar12 >> 0x10);
        pFVar6[1].bNeedsDeclaration = (bool)(char)((ulonglong)uVar12 >> 0x18);
        *(int *)&pFVar6[1].field_0x13c = (int)((ulonglong)uVar12 >> 0x20);
        pFVar13 = local_300->InstanceTransformSRV;
        pFVar6[2]._padding_ = (longlong)local_300->InstanceOriginSRV;
        pFVar6[2]._padding_ = (longlong)pFVar13;
        pFVar13 = local_300->InstanceCustomDataSRV;
        pFVar6[2]._padding_ = (longlong)local_300->InstanceLightmapSRV;
        pFVar6[2]._padding_ = (longlong)pFVar13;
        *(undefined8 *)pFVar6[2].Streams.AllocatorInstance.InlineData =
             *(undefined8 *)&local_300->NumCustomDataFloats;
      }
      FRenderResource::UpdateRHI((FRenderResource *)pFVar6,local_310);
      (**(code **)(pFVar6->_padding_ + 0x18))(pFVar6,local_310);
      pFVar19 = (FInstancedStaticMeshDataType *)(ulonglong)(uVar22 + 1);
      local_330 = local_330 + 0x50;
      local_320 = local_320 + 8;
      this = local_328;
      cVar20 = local_338;
    } while ((int)(uVar22 + 1) < (pFVar16->VertexFactories).Array.ArrayNum);
  }
  pFVar16 = local_328;
  pFVar19 = (FInstancedStaticMeshDataType *)0x0;
  if (0 < (this->RayTracingProxyVertexFactories).Array.ArrayNum) {
    local_334 = ~local_334 & ZeroForDefaultBufferBind;
    pFVar23 = pFVar19;
    pFVar25 = &local_278;
    if (param_2 == (FStaticMeshInstanceBuffer *)0x0) {
      pFVar23 = (FInstancedStaticMeshDataType *)0x0;
      pFVar25 = pFVar19;
    }
    do {
      pTVar7 = pFVar16->RayTracingProxyLODs;
      uVar22 = (uint)pFVar23;
      iVar2 = (pTVar7->Array).ArrayNum;
      uVar18 = 0;
      if ((int)uVar22 < iVar2) {
        uVar18 = ~uVar22 >> 0x1f;
      }
      if (uVar18 == 0) {
        local_348 = (longlong)(int)uVar22;
        local_340 = (longlong)iVar2;
        bVar26 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar26) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
      iVar2 = (pFVar16->RayTracingProxyVertexFactories).Array.ArrayNum;
      lVar8 = *(longlong *)
               ((pTVar7->Array).AllocatorInstance.Data + -0x10 +
               (longlong)&pFVar19->InstanceTransformComponent[0].VertexBuffer);
      uVar18 = 0;
      if ((int)uVar22 < iVar2) {
        uVar18 = ~uVar22 >> 0x1f;
      }
      local_278.InstanceOriginComponent.VertexBuffer = (FVertexBuffer *)0x0;
      local_278.InstanceOriginComponent.StreamOffset = 0;
      local_278.InstanceOriginComponent.Offset = '\0';
      local_278.InstanceOriginComponent.Stride = '\0';
      local_278.InstanceOriginComponent.Type.Value = '\0';
      local_278.InstanceOriginComponent.VertexStreamUsage = Default;
      local_278.InstanceTransformComponent[0].VertexBuffer = (FVertexBuffer *)0x0;
      local_278.InstanceTransformComponent[0].StreamOffset = 0;
      local_278.InstanceTransformComponent[0].Offset = '\0';
      local_278.InstanceTransformComponent[0].Stride = '\0';
      local_278.InstanceTransformComponent[0].Type.Value = '\0';
      local_278.InstanceTransformComponent[0].VertexStreamUsage = Default;
      local_278.InstanceTransformComponent[1].VertexBuffer = (FVertexBuffer *)0x0;
      local_278.InstanceTransformComponent[1].StreamOffset = 0;
      local_278.InstanceTransformComponent[1].Offset = '\0';
      local_278.InstanceTransformComponent[1].Stride = '\0';
      local_278.InstanceTransformComponent[1].Type.Value = '\0';
      local_278.InstanceTransformComponent[1].VertexStreamUsage = Default;
      local_278.InstanceTransformComponent[2].VertexBuffer = (FVertexBuffer *)0x0;
      local_278.InstanceTransformComponent[2].StreamOffset = 0;
      local_278.InstanceTransformComponent[2].Offset = '\0';
      local_278.InstanceTransformComponent[2].Stride = '\0';
      local_278.InstanceTransformComponent[2].Type.Value = '\0';
      local_278.InstanceTransformComponent[2].VertexStreamUsage = Default;
      local_278.InstanceLightmapAndShadowMapUVBiasComponent.VertexBuffer = (FVertexBuffer *)0x0;
      local_278.InstanceLightmapAndShadowMapUVBiasComponent.StreamOffset = 0;
      local_278.InstanceLightmapAndShadowMapUVBiasComponent.Offset = '\0';
      local_278.InstanceLightmapAndShadowMapUVBiasComponent.Stride = '\0';
      local_278.InstanceLightmapAndShadowMapUVBiasComponent.Type.Value = '\0';
      local_278.InstanceLightmapAndShadowMapUVBiasComponent.VertexStreamUsage = Default;
      local_278.InstanceOriginSRV = (FRHIShaderResourceView *)0x0;
      local_278.InstanceTransformSRV = (FRHIShaderResourceView *)0x0;
      local_278.InstanceLightmapSRV = (FRHIShaderResourceView *)0x0;
      local_278.InstanceCustomDataSRV = (FRHIShaderResourceView *)0x0;
      local_278.NumCustomDataFloats = 0;
      local_120.PositionComponent.VertexBuffer = (FVertexBuffer *)0x0;
      local_120.PositionComponent.StreamOffset = 0;
      local_120.PositionComponent.Offset = '\0';
      local_120.PositionComponent.Stride = '\0';
      local_120.PositionComponent.Type.Value = '\0';
      local_120.PositionComponent.VertexStreamUsage = Default;
      local_120.TangentBasisComponents[0].VertexBuffer = (FVertexBuffer *)0x0;
      local_120.TangentBasisComponents[0].StreamOffset = 0;
      local_120.TangentBasisComponents[0].Offset = '\0';
      local_120.TangentBasisComponents[0].Stride = '\0';
      local_120.TangentBasisComponents[0].Type.Value = '\0';
      local_120.TangentBasisComponents[0].VertexStreamUsage = Default;
      local_120.TangentBasisComponents[1].VertexBuffer = (FVertexBuffer *)0x0;
      local_120.TangentBasisComponents[1].StreamOffset = 0;
      local_120.TangentBasisComponents[1].Offset = '\0';
      local_120.TangentBasisComponents[1].Stride = '\0';
      local_120.TangentBasisComponents[1].Type.Value = '\0';
      local_120.TangentBasisComponents[1].VertexStreamUsage = Default;
      local_120.TextureCoordinates.ArrayNum = 0;
      local_120.TextureCoordinates.ArrayMax = 4;
      local_120.LightMapCoordinateComponent.VertexBuffer = (FVertexBuffer *)0x0;
      local_120.LightMapCoordinateComponent.StreamOffset = 0;
      local_120.LightMapCoordinateComponent.Offset = '\0';
      local_120.LightMapCoordinateComponent.Stride = '\0';
      local_120.LightMapCoordinateComponent.Type.Value = '\0';
      local_120.LightMapCoordinateComponent.VertexStreamUsage = Default;
      local_120.ColorComponent.VertexBuffer = (FVertexBuffer *)0x0;
      local_120.ColorComponent.StreamOffset = 0;
      local_120.ColorComponent.Offset = '\0';
      local_120.ColorComponent.Stride = '\0';
      local_120.ColorComponent.Type.Value = '\0';
      local_120.ColorComponent.VertexStreamUsage = Default;
      local_120.ColorIndexMask = 0xffffffff;
      local_120.LightMapCoordinateIndex = -1;
      local_120.NumTexCoords = '\0';
      local_120.LODLightmapDataIndex = '\0';
      local_60 = 0;
      uStack_58 = 0;
      local_50 = (ForElementType<FVertexFactory::FVertexStream>)0x0;
      local_120.PositionComponentSRV = (FRHIShaderResourceView *)0x0;
      local_120.TangentsSRV = (FRHIShaderResourceView *)0x0;
      local_120.TextureCoordinatesSRV = (FRHIShaderResourceView *)0x0;
      local_120.ColorComponentsSRV = (FRHIShaderResourceView *)0x0;
      if (uVar18 == 0) {
        local_348 = (longlong)(int)uVar22;
        local_340 = (longlong)iVar2;
        bVar26 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar26) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
      pFVar21 = *(FStaticMeshVertexBuffer **)(lVar8 + 0x18);
      iVar2 = pFVar16->LightMapCoordinateIndex;
      pFVar6 = *(FVertexFactory **)
                ((pFVar16->RayTracingProxyVertexFactories).Array.AllocatorInstance.Data + -0x10 +
                (longlong)&pFVar19->InstanceTransformComponent[0].VertexBuffer);
      FPositionVertexBuffer::BindPositionVertexBuffer
                ((FPositionVertexBuffer *)(pFVar21 + 1),pFVar6,&local_120);
      FStaticMeshVertexBuffer::BindTangentVertexBuffer(pFVar21,pFVar6,&local_120);
      FStaticMeshVertexBuffer::BindPackedTexCoordVertexBuffer(pFVar21,pFVar6,&local_120,-1);
      if ((iVar2 < (int)pFVar21->NumTexCoords) && (-1 < iVar2)) {
        FStaticMeshVertexBuffer::BindLightMapVertexBuffer(pFVar21,pFVar6,&local_120,iVar2);
      }
      FColorVertexBuffer::BindDefaultColorVertexBuffer(pFVar6,&local_120,local_334);
      if (local_318 != (FStaticMeshInstanceBuffer *)0x0) {
        FStaticMeshInstanceBuffer::BindInstanceVertexBuffer(local_318,pFVar6,&local_278);
      }
      FStaticMeshDataType::operator=((FStaticMeshDataType *)(pFVar6 + 1),&local_120);
      *(undefined8 *)(pFVar6[1].PositionStream.AllocatorInstance.InlineData + 0x10) = local_60;
      *(undefined8 *)(pFVar6[1].PositionStream.AllocatorInstance.InlineData + 0x18) = uStack_58;
      pFVar6[1].PositionStream.AllocatorInstance.SecondaryData = local_50;
      if (pFVar25 != (FInstancedStaticMeshDataType *)0x0) {
        uVar10 = *(undefined8 *)&(pFVar25->InstanceOriginComponent).StreamOffset;
        *(FVertexBuffer **)(pFVar6[1].PositionAndNormalStream.AllocatorInstance.InlineData + 0x10) =
             (pFVar25->InstanceOriginComponent).VertexBuffer;
        *(undefined8 *)(pFVar6[1].PositionAndNormalStream.AllocatorInstance.InlineData + 0x18) =
             uVar10;
        uVar10 = *(undefined8 *)&pFVar25->InstanceTransformComponent[0].StreamOffset;
        *(FVertexBuffer **)(pFVar6[1].PositionAndNormalStream.AllocatorInstance.InlineData + 0x20) =
             pFVar25->InstanceTransformComponent[0].VertexBuffer;
        *(undefined8 *)(pFVar6[1].PositionAndNormalStream.AllocatorInstance.InlineData + 0x28) =
             uVar10;
        uVar14._0_4_ = pFVar25->InstanceTransformComponent[1].StreamOffset;
        uVar14._4_1_ = pFVar25->InstanceTransformComponent[1].Offset;
        uVar14._5_1_ = pFVar25->InstanceTransformComponent[1].Stride;
        uVar14._6_1_ = pFVar25->InstanceTransformComponent[1].Type;
        uVar14._7_1_ = pFVar25->InstanceTransformComponent[1].VertexStreamUsage;
        pFVar6[1].PositionAndNormalStream.AllocatorInstance.SecondaryData =
             *(ForElementType<FVertexFactory::FVertexStream> *)
              (pFVar25->InstanceTransformComponent + 1);
        pFVar6[1].PositionAndNormalStream.ArrayNum = (undefined4)uVar14;
        pFVar6[1].PositionAndNormalStream.ArrayMax = (int)((ulonglong)uVar14 >> 0x20);
        pFVar11 = *(FRHIVertexDeclaration **)&pFVar25->InstanceTransformComponent[2].StreamOffset;
        pFVar6[1].Declaration.Reference =
             (FRHIVertexDeclaration *)pFVar25->InstanceTransformComponent[2].VertexBuffer;
        pFVar6[1].PositionDeclaration.Reference = pFVar11;
        uVar15._0_4_ = (pFVar25->InstanceLightmapAndShadowMapUVBiasComponent).StreamOffset;
        uVar15._4_1_ = (pFVar25->InstanceLightmapAndShadowMapUVBiasComponent).Offset;
        uVar15._5_1_ = (pFVar25->InstanceLightmapAndShadowMapUVBiasComponent).Stride;
        uVar15._6_1_ = (pFVar25->InstanceLightmapAndShadowMapUVBiasComponent).Type;
        uVar15._7_1_ = (pFVar25->InstanceLightmapAndShadowMapUVBiasComponent).VertexStreamUsage;
        pFVar6[1].PositionAndNormalDeclaration.Reference =
             (FRHIVertexDeclaration *)
             (pFVar25->InstanceLightmapAndShadowMapUVBiasComponent).VertexBuffer;
        pFVar6[1].PrimitiveIdStreamIndex[0] = (char)(undefined4)uVar15;
        pFVar6[1].PrimitiveIdStreamIndex[1] = (char)((ulonglong)uVar15 >> 8);
        pFVar6[1].PrimitiveIdStreamIndex[2] = (char)((ulonglong)uVar15 >> 0x10);
        pFVar6[1].bNeedsDeclaration = (bool)(char)((ulonglong)uVar15 >> 0x18);
        *(int *)&pFVar6[1].field_0x13c = (int)((ulonglong)uVar15 >> 0x20);
        pFVar13 = pFVar25->InstanceTransformSRV;
        pFVar6[2]._padding_ = (longlong)pFVar25->InstanceOriginSRV;
        pFVar6[2]._padding_ = (longlong)pFVar13;
        pFVar13 = pFVar25->InstanceCustomDataSRV;
        pFVar6[2]._padding_ = (longlong)pFVar25->InstanceLightmapSRV;
        pFVar6[2]._padding_ = (longlong)pFVar13;
        *(undefined8 *)pFVar6[2].Streams.AllocatorInstance.InlineData =
             *(undefined8 *)&pFVar25->NumCustomDataFloats;
      }
      FRenderResource::UpdateRHI((FRenderResource *)pFVar6,local_310);
      (**(code **)(pFVar6->_padding_ + 0x18))(pFVar6,local_310);
      pFVar23 = (FInstancedStaticMeshDataType *)(ulonglong)(uVar22 + 1);
      pFVar19 = (FInstancedStaticMeshDataType *)&(pFVar19->InstanceOriginComponent).StreamOffset;
      cVar20 = local_338;
    } while ((int)(uVar22 + 1) < (pFVar16->RayTracingProxyVertexFactories).Array.ArrayNum);
  }
  if (cVar20 != '\0') {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// InitVertexFactories @ 147d18170

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FInstancedStaticMeshRenderData::InitVertexFactories(FInstancedStaticMeshRenderData *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FLocalVertexFactory *pFVar5;
  FLocalVertexFactory *pFVar6;
  uint uVar7;
  FLocalVertexFactory *pFVar9;
  FLocalVertexFactory *local_28;
  FLocalVertexFactory *local_20;
  FLocalVertexFactory *pFVar8;
  
  pFVar9 = (FLocalVertexFactory *)0x0;
  pFVar8 = pFVar9;
  if (0 < (this->LODModels->Array).ArrayNum) {
    do {
      pFVar5 = ::operator_new(0x2b0);
      pFVar6 = pFVar9;
      if (pFVar5 != (FLocalVertexFactory *)0x0) {
        FLocalVertexFactory::FLocalVertexFactory
                  (pFVar5,this->FeatureLevel,"FInstancedStaticMeshVertexFactory");
        pFVar5->_padding_ = (longlong)&___7FInstancedStaticMeshVertexFactory__6B_;
        pFVar5[1]._padding_ = 0;
        pFVar5[1]._padding_ = 0;
        pFVar5[1]._padding_ = 0;
        pFVar5[1]._padding_ = 0;
        pFVar5[1]._padding_ = 0;
        pFVar5[1]._padding_ = 0;
        pFVar5[1]._padding_ = 0;
        pFVar5[1]._padding_ = 0;
        pFVar5[1]._padding_ = 0;
        pFVar5[1]._padding_ = 0;
        pFVar5[1]._padding_ = 0;
        pFVar5[1]._padding_ = 0;
        pFVar5[1]._padding_ = 0;
        pFVar5[1]._padding_ = 0;
        *(undefined4 *)&pFVar5[1]._padding_ = 0;
        pFVar5[1]._padding_ = 0;
        pFVar6 = pFVar5;
      }
      pFVar1 = (this->VertexFactories).Array.AllocatorInstance.Data;
      local_28 = pFVar6;
      if (((pFVar1 <= (FScriptContainerElement *)&local_28) &&
          ((FScriptContainerElement *)&local_28 <
           pFVar1 + (longlong)(this->VertexFactories).Array.ArrayMax * 8)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar4 = (this->VertexFactories).Array.ArrayNum;
      if (iVar4 == (this->VertexFactories).Array.ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,(ForAnyElementType *)&this->VertexFactories,
                           &(this->VertexFactories).Array.ArrayMax);
      }
      uVar7 = (int)pFVar8 + 1;
      pFVar8 = (FLocalVertexFactory *)(ulonglong)uVar7;
      (this->VertexFactories).Array.ArrayNum = iVar4 + 1;
      *(FLocalVertexFactory **)
       ((this->VertexFactories).Array.AllocatorInstance.Data + (longlong)iVar4 * 8) = local_28;
    } while ((int)uVar7 < (this->LODModels->Array).ArrayNum);
  }
  if ((this->RayTracingProxyLODs !=
       (TIndirectArray<FStaticMeshRayTracingProxyLOD,TSizedDefaultAllocator<32>_> *)0x0) &&
     (pFVar8 = pFVar9, 0 < (this->RayTracingProxyLODs->Array).ArrayNum)) {
    do {
      pFVar5 = ::operator_new(0x2b0);
      pFVar6 = pFVar9;
      if (pFVar5 != (FLocalVertexFactory *)0x0) {
        FLocalVertexFactory::FLocalVertexFactory
                  (pFVar5,this->FeatureLevel,"FInstancedStaticMeshVertexFactory");
        pFVar5->_padding_ = (longlong)&___7FInstancedStaticMeshVertexFactory__6B_;
        pFVar5[1]._padding_ = 0;
        pFVar5[1]._padding_ = 0;
        pFVar5[1]._padding_ = 0;
        pFVar5[1]._padding_ = 0;
        pFVar5[1]._padding_ = 0;
        pFVar5[1]._padding_ = 0;
        pFVar5[1]._padding_ = 0;
        pFVar5[1]._padding_ = 0;
        pFVar5[1]._padding_ = 0;
        pFVar5[1]._padding_ = 0;
        pFVar5[1]._padding_ = 0;
        pFVar5[1]._padding_ = 0;
        pFVar5[1]._padding_ = 0;
        pFVar5[1]._padding_ = 0;
        *(undefined4 *)&pFVar5[1]._padding_ = 0;
        pFVar5[1]._padding_ = 0;
        pFVar6 = pFVar5;
      }
      pFVar1 = (this->RayTracingProxyVertexFactories).Array.AllocatorInstance.Data;
      local_20 = pFVar6;
      if (((pFVar1 <= (FScriptContainerElement *)&local_20) &&
          ((FScriptContainerElement *)&local_20 <
           pFVar1 + (longlong)(this->RayTracingProxyVertexFactories).Array.ArrayMax * 8)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar4 = (this->RayTracingProxyVertexFactories).Array.ArrayNum;
      if (iVar4 == (this->RayTracingProxyVertexFactories).Array.ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,(ForAnyElementType *)&this->RayTracingProxyVertexFactories,
                           &(this->RayTracingProxyVertexFactories).Array.ArrayMax);
      }
      uVar7 = (int)pFVar8 + 1;
      pFVar8 = (FLocalVertexFactory *)(ulonglong)uVar7;
      (this->RayTracingProxyVertexFactories).Array.ArrayNum = iVar4 + 1;
      *(FLocalVertexFactory **)
       ((this->RayTracingProxyVertexFactories).Array.AllocatorInstance.Data + (longlong)iVar4 * 8) =
           local_20;
    } while ((int)uVar7 < (this->RayTracingProxyLODs->Array).ArrayNum);
  }
  return;
}

// RegisterSpeedTreeWind @ 147d202a0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FInstancedStaticMeshRenderData::RegisterSpeedTreeWind
          (FInstancedStaticMeshRenderData *this,FInstancedStaticMeshSceneProxyDesc *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  
  if ((*(longlong *)(param_1->_padding_ + 0x210) != 0) &&
     (uVar6 = 0, 0 < (this->LODModels->Array).ArrayNum)) {
    lVar7 = 0;
    do {
      plVar1 = (longlong *)param_1->_padding_;
      if (plVar1 != (longlong *)0x0) {
        lVar2 = param_1->_padding_;
        pcVar3 = *(code **)(*plVar1 + 0x3b0);
        uVar5 = 0;
        if ((int)uVar6 < (this->VertexFactories).Array.ArrayNum) {
          uVar5 = ~uVar6 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        (*pcVar3)(plVar1,*(undefined8 *)
                          ((this->VertexFactories).Array.AllocatorInstance.Data + lVar7),lVar2);
      }
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 8;
    } while ((int)uVar6 < (this->LODModels->Array).ArrayNum);
  }
  return;
}

// ReleaseResources @ 147d21660

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FInstancedStaticMeshRenderData::ReleaseResources
          (FInstancedStaticMeshRenderData *this,FSceneInterface *param_1,UStaticMesh *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  
  if ((((param_1 != (FSceneInterface *)0x0) && (param_2 != (UStaticMesh *)0x0)) &&
      ((param_2->SpeedTreeWind).Object != (FSpeedTreeWind *)0x0)) &&
     (uVar5 = 0, 0 < (this->VertexFactories).Array.ArrayNum)) {
    lVar4 = 0;
    do {
      pcVar1 = *(code **)(param_1->_padding_ + 0x3b8);
      uVar3 = 0;
      if ((int)uVar5 < (this->VertexFactories).Array.ArrayNum) {
        uVar3 = ~uVar5 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      (*pcVar1)(param_1,*(undefined8 *)
                         ((this->VertexFactories).Array.AllocatorInstance.Data + lVar4),param_2);
      uVar5 = uVar5 + 1;
      lVar4 = lVar4 + 8;
    } while ((int)uVar5 < (this->VertexFactories).Array.ArrayNum);
  }
  uVar5 = 0;
  if (0 < (this->VertexFactories).Array.ArrayNum) {
    lVar4 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar5 < (this->VertexFactories).Array.ArrayNum) {
        uVar3 = ~uVar5 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      (**(code **)(**(longlong **)((this->VertexFactories).Array.AllocatorInstance.Data + lVar4) +
                  0x20))();
      uVar5 = uVar5 + 1;
      lVar4 = lVar4 + 8;
    } while ((int)uVar5 < (this->VertexFactories).Array.ArrayNum);
  }
  uVar5 = 0;
  if (0 < (this->RayTracingProxyVertexFactories).Array.ArrayNum) {
    lVar4 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar5 < (this->RayTracingProxyVertexFactories).Array.ArrayNum) {
        uVar3 = ~uVar5 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      (**(code **)(**(longlong **)
                     ((this->RayTracingProxyVertexFactories).Array.AllocatorInstance.Data + lVar4) +
                  0x20))();
      uVar5 = uVar5 + 1;
      lVar4 = lVar4 + 8;
    } while ((int)uVar5 < (this->RayTracingProxyVertexFactories).Array.ArrayNum);
  }
  return;
}

