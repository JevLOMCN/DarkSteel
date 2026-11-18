// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// Create @ 145760640

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FCASImageData::Create
          (FCASImageData *this,FRDGBuilder *param_1,FSceneViewFamily *param_2,bool param_3,
          bool param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  FScriptContainerElement *pFVar5;
  ulonglong uVar6;
  code *pcVar7;
  wchar_t *pwVar8;
  FRDGUserValidation *pFVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  FRDGTexture *pFVar13;
  TRHIGlobal<int> TVar14;
  uint uVar15;
  int iVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  FRDGBuilder *this_00;
  undefined1 auStackY_318 [32];
  wchar_t *local_2c8;
  wchar_t *local_2c0;
  FRDGUserValidation *local_2b8;
  FRDGTexture *local_2b0;
  FRDGTexture *local_2a8;
  FRDGBuilder *local_2a0;
  FMemStackBase *local_298;
  int local_290;
  int iStack_28c;
  int local_288;
  int iStack_284;
  int local_280;
  int iStack_27c;
  int local_278;
  int iStack_274;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined4 local_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined4 local_248;
  undefined8 local_240;
  undefined8 local_238;
  FRDGTrace *local_230;
  wchar_t **local_220;
  undefined1 *local_218;
  wchar_t **local_210;
  undefined1 *local_208;
  wchar_t **local_200;
  undefined1 *local_1f8;
  wchar_t **local_1f0;
  undefined1 *local_1e8;
  wchar_t **local_1e0;
  undefined1 *local_1d8;
  wchar_t **local_1d0;
  undefined1 *local_1c8;
  wchar_t **local_1c0;
  undefined1 *local_1b8;
  wchar_t **local_1b0;
  undefined1 *local_1a8;
  undefined1 local_198 [64];
  void *local_158;
  undefined4 local_150;
  int local_14c;
  undefined1 local_148 [64];
  void *local_108;
  undefined4 local_100;
  int local_fc;
  undefined1 local_f8 [80];
  undefined1 local_a8 [80];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_318;
  uVar18 = 0;
  local_2a0 = param_1;
  if (param_3) {
    if (0 < (param_2->Views).ArrayNum) {
      local_2b8 = &param_1->UserValidation;
      local_298 = (FMemStackBase *)&param_1->_padding_;
      uVar17 = uVar18;
      do {
        pFVar9 = local_2b8;
        uVar15 = (uint)uVar18;
        uVar11 = 0;
        if ((int)uVar15 < (param_2->Views).ArrayNum) {
          uVar11 = ~uVar15 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        local_260 = 0;
        local_198._24_4_ = 0;
        local_14c = 1;
        local_198._49_2_ = 1;
        local_198._0_8_ = 0x30008;
        lVar2 = *(longlong *)
                 (*(longlong *)((param_2->Views).AllocatorInstance.Data + uVar17) + 0x24c8);
        local_198._52_2_ = 0xff00;
        local_198._44_4_ = 0x10001;
        local_198[0x30] = 1;
        uVar3 = *(undefined8 *)(lVar2 + 0xd60);
        uVar4 = *(undefined8 *)(lVar2 + 0xd68);
        iVar16 = (GRHIGlobals.VariableRateShading.ImageTileMinWidth - (int)uVar3) + (int)uVar4;
        iVar12 = iVar16 + -1;
        iVar1 = GRHIGlobals.VariableRateShading.ImageTileMinHeight +
                ((int)((ulonglong)uVar4 >> 0x20) - (int)((ulonglong)uVar3 >> 0x20));
        local_240 = CONCAT44(iVar1,iVar16);
        iStack_284 = (iVar1 + -1) / GRHIGlobals.VariableRateShading.ImageTileMinHeight;
        local_288 = iVar12 / GRHIGlobals.VariableRateShading.ImageTileMinWidth;
        local_198[0x33] = GRHIGlobals.VariableRateShading.ImageFormat;
        local_270 = 0;
        local_198._28_4_ = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
        local_2c8 = ShadingRateTextureName;
        local_198._40_4_ = iStack_284;
        local_198._36_4_ = local_288;
        uStack_268 = 0;
        _local_290 = CONCAT44(iStack_284,iVar12);
        local_158 = (void *)0x0;
        local_198._8_8_ = 0;
        local_198._16_8_ = 0;
        local_198._32_4_ = 0;
        local_150 = 0;
        UE::Core::Private::
        ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_EPixelFormat>_>
                  (1,1,0,1,(ForElementType<EPixelFormat> *)(local_198 + 0x38),0,&local_14c);
        if ((int)local_198._36_4_ < 1) {
          local_220 = &local_2c8;
          local_218 = local_198;
          `FRDGBuilder::CreateTexture'::__l2::<lambda_1>::operator()(&local_220);
        }
        if ((int)local_198._40_4_ < 1) {
          local_210 = &local_2c8;
          local_208 = local_198;
          `FRDGBuilder::CreateTexture'::__l2::<lambda_2>::operator()(&local_210);
        }
        uVar11 = local_198._40_4_;
        if ((uint)GRHIGlobals.MaxTextureDimensions.Value < (uint)local_198._36_4_) {
          local_200 = &local_2c8;
          local_1f8 = local_198;
          `FRDGBuilder::CreateTexture'::__l2::<lambda_3>::operator()(&local_200);
          uVar11 = local_198._40_4_;
        }
        if ((uint)GRHIGlobals.MaxTextureDimensions.Value < uVar11) {
          local_1f0 = &local_2c8;
          local_1e8 = local_198;
          `FRDGBuilder::CreateTexture'::__l2::<lambda_4>::operator()(&local_1f0);
          uVar11 = local_198._40_4_;
        }
        TVar14.Value = GRHIGlobals.MaxTextureDimensions.Value;
        if ((int)local_198._36_4_ < GRHIGlobals.MaxTextureDimensions.Value) {
          TVar14.Value = local_198._36_4_;
        }
        local_198._36_4_ = 1;
        if (1 < TVar14.Value) {
          local_198._36_4_ = TVar14.Value;
        }
        TVar14.Value = GRHIGlobals.MaxTextureDimensions.Value;
        if ((int)uVar11 < GRHIGlobals.MaxTextureDimensions.Value) {
          TVar14.Value = uVar11;
        }
        local_198._40_4_ = 1;
        if (1 < TVar14.Value) {
          local_198._40_4_ = TVar14.Value;
        }
        FRDGUserValidation::ValidateCreateTexture
                  (pFVar9,(FRDGTextureDesc *)local_198,local_2c8,None);
        pFVar13 = FMemStackBase::Alloc(local_298,0x158,8);
        pFVar13 = FRDGTexture::FRDGTexture(pFVar13,local_2c8,(FRDGTextureDesc *)local_198,None);
        iVar12 = (param_1->Textures).Array.ArrayNum;
        if (iVar12 == (param_1->Textures).Array.ArrayMax) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGTexture_*>_>
                             (0x808,(ForElementType<FRDGTexture_*> *)&param_1->Textures,
                              &(param_1->Textures).Array.ArrayMax);
        }
        (param_1->Textures).Array.ArrayNum = iVar12 + 1;
        (param_1->Textures).Array.AllocatorInstance.Data[iVar12] = pFVar13;
        (pFVar13->Handle).Index = (param_1->Textures).Array.ArrayNum - 1;
        FRDGUserValidation::ValidateCreateTexture(local_2b8,pFVar13);
        FRDGTrace::AddResource(&local_2a0->Trace,(FRDGViewableResource *)pFVar13);
        if (local_158 != (void *)0x0) {
          FMemory::Free(local_158);
        }
        pFVar5 = (this->HardwareImages).ConstructedSRIArray.AllocatorInstance.Data;
        local_2b0 = pFVar13;
        if (((pFVar5 <= (FScriptContainerElement *)&local_2b0) &&
            ((FScriptContainerElement *)&local_2b0 <
             pFVar5 + (longlong)(this->HardwareImages).ConstructedSRIArray.ArrayMax * 8)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar12 = (this->HardwareImages).ConstructedSRIArray.ArrayNum;
        if (iVar12 == (this->HardwareImages).ConstructedSRIArray.ArrayMax) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,(ForAnyElementType *)this,
                              &(this->HardwareImages).ConstructedSRIArray.ArrayMax);
        }
        (this->HardwareImages).ConstructedSRIArray.ArrayNum = iVar12 + 1;
        uVar18 = (ulonglong)(uVar15 + 1);
        uVar17 = uVar17 + 8;
        *(FRDGTexture **)
         ((this->HardwareImages).ConstructedSRIArray.AllocatorInstance.Data + (longlong)iVar12 * 8)
             = local_2b0;
      } while ((int)(uVar15 + 1) < (param_2->Views).ArrayNum);
    }
    param_1 = local_2a0;
    FVariableRateShadingImageManager::GetSRIDesc((FRDGTextureDesc *)local_f8,param_2,false);
    pFVar13 = FRDGBuilder::CreateTexture
                        (param_1,(FRDGTextureDesc *)local_f8,ScaledShadingRateTextureName,None);
    pwVar8 = ScaledConservativeShadingRateTextureName;
    (this->HardwareImages).ScaledSRI = pFVar13;
    pFVar13 = FRDGBuilder::CreateTexture(param_1,(FRDGTextureDesc *)local_f8,pwVar8,None);
    (this->HardwareImages).ScaledConservativeSRI = pFVar13;
    if ((void *)local_f8._64_8_ != (void *)0x0) {
      FMemory::Free((void *)local_f8._64_8_);
    }
  }
  uVar18 = 0;
  if (param_4) {
    this_00 = param_1;
    if (0 < (param_2->Views).ArrayNum) {
      local_298 = (FMemStackBase *)&param_1->_padding_;
      local_2b8 = &param_1->UserValidation;
      local_230 = &param_1->Trace;
      uVar17 = uVar18;
      do {
        pFVar9 = local_2b8;
        uVar15 = (uint)uVar17;
        uVar11 = 0;
        if ((int)uVar15 < (param_2->Views).ArrayNum) {
          uVar11 = ~uVar15 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        local_258 = 0;
        uStack_250 = 0;
        local_248 = 0;
        local_148._24_4_ = 0;
        local_108 = (void *)0x0;
        lVar2 = *(longlong *)
                 (*(longlong *)((param_2->Views).AllocatorInstance.Data + uVar18) + 0x24c8);
        local_fc = 1;
        local_148._50_4_ = 0xff003900;
        local_148._0_8_ = 0x30008;
        uVar17 = *(ulonglong *)(lVar2 + 0xd68);
        uVar6 = *(ulonglong *)(lVar2 + 0xd60);
        iVar12 = (int)uVar17 - (int)uVar6;
        local_148._44_4_ = 0x10001;
        local_148._48_2_ = 0x101;
        local_148._32_4_ = 0;
        uVar17 = (2 - (uVar6 >> 0x20) << 0x20) + (uVar17 & 0xffffffff00000000);
        local_100 = 0;
        local_278 = iVar12 + 1;
        local_238._4_4_ = (int)(uVar17 >> 0x20);
        iStack_274 = (local_238._4_4_ + -1) / 2;
        _local_280 = CONCAT44(iStack_274,local_278);
        local_278 = local_278 / 2;
        local_148._28_4_ = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
        local_2c0 = SoftwareShadingRateTextureName;
        local_148._40_4_ = iStack_274;
        local_148._36_4_ = local_278;
        local_148._8_8_ = 0;
        local_148._16_8_ = 0;
        local_238 = uVar17 | iVar12 + 2;
        UE::Core::Private::
        ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_EPixelFormat>_>
                  (1,1,0,1,(ForElementType<EPixelFormat> *)(local_148 + 0x38),0,&local_fc);
        if ((int)local_148._36_4_ < 1) {
          local_1e0 = &local_2c0;
          local_1d8 = local_148;
          `FRDGBuilder::CreateTexture'::__l2::<lambda_1>::operator()(&local_1e0);
        }
        if ((int)local_148._40_4_ < 1) {
          local_1d0 = &local_2c0;
          local_1c8 = local_148;
          `FRDGBuilder::CreateTexture'::__l2::<lambda_2>::operator()(&local_1d0);
        }
        uVar11 = local_148._40_4_;
        if ((uint)GRHIGlobals.MaxTextureDimensions.Value < (uint)local_148._36_4_) {
          local_1c0 = &local_2c0;
          local_1b8 = local_148;
          `FRDGBuilder::CreateTexture'::__l2::<lambda_3>::operator()(&local_1c0);
          uVar11 = local_148._40_4_;
        }
        if ((uint)GRHIGlobals.MaxTextureDimensions.Value < uVar11) {
          local_1b0 = &local_2c0;
          local_1a8 = local_148;
          `FRDGBuilder::CreateTexture'::__l2::<lambda_4>::operator()(&local_1b0);
          uVar11 = local_148._40_4_;
        }
        TVar14.Value = GRHIGlobals.MaxTextureDimensions.Value;
        if ((int)local_148._36_4_ < GRHIGlobals.MaxTextureDimensions.Value) {
          TVar14.Value = local_148._36_4_;
        }
        local_148._36_4_ = 1;
        if (1 < TVar14.Value) {
          local_148._36_4_ = TVar14.Value;
        }
        TVar14.Value = GRHIGlobals.MaxTextureDimensions.Value;
        if ((int)uVar11 < GRHIGlobals.MaxTextureDimensions.Value) {
          TVar14.Value = uVar11;
        }
        local_148._40_4_ = 1;
        if (1 < TVar14.Value) {
          local_148._40_4_ = TVar14.Value;
        }
        FRDGUserValidation::ValidateCreateTexture
                  (pFVar9,(FRDGTextureDesc *)local_148,local_2c0,None);
        pFVar13 = FMemStackBase::Alloc(local_298,0x158,8);
        pFVar13 = FRDGTexture::FRDGTexture(pFVar13,local_2c0,(FRDGTextureDesc *)local_148,None);
        iVar12 = (param_1->Textures).Array.ArrayNum;
        if (iVar12 == (param_1->Textures).Array.ArrayMax) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGTexture_*>_>
                             (0x808,(ForElementType<FRDGTexture_*> *)&param_1->Textures,
                              &(param_1->Textures).Array.ArrayMax);
        }
        (param_1->Textures).Array.ArrayNum = iVar12 + 1;
        (param_1->Textures).Array.AllocatorInstance.Data[iVar12] = pFVar13;
        (pFVar13->Handle).Index = (param_1->Textures).Array.ArrayNum - 1;
        FRDGUserValidation::ValidateCreateTexture(local_2b8,pFVar13);
        FRDGTrace::AddResource(local_230,(FRDGViewableResource *)pFVar13);
        if (local_108 != (void *)0x0) {
          FMemory::Free(local_108);
        }
        pFVar5 = (this->SoftwareImages).ConstructedSRIArray.AllocatorInstance.Data;
        local_2a8 = pFVar13;
        if (((pFVar5 <= (FScriptContainerElement *)&local_2a8) &&
            ((FScriptContainerElement *)&local_2a8 <
             pFVar5 + (longlong)(this->SoftwareImages).ConstructedSRIArray.ArrayMax * 8)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar12 = (this->SoftwareImages).ConstructedSRIArray.ArrayNum;
        if (iVar12 == (this->SoftwareImages).ConstructedSRIArray.ArrayMax) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,(ForAnyElementType *)&this->SoftwareImages,
                              &(this->SoftwareImages).ConstructedSRIArray.ArrayMax);
        }
        (this->SoftwareImages).ConstructedSRIArray.ArrayNum = iVar12 + 1;
        uVar17 = (ulonglong)(uVar15 + 1);
        uVar18 = uVar18 + 8;
        *(FRDGTexture **)
         ((this->SoftwareImages).ConstructedSRIArray.AllocatorInstance.Data + (longlong)iVar12 * 8)
             = local_2a8;
        this_00 = local_2a0;
      } while ((int)(uVar15 + 1) < (param_2->Views).ArrayNum);
    }
    FVariableRateShadingImageManager::GetSRIDesc((FRDGTextureDesc *)local_a8,param_2,true);
    pFVar13 = FRDGBuilder::CreateTexture
                        (this_00,(FRDGTextureDesc *)local_a8,SoftwareScaledShadingRateTextureName,
                         None);
    pwVar8 = SoftwareScaledConservativeShadingRateTextureName;
    (this->SoftwareImages).ScaledSRI = pFVar13;
    pFVar13 = FRDGBuilder::CreateTexture(this_00,(FRDGTextureDesc *)local_a8,pwVar8,None);
    (this->SoftwareImages).ScaledConservativeSRI = pFVar13;
    if ((void *)local_a8._64_8_ != (void *)0x0) {
      FMemory::Free((void *)local_a8._64_8_);
    }
  }
  return;
}

