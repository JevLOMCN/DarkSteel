// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 20

// FMaterialShaderMap @ 147f64f00

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FMaterialShaderMap * __thiscall FMaterialShaderMap::FMaterialShaderMap(FMaterialShaderMap *this)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  code *pcVar3;
  FMaterialShaderMapId *pFVar4;
  bool bVar5;
  FMaterialShaderMap *pFVar6;
  longlong lVar7;
  FMaterialShaderMap *local_18 [2];
  
  FShaderMapBase::FShaderMapBase((FShaderMapBase *)this);
  this->_padding_ =
       (longlong)&_vftable__for__TShaderMap<FMaterialShaderMapContent,FShaderMapPointerTable>__;
  (this->UniformBufferLayout).Reference = (FRHIUniformBufferLayout *)0x0;
  this->_padding_ = (longlong)&_vftable__for__FDeferredCleanupInterface__;
  (this->ShaderMapId).CookedShaderMapIdHash.Hash[0] = '\0';
  (this->ShaderMapId).CookedShaderMapIdHash.Hash[1] = '\0';
  (this->ShaderMapId).CookedShaderMapIdHash.Hash[2] = '\0';
  (this->ShaderMapId).CookedShaderMapIdHash.Hash[3] = '\0';
  (this->ShaderMapId).CookedShaderMapIdHash.Hash[4] = '\0';
  (this->ShaderMapId).CookedShaderMapIdHash.Hash[5] = '\0';
  (this->ShaderMapId).CookedShaderMapIdHash.Hash[6] = '\0';
  (this->ShaderMapId).CookedShaderMapIdHash.Hash[7] = '\0';
  pFVar4 = &this->ShaderMapId;
  (pFVar4->CookedShaderMapIdHash).Hash[8] = '\0';
  (pFVar4->CookedShaderMapIdHash).Hash[9] = '\0';
  (pFVar4->CookedShaderMapIdHash).Hash[10] = '\0';
  (pFVar4->CookedShaderMapIdHash).Hash[0xb] = '\0';
  (pFVar4->CookedShaderMapIdHash).Hash[0xc] = '\0';
  (pFVar4->CookedShaderMapIdHash).Hash[0xd] = '\0';
  (pFVar4->CookedShaderMapIdHash).Hash[0xe] = '\0';
  (pFVar4->CookedShaderMapIdHash).Hash[0xf] = '\0';
  pFVar4 = &this->ShaderMapId;
  (pFVar4->CookedShaderMapIdHash).Hash[0x10] = '\0';
  (pFVar4->CookedShaderMapIdHash).Hash[0x11] = '\0';
  (pFVar4->CookedShaderMapIdHash).Hash[0x12] = '\0';
  (pFVar4->CookedShaderMapIdHash).Hash[0x13] = '\0';
  *(undefined8 *)&(this->ShaderMapId).LayoutParams.Flags = 0;
  (this->ShaderMapId).QualityLevel = High;
  (this->ShaderMapId).FeatureLevel = SM5;
  (this->ShaderMapId).LayoutParams.MaxFieldAlignment = 0xffffffff;
  this->bDeletedThroughDeferredCleanup = false;
  this->CompileTime = 0.0;
  puVar2 = &this->field_0x80;
  this->bRegistered = 0;
  this->bIsFromODSC = 0;
  this->bIsPersistent = 0;
  this->bCompiledSuccessfully = 1;
  this->bCompilationFinalized = 1;
  EnterCriticalSection((LPCRITICAL_SECTION)&AllMaterialShaderMapsGuard);
  local_18[0] = this;
  if (((AllMaterialShaderMaps.AllocatorInstance.Data <= (FScriptContainerElement *)local_18) &&
      ((FScriptContainerElement *)local_18 <
       AllMaterialShaderMaps.AllocatorInstance.Data + (longlong)AllMaterialShaderMaps.ArrayMax * 8))
     && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar5)) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FMaterialShaderMap *)(*pcVar3)();
    return pFVar6;
  }
  if (AllMaterialShaderMaps.ArrayNum == AllMaterialShaderMaps.ArrayMax) {
    AllMaterialShaderMaps.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x808,&AllMaterialShaderMaps.AllocatorInstance,&AllMaterialShaderMaps.ArrayMax);
  }
  lVar7 = (longlong)AllMaterialShaderMaps.ArrayNum;
  AllMaterialShaderMaps.ArrayNum = AllMaterialShaderMaps.ArrayNum + 1;
  *(FMaterialShaderMap **)(AllMaterialShaderMaps.AllocatorInstance.Data + lVar7 * 8) = local_18[0];
  LeaveCriticalSection((LPCRITICAL_SECTION)&AllMaterialShaderMapsGuard);
  return this;
}

// ~FMaterialShaderMap @ 147f68a70

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ESubstrateBsdfFeature": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FMaterialShaderMap::~FMaterialShaderMap(FMaterialShaderMap *this)

{
  float fVar1;
  FName FVar2;
  FRHIUniformBufferLayout *this_00;
  code *pcVar3;
  ForAnyElementType _Src;
  bool bVar4;
  EShaderPlatform EVar5;
  uint uVar6;
  uint uVar7;
  FString *pFVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<FStat_STAT_Shaders_NumShadersLoaded> FVar10;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  FCsvProfiler *this_03;
  uchar auVar11 [8];
  FName local_res8;
  FName local_res10;
  FName local_res18;
  FName local_res20;
  FString local_88;
  FString local_78;
  FStatMessage local_68;
  FString local_58 [2];
  
  this->_padding_ =
       (longlong)&_vftable__for__TShaderMap<FMaterialShaderMapContent,FShaderMapPointerTable>__;
  this->_padding_ = (longlong)&_vftable__for__FDeferredCleanupInterface__;
  if (this->bDeletedThroughDeferredCleanup == false) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("bDeletedThroughDeferredCleanup",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialShader.cpp"
                       ,0xeee,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (this->bRegistered != 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bRegistered",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialShader.cpp"
                       ,0xeef,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if ((GShaderCompilerStats != (FShaderCompilerStats *)0x0) && (this->_padding_ != 0)) {
    ::FString::FString(&local_78,L"");
    if (local_78.Data.ArrayNum < 2) {
      ::FString::operator=(&local_78,L"");
    }
    pFVar8 = ::FString::FString(local_58,L"");
    _Src.Data = local_78.Data.AllocatorInstance.Data;
    local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_78.Data.ArrayNum == 0) {
      local_88.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_78.Data.ArrayNum,0,(ForAnyElementType *)&local_88,local_78.Data.ArrayNum,
                 &local_88.Data.ArrayMax);
      memcpy(local_88.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_78.Data.ArrayNum * 2);
    }
    if ((FShaderMapContent *)this->_padding_ == (FShaderMapContent *)0x0) {
      EVar5 = SP_NumPlatforms;
    }
    else {
      EVar5 = FShaderMapContent::GetShaderPlatform((FShaderMapContent *)this->_padding_);
    }
    fVar1 = this->CompileTime;
    uVar6 = FMaterialShaderMapContent::GetNumShaders((FMaterialShaderMapContent *)this->_padding_);
    FShaderCompilerStats::RegisterCookedShaders
              (GShaderCompilerStats,uVar6,fVar1,EVar5,&local_88,pFVar8);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&AllMaterialShaderMapsGuard);
  local_res8 = (FName)this;
  TArray<FMaterialShaderMap_*,TSizedDefaultAllocator<32>_>::RemoveSwap
            (&AllMaterialShaderMaps,(FMaterialShaderMap **)&local_res8,Default);
  LeaveCriticalSection((LPCRITICAL_SECTION)&AllMaterialShaderMapsGuard);
  if ((FShaderMapContent *)this->_padding_ != (FShaderMapContent *)0x0) {
    uVar6 = FShaderMapContent::GetNumShaders((FShaderMapContent *)this->_padding_);
    uVar7 = FMaterialShaderMapContent::GetNumShaders((FMaterialShaderMapContent *)this->_padding_);
    uVar7 = uVar7 - uVar6;
    auVar11[4] = '\0';
    auVar11[5] = '\0';
    auVar11[6] = '\0';
    auVar11[7] = '\0';
    auVar11._0_4_ = uVar7;
    if (uVar7 != 0) {
      FVar10 = StatPtr_STAT_Shaders_NumShadersLoaded;
      if (StatPtr_STAT_Shaders_NumShadersLoaded ==
          (FThreadSafeStaticStat<FStat_STAT_Shaders_NumShadersLoaded>)0x0) {
        pFVar9 = ::FName::FName(&local_res18,"STAT_Shaders_NumShadersLoaded");
        FVar10 = (FThreadSafeStaticStat<FStat_STAT_Shaders_NumShadersLoaded>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Shaders_NumShadersLoaded,
                            *pFVar9,L"Num Shaders Loaded","STATGROUP_Shaders","STATCAT_Advanced",
                            L"Shader Compression",true,false,ST_int64,false,false,MCR_Invalid);
      }
      FVar2 = *(FName *)FVar10;
      local_res8 = FVar2;
      if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        this_01 = TlsGetValue(FThreadStats::TlsSlot);
        if (this_01 == (FThreadStats *)0x0) {
          this_02 = FThreadStatsPool::Get();
          this_01 = FThreadStatsPool::GetFromPool(this_02);
        }
        local_68.NameAndInfo.Number = FVar2.Number & 0xffffbfff | 0xb000;
        local_res10 = FVar2;
        local_68.StatData.Pad = auVar11;
        local_68.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
        FThreadStats::AddStatMessage(this_01,&local_68);
        FStatsTrace::Add(&local_res10,-(longlong)auVar11);
        if (this_01->ScopeCount == 0) {
          FThreadStats::Flush(this_01,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(this_01,false,false);
        }
      }
    }
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        this_03 = FCsvProfiler::Get();
        uVar6 = _GCsvCategory_Shaders.Index;
        pFVar9 = ::FName::FName(&local_res20,L"NumShadersLoaded");
        CsvStatNumShadersLoaded =
             FCsvProfiler::GetOrCreatePersistentCustomStatInt(this_03,*pFVar9,uVar6,false);
        _Init_thread_footer(&::_TSS0);
      }
    }
    LOCK();
    CsvStatNumShadersLoaded->Value = (atomic<int>)((int)CsvStatNumShadersLoaded->Value - uVar7);
    UNLOCK();
  }
  this_00 = (this->UniformBufferLayout).Reference;
  if (this_00 != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  this->_padding_ = (longlong)&___7FDeferredCleanupInterface__6B_;
  FShaderMapBase::~FShaderMapBase((FShaderMapBase *)this);
  return;
}

// AddRef @ 147f6d890

void __thiscall FMaterialShaderMap::AddRef(FMaterialShaderMap *this)

{
  code *pcVar1;
  bool bVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&GIdToMaterialShaderMapCS);
  if (this->bDeletedThroughDeferredCleanup != false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bDeletedThroughDeferredCleanup",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialShader.cpp"
                       ,0xe9f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->NumRefs = this->NumRefs + 1;
                    /* WARNING: Could not recover jumptable at 0x000147f6d8e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&GIdToMaterialShaderMapCS);
  return;
}

// CollectPSOPrecacheData @ 147f72470

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
/* WARNING: Enum "ESubstrateBsdfFeature": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */

TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_> * __thiscall
FMaterialShaderMap::CollectPSOPrecacheData
          (FMaterialShaderMap *this,
          TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FMaterialPSOPrecacheParams *param_1)

{
  Type TVar1;
  code *pcVar2;
  bool bVar3;
  TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_> *pTVar4;
  FMeshMaterialShaderMap *pFVar5;
  ulonglong uVar6;
  longlong *plVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  bool bVar11;
  undefined1 auStackY_218 [32];
  ForAnyElementType local_1e8;
  undefined8 local_1e0;
  int *local_1d8;
  FSceneTexturesConfigInitSettings local_1c8;
  FSceneTexturesConfig local_1a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_218;
  bVar11 = -1 < CpuChannel->Enabled;
  if (bVar11) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId3419,"FMaterialShaderMap::CollectPSOPrecacheData",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialShader.cpp"
               ,0xd5b);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId3419);
  }
  if (((((param_1->VertexFactoryData).VertexFactoryType)->Flags & SupportsPSOPrecaching) == None) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("PrecacheParams.VertexFactoryData.VertexFactoryType->SupportsPSOPrecaching()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialShader.cpp"
                         ,0xd5e,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
    return pTVar4;
  }
  ConditionalBreakOnPSOPrecacheMaterial(param_1->Material,-1);
  if (((FMaterialShaderMapContent *)this->_padding_ == (FMaterialShaderMapContent *)0x0) ||
     (pFVar5 = FMaterialShaderMapContent::GetMeshShaderMap
                         ((FMaterialShaderMapContent *)this->_padding_,
                          &((param_1->VertexFactoryData).VertexFactoryType)->HashedName),
     pFVar5 == (FMeshMaterialShaderMap *)0x0)) {
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
  }
  else {
    uVar9 = 0;
    local_1c8.FeatureLevel = param_1->FeatureLevel;
    local_1c8.Extent.field0_0x0._s_0 = UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
    local_1a8.Extent.field0_0x0._s_0 = UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
    local_1a8.ColorClearValue.Value.Color[3] = FClearValueBinding::Black.Value.Color[3];
    local_1a8.DepthClearValue.Value.Color[3] = FClearValueBinding::DepthFar.Value.Color[3];
    local_1a8.GBufferParams[0].ShaderPlatform = SP_NumPlatforms;
    local_1a8.GBufferParams[1].ShaderPlatform = SP_NumPlatforms;
    local_1a8.ColorClearValue._0_8_ = FClearValueBinding::Black._0_8_;
    local_1a8.ColorClearValue.Value._4_8_ = FClearValueBinding::Black.Value._4_8_;
    local_1a8.bSupportsXRTargetManagerDepthAlloc = 0;
    local_1a8.bMemorylessMSAA = 0;
    local_1a8.bSamplesCustomStencil = 0;
    local_1a8.bCustomResolveSubpass = 0;
    local_1a8.bPreciseDepthAux = 0;
    local_1a8.bRequiresDepthAux = 0;
    local_1a8.bKeepDepthContent = 1;
    local_1a8.bIsUsingGBuffers = 0;
    local_1a8.bRequireMultiView = 0;
    local_1c8.bRequireMultiView = false;
    local_1c8.bRequiresAlphaChannel = false;
    local_1c8.bSupportsXRTargetManagerDepthAlloc = false;
    local_1c8.ExtraSceneColorCreateFlags = None;
    local_1c8.ExtraSceneDepthCreateFlags = None;
    local_1a8.Extracts = All;
    local_1a8.ShadingPath = Num;
    local_1a8.FeatureLevel = SM5;
    local_1a8.ShaderPlatform = SP_PCD3D_SM5;
    local_1a8.SmallDepthDownsampleFactor = 2;
    local_1a8.NumSamples = 1;
    local_1a8.EditorPrimitiveNumSamples = 1;
    local_1a8.ColorFormat = PF_Unknown;
    local_1a8.ColorCreateFlags = None;
    local_1a8.DepthCreateFlags = None;
    local_1a8.ExtraSceneColorCreateFlags = None;
    local_1a8.ExtraSceneDepthCreateFlags = None;
    local_1a8.DepthClearValue._0_8_ = FClearValueBinding::DepthFar._0_8_;
    local_1a8.DepthClearValue.Value._4_8_ = FClearValueBinding::DepthFar.Value._4_8_;
    local_1a8.GBufferParams[0].LegacyFormatIndex = 0;
    local_1a8.GBufferParams[0].bHasVelocity = false;
    local_1a8.GBufferParams[0].bHasTangent = false;
    local_1a8.GBufferParams[0].bHasPrecShadowFactor = false;
    local_1a8.GBufferParams[0].bUsesVelocityDepth = false;
    local_1a8.GBufferParams[0].bHasSingleLayerWaterSeparatedMainLight = false;
    local_1a8.GBufferParams[1].LegacyFormatIndex = 0;
    local_1a8.GBufferParams[1].bHasVelocity = false;
    local_1a8.GBufferParams[1].bHasTangent = false;
    local_1a8.GBufferParams[1].bHasPrecShadowFactor = false;
    local_1a8.GBufferParams[1].bUsesVelocityDepth = false;
    local_1a8.GBufferParams[1].bHasSingleLayerWaterSeparatedMainLight = false;
    local_1a8.GBufferBindings[0].GBufferA.Index = -1;
    local_1a8.GBufferBindings[0].GBufferA.Format = PF_Unknown;
    local_1a8.GBufferBindings[0].GBufferA.Flags = None;
    local_1a8.GBufferBindings[0].GBufferB.Index = -1;
    local_1a8.GBufferBindings[0].GBufferB.Format = PF_Unknown;
    local_1a8.GBufferBindings[0].GBufferB.Flags = None;
    local_1a8.GBufferBindings[0].GBufferC.Index = -1;
    local_1a8.GBufferBindings[0].GBufferC.Format = PF_Unknown;
    local_1a8.GBufferBindings[0].GBufferC.Flags = None;
    local_1a8.GBufferBindings[0].GBufferD.Index = -1;
    local_1a8.GBufferBindings[0].GBufferD.Format = PF_Unknown;
    local_1a8.GBufferBindings[0].GBufferD.Flags = None;
    local_1a8.GBufferBindings[0].GBufferE.Index = -1;
    local_1a8.GBufferBindings[0].GBufferE.Format = PF_Unknown;
    local_1a8.GBufferBindings[0].GBufferE.Flags = None;
    local_1a8.GBufferBindings[0].GBufferVelocity.Index = -1;
    local_1a8.GBufferBindings[0].GBufferVelocity.Format = PF_Unknown;
    local_1a8.GBufferBindings[0].GBufferVelocity.Flags = None;
    local_1a8.GBufferBindings[1].GBufferA.Index = -1;
    local_1a8.GBufferBindings[1].GBufferA.Format = PF_Unknown;
    local_1a8.GBufferBindings[1].GBufferA.Flags = None;
    local_1a8.GBufferBindings[1].GBufferB.Index = -1;
    local_1a8.GBufferBindings[1].GBufferB.Format = PF_Unknown;
    local_1a8.GBufferBindings[1].GBufferB.Flags = None;
    local_1a8.GBufferBindings[1].GBufferC.Index = -1;
    local_1a8.GBufferBindings[1].GBufferC.Format = PF_Unknown;
    local_1a8.GBufferBindings[1].GBufferC.Flags = None;
    local_1a8.GBufferBindings[1].GBufferD.Index = -1;
    local_1a8.GBufferBindings[1].GBufferD.Format = PF_Unknown;
    local_1a8.GBufferBindings[1].GBufferD.Flags = None;
    local_1a8.GBufferBindings[1].GBufferE.Index = -1;
    local_1a8.GBufferBindings[1].GBufferE.Format = PF_Unknown;
    local_1a8.GBufferBindings[1].GBufferE.Flags = None;
    local_1a8.GBufferBindings[1].GBufferVelocity.Index = -1;
    local_1a8.GBufferBindings[1].GBufferVelocity.Format = PF_Unknown;
    local_1a8.GBufferBindings[1].GBufferVelocity.Flags = None;
    local_1a8.bRequiresAlphaChannel = false;
    local_1a8.MobileMultiViewRenderTargetNumLayers = 2;
    FSceneTexturesConfig::Init(&local_1a8,&local_1c8);
    TVar1 = param_1->FeatureLevel;
    local_1e8.Data = (FScriptContainerElement *)0x0;
    local_1e0 = 0;
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x138,8,0x20,&local_1e8,0,(int *)((longlong)&local_1e0 + 4));
    uVar6 = uVar9;
    if (2 < (int)TVar1) {
      uVar6 = 4;
    }
    local_1d8 = (int *)((longlong)FPSOCollectorCreateManager::PSOCollectorCount + uVar6);
    if (0 < *local_1d8) {
      uVar6 = uVar9;
      if (2 < (int)TVar1) {
        uVar6 = 0x400;
      }
      puVar10 = (undefined8 *)
                ((longlong)&FPSOCollectorCreateManager::PSOCollectors[0][0].CreateFunction + uVar6);
      do {
        uVar8 = (uint)uVar9;
        if ((0x3f < uVar8) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index < MaxPSOCollectorCount",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\PSOPrecacheMaterial.h"
                               ,0x3d,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          pTVar4 = (TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
          return pTVar4;
        }
        if (((code *)*puVar10 != (code *)0x0) &&
           (plVar7 = (longlong *)(*(code *)*puVar10)(), plVar7 != (longlong *)0x0)) {
          ConditionalBreakOnPSOPrecacheMaterial(param_1->Material,uVar8);
          (**(code **)(*plVar7 + 8))
                    (plVar7,&local_1a8,param_1->Material,&param_1->VertexFactoryData);
          (**(code **)*plVar7)();
        }
        uVar9 = (ulonglong)(uVar8 + 1);
        puVar10 = puVar10 + 2;
      } while ((int)(uVar8 + 1) < *local_1d8);
    }
    (__return_storage_ptr__->AllocatorInstance).Data = local_1e8.Data;
    __return_storage_ptr__->ArrayNum = (int)local_1e0;
    __return_storage_ptr__->ArrayMax = local_1e0._4_4_;
    local_1e0 = 0;
    local_1e8.Data = (FScriptContainerElement *)0x0;
    DestructItems<FPSOPrecacheData,int>((FPSOPrecacheData *)0x0,0);
    if (local_1e8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1e8.Data);
    }
  }
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return __return_storage_ptr__;
}

