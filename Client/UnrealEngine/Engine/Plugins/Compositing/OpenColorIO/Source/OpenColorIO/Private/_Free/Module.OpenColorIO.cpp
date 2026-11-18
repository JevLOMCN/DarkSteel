// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenColorIO
// Functions: 157

// AllOpenColorIOShaderMaps'' @ 1413dc630

void __cdecl `dynamic_initializer_for_'FOpenColorIOShaderMap::AllOpenColorIOShaderMaps__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FOpenColorIOShaderMap::AllOpenColorIOShaderMaps__);
  return;
}

// GIdToOpenColorIOShaderMap'' @ 1413dc650

void __cdecl `dynamic_initializer_for_'FOpenColorIOShaderMap::GIdToOpenColorIOShaderMap__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FOpenColorIOShaderMap::GIdToOpenColorIOShaderMap__);
  return;
}

// ShaderTypeRegistration'' @ 1413dc670

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
`dynamic_initializer_for_'FOpenColorIOInvalidPixelShader::ShaderTypeRegistration__(void)

{
  code *local_18;
  code *local_10;
  
  local_10 = FOpenColorIOInvalidPixelShader::GetStaticType;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<FGlobalShaderType_&___cdecl(void),FShaderType_&>::Call;
  FShaderTypeRegistration::FShaderTypeRegistration
            (&FOpenColorIOInvalidPixelShader::ShaderTypeRegistration,
             (TFunctionRef<FShaderType_&___cdecl(void)> *)&local_18);
  atexit(`dynamic_atexit_destructor_for_'FOpenColorIOInvalidPixelShader::ShaderTypeRegistration__);
  return;
}

// ShaderTypeRegistration'' @ 1413dc6c0

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

void __cdecl `dynamic_initializer_for_'FOpenColorIOPixelShader::ShaderTypeRegistration__(void)

{
  code *local_18;
  code *local_10;
  
  local_10 = FOpenColorIOPixelShader::GetStaticType;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<FOpenColorIOShaderType_&___cdecl(void),FShaderType_&>::Call;
  FShaderTypeRegistration::FShaderTypeRegistration
            (&FOpenColorIOPixelShader::ShaderTypeRegistration,
             (TFunctionRef<FShaderType_&___cdecl(void)> *)&local_18);
  atexit(`dynamic_atexit_destructor_for_'FOpenColorIOPixelShader::ShaderTypeRegistration__);
  return;
}

// StaticResource'' @ 1413dc710

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

// StaticResource'' @ 1413dc7d0

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

// StaticResource'' @ 1413dc890

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

// `dynamic_initializer_for_'CVarOpenColorIOAllowAsyncCompilation'' @ 1413dc950

void __cdecl _dynamic_initializer_for__CVarOpenColorIOAllowAsyncCompilation__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = true;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarOpenColorIOAllowAsyncCompilation,L"OpenColorIO.AllowAsyncCompilation",local_res8,
             L"When enabled, we enforce synchronous shader compilation.",0);
  atexit(_dynamic_atexit_destructor_for__CVarOpenColorIOAllowAsyncCompilation__);
  return;
}

// `dynamic_initializer_for_'CVarShowOpenColorIONoShaderDDC'' @ 1413dc9a0

void __cdecl _dynamic_initializer_for__CVarShowOpenColorIONoShaderDDC__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = false;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarShowOpenColorIONoShaderDDC,L"OpenColorIO.NoShaderDDC",local_res8,
             L"When enabled, we don\'t check the DDC for compiled shaders to simulate a cold DDC.",0
            );
  atexit(_dynamic_atexit_destructor_for__CVarShowOpenColorIONoShaderDDC__);
  return;
}

// `dynamic_initializer_for_'DelayedAutoRegisterHelper266'' @ 1413dc9f0

void __cdecl _dynamic_initializer_for__DelayedAutoRegisterHelper266__(void)

{
  code *local_38 [2];
  undefined **local_28;
  code *local_20;
  undefined8 local_10;
  
  local_10 = 0;
  local_28 = &___7__TFunction_OwnedObject_P6AXXZ_0A__0A__Function_Private_Core_UE__6B_;
  local_20 = <lambda_24>::<lambda_invoker_cdecl>;
  local_38[0] = UE::Core::Private::Function::TFunctionRefCaller<void_(__cdecl*)(void),void>::Call;
  FDelayedAutoRegisterHelper::FDelayedAutoRegisterHelper
            (&DelayedAutoRegisterHelper266,ShaderTypesReady,
             (TFunction<void___cdecl(void)> *)local_38,false);
  return;
}

// `dynamic_initializer_for_'DelayedAutoRegisterHelper267'' @ 1413dca50

void __cdecl _dynamic_initializer_for__DelayedAutoRegisterHelper267__(void)

{
  code *local_38 [2];
  undefined **local_28;
  code *local_20;
  undefined8 local_10;
  
  local_10 = 0;
  local_28 = &___7__TFunction_OwnedObject_P6AXXZ_0A__0A__Function_Private_Core_UE__6B_;
  local_20 = <lambda_25>::<lambda_invoker_cdecl>;
  local_38[0] = UE::Core::Private::Function::TFunctionRefCaller<void_(__cdecl*)(void),void>::Call;
  FDelayedAutoRegisterHelper::FDelayedAutoRegisterHelper
            (&DelayedAutoRegisterHelper267,ShaderTypesReady,
             (TFunction<void___cdecl(void)> *)local_38,false);
  return;
}

// `dynamic_initializer_for_'DelayedAutoRegisterHelper268'' @ 1413dcab0

void __cdecl _dynamic_initializer_for__DelayedAutoRegisterHelper268__(void)

{
  code *local_38 [2];
  undefined **local_28;
  code *local_20;
  undefined8 local_10;
  
  local_10 = 0;
  local_28 = &___7__TFunction_OwnedObject_P6AXXZ_0A__0A__Function_Private_Core_UE__6B_;
  local_20 = <lambda_26>::<lambda_invoker_cdecl>;
  local_38[0] = UE::Core::Private::Function::TFunctionRefCaller<void_(__cdecl*)(void),void>::Call;
  FDelayedAutoRegisterHelper::FDelayedAutoRegisterHelper
            (&DelayedAutoRegisterHelper268,ShaderTypesReady,
             (TFunction<void___cdecl(void)> *)local_38,false);
  return;
}

// `dynamic_initializer_for_'LogOpenColorIO'' @ 1413dcb10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogOpenColorIO__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogOpenColorIO,L"LogOpenColorIO",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogOpenColorIO__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantOpenColorIO'' @ 1413dcb50

void __cdecl _dynamic_initializer_for__ModuleRegistrantOpenColorIO__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "OpenColorIO";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"OpenColorIO",0xb);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FOpenColorIOModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIO_Public_OpenColorIOBlueprintLibrary_h__Script_OpenColorIO_1988494937'' @ 1413dcba0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIO_Public_OpenColorIOBlueprintLibrary_h__Script_OpenColorIO_1988494937__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/OpenColorIO",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIO_Public_OpenColorIOBlueprintLibrary_h__Script_OpenColorIO_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIO_Public_OpenColorIOColorSpace_h__Script_OpenColorIO_2595306718'' @ 1413dcbe0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIO_Public_OpenColorIOColorSpace_h__Script_OpenColorIO_2595306718__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/OpenColorIO",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIO_Public_OpenColorIOColorSpace_h__Script_OpenColorIO_Statics
             ::ScriptStructInfo,4,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIO_Public_OpenColorIOColorSpace_h__Script_OpenColorIO_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIO_Public_OpenColorIOColorTransform_h__Script_OpenColorIO_490260155'' @ 1413dcc30

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIO_Public_OpenColorIOColorTransform_h__Script_OpenColorIO_490260155__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/OpenColorIO",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIO_Public_OpenColorIOColorTransform_h__Script_OpenColorIO_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIO_Public_OpenColorIOConfiguration_h__Script_OpenColorIO_401952519'' @ 1413dcc70

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIO_Public_OpenColorIOConfiguration_h__Script_OpenColorIO_401952519__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/OpenColorIO",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIO_Public_OpenColorIOConfiguration_h__Script_OpenColorIO_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIO_Public_OpenColorIODisplayExtensionWrapper_h__Script_OpenColorIO_1154126143'' @ 1413dccb0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIO_Public_OpenColorIODisplayExtensionWrapper_h__Script_OpenColorIO_1154126143__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/OpenColorIO",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIO_Public_OpenColorIODisplayExtensionWrapper_h__Script_OpenColorIO_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIO_Public_OpenColorIOSettings_h__Script_OpenColorIO_154869243'' @ 1413dccf0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIO_Public_OpenColorIOSettings_h__Script_OpenColorIO_154869243__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/OpenColorIO",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIO_Public_OpenColorIOSettings_h__Script_OpenColorIO_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_OpenColorIO'' @ 1413dcd30

void __cdecl _dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_OpenColorIO__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0x75d254dd;
  local_res8[0].DeclarationsHash = 0xef426992;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_OpenColorIO,L"/Script/OpenColorIO",
             &Z_Registration_Info_UPackage__Script_OpenColorIO,local_res8);
  return;
}

// Z_Construct_UClass_UOpenColorIOColorTransform_NoRegister @ 14d7642c0

UClass * __cdecl Z_Construct_UClass_UOpenColorIOColorTransform_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOpenColorIOColorTransform.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OpenColorIO",L"OpenColorIOColorTransform",
               &Z_Registration_Info_UClass_UOpenColorIOColorTransform.InnerSingleton,
               UOpenColorIOColorTransform::StaticRegisterNativesUOpenColorIOColorTransform,200,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UOpenColorIOColorTransform>,
               InternalVTableHelperCtorCaller<UOpenColorIOColorTransform>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOpenColorIOColorTransform.InnerSingleton;
}

// Z_Construct_UClass_UOpenColorIODisplayExtensionWrapper_NoRegister @ 14d764420

UClass * __cdecl Z_Construct_UClass_UOpenColorIODisplayExtensionWrapper_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOpenColorIODisplayExtensionWrapper.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OpenColorIO",L"OpenColorIODisplayExtensionWrapper",
               &Z_Registration_Info_UClass_UOpenColorIODisplayExtensionWrapper.InnerSingleton,
               UOpenColorIODisplayExtensionWrapper::
               StaticRegisterNativesUOpenColorIODisplayExtensionWrapper,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UOpenColorIODisplayExtensionWrapper>,
               InternalVTableHelperCtorCaller<UOpenColorIODisplayExtensionWrapper>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOpenColorIODisplayExtensionWrapper.InnerSingleton;
}

// Z_Construct_UPackage__Script_OpenColorIO @ 14d764580

UPackage * __cdecl Z_Construct_UPackage__Script_OpenColorIO(void)

{
  if (Z_Registration_Info_UPackage__Script_OpenColorIO.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_OpenColorIO.OuterSingleton,&PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_OpenColorIO.OuterSingleton;
}

// Z_Construct_UClass_UOpenColorIOSettings @ 14d764600

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UOpenColorIOSettings(void)

{
  if (Z_Registration_Info_UClass_UOpenColorIOSettings.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UOpenColorIOSettings.OuterSingleton,
               &Z_Construct_UClass_UOpenColorIOSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UOpenColorIOSettings.OuterSingleton;
}

// NewProp_bUseLegacyProcessor_SetBit @ 14d764640

void __cdecl
Z_Construct_UClass_UOpenColorIOSettings_Statics::NewProp_bUseLegacyProcessor_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x38) = *(byte *)((longlong)param_1 + 0x38) | 1;
  return;
}

// NewProp_bUse32fLUT_SetBit @ 14d764650

void __cdecl
Z_Construct_UClass_UOpenColorIOSettings_Statics::NewProp_bUse32fLUT_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x38) = *(byte *)((longlong)param_1 + 0x38) | 2;
  return;
}

// NewProp_bSupportInverseViewTransforms_SetBit @ 14d764660

void __cdecl
Z_Construct_UClass_UOpenColorIOSettings_Statics::NewProp_bSupportInverseViewTransforms_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x38) = *(byte *)((longlong)param_1 + 0x38) | 4;
  return;
}

// Z_Construct_UClass_UOpenColorIOColorTransform @ 14d7647f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UOpenColorIOColorTransform(void)

