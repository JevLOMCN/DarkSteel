// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaAssets
// Functions: 438

// StaticResource'' @ 1410aadd0

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
`dynamic_initializer_for_'TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
::StaticResource__(void)

{
  TRefCountPtr<FRHIBlendState> this;
  TRefCountPtr<FRHIBlendState> TVar1;
  FRHIResource *local_res8;
  
  FRenderResource::FRenderResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
              ::StaticResource);
  TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
  ::StaticResource._padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticBlendState__0P__0A__00_0A__0A__00_0A__0A__0A__00_0A__0A__00_0A__0A__0A__00_0A__0A__00_0A__0A__0A__00_0A__0A__00_0A__0A__0A__00_0A__0A__00_0A__0A__0A__00_0A__0A__00_0A__0A__0A__00_0A__0A__00_0A__0A__0A__00_0A__0A__00_0A__0A___V__TRefCountPtr_VFRHIBlendState____PEAVFRHIBlendState____6B_
  ;
  TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
  ::StaticResource.StateRHI.Reference = (FRHIBlendState *)0x0;
  if ((GRHIGlobals.IsRHIInitialized == false) || (GRHIGlobals.SupportsRHIThread == false)) {
    BeginInitResource((FRenderResource *)
                      &TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
                       ::StaticResource,(FRenderCommandPipe *)0x0);
  }
  else {
    TVar1 = TStaticBlendState<15,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0>
            ::CreateRHI();
    this = TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
           ::StaticResource.StateRHI;
    if (TVar1.Reference !=
        (FRHIBlendState *)
        &TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
         ::StaticResource.StateRHI) {
                    /* WARNING: Load size is inaccurate */
      TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
      ::StaticResource.StateRHI.Reference = *TVar1.Reference;
      *(undefined8 *)TVar1.Reference = 0;
      if (this.Reference != (FRHIBlendState *)0x0) {
        FRHIResource::Release((FRHIResource *)this.Reference);
      }
    }
    if (local_res8 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_res8);
      atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
             ::StaticResource__);
      return;
    }
  }
  atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
         ::StaticResource__);
  return;
}

// StaticResource'' @ 1410aae90

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

// StaticResource'' @ 1410aaf50

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

// `dynamic_initializer_for_'AutoDetect'' @ 1410ab010

void __cdecl TimeSynchronizableMedia::_dynamic_initializer_for__AutoDetect__(void)

{
  ::FName::FName(&AutoDetect,"AutoDetect");
  return;
}

// `dynamic_initializer_for_'FMediaPlaylistTestAutomationTestInstance'' @ 1410ab030

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FMediaPlaylistTestAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FMediaPlaylistTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FMediaPlaylistTestAutomationTestInstance,&local_18,false);
  FMediaPlaylistTestAutomationTestInstance._0_8_ = &___7FMediaPlaylistTest__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FMediaPlaylistTestAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FrameDelay'' @ 1410ab090

void __cdecl TimeSynchronizableMedia::_dynamic_initializer_for__FrameDelay__(void)

{
  ::FName::FName(&FrameDelay,"FrameDelay");
  return;
}

// `dynamic_initializer_for_'GPUStat_MediaTextureResource'' @ 1410ab0b0

void __cdecl _dynamic_initializer_for__GPUStat_MediaTextureResource__(void)

{
  atexit(_dynamic_atexit_destructor_for__GPUStat_MediaTextureResource__);
  return;
}

// `dynamic_initializer_for_'LogMediaAssets'' @ 1410ab0d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogMediaAssets__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogMediaAssets,L"LogMediaAssets",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogMediaAssets__);
  return;
}

// `dynamic_initializer_for_'MediaModuleName'' @ 1410ab110

void __cdecl _dynamic_initializer_for__MediaModuleName__(void)

{
  FName::FName(&MediaModuleName,"Media");
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantMediaAssets'' @ 1410ab130

void __cdecl _dynamic_initializer_for__ModuleRegistrantMediaAssets__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "MediaAssets";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"MediaAssets",0xb);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FMediaAssetsModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'PrecacheFileOption'' @ 1410ab180

void __cdecl FileMediaSource::_dynamic_initializer_for__PrecacheFileOption__(void)

