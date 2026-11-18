// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 4

// AllocateResources @ 14e17d1f0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FOptimusSkinWeightsAsVertexMaskDataProviderProxy::AllocateResources
          (FOptimusSkinWeightsAsVertexMaskDataProviderProxy *this,FRDGBuilder *param_1,
          FAllocationData *param_2)

{
  TArray<FRDGBuffer_*,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FRDGBufferSRV_*,TSizedDefaultAllocator<32>_> *pTVar2;
  byte *pbVar3;
  FSkeletalMeshRenderData *pFVar4;
  void *_Src;
  FUploadedBuffer *pFVar5;
  code *pcVar6;
  FRDGBuffer *pFVar7;
  FRDGUserValidation *pFVar8;
  longlong lVar9;
  TRDGHandleRegistry<TRDGHandle<FRDGBuffer,unsigned_int>,2> *pTVar10;
  TRDGHandleRegistry<TRDGHandle<FRDGView,unsigned_int>,2> *pTVar11;
  bool bVar12;
  undefined1 uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  FRDGBuffer *pFVar19;
  FRDGBufferSRV *pFVar20;
  void *_Dst;
  FScriptContainerElement *pFVar21;
  uint uVar22;
  uint uVar23;
  ulong64 _Size;
  longlong lVar24;
  longlong lVar25;
  FRDGBufferSRVDesc local_100;
  uint local_e0;
  uint local_dc;
  FMemStackBase *local_d8;
  longlong local_d0;
  FRDGUserValidation *local_c8;
  longlong local_c0;
  FRDGBufferDesc local_b8;
  longlong local_a0;
  TRDGHandleRegistry<TRDGHandle<FRDGBuffer,unsigned_int>,2> *local_98;
  int *local_90;
  FRDGTrace *local_88;
  TRDGHandleRegistry<TRDGHandle<FRDGView,unsigned_int>,2> *local_80;
  int *local_78;
  int *local_70;
  TArray<FRDGBuffer_*,TSizedDefaultAllocator<32>_> *local_68;
  int *local_60;
  TArray<FRDGBufferSRV_*,TSizedDefaultAllocator<32>_> *local_58;
  longlong local_50;
  longlong local_48;
  
  uVar14 = (**(code **)(this->SkeletalMeshObject->_padding_ + 0xa0))();
  pFVar4 = this->SkeletalMeshObject->SkeletalMeshRenderData;
  local_e0 = ~uVar14 >> 0x1f;
  uVar22 = 0;
  if ((int)uVar14 < (pFVar4->LODRenderData).Array.ArrayNum) {
    uVar22 = local_e0;
  }
  if ((uVar22 == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  lVar25 = *(longlong *)
            ((pFVar4->LODRenderData).Array.AllocatorInstance.Data + (longlong)(int)uVar14 * 8);
  pTVar1 = &this->BoneIsSelectedBuffersPerSection;
  local_70 = &(this->BoneIsSelectedBuffersPerSection).ArrayNum;
  iVar18 = *(int *)(lVar25 + 0x18);
  local_68 = pTVar1;
  local_48 = lVar25;
  iVar15 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (8,8,iVar18,&pTVar1->AllocatorInstance,local_70,
                      &(this->BoneIsSelectedBuffersPerSection).ArrayMax);
  memset((pTVar1->AllocatorInstance).Data + (longlong)iVar15 * 8,0,(longlong)iVar18 << 3);
  iVar18 = *(int *)(lVar25 + 0x18);
  pTVar2 = &this->BoneIsSelectedBufferSRVsPerSection;
  local_60 = &(this->BoneIsSelectedBufferSRVsPerSection).ArrayNum;
  local_58 = pTVar2;
  iVar15 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (8,8,iVar18,&pTVar2->AllocatorInstance,local_60,
                      &(this->BoneIsSelectedBufferSRVsPerSection).ArrayMax);
  memset((pTVar2->AllocatorInstance).Data + (longlong)iVar15 * 8,0,(longlong)iVar18 << 3);
  uVar22 = 0;
  if (0 < *(int *)(lVar25 + 0x18)) {
    local_c8 = &param_1->UserValidation;
    local_90 = &(param_1->Buffers).Array.ArrayMax;
    local_a0 = (longlong)(int)uVar14 << 4;
    lVar24 = 0;
    local_98 = &param_1->Buffers;
    local_78 = &(param_1->Views).Array.ArrayMax;
    local_88 = &param_1->Trace;
    local_80 = &param_1->Views;
    local_d8 = (FMemStackBase *)&param_1->_padding_;
    local_d0 = 0;
    local_c0 = 0;
    do {
      lVar9 = local_c0;
      uVar23 = ~uVar22 >> 0x1f;
      uVar16 = 0;
      if ((int)uVar22 < *(int *)(lVar25 + 0x18)) {
        uVar16 = uVar23;
      }
      if ((uVar16 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar16 = *(uint *)(lVar9 + 0x40 + *(longlong *)(lVar25 + 0x10));
      uVar17 = 0;
      if ((int)uVar14 < (this->BoneIsSelectedPerSectionPerLod).ArrayNum) {
        uVar17 = local_e0;
      }
      local_dc = uVar16;
      if ((uVar17 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar21 = (this->BoneIsSelectedPerSectionPerLod).AllocatorInstance.Data + local_a0;
      uVar17 = 0;
      if ((int)uVar22 < *(int *)(pFVar21 + 8)) {
        uVar17 = uVar23;
      }
      if ((uVar17 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar8 = local_c8;
      local_50 = *(longlong *)pFVar21;
      local_100._padding_._4_4_ = local_b8._12_4_;
      local_100._padding_._0_4_ = 4;
      local_100._padding_._0_4_ = 0x10109;
      local_b8.BytesPerElement = 4;
      local_b8.Usage = StructuredBuffer|ShaderResource|UnorderedAccess|Static;
      local_100._padding_ = 0;
      local_b8.Metadata = (FShaderParametersMetadata *)0x0;
      local_100._padding_._4_4_ = uVar16;
      local_b8.NumElements = uVar16;
      FRDGUserValidation::ValidateCreateBuffer(local_c8,&local_b8,L"BoneIsSelectedBuffer",None);
      if (local_b8.BytesPerElement == 0) {
        local_b8.BytesPerElement = 1;
      }
      if (local_b8.NumElements == 0) {
        local_b8.NumElements = 1;
      }
      pFVar19 = FMemStackBase::Alloc(local_d8,0x130,8);
      pFVar19 = FRDGBuffer::FRDGBuffer(pFVar19,L"BoneIsSelectedBuffer",&local_b8,None);
      pTVar10 = local_98;
      iVar18 = (local_98->Array).ArrayNum;
      if (iVar18 == *local_90) {
        iVar18 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGBuffer_*>_>
                           (0x808,(ForElementType<FRDGBuffer_*> *)local_98,local_90);
      }
      (pTVar10->Array).ArrayNum = iVar18 + 1;
      (pTVar10->Array).AllocatorInstance.Data[iVar18] = pFVar19;
      (pFVar19->Handle).Index = (pTVar10->Array).ArrayNum - 1;
      FRDGUserValidation::ValidateCreateBuffer(pFVar8,pFVar19);
      FRDGTrace::AddResource(local_88,(FRDGViewableResource *)pFVar19);
      local_100._padding_._0_4_ = 0xffffffff;
      local_100._padding_._4_4_ = 0;
      local_100._padding_ = 0;
      uVar13 = 0;
      if (((pFVar19->Desc).Usage & DrawIndirect) != None) {
        uVar13 = 0x1c;
      }
      local_100._padding_._0_4_ =
           CONCAT31((int3)((uint)(undefined4)local_100._padding_ >> 8),uVar13);
      local_100.Buffer = pFVar19;
      FRDGUserValidation::ValidateCreateSRV(pFVar8,&local_100);
      pFVar7 = local_100.Buffer;
      pFVar20 = FMemStackBase::Alloc(local_d8,0x50,8);
      pTVar11 = local_80;
      lVar25 = pFVar7->_padding_;
      *(byte *)&pFVar20->_padding_ = (byte)pFVar20->_padding_ & 0xfe;
      *(undefined8 *)((longlong)&pFVar20->_padding_ + 4) = 0xffffffffffffffff;
      pFVar20->_padding_ = lVar25;
      pFVar20->_padding_ = 0;
      *(undefined1 *)&pFVar20->_padding_ = 3;
      pFVar20->_padding_ = (longlong)&___7FRDGBufferSRV__6B_;
      (pFVar20->Desc)._padding_ =
           CONCAT44(local_100._padding_._4_4_,(undefined4)local_100._padding_);
      (pFVar20->Desc)._padding_ =
           CONCAT44(local_100._padding_._4_4_,(undefined4)local_100._padding_);
      (pFVar20->Desc)._padding_ = local_100._padding_;
      (pFVar20->Desc).Buffer = local_100.Buffer;
      iVar18 = (local_80->Array).ArrayNum;
      if (iVar18 == *local_78) {
        iVar18 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGView_*>_>
                           (0x808,(ForElementType<FRDGView_*> *)local_80,local_78);
      }
      pFVar8 = local_c8;
      (pTVar11->Array).ArrayNum = iVar18 + 1;
      (pTVar11->Array).AllocatorInstance.Data[iVar18] = (FRDGView *)pFVar20;
      *(int *)((longlong)&pFVar20->_padding_ + 4) = (pTVar11->Array).ArrayNum + -1;
      FRDGUserValidation::ValidateCreateSRV(local_c8,pFVar20);
      uVar16 = 0;
      if ((int)uVar22 < *local_70) {
        uVar16 = uVar23;
      }
      if ((uVar16 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      *(FRDGBuffer **)((local_68->AllocatorInstance).Data + lVar24 * 8) = pFVar19;
      uVar16 = 0;
      if ((int)uVar22 < *local_60) {
        uVar16 = uVar23;
      }
      if ((uVar16 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      *(FRDGBufferSRV **)((local_58->AllocatorInstance).Data + lVar24 * 8) = pFVar20;
      _Size = (ulong64)(int)(local_dc * 4);
      _Src = *(void **)(local_d0 + local_50);
      FRDGUserValidation::ValidateUploadBuffer(pFVar8,pFVar19,_Src,_Size);
      _Dst = _Src;
      if (_Size != 0) {
        _Dst = FMemStackBase::Alloc(local_d8,_Size,0x10);
        memcpy(_Dst,_Src,_Size);
      }
      iVar18 = (param_1->UploadedBuffers).ArrayNum;
      if (iVar18 == (param_1->UploadedBuffers).ArrayMax) {
        iVar18 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGBuilder::FUploadedBuffer>_>
                           (0x10e0,&(param_1->UploadedBuffers).AllocatorInstance,
                            &(param_1->UploadedBuffers).ArrayMax);
      }
      local_d0 = local_d0 + 0x10;
      (param_1->UploadedBuffers).ArrayNum = iVar18 + 1;
      local_c0 = local_c0 + 0x118;
      uVar22 = uVar22 + 1;
      pFVar5 = (param_1->UploadedBuffers).AllocatorInstance.Data;
      lVar24 = lVar24 + 1;
      pFVar5[iVar18].Buffer = pFVar19;
      pFVar5[iVar18].Data = _Dst;
      pFVar5[iVar18].bUseDataCallbacks = false;
      pFVar5[iVar18].bUseFreeCallbacks = false;
      pFVar5[iVar18].DataSize = _Size;
      *(undefined8 *)&pFVar5[iVar18].DataCallback = 0;
      *(undefined8 *)&pFVar5[iVar18].DataCallback.field_0x28 = 0;
      *(undefined8 *)&pFVar5[iVar18].DataSizeCallback = 0;
      *(undefined8 *)&pFVar5[iVar18].DataSizeCallback.field_0x28 = 0;
      *(undefined8 *)&pFVar5[iVar18].DataFreeCallback = 0;
      *(undefined8 *)&pFVar5[iVar18].DataFreeCallback.field_0x28 = 0;
      *(undefined8 *)&pFVar5[iVar18].DataFillCallback = 0;
      *(undefined8 *)&pFVar5[iVar18].DataFillCallback.field_0x28 = 0;
      pbVar3 = (byte *)((longlong)&pFVar19->_padding_ + 1);
      *pbVar3 = *pbVar3 | 0x80;
      lVar25 = local_48;
    } while ((int)uVar22 < *(int *)(local_48 + 0x18));
  }
  return;
}

// GatherDispatchData @ 14e1b4ce0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FOptimusSkinWeightsAsVertexMaskDataProviderProxy::GatherDispatchData
          (FOptimusSkinWeightsAsVertexMaskDataProviderProxy *this,FDispatchData *param_1)

{
  FSkinWeightProfilesData *this_00;
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  FSkeletalMeshRenderData *pFVar5;
  uchar *puVar6;
  code *pcVar7;
  FOptimusSkinWeightsAsVertexMaskDataProviderProxy *pFVar8;
  bool bVar9;
  uint uVar10;
  GPUSkinBoneInfluenceType GVar11;
  FSkinWeightVertexBuffer *this_01;
  FRHIShaderResourceView *pFVar12;
  uint uVar13;
  FRHIShaderResourceView *pFVar14;
  int *piVar15;
  FRHIShaderResourceView *pFVar16;
  undefined1 auStack_a8 [32];
  FRHIShaderResourceView *local_88;
  longlong local_80;
  FRHIShaderResourceView *local_78;
  FRHIShaderResourceView *local_70;
  undefined8 local_68;
  FOptimusSkinWeightsAsVertexMaskDataProviderProxy *local_60;
  longlong local_58;
  ulonglong local_50;
  FSkinWeightProfileStack local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_60 = this;
  uVar10 = (**(code **)(this->SkeletalMeshObject->_padding_ + 0xa0))();
  pFVar16 = (FRHIShaderResourceView *)0x0;
  pFVar5 = this->SkeletalMeshObject->SkeletalMeshRenderData;
  iVar2 = (pFVar5->LODRenderData).Array.ArrayNum;
  uVar13 = 0;
  if ((int)uVar10 < iVar2) {
    uVar13 = ~uVar10 >> 0x1f;
  }
  if ((uVar13 == 0) &&
     (local_88 = (FRHIShaderResourceView *)(longlong)(int)uVar10, local_80 = (longlong)iVar2,
     bVar9 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar9
     )) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  local_58 = *(longlong *)
              ((pFVar5->LODRenderData).Array.AllocatorInstance.Data + (longlong)(int)uVar10 * 8);
  this_00 = (FSkinWeightProfilesData *)(local_58 + 0x328);
  local_78 = (GWhiteVertexBufferWithSRV->ShaderResourceViewRHI).Reference;
  this_01 = *(FSkinWeightVertexBuffer **)(local_58 + 0x330);
  if (*(FSkinWeightVertexBuffer **)(local_58 + 0x330) == (FSkinWeightVertexBuffer *)0x0) {
    this_01 = (FSkinWeightVertexBuffer *)(local_58 + 0x188);
  }
  bVar9 = FSkinWeightProfilesData::ContainsProfile(this_00,&this->SkinWeightProfile);
  if (bVar9) {
    local_48.Layers.Elements[0] = this->SkinWeightProfile;
    local_68 = 0;
    local_48.Layers.Elements[1].ComparisonIndex.Value = 0;
    local_48.Layers.Elements[1].Number = 0;
    this_01 = FSkinWeightProfilesData::GetOverrideBuffer(this_00,&local_48);
  }
  if ((this_01 == (FSkinWeightVertexBuffer *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("WeightBuffer != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\DataInterfaces\\OptimusDataInterfaceSkinWeightsAsVertexMask.cpp"
                         ,0x242,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  local_70 = (this_01->DataVertexBuffer).SRVValue.Reference;
  GVar11 = FSkinWeightVertexBuffer::GetBoneInfluenceType(this_01);
  pFVar14 = pFVar16;
  if (GVar11 == UnlimitedBoneInfluence) {
    pFVar14 = (this_01->LookupVertexBuffer).SRVValue.Reference;
  }
  iVar2 = param_1->ParameterBufferOffset;
  puVar6 = param_1->ParameterBuffer;
  iVar3 = param_1->NumInvocations;
  iVar4 = param_1->ParameterBufferStride;
  if ((iVar3 < 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumElements >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                         ,0x3f,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((iVar4 < 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("BytesBetweenElements >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                         ,0x40,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((((longlong)iVar4 & 0xfU) != 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("BytesBetweenElements % alignof(ElementType) == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                         ,0x41,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar8 = local_60;
  uVar13 = 0;
  if (0 < param_1->NumInvocations) {
    pFVar12 = local_78;
    if (local_70 != (FRHIShaderResourceView *)0x0) {
      pFVar12 = local_70;
    }
    if (pFVar14 != (FRHIShaderResourceView *)0x0) {
      local_78 = pFVar14;
    }
    piVar15 = (int *)(puVar6 + (longlong)iVar2 + 8);
    local_70 = pFVar12;
    local_50 = (longlong)iVar4;
    do {
      uVar10 = 0;
      if ((int)uVar13 < iVar3) {
        uVar10 = ~uVar13 >> 0x1f;
      }
      if (uVar10 == 0) {
        local_88 = (FRHIShaderResourceView *)(longlong)(int)uVar13;
        local_80 = (longlong)iVar3;
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < NumElements)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                           ,0x96,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar9) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      piVar15[-2] = *(int *)(local_58 + 300);
      piVar15[-1] = (this_01->DataVertexBuffer).MaxBoneInfluences;
      *piVar15 = ((uint)((this_01->DataVertexBuffer).bUse16BitBoneWeight != false) +
                 ((this_01->DataVertexBuffer).bUse16BitBoneIndex != false) + 2) *
                 (this_01->DataVertexBuffer).MaxBoneInfluences;
      uVar10 = 0x100;
      if ((this_01->DataVertexBuffer).bUse16BitBoneWeight != false) {
        uVar10 = 0x200;
      }
      bVar9 = (this_01->DataVertexBuffer).bUse16BitBoneIndex;
      *(FRHIShaderResourceView **)(piVar15 + 2) = local_70;
      *(FRHIShaderResourceView **)(piVar15 + 4) = local_78;
      piVar15[1] = uVar10 | (bVar9 != false) + 1;
      iVar2 = (pFVar8->BoneIsSelectedBufferSRVsPerSection).ArrayNum;
      local_80 = (longlong)iVar2;
      uVar10 = 0;
      if ((int)uVar13 < iVar2) {
        uVar10 = ~uVar13 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (local_88 = pFVar16,
         bVar9 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar13 = uVar13 + 1;
      lVar1 = (longlong)pFVar16 * 8;
      pFVar16 = (FRHIShaderResourceView *)&pFVar16->field_0x1;
      *(undefined8 *)(piVar15 + 6) =
           *(undefined8 *)
            ((pFVar8->BoneIsSelectedBufferSRVsPerSection).AllocatorInstance.Data + lVar1);
      piVar15 = (int *)((longlong)piVar15 + local_50);
    } while ((int)uVar13 < param_1->NumInvocations);
  }
  return;
}

// GatherPermutations @ 14e1b6860

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FOptimusSkinWeightsAsVertexMaskDataProviderProxy::GatherPermutations
          (FOptimusSkinWeightsAsVertexMaskDataProviderProxy *this,FPermutationData *param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  FSkeletalMeshRenderData *pFVar4;
  longlong lVar5;
  FRHIShaderResourceView *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  FSkinWeightProfilesData *this_00;
  FName *pFVar9;
  bool bVar10;
  bool bVar11;
  GPUSkinBoneInfluenceType GVar12;
  uint uVar13;
  FRHIShaderResourceView *pFVar14;
  FSkinWeightVertexBuffer *this_01;
  FRHIShaderResourceView *pFVar15;
  uint uVar16;
  ulonglong uVar17;
  uint uVar18;
  ulonglong uVar19;
  undefined1 auStack_c8 [32];
  ulonglong local_a8;
  longlong local_a0;
  uint local_98;
  undefined8 local_94;
  longlong local_88;
  FSkinWeightsAsVertexMaskDataInterfacePermutationIds local_80;
  FSkinWeightVertexBuffer *local_70;
  FSkinWeightProfilesData *local_68;
  FName *local_60;
  FOptimusSkinWeightsAsVertexMaskDataProviderProxy *local_58;
  FSkinWeightProfileStack local_50;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_58 = this;
  local_98 = (**(code **)(this->SkeletalMeshObject->_padding_ + 0xa0))();
  uVar17 = (ulonglong)(int)local_98;
  pFVar4 = this->SkeletalMeshObject->SkeletalMeshRenderData;
  iVar3 = (pFVar4->LODRenderData).Array.ArrayNum;
  uVar18 = 0;
  if ((int)local_98 < iVar3) {
    uVar18 = ~local_98 >> 0x1f;
  }
  if ((uVar18 == 0) &&
     (local_a8 = uVar17, local_a0 = (longlong)iVar3,
     bVar10 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  lVar5 = *(longlong *)((pFVar4->LODRenderData).Array.AllocatorInstance.Data + uVar17 * 8);
  FSkinWeightsAsVertexMaskDataInterfacePermutationIds::
  FSkinWeightsAsVertexMaskDataInterfacePermutationIds(&local_80,param_1->PermutationVector);
  uVar18 = 0;
  if (0 < param_1->NumInvocations) {
    local_70 = (FSkinWeightVertexBuffer *)(lVar5 + 0x188);
    local_68 = (FSkinWeightProfilesData *)(lVar5 + 0x328);
    local_60 = &this->SkinWeightProfile;
    uVar19 = 0;
    local_88 = 0;
    do {
      pFVar9 = local_60;
      this_00 = local_68;
      pFVar14 = FSkeletalMeshDeformerHelpers::GetBoneBufferForReading
                          (this->SkeletalMeshObject,(int)uVar17,uVar18,false);
      this_01 = this_00->DefaultOverrideSkinWeightBuffer;
      if (this_00->DefaultOverrideSkinWeightBuffer == (FSkinWeightVertexBuffer *)0x0) {
        this_01 = local_70;
      }
      bVar10 = FSkinWeightProfilesData::ContainsProfile(this_00,pFVar9);
      if (bVar10) {
        local_50.Layers.Elements[0] = *pFVar9;
        local_94 = 0;
        local_50.Layers.Elements[1].ComparisonIndex.Value = 0;
        local_50.Layers.Elements[1].Number = 0;
        this_01 = FSkinWeightProfilesData::GetOverrideBuffer(this_00,&local_50);
      }
      if ((this_01 == (FSkinWeightVertexBuffer *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("WeightBuffer != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\DataInterfaces\\OptimusDataInterfaceSkinWeightsAsVertexMask.cpp"
                              ,0x225,L""), bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar6 = (this_01->DataVertexBuffer).SRVValue.Reference;
      GVar12 = FSkinWeightVertexBuffer::GetBoneInfluenceType(this_01);
      if (GVar12 == UnlimitedBoneInfluence) {
        pFVar15 = (this_01->LookupVertexBuffer).SRVValue.Reference;
      }
      else {
        pFVar15 = (FRHIShaderResourceView *)0x0;
      }
      if (((pFVar14 == (FRHIShaderResourceView *)0x0) || (pFVar6 == (FRHIShaderResourceView *)0x0))
         || ((GVar12 == UnlimitedBoneInfluence && (pFVar15 == (FRHIShaderResourceView *)0x0)))) {
        bVar10 = false;
      }
      else {
        bVar10 = true;
      }
      bVar1 = (this_01->DataVertexBuffer).bUse16BitBoneIndex;
      bVar2 = (this_01->DataVertexBuffer).bUse16BitBoneWeight;
      iVar3 = (param_1->PermutationIds).ArrayNum;
      uVar16 = ~uVar18 >> 0x1f;
      uVar13 = 0;
      if ((int)uVar18 < iVar3) {
        uVar13 = uVar16;
      }
      if (uVar13 == 0) {
        local_a8 = (ulonglong)(int)uVar18;
        local_a0 = (longlong)iVar3;
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar11) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      lVar5 = local_88;
      pFVar7 = (param_1->PermutationIds).AllocatorInstance.Data;
      uVar13 = 0;
      if (bVar10) {
        uVar13 = local_80.EnableDeformerBones;
      }
      *(uint *)(pFVar7 + uVar19 * 4) = uVar13 | *(uint *)(pFVar7 + local_88);
      iVar3 = (param_1->PermutationIds).ArrayNum;
      uVar13 = 0;
      if ((int)uVar18 < iVar3) {
        uVar13 = uVar16;
      }
      if ((uVar13 == 0) &&
         (local_a8 = uVar19, local_a0 = (longlong)iVar3,
         bVar10 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar7 = (param_1->PermutationIds).AllocatorInstance.Data + uVar19 * 4;
      uVar13 = 0;
      if (GVar12 == UnlimitedBoneInfluence) {
        uVar13 = local_80.UnlimitedBoneInfluence;
      }
      *(uint *)pFVar7 = *(uint *)pFVar7 | uVar13;
      iVar3 = (param_1->PermutationIds).ArrayNum;
      uVar13 = 0;
      if ((int)uVar18 < iVar3) {
        uVar13 = uVar16;
      }
      if ((uVar13 == 0) &&
         (local_a8 = uVar19, local_a0 = (longlong)iVar3,
         bVar10 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar7 = (param_1->PermutationIds).AllocatorInstance.Data + uVar19 * 4;
      uVar13 = 0;
      if (bVar1 != false) {
        uVar13 = local_80.BoneIndexUint16;
      }
      *(uint *)pFVar7 = *(uint *)pFVar7 | uVar13;
      iVar3 = (param_1->PermutationIds).ArrayNum;
      uVar13 = 0;
      if ((int)uVar18 < iVar3) {
        uVar13 = uVar16;
      }
      if ((uVar13 == 0) &&
         (local_a8 = uVar19, local_a0 = (longlong)iVar3,
         bVar10 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar17 = (ulonglong)local_98;
      pFVar7 = (param_1->PermutationIds).AllocatorInstance.Data + uVar19 * 4;
      uVar13 = 0;
      if (bVar2 != false) {
        uVar13 = local_80.BoneWeightsUint16;
      }
      local_88 = lVar5 + 4;
      *(uint *)pFVar7 = *(uint *)pFVar7 | uVar13;
      uVar18 = uVar18 + 1;
      uVar19 = uVar19 + 1;
      this = local_58;
    } while ((int)uVar18 < param_1->NumInvocations);
  }
  return;
}

// IsValid @ 14e1f09f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FOptimusSkinWeightsAsVertexMaskDataProviderProxy::IsValid
          (FOptimusSkinWeightsAsVertexMaskDataProviderProxy *this,FValidationData *param_1)

{
  int iVar1;
  FSkeletalMeshRenderData *pFVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  FSkinWeightVertexBuffer *pFVar8;
  uint uVar9;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong local_30;
  undefined8 local_28;
  FSkinWeightProfileStack local_20;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_58;
  if ((param_1->ParameterStructSize == 0x30) &&
     (this->SkeletalMeshObject != (FSkeletalMeshObject *)0x0)) {
    uVar7 = (**(code **)(this->SkeletalMeshObject->_padding_ + 0xa0))();
    pFVar2 = this->SkeletalMeshObject->SkeletalMeshRenderData;
    iVar1 = (pFVar2->LODRenderData).Array.ArrayNum;
    uVar9 = 0;
    if ((int)uVar7 < iVar1) {
      uVar9 = ~uVar7 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (local_38 = (longlong)(int)uVar7, local_30 = (longlong)iVar1,
       bVar5 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    lVar3 = *(longlong *)
             ((pFVar2->LODRenderData).Array.AllocatorInstance.Data + (longlong)(int)uVar7 * 8);
    if (*(int *)(lVar3 + 0x18) == param_1->NumInvocations) {
      pFVar8 = *(FSkinWeightVertexBuffer **)(lVar3 + 0x330);
      if (*(FSkinWeightVertexBuffer **)(lVar3 + 0x330) == (FSkinWeightVertexBuffer *)0x0) {
        pFVar8 = (FSkinWeightVertexBuffer *)(lVar3 + 0x188);
      }
      bVar5 = FSkinWeightProfilesData::ContainsProfile
                        ((FSkinWeightProfilesData *)(lVar3 + 0x328),&this->SkinWeightProfile);
      if (bVar5) {
        local_20.Layers.Elements[0] = this->SkinWeightProfile;
        local_28 = 0;
        local_20.Layers.Elements[1].ComparisonIndex.Value = 0;
        local_20.Layers.Elements[1].Number = 0;
        pFVar8 = FSkinWeightProfilesData::GetOverrideBuffer
                           ((FSkinWeightProfilesData *)(lVar3 + 0x328),&local_20);
      }
      if (pFVar8 != (FSkinWeightVertexBuffer *)0x0) {
        return (this->BoneIsSelectedPerSectionPerLod).ArrayNum != 0;
      }
    }
  }
  return false;
}

