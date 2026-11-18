// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// FPageTableUpdater @ 148710390

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FPageTableUpdater * __thiscall
UE::SVT::FPageTableUpdater::FPageTableUpdater(FPageTableUpdater *this)

{
  (this->UpdatesUploadBuffer).Reference = (FRDGPooledBuffer *)0x0;
  (this->Batches).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Batches).ArrayNum = 0;
  (this->Batches).ArrayMax = 0;
  ResetState(this);
  return this;
}

// Add_GetRef @ 148720530

/* WARNING: Removing unreachable block (ram,0x000148720733) */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UE::SVT::FPageTableUpdater::Add_GetRef
          (FPageTableUpdater *this,TRefCountPtr<IPooledRenderTarget> *param_1,int param_2,
          int param_3,uchar **param_4,uchar **param_5)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  TArray<UE::SVT::FPageTableUpdater::FBatch,TSizedDefaultAllocator<32>_> *pTVar6;
  FScriptContainerElement *pFVar7;
  IPooledRenderTarget *local_28;
  int local_20;
  undefined4 local_1c;
  
  if ((this->MaxNumUpdates < this->NumWrittenUpdates + param_3) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(NumWrittenUpdates + InNumUpdates) <= MaxNumUpdates",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SparseVolumeTexture\\SparseVolumeTextureUpload.cpp"
                         ,0x1be,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((this->DataPtr == (uchar *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SparseVolumeTexture\\SparseVolumeTextureUpload.cpp"
                         ,0x1bf,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar5 = (this->Batches).ArrayNum;
  if (iVar5 != 0) {
    uVar4 = 0;
    if ((int)(iVar5 - 1U) < iVar5) {
      uVar4 = ~(iVar5 - 1U) >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar7 = (this->Batches).AllocatorInstance.Data +
             (longlong)((this->Batches).ArrayNum + -1) * 0x10;
    if (((pFVar7 != (FScriptContainerElement *)0x0) &&
        (*(IPooledRenderTarget **)pFVar7 == param_1->Reference)) &&
       (*(int *)(pFVar7 + 8) == param_2)) goto LAB_148720739;
  }
  pTVar6 = &this->Batches;
  local_28 = param_1->Reference;
  if (local_28 != (IPooledRenderTarget *)0x0) {
    (**(code **)(local_28->_padding_ + 0x30))();
  }
  pFVar7 = (pTVar6->AllocatorInstance).Data;
  local_1c = 0;
  local_20 = param_2;
  if (((pFVar7 <= (FScriptContainerElement *)&local_28) &&
      ((FScriptContainerElement *)&local_28 < pFVar7 + (longlong)(this->Batches).ArrayMax * 0x10))
     && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar5 = (this->Batches).ArrayNum;
  piVar1 = &(this->Batches).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar6->AllocatorInstance,piVar1);
    (this->Batches).ArrayNum = iVar5;
  }
  (this->Batches).ArrayNum = iVar5 + 1;
  pFVar7 = (pTVar6->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
  *(longlong *)pFVar7 = 0;
  *(IPooledRenderTarget **)pFVar7 = local_28;
  *(int *)(pFVar7 + 8) = local_20;
  *(undefined4 *)(pFVar7 + 0xc) = local_1c;
LAB_148720739:
  *param_4 = this->DataPtr + (longlong)this->NumWrittenUpdates * 4;
  *param_5 = this->DataPtr + (longlong)(this->NumWrittenUpdates + this->MaxNumUpdates) * 4;
  *(int *)(pFVar7 + 0xc) = *(int *)(pFVar7 + 0xc) + param_3;
  this->NumWrittenUpdates = this->NumWrittenUpdates + param_3;
  return;
}

// Apply @ 148721e60

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

void __thiscall UE::SVT::FPageTableUpdater::Apply(FPageTableUpdater *this,FRDGBuilder *param_1)

{
  int *piVar1;
  longlong *plVar2;
  TRDGHandleRegistry<TRDGHandle<FRDGView,unsigned_int>,2> *pTVar3;
  longlong lVar4;
  FRDGPooledBuffer *pFVar5;
  code *pcVar6;
  FRDGBuffer *pFVar7;
  bool bVar8;
  undefined1 uVar9;
  int iVar10;
  FGlobalShaderMap *this_00;
  FGlobalShaderType *pFVar11;
  FShaderType *pFVar12;
  FName this_01;
  FRDGTexture *pFVar13;
  FRDGTextureUAV *pFVar14;
  undefined8 *puVar15;
  FRDGEventName *pFVar16;
  FShaderParametersMetadata *pFVar17;
  FRDGTexture *pFVar18;
  ulonglong uVar19;
  FScriptContainerElement *pFVar20;
  FScriptContainerElement *pFVar21;
  uint uVar22;
  undefined1 local_res8;
  undefined7 uStackX_9;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_118 [4];
  int local_114;
  undefined4 local_110;
  uint local_10c;
  undefined1 local_108 [2];
  undefined4 local_106;
  undefined1 local_102;
  undefined1 local_101;
  char local_100;
  FRDGTexture *local_f8;
  undefined8 *local_f0;
  uint local_e8;
  FRDGBufferSRV *local_e0;
  FScriptContainerElement *local_d8;
  TIntVector3<int>_u_0 local_c8;
  FRDGBufferSRVDesc local_b8;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_98;
  undefined1 local_88 [8];
  FString local_80;
  TShaderRefBase<FSparseVolumeTextureUpdatePageTableCS,FShaderMapPointerTable> local_68;
  FRDGEventName local_58;
  
  local_10c = 0;
  if ((0 < this->MaxNumUpdates) &&
     (FRHICommandListBase::UnlockBuffer
                ((FRHICommandListBase *)param_1->_padding_,
                 (((this->UpdatesUploadBuffer).Reference)->Buffer).Reference),
     0 < this->NumWrittenUpdates)) {
    if ((GRHIGlobals.SupportsEfficientAsyncCompute == false) ||
       ((GSVTStreamingAsyncCompute == 0 || (GNumExplicitGPUsForRendering != 1)))) {
      local_110 = CONCAT22(local_110._2_2_,2);
    }
    else {
      local_110 = 4;
    }
    this_00 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)GMaxRHIFeatureLevel]
                                );
    pFVar11 = FSparseVolumeTextureUpdatePageTableCS::GetStaticType();
    if (*(int *)&pFVar11->field_0x50 != 1) {
      local_res8 = 0;
      `FGlobalShaderMap::GetShader<FSparseVolumeTextureUpdatePageTableCS>'::__l2::<lambda_1>::
      operator()(&local_res8);
    }
    pFVar12 = (FShaderType *)FSparseVolumeTextureUpdatePageTableCS::GetStaticType();
    FGlobalShaderMap::GetShader(this_00,&local_98,pFVar12,0);
    if (local_98.ShaderContent == (FShader *)0x0) {
      this_01 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_88);
      ::FName::ToString((FName *)this_01,&local_80);
      FSparseVolumeTextureUpdatePageTableCS::GetStaticType();
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Shader.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                         ,0xc0,L"Failed to find shader type %s in Platform %s");
      if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_80.Data.AllocatorInstance.Data);
      }
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    FSparseVolumeTextureUpdatePageTableCS::GetStaticType();
    iVar10 = (this->Batches).ArrayNum;
    pFVar20 = (this->Batches).AllocatorInstance.Data;
    pFVar21 = pFVar20 + (longlong)iVar10 * 0x10;
    local_68.ShaderContent = (FSparseVolumeTextureUpdatePageTableCS *)local_98.ShaderContent;
    local_68.ShaderMap = local_98.ShaderMap;
    while( true ) {
      if ((this->Batches).ArrayNum != iVar10) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<UE::SVT::FPageTableUpdater::FBatch,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res18);
      }
      if (pFVar20 == pFVar21) break;
      if ((*(longlong *)&pFVar20->field_0x0 == 0) ||
         (pFVar13 = FRDGBuilder::FindExternalTexture
                              (param_1,*(FRHITexture **)(*(longlong *)&pFVar20->field_0x0 + 8)),
         pFVar13 == (FRDGTexture *)0x0)) {
        pFVar13 = FRDGBuilder::RegisterExternalTexture
                            (param_1,(TRefCountPtr<IPooledRenderTarget> *)pFVar20,None);
      }
      FRDGBuilder::UseInternalAccessMode(param_1,(FRDGViewableResource *)pFVar13);
      pFVar20 = pFVar20 + 0x10;
    }
    local_e8 = (this->Batches).ArrayNum;
    uVar19 = (ulonglong)(int)local_e8;
    pFVar20 = (this->Batches).AllocatorInstance.Data;
    local_d8 = pFVar20 + uVar19 * 0x10;
    local_114 = 0;
    while( true ) {
      pFVar21 = local_d8;
      pFVar13 = (FRDGTexture *)0x0;
      if ((this->Batches).ArrayNum != (int)uVar19) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<UE::SVT::FPageTableUpdater::FBatch,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res20);
      }
      if (pFVar20 == pFVar21) break;
      if (((*(longlong *)pFVar20 == 0) ||
          (pFVar13 = FRDGBuilder::FindExternalTexture
                               (param_1,*(FRHITexture **)(*(longlong *)pFVar20 + 8)),
          pFVar13 == (FRDGTexture *)0x0)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("PageTableRDG",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SparseVolumeTexture\\SparseVolumeTextureUpload.cpp"
                             ,0x1ed,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      local_108[1] = pFVar20[8];
      local_108[0] = 0x1c;
      local_106 = 0;
      local_102 = 0;
      local_100 = '\0';
      local_f8 = pFVar13;
      FRDGUserValidation::ValidateCreateUAV
                (&param_1->UserValidation,(FRDGTextureUAVDesc *)local_108);
      pFVar13 = local_f8;
      pTVar3 = &param_1->Views;
      pFVar14 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x50,8);
      lVar4 = pFVar13->_padding_;
      *(byte *)&pFVar14->_padding_ = (byte)pFVar14->_padding_ & 0xfe;
      pFVar14->_padding_ = lVar4;
      pFVar14->_padding_ = 0;
      *(undefined1 *)&pFVar14->_padding_ = 0;
      *(undefined8 *)((longlong)&pFVar14->_padding_ + 4) = 0xffffffffffffffff;
      *(undefined1 *)&pFVar14->_padding_ = 0;
      pFVar14->_padding_ = (longlong)&___7FRDGTextureUAV__6B_;
      *(undefined1 *)&(pFVar14->Desc)._padding_ = local_108[0];
      *(FScriptContainerElement *)((longlong)&(pFVar14->Desc)._padding_ + 1) = local_108[1];
      *(undefined2 *)((longlong)&(pFVar14->Desc)._padding_ + 2) = (undefined2)local_106;
      *(undefined2 *)((longlong)&(pFVar14->Desc)._padding_ + 4) = local_106._2_2_;
      *(undefined1 *)&(pFVar14->Desc)._padding_ = 0;
      *(undefined1 *)((longlong)&(pFVar14->Desc)._padding_ + 6) = local_102;
      *(char *)&(pFVar14->Desc)._padding_ = local_100;
      if (local_100 != '\0') {
        *(undefined1 *)((longlong)&(pFVar14->Desc)._padding_ + 7) = local_101;
      }
      (pFVar14->Desc).Texture = local_f8;
      iVar10 = (param_1->Views).Array.ArrayNum;
      if (iVar10 == (param_1->Views).Array.ArrayMax) {
        iVar10 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGView_*>_>
                           (0x808,(ForElementType<FRDGView_*> *)pTVar3,
                            &(param_1->Views).Array.ArrayMax);
      }
      (param_1->Views).Array.ArrayNum = iVar10 + 1;
      (pTVar3->Array).AllocatorInstance.Data[iVar10] = (FRDGView *)pFVar14;
      *(int *)((longlong)&pFVar14->_padding_ + 4) = (param_1->Views).Array.ArrayNum + -1;
      FRDGUserValidation::ValidateCreateUAV(&param_1->UserValidation,pFVar14);
      local_b8.Buffer = FRDGBuilder::RegisterExternalBuffer(param_1,&this->UpdatesUploadBuffer,None)
      ;
      local_b8._padding_._4_4_ = 0;
      local_b8._padding_ = 0;
      local_b8._padding_._0_4_ = 0xffffffff;
      uVar9 = 0;
      if ((((local_b8.Buffer)->Desc).Usage & DrawIndirect) != None) {
        uVar9 = 0x1c;
      }
      local_b8._padding_._0_4_ = CONCAT31((int3)((uint)(undefined4)local_b8._padding_ >> 8),uVar9);
      FRDGUserValidation::ValidateCreateSRV(&param_1->UserValidation,&local_b8);
      pFVar7 = local_b8.Buffer;
      local_e0 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x50,8);
      lVar4 = pFVar7->_padding_;
      *(byte *)&local_e0->_padding_ = (byte)local_e0->_padding_ & 0xfe;
      *(undefined8 *)((longlong)&local_e0->_padding_ + 4) = 0xffffffffffffffff;
      local_e0->_padding_ = lVar4;
      local_e0->_padding_ = 0;
      *(undefined1 *)&local_e0->_padding_ = 3;
      local_e0->_padding_ = (longlong)&___7FRDGBufferSRV__6B_;
      (local_e0->Desc)._padding_ = CONCAT44(local_b8._padding_._4_4_,(undefined4)local_b8._padding_)
      ;
      (local_e0->Desc)._padding_ = CONCAT44(local_b8._padding_._4_4_,(undefined4)local_b8._padding_)
      ;
      (local_e0->Desc)._padding_ = local_b8._padding_;
      (local_e0->Desc).Buffer = local_b8.Buffer;
      iVar10 = (param_1->Views).Array.ArrayNum;
      if (iVar10 == (param_1->Views).Array.ArrayMax) {
        iVar10 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGView_*>_>
                           (0x808,(ForElementType<FRDGView_*> *)pTVar3,
                            &(param_1->Views).Array.ArrayMax);
      }
      (param_1->Views).Array.ArrayNum = iVar10 + 1;
      (pTVar3->Array).AllocatorInstance.Data[iVar10] = (FRDGView *)local_e0;
      *(int *)((longlong)&local_e0->_padding_ + 4) = (param_1->Views).Array.ArrayNum + -1;
      FRDGUserValidation::ValidateCreateSRV(&param_1->UserValidation,local_e0);
      puVar15 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x30,0x10);
      if (puVar15 == (undefined8 *)0x0) {
        puVar15 = (undefined8 *)0x0;
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Object",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                           ,0x61,L"");
        if (bVar8) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      else {
        *puVar15 = &
                   ___7__TObject_VFParameters_FSparseVolumeTextureUpdatePageTableCS___FRDGAllocator__6B_
        ;
        puVar15[2] = 0;
        puVar15[3] = 0;
      }
      local_f0 = puVar15;
      if ((((undefined8 **)param_1->_padding_ <= &local_f0) &&
          (&local_f0 <
           (undefined8 **)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4))) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar10 = (int)param_1->_padding_;
      piVar1 = (int *)((longlong)&param_1->_padding_ + 4);
      if (iVar10 == *piVar1) {
        iVar10 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,(ForAnyElementType *)&param_1->_padding_,piVar1);
      }
      uVar22 = local_10c;
      *(int *)&param_1->_padding_ = iVar10 + 1;
      *(undefined8 **)(param_1->_padding_ + (longlong)iVar10 * 8) = local_f0;
      *(int *)(puVar15 + 4) = local_114;
      puVar15[3] = local_e0;
      ((FParameters *)(puVar15 + 2))->PageTable = pFVar14;
      *(int *)((longlong)puVar15 + 0x24) = local_114 + this->MaxNumUpdates;
      *(undefined4 *)(puVar15 + 5) = *(undefined4 *)(pFVar20 + 0xc);
      iVar10 = *(int *)(pFVar20 + 0xc);
      pFVar16 = FRDGEventName::FRDGEventName(&local_58,L"Update SVT PageTable (UpdateCount: %u)");
      pFVar17 = FSparseVolumeTextureUpdatePageTableCS::FParameters::FTypeInfo::GetStructMetadata();
      local_c8._s_0.Y = 1;
      local_c8._s_0.Z = 1;
      local_c8._s_0.X = (int)(iVar10 + 0x3f + (iVar10 + 0x3f >> 0x1f & 0x3fU)) >> 6;
      FComputeShaderUtils::AddPass<FSparseVolumeTextureUpdatePageTableCS>
                (param_1,pFVar16,(ERDGPassFlags)local_110,&local_68,pFVar17,
                 (FParameters *)(puVar15 + 2),(TIntVector3<int> *)&local_c8._s_0);
      if ((uVar22 & 2) != 0) {
        uVar22 = uVar22 & 0xfffffffd;
        if ((void *)CONCAT71(uStackX_9,local_res8) != (void *)0x0) {
          FMemory::Free((void *)CONCAT71(uStackX_9,local_res8));
        }
      }
      local_10c = uVar22 & 0xfffffffe;
      if (local_58.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
      {
        FMemory::Free(local_58.FormattedEventName.Data.AllocatorInstance.Data);
      }
      local_114 = local_114 + *(int *)(pFVar20 + 0xc);
      pFVar20 = pFVar20 + 0x10;
      uVar19 = (ulonglong)local_e8;
    }
    iVar10 = (this->Batches).ArrayNum;
    pFVar20 = (this->Batches).AllocatorInstance.Data;
    pFVar21 = pFVar20 + (longlong)iVar10 * 0x10;
    while( true ) {
      if ((this->Batches).ArrayNum != iVar10) {
        local_118[0] = 0;
        `TCheckedPointerIterator<UE::SVT::FPageTableUpdater::FBatch,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_118);
      }
      if (pFVar20 == pFVar21) break;
      pFVar18 = pFVar13;
      if (((*(longlong *)pFVar20 == 0) ||
          (pFVar18 = FRDGBuilder::FindExternalTexture
                               (param_1,*(FRHITexture **)(*(longlong *)pFVar20 + 8)),
          pFVar18 == (FRDGTexture *)0x0)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("PageTableRDG",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SparseVolumeTexture\\SparseVolumeTextureUpload.cpp"
                             ,0x208,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      FRDGBuilder::UseExternalAccessMode(param_1,(FRDGViewableResource *)pFVar18,SRVMask,All);
      pFVar20 = pFVar20 + 0x10;
    }
  }
  pFVar5 = (this->UpdatesUploadBuffer).Reference;
  if (pFVar5 != (FRDGPooledBuffer *)0x0) {
    (this->UpdatesUploadBuffer).Reference = (FRDGPooledBuffer *)0x0;
    plVar2 = &pFVar5->_padding_;
    LOCK();
    lVar4 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if (((int)lVar4 == 1) && (plVar2 != (longlong *)0x0)) {
      (**(code **)pFVar5->_padding_)(pFVar5,1);
    }
  }
  ResetState(this);
  return;
}

// Init @ 148743120

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
UE::SVT::FPageTableUpdater::Init
          (FPageTableUpdater *this,FRDGBuilder *param_1,int param_2,int param_3)

{
  longlong *plVar1;
  FRDGPooledBuffer *pFVar2;
  longlong lVar3;
  bool bVar4;
  uchar *puVar5;
  undefined4 uStack_2c;
  FRDGBufferDesc local_20;
  
  ResetState(this);
  this->MaxNumUpdates = param_2;
  if (-1 < param_3) {
    if ((this->Batches).ArrayMax < param_3) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,param_3,&(this->Batches).AllocatorInstance,(this->Batches).ArrayNum,
                 &(this->Batches).ArrayMax);
    }
    bVar4 = IsRegistered(param_1,&this->UpdatesUploadBuffer);
    if ((bVar4) &&
       (pFVar2 = (this->UpdatesUploadBuffer).Reference, pFVar2 != (FRDGPooledBuffer *)0x0)) {
      (this->UpdatesUploadBuffer).Reference = (FRDGPooledBuffer *)0x0;
      plVar1 = &pFVar2->_padding_;
      LOCK();
      lVar3 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar3 == 1) && (plVar1 != (longlong *)0x0)) {
        (**(code **)pFVar2->_padding_)(pFVar2,1);
      }
    }
    if (0 < this->MaxNumUpdates) {
      local_20.NumElements = (this->MaxNumUpdates & 0x1fffffffU) << 1;
      local_20.BytesPerElement = 4;
      local_20._12_4_ = uStack_2c;
      local_20.Usage = StructuredBuffer|ShaderResource|ByteAddressBuffer|Dynamic;
      local_20.Metadata = (FShaderParametersMetadata *)0x0;
      AllocatePooledBuffer
                (&local_20,&this->UpdatesUploadBuffer,
                 L"SparseVolumeTexture.PageTableUpdatesUploadBuffer",Page);
      puVar5 = FRHICommandListBase::LockBuffer
                         ((FRHICommandListBase *)param_1->_padding_,
                          (((this->UpdatesUploadBuffer).Reference)->Buffer).Reference,0,
                          this->MaxNumUpdates << 3,RLM_WriteOnly);
      this->DataPtr = puVar5;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_3);
}