{
  ::FName::FName(&PrecacheFileOption,"PrecacheFile");
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_MediaAssets_MediaTextureResourceRender'' @ 1410ab1a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_MediaAssets_MediaTextureResourceRender__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_MediaAssets_MediaTextureResourceRender ==
      (FThreadSafeStaticStat<FStat_STAT_MediaAssets_MediaTextureResourceRender>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_MediaAssets_MediaTextureResourceRender");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_MediaAssets_MediaTextureResourceRender,
               *pFVar1,L"MediaAssets MediaTextureResource Render","STATGROUP_Media",
               "STATCAT_Advanced",L"Media",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_MediaUtils_MediaSoundComponentSampleTime'' @ 1410ab230

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_MediaUtils_MediaSoundComponentSampleTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_MediaUtils_MediaSoundComponentSampleTime ==
      (FThreadSafeStaticStat<FStat_STAT_MediaUtils_MediaSoundComponentSampleTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_MediaUtils_MediaSoundComponentSampleTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_MediaUtils_MediaSoundComponentSampleTime,
               *pFVar1,L"MediaUtils MediaSoundComponent SampleTime","STATGROUP_Media",
               "STATCAT_Advanced",L"Media",true,true,NumBits,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_MediaUtils_MediaSoundComponentSync'' @ 1410ab2c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_MediaUtils_MediaSoundComponentSync__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_MediaUtils_MediaSoundComponentSync ==
      (FThreadSafeStaticStat<FStat_STAT_MediaUtils_MediaSoundComponentSync>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_MediaUtils_MediaSoundComponentSync");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_MediaUtils_MediaSoundComponentSync,*pFVar1
               ,L"MediaUtils MediaSoundComponent Sync","STATGROUP_Media","STATCAT_Advanced",L"Media"
               ,true,true,NumBits,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_MediaUtils_TextureSampleTime'' @ 1410ab350

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_MediaUtils_TextureSampleTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_MediaUtils_TextureSampleTime ==
      (FThreadSafeStaticStat<FStat_STAT_MediaUtils_TextureSampleTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_MediaUtils_TextureSampleTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_MediaUtils_TextureSampleTime,*pFVar1,
               L"MediaAssets MediaTextureResource Sample","STATGROUP_Media","STATCAT_Advanced",
               L"Media",true,true,NumBits,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Media_SoundCompQueued'' @ 1410ab3e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Media_SoundCompQueued__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Media_SoundCompQueued ==
      (FThreadSafeStaticStat<FStat_STAT_Media_SoundCompQueued>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Media_SoundCompQueued");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Media_SoundCompQueued,*pFVar1,
               L"MediaUtils MediaSoundComponent Queued","STATGROUP_Media","STATCAT_Advanced",
               L"Media",true,true,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'TimeDelay'' @ 1410ab470

void __cdecl TimeSynchronizableMedia::_dynamic_initializer_for__TimeDelay__(void)

{
  ::FName::FName(&TimeDelay,"TimeDelay");
  return;
}

// `dynamic_initializer_for_'UseTimeSynchronizatioOption'' @ 1410ab490

void __cdecl TimeSynchronizableMedia::_dynamic_initializer_for__UseTimeSynchronizatioOption__(void)

{
  ::FName::FName(&UseTimeSynchronizatioOption,"UseTimeSynchronization");
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_BaseMediaSource_h__Script_MediaAssets_1375145157'' @ 1410ab4b0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_BaseMediaSource_h__Script_MediaAssets_1375145157__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MediaAssets",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_BaseMediaSource_h__Script_MediaAssets_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_FileMediaSource_h__Script_MediaAssets_4270303340'' @ 1410ab4f0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_FileMediaSource_h__Script_MediaAssets_4270303340__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MediaAssets",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_FileMediaSource_h__Script_MediaAssets_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_MediaComponent_h__Script_MediaAssets_2284566685'' @ 1410ab530

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_MediaComponent_h__Script_MediaAssets_2284566685__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MediaAssets",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_MediaComponent_h__Script_MediaAssets_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_MediaPlayerProxyInterface_h__Script_MediaAssets_2464198560'' @ 1410ab570

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_MediaPlayerProxyInterface_h__Script_MediaAssets_2464198560__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MediaAssets",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_MediaPlayerProxyInterface_h__Script_MediaAssets_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_MediaPlayer_h__Script_MediaAssets_3151975936'' @ 1410ab5b0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_MediaPlayer_h__Script_MediaAssets_3151975936__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MediaAssets",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_MediaPlayer_h__Script_MediaAssets_Statics
             ::ClassInfo,2,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_MediaPlayer_h__Script_MediaAssets_Statics
             ::ScriptStructInfo,2,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_MediaPlayer_h__Script_MediaAssets_Statics
             ::EnumInfo,2);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_MediaPlaylist_h__Script_MediaAssets_3340735378'' @ 1410ab600

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_MediaPlaylist_h__Script_MediaAssets_3340735378__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MediaAssets",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_MediaPlaylist_h__Script_MediaAssets_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_MediaSoundComponent_h__Script_MediaAssets_4282142502'' @ 1410ab640

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_MediaSoundComponent_h__Script_MediaAssets_4282142502__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MediaAssets",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_MediaSoundComponent_h__Script_MediaAssets_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_MediaSoundComponent_h__Script_MediaAssets_Statics
             ::ScriptStructInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_MediaSoundComponent_h__Script_MediaAssets_Statics
             ::EnumInfo,2);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_MediaSourceOptions_h__Script_MediaAssets_3255992219'' @ 1410ab690

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_MediaSourceOptions_h__Script_MediaAssets_3255992219__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MediaAssets",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_MediaSourceOptions_h__Script_MediaAssets_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_MediaSourceRendererInterface_h__Script_MediaAssets_4161879256'' @ 1410ab6d0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_MediaSourceRendererInterface_h__Script_MediaAssets_4161879256__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MediaAssets",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_MediaSourceRendererInterface_h__Script_MediaAssets_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_MediaSource_h__Script_MediaAssets_3056326355'' @ 1410ab710

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_MediaSource_h__Script_MediaAssets_3056326355__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MediaAssets",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_MediaSource_h__Script_MediaAssets_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_MediaTextureTracker_h__Script_MediaAssets_3403696144'' @ 1410ab750

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_MediaTextureTracker_h__Script_MediaAssets_3403696144__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MediaAssets",(FClassRegisterCompiledInInfo *)0x0,0,
             (FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_MediaTextureTracker_h__Script_MediaAssets_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_MediaTexture_h__Script_MediaAssets_3056548383'' @ 1410ab7a0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_MediaTexture_h__Script_MediaAssets_3056548383__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MediaAssets",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_MediaTexture_h__Script_MediaAssets_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_MediaTexture_h__Script_MediaAssets_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_Misc_MediaBlueprintFunctionLibrary_h__Script_MediaAssets_1931587637'' @ 1410ab7f0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_Misc_MediaBlueprintFunctionLibrary_h__Script_MediaAssets_1931587637__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MediaAssets",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_Misc_MediaBlueprintFunctionLibrary_h__Script_MediaAssets_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_Misc_MediaBlueprintFunctionLibrary_h__Script_MediaAssets_Statics
             ::ScriptStructInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_Misc_MediaBlueprintFunctionLibrary_h__Script_MediaAssets_Statics
             ::EnumInfo,3);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_PlatformMediaSource_h__Script_MediaAssets_3219170570'' @ 1410ab840

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_PlatformMediaSource_h__Script_MediaAssets_3219170570__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MediaAssets",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_PlatformMediaSource_h__Script_MediaAssets_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_StreamMediaSource_h__Script_MediaAssets_2804395655'' @ 1410ab880

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_StreamMediaSource_h__Script_MediaAssets_2804395655__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MediaAssets",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_StreamMediaSource_h__Script_MediaAssets_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_TimeSynchronizableMediaSource_h__Script_MediaAssets_2943413524'' @ 1410ab8c0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_TimeSynchronizableMediaSource_h__Script_MediaAssets_2943413524__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MediaAssets",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_TimeSynchronizableMediaSource_h__Script_MediaAssets_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_MediaAssets'' @ 1410ab900

void __cdecl _dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_MediaAssets__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0x193dda10;
  local_res8[0].DeclarationsHash = 0x26fae5b4;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_MediaAssets,L"/Script/MediaAssets",
             &Z_Registration_Info_UPackage__Script_MediaAssets,local_res8);
  return;
}

// Z_Construct_UClass_UMediaPlaylist @ 146c11870

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMediaPlaylist(void)

{
  if (Z_Registration_Info_UClass_UMediaPlaylist.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMediaPlaylist.OuterSingleton,
               &Z_Construct_UClass_UMediaPlaylist_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMediaPlaylist.OuterSingleton;
}

// NewProp_ReturnValue_SetBit @ 146c118b0

void __cdecl
Z_Construct_UFunction_UMediaPlayer_CanPause_Statics::NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 146c118c0

void __cdecl
Z_Construct_UFunction_UMediaPlaylist_Add_Statics::NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// Z_Construct_UFunction_UMediaPlayer_CanPause @ 146c118d0

UFunction * __cdecl Z_Construct_UFunction_UMediaPlayer_CanPause(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UMediaPlayer_CanPause_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMediaPlaylist_Add @ 146c11910

UFunction * __cdecl Z_Construct_UFunction_UMediaPlaylist_Add(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UMediaPlaylist_Add_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 146c11950

void __cdecl
Z_Construct_UFunction_UMediaPlayer_CanPlaySource_Statics::NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 146c11960

void __cdecl
Z_Construct_UFunction_UMediaPlaylist_AddFile_Statics::NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// Z_Construct_UFunction_UMediaPlayer_CanPlaySource @ 146c11a30

UFunction * __cdecl Z_Construct_UFunction_UMediaPlayer_CanPlaySource(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UMediaPlayer_CanPlaySource_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMediaPlaylist_AddFile @ 146c11a70

UFunction * __cdecl Z_Construct_UFunction_UMediaPlaylist_AddFile(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UMediaPlaylist_AddFile_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 146c11ab0

void __cdecl
Z_Construct_UFunction_UMediaPlayer_CanPlayUrl_Statics::NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 146c11ac0

void __cdecl
Z_Construct_UFunction_UMediaPlaylist_AddUrl_Statics::NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// Z_Construct_UFunction_UMediaPlayer_CanPlayUrl @ 146c11ad0

UFunction * __cdecl Z_Construct_UFunction_UMediaPlayer_CanPlayUrl(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UMediaPlayer_CanPlayUrl_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMediaPlaylist_AddUrl @ 146c11b10

UFunction * __cdecl Z_Construct_UFunction_UMediaPlaylist_AddUrl(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UMediaPlaylist_AddUrl_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMediaPlayer_Close @ 146c11b50

UFunction * __cdecl Z_Construct_UFunction_UMediaPlayer_Close(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UMediaPlayer_Close_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UPlatformMediaSource @ 146c11b90

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPlatformMediaSource(void)

{
  if (Z_Registration_Info_UClass_UPlatformMediaSource.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPlatformMediaSource.OuterSingleton,
               &Z_Construct_UClass_UPlatformMediaSource_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPlatformMediaSource.OuterSingleton;
}

// Z_Construct_UFunction_UMediaPlaylist_Get @ 146c11bd0

UFunction * __cdecl Z_Construct_UFunction_UMediaPlaylist_Get(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UMediaPlaylist_Get_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMediaPlayer_GetAudioTrackChannels @ 146c11c10

UFunction * __cdecl Z_Construct_UFunction_UMediaPlayer_GetAudioTrackChannels(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMediaPlayer_GetAudioTrackChannels_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMediaPlaylist_GetNext @ 146c11c50

UFunction * __cdecl Z_Construct_UFunction_UMediaPlaylist_GetNext(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UMediaPlaylist_GetNext_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMediaPlayer_GetAudioTrackSampleRate @ 146c11c90

UFunction * __cdecl Z_Construct_UFunction_UMediaPlayer_GetAudioTrackSampleRate(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMediaPlayer_GetAudioTrackSampleRate_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMediaPlaylist_GetPrevious @ 146c11cd0

UFunction * __cdecl Z_Construct_UFunction_UMediaPlaylist_GetPrevious(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UMediaPlaylist_GetPrevious_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMediaPlayer_GetAudioTrackType @ 146c11d10

UFunction * __cdecl Z_Construct_UFunction_UMediaPlayer_GetAudioTrackType(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMediaPlayer_GetAudioTrackType_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMediaPlaylist_GetRandom @ 146c11d50

UFunction * __cdecl Z_Construct_UFunction_UMediaPlaylist_GetRandom(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UMediaPlaylist_GetRandom_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMediaPlayer_GetDesiredPlayerName @ 146c11d90

UFunction * __cdecl Z_Construct_UFunction_UMediaPlayer_GetDesiredPlayerName(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMediaPlayer_GetDesiredPlayerName_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMediaPlaylist_Insert @ 146c11dd0

UFunction * __cdecl Z_Construct_UFunction_UMediaPlaylist_Insert(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UMediaPlaylist_Insert_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMediaPlayer_GetDisplayTime @ 146c11e10

UFunction * __cdecl Z_Construct_UFunction_UMediaPlayer_GetDisplayTime(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMediaPlayer_GetDisplayTime_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMediaPlaylist_Num @ 146c11e50

UFunction * __cdecl Z_Construct_UFunction_UMediaPlaylist_Num(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UMediaPlaylist_Num_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 146c11e90

void __cdecl
Z_Construct_UFunction_UMediaPlaylist_Remove_Statics::NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// Z_Construct_UFunction_UMediaPlayer_GetDisplayTimeStamp @ 146c11ea0

UFunction * __cdecl Z_Construct_UFunction_UMediaPlayer_GetDisplayTimeStamp(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMediaPlayer_GetDisplayTimeStamp_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMediaPlaylist_Remove @ 146c11ee0

UFunction * __cdecl Z_Construct_UFunction_UMediaPlaylist_Remove(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UMediaPlaylist_Remove_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMediaPlayer_GetDuration @ 146c11f20

UFunction * __cdecl Z_Construct_UFunction_UMediaPlayer_GetDuration(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UMediaPlayer_GetDuration_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 146c11f60

void __cdecl
Z_Construct_UFunction_UMediaPlaylist_RemoveAt_Statics::NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 4) = 1;
  return;
}

// Z_Construct_UFunction_UMediaPlaylist_RemoveAt @ 146c11f70

UFunction * __cdecl Z_Construct_UFunction_UMediaPlaylist_RemoveAt(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UMediaPlaylist_RemoveAt_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMediaPlayer_GetHorizontalFieldOfView @ 146c11fb0

UFunction * __cdecl Z_Construct_UFunction_UMediaPlayer_GetHorizontalFieldOfView(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMediaPlayer_GetHorizontalFieldOfView_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 146c12040

void __cdecl
Z_Construct_UFunction_UMediaPlaylist_Replace_Statics::NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// Z_Construct_UFunction_UMediaPlaylist_Replace @ 146c12080

UFunction * __cdecl Z_Construct_UFunction_UMediaPlaylist_Replace(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UMediaPlaylist_Replace_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UStreamMediaSource @ 146c120c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UStreamMediaSource(void)

{
  if (Z_Registration_Info_UClass_UStreamMediaSource.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UStreamMediaSource.OuterSingleton,
               &Z_Construct_UClass_UStreamMediaSource_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UStreamMediaSource.OuterSingleton;
}

// Z_Construct_UClass_UMediaTexture_NoRegister @ 146c12100

UClass * __cdecl Z_Construct_UClass_UMediaTexture_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMediaTexture.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MediaAssets",L"MediaTexture",
               &Z_Registration_Info_UClass_UMediaTexture.InnerSingleton,
               UMediaTexture::StaticRegisterNativesUMediaTexture,0x238,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMediaTexture>,
               InternalVTableHelperCtorCaller<UMediaTexture>,local_res8,UTexture::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMediaTexture.InnerSingleton;
}

// Z_Construct_UClass_UTimeSynchronizableMediaSource @ 146c12340

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UTimeSynchronizableMediaSource(void)

{
  if (Z_Registration_Info_UClass_UTimeSynchronizableMediaSource.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UTimeSynchronizableMediaSource.OuterSingleton,
               &Z_Construct_UClass_UTimeSynchronizableMediaSource_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UTimeSynchronizableMediaSource.OuterSingleton;
}

// Z_Construct_UDelegateFunction_MediaAssets_OnMediaPlayerMediaEvent__DelegateSignature @ 146c12380

UFunction * __cdecl
Z_Construct_UDelegateFunction_MediaAssets_OnMediaPlayerMediaEvent__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_MediaAssets_OnMediaPlayerMediaEvent__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bUseTimeSynchronization_SetBit @ 146c123c0

void __cdecl
Z_Construct_UClass_UTimeSynchronizableMediaSource_Statics::NewProp_bUseTimeSynchronization_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x88) = 1;
  return;
}

// Z_Construct_UDelegateFunction_MediaAssets_OnMediaPlayerMediaOpened__DelegateSignature @ 146c123d0

UFunction * __cdecl
Z_Construct_UDelegateFunction_MediaAssets_OnMediaPlayerMediaOpened__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_MediaAssets_OnMediaPlayerMediaOpened__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UDelegateFunction_MediaAssets_OnMediaPlayerMediaOpenFailed__DelegateSignature @ 146c12410

UFunction * __cdecl
Z_Construct_UDelegateFunction_MediaAssets_OnMediaPlayerMediaOpenFailed__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_MediaAssets_OnMediaPlayerMediaOpenFailed__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bAutoDetectInput_SetBit @ 146c12450

void __cdecl
Z_Construct_UClass_UTimeSynchronizableMediaSource_Statics::NewProp_bAutoDetectInput_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x98) = 1;
  return;
}

// Z_Construct_UPackage__Script_MediaAssets @ 146c12460

UPackage * __cdecl Z_Construct_UPackage__Script_MediaAssets(void)

{
  if (Z_Registration_Info_UPackage__Script_MediaAssets.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_MediaAssets.OuterSingleton,&PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_MediaAssets.OuterSingleton;
}

// Z_Construct_UClass_UMediaSourceRendererInterface @ 146c12ca0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMediaSourceRendererInterface(void)

{
  if (Z_Registration_Info_UClass_UMediaSourceRendererInterface.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMediaSourceRendererInterface.OuterSingleton,
               &Z_Construct_UClass_UMediaSourceRendererInterface_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMediaSourceRendererInterface.OuterSingleton;
}

// Z_Construct_UClass_UMediaTexture @ 146c13300

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMediaTexture(void)

{
  if (Z_Registration_Info_UClass_UMediaTexture.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMediaTexture.OuterSingleton,
               &Z_Construct_UClass_UMediaTexture_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMediaTexture.OuterSingleton;
}

// Z_Construct_UEnum_MediaAssets_MediaTextureOrientation @ 146c13340

UEnum * __cdecl Z_Construct_UEnum_MediaAssets_MediaTextureOrientation(void)

{
  if (Z_Registration_Info_UEnum_MediaTextureOrientation.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_MediaTextureOrientation.InnerSingleton,
               &Z_Construct_UEnum_MediaAssets_MediaTextureOrientation_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_MediaTextureOrientation.InnerSingleton;
}

// MediaTextureOrientation_StaticEnum @ 146c13380

UEnum * __cdecl MediaTextureOrientation_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_MediaTextureOrientation.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MediaAssets();
    Z_Registration_Info_UEnum_MediaTextureOrientation.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MediaAssets_MediaTextureOrientation,(UObject *)pUVar1,
                       L"MediaTextureOrientation");
  }
  return Z_Registration_Info_UEnum_MediaTextureOrientation.OuterSingleton;
}

// Z_Construct_UFunction_UMediaTexture_GetAspectRatio @ 146c13430

UFunction * __cdecl Z_Construct_UFunction_UMediaTexture_GetAspectRatio(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMediaTexture_GetAspectRatio_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UBaseMediaSource @ 146c13470

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UBaseMediaSource(void)

{
  if (Z_Registration_Info_UClass_UBaseMediaSource.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UBaseMediaSource.OuterSingleton,
               &Z_Construct_UClass_UBaseMediaSource_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UBaseMediaSource.OuterSingleton;
}

// Z_Construct_UClass_UMediaSource @ 146c134b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMediaSource(void)

{
  if (Z_Registration_Info_UClass_UMediaSource.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMediaSource.OuterSingleton,
               &Z_Construct_UClass_UMediaSource_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMediaSource.OuterSingleton;
}

// Z_Construct_UFunction_UMediaTexture_GetHeight @ 146c134f0

UFunction * __cdecl Z_Construct_UFunction_UMediaTexture_GetHeight(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UMediaTexture_GetHeight_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMediaTexture_GetMediaPlayer @ 146c13530

UFunction * __cdecl Z_Construct_UFunction_UMediaTexture_GetMediaPlayer(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMediaTexture_GetMediaPlayer_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMediaTexture_GetTextureNumMips @ 146c13570

UFunction * __cdecl Z_Construct_UFunction_UMediaTexture_GetTextureNumMips(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMediaTexture_GetTextureNumMips_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMediaTexture_GetWidth @ 146c135b0

UFunction * __cdecl Z_Construct_UFunction_UMediaTexture_GetWidth(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UMediaTexture_GetWidth_Statics::FuncParams);
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 146c135f0

void * __thiscall
IMediaAssetsModule::_scalar_deleting_destructor_(IMediaAssetsModule *this,uint param_1)

{
  *this = (IMediaAssetsModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// Z_Construct_UFunction_UMediaTexture_SetMediaPlayer @ 146c13630

UFunction * __cdecl Z_Construct_UFunction_UMediaTexture_SetMediaPlayer(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMediaTexture_SetMediaPlayer_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMediaSource_GetUrl @ 146c13670

UFunction * __cdecl Z_Construct_UFunction_UMediaSource_GetUrl(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UMediaSource_GetUrl_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMediaTexture_UpdateResource @ 146c136b0

UFunction * __cdecl Z_Construct_UFunction_UMediaTexture_UpdateResource(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMediaTexture_UpdateResource_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_Value_SetBit @ 146c13730

void __cdecl
Z_Construct_UFunction_UMediaSource_SetMediaOptionBool_Statics::NewProp_Value_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// NewProp_AutoClear_SetBit @ 146c13740

void __cdecl Z_Construct_UClass_UMediaTexture_Statics::NewProp_AutoClear_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x152) = 1;
  return;
}

// Z_Construct_UClass_UMediaSource_NoRegister @ 146c13750

UClass * __cdecl Z_Construct_UClass_UMediaSource_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMediaSource.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MediaAssets",L"MediaSource",
               &Z_Registration_Info_UClass_UMediaSource.InnerSingleton,
               UMediaSource::StaticRegisterNativesUMediaSource,0x80,8,CLASS_Intrinsic|CLASS_Abstract
               ,CASTCLASS_None,L"Engine",InternalConstructor<UMediaSource>,
               InternalVTableHelperCtorCaller<UMediaSource>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMediaSource.InnerSingleton;
}

// NewProp_EnableGenMips_SetBit @ 146c13800

void __cdecl Z_Construct_UClass_UMediaTexture_Statics::NewProp_EnableGenMips_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x164) = 1;
  return;
}

// NewProp_NewStyleOutput_SetBit @ 146c13810

void __cdecl Z_Construct_UClass_UMediaTexture_Statics::NewProp_NewStyleOutput_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x165) = 1;
  return;
}

// Z_Construct_UFunction_UMediaSource_SetMediaOptionBool @ 146c13820

UFunction * __cdecl Z_Construct_UFunction_UMediaSource_SetMediaOptionBool(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMediaSource_SetMediaOptionBool_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UMediaComponent @ 146c13910

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMediaComponent(void)

{
  if (Z_Registration_Info_UClass_UMediaComponent.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMediaComponent.OuterSingleton,
               &Z_Construct_UClass_UMediaComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMediaComponent.OuterSingleton;
}

// Z_Construct_UFunction_UMediaSource_SetMediaOptionFloat @ 146c13950

UFunction * __cdecl Z_Construct_UFunction_UMediaSource_SetMediaOptionFloat(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMediaSource_SetMediaOptionFloat_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMediaComponent_GetMediaPlayer @ 146c13990

UFunction * __cdecl Z_Construct_UFunction_UMediaComponent_GetMediaPlayer(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMediaComponent_GetMediaPlayer_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMediaSource_SetMediaOptionInt64 @ 146c139d0

UFunction * __cdecl Z_Construct_UFunction_UMediaSource_SetMediaOptionInt64(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMediaSource_SetMediaOptionInt64_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMediaComponent_GetMediaTexture @ 146c13a10

UFunction * __cdecl Z_Construct_UFunction_UMediaComponent_GetMediaTexture(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMediaComponent_GetMediaTexture_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMediaSource_SetMediaOptionString @ 146c13a50

UFunction * __cdecl Z_Construct_UFunction_UMediaSource_SetMediaOptionString(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMediaSource_SetMediaOptionString_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 146c13a90

void __cdecl
Z_Construct_UFunction_UMediaSource_Validate_Statics::NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UMediaSource_Validate @ 146c13aa0

UFunction * __cdecl Z_Construct_UFunction_UMediaSource_Validate(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UMediaSource_Validate_Statics::FuncParams);
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 146c13ae0

void * __thiscall
FMediaAssetsModule::_scalar_deleting_destructor_(FMediaAssetsModule *this,uint param_1)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnMediaStateChanged).field_0x8,*(int *)&(this->OnMediaStateChanged).field_0x10
            );
  pvVar1 = *(void **)&(this->OnMediaStateChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnMediaStateChanged);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->CreateMediaSourceRendererDelegate);
  pvVar1 = *(void **)&(this->CreateMediaSourceRendererDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->CreateMediaSourceRendererDelegate);
  DestructItems<FString,int>
            ((FString *)(this->FileExtensions).AllocatorInstance.Data,
             (this->FileExtensions).ArrayNum);
  pFVar2 = (this->FileExtensions).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<TDelegate<UMediaPlayer_*___cdecl(UObject_*,UObject_*_&),FDefaultDelegateUserPolicy>,int>
            ((TDelegate<UMediaPlayer_*___cdecl(UObject_*,UObject_*_&),FDefaultDelegateUserPolicy> *)
             (this->GetPlayerFromObjectDelegates).AllocatorInstance.Data,
             (this->GetPlayerFromObjectDelegates).ArrayNum);
  pFVar2 = (this->GetPlayerFromObjectDelegates).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  this->_padding_ = (longlong)IModuleInterface::vftable;
  FSelfRegisteringExec::~FSelfRegisteringExec((FSelfRegisteringExec *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x68);
  }
  return this;
}

// Z_Construct_UClass_UFileMediaSource @ 146c13c70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UFileMediaSource(void)

{
  if (Z_Registration_Info_UClass_UFileMediaSource.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UFileMediaSource.OuterSingleton,
               &Z_Construct_UClass_UFileMediaSource_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UFileMediaSource.OuterSingleton;
}

// Z_Construct_UFunction_UFileMediaSource_SetFilePath @ 146c13d10

UFunction * __cdecl Z_Construct_UFunction_UFileMediaSource_SetFilePath(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UFileMediaSource_SetFilePath_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_PrecacheFile_SetBit @ 146c13e40

void __cdecl Z_Construct_UClass_UFileMediaSource_Statics::NewProp_PrecacheFile_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x98) = 1;
  return;
}

// Z_Construct_UFunction_UMediaPlayer_GetMediaMetadataItems @ 146c13e50

UFunction * __cdecl Z_Construct_UFunction_UMediaPlayer_GetMediaMetadataItems(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMediaPlayer_GetMediaMetadataItems_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMediaPlayer_GetMediaName @ 146c13f50

UFunction * __cdecl Z_Construct_UFunction_UMediaPlayer_GetMediaName(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UMediaPlayer_GetMediaName_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMediaPlayer_GetNumTrackFormats @ 146c140c0

UFunction * __cdecl Z_Construct_UFunction_UMediaPlayer_GetNumTrackFormats(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMediaPlayer_GetNumTrackFormats_Statics::FuncParams);
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 146c14100

void * __thiscall
IBaseDelegateInstance<UMediaSource_*___cdecl(FString_const_&,UObject_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<UMediaSource_*___cdecl(FString_const_&,UObject_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146c14150

void * __thiscall
TCommonDelegateInstanceState<UMediaSource_*___cdecl(FString_const_&,UObject_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<UMediaSource_*___cdecl(FString_const_&,UObject_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// Z_Construct_UFunction_UMediaPlayer_GetNumTracks @ 146c14390

UFunction * __cdecl Z_Construct_UFunction_UMediaPlayer_GetNumTracks(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UMediaPlayer_GetNumTracks_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 146c143d0

void * __thiscall
TBaseStaticDelegateInstance<UMediaSource_*___cdecl(FString_const_&,UObject_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseStaticDelegateInstance<UMediaSource_*___cdecl(FString_const_&,UObject_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// Z_Construct_UFunction_UMediaPlayer_GetPlaybackTimeRange @ 146c14400

UFunction * __cdecl Z_Construct_UFunction_UMediaPlayer_GetPlaybackTimeRange(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMediaPlayer_GetPlaybackTimeRange_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMediaPlayer_GetPlayerName @ 146c14440

UFunction * __cdecl Z_Construct_UFunction_UMediaPlayer_GetPlayerName(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UMediaPlayer_GetPlayerName_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMediaPlayer_GetPlaylist @ 146c14480

UFunction * __cdecl Z_Construct_UFunction_UMediaPlayer_GetPlaylist(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UMediaPlayer_GetPlaylist_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMediaPlayer_GetPlaylistIndex @ 146c144c0

UFunction * __cdecl Z_Construct_UFunction_UMediaPlayer_GetPlaylistIndex(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMediaPlayer_GetPlaylistIndex_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMediaPlayer_GetRate @ 146c14500

UFunction * __cdecl Z_Construct_UFunction_UMediaPlayer_GetRate(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UMediaPlayer_GetRate_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMediaPlayer_GetSelectedTrack @ 146c14600

UFunction * __cdecl Z_Construct_UFunction_UMediaPlayer_GetSelectedTrack(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMediaPlayer_GetSelectedTrack_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UMediaSoundComponent @ 146c14800

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMediaSoundComponent(void)

{
  if (Z_Registration_Info_UClass_UMediaSoundComponent.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMediaSoundComponent.OuterSingleton,
               &Z_Construct_UClass_UMediaSoundComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMediaSoundComponent.OuterSingleton;
}

// Z_Construct_UEnum_MediaAssets_EMediaSoundChannels @ 146c14840

UEnum * __cdecl Z_Construct_UEnum_MediaAssets_EMediaSoundChannels(void)

{
  if (Z_Registration_Info_UEnum_EMediaSoundChannels.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EMediaSoundChannels.InnerSingleton,
               &Z_Construct_UEnum_MediaAssets_EMediaSoundChannels_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EMediaSoundChannels.InnerSingleton;
}

// Z_Construct_UEnum_MediaAssets_EMediaSoundComponentFFTSize @ 146c14880

UEnum * __cdecl Z_Construct_UEnum_MediaAssets_EMediaSoundComponentFFTSize(void)

{
  if (Z_Registration_Info_UEnum_EMediaSoundComponentFFTSize.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EMediaSoundComponentFFTSize.InnerSingleton,
               &Z_Construct_UEnum_MediaAssets_EMediaSoundComponentFFTSize_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EMediaSoundComponentFFTSize.InnerSingleton;
}

// Z_Construct_UScriptStruct_FMediaSoundComponentSpectralData @ 146c148c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMediaSoundComponentSpectralData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMediaSoundComponentSpectralData.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMediaSoundComponentSpectralData.InnerSingleton,
               &Z_Construct_UScriptStruct_FMediaSoundComponentSpectralData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMediaSoundComponentSpectralData.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMediaSoundComponentSpectralData.InnerSingleton;
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

// EMediaSoundChannels_StaticEnum @ 146c14940

UEnum * __cdecl EMediaSoundChannels_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMediaSoundChannels.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MediaAssets();
    Z_Registration_Info_UEnum_EMediaSoundChannels.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MediaAssets_EMediaSoundChannels,(UObject *)pUVar1,
                       L"EMediaSoundChannels");
  }
  return Z_Registration_Info_UEnum_EMediaSoundChannels.OuterSingleton;
}

// EMediaSoundComponentFFTSize_StaticEnum @ 146c14980

UEnum * __cdecl EMediaSoundComponentFFTSize_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMediaSoundComponentFFTSize.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MediaAssets();
    Z_Registration_Info_UEnum_EMediaSoundComponentFFTSize.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MediaAssets_EMediaSoundComponentFFTSize,(UObject *)pUVar1,
                       L"EMediaSoundComponentFFTSize");
  }
  return Z_Registration_Info_UEnum_EMediaSoundComponentFFTSize.OuterSingleton;
}

// NewStructOps @ 146c149c0

void * __cdecl
Z_Construct_UScriptStruct_FMediaSoundComponentSpectralData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMediaSoundComponentSpectralData,&UE::CoreUObject::Private::Construct<FMediaSoundComponentSpectralData>,&UE::CoreUObject::Private::ConstructForTests<FMediaSoundComponentSpectralData>,&UE::CoreUObject::Private::Destruct<FMediaSoundComponentSpectralData>,&UE::CoreUObject::Private::Copy<FMediaSoundComponentSpectralData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UMediaBlueprintFunctionLibrary @ 146c14a00

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMediaBlueprintFunctionLibrary(void)

{
  if (Z_Registration_Info_UClass_UMediaBlueprintFunctionLibrary.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMediaBlueprintFunctionLibrary.OuterSingleton,
               &Z_Construct_UClass_UMediaBlueprintFunctionLibrary_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMediaBlueprintFunctionLibrary.OuterSingleton;
}

// Z_Construct_UScriptStruct_FMediaCaptureDevice @ 146c14a40

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMediaCaptureDevice(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMediaCaptureDevice.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMediaCaptureDevice.InnerSingleton,
               &Z_Construct_UScriptStruct_FMediaCaptureDevice_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMediaCaptureDevice.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FMediaCaptureDevice.InnerSingleton;
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

// EMediaAudioCaptureDeviceFilter_StaticEnum @ 146c14ac0

UEnum * __cdecl EMediaAudioCaptureDeviceFilter_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMediaAudioCaptureDeviceFilter.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MediaAssets();
    Z_Registration_Info_UEnum_EMediaAudioCaptureDeviceFilter.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MediaAssets_EMediaAudioCaptureDeviceFilter,
                       (UObject *)pUVar1,L"EMediaAudioCaptureDeviceFilter");
  }
  return Z_Registration_Info_UEnum_EMediaAudioCaptureDeviceFilter.OuterSingleton;
}

// NewProp_Unthinned_SetBit @ 146c14b00

void __cdecl
Z_Construct_UFunction_UMediaPlayer_GetSupportedRates_Statics::NewProp_Unthinned_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// EMediaVideoCaptureDeviceFilter_StaticEnum @ 146c14b10

UEnum * __cdecl EMediaVideoCaptureDeviceFilter_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMediaVideoCaptureDeviceFilter.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MediaAssets();
    Z_Registration_Info_UEnum_EMediaVideoCaptureDeviceFilter.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MediaAssets_EMediaVideoCaptureDeviceFilter,
                       (UObject *)pUVar1,L"EMediaVideoCaptureDeviceFilter");
  }
  return Z_Registration_Info_UEnum_EMediaVideoCaptureDeviceFilter.OuterSingleton;
}

// Z_Construct_UFunction_UMediaPlayer_GetSupportedRates @ 146c14b50

UFunction * __cdecl Z_Construct_UFunction_UMediaPlayer_GetSupportedRates(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMediaPlayer_GetSupportedRates_Statics::FuncParams);
  }
  return ReturnFunction;
}

// `vector_deleting_destructor'`adjustor{8}' @ 146c14b88

/* [thunk]:public: virtual void * __ptr64 __cdecl FMediaAssetsModule::`vector deleting
   destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
FMediaAssetsModule::_vector_deleting_destructor__adjustor_8__(FMediaAssetsModule *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FMediaAssetsModule *)&this[-1].OnMediaStateChanged.field_0x18,param_1);
  return pvVar1;
}

// EMediaWebcamCaptureDeviceFilter_StaticEnum @ 146c14c60

UEnum * __cdecl EMediaWebcamCaptureDeviceFilter_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMediaWebcamCaptureDeviceFilter.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MediaAssets();
    Z_Registration_Info_UEnum_EMediaWebcamCaptureDeviceFilter.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MediaAssets_EMediaWebcamCaptureDeviceFilter,
                       (UObject *)pUVar1,L"EMediaWebcamCaptureDeviceFilter");
  }
  return Z_Registration_Info_UEnum_EMediaWebcamCaptureDeviceFilter.OuterSingleton;
}

// NewProp_ReturnValue_SetBit @ 146c14ca0

void __cdecl
Z_Construct_UFunction_UMediaSoundComponent_BP_GetAttenuationSettingsToApply_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x3d0) = 1;
  return;
}

// Z_Construct_UFunction_UMediaPlayer_GetTime @ 146c14cb0

UFunction * __cdecl Z_Construct_UFunction_UMediaPlayer_GetTime(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UMediaPlayer_GetTime_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMediaSoundComponent_BP_GetAttenuationSettingsToApply @ 146c14cf0

UFunction * __cdecl
Z_Construct_UFunction_UMediaSoundComponent_BP_GetAttenuationSettingsToApply(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMediaSoundComponent_BP_GetAttenuationSettingsToApply_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 146c14d30

void * __cdecl Z_Construct_UScriptStruct_FMediaCaptureDevice_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMediaCaptureDevice,&UE::CoreUObject::Private::Construct<FMediaCaptureDevice>,&UE::CoreUObject::Private::ConstructForTests<FMediaCaptureDevice>,&UE::CoreUObject::Private::Destruct<FMediaCaptureDevice>,&UE::CoreUObject::Private::Copy<FMediaCaptureDevice>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UMediaPlayer_GetTimeDelay @ 146c14d70

UFunction * __cdecl Z_Construct_UFunction_UMediaPlayer_GetTimeDelay(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UMediaPlayer_GetTimeDelay_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMediaSoundComponent_GetEnvelopeValue @ 146c14db0

UFunction * __cdecl Z_Construct_UFunction_UMediaSoundComponent_GetEnvelopeValue(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMediaSoundComponent_GetEnvelopeValue_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMediaPlayer_GetTimeStamp @ 146c14df0

UFunction * __cdecl Z_Construct_UFunction_UMediaPlayer_GetTimeStamp(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UMediaPlayer_GetTimeStamp_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMediaSoundComponent_GetMediaPlayer @ 146c14e30

UFunction * __cdecl Z_Construct_UFunction_UMediaSoundComponent_GetMediaPlayer(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMediaSoundComponent_GetMediaPlayer_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMediaPlayer_GetTrackDisplayName @ 146c14e70

UFunction * __cdecl Z_Construct_UFunction_UMediaPlayer_GetTrackDisplayName(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMediaPlayer_GetTrackDisplayName_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMediaPlayer_GetTrackFormat @ 146c14eb0

UFunction * __cdecl Z_Construct_UFunction_UMediaPlayer_GetTrackFormat(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMediaPlayer_GetTrackFormat_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMediaPlayer_GetTrackLanguage @ 146c14ef0

UFunction * __cdecl Z_Construct_UFunction_UMediaPlayer_GetTrackLanguage(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMediaPlayer_GetTrackLanguage_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMediaPlayer_GetUrl @ 146c14f30

UFunction * __cdecl Z_Construct_UFunction_UMediaPlayer_GetUrl(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UMediaPlayer_GetUrl_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMediaPlayer_GetVerticalFieldOfView @ 146c14f70

UFunction * __cdecl Z_Construct_UFunction_UMediaPlayer_GetVerticalFieldOfView(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMediaPlayer_GetVerticalFieldOfView_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMediaPlayer_GetVideoTrackAspectRatio @ 146c14fb0

UFunction * __cdecl Z_Construct_UFunction_UMediaPlayer_GetVideoTrackAspectRatio(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMediaPlayer_GetVideoTrackAspectRatio_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMediaPlayer_GetVideoTrackDimensions @ 146c14ff0

UFunction * __cdecl Z_Construct_UFunction_UMediaPlayer_GetVideoTrackDimensions(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMediaPlayer_GetVideoTrackDimensions_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMediaPlayer_GetVideoTrackFrameRate @ 146c15030

UFunction * __cdecl Z_Construct_UFunction_UMediaPlayer_GetVideoTrackFrameRate(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMediaPlayer_GetVideoTrackFrameRate_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UMediaTimeStampInfo_NoRegister @ 146c15070

UClass * __cdecl Z_Construct_UClass_UMediaTimeStampInfo_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMediaTimeStampInfo.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MediaAssets",L"MediaTimeStampInfo",
               &Z_Registration_Info_UClass_UMediaTimeStampInfo.InnerSingleton,
               UMediaTimeStampInfo::StaticRegisterNativesUMediaTimeStampInfo,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMediaTimeStampInfo>,
               InternalVTableHelperCtorCaller<UMediaTimeStampInfo>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMediaTimeStampInfo.InnerSingleton;
}

// Z_Construct_UClass_UMediaPlayer_NoRegister @ 146c15120

UClass * __cdecl Z_Construct_UClass_UMediaPlayer_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMediaPlayer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MediaAssets",L"MediaPlayer",
               &Z_Registration_Info_UClass_UMediaPlayer.InnerSingleton,
               UMediaPlayer::StaticRegisterNativesUMediaPlayer,0x1e8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMediaPlayer>,
               InternalVTableHelperCtorCaller<UMediaPlayer>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMediaPlayer.InnerSingleton;
}

// Z_Construct_UFunction_UMediaSoundComponent_GetNormalizedSpectralData @ 146c151d0

UFunction * __cdecl Z_Construct_UFunction_UMediaSoundComponent_GetNormalizedSpectralData(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMediaSoundComponent_GetNormalizedSpectralData_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateAudioCaptureDevices @ 146c15210

UFunction * __cdecl
Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateAudioCaptureDevices(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateAudioCaptureDevices_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMediaPlayer_GetVideoTrackFrameRates @ 146c15250

UFunction * __cdecl Z_Construct_UFunction_UMediaPlayer_GetVideoTrackFrameRates(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMediaPlayer_GetVideoTrackFrameRates_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMediaPlayer_GetVideoTrackType @ 146c15290

UFunction * __cdecl Z_Construct_UFunction_UMediaPlayer_GetVideoTrackType(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMediaPlayer_GetVideoTrackType_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateVideoCaptureDevices @ 146c152d0

UFunction * __cdecl
Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateVideoCaptureDevices(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateVideoCaptureDevices_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMediaSoundComponent_GetSpectralData @ 146c15310

UFunction * __cdecl Z_Construct_UFunction_UMediaSoundComponent_GetSpectralData(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMediaSoundComponent_GetSpectralData_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bInEnvelopeFollowing_SetBit @ 146c15350

void __cdecl
Z_Construct_UFunction_UMediaSoundComponent_SetEnableEnvelopeFollowing_Statics::
NewProp_bInEnvelopeFollowing_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UMediaPlayer_GetViewRotation @ 146c15360

UFunction * __cdecl Z_Construct_UFunction_UMediaPlayer_GetViewRotation(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMediaPlayer_GetViewRotation_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateWebcamCaptureDevices @ 146c153a0

UFunction * __cdecl
Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateWebcamCaptureDevices(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateWebcamCaptureDevices_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 146c153e0

void __cdecl
Z_Construct_UFunction_UMediaPlayer_HasError_Statics::NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UMediaSoundComponent_SetEnableEnvelopeFollowing @ 146c153f0

UFunction * __cdecl Z_Construct_UFunction_UMediaSoundComponent_SetEnableEnvelopeFollowing(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMediaSoundComponent_SetEnableEnvelopeFollowing_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bInSpectralAnalysisEnabled_SetBit @ 146c154e0

void __cdecl
Z_Construct_UFunction_UMediaSoundComponent_SetEnableSpectralAnalysis_Statics::
NewProp_bInSpectralAnalysisEnabled_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UMediaPlayer_HasError @ 146c154f0

UFunction * __cdecl Z_Construct_UFunction_UMediaPlayer_HasError(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UMediaPlayer_HasError_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 146c15530

void __cdecl
Z_Construct_UFunction_UMediaPlayer_IsBuffering_Statics::NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UMediaSoundComponent_SetEnableSpectralAnalysis @ 146c15540

UFunction * __cdecl Z_Construct_UFunction_UMediaSoundComponent_SetEnableSpectralAnalysis(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMediaSoundComponent_SetEnableSpectralAnalysis_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMediaPlayer_IsBuffering @ 146c15580

UFunction * __cdecl Z_Construct_UFunction_UMediaPlayer_IsBuffering(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UMediaPlayer_IsBuffering_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 146c155c0

void __cdecl
Z_Construct_UFunction_UMediaPlayer_IsClosed_Statics::NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UMediaSoundComponent_SetEnvelopeFollowingsettings @ 146c155d0

UFunction * __cdecl Z_Construct_UFunction_UMediaSoundComponent_SetEnvelopeFollowingsettings(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMediaSoundComponent_SetEnvelopeFollowingsettings_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMediaPlayer_IsClosed @ 146c15690

UFunction * __cdecl Z_Construct_UFunction_UMediaPlayer_IsClosed(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UMediaPlayer_IsClosed_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 146c156d0

void __cdecl
Z_Construct_UFunction_UMediaPlayer_IsConnecting_Statics::NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UMediaSoundComponent_SetMediaPlayer @ 146c156e0

UFunction * __cdecl Z_Construct_UFunction_UMediaSoundComponent_SetMediaPlayer(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMediaSoundComponent_SetMediaPlayer_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMediaPlayer_IsConnecting @ 146c15720

UFunction * __cdecl Z_Construct_UFunction_UMediaPlayer_IsConnecting(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UMediaPlayer_IsConnecting_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 146c15760

void __cdecl
Z_Construct_UFunction_UMediaPlayer_IsLooping_Statics::NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UMediaSoundComponent_SetSpectralAnalysisSettings @ 146c15770

UFunction * __cdecl Z_Construct_UFunction_UMediaSoundComponent_SetSpectralAnalysisSettings(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMediaSoundComponent_SetSpectralAnalysisSettings_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMediaPlayer_IsLooping @ 146c157b0

UFunction * __cdecl Z_Construct_UFunction_UMediaPlayer_IsLooping(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UMediaPlayer_IsLooping_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 146c157f0

void __cdecl
Z_Construct_UFunction_UMediaPlayer_IsPaused_Statics::NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewProp_DynamicRateAdjustment_SetBit @ 146c15800

void __cdecl
Z_Construct_UClass_UMediaSoundComponent_Statics::NewProp_DynamicRateAdjustment_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x8c4) = 1;
  return;
}

// Z_Construct_UFunction_UMediaPlayer_IsPaused @ 146c15810

UFunction * __cdecl Z_Construct_UFunction_UMediaPlayer_IsPaused(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UMediaPlayer_IsPaused_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 146c15850

void __cdecl
Z_Construct_UFunction_UMediaPlayer_IsPlaying_Statics::NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UMediaPlayer_IsPlaying @ 146c15860

UFunction * __cdecl Z_Construct_UFunction_UMediaPlayer_IsPlaying(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UMediaPlayer_IsPlaying_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 146c158a0

void __cdecl
Z_Construct_UFunction_UMediaPlayer_IsPreparing_Statics::NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewProp_bOverride_SetBit @ 146c158b0

void __cdecl
Z_Construct_UScriptStruct_FMediaSourceCacheSettings_Statics::NewProp_bOverride_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewStructOps @ 146c158c0

void * __cdecl Z_Construct_UScriptStruct_FMediaSourceCacheSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMediaSourceCacheSettings,&UE::CoreUObject::Private::Construct<FMediaSourceCacheSettings>,&UE::CoreUObject::Private::ConstructForTests<FMediaSourceCacheSettings>,&UE::CoreUObject::Private::Destruct<FMediaSourceCacheSettings>,&UE::CoreUObject::Private::Copy<FMediaSourceCacheSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UMediaPlayer_IsPreparing @ 146c15900

UFunction * __cdecl Z_Construct_UFunction_UMediaPlayer_IsPreparing(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UMediaPlayer_IsPreparing_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 146c15940

void __cdecl
Z_Construct_UFunction_UMediaPlayer_IsReady_Statics::NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UMediaPlayer_IsReady @ 146c15950

UFunction * __cdecl Z_Construct_UFunction_UMediaPlayer_IsReady(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UMediaPlayer_IsReady_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 146c15990

void __cdecl
Z_Construct_UFunction_UMediaPlayer_Next_Statics::NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UMediaPlayer_Next @ 146c159a0

UFunction * __cdecl Z_Construct_UFunction_UMediaPlayer_Next(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UMediaPlayer_Next_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 146c159e0

void __cdecl
Z_Construct_UFunction_UMediaPlayer_OpenFile_Statics::NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// Z_Construct_UFunction_UMediaPlayer_OpenFile @ 146c159f0

UFunction * __cdecl Z_Construct_UFunction_UMediaPlayer_OpenFile(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UMediaPlayer_OpenFile_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 146c15a30

void __cdecl
Z_Construct_UFunction_UMediaPlayer_OpenPlaylist_Statics::NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// Z_Construct_UFunction_UMediaPlayer_OpenPlaylist @ 146c15a40

UFunction * __cdecl Z_Construct_UFunction_UMediaPlayer_OpenPlaylist(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UMediaPlayer_OpenPlaylist_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 146c15a80

void __cdecl
Z_Construct_UFunction_UMediaPlayer_OpenPlaylistIndex_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  return;
}

// Z_Construct_UFunction_UMediaPlayer_OpenPlaylistIndex @ 146c15a90

UFunction * __cdecl Z_Construct_UFunction_UMediaPlayer_OpenPlaylistIndex(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMediaPlayer_OpenPlaylistIndex_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 146c15ad0

void __cdecl
Z_Construct_UFunction_UMediaPlayer_OpenSource_Statics::NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// Z_Construct_UFunction_UMediaPlayer_OpenSource @ 146c15ae0

UFunction * __cdecl Z_Construct_UFunction_UMediaPlayer_OpenSource(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UMediaPlayer_OpenSource_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bSuccess_SetBit @ 146c15b20

void __cdecl
Z_Construct_UFunction_UMediaPlayer_OpenSourceLatent_Statics::NewProp_bSuccess_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xf0) = 1;
  return;
}

// Z_Construct_UFunction_UMediaPlayer_OpenSourceLatent @ 146c15b30

UFunction * __cdecl Z_Construct_UFunction_UMediaPlayer_OpenSourceLatent(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMediaPlayer_OpenSourceLatent_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 146c15b70

void __cdecl
Z_Construct_UFunction_UMediaPlayer_OpenSourceWithOptions_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xd0) = 1;
  return;
}

// Z_Construct_UFunction_UMediaPlayer_OpenSourceWithOptions @ 146c15b80

UFunction * __cdecl Z_Construct_UFunction_UMediaPlayer_OpenSourceWithOptions(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMediaPlayer_OpenSourceWithOptions_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 146c15bc0

void __cdecl
Z_Construct_UFunction_UMediaPlayer_OpenUrl_Statics::NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// Z_Construct_UFunction_UMediaPlayer_OpenUrl @ 146c15bd0

UFunction * __cdecl Z_Construct_UFunction_UMediaPlayer_OpenUrl(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UMediaPlayer_OpenUrl_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 146c15c10

void __cdecl
Z_Construct_UFunction_UMediaPlayer_Pause_Statics::NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UMediaPlayer_Pause @ 146c15c20

UFunction * __cdecl Z_Construct_UFunction_UMediaPlayer_Pause(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UMediaPlayer_Pause_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 146c15c60

void __cdecl
Z_Construct_UFunction_UMediaPlayer_Play_Statics::NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UMediaPlayer_Play @ 146c15c70

UFunction * __cdecl Z_Construct_UFunction_UMediaPlayer_Play(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UMediaPlayer_Play_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMediaPlayer_PlayAndSeek @ 146c15d60

UFunction * __cdecl Z_Construct_UFunction_UMediaPlayer_PlayAndSeek(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UMediaPlayer_PlayAndSeek_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 146c15da0

void __cdecl
Z_Construct_UFunction_UMediaPlayer_Previous_Statics::NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UMediaPlayer_Previous @ 146c15db0

UFunction * __cdecl Z_Construct_UFunction_UMediaPlayer_Previous(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UMediaPlayer_Previous_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 146c15df0

void __cdecl
Z_Construct_UFunction_UMediaPlayer_Reopen_Statics::NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UMediaPlayer_Reopen @ 146c15e00

UFunction * __cdecl Z_Construct_UFunction_UMediaPlayer_Reopen(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UMediaPlayer_Reopen_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 146c15e40

void __cdecl
Z_Construct_UFunction_UMediaPlayer_Rewind_Statics::NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UMediaPlayer_Rewind @ 146c15e50

UFunction * __cdecl Z_Construct_UFunction_UMediaPlayer_Rewind(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UMediaPlayer_Rewind_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 146c15e90

void __cdecl
Z_Construct_UFunction_UMediaPlayer_Scrub_Statics::NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// Z_Construct_UClass_UMediaPlaylist_NoRegister @ 146c15ea0

UClass * __cdecl Z_Construct_UClass_UMediaPlaylist_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMediaPlaylist.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MediaAssets",L"MediaPlaylist",
               &Z_Registration_Info_UClass_UMediaPlaylist.InnerSingleton,
               UMediaPlaylist::StaticRegisterNativesUMediaPlaylist,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMediaPlaylist>,
               InternalVTableHelperCtorCaller<UMediaPlaylist>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMediaPlaylist.InnerSingleton;
}

// Z_Construct_UFunction_UMediaPlayer_Scrub @ 146c15f50

UFunction * __cdecl Z_Construct_UFunction_UMediaPlayer_Scrub(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UMediaPlayer_Scrub_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 146c16040

void __cdecl
Z_Construct_UFunction_UMediaPlayer_Seek_Statics::NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// Z_Construct_UFunction_UMediaPlayer_Seek @ 146c16050

UFunction * __cdecl Z_Construct_UFunction_UMediaPlayer_Seek(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UMediaPlayer_Seek_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 146c16090

void __cdecl
Z_Construct_UFunction_UMediaPlayer_SelectTrack_Statics::NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// Z_Construct_UFunction_UMediaPlayer_SelectTrack @ 146c160a0

UFunction * __cdecl Z_Construct_UFunction_UMediaPlayer_SelectTrack(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UMediaPlayer_SelectTrack_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMediaPlayer_SetBlockOnTime @ 146c160e0

UFunction * __cdecl Z_Construct_UFunction_UMediaPlayer_SetBlockOnTime(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMediaPlayer_SetBlockOnTime_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMediaPlayer_SetDesiredPlayerName @ 146c16120

UFunction * __cdecl Z_Construct_UFunction_UMediaPlayer_SetDesiredPlayerName(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMediaPlayer_SetDesiredPlayerName_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_Looping_SetBit @ 146c16160

void __cdecl
Z_Construct_UFunction_UMediaPlayer_SetLooping_Statics::NewProp_Looping_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 146c16170

void __cdecl
Z_Construct_UFunction_UMediaPlayer_SetLooping_Statics::NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 1) = 1;
  return;
}

// Z_Construct_UFunction_UMediaPlayer_SetLooping @ 146c16180

UFunction * __cdecl Z_Construct_UFunction_UMediaPlayer_SetLooping(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UMediaPlayer_SetLooping_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMediaPlayer_SetMediaOptions @ 146c161c0

UFunction * __cdecl Z_Construct_UFunction_UMediaPlayer_SetMediaOptions(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMediaPlayer_SetMediaOptions_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 146c16200

void __cdecl
Z_Construct_UFunction_UMediaPlayer_SetNativeVolume_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 4) = 1;
  return;
}

// Z_Construct_UFunction_UMediaPlayer_SetNativeVolume @ 146c16210

UFunction * __cdecl Z_Construct_UFunction_UMediaPlayer_SetNativeVolume(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMediaPlayer_SetNativeVolume_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 146c16250

void __cdecl
Z_Construct_UFunction_UMediaPlayer_SetPlaybackTimeRange_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// Z_Construct_UFunction_UMediaPlayer_SetPlaybackTimeRange @ 146c16260

UFunction * __cdecl Z_Construct_UFunction_UMediaPlayer_SetPlaybackTimeRange(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMediaPlayer_SetPlaybackTimeRange_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 146c162a0

void __cdecl
Z_Construct_UFunction_UMediaPlayer_SetRate_Statics::NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 4) = 1;
  return;
}

// Z_Construct_UFunction_UMediaPlayer_SetRate @ 146c162b0

UFunction * __cdecl Z_Construct_UFunction_UMediaPlayer_SetRate(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UMediaPlayer_SetRate_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMediaPlayer_SetTimeDelay @ 146c16440

UFunction * __cdecl Z_Construct_UFunction_UMediaPlayer_SetTimeDelay(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UMediaPlayer_SetTimeDelay_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 146c16480

void __cdecl
Z_Construct_UFunction_UMediaPlayer_SetTrackFormat_Statics::NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  return;
}

// Z_Construct_UFunction_UMediaPlayer_SetTrackFormat @ 146c16550

UFunction * __cdecl Z_Construct_UFunction_UMediaPlayer_SetTrackFormat(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMediaPlayer_SetTrackFormat_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 146c17400

void __cdecl
Z_Construct_UFunction_UMediaPlayer_SetVideoTrackFrameRate_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  return;
}

// `scalar_deleting_destructor' @ 146c17410

void * __thiscall
FMediaPlaylistTest::_scalar_deleting_destructor_(FMediaPlaylistTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// Z_Construct_UClass_UMediaPlayer @ 146c17450

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMediaPlayer(void)

{
  if (Z_Registration_Info_UClass_UMediaPlayer.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMediaPlayer.OuterSingleton,
               &Z_Construct_UClass_UMediaPlayer_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMediaPlayer.OuterSingleton;
}

// Z_Construct_UClass_UMediaTimeStampInfo @ 146c17490

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMediaTimeStampInfo(void)

{
  if (Z_Registration_Info_UClass_UMediaTimeStampInfo.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMediaTimeStampInfo.OuterSingleton,
               &Z_Construct_UClass_UMediaTimeStampInfo_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMediaTimeStampInfo.OuterSingleton;
}

// Z_Construct_UEnum_MediaAssets_EMediaPlayerTrack @ 146c174d0

UEnum * __cdecl Z_Construct_UEnum_MediaAssets_EMediaPlayerTrack(void)

{
  if (Z_Registration_Info_UEnum_EMediaPlayerTrack.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EMediaPlayerTrack.InnerSingleton,
               &Z_Construct_UEnum_MediaAssets_EMediaPlayerTrack_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EMediaPlayerTrack.InnerSingleton;
}

// Z_Construct_UEnum_MediaAssets_EMediaTimeRangeBPType @ 146c17510

UEnum * __cdecl Z_Construct_UEnum_MediaAssets_EMediaTimeRangeBPType(void)

{
  if (Z_Registration_Info_UEnum_EMediaTimeRangeBPType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EMediaTimeRangeBPType.InnerSingleton,
               &Z_Construct_UEnum_MediaAssets_EMediaTimeRangeBPType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EMediaTimeRangeBPType.InnerSingleton;
}

// Z_Construct_UFunction_UMediaPlayer_SetVideoTrackFrameRate @ 146c17550

UFunction * __cdecl Z_Construct_UFunction_UMediaPlayer_SetVideoTrackFrameRate(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMediaPlayer_SetVideoTrackFrameRate_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UScriptStruct_FMediaMetadataItemBPT @ 146c17590

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMediaMetadataItemBPT(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMediaMetadataItemBPT.InnerSingleton == (UScriptStruct *)0x0
     ) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMediaMetadataItemBPT.InnerSingleton,
               &Z_Construct_UScriptStruct_FMediaMetadataItemBPT_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMediaMetadataItemBPT.InnerSingleton != (UScriptStruct *)0x0
     ) {
    return Z_Registration_Info_UScriptStruct_FMediaMetadataItemBPT.InnerSingleton;
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

// Z_Construct_UScriptStruct_FMediaMetadataItemsBPT @ 146c17610

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMediaMetadataItemsBPT(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMediaMetadataItemsBPT.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMediaMetadataItemsBPT.InnerSingleton,
               &Z_Construct_UScriptStruct_FMediaMetadataItemsBPT_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMediaMetadataItemsBPT.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMediaMetadataItemsBPT.InnerSingleton;
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

// NewProp_Absolute_SetBit @ 146c17690

void __cdecl
Z_Construct_UFunction_UMediaPlayer_SetViewField_Statics::NewProp_Absolute_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 146c176a0

void __cdecl
Z_Construct_UFunction_UMediaPlayer_SetViewField_Statics::NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 9) = 1;
  return;
}

// Z_Construct_UFunction_UMediaPlayer_SetViewField @ 146c176b0

UFunction * __cdecl Z_Construct_UFunction_UMediaPlayer_SetViewField(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UMediaPlayer_SetViewField_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// NewProp_Absolute_SetBit @ 146c176f0

void __cdecl
Z_Construct_UFunction_UMediaPlayer_SetViewRotation_Statics::NewProp_Absolute_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 146c17700

void __cdecl
Z_Construct_UFunction_UMediaPlayer_SetViewRotation_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x19) = 1;
  return;
}

// Z_Construct_UFunction_UMediaPlayer_SetViewRotation @ 146c17710

UFunction * __cdecl Z_Construct_UFunction_UMediaPlayer_SetViewRotation(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMediaPlayer_SetViewRotation_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 146c17750

void __cdecl
Z_Construct_UFunction_UMediaPlayer_SupportsPlaybackTimeRange_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// EMediaPlayerTrack_StaticEnum @ 146c17760

UEnum * __cdecl EMediaPlayerTrack_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMediaPlayerTrack.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MediaAssets();
    Z_Registration_Info_UEnum_EMediaPlayerTrack.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MediaAssets_EMediaPlayerTrack,(UObject *)pUVar1,
                       L"EMediaPlayerTrack");
  }
  return Z_Registration_Info_UEnum_EMediaPlayerTrack.OuterSingleton;
}

// Z_Construct_UFunction_UMediaPlayer_SupportsPlaybackTimeRange @ 146c177a0

UFunction * __cdecl Z_Construct_UFunction_UMediaPlayer_SupportsPlaybackTimeRange(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMediaPlayer_SupportsPlaybackTimeRange_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_Unthinned_SetBit @ 146c177e0

void __cdecl
Z_Construct_UFunction_UMediaPlayer_SupportsRate_Statics::NewProp_Unthinned_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 4) = 1;
  return;
}

// EMediaTimeRangeBPType_StaticEnum @ 146c177f0

UEnum * __cdecl EMediaTimeRangeBPType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMediaTimeRangeBPType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MediaAssets();
    Z_Registration_Info_UEnum_EMediaTimeRangeBPType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MediaAssets_EMediaTimeRangeBPType,(UObject *)pUVar1,
                       L"EMediaTimeRangeBPType");
  }
  return Z_Registration_Info_UEnum_EMediaTimeRangeBPType.OuterSingleton;
}

// NewProp_ReturnValue_SetBit @ 146c17830

void __cdecl
Z_Construct_UFunction_UMediaPlayer_SupportsRate_Statics::NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 5) = 1;
  return;
}

// Z_Construct_UFunction_UMediaPlayer_SupportsRate @ 146c17840

UFunction * __cdecl Z_Construct_UFunction_UMediaPlayer_SupportsRate(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UMediaPlayer_SupportsRate_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 146c17880

void __cdecl
Z_Construct_UFunction_UMediaPlayer_SupportsScrubbing_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UMediaPlayer_SupportsScrubbing @ 146c17890

UFunction * __cdecl Z_Construct_UFunction_UMediaPlayer_SupportsScrubbing(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMediaPlayer_SupportsScrubbing_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 146c178d0

void __cdecl
Z_Construct_UFunction_UMediaPlayer_SupportsSeeking_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewStructOps @ 146c178e0

void * __cdecl Z_Construct_UScriptStruct_FMediaMetadataItemBPT_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x40;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMediaMetadataItemBPT,&UE::CoreUObject::Private::Construct<FMediaMetadataItemBPT>,&UE::CoreUObject::Private::ConstructForTests<FMediaMetadataItemBPT>,&UE::CoreUObject::Private::Destruct<FMediaMetadataItemBPT>,&UE::CoreUObject::Private::Copy<FMediaMetadataItemBPT>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UMediaPlayer_SupportsSeeking @ 146c17920

UFunction * __cdecl Z_Construct_UFunction_UMediaPlayer_SupportsSeeking(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMediaPlayer_SupportsSeeking_Statics::FuncParams);
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 146c17960

void * __thiscall
FMediaTextureTracker::_scalar_deleting_destructor_(FMediaTextureTracker *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7FMediaTextureTracker__6B_;
  pFVar1 = (this->MediaTextures).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->MapTextureToObject).field_0x48 = 0;
  pvVar2 = *(void **)&(this->MapTextureToObject).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UMediaTexture,FWeakObjectPtr>,TArray<TWeakPtr<FMediaTextureTrackerObject,1>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UMediaTexture,FWeakObjectPtr>,TArray<TWeakPtr<FMediaTextureTrackerObject,1>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UMediaTexture,FWeakObjectPtr>,TArray<TWeakPtr<FMediaTextureTrackerObject,1>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->MapTextureToObject);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x68);
  }
  return this;
}

// EMediaTextureVisibleMipsTiles_StaticEnum @ 146c17aa0

UEnum * __cdecl EMediaTextureVisibleMipsTiles_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMediaTextureVisibleMipsTiles.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MediaAssets();
    Z_Registration_Info_UEnum_EMediaTextureVisibleMipsTiles.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MediaAssets_EMediaTextureVisibleMipsTiles,(UObject *)pUVar1
                       ,L"EMediaTextureVisibleMipsTiles");
  }
  return Z_Registration_Info_UEnum_EMediaTextureVisibleMipsTiles.OuterSingleton;
}

// NewProp_NativeAudioOut_SetBit @ 146c17ae0

void __cdecl Z_Construct_UClass_UMediaPlayer_Statics::NewProp_NativeAudioOut_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x150) = 1;
  return;
}

// NewProp_PlayOnOpen_SetBit @ 146c17af0

void __cdecl Z_Construct_UClass_UMediaPlayer_Statics::NewProp_PlayOnOpen_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x151) = 1;
  return;
}

// NewProp_Shuffle_SetBit @ 146c17b00

void __cdecl Z_Construct_UClass_UMediaPlayer_Statics::NewProp_Shuffle_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x154) = *(uint *)((longlong)param_1 + 0x154) | 1;
  return;
}

// NewProp_Loop_SetBit @ 146c17b10

void __cdecl Z_Construct_UClass_UMediaPlayer_Statics::NewProp_Loop_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x154) = *(uint *)((longlong)param_1 + 0x154) | 2;
  return;
}

// Z_Construct_UClass_UMediaPlayerProxyInterface @ 146c17b20

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMediaPlayerProxyInterface(void)

{
  if (Z_Registration_Info_UClass_UMediaPlayerProxyInterface.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMediaPlayerProxyInterface.OuterSingleton,
               &Z_Construct_UClass_UMediaPlayerProxyInterface_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMediaPlayerProxyInterface.OuterSingleton;
}

// NewStructOps @ 146c17b60

void * __cdecl Z_Construct_UScriptStruct_FMediaMetadataItemsBPT_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMediaMetadataItemsBPT,&UE::CoreUObject::Private::Construct<FMediaMetadataItemsBPT>,&UE::CoreUObject::Private::ConstructForTests<FMediaMetadataItemsBPT>,&UE::CoreUObject::Private::Destruct<FMediaMetadataItemsBPT>,&UE::CoreUObject::Private::Copy<FMediaMetadataItemsBPT>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// ConstructItems<FMediaMetadataItemBPT,FMediaMetadataItemBPT,int> @ 146c182a0

void __cdecl
ConstructItems<FMediaMetadataItemBPT,FMediaMetadataItemBPT,int>
          (void *param_1,FMediaMetadataItemBPT *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  FString *pFVar3;
  FString *this;
  
  if (param_3 != 0) {
    pFVar3 = &param_2->MimeType;
    this = (FString *)((longlong)param_1 + 0x10);
    do {
      FString::FString((FString *)
                       ((longlong)param_1 + (-0x10 - (longlong)param_2) + (longlong)pFVar3),
                       (FString *)(pFVar3 + -1));
      FString::FString(this,pFVar3);
      FString::FString(this + 1,pFVar3 + 1);
      this[2].Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      iVar2 = ((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(pFVar3 + 2))->ArrayNum;
      piVar1 = &this[2].Data.ArrayMax;
      _Src = (((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(pFVar3 + 2))->AllocatorInstance
             ).Data;
      this[2].Data.ArrayNum = iVar2;
      if (iVar2 == 0) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,iVar2,0,(ForAnyElementType *)(this + 2),iVar2,piVar1);
        memcpy(this[2].Data.AllocatorInstance.Data,_Src,(longlong)iVar2);
      }
      this = this + 4;
      pFVar3 = pFVar3 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DestructItems<FMediaCaptureDevice,int> @ 146c183e0

void __cdecl DestructItems<FMediaCaptureDevice,int>(FMediaCaptureDevice *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  ITextData *pIVar2;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->Url).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pIVar2 = (param_1->DisplayName).TextData.Reference;
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))();
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FMediaCaptureDeviceInfo,int> @ 146c18430

void __cdecl
DestructItems<FMediaCaptureDeviceInfo,int>(FMediaCaptureDeviceInfo *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  ITextData *pIVar2;
  FString *pFVar3;
  
  if (param_2 != 0) {
    pFVar3 = &param_1->Info;
    do {
      pFVar1 = (((FString *)((longlong)(pFVar3 + 1) + 8))->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (pFVar3->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pIVar2 = (((FMediaCaptureDeviceInfo *)(pFVar3 + -1))->DisplayName).TextData.Reference;
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 0x10))();
      }
      pFVar3 = (FString *)((longlong)(pFVar3 + 3) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FMediaMetadataItemBPT,int> @ 146c18490

void __cdecl DestructItems<FMediaMetadataItemBPT,int>(FMediaMetadataItemBPT *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  
  if (param_2 != 0) {
    pFVar2 = &param_1->StringData;
    do {
      pFVar1 = (((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(pFVar2 + 1))->
               AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = pFVar2[-1].Data.AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((FMediaMetadataItemBPT *)(pFVar2 + -2))->LanguageCode).Data.AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar2 = pFVar2 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TGPUsyncedDataDeleter<TSharedPtr<IMediaTextureSample,1>_>::FRetiringObjectInfo,int> @ 146c18500

void __cdecl
DestructItems<TGPUsyncedDataDeleter<TSharedPtr<IMediaTextureSample,1>_>::FRetiringObjectInfo,int>
          (FRetiringObjectInfo *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &(param_1->Object).SharedReferenceCount;
    do {
      if (*(FRHIResource **)(pFVar1 + 1) != (FRHIResource *)0x0) {
        FRHIResource::Release(*(FRHIResource **)(pFVar1 + 1));
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TDelegate<UMediaPlayer_*___cdecl(UObject_*,UObject_*_&),FDefaultDelegateUserPolicy>,int> @ 146c18550

void __cdecl
DestructItems<TDelegate<UMediaPlayer_*___cdecl(UObject_*,UObject_*_&),FDefaultDelegateUserPolicy>,int>
          (TDelegate<UMediaPlayer_*___cdecl(UObject_*,UObject_*_&),FDefaultDelegateUserPolicy>
           *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_1);
    if (*(void **)&((TDelegateBase<FNotThreadSafeDelegateMode> *)param_1)->field_0x8 != (void *)0x0)
    {
      FMemory::Free(*(void **)&((TDelegateBase<FNotThreadSafeDelegateMode> *)param_1)->field_0x8);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)param_1);
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TWeakPtr<FMediaTextureTrackerObject,1>,int> @ 146c185a0

void __cdecl
DestructItems<TWeakPtr<FMediaTextureTrackerObject,1>,int>
          (TWeakPtr<FMediaTextureTrackerObject,1> *param_1,int param_2)

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

// Enqueue<TRenderCommandTag<`UMediaTexture::TickResource'::__l2::TSTR_MediaTextureResourceRender500>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 146c18de0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_UMediaTexture::TickResource_::__l2::TSTR_MediaTextureResourceRender500>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`UMediaTexture::TickResource'::__l2::TSTR_MediaTextureResourceRender500>
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
      if (bVar8) goto LAB_146c18f31;
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
    goto LAB_146c19125;
  }
LAB_146c18f31:
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
LAB_146c1900f:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_146c1900f;
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
LAB_146c19125:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`UMediaTexture::BeginDestroy'::__l11::TSTR_MediaTextureUnregisterGuid261>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 146c19160

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_UMediaTexture::BeginDestroy_::__l11::TSTR_MediaTextureUnregisterGuid261>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`UMediaTexture::BeginDestroy'::__l11::TSTR_MediaTextureUnregisterGuid261>
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
      if (bVar8) goto LAB_146c192b1;
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
    goto LAB_146c194a5;
  }
LAB_146c192b1:
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
LAB_146c1938f:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_146c1938f;
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
LAB_146c194a5:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// FindExistingActionWithPredicate<FLatentOpenMediaSourceAction,`FLatentActionManager::FindExistingAction<FLatentOpenMediaSourceAction>'::__l2::FFirstItemPredicate> @ 146c194e0

FLatentOpenMediaSourceAction * __thiscall
FLatentActionManager::
FindExistingActionWithPredicate<FLatentOpenMediaSourceAction,_FLatentActionManager::FindExistingAction<FLatentOpenMediaSourceAction>_::__l2::FFirstItemPredicate>
          (FLatentActionManager *this,UObject *param_1,int param_2,FFirstItemPredicate *param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  uint uVar6;
  longlong *plVar7;
  undefined1 *puVar8;
  longlong *plVar9;
  FWeakObjectPtr local_res8;
  UObject *local_res10;
  int iStack_2c;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_1);
  }
  plVar7 = (longlong *)0x0;
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_1);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  if (*(int *)&(this->ObjectToActionListMap).field_0x8 ==
      *(int *)&(this->ObjectToActionListMap).field_0x34) {
    return (FLatentOpenMediaSourceAction *)0x0;
  }
  puVar8 = *(undefined1 **)&(this->ObjectToActionListMap).field_0x40;
  if (puVar8 == (undefined1 *)0x0) {
    puVar8 = &(this->ObjectToActionListMap).field_0x38;
  }
  iVar1 = *(int *)(puVar8 + (((ulonglong)local_res8 >> 0x20 ^ (ulonglong)local_res8 & 0xffffffff) &
                            (ulonglong)(*(int *)&(this->ObjectToActionListMap).field_0x48 - 1)) * 4)
  ;
  if (iVar1 == -1) {
    return (FLatentOpenMediaSourceAction *)0x0;
  }
  while( true ) {
    puVar4 = (undefined8 *)((longlong)iVar1 * 0x20 + *(longlong *)&this->ObjectToActionListMap);
    if (((int)*puVar4 == local_res8.ObjectIndex) &&
       ((int)((ulonglong)*puVar4 >> 0x20) == local_res8.ObjectSerialNumber)) break;
    iVar1 = *(int *)(puVar4 + 3);
    if (iVar1 == -1) {
      return (FLatentOpenMediaSourceAction *)0x0;
    }
  }
  if (iVar1 == -1) {
    return (FLatentOpenMediaSourceAction *)0x0;
  }
  plVar9 = puVar4 + 1;
  if (puVar4 == (undefined8 *)0x0) {
    plVar9 = plVar7;
  }
  if (plVar9 == (longlong *)0x0) {
    return (FLatentOpenMediaSourceAction *)0x0;
  }
  plVar9 = (longlong *)*plVar9;
  if (plVar9 == (longlong *)0x0) {
    return (FLatentOpenMediaSourceAction *)0x0;
  }
  if ((int)plVar9[9] == 0) {
    return (FLatentOpenMediaSourceAction *)0x0;
  }
  plVar5 = (longlong *)plVar9[8];
  if ((longlong *)plVar9[8] == (longlong *)0x0) {
    plVar5 = plVar9 + 7;
  }
  iStack_2c = *(int *)((longlong)plVar5 + ((longlong)(int)plVar9[9] - 1U & (longlong)param_2) * 4);
  iVar1 = iStack_2c;
  iVar3 = iStack_2c;
  if (iStack_2c != -1) {
    do {
      iVar1 = *(int *)(*plVar9 + 0x10 + (longlong)iVar3 * 0x18);
      if (*(int *)(*plVar9 + (longlong)iVar3 * 0x18) == param_2) break;
      iVar3 = iVar1;
    } while (iVar1 != -1);
  }
  if (iVar3 != -1) {
    while( true ) {
      uVar6 = (int)plVar7 + 1;
      plVar7 = (longlong *)(ulonglong)uVar6;
      if (iVar1 == -1) break;
      while (lVar2 = (longlong)iVar1, iVar1 = *(int *)(*plVar9 + 0x10 + lVar2 * 0x18),
            *(int *)(*plVar9 + lVar2 * 0x18) != param_2) {
        if (iVar1 == -1) goto LAB_146c19659;
      }
    }
LAB_146c19659:
    if (0 < (int)uVar6) {
      if (iStack_2c != -1) {
        do {
          iVar1 = *(int *)(*plVar9 + 0x10 + (longlong)iStack_2c * 0x18);
          if (*(int *)(*plVar9 + (longlong)iStack_2c * 0x18) == param_2) break;
          iStack_2c = iVar1;
        } while (iVar1 != -1);
      }
      if (iStack_2c != -1) {
        return *(FLatentOpenMediaSourceAction **)(*plVar9 + 8 + (longlong)iStack_2c * 0x18);
      }
    }
  }
  return (FLatentOpenMediaSourceAction *)0x0;
}

// InternalConstructor<UBaseMediaSource> @ 146c199b0

void __cdecl InternalConstructor<UBaseMediaSource>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined4 *)&this[2].field_0x8 = 0;
    *(undefined4 *)&this[2].field_0xc = 0x80;
    *(undefined4 *)&this[2].field_0x10 = 0xffffffff;
    *(undefined4 *)&this[2].field_0x14 = 0;
    *(undefined8 *)&this[2].field_0x20 = 0;
    *(undefined4 *)(this + 3) = 0;
    *(undefined ***)this = &UBaseMediaSource::_vftable__for__UObject__;
    *(undefined ***)(this + 1) = &UBaseMediaSource::_vftable__for__IMediaOptions__;
    *(undefined8 *)&this[3].field_0x8 = 0;
  }
  return;
}

// InternalConstructor<UFileMediaSource> @ 146c19a20

void __cdecl InternalConstructor<UFileMediaSource>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined4 *)&this[2].field_0x8 = 0;
    *(undefined4 *)&this[2].field_0xc = 0x80;
    *(undefined4 *)&this[2].field_0x10 = 0xffffffff;
    *(undefined4 *)&this[2].field_0x14 = 0;
    *(undefined8 *)&this[2].field_0x20 = 0;
    *(undefined4 *)(this + 3) = 0;
    *(undefined ***)this = &UFileMediaSource::_vftable__for__UObject__;
    *(undefined ***)(this + 1) = &UFileMediaSource::_vftable__for__IMediaOptions__;
    *(undefined8 *)&this[3].field_0x8 = 0;
    *(undefined8 *)&this[3].field_0x10 = 0;
    *(undefined8 *)&this[3].field_0x18 = 0;
    *(undefined8 *)(this + 4) = 0;
    *(undefined8 *)&this[4].field_0x8 = 0;
  }
  return;
}

// InternalConstructor<UMediaBlueprintFunctionLibrary> @ 146c19ab0

void __cdecl InternalConstructor<UMediaBlueprintFunctionLibrary>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &___7UMediaBlueprintFunctionLibrary__6B_;
  }
  return;
}

// InternalConstructor<UMediaComponent> @ 146c19ae0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __cdecl InternalConstructor<UMediaComponent>(FObjectInitializer *param_1)

{
  if ((UMediaComponent *)param_1->Obj != (UMediaComponent *)0x0) {
    UMediaComponent::UMediaComponent((UMediaComponent *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UMediaPlayer> @ 146c19b00

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __cdecl InternalConstructor<UMediaPlayer>(FObjectInitializer *param_1)

{
  if ((UMediaPlayer *)param_1->Obj != (UMediaPlayer *)0x0) {
    UMediaPlayer::UMediaPlayer((UMediaPlayer *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UMediaPlayerProxyInterface> @ 146c19b20

void __cdecl InternalConstructor<UMediaPlayerProxyInterface>(FObjectInitializer *param_1)

{
  UInterface *this;
  
  this = (UInterface *)param_1->Obj;
  if (this != (UInterface *)0x0) {
    UInterface::UInterface(this,param_1);
    *(undefined ***)this = &___7UMediaPlayerProxyInterface__6B_;
  }
  return;
}

// InternalConstructor<UMediaPlaylist> @ 146c19b50

void __cdecl InternalConstructor<UMediaPlaylist>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UMediaPlaylist__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
  }
  return;
}

// InternalConstructor<UMediaSoundComponent> @ 146c19b90

void __cdecl InternalConstructor<UMediaSoundComponent>(FObjectInitializer *param_1)

{
  byte *pbVar1;
  USynthComponent *this;
  
  this = (USynthComponent *)param_1->Obj;
  if (this != (USynthComponent *)0x0) {
    USynthComponent::USynthComponent(this,param_1);
    *(undefined4 *)&this[1]._padding_ = 1;
    this->_padding_ = (longlong)&UMediaSoundComponent::_vftable__for__UObject__;
    *(undefined1 *)((longlong)&this[1]._padding_ + 4) = 0;
    this->_padding_ = (longlong)&UMediaSoundComponent::_vftable__for__IInterface_AssetUserData__;
    *(undefined4 *)&this[1]._padding_ = 0x322bcc77;
    this->_padding_ = (longlong)&UMediaSoundComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    *(undefined1 *)((longlong)&this[1]._padding_ + 4) = 1;
    *(undefined4 *)&this[1]._padding_ = 0x3f7eb852;
    *(undefined1 *)((longlong)&this[1]._padding_ + 4) = 0;
    *(undefined4 *)&this[1]._padding_ = 0x3f80a3d7;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this[1]._padding_,4000);
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = -0x8000000000000000;
    pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
    *pbVar1 = *pbVar1 | 2;
    pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
    *pbVar1 = *pbVar1 | 8;
    *(undefined4 *)&this[1]._padding_ = 0x3f800000;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0;
    *(undefined2 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined1 *)&this[1]._padding_ = 2;
    *(undefined2 *)((longlong)&this[1]._padding_ + 2) = 0x200;
    *(undefined4 *)&this[1]._padding_ = 10;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 100;
  }
  return;
}

// InternalConstructor<UMediaSource> @ 146c19cf0

void __cdecl InternalConstructor<UMediaSource>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &UMediaSource::_vftable__for__UObject__;
    *(undefined ***)(this + 1) = &UMediaSource::_vftable__for__IMediaOptions__;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined4 *)&this[2].field_0x8 = 0;
    *(undefined4 *)&this[2].field_0xc = 0x80;
    *(undefined4 *)&this[2].field_0x10 = 0xffffffff;
    *(undefined4 *)&this[2].field_0x14 = 0;
    *(undefined8 *)&this[2].field_0x20 = 0;
    *(undefined4 *)(this + 3) = 0;
  }
  return;
}

// InternalConstructor<UMediaSourceRendererInterface> @ 146c19d60

void __cdecl InternalConstructor<UMediaSourceRendererInterface>(FObjectInitializer *param_1)

{
  UInterface *this;
  
  this = (UInterface *)param_1->Obj;
  if (this != (UInterface *)0x0) {
    UInterface::UInterface(this,param_1);
    *(undefined ***)this = &___7UMediaSourceRendererInterface__6B_;
  }
  return;
}

// InternalConstructor<UMediaTexture> @ 146c19d90

void __cdecl InternalConstructor<UMediaTexture>(FObjectInitializer *param_1)

{
  UTexture *this;
  FLinearColor FVar1;
  
  this = (UTexture *)param_1->Obj;
  if (this != (UTexture *)0x0) {
    UTexture::UTexture(this,param_1);
    *(undefined1 *)((longlong)&this[1]._padding_ + 2) = 0;
    this->_padding_ = (longlong)&UMediaTexture::_vftable__for__UStreamableRenderAsset__;
    *(undefined2 *)&this[1]._padding_ = 0x101;
    this->_padding_ = (longlong)&UMediaTexture::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ = (longlong)&UMediaTexture::_vftable__for__IInterface_AsyncCompilation__;
    FVar1 = FLinearColor::Black;
    *(undefined2 *)((longlong)&this[1]._padding_ + 4) = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    ((FLinearColor_u_0 *)((longlong)&this[1]._padding_ + 4))->_s_0 =
         (FLinearColor_u_0_s_0)FVar1.field0_0x0;
    *(undefined1 *)((longlong)&this[1]._padding_ + 4) = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    FGuid::NewGuid((FGuid *)&this[1]._padding_);
    this[1]._padding_ = (longlong)UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined1 *)((longlong)&this[1]._padding_ + 1) = 0;
    this[1]._padding_ = 0;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this[1]._padding_,4000);
    this[1]._padding_ = -0x8000000000000000;
    *(byte *)&this->_padding_ = (byte)this->_padding_ | 1;
    this->SRGB = '\x01';
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined1 *)((longlong)&this[1]._padding_ + 4) = 0;
    this[1]._padding_ = 1;
  }
  return;
}

// InternalConstructor<UMediaTimeStampInfo> @ 146c19ee0

void __cdecl InternalConstructor<UMediaTimeStampInfo>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this);
    *(undefined ***)this = &___7UMediaTimeStampInfo__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
  }
  return;
}

// InternalConstructor<UPlatformMediaSource> @ 146c19f20

void __cdecl InternalConstructor<UPlatformMediaSource>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined4 *)&this[2].field_0x8 = 0;
    *(undefined4 *)&this[2].field_0xc = 0x80;
    *(undefined4 *)&this[2].field_0x10 = 0xffffffff;
    *(undefined4 *)&this[2].field_0x14 = 0;
    *(undefined8 *)&this[2].field_0x20 = 0;
    *(undefined4 *)(this + 3) = 0;
    *(undefined ***)this = &UPlatformMediaSource::_vftable__for__UObject__;
    *(undefined ***)(this + 1) = &UPlatformMediaSource::_vftable__for__IMediaOptions__;
    *(undefined8 *)&this[3].field_0x8 = 0;
  }
  return;
}

// InternalConstructor<UStreamMediaSource> @ 146c19f90

void __cdecl InternalConstructor<UStreamMediaSource>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined4 *)&this[2].field_0x8 = 0;
    *(undefined4 *)&this[2].field_0xc = 0x80;
    *(undefined4 *)&this[2].field_0x10 = 0xffffffff;
    *(undefined4 *)&this[2].field_0x14 = 0;
    *(undefined8 *)&this[2].field_0x20 = 0;
    *(undefined4 *)(this + 3) = 0;
    *(undefined ***)this = &UStreamMediaSource::_vftable__for__UObject__;
    *(undefined ***)(this + 1) = &UStreamMediaSource::_vftable__for__IMediaOptions__;
    *(undefined8 *)&this[3].field_0x8 = 0;
    *(undefined8 *)&this[3].field_0x10 = 0;
    *(undefined8 *)&this[3].field_0x18 = 0;
  }
  return;
}

// InternalConstructor<UTimeSynchronizableMediaSource> @ 146c1a010

void __cdecl InternalConstructor<UTimeSynchronizableMediaSource>(FObjectInitializer *param_1)

{
  UObject *this;
  FObjectInitializer *pFVar1;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    pFVar1 = FObjectInitializer::Get();
    UObject::UObject(this,pFVar1);
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined4 *)&this[2].field_0x8 = 0;
    *(undefined4 *)&this[2].field_0xc = 0x80;
    *(undefined4 *)&this[2].field_0x10 = 0xffffffff;
    *(undefined4 *)&this[2].field_0x14 = 0;
    *(undefined8 *)&this[2].field_0x20 = 0;
    *(undefined4 *)(this + 3) = 0;
    *(undefined ***)this = &UTimeSynchronizableMediaSource::_vftable__for__UObject__;
    *(undefined ***)(this + 1) = &UTimeSynchronizableMediaSource::_vftable__for__IMediaOptions__;
    *(undefined8 *)&this[3].field_0x8 = 0;
    this[3].field_0x10 = 0;
    *(undefined4 *)&this[3].field_0x14 = 0;
    *(undefined8 *)&this[3].field_0x18 = 0;
    this[3].field_0x20 = 1;
  }
  return;
}

// InternalVTableHelperCtorCaller<UBaseMediaSource> @ 146c1a0a0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UBaseMediaSource>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UBaseMediaSource::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined4 *)&pUVar1[2].field_0x8 = 0;
    *(undefined4 *)&pUVar1[2].field_0xc = 0x80;
    *(undefined4 *)&pUVar1[2].field_0x10 = 0xffffffff;
    *(undefined4 *)&pUVar1[2].field_0x14 = 0;
    *(undefined8 *)&pUVar1[2].field_0x20 = 0;
    *(undefined4 *)(pUVar1 + 3) = 0;
    *(undefined ***)pUVar1 = &UBaseMediaSource::_vftable__for__UObject__;
    *(undefined ***)(pUVar1 + 1) = &UBaseMediaSource::_vftable__for__IMediaOptions__;
    *(undefined8 *)&pUVar1[3].field_0x8 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UFileMediaSource> @ 146c1a190

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UFileMediaSource>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UFileMediaSource::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined4 *)&pUVar1[2].field_0x8 = 0;
    *(undefined4 *)&pUVar1[2].field_0xc = 0x80;
    *(undefined4 *)&pUVar1[2].field_0x10 = 0xffffffff;
    *(undefined4 *)&pUVar1[2].field_0x14 = 0;
    *(undefined8 *)&pUVar1[2].field_0x20 = 0;
    *(undefined4 *)(pUVar1 + 3) = 0;
    *(undefined ***)pUVar1 = &UFileMediaSource::_vftable__for__UObject__;
    *(undefined ***)(pUVar1 + 1) = &UFileMediaSource::_vftable__for__IMediaOptions__;
    *(undefined8 *)&pUVar1[3].field_0x8 = 0;
    *(undefined8 *)&pUVar1[3].field_0x10 = 0;
    *(undefined8 *)&pUVar1[3].field_0x18 = 0;
    *(undefined8 *)(pUVar1 + 4) = 0;
    *(undefined8 *)&pUVar1[4].field_0x8 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMediaBlueprintFunctionLibrary> @ 146c1a2a0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMediaBlueprintFunctionLibrary>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMediaBlueprintFunctionLibrary::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UMediaBlueprintFunctionLibrary__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMediaComponent> @ 146c1a350

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMediaComponent>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UActorComponent *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMediaComponent::GetPrivateStaticClass();
  this = (UActorComponent *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UActorComponent *)0x0) {
    UActorComponent::UActorComponent(this,param_1);
    this->_padding_ = (longlong)&UMediaComponent::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UMediaComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ = (longlong)&UMediaComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMediaPlayer> @ 146c1a420

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMediaPlayer>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMediaPlayer::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined ***)pUVar1 = &UMediaPlayer::_vftable__for__UObject__;
    *(undefined ***)(pUVar1 + 1) = &UMediaPlayer::_vftable__for__IAudioProxyDataFactory__;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    *(undefined8 *)&pUVar1[2].field_0x10 = 0;
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    *(undefined8 *)&pUVar1[2].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 3) = 0;
    *(undefined8 *)&pUVar1[3].field_0x8 = 0;
    *(undefined8 *)&pUVar1[3].field_0x10 = 0;
    *(undefined8 *)&pUVar1[3].field_0x18 = 0;
    *(undefined8 *)&pUVar1[3].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 4) = 0;
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
    *(undefined8 *)&pUVar1[6].field_0x8 = 0;
    *(undefined8 *)&pUVar1[6].field_0x10 = 0;
    *(undefined8 *)&pUVar1[6].field_0x18 = 0;
    *(undefined8 *)&pUVar1[6].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 7) = 0;
    *(undefined8 *)&pUVar1[7].field_0x8 = 0;
    *(undefined8 *)&pUVar1[7].field_0x10 = 0;
    *(undefined8 *)&pUVar1[7].field_0x18 = 0;
    *(undefined8 *)&pUVar1[7].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 8) = 0;
    *(undefined8 *)&pUVar1[8].field_0x8 = 0;
    *(undefined8 *)&pUVar1[8].field_0x18 = 0;
    *(undefined8 *)(pUVar1 + 9) = 0;
    *(undefined8 *)(pUVar1 + 10) = 0;
    *(undefined8 *)&pUVar1[10].field_0x8 = 0;
    *(undefined8 *)&pUVar1[10].field_0x10 = 0;
    *(undefined8 *)&pUVar1[10].field_0x18 = 2;
    *(undefined8 *)&pUVar1[10].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 0xb) = 0;
    *(undefined8 *)&pUVar1[0xb].field_0x8 = 0;
    *(undefined8 *)&pUVar1[0xb].field_0x10 = 0;
    *(undefined8 *)&pUVar1[0xb].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 0xc) = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMediaPlayerProxyInterface> @ 146c1a430

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMediaPlayerProxyInterface>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMediaPlayerProxyInterface::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UInterface::UInterface((UInterface *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UMediaPlayerProxyInterface__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMediaPlaylist> @ 146c1a4e0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMediaPlaylist>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMediaPlaylist::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UMediaPlaylist__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMediaSoundComponent> @ 146c1a5a0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMediaSoundComponent>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  USynthComponent *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMediaSoundComponent::GetPrivateStaticClass();
  this = (USynthComponent *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (USynthComponent *)0x0) {
    USynthComponent::USynthComponent(this,param_1);
    this->_padding_ = (longlong)&UMediaSoundComponent::_vftable__for__UObject__;
    *(undefined1 *)((longlong)&this[1]._padding_ + 4) = 2;
    this->_padding_ = (longlong)&UMediaSoundComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ = (longlong)&UMediaSoundComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined1 *)((longlong)&this[1]._padding_ + 4) = 2;
    *(undefined4 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this[1]._padding_,4000);
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined1 *)&this[1]._padding_ = 2;
    *(undefined2 *)((longlong)&this[1]._padding_ + 2) = 0x200;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMediaSource> @ 146c1a710

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMediaSource>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMediaSource::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined ***)pUVar1 = &UMediaSource::_vftable__for__UObject__;
    *(undefined ***)(pUVar1 + 1) = &UMediaSource::_vftable__for__IMediaOptions__;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined4 *)&pUVar1[2].field_0x8 = 0;
    *(undefined4 *)&pUVar1[2].field_0xc = 0x80;
    *(undefined4 *)&pUVar1[2].field_0x10 = 0xffffffff;
    *(undefined4 *)&pUVar1[2].field_0x14 = 0;
    *(undefined8 *)&pUVar1[2].field_0x20 = 0;
    *(undefined4 *)(pUVar1 + 3) = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMediaSourceRendererInterface> @ 146c1a7f0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMediaSourceRendererInterface>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMediaSourceRendererInterface::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UInterface::UInterface((UInterface *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UMediaSourceRendererInterface__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMediaTexture> @ 146c1a8a0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMediaTexture>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UTexture *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMediaTexture::GetPrivateStaticClass();
  this = (UTexture *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UTexture *)0x0) {
    UTexture::UTexture(this,param_1);
    this->_padding_ = (longlong)&UMediaTexture::_vftable__for__UStreamableRenderAsset__;
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&UMediaTexture::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ = (longlong)&UMediaTexture::_vftable__for__IInterface_AsyncCompilation__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this[1]._padding_,4000);
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMediaTimeStampInfo> @ 146c1a9e0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMediaTimeStampInfo>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMediaTimeStampInfo::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UMediaTimeStampInfo__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPlatformMediaSource> @ 146c1aa90

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPlatformMediaSource>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPlatformMediaSource::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined4 *)&pUVar1[2].field_0x8 = 0;
    *(undefined4 *)&pUVar1[2].field_0xc = 0x80;
    *(undefined4 *)&pUVar1[2].field_0x10 = 0xffffffff;
    *(undefined4 *)&pUVar1[2].field_0x14 = 0;
    *(undefined8 *)&pUVar1[2].field_0x20 = 0;
    *(undefined4 *)(pUVar1 + 3) = 0;
    *(undefined ***)pUVar1 = &UPlatformMediaSource::_vftable__for__UObject__;
    *(undefined ***)(pUVar1 + 1) = &UPlatformMediaSource::_vftable__for__IMediaOptions__;
    *(undefined8 *)&pUVar1[3].field_0x8 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UStreamMediaSource> @ 146c1ab80

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UStreamMediaSource>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UStreamMediaSource::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined4 *)&pUVar1[2].field_0x8 = 0;
    *(undefined4 *)&pUVar1[2].field_0xc = 0x80;
    *(undefined4 *)&pUVar1[2].field_0x10 = 0xffffffff;
    *(undefined4 *)&pUVar1[2].field_0x14 = 0;
    *(undefined8 *)&pUVar1[2].field_0x20 = 0;
    *(undefined4 *)(pUVar1 + 3) = 0;
    *(undefined ***)pUVar1 = &UStreamMediaSource::_vftable__for__UObject__;
    *(undefined ***)(pUVar1 + 1) = &UStreamMediaSource::_vftable__for__IMediaOptions__;
    *(undefined8 *)&pUVar1[3].field_0x8 = 0;
    *(undefined8 *)&pUVar1[3].field_0x10 = 0;
    *(undefined8 *)&pUVar1[3].field_0x18 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UTimeSynchronizableMediaSource> @ 146c1ac80

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UTimeSynchronizableMediaSource>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UTimeSynchronizableMediaSource::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined4 *)&pUVar1[2].field_0x8 = 0;
    *(undefined4 *)&pUVar1[2].field_0xc = 0x80;
    *(undefined4 *)&pUVar1[2].field_0x10 = 0xffffffff;
    *(undefined4 *)&pUVar1[2].field_0x14 = 0;
    *(undefined8 *)&pUVar1[2].field_0x20 = 0;
    *(undefined4 *)(pUVar1 + 3) = 0;
    *(undefined ***)pUVar1 = &UTimeSynchronizableMediaSource::_vftable__for__UObject__;
    *(undefined ***)(pUVar1 + 1) = &UTimeSynchronizableMediaSource::_vftable__for__IMediaOptions__;
    *(undefined8 *)&pUVar1[3].field_0x8 = 0;
    pUVar1[3].field_0x20 = 1;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// IsObjectPtrEqual<UMediaPlaylist,UMediaPlaylist_*,0> @ 146c1ad70

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<UMediaPlaylist,UMediaPlaylist_*,0>
          (TObjectPtr<UMediaPlaylist> *param_1,UMediaPlaylist **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (UMediaPlaylist *)0x0) {
    return *param_2 == (UMediaPlaylist *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == *param_2;
}

// NewObject<UFileMediaSource> @ 146c1aea0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UFileMediaSource * __cdecl NewObject<UFileMediaSource>(UObject *param_1)

{
  UClass *pUVar1;
  UFileMediaSource *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UFileMediaSource::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UFileMediaSource *)
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

// NewObject<UFileMediaSource> @ 146c1af40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UFileMediaSource * __cdecl
NewObject<UFileMediaSource>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UFileMediaSource *pUVar2;
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
  pUVar1 = UFileMediaSource::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UFileMediaSource *)
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

// NewObject<UMediaPlayer> @ 146c1b030

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMediaPlayer * __cdecl
NewObject<UMediaPlayer>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UMediaPlayer *pUVar2;
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
  pUVar1 = UMediaPlayer::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UMediaPlayer *)
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

// NewObject<UMediaPlaylist> @ 146c1b120

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMediaPlaylist * __cdecl NewObject<UMediaPlaylist>(UObject *param_1)

{
  UClass *pUVar1;
  UMediaPlaylist *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UMediaPlaylist::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UMediaPlaylist *)
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

// NewObject<UMediaPlaylist> @ 146c1b1c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMediaPlaylist * __cdecl
NewObject<UMediaPlaylist>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UMediaPlaylist *pUVar2;
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
  pUVar1 = UMediaPlaylist::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UMediaPlaylist *)
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

// NewObject<UMediaTexture> @ 146c1b2b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMediaTexture * __cdecl
NewObject<UMediaTexture>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UMediaTexture *pUVar2;
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
  pUVar1 = UMediaTexture::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UMediaTexture *)
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

// NewObject<UMediaTimeStampInfo> @ 146c1b3a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMediaTimeStampInfo * __cdecl NewObject<UMediaTimeStampInfo>(UObject *param_1)

{
  UClass *pUVar1;
  UMediaTimeStampInfo *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UMediaTimeStampInfo::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UMediaTimeStampInfo *)
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

// NewObject<UStreamMediaSource> @ 146c1b440

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UStreamMediaSource * __cdecl
NewObject<UStreamMediaSource>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UStreamMediaSource *pUVar2;
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
  pUVar1 = UStreamMediaSource::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UStreamMediaSource *)
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

// StaticEnum<enum_EMediaAudioCaptureDeviceFilter> @ 146c1b7b0

UEnum * __cdecl StaticEnum<enum_EMediaAudioCaptureDeviceFilter>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMediaAudioCaptureDeviceFilter.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MediaAssets();
    Z_Registration_Info_UEnum_EMediaAudioCaptureDeviceFilter.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MediaAssets_EMediaAudioCaptureDeviceFilter,
                       (UObject *)pUVar1,L"EMediaAudioCaptureDeviceFilter");
  }
  return Z_Registration_Info_UEnum_EMediaAudioCaptureDeviceFilter.OuterSingleton;
}

// StaticEnum<enum_EMediaPlayerTrack> @ 146c1b7f0

UEnum * __cdecl StaticEnum<enum_EMediaPlayerTrack>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMediaPlayerTrack.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MediaAssets();
    Z_Registration_Info_UEnum_EMediaPlayerTrack.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MediaAssets_EMediaPlayerTrack,(UObject *)pUVar1,
                       L"EMediaPlayerTrack");
  }
  return Z_Registration_Info_UEnum_EMediaPlayerTrack.OuterSingleton;
}

// StaticEnum<enum_EMediaSoundChannels> @ 146c1b830

UEnum * __cdecl StaticEnum<enum_EMediaSoundChannels>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMediaSoundChannels.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MediaAssets();
    Z_Registration_Info_UEnum_EMediaSoundChannels.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MediaAssets_EMediaSoundChannels,(UObject *)pUVar1,
                       L"EMediaSoundChannels");
  }
  return Z_Registration_Info_UEnum_EMediaSoundChannels.OuterSingleton;
}

// StaticEnum<enum_EMediaSoundComponentFFTSize> @ 146c1b870

UEnum * __cdecl StaticEnum<enum_EMediaSoundComponentFFTSize>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMediaSoundComponentFFTSize.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MediaAssets();
    Z_Registration_Info_UEnum_EMediaSoundComponentFFTSize.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MediaAssets_EMediaSoundComponentFFTSize,(UObject *)pUVar1,
                       L"EMediaSoundComponentFFTSize");
  }
  return Z_Registration_Info_UEnum_EMediaSoundComponentFFTSize.OuterSingleton;
}

// StaticEnum<enum_EMediaTextureVisibleMipsTiles> @ 146c1b8b0

UEnum * __cdecl StaticEnum<enum_EMediaTextureVisibleMipsTiles>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMediaTextureVisibleMipsTiles.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MediaAssets();
    Z_Registration_Info_UEnum_EMediaTextureVisibleMipsTiles.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MediaAssets_EMediaTextureVisibleMipsTiles,(UObject *)pUVar1
                       ,L"EMediaTextureVisibleMipsTiles");
  }
  return Z_Registration_Info_UEnum_EMediaTextureVisibleMipsTiles.OuterSingleton;
}

// StaticEnum<enum_EMediaTimeRangeBPType> @ 146c1b8f0

UEnum * __cdecl StaticEnum<enum_EMediaTimeRangeBPType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMediaTimeRangeBPType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MediaAssets();
    Z_Registration_Info_UEnum_EMediaTimeRangeBPType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MediaAssets_EMediaTimeRangeBPType,(UObject *)pUVar1,
                       L"EMediaTimeRangeBPType");
  }
  return Z_Registration_Info_UEnum_EMediaTimeRangeBPType.OuterSingleton;
}

// StaticEnum<enum_EMediaVideoCaptureDeviceFilter> @ 146c1b930

UEnum * __cdecl StaticEnum<enum_EMediaVideoCaptureDeviceFilter>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMediaVideoCaptureDeviceFilter.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MediaAssets();
    Z_Registration_Info_UEnum_EMediaVideoCaptureDeviceFilter.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MediaAssets_EMediaVideoCaptureDeviceFilter,
                       (UObject *)pUVar1,L"EMediaVideoCaptureDeviceFilter");
  }
  return Z_Registration_Info_UEnum_EMediaVideoCaptureDeviceFilter.OuterSingleton;
}

// StaticEnum<enum_EMediaWebcamCaptureDeviceFilter> @ 146c1b970

UEnum * __cdecl StaticEnum<enum_EMediaWebcamCaptureDeviceFilter>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMediaWebcamCaptureDeviceFilter.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MediaAssets();
    Z_Registration_Info_UEnum_EMediaWebcamCaptureDeviceFilter.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MediaAssets_EMediaWebcamCaptureDeviceFilter,
                       (UObject *)pUVar1,L"EMediaWebcamCaptureDeviceFilter");
  }
  return Z_Registration_Info_UEnum_EMediaWebcamCaptureDeviceFilter.OuterSingleton;
}

// StaticEnum<enum_MediaTextureOrientation> @ 146c1b9b0

UEnum * __cdecl StaticEnum<enum_MediaTextureOrientation>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_MediaTextureOrientation.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MediaAssets();
    Z_Registration_Info_UEnum_MediaTextureOrientation.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MediaAssets_MediaTextureOrientation,(UObject *)pUVar1,
                       L"MediaTextureOrientation");
  }
  return Z_Registration_Info_UEnum_MediaTextureOrientation.OuterSingleton;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<FTimespan>_> @ 146c1bb30

long64 * __cdecl
std::_Atomic_address_as<__int64,std::_Atomic_padded<FTimespan>_>(_Atomic_padded<FTimespan> *param_1)

{
  return (long64 *)param_1;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<FTimespan>_> @ 146c1bb40

long64 * __cdecl
std::_Atomic_address_as<__int64,std::_Atomic_padded<FTimespan>_>(_Atomic_padded<FTimespan> *param_1)

{
  return (long64 *)param_1;
}

// _Atomic_reinterpret_as<__int64,FTimespan> @ 146c1bb50

long64 __cdecl std::_Atomic_reinterpret_as<__int64,FTimespan>(FTimespan *param_1)

{
  return param_1->Ticks;
}

// ~TFunction_OwnedObject<`UMediaTexture::TickResource'::__l2::<lambda_1>,1,1> @ 146c1df60

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UMediaTexture::TickResource'::__l2::<lambda_1>,1,1>::
~TFunction_OwnedObject<_UMediaTexture::TickResource_::__l2::<lambda_1>,1,1>(void *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`UMediaTexture::TickResource'::`2'::<lambda_1>,1,1>::_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x78));
  plVar3 = *(longlong **)((longlong)this + 0x50);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000146c1dfa1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// ~TFunction_OwnedObject<`UMediaTexture::BeginDestroy'::__l11::<lambda_1>,1,0> @ 146c1dfc0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UMediaTexture::BeginDestroy'::__l11::<lambda_1>,1,0>::
~TFunction_OwnedObject<_UMediaTexture::BeginDestroy_::__l11::<lambda_1>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UMediaTexture::BeginDestroy'::`11'::<lambda_1>,1,0>::_vftable_;
  return;
}

// `vector_deleting_destructor'`adjustor{16}' @ 146c1f1c4

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl FMediaTextureResource::`vector deleting
   destructor'`adjustor{16}' (unsigned int) __ptr64 */

void * __thiscall
FMediaTextureResource::_vector_deleting_destructor__adjustor_16__
          (FMediaTextureResource *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FMediaTextureResource *)&this[-1].OverrideColorSpace,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 146c1f1d4

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl UMediaComponent::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UMediaComponent::_vector_deleting_destructor__adjustor_40__(UMediaComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UMediaComponent *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 146c1f1e4

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl UMediaSoundComponent::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UMediaSoundComponent::_vector_deleting_destructor__adjustor_40__
          (UMediaSoundComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UMediaSoundComponent *)&this[-1].bSpectralAnalysisEnabled,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{224}' @ 146c1f1f4

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl UMediaTexture::`vector deleting
   destructor'`adjustor{224}' (unsigned int) __ptr64 */

void * __thiscall
UMediaTexture::_vector_deleting_destructor__adjustor_224__(UMediaTexture *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UMediaTexture *)((longlong)&this[-1].ClearColor.field0_0x0 + 4),param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{232}' @ 146c1f208

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl UMediaTexture::`vector deleting
   destructor'`adjustor{232}' (unsigned int) __ptr64 */

void * __thiscall
UMediaTexture::_vector_deleting_destructor__adjustor_232__(UMediaTexture *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UMediaTexture *)&this[-1].AddressX,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 146c1f220

void * __thiscall
IBaseDelegateInstance<void___cdecl(enum_EMediaEvent),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146c1f250

void * __thiscall
TBaseRawMethodDelegateInstance<0,FLatentOpenMediaSourceAction,void___cdecl(enum_EMediaEvent),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146c1f280

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UMediaPlayer,void___cdecl(enum_EMediaEvent),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146c1f2b0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(enum_EMediaEvent),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146c1f2e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UMediaTexture::TickResource'::__l2::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`UMediaTexture::TickResource'::`2'::<lambda_1>,1,1>::_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x78));
  plVar3 = *(longlong **)((longlong)this + 0x50);
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
    ::operator_delete(this,0x90);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146c1f350

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UMediaTexture::BeginDestroy'::__l11::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UMediaTexture::BeginDestroy'::`11'::<lambda_1>,1,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146c1f390

void * __thiscall
TGPUsyncedDataDeleter<TSharedPtr<IMediaTextureSample,1>_>::_scalar_deleting_destructor_
          (TGPUsyncedDataDeleter<TSharedPtr<IMediaTextureSample,1>_> *this,uint param_1)

{
  ~TGPUsyncedDataDeleter<TSharedPtr<IMediaTextureSample,1>_>(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146c1f3d0

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TGPUsyncedDataDeleter<TSharedPtr<IMediaTextureSample,1>_>,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<TGPUsyncedDataDeleter<TSharedPtr<IMediaTextureSample,1>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146c1f410

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FMediaAudioSampleQueue,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FMediaAudioSampleQueue,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146c1f450

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FMediaPlayerProxy,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<FMediaPlayerProxy,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146c1f490

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FMediaSoundComponentClockSink,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FMediaSoundComponentClockSink,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146c1f4d0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FMediaTextureClockSink,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FMediaTextureClockSink,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146c1f510

void * __thiscall
Audio::TProxyData<FMediaPlayerProxy>::_scalar_deleting_destructor_
          (TProxyData<FMediaPlayerProxy> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146c1f540

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FMediaPlayerFacade,SharedPointerInternals::DefaultDeleter<FMediaPlayerFacade>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FMediaPlayerFacade,SharedPointerInternals::DefaultDeleter<FMediaPlayerFacade>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146c1f580

/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FMediaSoundGenerator,SharedPointerInternals::DefaultDeleter<FMediaSoundGenerator>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FMediaSoundGenerator,SharedPointerInternals::DefaultDeleter<FMediaSoundGenerator>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146c1f5c0

void * __thiscall
FLatentOpenMediaSourceAction::_scalar_deleting_destructor_
          (FLatentOpenMediaSourceAction *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  UObject *pUVar3;
  
  this->_padding_ = (longlong)&___7FLatentOpenMediaSourceAction__6B_;
  bVar2 = FWeakObjectPtr::IsValid(&(this->MediaPlayer).WeakPtr);
  if (bVar2) {
    pUVar3 = FWeakObjectPtr::Get(&(this->MediaPlayer).WeakPtr);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(pUVar3 + 10),this);
  }
  pFVar1 = (this->URL).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FMediaPlayerOptions::~FMediaPlayerOptions(&this->Options);
  this->_padding_ = (longlong)&___7FPendingLatentAction__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x110);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146c1f660

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void * __thiscall
FMediaPlayerProxy::_scalar_deleting_destructor_(FMediaPlayerProxy *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  this->_padding_ = (longlong)&___7FMediaPlayerProxy__6B_;
  pTVar3 = (this->PlayerFacade).WeakReferenceCount.ReferenceController;
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
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146c1f6d0

void * __thiscall
FMediaSoundComponentClockSink::_scalar_deleting_destructor_
          (FMediaSoundComponentClockSink *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IMediaClockSink__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146c1f710

/* WARNING: Enum "EFFTSize": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
FMediaSoundGenerator::_scalar_deleting_destructor_(FMediaSoundGenerator *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FMediaSoundGenerator__6B_;
  if (5 < (byte)LogMediaAssets._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMediaAssets);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->SampleQueueCritSect);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->AnalysisCritSect);
  pFVar1 = (this->EnvelopeFollower).Smoother.PriorEnvelopeValues.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->EnvelopeFollower).MeanSquaredProcessor.ChannelValues.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->EnvelopeFollower).WorkBuffer.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  Audio::FAsyncSpectrumAnalyzer::~FAsyncSpectrumAnalyzer(&this->SpectrumAnalyzer);
  pFVar1 = (this->AudioScratchBuffer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Resampler).Input.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Params).FrequenciesToAnalyze.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Params).SampleQueue.SharedReferenceCount.ReferenceController);
  ISoundGenerator::~ISoundGenerator((ISoundGenerator *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x210);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146c1f810

void * __thiscall
FMediaTextureClockSink::_scalar_deleting_destructor_(FMediaTextureClockSink *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FMediaTextureClockSink__6B_;
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->CriticalSection);
  this->_padding_ = (longlong)&___7IMediaClockSink__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146c1f870

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void * __thiscall
FMediaTextureResource::_scalar_deleting_destructor_(FMediaTextureResource *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FRenderParams *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  IPooledRenderTarget *pIVar5;
  FRHITexture *pFVar6;
  
  this->_padding_ = (longlong)&_vftable__for__FRenderTarget__;
  this->_padding_ = (longlong)&_vftable__for__FTextureResource__;
  ::operator_delete((this->OverrideColorSpace).Ptr,0x150);
  pFVar3 = (this->JustInTimeRenderParams).Ptr;
  if (pFVar3 != (FRenderParams *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((pFVar3->TextureSample).SharedReferenceCount.ReferenceController);
    pTVar4 = (pFVar3->SampleSource).WeakReferenceCount.ReferenceController;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar4->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
      }
    }
    ::operator_delete(pFVar3,0x70);
  }
  pIVar5 = (this->MipGenerationCache).Reference;
  if (pIVar5 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar5->_padding_ + 0x38))();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->PriorSamplesCS);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->PriorSamples).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CurrentSample).SharedReferenceCount.ReferenceController);
  pTVar4 = (this->PlayerFacadePtr).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar4->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
    }
  }
  pFVar6 = (this->OutputTarget).Reference;
  if (pFVar6 != (FRHITexture *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar6);
  }
  pFVar6 = (this->IntermediateTarget).Reference;
  if (pFVar6 != (FRHITexture *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar6);
  }
  pFVar6 = (this->InputTarget).Reference;
  if (pFVar6 != (FRHITexture *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar6);
  }
  this->_padding_ = (longlong)&___7FTextureResource__6B_;
  if ((FRHIResource *)this->_padding_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)this->_padding_);
  }
  FTexture::~FTexture((FTexture *)&this->_padding_);
  FRenderTarget::~FRenderTarget((FRenderTarget *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x150);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146c1f9f0

void * __thiscall
FPendingLatentAction::_scalar_deleting_destructor_(FPendingLatentAction *this,uint param_1)

{
  *this = (FPendingLatentAction)&___7FPendingLatentAction__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146c1fa30

void * __thiscall Audio::IProxyData::_scalar_deleting_destructor_(IProxyData *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146c1fa60

void * __thiscall
UBaseMediaSource::_scalar_deleting_destructor_(UBaseMediaSource *this,uint param_1)

{
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&UMediaSource::_vftable__for__UObject__;
  this->_padding_ = (longlong)&UMediaSource::_vftable__for__IMediaOptions__;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->_padding_);
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x88);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146c1fb00

void * __thiscall
UFileMediaSource::_scalar_deleting_destructor_(UFileMediaSource *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IMediaOptions__;
  pFVar1 = (this->ResolvedFullPath).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FilePath).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&UMediaSource::_vftable__for__UObject__;
  this->_padding_ = (longlong)&UMediaSource::_vftable__for__IMediaOptions__;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->_padding_);
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xb0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146c1fbd0

void * __thiscall
UMediaBlueprintFunctionLibrary::_scalar_deleting_destructor_
          (UMediaBlueprintFunctionLibrary *this,uint param_1)

{
  *(undefined ***)this = &___7UMediaBlueprintFunctionLibrary__6B_;
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

// `scalar_deleting_destructor' @ 146c1fc30

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall UMediaComponent::_scalar_deleting_destructor_(UMediaComponent *this,uint param_1)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  UActorComponent::~UActorComponent((UActorComponent *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xd0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146c1fcb0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void * __thiscall UMediaPlayer::_scalar_deleting_destructor_(UMediaPlayer *this,uint param_1)

{
  ~UMediaPlayer(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x1e8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146c1fd10

void * __thiscall
UMediaPlayerProxyInterface::_scalar_deleting_destructor_
          (UMediaPlayerProxyInterface *this,uint param_1)

{
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146c1fd70

void * __thiscall UMediaPlaylist::_scalar_deleting_destructor_(UMediaPlaylist *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMediaPlaylist__6B_;
  pFVar1 = (this->Items).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
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

// `scalar_deleting_destructor' @ 146c1fde0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void * __thiscall
UMediaSoundComponent::_scalar_deleting_destructor_(UMediaSoundComponent *this,uint param_1)

{
  ~UMediaSoundComponent(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x9a0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146c1fe40

void * __thiscall UMediaSource::_scalar_deleting_destructor_(UMediaSource *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  *(undefined4 *)&(this->MediaOptionsMap).field_0x48 = 0;
  this->_padding_ = (longlong)&_vftable__for__IMediaOptions__;
  pvVar1 = *(void **)&(this->MediaOptionsMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->MediaOptionsMap);
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146c1fee0

void * __thiscall
UMediaSourceRendererInterface::_scalar_deleting_destructor_
          (UMediaSourceRendererInterface *this,uint param_1)

{
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146c1ff40

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void * __thiscall UMediaTexture::_scalar_deleting_destructor_(UMediaTexture *this,uint param_1)

{
  this->_padding_ = (longlong)&_vftable__for__UStreamableRenderAsset__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->CriticalSection);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SampleQueue).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ClockSink).SharedReferenceCount.ReferenceController);
  UTexture::~UTexture((UTexture *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x238);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146c1fff0

void * __thiscall
UMediaTimeStampInfo::_scalar_deleting_destructor_(UMediaTimeStampInfo *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UMediaTimeStampInfo__6B_;
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

// `scalar_deleting_destructor' @ 146c20050

void * __thiscall
UPlatformMediaSource::_scalar_deleting_destructor_(UPlatformMediaSource *this,uint param_1)

{
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&UMediaSource::_vftable__for__UObject__;
  this->_padding_ = (longlong)&UMediaSource::_vftable__for__IMediaOptions__;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->_padding_);
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x88);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146c200f0

void * __thiscall
UStreamMediaSource::_scalar_deleting_destructor_(UStreamMediaSource *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IMediaOptions__;
  pFVar1 = (this->StreamUrl).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&UMediaSource::_vftable__for__UObject__;
  this->_padding_ = (longlong)&UMediaSource::_vftable__for__IMediaOptions__;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->_padding_);
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x98);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146c201b0

void * __thiscall
UTimeSynchronizableMediaSource::_scalar_deleting_destructor_
          (UTimeSynchronizableMediaSource *this,uint param_1)

{
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&UMediaSource::_vftable__for__UObject__;
  this->_padding_ = (longlong)&UMediaSource::_vftable__for__IMediaOptions__;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->_padding_);
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xa0);
  }
  return this;
}

// CreateTempMediaVertexBuffer @ 146c26240

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000146c26420) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffffffffffeb8 : 0x000146c26424 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

TRefCountPtr<FRHIBuffer> __cdecl
CreateTempMediaVertexBuffer
          (FRHICommandListBase *param_1,float param_2,float param_3,float param_4,float param_5)

{
  ERHIPipeline EVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  TRefCountPtr<FRHIBuffer> TVar5;
  longlong *plVar6;
  FRHICommandListBase *in_RDX;
  undefined4 in_stack_00000030;
  undefined1 auStack_1b8 [32];
  undefined8 local_198;
  undefined4 uStack_190;
  int iStack_18c;
  wchar_t *local_188;
  undefined8 uStack_180;
  ERHIAccess local_178;
  undefined4 uStack_174;
  undefined8 uStack_170;
  undefined8 local_168;
  longlong local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  wchar_t *local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined1 local_e8 [48];
  FRHICommandListBase *local_b8;
  FRHIBuffer *local_b0;
  undefined4 *local_a8;
  ulong64 local_a0;
  longlong local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  longlong *plStack_70;
  FRHICommandListBase *local_68;
  FRHIBuffer *pFStack_60;
  undefined4 *local_58;
  ulong64 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1b8;
  local_198 = 0x80;
  uStack_180 = 0;
  iStack_18c = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
  uStack_170 = 0;
  local_168 = 0;
  local_188 = L"TempMediaVertexBuffer";
  uStack_190 = 0x4004;
  local_178 = RHIGetDefaultResourceState(VertexBuffer|Volatile,false);
  uStack_120 = CONCAT44(iStack_18c,uStack_190);
  EVar1 = in_RDX->ActivePipelines;
  uStack_174 = 3;
  local_128 = local_198;
  local_108 = CONCAT44(3,local_178);
  local_118 = local_188;
  uStack_110 = uStack_180;
  local_f8 = local_168;
  uStack_100 = uStack_170;
  if (((EVar1 != None) && ((EVar1 & EVar1 - Graphics) != None)) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("ActivePipelines == ERHIPipeline::None || IsSingleRHIPipeline(ActivePipelines)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                         ,0x2a5,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    TVar5.Reference = (FRHIBuffer *)(*pcVar2)();
    return (TRefCountPtr<FRHIBuffer>)TVar5.Reference;
  }
  if (in_RDX->ActivePipelines == None) {
    FRHICommandListBase::SwitchPipeline(in_RDX,Graphics);
    (**(code **)(GDynamicRHI->_padding_ + 0x140))();
    FRHICommandListBase::SwitchPipeline(in_RDX,None);
  }
  else {
    (**(code **)(GDynamicRHI->_padding_ + 0x140))(GDynamicRHI,&local_98);
  }
  uVar3 = uStack_90;
  local_e8._0_8_ = local_98;
  local_e8._40_8_ = plStack_70;
  if (local_98 != 0) {
    local_98 = 0;
  }
  local_158 = local_98;
  local_b8 = local_68;
  local_b0 = pFStack_60;
  local_a0 = local_50;
  local_98 = 0;
  uStack_90 = uStack_150;
  local_a8 = local_58;
  local_88 = (undefined4)local_148;
  uStack_84 = local_148._4_4_;
  uStack_80 = uStack_140;
  uStack_7c = uStack_13c;
  local_78 = local_138;
  uStack_74 = uStack_134;
  plStack_70 = (longlong *)0x0;
  uStack_150 = uVar3;
  uStack_130 = 0;
  if (local_158 != 0) {
    (**(code **)(local_148 + 0x10))();
  }
  local_58 = (undefined4 *)0x0;
  local_68 = (FRHICommandListBase *)0x0;
  pFStack_60 = (FRHIBuffer *)0x0;
  local_50 = 0;
  if (local_98 != 0) {
    plVar6 = (longlong *)&local_88;
    if (plStack_70 != (longlong *)0x0) {
      plVar6 = plStack_70;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  *local_a8 = 0xbf800000;
  local_a8[1] = 0x3f800000;
  local_a8[2] = 0x3f800000;
  local_a8[3] = 0x3f800000;
  local_a8[8] = 0x3f800000;
  local_a8[9] = 0x3f800000;
  local_a8[10] = 0x3f800000;
  local_a8[0xb] = 0x3f800000;
  local_a8[0x10] = 0xbf800000;
  local_a8[0x11] = 0xbf800000;
  local_a8[0x12] = 0x3f800000;
  local_a8[0x13] = 0x3f800000;
  local_a8[0x18] = 0x3f800000;
  local_a8[0x19] = 0xbf800000;
  local_a8[0x1a] = 0x3f800000;
  local_a8[0x1b] = 0x3f800000;
  local_a8[5] = param_5;
  local_a8[4] = param_3;
  local_a8[0xd] = param_5;
  local_a8[0xc] = param_4;
  local_a8[0x14] = param_3;
  local_a8[0x15] = in_stack_00000030;
  local_a8[0x1c] = param_4;
  local_a8[0x1d] = in_stack_00000030;
  FRHIBufferInitializer::Finalize((FRHIBufferInitializer *)local_e8);
  if ((local_b8 != (FRHICommandListBase *)0x0) && (local_b0 != (FRHIBuffer *)0x0)) {
    FRHIBufferInitializer::RemovePendingBufferUpload((FRHIBufferInitializer *)local_e8);
  }
  if (local_e8._0_8_ != 0) {
    plVar6 = (longlong *)(local_e8 + 0x10);
    if ((longlong *)local_e8._40_8_ != (longlong *)0x0) {
      plVar6 = (longlong *)local_e8._40_8_;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  return (TRefCountPtr<FRHIBuffer>)(FRHIBuffer *)param_1;
}

// EmptyLinkFunctionForGeneratedCodeBaseMediaSource @ 146c26b10

void __cdecl EmptyLinkFunctionForGeneratedCodeBaseMediaSource(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeFileMediaSource @ 146c26b20

void __cdecl EmptyLinkFunctionForGeneratedCodeFileMediaSource(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMediaAssets_init @ 146c26b30

void __cdecl EmptyLinkFunctionForGeneratedCodeMediaAssets_init(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMediaBlueprintFunctionLibrary @ 146c26b40

void __cdecl EmptyLinkFunctionForGeneratedCodeMediaBlueprintFunctionLibrary(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMediaComponent @ 146c26b50

void __cdecl EmptyLinkFunctionForGeneratedCodeMediaComponent(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMediaPlayer @ 146c26b60

void __cdecl EmptyLinkFunctionForGeneratedCodeMediaPlayer(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMediaPlayerProxyInterface @ 146c26b70

void __cdecl EmptyLinkFunctionForGeneratedCodeMediaPlayerProxyInterface(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMediaPlaylist @ 146c26b80

void __cdecl EmptyLinkFunctionForGeneratedCodeMediaPlaylist(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMediaSoundComponent @ 146c26b90

void __cdecl EmptyLinkFunctionForGeneratedCodeMediaSoundComponent(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMediaSource @ 146c26ba0

void __cdecl EmptyLinkFunctionForGeneratedCodeMediaSource(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMediaSourceOptions @ 146c26bb0

void __cdecl EmptyLinkFunctionForGeneratedCodeMediaSourceOptions(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMediaSourceRendererInterface @ 146c26bc0

void __cdecl EmptyLinkFunctionForGeneratedCodeMediaSourceRendererInterface(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMediaTexture @ 146c26bd0

void __cdecl EmptyLinkFunctionForGeneratedCodeMediaTexture(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMediaTextureTracker @ 146c26be0

void __cdecl EmptyLinkFunctionForGeneratedCodeMediaTextureTracker(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePlatformMediaSource @ 146c26bf0

void __cdecl EmptyLinkFunctionForGeneratedCodePlatformMediaSource(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeStreamMediaSource @ 146c26c00

void __cdecl EmptyLinkFunctionForGeneratedCodeStreamMediaSource(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeTimeSynchronizableMediaSource @ 146c26c10

void __cdecl EmptyLinkFunctionForGeneratedCodeTimeSynchronizableMediaSource(void)

{
  return;
}

// FOnMediaPlayerMediaEvent_DelegateWrapper @ 146c275d0

void __cdecl
FOnMediaPlayerMediaEvent_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1)

{
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,(void *)0x0);
  return;
}

// FOnMediaPlayerMediaOpenFailed_DelegateWrapper @ 146c275e0

void __cdecl
FOnMediaPlayerMediaOpenFailed_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,FString *param_2)

{
  uint uVar1;
  FScriptContainerElement *_Src;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  if (&local_18 != param_2) {
    uVar1 = (param_2->Data).ArrayNum;
    _Src = (param_2->Data).AllocatorInstance.Data;
    local_18.Data.ArrayMax = 0;
    local_18.Data.ArrayNum = uVar1;
    if (uVar1 != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar1,0,(ForAnyElementType *)&local_18,uVar1,&local_18.Data.ArrayMax);
      memcpy(local_18.Data.AllocatorInstance.Data,_Src,(longlong)(int)uVar1 * 2);
    }
  }
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// FOnMediaPlayerMediaOpened_DelegateWrapper @ 146c27690

void __cdecl
FOnMediaPlayerMediaOpened_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,FString *param_2)

{
  uint uVar1;
  FScriptContainerElement *_Src;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  if (&local_18 != param_2) {
    uVar1 = (param_2->Data).ArrayNum;
    _Src = (param_2->Data).AllocatorInstance.Data;
    local_18.Data.ArrayMax = 0;
    local_18.Data.ArrayNum = uVar1;
    if (uVar1 != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar1,0,(ForAnyElementType *)&local_18,uVar1,&local_18.Data.ArrayMax);
      memcpy(local_18.Data.AllocatorInstance.Data,_Src,(longlong)(int)uVar1 * 2);
    }
  }
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// GetConvertedPixelFormat @ 146c286b0

EPixelFormat __cdecl
MediaTextureResourceHelpers::GetConvertedPixelFormat(TSharedPtr<IMediaTextureSample,1> *param_1)

{
  code *pcVar1;
  bool bVar2;
  EPixelFormat EVar3;
  char cVar4;
  undefined4 uVar5;
  
  if ((param_1->Object == (IMediaTextureSample *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    EVar3 = (*pcVar1)();
    return EVar3;
  }
  uVar5 = (**(code **)((longlong)*param_1->Object + 0x28))();
  switch(uVar5) {
  case 4:
  case 0xe:
    if ((param_1->Object == (IMediaTextureSample *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
    cVar4 = (**(code **)((longlong)*param_1->Object + 0x100))();
    if (cVar4 == '\x01') {
      return PF_A2B10G10R10;
    }
  case 0xc:
  case 0xf:
  case 0x10:
  case 0x13:
    return PF_FloatRGB;
  case 0xd:
  case 0x11:
  case 0x12:
  case 0x19:
    return PF_FloatRGBA;
  case 0x16:
    return PF_A8;
  case 0x1a:
    return PF_R16G16B16A16_UNORM;
  case 0x1b:
  case 0x1c:
    return PF_A16B16G16R16;
  }
  if ((param_1->Object == (IMediaTextureSample *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    EVar3 = (*pcVar1)();
    return EVar3;
  }
  cVar4 = (**(code **)((longlong)*param_1->Object + 0x100))();
  if (cVar4 == '\x01') {
    return PF_B8G8R8A8;
  }
  if ((param_1->Object == (IMediaTextureSample *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    EVar3 = (*pcVar1)();
    return EVar3;
  }
  cVar4 = (**(code **)((longlong)*param_1->Object + 0x100))();
  EVar3 = PF_B8G8R8A8;
  if (cVar4 != '\x02') {
    EVar3 = PF_FloatRGB;
  }
  return EVar3;
}

// GetPixelFormat @ 146c2b4b0

EPixelFormat __cdecl
MediaTextureResourceHelpers::GetPixelFormat(TSharedPtr<IMediaTextureSample,1> *param_1)

{
  code *pcVar1;
  bool bVar2;
  EPixelFormat EVar3;
  undefined4 uVar4;
  
  if ((param_1->Object == (IMediaTextureSample *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    EVar3 = (*pcVar1)();
    return EVar3;
  }
  uVar4 = (**(code **)((longlong)*param_1->Object + 0x28))();
  switch(uVar4) {
  case 1:
  case 2:
  case 5:
  case 8:
  case 9:
  case 10:
  case 0xb:
    return PF_B8G8R8A8;
  case 3:
    return PF_R8G8B8A8;
  case 4:
  case 0xe:
  case 0x19:
    return PF_A2B10G10R10;
  case 6:
  case 7:
    return PF_G8;
  case 0xc:
    return PF_FloatRGB;
  case 0xd:
    return PF_FloatRGBA;
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x1b:
    return PF_A16B16G16R16;
  case 0x12:
    return PF_A32B32G32R32F;
  case 0x13:
    return PF_G16;
  case 0x14:
    return PF_DXT1;
  case 0x15:
  case 0x17:
    return PF_DXT5;
  case 0x16:
    return PF_BC4;
  default:
    return PF_Unknown;
  case 0x1a:
    return PF_R16G16B16A16_UNORM;
  case 0x1c:
    return PF_R16G16B16A16_UINT;
  }
}

// RequiresSrgbInputTexture @ 146c34730

bool __cdecl
MediaTextureResourceHelpers::RequiresSrgbInputTexture(TSharedPtr<IMediaTextureSample,1> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  char cVar4;
  uint uVar5;
  
  if (param_1->Object == (IMediaTextureSample *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  cVar4 = (**(code **)((longlong)*param_1->Object + 0x80))();
  if (cVar4 != '\0') {
    if (param_1->Object == (IMediaTextureSample *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    uVar5 = (**(code **)((longlong)*param_1->Object + 0x28))();
    if ((uVar5 < 0x16) && ((0x30002cU >> (uVar5 & 0x1f) & 1) != 0)) {
      return true;
    }
  }
  return false;
}

// RequiresSrgbTexture @ 146c347d0

bool __cdecl
MediaTextureResourceHelpers::RequiresSrgbTexture(TSharedPtr<IMediaTextureSample,1> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if (param_1->Object == (IMediaTextureSample *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000146c34810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)((longlong)*param_1->Object + 0x80))();
  return (bool)uVar3;
}

// RequiresUAVTexture @ 146c34820

bool __cdecl
MediaTextureResourceHelpers::RequiresUAVTexture
          (TSharedPtr<IMediaTextureSample,1> *param_1,uchar param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  EPixelFormat EVar4;
  bool bVar5;
  longlong *plVar6;
  ulonglong uVar7;
  
  if (param_1->Object == (IMediaTextureSample *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  plVar6 = (longlong *)(**(code **)((longlong)*param_1->Object + 0x50))();
  if (plVar6 != (longlong *)0x0) {
    uVar7 = (**(code **)(*plVar6 + 8))(plVar6);
    if ((uVar7 & 4) != 0) {
      bVar2 = true;
      goto LAB_146c34886;
    }
  }
  bVar2 = false;
LAB_146c34886:
  if (1 < param_2) {
    EVar4 = GetConvertedPixelFormat(param_1);
    bVar5 = FGenerateMips::WillFormatSupportCompute(EVar4);
    return (bool)(bVar5 | bVar2);
  }
  return bVar2;
}

// Z_Construct_UClass_UBaseMediaSource_NoRegister @ 146c3aa30

UClass * __cdecl Z_Construct_UClass_UBaseMediaSource_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBaseMediaSource.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MediaAssets",L"BaseMediaSource",
               &Z_Registration_Info_UClass_UBaseMediaSource.InnerSingleton,
               UBaseMediaSource::StaticRegisterNativesUBaseMediaSource,0x88,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UBaseMediaSource>,
               InternalVTableHelperCtorCaller<UBaseMediaSource>,local_res8,UMediaSource::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBaseMediaSource.InnerSingleton;
}

// Z_Construct_UClass_UFileMediaSource_NoRegister @ 146c3aaf0

UClass * __cdecl Z_Construct_UClass_UFileMediaSource_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFileMediaSource.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MediaAssets",L"FileMediaSource",
               &Z_Registration_Info_UClass_UFileMediaSource.InnerSingleton,
               UFileMediaSource::StaticRegisterNativesUFileMediaSource,0xb0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UFileMediaSource>,
               InternalVTableHelperCtorCaller<UFileMediaSource>,local_res8,
               UBaseMediaSource::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFileMediaSource.InnerSingleton;
}

// Z_Construct_UClass_UMediaBlueprintFunctionLibrary_NoRegister @ 146c3abb0

UClass * __cdecl Z_Construct_UClass_UMediaBlueprintFunctionLibrary_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMediaBlueprintFunctionLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MediaAssets",L"MediaBlueprintFunctionLibrary",
               &Z_Registration_Info_UClass_UMediaBlueprintFunctionLibrary.InnerSingleton,
               UMediaBlueprintFunctionLibrary::StaticRegisterNativesUMediaBlueprintFunctionLibrary,
               0x28,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMediaBlueprintFunctionLibrary>,
               InternalVTableHelperCtorCaller<UMediaBlueprintFunctionLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMediaBlueprintFunctionLibrary.InnerSingleton;
}

// Z_Construct_UClass_UMediaComponent_NoRegister @ 146c3ac70

UClass * __cdecl Z_Construct_UClass_UMediaComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMediaComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MediaAssets",L"MediaComponent",
               &Z_Registration_Info_UClass_UMediaComponent.InnerSingleton,
               UMediaComponent::StaticRegisterNativesUMediaComponent,0xd0,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UMediaComponent>,InternalVTableHelperCtorCaller<UMediaComponent>,
               local_res8,UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMediaComponent.InnerSingleton;
}

// Z_Construct_UClass_UMediaPlayerProxyInterface_NoRegister @ 146c3ad30

UClass * __cdecl Z_Construct_UClass_UMediaPlayerProxyInterface_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMediaPlayerProxyInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MediaAssets",L"MediaPlayerProxyInterface",
               &Z_Registration_Info_UClass_UMediaPlayerProxyInterface.InnerSingleton,
               UMediaPlayerProxyInterface::StaticRegisterNativesUMediaPlayerProxyInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMediaPlayerProxyInterface>,
               InternalVTableHelperCtorCaller<UMediaPlayerProxyInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMediaPlayerProxyInterface.InnerSingleton;
}

// Z_Construct_UClass_UMediaSoundComponent_NoRegister @ 146c3adf0

UClass * __cdecl Z_Construct_UClass_UMediaSoundComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMediaSoundComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MediaAssets",L"MediaSoundComponent",
               &Z_Registration_Info_UClass_UMediaSoundComponent.InnerSingleton,
               UMediaSoundComponent::StaticRegisterNativesUMediaSoundComponent,0x9a0,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UMediaSoundComponent>,
               InternalVTableHelperCtorCaller<UMediaSoundComponent>,local_res8,
               USynthComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMediaSoundComponent.InnerSingleton;
}

// Z_Construct_UClass_UMediaSourceRendererInterface_NoRegister @ 146c3aeb0

UClass * __cdecl Z_Construct_UClass_UMediaSourceRendererInterface_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMediaSourceRendererInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MediaAssets",L"MediaSourceRendererInterface",
               &Z_Registration_Info_UClass_UMediaSourceRendererInterface.InnerSingleton,
               UMediaSourceRendererInterface::StaticRegisterNativesUMediaSourceRendererInterface,
               0x28,8,CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMediaSourceRendererInterface>,
               InternalVTableHelperCtorCaller<UMediaSourceRendererInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMediaSourceRendererInterface.InnerSingleton;
}

// Z_Construct_UClass_UPlatformMediaSource_NoRegister @ 146c3af70

UClass * __cdecl Z_Construct_UClass_UPlatformMediaSource_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPlatformMediaSource.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MediaAssets",L"PlatformMediaSource",
               &Z_Registration_Info_UClass_UPlatformMediaSource.InnerSingleton,
               UPlatformMediaSource::StaticRegisterNativesUPlatformMediaSource,0x88,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UPlatformMediaSource>,
               InternalVTableHelperCtorCaller<UPlatformMediaSource>,local_res8,
               UMediaSource::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPlatformMediaSource.InnerSingleton;
}

// Z_Construct_UClass_UStreamMediaSource_NoRegister @ 146c3b030

UClass * __cdecl Z_Construct_UClass_UStreamMediaSource_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UStreamMediaSource.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MediaAssets",L"StreamMediaSource",
               &Z_Registration_Info_UClass_UStreamMediaSource.InnerSingleton,
               UStreamMediaSource::StaticRegisterNativesUStreamMediaSource,0x98,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UStreamMediaSource>,
               InternalVTableHelperCtorCaller<UStreamMediaSource>,local_res8,
               UBaseMediaSource::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UStreamMediaSource.InnerSingleton;
}

// Z_Construct_UClass_UTimeSynchronizableMediaSource_NoRegister @ 146c3b0f0

UClass * __cdecl Z_Construct_UClass_UTimeSynchronizableMediaSource_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTimeSynchronizableMediaSource.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MediaAssets",L"TimeSynchronizableMediaSource",
               &Z_Registration_Info_UClass_UTimeSynchronizableMediaSource.InnerSingleton,
               UTimeSynchronizableMediaSource::StaticRegisterNativesUTimeSynchronizableMediaSource,
               0xa0,8,CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UTimeSynchronizableMediaSource>,
               InternalVTableHelperCtorCaller<UTimeSynchronizableMediaSource>,local_res8,
               UBaseMediaSource::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTimeSynchronizableMediaSource.InnerSingleton;
}

// Z_Construct_UEnum_MediaAssets_EMediaAudioCaptureDeviceFilter @ 146c3b1b0

UEnum * __cdecl Z_Construct_UEnum_MediaAssets_EMediaAudioCaptureDeviceFilter(void)

{
  if (Z_Registration_Info_UEnum_EMediaAudioCaptureDeviceFilter.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EMediaAudioCaptureDeviceFilter.InnerSingleton,
               &Z_Construct_UEnum_MediaAssets_EMediaAudioCaptureDeviceFilter_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EMediaAudioCaptureDeviceFilter.InnerSingleton;
}

// Z_Construct_UEnum_MediaAssets_EMediaTextureVisibleMipsTiles @ 146c3b1f0

UEnum * __cdecl Z_Construct_UEnum_MediaAssets_EMediaTextureVisibleMipsTiles(void)

{
  if (Z_Registration_Info_UEnum_EMediaTextureVisibleMipsTiles.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EMediaTextureVisibleMipsTiles.InnerSingleton,
               &Z_Construct_UEnum_MediaAssets_EMediaTextureVisibleMipsTiles_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EMediaTextureVisibleMipsTiles.InnerSingleton;
}

// Z_Construct_UEnum_MediaAssets_EMediaVideoCaptureDeviceFilter @ 146c3b230

UEnum * __cdecl Z_Construct_UEnum_MediaAssets_EMediaVideoCaptureDeviceFilter(void)

{
  if (Z_Registration_Info_UEnum_EMediaVideoCaptureDeviceFilter.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EMediaVideoCaptureDeviceFilter.InnerSingleton,
               &Z_Construct_UEnum_MediaAssets_EMediaVideoCaptureDeviceFilter_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EMediaVideoCaptureDeviceFilter.InnerSingleton;
}

// Z_Construct_UEnum_MediaAssets_EMediaWebcamCaptureDeviceFilter @ 146c3b270

UEnum * __cdecl Z_Construct_UEnum_MediaAssets_EMediaWebcamCaptureDeviceFilter(void)

{
  if (Z_Registration_Info_UEnum_EMediaWebcamCaptureDeviceFilter.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EMediaWebcamCaptureDeviceFilter.InnerSingleton,
               &Z_Construct_UEnum_MediaAssets_EMediaWebcamCaptureDeviceFilter_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EMediaWebcamCaptureDeviceFilter.InnerSingleton;
}

// Z_Construct_UScriptStruct_FMediaSourceCacheSettings @ 146c3b2b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMediaSourceCacheSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMediaSourceCacheSettings.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMediaSourceCacheSettings.InnerSingleton,
               &Z_Construct_UScriptStruct_FMediaSourceCacheSettings_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMediaSourceCacheSettings.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMediaSourceCacheSettings.InnerSingleton;
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

// IMPLEMENT_MODULE_MediaAssets @ 146c438b0

void __cdecl IMPLEMENT_MODULE_MediaAssets(void)

{
  return;
}

// StaticResource'' @ 1503df850

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
::StaticResource__(void)

{
  code *pcVar1;
  bool bVar2;
  
  TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
  ::StaticResource._padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticBlendState__0P__0A__00_0A__0A__00_0A__0A__0A__00_0A__0A__00_0A__0A__0A__00_0A__0A__00_0A__0A__0A__00_0A__0A__00_0A__0A__0A__00_0A__0A__00_0A__0A__0A__00_0A__0A__00_0A__0A__0A__00_0A__0A__00_0A__0A__0A__00_0A__0A__00_0A__0A___V__TRefCountPtr_VFRHIBlendState____PEAVFRHIBlendState____6B_
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
             &TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
              ::StaticResource);
  if (TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
      ::StaticResource.StateRHI.Reference != (FRHIBlendState *)0x0) {
    FRHIResource::Release
              ((FRHIResource *)
               TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
               ::StaticResource.StateRHI.Reference);
  }
  FRenderResource::~FRenderResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
              ::StaticResource);
  return;
}

// StaticResource'' @ 1503df8d0

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

// StaticResource'' @ 1503df950

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

// `dynamic_atexit_destructor_for_'Delegates'' @ 1503df9d0

void __cdecl
`UMediaSource::GetSpawnFromFileExtensionDelegates'::__l2::
_dynamic_atexit_destructor_for__Delegates__(void)

{
  Delegates._72_4_ = 0;
  if (Delegates._64_8_ != 0) {
    FMemory::Free((void *)Delegates._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TDelegate<UMediaSource_*___cdecl(FString_const_&,UObject_*),FDefaultDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TDelegate<UMediaSource_*___cdecl(FString_const_&,UObject_*),FDefaultDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TDelegate<UMediaSource_*___cdecl(FString_const_&,UObject_*),FDefaultDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&Delegates);
  return;
}

// `dynamic_atexit_destructor_for_'Desc'' @ 1503dfa10

void __cdecl
``FMediaTextureResource::Render'::__l7::<lambda_1>::operator()<>'::__l2::
_dynamic_atexit_destructor_for__Desc__(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001503dfa17. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
  return;
}

// `dynamic_atexit_destructor_for_'Desc'' @ 1503dfa30

void __cdecl
``FMediaTextureResource::ClearTexture'::__l8::<lambda_1>::operator()<>'::__l2::
_dynamic_atexit_destructor_for__Desc__(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001503dfa37. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
  return;
}

// `dynamic_atexit_destructor_for_'Desc'' @ 1503dfa50

void __cdecl
``FMediaTextureResource::CopyFromExternalTexture'::__l11::<lambda_1>::operator()<>'::__l2::
_dynamic_atexit_destructor_for__Desc__(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001503dfa57. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
  return;
}

// `dynamic_atexit_destructor_for_'Desc'' @ 1503dfa70

void __cdecl
``FMediaTextureResource::ConvertTextureToOutput'::__l15::<lambda_1>::operator()<>'::__l2::
_dynamic_atexit_destructor_for__Desc__(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001503dfa77. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
  return;
}

// `dynamic_atexit_destructor_for_'Engine'' @ 1503dfa90

void __cdecl `FMediaTextureTracker::Get'::__l2::_dynamic_atexit_destructor_for__Engine__(void)

{
  Engine._padding_ = (longlong)&___7FMediaTextureTracker__6B_;
  if (Engine.MediaTextures.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(Engine.MediaTextures.AllocatorInstance.Data);
  }
  Engine.MapTextureToObject._72_4_ = 0;
  if (Engine.MapTextureToObject._64_8_ != 0) {
    FMemory::Free((void *)Engine.MapTextureToObject._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UMediaTexture,FWeakObjectPtr>,TArray<TWeakPtr<FMediaTextureTrackerObject,1>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UMediaTexture,FWeakObjectPtr>,TArray<TWeakPtr<FMediaTextureTrackerObject,1>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UMediaTexture,FWeakObjectPtr>,TArray<TWeakPtr<FMediaTextureTrackerObject,1>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&Engine.MapTextureToObject);
  return;
}

// `dynamic_atexit_destructor_for_'FMediaPlaylistTestAutomationTestInstance'' @ 1503dfaf0

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__FMediaPlaylistTestAutomationTestInstance__
          (void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FMediaPlaylistTestAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'GPUStat_MediaTextureResource'' @ 1503dfb10

void __cdecl _dynamic_atexit_destructor_for__GPUStat_MediaTextureResource__(void)

{
  GPUStat_MediaTextureResource._104_4_ = 0;
  if (GPUStat_MediaTextureResource._96_8_ != 0) {
    FMemory::Free((void *)GPUStat_MediaTextureResource._96_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&GPUStat_MediaTextureResource.field_0x20);
  return;
}

// `dynamic_atexit_destructor_for_'LogMediaAssets'' @ 1503dfb50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogMediaAssets__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogMediaAssets);
  return;
}

