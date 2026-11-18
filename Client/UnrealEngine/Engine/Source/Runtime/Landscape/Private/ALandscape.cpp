// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 26

// StaticClass @ 145ef8140

UClass * __cdecl ALandscape::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ALandscape.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = ALandscapeProxy::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Landscape",L"Landscape",
               &Z_Registration_Info_UClass_ALandscape.InnerSingleton,StaticRegisterNativesALandscape
               ,0x7f0,8,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<ALandscape>,InternalVTableHelperCtorCaller<ALandscape>,local_res8
               ,ALandscapeProxy::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ALandscape.InnerSingleton;
}

// ALandscape @ 145f01ee0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

ALandscape * __thiscall ALandscape::ALandscape(ALandscape *this,FVTableHelper *param_1)

{
  ALandscapeProxy::ALandscapeProxy((ALandscapeProxy *)this,param_1);
  *(undefined ***)this = &_vftable__for__APartitionActor__;
  *(undefined ***)&this->field_0x2c0 = &_vftable__for__ILandscapeSplineInterface__;
  return this;
}

// ALandscape @ 145f01f20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

ALandscape * __thiscall ALandscape::ALandscape(ALandscape *this,FObjectInitializer *param_1)

{
  ALandscapeProxy::ALandscapeProxy((ALandscapeProxy *)this,param_1);
  *(undefined ***)this = &_vftable__for__APartitionActor__;
  *(undefined ***)&this->field_0x2c0 = &_vftable__for__ILandscapeSplineInterface__;
  return this;
}

// ~ALandscape @ 145f03a30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall ALandscape::~ALandscape(ALandscape *this)

{
  *(undefined ***)this = &_vftable__for__APartitionActor__;
  *(undefined ***)&this->field_0x2c0 = &_vftable__for__ILandscapeSplineInterface__;
  ALandscapeProxy::~ALandscapeProxy((ALandscapeProxy *)this);
  return;
}

// operator() @ 145f063c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERDGBuilderFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

