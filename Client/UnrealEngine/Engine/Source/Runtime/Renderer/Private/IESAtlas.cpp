// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 9

// AddDebugPass @ 144b03c50

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
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
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __cdecl IESAtlas::AddDebugPass(FRDGBuilder *param_1,FViewInfo *param_2,FRDGTexture *param_3)

{
  int *piVar1;
  FParameters *pFVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  FGlobalShaderMap *this;
  code *pcVar5;
  TConsoleVariableData<int> *pTVar6;
  bool bVar7;
  Type TVar8;
  int iVar9;
  FRDGTexture *pFVar10;
  undefined8 *puVar11;
  FShaderType *pFVar12;
  FName this_00;
  FShaderParametersMetadata *pFVar13;
  EShaderPlatform EVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  undefined8 *local_208;
  undefined4 local_200;
  undefined4 local_1fc;
  undefined4 local_1f8;
  undefined1 local_1f4;
  undefined2 local_1f3;
  undefined1 local_1f1;
  FRenderTargetBinding local_1f0;
  longlong local_1d8;
  undefined8 local_1d0;
  FRHIBlendState *local_1c8;
  FRHIDepthStencilState *local_1c0;
  TIntPoint<int>_u_0 local_1b8;
  FRDGEventName *local_1b0;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_1a8;
  TShaderMapRef<FScreenPassVS> local_198;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_188;
  longlong local_178;
  undefined8 uStack_170;
  FShader *local_168;
  FShaderMapBase *pFStack_160;
  FRHIBlendState *local_158;
  FRHIDepthStencilState *pFStack_150;
  undefined8 local_148;
  undefined1 uStack_140;
  uint7 uStack_13f;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined1 local_12c;
  undefined2 local_12b;
  undefined1 local_129;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  TIntPoint<int>_u_0 local_108;
  undefined8 local_100;
  longlong local_f8;
  undefined8 uStack_f0;
  FShader *local_e8;
  FShaderMapBase *pFStack_e0;
  FRHIBlendState *local_d8;
  FRHIDepthStencilState *pFStack_d0;
  undefined8 local_c8;
  longlong lStack_c0;
  FShader *local_b8;
  FShaderMapBase *local_b0;
  FParameters *local_a8;
  undefined1 local_a0;
  undefined1 local_98 [8];
  FString local_90;
  initializer_list<FRDGResource_*> local_78;
  undefined8 local_60;
  undefined8 uStack_58;
  FRDGEventName local_50;
  
  pTVar6 = CVarIESTextureDebug.Ref;
  puVar15 = (undefined8 *)0x0;
  bVar7 = IsInParallelRenderingThread();
  if ((!bVar7) &&
     (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007955>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6d3,"IsInParallelRenderingThread()"), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (pTVar6->ShadowedValue[1] < 1) {
    return;
  }
  TVar8 = FSceneViewFamily::GetFeatureLevel((FSceneViewFamily *)param_2->_padding_);
  if (TVar8 == Num) {
    EVar14 = SP_NumPlatforms;
  }
  else {
    EVar14 = GRHIGlobals.ShaderPlatformForFeatureLevel[(int)TVar8];
  }
  bVar7 = ShaderPrint::IsSupported(EVar14);
  if (!bVar7) {
    return;
  }
  pFVar10 = AddIESDebugPass(param_1,param_2,&param_3->Desc);
  if (pFVar10 == (FRDGTexture *)0x0) {
    return;
  }
  puVar11 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x120,0x10);
  if (puVar11 == (undefined8 *)0x0) {
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
    puVar11[2] = 0;
    *puVar11 = &___7__TObject_VFParameters_FCopyRectPS___FRDGAllocator__6B_;
    puVar11[3] = 0;
    FRenderTargetBindingSlots::FRenderTargetBindingSlots((FRenderTargetBindingSlots *)(puVar11 + 4))
    ;
    puVar15 = puVar11;
  }
  local_208 = puVar15;
  if ((((undefined8 **)param_1->_padding_ <= &local_208) &&
      (&local_208 < (undefined8 **)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4))
      ) && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar9 = (int)param_1->_padding_;
  piVar1 = (int *)((longlong)&param_1->_padding_ + 4);
  if (iVar9 == *piVar1) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)&param_1->_padding_,piVar1);
  }
  pFVar2 = (FParameters *)(puVar15 + 2);
  *(int *)&param_1->_padding_ = iVar9 + 1;
  local_1f0.ResolveTexture = (FRDGTexture *)0x0;
  local_1f0.LoadAction = ELoad;
  local_1f0.MipIndex = '\0';
  local_1f0.ArraySlice = -1;
  *(undefined8 **)(param_1->_padding_ + (longlong)iVar9 * 8) = local_208;
  pFVar2->InputTexture = pFVar10;
  puVar15[3] = TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
               ::StaticResource.StateRHI.Reference;
  local_1f0.Texture = param_3;
  bVar7 = FRenderTargetBinding::Validate(&local_1f0);
  if ((!bVar7) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Validate()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                         ,0x216,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  puVar15[4] = local_1f0.Texture;
  puVar15[5] = local_1f0.ResolveTexture;
  puVar15[6] = CONCAT44(local_1f0._20_4_,local_1f0._16_4_);
  uVar3 = *(undefined8 *)&(pFVar10->Desc).field_0x24;
  local_1b8 = UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
  local_60 = 0;
  uStack_58 = 0;
  if (param_3 == (FRDGTexture *)0x0) {
    uVar16 = 0;
  }
  else {
    uVar16 = *(undefined8 *)&(param_3->Desc).field_0x24;
    if (((int)uVar16 != 0) || ((int)((ulonglong)uVar16 >> 0x20) != 0)) goto LAB_144b03f00;
  }
  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                    ("InTexture.IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\ScreenPass.inl"
                     ,0xab,L"");
  if (bVar7) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
LAB_144b03f00:
  uVar4 = *(undefined8 *)&(param_3->Desc).field_0x24;
  this = param_2->ShaderMap;
  pFVar12 = (FShaderType *)FCopyRectPS::GetStaticType();
  FGlobalShaderMap::GetShader(this,&local_1a8,pFVar12,0);
  if (local_1a8.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_98);
    ::FName::ToString((FName *)this_00,&local_90);
    FCopyRectPS::GetStaticType();
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.Data.AllocatorInstance.Data);
    }
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  FCopyRectPS::GetStaticType();
  TShaderMapRef<FScreenPassVS>::TShaderMapRef<FScreenPassVS>(&local_198,param_2->ShaderMap);
  local_1c8 = TStaticStateRHI<TStaticBlendState<15,0,1,5,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
              ::StaticResource.StateRHI.Reference;
  local_1c0 = TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
              ::StaticResource.StateRHI.Reference;
  local_1d0 = local_198._8_8_;
  local_200 = (undefined4)param_2->_padding_;
  local_1fc = *(undefined4 *)((longlong)&param_2->_padding_ + 4);
  local_1f8 = *(undefined4 *)((longlong)&param_2->_padding_ + 4);
  local_1f4 = *(undefined1 *)((longlong)&param_2->_padding_ + 6);
  local_1d8 = local_198._0_8_;
  local_1b0 = FRDGEventName::FRDGEventName(&local_50,1,L"IESAtlas::BlitDebug");
  if ((local_198._0_8_ == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("VertexShader.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\ScreenPass.h"
                         ,0x206,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((local_1a8.ShaderContent == (FShader *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("PixelShader.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\ScreenPass.h"
                         ,0x207,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((pFVar2 == (FParameters *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("PixelShaderParameters",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\ScreenPass.h"
                         ,0x208,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar13 = FCopyRectPS::FParameters::FTypeInfo::GetStructMetadata();
  local_188.ShaderMap = local_1a8.ShaderMap;
  local_188.ShaderContent = local_1a8.ShaderContent;
  ValidateShaderParameters(&local_188,pFVar13,pFVar2);
  local_78._First = (FRDGResource **)0x0;
  local_78._Last = (FRDGResource **)0x0;
  ClearUnusedGraphResourcesImpl(&(local_1a8.ShaderContent)->Bindings,pFVar13,pFVar2,&local_78);
  local_178 = local_1d8;
  uStack_170 = local_1d0;
  local_158 = local_1c8;
  pFStack_150 = local_1c0;
  local_148 = GFilterVertexDeclaration._32_8_;
  local_138 = local_200;
  local_134 = local_1fc;
  local_130 = local_1f8;
  local_12c = local_1f4;
  local_12b = local_1f3;
  local_129 = local_1f1;
  local_120 = local_60;
  local_f8 = local_1d8;
  uStack_f0 = local_1d0;
  local_168 = local_1a8.ShaderContent;
  pFStack_160 = local_1a8.ShaderMap;
  local_e8 = local_1a8.ShaderContent;
  pFStack_e0 = local_1a8.ShaderMap;
  uStack_140 = 0;
  lStack_c0 = (ulonglong)uStack_13f << 8;
  local_108 = local_1b8;
  local_d8 = local_1c8;
  pFStack_d0 = local_1c0;
  local_b8 = local_1a8.ShaderContent;
  local_c8 = GFilterVertexDeclaration._32_8_;
  local_b0 = local_1a8.ShaderMap;
  local_a0 = 0;
  local_128 = uVar4;
  local_118 = uVar16;
  local_110 = uVar3;
  local_100 = uVar3;
  local_a8 = pFVar2;
  pFVar13 = FCopyRectPS::FParameters::FTypeInfo::GetStructMetadata();
  FRDGBuilder::
  AddPassInternal<FCopyRectPS::FParameters,_AddDrawScreenPass<FCopyRectPS>_::__l2::<lambda_1>_>
            (param_1,local_1b0,pFVar13,pFVar2,Raster,(<lambda_1> *)&local_138);
  if (local_50.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.FormattedEventName.Data.AllocatorInstance.Data);
  }
  return;
}

// AddIESDebugPass @ 144b04240

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGTexture * __cdecl
IESAtlas::AddIESDebugPass(FRDGBuilder *param_1,FViewInfo *param_2,FRDGTextureDesc *param_3)

{
  int *piVar1;
  longlong lVar2;
  byte *pbVar3;
  uint uVar4;
  undefined8 uVar5;
  FUploadedBuffer *pFVar6;
  FGlobalShaderMap *this;
  code *pcVar7;
  TConsoleVariableData<int> *pTVar8;
  ForAnyElementType _Src;
  bool bVar9;
  int iVar10;
  uint uVar11;
  FRDGTexture *pFVar12;
  FRDGTexture *pFVar13;
  undefined8 *puVar14;
  FShaderParametersMetadata *pFVar15;
  FRDGTextureUAV *pFVar16;
  FRDGBuffer *pFVar17;
  ForAnyElementType _Dst;
  FRDGBufferSRV *pFVar18;
  FShaderType *pFVar19;
  FName this_00;
  FRDGEventName *pFVar20;
  ulonglong uVar21;
  longlong lVar22;
  undefined1 auStackY_1f8 [32];
  undefined1 local_1a8 [8];
  ForAnyElementType local_1a0;
  uint local_198;
  uint local_194;
  undefined4 local_190 [2];
  undefined8 *local_188;
  undefined4 local_180;
  undefined4 uStack_17c;
  FRDGTextureUAVDesc local_178;
  FRDGBufferSRVDesc local_158;
  TIntVector3<int>_u_0 local_138;
  undefined8 local_128;
  FViewInfo *local_120;
  undefined8 local_118;
  FRDGTexture *local_110;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_108;
  undefined1 local_f8 [8];
  FString local_f0;
  TShaderRefBase<IESAtlas::FIESAtlasDebugInfoCS,FShaderMapPointerTable> local_d8;
  FRDGBufferDesc local_c8;
  FRDGEventName local_b0;
  undefined1 local_98 [24];
  float local_80;
  int local_7c;
  undefined4 local_78;
  undefined8 local_74;
  undefined4 local_6c;
  undefined2 local_68;
  undefined1 local_66;
  undefined1 local_65;
  undefined2 local_64;
  void *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  local_120 = param_2;
  ShaderPrint::SetEnabled(true);
  local_74 = *(undefined8 *)&param_3->field_0x24;
  local_180 = (undefined4)local_74;
  uStack_17c = SUB84(local_74,4);
  local_80 = FClearValueBinding::Black.Value.Color[3];
  local_7c = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
  local_4c = 1;
  local_65 = param_3->field_0x33;
  local_98._0_8_ = 0x20008;
  local_98._8_8_ = FClearValueBinding::Black._0_8_;
  local_98._16_8_ = FClearValueBinding::Black.Value._4_8_;
  local_78 = 0;
  local_6c = 0x10001;
  local_68 = 0x101;
  local_66 = 0;
  local_64 = 0xff00;
  local_58 = (void *)0x0;
  local_50 = 0;
  pFVar12 = FRDGBuilder::CreateTexture
                      (param_1,(FRDGTextureDesc *)local_98,L"IESAtlas.DebugTexture",None);
  local_110 = pFVar12;
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  if (GIESTextureManager._32_8_ == 0) {
    pFVar13 = FSystemTextures::GetBlackDummy((FSystemTextures *)&GSystemTextures,param_1);
  }
  else {
    pFVar13 = FRDGBuilder::RegisterExternalTexture
                        (param_1,(TRefCountPtr<IPooledRenderTarget> *)&GIESTextureManager.field_0x20
                         ,None);
  }
  uVar5 = *(undefined8 *)&(pFVar12->Desc).field_0x24;
  local_128 = uVar5;
  local_118 = uVar5;
  puVar14 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x90,0x10);
  if (puVar14 == (undefined8 *)0x0) {
    puVar14 = (undefined8 *)0x0;
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar9) {
      pcVar7 = (code *)swi(3);
      pFVar12 = (FRDGTexture *)(*pcVar7)();
      return pFVar12;
    }
  }
  else {
    *(undefined1 *)(puVar14 + 0xd) = 1;
    *puVar14 = &___7__TObject_VFParameters_FIESAtlasDebugInfoCS_IESAtlas___FRDGAllocator__6B_;
    puVar14[7] = 0;
    puVar14[8] = 0;
    puVar14[9] = 0;
    puVar14[10] = 0;
    puVar14[0xc] = 0;
    puVar14[0xe] = 0;
    puVar14[0xf] = 0;
    puVar14[0x10] = 0;
    *(undefined1 *)(puVar14 + 0x11) = 1;
  }
  local_188 = puVar14;
  if ((((undefined8 **)param_1->_padding_ <= &local_188) &&
      (&local_188 < (undefined8 **)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4))
      ) && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar9)) {
    pcVar7 = (code *)swi(3);
    pFVar12 = (FRDGTexture *)(*pcVar7)();
    return pFVar12;
  }
  iVar10 = (int)param_1->_padding_;
  piVar1 = (int *)((longlong)&param_1->_padding_ + 4);
  if (iVar10 == *piVar1) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,(ForAnyElementType *)&param_1->_padding_,piVar1);
  }
  *(int *)&param_1->_padding_ = iVar10 + 1;
  *(undefined8 **)(param_1->_padding_ + (longlong)iVar10 * 8) = local_188;
  (((FParameters *)(puVar14 + 2))->AtlasResolution).field0_0x0 =
       *(TIntPoint<int>_u_0 *)&(pFVar13->Desc).field_0x24;
  *(uint *)(puVar14 + 3) = (uint)*(ushort *)&(pFVar13->Desc).field_0x2e;
  puVar14[4] = 0;
  *(undefined4 *)((longlong)puVar14 + 0x1c) = 0;
  pTVar8 = CVarIESForceUpdate.Ref;
  bVar9 = IsInParallelRenderingThread();
  if ((!bVar9) &&
     (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007955>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6d3,"IsInParallelRenderingThread()"), bVar9)) {
    pcVar7 = (code *)swi(3);
    pFVar12 = (FRDGTexture *)(*pcVar7)();
    return pFVar12;
  }
  iVar10 = pTVar8->ShadowedValue[1];
  puVar14[6] = uVar5;
  *(uint *)(puVar14 + 5) = (uint)(0 < iVar10);
  puVar14[7] = TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
               ::StaticResource.StateRHI.Reference;
  puVar14[9] = pFVar13;
  pFVar15 = FViewUniformShaderParameters::GetStructMetadata();
  local_178._padding_ = param_2->_padding_;
  local_178._padding_._0_1_ = Static;
  if (pFVar15->BindingFlags != StaticAndShader) {
    local_178._padding_._0_1_ = pFVar15->BindingFlags;
  }
  puVar14[0x10] = local_178._padding_;
  puVar14[0x11] =
       CONCAT71(local_178._padding_._1_7_,(EUniformBufferBindingFlags)local_178._padding_);
  ShaderPrint::SetParameters(param_1,&param_2->ShaderPrintData,(FShaderParameters *)(puVar14 + 0xc))
  ;
  local_178._padding_._0_7_ = (uint7)(byte)(pFVar12->Desc).field_0x34;
  local_178._padding_._0_1_ = 0;
  local_178.Texture = pFVar12;
  pFVar16 = FRDGBuilder::CreateUAV(param_1,&local_178,None);
  puVar14[10] = pFVar16;
  local_1a0.Data = (FScriptContainerElement *)0x0;
  local_194 = 0;
  uVar4 = *(uint *)(puVar14 + 3);
  uVar21 = (ulonglong)uVar4;
  local_190[0] = 0;
  if (-1 < (int)uVar4) {
    local_198 = 0;
    if ((uVar4 != 0) &&
       (UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,uVar4,&local_1a0,0,(int *)&local_194), 0 < (int)uVar4)) {
      do {
        if ((local_1a0.Data <= (FScriptContainerElement *)local_190) &&
           (((FScriptContainerElement *)local_190 < local_1a0.Data + (longlong)(int)local_194 * 4 &&
            (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar9)))) {
          pcVar7 = (code *)swi(3);
          pFVar12 = (FRDGTexture *)(*pcVar7)();
          return pFVar12;
        }
        if (local_198 == local_194) {
          local_198 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x404,&local_1a0,(int *)&local_194);
        }
        uVar4 = local_198 + 1;
        *(undefined4 *)(local_1a0.Data + (longlong)(int)local_198 * 4) = local_190[0];
        uVar21 = uVar21 - 1;
        local_198 = uVar4;
      } while (uVar21 != 0);
    }
    iVar10 = GIESTextureManager._48_4_;
    lVar2 = GIESTextureManager._40_8_ + (longlong)iVar10 * 0x28;
    lVar22 = GIESTextureManager._40_8_;
    while( true ) {
      if (GIESTextureManager._48_4_ != iVar10) {
        local_1a8[0] = 0;
        `TCheckedPointerIterator<IESAtlas::FAtlasSlot,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_1a8);
      }
      if (lVar22 == lVar2) break;
      *(int *)((longlong)puVar14 + 0x1c) = *(int *)((longlong)puVar14 + 0x1c) + 1;
      if (*(longlong *)(lVar22 + 0x18) != 0) {
        *(int *)(puVar14 + 4) = *(int *)(puVar14 + 4) + 1;
        uVar4 = *(uint *)(lVar22 + 4);
        if (uVar4 != 0xffffffff) {
          uVar11 = 0;
          if ((int)uVar4 < (int)local_198) {
            uVar11 = ~uVar4 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar7 = (code *)swi(3);
            pFVar12 = (FRDGTexture *)(*pcVar7)();
            return pFVar12;
          }
          *(undefined4 *)(local_1a0.Data + (longlong)(int)uVar4 * 4) = 1;
          *(int *)((longlong)puVar14 + 0x24) = *(int *)((longlong)puVar14 + 0x24) + 1;
        }
      }
      lVar22 = lVar22 + 0x28;
    }
    local_158._padding_._0_4_ = 0x4109;
    local_158._padding_ = 0;
    local_158._padding_._4_4_ = local_198;
    local_158._padding_._0_4_ = 4;
    local_c8.NumElements = local_198;
    local_c8.BytesPerElement = 4;
    local_c8._12_4_ = local_158._padding_._4_4_;
    local_c8.Usage = VertexBuffer|ShaderResource|UnorderedAccess|Static;
    local_c8.Metadata = (FShaderParametersMetadata *)0x0;
    pFVar17 = FRDGBuilder::CreateBuffer(param_1,&local_c8,L"IESAtlas.DebugValidSliceBuffer",None);
    _Src.Data = local_1a0.Data;
    uVar4 = local_198 * 4;
    uVar21 = (ulonglong)uVar4;
    FRDGUserValidation::ValidateUploadBuffer(&param_1->UserValidation,pFVar17,local_1a0.Data,uVar21)
    ;
    uVar5 = local_128;
    _Dst.Data = _Src.Data;
    if (uVar21 != 0) {
      _Dst.Data = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,(ulonglong)uVar4,0x10);
      memcpy(_Dst.Data,_Src.Data,uVar21);
    }
    iVar10 = (param_1->UploadedBuffers).ArrayNum;
    piVar1 = &(param_1->UploadedBuffers).ArrayMax;
    if (iVar10 == *piVar1) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGBuilder::FUploadedBuffer>_>
                         (0x10e0,&(param_1->UploadedBuffers).AllocatorInstance,piVar1);
    }
    local_158._padding_._0_4_ = CONCAT31(local_158._padding_._1_3_,0x1c);
    local_158._padding_._4_4_ = 0;
    (param_1->UploadedBuffers).ArrayNum = iVar10 + 1;
    pFVar6 = (param_1->UploadedBuffers).AllocatorInstance.Data;
    local_158._padding_ = 0;
    local_158._padding_._0_4_ = 0xffffffff;
    pFVar6[iVar10].bUseDataCallbacks = false;
    pFVar6[iVar10].bUseFreeCallbacks = false;
    pFVar6[iVar10].Buffer = pFVar17;
    pFVar6[iVar10].Data = _Dst.Data;
    pFVar6[iVar10].DataSize = uVar21;
    *(undefined8 *)&pFVar6[iVar10].DataCallback = 0;
    *(undefined8 *)&pFVar6[iVar10].DataCallback.field_0x28 = 0;
    *(undefined8 *)&pFVar6[iVar10].DataSizeCallback = 0;
    *(undefined8 *)&pFVar6[iVar10].DataSizeCallback.field_0x28 = 0;
    *(undefined8 *)&pFVar6[iVar10].DataFreeCallback = 0;
    *(undefined8 *)&pFVar6[iVar10].DataFreeCallback.field_0x28 = 0;
    *(undefined8 *)&pFVar6[iVar10].DataFillCallback = 0;
    *(undefined8 *)&pFVar6[iVar10].DataFillCallback.field_0x28 = 0;
    pbVar3 = (byte *)((longlong)&pFVar17->_padding_ + 1);
    *pbVar3 = *pbVar3 | 0x80;
    local_158.Buffer = pFVar17;
    pFVar18 = FRDGBuilder::CreateSRV(param_1,&local_158);
    puVar14[8] = pFVar18;
    this = local_120->ShaderMap;
    pFVar19 = (FShaderType *)FIESAtlasDebugInfoCS::GetStaticType();
    FGlobalShaderMap::GetShader(this,&local_108,pFVar19,0);
    if (local_108.ShaderContent == (FShader *)0x0) {
      this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_f8);
      ::FName::ToString((FName *)this_00,&local_f0);
      FIESAtlasDebugInfoCS::GetStaticType();
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Shader.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                         ,0xc0,L"Failed to find shader type %s in Platform %s");
      if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f0.Data.AllocatorInstance.Data);
      }
      if (bVar9) {
        pcVar7 = (code *)swi(3);
        pFVar12 = (FRDGTexture *)(*pcVar7)();
        return pFVar12;
      }
    }
    FIESAtlasDebugInfoCS::GetStaticType();
    local_d8.ShaderContent = (FIESAtlasDebugInfoCS *)local_108.ShaderContent;
    local_d8.ShaderMap = local_108.ShaderMap;
    pFVar20 = FRDGEventName::FRDGEventName(&local_b0,1,L"IESAtlas::DebugInfo");
    pFVar15 = FIESAtlasDebugInfoCS::FParameters::FTypeInfo::GetStructMetadata();
    local_138._s_0.Z = 1;
    iVar10 = (int)uVar5 + 7;
    local_138._s_0.X = (int)(iVar10 + (iVar10 >> 0x1f & 7U)) >> 3;
    local_138._s_0.Y = (int)(local_118._4_4_ + 7 + (local_118._4_4_ + 7 >> 0x1f & 7U)) >> 3;
    FComputeShaderUtils::AddPass<IESAtlas::FIESAtlasDebugInfoCS>
              (param_1,pFVar20,Compute,&local_d8,pFVar15,(FParameters *)(puVar14 + 2),
               (TIntVector3<int> *)&local_138._s_0);
    if (local_b0.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.FormattedEventName.Data.AllocatorInstance.Data);
    }
    if (local_1a0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a0.Data);
    }
    return local_110;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum(uVar21);
}

// AddSlotsPassCS @ 144b05730

/* WARNING: Removing unreachable block (ram,0x000144b05ccd) */
/* WARNING: Removing unreachable block (ram,0x000144b05cdc) */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
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

void __cdecl
IESAtlas::AddSlotsPassCS
          (FRDGBuilder *param_1,FGlobalShaderMap *param_2,
          TArray<IESAtlas::FAtlasSlot,TSizedDefaultAllocator<32>_> *param_3,FRDGTexture **param_4)

{
  FParameters *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  longlong *plVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  FShaderType *pFVar8;
  FName this;
  undefined8 *puVar9;
  longlong lVar10;
  FRDGEventName *pFVar11;
  FShaderParametersMetadata *pFVar12;
  uint uVar13;
  undefined8 *puVar14;
  FParameters *pFVar15;
  uint uVar16;
  int *piVar17;
  ulonglong uVar18;
  uint local_res18;
  undefined8 *local_f8;
  uint local_f0;
  uint local_ec;
  TIntVector3<int>_u_0 local_e8;
  FRDGTextureUAVDesc local_d8;
  FRDGTextureUAV *local_c0;
  longlong *local_b8;
  FMemStackBase *local_b0;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_a8;
  undefined1 local_98 [8];
  FString local_90;
  TShaderRefBase<IESAtlas::FIESAtlasAddTextureCS,FShaderMapPointerTable> local_78;
  FRDGEventName local_68;
  
  local_d8.Texture = *param_4;
  local_d8._padding_._1_1_ = 0;
  local_d8._padding_._2_4_ = 0;
  local_d8._padding_._0_1_ = ((local_d8.Texture)->Desc).field_0x34;
  local_d8._padding_._6_1_ = 0;
  local_d8._padding_._0_1_ = 0;
  local_c0 = FRDGBuilder::CreateUAV(param_1,&local_d8,None);
  pFVar8 = (FShaderType *)FIESAtlasAddTextureCS::GetStaticType();
  FGlobalShaderMap::GetShader(param_2,&local_a8,pFVar8,0);
  if (local_a8.ShaderContent == (FShader *)0x0) {
    this = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_98);
    ::FName::ToString((FName *)this,&local_90);
    FIESAtlasAddTextureCS::GetStaticType();
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.Data.AllocatorInstance.Data);
    }
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FIESAtlasAddTextureCS::GetStaticType();
  uVar13 = param_3->ArrayNum + 7;
  local_ec = uVar13 >> 3;
  local_78.ShaderContent = (FIESAtlasAddTextureCS *)local_a8.ShaderContent;
  local_78.ShaderMap = local_a8.ShaderMap;
  local_res18 = 0;
  if (uVar13 >> 3 != 0) {
    local_b0 = (FMemStackBase *)&param_1->_padding_;
    local_b8 = &param_1->_padding_;
    piVar17 = (int *)((longlong)&param_1->_padding_ + 4);
    do {
      plVar4 = local_b8;
      puVar14 = (undefined8 *)0x0;
      uVar16 = local_res18 * 8;
      uVar13 = param_3->ArrayNum + local_res18 * -8;
      if (uVar16 + 8 <= (uint)param_3->ArrayNum) {
        uVar13 = 8;
      }
      uVar18 = (ulonglong)uVar13;
      local_f0 = uVar13;
      puVar9 = FMemStackBase::Alloc(local_b0,0x130,0x10);
      if (puVar9 == (undefined8 *)0x0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Object",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                           ,0x61,L"");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      else {
        *puVar9 = &___7__TObject_VFParameters_FIESAtlasAddTextureCS_IESAtlas___FRDGAllocator__6B_;
        puVar9[2] = 0;
        puVar9[3] = 0;
        puVar9[4] = 0;
        puVar9[5] = 0;
        puVar9[6] = 0;
        puVar9[7] = 0;
        puVar9[8] = 0;
        puVar9[9] = 0;
        puVar9[0x1a] = 0;
        puVar9[0x1b] = 0;
        puVar9[0x1c] = 0;
        puVar9[0x1d] = 0;
        puVar9[0x1e] = 0;
        puVar9[0x1f] = 0;
        puVar9[0x20] = 0;
        puVar9[0x21] = 0;
        puVar9[0x24] = 0;
        puVar14 = puVar9;
      }
      local_f8 = puVar14;
      if ((((undefined8 **)*plVar4 <= &local_f8) && (&local_f8 < (undefined8 **)*plVar4 + *piVar17))
         && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar6 = (int)plVar4[1];
      if (iVar6 == *piVar17) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,(ForAnyElementType *)plVar4,piVar17);
      }
      pFVar1 = (FParameters *)(puVar14 + 2);
      *(int *)(plVar4 + 1) = iVar6 + 1;
      puVar9 = puVar14 + 10;
      *(undefined8 **)(*plVar4 + (longlong)iVar6 * 8) = local_f8;
      puVar14[0x24] = local_c0;
      puVar14[0x22] = *(undefined8 *)&((*param_4)->Desc).field_0x24;
      *(uint *)(puVar14 + 0x23) = (uint)*(ushort *)&((*param_4)->Desc).field_0x2e;
      *(uint *)((longlong)puVar14 + 0x11c) = uVar13;
      *(undefined8 *)&pFVar1->InTexture = *(undefined8 *)(GSystemTextures._40_8_ + 8);
      *(undefined4 *)puVar9 = 0xffffffff;
      puVar14[0x1a] =
           TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
           ::StaticResource.StateRHI.Reference;
      puVar14[3] = *(undefined8 *)(GSystemTextures._40_8_ + 8);
      *(undefined4 *)(puVar14 + 0xc) = 0xffffffff;
      puVar14[0x1b] =
           TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
           ::StaticResource.StateRHI.Reference;
      puVar14[4] = *(undefined8 *)(GSystemTextures._40_8_ + 8);
      *(undefined4 *)(puVar14 + 0xe) = 0xffffffff;
      puVar14[0x1c] =
           TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
           ::StaticResource.StateRHI.Reference;
      puVar14[5] = *(undefined8 *)(GSystemTextures._40_8_ + 8);
      *(undefined4 *)(puVar14 + 0x10) = 0xffffffff;
      puVar14[0x1d] =
           TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
           ::StaticResource.StateRHI.Reference;
      puVar14[6] = *(undefined8 *)(GSystemTextures._40_8_ + 8);
      *(undefined4 *)(puVar14 + 0x12) = 0xffffffff;
      puVar14[0x1e] =
           TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
           ::StaticResource.StateRHI.Reference;
      puVar14[7] = *(undefined8 *)(GSystemTextures._40_8_ + 8);
      *(undefined4 *)(puVar14 + 0x14) = 0xffffffff;
      puVar14[0x1f] =
           TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
           ::StaticResource.StateRHI.Reference;
      puVar14[8] = *(undefined8 *)(GSystemTextures._40_8_ + 8);
      *(undefined4 *)(puVar14 + 0x16) = 0xffffffff;
      puVar14[0x20] =
           TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
           ::StaticResource.StateRHI.Reference;
      puVar14[9] = *(undefined8 *)(GSystemTextures._40_8_ + 8);
      *(undefined4 *)(puVar14 + 0x18) = 0xffffffff;
      puVar14[0x21] =
           TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
           ::StaticResource.StateRHI.Reference;
      pFVar15 = pFVar1;
      if (uVar13 != 0) {
        do {
          uVar13 = 0;
          if ((int)uVar16 < param_3->ArrayNum) {
            uVar13 = ~uVar16 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          lVar10 = (longlong)(int)uVar16;
          pFVar2 = (param_3->AllocatorInstance).Data;
          if ((*(longlong *)(pFVar2 + lVar10 * 0x28 + 0x18) == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Slot.SourceTexture",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\IESTextureManager.cpp"
                                 ,0x10b,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          uVar16 = uVar16 + 1;
          *(undefined8 *)&pFVar15->InTexture =
               *(undefined8 *)(*(longlong *)(pFVar2 + lVar10 * 0x28 + 0x18) + 0x138);
          *(undefined4 *)puVar9 = *(undefined4 *)(pFVar2 + lVar10 * 0x28 + 4);
          puVar9 = puVar9 + 2;
          uVar18 = uVar18 - 1;
          pFVar15 = (FParameters *)&(pFVar15->InTexture).field_0x8;
          uVar13 = local_f0;
        } while (uVar18 != 0);
      }
      iVar6 = *(int *)(puVar14 + 0x22);
      iVar7 = *(int *)((longlong)puVar14 + 0x114) + 7;
      pFVar11 = FRDGEventName::FRDGEventName(&local_68,1,L"IESAtlas::AddTexture");
      pFVar12 = FIESAtlasAddTextureCS::FParameters::FTypeInfo::GetStructMetadata();
      local_e8._s_0.X = (int)((iVar6 + 7 >> 0x1f & 7U) + iVar6 + 7) >> 3;
      local_e8._s_0.Y = (int)((iVar7 >> 0x1f & 7U) + iVar7) >> 3;
      local_e8._s_0.Z = uVar13;
      FComputeShaderUtils::AddPass<IESAtlas::FIESAtlasAddTextureCS>
                (param_1,pFVar11,Compute,&local_78,pFVar12,pFVar1,(TIntVector3<int> *)&local_e8._s_0
                );
      if (local_68.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
      {
        FMemory::Free(local_68.FormattedEventName.Data.AllocatorInstance.Data);
      }
      local_res18 = local_res18 + 1;
      piVar17 = (int *)((longlong)local_b8 + 0xc);
    } while (local_res18 < local_ec);
  }
  return;
}

// AddSlotsPassPS @ 144b05d40

/* WARNING: Removing unreachable block (ram,0x000144b06280) */
/* WARNING: Removing unreachable block (ram,0x000144b06290) */
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

void __cdecl
IESAtlas::AddSlotsPassPS
          (FRDGBuilder *param_1,FGlobalShaderMap *param_2,
          TArray<IESAtlas::FAtlasSlot,TSizedDefaultAllocator<32>_> *param_3,FRDGTexture **param_4)

{
  uchar *puVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  longlong *plVar5;
  bool bVar6;
  ERDGPassFlags EVar7;
  uint uVar8;
  int iVar9;
  FShaderType *pFVar10;
  FName this;
  undefined8 *puVar11;
  FRDGEventName *this_00;
  FShaderParametersMetadata *pFVar12;
  wchar_t *pwVar13;
  FRDGPass *this_01;
  uint uVar14;
  int *piVar15;
  undefined8 *local_120;
  longlong *local_118;
  FShader *local_108;
  FShaderMapBase *pFStack_100;
  FScriptContainerElement *local_f8;
  undefined4 local_f0;
  undefined4 uStack_ec;
  FRenderTargetBinding local_e8;
  FMemStackBase *local_d0;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_c8;
  FRDGParameterStruct local_b8;
  undefined1 local_a0 [8];
  FString local_98;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_88;
  initializer_list<FRDGResource_*> local_78;
  FRDGEventName local_68;
  
  pFVar10 = (FShaderType *)FIESAtlasAddTexturePS::GetStaticType();
  FGlobalShaderMap::GetShader(param_2,&local_c8,pFVar10,0);
  if (local_c8.ShaderContent == (FShader *)0x0) {
    this = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_a0);
    ::FName::ToString((FName *)this,&local_98);
    FIESAtlasAddTexturePS::GetStaticType();
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  FIESAtlasAddTexturePS::GetStaticType();
  uVar2 = param_3->ArrayNum;
  uVar14 = 0;
  pFStack_100 = local_c8.ShaderMap;
  if (uVar2 != 0) {
    local_d0 = (FMemStackBase *)&param_1->_padding_;
    local_118 = &param_1->_padding_;
    piVar15 = (int *)((longlong)&param_1->_padding_ + 4);
    local_108 = local_c8.ShaderContent;
    do {
      plVar5 = local_118;
      uVar8 = 0;
      if ((int)uVar14 < param_3->ArrayNum) {
        uVar8 = ~uVar14 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar3 = (param_3->AllocatorInstance).Data;
      local_f8 = (FScriptContainerElement *)0x0;
      local_f0 = *(undefined4 *)&((*param_4)->Desc).field_0x24;
      uStack_ec = *(undefined4 *)&((*param_4)->Desc).field_0x28;
      puVar11 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x130,0x10);
      if (puVar11 == (undefined8 *)0x0) {
        puVar11 = (undefined8 *)0x0;
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Object",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                           ,0x61,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      else {
        *puVar11 = &___7__TObject_VFParameters_FIESAtlasAddTexturePS_IESAtlas___FRDGAllocator__6B_;
        puVar11[2] = 0;
        puVar11[3] = 0;
        FRenderTargetBindingSlots::FRenderTargetBindingSlots
                  ((FRenderTargetBindingSlots *)(puVar11 + 6));
      }
      local_120 = puVar11;
      if ((((undefined8 **)*plVar5 <= &local_120) &&
          (&local_120 < (undefined8 **)*plVar5 + *piVar15)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar9 = (int)plVar5[1];
      if (iVar9 == *piVar15) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,(ForAnyElementType *)plVar5,piVar15);
      }
      *(int *)(plVar5 + 1) = iVar9 + 1;
      puVar1 = (uchar *)(puVar11 + 2);
      local_e8.ResolveTexture = (FRDGTexture *)0x0;
      local_e8.LoadAction = ENoAction;
      local_e8.MipIndex = '\0';
      *(undefined8 **)(*plVar5 + (longlong)iVar9 * 8) = local_120;
      *(undefined8 *)puVar1 =
           *(undefined8 *)(*(longlong *)(pFVar3 + (longlong)(int)uVar14 * 0x28 + 0x18) + 0x138);
      puVar11[3] = TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
                   ::StaticResource.StateRHI.Reference;
      puVar11[4] = *(undefined8 *)&((*param_4)->Desc).field_0x24;
      local_e8.Texture = *param_4;
      local_e8.ArraySlice = *(short *)(pFVar3 + (longlong)(int)uVar14 * 0x28 + 4);
      bVar6 = FRenderTargetBinding::Validate(&local_e8);
      if ((!bVar6) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Validate()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                             ,0x216,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      puVar11[6] = local_e8.Texture;
      puVar11[7] = local_e8.ResolveTexture;
      puVar11[8] = CONCAT44(local_e8._20_4_,CONCAT22(local_e8.ArraySlice,local_e8._16_2_));
      this_00 = FRDGEventName::FRDGEventName(&local_68,L"IESAtlas::AddTexturePS (Slot: %d)");
      if ((local_108 == (FShader *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("PixelShader.IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\PixelShaderUtils.h"
                             ,0xa8,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar12 = FIESAtlasAddTexturePS::FParameters::FTypeInfo::GetStructMetadata();
      local_88.ShaderContent = local_108;
      local_88.ShaderMap = pFStack_100;
      ValidateShaderParameters(&local_88,pFVar12,puVar1);
      local_78._First = (FRDGResource **)0x0;
      local_78._Last = (FRDGResource **)0x0;
      ClearUnusedGraphResourcesImpl(&local_108->Bindings,pFVar12,puVar1,&local_78);
      pFVar12 = FIESAtlasAddTexturePS::FParameters::FTypeInfo::GetStructMetadata();
      FRDGUserValidation::ValidateAddPass(&param_1->UserValidation,puVar1,pFVar12,this_00,Raster);
      FRDGBuilder::FlushAccessModeQueue(param_1);
      pwVar13 = FRDGEventName::GetTCHAR(this_00);
      EVar7 = FRDGBuilder::OverridePassFlags(param_1,pwVar13,Raster);
      this_01 = FMemStackBase::Alloc(local_d0,0x1d8,8);
      local_b8.Contents = puVar1;
      if (((pFVar12->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsLayoutInitialized()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                             ,0x17c,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      local_b8.Layout.Reference = (pFVar12->Layout).Reference;
      if (local_b8.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
        FRHIResource::AddRef((FRHIResource *)local_b8.Layout.Reference);
      }
      local_b8.Metadata = pFVar12;
      FRDGPass::FRDGPass(this_01,this_00,&local_b8,EVar7,Async);
      this_01->_padding_ =
           (longlong)
           &
           ___7__TRDGLambdaPass_VFParameters_FIESAtlasAddTexturePS_IESAtlas__V<lambda_1>__1____AddFullscreenPass_VFIESAtlasAddTexturePS_IESAtlas___FPixelShaderUtils__SAXAEAVFRDGBuilder__PEBVFGlobalShaderMap____QEAVFRDGEventName__AEBV__TShaderRefBase_VFIESAtlasAddTexturePS_IESAtlas__VFShaderMapPointerTable____PEAV123_AEBU__TIntRect_H_Math_UE__PEAVFRHIBlendState__PEAVFRHIRasterizerState__PEAVFRHIDepthStencilState__IW4ERDGPassFlags___Z___6B_
      ;
      this_01[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_2;
      this_01[1]._padding_ = (longlong)puVar1;
      *(FShader **)&this_01[1].FullPathIfDebug.Data.ArrayNum = local_108;
      this_01[1].Name.EventFormat = (wchar_t *)pFStack_100;
      this_01[1].Name.FormattedEventName.Data.AllocatorInstance.Data = local_f8;
      this_01[1].Name.FormattedEventName.Data.ArrayNum = local_f0;
      this_01[1].Name.FormattedEventName.Data.ArrayMax = uStack_ec;
      this_01[1].ParameterStruct.Contents = (uchar *)0x0;
      this_01[1].ParameterStruct.Layout.Reference = (FRHIUniformBufferLayout *)0x0;
      this_01[1].ParameterStruct.Metadata = (FShaderParametersMetadata *)0x0;
      this_01[1].Flags = None;
      this_01[1].TaskMode = Inline;
      this_01[1].Pipeline = None;
      *(uchar **)&this_01[1].Workload = puVar1;
      FRDGBuilder::ClobberPassOutputs(param_1,this_01);
      iVar9 = (param_1->Passes).Array.ArrayNum;
      if (iVar9 == (param_1->Passes).Array.ArrayMax) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                          (0x808,(ForElementType<FRDGPass_*> *)&param_1->Passes,
                           &(param_1->Passes).Array.ArrayMax);
      }
      (param_1->Passes).Array.ArrayNum = iVar9 + 1;
      (param_1->Passes).Array.AllocatorInstance.Data[iVar9] = this_01;
      (this_01->Handle).Index = (param_1->Passes).Array.ArrayNum - 1;
      FRDGBuilder::SetupParameterPass(param_1,this_01);
      if (local_68.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
      {
        FMemory::Free(local_68.FormattedEventName.Data.AllocatorInstance.Data);
      }
      uVar14 = uVar14 + 1;
      piVar15 = (int *)((longlong)local_118 + 0xc);
    } while (uVar14 < uVar2);
  }
  return;
}

// AddTexture @ 144b062f0

uint __cdecl IESAtlas::AddTexture(UTextureLightProfile *param_1)

{
  undefined4 uVar1;
  FRHIResource *this;
  FRHIResource *this_00;
  longlong *plVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  TIntPoint<int>_u_0 TVar9;
  ulonglong uVar10;
  uint *puVar11;
  uint *puVar12;
  undefined1 local_res8 [8];
  uint local_30 [6];
  
  bVar5 = IsInRenderingThread();
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\IESTextureManager.cpp"
                         ,0x164,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return uVar6;
  }
  uVar1 = GIESTextureManager._48_4_;
  if (param_1 == (UTextureLightProfile *)0x0) {
    return 0xffffffff;
  }
  uVar10 = (ulonglong)(int)GIESTextureManager._48_4_;
  puVar12 = (uint *)(GIESTextureManager._40_8_ + uVar10 * 0x28);
  puVar11 = (uint *)GIESTextureManager._40_8_;
  while( true ) {
    if ((int)uVar10 != uVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<IESAtlas::FAtlasSlot,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
      uVar10 = (ulonglong)(uint)GIESTextureManager._48_4_;
    }
    uVar4 = GIESTextureManager._72_8_;
    uVar6 = GIESTextureManager._48_4_;
    if (puVar11 == puVar12) break;
    if (*(longlong *)(puVar11 + 6) == *(longlong *)(param_1->_padding_ + 0x20)) {
      puVar11[2] = puVar11[2] + 1;
      return *puVar11;
    }
    puVar11 = puVar11 + 10;
  }
  lVar8 = *(longlong *)GIESTextureManager._72_8_;
  if (lVar8 == 0) {
    if (GIESTextureManager._48_4_ == GIESTextureManager._52_4_) {
      GIESTextureManager._48_4_ =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x828,(ForAnyElementType *)&GIESTextureManager.field_0x28,
                      (int *)&GIESTextureManager.field_0x34);
    }
    puVar12 = (uint *)(GIESTextureManager._40_8_ + (longlong)(int)GIESTextureManager._48_4_ * 0x28);
    GIESTextureManager._48_4_ = GIESTextureManager._48_4_ + 1;
    DefaultConstructItems<IESAtlas::FAtlasSlot,int>(puVar12,1);
  }
  else {
    uVar6 = *(uint *)(lVar8 + 8);
    GIESTextureManager._72_8_ = lVar8;
    *(undefined4 *)(lVar8 + 8) = 0;
    ::operator_delete((void *)uVar4,0x10);
    uVar7 = 0;
    if ((int)uVar6 < (int)GIESTextureManager._48_4_) {
      uVar7 = ~uVar6 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return uVar6;
    }
    puVar12 = (uint *)(GIESTextureManager._40_8_ + (longlong)(int)uVar6 * 0x28);
  }
  puVar11 = puVar12 + 6;
  ((TIntPoint<int>_u_0 *)(puVar12 + 3))->_s_0 =
       (TIntPoint<int>_u_0_s_0)UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
  puVar12[0] = 0xffffffff;
  puVar12[1] = 0xffffffff;
  puVar12[2] = 0;
  if (puVar11 != local_30) {
    puVar11[0] = 0;
    puVar11[1] = 0;
    if (*(FRHIResource **)puVar11 != (FRHIResource *)0x0) {
      FRHIResource::Release(*(FRHIResource **)puVar11);
    }
  }
  *(undefined1 *)(puVar12 + 8) = 0;
  this = *(FRHIResource **)puVar11;
  this_00 = *(FRHIResource **)(param_1->_padding_ + 0x20);
  if (this != this_00) {
    *(FRHIResource **)puVar11 = this_00;
    if (this_00 != (FRHIResource *)0x0) {
      FRHIResource::AddRef(this_00);
    }
    if (this != (FRHIResource *)0x0) {
      FRHIResource::Release(this);
    }
  }
  plVar2 = *(longlong **)puVar11;
  *puVar12 = uVar6;
  puVar12[1] = 0xffffffff;
  puVar12[2] = 1;
  TVar9 = UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
  if (plVar2 != (longlong *)0x0) {
    lVar8 = (**(code **)(*plVar2 + 0x20))(plVar2);
    uVar1 = *(undefined4 *)(lVar8 + 0x28);
    lVar8 = (**(code **)(*plVar2 + 0x20))(plVar2);
    TVar9._s_0.Y = uVar1;
    TVar9._s_0.X = *(undefined4 *)(lVar8 + 0x24);
  }
  *(TIntPoint<int>_u_0 *)(puVar12 + 3) = TVar9;
  GIESTextureManager._100_1_ = 1;
  return uVar6;
}

// GetAtlasSlot @ 144b23380

float __cdecl IESAtlas::GetAtlasSlot(uint param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  float fVar4;
  
  if ((param_1 < (uint)GIESTextureManager._48_4_) && (GIESTextureManager._32_8_ != 0)) {
    uVar3 = 0;
    if ((int)param_1 < (int)GIESTextureManager._48_4_) {
      uVar3 = ~param_1 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        fVar4 = (float)(*pcVar1)();
        return fVar4;
      }
    }
    uVar3 = *(uint *)(GIESTextureManager._40_8_ + 4 + (longlong)(int)param_1 * 0x28);
    if (uVar3 != 0xffffffff) {
      return (float)uVar3;
    }
  }
  return __real_bf800000;
}

// GetAtlasTexture @ 144b23420

FRHITexture * __cdecl IESAtlas::GetAtlasTexture(void)

{
  if (GIESTextureManager._32_8_ != 0) {
    return *(FRHITexture **)(GIESTextureManager._32_8_ + 8);
  }
  return (FRHITexture *)0x0;
}

// RemoveTexture @ 144b38470

void __cdecl IESAtlas::RemoveTexture(uint param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint local_res8 [2];
  FAtlasSlot local_38;
  
  local_res8[0] = param_1;
  bVar3 = IsInRenderingThread();
  if ((!bVar3) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\IESTextureManager.cpp"
                         ,0x193,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((param_1 != 0xffffffff) && (param_1 < (uint)GIESTextureManager._48_4_)) {
    uVar6 = 0;
    uVar5 = uVar6;
    if ((int)param_1 < (int)GIESTextureManager._48_4_) {
      uVar5 = ~param_1 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    piVar1 = (int *)(GIESTextureManager._40_8_ + 8 + (longlong)(int)param_1 * 0x28);
    *piVar1 = *piVar1 + -1;
    uVar5 = uVar6;
    if ((int)param_1 < (int)GIESTextureManager._48_4_) {
      uVar5 = ~param_1 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (*(int *)(GIESTextureManager._40_8_ + 8 + (longlong)(int)param_1 * 0x28) == 0) {
      uVar5 = uVar6;
      if ((int)param_1 < (int)GIESTextureManager._48_4_) {
        uVar5 = ~param_1 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (*(int *)(GIESTextureManager._40_8_ + 4 + (longlong)(int)param_1 * 0x28) != -1) {
        uVar5 = uVar6;
        if ((int)param_1 < (int)GIESTextureManager._48_4_) {
          uVar5 = ~param_1 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        TQueue<unsigned_int,1>::Enqueue
                  ((TQueue<unsigned_int,1> *)&GIESTextureManager.field_0x50,
                   (uint *)(GIESTextureManager._40_8_ + 4 + (longlong)(int)param_1 * 0x28));
      }
      uVar5 = GIESTextureManager._48_4_ - 1;
      if (param_1 == uVar5) {
        if ((int)GIESTextureManager._48_4_ < (int)uVar5) {
          iVar4 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x28,8,-1,(ForAnyElementType *)&GIESTextureManager.field_0x28,
                             (int *)&GIESTextureManager.field_0x30,
                             (int *)&GIESTextureManager.field_0x34);
          DefaultConstructItems<IESAtlas::FAtlasSlot,int>
                    ((void *)(GIESTextureManager._40_8_ + (longlong)iVar4 * 0x28),-1);
          return;
        }
        if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
        }
        if ((int)uVar5 < (int)GIESTextureManager._48_4_) {
          TArray<IESAtlas::FAtlasSlot,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                    ((TArray<IESAtlas::FAtlasSlot,TSizedDefaultAllocator<32>_> *)
                     &GIESTextureManager.field_0x28,uVar5,1);
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x28,8,(ForAnyElementType *)&GIESTextureManager.field_0x28,
                     GIESTextureManager._48_4_,(int *)&GIESTextureManager.field_0x34);
          return;
        }
      }
      else {
        TQueue<unsigned_int,1>::Enqueue
                  ((TQueue<unsigned_int,1> *)&GIESTextureManager.field_0x40,local_res8);
        local_38.CachedResolution.field0_0x0._s_0 = UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
        local_38._20_4_ = 0;
        local_38._33_4_ = 0;
        local_38._37_2_ = 0;
        local_38._39_1_ = 0;
        local_38.RefCount = 0;
        local_38.SourceTexture.Reference = (FRHITextureReference *)0x0;
        local_38.bForceRefresh = false;
        if ((int)param_1 < (int)GIESTextureManager._48_4_) {
          uVar6 = ~param_1 >> 0x1f;
        }
        local_38.Id = 0xffffffff;
        local_38.SliceIndex = 0xffffffff;
        if ((uVar6 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        FAtlasSlot::operator=
                  ((FAtlasSlot *)(GIESTextureManager._40_8_ + (longlong)(int)param_1 * 0x28),
                   &local_38);
        if (local_38.SourceTexture.Reference != (FRHITextureReference *)0x0) {
          FRHIResource::Release((FRHIResource *)local_38.SourceTexture.Reference);
        }
      }
    }
  }
  return;
}

// UpdateAtlasTexture @ 144b4b7c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl IESAtlas::UpdateAtlasTexture(FRDGBuilder *param_1,FStaticShaderPlatform param_2)

{
  longlong *plVar1;
  longlong lVar2;
  FAtlasSlot *pFVar3;
  FScriptContainerElement *pFVar4;
  FRHITextureReference *pFVar5;
  IPooledRenderTarget *pIVar6;
  code *pcVar7;
  TConsoleVariableData<int> *pTVar8;
  TConsoleVariableData<int> *pTVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  bool bVar12;
  bool bVar13;
  int iVar14;
  undefined8 *puVar15;
  FGlobalShaderMap *pFVar16;
  FRDGTexture *pFVar17;
  TRefCountPtr<IPooledRenderTarget> *pTVar18;
  ulonglong uVar19;
  uint uVar20;
  longlong lVar21;
  longlong lVar22;
  FAtlasSlot *pFVar23;
  uint uVar24;
  FRDGBuilder *pFVar25;
  undefined1 auStackY_128 [32];
  undefined1 local_d7;
  undefined1 local_d6;
  undefined1 local_d5;
  undefined1 local_d4;
  undefined1 local_d3 [3];
  TArray<IESAtlas::FAtlasSlot,TSizedDefaultAllocator<32>_> local_d0;
  TArray<IESAtlas::FAtlasSlot,TSizedDefaultAllocator<32>_> local_c0;
  FRDGBuilder *local_b0;
  int local_a8;
  int iStack_a4;
  FRDGTexture *local_a0;
  uint local_98;
  uint uStack_94;
  FRDGTexture *local_90;
  undefined1 local_88 [24];
  float local_70;
  int local_6c;
  undefined4 local_68;
  undefined8 local_64;
  undefined2 local_5c;
  undefined2 local_5a;
  undefined4 local_58;
  undefined2 local_54;
  void *local_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_128;
  uVar19 = (ulonglong)_tls_index;
  local_b0 = param_1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar19 * 8) + 0x9d4c) < ::_TSS0)
     && (_Init_thread_header(&::_TSS0), pTVar8 = CVarIESTextureResolution.Ref, ::_TSS0 == -1)) {
    bVar12 = IsInParallelRenderingThread();
    if ((!bVar12) &&
       (bVar12 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<6409875433831007955>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                            ,0x6d3,"IsInParallelRenderingThread()"), bVar12)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    CachedAtlasResolution = pTVar8->ShadowedValue[1];
    _Init_thread_footer(&::_TSS0);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar19 * 8) + 0x9d4c) < ::_TSS1)
     && (_Init_thread_header(&::_TSS1), pTVar8 = CVarIESTextureMaxProfileCount.Ref, ::_TSS1 == -1))
  {
    bVar12 = IsInParallelRenderingThread();
    if ((!bVar12) &&
       (bVar12 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<6409875433831007955>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                            ,0x6d3,"IsInParallelRenderingThread()"), bVar12)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    CachedAtlasMaxSlice = pTVar8->ShadowedValue[1];
    _Init_thread_footer(&::_TSS1);
  }
  pTVar8 = CVarIESTextureResolution.Ref;
  bVar12 = IsInParallelRenderingThread();
  if ((!bVar12) &&
     (bVar12 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pTVar9 = CVarIESTextureMaxProfileCount.Ref;
  if (CachedAtlasResolution == pTVar8->ShadowedValue[1]) {
    bVar12 = IsInParallelRenderingThread();
    if ((!bVar12) &&
       (bVar12 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<6409875433831007955>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                            ,0x6d3,"IsInParallelRenderingThread()"), bVar12)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if (CachedAtlasMaxSlice != pTVar9->ShadowedValue[1]) goto LAB_144b4b989;
    bVar12 = false;
  }
  else {
LAB_144b4b989:
    bVar12 = true;
  }
  pTVar8 = CVarIESForceUpdate.Ref;
  bVar13 = IsInParallelRenderingThread();
  if ((!bVar13) &&
     (bVar13 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar13)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar11 = GIESTextureManager._48_4_;
  local_a8 = pTVar8->ShadowedValue[1];
  uVar24 = 0;
  if ((GIESTextureManager._100_1_ == '\0') && (local_a8 < 1)) {
LAB_144b4ba56:
    if (!bVar12) {
      bVar12 = false;
      goto LAB_144b4ba63;
    }
  }
  else {
    lVar2 = GIESTextureManager._40_8_ + (longlong)(int)GIESTextureManager._48_4_ * 0x28;
    lVar22 = GIESTextureManager._40_8_;
    while( true ) {
      uVar20 = uVar24;
      if (GIESTextureManager._48_4_ != uVar11) {
        local_d7 = 0;
        `TCheckedPointerIterator<IESAtlas::FAtlasSlot_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_d7);
      }
      if (lVar22 == lVar2) break;
      lVar21 = lVar22 + 0x28;
      plVar1 = (longlong *)(lVar22 + 0x18);
      lVar22 = lVar21;
      uVar24 = uVar20 + 1;
      if (*plVar1 == 0) {
        uVar24 = uVar20;
      }
    }
    uVar24 = uVar20;
    if (CachedAtlasMaxSlice < uVar20) {
      uVar24 = CachedAtlasMaxSlice;
    }
    if ((GIESTextureManager._32_8_ != 0) && (uVar24 <= (uint)GIESTextureManager._96_4_))
    goto LAB_144b4ba56;
  }
  bVar12 = true;
