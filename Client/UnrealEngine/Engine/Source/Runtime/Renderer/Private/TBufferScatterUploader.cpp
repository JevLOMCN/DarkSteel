// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 35

// ~TBufferScatterUploader<UE::HLSL::FLightSceneData,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,1> @ 1448edb70

void __thiscall
UE::RendererPrivateUtils::Implementation::
TBufferScatterUploader<UE::HLSL::FLightSceneData,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,1>
::
~TBufferScatterUploader<UE::HLSL::FLightSceneData,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,1>
          (TBufferScatterUploader<UE::HLSL::FLightSceneData,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,1>
           *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->UploadData).ScatterOffsets.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->UploadData).Values.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// Add @ 1448fc8a0

void __thiscall
UE::RendererPrivateUtils::Implementation::
TBufferScatterUploader<UE::HLSL::FLightSceneData,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,1>
::Add(TBufferScatterUploader<UE::HLSL::FLightSceneData,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,1>
      *this,FLightSceneData *param_1,int param_2)

{
  int *piVar1;
  FLightSceneData *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  TVector2<float>_u_0 TVar6;
  bool bVar7;
  int iVar8;
  longlong lVar9;
  int local_18 [4];
  
  if (this->UploadDataProxy != (FUploadData *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("UploadDataProxy == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RendererPrivateUtils.h"
                       ,0x116,L"");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar2 = (FLightSceneData *)(this->UploadData).Values.AllocatorInstance.Data;
  if ((pFVar2 <= param_1) && (param_1 < pFVar2 + (this->UploadData).Values.ArrayMax)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar8 = (this->UploadData).Values.ArrayNum;
  piVar1 = &(this->UploadData).Values.ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x460,(ForAnyElementType *)&this->UploadData,piVar1);
  }
  (this->UploadData).Values.ArrayNum = iVar8 + 1;
  uVar5 = *(undefined8 *)((longlong)&(param_1->WorldPosition).High.field0_0x0 + 8);
  pFVar3 = (this->UploadData).Values.AllocatorInstance.Data;
  lVar9 = (longlong)iVar8 * 0x60;
  *(undefined8 *)(pFVar3 + lVar9) = *(undefined8 *)&(param_1->WorldPosition).High.field0_0x0;
  *(undefined8 *)(pFVar3 + lVar9 + 8) = uVar5;
  uVar5 = *(undefined8 *)&param_1->InvRadius;
  *(undefined8 *)(pFVar3 + lVar9 + 0x10) =
       *(undefined8 *)((longlong)&(param_1->WorldPosition).Low.field0_0x0 + 4);
  *(undefined8 *)(pFVar3 + lVar9 + 0x10 + 8) = uVar5;
  uVar5 = *(undefined8 *)((longlong)&(param_1->Direction).field0_0x0 + 8);
  *(undefined8 *)(pFVar3 + lVar9 + 0x20) = *(undefined8 *)&(param_1->Direction).field0_0x0;
  *(undefined8 *)(pFVar3 + lVar9 + 0x20 + 8) = uVar5;
  uVar5 = *(undefined8 *)((longlong)&(param_1->Tangent).field0_0x0 + 8);
  *(undefined8 *)(pFVar3 + lVar9 + 0x30) = *(undefined8 *)&(param_1->Tangent).field0_0x0;
  *(undefined8 *)(pFVar3 + lVar9 + 0x30 + 8) = uVar5;
  TVar6 = *(TVector2<float>_u_0 *)&param_1->SoftSourceRadius;
  *(TVector2<float>_u_0 *)(pFVar3 + lVar9 + 0x40) = (param_1->SpotAngles).field0_0x0;
  ((TVector2<float>_u_0 *)(pFVar3 + lVar9 + 0x40))[1] = TVar6;
  uVar5 = *(undefined8 *)&param_1->SpecularScale;
  *(undefined8 *)(pFVar3 + lVar9 + 0x50) = *(undefined8 *)&param_1->RectLightBarnCosAngle;
  *(undefined8 *)(pFVar3 + lVar9 + 0x50 + 8) = uVar5;
  pFVar3 = (this->UploadData).ScatterOffsets.AllocatorInstance.Data;
  local_18[0] = param_2;
  if ((pFVar3 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 <
      pFVar3 + (longlong)(this->UploadData).ScatterOffsets.ArrayMax * 4)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar8 = (this->UploadData).ScatterOffsets.ArrayNum;
  piVar1 = &(this->UploadData).ScatterOffsets.ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&(this->UploadData).ScatterOffsets.AllocatorInstance,piVar1);
  }
  (this->UploadData).ScatterOffsets.ArrayNum = iVar8 + 1;
  *(int *)((this->UploadData).ScatterOffsets.AllocatorInstance.Data + (longlong)iVar8 * 4) =
       local_18[0];
  return;
}

// ResizeAndUploadTo @ 144930570

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGBuffer * __thiscall
UE::RendererPrivateUtils::Implementation::
TBufferScatterUploader<UE::HLSL::FLightSceneData,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,1>
::ResizeAndUploadTo(TBufferScatterUploader<UE::HLSL::FLightSceneData,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,1>
                    *this,FRDGBuilder *param_1,
                   TPersistentBuffer<UE::HLSL::FLightSceneData,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits>
                   *param_2,int param_3,FScatterInfo *param_4)

{
  FUploadData **this_00;
  int *piVar1;
  void *pvVar2;
  FUploadData *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FRDGBuffer *pFVar8;
  undefined8 *puVar9;
  FRDGBuffer *pFVar10;
  undefined8 *puVar11;
  undefined8 *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  FRDGBufferDesc local_58;
  FRDGBufferDesc local_40;
  
  this_00 = &this->UploadDataProxy;
  if (this->UploadDataProxy != (FUploadData *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("UploadDataProxy == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RendererPrivateUtils.h"
                       ,0x154,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar8 = (FRDGBuffer *)(*pcVar5)();
      return pFVar8;
    }
  }
  pFVar8 = TPersistentBuffer<UE::HLSL::FLightSceneData,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits>
           ::ResizeBufferIfNeeded(param_2,param_1,param_3);
  iVar7 = (this->UploadData).ScatterOffsets.ArrayNum;
  puVar11 = (undefined8 *)0x0;
  param_4->NumScatters = iVar7;
  param_4->ScatterOffsetsRDG = (FRDGBuffer *)0x0;
  if (iVar7 != 0) {
    puVar9 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x28,0x10);
    if (puVar9 == (undefined8 *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Object",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                         ,0x61,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pFVar8 = (FRDGBuffer *)(*pcVar5)();
        return pFVar8;
      }
    }
    else {
      puVar9[1] = 0;
      *puVar9 = &
                ___7__TObject_UFUploadData___TBufferScatterUploader_UFLightSceneData_HLSL_UE__UFByteAddressBufferTraits_Implementation_RendererPrivateUtils_3__00_Implementation_RendererPrivateUtils_UE___FRDGAllocator__6B_
      ;
      puVar9[1] = (this->UploadData).Values.AllocatorInstance.Data;
      (this->UploadData).Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(puVar9 + 2) = (this->UploadData).Values.ArrayNum;
      *(int *)((longlong)puVar9 + 0x14) = (this->UploadData).Values.ArrayMax;
      (this->UploadData).Values.ArrayNum = 0;
      (this->UploadData).Values.ArrayMax = 0;
      puVar9[3] = 0;
      puVar9[3] = (this->UploadData).ScatterOffsets.AllocatorInstance.Data;
      (this->UploadData).ScatterOffsets.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(puVar9 + 4) = (this->UploadData).ScatterOffsets.ArrayNum;
      *(int *)((longlong)puVar9 + 0x24) = (this->UploadData).ScatterOffsets.ArrayMax;
      (this->UploadData).ScatterOffsets.ArrayNum = 0;
      (this->UploadData).ScatterOffsets.ArrayMax = 0;
      puVar11 = puVar9;
    }
    local_78 = puVar11;
    if (((undefined8 **)param_1->_padding_ <= &local_78) &&
       (&local_78 < (undefined8 **)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4))
       ) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pFVar8 = (FRDGBuffer *)(*pcVar5)();
        return pFVar8;
      }
    }
    iVar7 = (int)param_1->_padding_;
    piVar1 = (int *)((longlong)&param_1->_padding_ + 4);
    if (iVar7 == *piVar1) {
      iVar7 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)&param_1->_padding_,piVar1);
    }
    *(int *)&param_1->_padding_ = iVar7 + 1;
    uStack_68 = 0x10110;
    local_70 = 4;
    local_60 = 0;
    *(undefined8 **)(param_1->_padding_ + (longlong)iVar7 * 8) = local_78;
    *this_00 = (FUploadData *)(puVar11 + 1);
    uStack_6c = *(uint *)(puVar11 + 4) & 0x3fffffff;
    local_58.Metadata = (FShaderParametersMetadata *)0x0;
    local_58._0_8_ = CONCAT44(*(uint *)(puVar11 + 4),4) & 0x3fffffffffffffff;
    local_58._12_4_ = uStack_64;
    local_58.Usage = StructuredBuffer|ShaderResource|ByteAddressBuffer;
    pFVar10 = FRDGBuilder::CreateBuffer(param_1,&local_58,L"ScatterUploader.Offsets",None);
    iVar7 = *(int *)(puVar11 + 4);
    pvVar2 = (void *)puVar11[3];
    if (iVar7 < 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pFVar8 = (FRDGBuffer *)(*pcVar5)();
        return pFVar8;
      }
    }
    FRDGBuilder::QueueBufferUpload(param_1,pFVar10,pvVar2,(longlong)iVar7 << 2,None);
    param_4->ScatterOffsetsRDG = pFVar10;
    pFVar3 = *this_00;
    uStack_68 = 0x10110;
    local_70 = 4;
    local_60 = 0;
    local_40.Metadata = (FShaderParametersMetadata *)0x0;
    uStack_6c = (uint)((pFVar3->Values).ArrayNum * 0x60) >> 2;
    local_40.NumElements = uStack_6c;
    local_40.BytesPerElement = 4;
    local_40._12_4_ = uStack_64;
    local_40.Usage = StructuredBuffer|ShaderResource|ByteAddressBuffer;
    pFVar10 = FRDGBuilder::CreateBuffer(param_1,&local_40,L"ScatterUploader.Values",None);
    pFVar4 = (pFVar3->Values).AllocatorInstance.Data;
    iVar7 = (pFVar3->Values).ArrayNum;
    if (iVar7 < 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pFVar8 = (FRDGBuffer *)(*pcVar5)();
        return pFVar8;
      }
    }
    FRDGBuilder::QueueBufferUpload(param_1,pFVar10,pFVar4,(longlong)iVar7 * 0x60,None);
    FBufferScatterUploader::UploadTo
              ((FBufferScatterUploader *)this_00,param_1,pFVar8,param_4->ScatterOffsetsRDG,pFVar10,
               param_4->NumScatters,0x60,-1);
  }
  return pFVar8;
}

// ~TBufferScatterUploader<RenderCurve::FRenderCurveSceneExtension::FPackedRenderCurveInstanceData,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,1> @ 144a5aaa0

void __thiscall
UE::RendererPrivateUtils::Implementation::
TBufferScatterUploader<RenderCurve::FRenderCurveSceneExtension::FPackedRenderCurveInstanceData,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,1>
::
~TBufferScatterUploader<RenderCurve::FRenderCurveSceneExtension::FPackedRenderCurveInstanceData,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,1>
          (TBufferScatterUploader<RenderCurve::FRenderCurveSceneExtension::FPackedRenderCurveInstanceData,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,1>
           *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->UploadData).ScatterOffsets.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->UploadData).Values.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// ResizeAndUploadTo @ 144aad910

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGBuffer * __thiscall
UE::RendererPrivateUtils::Implementation::
TBufferScatterUploader<RenderCurve::FRenderCurveSceneExtension::FPackedRenderCurveInstanceData,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,1>
::ResizeAndUploadTo(TBufferScatterUploader<RenderCurve::FRenderCurveSceneExtension::FPackedRenderCurveInstanceData,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,1>
                    *this,FRDGBuilder *param_1,
                   TPersistentBuffer<RenderCurve::FRenderCurveSceneExtension::FPackedRenderCurveInstanceData,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits>
                   *param_2,int param_3,FScatterInfo *param_4)