void __thiscall
`ALandscape::RenderMergedTextureInternal'::__l2::<lambda_2>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  FParameters *pFVar1;
  char cVar2;
  code *pcVar3;
  TRHIGlobal<int> TVar4;
  short sVar5;
  ForElementType<EPixelFormat> FVar6;
  EShaderPlatform EVar7;
  short sVar8;
  undefined4 uVar9;
  bool bVar10;
  FRDGEventName *pFVar11;
  longlong lVar12;
  longlong lVar13;
  TRefCountPtr<IPooledRenderTarget> TVar14;
  FRDGTexture *pFVar15;
  FRDGTextureSRV *pFVar16;
  undefined8 *puVar17;
  FRDGScope *this_00;
  FRHIBreadcrumbAllocator *this_01;
  FRHIBreadcrumbNode *pFVar18;
  ForElementType<FRDGTexture_*> FVar19;
  undefined8 *puVar20;
  FRDGTexture *pFVar21;
  FGlobalShaderMap *pFVar22;
  FShaderType *pFVar23;
  FName FVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  uint uVar27;
  undefined8 *puVar28;
  int iVar29;
  undefined8 *puVar30;
  uint uVar31;
  ulonglong uVar32;
  undefined1 auStackY_d08 [32];
  uint local_ca8;
  uint local_ca4;
  wchar_t *local_ca0;
  wchar_t *local_c98;
  undefined4 local_c90;
  undefined4 local_c8c;
  uint local_c88;
  uint local_c84;
  FRDGTexture *local_c80;
  int local_c78;
  undefined8 *local_c70;
  FRDGTextureSRVDesc local_c68;
  FRDGTextureSRVDesc local_c50;
  uint local_c38;
  undefined4 local_c30;
  undefined4 uStack_c2c;
  longlong local_c28;
  undefined4 local_c20;
  undefined4 uStack_c1c;
  FRDGTexture *local_c18;
  uint local_c10;
  uint local_c08;
  FRenderTargetBinding local_c00;
  FRenderTargetBinding local_be8;
  FRenderTargetBinding local_bd0;
  FRenderTargetBinding local_bb8;
  TRDGEventScopeGuard<FRDGScope_RHI> local_ba0;
  char local_b90;
  longlong *local_b88;
  void *local_b80;
  ForElementType<EPixelFormat> local_b78;
  TIntRect<int>_u_0 local_b70;
  TIntRect<int>_u_0 local_b60;
  undefined1 local_b50 [16];
  FRHICopyTextureInfo local_b40;
  wchar_t **local_b00;
  FRHITextureDesc *local_af8;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_ae8;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_ad8;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<29,int>_const_*,std::tuple<int_&>_>
  local_ac8;
  wchar_t **local_ab8;
  FRHITextureDesc *local_ab0;
  wchar_t **local_aa8;
  FRHITextureDesc *local_aa0;
  wchar_t **local_a98;
  FRHITextureDesc *local_a90;
  wchar_t **local_a88;
  FRHITextureDesc *local_a80;
  wchar_t **local_a78;
  FRHITextureDesc *local_a70;
  wchar_t **local_a68 [2];
  wchar_t **local_a58;
  FRHITextureDesc *local_a50;
  FString local_a48;
  TShaderRefBase<FLandscapePackRGBAChannelsPS,FShaderMapPointerTable> local_a38;
  FString local_a28;
  TShaderRefBase<FLandscapePackRGBAChannelsPS,FShaderMapPointerTable> local_a18;
  uint uStack_9fc;
  undefined4 local_9f8;
  undefined4 uStack_9f4;
  FRDGEventName local_9e8;
  FRDGEventName local_9d0;
  FRDGEventName local_9b8;
  FRDGEventName local_9a0;
  ForElementType<FRDGTexture_*> local_988;
  int local_960;
  int local_95c;
  FRHITextureDesc local_958;
  FRHITextureDesc local_908;
  FRHITextureDesc local_8b8;
  FRHITextureDesc local_868;
  undefined1 local_818 [22];
  ERDGScopeMode local_802;
  FRDGAllocator local_800 [3];
  FRHIComputeCommandList *local_758;
  ForElementType<FRDGTexture_*> local_660;
  uint local_658;
  uint local_654 [5];
  TRDGHandleRegistry<TRDGHandle<FRDGView,unsigned_int>,2> local_640 [75];
  FRDGTrace local_188;
  FRDGUserValidation local_118;
  ulonglong local_48;
  
  EVar7 = GMaxRHIShaderPlatform;
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_d08;
  puVar30 = (undefined8 *)0x0;
  local_c78 = 0;
  local_b88 = this;
  pFVar11 = FRDGEventName::FRDGEventName(&local_9e8,1,L"RenderMergedTexture");
  pFVar11 = FRDGEventName::FRDGEventName(&local_9a0,pFVar11);
  FRDGBuilder::FRDGBuilder((FRDGBuilder *)local_818,param_1,pFVar11,None,EVar7);
  if (local_9e8.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_9e8.FormattedEventName.Data.AllocatorInstance.Data);
  }
  lVar12 = (**(code **)(**(longlong **)((longlong)this + 0x10) + 0xa0))();
  lVar13 = (**(code **)(**(longlong **)((longlong)this + 0x10) + 0xa8))
                     (*(longlong **)((longlong)this + 0x10));
  local_c28 = lVar13;
  if (((lVar12 == 0) && (lVar13 == 0)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(OutputRenderTarget2DResource != nullptr) || (OutputRenderTarget2DArrayResource != nullptr)"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\Landscape.cpp"
                          ,0xf17,L""), bVar10)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  TVar14 = CreateRenderTarget((FRHITexture *)local_b50,
                              *(wchar_t **)(*(longlong *)((longlong)this + 0x10) + 0x20));
  pFVar15 = FRDGBuilder::RegisterExternalTexture
                      ((FRDGBuilder *)local_818,
                       (TRefCountPtr<IPooledRenderTarget> *)TVar14.Reference,None);
  local_c18 = pFVar15;
  if ((longlong *)local_b50._0_8_ != (longlong *)0x0) {
    (**(code **)(*(longlong *)local_b50._0_8_ + 0x38))();
  }
  iVar29 = *(int *)((longlong)this + 8);
  local_c78 = iVar29;
  if (iVar29 == 1) {
    local_bd0.ResolveTexture = (FRDGTexture *)0x0;
    local_bd0.LoadAction = ENoAction;
    local_bd0.MipIndex = '\0';
    local_bd0.ArraySlice = (lVar13 != 0) - 1;
    local_bd0.Texture = pFVar15;
    bVar10 = FRenderTargetBinding::Validate(&local_bd0);
    if ((!bVar10) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Validate()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                            ,0x216,L""), bVar10)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((*(int *)((longlong)this + 8) < 1) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    UE::Landscape::Private::RenderMergedTexture_RenderThread::RenderMergedTexture
              (*(FRenderInfo **)this,(FRDGBuilder *)local_818,&local_bd0);
  }
  else {
    uVar27 = GPixelFormats[*(byte *)((longlong)this + 0x19)].NumComponents;
    local_c84 = uVar27;
    if (((int)(iVar29 + -1 + uVar27) / (int)uVar27 < 1) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("NumChannelPackingOperations > 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\Landscape.cpp"
                            ,0xf29,L""), bVar10)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (((lVar13 == 0) && ((int)uVar27 < iVar29)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(OutputRenderTarget2DArrayResource != nullptr) || (NumTargetLayers <= NumChannels)"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\Landscape.cpp"
                            ,0xf2a,
                            L"Trying to merge %i weightmaps onto a 2D texture of %i channels only"),
       bVar10)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((*(char *)((longlong)this + 0x18) != '\0') &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("!bIsHeightmap",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\Landscape.cpp"
                            ,0xf2b,
                            L"We should only be able to merge multiple textures in the case of weightmaps"
                           ), bVar10)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_c50.Texture =
         FSystemTextures::GetBlackDummy
                   ((FSystemTextures *)&GSystemTextures,(FRDGBuilder *)local_818);
    local_c50._padding_._0_2_ = 0;
    local_c50._padding_._3_1_ = 0;
    local_c50._padding_._4_4_ = 0;
    local_c50._padding_._0_1_ = 0;
    local_c50._padding_._2_1_ = 0;
    local_c50._padding_._2_1_ = ((local_c50.Texture)->Desc).field_0x30;
    cVar2 = ((local_c50.Texture)->Desc).field_0x32;
    if ((cVar2 == '\x01') || (cVar2 == '\x04')) {
      local_c50._padding_._4_4_ = (uint)*(ushort *)&((local_c50.Texture)->Desc).field_0x2e << 0x10;
    }
    FRDGUserValidation::ValidateCreateSRV(&local_118,&local_c50);
    pFVar21 = local_c50.Texture;
    pFVar16 = FMemStackBase::Alloc(&local_800[0].MemStack,0x48,8);
    pFVar16 = FRDGTextureSRV::FRDGTextureSRV(pFVar16,(wchar_t *)pFVar21->_padding_,&local_c50);
    local_b50._8_8_ = pFVar16;
    TRDGHandleRegistry<TRDGHandle<FRDGView,unsigned_int>,2>::Insert(local_640,(FRDGView *)pFVar16);
    FRDGUserValidation::ValidateCreateSRV(&local_118,pFVar16);
    local_c8c = *(undefined4 *)&(pFVar15->Desc).field_0x28;
    local_c90 = *(undefined4 *)&(pFVar15->Desc).field_0x24;
    local_908.Extent.field0_0x0._0_4_ = *(int *)&(pFVar15->Desc).field_0x24;
    local_908.Extent.field0_0x0._4_4_ = *(int *)&(pFVar15->Desc).field_0x28;
    local_908.ClearValue.Value.Color[3] = FClearValueBinding::Black.Value.Color[3];
    local_908.GPUMask.GPUMask = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1;
    local_908.Flags = ShaderResource|RenderTargetable;
    local_908.ClearValue._0_8_ = FClearValueBinding::Black._0_8_;
    local_908.ClearValue.Value._4_8_ = FClearValueBinding::Black.Value._4_8_;
    local_908.ExtData = 0;
    local_908.Depth = 1;
    local_908.ArraySize = 1;
    local_908.NumMips = '\x01';
    local_908.NumSamples = '\x01';
    local_908.Dimension = Texture2D;
    local_908.Format = PF_G8;
    local_908.UAVFormat = PF_Unknown;
    local_908.FastVRAMPercentage = 0xff;
    local_908.AliasableFormats.AllocatorInstance.SecondaryData = (ForElementType<EPixelFormat>)0x0;
    local_908.AliasableFormats.ArrayNum = 0;
    local_908.AliasableFormats.ArrayMax = 1;
    local_ca4 = 0;
    if (local_c28 == 0) {
      local_c88 = 1;
    }
    else {
      local_c88 = (uint)*(ushort *)&(pFVar15->Desc).field_0x2e;
    }
    local_ca8 = 0;
    puVar17 = puVar30;
    puVar20 = puVar30;
    puVar28 = puVar30;
    local_c30 = local_c90;
    uStack_c2c = local_c8c;
    if (local_c88 != 0) {
      do {
        local_c10 = (uint)puVar20;
        local_b90 = '\0';
        uVar31 = (uint)puVar17;
        local_c08 = local_c10;
        if ((local_802 != Disabled) && ((local_802 != TopLevelOnly || ((local_818[0x10] & 4) == 0)))
           ) {
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d4c)
               < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
            local_9f8 = 0;
            uStack_9f4 = 0;
            ::Desc._12_8_ = ZEXT48(uStack_9fc);
            ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
            ::Desc._padding_._4_4_ = 0;
            ::Desc._padding_._0_4_ = 0xf35;
            ::Desc._padding_ = (longlong)u_RenderMergedTex;
            ::Desc._padding_ = (longlong)u_RenderMergedTex;
            InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
            ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
            ::Desc.TraceGpuSpecId = 0;
            ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
            atexit(````ALandscape::RenderMergedTextureInternal'::__l2::<lambda_2>::operator()'::
                   __l47::Desc::operator()<int_&>'::__l3::<lambda_1>::operator()<int_&>'::__l2::
                   _dynamic_atexit_destructor_for__Desc__);
            _Init_thread_footer(&::_TSS0);
          }
          local_ac8._padding_ = (longlong)&local_ca8;
          local_ac8._Myfirst._Val = &::Desc;
          local_ba0.State = (FRDGScopeState *)local_818;
          this_00 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>(local_800,(FRDGScope **)local_818)
          ;
          uVar32 = (ulonglong)(this_00->Impl).Impl.TypeIndex;
          local_ba0.Scope = this_00;
          local_818._0_8_ = this_00;
          if ((3 < uVar32) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                  ,0xd4,L""), bVar10)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          (*`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::Destruct(unsigned___int64,void*___ptr64)'
            ::__l2::Destructors[uVar32])(&this_00->Impl);
          this_01 = FRDGScopeState::GetBreadcrumbAllocator((FRDGScopeState *)local_818);
          pFVar18 = FRHIBreadcrumbAllocator::
                    AllocBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<29,int>,int_&>
                              (this_01,&local_ac8);
          FRDGScope_RHI::FRDGScope_RHI
                    ((FRDGScope_RHI *)&this_00->Impl,(FRDGScopeState *)local_818,pFVar18);
          (this_00->Impl).Impl.TypeIndex = '\x02';
          if ((bool)local_818[0x14] != false) {
            FRDGScope::BeginCPU(this_00,local_758,false);
            FRDGScope::BeginGPU(this_00,local_758);
          }
          puVar28 = (undefined8 *)(ulonglong)local_ca4;
          local_b90 = '\x01';
          uVar27 = local_c84;
          uVar31 = local_ca8;
        }
        uVar31 = iVar29 - uVar31 * uVar27;
        if ((int)uVar27 < (int)uVar31) {
          uVar31 = uVar27;
        }
        uVar32 = (ulonglong)uVar31;
        local_c38 = uVar31;
        if ((((int)uVar31 < 0) || ((int)uVar27 < (int)uVar31)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(NumEffectiveChannels >= 0) && (NumEffectiveChannels <= NumChannels)"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\Landscape.cpp"
                                ,0xf39,L""), bVar10)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        local_988.SecondaryData = (ForElementType<FRDGTexture_*>)0x0;
        local_960 = 0;
        local_95c = 4;
        uVar27 = local_ca4;
        if (0 < (int)uVar31) {
          do {
            local_ca0 = L"LandscapeMergedTextureTargetLayer";
            FRHITextureDesc::FRHITextureDesc(&local_8b8,&local_908);
            if (local_8b8.Extent.field0_0x0._s_0.X < 1) {
              local_ab8 = &local_ca0;
              local_ab0 = &local_8b8;
              `FRDGBuilder::CreateTexture'::__l2::<lambda_1>::operator()(&local_ab8);
            }
            if (local_8b8.Extent.field0_0x0._s_0.Y < 1) {
              local_aa8 = &local_ca0;
              local_aa0 = &local_8b8;
              `FRDGBuilder::CreateTexture'::__l2::<lambda_2>::operator()(&local_aa8);
            }
            if ((uint)GRHIGlobals.MaxTextureDimensions.Value <
                (uint)local_8b8.Extent.field0_0x0._s_0.X) {
              local_a98 = &local_ca0;
              local_a90 = &local_8b8;
              `FRDGBuilder::CreateTexture'::__l2::<lambda_3>::operator()(&local_a98);
            }
            if ((uint)GRHIGlobals.MaxTextureDimensions.Value <
                (uint)local_8b8.Extent.field0_0x0._s_0.Y) {
              local_a88 = &local_ca0;
              local_a80 = &local_8b8;
              `FRDGBuilder::CreateTexture'::__l2::<lambda_4>::operator()(&local_a88);
            }
            uVar25 = GRHIGlobals.MaxTextureDimensions.Value;
            if (local_8b8.Extent.field0_0x0._s_0.X < GRHIGlobals.MaxTextureDimensions.Value) {
              uVar25 = local_8b8.Extent.field0_0x0._s_0.X;
            }
            local_8b8.Extent.field0_0x0._s_0.X = 1;
            if (1 < (int)uVar25) {
              local_8b8.Extent.field0_0x0._s_0.X = uVar25;
            }
            TVar4.Value = GRHIGlobals.MaxTextureDimensions.Value;
            if (local_8b8.Extent.field0_0x0._s_0.Y < GRHIGlobals.MaxTextureDimensions.Value) {
              TVar4.Value = local_8b8.Extent.field0_0x0._s_0.Y;
            }
            local_8b8.Extent.field0_0x0._s_0.Y = 1;
            if (1 < TVar4.Value) {
              local_8b8.Extent.field0_0x0._s_0.Y = TVar4.Value;
            }
            FRDGUserValidation::ValidateCreateTexture
                      (&local_118,(FRDGTextureDesc *)&local_8b8,local_ca0,None);
            pFVar15 = FMemStackBase::Alloc(&local_800[0].MemStack,0x158,8);
            pFVar15 = FRDGTexture::FRDGTexture(pFVar15,local_ca0,(FRDGTextureDesc *)&local_8b8,None)
            ;
            if (local_658 == local_654[0]) {
              local_658 = UE::Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGTexture_*>_>
                                    (0x808,&local_660,(int *)local_654);
            }
            local_660.Data[(int)local_658] = pFVar15;
            (pFVar15->Handle).Index = local_658;
            local_658 = local_658 + 1;
            FRDGUserValidation::ValidateCreateTexture(&local_118,pFVar15);
            FRDGTrace::AddResource(&local_188,(FRDGViewableResource *)pFVar15);
            if (local_8b8.AliasableFormats.AllocatorInstance.SecondaryData !=
                (ForElementType<EPixelFormat>)0x0) {
              FMemory::Free((void *)local_8b8.AliasableFormats.AllocatorInstance.SecondaryData);
            }
            FVar19 = (ForElementType<FRDGTexture_*>)&local_988;
            if (local_988.SecondaryData != (ForElementType<FRDGTexture_*>)0x0) {
              FVar19 = local_988.SecondaryData;
            }
            local_c80 = pFVar15;
            if ((ulonglong)FVar19 <= &local_c80) {
              FVar19 = (ForElementType<FRDGTexture_*>)&local_988;
              if (local_988.SecondaryData != (ForElementType<FRDGTexture_*>)0x0) {
                FVar19 = local_988.SecondaryData;
              }
              if ((&local_c80 < (FRDGTexture **)((longlong)FVar19 + (longlong)local_95c * 8)) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar10)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
            }
            if (local_960 == local_95c) {
              local_960 = UE::Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FRDGTexture_*>_>
                                    (0x808,&local_988,&local_95c);
            }
            lVar12 = (longlong)local_960;
            FVar19 = (ForElementType<FRDGTexture_*>)&local_988;
            if (local_988.SecondaryData != (ForElementType<FRDGTexture_*>)0x0) {
              FVar19 = local_988.SecondaryData;
            }
            local_960 = local_960 + 1;
            *(FRDGTexture **)((longlong)FVar19 + lVar12 * 8) = local_c80;
            local_bb8.Texture = local_c80;
            local_bb8.ResolveTexture = (FRDGTexture *)0x0;
            local_bb8.LoadAction = ENoAction;
            local_bb8.MipIndex = '\0';
            local_bb8.ArraySlice = -1;
            bVar10 = FRenderTargetBinding::Validate(&local_bb8);
            if ((!bVar10) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Validate()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                                    ,0x216,L""), bVar10)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            uVar27 = (uint)puVar28;
            uVar31 = 0;
            if ((int)uVar27 < (int)*(longlong *)((longlong)this + 8)) {
              uVar31 = ~uVar27 >> 0x1f;
            }
            if ((uVar31 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            UE::Landscape::Private::RenderMergedTexture_RenderThread::RenderMergedTexture
                      ((FRenderInfo *)((longlong)(int)uVar27 * 0xf0 + *(longlong *)this),
                       (FRDGBuilder *)local_818,&local_bb8);
            uVar27 = uVar27 + 1;
            puVar28 = (undefined8 *)(ulonglong)uVar27;
            if ((iVar29 < (int)uVar27) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("TargetLayerIndex <= NumTargetLayers",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\Landscape.cpp"
                                    ,0xf44,L""), bVar10)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            uVar32 = uVar32 - 1;
            uVar31 = local_c38;
          } while (uVar32 != 0);
        }
        local_ca4 = uVar27;
        puVar20 = FMemStackBase::Alloc(&local_800[0].MemStack,0x140,0x10);
        if (puVar20 == (undefined8 *)0x0) {
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Object",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                              ,0x61,L"");
          puVar20 = puVar30;
          if (bVar10) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        else {
          *puVar20 = &___7__TObject_VFParameters_FLandscapePackRGBAChannelsPS___FRDGAllocator__6B_;
          puVar20[3] = 0;
          puVar20[4] = 0;
          puVar20[5] = 0;
          puVar20[6] = 0;
          FRenderTargetBindingSlots::FRenderTargetBindingSlots
                    ((FRenderTargetBindingSlots *)(puVar20 + 8));
        }
        local_c70 = puVar20;
        if (((local_800[0].Objects.AllocatorInstance.Data <= (FScriptContainerElement *)&local_c70)
            && ((FScriptContainerElement *)&local_c70 <
                local_800[0].Objects.AllocatorInstance.Data +
                (longlong)local_800[0].Objects.ArrayMax * 8)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar10)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (local_800[0].Objects.ArrayNum == local_800[0].Objects.ArrayMax) {
          local_800[0].Objects.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&local_800[0].Objects.AllocatorInstance,
                          &local_800[0].Objects.ArrayMax);
        }
        lVar12 = (longlong)local_800[0].Objects.ArrayNum;
        pFVar1 = (FParameters *)(puVar20 + 2);
        local_800[0].Objects.ArrayNum = local_800[0].Objects.ArrayNum + 1;
        *(undefined8 **)(local_800[0].Objects.AllocatorInstance.Data + lVar12 * 8) = local_c70;
        pFVar1->InNumChannels = uVar31;
        puVar17 = puVar30;
        puVar28 = puVar30;
        do {
          iVar29 = (int)puVar28;
          pFVar16 = (FRDGTextureSRV *)local_b50._8_8_;
          if (iVar29 < (int)uVar31) {
            if ((local_960 <= iVar29) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            FVar19 = (ForElementType<FRDGTexture_*>)&local_988;
            if (local_988.SecondaryData != (ForElementType<FRDGTexture_*>)0x0) {
              FVar19 = local_988.SecondaryData;
            }
            local_c68.Texture = *(FRDGTexture **)((longlong)puVar17 + (longlong)FVar19);
            local_c68._padding_._0_2_ = 0;
            local_c68._padding_._6_2_ = 0;
            local_c68._padding_._0_1_ = 0;
            local_c68._padding_._2_1_ = 0;
            local_c68._padding_._2_4_ = (uint)(byte)((local_c68.Texture)->Desc).field_0x30;
            cVar2 = ((local_c68.Texture)->Desc).field_0x32;
            if ((cVar2 == '\x01') || (cVar2 == '\x04')) {
              local_c68._padding_._6_2_ = *(undefined2 *)&((local_c68.Texture)->Desc).field_0x2e;
            }
            FRDGUserValidation::ValidateCreateSRV(&local_118,&local_c68);
            pFVar15 = local_c68.Texture;
            pFVar16 = FMemStackBase::Alloc(&local_800[0].MemStack,0x48,8);
            pFVar16 = FRDGTextureSRV::FRDGTextureSRV
                                (pFVar16,(wchar_t *)pFVar15->_padding_,&local_c68);
            if (local_640[0].Array.ArrayNum == local_640[0].Array.ArrayMax) {
              local_640[0].Array.ArrayNum =
                   UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGView_*>_>
                             (0x808,(ForElementType<FRDGView_*> *)local_640,
                              &local_640[0].Array.ArrayMax);
            }
            local_640[0].Array.AllocatorInstance.Data[local_640[0].Array.ArrayNum] =
                 (FRDGView *)pFVar16;
            *(int *)((longlong)&pFVar16->_padding_ + 4) = local_640[0].Array.ArrayNum;
            local_640[0].Array.ArrayNum = local_640[0].Array.ArrayNum + 1;
            FRDGUserValidation::ValidateCreateSRV(&local_118,pFVar16);
          }
          pFVar15 = local_c18;
          uVar9 = local_c8c;
          uVar25 = local_c90;
          *(FRDGTextureSRV **)((longlong)(puVar17 + 1) + (longlong)pFVar1) = pFVar16;
          puVar28 = (undefined8 *)(ulonglong)(iVar29 + 1U);
          puVar17 = puVar17 + 1;
        } while ((int)(iVar29 + 1U) < 4);
        sVar8 = (short)local_ca8;
        sVar5 = -1;
        if ((local_c28 == 0) ||
           (sVar5 = (short)local_ca8, (*(uint *)&local_c18->Desc >> 0x18 & 1) != 0)) {
          local_be8.Texture = local_c18;
          local_be8.ResolveTexture = (FRDGTexture *)0x0;
          local_be8.LoadAction = ENoAction;
          local_be8.MipIndex = '\0';
          local_be8.ArraySlice = sVar5;
          bVar10 = FRenderTargetBinding::Validate(&local_be8);
          if ((!bVar10) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Validate()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                                  ,0x216,L""), bVar10)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          puVar20[8] = local_be8.Texture;
          puVar20[9] = local_be8.ResolveTexture;
          puVar20[10] = CONCAT44(local_be8._20_4_,CONCAT22(local_be8.ArraySlice,local_be8._16_2_));
          local_b60._s_0.Min.field0_0x0 =
               (TIntPoint<int>)(TIntPoint<int>)UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
          local_b60._8_4_ = local_c90;
          local_b60._12_4_ = local_c8c;
          pFVar22 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel
                                       [(int)GMaxRHIFeatureLevel]);
          pFVar23 = (FShaderType *)FLandscapePackRGBAChannelsPS::GetStaticType();
          FGlobalShaderMap::GetShader(pFVar22,&local_ad8,pFVar23,0);
          if (local_ad8.ShaderContent == (FShader *)0x0) {
            FVar24 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)&local_b78);
            ::FName::ToString((FName *)FVar24,&local_a28);
            FLandscapePackRGBAChannelsPS::GetStaticType();
            bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Shader.IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                                ,0xc0,L"Failed to find shader type %s in Platform %s");
            if (local_a28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_a28.Data.AllocatorInstance.Data);
            }
            if (bVar10) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          FLandscapePackRGBAChannelsPS::GetStaticType();
          local_a18.ShaderContent = (FLandscapePackRGBAChannelsPS *)local_ad8.ShaderContent;
          local_a18.ShaderMap = local_ad8.ShaderMap;
          pFVar11 = FRDGEventName::FRDGEventName(&local_9b8,1,L"PackRGBAChannels");
          FPixelShaderUtils::AddFullscreenPass<FLandscapePackRGBAChannelsPS>
                    ((FRDGBuilder *)local_818,pFVar22,pFVar11,&local_a18,pFVar1,
                     (TIntRect<int> *)&local_b60._s_0,(FRHIBlendState *)0x0,
                     (FRHIRasterizerState *)0x0,(FRHIDepthStencilState *)0x0,0,None);
          uVar27 = local_c08;
          puVar20 = (undefined8 *)(ulonglong)(local_c08 & 0xfffffff7);
          if (local_9b8.FormattedEventName.Data.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0) {
            FMemory::Free(local_9b8.FormattedEventName.Data.AllocatorInstance.Data);
          }
          if ((uVar27 & 4) != 0) {
            puVar20 = (undefined8 *)(ulonglong)(uVar27 & 0xfffffff3);
            FVar6 = local_b78;
            goto joined_r0x000145f07710;
          }
        }
        else {
          local_958.ClearValue.Value.Color[3] = FClearValueBinding::Black.Value.Color[3];
          local_958.GPUMask.GPUMask = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1;
          local_c20 = local_c90;
          uStack_c1c = local_c8c;
          local_958.Extent.field0_0x0._s_0.Y = local_c8c;
          local_958.Extent.field0_0x0._s_0.X = local_c90;
          local_958.Format = (local_c18->Desc).field_0x33;
          local_c98 = L"PackedRGBASlice";
          local_958.Flags = RenderTargetable;
          local_958.ClearValue._0_8_ = FClearValueBinding::Black._0_8_;
          local_958.ClearValue.Value._4_8_ = FClearValueBinding::Black.Value._4_8_;
          local_958.ExtData = 0;
          local_958.Depth = 1;
          local_958.ArraySize = 1;
          local_958.NumMips = '\x01';
          local_958.NumSamples = '\x01';
          local_958.Dimension = Texture2D;
          local_958.UAVFormat = PF_Unknown;
          local_958.FastVRAMPercentage = 0xff;
          local_958.AliasableFormats.AllocatorInstance.SecondaryData =
               (ForElementType<EPixelFormat>)0x0;
          local_958.AliasableFormats.ArrayNum = 0;
          local_958.AliasableFormats.ArrayMax = 1;
          FRHITextureDesc::FRHITextureDesc(&local_868,&local_958);
          if (local_868.Extent.field0_0x0._s_0.X < 1) {
            local_a78 = &local_c98;
            local_a70 = &local_868;
            `FRDGBuilder::CreateTexture'::__l2::<lambda_1>::operator()(&local_a78);
          }
          if (local_868.Extent.field0_0x0._s_0.Y < 1) {
            local_a68[0] = &local_c98;
            local_a68[1] = (wchar_t **)&local_868;
            `FRDGBuilder::CreateTexture'::__l2::<lambda_2>::operator()(local_a68);
          }
          if ((uint)GRHIGlobals.MaxTextureDimensions.Value <
              (uint)local_868.Extent.field0_0x0._s_0.X) {
            local_a58 = &local_c98;
            local_a50 = &local_868;
            `FRDGBuilder::CreateTexture'::__l2::<lambda_3>::operator()(&local_a58);
          }
          if ((uint)GRHIGlobals.MaxTextureDimensions.Value <
              (uint)local_868.Extent.field0_0x0._s_0.Y) {
            local_b00 = &local_c98;
            local_af8 = &local_868;
            `FRDGBuilder::CreateTexture'::__l2::<lambda_4>::operator()(&local_b00);
          }
          uVar26 = GRHIGlobals.MaxTextureDimensions.Value;
          if (local_868.Extent.field0_0x0._s_0.X < GRHIGlobals.MaxTextureDimensions.Value) {
            uVar26 = local_868.Extent.field0_0x0._s_0.X;
          }
          local_868.Extent.field0_0x0._s_0.X = 1;
          if (1 < (int)uVar26) {
            local_868.Extent.field0_0x0._s_0.X = uVar26;
          }
          TVar4.Value = GRHIGlobals.MaxTextureDimensions.Value;
          if (local_868.Extent.field0_0x0._s_0.Y < GRHIGlobals.MaxTextureDimensions.Value) {
            TVar4.Value = local_868.Extent.field0_0x0._s_0.Y;
          }
          local_868.Extent.field0_0x0._s_0.Y = 1;
          if (1 < TVar4.Value) {
            local_868.Extent.field0_0x0._s_0.Y = TVar4.Value;
          }
          FRDGUserValidation::ValidateCreateTexture
                    (&local_118,(FRDGTextureDesc *)&local_868,local_c98,None);
          pFVar21 = FMemStackBase::Alloc(&local_800[0].MemStack,0x158,8);
          pFVar21 = FRDGTexture::FRDGTexture(pFVar21,local_c98,(FRDGTextureDesc *)&local_868,None);
          if (local_658 == local_654[0]) {
            local_658 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGTexture_*>_>
                                  (0x808,&local_660,(int *)local_654);
          }
          local_660.Data[(int)local_658] = pFVar21;
          (pFVar21->Handle).Index = local_658;
          local_658 = local_658 + 1;
          FRDGUserValidation::ValidateCreateTexture(&local_118,pFVar21);
          FRDGTrace::AddResource(&local_188,(FRDGViewableResource *)pFVar21);
          if (local_868.AliasableFormats.AllocatorInstance.SecondaryData !=
              (ForElementType<EPixelFormat>)0x0) {
            FMemory::Free((void *)local_868.AliasableFormats.AllocatorInstance.SecondaryData);
          }
          local_c00.ResolveTexture = (FRDGTexture *)0x0;
          local_c00.LoadAction = ENoAction;
          local_c00.MipIndex = '\0';
          local_c00.ArraySlice = -1;
          local_c00.Texture = pFVar21;
          bVar10 = FRenderTargetBinding::Validate(&local_c00);
          if ((!bVar10) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Validate()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                                  ,0x216,L""), bVar10)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          local_b70._8_4_ = uVar25;
          puVar20[8] = local_c00.Texture;
          puVar20[9] = local_c00.ResolveTexture;
          local_b70._12_4_ = uVar9;
          puVar20[10] = CONCAT44(local_c00._20_4_,local_c00._16_4_);
          local_b70._s_0.Min.field0_0x0 =
               (TIntPoint<int>)(TIntPoint<int>)UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
          pFVar22 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel
                                       [(int)GMaxRHIFeatureLevel]);
          pFVar23 = (FShaderType *)FLandscapePackRGBAChannelsPS::GetStaticType();
          FGlobalShaderMap::GetShader(pFVar22,&local_ae8,pFVar23,0);
          if (local_ae8.ShaderContent == (FShader *)0x0) {
            FVar24 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)&local_b80);
            ::FName::ToString((FName *)FVar24,&local_a48);
            FLandscapePackRGBAChannelsPS::GetStaticType();
            bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Shader.IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                                ,0xc0,L"Failed to find shader type %s in Platform %s");
            if (local_a48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_a48.Data.AllocatorInstance.Data);
            }
            if (bVar10) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          FLandscapePackRGBAChannelsPS::GetStaticType();
          local_a38.ShaderContent = (FLandscapePackRGBAChannelsPS *)local_ae8.ShaderContent;
          local_a38.ShaderMap = local_ae8.ShaderMap;
          pFVar11 = FRDGEventName::FRDGEventName(&local_9d0,1,L"PackRGBAChannels");
          FPixelShaderUtils::AddFullscreenPass<FLandscapePackRGBAChannelsPS>
                    ((FRDGBuilder *)local_818,pFVar22,pFVar11,&local_a38,pFVar1,
                     (TIntRect<int> *)&local_b70._s_0,(FRHIBlendState *)0x0,
                     (FRHIRasterizerState *)0x0,(FRHIDepthStencilState *)0x0,0,None);
          uVar27 = local_c10;
          puVar20 = (undefined8 *)(ulonglong)(local_c10 & 0xffffffdf);
          if (local_9d0.FormattedEventName.Data.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0) {
            FMemory::Free(local_9d0.FormattedEventName.Data.AllocatorInstance.Data);
          }
          if (((uVar27 & 0x10) != 0) &&
             (puVar20 = (undefined8 *)(ulonglong)(uVar27 & 0xffffffcf), local_b80 != (void *)0x0)) {
            FMemory::Free(local_b80);
          }
          local_b40.Size.field0_0x0._s_0.Z = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z
          ;
          local_b40.SourcePosition.field0_0x0._s_0.Z =
               UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
          local_b40.DestPosition.field0_0x0._s_0.Z =
               UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
          local_b40.NumSlices = 1;
          local_b40.SourceMipIndex = 0;
          local_b40.NumMips = 1;
          local_b40.DestSliceIndex = (uint)sVar8;
          local_b40.Size.field0_0x0._0_8_ = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
          local_b40.SourcePosition.field0_0x0._0_8_ =
               UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
          local_b40.DestPosition.field0_0x0._0_8_ =
               UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
          local_b40.SourceSliceIndex = 0;
          local_b40.DestMipIndex = 0;
          AddCopyTexturePass((FRDGBuilder *)local_818,pFVar21,pFVar15,&local_b40);
          FVar6 = local_958.AliasableFormats.AllocatorInstance.SecondaryData;
