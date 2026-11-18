// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StreamlineShaders
// Functions: 38

// OnCreateRenderThreadResources'' @ 1414009b0

void __cdecl
`dynamic_initializer_for_'Nanite::FSkinnedSceneProxyDelegates::OnCreateRenderThreadResources__(void)

{
  atexit(`dynamic_atexit_destructor_for_'Nanite::FSkinnedSceneProxyDelegates::
         OnCreateRenderThreadResources__);
  return;
}

// OnDestroyRenderThreadResources'' @ 1414009d0

void __cdecl
`dynamic_initializer_for_'Nanite::FSkinnedSceneProxyDelegates::OnDestroyRenderThreadResources__
          (void)

{
  atexit(`dynamic_atexit_destructor_for_'Nanite::FSkinnedSceneProxyDelegates::
         OnDestroyRenderThreadResources__);
  return;
}

// ShaderTypeRegistration'' @ 1414009f0

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

void __cdecl `dynamic_initializer_for_'FStreamlineUIHintExtractionCS::ShaderTypeRegistration__(void)

{
  code *local_18;
  code *local_10;
  
  local_10 = FStreamlineUIHintExtractionCS::GetStaticType;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<FGlobalShaderType_&___cdecl(void),FShaderType_&>::Call;
  FShaderTypeRegistration::FShaderTypeRegistration
            (&FStreamlineUIHintExtractionCS::ShaderTypeRegistration,
             (TFunctionRef<FShaderType_&___cdecl(void)> *)&local_18);
  atexit(`dynamic_atexit_destructor_for_'FStreamlineUIHintExtractionCS::ShaderTypeRegistration__);
  return;
}

// ShaderTypeRegistration'' @ 141400a40

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

void __cdecl `dynamic_initializer_for_'FStreamlineVelocityCombineCS::ShaderTypeRegistration__(void)

{
  code *local_18;
  code *local_10;
  
  local_10 = FStreamlineVelocityCombineCS::GetStaticType;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<FGlobalShaderType_&___cdecl(void),FShaderType_&>::Call;
  FShaderTypeRegistration::FShaderTypeRegistration
            (&FStreamlineVelocityCombineCS::ShaderTypeRegistration,
             (TFunctionRef<FShaderType_&___cdecl(void)> *)&local_18);
  atexit(`dynamic_atexit_destructor_for_'FStreamlineVelocityCombineCS::ShaderTypeRegistration__);
  return;
}

// StaticResource'' @ 141400a90

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
`dynamic_initializer_for_'TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
::StaticResource__(void)

{
  TRefCountPtr<FRHISamplerState> this;
  TRefCountPtr<FRHISamplerState> TVar1;
  FRHIResource *local_res8;
  
  FRenderResource::FRenderResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
              ::StaticResource);
  TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
  ::StaticResource._padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticSamplerState__0A__00_00_00_0A__00_0A__0A___V__TRefCountPtr_VFRHISamplerState____PEAVFRHISamplerState____6B_
  ;
  TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
  ::StaticResource.StateRHI.Reference = (FRHISamplerState *)0x0;
  if ((GRHIGlobals.IsRHIInitialized == false) || (GRHIGlobals.SupportsRHIThread == false)) {
    BeginInitResource((FRenderResource *)
                      &TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
                       ::StaticResource,(FRenderCommandPipe *)0x0);
  }
  else {
    TVar1 = TStaticSamplerState<0,1,1,1,0,1,0,0>::CreateRHI();
    this = TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
           ::StaticResource.StateRHI;
    if (TVar1.Reference !=
        (FRHISamplerState *)
        &TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
         ::StaticResource.StateRHI) {
                    /* WARNING: Load size is inaccurate */
      TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
      ::StaticResource.StateRHI.Reference = *TVar1.Reference;
      *(undefined8 *)TVar1.Reference = 0;
      if (this.Reference != (FRHISamplerState *)0x0) {
        FRHIResource::Release((FRHIResource *)this.Reference);
      }
    }
    if (local_res8 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_res8);
      atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
             ::StaticResource__);
      return;
    }
  }
  atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
         ::StaticResource__);
  return;
}

// `dynamic_initializer_for_'LogStreamlineShaders'' @ 141400b50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogStreamlineShaders__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogStreamlineShaders,L"LogStreamlineShaders",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogStreamlineShaders__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantStreamlineShaders'' @ 141400b90

void __cdecl _dynamic_initializer_for__ModuleRegistrantStreamlineShaders__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "StreamlineShaders";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"StreamlineShaders",0x11);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FStreamlineShadersModule>::InitializeModule
            );
  return;
}

// `dynamic_initializer_for_'StatPtr_STATGROUP_HeterogeneousVolumesAmbientOcclusion'' @ 141400be0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
_dynamic_initializer_for__StatPtr_STATGROUP_HeterogeneousVolumesAmbientOcclusion__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STATGROUP_HeterogeneousVolumesAmbientOcclusion ==
      (FThreadSafeStaticStat<FStat_STATGROUP_HeterogeneousVolumesAmbientOcclusion>)0x0) {
    pFVar1 = FName::FName(local_res8,"STATGROUP_HeterogeneousVolumesAmbientOcclusion");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STATGROUP_HeterogeneousVolumesAmbientOcclusion,
               *pFVar1,L"Ambient Occlusion","STATGROUP_HeterogeneousVolumesRT",
               "STATCAT_HeterogeneousVolumes",L"Heterogeneous Volumes RT",true,true,ST_int64,true,
               false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STATGROUP_HeterogeneousVolumesLightCache'' @ 141400c70

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STATGROUP_HeterogeneousVolumesLightCache__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STATGROUP_HeterogeneousVolumesLightCache ==
      (FThreadSafeStaticStat<FStat_STATGROUP_HeterogeneousVolumesLightCache>)0x0) {
    pFVar1 = FName::FName(local_res8,"STATGROUP_HeterogeneousVolumesLightCache");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STATGROUP_HeterogeneousVolumesLightCache,
               *pFVar1,L"Light Cache","STATGROUP_HeterogeneousVolumesRT",
               "STATCAT_HeterogeneousVolumes",L"Heterogeneous Volumes RT",true,true,ST_int64,true,
               false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STATGROUP_HeterogeneousVolumesMaterialBaking'' @ 141400d00

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STATGROUP_HeterogeneousVolumesMaterialBaking__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STATGROUP_HeterogeneousVolumesMaterialBaking ==
      (FThreadSafeStaticStat<FStat_STATGROUP_HeterogeneousVolumesMaterialBaking>)0x0) {
    pFVar1 = FName::FName(local_res8,"STATGROUP_HeterogeneousVolumesMaterialBaking");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STATGROUP_HeterogeneousVolumesMaterialBaking,
               *pFVar1,L"Material Baking","STATGROUP_HeterogeneousVolumesRT",
               "STATCAT_HeterogeneousVolumes",L"Heterogeneous Volumes RT",true,true,ST_int64,true,
               false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STATGROUP_HeterogeneousVolumesShadows'' @ 141400d90

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STATGROUP_HeterogeneousVolumesShadows__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STATGROUP_HeterogeneousVolumesShadows ==
      (FThreadSafeStaticStat<FStat_STATGROUP_HeterogeneousVolumesShadows>)0x0) {
    pFVar1 = FName::FName(local_res8,"STATGROUP_HeterogeneousVolumesShadows");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STATGROUP_HeterogeneousVolumesShadows,*pFVar1,
               L"Shadows","STATGROUP_HeterogeneousVolumesRT","STATCAT_HeterogeneousVolumes",
               L"Heterogeneous Volumes RT",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STATGROUP_HeterogeneousVolumesSingleScattering'' @ 141400e20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
_dynamic_initializer_for__StatPtr_STATGROUP_HeterogeneousVolumesSingleScattering__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STATGROUP_HeterogeneousVolumesSingleScattering ==
      (FThreadSafeStaticStat<FStat_STATGROUP_HeterogeneousVolumesSingleScattering>)0x0) {
    pFVar1 = FName::FName(local_res8,"STATGROUP_HeterogeneousVolumesSingleScattering");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STATGROUP_HeterogeneousVolumesSingleScattering,
               *pFVar1,L"Single Scattering","STATGROUP_HeterogeneousVolumesRT",
               "STATCAT_HeterogeneousVolumes",L"Heterogeneous Volumes RT",true,true,ST_int64,true,
               false,MCR_Invalid);
  }
  return;
}