{
  FUploadData **this_00;
  int *piVar1;
  void *pvVar2;
  FUploadData *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FRDGBuffer *pFVar8;
  undefined8 *puVar9;
  FRDGBuffer *pFVar10;
  undefined8 *puVar11;
  undefined8 *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  FRDGBufferDesc local_58;
  FRDGBufferDesc local_40;
  
  this_00 = &this->UploadDataProxy;
  if (this->UploadDataProxy != (FUploadData *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("UploadDataProxy == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RendererPrivateUtils.h"
                       ,0x154,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar8 = (FRDGBuffer *)(*pcVar5)();
      return pFVar8;
    }
  }
  pFVar8 = TPersistentBuffer<RenderCurve::FRenderCurveSceneExtension::FPackedRenderCurveInstanceData,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits>
           ::ResizeBufferIfNeeded(param_2,param_1,param_3);
  iVar7 = (this->UploadData).ScatterOffsets.ArrayNum;
  puVar11 = (undefined8 *)0x0;
  param_4->NumScatters = iVar7;
  param_4->ScatterOffsetsRDG = (FRDGBuffer *)0x0;
  if (iVar7 != 0) {
    puVar9 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x28,0x10);
    if (puVar9 == (undefined8 *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Object",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                         ,0x61,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pFVar8 = (FRDGBuffer *)(*pcVar5)();
        return pFVar8;
      }
    }
    else {
      puVar9[1] = 0;
      *puVar9 = &
                ___7__TObject_UFUploadData___TBufferScatterUploader_UFPackedRenderCurveInstanceData_FRenderCurveSceneExtension_RenderCurve__UFByteAddressBufferTraits_Implementation_RendererPrivateUtils_UE___00_Implementation_RendererPrivateUtils_UE___FRDGAllocator__6B_
      ;
      puVar9[1] = (this->UploadData).Values.AllocatorInstance.Data;
      (this->UploadData).Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(puVar9 + 2) = (this->UploadData).Values.ArrayNum;
      *(int *)((longlong)puVar9 + 0x14) = (this->UploadData).Values.ArrayMax;
      (this->UploadData).Values.ArrayNum = 0;
      (this->UploadData).Values.ArrayMax = 0;
      puVar9[3] = 0;
      puVar9[3] = (this->UploadData).ScatterOffsets.AllocatorInstance.Data;
      (this->UploadData).ScatterOffsets.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(puVar9 + 4) = (this->UploadData).ScatterOffsets.ArrayNum;
      *(int *)((longlong)puVar9 + 0x24) = (this->UploadData).ScatterOffsets.ArrayMax;
      (this->UploadData).ScatterOffsets.ArrayNum = 0;
      (this->UploadData).ScatterOffsets.ArrayMax = 0;
      puVar11 = puVar9;
    }
    local_78 = puVar11;
    if (((undefined8 **)param_1->_padding_ <= &local_78) &&
       (&local_78 < (undefined8 **)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4))
       ) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pFVar8 = (FRDGBuffer *)(*pcVar5)();
        return pFVar8;
      }
    }
    iVar7 = (int)param_1->_padding_;
    piVar1 = (int *)((longlong)&param_1->_padding_ + 4);
    if (iVar7 == *piVar1) {
      iVar7 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)&param_1->_padding_,piVar1);
    }
    *(int *)&param_1->_padding_ = iVar7 + 1;
    uStack_68 = 0x10110;
    local_70 = 4;
    local_60 = 0;
    *(undefined8 **)(param_1->_padding_ + (longlong)iVar7 * 8) = local_78;
    *this_00 = (FUploadData *)(puVar11 + 1);
    uStack_6c = *(uint *)(puVar11 + 4) & 0x3fffffff;
    local_58.Metadata = (FShaderParametersMetadata *)0x0;
    local_58._0_8_ = CONCAT44(*(uint *)(puVar11 + 4),4) & 0x3fffffffffffffff;
    local_58._12_4_ = uStack_64;
    local_58.Usage = StructuredBuffer|ShaderResource|ByteAddressBuffer;
    pFVar10 = FRDGBuilder::CreateBuffer(param_1,&local_58,L"ScatterUploader.Offsets",None);
    pvVar2 = (void *)puVar11[3];
    iVar7 = *(int *)(puVar11 + 4);
    if (iVar7 < 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pFVar8 = (FRDGBuffer *)(*pcVar5)();
        return pFVar8;
      }
    }
    FRDGBuilder::QueueBufferUpload(param_1,pFVar10,pvVar2,(longlong)iVar7 << 2,None);
    param_4->ScatterOffsetsRDG = pFVar10;
    pFVar3 = *this_00;
    uStack_68 = 0x10110;
    local_70 = 4;
    local_60 = 0;
    uStack_6c = ((pFVar3->Values).ArrayNum & 0xfffffffU) << 2;
    local_40.NumElements = uStack_6c;
    local_40.BytesPerElement = 4;
    local_40._12_4_ = uStack_64;
    local_40.Usage = StructuredBuffer|ShaderResource|ByteAddressBuffer;
    local_40.Metadata = (FShaderParametersMetadata *)0x0;
    pFVar10 = FRDGBuilder::CreateBuffer(param_1,&local_40,L"ScatterUploader.Values",None);
    pFVar4 = (pFVar3->Values).AllocatorInstance.Data;
    iVar7 = (pFVar3->Values).ArrayNum;
    if (iVar7 < 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pFVar8 = (FRDGBuffer *)(*pcVar5)();
        return pFVar8;
      }
    }
    FRDGBuilder::QueueBufferUpload(param_1,pFVar10,pFVar4,(longlong)iVar7 << 4,None);
    FBufferScatterUploader::UploadTo
              ((FBufferScatterUploader *)this_00,param_1,pFVar8,param_4->ScatterOffsetsRDG,pFVar10,
               param_4->NumScatters,0x10,-1);
  }
  return pFVar8;
}

// ~TBufferScatterUploader<unsigned_int,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,2> @ 145037760

void __thiscall
UE::RendererPrivateUtils::Implementation::
TBufferScatterUploader<unsigned_int,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,2>
::
~TBufferScatterUploader<unsigned_int,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,2>
          (TBufferScatterUploader<unsigned_int,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,2>
           *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->UploadData).ScatterOffsets.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->UploadData).Values.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// ~TBufferScatterUploader<Nanite::FMaterialsSceneExtension::FPackedPrimitiveData,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,1> @ 1450377a0

void __thiscall
UE::RendererPrivateUtils::Implementation::
TBufferScatterUploader<Nanite::FMaterialsSceneExtension::FPackedPrimitiveData,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,1>
::
~TBufferScatterUploader<Nanite::FMaterialsSceneExtension::FPackedPrimitiveData,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,1>
          (TBufferScatterUploader<Nanite::FMaterialsSceneExtension::FPackedPrimitiveData,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,1>
           *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->UploadData).ScatterOffsets.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->UploadData).Values.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// Add @ 1450460a0

void __thiscall
UE::RendererPrivateUtils::Implementation::
TBufferScatterUploader<Nanite::FMaterialsSceneExtension::FPackedPrimitiveData,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,1>
::Add(TBufferScatterUploader<Nanite::FMaterialsSceneExtension::FPackedPrimitiveData,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,1>
      *this,FPackedPrimitiveData *param_1,int param_2)

{
  int *piVar1;
  FPackedPrimitiveData *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int local_18 [4];
  
  if (this->UploadDataProxy != (FUploadData *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("UploadDataProxy == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RendererPrivateUtils.h"
                       ,0x116,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar2 = (FPackedPrimitiveData *)(this->UploadData).Values.AllocatorInstance.Data;
  if ((pFVar2 <= param_1) && (param_1 < pFVar2 + (this->UploadData).Values.ArrayMax)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->UploadData).Values.ArrayNum;
  piVar1 = &(this->UploadData).Values.ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,(ForAnyElementType *)&this->UploadData,piVar1);
  }
  (this->UploadData).Values.ArrayNum = iVar6 + 1;
  *(FPackedPrimitiveData *)((this->UploadData).Values.AllocatorInstance.Data + (longlong)iVar6 * 8)
       = *param_1;
  pFVar3 = (this->UploadData).ScatterOffsets.AllocatorInstance.Data;
  local_18[0] = param_2;
  if ((pFVar3 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 <
      pFVar3 + (longlong)(this->UploadData).ScatterOffsets.ArrayMax * 4)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->UploadData).ScatterOffsets.ArrayNum;
  piVar1 = &(this->UploadData).ScatterOffsets.ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&(this->UploadData).ScatterOffsets.AllocatorInstance,piVar1);
  }
  (this->UploadData).ScatterOffsets.ArrayNum = iVar6 + 1;
  *(int *)((this->UploadData).ScatterOffsets.AllocatorInstance.Data + (longlong)iVar6 * 4) =
       local_18[0];
  return;
}

// AddMultiple_GetRef @ 145046c50

TArrayView<unsigned_int,int> * __thiscall
UE::RendererPrivateUtils::Implementation::
TBufferScatterUploader<unsigned_int,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,2>
::AddMultiple_GetRef
          (TBufferScatterUploader<unsigned_int,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,2>
           *this,TArrayView<unsigned_int,int> *__return_storage_ptr__,int param_1,int param_2)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TArrayView<unsigned_int,int> *pTVar6;
  int iVar7;
  uint uVar8;
  int local_58 [6];
  
  if (((param_2 & 1U) != 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumValues % NumValuesPerScatter == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RendererPrivateUtils.h"
                         ,0x13f,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TArrayView<unsigned_int,int> *)(*pcVar3)();
    return pTVar6;
  }
  if ((this->UploadDataProxy != (FUploadData *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("UploadDataProxy == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RendererPrivateUtils.h"
                         ,0x140,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TArrayView<unsigned_int,int> *)(*pcVar3)();
    return pTVar6;
  }
  uVar1 = (this->UploadData).Values.ArrayNum;
  Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,param_2,(ForAnyElementType *)&this->UploadData,&(this->UploadData).Values.ArrayNum,
             &(this->UploadData).Values.ArrayMax);
  iVar7 = 0;
  if (0 < param_2 / 2) {
    do {
      pFVar2 = (this->UploadData).ScatterOffsets.AllocatorInstance.Data;
      local_58[0] = iVar7 + param_1;
      if (((pFVar2 <= (FScriptContainerElement *)local_58) &&
          ((FScriptContainerElement *)local_58 <
           pFVar2 + (longlong)(this->UploadData).ScatterOffsets.ArrayMax * 4)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TArrayView<unsigned_int,int> *)(*pcVar3)();
        return pTVar6;
      }
      iVar5 = (this->UploadData).ScatterOffsets.ArrayNum;
      if (iVar5 == (this->UploadData).ScatterOffsets.ArrayMax) {
        iVar5 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&(this->UploadData).ScatterOffsets.AllocatorInstance,
                           &(this->UploadData).ScatterOffsets.ArrayMax);
      }
      iVar7 = iVar7 + 1;
      (this->UploadData).ScatterOffsets.ArrayNum = iVar5 + 1;
      *(int *)((this->UploadData).ScatterOffsets.AllocatorInstance.Data + (longlong)iVar5 * 4) =
           local_58[0];
    } while (iVar7 < param_2 / 2);
  }
  uVar8 = 0;
  if ((int)uVar1 < (this->UploadData).Values.ArrayNum) {
    uVar8 = ~uVar1 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TArrayView<unsigned_int,int> *)(*pcVar3)();
    return pTVar6;
  }
  pFVar2 = (this->UploadData).Values.AllocatorInstance.Data;
  __return_storage_ptr__->ArrayNum = param_2;
  __return_storage_ptr__->DataPtr = (uint *)(pFVar2 + (longlong)(int)uVar1 * 4);
  if ((param_2 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TArrayView<unsigned_int,int> *)(*pcVar3)();
    return pTVar6;
  }
  return __return_storage_ptr__;
}