{
  if (Z_Registration_Info_UClass_UOpenColorIOColorTransform.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UOpenColorIOColorTransform.OuterSingleton,
               &Z_Construct_UClass_UOpenColorIOColorTransform_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UOpenColorIOColorTransform.OuterSingleton;
}

// NewProp_bIsDisplayViewType_SetBit @ 14d764830

void __cdecl
Z_Construct_UClass_UOpenColorIOColorTransform_Statics::NewProp_bIsDisplayViewType_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// Z_Construct_UClass_UOpenColorIOConfiguration @ 14d764840

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UOpenColorIOConfiguration(void)

{
  if (Z_Registration_Info_UClass_UOpenColorIOConfiguration.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UOpenColorIOConfiguration.OuterSingleton,
               &Z_Construct_UClass_UOpenColorIOConfiguration_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UOpenColorIOConfiguration.OuterSingleton;
}

// NewProp_bForce_SetBit @ 14d764880

void __cdecl
Z_Construct_UFunction_UOpenColorIOConfiguration_ReloadExistingColorspaces_Statics::
NewProp_bForce_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UOpenColorIOConfiguration_ReloadExistingColorspaces @ 14d764890

UFunction * __cdecl Z_Construct_UFunction_UOpenColorIOConfiguration_ReloadExistingColorspaces(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UOpenColorIOConfiguration_ReloadExistingColorspaces_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UOpenColorIOBlueprintLibrary @ 14d7648d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UOpenColorIOBlueprintLibrary(void)

{
  if (Z_Registration_Info_UClass_UOpenColorIOBlueprintLibrary.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UOpenColorIOBlueprintLibrary.OuterSingleton,
               &Z_Construct_UClass_UOpenColorIOBlueprintLibrary_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UOpenColorIOBlueprintLibrary.OuterSingleton;
}

// Z_Construct_UScriptStruct_FOpenColorIOColorConversionSettings @ 14d764910

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FOpenColorIOColorConversionSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FOpenColorIOColorConversionSettings.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FOpenColorIOColorConversionSettings.InnerSingleton
               ,&Z_Construct_UScriptStruct_FOpenColorIOColorConversionSettings_Statics::StructParams
              );
  }
  if (Z_Registration_Info_UScriptStruct_FOpenColorIOColorConversionSettings.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FOpenColorIOColorConversionSettings.InnerSingleton;
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

// NewProp_ReturnValue_SetBit @ 14d764990

void __cdecl
Z_Construct_UFunction_UOpenColorIOBlueprintLibrary_ApplyColorSpaceTransform_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xb8) = 1;
  return;
}

// Z_Construct_UFunction_UOpenColorIOBlueprintLibrary_ApplyColorSpaceTransform @ 14d7649a0

UFunction * __cdecl
Z_Construct_UFunction_UOpenColorIOBlueprintLibrary_ApplyColorSpaceTransform(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UOpenColorIOBlueprintLibrary_ApplyColorSpaceTransform_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UOpenColorIOConfiguration_NoRegister @ 14d764c30

UClass * __cdecl Z_Construct_UClass_UOpenColorIOConfiguration_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOpenColorIOConfiguration.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OpenColorIO",L"OpenColorIOConfiguration",
               &Z_Registration_Info_UClass_UOpenColorIOConfiguration.InnerSingleton,
               UOpenColorIOConfiguration::StaticRegisterNativesUOpenColorIOConfiguration,0xf8,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UOpenColorIOConfiguration>,
               InternalVTableHelperCtorCaller<UOpenColorIOConfiguration>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOpenColorIOConfiguration.InnerSingleton;
}

// Z_Construct_UEnum_OpenColorIO_EOpenColorIOViewTransformDirection @ 14d765190

UEnum * __cdecl Z_Construct_UEnum_OpenColorIO_EOpenColorIOViewTransformDirection(void)

{
  if (Z_Registration_Info_UEnum_EOpenColorIOViewTransformDirection.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EOpenColorIOViewTransformDirection.InnerSingleton,
               &Z_Construct_UEnum_OpenColorIO_EOpenColorIOViewTransformDirection_Statics::EnumParams
              );
  }
  return Z_Registration_Info_UEnum_EOpenColorIOViewTransformDirection.InnerSingleton;
}

// Z_Construct_UScriptStruct_FOpenColorIOColorSpace @ 14d7651d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FOpenColorIOColorSpace(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FOpenColorIOColorSpace.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FOpenColorIOColorSpace.InnerSingleton,
               &Z_Construct_UScriptStruct_FOpenColorIOColorSpace_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FOpenColorIOColorSpace.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FOpenColorIOColorSpace.InnerSingleton;
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

// Z_Construct_UScriptStruct_FOpenColorIODisplayConfiguration @ 14d765250

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FOpenColorIODisplayConfiguration(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FOpenColorIODisplayConfiguration.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FOpenColorIODisplayConfiguration.InnerSingleton,
               &Z_Construct_UScriptStruct_FOpenColorIODisplayConfiguration_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FOpenColorIODisplayConfiguration.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FOpenColorIODisplayConfiguration.InnerSingleton;
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

// Z_Construct_UScriptStruct_FOpenColorIODisplayView @ 14d7652d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FOpenColorIODisplayView(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FOpenColorIODisplayView.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FOpenColorIODisplayView.InnerSingleton,
               &Z_Construct_UScriptStruct_FOpenColorIODisplayView_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FOpenColorIODisplayView.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FOpenColorIODisplayView.InnerSingleton;
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

// NewStructOps @ 14d765350

void * __cdecl Z_Construct_UScriptStruct_FOpenColorIOColorSpace_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FOpenColorIOColorSpace,&UE::CoreUObject::Private::Construct<FOpenColorIOColorSpace>,&UE::CoreUObject::Private::ConstructForTests<FOpenColorIOColorSpace>,&UE::CoreUObject::Private::Destruct<FOpenColorIOColorSpace>,&UE::CoreUObject::Private::Copy<FOpenColorIOColorSpace>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UOpenColorIODisplayExtensionWrapper @ 14d765390

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UOpenColorIODisplayExtensionWrapper(void)

{
  if (Z_Registration_Info_UClass_UOpenColorIODisplayExtensionWrapper.OuterSingleton == (UClass *)0x0
     ) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UOpenColorIODisplayExtensionWrapper.OuterSingleton,
               &Z_Construct_UClass_UOpenColorIODisplayExtensionWrapper_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UOpenColorIODisplayExtensionWrapper.OuterSingleton;
}

// Z_Construct_UFunction_UOpenColorIODisplayExtensionWrapper_CreateInGameOpenColorIODisplayExtension @ 14d7653d0

UFunction * __cdecl
Z_Construct_UFunction_UOpenColorIODisplayExtensionWrapper_CreateInGameOpenColorIODisplayExtension
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UOpenColorIODisplayExtensionWrapper_CreateInGameOpenColorIODisplayExtension_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UOpenColorIODisplayExtensionWrapper_CreateOpenColorIODisplayExtension @ 14d765410

UFunction * __cdecl
Z_Construct_UFunction_UOpenColorIODisplayExtensionWrapper_CreateOpenColorIODisplayExtension(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UOpenColorIODisplayExtensionWrapper_CreateOpenColorIODisplayExtension_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// EOpenColorIOViewTransformDirection_StaticEnum @ 14d765450

UEnum * __cdecl EOpenColorIOViewTransformDirection_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EOpenColorIOViewTransformDirection.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_OpenColorIO();
    Z_Registration_Info_UEnum_EOpenColorIOViewTransformDirection.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_OpenColorIO_EOpenColorIOViewTransformDirection,
                       (UObject *)pUVar1,L"EOpenColorIOViewTransformDirection");
  }
  return Z_Registration_Info_UEnum_EOpenColorIOViewTransformDirection.OuterSingleton;
}

// Z_Construct_UFunction_UOpenColorIODisplayExtensionWrapper_GetOpenColorIOConfiguration @ 14d765490

