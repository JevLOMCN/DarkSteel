// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 11

// FRenderCurveSceneExtension @ 144a5aa30

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FRenderCurveSceneExtension * __thiscall
RenderCurve::FRenderCurveSceneExtension::FRenderCurveSceneExtension
          (FRenderCurveSceneExtension *this,FScene *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7FRenderCurveSceneExtension_RenderCurve__6B_;
  (this->Header).TotalClusterCount = 0;
  (this->Header).ClusterStideInBytes = 0;
  *(undefined8 *)&this->Datas = 0;
  *(undefined8 *)&(this->Datas).field_0x8 = 0;
  *(undefined8 *)&(this->Datas).field_0x20 = 0;
  this->bIsEnabled = true;
  this->bDirtyData = false;
  *(undefined4 *)&(this->Datas).field_0x28 = 0;
  *(undefined4 *)&(this->Datas).field_0x2c = 0x80;
  *(undefined4 *)&(this->Datas).field_0x34 = 0;
  *(undefined4 *)&(this->Datas).field_0x30 = 0xffffffff;
  (this->Buffers).Ptr = (FBuffers *)0x0;
  (this->Uploader).Ptr = (FUploader *)0x0;
  return this;
}

// ~FRenderCurveSceneExtension @ 144a5af00

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
RenderCurve::FRenderCurveSceneExtension::~FRenderCurveSceneExtension
          (FRenderCurveSceneExtension *this)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  FUploader *pFVar4;
  FScriptContainerElement *pFVar5;
  FBuffers *pFVar6;
  FRDGPooledBuffer *pFVar7;
  undefined8 *puVar8;
  longlong lVar9;
  
  this->_padding_ = (longlong)&___7FRenderCurveSceneExtension_RenderCurve__6B_;
  pFVar4 = (this->Uploader).Ptr;
  if (pFVar4 != (FUploader *)0x0) {
    pFVar5 = (pFVar4->InstanceDataUploader).UploadData.ScatterOffsets.AllocatorInstance.Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    pFVar5 = (pFVar4->InstanceDataUploader).UploadData.Values.AllocatorInstance.Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    ::operator_delete(pFVar4,0x30);
  }
  pFVar6 = (this->Buffers).Ptr;
  if (pFVar6 != (FBuffers *)0x0) {
    pFVar7 = (pFVar6->ClusterDataBuffer).Reference;
    if (pFVar7 != (FRDGPooledBuffer *)0x0) {
      plVar1 = &pFVar7->_padding_;
      LOCK();
      lVar9 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar9 == 1) && (plVar1 != (longlong *)0x0)) {
        (**(code **)pFVar7->_padding_)(pFVar7,1);
      }
    }
    puVar8 = *(undefined8 **)&(pFVar6->RenderCurveInstanceDataBuffer).field_0x18;
    if (puVar8 != (undefined8 *)0x0) {
      piVar2 = (int *)(puVar8 + 1);
      LOCK();
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if ((iVar3 == 1) && (piVar2 != (int *)0x0)) {
        (**(code **)*puVar8)(puVar8,1);
      }
    }
    ::operator_delete(pFVar6,0x28);
  }
  TSparseArray<RenderCurve::FRenderCurveSceneExtension::FData,FDefaultSparseArrayAllocator>::
  ~TSparseArray<RenderCurve::FRenderCurveSceneExtension::FData,FDefaultSparseArrayAllocator>
            (&this->Datas);
  this->_padding_ = (longlong)&___7ISceneExtension__6B_;
  return;
}

// CreateRenderer @ 144a71a60

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

ISceneExtensionRenderer * __thiscall
RenderCurve::FRenderCurveSceneExtension::CreateRenderer
          (FRenderCurveSceneExtension *this,FSceneRendererBase *param_1,FEngineShowFlags *param_2)

{
  ISceneExtensionRenderer *pIVar1;
  
  pIVar1 = ::operator_new(0x18);
  if (pIVar1 != (ISceneExtensionRenderer *)0x0) {
    pIVar1->SceneRendererInternal = param_1;
    pIVar1->_padding_ = (longlong)&___7FRenderer_FRenderCurveSceneExtension_RenderCurve__6B_;
    pIVar1[1]._padding_ = (longlong)this;
    return pIVar1;
  }
  return (ISceneExtensionRenderer *)0x0;
}