// ResizeAndUploadTo @ 145076b80

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGBuffer * __thiscall
UE::RendererPrivateUtils::Implementation::
TBufferScatterUploader<unsigned_int,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,2>
::ResizeAndUploadTo(TBufferScatterUploader<unsigned_int,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,2>
                    *this,FRDGBuilder *param_1,
                   TPersistentBuffer<unsigned_int,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits>
                   *param_2,int param_3,FScatterInfo *param_4)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FRDGBuffer *pFVar5;
  undefined8 *puVar6;
  FRDGBuffer *pFVar7;
  undefined8 *puVar8;
  undefined8 *local_38 [2];
  
  if (this->UploadDataProxy != (FUploadData *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("UploadDataProxy == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RendererPrivateUtils.h"
                       ,0x154,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FRDGBuffer *)(*pcVar2)();
      return pFVar5;
    }
  }
  pFVar5 = TPersistentBuffer<unsigned_int,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits>
           ::ResizeBufferIfNeeded(param_2,param_1,param_3);
  iVar4 = (this->UploadData).ScatterOffsets.ArrayNum;
  puVar8 = (undefined8 *)0x0;
  param_4->NumScatters = iVar4;
  param_4->ScatterOffsetsRDG = (FRDGBuffer *)0x0;
  if (iVar4 != 0) {
    puVar6 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x28,0x10);
    if (puVar6 == (undefined8 *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Object",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                         ,0x61,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FRDGBuffer *)(*pcVar2)();
        return pFVar5;
      }
    }
    else {
      puVar6[1] = 0;
      *puVar6 = &
                ___7__TObject_UFUploadData___TBufferScatterUploader_IUFByteAddressBufferTraits_Implementation_RendererPrivateUtils_UE___01_Implementation_RendererPrivateUtils_UE___FRDGAllocator__6B_
      ;
      puVar6[1] = (this->UploadData).Values.AllocatorInstance.Data;
      (this->UploadData).Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(puVar6 + 2) = (this->UploadData).Values.ArrayNum;
      *(int *)((longlong)puVar6 + 0x14) = (this->UploadData).Values.ArrayMax;
      (this->UploadData).Values.ArrayNum = 0;
      (this->UploadData).Values.ArrayMax = 0;
      puVar6[3] = 0;
      puVar6[3] = (this->UploadData).ScatterOffsets.AllocatorInstance.Data;
      (this->UploadData).ScatterOffsets.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(puVar6 + 4) = (this->UploadData).ScatterOffsets.ArrayNum;
      *(int *)((longlong)puVar6 + 0x24) = (this->UploadData).ScatterOffsets.ArrayMax;
      (this->UploadData).ScatterOffsets.ArrayNum = 0;
      (this->UploadData).ScatterOffsets.ArrayMax = 0;
      puVar8 = puVar6;
    }
    local_38[0] = puVar8;
    if (((undefined8 **)param_1->_padding_ <= local_38) &&
       (local_38 < (undefined8 **)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4)))
    {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FRDGBuffer *)(*pcVar2)();
        return pFVar5;
      }
    }
    iVar4 = (int)param_1->_padding_;
    piVar1 = (int *)((longlong)&param_1->_padding_ + 4);
    if (iVar4 == *piVar1) {
      iVar4 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)&param_1->_padding_,piVar1);
    }
    *(int *)&param_1->_padding_ = iVar4 + 1;
    *(undefined8 **)(param_1->_padding_ + (longlong)iVar4 * 8) = local_38[0];
    this->UploadDataProxy = (FUploadData *)(puVar8 + 1);
    pFVar7 = FByteAddressBufferTraits::
             CreateUploadBuffer<TArray<unsigned_int,TSizedDefaultAllocator<32>_>_&>
                       (param_1,L"ScatterUploader.Offsets",
                        (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)(puVar8 + 3));
    param_4->ScatterOffsetsRDG = pFVar7;
    pFVar7 = FByteAddressBufferTraits::
             CreateUploadBuffer<TArray<unsigned_int,TSizedDefaultAllocator<32>_>_&>
                       (param_1,L"ScatterUploader.Values",&this->UploadDataProxy->Values);
    FBufferScatterUploader::UploadTo
              ((FBufferScatterUploader *)&this->UploadDataProxy,param_1,pFVar5,
               param_4->ScatterOffsetsRDG,pFVar7,param_4->NumScatters,8,-1);
  }
  return pFVar5;
}

// ResizeAndUploadTo @ 145076dc0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGBuffer * __thiscall
UE::RendererPrivateUtils::Implementation::
TBufferScatterUploader<Nanite::FMaterialsSceneExtension::FPackedPrimitiveData,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,1>
::ResizeAndUploadTo(TBufferScatterUploader<Nanite::FMaterialsSceneExtension::FPackedPrimitiveData,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,1>
                    *this,FRDGBuilder *param_1,
                   TPersistentBuffer<Nanite::FMaterialsSceneExtension::FPackedPrimitiveData,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits>
                   *param_2,int param_3,FScatterInfo *param_4)

{
  FUploadData **this_00;
  int *piVar1;
  FUploadData *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FRDGBuffer *pFVar7;
  undefined8 *puVar8;
  FRDGBuffer *pFVar9;
  undefined8 *puVar10;
  undefined8 *local_68;
  undefined4 local_60;
  uint uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  FRDGBufferDesc local_48;
  
  this_00 = &this->UploadDataProxy;
  if (this->UploadDataProxy != (FUploadData *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("UploadDataProxy == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RendererPrivateUtils.h"
                       ,0x154,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FRDGBuffer *)(*pcVar4)();
      return pFVar7;
    }
  }
  pFVar7 = TPersistentBuffer<Nanite::FMaterialsSceneExtension::FPackedPrimitiveData,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits>
           ::ResizeBufferIfNeeded(param_2,param_1,param_3);
  iVar6 = (this->UploadData).ScatterOffsets.ArrayNum;
  puVar10 = (undefined8 *)0x0;
  param_4->NumScatters = iVar6;
  param_4->ScatterOffsetsRDG = (FRDGBuffer *)0x0;
  if (iVar6 != 0) {
    puVar8 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x28,0x10);
    if (puVar8 == (undefined8 *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Object",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                         ,0x61,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar7 = (FRDGBuffer *)(*pcVar4)();
        return pFVar7;
      }
    }
    else {
      puVar8[1] = 0;
      *puVar8 = &
                ___7__TObject_UFUploadData___TBufferScatterUploader_UFPackedPrimitiveData_FMaterialsSceneExtension_Nanite__UFByteAddressBufferTraits_Implementation_RendererPrivateUtils_UE___00_Implementation_RendererPrivateUtils_UE___FRDGAllocator__6B_
      ;
      puVar8[1] = (this->UploadData).Values.AllocatorInstance.Data;
      (this->UploadData).Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(puVar8 + 2) = (this->UploadData).Values.ArrayNum;
      *(int *)((longlong)puVar8 + 0x14) = (this->UploadData).Values.ArrayMax;
      (this->UploadData).Values.ArrayNum = 0;
      (this->UploadData).Values.ArrayMax = 0;
      puVar8[3] = 0;
      puVar8[3] = (this->UploadData).ScatterOffsets.AllocatorInstance.Data;
      (this->UploadData).ScatterOffsets.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(puVar8 + 4) = (this->UploadData).ScatterOffsets.ArrayNum;
      *(int *)((longlong)puVar8 + 0x24) = (this->UploadData).ScatterOffsets.ArrayMax;
      (this->UploadData).ScatterOffsets.ArrayNum = 0;
      (this->UploadData).ScatterOffsets.ArrayMax = 0;
      puVar10 = puVar8;
    }
    local_68 = puVar10;
    if (((undefined8 **)param_1->_padding_ <= &local_68) &&
       (&local_68 < (undefined8 **)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4))
       ) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar7 = (FRDGBuffer *)(*pcVar4)();
        return pFVar7;
      }
    }
    iVar6 = (int)param_1->_padding_;
    piVar1 = (int *)((longlong)&param_1->_padding_ + 4);
    if (iVar6 == *piVar1) {
      iVar6 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)&param_1->_padding_,piVar1);
    }
    *(int *)&param_1->_padding_ = iVar6 + 1;
    *(undefined8 **)(param_1->_padding_ + (longlong)iVar6 * 8) = local_68;
    *this_00 = (FUploadData *)(puVar10 + 1);
    pFVar9 = FByteAddressBufferTraits::
             CreateUploadBuffer<TArray<unsigned_int,TSizedDefaultAllocator<32>_>_&>
                       (param_1,L"ScatterUploader.Offsets",
                        (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)(puVar10 + 3));
    param_4->ScatterOffsetsRDG = pFVar9;
    pFVar2 = *this_00;
    uStack_58 = 0x10110;
    local_60 = 4;
    local_50 = 0;
    uStack_5c = ((pFVar2->Values).ArrayNum & 0x1fffffffU) << 1;
    local_48.NumElements = uStack_5c;
    local_48.BytesPerElement = 4;
    local_48._12_4_ = uStack_54;
    local_48.Usage = StructuredBuffer|ShaderResource|ByteAddressBuffer;
    local_48.Metadata = (FShaderParametersMetadata *)0x0;
    pFVar9 = FRDGBuilder::CreateBuffer(param_1,&local_48,L"ScatterUploader.Values",None);
    pFVar3 = (pFVar2->Values).AllocatorInstance.Data;
    iVar6 = (pFVar2->Values).ArrayNum;
    if (iVar6 < 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar7 = (FRDGBuffer *)(*pcVar4)();
        return pFVar7;
      }
    }
    FRDGBuilder::QueueBufferUpload(param_1,pFVar9,pFVar3,(longlong)iVar6 << 3,None);
    FBufferScatterUploader::UploadTo
              ((FBufferScatterUploader *)this_00,param_1,pFVar7,param_4->ScatterOffsetsRDG,pFVar9,
               param_4->NumScatters,8,-1);
  }
  return pFVar7;
}

// ~TBufferScatterUploader<unsigned_int,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits,1> @ 1454787b0

void __thiscall
UE::RendererPrivateUtils::Implementation::
TBufferScatterUploader<unsigned_int,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits,1>
::
~TBufferScatterUploader<unsigned_int,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits,1>
          (TBufferScatterUploader<unsigned_int,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits,1>
           *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->UploadData).ScatterOffsets.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->UploadData).Values.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// ~TBufferScatterUploader<unsigned_int,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits,64> @ 1454787f0

void __thiscall
UE::RendererPrivateUtils::Implementation::
TBufferScatterUploader<unsigned_int,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits,64>
::
~TBufferScatterUploader<unsigned_int,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits,64>
          (TBufferScatterUploader<unsigned_int,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits,64>
           *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->UploadData).ScatterOffsets.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->UploadData).Values.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// ~TBufferScatterUploader<UE::HLSL::FCellBlockData,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits,1> @ 145478830

