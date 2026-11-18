// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 23

// GetAllowedShaderTypesInThumbnailRender @ 145f8e380

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TArray<FName,TSizedDefaultAllocator<32>_> * __cdecl
FLandscapeMaterialResource::GetAllowedShaderTypesInThumbnailRender(void)

{
  FName FVar1;
  FName *pFVar2;
  FName *pFVar3;
  longlong lVar4;
  FName *pFVar5;
  FName *pFVar6;
  undefined1 auStackY_178 [32];
  FName local_138;
  FName FStack_130;
  FName local_128;
  FName FStack_120;
  FName local_118;
  FName FStack_110;
  FName local_108;
  FName FStack_100;
  FName local_f8;
  FName FStack_f0;
  FName local_e8;
  FName FStack_e0;
  FName local_d8;
  FName FStack_d0;
  FName local_c8;
  FName FStack_c0;
  FName local_b8;
  FName FStack_b0;
  FName local_a8;
  FName FStack_a0;
  FName local_98;
  FName local_90;
  FName local_88;
  FName local_80;
  FName local_78;
  FName local_70;
  FName local_68;
  FName local_60;
  FName local_58;
  FName local_50;
  FName local_48;
  FName local_40;
  FName local_38;
  FName local_30;
  FName local_28;
  FName local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_class_TArray<FName,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_FLandscapeMaterialResource::GetAllowedShaderTypesInThumbnailRender(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_TArray<FName,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_FLandscapeMaterialResource::GetAllowedShaderTypesInThumbnailRender(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_TArray<FName,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_FLandscapeMaterialResource::GetAllowedShaderTypesInThumbnailRender(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&local_138,L"TBasePassVSFNoLightMapPolicy");
    ::FName::FName(&FStack_130,L"TBasePassPSFNoLightMapPolicy");
    ::FName::FName(&local_128,L"TBasePassVSFCachedPointIndirectLightingPolicy");
    ::FName::FName(&FStack_120,L"TBasePassPSFCachedPointIndirectLightingPolicy");
    ::FName::FName(&local_118,L"FAnisotropyVS");
    ::FName::FName(&FStack_110,L"FAnisotropyPS");
    ::FName::FName(&local_108,L"TDepthOnlyVS<false>");
    ::FName::FName(&FStack_100,L"TDepthOnlyVS<true>");
    ::FName::FName(&local_f8,L"FDepthOnlyPS");
    ::FName::FName(&FStack_f0,L"FHitProxyVS");
    ::FName::FName(&local_e8,L"FHitProxyPS");
    ::FName::FName(&FStack_e0,L"FVelocityVS");
    ::FName::FName(&local_d8,L"FVelocityPS");
    ::FName::FName(&FStack_d0,L"TBasePassVSFNoLightMapPolicySkyAtmosphereAP");
    ::FName::FName(&local_c8,L"TLightMapDensityVSFNoLightMapPolicy");
    ::FName::FName(&FStack_c0,L"TLightMapDensityPSFNoLightMapPolicy");
    ::FName::FName(&local_b8,
                   L"TMobileBasePassPSFMobileDirectionalLightAndSHIndirectPolicyLOCAL_LIGHTS_DISABLED"
                  );
    ::FName::FName(&FStack_b0,L"TMobileBasePassVSFMobileDirectionalLightAndSHIndirectPolicy");
    ::FName::FName(&local_a8,L"TMobileBasePassPSFNoLightMapPolicyLOCAL_LIGHTS_DISABLED");
    ::FName::FName(&FStack_a0,L"TMobileBasePassVSFNoLightMapPolicy");
    ::FName::FName(&local_98,L"TBasePassPSFCachedPointIndirectLightingPolicySkylight");
    ::FName::FName(&local_90,L"TBasePassPSFNoLightMapPolicySkylight");
    ::FName::FName(&local_88,L"TVirtualTextureVSBaseColor");
    ::FName::FName(&local_80,L"TVirtualTextureVSBaseColorNormal");
    ::FName::FName(&local_78,L"TVirtualTextureVSBaseColorNormalSpecular");
    ::FName::FName(&local_70,L"TVirtualTextureVSBaseColorNormalRoughness");
    ::FName::FName(&local_68,L"TVirtualTextureVSMask4");
    ::FName::FName(&local_60,L"TVirtualTextureVSWorldHeight");
    ::FName::FName(&local_58,L"TVirtualTextureVSDisplacement");
    ::FName::FName(&local_50,L"TVirtualTexturePSBaseColor");
    ::FName::FName(&local_48,L"TVirtualTexturePSBaseColorNormal");
    ::FName::FName(&local_40,L"TVirtualTexturePSBaseColorNormalSpecular");
    ::FName::FName(&local_38,L"TVirtualTexturePSBaseColorNormalRoughness");
    ::FName::FName(&local_30,L"TVirtualTexturePSMask4");
    ::FName::FName(&local_28,L"TVirtualTexturePSWorldHeight");
    ::FName::FName(&local_20,L"TVirtualTexturePSDisplacement");
    _AllowedShaderTypes = (FName *)0x0;
    _DAT_15519b130 = 0x24;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0x24,0,
               (ForAnyElementType *)
               &`public:_static_class_TArray<FName,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_FLandscapeMaterialResource::GetAllowedShaderTypesInThumbnailRender(void)'
                ::__l2::AllowedShaderTypes,0x24,(int *)&DAT_15519b134);
    lVar4 = 2;
    pFVar2 = &local_138;
    pFVar3 = _AllowedShaderTypes;
    do {
      pFVar6 = pFVar3;
      pFVar5 = pFVar2;
      FVar1 = pFVar5[1];
      *pFVar6 = *pFVar5;
      pFVar6[1] = FVar1;
      FVar1 = pFVar5[3];
      pFVar6[2] = pFVar5[2];
      pFVar6[3] = FVar1;
      FVar1 = pFVar5[5];
      pFVar6[4] = pFVar5[4];
      pFVar6[5] = FVar1;
      FVar1 = pFVar5[7];
      pFVar6[6] = pFVar5[6];
      pFVar6[7] = FVar1;
      FVar1 = pFVar5[9];
      pFVar6[8] = pFVar5[8];
      pFVar6[9] = FVar1;
      FVar1 = pFVar5[0xb];
      pFVar6[10] = pFVar5[10];
      pFVar6[0xb] = FVar1;
      FVar1 = pFVar5[0xd];
      pFVar6[0xc] = pFVar5[0xc];
      pFVar6[0xd] = FVar1;
      FVar1 = pFVar5[0xf];
      pFVar6[0xe] = pFVar5[0xe];
      pFVar6[0xf] = FVar1;
      lVar4 = lVar4 + -1;
      pFVar2 = pFVar5 + 0x10;
      pFVar3 = pFVar6 + 0x10;
    } while (lVar4 != 0);
    FVar1 = pFVar5[0x11];
    pFVar6[0x10] = pFVar5[0x10];
    pFVar6[0x11] = FVar1;
    FVar1 = pFVar5[0x13];
    pFVar6[0x12] = pFVar5[0x12];
    pFVar6[0x13] = FVar1;
    atexit(`FLandscapeMaterialResource::GetAllowedShaderTypesInThumbnailRender'::__l2::
           _dynamic_atexit_destructor_for__AllowedShaderTypes__);
    _Init_thread_footer(&`public:_static_class_TArray<FName,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_FLandscapeMaterialResource::GetAllowedShaderTypesInThumbnailRender(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  return (TArray<FName,TSizedDefaultAllocator<32>_> *)
         &`public:_static_class_TArray<FName,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_FLandscapeMaterialResource::GetAllowedShaderTypesInThumbnailRender(void)'
          ::__l2::AllowedShaderTypes;
}

// GetExcludedShaderTypesInThumbnailRender @ 145f91b00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TArray<FName,TSizedDefaultAllocator<32>_> * __cdecl
FLandscapeMaterialResource::GetExcludedShaderTypesInThumbnailRender(void)

{
  FName FVar1;
  FName *pFVar2;
  FName *pFVar3;
  longlong lVar4;
  FName *pFVar5;
  FName *pFVar6;
  undefined1 auStackY_318 [32];
  FName local_2d8;
  FName FStack_2d0;
  FName local_2c8;
  FName FStack_2c0;
  FName local_2b8;
  FName FStack_2b0;
  FName local_2a8;
  FName FStack_2a0;
  FName local_298;
  FName FStack_290;
  FName local_288;
  FName FStack_280;
  FName local_278;
  FName FStack_270;
  FName local_268;
  FName FStack_260;
  FName local_258;
  FName FStack_250;
  FName local_248;
  FName FStack_240;
  FName local_238;
  FName FStack_230;
  FName local_228;
  FName local_220;
  FName local_218;
  FName local_210;
  FName local_208;
  FName local_200;
  FName local_1f8;
  FName local_1f0;
  FName local_1e8;
  FName local_1e0;
  FName local_1d8;
  FName local_1d0;
  FName local_1c8;
  FName local_1c0;
  FName local_1b8;
  FName local_1b0;
  FName local_1a8;
  FName local_1a0;
  FName local_198;
  FName local_190;
  FName local_188;
  FName local_180;
  FName local_178;
  FName local_170;
  FName local_168;
  FName local_160;
  FName local_158;
  FName local_150;
  FName local_148;
  FName local_140;
  FName local_138;
  FName local_130;
  FName local_128;
  FName local_120;
  FName local_118;
  FName local_110;
  FName local_108;
  FName local_100;
  FName local_f8;
  FName local_f0;
  FName local_e8;
  FName local_e0;
  FName local_d8;
  FName local_d0;
  FName local_c8;
  FName local_c0;
  FName local_b8;
  FName local_b0;
  FName local_a8;
  FName local_a0;
  FName local_98;
  FName local_90;
  FName local_88;
  FName local_80;
  FName local_78;
  FName local_70;
  FName local_68;
  FName local_60;
  FName local_58;
  FName local_50;
  FName local_48;
  FName local_40;
  FName local_38;
  FName local_30;
  FName local_28 [2];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_318;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_class_TArray<FName,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_FLandscapeMaterialResource::GetExcludedShaderTypesInThumbnailRender(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_TArray<FName,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_FLandscapeMaterialResource::GetExcludedShaderTypesInThumbnailRender(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_TArray<FName,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_FLandscapeMaterialResource::GetExcludedShaderTypesInThumbnailRender(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&local_2d8,L"FDebugViewModeVS");
    ::FName::FName(&FStack_2d0,L"TLightMapDensityVSFDummyLightMapPolicy");
    ::FName::FName(&local_2c8,L"TLightMapDensityPSFDummyLightMapPolicy");
    ::FName::FName(&FStack_2c0,L"TLightMapDensityPSTLightMapPolicyHQ");
    ::FName::FName(&local_2b8,L"TLightMapDensityVSTLightMapPolicyHQ");
    ::FName::FName(&FStack_2b0,L"TLightMapDensityPSTLightMapPolicyLQ");
    ::FName::FName(&local_2a8,L"TLightMapDensityVSTLightMapPolicyLQ");
    ::FName::FName(&FStack_2a0,L"TBasePassPSTDistanceFieldShadowsAndLightMapPolicyHQ");
    ::FName::FName(&local_298,L"TBasePassPSTDistanceFieldShadowsAndLightMapPolicyHQSkylight");
    ::FName::FName(&FStack_290,L"TBasePassVSTDistanceFieldShadowsAndLightMapPolicyHQ");
    ::FName::FName(&local_288,L"TBasePassPSTLightMapPolicyHQ");
    ::FName::FName(&FStack_280,L"TBasePassPSTLightMapPolicyHQSkylight");
    ::FName::FName(&local_278,L"TBasePassVSTLightMapPolicyHQ");
    ::FName::FName(&FStack_270,L"TBasePassPSTLightMapPolicyLQ");
    ::FName::FName(&local_268,L"TBasePassPSTLightMapPolicyLQSkylight");
    ::FName::FName(&FStack_260,L"TBasePassVSTLightMapPolicyLQ");
    ::FName::FName(&local_258,L"FDebugViewModePS");
    ::FName::FName(&FStack_250,
                   L"TMobileBasePassPSFMobileMovableDirectionalLightCSMWithLightmapPolicyLOCAL_LIGHTS_DISABLED"
                  );
    ::FName::FName(&local_248,
                   L"TMobileBasePassVSFMobileMovableDirectionalLightCSMWithLightmapPolicy");
    ::FName::FName(&FStack_240,
                   L"TMobileBasePassPSFMobileMovableDirectionalLightWithLightmapPolicyLOCAL_LIGHTS_DISABLED"
                  );
    ::FName::FName(&local_238,L"TMobileBasePassVSFMobileMovableDirectionalLightWithLightmapPolicy");
    ::FName::FName(&FStack_230,
                   L"TMobileBasePassPSFMobileDistanceFieldShadowsLightMapAndCSMLightingPolicyLOCAL_LIGHTS_DISABLED"
                  );
    ::FName::FName(&local_228,
                   L"TMobileBasePassVSFMobileDistanceFieldShadowsLightMapAndCSMLightingPolicy");
    ::FName::FName(&local_220,
                   L"TMobileBasePassPSFMobileDistanceFieldShadowsAndLQLightMapPolicyLOCAL_LIGHTS_DISABLED"
                  );
    ::FName::FName(&local_218,L"TMobileBasePassVSFMobileDistanceFieldShadowsAndLQLightMapPolicy");
    ::FName::FName(&local_210,L"TMobileBasePassPSTLightMapPolicyLQLOCAL_LIGHTS_DISABLED");
    ::FName::FName(&local_208,L"TMobileBasePassVSTLightMapPolicyLQ");
    ::FName::FName(&local_200,
                   L"TMobileBasePassPSFMobileDirectionalLightAndCSMPolicyLOCAL_LIGHTS_DISABLED");
    ::FName::FName(&local_1f8,L"TMobileBasePassVSFMobileDirectionalLightAndCSMPolicy");
    ::FName::FName(&local_1f0,L"TBasePassVSFCachedVolumeIndirectLightingPolicy");
    ::FName::FName(&local_1e8,L"TBasePassPSFCachedVolumeIndirectLightingPolicy");
    ::FName::FName(&local_1e0,L"TBasePassPSFCachedVolumeIndirectLightingPolicySkylight");
    ::FName::FName(&local_1d8,L"TBasePassPSFPrecomputedVolumetricLightmapLightingPolicySkylight");
    ::FName::FName(&local_1d0,L"TBasePassVSFPrecomputedVolumetricLightmapLightingPolicy");
    ::FName::FName(&local_1c8,L"TBasePassPSFPrecomputedVolumetricLightmapLightingPolicy");
    ::FName::FName(&local_1c0,L"TBasePassVSFCachedPointIndirectLightingPolicy");
    ::FName::FName(&local_1b8,L"TBasePassVSFSelfShadowedCachedPointIndirectLightingPolicy");
    ::FName::FName(&local_1b0,L"TBasePassPSFSelfShadowedCachedPointIndirectLightingPolicy");
    ::FName::FName(&local_1a8,L"TBasePassPSFSelfShadowedCachedPointIndirectLightingPolicySkylight");
    ::FName::FName(&local_1a0,L"TBasePassVSFSelfShadowedTranslucencyPolicy");
    ::FName::FName(&local_198,L"TBasePassPSFSelfShadowedTranslucencyPolicy");
    ::FName::FName(&local_190,L"TBasePassPSFSelfShadowedTranslucencyPolicySkylight");
    ::FName::FName(&local_188,L"TShadowDepthVSVertexShadowDepth_PerspectiveCorrect");
    ::FName::FName(&local_180,L"TShadowDepthVSVertexShadowDepth_OutputDepth");
    ::FName::FName(&local_178,L"TShadowDepthVSVertexShadowDepth_OnePassPointLight");
    ::FName::FName(&local_170,L"TShadowDepthVSVertexShadowDepth_VirtualShadowMap");
    ::FName::FName(&local_168,L"TShadowDepthVSVertexShadowDepth_PerspectiveCorrectPositionOnly");
    ::FName::FName(&local_160,L"TShadowDepthVSVertexShadowDepth_OutputDepthPositionOnly");
    ::FName::FName(&local_158,L"TShadowDepthVSVertexShadowDepth_OnePassPointLightPositionOnly");
    ::FName::FName(&local_150,L"TShadowDepthVSVertexShadowDepth_VirtualShadowMapPositionOnly");
    ::FName::FName(&local_148,L"TShadowDepthPSPixelShadowDepth_VirtualShadowMap");
    ::FName::FName(&local_140,L"TShadowDepthPSPixelShadowDepth_PerspectiveCorrect");
    ::FName::FName(&local_138,L"TShadowDepthPSPixelShadowDepth_OnePassPointLight");
    ::FName::FName(&local_130,L"TShadowDepthPSPixelShadowDepth_NonPerspectiveCorrect");
    ::FName::FName(&local_128,L"TShadowDepthVSForGSVertexShadowDepth_OnePassPointLight");
    ::FName::FName(&local_120,L"TShadowDepthVSForGSVertexShadowDepth_OnePassPointLightPositionOnly")
    ;
    ::FName::FName(&local_118,L"TShadowDepthVSVertexShadowDepth_VSLayer");
    ::FName::FName(&local_110,L"TShadowDepthVSVertexShadowDepth_VSLayerPositionOnly");
    ::FName::FName(&local_108,L"TShadowDepthVSVertexShadowDepth_VSLayerGS");
    ::FName::FName(&local_100,L"TShadowDepthVSVertexShadowDepth_VSLayerGSPositionOnly");
    ::FName::FName(&local_f8,L"FOnePassPointShadowDepthGS");
    ::FName::FName(&local_f0,L"TTranslucencyShadowDepthVS<TranslucencyShadowDepth_Standard>");
    ::FName::FName(&local_e8,L"TTranslucencyShadowDepthPS<TranslucencyShadowDepth_Standard>");
    ::FName::FName(&local_e0,
                   L"TTranslucencyShadowDepthVS<TranslucencyShadowDepth_PerspectiveCorrect>");
    ::FName::FName(&local_d8,
                   L"TTranslucencyShadowDepthPS<TranslucencyShadowDepth_PerspectiveCorrect>");
    ::FName::FName(&local_d0,L"TBasePassVSTDistanceFieldShadowsAndLightMapPolicyHQ");
    ::FName::FName(&local_c8,L"TBasePassVSTLightMapPolicyHQ");
    ::FName::FName(&local_c0,L"TBasePassVSTLightMapPolicyLQ");
    ::FName::FName(&local_b8,L"TBasePassPSFSelfShadowedVolumetricLightmapPolicy");
    ::FName::FName(&local_b0,L"TBasePassPSFSelfShadowedVolumetricLightmapPolicySkylight");
    ::FName::FName(&local_a8,L"TBasePassVSFSelfShadowedVolumetricLightmapPolicy");
    ::FName::FName(&local_a0,L"TVelocityVS<EVelocityPassMode::Velocity_Standard>");
    ::FName::FName(&local_98,L"TVelocityPS<EVelocityPassMode::Velocity_Standard>");
    ::FName::FName(&local_90,L"TVelocityVS<EVelocityPassMode::Velocity_ClippedDepth>");
    ::FName::FName(&local_88,L"TVelocityPS<EVelocityPassMode::Velocity_ClippedDepth>");
    ::FName::FName(&local_80,L"TVelocityVS<EVelocityPassMode::Velocity_StereoMotionVectors>");
    ::FName::FName(&local_78,L"TVelocityPS<EVelocityPassMode::Velocity_StereoMotionVectors>");
    ::FName::FName(&local_70,L"FRayTracingDynamicGeometryConverterCS");
    ::FName::FName(&local_68,L"FTrivialMaterialCHS");
    ::FName::FName(&local_60,L"FLumenCardCS");
    ::FName::FName(&local_58,L"FLumenCardVS");
    ::FName::FName(&local_50,L"FLumenCardPS");
    ::FName::FName(&local_48,L"FMaterialCacheUnwrapVS0");
    ::FName::FName(&local_40,L"FMaterialCacheUnwrapVS1");
    ::FName::FName(&local_38,L"FMaterialCacheUnwrapPS");
    ::FName::FName(&local_30,L"FMaterialCacheNaniteShadeCS");
    ::FName::FName(local_28,L"FMaterialCacheShadeCS");
    _ExcludedShaderTypes = (FName *)0x0;
    _DAT_15519b148 = 0x57;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0x57,0,
               (ForAnyElementType *)
               &`public:_static_class_TArray<FName,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_FLandscapeMaterialResource::GetExcludedShaderTypesInThumbnailRender(void)'
                ::__l2::ExcludedShaderTypes,0x57,(int *)&DAT_15519b14c);
    lVar4 = 5;
    pFVar2 = &local_2d8;
    pFVar3 = _ExcludedShaderTypes;
    do {
      pFVar6 = pFVar3;
      pFVar5 = pFVar2;
      FVar1 = pFVar5[1];
      *pFVar6 = *pFVar5;
      pFVar6[1] = FVar1;
      FVar1 = pFVar5[3];
      pFVar6[2] = pFVar5[2];
      pFVar6[3] = FVar1;
      FVar1 = pFVar5[5];
      pFVar6[4] = pFVar5[4];
      pFVar6[5] = FVar1;
      FVar1 = pFVar5[7];
      pFVar6[6] = pFVar5[6];
      pFVar6[7] = FVar1;
      FVar1 = pFVar5[9];
      pFVar6[8] = pFVar5[8];
      pFVar6[9] = FVar1;
      FVar1 = pFVar5[0xb];
      pFVar6[10] = pFVar5[10];
      pFVar6[0xb] = FVar1;
      FVar1 = pFVar5[0xd];
      pFVar6[0xc] = pFVar5[0xc];
      pFVar6[0xd] = FVar1;
      FVar1 = pFVar5[0xf];
      pFVar6[0xe] = pFVar5[0xe];
      pFVar6[0xf] = FVar1;
      lVar4 = lVar4 + -1;
      pFVar2 = pFVar5 + 0x10;
      pFVar3 = pFVar6 + 0x10;
    } while (lVar4 != 0);
    FVar1 = pFVar5[0x11];
    pFVar6[0x10] = pFVar5[0x10];
    pFVar6[0x11] = FVar1;
    FVar1 = pFVar5[0x13];
    pFVar6[0x12] = pFVar5[0x12];
    pFVar6[0x13] = FVar1;
    FVar1 = pFVar5[0x15];
    pFVar6[0x14] = pFVar5[0x14];
    pFVar6[0x15] = FVar1;
    pFVar6[0x16] = pFVar5[0x16];
    atexit(`FLandscapeMaterialResource::GetExcludedShaderTypesInThumbnailRender'::__l2::
           _dynamic_atexit_destructor_for__ExcludedShaderTypes__);
    _Init_thread_footer(&`public:_static_class_TArray<FName,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_FLandscapeMaterialResource::GetExcludedShaderTypesInThumbnailRender(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  return (TArray<FName,TSizedDefaultAllocator<32>_> *)
         &`public:_static_class_TArray<FName,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_FLandscapeMaterialResource::GetExcludedShaderTypesInThumbnailRender(void)'
          ::__l2::ExcludedShaderTypes;
}

// IsUsedWithAPEXCloth @ 145f98050

bool __thiscall FLandscapeMaterialResource::IsUsedWithAPEXCloth(FLandscapeMaterialResource *this)

{
  return false;
}

// IsUsedWithBeamTrails @ 145f98060

bool __thiscall FLandscapeMaterialResource::IsUsedWithBeamTrails(FLandscapeMaterialResource *this)

{
  return false;
}

// IsUsedWithGeometryCache @ 145f98070

bool __thiscall
FLandscapeMaterialResource::IsUsedWithGeometryCache(FLandscapeMaterialResource *this)

{
  return false;
}

// IsUsedWithGeometryCollections @ 145f98080

bool __thiscall
FLandscapeMaterialResource::IsUsedWithGeometryCollections(FLandscapeMaterialResource *this)

{
  return false;
}

// IsUsedWithHairStrands @ 145f98090

bool __thiscall FLandscapeMaterialResource::IsUsedWithHairStrands(FLandscapeMaterialResource *this)

{
  return false;
}

// IsUsedWithInstancedStaticMeshes @ 145f980a0

bool __thiscall
FLandscapeMaterialResource::IsUsedWithInstancedStaticMeshes(FLandscapeMaterialResource *this)

{
  return false;
}

// IsUsedWithLandscape @ 145f980b0

bool __thiscall FLandscapeMaterialResource::IsUsedWithLandscape(FLandscapeMaterialResource *this)

{
  return this->bIsLayerThumbnail == false;
}

// IsUsedWithLidarPointCloud @ 145f980d0

bool __thiscall
FLandscapeMaterialResource::IsUsedWithLidarPointCloud(FLandscapeMaterialResource *this)

{
  return false;
}

// IsUsedWithMeshParticles @ 145f980e0

bool __thiscall
FLandscapeMaterialResource::IsUsedWithMeshParticles(FLandscapeMaterialResource *this)

{
  return false;
}

// IsUsedWithMorphTargets @ 145f980f0

bool __thiscall FLandscapeMaterialResource::IsUsedWithMorphTargets(FLandscapeMaterialResource *this)

{
  return false;
}

// IsUsedWithNanite @ 145f98100

bool __thiscall FLandscapeMaterialResource::IsUsedWithNanite(FLandscapeMaterialResource *this)

{
  bool bVar1;
  
  if (this->bIsLayerThumbnail != false) {
    return false;
  }
  bVar1 = FMaterialResource::IsUsedWithNanite((FMaterialResource *)this);
  return bVar1;
}

// IsUsedWithNiagaraMeshParticles @ 145f98120

bool __thiscall
FLandscapeMaterialResource::IsUsedWithNiagaraMeshParticles(FLandscapeMaterialResource *this)

{
  return false;
}

// IsUsedWithNiagaraRibbons @ 145f98130

bool __thiscall
FLandscapeMaterialResource::IsUsedWithNiagaraRibbons(FLandscapeMaterialResource *this)

{
  return false;
}

// IsUsedWithNiagaraSprites @ 145f98140

bool __thiscall
FLandscapeMaterialResource::IsUsedWithNiagaraSprites(FLandscapeMaterialResource *this)

{
  return false;
}

// IsUsedWithParticleSprites @ 145f98150

bool __thiscall
FLandscapeMaterialResource::IsUsedWithParticleSprites(FLandscapeMaterialResource *this)

{
  return false;
}

// IsUsedWithParticleSystem @ 145f98160

bool __thiscall
FLandscapeMaterialResource::IsUsedWithParticleSystem(FLandscapeMaterialResource *this)

{
  return false;
}

// IsUsedWithSkeletalMesh @ 145f98170

bool __thiscall FLandscapeMaterialResource::IsUsedWithSkeletalMesh(FLandscapeMaterialResource *this)

{
  return false;
}

// IsUsedWithSplineMeshes @ 145f98180

bool __thiscall FLandscapeMaterialResource::IsUsedWithSplineMeshes(FLandscapeMaterialResource *this)

{
  return false;
}

// IsUsedWithStaticLighting @ 145f98190

bool __thiscall
FLandscapeMaterialResource::IsUsedWithStaticLighting(FLandscapeMaterialResource *this)

{
  bool bVar1;
  
  if (this->bIsLayerThumbnail != false) {
    return false;
  }
  bVar1 = FMaterialResource::IsUsedWithStaticLighting((FMaterialResource *)this);
  return bVar1;
}

// IsUsedWithWater @ 145f981c0

bool __thiscall FLandscapeMaterialResource::IsUsedWithWater(FLandscapeMaterialResource *this)

{
  return false;
}

// ShouldCache @ 145fa2480

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
FLandscapeMaterialResource::ShouldCache
          (FLandscapeMaterialResource *this,FShaderType *param_1,FVertexFactoryType *param_2)

{
  FName *pFVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  undefined1 uVar6;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar7;
  ulonglong uVar8;
  FNameEntryId FVar9;
  FName FVar10;
  FName *pFVar11;
  FName FVar12;
  FName *pFVar13;
  FName FVar14;
  int *piVar15;
  FName FVar16;
  FName FVar17;
  FName FVar18;
  undefined1 auStackY_1b8 [32];
  undefined1 local_178;
  undefined1 local_177;
  undefined1 local_176;
  undefined1 local_175;
  undefined1 local_174;
  undefined1 local_173;
  undefined1 local_172 [2];
  FName local_170;
  int *local_168;
  FName local_160;
  FName aFStack_158 [2];
  FName local_148;
  FName FStack_140;
  FName local_138;
  FName FStack_130;
  FName local_128;
  FName FStack_120;
  FName local_118;
  FName FStack_110;
  FName local_108 [2];
  FName local_f8;
  FName FStack_f0;
  FName local_e8;
  FName FStack_e0;
  FName local_d8;
  FName FStack_d0;
  FName local_c8;
  FName FStack_c0;
  FName local_b8;
  FName FStack_b0;
  FName local_a8;
  FName FStack_a0;
  FName local_98;
  FName FStack_90;
  FName local_88;
  FName FStack_80;
  FName local_78;
  FName FStack_70;
  FName local_68;
  FName FStack_60;
  FName local_58;
  FName FStack_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  if (this->bIsLayerThumbnail == false) {
    bVar5 = FMaterial::ShouldCache((FMaterial *)this,param_1,param_2);
    if (bVar5) {
      if ((param_2 == (FVertexFactoryType *)0x0) || ((param_2->Flags & SupportsLandscape) == None))
      {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9d4c) <
             `public:_static_class_TArray<FName,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_FLandscapeMaterialResource::GetRasterizeShaderTypes(void)'
             ::__l2::_thread_safe_static_guard_0__) &&
           (_Init_thread_header(&`public:_static_class_TArray<FName,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_FLandscapeMaterialResource::GetRasterizeShaderTypes(void)'
                                 ::__l2::_thread_safe_static_guard_0__),
           `public:_static_class_TArray<FName,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_FLandscapeMaterialResource::GetRasterizeShaderTypes(void)'
           ::__l2::_thread_safe_static_guard_0__ == -1)) {
          ::FName::FName(&local_d8,L"FHWRasterizeVS");
          ::FName::FName(&FStack_d0,L"FHWRasterizeMS");
          ::FName::FName(&local_c8,L"FHWRasterizePS");
          ::FName::FName(&FStack_c0,L"FMicropolyRasterizeCS");
          _ShaderTypes = (FName *)0x0;
          DAT_15519b1c0 = 4;
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,4,4,0,(ForAnyElementType *)
                             &`public:_static_class_TArray<FName,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_FLandscapeMaterialResource::GetRasterizeShaderTypes(void)'
                              ::__l2::ShaderTypes,4,(int *)&DAT_15519b1c4);
          pFVar1 = _ShaderTypes;
          *_ShaderTypes = local_d8;
          pFVar1[1] = FStack_d0;
          pFVar1[2] = local_c8;
          pFVar1[3] = FStack_c0;
          atexit(`FLandscapeMaterialResource::GetRasterizeShaderTypes'::__l2::
                 _dynamic_atexit_destructor_for__ShaderTypes__);
          _Init_thread_footer(&`public:_static_class_TArray<FName,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_FLandscapeMaterialResource::GetRasterizeShaderTypes(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
        uVar4 = DAT_15519b1c0;
        uVar8 = (ulonglong)(int)DAT_15519b1c0;
        pFVar1 = _ShaderTypes + uVar8;
        pFVar11 = _ShaderTypes;
        while( true ) {
          if ((uint)uVar8 != uVar4) {
            `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_172);
            uVar8 = (ulonglong)DAT_15519b1c0;
          }
          pFVar13 = (FName *)0x0;
          if ((pFVar11 == pFVar1) || (pFVar13 = pFVar11, *pFVar11 == param_1->TypeName)) break;
          pFVar11 = pFVar11 + 1;
        }
        return pFVar13 != (FName *)0x0;
      }
      FVar14.ComparisonIndex.Value = 0;
      FVar14.Number = 0;
      piVar15 = (int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d4c)
      ;
      local_168 = piVar15;
      if ((*piVar15 <
           `public:_static_class_TArray<FName,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_FLandscapeMaterialResource::GetGrassShaderTypes(void)'
           ::__l2::_thread_safe_static_guard_0__) &&
         (_Init_thread_header(&`public:_static_class_TArray<FName,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_FLandscapeMaterialResource::GetGrassShaderTypes(void)'
                               ::__l2::_thread_safe_static_guard_0__),
         `public:_static_class_TArray<FName,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_FLandscapeMaterialResource::GetGrassShaderTypes(void)'
         ::__l2::_thread_safe_static_guard_0__ == -1)) {
        ::FName::FName(&local_f8,L"FLandscapeGrassWeightVS");
        ::FName::FName(&FStack_f0,L"FLandscapeGrassWeightPS");
        ::FName::FName(&local_e8,L"FLandscapePhysicalMaterialVS");
        ::FName::FName(&FStack_e0,L"FLandscapePhysicalMaterialPS");
        _ShaderTypes = 0;
        `public:_static_class_TArray<FName,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_FLandscapeMaterialResource::GetGrassShaderTypes(void)'
        ::__l2::ShaderTypes_4 = 0;
        DAT_15519b178 = 4;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,4,0,(ForAnyElementType *)
                           &`public:_static_class_TArray<FName,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_FLandscapeMaterialResource::GetGrassShaderTypes(void)'
                            ::__l2::ShaderTypes,4,(int *)&DAT_15519b17c);
        FVar10 = _ShaderTypes;
        *(FName *)_ShaderTypes = local_f8;
        *(FName *)((longlong)FVar10 + 8) = FStack_f0;
        *(FName *)((longlong)FVar10 + 0x10) = local_e8;
        *(FName *)((longlong)FVar10 + 0x18) = FStack_e0;
        atexit(`FLandscapeMaterialResource::GetGrassShaderTypes'::__l2::
               _dynamic_atexit_destructor_for__ShaderTypes__);
        _Init_thread_footer(&`public:_static_class_TArray<FName,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_FLandscapeMaterialResource::GetGrassShaderTypes(void)'
                             ::__l2::_thread_safe_static_guard_0__);
      }
      uVar4 = DAT_15519b178;
      uVar8 = (ulonglong)(int)DAT_15519b178;
      FVar10 = (FName)((longlong)_ShaderTypes + uVar8 * 8);
      FVar17 = _ShaderTypes;
      while( true ) {
        if ((uint)uVar8 != uVar4) {
          `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&local_176);
          uVar8 = (ulonglong)DAT_15519b178;
        }
        FVar18 = FVar14;
        if ((FVar17 == FVar10) || (FVar18 = FVar17, *(FName *)FVar17 == param_1->TypeName)) break;
        FVar17 = (FName)((longlong)FVar17 + 8);
      }
      if ((*piVar15 <
           `public:_static_class_TArray<FName,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_FLandscapeMaterialResource::GetGPULightmassShaderTypes(void)'
           ::__l2::_thread_safe_static_guard_0__) &&
         (_Init_thread_header(&`public:_static_class_TArray<FName,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_FLandscapeMaterialResource::GetGPULightmassShaderTypes(void)'
                               ::__l2::_thread_safe_static_guard_0__),
         `public:_static_class_TArray<FName,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_FLandscapeMaterialResource::GetGPULightmassShaderTypes(void)'
         ::__l2::_thread_safe_static_guard_0__ == -1)) {
        ::FName::FName(&local_148,L"TLightmapMaterialCHS<true>");
        ::FName::FName(&FStack_140,L"TLightmapMaterialCHS<false>");
        ::FName::FName(&local_138,L"FVLMVoxelizationVS");
        ::FName::FName(&FStack_130,L"FVLMVoxelizationGS");
        ::FName::FName(&local_128,L"FVLMVoxelizationPS");
        ::FName::FName(&FStack_120,L"FLightmapGBufferVS");
        ::FName::FName(&local_118,L"FLightmapGBufferPS");
        ::FName::FName(&FStack_110,L"FGPULightmassCHS");
        ::FName::FName(local_108,L"FGPULightmassCHS_AHS");
        _ShaderTypes = 0;
        `public:_static_class_TArray<FName,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_FLandscapeMaterialResource::GetGPULightmassShaderTypes(void)'
        ::__l2::ShaderTypes_4 = 0;
        DAT_15519b160 = 9;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,9,0,(ForAnyElementType *)
                           &`public:_static_class_TArray<FName,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_FLandscapeMaterialResource::GetGPULightmassShaderTypes(void)'
                            ::__l2::ShaderTypes,9,(int *)&DAT_15519b164);
        FVar10 = _ShaderTypes;
        *(FName *)_ShaderTypes = local_148;
        *(FName *)((longlong)FVar10 + 8) = FStack_140;
        *(FName *)((longlong)FVar10 + 0x10) = local_138;
        *(FName *)((longlong)FVar10 + 0x18) = FStack_130;
        *(FName *)((longlong)FVar10 + 0x20) = local_128;
        *(FName *)((longlong)FVar10 + 0x28) = FStack_120;
        *(FName *)((longlong)FVar10 + 0x30) = local_118;
        *(FName *)((longlong)FVar10 + 0x38) = FStack_110;
        *(FName *)((longlong)FVar10 + 0x40) = local_108[0];
        atexit(`FLandscapeMaterialResource::GetGPULightmassShaderTypes'::__l2::
               _dynamic_atexit_destructor_for__ShaderTypes__);
        _Init_thread_footer(&`public:_static_class_TArray<FName,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_FLandscapeMaterialResource::GetGPULightmassShaderTypes(void)'
                             ::__l2::_thread_safe_static_guard_0__);
      }
      uVar4 = DAT_15519b160;
      uVar8 = (ulonglong)(int)DAT_15519b160;
      FVar10 = (FName)((longlong)_ShaderTypes + uVar8 * 8);
      FVar17 = _ShaderTypes;
      while( true ) {
        if ((uint)uVar8 != uVar4) {
          `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&local_175);
          uVar8 = (ulonglong)DAT_15519b160;
        }
        FVar16 = FVar14;
        if ((FVar17 == FVar10) || (FVar16 = FVar17, *(FName *)FVar17 == param_1->TypeName)) break;
        FVar17 = (FName)((longlong)FVar17 + 8);
      }
      if ((*local_168 <
           `public:_static_class_TArray<FName,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_FLandscapeMaterialResource::GetRuntimeVirtualTextureShaderTypes(void)'
           ::__l2::_thread_safe_static_guard_0__) &&
         (_Init_thread_header(&`public:_static_class_TArray<FName,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_FLandscapeMaterialResource::GetRuntimeVirtualTextureShaderTypes(void)'
                               ::__l2::_thread_safe_static_guard_0__),
         `public:_static_class_TArray<FName,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_FLandscapeMaterialResource::GetRuntimeVirtualTextureShaderTypes(void)'
         ::__l2::_thread_safe_static_guard_0__ == -1)) {
        ::FName::FName(&local_b8,L"TVirtualTextureVSBaseColor");
        ::FName::FName(&FStack_b0,L"TVirtualTextureVSBaseColorNormal");
        ::FName::FName(&local_a8,L"TVirtualTextureVSBaseColorNormalSpecular");
        ::FName::FName(&FStack_a0,L"TVirtualTextureVSBaseColorNormalRoughness");
        ::FName::FName(&local_98,L"TVirtualTextureVSMask4");
        ::FName::FName(&FStack_90,L"TVirtualTextureVSWorldHeight");
        ::FName::FName(&local_88,L"TVirtualTextureVSDisplacement");
        ::FName::FName(&FStack_80,L"TVirtualTexturePSBaseColor");
        ::FName::FName(&local_78,L"TVirtualTexturePSBaseColorNormal");
        ::FName::FName(&FStack_70,L"TVirtualTexturePSBaseColorNormalSpecular");
        ::FName::FName(&local_68,L"TVirtualTexturePSBaseColorNormalRoughness");
        ::FName::FName(&FStack_60,L"TVirtualTexturePSMask4");
        ::FName::FName(&local_58,L"TVirtualTexturePSWorldHeight");
        ::FName::FName(&FStack_50,L"TVirtualTexturePSDisplacement");
        _ShaderTypes = 0;
        `public:_static_class_TArray<FName,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_FLandscapeMaterialResource::GetRuntimeVirtualTextureShaderTypes(void)'
        ::__l2::ShaderTypes_4 = 0;
        DAT_15519b190 = 0xe;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,0xe,0,
                   (ForAnyElementType *)
                   &`public:_static_class_TArray<FName,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_FLandscapeMaterialResource::GetRuntimeVirtualTextureShaderTypes(void)'
                    ::__l2::ShaderTypes,0xe,(int *)&DAT_15519b194);
        FVar10 = _ShaderTypes;
        *(FName *)_ShaderTypes = local_b8;
        *(FName *)((longlong)FVar10 + 8) = FStack_b0;
        *(FName *)((longlong)FVar10 + 0x10) = local_a8;
        *(FName *)((longlong)FVar10 + 0x18) = FStack_a0;
        *(FName *)((longlong)FVar10 + 0x20) = local_98;
        *(FName *)((longlong)FVar10 + 0x28) = FStack_90;
        *(FName *)((longlong)FVar10 + 0x30) = local_88;
        *(FName *)((longlong)FVar10 + 0x38) = FStack_80;
        *(FName *)((longlong)FVar10 + 0x40) = local_78;
        *(FName *)((longlong)FVar10 + 0x48) = FStack_70;
        *(FName *)((longlong)FVar10 + 0x50) = local_68;
        *(FName *)((longlong)FVar10 + 0x58) = FStack_60;
        *(FName *)((longlong)FVar10 + 0x60) = local_58;
        *(FName *)((longlong)FVar10 + 0x68) = FStack_50;
        atexit(`FLandscapeMaterialResource::GetRuntimeVirtualTextureShaderTypes'::__l2::
               _dynamic_atexit_destructor_for__ShaderTypes__);
        _Init_thread_footer(&`public:_static_class_TArray<FName,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_FLandscapeMaterialResource::GetRuntimeVirtualTextureShaderTypes(void)'
                             ::__l2::_thread_safe_static_guard_0__);
      }
      uVar4 = DAT_15519b190;
      uVar8 = (ulonglong)(int)DAT_15519b190;
      local_170 = (FName)((longlong)_ShaderTypes + uVar8 * 8);
      FVar10 = _ShaderTypes;
      while( true ) {
        if ((uint)uVar8 != uVar4) {
          `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&local_174);
          uVar8 = (ulonglong)DAT_15519b190;
        }
        FVar17 = FVar14;
        if ((FVar10 == local_170) || (FVar17 = FVar10, *(FName *)FVar10 == param_1->TypeName))
        break;
        FVar10 = (FName)((longlong)FVar10 + 8);
      }
      if ((*local_168 <
           `public:_static_class_TArray<FName,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_FLandscapeMaterialResource::GetLumenCardShaderTypes(void)'
           ::__l2::_thread_safe_static_guard_0__) &&
         (_Init_thread_header(&`public:_static_class_TArray<FName,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_FLandscapeMaterialResource::GetLumenCardShaderTypes(void)'
                               ::__l2::_thread_safe_static_guard_0__),
         `public:_static_class_TArray<FName,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_FLandscapeMaterialResource::GetLumenCardShaderTypes(void)'
         ::__l2::_thread_safe_static_guard_0__ == -1)) {
        ::FName::FName(&local_160,L"FLumenCardVS");
        ::FName::FName(aFStack_158,L"FLumenCardPS");
        _ShaderTypes = 0;
        `public:_static_class_TArray<FName,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_FLandscapeMaterialResource::GetLumenCardShaderTypes(void)'
        ::__l2::ShaderTypes_4 = 0;
        DAT_15519b1a8 = 2;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,2,0,(ForAnyElementType *)
                           &`public:_static_class_TArray<FName,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_FLandscapeMaterialResource::GetLumenCardShaderTypes(void)'
                            ::__l2::ShaderTypes,2,(int *)&DAT_15519b1ac);
        FVar10 = _ShaderTypes;
        *(FName *)_ShaderTypes = local_160;
        *(FName *)((longlong)FVar10 + 8) = aFStack_158[0];
        atexit(`FLandscapeMaterialResource::GetLumenCardShaderTypes'::__l2::
               _dynamic_atexit_destructor_for__ShaderTypes__);
        _Init_thread_footer(&`public:_static_class_TArray<FName,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_FLandscapeMaterialResource::GetLumenCardShaderTypes(void)'
                             ::__l2::_thread_safe_static_guard_0__);
      }
      uVar8 = (ulonglong)(int)DAT_15519b1a8;
      local_170.ComparisonIndex.Value = DAT_15519b1a8;
      local_160 = (FName)((longlong)_ShaderTypes + uVar8 * 8);
      FVar10 = _ShaderTypes;
      FVar9.Value = DAT_15519b1a8;
      while( true ) {
        if ((uint)uVar8 != FVar9.Value) {
          `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&local_173);
          uVar8 = (ulonglong)DAT_15519b1a8;
          FVar9.Value = local_170.ComparisonIndex.Value;
        }
        FVar12 = FVar14;
        if ((FVar10 == local_160) || (FVar12 = FVar10, *(FName *)FVar10 == param_1->TypeName))
        break;
        FVar10 = (FName)((longlong)FVar10 + 8);
      }
      if ((FVar18 != (FName)0x0) ||
         (((FVar17 != (FName)0x0 || (FVar16 != (FName)0x0)) || (bVar5 = false, FVar12 != (FName)0x0)
          ))) {
        bVar5 = true;
      }
      if ((*local_168 <
           `public:_virtual_bool___cdecl_FLandscapeMaterialResource::ShouldCache(FShaderType_const*___ptr64,FVertexFactoryType_const*___ptr64)const___ptr64'
           ::__l61::_thread_safe_static_guard_1__) &&
         (_Init_thread_header(&`public:_virtual_bool___cdecl_FLandscapeMaterialResource::ShouldCache(FShaderType_const*___ptr64,FVertexFactoryType_const*___ptr64)const___ptr64'
                               ::__l61::_thread_safe_static_guard_1__),
         `public:_virtual_bool___cdecl_FLandscapeMaterialResource::ShouldCache(FShaderType_const*___ptr64,FVertexFactoryType_const*___ptr64)const___ptr64'
         ::__l61::_thread_safe_static_guard_1__ == -1)) {
        ::FName::FName(&`public:_virtual_bool___cdecl_FLandscapeMaterialResource::ShouldCache(FShaderType_const*___ptr64,FVertexFactoryType_const*___ptr64)const___ptr64'
                        ::__l61::RayTracingDynamicGeometryConverterCS,
                       L"FRayTracingDynamicGeometryConverterCS");
        _Init_thread_footer(&`public:_virtual_bool___cdecl_FLandscapeMaterialResource::ShouldCache(FShaderType_const*___ptr64,FVertexFactoryType_const*___ptr64)const___ptr64'
                             ::__l61::_thread_safe_static_guard_1__);
      }
      if ((param_1->TypeName ==
           `public:_virtual_bool___cdecl_FLandscapeMaterialResource::ShouldCache(FShaderType_const*___ptr64,FVertexFactoryType_const*___ptr64)const___ptr64'
           ::__l61::RayTracingDynamicGeometryConverterCS) ||
         ((param_2 == &FLandscapeFixedGridVertexFactory::StaticType) == bVar5)) {
        return true;
      }
    }
  }
  else {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `public:_virtual_bool___cdecl_FLandscapeMaterialResource::ShouldCache(FShaderType_const*___ptr64,FVertexFactoryType_const*___ptr64)const___ptr64'
         ::__l5::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_virtual_bool___cdecl_FLandscapeMaterialResource::ShouldCache(FShaderType_const*___ptr64,FVertexFactoryType_const*___ptr64)const___ptr64'
                             ::__l5::_thread_safe_static_guard_0__),
       `public:_virtual_bool___cdecl_FLandscapeMaterialResource::ShouldCache(FShaderType_const*___ptr64,FVertexFactoryType_const*___ptr64)const___ptr64'
       ::__l5::_thread_safe_static_guard_0__ == -1)) {
      ::FName::FName(&`public:_virtual_bool___cdecl_FLandscapeMaterialResource::ShouldCache(FShaderType_const*___ptr64,FVertexFactoryType_const*___ptr64)const___ptr64'
                      ::__l5::LocalVertexFactory,L"FLocalVertexFactory");
      _Init_thread_footer(&`public:_virtual_bool___cdecl_FLandscapeMaterialResource::ShouldCache(FShaderType_const*___ptr64,FVertexFactoryType_const*___ptr64)const___ptr64'
                           ::__l5::_thread_safe_static_guard_0__);
    }
    uVar8 = (ulonglong)GMaxRHIShaderPlatform;
    if ((FGenericDataDrivenShaderPlatformInfo::Infos[uVar8].bContainsValidPlatformInfo == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid(Platform)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                           ,0xe2,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    if (((FGenericDataDrivenShaderPlatformInfo::Infos[uVar8].MaxFeatureLevel != ES3_1) &&
        (param_2 != (FVertexFactoryType *)0x0)) &&
       (param_2->TypeName ==
        `public:_virtual_bool___cdecl_FLandscapeMaterialResource::ShouldCache(FShaderType_const*___ptr64,FVertexFactoryType_const*___ptr64)const___ptr64'
        ::__l5::LocalVertexFactory)) {
      pTVar7 = GetAllowedShaderTypesInThumbnailRender();
      pFVar11 = (FName *)(pTVar7->AllocatorInstance).Data;
      iVar2 = pTVar7->ArrayNum;
      pFVar1 = pFVar11 + iVar2;
      while( true ) {
        if (pTVar7->ArrayNum != iVar2) {
          `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&local_178);
        }
        if (pFVar11 == pFVar1) break;
        if (*pFVar11 == param_1->TypeName) goto LAB_145fa25e4;
        pFVar11 = pFVar11 + 1;
      }
      if ((char)param_1->Frequency == '\b') goto LAB_145fa25f4;
      pTVar7 = GetExcludedShaderTypesInThumbnailRender();
      pFVar11 = (FName *)(pTVar7->AllocatorInstance).Data;
      iVar2 = pTVar7->ArrayNum;
      pFVar1 = pFVar11 + iVar2;
      while( true ) {
        if (pTVar7->ArrayNum != iVar2) {
          `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&local_177);
        }
        if (pFVar11 == pFVar1) break;
        if (*pFVar11 == param_1->TypeName) {
LAB_145fa25f4:
          if ((byte)LogLandscape._0_1_ < 7) {
            return false;
          }
          UE::Logging::Private::BasicLog<7>
                    (&`public:_virtual_bool___cdecl_FLandscapeMaterialResource::ShouldCache(FShaderType_const*___ptr64,FVertexFactoryType_const*___ptr64)const___ptr64'
                      ::__l17::LOG_Static,(FLogCategoryBase *)&LogLandscape);
          return false;
        }
        pFVar11 = pFVar11 + 1;
      }
      if (2 < (byte)LogLandscape._0_1_) {
        UE::Logging::Private::BasicLog<3>
                  (&`public:_virtual_bool___cdecl_FLandscapeMaterialResource::ShouldCache(FShaderType_const*___ptr64,FVertexFactoryType_const*___ptr64)const___ptr64'
                    ::__l37::LOG_Static,(FLogCategoryBase *)&LogLandscape);
      }
LAB_145fa25e4:
      bVar5 = FMaterial::ShouldCache((FMaterial *)this,param_1,param_2);
      return bVar5;
    }
  }
  return false;
}

