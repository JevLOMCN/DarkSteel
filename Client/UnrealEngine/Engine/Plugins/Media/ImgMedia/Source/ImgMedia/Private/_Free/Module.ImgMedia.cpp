// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ImgMedia
// Functions: 212

// GlobalCache'' @ 141445fb0

void __cdecl `dynamic_initializer_for_'IImgMediaModule::GlobalCache__(void)

{
  atexit(`dynamic_atexit_destructor_for_'IImgMediaModule::GlobalCache__);
  return;
}

// StaticResource'' @ 141445fd0

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

// StaticResource'' @ 141446090

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

// `dynamic_initializer_for_'CVarEnableUncompressedExrGpuReader'' @ 141446150

void __cdecl _dynamic_initializer_for__CVarEnableUncompressedExrGpuReader__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = true;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarEnableUncompressedExrGpuReader,L"r.ExrReadAndProcessOnGPU",local_res8,
             L"Allows reading of Large Uncompressed EXR files directly into Structured Buffer.\nand be processed on GPU\n"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarEnableUncompressedExrGpuReader__);
  return;
}

// `dynamic_initializer_for_'CVarExrReaderUseUploadHeap'' @ 1414461a0

void __cdecl _dynamic_initializer_for__CVarExrReaderUseUploadHeap__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarExrReaderUseUploadHeap,L"r.ExrReaderGPU.UseUploadHeap",&bExrReaderUseUploadHeap,
             L"Utilizes upload heap and copies raw exr buffer asynchronously.\nRead-only and to be set in a config file (requires restart)."
             ,0x24);
  atexit(_dynamic_atexit_destructor_for__CVarExrReaderUseUploadHeap__);
  return;
}

// `dynamic_initializer_for_'CVarImgMediaFieldOfViewMultiplier'' @ 1414461f0

void __cdecl _dynamic_initializer_for__CVarImgMediaFieldOfViewMultiplier__(void)

{
  float local_res8 [8];
  
  local_res8[0] = 1.0;
  TAutoConsoleVariable<float>::TAutoConsoleVariable<float>
            (&CVarImgMediaFieldOfViewMultiplier,L"ImgMedia.FieldOfViewMultiplier",local_res8,
             L"Multiply the field of view for active cameras by this value, generally to increase the frustum overall sizes to mitigate missing tile artifacts.\n"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarImgMediaFieldOfViewMultiplier__);
  return;
}

// `dynamic_initializer_for_'CVarImgMediaFrameInvalidationMaxCount'' @ 141446240

void __cdecl _dynamic_initializer_for__CVarImgMediaFrameInvalidationMaxCount__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 2;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarImgMediaFrameInvalidationMaxCount,L"ImgMedia.FrameInvalidationMaxCount",local_res8
             ,
             L"Maximum number of cached frames that can be invalidated when missing the latest mips/tiles."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarImgMediaFrameInvalidationMaxCount__);
  return;
}

// `dynamic_initializer_for_'CVarImgMediaMaxFrameSequenceGap'' @ 141446290

void __cdecl _dynamic_initializer_for__CVarImgMediaMaxFrameSequenceGap__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 10000;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarImgMediaMaxFrameSequenceGap,L"ImgMedia.MaxFrameSequenceGap",local_res8,
             L"Maximum number of frames that will be filled by empty frames in a sequence when there is a gap in the frame indices of the filenames."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarImgMediaMaxFrameSequenceGap__);
  return;
}

// `dynamic_initializer_for_'CVarImgMediaMipLevelPadding'' @ 1414462e0

void __cdecl _dynamic_initializer_for__CVarImgMediaMipLevelPadding__(void)

{
  float local_res8 [8];
  
  local_res8[0] = 0.0;
  TAutoConsoleVariable<float>::TAutoConsoleVariable<float>
            (&CVarImgMediaMipLevelPadding,L"ImgMedia.MipMapLevelPadding",local_res8,
             L"Value padded onto the estimated (minimum and maximum) mipmap levels used by the loader.\n"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarImgMediaMipLevelPadding__);
  return;
}

// `dynamic_initializer_for_'CVarImgMediaMipMapDebugEnable'' @ 141446330

void __cdecl _dynamic_initializer_for__CVarImgMediaMipMapDebugEnable__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = false;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarImgMediaMipMapDebugEnable,L"ImgMedia.MipMapDebug",local_res8,
             L"Display debug on mipmaps and tiles used by the ImgMedia plugin.\n   0: off (default)\n   1: on\n"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarImgMediaMipMapDebugEnable__);
  return;
}

// `dynamic_initializer_for_'CVarImgMediaProcessTilesInnerOnly'' @ 141446380

void __cdecl _dynamic_initializer_for__CVarImgMediaProcessTilesInnerOnly__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = false;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarImgMediaProcessTilesInnerOnly,L"ImgMedia.ICVFX.InnerOnlyTiles",local_res8,
             L"This CVar will ignore tile calculation for all viewports except for Display Cluster inner viewports. User should enable upscaling on Media plate to display lower quality mips instead, otherwise other viewports will only display tiles loaded specifically for inner viewport and nothing else. \n"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarImgMediaProcessTilesInnerOnly__);
  return;
}

// `dynamic_initializer_for_'FImgMediaLoaderUtilsTestsAutomationTestInstance'' @ 1414463d0

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FImgMediaLoaderUtilsTestsAutomationTestInstance__
          (void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FImgMediaLoaderUtilsTests");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FImgMediaLoaderUtilsTestsAutomationTestInstance,&local_18,false
            );
  FImgMediaLoaderUtilsTestsAutomationTestInstance._0_8_ = &___7FImgMediaLoaderUtilsTests__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FImgMediaLoaderUtilsTestsAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FImgMediaSanitizePathTestsAutomationTestInstance'' @ 141446430

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FImgMediaSanitizePathTestsAutomationTestInstance__
          (void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FImgMediaSanitizePathTests");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FImgMediaSanitizePathTestsAutomationTestInstance,&local_18,
             false);
  FImgMediaSanitizePathTestsAutomationTestInstance._0_8_ = &___7FImgMediaSanitizePathTests__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FImgMediaSanitizePathTestsAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FImgMediaTestsAutomationTestInstance'' @ 141446490

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FImgMediaTestsAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FImgMediaTests");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FImgMediaTestsAutomationTestInstance,&local_18,false);
  FImgMediaTestsAutomationTestInstance._0_8_ = &___7FImgMediaTests__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FImgMediaTestsAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FillGapsInSequenceOption'' @ 1414464f0

void __cdecl ImgMedia::_dynamic_initializer_for__FillGapsInSequenceOption__(void)

{
  ::FName::FName(&FillGapsInSequenceOption,"FillGapsInSequence");
  return;
}

// `dynamic_initializer_for_'FrameRateOverrideDenonimatorOption'' @ 141446510

void __cdecl ImgMedia::_dynamic_initializer_for__FrameRateOverrideDenonimatorOption__(void)

{
  ::FName::FName(&FrameRateOverrideDenonimatorOption,"FrameRateOverrideDenonimator");
  return;
}

// `dynamic_initializer_for_'FrameRateOverrideNumeratorOption'' @ 141446530

void __cdecl ImgMedia::_dynamic_initializer_for__FrameRateOverrideNumeratorOption__(void)

{
  ::FName::FName(&FrameRateOverrideNumeratorOption,"FrameRateOverrideNumerator");
  return;
}

// `dynamic_initializer_for_'GPUStat_ExrImgMediaReaderGpu'' @ 141446550

void __cdecl _dynamic_initializer_for__GPUStat_ExrImgMediaReaderGpu__(void)

{
  atexit(_dynamic_atexit_destructor_for__GPUStat_ExrImgMediaReaderGpu__);
  return;
}

// `dynamic_initializer_for_'GPUStat_ExrImgMediaReaderGpu_AllocateBuffer'' @ 141446570

void __cdecl _dynamic_initializer_for__GPUStat_ExrImgMediaReaderGpu_AllocateBuffer__(void)

{
  atexit(_dynamic_atexit_destructor_for__GPUStat_ExrImgMediaReaderGpu_AllocateBuffer__);
  return;
}

// `dynamic_initializer_for_'GPUStat_ExrImgMediaReaderGpu_CopyUploadBuffer'' @ 141446590

void __cdecl _dynamic_initializer_for__GPUStat_ExrImgMediaReaderGpu_CopyUploadBuffer__(void)

{
  atexit(_dynamic_atexit_destructor_for__GPUStat_ExrImgMediaReaderGpu_CopyUploadBuffer__);
  return;
}

// `dynamic_initializer_for_'GPUStat_ExrImgMediaReaderGpu_MipRender'' @ 1414465b0

void __cdecl _dynamic_initializer_for__GPUStat_ExrImgMediaReaderGpu_MipRender__(void)

{
  atexit(_dynamic_atexit_destructor_for__GPUStat_ExrImgMediaReaderGpu_MipRender__);
  return;
}

// `dynamic_initializer_for_'GPUStat_ExrImgMediaReaderGpu_MipUpscale'' @ 1414465d0

void __cdecl _dynamic_initializer_for__GPUStat_ExrImgMediaReaderGpu_MipUpscale__(void)

{
  atexit(_dynamic_atexit_destructor_for__GPUStat_ExrImgMediaReaderGpu_MipUpscale__);
  return;
}

// `dynamic_initializer_for_'LogImgMedia'' @ 1414465f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogImgMedia__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogImgMedia,L"LogImgMedia",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogImgMedia__);
  return;
}

// `dynamic_initializer_for_'MipMapInfoOption'' @ 141446630

void __cdecl ImgMedia::_dynamic_initializer_for__MipMapInfoOption__(void)

{
  ::FName::FName(&MipMapInfoOption,"ImgMipMapInfo");
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantImgMedia'' @ 141446650

void __cdecl _dynamic_initializer_for__ModuleRegistrantImgMedia__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "ImgMedia";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"ImgMedia",8);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FImgMediaModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'NumTilesXOption'' @ 1414466a0

void __cdecl ImgMedia::_dynamic_initializer_for__NumTilesXOption__(void)

{
  ::FName::FName(&NumTilesXOption,"ImgNumTilesX");
  return;
}

// `dynamic_initializer_for_'NumTilesYOption'' @ 1414466c0

void __cdecl ImgMedia::_dynamic_initializer_for__NumTilesYOption__(void)

{
  ::FName::FName(&NumTilesYOption,"ImgNumTilesY");
  return;
}

// `dynamic_initializer_for_'ProxyOverrideOption'' @ 1414466e0

void __cdecl ImgMedia::_dynamic_initializer_for__ProxyOverrideOption__(void)

{
  ::FName::FName(&ProxyOverrideOption,"ProxyOverride");
  return;
}

// `dynamic_initializer_for_'SourceColorSettingsOption'' @ 141446700

void __cdecl ImgMedia::_dynamic_initializer_for__SourceColorSettingsOption__(void)