void __thiscall
UE::RendererPrivateUtils::Implementation::
TBufferScatterUploader<UE::HLSL::FCellBlockData,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits,1>
::
~TBufferScatterUploader<UE::HLSL::FCellBlockData,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits,1>
          (TBufferScatterUploader<UE::HLSL::FCellBlockData,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits,1>
           *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->UploadData).ScatterOffsets.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->UploadData).Values.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// ~TBufferScatterUploader<UE::HLSL::FPackedCellHeader,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits,1> @ 145478870

void __thiscall
UE::RendererPrivateUtils::Implementation::
TBufferScatterUploader<UE::HLSL::FPackedCellHeader,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits,1>
::
~TBufferScatterUploader<UE::HLSL::FPackedCellHeader,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits,1>
          (TBufferScatterUploader<UE::HLSL::FPackedCellHeader,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits,1>
           *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->UploadData).ScatterOffsets.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->UploadData).Values.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// Add @ 145491220

void __thiscall
UE::RendererPrivateUtils::Implementation::
TBufferScatterUploader<unsigned_int,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits,1>
::Add(TBufferScatterUploader<unsigned_int,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits,1>
      *this,uint *param_1,int param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int local_18 [4];
  
  if (this->UploadDataProxy != (FUploadData *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("UploadDataProxy == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RendererPrivateUtils.h"
                       ,0x116,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (this->UploadData).Values.AllocatorInstance.Data;
  if ((pFVar2 <= param_1) && (param_1 < pFVar2 + (longlong)(this->UploadData).Values.ArrayMax * 4))
  {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->UploadData).Values.ArrayNum;
  piVar1 = &(this->UploadData).Values.ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,(ForAnyElementType *)&this->UploadData,piVar1);
  }
  (this->UploadData).Values.ArrayNum = iVar5 + 1;
  *(uint *)((this->UploadData).Values.AllocatorInstance.Data + (longlong)iVar5 * 4) = *param_1;
  pFVar2 = (this->UploadData).ScatterOffsets.AllocatorInstance.Data;
  local_18[0] = param_2;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 <
      pFVar2 + (longlong)(this->UploadData).ScatterOffsets.ArrayMax * 4)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->UploadData).ScatterOffsets.ArrayNum;
  piVar1 = &(this->UploadData).ScatterOffsets.ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&(this->UploadData).ScatterOffsets.AllocatorInstance,piVar1);
  }
  (this->UploadData).ScatterOffsets.ArrayNum = iVar5 + 1;
  *(int *)((this->UploadData).ScatterOffsets.AllocatorInstance.Data + (longlong)iVar5 * 4) =
       local_18[0];
  return;
}

// Reserve @ 1454b6af0

void __thiscall
UE::RendererPrivateUtils::Implementation::
TBufferScatterUploader<unsigned_int,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits,64>
::Reserve(TBufferScatterUploader<unsigned_int,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits,64>
          *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  if (this->UploadDataProxy != (FUploadData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("UploadDataProxy == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RendererPrivateUtils.h"
                       ,0x10a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  uVar3 = param_1 * 0x40;
  if (-1 < param_1 << 6) {
    if ((this->UploadData).Values.ArrayMax < (int)uVar3) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar3,(ForAnyElementType *)&this->UploadData,(this->UploadData).Values.ArrayNum
                 ,&(this->UploadData).Values.ArrayMax);
    }
    if (-1 < param_1) {
      if ((this->UploadData).ScatterOffsets.ArrayMax < param_1) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,param_1,&(this->UploadData).ScatterOffsets.AllocatorInstance,
                   (this->UploadData).ScatterOffsets.ArrayNum,
                   &(this->UploadData).ScatterOffsets.ArrayMax);
      }
      return;
    }
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
  }
                    /* WARNING: Subroutine does not return */
  Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
}

// Reserve @ 1454b6bb0

void __thiscall
UE::RendererPrivateUtils::Implementation::
TBufferScatterUploader<UE::HLSL::FCellBlockData,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits,1>
::Reserve(TBufferScatterUploader<UE::HLSL::FCellBlockData,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits,1>
          *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->UploadDataProxy != (FUploadData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("UploadDataProxy == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RendererPrivateUtils.h"
                       ,0x10a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (-1 < param_1) {
    if ((this->UploadData).Values.ArrayMax < param_1) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,4,param_1,(ForAnyElementType *)&this->UploadData,
                 (this->UploadData).Values.ArrayNum,&(this->UploadData).Values.ArrayMax);
    }
    if ((this->UploadData).ScatterOffsets.ArrayMax < param_1) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,param_1,&(this->UploadData).ScatterOffsets.AllocatorInstance,
                 (this->UploadData).ScatterOffsets.ArrayNum,
                 &(this->UploadData).ScatterOffsets.ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Reserve @ 1454b6c70

void __thiscall
UE::RendererPrivateUtils::Implementation::
TBufferScatterUploader<UE::HLSL::FPackedCellHeader,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits,1>
::Reserve(TBufferScatterUploader<UE::HLSL::FPackedCellHeader,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits,1>
          *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->UploadDataProxy != (FUploadData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("UploadDataProxy == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RendererPrivateUtils.h"
                       ,0x10a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (-1 < param_1) {
    if ((this->UploadData).Values.ArrayMax < param_1) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,param_1,(ForAnyElementType *)&this->UploadData,
                 (this->UploadData).Values.ArrayNum,&(this->UploadData).Values.ArrayMax);
    }
    if ((this->UploadData).ScatterOffsets.ArrayMax < param_1) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,param_1,&(this->UploadData).ScatterOffsets.AllocatorInstance,
                 (this->UploadData).ScatterOffsets.ArrayNum,
                 &(this->UploadData).ScatterOffsets.ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// ResizeAndUploadTo @ 1454b7eb0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGBuffer * __thiscall
UE::RendererPrivateUtils::Implementation::
TBufferScatterUploader<unsigned_int,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits,1>
::ResizeAndUploadTo(TBufferScatterUploader<unsigned_int,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits,1>
                    *this,FRDGBuilder *param_1,
                   TPersistentBuffer<unsigned_int,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits>
                   *param_2,int param_3,FScatterInfo *param_4)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FRDGBuffer *pFVar5;
  undefined8 *puVar6;
  FRDGBuffer *pFVar7;
  undefined8 *puVar8;
  undefined8 *local_38 [2];
  
  if (this->UploadDataProxy != (FUploadData *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("UploadDataProxy == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RendererPrivateUtils.h"
                       ,0x154,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FRDGBuffer *)(*pcVar2)();
      return pFVar5;
    }
  }
  pFVar5 = TPersistentBuffer<unsigned_int,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits>
           ::ResizeBufferIfNeeded(param_2,param_1,param_3);
  iVar4 = (this->UploadData).ScatterOffsets.ArrayNum;
  puVar8 = (undefined8 *)0x0;
  param_4->NumScatters = iVar4;
  param_4->ScatterOffsetsRDG = (FRDGBuffer *)0x0;
  if (iVar4 != 0) {
    puVar6 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x28,0x10);
    if (puVar6 == (undefined8 *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Object",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                         ,0x61,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FRDGBuffer *)(*pcVar2)();
        return pFVar5;
      }
    }
    else {
      puVar6[1] = 0;
      *puVar6 = &
                ___7__TObject_UFUploadData___TBufferScatterUploader_IUFStructuredBufferTraits_Implementation_RendererPrivateUtils_UE___00_Implementation_RendererPrivateUtils_UE___FRDGAllocator__6B_
      ;
      puVar6[1] = (this->UploadData).Values.AllocatorInstance.Data;
      (this->UploadData).Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(puVar6 + 2) = (this->UploadData).Values.ArrayNum;
      *(int *)((longlong)puVar6 + 0x14) = (this->UploadData).Values.ArrayMax;
      (this->UploadData).Values.ArrayNum = 0;
      (this->UploadData).Values.ArrayMax = 0;
      puVar6[3] = 0;
      puVar6[3] = (this->UploadData).ScatterOffsets.AllocatorInstance.Data;
      (this->UploadData).ScatterOffsets.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(puVar6 + 4) = (this->UploadData).ScatterOffsets.ArrayNum;
      *(int *)((longlong)puVar6 + 0x24) = (this->UploadData).ScatterOffsets.ArrayMax;
      (this->UploadData).ScatterOffsets.ArrayNum = 0;
      (this->UploadData).ScatterOffsets.ArrayMax = 0;
      puVar8 = puVar6;
    }
    local_38[0] = puVar8;
    if (((undefined8 **)param_1->_padding_ <= local_38) &&
       (local_38 < (undefined8 **)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4)))
    {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FRDGBuffer *)(*pcVar2)();
        return pFVar5;
      }
    }
    iVar4 = (int)param_1->_padding_;
    piVar1 = (int *)((longlong)&param_1->_padding_ + 4);
    if (iVar4 == *piVar1) {
      iVar4 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)&param_1->_padding_,piVar1);
    }
    *(int *)&param_1->_padding_ = iVar4 + 1;
    *(undefined8 **)(param_1->_padding_ + (longlong)iVar4 * 8) = local_38[0];
    this->UploadDataProxy = (FUploadData *)(puVar8 + 1);
    pFVar7 = FStructuredBufferTraits::CreateUploadBuffer<unsigned_int,TSizedDefaultAllocator<32>_>
                       (param_1,L"ScatterUploader.Offsets",
                        (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)(puVar8 + 3));
    param_4->ScatterOffsetsRDG = pFVar7;
    pFVar7 = FStructuredBufferTraits::CreateUploadBuffer<unsigned_int,TSizedDefaultAllocator<32>_>
                       (param_1,L"ScatterUploader.Values",&this->UploadDataProxy->Values);
    FBufferScatterUploader::UploadTo
              ((FBufferScatterUploader *)&this->UploadDataProxy,param_1,pFVar5,
               param_4->ScatterOffsetsRDG,pFVar7,param_4->NumScatters,4,1);
  }
  return pFVar5;
}

