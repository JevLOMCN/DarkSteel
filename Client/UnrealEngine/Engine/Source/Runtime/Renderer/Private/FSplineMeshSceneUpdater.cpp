// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 5

// operator() @ 1456e1340

void __thiscall
`FSplineMeshSceneUpdater::PostSceneUpdate'::__l2::<lambda_1>::operator()
          (void *this,FPrimitiveSlot *param_1)

{
  uint uVar1;
  uint local_res10 [2];
  
  uVar1 = 0;
  if (param_1->NumSplines != 0) {
    do {
      local_res10[0] = param_1->FirstSplineIndex + uVar1;
      TArray<unsigned_int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::
      AddUniqueImpl<unsigned_int>
                ((TArray<unsigned_int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
                  *)(*(longlong *)this + 0x10),local_res10);
      uVar1 = uVar1 + 1;
    } while (uVar1 < param_1->NumSplines);
  }
  return;
}

// AddUpdatePass @ 1456f1e10

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall
FSplineMeshSceneUpdater::AddUpdatePass
          (FSplineMeshSceneUpdater *this,FRDGBuilder *param_1,FSceneUniformBuffer *param_2,
          FRDGTexture *param_3,FRDGTexture *param_4,TVector2<float> param_5,TVector2<float> param_6,
          bool param_7,bool param_8)

{
  int *piVar1;
  EUniformBufferBindingFlags EVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  FRDGTextureUAV *pFVar7;
  FRDGTextureUAV *pFVar8;
  FRDGBuffer *pFVar9;
  undefined8 *puVar10;
  TRDGUniformBuffer<FSceneUniformParameters> *pTVar11;
  FShaderParametersMetadata *pFVar12;
  FRDGBufferSRV *pFVar13;
  FGlobalShaderMap *this_00;
  FGlobalShaderType *pFVar14;
  FShaderType *pFVar15;
  FName this_01;
  longlong lVar16;
  FRDGEventName *pFVar17;
  EUniformBufferBindingFlags EVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  undefined1 local_res20 [8];
  undefined8 *local_188 [2];
  undefined8 local_178;
  int iStack_170;
  undefined4 uStack_16c;
  TShaderRefBase<FSplineMeshTextureFillCS,FShaderMapPointerTable> local_168;
  undefined8 local_158;
  FRDGTextureUAVDesc local_148;
  FRDGTextureUAVDesc local_130;
  FRDGBufferSRVDesc local_118;
  TIntVector3<int>_u_0 local_f8;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_e8;
  TArrayView<unsigned_int,int> local_d8;
  FString local_c8;
  FSplineMeshTextureFillCS *local_b8;
  FShaderMapBase *pFStack_b0;
  FShaderParametersMetadata *local_a8;
  FRDGEventName local_a0;
  FScopedCapture local_88;
  
  uVar20 = 0;
  RenderCaptureInterface::FScopedCapture::FScopedCapture
            (&local_88,0 < GSplineMeshSceneTexturesCaptureNextUpdate,param_1,
             L"Spline Mesh Texture Update",(wchar_t *)0x0);
  if (0 < GSplineMeshSceneTexturesCaptureNextUpdate) {
    GSplineMeshSceneTexturesCaptureNextUpdate = GSplineMeshSceneTexturesCaptureNextUpdate + -1;
  }
  local_148._padding_._0_1_ = (param_3->Desc).field_0x34;
  local_148._padding_._1_1_ = 0;
  local_148._padding_._2_4_ = 0;
  local_148._padding_._6_1_ = 0;
  local_148._padding_._0_1_ = 0;
  local_148.Texture = param_3;
  pFVar7 = FRDGBuilder::CreateUAV(param_1,&local_148,None);
  local_130.Texture = param_4;
  local_130._padding_._1_1_ = 0;
  local_130._padding_._2_4_ = 0;
  local_130._padding_._0_1_ = (param_4->Desc).field_0x34;
  local_130._padding_._6_1_ = 0;
  local_130._padding_._0_1_ = 0;
  pFVar8 = FRDGBuilder::CreateUAV(param_1,&local_130,None);
  if (param_8 != false) {
    AddClearUAVPass(param_1,pFVar7,&FLinearColor::Black,Compute);
    AddClearUAVPass(param_1,pFVar8,&FLinearColor::Black,Compute);
  }
  if ((param_7 == false) && (uVar20 = (this->UpdateRequests).ArrayNum, uVar20 != 0)) {
    local_168.ShaderMap =
         (FShaderMapBase *)
         CONCAT44(local_168.ShaderMap._4_4_,StructuredBuffer|ShaderResource|UnorderedAccess|Static);
    local_168.ShaderContent = (FSplineMeshTextureFillCS *)CONCAT44(uVar20,4);
    local_158 = 0;
    local_b8 = local_168.ShaderContent;
    pFStack_b0 = local_168.ShaderMap;
    local_a8 = (FShaderParametersMetadata *)0x0;
    pFVar9 = FRDGBuilder::CreateBuffer
                       (param_1,(FRDGBufferDesc *)&local_b8,L"SplineMesh.UpdateRequests",None);
    local_178 = (this->UpdateRequests).AllocatorInstance.Data;
    iStack_170 = (this->UpdateRequests).ArrayNum;
    if ((iStack_170 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_d8._12_4_ = uStack_16c;
    local_d8.ArrayNum = iStack_170;
    local_d8.DataPtr = local_178;
    FRDGBuilder::QueueBufferUpload<unsigned_int>(param_1,pFVar9,&local_d8,None);
  }
  else {
    pFVar9 = GetInternalDefaultBuffer<unsigned_int>
                       (param_1,(TArray<FDefaultBuffer,TSizedDefaultAllocator<32>_> *)
                                &GSystemTextures.field_0x150,
                        (FHashTable *)&GSystemTextures.field_0x180,4,StructuredBuffer,(uint *)0x0);
  }
  lVar16 = this->SceneData->_padding_;
  puVar10 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x50,0x10);
  if (puVar10 == (undefined8 *)0x0) {
    puVar10 = (undefined8 *)0x0;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    *(undefined1 *)(puVar10 + 3) = 1;
    *puVar10 = &___7__TObject_VFParameters_FSplineMeshTextureFillCS___FRDGAllocator__6B_;
    puVar10[2] = 0;
    puVar10[4] = 0;
    puVar10[5] = 0;
    puVar10[6] = 0;
    puVar10[7] = 0;
  }
  local_188[0] = puVar10;
  if ((((undefined8 **)param_1->_padding_ <= local_188) &&
      (local_188 < (undefined8 **)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4)))
     && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar6 = (int)param_1->_padding_;
  piVar1 = (int *)((longlong)&param_1->_padding_ + 4);
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)&param_1->_padding_,piVar1);
  }
  *(int *)&param_1->_padding_ = iVar6 + 1;
  *(undefined8 **)(param_1->_padding_ + (longlong)iVar6 * 8) = local_188[0];
  pTVar11 = FSceneUniformBuffer::GetBuffer(param_2,param_1);
  pFVar12 = FSceneUniformParameters::FTypeInfo::GetStructMetadata();
  EVar2 = pFVar12->BindingFlags;
  puVar10[4] = pFVar7;
  EVar18 = Static;
  if (EVar2 != StaticAndShader) {
    EVar18 = EVar2;
  }
  puVar10[5] = pFVar8;
  local_118._padding_._0_4_ = CONCAT31(local_118._padding_._1_3_,EVar18);
  *(TRDGUniformBuffer<FSceneUniformParameters> **)&((FParameters *)(puVar10 + 2))->Scene = pTVar11;
  puVar10[3] = CONCAT44(local_118._padding_._4_4_,(undefined4)local_118._padding_);
  local_118._padding_ = (longlong)pTVar11;
  pFVar13 = FSplineMeshSceneExtension::GetInstanceIdLookupSRV(this->SceneData,param_1,param_8);
  puVar10[6] = pFVar13;
  local_118._padding_ = 0;
  local_118._padding_._0_4_ = 0xffffffff;
  uVar5 = 0;
  if (((pFVar9->Desc).Usage & DrawIndirect) != None) {
    uVar5 = 0x1c;
  }
  local_118._padding_ = CONCAT71((int7)((ulonglong)local_118._padding_ >> 8),uVar5) & 0xffffffff;
  local_118.Buffer = pFVar9;
  pFVar13 = FRDGBuilder::CreateSRV(param_1,&local_118);
  puVar10[7] = pFVar13;
  *(float *)((longlong)puVar10 + 0x44) = param_5.field0_0x0._s_0.Y;
  *(float *)(puVar10 + 9) = param_6.field0_0x0._s_0.Y;
  *(uint *)(puVar10 + 8) = uVar20;
  this_00 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[*(int *)(lVar16 + 8)]);
  pFVar14 = FSplineMeshTextureFillCS::GetStaticType();
  if (*(int *)&pFVar14->field_0x50 != 1) {
    param_7 = false;
    `FGlobalShaderMap::GetShader<FSplineMeshTextureFillCS>'::__l2::<lambda_1>::operator()(&param_7);
  }
  pFVar15 = (FShaderType *)FSplineMeshTextureFillCS::GetStaticType();
  FGlobalShaderMap::GetShader(this_00,&local_e8,pFVar15,0);
  if (local_e8.ShaderContent == (FShader *)0x0) {
    this_01 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res20);
    ::FName::ToString((FName *)this_01,&local_c8);
    FSplineMeshTextureFillCS::GetStaticType();
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FSplineMeshTextureFillCS::GetStaticType();
  local_168.ShaderContent = (FSplineMeshTextureFillCS *)local_e8.ShaderContent;
  local_168.ShaderMap = local_e8.ShaderMap;
  if (uVar20 == 0) {
    lVar16 = 0x78;
    if ((this->SceneData->SlotAllocator).bGrowOnly == false) {
      lVar16 = 0x74;
    }
    uVar20 = *(uint *)((this->SceneData->SlotAllocator).FreeSpans.AllocatorInstance.InlineData +
                      lVar16 + -0x80);
  }
  if (((GRHIGlobals.MaxDispatchThreadGroupsPerDimension.field0_0x0._s_0.X < 0x80) ||
      (GRHIGlobals.MaxDispatchThreadGroupsPerDimension.field0_0x0._s_0.Y < 0x80)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("GRHIGlobals.MaxDispatchThreadGroupsPerDimension.X >= WrappedGroupStride && GRHIGlobals.MaxDispatchThreadGroupsPerDimension.Y >= WrappedGroupStride"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphUtils.h"
                         ,400,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar19 = 1;
  iVar6 = 1;
  uVar21 = uVar20;
  if (GRHIGlobals.MaxDispatchThreadGroupsPerDimension.field0_0x0._s_0.X < (int)uVar20) {
    uVar21 = 0x80;
    iVar19 = (int)(((int)(uVar20 + 0x7f) >> 0x1f & 0x7fU) + uVar20 + 0x7f) >> 7;
  }
  if (GRHIGlobals.MaxDispatchThreadGroupsPerDimension.field0_0x0._s_0.Y < iVar19) {
    iVar6 = iVar19 + 0x7f;
    iVar19 = 0x80;
    iVar6 = (int)((iVar6 >> 0x1f & 0x7fU) + iVar6) >> 7;
  }
  if (((int)(uVar21 * iVar19 * iVar6) < (int)uVar20) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TargetGroupCount <= GroupCount.X * GroupCount.Y * GroupCount.Z",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphUtils.h"
                         ,0x19f,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_178 = (uint *)CONCAT44(iVar19,uVar21);
  pFVar17 = FRDGEventName::FRDGEventName(&local_a0,1,L"SplineMeshTextureUpdate");
  pFVar12 = FSplineMeshTextureFillCS::FParameters::FTypeInfo::GetStructMetadata();
  local_f8._0_8_ = local_178;
  local_f8._s_0.Z = iVar6;
  FComputeShaderUtils::AddPass<FSplineMeshTextureFillCS>
            (param_1,pFVar17,Compute,&local_168,pFVar12,(FParameters *)(puVar10 + 2),
             (TIntVector3<int> *)&local_f8._s_0);
  if (local_a0.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0.FormattedEventName.Data.AllocatorInstance.Data);
  }
  RenderCaptureInterface::FScopedCapture::~FScopedCapture(&local_88);
  return;
}

// PostGPUSceneUpdate @ 145719460

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FSplineMeshSceneUpdater::PostGPUSceneUpdate
          (FSplineMeshSceneUpdater *this,FRDGBuilder *param_1,FSceneUniformBuffer *param_2)

{
  ulonglong uVar1;
  int iVar2;
  IPooledRenderTarget *pIVar3;
  code *pcVar4;
  bool bVar5;
  TConsoleVariableData<int> *pTVar6;
  bool bVar7;
  bool bVar8;
  longlong lVar9;
  FRDGTexture *pFVar10;
  FRDGTexture *pFVar11;
  FRDGTexture *pFVar12;
  TRefCountPtr<IPooledRenderTarget> *pTVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  IPooledRenderTarget *pIVar17;
  TIntPoint<int> TVar18;
  IPooledRenderTarget *pIVar19;
  FSplineMeshSceneExtension *pFVar20;
  IPooledRenderTarget *pIVar21;
  undefined1 auStackY_1d8 [32];
  bool local_188;
  undefined8 local_180;
  uint local_178;
  undefined8 local_170;
  IPooledRenderTarget *local_120;
  IPooledRenderTarget *local_118;
  IPooledRenderTarget *local_110;
  IPooledRenderTarget *local_108;
  undefined1 local_f8 [64];
  void *local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined1 local_a8 [64];
  void *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  pFVar20 = this->SceneData;
  pIVar17 = (IPooledRenderTarget *)0x0;
  uVar16 = 0;
  if (*(int *)&(pFVar20->RegisteredPrimitives).field_0x8 !=
      *(int *)&(pFVar20->RegisteredPrimitives).field_0x34) {
    lVar9 = 0x78;
    if ((pFVar20->SlotAllocator).bGrowOnly == false) {
      lVar9 = 0x74;
    }
    bVar5 = true;
    bVar8 = false;
    uVar14 = *(int *)((pFVar20->SlotAllocator).FreeSpans.AllocatorInstance.InlineData +
                     lVar9 + -0x80) - 1;
    uVar15 = uVar14 >> 6 & 0x55555555;
    uVar14 = uVar14 >> 7 & 0x55555555;
    uVar14 = (uVar14 >> 1 ^ uVar14) & 0x33333333;
    uVar14 = (uVar14 >> 2 ^ uVar14) & 0xf0f0f0f;
    uVar14 = (uVar14 >> 4 ^ uVar14) & 0xff00ff;
    uVar15 = (uVar15 >> 1 ^ uVar15) & 0x33333333;
    uVar14 = uVar14 >> 8 ^ uVar14;
    uVar15 = (uVar15 >> 2 ^ uVar15) & 0xf0f0f0f;
    uVar15 = (uVar15 >> 4 ^ uVar15) & 0xff00ff;
    uVar15 = uVar15 >> 8 ^ uVar15;
    if ((ushort)uVar14 < (ushort)uVar15) {
      uVar14 = uVar15;
    }
    uVar1 = ((ulonglong)uVar14 & 0xffff) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_178 = (1 << ((byte)lVar9 & 0x1f)) << 6;
    pIVar19 = (pFVar20->SavedPosTexture).Reference;
    if (pIVar19 != (IPooledRenderTarget *)0x0) {
      lVar9 = (**(code **)(pIVar19->_padding_ + 0x10))();
      pFVar20 = this->SceneData;
      uVar16 = *(uint *)(lVar9 + 0x2c);
    }
    if ((0x4000 < local_178) && (local_178 = 0x4000, pFVar20->bOverflowError == false)) {
      if (1 < (byte)LogRenderer._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogRenderer);
      }
      this->SceneData->bOverflowError = true;
    }
    pTVar6 = CVarSplineMeshSceneTexturesForceUpdate.Ref;
    bVar7 = IsInParallelRenderingThread();
    if ((!bVar7) &&
       (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<6409875433831007955>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                           ,0x6d3,"IsInParallelRenderingThread()"), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar2 = pTVar6->ShadowedValue[1];
    pIVar19 = (this->SceneData->SavedPosTexture).Reference;
    if ((pIVar19 == (IPooledRenderTarget *)0x0) || (local_188 = false, iVar2 != 0)) {
      local_188 = true;
    }
    if (local_178 == uVar16) {
      if ((pIVar19 == (IPooledRenderTarget *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("SceneData->SavedPosTexture.IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SplineMeshSceneResources.cpp"
                             ,0x1d2,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar10 = FRDGBuilder::RegisterExternalTexture
                          (param_1,&this->SceneData->SavedPosTexture,L"SplineMesh.SplinePosTexture",
                           None);
      if (((this->SceneData->SavedRotTexture).Reference == (IPooledRenderTarget *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("SceneData->SavedRotTexture.IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SplineMeshSceneResources.cpp"
                             ,0x1d5,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar11 = FRDGBuilder::RegisterExternalTexture
                          (param_1,&this->SceneData->SavedRotTexture,L"SplineMesh.SplineRotTexture",
                           None);
    }
    else {
      local_f8._28_4_ = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
      local_180._4_4_ = local_178;
      local_180._0_4_ = local_178;
      local_f8._36_8_ = local_180;
      local_f8._24_4_ = 0;
      local_f8._0_8_ = 0x20008;
      local_f8._8_8_ = 0;
      local_f8._16_8_ = 0;
      local_f8._32_4_ = 0;
      local_f8._44_4_ = 0x10001;
      local_f8._48_4_ = 0x1000101;
      local_f8._52_2_ = 0xff00;
      local_b8 = (void *)0x0;
      local_b0 = 0;
      local_ac = 1;
      pFVar10 = FRDGBuilder::CreateTexture
                          (param_1,(FRDGTextureDesc *)local_f8,L"SplineMesh.SplinePosTexture",None);
      if (local_b8 != (void *)0x0) {
        FMemory::Free(local_b8);
      }
      local_a8._28_4_ = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
      local_170._4_4_ = local_178;
      local_170._0_4_ = local_178;
      local_a8._36_8_ = local_170;
      local_a8._24_4_ = 0;
      local_a8._0_8_ = 0x20008;
      local_a8._8_8_ = 0;
      local_a8._16_8_ = 0;
      local_a8._32_4_ = 0;
      local_a8._44_4_ = 0x10001;
      local_a8._48_4_ = 0x3f000101;
      local_a8._52_2_ = 0xff00;
      local_68 = (void *)0x0;
      local_60 = 0;
      local_5c = 1;
      pFVar11 = FRDGBuilder::CreateTexture
                          (param_1,(FRDGTextureDesc *)local_a8,L"SplineMesh.SplineRotTexture",None);
      if (local_68 != (void *)0x0) {
        FMemory::Free(local_68);
      }
      if (local_188 == false) {
        pFVar12 = FRDGBuilder::RegisterExternalTexture
                            (param_1,&this->SceneData->SavedPosTexture,
                             L"SplineMesh.PrevSplinePosTexture",None);
        if (local_178 < uVar16) {
          uVar16 = local_178;
        }
        TVar18.field0_0x0._s_0.Y = uVar16;
        TVar18.field0_0x0._s_0.X = uVar16;
        AddCopyTexturePass(param_1,pFVar12,pFVar10,UE::Math::TIntPoint<int>::ZeroValue,
                           UE::Math::TIntPoint<int>::ZeroValue,TVar18);
        pFVar12 = FRDGBuilder::RegisterExternalTexture
                            (param_1,&this->SceneData->SavedRotTexture,
                             L"SplineMesh.PrevSplineRotTexture",None);
        AddCopyTexturePass(param_1,pFVar12,pFVar11,UE::Math::TIntPoint<int>::ZeroValue,
                           UE::Math::TIntPoint<int>::ZeroValue,TVar18);
      }
      pIVar19 = pIVar17;
      pIVar21 = pIVar17;
      if (iVar2 == 0) {
        pTVar13 = FRDGBuilder::ConvertToExternalTexture(param_1,pFVar10);
        local_120 = pTVar13->Reference;
        if (local_120 != (IPooledRenderTarget *)0x0) {
          (**(code **)(local_120->_padding_ + 0x30))(local_120);
        }
        bVar5 = false;
        bVar8 = true;
        pIVar19 = local_120;
        pIVar21 = local_118;
      }
      pIVar3 = (this->SceneData->SavedPosTexture).Reference;
      if (pIVar3 != pIVar19) {
        (this->SceneData->SavedPosTexture).Reference = pIVar19;
        if (pIVar19 != (IPooledRenderTarget *)0x0) {
          (**(code **)(pIVar19->_padding_ + 0x30))(pIVar19);
        }
        if (pIVar3 != (IPooledRenderTarget *)0x0) {
          (**(code **)(pIVar3->_padding_ + 0x38))();
        }
      }
      if ((bVar8) && (local_120 != (IPooledRenderTarget *)0x0)) {
        (**(code **)(local_120->_padding_ + 0x38))(local_120);
      }
      if ((bVar5) && (pIVar21 != (IPooledRenderTarget *)0x0)) {
        (**(code **)(pIVar21->_padding_ + 0x38))(pIVar21);
      }
      if (iVar2 == 0) {
        pTVar13 = FRDGBuilder::ConvertToExternalTexture(param_1,pFVar11);
        local_110 = pTVar13->Reference;
        if (local_110 != (IPooledRenderTarget *)0x0) {
          (**(code **)(local_110->_padding_ + 0x30))(local_110);
        }
        bVar5 = false;
        bVar8 = true;
        pIVar17 = local_110;
      }
      else {
        bVar5 = true;
        bVar8 = false;
        local_108 = pIVar17;
      }
      pIVar19 = (this->SceneData->SavedRotTexture).Reference;
      if (pIVar19 != pIVar17) {
        (this->SceneData->SavedRotTexture).Reference = pIVar17;
        if (pIVar17 != (IPooledRenderTarget *)0x0) {
          (**(code **)(pIVar17->_padding_ + 0x30))(pIVar17);
        }
        if (pIVar19 != (IPooledRenderTarget *)0x0) {
          (**(code **)(pIVar19->_padding_ + 0x38))(pIVar19);
        }
      }
      if ((bVar8) && (local_110 != (IPooledRenderTarget *)0x0)) {
        (**(code **)(local_110->_padding_ + 0x38))(local_110);
      }
      if ((bVar5) && (local_108 != (IPooledRenderTarget *)0x0)) {
        (**(code **)(local_108->_padding_ + 0x38))(local_108);
      }
    }
    local_180._4_4_ = (undefined4)local_178;
    local_180._0_4_ = local_180._4_4_;
    local_170._4_4_ = __real_3f800000 / (float)local_180._4_4_;
    local_170._0_4_ = __real_3f800000 / (float)local_180._4_4_;
    if ((local_188 != false) || (0 < (this->UpdateRequests).ArrayNum)) {
      AddUpdatePass(this,param_1,param_2,pFVar10,pFVar11,local_180,local_170,local_188,iVar2 != 0);
    }
  }
  return;
}

// PostSceneUpdate @ 145719ad0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FSplineMeshSceneUpdater::PostSceneUpdate
          (FSplineMeshSceneUpdater *this,FRDGBuilder *param_1,FScenePostUpdateChangeSet *param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  FSplineMeshSceneExtension *this_00;
  IPooledRenderTarget *pIVar3;
  FRDGPooledBuffer *pFVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  <lambda_1> local_res8 [4];
  <lambda_2> local_18;
  
  local_18.RequestUpdate = local_res8;
  local_res8[0].__this = this;
  local_18.__this = this;
  TSceneUpdateCommandQueue<FPrimitiveSceneInfo,enum_EPrimitiveUpdateDirtyFlags,enum_EPrimitiveUpdateId>
  ::ForEachUpdateCommand<_FSplineMeshSceneUpdater::PostSceneUpdate_::__l2::<lambda_2>_>
            (param_2->PrimitiveUpdates,AddedUpdated,3,&local_18);
  this_00 = this->SceneData;
  if (*(int *)&(this_00->RegisteredPrimitives).field_0x8 ==
      *(int *)&(this_00->RegisteredPrimitives).field_0x34) {
    pIVar3 = (this_00->SavedPosTexture).Reference;
    if (pIVar3 != (IPooledRenderTarget *)0x0) {
      (this_00->SavedPosTexture).Reference = (IPooledRenderTarget *)0x0;
      (**(code **)(pIVar3->_padding_ + 0x38))();
    }
    pIVar3 = (this_00->SavedRotTexture).Reference;
    if (pIVar3 != (IPooledRenderTarget *)0x0) {
      (this_00->SavedRotTexture).Reference = (IPooledRenderTarget *)0x0;
      (**(code **)(pIVar3->_padding_ + 0x38))();
    }
    pFVar4 = (this_00->SavedIdLookup).Reference;
    if (pFVar4 != (FRDGPooledBuffer *)0x0) {
      (this_00->SavedIdLookup).Reference = (FRDGPooledBuffer *)0x0;
      plVar1 = &pFVar4->_padding_;
      LOCK();
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar6 == 1) && (plVar1 != (longlong *)0x0)) {
        (**(code **)pFVar4->_padding_)(pFVar4,1);
      }
    }
  }
  else {
    lVar6 = 0x78;
    if ((this_00->SlotAllocator).bGrowOnly == false) {
      lVar6 = 0x74;
    }
    uVar7 = (this_00->SlotAllocator).CurrentSize - 1;
    uVar8 = uVar7 >> 6 & 0x55555555;
    uVar7 = uVar7 >> 7 & 0x55555555;
    uVar7 = (uVar7 >> 1 ^ uVar7) & 0x33333333;
    uVar7 = (uVar7 >> 2 ^ uVar7) & 0xf0f0f0f;
    uVar7 = (uVar7 >> 4 ^ uVar7) & 0xff00ff;
    uVar8 = (uVar8 >> 1 ^ uVar8) & 0x33333333;
    uVar7 = uVar7 >> 8 ^ uVar7;
    uVar8 = (uVar8 >> 2 ^ uVar8) & 0xf0f0f0f;
    uVar8 = (uVar8 >> 4 ^ uVar8) & 0xff00ff;
    uVar8 = uVar8 >> 8 ^ uVar8;
    if ((ushort)uVar7 < (ushort)uVar8) {
      uVar7 = uVar8;
    }
    uVar8 = *(int *)((this_00->SlotAllocator).FreeSpans.AllocatorInstance.InlineData + lVar6 + -0x80
                    ) - 1;
    uVar2 = ((ulonglong)uVar7 & 0xffff) * 2 + 1;
    lVar6 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    uVar9 = uVar8 >> 6 & 0x55555555;
    uVar7 = uVar8 >> 7 & 0x55555555;
    uVar7 = (uVar7 >> 1 ^ uVar7) & 0x33333333;
    uVar7 = (uVar7 >> 2 ^ uVar7) & 0xf0f0f0f;
    uVar7 = (uVar7 >> 4 ^ uVar7) & 0xff00ff;
    uVar8 = (uVar9 >> 1 ^ uVar9) & 0x33333333;
    uVar8 = (uVar8 >> 2 ^ uVar8) & 0xf0f0f0f;
    uVar8 = (uVar8 >> 4 ^ uVar8) & 0xff00ff;
    uVar8 = uVar8 >> 8 ^ uVar8;
    uVar7 = uVar7 >> 8 ^ uVar7;
    if ((ushort)uVar7 < (ushort)uVar8) {
      uVar7 = uVar8;
    }
    uVar2 = ((ulonglong)uVar7 & 0xffff) * 2 + 1;
    lVar5 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    if ((uint)(0x40 << ((byte)lVar6 & 0x1f)) < (uint)(0x40 << ((byte)lVar5 & 0x1f))) {
      FSplineMeshSceneExtension::DefragTexture(this_00);
      return;
    }
  }
  return;
}

// PreSceneUpdate @ 145719cf0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FSplineMeshSceneUpdater::PreSceneUpdate
          (FSplineMeshSceneUpdater *this,FRDGBuilder *param_1,FScenePreUpdateChangeSet *param_2,
          FSceneUniformBuffer *param_3)

{
  int *piVar1;
  FPrimitiveSceneInfo **ppFVar2;
  FScriptContainerElement *_Dst;
  FPrimitiveSceneInfo *pFVar3;
  FSplineMeshSceneExtension *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  TTuple<FPrimitiveSceneInfo_const_*,FSplineMeshSceneExtension::FPrimitiveSlot> *pTVar10;
  longlong lVar11;
  ForElementType<FSpanAllocator::FLinearAllocation> FVar12;
  uint uVar13;
  ForElementType<FSpanAllocator::FLinearAllocation> FVar14;
  uint uVar15;
  int *piVar16;
  FPrimitiveSceneInfo **ppFVar17;
  FPrimitiveSceneInfo *local_res18 [2];
  int local_48;
  int iStack_44;
  
  ppFVar17 = (param_2->RemovedPrimitiveSceneInfos).DataPtr;
  ppFVar2 = ppFVar17 + (param_2->RemovedPrimitiveSceneInfos).ArrayNum;
  do {
    if (ppFVar17 == ppFVar2) {
      FSpanAllocator::Consolidate(&this->SceneData->SlotAllocator);
      return;
    }
    pFVar3 = *ppFVar17;
    if (pFVar3->Proxy->bSplineMesh != '\0') {
      pFVar4 = this->SceneData;
      pTVar10 = TSet<TTuple<FPrimitiveSceneInfo_const_*,FSplineMeshSceneExtension::FPrimitiveSlot>,TDefaultMapHashableKeyFuncs<FPrimitiveSceneInfo_const_*,FSplineMeshSceneExtension::FPrimitiveSlot,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<FPrimitiveSceneInfo_const_*,FSplineMeshSceneExtension::FPrimitiveSlot>,TDefaultMapHashableKeyFuncs<FPrimitiveSceneInfo_const_*,FSplineMeshSceneExtension::FPrimitiveSlot,0>,FDefaultSetAllocator>
                        *)&pFVar4->RegisteredPrimitives,pFVar3);
      piVar16 = (int *)&pTVar10->field_0x8;
      if (pTVar10 ==
          (TTuple<FPrimitiveSceneInfo_const_*,FSplineMeshSceneExtension::FPrimitiveSlot> *)0x0) {
        piVar16 = (int *)0x0;
      }
      if (piVar16 == (int *)0x0) {
        bVar6 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_6023595025940610907>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SplineMeshSceneResources.cpp"
                           ,0xa5,"Slot != nullptr");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      else {
        FVar12 = (pFVar4->SlotAllocator).PendingFreeSpans.AllocatorInstance.SecondaryData;
        FVar14 = (ForElementType<FSpanAllocator::FLinearAllocation>)
                 &(pFVar4->SlotAllocator).PendingFreeSpans;
        local_48 = *piVar16;
        iVar9 = piVar16[1];
        if (FVar12 == (ForElementType<FSpanAllocator::FLinearAllocation>)0x0) {
          FVar12 = FVar14;
        }
        iStack_44 = iVar9;
        if ((((ulonglong)FVar12 <= &local_48) &&
            (&local_48 <
             (int *)((longlong)FVar12 +
                    (longlong)(pFVar4->SlotAllocator).PendingFreeSpans.ArrayMax * 8))) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar7 = (pFVar4->SlotAllocator).PendingFreeSpans.ArrayNum;
        piVar1 = &(pFVar4->SlotAllocator).PendingFreeSpans.ArrayMax;
        if (iVar7 == *piVar1) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::ForElementType<FSpanAllocator::FLinearAllocation>_>
                            (0x408,(ForElementType<FSpanAllocator::FLinearAllocation> *)FVar14,
                             piVar1);
        }
        (pFVar4->SlotAllocator).PendingFreeSpans.ArrayNum = iVar7 + 1;
        FVar12 = (pFVar4->SlotAllocator).PendingFreeSpans.AllocatorInstance.SecondaryData;
        if (FVar12 != (ForElementType<FSpanAllocator::FLinearAllocation>)0x0) {
          FVar14 = FVar12;
        }
        *(ulonglong *)((longlong)FVar14 + (longlong)iVar7 * 8) = CONCAT44(iStack_44,local_48);
        uVar13 = 0;
        (pFVar4->SlotAllocator).CurrentSize = (pFVar4->SlotAllocator).CurrentSize - iVar9;
        if (piVar16[1] != 0) {
          do {
            uVar15 = *piVar16 + uVar13;
            uVar8 = 0;
            if ((int)uVar15 < (pFVar4->RegisteredInstanceIds).ArrayNum) {
              uVar8 = ~uVar15 >> 0x1f;
            }
            if ((uVar8 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            uVar13 = uVar13 + 1;
            *(undefined4 *)
             ((pFVar4->RegisteredInstanceIds).AllocatorInstance.Data + (longlong)(int)uVar15 * 4) =
                 0xffffffff;
          } while (uVar13 < (uint)piVar16[1]);
        }
        piVar16 = &(pFVar4->RegisteredInstanceIds).ArrayNum;
        uVar13 = *piVar16;
        lVar11 = 0x78;
        if ((pFVar4->SlotAllocator).bGrowOnly == false) {
          lVar11 = 0x74;
        }
        uVar8 = uVar13;
        if (*(int *)((pFVar4->SlotAllocator).FreeSpans.AllocatorInstance.InlineData + lVar11 + -0x80
                    ) < (int)uVar13) {
          uVar8 = *(uint *)((pFVar4->SlotAllocator).FreeSpans.AllocatorInstance.InlineData +
                           lVar11 + -0x80);
        }
        if ((int)uVar13 < (int)uVar8) {
          UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,uVar8 - uVar13,&(pFVar4->RegisteredInstanceIds).AllocatorInstance,piVar16,
                     &(pFVar4->RegisteredInstanceIds).ArrayMax);
        }
        else {
          if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
          }
          if ((int)uVar8 < (int)uVar13) {
            uVar13 = uVar13 - uVar8;
            if (((int)(uVar13 | uVar8) < 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x458,
                                   L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                  ), bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            if (uVar13 != 0) {
              _Dst = (pFVar4->RegisteredInstanceIds).AllocatorInstance.Data +
                     (longlong)(int)uVar8 * 4;
              iVar9 = ((pFVar4->RegisteredInstanceIds).ArrayNum - uVar8) - uVar13;
              if (iVar9 != 0) {
                memmove(_Dst,_Dst + (longlong)(int)uVar13 * 4,(longlong)iVar9 << 2);
              }
              piVar16 = &(pFVar4->RegisteredInstanceIds).ArrayNum;
              *piVar16 = *piVar16 - uVar13;
              UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,&(pFVar4->RegisteredInstanceIds).AllocatorInstance,
                         (pFVar4->RegisteredInstanceIds).ArrayNum,
                         &(pFVar4->RegisteredInstanceIds).ArrayMax);
            }
          }
        }
        local_res18[0] = pFVar3;
        if (*(int *)&(pFVar4->RegisteredPrimitives).field_0x8 !=
            *(int *)&(pFVar4->RegisteredPrimitives).field_0x34) {
          uVar13 = ((uint)((ulonglong)pFVar3 >> 0x14) & 0xffff ^ (uint)((ulonglong)pFVar3 >> 4)) *
                   -0x7a143595;
          uVar13 = (uVar13 >> 0xd ^ uVar13) * -0x3d4d51cb;
          TSet<TTuple<FPrimitiveSceneInfo_const_*,FSplineMeshSceneExtension::FPrimitiveSlot>,TDefaultMapHashableKeyFuncs<FPrimitiveSceneInfo_const_*,FSplineMeshSceneExtension::FPrimitiveSlot,0>,FDefaultSetAllocator>
          ::RemoveImpl<FPrimitiveSceneInfo_const_*>
                    ((TSet<TTuple<FPrimitiveSceneInfo_const_*,FSplineMeshSceneExtension::FPrimitiveSlot>,TDefaultMapHashableKeyFuncs<FPrimitiveSceneInfo_const_*,FSplineMeshSceneExtension::FPrimitiveSlot,0>,FDefaultSetAllocator>
                      *)&pFVar4->RegisteredPrimitives,uVar13 >> 0x10 ^ uVar13,local_res18);
        }
        pFVar4->bInstanceLookupDirty = true;
      }
    }
    ppFVar17 = ppFVar17 + 1;
  } while( true );
}

