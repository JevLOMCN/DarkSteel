// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenCVLensDistortion
// Functions: 51

// ShaderTypeRegistration'' @ 1413df630

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
`dynamic_initializer_for_'FLensDistortionDisplacementMapGenerationPS::ShaderTypeRegistration__(void)

{
  code *local_18;
  code *local_10;
  
  local_10 = FLensDistortionDisplacementMapGenerationPS::GetStaticType;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<FGlobalShaderType_&___cdecl(void),FShaderType_&>::Call;
  FShaderTypeRegistration::FShaderTypeRegistration
            (&FLensDistortionDisplacementMapGenerationPS::ShaderTypeRegistration,
             (TFunctionRef<FShaderType_&___cdecl(void)> *)&local_18);
  atexit(`dynamic_atexit_destructor_for_'FLensDistortionDisplacementMapGenerationPS::
         ShaderTypeRegistration__);
  return;
}

// ShaderTypeRegistration'' @ 1413df680

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
`dynamic_initializer_for_'FLensDistortionDisplacementMapGenerationVS::ShaderTypeRegistration__(void)

{
  code *local_18;
  code *local_10;
  
  local_10 = FLensDistortionDisplacementMapGenerationVS::GetStaticType;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<FGlobalShaderType_&___cdecl(void),FShaderType_&>::Call;
  FShaderTypeRegistration::FShaderTypeRegistration
            (&FLensDistortionDisplacementMapGenerationVS::ShaderTypeRegistration,
             (TFunctionRef<FShaderType_&___cdecl(void)> *)&local_18);
  atexit(`dynamic_atexit_destructor_for_'FLensDistortionDisplacementMapGenerationVS::
         ShaderTypeRegistration__);
  return;
}

// StaticResource'' @ 1413df6d0

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
`dynamic_initializer_for_'TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
::StaticResource__(void)

{
  TRefCountPtr<FRHIBlendState> this;
  TRefCountPtr<FRHIBlendState> TVar1;
  FRHIResource *local_res8;
  
  FRenderResource::FRenderResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
              ::StaticResource);
  TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
  ::StaticResource._padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticBlendState__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0A___V__TRefCountPtr_VFRHIBlendState____PEAVFRHIBlendState____6B_
  ;
  TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
  ::StaticResource.StateRHI.Reference = (FRHIBlendState *)0x0;
  if ((GRHIGlobals.IsRHIInitialized == false) || (GRHIGlobals.SupportsRHIThread == false)) {
    BeginInitResource((FRenderResource *)
                      &TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
                       ::StaticResource,(FRenderCommandPipe *)0x0);
  }
  else {
    TVar1 = TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>
            ::CreateRHI();
    this = TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
           ::StaticResource.StateRHI;
    if (TVar1.Reference !=
        (FRHIBlendState *)
        &TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
         ::StaticResource.StateRHI) {
                    /* WARNING: Load size is inaccurate */
      TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
      ::StaticResource.StateRHI.Reference = *TVar1.Reference;
      *(undefined8 *)TVar1.Reference = 0;
      if (this.Reference != (FRHIBlendState *)0x0) {
        FRHIResource::Release((FRHIResource *)this.Reference);
      }
    }
    if (local_res8 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_res8);
      atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
             ::StaticResource__);
      return;
    }
  }
  atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
         ::StaticResource__);
  return;
}

// StaticResource'' @ 1413df790

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
`dynamic_initializer_for_'TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
::StaticResource__(void)

{
  TRefCountPtr<FRHIDepthStencilState> this;
  TRefCountPtr<FRHIDepthStencilState> TVar1;
  FRHIResource *local_res8;
  
  FRenderResource::FRenderResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
              ::StaticResource);
  TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
  ::StaticResource._padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticDepthStencilState__0A__06_0A__06_0A__0A__0A__0A__06_0A__0A__0A__0PP__0PP___V__TRefCountPtr_VFRHIDepthStencilState____PEAVFRHIDepthStencilState____6B_
  ;
  TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
  ::StaticResource.StateRHI.Reference = (FRHIDepthStencilState *)0x0;
  if ((GRHIGlobals.IsRHIInitialized == false) || (GRHIGlobals.SupportsRHIThread == false)) {
    BeginInitResource((FRenderResource *)
                      &TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
                       ::StaticResource,(FRenderCommandPipe *)0x0);
  }
  else {
    TVar1 = TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>::CreateRHI();
    this = TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
           ::StaticResource.StateRHI;
    if (TVar1.Reference !=
        (FRHIDepthStencilState *)
        &TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
         ::StaticResource.StateRHI) {
      TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
      ::StaticResource.StateRHI.Reference = (FRHIDepthStencilState *)(TVar1.Reference)->_padding_;
      (TVar1.Reference)->_padding_ = 0;
      if (this.Reference != (FRHIDepthStencilState *)0x0) {
        FRHIResource::Release((FRHIResource *)this.Reference);
      }
    }
    if (local_res8 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_res8);
      atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
             ::StaticResource__);
      return;
    }
  }
  atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
         ::StaticResource__);
  return;
}

// StaticResource'' @ 1413df850

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
`dynamic_initializer_for_'TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
::StaticResource__(void)

{
  TRefCountPtr<FRHIRasterizerState> this;
  TRefCountPtr<FRHIRasterizerState> TVar1;
  FRHIResource *local_res8;
  
  FRenderResource::FRenderResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
              ::StaticResource);
  TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
  ::StaticResource._padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticRasterizerState__01_0A__0A__00__V__TRefCountPtr_VFRHIRasterizerState____PEAVFRHIRasterizerState____6B_
  ;
  TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
  ::StaticResource.StateRHI.Reference = (FRHIRasterizerState *)0x0;
  if ((GRHIGlobals.IsRHIInitialized == false) || (GRHIGlobals.SupportsRHIThread == false)) {
    BeginInitResource((FRenderResource *)
                      &TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
                       ::StaticResource,(FRenderCommandPipe *)0x0);
  }
  else {
    TVar1 = TStaticRasterizerState<2,0,0,1>::CreateRHI();
    this = TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
           ::StaticResource.StateRHI;
    if (TVar1.Reference !=
        (FRHIRasterizerState *)
        &TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
         ::StaticResource.StateRHI) {
                    /* WARNING: Load size is inaccurate */
      TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
      ::StaticResource.StateRHI.Reference = *TVar1.Reference;
      *(undefined8 *)TVar1.Reference = 0;
      if (this.Reference != (FRHIRasterizerState *)0x0) {
        FRHIResource::Release((FRHIResource *)this.Reference);
      }
    }
    if (local_res8 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_res8);
      atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
             ::StaticResource__);
      return;
    }
  }
  atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
         ::StaticResource__);
  return;
}

// StaticResource'' @ 1413df910

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
`dynamic_initializer_for_'TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
::StaticResource__(void)