// DumpDebugInfo @ 147f744b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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

void __thiscall FMaterialShaderMap::DumpDebugInfo(FMaterialShaderMap *this,FOutputDevice *param_1)

{
  FShader *this_00;
  TIndexedPtrBase<FVertexFactoryType,FVertexFactoryType_*> TVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  longlong *plVar4;
  bool bVar5;
  TIndexedPtrBase<FVertexFactoryType,FVertexFactoryType_*>_u_0 *pTVar6;
  FSHAHash *pFVar7;
  TIndexedPtrBase<FShaderType,FShaderType_*>_u_0 *pTVar8;
  FName FVar9;
  ulonglong uVar10;
  ulonglong *puVar11;
  byte bVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  wchar_t *pwVar16;
  ulonglong uVar17;
  uint uVar18;
  uint uVar19;
  uint *puVar20;
  ForAnyElementType FVar21;
  ForAnyElementType FVar22;
  ForAnyElementType FVar23;
  ForAnyElementType FVar24;
  uint uVar25;
  longlong *plVar26;
  undefined1 auStack_258 [32];
  wchar_t *local_238;
  FScriptContainerElement *local_230;
  FScriptContainerElement *local_228;
  FScriptContainerElement *local_220;
  FScriptContainerElement *local_218;
  wchar_t *local_210;
  ForAnyElementType local_208;
  undefined8 local_200;
  undefined1 local_1f8;
  undefined1 local_1f7;
  undefined1 local_1f6 [6];
  ulonglong local_1f0;
  FMaterialShaderMap *pFStack_1e8;
  FMaterialShaderMap *local_1e0;
  Type local_1d8;
  FScriptContainerElement *local_1d0;
  uint local_1c8;
  uint local_1c4;
  longlong *local_1c0;
  ulonglong local_1b8;
  FString local_1b0;
  FString local_1a0;
  FString local_190;
  FString local_180;
  FString local_170;
  FString local_160;
  FOutputDevice *local_150;
  longlong *local_148;
  uint uStack_140;
  uint uStack_13c;
  TBitArray<FDefaultBitArrayAllocator> *local_138;
  undefined4 uStack_130;
  uint uStack_12c;
  uint local_128;
  uint uStack_124;
  int iStack_120;
  undefined4 uStack_11c;
  int local_118;
  int local_114;
  FScriptContainerElement *local_110;
  longlong *local_108;
  longlong *local_100;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_f8;
  undefined8 uStack_d8;
  undefined1 local_d0 [8];
  undefined1 local_c8 [8];
  FString local_c0;
  FString local_b0;
  undefined1 local_98 [32];
  uint *local_78;
  uint local_70;
  undefined4 local_6c;
  undefined4 local_68;
  int local_64;
  void *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_258;
  local_1d8 = GPrintLogTimes;
  uVar19 = 0;
  GPrintLogTimes = None;
  local_1e0 = this;
  local_150 = param_1;
  FOutputDevice::Log(param_1,
                     L"Frequency, Target, VFType, ShaderType, SourceHash, VFSourceHash, OutputHash, IsShaderPipeline"
                    );
  local_98._0_8_ = 0;
  local_98._8_8_ = 0;
  local_78 = (uint *)0x0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = 0xffffffff;
  local_64 = 0;
  local_58 = (void *)0x0;
  local_50 = 0;
  GetShaderList(this,(TMap<FShaderId,TShaderRefBase<FShader,FShaderMapPointerTable>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FShaderId,TShaderRefBase<FShader,FShaderMapPointerTable>,0>_>
                      *)local_98);
  uVar25 = local_70;
  uStack_13c = 1;
  local_128 = 0;
  uStack_12c = local_128;
  if (local_70 != 0) {
    puVar20 = (uint *)(local_98 + 0x10);
    if (local_78 != (uint *)0x0) {
      puVar20 = local_78;
    }
    uVar18 = *puVar20;
    local_128 = 0;
    uVar19 = 0;
    while (uVar18 == 0) {
      lVar13 = (longlong)(int)uVar19;
      local_128 = local_128 + 0x20;
      uVar19 = uVar19 + 1;
      uStack_12c = local_70;
      if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar19)
      goto LAB_147f745f0;
      uVar18 = (puVar20 + 1)[lVar13];
    }
    uStack_13c = -uVar18 & uVar18;
    uVar17 = (ulonglong)uStack_13c * 2 + 1;
    lVar13 = 0x3f;
    if (uVar17 != 0) {
      for (; uVar17 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_118 = (int)lVar13;
    uStack_12c = (local_128 - 1) + local_118;
    if ((int)local_70 < (int)uStack_12c) {
      uStack_12c = local_70;
    }
  }
LAB_147f745f0:
  local_148 = (longlong *)local_98;
  local_138 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
  iStack_120 = local_98._8_4_ - local_64;
  uVar18 = local_70 & 0xffffffe0;
  uStack_130 = 0xffffffff;
  TStack_f8.CurrentBitIndex = uStack_12c;
  TStack_f8.UnvisitedBitMask = 0xffffffff;
  TStack_f8._padding_ = CONCAT44(uStack_13c,uVar19);
  iVar15 = (int)local_70 >> 5;
  TStack_f8._28_4_ = uStack_12c;
  TStack_f8.BaseBitIndex = local_128;
  uStack_d8 = CONCAT44(uStack_11c,iStack_120);
  bVar12 = (byte)local_70;
  uStack_140 = uVar19;
  uStack_124 = uStack_12c;
  local_100 = local_148;
  TStack_f8.Array = local_138;
  if (((int)local_70 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (uVar25 != local_70) {
    puVar20 = (uint *)(local_98 + 0x10);
    if (local_78 != (uint *)0x0) {
      puVar20 = local_78;
    }
    uVar19 = -1 << (bVar12 & 0x1f) & puVar20[iVar15];
    while (uVar19 == 0) {
      lVar13 = (longlong)iVar15;
      uVar18 = uVar18 + 0x20;
      iVar15 = iVar15 + 1;
      uVar25 = local_70;
      if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
      goto LAB_147f74710;
      uVar19 = (puVar20 + 1)[lVar13];
    }
    uVar17 = (ulonglong)(-uVar19 & uVar19) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar17 != 0) {
      for (; uVar17 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_114 = (int)lVar13;
    uVar25 = local_114 + -1 + uVar18;
    if ((int)local_70 < (int)uVar25) {
      uVar25 = local_70;
    }
  }
LAB_147f74710:
  while( true ) {
    plVar26 = local_100;
    if ((int)local_100[1] - *(int *)((longlong)local_100 + 0x34) != (int)uStack_d8) {
      local_1f8 = 0;
      `TSparseArray<TSparseSetElement<TTuple<FShaderId,TShaderRefBase<FShader,FShaderMapPointerTable>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_1f8);
    }
    if (((TStack_f8.CurrentBitIndex == uVar25) &&
        (TStack_f8.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10))) &&
       (plVar26 == (longlong *)local_98)) {
      local_50 = 0;
      if (local_58 != (void *)0x0) {
        FMemory::Free(local_58);
      }
      TSparseArray<TSparseSetElement<TTuple<FShaderId,TShaderRefBase<FShader,FShaderMapPointerTable>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FShaderId,TShaderRefBase<FShader,FShaderMapPointerTable>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FShaderId,TShaderRefBase<FShader,FShaderMapPointerTable>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_98);
      local_1c0 = (longlong *)0x0;
      local_1b8 = 0;
      (**(code **)(this->_padding_ + 0x10))(this,&local_1c0);
      uVar10 = (ulonglong)(int)(uint)local_1b8;
      local_108 = local_1c0 + uVar10 * 2;
      local_1c4 = (uint)local_1b8;
      uVar17 = uVar10;
      plVar26 = local_1c0;
      do {
        plVar4 = local_108;
        local_1d0 = (FScriptContainerElement *)plVar26;
        if ((int)uVar10 != (int)uVar17) {
          local_1f7 = 0;
          `TCheckedPointerIterator<FShaderPipelineRef,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_1f7);
        }
        if (plVar26 == plVar4) {
          if (local_1c0 != (longlong *)0x0) {
            FMemory::Free(local_1c0);
          }
          GPrintLogTimes = local_1d8;
          return;
        }
        lVar13 = *plVar26;
        uVar17 = *(ulonglong *)(lVar13 + 8);
        local_208.Data = (FScriptContainerElement *)0x0;
        local_200 = 0;
        if (uVar17 != 0) {
          if ((((uVar17 & 1) != 0) &&
              (uVar17 = ((longlong)uVar17 >> 0x18) + lVar13 + 8, uVar17 == 0)) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Value",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\MemoryImage.h"
                                 ,0x197,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          local_1f0 = uVar17;
          pFStack_1e8 = this;
          if (local_208.Data <= (FScriptContainerElement *)&local_1f0) {
            if ((FScriptContainerElement *)&local_1f0 <
                local_208.Data + (longlong)local_200._4_4_ * 0x10) {
              local_220 = (FScriptContainerElement *)(longlong)(int)(uint)local_200;
              local_218 = (FScriptContainerElement *)&DAT_00000010;
              local_238 = (wchar_t *)&local_1f0;
              local_230 = local_208.Data;
              local_228 = (FScriptContainerElement *)(longlong)local_200._4_4_;
              bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                );
              if (bVar5) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
            }
          }
          if ((uint)local_200 == local_200._4_4_) {
            iVar15 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,&local_208,(int *)((longlong)&local_200 + 4));
            local_200 = CONCAT44(local_200._4_4_,iVar15);
          }
          lVar14 = (longlong)(int)(uint)local_200;
          local_200 = CONCAT44(local_200._4_4_,(uint)local_200 + 1);
          *(ulonglong *)(local_208.Data + lVar14 * 0x10) = local_1f0;
          *(FMaterialShaderMap **)(local_208.Data + lVar14 * 0x10 + 8) = pFStack_1e8;
        }
        uVar17 = *(ulonglong *)(lVar13 + 0x10);
        if (uVar17 != 0) {
          if ((((uVar17 & 1) != 0) &&
              (uVar17 = ((longlong)uVar17 >> 0x18) + 0x10 + lVar13, uVar17 == 0)) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Value",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\MemoryImage.h"
                                 ,0x197,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          local_1f0 = uVar17;
          pFStack_1e8 = this;
          if (local_208.Data <= (FScriptContainerElement *)&local_1f0) {
            if ((FScriptContainerElement *)&local_1f0 <
                local_208.Data + (longlong)local_200._4_4_ * 0x10) {
              local_220 = (FScriptContainerElement *)(longlong)(int)(uint)local_200;
              local_218 = (FScriptContainerElement *)&DAT_00000010;
              local_238 = (wchar_t *)&local_1f0;
              local_230 = local_208.Data;
              local_228 = (FScriptContainerElement *)(longlong)local_200._4_4_;
              bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                );
              if (bVar5) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
            }
          }
          if ((uint)local_200 == local_200._4_4_) {
            iVar15 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,&local_208,(int *)((longlong)&local_200 + 4));
            local_200 = CONCAT44(local_200._4_4_,iVar15);
          }
          lVar14 = (longlong)(int)(uint)local_200;
          local_200 = CONCAT44(local_200._4_4_,(uint)local_200 + 1);
          *(ulonglong *)(local_208.Data + lVar14 * 0x10) = local_1f0;
          *(FMaterialShaderMap **)(local_208.Data + lVar14 * 0x10 + 8) = pFStack_1e8;
        }
        uVar17 = *(ulonglong *)(lVar13 + 0x18);
        if (uVar17 != 0) {
          if ((((uVar17 & 1) != 0) &&
              (uVar17 = ((longlong)uVar17 >> 0x18) + 0x18 + lVar13, uVar17 == 0)) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Value",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\MemoryImage.h"
                                 ,0x197,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          local_1f0 = uVar17;
          pFStack_1e8 = this;
          if (local_208.Data <= (FScriptContainerElement *)&local_1f0) {
            if ((FScriptContainerElement *)&local_1f0 <
                local_208.Data + (longlong)local_200._4_4_ * 0x10) {
              local_220 = (FScriptContainerElement *)(longlong)(int)(uint)local_200;
              local_218 = (FScriptContainerElement *)&DAT_00000010;
              local_238 = (wchar_t *)&local_1f0;
              local_230 = local_208.Data;
              local_228 = (FScriptContainerElement *)(longlong)local_200._4_4_;
              bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                );
              if (bVar5) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
            }
          }
          if ((uint)local_200 == local_200._4_4_) {
            iVar15 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,&local_208,(int *)((longlong)&local_200 + 4));
            local_200 = CONCAT44(local_200._4_4_,iVar15);
          }
          lVar14 = (longlong)(int)(uint)local_200;
          local_200 = CONCAT44(local_200._4_4_,(uint)local_200 + 1);
          *(ulonglong *)(local_208.Data + lVar14 * 0x10) = local_1f0;
          *(FMaterialShaderMap **)(local_208.Data + lVar14 * 0x10 + 8) = pFStack_1e8;
        }
        uVar17 = *(ulonglong *)(lVar13 + 0x20);
        if (uVar17 != 0) {
          if ((((uVar17 & 1) != 0) &&
              (uVar17 = ((longlong)uVar17 >> 0x18) + 0x20 + lVar13, uVar17 == 0)) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Value",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\MemoryImage.h"
                                 ,0x197,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          local_1f0 = uVar17;
          pFStack_1e8 = this;
          if (local_208.Data <= (FScriptContainerElement *)&local_1f0) {
            if ((FScriptContainerElement *)&local_1f0 <
                local_208.Data + (longlong)local_200._4_4_ * 0x10) {
              local_220 = (FScriptContainerElement *)(longlong)(int)(uint)local_200;
              local_218 = (FScriptContainerElement *)&DAT_00000010;
              local_238 = (wchar_t *)&local_1f0;
              local_230 = local_208.Data;
              local_228 = (FScriptContainerElement *)(longlong)local_200._4_4_;
              bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                );
              if (bVar5) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
            }
          }
          if ((uint)local_200 == local_200._4_4_) {
            iVar15 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,&local_208,(int *)((longlong)&local_200 + 4));
            local_200 = CONCAT44(local_200._4_4_,iVar15);
          }
          lVar14 = (longlong)(int)(uint)local_200;
          local_200 = CONCAT44(local_200._4_4_,(uint)local_200 + 1);
          *(ulonglong *)(local_208.Data + lVar14 * 0x10) = local_1f0;
          *(FMaterialShaderMap **)(local_208.Data + lVar14 * 0x10 + 8) = pFStack_1e8;
        }
        uVar17 = *(ulonglong *)(lVar13 + 0x28);
        if (uVar17 != 0) {
          if ((((uVar17 & 1) != 0) &&
              (uVar17 = ((longlong)uVar17 >> 0x18) + 0x28 + lVar13, uVar17 == 0)) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Value",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\MemoryImage.h"
                                 ,0x197,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          local_1f0 = uVar17;
          pFStack_1e8 = this;
          if (local_208.Data <= (FScriptContainerElement *)&local_1f0) {
            if ((FScriptContainerElement *)&local_1f0 <
                local_208.Data + (longlong)local_200._4_4_ * 0x10) {
              local_220 = (FScriptContainerElement *)(longlong)(int)(uint)local_200;
              local_218 = (FScriptContainerElement *)&DAT_00000010;
              local_238 = (wchar_t *)&local_1f0;
              local_230 = local_208.Data;
              local_228 = (FScriptContainerElement *)(longlong)local_200._4_4_;
              bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                );
              if (bVar5) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
            }
          }
          if ((uint)local_200 == local_200._4_4_) {
            iVar15 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,&local_208,(int *)((longlong)&local_200 + 4));
            local_200 = CONCAT44(local_200._4_4_,iVar15);
          }
          lVar13 = (longlong)(int)(uint)local_200;
          local_200 = CONCAT44(local_200._4_4_,(uint)local_200 + 1);
          *(ulonglong *)(local_208.Data + lVar13 * 0x10) = local_1f0;
          *(FMaterialShaderMap **)(local_208.Data + lVar13 * 0x10 + 8) = pFStack_1e8;
        }
        uVar17 = (ulonglong)(int)(uint)local_200;
        local_110 = local_208.Data + uVar17 * 0x10;
        local_1c8 = (uint)local_200;
        FVar24.Data = local_208.Data;
        while( true ) {
          pFVar2 = local_110;
          if ((uint)local_200 != (int)uVar17) {
            local_1f6[0] = 0;
            `TCheckedPointerIterator<TShaderRefBase<FShader,FShaderMapPointerTable>,int,0>::
            operator!='::__l2::<lambda_1>::operator()(local_1f6);
          }
          if (FVar24.Data == pFVar2) break;
          uVar17 = *(ulonglong *)FVar24.Data;
          if ((this->_padding_ == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("PointerTable",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                                 ,0x9b4,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          puVar11 = (ulonglong *)(uVar17 + 200);
          if ((*(byte *)puVar11 & 1) != 0) {
            lVar13 = this->_padding_;
            uVar25 = (uint)(*puVar11 >> 1);
            iVar15 = *(int *)(lVar13 + 0x60);
            uVar19 = 0;
            if ((int)uVar25 < iVar15) {
              uVar19 = ~uVar25 >> 0x1f;
            }
            if (uVar19 == 0) {
              local_238 = (wchar_t *)(longlong)(int)uVar25;
              local_230 = (FScriptContainerElement *)(longlong)iVar15;
              bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar5) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
            }
            puVar11 = (ulonglong *)(*(longlong *)(lVar13 + 0x58) + (longlong)(int)uVar25 * 8);
          }
          uVar17 = *puVar11;
          pFVar7 = FShader::GetOutputHash(*(FShader **)FVar24.Data);
          local_160.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_160.Data.ArrayNum = 0;
          local_160.Data.ArrayMax = 0;
          BytesToHex(pFVar7->Hash,0x14,&local_160);
          FVar22.Data = (FScriptContainerElement *)L"";
          if (local_160.Data.ArrayNum != 0) {
            FVar22.Data = local_160.Data.AllocatorInstance.Data;
          }
          pFVar7 = FShader::GetVertexFactoryHash(*(FShader **)FVar24.Data);
          local_170.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_170.Data.ArrayNum = 0;
          local_170.Data.ArrayMax = 0;
          BytesToHex(pFVar7->Hash,0x14,&local_170);
          FVar21.Data = (FScriptContainerElement *)L"";
          if (local_170.Data.ArrayNum != 0) {
            FVar21.Data = local_170.Data.AllocatorInstance.Data;
          }
          pFVar7 = FShader::GetHash(*(FShader **)FVar24.Data);
          local_180.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_180.Data.ArrayNum = 0;
          local_180.Data.ArrayMax = 0;
          BytesToHex(pFVar7->Hash,0x14,&local_180);
          FVar23.Data = (FScriptContainerElement *)L"";
          if (local_180.Data.ArrayNum != 0) {
            FVar23.Data = local_180.Data.AllocatorInstance.Data;
          }
          uVar10 = *(ulonglong *)FVar24.Data;
          if ((local_1e0->_padding_ == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("PointerTable",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                                 ,0x9b4,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          puVar11 = (ulonglong *)(uVar10 + 0xc0);
          if ((*(byte *)puVar11 & 1) != 0) {
            lVar13 = local_1e0->_padding_;
            uVar25 = (uint)(*puVar11 >> 1);
            iVar15 = *(int *)(lVar13 + 0x30);
            uVar19 = 0;
            if ((int)uVar25 < iVar15) {
              uVar19 = ~uVar25 >> 0x1f;
            }
            if (uVar19 == 0) {
              local_238 = (wchar_t *)(longlong)(int)uVar25;
              local_230 = (FScriptContainerElement *)(longlong)iVar15;
              bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar5) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
            }
            puVar11 = (ulonglong *)(*(longlong *)(lVar13 + 0x28) + (longlong)(int)uVar25 * 8);
          }
          pFVar2 = *(FScriptContainerElement **)(*puVar11 + 0x18);
          if (uVar17 == 0) {
            pwVar16 = L"null";
          }
          else {
            pwVar16 = *(wchar_t **)(uVar17 + 8);
          }
          if ((FShaderMapContent *)local_1e0->_padding_ != (FShaderMapContent *)0x0) {
            FShaderMapContent::GetShaderPlatform((FShaderMapContent *)local_1e0->_padding_);
          }
          FVar9 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_c8);
          ::FName::ToString((FName *)FVar9,&local_b0);
          switch(*(byte *)(*(ulonglong *)FVar24.Data + 0xd0) & 0xf) {
          case 0:
            break;
          case 1:
            break;
          case 2:
            break;
          case 3:
            break;
          case 4:
            break;
          case 5:
            break;
          case 6:
            break;
          case 7:
            break;
          case 8:
            break;
          case 9:
            break;
          case 10:
            break;
          case 0xb:
          }
          local_210 = L"true";
          local_238 = pwVar16;
          local_230 = pFVar2;
          local_228 = FVar23.Data;
          local_220 = FVar21.Data;
          local_218 = FVar22.Data;
          FOutputDevice::LogfImpl(local_150,L"%s, %s, %s, %s, %s, %s, %s, %s");
          if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_b0.Data.AllocatorInstance.Data);
          }
          if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_180.Data.AllocatorInstance.Data);
          }
          if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_170.Data.AllocatorInstance.Data);
          }
          if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_160.Data.AllocatorInstance.Data);
          }
          FVar24.Data = FVar24.Data + 0x10;
          uVar17 = (ulonglong)local_1c8;
          this = local_1e0;
        }
        if (local_208.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_208.Data);
        }
        uVar10 = local_1b8 & 0xffffffff;
        plVar26 = (longlong *)((longlong)local_1d0 + 0x10);
        uVar17 = (ulonglong)local_1c4;
      } while( true );
    }
    this_00 = *(FShader **)(*plVar26 + 0x38 + (longlong)TStack_f8.CurrentBitIndex * 0x50);
    if ((this->_padding_ == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("PointerTable",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                           ,0x9b4,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pTVar6 = &(this_00->VFType).field0_0x0;
    if ((*(byte *)&((TIndexedPtrBase<FVertexFactoryType,FVertexFactoryType_*> *)pTVar6)->field0_0x0
        & 1) != 0) {
      lVar13 = this->_padding_;
      uVar18 = (uint)((((TIndexedPtrBase<FVertexFactoryType,FVertexFactoryType_*> *)pTVar6)->
                      field0_0x0).PackedIndex >> 1);
      iVar15 = *(int *)(lVar13 + 0x60);
      uVar19 = 0;
      if ((int)uVar18 < iVar15) {
        uVar19 = ~uVar18 >> 0x1f;
      }
      if (uVar19 == 0) {
        local_238 = (wchar_t *)(longlong)(int)uVar18;
        local_230 = (FScriptContainerElement *)(longlong)iVar15;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      pTVar6 = (TIndexedPtrBase<FVertexFactoryType,FVertexFactoryType_*>_u_0 *)
               (*(longlong *)(lVar13 + 0x58) + (longlong)(int)uVar18 * 8);
    }
    TVar1.field0_0x0 = (TIndexedPtrBase<FVertexFactoryType,FVertexFactoryType_*>_u_0)pTVar6->Ptr;
    pFVar7 = FShader::GetOutputHash(this_00);
    local_190.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_190.Data.ArrayNum = 0;
    local_190.Data.ArrayMax = 0;
    BytesToHex(pFVar7->Hash,0x14,&local_190);
    FVar24.Data = (FScriptContainerElement *)L"";
    if (local_190.Data.ArrayNum != 0) {
      FVar24.Data = local_190.Data.AllocatorInstance.Data;
    }
    pFVar7 = FShader::GetVertexFactoryHash(this_00);
    local_1a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1a0.Data.ArrayNum = 0;
    local_1a0.Data.ArrayMax = 0;
    BytesToHex(pFVar7->Hash,0x14,&local_1a0);
    FVar22.Data = (FScriptContainerElement *)L"";
    if (local_1a0.Data.ArrayNum != 0) {
      FVar22.Data = local_1a0.Data.AllocatorInstance.Data;
    }
    pFVar7 = FShader::GetHash(this_00);
    local_1b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1b0.Data.ArrayNum = 0;
    local_1b0.Data.ArrayMax = 0;
    BytesToHex(pFVar7->Hash,0x14,&local_1b0);
    local_1d0 = (FScriptContainerElement *)L"";
    if (local_1b0.Data.ArrayNum != 0) {
      local_1d0 = local_1b0.Data.AllocatorInstance.Data;
    }
    if ((local_1e0->_padding_ == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("PointerTable",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                           ,0x9b4,L""), bVar5)) break;
    pTVar8 = &(this_00->Type).field0_0x0;
    if ((*(byte *)&((TIndexedPtrBase<FShaderType,FShaderType_*> *)pTVar8)->field0_0x0 & 1) != 0) {
      lVar13 = local_1e0->_padding_;
      uVar18 = (uint)((((TIndexedPtrBase<FShaderType,FShaderType_*> *)pTVar8)->field0_0x0).
                      PackedIndex >> 1);
      iVar15 = *(int *)(lVar13 + 0x30);
      uVar19 = 0;
      if ((int)uVar18 < iVar15) {
        uVar19 = ~uVar18 >> 0x1f;
      }
      if (uVar19 == 0) {
        local_238 = (wchar_t *)(longlong)(int)uVar18;
        local_230 = (FScriptContainerElement *)(longlong)iVar15;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      pTVar8 = (TIndexedPtrBase<FShaderType,FShaderType_*>_u_0 *)
               (*(longlong *)(lVar13 + 0x28) + (longlong)(int)uVar18 * 8);
    }
    pFVar2 = *(FScriptContainerElement **)((longlong)pTVar8->Ptr + 0x18);
    if (TVar1.field0_0x0 == (FVertexFactoryType *)0x0) {
      pwVar16 = L"null";
    }
    else {
      pwVar16 = *(wchar_t **)((longlong)TVar1.field0_0x0 + 8);
    }
    if ((FShaderMapContent *)local_1e0->_padding_ != (FShaderMapContent *)0x0) {
      FShaderMapContent::GetShaderPlatform((FShaderMapContent *)local_1e0->_padding_);
    }
    FVar9 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_d0);
    ::FName::ToString((FName *)FVar9,&local_c0);
    switch(*(byte *)&(this_00->Target).field0_0x0 & 0xf) {
    case 0:
      break;
    case 1:
      break;
    case 2:
      break;
    case 3:
      break;
    case 4:
      break;
    case 5:
      break;
    case 6:
      break;
    case 7:
      break;
    case 8:
      break;
    case 9:
      break;
    case 10:
      break;
    case 0xb:
    }
    local_210 = L"false";
    local_228 = local_1d0;
    local_238 = pwVar16;
    local_230 = pFVar2;
    local_220 = FVar22.Data;
    local_218 = FVar24.Data;
    FOutputDevice::LogfImpl(local_150,L"%s, %s, %s, %s, %s, %s, %s, %s");
    if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c0.Data.AllocatorInstance.Data);
    }
    if (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
    }
    if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
    }
    if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_190.Data.AllocatorInstance.Data);
    }
    TStack_f8.UnvisitedBitMask = TStack_f8.UnvisitedBitMask & ~TStack_f8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_f8);
    this = local_1e0;
  }
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

// DumpShaderList @ 147f765b0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FMaterialShaderMap::DumpShaderList
          (FMaterialShaderMap *this,
          TDelegate<void___cdecl(wchar_t_const_*,wchar_t_const_*,wchar_t_const_*,wchar_t_const_*,unsigned_int,unsigned_int,wchar_t_const_*,void_*),FDefaultDelegateUserPolicy>
          *param_1)

{
  ulonglong *puVar1;
  int iVar2;
  longlong lVar3;
  FShaderMapContent *this_00;
  ulonglong *puVar4;
  undefined1 local_res8 [8];
  
  FShaderMapContent::DumpShaderList
            ((FShaderMapContent *)this->_padding_,(FShaderMapBase *)this,param_1);
  lVar3 = this->_padding_;
  iVar2 = *(int *)(lVar3 + 0x68);
  puVar4 = *(ulonglong **)(lVar3 + 0x60);
  if (((ulonglong)puVar4 & 1) != 0) {
    puVar4 = (ulonglong *)(lVar3 + 0x60 + ((longlong)puVar4 >> 0x18));
  }
  puVar1 = puVar4 + iVar2;
  while( true ) {
    if (*(int *)(lVar3 + 0x68) != iVar2) {
      `TCheckedPointerIterator<TMemoryImagePtr<FMeshMaterialShaderMap>_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (puVar4 == puVar1) break;
    this_00 = (FShaderMapContent *)*puVar4;
    if (((ulonglong)this_00 & 1) != 0) {
      this_00 = (FShaderMapContent *)(((longlong)this_00 >> 0x18) + (longlong)puVar4);
    }
    if (this_00 != (FShaderMapContent *)0x0) {
      FShaderMapContent::DumpShaderList(this_00,(FShaderMapBase *)this,param_1);
    }
    puVar4 = puVar4 + 1;
  }
  return;
}

