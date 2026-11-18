// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 4

// FTranslucencyLightingVolumeTextures @ 1447f5400

FTranslucencyLightingVolumeTextures * __thiscall
FTranslucencyLightingVolumeTextures::FTranslucencyLightingVolumeTextures
          (FTranslucencyLightingVolumeTextures *this)

{
  (this->Ambient).AllocatorInstance.SecondaryData = (ForElementType<FRDGTexture_*>)0x0;
  (this->Ambient).ArrayNum = 0;
  (this->Ambient).ArrayMax = 2;
  (this->Directional).AllocatorInstance.SecondaryData = (ForElementType<FRDGTexture_*>)0x0;
  (this->Directional).ArrayNum = 0;
  *(undefined8 *)&(this->Directional).ArrayMax = 2;
  (this->ViewsToTexturePairs).AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
  (this->ViewsToTexturePairs).ArrayNum = 0;
  (this->ViewsToTexturePairs).ArrayMax = 2;
  return this;
}

// GetIndex @ 145771450

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
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

int __thiscall
FTranslucencyLightingVolumeTextures::GetIndex
          (FTranslucencyLightingVolumeTextures *this,FViewInfo *param_1,int param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  ForElementType<int> FVar6;
  
  uVar1 = (uint)param_1->_padding_;
  if ((this->Directional).ArrayNum == 2) {
    return param_2 + uVar1 * 2;
  }
  uVar4 = 0;
  if ((int)uVar1 < (this->ViewsToTexturePairs).ArrayNum) {
    uVar4 = ~uVar1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar5 = (*pcVar2)();
      return iVar5;
    }
  }
  FVar6 = (this->ViewsToTexturePairs).AllocatorInstance.SecondaryData;
  if (FVar6 == (ForElementType<int>)0x0) {
    FVar6 = (ForElementType<int>)&this->ViewsToTexturePairs;
  }
  return param_2 + *(int *)((longlong)FVar6 + (longlong)(int)uVar1 * 4) * 2;
}

// GetTextureFormatAndCreationFlags @ 145779860

void __cdecl
FTranslucencyLightingVolumeTextures::GetTextureFormatAndCreationFlags
          (EPixelFormat *param_1,ETextureCreateFlags *param_2)

{
  *param_1 = PF_FloatRGBA;
  *param_2 = ReduceMemoryWithTilingMode|UAV|Tiling3D|ShaderResource|RenderTargetable;
  return;
}

// Init @ 14577a8a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014577b7ef) */
/* WARNING: Removing unreachable block (ram,0x00014577b7f7) */
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
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall
FTranslucencyLightingVolumeTextures::Init
          (FTranslucencyLightingVolumeTextures *this,FRDGBuilder *param_1,
          TArrayView<FViewInfo_const_,int> *param_2,ERDGPassFlags param_3)