// `scalar_deleting_destructor' @ 14de53f00

void * __thiscall
FStreamlineShadersModule::_scalar_deleting_destructor_(FStreamlineShadersModule *this,uint param_1)

{
  *this = (FStreamlineShadersModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// AddPass<`FComputeShaderUtils::AddPass<FStreamlineUIHintExtractionCS>'::__l2::<lambda_1>_> @ 14de53f40

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FRDGPass * __thiscall
FRDGBuilder::
AddPass<_FComputeShaderUtils::AddPass<FStreamlineUIHintExtractionCS>_::__l2::<lambda_1>_>
          (FRDGBuilder *this,FRDGEventName *param_1,FShaderParametersMetadata *param_2,void *param_3
          ,ERDGPassFlags param_4,<lambda_1> *param_5)

{
  int *piVar1;
  code *pcVar2;
  FHairTangentCS *pFVar3;
  FRDGBuffer *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  bool bVar8;
  ERDGPassFlags EVar9;
  int iVar10;
  wchar_t *pwVar11;
  FRDGPass *pFVar12;
  FRDGParameterStruct local_38;
  
  FRDGUserValidation::ValidateAddPass(&this->UserValidation,param_3,param_2,param_1,param_4);
  FlushAccessModeQueue(this);
  pwVar11 = FRDGEventName::GetTCHAR(param_1);
  EVar9 = OverridePassFlags(this,pwVar11,param_4);
  pFVar12 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,0x1b8,8);
  local_38.Contents = param_3;
  if ((param_2->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar8) {
      pcVar2 = (code *)swi(3);
      pFVar12 = (FRDGPass *)(*pcVar2)();
      return pFVar12;
    }
  }
  local_38.Layout.Reference = (param_2->Layout).Reference;
  if (local_38.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_38.Layout.Reference);
  }
  local_38.Metadata = param_2;
  FRDGPass::FRDGPass(pFVar12,param_1,&local_38,EVar9,Async);
  pFVar12->_padding_ =
       (longlong)
       &
       ___7__TRDGLambdaPass_XV<lambda_1>__1____AddPass_VFStreamlineUIHintExtractionCS___FComputeShaderUtils__YAPEAVFRDGPass__AEAVFRDGBuilder____QEAVFRDGEventName__W4ERDGPassFlags__AEBV__TShaderRefBase_VFStreamlineUIHintExtractionCS__VFShaderMapPointerTable____PEBVFShaderParametersMetadata__PEAVFParameters_FStreamlineUIHintExtractionCS__U__TIntVector3_H_Math_UE___Z___6B_
  ;
  pFVar3 = (param_5->ComputeShader).ShaderContent;
  pFVar12[1]._padding_ = (longlong)param_5->Parameters;
  pFVar12[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)pFVar3;
  pFVar4 = param_5->IndirectArgsBuffer;
  *(FShaderMapBase **)&pFVar12[1].FullPathIfDebug.Data.ArrayNum = (param_5->ComputeShader).ShaderMap
  ;
  pFVar12[1].Name.EventFormat = (wchar_t *)pFVar4;
  pFVar5 = *(FScriptContainerElement **)&param_5->IndirectArgsOffset;
  uVar6 = *(undefined4 *)&param_5->_padding_;
  uVar7 = *(undefined4 *)((longlong)&param_5->_padding_ + 4);
  pFVar12[1].ParameterStruct.Contents = param_3;
  pFVar12[1].Name.FormattedEventName.Data.AllocatorInstance.Data = pFVar5;
  pFVar12[1].Name.FormattedEventName.Data.ArrayNum = uVar6;
  pFVar12[1].Name.FormattedEventName.Data.ArrayMax = uVar7;
  ClobberPassOutputs(this,pFVar12);
  iVar10 = (this->Passes).Array.ArrayNum;
  piVar1 = &(this->Passes).Array.ArrayMax;
  if (iVar10 == *piVar1) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                       (0x808,(ForElementType<FRDGPass_*> *)&this->Passes,piVar1);
  }
  (this->Passes).Array.ArrayNum = iVar10 + 1;
  (this->Passes).Array.AllocatorInstance.Data[iVar10] = pFVar12;
  (pFVar12->Handle).Index = (this->Passes).Array.ArrayNum - 1;
  SetupParameterPass(this,pFVar12);
  return pFVar12;
}

// AddPass<`FComputeShaderUtils::AddPass<FStreamlineVelocityCombineCS>'::__l2::<lambda_1>_> @ 14de540d0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FRDGPass * __thiscall
FRDGBuilder::
AddPass<_FComputeShaderUtils::AddPass<FStreamlineVelocityCombineCS>_::__l2::<lambda_1>_>
          (FRDGBuilder *this,FRDGEventName *param_1,FShaderParametersMetadata *param_2,void *param_3
          ,ERDGPassFlags param_4,<lambda_1>_conflict *param_5)