UFunction * __cdecl
Z_Construct_UFunction_UOpenColorIODisplayExtensionWrapper_GetOpenColorIOConfiguration(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UOpenColorIODisplayExtensionWrapper_GetOpenColorIOConfiguration_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14d7654d0

void * __cdecl Z_Construct_UScriptStruct_FOpenColorIODisplayView_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FOpenColorIODisplayView,&UE::CoreUObject::Private::Construct<FOpenColorIODisplayView>,&UE::CoreUObject::Private::ConstructForTests<FOpenColorIODisplayView>,&UE::CoreUObject::Private::Destruct<FOpenColorIODisplayView>,&UE::CoreUObject::Private::Copy<FOpenColorIODisplayView>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UOpenColorIODisplayExtensionWrapper_RemoveSceneExtension @ 14d765510

UFunction * __cdecl
Z_Construct_UFunction_UOpenColorIODisplayExtensionWrapper_RemoveSceneExtension(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UOpenColorIODisplayExtensionWrapper_RemoveSceneExtension_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UOpenColorIODisplayExtensionWrapper_SetOpenColorIOConfiguration @ 14d765550

UFunction * __cdecl
Z_Construct_UFunction_UOpenColorIODisplayExtensionWrapper_SetOpenColorIOConfiguration(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UOpenColorIODisplayExtensionWrapper_SetOpenColorIOConfiguration_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14d765590

void * __cdecl
Z_Construct_UScriptStruct_FOpenColorIOColorConversionSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xa0;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FOpenColorIOColorConversionSettings,&UE::CoreUObject::Private::Construct<FOpenColorIOColorConversionSettings>,&UE::CoreUObject::Private::ConstructForTests<FOpenColorIOColorConversionSettings>,&UE::CoreUObject::Private::Destruct<FOpenColorIOColorConversionSettings>,&UE::CoreUObject::Private::PostSerialize<FOpenColorIOColorConversionSettings>,&UE::CoreUObject::Private::Copy<FOpenColorIOColorConversionSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UOpenColorIODisplayExtensionWrapper_SetSceneExtensionIsActiveFunction @ 14d7655d0

UFunction * __cdecl
Z_Construct_UFunction_UOpenColorIODisplayExtensionWrapper_SetSceneExtensionIsActiveFunction(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UOpenColorIODisplayExtensionWrapper_SetSceneExtensionIsActiveFunction_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UOpenColorIODisplayExtensionWrapper_SetSceneExtensionIsActiveFunctions @ 14d7656a0

UFunction * __cdecl
Z_Construct_UFunction_UOpenColorIODisplayExtensionWrapper_SetSceneExtensionIsActiveFunctions(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UOpenColorIODisplayExtensionWrapper_SetSceneExtensionIsActiveFunctions_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bIsEnabled_SetBit @ 14d7656e0

void __cdecl
Z_Construct_UScriptStruct_FOpenColorIODisplayConfiguration_Statics::NewProp_bIsEnabled_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewStructOps @ 14d7656f0

void * __cdecl
Z_Construct_UScriptStruct_FOpenColorIODisplayConfiguration_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xa8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FOpenColorIODisplayConfiguration,&UE::CoreUObject::Private::Construct<FOpenColorIODisplayConfiguration>,&UE::CoreUObject::Private::ConstructForTests<FOpenColorIODisplayConfiguration>,&UE::CoreUObject::Private::Destruct<FOpenColorIODisplayConfiguration>,&UE::CoreUObject::Private::SerializeArchive<FOpenColorIODisplayConfiguration>,&UE::CoreUObject::Private::PostSerialize<FOpenColorIODisplayConfiguration>,&UE::CoreUObject::Private::Copy<FOpenColorIODisplayConfiguration>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// <lambda_invoker_cdecl> @ 14d7658a0

void __cdecl <lambda_24>::<lambda_invoker_cdecl>(void)

{
  FTypeLayoutDesc *pFVar1;
  
  pFVar1 = FOpenColorIOCompilationOutput::StaticGetTypeLayout();
  FTypeLayoutDesc::Register(pFVar1);
  return;
}

// <lambda_invoker_cdecl> @ 14d7658c0

void __cdecl <lambda_25>::<lambda_invoker_cdecl>(void)

{
  FTypeLayoutDesc *pFVar1;
  
  pFVar1 = FOpenColorIOShaderMapId::StaticGetTypeLayout();
  FTypeLayoutDesc::Register(pFVar1);
  return;
}

// <lambda_invoker_cdecl> @ 14d7658e0

void __cdecl <lambda_26>::<lambda_invoker_cdecl>(void)

{
  FTypeLayoutDesc *pFVar1;
  
  pFVar1 = FOpenColorIOShaderMapContent::StaticGetTypeLayout();
  FTypeLayoutDesc::Register(pFVar1);
  return;
}

// AddPass<FOpenColorIOInvalidShaderParameters,`AddDrawScreenPass<FOpenColorIOInvalidPixelShader>'::__l2::<lambda_1>_> @ 14d765a00

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGPass * __thiscall
FRDGBuilder::
AddPass<FOpenColorIOInvalidShaderParameters,_AddDrawScreenPass<FOpenColorIOInvalidPixelShader>_::__l2::<lambda_1>_>
          (FRDGBuilder *this,FRDGEventName *param_1,FOpenColorIOInvalidShaderParameters *param_2,
          ERDGPassFlags param_3,<lambda_1> *param_4)

{
  FShaderParametersMetadata *pFVar1;
  FRDGPass *pFVar2;
  
  pFVar1 = FOpenColorIOInvalidShaderParameters::FTypeInfo::GetStructMetadata();
  pFVar2 = AddPassInternal<FOpenColorIOInvalidShaderParameters,_AddDrawScreenPass<FOpenColorIOInvalidPixelShader>_::__l2::<lambda_1>_>
                     (this,param_1,pFVar1,param_2,param_3,param_4);
  return pFVar2;
}

// AddPassInternal<FOpenColorIOInvalidShaderParameters,`AddDrawScreenPass<FOpenColorIOInvalidPixelShader>'::__l2::<lambda_1>_> @ 14d765a70

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGPass * __thiscall
FRDGBuilder::
AddPassInternal<FOpenColorIOInvalidShaderParameters,_AddDrawScreenPass<FOpenColorIOInvalidPixelShader>_::__l2::<lambda_1>_>
          (FRDGBuilder *this,FRDGEventName *param_1,FShaderParametersMetadata *param_2,
          FOpenColorIOInvalidShaderParameters *param_3,ERDGPassFlags param_4,<lambda_1> *param_5)

{
  int *piVar1;
  undefined8 uVar2;
  code *pcVar3;
  FScriptContainerElement *pFVar4;
  undefined8 uVar5;
  bool bVar6;
  ERDGPassFlags EVar7;
  int iVar8;
  wchar_t *pwVar9;
  FRDGPass *pFVar10;
  FRDGParameterStruct local_38;
  
  FRDGUserValidation::ValidateAddPass(&this->UserValidation,param_3,param_2,param_1,param_4);
  FlushAccessModeQueue(this);
  pwVar9 = FRDGEventName::GetTCHAR(param_1);
  EVar7 = OverridePassFlags(this,pwVar9,param_4);
  pFVar10 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,0x228,8);
  local_38.Contents = (uchar *)param_3;
  if ((param_2->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      pFVar10 = (FRDGPass *)(*pcVar3)();
      return pFVar10;
    }
  }
  local_38.Layout.Reference = (param_2->Layout).Reference;
  if (local_38.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_38.Layout.Reference);
  }
  local_38.Metadata = param_2;
  FRDGPass::FRDGPass(pFVar10,param_1,&local_38,EVar7,Async);
  pFVar10->_padding_ =
       (longlong)
       &
       ___7__TRDGLambdaPass_VFOpenColorIOInvalidShaderParameters__V<lambda_1>__1____AddDrawScreenPass_VFOpenColorIOInvalidPixelShader____YAXAEAVFRDGBuilder____QEAVFRDGEventName__UFScreenPassViewInfo__AEBVFScreenPassTextureViewport__3AEBV__TShaderRefBase_VFShader__VFShaderMapPointerTable____AEBV__TShaderRefBase_VFOpenColorIOInvalidPixelShader__VFShaderMapPointerTable____PEAVFRHIBlendState__PEAVFRHIDepthStencilState__PEAV1_W4EScreenPassDrawFlags___Z___6B_
  ;
  pFVar4 = *(FScriptContainerElement **)(param_5 + 8);
  pFVar10[1]._padding_ = *(longlong *)param_5;
  pFVar10[1].FullPathIfDebug.Data.AllocatorInstance.Data = pFVar4;
  uVar2 = *(undefined8 *)(param_5 + 0x10);
  pFVar10[1].FullPathIfDebug.Data.ArrayNum = (int)uVar2;
  pFVar10[1].FullPathIfDebug.Data.ArrayMax = (int)((ulonglong)uVar2 >> 0x20);
  pFVar10[1].Name.EventFormat = *(wchar_t **)(param_5 + 0x18);
  pFVar10[1].Name.FormattedEventName.Data.AllocatorInstance.Data =
       *(FScriptContainerElement **)(param_5 + 0x20);
  uVar2 = *(undefined8 *)(param_5 + 0x28);
  pFVar10[1].Name.FormattedEventName.Data.ArrayNum = (int)uVar2;
  pFVar10[1].Name.FormattedEventName.Data.ArrayMax = (int)((ulonglong)uVar2 >> 0x20);
  pFVar10[1].ParameterStruct.Contents = *(uchar **)(param_5 + 0x30);
  pFVar10[1].ParameterStruct.Layout.Reference = *(FRHIUniformBufferLayout **)(param_5 + 0x38);
  uVar2 = *(undefined8 *)(param_5 + 0x48);
  pFVar10[1].ParameterStruct.Metadata = *(FShaderParametersMetadata **)(param_5 + 0x40);
  pFVar10[1].Flags = (short)uVar2;
  pFVar10[1].TaskMode = (char)((ulonglong)uVar2 >> 0x10);
  pFVar10[1].Pipeline = (char)((ulonglong)uVar2 >> 0x18);
  pFVar10[1].Handle = (TRDGHandle<FRDGPass,unsigned_int>)(int)((ulonglong)uVar2 >> 0x20);
  uVar2 = *(undefined8 *)(param_5 + 0x50);
  uVar5 = *(undefined8 *)(param_5 + 0x58);
  pFVar10[1].Workload = (int)uVar2;
  pFVar10[1].field9_0x54 = (FRDGPass_u_84)(short)((ulonglong)uVar2 >> 0x20);
  pFVar10[1].field10_0x56 = (FRDGPass_u_86)(char)((ulonglong)uVar2 >> 0x30);
  pFVar10[1].field11_0x57 = (FRDGPass_u_87)(char)((ulonglong)uVar2 >> 0x38);
  pFVar10[1].CrossPipelineProducer = (TRDGHandle<FRDGPass,unsigned_int>)(int)uVar5;
  pFVar10[1].GraphicsForkPass = (TRDGHandle<FRDGPass,unsigned_int>)(int)((ulonglong)uVar5 >> 0x20);
  uVar2 = *(undefined8 *)(param_5 + 0x60);
  uVar5 = *(undefined8 *)(param_5 + 0x68);
  pFVar10[1].GraphicsJoinPass = (TRDGHandle<FRDGPass,unsigned_int>)(int)uVar2;
  pFVar10[1].PrologueBarrierPass =
       (TRDGHandle<FRDGPass,unsigned_int>)(int)((ulonglong)uVar2 >> 0x20);
  pFVar10[1].EpilogueBarrierPass = (TRDGHandle<FRDGPass,unsigned_int>)(int)uVar5;
  pFVar10[1].NumTransitionsToReserve = (int)((ulonglong)uVar5 >> 0x20);
  uVar2 = *(undefined8 *)(param_5 + 0x78);
  pFVar10[1].CrossPipelineConsumers.AllocatorInstance.Data =
       *(TRDGHandle<FRDGPass,unsigned_int> **)(param_5 + 0x70);
  pFVar10[1].CrossPipelineConsumers.ArrayNum = (int)uVar2;
  pFVar10[1].CrossPipelineConsumers.ArrayMax = (int)((ulonglong)uVar2 >> 0x20);
  uVar2 = *(undefined8 *)(param_5 + 0x88);
  pFVar10[1].Producers.AllocatorInstance.Data = *(FRDGPass ***)(param_5 + 0x80);
  pFVar10[1].Producers.ArrayNum = (int)uVar2;
  pFVar10[1].Producers.ArrayMax = (int)((ulonglong)uVar2 >> 0x20);
  pFVar10[1].TextureStates.AllocatorInstance.Data = *(FTextureState **)(param_5 + 0x90);
  *(<lambda_1> *)&pFVar10[1].TextureStates.ArrayNum = param_5[0x98];
  pFVar10[1].BufferStates.AllocatorInstance.Data = (FBufferState *)param_3;
  ClobberPassOutputs(this,pFVar10);
  iVar8 = (this->Passes).Array.ArrayNum;
  piVar1 = &(this->Passes).Array.ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                      (0x808,(ForElementType<FRDGPass_*> *)&this->Passes,piVar1);
  }
  (this->Passes).Array.ArrayNum = iVar8 + 1;
  (this->Passes).Array.AllocatorInstance.Data[iVar8] = pFVar10;
  (pFVar10->Handle).Index = (this->Passes).Array.ArrayNum - 1;
  SetupParameterPass(this,pFVar10);
  return pFVar10;
}

// AddPassInternal<void,`FOpenColorIORendering::AddPass_RenderThread'::__l25::<lambda_1>_> @ 14d765c80

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FRDGPass * __thiscall
FRDGBuilder::AddPassInternal<void,_FOpenColorIORendering::AddPass_RenderThread_::__l25::<lambda_1>_>
          (FRDGBuilder *this,FRDGEventName *param_1,FShaderParametersMetadata *param_2,void *param_3
          ,ERDGPassFlags param_4,<lambda_1> *param_5)

{
  int *piVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  FScriptContainerElement *pFVar4;
  FShaderMapBase *pFVar5;
  FRHIDepthStencilState *pFVar6;
  undefined8 uVar7;
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
  pFVar12 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,0x220,8);
  local_38.Contents = param_3;
  if ((param_2->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar8) {
      pcVar3 = (code *)swi(3);
      pFVar12 = (FRDGPass *)(*pcVar3)();
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
       &TRDGLambdaPass<void,`FOpenColorIORendering::AddPass_RenderThread'::`25'::<lambda_1>_>::
        _vftable_;
  pFVar4 = *(FScriptContainerElement **)&(param_5->ViewInfo).InstanceCount;
  pFVar12[1]._padding_ = *(longlong *)&param_5->ViewInfo;
  pFVar12[1].FullPathIfDebug.Data.AllocatorInstance.Data = pFVar4;
  *(TIntPoint<int>_u_0 *)&pFVar12[1].FullPathIfDebug.Data.ArrayNum =
       (param_5->OutputViewport).Extent.field0_0x0;
  pFVar12[1].Name.EventFormat =
       (wchar_t *)(param_5->OutputViewport).Rect.field0_0x0._s_0.Min.field0_0x0;
  pFVar12[1].Name.FormattedEventName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)(param_5->OutputViewport).Rect.field0_0x0._s_0.Max.field0_0x0;
  *(TIntPoint<int>_u_0 *)&pFVar12[1].Name.FormattedEventName.Data.ArrayNum =
       (param_5->InputViewport).Extent.field0_0x0;
  pFVar12[1].ParameterStruct.Contents =
       (uchar *)(param_5->InputViewport).Rect.field0_0x0._s_0.Min.field0_0x0;
  pFVar12[1].ParameterStruct.Layout.Reference =
       (FRHIUniformBufferLayout *)(param_5->InputViewport).Rect.field0_0x0._s_0.Max.field0_0x0;
  pFVar5 = (param_5->PipelineState).VertexShader.ShaderMap;
  pFVar12[1].ParameterStruct.Metadata =
       (FShaderParametersMetadata *)(param_5->PipelineState).VertexShader.ShaderContent;
  *(FShaderMapBase **)&pFVar12[1].Flags = pFVar5;
  pFVar5 = (param_5->PipelineState).PixelShader.ShaderMap;
  *(FShader **)&pFVar12[1].Workload = (param_5->PipelineState).PixelShader.ShaderContent;
  *(FShaderMapBase **)&pFVar12[1].CrossPipelineProducer = pFVar5;
  pFVar6 = (param_5->PipelineState).DepthStencilState;
  *(FRHIBlendState **)&pFVar12[1].GraphicsJoinPass = (param_5->PipelineState).BlendState;
  *(FRHIDepthStencilState **)&pFVar12[1].EpilogueBarrierPass = pFVar6;
  uVar7 = *(undefined8 *)&(param_5->PipelineState).StencilRef;
  pFVar12[1].CrossPipelineConsumers.AllocatorInstance.Data =
       (TRDGHandle<FRDGPass,unsigned_int> *)(param_5->PipelineState).VertexDeclaration;
  pFVar12[1].CrossPipelineConsumers.ArrayNum = (int)uVar7;
  pFVar12[1].CrossPipelineConsumers.ArrayMax = (int)((ulonglong)uVar7 >> 0x20);
  pFVar12[1].Producers.AllocatorInstance.Data = (FRDGPass **)(param_5->ParametersMetadata).Object;
  pTVar2 = (param_5->ParametersMetadata).SharedReferenceCount.ReferenceController;
  *(TReferenceControllerBase<1> **)&pFVar12[1].Producers.ArrayNum = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar12[1].TextureStates.AllocatorInstance.Data = (FTextureState *)param_5->PixelShaderParameters;
  *(void **)&pFVar12[1].TextureStates.ArrayNum = param_3;
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

// AllocObject<`FRDGBuilder::AllocParameters<FOpenColorIOPixelShader::FParameters>'::__l2::FClearUniformBuffers,TStridedView<FOpenColorIOPixelShader::FParameters,int>_&,FRHIUniformBufferLayout_const_&> @ 14d7660b0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FClearUniformBuffers * __thiscall
FRDGBuilder::
AllocObject<_FRDGBuilder::AllocParameters<FOpenColorIOPixelShader::FParameters>_::__l2::FClearUniformBuffers,TStridedView<FOpenColorIOPixelShader::FParameters,int>_&,FRHIUniformBufferLayout_const_&>
          (FRDGBuilder *this,TStridedView<FOpenColorIOPixelShader::FParameters,int> *param_1,
          FRHIUniformBufferLayout *param_2)

{
  int *piVar1;
  code *pcVar2;
  FParameters *pFVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  undefined8 *puVar7;
  FClearUniformBuffers *pFVar8;
  undefined8 *local_18 [2];
  
  puVar7 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,0x20,0x10);
  if (puVar7 == (undefined8 *)0x0) {
    puVar7 = (undefined8 *)0x0;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pFVar8 = (FClearUniformBuffers *)(*pcVar2)();
      return pFVar8;
    }
  }
  else {
    *puVar7 = &
              ___7__TObject_UFClearUniformBuffers__1____AllocParameters_UFParameters_FOpenColorIOPixelShader___FRDGBuilder__QEAA_AV__TStridedView_UFParameters_FOpenColorIOPixelShader__H__PEBVFShaderParametersMetadata__I_Z__FRDGAllocator__6B_
    ;
    pFVar3 = param_1->FirstElementPtr;
    uVar4 = *(undefined8 *)&param_1->BytesBetweenElements;
    puVar7[3] = param_2;
    puVar7[1] = pFVar3;
    puVar7[2] = uVar4;
  }
  local_18[0] = puVar7;
  if (((undefined8 **)this->_padding_ <= local_18) &&
     (local_18 < (undefined8 **)this->_padding_ + *(int *)((longlong)&this->_padding_ + 4))) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pFVar8 = (FClearUniformBuffers *)(*pcVar2)();
      return pFVar8;
    }
  }
  iVar6 = (int)this->_padding_;
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)&this->_padding_,piVar1);
  }
  *(int *)&this->_padding_ = iVar6 + 1;
  *(undefined8 **)(this->_padding_ + (longlong)iVar6 * 8) = local_18[0];
  return (FClearUniformBuffers *)(puVar7 + 1);
}

