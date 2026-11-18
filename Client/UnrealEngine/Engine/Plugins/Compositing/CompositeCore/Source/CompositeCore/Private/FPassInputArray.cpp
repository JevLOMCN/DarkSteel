// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CompositeCore
// Functions: 3

// FPassInputArray @ 14ea76050

/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FPassInputArray * __thiscall
UE::CompositeCore::FPassInputArray::FPassInputArray
          (FPassInputArray *this,FRDGBuilder *param_1,FSceneView *param_2,
          FPostProcessMaterialInputs *param_3,EPostProcessingPass *param_4)

{
  int *piVar1;
  FEngineShowFlags *pFVar2;
  EPassLocation EVar3;
  FScriptContainerElement FVar4;
  int iVar5;
  longlong lVar6;
  FScreenPassTexture *pFVar7;
  FLensDistortionLUT *pFVar8;
  FScriptContainerElement *pFVar9;
  FScreenPassTextureSlice local_78;
  FScreenPassTexture local_60;
  FScreenPassTexture local_48;
  
  piVar1 = &(this->Inputs).ArrayMax;
  (this->OverrideOutput)._padding_ = 0;
  (this->OverrideOutput)._padding_ = 0;
  (this->OverrideOutput)._padding_ = 0;
  (this->OverrideOutput).LoadAction = ENoAction;
  (this->Inputs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Inputs).ArrayNum = 0;
  *piVar1 = 0;
  Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,5,&(this->Inputs).AllocatorInstance,0,piVar1);
  iVar5 = (this->Inputs).ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&(this->Inputs).AllocatorInstance,piVar1);
  }
  (this->Inputs).ArrayNum = iVar5 + 1;
  pFVar9 = (this->Inputs).AllocatorInstance.Data + (longlong)iVar5 * 0x20;
  DefaultConstructItems<UE::CompositeCore::FPassTexture,int>(pFVar9,1);
  local_60.Texture = (FRDGTexture *)0x0;
  lVar6 = 0x98;
  if ((param_3->bUserSceneTexturesSet).Elements[0] == false) {
    lVar6 = 0x20;
  }
  local_60.ViewRect.field0_0x0._s_0.Min.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
  local_60.ViewRect.field0_0x0._s_0.Max.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
  local_78.TextureSRV = *(FRDGTextureSRV **)((longlong)(param_3->Textures).Elements + lVar6 + -0x20)
  ;
  local_78.ViewRect.field0_0x0._s_0.Min.field0_0x0 =
       (TIntPoint<int>)
       *(TIntPoint<int>_u_0 *)((longlong)((param_3->Textures).Elements + -1) + lVar6);
  local_78.ViewRect.field0_0x0._s_0.Max.field0_0x0 =
       (TIntPoint<int>)
       *(TIntPoint<int>_u_0 *)((longlong)(param_3->Textures).Elements + lVar6 + -0x10);
  pFVar7 = FScreenPassTexture::CopyFromSlice(&local_48,param_1,&local_78,&local_60);
  *(FRDGTexture **)pFVar9 = pFVar7->Texture;
  *(TIntPoint<int>_u_0 *)(pFVar9 + 8) = (pFVar7->ViewRect).field0_0x0._s_0.Min.field0_0x0;
  *(TIntPoint<int>_u_0 *)(pFVar9 + 0x10) = (pFVar7->ViewRect).field0_0x0._s_0.Max.field0_0x0;
  pFVar9[0x18] = (FScriptContainerElement)0x1;
  pFVar9[0x1a] = (FScriptContainerElement)0x1;
  pFVar8 = LensDistortion::GetLUTUnsafe(param_2);
  if ((pFVar8->DistortingDisplacementTexture != (FRDGTexture *)0x0) &&
     (pFVar8->UndistortingDisplacementTexture != (FRDGTexture *)0x0)) {
    EVar3 = LensDistortion::GetPassLocationUnsafe(param_2);
    if ((EVar3 == TSR) && (TranslucencyAfterDOF < *param_4)) {
      FVar4 = (FScriptContainerElement)0x1;
      goto LAB_14ea7619f;
    }
  }
  FVar4 = (FScriptContainerElement)0x0;