{
  int *piVar1;
  code *pcVar2;
  FParameters *pFVar3;
  FShaderMapBase *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined8 uVar6;
  bool bVar7;
  ERDGPassFlags EVar8;
  int iVar9;
  wchar_t *pwVar10;
  FRDGPass *pFVar11;
  FRDGParameterStruct local_38;
  
  FRDGUserValidation::ValidateAddPass(&this->UserValidation,param_3,param_2,param_1,param_4);
  FlushAccessModeQueue(this);
  pwVar10 = FRDGEventName::GetTCHAR(param_1);
  EVar8 = OverridePassFlags(this,pwVar10,param_4);
  pFVar11 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,0x1b8,8);
  local_38.Contents = param_3;
  if ((param_2->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      pFVar11 = (FRDGPass *)(*pcVar2)();
      return pFVar11;
    }
  }
  local_38.Layout.Reference = (param_2->Layout).Reference;
  if (local_38.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_38.Layout.Reference);
  }
  local_38.Metadata = param_2;
  FRDGPass::FRDGPass(pFVar11,param_1,&local_38,EVar8,Async);
  pFVar11->_padding_ =
       (longlong)
       &
       ___7__TRDGLambdaPass_XV<lambda_1>__1____AddPass_VFStreamlineVelocityCombineCS___FComputeShaderUtils__YAPEAVFRDGPass__AEAVFRDGBuilder____QEAVFRDGEventName__W4ERDGPassFlags__AEBV__TShaderRefBase_VFStreamlineVelocityCombineCS__VFShaderMapPointerTable____PEBVFShaderParametersMetadata__PEAVFParameters_FStreamlineVelocityCombineCS__U__TIntVector3_H_Math_UE___Z___6B_
  ;
  pFVar3 = param_5->Parameters;
  pFVar11[1]._padding_ = (longlong)param_5->ParametersMetadata;
  pFVar11[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)pFVar3;
  pFVar4 = (param_5->ComputeShader).ShaderMap;
  *(FHairTangentCS **)&pFVar11[1].FullPathIfDebug.Data.ArrayNum =
       (param_5->ComputeShader).ShaderContent;
  pFVar11[1].Name.EventFormat = (wchar_t *)pFVar4;
  pFVar5 = *(FScriptContainerElement **)&(param_5->GroupCount).field0_0x0;
  uVar6 = *(undefined8 *)((longlong)&(param_5->GroupCount).field0_0x0 + 8);
  pFVar11[1].ParameterStruct.Contents = param_3;
  pFVar11[1].Name.FormattedEventName.Data.AllocatorInstance.Data = pFVar5;
  pFVar11[1].Name.FormattedEventName.Data.ArrayNum = (int)uVar6;
  pFVar11[1].Name.FormattedEventName.Data.ArrayMax = (int)((ulonglong)uVar6 >> 0x20);
  ClobberPassOutputs(this,pFVar11);
  iVar9 = (this->Passes).Array.ArrayNum;
  piVar1 = &(this->Passes).Array.ArrayMax;
  if (iVar9 == *piVar1) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                      (0x808,(ForElementType<FRDGPass_*> *)&this->Passes,piVar1);
  }
  (this->Passes).Array.ArrayNum = iVar9 + 1;
  (this->Passes).Array.AllocatorInstance.Data[iVar9] = pFVar11;
  (pFVar11->Handle).Index = (this->Passes).Array.ArrayNum - 1;
  SetupParameterPass(this,pFVar11);
  return pFVar11;
}

// AddPassInternal<void,`FComputeShaderUtils::AddPass<FStreamlineUIHintExtractionCS>'::__l2::<lambda_1>_> @ 14de54720

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FRDGPass * __thiscall
FRDGBuilder::
AddPassInternal<void,_FComputeShaderUtils::AddPass<FStreamlineUIHintExtractionCS>_::__l2::<lambda_1>_>
          (FRDGBuilder *this,FRDGEventName *param_1,FShaderParametersMetadata *param_2,void *param_3
          ,ERDGPassFlags param_4,<lambda_1> *param_5)

{
  int *piVar1;
  code *pcVar2;
  FHairTangentCS *pFVar3;
  FRDGBuffer *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  bool bVar8;
  ERDGPassFlags EVar9;
  int iVar10;
  wchar_t *pwVar11;
  FRDGPass *pFVar12;
  FRDGParameterStruct local_38;
  
  FRDGUserValidation::ValidateAddPass(&this->UserValidation,param_3,param_2,param_1,param_4);
  FlushAccessModeQueue(this);
  pwVar11 = FRDGEventName::GetTCHAR(param_1);
  EVar9 = OverridePassFlags(this,pwVar11,param_4);
  pFVar12 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,0x1b8,8);
  local_38.Contents = param_3;
  if ((param_2->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar8) {
      pcVar2 = (code *)swi(3);
      pFVar12 = (FRDGPass *)(*pcVar2)();
      return pFVar12;
    }
  }
  local_38.Layout.Reference = (param_2->Layout).Reference;
  if (local_38.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_38.Layout.Reference);
  }
  local_38.Metadata = param_2;
  FRDGPass::FRDGPass(pFVar12,param_1,&local_38,EVar9,Async);
  pFVar12->_padding_ =
       (longlong)
       &
       ___7__TRDGLambdaPass_XV<lambda_1>__1____AddPass_VFStreamlineUIHintExtractionCS___FComputeShaderUtils__YAPEAVFRDGPass__AEAVFRDGBuilder____QEAVFRDGEventName__W4ERDGPassFlags__AEBV__TShaderRefBase_VFStreamlineUIHintExtractionCS__VFShaderMapPointerTable____PEBVFShaderParametersMetadata__PEAVFParameters_FStreamlineUIHintExtractionCS__U__TIntVector3_H_Math_UE___Z___6B_
  ;
  pFVar3 = (param_5->ComputeShader).ShaderContent;
  pFVar12[1]._padding_ = (longlong)param_5->Parameters;
  pFVar12[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)pFVar3;
  pFVar4 = param_5->IndirectArgsBuffer;
  *(FShaderMapBase **)&pFVar12[1].FullPathIfDebug.Data.ArrayNum = (param_5->ComputeShader).ShaderMap
  ;
  pFVar12[1].Name.EventFormat = (wchar_t *)pFVar4;
  pFVar5 = *(FScriptContainerElement **)&param_5->IndirectArgsOffset;
  uVar6 = *(undefined4 *)&param_5->_padding_;
  uVar7 = *(undefined4 *)((longlong)&param_5->_padding_ + 4);
  pFVar12[1].ParameterStruct.Contents = param_3;
  pFVar12[1].Name.FormattedEventName.Data.AllocatorInstance.Data = pFVar5;
  pFVar12[1].Name.FormattedEventName.Data.ArrayNum = uVar6;
  pFVar12[1].Name.FormattedEventName.Data.ArrayMax = uVar7;
  ClobberPassOutputs(this,pFVar12);
  iVar10 = (this->Passes).Array.ArrayNum;
  piVar1 = &(this->Passes).Array.ArrayMax;
  if (iVar10 == *piVar1) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                       (0x808,(ForElementType<FRDGPass_*> *)&this->Passes,piVar1);
  }
  (this->Passes).Array.ArrayNum = iVar10 + 1;
  (this->Passes).Array.AllocatorInstance.Data[iVar10] = pFVar12;
  (pFVar12->Handle).Index = (this->Passes).Array.ArrayNum - 1;
  SetupParameterPass(this,pFVar12);
  return pFVar12;
}

// AddPassInternal<void,`FComputeShaderUtils::AddPass<FStreamlineVelocityCombineCS>'::__l2::<lambda_1>_> @ 14de548b0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FRDGPass * __thiscall
FRDGBuilder::
AddPassInternal<void,_FComputeShaderUtils::AddPass<FStreamlineVelocityCombineCS>_::__l2::<lambda_1>_>
          (FRDGBuilder *this,FRDGEventName *param_1,FShaderParametersMetadata *param_2,void *param_3
          ,ERDGPassFlags param_4,<lambda_1>_conflict *param_5)