// BindForLegacyShaderParameters<FOpenColorIOInvalidShaderParameters> @ 14d766470

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
BindForLegacyShaderParameters<FOpenColorIOInvalidShaderParameters>
          (FShader *param_1,int param_2,FShaderParameterMap *param_3,bool param_4)

{
  FShaderParametersMetadata *pFVar1;
  
  pFVar1 = FOpenColorIOInvalidShaderParameters::FTypeInfo::GetStructMetadata();
  FShaderParameterBindings::BindForLegacyShaderParameters
            (&param_1->Bindings,param_1,param_2,param_3,pFVar1,param_4);
  return;
}

// ClearUnusedGraphResources<FOpenColorIOInvalidPixelShader> @ 14d7664d0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

void __cdecl
ClearUnusedGraphResources<FOpenColorIOInvalidPixelShader>
          (TShaderRefBase<FOpenColorIOInvalidPixelShader,FShaderMapPointerTable> *param_1,
          FOpenColorIOInvalidShaderParameters *param_2,initializer_list<FRDGResource_*> *param_3)

{
  FShaderParametersMetadata *pFVar1;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_18;
  
  pFVar1 = FOpenColorIOInvalidShaderParameters::FTypeInfo::GetStructMetadata();
  local_18.ShaderContent = (FShader *)param_1->ShaderContent;
  local_18.ShaderMap = param_1->ShaderMap;
  ValidateShaderParameters(&local_18,pFVar1,param_2);
  local_18.ShaderContent = (FShader *)param_3->_First;
  local_18.ShaderMap = (FShaderMapBase *)param_3->_Last;
  ClearUnusedGraphResourcesImpl
            ((FShaderParameterBindings *)param_1->ShaderContent,pFVar1,param_2,
             (initializer_list<FRDGResource_*> *)&local_18);
  return;
}

// ClearUnusedGraphResources<FOpenColorIOInvalidPixelShader> @ 14d766550

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