// FindId @ 147f77af0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

TRefCountPtr<FMaterialShaderMap> __cdecl
FMaterialShaderMap::FindId(FMaterialShaderMapId *param_1,EShaderPlatform param_2)

{
  FMaterialShaderMap *this;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TRefCountPtr<FMaterialShaderMap> TVar4;
  longlong lVar5;
  undefined6 in_register_00000012;
  FMaterialShaderMapId *pFVar6;
  ulonglong in_R8;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  ulonglong local_20;
  
  pFVar6 = (FMaterialShaderMapId *)CONCAT62(in_register_00000012,param_2);
  local_20 = __security_cookie.value ^ (ulonglong)auStack_58;
  EnterCriticalSection((LPCRITICAL_SECTION)&GIdToMaterialShaderMapCS);
  local_28 = 0;
  local_38 = 0;
  uStack_30 = 0;
  if (((*(longlong *)(pFVar6->CookedShaderMapIdHash).Hash == 0) &&
      (*(longlong *)((pFVar6->CookedShaderMapIdHash).Hash + 8) == 0)) &&
     (*(int *)((pFVar6->CookedShaderMapIdHash).Hash + 0x10) == 0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ShaderMapId.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialShader.cpp"
                       ,0x7d1,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      TVar4.Reference = (FMaterialShaderMap *)(*pcVar1)();
      return (TRefCountPtr<FMaterialShaderMap>)TVar4.Reference;
    }
  }
  iVar3 = TSet<TTuple<FMaterialShaderMapId,FMaterialShaderMap_*>,TDefaultMapHashableKeyFuncs<FMaterialShaderMapId,FMaterialShaderMap_*,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FMaterialShaderMapId>
                    ((TSet<TTuple<FMaterialShaderMapId,FMaterialShaderMap_*>,TDefaultMapHashableKeyFuncs<FMaterialShaderMapId,FMaterialShaderMap_*,0>,FDefaultSetAllocator>
                      *)(&GIdToMaterialShaderMap + (in_R8 & 0xffff) * 0x50),
                     *(uint *)(pFVar6->CookedShaderMapIdHash).Hash,pFVar6);
  if ((iVar3 == -1) ||
     (lVar5 = (longlong)iVar3 * 0x38 +
              *(longlong *)
               &((TSet<TTuple<FMaterialShaderMapId,FMaterialShaderMap_*>,TDefaultMapHashableKeyFuncs<FMaterialShaderMapId,FMaterialShaderMap_*,0>,FDefaultSetAllocator>
                  *)(&GIdToMaterialShaderMap + (in_R8 & 0xffff) * 0x50))->Elements, lVar5 == 0)) {
    (param_1->CookedShaderMapIdHash).Hash[0] = '\0';
    (param_1->CookedShaderMapIdHash).Hash[1] = '\0';
    (param_1->CookedShaderMapIdHash).Hash[2] = '\0';
    (param_1->CookedShaderMapIdHash).Hash[3] = '\0';
    (param_1->CookedShaderMapIdHash).Hash[4] = '\0';
    (param_1->CookedShaderMapIdHash).Hash[5] = '\0';
    (param_1->CookedShaderMapIdHash).Hash[6] = '\0';
    (param_1->CookedShaderMapIdHash).Hash[7] = '\0';
  }
  else {
    this = *(FMaterialShaderMap **)(lVar5 + 0x28);
    *(FMaterialShaderMap **)(param_1->CookedShaderMapIdHash).Hash = this;
    if (this != (FMaterialShaderMap *)0x0) {
      AddRef(this);
    }
  }
  lVar5 = *(longlong *)(param_1->CookedShaderMapIdHash).Hash;
  if ((lVar5 != 0) && ((*(char *)(lVar5 + 0x7c) != '\0' || ((*(byte *)(lVar5 + 0x80) & 1) == 0)))) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result == nullptr || (!Result->bDeletedThroughDeferredCleanup && Result->bRegistered)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialShader.cpp"
                       ,0x7d3,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      TVar4.Reference = (FMaterialShaderMap *)(*pcVar1)();
      return (TRefCountPtr<FMaterialShaderMap>)TVar4.Reference;
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&GIdToMaterialShaderMapCS);
  return (TRefCountPtr<FMaterialShaderMap>)(FMaterialShaderMap *)param_1;
}