{
  int *piVar1;
  code *pcVar2;
  FParameters *pFVar3;
  FShaderMapBase *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined8 uVar6;
  bool bVar7;
  ERDGPassFlags EVar8;
  int iVar9;
  wchar_t *pwVar10;
  FRDGPass *pFVar11;
  FRDGParameterStruct local_38;
  
  FRDGUserValidation::ValidateAddPass(&this->UserValidation,param_3,param_2,param_1,param_4);
  FlushAccessModeQueue(this);
  pwVar10 = FRDGEventName::GetTCHAR(param_1);
  EVar8 = OverridePassFlags(this,pwVar10,param_4);
  pFVar11 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,0x1b8,8);
  local_38.Contents = param_3;
  if ((param_2->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      pFVar11 = (FRDGPass *)(*pcVar2)();
      return pFVar11;
    }
  }
  local_38.Layout.Reference = (param_2->Layout).Reference;
  if (local_38.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_38.Layout.Reference);
  }
  local_38.Metadata = param_2;
  FRDGPass::FRDGPass(pFVar11,param_1,&local_38,EVar8,Async);
  pFVar11->_padding_ =
       (longlong)
       &
       ___7__TRDGLambdaPass_XV<lambda_1>__1____AddPass_VFStreamlineVelocityCombineCS___FComputeShaderUtils__YAPEAVFRDGPass__AEAVFRDGBuilder____QEAVFRDGEventName__W4ERDGPassFlags__AEBV__TShaderRefBase_VFStreamlineVelocityCombineCS__VFShaderMapPointerTable____PEBVFShaderParametersMetadata__PEAVFParameters_FStreamlineVelocityCombineCS__U__TIntVector3_H_Math_UE___Z___6B_
  ;
  pFVar3 = param_5->Parameters;
  pFVar11[1]._padding_ = (longlong)param_5->ParametersMetadata;
  pFVar11[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)pFVar3;
  pFVar4 = (param_5->ComputeShader).ShaderMap;
  *(FHairTangentCS **)&pFVar11[1].FullPathIfDebug.Data.ArrayNum =
       (param_5->ComputeShader).ShaderContent;
  pFVar11[1].Name.EventFormat = (wchar_t *)pFVar4;
  pFVar5 = *(FScriptContainerElement **)&(param_5->GroupCount).field0_0x0;
  uVar6 = *(undefined8 *)((longlong)&(param_5->GroupCount).field0_0x0 + 8);
  pFVar11[1].ParameterStruct.Contents = param_3;
  pFVar11[1].Name.FormattedEventName.Data.AllocatorInstance.Data = pFVar5;
  pFVar11[1].Name.FormattedEventName.Data.ArrayNum = (int)uVar6;
  pFVar11[1].Name.FormattedEventName.Data.ArrayMax = (int)((ulonglong)uVar6 >> 0x20);
  ClobberPassOutputs(this,pFVar11);
  iVar9 = (this->Passes).Array.ArrayNum;
  piVar1 = &(this->Passes).Array.ArrayMax;
  if (iVar9 == *piVar1) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                      (0x808,(ForElementType<FRDGPass_*> *)&this->Passes,piVar1);
  }
  (this->Passes).Array.ArrayNum = iVar9 + 1;
  (this->Passes).Array.AllocatorInstance.Data[iVar9] = pFVar11;
  (pFVar11->Handle).Index = (this->Passes).Array.ArrayNum - 1;
  SetupParameterPass(this,pFVar11);
  return pFVar11;
}

// BindForLegacyShaderParameters<FStreamlineUIHintExtractionCS::FParameters> @ 14de54cc0

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

void __cdecl
BindForLegacyShaderParameters<FStreamlineUIHintExtractionCS::FParameters>
          (FShader *param_1,int param_2,FShaderParameterMap *param_3,bool param_4)

{
  FShaderParametersMetadata *pFVar1;
  
  pFVar1 = FStreamlineUIHintExtractionCS::FParameters::FTypeInfo::GetStructMetadata();
  FShaderParameterBindings::BindForLegacyShaderParameters
            (&param_1->Bindings,param_1,param_2,param_3,pFVar1,param_4);
  return;
}

// BindForLegacyShaderParameters<FStreamlineVelocityCombineCS::FParameters> @ 14de54d20

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

void __cdecl
BindForLegacyShaderParameters<FStreamlineVelocityCombineCS::FParameters>
          (FShader *param_1,int param_2,FShaderParameterMap *param_3,bool param_4)

{
  FShaderParametersMetadata *pFVar1;
  
  pFVar1 = FStreamlineVelocityCombineCS::FParameters::FTypeInfo::GetStructMetadata();
  FShaderParameterBindings::BindForLegacyShaderParameters
            (&param_1->Bindings,param_1,param_2,param_3,pFVar1,param_4);
  return;
}

// ClearUnusedGraphResources<FStreamlineUIHintExtractionCS> @ 14de54d80

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

void __cdecl
ClearUnusedGraphResources<FStreamlineUIHintExtractionCS>
          (TShaderRefBase<FStreamlineUIHintExtractionCS,FShaderMapPointerTable> *param_1,
          FShaderParametersMetadata *param_2,FParameters *param_3,
          initializer_list<FRDGResource_*> *param_4)

{
  TShaderRefBase<FShader,FShaderMapPointerTable> local_18;
  
  local_18.ShaderContent = (FShader *)param_1->ShaderContent;
  local_18.ShaderMap = param_1->ShaderMap;
  ValidateShaderParameters(&local_18,param_2,param_3);
  local_18.ShaderContent = (FShader *)param_4->_First;
  local_18.ShaderMap = (FShaderMapBase *)param_4->_Last;
  ClearUnusedGraphResourcesImpl
            ((FShaderParameterBindings *)param_1->ShaderContent,param_2,param_3,
             (initializer_list<FRDGResource_*> *)&local_18);
  return;
}

// ClearUnusedGraphResources<FStreamlineVelocityCombineCS> @ 14de54e00

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

void __cdecl
ClearUnusedGraphResources<FStreamlineVelocityCombineCS>
          (TShaderRefBase<FStreamlineVelocityCombineCS,FShaderMapPointerTable> *param_1,
          FShaderParametersMetadata *param_2,FParameters *param_3,
          initializer_list<FRDGResource_*> *param_4)

{
  TShaderRefBase<FShader,FShaderMapPointerTable> local_18;
  
  local_18.ShaderContent = (FShader *)param_1->ShaderContent;
  local_18.ShaderMap = param_1->ShaderMap;
  ValidateShaderParameters(&local_18,param_2,param_3);
  local_18.ShaderContent = (FShader *)param_4->_First;
  local_18.ShaderMap = (FShaderMapBase *)param_4->_Last;
  ClearUnusedGraphResourcesImpl
            ((FShaderParameterBindings *)param_1->ShaderContent,param_2,param_3,
             (initializer_list<FRDGResource_*> *)&local_18);
  return;
}