{
  TRefCountPtr<FRHISamplerState> this;
  TRefCountPtr<FRHISamplerState> TVar1;
  FRHIResource *local_res8;
  
  FRenderResource::FRenderResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
              ::StaticResource);
  TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
  ::StaticResource._padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticSamplerState__00_00_00_00_0A__00_0A__0A___V__TRefCountPtr_VFRHISamplerState____PEAVFRHISamplerState____6B_
  ;
  TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
  ::StaticResource.StateRHI.Reference = (FRHISamplerState *)0x0;
  if ((GRHIGlobals.IsRHIInitialized == false) || (GRHIGlobals.SupportsRHIThread == false)) {
    BeginInitResource((FRenderResource *)
                      &TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
                       ::StaticResource,(FRenderCommandPipe *)0x0);
  }
  else {
    TVar1 = TStaticSamplerState<1,1,1,1,0,1,0,0>::CreateRHI();
    this = TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
           ::StaticResource.StateRHI;
    if (TVar1.Reference !=
        (FRHISamplerState *)
        &TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
         ::StaticResource.StateRHI) {
                    /* WARNING: Load size is inaccurate */
      TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
      ::StaticResource.StateRHI.Reference = *TVar1.Reference;
      *(undefined8 *)TVar1.Reference = 0;
      if (this.Reference != (FRHISamplerState *)0x0) {
        FRHIResource::Release((FRHIResource *)this.Reference);
      }
    }
    if (local_res8 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_res8);
      atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
             ::StaticResource__);
      return;
    }
  }
  atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
         ::StaticResource__);
  return;
}

// UnitVectors'' @ 1413df9d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl `dynamic_initializer_for_'FOpenCVHelper::UnitVectors__(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ForAnyElementType FVar7;
  
  uVar6 = _UNK_1508ffb28;
  uVar5 = ___xmm_bff00000000000000000000000000000;
  uVar4 = _UNK_15076c6f8;
  uVar3 = ___xmm_bff00000000000003ff0000000000000;
  uVar2 = _UNK_150689518;
  uVar1 = ___xmm_00000000000000003ff0000000000000;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x18,8,6,0,&FOpenCVHelper::UnitVectors.AllocatorInstance,6,
             &FOpenCVHelper::UnitVectors.ArrayMax);
  FVar7 = FOpenCVHelper::UnitVectors.AllocatorInstance;
  *(undefined8 *)FOpenCVHelper::UnitVectors.AllocatorInstance.Data = uVar1;
  *(undefined8 *)(FVar7.Data + 8) = uVar2;
  *(undefined8 *)(FVar7.Data + 0x10) = 0;
  *(undefined8 *)(FVar7.Data + 0x18) = 0;
  *(undefined8 *)(FVar7.Data + 0x20) = uVar1;
  *(undefined8 *)(FVar7.Data + 0x28) = uVar2;
  *(undefined8 *)(FVar7.Data + 0x30) = 0;
  *(undefined8 *)(FVar7.Data + 0x38) = 0;
  *(undefined8 *)(FVar7.Data + 0x40) = uVar3;
  *(undefined8 *)(FVar7.Data + 0x48) = uVar4;
  *(undefined8 *)(FVar7.Data + 0x50) = 0;
  *(undefined8 *)(FVar7.Data + 0x58) = 0;
  *(undefined8 *)(FVar7.Data + 0x60) = uVar5;
  *(undefined8 *)(FVar7.Data + 0x68) = uVar6;
  *(undefined8 *)(FVar7.Data + 0x70) = 0;
  *(undefined8 *)(FVar7.Data + 0x78) = 0;
  *(undefined8 *)(FVar7.Data + 0x80) = uVar5;
  *(undefined8 *)(FVar7.Data + 0x88) = uVar6;
  atexit(`dynamic_atexit_destructor_for_'FOpenCVHelper::UnitVectors__);
  return;
}

// `dynamic_initializer_for_'LogOpenCVLensDistortion'' @ 1413dfb00

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogOpenCVLensDistortion__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogOpenCVLensDistortion,L"LogOpenCVLensDistortion",Verbose,All);
  atexit(_dynamic_atexit_destructor_for__LogOpenCVLensDistortion__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantOpenCVLensDistortion'' @ 1413dfb40

void __cdecl _dynamic_initializer_for__ModuleRegistrantOpenCVLensDistortion__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "OpenCVLensDistortion";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"OpenCVLensDistortion",0x14);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,
             FStaticallyLinkedModuleRegistrant<FOpenCVLensDistortionModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_OpenCVLensDistortion_Source_OpenCVLensDistortion_Public_OpenCVLensDistortionBlueprintLibrary_h__Script_OpenCVLensDistortion_3969672620'' @ 1413dfb90

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_OpenCVLensDistortion_Source_OpenCVLensDistortion_Public_OpenCVLensDistortionBlueprintLibrary_h__Script_OpenCVLensDistortion_3969672620__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/OpenCVLensDistortion",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_OpenCVLensDistortion_Source_OpenCVLensDistortion_Public_OpenCVLensDistortionBlueprintLibrary_h__Script_OpenCVLensDistortion_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_OpenCVLensDistortion_Source_OpenCVLensDistortion_Public_OpenCVLensDistortionParameters_h__Script_OpenCVLensDistortion_226935534'' @ 1413dfbd0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_OpenCVLensDistortion_Source_OpenCVLensDistortion_Public_OpenCVLensDistortionParameters_h__Script_OpenCVLensDistortion_226935534__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/OpenCVLensDistortion",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_OpenCVLensDistortion_Source_OpenCVLensDistortion_Public_OpenCVLensDistortionParameters_h__Script_OpenCVLensDistortion_Statics
             ::ScriptStructInfo,2,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_OpenCVLensDistortion'' @ 1413dfc10

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_OpenCVLensDistortion__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0x56eb8653;
  local_res8[0].DeclarationsHash = 0x713855d2;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_OpenCVLensDistortion,L"/Script/OpenCVLensDistortion",
             &Z_Registration_Info_UPackage__Script_OpenCVLensDistortion,local_res8);
  return;
}

// Z_Construct_UPackage__Script_OpenCVLensDistortion @ 14d7c61b0

UPackage * __cdecl Z_Construct_UPackage__Script_OpenCVLensDistortion(void)