// CreateUpdater @ 144a71de0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

ISceneExtensionUpdater * __thiscall
RenderCurve::FRenderCurveSceneExtension::CreateUpdater(FRenderCurveSceneExtension *this)

{
  ISceneExtensionUpdater *pIVar1;
  
  pIVar1 = ::operator_new(0x10);
  if (pIVar1 != (ISceneExtensionUpdater *)0x0) {
    pIVar1[1] = (ISceneExtensionUpdater)this;
    *pIVar1 = (ISceneExtensionUpdater)&___7FUpdater_FRenderCurveSceneExtension_RenderCurve__6B_;
    return pIVar1;
  }
  return (ISceneExtensionUpdater *)0x0;
}

// FinishBufferUpload @ 144a7d620

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
RenderCurve::FRenderCurveSceneExtension::FinishBufferUpload
          (FRenderCurveSceneExtension *this,FRDGBuilder *param_1,
          FRenderCurveSceneParameters *param_2)

{
  TUniquePtr<RenderCurve::FRenderCurveSceneExtension::FUploader,TDefaultDelete<RenderCurve::FRenderCurveSceneExtension::FUploader>_>
  *pTVar1;
  undefined1 *puVar2;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar3;
  ulonglong uVar4;
  uint uVar5;
  FRHIGPUMask FVar6;
  FScriptContainerElement *pFVar7;
  FRHIComputeCommandList *this_00;
  TBufferScatterUploader<RenderCurve::FRenderCurveSceneExtension::FPackedRenderCurveInstanceData,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,1>
  *this_01;
  FBuffers *pFVar8;
  code *pcVar9;
  FRenderCurveSceneParameters *pFVar10;
  bool bVar11;
  int iVar12;
  FUploader *pFVar13;
  FRDGBuffer *pFVar14;
  TRefCountPtr<FRDGPooledBuffer> TVar15;
  int *piVar16;
  FRDGBuffer *pFVar17;
  FRDGBufferSRV *pFVar18;
  FUploader *pFVar19;
  longlong lVar20;
  longlong *plVar21;
  TRefCountPtr<FRDGPooledBuffer> *pTVar22;
  int iVar23;
  TSparseArray<RenderCurve::FRenderCurveSceneExtension::FData,FDefaultSparseArrayAllocator> *pTVar24
  ;
  uint uVar25;
  undefined1 *puVar26;
  FRDGPooledBuffer *pFVar27;
  uint *puVar28;
  uint uVar29;
  FRDGBuilder *pFVar30;
  undefined1 local_res8 [8];
  FRDGBuilder *local_res10;
  FRenderCurveSceneParameters *local_res18;
  int local_res20;
  int local_138;
  undefined8 local_134;
  longlong lStack_12c;
  int local_120;
  uint uStack_11c;
  undefined1 *puStack_118;
  undefined4 local_110;
  int iStack_10c;
  int iStack_108;
  undefined4 uStack_104;
  FScatterInfo local_100;
  undefined8 local_f0;
  TSparseArray<RenderCurve::FRenderCurveSceneExtension::FData,FDefaultSparseArrayAllocator>
  *local_e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_e0;
  int local_c0;
  int local_b8;
  int local_b4;
  undefined8 *local_b0;
  FRDGBufferSRVDesc local_a8;
  FRDGBufferSRVDesc local_88;
  wchar_t local_68 [4];
  undefined4 uStack_60;
  undefined8 local_58;
  undefined8 local_50 [2];
  
  if ((this->Buffers).Ptr == (FBuffers *)0x0) {
    return;
  }
  bVar11 = false;
  local_res10 = param_1;
  local_res18 = param_2;
  if (this->bDirtyData != false) {
    pTVar1 = &this->Uploader;
    if (((this->Uploader).Ptr != (FUploader *)0x0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("!Uploader.IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\HairStrands\\RenderCurveSceneExtension.cpp"
                            ,0x9d,L""), bVar11)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pFVar13 = ::operator_new(0x30);
    if (pFVar13 == (FUploader *)0x0) {
      pFVar13 = (FUploader *)0x0;
    }
    else {
      (pFVar13->InstanceDataUploader).UploadData.ScatterOffsets.ArrayMax = 0;
      (pFVar13->InstanceDataUploader)._padding_ =
           (longlong)
           &
           ___7__TBufferScatterUploader_UFPackedRenderCurveInstanceData_FRenderCurveSceneExtension_RenderCurve__UFByteAddressBufferTraits_Implementation_RendererPrivateUtils_UE___00_Implementation_RendererPrivateUtils_UE__6B_
      ;
      (pFVar13->InstanceDataUploader).UploadDataProxy = (FUploadData *)0x0;
      (pFVar13->InstanceDataUploader).UploadData.Values.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      (pFVar13->InstanceDataUploader).UploadData.Values.ArrayNum = 0;
      (pFVar13->InstanceDataUploader).UploadData.Values.ArrayMax = 0;
      (pFVar13->InstanceDataUploader).UploadData.ScatterOffsets.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      (pFVar13->InstanceDataUploader).UploadData.ScatterOffsets.ArrayNum = 0;
      if ((pFVar13->InstanceDataUploader).UploadData.ScatterOffsets.ArrayMax < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,&(pFVar13->InstanceDataUploader).UploadData.ScatterOffsets.
                          AllocatorInstance,
                   (pFVar13->InstanceDataUploader).UploadData.ScatterOffsets.ArrayNum,
                   &(pFVar13->InstanceDataUploader).UploadData.ScatterOffsets.ArrayMax);
      }
    }
    if (pTVar1 == (TUniquePtr<RenderCurve::FRenderCurveSceneExtension::FUploader,TDefaultDelete<RenderCurve::FRenderCurveSceneExtension::FUploader>_>
                   *)local_50) {
      if (pFVar13 != (FUploader *)0x0) {
        pFVar7 = (pFVar13->InstanceDataUploader).UploadData.ScatterOffsets.AllocatorInstance.Data;
        if (pFVar7 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar7);
        }
        pFVar7 = (pFVar13->InstanceDataUploader).UploadData.Values.AllocatorInstance.Data;
        pFVar19 = pFVar13;
        if (pFVar7 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar7);
        }
        goto LAB_144a7d75e;
      }
    }
    else {
      pFVar19 = pTVar1->Ptr;
      pTVar1->Ptr = pFVar13;
      if (pFVar19 != (FUploader *)0x0) {
        pFVar7 = (pFVar19->InstanceDataUploader).UploadData.ScatterOffsets.AllocatorInstance.Data;
        if (pFVar7 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar7);
        }
        pFVar7 = (pFVar19->InstanceDataUploader).UploadData.Values.AllocatorInstance.Data;
        if (pFVar7 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar7);
        }