// `scalar_deleting_destructor' @ 14de55100

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void * __thiscall
FRDGAllocator::TObject<FStreamlineUIHintExtractionCS::FParameters>::_scalar_deleting_destructor_
          (TObject<FStreamlineUIHintExtractionCS::FParameters> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14de55130

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void * __thiscall
FRDGAllocator::TObject<FStreamlineVelocityCombineCS::FParameters>::_scalar_deleting_destructor_
          (TObject<FStreamlineVelocityCombineCS::FParameters> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x150);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14de55160

void * __thiscall
TRDGLambdaPass<void,`FComputeShaderUtils::AddPass<FStreamlineUIHintExtractionCS>'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if (*(FRHIResource **)((longlong)this + 0x38) != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)((longlong)this + 0x38));
  }
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1b8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14de551c0

void * __thiscall
TRDGLambdaPass<void,`FComputeShaderUtils::AddPass<FStreamlineVelocityCombineCS>'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if (*(FRHIResource **)((longlong)this + 0x38) != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)((longlong)this + 0x38));
  }
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1b8);
  }
  return this;
}

// AddStreamlineUIHintExtractionPass @ 14de55220

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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

FRDGTexture * __cdecl
AddStreamlineUIHintExtractionPass
          (FRDGBuilder *param_1,float param_2,TRefCountPtr<FRHITexture> *param_3)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  FRDGTexture *pFVar8;
  FRHITexture *pFVar9;
  TRefCountPtr<IPooledRenderTarget> TVar10;
  FRDGTexture *pFVar11;
  FRDGTextureUAV *pFVar12;
  FGlobalShaderMap *this;
  FShaderType *pFVar13;
  FName this_00;
  FRDGEventName *pFVar14;
  FShaderParametersMetadata *pFVar15;
  FRHITexture *pFVar16;
  undefined1 auStackY_1a8 [32];
  FRHITexture *local_150;
  int local_148;
  int iStack_144;
  int local_140;
  int iStack_13c;
  TIntVector3<int>_u_0 local_138;
  TRefCountPtr<FRHITexture> *local_128;
  undefined1 local_120 [16];
  FShaderMapBase *pFStack_110;
  undefined1 local_108 [8];
  FString local_100;
  int local_f0;
  int iStack_ec;
  TShaderRefBase<FStreamlineUIHintExtractionCS,FShaderMapPointerTable> local_d8;
  FRDGEventName local_c8;
  undefined1 local_a8 [28];
  int local_8c;
  undefined4 local_88;
  undefined8 local_84;
  undefined4 local_7c;
  undefined4 local_78;
  undefined2 local_74;
  void *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  pFVar16 = (FRHITexture *)0x0;
  pFVar9 = pFVar16;
  if ((param_3->Reference->TextureDesc).Dimension == Texture2D) {
    pFVar9 = param_3->Reference;
  }
  local_128 = param_3;
  lVar7 = (**(code **)(pFVar9->_padding_ + 0x20))();
  iVar2 = *(int *)(lVar7 + 0x24);
  pFVar9 = pFVar16;
  if ((param_3->Reference->TextureDesc).Dimension == Texture2D) {
    pFVar9 = param_3->Reference;
  }
  local_148 = iVar2;
  lVar7 = (**(code **)(pFVar9->_padding_ + 0x20))();
  local_f0 = UE::Math::TIntPoint<int>::ZeroValue.field0_0x0._0_4_;
  iVar4 = local_f0;
  iStack_ec = UE::Math::TIntPoint<int>::ZeroValue.field0_0x0._4_4_;
  iStack_144 = *(int *)(lVar7 + 0x28);
  local_140 = iVar2 - local_f0;
  local_5c = 1;
  iStack_13c = iStack_144 - iStack_ec;
  local_a8._0_8_ = 0x20008;
  local_a8._24_4_ = FClearValueBinding::Black.Value.Color[3];
  local_8c = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
  local_88 = 0;
  local_84._4_4_ = iStack_13c;
  local_84._0_4_ = local_140;
  local_a8._8_8_ = FClearValueBinding::Black._0_8_;
  local_a8._16_8_ = FClearValueBinding::Black.Value._4_8_;
  local_7c = 0x10001;
  local_78 = 0x2000101;
  local_74 = 0xff00;
  local_68 = (void *)0x0;
  local_60 = 0;
  pFVar8 = FRDGBuilder::CreateTexture
                     (param_1,(FRDGTextureDesc *)local_a8,L"Streamline.UIColorAndAlpha",None);
  pFVar9 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x30,0x10);
  if (pFVar9 == (FRHITexture *)0x0) {
    bVar5 = FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pFVar8 = (FRDGTexture *)(*pcVar3)();
      return pFVar8;
    }
  }
  else {
    pFVar9->_padding_ = 0;
    pFVar9->_padding_ =
         (longlong)&___7__TObject_VFParameters_FStreamlineUIHintExtractionCS___FRDGAllocator__6B_;
    pFVar9->_padding_ = 0;
    pFVar16 = pFVar9;
  }
  local_150 = pFVar16;
  if ((((FRHITexture **)param_1->_padding_ <= &local_150) &&
      (&local_150 < (FRHITexture **)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4)
      )) && (bVar5 = FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar5)) {
    pcVar3 = (code *)swi(3);
    pFVar8 = (FRDGTexture *)(*pcVar3)();
    return pFVar8;
  }
  iVar6 = (int)param_1->_padding_;
  piVar1 = (int *)((longlong)&param_1->_padding_ + 4);
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)&param_1->_padding_,piVar1);
  }
  if (__real_3f800000 <= param_2) {
    param_2 = __real_3f800000;
  }
  *(int *)&param_1->_padding_ = iVar6 + 1;
  if (param_2 <= 0.0) {
    param_2 = 0.0;
  }
  *(FRHITexture **)(param_1->_padding_ + (longlong)iVar6 * 8) = local_150;
  *(float *)&pFVar16->_padding_ = param_2;
  TVar10 = CreateRenderTarget((FRHITexture *)local_120,(wchar_t *)local_128->Reference);
  pFVar11 = FRDGBuilder::RegisterExternalTexture
                      (param_1,(TRefCountPtr<IPooledRenderTarget> *)TVar10.Reference,None);
  pFVar16->_padding_ = (longlong)pFVar11;
  if ((longlong *)local_120._0_8_ != (longlong *)0x0) {
    (**(code **)(*(longlong *)local_120._0_8_ + 0x38))();
  }
  pFVar12 = FRDGBuilder::CreateUAV(param_1,pFVar8,None,PF_Unknown);
  pFVar16->_padding_ = (longlong)pFVar12;
  this = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)GMaxRHIFeatureLevel]);
  pFVar13 = (FShaderType *)FStreamlineUIHintExtractionCS::GetStaticType();
  FGlobalShaderMap::GetShader
            (this,(TShaderRefBase<FShader,FShaderMapPointerTable> *)(local_120 + 8),pFVar13,0);
  if ((FStreamlineUIHintExtractionCS *)local_120._8_8_ == (FStreamlineUIHintExtractionCS *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_108);
    FName::ToString((FName *)this_00,&local_100);
    FStreamlineUIHintExtractionCS::GetStaticType();
    bVar5 = FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_100.Data.AllocatorInstance.Data);
    }
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pFVar8 = (FRDGTexture *)(*pcVar3)();
      return pFVar8;
    }
  }
  FStreamlineUIHintExtractionCS::GetStaticType();
  iVar6 = iStack_144 - iStack_ec;
  local_d8.ShaderContent = (FStreamlineUIHintExtractionCS *)local_120._8_8_;
  local_d8.ShaderMap = pFStack_110;
  pFVar14 = FRDGEventName::FRDGEventName
                      (&local_c8,L"Streamline UI Hint extraction (%dx%d) [%d,%d -> %d,%d]");
  pFVar15 = FStreamlineUIHintExtractionCS::FParameters::FTypeInfo::GetStructMetadata();
  local_138._s_0.Z = 1;
  iVar2 = (iVar2 - iVar4) + 7;
  local_138._s_0.X = (int)(iVar2 + (iVar2 >> 0x1f & 7U)) >> 3;
  iVar6 = iVar6 + 7;
  local_138._s_0.Y = (int)(iVar6 + (iVar6 >> 0x1f & 7U)) >> 3;
  FComputeShaderUtils::AddPass<FStreamlineUIHintExtractionCS>
            (param_1,pFVar14,Compute,&local_d8,pFVar15,(FParameters *)&pFVar16->_padding_,
             (TIntVector3<int> *)&local_138._s_0);
  if (local_c8.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.FormattedEventName.Data.AllocatorInstance.Data);
  }
  if (local_68 != (void *)0x0) {
    FMemory::Free(local_68);
  }
  return pFVar8;
}