{
  ::FName::FName(&SourceColorSettingsOption,"SourceColorSettings");
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ExrMediaReaderPoolMem'' @ 141446720

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ExrMediaReaderPoolMem__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ExrMediaReaderPoolMem ==
      (FThreadSafeStaticStat<FStat_STAT_ExrMediaReaderPoolMem>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ExrMediaReaderPoolMem");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ExrMediaReaderPoolMem,*pFVar1,
               L"EXR Reader Pool Memory.","STATGROUP_ImgMediaPlugin","STATCAT_Advanced",
               L"ImgMediaPlugin",true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ImgMedia_LoaderAbandonWork'' @ 1414467b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ImgMedia_LoaderAbandonWork__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ImgMedia_LoaderAbandonWork ==
      (FThreadSafeStaticStat<FStat_STAT_ImgMedia_LoaderAbandonWork>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ImgMedia_LoaderAbandonWork");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ImgMedia_LoaderAbandonWork,*pFVar1,
               L"ImgMedia Loader Abadon Work","STATGROUP_Media","STATCAT_Advanced",L"Media",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ImgMedia_LoaderFinalizeWork'' @ 141446840

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ImgMedia_LoaderFinalizeWork__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ImgMedia_LoaderFinalizeWork ==
      (FThreadSafeStaticStat<FStat_STAT_ImgMedia_LoaderFinalizeWork>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ImgMedia_LoaderFinalizeWork");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ImgMedia_LoaderFinalizeWork,*pFVar1,
               L"ImgMedia Loader Finalize Work","STATGROUP_Media","STATCAT_Advanced",L"Media",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ImgMedia_LoaderLoadSequence'' @ 1414468d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ImgMedia_LoaderLoadSequence__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ImgMedia_LoaderLoadSequence ==
      (FThreadSafeStaticStat<FStat_STAT_ImgMedia_LoaderLoadSequence>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ImgMedia_LoaderLoadSequence");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ImgMedia_LoaderLoadSequence,*pFVar1,
               L"ImgMedia Loader Load Sequence","STATGROUP_Media","STATCAT_Advanced",L"Media",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ImgMedia_LoaderReadFrame'' @ 141446960

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ImgMedia_LoaderReadFrame__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ImgMedia_LoaderReadFrame ==
      (FThreadSafeStaticStat<FStat_STAT_ImgMedia_LoaderReadFrame>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ImgMedia_LoaderReadFrame");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ImgMedia_LoaderReadFrame,*pFVar1,
               L"ImgMedia Loader Read Frame","STATGROUP_Media","STATCAT_Advanced",L"Media",true,true
               ,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ImgMedia_LoaderReleaseCache'' @ 1414469f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ImgMedia_LoaderReleaseCache__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ImgMedia_LoaderReleaseCache ==
      (FThreadSafeStaticStat<FStat_STAT_ImgMedia_LoaderReleaseCache>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ImgMedia_LoaderReleaseCache");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ImgMedia_LoaderReleaseCache,*pFVar1,
               L"ImgMedia Loader Release Cache","STATGROUP_Media","STATCAT_Advanced",L"Media",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ImgMedia_MipMapUpdateCache'' @ 141446a80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ImgMedia_MipMapUpdateCache__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ImgMedia_MipMapUpdateCache ==
      (FThreadSafeStaticStat<FStat_STAT_ImgMedia_MipMapUpdateCache>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ImgMedia_MipMapUpdateCache");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ImgMedia_MipMapUpdateCache,*pFVar1,
               L"ImgMedia MipMap Update Cache","STATGROUP_Media","STATCAT_Advanced",L"Media",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ImgMedia_PlayerClose'' @ 141446b10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ImgMedia_PlayerClose__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ImgMedia_PlayerClose ==
      (FThreadSafeStaticStat<FStat_STAT_ImgMedia_PlayerClose>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ImgMedia_PlayerClose");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ImgMedia_PlayerClose,*pFVar1,
               L"ImgMedia Player Close","STATGROUP_Media","STATCAT_Advanced",L"Media",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ImgMedia_PlayerTickInput'' @ 141446ba0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ImgMedia_PlayerTickInput__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ImgMedia_PlayerTickInput ==
      (FThreadSafeStaticStat<FStat_STAT_ImgMedia_PlayerTickInput>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ImgMedia_PlayerTickInput");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ImgMedia_PlayerTickInput,*pFVar1,
               L"ImgMedia Player TickInput","STATGROUP_Media","STATCAT_Advanced",L"Media",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Media_ImgMedia_Source_ImgMedia_Public_ImgMediaSourceColorSettings_h__Script_ImgMedia_3672529486'' @ 141446c30

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Media_ImgMedia_Source_ImgMedia_Public_ImgMediaSourceColorSettings_h__Script_ImgMedia_3672529486__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ImgMedia",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Media_ImgMedia_Source_ImgMedia_Public_ImgMediaSourceColorSettings_h__Script_ImgMedia_Statics
             ::ScriptStructInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Media_ImgMedia_Source_ImgMedia_Public_ImgMediaSourceColorSettings_h__Script_ImgMedia_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Media_ImgMedia_Source_ImgMedia_Public_ImgMediaSource_h__Script_ImgMedia_56024547'' @ 141446c80

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Media_ImgMedia_Source_ImgMedia_Public_ImgMediaSource_h__Script_ImgMedia_56024547__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ImgMedia",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Media_ImgMedia_Source_ImgMedia_Public_ImgMediaSource_h__Script_ImgMedia_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Media_ImgMedia_Source_ImgMedia_Public_ImgMediaSource_h__Script_ImgMedia_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_ImgMedia'' @ 141446cd0

void __cdecl _dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_ImgMedia__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0x3f51bdbe;
  local_res8[0].DeclarationsHash = 0xd7e2400;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_ImgMedia,L"/Script/ImgMedia",
             &Z_Registration_Info_UPackage__Script_ImgMedia,local_res8);
  return;
}

// `dynamic_initializer_for_'_GCsvCategory_ImgMedia'' @ 141446d10

void __cdecl _dynamic_initializer_for___GCsvCategory_ImgMedia__(void)

{
  FString::operator=(&_GCsvCategory_ImgMedia.Name,L"ImgMedia");
  _GCsvCategory_ImgMedia.Index =
       FCsvProfiler::RegisterCategory(&_GCsvCategory_ImgMedia.Name,false,false);
  atexit(_dynamic_atexit_destructor_for___GCsvCategory_ImgMedia__);
  return;
}

// Z_Construct_UEnum_ImgMedia_EMediaSourceEncoding @ 14ea2e1c0

UEnum * __cdecl Z_Construct_UEnum_ImgMedia_EMediaSourceEncoding(void)

{
  if (Z_Registration_Info_UEnum_EMediaSourceEncoding.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EMediaSourceEncoding.InnerSingleton,
               &Z_Construct_UEnum_ImgMedia_EMediaSourceEncoding_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EMediaSourceEncoding.InnerSingleton;
}

// EMediaSourceEncoding_StaticEnum @ 14ea2fa00

UEnum * __cdecl EMediaSourceEncoding_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMediaSourceEncoding.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ImgMedia();
    Z_Registration_Info_UEnum_EMediaSourceEncoding.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ImgMedia_EMediaSourceEncoding,(UObject *)pUVar1,
                       L"EMediaSourceEncoding");
  }
  return Z_Registration_Info_UEnum_EMediaSourceEncoding.OuterSingleton;
}

// `scalar_deleting_destructor' @ 14ea2fa40

void * __thiscall
FImgMediaSanitizePathTests::_scalar_deleting_destructor_
          (FImgMediaSanitizePathTests *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// NewStructOps @ 14ea2fa80

void * __cdecl Z_Construct_UScriptStruct_FMediaSourceColorSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x50;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMediaSourceColorSettings,&UE::CoreUObject::Private::Construct<FMediaSourceColorSettings>,&UE::CoreUObject::Private::ConstructForTests<FMediaSourceColorSettings>,&UE::CoreUObject::Private::Destruct<FMediaSourceColorSettings>,&UE::CoreUObject::Private::Copy<FMediaSourceColorSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UPackage__Script_ImgMedia @ 14ea2fac0

UPackage * __cdecl Z_Construct_UPackage__Script_ImgMedia(void)

{
  if (Z_Registration_Info_UPackage__Script_ImgMedia.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_ImgMedia.OuterSingleton,&PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_ImgMedia.OuterSingleton;
}

// `scalar_deleting_destructor' @ 14ea2fd70

void * __thiscall
TBaseRawMethodDelegateInstance<0,FImgMediaModule,void___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FImgMediaModule,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ea2fdb0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FImgMediaPlayer,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<FImgMediaPlayer,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ea2fe00

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FImgMediaScheduler,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<FImgMediaScheduler,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ea2fe50

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FImgMediaGlobalCache,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FImgMediaGlobalCache,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x158);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ea307e0

void * __thiscall FImgMediaModule::_scalar_deleting_destructor_(FImgMediaModule *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FString,int>
            ((FString *)(this->FileExtensions).AllocatorInstance.Data,
             (this->FileExtensions).ArrayNum);
  pFVar1 = (this->FileExtensions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SceneViewExtension).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Scheduler).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7IImgMediaModule__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)this->_padding_,
             (int)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_padding_);
  this->_padding_ = (longlong)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ea30990

void * __thiscall IImgMediaModule::_scalar_deleting_destructor_(IImgMediaModule *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7IImgMediaModule__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnImgMediaPlayerCreated).field_0x8,
             *(int *)&(this->OnImgMediaPlayerCreated).field_0x10);
  pvVar1 = *(void **)&(this->OnImgMediaPlayerCreated).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnImgMediaPlayerCreated);
  this->_padding_ = (longlong)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// Z_Construct_UClass_UImgMediaSource @ 14ea30a10

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UImgMediaSource(void)

{
  if (Z_Registration_Info_UClass_UImgMediaSource.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UImgMediaSource.OuterSingleton,
               &Z_Construct_UClass_UImgMediaSource_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UImgMediaSource.OuterSingleton;
}

// Z_Construct_UScriptStruct_FMediaSourceColorSettings @ 14ea30a50

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMediaSourceColorSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMediaSourceColorSettings.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMediaSourceColorSettings.InnerSingleton,
               &Z_Construct_UScriptStruct_FMediaSourceColorSettings_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMediaSourceColorSettings.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMediaSourceColorSettings.InnerSingleton;
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

// NewStructOps @ 14ea30ad0

void * __cdecl
Z_Construct_UScriptStruct_FImgMediaSourceCustomizationSequenceProxy_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FImgMediaSourceCustomizationSequenceProxy,&UE::CoreUObject::Private::Construct<FImgMediaSourceCustomizationSequenceProxy>,&UE::CoreUObject::Private::ConstructForTests<FImgMediaSourceCustomizationSequenceProxy>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 14ea30c10

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FImgMediaSceneViewExtension,SharedPointerInternals::DefaultDeleter<FImgMediaSceneViewExtension>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FImgMediaSceneViewExtension,SharedPointerInternals::DefaultDeleter<FImgMediaSceneViewExtension>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ea31a00

void * __thiscall FImgMediaTests::_scalar_deleting_destructor_(FImgMediaTests *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ea32080

void * __thiscall
FImgMediaLoaderUtilsTests::_scalar_deleting_destructor_
          (FImgMediaLoaderUtilsTests *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// Z_Construct_UFunction_UImgMediaSource_AddTargetObject @ 14ea320c0

UFunction * __cdecl Z_Construct_UFunction_UImgMediaSource_AddTargetObject(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UImgMediaSource_AddTargetObject_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UImgMediaSource_GetProxies @ 14ea32100

UFunction * __cdecl Z_Construct_UFunction_UImgMediaSource_GetProxies(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UImgMediaSource_GetProxies_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UImgMediaSource_GetSequencePath @ 14ea32140

UFunction * __cdecl Z_Construct_UFunction_UImgMediaSource_GetSequencePath(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UImgMediaSource_GetSequencePath_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UImgMediaSource_RemoveTargetObject @ 14ea32180

UFunction * __cdecl Z_Construct_UFunction_UImgMediaSource_RemoveTargetObject(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UImgMediaSource_RemoveTargetObject_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UImgMediaSource_SetSequencePath @ 14ea321c0

UFunction * __cdecl Z_Construct_UFunction_UImgMediaSource_SetSequencePath(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UImgMediaSource_SetSequencePath_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UImgMediaSource_SetTokenizedSequencePath @ 14ea32200

UFunction * __cdecl Z_Construct_UFunction_UImgMediaSource_SetTokenizedSequencePath(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UImgMediaSource_SetTokenizedSequencePath_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_IsPathRelativeToProjectRoot_SetBit @ 14ea32240

void __cdecl
Z_Construct_UClass_UImgMediaSource_Statics::NewProp_IsPathRelativeToProjectRoot_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x88) = 1;
  return;
}

// NewProp_bFillGapsInSequence_SetBit @ 14ea32250

void __cdecl
Z_Construct_UClass_UImgMediaSource_Statics::NewProp_bFillGapsInSequence_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xa8) = 1;
  return;
}

// operator=<FStructuredBufferPoolItem,`FExrImgMediaReaderGpu::AllocateGpuBufferFromPool'::__l2::<lambda_1>_> @ 14ea32460

TSharedPtr<FStructuredBufferPoolItem,1> * __thiscall
TSharedPtr<FStructuredBufferPoolItem,1>::
operator=<FStructuredBufferPoolItem,_FExrImgMediaReaderGpu::AllocateGpuBufferFromPool_::__l2::<lambda_1>_>
          (TSharedPtr<FStructuredBufferPoolItem,1> *this,
          TRawPtrProxyWithDeleter<FStructuredBufferPoolItem,_public:_virtual_class_TSharedPtr<FStructuredBufferPoolItem,1>___cdecl_FExrImgMediaReaderGpu::AllocateGpuBufferFromPool(unsigned_int)_::_2_::<lambda_1>_>
          *param_1)

{
  FStructuredBufferPoolItem *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  TSharedPtr<FStructuredBufferPoolItem,1> local_18;
  
  pFVar1 = param_1->Object;
  local_18.Object = pFVar1;
  pTVar2 = ::operator_new(0x30);
  local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2[1]._padding_ = (longlong)(param_1->Deleter).WeakReaderPtr.Object;
    *(TReferenceControllerBase<1> **)&pTVar2[1].SharedReferenceCount =
         (param_1->Deleter).WeakReaderPtr.WeakReferenceCount.ReferenceController;
    (param_1->Deleter).WeakReaderPtr.WeakReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    (param_1->Deleter).WeakReaderPtr.Object = (FExrImgMediaReaderGpu *)0x0;
    *(uint *)&pTVar2[2]._padding_ = (param_1->Deleter).AllocSize;
    pTVar2->_padding_ =
         (longlong)
         &SharedPointerInternals::
          TReferenceControllerWithDeleter<FStructuredBufferPoolItem,`FExrImgMediaReaderGpu::AllocateGpuBufferFromPool'::`2'::<lambda_1>,1>
          ::_vftable_;
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    *(FStructuredBufferPoolItem **)&pTVar2[2].SharedReferenceCount = pFVar1;
    local_18.SharedReferenceCount.ReferenceController = pTVar2;
  }
  if (this != &local_18) {
    local_18.Object = (FStructuredBufferPoolItem *)0x0;
    this->Object = pFVar1;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&local_18.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return this;
}

// Async<`FImgMediaPlayer::Open'::__l2::<lambda_5>_> @ 14ea33050

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TFuture<void> * __cdecl
Async<_FImgMediaPlayer::Open_::__l2::<lambda_5>_>
          (TFuture<void> *__return_storage_ptr__,EAsyncExecution param_1,<lambda_5> *param_2,
          TUniqueFunction<void___cdecl(void)> *param_3)

{
  atomic<unsigned_int> *paVar1;
  atomic<int> *paVar2;
  atomic<unsigned_int> aVar3;
  atomic<int> aVar4;
  code *pcVar5;
  TFutureState<void> *pTVar6;
  TFutureState<FRunnableThread_*> *pTVar7;
  bool bVar8;
  int iVar9;
  FPipe *pFVar10;
  TFuture<void> *pTVar11;
  FTaskBase *pFVar12;
  FTSTicker *this;
  FTaskBase *pFVar13;
  FRunnableThread *pFVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  code **ppcVar17;
  FSharedReferencer<1> FVar18;
  FTaskBase *pFVar19;
  FSharedReferencer<1> FVar20;
  longlong *plVar21;
  ForAnyElementType FVar22;
  FTaskBase *pFVar23;
  Type TVar24;
  undefined1 auStackY_1d8 [32];
  EExtendedTaskPriority local_198;
  ETaskPriority local_197 [7];
  TPromise<void> local_190;
  FRunnableThread *local_178;
  FTaskBase *local_170;
  FRunnableThread *local_168;
  TPromise<FRunnableThread_*> local_160;
  TPromise<FRunnableThread_*> local_148;
  FString local_130;
  FString local_120;
  TWeakPtr<FTSTicker::FElement,1> local_110;
  FTaskBase *local_f8;
  FPipe local_e8;
  code *local_b8;
  code *pcStack_b0;
  TEventCount<unsigned_int> *local_a8;
  FPipe *local_a0;
  FTaskBase *local_98;
  TReferenceControllerBase<1> *local_90;
  undefined1 local_88;
  code *local_78 [2];
  code *local_68 [3];
  code **local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  pFVar23 = (FTaskBase *)0x0;
  local_178 = (FRunnableThread *)((ulonglong)local_178 & 0xffffffff00000000);
  local_f8 = (FTaskBase *)0x0;
  pFVar10 = FMemory::Malloc(0x48,8);
  pFVar10->LastTask =
       (atomic<UE::Tasks::Private::FTaskBase_*>)
       &UE::Core::Private::Function::
        TFunction_OwnedObject<`FImgMediaPlayer::Open'::`2'::<lambda_5>,1,1>::_vftable_;
  pFVar10->TaskCount = (atomic<unsigned___int64>)param_2->FrameRateOverride;
  (pFVar10->EmptyEventRef).Object = (TEventCount<unsigned_int> *)(param_2->LoaderPtr).Object;
  (pFVar10->EmptyEventRef).SharedReferenceCount.ReferenceController =
       (param_2->LoaderPtr).WeakReferenceCount.ReferenceController;
  (param_2->LoaderPtr).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (param_2->LoaderPtr).Object = (FImgMediaLoader *)0x0;
  pFVar10->DebugName = (wchar_t *)0x0;
  pFVar10->DebugName = (wchar_t *)(param_2->Proxy).Data.AllocatorInstance.Data;
  (param_2->Proxy).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)&pFVar10[1].LastTask = (param_2->Proxy).Data.ArrayNum;
  *(int *)&pFVar10[1].LastTask.field_0x4 = (param_2->Proxy).Data.ArrayMax;
  (param_2->Proxy).Data.ArrayNum = 0;
  (param_2->Proxy).Data.ArrayMax = 0;
  local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)pFVar10;
  FString::FString((FString *)&pFVar10[1].TaskCount,&param_2->SequencePath);
  *(bool *)&pFVar10[1].EmptyEventRef.SharedReferenceCount.ReferenceController = param_2->Loop;
  *(bool *)((longlong)&pFVar10[1].EmptyEventRef.SharedReferenceCount.ReferenceController + 1) =
       param_2->bIsSequencerEnvironment;
  if (&pFVar10->TaskCount != (atomic<unsigned___int64> *)0x0) {
    local_f8 = (FTaskBase *)
               UE::Core::Private::Function::
               TFunctionRefCaller<`FImgMediaPlayer::Open'::__l2::<lambda_5>,void>::Call;
  }
  TPromise<void>::TPromise<void>(&local_190,param_3);
  if ((local_190.bFutureRetrieved != false) &&
     (bVar8 = FDebug::CheckVerifyFailedImpl2
                        ("!bFutureRetrieved",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x24d,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    pTVar11 = (TFuture<void> *)(*pcVar5)();
    return pTVar11;
  }
  local_190.bFutureRetrieved = true;
  if (((FTaskBase *)local_190.State.Object == (FTaskBase *)0x0) &&
     (bVar8 = FDebug::CheckVerifyFailedImpl2
                        ("State.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x283,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    pTVar11 = (TFuture<void> *)(*pcVar5)();
    return pTVar11;
  }
  FVar20.ReferenceController = local_190.State.SharedReferenceCount.ReferenceController;
  local_170 = (FTaskBase *)local_190.State.Object;
  if (local_190.State.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
     ) {
    LOCK();
    (local_190.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_190.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
    ;
    UNLOCK();
  }
  switch(param_1) {
  case TaskGraph:
  case TaskGraphMainThread:
    TVar24 = GameThread;
    if (param_1 == TaskGraph) {
      TVar24 = AnyNormalThreadNormalTask;
    }
    pFVar12 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0x130,0x10);
    pFVar19 = pFVar23;
    if (pFVar12 != (FTaskBase *)0x0) {
      FBaseGraphTask::FBaseGraphTask
                ((FBaseGraphTask *)pFVar12,
                 (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                  *)0x0);
      pFVar12->_padding_ = (longlong)&___7__TGraphTask_V__TAsyncGraphTask_X____6B_;
      pFVar19 = pFVar12;
    }
    pFVar19[1]._padding_ = (longlong)local_f8;
    *(TReferenceControllerBase<1> **)&pFVar19[1].RefCount =
         local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
    local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pFVar19[1]._padding_ = CONCAT44(local_e8.LastTask._4_4_,local_e8.LastTask._0_4_);
    pFVar19[1]._padding_ = CONCAT44(local_e8.TaskCount._4_4_,local_e8.TaskCount._0_4_);
    pFVar19[1]._padding_ = (longlong)local_e8.EmptyEventRef.Object;
    if (pFVar19[1]._padding_ != 0) {
      local_f8 = pFVar23;
    }
    pFVar19[1].Pipe = (FPipe *)local_190.State.Object;
    *(TReferenceControllerBase<1> **)&pFVar19[1].StateChangeEvent =
         local_190.State.SharedReferenceCount.ReferenceController;
    *(bool *)&pFVar19[1].ExecutingThreadId = local_190.bFutureRetrieved;
    local_190.State.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_190.State.Object = (TFutureState<void> *)0x0;
    *(Type *)&pFVar19[1].TraceId = TVar24;
    UE::Tasks::Private::TranslatePriority(TVar24,local_197,&local_198);
    UE::Tasks::Private::FTaskBase::Init(pFVar19,L"GraphTask",local_197[0],local_198,None);
    if (pFVar19 == (FTaskBase *)0x0) {
      UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)0x0,0x130);
    }
    else {
      LOCK();
      pFVar19->RefCount = (atomic<unsigned_int>)((int)pFVar19->RefCount + 1);
      UNLOCK();
      UE::Tasks::Private::FTaskBase::TryLaunch(pFVar19,0x130);
      LOCK();
      paVar1 = &pFVar19->RefCount;
      aVar3 = *paVar1;
      *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<unsigned_int>)0x1) {
        (**(code **)pFVar19->_padding_)(pFVar19,1);
      }
    }
    break;
  case TaskGraphMainTick:
    this = FTSTicker::GetCoreTicker();
    local_b8 = (code *)CONCAT44(local_e8.LastTask._4_4_,local_e8.LastTask._0_4_);
    pcStack_b0 = (code *)CONCAT44(local_e8.TaskCount._4_4_,local_e8.TaskCount._0_4_);
    local_e8.DebugName = (wchar_t *)local_f8;
    local_a0 = (FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
    local_98 = (FTaskBase *)local_190.State.Object;
    local_90 = local_190.State.SharedReferenceCount.ReferenceController;
    local_88 = local_190.bFutureRetrieved;
    local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    local_a8 = local_e8.EmptyEventRef.Object;
    local_f8 = (FTaskBase *)0x0;
    local_190.State.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_190.State.Object = (TFutureState<void> *)0x0;
    local_78[0] = (code *)0x0;
    local_50 = FMemory::Malloc(0x60,0x10);
    *local_50 = (code *)&UE::Core::Private::Function::
                         TFunction_OwnedObject<`Async<`FImgMediaPlayer::Open'::`2'::<lambda_5>_>'::`4'::<lambda_1>,1,1>
                         ::_vftable_;
    ppcVar17 = local_50 + 2;
    *ppcVar17 = (code *)local_e8.DebugName;
    local_50[7] = (code *)local_a0;
    local_a0 = (FPipe *)0x0;
    local_50[4] = local_b8;
    local_50[5] = pcStack_b0;
    local_50[6] = (code *)local_a8;
    if (*ppcVar17 != (code *)0x0) {
      local_e8.DebugName = (wchar_t *)0x0;
    }
    local_50[8] = (code *)local_98;
    local_50[9] = (code *)local_90;
    local_90 = (TReferenceControllerBase<1> *)0x0;
    local_98 = (FTaskBase *)0x0;
    *(undefined1 *)(local_50 + 10) = local_88;
    if (ppcVar17 != (code **)0x0) {
      local_78[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`Async<`FImgMediaPlayer::Open'::__l2::<lambda_5>_>'::__l4::<lambda_1>,bool,float>
                    ::Call;
    }
    FTSTicker::AddTicker
              (this,&local_110,L"Async_TaskGraphMainTick",0.0,
               (TUniqueFunction<bool___cdecl(float)> *)local_78);
    if (local_110.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar2 = &(local_110.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar4 = *paVar2;
      *paVar2 = (atomic<int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar4 == (atomic<int>)0x1) {
        (**(code **)((local_110.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_110.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_78[0] != (code *)0x0) {
      ppcVar17 = local_78 + 2;
      if (local_50 != (code **)0x0) {
        ppcVar17 = local_50;
      }
      (**(code **)(*ppcVar17 + 0x10))();
    }
    if (((local_98 != (FTaskBase *)0x0) && (*(char *)((longlong)local_98 + 0x68) == '\0')) &&
       (bVar8 = FDebug::CheckVerifyFailedImpl2
                          ("State->IsComplete()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x242,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      pTVar11 = (TFuture<void> *)(*pcVar5)();
      return pTVar11;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_90);
    if ((FTaskBase *)local_e8.DebugName != (FTaskBase *)0x0) {
      pFVar10 = (FPipe *)&local_b8;
      if (local_a0 != (FPipe *)0x0) {
        pFVar10 = local_a0;
      }
      (**(code **)(*(code **)pFVar10 + 0x10))();
    }
    break;
  case Thread:
    bVar8 = FGenericPlatformProcess::SupportsMultithreading();
    if (bVar8) {
      TPromise<FRunnableThread_*>::TPromise<FRunnableThread_*>(&local_160);
      pFVar13 = operator_new(0x70);
      pFVar19 = local_170;
      pFVar12 = pFVar23;
      if (pFVar13 != (FTaskBase *)0x0) {
        if ((local_160.bFutureRetrieved != false) &&
           (bVar8 = FDebug::CheckVerifyFailedImpl2
                              ("!bFutureRetrieved",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x24d,L""), bVar8)) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar5)();
          return pTVar11;
        }
        pTVar7 = local_160.State.Object;
        local_160.bFutureRetrieved = true;
        if ((local_160.State.Object == (TFutureState<FRunnableThread_*> *)0x0) &&
           (bVar8 = FDebug::CheckVerifyFailedImpl2
                              ("State.IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x283,L""), bVar8)) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar5)();
          return pTVar11;
        }
        if (local_160.State.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_160.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_160.State.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
          UNLOCK();
        }
        *(undefined ***)&pFVar13->_padding_ = &___7__TAsyncRunnable_X__6B_;
        ((TSharedRef<UE::TEventCount<unsigned_int>,1> *)&pFVar13->_padding_)->Object =
             (TEventCount<unsigned_int> *)local_f8;
        pFVar13->Pipe = (FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
        local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        pFVar13->_padding_ = (longlong)CONCAT44(local_e8.LastTask._4_4_,local_e8.LastTask._0_4_);
        pFVar13->_padding_ = CONCAT44(local_e8.TaskCount._4_4_,local_e8.TaskCount._0_4_);
        *(TEventCount<unsigned_int> **)&(pFVar13->RefCount).field_0x0 =
             local_e8.EmptyEventRef.Object;
        if (((TSharedRef<UE::TEventCount<unsigned_int>,1> *)&pFVar13->_padding_)->Object !=
            (TEventCount<unsigned_int> *)0x0) {
          local_f8 = pFVar23;
        }
        *(TFutureState<void> **)&(pFVar13->StateChangeEvent).Count = local_190.State.Object;
        *(TReferenceControllerBase<1> **)&pFVar13->ExecutingThreadId =
             local_190.State.SharedReferenceCount.ReferenceController;
        *(TReferenceControllerBase<1> **)
         &(pFVar13->Prerequisites).Prerequisites.AllocatorInstance.SecondaryData.field_0x0 =
             local_160.State.SharedReferenceCount.ReferenceController;
        local_190.State.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        local_190.State.Object = (TFutureState<void> *)0x0;
        (pFVar13->TraceId).field_0x0 = local_190.bFutureRetrieved;
        *(TFutureState<FRunnableThread_*> **)
         (pFVar13->Prerequisites).Prerequisites.AllocatorInstance.InlineData = pTVar7;
        pFVar19 = pFVar23;
        pFVar23 = pFVar13;
        pFVar12 = (FTaskBase *)&DAT_00000001;
      }
      if (pFVar12 != (FTaskBase *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFVar19);
      }
      FAsyncThreadIndex::GetNext();
      FString::PrintfImpl(&local_130,L"TAsync %d");
      FVar22.Data = (FScriptContainerElement *)L"";
      if (local_130.Data.ArrayNum != 0) {
        FVar22.Data = local_130.Data.AllocatorInstance.Data;
      }
      pFVar14 = FRunnableThread::Create
                          ((FRunnable *)pFVar23,(wchar_t *)FVar22.Data,0,TPri_Normal,
                           0xffffffffffffffff,None);
      local_178 = pFVar14;
      if ((pFVar14 == (FRunnableThread *)0x0) &&
         (bVar8 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x14d,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar5)();
        return pTVar11;
      }
      iVar9 = (**(code **)(pFVar14->_padding_ + 0x28))(pFVar14);
      if ((iVar9 != 0) &&
         (bVar8 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread->GetThreadType() == FRunnableThread::ThreadType::Real",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x14e,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar5)();
        return pTVar11;
      }
      TPromise<FRunnableThread_*>::SetValue(&local_160,&local_178);
      if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_130.Data.AllocatorInstance.Data);
      }
      if (((local_160.State.Object != (TFutureState<FRunnableThread_*> *)0x0) &&
          ((local_160.State.Object)->field_0x68 == '\0')) &&
         (bVar8 = FDebug::CheckVerifyFailedImpl2
                            ("State->IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0x242,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar5)();
        return pTVar11;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_160.State.SharedReferenceCount.ReferenceController);
    }
    else {
      UE::Core::Private::Function::CheckCallable(local_f8);
      pFVar23 = local_f8;
      FVar18.ReferenceController = (TReferenceControllerBase<1> *)&local_e8;
      if ((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController != (FPipe *)0x0)
      {
        FVar18.ReferenceController = local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController
        ;
      }
      uVar16 = (**(code **)((longlong)((FPipe *)FVar18.ReferenceController)->LastTask + 8))();
      (*(code *)pFVar23)(uVar16);
      if ((FTaskBase *)local_190.State.Object == (FTaskBase *)0x0) {
        bVar8 = FDebug::CheckVerifyFailedImpl2
                          ("State.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x283,L"");
        if (bVar8) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar5)();
          return pTVar11;
        }
        bVar8 = FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar8) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar5)();
          return pTVar11;
        }
      }
      pTVar6 = local_190.State.Object;
      if (((char)(((FPrerequisites<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *)
                  &(local_190.State.Object)->field_0x58)->Prerequisites).ArrayNum != '\0') &&
         (bVar8 = FDebug::CheckVerifyFailedImpl2
                            ("!IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0xcd,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar5)();
        return pTVar11;
      }
      FFutureState::MarkComplete((FFutureState *)pTVar6);
    }
    break;
  case ThreadIfForkSafe:
    bVar8 = FGenericPlatformProcess::SupportsMultithreading();
    if ((bVar8) || (bVar8 = FForkProcessHelper::IsForkedMultithreadInstance(), bVar8)) {
      TPromise<FRunnableThread_*>::TPromise<FRunnableThread_*>(&local_148);
      pFVar13 = operator_new(0x70);
      pFVar19 = local_170;
      pFVar12 = pFVar23;
      if (pFVar13 != (FTaskBase *)0x0) {
        if ((local_148.bFutureRetrieved != false) &&
           (bVar8 = FDebug::CheckVerifyFailedImpl2
                              ("!bFutureRetrieved",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x24d,L""), bVar8)) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar5)();
          return pTVar11;
        }
        pTVar7 = local_148.State.Object;
        local_148.bFutureRetrieved = true;
        if ((local_148.State.Object == (TFutureState<FRunnableThread_*> *)0x0) &&
           (bVar8 = FDebug::CheckVerifyFailedImpl2
                              ("State.IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x283,L""), bVar8)) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar5)();
          return pTVar11;
        }
        if (local_148.State.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_148.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_148.State.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
          UNLOCK();
        }
        *(undefined ***)&pFVar13->_padding_ = &___7__TAsyncRunnable_X__6B_;
        ((TSharedRef<UE::TEventCount<unsigned_int>,1> *)&pFVar13->_padding_)->Object =
             (TEventCount<unsigned_int> *)local_f8;
        pFVar13->Pipe = (FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
        local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        pFVar13->_padding_ = (longlong)CONCAT44(local_e8.LastTask._4_4_,local_e8.LastTask._0_4_);
        pFVar13->_padding_ = CONCAT44(local_e8.TaskCount._4_4_,local_e8.TaskCount._0_4_);
        *(TEventCount<unsigned_int> **)&(pFVar13->RefCount).field_0x0 =
             local_e8.EmptyEventRef.Object;
        if (((TSharedRef<UE::TEventCount<unsigned_int>,1> *)&pFVar13->_padding_)->Object !=
            (TEventCount<unsigned_int> *)0x0) {
          local_f8 = pFVar23;
        }
        *(TFutureState<void> **)&(pFVar13->StateChangeEvent).Count = local_190.State.Object;
        *(TReferenceControllerBase<1> **)&pFVar13->ExecutingThreadId =
             local_190.State.SharedReferenceCount.ReferenceController;
        *(TReferenceControllerBase<1> **)
         &(pFVar13->Prerequisites).Prerequisites.AllocatorInstance.SecondaryData.field_0x0 =
             local_148.State.SharedReferenceCount.ReferenceController;
        local_190.State.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        local_190.State.Object = (TFutureState<void> *)0x0;
        (pFVar13->TraceId).field_0x0 = local_190.bFutureRetrieved;
        *(TFutureState<FRunnableThread_*> **)
         (pFVar13->Prerequisites).Prerequisites.AllocatorInstance.InlineData = pTVar7;
        pFVar19 = pFVar23;
        pFVar23 = pFVar13;
        pFVar12 = (FTaskBase *)&DAT_00000002;
      }
      if (pFVar12 != (FTaskBase *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFVar19);
      }
      FAsyncThreadIndex::GetNext();
      FString::PrintfImpl(&local_120,L"TAsync %d");
      FVar22.Data = (FScriptContainerElement *)L"";
      if (local_120.Data.ArrayNum != 0) {
        FVar22.Data = local_120.Data.AllocatorInstance.Data;
      }
      pFVar14 = FForkProcessHelper::CreateForkableThread
                          ((FRunnable *)pFVar23,(wchar_t *)FVar22.Data,0,TPri_Normal,
                           0xffffffffffffffff,None,false);
      local_168 = pFVar14;
      if ((pFVar14 == (FRunnableThread *)0x0) &&
         (bVar8 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x161,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar5)();
        return pTVar11;
      }
      iVar9 = (**(code **)(pFVar14->_padding_ + 0x28))(pFVar14);
      if ((iVar9 != 0) &&
         (bVar8 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread->GetThreadType() == FRunnableThread::ThreadType::Real",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x162,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar5)();
        return pTVar11;
      }
      TPromise<FRunnableThread_*>::SetValue(&local_148,&local_168);
      if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_120.Data.AllocatorInstance.Data);
      }
      if (((local_148.State.Object != (TFutureState<FRunnableThread_*> *)0x0) &&
          ((local_148.State.Object)->field_0x68 == '\0')) &&
         (bVar8 = FDebug::CheckVerifyFailedImpl2
                            ("State->IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0x242,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar5)();
        return pTVar11;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_148.State.SharedReferenceCount.ReferenceController);
    }
    else {
      UE::Core::Private::Function::CheckCallable(local_f8);
      pFVar23 = local_f8;
      FVar18.ReferenceController = (TReferenceControllerBase<1> *)&local_e8;
      if ((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController != (FPipe *)0x0)
      {
        FVar18.ReferenceController = local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController
        ;
      }
      uVar16 = (**(code **)((longlong)((FPipe *)FVar18.ReferenceController)->LastTask + 8))();
      (*(code *)pFVar23)(uVar16);
      if ((FTaskBase *)local_190.State.Object == (FTaskBase *)0x0) {
        bVar8 = FDebug::CheckVerifyFailedImpl2
                          ("State.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x283,L"");
        if (bVar8) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar5)();
          return pTVar11;
        }
        bVar8 = FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar8) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar5)();
          return pTVar11;
        }
      }
      pTVar6 = local_190.State.Object;
      if (((char)(((FPrerequisites<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *)
                  &(local_190.State.Object)->field_0x58)->Prerequisites).ArrayNum != '\0') &&
         (bVar8 = FDebug::CheckVerifyFailedImpl2
                            ("!IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0xcd,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar5)();
        return pTVar11;
      }
      FFutureState::MarkComplete((FFutureState *)pTVar6);
    }
    break;
  case ThreadPool:
    bVar8 = FGenericPlatformProcess::SupportsMultithreading();
    if (bVar8) {
      if ((GThreadPool == (FQueuedThreadPool *)0x0) &&
         (bVar8 = FDebug::CheckVerifyFailedImpl2
                            ("GThreadPool != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x16f,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar5)();
        return pTVar11;
      }
      pcVar5 = *(code **)((longlong)*GThreadPool + 0x18);
      puVar15 = operator_new(0x60);
      if (puVar15 == (undefined8 *)0x0) {
        (*pcVar5)(GThreadPool,0,3);
      }
      else {
        puVar15[1] = 0;
        *puVar15 = &___7__TAsyncQueuedWork_X__6B_;
        puVar15[2] = local_f8;
        puVar15[7] = local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
        local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        *(undefined4 *)(puVar15 + 4) = local_e8.LastTask._0_4_;
        *(undefined4 *)((longlong)puVar15 + 0x24) = local_e8.LastTask._4_4_;
        *(undefined4 *)(puVar15 + 5) = local_e8.TaskCount._0_4_;
        *(undefined4 *)((longlong)puVar15 + 0x2c) = local_e8.TaskCount._4_4_;
        puVar15[6] = local_e8.EmptyEventRef.Object;
        if (puVar15[2] != 0) {
          local_f8 = pFVar23;
        }
        puVar15[8] = local_190.State.Object;
        puVar15[9] = local_190.State.SharedReferenceCount.ReferenceController;
        *(bool *)(puVar15 + 10) = local_190.bFutureRetrieved;
        local_190.State.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        local_190.State.Object = (TFutureState<void> *)0x0;
        (*pcVar5)(GThreadPool,puVar15,3);
      }
    }
    else {
      UE::Core::Private::Function::CheckCallable(local_f8);
      pFVar23 = local_f8;
      FVar18.ReferenceController = (TReferenceControllerBase<1> *)&local_e8;
      if ((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController != (FPipe *)0x0)
      {
        FVar18.ReferenceController = local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController
        ;
      }
      uVar16 = (**(code **)((longlong)((FPipe *)FVar18.ReferenceController)->LastTask + 8))();
      (*(code *)pFVar23)(uVar16);
      if ((FTaskBase *)local_190.State.Object == (FTaskBase *)0x0) {
        bVar8 = FDebug::CheckVerifyFailedImpl2
                          ("State.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x283,L"");
        if (bVar8) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar5)();
          return pTVar11;
        }
        bVar8 = FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar8) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar5)();
          return pTVar11;
        }
      }
      pTVar6 = local_190.State.Object;
      if (((char)(((FPrerequisites<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *)
                  &(local_190.State.Object)->field_0x58)->Prerequisites).ArrayNum != '\0') &&
         (bVar8 = FDebug::CheckVerifyFailedImpl2
                            ("!IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0xcd,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar5)();
        return pTVar11;
      }
      FFutureState::MarkComplete((FFutureState *)pTVar6);
    }
    break;
  default:
    bVar8 = FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                       ,0x187,L"");
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      pTVar11 = (TFuture<void> *)(*pcVar5)();
      return pTVar11;
    }
  }
  *(FTaskBase **)__return_storage_ptr__ = local_170;
  *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x8 = FVar20.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if ((((FTaskBase *)local_190.State.Object != (FTaskBase *)0x0) &&
      ((char)(((FPrerequisites<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *)
              &(local_190.State.Object)->field_0x58)->Prerequisites).ArrayNum == '\0')) &&
     (bVar8 = FDebug::CheckVerifyFailedImpl2
                        ("State->IsComplete()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x242,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    pTVar11 = (TFuture<void> *)(*pcVar5)();
    return pTVar11;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_190.State.SharedReferenceCount.ReferenceController);
  if (local_f8 != (FTaskBase *)0x0) {
    FVar20.ReferenceController = (TReferenceControllerBase<1> *)&local_e8;
    if ((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController != (FPipe *)0x0) {
      FVar20.ReferenceController = local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
    }
    (**(code **)((longlong)((FPipe *)FVar20.ReferenceController)->LastTask + 0x10))();
  }
  if (*(longlong *)param_3 != 0) {
    plVar21 = (longlong *)&param_3->field_0x10;
    if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
      plVar21 = *(longlong **)&param_3->field_0x28;
    }
    (**(code **)(*plVar21 + 0x10))();
  }
  return __return_storage_ptr__;
}

// Bind<`FExrImgMediaReaderGpu::~FExrImgMediaReaderGpu'::__l2::<lambda_1>_> @ 14ea33d60

<lambda_1> * __thiscall
UE::Core::Private::Function::TFunctionStorage<1>::
Bind<_FExrImgMediaReaderGpu::~FExrImgMediaReaderGpu_::__l2::<lambda_1>_>
          (TFunctionStorage<1> *this,<lambda_1> *param_1)

{
  <lambda_1> *p<Var1;
  undefined1 *_Src;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x58,8);
  *(undefined8 **)&this->field_0x18 = puVar2;
  p<Var1 = (<lambda_1> *)(puVar2 + 1);
  *(undefined8 *)&p<Var1->InMemoryPool = 0;
  puVar2[2] = 0;
  puVar2[5] = 0;
  *puVar2 = &TFunction_OwnedObject<`FExrImgMediaReaderGpu::~FExrImgMediaReaderGpu'::`2'::<lambda_1>,1,1>
             ::_vftable_;
  *(undefined4 *)(puVar2 + 6) = 0;
  *(undefined4 *)((longlong)puVar2 + 0x34) = 0x80;
  *(undefined4 *)(puVar2 + 7) = 0xffffffff;
  *(undefined4 *)((longlong)puVar2 + 0x3c) = 0;
  puVar2[9] = 0;
  *(undefined4 *)(puVar2 + 10) = 0;
  if (p<Var1 != param_1) {
    _Src = &(param_1->InMemoryPool).field_0x10;
    *(undefined8 *)&p<Var1->InMemoryPool = *(undefined8 *)&param_1->InMemoryPool;
    *(undefined8 *)&param_1->InMemoryPool = 0;
    *(undefined4 *)(puVar2 + 2) = *(undefined4 *)&(param_1->InMemoryPool).field_0x8;
    *(undefined4 *)((longlong)puVar2 + 0x14) = *(undefined4 *)&(param_1->InMemoryPool).field_0xc;
    *(undefined8 *)&(param_1->InMemoryPool).field_0x8 = 0;
    if (puVar2 + 3 != (undefined8 *)_Src) {
      if (*(longlong *)&(param_1->InMemoryPool).field_0x20 == 0) {
        memmove(puVar2 + 3,_Src,0x10);
      }
      if ((void *)puVar2[5] != (void *)0x0) {
        FMemory::Free((void *)puVar2[5]);
      }
      puVar2[5] = *(undefined8 *)&(param_1->InMemoryPool).field_0x20;
      *(undefined8 *)&(param_1->InMemoryPool).field_0x20 = 0;
      *(undefined4 *)(puVar2 + 6) = *(undefined4 *)&(param_1->InMemoryPool).field_0x28;
      *(undefined4 *)((longlong)puVar2 + 0x34) = *(undefined4 *)&(param_1->InMemoryPool).field_0x2c;
      *(undefined8 *)&(param_1->InMemoryPool).field_0x28 = 0;
    }
    *(undefined4 *)(puVar2 + 7) = *(undefined4 *)&(param_1->InMemoryPool).field_0x30;
    *(undefined4 *)((longlong)puVar2 + 0x3c) = *(undefined4 *)&(param_1->InMemoryPool).field_0x34;
    *(undefined4 *)&(param_1->InMemoryPool).field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->InMemoryPool).field_0x34 = 0;
  }
  if (*(longlong *)&(param_1->InMemoryPool).field_0x40 == 0) {
    *(undefined4 *)(puVar2 + 8) = *(undefined4 *)&(param_1->InMemoryPool).field_0x38;
  }
  if ((void *)puVar2[9] != (void *)0x0) {
    FMemory::Free((void *)puVar2[9]);
  }
  puVar2[9] = *(undefined8 *)&(param_1->InMemoryPool).field_0x40;
  *(undefined8 *)&(param_1->InMemoryPool).field_0x40 = 0;
  *(undefined4 *)(puVar2 + 10) = *(undefined4 *)&(param_1->InMemoryPool).field_0x48;
  *(undefined4 *)&(param_1->InMemoryPool).field_0x48 = 0;
  return p<Var1;
}

// ConstructItems<TTuple<int,TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_>_>,TTuple<int,TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_>_>,int> @ 14ea33eb0

void __cdecl
ConstructItems<TTuple<int,TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_>_>,TTuple<int,TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_>_>,int>
          (void *param_1,
          TTuple<int,TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_>_> *param_2,
          int param_3)

{
  int *piVar1;
  int iVar2;
  TIntRect<int> *pTVar3;
  ForAnyElementType *pFVar4;
  undefined8 *puVar5;
  
  if (param_3 != 0) {
    pFVar4 = (ForAnyElementType *)((longlong)param_1 + 8);
    puVar5 = (undefined8 *)&param_2->field_0x8;
    do {
      *(undefined4 *)((longlong)param_1 + (-8 - (longlong)param_2) + (longlong)puVar5) =
           *(undefined4 *)(puVar5 + -1);
      piVar1 = (int *)((longlong)&pFVar4[1].Data + 4);
      pFVar4->Data = (FScriptContainerElement *)0x0;
      iVar2 = *(int *)(puVar5 + 1);
      pTVar3 = (TIntRect<int> *)*puVar5;
      *(int *)&pFVar4[1].Data = iVar2;
      if (iVar2 == 0) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,4,iVar2,0,pFVar4,iVar2,piVar1);
        ConstructItems<UE::Math::TIntRect<int>,UE::Math::TIntRect<int>,int>
                  (pFVar4->Data,pTVar3,iVar2);
      }
      puVar5 = puVar5 + 3;
      pFVar4 = pFVar4 + 3;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FImgMediaViewInfo,FImgMediaViewInfo,int> @ 14ea33f80

void __cdecl
ConstructItems<FImgMediaViewInfo,FImgMediaViewInfo,int>
          (void *param_1,FImgMediaViewInfo *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  double dVar3;
  double *pdVar4;
  TMatrix<double> *pTVar5;
  
  if (param_3 != 0) {
    pdVar4 = (double *)((longlong)param_1 + 0x30);
    pTVar5 = &param_2->ViewProjectionMatrix;
    do {
      uVar2 = *(undefined8 *)((longlong)(pTVar5 + -1) + 0x58);
      puVar1 = (undefined8 *)((longlong)param_1 + (-0x30 - (longlong)param_2) + (longlong)pTVar5);
      *puVar1 = *(undefined8 *)((longlong)(pTVar5 + -1) + 0x50);
      puVar1[1] = uVar2;
      *(undefined8 *)((longlong)param_1 + (-0x20 - (longlong)param_2) + (longlong)pTVar5) =
           *(undefined8 *)((longlong)(pTVar5 + -1) + 0x60);
      dVar3 = *(double *)((longlong)(pTVar5 + -1) + 0x70);
      pdVar4[-3] = *(double *)((longlong)(pTVar5 + -1) + 0x68);
      pdVar4[-2] = dVar3;
      pdVar4[-1] = *(double *)((longlong)(pTVar5 + -1) + 0x78);
      dVar3 = pTVar5->M[0][1];
      *pdVar4 = pTVar5->M[0][0];
      pdVar4[1] = dVar3;
      dVar3 = pTVar5->M[0][3];
      pdVar4[2] = pTVar5->M[0][2];
      pdVar4[3] = dVar3;
      dVar3 = pTVar5->M[1][1];
      pdVar4[4] = pTVar5->M[1][0];
      pdVar4[5] = dVar3;
      dVar3 = pTVar5->M[1][3];
      pdVar4[6] = pTVar5->M[1][2];
      pdVar4[7] = dVar3;
      dVar3 = pTVar5->M[2][1];
      pdVar4[8] = pTVar5->M[2][0];
      pdVar4[9] = dVar3;
      dVar3 = pTVar5->M[2][3];
      pdVar4[10] = pTVar5->M[2][2];
      pdVar4[0xb] = dVar3;
      dVar3 = pTVar5->M[3][1];
      pdVar4[0xc] = pTVar5->M[3][0];
      pdVar4[0xd] = dVar3;
      dVar3 = pTVar5->M[3][3];
      pdVar4[0xe] = pTVar5->M[3][2];
      pdVar4[0xf] = dVar3;
      dVar3 = pTVar5[1].M[0][1];
      pdVar4[0x10] = pTVar5[1].M[0][0];
      pdVar4[0x11] = dVar3;
      dVar3 = pTVar5[1].M[0][3];
      pdVar4[0x12] = pTVar5[1].M[0][2];
      pdVar4[0x13] = dVar3;
      dVar3 = pTVar5[1].M[1][1];
      pdVar4[0x14] = pTVar5[1].M[1][0];
      pdVar4[0x15] = dVar3;
      dVar3 = pTVar5[1].M[1][3];
      pdVar4[0x16] = pTVar5[1].M[1][2];
      pdVar4[0x17] = dVar3;
      dVar3 = pTVar5[1].M[2][1];
      pdVar4[0x18] = pTVar5[1].M[2][0];
      pdVar4[0x19] = dVar3;
      dVar3 = pTVar5[1].M[2][3];
      pdVar4[0x1a] = pTVar5[1].M[2][2];
      pdVar4[0x1b] = dVar3;
      dVar3 = pTVar5[1].M[3][1];
      pdVar4[0x1c] = pTVar5[1].M[3][0];
      pdVar4[0x1d] = dVar3;
      dVar3 = pTVar5[1].M[3][3];
      pdVar4[0x1e] = pTVar5[1].M[3][2];
      pdVar4[0x1f] = dVar3;
      *(TIntPoint<int>_u_0 *)(pdVar4 + 0x20) =
           (((TIntRect<int> *)(pTVar5 + 2))->field0_0x0)._s_0.Min.field0_0x0;
      *(TIntPoint<int>_u_0 *)(pdVar4 + 0x21) =
           (((TIntRect<int> *)(pTVar5 + 2))->field0_0x0)._s_0.Max.field0_0x0;
      *(float *)(pdVar4 + 0x22) = *(float *)((TIntRect<int> *)(pTVar5 + 2) + 1);
      *(bool *)((longlong)pdVar4 + 0x114) =
           *(bool *)((longlong)((TIntRect<int> *)(pTVar5 + 2) + 1) + 4);
      *(undefined8 *)
       &((TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator>
          *)(pdVar4 + 0x23))->Elements = 0;
      pdVar4[0x24] = 0.0;
      pdVar4[0x27] = 0.0;
      *(undefined4 *)(pdVar4 + 0x28) = 0;
      *(undefined4 *)((longlong)pdVar4 + 0x144) = 0x80;
      *(undefined4 *)(pdVar4 + 0x29) = 0xffffffff;
      *(undefined4 *)((longlong)pdVar4 + 0x14c) = 0;
      pdVar4[0x2b] = 0.0;
      *(undefined4 *)(pdVar4 + 0x2c) = 0;
      TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator>::
      operator=((TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator>
                 *)(pdVar4 + 0x23),
                (TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator>
                 *)((longlong)((TIntRect<int> *)(pTVar5 + 2) + 1) + 8));
      pdVar4 = pdVar4 + 0x34;
      pTVar5 = (TMatrix<double> *)((longlong)(pTVar5 + 3) + 0x20);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<TArray<FExrReader::FTileDesc,TSizedDefaultAllocator<32>_>,TArray<FExrReader::FTileDesc,TSizedDefaultAllocator<32>_>,int> @ 14ea34160

void __cdecl
ConstructItems<TArray<FExrReader::FTileDesc,TSizedDefaultAllocator<32>_>,TArray<FExrReader::FTileDesc,TSizedDefaultAllocator<32>_>,int>
          (void *param_1,TArray<FExrReader::FTileDesc,TSizedDefaultAllocator<32>_> *param_2,
          int param_3)

{
  int *piVar1;
  int iVar2;
  void *_Src;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = (longlong)param_2 - (longlong)param_1;
    do {
      ((ForAnyElementType *)param_1)->Data = (FScriptContainerElement *)0x0;
      piVar1 = (int *)((longlong)&((ForAnyElementType *)((longlong)param_1 + 8))->Data + 4);
      iVar2 = *(int *)(lVar3 + 8 + (longlong)param_1);
      _Src = *(void **)(lVar3 + (longlong)param_1);
      *(int *)&((ForAnyElementType *)((longlong)param_1 + 8))->Data = iVar2;
      if (iVar2 == 0) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,4,iVar2,0,param_1,iVar2,piVar1);
        memcpy(((ForAnyElementType *)param_1)->Data,_Src,(longlong)iVar2 << 4);
      }
      param_1 = (void *)((longlong)param_1 + 0x10);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DestructItems<TTuple<int,TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_>_>,int> @ 14ea34270

void __cdecl
DestructItems<TTuple<int,TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_>_>,int>
          (TTuple<int,TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_>_> *param_1,
          int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&param_1->field_0x8;
    do {
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      puVar1 = puVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FImgMediaViewInfo,int> @ 14ea342b0

void __cdecl DestructItems<FImgMediaViewInfo,int>(FImgMediaViewInfo *param_1,int param_2)

{
  ForElementType<FSetElementId> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &(param_1->PrimitiveComponentIds).Hash.SecondaryData;
    do {
      *(undefined4 *)(pFVar1 + 1) = 0;
      if (*pFVar1 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)*pFVar1);
      }
      TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(pFVar1 + -8));
      pFVar1 = pFVar1 + 0x34;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_>,int> @ 14ea34310

void __cdecl
DestructItems<TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_>,int>
          (TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_> *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->AllocatorInstance).Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TArray<FExrReader::FTileDesc,TSizedDefaultAllocator<32>_>,int> @ 14ea34350

void __cdecl
DestructItems<TArray<FExrReader::FTileDesc,TSizedDefaultAllocator<32>_>,int>
          (TArray<FExrReader::FTileDesc,TSizedDefaultAllocator<32>_> *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->AllocatorInstance).Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TWeakPtr<FImgMediaLoader,1>,int> @ 14ea34390

void __cdecl
DestructItems<TWeakPtr<FImgMediaLoader,1>,int>(TWeakPtr<FImgMediaLoader,1> *param_1,int param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FWeakReferencer<1> *pFVar4;
  
  if (param_2 != 0) {
    pFVar4 = &param_1->WeakReferenceCount;
    do {
      pTVar3 = pFVar4->ReferenceController;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTVar3->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
        }
      }
      pFVar4 = pFVar4 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// Enqueue<TRenderCommandTag<`FExrImgMediaReaderGpu::ReadMip'::__l26::TSTR_CopyFromUploadBuffer181>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 14ea35850

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FExrImgMediaReaderGpu::ReadMip_::__l26::TSTR_CopyFromUploadBuffer181>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`FExrImgMediaReaderGpu::ReadMip'::__l26::TSTR_CopyFromUploadBuffer181>
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
      if (bVar8) goto LAB_14ea359a1;
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
    goto LAB_14ea35b95;
  }
LAB_14ea359a1:
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
LAB_14ea35a7f:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14ea35a7f;
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
LAB_14ea35b95:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`FExrImgMediaReaderGpu::AllocateGpuBufferFromPool'::__l9::TSTR_CreatePooledBuffer675>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 14ea35bd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FExrImgMediaReaderGpu::AllocateGpuBufferFromPool_::__l9::TSTR_CreatePooledBuffer675>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`FExrImgMediaReaderGpu::AllocateGpuBufferFromPool'::__l9::TSTR_CreatePooledBuffer675>
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
      if (bVar8) goto LAB_14ea35d21;
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
    goto LAB_14ea35f15;
  }
LAB_14ea35d21:
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
LAB_14ea35dff:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14ea35dff;
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
LAB_14ea35f15:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<``FExrImgMediaReaderGpu::AllocateGpuBufferFromPool'::__l2::<lambda_1>::operator()'::__l7::TSTR_DeletePooledBuffers650>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 14ea35f50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<__FExrImgMediaReaderGpu::AllocateGpuBufferFromPool_::__l2::<lambda_1>::operator()_::__l7::TSTR_DeletePooledBuffers650>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<``FExrImgMediaReaderGpu::AllocateGpuBufferFromPool'::__l2::<lambda_1>::operator()'::__l7::TSTR_DeletePooledBuffers650>
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
      if (bVar8) goto LAB_14ea360a1;
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
    goto LAB_14ea36295;
  }
LAB_14ea360a1:
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
LAB_14ea3617f:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14ea3617f;
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
LAB_14ea36295:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`FExrImgMediaReaderGpu::~FExrImgMediaReaderGpu'::__l2::TSTR_DeletePooledBuffers96>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 14ea362d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FExrImgMediaReaderGpu::~FExrImgMediaReaderGpu_::__l2::TSTR_DeletePooledBuffers96>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`FExrImgMediaReaderGpu::~FExrImgMediaReaderGpu'::__l2::TSTR_DeletePooledBuffers96>
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
      if (bVar8) goto LAB_14ea36421;
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
    goto LAB_14ea36615;
  }
LAB_14ea36421:
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
LAB_14ea364ff:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14ea364ff;
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
LAB_14ea36615:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// GetDefault<UImgMediaSettings> @ 14ea36650

UImgMediaSettings * __cdecl GetDefault<UImgMediaSettings>(void)

{
  UClass *this;
  
  this = Z_Construct_UClass_UImgMediaSettings_NoRegister();
  if ((this->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this);
    return (UImgMediaSettings *)(this->ClassDefaultObject).field0_0x0.DebugPtr;
  }
  return (UImgMediaSettings *)(this->ClassDefaultObject).field0_0x0.DebugPtr;
}

// HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<80,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<int,FImgMediaTileSelection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<int,FImgMediaTileSelection>,TDefaultMapHashableKeyFuncs<int,FImgMediaTileSelection,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<int,FImgMediaTileSelection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FImgMediaTileSelection,0>_>::FKeyComparisonClass<TLess<int>_>_>_>_> @ 14ea36bc0

void __cdecl
AlgoImpl::
HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<80,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<int,FImgMediaTileSelection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<int,FImgMediaTileSelection>,TDefaultMapHashableKeyFuncs<int,FImgMediaTileSelection,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<int,FImgMediaTileSelection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FImgMediaTileSelection,0>_>::FKeyComparisonClass<TLess<int>_>_>_>_>
          (TSparseArrayElementOrFreeListLink<TAlignedBytes<80,8>_> *param_1,int param_2,
          FIdentityFunctor param_3,
          FElementCompareClass<TSet<TTuple<int,FImgMediaTileSelection>,TDefaultMapHashableKeyFuncs<int,FImgMediaTileSelection,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<int,FImgMediaTileSelection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FImgMediaTileSelection,0>_>::FKeyComparisonClass<TLess<int>_>_>_>
          param_4)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<80,8>_>_s_1 TVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  bool bVar14;
  int iVar15;
  int iVar16;
  longlong lVar17;
  longlong lVar18;
  int iVar19;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<80,8>_> *pTVar20;
  int iVar21;
  int iVar22;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<80,8>_> *pTVar23;
  
  if (param_2 < 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar14) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar14) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar15 = (param_2 + -2) / 2;
  iVar16 = iVar15 * 2 + 1;
  iVar21 = iVar16;
  iVar22 = iVar15;
  do {
    while (param_2 <= iVar16) {
LAB_14ea36d15:
      if (iVar22 == 0) {
        iVar16 = param_2 + -1;
        lVar17 = (longlong)iVar16;
        if (0 < iVar16) {
          pTVar23 = param_1 + lVar17;
          do {
            uVar3 = *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 8);
            iVar21 = 0;
            TVar4 = param_1->_s_1;
            uVar5 = *(undefined8 *)((param_1->ElementData).Pad + 8);
            uVar6 = *(undefined8 *)((param_1->ElementData).Pad + 0x10);
            uVar7 = *(undefined8 *)((param_1->ElementData).Pad + 0x18);
            uVar8 = *(undefined8 *)((param_1->ElementData).Pad + 0x20);
            uVar9 = *(undefined8 *)((param_1->ElementData).Pad + 0x28);
            uVar10 = *(undefined8 *)((param_1->ElementData).Pad + 0x30);
            uVar11 = *(undefined8 *)((param_1->ElementData).Pad + 0x38);
            uVar12 = *(undefined8 *)((param_1->ElementData).Pad + 0x40);
            uVar13 = *(undefined8 *)((param_1->ElementData).Pad + 0x48);
            param_1->_s_1 = pTVar23->_s_1;
            *(undefined8 *)((param_1->ElementData).Pad + 8) = uVar3;
            uVar3 = *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x18);
            *(undefined8 *)((param_1->ElementData).Pad + 0x10) =
                 *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x10);
            *(undefined8 *)((param_1->ElementData).Pad + 0x18) = uVar3;
            uVar3 = *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x28);
            *(undefined8 *)((param_1->ElementData).Pad + 0x20) =
                 *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x20);
            *(undefined8 *)((param_1->ElementData).Pad + 0x28) = uVar3;
            uVar3 = *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x38);
            *(undefined8 *)((param_1->ElementData).Pad + 0x30) =
                 *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x30);
            *(undefined8 *)((param_1->ElementData).Pad + 0x38) = uVar3;
            uVar3 = *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x48);
            *(undefined8 *)((param_1->ElementData).Pad + 0x40) =
                 *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x40);
            *(undefined8 *)((param_1->ElementData).Pad + 0x48) = uVar3;
            pTVar23->_s_1 = TVar4;
            *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 8) = uVar5;
            *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x10) = uVar6;
            *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x18) = uVar7;
            *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x20) = uVar8;
            *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x28) = uVar9;
            *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x30) = uVar10;
            *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x38) = uVar11;
            *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x40) = uVar12;
            *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x48) = uVar13;
            if (1 < iVar16) {
              do {
                iVar22 = iVar21 * 2;
                iVar15 = iVar22 + 1;
                if (iVar22 + 2 < iVar16) {
                  if (param_1[(longlong)iVar22 + 2]._s_1.PrevFreeIndex <
                      param_1[iVar15]._s_1.PrevFreeIndex) {
                    iVar15 = iVar22;
                  }
                  iVar15 = iVar15 + 1;
                }
                lVar18 = (longlong)iVar21;
                pTVar20 = param_1 + iVar15;
                if ((pTVar20->_s_1).PrevFreeIndex <= param_1[lVar18]._s_1.PrevFreeIndex) break;
                uVar3 = *(undefined8 *)((pTVar20->ElementData).Pad + 8);
                TVar4 = param_1[lVar18]._s_1;
                uVar5 = *(undefined8 *)((longlong)param_1[lVar18].ElementData.Pad + 8);
                puVar1 = (undefined8 *)((longlong)param_1 + lVar18 * 0x50 + 0x10);
                uVar6 = *puVar1;
                uVar7 = puVar1[1];
                puVar1 = (undefined8 *)((longlong)param_1 + lVar18 * 0x50 + 0x20);
                uVar8 = *puVar1;
                uVar9 = puVar1[1];
                puVar1 = (undefined8 *)((longlong)param_1 + lVar18 * 0x50 + 0x30);
                uVar10 = *puVar1;
                uVar11 = puVar1[1];
                puVar1 = (undefined8 *)((longlong)param_1 + lVar18 * 0x50 + 0x40);
                uVar12 = *puVar1;
                uVar13 = puVar1[1];
                param_1[lVar18]._s_1 = pTVar20->_s_1;
                *(undefined8 *)((longlong)param_1[lVar18].ElementData.Pad + 8) = uVar3;
                uVar3 = *(undefined8 *)((pTVar20->ElementData).Pad + 0x18);
                puVar1 = (undefined8 *)((longlong)param_1 + lVar18 * 0x50 + 0x10);
                *puVar1 = *(undefined8 *)((pTVar20->ElementData).Pad + 0x10);
                puVar1[1] = uVar3;
                uVar3 = *(undefined8 *)((pTVar20->ElementData).Pad + 0x28);
                puVar1 = (undefined8 *)((longlong)param_1 + lVar18 * 0x50 + 0x20);
                *puVar1 = *(undefined8 *)((pTVar20->ElementData).Pad + 0x20);
                puVar1[1] = uVar3;
                uVar3 = *(undefined8 *)((pTVar20->ElementData).Pad + 0x38);
                puVar1 = (undefined8 *)((longlong)param_1 + lVar18 * 0x50 + 0x30);
                *puVar1 = *(undefined8 *)((pTVar20->ElementData).Pad + 0x30);
                puVar1[1] = uVar3;
                uVar3 = *(undefined8 *)((pTVar20->ElementData).Pad + 0x48);
                puVar1 = (undefined8 *)((longlong)param_1 + lVar18 * 0x50 + 0x40);
                *puVar1 = *(undefined8 *)((pTVar20->ElementData).Pad + 0x40);
                puVar1[1] = uVar3;
                pTVar20->_s_1 = TVar4;
                *(undefined8 *)((pTVar20->ElementData).Pad + 8) = uVar5;
                *(undefined8 *)((pTVar20->ElementData).Pad + 0x10) = uVar6;
                *(undefined8 *)((pTVar20->ElementData).Pad + 0x18) = uVar7;
                *(undefined8 *)((pTVar20->ElementData).Pad + 0x20) = uVar8;
                *(undefined8 *)((pTVar20->ElementData).Pad + 0x28) = uVar9;
                *(undefined8 *)((pTVar20->ElementData).Pad + 0x30) = uVar10;
                *(undefined8 *)((pTVar20->ElementData).Pad + 0x38) = uVar11;
                *(undefined8 *)((pTVar20->ElementData).Pad + 0x40) = uVar12;
                *(undefined8 *)((pTVar20->ElementData).Pad + 0x48) = uVar13;
                iVar21 = iVar15;
              } while (iVar15 * 2 + 1 < iVar16);
            }
            iVar16 = iVar16 + -1;
            lVar17 = lVar17 + -1;
            pTVar23 = pTVar23 + -1;
          } while (0 < lVar17);
        }
        return;
      }
      iVar15 = iVar22 + -1;
      iVar16 = iVar21 + -2;
      iVar21 = iVar16;
      iVar22 = iVar15;
    }
    iVar16 = iVar15 * 2;
    iVar19 = iVar16 + 1;
    if (iVar16 + 2 < param_2) {
      if (param_1[(longlong)iVar16 + 2]._s_1.PrevFreeIndex < param_1[iVar19]._s_1.PrevFreeIndex) {
        iVar19 = iVar16;
      }
      iVar19 = iVar19 + 1;
    }
    lVar17 = (longlong)iVar15;
    pTVar23 = param_1 + iVar19;
    if ((pTVar23->_s_1).PrevFreeIndex <= param_1[lVar17]._s_1.PrevFreeIndex) goto LAB_14ea36d15;
    uVar3 = *(undefined8 *)((pTVar23->ElementData).Pad + 8);
    iVar16 = iVar19 * 2 + 1;
    TVar4 = param_1[lVar17]._s_1;
    uVar5 = *(undefined8 *)((longlong)param_1[lVar17].ElementData.Pad + 8);
    puVar1 = (undefined8 *)((longlong)param_1 + lVar17 * 0x50 + 0x10);
    uVar6 = *puVar1;
    uVar7 = puVar1[1];
    puVar1 = (undefined8 *)((longlong)param_1 + lVar17 * 0x50 + 0x20);
    uVar8 = *puVar1;
    uVar9 = puVar1[1];
    puVar1 = (undefined8 *)((longlong)param_1 + lVar17 * 0x50 + 0x30);
    uVar10 = *puVar1;
    uVar11 = puVar1[1];
    puVar1 = (undefined8 *)((longlong)param_1 + lVar17 * 0x50 + 0x40);
    uVar12 = *puVar1;
    uVar13 = puVar1[1];
    param_1[lVar17]._s_1 = pTVar23->_s_1;
    *(undefined8 *)((longlong)param_1[lVar17].ElementData.Pad + 8) = uVar3;
    uVar3 = *(undefined8 *)((pTVar23->ElementData).Pad + 0x18);
    puVar1 = (undefined8 *)((longlong)param_1 + lVar17 * 0x50 + 0x10);
    *puVar1 = *(undefined8 *)((pTVar23->ElementData).Pad + 0x10);
    puVar1[1] = uVar3;
    uVar3 = *(undefined8 *)((pTVar23->ElementData).Pad + 0x28);
    puVar1 = (undefined8 *)((longlong)param_1 + lVar17 * 0x50 + 0x20);
    *puVar1 = *(undefined8 *)((pTVar23->ElementData).Pad + 0x20);
    puVar1[1] = uVar3;
    uVar3 = *(undefined8 *)((pTVar23->ElementData).Pad + 0x38);
    puVar1 = (undefined8 *)((longlong)param_1 + lVar17 * 0x50 + 0x30);
    *puVar1 = *(undefined8 *)((pTVar23->ElementData).Pad + 0x30);
    puVar1[1] = uVar3;
    uVar3 = *(undefined8 *)((pTVar23->ElementData).Pad + 0x48);
    puVar1 = (undefined8 *)((longlong)param_1 + lVar17 * 0x50 + 0x40);
    *puVar1 = *(undefined8 *)((pTVar23->ElementData).Pad + 0x40);
    puVar1[1] = uVar3;
    pTVar23->_s_1 = TVar4;
    *(undefined8 *)((pTVar23->ElementData).Pad + 8) = uVar5;
    *(undefined8 *)((pTVar23->ElementData).Pad + 0x10) = uVar6;
    *(undefined8 *)((pTVar23->ElementData).Pad + 0x18) = uVar7;
    *(undefined8 *)((pTVar23->ElementData).Pad + 0x20) = uVar8;
    *(undefined8 *)((pTVar23->ElementData).Pad + 0x28) = uVar9;
    *(undefined8 *)((pTVar23->ElementData).Pad + 0x30) = uVar10;
    *(undefined8 *)((pTVar23->ElementData).Pad + 0x38) = uVar11;
    *(undefined8 *)((pTVar23->ElementData).Pad + 0x40) = uVar12;
    *(undefined8 *)((pTVar23->ElementData).Pad + 0x48) = uVar13;
    iVar15 = iVar19;
  } while( true );
}