joined_r0x000145f07710:
          if (FVar6 != (ForElementType<EPixelFormat>)0x0) {
            FMemory::Free((void *)FVar6);
          }
        }
        if (local_988.SecondaryData != (ForElementType<FRDGTexture_*>)0x0) {
          FMemory::Free((void *)local_988.SecondaryData);
        }
        if (local_b90 != '\0') {
          TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_ba0);
        }
        local_ca8 = local_ca8 + 1;
        puVar17 = (undefined8 *)(ulonglong)local_ca8;
        puVar28 = (undefined8 *)(ulonglong)local_ca4;
        this = local_b88;
        iVar29 = local_c78;
        uVar27 = local_c84;
      } while ((int)local_ca8 < (int)local_c88);
    }
    if (local_908.AliasableFormats.AllocatorInstance.SecondaryData !=
        (ForElementType<EPixelFormat>)0x0) {
      FMemory::Free((void *)local_908.AliasableFormats.AllocatorInstance.SecondaryData);
    }
  }
  FRDGBuilder::Execute((FRDGBuilder *)local_818);
  FRDGBuilder::~FRDGBuilder((FRDGBuilder *)local_818);
  return;
}

// GetLODGroupKey @ 145f0fb70

uint __thiscall ALandscape::GetLODGroupKey(ALandscape *this)

{
  return *(uint *)&this->field_0x314;
}

// GetLandscapeActor @ 145f0ff30

ALandscape * __thiscall ALandscape::GetLandscapeActor(ALandscape *this)

{
  return this;
}

// GetLandscapeActor @ 145f0ff40

ALandscape * __thiscall ALandscape::GetLandscapeActor(ALandscape *this)

{
  return this;
}

// GetLoadedBounds @ 145f10660

TBox<double> * __thiscall
ALandscape::GetLoadedBounds(ALandscape *this,TBox<double> *__return_storage_ptr__)