LAB_144b4ba63:
  uVar11 = GIESTextureManager._48_4_;
  pTVar8 = CVarIESTextureResolution.Ref;
  if ((0 < local_a8) || (bVar12)) {
    bVar13 = IsInParallelRenderingThread();
    if ((!bVar13) &&
       (bVar13 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<6409875433831007955>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                            ,0x6d3,"IsInParallelRenderingThread()"), bVar13)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pTVar9 = CVarIESTextureMaxProfileCount.Ref;
    CachedAtlasResolution = pTVar8->ShadowedValue[1];
    bVar13 = IsInParallelRenderingThread();
    if ((!bVar13) &&
       (bVar13 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<6409875433831007955>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                            ,0x6d3,"IsInParallelRenderingThread()"), bVar13)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    uVar11 = GIESTextureManager._48_4_;
    uVar19 = (ulonglong)(int)GIESTextureManager._48_4_;
    CachedAtlasMaxSlice = pTVar9->ShadowedValue[1];
    lVar2 = GIESTextureManager._40_8_ + uVar19 * 0x28;
    lVar22 = GIESTextureManager._40_8_;
    while( true ) {
      if ((int)uVar19 != uVar11) {
        local_d5 = 0;
        `TCheckedPointerIterator<IESAtlas::FAtlasSlot,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_d5);
      }
      if (lVar22 == lVar2) break;
      *(undefined4 *)(lVar22 + 4) = 0xffffffff;
      lVar22 = lVar22 + 0x28;
      uVar19 = (ulonglong)(uint)GIESTextureManager._48_4_;
    }
    GIESTextureManager._100_1_ = 1;
    uVar20 = 0;
    while (uVar10 = GIESTextureManager._88_8_, lVar2 = *(longlong *)GIESTextureManager._88_8_,
          lVar2 != 0) {
      GIESTextureManager._88_8_ = lVar2;
      *(undefined4 *)(lVar2 + 8) = 0;
      ::operator_delete((void *)uVar10,0x10);
    }
    if (uVar24 != 0) {
      do {
        puVar15 = ::operator_new(0x10);
        if (puVar15 != (undefined8 *)0x0) {
          *puVar15 = 0;
          *(uint *)(puVar15 + 1) = uVar20;
          *(undefined8 **)GIESTextureManager._80_8_ = puVar15;
          GIESTextureManager._80_8_ = puVar15;
        }
        uVar20 = uVar20 + 1;
      } while (uVar20 < uVar24);
    }
  }
  else {
    lVar2 = GIESTextureManager._40_8_ + (longlong)(int)GIESTextureManager._48_4_ * 0x28;
    lVar22 = GIESTextureManager._40_8_;
    while( true ) {
      if (GIESTextureManager._48_4_ != uVar11) {
        local_d6 = 0;
        `TCheckedPointerIterator<IESAtlas::FAtlasSlot,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_d6);
      }
      if (lVar22 == lVar2) break;
      if ((*(longlong *)(lVar22 + 0x18) != 0) &&
         (plVar1 = *(longlong **)(*(longlong *)(lVar22 + 0x18) + 0x138), plVar1 != (longlong *)0x0))
      {
        lVar21 = (**(code **)(*plVar1 + 0x20))(plVar1);
        iVar14 = *(int *)(lVar21 + 0x28);
        lVar21 = (**(code **)(*plVar1 + 0x20))(plVar1);
        local_a8 = *(int *)(lVar21 + 0x24);
        iStack_a4 = iVar14;
        if ((local_a8 != *(int *)(lVar22 + 0xc)) || (iVar14 != *(int *)(lVar22 + 0x10))) {
          *(ulonglong *)(lVar22 + 0xc) = CONCAT44(iVar14,local_a8);
          *(undefined1 *)(lVar22 + 0x20) = 1;
          GIESTextureManager._101_1_ = 1;
        }
      }
      lVar22 = lVar22 + 0x28;
    }
  }
  if (GIESTextureManager._100_1_ == '\0') {
    pFVar25 = local_b0;
    if (GIESTextureManager._101_1_ != '\0') {
      local_d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_d0.ArrayNum = 0;
      local_d0.ArrayMax = 0;
      uVar24 = GIESTextureManager._48_4_;
      if ((int)GIESTextureManager._48_4_ < 1) {
        uVar24 = 1;
      }
      if ((int)uVar24 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar24);
      }
      if (0 < (int)uVar24) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x28,8,uVar24,&local_d0.AllocatorInstance,0,&local_d0.ArrayMax);
      }
      uVar11 = GIESTextureManager._48_4_;
      pFVar3 = (FAtlasSlot *)
               (GIESTextureManager._40_8_ + (longlong)(int)GIESTextureManager._48_4_ * 0x28);
      pFVar23 = (FAtlasSlot *)GIESTextureManager._40_8_;
      while( true ) {
        if (GIESTextureManager._48_4_ != uVar11) {
          local_d3[0] = 0;
          `TCheckedPointerIterator<IESAtlas::FAtlasSlot,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_d3);
        }
        if (pFVar23 == pFVar3) break;
        if (pFVar23->bForceRefresh != false) {
          pFVar23->bForceRefresh = false;
          if (((local_d0.AllocatorInstance.Data <= pFVar23) &&
              (pFVar23 < (FAtlasSlot *)
                         (local_d0.AllocatorInstance.Data + (longlong)local_d0.ArrayMax * 0x28))) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar12)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          iVar14 = local_d0.ArrayNum;
          if (local_d0.ArrayNum == local_d0.ArrayMax) {
            iVar14 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x828,&local_d0.AllocatorInstance,&local_d0.ArrayMax);
          }
          local_d0.ArrayNum = iVar14 + 1;
          pFVar4 = local_d0.AllocatorInstance.Data + (longlong)iVar14 * 0x28;
          *(uint *)&pFVar4->field_0x0 = pFVar23->Id;
          *(uint *)(pFVar4 + 4) = pFVar23->SliceIndex;
          *(uint *)(pFVar4 + 8) = pFVar23->RefCount;
          *(TIntPoint<int>_u_0 *)(pFVar4 + 0xc) = (pFVar23->CachedResolution).field0_0x0;
          *(undefined8 *)(pFVar4 + 0x18) = 0;
          pFVar5 = (pFVar23->SourceTexture).Reference;
          *(FRHITextureReference **)(pFVar4 + 0x18) = pFVar5;
          if (pFVar5 != (FRHITextureReference *)0x0) {
            FRHIResource::AddRef((FRHIResource *)pFVar5);
          }
          pFVar4[0x20] = (FScriptContainerElement)pFVar23->bForceRefresh;
        }
        pFVar23 = pFVar23 + 1;
      }
      pFVar16 = GetGlobalShaderMap(param_2.Platform);
      pFVar25 = local_b0;
      local_90 = FRDGBuilder::RegisterExternalTexture
                           (local_b0,(TRefCountPtr<IPooledRenderTarget> *)
                                     &GIESTextureManager.field_0x20,None);
      if ((FGenericDataDrivenShaderPlatformInfo::Infos[param_2.Platform].bContainsValidPlatformInfo
           == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid(Platform)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                              ,0xc1,L""), bVar12)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if (FGenericDataDrivenShaderPlatformInfo::Infos[param_2.Platform].Language == LANGUAGE_OpenGL)
      {
        AddSlotsPassPS(pFVar25,pFVar16,&local_d0,&local_90);
      }
      else {
        AddSlotsPassCS(pFVar25,pFVar16,&local_d0,&local_90);
      }
      GIESTextureManager._101_1_ = 0;
      DestructItems<IESAtlas::FAtlasSlot,int>
                ((FAtlasSlot *)local_d0.AllocatorInstance.Data,local_d0.ArrayNum);
      if ((FAtlasSlot *)local_d0.AllocatorInstance.Data != (FAtlasSlot *)0x0) {
        FMemory::Free(local_d0.AllocatorInstance.Data);
      }
    }
  }
  else {
    pFVar16 = GetGlobalShaderMap(param_2.Platform);
    uVar11 = GIESTextureManager._48_4_;
    local_c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_c0.ArrayNum = 0;
    local_c0.ArrayMax = 0;
    pFVar3 = (FAtlasSlot *)
             (GIESTextureManager._40_8_ + (longlong)(int)GIESTextureManager._48_4_ * 0x28);
    pFVar23 = (FAtlasSlot *)GIESTextureManager._40_8_;
    while( true ) {
      if (GIESTextureManager._48_4_ != uVar11) {
        local_d4 = 0;
        `TCheckedPointerIterator<IESAtlas::FAtlasSlot,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_d4);
      }
      pFVar25 = local_b0;
      uVar20 = CachedAtlasResolution;
      if (pFVar23 == pFVar3) break;
      if ((((pFVar23->SourceTexture).Reference != (FRHITextureReference *)0x0) &&
          (pFVar23->SliceIndex == 0xffffffff)) &&
         (lVar2 = *(longlong *)GIESTextureManager._88_8_, lVar2 != 0)) {
        pFVar23->SliceIndex = *(uint *)(lVar2 + 8);
        uVar10 = GIESTextureManager._88_8_;
        GIESTextureManager._88_8_ = lVar2;
        *(undefined4 *)(lVar2 + 8) = 0;
        ::operator_delete((void *)uVar10,0x10);
        if (((local_c0.AllocatorInstance.Data <= pFVar23) &&
            (pFVar23 < (FAtlasSlot *)
                       (local_c0.AllocatorInstance.Data + (longlong)local_c0.ArrayMax * 0x28))) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar13)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar14 = local_c0.ArrayNum;
        if (local_c0.ArrayNum == local_c0.ArrayMax) {
          iVar14 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x828,&local_c0.AllocatorInstance,&local_c0.ArrayMax);
        }
        local_c0.ArrayNum = iVar14 + 1;
        pFVar4 = local_c0.AllocatorInstance.Data + (longlong)iVar14 * 0x28;
        *(uint *)&pFVar4->field_0x0 = pFVar23->Id;
        *(uint *)(pFVar4 + 4) = pFVar23->SliceIndex;
        *(uint *)(pFVar4 + 8) = pFVar23->RefCount;
        *(TIntPoint<int>_u_0 *)(pFVar4 + 0xc) = (pFVar23->CachedResolution).field0_0x0;
        *(undefined8 *)(pFVar4 + 0x18) = 0;
        pFVar5 = (pFVar23->SourceTexture).Reference;
        *(FRHITextureReference **)(pFVar4 + 0x18) = pFVar5;
        if (pFVar5 != (FRHITextureReference *)0x0) {
          FRHIResource::AddRef((FRHIResource *)pFVar5);
        }
        pFVar4[0x20] = (FScriptContainerElement)pFVar23->bForceRefresh;
      }
      pFVar23 = pFVar23 + 1;
    }
    bVar13 = false;
    if (bVar12) {
      if ((FGenericDataDrivenShaderPlatformInfo::Infos[param_2.Platform].bContainsValidPlatformInfo
           == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid(Platform)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                              ,0xc1,L""), bVar12)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      local_88._0_8_ = 0x1000009;
      if (FGenericDataDrivenShaderPlatformInfo::Infos[param_2.Platform].Language != LANGUAGE_OpenGL)
      {
        local_88._0_8_ = 0x20009;
      }
      local_70 = FClearValueBinding::Transparent.Value.Color[3];
      local_6c = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
      local_5c = 1;
      local_68 = 0;
      local_48 = (void *)0x0;
      local_40 = 0;
      local_3c = 1;
      local_98 = uVar20;
      uStack_94 = uVar20;
      local_64._4_4_ = uVar20;
      local_64._0_4_ = uVar20;
      local_5a = (undefined2)uVar24;
      if (uVar24 == 0) {
        local_5a = 1;
      }
      local_58 = 0x15010101;
      local_88._8_8_ = FClearValueBinding::Transparent._0_8_;
      local_88._16_8_ = FClearValueBinding::Transparent.Value._4_8_;
      local_54 = 0xff00;
      pFVar17 = FRDGBuilder::CreateTexture
                          (local_b0,(FRDGTextureDesc *)local_88,L"IES.AtlasTexture",MultiFrame);
      if (local_48 != (void *)0x0) {
        FMemory::Free(local_48);
      }
      bVar13 = true;
      pFVar25 = local_b0;
      GIESTextureManager._96_4_ = uVar24;
    }
    else {
      pFVar17 = FRDGBuilder::RegisterExternalTexture
                          (local_b0,(TRefCountPtr<IPooledRenderTarget> *)
                                    &GIESTextureManager.field_0x20,None);
    }
    local_a0 = pFVar17;
    if (0 < local_c0.ArrayNum) {
      if ((FGenericDataDrivenShaderPlatformInfo::Infos[param_2.Platform].bContainsValidPlatformInfo
           == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid(Platform)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                              ,0xc1,L""), bVar12)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if (FGenericDataDrivenShaderPlatformInfo::Infos[param_2.Platform].Language == LANGUAGE_OpenGL)
      {
        AddSlotsPassPS(pFVar25,pFVar16,&local_c0,&local_a0);
      }
      else {
        AddSlotsPassCS(pFVar25,pFVar16,&local_c0,&local_a0);
      }
    }
    if (bVar13) {
      pTVar18 = FRDGBuilder::ConvertToExternalTexture(pFVar25,pFVar17);
      uVar10 = GIESTextureManager._32_8_;
      pIVar6 = pTVar18->Reference;
      if ((IPooledRenderTarget *)GIESTextureManager._32_8_ != pIVar6) {
        GIESTextureManager._32_8_ = pIVar6;
        if (pIVar6 != (IPooledRenderTarget *)0x0) {
          (**(code **)(pIVar6->_padding_ + 0x30))();
        }
        if (uVar10 != 0) {
          (**(code **)(*(longlong *)uVar10 + 0x38))(uVar10);
        }
      }
    }
    GIESTextureManager._100_1_ = 0;
    DestructItems<IESAtlas::FAtlasSlot,int>
              ((FAtlasSlot *)local_c0.AllocatorInstance.Data,local_c0.ArrayNum);
    pFVar25 = local_b0;
    if ((FAtlasSlot *)local_c0.AllocatorInstance.Data != (FAtlasSlot *)0x0) {
      FMemory::Free(local_c0.AllocatorInstance.Data);
      pFVar25 = local_b0;
    }
  }
  if ((GIESTextureManager._32_8_ != 0) &&
     (pFVar17 = FRDGBuilder::FindExternalTexture
                          (pFVar25,*(FRHITexture **)(GIESTextureManager._32_8_ + 8)),
     pFVar17 != (FRDGTexture *)0x0)) {
    FRDGBuilder::UseExternalAccessMode(pFVar25,(FRDGViewableResource *)pFVar17,SRVMask,All);
  }
  return;
}