// InternalConstructor<UImgMediaSource> @ 14ea36ea0

void __cdecl InternalConstructor<UImgMediaSource>(FObjectInitializer *param_1)

{
  int *piVar1;
  int iVar2;
  UBaseMediaSource *this;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  code *pcVar6;
  TVector2<double> TVar7;
  bool bVar8;
  FObjectInitializer *pFVar9;
  TReferenceControllerBase<1> *pTVar10;
  TReferenceControllerBase<1> *pTVar11;
  TReferenceControllerBase<1> *pTVar12;
  
  this = (UBaseMediaSource *)param_1->Obj;
  if (this == (UBaseMediaSource *)0x0) {
    return;
  }
  pFVar9 = FObjectInitializer::Get();
  UBaseMediaSource::UBaseMediaSource(this,pFVar9);
  *(undefined1 *)&this[1]._padding_ = 0;
  this->_padding_ = (longlong)&UImgMediaSource::_vftable__for__UObject__;
  *(undefined8 *)((longlong)&this[1]._padding_ + 4) = 0;
  this->_padding_ = (longlong)&UImgMediaSource::_vftable__for__IMediaOptions__;
  this[1]._padding_ = 0;
  this[1]._padding_ = 0;
  *(undefined1 *)&this[1]._padding_ = 1;
  *(undefined8 *)((longlong)&this[1]._padding_ + 4) = 0;
  *(undefined8 *)((longlong)&this[1]._padding_ + 4) = 0;
  *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0;
  *(undefined1 *)&this[1]._padding_ = 0;
  *(undefined2 *)&this[1]._padding_ = 0;
  *(TVector2<double>_u_0 *)&this[1]._padding_ =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  *(TVector2<double>_u_0 *)&this[1]._padding_ =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  *(TVector2<double>_u_0 *)&this[1]._padding_ =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  TVar7 = UE::Math::TVector2<double>::ZeroVector;
  *(undefined1 *)&this[2]._padding_ = 1;
  *(TVector2<double>_u_0 *)&this[1]._padding_ = (TVector2<double>_u_0_s_0)TVar7.field0_0x0;
  this[2]._padding_ = 0;
  this[2]._padding_ = 0;
  pTVar10 = operator_new(0x140);
  pTVar12 = (TReferenceControllerBase<1> *)&DAT_00000010;
  if (pTVar10 == (TReferenceControllerBase<1> *)0x0) {
    pTVar11 = (TReferenceControllerBase<1> *)&DAT_00000010;
    pTVar10 = (TReferenceControllerBase<1> *)0x0;
LAB_14ea398f1:
    lVar3._0_4_ = pTVar11->SharedReferenceCount;
    lVar3._4_4_ = pTVar11->WeakReferenceCount;
    if (((lVar3 == 0) || (pTVar11[1]._padding_ == 0)) || (*(int *)(pTVar11[1]._padding_ + 8) < 1)) {
      if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
        UNLOCK();
      }
      *(TReferenceControllerBase<1> **)&pTVar11->SharedReferenceCount = pTVar11;
      if (pTVar10 != (TReferenceControllerBase<1> *)pTVar11[1]._padding_) {
        if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar10->WeakReferenceCount = (atomic<int>)((int)pTVar10->WeakReferenceCount + 1);
          UNLOCK();
        }
        plVar5 = (longlong *)pTVar11[1]._padding_;
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
        pTVar11[1]._padding_ = (longlong)pTVar10;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
    }
  }
  else {
    pTVar10->SharedReferenceCount = (atomic<int>)0x1;
    pTVar10->WeakReferenceCount = (atomic<int>)0x1;
    pTVar10[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar10[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar10->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFImgMediaMipMapInfo___00_SharedPointerInternals__6B_;
    pTVar10[2]._padding_ = 0;
    pTVar10[1]._padding_ = (longlong)&___7FDataContainer_IMediaOptions__6B_;
    FTickableGameObject::FTickableGameObject
              ((FTickableGameObject *)&pTVar10[2].SharedReferenceCount,Never);
    pTVar10[1]._padding_ =
         (longlong)&FImgMediaMipMapInfo::_vftable__for__IMediaOptions__FDataContainer__;
    pTVar10[3]._padding_ = 0;
    *(undefined ***)&pTVar10[2].SharedReferenceCount =
         &FImgMediaMipMapInfo::_vftable__for__FTickableGameObject__;
    pTVar10[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar10[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar10[4]._padding_ = 0;
    pTVar10[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar10[4].WeakReferenceCount = (atomic<int>)0x0;
    pTVar10[5]._padding_ = 0;
    pTVar10[5].SharedReferenceCount = (atomic<int>)0x0;
    pTVar10[5].WeakReferenceCount = (atomic<int>)0x0;
    pTVar10[6]._padding_ = 0;
    *(TIntPoint<int>_u_0 *)&pTVar10[6].SharedReferenceCount =
         (TIntPoint<int>_u_0_s_0)UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
    *(undefined4 *)&pTVar10[7]._padding_ = 0;
    ((TIntPoint<int>_u_0 *)((longlong)&pTVar10[7]._padding_ + 4))->_s_0 =
         (TIntPoint<int>_u_0_s_0)UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
    *(TIntPoint<int>_u_0 *)&pTVar10[7].WeakReferenceCount =
         (TIntPoint<int>_u_0_s_0)UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
    *(undefined4 *)((longlong)&pTVar10[8]._padding_ + 4) = 0;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&pTVar10[8].SharedReferenceCount,4000)
    ;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(pTVar10 + 0xb),4000);
    pTVar10[0xd].SharedReferenceCount = (atomic<int>)0x0;
    pTVar10[0xd].WeakReferenceCount = (atomic<int>)0x0;
    pTVar11 = pTVar10 + 1;
    pTVar10[0xe]._padding_ = 0;
    pTVar10[0xf].SharedReferenceCount = (atomic<int>)0x0;
    pTVar10[0xf].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar10[0x10]._padding_ = 0;
    *(undefined4 *)((longlong)&pTVar10[0x10]._padding_ + 4) = 0x80;
    pTVar10[0x10].SharedReferenceCount = (atomic<int>)0xffffffff;
    pTVar10[0x10].WeakReferenceCount = (atomic<int>)0x0;
    pTVar10[0x11].SharedReferenceCount = (atomic<int>)0x0;
    pTVar10[0x11].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar10[0x12]._padding_ = 0;
    *(undefined1 *)&pTVar10[0x12].SharedReferenceCount = 0;
    pTVar10[0x13]._padding_ = 0;
    *(undefined1 *)&pTVar10[0x13].SharedReferenceCount = 0;
    if (pTVar11 != (TReferenceControllerBase<1> *)0x0) goto LAB_14ea398f1;
    bVar8 = FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  this[2]._padding_ = (longlong)pTVar11;
  this[2]._padding_ = (longlong)pTVar10;
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  pTVar11 = operator_new(0x1c0);
  pTVar10 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
    pTVar11->SharedReferenceCount = (atomic<int>)0x1;
    pTVar11->WeakReferenceCount = (atomic<int>)0x1;
    pTVar11[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar11[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar11->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFNativeMediaSourceColorSettings___00_SharedPointerInternals__6B_
    ;
    pTVar11[1]._padding_ = (longlong)&___7FNativeMediaSourceColorSettings__6B_;
    pTVar11[2]._padding_ = 0;
    *(undefined1 *)&pTVar11[2].SharedReferenceCount = 0;
    *(undefined1 *)&pTVar11[0x18]._padding_ = 0;
    *(undefined1 *)&pTVar11[0x19]._padding_ = 1;
    InitializeCriticalSectionAndSpinCount
              ((LPCRITICAL_SECTION)&pTVar11[0x19].SharedReferenceCount,4000);
    pTVar12 = pTVar11 + 1;
    pTVar10 = pTVar11;
    if (pTVar12 == (TReferenceControllerBase<1> *)0x0) {
      bVar8 = FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      goto LAB_14ea39a7d;
    }
  }
  lVar4._0_4_ = pTVar12->SharedReferenceCount;
  lVar4._4_4_ = pTVar12->WeakReferenceCount;
  if (((lVar4 == 0) || (pTVar12[1]._padding_ == 0)) || (*(int *)(pTVar12[1]._padding_ + 8) < 1)) {
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(TReferenceControllerBase<1> **)&pTVar12->SharedReferenceCount = pTVar12;
    if (pTVar10 != (TReferenceControllerBase<1> *)pTVar12[1]._padding_) {
      if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar10->WeakReferenceCount = (atomic<int>)((int)pTVar10->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar5 = (longlong *)pTVar12[1]._padding_;
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
      pTVar12[1]._padding_ = (longlong)pTVar10;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  }
LAB_14ea39a7d:
  this[2]._padding_ = (longlong)pTVar12;
  this[2]._padding_ = (longlong)pTVar10;
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  return;
}

// InternalVTableHelperCtorCaller<UImgMediaSource> @ 14ea36ec0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UImgMediaSource>(FVTableHelper *param_1)

{
  TVector2<double> TVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  UBaseMediaSource *this;
  
  pUVar2 = GetTransientPackageAsObject();
  pUVar3 = UImgMediaSource::GetPrivateStaticClass();
  this = (UBaseMediaSource *)
         StaticAllocateObject
                   (pUVar3,pUVar2,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UBaseMediaSource *)0x0) {
    UBaseMediaSource::UBaseMediaSource(this,param_1);
    this->_padding_ = (longlong)&UImgMediaSource::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UImgMediaSource::_vftable__for__IMediaOptions__;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 60000;
    *(undefined4 *)&this[1]._padding_ = 1;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined8 *)((longlong)&this[1]._padding_ + 4) = 0;
    *(undefined8 *)((longlong)&this[1]._padding_ + 4) = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0;
    *(undefined1 *)&this[1]._padding_ = 0;
    *(undefined2 *)&this[1]._padding_ = 0;
    *(TVector2<double>_u_0 *)&this[1]._padding_ =
         (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
    *(TVector2<double>_u_0 *)&this[1]._padding_ =
         (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
    *(TVector2<double>_u_0 *)&this[1]._padding_ =
         (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
    TVar1 = UE::Math::TVector2<double>::ZeroVector;
    *(undefined1 *)&this[2]._padding_ = 1;
    *(TVector2<double>_u_0 *)&this[1]._padding_ = (TVector2<double>_u_0_s_0)TVar1.field0_0x0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<80,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<int,FImgMediaTileSelection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<int,FImgMediaTileSelection>,TDefaultMapHashableKeyFuncs<int,FImgMediaTileSelection,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<int,FImgMediaTileSelection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FImgMediaTileSelection,0>_>::FKeyComparisonClass<TLess<int>_>_>_>_> @ 14ea37030

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<80,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<int,FImgMediaTileSelection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<int,FImgMediaTileSelection>,TDefaultMapHashableKeyFuncs<int,FImgMediaTileSelection,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<int,FImgMediaTileSelection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FImgMediaTileSelection,0>_>::FKeyComparisonClass<TLess<int>_>_>_>_>
          (TSparseArrayElementOrFreeListLink<TAlignedBytes<80,8>_> *param_1,int param_2,
          FIdentityFunctor param_3,
          FElementCompareClass<TSet<TTuple<int,FImgMediaTileSelection>,TDefaultMapHashableKeyFuncs<int,FImgMediaTileSelection,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<int,FImgMediaTileSelection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FImgMediaTileSelection,0>_>::FKeyComparisonClass<TLess<int>_>_>_>
          param_4)

{
  TSparseArrayElementOrFreeListLink<TAlignedBytes<80,8>_> *pTVar1;
  undefined8 uVar2;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<80,8>_>_s_1 TVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  int iVar13;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<80,8>_> *pTVar14;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<80,8>_> *pTVar15;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<80,8>_> *pTVar16;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<80,8>_> *pTVar17;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<80,8>_> *pTVar18;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<80,8>_> *pTVar19;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<80,8>_> **ppTVar20;
  float fVar21;
  undefined1 auStack_388 [48];
  TSparseArrayElementOrFreeListLink<TAlignedBytes<80,8>_> *local_358;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<80,8>_> *local_348;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<80,8>_> *local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_388;
  if (1 < param_2) {
    local_340 = param_1 + (longlong)param_2 + -1;
    local_348 = param_1;
    fVar21 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar21;
    memset(local_330,0,0x2e8);
    ppTVar20 = &local_348;
    do {
      pTVar14 = ppTVar20[1];
      pTVar19 = *ppTVar20;
      pTVar1 = ppTVar20[2];
      local_358._0_4_ = (int)pTVar1;
      iVar13 = (int)(((longlong)pTVar14 - (longlong)pTVar19) / 0x50) + 1;
      pTVar18 = pTVar19;
      if ((int)local_358 != 0) {
LAB_14ea37110:
        if (8 < iVar13) {
          uVar2 = *(undefined8 *)((pTVar18->ElementData).Pad + 8);
          pTVar16 = pTVar14 + 1;
          pTVar19 = pTVar18 + iVar13 / 2;
          TVar3 = pTVar19->_s_1;
          uVar4 = *(undefined8 *)((longlong)(pTVar19->ElementData).Pad + 8);
          uVar5 = *(undefined8 *)((longlong)(pTVar19->ElementData).Pad + 0x10);
          uVar6 = *(undefined8 *)((longlong)(pTVar19->ElementData).Pad + 0x18);
          uVar7 = *(undefined8 *)((longlong)(pTVar19->ElementData).Pad + 0x20);
          uVar8 = *(undefined8 *)((longlong)(pTVar19->ElementData).Pad + 0x28);
          uVar9 = *(undefined8 *)((longlong)(pTVar19->ElementData).Pad + 0x30);
          uVar10 = *(undefined8 *)((longlong)(pTVar19->ElementData).Pad + 0x38);
          uVar11 = *(undefined8 *)((longlong)(pTVar19->ElementData).Pad + 0x40);
          uVar12 = *(undefined8 *)((longlong)(pTVar19->ElementData).Pad + 0x48);
          pTVar19->_s_1 = pTVar18->_s_1;
          *(undefined8 *)((longlong)(pTVar19->ElementData).Pad + 8) = uVar2;
          uVar2 = *(undefined8 *)((pTVar18->ElementData).Pad + 0x18);
          *(undefined8 *)((longlong)(pTVar19->ElementData).Pad + 0x10) =
               *(undefined8 *)((pTVar18->ElementData).Pad + 0x10);
          *(undefined8 *)((longlong)(pTVar19->ElementData).Pad + 0x18) = uVar2;
          uVar2 = *(undefined8 *)((pTVar18->ElementData).Pad + 0x28);
          *(undefined8 *)((longlong)(pTVar19->ElementData).Pad + 0x20) =
               *(undefined8 *)((pTVar18->ElementData).Pad + 0x20);
          *(undefined8 *)((longlong)(pTVar19->ElementData).Pad + 0x28) = uVar2;
          uVar2 = *(undefined8 *)((pTVar18->ElementData).Pad + 0x38);
          *(undefined8 *)((longlong)(pTVar19->ElementData).Pad + 0x30) =
               *(undefined8 *)((pTVar18->ElementData).Pad + 0x30);
          *(undefined8 *)((longlong)(pTVar19->ElementData).Pad + 0x38) = uVar2;
          uVar2 = *(undefined8 *)((pTVar18->ElementData).Pad + 0x48);
          *(undefined8 *)((longlong)(pTVar19->ElementData).Pad + 0x40) =
               *(undefined8 *)((pTVar18->ElementData).Pad + 0x40);
          *(undefined8 *)((longlong)(pTVar19->ElementData).Pad + 0x48) = uVar2;
          pTVar18->_s_1 = TVar3;
          *(undefined8 *)((pTVar18->ElementData).Pad + 8) = uVar4;
          *(undefined8 *)((pTVar18->ElementData).Pad + 0x10) = uVar5;
          *(undefined8 *)((pTVar18->ElementData).Pad + 0x18) = uVar6;
          *(undefined8 *)((pTVar18->ElementData).Pad + 0x20) = uVar7;
          *(undefined8 *)((pTVar18->ElementData).Pad + 0x28) = uVar8;
          *(undefined8 *)((pTVar18->ElementData).Pad + 0x30) = uVar9;
          *(undefined8 *)((pTVar18->ElementData).Pad + 0x38) = uVar10;
          *(undefined8 *)((pTVar18->ElementData).Pad + 0x40) = uVar11;
          *(undefined8 *)((pTVar18->ElementData).Pad + 0x48) = uVar12;
          pTVar19 = pTVar18;
LAB_14ea37190:
          pTVar15 = pTVar19;
          pTVar19 = pTVar15 + 1;
          if (pTVar19 <= pTVar14) goto code_r0x00014ea37199;
          goto LAB_14ea371a1;
        }
        for (; pTVar19 = pTVar18, pTVar1 = pTVar18, pTVar18 < pTVar14; pTVar14 = pTVar14 + -1) {
          while (pTVar1 = pTVar1 + 1, pTVar1 <= pTVar14) {
            if ((pTVar19->_s_1).PrevFreeIndex < (pTVar1->_s_1).PrevFreeIndex) {
              pTVar19 = pTVar1;
            }
          }
          TVar3 = pTVar19->_s_1;
          uVar2 = *(undefined8 *)((pTVar19->ElementData).Pad + 8);
          uVar4 = *(undefined8 *)((pTVar19->ElementData).Pad + 0x10);
          uVar5 = *(undefined8 *)((pTVar19->ElementData).Pad + 0x18);
          uVar6 = *(undefined8 *)((pTVar19->ElementData).Pad + 0x20);
          uVar7 = *(undefined8 *)((pTVar19->ElementData).Pad + 0x28);
          uVar8 = *(undefined8 *)((pTVar14->ElementData).Pad + 8);
          uVar9 = *(undefined8 *)((pTVar19->ElementData).Pad + 0x30);
          uVar10 = *(undefined8 *)((pTVar19->ElementData).Pad + 0x38);
          uVar11 = *(undefined8 *)((pTVar19->ElementData).Pad + 0x40);
          uVar12 = *(undefined8 *)((pTVar19->ElementData).Pad + 0x48);
          pTVar19->_s_1 = pTVar14->_s_1;
          *(undefined8 *)((pTVar19->ElementData).Pad + 8) = uVar8;
          uVar8 = *(undefined8 *)((pTVar14->ElementData).Pad + 0x18);
          *(undefined8 *)((pTVar19->ElementData).Pad + 0x10) =
               *(undefined8 *)((pTVar14->ElementData).Pad + 0x10);
          *(undefined8 *)((pTVar19->ElementData).Pad + 0x18) = uVar8;
          uVar8 = *(undefined8 *)((pTVar14->ElementData).Pad + 0x28);
          *(undefined8 *)((pTVar19->ElementData).Pad + 0x20) =
               *(undefined8 *)((pTVar14->ElementData).Pad + 0x20);
          *(undefined8 *)((pTVar19->ElementData).Pad + 0x28) = uVar8;
          uVar8 = *(undefined8 *)((pTVar14->ElementData).Pad + 0x38);
          *(undefined8 *)((pTVar19->ElementData).Pad + 0x30) =
               *(undefined8 *)((pTVar14->ElementData).Pad + 0x30);
          *(undefined8 *)((pTVar19->ElementData).Pad + 0x38) = uVar8;
          uVar8 = *(undefined8 *)((pTVar14->ElementData).Pad + 0x48);
          *(undefined8 *)((pTVar19->ElementData).Pad + 0x40) =
               *(undefined8 *)((pTVar14->ElementData).Pad + 0x40);
          *(undefined8 *)((pTVar19->ElementData).Pad + 0x48) = uVar8;
          pTVar14->_s_1 = TVar3;
          *(undefined8 *)((pTVar14->ElementData).Pad + 8) = uVar2;
          *(undefined8 *)((pTVar14->ElementData).Pad + 0x10) = uVar4;
          *(undefined8 *)((pTVar14->ElementData).Pad + 0x18) = uVar5;
          *(undefined8 *)((pTVar14->ElementData).Pad + 0x20) = uVar6;
          *(undefined8 *)((pTVar14->ElementData).Pad + 0x28) = uVar7;
          *(undefined8 *)((pTVar14->ElementData).Pad + 0x30) = uVar9;
          *(undefined8 *)((pTVar14->ElementData).Pad + 0x38) = uVar10;
          *(undefined8 *)((pTVar14->ElementData).Pad + 0x40) = uVar11;
          *(undefined8 *)((pTVar14->ElementData).Pad + 0x48) = uVar12;
        }
        goto LAB_14ea37334;
      }
LAB_14ea37325:
      local_358 = pTVar1;
      HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<80,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<int,FImgMediaTileSelection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<int,FImgMediaTileSelection>,TDefaultMapHashableKeyFuncs<int,FImgMediaTileSelection,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<int,FImgMediaTileSelection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FImgMediaTileSelection,0>_>::FKeyComparisonClass<TLess<int>_>_>_>_>
                (pTVar19,iVar13,param_3,param_4);
LAB_14ea37334:
      ppTVar20 = ppTVar20 + -3;
    } while (&local_348 <= ppTVar20);
  }
  return;
code_r0x00014ea37199:
  if ((pTVar19->_s_1).PrevFreeIndex <= (pTVar18->_s_1).PrevFreeIndex) goto LAB_14ea37190;
LAB_14ea371a1:
  do {
    pTVar17 = pTVar16;
    pTVar16 = pTVar17 + -1;
    if (pTVar16 <= pTVar18) break;
  } while ((pTVar18->_s_1).PrevFreeIndex <= (pTVar16->_s_1).PrevFreeIndex);
  uVar2 = *(undefined8 *)((longlong)pTVar17 + -0x48);
  if (pTVar19 <= pTVar16) {
    TVar3 = pTVar19->_s_1;
    uVar4 = *(undefined8 *)((longlong)pTVar15 + 0x58);
    uVar5 = *(undefined8 *)((longlong)pTVar15 + 0x60);
    uVar6 = *(undefined8 *)((longlong)pTVar15 + 0x68);
    uVar7 = *(undefined8 *)((longlong)pTVar15 + 0x70);
    uVar8 = *(undefined8 *)((longlong)pTVar15 + 0x78);
    uVar9 = *(undefined8 *)((longlong)pTVar15 + 0x80);
    uVar10 = *(undefined8 *)((longlong)pTVar15 + 0x88);
    uVar11 = *(undefined8 *)((longlong)pTVar15 + 0x90);
    uVar12 = *(undefined8 *)((longlong)pTVar15 + 0x98);
    pTVar19->_s_1 = pTVar16->_s_1;
    *(undefined8 *)((longlong)pTVar15 + 0x58) = uVar2;
    uVar2 = *(undefined8 *)((longlong)pTVar17 + -0x38);
    *(undefined8 *)((longlong)pTVar15 + 0x60) = *(undefined8 *)((longlong)pTVar17 + -0x40);
    *(undefined8 *)((longlong)pTVar15 + 0x68) = uVar2;
    uVar2 = *(undefined8 *)((longlong)pTVar17 + -0x28);
    *(undefined8 *)((longlong)pTVar15 + 0x70) = *(undefined8 *)((longlong)pTVar17 + -0x30);
    *(undefined8 *)((longlong)pTVar15 + 0x78) = uVar2;
    uVar2 = *(undefined8 *)((longlong)pTVar17 + -0x18);
    *(undefined8 *)((longlong)pTVar15 + 0x80) = *(undefined8 *)((longlong)pTVar17 + -0x20);
    *(undefined8 *)((longlong)pTVar15 + 0x88) = uVar2;
    uVar2 = *(undefined8 *)((longlong)pTVar17 + -8);
    *(undefined8 *)((longlong)pTVar15 + 0x90) = *(undefined8 *)((longlong)pTVar17 + -0x10);
    *(undefined8 *)((longlong)pTVar15 + 0x98) = uVar2;
    pTVar16->_s_1 = TVar3;
    *(undefined8 *)((longlong)pTVar17 + -0x48) = uVar4;
    *(undefined8 *)((longlong)pTVar17 + -0x40) = uVar5;
    *(undefined8 *)((longlong)pTVar17 + -0x38) = uVar6;
    *(undefined8 *)((longlong)pTVar17 + -0x30) = uVar7;
    *(undefined8 *)((longlong)pTVar17 + -0x28) = uVar8;
    *(undefined8 *)((longlong)pTVar17 + -0x20) = uVar9;
    *(undefined8 *)((longlong)pTVar17 + -0x18) = uVar10;
    *(undefined8 *)((longlong)pTVar17 + -0x10) = uVar11;
    *(undefined8 *)((longlong)pTVar17 + -8) = uVar12;
    goto LAB_14ea37190;
  }
  TVar3 = pTVar18->_s_1;
  uVar4 = *(undefined8 *)((pTVar18->ElementData).Pad + 8);
  uVar5 = *(undefined8 *)((pTVar18->ElementData).Pad + 0x10);
  uVar6 = *(undefined8 *)((pTVar18->ElementData).Pad + 0x18);
  local_358._0_4_ = (int)local_358 + -1;
  uVar7 = *(undefined8 *)((pTVar18->ElementData).Pad + 0x20);
  uVar8 = *(undefined8 *)((pTVar18->ElementData).Pad + 0x28);
  uVar9 = *(undefined8 *)((pTVar18->ElementData).Pad + 0x30);
  uVar10 = *(undefined8 *)((pTVar18->ElementData).Pad + 0x38);
  uVar11 = *(undefined8 *)((pTVar18->ElementData).Pad + 0x40);
  uVar12 = *(undefined8 *)((pTVar18->ElementData).Pad + 0x48);
  pTVar18->_s_1 = pTVar16->_s_1;
  *(undefined8 *)((pTVar18->ElementData).Pad + 8) = uVar2;
  uVar2 = *(undefined8 *)((longlong)pTVar17 + -0x38);
  *(undefined8 *)((pTVar18->ElementData).Pad + 0x10) = *(undefined8 *)((longlong)pTVar17 + -0x40);
  *(undefined8 *)((pTVar18->ElementData).Pad + 0x18) = uVar2;
  uVar2 = *(undefined8 *)((longlong)pTVar17 + -0x28);
  *(undefined8 *)((pTVar18->ElementData).Pad + 0x20) = *(undefined8 *)((longlong)pTVar17 + -0x30);
  *(undefined8 *)((pTVar18->ElementData).Pad + 0x28) = uVar2;
  uVar2 = *(undefined8 *)((longlong)pTVar17 + -0x18);
  *(undefined8 *)((pTVar18->ElementData).Pad + 0x30) = *(undefined8 *)((longlong)pTVar17 + -0x20);
  *(undefined8 *)((pTVar18->ElementData).Pad + 0x38) = uVar2;
  uVar2 = *(undefined8 *)((longlong)pTVar17 + -8);
  *(undefined8 *)((pTVar18->ElementData).Pad + 0x40) = *(undefined8 *)((longlong)pTVar17 + -0x10);
  *(undefined8 *)((pTVar18->ElementData).Pad + 0x48) = uVar2;
  pTVar16->_s_1 = TVar3;
  *(undefined8 *)((longlong)pTVar17 + -0x48) = uVar4;
  *(undefined8 *)((longlong)pTVar17 + -0x40) = uVar5;
  *(undefined8 *)((longlong)pTVar17 + -0x38) = uVar6;
  *(undefined8 *)((longlong)pTVar17 + -0x30) = uVar7;
  *(undefined8 *)((longlong)pTVar17 + -0x28) = uVar8;
  *(undefined8 *)((longlong)pTVar17 + -0x20) = uVar9;
  *(undefined8 *)((longlong)pTVar17 + -0x18) = uVar10;
  *(undefined8 *)((longlong)pTVar17 + -0x10) = uVar11;
  *(undefined8 *)((longlong)pTVar17 + -8) = uVar12;
  if (((longlong)pTVar16 + (-0x50 - (longlong)pTVar18)) / 0x50 <
      ((longlong)pTVar14 - (longlong)pTVar19) / 0x50) {
    if (pTVar19 < pTVar14) {
      *ppTVar20 = pTVar19;
      ppTVar20[1] = pTVar14;
      *(int *)(ppTVar20 + 2) = (int)local_358;
      ppTVar20 = ppTVar20 + 3;
    }
    if (pTVar16 <= pTVar18 + 1) goto LAB_14ea37334;
    pTVar14 = pTVar17 + -2;
    pTVar19 = pTVar18;
  }
  else {
    if (pTVar18 + 1 < pTVar16) {
      *ppTVar20 = pTVar18;
      ppTVar20[1] = pTVar17 + -2;
      *(int *)(ppTVar20 + 2) = (int)local_358;
      ppTVar20 = ppTVar20 + 3;
    }
    if (pTVar14 <= pTVar19) goto LAB_14ea37334;
  }
  iVar13 = (int)(((longlong)pTVar14 - (longlong)pTVar19) / 0x50) + 1;
  pTVar18 = pTVar19;
  if ((int)local_358 == 0) goto LAB_14ea37325;
  goto LAB_14ea37110;
}

// LowerBoundInternal<TTuple<int,TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_>_>_const_,int,int,TSortedMap<int,TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<int_const_>_>::FKeyForward,TLess<int_const_>_> @ 14ea37420

int __cdecl
AlgoImpl::
LowerBoundInternal<TTuple<int,TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_>_>_const_,int,int,TSortedMap<int,TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<int_const_>_>::FKeyForward,TLess<int_const_>_>
          (TTuple<int,TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_>_> *param_1,
          int param_2,int *param_3,FKeyForward param_4,TLess<int_const_> param_5)

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

// MakeShared<FExrMediaTextureSampleConverter,1> @ 14ea37470

TSharedRef<FExrMediaTextureSampleConverter,1> * __cdecl
MakeShared<FExrMediaTextureSampleConverter,1>
          (TSharedRef<FExrMediaTextureSampleConverter,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedRef<FExrMediaTextureSampleConverter,1> *pTVar4;
  
  pTVar3 = operator_new(0x208);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (FExrMediaTextureSampleConverter *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFExrMediaTextureSampleConverter___00_SharedPointerInternals__6B_
    ;
    memset(&pTVar3[1].SharedReferenceCount,0,0x1f0);
    pTVar3[1]._padding_ = (longlong)&___7FExrMediaTextureSampleConverter__6B_;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&pTVar3[1].SharedReferenceCount,4000);
    pTVar3[6].SharedReferenceCount = (atomic<int>)0xea60;
    pTVar3[4]._padding_ = 0;
    pTVar3[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[4].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[5].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[5].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[6]._padding_ = 0;
    *(undefined1 *)&pTVar3[7]._padding_ = 0;
    pTVar3[7].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[7].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[8]._padding_ = 0;
    *(undefined1 *)&pTVar3[8].SharedReferenceCount = 0;
    *(undefined8 *)&pTVar3[9].WeakReferenceCount = 0;
    pTVar3[0xc]._padding_ = 0;
    pTVar3[0xc].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0xc].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[0xd]._padding_ = 0;
    pTVar3[0xd].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0xd].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[0xf]._padding_ = 0;
    pTVar3[0xf].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0xf].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[6].WeakReferenceCount = (atomic<int>)0x1;
    pTVar3[0xe].WeakReferenceCount = (atomic<int>)0xffffffff;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(pTVar3 + 0x10),4000);
    pTVar3[0x12].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0x12].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[0x13]._padding_ = 0;
    pTVar3[0x13].SharedReferenceCount = (atomic<int>)0x0;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(pTVar3 + 0x14),4000);
    pTVar3[0x16].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0x16].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[0x17]._padding_ = 0;
    pTVar3[0x18].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0x18].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar3[0x19]._padding_ = 0;
    *(undefined4 *)((longlong)&pTVar3[0x19]._padding_ + 4) = 0x80;
    pTVar3[0x19].SharedReferenceCount = (atomic<int>)0xffffffff;
    pTVar3[0x19].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[0x1a].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0x1a].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar3[0x1b]._padding_ = 0;
    pTVar3[0x1b].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0x1b].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[0x1c]._padding_ = 0;
    pTVar3[0x1d].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0x1d].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar3[0x1e]._padding_ = 0;
    *(undefined4 *)((longlong)&pTVar3[0x1e]._padding_ + 4) = 0x80;
    pTVar3[0x1e].SharedReferenceCount = (atomic<int>)0xffffffff;
    pTVar3[0x1e].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[0x1f].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0x1f].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar3[0x20]._padding_ = 0;
    __return_storage_ptr__->Object = (FExrMediaTextureSampleConverter *)(pTVar3 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    if ((FExrMediaTextureSampleConverter *)(pTVar3 + 1) == (FExrMediaTextureSampleConverter *)0x0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedRef<FExrMediaTextureSampleConverter,1> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return __return_storage_ptr__;
}

// MakeShared<FImgMediaTextureSample,1> @ 14ea37680

TSharedRef<FImgMediaTextureSample,1> * __cdecl
MakeShared<FImgMediaTextureSample,1>(TSharedRef<FImgMediaTextureSample,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedRef<FImgMediaTextureSample,1> *pTVar4;
  
  pTVar3 = operator_new(0x1c0);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (FImgMediaTextureSample *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFImgMediaTextureSample___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FImgMediaTextureSample__6B_;
    pTVar3[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[1].WeakReferenceCount = (atomic<int>)0x0;
    FImgMediaFrame::FImgMediaFrame((FImgMediaFrame *)(pTVar3 + 2));
    ((TIntPoint<int>_u_0 *)(pTVar3 + 0x18))->_s_0 =
         (TIntPoint<int>_u_0_s_0)UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
    pTVar3[0x18].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0x18].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[0x19]._padding_ = 0;
    *(undefined1 *)&pTVar3[0x19].SharedReferenceCount = 1;
    *(TIntPoint<int>_u_0 *)&pTVar3[0x19].WeakReferenceCount =
         (TIntPoint<int>_u_0_s_0)UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
    ((TIntPoint<int>_u_0 *)((longlong)&pTVar3[0x1a]._padding_ + 4))->_s_0 =
         (TIntPoint<int>_u_0_s_0)UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
    pTVar3[0x1a].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[0x1b]._padding_ = 0;
    pTVar3[0x1b].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0x1b].WeakReferenceCount = (atomic<int>)0x0;
    __return_storage_ptr__->Object = (FImgMediaTextureSample *)(pTVar3 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    if ((FImgMediaTextureSample *)(pTVar3 + 1) == (FImgMediaTextureSample *)0x0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedRef<FImgMediaTextureSample,1> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return __return_storage_ptr__;
}

// NewObject<UImgMediaSource> @ 14ea377a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UImgMediaSource * __cdecl
NewObject<UImgMediaSource>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UImgMediaSource *pUVar2;
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
  pUVar1 = UImgMediaSource::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UImgMediaSource *)
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

// Reverse<FStructuredBufferPoolItem_*> @ 14ea37a10

void __cdecl
AlgoImpl::Reverse<FStructuredBufferPoolItem_*>(FStructuredBufferPoolItem **param_1,int param_2)

{
  FStructuredBufferPoolItem *pFVar1;
  FStructuredBufferPoolItem **ppFVar2;
  longlong lVar3;
  
  if (0 < param_2 / 2) {
    lVar3 = 0;
    ppFVar2 = param_1 + (param_2 + -1);
    do {
      pFVar1 = param_1[lVar3];
      param_1[lVar3] = *ppFVar2;
      lVar3 = lVar3 + 1;
      *ppFVar2 = pFVar1;
      ppFVar2 = ppFVar2 + -1;
    } while (lVar3 < param_2 / 2);
  }
  return;
}

// SetShaderParameters<FRHICommandListImmediate,FExrSwizzlePS,FRHIPixelShader> @ 14ea37a70

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
SetShaderParameters<FRHICommandListImmediate,FExrSwizzlePS,FRHIPixelShader>
          (FRHICommandListImmediate *param_1,
          TShaderRefBase<FExrSwizzlePS,FShaderMapPointerTable> *param_2,FRHIPixelShader *param_3,
          FParameters *param_4)

{
  FShaderParametersMetadata *pFVar1;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_18;
  
  pFVar1 = FExrSwizzlePS::FParameters::FTypeInfo::GetStructMetadata();
  local_18.ShaderContent = (FShader *)param_2->ShaderContent;
  local_18.ShaderMap = param_2->ShaderMap;
  ValidateShaderParameters(&local_18,pFVar1,param_4);
  SetShaderParameters((FRHICommandList *)param_1,(FRHIGraphicsShader *)param_3,
                      (FShaderParameterBindings *)param_2->ShaderContent,pFVar1,param_4);
  return;
}

// StaticEnum<enum_EMediaSourceEncoding> @ 14ea37b90

UEnum * __cdecl StaticEnum<enum_EMediaSourceEncoding>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMediaSourceEncoding.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ImgMedia();
    Z_Registration_Info_UEnum_EMediaSourceEncoding.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ImgMedia_EMediaSourceEncoding,(UObject *)pUVar1,
                       L"EMediaSourceEncoding");
  }
  return Z_Registration_Info_UEnum_EMediaSourceEncoding.OuterSingleton;
}