{
  ULandscapeInfo *this_00;
  
  this_00 = (ULandscapeInfo *)(**(code **)(*(longlong *)&this->field_0x2c0 + 0x18))();
  ULandscapeInfo::GetLoadedBounds(this_00,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 145f12960

UClass * __cdecl ALandscape::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ALandscape.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = ALandscapeProxy::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Landscape",L"Landscape",
               &Z_Registration_Info_UClass_ALandscape.InnerSingleton,StaticRegisterNativesALandscape
               ,0x7f0,8,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<ALandscape>,InternalVTableHelperCtorCaller<ALandscape>,local_res8
               ,ALandscapeProxy::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ALandscape.InnerSingleton;
}

// IsValidRenderTargetFormatHeightmap @ 145f15ca0

bool __thiscall
ALandscape::IsValidRenderTargetFormatHeightmap(ALandscape *this,EPixelFormat param_1,bool *param_2)

{
  *param_2 = false;
  if (param_1 != PF_B8G8R8A8) {
    if (param_1 == PF_G16) {
      return true;
    }
    if (((param_1 != PF_R8G8B8A8) && (param_1 != PF_A8R8G8B8)) && (param_1 != PF_R8G8)) {
      return false;
    }
  }
  *param_2 = true;
  return true;
}

// IsValidRenderTargetFormatWeightmap @ 145f15cd0

bool __thiscall
ALandscape::IsValidRenderTargetFormatWeightmap(ALandscape *this,EPixelFormat param_1,int *param_2)

{
  *param_2 = 0;
  switch(param_1) {
  case PF_B8G8R8A8:
  case PF_G8:
  case PF_A8:
  case PF_R8G8B8A8:
  case PF_A8R8G8B8:
  case PF_R8G8:
    *param_2 = GPixelFormats[param_1].NumComponents;
    return true;
  default:
    return false;
  }
}

// MarkAllLandscapeRenderStateDirty @ 145f15fb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall ALandscape::MarkAllLandscapeRenderStateDirty(ALandscape *this)

{
  ULandscapeInfo *this_00;
  undefined1 local_res8 [32];
  code *local_18;
  undefined1 *local_10;
  
  this_00 = (ULandscapeInfo *)(**(code **)(*(longlong *)&this->field_0x2c0 + 0x18))();
  if (this_00 != (ULandscapeInfo *)0x0) {
    local_10 = local_res8;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`ALandscape::MarkAllLandscapeRenderStateDirty'::__l5::<lambda_1>,bool,ALandscapeProxy_*>
               ::Call;
    ULandscapeInfo::ForEachLandscapeProxy
              (this_00,(TFunctionRef<bool___cdecl(ALandscapeProxy_*)> *)&local_18);
  }
  return;
}

// PostLoad @ 145f16b10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall ALandscape::PostLoad(ALandscape *this)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  FGuid *pFVar4;
  bool bVar5;
  FGuid local_18;
  
  bVar5 = -1 < CpuChannel->Enabled;
  if (bVar5) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId3169,"ALandscape::PostLoad",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\Landscape.cpp"
               ,0xc61);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId3169);
  }
  if (((*(int *)&this->field_0x2dc == 0 && *(int *)&this->field_0x2d8 == 0) &&
      *(int *)&this->field_0x2d4 == 0) && *(int *)&this->field_0x2d0 == 0) {
    pFVar4 = FGuid::NewGuid(&local_18);
    uVar1 = pFVar4->B;
    uVar2 = pFVar4->C;
    uVar3 = pFVar4->D;
    *(uint *)&this->field_0x2d0 = pFVar4->A;
    *(uint *)&this->field_0x2d4 = uVar1;
    *(uint *)&this->field_0x2d8 = uVar2;
    *(uint *)&this->field_0x2dc = uVar3;
  }
  ALandscapeProxy::PostLoad((ALandscapeProxy *)this);
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// RenderHeightmap @ 145f1a470

bool __thiscall
ALandscape::RenderHeightmap
          (ALandscape *this,TTransform<double> *param_1,TBox2<double> *param_2,
          UTextureRenderTarget2D *param_3)

{
  bool bVar1;
  TArray<FName,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  bVar1 = RenderMergedTextureInternal
                    (this,param_1,param_2,&local_18,(UTextureRenderTarget *)param_3);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return bVar1;
}

// RenderMergedTextureInternal @ 145f1b990

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

bool __thiscall
ALandscape::RenderMergedTextureInternal
          (ALandscape *this,TTransform<double> *param_1,TBox2<double> *param_2,
          TArray<FName,TSizedDefaultAllocator<32>_> *param_3,UTextureRenderTarget *param_4)

{
  longlong *plVar1;
  double *pdVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [12];
  undefined1 auVar8 [12];
  longlong lVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  double dVar16;
  FTexture2DResourceSubregion *pFVar17;
  double dVar18;
  double dVar19;
  EPixelFormat EVar20;
  bool bVar21;
  undefined1 uVar22;
  uint uVar23;
  int iVar24;
  int iVar25;
  ULandscapeInfo *this_00;
  UClass *pUVar26;
  TVector<double> *pTVar27;
  TMatrix<double> *pTVar28;
  FName *pFVar29;
  FScriptContainerElement *pFVar30;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar31;
  FWeightmapLayerAllocationInfo *pFVar32;
  FTextureResource *pFVar33;
  FTextureRenderTargetResource *pFVar34;
  FRenderCommandList *this_01;
  FCommandList *this_02;
  FRenderCommandTag *pFVar35;
  byte bVar36;
  int iVar37;
  FStaticBasicLogRecord *pFVar38;
  code **ppcVar39;
  FName FVar40;
  ulonglong uVar41;
  UTextureRenderTarget *pUVar42;
  TTransform<double> *this_03;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar43;
  int iVar44;
  int iVar45;
  int iVar46;
  ALandscape *pAVar47;
  int iVar48;
  UTextureRenderTarget *pUVar49;
  FScriptContainerElement FVar50;
  bool bVar51;
  double dVar52;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  double dVar61;
  double dVar63;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  double dVar62;
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  double dVar79;
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  double dVar83;
  undefined4 uVar84;
  undefined1 auVar82 [16];
  double dVar85;
  undefined4 uVar91;
  undefined1 auVar86 [16];
  double dVar92;
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined4 uVar93;
  double dVar94;
  TVector2<double>_u_0 TVar95;
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  double dVar99;
  double dVar100;
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auStackY_948 [32];
  FScriptContainerElement local_908;
  undefined1 local_904 [4];
  ForAnyElementType local_900;
  undefined8 local_8f8;
  undefined8 local_8f0;
  undefined8 uStack_8e8;
  uint local_8e0;
  uint local_8dc;
  int local_8d8;
  int local_8d4;
  int iStack_8d0;
  ALandscape *local_8c8;
  int local_8c0;
  int iStack_8bc;
  TArray<FName,TSizedDefaultAllocator<32>_> *local_8b8;
  TArray<UE::Landscape::Private::RenderMergedTexture_RenderThread::FRenderInfo,TSizedDefaultAllocator<32>_>
  local_8b0;
  FTextureRenderTargetResource *local_8a0;
  FScriptContainerElement local_898;
  EPixelFormat local_897;
  int local_890;
  int local_88c;
  UTexture2D *local_888;
  double dStack_880;
  double local_878;
  TTransform<double> *local_870;
  undefined4 local_868;
  undefined4 uStack_864;
  int local_860;
  int iStack_85c;
  int local_858;
  int iStack_854;
  longlong local_850;
  UTextureRenderTarget *local_848;
  longlong local_840;
  longlong lStack_838;
  TBitArray<FDefaultBitArrayAllocator> *local_828;
  double dStack_820;
  undefined1 local_818 [16];
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_808;
  TVector2<double>_u_0 local_7e8;
  undefined4 local_7d8;
  undefined4 uStack_7d4;
  undefined4 uStack_7d0;
  undefined4 uStack_7cc;
  undefined8 local_7c8;
  longlong local_7c0;
  FRenderInfo *local_7b8;
  ulonglong local_7b0;
  TPairInitializer<UE::Math::TIntPoint<int>_const_&,UE::Landscape::Private::RenderMergedTexture_RenderThread::FTexture2DResourceSubregion_&&>
  local_7a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_798;
  undefined8 uStack_778;
  TTransform<double> local_768;
  longlong *local_708;
  undefined8 *local_700;
  undefined1 local_6f8 [40];
  int local_6d0;
  undefined4 uStack_6cc;
  undefined8 local_6c8;
  undefined8 local_6c0;
  undefined8 local_6b8;
  uint local_6b0;
  FName local_6a8;
  FString local_6a0;
  TIntRect<int>_u_0 local_690;
  FName local_680;
  undefined4 local_678;
  undefined4 uStack_674;
  undefined4 uStack_670;
  undefined4 uStack_66c;
  undefined4 local_668;
  undefined4 uStack_664;
  undefined4 uStack_660;
  undefined4 uStack_65c;
  undefined1 local_658;
  undefined7 uStack_657;
  undefined8 local_650;
  undefined8 uStack_648;
  double local_640;
  UTexture2D *local_638;
  double dStack_630;
  double local_628;
  double local_620;
  double dStack_618;
  double local_610;
  double local_608;
  double dStack_600;
  double local_5f8;
  double local_5f0;
  double dStack_5e8;
  double local_5e0;
  longlong local_5d0;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_5c8;
  undefined8 local_5c0;
  undefined8 uStack_5b8;
  TTransform<double> local_5a8;
  undefined1 local_548 [16];
  TVector<double> local_528;
  TVector<double> local_510;
  FScopedCapture local_4f8;
  code *local_4b8 [2];
  code *local_4a8 [3];
  code **local_490;
  undefined1 local_488 [32];
  undefined8 local_468;
  int local_460;
  undefined4 local_45c;
  undefined4 local_458;
  int local_454;
  void *local_448;
  undefined4 local_440;
  undefined1 local_438 [40];
  code **local_410;
  byte local_408;
  TVector<double>_u_0 local_3f8;
  undefined8 local_3e0;
  undefined8 local_3d8;
  undefined8 local_3d0;
  undefined1 local_3c8;
  TMatrix<double> local_3b8;
  TMatrix<double> local_338;
  TBox<double> local_2b8;
  TMatrix<double> local_278;
  TMatrix<double> local_1f8;
  TMatrix<double> local_178;
  ulonglong local_f8;
  
  local_f8 = __security_cookie.value ^ (ulonglong)auStackY_948;
  local_848 = param_4;
  bVar51 = -1 < CpuChannel->Enabled;
  local_8c8 = this;
  local_8b8 = param_3;
  if (bVar51) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId3660,"Landscape_RenderMergedTextureInternal",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\Landscape.cpp"
               ,0xe4c);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId3660);
  }
  this_00 = (ULandscapeInfo *)(**(code **)(*(longlong *)&this->field_0x2c0 + 0x18))();
  if (this_00 == (ULandscapeInfo *)0x0) {
    if (1 < (byte)LogLandscape._0_1_) {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&local_6a0,(UObject *)0x0,None);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogLandscape);
      if (local_6a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_6a0.Data.AllocatorInstance.Data);
      }
    }
  }
  else if (param_4 == (UTextureRenderTarget *)0x0) {
    if (1 < (byte)LogLandscape._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogLandscape);
    }
  }
  else {
    iVar45 = param_3->ArrayNum;
    FVar50 = (FScriptContainerElement)(iVar45 == 0);
    local_908 = (FScriptContainerElement)0x0;
    local_88c = iVar45;
    pUVar26 = Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
    pUVar49 = local_848;
    iVar37 = (int)pUVar26->_padding_;
    if ((*(int *)(local_848->_padding_ + 0x38) < iVar37) ||
       (pUVar42 = local_848,
       (longlong *)
       *(undefined1 **)(*(longlong *)(local_848->_padding_ + 0x30) + (longlong)iVar37 * 8) !=
       &pUVar26->_padding_)) {
      pUVar42 = (UTextureRenderTarget *)0x0;
    }
    pUVar26 = Z_Construct_UClass_UTextureRenderTarget2DArray_NoRegister();
    iVar37 = (int)pUVar26->_padding_;
    if ((*(int *)(pUVar49->_padding_ + 0x38) < iVar37) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar49->_padding_ + 0x30) + (longlong)iVar37 * 8) !=
        &pUVar26->_padding_)) {
      pUVar49 = (UTextureRenderTarget *)0x0;
      if (pUVar42 == (UTextureRenderTarget *)0x0) {
        EVar20 = PF_Unknown;
      }
      else {
        EVar20 = (**(code **)(pUVar42->_padding_ + 0x3d0))(pUVar42);
      }
    }
    else {
      EVar20 = (**(code **)(pUVar49->_padding_ + 0x3d0))(pUVar49);
    }
    dVar16 = __real_3fe0000000000000;
    if (iVar45 == 0) {
      if (pUVar42 != (UTextureRenderTarget *)0x0) {
        local_908 = (FScriptContainerElement)0x0;
        if (EVar20 != PF_B8G8R8A8) {
          if (EVar20 == PF_G16) goto LAB_145f1bc09;
          if (((EVar20 != PF_R8G8B8A8) && (EVar20 != PF_A8R8G8B8)) && (EVar20 != PF_R8G8)) {
            if (2 < (byte)LogLandscape._0_1_) {
              GetPixelFormatString(EVar20);
              pFVar38 = &::LOG_Static;
              goto LAB_145f1cf5d;
            }
            goto LAB_145f1cf6c;
          }
        }
        local_908 = (FScriptContainerElement)0x1;
        goto LAB_145f1bc09;
      }
      if (1 < (byte)LogLandscape._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogLandscape);
      }
    }
    else {
      switch(EVar20) {
      case PF_B8G8R8A8:
      case PF_G8:
      case PF_A8:
      case PF_R8G8B8A8:
      case PF_A8R8G8B8:
      case PF_R8G8:
        iVar37 = local_8b8->ArrayNum;
        if (iVar37 < 2) {
LAB_145f1bc09:
          this_03 = (TTransform<double> *)(*(longlong *)&local_8c8->field_0x1b8 + 0x1f0);
          if (*(longlong *)&local_8c8->field_0x1b8 == 0) {
            this_03 = &UE::Math::TTransform<double>::Identity;
          }
          local_768.Rotation.XY.m128d_f64[0] = (param_1->Rotation).XY.m128d_f64[0];
          local_768.Rotation.XY.m128d_f64[1] = (param_1->Rotation).XY.m128d_f64[1];
          local_768.Rotation.ZW.m128d_f64[0] = (param_1->Rotation).ZW.m128d_f64[0];
          local_768.Rotation.ZW.m128d_f64[1] = (param_1->Rotation).ZW.m128d_f64[1];
          local_7e8._0_4_ = *(undefined4 *)&(param_2->Min).field0_0x0;
          local_7e8._4_4_ = *(undefined4 *)((longlong)&(param_2->Min).field0_0x0 + 4);
          local_7e8._8_4_ = *(undefined4 *)((longlong)&(param_2->Min).field0_0x0 + 8);
          local_7e8._12_4_ = *(undefined4 *)((longlong)&(param_2->Min).field0_0x0 + 0xc);
          uVar91 = *(undefined4 *)&(param_2->Max).field0_0x0;
          uVar84 = *(undefined4 *)((longlong)&(param_2->Max).field0_0x0 + 4);
          uVar93 = *(undefined4 *)((longlong)&(param_2->Max).field0_0x0 + 8);
          uStack_7cc = *(undefined4 *)((longlong)&(param_2->Max).field0_0x0 + 0xc);
          local_768.Translation.XY.m128d_f64[0] = (param_1->Translation).XY.m128d_f64[0];
          local_768.Translation.XY.m128d_f64[1] = (param_1->Translation).XY.m128d_f64[1];
          local_768.Scale3D.XY.m128d_f64[0] = (param_1->Scale3D).XY.m128d_f64[0];
          local_768.Scale3D.XY.m128d_f64[1] = (param_1->Scale3D).XY.m128d_f64[1];
          local_768.Translation.ZW.m128d_f64[0] = (param_1->Translation).ZW.m128d_f64[0];
          local_768.Translation.ZW.m128d_f64[1] = (param_1->Translation).ZW.m128d_f64[1];
          local_7c8 = *(undefined8 *)&param_2->bIsValid;
          local_768.Scale3D.ZW.m128d_f64[0] = (param_1->Scale3D).ZW.m128d_f64[0];
          local_768.Scale3D.ZW.m128d_f64[1] = (param_1->Scale3D).ZW.m128d_f64[1];
          local_878 = 0.0;
          local_870 = this_03;
          local_7d8 = uVar91;
          uStack_7d4 = uVar84;
          uStack_7d0 = uVar93;
          if ((param_2->bIsValid == false) ||
             ((((param_2->Max).field0_0x0._s_0.X - (param_2->Min).field0_0x0._s_0.X) *
               __real_3fe0000000000000 == 0.0 &&
              (((param_2->Max).field0_0x0._s_0.Y - (param_2->Min).field0_0x0._s_0.Y) *
               __real_3fe0000000000000 == 0.0)))) {
            local_768.Rotation.XY.m128d_f64[0] = (this_03->Rotation).XY.m128d_f64[0];
            local_768.Rotation.XY.m128d_f64[1] = (this_03->Rotation).XY.m128d_f64[1];
            local_768.Rotation.ZW.m128d_f64[0] = (this_03->Rotation).ZW.m128d_f64[0];
            local_768.Rotation.ZW.m128d_f64[1] = (this_03->Rotation).ZW.m128d_f64[1];
            local_768.Translation.XY.m128d_f64[0] = (this_03->Translation).XY.m128d_f64[0];
            local_768.Translation.XY.m128d_f64[1] = (this_03->Translation).XY.m128d_f64[1];
            local_768.Translation.ZW.m128d_f64[0] = (this_03->Translation).ZW.m128d_f64[0];
            local_768.Translation.ZW.m128d_f64[1] = (this_03->Translation).ZW.m128d_f64[1];
            local_768.Scale3D.XY.m128d_f64[0] = (this_03->Scale3D).XY.m128d_f64[0];
            local_768.Scale3D.XY.m128d_f64[1] = (this_03->Scale3D).XY.m128d_f64[1];
            local_768.Scale3D.ZW.m128d_f64[0] = (this_03->Scale3D).ZW.m128d_f64[0];
            local_768.Scale3D.ZW.m128d_f64[1] = (this_03->Scale3D).ZW.m128d_f64[1];
            ULandscapeInfo::GetLoadedBounds(this_00,&local_2b8);
            pTVar27 = UE::Math::TTransform<double>::InverseTransformPosition
                                (this_03,&local_528,&local_2b8.Max);
            uVar91 = (undefined4)*(undefined8 *)&pTVar27->field0_0x0;
            uVar84 = (undefined4)((ulonglong)*(undefined8 *)&pTVar27->field0_0x0 >> 0x20);
            uVar3 = *(undefined8 *)((longlong)&pTVar27->field0_0x0 + 8);
            uVar13 = *(undefined4 *)&pTVar27->field0_0x0;
            uVar14 = *(undefined4 *)((longlong)&pTVar27->field0_0x0 + 4);
            uVar15 = *(undefined4 *)((longlong)&pTVar27->field0_0x0 + 8);
            uVar10 = *(undefined4 *)&pTVar27->field0_0x0;
            uVar11 = *(undefined4 *)((longlong)&pTVar27->field0_0x0 + 4);
            uVar12 = *(undefined4 *)((longlong)&pTVar27->field0_0x0 + 8);
            pTVar27 = UE::Math::TTransform<double>::InverseTransformPosition
                                (this_03,&local_510,&local_2b8.Min);
            uVar93 = (undefined4)uVar3;
            uStack_7cc = (undefined4)((ulonglong)uVar3 >> 0x20);
            local_658 = 1;
            local_7c8 = CONCAT71(uStack_657,1);
            local_7e8._0_4_ = *(undefined4 *)&pTVar27->field0_0x0;
            local_7e8._4_4_ = *(undefined4 *)((longlong)&pTVar27->field0_0x0 + 4);
            local_7e8._8_4_ = *(undefined4 *)((longlong)&pTVar27->field0_0x0 + 8);
            local_7e8._12_4_ = *(undefined4 *)((longlong)&pTVar27->field0_0x0 + 0xc);
            local_7d8 = uVar13;
            uStack_7d4 = uVar14;
            uStack_7d0 = uVar15;
            local_678 = local_7e8._0_4_;
            uStack_674 = local_7e8._4_4_;
            uStack_670 = local_7e8._8_4_;
            uStack_66c = local_7e8._12_4_;
            local_668 = uVar10;
            uStack_664 = uVar11;
            uStack_660 = uVar12;
            uStack_65c = uStack_7cc;
          }
          uVar14 = uStack_7cc;
          uVar13 = local_7e8._12_4_;
          uVar12 = local_7e8._8_4_;
          uVar11 = local_7e8._4_4_;
          uVar10 = local_7e8._0_4_;
          pAVar47 = local_8c8;
          if (FVisualLogger::bIsRecording != 0) {
            pTVar28 = UE::Math::TTransform<double>::ToMatrixWithScale(&local_768,&local_1f8);
            pAVar47 = local_8c8;
            local_3f8._s_0.X = (double)CONCAT44(uVar11,uVar10);
            local_3e0 = CONCAT44(uVar84,uVar91);
            local_3f8._s_0.Y = (double)CONCAT44(uVar13,uVar12);
            local_3f8._s_0.Z = 0.0;
            local_3d8 = CONCAT44(uVar14,uVar93);
            local_3d0 = 0;
            local_3c8 = 1;
            FVisualLogger::BoxLogfImpl
                      ((UObject *)local_8c8,(FName *)&LogLandscape.field_0x4,Log,
                       (TBox<double> *)&local_3f8._s_0,pTVar28,&FColor::Blue,false,
                       L"LandscapeRenderMergedTexture");
          }
          local_45c = 0x80;
          local_488._0_8_ = 0;
          local_488._8_8_ = 0;
          local_468 = 0;
          local_460 = 0;
          local_454 = 0;
          local_448 = (void *)0x0;
          local_440 = 0;
          local_690._s_0.Min.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
          local_690._s_0.Max.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
          local_458 = 0xffffffff;
          bVar21 = ULandscapeInfo::GetOverlappedComponents
                             (this_00,&local_768,(TBox2<double> *)&local_7e8._s_0,
                              (TMap<UE::Math::TIntPoint<int>,ULandscapeComponent_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,ULandscapeComponent_*,0>_>
                               *)local_488,(TIntRect<int> *)&local_690._s_0);
          if (bVar21) {
            RenderCaptureInterface::FScopedCapture::FScopedCapture
                      (&local_4f8,UE::Landscape::RenderCaptureNextMergeRenders != 0,
                       L"LandscapeRenderMergedTextureCapture",(wchar_t *)0x0);
            pTVar43 = local_8b8;
            iVar37 = UE::Landscape::RenderCaptureNextMergeRenders + -1;
            local_900.Data = (FScriptContainerElement *)0x0;
            local_8f8 = 0;
            UE::Landscape::RenderCaptureNextMergeRenders = 0;
            if (0 < iVar37) {
              UE::Landscape::RenderCaptureNextMergeRenders = iVar37;
            }
            if (iVar45 == 0) {
              local_7b0 = 1;
LAB_145f1bffd:
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0xf0,0x10,(int)local_7b0,&local_900,0,(int *)((longlong)&local_8f8 + 4));
            }
            else {
              uVar23 = local_8b8->ArrayNum;
              local_7b0 = (ulonglong)uVar23;
              if ((int)uVar23 < 0) {
                    /* WARNING: Subroutine does not return */
                UE::Core::Private::OnInvalidArrayNum(local_7b0);
              }
              if (0 < (int)uVar23) goto LAB_145f1bffd;
            }
            local_8dc = 0;
            local_850 = 0;
            if ((int)local_7b0 != 0) {
              do {
                lVar9 = local_850;
                if (iVar45 == 0) {
                  pFVar29 = ::FName::FName(&local_6a8,L"Heightmap");
                  FVar40 = *pFVar29;
                }
                else {
                  uVar23 = 0;
                  if ((int)local_8dc < pTVar43->ArrayNum) {
                    uVar23 = ~local_8dc >> 0x1f;
                  }
                  if ((uVar23 == 0) &&
                     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar21)) {
                    pcVar4 = (code *)swi(3);
                    uVar22 = (*pcVar4)();
                    return (bool)uVar22;
                  }
                  FVar40 = *(FName *)((pTVar43->AllocatorInstance).Data + lVar9 * 8);
                  local_680 = FVar40;
                }
                if ((int)local_8f8 == local_8f8._4_4_) {
                  iVar37 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x10f0,&local_900,(int *)((longlong)&local_8f8 + 4));
                  local_8f8 = CONCAT44(local_8f8._4_4_,iVar37);
                }
                local_7c0 = (longlong)(int)local_8f8 * 0xf0;
                local_8f0 = 0;
                uStack_8e8 = 0;
                local_7b8 = (FRenderInfo *)local_900.Data;
                local_8f8 = CONCAT44(local_8f8._4_4_,(int)local_8f8 + 1);
                local_808._padding_._0_4_ = 0;
                *(undefined8 *)&local_900.Data[local_7c0].field_0x0 = 0;
                *(undefined8 *)(local_900.Data + local_7c0 + 8) = 0;
                *(undefined8 *)(local_900.Data + local_7c0 + 0x10) = 0;
                *(undefined8 *)(local_900.Data + local_7c0 + 0x10 + 8) = 0;
                *(undefined8 *)(local_900.Data + local_7c0 + 0x20) = 0;
                *(undefined8 *)(local_900.Data + local_7c0 + 0x20 + 8) = 0;
                *(undefined8 *)(local_900.Data + local_7c0 + 0x30) = 0;
                *(undefined8 *)(local_900.Data + local_7c0 + 0x30 + 8) = 0;
                *(undefined8 *)(local_900.Data + local_7c0 + 0x40) = 0;
                *(undefined8 *)(local_900.Data + local_7c0 + 0x40 + 8) = 0;
                *(undefined8 *)(local_900.Data + local_7c0 + 0x50) = 0;
                *(undefined8 *)(local_900.Data + local_7c0 + 0x50 + 8) = 0;
                *(undefined8 *)(local_900.Data + local_7c0 + 0x60) = 0;
                *(undefined8 *)(local_900.Data + local_7c0 + 0x60 + 8) = 0;
                *(undefined8 *)(local_900.Data + local_7c0 + 0x70) = 0;
                *(undefined8 *)(local_900.Data + local_7c0 + 0x70 + 8) = 0;
                *(undefined8 *)(local_900.Data + local_7c0 + 0x80) = 0;
                *(undefined4 *)(local_900.Data + local_7c0 + 0x8c) = 1;
                *(undefined8 *)(local_900.Data + local_7c0 + 0xa8) = 0;
                *(undefined8 *)(local_900.Data + local_7c0 + 0xa8 + 8) = 0;
                *(undefined8 *)(local_900.Data + local_7c0 + 0xd0) = 0;
                *(undefined8 *)(local_900.Data + local_7c0 + 0xe4) = 0;
                *(undefined4 *)(local_900.Data + local_7c0 + 0xec) = 0;
                *(undefined8 *)(local_900.Data + local_7c0 + 0x90) = 0;
                pFVar30 = local_900.Data + local_7c0 + 0x98;
                *(undefined4 *)(local_900.Data + local_7c0 + 0x88) = 1;
                local_818._0_8_ = pFVar30;
                local_808._padding_._4_4_ = 1;
                local_808.UnvisitedBitMask = 0xffffffff;
                *(undefined8 *)pFVar30 = 0;
                *(undefined8 *)(pFVar30 + 8) = 0;
                *(undefined8 *)(pFVar30 + 0x20) = 0;
                *(undefined4 *)(pFVar30 + 0x28) = 0;
                *(undefined4 *)(pFVar30 + 0x2c) = 0x80;
                *(undefined4 *)(pFVar30 + 0x30) = 0xffffffff;
                *(undefined4 *)(pFVar30 + 0x34) = 0;
                *(undefined8 *)(pFVar30 + 0x40) = 0;
                *(undefined4 *)(pFVar30 + 0x48) = 0;
                local_868 = *(undefined4 *)&pAVar47->field_0x774;
                *(ulonglong *)(local_900.Data + local_7c0 + 0x80) = CONCAT44(local_868,local_868);
                *(undefined4 *)(local_900.Data + local_7c0 + 0x88) =
                     *(undefined4 *)&pAVar47->field_0x778;
                local_900.Data[local_7c0 + 0x8c] = FVar50;
                local_900.Data[local_7c0 + 0x8d] = local_908;
                local_808.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_488 + 0x10);
                *(FName *)(local_900.Data + local_7c0 + 0x90) = FVar40;
                local_808.CurrentBitIndex = 0;
                local_808.BaseBitIndex = 0;
                uStack_864 = local_868;
                if (local_460 != 0) {
                  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_808);
                }
                TStack_798._padding_ =
                     CONCAT44(local_808._padding_._4_4_,(undefined4)local_808._padding_);
                local_7a8.Value = (FTexture2DResourceSubregion *)local_488;
                TStack_798.CurrentBitIndex = local_808.CurrentBitIndex;
                TStack_798.UnvisitedBitMask = local_808.UnvisitedBitMask;
                TStack_798._28_4_ = local_808._28_4_;
                TStack_798.BaseBitIndex = local_808.BaseBitIndex;
                local_6d0 = local_488._8_4_ - local_454;
                local_6f8._16_8_ = local_808.Array;
                uStack_778 = CONCAT44(uStack_6cc,local_6d0);
                TStack_798.Array = local_808.Array;
                local_6f8._0_8_ = local_7a8.Value;
                local_6f8._8_8_ = TStack_798._padding_;
                local_6f8._24_8_ = TStack_798._16_8_;
                local_6f8._32_8_ = TStack_798._24_8_;
                pTVar31 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
                          TConstSetBitIterator<FDefaultBitArrayAllocator>
                                    ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)local_6f8,
                                     (TBitArray<FDefaultBitArrayAllocator> *)(local_488 + 0x10),
                                     local_460);
                local_5d0 = pTVar31->_padding_;
                local_828 = pTVar31->Array;
                local_5c0._0_4_ = pTVar31->UnvisitedBitMask;
                local_5c0._4_4_ = pTVar31->CurrentBitIndex;
                uStack_5b8 = *(undefined8 *)&pTVar31->BaseBitIndex;
                local_8d8 = local_5c0._4_4_;
                iVar37 = (int)uStack_8e8;
                pTStack_5c8 = local_828;
                iVar44 = uStack_8e8._4_4_;
                while( true ) {
                  pFVar17 = local_7a8.Value;
                  iVar46 = local_8d8;
                  local_890 = iVar37;
                  if (*(int *)&((local_7a8.Value)->Subregion).field0_0x0 -
                      *(int *)((longlong)&local_7a8.Value[1].Subregion.field0_0x0 + 0xc) !=
                      (int)uStack_778) {
                    local_904[0] = 0;
                    `TSparseArray<TSparseSetElement<TTuple<UE::Math::TIntPoint<int>,ULandscapeComponent_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_904);
                  }
                  dVar19 = local_768.Scale3D.ZW.m128d_f64[0];
                  dVar18 = local_768.Rotation.ZW.m128d_f64[1];
                  dVar61 = local_768.Rotation.ZW.m128d_f64[0];
                  dVar63 = local_878;
                  if (((TStack_798.CurrentBitIndex == iVar46) && (TStack_798.Array == local_828)) &&
                     (pFVar17 == (FTexture2DResourceSubregion *)local_488)) break;
                  local_8e0 = 0xffffffff;
                  plVar1 = &pFVar17->Texture->_padding_ + (longlong)TStack_798.CurrentBitIndex * 3;
                  local_840 = *plVar1;
                  lVar9 = plVar1[1];
                  lStack_838 = lVar9;
                  iVar46 = iVar44;
                  if (iVar45 == 0) {
                    local_888 = *(UTexture2D **)(lVar9 + 0x658);
                    TVar95._s_0 = *(TVector2<double>_u_0 *)
                                   &((TVector2<double>_u_0 *)(lVar9 + 0x5f0))->_s_0;
LAB_145f1c46d:
                    if (local_888 != (UTexture2D *)0x0) {
                      iVar45 = *(int *)(lVar9 + 0x554);
                      iVar37 = *(int *)(lVar9 + 0x558);
                      pFVar33 = UTexture::GetResource((UTexture *)local_888);
                      if (pFVar33 == (FTextureResource *)0x0) {
                        iVar48 = 0;
                        iVar46 = 0;
                        bVar21 = UE::Assert::Private::ExecCheckImplInternal
                                           (&bGEnsureHasExecuted<5887638317222072031>,false,
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\Landscape.cpp"
                                            ,0xedf,"SourceTextureResource");
                        if (bVar21) {
                          pcVar4 = (code *)swi(3);
                          uVar22 = (*pcVar4)();
                          return (bool)uVar22;
                        }
                      }
                      else {
                        uVar23 = (**(code **)(pFVar33->_padding_ + 0x38))(pFVar33);
                        auVar7._4_8_ = extraout_XMM0_Qb;
                        auVar7._0_4_ = TVar95._4_4_;
                        auVar53._0_8_ = auVar7._0_8_ << 0x20;
                        auVar53._8_4_ = TVar95._8_4_;
                        auVar53._12_4_ = TVar95._12_4_;
                        dVar63 = (double)uVar23 * auVar53._8_8_;
                        uVar23 = (**(code **)(pFVar33->_padding_ + 0x30))(pFVar33);
                        dVar61 = (double)uVar23 * TVar95._s_0.X;
                        iVar48 = (int)ROUND((dVar61 + dVar61) - dVar16) >> 1;
                        iVar46 = (int)ROUND((dVar63 + dVar63) - dVar16) >> 1;
                      }
                      iVar24 = UTexture2D::GetNumMips(local_888);
                      iVar25 = UTexture2D::GetNumResidentMips(local_888);
                      bVar36 = (char)iVar24 - (char)iVar25;
                      local_860 = iVar48 >> (bVar36 & 0x1f);
                      iStack_854 = (iVar45 + 1) * iVar37 >> (bVar36 & 0x1f);
                      iStack_85c = iVar46 >> (bVar36 & 0x1f);
                      local_858 = iStack_854 + local_860;
                      iStack_854 = iStack_854 + iStack_85c;
                      local_6c8 = (**(code **)(pFVar33->_padding_ + 0x58))(pFVar33);
                      local_6c0 = CONCAT44(iStack_85c,local_860);
                      local_6b8 = CONCAT44(iStack_854,local_858);
                      local_6b0 = local_8e0;
                      local_708 = &local_840;
                      local_700 = &local_6c8;
                      TSet<TTuple<UE::Math::TIntPoint<int>,UE::Landscape::Private::RenderMergedTexture_RenderThread::FTexture2DResourceSubregion>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,UE::Landscape::Private::RenderMergedTexture_RenderThread::FTexture2DResourceSubregion,0>,FDefaultSetAllocator>
                      ::
                      Emplace<TPairInitializer<UE::Math::TIntPoint<int>_const_&,UE::Landscape::Private::RenderMergedTexture_RenderThread::FTexture2DResourceSubregion_&&>_>
                                ((TSet<TTuple<UE::Math::TIntPoint<int>,UE::Landscape::Private::RenderMergedTexture_RenderThread::FTexture2DResourceSubregion>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,UE::Landscape::Private::RenderMergedTexture_RenderThread::FTexture2DResourceSubregion,0>,FDefaultSetAllocator>
                                  *)local_818._0_8_,&local_7a8,(bool *)&local_708);
                      iVar48 = (int)local_840;
                      iStack_8d0 = (int)((ulonglong)local_840 >> 0x20);
                      iVar45 = iStack_8d0;
                      iVar46 = iStack_8d0 + 1;
                      iVar37 = iVar48 + 1;
                      if ((int)local_8f0 < iVar48) {
                        iVar48 = (int)local_8f0;
                      }
                      _local_8d4 = CONCAT44(iVar46,iVar37);
                      if (local_8f0._4_4_ < iVar45) {
                        iVar45 = local_8f0._4_4_;
                      }
                      if (iVar37 < local_890) {
                        iVar37 = local_890;
                      }
                      local_8f0 = CONCAT44(iVar45,iVar48);
                      uStack_8e8 = CONCAT44(uStack_8e8._4_4_,iVar37);
                      if (iVar46 < iVar44) {
                        iVar46 = iVar44;
                      }
                    }
                  }
                  else {
                    pFVar32 = TArray<FWeightmapLayerAllocationInfo,TSizedDefaultAllocator<32>_>::
                              FindByPredicate<_ALandscape::RenderMergedTextureInternal_::__l195::<lambda_1>_>
                                        ((TArray<FWeightmapLayerAllocationInfo,TSizedDefaultAllocator<32>_>
                                          *)(lVar9 + 0x660),(<lambda_1>)FVar40);
                    if (pFVar32 != (FWeightmapLayerAllocationInfo *)0x0) {
                      bVar36 = pFVar32->WeightmapTextureIndex;
                      if ((*(int *)(lVar9 + 0x678) <= (int)(uint)bVar36) &&
                         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar21)) {
                        pcVar4 = (code *)swi(3);
                        uVar22 = (*pcVar4)();
                        return (bool)uVar22;
                      }
                      local_888 = *(UTexture2D **)
                                   (*(longlong *)(lVar9 + 0x670) + (ulonglong)bVar36 * 8);
                      if ((local_888 == (UTexture2D *)0x0) &&
                         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                             ("SourceTexture != nullptr",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\Landscape.cpp"
                                              ,0xecf,L""), bVar21)) {
                        pcVar4 = (code *)swi(3);
                        uVar22 = (*pcVar4)();
                        return (bool)uVar22;
                      }
                      local_8e0 = (uint)pFVar32->WeightmapTextureChannel;
                      TVar95 = UE::Math::TVector2<double>::ZeroVector.field0_0x0;
                      goto LAB_145f1c46d;
                    }
                  }
                  iVar44 = iVar46;
                  TStack_798.UnvisitedBitMask =
                       TStack_798.UnvisitedBitMask & ~TStack_798._padding_._4_4_;
                  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_798);
                  iVar45 = local_88c;
                }
                auVar65._8_8_ = local_768.Rotation.ZW.m128d_f64[1];
                auVar65._0_8_ = local_768.Rotation.ZW.m128d_f64[0];
                local_650 = CONCAT44(local_7e8._4_4_,local_7e8._0_4_);
                uStack_648 = CONCAT44(local_7e8._12_4_,local_7e8._8_4_);
                dVar52 = local_768.Scale3D.XY.m128d_f64[0] *
                         (double)CONCAT44(local_7e8._4_4_,local_7e8._0_4_);
                dVar62 = local_768.Scale3D.XY.m128d_f64[1] *
                         (double)CONCAT44(local_7e8._12_4_,local_7e8._8_4_);
                uVar91 = (undefined4)((ulonglong)dVar62 >> 0x20);
                uStack_8e8 = CONCAT44(iVar44,(int)uStack_8e8);
                auVar96._8_4_ = SUB84(dVar62,0);
                auVar96._0_8_ = dVar52;
                auVar96._12_4_ = uVar91;
                local_640 = local_878;
                local_818._8_8_ = local_768.Rotation.XY.m128d_f64[1];
                local_818._0_8_ = local_768.Rotation.XY.m128d_f64[0];
                auVar64._8_4_ = SUB84(dVar62,0);
                auVar64._0_8_ = dVar52;
                auVar64._12_4_ = uVar91;
                auVar101._0_8_ = local_878 * local_768.Scale3D.ZW.m128d_f64[0];
                auVar101._8_8_ = local_768.Scale3D.ZW.m128d_f64[1] * 0.0;
                auVar80 = blendpd(local_818,auVar65,2);
                auVar65 = blendpd(auVar64,auVar101,2);
                auVar57._8_4_ = SUB84(local_768.Rotation.ZW.m128d_f64[0],0);
                auVar57._0_8_ = local_768.Rotation.XY.m128d_f64[1];
                auVar57._12_4_ = (int)((ulonglong)local_768.Rotation.ZW.m128d_f64[0] >> 0x20);
                local_620 = local_768.Scale3D.XY.m128d_f64[0];
                dStack_618 = local_768.Scale3D.XY.m128d_f64[1];
                auVar97._0_8_ =
                     auVar96._8_8_ * local_768.Rotation.XY.m128d_f64[0] -
                     local_768.Rotation.XY.m128d_f64[1] * dVar52;
                auVar97._8_8_ =
                     auVar101._0_8_ * local_768.Rotation.XY.m128d_f64[1] - auVar57._8_8_ * dVar62;
                auVar86._8_4_ = SUB84(auVar97._8_8_,0);
                auVar86._0_8_ = auVar97._0_8_;
                auVar86._12_4_ = (int)((ulonglong)auVar97._8_8_ >> 0x20);
                auVar66._0_8_ =
                     auVar65._0_8_ * local_768.Rotation.ZW.m128d_f64[0] -
                     auVar80._0_8_ * auVar101._0_8_;
                auVar66._8_8_ =
                     auVar65._8_8_ * local_768.Rotation.ZW.m128d_f64[1] -
                     auVar80._8_8_ * auVar101._8_8_;
                auVar65 = blendpd(auVar97,auVar66,2);
                dVar85 = auVar86._8_8_ + auVar86._8_8_;
                dVar92 = auVar66._0_8_ + auVar66._0_8_;
                auVar98._0_8_ = auVar65._0_8_ + auVar65._0_8_;
                auVar98._8_8_ = auVar65._8_8_ + auVar65._8_8_;
                uVar91 = SUB84(dVar92,0);
                auVar73._8_4_ = uVar91;
                auVar73._0_8_ = dVar85;
                uVar84 = (undefined4)((ulonglong)dVar92 >> 0x20);
                auVar73._12_4_ = uVar84;
                auVar69._8_4_ = uVar91;
                auVar69._0_8_ = dVar85;
                auVar69._12_4_ = uVar84;
                auVar67._8_4_ = uVar91;
                auVar67._0_8_ = dVar85;
                auVar67._12_4_ = uVar84;
                auVar65 = blendpd(auVar67,auVar98,2);
                auVar74._0_8_ =
                     auVar73._8_8_ * local_768.Rotation.XY.m128d_f64[0] -
                     dVar85 * local_768.Rotation.XY.m128d_f64[1];
                auVar74._8_8_ =
                     auVar98._0_8_ * local_768.Rotation.XY.m128d_f64[1] -
                     auVar69._8_8_ * local_768.Rotation.ZW.m128d_f64[0];
                auVar54._8_4_ = SUB84(auVar98._8_8_,0);
                auVar54._0_8_ = auVar98._0_8_;
                auVar54._12_4_ = (int)((ulonglong)auVar98._8_8_ >> 0x20);
                auVar68._0_8_ =
                     auVar65._0_8_ * local_768.Rotation.ZW.m128d_f64[0] -
                     auVar98._0_8_ * auVar80._0_8_;
                auVar68._8_8_ =
                     auVar65._8_8_ * local_768.Rotation.ZW.m128d_f64[1] -
                     auVar54._8_8_ * auVar80._8_8_;
                auVar80._8_4_ = SUB84(auVar74._8_8_,0);
                auVar80._0_8_ = auVar74._0_8_;
                auVar80._12_4_ = (int)((ulonglong)auVar74._8_8_ >> 0x20);
                auVar65 = blendpd(auVar74,auVar68,2);
                local_888 = (UTexture2D *)
                            (dVar85 * local_768.Rotation.ZW.m128d_f64[1] + dVar52 + auVar80._8_8_ +
                            local_768.Translation.XY.m128d_f64[0]);
                dStack_630 = dVar92 * local_768.Rotation.ZW.m128d_f64[1] + dVar62 + auVar68._0_8_ +
                             local_768.Translation.XY.m128d_f64[1];
                auVar8._4_8_ = auVar68._0_8_;
                auVar8._0_4_ = (int)((ulonglong)local_888 >> 0x20);
                auVar55._0_8_ = auVar8._0_8_ << 0x20;
                auVar55._8_4_ = SUB84(dStack_630,0);
                auVar55._12_4_ = (int)((ulonglong)dStack_630 >> 0x20);
                local_828 = (TBitArray<FDefaultBitArrayAllocator> *)
                            (auVar98._0_8_ * local_768.Rotation.ZW.m128d_f64[1] + auVar101._0_8_ +
                             auVar65._0_8_ + local_768.Translation.ZW.m128d_f64[0]);
                dStack_880 = auVar55._8_8_;
                dStack_820 = local_878;
                dVar62 = ((double)CONCAT44(uStack_7d4,local_7d8) -
                         (double)CONCAT44(local_7e8._4_4_,local_7e8._0_4_)) *
                         local_768.Scale3D.XY.m128d_f64[0];
                uVar91 = SUB84(local_878,0);
                uVar41 = (ulonglong)local_878 >> 0x20;
                iVar46 = (int)local_8f0;
                iVar48 = local_8f0._4_4_;
                dVar52 = ((double)CONCAT44(uStack_7cc,uStack_7d0) -
                         (double)CONCAT44(local_7e8._12_4_,local_7e8._8_4_)) *
                         local_768.Scale3D.XY.m128d_f64[1];
                local_610 = local_768.Scale3D.ZW.m128d_f64[0];
                auVar102._8_8_ = dVar52;
                auVar102._0_8_ = dVar62;
                iVar24 = iVar37 - (int)local_8f0;
                local_638 = local_888;
                local_628 = (double)local_828;
                if ((((iVar24 != 0) || (iVar44 != local_8f0._4_4_)) &&
                    ((iVar37 <= (int)local_8f0 || (iVar44 <= local_8f0._4_4_)))) &&
                   (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                       ("RenderTargetComponentIndicesBoundingRect.IsEmpty() || (RenderTargetComponentIndicesBoundingRect.Min.X < RenderTargetComponentIndicesBoundingRect.Max.X) && (RenderTargetComponentIndicesBoundingRect.Min.Y < RenderTargetComponentIndicesBoundingRect.Max.Y)"
                                        ,
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\Landscape.cpp"
                                        ,0xf03,L""), bVar21)) {
                  pcVar4 = (code *)swi(3);
                  uVar22 = (*pcVar4)();
                  return (bool)uVar22;
                }
                pAVar47 = local_8c8;
                dVar85 = dVar63 * (local_870->Scale3D).ZW.m128d_f64[0];
                dVar92 = (local_870->Scale3D).ZW.m128d_f64[1] * 0.0;
                iStack_8bc = (int)((ulonglong)uStack_8e8 >> 0x20);
                iStack_8bc = iStack_8bc - iVar48;
                _local_8c0 = CONCAT44(iStack_8bc,iVar24);
                local_5f8 = (local_870->Scale3D).ZW.m128d_f64[0];
                local_608 = (local_870->Scale3D).XY.m128d_f64[0];
                dStack_600 = (local_870->Scale3D).XY.m128d_f64[1];
                auVar65 = *(undefined1 (*) [16])(local_870->Rotation).XY.m128d_f64;
                dVar79 = (local_870->Rotation).ZW.m128d_f64[1];
                dVar100 = (double)*(int *)&local_8c8->field_0x770;
                local_5f0 = (double)iVar46 * dVar100 - dVar16;
                local_5e0 = dVar63;
                dStack_5e8 = (double)(int)((ulonglong)local_8f0 >> 0x20) * dVar100 - dVar16;
                local_548 = *(undefined1 (*) [16])(local_870->Rotation).XY.m128d_f64;
                auVar69 = blendpd(local_548,*(undefined1 (*) [16])(local_870->Rotation).ZW.m128d_f64
                                  ,2);
                dVar94 = local_5f0 * local_608;
                dVar99 = dStack_5e8 * dStack_600;
                auVar87._8_4_ = SUB84(dVar99,0);
                auVar87._0_8_ = dVar94;
                uVar84 = (undefined4)((ulonglong)dVar99 >> 0x20);
                auVar87._12_4_ = uVar84;
                auVar88._0_8_ = auVar87._8_8_ * local_548._0_8_ - local_548._8_8_ * dVar94;
                auVar88._8_8_ =
                     dVar85 * local_548._8_8_ - (local_870->Rotation).ZW.m128d_f64[0] * dVar99;
                auVar56._8_4_ = SUB84(dVar99,0);
                auVar56._0_8_ = dVar94;
                auVar56._12_4_ = uVar84;
                auVar5._8_4_ = SUB84(dVar92,0);
                auVar5._0_8_ = dVar85;
                auVar5._12_4_ = (int)((ulonglong)dVar92 >> 0x20);
                auVar57 = blendpd(auVar56,auVar5,2);
                auVar81._8_4_ = SUB84(auVar88._8_8_,0);
                auVar81._0_8_ = auVar88._0_8_;
                auVar81._12_4_ = (int)((ulonglong)auVar88._8_8_ >> 0x20);
                auVar58._0_8_ =
                     auVar57._0_8_ * (local_870->Rotation).ZW.m128d_f64[0] - auVar69._0_8_ * dVar85;
                auVar58._8_8_ =
                     auVar57._8_8_ * (local_870->Rotation).ZW.m128d_f64[1] - auVar69._8_8_ * dVar92;
                auVar57 = blendpd(auVar88,auVar58,2);
                dVar92 = auVar81._8_8_ + auVar81._8_8_;
                dVar83 = auVar58._0_8_ + auVar58._0_8_;
                auVar89._0_8_ = auVar57._0_8_ + auVar57._0_8_;
                auVar89._8_8_ = auVar57._8_8_ + auVar57._8_8_;
                auVar76._8_4_ = SUB84(dVar83,0);
                auVar76._0_8_ = dVar92;
                uVar84 = (undefined4)((ulonglong)dVar83 >> 0x20);
                auVar76._12_4_ = uVar84;
                auVar70._8_4_ = SUB84(dVar83,0);
                auVar70._0_8_ = dVar92;
                auVar70._12_4_ = uVar84;
                auVar57 = blendpd(auVar70,auVar89,2);
                auVar69 = blendpd(auVar65,*(undefined1 (*) [16])(local_870->Rotation).ZW.m128d_f64,2
                                 );
                auVar77._0_8_ = auVar76._8_8_ * auVar65._0_8_ - auVar65._8_8_ * dVar92;
                auVar77._8_8_ =
                     auVar89._0_8_ * auVar65._8_8_ - (local_870->Rotation).ZW.m128d_f64[0] * dVar83;
                auVar71._0_8_ =
                     auVar57._0_8_ * (local_870->Rotation).ZW.m128d_f64[0] -
                     auVar69._0_8_ * auVar89._0_8_;
                auVar71._8_8_ =
                     auVar57._8_8_ * (local_870->Rotation).ZW.m128d_f64[1] -
                     auVar69._8_8_ * auVar89._8_8_;
                auVar59._8_4_ = SUB84(auVar77._8_8_,0);
                auVar59._0_8_ = auVar77._0_8_;
                auVar59._12_4_ = (int)((ulonglong)auVar77._8_8_ >> 0x20);
                local_5a8.Rotation.ZW.m128d_f64[0] = (local_870->Rotation).ZW.m128d_f64[0];
                local_5a8.Rotation.ZW.m128d_f64[1]._0_4_ =
                     *(undefined4 *)((local_870->Rotation).ZW.m128d_f64 + 1);
                local_5a8.Rotation.ZW.m128d_f64[1]._4_4_ =
                     *(undefined4 *)((longlong)(local_870->Rotation).ZW.m128d_f64 + 0xc);
                local_5a8.Translation.XY.m128d_f64[0] =
                     dVar92 * dVar79 + dVar94 + auVar59._8_8_ +
                     (local_870->Translation).XY.m128d_f64[0];
                local_5a8.Translation.XY.m128d_f64[1] =
                     dVar83 * dVar79 + dVar99 + auVar71._0_8_ +
                     (local_870->Translation).XY.m128d_f64[1];
                auVar65 = blendpd(auVar77,auVar71,2);
                local_5a8.Rotation.XY.m128d_f64[0] = (local_870->Rotation).XY.m128d_f64[0];
                local_5a8.Rotation.XY.m128d_f64[1] = (local_870->Rotation).XY.m128d_f64[1];
                local_5a8.Translation.ZW.m128d_f64[0] =
                     auVar89._0_8_ * dVar79 + dVar85 + auVar65._0_8_ +
                     (local_870->Translation).ZW.m128d_f64[0];
                auVar90._8_4_ = SUB84(dVar52,0);
                auVar90._0_8_ = dVar62;
                auVar90._12_4_ = (int)((ulonglong)dVar52 >> 0x20);
                local_5a8.Translation.ZW.m128d_f64[1] = dVar63;
                local_5a8.Scale3D.XY.m128d_f64[0] =
                     ((double)iVar24 * dVar100 + __real_3ff0000000000000) * local_608;
                local_5a8.Scale3D.XY.m128d_f64[1] =
                     ((double)iStack_8bc * dVar100 + __real_3ff0000000000000) * dStack_600;
                dVar85 = (double)local_818._0_8_ + (double)local_818._0_8_;
                dVar83 = (double)local_818._8_8_ + (double)local_818._8_8_;
                auVar82._8_4_ = SUB84(dVar83,0);
                auVar82._0_8_ = dVar85;
                uVar84 = (undefined4)((ulonglong)dVar83 >> 0x20);
                auVar82._12_4_ = uVar84;
                local_5a8.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
                local_5a8.Scale3D.ZW.m128d_f64[1] = _UNK_150689518;
                auVar75._8_4_ = SUB84(dVar83,0);
                auVar75._0_8_ = dVar85;
                auVar75._12_4_ = uVar84;
                dVar79 = dVar85 * (double)local_818._0_8_;
                dVar92 = auVar82._8_8_ * (double)local_818._8_8_;
                dVar63 = dVar61 + dVar61;
                auVar78._8_4_ = SUB84(dVar92,0);
                auVar78._0_8_ = dVar79;
                auVar78._12_4_ = (int)((ulonglong)dVar92 >> 0x20);
                dVar92 = auVar75._8_8_ * (double)local_818._0_8_;
                local_3b8.M[0][0] =
                     (GlobalVectorConstants::DoubleOne.XY.m128d_f64[0] -
                     (dVar63 * dVar61 + auVar78._8_8_)) * dVar62;
                local_3b8.M[1][1] =
                     (GlobalVectorConstants::DoubleOne.XY.m128d_f64[1] - (dVar63 * dVar61 + dVar79))
                     * dVar52;
                auVar72._8_4_ = SUB84(dVar18,0);
                auVar72._0_8_ = dVar18;
                auVar72._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
                dVar85 = auVar72._8_8_ * dVar85;
                local_3b8.M[0][1] = (dVar18 * dVar63 + dVar92) * dVar62;
                dVar52 = (dVar85 + dVar63 * (double)local_818._8_8_) * dVar52;
                local_3b8.M[1][0] = auVar90._8_8_ * (dVar92 - dVar18 * dVar63);
                local_3b8.M[2][1] = dVar19 * (dVar63 * (double)local_818._8_8_ - dVar85);
                auVar6._8_4_ = uVar91;
                auVar6._0_8_ = dVar19;
                auVar6._12_4_ = (int)uVar41;
                auVar65 = blendpd(auVar102,auVar6,2);
                local_3b8.M[2][2] =
                     (GlobalVectorConstants::DoubleOne.ZW.m128d_f64[0] - (dVar79 + auVar78._8_8_)) *
                     dVar19;
                local_3b8.M[0][2] =
                     auVar65._0_8_ * ((double)local_818._0_8_ * dVar63 - dVar83 * dVar18);
                auVar60._8_4_ = SUB84(dVar52,0);
                auVar60._0_8_ = local_3b8.M[0][1];
                auVar60._12_4_ = (int)((ulonglong)dVar52 >> 0x20);
                local_3b8.M[1][2] = auVar60._8_8_;
                local_3b8.M[2][0] = (dVar83 * dVar18 + (double)local_818._0_8_ * dVar63) * dVar19;
                local_3b8.M[1][3] = 0.0;
                local_3b8.M[3][3] = GlobalVectorConstants::DoubleOne2d.m128d_f64[1];
                local_3b8.M[0][3] = 0.0;
                local_3b8.M[2][3] = 0.0;
                local_3b8.M[3][0] = (double)local_888;
                local_3b8.M[3][1] = dStack_880;
                local_3b8.M[3][2] = (double)local_828;
                pTVar28 = UE::Math::TTransform<double>::ToMatrixWithScale(&local_5a8,&local_178);
                UE::Math::TMatrix<double>::Inverse(pTVar28,&local_278);
                VectorMatrixMultiply(&local_338,&local_3b8,&local_278);
                local_8dc = local_8dc + 1;
                local_850 = local_850 + 1;
                pdVar2 = (double *)
                         ((longlong)(local_7b8->OutputUVToMergedTextureUV).M[0] + local_7c0);
                *pdVar2 = local_338.M[0][0];
                pdVar2[1] = local_338.M[0][1];
                pdVar2 = (double *)
                         ((longlong)(local_7b8->OutputUVToMergedTextureUV).M[0] + local_7c0 + 0x10);
                *pdVar2 = local_338.M[0][2];
                pdVar2[1] = local_338.M[0][3];
                pdVar2 = (double *)
                         ((longlong)(local_7b8->OutputUVToMergedTextureUV).M[1] + local_7c0);
                *pdVar2 = local_338.M[1][0];
                pdVar2[1] = local_338.M[1][1];
                pdVar2 = (double *)
                         ((longlong)(local_7b8->OutputUVToMergedTextureUV).M[1] + local_7c0 + 0x10);
                *pdVar2 = local_338.M[1][2];
                pdVar2[1] = local_338.M[1][3];
                pdVar2 = (double *)
                         ((longlong)(local_7b8->OutputUVToMergedTextureUV).M[2] + local_7c0);
                *pdVar2 = local_338.M[2][0];
                pdVar2[1] = local_338.M[2][1];
                pdVar2 = (double *)
                         ((longlong)(local_7b8->OutputUVToMergedTextureUV).M[2] + local_7c0 + 0x10);
                *pdVar2 = local_338.M[2][2];
                pdVar2[1] = local_338.M[2][3];
                pdVar2 = (double *)
                         ((longlong)(local_7b8->OutputUVToMergedTextureUV).M[3] + local_7c0);
                *pdVar2 = local_338.M[3][0];
                pdVar2[1] = local_338.M[3][1];
                pdVar2 = (double *)
                         ((longlong)(local_7b8->OutputUVToMergedTextureUV).M[3] + local_7c0 + 0x10);
                *pdVar2 = local_338.M[3][2];
                pdVar2[1] = local_338.M[3][3];
                pTVar43 = local_8b8;
              } while (local_850 < (longlong)local_7b0);
            }
            pFVar34 = UTextureRenderTarget::GameThread_GetRenderTargetResource(local_848);
            if ((pFVar34 == (FTextureRenderTargetResource *)0x0) &&
               (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                   ("OutputRenderTargetResource != nullptr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\Landscape.cpp"
                                    ,0xf0f,L""), bVar21)) {
              pcVar4 = (code *)swi(3);
              uVar22 = (*pcVar4)();
              return (bool)uVar22;
            }
            local_8b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            TArray<UE::Landscape::Private::RenderMergedTexture_RenderThread::FRenderInfo,TSizedDefaultAllocator<32>_>
            ::CopyToEmpty<UE::Landscape::Private::RenderMergedTexture_RenderThread::FRenderInfo,int>
                      (&local_8b0,(FRenderInfo *)local_900.Data,(int)local_8f8,0);
            local_4b8[0] = (code *)0x0;
            local_8a0 = pFVar34;
            local_898 = FVar50;
            local_897 = EVar20;
            local_490 = FMemory::Malloc(0x28,8);
            local_490[1] = (code *)0x0;
            *local_490 = (code *)&UE::Core::Private::Function::
                                  TFunction_OwnedObject<`ALandscape::RenderMergedTextureInternal'::`2'::<lambda_2>,1,1>
                                  ::_vftable_;
            local_490[1] = (code *)local_8b0.AllocatorInstance.Data;
            local_8b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            *(int *)(local_490 + 2) = local_8b0.ArrayNum;
            *(int *)((longlong)local_490 + 0x14) = local_8b0.ArrayMax;
            local_8b0.ArrayNum = 0;
            local_8b0.ArrayMax = 0;
            local_490[3] = (code *)local_8a0;
            *(FScriptContainerElement *)(local_490 + 4) = local_898;
            *(EPixelFormat *)((longlong)local_490 + 0x21) = local_897;
            if (local_490 + 1 != (code **)0x0) {
              local_4b8[0] = UE::Core::Private::Function::
                             TFunctionRefCaller<`ALandscape::RenderMergedTextureInternal'::__l2::<lambda_2>,void,FRHICommandListImmediate_&>
                             ::Call;
            }
            this_01 = FRenderCommandList::GetInstanceTLS();
            if (this_01 == (FRenderCommandList *)0x0) {
              FRenderThreadCommandPipe::
              Enqueue<TRenderCommandTag<_ALandscape::RenderMergedTextureInternal_::__l2::TSTR_RenderMergedTexture3857>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_4b8);
            }
            else {
              this_02 = FRenderCommandList::GetRenderThread(this_01);
              local_438._0_8_ = local_4b8[0];
              local_4b8[0] = (code *)0x0;
              local_410 = local_490;
              local_490 = (code **)0x0;
              local_438._16_8_ = local_4a8[0];
              local_438._24_8_ = local_4a8[1];
              local_438._32_8_ = local_4a8[2];
              local_408 = 2;
              pFVar35 = (FRenderCommandTag *)
                        TRenderCommandTag<`ALandscape::RenderMergedTextureInternal'::__l2::TSTR_RenderMergedTexture3857>
                        ::Get();
              UE::RenderCommandPipe::FCommandList::Enqueue
                        (this_02,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                                  *)local_438,pFVar35);
              uVar41 = (ulonglong)local_408;
              if ((2 < uVar41) &&
                 (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                     ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                      ,0xd4,L""), bVar21)) {
                pcVar4 = (code *)swi(3);
                uVar22 = (*pcVar4)();
                return (bool)uVar22;
              }
              if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                            ::__l2::Destructors)[uVar41] ==
                  UE::Core::Private::
                  TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::
                  Destruct) {
                if ((code *)local_438._0_8_ != (code *)0x0) {
                  ppcVar39 = (code **)(local_438 + 0x10);
                  if (local_410 != (code **)0x0) {
                    ppcVar39 = local_410;
                  }
                  (**(code **)(*ppcVar39 + 0x10))();
                }
              }
              else {
                (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                            ::__l2::Destructors)[uVar41])(local_438);
              }
            }
            if (local_4b8[0] != (code *)0x0) {
              ppcVar39 = local_4b8 + 2;
              if (local_490 != (code **)0x0) {
                ppcVar39 = local_490;
              }
              (**(code **)(*ppcVar39 + 0x10))();
            }
            DestructItems<UE::Landscape::Private::RenderMergedTexture_RenderThread::FRenderInfo,int>
                      ((FRenderInfo *)local_8b0.AllocatorInstance.Data,local_8b0.ArrayNum);
            if ((FRenderInfo *)local_8b0.AllocatorInstance.Data != (FRenderInfo *)0x0) {
              FMemory::Free(local_8b0.AllocatorInstance.Data);
            }
            DestructItems<UE::Landscape::Private::RenderMergedTexture_RenderThread::FRenderInfo,int>
                      ((FRenderInfo *)local_900.Data,(int)local_8f8);
            if ((FRenderInfo *)local_900.Data != (FRenderInfo *)0x0) {
              FMemory::Free(local_900.Data);
            }
            RenderCaptureInterface::FScopedCapture::~FScopedCapture(&local_4f8);
          }
          else if (4 < (byte)LogLandscape._0_1_) {
            UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogLandscape);
          }
          bVar21 = true;
          local_440 = 0;
          if (local_448 != (void *)0x0) {
            FMemory::Free(local_448);
          }
          TSparseArray<TSparseSetElement<TTuple<UE::Math::TIntPoint<int>,ULandscapeComponent_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<TTuple<UE::Math::TIntPoint<int>,ULandscapeComponent_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ((TSparseArray<TSparseSetElement<TTuple<UE::Math::TIntPoint<int>,ULandscapeComponent_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)local_488);
          goto LAB_145f1cf6e;
        }
        if ((pUVar42 == (UTextureRenderTarget *)0x0) ||
           (iVar37 <= GPixelFormats[EVar20].NumComponents)) {
          if ((pUVar49 == (UTextureRenderTarget *)0x0) ||
             (iVar37 <= GPixelFormats[EVar20].NumComponents * (int)pUVar49[1]._padding_))
          goto LAB_145f1bc09;
          if (2 < (byte)LogLandscape._0_1_) {
            UE::Logging::Private::BasicLog<3>
                      ((FStaticBasicLogRecord *)&PTR_u_RenderMergedTex_1511975b8,
                       (FLogCategoryBase *)&LogLandscape);
          }
        }
        else if (2 < (byte)LogLandscape._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogLandscape);
        }
        break;
      default:
        if (2 < (byte)LogLandscape._0_1_) {
          GetPixelFormatString(EVar20);
          pFVar38 = &::LOG_Static;
LAB_145f1cf5d:
          UE::Logging::Private::BasicLog<3>(pFVar38,(FLogCategoryBase *)&LogLandscape);
        }
      }
    }
  }