// AddStreamlineVelocityCombinePass @ 14de55650

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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

FRDGTexture * __cdecl
AddStreamlineVelocityCombinePass
          (FRDGBuilder *param_1,FViewInfo *param_2,FRDGTexture *param_3,FRDGTexture *param_4,
          FRDGTexture *param_5,bool param_6)

{
  int *piVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  code *pcVar4;
  FViewInfo *pFVar5;
  bool bVar6;
  int iVar7;
  TIntPoint<int> TVar8;
  FRDGTexture *pFVar9;
  undefined8 *puVar10;
  FRDGTextureUAV *pFVar11;
  FShaderParametersMetadata *pFVar12;
  FShaderType *pFVar13;
  FName this;
  FRDGEventName *pFVar14;
  int iVar15;
  int iVar16;
  ulonglong uVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  undefined1 auStackY_2f8 [32];
  undefined8 *local_2a0;
  FRDGTexture *local_298;
  FViewInfo *local_288;
  EUniformBufferBindingFlags EStack_280;
  undefined7 uStack_27f;
  int local_278;
  int iStack_274;
  float local_270;
  float fStack_26c;
  undefined8 local_268;
  FRDGBuilder *local_260;
  TIntVector3<int>_u_0 local_258;
  FRDGTexture *local_248;
  ulonglong local_240;
  ulonglong local_238;
  ulonglong local_230;
  ulonglong local_228;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_218;
  TIntPoint<int>_u_0 local_208;
  ulonglong local_200;
  ulonglong local_1f8;
  TIntPoint<int>_u_0 local_1f0;
  TIntPoint<int>_u_0 local_1e8;
  ulonglong local_1e0;
  undefined1 local_1d0 [8];
  FString local_1c8;
  TIntPoint<int>_u_0 local_1b8;
  TShaderRefBase<FStreamlineVelocityCombineCS,FShaderMapPointerTable> local_1a8;
  FRDGEventName local_198;
  TVector2<float>_u_0 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  TVector2<float>_u_0 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined1 local_98 [24];
  float local_80;
  int local_7c;
  undefined4 local_78;
  undefined8 local_74;
  undefined4 local_6c;
  undefined4 local_68;
  undefined2 local_64;
  void *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2f8;
  uVar2 = *(ulonglong *)((longlong)&(param_2->ViewRect).field0_0x0 + 8);
  local_298 = param_5;
  uVar3 = *(ulonglong *)&(param_2->ViewRect).field0_0x0;
  iVar18 = (int)uVar2;
  local_288 = param_2;
  local_260 = param_1;
  local_248 = param_4;
  local_240 = uVar2;
  local_230 = uVar3;
  local_228 = uVar2;
  if (param_6) {
    TVar8 = FViewInfo::GetSecondaryViewRectSize(param_2);
    uVar17 = *(ulonglong *)TVar8.field0_0x0;
  }
  else {
    uVar17 = (uVar2 & 0xffffffff00000000) - (uVar3 & 0xffffffff00000000) |
             (ulonglong)(uint)(iVar18 - (int)uVar3);
  }
  TVar8.field0_0x0 = UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
  iVar16 = (int)uVar17;
  iVar19 = UE::Math::TIntPoint<int>::ZeroValue.field0_0x0._0_4_;
  local_278 = iVar16 - iVar19;
  local_1b8 = UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
  local_238 = uVar17 >> 0x20;
  iVar20 = UE::Math::TIntPoint<int>::ZeroValue.field0_0x0._4_4_;
  iStack_274 = (int)(uVar17 >> 0x20) - iVar20;
  local_80 = FClearValueBinding::Black.Value.Color[3];
  local_7c = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
  local_4c = 1;
  local_74._4_4_ = iStack_274;
  local_74._0_4_ = local_278;
  local_98._0_8_ = 0x20008;
  local_98._8_8_ = FClearValueBinding::Black._0_8_;
  local_98._16_8_ = FClearValueBinding::Black.Value._4_8_;
  local_78 = 0;
  local_6c = 0x10001;
  local_68 = 0xf000101;
  local_64 = 0xff00;
  local_58 = (void *)0x0;
  local_50 = 0;
  local_268 = uVar17;
  pFVar9 = FRDGBuilder::CreateTexture
                     (param_1,(FRDGTextureDesc *)local_98,L"Streamline.CombinedVelocity",None);
  puVar10 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x150,0x10);
  if (puVar10 == (undefined8 *)0x0) {
    puVar10 = (undefined8 *)0x0;
    bVar6 = FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pFVar9 = (FRDGTexture *)(*pcVar4)();
      return pFVar9;
    }
  }
  else {
    *(undefined1 *)(puVar10 + 0x17) = 1;
    *puVar10 = &___7__TObject_VFParameters_FStreamlineVelocityCombineCS___FRDGAllocator__6B_;
    puVar10[2] = 0;
    puVar10[3] = 0;
    puVar10[0x12] = 0;
    puVar10[0x13] = 0;
    puVar10[0x16] = 0;
    puVar10[0x18] = 0;
    puVar10[0x28] = 0;
  }
  local_2a0 = puVar10;
  if ((((undefined8 **)param_1->_padding_ <= &local_2a0) &&
      (&local_2a0 < (undefined8 **)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4))
      ) && (bVar6 = FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
    pcVar4 = (code *)swi(3);
    pFVar9 = (FRDGTexture *)(*pcVar4)();
    return pFVar9;
  }
  iVar7 = (int)param_1->_padding_;
  piVar1 = (int *)((longlong)&param_1->_padding_ + 4);
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)&param_1->_padding_,piVar1);
  }
  *(int *)&param_1->_padding_ = iVar7 + 1;
  *(undefined8 **)(param_1->_padding_ + (longlong)iVar7 * 8) = local_2a0;
  ((FParameters *)(puVar10 + 2))->VelocityTexture = local_248;
  puVar10[3] = TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
               ::StaticResource.StateRHI.Reference;
  iVar7 = *(int *)&(local_248->Desc).field_0x24;
  if ((((iVar7 != 1) || (*(int *)&(local_248->Desc).field_0x28 != 1)) &&
      ((iVar7 != *(int *)&(param_3->Desc).field_0x24 ||
       (*(int *)&(local_248->Desc).field_0x28 != *(int *)&(param_3->Desc).field_0x28)))) &&
     (bVar6 = FDebug::CheckVerifyFailedImpl2
                        ("InVelocityTexture->Desc.Extent == FIntPoint(1, 1) || InVelocityTexture->Desc.Extent == InSceneDepthTexture->Desc.Extent"
                         ,
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineShaders\\Private\\VelocityCombinePass.cpp"
                         ,0x75,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pFVar9 = (FRDGTexture *)(*pcVar4)();
    return pFVar9;
  }
  if (param_3 == (FRDGTexture *)0x0) {
LAB_14de559c3:
    bVar6 = FDebug::CheckVerifyFailedImpl2
                      ("InTexture.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\ScreenPass.inl"
                       ,0xab,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pFVar9 = (FRDGTexture *)(*pcVar4)();
      return pFVar9;
    }
  }
  else {
    iVar7 = (param_3->VisualizeTextureExtent).field0_0x0._s_0.X;
    iVar21 = iVar18;
    if (iVar18 < iVar7) {
      iVar21 = iVar7;
    }
    iVar7 = (param_3->VisualizeTextureExtent).field0_0x0._s_0.Y;
    (param_3->VisualizeTextureExtent).field0_0x0._s_0.X = iVar21;
    iVar15 = (int)(uVar2 >> 0x20);
    iVar21 = iVar15;
    if (iVar15 < iVar7) {
      iVar21 = iVar7;
    }
    (param_3->VisualizeTextureExtent).field0_0x0._s_0.Y = iVar21;
    if ((iVar18 == (int)uVar3) && (iVar15 == (int)(uVar3 >> 0x20))) goto LAB_14de559c3;
  }
  local_208 = *(TIntPoint<int>_u_0 *)&(param_3->Desc).field_0x24;
  local_1f8 = local_240;
  local_200 = uVar3;
  GetScreenPassTextureViewportParameters
            ((FScreenPassTextureViewportParameters *)&local_178._s_0,
             (FScreenPassTextureViewport *)&local_208._s_0);
  *(TVector2<float>_u_0 *)(puVar10 + 4) = local_178;
  puVar10[5] = uStack_170;
  puVar10[0x12] = param_3;
  puVar10[6] = local_168;
  puVar10[7] = uStack_160;
  puVar10[8] = local_158;
  puVar10[9] = uStack_150;
  puVar10[10] = local_148;
  puVar10[0xb] = uStack_140;
  puVar10[0xc] = local_138;
  puVar10[0xd] = uStack_130;
  puVar10[0xe] = local_128;
  puVar10[0xf] = uStack_120;
  puVar10[0x10] = local_118;
  puVar10[0x11] = uStack_110;
  puVar10[0x13] =
       TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
       ::StaticResource.StateRHI.Reference;
  puVar10[0x28] = local_298;
  pFVar11 = FRDGBuilder::CreateUAV(local_260,pFVar9,None,PF_Unknown);
  puVar10[0x18] = pFVar11;
  if (pFVar9 != (FRDGTexture *)0x0) {
    iVar18 = (pFVar9->VisualizeTextureExtent).field0_0x0._s_0.X;
    iVar7 = iVar16;
    if (iVar16 < iVar18) {
      iVar7 = iVar18;
    }
    iVar18 = (pFVar9->VisualizeTextureExtent).field0_0x0._s_0.Y;
    (pFVar9->VisualizeTextureExtent).field0_0x0._s_0.X = iVar7;
    iVar21 = (int)local_238;
    iVar7 = iVar21;
    if (iVar21 < iVar18) {
      iVar7 = iVar18;
    }
    (pFVar9->VisualizeTextureExtent).field0_0x0._s_0.Y = iVar7;
    if ((iVar16 != iVar19) || (iVar21 != iVar20)) goto LAB_14de55b1a;
  }
  bVar6 = FDebug::CheckVerifyFailedImpl2
                    ("InTexture.IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\ScreenPass.inl"
                     ,0xab,L"");
  if (bVar6) {
    pcVar4 = (code *)swi(3);
    pFVar9 = (FRDGTexture *)(*pcVar4)();
    return pFVar9;
  }
LAB_14de55b1a:
  local_1f0 = *(TIntPoint<int>_u_0 *)&(pFVar9->Desc).field_0x24;
  local_1e8 = TVar8.field0_0x0;
  local_1e0 = uVar17;
  GetScreenPassTextureViewportParameters
            ((FScreenPassTextureViewportParameters *)&local_108._s_0,
             (FScreenPassTextureViewport *)&local_1f0._s_0);
  pFVar5 = local_288;
  *(TVector2<float>_u_0 *)(puVar10 + 0x1a) = local_108;
  puVar10[0x1b] = uStack_100;
  puVar10[0x1c] = local_f8;
  puVar10[0x1d] = uStack_f0;
  puVar10[0x1e] = local_e8;
  puVar10[0x1f] = uStack_e0;
  puVar10[0x20] = local_d8;
  puVar10[0x21] = uStack_d0;
  puVar10[0x22] = local_c8;
  puVar10[0x23] = uStack_c0;
  puVar10[0x24] = local_b8;
  puVar10[0x25] = uStack_b0;
  puVar10[0x26] = local_a8;
  puVar10[0x27] = uStack_a0;
  local_270 = (float)(local_288->TemporalJitterPixels).field0_0x0._s_0.X;
  fStack_26c = (float)(local_288->TemporalJitterPixels).field0_0x0._s_0.Y;
  puVar10[0x14] = CONCAT44(fStack_26c,local_270);
  pFVar12 = FViewUniformShaderParameters::GetStructMetadata();
  EStack_280 = Static;
  if (pFVar12->BindingFlags != StaticAndShader) {
    EStack_280 = pFVar12->BindingFlags;
  }
  puVar10[0x16] = pFVar5->_padding_;
  puVar10[0x17] = CONCAT71(uStack_27f,EStack_280);
  local_288 = (FViewInfo *)pFVar5->ShaderMap;
  bVar6 = local_298 != (FRDGTexture *)0x0;
  pFVar13 = (FShaderType *)FStreamlineVelocityCombineCS::GetStaticType();
  FGlobalShaderMap::GetShader
            ((FGlobalShaderMap *)local_288,&local_218,pFVar13,(-(uint)bVar6 & 2) + (uint)param_6);
  if (local_218.ShaderContent == (FShader *)0x0) {
    this = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_1d0);
    FName::ToString((FName *)this,&local_1c8);
    FStreamlineVelocityCombineCS::GetStaticType();
    bVar6 = FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
    }
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pFVar9 = (FRDGTexture *)(*pcVar4)();
      return pFVar9;
    }
  }
  FStreamlineVelocityCombineCS::GetStaticType();
  iVar18 = (kVelocityCombineComputeTileSize.field0_0x0._s_0.X + -1 + (iVar16 - iVar19)) /
           kVelocityCombineComputeTileSize.field0_0x0._s_0.X;
  local_1a8.ShaderContent = (FStreamlineVelocityCombineCS *)local_218.ShaderContent;
  local_1a8.ShaderMap = local_218.ShaderMap;
  iVar20 = (kVelocityCombineComputeTileSize.field0_0x0._s_0.Y + -1 +
           (local_268._4_4_ - local_1b8._4_4_)) / kVelocityCombineComputeTileSize.field0_0x0._s_0.Y;
  pFVar14 = FRDGEventName::FRDGEventName(&local_198,L"Velocity Combine%s%s (%dx%d -> %dx%d)");
  pFVar12 = FStreamlineVelocityCombineCS::FParameters::FTypeInfo::GetStructMetadata();
  local_258._s_0.Z = 1;
  local_258._s_0.X = iVar18;
  local_258._s_0.Y = iVar20;
  FComputeShaderUtils::AddPass<FStreamlineVelocityCombineCS>
            (local_260,pFVar14,Compute,&local_1a8,pFVar12,(FParameters *)(puVar10 + 2),
             (TIntVector3<int> *)&local_258._s_0);
  if (local_198.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_198.FormattedEventName.Data.AllocatorInstance.Data);
  }
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  return pFVar9;
}