{
  if (Z_Registration_Info_UPackage__Script_OpenCVLensDistortion.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_OpenCVLensDistortion.OuterSingleton,
               &PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_OpenCVLensDistortion.OuterSingleton;
}

// Z_Construct_UClass_UOpenCVLensDistortionBlueprintLibrary @ 14d7c6330

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UOpenCVLensDistortionBlueprintLibrary(void)

{
  if (Z_Registration_Info_UClass_UOpenCVLensDistortionBlueprintLibrary.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UOpenCVLensDistortionBlueprintLibrary.OuterSingleton,
               &Z_Construct_UClass_UOpenCVLensDistortionBlueprintLibrary_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UOpenCVLensDistortionBlueprintLibrary.OuterSingleton;
}

// Z_Construct_UScriptStruct_FOpenCVCameraViewInfo @ 14d7c6370

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FOpenCVCameraViewInfo(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FOpenCVCameraViewInfo.InnerSingleton == (UScriptStruct *)0x0
     ) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FOpenCVCameraViewInfo.InnerSingleton,
               &Z_Construct_UScriptStruct_FOpenCVCameraViewInfo_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FOpenCVCameraViewInfo.InnerSingleton != (UScriptStruct *)0x0
     ) {
    return Z_Registration_Info_UScriptStruct_FOpenCVCameraViewInfo.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FOpenCVLensDistortionParameters @ 14d7c63f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FOpenCVLensDistortionParameters(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FOpenCVLensDistortionParameters.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FOpenCVLensDistortionParameters.InnerSingleton,
               &Z_Construct_UScriptStruct_FOpenCVLensDistortionParameters_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FOpenCVLensDistortionParameters.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FOpenCVLensDistortionParameters.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UFunction_UOpenCVLensDistortionBlueprintLibrary_CreateUndistortUVDisplacementMap @ 14d7c6470

UFunction * __cdecl
Z_Construct_UFunction_UOpenCVLensDistortionBlueprintLibrary_CreateUndistortUVDisplacementMap(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UOpenCVLensDistortionBlueprintLibrary_CreateUndistortUVDisplacementMap_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UOpenCVLensDistortionBlueprintLibrary_DrawDisplacementMapToRenderTarget @ 14d7c64b0

UFunction * __cdecl
Z_Construct_UFunction_UOpenCVLensDistortionBlueprintLibrary_DrawDisplacementMapToRenderTarget(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UOpenCVLensDistortionBlueprintLibrary_DrawDisplacementMapToRenderTarget_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14d7c64f0

void __cdecl
Z_Construct_UFunction_UOpenCVLensDistortionBlueprintLibrary_EqualEqual_CompareLensDistortionModels_Statics
::NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x90) = 1;
  return;
}

// Z_Construct_UFunction_UOpenCVLensDistortionBlueprintLibrary_EqualEqual_CompareLensDistortionModels @ 14d7c6500

UFunction * __cdecl
Z_Construct_UFunction_UOpenCVLensDistortionBlueprintLibrary_EqualEqual_CompareLensDistortionModels
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UOpenCVLensDistortionBlueprintLibrary_EqualEqual_CompareLensDistortionModels_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14d7c6540

void __cdecl
Z_Construct_UFunction_UOpenCVLensDistortionBlueprintLibrary_NotEqual_CompareLensDistortionModels_Statics
::NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x90) = 1;
  return;
}

// Z_Construct_UFunction_UOpenCVLensDistortionBlueprintLibrary_NotEqual_CompareLensDistortionModels @ 14d7c6550

UFunction * __cdecl
Z_Construct_UFunction_UOpenCVLensDistortionBlueprintLibrary_NotEqual_CompareLensDistortionModels
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UOpenCVLensDistortionBlueprintLibrary_NotEqual_CompareLensDistortionModels_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14d7c6590

void * __cdecl Z_Construct_UScriptStruct_FOpenCVCameraViewInfo_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xc;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FOpenCVCameraViewInfo,&UE::CoreUObject::Private::Construct<FOpenCVCameraViewInfo>,&UE::CoreUObject::Private::ConstructForTests<FOpenCVCameraViewInfo>,&UE::CoreUObject::Private::Destruct<FOpenCVCameraViewInfo>,&UE::CoreUObject::Private::Copy<FOpenCVCameraViewInfo>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14d7c65d0

void * __cdecl Z_Construct_UScriptStruct_FOpenCVLensDistortionParameters_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x48;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FOpenCVLensDistortionParameters,&UE::CoreUObject::Private::Construct<FOpenCVLensDistortionParameters>,&UE::CoreUObject::Private::ConstructForTests<FOpenCVLensDistortionParameters>,&UE::CoreUObject::Private::Destruct<FOpenCVLensDistortionParameters>,&UE::CoreUObject::Private::Copy<FOpenCVLensDistortionParameters>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 14d7c6750

void * __thiscall
IOpenCVLensDistortionModule::_scalar_deleting_destructor_
          (IOpenCVLensDistortionModule *this,uint param_1)

{
  *this = (IOpenCVLensDistortionModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d7c68d0

void * __thiscall
FOpenCVLensDistortionModule::_scalar_deleting_destructor_
          (FOpenCVLensDistortionModule *this,uint param_1)

{
  *this = (FOpenCVLensDistortionModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// Enqueue<TRenderCommandTag<`FOpenCVLensDistortionParameters::DrawDisplacementMapToRenderTarget'::__l2::TSTR_CaptureCommand178>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 14d7c6b90

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FOpenCVLensDistortionParameters::DrawDisplacementMapToRenderTarget_::__l2::TSTR_CaptureCommand178>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRenderCommandTag *pFVar10;
  FRHICommandListImmediate *pFVar11;
  undefined8 uVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong *plVar13;
  FName FVar14;
  FColor_u_0 FVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FConstructor local_res20;
  undefined8 *local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar10 = (FRenderCommandTag *)
            TRenderCommandTag<`FOpenCVLensDistortionParameters::DrawDisplacementMapToRenderTarget'::__l2::TSTR_CaptureCommand178>
            ::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar10->SpecId,pFVar10->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar10->SpecId);
  }
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    if (GIsThreadedRendering == false) {
      bVar8 = IsInGameThread();
      if (bVar8) goto LAB_14d7c6ce1;
    }
    if (GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) {
      bVar8 = IsInGameThread();
      if (bVar8) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2708370973442179152>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                           ,0x50,
                           "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                          );
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (GRenderCommandPipeMode == None) {
      local_res20.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
      ::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
                (&local_res20,(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_68
                 ,(FRenderCommandTag *)param_1);
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_68)(local_68,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar10);
    }
    goto LAB_14d7c6ed5;
  }
LAB_14d7c6ce1:
  pTVar3 = (pFVar10->StatId).StatIdPtr;
  FVar16.Value = 0;
  bVar8 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = *(FName *)&pTVar3->Name;
  FVar15.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_14d7c6dbf:
    bVar5 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar15.Bits;
        local_res1c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14d7c6dbf;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_58 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_58.ComparisonIndex.Value;
  }
  pFVar11 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar4 = *(code **)param_1;
  plVar13 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar13 = *(longlong **)&param_1->field_0x28;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(uVar12,pFVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_48);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
LAB_14d7c6ed5:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// InternalConstructor<UOpenCVLensDistortionBlueprintLibrary> @ 14d7c6f10

void __cdecl InternalConstructor<UOpenCVLensDistortionBlueprintLibrary>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &___7UOpenCVLensDistortionBlueprintLibrary__6B_;
  }
  return;
}

// InternalVTableHelperCtorCaller<UOpenCVLensDistortionBlueprintLibrary> @ 14d7c6f40

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UOpenCVLensDistortionBlueprintLibrary>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UOpenCVLensDistortionBlueprintLibrary::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UOpenCVLensDistortionBlueprintLibrary__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// StaticGetTypeLayoutDesc<FLensDistortionDisplacementMapGenerationShader> @ 14d7c6ff0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl
StaticGetTypeLayoutDesc<FLensDistortionDisplacementMapGenerationShader>(void)

{
  if ((DAT_15536bf37 & 2) == 0) {
    DAT_15536bf37 = DAT_15536bf37 | 2;
    _DAT_15536bf28 = 0xf0;
    _DAT_15536bf30 = 8;
    _DAT_15536bed8 = L"FLensDistortionDisplacementMapGenerationShader";
    _DAT_15536bef0 = Freeze::DefaultWriteMemoryImage;
    _DAT_15536bef8 = Freeze::DefaultUnfrozenCopy;
    _DAT_15536bf00 = Freeze::DefaultAppendHash;
    _DAT_15536bf08 = Freeze::DefaultGetTargetAlignment;
    _DAT_15536bf10 = Freeze::DefaultToString;
    _DAT_15536bee8 = FLensDistortionDisplacementMapGenerationShader::InternalDestroy;
    _DAT_15536bf18 = TGetDefaultObjectHelper<FLensDistortionDisplacementMapGenerationShader,0>::Do;
    DAT_15536bf34 = 0;
    _DAT_15536bf2c = 0xffffffff;
    `public:_static_void___cdecl_FLensDistortionDisplacementMapGenerationShader::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "BilinearSampler";
    DAT_15536bfc2 = Freeze::FindFieldNameLength(L"BilinearSampler");
    _DAT_15536bfa0 = FShaderResourceParameter::StaticGetTypeLayout();
    _DAT_15536bfa8 = DAT_15536bee0;
    DAT_15536bee0 =
         &`public:_static_void___cdecl_FLensDistortionDisplacementMapGenerationShader::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15536bfb0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15536bfb8 = 0xea;
    _DAT_15536bfbc = 1;
    _DAT_15536bfc0 = 0;
    `public:_static_void___cdecl_FLensDistortionDisplacementMapGenerationShader::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "UndistortDisplacementMap";
    DAT_15536bf92 = Freeze::FindFieldNameLength(L"UndistortDisplacementMap");
    _DAT_15536bf70 = FShaderResourceParameter::StaticGetTypeLayout();
    _DAT_15536bf78 = DAT_15536bee0;
    DAT_15536bee0 =
         &`public:_static_void___cdecl_FLensDistortionDisplacementMapGenerationShader::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15536bf80 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15536bf88 = 0xe6;
    _DAT_15536bf8c = 1;
    _DAT_15536bf90 = 0;
    `public:_static_void___cdecl_FLensDistortionDisplacementMapGenerationShader::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "PixelUVSize";
    DAT_15536bf62 = Freeze::FindFieldNameLength(L"PixelUVSize");
    _DAT_15536bf40 = FShaderParameter::StaticGetTypeLayout();
    _DAT_15536bf48 = DAT_15536bee0;
    DAT_15536bee0 =
         &`public:_static_void___cdecl_FLensDistortionDisplacementMapGenerationShader::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    FieldBuffer._0_8_ = u_BASE;
    _DAT_15536bf50 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15536bf58 = 0xe0;
    _DAT_15536bf5c = 1;
    _DAT_15536bf60 = 0;
    FieldBuffer[0x2a] = '\x04';
    FieldBuffer._8_8_ = FGlobalShader::StaticGetTypeLayout();
    DAT_15536bf35 = DAT_15536bf35 + '\x01';
    FieldBuffer._16_8_ = DAT_15536bee0;
    DAT_15536bee0 = (uchar **)FieldBuffer;
    FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
    FieldBuffer[0x20] = '\0';
    FieldBuffer[0x21] = '\0';
    FieldBuffer[0x22] = '\0';
    FieldBuffer[0x23] = '\0';
    FieldBuffer[0x24] = '\x01';
    FieldBuffer[0x25] = '\0';
    FieldBuffer[0x26] = '\0';
    FieldBuffer[0x27] = '\0';
    if (((FTypeLayoutDesc *)FieldBuffer._8_8_)->Interface != NonVirtual) {
      DAT_15536bf36 = DAT_15536bf36 + '\x01';
    }
    FTypeLayoutDesc::Initialize
              ((FTypeLayoutDesc *)
               &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_FLensDistortionDisplacementMapGenerationShader::StaticGetTypeLayout(void)'
                ::__l2::TypeBuffer);
    return (FTypeLayoutDesc *)
           &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_FLensDistortionDisplacementMapGenerationShader::StaticGetTypeLayout(void)'
            ::__l2::TypeBuffer;
  }
  return (FTypeLayoutDesc *)
         &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_FLensDistortionDisplacementMapGenerationShader::StaticGetTypeLayout(void)'
          ::__l2::TypeBuffer;
}

// at<float> @ 14d7c7270

float * __thiscall cv::Mat::at<float>(Mat *this,int param_1,int param_2)

{
  return (float *)(this->data + (longlong)param_1 * *(this->step).p + (longlong)param_2 * 4);
}

// ~TFunction_OwnedObject<`FOpenCVLensDistortionParameters::DrawDisplacementMapToRenderTarget'::__l2::<lambda_1>,1,1> @ 14d7c73a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FOpenCVLensDistortionParameters::DrawDisplacementMapToRenderTarget'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_FOpenCVLensDistortionParameters::DrawDisplacementMapToRenderTarget_::__l2::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FOpenCVLensDistortionParameters::DrawDisplacementMapToRenderTarget'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  return;
}

// `scalar_deleting_destructor' @ 14d7c7480

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FOpenCVLensDistortionParameters::DrawDisplacementMapToRenderTarget'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FOpenCVLensDistortionParameters::DrawDisplacementMapToRenderTarget'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d7c74c0

void * __thiscall
UOpenCVLensDistortionBlueprintLibrary::_scalar_deleting_destructor_
          (UOpenCVLensDistortionBlueprintLibrary *this,uint param_1)

{
  *(undefined ***)this = &___7UOpenCVLensDistortionBlueprintLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// DrawUVDisplacementToRenderTargetFromPreComputedDisplacementMap_RenderThread @ 14d7c8230

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EApplyRendertargetOption": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __cdecl
DrawUVDisplacementToRenderTargetFromPreComputedDisplacementMap_RenderThread
          (FRHICommandListImmediate *param_1,FTextureResource *param_2,FName *param_3,
          FTextureRenderTargetResource *param_4,Type param_5)

{
  FRHITexture *pFVar1;
  code *pcVar2;
  bool bVar3;
  byte bVar4;
  int iVar5;
  FRHIBreadcrumbAllocator *this;
  FRHIBreadcrumbNode *pFVar6;
  longlong *plVar7;
  IRHICommandContext *pIVar8;
  FGlobalShaderMap *this_00;
  FShaderType *pFVar9;
  FName FVar10;
  TRefCountPtr<FRHIVertexDeclaration> *pTVar11;
  FRHIVertexShader *pFVar12;
  FRHIBatchedShaderParameters *pFVar13;
  FRHIPixelShader *pFVar14;
  undefined8 *puVar15;
  float fVar16;
  undefined1 auStack_398 [32];
  TIntPoint<int>_u_0 local_358 [2];
  TShaderRefBase<FLensDistortionDisplacementMapGenerationVS,FShaderMapPointerTable> local_348;
  TIntVector3<int>_u_0 local_338;
  undefined8 local_32c;
  int local_324;
  undefined8 local_320;
  int local_318;
  undefined8 local_314;
  undefined8 local_30c;
  undefined4 local_304;
  undefined4 local_300;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<49,FName>_const_*,std::tuple<FName_const_&>_>
  local_2f8;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_2e8;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_2d8;
  TShaderRefBase<FLensDistortionDisplacementMapGenerationPS,FShaderMapPointerTable> local_2c8;
  FRHIBreadcrumbScope local_2b8;
  char local_2a8;
  undefined1 local_2a0 [8];
  undefined1 local_298 [8];
  FString local_290;
  FString local_280;
  uint uStack_264;
  undefined4 local_260;
  undefined4 uStack_25c;
  FGraphicsPipelineStateInitializer local_248;
  FRHIRenderPassInfo local_168;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_398;
  bVar3 = IsInRenderingThread();
  if ((!bVar3) &&
     (bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Compositing\\OpenCVLensDistortion\\Source\\OpenCVLensDistortion\\Private\\LensDistortionDisplacementMapRendering.cpp"
                         ,0x6f,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((param_2 == (FTextureResource *)0x0) &&
     (bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("PreComputedDisplacementMap",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Compositing\\OpenCVLensDistortion\\Source\\OpenCVLensDistortion\\Private\\LensDistortionDisplacementMapRendering.cpp"
                         ,0x70,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < _TSS0) && (_Init_thread_header(&_TSS0), _TSS0 == -1)) {
    local_260 = 0;
    uStack_25c = 0;
    Desc._12_8_ = ZEXT48(uStack_264);
    Desc._padding_._4_4_ = 0;
    Desc._padding_ = (longlong)u_DrawUVDisplacem;
    Desc._padding_ = (longlong)u_OpenCVLensDisto;
    Desc._padding_ = (longlong)s_C__Workspace_UnrealEngine_Engin;
    Desc._padding_._0_4_ = 0x72;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&Desc.Cs,4000);
    Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
    Desc.TraceGpuSpecId = 0;
    Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
    atexit(``DrawUVDisplacementToRenderTargetFromPreComputedDisplacementMap_RenderThread'::__l21::
           <lambda_1>::operator()<FName_const_&>'::__l2::_dynamic_atexit_destructor_for__Desc__);
    _Init_thread_footer(&_TSS0);
  }
  local_2f8._Myfirst._Val = &Desc;
  local_2f8._padding_ = (longlong)param_3;
  this = FRHIComputeCommandList::GetBreadcrumbAllocator((FRHIComputeCommandList *)param_1);
  pFVar6 = FRHIBreadcrumbAllocator::
           AllocBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<49,FName>,FName_const_&>
                     (this,&local_2f8);
  FRHIBreadcrumbScope::FRHIBreadcrumbScope(&local_2b8,(FRHIComputeCommandList *)param_1,pFVar6);
  local_2a8 = '\x01';
  plVar7 = (longlong *)(**(code **)(param_4->_padding_ + 0x10))(&param_4->_padding_);
  local_168.ColorRenderTargets.Elements[0].RenderTarget = (FRHITexture *)*plVar7;
  local_168.ColorRenderTargets.Elements[1].RenderTarget = (FRHITexture *)0x0;
  local_168.ColorRenderTargets.Elements[1].ResolveTarget = (FRHITexture *)0x0;
  local_168.ColorRenderTargets.Elements[1].ArraySlice = -1;
  local_168.ColorRenderTargets.Elements[1].MipIndex = '\0';
  local_168.ColorRenderTargets.Elements[1].Action = DontLoad_DontStore;
  local_168.ColorRenderTargets.Elements[2].RenderTarget = (FRHITexture *)0x0;
  local_168.ColorRenderTargets.Elements[2].ResolveTarget = (FRHITexture *)0x0;
  local_168.ColorRenderTargets.Elements[2].ArraySlice = -1;
  local_168.ColorRenderTargets.Elements[2].MipIndex = '\0';
  local_168.ColorRenderTargets.Elements[2].Action = DontLoad_DontStore;
  local_168.ColorRenderTargets.Elements[3].RenderTarget = (FRHITexture *)0x0;
  local_168.ColorRenderTargets.Elements[3].ResolveTarget = (FRHITexture *)0x0;
  local_168.ColorRenderTargets.Elements[3].ArraySlice = -1;
  local_168.ColorRenderTargets.Elements[3].MipIndex = '\0';
  local_168.ColorRenderTargets.Elements[3].Action = DontLoad_DontStore;
  local_168.ColorRenderTargets.Elements[4].RenderTarget = (FRHITexture *)0x0;
  local_168.ColorRenderTargets.Elements[4].ResolveTarget = (FRHITexture *)0x0;
  local_168.ColorRenderTargets.Elements[4].ArraySlice = -1;
  local_168.ColorRenderTargets.Elements[4].MipIndex = '\0';
  local_168.ColorRenderTargets.Elements[4].Action = DontLoad_DontStore;
  local_168.ColorRenderTargets.Elements[5].RenderTarget = (FRHITexture *)0x0;
  local_168.ColorRenderTargets.Elements[5].ResolveTarget = (FRHITexture *)0x0;
  local_168.ColorRenderTargets.Elements[5].ArraySlice = -1;
  local_168.ColorRenderTargets.Elements[5].MipIndex = '\0';
  local_168.ColorRenderTargets.Elements[5].Action = DontLoad_DontStore;
  local_168.ColorRenderTargets.Elements[6].RenderTarget = (FRHITexture *)0x0;
  local_168.ColorRenderTargets.Elements[6].ResolveTarget = (FRHITexture *)0x0;
  local_168.ColorRenderTargets.Elements[6].ArraySlice = -1;
  local_168.ColorRenderTargets.Elements[6].MipIndex = '\0';
  local_168.ColorRenderTargets.Elements[6].Action = DontLoad_DontStore;
  local_168.ColorRenderTargets.Elements[7].RenderTarget = (FRHITexture *)0x0;
  local_168.ColorRenderTargets.Elements[7].ResolveTarget = (FRHITexture *)0x0;
  local_168.ColorRenderTargets.Elements[7].ArraySlice = -1;
  local_168.ColorRenderTargets.Elements[7].MipIndex = '\0';
  local_168.ColorRenderTargets.Elements[7].Action = DontLoad_DontStore;
  local_168.DepthStencilRenderTarget.DepthStencilTarget = (FRHITexture *)0x0;
  local_168.DepthStencilRenderTarget.ResolveTarget = (FRHITexture *)0x0;
  local_168.DepthStencilRenderTarget.Action = DontLoad_DontStore;
  local_168.DepthStencilRenderTarget.ExclusiveDepthStencil.Value = DepthNop;
  local_168.ResolveRect.X1 = -1;
  local_168.ResolveRect.Y1 = -1;
  local_168.ResolveRect.X2 = -1;
  local_168.ResolveRect.Y2 = -1;
  local_168.ShadingRateTexture.Reference = (FRHITexture *)0x0;
  local_168.ShadingRateTextureCombiner = VRSRB_Passthrough;
  local_168.NopAccess = None;
  local_168.NumOcclusionQueries = 0;
  local_168.bOcclusionQueries = false;
  local_168.MultiViewCount = '\0';
  local_168.SubpassHint = None;
  if ((local_168.ColorRenderTargets.Elements[0].RenderTarget == (FRHITexture *)0x0) &&
     (bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("ColorRT",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                         ,0x14b0,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_168.ColorRenderTargets.Elements[0].ResolveTarget = (FRHITexture *)0x0;
  local_168.ColorRenderTargets.Elements[0].ArraySlice = -1;
  local_168.ColorRenderTargets.Elements[0].MipIndex = '\0';
  local_168.ColorRenderTargets.Elements[0].Action = Clear_Store;
  FRHICommandList::BeginRenderPass
            ((FRHICommandList *)param_1,&local_168,
             L"DrawUVDisplacementFromPrecomputedDisplacementMap");
  iVar5 = (**(code **)(param_4->_padding_ + 0x38))(param_4);
  local_358[0]._0_4_ = (**(code **)(param_4->_padding_ + 0x30))(param_4);
  fVar16 = (float)(int)local_358[0]._0_4_;
  local_358[0]._4_4_ = iVar5;
  if ((GRHICommandList.bLatchedBypass == false) || ((param_1->field_0x29b & 0x20) == 0)) {
    puVar15 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x28,8);
    *(int *)&param_1->field_0x60 = *(int *)&param_1->field_0x60 + 1;
    **(undefined8 **)&param_1->field_0x30 = puVar15;
    *(undefined8 **)&param_1->field_0x30 = puVar15 + 1;
    puVar15[1] = 0;
    *puVar15 = &___7FRHICommandSetViewport__6B_;
    *(float *)((longlong)puVar15 + 0x1c) = fVar16;
    *(float *)(puVar15 + 4) = (float)iVar5;
    puVar15[2] = 0;
    *(undefined4 *)(puVar15 + 3) = 0;
    *(undefined4 *)((longlong)puVar15 + 0x24) = 0x3f800000;
  }
  else {
    pIVar8 = FRHICommandListBase::GetContext((FRHICommandListBase *)param_1);
    pcVar2 = *(code **)(pIVar8->_padding_ + 0x1a0);
    (*pcVar2)(pIVar8,pcVar2,0,0);
  }
  this_00 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)param_5]);
  pFVar9 = (FShaderType *)FLensDistortionDisplacementMapGenerationVS::GetStaticType();
  FGlobalShaderMap::GetShader(this_00,&local_2e8,pFVar9,0);
  if ((FLensDistortionDisplacementMapGenerationShader *)local_2e8.ShaderContent ==
      (FLensDistortionDisplacementMapGenerationShader *)0x0) {
    FVar10 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_2a0);
    FName::ToString((FName *)FVar10,&local_290);
    FLensDistortionDisplacementMapGenerationVS::GetStaticType();
    bVar3 = FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_290.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_290.Data.AllocatorInstance.Data);
    }
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FLensDistortionDisplacementMapGenerationVS::GetStaticType();
  local_348.ShaderContent = (FLensDistortionDisplacementMapGenerationVS *)local_2e8.ShaderContent;
  local_348.ShaderMap = local_2e8.ShaderMap;
  pFVar9 = (FShaderType *)FLensDistortionDisplacementMapGenerationPS::GetStaticType();
  FGlobalShaderMap::GetShader(this_00,&local_2d8,pFVar9,0);
  if ((FLensDistortionDisplacementMapGenerationShader *)local_2d8.ShaderContent ==
      (FLensDistortionDisplacementMapGenerationShader *)0x0) {
    FVar10 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_298);
    FName::ToString((FName *)FVar10,&local_280);
    FLensDistortionDisplacementMapGenerationPS::GetStaticType();
    bVar3 = FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_280.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_280.Data.AllocatorInstance.Data);
    }
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FLensDistortionDisplacementMapGenerationPS::GetStaticType();
  local_2c8.ShaderContent = (FLensDistortionDisplacementMapGenerationPS *)local_2d8.ShaderContent;
  local_2c8.ShaderMap = local_2d8.ShaderMap;
  local_248.BoundShaderState.VertexDeclarationRHI = (FRHIVertexDeclaration *)0x0;
  local_248.BoundShaderState.VertexShaderRHI = (FRHIVertexShader *)0x0;
  local_248.BoundShaderState.PixelShaderRHI = (FRHIPixelShader *)0x0;
  local_248.BoundShaderState.MeshShaderRHI = (FRHIMeshShader *)0x0;
  local_248.BoundShaderState.AmplificationShaderRHI = (FRHIAmplificationShader *)0x0;
  local_248.BoundShaderState.GeometryShaderRHI = (FRHIGeometryShader *)0x0;
  local_248.BoundShaderState.WorkGraphMeshShaderRHI = (FRHIWorkGraphShader *)0x0;
  local_248.BlendState = (FRHIBlendState *)0x0;
  local_248.RasterizerState = (FRHIRasterizerState *)0x0;
  local_248.DepthStencilState = (FRHIDepthStencilState *)0x0;
  local_248.ImmutableSamplerState.ImmutableSamplers.Elements[0] = (FRHISamplerState *)0x0;
  local_248.ImmutableSamplerState.ImmutableSamplers.Elements[1] = (FRHISamplerState *)0x0;
  local_248.RenderTargetFlags.Elements[0] = None;
  local_248.RenderTargetFlags.Elements[1] = None;
  local_248.RenderTargetFlags.Elements[2] = None;
  local_248.RenderTargetFlags.Elements[3] = None;
  local_248.RenderTargetFlags.Elements[4] = None;
  local_248.RenderTargetFlags.Elements[5] = None;
  local_248.RenderTargetFlags.Elements[6] = None;
  local_248.RenderTargetFlags.Elements[7] = None;
  local_248.RenderTargetsEnabled = 0;
  local_248.RenderTargetFormats.Elements[0] = '\0';
  local_248.RenderTargetFormats.Elements[1] = '\0';
  local_248.RenderTargetFormats.Elements[2] = '\0';
  local_248.RenderTargetFormats.Elements[3] = '\0';
  local_248.RenderTargetFormats.Elements[4] = '\0';
  local_248.RenderTargetFormats.Elements[5] = '\0';
  local_248.RenderTargetFormats.Elements[6] = '\0';
  local_248.RenderTargetFormats.Elements[7] = '\0';
  local_248.DepthStencilTargetFormat = PF_Unknown;
  local_248.DepthStencilTargetFlag = None;
  local_248.DepthTargetLoadAction = ENoAction;
  local_248.DepthTargetStoreAction = ENoAction;
  local_248.StencilTargetLoadAction = ENoAction;
  local_248.StencilTargetStoreAction = ENoAction;
  local_248.DepthStencilAccess.Value = DepthNop;
  local_248.NumSamples = 0;
  local_248.SubpassHint = None;
  local_248.SubpassIndex = '\0';
  local_248.ConservativeRasterization = Disabled;
  local_248.bDepthBounds = false;
  local_248.MultiViewCount = '\0';
  local_248.bHasFragmentDensityAttachment = false;
  local_248.bAllowVariableRateShading = true;
  local_248.ShadingRate = VRSSR_1x1;
  local_248.field25_0xd2 = (FGraphicsPipelineStateInitializer_u_210)0x0;
  local_248.StatePrecachePSOHash = 0;
  FRHICommandList::ApplyCachedRenderTargets((FRHICommandList *)param_1,&local_248);
  local_248.DepthStencilState =
       TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
       ::StaticResource.StateRHI.Reference;
  local_248.BlendState =
       TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
       ::StaticResource.StateRHI.Reference;
  local_248.RasterizerState =
       TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
       ::StaticResource.StateRHI.Reference;
  local_248.PrimitiveType = PT_TriangleList;
  pTVar11 = GetVertexDeclarationFVector4();
  local_248.BoundShaderState.VertexDeclarationRHI = pTVar11->Reference;
  local_248.BoundShaderState.VertexShaderRHI =
       TShaderRefBase<FLensDistortionDisplacementMapGenerationVS,FShaderMapPointerTable>::
       GetVertexShader(&local_348,true);
  local_248.BoundShaderState.PixelShaderRHI =
       TShaderRefBase<FLensDistortionDisplacementMapGenerationPS,FShaderMapPointerTable>::
       GetPixelShader(&local_2c8,true);
  SetGraphicsPipelineState((FRHICommandList *)param_1,&local_248,0,CheckApply,true);
  pFVar12 = TShaderRefBase<FLensDistortionDisplacementMapGenerationVS,FShaderMapPointerTable>::
            GetVertexShader(&local_348,true);
  pFVar13 = FRHICommandListBase::GetScratchShaderParameters((FRHICommandListBase *)param_1);
  FLensDistortionDisplacementMapGenerationShader::SetParameters
            ((FLensDistortionDisplacementMapGenerationShader *)local_348.ShaderContent,pFVar13,
             param_2,(TIntPoint<int> *)&local_358[0]._s_0);
  FRHICommandList::SetBatchedShaderParameters
            ((FRHICommandList *)param_1,(FRHIGraphicsShader *)pFVar12,pFVar13);
  pFVar14 = TShaderRefBase<FLensDistortionDisplacementMapGenerationPS,FShaderMapPointerTable>::
            GetPixelShader(&local_2c8,true);
  pFVar13 = FRHICommandListBase::GetScratchShaderParameters((FRHICommandListBase *)param_1);
  FLensDistortionDisplacementMapGenerationShader::SetParameters
            ((FLensDistortionDisplacementMapGenerationShader *)local_2d8.ShaderContent,pFVar13,
             param_2,(TIntPoint<int> *)&local_358[0]._s_0);
  FRHICommandList::SetBatchedShaderParameters
            ((FRHICommandList *)param_1,(FRHIGraphicsShader *)pFVar14,pFVar13);
  if ((GRHICommandList.bLatchedBypass == false) || ((param_1->field_0x29b & 0x20) == 0)) {
    puVar15 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x20,8);
    *(int *)&param_1->field_0x60 = *(int *)&param_1->field_0x60 + 1;
    **(undefined8 **)&param_1->field_0x30 = puVar15;
    *(undefined8 **)&param_1->field_0x30 = puVar15 + 1;
    puVar15[1] = 0;
    *puVar15 = &___7FRHICommandDrawPrimitive__6B_;
    *(undefined4 *)(puVar15 + 2) = 0;
    *(undefined4 *)((longlong)puVar15 + 0x14) = 0x400;
    *(undefined4 *)(puVar15 + 3) = 1;
  }
  else {
    pIVar8 = FRHICommandListBase::GetContext((FRHICommandListBase *)param_1);
    (**(code **)(pIVar8->_padding_ + 0x1e0))(pIVar8,0,0x400,1);
  }
  if (((param_1->field_0x29b & 2) == 0) &&
     (bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("IsInsideRenderPass()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                         ,0x10c5,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (((param_1->field_0x29b & 4) != 0) &&
     (bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("!IsInsideComputePass()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                         ,0x10c6,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  bVar4 = param_1->field_0x29b;
  if ((bVar4 & 8) != 0) {
    (**(code **)(GDynamicRHI->_padding_ + 0x270))(GDynamicRHI,param_1,1);
    bVar4 = param_1->field_0x29b & 0xf7;
    param_1->field_0x29b = bVar4;
  }
  if ((GRHICommandList.bLatchedBypass == false) || ((bVar4 & 0x20) == 0)) {
    puVar15 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x10,8);
    *(int *)&param_1->field_0x60 = *(int *)&param_1->field_0x60 + 1;
    **(undefined8 **)&param_1->field_0x30 = puVar15;
    *(undefined8 **)&param_1->field_0x30 = puVar15 + 1;
    puVar15[1] = 0;
    *puVar15 = &___7FRHICommandEndRenderPass__6B_;
  }
  else {
    pIVar8 = FRHICommandListBase::GetContext((FRHICommandListBase *)param_1);
    (**(code **)(pIVar8->_padding_ + 0x250))(pIVar8);
  }
  param_1->field_0x29b = param_1->field_0x29b & 0xfd;
  *(undefined2 *)&param_1->field_0x298 = 0;
  pFVar1 = (FRHITexture *)param_4->_padding_;
  local_338._s_0.Z = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
  local_324 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
  local_318 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
  local_338._0_8_ = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
  local_32c = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
  local_320 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
  local_314 = 0;
  local_30c = 1;
  local_304 = 0;
  local_300 = 1;
  puVar15 = (undefined8 *)(**(code **)(param_4->_padding_ + 0x10))();
  TransitionAndCopyTexture
            ((FRHICommandList *)param_1,(FRHITexture *)*puVar15,pFVar1,
             (FRHICopyTextureInfo *)&local_338._s_0);
  if (local_168.ShadingRateTexture.Reference != (FRHITexture *)0x0) {
    FRHIResource::Release((FRHIResource *)local_168.ShadingRateTexture.Reference);
  }
  if (local_2a8 != '\0') {
    FRHIBreadcrumbScope::~FRHIBreadcrumbScope(&local_2b8);
  }
  return;
}

// EmptyLinkFunctionForGeneratedCodeOpenCVLensDistortionBlueprintLibrary @ 14d7c8b40

void __cdecl EmptyLinkFunctionForGeneratedCodeOpenCVLensDistortionBlueprintLibrary(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeOpenCVLensDistortionParameters @ 14d7c8b50

void __cdecl EmptyLinkFunctionForGeneratedCodeOpenCVLensDistortionParameters(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeOpenCVLensDistortion_init @ 14d7c8b60

void __cdecl EmptyLinkFunctionForGeneratedCodeOpenCVLensDistortion_init(void)

{
  return;
}

// Z_Construct_UClass_UOpenCVLensDistortionBlueprintLibrary_NoRegister @ 14d7c9ae0

UClass * __cdecl Z_Construct_UClass_UOpenCVLensDistortionBlueprintLibrary_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOpenCVLensDistortionBlueprintLibrary.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OpenCVLensDistortion",L"OpenCVLensDistortionBlueprintLibrary",
               &Z_Registration_Info_UClass_UOpenCVLensDistortionBlueprintLibrary.InnerSingleton,
               UOpenCVLensDistortionBlueprintLibrary::
               StaticRegisterNativesUOpenCVLensDistortionBlueprintLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UOpenCVLensDistortionBlueprintLibrary>,
               InternalVTableHelperCtorCaller<UOpenCVLensDistortionBlueprintLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOpenCVLensDistortionBlueprintLibrary.InnerSingleton;
}

// IMPLEMENT_MODULE_OpenCVLensDistortion @ 14d7ca170

void __cdecl IMPLEMENT_MODULE_OpenCVLensDistortion(void)

{
  return;
}

// ShaderTypeRegistration'' @ 150459f70

void __cdecl
`dynamic_atexit_destructor_for_'FLensDistortionDisplacementMapGenerationPS::ShaderTypeRegistration__
          (void)

{
  return;
}

// ShaderTypeRegistration'' @ 150459f80

void __cdecl
`dynamic_atexit_destructor_for_'FLensDistortionDisplacementMapGenerationVS::ShaderTypeRegistration__
          (void)

{
  return;
}

// StaticResource'' @ 150459f90

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
::StaticResource__(void)

{
  code *pcVar1;
  bool bVar2;
  
  TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
  ::StaticResource._padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticBlendState__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0A___V__TRefCountPtr_VFRHIBlendState____PEAVFRHIBlendState____6B_
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
             &TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
              ::StaticResource);
  if (TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
      ::StaticResource.StateRHI.Reference != (FRHIBlendState *)0x0) {
    FRHIResource::Release
              ((FRHIResource *)
               TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
               ::StaticResource.StateRHI.Reference);
  }
  FRenderResource::~FRenderResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
              ::StaticResource);
  return;
}

// StaticResource'' @ 15045a010

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
::StaticResource__(void)

{
  code *pcVar1;
  bool bVar2;
  
  TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
  ::StaticResource._padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticDepthStencilState__0A__06_0A__06_0A__0A__0A__0A__06_0A__0A__0A__0PP__0PP___V__TRefCountPtr_VFRHIDepthStencilState____PEAVFRHIDepthStencilState____6B_
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
             &TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
              ::StaticResource);
  if (TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
      ::StaticResource.StateRHI.Reference != (FRHIDepthStencilState *)0x0) {
    FRHIResource::Release
              ((FRHIResource *)
               TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
               ::StaticResource.StateRHI.Reference);
  }
  FRenderResource::~FRenderResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
              ::StaticResource);
  return;
}

// StaticResource'' @ 15045a090

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
::StaticResource__(void)

{
  code *pcVar1;
  bool bVar2;
  
  TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
  ::StaticResource._padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticRasterizerState__01_0A__0A__00__V__TRefCountPtr_VFRHIRasterizerState____PEAVFRHIRasterizerState____6B_
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
             &TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
              ::StaticResource);
  if (TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
      ::StaticResource.StateRHI.Reference != (FRHIRasterizerState *)0x0) {
    FRHIResource::Release
              ((FRHIResource *)
               TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
               ::StaticResource.StateRHI.Reference);
  }
  FRenderResource::~FRenderResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
              ::StaticResource);
  return;
}

// StaticResource'' @ 15045a110

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
::StaticResource__(void)

{
  code *pcVar1;
  bool bVar2;
  
  TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
  ::StaticResource._padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticSamplerState__00_00_00_00_0A__00_0A__0A___V__TRefCountPtr_VFRHISamplerState____PEAVFRHISamplerState____6B_
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
             &TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
              ::StaticResource);
  if (TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
      ::StaticResource.StateRHI.Reference != (FRHISamplerState *)0x0) {
    FRHIResource::Release
              ((FRHIResource *)
               TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
               ::StaticResource.StateRHI.Reference);
  }
  FRenderResource::~FRenderResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
              ::StaticResource);
  return;
}