// GetShaderList @ 147f7bb90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FMaterialShaderMap::GetShaderList
          (FMaterialShaderMap *this,
          TMap<FShaderId,TShaderRefBase<FShader,FShaderMapPointerTable>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FShaderId,TShaderRefBase<FShader,FShaderMapPointerTable>,0>_>
          *param_1)

{
  ulonglong *puVar1;
  int iVar2;
  longlong lVar3;
  ulonglong *puVar4;
  FShaderMapContent *this_00;
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  FSHAHash local_44;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_68;
  local_44.Hash[0] = '\0';
  local_44.Hash[1] = '\0';
  local_44.Hash[2] = '\0';
  local_44.Hash[3] = '\0';
  local_44.Hash[4] = '\0';
  local_44.Hash[5] = '\0';
  local_44.Hash[6] = '\0';
  local_44.Hash[7] = '\0';
  local_44.Hash[8] = '\0';
  local_44.Hash[9] = '\0';
  local_44.Hash[10] = '\0';
  local_44.Hash[0xb] = '\0';
  local_44.Hash[0xc] = '\0';
  local_44.Hash[0xd] = '\0';
  local_44.Hash[0xe] = '\0';
  local_44.Hash[0xf] = '\0';
  local_44.Hash[0x10] = '\0';
  local_44.Hash[0x11] = '\0';
  local_44.Hash[0x12] = '\0';
  local_44.Hash[0x13] = '\0';
  FShaderMapContent::GetShaderList
            ((FShaderMapContent *)this->_padding_,(FShaderMapBase *)this,&local_44,param_1);
  lVar3 = this->_padding_;
  iVar2 = *(int *)(lVar3 + 0x68);
  puVar4 = *(ulonglong **)(lVar3 + 0x60);
  if (((ulonglong)puVar4 & 1) != 0) {
    puVar4 = (ulonglong *)(lVar3 + 0x60 + ((longlong)puVar4 >> 0x18));
  }
  puVar1 = puVar4 + iVar2;
  while( true ) {
    if (*(int *)(lVar3 + 0x68) != iVar2) {
      `TCheckedPointerIterator<TMemoryImagePtr<FMeshMaterialShaderMap>_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_48);
    }
    if (puVar4 == puVar1) break;
    this_00 = (FShaderMapContent *)*puVar4;
    if (((ulonglong)this_00 & 1) != 0) {
      this_00 = (FShaderMapContent *)(((longlong)this_00 >> 0x18) + (longlong)puVar4);
    }
    if (this_00 != (FShaderMapContent *)0x0) {
      FShaderMapContent::GetShaderList(this_00,(FShaderMapBase *)this,&local_44,param_1);
    }
    puVar4 = puVar4 + 1;
  }
  return;
}

// GetShaderList @ 147f7bc70

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FMaterialShaderMap::GetShaderList
          (FMaterialShaderMap *this,
          TMap<FHashedName,TShaderRefBase<FShader,FShaderMapPointerTable>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FHashedName,TShaderRefBase<FShader,FShaderMapPointerTable>,0>_>
          *param_1)

{
  ulonglong *puVar1;
  int iVar2;
  longlong lVar3;
  FShaderMapContent *this_00;
  ulonglong *puVar4;
  undefined1 local_res8 [8];
  
  FShaderMapContent::GetShaderList
            ((FShaderMapContent *)this->_padding_,(FShaderMapBase *)this,param_1);
  lVar3 = this->_padding_;
  iVar2 = *(int *)(lVar3 + 0x68);
  puVar4 = *(ulonglong **)(lVar3 + 0x60);
  if (((ulonglong)puVar4 & 1) != 0) {
    puVar4 = (ulonglong *)(lVar3 + 0x60 + ((longlong)puVar4 >> 0x18));
  }
  puVar1 = puVar4 + iVar2;
  while( true ) {
    if (*(int *)(lVar3 + 0x68) != iVar2) {
      `TCheckedPointerIterator<TMemoryImagePtr<FMeshMaterialShaderMap>_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (puVar4 == puVar1) break;
    this_00 = (FShaderMapContent *)*puVar4;
    if (((ulonglong)this_00 & 1) != 0) {
      this_00 = (FShaderMapContent *)(((longlong)this_00 >> 0x18) + (longlong)puVar4);
    }
    if (this_00 != (FShaderMapContent *)0x0) {
      FShaderMapContent::GetShaderList(this_00,(FShaderMapBase *)this,param_1);
    }
    puVar4 = puVar4 + 1;
  }
  return;
}

// GetShaderNum @ 147f7bde0

/* WARNING: Enum "ESubstrateBsdfFeature": Some values do not have unique names */

uint __thiscall FMaterialShaderMap::GetShaderNum(FMaterialShaderMap *this)

{
  uint uVar1;
  
  uVar1 = FMaterialShaderMapContent::GetNumShaders((FMaterialShaderMapContent *)this->_padding_);
  return uVar1;
}

// GetShaderPipelineList @ 147f7bf60

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FMaterialShaderMap::GetShaderPipelineList
          (FMaterialShaderMap *this,TArray<FShaderPipelineRef,TSizedDefaultAllocator<32>_> *param_1)

{
  ulonglong *puVar1;
  int iVar2;
  longlong lVar3;
  FShaderMapContent *this_00;
  ulonglong *puVar4;
  undefined1 local_res8 [8];
  
  FShaderMapContent::GetShaderPipelineList
            ((FShaderMapContent *)this->_padding_,(FShaderMapBase *)this,param_1,EAll);
  lVar3 = this->_padding_;
  iVar2 = *(int *)(lVar3 + 0x68);
  puVar4 = *(ulonglong **)(lVar3 + 0x60);
  if (((ulonglong)puVar4 & 1) != 0) {
    puVar4 = (ulonglong *)(lVar3 + 0x60 + ((longlong)puVar4 >> 0x18));
  }
  puVar1 = puVar4 + iVar2;
  while( true ) {
    if (*(int *)(lVar3 + 0x68) != iVar2) {
      `TCheckedPointerIterator<TMemoryImagePtr<FMeshMaterialShaderMap>_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (puVar4 == puVar1) break;
    this_00 = (FShaderMapContent *)*puVar4;
    if (((ulonglong)this_00 & 1) != 0) {
      this_00 = (FShaderMapContent *)(((longlong)this_00 >> 0x18) + (longlong)puVar4);
    }
    if (this_00 != (FShaderMapContent *)0x0) {
      FShaderMapContent::GetShaderPipelineList(this_00,(FShaderMapBase *)this,param_1,EAll);
    }
    puVar4 = puVar4 + 1;
  }
  return;
}

// IsComplete @ 147f7fcd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EBlendMode": Some values do not have unique names */
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
/* WARNING: Enum "ESubstrateBsdfFeature": Some values do not have unique names */

bool __thiscall
FMaterialShaderMap::IsComplete(FMaterialShaderMap *this,FMaterial *param_1,bool param_2)

{
  int iVar1;
  FMaterialShaderMapContent *this_00;
  void *pvVar2;
  FShaderPipelineType *pFVar3;
  undefined8 uVar4;
  bool bVar5;
  FMaterial *pFVar6;
  ForAnyElementType FVar7;
  char cVar8;
  EShaderPlatform EVar9;
  EShaderPermutationFlags EVar10;
  FMaterialShaderMapLayout *pFVar11;
  FShader *pFVar12;
  FShaderPipeline *pFVar13;
  FMeshMaterialShaderMap *pFVar14;
  uint uVar15;
  int iVar16;
  ulonglong uVar17;
  ForElementType<FSetElementId> FVar18;
  ulonglong *puVar19;
  bool bVar20;
  longlong lVar21;
  ulonglong *puVar22;
  FScriptContainerElement *pFVar23;
  undefined8 *puVar24;
  FScriptContainerElement *pFVar25;
  FMeshMaterialShaderMap *pFVar26;
  undefined8 *puVar27;
  FScriptContainerElement *pFVar28;
  undefined1 auStackY_208 [32];
  undefined1 local_1c8;
  char local_1c7;
  TArray<FShaderPipelineType_*,TSizedDefaultAllocator<32>_> local_1c0;
  EShaderPlatform local_1b0;
  FScriptContainerElement *local_1a8;
  FMaterial *local_1a0;
  FMeshMaterialShaderMap *local_198;
  TArray<FShaderPipelineType_*,TSizedDefaultAllocator<32>_> local_190;
  uint local_180;
  uint local_17c;
  FMaterialShaderMapLayout *local_178;
  FMaterialShaderMapContent *local_170;
  FScriptContainerElement *local_168;
  undefined8 *local_160;
  FMaterialShaderParameters local_158;
  FPipelinedShaderFilter local_108;
  FPipelinedShaderFilter local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_208;
  local_1c7 = param_2;
  local_1a0 = param_1;
  if ((CpuChannel->Enabled < 0) || (LoadTimeChannel->Enabled < 0)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId3312,"FMaterialShaderMap_IsComplete",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialShader.cpp"
               ,0xcf0);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId3312);
  }
  this_00 = (FMaterialShaderMapContent *)this->_padding_;
  local_170 = this_00;
  EVar9 = FShaderMapContent::GetShaderPlatform((FShaderMapContent *)this_00);
  local_1b0 = EVar9;
  FMaterialShaderParametersBase::FMaterialShaderParametersBase
            ((FMaterialShaderParametersBase *)&local_158,param_1);
  local_158.MaterialShaderTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_158.MaterialShaderTags.ArrayNum = 0;
  local_158.MaterialShaderTags.ArrayMax = 0;
  EVar10 = GetShaderPermutationFlags(&(this->ShaderMapId).LayoutParams);
  pFVar11 = AcquireMaterialShaderMapLayout(EVar9,EVar10 & ~IsODSCOnly,&local_158);
  local_178 = pFVar11;
  if (((*(longlong *)(pFVar11->ShaderMapHash).Hash == *(longlong *)(this_00->ShaderContentHash).Hash
       ) && (*(longlong *)((pFVar11->ShaderMapHash).Hash + 8) ==
             *(longlong *)((this_00->ShaderContentHash).Hash + 8))) &&
     (*(int *)((pFVar11->ShaderMapHash).Hash + 0x10) ==
      *(int *)((this_00->ShaderContentHash).Hash + 0x10))) {
LAB_147f8057e:
    bVar20 = true;
  }
  else {
    local_190.ArrayNum = (int)pFVar11->_padding_;
    lVar21 = (longlong)local_190.ArrayNum;
    local_190.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pvVar2 = (void *)pFVar11->_padding_;
    if (local_190.ArrayNum == 0) {
      local_190.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,local_190.ArrayNum,0,&local_190.AllocatorInstance,local_190.ArrayNum,
                 &local_190.ArrayMax);
      memcpy(local_190.AllocatorInstance.Data,pvVar2,lVar21 << 3);
    }
    FPipelinedShaderFilter::FPipelinedShaderFilter(&local_a8,EVar9,&local_190);
    iVar1 = (int)pFVar11->_padding_;
    puVar22 = (ulonglong *)pFVar11->_padding_;
    puVar19 = puVar22 + (longlong)iVar1 * 2;
LAB_147f7fe60:
    if ((int)pFVar11->_padding_ != iVar1) {
      `TCheckedPointerIterator<FShaderLayoutEntry_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_1c8);
    }
    if (puVar22 == puVar19) {
      local_a8.PipelinedShaderTypes.HashSize = 0;
      if (local_a8.PipelinedShaderTypes.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_a8.PipelinedShaderTypes.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<FShaderType_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FShaderType_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<FShaderType_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)&local_a8);
      pFVar26 = (FMeshMaterialShaderMap *)pFVar11->_padding_;
      iVar1 = (int)pFVar11->_padding_;
      pFVar14 = (FMeshMaterialShaderMap *)(&pFVar26->_padding_ + iVar1);
      local_198 = pFVar14;
      while( true ) {
        if ((int)local_178->_padding_ != iVar1) {
          `TCheckedPointerIterator<FShaderPipelineType_*_const,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(&local_1c8);
        }
        if (pFVar26 == pFVar14) break;
        pFVar3 = (FShaderPipelineType *)pFVar26->_padding_;
        pFVar13 = FShaderMapContent::GetShaderPipeline((FShaderMapContent *)local_170,pFVar3);
        if (pFVar13 == (FShaderPipeline *)0x0) {
          pFVar25 = (pFVar3->Stages).AllocatorInstance.Data;
          iVar16 = (pFVar3->Stages).ArrayNum;
          pFVar28 = pFVar25 + (longlong)iVar16 * 8;
          while( true ) {
            if ((pFVar3->Stages).ArrayNum != iVar16) {
              `TCheckedPointerIterator<FShaderType_const_*_const,int,0>::operator!='::__l2::
              <lambda_1>::operator()(&local_1c8);
            }
            if (pFVar25 == pFVar28) {
              if ((local_1c7 == '\0') && (2 < (byte)LogMaterial._0_1_)) {
                (**(code **)(local_1a0->_padding_ + 0x390))(local_1a0,&local_1c0);
                UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMaterial);
                if (local_1c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_1c0.AllocatorInstance.Data);
                }
              }
              bVar20 = false;
              goto LAB_147f80581;
            }
            cVar8 = (**(code **)(local_1a0->_padding_ + 0x18))(local_1a0,*(undefined8 *)pFVar25,0);
            pFVar14 = local_198;
            if (cVar8 == '\0') break;
            pFVar25 = pFVar25 + 8;
          }
        }
        pFVar26 = (FMeshMaterialShaderMap *)&pFVar26->_padding_;
      }
      local_17c = (local_178->MeshShaderMaps).ArrayNum;
      uVar17 = (ulonglong)(int)local_17c;
      pFVar25 = (local_178->MeshShaderMaps).AllocatorInstance.Data;
      pFVar28 = pFVar25 + 0x20;
      local_190.AllocatorInstance.Data = pFVar25 + uVar17 * 0x30;
LAB_147f80116:
      FVar7.Data = local_190.AllocatorInstance.Data;
      local_1a8 = pFVar25;
      local_168 = pFVar28;
      if ((local_178->MeshShaderMaps).ArrayNum != (int)uVar17) {
        `TCheckedPointerIterator<FMeshMaterialShaderMapLayout_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_1c8);
      }
      if (pFVar25 != FVar7.Data) {
        local_1c0.ArrayNum = *(int *)pFVar28;
        lVar21 = (longlong)local_1c0.ArrayNum;
        pvVar2 = *(void **)(pFVar28 + -8);
        local_1c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        if (local_1c0.ArrayNum == 0) {
          local_1c0.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,local_1c0.ArrayNum,0,&local_1c0.AllocatorInstance,local_1c0.ArrayNum,
                     &local_1c0.ArrayMax);
          memcpy(local_1c0.AllocatorInstance.Data,pvVar2,lVar21 << 3);
        }
        FPipelinedShaderFilter::FPipelinedShaderFilter(&local_108,local_1b0,&local_1c0);
        pFVar14 = FMaterialShaderMapContent::GetMeshShaderMap
                            (local_170,(FHashedName *)(*(longlong *)(pFVar28 + 8) + 0x30));
        pFVar6 = local_1a0;
        iVar1 = *(int *)(pFVar28 + -0x10);
        puVar22 = *(ulonglong **)(pFVar28 + -0x18);
        puVar19 = puVar22 + (longlong)iVar1 * 2;
        local_198 = pFVar14;
LAB_147f801d4:
        if (*(int *)(pFVar28 + -0x10) != iVar1) {
          `TCheckedPointerIterator<FShaderLayoutEntry_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_1c8);
        }
        if (puVar22 == puVar19) goto LAB_147f802bd;
        cVar8 = (**(code **)(pFVar6->_padding_ + 0x18))
                          (pFVar6,*puVar22,*(undefined8 *)(pFVar28 + 8));
        if (cVar8 == '\0') {
LAB_147f802b4:
          puVar22 = puVar22 + 2;
          goto LAB_147f801d4;
        }
        if (local_108.bAnyTypesExcluded != false) {
          uVar17 = *puVar22;
          uVar15 = ((uint)(uVar17 >> 0x14) & 0xffff ^ (uint)(uVar17 >> 4)) * -0x7a143595;
          uVar15 = (uVar15 >> 0xd ^ uVar15) * -0x3d4d51cb;
          if (local_108.PipelinedShaderTypes.Elements._8_4_ !=
              local_108.PipelinedShaderTypes.Elements._52_4_) {
            FVar18 = (ForElementType<FSetElementId>)&local_108.PipelinedShaderTypes.Hash;
            if (local_108.PipelinedShaderTypes.Hash.SecondaryData !=
                (ForElementType<FSetElementId>)0x0) {
              FVar18 = local_108.PipelinedShaderTypes.Hash.SecondaryData;
            }
            for (iVar16 = *(int *)((longlong)FVar18 +
                                  (ulonglong)
                                  (local_108.PipelinedShaderTypes.HashSize - 1U &
                                  (uVar15 >> 0x10 ^ uVar15)) * 4); iVar16 != -1;
                iVar16 = *(int *)(local_108.PipelinedShaderTypes.Elements._0_8_ + 8 +
                                 (longlong)iVar16 * 0x10)) {
              if (*(ulonglong *)
                   (local_108.PipelinedShaderTypes.Elements._0_8_ + (longlong)iVar16 * 0x10) ==
                  uVar17) goto LAB_147f8028a;
            }
          }
          iVar16 = -1;
LAB_147f8028a:
          if (iVar16 != -1) goto LAB_147f802b4;
        }
        if ((pFVar14 != (FMeshMaterialShaderMap *)0x0) &&
           (pFVar12 = FShaderMapContent::GetShader
                                ((FShaderMapContent *)pFVar14,(FHashedName *)(*puVar22 + 0x28),
                                 (int)puVar22[1]), pFVar12 != (FShader *)0x0)) goto LAB_147f802b4;
        if (local_1c7 != '\0') goto LAB_147f8055c;
        if (pFVar14 == (FMeshMaterialShaderMap *)0x0) {
          if ((byte)LogMaterial._0_1_ < 3) goto LAB_147f8055c;
          (**(code **)(pFVar6->_padding_ + 0x390))(pFVar6,&local_1c0);
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMaterial);
        }
        else {
          if ((byte)LogMaterial._0_1_ < 3) goto LAB_147f8055c;
          (**(code **)(pFVar6->_padding_ + 0x390))(pFVar6,&local_1c0);
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMaterial);
        }
