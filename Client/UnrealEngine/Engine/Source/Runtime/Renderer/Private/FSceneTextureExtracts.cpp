// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 4

// ReleaseRHI @ 1454c6cb0

void __thiscall FSceneTextureExtracts::ReleaseRHI(FSceneTextureExtracts *this)

{
  TUniformBufferRef<FSceneTextureUniformParameters> *pTVar1;
  IPooledRenderTarget *pIVar2;
  TUniformBufferRef<FSceneTextureUniformParameters> this_00;
  TUniformBufferRef<FMobileSceneTextureUniformParameters> this_01;
  TUniformBufferRef<FMobileSceneTextureUniformParameters> *pTVar3;
  undefined8 uStack_18;
  TUniformBufferRef<FMobileSceneTextureUniformParameters> TStack_10;
  
  pIVar2 = (this->Depth).Reference;
  if (pIVar2 != (IPooledRenderTarget *)0x0) {
    (this->Depth).Reference = (IPooledRenderTarget *)0x0;
    (**(code **)(pIVar2->_padding_ + 0x38))();
  }
  pIVar2 = (this->CustomDepth).Reference;
  if (pIVar2 != (IPooledRenderTarget *)0x0) {
    (this->CustomDepth).Reference = (IPooledRenderTarget *)0x0;
    (**(code **)(pIVar2->_padding_ + 0x38))();
  }
  pTVar1 = &this->UniformBuffer;
  if (pTVar1 != (TUniformBufferRef<FSceneTextureUniformParameters> *)&uStack_18) {
    this_00 = *pTVar1;
    *pTVar1 = (TUniformBufferRef<FSceneTextureUniformParameters>)0x0;
    if (this_00 != (TUniformBufferRef<FSceneTextureUniformParameters>)0x0) {
      FRHIResource::Release((FRHIResource *)this_00);
    }
  }
  pTVar3 = &this->MobileUniformBuffer;
  if (pTVar3 != &TStack_10) {
    this_01 = *pTVar3;
    *pTVar3 = (TUniformBufferRef<FMobileSceneTextureUniformParameters>)0x0;
    if (this_01 != (TUniformBufferRef<FMobileSceneTextureUniformParameters>)0x0) {
      FRHIResource::Release((FRHIResource *)this_01);
    }
  }
  return;
}

// operator() @ 1454dc2b0