// ResizeAndUploadTo @ 1454b80f0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGBuffer * __thiscall
UE::RendererPrivateUtils::Implementation::
TBufferScatterUploader<unsigned_int,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits,64>
::ResizeAndUploadTo(TBufferScatterUploader<unsigned_int,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits,64>
                    *this,FRDGBuilder *param_1,
                   TPersistentBuffer<unsigned_int,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits>
                   *param_2,int param_3,FScatterInfo *param_4)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FRDGBuffer *pFVar5;
  undefined8 *puVar6;
  FRDGBuffer *pFVar7;
  undefined8 *puVar8;
  undefined8 *local_38 [2];
  
  if (this->UploadDataProxy != (FUploadData *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("UploadDataProxy == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RendererPrivateUtils.h"
                       ,0x154,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FRDGBuffer *)(*pcVar2)();
      return pFVar5;
    }
  }
  pFVar5 = TPersistentBuffer<unsigned_int,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits>
           ::ResizeBufferIfNeeded(param_2,param_1,param_3);
  iVar4 = (this->UploadData).ScatterOffsets.ArrayNum;
  puVar8 = (undefined8 *)0x0;
  param_4->NumScatters = iVar4;
  param_4->ScatterOffsetsRDG = (FRDGBuffer *)0x0;
  if (iVar4 != 0) {
    puVar6 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x28,0x10);
    if (puVar6 == (undefined8 *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Object",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                         ,0x61,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FRDGBuffer *)(*pcVar2)();
        return pFVar5;
      }
    }
    else {
      puVar6[1] = 0;
      *puVar6 = &
                ___7__TObject_UFUploadData___TBufferScatterUploader_IUFStructuredBufferTraits_Implementation_RendererPrivateUtils_UE___0EA__Implementation_RendererPrivateUtils_UE___FRDGAllocator__6B_
      ;
      puVar6[1] = (this->UploadData).Values.AllocatorInstance.Data;
      (this->UploadData).Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(puVar6 + 2) = (this->UploadData).Values.ArrayNum;
      *(int *)((longlong)puVar6 + 0x14) = (this->UploadData).Values.ArrayMax;
      (this->UploadData).Values.ArrayNum = 0;
      (this->UploadData).Values.ArrayMax = 0;
      puVar6[3] = 0;
      puVar6[3] = (this->UploadData).ScatterOffsets.AllocatorInstance.Data;
      (this->UploadData).ScatterOffsets.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(puVar6 + 4) = (this->UploadData).ScatterOffsets.ArrayNum;
      *(int *)((longlong)puVar6 + 0x24) = (this->UploadData).ScatterOffsets.ArrayMax;
      (this->UploadData).ScatterOffsets.ArrayNum = 0;
      (this->UploadData).ScatterOffsets.ArrayMax = 0;
      puVar8 = puVar6;
    }
    local_38[0] = puVar8;
    if (((undefined8 **)param_1->_padding_ <= local_38) &&
       (local_38 < (undefined8 **)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4)))
    {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FRDGBuffer *)(*pcVar2)();
        return pFVar5;
      }
    }
    iVar4 = (int)param_1->_padding_;
    piVar1 = (int *)((longlong)&param_1->_padding_ + 4);
    if (iVar4 == *piVar1) {
      iVar4 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)&param_1->_padding_,piVar1);
    }
    *(int *)&param_1->_padding_ = iVar4 + 1;
    *(undefined8 **)(param_1->_padding_ + (longlong)iVar4 * 8) = local_38[0];
    this->UploadDataProxy = (FUploadData *)(puVar8 + 1);
    pFVar7 = FStructuredBufferTraits::CreateUploadBuffer<unsigned_int,TSizedDefaultAllocator<32>_>
                       (param_1,L"ScatterUploader.Offsets",
                        (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)(puVar8 + 3));
    param_4->ScatterOffsetsRDG = pFVar7;
    pFVar7 = FStructuredBufferTraits::CreateUploadBuffer<unsigned_int,TSizedDefaultAllocator<32>_>
                       (param_1,L"ScatterUploader.Values",&this->UploadDataProxy->Values);
    FBufferScatterUploader::UploadTo
              ((FBufferScatterUploader *)&this->UploadDataProxy,param_1,pFVar5,
               param_4->ScatterOffsetsRDG,pFVar7,param_4->NumScatters,4,0x40);
  }
  return pFVar5;
}

// ResizeAndUploadTo @ 1454b8330

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGBuffer * __thiscall
UE::RendererPrivateUtils::Implementation::
TBufferScatterUploader<UE::HLSL::FCellBlockData,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits,1>
::ResizeAndUploadTo(TBufferScatterUploader<UE::HLSL::FCellBlockData,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits,1>
                    *this,FRDGBuilder *param_1,
                   TPersistentBuffer<UE::HLSL::FCellBlockData,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits>
                   *param_2,int param_3,FScatterInfo *param_4)

{
  FUploadData **this_00;
  int *piVar1;
  ulonglong uVar2;
  FUploadData *pFVar3;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  FRDGBuffer *pFVar9;
  undefined8 *puVar10;
  FRDGBuffer *pFVar11;
  undefined8 *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  FRDGBufferDesc local_58;
  FRDGBufferDesc local_40;
  
  this_00 = &this->UploadDataProxy;
  if (this->UploadDataProxy != (FUploadData *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("UploadDataProxy == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RendererPrivateUtils.h"
                       ,0x154,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pFVar9 = (FRDGBuffer *)(*pcVar6)();
      return pFVar9;
    }
  }
  if (param_2->field_0x10 != '\0') {
    iVar8 = 1;
    if (param_3 != 0) {
      iVar8 = param_3;
    }
    uVar2 = (ulonglong)(iVar8 - 1) * 2 + 1;
    lVar5 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    param_3 = 1 << ((byte)lVar5 & 0x1f);
  }
  uStack_68 = 0x10109;
  local_70 = 0x20;
  uStack_6c = param_3;
  if (param_3 < *(int *)param_2) {
    uStack_6c = *(uint *)param_2;
  }
  local_58.NumElements = uStack_6c;
  local_58.BytesPerElement = 0x20;
  local_58._12_4_ = uStack_64;
  local_58.Usage = StructuredBuffer|ShaderResource|UnorderedAccess|Static;
  local_60 = 0;
  local_58.Metadata = (FShaderParametersMetadata *)0x0;
  pFVar9 = FPersistentBuffer::ResizeBufferIfNeeded((FPersistentBuffer *)param_2,param_1,&local_58);
  iVar8 = (this->UploadData).ScatterOffsets.ArrayNum;
  param_4->NumScatters = iVar8;
  param_4->ScatterOffsetsRDG = (FRDGBuffer *)0x0;
  if (iVar8 != 0) {
    puVar10 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x28,0x10);
    if (puVar10 == (undefined8 *)0x0) {
      puVar10 = (undefined8 *)0x0;
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Object",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                         ,0x61,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        pFVar9 = (FRDGBuffer *)(*pcVar6)();
        return pFVar9;
      }
    }
    else {
      puVar10[1] = 0;
      *puVar10 = &
                 ___7__TObject_UFUploadData___TBufferScatterUploader_UFCellBlockData_HLSL_UE__UFStructuredBufferTraits_Implementation_RendererPrivateUtils_3__00_Implementation_RendererPrivateUtils_UE___FRDGAllocator__6B_
      ;
      puVar10[1] = (this->UploadData).Values.AllocatorInstance.Data;
      (this->UploadData).Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(puVar10 + 2) = (this->UploadData).Values.ArrayNum;
      *(int *)((longlong)puVar10 + 0x14) = (this->UploadData).Values.ArrayMax;
      (this->UploadData).Values.ArrayNum = 0;
      (this->UploadData).Values.ArrayMax = 0;
      puVar10[3] = 0;
      puVar10[3] = (this->UploadData).ScatterOffsets.AllocatorInstance.Data;
      (this->UploadData).ScatterOffsets.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(puVar10 + 4) = (this->UploadData).ScatterOffsets.ArrayNum;
      *(int *)((longlong)puVar10 + 0x24) = (this->UploadData).ScatterOffsets.ArrayMax;
      (this->UploadData).ScatterOffsets.ArrayNum = 0;
      (this->UploadData).ScatterOffsets.ArrayMax = 0;
    }
    local_78 = puVar10;
    if (((undefined8 **)param_1->_padding_ <= &local_78) &&
       (&local_78 < (undefined8 **)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4))
       ) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        pFVar9 = (FRDGBuffer *)(*pcVar6)();
        return pFVar9;
      }
    }
    iVar8 = (int)param_1->_padding_;
    piVar1 = (int *)((longlong)&param_1->_padding_ + 4);
    if (iVar8 == *piVar1) {
      iVar8 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)&param_1->_padding_,piVar1);
    }
    *(int *)&param_1->_padding_ = iVar8 + 1;
    *(undefined8 **)(param_1->_padding_ + (longlong)iVar8 * 8) = local_78;
    *this_00 = (FUploadData *)(puVar10 + 1);
    pFVar11 = FStructuredBufferTraits::CreateUploadBuffer<unsigned_int,TSizedDefaultAllocator<32>_>
                        (param_1,L"ScatterUploader.Offsets",
                         (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)(puVar10 + 3));
    param_4->ScatterOffsetsRDG = pFVar11;
    pFVar3 = *this_00;
    uStack_68 = 0x10100;
    local_70 = 0x20;
    local_60 = 0;
    uStack_6c = (pFVar3->Values).ArrayNum;
    local_40.NumElements = uStack_6c;
    local_40.BytesPerElement = 0x20;
    local_40._12_4_ = uStack_64;
    local_40.Usage = StructuredBuffer|ShaderResource;
    local_40.Metadata = (FShaderParametersMetadata *)0x0;
    pFVar11 = FRDGBuilder::CreateBuffer(param_1,&local_40,L"ScatterUploader.Values",None);
    pFVar4 = (pFVar3->Values).AllocatorInstance.Data;
    iVar8 = (pFVar3->Values).ArrayNum;
    if (iVar8 < 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        pFVar9 = (FRDGBuffer *)(*pcVar6)();
        return pFVar9;
      }
    }
    FRDGBuilder::QueueBufferUpload(param_1,pFVar11,pFVar4,(longlong)iVar8 << 5,NoCopy);
    FBufferScatterUploader::UploadTo
              ((FBufferScatterUploader *)this_00,param_1,pFVar9,param_4->ScatterOffsetsRDG,pFVar11,
               param_4->NumScatters,0x20,1);
  }
  return pFVar9;
}

// ResizeAndUploadTo @ 1454b8650

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGBuffer * __thiscall
UE::RendererPrivateUtils::Implementation::
TBufferScatterUploader<UE::HLSL::FPackedCellHeader,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits,1>
::ResizeAndUploadTo(TBufferScatterUploader<UE::HLSL::FPackedCellHeader,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits,1>
                    *this,FRDGBuilder *param_1,
                   TPersistentBuffer<UE::HLSL::FPackedCellHeader,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits>
                   *param_2,int param_3,FScatterInfo *param_4)