// IMPLEMENT_MODULE_StreamlineShaders @ 14de58510

void __cdecl IMPLEMENT_MODULE_StreamlineShaders(void)

{
  return;
}

// OnCreateRenderThreadResources'' @ 15045f880

void __cdecl
`dynamic_atexit_destructor_for_'Nanite::FSkinnedSceneProxyDelegates::OnCreateRenderThreadResources__
          (void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             Nanite::FSkinnedSceneProxyDelegates::OnCreateRenderThreadResources._8_8_,
             Nanite::FSkinnedSceneProxyDelegates::OnCreateRenderThreadResources._16_4_);
  if (Nanite::FSkinnedSceneProxyDelegates::OnCreateRenderThreadResources._8_8_ != 0) {
    FMemory::Free((void *)Nanite::FSkinnedSceneProxyDelegates::OnCreateRenderThreadResources._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)
             &Nanite::FSkinnedSceneProxyDelegates::OnCreateRenderThreadResources);
  return;
}

// OnDestroyRenderThreadResources'' @ 15045f8c0

void __cdecl
`dynamic_atexit_destructor_for_'Nanite::FSkinnedSceneProxyDelegates::
OnDestroyRenderThreadResources__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             Nanite::FSkinnedSceneProxyDelegates::OnDestroyRenderThreadResources._8_8_,
             Nanite::FSkinnedSceneProxyDelegates::OnDestroyRenderThreadResources._16_4_);
  if (Nanite::FSkinnedSceneProxyDelegates::OnDestroyRenderThreadResources._8_8_ != 0) {
    FMemory::Free((void *)Nanite::FSkinnedSceneProxyDelegates::OnDestroyRenderThreadResources._8_8_)
    ;
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)
             &Nanite::FSkinnedSceneProxyDelegates::OnDestroyRenderThreadResources);
  return;
}

