// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicWind
// Functions: 4

// AllocObject<UE::RendererPrivateUtils::Implementation::TBufferScatterUploader<UE::HLSL::FDynamicWindBoneData,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,1>::FUploadData,UE::RendererPrivateUtils::Implementation::TBufferScatterUploader<UE::HLSL::FDynamicWindBoneData,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,1>::FUploadData> @ 14da4b020

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FUploadData * __thiscall
FRDGBuilder::
AllocObject<UE::RendererPrivateUtils::Implementation::TBufferScatterUploader<UE::HLSL::FDynamicWindBoneData,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,1>::FUploadData,UE::RendererPrivateUtils::Implementation::TBufferScatterUploader<UE::HLSL::FDynamicWindBoneData,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,1>::FUploadData>
          (FRDGBuilder *this,FUploadData *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  FUploadData *pFVar6;
  undefined8 *puVar7;
  undefined8 *local_18 [2];
  
  puVar5 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,0x28,0x10);
  puVar7 = (undefined8 *)0x0;
  if (puVar5 == (undefined8 *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FUploadData *)(*pcVar2)();
      return pFVar6;
    }
  }
  else {
    puVar5[1] = 0;
    *puVar5 = &
              ___7__TObject_UFUploadData___TBufferScatterUploader_UFDynamicWindBoneData_HLSL_UE__UFByteAddressBufferTraits_Implementation_RendererPrivateUtils_3__00_Implementation_RendererPrivateUtils_UE___FRDGAllocator__6B_
    ;
    puVar5[1] = (param_1->Values).AllocatorInstance.Data;
    (param_1->Values).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(puVar5 + 2) = (param_1->Values).ArrayNum;
    *(int *)((longlong)puVar5 + 0x14) = (param_1->Values).ArrayMax;
    (param_1->Values).ArrayNum = 0;
    (param_1->Values).ArrayMax = 0;
    puVar5[3] = 0;
    puVar5[3] = (param_1->ScatterOffsets).AllocatorInstance.Data;
    (param_1->ScatterOffsets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(puVar5 + 4) = (param_1->ScatterOffsets).ArrayNum;
    *(int *)((longlong)puVar5 + 0x24) = (param_1->ScatterOffsets).ArrayMax;
    (param_1->ScatterOffsets).ArrayNum = 0;
    (param_1->ScatterOffsets).ArrayMax = 0;
    puVar7 = puVar5;
  }
  local_18[0] = puVar7;
  if (((undefined8 **)this->_padding_ <= local_18) &&
     (local_18 < (undefined8 **)this->_padding_ + *(int *)((longlong)&this->_padding_ + 4))) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FUploadData *)(*pcVar2)();
      return pFVar6;
    }
  }
  iVar4 = (int)this->_padding_;
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)&this->_padding_,piVar1);
  }
  *(int *)&this->_padding_ = iVar4 + 1;
  *(undefined8 **)(this->_padding_ + (longlong)iVar4 * 8) = local_18[0];
  return (FUploadData *)(puVar7 + 1);
}

// AllocPODArray<UE::HLSL::FDynamicWindBlockHeader> @ 14da4b190

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FDynamicWindBlockHeader * __thiscall
FRDGBuilder::AllocPODArray<UE::HLSL::FDynamicWindBlockHeader>(FRDGBuilder *this,uint param_1)

{
  FDynamicWindBlockHeader *pFVar1;
  
  pFVar1 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,(ulonglong)param_1 << 4,4);
  return pFVar1;
}

// AllocPODArray<UE::HLSL::FDynamicWindSkeletonData> @ 14da4b1b0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FDynamicWindSkeletonData * __thiscall
FRDGBuilder::AllocPODArray<UE::HLSL::FDynamicWindSkeletonData>(FRDGBuilder *this,uint param_1)

{
  FDynamicWindSkeletonData *pFVar1;
  
  pFVar1 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,(ulonglong)param_1 << 4,4);
  return pFVar1;
}

// AllocParameters<FDynamicWindEvalCS::FParameters> @ 14da4b1d0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FParameters * __thiscall
FRDGBuilder::AllocParameters<FDynamicWindEvalCS::FParameters>(FRDGBuilder *this)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  FParameters *pFVar6;
  undefined8 *local_18 [2];
  
  puVar5 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,0x70,0x10);
  if (puVar5 == (undefined8 *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FParameters *)(*pcVar2)();
      return pFVar6;
    }
  }
  else {
    *(undefined4 *)((longlong)puVar5 + 0x6c) = 0x3f800000;
    *puVar5 = &___7__TObject_VFParameters_FDynamicWindEvalCS___FRDGAllocator__6B_;
    puVar5[2] = 0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = 0;
    puVar5[6] = 0;
    puVar5[7] = 0;
    puVar5[0xc] = 0;
    *(undefined4 *)(puVar5 + 0xd) = 0;
  }
  local_18[0] = puVar5;
  if (((undefined8 **)this->_padding_ <= local_18) &&
     (local_18 < (undefined8 **)this->_padding_ + *(int *)((longlong)&this->_padding_ + 4))) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FParameters *)(*pcVar2)();
      return pFVar6;
    }
  }
  iVar4 = (int)this->_padding_;
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)&this->_padding_,piVar1);
  }
  *(int *)&this->_padding_ = iVar4 + 1;
  *(undefined8 **)(this->_padding_ + (longlong)iVar4 * 8) = local_18[0];
  return (FParameters *)(puVar5 + 2);
}