{
  FUploadData **this_00;
  int *piVar1;
  ulonglong uVar2;
  FUploadData *pFVar3;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  FRDGBuffer *pFVar9;
  undefined8 *puVar10;
  FRDGBuffer *pFVar11;
  undefined8 *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  FRDGBufferDesc local_58;
  FRDGBufferDesc local_40;
  
  this_00 = &this->UploadDataProxy;
  if (this->UploadDataProxy != (FUploadData *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("UploadDataProxy == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RendererPrivateUtils.h"
                       ,0x154,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pFVar9 = (FRDGBuffer *)(*pcVar6)();
      return pFVar9;
    }
  }
  if (param_2->field_0x10 != '\0') {
    iVar8 = 1;
    if (param_3 != 0) {
      iVar8 = param_3;
    }
    uVar2 = (ulonglong)(iVar8 - 1) * 2 + 1;
    lVar5 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    param_3 = 1 << ((byte)lVar5 & 0x1f);
  }
  uStack_68 = 0x10109;
  local_70 = 8;
  uStack_6c = param_3;
  if (param_3 < *(int *)param_2) {
    uStack_6c = *(uint *)param_2;
  }
  local_58.NumElements = uStack_6c;
  local_58.BytesPerElement = 8;
  local_58._12_4_ = uStack_64;
  local_58.Usage = StructuredBuffer|ShaderResource|UnorderedAccess|Static;
  local_60 = 0;
  local_58.Metadata = (FShaderParametersMetadata *)0x0;
  pFVar9 = FPersistentBuffer::ResizeBufferIfNeeded((FPersistentBuffer *)param_2,param_1,&local_58);
  iVar8 = (this->UploadData).ScatterOffsets.ArrayNum;
  param_4->NumScatters = iVar8;
  param_4->ScatterOffsetsRDG = (FRDGBuffer *)0x0;
  if (iVar8 != 0) {
    puVar10 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x28,0x10);
    if (puVar10 == (undefined8 *)0x0) {
      puVar10 = (undefined8 *)0x0;
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Object",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                         ,0x61,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        pFVar9 = (FRDGBuffer *)(*pcVar6)();
        return pFVar9;
      }
    }
    else {
      puVar10[1] = 0;
      *puVar10 = &
                 ___7__TObject_UFUploadData___TBufferScatterUploader_UFPackedCellHeader_HLSL_UE__UFStructuredBufferTraits_Implementation_RendererPrivateUtils_3__00_Implementation_RendererPrivateUtils_UE___FRDGAllocator__6B_
      ;
      puVar10[1] = (this->UploadData).Values.AllocatorInstance.Data;
      (this->UploadData).Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(puVar10 + 2) = (this->UploadData).Values.ArrayNum;
      *(int *)((longlong)puVar10 + 0x14) = (this->UploadData).Values.ArrayMax;
      (this->UploadData).Values.ArrayNum = 0;
      (this->UploadData).Values.ArrayMax = 0;
      puVar10[3] = 0;
      puVar10[3] = (this->UploadData).ScatterOffsets.AllocatorInstance.Data;
      (this->UploadData).ScatterOffsets.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(puVar10 + 4) = (this->UploadData).ScatterOffsets.ArrayNum;
      *(int *)((longlong)puVar10 + 0x24) = (this->UploadData).ScatterOffsets.ArrayMax;
      (this->UploadData).ScatterOffsets.ArrayNum = 0;
      (this->UploadData).ScatterOffsets.ArrayMax = 0;
    }
    local_78 = puVar10;
    if (((undefined8 **)param_1->_padding_ <= &local_78) &&
       (&local_78 < (undefined8 **)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4))
       ) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        pFVar9 = (FRDGBuffer *)(*pcVar6)();
        return pFVar9;
      }
    }
    iVar8 = (int)param_1->_padding_;
    piVar1 = (int *)((longlong)&param_1->_padding_ + 4);
    if (iVar8 == *piVar1) {
      iVar8 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)&param_1->_padding_,piVar1);
    }
    *(int *)&param_1->_padding_ = iVar8 + 1;
    *(undefined8 **)(param_1->_padding_ + (longlong)iVar8 * 8) = local_78;
    *this_00 = (FUploadData *)(puVar10 + 1);
    pFVar11 = FStructuredBufferTraits::CreateUploadBuffer<unsigned_int,TSizedDefaultAllocator<32>_>
                        (param_1,L"ScatterUploader.Offsets",
                         (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)(puVar10 + 3));
    param_4->ScatterOffsetsRDG = pFVar11;
    pFVar3 = *this_00;
    uStack_68 = 0x10100;
    local_70 = 8;
    local_60 = 0;
    uStack_6c = (pFVar3->Values).ArrayNum;
    local_40.NumElements = uStack_6c;
    local_40.BytesPerElement = 8;
    local_40._12_4_ = uStack_64;
    local_40.Usage = StructuredBuffer|ShaderResource;
    local_40.Metadata = (FShaderParametersMetadata *)0x0;
    pFVar11 = FRDGBuilder::CreateBuffer(param_1,&local_40,L"ScatterUploader.Values",None);
    pFVar4 = (pFVar3->Values).AllocatorInstance.Data;
    iVar8 = (pFVar3->Values).ArrayNum;
    if (iVar8 < 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        pFVar9 = (FRDGBuffer *)(*pcVar6)();
        return pFVar9;
      }
    }
    FRDGBuilder::QueueBufferUpload(param_1,pFVar11,pFVar4,(longlong)iVar8 << 3,NoCopy);
    FBufferScatterUploader::UploadTo
              ((FBufferScatterUploader *)this_00,param_1,pFVar9,param_4->ScatterOffsetsRDG,pFVar11,
               param_4->NumScatters,8,1);
  }
  return pFVar9;
}

// ~TBufferScatterUploader<unsigned_int,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,1> @ 145666960

void __thiscall
UE::RendererPrivateUtils::Implementation::
TBufferScatterUploader<unsigned_int,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,1>
::
~TBufferScatterUploader<unsigned_int,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,1>
          (TBufferScatterUploader<unsigned_int,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,1>
           *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->UploadData).ScatterOffsets.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->UploadData).Values.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// ~TBufferScatterUploader<float,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,1> @ 1456669a0

void __thiscall
UE::RendererPrivateUtils::Implementation::
TBufferScatterUploader<float,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,1>::
~TBufferScatterUploader<float,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,1>
          (TBufferScatterUploader<float,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,1>
           *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->UploadData).ScatterOffsets.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->UploadData).Values.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// ~TBufferScatterUploader<FMatrix3x4,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,1> @ 1456669e0

void __thiscall
UE::RendererPrivateUtils::Implementation::
TBufferScatterUploader<FMatrix3x4,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,1>
::
~TBufferScatterUploader<FMatrix3x4,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,1>
          (TBufferScatterUploader<FMatrix3x4,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,1>
           *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->UploadData).ScatterOffsets.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->UploadData).Values.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// ~TBufferScatterUploader<FSkinningHeader,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,1> @ 145666a20

void __thiscall
UE::RendererPrivateUtils::Implementation::
TBufferScatterUploader<FSkinningHeader,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,1>
::
~TBufferScatterUploader<FSkinningHeader,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,1>
          (TBufferScatterUploader<FSkinningHeader,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,1>
           *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->UploadData).ScatterOffsets.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->UploadData).Values.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// Add @ 1456704c0

void __thiscall
UE::RendererPrivateUtils::Implementation::
TBufferScatterUploader<FSkinningHeader,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,1>
::Add(TBufferScatterUploader<FSkinningHeader,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,1>
      *this,FSkinningHeader *param_1,int param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FSkinningHeader *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  int iVar7;
  int local_18 [4];
  
  if (this->UploadDataProxy != (FUploadData *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("UploadDataProxy == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RendererPrivateUtils.h"
                       ,0x116,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar3 = (FSkinningHeader *)(this->UploadData).Values.AllocatorInstance.Data;
  if ((pFVar3 <= param_1) && (param_1 < pFVar3 + (this->UploadData).Values.ArrayMax)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar7 = (this->UploadData).Values.ArrayNum;
  piVar1 = &(this->UploadData).Values.ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x410,(ForAnyElementType *)&this->UploadData,piVar1);
  }
  (this->UploadData).Values.ArrayNum = iVar7 + 1;
  uVar5 = *(undefined8 *)&param_1->field_0x8;
  pFVar2 = (this->UploadData).Values.AllocatorInstance.Data + (longlong)iVar7 * 0x10;
  *(undefined8 *)pFVar2 = *(undefined8 *)param_1;
  *(undefined8 *)(pFVar2 + 8) = uVar5;
  pFVar2 = (this->UploadData).ScatterOffsets.AllocatorInstance.Data;
  local_18[0] = param_2;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 <
      pFVar2 + (longlong)(this->UploadData).ScatterOffsets.ArrayMax * 4)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar7 = (this->UploadData).ScatterOffsets.ArrayNum;
  piVar1 = &(this->UploadData).ScatterOffsets.ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&(this->UploadData).ScatterOffsets.AllocatorInstance,piVar1);
  }
  (this->UploadData).ScatterOffsets.ArrayNum = iVar7 + 1;
  *(int *)((this->UploadData).ScatterOffsets.AllocatorInstance.Data + (longlong)iVar7 * 4) =
       local_18[0];
  return;
}

// AddMultiple_GetRef @ 1456725a0

TArrayView<unsigned_int,int> * __thiscall
UE::RendererPrivateUtils::Implementation::
TBufferScatterUploader<unsigned_int,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,1>
::AddMultiple_GetRef
          (TBufferScatterUploader<unsigned_int,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,1>
           *this,TArrayView<unsigned_int,int> *__return_storage_ptr__,int param_1,int param_2)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TArrayView<unsigned_int,int> *pTVar6;
  int iVar7;
  uint uVar8;
  int local_48 [4];
  
  if ((this->UploadDataProxy != (FUploadData *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("UploadDataProxy == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RendererPrivateUtils.h"
                         ,0x140,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TArrayView<unsigned_int,int> *)(*pcVar3)();
    return pTVar6;
  }
  uVar1 = (this->UploadData).Values.ArrayNum;
  Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,param_2,(ForAnyElementType *)&this->UploadData,&(this->UploadData).Values.ArrayNum,
             &(this->UploadData).Values.ArrayMax);
  iVar7 = 0;
  if (0 < param_2) {
    do {
      pFVar2 = (this->UploadData).ScatterOffsets.AllocatorInstance.Data;
      local_48[0] = iVar7 + param_1;
      if (((pFVar2 <= (FScriptContainerElement *)local_48) &&
          ((FScriptContainerElement *)local_48 <
           pFVar2 + (longlong)(this->UploadData).ScatterOffsets.ArrayMax * 4)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TArrayView<unsigned_int,int> *)(*pcVar3)();
        return pTVar6;
      }
      iVar5 = (this->UploadData).ScatterOffsets.ArrayNum;
      if (iVar5 == (this->UploadData).ScatterOffsets.ArrayMax) {
        iVar5 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&(this->UploadData).ScatterOffsets.AllocatorInstance,
                           &(this->UploadData).ScatterOffsets.ArrayMax);
      }
      iVar7 = iVar7 + 1;
      (this->UploadData).ScatterOffsets.ArrayNum = iVar5 + 1;
      *(int *)((this->UploadData).ScatterOffsets.AllocatorInstance.Data + (longlong)iVar5 * 4) =
           local_48[0];
    } while (iVar7 < param_2);
  }
  uVar8 = 0;
  if ((int)uVar1 < (this->UploadData).Values.ArrayNum) {
    uVar8 = ~uVar1 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TArrayView<unsigned_int,int> *)(*pcVar3)();
    return pTVar6;
  }
  pFVar2 = (this->UploadData).Values.AllocatorInstance.Data;
  __return_storage_ptr__->ArrayNum = param_2;
  __return_storage_ptr__->DataPtr = (uint *)(pFVar2 + (longlong)(int)uVar1 * 4);
  if ((param_2 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TArrayView<unsigned_int,int> *)(*pcVar3)();
    return pTVar6;
  }
  return __return_storage_ptr__;
}

// AddMultiple_GetRef @ 1456727d0

TArrayView<float,int> * __thiscall
UE::RendererPrivateUtils::Implementation::
TBufferScatterUploader<float,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,1>::
AddMultiple_GetRef(TBufferScatterUploader<float,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,1>
                   *this,TArrayView<float,int> *__return_storage_ptr__,int param_1,int param_2)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TArrayView<float,int> *pTVar6;
  int iVar7;
  uint uVar8;
  int local_48 [4];
  
  if ((this->UploadDataProxy != (FUploadData *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("UploadDataProxy == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RendererPrivateUtils.h"
                         ,0x140,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TArrayView<float,int> *)(*pcVar3)();
    return pTVar6;
  }
  uVar1 = (this->UploadData).Values.ArrayNum;
  Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,param_2,(ForAnyElementType *)&this->UploadData,&(this->UploadData).Values.ArrayNum,
             &(this->UploadData).Values.ArrayMax);
  iVar7 = 0;
  if (0 < param_2) {
    do {
      pFVar2 = (this->UploadData).ScatterOffsets.AllocatorInstance.Data;
      local_48[0] = iVar7 + param_1;
      if (((pFVar2 <= (FScriptContainerElement *)local_48) &&
          ((FScriptContainerElement *)local_48 <
           pFVar2 + (longlong)(this->UploadData).ScatterOffsets.ArrayMax * 4)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TArrayView<float,int> *)(*pcVar3)();
        return pTVar6;
      }
      iVar5 = (this->UploadData).ScatterOffsets.ArrayNum;
      if (iVar5 == (this->UploadData).ScatterOffsets.ArrayMax) {
        iVar5 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&(this->UploadData).ScatterOffsets.AllocatorInstance,
                           &(this->UploadData).ScatterOffsets.ArrayMax);
      }
      iVar7 = iVar7 + 1;
      (this->UploadData).ScatterOffsets.ArrayNum = iVar5 + 1;
      *(int *)((this->UploadData).ScatterOffsets.AllocatorInstance.Data + (longlong)iVar5 * 4) =
           local_48[0];
    } while (iVar7 < param_2);
  }
  uVar8 = 0;
  if ((int)uVar1 < (this->UploadData).Values.ArrayNum) {
    uVar8 = ~uVar1 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TArrayView<float,int> *)(*pcVar3)();
    return pTVar6;
  }
  pFVar2 = (this->UploadData).Values.AllocatorInstance.Data;
  __return_storage_ptr__->ArrayNum = param_2;
  __return_storage_ptr__->DataPtr = (float *)(pFVar2 + (longlong)(int)uVar1 * 4);
  if ((param_2 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TArrayView<float,int> *)(*pcVar3)();
    return pTVar6;
  }
  return __return_storage_ptr__;
}