LAB_14ea7619f:
  pFVar9[0x19] = FVar4;
  if (MotionBlur < *param_4) {
    if (pFVar2->PostProcessing == 1 && pFVar2->Tonemapper == 1) {
      if (param_2->Family->SceneCaptureSource == SCS_FinalColorLDR) {
        *(undefined4 *)(pFVar9 + 0x1c) = 2;
      }
    }
    else {
      *(undefined4 *)(pFVar9 + 0x1c) = 1;
    }
  }
  iVar5 = (this->Inputs).ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&(this->Inputs).AllocatorInstance,piVar1);
  }
  (this->Inputs).ArrayNum = iVar5 + 1;
  pFVar9 = (this->Inputs).AllocatorInstance.Data + (longlong)iVar5 * 0x20;
  DefaultConstructItems<UE::CompositeCore::FPassTexture,int>(pFVar9,1);
  local_60.Texture = (FRDGTexture *)0x0;
  lVar6 = 0xb0;
  if ((param_3->bUserSceneTexturesSet).Elements[1] == false) {
    lVar6 = 0x38;
  }
  local_60.ViewRect.field0_0x0._s_0.Min.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
  local_60.ViewRect.field0_0x0._s_0.Max.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
  local_78.TextureSRV = *(FRDGTextureSRV **)((longlong)(param_3->Textures).Elements + lVar6 + -0x20)
  ;
  local_78.ViewRect.field0_0x0._s_0.Min.field0_0x0 =
       (TIntPoint<int>)
       *(TIntPoint<int>_u_0 *)((longlong)((param_3->Textures).Elements + -1) + lVar6);
  local_78.ViewRect.field0_0x0._s_0.Max.field0_0x0 =
       (TIntPoint<int>)
       *(TIntPoint<int>_u_0 *)((longlong)(param_3->Textures).Elements + lVar6 + -0x10);
  pFVar7 = FScreenPassTexture::CopyFromSlice(&local_48,param_1,&local_78,&local_60);
  *(FRDGTexture **)pFVar9 = pFVar7->Texture;
  *(TIntPoint<int>_u_0 *)(pFVar9 + 8) = (pFVar7->ViewRect).field0_0x0._s_0.Min.field0_0x0;
  *(TIntPoint<int>_u_0 *)(pFVar9 + 0x10) = (pFVar7->ViewRect).field0_0x0._s_0.Max.field0_0x0;
  pFVar9[0x18] = (FScriptContainerElement)0x1;
  iVar5 = (this->Inputs).ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&(this->Inputs).AllocatorInstance,piVar1);
  }
  (this->Inputs).ArrayNum = iVar5 + 1;
  pFVar9 = (this->Inputs).AllocatorInstance.Data + (longlong)iVar5 * 0x20;
  DefaultConstructItems<UE::CompositeCore::FPassTexture,int>(pFVar9,1);
  local_60.Texture = (FRDGTexture *)0x0;
  lVar6 = 200;
  if ((param_3->bUserSceneTexturesSet).Elements[2] == false) {
    lVar6 = 0x50;
  }
  local_60.ViewRect.field0_0x0._s_0.Min.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
  local_60.ViewRect.field0_0x0._s_0.Max.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
  local_78.TextureSRV = *(FRDGTextureSRV **)((longlong)(param_3->Textures).Elements + lVar6 + -0x20)
  ;
  local_78.ViewRect.field0_0x0._s_0.Min.field0_0x0 =
       (TIntPoint<int>)
       *(TIntPoint<int>_u_0 *)((longlong)((param_3->Textures).Elements + -1) + lVar6);
  local_78.ViewRect.field0_0x0._s_0.Max.field0_0x0 =
       (TIntPoint<int>)
       *(TIntPoint<int>_u_0 *)((longlong)(param_3->Textures).Elements + lVar6 + -0x10);
  pFVar7 = FScreenPassTexture::CopyFromSlice(&local_48,param_1,&local_78,&local_60);
  *(FRDGTexture **)pFVar9 = pFVar7->Texture;
  *(TIntPoint<int>_u_0 *)(pFVar9 + 8) = (pFVar7->ViewRect).field0_0x0._s_0.Min.field0_0x0;
  *(TIntPoint<int>_u_0 *)(pFVar9 + 0x10) = (pFVar7->ViewRect).field0_0x0._s_0.Max.field0_0x0;
  pFVar9[0x18] = (FScriptContainerElement)0x1;
  iVar5 = (this->Inputs).ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&(this->Inputs).AllocatorInstance,piVar1);
  }
  (this->Inputs).ArrayNum = iVar5 + 1;
  pFVar9 = (this->Inputs).AllocatorInstance.Data + (longlong)iVar5 * 0x20;
  DefaultConstructItems<UE::CompositeCore::FPassTexture,int>(pFVar9,1);
  local_60.Texture = (FRDGTexture *)0x0;
  lVar6 = 0xe0;
  if ((param_3->bUserSceneTexturesSet).Elements[3] == false) {
    lVar6 = 0x68;
  }
  local_60.ViewRect.field0_0x0._s_0.Min.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
  local_60.ViewRect.field0_0x0._s_0.Max.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
  local_78.TextureSRV = *(FRDGTextureSRV **)((longlong)(param_3->Textures).Elements + lVar6 + -0x20)
  ;
  local_78.ViewRect.field0_0x0._s_0.Min.field0_0x0 =
       (TIntPoint<int>)
       *(TIntPoint<int>_u_0 *)((longlong)((param_3->Textures).Elements + -1) + lVar6);
  local_78.ViewRect.field0_0x0._s_0.Max.field0_0x0 =
       (TIntPoint<int>)
       *(TIntPoint<int>_u_0 *)((longlong)(param_3->Textures).Elements + lVar6 + -0x10);
  pFVar7 = FScreenPassTexture::CopyFromSlice(&local_48,param_1,&local_78,&local_60);
  *(FRDGTexture **)pFVar9 = pFVar7->Texture;
  *(TIntPoint<int>_u_0 *)(pFVar9 + 8) = (pFVar7->ViewRect).field0_0x0._s_0.Min.field0_0x0;
  *(TIntPoint<int>_u_0 *)(pFVar9 + 0x10) = (pFVar7->ViewRect).field0_0x0._s_0.Max.field0_0x0;
  pFVar9[0x18] = (FScriptContainerElement)0x1;
  iVar5 = (this->Inputs).ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&(this->Inputs).AllocatorInstance,piVar1);
  }
  (this->Inputs).ArrayNum = iVar5 + 1;
  pFVar9 = (this->Inputs).AllocatorInstance.Data + (longlong)iVar5 * 0x20;
  DefaultConstructItems<UE::CompositeCore::FPassTexture,int>(pFVar9,1);
  local_60.Texture = (FRDGTexture *)0x0;
  lVar6 = 0xf8;
  if ((param_3->bUserSceneTexturesSet).Elements[4] == false) {
    lVar6 = 0x80;
  }
  local_60.ViewRect.field0_0x0._s_0.Min.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
  local_60.ViewRect.field0_0x0._s_0.Max.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
  local_78.TextureSRV = *(FRDGTextureSRV **)((longlong)(param_3->Textures).Elements + lVar6 + -0x20)
  ;
  local_78.ViewRect.field0_0x0._s_0.Min.field0_0x0 =
       (TIntPoint<int>)
       *(TIntPoint<int>_u_0 *)((longlong)((param_3->Textures).Elements + -1) + lVar6);
  local_78.ViewRect.field0_0x0._s_0.Max.field0_0x0 =
       (TIntPoint<int>)
       *(TIntPoint<int>_u_0 *)((longlong)(param_3->Textures).Elements + lVar6 + -0x10);
  pFVar7 = FScreenPassTexture::CopyFromSlice(&local_48,param_1,&local_78,&local_60);
  *(FRDGTexture **)pFVar9 = pFVar7->Texture;
  *(TIntPoint<int>_u_0 *)(pFVar9 + 8) = (pFVar7->ViewRect).field0_0x0._s_0.Min.field0_0x0;
  *(TIntPoint<int>_u_0 *)(pFVar9 + 0x10) = (pFVar7->ViewRect).field0_0x0._s_0.Max.field0_0x0;
  (this->OverrideOutput)._padding_ = (param_3->OverrideOutput)._padding_;
  (this->OverrideOutput)._padding_ = (param_3->OverrideOutput)._padding_;
  (this->OverrideOutput)._padding_ = (param_3->OverrideOutput)._padding_;
  (this->OverrideOutput).LoadAction = (param_3->OverrideOutput).LoadAction;
  return this;
}