{
  longlong *plVar1;
  TRDGHandleRegistry<TRDGHandle<FRDGTexture,unsigned_int>,2> *pTVar2;
  char cVar3;
  ForElementType<int> FVar4;
  ForElementType<FRDGTexture_*> FVar5;
  FGlobalShaderMap *this_00;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  FRDGScope *this_01;
  FRDGTexture *pFVar14;
  FRDGTexture *pFVar15;
  FShaderType *pFVar16;
  FName this_02;
  undefined8 *puVar17;
  FRDGTextureUAV *pFVar18;
  FRDGEventName *pFVar19;
  FShaderParametersMetadata *pFVar20;
  TRHIGlobal<int> TVar21;
  ForElementType<int> FVar22;
  ForElementType<FRDGTexture_*> FVar23;
  ForElementType<FRDGTexture_*> FVar24;
  uint uVar25;
  ulonglong uVar26;
  undefined8 *puVar27;
  int iVar28;
  FRDGUserValidation *this_03;
  uint uVar29;
  ulonglong uVar30;
  int iVar31;
  int *piVar32;
  ulonglong uVar33;
  undefined1 auStackY_388 [32];
  uint local_338;
  wchar_t *local_308;
  wchar_t *local_300;
  uint local_2f8;
  int local_2f4;
  ulonglong local_2f0;
  undefined8 *local_2e8;
  FViewInfo *local_2e0;
  FRDGUserValidation *local_2d8;
  ForElementType<FRDGTexture_*> local_2d0;
  int local_2c0;
  int iStack_2bc;
  int local_2b8;
  int iStack_2b4;
  FMemStackBase *local_2b0;
  longlong local_2a8;
  FRDGTextureUAVDesc local_2a0;
  FRDGTextureUAVDesc local_288;
  FRDGTextureUAVDesc local_270;
  FRDGTextureUAVDesc local_258;
  undefined1 local_240 [8];
  TIntVector3<int>_u_0 local_238;
  TRDGEventScopeGuard<FRDGScope_RHI> local_228;
  char local_218;
  wchar_t **local_210;
  undefined1 *local_208;
  wchar_t **local_200;
  undefined1 *local_1f8;
  wchar_t **local_1f0;
  undefined1 *local_1e8;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_1d8;
  wchar_t **local_1c8;
  undefined1 *local_1c0;
  wchar_t **local_1b8;
  undefined1 *local_1b0;
  wchar_t **local_1a8;
  undefined1 *local_1a0;
  wchar_t **local_198;
  undefined1 *local_190;
  wchar_t **local_188;
  undefined1 *local_180;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<39>_const_*,std::tuple<>_> local_178;
  TShaderRefBase<FClearTranslucentLightingVolumeCS,FShaderMapPointerTable> local_168;
  FString local_158;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  FRDGEventName local_128;
  undefined1 local_108 [24];
  float local_f0;
  int local_ec;
  undefined4 local_e8;
  uint local_e4;
  uint uStack_e0;
  undefined2 local_dc;
  undefined4 local_da;
  undefined4 local_d6;
  ForElementType<EPixelFormat> local_d0;
  undefined4 local_c0;
  int local_bc;
  undefined1 local_b8 [24];
  float local_a0;
  int local_9c;
  undefined4 local_98;
  uint local_94;
  uint uStack_90;
  undefined2 local_8c;
  undefined4 local_8a;
  undefined4 local_86;
  ForElementType<EPixelFormat> local_80;
  undefined4 local_70;
  int local_6c;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_388;
  uVar26 = 0;
  if (GUseTranslucencyLightingVolumes == 0) {
    return;
  }
  if (((param_3 - Compute & 0xfffd) != 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("PassFlags == ERDGPassFlags::Compute || PassFlags == ERDGPassFlags::AsyncCompute"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\TranslucentLighting.cpp"
                          ,0x48c,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  cVar3 = *(char *)((longlong)&param_1->_padding_ + 6);
  local_218 = '\0';
  if ((cVar3 != '\0') && ((cVar3 != '\x01' || ((param_1->_padding_ & 4) == 0)))) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
      local_138 = 0x54bd88a0;
      uStack_134 = 1;
      ::Desc._padding_._0_4_ = 0x54bd88a0;
      ::Desc._padding_._4_4_ = uStack_13c;
      ::Desc._padding_._4_4_ = 1;
      ::Desc._padding_ = (longlong)u_InitTranslucenc;
      ::Desc._padding_ = (longlong)u_InitTranslucenc;
      ::Desc._padding_._0_4_ = 0x48e;
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
      ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
      ::Desc.TraceGpuSpecId = 0;
      ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
      atexit(```FTranslucencyLightingVolumeTextures::Init'::__l17::Desc::operator()<>'::__l3::
             <lambda_1>::operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__);
      _Init_thread_footer(&::_TSS0);
    }
    local_178._Myfirst._Val = &::Desc;
    local_228.State = (FRDGScopeState *)param_1;
    this_01 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                        ((FRDGAllocator *)&param_1->_padding_,(FRDGScope **)param_1);
    param_1->_padding_ = (longlong)this_01;
    local_228.Scope = this_01;
    TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
    Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<39>_const_*,std::tuple<>_>_>
              (&(this_01->Impl).Impl,(FRDGScopeState *)param_1,&local_178);
    if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
      FRDGScope::BeginCPU(this_01,(FRHIComputeCommandList *)param_1->_padding_,false);
      FRDGScope::BeginGPU(this_01,(FRHIComputeCommandList *)param_1->_padding_);
    }
    local_218 = '\x01';
  }
  iVar28 = param_2->ArrayNum;
  local_338 = 0;
  iVar31 = 0x800;
  if (GTranslucencyLightingVolumeDim < 0x800) {
    iVar31 = GTranslucencyLightingVolumeDim;
  }
  local_2f4 = 4;
  if (4 < iVar31) {
    local_2f4 = iVar31;
  }
  this->VolumeDim = local_2f4;
  TArray<int,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>::SetNumZeroed
            (&this->ViewsToTexturePairs,iVar28,Default);
  uVar30 = uVar26;
  uVar33 = uVar26;
  if (0 < iVar28) {
    do {
      uVar11 = (uint)uVar26;
      uVar29 = 0;
      if ((int)uVar11 < (this->ViewsToTexturePairs).ArrayNum) {
        uVar29 = ~uVar11 >> 0x1f;
      }
      if ((uVar29 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      FVar4 = (this->ViewsToTexturePairs).AllocatorInstance.SecondaryData;
      FVar22 = (ForElementType<int>)&this->ViewsToTexturePairs;
      if (FVar4 != (ForElementType<int>)0x0) {
        FVar22 = FVar4;
      }
      *(uint *)((longlong)FVar22 + uVar33 * 4) = local_338;
      uVar29 = 0;
      if ((int)uVar11 < iVar28) {
        uVar29 = ~uVar11 >> 0x1f;
      }
      if ((uVar29 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar26 = (ulonglong)(uVar11 + 1);
      local_338 = local_338 + (uVar11 == *(uint *)((longlong)&param_2->DataPtr->_padding_ + uVar30))
      ;
      uVar33 = uVar33 + 1;
      uVar30 = uVar30 + 0x2970;
    } while ((longlong)uVar33 < (longlong)iVar28);
    if (local_338 != 0) goto LAB_14577ab70;
  }
  bVar10 = ::FDebug::CheckVerifyFailedImpl2
                     ("NumViewsWithTextures > 0",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\TranslucentLighting.cpp"
                      ,0x4a1,L"");
  if (bVar10) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
LAB_14577ab70:
  uVar29 = local_338 * 2;
  TArray<FRDGTexture_*,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>::SetNum
            (&this->Ambient,uVar29,Default);
  local_2d0 = (ForElementType<FRDGTexture_*>)&this->Directional;
  TArray<FRDGTexture_*,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>::SetNum
            ((TArray<FRDGTexture_*,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *)
             local_2d0,uVar29,Default);
  local_2f8 = 0;
  iVar31 = iVar28;
  if (0 < iVar28) {
    local_2a8 = 0;
    local_2f0 = 0;
    local_2b0 = (FMemStackBase *)&param_1->_padding_;
    local_2d8 = &param_1->UserValidation;
    pTVar2 = &param_1->Textures;
    do {
      this_03 = local_2d8;
      uVar26 = local_2f0;
      iVar31 = 0;
      uVar11 = 0;
      if ((int)local_2f8 < param_2->ArrayNum) {
        uVar11 = ~local_2f8 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      local_2e0 = (FViewInfo *)((longlong)&param_2->DataPtr->_padding_ + uVar26);
      do {
        uVar11 = GetIndex(this,local_2e0,iVar31);
        if ((uVar29 < uVar11) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("TextureIndex <= NumViewsWithTextures * TVC_MAX",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\TranslucentLighting.cpp"
                                ,0x4ac,L""), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar13 = local_2f4;
        uVar9 = FClearValueBinding::Transparent.Value.Color[3];
        uVar8 = FClearValueBinding::Transparent.Value._4_8_;
        uVar7 = FClearValueBinding::Transparent._0_8_;
        if ((0xffff < local_2f4) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Size.Z <= TNumericLimits<decltype(FRDGTextureDesc::Depth)>::Max()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphDefinitions.h"
                                ,0x29e,L"Depth parameter (Size.Z) exceeds valid range"), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        local_d0.SecondaryData = (ForElementType<EPixelFormat>)0x0;
        local_e8 = 0;
        local_ec = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
        local_c0 = 0;
        local_308 = L"TranslucentVolumeAmbient";
        local_108._0_8_ = 0x80020809;
        local_2c0 = iVar13;
        iStack_2bc = iVar13;
        uStack_e0 = iVar13;
        local_e4 = iVar13;
        local_bc = 1;
        local_d6 = 0xff000a02;
        local_da = 0x1010001;
        local_108._8_8_ = uVar7;
        local_108._16_8_ = uVar8;
        local_f0 = (float)uVar9;
        local_dc = (short)iVar13;
        UE::Core::Private::
        ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_EPixelFormat>_>
                  (1,1,0,1,&local_d0,0,&local_bc);
        if ((int)local_e4 < 1) {
          local_1c8 = &local_308;
          local_1c0 = local_108;
          `FRDGBuilder::CreateTexture'::__l2::<lambda_1>::operator()(&local_1c8);
        }
        if ((int)uStack_e0 < 1) {
          local_1b8 = &local_308;
          local_1b0 = local_108;
          `FRDGBuilder::CreateTexture'::__l2::<lambda_2>::operator()(&local_1b8);
        }
        uVar25 = uStack_e0;
        if ((uint)GRHIGlobals.MaxTextureDimensions.Value < local_e4) {
          local_1a8 = &local_308;
          local_1a0 = local_108;
          `FRDGBuilder::CreateTexture'::__l2::<lambda_3>::operator()(&local_1a8);
          uVar25 = uStack_e0;
        }
        if ((uint)GRHIGlobals.MaxTextureDimensions.Value < uVar25) {
          local_198 = &local_308;
          local_190 = local_108;
          `FRDGBuilder::CreateTexture'::__l2::<lambda_4>::operator()(&local_198);
          uVar25 = uStack_e0;
        }
        TVar21.Value = GRHIGlobals.MaxTextureDimensions.Value;
        if ((int)local_e4 < GRHIGlobals.MaxTextureDimensions.Value) {
          TVar21.Value = local_e4;
        }
        local_e4 = 1;
        if (1 < TVar21.Value) {
          local_e4 = TVar21.Value;
        }
        TVar21.Value = GRHIGlobals.MaxTextureDimensions.Value;
        if ((int)uVar25 < GRHIGlobals.MaxTextureDimensions.Value) {
          TVar21.Value = uVar25;
        }
        uStack_e0 = 1;
        if (1 < TVar21.Value) {
          uStack_e0 = TVar21.Value;
        }
        FRDGUserValidation::ValidateCreateTexture
                  (this_03,(FRDGTextureDesc *)local_108,local_308,None);
        pFVar14 = FMemStackBase::Alloc(local_2b0,0x158,8);
        pFVar14 = FRDGTexture::FRDGTexture(pFVar14,local_308,(FRDGTextureDesc *)local_108,None);
        iVar12 = (param_1->Textures).Array.ArrayNum;
        if (iVar12 == (param_1->Textures).Array.ArrayMax) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGTexture_*>_>
                             (0x808,(ForElementType<FRDGTexture_*> *)pTVar2,
                              &(param_1->Textures).Array.ArrayMax);
        }
        (param_1->Textures).Array.ArrayNum = iVar12 + 1;
        (pTVar2->Array).AllocatorInstance.Data[iVar12] = pFVar14;
        (pFVar14->Handle).Index = (param_1->Textures).Array.ArrayNum - 1;
        FRDGUserValidation::ValidateCreateTexture(this_03,pFVar14);
        FRDGTrace::AddResource(&param_1->Trace,(FRDGViewableResource *)pFVar14);
        if (local_d0.SecondaryData != (ForElementType<EPixelFormat>)0x0) {
          FMemory::Free((void *)local_d0.SecondaryData);
        }
        uVar9 = FClearValueBinding::Transparent.Value.Color[3];
        uVar8 = FClearValueBinding::Transparent.Value._4_8_;
        uVar7 = FClearValueBinding::Transparent._0_8_;
        if ((0xffff < iVar13) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Size.Z <= TNumericLimits<decltype(FRDGTextureDesc::Depth)>::Max()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphDefinitions.h"
                                ,0x29e,L"Depth parameter (Size.Z) exceeds valid range"), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        local_2b8 = iVar13;
        local_80.SecondaryData = (ForElementType<EPixelFormat>)0x0;
        local_9c = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
        local_98 = 0;
        local_300 = L"TranslucentVolumeDirectional";
        local_b8._0_8_ = 0x80020809;
        local_70 = 0;
        iStack_2b4 = iVar13;
        uStack_90 = iVar13;
        local_94 = iVar13;
        local_6c = 1;
        local_86 = 0xff000a02;
        local_8a = 0x1010001;
        local_b8._8_8_ = uVar7;
        local_b8._16_8_ = uVar8;
        local_a0 = (float)uVar9;
        local_8c = (short)iVar13;
        UE::Core::Private::
        ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_EPixelFormat>_>
                  (1,1,0,1,&local_80,0,&local_6c);
        if ((int)local_94 < 1) {
          local_188 = &local_300;
          local_180 = local_b8;
          `FRDGBuilder::CreateTexture'::__l2::<lambda_1>::operator()(&local_188);
        }
        if ((int)uStack_90 < 1) {
          local_210 = &local_300;
          local_208 = local_b8;
          `FRDGBuilder::CreateTexture'::__l2::<lambda_2>::operator()(&local_210);
        }
        uVar25 = uStack_90;
        if ((uint)GRHIGlobals.MaxTextureDimensions.Value < local_94) {
          local_200 = &local_300;
          local_1f8 = local_b8;
          `FRDGBuilder::CreateTexture'::__l2::<lambda_3>::operator()(&local_200);
          uVar25 = uStack_90;
        }
        if ((uint)GRHIGlobals.MaxTextureDimensions.Value < uVar25) {
          local_1f0 = &local_300;
          local_1e8 = local_b8;
          `FRDGBuilder::CreateTexture'::__l2::<lambda_4>::operator()(&local_1f0);
          uVar25 = uStack_90;
        }
        TVar21.Value = GRHIGlobals.MaxTextureDimensions.Value;
        if ((int)local_94 < GRHIGlobals.MaxTextureDimensions.Value) {
          TVar21.Value = local_94;
        }
        local_94 = 1;
        if (1 < TVar21.Value) {
          local_94 = TVar21.Value;
        }
        TVar21.Value = GRHIGlobals.MaxTextureDimensions.Value;
        if ((int)uVar25 < GRHIGlobals.MaxTextureDimensions.Value) {
          TVar21.Value = uVar25;
        }
        uStack_90 = 1;
        if (1 < TVar21.Value) {
          uStack_90 = TVar21.Value;
        }
        FRDGUserValidation::ValidateCreateTexture
                  (this_03,(FRDGTextureDesc *)local_b8,local_300,None);
        pFVar15 = FMemStackBase::Alloc(local_2b0,0x158,8);
        pFVar15 = FRDGTexture::FRDGTexture(pFVar15,local_300,(FRDGTextureDesc *)local_b8,None);
        iVar13 = (param_1->Textures).Array.ArrayNum;
        if (iVar13 == (param_1->Textures).Array.ArrayMax) {
          iVar13 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGTexture_*>_>
                             (0x808,(ForElementType<FRDGTexture_*> *)pTVar2,
                              &(param_1->Textures).Array.ArrayMax);
        }
        (param_1->Textures).Array.ArrayNum = iVar13 + 1;
        (pTVar2->Array).AllocatorInstance.Data[iVar13] = pFVar15;
        (pFVar15->Handle).Index = (param_1->Textures).Array.ArrayNum - 1;
        FRDGUserValidation::ValidateCreateTexture(local_2d8,pFVar15);
        FRDGTrace::AddResource(&param_1->Trace,(FRDGViewableResource *)pFVar15);
        if (local_80.SecondaryData != (ForElementType<EPixelFormat>)0x0) {
          FMemory::Free((void *)local_80.SecondaryData);
        }
        uVar25 = 0;
        if ((int)uVar11 < (this->Ambient).ArrayNum) {
          uVar25 = ~uVar11 >> 0x1f;
        }
        if ((uVar25 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        FVar24 = local_2d0;
        FVar5 = (this->Ambient).AllocatorInstance.SecondaryData;
        FVar23 = (ForElementType<FRDGTexture_*>)this;
        if (FVar5 != (ForElementType<FRDGTexture_*>)0x0) {
          FVar23 = FVar5;
        }
        *(FRDGTexture **)((longlong)FVar23 + (longlong)(int)uVar11 * 8) = pFVar14;
        uVar25 = 0;
        if ((int)uVar11 < *(int *)((longlong)local_2d0 + 0x18)) {
          uVar25 = ~uVar11 >> 0x1f;
        }
        if ((uVar25 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        FVar5 = *(ForElementType<FRDGTexture_*> *)((longlong)FVar24 + 0x10);
        if (FVar5 != (ForElementType<FRDGTexture_*>)0x0) {
          FVar24 = FVar5;
        }
        iVar31 = iVar31 + 1;
        *(FRDGTexture **)((longlong)FVar24 + (longlong)(int)uVar11 * 8) = pFVar15;
        this_03 = local_2d8;
      } while (iVar31 < 2);
      local_2f8 = local_2f8 + 1;
      local_2a8 = local_2a8 + 1;
      local_2f0 = local_2f0 + 0x2970;
      iVar31 = param_2->ArrayNum;
    } while ((int)local_2f8 < iVar28);
  }
  uVar29 = 0;
  iVar28 = (int)((local_2f4 + 3 >> 0x1f & 3U) + local_2f4 + 3) >> 2;
  if ((iVar31 < 1) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar10)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  this_00 = param_2->DataPtr->ShaderMap;
  pFVar16 = (FShaderType *)FClearTranslucentLightingVolumeCS::GetStaticType();
  FGlobalShaderMap::GetShader(this_00,&local_1d8,pFVar16,0);
  if (local_1d8.ShaderContent == (FShader *)0x0) {
    this_02 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_240);
    ::FName::ToString((FName *)this_02,&local_158);
    FClearTranslucentLightingVolumeCS::GetStaticType();
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Shader.IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                        ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_158.Data.AllocatorInstance.Data);
    }
    if (bVar10) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  FClearTranslucentLightingVolumeCS::GetStaticType();
  local_168.ShaderContent = (FClearTranslucentLightingVolumeCS *)local_1d8.ShaderContent;
  local_168.ShaderMap = local_1d8.ShaderMap;
  if (local_338 != 0) {
    local_2e0 = (FViewInfo *)&param_1->_padding_;
    local_2d0._4_4_ = iVar28;
    local_2d0._0_4_ = iVar28;
    FVar5 = local_2d0;
    local_2f0 = (ulonglong)local_338;
    plVar1 = &param_1->_padding_;
    do {
      puVar27 = (undefined8 *)0x0;
      piVar32 = (int *)((longlong)&param_1->_padding_ + 4);
      puVar17 = FMemStackBase::Alloc((FMemStackBase *)local_2e0,0x30,0x10);
      if (puVar17 == (undefined8 *)0x0) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Object",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                            ,0x61,L"");
        if (bVar10) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      else {
        puVar17[2] = 0;
        *puVar17 = &
                   ___7__TObject_VFParameters_FClearTranslucentLightingVolumeCS___FRDGAllocator__6B_
        ;
        puVar17[3] = 0;
        puVar17[4] = 0;
        puVar17[5] = 0;
        puVar27 = puVar17;
      }
      local_2e8 = puVar27;
      if ((((undefined8 **)*plVar1 <= &local_2e8) &&
          (&local_2e8 < (undefined8 **)*plVar1 + *(int *)((longlong)&param_1->_padding_ + 4))) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar31 = (int)param_1->_padding_;
      if (iVar31 == *piVar32) {
        iVar31 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,(ForAnyElementType *)plVar1,piVar32);
      }
      *(int *)&param_1->_padding_ = iVar31 + 1;
      *(undefined8 **)(*plVar1 + (longlong)iVar31 * 8) = local_2e8;
      uVar11 = 0;
      if ((int)uVar29 < (this->Ambient).ArrayNum) {
        uVar11 = ~uVar29 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      FVar24 = (this->Ambient).AllocatorInstance.SecondaryData;
      local_288._padding_._1_1_ = 0;
      FVar23 = (ForElementType<FRDGTexture_*>)this;
      if (FVar24 != (ForElementType<FRDGTexture_*>)0x0) {
        FVar23 = FVar24;
      }
      local_288.Texture = *(FRDGTexture **)((longlong)FVar23 + (longlong)(int)uVar29 * 8);
      local_288._padding_._0_1_ = ((local_288.Texture)->Desc).field_0x34;
      local_288._padding_._2_4_ = 0;
      local_288._padding_._6_1_ = 0;
      local_288._padding_._0_1_ = 0;
      pFVar18 = FRDGBuilder::CreateUAV(param_1,&local_288,None);
      ((FParameters *)(puVar27 + 2))->RWAmbient0 = pFVar18;
      uVar25 = uVar29 + 1;
      uVar11 = 0;
      if ((int)uVar25 < (this->Ambient).ArrayNum) {
        uVar11 = ~uVar25 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      local_270._padding_._1_1_ = 0;
      FVar24 = (this->Ambient).AllocatorInstance.SecondaryData;
      FVar23 = (ForElementType<FRDGTexture_*>)this;
      if (FVar24 != (ForElementType<FRDGTexture_*>)0x0) {
        FVar23 = FVar24;
      }
      local_270.Texture = *(FRDGTexture **)((longlong)FVar23 + (longlong)(int)uVar25 * 8);
      local_270._padding_._0_1_ = ((local_270.Texture)->Desc).field_0x34;
      local_270._padding_._2_4_ = 0;
      local_270._padding_._6_1_ = 0;
      local_270._padding_._0_1_ = 0;
      pFVar18 = FRDGBuilder::CreateUAV(param_1,&local_270,None);
      puVar27[4] = pFVar18;
      uVar11 = 0;
      if ((int)uVar29 < (this->Directional).ArrayNum) {
        uVar11 = ~uVar29 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      FVar24 = (this->Directional).AllocatorInstance.SecondaryData;
      local_258._padding_._1_1_ = 0;
      FVar23 = (ForElementType<FRDGTexture_*>)&this->Directional;
      if (FVar24 != (ForElementType<FRDGTexture_*>)0x0) {
        FVar23 = FVar24;
      }
      local_258.Texture = *(FRDGTexture **)((longlong)FVar23 + (longlong)(int)uVar29 * 8);
      local_258._padding_._0_1_ = ((local_258.Texture)->Desc).field_0x34;
      local_258._padding_._2_4_ = 0;
      local_258._padding_._6_1_ = 0;
      local_258._padding_._0_1_ = 0;
      pFVar18 = FRDGBuilder::CreateUAV(param_1,&local_258,None);
      puVar27[3] = pFVar18;
      uVar11 = 0;
      if ((int)(uVar29 + 1) < (this->Directional).ArrayNum) {
        uVar11 = ~(uVar29 + 1) >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      FVar24 = (this->Directional).AllocatorInstance.SecondaryData;
      local_2a0._padding_._1_1_ = 0;
      FVar23 = (ForElementType<FRDGTexture_*>)&this->Directional;
      if (FVar24 != (ForElementType<FRDGTexture_*>)0x0) {
        FVar23 = FVar24;
      }
      local_2a0.Texture =
           *(FRDGTexture **)((uchar *)((longlong)FVar23 + 8) + (longlong)(int)uVar29 * 8);
      local_2a0._padding_._0_1_ = ((local_2a0.Texture)->Desc).field_0x34;
      local_2a0._padding_._2_4_ = 0;
      local_2a0._padding_._6_1_ = 0;
      local_2a0._padding_._0_1_ = 0;
      pFVar18 = FRDGBuilder::CreateUAV(param_1,&local_2a0,None);
      puVar27[5] = pFVar18;
      pFVar19 = FRDGEventName::FRDGEventName
                          (&local_128,L"ClearTranslucencyLightingVolumeCompute %d");
      pFVar20 = FClearTranslucentLightingVolumeCS::FParameters::FTypeInfo::GetStructMetadata();
      local_238._0_8_ = FVar5;
      local_238._s_0.Z = iVar28;
      FComputeShaderUtils::AddPass<FClearTranslucentLightingVolumeCS>
                (param_1,pFVar19,param_3,&local_168,pFVar20,(FParameters *)(puVar27 + 2),
                 (TIntVector3<int> *)&local_238._s_0);
      if (local_128.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
         ) {
        FMemory::Free(local_128.FormattedEventName.Data.AllocatorInstance.Data);
      }
      uVar29 = uVar29 + 2;
      local_2f0 = local_2f0 - 1;
    } while (local_2f0 != 0);
  }
  if (local_218 != '\0') {
    TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_228);
  }
  return;
}