// AddMultiple_GetRef @ 145672a00

TArrayView<FMatrix3x4,int> * __thiscall
UE::RendererPrivateUtils::Implementation::
TBufferScatterUploader<FMatrix3x4,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,1>
::AddMultiple_GetRef
          (TBufferScatterUploader<FMatrix3x4,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,1>
           *this,TArrayView<FMatrix3x4,int> *__return_storage_ptr__,int param_1,int param_2)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TArrayView<FMatrix3x4,int> *pTVar6;
  int iVar7;
  uint uVar8;
  int local_48 [4];
  
  if ((this->UploadDataProxy != (FUploadData *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("UploadDataProxy == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RendererPrivateUtils.h"
                         ,0x140,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TArrayView<FMatrix3x4,int> *)(*pcVar3)();
    return pTVar6;
  }
  uVar1 = (this->UploadData).Values.ArrayNum;
  Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x30,0x10,param_2,(ForAnyElementType *)&this->UploadData,
             &(this->UploadData).Values.ArrayNum,&(this->UploadData).Values.ArrayMax);
  iVar7 = 0;
  if (0 < param_2) {
    do {
      pFVar2 = (this->UploadData).ScatterOffsets.AllocatorInstance.Data;
      local_48[0] = iVar7 + param_1;
      if (((pFVar2 <= (FScriptContainerElement *)local_48) &&
          ((FScriptContainerElement *)local_48 <
           pFVar2 + (longlong)(this->UploadData).ScatterOffsets.ArrayMax * 4)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TArrayView<FMatrix3x4,int> *)(*pcVar3)();
        return pTVar6;
      }
      iVar5 = (this->UploadData).ScatterOffsets.ArrayNum;
      if (iVar5 == (this->UploadData).ScatterOffsets.ArrayMax) {
        iVar5 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&(this->UploadData).ScatterOffsets.AllocatorInstance,
                           &(this->UploadData).ScatterOffsets.ArrayMax);
      }
      iVar7 = iVar7 + 1;
      (this->UploadData).ScatterOffsets.ArrayNum = iVar5 + 1;
      *(int *)((this->UploadData).ScatterOffsets.AllocatorInstance.Data + (longlong)iVar5 * 4) =
           local_48[0];
    } while (iVar7 < param_2);
  }
  uVar8 = 0;
  if ((int)uVar1 < (this->UploadData).Values.ArrayNum) {
    uVar8 = ~uVar1 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TArrayView<FMatrix3x4,int> *)(*pcVar3)();
    return pTVar6;
  }
  __return_storage_ptr__->ArrayNum = param_2;
  __return_storage_ptr__->DataPtr =
       (FMatrix3x4 *)
       ((this->UploadData).Values.AllocatorInstance.Data + (longlong)(int)uVar1 * 0x30);
  if ((param_2 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TArrayView<FMatrix3x4,int> *)(*pcVar3)();
    return pTVar6;
  }
  return __return_storage_ptr__;
}

// ResizeAndUploadTo @ 14569dbe0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGBuffer * __thiscall
UE::RendererPrivateUtils::Implementation::
TBufferScatterUploader<unsigned_int,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,1>
::ResizeAndUploadTo(TBufferScatterUploader<unsigned_int,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,1>
                    *this,FRDGBuilder *param_1,
                   TPersistentBuffer<unsigned_int,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits>
                   *param_2,int param_3,FScatterInfo *param_4)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FRDGBuffer *pFVar5;
  undefined8 *puVar6;
  FRDGBuffer *pFVar7;
  undefined8 *puVar8;
  undefined8 *local_38 [2];
  
  if (this->UploadDataProxy != (FUploadData *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("UploadDataProxy == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RendererPrivateUtils.h"
                       ,0x154,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FRDGBuffer *)(*pcVar2)();
      return pFVar5;
    }
  }
  pFVar5 = TPersistentBuffer<unsigned_int,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits>
           ::ResizeBufferIfNeeded(param_2,param_1,param_3);
  iVar4 = (this->UploadData).ScatterOffsets.ArrayNum;
  puVar8 = (undefined8 *)0x0;
  param_4->NumScatters = iVar4;
  param_4->ScatterOffsetsRDG = (FRDGBuffer *)0x0;
  if (iVar4 != 0) {
    puVar6 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x28,0x10);
    if (puVar6 == (undefined8 *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Object",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                         ,0x61,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FRDGBuffer *)(*pcVar2)();
        return pFVar5;
      }
    }
    else {
      puVar6[1] = 0;
      *puVar6 = &
                ___7__TObject_UFUploadData___TBufferScatterUploader_IUFByteAddressBufferTraits_Implementation_RendererPrivateUtils_UE___00_Implementation_RendererPrivateUtils_UE___FRDGAllocator__6B_
      ;
      puVar6[1] = (this->UploadData).Values.AllocatorInstance.Data;
      (this->UploadData).Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(puVar6 + 2) = (this->UploadData).Values.ArrayNum;
      *(int *)((longlong)puVar6 + 0x14) = (this->UploadData).Values.ArrayMax;
      (this->UploadData).Values.ArrayNum = 0;
      (this->UploadData).Values.ArrayMax = 0;
      puVar6[3] = 0;
      puVar6[3] = (this->UploadData).ScatterOffsets.AllocatorInstance.Data;
      (this->UploadData).ScatterOffsets.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(puVar6 + 4) = (this->UploadData).ScatterOffsets.ArrayNum;
      *(int *)((longlong)puVar6 + 0x24) = (this->UploadData).ScatterOffsets.ArrayMax;
      (this->UploadData).ScatterOffsets.ArrayNum = 0;
      (this->UploadData).ScatterOffsets.ArrayMax = 0;
      puVar8 = puVar6;
    }
    local_38[0] = puVar8;
    if (((undefined8 **)param_1->_padding_ <= local_38) &&
       (local_38 < (undefined8 **)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4)))
    {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FRDGBuffer *)(*pcVar2)();
        return pFVar5;
      }
    }
    iVar4 = (int)param_1->_padding_;
    piVar1 = (int *)((longlong)&param_1->_padding_ + 4);
    if (iVar4 == *piVar1) {
      iVar4 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)&param_1->_padding_,piVar1);
    }
    *(int *)&param_1->_padding_ = iVar4 + 1;
    *(undefined8 **)(param_1->_padding_ + (longlong)iVar4 * 8) = local_38[0];
    this->UploadDataProxy = (FUploadData *)(puVar8 + 1);
    pFVar7 = FByteAddressBufferTraits::
             CreateUploadBuffer<TArray<unsigned_int,TSizedDefaultAllocator<32>_>_&>
                       (param_1,L"ScatterUploader.Offsets",
                        (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)(puVar8 + 3));
    param_4->ScatterOffsetsRDG = pFVar7;
    pFVar7 = FByteAddressBufferTraits::
             CreateUploadBuffer<TArray<unsigned_int,TSizedDefaultAllocator<32>_>_&>
                       (param_1,L"ScatterUploader.Values",&this->UploadDataProxy->Values);
    FBufferScatterUploader::UploadTo
              ((FBufferScatterUploader *)&this->UploadDataProxy,param_1,pFVar5,
               param_4->ScatterOffsetsRDG,pFVar7,param_4->NumScatters,4,-1);
  }
  return pFVar5;
}

// ResizeAndUploadTo @ 14569de20

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGBuffer * __thiscall
UE::RendererPrivateUtils::Implementation::
TBufferScatterUploader<float,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,1>::
ResizeAndUploadTo(TBufferScatterUploader<float,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,1>
                  *this,FRDGBuilder *param_1,
                 TPersistentBuffer<float,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits>
                 *param_2,int param_3,FScatterInfo *param_4)

{
  FUploadData **this_00;
  int *piVar1;
  uint uVar2;
  FUploadData *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FRDGBuffer *pFVar8;
  undefined8 *puVar9;
  FRDGBuffer *pFVar10;
  undefined8 *puVar11;
  undefined8 *local_68;
  undefined4 local_60;
  uint uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  FRDGBufferDesc local_48;
  
  this_00 = &this->UploadDataProxy;
  if (this->UploadDataProxy != (FUploadData *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("UploadDataProxy == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RendererPrivateUtils.h"
                       ,0x154,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar8 = (FRDGBuffer *)(*pcVar5)();
      return pFVar8;
    }
  }
  pFVar8 = TPersistentBuffer<float,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits>
           ::ResizeBufferIfNeeded(param_2,param_1,param_3);
  iVar7 = (this->UploadData).ScatterOffsets.ArrayNum;
  puVar11 = (undefined8 *)0x0;
  param_4->NumScatters = iVar7;
  param_4->ScatterOffsetsRDG = (FRDGBuffer *)0x0;
  if (iVar7 != 0) {
    puVar9 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x28,0x10);
    if (puVar9 == (undefined8 *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Object",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                         ,0x61,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pFVar8 = (FRDGBuffer *)(*pcVar5)();
        return pFVar8;
      }
    }
    else {
      puVar9[1] = 0;
      *puVar9 = &
                ___7__TObject_UFUploadData___TBufferScatterUploader_MUFByteAddressBufferTraits_Implementation_RendererPrivateUtils_UE___00_Implementation_RendererPrivateUtils_UE___FRDGAllocator__6B_
      ;
      puVar9[1] = (this->UploadData).Values.AllocatorInstance.Data;
      (this->UploadData).Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(puVar9 + 2) = (this->UploadData).Values.ArrayNum;
      *(int *)((longlong)puVar9 + 0x14) = (this->UploadData).Values.ArrayMax;
      (this->UploadData).Values.ArrayNum = 0;
      (this->UploadData).Values.ArrayMax = 0;
      puVar9[3] = 0;
      puVar9[3] = (this->UploadData).ScatterOffsets.AllocatorInstance.Data;
      (this->UploadData).ScatterOffsets.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(puVar9 + 4) = (this->UploadData).ScatterOffsets.ArrayNum;
      *(int *)((longlong)puVar9 + 0x24) = (this->UploadData).ScatterOffsets.ArrayMax;
      (this->UploadData).ScatterOffsets.ArrayNum = 0;
      (this->UploadData).ScatterOffsets.ArrayMax = 0;
      puVar11 = puVar9;
    }
    local_68 = puVar11;
    if (((undefined8 **)param_1->_padding_ <= &local_68) &&
       (&local_68 < (undefined8 **)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4))
       ) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pFVar8 = (FRDGBuffer *)(*pcVar5)();
        return pFVar8;
      }
    }
    iVar7 = (int)param_1->_padding_;
    piVar1 = (int *)((longlong)&param_1->_padding_ + 4);
    if (iVar7 == *piVar1) {
      iVar7 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)&param_1->_padding_,piVar1);
    }
    *(int *)&param_1->_padding_ = iVar7 + 1;
    *(undefined8 **)(param_1->_padding_ + (longlong)iVar7 * 8) = local_68;
    *this_00 = (FUploadData *)(puVar11 + 1);
    pFVar10 = FByteAddressBufferTraits::
              CreateUploadBuffer<TArray<unsigned_int,TSizedDefaultAllocator<32>_>_&>
                        (param_1,L"ScatterUploader.Offsets",
                         (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)(puVar11 + 3));
    param_4->ScatterOffsetsRDG = pFVar10;
    pFVar3 = *this_00;
    uStack_58 = 0x10110;
    local_60 = 4;
    local_50 = 0;
    uVar2 = (pFVar3->Values).ArrayNum;
    uStack_5c = uVar2 & 0x3fffffff;
    local_48._0_8_ = CONCAT44(uVar2,4) & 0x3fffffffffffffff;
    local_48._12_4_ = uStack_54;
    local_48.Usage = StructuredBuffer|ShaderResource|ByteAddressBuffer;
    local_48.Metadata = (FShaderParametersMetadata *)0x0;
    pFVar10 = FRDGBuilder::CreateBuffer(param_1,&local_48,L"ScatterUploader.Values",None);
    pFVar4 = (pFVar3->Values).AllocatorInstance.Data;
    iVar7 = (pFVar3->Values).ArrayNum;
    if (iVar7 < 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pFVar8 = (FRDGBuffer *)(*pcVar5)();
        return pFVar8;
      }
    }
    FRDGBuilder::QueueBufferUpload(param_1,pFVar10,pFVar4,(longlong)iVar7 << 2,None);
    FBufferScatterUploader::UploadTo
              ((FBufferScatterUploader *)this_00,param_1,pFVar8,param_4->ScatterOffsetsRDG,pFVar10,
               param_4->NumScatters,4,-1);
  }
  return pFVar8;
}