// _Atomic_address_as<char,std::_Atomic_padded<enum_UE::Color::EChromaticAdaptationMethod>_> @ 14ea37bd0

char * __cdecl
std::_Atomic_address_as<char,std::_Atomic_padded<enum_UE::Color::EChromaticAdaptationMethod>_>
          (_Atomic_padded<UE::Color::EChromaticAdaptationMethod> *param_1)

{
  return (char *)param_1;
}

// _Atomic_address_as<char,std::_Atomic_padded<enum_UE::Color::EChromaticAdaptationMethod>_> @ 14ea37be0

char * __cdecl
std::_Atomic_address_as<char,std::_Atomic_padded<enum_UE::Color::EChromaticAdaptationMethod>_>
          (_Atomic_padded<UE::Color::EChromaticAdaptationMethod> *param_1)

{
  return (char *)param_1;
}

// _Atomic_address_as<char,std::_Atomic_padded<enum_UE::Color::EEncoding>_> @ 14ea37bf0

char * __cdecl
std::_Atomic_address_as<char,std::_Atomic_padded<enum_UE::Color::EEncoding>_>
          (_Atomic_padded<UE::Color::EEncoding> *param_1)

{
  return (char *)param_1;
}

// _Atomic_address_as<char,std::_Atomic_padded<enum_UE::Color::EEncoding>_> @ 14ea37c00