// operator[] @ 14ea776f0

/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FPassTexture * __thiscall
UE::CompositeCore::FPassInputArray::operator[](FPassInputArray *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FPassTexture *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Inputs).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FPassTexture *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FPassTexture *)((this->Inputs).AllocatorInstance.Data + (longlong)param_1 * 0x20);
}

// ToPostProcessInputs @ 14ea834b0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FPostProcessMaterialInputs * __thiscall
UE::CompositeCore::FPassInputArray::ToPostProcessInputs
          (FPassInputArray *this,FPostProcessMaterialInputs *__return_storage_ptr__,
          FRDGBuilder *param_1,FSceneTextureShaderParameters *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  uint uVar6;
  FPostProcessMaterialInputs *pFVar7;
  FScreenPassTextureSlice *pFVar8;
  uint uVar9;
  ulonglong uVar10;
  FScreenPassTextureSlice local_38;
  
  FPostProcessMaterialInputs::FPostProcessMaterialInputs(__return_storage_ptr__);
  uVar10 = 0;
  if (0 < (this->Inputs).ArrayNum) {
    do {
      uVar9 = (uint)uVar10;
      uVar6 = 0;
      if ((int)uVar9 < (this->Inputs).ArrayNum) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar1 = (code *)swi(3);
        pFVar7 = (FPostProcessMaterialInputs *)(*pcVar1)();
        return pFVar7;
      }
      pFVar8 = FScreenPassTextureSlice::CreateFromScreenPassTexture
                         (&local_38,param_1,
                          (FScreenPassTexture *)
                          ((this->Inputs).AllocatorInstance.Data + (longlong)(int)uVar9 * 0x20));
      if ((4 < uVar9) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(uint32)Input < kPostProcessMaterialInputCountMax",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\PostProcess\\PostProcessMaterialInputs.h"
                             ,0x3a,L""), bVar5)) {
        pcVar1 = (code *)swi(3);
        pFVar7 = (FPostProcessMaterialInputs *)(*pcVar1)();
        return pFVar7;
      }
      (__return_storage_ptr__->Textures).Elements[uVar10].TextureSRV = pFVar8->TextureSRV;
      (__return_storage_ptr__->Textures).Elements[uVar10].ViewRect.field0_0x0._s_0.Min.field0_0x0 =
           (pFVar8->ViewRect).field0_0x0._s_0.Min.field0_0x0;
      (__return_storage_ptr__->Textures).Elements[uVar10].ViewRect.field0_0x0._s_0.Max.field0_0x0 =
           (pFVar8->ViewRect).field0_0x0._s_0.Max.field0_0x0;
      uVar10 = (ulonglong)(uVar9 + 1);
    } while ((int)(uVar9 + 1) < (this->Inputs).ArrayNum);
  }
  uVar2 = *(undefined8 *)&(param_2->SceneTextures).field_0x8;
  uVar3 = *(undefined8 *)&param_2->MobileSceneTextures;
  uVar4 = *(undefined8 *)&(param_2->MobileSceneTextures).field_0x8;
  *(undefined8 *)&(__return_storage_ptr__->SceneTextures).SceneTextures =
       *(undefined8 *)&param_2->SceneTextures;
  *(undefined8 *)&(__return_storage_ptr__->SceneTextures).SceneTextures.field_0x8 = uVar2;
  *(undefined8 *)&(__return_storage_ptr__->SceneTextures).MobileSceneTextures = uVar3;
  *(undefined8 *)&(__return_storage_ptr__->SceneTextures).MobileSceneTextures.field_0x8 = uVar4;
  return __return_storage_ptr__;
}