void __cdecl
ClearUnusedGraphResources<FOpenColorIOInvalidPixelShader>
          (TShaderRefBase<FOpenColorIOInvalidPixelShader,FShaderMapPointerTable> *param_1,
          FShaderParametersMetadata *param_2,FOpenColorIOInvalidShaderParameters *param_3,
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

// ClearUnusedGraphResources<FOpenColorIOPixelShader> @ 14d7665d0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
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

void __cdecl
ClearUnusedGraphResources<FOpenColorIOPixelShader>
          (TShaderRefBase<FOpenColorIOPixelShader,FShaderMapPointerTable> *param_1,
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

// ConstructItems<FOpenColorIOColorSpace,FOpenColorIOColorSpace,int> @ 14d766650

void __cdecl
ConstructItems<FOpenColorIOColorSpace,FOpenColorIOColorSpace,int>
          (void *param_1,FOpenColorIOColorSpace *param_2,int param_3)

{
  FString *this;
  FString *pFVar1;
  
  if (param_3 != 0) {
    pFVar1 = &param_2->Description;
    this = (FString *)((longlong)param_1 + 0x20);
    do {
      FString::FString(this + -2,
                       (FString *)((longlong)param_2 + (-0x20 - (longlong)param_1) + (longlong)this)
                      );
      FString::FString(this + -1,pFVar1 + -1);
      FString::FString(this,pFVar1);
      pFVar1 = pFVar1 + 3;
      this = this + 3;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FOpenColorIODisplayView,FOpenColorIODisplayView,int> @ 14d7666d0

void __cdecl
ConstructItems<FOpenColorIODisplayView,FOpenColorIODisplayView,int>
          (void *param_1,FOpenColorIODisplayView *param_2,int param_3)

{
  FString *this;
  FString *pFVar1;
  
  if (param_3 != 0) {
    pFVar1 = &param_2->Description;
    this = (FString *)((longlong)param_1 + 0x20);
    do {
      FString::FString(this + -2,
                       (FString *)((longlong)param_2 + (-0x20 - (longlong)param_1) + (longlong)this)
                      );
      FString::FString(this + -1,pFVar1 + -1);
      FString::FString(this,pFVar1);
      pFVar1 = pFVar1 + 3;
      this = this + 3;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FSceneViewExtensionIsActiveFunctor,FSceneViewExtensionIsActiveFunctor,int> @ 14d766750

void __cdecl
ConstructItems<FSceneViewExtensionIsActiveFunctor,FSceneViewExtensionIsActiveFunctor,int>
          (void *param_1,FSceneViewExtensionIsActiveFunctor *param_2,int param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  
  if (param_3 != 0) {
    plVar8 = (longlong *)((longlong)param_1 + 0x10);
    plVar9 = (longlong *)&(param_2->IsActiveFunction).field_0x28;
    do {
      puVar1 = (undefined4 *)((longlong)plVar8 + (longlong)param_2 + (-0x10 - (longlong)param_1));
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      *(undefined4 *)(plVar8 + -2) = uVar3;
      *(undefined4 *)((longlong)plVar8 + -0xc) = uVar4;
      *(undefined4 *)(plVar8 + -1) = uVar5;
      *(undefined4 *)((longlong)plVar8 + -4) = uVar6;
      lVar2 = plVar9[-5];
      *plVar8 = lVar2;
      plVar8[5] = 0;
      if (lVar2 != 0) {
        plVar7 = plVar9 + -3;
        if ((longlong *)*plVar9 != (longlong *)0x0) {
          plVar7 = (longlong *)*plVar9;
        }
        (**(code **)*plVar7)(uVar3,plVar8 + 2);
      }
      plVar8 = plVar8 + 8;
      plVar9 = plVar9 + 8;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DefaultConstructItems<FOpenColorIOTransformResource,int> @ 14d7667f0

void __cdecl DefaultConstructItems<FOpenColorIOTransformResource,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x10);
    do {
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[-2] = &___7FOpenColorIOTransformResource__6B_;
      puVar1[3] = 0;
      *(uint *)((longlong)puVar1 + 0x4c) = *(uint *)((longlong)puVar1 + 0x4c) & 0xfffffffc;
      puVar1[4] = 0;
      puVar1[5] = 0;
      puVar1[6] = 0;
      puVar1[7] = 0;
      puVar1[8] = 0;
      *(undefined4 *)(puVar1 + 9) = 3;
      *(undefined4 *)(puVar1 + 10) = 3;
      puVar1[0xb] = 0;
      puVar1[0xc] = 0;
      puVar1[0xd] = 0;
      puVar1[0xe] = 0;
      *(undefined4 *)(puVar1 + 0xf) = 0xffffffff;
      *(undefined4 *)((longlong)puVar1 + 0x7c) = 0;
      puVar1[0x10] = 0;
      puVar1[0x11] = 0;
      puVar1[0x12] = 0;
      puVar1 = puVar1 + 0x15;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FOpenColorIOColorSpace,int> @ 14d7668f0

void __cdecl DestructItems<FOpenColorIOColorSpace,int>(FOpenColorIOColorSpace *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  
  if (param_2 != 0) {
    pFVar2 = &param_1->FamilyName;
    do {
      pFVar1 = pFVar2[1].Data.AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((FOpenColorIOColorSpace *)(pFVar2 + -1))->ColorSpaceName).Data.AllocatorInstance.
               Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar2 = pFVar2 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FOpenColorIODisplayView,int> @ 14d766950

void __cdecl
DestructItems<FOpenColorIODisplayView,int>(FOpenColorIODisplayView *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  
  if (param_2 != 0) {
    pFVar2 = &param_1->View;
    do {
      pFVar1 = pFVar2[1].Data.AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((FOpenColorIODisplayView *)(pFVar2 + -1))->Display).Data.AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar2 = pFVar2 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TSharedPtr<FOpenColorIODisplayExtension,1>,int> @ 14d7669b0

void __cdecl
DestructItems<TSharedPtr<FOpenColorIODisplayExtension,1>,int>
          (TSharedPtr<FOpenColorIODisplayExtension,1> *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &param_1->SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FOpenColorIOTransformResource,int> @ 14d7669f0

void __cdecl
DestructItems<FOpenColorIOTransformResource,int>(FOpenColorIOTransformResource *param_1,int param_2)

{
  TArray<FShaderTypeDependency,TMemoryImageAllocator<0>_> *this;
  
  if (param_2 != 0) {
    this = &(param_1->CookedShaderMapId).ShaderTypeDependencies;
    do {
      *(undefined ***)((longlong)(this + -8) + 8) = &___7FOpenColorIOTransformResource__6B_;
      if (*(void **)((FPlatformTypeLayoutParameters *)(this + 1) + 1) != (void *)0x0) {
        FMemory::Free(*(void **)((FPlatformTypeLayoutParameters *)(this + 1) + 1));
      }
      FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase((FMemoryImageAllocatorBase *)this);
      FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
                ((FMemoryImageAllocatorBase *)(this + -1));
      if (*(void **)(this + -3) != (void *)0x0) {
        FMemory::Free(*(void **)(this + -3));
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<1> **)(this + -4));
      if (*(FOpenColorIOShaderMap **)(this + -5) != (FOpenColorIOShaderMap *)0x0) {
        FOpenColorIOShaderMap::Release(*(FOpenColorIOShaderMap **)(this + -5));
      }
      DestructItems<FString,int>(*(FString **)(this + -6),*(int *)((longlong)(this + -6) + 8));
      if (*(void **)(this + -6) != (void *)0x0) {
        FMemory::Free(*(void **)(this + -6));
      }
      if (*(void **)(this + -7) != (void *)0x0) {
        FMemory::Free(*(void **)(this + -7));
      }
      this = (TArray<FShaderTypeDependency,TMemoryImageAllocator<0>_> *)((longlong)(this + 10) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DrawScreenPass<``AddDrawScreenPass<FOpenColorIOInvalidPixelShader>'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_> @ 14d766ac0

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
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */

void __cdecl
DrawScreenPass<__AddDrawScreenPass<FOpenColorIOInvalidPixelShader>_::__l2::<lambda_1>::operator()_::__l2::<lambda_1>_>
          (FRHICommandList *param_1,FScreenPassViewInfo *param_2,FScreenPassTextureViewport *param_3
          ,FScreenPassTextureViewport *param_4,FScreenPassPipelineState *param_5,
          EScreenPassDrawFlags param_6,<lambda_1> *param_7)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  TShaderRefBase<FOpenColorIOInvalidPixelShader,FShaderMapPointerTable> *pTVar4;
  FOpenColorIOInvalidShaderParameters *pFVar5;
  FShaderMapResource *this;
  FShader *this_00;
  FShaderMapBase *pFVar6;
  code *pcVar7;
  bool bVar8;
  atomic<FRHIShader_*> aVar9;
  FShaderParametersMetadata *pFVar10;
  atomic<FRHIShader_*> aVar11;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_48;
  
  FScreenPassPipelineState::Validate(param_5);
  uVar2 = *(undefined8 *)((longlong)&(param_3->Rect).field0_0x0 + 8);
  uVar3 = *(undefined8 *)&(param_3->Rect).field0_0x0;
  FRHICommandList::SetViewport
            (param_1,(float)(int)uVar3,(float)(int)((ulonglong)uVar3 >> 0x20),0.0,(float)(int)uVar2,
             (float)(int)((ulonglong)uVar2 >> 0x20),__real_3f800000);
  SetScreenPassPipelineState(param_1,param_5);
  aVar11 = (atomic<FRHIShader_*>)0x0;
  pTVar4 = param_7->PixelShader;
  pFVar5 = *param_7->PixelShaderParameters;
  aVar9 = aVar11;
  if (pTVar4->ShaderContent != (FOpenColorIOInvalidPixelShader *)0x0) {
    this = (pTVar4->ShaderMap->Resource).Reference;
    if ((this == (FShaderMapResource *)0x0) &&
       (bVar8 = FDebug::CheckVerifyFailedImpl2
                          ("Resource",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                           ,0x426,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    iVar1 = *(int *)&pTVar4->ShaderContent->field_0xd4;
    aVar9 = (this->RHIShaders).Ptr[iVar1];
    if (((aVar9 == (atomic<FRHIShader_*>)0x0) &&
        (aVar9 = (atomic<FRHIShader_*>)FShaderMapResource::CreateShaderOrCrash(this,iVar1,true),
        aVar9 == (atomic<FRHIShader_*>)0x0)) && (aVar9 = aVar11, 4 < (byte)LogShaders._0_1_)) {
      this_00 = (FShader *)pTVar4->ShaderContent;
      pFVar6 = pTVar4->ShaderMap;
      if ((pFVar6->PointerTable == (FShaderMapPointerTable *)0x0) &&
         (bVar8 = FDebug::CheckVerifyFailedImpl2
                            ("PointerTable",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                             ,0x9b4,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      FShader::GetType(this_00,pFVar6->PointerTable);
      UE::Logging::Private::BasicLog<5>
                ((FStaticBasicLogRecord *)
                 &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FOpenColorIOInvalidPixelShader,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                  ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
    }
  }
  pFVar10 = FOpenColorIOInvalidShaderParameters::FTypeInfo::GetStructMetadata();
  local_48.ShaderContent = (FShader *)pTVar4->ShaderContent;
  local_48.ShaderMap = pTVar4->ShaderMap;
  ValidateShaderParameters(&local_48,pFVar10,pFVar5);
  SetShaderParameters(param_7->RHICmdList,(FRHIGraphicsShader *)aVar9,
                      (FShaderParameterBindings *)pTVar4->ShaderContent,pFVar10,pFVar5);
  DrawScreenPass_PostSetup(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}

// DrawScreenPass<``FOpenColorIORendering::AddPass_RenderThread'::__l25::<lambda_1>::operator()'::__l2::<lambda_1>_> @ 14d766d00

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
DrawScreenPass<__FOpenColorIORendering::AddPass_RenderThread_::__l25::<lambda_1>::operator()_::__l2::<lambda_1>_>
          (FRHICommandList *param_1,FScreenPassViewInfo *param_2,FScreenPassTextureViewport *param_3
          ,FScreenPassTextureViewport *param_4,FScreenPassPipelineState *param_5,
          EScreenPassDrawFlags param_6,<lambda_1> *param_7)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  FScreenPassPipelineState *pFVar4;
  FParameters *pFVar5;
  FShader *pFVar6;
  FShaderParametersMetadata *pFVar7;
  FShaderMapResource *this;
  FShader *this_00;
  FShaderMapBase *pFVar8;
  code *pcVar9;
  bool bVar10;
  atomic<FRHIShader_*> aVar11;
  atomic<FRHIShader_*> aVar12;
  
  FScreenPassPipelineState::Validate(param_5);
  uVar2 = *(undefined8 *)((longlong)&(param_3->Rect).field0_0x0 + 8);
  uVar3 = *(undefined8 *)&(param_3->Rect).field0_0x0;
  FRHICommandList::SetViewport
            (param_1,(float)(int)uVar3,(float)(int)((ulonglong)uVar3 >> 0x20),0.0,(float)(int)uVar2,
             (float)(int)((ulonglong)uVar2 >> 0x20),__real_3f800000);
  SetScreenPassPipelineState(param_1,param_5);
  aVar12 = (atomic<FRHIShader_*>)0x0;
  pFVar4 = param_7->PipelineState;
  pFVar5 = *param_7->PixelShaderParameters;
  pFVar6 = (pFVar4->PixelShader).ShaderContent;
  pFVar7 = param_7->ParametersMetadata->Object;
  aVar11 = aVar12;
  if (pFVar6 != (FShader *)0x0) {
    this = (((pFVar4->PixelShader).ShaderMap)->Resource).Reference;
    if ((this == (FShaderMapResource *)0x0) &&
       (bVar10 = FDebug::CheckVerifyFailedImpl2
                           ("Resource",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                            ,0x426,L""), bVar10)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    iVar1 = ((pFVar4->PixelShader).ShaderContent)->ResourceIndex;
    aVar11 = (this->RHIShaders).Ptr[iVar1];
    if (((aVar11 == (atomic<FRHIShader_*>)0x0) &&
        (aVar11 = (atomic<FRHIShader_*>)FShaderMapResource::CreateShaderOrCrash(this,iVar1,true),
        aVar11 == (atomic<FRHIShader_*>)0x0)) && (aVar11 = aVar12, 4 < (byte)LogShaders._0_1_)) {
      this_00 = (pFVar4->PixelShader).ShaderContent;
      pFVar8 = (pFVar4->PixelShader).ShaderMap;
      if ((pFVar8->PointerTable == (FShaderMapPointerTable *)0x0) &&
         (bVar10 = FDebug::CheckVerifyFailedImpl2
                             ("PointerTable",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                              ,0x9b4,L""), bVar10)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      FShader::GetType(this_00,pFVar8->PointerTable);
      UE::Logging::Private::BasicLog<5>
                (&`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FShader,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                  ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
    }
  }
  SetShaderParameters(param_7->RHICmdList,(FRHIGraphicsShader *)aVar11,&pFVar6->Bindings,pFVar7,
                      pFVar5);
  DrawScreenPass_PostSetup(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}

// Enqueue<TRenderCommandTag<`FOpenColorIOTransformResource::CacheShaders'::__l2::TSTR_FSetShaderMapOnColorSpaceTransformResources367>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 14d767190

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FOpenColorIOTransformResource::CacheShaders_::__l2::TSTR_FSetShaderMapOnColorSpaceTransformResources367>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`FOpenColorIOTransformResource::CacheShaders'::__l2::TSTR_FSetShaderMapOnColorSpaceTransformResources367>
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
      if (bVar8) goto LAB_14d7672e1;
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
    goto LAB_14d7674d5;
  }
LAB_14d7672e1:
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
LAB_14d7673bf:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14d7673bf;
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
LAB_14d7674d5:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`FOpenColorIORendering::ApplyColorTransform'::__l2::TSTR_ProcessColorSpaceTransform260>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 14d767510

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FOpenColorIORendering::ApplyColorTransform_::__l2::TSTR_ProcessColorSpaceTransform260>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`FOpenColorIORendering::ApplyColorTransform'::__l2::TSTR_ProcessColorSpaceTransform260>
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
      if (bVar8) goto LAB_14d767661;
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
    goto LAB_14d767855;
  }
LAB_14d767661:
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
LAB_14d76773f:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14d76773f;
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
LAB_14d767855:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`FOpenColorIODisplayExtension::SetupView'::__l2::TSTR_ProcessColorSpaceTransform56>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 14d767890

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FOpenColorIODisplayExtension::SetupView_::__l2::TSTR_ProcessColorSpaceTransform56>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`FOpenColorIODisplayExtension::SetupView'::__l2::TSTR_ProcessColorSpaceTransform56>
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
      if (bVar8) goto LAB_14d7679e1;
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
    goto LAB_14d767bd5;
  }
LAB_14d7679e1:
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
LAB_14d767abf:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14d767abf;
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
LAB_14d767bd5:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`FOpenColorIOTransformResource::ReleaseShaderMap'::__l5::TSTR_ReleaseShaderMap143>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 14d767c10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FOpenColorIOTransformResource::ReleaseShaderMap_::__l5::TSTR_ReleaseShaderMap143>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`FOpenColorIOTransformResource::ReleaseShaderMap'::__l5::TSTR_ReleaseShaderMap143>
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
      if (bVar8) goto LAB_14d767d61;
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
    goto LAB_14d767f55;
  }
LAB_14d767d61:
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
LAB_14d767e3f:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14d767e3f;
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
LAB_14d767f55:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// GetDefault<UOpenColorIOSettings> @ 14d768030

UOpenColorIOSettings * __cdecl GetDefault<UOpenColorIOSettings>(void)

{
  UClass *this;
  
  this = UOpenColorIOSettings::StaticClass();
  if ((this->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this);
    return (UOpenColorIOSettings *)(this->ClassDefaultObject).field0_0x0.DebugPtr;
  }
  return (UOpenColorIOSettings *)(this->ClassDefaultObject).field0_0x0.DebugPtr;
}

// InternalConstructor<UOpenColorIOBlueprintLibrary> @ 14d768150

void __cdecl InternalConstructor<UOpenColorIOBlueprintLibrary>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &___7UOpenColorIOBlueprintLibrary__6B_;
  }
  return;
}

// InternalConstructor<UOpenColorIOColorTransform> @ 14d768180

void __cdecl InternalConstructor<UOpenColorIOColorTransform>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined1 *)(this + 1) = 0;
    *(undefined ***)this = &___7UOpenColorIOColorTransform__6B_;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined8 *)&this[2].field_0x10 = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
    this[2].field_0x20 = 0;
    *(undefined8 *)(this + 3) = 0;
    *(undefined8 *)&this[3].field_0x8 = 0;
    *(undefined8 *)&this[3].field_0x10 = 0;
    *(undefined8 *)&this[3].field_0x18 = 0;
    FRenderCommandFence::FRenderCommandFence((FRenderCommandFence *)&this[4].field_0x20);
    return;
  }
  return;
}

// InternalConstructor<UOpenColorIOConfiguration> @ 14d768210

void __cdecl InternalConstructor<UOpenColorIOConfiguration>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UOpenColorIOConfiguration__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined8 *)&this[2].field_0x10 = 0;
    *(undefined8 *)(this + 3) = 0;
    *(undefined4 *)&this[3].field_0x8 = 0;
    *(undefined4 *)&this[3].field_0xc = 0x80;
    *(undefined4 *)&this[3].field_0x10 = 0xffffffff;
    *(undefined4 *)&this[3].field_0x14 = 0;
    *(undefined8 *)&this[3].field_0x20 = 0;
    *(undefined4 *)(this + 4) = 0;
    *(undefined8 *)&this[4].field_0x8 = 0;
    *(undefined8 *)&this[4].field_0x10 = 0;
    *(undefined8 *)&this[4].field_0x18 = 0;
    *(undefined8 *)&this[4].field_0x20 = 0;
    *(undefined8 *)(this + 5) = 0;
    *(undefined8 *)&this[5].field_0x8 = 0;
    *(undefined8 *)&this[5].field_0x10 = 0;
    *(undefined8 *)&this[5].field_0x18 = 0;
    *(undefined8 *)&this[5].field_0x20 = 0;
    *(undefined8 *)(this + 6) = 0;
  }
  return;
}

// InternalConstructor<UOpenColorIODisplayExtensionWrapper> @ 14d7682e0

void __cdecl InternalConstructor<UOpenColorIODisplayExtensionWrapper>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UOpenColorIODisplayExtensionWrapper__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
  }
  return;
}

// InternalConstructor<UOpenColorIOSettings> @ 14d768320

void __cdecl InternalConstructor<UOpenColorIOSettings>(FObjectInitializer *param_1)

{
  UDeveloperSettings *this;
  FObjectInitializer *pFVar1;
  
  this = (UDeveloperSettings *)param_1->Obj;
  if (this != (UDeveloperSettings *)0x0) {
    pFVar1 = FObjectInitializer::Get();
    UDeveloperSettings::UDeveloperSettings(this,pFVar1);
    *(byte *)&this[1]._padding_ = (byte)this[1]._padding_ & 0xf8;
    this->_padding_ = (longlong)&___7UOpenColorIOSettings__6B_;
  }
  return;
}

// InternalVTableHelperCtorCaller<UOpenColorIOBlueprintLibrary> @ 14d768360

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UOpenColorIOBlueprintLibrary>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UOpenColorIOBlueprintLibrary::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UOpenColorIOBlueprintLibrary__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UOpenColorIOColorTransform> @ 14d768410

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UOpenColorIOColorTransform>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UOpenColorIOColorTransform::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined1 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7UOpenColorIOColorTransform__6B_;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    *(undefined8 *)&pUVar1[2].field_0x10 = 0;
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    *(undefined8 *)(pUVar1 + 3) = 0;
    *(undefined8 *)&pUVar1[3].field_0x8 = 0;
    *(undefined8 *)&pUVar1[3].field_0x10 = 0;
    *(undefined8 *)&pUVar1[3].field_0x18 = 0;
    pUVar1[2].field_0x20 = 0;
    FRenderCommandFence::FRenderCommandFence((FRenderCommandFence *)&pUVar1[4].field_0x20);
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UOpenColorIOConfiguration> @ 14d768510

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UOpenColorIOConfiguration>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UOpenColorIOConfiguration::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UOpenColorIOConfiguration__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    *(undefined8 *)&pUVar1[2].field_0x10 = 0;
    *(undefined8 *)(pUVar1 + 3) = 0;
    *(undefined4 *)&pUVar1[3].field_0x8 = 0;
    *(undefined4 *)&pUVar1[3].field_0xc = 0x80;
    *(undefined4 *)&pUVar1[3].field_0x10 = 0xffffffff;
    *(undefined4 *)&pUVar1[3].field_0x14 = 0;
    *(undefined8 *)&pUVar1[3].field_0x20 = 0;
    *(undefined4 *)(pUVar1 + 4) = 0;
    *(undefined8 *)&pUVar1[4].field_0x8 = 0;
    *(undefined8 *)&pUVar1[4].field_0x10 = 0;
    *(undefined8 *)&pUVar1[4].field_0x18 = 0;
    *(undefined8 *)&pUVar1[4].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 5) = 0;
    *(undefined8 *)&pUVar1[5].field_0x8 = 0;
    *(undefined8 *)&pUVar1[5].field_0x10 = 0;
    *(undefined8 *)&pUVar1[5].field_0x18 = 0;
    *(undefined8 *)&pUVar1[5].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 6) = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UOpenColorIODisplayExtensionWrapper> @ 14d768660

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UOpenColorIODisplayExtensionWrapper>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UOpenColorIODisplayExtensionWrapper::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UOpenColorIODisplayExtensionWrapper__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UOpenColorIOSettings> @ 14d768720

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UOpenColorIOSettings>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UDeveloperSettings *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UOpenColorIOSettings::GetPrivateStaticClass();
  this = (UDeveloperSettings *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UDeveloperSettings *)0x0) {
    UDeveloperSettings::UDeveloperSettings(this,param_1);
    this->_padding_ = (longlong)&___7UOpenColorIOSettings__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// LowerBoundInternal<TTuple<int,TWeakObjectPtr<UTexture,FWeakObjectPtr>_>_const_,int,int,TSortedMap<int,TWeakObjectPtr<UTexture,FWeakObjectPtr>,TSizedDefaultAllocator<32>,TLess<int_const_>_>::FKeyForward,TLess<int_const_>_> @ 14d7687d0

int __cdecl
AlgoImpl::
LowerBoundInternal<TTuple<int,TWeakObjectPtr<UTexture,FWeakObjectPtr>_>_const_,int,int,TSortedMap<int,TWeakObjectPtr<UTexture,FWeakObjectPtr>,TSizedDefaultAllocator<32>,TLess<int_const_>_>::FKeyForward,TLess<int_const_>_>
          (TTuple<int,TWeakObjectPtr<UTexture,FWeakObjectPtr>_> *param_1,int param_2,int *param_3,
          FKeyForward param_4,TLess<int_const_> param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar3;
      if (*(int *)(param_1 + iVar1) < *param_3) {
        iVar3 = iVar1 + (param_2 & 1U);
      }
      uVar2 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar2 != 0);
  }
  return iVar3;
}

// NewObject<UOpenColorIOColorTransform> @ 14d768820

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UOpenColorIOColorTransform * __cdecl
NewObject<UOpenColorIOColorTransform>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UOpenColorIOColorTransform *pUVar2;
  longlong *plVar3;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_d8;
  if (param_2 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = UOpenColorIOColorTransform::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UOpenColorIOColorTransform *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar3 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UOpenColorIODisplayExtensionWrapper> @ 14d768910

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UOpenColorIODisplayExtensionWrapper * __cdecl
NewObject<UOpenColorIODisplayExtensionWrapper>(UObject *param_1)

{
  UClass *pUVar1;
  UOpenColorIODisplayExtensionWrapper *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UOpenColorIODisplayExtensionWrapper::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UOpenColorIODisplayExtensionWrapper *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// StaticEnum<enum_EOpenColorIOViewTransformDirection> @ 14d768b40

UEnum * __cdecl StaticEnum<enum_EOpenColorIOViewTransformDirection>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EOpenColorIOViewTransformDirection.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_OpenColorIO();
    Z_Registration_Info_UEnum_EOpenColorIOViewTransformDirection.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_OpenColorIO_EOpenColorIOViewTransformDirection,
                       (UObject *)pUVar1,L"EOpenColorIOViewTransformDirection");
  }
  return Z_Registration_Info_UEnum_EOpenColorIOViewTransformDirection.OuterSingleton;
}

// ~TFunction_OwnedObject<`FOpenColorIOTransformResource::CacheShaders'::__l2::<lambda_1>,1,0> @ 14d7696b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FOpenColorIOTransformResource::CacheShaders'::__l2::<lambda_1>,1,0>::
~TFunction_OwnedObject<_FOpenColorIOTransformResource::CacheShaders_::__l2::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FOpenColorIOTransformResource::CacheShaders'::`2'::<lambda_1>,1,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`FOpenColorIODisplayExtension::SetupView'::__l2::<lambda_1>,1,1> @ 14d7696d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FOpenColorIODisplayExtension::SetupView'::__l2::<lambda_1>,1,1>::
~TFunction_OwnedObject<_FOpenColorIODisplayExtension::SetupView_::__l2::<lambda_1>,1,1>(void *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FOpenColorIODisplayExtension::SetupView'::`2'::<lambda_1>,1,1>::
        _vftable_;
  if (*(void **)((longlong)this + 0x30) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x30));
  }
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  plVar3 = *(longlong **)((longlong)this + 0x10);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014d769724. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// ~TFunction_OwnedObject<`FOpenColorIOTransformResource::ReleaseShaderMap'::__l5::<lambda_1>,1,0> @ 14d769740

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FOpenColorIOTransformResource::ReleaseShaderMap'::__l5::<lambda_1>,1,0>::
~TFunction_OwnedObject<_FOpenColorIOTransformResource::ReleaseShaderMap_::__l5::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FOpenColorIOTransformResource::ReleaseShaderMap'::`5'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FOpenColorIORendering::ApplyColorTransform'::__l2::<lambda_6>,1,1> @ 14d769760

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FOpenColorIORendering::ApplyColorTransform'::__l2::<lambda_6>,1,1>::
~TFunction_OwnedObject<_FOpenColorIORendering::ApplyColorTransform_::__l2::<lambda_6>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FOpenColorIORendering::ApplyColorTransform'::`2'::<lambda_6>,1,1>::
        _vftable_;
  if (*(void **)((longlong)this + 0x38) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x38));
  }
  if (*(void **)((longlong)this + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x28));
    return;
  }
  return;
}

// operator() @ 14d76a490

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
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */

void __thiscall
`AddDrawScreenPass<FOpenColorIOInvalidPixelShader>'::__l2::<lambda_1>::operator()
          (void *this,FRDGAsyncTask param_1,FRHICommandList *param_2)

{
  FScreenPassViewInfo local_38;
  <lambda_1> local_28;
  
  local_38._0_8_ = *(undefined8 *)this;
  local_38._8_8_ = *(undefined8 *)((longlong)this + 8);
  local_28.PixelShader =
       (TShaderRefBase<FOpenColorIOInvalidPixelShader,FShaderMapPointerTable> *)
       ((longlong)this + 0x80);
  local_28.PixelShaderParameters = (FOpenColorIOInvalidShaderParameters **)((longlong)this + 0x90);
  local_28.RHICmdList = param_2;
  DrawScreenPass<__AddDrawScreenPass<FOpenColorIOInvalidPixelShader>_::__l2::<lambda_1>::operator()_::__l2::<lambda_1>_>
            (param_2,&local_38,(FScreenPassTextureViewport *)((longlong)this + 0x10),
             (FScreenPassTextureViewport *)((longlong)this + 0x28),
             (FScreenPassPipelineState *)((longlong)this + 0x40),
             *(EScreenPassDrawFlags *)((longlong)this + 0x98),&local_28);
  return;
}

// operator() @ 14d76aa60

bool __thiscall
``UOpenColorIOConfiguration::CleanupTransforms'::__l2::<lambda_1>::operator()'::__l8::<lambda_2>::
operator()(void *this,FOpenColorIODisplayView *param_1)

{
  longlong lVar1;
  int iVar2;
  bool bVar3;
  
  lVar1 = *(longlong *)this;
  iVar2 = (param_1->Display).Data.ArrayNum;
  if (iVar2 == *(int *)(lVar1 + 0x58)) {
    if (iVar2 < 2) goto LAB_14d76aa9b;
    iVar2 = wcscmp((wchar_t *)(param_1->Display).Data.AllocatorInstance.Data,
                   *(wchar_t **)(lVar1 + 0x50));
    bVar3 = iVar2 == 0;
  }
  else {
    bVar3 = iVar2 + *(int *)(lVar1 + 0x58) == 1;
  }
  if (!bVar3) {
    return false;
  }
LAB_14d76aa9b:
  iVar2 = (param_1->View).Data.ArrayNum;
  if (iVar2 == *(int *)(lVar1 + 0x68)) {
    if (iVar2 < 2) {
      return true;
    }
    iVar2 = wcscmp((wchar_t *)(param_1->View).Data.AllocatorInstance.Data,
                   *(wchar_t **)(lVar1 + 0x60));
    bVar3 = iVar2 == 0;
  }
  else {
    bVar3 = iVar2 + *(int *)(lVar1 + 0x68) == 1;
  }
  if (bVar3) {
    return true;
  }
  return false;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14d76adc8

/* WARNING: Type propagation algorithm not settling */
/* [thunk]:public: virtual void * __ptr64 __cdecl FOpenColorIODisplayExtension::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
FOpenColorIODisplayExtension::_vector_deleting_destructor__adjustor_40__
          (FOpenColorIODisplayExtension *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FOpenColorIODisplayExtension *)
                      &this[-1].DisplayConfiguration.ColorConfiguration.DestinationDisplayView.View.
                       Data.ArrayNum,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{64}' @ 14d76add8

/* [thunk]:public: virtual void * __ptr64 __cdecl FOpenColorIOShaderMap::`vector deleting
   destructor'`adjustor{64}' (unsigned int) __ptr64 */

void * __thiscall
FOpenColorIOShaderMap::_vector_deleting_destructor__adjustor_64__
          (FOpenColorIOShaderMap *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((FOpenColorIOShaderMap *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 14d76adf0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FOpenColorIODisplayExtension,FScreenPassTexture___cdecl(FRDGBuilder_&,FSceneView_const_&,FPostProcessMaterialInputs_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FOpenColorIODisplayExtension,FScreenPassTexture___cdecl(FRDGBuilder_&,FSceneView_const_&,FPostProcessMaterialInputs_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d76ae20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<TOptional<bool>_(__cdecl*)(ISceneViewExtension_const_*,FSceneViewExtensionContext_const_&),0,0>
::_scalar_deleting_destructor_
          (TFunction_OwnedObject<TOptional<bool>_(__cdecl*)(ISceneViewExtension_const_*,FSceneViewExtensionContext_const_&),0,0>
           *this,uint param_1)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6A_AU__TOptional__N__PEBVISceneViewExtension__AEBUFSceneViewExtensionContext___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d76ae60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FOpenColorIOTransformResource::CacheShaders'::__l2::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FOpenColorIOTransformResource::CacheShaders'::`2'::<lambda_1>,1,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d76aea0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FOpenColorIODisplayExtension::SetupView'::__l2::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FOpenColorIODisplayExtension::SetupView'::`2'::<lambda_1>,1,1>::
        _vftable_;
  if (*(void **)((longlong)this + 0x30) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x30));
  }
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  plVar3 = *(longlong **)((longlong)this + 0x10);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d76af20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FOpenColorIOTransformResource::ReleaseShaderMap'::__l5::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FOpenColorIOTransformResource::ReleaseShaderMap'::`5'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d76af60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FOpenColorIORendering::ApplyColorTransform'::__l2::<lambda_6>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FOpenColorIORendering::ApplyColorTransform'::`2'::<lambda_6>,1,1>::
        _vftable_;
  if (*(void **)((longlong)this + 0x38) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x38));
  }
  if (*(void **)((longlong)this + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x28));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d76afc0

void * __thiscall
FRDGAllocator::
TObject<`FRDGBuilder::AllocParameters<FOpenColorIOPixelShader::FParameters>'::__l2::FClearUniformBuffers>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  `FRDGBuilder::AllocParameters<FOpenColorIOPixelShader::FParameters>'::__l2::FClearUniformBuffers::
  ~FClearUniformBuffers((void *)((longlong)this + 8));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d76b000

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
FRDGAllocator::TObject<FOpenColorIOInvalidShaderParameters>::_scalar_deleting_destructor_
          (TObject<FOpenColorIOInvalidShaderParameters> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x130);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d76b030

void * __thiscall
TRDGLambdaPass<FOpenColorIOInvalidShaderParameters,`AddDrawScreenPass<FOpenColorIOInvalidPixelShader>'::__l2::<lambda_1>_>
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
    ::operator_delete(this,0x228);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d76b090

void * __thiscall
TRDGLambdaPass<void,`FOpenColorIORendering::AddPass_RenderThread'::__l25::<lambda_1>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x208));
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
    ::operator_delete(this,0x220);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d76b100

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FOpenColorIODisplayExtension,SharedPointerInternals::DefaultDeleter<FOpenColorIODisplayExtension>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FOpenColorIODisplayExtension,SharedPointerInternals::DefaultDeleter<FOpenColorIODisplayExtension>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d76b140

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void * __thiscall
TShaderMap<FOpenColorIOShaderMapContent,FShaderMapPointerTable>::_scalar_deleting_destructor_
          (TShaderMap<FOpenColorIOShaderMapContent,FShaderMapPointerTable> *this,uint param_1)

{
  FShaderMapBase::~FShaderMapBase((FShaderMapBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d76b180

void * __thiscall
FOpenColorIODisplayExtension::_scalar_deleting_destructor_
          (FOpenColorIODisplayExtension *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  FOpenColorIOColorConversionSettings::~FOpenColorIOColorConversionSettings
            (&(this->DisplayConfiguration).ColorConfiguration);
  pFVar1 = (this->CachedResourcesRenderThread).TransformName.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CachedResourcesRenderThread).TextureResources.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::UnregisterGCObject((FGCObject *)&this->_padding_);
  FSceneViewExtensionBase::~FSceneViewExtensionBase((FSceneViewExtensionBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x110);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d76b200

void * __thiscall
FOpenColorIOModule::_scalar_deleting_destructor_(FOpenColorIOModule *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  FOpenColorIODisplayManager *pFVar3;
  FScriptContainerElement *pFVar4;
  longlong *plVar5;
  
  pFVar3 = (this->DisplayManager).Ptr;
  if (pFVar3 != (FOpenColorIODisplayManager *)0x0) {
    DestructItems<TSharedPtr<FOpenColorIODisplayExtension,1>,int>
              ((TSharedPtr<FOpenColorIODisplayExtension,1> *)
               (pFVar3->DisplayExtensions).AllocatorInstance.Data,
               (pFVar3->DisplayExtensions).ArrayNum);
    pFVar4 = (pFVar3->DisplayExtensions).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    plVar5 = (longlong *)pFVar3->_padding_;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
    ::operator_delete(pFVar3,0x20);
  }
  this->_padding_ = (longlong)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d76b2a0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void * __thiscall
FOpenColorIOShaderMap::_scalar_deleting_destructor_(FOpenColorIOShaderMap *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  FOpenColorIOShaderMap *local_res8;
  
  this->_padding_ =
       (longlong)&_vftable__for__TShaderMap<FOpenColorIOShaderMapContent,FShaderMapPointerTable>__;
  this->_padding_ = (longlong)&_vftable__for__FDeferredCleanupInterface__;
  if (this->bDeletedThroughDeferredCleanup == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bDeletedThroughDeferredCleanup",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Compositing\\OpenColorIO\\Source\\OpenColorIO\\Private\\OpenColorIOShaderMap.cpp"
                       ,0x26e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pvVar3 = (void *)(*pcVar1)();
      return pvVar3;
    }
  }
  if (this->bRegistered != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bRegistered",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Compositing\\OpenColorIO\\Source\\OpenColorIO\\Private\\OpenColorIOShaderMap.cpp"
                       ,0x26f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pvVar3 = (void *)(*pcVar1)();
      return pvVar3;
    }
  }
  local_res8 = this;
  TArray<FOpenColorIOShaderMap_*,TSizedDefaultAllocator<32>_>::RemoveSwap
            (&AllOpenColorIOShaderMaps,&local_res8,Default);
  this->_padding_ = (longlong)&___7FDeferredCleanupInterface__6B_;
  FShaderMapBase::~FShaderMapBase((FShaderMapBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d76b370

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

void * __thiscall
FOpenColorIOShaderType::_scalar_deleting_destructor_(FOpenColorIOShaderType *this,uint param_1)

{
  FShaderType::~FShaderType((FShaderType *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d76b3b0

void * __thiscall
FOpenColorIOTransformResource::_scalar_deleting_destructor_
          (FOpenColorIOTransformResource *this,uint param_1)

{
  ~FOpenColorIOTransformResource(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d76b3f0

void * __thiscall
IOpenColorIOModule::_scalar_deleting_destructor_(IOpenColorIOModule *this,uint param_1)

{
  *this = (IOpenColorIOModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d76b430

void * __thiscall
UOpenColorIOBlueprintLibrary::_scalar_deleting_destructor_
          (UOpenColorIOBlueprintLibrary *this,uint param_1)

{
  *(undefined ***)this = &___7UOpenColorIOBlueprintLibrary__6B_;
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

// `scalar_deleting_destructor' @ 14d76b490

void * __thiscall
UOpenColorIOColorTransform::_scalar_deleting_destructor_
          (UOpenColorIOColorTransform *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UOpenColorIOColorTransform__6B_;
  FRenderCommandFence::~FRenderCommandFence(&this->ReleaseFence);
  DestructItems<FOpenColorIOTransformResource,int>
            ((FOpenColorIOTransformResource *)
             (this->LoadedTransformResources).AllocatorInstance.Data,
             (this->LoadedTransformResources).ArrayNum);
  pFVar1 = (this->LoadedTransformResources).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->LookupTextures).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->View).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Display).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DestinationColorSpace).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SourceColorSpace).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,200);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d76b570

void * __thiscall
UOpenColorIOConfiguration::_scalar_deleting_destructor_
          (UOpenColorIOConfiguration *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FScriptContainerElement *pFVar3;
  FOpenColorIOWrapperConfig *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  void *pvVar6;
  
  this->_padding_ = (longlong)&___7UOpenColorIOConfiguration__6B_;
  pFVar3 = (this->ConfigHash).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar4 = (this->Config).Ptr;
  if (pFVar4 != (FOpenColorIOWrapperConfig *)0x0) {
    (*(code *)pFVar4[-1]._padding_)(pFVar4 + -1);
  }
  pTVar5 = (this->WatchedDirectoryInfo).RawConfigChangedToast.WeakReferenceCount.ReferenceController
  ;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar5->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
    }
  }
  pFVar3 = (this->WatchedDirectoryInfo).FolderPath.Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->ColorTransforms).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  *(undefined4 *)&(this->Context).field_0x48 = 0;
  pvVar6 = *(void **)&(this->Context).field_0x40;
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Context);
  DestructItems<FOpenColorIODisplayView,int>
            ((FOpenColorIODisplayView *)(this->DesiredDisplayViews).AllocatorInstance.Data,
             (this->DesiredDisplayViews).ArrayNum);
  pFVar3 = (this->DesiredDisplayViews).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  DestructItems<FOpenColorIOColorSpace,int>
            ((FOpenColorIOColorSpace *)(this->DesiredColorSpaces).AllocatorInstance.Data,
             (this->DesiredColorSpaces).ArrayNum);
  pFVar3 = (this->DesiredColorSpaces).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->ConfigurationFile).FilePath.Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xf8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d76b6c0

void * __thiscall
UOpenColorIODisplayExtensionWrapper::_scalar_deleting_destructor_
          (UOpenColorIODisplayExtensionWrapper *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UOpenColorIODisplayExtensionWrapper__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->DisplayExtension).SharedReferenceCount.ReferenceController);
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d76b730

void * __thiscall
UOpenColorIOSettings::_scalar_deleting_destructor_(UOpenColorIOSettings *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UOpenColorIOSettings__6B_;
  UDeveloperSettings::~UDeveloperSettings((UDeveloperSettings *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x40);
  }
  return this;
}

// EmptyLinkFunctionForGeneratedCodeOpenColorIOBlueprintLibrary @ 14d76f290

void __cdecl EmptyLinkFunctionForGeneratedCodeOpenColorIOBlueprintLibrary(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeOpenColorIOColorSpace @ 14d76f2a0

void __cdecl EmptyLinkFunctionForGeneratedCodeOpenColorIOColorSpace(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeOpenColorIOColorTransform @ 14d76f2b0

void __cdecl EmptyLinkFunctionForGeneratedCodeOpenColorIOColorTransform(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeOpenColorIOConfiguration @ 14d76f2c0

void __cdecl EmptyLinkFunctionForGeneratedCodeOpenColorIOConfiguration(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeOpenColorIODisplayExtensionWrapper @ 14d76f2d0

void __cdecl EmptyLinkFunctionForGeneratedCodeOpenColorIODisplayExtensionWrapper(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeOpenColorIOSettings @ 14d76f2e0

void __cdecl EmptyLinkFunctionForGeneratedCodeOpenColorIOSettings(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeOpenColorIO_init @ 14d76f2f0

void __cdecl EmptyLinkFunctionForGeneratedCodeOpenColorIO_init(void)

{
  return;
}

// OpenColorIOBindTextureResources @ 14d773f40

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
OpenColorIOBindTextureResources
          (FOpenColorIOPixelShaderParameters *param_1,
          TSortedMap<int,FTextureResource_*,TSizedDefaultAllocator<32>,TLess<int_const_>_> *param_2)

{
  return false;
}

// OpenColorIOGetMiniFontTexture @ 14d773f50

FRHITexture * __cdecl OpenColorIOGetMiniFontTexture(void)

{
  longlong lVar1;
  
  lVar1 = GSystemTextures._296_8_;
  if (GSystemTextures._296_8_ == 0) {
    lVar1 = GSystemTextures._32_8_;
  }
  return *(FRHITexture **)(lVar1 + 8);
}

// SendAnalytics @ 14d7762a0

/* WARNING: Removing unreachable block (ram,0x00014d7764c1) */
/* WARNING: Removing unreachable block (ram,0x00014d7764cf) */

void __cdecl
OpenColorIOConfiguration::SendAnalytics
          (FString *param_1,TArray<FOpenColorIOColorSpace,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FString *pFVar5;
  longlong lVar6;
  IAnalyticsProviderET *pIVar7;
  wchar_t *pwVar8;
  ForAnyElementType local_58;
  undefined8 local_50;
  FString local_48;
  FAnalyticsEventAttribute local_38;
  
  if (FEngineAnalytics::Analytics.Object == (IAnalyticsProviderET *)0x0) {
    return;
  }
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  pFVar5 = ::FString::FString(&local_48,L"NumDesiredColorSpaces");
  if ((1 < (pFVar5->Data).ArrayNum) &&
     (iVar4 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(pFVar5->Data).AllocatorInstance.Data,L"EventName"), iVar4 != 0)
     ) {
    if ((pFVar5->Data).ArrayNum == 0) {
      pwVar8 = L"";
    }
    else {
      pwVar8 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    }
    iVar4 = FGenericPlatformStricmp::Stricmp(pwVar8,L"DateOffset");
    if (iVar4 != 0) goto LAB_14d776352;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValidAttributeName(InName)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Public\\AnalyticsEventAttribute.h"
                     ,0x78,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_14d776352:
  local_38.AttrName.Data.AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
  (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.AttrName.Data.ArrayNum = (pFVar5->Data).ArrayNum;
  local_38.AttrName.Data.ArrayMax = (pFVar5->Data).ArrayMax;
  (pFVar5->Data).ArrayNum = 0;
  (pFVar5->Data).ArrayMax = 0;
  ::FString::PrintfImpl(&local_38.AttrValueString,L"%d");
  local_38.AttrValueNumber = 0.0;
  local_38.AttrValueBool = false;
  local_38.AttrType = JsonFragment;
  pFVar1 = (pFVar5->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if (((local_58.Data <= &local_38) &&
      (&local_38 < (FAnalyticsEventAttribute *)(local_58.Data + (longlong)local_50._4_4_ * 0x30)))
     && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = (int)local_50;
  if ((int)local_50 == local_50._4_4_) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&local_58,(int *)((longlong)&local_50 + 4));
  }
  lVar6 = (longlong)iVar4;
  local_50 = CONCAT44(local_50._4_4_,iVar4 + 1);
  *(undefined8 *)&local_58.Data[lVar6 * 0x30].field_0x0 = 0;
  *(FScriptContainerElement **)&local_58.Data[lVar6 * 0x30].field_0x0 =
       local_38.AttrName.Data.AllocatorInstance.Data;
  *(int *)(local_58.Data + lVar6 * 0x30 + 8) = local_38.AttrName.Data.ArrayNum;
  *(int *)(local_58.Data + lVar6 * 0x30 + 0xc) = local_38.AttrName.Data.ArrayMax;
  *(undefined8 *)(local_58.Data + lVar6 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(local_58.Data + lVar6 * 0x30 + 0x10) =
       local_38.AttrValueString.Data.AllocatorInstance.Data;
  *(int *)(local_58.Data + lVar6 * 0x30 + 0x18) = local_38.AttrValueString.Data.ArrayNum;
  *(int *)(local_58.Data + lVar6 * 0x30 + 0x1c) = local_38.AttrValueString.Data.ArrayMax;
  *(double *)(local_58.Data + lVar6 * 0x30 + 0x20) = local_38.AttrValueNumber;
  local_58.Data[lVar6 * 0x30 + 0x28] = (FScriptContainerElement)local_38.AttrValueBool;
  *(AttrTypeEnum *)(local_58.Data + lVar6 * 0x30 + 0x2c) = local_38.AttrType;
  local_38.AttrValueString.Data.ArrayNum = 0;
  local_38.AttrValueString.Data.ArrayMax = 0;
  local_38.AttrValueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.AttrName.Data.ArrayNum = 0;
  local_38.AttrName.Data.ArrayMax = 0;
  local_38.AttrName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pIVar7 = FEngineAnalytics::GetProvider();
  (**(code **)(pIVar7->_padding_ + 0x80))(pIVar7,param_1,&local_58);
  DestructItems<FAnalyticsEventAttribute,int>
            ((FAnalyticsEventAttribute *)local_58.Data,(int)local_50);
  if ((FAnalyticsEventAttribute *)local_58.Data != (FAnalyticsEventAttribute *)0x0) {
    FMemory::Free(local_58.Data);
  }
  return;
}

// UpdateOpenColorIOShaderCompilingStats @ 14d7796d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UpdateOpenColorIOShaderCompilingStats(FOpenColorIOTransformResource *param_1)

{
  FName FVar1;
  FName *pFVar2;
  FThreadSafeStaticStat<FStat_STAT_ShaderCompiling_NumTotalOpenColorIOShaders> FVar3;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  FName local_res10;
  FStatMessage local_18;
  
  FVar3 = StatPtr_STAT_ShaderCompiling_NumTotalOpenColorIOShaders;
  if (StatPtr_STAT_ShaderCompiling_NumTotalOpenColorIOShaders ==
      (FThreadSafeStaticStat<FStat_STAT_ShaderCompiling_NumTotalOpenColorIOShaders>)0x0) {
    pFVar2 = FName::FName(&local_res10,"STAT_ShaderCompiling_NumTotalOpenColorIOShaders");
    FVar3 = (FThreadSafeStaticStat<FStat_STAT_ShaderCompiling_NumTotalOpenColorIOShaders>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)
                       &StatPtr_STAT_ShaderCompiling_NumTotalOpenColorIOShaders,*pFVar2,
                       L"Num Total OpenColorIO Shaders","STATGROUP_ShaderCompiling",
                       "STATCAT_Advanced",L"Shader Compiling",true,false,ST_int64,false,false,
                       MCR_Invalid);
  }
  FVar1 = *(FName *)FVar3;
  if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    local_res10 = FVar1;
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    local_18.NameAndInfo.Number = FVar1.Number & 0xffffafff | 0xa000;
    local_18.StatData.Pad[0] = '\x01';
    local_18.StatData.Pad[1] = '\0';
    local_18.StatData.Pad[2] = '\0';
    local_18.StatData.Pad[3] = '\0';
    local_18.StatData.Pad[4] = '\0';
    local_18.StatData.Pad[5] = '\0';
    local_18.StatData.Pad[6] = '\0';
    local_18.StatData.Pad[7] = '\0';
    local_res10 = FVar1;
    local_18.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(this,&local_18);
    FStatsTrace::Add(&local_res10,1);
    if (this->ScopeCount == 0) {
      FThreadStats::Flush(this,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(this,false,false);
    }
  }
  return;
}

// Z_Construct_UClass_UOpenColorIOBlueprintLibrary_NoRegister @ 14d779a90

UClass * __cdecl Z_Construct_UClass_UOpenColorIOBlueprintLibrary_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOpenColorIOBlueprintLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OpenColorIO",L"OpenColorIOBlueprintLibrary",
               &Z_Registration_Info_UClass_UOpenColorIOBlueprintLibrary.InnerSingleton,
               UOpenColorIOBlueprintLibrary::StaticRegisterNativesUOpenColorIOBlueprintLibrary,0x28,
               8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UOpenColorIOBlueprintLibrary>,
               InternalVTableHelperCtorCaller<UOpenColorIOBlueprintLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOpenColorIOBlueprintLibrary.InnerSingleton;
}

// Z_Construct_UClass_UOpenColorIOSettings_NoRegister @ 14d779b50

UClass * __cdecl Z_Construct_UClass_UOpenColorIOSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOpenColorIOSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OpenColorIO",L"OpenColorIOSettings",
               &Z_Registration_Info_UClass_UOpenColorIOSettings.InnerSingleton,
               UOpenColorIOSettings::StaticRegisterNativesUOpenColorIOSettings,0x40,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<UOpenColorIOSettings>,
               InternalVTableHelperCtorCaller<UOpenColorIOSettings>,local_res8,
               UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOpenColorIOSettings.InnerSingleton;
}

// IMPLEMENT_MODULE_OpenColorIO @ 14d77b560

void __cdecl IMPLEMENT_MODULE_OpenColorIO(void)

{
  return;
}

// AllOpenColorIOShaderMaps'' @ 150459320

void __cdecl `dynamic_atexit_destructor_for_'FOpenColorIOShaderMap::AllOpenColorIOShaderMaps__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = FOpenColorIOShaderMap::AllOpenColorIOShaderMaps.AllocatorInstance.Data;
  if (FOpenColorIOShaderMap::AllOpenColorIOShaderMaps.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (FOpenColorIOShaderMap::AllOpenColorIOShaderMaps.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
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

// GIdToOpenColorIOShaderMap'' @ 150459340

void __cdecl
`dynamic_atexit_destructor_for_'FOpenColorIOShaderMap::GIdToOpenColorIOShaderMap__(void)

{
  void *pvVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  lVar3 = 0x9b;
  puVar2 = (undefined8 *)
           &Z_Construct_UFunction_UOpenColorIODisplayExtensionWrapper_CreateInGameOpenColorIODisplayExtension_Statics
            ::FuncParams.field_0x10;
  do {
    lVar3 = lVar3 + -1;
    *(undefined4 *)(puVar2 + -9) = 0;
    pvVar1 = (void *)puVar2[-10];
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    TSparseArray<TSparseSetElement<TTuple<FOpenColorIOShaderMapId,FOpenColorIOShaderMap_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FOpenColorIOShaderMapId,FOpenColorIOShaderMap_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FOpenColorIOShaderMapId,FOpenColorIOShaderMap_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)(puVar2 + -0x12));
    puVar2 = puVar2 + -10;
  } while (lVar3 != 0);
  return;
}

// ShaderTypeRegistration'' @ 1504593a0

void __cdecl
`dynamic_atexit_destructor_for_'FOpenColorIOInvalidPixelShader::ShaderTypeRegistration__(void)

{
  return;
}

// ShaderTypeRegistration'' @ 1504593b0

void __cdecl `dynamic_atexit_destructor_for_'FOpenColorIOPixelShader::ShaderTypeRegistration__(void)

{
  return;
}

// StaticResource'' @ 1504593c0

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

// StaticResource'' @ 150459440

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

// StaticResource'' @ 1504594c0

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

// `dynamic_atexit_destructor_for_'AllSamplerResourceNames'' @ 150459540

void __cdecl
`UOpenColorIOColorTransform::BuildShaderParamMetadata'::__l2::
_dynamic_atexit_destructor_for__AllSamplerResourceNames__(void)

{
  DestructItems<FString,int>
            ((FString *)AllSamplerResourceNames.AllocatorInstance.Data,
             AllSamplerResourceNames.ArrayNum);
  if (AllSamplerResourceNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(AllSamplerResourceNames.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'AllTextureResourceNames'' @ 150459580

void __cdecl
`UOpenColorIOColorTransform::BuildShaderParamMetadata'::__l2::
_dynamic_atexit_destructor_for__AllTextureResourceNames__(void)

{
  DestructItems<FString,int>
            ((FString *)AllTextureResourceNames.AllocatorInstance.Data,
             AllTextureResourceNames.ArrayNum);
  if (AllTextureResourceNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(AllTextureResourceNames.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'CVarOpenColorIOAllowAsyncCompilation'' @ 1504595c0

void __cdecl _dynamic_atexit_destructor_for__CVarOpenColorIOAllowAsyncCompilation__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarOpenColorIOAllowAsyncCompilation);
  return;
}

// `dynamic_atexit_destructor_for_'CVarShowOpenColorIONoShaderDDC'' @ 1504595e0

void __cdecl _dynamic_atexit_destructor_for__CVarShowOpenColorIONoShaderDDC__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarShowOpenColorIONoShaderDDC);
  return;
}

// `dynamic_atexit_destructor_for_'LogOpenColorIO'' @ 150459600

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogOpenColorIO__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogOpenColorIO);
  return;
}

// `dynamic_atexit_destructor_for_'StaticStructMetadata'' @ 150459620

void __cdecl
`FOpenColorIOInvalidShaderParameters::FTypeInfo::GetStructMetadata'::__l2::
_dynamic_atexit_destructor_for__StaticStructMetadata__(void)

{
  FShaderParametersMetadata::~FShaderParametersMetadata
            (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FOpenColorIOInvalidShaderParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata);
  return;
}

// `dynamic_atexit_destructor_for_'StaticStructMetadata'' @ 150459640

void __cdecl
`FOpenColorIOPixelShaderParameters::FTypeInfo::GetStructMetadata'::__l2::
_dynamic_atexit_destructor_for__StaticStructMetadata__(void)

{
  FShaderParametersMetadata::~FShaderParametersMetadata
            (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FOpenColorIOPixelShaderParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata);
  return;
}

// `dynamic_atexit_destructor_for_'StaticType'' @ 150459660

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
`FOpenColorIOInvalidPixelShader::GetStaticType'::__l2::_dynamic_atexit_destructor_for__StaticType__
          (void)

{
  FShaderType::~FShaderType((FShaderType *)&::StaticType);
  return;
}

// `dynamic_atexit_destructor_for_'StaticType'' @ 150459680

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
`FOpenColorIOPixelShader::GetStaticType'::__l2::_dynamic_atexit_destructor_for__StaticType__(void)

{
  FShaderType::~FShaderType((FShaderType *)&::StaticType);
  return;
}