LAB_147f80549:
        if (local_1c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1c0.AllocatorInstance.Data);
        }
LAB_147f8055c:
        local_108.PipelinedShaderTypes.HashSize = 0;
        if (local_108.PipelinedShaderTypes.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0)
        {
          FMemory::Free((void *)local_108.PipelinedShaderTypes.Hash.SecondaryData);
        }
        TSparseArray<TSparseSetElement<FShaderType_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<FShaderType_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<FShaderType_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)&local_108);
        bVar20 = false;
        goto LAB_147f80581;
      }
      goto LAB_147f8057e;
    }
    pFVar12 = FShaderMapContent::GetShader
                        ((FShaderMapContent *)this_00,(FHashedName *)(*puVar22 + 0x28),
                         (int)puVar22[1]);
    if (pFVar12 != (FShader *)0x0) {
LAB_147f7ff42:
      puVar22 = puVar22 + 2;
      goto LAB_147f7fe60;
    }
    if (local_a8.bAnyTypesExcluded != false) {
      uVar17 = *puVar22;
      uVar15 = ((uint)(uVar17 >> 0x14) & 0xffff ^ (uint)(uVar17 >> 4)) * -0x7a143595;
      uVar15 = (uVar15 >> 0xd ^ uVar15) * -0x3d4d51cb;
      if (local_a8.PipelinedShaderTypes.Elements._8_4_ !=
          local_a8.PipelinedShaderTypes.Elements._52_4_) {
        FVar18 = (ForElementType<FSetElementId>)&local_a8.PipelinedShaderTypes.Hash;
        if (local_a8.PipelinedShaderTypes.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0)
        {
          FVar18 = local_a8.PipelinedShaderTypes.Hash.SecondaryData;
        }
        for (iVar16 = *(int *)((longlong)FVar18 +
                              (ulonglong)
                              (local_a8.PipelinedShaderTypes.HashSize - 1U &
                              (uVar15 >> 0x10 ^ uVar15)) * 4); iVar16 != -1;
            iVar16 = *(int *)(local_a8.PipelinedShaderTypes.Elements._0_8_ + 8 +
                             (longlong)iVar16 * 0x10)) {
          if (*(ulonglong *)(local_a8.PipelinedShaderTypes.Elements._0_8_ + (longlong)iVar16 * 0x10)
              == uVar17) goto LAB_147f7ff2a;
        }
      }
      iVar16 = -1;
LAB_147f7ff2a:
      if (iVar16 != -1) goto LAB_147f7ff42;
    }
    cVar8 = (**(code **)(param_1->_padding_ + 0x18))(param_1,*puVar22);
    if (cVar8 == '\0') goto LAB_147f7ff42;
    if ((local_1c7 == '\0') && (2 < (byte)LogMaterial._0_1_)) {
      (**(code **)(param_1->_padding_ + 0x390))(param_1,&local_1c0);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMaterial);
      if (local_1c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1c0.AllocatorInstance.Data);
      }
    }
    local_a8.PipelinedShaderTypes.HashSize = 0;
    if (local_a8.PipelinedShaderTypes.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_a8.PipelinedShaderTypes.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<FShaderType_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FShaderType_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<FShaderType_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&local_a8);
    bVar20 = false;
  }
LAB_147f80581:
  if (local_158.MaterialShaderTags.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_158.MaterialShaderTags.AllocatorInstance.Data);
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar20;
LAB_147f802bd:
  local_180 = *(uint *)pFVar28;
  uVar17 = (ulonglong)(int)local_180;
  puVar27 = *(undefined8 **)(pFVar28 + -8);
  puVar24 = puVar27 + uVar17;
  local_160 = puVar24;
  while( true ) {
    if (*(int *)pFVar28 != (int)uVar17) {
      `TCheckedPointerIterator<FShaderPipelineType_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_1c8);
    }
    if (puVar27 == puVar24) break;
    pFVar3 = (FShaderPipelineType *)*puVar27;
    if ((local_198 == (FMeshMaterialShaderMap *)0x0) ||
       (pFVar13 = FShaderMapContent::GetShaderPipeline((FShaderMapContent *)local_198,pFVar3),
       pFVar13 == (FShaderPipeline *)0x0)) {
      pFVar23 = (pFVar3->Stages).AllocatorInstance.Data;
      iVar1 = (pFVar3->Stages).ArrayNum;
      uVar4 = *(undefined8 *)(pFVar28 + 8);
      pFVar25 = pFVar23 + (longlong)iVar1 * 8;
      while( true ) {
        if ((pFVar3->Stages).ArrayNum != iVar1) {
          `TCheckedPointerIterator<FShaderType_const_*_const,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_1c8);
        }
        if (pFVar23 == pFVar25) {
          if (local_1c7 != '\0') goto LAB_147f8055c;
          if (local_198 == (FMeshMaterialShaderMap *)0x0) {
            if ((byte)LogMaterial._0_1_ < 3) goto LAB_147f8055c;
            lVar21 = (**(code **)(local_1a0->_padding_ + 0x390))(local_1a0,&local_1c0);
            if (*(int *)(lVar21 + 8) == 0) {
              UE::Logging::Private::BasicLog<3>
                        ((FStaticBasicLogRecord *)&PTR_u_Incomplete_mate_1519b5ca8,
                         (FLogCategoryBase *)&LogMaterial);
            }
            else {
              UE::Logging::Private::BasicLog<3>
                        ((FStaticBasicLogRecord *)&PTR_u_Incomplete_mate_1519b5ca8,
                         (FLogCategoryBase *)&LogMaterial);
            }
          }
          else {
            if ((byte)LogMaterial._0_1_ < 3) goto LAB_147f8055c;
            (**(code **)(local_1a0->_padding_ + 0x390))(local_1a0,&local_1c0);
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMaterial);
          }
          goto LAB_147f80549;
        }
        cVar8 = (**(code **)(local_1a0->_padding_ + 0x18))(local_1a0,*(undefined8 *)pFVar23,uVar4);
        puVar24 = local_160;
        pFVar28 = local_168;
        if (cVar8 == '\0') break;
        pFVar23 = pFVar23 + 8;
      }
    }
    uVar17 = (ulonglong)local_180;
    puVar27 = puVar27 + 1;
  }
  local_108.PipelinedShaderTypes.HashSize = 0;
  if (local_108.PipelinedShaderTypes.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_108.PipelinedShaderTypes.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FShaderType_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FShaderType_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FShaderType_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&local_108);
  pFVar25 = local_1a8 + 0x30;
  uVar17 = (ulonglong)local_17c;
  pFVar28 = pFVar28 + 0x30;
  goto LAB_147f80116;
}

// LoadForRemoteRecompile @ 147f81750

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
FMaterialShaderMap::LoadForRemoteRecompile
          (FArchive *param_1,EShaderPlatform param_2,
          TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *param_3)