char * __cdecl
std::_Atomic_address_as<char,std::_Atomic_padded<enum_UE::Color::EEncoding>_>
          (_Atomic_padded<UE::Color::EEncoding> *param_1)

{
  return (char *)param_1;
}

// _Atomic_address_as<int,std::_Atomic_padded<enum_EMediaTextureSampleFormat>_> @ 14ea37c10

int * __cdecl
std::_Atomic_address_as<int,std::_Atomic_padded<enum_EMediaTextureSampleFormat>_>
          (_Atomic_padded<EMediaTextureSampleFormat> *param_1)

{
  return (int *)param_1;
}

// _Atomic_address_as<int,std::_Atomic_padded<enum_EMediaTextureSampleFormat>_> @ 14ea37c20

int * __cdecl
std::_Atomic_address_as<int,std::_Atomic_padded<enum_EMediaTextureSampleFormat>_>
          (_Atomic_padded<EMediaTextureSampleFormat> *param_1)

{
  return (int *)param_1;
}

// _Atomic_reinterpret_as<char,enum_UE::Color::EChromaticAdaptationMethod> @ 14ea37c30

char __cdecl
std::_Atomic_reinterpret_as<char,enum_UE::Color::EChromaticAdaptationMethod>
          (EChromaticAdaptationMethod *param_1)

{
  return *param_1;
}

// _Atomic_reinterpret_as<char,enum_UE::Color::EEncoding> @ 14ea37c40

char __cdecl std::_Atomic_reinterpret_as<char,enum_UE::Color::EEncoding>(EEncoding *param_1)

{
  return *param_1;
}

// _Atomic_reinterpret_as<int,enum_EMediaTextureSampleFormat> @ 14ea37c50

int __cdecl
std::_Atomic_reinterpret_as<int,enum_EMediaTextureSampleFormat>(EMediaTextureSampleFormat *param_1)

{
  return *param_1;
}

// ~<lambda_1> @ 14ea39ac0

void __thiscall
`Async<`FImgMediaPlayer::Open'::__l2::<lambda_5>_>'::__l4::<lambda_1>::~<lambda_1>(void *this)