LAB_144a7d75e:
        ::operator_delete(pFVar19,0x30);
      }
    }
    local_res20 = 0;
    uStack_11c = 1;
    pTVar24 = &this->Datas;
    local_120 = 0;
    iVar12 = *(int *)&(this->Datas).field_0x28;
    puVar2 = &(this->Datas).field_0x10;
    iStack_10c = 0;
    iStack_108 = 0;
    if (iVar12 != 0) {
      puVar28 = *(uint **)&(this->Datas).field_0x20;
      if (puVar28 == (uint *)0x0) {
        puVar28 = (uint *)puVar2;
      }
      uVar25 = *puVar28;
      iStack_108 = 0;
      local_120 = 0;
      while (uVar25 == 0) {
        iStack_108 = iStack_108 + 0x20;
        lVar20 = (longlong)local_120;
        local_120 = local_120 + 1;
        if ((int)(iVar12 + -1 + (iVar12 + -1 >> 0x1f & 0x1fU)) >> 5 < local_120) goto LAB_144a7d820;
        uVar25 = puVar28[lVar20 + 1];
      }
      uStack_11c = ~(uVar25 - 1) & uVar25;
      uVar4 = (ulonglong)uStack_11c * 2 + 1;
      lVar20 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar20 == 0; lVar20 = lVar20 + -1) {
        }
      }
      local_b8 = (int)lVar20;
      iStack_10c = local_b8 + -1 + iStack_108;
      if (iVar12 < iStack_10c) {
LAB_144a7d820:
        iStack_10c = iVar12;
      }
    }
    local_110 = 0xffffffff;
    uVar25 = *(uint *)&(this->Datas).field_0x28;
    local_c0 = *(int *)&(this->Datas).field_0x8 - *(int *)&(this->Datas).field_0x34;
    local_e0._padding_ = CONCAT44(uStack_11c,local_120);
    local_e0.CurrentBitIndex = iStack_10c;
    local_e0.UnvisitedBitMask = 0xffffffff;
    local_e0._28_4_ = uStack_104;
    local_e0.BaseBitIndex = iStack_108;
    iVar23 = (int)uVar25 >> 5;
    uVar29 = uVar25 & 0xffffffe0;
    puStack_118 = puVar2;
    local_e8 = pTVar24;
    local_e0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
    if ((((int)uVar25 < 0) || (iVar12 < (int)uVar25)) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar11)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    uVar5 = *(uint *)&(this->Datas).field_0x28;
    if (uVar25 != uVar5) {
      puVar26 = *(undefined1 **)&(this->Datas).field_0x20;
      if (puVar26 == (undefined1 *)0x0) {
        puVar26 = puVar2;
      }
      uVar25 = -1 << ((byte)uVar25 & 0x1f) & *(uint *)(puVar26 + (longlong)iVar23 * 4);
      while (uVar25 == 0) {
        lVar20 = (longlong)iVar23;
        uVar29 = uVar29 + 0x20;
        iVar23 = iVar23 + 1;
        uVar25 = uVar5;
        if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar23)
        goto LAB_144a7d910;
        uVar25 = *(uint *)(puVar26 + lVar20 * 4 + 4);
      }
      uVar4 = (ulonglong)(~(uVar25 - 1) & uVar25) * 2 + 1;
      lVar20 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar20 == 0; lVar20 = lVar20 + -1) {
        }
      }
      local_b4 = (int)lVar20;
      uVar25 = local_b4 + -1 + uVar29;
      if ((int)uVar5 < (int)uVar25) {
        uVar25 = uVar5;
      }
    }
