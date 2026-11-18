// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicWind
// Functions: 3

// ~TBufferScatterUploader<UE::HLSL::FDynamicWindBoneData,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,1> @ 14da4d4f0

void __thiscall
UE::RendererPrivateUtils::Implementation::
TBufferScatterUploader<UE::HLSL::FDynamicWindBoneData,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,1>
::
~TBufferScatterUploader<UE::HLSL::FDynamicWindBoneData,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,1>
          (TBufferScatterUploader<UE::HLSL::FDynamicWindBoneData,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,1>
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

// AddMultiple_GetRef @ 14da4e850

TArrayView<UE::HLSL::FDynamicWindBoneData,int> * __thiscall
UE::RendererPrivateUtils::Implementation::
TBufferScatterUploader<UE::HLSL::FDynamicWindBoneData,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,1>
::AddMultiple_GetRef
          (TBufferScatterUploader<UE::HLSL::FDynamicWindBoneData,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,1>
           *this,TArrayView<UE::HLSL::FDynamicWindBoneData,int> *__return_storage_ptr__,int param_1,
          int param_2)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TArrayView<UE::HLSL::FDynamicWindBoneData,int> *pTVar6;
  int iVar7;
  uint uVar8;
  int local_48 [4];
  
  if ((this->UploadDataProxy != (FUploadData *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("UploadDataProxy == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RendererPrivateUtils.h"
                         ,0x140,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TArrayView<UE::HLSL::FDynamicWindBoneData,int> *)(*pcVar3)();
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
        pTVar6 = (TArrayView<UE::HLSL::FDynamicWindBoneData,int> *)(*pcVar3)();
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
    pTVar6 = (TArrayView<UE::HLSL::FDynamicWindBoneData,int> *)(*pcVar3)();
    return pTVar6;
  }
  __return_storage_ptr__->ArrayNum = param_2;
  __return_storage_ptr__->DataPtr =
       (FDynamicWindBoneData *)
       ((this->UploadData).Values.AllocatorInstance.Data + (longlong)(int)uVar1 * 0x30);
  if ((param_2 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TArrayView<UE::HLSL::FDynamicWindBoneData,int> *)(*pcVar3)();
    return pTVar6;
  }
  return __return_storage_ptr__;
}

// ResizeAndUploadTo @ 14da53590

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGBuffer * __thiscall
UE::RendererPrivateUtils::Implementation::
TBufferScatterUploader<UE::HLSL::FDynamicWindBoneData,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,1>
::ResizeAndUploadTo(TBufferScatterUploader<UE::HLSL::FDynamicWindBoneData,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,1>
                    *this,FRDGBuilder *param_1,
                   TPersistentBuffer<UE::HLSL::FDynamicWindBoneData,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits>
                   *param_2,int param_3,FScatterInfo *param_4)

{
  FUploadData **this_00;
  int *piVar1;
  ulonglong uVar2;
  void *pvVar3;
  FUploadData *pFVar4;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  FRDGBuffer *pFVar10;
  undefined8 *puVar11;
  FRDGBuffer *pFVar12;
  undefined4 uStack_8c;
  undefined8 *local_80;
  FRDGBufferDesc local_78;
  FRDGBufferDesc local_60;
  FRDGBufferDesc local_48;
  
  this_00 = &this->UploadDataProxy;
  if ((this->UploadDataProxy != (FUploadData *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("UploadDataProxy == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RendererPrivateUtils.h"
                         ,0x154,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    pFVar10 = (FRDGBuffer *)(*pcVar7)();
    return pFVar10;
  }
  if (param_2->field_0x10 != '\0') {
    iVar9 = 1;
    if (param_3 != 0) {
      iVar9 = param_3;
    }
    uVar2 = (ulonglong)(iVar9 - 1) * 2 + 1;
    lVar6 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    param_3 = 1 << ((byte)lVar6 & 0x1f);
  }
  if (param_3 < *(int *)param_2) {
    param_3 = *(int *)param_2;
  }
  local_78.Metadata = (FShaderParametersMetadata *)0x0;
  local_78.NumElements = (param_3 * 3 & 0xfffffffU) << 2;
  local_78.BytesPerElement = 4;
  local_78._12_4_ = uStack_8c;
  local_78.Usage = StructuredBuffer|ShaderResource|ByteAddressBuffer|UnorderedAccess|Static;
  pFVar10 = FPersistentBuffer::ResizeBufferIfNeeded((FPersistentBuffer *)param_2,param_1,&local_78);
  iVar9 = (this->UploadData).ScatterOffsets.ArrayNum;
  param_4->NumScatters = iVar9;
  param_4->ScatterOffsetsRDG = (FRDGBuffer *)0x0;
  if (iVar9 != 0) {
    puVar11 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x28,0x10);
    if (puVar11 == (undefined8 *)0x0) {
      puVar11 = (undefined8 *)0x0;
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Object",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                         ,0x61,L"");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        pFVar10 = (FRDGBuffer *)(*pcVar7)();
        return pFVar10;
      }
    }
    else {
      puVar11[1] = 0;
      *puVar11 = &
                 ___7__TObject_UFUploadData___TBufferScatterUploader_UFDynamicWindBoneData_HLSL_UE__UFByteAddressBufferTraits_Implementation_RendererPrivateUtils_3__00_Implementation_RendererPrivateUtils_UE___FRDGAllocator__6B_
      ;
      puVar11[1] = (this->UploadData).Values.AllocatorInstance.Data;
      (this->UploadData).Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(puVar11 + 2) = (this->UploadData).Values.ArrayNum;
      *(int *)((longlong)puVar11 + 0x14) = (this->UploadData).Values.ArrayMax;
      (this->UploadData).Values.ArrayNum = 0;
      (this->UploadData).Values.ArrayMax = 0;
      puVar11[3] = 0;
      puVar11[3] = (this->UploadData).ScatterOffsets.AllocatorInstance.Data;
      (this->UploadData).ScatterOffsets.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(puVar11 + 4) = (this->UploadData).ScatterOffsets.ArrayNum;
      *(int *)((longlong)puVar11 + 0x24) = (this->UploadData).ScatterOffsets.ArrayMax;
      (this->UploadData).ScatterOffsets.ArrayNum = 0;
      (this->UploadData).ScatterOffsets.ArrayMax = 0;
    }
    local_80 = puVar11;
    if ((((undefined8 **)param_1->_padding_ <= &local_80) &&
        (&local_80 < (undefined8 **)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4)
        )) && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar8)) {
      pcVar7 = (code *)swi(3);
      pFVar10 = (FRDGBuffer *)(*pcVar7)();
      return pFVar10;
    }
    iVar9 = (int)param_1->_padding_;
    piVar1 = (int *)((longlong)&param_1->_padding_ + 4);
    if (iVar9 == *piVar1) {
      iVar9 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)&param_1->_padding_,piVar1);
    }
    *(int *)&param_1->_padding_ = iVar9 + 1;
    *(undefined8 **)(param_1->_padding_ + (longlong)iVar9 * 8) = local_80;
    *this_00 = (FUploadData *)(puVar11 + 1);
    local_60.Metadata = (FShaderParametersMetadata *)0x0;
    local_60._0_8_ = CONCAT44(*(undefined4 *)(puVar11 + 4),4) & 0x3fffffffffffffff;
    local_60._12_4_ = uStack_8c;
    local_60.Usage = StructuredBuffer|ShaderResource|ByteAddressBuffer;
    pFVar12 = FRDGBuilder::CreateBuffer(param_1,&local_60,L"ScatterUploader.Offsets",None);
    iVar9 = *(int *)(puVar11 + 4);
    pvVar3 = (void *)puVar11[3];
    if ((iVar9 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      pFVar10 = (FRDGBuffer *)(*pcVar7)();
      return pFVar10;
    }
    FRDGBuilder::QueueBufferUpload(param_1,pFVar12,pvVar3,(longlong)iVar9 << 2,None);
    param_4->ScatterOffsetsRDG = pFVar12;
    pFVar4 = *this_00;
    local_48.Metadata = (FShaderParametersMetadata *)0x0;
    local_48.NumElements = (uint)((pFVar4->Values).ArrayNum * 0x30) >> 2;
    local_48.BytesPerElement = 4;
    local_48._12_4_ = uStack_8c;
    local_48.Usage = StructuredBuffer|ShaderResource|ByteAddressBuffer;
    pFVar12 = FRDGBuilder::CreateBuffer(param_1,&local_48,L"ScatterUploader.Values",None);
    pFVar5 = (pFVar4->Values).AllocatorInstance.Data;
    iVar9 = (pFVar4->Values).ArrayNum;
    if ((iVar9 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      pFVar10 = (FRDGBuffer *)(*pcVar7)();
      return pFVar10;
    }
    FRDGBuilder::QueueBufferUpload(param_1,pFVar12,pFVar5,(longlong)iVar9 * 0x30,None);
    FBufferScatterUploader::UploadTo
              ((FBufferScatterUploader *)this_00,param_1,pFVar10,param_4->ScatterOffsetsRDG,pFVar12,
               param_4->NumScatters,0x30,-1);
  }
  return pFVar10;
}