{
  Type TVar1;
  longlong *plVar2;
  ForAnyElementType FVar3;
  void *_Src;
  code *pcVar4;
  undefined8 uVar5;
  TRefCountPtr<FMaterialShaderMap> *pTVar6;
  bool bVar7;
  EShaderPlatform EVar8;
  int iVar9;
  uint uVar10;
  FMaterialShaderMap *pFVar11;
  longlong lVar12;
  size_t sVar13;
  UClass *pUVar14;
  FMaterial *pFVar15;
  ulonglong uVar16;
  FScriptContainerElement *pFVar17;
  FScriptContainerElement *pFVar18;
  FMaterialShaderMapId *pFVar19;
  FMaterialShaderMapId *pFVar20;
  int iVar21;
  uint uVar22;
  int iVar23;
  ulonglong uVar24;
  int iVar25;
  uint uVar26;
  int iVar27;
  ulonglong uVar28;
  undefined1 auStackY_228 [32];
  char local_1d8 [4];
  uint local_1d4;
  undefined1 local_1d0 [8];
  TArray<TRefCountPtr<FMaterialShaderMap>,TSizedDefaultAllocator<32>_> local_1c8;
  uint local_1b8;
  uint local_1b4;
  ForAnyElementType local_1b0;
  undefined8 local_1a8;
  UObject *local_1a0;
  EShaderPlatform local_198;
  FMaterialShaderMap *local_190;
  FString local_188;
  longlong local_178;
  TPairInitializer<FMaterialShaderMapId_const_&,TRefCountPtr<FMaterialShaderMap>_const_&> local_170;
  FScriptContainerElement *local_158;
  int iStack_150;
  undefined4 uStack_14c;
  longlong *local_148;
  undefined1 auStack_140 [16];
  uint uStack_130;
  uint uStack_12c;
  longlong local_128;
  TSet<TTuple<FMaterialShaderMapId,TRefCountPtr<FMaterialShaderMap>_>,TDefaultMapHashableKeyFuncs<FMaterialShaderMapId,TRefCountPtr<FMaterialShaderMap>,0>,FDefaultSetAllocator>
  *pTStack_120;
  TSet<TTuple<FMaterialShaderMapId,TRefCountPtr<FMaterialShaderMap>_>,TDefaultMapHashableKeyFuncs<FMaterialShaderMapId,TRefCountPtr<FMaterialShaderMap>,0>,FDefaultSetAllocator>
  *local_118;
  undefined2 local_110;
  FMaterialShaderMapId *local_108;
  FMaterialShaderMap **local_100;
  FShaderSerializeContext local_f8;
  TStringView<wchar_t> local_d8;
  undefined1 local_c8 [32];
  longlong local_a8;
  TSet<TTuple<FMaterialShaderMapId,TRefCountPtr<FMaterialShaderMap>_>,TDefaultMapHashableKeyFuncs<FMaterialShaderMapId,TRefCountPtr<FMaterialShaderMap>,0>,FDefaultSetAllocator>
  *pTStack_a0;
  TSet<TTuple<FMaterialShaderMapId,TRefCountPtr<FMaterialShaderMap>_>,TDefaultMapHashableKeyFuncs<FMaterialShaderMapId,TRefCountPtr<FMaterialShaderMap>,0>,FDefaultSetAllocator>
  local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_228;
  local_98.Elements._44_4_ = 0x80;
  local_98.Elements._0_8_ = 0;
  plVar2 = *(longlong **)&param_1->field_0x8;
  local_98.Elements._8_8_ = 0;
  local_98.Elements._32_8_ = 0;
  local_98.Elements._40_4_ = 0;
  local_98.Elements._48_4_ = 0xffffffff;
  local_98.Elements._52_4_ = 0;
  local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_98.HashSize = 0;
  local_1b0.Data = (FScriptContainerElement *)0x0;
  local_1a8 = 0;
  local_198 = param_2;
  local_170.Value = (TRefCountPtr<FMaterialShaderMap> *)param_3;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_1d4,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&local_1d4);
    }
  }
  else {
    local_1d4 = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if ((int)local_1d4 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)local_1d4);
  }
  if (local_1a8._4_4_ < (int)local_1d4) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,local_1d4,&local_1b0,(uint)local_1a8,(int *)((longlong)&local_1a8 + 4));
  }
  iVar27 = 1;
  local_1b4 = 0;
  if (0 < (int)local_1d4) {
    do {
      uVar22 = local_1b4;
      iVar9 = (uint)local_1a8;
      if ((uint)local_1a8 == local_1a8._4_4_) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x820,&local_1b0,(int *)((longlong)&local_1a8 + 4));
      }
      iVar25 = 0;
      pFVar18 = local_1b0.Data + (longlong)iVar9 * 0x20;
      local_1a8 = CONCAT44(local_1a8._4_4_,iVar9 + 1);
      *(undefined8 *)(pFVar18 + 0x10) = 0;
      *(int *)(pFVar18 + 0x1c) = 0;
      pFVar17 = pFVar18 + 0x10;
      (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar18->field_0x0)->AllocatorInstance).Data
           = (FScriptContainerElement *)0x0;
      *(undefined8 *)&pFVar18[8].field_0x0 = 0;
      *(int *)(pFVar18 + 0x18) = 0;
      ::operator<<(param_1,(FString *)pFVar18);
      iVar9 = ::FString::Find((FString *)pFVar18,L":::",3,IgnoreCase,FromStart,-1);
      if (iVar9 != -1) {
        iVar21 = *(int *)&pFVar18[8].field_0x0 + -1;
        if (*(int *)&pFVar18[8].field_0x0 == 0) {
          iVar21 = 0;
        }
        iVar23 = iVar21;
        if (iVar9 < iVar21) {
          iVar23 = iVar9;
        }
        iVar9 = 0;
        if (0 < iVar23) {
          iVar9 = iVar23;
        }
        ::FString::RemoveAt((FString *)pFVar18,iVar9,iVar21 - iVar9,Default);
      }
      plVar2 = *(longlong **)&param_1->field_0x8;
      local_1b8 = 0;
      if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
        if ((param_1->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_1b8,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,&local_1b8);
        }
      }
      else {
        local_1b8 = *(uint *)*plVar2;
        *plVar2 = *plVar2 + 4;
      }
      if ((int)local_1b8 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)local_1b8);
      }
      if (*(int *)(pFVar18 + 0x1c) < (int)local_1b8) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x24,4,local_1b8,(ForAnyElementType *)pFVar17,*(int *)(pFVar18 + 0x18),
                   (int *)(pFVar18 + 0x1c));
      }
      if (0 < (int)local_1b8) {
        do {
          plVar2 = *(longlong **)&param_1->field_0x8;
          local_1d8[0] = '\0';
          if ((char *)plVar2[1] < (char *)*plVar2 + 1) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_1d8,1);
          }
          else {
            local_1d8[0] = *(char *)*plVar2;
            *plVar2 = *plVar2 + 1;
          }
          if (local_1d8[0] != '\0') {
            pFVar11 = ::operator_new(0x88);
            if (pFVar11 == (FMaterialShaderMap *)0x0) {
              local_190 = (FMaterialShaderMap *)0x0;
            }
            else {
              local_190 = FMaterialShaderMap(pFVar11);
              if (local_190 != (FMaterialShaderMap *)0x0) {
                AddRef(local_190);
              }
            }
            local_f8._padding_ = (longlong)&___7FShaderSerializeContext__6B_;
            local_f8.bLoadingCooked = false;
            local_f8.SerializingAsset.ComparisonIndex.Value = 0;
            local_f8.SerializingAsset.Number = 0;
            local_f8.Ar = param_1;
            Serialize(local_190,&local_f8);
            local_108 = &local_190->ShaderMapId;
            local_100 = &local_190;
            TSet<TTuple<FMaterialShaderMapId,TRefCountPtr<FMaterialShaderMap>_>,TDefaultMapHashableKeyFuncs<FMaterialShaderMapId,TRefCountPtr<FMaterialShaderMap>,0>,FDefaultSetAllocator>
            ::
            Emplace<TPairInitializer<FMaterialShaderMapId_const_&,TRefCountPtr<FMaterialShaderMap>_const_&>_>
                      (&local_98,&local_170,(bool *)&local_108);
            pFVar11 = local_190;
                    /* WARNING: Load size is inaccurate */
            pFVar19 = &local_190->ShaderMapId;
            if (((*pFVar17 <= pFVar19) &&
                (pFVar19 < *pFVar17 + (longlong)*(int *)(pFVar18 + 0x1c) * 0x24)) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar7)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            iVar9 = *(int *)(pFVar18 + 0x18);
            if (iVar9 == *(int *)(pFVar18 + 0x1c)) {
              iVar9 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x424,(ForAnyElementType *)pFVar17,(int *)(pFVar18 + 0x1c));
            }
            lVar12 = (longlong)iVar9;
            *(int *)(pFVar18 + 0x18) = iVar9 + 1;
            uVar5 = *(undefined8 *)((pFVar11->ShaderMapId).CookedShaderMapIdHash.Hash + 8);
                    /* WARNING: Load size is inaccurate */
            FVar3.Data = *pFVar17;
            *(undefined8 *)(FVar3.Data + lVar12 * 0x24) =
                 *(undefined8 *)(pFVar19->CookedShaderMapIdHash).Hash;
            *(undefined8 *)(FVar3.Data + lVar12 * 0x24 + 8) = uVar5;
            uVar5 = *(undefined8 *)&(pFVar11->ShaderMapId).FeatureLevel;
            *(undefined8 *)(FVar3.Data + lVar12 * 0x24 + 0x10) =
                 *(undefined8 *)((pFVar11->ShaderMapId).CookedShaderMapIdHash.Hash + 0x10);
            *(undefined8 *)(FVar3.Data + lVar12 * 0x24 + 0x18) = uVar5;
            *(uint *)(FVar3.Data + lVar12 * 0x24 + 0x20) = (pFVar11->ShaderMapId).LayoutParams.Flags
            ;
            if (local_190 != (FMaterialShaderMap *)0x0) {
              Release(local_190);
            }
          }
          iVar25 = iVar25 + 1;
          uVar22 = local_1b4;
        } while (iVar25 < (int)local_1b8);
      }
      local_1b4 = uVar22 + 1;
      param_2 = local_198;
    } while ((int)local_1b4 < (int)local_1d4);
  }
  TSet<TTuple<FMaterialShaderMapId,TRefCountPtr<FMaterialShaderMap>_>,TDefaultMapHashableKeyFuncs<FMaterialShaderMapId,TRefCountPtr<FMaterialShaderMap>,0>,FDefaultSetAllocator>
  ::TIterator::TIterator((TIterator *)local_c8,&local_98);
  local_118 = &local_98;
  local_110 = 0;
  stack0xfffffffffffffec8 = local_c8._16_16_;
  local_148 = (longlong *)local_c8._0_8_;
  auStack_140._0_8_ = local_c8._8_8_;
  local_128 = local_a8;
  pTStack_120 = pTStack_a0;
  uVar16 = local_c8._24_8_ >> 0x20;
  if (local_c8._28_4_ < *(int *)(local_c8._16_8_ + 0x18)) {
    do {
      RegisterForODSC(*(FMaterialShaderMap **)((longlong)(int)uVar16 * 0x38 + 0x28 + *local_148),
                      param_2);
      uStack_130 = uStack_130 & ~auStack_140._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_140);
      uVar16 = (ulonglong)uStack_12c;
    } while ((int)uStack_12c < *(int *)(auStack_140._8_8_ + 0x18));
    if (((char)local_110 != '\0') && (local_110._1_1_ != '\0')) {
      uVar22 = *(int *)&(local_118->Elements).field_0x8 - *(int *)&(local_118->Elements).field_0x34;
      if (3 < uVar22) {
        uVar16 = (ulonglong)((uVar22 >> 1) + 7) * 2 + 1;
        lVar12 = 0x3f;
        if (uVar16 != 0) {
          for (; uVar16 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        local_170.Key._4_4_ = (undefined4)lVar12;
        iVar27 = 1 << ((byte)lVar12 & 0x1f);
      }
      if (((0 < (int)uVar22) && (local_118->HashSize < iVar27)) || (iVar27 < local_118->HashSize)) {
        local_118->HashSize = iVar27;
        TSet<TTuple<FMaterialShaderMapId,TRefCountPtr<FMaterialShaderMap>_>,TDefaultMapHashableKeyFuncs<FMaterialShaderMapId,TRefCountPtr<FMaterialShaderMap>,0>,FDefaultSetAllocator>
        ::Rehash(local_118);
      }
    }
  }
  if ((uint)local_1a8 != local_1d4) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("MaterialShaderMapDataArray.Num() == MapSize",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialShader.cpp"
                       ,0x913,L"");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  local_1b4 = 0;
  uVar22 = (uint)local_1a8;
  if (0 < (int)local_1d4) {
    local_178 = 0;
    do {
      lVar12 = local_178;
      uVar26 = local_1b4;
      local_1c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1c8.ArrayNum = 0;
      local_1c8.ArrayMax = 0;
      uVar10 = 0;
      if ((int)local_1b4 < (int)uVar22) {
        uVar10 = ~local_1b4 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar17 = local_1b0.Data + lVar12;
      local_188.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_188.Data.ArrayNum = *(int *)(pFVar17 + 8);
      lVar12 = (longlong)local_188.Data.ArrayNum;
      _Src = *(void **)pFVar17;
      if (local_188.Data.ArrayNum == 0) {
        local_188.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_188.Data.ArrayNum,0,(ForAnyElementType *)&local_188,
                   local_188.Data.ArrayNum,&local_188.Data.ArrayMax);
        memcpy(local_188.Data.AllocatorInstance.Data,_Src,lVar12 * 2);
      }
      uVar22 = *(uint *)(pFVar17 + 0x18);
      if ((int)uVar22 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar22);
      }
      if (local_1c8.ArrayMax < (int)uVar22) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,uVar22,&local_1c8.AllocatorInstance,local_1c8.ArrayNum,&local_1c8.ArrayMax);
      }
      iVar27 = *(int *)(pFVar17 + 0x18);
      pFVar20 = *(FMaterialShaderMapId **)(pFVar17 + 0x10);
      pFVar19 = pFVar20 + iVar27;
      while( true ) {
        if (*(int *)(pFVar17 + 0x18) != iVar27) {
          local_1d0[0] = 0;
          `TCheckedPointerIterator<FMaterialShaderMapId_const_,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(local_1d0);
        }
        if (pFVar20 == pFVar19) break;
        iVar9 = TSet<TTuple<FMaterialShaderMapId,TRefCountPtr<FMaterialShaderMap>_>,TDefaultMapHashableKeyFuncs<FMaterialShaderMapId,TRefCountPtr<FMaterialShaderMap>,0>,FDefaultSetAllocator>
                ::FindIndexByHash<FMaterialShaderMapId>
                          (&local_98,*(uint *)(pFVar20->CookedShaderMapIdHash).Hash,pFVar20);
        if (iVar9 == -1) {
          lVar12 = 0;
LAB_147f81ddf:
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Pair != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                             ,0x288,L"");
          if (bVar7) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        else {
          lVar12 = (longlong)iVar9 * 0x38 + local_98.Elements._0_8_;
          if (lVar12 == 0) goto LAB_147f81ddf;
        }
        pFVar18 = (FScriptContainerElement *)(lVar12 + 0x28);
        if (((local_1c8.AllocatorInstance.Data <= pFVar18) &&
            (pFVar18 < local_1c8.AllocatorInstance.Data + (longlong)local_1c8.ArrayMax * 8)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar9 = local_1c8.ArrayNum;
        if (local_1c8.ArrayNum == local_1c8.ArrayMax) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&local_1c8.AllocatorInstance,&local_1c8.ArrayMax);
        }
        local_1c8.ArrayNum = iVar9 + 1;
        TRefCountPtr<FMaterialShaderMap>::TRefCountPtr<FMaterialShaderMap>
                  ((TRefCountPtr<FMaterialShaderMap> *)
                   (local_1c8.AllocatorInstance.Data + (longlong)iVar9 * 8),
                   (TRefCountPtr<FMaterialShaderMap> *)pFVar18);
        pFVar20 = pFVar20 + 1;
      }
      FODSCManager::RegisterMaterialShaderMaps(&local_188,&local_1c8);
      if (local_188.Data.ArrayNum == 0) {
        local_158 = (FScriptContainerElement *)0x15060d16c;
LAB_147f81edf:
        sVar13 = wcslen((wchar_t *)local_158);
        iVar27 = (int)sVar13;
      }
      else {
        iVar27 = 0;
        local_158 = local_188.Data.AllocatorInstance.Data;
        if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
        goto LAB_147f81edf;
      }
      iStack_150 = iVar27;
      pUVar14 = Z_Construct_UClass_UMaterialInterface_NoRegister();
      local_d8._12_4_ = uStack_14c;
      local_d8.Size = iStack_150;
      local_d8.DataPtr = (wchar_t *)local_158;
      local_1a0 = StaticFindObject(pUVar14,(UObject *)0x0,&local_d8,None);
      pTVar6 = local_170.Value;
      if (local_1a0 != (UObject *)0x0) {
        pFVar17 = ((ForAnyElementType *)&(local_170.Value)->Reference)->Data;
        if (((pFVar17 <= (FScriptContainerElement *)&local_1a0) &&
            ((FScriptContainerElement *)&local_1a0 <
             pFVar17 + (longlong)*(int *)((longlong)local_170.Value + 0xc) * 8)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar27 = *(int *)((longlong)pTVar6 + 8);
        if (iVar27 == *(int *)((longlong)pTVar6 + 0xc)) {
          iVar27 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,(ForAnyElementType *)pTVar6,(int *)((longlong)pTVar6 + 0xc));
        }
        uVar24 = 0;
        *(int *)((longlong)pTVar6 + 8) = iVar27 + 1;
        *(UObject **)(((ForAnyElementType *)&pTVar6->Reference)->Data + (longlong)iVar27 * 8) =
             local_1a0;
        uVar16 = uVar24;
        do {
          iVar27 = (int)uVar16;
          uVar16 = uVar24;
          uVar28 = uVar24;
          if (0 < local_1c8.ArrayNum) {
            do {
              uVar26 = (uint)uVar16;
              uVar22 = 0;
              if ((int)uVar26 < local_1c8.ArrayNum) {
                uVar22 = ~uVar26 >> 0x1f;
              }
              if ((uVar22 == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar7)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              pFVar11 = *(FMaterialShaderMap **)(local_1c8.AllocatorInstance.Data + uVar28);
              if ((FShaderMapContent *)pFVar11->_padding_ == (FShaderMapContent *)0x0) {
                EVar8 = SP_NumPlatforms;
              }
              else {
                EVar8 = FShaderMapContent::GetShaderPlatform
                                  ((FShaderMapContent *)pFVar11->_padding_);
              }
              if (EVar8 == param_2) {
                if ((FGenericDataDrivenShaderPlatformInfo::Infos[param_2].bContainsValidPlatformInfo
                     == 0) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("IsValid(Platform)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                                       ,0xe2,L""), bVar7)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                if ((pFVar11->ShaderMapId).FeatureLevel ==
                    FGenericDataDrivenShaderPlatformInfo::Infos[param_2].MaxFeatureLevel) {
                  TVar1 = (pFVar11->ShaderMapId).QualityLevel;
                  if (iVar27 == 0) {
                    if (TVar1 == Num) {
LAB_147f820b4:
                      pFVar15 = (FMaterial *)
                                (**(code **)(*(longlong *)local_1a0 + 0x390))(local_1a0,param_2,0);
                      FMaterial::SetGameThreadShaderMap(pFVar15,pFVar11);
                      if (iVar27 == 0) {
                        if (TVar1 == Num) goto LAB_147f820ef;
                      }
                      else if (iVar27 == 1) goto LAB_147f820ea;
                    }
                  }
                  else if (iVar27 == 1) {
                    if (TVar1 == Low) goto LAB_147f820b4;
LAB_147f820ea:
                    if (TVar1 == High) {
LAB_147f820ef:
                      pFVar15 = (FMaterial *)
                                (**(code **)(*(longlong *)local_1a0 + 0x390))(local_1a0,param_2);
                      FMaterial::SetGameThreadShaderMap(pFVar15,pFVar11);
                      if (iVar27 == 0) {
                        if (TVar1 == Num) goto LAB_147f82123;
                      }
                      else if (iVar27 == 1) goto LAB_147f8211e;
                    }
                    else {
LAB_147f8211e:
                      if (TVar1 == Medium) {
LAB_147f82123:
                        pFVar15 = (FMaterial *)
                                  (**(code **)(*(longlong *)local_1a0 + 0x390))(local_1a0,param_2);
                        FMaterial::SetGameThreadShaderMap(pFVar15,pFVar11);
                        if (iVar27 == 0) {
                          if (TVar1 == Num) goto LAB_147f82157;
                        }
                        else if (iVar27 == 1) goto LAB_147f82152;
                      }
                      else {
LAB_147f82152:
                        if (TVar1 == Epic) {
LAB_147f82157:
                          pFVar15 = (FMaterial *)
                                    (**(code **)(*(longlong *)local_1a0 + 0x390))(local_1a0,param_2)
                          ;
                          FMaterial::SetGameThreadShaderMap(pFVar15,pFVar11);
                        }
                      }
                    }
                  }
                }
              }
              uVar16 = (ulonglong)(uVar26 + 1);
              uVar28 = uVar28 + 8;
            } while ((int)(uVar26 + 1) < local_1c8.ArrayNum);
          }
          uVar16 = (ulonglong)(iVar27 + 1U);
          uVar26 = local_1b4;
        } while ((int)(iVar27 + 1U) < 2);
      }
      if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_188.Data.AllocatorInstance.Data);
      }
      DestructItems<TRefCountPtr<FMaterialShaderMap>,int>
                ((TRefCountPtr<FMaterialShaderMap> *)local_1c8.AllocatorInstance.Data,
                 local_1c8.ArrayNum);
      if (local_1c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1c8.AllocatorInstance.Data);
      }
      local_1b4 = uVar26 + 1;
      local_178 = local_178 + 0x20;
      uVar22 = (uint)local_1a8;
    } while ((int)local_1b4 < (int)local_1d4);
  }
  DestructItems<_FMaterialShaderMap::LoadForRemoteRecompile_::__l2::FMaterialShaderMapData,int>
            ((FMaterialShaderMapData *)local_1b0.Data,uVar22);
  if ((FMaterialShaderMapData *)local_1b0.Data != (FMaterialShaderMapData *)0x0) {
    FMemory::Free(local_1b0.Data);
  }
  local_98.HashSize = 0;
  if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_98.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<FMaterialShaderMapId,TRefCountPtr<FMaterialShaderMap>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FMaterialShaderMapId,TRefCountPtr<FMaterialShaderMap>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_98.Elements);
  return;
}

// PostFinalizeContent @ 147f82cf0

void __thiscall FMaterialShaderMap::PostFinalizeContent(FMaterialShaderMap *this)

{
  TRefCountPtr<FRHIUniformBufferLayout_const_> *pTVar1;
  longlong lVar2;
  FRHIUniformBufferLayout *pFVar3;
  FRHIUniformBufferLayout *this_00;
  FLLMScope local_res8 [2];
  FMemScope local_res10;
  longlong local_18 [2];
  
  pTVar1 = &this->UniformBufferLayout;
  pFVar3 = pTVar1->Reference;
  this_00 = (FRHIUniformBufferLayout *)0x0;
  if (pFVar3 != (FRHIUniformBufferLayout *)0x0) {
    pTVar1->Reference = (FRHIUniformBufferLayout *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar3);
  }
  lVar2 = this->_padding_;
  if (lVar2 != 0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `class_TRefCountPtr<FRHIUniformBufferLayout_const_>___cdecl_RHICreateUniformBufferLayout(FRHIUniformBufferLayoutInitializer_const&___ptr64)'
         ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`class_TRefCountPtr<FRHIUniformBufferLayout_const_>___cdecl_RHICreateUniformBufferLayout(FRHIUniformBufferLayoutInitializer_const&___ptr64)'
                             ::__l2::_thread_safe_static_guard_0__),
       `class_TRefCountPtr<FRHIUniformBufferLayout_const_>___cdecl_RHICreateUniformBufferLayout(FRHIUniformBufferLayoutInitializer_const&___ptr64)'
       ::__l2::_thread_safe_static_guard_0__ == -1)) {
      ::FName::FName(&`class_TRefCountPtr<FRHIUniformBufferLayout_const_>___cdecl_RHICreateUniformBufferLayout(FRHIUniformBufferLayoutInitializer_const&___ptr64)'
                      ::__l2::LLMScope_Name1227,L"RHIMisc/CreateUniformBufferLayout");
      _Init_thread_footer(&`class_TRefCountPtr<FRHIUniformBufferLayout_const_>___cdecl_RHICreateUniformBufferLayout(FRHIUniformBufferLayoutInitializer_const&___ptr64)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
    FLLMScope::FLLMScope
              (local_res8,
               `class_TRefCountPtr<FRHIUniformBufferLayout_const_>___cdecl_RHICreateUniformBufferLayout(FRHIUniformBufferLayoutInitializer_const&___ptr64)'
               ::__l2::LLMScope_Name1227,false,None,Default,true);
    FMemScope::FMemScope
              (&local_res10,
               &`class_TRefCountPtr<FRHIUniformBufferLayout_const_>___cdecl_RHICreateUniformBufferLayout(FRHIUniformBufferLayoutInitializer_const&___ptr64)'
                ::__l2::LLMScope_Name1227,true);
    pFVar3 = ::operator_new(0x98);
    if ((pFVar3 != (FRHIUniformBufferLayout *)0x0) &&
       (this_00 = FRHIUniformBufferLayout::FRHIUniformBufferLayout
                            (pFVar3,(FRHIUniformBufferLayoutInitializer *)(lVar2 + 0x1c8)),
       this_00 != (FRHIUniformBufferLayout *)0x0)) {
      FRHIResource::AddRef((FRHIResource *)this_00);
    }
    FMemScope::~FMemScope(&local_res10);
    FLLMScope::~FLLMScope(local_res8);
    if (pTVar1 != (TRefCountPtr<FRHIUniformBufferLayout_const_> *)local_18) {
      pFVar3 = pTVar1->Reference;
      pTVar1->Reference = this_00;
      this_00 = pFVar3;
    }
    if (this_00 != (FRHIUniformBufferLayout *)0x0) {
      FRHIResource::Release((FRHIResource *)this_00);
    }
  }
  return;
}

// Register @ 147f82f90

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FMaterialShaderMap::Register(FMaterialShaderMap *this,EShaderPlatform param_1)