{
  code *pcVar1;
  bool bVar2;
  longlong *plVar3;
  
  if ((*(longlong *)((longlong)this + 0x30) != 0) &&
     (*(char *)(*(longlong *)((longlong)this + 0x30) + 0x68) == '\0')) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("State->IsComplete()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x242,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x38));
  if (*(longlong *)this != 0) {
    plVar3 = (longlong *)((longlong)this + 0x10);
    if (*(longlong **)((longlong)this + 0x28) != (longlong *)0x0) {
      plVar3 = *(longlong **)((longlong)this + 0x28);
    }
                    /* WARNING: Could not recover jumptable at 0x00014ea39b27. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`FExrImgMediaReaderGpu::~FExrImgMediaReaderGpu'::__l2::<lambda_1>,1,1> @ 14ea39b40

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FExrImgMediaReaderGpu::~FExrImgMediaReaderGpu'::__l2::<lambda_1>,1,1>::
~TFunction_OwnedObject<_FExrImgMediaReaderGpu::~FExrImgMediaReaderGpu_::__l2::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FExrImgMediaReaderGpu::~FExrImgMediaReaderGpu'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  *(undefined4 *)((longlong)this + 0x50) = 0;
  if (*(void **)((longlong)this + 0x48) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x48));
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,FStructuredBufferPoolItem_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,FStructuredBufferPoolItem_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,FStructuredBufferPoolItem_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)this + 8));
  return;
}

// ~TFunction_OwnedObject<`FExrImgMediaReaderGpu::ReadMip'::__l2::<lambda_1>,0,0> @ 14ea39b80

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FExrImgMediaReaderGpu::ReadMip'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_FExrImgMediaReaderGpu::ReadMip_::__l2::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FExrImgMediaReaderGpu::ReadMip'::`2'::<lambda_1>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`Async<`FImgMediaPlayer::Open'::__l2::<lambda_5>_>'::__l4::<lambda_1>,1,1> @ 14ea39ba0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`FImgMediaPlayer::Open'::__l2::<lambda_5>_>'::__l4::<lambda_1>,1,1>::
~TFunction_OwnedObject<_Async<_FImgMediaPlayer::Open_::__l2::<lambda_5>_>_::__l4::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Async<`FImgMediaPlayer::Open'::`2'::<lambda_5>_>'::`4'::<lambda_1>,1,1>
        ::_vftable_;
  `Async<`FImgMediaPlayer::Open'::__l2::<lambda_5>_>'::__l4::<lambda_1>::~<lambda_1>
            ((void *)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<``FExrImgMediaReaderGpu::AllocateGpuBufferFromPool'::__l2::<lambda_1>::operator()'::__l7::<lambda_1>,1,0> @ 14ea39bc0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FExrImgMediaReaderGpu::AllocateGpuBufferFromPool'::__l2::<lambda_1>::operator()'::__l7::<lambda_1>,1,0>
::
~TFunction_OwnedObject<__FExrImgMediaReaderGpu::AllocateGpuBufferFromPool_::__l2::<lambda_1>::operator()_::__l7::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<``FExrImgMediaReaderGpu::AllocateGpuBufferFromPool'::`2'::<lambda_1>::operator()'::`7'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FExrImgMediaReaderGpu::AllocateGpuBufferFromPool'::__l9::<lambda_2>,1,1> @ 14ea39be0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FExrImgMediaReaderGpu::AllocateGpuBufferFromPool'::__l9::<lambda_2>,1,1>::
~TFunction_OwnedObject<_FExrImgMediaReaderGpu::AllocateGpuBufferFromPool_::__l9::<lambda_2>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FExrImgMediaReaderGpu::AllocateGpuBufferFromPool'::`9'::<lambda_2>,1,1>
        ::_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`FExrImgMediaReaderGpu::ReadMip'::__l26::<lambda_2>,1,1> @ 14ea39c00

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FExrImgMediaReaderGpu::ReadMip'::__l26::<lambda_2>,1,1>::
~TFunction_OwnedObject<_FExrImgMediaReaderGpu::ReadMip_::__l26::<lambda_2>,1,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FExrImgMediaReaderGpu::ReadMip'::`26'::<lambda_2>,1,1>::_vftable_;
  if (*(void **)((longlong)this + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x28));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x20));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`FImgMediaPlayer::Open'::__l2::<lambda_5>,1,1> @ 14ea39c40

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FImgMediaPlayer::Open'::__l2::<lambda_5>,1,1>::
~TFunction_OwnedObject<_FImgMediaPlayer::Open_::__l2::<lambda_5>,1,1>(void *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FImgMediaPlayer::Open'::`2'::<lambda_5>,1,1>::_vftable_;
  if (*(void **)((longlong)this + 0x30) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x30));
  }
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  plVar3 = *(longlong **)((longlong)this + 0x18);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014ea39c94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// ~TScopeGuard<`FImgMediaSanitizePathTests::RunTest'::__l2::<lambda_3>_> @ 14ea39cb0

void __thiscall
ScopeExitSupport::TScopeGuard<`FImgMediaSanitizePathTests::RunTest'::__l2::<lambda_3>_>::
~TScopeGuard<_FImgMediaSanitizePathTests::RunTest_::__l2::<lambda_3>_>(void *this)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  IFileManager *pIVar4;
  wchar_t *pwVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined1 local_res8 [8];
  
  plVar1 = *(longlong **)this;
  lVar2 = plVar1[1];
  puVar6 = (undefined8 *)*plVar1;
  puVar8 = puVar6 + (longlong)(int)lVar2 * 2;
  while( true ) {
    if ((int)plVar1[1] != (int)lVar2) {
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8)
      ;
    }
    if (puVar6 == puVar8) break;
    pIVar4 = IFileManager::Get();
    if (*(int *)(puVar6 + 1) == 0) {
      pwVar5 = L"";
    }
    else {
      pwVar5 = (wchar_t *)*puVar6;
    }
    (**(code **)((longlong)*pIVar4 + 0x38))(pIVar4,pwVar5,0,0,0);
    puVar6 = puVar6 + 2;
  }
  plVar1 = *(longlong **)((longlong)this + 8);
  lVar3 = plVar1[1];
  lVar2 = *plVar1;
  lVar7 = (longlong)(int)lVar3 * 0x10 + lVar2;
  while( true ) {
    if ((int)plVar1[1] != (int)lVar3) {
      `TCheckedPointerIterator<FString,int,1>::operator!='::__l2::<lambda_1>::operator()(local_res8)
      ;
    }
    if (lVar7 == lVar2) break;
    pIVar4 = IFileManager::Get();
    if (*(int *)(lVar7 + -8) == 0) {
      pwVar5 = L"";
    }
    else {
      pwVar5 = *(wchar_t **)(lVar7 + -0x10);
    }
    (**(code **)((longlong)*pIVar4 + 0x68))(pIVar4,pwVar5,0,0);
    lVar7 = lVar7 + -0x10;
  }
  return;
}

// operator() @ 14ea3da20

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
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall
``FExrImgMediaReaderGpu::CreateSampleConverterCallback'::__l2::<lambda_1>::operator()'::__l2::
<lambda_2>::operator()
          (void *this,FRHICommandListImmediate *param_1,TRefCountPtr<FRHITexture> param_2,
          FSampleConverterParameters *param_3,int param_4,int param_5,
          TSharedPtr<FStructuredBufferPoolItem,1> *param_6,TIntPoint<int> *param_7,
          TIntPoint<int> *param_8,
          TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_> *param_9)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  FNativeMediaSourceColorSettings *pFVar2;
  void *_Src;
  TIntPoint<int>_u_0_s_0 TVar3;
  code *pcVar4;
  float fVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  bool bVar9;
  uint uVar10;
  atomic<unsigned_int> aVar11;
  FRHIBreadcrumbAllocator *pFVar12;
  FRHIBreadcrumbNode *pFVar13;
  FColorSpace *pFVar14;
  FColorSpaceTransform *pFVar15;
  FRHIBufferInitializer *pFVar16;
  TRefCountPtr<FRHIShaderResourceView> TVar17;
  FGlobalShaderMap *pFVar18;
  FRHIShader *pFVar19;
  longlong *plVar20;
  FScriptContainerElement *pFVar21;
  ulonglong _Size;
  FScriptContainerElement *pFVar22;
  longlong lVar23;
  FColorSpace *this_00;
  undefined1 auStackY_5a8 [32];
  undefined1 local_528 [8];
  TShaderPermutationDomain<FExrSwizzlePS::FRgbaSwizzle,FExrSwizzlePS::FRenderTiles,FExrSwizzlePS::FPartialTiles>
  local_520;
  FRHIBuffer *local_518;
  TShaderRefBase<FExrSwizzlePS,FShaderMapPointerTable> local_510;
  int local_500;
  undefined4 uStack_4fc;
  undefined4 uStack_4f8;
  int iStack_4f4;
  wchar_t *local_4f0;
  FResourceArrayUploadInterface *pFStack_4e8;
  ERHIAccess local_4e0;
  ERHIBufferInitAction EStack_4dc;
  FName FStack_4d8;
  FName local_4d0;
  undefined1 local_4c8 [36];
  float fStack_4a4;
  float fStack_4a0;
  float fStack_49c;
  float local_498;
  float fStack_494;
  float fStack_490;
  float fStack_48c;
  float local_488;
  float fStack_484;
  float fStack_480;
  float fStack_47c;
  float local_478;
  float fStack_474;
  float fStack_470;
  float fStack_46c;
  FShader *local_468;
  FShaderMapBase *local_460;
  char *local_458;
  undefined4 uStack_450;
  undefined4 uStack_44c;
  TGPUStat<TRHIGPUStatNameProvider_ExrImgMediaReaderGpu_MipRender> *local_448;
  wchar_t *pwStack_440;
  FRHIBreadcrumbScope local_438;
  char local_428;
  FScreenPassPipelineState local_418;
  FInitializer local_3d8;
  FRHIBufferCreateDesc local_3c8;
  FParameters local_388;
  undefined1 local_308 [48];
  FRHICommandListBase *local_2d8;
  FRHIBuffer *local_2d0;
  void *local_2c8;
  ulonglong local_2c0;
  undefined1 local_2b8 [48];
  FRHICommandListBase *local_288;
  FRHIBuffer *local_280;
  FRHIRenderPassInfo local_268;
  FColorSpaceTransform local_168;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_5a8;
  lVar23 = (longlong)param_4;
  local_4c8._8_8_ = param_6;
  local_4c8._16_8_ = param_8;
  local_4c8._24_8_ = param_2.Reference;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    local_458 = 
    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\ImgMedia\\Source\\ImgMedia\\Private\\Readers\\ExrImgMediaReaderGpu.cpp"
    ;
    local_448 = &GPUStat_ExrImgMediaReaderGpu_MipRender;
    uStack_450 = 0x1e5;
    ::Desc._padding_ = CONCAT44(uStack_44c,0x1e5);
    pwStack_440 = L"ExrImgGpu.MipRender";
    ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
    ::Desc._padding_ = (longlong)&GPUStat_ExrImgMediaReaderGpu_MipRender;
    ::Desc._padding_ = (longlong)u_ExrImgGpu_MipRe;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
    ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
    ::Desc.TraceGpuSpecId = 0;
    ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
    atexit(````FExrImgMediaReaderGpu::CreateSampleConverterCallback'::__l2::Desc::operator()'::__l2
           ::<lambda_2>::operator()'::__l7::<lambda_1>::operator()<>'::__l2::
           _dynamic_atexit_destructor_for__Desc__);
    _Init_thread_footer(&::_TSS0);
  }
  pFVar12 = FRHIComputeCommandList::GetBreadcrumbAllocator((FRHIComputeCommandList *)param_1);
  pFVar13 = FMemStackBase::Alloc(&pFVar12->Inner,0x50,8);
  pFVar13->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
  pFVar13->Parent = FRHIBreadcrumbNode::Sentinel;
  pFVar13->ListLink = (FRHIBreadcrumbNode *)0x0;
  (pFVar13->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
  (pFVar13->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
  pFVar13->Data = (FRHIBreadcrumbData *)&::Desc;
  pFVar13->Allocator = pFVar12;
  pFVar13->TraceCpuSpecId = 0;
  pFVar13->TraceCpuMetadataId = 0;
  LOCK();
  UNLOCK();
  uVar10 = (uint)FRHIBreadcrumbNode::NextID | 0x80000000;
  FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
  pFVar13->BeginPipes = (atomic<unsigned_char>)0x0;
  pFVar13->EndPipes = (atomic<unsigned_char>)0x0;
  pFVar13->ID = uVar10;
  pFVar13->_padding_ =
       (longlong)
       &
       ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0A___V_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
  ;
  pFVar13[1]._padding_ = (longlong)&::Desc;
  if ((::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) &&
     (bVar8 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable(), bVar8)) {
    EnterCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
    if (::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
      aVar11 = (atomic<unsigned_int>)
               FCpuProfilerTrace::OutputEventType
                         ((wchar_t *)::Desc._padding_,(char *)::Desc._padding_,
                          (uint)::Desc._padding_);
      LOCK();
      ::Desc.TraceCpuSpecId = aVar11;
      UNLOCK();
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
  }
  pFVar13->TraceCpuSpecId = (uint)::Desc.TraceCpuSpecId;
  FRHIBreadcrumbScope::FRHIBreadcrumbScope(&local_438,(FRHIComputeCommandList *)param_1,pFVar13);
  local_428 = '\x01';
  FRHIRenderPassInfo::FRHIRenderPassInfo
            (&local_268,(FRHITexture *)(param_2.Reference)->_padding_,DontLoad_Store,
             (FRHITexture *)0x0,(uchar)param_5,-1);
  FRHICommandList::BeginRenderPass((FRHICommandList *)param_1,&local_268,L"ExrTextureSwizzle");
  local_388.NumChannels = (int)(param_3->FrameInfo).NumChannels;
  local_520.Tail.DimensionValue = (param_3->FrameInfo).bHasTiles;
  local_388.TileSize.field0_0x0 =
       (TIntPoint<int>_u_0)*(TIntPoint<int>_u_0 *)&(param_3->TileDimWithBorders).field0_0x0._s_0;
  local_520.Tail.Tail.DimensionValue = false;
  local_520.DimensionValue = local_388.NumChannels + -1;
  local_388.TileDescBuffer = (FRHIShaderResourceView *)0x0;
  local_388.TextureSize.field0_0x0 =
       (TIntPoint<int>_u_0)*(TIntPoint<int>_u_0 *)&(param_7->field0_0x0)._s_0;
  if (local_520.Tail.DimensionValue != false) {
    local_388.NumTiles.field0_0x0._s_0.X =
         -((int)ROUND(__real_bf000000 -
                      ((float)local_388.TextureSize.field0_0x0._0_4_ +
                      (float)local_388.TextureSize.field0_0x0._0_4_) /
                      (float)local_388.TileSize.field0_0x0._0_4_) >> 1);
    local_388.NumTiles.field0_0x0._s_0.Y =
         -((int)ROUND(__real_bf000000 -
                      ((float)local_388.TextureSize.field0_0x0._4_4_ +
                      (float)local_388.TextureSize.field0_0x0._4_4_) /
                      (float)local_388.TileSize.field0_0x0._4_4_) >> 1);
  }
  pFVar2 = (param_3->SourceColorSettings).Object;
  if (pFVar2 == (FNativeMediaSourceColorSettings *)0x0) {
    local_388.bApplyColorTransform = 0;
    local_388.EOTF = 0;
  }
  else {
    local_388.EOTF._0_1_ = pFVar2->EncodingOverride;
    local_388.bApplyColorTransform = 1;
    local_388.EOTF._1_3_ = 0;
    pFVar14 = UE::Color::FColorSpace::GetWorking();
    if (((param_3->SourceColorSettings).Object == (FNativeMediaSourceColorSettings *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar2 = (param_3->SourceColorSettings).Object;
    lpCriticalSection = &pFVar2->ColorSpaceCriticalSection;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if ((pFVar2->ColorSpaceOverride).bIsSet == false) {
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      this_00 = pFVar14;
    }
    else {
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      this_00 = &(pFVar2->ColorSpaceOverride).TypedValue;
    }
    bVar8 = UE::Color::FColorSpace::Equals(this_00,pFVar14,__real_3e7ad7f29abcaf48);
    if (!bVar8) {
      if (((param_3->SourceColorSettings).Object == (FNativeMediaSourceColorSettings *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar15 = UE::Color::FColorSpaceTransform::FColorSpaceTransform
                          (&local_168,this_00,pFVar14,
                           (EChromaticAdaptationMethod)
                           ((param_3->SourceColorSettings).Object)->ChromaticAdaptationMethod);
      local_488 = (float)*(double *)&pFVar15->field_0x10;
      local_478 = (float)*(double *)&pFVar15->field_0x18;
      local_4c8._32_4_ = (undefined4)*(double *)pFVar15;
      local_498 = (float)*(double *)&pFVar15->field_0x8;
      fStack_4a4 = (float)*(double *)&pFVar15->field_0x20;
      fStack_494 = (float)*(double *)&pFVar15->field_0x28;
      fStack_4a0 = (float)*(double *)&pFVar15->field_0x40;
      fStack_490 = (float)*(double *)&pFVar15->field_0x48;
      fStack_49c = (float)*(double *)&pFVar15->field_0x60;
      fStack_48c = (float)*(double *)&pFVar15->field_0x68;
      fStack_484 = (float)*(double *)&pFVar15->field_0x30;
      fStack_474 = (float)*(double *)&pFVar15->field_0x38;
      fStack_480 = (float)*(double *)&pFVar15->field_0x50;
      fStack_470 = (float)*(double *)&pFVar15->field_0x58;
      fStack_47c = (float)*(double *)&pFVar15->field_0x70;
      fStack_46c = (float)*(double *)&pFVar15->field_0x78;
      local_388.ColorSpaceMatrix.M[1][1] = fStack_494;
      local_388.ColorSpaceMatrix.M[1][0] = local_498;
      local_388.ColorSpaceMatrix.M[1][3] = fStack_48c;
      local_388.ColorSpaceMatrix.M[1][2] = fStack_490;
      local_388.ColorSpaceMatrix.M[2][1] = fStack_484;
      local_388.ColorSpaceMatrix.M[2][0] = local_488;
      local_388.ColorSpaceMatrix.M[2][3] = fStack_47c;
      local_388.ColorSpaceMatrix.M[2][2] = fStack_480;
      local_388.ColorSpaceMatrix.M[0][1] = fStack_4a4;
      local_388.ColorSpaceMatrix.M[0][0] = (float)local_4c8._32_4_;
      local_388.ColorSpaceMatrix.M[0][3] = fStack_49c;
      local_388.ColorSpaceMatrix.M[0][2] = fStack_4a0;
      local_388.ColorSpaceMatrix.M[3][1] = fStack_474;
      local_388.ColorSpaceMatrix.M[3][0] = local_478;
      local_388.ColorSpaceMatrix.M[3][3] = fStack_46c;
      local_388.ColorSpaceMatrix.M[3][2] = fStack_470;
      goto LAB_14ea3dff0;
    }
  }
  local_388.ColorSpaceMatrix.M[1][0] = UE::Math::TMatrix<float>::Identity.M[1][0];
  local_388.ColorSpaceMatrix.M[1][1] = UE::Math::TMatrix<float>::Identity.M[1][1];
  local_388.ColorSpaceMatrix.M[1][2] = UE::Math::TMatrix<float>::Identity.M[1][2];
  local_388.ColorSpaceMatrix.M[1][3] = UE::Math::TMatrix<float>::Identity.M[1][3];
  local_388.ColorSpaceMatrix.M[0][0] = UE::Math::TMatrix<float>::Identity.M[0][0];
  local_388.ColorSpaceMatrix.M[0][1] = UE::Math::TMatrix<float>::Identity.M[0][1];
  local_388.ColorSpaceMatrix.M[0][2] = UE::Math::TMatrix<float>::Identity.M[0][2];
  local_388.ColorSpaceMatrix.M[0][3] = UE::Math::TMatrix<float>::Identity.M[0][3];
  local_388.ColorSpaceMatrix.M[3][0] = UE::Math::TMatrix<float>::Identity.M[3][0];
  local_388.ColorSpaceMatrix.M[3][1] = UE::Math::TMatrix<float>::Identity.M[3][1];
  local_388.ColorSpaceMatrix.M[3][2] = UE::Math::TMatrix<float>::Identity.M[3][2];
  local_388.ColorSpaceMatrix.M[3][3] = UE::Math::TMatrix<float>::Identity.M[3][3];
  local_388.ColorSpaceMatrix.M[2][0] = UE::Math::TMatrix<float>::Identity.M[2][0];
  local_388.ColorSpaceMatrix.M[2][1] = UE::Math::TMatrix<float>::Identity.M[2][1];
  local_388.ColorSpaceMatrix.M[2][2] = UE::Math::TMatrix<float>::Identity.M[2][2];
  local_388.ColorSpaceMatrix.M[2][3] = UE::Math::TMatrix<float>::Identity.M[2][3];
LAB_14ea3dff0:
  if (((param_3->FrameInfo).bHasTiles != false) &&
     (param_4 < (param_3->TileInfoPerMipLevel).ArrayNum)) {
    if ((param_4 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (0 < *(int *)((param_3->TileInfoPerMipLevel).AllocatorInstance.Data + lVar23 * 0x10 + 8)) {
      bVar8 = -1 < CpuChannel->Enabled;
      if (bVar8) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId532,"ExrReaderGpu.TileDesc",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\ImgMedia\\Source\\ImgMedia\\Private\\Readers\\ExrImgMediaReaderGpu.cpp"
                   ,0x214);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId532);
      }
      uVar10 = 0;
      if (param_4 < (param_3->TileInfoPerMipLevel).ArrayNum) {
        uVar10 = (uint)~param_4 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uStack_4fc = 0x10;
      pFStack_4e8 = (FResourceArrayUploadInterface *)0x0;
      FStack_4d8.ComparisonIndex.Value = 0;
      FStack_4d8.Number = 0;
      local_500 = *(int *)((param_3->TileInfoPerMipLevel).AllocatorInstance.Data + lVar23 * 0x10 + 8
                          ) << 4;
      iStack_4f4 = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
      local_4d0.ComparisonIndex.Value = 0;
      local_4d0.Number = 0;
      local_4f0 = L"FExrImgMediaReaderGpu_TileDesc";
      uStack_4f8 = 0x10502;
      EStack_4dc = Initializer;
      local_4e0 = RHIGetDefaultResourceState(StructuredBuffer|FastVRAM|ShaderResource|Dynamic,false)
      ;
      local_3c8._padding_ = CONCAT44(uStack_4fc,local_500);
      local_3c8._padding_ = CONCAT44(iStack_4f4,uStack_4f8);
      local_3c8.InitAction = EStack_4dc;
      local_3c8.InitialState = local_4e0;
      local_3c8.DebugName = local_4f0;
      local_3c8.InitialData = pFStack_4e8;
      local_3c8.ClassName = FStack_4d8;
      local_3c8.OwnerName = local_4d0;
      pFVar16 = FRHICommandListBase::CreateBufferInitializer
                          ((FRHICommandListBase *)param_1,(FRHIBufferInitializer *)local_2b8,
                           &local_3c8);
      FRHIBufferInitializer::FRHIBufferInitializer((FRHIBufferInitializer *)local_308,pFVar16);
      if ((local_288 != (FRHICommandListBase *)0x0) && (local_280 != (FRHIBuffer *)0x0)) {
        FRHIBufferInitializer::RemovePendingBufferUpload((FRHIBufferInitializer *)local_2b8);
      }
      if (local_2b8._0_8_ != 0) {
        plVar20 = (longlong *)(local_2b8 + 0x10);
        if ((longlong *)local_2b8._40_8_ != (longlong *)0x0) {
          plVar20 = (longlong *)local_2b8._40_8_;
        }
        (**(code **)(*plVar20 + 0x10))();
      }
      uVar10 = 0;
      if (param_4 < (param_3->TileInfoPerMipLevel).ArrayNum) {
        uVar10 = (uint)~param_4 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar21 = (param_3->TileInfoPerMipLevel).AllocatorInstance.Data;
      iVar1 = *(int *)(pFVar21 + lVar23 * 0x10 + 8);
      _Src = *(void **)(pFVar21 + lVar23 * 0x10);
      if ((iVar1 < 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      _Size = (longlong)iVar1 * 0x10;
      if ((local_2c0 < _Size) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Size <= GetWritableDataSize()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIBufferInitializer.h"
                             ,0x27,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      memcpy(local_2c8,_Src,_Size);
      FRHIBufferInitializer::Finalize((FRHIBufferInitializer *)local_308);
      local_3d8._0_8_ = 0;
      local_3d8._8_8_ = 0;
      FRHIViewDesc::FBufferSRV::FInitializer::SetTypeFromBuffer(&local_3d8,local_518);
      TVar17 = FRHICommandListBase::CreateShaderResourceView
                         ((FRHICommandListBase *)param_1,(FRHIBuffer *)local_4c8,
                          (FInitializer *)local_518);
                    /* WARNING: Load size is inaccurate */
      local_388.TileDescBuffer = *TVar17.Reference;
      if ((FRHIResource *)local_4c8._0_8_ != (FRHIResource *)0x0) {
        FRHIResource::Release((FRHIResource *)local_4c8._0_8_);
      }
      local_520.Tail.Tail.DimensionValue = true;
      if (local_518 != (FRHIBuffer *)0x0) {
        FRHIResource::Release((FRHIResource *)local_518);
      }
      if ((local_2d8 != (FRHICommandListBase *)0x0) && (local_2d0 != (FRHIBuffer *)0x0)) {
        FRHIBufferInitializer::RemovePendingBufferUpload((FRHIBufferInitializer *)local_308);
      }
      if (local_308._0_8_ != 0) {
        plVar20 = (longlong *)(local_308 + 0x10);
        if ((longlong *)local_308._40_8_ != (longlong *)0x0) {
          plVar20 = (longlong *)local_308._40_8_;
        }
        (**(code **)(*plVar20 + 0x10))();
      }
      if (bVar8) {
        FCpuProfilerTrace::OutputEndEvent();
      }
    }
  }
  uVar6 = local_4c8._8_8_;
  if ((*(FStructuredBufferPoolItem **)local_4c8._8_8_ == (FStructuredBufferPoolItem *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_388.UnswizzledBuffer =
       ((*(FStructuredBufferPoolItem **)uVar6)->ShaderResourceView).Reference;
  pFVar18 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)GMaxRHIFeatureLevel]);
  TShaderMapRef<FExrSwizzleVS>::TShaderMapRef<FExrSwizzleVS>
            ((TShaderMapRef<FExrSwizzleVS> *)&local_468,pFVar18);
  TShaderMapRef<FExrSwizzlePS>::TShaderMapRef<FExrSwizzlePS>
            ((TShaderMapRef<FExrSwizzlePS> *)&local_510,pFVar18,&local_520);
  uVar7 = local_4c8._16_8_;
  fVar5 = __real_3f800000;
  local_418.VertexShader.ShaderContent = local_468;
  iVar1 = param_9->ArrayNum;
  pFVar21 = (param_9->AllocatorInstance).Data;
  local_418.VertexShader.ShaderMap = local_460;
  local_418.PixelShader.ShaderContent = (FShader *)local_510.ShaderContent;
  local_418.PixelShader.ShaderMap = local_510.ShaderMap;
  local_418.BlendState =
       TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
       ::StaticResource.StateRHI.Reference;
  local_418.DepthStencilState =
       TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
       ::StaticResource.StateRHI.Reference;
  local_418.VertexDeclaration = (FRHIVertexDeclaration *)GFilterVertexDeclaration._32_8_;
  pFVar22 = pFVar21 + (longlong)iVar1 * 0x10;
  local_418.StencilRef = '\0';
  while( true ) {
    if (param_9->ArrayNum != iVar1) {
      `TCheckedPointerIterator<UE::Math::TIntRect<int>_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_528);
    }
    if (pFVar21 == pFVar22) break;
    FRHICommandList::SetViewport
              ((FRHICommandList *)param_1,(float)*(int *)pFVar21,(float)*(int *)(pFVar21 + 4),0.0,
               (float)*(int *)(pFVar21 + 8),(float)*(int *)(pFVar21 + 0xc),fVar5);
    SetScreenPassPipelineState((FRHICommandList *)param_1,&local_418);
    pFVar19 = TShaderRefBase<FExrSwizzlePS,FShaderMapPointerTable>::GetRHIShaderBase
                        (&local_510,SF_Pixel,true);
    SetShaderParameters<FRHICommandListImmediate,FExrSwizzlePS,FRHIPixelShader>
              (param_1,&local_510,(FRHIPixelShader *)pFVar19,&local_388);
    TVar3 = *(TIntPoint<int>_u_0_s_0 *)uVar7;
    UE::Renderer::PostProcess::DrawPostProcessPass
              ((FRHICommandList *)param_1,&local_418.VertexShader,0.0,0.0,(float)TVar3.X,
               (float)TVar3.Y,(float)*(int *)pFVar21,(float)*(int *)(pFVar21 + 4),
               (float)(*(int *)(pFVar21 + 8) - *(int *)pFVar21),
               (float)(*(int *)(pFVar21 + 0xc) - *(int *)(pFVar21 + 4)),(TIntPoint<int>)TVar3,
               (TIntPoint<int>)TVar3,-1,false,EDRF_UseTriangleOptimization);
    pFVar21 = pFVar21 + 0x10;
  }
  FRHICommandList::EndRenderPass((FRHICommandList *)param_1);
  if (local_268.ShadingRateTexture.Reference != (FRHITexture *)0x0) {
    FRHIResource::Release((FRHIResource *)local_268.ShadingRateTexture.Reference);
  }
  if (local_428 != '\0') {
    FRHIBreadcrumbScope::~FRHIBreadcrumbScope(&local_438);
  }
  if ((FRHIResource *)*(longlong *)local_4c8._24_8_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)*(longlong *)local_4c8._24_8_);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (((FSharedReferencer<1> *)(uVar6 + 8))->ReferenceController);
  return;
}

// `vector_deleting_destructor'`adjustor{24}' @ 14ea3f7c4

/* [thunk]:public: virtual void * __ptr64 __cdecl FImgMediaMipMapInfo::`vector deleting
   destructor'`adjustor{24}' (unsigned int) __ptr64 */

void * __thiscall
FImgMediaMipMapInfo::_vector_deleting_destructor__adjustor_24__
          (FImgMediaMipMapInfo *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((FImgMediaMipMapInfo *)&this[-1].bIsCacheValid,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 14ea3f7d4

/* [thunk]:public: virtual void * __ptr64 __cdecl FImgMediaPlayer::`vector deleting
   destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
FImgMediaPlayer::_vector_deleting_destructor__adjustor_8__(FImgMediaPlayer *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FImgMediaPlayer *)&this[-1].MediaTextureWeakPtr.WeakPtr.ObjectSerialNumber,
                      param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{16}' @ 14ea3f7e4

/* [thunk]:public: virtual void * __ptr64 __cdecl FImgMediaPlayer::`vector deleting
   destructor'`adjustor{16}' (unsigned int) __ptr64 */

void * __thiscall
FImgMediaPlayer::_vector_deleting_destructor__adjustor_16__(FImgMediaPlayer *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((FImgMediaPlayer *)&this[-1].RequestFrameHasRun,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{24}' @ 14ea3f7f4

/* [thunk]:public: virtual void * __ptr64 __cdecl FImgMediaPlayer::`vector deleting
   destructor'`adjustor{24}' (unsigned int) __ptr64 */

void * __thiscall
FImgMediaPlayer::_vector_deleting_destructor__adjustor_24__(FImgMediaPlayer *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FImgMediaPlayer *)&this[-1].GlobalCache.SharedReferenceCount,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{32}' @ 14ea3f804

/* [thunk]:public: virtual void * __ptr64 __cdecl FImgMediaPlayer::`vector deleting
   destructor'`adjustor{32}' (unsigned int) __ptr64 */

void * __thiscall
FImgMediaPlayer::_vector_deleting_destructor__adjustor_32__(FImgMediaPlayer *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((FImgMediaPlayer *)&this[-1].GlobalCache,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14ea3f814

/* [thunk]:public: virtual void * __ptr64 __cdecl FImgMediaPlayer::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
FImgMediaPlayer::_vector_deleting_destructor__adjustor_40__(FImgMediaPlayer *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((FImgMediaPlayer *)&this[-1].SelectedVideoTrack,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 14ea3f824

/* [thunk]:public: virtual void * __ptr64 __cdecl FImgMediaScheduler::`vector deleting
   destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
FImgMediaScheduler::_vector_deleting_destructor__adjustor_8__(FImgMediaScheduler *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((FImgMediaScheduler *)&this[-1].LoaderRoundRobin,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 14ea3f834

/* [thunk]:public: virtual void * __ptr64 __cdecl FImgMediaSchedulerThread::`vector deleting
   destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
FImgMediaSchedulerThread::_vector_deleting_destructor__adjustor_8__
          (FImgMediaSchedulerThread *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((FImgMediaSchedulerThread *)&this[-1].WorkEvent,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 14ea3f850

void * __thiscall
IBaseDelegateInstance<bool___cdecl(FRHICommandListImmediate_&,TRefCountPtr<FRHITexture>,TMap<int,TSharedPtr<FStructuredBufferPoolItem,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSharedPtr<FStructuredBufferPoolItem,1>,0>_>_&,FSampleConverterParameters),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<bool___cdecl(FRHICommandListImmediate_&,TRefCountPtr<FRHITexture>,TMap<int,TSharedPtr<FStructuredBufferPoolItem,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSharedPtr<FStructuredBufferPoolItem,1>,0>_>_&,FSampleConverterParameters),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ea3f880

void * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(FRHICommandListImmediate_&,TRefCountPtr<FRHITexture>,TMap<int,TSharedPtr<FStructuredBufferPoolItem,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSharedPtr<FStructuredBufferPoolItem,1>,0>_>_&,FSampleConverterParameters),FDefaultDelegateUserPolicy,`FExrImgMediaReaderGpu::CreateSampleConverterCallback'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ea3f8b0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FImgMediaMipMapInfo,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FImgMediaMipMapInfo,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ea3f8e0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FImgMediaSceneViewExtension,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FImgMediaSceneViewExtension,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ea3f910

void * __thiscall
TCommonDelegateInstanceState<bool___cdecl(FRHICommandListImmediate_&,TRefCountPtr<FRHITexture>,TMap<int,TSharedPtr<FStructuredBufferPoolItem,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSharedPtr<FStructuredBufferPoolItem,1>,0>_>_&,FSampleConverterParameters),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<bool___cdecl(FRHICommandListImmediate_&,TRefCountPtr<FRHITexture>,TMap<int,TSharedPtr<FStructuredBufferPoolItem,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSharedPtr<FStructuredBufferPoolItem,1>,0>_>_&,FSampleConverterParameters),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ea3f940

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FExrImgMediaReaderGpu::~FExrImgMediaReaderGpu'::__l2::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FExrImgMediaReaderGpu::~FExrImgMediaReaderGpu'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  *(undefined4 *)((longlong)this + 0x50) = 0;
  if (*(void **)((longlong)this + 0x48) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x48));
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,FStructuredBufferPoolItem_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,FStructuredBufferPoolItem_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,FStructuredBufferPoolItem_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)this + 8));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ea3f9b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FExrImgMediaReaderGpu::ReadMip'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FExrImgMediaReaderGpu::ReadMip'::`2'::<lambda_1>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ea3f9f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`FImgMediaPlayer::Open'::__l2::<lambda_5>_>'::__l4::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Async<`FImgMediaPlayer::Open'::`2'::<lambda_5>_>'::`4'::<lambda_1>,1,1>
        ::_vftable_;
  `Async<`FImgMediaPlayer::Open'::__l2::<lambda_5>_>'::__l4::<lambda_1>::~<lambda_1>
            ((void *)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ea3fa40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FExrImgMediaReaderGpu::AllocateGpuBufferFromPool'::__l2::<lambda_1>::operator()'::__l7::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<``FExrImgMediaReaderGpu::AllocateGpuBufferFromPool'::`2'::<lambda_1>::operator()'::`7'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ea3fa80

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FExrImgMediaReaderGpu::AllocateGpuBufferFromPool'::__l9::<lambda_2>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FExrImgMediaReaderGpu::AllocateGpuBufferFromPool'::`9'::<lambda_2>,1,1>
        ::_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ea3fad0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FExrImgMediaReaderGpu::ReadMip'::__l26::<lambda_2>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FExrImgMediaReaderGpu::ReadMip'::`26'::<lambda_2>,1,1>::_vftable_;
  if (*(void **)((longlong)this + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x28));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x20));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ea3fb30

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FImgMediaPlayer::Open'::__l2::<lambda_5>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FImgMediaPlayer::Open'::`2'::<lambda_5>,1,1>::_vftable_;
  if (*(void **)((longlong)this + 0x30) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x30));
  }
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  plVar3 = *(longlong **)((longlong)this + 0x18);
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
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ea3fbb0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FImgMediaFrame,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<FImgMediaFrame,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x170);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ea3fbf0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FNativeMediaSourceColorSettings,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FNativeMediaSourceColorSettings,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1c0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ea3fc30

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FDdsImgMediaReader,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<FDdsImgMediaReader,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ea3fc70

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FExrImgMediaReaderGpu,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FExrImgMediaReaderGpu,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x188);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ea3fcb0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FExrMediaTextureSampleConverter,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FExrMediaTextureSampleConverter,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x208);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ea3fcf0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FImgMediaLoader,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<FImgMediaLoader,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x208);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ea3fd30

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FImgMediaMipMapInfo,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FImgMediaMipMapInfo,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x140);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ea3fd70

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FImgMediaTextureSample,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FImgMediaTextureSample,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1c0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ea3fdb0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FImgMediaFrame,SharedPointerInternals::DefaultDeleter<FImgMediaFrame>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FImgMediaFrame,SharedPointerInternals::DefaultDeleter<FImgMediaFrame>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ea3fdf0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FStructuredBufferPoolItem,`FExrImgMediaReaderGpu::AllocateGpuBufferFromPool'::__l2::<lambda_1>,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this = TReferenceControllerBase<1>::vftable;
  plVar3 = *(longlong **)((longlong)this + 0x18);
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
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ea3fe60

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FExrImgMediaReader,SharedPointerInternals::DefaultDeleter<FExrImgMediaReader>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FExrImgMediaReader,SharedPointerInternals::DefaultDeleter<FExrImgMediaReader>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ea3fea0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FGenericImgMediaReader,SharedPointerInternals::DefaultDeleter<FGenericImgMediaReader>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FGenericImgMediaReader,SharedPointerInternals::DefaultDeleter<FGenericImgMediaReader>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ea3fee0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<void,`FExrImgMediaReader::ReadFrame'::__l8::<lambda_1>,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this = TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ea3ff20

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<void,`FDdsImgMediaReader::ReadFrame'::__l37::<lambda_1>,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this = TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ea3ff60

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<void,`FGenericImgMediaReader::ReadFrame'::__l61::<lambda_2>,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this = TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ea3ffa0

void * __thiscall
FDdsImgMediaReader::_scalar_deleting_destructor_(FDdsImgMediaReader *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  this->_padding_ = (longlong)&___7FDdsImgMediaReader__6B_;
  pTVar3 = (this->LoaderPtr).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  this->_padding_ = (longlong)&___7IImgMediaReader__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ea40010

void * __thiscall
FExrImgMediaReader::_scalar_deleting_destructor_(FExrImgMediaReader *this,uint param_1)

{
  ~FExrImgMediaReader(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ea40050

void * __thiscall
FExrImgMediaReaderGpu::_scalar_deleting_destructor_(FExrImgMediaReaderGpu *this,uint param_1)

{
  ~FExrImgMediaReaderGpu(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x178);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ea40090

void * __thiscall
FExrMediaTextureSampleConverter::_scalar_deleting_destructor_
          (FExrMediaTextureSampleConverter *this,uint param_1)

{
  ~FExrMediaTextureSampleConverter(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1f8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ea400d0

void * __thiscall
FGenericImgMediaReader::_scalar_deleting_destructor_(FGenericImgMediaReader *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  this->_padding_ = (longlong)&___7FGenericImgMediaReader__6B_;
  pTVar3 = (this->LoaderPtr).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  this->_padding_ = (longlong)&___7IImgMediaReader__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ea40140

void * __thiscall FImgMediaLoader::_scalar_deleting_destructor_(FImgMediaLoader *this,uint param_1)

{
  ~FImgMediaLoader(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1f8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ea40180

void * __thiscall
FImgMediaLoaderWork::_scalar_deleting_destructor_(FImgMediaLoaderWork *this,uint param_1)

{
  atomic<int> *paVar1;
  int *piVar2;
  atomic<int> aVar3;
  int iVar4;
  TReferenceControllerBase<1> *pTVar5;
  void *pvVar6;
  undefined8 *puVar7;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Reader).SharedReferenceCount.ReferenceController);
  pTVar5 = (this->OwnerPtr).WeakReferenceCount.ReferenceController;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar5->WeakReferenceCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ExistingFrame).SharedReferenceCount.ReferenceController);
  *(undefined4 *)&(this->MipTiles).field_0x48 = 0;
  pvVar6 = *(void **)&(this->MipTiles).field_0x40;
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  TSparseArray<TSparseSetElement<TTuple<int,FImgMediaTileSelection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,FImgMediaTileSelection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,FImgMediaTileSelection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->MipTiles);
  this->_padding_ = (longlong)&___7IQueuedWork__6B_;
  puVar7 = (undefined8 *)this->_padding_;
  if (puVar7 != (undefined8 *)0x0) {
    piVar2 = (int *)(puVar7 + 1);
    LOCK();
    iVar4 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((iVar4 == 1) && (piVar2 != (int *)0x0)) {
      (**(code **)*puVar7)(puVar7,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x98);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ea40260

void * __thiscall
FImgMediaMipMapInfo::_scalar_deleting_destructor_(FImgMediaMipMapInfo *this,uint param_1)

{
  ~FImgMediaMipMapInfo(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x130);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ea402a0

void * __thiscall
FImgMediaMipMapObjectInfo::_scalar_deleting_destructor_
          (FImgMediaMipMapObjectInfo *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->Tracker).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ea40300

void * __thiscall FImgMediaPlayer::_scalar_deleting_destructor_(FImgMediaPlayer *this,uint param_1)

{
  ~FImgMediaPlayer(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xd0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ea40340

void * __thiscall
FImgMediaSceneViewExtension::_scalar_deleting_destructor_
          (FImgMediaSceneViewExtension *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FImgMediaSceneViewExtension__6B_;
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::Remove
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &FCoreDelegates::OnBeginFrame,(FDelegateHandle)(this->OnBeginFrameDelegate).ID);
  DestructItems<FImgMediaViewInfo,int>
            ((FImgMediaViewInfo *)(this->DisplayResolutionCachedViewInfos).AllocatorInstance.Data,
             (this->DisplayResolutionCachedViewInfos).ArrayNum);
  pFVar1 = (this->DisplayResolutionCachedViewInfos).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FImgMediaViewInfo,int>
            ((FImgMediaViewInfo *)(this->CachedViewInfos).AllocatorInstance.Data,
             (this->CachedViewInfos).ArrayNum);
  pFVar1 = (this->CachedViewInfos).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FSceneViewExtensionBase::~FSceneViewExtensionBase((FSceneViewExtensionBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ea403d0

void * __thiscall
FImgMediaScheduler::_scalar_deleting_destructor_(FImgMediaScheduler *this,uint param_1)

{
  ~FImgMediaScheduler(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ea40410

void * __thiscall
FImgMediaSchedulerThread::_scalar_deleting_destructor_(FImgMediaSchedulerThread *this,uint param_1)

{
  FRunnableThread *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__FRunnable__;
  this->_padding_ = (longlong)&_vftable__for__FSingleThreadRunnable__;
  LOCK();
  this->Stopping = (TAtomic<bool>)0x1;
  UNLOCK();
  (**(code **)(this->WorkEvent->_padding_ + 0x10))();
  (**(code **)(this->Thread->_padding_ + 0x20))();
  (**(code **)(this->Thread->_padding_ + 0x18))(this->Thread,1);
  pFVar1 = this->Thread;
  if (pFVar1 != (FRunnableThread *)0x0) {
    (**(code **)(pFVar1->_padding_ + 0x30))(pFVar1,1);
  }
  this->Thread = (FRunnableThread *)0x0;
  FGenericPlatformProcess::ReturnSynchEventToPool(this->WorkEvent);
  this->WorkEvent = (FEvent *)0x0;
  this->_padding_ = (longlong)&___7FSingleThreadRunnable__6B_;
  this->_padding_ = (longlong)&___7FRunnable__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ea404d0

void * __thiscall
FImgMediaTextureSample::_scalar_deleting_destructor_(FImgMediaTextureSample *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SourceColorSettings).SharedReferenceCount.ReferenceController);
  FImgMediaFrame::~FImgMediaFrame(&this->Frame);
  this->_padding_ = (longlong)&___7IMediaTextureSample__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1b0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ea40530

void * __thiscall
FNativeMediaSourceColorSettings::_scalar_deleting_destructor_
          (FNativeMediaSourceColorSettings *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->ColorSpaceCriticalSection);
  this->_padding_ = (longlong)&___7FDataContainer_IMediaOptions__6B_;
  plVar3 = (longlong *)this->_padding_;
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
    ::operator_delete(this,0x1b0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ea405a0

void * __thiscall
_anon_FB6FC205::FPlaneObjectInfo::_scalar_deleting_destructor_(FPlaneObjectInfo *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  
  pFVar3 = (this->CornerMipLevelsCached).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  plVar4 = (longlong *)this->_padding_;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ea40610

void * __thiscall
_anon_FB6FC205::FSphereObjectInfo::_scalar_deleting_destructor_
          (FSphereObjectInfo *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)this->_padding_;
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
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ea40670

void * __thiscall IImgMediaReader::_scalar_deleting_destructor_(IImgMediaReader *this,uint param_1)

{
  *this = (IImgMediaReader)&___7IImgMediaReader__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ea406b0

void * __thiscall
IImgMediaScheduler::_scalar_deleting_destructor_(IImgMediaScheduler *this,uint param_1)

{
  *this = (IImgMediaScheduler)&___7IImgMediaScheduler__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ea406f0

void * __thiscall UImgMediaSource::_scalar_deleting_destructor_(UImgMediaSource *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IMediaOptions__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->NativeSourceColorSettings).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MipMapInfo).SharedReferenceCount.ReferenceController);
  pFVar1 = (this->SequencePath).Path.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ProxyOverride).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UBaseMediaSource::~UBaseMediaSource((UBaseMediaSource *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x148);
  }
  return this;
}

// CalculateMipLevelAniso @ 14ea42f50

bool __cdecl
`anonymous_namespace'::CalculateMipLevelAniso
          (FImgMediaViewInfo *param_1,TVector<double> *param_2,TVector<double> *param_3,
          TVector<double> *param_4,float *param_5)

{
  double dVar1;
  double dVar2;
  bool bVar3;
  undefined1 auVar4 [12];
  bool bVar5;
  undefined1 auVar6 [12];
  undefined1 auVar7 [12];
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  int iVar14;
  IConsoleManager *pIVar15;
  longlong *plVar16;
  int iVar17;
  bool bVar18;
  float fVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  double dVar29;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  double dVar30;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  double dVar31;
  double dVar32;
  double dVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  float fVar36;
  float fVar37;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < `CalculateMipLevelAniso'::`2'::_TSS0) &&
     (_Init_thread_header(&`CalculateMipLevelAniso'::`2'::_TSS0),
     `CalculateMipLevelAniso'::`2'::_TSS0 == -1)) {
    pIVar15 = IConsoleManager::Get();
    plVar16 = (longlong *)(**(code **)((longlong)*pIVar15 + 0xc0))(pIVar15,L"r.MaxAnisotropy",1);
    iVar14 = (**(code **)(*plVar16 + 200))(plVar16);
    iVar17 = 0x10;
    if (iVar14 < 0x10) {
      iVar17 = iVar14;
    }
    iVar14 = 1;
    if (1 < iVar17) {
      iVar14 = iVar17;
    }
    fVar19 = logf((float)iVar14);
    `CalculateMipLevelAniso'::`2'::MaxAnisoLog2 = fVar19 * __real_3fb8aa3b;
    _Init_thread_footer(&`CalculateMipLevelAniso'::`2'::_TSS0);
  }
  auVar21 = *(undefined1 (*) [16])&param_2->field0_0x0;
  dVar1 = auVar21._0_8_;
  dVar2 = auVar21._8_8_;
  dVar32 = (param_1->ViewProjectionMatrix).M[0][3];
  dVar30 = (param_1->ViewProjectionMatrix).M[1][3];
  dVar8 = (param_1->ViewProjectionMatrix).M[0][0];
  dVar9 = (param_1->ViewProjectionMatrix).M[0][1];
  dVar10 = (param_1->ViewProjectionMatrix).M[1][0];
  dVar11 = (param_1->ViewProjectionMatrix).M[1][1];
  dVar33 = (param_2->field0_0x0)._s_0.Z;
  dVar12 = (param_1->ViewProjectionMatrix).M[2][0];
  dVar13 = (param_1->ViewProjectionMatrix).M[2][1];
  auVar20._8_4_ = auVar21._8_4_;
  auVar20._0_8_ = dVar2;
  auVar20._12_4_ = auVar21._12_4_;
  uVar34 = SUB84(__real_3ff0000000000000,0);
  auVar21._8_4_ = uVar34;
  auVar21._0_8_ = __real_3ff0000000000000;
  uVar35 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
  auVar21._12_4_ = uVar35;
  dVar31 = dVar1 * dVar32 + dVar2 * dVar30 + dVar33 * (param_1->ViewProjectionMatrix).M[2][3] +
           __real_3ff0000000000000 * (param_1->ViewProjectionMatrix).M[3][3];
  bVar3 = 0.0 < dVar31;
  if (bVar3) {
    dVar31 = __real_3fe0000000000000 / dVar31;
    local_d8 = (double)((float)(dVar31 * (dVar1 * dVar8 + dVar2 * dVar10 + dVar33 * dVar12 +
                                         __real_3ff0000000000000 *
                                         (param_1->ViewProjectionMatrix).M[3][0]) +
                               __real_3fe0000000000000) *
                       (float)(*(int *)((longlong)&(param_1->ViewportRect).field0_0x0 + 8) -
                              *(int *)&(param_1->ViewportRect).field0_0x0));
    local_d0 = (double)((float)(__real_3fe0000000000000 -
                               (dVar1 * dVar9 + auVar20._8_8_ * dVar11 + dVar33 * dVar13 +
                               auVar21._8_8_ * (param_1->ViewProjectionMatrix).M[3][1]) * dVar31) *
                       (float)(*(int *)((longlong)&(param_1->ViewportRect).field0_0x0 + 0xc) -
                              *(int *)((longlong)&(param_1->ViewportRect).field0_0x0 + 4)));
  }
  auVar21 = *(undefined1 (*) [16])&param_3->field0_0x0;
  dVar1 = auVar21._0_8_;
  dVar2 = auVar21._8_8_;
  dVar33 = (param_3->field0_0x0)._s_0.Z;
  auVar22._8_4_ = auVar21._0_4_;
  auVar22._0_8_ = dVar1;
  auVar22._12_4_ = auVar21._4_4_;
  auVar23._8_4_ = uVar34;
  auVar23._0_8_ = __real_3ff0000000000000;
  auVar23._12_4_ = uVar35;
  dVar29 = auVar23._8_8_ * (param_1->ViewProjectionMatrix).M[3][1];
  auVar4._4_8_ = dVar29;
  auVar4._0_4_ = *(undefined4 *)((longlong)(param_1->ViewProjectionMatrix).M[2] + 0x14);
  auVar24._0_8_ = auVar4._0_8_ << 0x20;
  auVar24._8_4_ = *(undefined4 *)((param_1->ViewProjectionMatrix).M[2] + 3);
  auVar24._12_4_ = *(undefined4 *)((longlong)(param_1->ViewProjectionMatrix).M[2] + 0x1c);
  dVar31 = dVar2 * dVar30 + dVar1 * dVar32 + dVar33 * auVar24._8_8_ +
           __real_3ff0000000000000 * (param_1->ViewProjectionMatrix).M[3][3];
  bVar5 = 0.0 < dVar31;
  if (bVar5) {
    dVar31 = __real_3fe0000000000000 / dVar31;
    local_c8 = (double)((float)((dVar2 * dVar10 + dVar1 * dVar8 + dVar33 * dVar12 +
                                __real_3ff0000000000000 * (param_1->ViewProjectionMatrix).M[3][0]) *
                                dVar31 + __real_3fe0000000000000) *
                       (float)(*(int *)((longlong)&(param_1->ViewportRect).field0_0x0 + 8) -
                              *(int *)&(param_1->ViewportRect).field0_0x0));
    local_c0 = (double)((float)(*(int *)((longlong)&(param_1->ViewportRect).field0_0x0 + 0xc) -
                               *(int *)((longlong)&(param_1->ViewportRect).field0_0x0 + 4)) *
                       (float)(__real_3fe0000000000000 -
                              (dVar2 * dVar11 + auVar22._8_8_ * dVar9 + dVar33 * dVar13 + dVar29) *
                              dVar31));
  }
  auVar21 = *(undefined1 (*) [16])&param_4->field0_0x0;
  dVar1 = auVar21._0_8_;
  dVar2 = auVar21._8_8_;
  bVar18 = bVar5 && bVar3;
  dVar33 = (param_4->field0_0x0)._s_0.Z;
  auVar25._8_4_ = auVar21._0_4_;
  auVar25._0_8_ = dVar1;
  auVar25._12_4_ = auVar21._4_4_;
  auVar26._8_4_ = uVar34;
  auVar26._0_8_ = __real_3ff0000000000000;
  auVar26._12_4_ = uVar35;
  dVar30 = auVar26._8_8_ * (param_1->ViewProjectionMatrix).M[3][1];
  auVar6._4_8_ = dVar30;
  auVar6._0_4_ = *(undefined4 *)((longlong)(param_1->ViewProjectionMatrix).M[1] + 0x14);
  auVar27._0_8_ = auVar6._0_8_ << 0x20;
  auVar27._8_4_ = *(undefined4 *)((param_1->ViewProjectionMatrix).M[1] + 3);
  auVar27._12_4_ = *(undefined4 *)((longlong)(param_1->ViewProjectionMatrix).M[1] + 0x1c);
  auVar7._4_8_ = auVar27._8_8_;
  auVar7._0_4_ = *(undefined4 *)((longlong)(param_1->ViewProjectionMatrix).M[2] + 0x14);
  auVar28._0_8_ = auVar7._0_8_ << 0x20;
  auVar28._8_4_ = *(undefined4 *)((param_1->ViewProjectionMatrix).M[2] + 3);
  auVar28._12_4_ = *(undefined4 *)((longlong)(param_1->ViewProjectionMatrix).M[2] + 0x1c);
  dVar31 = dVar2 * auVar27._8_8_ + dVar1 * dVar32 + dVar33 * auVar28._8_8_ +
           __real_3ff0000000000000 * (param_1->ViewProjectionMatrix).M[3][3];
  if (dVar31 <= 0.0) {
    bVar18 = false;
  }
  else {
    dVar31 = __real_3fe0000000000000 / dVar31;
    if (bVar5 && bVar3) {
      dVar32 = (double)((float)(__real_3fe0000000000000 -
                               (dVar2 * dVar11 + auVar25._8_8_ * dVar9 +
                                dVar33 * (param_1->ViewProjectionMatrix).M[2][1] + dVar30) * dVar31)
                       * (float)(*(int *)((longlong)&(param_1->ViewportRect).field0_0x0 + 0xc) -
                                *(int *)((longlong)&(param_1->ViewportRect).field0_0x0 + 4))) -
               local_d0;
      dVar33 = (double)((float)((dVar2 * dVar10 + dVar1 * dVar8 +
                                 dVar33 * (param_1->ViewProjectionMatrix).M[2][0] +
                                __real_3ff0000000000000 * (param_1->ViewProjectionMatrix).M[3][0]) *
                                dVar31 + __real_3fe0000000000000) *
                       (float)(*(int *)((longlong)&(param_1->ViewportRect).field0_0x0 + 8) -
                              *(int *)&(param_1->ViewportRect).field0_0x0)) - local_d8;
      fVar36 = (float)(__real_3ff0000000000000 / (dVar32 * dVar32 + dVar33 * dVar33));
      fVar37 = (float)(__real_3ff0000000000000 /
                      ((local_c0 - local_d0) * (local_c0 - local_d0) +
                      (local_c8 - local_d8) * (local_c8 - local_d8)));
      fVar19 = fVar36;
      if (fVar36 <= fVar37) {
        fVar19 = fVar37;
      }
      fVar19 = logf(fVar19);
      if (fVar37 <= fVar36) {
        fVar36 = fVar37;
      }
      fVar19 = fVar19 * __real_3f38aa3b;
      fVar36 = logf(fVar36);
      fVar36 = fVar19 - fVar36 * __real_3f38aa3b;
      if (`CalculateMipLevelAniso'::`2'::MaxAnisoLog2 <= fVar36) {
        fVar36 = `CalculateMipLevelAniso'::`2'::MaxAnisoLog2;
      }
      *param_5 = fVar19 - fVar36;
    }
  }
  return bVar18;
}

// CheckAndUpdateImgDimensions @ 14ea45290

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
ImgMediaLoader::CheckAndUpdateImgDimensions(TIntPoint<int> *param_1,TIntPoint<int> *param_2)

{
  if (((param_1->field0_0x0)._s_0.X != (param_2->field0_0x0)._s_0.X) ||
     ((param_1->field0_0x0)._s_0.Y != (param_2->field0_0x0)._s_0.Y)) {
    if (2 < (byte)LogImgMedia._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogImgMedia);
    }
    param_1->field0_0x0 = param_2->field0_0x0;
  }
  return;
}

// DDSPayloadIsSRGB @ 14ea46a60

bool __cdecl
ImgMedia::DDS::DDSPayloadIsSRGB
          (TUniquePtr<UE::DDS::FDDSFile,TDefaultDelete<UE::DDS::FDDSFile>_> *param_1)

{
  bool bVar1;
  
  if ((param_1->Ptr->CreateFlags & 4) == 0) {
    bVar1 = UE::DDS::DXGIFormatHasLinearAndSRGBForm(param_1->Ptr->DXGIFormat);
    if (bVar1) {
      bVar1 = UE::DDS::DXGIFormatIsSRGB(param_1->Ptr->DXGIFormat);
      return bVar1;
    }
  }
  return true;
}

// EmptyLinkFunctionForGeneratedCodeImgMediaSource @ 14ea480b0

void __cdecl EmptyLinkFunctionForGeneratedCodeImgMediaSource(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeImgMediaSourceColorSettings @ 14ea480c0

void __cdecl EmptyLinkFunctionForGeneratedCodeImgMediaSourceColorSettings(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeImgMedia_init @ 14ea480d0

void __cdecl EmptyLinkFunctionForGeneratedCodeImgMedia_init(void)

{
  return;
}

// GetFrameInfo @ 14ea4bb10

FImgMediaFrameInfo * __cdecl
ImgMedia::DDS::GetFrameInfo
          (FImgMediaFrameInfo *__return_storage_ptr__,
          TUniquePtr<UE::DDS::FDDSFile,TDefaultDelete<UE::DDS::FDDSFile>_> *param_1)

{
  FDDSFile *pFVar1;
  UObject *pUVar2;
  undefined4 uVar3;
  bool bVar4;
  int iVar5;
  wchar_t *pwVar6;
  UClass *this;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  int iVar10;
  ulong64 uVar11;
  undefined1 local_res8 [8];
  
  uVar11 = 0;
  (__return_storage_ptr__->FrameRate).Numerator = 60000;
  (__return_storage_ptr__->CompressionName).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->CompressionName).Data.ArrayNum = 0;
  (__return_storage_ptr__->CompressionName).Data.ArrayMax = 0;
  (__return_storage_ptr__->FormatName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->FormatName).Data.ArrayNum = 0;
  (__return_storage_ptr__->FormatName).Data.ArrayMax = 0;
  (__return_storage_ptr__->FrameRate).Denominator = 1;
  __return_storage_ptr__->Srgb = false;
  __return_storage_ptr__->UncompressedSize = 0;
  __return_storage_ptr__->NumChannels = 0;
  __return_storage_ptr__->bHasTiles = false;
  __return_storage_ptr__->TileBorder = 0;
  __return_storage_ptr__->NumMipLevels = 0;
  pwVar6 = UE::DDS::DXGIFormatGetName(param_1->Ptr->DXGIFormat);
  ::FString::operator=(&__return_storage_ptr__->CompressionName,pwVar6);
  (__return_storage_ptr__->Dim).field0_0x0._s_0.X = param_1->Ptr->Width;
  (__return_storage_ptr__->Dim).field0_0x0._s_0.Y = param_1->Ptr->Height;
  pFVar1 = param_1->Ptr;
  iVar5 = (pFVar1->Mips).ArrayNum;
  pFVar8 = (pFVar1->Mips).AllocatorInstance.Data;
  pFVar9 = pFVar8 + (longlong)iVar5 * 0x30;
  while( true ) {
    if ((pFVar1->Mips).ArrayNum != iVar5) {
      `TCheckedPointerIterator<UE::DDS::FDDSMip,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar8 == pFVar9) break;
    uVar7 = *(uint *)(pFVar8 + 4);
    if (*(uint *)pFVar8 < *(uint *)(pFVar8 + 4)) {
      uVar7 = *(uint *)pFVar8;
    }
    if (uVar7 < 4) break;
    uVar11 = uVar11 + *(longlong *)(pFVar8 + 0x20);
    pFVar8 = pFVar8 + 0x30;
  }
  __return_storage_ptr__->UncompressedSize = uVar11;
  iVar10 = 0;
  pFVar1 = param_1->Ptr;
  iVar5 = (pFVar1->Mips).ArrayNum;
  pFVar8 = (pFVar1->Mips).AllocatorInstance.Data;
  pFVar9 = pFVar8 + (longlong)iVar5 * 0x30;
  while( true ) {
    if ((pFVar1->Mips).ArrayNum != iVar5) {
      `TCheckedPointerIterator<UE::DDS::FDDSMip,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar8 == pFVar9) break;
    uVar7 = *(uint *)(pFVar8 + 4);
    if (*(uint *)pFVar8 < *(uint *)(pFVar8 + 4)) {
      uVar7 = *(uint *)pFVar8;
    }
    if (uVar7 < 4) break;
    iVar10 = iVar10 + 1;
    pFVar8 = pFVar8 + 0x30;
  }
  iVar5 = 0xf;
  if (iVar10 < 0xf) {
    iVar5 = iVar10;
  }
  __return_storage_ptr__->NumMipLevels = iVar5;
  ::FString::operator=(&__return_storage_ptr__->FormatName,L"DDS");
  this = Z_Construct_UClass_UImgMediaSettings_NoRegister();
  if ((this->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this);
  }
  pUVar2 = (this->ClassDefaultObject).field0_0x0.DebugPtr;
  uVar3 = *(undefined4 *)&pUVar2[1].field_0x4;
  (__return_storage_ptr__->FrameRate).Numerator = *(undefined4 *)&pUVar2[1].field_0x0;
  (__return_storage_ptr__->FrameRate).Denominator = uVar3;
  if ((param_1->Ptr->CreateFlags & 4) == 0) {
    bVar4 = UE::DDS::DXGIFormatHasLinearAndSRGBForm(param_1->Ptr->DXGIFormat);
    if (bVar4) {
      bVar4 = UE::DDS::DXGIFormatIsSRGB(param_1->Ptr->DXGIFormat);
      goto LAB_14ea4bc86;
    }
  }
  bVar4 = true;
LAB_14ea4bc86:
  __return_storage_ptr__->Srgb = bVar4;
  (__return_storage_ptr__->TileDimensions).field0_0x0 = (__return_storage_ptr__->Dim).field0_0x0;
  (__return_storage_ptr__->NumTiles).field0_0x0 = (TIntPoint<int>_u_0)&DAT_100000001;
  __return_storage_ptr__->NumChannels = 4;
  __return_storage_ptr__->bHasTiles = false;
  __return_storage_ptr__->TileBorder = 0;
  return __return_storage_ptr__;
}

// GetMediaTextureSampleFormat @ 14ea4d540

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
ImgMedia::DDS::GetMediaTextureSampleFormat
          (EDXGIFormat *param_1,EMediaTextureSampleFormat *param_2,bool *param_3)

{
  switch(*param_1) {
  case R16G16B16A16_FLOAT:
    *param_2 = FloatRGBA;
    *param_3 = false;
    return true;
  case R8G8B8A8_TYPELESS:
  case R8G8B8A8_UNORM:
  case R8G8B8A8_UNORM_SRGB:
    *param_2 = CharRGBA;
    *param_3 = false;
    return true;
  case R8G8B8A8_SNORM:
  case B8G8R8A8_UNORM:
  case B8G8R8A8_TYPELESS:
  case B8G8R8A8_UNORM_SRGB:
    *param_2 = CharBGRA;
    *param_3 = false;
    return true;
  case BC1_TYPELESS:
  case BC1_UNORM:
  case BC1_UNORM_SRGB:
    *param_2 = DXT1;
    *param_3 = true;
    return true;
  case BC3_TYPELESS:
  case BC3_UNORM:
  case BC3_UNORM_SRGB:
    *param_2 = DXT5;
    *param_3 = true;
    return true;
  case BC4_TYPELESS:
  case BC4_UNORM:
  case BC4_SNORM:
    *param_2 = BC4;
    *param_3 = true;
    return true;
  }
  if (1 < (byte)LogImgMedia._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogImgMedia);
  }
  *param_2 = Undefined;
  *param_3 = false;
  return false;
}

// GetMipCount @ 14ea4d7b0

int __cdecl
ImgMedia::DDS::GetMipCount
          (TUniquePtr<UE::DDS::FDDSFile,TDefaultDelete<UE::DDS::FDDSFile>_> *param_1)

{
  FDDSFile *pFVar1;
  int iVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  int iVar6;
  undefined1 local_res8 [8];
  
  pFVar1 = param_1->Ptr;
  iVar6 = 0;
  iVar2 = (pFVar1->Mips).ArrayNum;
  pFVar4 = (pFVar1->Mips).AllocatorInstance.Data;
  pFVar5 = pFVar4 + (longlong)iVar2 * 0x30;
  while( true ) {
    if ((pFVar1->Mips).ArrayNum != iVar2) {
      `TCheckedPointerIterator<UE::DDS::FDDSMip,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar4 == pFVar5) break;
    uVar3 = *(uint *)(pFVar4 + 4);
    if (*(uint *)pFVar4 < *(uint *)(pFVar4 + 4)) {
      uVar3 = *(uint *)pFVar4;
    }
    if (uVar3 < 4) break;
    iVar6 = iVar6 + 1;
    pFVar4 = pFVar4 + 0x30;
  }
  iVar2 = 0xf;
  if (iVar6 < 0xf) {
    iVar2 = iVar6;
  }
  return iVar2;
}

// GetTotalMipDataSize @ 14ea4edc0

ulong64 __cdecl
ImgMedia::DDS::GetTotalMipDataSize
          (TUniquePtr<UE::DDS::FDDSFile,TDefaultDelete<UE::DDS::FDDSFile>_> *param_1)

{
  int iVar1;
  FDDSFile *pFVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  ulong64 uVar6;
  undefined1 local_res8 [8];
  
  pFVar2 = param_1->Ptr;
  uVar6 = 0;
  iVar1 = (pFVar2->Mips).ArrayNum;
  pFVar4 = (pFVar2->Mips).AllocatorInstance.Data;
  pFVar5 = pFVar4 + (longlong)iVar1 * 0x30;
  while( true ) {
    if ((pFVar2->Mips).ArrayNum != iVar1) {
      `TCheckedPointerIterator<UE::DDS::FDDSMip,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar4 == pFVar5) {
      return uVar6;
    }
    uVar3 = *(uint *)(pFVar4 + 4);
    if (*(uint *)pFVar4 < *(uint *)(pFVar4 + 4)) {
      uVar3 = *(uint *)pFVar4;
    }
    if (uVar3 < 4) break;
    uVar6 = uVar6 + *(longlong *)(pFVar4 + 0x20);
    pFVar4 = pFVar4 + 0x30;
  }
  return uVar6;
}

// IsCachedFrameInRange @ 14ea519e0

bool __cdecl
ImgMediaLoader::IsCachedFrameInRange(int param_1,int param_2,int param_3,int param_4,float param_5)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  uint uVar6;
  int iVar7;
  int iVar5;
  
  if (0 < param_3) {
    if (((param_1 < 0) || (param_4 <= param_1)) &&
       (bVar2 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_102658943964151734>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\ImgMedia\\Source\\ImgMedia\\Private\\Loader\\ImgMediaLoader.cpp"
                           ,0x4a,"CurrentFrame >= 0 && CurrentFrame < TotalNumFrames"), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    if (((param_2 < 0) || (param_4 <= param_2)) &&
       (bVar2 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_102658943964151733>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\ImgMedia\\Source\\ImgMedia\\Private\\Loader\\ImgMediaLoader.cpp"
                           ,0x4b,"OriginFrame >= 0 && OriginFrame < TotalNumFrames"), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    iVar7 = 1;
    do {
      iVar5 = -iVar7;
      if (0.0 <= param_5) {
        iVar5 = iVar7;
      }
      uVar4 = iVar5 + param_2;
      if (param_4 == 0) {
        uVar6 = 0;
      }
      else if ((int)uVar4 < 0) {
        uVar6 = param_4 - -uVar4 % (uint)param_4;
        if (-uVar4 % (uint)param_4 == 0) {
          uVar6 = 0;
        }
      }
      else {
        uVar6 = uVar4 % (uint)param_4;
      }
      if (uVar6 == param_1) {
        return true;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 <= param_3);
  }
  return false;
}

// IsPrimitiveComponentHidden @ 14ea51d10

bool __cdecl
`anonymous_namespace'::IsPrimitiveComponentHidden
          (FPrimitiveComponentId param_1,FImgMediaViewInfo *param_2)

{
  longlong lVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  
  if (*(int *)&(param_2->PrimitiveComponentIds).Elements.field_0x8 !=
      *(int *)&(param_2->PrimitiveComponentIds).Elements.field_0x34) {
    FVar3 = (param_2->PrimitiveComponentIds).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(param_2->PrimitiveComponentIds).Hash;
    }
    iVar2 = *(int *)((longlong)FVar3 +
                    (ulonglong)
                    ((param_2->PrimitiveComponentIds).HashSize - 1U & param_1.PrimIDValue) * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&(param_2->PrimitiveComponentIds).Elements;
      do {
        if (*(uint *)(lVar1 + (longlong)iVar2 * 0xc) == param_1.PrimIDValue) goto LAB_14ea51d6f;
        iVar2 = *(int *)(lVar1 + 4 + (longlong)iVar2 * 0xc);
      } while (iVar2 != -1);
    }
  }
  iVar2 = -1;
LAB_14ea51d6f:
  if (param_2->bPrimitiveHiddenMode != false) {
    return iVar2 != -1;
  }
  return iVar2 == -1;
}

// Z_Construct_UClass_UImgMediaSource_NoRegister @ 14ea602e0

UClass * __cdecl Z_Construct_UClass_UImgMediaSource_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UImgMediaSource.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ImgMedia",L"ImgMediaSource",
               &Z_Registration_Info_UClass_UImgMediaSource.InnerSingleton,
               UImgMediaSource::StaticRegisterNativesUImgMediaSource,0x148,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UImgMediaSource>,
               InternalVTableHelperCtorCaller<UImgMediaSource>,local_res8,
               UBaseMediaSource::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UImgMediaSource.InnerSingleton;
}

// Z_Construct_UScriptStruct_FImgMediaSourceCustomizationSequenceProxy @ 14ea603a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FImgMediaSourceCustomizationSequenceProxy(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FImgMediaSourceCustomizationSequenceProxy.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FImgMediaSourceCustomizationSequenceProxy.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FImgMediaSourceCustomizationSequenceProxy_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FImgMediaSourceCustomizationSequenceProxy.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FImgMediaSourceCustomizationSequenceProxy.
           InnerSingleton;
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

// IMPLEMENT_MODULE_ImgMedia @ 14ea60c10

void __cdecl IMPLEMENT_MODULE_ImgMedia(void)

{
  return;
}

// GlobalCache'' @ 15046db40

void __cdecl `dynamic_atexit_destructor_for_'IImgMediaModule::GlobalCache__(void)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (IImgMediaModule::GlobalCache.SharedReferenceCount.ReferenceController);
  return;
}

// StaticResource'' @ 15046db60

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

// StaticResource'' @ 15046dbe0

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

// `dynamic_atexit_destructor_for_'CVarEnableUncompressedExrGpuReader'' @ 15046dc60

void __cdecl _dynamic_atexit_destructor_for__CVarEnableUncompressedExrGpuReader__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarEnableUncompressedExrGpuReader)
  ;
  return;
}

// `dynamic_atexit_destructor_for_'CVarExrReaderUseUploadHeap'' @ 15046dc80

void __cdecl _dynamic_atexit_destructor_for__CVarExrReaderUseUploadHeap__(void)

{
  CVarExrReaderUseUploadHeap._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarExrReaderUseUploadHeap);
  return;
}

// `dynamic_atexit_destructor_for_'CVarImgMediaFieldOfViewMultiplier'' @ 15046dca0

void __cdecl _dynamic_atexit_destructor_for__CVarImgMediaFieldOfViewMultiplier__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarImgMediaFieldOfViewMultiplier);
  return;
}

// `dynamic_atexit_destructor_for_'CVarImgMediaFrameInvalidationMaxCount'' @ 15046dcc0

void __cdecl _dynamic_atexit_destructor_for__CVarImgMediaFrameInvalidationMaxCount__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarImgMediaFrameInvalidationMaxCount);
  return;
}

// `dynamic_atexit_destructor_for_'CVarImgMediaMaxFrameSequenceGap'' @ 15046dce0

void __cdecl _dynamic_atexit_destructor_for__CVarImgMediaMaxFrameSequenceGap__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarImgMediaMaxFrameSequenceGap);
  return;
}

// `dynamic_atexit_destructor_for_'CVarImgMediaMipLevelPadding'' @ 15046dd00

void __cdecl _dynamic_atexit_destructor_for__CVarImgMediaMipLevelPadding__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarImgMediaMipLevelPadding);
  return;
}

// `dynamic_atexit_destructor_for_'CVarImgMediaMipMapDebugEnable'' @ 15046dd20

void __cdecl _dynamic_atexit_destructor_for__CVarImgMediaMipMapDebugEnable__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarImgMediaMipMapDebugEnable);
  return;
}

// `dynamic_atexit_destructor_for_'CVarImgMediaProcessTilesInnerOnly'' @ 15046dd40

void __cdecl _dynamic_atexit_destructor_for__CVarImgMediaProcessTilesInnerOnly__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarImgMediaProcessTilesInnerOnly);
  return;
}

// `dynamic_atexit_destructor_for_'Desc'' @ 15046dd60

void __cdecl
```FExrImgMediaReaderGpu::~FExrImgMediaReaderGpu'::__l2::Desc::operator()'::__l7::<lambda_1>::
operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015046dd67. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
  return;
}

// `dynamic_atexit_destructor_for_'Desc'' @ 15046dd80

void __cdecl
````FExrImgMediaReaderGpu::CreateSampleConverterCallback'::__l2::Desc::operator()'::__l2::<lambda_2>
::operator()'::__l7::<lambda_1>::operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015046dd87. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
  return;
}

// `dynamic_atexit_destructor_for_'Desc'' @ 15046dda0

void __cdecl
```FExrImgMediaReaderGpu::AllocateGpuBufferFromPool'::__l9::<lambda_2>::operator()'::__l7::
<lambda_1>::operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015046dda7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
  return;
}

// `dynamic_atexit_destructor_for_'Desc'' @ 15046ddc0

void __cdecl
```FExrImgMediaReaderGpu::CreateSampleConverterCallback'::__l2::<lambda_1>::operator()'::__l16::
<lambda_3>::operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015046ddc7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
  return;
}

// `dynamic_atexit_destructor_for_'Desc'' @ 15046dde0

void __cdecl
```FExrImgMediaReaderGpu::CreateSampleConverterCallback'::__l2::Desc::operator()'::__l7::<lambda_1>
::operator()<int_const_&>'::__l2::_dynamic_atexit_destructor_for__Desc__(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015046dde7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
  return;
}

// `dynamic_atexit_destructor_for_'Desc'' @ 15046de00

void __cdecl
```FExrImgMediaReaderGpu::ReadMip'::__l26::<lambda_2>::operator()'::__l7::<lambda_1>::
operator()<int_const_&>'::__l2::_dynamic_atexit_destructor_for__Desc__(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015046de07. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
  return;
}

// `dynamic_atexit_destructor_for_'EmptyString'' @ 15046de20

void __cdecl
`FImgMediaLoader::GetImagePath'::__l5::_dynamic_atexit_destructor_for__EmptyString__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ::EmptyString.Data.AllocatorInstance.Data;
  if (::EmptyString.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (::EmptyString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'FImgMediaLoaderUtilsTestsAutomationTestInstance'' @ 15046de40

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FImgMediaLoaderUtilsTestsAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FImgMediaLoaderUtilsTestsAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FImgMediaSanitizePathTestsAutomationTestInstance'' @ 15046de60

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FImgMediaSanitizePathTestsAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FImgMediaSanitizePathTestsAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FImgMediaTestsAutomationTestInstance'' @ 15046de80

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__FImgMediaTestsAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FImgMediaTestsAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'GPUStat_ExrImgMediaReaderGpu'' @ 15046dea0

void __cdecl _dynamic_atexit_destructor_for__GPUStat_ExrImgMediaReaderGpu__(void)

{
  GPUStat_ExrImgMediaReaderGpu._104_4_ = 0;
  if (GPUStat_ExrImgMediaReaderGpu._96_8_ != 0) {
    FMemory::Free((void *)GPUStat_ExrImgMediaReaderGpu._96_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&GPUStat_ExrImgMediaReaderGpu.field_0x20);
  return;
}

// `dynamic_atexit_destructor_for_'GPUStat_ExrImgMediaReaderGpu_AllocateBuffer'' @ 15046dee0

void __cdecl _dynamic_atexit_destructor_for__GPUStat_ExrImgMediaReaderGpu_AllocateBuffer__(void)

{
  GPUStat_ExrImgMediaReaderGpu_AllocateBuffer._104_4_ = 0;
  if (GPUStat_ExrImgMediaReaderGpu_AllocateBuffer._96_8_ != 0) {
    FMemory::Free((void *)GPUStat_ExrImgMediaReaderGpu_AllocateBuffer._96_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&GPUStat_ExrImgMediaReaderGpu_AllocateBuffer.field_0x20);
  return;
}

// `dynamic_atexit_destructor_for_'GPUStat_ExrImgMediaReaderGpu_CopyUploadBuffer'' @ 15046df20

void __cdecl _dynamic_atexit_destructor_for__GPUStat_ExrImgMediaReaderGpu_CopyUploadBuffer__(void)

{
  GPUStat_ExrImgMediaReaderGpu_CopyUploadBuffer._104_4_ = 0;
  if (GPUStat_ExrImgMediaReaderGpu_CopyUploadBuffer._96_8_ != 0) {
    FMemory::Free((void *)GPUStat_ExrImgMediaReaderGpu_CopyUploadBuffer._96_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&GPUStat_ExrImgMediaReaderGpu_CopyUploadBuffer.field_0x20);
  return;
}

// `dynamic_atexit_destructor_for_'GPUStat_ExrImgMediaReaderGpu_MipRender'' @ 15046df60

void __cdecl _dynamic_atexit_destructor_for__GPUStat_ExrImgMediaReaderGpu_MipRender__(void)

{
  GPUStat_ExrImgMediaReaderGpu_MipRender._104_4_ = 0;
  if (GPUStat_ExrImgMediaReaderGpu_MipRender._96_8_ != 0) {
    FMemory::Free((void *)GPUStat_ExrImgMediaReaderGpu_MipRender._96_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&GPUStat_ExrImgMediaReaderGpu_MipRender.field_0x20);
  return;
}

// `dynamic_atexit_destructor_for_'GPUStat_ExrImgMediaReaderGpu_MipUpscale'' @ 15046dfa0

void __cdecl _dynamic_atexit_destructor_for__GPUStat_ExrImgMediaReaderGpu_MipUpscale__(void)

{
  GPUStat_ExrImgMediaReaderGpu_MipUpscale._104_4_ = 0;
  if (GPUStat_ExrImgMediaReaderGpu_MipUpscale._96_8_ != 0) {
    FMemory::Free((void *)GPUStat_ExrImgMediaReaderGpu_MipUpscale._96_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&GPUStat_ExrImgMediaReaderGpu_MipUpscale.field_0x20);
  return;
}

// `dynamic_atexit_destructor_for_'LogImgMedia'' @ 15046dfe0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogImgMedia__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogImgMedia);
  return;
}

// `dynamic_atexit_destructor_for_'PossibleBasePaths'' @ 15046e000

void __cdecl
`UE::ImgMediaSource::Private::GetPossibleBasePaths'::__l2::
_dynamic_atexit_destructor_for__PossibleBasePaths__(void)

{
  DestructItems<FString,int>
            ((FString *)PossibleBasePaths.AllocatorInstance.Data,PossibleBasePaths.ArrayNum);
  if (PossibleBasePaths.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(PossibleBasePaths.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'_GCsvCategory_ImgMedia'' @ 15046e040

void __cdecl _dynamic_atexit_destructor_for___GCsvCategory_ImgMedia__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = _GCsvCategory_ImgMedia.Name.Data.AllocatorInstance.Data;
  if (_GCsvCategory_ImgMedia.Name.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (_GCsvCategory_ImgMedia.Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