// ShaderTypeRegistration'' @ 15045f900

void __cdecl
`dynamic_atexit_destructor_for_'FStreamlineUIHintExtractionCS::ShaderTypeRegistration__(void)

{
  return;
}

// ShaderTypeRegistration'' @ 15045f910

void __cdecl
`dynamic_atexit_destructor_for_'FStreamlineVelocityCombineCS::ShaderTypeRegistration__(void)

{
  return;
}

// StaticResource'' @ 15045f920

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
::StaticResource__(void)

{
  code *pcVar1;
  bool bVar2;
  
  TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
  ::StaticResource._padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticSamplerState__0A__00_00_00_0A__00_0A__0A___V__TRefCountPtr_VFRHISamplerState____PEAVFRHISamplerState____6B_
  ;
  if ((GRHIGlobals.IsRHIInitialized) && (GRHIGlobals.SupportsRHIThread)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!GRHIGlobals.IsRHIInitialized || !GRHIGlobals.SupportsRHIThread",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RHIStaticStates.h"
                       ,99,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FRenderResource::ReleaseResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
              ::StaticResource);
  if (TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
      ::StaticResource.StateRHI.Reference != (FRHISamplerState *)0x0) {
    FRHIResource::Release
              ((FRHIResource *)
               TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
               ::StaticResource.StateRHI.Reference);
  }
  FRenderResource::~FRenderResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
              ::StaticResource);
  return;
}

// `dynamic_atexit_destructor_for_'LogStreamlineShaders'' @ 15045f9a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogStreamlineShaders__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogStreamlineShaders);
  return;
}

// `dynamic_atexit_destructor_for_'StaticStructMetadata'' @ 15045f9c0

void __cdecl
`FStreamlineUIHintExtractionCS::FParameters::FTypeInfo::GetStructMetadata'::__l2::
_dynamic_atexit_destructor_for__StaticStructMetadata__(void)

{
  FShaderParametersMetadata::~FShaderParametersMetadata
            (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FStreamlineUIHintExtractionCS::FParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata);
  return;
}

// `dynamic_atexit_destructor_for_'StaticStructMetadata'' @ 15045f9e0

void __cdecl
`FStreamlineVelocityCombineCS::FParameters::FTypeInfo::GetStructMetadata'::__l2::
_dynamic_atexit_destructor_for__StaticStructMetadata__(void)

{
  FShaderParametersMetadata::~FShaderParametersMetadata
            (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FStreamlineVelocityCombineCS::FParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata);
  return;
}

// `dynamic_atexit_destructor_for_'StaticType'' @ 15045fa00

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

void __cdecl
`FStreamlineUIHintExtractionCS::GetStaticType'::__l2::_dynamic_atexit_destructor_for__StaticType__
          (void)

{
  FShaderType::~FShaderType((FShaderType *)&::StaticType);
  return;
}

// `dynamic_atexit_destructor_for_'StaticType'' @ 15045fa20

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

void __cdecl
`FStreamlineVelocityCombineCS::GetStaticType'::__l2::_dynamic_atexit_destructor_for__StaticType__
          (void)

{
  FShaderType::~FShaderType((FShaderType *)&::StaticType);
  return;
}