// Release @ 148751b50

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UE::SVT::FPageTableUpdater::Release(FPageTableUpdater *this)

{
  longlong *plVar1;
  FRDGPooledBuffer *pFVar2;
  longlong lVar3;
  
  pFVar2 = (this->UpdatesUploadBuffer).Reference;
  if (pFVar2 != (FRDGPooledBuffer *)0x0) {
    (this->UpdatesUploadBuffer).Reference = (FRDGPooledBuffer *)0x0;
    plVar1 = &pFVar2->_padding_;
    LOCK();
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar3 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar2->_padding_)(pFVar2,1);
    }
  }
  ResetState(this);
  return;
}

// ResetState @ 148754b10

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UE::SVT::FPageTableUpdater::ResetState(FPageTableUpdater *this)

{
  int *piVar1;
  int iVar2;
  FBatch *pFVar3;
  
  piVar1 = &(this->Batches).ArrayMax;
  pFVar3 = (FBatch *)(this->Batches).AllocatorInstance.Data;
  iVar2 = (this->Batches).ArrayNum;
  if ((this->Batches).ArrayMax < 0) {
    DestructItems<UE::SVT::FPageTableUpdater::FBatch,int>(pFVar3,iVar2);
    (this->Batches).ArrayNum = 0;
    if (*piVar1 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&(this->Batches).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<UE::SVT::FPageTableUpdater::FBatch,int>(pFVar3,iVar2);
    (this->Batches).ArrayNum = 0;
  }
  this->DataPtr = (uchar *)0x0;
  this->NumWrittenUpdates = 0;
  this->MaxNumUpdates = 0;
  return;
}