{
  FName FVar1;
  FMaterialShaderMap *pFVar2;
  code *pcVar3;
  bool bVar4;
  EShaderPlatform EVar5;
  EShaderPlatform EVar6;
  uint uVar7;
  int iVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<FStat_STAT_Shaders_NumShaderMaps> FVar10;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FCsvProfiler *this_02;
  TCsvPersistentCustomStat<int> *pTVar11;
  longlong lVar12;
  undefined8 *puVar13;
  ulong64 uVar14;
  FNameEntryId FVar15;
  TPairInitializer<FMaterialShaderMapId_const_&,FMaterialShaderMap_*_&&> local_res8;
  FName local_res18;
  FMaterialShaderMap *local_res20;
  FName local_78;
  FName local_70;
  FStatMessage local_68;
  FMaterialShaderMapId *local_58;
  FMaterialShaderMap **local_50;
  FDestructionSentinel local_48;
  undefined8 local_30;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &OnSharedShaderMapResourceExplicitRelease,(FWriteAccessScope *)&local_48);
    local_30 = 0x155194a98;
    puVar13 = UE::Core::Private::DelegateAllocate
                        (0x20,(FDelegateAllocation *)
                              &OnSharedShaderMapResourceExplicitRelease.field_0x8);
    if (puVar13 != (undefined8 *)0x0) {
      *puVar13 = &
                 ___7__TCommonDelegateInstanceState___A6AXPEBVFShaderMapResource___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar14 = FDelegateHandle::GenerateNewID();
      puVar13[2] = uVar14;
      *puVar13 = &
                 ___7__TBaseStaticDelegateInstance___A6AXPEBVFShaderMapResource___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar13[3] = ShaderMapResourceExplicitRelease;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    _Init_thread_footer(&::_TSS0);
  }
  bVar4 = CreateShadersOnLoad();
  if (((bVar4) && (GMaxRHIShaderPlatform == param_1)) &&
     ((FShaderMapResource *)this->_padding_ != (FShaderMapResource *)0x0)) {
    FShaderMapResource::BeginCreateAllShaders((FShaderMapResource *)this->_padding_);
  }
  if (this->bRegistered == 0) {
    FVar10 = StatPtr_STAT_Shaders_NumShaderMaps;
    if (StatPtr_STAT_Shaders_NumShaderMaps ==
        (FThreadSafeStaticStat<FStat_STAT_Shaders_NumShaderMaps>)0x0) {
      pFVar9 = ::FName::FName(&local_78,"STAT_Shaders_NumShaderMaps");
      FVar10 = (FThreadSafeStaticStat<FStat_STAT_Shaders_NumShaderMaps>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Shaders_NumShaderMaps,*pFVar9,
                          L"Num ShaderMaps Loaded","STATGROUP_Shaders","STATCAT_Advanced",
                          L"Shader Compression",true,false,ST_int64,false,false,MCR_Invalid);
    }
    FVar1 = *(FName *)FVar10;
    FVar15 = FVar1.ComparisonIndex.Value;
    uVar7 = FVar1.Number;
    local_res8.Key._0_4_ = FVar15.Value;
    local_res8.Key._4_4_ = uVar7;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      local_68.NameAndInfo.Number = uVar7 & 0xffffafff | 0xa000;
      local_68.StatData.Pad[0] = '\x01';
      local_68.StatData.Pad[1] = '\0';
      local_68.StatData.Pad[2] = '\0';
      local_68.StatData.Pad[3] = '\0';
      local_68.StatData.Pad[4] = '\0';
      local_68.StatData.Pad[5] = '\0';
      local_68.StatData.Pad[6] = '\0';
      local_68.StatData.Pad[7] = '\0';
      local_res18 = FVar1;
      local_68.NameAndInfo.Index.Value = FVar15.Value;
      FThreadStats::AddStatMessage(this_00,&local_68);
      FStatsTrace::Add(&local_res18,1);
      if (this_00->ScopeCount == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
    this_02 = FCsvProfiler::Get();
    uVar7 = _GCsvCategory_Shaders.Index;
    pFVar9 = ::FName::FName(&local_70,L"NumShaderMaps");
    pTVar11 = FCsvProfiler::GetOrCreatePersistentCustomStatInt(this_02,*pFVar9,uVar7,false);
    LOCK();
    pTVar11->Value = (atomic<int>)((int)pTVar11->Value + 1);
    UNLOCK();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&GIdToMaterialShaderMapCS);
  EVar6 = SP_NumPlatforms;
  if ((FShaderMapContent *)this->_padding_ == (FShaderMapContent *)0x0) {
    EVar5 = SP_NumPlatforms;
  }
  else {
    EVar5 = FShaderMapContent::GetShaderPlatform((FShaderMapContent *)this->_padding_);
  }
  iVar8 = TSet<TTuple<FMaterialShaderMapId,FMaterialShaderMap_*>,TDefaultMapHashableKeyFuncs<FMaterialShaderMapId,FMaterialShaderMap_*,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FMaterialShaderMapId>
                    ((TSet<TTuple<FMaterialShaderMapId,FMaterialShaderMap_*>,TDefaultMapHashableKeyFuncs<FMaterialShaderMapId,FMaterialShaderMap_*,0>,FDefaultSetAllocator>
                      *)(&GIdToMaterialShaderMap + (ulonglong)EVar5 * 0x50),
                     *(uint *)(this->ShaderMapId).CookedShaderMapIdHash.Hash,&this->ShaderMapId);
  if (((iVar8 == -1) ||
      (lVar12 = (longlong)iVar8 * 0x38 +
                *(longlong *)
                 &((TSet<TTuple<FMaterialShaderMapId,FMaterialShaderMap_*>,TDefaultMapHashableKeyFuncs<FMaterialShaderMapId,FMaterialShaderMap_*,0>,FDefaultSetAllocator>
                    *)(&GIdToMaterialShaderMap + (ulonglong)EVar5 * 0x50))->Elements, lVar12 == 0))
     || (pFVar2 = *(FMaterialShaderMap **)(lVar12 + 0x28), pFVar2 == (FMaterialShaderMap *)0x0)) {
    if ((FShaderMapContent *)this->_padding_ != (FShaderMapContent *)0x0) {
      EVar6 = FShaderMapContent::GetShaderPlatform((FShaderMapContent *)this->_padding_);
    }
    local_50 = &local_res20;
    local_res20 = this;
    local_58 = &this->ShaderMapId;
    TSet<TTuple<FMaterialShaderMapId,FMaterialShaderMap_*>,TDefaultMapHashableKeyFuncs<FMaterialShaderMapId,FMaterialShaderMap_*,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FMaterialShaderMapId_const_&,FMaterialShaderMap_*_&&>_>
              ((TSet<TTuple<FMaterialShaderMapId,FMaterialShaderMap_*>,TDefaultMapHashableKeyFuncs<FMaterialShaderMapId,FMaterialShaderMap_*,0>,FDefaultSetAllocator>
                *)(&GIdToMaterialShaderMap + (ulonglong)EVar6 * 0x50),&local_res8,(bool *)&local_58)
    ;
    this->bRegistered = 1;
  }
  else {
    if (this->bRegistered == 0) {
      if (pFVar2 != this) goto LAB_147f83281;
    }
    else if (pFVar2 == this) goto LAB_147f83281;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(bRegistered == false && CachedMap != this) || (bRegistered == true && CachedMap == this)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialShader.cpp"
                       ,0xe73,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
LAB_147f83281:
                    /* WARNING: Could not recover jumptable at 0x000147f83295. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&GIdToMaterialShaderMapCS);
  return;
}

// RegisterForODSC @ 147f83360

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FMaterialShaderMap::RegisterForODSC(FMaterialShaderMap *this,EShaderPlatform param_1)

{
  FMaterialShaderMapId *pFVar1;
  FMaterialShaderMap *pFVar2;
  code *pcVar3;
  bool bVar4;
  EShaderPlatform EVar5;
  EShaderPlatform EVar6;
  int iVar7;
  TPairInitializer<FMaterialShaderMapId_const_&,FMaterialShaderMap_*_&&> *pTVar8;
  longlong lVar9;
  FMaterialShaderMapId **ppFVar10;
  TPairInitializer<FMaterialShaderMapId_const_&,FMaterialShaderMap_*_&&> local_res18;
  FMaterialShaderMap *local_58;
  FMaterialShaderMap *local_50;
  FMaterialShaderMapId *local_48;
  FMaterialShaderMap **local_40;
  FMaterialShaderMapId *local_38;
  FMaterialShaderMap **local_30;
  
  Register(this,param_1);
  EnterCriticalSection((LPCRITICAL_SECTION)&GIdToMaterialShaderMapCS);
  EVar6 = SP_NumPlatforms;
  if ((FShaderMapContent *)this->_padding_ == (FShaderMapContent *)0x0) {
    EVar5 = SP_NumPlatforms;
  }
  else {
    EVar5 = FShaderMapContent::GetShaderPlatform((FShaderMapContent *)this->_padding_);
  }
  pFVar1 = &this->ShaderMapId;
  iVar7 = TSet<TTuple<FMaterialShaderMapId,FMaterialShaderMap_*>,TDefaultMapHashableKeyFuncs<FMaterialShaderMapId,FMaterialShaderMap_*,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FMaterialShaderMapId>
                    ((TSet<TTuple<FMaterialShaderMapId,FMaterialShaderMap_*>,TDefaultMapHashableKeyFuncs<FMaterialShaderMapId,FMaterialShaderMap_*,0>,FDefaultSetAllocator>
                      *)(&GIdToMaterialShaderMap + (ulonglong)EVar5 * 0x50),
                     *(uint *)(this->ShaderMapId).CookedShaderMapIdHash.Hash,pFVar1);
  if (((iVar7 == -1) ||
      (lVar9 = (longlong)iVar7 * 0x38 +
               *(longlong *)
                &((TSet<TTuple<FMaterialShaderMapId,FMaterialShaderMap_*>,TDefaultMapHashableKeyFuncs<FMaterialShaderMapId,FMaterialShaderMap_*,0>,FDefaultSetAllocator>
                   *)(&GIdToMaterialShaderMap + (ulonglong)EVar5 * 0x50))->Elements, lVar9 == 0)) ||
     (pFVar2 = *(FMaterialShaderMap **)(lVar9 + 0x28), pFVar2 == (FMaterialShaderMap *)0x0)) {
    if ((FShaderMapContent *)this->_padding_ != (FShaderMapContent *)0x0) {
      EVar6 = FShaderMapContent::GetShaderPlatform((FShaderMapContent *)this->_padding_);
    }
    local_30 = &local_50;
    ppFVar10 = &local_38;
    pTVar8 = (TPairInitializer<FMaterialShaderMapId_const_&,FMaterialShaderMap_*_&&> *)
             &local_res18.Value;
    local_50 = this;
    local_38 = pFVar1;
  }
  else {
    if (pFVar2 == this) goto LAB_147f834d3;
    if ((FShaderMapContent *)this->_padding_ == (FShaderMapContent *)0x0) {
      EVar5 = SP_NumPlatforms;
    }
    else {
      EVar5 = FShaderMapContent::GetShaderPlatform((FShaderMapContent *)this->_padding_);
    }
    iVar7 = TMapBase<FMaterialShaderMapId,FMaterialShaderMap_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMaterialShaderMapId,FMaterialShaderMap_*,0>_>
            ::Remove((TMapBase<FMaterialShaderMapId,FMaterialShaderMap_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMaterialShaderMapId,FMaterialShaderMap_*,0>_>
                      *)(&GIdToMaterialShaderMap + (ulonglong)EVar5 * 0x50),pFVar1);
    if (iVar7 == -1) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("RemoveIndex != INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialShader.cpp"
                         ,0xe8b,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar2->bRegistered = 0;
    if ((FShaderMapContent *)this->_padding_ != (FShaderMapContent *)0x0) {
      EVar6 = FShaderMapContent::GetShaderPlatform((FShaderMapContent *)this->_padding_);
    }
    local_40 = &local_58;
    ppFVar10 = &local_48;
    pTVar8 = &local_res18;
    local_58 = this;
    local_48 = pFVar1;
  }
  TSet<TTuple<FMaterialShaderMapId,FMaterialShaderMap_*>,TDefaultMapHashableKeyFuncs<FMaterialShaderMapId,FMaterialShaderMap_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FMaterialShaderMapId_const_&,FMaterialShaderMap_*_&&>_>
            ((TSet<TTuple<FMaterialShaderMapId,FMaterialShaderMap_*>,TDefaultMapHashableKeyFuncs<FMaterialShaderMapId,FMaterialShaderMap_*,0>,FDefaultSetAllocator>
              *)(&GIdToMaterialShaderMap + (ulonglong)EVar6 * 0x50),pTVar8,(bool *)ppFVar10);
  this->bRegistered = 1;
LAB_147f834d3:
  this->bIsFromODSC = 1;
                    /* WARNING: Could not recover jumptable at 0x000147f834f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&GIdToMaterialShaderMapCS);
  return;
}

// Release @ 147f84450

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall FMaterialShaderMap::Release(FMaterialShaderMap *this)

{
  int *piVar1;
  FName FVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  EShaderPlatform EVar6;
  EShaderPlatform EVar7;
  int iVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<FStat_STAT_Shaders_NumShaderMaps> FVar10;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FCsvProfiler *this_02;
  TCsvPersistentCustomStat<int> *pTVar11;
  FMaterialShaderMap *pFVar12;
  longlong lVar13;
  ulonglong uVar14;
  FMaterialShaderMap *pFVar15;
  FName local_res18;
  FName local_res20;
  FName local_48;
  FStatMessage local_40;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&GIdToMaterialShaderMapCS);
  if ((this->NumRefs < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumRefs > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialShader.cpp"
                         ,0xeab,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar15 = (FMaterialShaderMap *)0x0;
  piVar1 = &this->NumRefs;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    if (ZPULL(*(undefined4 *)&this->field_0x80,0,1) == 0) {
      if ((FShaderMapContent *)this->_padding_ != (FShaderMapContent *)0x0) {
        EVar7 = FShaderMapContent::GetShaderPlatform((FShaderMapContent *)this->_padding_);
        uVar14 = 0x9b;
        if (EVar7 < SP_NumPlatforms) {
          if ((FShaderMapContent *)this->_padding_ != (FShaderMapContent *)0x0) {
            EVar7 = FShaderMapContent::GetShaderPlatform((FShaderMapContent *)this->_padding_);
            uVar14 = (ulonglong)EVar7;
          }
          iVar8 = TSet<TTuple<FMaterialShaderMapId,FMaterialShaderMap_*>,TDefaultMapHashableKeyFuncs<FMaterialShaderMapId,FMaterialShaderMap_*,0>,FDefaultSetAllocator>
                  ::FindIndexByHash<FMaterialShaderMapId>
                            ((TSet<TTuple<FMaterialShaderMapId,FMaterialShaderMap_*>,TDefaultMapHashableKeyFuncs<FMaterialShaderMapId,FMaterialShaderMap_*,0>,FDefaultSetAllocator>
                              *)(&GIdToMaterialShaderMap + uVar14 * 0x50),
                             *(uint *)(this->ShaderMapId).CookedShaderMapIdHash.Hash,
                             &this->ShaderMapId);
          pFVar12 = pFVar15;
          if ((iVar8 != -1) &&
             (lVar13 = (longlong)iVar8 * 0x38 +
                       *(longlong *)
                        &((TSet<TTuple<FMaterialShaderMapId,FMaterialShaderMap_*>,TDefaultMapHashableKeyFuncs<FMaterialShaderMapId,FMaterialShaderMap_*,0>,FDefaultSetAllocator>
                           *)(&GIdToMaterialShaderMap + uVar14 * 0x50))->Elements, lVar13 != 0)) {
            pFVar12 = *(FMaterialShaderMap **)(lVar13 + 0x28);
          }
          if ((pFVar12 == this) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("GetShaderPlatform()>= EShaderPlatform::SP_NumPlatforms || GIdToMaterialShaderMap[GetShaderPlatform()].FindRef(ShaderMapId) != this"
                                 ,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialShader.cpp"
                                 ,0xec6,L""), bVar5)) goto code_r0x000147f847ac;
        }
      }
    }
    else {
      *(uint *)&this->field_0x80 = *(undefined4 *)&this->field_0x80 & 0xfffffffe;
      FVar10 = StatPtr_STAT_Shaders_NumShaderMaps;
      if (StatPtr_STAT_Shaders_NumShaderMaps ==
          (FThreadSafeStaticStat<FStat_STAT_Shaders_NumShaderMaps>)0x0) {
        pFVar9 = ::FName::FName(&local_res20,"STAT_Shaders_NumShaderMaps");
        FVar10 = (FThreadSafeStaticStat<FStat_STAT_Shaders_NumShaderMaps>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Shaders_NumShaderMaps,*pFVar9
                            ,L"Num ShaderMaps Loaded","STATGROUP_Shaders","STATCAT_Advanced",
                            L"Shader Compression",true,false,ST_int64,false,false,MCR_Invalid);
      }
      FVar2 = *(FName *)FVar10;
      if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        this_00 = TlsGetValue(FThreadStats::TlsSlot);
        if (this_00 == (FThreadStats *)0x0) {
          this_01 = FThreadStatsPool::Get();
          this_00 = FThreadStatsPool::GetFromPool(this_01);
        }
        local_40.NameAndInfo.Number = FVar2.Number & 0xffffbfff | 0xb000;
        local_40.StatData.Pad[0] = '\x01';
        local_40.StatData.Pad[1] = '\0';
        local_40.StatData.Pad[2] = '\0';
        local_40.StatData.Pad[3] = '\0';
        local_40.StatData.Pad[4] = '\0';
        local_40.StatData.Pad[5] = '\0';
        local_40.StatData.Pad[6] = '\0';
        local_40.StatData.Pad[7] = '\0';
        local_res18 = FVar2;
        local_40.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
        FThreadStats::AddStatMessage(this_00,&local_40);
        FStatsTrace::Add(&local_res18,-1);
        if (this_00->ScopeCount == 0) {
          FThreadStats::Flush(this_00,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(this_00,false,false);
        }
      }
      this_02 = FCsvProfiler::Get();
      uVar4 = _GCsvCategory_Shaders.Index;
      pFVar9 = ::FName::FName(&local_48,L"NumShaderMaps");
      pTVar11 = FCsvProfiler::GetOrCreatePersistentCustomStatInt(this_02,*pFVar9,uVar4,false);
      EVar7 = SP_NumPlatforms;
      LOCK();
      pTVar11->Value = (atomic<int>)((int)pTVar11->Value + -1);
      UNLOCK();
      if ((FShaderMapContent *)this->_padding_ == (FShaderMapContent *)0x0) {
        EVar6 = SP_NumPlatforms;
      }
      else {
        EVar6 = FShaderMapContent::GetShaderPlatform((FShaderMapContent *)this->_padding_);
      }
      iVar8 = TSet<TTuple<FMaterialShaderMapId,FMaterialShaderMap_*>,TDefaultMapHashableKeyFuncs<FMaterialShaderMapId,FMaterialShaderMap_*,0>,FDefaultSetAllocator>
              ::FindIndexByHash<FMaterialShaderMapId>
                        ((TSet<TTuple<FMaterialShaderMapId,FMaterialShaderMap_*>,TDefaultMapHashableKeyFuncs<FMaterialShaderMapId,FMaterialShaderMap_*,0>,FDefaultSetAllocator>
                          *)(&GIdToMaterialShaderMap + (ulonglong)EVar6 * 0x50),
                         *(uint *)(this->ShaderMapId).CookedShaderMapIdHash.Hash,&this->ShaderMapId)
      ;
      pFVar12 = pFVar15;
      if ((iVar8 != -1) &&
         (lVar13 = (longlong)iVar8 * 0x38 +
                   *(longlong *)
                    &((TSet<TTuple<FMaterialShaderMapId,FMaterialShaderMap_*>,TDefaultMapHashableKeyFuncs<FMaterialShaderMapId,FMaterialShaderMap_*,0>,FDefaultSetAllocator>
                       *)(&GIdToMaterialShaderMap + (ulonglong)EVar6 * 0x50))->Elements, lVar13 != 0
         )) {
        pFVar12 = *(FMaterialShaderMap **)(lVar13 + 0x28);
      }
      if (pFVar12 == this) {
        if ((FShaderMapContent *)this->_padding_ != (FShaderMapContent *)0x0) {
          EVar7 = FShaderMapContent::GetShaderPlatform((FShaderMapContent *)this->_padding_);
        }
        TMapBase<FMaterialShaderMapId,FMaterialShaderMap_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMaterialShaderMapId,FMaterialShaderMap_*,0>_>
        ::Remove((TMapBase<FMaterialShaderMapId,FMaterialShaderMap_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMaterialShaderMapId,FMaterialShaderMap_*,0>_>
                  *)(&GIdToMaterialShaderMap + (ulonglong)EVar7 * 0x50),&this->ShaderMapId);
      }
      else {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("CachedMap == this",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialShader.cpp"
                           ,0xebc,L"");
        if (bVar5) {
code_r0x000147f847ac:
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
    }
    if ((this->bDeletedThroughDeferredCleanup != false) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("!bDeletedThroughDeferredCleanup",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialShader.cpp"
                           ,0xecc,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    this->bDeletedThroughDeferredCleanup = true;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&GIdToMaterialShaderMapCS);
  if (this->bDeletedThroughDeferredCleanup != false) {
    pFVar12 = (FMaterialShaderMap *)&this->_padding_;
    if (this == (FMaterialShaderMap *)0x0) {
      pFVar12 = pFVar15;
    }
    BeginCleanup((FDeferredCleanupInterface *)pFVar12);
  }
  return;
}

// SaveForRemoteRecompile @ 147f85a20

void __cdecl
FMaterialShaderMap::SaveForRemoteRecompile
          (FArchive *param_1,
          TMap<FString,TArray<TRefCountPtr<FMaterialShaderMap>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<TRefCountPtr<FMaterialShaderMap>,TSizedDefaultAllocator<32>_>,0>_>
          *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  void *_Src;
  FMaterialShaderMap *this;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint *puVar12;
  uint uVar13;
  ulonglong uVar14;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  uint local_res18 [2];
  uint local_res20 [2];
  FString local_d8;
  int local_c8;
  TMap<FString,TArray<TRefCountPtr<FMaterialShaderMap>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<TRefCountPtr<FMaterialShaderMap>,TSizedDefaultAllocator<32>_>,0>_>
  *local_c0;
  uint uStack_b8;
  uint uStack_b4;
  undefined1 *local_b0;
  undefined4 uStack_a8;
  uint uStack_a4;
  uint local_a0;
  uint uStack_9c;
  TMap<FString,TArray<TRefCountPtr<FMaterialShaderMap>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<TRefCountPtr<FMaterialShaderMap>,TSizedDefaultAllocator<32>_>,0>_>
  *local_90;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_88;
  FShaderSerializeContext local_68;
  
  local_res18[0] = *(int *)&param_2->field_0x8 - *(int *)&param_2->field_0x34;
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res18,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res18);
    }
  }
  else {
    local_res18[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  uVar6 = *(uint *)&param_2->field_0x28;
  local_b0 = &param_2->field_0x10;
  uVar14 = 0;
  uStack_b4 = 1;
  uVar13 = 0;
  uVar8 = uVar14;
  uStack_b8 = uVar13;
  local_a0 = uVar13;
  if (uVar6 != 0) {
    uVar8 = (ulonglong)uVar6;
    puVar12 = *(uint **)&param_2->field_0x20;
    if (*(uint **)&param_2->field_0x20 == (uint *)0x0) {
      puVar12 = (uint *)local_b0;
    }
    uVar5 = *puVar12;
    uVar10 = uVar14;
    uVar11 = uVar14;
    local_a0 = 0;
    uStack_b8 = 0;
    while (uVar5 == 0) {
      iVar9 = (int)uVar10;
      local_a0 = (int)uVar11 + 0x20;
      uVar11 = (ulonglong)local_a0;
      uStack_b8 = iVar9 + 1;
      uVar10 = (ulonglong)uStack_b8;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_b8)
      goto LAB_147f85b10;
      uVar5 = puVar12[(longlong)iVar9 + 1];
    }
    uStack_b4 = -uVar5 & uVar5;
    uVar8 = (ulonglong)uStack_b4 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    local_c8 = (int)lVar7;
    uVar5 = (local_a0 - 1) + local_c8;
    if ((int)uVar6 < (int)uVar5) {
      uVar5 = uVar6;
    }
    uVar8 = (ulonglong)uVar5;
  }
LAB_147f85b10:
  uStack_a4 = (uint)uVar8;
  uStack_a8 = 0xffffffff;
  TStack_88._padding_ = CONCAT44(uStack_b4,uStack_b8);
  TStack_88.UnvisitedBitMask = 0xffffffff;
  TStack_88._28_4_ = uStack_a4;
  TStack_88.BaseBitIndex = local_a0;
  local_c0 = param_2;
  uStack_9c = uStack_a4;
  local_90 = param_2;
  TStack_88.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_b0;
  TStack_88.CurrentBitIndex = uStack_a4;
  if ((int)uStack_a4 < (int)uVar6) {
    do {
      puVar1 = (undefined8 *)(*(longlong *)local_90 + (longlong)(int)uVar8 * 0x28);
      local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_d8.Data.ArrayNum = *(int *)(puVar1 + 1);
      lVar7 = (longlong)local_d8.Data.ArrayNum;
      _Src = (void *)*puVar1;
      if (local_d8.Data.ArrayNum == 0) {
        local_d8.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_d8.Data.ArrayNum,0,(ForAnyElementType *)&local_d8,
                   local_d8.Data.ArrayNum,&local_d8.Data.ArrayMax);
        memcpy(local_d8.Data.AllocatorInstance.Data,_Src,lVar7 * 2);
      }
      ::operator<<(param_1,&local_d8);
      plVar2 = *(longlong **)&param_1->field_0x8;
      local_res20[0] = *(uint *)(puVar1 + 3);
      if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
        if ((param_1->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res20,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,local_res20);
        }
      }
      else {
        local_res20[0] = *(uint *)*plVar2;
        *plVar2 = *plVar2 + 4;
      }
      iVar9 = *(int *)(puVar1 + 3);
      uVar8 = uVar14;
      uVar10 = uVar14;
      if (0 < iVar9) {
        do {
          uVar5 = (uint)uVar8;
          uVar6 = uVar13;
          if ((int)uVar5 < iVar9) {
            uVar6 = ~uVar5 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          this = *(FMaterialShaderMap **)(uVar10 + puVar1[2]);
          plVar2 = *(longlong **)&param_1->field_0x8;
          if (this == (FMaterialShaderMap *)0x0) {
            local_res10[0] = 0;
            if ((undefined1 *)plVar2[1] < (undefined1 *)*plVar2 + 1) {
              (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,1);
            }
            else {
              local_res10[0] = *(undefined1 *)*plVar2;
              *plVar2 = *plVar2 + 1;
            }
          }
          else {
            local_res8[0] = 1;
            if ((undefined1 *)plVar2[1] < (undefined1 *)*plVar2 + 1) {
              (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,1);
            }
            else {
              local_res8[0] = *(undefined1 *)*plVar2;
              *plVar2 = *plVar2 + 1;
            }
            local_68._padding_ = (longlong)&___7FShaderSerializeContext__6B_;
            local_68.bLoadingCooked = false;
            local_68.SerializingAsset.ComparisonIndex.Value = 0;
            local_68.SerializingAsset.Number = 0;
            local_68.Ar = param_1;
            Serialize(this,&local_68);
          }
          iVar9 = *(int *)(puVar1 + 3);
          uVar8 = (ulonglong)(uVar5 + 1);
          uVar10 = uVar10 + 8;
        } while ((int)(uVar5 + 1) < iVar9);
      }
      if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.Data.AllocatorInstance.Data);
      }
      TStack_88.UnvisitedBitMask = TStack_88.UnvisitedBitMask & ~TStack_88._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_88);
      uVar8 = (ulonglong)(uint)TStack_88.CurrentBitIndex;
    } while (TStack_88.CurrentBitIndex < (TStack_88.Array)->NumBits);
  }
  return;
}

// Serialize @ 147f86430

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ESubstrateBsdfFeature": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FMaterialShaderMap::Serialize(FMaterialShaderMap *this,FShaderSerializeContext *param_1)

{
  FArchive *pFVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  uint uVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<FStat_STAT_Shaders_NumShadersLoaded> FVar10;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FCsvProfiler *this_02;
  uchar auVar11 [8];
  FName local_res10;
  FName local_res18;
  FName local_res20;
  FStatMessage local_48;
  
  if ((CpuChannel->Enabled < 0) || (LoadTimeChannel->Enabled < 0)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId3904,"FMaterialShaderMap_Serialize",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialShader.cpp"
               ,0xf40);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId3904);
  }
  if (param_1->Ar == (FArchive *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Ar",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Internal\\ShaderSerialization.h"
                       ,0x38,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
  }
  pFVar1 = param_1->Ar;
  FMaterialShaderMapId::Serialize(&this->ShaderMapId,pFVar1,param_1->bLoadingCooked);
  bVar5 = FShaderMapBase::Serialize((FShaderMapBase *)this,param_1);
  if ((bVar5) && ((pFVar1->field_0x28 & 1) != 0)) {
    uVar7 = FShaderMapContent::GetNumShaders((FShaderMapContent *)this->_padding_);
    uVar8 = FMaterialShaderMapContent::GetNumShaders((FMaterialShaderMapContent *)this->_padding_);
    uVar8 = uVar8 - uVar7;
    auVar11[4] = '\0';
    auVar11[5] = '\0';
    auVar11[6] = '\0';
    auVar11[7] = '\0';
    auVar11._0_4_ = uVar8;
    if (uVar8 != 0) {
      FVar10 = StatPtr_STAT_Shaders_NumShadersLoaded;
      if (StatPtr_STAT_Shaders_NumShadersLoaded ==
          (FThreadSafeStaticStat<FStat_STAT_Shaders_NumShadersLoaded>)0x0) {
        pFVar9 = ::FName::FName(&local_res18,"STAT_Shaders_NumShadersLoaded");
        FVar10 = (FThreadSafeStaticStat<FStat_STAT_Shaders_NumShadersLoaded>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Shaders_NumShadersLoaded,
                            *pFVar9,L"Num Shaders Loaded","STATGROUP_Shaders","STATCAT_Advanced",
                            L"Shader Compression",true,false,ST_int64,false,false,MCR_Invalid);
      }
      FVar2 = *(FName *)FVar10;
      if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        this_00 = TlsGetValue(FThreadStats::TlsSlot);
        if (this_00 == (FThreadStats *)0x0) {
          this_01 = FThreadStatsPool::Get();
          this_00 = FThreadStatsPool::GetFromPool(this_01);
        }
        local_48.NameAndInfo.Number = FVar2.Number & 0xffffafff | 0xa000;
        local_res10 = FVar2;
        local_48.StatData.Pad = auVar11;
        local_48.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
        FThreadStats::AddStatMessage(this_00,&local_48);
        FStatsTrace::Add(&local_res10,(long64)auVar11);
        if (this_00->ScopeCount == 0) {
          FThreadStats::Flush(this_00,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(this_00,false,false);
        }
      }
    }
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        this_02 = FCsvProfiler::Get();
        uVar7 = _GCsvCategory_Shaders.Index;
        pFVar9 = ::FName::FName(&local_res20,L"NumShadersLoaded");
        CsvStatNumShadersLoaded =
             FCsvProfiler::GetOrCreatePersistentCustomStatInt(this_02,*pFVar9,uVar7,false);
        _Init_thread_footer(&::_TSS0);
      }
    }
    LOCK();
    CsvStatNumShadersLoaded->Value = (atomic<int>)((int)CsvStatNumShadersLoaded->Value + uVar8);
    UNLOCK();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar5;
}

// ShaderMapResourceExplicitRelease @ 147f89670

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl FMaterialShaderMap::ShaderMapResourceExplicitRelease(FShaderMapResource *param_1)

{
  EShaderPlatform EVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  TSet<TTuple<FMaterialShaderMapId,FMaterialShaderMap_*>,TDefaultMapHashableKeyFuncs<FMaterialShaderMapId,FMaterialShaderMap_*,0>,FDefaultSetAllocator>
  *pTVar5;
  uint uVar6;
  undefined1 local_78 [32];
  longlong local_58;
  TSet<TTuple<FMaterialShaderMapId,FMaterialShaderMap_*>,TDefaultMapHashableKeyFuncs<FMaterialShaderMapId,FMaterialShaderMap_*,0>,FDefaultSetAllocator>
  *pTStack_50;
  longlong *local_48;
  undefined1 auStack_40 [16];
  uint uStack_30;
  uint uStack_2c;
  longlong local_28;
  TSet<TTuple<FMaterialShaderMapId,FMaterialShaderMap_*>,TDefaultMapHashableKeyFuncs<FMaterialShaderMapId,FMaterialShaderMap_*,0>,FDefaultSetAllocator>
  *pTStack_20;
  TSet<TTuple<FMaterialShaderMapId,FMaterialShaderMap_*>,TDefaultMapHashableKeyFuncs<FMaterialShaderMapId,FMaterialShaderMap_*,0>,FDefaultSetAllocator>
  *local_18;
  char local_10;
  char cStack_f;
  
  EVar1 = param_1->Platform;
  EnterCriticalSection((LPCRITICAL_SECTION)&GIdToMaterialShaderMapCS);
  pTVar5 = (TSet<TTuple<FMaterialShaderMapId,FMaterialShaderMap_*>,TDefaultMapHashableKeyFuncs<FMaterialShaderMapId,FMaterialShaderMap_*,0>,FDefaultSetAllocator>
            *)(&GIdToMaterialShaderMap + (ulonglong)EVar1 * 0x50);
  TSet<TTuple<FMaterialShaderMapId,FMaterialShaderMap_*>,TDefaultMapHashableKeyFuncs<FMaterialShaderMapId,FMaterialShaderMap_*,0>,FDefaultSetAllocator>
  ::TIterator::TIterator((TIterator *)local_78,pTVar5);
  local_10 = '\0';
  cStack_f = '\0';
  stack0xffffffffffffffc8 = local_78._16_16_;
  local_48 = (longlong *)local_78._0_8_;
  auStack_40._0_8_ = local_78._8_8_;
  local_28 = local_58;
  pTStack_20 = pTStack_50;
  uVar4 = local_78._24_8_ >> 0x20;
  uVar6 = local_78._28_4_;
  local_18 = pTVar5;
  if ((int)uVar6 < *(int *)(local_78._16_8_ + 0x18)) {
    do {
      if (*(FShaderMapResource **)
           (*(longlong *)((longlong)(int)uVar4 * 0x38 + 0x28 + *local_48) + 8) == param_1) {
        TSet<TTuple<FMaterialShaderMapId,FMaterialShaderMap_*>,TDefaultMapHashableKeyFuncs<FMaterialShaderMapId,FMaterialShaderMap_*,0>,FDefaultSetAllocator>
        ::RemoveByIndex(pTStack_20,uVar6);
        local_10 = '\x01';
      }
      uStack_30 = uStack_30 & ~auStack_40._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_40);
      uVar4 = (ulonglong)uStack_2c;
      uVar6 = uStack_2c;
    } while ((int)uStack_2c < *(int *)(auStack_40._8_8_ + 0x18));
    if ((local_10 != '\0') && (cStack_f != '\0')) {
      uVar6 = *(int *)&(local_18->Elements).field_0x8 - *(int *)&(local_18->Elements).field_0x34;
      if (uVar6 < 4) {
        iVar3 = 1;
      }
      else {
        uVar4 = (ulonglong)((uVar6 >> 1) + 7) * 2 + 1;
        lVar2 = 0x3f;
        if (uVar4 != 0) {
          for (; uVar4 >> lVar2 == 0; lVar2 = lVar2 + -1) {
          }
        }
        iVar3 = 1 << ((byte)lVar2 & 0x1f);
      }
      if (((0 < (int)uVar6) && (local_18->HashSize < iVar3)) || (iVar3 < local_18->HashSize)) {
        local_18->HashSize = iVar3;
        TSet<TTuple<FMaterialShaderMapId,FMaterialShaderMap_*>,TDefaultMapHashableKeyFuncs<FMaterialShaderMapId,FMaterialShaderMap_*,0>,FDefaultSetAllocator>
        ::Rehash(local_18);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000147f897dd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&GIdToMaterialShaderMapCS);
  return;
}