// ResizeAndUploadTo @ 14569e100

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGBuffer * __thiscall
UE::RendererPrivateUtils::Implementation::
TBufferScatterUploader<FMatrix3x4,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,1>
::ResizeAndUploadTo(TBufferScatterUploader<FMatrix3x4,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,1>
                    *this,FRDGBuilder *param_1,
                   TPersistentBuffer<FMatrix3x4,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits>
                   *param_2,int param_3,FScatterInfo *param_4)

{
  FUploadData **this_00;
  int *piVar1;
  FUploadData *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FRDGBuffer *pFVar7;
  undefined8 *puVar8;
  FRDGBuffer *pFVar9;
  undefined8 *puVar10;
  undefined8 *local_68;
  undefined4 local_60;
  uint uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  FRDGBufferDesc local_48;
  
  this_00 = &this->UploadDataProxy;
  if (this->UploadDataProxy != (FUploadData *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("UploadDataProxy == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RendererPrivateUtils.h"
                       ,0x154,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FRDGBuffer *)(*pcVar4)();
      return pFVar7;
    }
  }
  pFVar7 = TPersistentBuffer<FMatrix3x4,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits>
           ::ResizeBufferIfNeeded(param_2,param_1,param_3);
  iVar6 = (this->UploadData).ScatterOffsets.ArrayNum;
  puVar10 = (undefined8 *)0x0;
  param_4->NumScatters = iVar6;
  param_4->ScatterOffsetsRDG = (FRDGBuffer *)0x0;
  if (iVar6 != 0) {
    puVar8 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x28,0x10);
    if (puVar8 == (undefined8 *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Object",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                         ,0x61,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar7 = (FRDGBuffer *)(*pcVar4)();
        return pFVar7;
      }
    }
    else {
      puVar8[1] = 0;
      *puVar8 = &
                ___7__TObject_UFUploadData___TBufferScatterUploader_UFMatrix3x4__UFByteAddressBufferTraits_Implementation_RendererPrivateUtils_UE___00_Implementation_RendererPrivateUtils_UE___FRDGAllocator__6B_
      ;
      puVar8[1] = (this->UploadData).Values.AllocatorInstance.Data;
      (this->UploadData).Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(puVar8 + 2) = (this->UploadData).Values.ArrayNum;
      *(int *)((longlong)puVar8 + 0x14) = (this->UploadData).Values.ArrayMax;
      (this->UploadData).Values.ArrayNum = 0;
      (this->UploadData).Values.ArrayMax = 0;
      puVar8[3] = 0;
      puVar8[3] = (this->UploadData).ScatterOffsets.AllocatorInstance.Data;
      (this->UploadData).ScatterOffsets.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(puVar8 + 4) = (this->UploadData).ScatterOffsets.ArrayNum;
      *(int *)((longlong)puVar8 + 0x24) = (this->UploadData).ScatterOffsets.ArrayMax;
      (this->UploadData).ScatterOffsets.ArrayNum = 0;
      (this->UploadData).ScatterOffsets.ArrayMax = 0;
      puVar10 = puVar8;
    }
    local_68 = puVar10;
    if (((undefined8 **)param_1->_padding_ <= &local_68) &&
       (&local_68 < (undefined8 **)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4))
       ) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar7 = (FRDGBuffer *)(*pcVar4)();
        return pFVar7;
      }
    }
    iVar6 = (int)param_1->_padding_;
    piVar1 = (int *)((longlong)&param_1->_padding_ + 4);
    if (iVar6 == *piVar1) {
      iVar6 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)&param_1->_padding_,piVar1);
    }
    *(int *)&param_1->_padding_ = iVar6 + 1;
    *(undefined8 **)(param_1->_padding_ + (longlong)iVar6 * 8) = local_68;
    *this_00 = (FUploadData *)(puVar10 + 1);
    pFVar9 = FByteAddressBufferTraits::
             CreateUploadBuffer<TArray<unsigned_int,TSizedDefaultAllocator<32>_>_&>
                       (param_1,L"ScatterUploader.Offsets",
                        (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)(puVar10 + 3));
    param_4->ScatterOffsetsRDG = pFVar9;
    pFVar2 = *this_00;
    uStack_58 = 0x10110;
    local_60 = 4;
    local_50 = 0;
    local_48.Metadata = (FShaderParametersMetadata *)0x0;
    uStack_5c = (uint)((pFVar2->Values).ArrayNum * 0x30) >> 2;
    local_48.NumElements = uStack_5c;
    local_48.BytesPerElement = 4;
    local_48._12_4_ = uStack_54;
    local_48.Usage = StructuredBuffer|ShaderResource|ByteAddressBuffer;
    pFVar9 = FRDGBuilder::CreateBuffer(param_1,&local_48,L"ScatterUploader.Values",None);
    pFVar3 = (pFVar2->Values).AllocatorInstance.Data;
    iVar6 = (pFVar2->Values).ArrayNum;
    if (iVar6 < 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar7 = (FRDGBuffer *)(*pcVar4)();
        return pFVar7;
      }
    }
    FRDGBuilder::QueueBufferUpload(param_1,pFVar9,pFVar3,(longlong)iVar6 * 0x30,None);
    FBufferScatterUploader::UploadTo
              ((FBufferScatterUploader *)this_00,param_1,pFVar7,param_4->ScatterOffsetsRDG,pFVar9,
               param_4->NumScatters,0x30,-1);
  }
  return pFVar7;
}

// ResizeAndUploadTo @ 14569e3e0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGBuffer * __thiscall
UE::RendererPrivateUtils::Implementation::
TBufferScatterUploader<FSkinningHeader,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,1>
::ResizeAndUploadTo(TBufferScatterUploader<FSkinningHeader,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,1>
                    *this,FRDGBuilder *param_1,
                   TPersistentBuffer<FSkinningHeader,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits>
                   *param_2,int param_3,FScatterInfo *param_4)

{
  FUploadData **this_00;
  int *piVar1;
  FUploadData *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FRDGBuffer *pFVar7;
  undefined8 *puVar8;
  FRDGBuffer *pFVar9;
  undefined8 *puVar10;
  undefined8 *local_68;
  undefined4 local_60;
  uint uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  FRDGBufferDesc local_48;
  
  this_00 = &this->UploadDataProxy;
  if (this->UploadDataProxy != (FUploadData *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("UploadDataProxy == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RendererPrivateUtils.h"
                       ,0x154,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FRDGBuffer *)(*pcVar4)();
      return pFVar7;
    }
  }
  pFVar7 = TPersistentBuffer<FSkinningHeader,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits>
           ::ResizeBufferIfNeeded(param_2,param_1,param_3);
  iVar6 = (this->UploadData).ScatterOffsets.ArrayNum;
  puVar10 = (undefined8 *)0x0;
  param_4->NumScatters = iVar6;
  param_4->ScatterOffsetsRDG = (FRDGBuffer *)0x0;
  if (iVar6 != 0) {
    puVar8 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x28,0x10);
    if (puVar8 == (undefined8 *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Object",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                         ,0x61,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar7 = (FRDGBuffer *)(*pcVar4)();
        return pFVar7;
      }
    }
    else {
      puVar8[1] = 0;
      *puVar8 = &
                ___7__TObject_UFUploadData___TBufferScatterUploader_UFSkinningHeader__UFByteAddressBufferTraits_Implementation_RendererPrivateUtils_UE___00_Implementation_RendererPrivateUtils_UE___FRDGAllocator__6B_
      ;
      puVar8[1] = (this->UploadData).Values.AllocatorInstance.Data;
      (this->UploadData).Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(puVar8 + 2) = (this->UploadData).Values.ArrayNum;
      *(int *)((longlong)puVar8 + 0x14) = (this->UploadData).Values.ArrayMax;
      (this->UploadData).Values.ArrayNum = 0;
      (this->UploadData).Values.ArrayMax = 0;
      puVar8[3] = 0;
      puVar8[3] = (this->UploadData).ScatterOffsets.AllocatorInstance.Data;
      (this->UploadData).ScatterOffsets.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(puVar8 + 4) = (this->UploadData).ScatterOffsets.ArrayNum;
      *(int *)((longlong)puVar8 + 0x24) = (this->UploadData).ScatterOffsets.ArrayMax;
      (this->UploadData).ScatterOffsets.ArrayNum = 0;
      (this->UploadData).ScatterOffsets.ArrayMax = 0;
      puVar10 = puVar8;
    }
    local_68 = puVar10;
    if (((undefined8 **)param_1->_padding_ <= &local_68) &&
       (&local_68 < (undefined8 **)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4))
       ) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar7 = (FRDGBuffer *)(*pcVar4)();
        return pFVar7;
      }
    }
    iVar6 = (int)param_1->_padding_;
    piVar1 = (int *)((longlong)&param_1->_padding_ + 4);
    if (iVar6 == *piVar1) {
      iVar6 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)&param_1->_padding_,piVar1);
    }
    *(int *)&param_1->_padding_ = iVar6 + 1;
    *(undefined8 **)(param_1->_padding_ + (longlong)iVar6 * 8) = local_68;
    *this_00 = (FUploadData *)(puVar10 + 1);
    pFVar9 = FByteAddressBufferTraits::
             CreateUploadBuffer<TArray<unsigned_int,TSizedDefaultAllocator<32>_>_&>
                       (param_1,L"ScatterUploader.Offsets",
                        (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)(puVar10 + 3));
    param_4->ScatterOffsetsRDG = pFVar9;
    pFVar2 = *this_00;
    uStack_58 = 0x10110;
    local_60 = 4;
    local_50 = 0;
    uStack_5c = ((pFVar2->Values).ArrayNum & 0xfffffffU) << 2;
    local_48.NumElements = uStack_5c;
    local_48.BytesPerElement = 4;
    local_48._12_4_ = uStack_54;
    local_48.Usage = StructuredBuffer|ShaderResource|ByteAddressBuffer;
    local_48.Metadata = (FShaderParametersMetadata *)0x0;
    pFVar9 = FRDGBuilder::CreateBuffer(param_1,&local_48,L"ScatterUploader.Values",None);
    pFVar3 = (pFVar2->Values).AllocatorInstance.Data;
    iVar6 = (pFVar2->Values).ArrayNum;
    if (iVar6 < 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar7 = (FRDGBuffer *)(*pcVar4)();
        return pFVar7;
      }
    }
    FRDGBuilder::QueueBufferUpload(param_1,pFVar9,pFVar3,(longlong)iVar6 << 4,None);
    FBufferScatterUploader::UploadTo
              ((FBufferScatterUploader *)this_00,param_1,pFVar7,param_4->ScatterOffsetsRDG,pFVar9,
               param_4->NumScatters,0x10,-1);
  }
  return pFVar7;
}

