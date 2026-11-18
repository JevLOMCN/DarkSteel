// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 4

// GetLODModelData @ 148ebdd10

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
NDIDynamicMeshLocal::FNDIRenderableMesh::GetLODModelData
          (FNDIRenderableMesh *this,FLODModelData *param_1,int param_2)

{
  int iVar1;
  FStaticMeshSection *pFVar2;
  code *pcVar3;
  bool bVar4;
  FNDIInstanceData_RenderThread *pFVar5;
  undefined4 uStack_c;
  
  pFVar5 = TMapBase<unsigned___int64,NDIDynamicMeshLocal::FNDIInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,NDIDynamicMeshLocal::FNDIInstanceData_RenderThread,0>_>
           ::Find((TMapBase<unsigned___int64,NDIDynamicMeshLocal::FNDIInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,NDIDynamicMeshLocal::FNDIInstanceData_RenderThread,0>_>
                   *)&this->OwnerProxy->InstanceData_RT,this->SystemInstanceID);
  if (((pFVar5 != (FNDIInstanceData_RenderThread *)0x0) && (pFVar5->NumTriangles != 0)) &&
     (pFVar5->NumVertices != 0)) {
    param_1->LODIndex = 0;
    param_1->NumVertices = pFVar5->NumVertices;
    param_1->IndexBuffer = &pFVar5->IndexBuffer;
    param_1->NumIndices = pFVar5->NumTriangles * 3;
    pFVar2 = (FStaticMeshSection *)(pFVar5->MeshSections).AllocatorInstance.Data;
    iVar1 = (pFVar5->MeshSections).ArrayNum;
    if (iVar1 < 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    (param_1->Sections).DataPtr = pFVar2;
    *(ulonglong *)&(param_1->Sections).ArrayNum = CONCAT44(uStack_c,iVar1);
    return;
  }
  param_1->LODIndex = -1;
  return;
}

// GetLocalBounds @ 148ebeac0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

TBox<double> * __thiscall
NDIDynamicMeshLocal::FNDIRenderableMesh::GetLocalBounds
          (FNDIRenderableMesh *this,TBox<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  uchar uVar9;
  uchar uVar10;
  uchar uVar11;
  uchar uVar12;
  FNDIInstanceData_RenderThread *pFVar13;
  
  pFVar13 = TMapBase<unsigned___int64,NDIDynamicMeshLocal::FNDIInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,NDIDynamicMeshLocal::FNDIInstanceData_RenderThread,0>_>
            ::Find((TMapBase<unsigned___int64,NDIDynamicMeshLocal::FNDIInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,NDIDynamicMeshLocal::FNDIInstanceData_RenderThread,0>_>
                    *)&this->OwnerProxy->InstanceData_RT,this->SystemInstanceID);
  if (pFVar13 != (FNDIInstanceData_RenderThread *)0x0) {
    dVar1 = (pFVar13->LocalBounds).Min.field0_0x0._s_0.Y;
    dVar2 = (pFVar13->LocalBounds).Min.field0_0x0._s_0.Z;
    dVar3 = (pFVar13->LocalBounds).Max.field0_0x0._s_0.X;
    (__return_storage_ptr__->Min).field0_0x0._s_0.X = (pFVar13->LocalBounds).Min.field0_0x0._s_0.X;
    (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar1;
    dVar1 = (pFVar13->LocalBounds).Max.field0_0x0._s_0.Y;
    dVar4 = (pFVar13->LocalBounds).Max.field0_0x0._s_0.Z;
    (__return_storage_ptr__->Min).field0_0x0._s_0.Z = dVar2;
    (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar3;
    uVar5 = (pFVar13->LocalBounds).IsValid;
    uVar6 = (pFVar13->LocalBounds).Pad[0];
    uVar7 = (pFVar13->LocalBounds).Pad[1];
    uVar8 = (pFVar13->LocalBounds).Pad[2];
    uVar9 = (pFVar13->LocalBounds).Pad[3];
    uVar10 = (pFVar13->LocalBounds).Pad[4];
    uVar11 = (pFVar13->LocalBounds).Pad[5];
    uVar12 = (pFVar13->LocalBounds).Pad[6];
    (__return_storage_ptr__->Max).field0_0x0._s_0.Y = dVar1;
    (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dVar4;
    __return_storage_ptr__->IsValid = uVar5;
    __return_storage_ptr__->Pad[0] = uVar6;
    __return_storage_ptr__->Pad[1] = uVar7;
    __return_storage_ptr__->Pad[2] = uVar8;
    __return_storage_ptr__->Pad[3] = uVar9;
    __return_storage_ptr__->Pad[4] = uVar10;
    __return_storage_ptr__->Pad[5] = uVar11;
    __return_storage_ptr__->Pad[6] = uVar12;
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->Min).field0_0x0._s_0.X = -100.0;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = -100.0;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = -100.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = 100.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Y = 100.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = 100.0;
  __return_storage_ptr__->IsValid = '\x01';
  return __return_storage_ptr__;
}

// GetUsedMaterials @ 148ec1130

void __thiscall
NDIDynamicMeshLocal::FNDIRenderableMesh::GetUsedMaterials
          (FNDIRenderableMesh *this,
          TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  longlong lVar2;
  FNDIProxy *pFVar3;
  ulonglong uVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  undefined8 *puVar10;
  uint uVar11;
  undefined1 *puVar12;
  undefined8 *puVar13;
  undefined1 local_res8 [8];
  undefined8 local_28;
  undefined8 local_20;
  
  pFVar3 = this->OwnerProxy;
  uVar4 = this->SystemInstanceID;
  if (*(int *)&(pFVar3->InstanceData_GT).field_0x8 != *(int *)&(pFVar3->InstanceData_GT).field_0x34)
  {
    puVar12 = *(undefined1 **)&(pFVar3->InstanceData_GT).field_0x40;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = &(pFVar3->InstanceData_GT).field_0x38;
    }
    iVar9 = *(int *)(puVar12 +
                    ((uVar4 >> 0x20) * 0x17 + uVar4 &
                    (ulonglong)(*(int *)&(pFVar3->InstanceData_GT).field_0x48 - 1)) * 4);
    if (iVar9 != -1) {
      do {
        lVar2 = *(longlong *)&pFVar3->InstanceData_GT + (longlong)iVar9 * 0x18;
        if (*(ulonglong *)(*(longlong *)&pFVar3->InstanceData_GT + (longlong)iVar9 * 0x18) == uVar4)
        {
          if ((lVar2 != 0) && (lVar2 = *(longlong *)(lVar2 + 8), lVar2 != 0)) {
            uVar11 = *(int *)(lVar2 + 0x88) + param_1->ArrayNum;
            if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
              UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
            }
            piVar1 = &param_1->ArrayMax;
            if (*piVar1 < (int)uVar11) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,uVar11,&param_1->AllocatorInstance,param_1->ArrayNum,piVar1);
            }
            iVar9 = *(int *)(lVar2 + 0x88);
            puVar10 = *(undefined8 **)(lVar2 + 0x80);
            puVar13 = puVar10 + (longlong)iVar9 * 8;
            while( true ) {
              if (*(int *)(lVar2 + 0x88) != iVar9) {
                local_res8[0] = 0;
                `TCheckedPointerIterator<NDIDynamicMeshLocal::FNDIInstanceMaterial_const_,int,0>::
                operator!='::__l2::<lambda_1>::operator()(local_res8);
              }
              if (puVar10 == puVar13) break;
              local_28 = *puVar10;
              pFVar5 = (param_1->AllocatorInstance).Data;
              if (((pFVar5 <= (FScriptContainerElement *)&local_28) &&
                  ((FScriptContainerElement *)&local_28 < pFVar5 + (longlong)*piVar1 * 8)) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar7)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              iVar8 = param_1->ArrayNum;
              if (iVar8 == *piVar1) {
                iVar8 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x808,&param_1->AllocatorInstance,piVar1);
              }
              puVar10 = puVar10 + 8;
              param_1->ArrayNum = iVar8 + 1;
              *(undefined8 *)((param_1->AllocatorInstance).Data + (longlong)iVar8 * 8) = local_28;
            }
          }
          break;
        }
        iVar9 = *(int *)(lVar2 + 0x10);
      } while (iVar9 != -1);
    }
  }
  if (param_1->ArrayNum == 0) {
    pFVar5 = (param_1->AllocatorInstance).Data;
    local_20 = 0;
    if (((pFVar5 <= (FScriptContainerElement *)&local_20) &&
        ((FScriptContainerElement *)&local_20 < pFVar5 + (longlong)param_1->ArrayMax * 8)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar9 = param_1->ArrayNum;
    if (iVar9 == param_1->ArrayMax) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
    }
    param_1->ArrayNum = iVar9 + 1;
    *(undefined8 *)((param_1->AllocatorInstance).Data + (longlong)iVar9 * 8) = local_20;
  }
  return;
}

// SetupVertexFactory @ 148ed1a90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
NDIDynamicMeshLocal::FNDIRenderableMesh::SetupVertexFactory
          (FNDIRenderableMesh *this,FRHICommandListBase *param_1,FNiagaraMeshVertexFactory *param_2,
          FLODModelData *param_3)

{
  TGlobalResource<FNullVertexBuffer,0> *pTVar1;
  FNDIProxy *pFVar2;
  ulonglong uVar3;
  code *pcVar4;
  longlong lVar5;
  TTypeCompatibleBytes<FVertexStreamComponent> *pTVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  ulonglong *puVar10;
  ulonglong *puVar11;
  uint uVar12;
  undefined1 *puVar14;
  undefined1 auStack_138 [32];
  ulonglong local_118;
  FStaticMeshDataType local_100;
  ulonglong local_40;
  ulonglong *puVar13;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_138;
  pFVar2 = this->OwnerProxy;
  puVar13 = (ulonglong *)0x0;
  uVar3 = this->SystemInstanceID;
  puVar11 = puVar13;
  if (*(int *)&(pFVar2->InstanceData_RT).field_0x8 != *(int *)&(pFVar2->InstanceData_RT).field_0x34)
  {
    puVar14 = *(undefined1 **)&(pFVar2->InstanceData_RT).field_0x40;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = &(pFVar2->InstanceData_RT).field_0x38;
    }
    iVar9 = *(int *)(puVar14 +
                    ((uVar3 >> 0x20) * 0x17 + uVar3 &
                    (ulonglong)(*(int *)&(pFVar2->InstanceData_RT).field_0x48 - 1)) * 4);
    if (iVar9 != -1) {
      do {
        puVar11 = (ulonglong *)((longlong)iVar9 * 0x158 + *(longlong *)&pFVar2->InstanceData_RT);
        if (*puVar11 == uVar3) {
          if (puVar11 != (ulonglong *)0x0) goto LAB_148ed1b69;
          break;
        }
        iVar9 = (int)puVar11[0x2a];
        puVar11 = puVar13;
      } while (iVar9 != -1);
    }
  }
  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x27b,L"");
  if (bVar7) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
LAB_148ed1b69:
  local_100.TextureCoordinates.ArrayMax = 4;
  local_100.TextureCoordinates.ArrayNum = 0;
  local_100.TextureCoordinatesSRV = (FRHIShaderResourceView *)0x0;
  local_100.ColorComponentsSRV = (FRHIShaderResourceView *)0x0;
  local_100.LODLightmapDataIndex = '\0';
  pTVar1 = (TGlobalResource<FNullVertexBuffer,0> *)(puVar11 + 0x17);
  local_100.LightMapCoordinateComponent.VertexBuffer = (FVertexBuffer *)0x0;
  local_100.LightMapCoordinateComponent.StreamOffset = 0;
  local_100.LightMapCoordinateComponent.Offset = '\0';
  local_100.LightMapCoordinateComponent.Stride = '\0';
  local_100.LightMapCoordinateComponent.Type.Value = '\0';
  local_100.LightMapCoordinateComponent.VertexStreamUsage = Default;
  local_100.ColorComponent.VertexBuffer = (FVertexBuffer *)0x0;
  local_100.ColorComponent.StreamOffset = 0;
  local_100.ColorComponent.Offset = '\0';
  local_100.ColorComponent.Stride = '\0';
  local_100.ColorComponent.Type.Value = '\0';
  local_100.ColorComponent.VertexStreamUsage = Default;
  local_100.ColorIndexMask = 0xffffffff;
  local_100.LightMapCoordinateIndex = -1;
  uVar12 = *(uint *)((longlong)puVar11 + 0x54);
  puVar10 = puVar13;
  if (uVar12 == 0xffffffff) {
    local_100.PositionComponentSRV = (FRHIShaderResourceView *)GNullVertexBuffer._40_8_;
    local_100.PositionComponent.VertexBuffer = (FVertexBuffer *)&GNullVertexBuffer;
    local_100.PositionComponent.Offset = '\0';
    local_100.PositionComponent.Stride = '\0';
    local_100.PositionComponent.Type.Value = '\x03';
    local_100.PositionComponent.VertexStreamUsage = Default;
  }
  else {
    if (0xff < uVar12) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InOffset <= 0xFF",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\VertexStreamComponent.h"
                         ,0x3a,L"");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      puVar10 = (ulonglong *)(ulonglong)(uint)local_100.TextureCoordinates.ArrayNum;
    }
    local_100.PositionComponent.Stride = '\f';
    local_100.PositionComponent.Type.Value = '\x03';
    local_100.PositionComponent.Offset = (char)uVar12;
    local_100.PositionComponent.VertexStreamUsage = Default;
    local_100.PositionComponentSRV = (FRHIShaderResourceView *)puVar11[0x1c];
    local_100.PositionComponent.VertexBuffer = (FVertexBuffer *)pTVar1;
  }
  local_100.PositionComponent.StreamOffset = 0;
  iVar9 = (int)puVar10;
  local_100.TangentBasisComponents[0].StreamOffset = 0;
  local_100.TangentBasisComponents[1].StreamOffset = 0;
  if ((int)puVar11[0xb] == -1) {
    local_100.TangentBasisComponents[0].Offset = '\0';
    local_100.TangentBasisComponents[0].Stride = '\0';
    local_100.TangentBasisComponents[0].Type.Value = '\x05';
    local_100.TangentBasisComponents[0].VertexStreamUsage = ManualFetch;
    local_100.TangentBasisComponents[1].VertexBuffer = (FVertexBuffer *)&GNullVertexBuffer;
    local_100.TangentBasisComponents[1].Offset = '\0';
    local_100.TangentBasisComponents[1].Stride = '\0';
    local_100.TangentBasisComponents[1].Type.Value = '\x05';
    local_100.TangentBasisComponents[1].VertexStreamUsage = ManualFetch;
    local_100.TangentsSRV = (FRHIShaderResourceView *)GNullVertexBuffer._40_8_;
  }
  else {
    local_100.TangentBasisComponents[0].Offset = '\0';
    local_100.TangentBasisComponents[0].Stride = '\b';
    local_100.TangentBasisComponents[0].Type.Value = '\x05';
    local_100.TangentBasisComponents[0].VertexStreamUsage = ManualFetch;
    local_100.TangentBasisComponents[1].Offset = '\0';
    local_100.TangentBasisComponents[1].Stride = '\b';
    local_100.TangentBasisComponents[1].Type.Value = '\x05';
    local_100.TangentBasisComponents[1].VertexStreamUsage = ManualFetch;
    local_100.TangentsSRV = (FRHIShaderResourceView *)puVar11[0x1d];
    local_100.TangentBasisComponents[1].VertexBuffer = (FVertexBuffer *)pTVar1;
  }
  local_100.TangentBasisComponents[0].VertexBuffer =
       local_100.TangentBasisComponents[1].VertexBuffer;
  if (*(int *)((longlong)puVar11 + 0x5c) == -1) {
    local_100.NumTexCoords = '\0';
    if (iVar9 == local_100.TextureCoordinates.ArrayMax) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<4>::ForElementType<FVertexStreamComponent>_>
                        (0x810,&local_100.TextureCoordinates.AllocatorInstance,
                         &local_100.TextureCoordinates.ArrayMax);
    }
    local_100.TextureCoordinates.ArrayNum = iVar9 + 1;
    *(TGlobalResource<FNullVertexBuffer,0> **)
     local_100.TextureCoordinates.AllocatorInstance.InlineData[iVar9].Pad = &GNullVertexBuffer;
    pTVar6 = local_100.TextureCoordinates.AllocatorInstance.InlineData + iVar9;
    pTVar6->Pad[8] = '\0';
    pTVar6->Pad[9] = '\0';
    pTVar6->Pad[10] = '\0';
    pTVar6->Pad[0xb] = '\0';
    pTVar6 = local_100.TextureCoordinates.AllocatorInstance.InlineData + iVar9;
    pTVar6->Pad[0xc] = '\0';
    pTVar6->Pad[0xd] = '\0';
    pTVar6->Pad[0xe] = '\x02';
    pTVar6->Pad[0xf] = '\x04';
    local_100.TextureCoordinatesSRV = (FRHIShaderResourceView *)GNullVertexBuffer._40_8_;
  }
  else {
    uVar12 = *(uint *)((longlong)puVar11 + 0x14);
    if (uVar12 != (uVar12 & 0xff)) {
      local_118 = (ulonglong)uVar12;
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IntFitsIn<OutType>(In)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                         ,0xae,L"Loss of data caused by narrowing conversion, In = %llu");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      puVar10 = (ulonglong *)(ulonglong)(uint)local_100.TextureCoordinates.ArrayNum;
    }
    uVar8 = *(uint *)((longlong)puVar11 + 0x14);
    local_100.NumTexCoords = (uchar)uVar12;
    if (uVar8 != 0) {
      while( true ) {
        iVar9 = (int)puVar10;
        if (iVar9 == local_100.TextureCoordinates.ArrayMax) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<4>::ForElementType<FVertexStreamComponent>_>
                            (0x810,&local_100.TextureCoordinates.AllocatorInstance,
                             &local_100.TextureCoordinates.ArrayMax);
        }
        local_100.TextureCoordinates.ArrayNum = iVar9 + 1;
        *(TGlobalResource<FNullVertexBuffer,0> **)
         local_100.TextureCoordinates.AllocatorInstance.InlineData[iVar9].Pad = pTVar1;
        pTVar6 = local_100.TextureCoordinates.AllocatorInstance.InlineData + iVar9;
        pTVar6->Pad[8] = '\0';
        pTVar6->Pad[9] = '\0';
        pTVar6->Pad[10] = '\0';
        pTVar6->Pad[0xb] = '\0';
        local_100.TextureCoordinates.AllocatorInstance.InlineData[iVar9].Pad[0xc] = '\0';
        local_100.TextureCoordinates.AllocatorInstance.InlineData[iVar9].Pad[0xd] =
             (uchar)(uVar8 * 8);
        pTVar6 = local_100.TextureCoordinates.AllocatorInstance.InlineData + iVar9;
        pTVar6->Pad[0xe] = '\x02';
        pTVar6->Pad[0xf] = '\x04';
        if ((0xff < uVar8 * 8) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("InStride <= 0xFF",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\VertexStreamComponent.h"
                               ,0x39,L""), bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar8 = *(uint *)((longlong)puVar11 + 0x14);
        uVar12 = (int)puVar13 + 1;
        puVar13 = (ulonglong *)(ulonglong)uVar12;
        if (uVar8 <= uVar12) break;
        puVar10 = (ulonglong *)(ulonglong)(uint)local_100.TextureCoordinates.ArrayNum;
      }
    }
    local_100.TextureCoordinatesSRV = (FRHIShaderResourceView *)puVar11[0x1e];
  }
  if ((int)puVar11[0xc] == -1) {
    local_100.ColorIndexMask = 0;
    local_100.ColorComponent.VertexBuffer = (FVertexBuffer *)&GNullColorVertexBuffer;
    lVar5 = 0x4080000;
    local_100.ColorComponentsSRV = (FRHIShaderResourceView *)GNullColorVertexBuffer._40_8_;
  }
  else {
    local_100.ColorIndexMask = 0xffffffff;
    lVar5 = 0x4080400;
    local_100.ColorComponentsSRV = (FRHIShaderResourceView *)puVar11[0x1f];
    local_100.ColorComponent.VertexBuffer = (FVertexBuffer *)pTVar1;
  }
  local_100.ColorComponent._8_8_ = lVar5 << 0x20;
  FNiagaraMeshVertexFactory::SetData(param_2,param_1,&local_100);
  return;
}