// UnitVectors'' @ 15045a190

void __cdecl `dynamic_atexit_destructor_for_'FOpenCVHelper::UnitVectors__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = FOpenCVHelper::UnitVectors.AllocatorInstance.Data;
  if (FOpenCVHelper::UnitVectors.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (FOpenCVHelper::UnitVectors.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'Desc'' @ 15045a1b0

void __cdecl
``DrawUVDisplacementToRenderTargetFromPreComputedDisplacementMap_RenderThread'::__l21::<lambda_1>::
operator()<FName_const_&>'::__l2::_dynamic_atexit_destructor_for__Desc__(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015045a1b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
  return;
}

// `dynamic_atexit_destructor_for_'LogOpenCVLensDistortion'' @ 15045a1d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogOpenCVLensDistortion__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogOpenCVLensDistortion);
  return;
}

// `dynamic_atexit_destructor_for_'StaticType'' @ 15045a1f0

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
`FLensDistortionDisplacementMapGenerationPS::GetStaticType'::__l2::
_dynamic_atexit_destructor_for__StaticType__(void)

{
  FShaderType::~FShaderType((FShaderType *)&::StaticType);
  return;
}

// `dynamic_atexit_destructor_for_'StaticType'' @ 15045a210

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
`FLensDistortionDisplacementMapGenerationVS::GetStaticType'::__l2::
_dynamic_atexit_destructor_for__StaticType__(void)

{
  FShaderType::~FShaderType((FShaderType *)&::StaticType);
  return;
}