LAB_145f1cf6c:
  bVar21 = false;
LAB_145f1cf6e:
  if (bVar51) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar21;
}

// RenderWeightmap @ 145f1d010

bool __thiscall
ALandscape::RenderWeightmap
          (ALandscape *this,TTransform<double> *param_1,TBox2<double> *param_2,FName param_3,
          UTextureRenderTarget2D *param_4)

{
  bool bVar1;
  TArray<FName,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,1,0,&local_18.AllocatorInstance,1,&local_18.ArrayMax);
  *(FName *)local_18.AllocatorInstance.Data = param_3;
  bVar1 = RenderMergedTextureInternal
                    (this,param_1,param_2,&local_18,(UTextureRenderTarget *)param_4);
  if ((FName *)local_18.AllocatorInstance.Data != (FName *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return bVar1;
}

// RenderWeightmaps @ 145f1d0d0

bool __thiscall
ALandscape::RenderWeightmaps
          (ALandscape *this,TTransform<double> *param_1,TBox2<double> *param_2,
          TArray<FName,TSizedDefaultAllocator<32>_> *param_3,UTextureRenderTarget *param_4)

{
  bool bVar1;
  
  bVar1 = RenderMergedTextureInternal(this,param_1,param_2,param_3,param_4);
  return bVar1;
}

// SetLODGroupKey @ 145f1dfb0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ALandscape::SetLODGroupKey(ALandscape *this,uint param_1)

{
  ULandscapeInfo *this_00;
  uint local_res10 [6];
  code *local_18;
  uint *local_10;
  
  if (*(uint *)&this->field_0x314 != param_1) {
    *(uint *)&this->field_0x314 = param_1;
    AActor::MarkComponentsRenderStateDirty((AActor *)this);
  }
  this_00 = (ULandscapeInfo *)(**(code **)(*(longlong *)&this->field_0x2c0 + 0x18))();
  if (this_00 != (ULandscapeInfo *)0x0) {
    local_10 = local_res10;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`ALandscape::SetLODGroupKey'::__l5::<lambda_1>,bool,ALandscapeProxy_*>
               ::Call;
    local_res10[0] = param_1;
    ULandscapeInfo::ForEachLandscapeProxy
              (this_00,(TFunctionRef<bool___cdecl(ALandscapeProxy_*)> *)&local_18);
  }
  return;
}

// StaticRegisterNativesALandscape @ 145f1eee0

void __cdecl ALandscape::StaticRegisterNativesALandscape(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 4;
  local_18.DataPtr = Z_Construct_UClass_ALandscape_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetTargetLayerNames @ 145f20eb0

void __cdecl ALandscape::execGetTargetLayerNames(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar2;
  int local_res10 [2];
  TArray<FName,TSizedDefaultAllocator<32>_> local_18;
  
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar2 = GetTargetLayerNames((ALandscape *)param_1,&local_18,local_res10[0] != 0);
  if (param_3 != pTVar2) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = (pTVar2->AllocatorInstance).Data;
    (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 8) = pTVar2->ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = pTVar2->ArrayMax;
    pTVar2->ArrayNum = 0;
    pTVar2->ArrayMax = 0;
  }
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execRenderHeightmap @ 145f21280

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl ALandscape::execRenderHeightmap(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  undefined1 auStackY_198 [32];
  UTextureRenderTarget *local_168;
  TArray<FName,TSizedDefaultAllocator<32>_> local_160;
  double local_150;
  double dStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  TVector2<double>_u_0 local_128;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  TTransform<double> local_f8;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_198;
  local_98._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_98._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_98._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_88._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_88._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_88._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_78._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_78._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_78._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_68._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_68._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_68._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_58._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_58._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_58._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_48._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_48._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_48._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_98);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_150,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_150);
  }
  local_168 = (UTextureRenderTarget *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_168,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_168);
  }
  local_128._s_0.X = local_150;
  local_128._s_0.Y = dStack_148;
  local_108 = local_130;
  local_118 = local_140;
  uStack_110 = uStack_138;
  local_f8.Rotation.ZW.m128d_f64[0] = (double)local_88._0_8_;
  local_f8.Rotation.ZW.m128d_f64[1] = (double)local_88._8_8_;
  local_f8.Rotation.XY.m128d_f64[0] = (double)local_98._0_8_;
  local_f8.Rotation.XY.m128d_f64[1] = (double)local_98._8_8_;
  local_f8.Translation.ZW.m128d_f64[0] = (double)local_68._0_8_;
  local_f8.Translation.ZW.m128d_f64[1] = (double)local_68._8_8_;
  local_f8.Translation.XY.m128d_f64[0] = (double)local_78._0_8_;
  local_f8.Translation.XY.m128d_f64[1] = (double)local_78._8_8_;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_f8.Scale3D.ZW.m128d_f64[0] = (double)local_48._0_8_;
  local_f8.Scale3D.ZW.m128d_f64[1] = (double)local_48._8_8_;
  local_f8.Scale3D.XY.m128d_f64[0] = (double)local_58._0_8_;
  local_f8.Scale3D.XY.m128d_f64[1] = (double)local_58._8_8_;
  local_160.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_160.ArrayNum = 0;
  local_160.ArrayMax = 0;
  bVar2 = RenderMergedTextureInternal
                    ((ALandscape *)param_1,&local_f8,(TBox2<double> *)&local_128._s_0,&local_160,
                     local_168);
  if (local_160.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_160.AllocatorInstance.Data);
  }
  *(bool *)param_3 = bVar2;
  return;
}

// execRenderWeightmap @ 145f215b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl ALandscape::execRenderWeightmap(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 uVar2;
  UTextureRenderTarget *pUVar3;
  bool bVar4;
  undefined1 auStackY_1b8 [32];
  undefined8 local_178;
  UTextureRenderTarget *local_170;
  TArray<FName,TSizedDefaultAllocator<32>_> local_168;
  double local_150;
  double dStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  TVector2<double>_u_0 local_128;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  TTransform<double> local_f8;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  local_98._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_98._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_98._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_88._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_88._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_88._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_78._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_78._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_78._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_68._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_68._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_68._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_58._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_58._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_58._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_48._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_48._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_48._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_98);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_150,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_150);
  }
  local_178 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_178,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_178);
  }
  local_170 = (UTextureRenderTarget *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_170,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_170);
  }
  pUVar3 = local_170;
  uVar2 = local_178;
  local_128._s_0.X = local_150;
  local_128._s_0.Y = dStack_148;
  local_108 = local_130;
  local_118 = local_140;
  uStack_110 = uStack_138;
  local_f8.Rotation.ZW.m128d_f64[0] = (double)local_88._0_8_;
  local_f8.Rotation.ZW.m128d_f64[1] = (double)local_88._8_8_;
  local_f8.Rotation.XY.m128d_f64[0] = (double)local_98._0_8_;
  local_f8.Rotation.XY.m128d_f64[1] = (double)local_98._8_8_;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_f8.Translation.ZW.m128d_f64[0] = (double)local_68._0_8_;
  local_f8.Translation.ZW.m128d_f64[1] = (double)local_68._8_8_;
  local_f8.Translation.XY.m128d_f64[0] = (double)local_78._0_8_;
  local_f8.Translation.XY.m128d_f64[1] = (double)local_78._8_8_;
  local_f8.Scale3D.ZW.m128d_f64[0] = (double)local_48._0_8_;
  local_f8.Scale3D.ZW.m128d_f64[1] = (double)local_48._8_8_;
  local_f8.Scale3D.XY.m128d_f64[0] = (double)local_58._0_8_;
  local_f8.Scale3D.XY.m128d_f64[1] = (double)local_58._8_8_;
  local_168.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_168.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,1,0,&local_168.AllocatorInstance,1,&local_168.ArrayMax);
  *(undefined8 *)local_168.AllocatorInstance.Data = uVar2;
  bVar4 = RenderMergedTextureInternal
                    ((ALandscape *)param_1,&local_f8,(TBox2<double> *)&local_128._s_0,&local_168,
                     pUVar3);
  if (local_168.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.AllocatorInstance.Data);
  }
  *(bool *)param_3 = bVar4;
  return;
}

// execRenderWeightmaps @ 145f21830

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl ALandscape::execRenderWeightmaps(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar3;
  undefined1 auStackY_198 [32];
  UTextureRenderTarget *local_168;
  TArray<FName,TSizedDefaultAllocator<32>_> local_160;
  double local_150;
  double dStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  TVector2<double>_u_0 local_128;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  TTransform<double> local_f8;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_198;
  local_98._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_98._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_98._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_88._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_88._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_88._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_78._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_78._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_78._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_68._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_68._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_68._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_58._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_58._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_58._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_48._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_48._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_48._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_98);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_150,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_150);
  }
  local_160.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_160.ArrayNum = 0;
  local_160.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_160,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_160);
  }
  local_168 = (UTextureRenderTarget *)0x0;
  pTVar3 = &local_160;
  if ((TArray<FName,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<FName,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar3 = (TArray<FName,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_168,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_168);
  }
  local_128._s_0.X = local_150;
  local_128._s_0.Y = dStack_148;
  local_108 = local_130;
  local_118 = local_140;
  uStack_110 = uStack_138;
  local_f8.Rotation.ZW.m128d_f64[0] = (double)local_88._0_8_;
  local_f8.Rotation.ZW.m128d_f64[1] = (double)local_88._8_8_;
  local_f8.Rotation.XY.m128d_f64[0] = (double)local_98._0_8_;
  local_f8.Rotation.XY.m128d_f64[1] = (double)local_98._8_8_;
  local_f8.Translation.ZW.m128d_f64[0] = (double)local_68._0_8_;
  local_f8.Translation.ZW.m128d_f64[1] = (double)local_68._8_8_;
  local_f8.Translation.XY.m128d_f64[0] = (double)local_78._0_8_;
  local_f8.Translation.XY.m128d_f64[1] = (double)local_78._8_8_;
  local_f8.Scale3D.ZW.m128d_f64[0] = (double)local_48._0_8_;
  local_f8.Scale3D.ZW.m128d_f64[1] = (double)local_48._8_8_;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_f8.Scale3D.XY.m128d_f64[0] = (double)local_58._0_8_;
  local_f8.Scale3D.XY.m128d_f64[1] = (double)local_58._8_8_;
  bVar2 = RenderMergedTextureInternal
                    ((ALandscape *)param_1,&local_f8,(TBox2<double> *)&local_128._s_0,pTVar3,
                     local_168);
  *(bool *)param_3 = bVar2;
  if (local_160.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_160.AllocatorInstance.Data);
  }
  return;
}

// GetTargetLayerNames @ 145f2f4f0

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
ALandscape::GetTargetLayerNames
          (ALandscape *this,TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          bool param_1)

{
  FMessageLog *this_00;
  FText *pFVar1;
  FName local_res10 [3];
  TSharedRef<FTokenizedMessage,1> local_58;
  FText local_48;
  FMessageLog local_38;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  ::FName::FName(local_res10,"Blueprint");
  this_00 = FMessageLog::FMessageLog(&local_38,local_res10);
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     (&local_48,L"Landscape",L"GetTargetLayerNames_Runtime.",
                      L"GetTargetLayerNames_EditorOnly: this cannot be called at runtime");
  FMessageLog::Error(this_00,&local_58,pFVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
  if (local_48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
  }
  FMessageLog::~FMessageLog(&local_38);
  return __return_storage_ptr__;
}

// IsUpToDate @ 145fce870

bool __thiscall ALandscape::IsUpToDate(ALandscape *this)

{
  wchar_t *pwVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__)
  {
    _Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                         _thread_safe_static_guard_0__);
    if (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
        == -1) {
      pwVar1 = FCommandLine::Get();
      `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
           FParse::Param(pwVar1,L"nullrhi");
      _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                           _thread_safe_static_guard_0__);
    }
  }
  return true;
}