void __thiscall
`FSceneTextureExtracts::QueueExtractions'::__l2::<lambda_2>::operator()
          (void *this,FRHICommandList *param_1)

{
  FRDGResource *pFVar1;
  FRHIResource *pFVar2;
  code *pcVar3;
  bool bVar4;
  FShaderParametersMetadata *pFVar5;
  longlong *plVar6;
  longlong *plVar7;
  FRHIResource *this_00;
  longlong local_18;
  longlong local_10;
  
  if (*(int *)((longlong)this + 0x10) == 1) {
    pFVar1 = (FRDGResource *)**(undefined8 **)((longlong)this + 8);
    FRDGResource::ValidateRHIAccess(pFVar1);
    this_00 = pFVar1->ResourceRHI;
    if (this_00 != (FRHIResource *)0x0) {
      FRHIResource::AddRef(this_00);
      pFVar5 = FSceneTextureUniformParameters::GetStructMetadata();
      if (((pFVar5->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsLayoutInitialized()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                             ,0x17c,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((FName)(pFVar5->Layout).Reference != this_00[2].OwnerName) {
        pFVar5 = FSceneTextureUniformParameters::GetStructMetadata();
        if (((pFVar5->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsLayoutInitialized()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                               ,0x177,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("!InRHIRef || TUniformBufferMetadataHelper<TBufferStruct>::GetStructMetadata()->GetLayoutPtr() == InRHIRef->GetLayoutPtr()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                           ,0x96,
                           L"Attempted to create a uniform buffer of type \'%s\' from uniform buffer pointer of type \'%s\'"
                          );
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
    }
    plVar7 = &local_18;
    plVar6 = (longlong *)(*(longlong *)this + 0x38);
  }
  else {
    pFVar1 = (FRDGResource *)(*(undefined8 **)((longlong)this + 8))[2];
    FRDGResource::ValidateRHIAccess(pFVar1);
    this_00 = pFVar1->ResourceRHI;
    if (this_00 != (FRHIResource *)0x0) {
      FRHIResource::AddRef(this_00);
      pFVar5 = FMobileSceneTextureUniformParameters::GetStructMetadata();
      if (((pFVar5->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsLayoutInitialized()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                             ,0x17c,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((FName)(pFVar5->Layout).Reference != this_00[2].OwnerName) {
        pFVar5 = FMobileSceneTextureUniformParameters::GetStructMetadata();
        if (((pFVar5->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsLayoutInitialized()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                               ,0x177,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("!InRHIRef || TUniformBufferMetadataHelper<TBufferStruct>::GetStructMetadata()->GetLayoutPtr() == InRHIRef->GetLayoutPtr()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                           ,0x96,
                           L"Attempted to create a uniform buffer of type \'%s\' from uniform buffer pointer of type \'%s\'"
                          );
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
    }
    plVar7 = &local_10;
    plVar6 = (longlong *)(*(longlong *)this + 0x40);
  }
  if (plVar6 != plVar7) {
    pFVar2 = (FRHIResource *)*plVar6;
    *plVar6 = (longlong)this_00;
    this_00 = pFVar2;
  }
  if (this_00 != (FRHIResource *)0x0) {
    FRHIResource::Release(this_00);
  }
  return;
}

// QueueExtractions @ 145501a90

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FSceneTextureExtracts::QueueExtractions
          (FSceneTextureExtracts *this,FRDGBuilder *param_1,FSceneTextures *param_2)

{
  int *piVar1;
  FSceneTextureShaderParameters *pFVar2;
  Type TVar3;
  FRDGTexture *pFVar4;
  code *pcVar5;
  FSceneTextureShaderParameters *pFVar6;
  bool bVar7;
  int iVar8;
  undefined8 *puVar9;
  TRDGUniformBuffer<FSceneTextureUniformParameters> *pTVar10;
  FShaderParametersMetadata *pFVar11;
  TRDGUniformBuffer<FMobileSceneTextureUniformParameters> *pTVar12;
  FRDGEventName *pFVar13;
  undefined8 *puVar14;
  ESceneTextureSetupMode EVar15;
  EUniformBufferBindingFlags EVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined8 *local_98 [2];
  <lambda_2> local_88;
  FRDGEventName local_68;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  puVar14 = (undefined8 *)0x0;
  EVar15 = None;
  Release(this);
  if ((param_2->_padding_ & 1) != 0) {
    pFVar4 = (FRDGTexture *)param_2->_padding_;
    EVar15 = SceneDepth;
    if (((pFVar4 != (FRDGTexture *)0x0) && ((pFVar4->_padding_ & 0x400) != 0)) &&
       ((*(uint *)&pFVar4->Desc >> 0xc & 1) == 0)) {
      FRDGBuilder::QueueTextureExtraction(param_1,pFVar4,&this->Depth,AllowTransient);
    }
    pFVar4 = (FRDGTexture *)param_2->_padding_;
    if (((pFVar4 != (FRDGTexture *)0x0) && ((pFVar4->_padding_ & 0x400) != 0)) &&
       ((*(uint *)&pFVar4->Desc >> 0xc & 1) == 0)) {
      FRDGBuilder::QueueTextureExtraction(param_1,pFVar4,&this->PartialDepth,AllowTransient);
    }
  }
  if ((param_2->_padding_ & 2) != 0) {
    pFVar4 = (FRDGTexture *)param_2->_padding_;
    EVar15 = EVar15 | CustomDepth;
    if (((pFVar4 != (FRDGTexture *)0x0) && ((pFVar4->_padding_ & 0x400) != 0)) &&
       ((*(uint *)&pFVar4->Desc >> 0xc & 1) == 0)) {
      FRDGBuilder::QueueTextureExtraction(param_1,pFVar4,&this->CustomDepth,AllowTransient);
    }
  }
  puVar9 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x30,0x10);
  if (puVar9 == (undefined8 *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else {
    puVar9[2] = 0;
    *puVar9 = &___7__TObject_VFSceneTextureShaderParameters___FRDGAllocator__6B_;
    *(undefined1 *)(puVar9 + 3) = 1;
    puVar9[4] = 0;
    *(undefined1 *)(puVar9 + 5) = 1;
    puVar14 = puVar9;
  }
  local_98[0] = puVar14;
  if (((undefined8 **)param_1->_padding_ <= local_98) &&
     (local_98 < (undefined8 **)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4))) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar8 = (int)param_1->_padding_;
  piVar1 = (int *)((longlong)&param_1->_padding_ + 4);
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)&param_1->_padding_,piVar1);
  }
  pFVar2 = (FSceneTextureShaderParameters *)(puVar14 + 2);
  *(int *)&param_1->_padding_ = iVar8 + 1;
  local_48 = 0;
  uStack_40 = CONCAT31(uStack_40._1_3_,1);
  local_38 = 0;
  *(undefined8 **)(param_1->_padding_ + (longlong)iVar8 * 8) = local_98[0];
  TVar3 = (Type)param_2->_padding_;
  uStack_30 = CONCAT31(uStack_30._1_3_,1);
  if ((int)TVar3 < 3) {
    pTVar12 = CreateMobileSceneTextureUniformBuffer(param_1,param_2,EVar15 >> 8);
    pFVar11 = FMobileSceneTextureUniformParameters::GetStructMetadata();
    pFVar6 = local_88.PassParameters;
    EVar16 = Static;
    if (pFVar11->BindingFlags != StaticAndShader) {
      EVar16 = pFVar11->BindingFlags;
    }
    local_88.PassParameters =
         (FSceneTextureShaderParameters *)CONCAT71(local_88.PassParameters._1_7_,EVar16);
    local_88.__this._0_4_ = SUB84(pTVar12,0);
    local_88.__this._4_4_ = (undefined4)((ulonglong)pTVar12 >> 0x20);
    local_88.PassParameters._4_4_ = SUB84(pFVar6,4);
    uVar17 = (undefined4)local_48;
    uVar18 = local_48._4_4_;
    uVar19 = uStack_40;
    uStack_2c = local_88.PassParameters._4_4_;
  }
  else {
    pTVar10 = CreateSceneTextureUniformBuffer(param_1,param_2,TVar3,EVar15);
    pFVar11 = FSceneTextureUniformParameters::GetStructMetadata();
    pFVar6 = local_88.PassParameters;
    EVar16 = Static;
    if (pFVar11->BindingFlags != StaticAndShader) {
      EVar16 = pFVar11->BindingFlags;
    }
    local_88.PassParameters =
         (FSceneTextureShaderParameters *)CONCAT71(local_88.PassParameters._1_7_,EVar16);
    local_88.__this._0_4_ = SUB84(pTVar10,0);
    local_88.__this._4_4_ = (undefined4)((ulonglong)pTVar10 >> 0x20);
    local_88.PassParameters._4_4_ = SUB84(pFVar6,4);
    uVar17 = local_88.__this._0_4_;
    uVar18 = local_88.__this._4_4_;
    uVar19 = local_88.PassParameters._0_4_;
    uStack_3c = local_88.PassParameters._4_4_;
    local_88.__this._0_4_ = (undefined4)local_38;
    local_88.__this._4_4_ = local_38._4_4_;
    local_88.PassParameters._0_4_ = uStack_30;
  }
  *(undefined4 *)&pFVar2->SceneTextures = uVar17;
  *(undefined4 *)((longlong)puVar14 + 0x14) = uVar18;
  *(undefined4 *)(puVar14 + 3) = uVar19;
  *(undefined4 *)((longlong)puVar14 + 0x1c) = uStack_3c;
  *(undefined4 *)(puVar14 + 4) = local_88.__this._0_4_;
  *(undefined4 *)((longlong)puVar14 + 0x24) = local_88.__this._4_4_;
  *(undefined4 *)(puVar14 + 5) = local_88.PassParameters._0_4_;
  *(undefined4 *)((longlong)puVar14 + 0x2c) = uStack_2c;
  local_88.ShadingPath = *(EShadingPath *)((longlong)&param_2->_padding_ + 4);
  local_88.__this = this;
  local_88.PassParameters = pFVar2;
  pFVar13 = FRDGEventName::FRDGEventName(&local_68,1,L"ExtractUniformBuffer");
  FRDGBuilder::
  AddPass<FSceneTextureShaderParameters,_FSceneTextureExtracts::QueueExtractions_::__l2::<lambda_2>_>
            (param_1,pFVar13,pFVar2,SkipRenderPass|NeverCull|Compute|Raster,&local_88);
  if (local_68.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.FormattedEventName.Data.AllocatorInstance.Data);
  }
  return;
}

// Release @ 145502a10

void __thiscall FSceneTextureExtracts::Release(FSceneTextureExtracts *this)

{
  TUniformBufferRef<FSceneTextureUniformParameters> *pTVar1;
  IPooledRenderTarget *pIVar2;
  TUniformBufferRef<FSceneTextureUniformParameters> this_00;
  TUniformBufferRef<FMobileSceneTextureUniformParameters> this_01;
  TUniformBufferRef<FMobileSceneTextureUniformParameters> *pTVar3;
  undefined8 local_18;
  TUniformBufferRef<FMobileSceneTextureUniformParameters> local_10;
  
  pIVar2 = (this->Depth).Reference;
  if (pIVar2 != (IPooledRenderTarget *)0x0) {
    (this->Depth).Reference = (IPooledRenderTarget *)0x0;
    (**(code **)(pIVar2->_padding_ + 0x38))();
  }
  pIVar2 = (this->CustomDepth).Reference;
  if (pIVar2 != (IPooledRenderTarget *)0x0) {
    (this->CustomDepth).Reference = (IPooledRenderTarget *)0x0;
    (**(code **)(pIVar2->_padding_ + 0x38))();
  }
  pTVar1 = &this->UniformBuffer;
  if (pTVar1 != (TUniformBufferRef<FSceneTextureUniformParameters> *)&local_18) {
    this_00 = *pTVar1;
    *pTVar1 = (TUniformBufferRef<FSceneTextureUniformParameters>)0x0;
    if (this_00 != (TUniformBufferRef<FSceneTextureUniformParameters>)0x0) {
      FRHIResource::Release((FRHIResource *)this_00);
    }
  }
  pTVar3 = &this->MobileUniformBuffer;
  if (pTVar3 != &local_10) {
    this_01 = *pTVar3;
    *pTVar3 = (TUniformBufferRef<FMobileSceneTextureUniformParameters>)0x0;
    if (this_01 != (TUniformBufferRef<FMobileSceneTextureUniformParameters>)0x0) {
      FRHIResource::Release((FRHIResource *)this_01);
    }
  }
  return;
}