LAB_144a7d910:
    while( true ) {
      if (*(int *)&pTVar24->field_0x8 - *(int *)&pTVar24->field_0x34 != local_c0) {
        local_res8[0] = 0;
        `TSparseArray<RenderCurve::FRenderCurveSceneExtension::FData,FDefaultSparseArrayAllocator>::
        TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (((local_e0.CurrentBitIndex == uVar25) &&
          (local_e0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) &&
         (pTVar24 == &this->Datas)) break;
      pFVar13 = (this->Uploader).Ptr;
      plVar21 = (longlong *)((longlong)local_e0.CurrentBitIndex * 0x10 + *(longlong *)pTVar24);
      lVar20 = *plVar21;
      local_134 = CONCAT44(*(undefined4 *)(lVar20 + 0x224),*(undefined4 *)(lVar20 + 0x18c));
      lStack_12c = (ulonglong)*(uint *)(plVar21[1] + 0x10) << 0x20;
      if (((pFVar13->InstanceDataUploader).UploadDataProxy != (FUploadData *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("UploadDataProxy == nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RendererPrivateUtils.h"
                              ,0x116,L""), bVar11)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pFVar7 = (pFVar13->InstanceDataUploader).UploadData.Values.AllocatorInstance.Data;
      if (((pFVar7 <= (FScriptContainerElement *)&local_134) &&
          ((FScriptContainerElement *)&local_134 <
           pFVar7 + (longlong)(pFVar13->InstanceDataUploader).UploadData.Values.ArrayMax * 0x10)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar11)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      iVar12 = (pFVar13->InstanceDataUploader).UploadData.Values.ArrayNum;
      piVar16 = &(pFVar13->InstanceDataUploader).UploadData.Values.ArrayMax;
      if (iVar12 == *piVar16) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x410,(ForAnyElementType *)&(pFVar13->InstanceDataUploader).UploadData,
                            piVar16);
      }
      iVar23 = local_res20;
      (pFVar13->InstanceDataUploader).UploadData.Values.ArrayNum = iVar12 + 1;
      pTVar3 = &(pFVar13->InstanceDataUploader).UploadData.ScatterOffsets;
      local_138 = local_res20;
      pFVar7 = (pFVar13->InstanceDataUploader).UploadData.Values.AllocatorInstance.Data +
               (longlong)iVar12 * 0x10;
      *(undefined8 *)pFVar7 = local_134;
      *(longlong *)(pFVar7 + 8) = lStack_12c;
      pFVar7 = (pTVar3->AllocatorInstance).Data;
      if (((pFVar7 <= (FScriptContainerElement *)&local_138) &&
          ((FScriptContainerElement *)&local_138 <
           pFVar7 + (longlong)(pFVar13->InstanceDataUploader).UploadData.ScatterOffsets.ArrayMax * 4
          )) && (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar11)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      iVar12 = (pFVar13->InstanceDataUploader).UploadData.ScatterOffsets.ArrayNum;
      piVar16 = &(pFVar13->InstanceDataUploader).UploadData.ScatterOffsets.ArrayMax;
      if (iVar12 == *piVar16) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&pTVar3->AllocatorInstance,piVar16);
      }
      local_res20 = iVar23 + 1;
      (pFVar13->InstanceDataUploader).UploadData.ScatterOffsets.ArrayNum = iVar12 + 1;
      *(int *)((pTVar3->AllocatorInstance).Data + (longlong)iVar12 * 4) = local_138;
      local_e0.UnvisitedBitMask = local_e0.UnvisitedBitMask & ~local_e0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_e0);
      pTVar24 = local_e8;
    }
    bVar11 = true;
    this->bDirtyData = false;
  }
  pFVar30 = local_res10;
  this_00 = (FRHIComputeCommandList *)local_res10->_padding_;
  iVar12 = *(int *)&(this->Datas).field_0x8;
  FVar6.GPUMask = *(uint *)&this_00->field_0x29c;
  FRHIComputeCommandList::SetGPUMask
            (this_00,(FRHIGPUMask)((1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1));
  this_01 = &((this->Uploader).Ptr)->InstanceDataUploader;
  pFVar8 = (this->Buffers).Ptr;
  if (this_01 ==
      (TBufferScatterUploader<RenderCurve::FRenderCurveSceneExtension::FPackedRenderCurveInstanceData,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,1>
       *)0x0) {
    pFVar14 = UE::RendererPrivateUtils::Implementation::
              TPersistentBuffer<RenderCurve::FRenderCurveSceneExtension::FPackedRenderCurveInstanceData,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits>
              ::ResizeBufferIfNeeded(&pFVar8->RenderCurveInstanceDataBuffer,pFVar30,iVar12 + 1);
  }
  else {
    local_100.ScatterOffsetsRDG = (FRDGBuffer *)0x0;
    local_100.NumScatters = 0;
    pFVar14 = UE::RendererPrivateUtils::Implementation::
              TBufferScatterUploader<RenderCurve::FRenderCurveSceneExtension::FPackedRenderCurveInstanceData,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,1>
              ::ResizeAndUploadTo(this_01,pFVar30,&pFVar8->RenderCurveInstanceDataBuffer,iVar12 + 1,
                                  &local_100);
    pFVar13 = (this->Uploader).Ptr;
    (this->Uploader).Ptr = (FUploader *)0x0;
    if (pFVar13 != (FUploader *)0x0) {
      pFVar7 = (pFVar13->InstanceDataUploader).UploadData.ScatterOffsets.AllocatorInstance.Data;
      if (pFVar7 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar7);
      }
      pFVar7 = (pFVar13->InstanceDataUploader).UploadData.Values.AllocatorInstance.Data;
      if (pFVar7 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar7);
      }
      ::operator_delete(pFVar13,0x30);
    }
  }
  pFVar30 = local_res10;
  pFVar8 = (this->Buffers).Ptr;
  if ((pFVar8->ClusterDataBuffer).Reference == (FRDGPooledBuffer *)0x0) {
    if ((GRHIGlobals.ReservedResources.Supported == false) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("bReservedResource",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\HairStrands\\RenderCurveSceneExtension.cpp"
                            ,0xc3,L""), bVar11)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    local_100.NumScatters = 0x10119;
    local_100.ScatterOffsetsRDG = (FRDGBuffer *)0x800000000000004;
    local_f0 = 0;
    local_68[0] = L'\x04';
    local_68[1] = L'\0';
    local_68[2] = L'\0';
    local_68[3] = L'ࠀ';
    _uStack_60 = CONCAT44(local_100._12_4_,0x410119);
    local_58 = 0;
    TVar15 = AllocatePooledBuffer((FRDGBufferDesc *)&local_b0,local_68,200);
    pTVar22 = &((this->Buffers).Ptr)->ClusterDataBuffer;
    if ((FRDGPooledBuffer *)pTVar22 != TVar15.Reference) {
      pFVar27 = pTVar22->Reference;
      pTVar22->Reference = (FRDGPooledBuffer *)(TVar15.Reference)->_padding_;
      (TVar15.Reference)->_padding_ = 0;
      if (pFVar27 != (FRDGPooledBuffer *)0x0) {
        plVar21 = &pFVar27->_padding_;
        LOCK();
        lVar20 = *plVar21;
        *(int *)plVar21 = (int)*plVar21 + -1;
        UNLOCK();
        if ((int)lVar20 == 1) {
          if (plVar21 == (longlong *)0x0) {
            pFVar27 = (FRDGPooledBuffer *)0x0;
          }
          if (pFVar27 != (FRDGPooledBuffer *)0x0) {
            (**(code **)pFVar27->_padding_)(pFVar27,1);
          }
        }
      }
    }
    if (local_b0 != (undefined8 *)0x0) {
      piVar16 = (int *)(local_b0 + 1);
      LOCK();
      iVar12 = *piVar16;
      *piVar16 = *piVar16 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        if (piVar16 == (int *)0x0) {
          local_b0 = (undefined8 *)0x0;
        }
        if (local_b0 != (undefined8 *)0x0) {
          (**(code **)*local_b0)(local_b0,1);
        }
      }
    }
    pTVar22 = &((this->Buffers).Ptr)->ClusterDataBuffer;
  }
  else {
    pTVar22 = &pFVar8->ClusterDataBuffer;
    if (!bVar11) {
      pFVar17 = FRDGBuilder::RegisterExternalBuffer(local_res10,pTVar22,None);
      goto LAB_144a7dd43;
    }
  }
  pFVar30 = local_res10;
  pFVar17 = UploadUniqueCurveResource
                      (local_res10,&this->Datas,pTVar22,&(this->Header).TotalClusterCount,
                       &(this->Header).ClusterStideInBytes);
LAB_144a7dd43:
  if (local_res18 != (FRenderCurveSceneParameters *)0x0) {
    local_res18->InstanceCount =
         *(int *)&(this->Datas).field_0x8 - *(int *)&(this->Datas).field_0x34;
    local_a8._padding_._4_4_ = 0;
    local_a8._padding_ = 0;
    local_a8._padding_._0_1_ = None;
    local_a8._padding_._0_4_ = 0xffffffff;
    if (((pFVar14->Desc).Usage & DrawIndirect) != None) {
      local_a8._padding_._0_1_ = ByteAddressBuffer|UnorderedAccess|Volatile;
    }
    local_a8.Buffer = pFVar14;
    pFVar18 = FRDGBuilder::CreateSRV(pFVar30,&local_a8);
    pFVar10 = local_res18;
    local_88._padding_._0_4_ = 0xffffffff;
    local_88._padding_._4_4_ = 0;
    local_88._padding_ = 0;
    local_res18->RenderCurveInstanceData = pFVar18;
    local_88._padding_._0_1_ = 0;
    if (((pFVar17->Desc).Usage & DrawIndirect) != None) {
      local_88._padding_._0_1_ = 0x1c;
    }
    local_88.Buffer = pFVar17;
    pFVar18 = FRDGBuilder::CreateSRV(pFVar30,&local_88);
    pFVar10->ClusterData = pFVar18;
    pFVar10->ClusterCount = (this->Header).TotalClusterCount;
    pFVar10->MaxClusterStrideInBytes = (this->Header).ClusterStideInBytes;
  }
  FRHIComputeCommandList::SetGPUMask(this_00,FVar6);
  return;
}

// GetClusterCount @ 144a7f3d0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

uint __thiscall
RenderCurve::FRenderCurveSceneExtension::GetClusterCount(FRenderCurveSceneExtension *this)

{
  return (this->Header).TotalClusterCount;
}

// GetInstanceCount @ 144a81e50

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

uint __thiscall
RenderCurve::FRenderCurveSceneExtension::GetInstanceCount(FRenderCurveSceneExtension *this)

{
  return *(int *)&(this->Datas).field_0x8 - *(int *)&(this->Datas).field_0x34;
}

// InitExtension @ 144a99f40

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
RenderCurve::FRenderCurveSceneExtension::InitExtension
          (FRenderCurveSceneExtension *this,FScene *param_1)

{
  bool bVar1;
  
  bVar1 = InternalIsEnabled(param_1);
  SetEnabled(this,bVar1);
  return;
}

// IsEnabled @ 144a9bbe0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall RenderCurve::FRenderCurveSceneExtension::IsEnabled(FRenderCurveSceneExtension *this)

{
  return (this->Buffers).Ptr != (FBuffers *)0x0;
}

// SetEnabled @ 144aaff50

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
RenderCurve::FRenderCurveSceneExtension::SetEnabled(FRenderCurveSceneExtension *this,bool param_1)

{
  TUniquePtr<RenderCurve::FRenderCurveSceneExtension::FBuffers,TDefaultDelete<RenderCurve::FRenderCurveSceneExtension::FBuffers>_>
  *pTVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  FBuffers *pFVar5;
  FRDGPooledBuffer *pFVar6;
  undefined8 *puVar7;
  longlong lVar8;
  FBuffers *pFVar9;
  undefined8 local_18 [2];
  
  pFVar9 = (this->Buffers).Ptr;
  pTVar1 = &this->Buffers;
  if (param_1 != (pFVar9 != (FBuffers *)0x0)) {
    if (param_1) {
      pFVar9 = ::operator_new(0x28);
      if (pFVar9 == (FBuffers *)0x0) {
        pFVar9 = (FBuffers *)0x0;
      }
      else {
        UE::RendererPrivateUtils::Implementation::FPersistentBuffer::FPersistentBuffer
                  ((FPersistentBuffer *)pFVar9,0x200,
                   L"RenderCurve.Scene.RenderCurveInstanceDataBuffer",true);
        (pFVar9->ClusterDataBuffer).Reference = (FRDGPooledBuffer *)0x0;
      }
      if (pTVar1 == (TUniquePtr<RenderCurve::FRenderCurveSceneExtension::FBuffers,TDefaultDelete<RenderCurve::FRenderCurveSceneExtension::FBuffers>_>
                     *)local_18) {
        if (pFVar9 != (FBuffers *)0x0) {
          pFVar6 = (pFVar9->ClusterDataBuffer).Reference;
          if (pFVar6 != (FRDGPooledBuffer *)0x0) {
            plVar2 = &pFVar6->_padding_;
            LOCK();
            lVar8 = *plVar2;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if (((int)lVar8 == 1) && (plVar2 != (longlong *)0x0)) {
              (**(code **)pFVar6->_padding_)(pFVar6,1);
            }
          }
          pFVar6 = ((TRefCountPtr<FRDGPooledBuffer> *)
                   &(pFVar9->RenderCurveInstanceDataBuffer).field_0x18)->Reference;
          if (pFVar6 != (FRDGPooledBuffer *)0x0) {
            plVar2 = &pFVar6->_padding_;
            LOCK();
            lVar8 = *plVar2;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if (((int)lVar8 == 1) && (plVar2 != (longlong *)0x0)) {
              (**(code **)pFVar6->_padding_)(pFVar6,1);
            }
          }
          ::operator_delete(pFVar9,0x28);
        }
      }
      else {
        pFVar5 = pTVar1->Ptr;
        pTVar1->Ptr = pFVar9;
        if (pFVar5 != (FBuffers *)0x0) {
          pFVar6 = (pFVar5->ClusterDataBuffer).Reference;
          if (pFVar6 != (FRDGPooledBuffer *)0x0) {
            plVar2 = &pFVar6->_padding_;
            LOCK();
            lVar8 = *plVar2;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if (((int)lVar8 == 1) && (plVar2 != (longlong *)0x0)) {
              (**(code **)pFVar6->_padding_)(pFVar6,1);
            }
          }
          puVar7 = *(undefined8 **)&(pFVar5->RenderCurveInstanceDataBuffer).field_0x18;
          if (puVar7 != (undefined8 *)0x0) {
            piVar3 = (int *)(puVar7 + 1);
            LOCK();
            iVar4 = *piVar3;
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if ((iVar4 == 1) && (piVar3 != (int *)0x0)) {
              (**(code **)*puVar7)(puVar7,1);
            }
          }
          ::operator_delete(pFVar5,0x28);
        }
      }
    }
    else {
      pTVar1->Ptr = (FBuffers *)0x0;
      if (pFVar9 != (FBuffers *)0x0) {
        pFVar6 = (pFVar9->ClusterDataBuffer).Reference;
        if (pFVar6 != (FRDGPooledBuffer *)0x0) {
          plVar2 = &pFVar6->_padding_;
          LOCK();
          lVar8 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if (((int)lVar8 == 1) && (plVar2 != (longlong *)0x0)) {
            (**(code **)pFVar6->_padding_)(pFVar6,1);
          }
        }
        puVar7 = *(undefined8 **)&(pFVar9->RenderCurveInstanceDataBuffer).field_0x18;
        if (puVar7 != (undefined8 *)0x0) {
          piVar3 = (int *)(puVar7 + 1);
          LOCK();
          iVar4 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if ((iVar4 == 1) && (piVar3 != (int *)0x0)) {
            (**(code **)*puVar7)(puVar7,1);
          }
        }
        ::operator_delete(pFVar9,0x28);
      }
      *(undefined4 *)&(this->Datas).field_0x8 = 0;
      if (*(int *)&(this->Datas).field_0xc < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,(ForAnyElementType *)&this->Datas,0,(int *)&(this->Datas).field_0xc);
      }
      *(undefined4 *)&(this->Datas).field_0x30 = 0xffffffff;
      *(undefined4 *)&(this->Datas).field_0x34 = 0;
      *(undefined4 *)&(this->Datas).field_0x28 = 0;
      this->bDirtyData = false;
    }
  }
  return;
}

// ShouldCreateExtension @ 144ab1060

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl RenderCurve::FRenderCurveSceneExtension::ShouldCreateExtension(FScene *param_1)

{
  TConsoleVariableData<int> *pTVar1;
  bool bVar2;
  EShaderPlatform EVar3;
  longlong lVar4;
  
  pTVar1 = CVarRenderCurve.Ref;
  bVar2 = IsInParallelGameThread();
  if (!bVar2) {
    bVar2 = IsInGameThread();
    if (!bVar2) {
      lVar4 = 4;
      goto LAB_144a9badf;
    }
  }
  lVar4 = 0;
LAB_144a9badf:
  if (0 < *(int *)((longlong)pTVar1->ShadowedValue + lVar4)) {
    EVar3 = FSceneInterface::GetShaderPlatform((FSceneInterface *)param_1);
    bVar2 = IsHairStrandsEnabled(All,EVar3);
    if (bVar2) {
      return true;
    }
  }
  return false;
}

