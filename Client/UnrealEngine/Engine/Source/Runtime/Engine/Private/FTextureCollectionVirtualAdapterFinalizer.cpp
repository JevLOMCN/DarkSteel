// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 5

// ~FTextureCollectionVirtualAdapterFinalizer @ 1489b9600

void __thiscall
FTextureCollectionVirtualAdapterFinalizer::~FTextureCollectionVirtualAdapterFinalizer
          (FTextureCollectionVirtualAdapterFinalizer *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FTextureCollectionPendingAdapterTile,int>
            ((FTextureCollectionPendingAdapterTile *)(this->PendingTiles).AllocatorInstance.Data,
             (this->PendingTiles).ArrayNum);
  pFVar1 = (this->PendingTiles).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PendingFinalizers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// operator() @ 1489bf610

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
`FTextureCollectionVirtualAdapterFinalizer::Finalize'::__l10::<lambda_1>::operator()
          (void *this,FRDGAsyncTask param_1,FRHIComputeCommandList *param_2)

{
  FParameters *pFVar1;
  int iVar2;
  int iVar3;
  FShaderParametersMetadata *pFVar4;
  TIntVector3<int>_u_0 local_18;
  
  pFVar1 = *(FParameters **)((longlong)this + 0x10);
  iVar2 = *(int *)((longlong)this + 0x18) + 7;
  iVar3 = *(int *)((longlong)this + 0x1c) + 7;
  pFVar4 = FCopyCompressCS::FParameters::FTypeInfo::GetStructMetadata();
  local_18._s_0.Z = 1;
  local_18._s_0.X = (int)((iVar2 >> 0x1f & 7U) + iVar2) >> 3;
  local_18._s_0.Y = (int)((iVar3 >> 0x1f & 7U) + iVar3) >> 3;
  FComputeShaderUtils::Dispatch<FCopyCompressCS>
            (param_2,this,pFVar4,pFVar1,(TIntVector3<int> *)&local_18._s_0);
  return;
}

// operator() @ 1489c00c0

void __thiscall
`FTextureCollectionVirtualAdapterFinalizer::Finalize'::__l35::<lambda_2>::operator()
          (void *this,FRDGAsyncTask param_1,FRHICommandList *param_2)

{
  FRDGResource *this_00;
  FRHITexture *pFVar1;
  
  this_00 = *(FRDGResource **)this;
  pFVar1 = *(FRHITexture **)((longlong)this + 8);
  FRDGResource::ValidateRHIAccess(this_00);
  FRHICommandList::CopyTexture
            (param_2,(FRHITexture *)this_00->ResourceRHI,pFVar1,
             (FRHICopyTextureInfo *)((longlong)this + 0x10));
  return;
}

// Finalize @ 1489de980

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001489df938) */
/* WARNING: Removing unreachable block (ram,0x0001489df983) */
/* WARNING: Removing unreachable block (ram,0x0001489dfcc0) */
/* WARNING: Removing unreachable block (ram,0x0001489dfcd0) */
/* WARNING: Removing unreachable block (ram,0x0001489dfeed) */
/* WARNING: Removing unreachable block (ram,0x0001489dfefd) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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

void __thiscall
FTextureCollectionVirtualAdapterFinalizer::Finalize
          (FTextureCollectionVirtualAdapterFinalizer *this,FRDGBuilder *param_1)

{
  int *piVar1;
  TRDGHandleRegistry<TRDGHandle<FRDGView,unsigned_int>,2> *this_00;
  TRDGHandleRegistry<TRDGHandle<FRDGPass,unsigned_int>,0> *this_01;
  uchar uVar2;
  longlong *plVar3;
  FRHIResource *this_02;
  code *pcVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  TVector2<float>_u_0 TVar8;
  TVector2<float>_u_0 TVar9;
  bool bVar10;
  float fVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  undefined8 uVar16;
  FMemStackBase *this_03;
  FShader *pFVar17;
  TArray<FTextureCollectionPendingAdapterTile,TSizedDefaultAllocator<32>_> *pTVar18;
  bool bVar19;
  bool bVar20;
  byte bVar21;
  bool bVar22;
  ERDGPassFlags EVar23;
  int iVar24;
  undefined8 *puVar25;
  FRDGTexture *pFVar26;
  char *pcVar27;
  FGlobalShaderMap *this_04;
  FShaderType *pFVar28;
  FName this_05;
  FParameters *pFVar29;
  FRDGTextureUAV *pFVar30;
  FRDGTextureUAV *pFVar31;
  longlong lVar32;
  longlong lVar33;
  FTextureResource *pFVar34;
  longlong lVar35;
  FShaderParametersMetadata *pFVar36;
  FRDGEventName *pFVar37;
  wchar_t *pwVar38;
  FRDGPass *pFVar39;
  wchar_t *pwVar40;
  FRDGParameterStruct *pFVar41;
  undefined1 uVar42;
  TRHIGlobal<int> TVar43;
  ForElementType<EPixelFormat> _Dst;
  ulonglong uVar44;
  ulonglong uVar45;
  int iVar46;
  FScriptContainerElement *pFVar47;
  int iVar48;
  undefined8 *_Src;
  char cVar49;
  size_t _Size;
  uint uVar50;
  ulonglong uVar51;
  int iVar52;
  FScriptContainerElement *pFVar53;
  FRDGBuilder *pFVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  undefined1 auStackY_4c8 [32];
  undefined1 local_480;
  undefined1 local_47f [3];
  int local_47c;
  undefined8 local_470;
  undefined8 uStack_468;
  wchar_t *local_460;
  int local_458;
  int iStack_454;
  FScriptContainerElement *local_450;
  undefined8 local_448;
  undefined8 uStack_440;
  FRDGTexture *local_438;
  FRDGBuilder *local_430;
  FRDGTextureUAVDesc local_428;
  FRDGTextureUAVDesc local_410;
  FLLMScope local_3f8;
  FLLMScope local_3f4;
  FMemStackBase *local_3f0;
  FShaderMapBase *local_3e8;
  uint local_3e0;
  int local_3d8;
  int iStack_3d4;
  TRefCountPtr<IPooledRenderTarget> local_3d0;
  FRDGUserValidation *local_3c8;
  undefined4 local_3c0;
  undefined4 uStack_3bc;
  undefined8 local_3b8;
  float local_3b0;
  float fStack_3ac;
  float local_3a8;
  float fStack_3a4;
  undefined4 local_3a0;
  undefined4 uStack_39c;
  FShader *local_398;
  FTextureCollectionVirtualAdapterFinalizer *local_390;
  float local_388;
  float fStack_384;
  undefined1 local_380 [8];
  FRDGTextureUAVDesc local_378;
  int local_360;
  int iStack_35c;
  undefined4 uStack_358;
  undefined4 uStack_354;
  undefined4 uStack_350;
  int iStack_34c;
  int iStack_348;
  int iStack_344;
  undefined4 local_340;
  undefined4 uStack_33c;
  undefined4 uStack_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  FRHIShaderResourceView *local_320;
  TArray<FTextureCollectionPendingAdapterTile,TSizedDefaultAllocator<32>_> *local_318;
  FScriptContainerElement *local_310;
  TArray<IVirtualTextureFinalizer_*,TSizedDefaultAllocator<32>_> *local_308;
  FMemScope local_300;
  FRHIShaderResourceView *local_2f8;
  FMemScope local_2f0;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_2e8;
  undefined8 local_2d8;
  FShader *local_2d0;
  FShaderMapBase *pFStack_2c8;
  FParameters *local_2c0;
  int iStack_2b8;
  int iStack_2b4;
  wchar_t **local_2b0;
  undefined1 *local_2a8;
  wchar_t **local_2a0;
  undefined1 *local_298;
  wchar_t **local_290;
  undefined1 *local_288;
  wchar_t **local_280;
  undefined1 *local_278;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_270;
  FRDGParameterStruct local_260;
  TVector2<float>_u_0 local_248;
  FString local_230;
  undefined8 local_218;
  initializer_list<FRDGResource_*> local_208;
  FRDGTexture *local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  wchar_t *pwStack_1e0;
  FScriptContainerElement *local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  uint uStack_1ac;
  FRDGEventName local_1a8;
  FRDGEventName local_190;
  FRDGParameterStruct local_178;
  undefined1 local_158 [24];
  float local_140;
  int local_13c;
  undefined4 local_138;
  uint local_134;
  uint uStack_130;
  undefined4 local_12c;
  undefined1 local_128;
  undefined2 local_127;
  undefined1 local_125;
  undefined2 local_124;
  ForElementType<EPixelFormat> local_120;
  undefined4 local_110;
  int local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  undefined1 local_e0;
  undefined1 local_df;
  undefined8 local_dc;
  undefined2 local_d4;
  undefined2 local_d2;
  undefined1 local_d0;
  undefined1 local_cf;
  undefined1 local_ce;
  ForElementType<EPixelFormat> local_c8;
  int local_b8;
  int local_b4;
  undefined1 local_b0;
  char local_a8 [8];
  ulonglong local_a0;
  
  local_a0 = __security_cookie.value ^ (ulonglong)auStackY_4c8;
  pFVar47 = (this->PendingFinalizers).AllocatorInstance.Data;
  iVar24 = (this->PendingFinalizers).ArrayNum;
  pFVar53 = pFVar47 + (longlong)iVar24 * 8;
  local_308 = &this->PendingFinalizers;
  local_430 = param_1;
  local_390 = this;
  while( true ) {
    if ((this->PendingFinalizers).ArrayNum != iVar24) {
      local_480 = 0;
      `TCheckedPointerIterator<IVirtualTextureFinalizer_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_480);
    }
    uVar15 = _UNK_150ae980c;
    uVar14 = _UNK_150ae9808;
    uVar13 = _UNK_150ae9804;
    uVar12 = ___xmm_00000003000000030000000300000003;
    fVar11 = __real_3f800000;
    if (pFVar47 == pFVar53) break;
    (**(code **)(**(longlong **)pFVar47 + 8))(*(longlong **)pFVar47,param_1);
    pFVar47 = pFVar47 + 8;
  }
  local_3e0 = (this->PendingTiles).ArrayNum;
  uVar44 = (ulonglong)(int)local_3e0;
  local_318 = &this->PendingTiles;
  pFVar53 = (local_318->AllocatorInstance).Data;
  local_310 = pFVar53 + uVar44 * 0x60;
  do {
    pFVar47 = local_310;
    pTVar18 = local_318;
    local_450 = pFVar53;
    if (local_318->ArrayNum != (int)uVar44) {
      local_47f[0] = 0;
      `TCheckedPointerIterator<FTextureCollectionPendingAdapterTile,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_47f);
    }
    if (pFVar53 == pFVar47) {
      local_308->ArrayNum = 0;
      if (local_308->ArrayMax != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,&local_308->AllocatorInstance,0,&local_308->ArrayMax);
      }
      DestructItems<FTextureCollectionPendingAdapterTile,int>
                ((FTextureCollectionPendingAdapterTile *)(pTVar18->AllocatorInstance).Data,
                 pTVar18->ArrayNum);
      pTVar18->ArrayNum = 0;
      if (pTVar18->ArrayMax != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x60,8,0,&pTVar18->AllocatorInstance,0,&pTVar18->ArrayMax);
      }
      return;
    }
    puVar25 = (undefined8 *)(**(code **)(**(longlong **)(pFVar53 + 0x20) + 0x10))();
    local_108 = *puVar25;
    local_100 = puVar25[1];
    uStack_f8 = puVar25[2];
    local_f0 = *(undefined4 *)(puVar25 + 3);
    local_e8 = puVar25[4];
    local_e0 = *(undefined1 *)(puVar25 + 5);
    local_df = *(undefined1 *)((longlong)puVar25 + 0x29);
    local_dc = *(undefined8 *)((longlong)puVar25 + 0x2c);
    local_d4 = *(undefined2 *)((longlong)puVar25 + 0x34);
    local_d2 = *(undefined2 *)((longlong)puVar25 + 0x36);
    local_d0 = *(undefined1 *)(puVar25 + 7);
    local_cf = *(undefined1 *)((longlong)puVar25 + 0x39);
    local_ce = *(undefined1 *)((longlong)puVar25 + 0x3a);
    local_c8.SecondaryData = (ForElementType<EPixelFormat>)0x0;
    local_b8 = *(int *)(puVar25 + 10);
    _Size = (size_t)local_b8;
    _Src = puVar25 + 8;
    if ((undefined8 *)puVar25[9] != (undefined8 *)0x0) {
      _Src = (undefined8 *)puVar25[9];
    }
    if (local_b8 == 0) {
      local_b4 = 1;
    }
    else {
      UE::Core::Private::
      ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_EPixelFormat>_>
                (1,1,local_b8,0,&local_c8,local_b8,&local_b4);
      _Dst = (ForElementType<EPixelFormat>)&local_c8;
      if (local_c8.SecondaryData != (ForElementType<EPixelFormat>)0x0) {
        _Dst = local_c8.SecondaryData;
      }
      memcpy((void *)_Dst,_Src,_Size);
    }
    local_b0 = *(undefined1 *)(puVar25 + 0xb);
    switch(local_e0) {
    case 5:
    case 6:
    case 7:
    case 0x17:
    case 0x27:
    case 0x37:
    case 0x38:
      bVar22 = true;
      break;
    default:
      bVar22 = false;
    }
    iVar24 = (this->ProducerDesc).TileSize + (this->ProducerDesc).TileBorderSize * 2;
    local_47c = iVar24 * *(int *)(pFVar53 + 0x2c);
    local_458 = iVar24 * *(int *)(pFVar53 + 0x28);
    local_2d8 = CONCAT44(local_47c,local_458);
    iVar46 = iVar24 + local_458;
    uVar2 = (this->ProducerDesc).LayerFormat[0].Value;
    local_218 = CONCAT44(local_47c + iVar24,iVar46);
    if ((uVar2 == '\x05') || (uVar2 == '\'')) {
      bVar20 = true;
    }
    else {
      bVar20 = false;
    }
    uVar42 = 0x30;
    if (bVar20) {
      uVar42 = 0x44;
    }
    iStack_454 = local_47c;
    if ((bVar22) && (GRHIGlobals.SupportsUAVFormatAliasing == false)) {
      local_3d8 = iVar24 >> 2;
      local_13c = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
      local_460 = L"IntermediateTarget";
      uStack_130 = local_3d8;
      local_134 = local_3d8;
      local_140 = FClearValueBinding::None.Value.Color[3];
      bVar10 = false;
      local_120.SecondaryData = (ForElementType<EPixelFormat>)0x0;
      local_10c = 1;
      local_127 = 1;
      local_158._0_8_ = 0x20008;
      local_124 = 0xff00;
      local_12c = 0x10001;
      local_128 = 1;
      local_158._8_8_ = FClearValueBinding::None._0_8_;
      local_158._16_8_ = FClearValueBinding::None.Value._4_8_;
      local_138 = 0;
      local_110 = 0;
      iStack_3d4 = local_3d8;
      local_125 = uVar42;
      UE::Core::Private::
      ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_EPixelFormat>_>
                (1,1,0,1,&local_120,0,&local_10c);
      if ((int)local_134 < 1) {
        local_2b0 = &local_460;
        local_2a8 = local_158;
        `FRDGBuilder::CreateTexture'::__l2::<lambda_1>::operator()(&local_2b0);
      }
      if ((int)uStack_130 < 1) {
        local_2a0 = &local_460;
        local_298 = local_158;
        `FRDGBuilder::CreateTexture'::__l2::<lambda_2>::operator()(&local_2a0);
      }
      uVar50 = uStack_130;
      if ((uint)GRHIGlobals.MaxTextureDimensions.Value < local_134) {
        local_290 = &local_460;
        local_288 = local_158;
        `FRDGBuilder::CreateTexture'::__l2::<lambda_3>::operator()(&local_290);
        uVar50 = uStack_130;
      }
      if ((uint)GRHIGlobals.MaxTextureDimensions.Value < uVar50) {
        local_280 = &local_460;
        local_278 = local_158;
        `FRDGBuilder::CreateTexture'::__l2::<lambda_4>::operator()(&local_280);
        uVar50 = uStack_130;
      }
      TVar43.Value = GRHIGlobals.MaxTextureDimensions.Value;
      if ((int)local_134 < GRHIGlobals.MaxTextureDimensions.Value) {
        TVar43.Value = local_134;
      }
      local_134 = 1;
      if (1 < TVar43.Value) {
        local_134 = TVar43.Value;
      }
      TVar43.Value = GRHIGlobals.MaxTextureDimensions.Value;
      if ((int)uVar50 < GRHIGlobals.MaxTextureDimensions.Value) {
        TVar43.Value = uVar50;
      }
      uStack_130 = 1;
      if (1 < TVar43.Value) {
        uStack_130 = TVar43.Value;
      }
      FRDGUserValidation::ValidateCreateTexture
                (&param_1->UserValidation,(FRDGTextureDesc *)local_158,local_460,None);
      pFVar26 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x158,8);
      pFVar26 = FRDGTexture::FRDGTexture(pFVar26,local_460,(FRDGTextureDesc *)local_158,None);
      iVar24 = (param_1->Textures).Array.ArrayNum;
      piVar1 = &(param_1->Textures).Array.ArrayMax;
      local_438 = pFVar26;
      if (iVar24 == *piVar1) {
        iVar24 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGTexture_*>_>
                           (0x808,(ForElementType<FRDGTexture_*> *)&param_1->Textures,piVar1);
      }
      (param_1->Textures).Array.ArrayNum = iVar24 + 1;
      (param_1->Textures).Array.AllocatorInstance.Data[iVar24] = pFVar26;
      (pFVar26->Handle).Index = (param_1->Textures).Array.ArrayNum - 1;
      FRDGUserValidation::ValidateCreateTexture(&param_1->UserValidation,pFVar26);
      FRDGTrace::AddResource(&param_1->Trace,(FRDGViewableResource *)pFVar26);
      if (local_120.SecondaryData != (ForElementType<EPixelFormat>)0x0) {
        FMemory::Free((void *)local_120.SecondaryData);
      }
    }
    else {
      local_3d0.Reference = *(IPooledRenderTarget **)(pFVar53 + 0x20);
      bVar10 = true;
      if (local_3d0.Reference != (IPooledRenderTarget *)0x0) {
        (**(code **)((local_3d0.Reference)->_padding_ + 0x30))();
      }
      pFVar26 = FRDGBuilder::RegisterExternalTexture(param_1,&local_3d0,None);
      local_438 = pFVar26;
      if (local_3d0.Reference != (IPooledRenderTarget *)0x0) {
        (**(code **)((local_3d0.Reference)->_padding_ + 0x38))();
      }
    }
    cVar49 = (pFVar26->Desc).field_0x33;
    iVar24 = 0;
    switch(cVar49) {
    case '\x05':
    case '\x06':
    case '\a':
    case '\x17':
    case '\'':
    case '7':
    case '8':
      builtin_strncpy(local_a8,"\x05\a\'\x1778",6);
      pcVar27 = local_a8;
      do {
        if (*pcVar27 == cVar49) {
          iVar24 = (int)pcVar27 - (int)local_a8;
          goto LAB_1489df015;
        }
        pcVar27 = pcVar27 + 1;
      } while (pcVar27 != local_a8 + 6);
      iVar24 = -1;
LAB_1489df015:
      iVar24 = iVar24 + 1;
      cVar49 = (this->ProducerDesc).bIsLayerSRGB[0];
      this_04 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel
                                   [(int)GMaxRHIFeatureLevel]);
      if (((6 < iVar24) || (iVar24 < 0)) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("PermutationId < PermutationCount && PermutationId >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                              ,0x6a,L"Unknown shader permutation dimension value id %i."), bVar19))
      {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      break;
    default:
      cVar49 = (this->ProducerDesc).bIsLayerSRGB[0];
      this_04 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel
                                   [(int)GMaxRHIFeatureLevel]);
    }
    iVar48 = 1;
    if (cVar49 != '\0') {
      iVar48 = 3;
    }
    pFVar28 = (FShaderType *)FCopyCompressCS::GetStaticType();
    FGlobalShaderMap::GetShader(this_04,&local_2e8,pFVar28,iVar48 + iVar24 * 4);
    if (local_2e8.ShaderContent == (FShader *)0x0) {
      this_05 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_380);
      ::FName::ToString((FName *)this_05,&local_230);
      FCopyCompressCS::GetStaticType();
      bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("Shader.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                          ,0xc0,L"Failed to find shader type %s in Platform %s");
      if (local_230.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_230.Data.AllocatorInstance.Data);
      }
      if (bVar19) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    FCopyCompressCS::GetStaticType();
    local_398 = local_2e8.ShaderContent;
    local_3e8 = local_2e8.ShaderMap;
    pFVar29 = FRDGBuilder::AllocParameters<FCopyCompressCS::FParameters>(param_1);
    pFVar26 = local_438;
    pFVar31 = (FRDGTextureUAV *)0x0;
    local_378._padding_._1_1_ = 0;
    pFVar29->TextureSampler =
         TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
         ::StaticResource.StateRHI.Reference;
    local_378._padding_._2_4_ = 0;
    local_378._padding_._0_1_ = (local_438->Desc).field_0x34;
    local_378._padding_._6_1_ = 0;
    local_378._padding_._0_1_ = 0;
    local_378.Texture = local_438;
    pFVar30 = FRDGBuilder::CreateUAV(param_1,&local_378,None);
    pFVar29->DestTexture = pFVar30;
    local_3c8 = &param_1->UserValidation;
    this_00 = &param_1->Views;
    if (bVar20) {
      local_410._padding_._0_4_ = 0x44;
      local_410._padding_._4_2_ = 0;
      local_410._padding_._6_1_ = 0;
      local_410._padding_._0_1_ = '\0';
      local_410.Texture = pFVar26;
      FRDGUserValidation::ValidateCreateUAV(local_3c8,&local_410);
      pFVar26 = local_410.Texture;
      local_3f0 = (FMemStackBase *)&param_1->_padding_;
      pFVar31 = FMemStackBase::Alloc(local_3f0,0x50,8);
      pFVar31->_padding_ = pFVar26->_padding_;
      *(byte *)&pFVar31->_padding_ = (byte)pFVar31->_padding_ & 0xfe;
      pFVar31->_padding_ = 0;
      *(undefined1 *)&pFVar31->_padding_ = 0;
      *(undefined1 *)&pFVar31->_padding_ = 0;
      pFVar31->_padding_ = (longlong)&___7FRDGTextureUAV__6B_;
      *(undefined8 *)((longlong)&pFVar31->_padding_ + 4) = 0xffffffffffffffff;
      *(undefined1 *)&(pFVar31->Desc)._padding_ = (undefined1)local_410._padding_;
      *(undefined1 *)((longlong)&(pFVar31->Desc)._padding_ + 1) = local_410._padding_._1_1_;
      *(undefined2 *)((longlong)&(pFVar31->Desc)._padding_ + 2) = local_410._padding_._2_2_;
      *(undefined2 *)((longlong)&(pFVar31->Desc)._padding_ + 4) = local_410._padding_._4_2_;
      *(undefined1 *)&(pFVar31->Desc)._padding_ = 0;
      *(undefined1 *)((longlong)&(pFVar31->Desc)._padding_ + 6) = local_410._padding_._6_1_;
      *(char *)&(pFVar31->Desc)._padding_ = (char)local_410._padding_;
      if ((char)local_410._padding_ != '\0') {
        *(undefined1 *)((longlong)&(pFVar31->Desc)._padding_ + 7) = local_410._padding_._7_1_;
      }
      piVar1 = &(param_1->Views).Array.ArrayMax;
      (pFVar31->Desc).Texture = local_410.Texture;
      iVar24 = (param_1->Views).Array.ArrayNum;
      if (iVar24 == *piVar1) {
        iVar24 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGView_*>_>
                           (0x808,(ForElementType<FRDGView_*> *)this_00,piVar1);
      }
      (param_1->Views).Array.ArrayNum = iVar24 + 1;
      (this_00->Array).AllocatorInstance.Data[iVar24] = (FRDGView *)pFVar31;
      *(int *)((longlong)&pFVar31->_padding_ + 4) = (param_1->Views).Array.ArrayNum + -1;
      FRDGUserValidation::ValidateCreateUAV(&param_1->UserValidation,pFVar31);
      pFVar26 = local_438;
    }
    else {
      local_3f0 = (FMemStackBase *)&param_1->_padding_;
    }
    this_03 = local_3f0;
    pFVar29->DestCompressTexture_64bit = pFVar31;
    if (bVar20) {
      pFVar30 = (FRDGTextureUAV *)0x0;
    }
    else {
      local_428._padding_._0_4_ = 0x30;
      local_428._padding_._4_2_ = 0;
      local_428._padding_._6_1_ = 0;
      local_428._padding_._0_1_ = '\0';
      local_428.Texture = pFVar26;
      FRDGUserValidation::ValidateCreateUAV(local_3c8,&local_428);
      pFVar26 = local_428.Texture;
      pFVar30 = FMemStackBase::Alloc(this_03,0x50,8);
      lVar33 = pFVar26->_padding_;
      *(byte *)&pFVar30->_padding_ = (byte)pFVar30->_padding_ & 0xfe;
      pFVar30->_padding_ = lVar33;
      pFVar30->_padding_ = 0;
      *(undefined1 *)&pFVar30->_padding_ = 0;
      *(undefined8 *)((longlong)&pFVar30->_padding_ + 4) = 0xffffffffffffffff;
      *(undefined1 *)&pFVar30->_padding_ = 0;
      pFVar30->_padding_ = (longlong)&___7FRDGTextureUAV__6B_;
      *(undefined1 *)&(pFVar30->Desc)._padding_ = (undefined1)local_428._padding_;
      *(undefined1 *)((longlong)&(pFVar30->Desc)._padding_ + 1) = local_428._padding_._1_1_;
      *(undefined2 *)((longlong)&(pFVar30->Desc)._padding_ + 2) = local_428._padding_._2_2_;
      *(undefined2 *)((longlong)&(pFVar30->Desc)._padding_ + 4) = local_428._padding_._4_2_;
      *(undefined1 *)&(pFVar30->Desc)._padding_ = 0;
      *(undefined1 *)((longlong)&(pFVar30->Desc)._padding_ + 6) = local_428._padding_._6_1_;
      *(char *)&(pFVar30->Desc)._padding_ = (char)local_428._padding_;
      if ((char)local_428._padding_ != '\0') {
        *(undefined1 *)((longlong)&(pFVar30->Desc)._padding_ + 7) = local_428._padding_._7_1_;
      }
      (pFVar30->Desc).Texture = local_428.Texture;
      TRDGHandleRegistry<TRDGHandle<FRDGView,unsigned_int>,2>::Insert(this_00,(FRDGView *)pFVar30);
      FRDGUserValidation::ValidateCreateUAV(local_3c8,pFVar30);
    }
    pFVar54 = local_430;
    pFVar53 = local_450;
    iVar24 = local_218._4_4_;
    pFVar29->DestCompressTexture_128bit = pFVar30;
    local_3c0 = 0x3f800000;
    uStack_3bc = 0x3f000000;
    (pFVar29->TexelOffsets).field0_0x0 = (TVector2<float>_u_0)0x3f0000003f800000;
    (pFVar29->DestRect).field0_0x0._s_0.X = local_458;
    (pFVar29->DestRect).field0_0x0._s_0.Y = local_47c;
    (pFVar29->DestRect).field0_0x0._s_0.Z = iVar46;
    (pFVar29->DestRect).field0_0x0._s_0.W = local_218._4_4_;
    if (*(longlong *)(local_450 + 0x48) == 0) {
      if (((*(UTexture **)(local_450 + 8) != (UTexture *)0x0) &&
          (pFVar34 = UTexture::GetResource(*(UTexture **)(local_450 + 8)),
          pFVar34 != (FTextureResource *)0x0)) &&
         (lVar33 = (**(code **)(pFVar34->_padding_ + 0x58))(pFVar34), lVar33 != 0)) {
        this_02 = *(FRHIResource **)(lVar33 + 0x20);
        if (this_02 == (FRHIResource *)0x0) {
          bVar22 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<1770108987941847229>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\VirtualTextureCollection.cpp"
                              ,0xbd,"TextureRHI.IsValid()");
          if (bVar22) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          goto LAB_1489dff6a;
        }
        FRHIResource::AddRef(this_02);
        pFVar54 = local_430;
        uStack_468 = 0;
        local_470 = 2;
        lVar32 = local_430->_padding_;
        lVar35 = (**(code **)(this_02->_padding_ + 0x20))(this_02);
        cVar49 = *(char *)(lVar35 + 0x32);
        if (cVar49 == '\0') {
          bVar21 = local_470._2_1_ & 0x9f | 0x10;
LAB_1489df6ed:
          local_470._0_3_ = CONCAT12(bVar21,(undefined2)local_470);
        }
        else {
          if (cVar49 == '\x01') {
            bVar21 = local_470._2_1_ & 0xaf | 0x20;
            goto LAB_1489df6ed;
          }
          if (cVar49 == '\x02') {
            bVar21 = local_470._2_1_ & 0xdf | 0x50;
            goto LAB_1489df6ed;
          }
          if (cVar49 == '\x03') {
            bVar21 = local_470._2_1_ & 0xbf | 0x30;
            goto LAB_1489df6ed;
          }
          if (cVar49 == '\x04') {
            bVar21 = local_470._2_1_ & 0xcf | 0x40;
            goto LAB_1489df6ed;
          }
          bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("!\"Enclosing block should never be called\"",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                              ,0xba1,L"");
          if (bVar20) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        if (*(longlong **)(lVar33 + 0x20) == (longlong *)0x0) {
          uVar50 = 0;
        }
        else {
          lVar35 = (**(code **)(**(longlong **)(lVar33 + 0x20) + 0x20))();
          uVar50 = (uint)*(byte *)(lVar35 + 0x30);
        }
        pFVar53 = local_450;
        uVar16 = local_470;
        lVar33 = *(longlong *)(lVar33 + 0x68);
        if (lVar33 == 0) {
          iVar48 = 0;
        }
        else {
          iVar48 = ((uint)((ulonglong)lVar33 >> 0x18) & 0xff) -
                   ((uint)((ulonglong)lVar33 >> 0x28) & 0xff);
        }
        local_470 = CONCAT35(local_470._5_3_,0x100000000);
        uVar42 = (char)(uVar50 - 1);
        if ((int)((uint)(byte)local_450[0x58] - iVar48) < (int)(uVar50 - 1)) {
          uVar42 = (char)((uint)(byte)local_450[0x58] - iVar48);
        }
        local_470._0_3_ = (undefined3)uVar16;
        local_470._0_4_ = CONCAT13(uVar42,(undefined3)local_470);
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9d4c) <
             `public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHITexture*___ptr64,FRHIViewDesc::FTextureSRV::FInitializer_const&___ptr64)___ptr64'
             ::__l2::_thread_safe_static_guard_0__) &&
           (_Init_thread_header(&`public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHITexture*___ptr64,FRHIViewDesc::FTextureSRV::FInitializer_const&___ptr64)___ptr64'
                                 ::__l2::_thread_safe_static_guard_0__),
           `public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHITexture*___ptr64,FRHIViewDesc::FTextureSRV::FInitializer_const&___ptr64)___ptr64'
           ::__l2::_thread_safe_static_guard_0__ == -1)) {
          ::FName::FName(&`public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHITexture*___ptr64,FRHIViewDesc::FTextureSRV::FInitializer_const&___ptr64)___ptr64'
                          ::__l2::LLMScope_Name983,L"RHIMisc/CreateShaderResourceView");
          _Init_thread_footer(&`public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHITexture*___ptr64,FRHIViewDesc::FTextureSRV::FInitializer_const&___ptr64)___ptr64'
                               ::__l2::_thread_safe_static_guard_0__);
        }
        FLLMScope::FLLMScope
                  (&local_3f4,
                   `public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHITexture*___ptr64,FRHIViewDesc::FTextureSRV::FInitializer_const&___ptr64)___ptr64'
                   ::__l2::LLMScope_Name983,false,None,Default,true);
        FMemScope::FMemScope
                  (&local_300,
                   &`public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHITexture*___ptr64,FRHIViewDesc::FTextureSRV::FInitializer_const&___ptr64)___ptr64'
                    ::__l2::LLMScope_Name983,true);
        lVar33 = (**(code **)(this_02->_padding_ + 0x28))(this_02);
        if ((lVar33 != 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("Texture->GetTextureReference() == nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                                ,0x3d8,
                                L"Creating a shader resource view of an FRHITextureReference is not supported."
                               ), bVar20)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        (**(code **)(GDynamicRHI->_padding_ + 0x1b0))(GDynamicRHI,&local_320,lVar32,this_02);
        FMemScope::~FMemScope(&local_300);
        FLLMScope::~FLLMScope(&local_3f4);
        pFVar29->SourceTextureA = local_320;
        if (local_320 != (FRHIShaderResourceView *)0x0) {
          FRHIResource::Release((FRHIResource *)local_320);
        }
        uVar44 = *(ulonglong *)(pFVar53 + 0x50) & 0x5555555555555555;
        uVar45 = *(ulonglong *)(pFVar53 + 0x50) >> 1 & 0x5555555555555555;
        uVar44 = (uVar44 >> 1 ^ uVar44) & 0x3333333333333333;
        uVar44 = (uVar44 >> 2 ^ uVar44) & 0xf0f0f0f0f0f0f0f;
        uVar44 = (uVar44 >> 4 ^ uVar44) & 0xff00ff00ff00ff;
        uVar51 = (uVar44 >> 8 ^ uVar44) & 0xffff0000ffff;
        uVar44 = (uVar45 >> 1 ^ uVar45) & 0x3333333333333333;
        uVar44 = (uVar44 >> 2 ^ uVar44) & 0xf0f0f0f0f0f0f0f;
        uVar44 = (uVar44 >> 4 ^ uVar44) & 0xff00ff00ff00ff;
        uVar44 = (uVar44 >> 8 ^ uVar44) & 0xffff0000ffff;
        fVar58 = fVar11 / (float)(1 << ((byte)pFVar53[0x58] & 0x1f));
        fVar60 = fVar11 / ((float)*(uint *)(pFVar53 + 0x14) * fVar58);
        fVar56 = (float)((uint)(uVar51 >> 0x10) ^ (uint)uVar51) * fVar60;
        fVar59 = fVar11 / ((float)*(uint *)(pFVar53 + 0x18) * fVar58);
        fVar57 = (float)((uint)(uVar44 >> 0x10) ^ (uint)uVar44) * fVar59;
        fVar58 = (float)(local_390->ProducerDesc).TileBorderSize /
                 (float)(local_390->ProducerDesc).TileSize;
        fVar55 = fVar60 * fVar58;
        fVar58 = fVar59 * fVar58;
        local_3a8 = fVar56 - fVar55;
        fStack_3a4 = fVar57 - fVar58;
        local_248._s_0.Y = fStack_3a4;
        local_248._s_0.X = local_3a8;
        (pFVar29->SourceUV).field0_0x0 = local_248;
        local_388 = ((fVar56 + fVar60 + fVar55) - local_3a8) / (float)(iVar46 - local_458);
        fStack_384 = ((fVar57 + fVar59 + fVar58) - fStack_3a4) / (float)(iVar24 - local_47c);
        TVar9._s_0.Y = fStack_384;
        TVar9._s_0.X = local_388;
        (pFVar29->TexelSize).field0_0x0 = TVar9;
        FRHIResource::Release(this_02);
        goto LAB_1489dfa4e;
      }
LAB_1489dff6a:
      if (local_c8.SecondaryData != (ForElementType<EPixelFormat>)0x0) {
        FMemory::Free((void *)local_c8.SecondaryData);
      }
    }
    else {
      uStack_440 = 0;
      local_448 = 2;
      plVar3 = *(longlong **)(*(longlong *)(local_450 + 0x48) + 8);
      lVar33 = local_430->_padding_;
      if ((plVar3 == (longlong *)0x0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("TargetTexture",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                              ,0xbb1,L""), bVar20)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar32 = (**(code **)(*plVar3 + 0x20))(plVar3);
      cVar49 = *(char *)(lVar32 + 0x32);
      if (cVar49 == '\0') {
        bVar21 = local_448._2_1_ & 0x9f | 0x10;
LAB_1489df4c2:
        local_448._0_3_ = CONCAT12(bVar21,(undefined2)local_448);
      }
      else {
        if (cVar49 == '\x01') {
          bVar21 = local_448._2_1_ & 0xaf | 0x20;
          goto LAB_1489df4c2;
        }
        if (cVar49 == '\x02') {
          bVar21 = local_448._2_1_ & 0xdf | 0x50;
          goto LAB_1489df4c2;
        }
        if (cVar49 == '\x03') {
          bVar21 = local_448._2_1_ & 0xbf | 0x30;
          goto LAB_1489df4c2;
        }
        if (cVar49 == '\x04') {
          bVar21 = local_448._2_1_ & 0xcf | 0x40;
          goto LAB_1489df4c2;
        }
        bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("!\"Enclosing block should never be called\"",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                            ,0xba1,L"");
        if (bVar20) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      plVar3 = *(longlong **)(*(longlong *)(pFVar53 + 0x48) + 8);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) <
           `public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHITexture*___ptr64,FRHIViewDesc::FTextureSRV::FInitializer_const&___ptr64)___ptr64'
           ::__l2::_thread_safe_static_guard_0__) &&
         (_Init_thread_header(&`public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHITexture*___ptr64,FRHIViewDesc::FTextureSRV::FInitializer_const&___ptr64)___ptr64'
                               ::__l2::_thread_safe_static_guard_0__),
         `public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHITexture*___ptr64,FRHIViewDesc::FTextureSRV::FInitializer_const&___ptr64)___ptr64'
         ::__l2::_thread_safe_static_guard_0__ == -1)) {
        ::FName::FName(&`public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHITexture*___ptr64,FRHIViewDesc::FTextureSRV::FInitializer_const&___ptr64)___ptr64'
                        ::__l2::LLMScope_Name983,L"RHIMisc/CreateShaderResourceView");
        _Init_thread_footer(&`public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHITexture*___ptr64,FRHIViewDesc::FTextureSRV::FInitializer_const&___ptr64)___ptr64'
                             ::__l2::_thread_safe_static_guard_0__);
      }
      FLLMScope::FLLMScope
                (&local_3f8,
                 `public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHITexture*___ptr64,FRHIViewDesc::FTextureSRV::FInitializer_const&___ptr64)___ptr64'
                 ::__l2::LLMScope_Name983,false,None,Default,true);
      FMemScope::FMemScope
                (&local_2f0,
                 &`public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHITexture*___ptr64,FRHIViewDesc::FTextureSRV::FInitializer_const&___ptr64)___ptr64'
                  ::__l2::LLMScope_Name983,true);
      lVar32 = (**(code **)(*plVar3 + 0x28))(plVar3);
      if ((lVar32 != 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("Texture->GetTextureReference() == nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                              ,0x3d8,
                              L"Creating a shader resource view of an FRHITextureReference is not supported."
                             ), bVar20)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      (**(code **)(GDynamicRHI->_padding_ + 0x1b0))(GDynamicRHI,&local_2f8,lVar33,plVar3);
      FMemScope::~FMemScope(&local_2f0);
      FLLMScope::~FLLMScope(&local_3f8);
      pFVar29->SourceTextureA = local_2f8;
      if (local_2f8 != (FRHIShaderResourceView *)0x0) {
        FRHIResource::Release((FRHIResource *)local_2f8);
      }
      local_3b8 = 0;
      (pFVar29->SourceUV).field0_0x0 = (TVector2<float>_u_0)0x0;
      lVar33 = (**(code **)(**(longlong **)(pFVar53 + 0x48) + 0x10))();
      fVar58 = fVar11 / (float)*(int *)(lVar33 + 0x30);
      lVar33 = (**(code **)(**(longlong **)(pFVar53 + 0x48) + 0x10))();
      local_3b0 = fVar11 / (float)*(int *)(lVar33 + 0x2c);
      TVar8._s_0.Y = fVar58;
      TVar8._s_0.X = local_3b0;
      (pFVar29->TexelSize).field0_0x0 = TVar8;
      fStack_3ac = fVar58;
LAB_1489dfa4e:
      iVar46 = iVar46 - local_458;
      iVar24 = iVar24 - local_47c;
      iVar48 = iVar46;
      iVar52 = iVar24;
      if (bVar22) {
        iVar52 = (pFVar29->DestRect).field0_0x0._s_0.X;
        iVar5 = (pFVar29->DestRect).field0_0x0._s_0.Y;
        iVar6 = (pFVar29->DestRect).field0_0x0._s_0.Z;
        iVar7 = (pFVar29->DestRect).field0_0x0._s_0.W;
        local_3a0 = 0x40800000;
        uStack_39c = 0x3f000000;
        iVar48 = (int)((iVar46 >> 0x1f & 3U) + iVar46) >> 2;
        (pFVar29->DestRect).field0_0x0._s_0.X = (int)((-(uint)(iVar52 < 0) & uVar12) + iVar52) >> 2;
        (pFVar29->DestRect).field0_0x0._s_0.Y = (int)((-(uint)(iVar5 < 0) & uVar13) + iVar5) >> 2;
        (pFVar29->DestRect).field0_0x0._s_0.Z = (int)((-(uint)(iVar6 < 0) & uVar14) + iVar6) >> 2;
        (pFVar29->DestRect).field0_0x0._s_0.W = (int)((-(uint)(iVar7 < 0) & uVar15) + iVar7) >> 2;
        (pFVar29->TexelOffsets).field0_0x0 = (TVector2<float>_u_0)0x3f00000040800000;
        iVar52 = (int)((iVar24 >> 0x1f & 3U) + iVar24) >> 2;
      }
      pFVar36 = FCopyCompressCS::FParameters::FTypeInfo::GetStructMetadata();
      local_270.ShaderContent = local_398;
      local_270.ShaderMap = local_3e8;
      ValidateShaderParameters(&local_270,pFVar36,pFVar29);
      pFVar17 = local_398;
      local_208._First = (FRDGResource **)0x0;
      local_208._Last = (FRDGResource **)0x0;
      ClearUnusedGraphResourcesImpl(&local_398->Bindings,pFVar36,pFVar29,&local_208);
      pFStack_2c8 = local_3e8;
      local_2d0 = pFVar17;
      local_2c0 = pFVar29;
      iStack_2b8 = iVar48;
      iStack_2b4 = iVar52;
      pFVar37 = FRDGEventName::FRDGEventName(&local_1a8,1,L"VirtualTextureCollectionAdapter");
      pFVar36 = FCopyCompressCS::FParameters::FTypeInfo::GetStructMetadata();
      FRDGUserValidation::ValidateAddPass(&pFVar54->UserValidation,pFVar29,pFVar36,pFVar37,Compute);
      FRDGBuilder::FlushAccessModeQueue(pFVar54);
      pwVar38 = FRDGEventName::GetTCHAR(pFVar37);
      EVar23 = FRDGBuilder::OverridePassFlags(pFVar54,pwVar38,Compute);
      pFVar39 = FMemStackBase::Alloc(local_3f0,0x1a8,8);
      local_260.Contents = (uchar *)pFVar29;
      if (((pFVar36->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsLayoutInitialized()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                              ,0x17c,L""), bVar20)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      local_260.Layout.Reference = (pFVar36->Layout).Reference;
      if (local_260.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
        FRHIResource::AddRef((FRHIResource *)local_260.Layout.Reference);
      }
      local_260.Metadata = pFVar36;
      FRDGPass::FRDGPass(pFVar39,pFVar37,&local_260,EVar23,Async);
      pFVar54 = local_430;
      pFVar39[1]._padding_ = (longlong)local_2d0;
      pFVar39[1].FullPathIfDebug.Data.AllocatorInstance.Data =
           (FScriptContainerElement *)pFStack_2c8;
      pFVar39->_padding_ =
           (longlong)
           &
           ___7__TRDGLambdaPass_VFParameters_FCopyCompressCS__V<lambda_1>__9__Finalize_FTextureCollectionVirtualAdapterFinalizer__UEAAXAEAVFRDGBuilder___Z___6B_
      ;
      *(FParameters **)&pFVar39[1].FullPathIfDebug.Data.ArrayNum = local_2c0;
      pFVar39[1].Name.EventFormat = (wchar_t *)CONCAT44(iStack_2b4,iStack_2b8);
      pFVar39[1].Name.FormattedEventName.Data.AllocatorInstance.Data =
           (FScriptContainerElement *)pFVar29;
      FRDGBuilder::ClobberPassOutputs(local_430,pFVar39);
      this_01 = &pFVar54->Passes;
      iVar48 = (pFVar54->Passes).Array.ArrayNum;
      piVar1 = &(pFVar54->Passes).Array.ArrayMax;
      if (iVar48 == *piVar1) {
        iVar48 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                           (0x808,(ForElementType<FRDGPass_*> *)this_01,piVar1);
      }
      (pFVar54->Passes).Array.ArrayNum = iVar48 + 1;
      (this_01->Array).AllocatorInstance.Data[iVar48] = pFVar39;
      (pFVar39->Handle).Index = (pFVar54->Passes).Array.ArrayNum - 1;
      FRDGBuilder::SetupParameterPass(pFVar54,pFVar39);
      if (local_1a8.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
         ) {
        FMemory::Free(local_1a8.FormattedEventName.Data.AllocatorInstance.Data);
      }
      iVar52 = local_458;
      iVar48 = local_47c;
      if (!bVar10) {
        iStack_34c = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
        iStack_348 = local_458;
        iStack_344 = local_47c;
        uStack_354 = (undefined4)UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
        uStack_350 = (undefined4)
                     ((ulonglong)UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_ >> 0x20);
        uStack_33c = 0;
        uStack_338 = 0;
        uStack_334 = 1;
        uStack_330 = 0;
        uStack_32c = 0;
        local_340 = 0;
        uStack_358 = 0;
        local_360 = iVar46;
        iStack_35c = iVar24;
        if (bVar22) {
          local_360 = (int)(iVar46 + (iVar46 >> 0x1f & 3U)) >> 2;
          iStack_35c = (int)(iVar24 + (iVar24 >> 0x1f & 3U)) >> 2;
        }
        iVar46 = iStack_35c;
        iVar24 = local_360;
        local_1e8 = CONCAT44(iStack_35c,local_360);
        pwVar38 = (wchar_t *)(UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_ << 0x20);
        pFVar53 = (FScriptContainerElement *)
                  CONCAT44(UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z,uStack_350);
        uStack_1d0 = CONCAT44(local_47c,local_458);
        local_1c8 = 0;
        uStack_1c0 = 0x100000000;
        local_1f8 = local_438;
        uStack_1f0 = *(undefined8 *)(*(longlong *)(local_450 + 0x20) + 8);
        uStack_1b0 = 1;
        pwStack_1e0 = pwVar38;
        local_1d8 = pFVar53;
        pFVar37 = FRDGEventName::FRDGEventName(&local_190,1,L"VirtualTextureCollectionPhysicalBlit")
        ;
        pFVar36 = FCopyCompressCS::FParameters::FTypeInfo::GetStructMetadata();
        FRDGUserValidation::ValidateAddPass
                  (&pFVar54->UserValidation,pFVar29,pFVar36,pFVar37,Readback);
        FRDGBuilder::FlushAccessModeQueue(pFVar54);
        pwVar40 = FRDGEventName::GetTCHAR(pFVar37);
        EVar23 = FRDGBuilder::OverridePassFlags(pFVar54,pwVar40,Readback);
        pFVar39 = FMemStackBase::Alloc((FMemStackBase *)&pFVar54->_padding_,0x1d8,8);
        pFVar41 = FRDGParameterStruct::FRDGParameterStruct<FCopyCompressCS::FParameters>
                            (&local_178,pFVar29,pFVar36);
        FRDGPass::FRDGPass(pFVar39,pFVar37,pFVar41,EVar23,Async);
        pFVar39->_padding_ =
             (longlong)
             &
             ___7__TRDGLambdaPass_VFParameters_FCopyCompressCS__V<lambda_2>__CD___Finalize_FTextureCollectionVirtualAdapterFinalizer__UEAAXAEAVFRDGBuilder___Z___6B_
        ;
        pFVar39[1]._padding_ = (longlong)local_1f8;
        *(undefined4 *)&pFVar39[1].FullPathIfDebug.Data.AllocatorInstance.Data =
             (undefined4)uStack_1f0;
        *(undefined4 *)((longlong)&pFVar39[1].FullPathIfDebug.Data.AllocatorInstance.Data + 4) =
             uStack_1f0._4_4_;
        *(FParameters **)&pFVar39[1].Workload = pFVar29;
        pFVar39[1].FullPathIfDebug.Data.ArrayNum = iVar24;
        pFVar39[1].FullPathIfDebug.Data.ArrayMax = iVar46;
        pFVar39[1].Name.EventFormat = pwVar38;
        pFVar39[1].Name.FormattedEventName.Data.AllocatorInstance.Data = pFVar53;
        pFVar39[1].Name.FormattedEventName.Data.ArrayNum = iVar52;
        pFVar39[1].Name.FormattedEventName.Data.ArrayMax = iVar48;
        pFVar39[1].ParameterStruct.Contents = (uchar *)0x0;
        pFVar39[1].ParameterStruct.Layout.Reference = (FRHIUniformBufferLayout *)&DAT_100000000;
        local_1b8 = 0;
        uStack_1b4 = 0;
        *(undefined4 *)&pFVar39[1].ParameterStruct.Metadata = 0;
        *(undefined4 *)((longlong)&pFVar39[1].ParameterStruct.Metadata + 4) = 0;
        pFVar39[1].Flags = (undefined2)uStack_1b0;
        pFVar39[1].TaskMode = uStack_1b0._2_1_;
        pFVar39[1].Pipeline = uStack_1b0._3_1_;
        pFVar39[1].Handle.Index = uStack_1ac;
        FRDGBuilder::ClobberPassOutputs(local_430,pFVar39);
        TRDGHandleRegistry<TRDGHandle<FRDGPass,unsigned_int>,0>::Insert(this_01,pFVar39);
        FRDGBuilder::SetupParameterPass(local_430,pFVar39);
        if (local_190.FormattedEventName.Data.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_190.FormattedEventName.Data.AllocatorInstance.Data);
        }
      }
      pFVar53 = local_450;
      if (local_c8.SecondaryData != (ForElementType<EPixelFormat>)0x0) {
        FMemory::Free((void *)local_c8.SecondaryData);
        pFVar53 = local_450;
      }
    }
    pFVar53 = pFVar53 + 0x60;
    uVar44 = (ulonglong)local_3e0;
    this = local_390;
    param_1 = local_430;
  } while( true );
}

// RenderFinalize @ 148a0bcb0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FTextureCollectionVirtualAdapterFinalizer::RenderFinalize
          (FTextureCollectionVirtualAdapterFinalizer *this,FRDGBuilder *param_1,
          ISceneRenderer *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->PendingFinalizers).AllocatorInstance.Data;
  iVar2 = (this->PendingFinalizers).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->PendingFinalizers).ArrayNum != iVar2) {
      `TCheckedPointerIterator<IVirtualTextureFinalizer_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    (**(code **)**(undefined8 **)pFVar3)(*(undefined8 **)pFVar3,param_1,param_2);
    pFVar3 = pFVar3 + 8;
  }
  return;
}

