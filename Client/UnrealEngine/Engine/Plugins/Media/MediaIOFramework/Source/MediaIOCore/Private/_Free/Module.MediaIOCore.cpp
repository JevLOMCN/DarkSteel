// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaIOCore
// Functions: 530

// FrameRateDenominator'' @ 1413dcd70

void __cdecl `dynamic_initializer_for_'FMediaIOCoreMediaOption::FrameRateDenominator__(void)

{
  ::FName::FName(&FMediaIOCoreMediaOption::FrameRateDenominator,"FrameRateDenominator");
  return;
}

// FrameRateNumerator'' @ 1413dcd90

void __cdecl `dynamic_initializer_for_'FMediaIOCoreMediaOption::FrameRateNumerator__(void)

{
  ::FName::FName(&FMediaIOCoreMediaOption::FrameRateNumerator,"FrameRateNumerator");
  return;
}

// RequestCaptureSourceSize'' @ 1413dcdb0

void __cdecl `dynamic_initializer_for_'UMediaOutput::RequestCaptureSourceSize__(void)

{
  UMediaOutput::RequestCaptureSourceSize.field0_0x0 =
       (TIntPoint<int>_u_0)(TIntPoint<int>_u_0)UE::Math::TIntPoint<int>::ZeroValue;
  return;
}

// ResolutionHeight'' @ 1413dcdd0

void __cdecl `dynamic_initializer_for_'FMediaIOCoreMediaOption::ResolutionHeight__(void)

{
  ::FName::FName(&FMediaIOCoreMediaOption::ResolutionHeight,"ResolutionHeight");
  return;
}

// ResolutionWidth'' @ 1413dcdf0

void __cdecl `dynamic_initializer_for_'FMediaIOCoreMediaOption::ResolutionWidth__(void)

{
  ::FName::FName(&FMediaIOCoreMediaOption::ResolutionWidth,"ResolutionWidth");
  return;
}

// ShaderTypeRegistration'' @ 1413dce10

void __cdecl
`dynamic_initializer_for_'UE::MediaCapture::Resample::FMediaCaptureResamplePS::
ShaderTypeRegistration__(void)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArray<FShaderTypeRegistration_const_*,TSizedDefaultAllocator<32>_> *pTVar5;
  FShaderTypeRegistration *local_18 [2];
  
  bVar3 = FShaderTypeRegistration::AreShaderTypesInitialized();
  if (bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!AreShaderTypesInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                       ,0x63a,
                       L"Shader type was loaded too late, use ELoadingPhase::PostConfigInit on your module to cause it to load earlier. This shader will not be compiled or function.  The module and shader will appear in the callstack of this assert."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pTVar5 = FShaderTypeRegistration::GetInstances();
  local_18[0] = &UE::MediaCapture::Resample::FMediaCaptureResamplePS::ShaderTypeRegistration;
  pFVar1 = (pTVar5->AllocatorInstance).Data;
  if ((pFVar1 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar1 + (longlong)pTVar5->ArrayMax * 8)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = pTVar5->ArrayNum;
  if (iVar4 == pTVar5->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar5->AllocatorInstance,&pTVar5->ArrayMax);
  }
  pTVar5->ArrayNum = iVar4 + 1;
  *(FShaderTypeRegistration **)((pTVar5->AllocatorInstance).Data + (longlong)iVar4 * 8) =
       local_18[0];
  atexit(`dynamic_atexit_destructor_for_'UE::MediaCapture::Resample::FMediaCaptureResamplePS::
         ShaderTypeRegistration__);
  return;
}

// StaticResource'' @ 1413dcf10

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

// StaticResource'' @ 1413dcfd0

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

// StaticResource'' @ 1413dd090

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

// VideoModeName'' @ 1413dd150

void __cdecl `dynamic_initializer_for_'FMediaIOCoreMediaOption::VideoModeName__(void)

{
  ::FName::FName(&FMediaIOCoreMediaOption::VideoModeName,"VideoModeName");
  return;
}

// `dynamic_initializer_for_'AllCommonDisplayModeResolutions'' @ 1413dd170

void __cdecl
MediaIOCommonDisplayModeInfo::_dynamic_initializer_for__AllCommonDisplayModeResolutions__(void)

{
  FText::AsLocalizable_Advanced_LocText
            (&AllCommonDisplayModeResolutions[0].Name,L"CommonDisplayMode",L"ModeRes_NTSC",
             L"NTSC SD");
  AllCommonDisplayModeResolutions[1].Width = 0x2d0;
  AllCommonDisplayModeResolutions[1].Height = 0x240;
  FText::AsLocalizable_Advanced_LocText
            (&AllCommonDisplayModeResolutions[1].Name,L"CommonDisplayMode",L"ModeRes_PAL",L"PAL SD")
  ;
  AllCommonDisplayModeResolutions[2].Width = 0x500;
  AllCommonDisplayModeResolutions[2].Height = 0x2d0;
  FText::AsLocalizable_Advanced_LocText
            (&AllCommonDisplayModeResolutions[2].Name,L"CommonDisplayMode",L"ModeRes_720",L"HD 720")
  ;
  AllCommonDisplayModeResolutions[3].Width = 0x780;
  AllCommonDisplayModeResolutions[3].Height = 0x438;
  FText::AsLocalizable_Advanced_LocText
            (&AllCommonDisplayModeResolutions[3].Name,L"CommonDisplayMode",L"ModeRes_1080",
             L"HD 1080");
  AllCommonDisplayModeResolutions[4].Width = 0x800;
  AllCommonDisplayModeResolutions[4].Height = 0x438;
  FText::AsLocalizable_Advanced_LocText
            (&AllCommonDisplayModeResolutions[4].Name,L"CommonDisplayMode",L"ModeRes_2DCI",L"2K DCI"
            );
  AllCommonDisplayModeResolutions[5].Width = 0x800;
  AllCommonDisplayModeResolutions[5].Height = 0x614;
  FText::AsLocalizable_Advanced_LocText
            (&AllCommonDisplayModeResolutions[5].Name,L"CommonDisplayMode",L"ModeRes_2Full",
             L"2K Full");
  AllCommonDisplayModeResolutions[6].Width = 0xf00;
  AllCommonDisplayModeResolutions[6].Height = 0x870;
  FText::AsLocalizable_Advanced_LocText
            (&AllCommonDisplayModeResolutions[6].Name,L"CommonDisplayMode",L"ModeRes_4UHD",L"4K UHD"
            );
  AllCommonDisplayModeResolutions[7].Width = 0x1000;
  AllCommonDisplayModeResolutions[7].Height = 0x870;
  FText::AsLocalizable_Advanced_LocText
            (&AllCommonDisplayModeResolutions[7].Name,L"CommonDisplayMode",L"ModeRes_4DCI",L"4K DCI"
            );
  AllCommonDisplayModeResolutions[8].Width = 0x1e00;
  AllCommonDisplayModeResolutions[8].Height = 0x10e0;
  FText::AsLocalizable_Advanced_LocText
            (&AllCommonDisplayModeResolutions[8].Name,L"CommonDisplayMode",L"ModeRes_8UDH",L"8K UHD"
            );
  AllCommonDisplayModeResolutions[9].Width = 0x2000;
  AllCommonDisplayModeResolutions[9].Height = 0x10e0;
  FText::AsLocalizable_Advanced_LocText
            (&AllCommonDisplayModeResolutions[9].Name,L"CommonDisplayMode",L"ModeRes_8DCI",L"8K DCI"
            );
  AllCommonDisplayModeResolutions[10].Width = 0x3c00;
  AllCommonDisplayModeResolutions[10].Height = 0x21c0;
  FText::AsLocalizable_Advanced_LocText
            (&AllCommonDisplayModeResolutions[10].Name,L"CommonDisplayMode",L"ModeRes_16DCI",
             L"16K DCI");
  AllCommonDisplayModeResolutions[0xb].Width = 0xf000;
  AllCommonDisplayModeResolutions[0xb].Height = 0x8700;
  FText::AsLocalizable_Advanced_LocText
            (&AllCommonDisplayModeResolutions[0xb].Name,L"CommonDisplayMode",L"ModeRes_64DCI",
             L"64K DCI");
  atexit(_dynamic_atexit_destructor_for__AllCommonDisplayModeResolutions__);
  return;
}

// `dynamic_initializer_for_'AllCommonDisplayModes'' @ 1413dd400

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl MediaIOCommonDisplayModeInfo::_dynamic_initializer_for__AllCommonDisplayModes__(void)

{
  FText::AsLocalizable_Advanced_LocText
            (&AllCommonDisplayModes[0].Name,L"CommonDisplayMode",L"Mode_NTSC",L"NTSC");
  AllCommonDisplayModes[1].Width = 0x2d0;
  AllCommonDisplayModes[1].Height = 0x1e6;
  AllCommonDisplayModes[1].FrameRate.Numerator = 60000;
  AllCommonDisplayModes[1].FrameRate.Denominator = 0x3e9;
  AllCommonDisplayModes[1].Standard = Progressive;
  FText::AsLocalizable_Advanced_LocText
            (&AllCommonDisplayModes[1].Name,L"CommonDisplayMode",L"Mode_NTSCp",L"NTSCp");
  AllCommonDisplayModes[2].Width = ___xmm_000000010000001900000240000002d0;
  AllCommonDisplayModes[2].Height = _UNK_152be48e4;
  AllCommonDisplayModes[2].FrameRate = _UNK_152be48e8;
  AllCommonDisplayModes[2].Standard = Interlaced;
  FText::AsLocalizable_Advanced_LocText
            (&AllCommonDisplayModes[2].Name,L"CommonDisplayMode",L"Mode_PAL",L"PAL");
  AllCommonDisplayModes[3].Width = 0x2d0;
  AllCommonDisplayModes[3].Height = 0x240;
  AllCommonDisplayModes[3].FrameRate.Numerator = 0x32;
  AllCommonDisplayModes[3].FrameRate.Denominator = 1;
  AllCommonDisplayModes[3].Standard = Progressive;
  FText::AsLocalizable_Advanced_LocText
            (&AllCommonDisplayModes[3].Name,L"CommonDisplayMode",L"Mode_PALp",L"PALp");
  AllCommonDisplayModes[4].Width = ___xmm_0000000100000032000002d000000500;
  AllCommonDisplayModes[4].Height = _UNK_152be4994;
  AllCommonDisplayModes[4].FrameRate = _UNK_152be4998;
  AllCommonDisplayModes[4].Standard = Progressive;
  FText::AsLocalizable_Advanced_LocText
            (&AllCommonDisplayModes[4].Name,L"CommonDisplayMode",L"Mode_720p50",L"720p50");
  AllCommonDisplayModes[5].Width = 0x500;
  AllCommonDisplayModes[5].Height = 0x2d0;
  AllCommonDisplayModes[5].FrameRate.Numerator = 60000;
  AllCommonDisplayModes[5].FrameRate.Denominator = 0x3e9;
  AllCommonDisplayModes[5].Standard = Progressive;
  FText::AsLocalizable_Advanced_LocText
            (&AllCommonDisplayModes[5].Name,L"CommonDisplayMode",L"Mode_720p5994",L"720p5994");
  AllCommonDisplayModes[6].Width = ___xmm_000000010000003c000002d000000500;
  AllCommonDisplayModes[6].Height = _UNK_152be49c4;
  AllCommonDisplayModes[6].FrameRate = _UNK_152be49c8;
  AllCommonDisplayModes[6].Standard = Progressive;
  FText::AsLocalizable_Advanced_LocText
            (&AllCommonDisplayModes[6].Name,L"CommonDisplayMode",L"Mode_720p60",L"720p60");
  AllCommonDisplayModes[7].Width = 0x780;
  AllCommonDisplayModes[7].Height = 0x438;
  AllCommonDisplayModes[7].FrameRate.Numerator = 24000;
  AllCommonDisplayModes[7].FrameRate.Denominator = 0x3e9;
  AllCommonDisplayModes[7].Standard = Progressive;
  FText::AsLocalizable_Advanced_LocText
            (&AllCommonDisplayModes[7].Name,L"CommonDisplayMode",L"Mode_1080p2398",L"1080p2398");
  AllCommonDisplayModes[8].Width = ___xmm_000003e900005dc00000043800000780;
  AllCommonDisplayModes[8].Height = _UNK_152be49f4;
  AllCommonDisplayModes[8].FrameRate = _UNK_152be49f8;
  AllCommonDisplayModes[8].Standard = ProgressiveSegmentedFrame;
  FText::AsLocalizable_Advanced_LocText
            (&AllCommonDisplayModes[8].Name,L"CommonDisplayMode",L"Mode_1080sf2398",L"1080sf2398");
  AllCommonDisplayModes[9].Width = 0x780;
  AllCommonDisplayModes[9].Height = 0x438;
  AllCommonDisplayModes[9].FrameRate.Numerator = 0x18;
  AllCommonDisplayModes[9].FrameRate.Denominator = 1;
  AllCommonDisplayModes[9].Standard = Progressive;
  FText::AsLocalizable_Advanced_LocText
            (&AllCommonDisplayModes[9].Name,L"CommonDisplayMode",L"Mode_1080p24",L"1080p24");
  AllCommonDisplayModes[10].Width = ___xmm_00000001000000180000043800000780;
  AllCommonDisplayModes[10].Height = _UNK_152be48b4;
  AllCommonDisplayModes[10].FrameRate = _UNK_152be48b8;
  AllCommonDisplayModes[10].Standard = ProgressiveSegmentedFrame;
  FText::AsLocalizable_Advanced_LocText
            (&AllCommonDisplayModes[10].Name,L"CommonDisplayMode",L"Mode_1080sf24",L"1080sf24");
  AllCommonDisplayModes[0xb].Width = 0x780;
  AllCommonDisplayModes[0xb].Height = 0x438;
  AllCommonDisplayModes[0xb].FrameRate.Numerator = 0x19;
  AllCommonDisplayModes[0xb].FrameRate.Denominator = 1;
  AllCommonDisplayModes[0xb].Standard = Progressive;
  FText::AsLocalizable_Advanced_LocText
            (&AllCommonDisplayModes[0xb].Name,L"CommonDisplayMode",L"Mode_1080p25",L"1080p25");
  AllCommonDisplayModes[0xc].Width = ___xmm_00000001000000190000043800000780;
  AllCommonDisplayModes[0xc].Height = _UNK_152be48f4;
  AllCommonDisplayModes[0xc].FrameRate = _UNK_152be48f8;
  AllCommonDisplayModes[0xc].Standard = ProgressiveSegmentedFrame;
  FText::AsLocalizable_Advanced_LocText
            (&AllCommonDisplayModes[0xc].Name,L"CommonDisplayMode",L"Mode_1080sf25",L"1080sf25");
  AllCommonDisplayModes[0xd].Width = 0x780;
  AllCommonDisplayModes[0xd].Height = 0x438;
  AllCommonDisplayModes[0xd].FrameRate.Numerator = 30000;
  AllCommonDisplayModes[0xd].FrameRate.Denominator = 0x3e9;
  AllCommonDisplayModes[0xd].Standard = Progressive;
  FText::AsLocalizable_Advanced_LocText
            (&AllCommonDisplayModes[0xd].Name,L"CommonDisplayMode",L"Mode_1080p2997",L"1080p2997");
  AllCommonDisplayModes[0xe].Width = ___xmm_000003e9000075300000043800000780;
  AllCommonDisplayModes[0xe].Height = _UNK_152be4a44;
  AllCommonDisplayModes[0xe].FrameRate = _UNK_152be4a48;
  AllCommonDisplayModes[0xe].Standard = ProgressiveSegmentedFrame;
  FText::AsLocalizable_Advanced_LocText
            (&AllCommonDisplayModes[0xe].Name,L"CommonDisplayMode",L"Mode_1080sf2997",L"1080sf2997")
  ;
  AllCommonDisplayModes[0xf].Width = 0x780;
  AllCommonDisplayModes[0xf].Height = 0x438;
  AllCommonDisplayModes[0xf].FrameRate.Numerator = 0x1e;
  AllCommonDisplayModes[0xf].FrameRate.Denominator = 1;
  AllCommonDisplayModes[0xf].Standard = Progressive;
  FText::AsLocalizable_Advanced_LocText
            (&AllCommonDisplayModes[0xf].Name,L"CommonDisplayMode",L"Mode_1080p30",L"1080p30");
  AllCommonDisplayModes[0x10].Width = ___xmm_000000010000001e0000043800000780;
  AllCommonDisplayModes[0x10].Height = _UNK_152be4944;
  AllCommonDisplayModes[0x10].FrameRate = _UNK_152be4948;
  AllCommonDisplayModes[0x10].Standard = ProgressiveSegmentedFrame;
  FText::AsLocalizable_Advanced_LocText
            (&AllCommonDisplayModes[0x10].Name,L"CommonDisplayMode",L"Mode_1080sf30",L"1080sf30");
  AllCommonDisplayModes[0x11].Width = 0x780;
  AllCommonDisplayModes[0x11].Height = 0x438;
  AllCommonDisplayModes[0x11].FrameRate.Numerator = 0x19;
  AllCommonDisplayModes[0x11].FrameRate.Denominator = 1;
  AllCommonDisplayModes[0x11].Standard = Interlaced;
  FText::AsLocalizable_Advanced_LocText
            (&AllCommonDisplayModes[0x11].Name,L"CommonDisplayMode",L"Mode_1080i50",L"1080i50");
  AllCommonDisplayModes[0x12].Width = ___xmm_000003e9000075300000043800000780;
  AllCommonDisplayModes[0x12].Height = _UNK_152be4a44;
  AllCommonDisplayModes[0x12].FrameRate = _UNK_152be4a48;
  AllCommonDisplayModes[0x12].Standard = Interlaced;
  FText::AsLocalizable_Advanced_LocText
            (&AllCommonDisplayModes[0x12].Name,L"CommonDisplayMode",L"Mode_1080i5994",L"1080i5994");
  AllCommonDisplayModes[0x13].Width = 0x780;
  AllCommonDisplayModes[0x13].Height = 0x438;
  AllCommonDisplayModes[0x13].FrameRate.Numerator = 0x1e;
  AllCommonDisplayModes[0x13].FrameRate.Denominator = 1;
  AllCommonDisplayModes[0x13].Standard = Interlaced;
  FText::AsLocalizable_Advanced_LocText
            (&AllCommonDisplayModes[0x13].Name,L"CommonDisplayMode",L"Mode_1080i60",L"1080i60");
  AllCommonDisplayModes[0x14].Width = ___xmm_00000001000000320000043800000780;
  AllCommonDisplayModes[0x14].Height = _UNK_152be49a4;
  AllCommonDisplayModes[0x14].FrameRate = _UNK_152be49a8;
  AllCommonDisplayModes[0x14].Standard = Progressive;
  FText::AsLocalizable_Advanced_LocText
            (&AllCommonDisplayModes[0x14].Name,L"CommonDisplayMode",L"Mode_1080p50",L"1080p50");
  AllCommonDisplayModes[0x15].Width = 0x780;
  AllCommonDisplayModes[0x15].Height = 0x438;
  AllCommonDisplayModes[0x15].FrameRate.Numerator = 60000;
  AllCommonDisplayModes[0x15].FrameRate.Denominator = 0x3e9;
  AllCommonDisplayModes[0x15].Standard = Progressive;
  FText::AsLocalizable_Advanced_LocText
            (&AllCommonDisplayModes[0x15].Name,L"CommonDisplayMode",L"Mode_1080p5994",L"1080p5994");
  AllCommonDisplayModes[0x16].Width = ___xmm_000000010000003c0000043800000780;
  AllCommonDisplayModes[0x16].Height = _UNK_152be49d4;
  AllCommonDisplayModes[0x16].FrameRate = _UNK_152be49d8;
  AllCommonDisplayModes[0x16].Standard = Progressive;
  FText::AsLocalizable_Advanced_LocText
            (&AllCommonDisplayModes[0x16].Name,L"CommonDisplayMode",L"Mode_1080p60",L"1080p60");
  AllCommonDisplayModes[0x17].Width = 0x800;
  AllCommonDisplayModes[0x17].Height = 0x438;
  AllCommonDisplayModes[0x17].FrameRate.Numerator = 24000;
  AllCommonDisplayModes[0x17].FrameRate.Denominator = 0x3e9;
  AllCommonDisplayModes[0x17].Standard = Progressive;
  FText::AsLocalizable_Advanced_LocText
            (&AllCommonDisplayModes[0x17].Name,L"CommonDisplayMode",L"Mode_2kDCI2398",L"2kDCI2398");
  AllCommonDisplayModes[0x18].Width = ___xmm_00000001000000180000043800000800;
  AllCommonDisplayModes[0x18].Height = _UNK_152be48c4;
  AllCommonDisplayModes[0x18].FrameRate = _UNK_152be48c8;
  AllCommonDisplayModes[0x18].Standard = Progressive;
  FText::AsLocalizable_Advanced_LocText
            (&AllCommonDisplayModes[0x18].Name,L"CommonDisplayMode",L"Mode_2kDCI24",L"2kDCI24");
  AllCommonDisplayModes[0x19].Width = 0x800;
  AllCommonDisplayModes[0x19].Height = 0x438;
  AllCommonDisplayModes[0x19].FrameRate.Numerator = 0x19;
  AllCommonDisplayModes[0x19].FrameRate.Denominator = 1;
  AllCommonDisplayModes[0x19].Standard = Progressive;
  FText::AsLocalizable_Advanced_LocText
            (&AllCommonDisplayModes[0x19].Name,L"CommonDisplayMode",L"Mode_2kDCI25",L"2kDCI25");
  AllCommonDisplayModes[0x1a].Width = ___xmm_000003e9000075300000043800000800;
  AllCommonDisplayModes[0x1a].Height = _UNK_152be4a54;
  AllCommonDisplayModes[0x1a].FrameRate = _UNK_152be4a58;
  AllCommonDisplayModes[0x1a].Standard = Progressive;
  FText::AsLocalizable_Advanced_LocText
            (&AllCommonDisplayModes[0x1a].Name,L"CommonDisplayMode",L"Mode_2kDCI2997",L"2kDCI2997");
  AllCommonDisplayModes[0x1b].Width = 0x800;
  AllCommonDisplayModes[0x1b].Height = 0x438;
  AllCommonDisplayModes[0x1b].FrameRate.Numerator = 0x1e;
  AllCommonDisplayModes[0x1b].FrameRate.Denominator = 1;
  AllCommonDisplayModes[0x1b].Standard = Progressive;
  FText::AsLocalizable_Advanced_LocText
            (&AllCommonDisplayModes[0x1b].Name,L"CommonDisplayMode",L"Mode_2kDCI30",L"2kDCI30");
  AllCommonDisplayModes[0x1c].Width = ___xmm_00000001000000320000043800000800;
  AllCommonDisplayModes[0x1c].Height = _UNK_152be49b4;
  AllCommonDisplayModes[0x1c].FrameRate = _UNK_152be49b8;
  AllCommonDisplayModes[0x1c].Standard = Progressive;
  FText::AsLocalizable_Advanced_LocText
            (&AllCommonDisplayModes[0x1c].Name,L"CommonDisplayMode",L"Mode_2kDCI50",L"2kDCI50");
  AllCommonDisplayModes[0x1d].Width = 0x800;
  AllCommonDisplayModes[0x1d].Height = 0x438;
  AllCommonDisplayModes[0x1d].FrameRate.Numerator = 60000;
  AllCommonDisplayModes[0x1d].FrameRate.Denominator = 0x3e9;
  AllCommonDisplayModes[0x1d].Standard = Progressive;
  FText::AsLocalizable_Advanced_LocText
            (&AllCommonDisplayModes[0x1d].Name,L"CommonDisplayMode",L"Mode_2kDCI5994",L"2kDCI5994");
  AllCommonDisplayModes[0x1e].Width = ___xmm_000000010000003c0000043800000800;
  AllCommonDisplayModes[0x1e].Height = _UNK_152be49e4;
  AllCommonDisplayModes[0x1e].FrameRate = _UNK_152be49e8;
  AllCommonDisplayModes[0x1e].Standard = Progressive;
  FText::AsLocalizable_Advanced_LocText
            (&AllCommonDisplayModes[0x1e].Name,L"CommonDisplayMode",L"Mode_2kDCI60",L"2kDCI60");
  AllCommonDisplayModes[0x1f].Width = 0x800;
  AllCommonDisplayModes[0x1f].Height = 0x614;
  AllCommonDisplayModes[0x1f].FrameRate.Numerator = 24000;
  AllCommonDisplayModes[0x1f].FrameRate.Denominator = 0x3e9;
  AllCommonDisplayModes[0x1f].Standard = Progressive;
  FText::AsLocalizable_Advanced_LocText
            (&AllCommonDisplayModes[0x1f].Name,L"CommonDisplayMode",L"Mode_2k2398",L"2k2398");
  AllCommonDisplayModes[0x20].Width = ___xmm_00000001000000180000061400000800;
  AllCommonDisplayModes[0x20].Height = _UNK_152be48d4;
  AllCommonDisplayModes[0x20].FrameRate = _UNK_152be48d8;
  AllCommonDisplayModes[0x20].Standard = Progressive;
  FText::AsLocalizable_Advanced_LocText
            (&AllCommonDisplayModes[0x20].Name,L"CommonDisplayMode",L"Mode_2k24",L"2k24");
  AllCommonDisplayModes[0x21].Width = 0x800;
  AllCommonDisplayModes[0x21].Height = 0x614;
  AllCommonDisplayModes[0x21].FrameRate.Numerator = 0x19;
  AllCommonDisplayModes[0x21].FrameRate.Denominator = 1;
  AllCommonDisplayModes[0x21].Standard = Progressive;
  FText::AsLocalizable_Advanced_LocText
            (&AllCommonDisplayModes[0x21].Name,L"CommonDisplayMode",L"Mode_2k25",L"2k25");
  AllCommonDisplayModes[0x22].Width = ___xmm_000003e900005dc00000087000000f00;
  AllCommonDisplayModes[0x22].Height = _UNK_152be4a04;
  AllCommonDisplayModes[0x22].FrameRate = _UNK_152be4a08;
  AllCommonDisplayModes[0x22].Standard = Progressive;
  FText::AsLocalizable_Advanced_LocText
            (&AllCommonDisplayModes[0x22].Name,L"CommonDisplayMode",L"Mode_4kUHD2398",L"4kUHD2398");
  AllCommonDisplayModes[0x23].Width = 0xf00;
  AllCommonDisplayModes[0x23].Height = 0x870;
  AllCommonDisplayModes[0x23].FrameRate.Numerator = 0x18;
  AllCommonDisplayModes[0x23].FrameRate.Denominator = 1;
  AllCommonDisplayModes[0x23].Standard = Progressive;
  FText::AsLocalizable_Advanced_LocText
            (&AllCommonDisplayModes[0x23].Name,L"CommonDisplayMode",L"Mode_4kUHD24",L"4kUHD24");
  AllCommonDisplayModes[0x24].Width = ___xmm_00000001000000190000087000000f00;
  AllCommonDisplayModes[0x24].Height = _UNK_152be4904;
  AllCommonDisplayModes[0x24].FrameRate = _UNK_152be4908;
  AllCommonDisplayModes[0x24].Standard = Progressive;
  FText::AsLocalizable_Advanced_LocText
            (&AllCommonDisplayModes[0x24].Name,L"CommonDisplayMode",L"Mode_4kUHD25",L"4kUHD25");
  AllCommonDisplayModes[0x25].Width = 0xf00;
  AllCommonDisplayModes[0x25].Height = 0x870;
  AllCommonDisplayModes[0x25].FrameRate.Numerator = 30000;
  AllCommonDisplayModes[0x25].FrameRate.Denominator = 0x3e9;
  AllCommonDisplayModes[0x25].Standard = Progressive;
  FText::AsLocalizable_Advanced_LocText
            (&AllCommonDisplayModes[0x25].Name,L"CommonDisplayMode",L"Mode_4kUHD2997",L"4kUHD2997");
  AllCommonDisplayModes[0x26].Width = ___xmm_000000010000001e0000087000000f00;
  AllCommonDisplayModes[0x26].Height = _UNK_152be4954;
  AllCommonDisplayModes[0x26].FrameRate = _UNK_152be4958;
  AllCommonDisplayModes[0x26].Standard = Progressive;
  FText::AsLocalizable_Advanced_LocText
            (&AllCommonDisplayModes[0x26].Name,L"CommonDisplayMode",L"Mode_4kUHD30",L"4kUHD30");
  AllCommonDisplayModes[0x27].Width = 0xf00;
  AllCommonDisplayModes[0x27].Height = 0x870;
  AllCommonDisplayModes[0x27].FrameRate.Numerator = 0x32;
  AllCommonDisplayModes[0x27].FrameRate.Denominator = 1;
  AllCommonDisplayModes[0x27].Standard = Progressive;
  FText::AsLocalizable_Advanced_LocText
            (&AllCommonDisplayModes[0x27].Name,L"CommonDisplayMode",L"Mode_4kUHD50",L"4kUHD50");
  AllCommonDisplayModes[0x28].Width = ___xmm_000003e90000ea600000087000000f00;
  AllCommonDisplayModes[0x28].Height = _UNK_152be4a64;
  AllCommonDisplayModes[0x28].FrameRate = _UNK_152be4a68;
  AllCommonDisplayModes[0x28].Standard = Progressive;
  FText::AsLocalizable_Advanced_LocText
            (&AllCommonDisplayModes[0x28].Name,L"CommonDisplayMode",L"Mode_4kUHD5994",L"4kUHD5994");
  AllCommonDisplayModes[0x29].Width = 0xf00;
  AllCommonDisplayModes[0x29].Height = 0x870;
  AllCommonDisplayModes[0x29].FrameRate.Numerator = 0x3c;
  AllCommonDisplayModes[0x29].FrameRate.Denominator = 1;
  AllCommonDisplayModes[0x29].Standard = Progressive;
  FText::AsLocalizable_Advanced_LocText
            (&AllCommonDisplayModes[0x29].Name,L"CommonDisplayMode",L"Mode_4kUHD60",L"4kUHD60");
  AllCommonDisplayModes[0x2a].Width = ___xmm_000003e900005dc00000087000001000;
  AllCommonDisplayModes[0x2a].Height = _UNK_152be4a14;
  AllCommonDisplayModes[0x2a].FrameRate = _UNK_152be4a18;
  AllCommonDisplayModes[0x2a].Standard = Progressive;
  FText::AsLocalizable_Advanced_LocText
            (&AllCommonDisplayModes[0x2a].Name,L"CommonDisplayMode",L"Mode_4kDCI2398",L"4kDCI2398");
  AllCommonDisplayModes[0x2b].Width = 0x1000;
  AllCommonDisplayModes[0x2b].Height = 0x870;
  AllCommonDisplayModes[0x2b].FrameRate.Numerator = 0x18;
  AllCommonDisplayModes[0x2b].FrameRate.Denominator = 1;
  AllCommonDisplayModes[0x2b].Standard = Progressive;
  FText::AsLocalizable_Advanced_LocText
            (&AllCommonDisplayModes[0x2b].Name,L"CommonDisplayMode",L"Mode_4kDCI24",L"4kDCI24");
  AllCommonDisplayModes[0x2c].Width = ___xmm_00000001000000190000087000001000;
  AllCommonDisplayModes[0x2c].Height = _UNK_152be4914;
  AllCommonDisplayModes[0x2c].FrameRate = _UNK_152be4918;
  AllCommonDisplayModes[0x2c].Standard = Progressive;
  FText::AsLocalizable_Advanced_LocText
            (&AllCommonDisplayModes[0x2c].Name,L"CommonDisplayMode",L"Mode_4kDCI25",L"4kDCI25");
  AllCommonDisplayModes[0x2d].Width = 0x1000;
  AllCommonDisplayModes[0x2d].Height = 0x870;
  AllCommonDisplayModes[0x2d].FrameRate.Numerator = 30000;
  AllCommonDisplayModes[0x2d].FrameRate.Denominator = 0x3e9;
  AllCommonDisplayModes[0x2d].Standard = Progressive;
  FText::AsLocalizable_Advanced_LocText
            (&AllCommonDisplayModes[0x2d].Name,L"CommonDisplayMode",L"Mode_4kDCI2997",L"4kDCI2997");
  AllCommonDisplayModes[0x2e].Width = ___xmm_000000010000001e0000087000001000;
  AllCommonDisplayModes[0x2e].Height = _UNK_152be4964;
  AllCommonDisplayModes[0x2e].FrameRate = _UNK_152be4968;
  AllCommonDisplayModes[0x2e].Standard = Progressive;
  FText::AsLocalizable_Advanced_LocText
            (&AllCommonDisplayModes[0x2e].Name,L"CommonDisplayMode",L"Mode_4kDCI30",L"4kDCI30");
  AllCommonDisplayModes[0x2f].Width = 0x1000;
  AllCommonDisplayModes[0x2f].Height = 0x870;
  AllCommonDisplayModes[0x2f].FrameRate.Numerator = 0x32;
  AllCommonDisplayModes[0x2f].FrameRate.Denominator = 1;
  AllCommonDisplayModes[0x2f].Standard = Progressive;
  FText::AsLocalizable_Advanced_LocText
            (&AllCommonDisplayModes[0x2f].Name,L"CommonDisplayMode",L"Mode_4kDCI50",L"4kDCI50");
  AllCommonDisplayModes[0x30].Width = ___xmm_000003e90000ea600000087000001000;
  AllCommonDisplayModes[0x30].Height = _UNK_152be4a74;
  AllCommonDisplayModes[0x30].FrameRate = _UNK_152be4a78;
  AllCommonDisplayModes[0x30].Standard = Progressive;
  FText::AsLocalizable_Advanced_LocText
            (&AllCommonDisplayModes[0x30].Name,L"CommonDisplayMode",L"Mode_4kDCI5994",L"4kDCI5994");
  AllCommonDisplayModes[0x31].Width = 0x1000;
  AllCommonDisplayModes[0x31].Height = 0x870;
  AllCommonDisplayModes[0x31].FrameRate.Numerator = 0x3c;
  AllCommonDisplayModes[0x31].FrameRate.Denominator = 1;
  AllCommonDisplayModes[0x31].Standard = Progressive;
  FText::AsLocalizable_Advanced_LocText
            (&AllCommonDisplayModes[0x31].Name,L"CommonDisplayMode",L"Mode_4kDCI60",L"4kDCI60");
  AllCommonDisplayModes[0x32].Width = ___xmm_000003e900005dc0000010e000001e00;
  AllCommonDisplayModes[0x32].Height = _UNK_152be4a24;
  AllCommonDisplayModes[0x32].FrameRate = _UNK_152be4a28;
  AllCommonDisplayModes[0x32].Standard = Progressive;
  FText::AsLocalizable_Advanced_LocText
            (&AllCommonDisplayModes[0x32].Name,L"CommonDisplayMode",L"Mode_8kUHD2398",L"8kUHD2398");
  AllCommonDisplayModes[0x33].Width = 0x1e00;
  AllCommonDisplayModes[0x33].Height = 0x10e0;
  AllCommonDisplayModes[0x33].FrameRate.Numerator = 0x18;
  AllCommonDisplayModes[0x33].FrameRate.Denominator = 1;
  AllCommonDisplayModes[0x33].Standard = Progressive;
  FText::AsLocalizable_Advanced_LocText
            (&AllCommonDisplayModes[0x33].Name,L"CommonDisplayMode",L"Mode_8kUHD24",L"8kUHD24");
  AllCommonDisplayModes[0x34].Width = ___xmm_0000000100000019000010e000001e00;
  AllCommonDisplayModes[0x34].Height = _UNK_152be4924;
  AllCommonDisplayModes[0x34].FrameRate = _UNK_152be4928;
  AllCommonDisplayModes[0x34].Standard = Progressive;
  FText::AsLocalizable_Advanced_LocText
            (&AllCommonDisplayModes[0x34].Name,L"CommonDisplayMode",L"Mode_8kUHD25",L"8kUHD25");
  AllCommonDisplayModes[0x35].Width = 0x1e00;
  AllCommonDisplayModes[0x35].Height = 0x10e0;
  AllCommonDisplayModes[0x35].FrameRate.Numerator = 30000;
  AllCommonDisplayModes[0x35].FrameRate.Denominator = 0x3e9;
  AllCommonDisplayModes[0x35].Standard = Progressive;
  FText::AsLocalizable_Advanced_LocText
            (&AllCommonDisplayModes[0x35].Name,L"CommonDisplayMode",L"Mode_8kUHD2997",L"8kUHD2997");
  AllCommonDisplayModes[0x36].Width = ___xmm_000000010000001e000010e000001e00;
  AllCommonDisplayModes[0x36].Height = _UNK_152be4974;
  AllCommonDisplayModes[0x36].FrameRate = _UNK_152be4978;
  AllCommonDisplayModes[0x36].Standard = Progressive;
  FText::AsLocalizable_Advanced_LocText
            (&AllCommonDisplayModes[0x36].Name,L"CommonDisplayMode",L"Mode_8kUHD30",L"8kUHD30");
  AllCommonDisplayModes[0x37].Width = 0x1e00;
  AllCommonDisplayModes[0x37].Height = 0x10e0;
  AllCommonDisplayModes[0x37].FrameRate.Numerator = 0x32;
  AllCommonDisplayModes[0x37].FrameRate.Denominator = 1;
  AllCommonDisplayModes[0x37].Standard = Progressive;
  FText::AsLocalizable_Advanced_LocText
            (&AllCommonDisplayModes[0x37].Name,L"CommonDisplayMode",L"Mode_8kUHD50",L"8kUHD50");
  AllCommonDisplayModes[0x38].Width = ___xmm_000003e90000ea60000010e000001e00;
  AllCommonDisplayModes[0x38].Height = _UNK_152be4a84;
  AllCommonDisplayModes[0x38].FrameRate = _UNK_152be4a88;
  AllCommonDisplayModes[0x38].Standard = Progressive;
  FText::AsLocalizable_Advanced_LocText
            (&AllCommonDisplayModes[0x38].Name,L"CommonDisplayMode",L"Mode_8kUHD5994",L"8kUHD5994");
  AllCommonDisplayModes[0x39].Width = 0x1e00;
  AllCommonDisplayModes[0x39].Height = 0x10e0;
  AllCommonDisplayModes[0x39].FrameRate.Numerator = 0x3c;
  AllCommonDisplayModes[0x39].FrameRate.Denominator = 1;
  AllCommonDisplayModes[0x39].Standard = Progressive;
  FText::AsLocalizable_Advanced_LocText
            (&AllCommonDisplayModes[0x39].Name,L"CommonDisplayMode",L"Mode_8kUHD60",L"8kUHD60");
  AllCommonDisplayModes[0x3a].Width = ___xmm_000003e900005dc0000010e000002000;
  AllCommonDisplayModes[0x3a].Height = _UNK_152be4a34;
  AllCommonDisplayModes[0x3a].FrameRate = _UNK_152be4a38;
  AllCommonDisplayModes[0x3a].Standard = Progressive;
  FText::AsLocalizable_Advanced_LocText
            (&AllCommonDisplayModes[0x3a].Name,L"CommonDisplayMode",L"Mode_8kDCI2398",L"8kDCI2398");
  AllCommonDisplayModes[0x3b].Width = 0x2000;
  AllCommonDisplayModes[0x3b].Height = 0x10e0;
  AllCommonDisplayModes[0x3b].FrameRate.Numerator = 0x18;
  AllCommonDisplayModes[0x3b].FrameRate.Denominator = 1;
  AllCommonDisplayModes[0x3b].Standard = Progressive;
  FText::AsLocalizable_Advanced_LocText
            (&AllCommonDisplayModes[0x3b].Name,L"CommonDisplayMode",L"Mode_8kDCI24",L"8kDCI24");
  AllCommonDisplayModes[0x3c].Width = ___xmm_0000000100000019000010e000002000;
  AllCommonDisplayModes[0x3c].Height = _UNK_152be4934;
  AllCommonDisplayModes[0x3c].FrameRate = _UNK_152be4938;
  AllCommonDisplayModes[0x3c].Standard = Progressive;
  FText::AsLocalizable_Advanced_LocText
            (&AllCommonDisplayModes[0x3c].Name,L"CommonDisplayMode",L"Mode_8kDCI25",L"8kDCI25");
  AllCommonDisplayModes[0x3d].Width = 0x2000;
  AllCommonDisplayModes[0x3d].Height = 0x10e0;
  AllCommonDisplayModes[0x3d].FrameRate.Numerator = 30000;
  AllCommonDisplayModes[0x3d].FrameRate.Denominator = 0x3e9;
  AllCommonDisplayModes[0x3d].Standard = Progressive;
  FText::AsLocalizable_Advanced_LocText
            (&AllCommonDisplayModes[0x3d].Name,L"CommonDisplayMode",L"Mode_8kDCI2997",L"8kDCI2997");
  AllCommonDisplayModes[0x3e].Width = ___xmm_000000010000001e000010e000002000;
  AllCommonDisplayModes[0x3e].Height = _UNK_152be4984;
  AllCommonDisplayModes[0x3e].FrameRate = _UNK_152be4988;
  AllCommonDisplayModes[0x3e].Standard = Progressive;
  FText::AsLocalizable_Advanced_LocText
            (&AllCommonDisplayModes[0x3e].Name,L"CommonDisplayMode",L"Mode_8kDCI30",L"8kDCI30");
  AllCommonDisplayModes[0x3f].Width = 0x2000;
  AllCommonDisplayModes[0x3f].Height = 0x10e0;
  AllCommonDisplayModes[0x3f].FrameRate.Numerator = 0x32;
  AllCommonDisplayModes[0x3f].FrameRate.Denominator = 1;
  AllCommonDisplayModes[0x3f].Standard = Progressive;
  FText::AsLocalizable_Advanced_LocText
            (&AllCommonDisplayModes[0x3f].Name,L"CommonDisplayMode",L"Mode_8kDCI50",L"8kDCI50");
  AllCommonDisplayModes[0x40].Width = ___xmm_000003e90000ea60000010e000002000;
  AllCommonDisplayModes[0x40].Height = _UNK_152be4a94;
  AllCommonDisplayModes[0x40].FrameRate = _UNK_152be4a98;
  AllCommonDisplayModes[0x40].Standard = Progressive;
  FText::AsLocalizable_Advanced_LocText
            (&AllCommonDisplayModes[0x40].Name,L"CommonDisplayMode",L"Mode_8kDCI5994",L"8kDCI5994");
  AllCommonDisplayModes[0x41].Width = 0x2000;
  AllCommonDisplayModes[0x41].Height = 0x10e0;
  AllCommonDisplayModes[0x41].FrameRate.Numerator = 0x3c;
  AllCommonDisplayModes[0x41].FrameRate.Denominator = 1;
  AllCommonDisplayModes[0x41].Standard = Progressive;
  FText::AsLocalizable_Advanced_LocText
            (&AllCommonDisplayModes[0x41].Name,L"CommonDisplayMode",L"Mode_8kDCI60",L"8kDCI60");
  atexit(_dynamic_atexit_destructor_for__AllCommonDisplayModes__);
  return;
}

// `dynamic_initializer_for_'AutoDetect'' @ 1413de4e0

void __cdecl TimeSynchronizableMedia::_dynamic_initializer_for__AutoDetect__(void)

{
  ::FName::FName(&AutoDetect,"AutoDetect");
  return;
}

// `dynamic_initializer_for_'CCommandHideTimecode'' @ 1413de500

void __cdecl MediaIOCorePlayerDetail::_dynamic_initializer_for__CCommandHideTimecode__(void)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  local_48 = (undefined1  [8])0x0;
  local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_40.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  local_18 = &local_40;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,MediaIOCorePlayerDetail::<lambda_29>_>
               ::_vftable_;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&CCommandHideTimecode,L"MediaIO.HideInputTimecode",
             L"All media player will stop logging the frame timecode when a new frame is captured.",
             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_48,1);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  if ((local_40.DelegateSize != 0) &&
     (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_40.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_40,0,0,0x10);
    local_40.DelegateSize = 0;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  if (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_40.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  atexit(_dynamic_atexit_destructor_for__CCommandHideTimecode__);
  return;
}

// `dynamic_initializer_for_'CCommandShowTimecode'' @ 1413de630

void __cdecl MediaIOCorePlayerDetail::_dynamic_initializer_for__CCommandShowTimecode__(void)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  local_48 = (undefined1  [8])0x0;
  local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_40.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  local_18 = &local_40;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,MediaIOCorePlayerDetail::<lambda_28>_>
               ::_vftable_;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&CCommandShowTimecode,L"MediaIO.ShowInputTimecode",
             L"All media player will log the frame timecode when a new frame is captured.",
             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_48,1);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  if ((local_40.DelegateSize != 0) &&
     (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_40.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_40,0,0,0x10);
    local_40.DelegateSize = 0;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  if (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_40.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  atexit(_dynamic_atexit_destructor_for__CCommandShowTimecode__);
  return;
}

// `dynamic_initializer_for_'CVarEnableGPUDirectInput'' @ 1413de760

void __cdecl MediaIOCorePlayerDetail::_dynamic_initializer_for__CVarEnableGPUDirectInput__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarEnableGPUDirectInput,L"MediaIO.EnableGPUDirectInput",local_res8,
             L"Whether to enable GPU direct for faster video frame copies. (Experimental)",0x20);
  atexit(_dynamic_atexit_destructor_for__CVarEnableGPUDirectInput__);
  return;
}

// `dynamic_initializer_for_'CVarMediaIOCapturePollTaskPriority'' @ 1413de7b0

void __cdecl _dynamic_initializer_for__CVarMediaIOCapturePollTaskPriority__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarMediaIOCapturePollTaskPriority,L"MediaIO.Capture.PollTaskPriority",local_res8,
             L"Priority of the task responsible to poll the render fence",0x20);
  atexit(_dynamic_atexit_destructor_for__CVarMediaIOCapturePollTaskPriority__);
  return;
}

// `dynamic_initializer_for_'CVarMediaIOEnableExperimentalScheduling'' @ 1413de800

void __cdecl _dynamic_initializer_for__CVarMediaIOEnableExperimentalScheduling__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarMediaIOEnableExperimentalScheduling,L"MediaIO.EnableExperimentalScheduling",
             local_res8,L"Whether to send out frame  in a separate thread. (Experimental)",0x20);
  atexit(_dynamic_atexit_destructor_for__CVarMediaIOEnableExperimentalScheduling__);
  return;
}

// `dynamic_initializer_for_'CVarMediaIOJITRInsights'' @ 1413de850

void __cdecl MediaIOCorePlayerDetail::_dynamic_initializer_for__CVarMediaIOJITRInsights__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = false;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarMediaIOJITRInsights,L"MediaIO.JITR.Insights",local_res8,
             L"Generate detailed Just-in-Time Media Rendering insights",0);
  atexit(_dynamic_atexit_destructor_for__CVarMediaIOJITRInsights__);
  return;
}

// `dynamic_initializer_for_'CVarMediaIOMaxBufferSize'' @ 1413de8a0

void __cdecl MediaIOCorePlayerDetail::_dynamic_initializer_for__CVarMediaIOMaxBufferSize__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0x20;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarMediaIOMaxBufferSize,L"MediaIO.TimedDataChannel.MaxBufferSize",local_res8,
             L"The max size the MediaIO channels is allowed to set the buffer size.",0);
  atexit(_dynamic_atexit_destructor_for__CVarMediaIOMaxBufferSize__);
  return;
}

// `dynamic_initializer_for_'CVarMediaIOScheduleOnAnyThread'' @ 1413de8f0

void __cdecl _dynamic_initializer_for__CVarMediaIOScheduleOnAnyThread__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarMediaIOScheduleOnAnyThread,L"MediaIO.ScheduleOnAnyThread",local_res8,
             L"Whether to wait for resource readback in a separate thread. (Experimental)",0x20);
  atexit(_dynamic_atexit_destructor_for__CVarMediaIOScheduleOnAnyThread__);
  return;
}

// `dynamic_initializer_for_'Deinterlacer'' @ 1413de940

void __cdecl UE::CaptureCardMediaSource::_dynamic_initializer_for__Deinterlacer__(void)

{
  ::FName::FName(&Deinterlacer,"Deinterlacer");
  return;
}

// `dynamic_initializer_for_'EvaluationType'' @ 1413de960

void __cdecl UE::CaptureCardMediaSource::_dynamic_initializer_for__EvaluationType__(void)

{
  ::FName::FName(&EvaluationType,"EvaluationType");
  return;
}

// `dynamic_initializer_for_'FMediaIODeinterlacerTestsAutomationSpecInstance'' @ 1413de980

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FMediaIODeinterlacerTestsAutomationSpecInstance__
          (void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FMediaIODeinterlacerTests");
  FAutomationSpecBase::FAutomationSpecBase
            ((FAutomationSpecBase *)&FMediaIODeinterlacerTestsAutomationSpecInstance,&local_18,false
            );
  FMediaIODeinterlacerTestsAutomationSpecInstance._0_8_ = &___7FMediaIODeinterlacerTests__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FMediaIODeinterlacerTestsAutomationSpecInstance__);
  return;
}

// `dynamic_initializer_for_'FMediaIOSetErrorState'' @ 1413de9e0

void __cdecl _dynamic_initializer_for__FMediaIOSetErrorState__(void)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  local_48 = (undefined1  [8])0x0;
  local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_40.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  local_18 = &local_40;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,<lambda_24>_>
               ::_vftable_;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&FMediaIOSetErrorState,L"MediaIO.SimulateError",
             L"Causes the next call to ProcessCapture_RenderThread to fail.",
             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_48,0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  if ((local_40.DelegateSize != 0) &&
     (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_40.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_40,0,0,0x10);
    local_40.DelegateSize = 0;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  if (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_40.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  atexit(_dynamic_atexit_destructor_for__FMediaIOSetErrorState__);
  return;
}

// `dynamic_initializer_for_'FrameDelay'' @ 1413deb10

void __cdecl TimeSynchronizableMedia::_dynamic_initializer_for__FrameDelay__(void)

{
  ::FName::FName(&FrameDelay,"FrameDelay");
  return;
}

// `dynamic_initializer_for_'Framelock'' @ 1413deb30

void __cdecl UE::CaptureCardMediaSource::_dynamic_initializer_for__Framelock__(void)

{
  ::FName::FName(&Framelock,"Framelock");
  return;
}

// `dynamic_initializer_for_'GPUStat_MediaCapture_CaptureFrame'' @ 1413deb50

void __cdecl _dynamic_initializer_for__GPUStat_MediaCapture_CaptureFrame__(void)

{
  atexit(_dynamic_atexit_destructor_for__GPUStat_MediaCapture_CaptureFrame__);
  return;
}

// `dynamic_initializer_for_'GPUStat_MediaCapture_ColorConversion'' @ 1413deb70

void __cdecl _dynamic_initializer_for__GPUStat_MediaCapture_ColorConversion__(void)

{
  atexit(_dynamic_atexit_destructor_for__GPUStat_MediaCapture_ColorConversion__);
  return;
}

// `dynamic_initializer_for_'GPUStat_MediaCapture_Conversion'' @ 1413deb90

void __cdecl _dynamic_initializer_for__GPUStat_MediaCapture_Conversion__(void)

{
  atexit(_dynamic_atexit_destructor_for__GPUStat_MediaCapture_Conversion__);
  return;
}

// `dynamic_initializer_for_'GPUStat_MediaCapture_CustomCapture'' @ 1413debb0

void __cdecl _dynamic_initializer_for__GPUStat_MediaCapture_CustomCapture__(void)

{
  atexit(_dynamic_atexit_destructor_for__GPUStat_MediaCapture_CustomCapture__);
  return;
}

// `dynamic_initializer_for_'GPUStat_MediaCapture_ProcessCapture'' @ 1413debd0

void __cdecl _dynamic_initializer_for__GPUStat_MediaCapture_ProcessCapture__(void)

{
  atexit(_dynamic_atexit_destructor_for__GPUStat_MediaCapture_ProcessCapture__);
  return;
}

// `dynamic_initializer_for_'GPUStat_MediaCapture_Readback'' @ 1413debf0

void __cdecl _dynamic_initializer_for__GPUStat_MediaCapture_Readback__(void)

{
  atexit(_dynamic_atexit_destructor_for__GPUStat_MediaCapture_Readback__);
  return;
}

// `dynamic_initializer_for_'GPUStat_MediaCapture_Resample'' @ 1413dec10

void __cdecl _dynamic_initializer_for__GPUStat_MediaCapture_Resample__(void)

{
  atexit(_dynamic_atexit_destructor_for__GPUStat_MediaCapture_Resample__);
  return;
}

// `dynamic_initializer_for_'GPUStat_MediaCapture_SyncPoint'' @ 1413dec30

void __cdecl _dynamic_initializer_for__GPUStat_MediaCapture_SyncPoint__(void)

{
  atexit(_dynamic_atexit_destructor_for__GPUStat_MediaCapture_SyncPoint__);
  return;
}

// `dynamic_initializer_for_'GPUStat_MediaIO_ColorConversion'' @ 1413dec50

void __cdecl _dynamic_initializer_for__GPUStat_MediaIO_ColorConversion__(void)

{
  atexit(_dynamic_atexit_destructor_for__GPUStat_MediaIO_ColorConversion__);
  return;
}

// `dynamic_initializer_for_'GPUStat_STAT_MediaIOPlayer_JITR_TransferTexture'' @ 1413dec70

void __cdecl _dynamic_initializer_for__GPUStat_STAT_MediaIOPlayer_JITR_TransferTexture__(void)

{
  atexit(_dynamic_atexit_destructor_for__GPUStat_STAT_MediaIOPlayer_JITR_TransferTexture__);
  return;
}

// `dynamic_initializer_for_'HighPerformanceClockDelta'' @ 1413dec90

void __cdecl MediaIOCorePlayerDetail::_dynamic_initializer_for__HighPerformanceClockDelta__(void)

{
  longlong local_res8;
  LARGE_INTEGER local_res10 [3];
  
  FDateTime::Now();
  QueryPerformanceCounter(local_res10);
  HighPerformanceClockDelta =
       (double)(local_res8 % 864000000000) * __real_3e7ad7f29abcaf48 -
       ((double)local_res10[0].QuadPart * FGenericPlatformTime::SecondsPerCycle +
       __real_4170000000000000);
  return;
}

// `dynamic_initializer_for_'InterlaceFieldOrder'' @ 1413ded00

void __cdecl UE::CaptureCardMediaSource::_dynamic_initializer_for__InterlaceFieldOrder__(void)

{
  ::FName::FName(&InterlaceFieldOrder,"InterlaceFieldOrder");
  return;
}

// `dynamic_initializer_for_'LevelEditorName'' @ 1413ded20

void __cdecl MediaCaptureDetails::_dynamic_initializer_for__LevelEditorName__(void)

{
  ::FName::FName(&LevelEditorName,L"LevelEditor");
  return;
}

// `dynamic_initializer_for_'LogMediaIOAudioOutput'' @ 1413ded40

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogMediaIOAudioOutput__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogMediaIOAudioOutput,L"LogMediaIOAudioOutput",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogMediaIOAudioOutput__);
  return;
}

// `dynamic_initializer_for_'LogMediaIOCore'' @ 1413ded80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogMediaIOCore__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogMediaIOCore,L"LogMediaIOCore",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogMediaIOCore__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantMediaIOCore'' @ 1413dedc0

void __cdecl _dynamic_initializer_for__ModuleRegistrantMediaIOCore__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "MediaIOCore";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"MediaIOCore",0xb);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FMediaIOCoreModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'NAME_Protocol'' @ 1413dee10

void __cdecl MediaIOCoreDefinitions::_dynamic_initializer_for__NAME_Protocol__(void)

{
  ::FName::FName(&NAME_Protocol,L"protocol");
  return;
}

// `dynamic_initializer_for_'OpenColorIOSettings'' @ 1413dee30

void __cdecl UE::CaptureCardMediaSource::_dynamic_initializer_for__OpenColorIOSettings__(void)

{
  ::FName::FName(&OpenColorIOSettings,"OpenColorIOSettings");
  return;
}

// `dynamic_initializer_for_'OverrideSourceColorSpace'' @ 1413dee50

void __cdecl UE::CaptureCardMediaSource::_dynamic_initializer_for__OverrideSourceColorSpace__(void)

{
  ::FName::FName(&OverrideSourceColorSpace,"OverrideSourceColorSpace");
  return;
}

// `dynamic_initializer_for_'OverrideSourceEncoding'' @ 1413dee70

void __cdecl UE::CaptureCardMediaSource::_dynamic_initializer_for__OverrideSourceEncoding__(void)

{
  ::FName::FName(&OverrideSourceEncoding,"OverrideSourceEncoding");
  return;
}

// `dynamic_initializer_for_'RenderJIT'' @ 1413dee90

void __cdecl UE::CaptureCardMediaSource::_dynamic_initializer_for__RenderJIT__(void)

{
  ::FName::FName(&RenderJIT,"RenderJIT");
  return;
}

// `dynamic_initializer_for_'SourceColorSpace'' @ 1413deeb0

void __cdecl UE::CaptureCardMediaSource::_dynamic_initializer_for__SourceColorSpace__(void)

{
  ::FName::FName(&SourceColorSpace,"SourceColorcSpace");
  return;
}

// `dynamic_initializer_for_'SourceEncoding'' @ 1413deed0

void __cdecl UE::CaptureCardMediaSource::_dynamic_initializer_for__SourceEncoding__(void)

{
  ::FName::FName(&SourceEncoding,"SourceEncoding");
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_MediaCaptureHelper_AnyThread_LockResource'' @ 1413deef0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
_dynamic_initializer_for__StatPtr_STAT_MediaCaptureHelper_AnyThread_LockResource__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_MediaCaptureHelper_AnyThread_LockResource ==
      (FThreadSafeStaticStat<FStat_STAT_MediaCaptureHelper_AnyThread_LockResource>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_MediaCaptureHelper_AnyThread_LockResource");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_MediaCaptureHelper_AnyThread_LockResource,
               *pFVar1,L"MediaCapture AnyThread LockResource","STATGROUP_Media","STATCAT_Advanced",
               L"Media",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_MediaCaptureHelper_RenderThread_FrameCapture'' @ 1413def80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
_dynamic_initializer_for__StatPtr_STAT_MediaCaptureHelper_RenderThread_FrameCapture__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_MediaCaptureHelper_RenderThread_FrameCapture ==
      (FThreadSafeStaticStat<FStat_STAT_MediaCaptureHelper_RenderThread_FrameCapture>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_MediaCaptureHelper_RenderThread_FrameCapture");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &StatPtr_STAT_MediaCaptureHelper_RenderThread_FrameCapture,*pFVar1,
               L"MediaCapture RenderThread FrameCapture","STATGROUP_Media","STATCAT_Advanced",
               L"Media",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_MediaCaptureHelper_RenderThread_LockResource'' @ 1413df010

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
_dynamic_initializer_for__StatPtr_STAT_MediaCaptureHelper_RenderThread_LockResource__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_MediaCaptureHelper_RenderThread_LockResource ==
      (FThreadSafeStaticStat<FStat_STAT_MediaCaptureHelper_RenderThread_LockResource>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_MediaCaptureHelper_RenderThread_LockResource");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &StatPtr_STAT_MediaCaptureHelper_RenderThread_LockResource,*pFVar1,
               L"MediaCapture RenderThread LockResource","STATGROUP_Media","STATCAT_Advanced",
               L"Media",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_MediaCaptureHelper_RenderThread_RHI_CaptureCallback'' @ 1413df0a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
_dynamic_initializer_for__StatPtr_STAT_MediaCaptureHelper_RenderThread_RHI_CaptureCallback__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_MediaCaptureHelper_RenderThread_RHI_CaptureCallback ==
      (FThreadSafeStaticStat<FStat_STAT_MediaCaptureHelper_RenderThread_RHI_CaptureCallback>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_MediaCaptureHelper_RenderThread_RHI_CaptureCallback");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &StatPtr_STAT_MediaCaptureHelper_RenderThread_RHI_CaptureCallback,*pFVar1,
               L"MediaCapture RenderThread RHI Capture Callback","STATGROUP_Media",
               "STATCAT_Advanced",L"Media",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_MediaCapture_RenderThread_CaptureCallback'' @ 1413df130

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
_dynamic_initializer_for__StatPtr_STAT_MediaCapture_RenderThread_CaptureCallback__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_MediaCapture_RenderThread_CaptureCallback ==
      (FThreadSafeStaticStat<FStat_STAT_MediaCapture_RenderThread_CaptureCallback>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_MediaCapture_RenderThread_CaptureCallback");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_MediaCapture_RenderThread_CaptureCallback,
               *pFVar1,L"MediaCapture RenderThread CPU Capture Callback","STATGROUP_Media",
               "STATCAT_Advanced",L"Media",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_MediaCapture_RenderThread_LockResource'' @ 1413df1c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_MediaCapture_RenderThread_LockResource__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_MediaCapture_RenderThread_LockResource ==
      (FThreadSafeStaticStat<FStat_STAT_MediaCapture_RenderThread_LockResource>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_MediaCapture_RenderThread_LockResource");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_MediaCapture_RenderThread_LockResource,
               *pFVar1,L"MediaCapture RenderThread LockResource","STATGROUP_Media",
               "STATCAT_Advanced",L"Media",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_MediaCapture_RenderThread_RHI_CaptureCallback'' @ 1413df250

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
_dynamic_initializer_for__StatPtr_STAT_MediaCapture_RenderThread_RHI_CaptureCallback__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_MediaCapture_RenderThread_RHI_CaptureCallback ==
      (FThreadSafeStaticStat<FStat_STAT_MediaCapture_RenderThread_RHI_CaptureCallback>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_MediaCapture_RenderThread_RHI_CaptureCallback");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &StatPtr_STAT_MediaCapture_RenderThread_RHI_CaptureCallback,*pFVar1,
               L"MediaCapture RenderThread RHI Capture Callback","STATGROUP_Media",
               "STATCAT_Advanced",L"Media",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'TimeDelay'' @ 1413df2e0

void __cdecl TimeSynchronizableMedia::_dynamic_initializer_for__TimeDelay__(void)

{
  ::FName::FName(&TimeDelay,"TimeDelay");
  return;
}

// `dynamic_initializer_for_'UseTimeSynchronizatioOption'' @ 1413df300

void __cdecl TimeSynchronizableMedia::_dynamic_initializer_for__UseTimeSynchronizatioOption__(void)

{
  ::FName::FName(&UseTimeSynchronizatioOption,"UseTimeSynchronization");
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Private_RenderTargetMediaCapture_h__Script_MediaIOCore_3948431843'' @ 1413df320

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Private_RenderTargetMediaCapture_h__Script_MediaIOCore_3948431843__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MediaIOCore",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Private_RenderTargetMediaCapture_h__Script_MediaIOCore_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Private_RenderTargetMediaOutput_h__Script_MediaIOCore_1807586577'' @ 1413df360

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Private_RenderTargetMediaOutput_h__Script_MediaIOCore_1807586577__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MediaIOCore",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Private_RenderTargetMediaOutput_h__Script_MediaIOCore_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_CaptureCardMediaSource_h__Script_MediaIOCore_3072356775'' @ 1413df3a0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_CaptureCardMediaSource_h__Script_MediaIOCore_3072356775__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MediaIOCore",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_CaptureCardMediaSource_h__Script_MediaIOCore_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_CaptureCardMediaSource_h__Script_MediaIOCore_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_FileMediaCapture_h__Script_MediaIOCore_1947716192'' @ 1413df3f0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_FileMediaCapture_h__Script_MediaIOCore_1947716192__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MediaIOCore",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_FileMediaCapture_h__Script_MediaIOCore_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_FileMediaOutput_h__Script_MediaIOCore_2397569634'' @ 1413df430

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_FileMediaOutput_h__Script_MediaIOCore_2397569634__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MediaIOCore",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_FileMediaOutput_h__Script_MediaIOCore_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_FileMediaOutput_h__Script_MediaIOCore_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_MediaCapture_h__Script_MediaIOCore_4065877345'' @ 1413df480

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_MediaCapture_h__Script_MediaIOCore_4065877345__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MediaIOCore",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_MediaCapture_h__Script_MediaIOCore_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_MediaCapture_h__Script_MediaIOCore_Statics
             ::ScriptStructInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_MediaCapture_h__Script_MediaIOCore_Statics
             ::EnumInfo,6);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_MediaIOCoreDefinitions_h__Script_MediaIOCore_1320843984'' @ 1413df4d0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_MediaIOCoreDefinitions_h__Script_MediaIOCore_1320843984__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MediaIOCore",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_MediaIOCoreDefinitions_h__Script_MediaIOCore_Statics
             ::ScriptStructInfo,8,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_MediaIOCoreDefinitions_h__Script_MediaIOCore_Statics
             ::EnumInfo,10);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_MediaIOCoreDeinterlacer_h__Script_MediaIOCore_311172048'' @ 1413df520

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_MediaIOCoreDeinterlacer_h__Script_MediaIOCore_311172048__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MediaIOCore",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_MediaIOCoreDeinterlacer_h__Script_MediaIOCore_Statics
             ::ClassInfo,4,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_MediaIOCoreSubsystem_h__Script_MediaIOCore_469271328'' @ 1413df560

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_MediaIOCoreSubsystem_h__Script_MediaIOCore_469271328__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MediaIOCore",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_MediaIOCoreSubsystem_h__Script_MediaIOCore_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_MediaOutput_h__Script_MediaIOCore_3890044862'' @ 1413df5a0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_MediaOutput_h__Script_MediaIOCore_3890044862__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MediaIOCore",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_MediaOutput_h__Script_MediaIOCore_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_MediaOutput_h__Script_MediaIOCore_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_MediaIOCore'' @ 1413df5f0

void __cdecl _dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_MediaIOCore__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0x13229b38;
  local_res8[0].DeclarationsHash = 0x79f83020;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_MediaIOCore,L"/Script/MediaIOCore",
             &Z_Registration_Info_UPackage__Script_MediaIOCore,local_res8);
  return;
}

// Z_Construct_UClass_UBlendDeinterlacer @ 14d77b600

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UBlendDeinterlacer(void)

{
  if (Z_Registration_Info_UClass_UBlendDeinterlacer.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UBlendDeinterlacer.OuterSingleton,
               &Z_Construct_UClass_UBlendDeinterlacer_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UBlendDeinterlacer.OuterSingleton;
}

// Z_Construct_UClass_UBobDeinterlacer @ 14d77b640

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UBobDeinterlacer(void)

{
  if (Z_Registration_Info_UClass_UBobDeinterlacer.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UBobDeinterlacer.OuterSingleton,
               &Z_Construct_UClass_UBobDeinterlacer_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UBobDeinterlacer.OuterSingleton;
}

// Z_Construct_UClass_UDiscardDeinterlacer @ 14d77b680

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UDiscardDeinterlacer(void)

{
  if (Z_Registration_Info_UClass_UDiscardDeinterlacer.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UDiscardDeinterlacer.OuterSingleton,
               &Z_Construct_UClass_UDiscardDeinterlacer_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UDiscardDeinterlacer.OuterSingleton;
}

// Z_Construct_UClass_UVideoDeinterlacer @ 14d77b6c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UVideoDeinterlacer(void)

{
  if (Z_Registration_Info_UClass_UVideoDeinterlacer.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UVideoDeinterlacer.OuterSingleton,
               &Z_Construct_UClass_UVideoDeinterlacer_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UVideoDeinterlacer.OuterSingleton;
}

// Z_Construct_UClass_UFileMediaCapture @ 14d77b880

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UFileMediaCapture(void)

{
  if (Z_Registration_Info_UClass_UFileMediaCapture.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UFileMediaCapture.OuterSingleton,
               &Z_Construct_UClass_UFileMediaCapture_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UFileMediaCapture.OuterSingleton;
}

// Z_Construct_UClass_UMediaCapture @ 14d77b900

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMediaCapture(void)

{
  if (Z_Registration_Info_UClass_UMediaCapture.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMediaCapture.OuterSingleton,
               &Z_Construct_UClass_UMediaCapture_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMediaCapture.OuterSingleton;
}

// `scalar_deleting_destructor' @ 14d77b960

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,MediaIOCorePlayerDetail::<lambda_28>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,MediaIOCorePlayerDetail::<lambda_28>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d77bb70

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,MediaIOCorePlayerDetail::<lambda_29>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,MediaIOCorePlayerDetail::<lambda_29>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// EMediaCaptureSourceType_StaticEnum @ 14d77bba0

UEnum * __cdecl EMediaCaptureSourceType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMediaCaptureSourceType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MediaIOCore();
    Z_Registration_Info_UEnum_EMediaCaptureSourceType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MediaIOCore_EMediaCaptureSourceType,(UObject *)pUVar1,
                       L"EMediaCaptureSourceType");
  }
  return Z_Registration_Info_UEnum_EMediaCaptureSourceType.OuterSingleton;
}

// Z_Construct_UFunction_UMediaOutput_CreateMediaCapture @ 14d77bc50

UFunction * __cdecl Z_Construct_UFunction_UMediaOutput_CreateMediaCapture(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMediaOutput_CreateMediaCapture_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14d77bd50

void __cdecl
Z_Construct_UFunction_UMediaOutput_Validate_Statics::NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// Z_Construct_UFunction_UMediaOutput_Validate @ 14d77bd60

UFunction * __cdecl Z_Construct_UFunction_UMediaOutput_Validate(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UMediaOutput_Validate_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UCaptureCardMediaSource @ 14d77c1b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UCaptureCardMediaSource(void)

{
  if (Z_Registration_Info_UClass_UCaptureCardMediaSource.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UCaptureCardMediaSource.OuterSingleton,
               &Z_Construct_UClass_UCaptureCardMediaSource_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UCaptureCardMediaSource.OuterSingleton;
}

// Z_Construct_UEnum_MediaIOCore_EMediaIOCoreSourceEncoding @ 14d77c1f0

UEnum * __cdecl Z_Construct_UEnum_MediaIOCore_EMediaIOCoreSourceEncoding(void)

{
  if (Z_Registration_Info_UEnum_EMediaIOCoreSourceEncoding.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EMediaIOCoreSourceEncoding.InnerSingleton,
               &Z_Construct_UEnum_MediaIOCore_EMediaIOCoreSourceEncoding_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EMediaIOCoreSourceEncoding.InnerSingleton;
}

// Z_Construct_UEnum_MediaIOCore_EMediaIOInterlaceFieldOrder @ 14d77c230

UEnum * __cdecl Z_Construct_UEnum_MediaIOCore_EMediaIOInterlaceFieldOrder(void)

{
  if (Z_Registration_Info_UEnum_EMediaIOInterlaceFieldOrder.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EMediaIOInterlaceFieldOrder.InnerSingleton,
               &Z_Construct_UEnum_MediaIOCore_EMediaIOInterlaceFieldOrder_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EMediaIOInterlaceFieldOrder.InnerSingleton;
}

// Z_Construct_UEnum_MediaIOCore_EMediaIOSampleEvaluationType @ 14d77c270

UEnum * __cdecl Z_Construct_UEnum_MediaIOCore_EMediaIOSampleEvaluationType(void)

{
  if (Z_Registration_Info_UEnum_EMediaIOSampleEvaluationType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EMediaIOSampleEvaluationType.InnerSingleton,
               &Z_Construct_UEnum_MediaIOCore_EMediaIOSampleEvaluationType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EMediaIOSampleEvaluationType.InnerSingleton;
}

// EMediaIOCoreSourceEncoding_StaticEnum @ 14d77c2b0

UEnum * __cdecl EMediaIOCoreSourceEncoding_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMediaIOCoreSourceEncoding.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MediaIOCore();
    Z_Registration_Info_UEnum_EMediaIOCoreSourceEncoding.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MediaIOCore_EMediaIOCoreSourceEncoding,(UObject *)pUVar1,
                       L"EMediaIOCoreSourceEncoding");
  }
  return Z_Registration_Info_UEnum_EMediaIOCoreSourceEncoding.OuterSingleton;
}

// NewProp_bRenderJIT_SetBit @ 14d77c2f0

void __cdecl
Z_Construct_UClass_UCaptureCardMediaSource_Statics::NewProp_bRenderJIT_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xa0) = 1;
  return;
}

// NewProp_bFramelock_SetBit @ 14d77c300

void __cdecl
Z_Construct_UClass_UCaptureCardMediaSource_Statics::NewProp_bFramelock_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xa1) = 1;
  return;
}

// NewProp_bOverrideSourceEncoding_SetBit @ 14d77c310

void __cdecl
Z_Construct_UClass_UCaptureCardMediaSource_Statics::NewProp_bOverrideSourceEncoding_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xb1) = 1;
  return;
}

// NewProp_bOverrideSourceColorSpace_SetBit @ 14d77c320

void __cdecl
Z_Construct_UClass_UCaptureCardMediaSource_Statics::NewProp_bOverrideSourceColorSpace_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xb3) = 1;
  return;
}

// Z_Construct_UDelegateFunction_MediaIOCore_MediaCaptureStateChangedSignature__DelegateSignature @ 14d77c330

UFunction * __cdecl
Z_Construct_UDelegateFunction_MediaIOCore_MediaCaptureStateChangedSignature__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_MediaIOCore_MediaCaptureStateChangedSignature__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UPackage__Script_MediaIOCore @ 14d77c370

UPackage * __cdecl Z_Construct_UPackage__Script_MediaIOCore(void)

{
  if (Z_Registration_Info_UPackage__Script_MediaIOCore.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_MediaIOCore.OuterSingleton,&PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_MediaIOCore.OuterSingleton;
}

// `scalar_deleting_destructor' @ 14d77c3f0

void * __thiscall
FMediaIOCoreModule::_scalar_deleting_destructor_(FMediaIOCoreModule *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->DeviceProviders).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d77c5e0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,<lambda_24>_>::
_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,<lambda_24>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// Z_Construct_UClass_UMediaOutput_NoRegister @ 14d77c610

UClass * __cdecl Z_Construct_UClass_UMediaOutput_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMediaOutput.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MediaIOCore",L"MediaOutput",
               &Z_Registration_Info_UClass_UMediaOutput.InnerSingleton,
               UMediaOutput::StaticRegisterNativesUMediaOutput,0x30,8,CLASS_Intrinsic|CLASS_Abstract
               ,CASTCLASS_None,L"Engine",InternalConstructor<UMediaOutput>,
               InternalVTableHelperCtorCaller<UMediaOutput>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMediaOutput.InnerSingleton;
}

// `scalar_deleting_destructor' @ 14d77c9b0

void * __thiscall
IMediaIOCoreModule::_scalar_deleting_destructor_(IMediaIOCoreModule *this,uint param_1)

{
  *this = (IMediaIOCoreModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// Z_Construct_UEnum_MediaIOCore_EMediaCaptureCroppingType @ 14d77c9f0

UEnum * __cdecl Z_Construct_UEnum_MediaIOCore_EMediaCaptureCroppingType(void)

{
  if (Z_Registration_Info_UEnum_EMediaCaptureCroppingType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EMediaCaptureCroppingType.InnerSingleton,
               &Z_Construct_UEnum_MediaIOCore_EMediaCaptureCroppingType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EMediaCaptureCroppingType.InnerSingleton;
}

// Z_Construct_UEnum_MediaIOCore_EMediaCaptureOverrunAction @ 14d77ca30

UEnum * __cdecl Z_Construct_UEnum_MediaIOCore_EMediaCaptureOverrunAction(void)

{
  if (Z_Registration_Info_UEnum_EMediaCaptureOverrunAction.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EMediaCaptureOverrunAction.InnerSingleton,
               &Z_Construct_UEnum_MediaIOCore_EMediaCaptureOverrunAction_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EMediaCaptureOverrunAction.InnerSingleton;
}

// Z_Construct_UEnum_MediaIOCore_EMediaCapturePhase @ 14d77ca70

UEnum * __cdecl Z_Construct_UEnum_MediaIOCore_EMediaCapturePhase(void)

{
  if (Z_Registration_Info_UEnum_EMediaCapturePhase.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EMediaCapturePhase.InnerSingleton,
               &Z_Construct_UEnum_MediaIOCore_EMediaCapturePhase_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EMediaCapturePhase.InnerSingleton;
}

// Z_Construct_UEnum_MediaIOCore_EMediaCaptureResizeMethod @ 14d77cab0

UEnum * __cdecl Z_Construct_UEnum_MediaIOCore_EMediaCaptureResizeMethod(void)

{
  if (Z_Registration_Info_UEnum_EMediaCaptureResizeMethod.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EMediaCaptureResizeMethod.InnerSingleton,
               &Z_Construct_UEnum_MediaIOCore_EMediaCaptureResizeMethod_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EMediaCaptureResizeMethod.InnerSingleton;
}

// Z_Construct_UEnum_MediaIOCore_EMediaCaptureState @ 14d77caf0

UEnum * __cdecl Z_Construct_UEnum_MediaIOCore_EMediaCaptureState(void)

{
  if (Z_Registration_Info_UEnum_EMediaCaptureState.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EMediaCaptureState.InnerSingleton,
               &Z_Construct_UEnum_MediaIOCore_EMediaCaptureState_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EMediaCaptureState.InnerSingleton;
}

// Z_Construct_UScriptStruct_FMediaCaptureOptions @ 14d77cb30

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMediaCaptureOptions(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMediaCaptureOptions.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMediaCaptureOptions.InnerSingleton,
               &Z_Construct_UScriptStruct_FMediaCaptureOptions_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMediaCaptureOptions.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FMediaCaptureOptions.InnerSingleton;
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

// EMediaCaptureState_StaticEnum @ 14d77cbb0

UEnum * __cdecl EMediaCaptureState_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMediaCaptureState.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MediaIOCore();
    Z_Registration_Info_UEnum_EMediaCaptureState.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MediaIOCore_EMediaCaptureState,(UObject *)pUVar1,
                       L"EMediaCaptureState");
  }
  return Z_Registration_Info_UEnum_EMediaCaptureState.OuterSingleton;
}

// Z_Construct_UClass_UFileMediaOutput @ 14d77cbf0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UFileMediaOutput(void)

{
  if (Z_Registration_Info_UClass_UFileMediaOutput.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UFileMediaOutput.OuterSingleton,
               &Z_Construct_UClass_UFileMediaOutput_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UFileMediaOutput.OuterSingleton;
}

// Z_Construct_UClass_UMediaOutput @ 14d77cc30

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMediaOutput(void)

{
  if (Z_Registration_Info_UClass_UMediaOutput.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMediaOutput.OuterSingleton,
               &Z_Construct_UClass_UMediaOutput_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMediaOutput.OuterSingleton;
}

// Z_Construct_UEnum_MediaIOCore_EFileMediaOutputPixelFormat @ 14d77cc70

UEnum * __cdecl Z_Construct_UEnum_MediaIOCore_EFileMediaOutputPixelFormat(void)

{
  if (Z_Registration_Info_UEnum_EFileMediaOutputPixelFormat.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EFileMediaOutputPixelFormat.InnerSingleton,
               &Z_Construct_UEnum_MediaIOCore_EFileMediaOutputPixelFormat_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EFileMediaOutputPixelFormat.InnerSingleton;
}

// EFileMediaOutputPixelFormat_StaticEnum @ 14d77ccb0

UEnum * __cdecl EFileMediaOutputPixelFormat_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EFileMediaOutputPixelFormat.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MediaIOCore();
    Z_Registration_Info_UEnum_EFileMediaOutputPixelFormat.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MediaIOCore_EFileMediaOutputPixelFormat,(UObject *)pUVar1,
                       L"EFileMediaOutputPixelFormat");
  }
  return Z_Registration_Info_UEnum_EFileMediaOutputPixelFormat.OuterSingleton;
}

// EMediaCaptureResourceType_StaticEnum @ 14d77ccf0

UEnum * __cdecl EMediaCaptureResourceType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMediaCaptureResourceType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MediaIOCore();
    Z_Registration_Info_UEnum_EMediaCaptureResourceType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MediaIOCore_EMediaCaptureResourceType,(UObject *)pUVar1,
                       L"EMediaCaptureResourceType");
  }
  return Z_Registration_Info_UEnum_EMediaCaptureResourceType.OuterSingleton;
}

// EMediaCaptureCroppingType_StaticEnum @ 14d77cd30

UEnum * __cdecl EMediaCaptureCroppingType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMediaCaptureCroppingType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MediaIOCore();
    Z_Registration_Info_UEnum_EMediaCaptureCroppingType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MediaIOCore_EMediaCaptureCroppingType,(UObject *)pUVar1,
                       L"EMediaCaptureCroppingType");
  }
  return Z_Registration_Info_UEnum_EMediaCaptureCroppingType.OuterSingleton;
}

// NewProp_bOverrideDesiredSize_SetBit @ 14d77cdd0

void __cdecl
Z_Construct_UClass_UFileMediaOutput_Statics::NewProp_bOverrideDesiredSize_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xb0) = 1;
  return;
}

// NewProp_bOverridePixelFormat_SetBit @ 14d77ce40

void __cdecl
Z_Construct_UClass_UFileMediaOutput_Statics::NewProp_bOverridePixelFormat_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xbc) = 1;
  return;
}

// NewProp_bInvertAlpha_SetBit @ 14d77cf20

void __cdecl Z_Construct_UClass_UFileMediaOutput_Statics::NewProp_bInvertAlpha_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc4) = 1;
  return;
}

// EMediaCaptureOverrunAction_StaticEnum @ 14d77cf40

UEnum * __cdecl EMediaCaptureOverrunAction_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMediaCaptureOverrunAction.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MediaIOCore();
    Z_Registration_Info_UEnum_EMediaCaptureOverrunAction.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MediaIOCore_EMediaCaptureOverrunAction,(UObject *)pUVar1,
                       L"EMediaCaptureOverrunAction");
  }
  return Z_Registration_Info_UEnum_EMediaCaptureOverrunAction.OuterSingleton;
}

// EMediaCapturePhase_StaticEnum @ 14d77d090

UEnum * __cdecl EMediaCapturePhase_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMediaCapturePhase.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MediaIOCore();
    Z_Registration_Info_UEnum_EMediaCapturePhase.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MediaIOCore_EMediaCapturePhase,(UObject *)pUVar1,
                       L"EMediaCapturePhase");
  }
  return Z_Registration_Info_UEnum_EMediaCapturePhase.OuterSingleton;
}

// EMediaCaptureResizeMethod_StaticEnum @ 14d77d0d0

UEnum * __cdecl EMediaCaptureResizeMethod_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMediaCaptureResizeMethod.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MediaIOCore();
    Z_Registration_Info_UEnum_EMediaCaptureResizeMethod.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MediaIOCore_EMediaCaptureResizeMethod,(UObject *)pUVar1,
                       L"EMediaCaptureResizeMethod");
  }
  return Z_Registration_Info_UEnum_EMediaCaptureResizeMethod.OuterSingleton;
}

// NewProp_bAutoRestartOnSourceSizeChange_SetBit @ 14d77d110

void __cdecl
Z_Construct_UScriptStruct_FMediaCaptureOptions_Statics::
NewProp_bAutoRestartOnSourceSizeChange_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewProp_bSkipFrameWhenRunningExpensiveTasks_SetBit @ 14d77d120

void __cdecl
Z_Construct_UScriptStruct_FMediaCaptureOptions_Statics::
NewProp_bSkipFrameWhenRunningExpensiveTasks_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xb1) = 1;
  return;
}

// NewProp_bConvertToDesiredPixelFormat_SetBit @ 14d77d130

void __cdecl
Z_Construct_UScriptStruct_FMediaCaptureOptions_Statics::NewProp_bConvertToDesiredPixelFormat_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xb2) = 1;
  return;
}

// NewProp_bForceAlphaToOneOnConversion_SetBit @ 14d77d140

void __cdecl
Z_Construct_UScriptStruct_FMediaCaptureOptions_Statics::NewProp_bForceAlphaToOneOnConversion_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xb3) = 1;
  return;
}

// NewProp_bApplyLinearToSRGBConversion_SetBit @ 14d77d150

void __cdecl
Z_Construct_UScriptStruct_FMediaCaptureOptions_Statics::NewProp_bApplyLinearToSRGBConversion_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xb4) = 1;
  return;
}

// NewProp_bAutostopOnCapture_SetBit @ 14d77d160

void __cdecl
Z_Construct_UScriptStruct_FMediaCaptureOptions_Statics::NewProp_bAutostopOnCapture_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xb5) = 1;
  return;
}

// NewStructOps @ 14d77d170

void * __cdecl Z_Construct_UScriptStruct_FMediaCaptureOptions_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xc0;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMediaCaptureOptions,&UE::CoreUObject::Private::Construct<FMediaCaptureOptions>,&UE::CoreUObject::Private::ConstructForTests<FMediaCaptureOptions>,&UE::CoreUObject::Private::Destruct<FMediaCaptureOptions>,&UE::CoreUObject::Private::PostSerialize<FMediaCaptureOptions>,&UE::CoreUObject::Private::Copy<FMediaCaptureOptions>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_URenderTargetMediaCapture @ 14d77d1b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_URenderTargetMediaCapture(void)

{
  if (Z_Registration_Info_UClass_URenderTargetMediaCapture.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_URenderTargetMediaCapture.OuterSingleton,
               &Z_Construct_UClass_URenderTargetMediaCapture_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_URenderTargetMediaCapture.OuterSingleton;
}

// NewProp_ReturnValue_SetBit @ 14d77d1f0

void __cdecl
Z_Construct_UFunction_UMediaCapture_CaptureActiveSceneViewport_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc0) = 1;
  return;
}

// Z_Construct_UFunction_UMediaCapture_CaptureActiveSceneViewport @ 14d77d200

UFunction * __cdecl Z_Construct_UFunction_UMediaCapture_CaptureActiveSceneViewport(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMediaCapture_CaptureActiveSceneViewport_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14d77d240

void __cdecl
Z_Construct_UFunction_UMediaCapture_CaptureTextureRenderTarget2D_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 200) = 1;
  return;
}

// Z_Construct_UClass_URenderTargetMediaOutput @ 14d77d250

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_URenderTargetMediaOutput(void)

{
  if (Z_Registration_Info_UClass_URenderTargetMediaOutput.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_URenderTargetMediaOutput.OuterSingleton,
               &Z_Construct_UClass_URenderTargetMediaOutput_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_URenderTargetMediaOutput.OuterSingleton;
}

// Z_Construct_UFunction_UMediaCapture_CaptureTextureRenderTarget2D @ 14d77d290

UFunction * __cdecl Z_Construct_UFunction_UMediaCapture_CaptureTextureRenderTarget2D(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMediaCapture_CaptureTextureRenderTarget2D_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// NewProp_bInvertAlpha_SetBit @ 14d77d2d0

void __cdecl
Z_Construct_UClass_URenderTargetMediaOutput_Statics::NewProp_bInvertAlpha_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x30) = 1;
  return;
}

// Z_Construct_UFunction_UMediaCapture_GetDesiredPixelFormat @ 14d77d2e0

UFunction * __cdecl Z_Construct_UFunction_UMediaCapture_GetDesiredPixelFormat(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMediaCapture_GetDesiredPixelFormat_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMediaCapture_GetDesiredSize @ 14d77d320

UFunction * __cdecl Z_Construct_UFunction_UMediaCapture_GetDesiredSize(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMediaCapture_GetDesiredSize_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMediaCapture_GetState @ 14d77d360

UFunction * __cdecl Z_Construct_UFunction_UMediaCapture_GetState(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UMediaCapture_GetState_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMediaCapture_SetMediaOutput @ 14d77d3a0

UFunction * __cdecl Z_Construct_UFunction_UMediaCapture_SetMediaOutput(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMediaCapture_SetMediaOutput_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bAllowPendingFrameToBeProcess_SetBit @ 14d77d3e0

void __cdecl
Z_Construct_UFunction_UMediaCapture_StopCapture_Statics::
NewProp_bAllowPendingFrameToBeProcess_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UMediaCapture_StopCapture @ 14d77d3f0

UFunction * __cdecl Z_Construct_UFunction_UMediaCapture_StopCapture(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UMediaCapture_StopCapture_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14d77d430

void __cdecl
Z_Construct_UFunction_UMediaCapture_UpdateTextureRenderTarget2D_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// Z_Construct_UFunction_UMediaCapture_UpdateTextureRenderTarget2D @ 14d77d440

UFunction * __cdecl Z_Construct_UFunction_UMediaCapture_UpdateTextureRenderTarget2D(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMediaCapture_UpdateTextureRenderTarget2D_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UMediaIOCoreSubsystem @ 14d77d640

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMediaIOCoreSubsystem(void)

{
  if (Z_Registration_Info_UClass_UMediaIOCoreSubsystem.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMediaIOCoreSubsystem.OuterSingleton,
               &Z_Construct_UClass_UMediaIOCoreSubsystem_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMediaIOCoreSubsystem.OuterSingleton;
}

// `scalar_deleting_destructor' @ 14d77da30

void * __thiscall
FMediaIODeinterlacerTests::_scalar_deleting_destructor_
          (FMediaIODeinterlacerTests *this,uint param_1)

{
  FAutomationSpecBase::~FAutomationSpecBase((FAutomationSpecBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x198);
  }
  return this;
}

// Z_Construct_UEnum_MediaIOCore_EMediaIOAutoDetectableTimecodeFormat @ 14d77dc80

UEnum * __cdecl Z_Construct_UEnum_MediaIOCore_EMediaIOAutoDetectableTimecodeFormat(void)

{
  if (Z_Registration_Info_UEnum_EMediaIOAutoDetectableTimecodeFormat.InnerSingleton == (UEnum *)0x0)
  {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EMediaIOAutoDetectableTimecodeFormat.InnerSingleton,
               &Z_Construct_UEnum_MediaIOCore_EMediaIOAutoDetectableTimecodeFormat_Statics::
                EnumParams);
  }
  return Z_Registration_Info_UEnum_EMediaIOAutoDetectableTimecodeFormat.InnerSingleton;
}

// Z_Construct_UEnum_MediaIOCore_EMediaIOInputType @ 14d77dcc0

UEnum * __cdecl Z_Construct_UEnum_MediaIOCore_EMediaIOInputType(void)

{
  if (Z_Registration_Info_UEnum_EMediaIOInputType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EMediaIOInputType.InnerSingleton,
               &Z_Construct_UEnum_MediaIOCore_EMediaIOInputType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EMediaIOInputType.InnerSingleton;
}

// Z_Construct_UEnum_MediaIOCore_EMediaIOOutputType @ 14d77dd00

UEnum * __cdecl Z_Construct_UEnum_MediaIOCore_EMediaIOOutputType(void)

{
  if (Z_Registration_Info_UEnum_EMediaIOOutputType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EMediaIOOutputType.InnerSingleton,
               &Z_Construct_UEnum_MediaIOCore_EMediaIOOutputType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EMediaIOOutputType.InnerSingleton;
}

// Z_Construct_UEnum_MediaIOCore_EMediaIOQuadLinkTransportType @ 14d77dd40

UEnum * __cdecl Z_Construct_UEnum_MediaIOCore_EMediaIOQuadLinkTransportType(void)

{
  if (Z_Registration_Info_UEnum_EMediaIOQuadLinkTransportType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EMediaIOQuadLinkTransportType.InnerSingleton,
               &Z_Construct_UEnum_MediaIOCore_EMediaIOQuadLinkTransportType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EMediaIOQuadLinkTransportType.InnerSingleton;
}

// Z_Construct_UEnum_MediaIOCore_EMediaIOReferenceType @ 14d77dd80

UEnum * __cdecl Z_Construct_UEnum_MediaIOCore_EMediaIOReferenceType(void)

{
  if (Z_Registration_Info_UEnum_EMediaIOReferenceType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EMediaIOReferenceType.InnerSingleton,
               &Z_Construct_UEnum_MediaIOCore_EMediaIOReferenceType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EMediaIOReferenceType.InnerSingleton;
}

// Z_Construct_UEnum_MediaIOCore_EMediaIOStandardType @ 14d77ddc0

UEnum * __cdecl Z_Construct_UEnum_MediaIOCore_EMediaIOStandardType(void)

{
  if (Z_Registration_Info_UEnum_EMediaIOStandardType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EMediaIOStandardType.InnerSingleton,
               &Z_Construct_UEnum_MediaIOCore_EMediaIOStandardType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EMediaIOStandardType.InnerSingleton;
}

// Z_Construct_UEnum_MediaIOCore_EMediaIOTimecodeFormat @ 14d77de00

UEnum * __cdecl Z_Construct_UEnum_MediaIOCore_EMediaIOTimecodeFormat(void)

{
  if (Z_Registration_Info_UEnum_EMediaIOTimecodeFormat.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EMediaIOTimecodeFormat.InnerSingleton,
               &Z_Construct_UEnum_MediaIOCore_EMediaIOTimecodeFormat_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EMediaIOTimecodeFormat.InnerSingleton;
}

// Z_Construct_UEnum_MediaIOCore_EMediaIOTransportType @ 14d77de40

UEnum * __cdecl Z_Construct_UEnum_MediaIOCore_EMediaIOTransportType(void)

{
  if (Z_Registration_Info_UEnum_EMediaIOTransportType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EMediaIOTransportType.InnerSingleton,
               &Z_Construct_UEnum_MediaIOCore_EMediaIOTransportType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EMediaIOTransportType.InnerSingleton;
}

// Z_Construct_UScriptStruct_FMediaIOConfiguration @ 14d77de80

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMediaIOConfiguration(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMediaIOConfiguration.InnerSingleton == (UScriptStruct *)0x0
     ) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMediaIOConfiguration.InnerSingleton,
               &Z_Construct_UScriptStruct_FMediaIOConfiguration_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMediaIOConfiguration.InnerSingleton != (UScriptStruct *)0x0
     ) {
    return Z_Registration_Info_UScriptStruct_FMediaIOConfiguration.InnerSingleton;
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

// Z_Construct_UScriptStruct_FMediaIOConnection @ 14d77df00

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMediaIOConnection(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMediaIOConnection.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMediaIOConnection.InnerSingleton,
               &Z_Construct_UScriptStruct_FMediaIOConnection_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMediaIOConnection.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMediaIOConnection.InnerSingleton;
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

// Z_Construct_UScriptStruct_FMediaIODevice @ 14d77df80

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMediaIODevice(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMediaIODevice.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMediaIODevice.InnerSingleton,
               &Z_Construct_UScriptStruct_FMediaIODevice_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMediaIODevice.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMediaIODevice.InnerSingleton;
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

// Z_Construct_UScriptStruct_FMediaIOMode @ 14d77e000

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMediaIOMode(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMediaIOMode.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMediaIOMode.InnerSingleton,
               &Z_Construct_UScriptStruct_FMediaIOMode_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMediaIOMode.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMediaIOMode.InnerSingleton;
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

// EMediaIOTransportType_StaticEnum @ 14d77e080

UEnum * __cdecl EMediaIOTransportType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMediaIOTransportType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MediaIOCore();
    Z_Registration_Info_UEnum_EMediaIOTransportType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MediaIOCore_EMediaIOTransportType,(UObject *)pUVar1,
                       L"EMediaIOTransportType");
  }
  return Z_Registration_Info_UEnum_EMediaIOTransportType.OuterSingleton;
}

// EMediaIOQuadLinkTransportType_StaticEnum @ 14d77e120

UEnum * __cdecl EMediaIOQuadLinkTransportType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMediaIOQuadLinkTransportType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MediaIOCore();
    Z_Registration_Info_UEnum_EMediaIOQuadLinkTransportType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MediaIOCore_EMediaIOQuadLinkTransportType,(UObject *)pUVar1
                       ,L"EMediaIOQuadLinkTransportType");
  }
  return Z_Registration_Info_UEnum_EMediaIOQuadLinkTransportType.OuterSingleton;
}

// EMediaIOStandardType_StaticEnum @ 14d77e160

UEnum * __cdecl EMediaIOStandardType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMediaIOStandardType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MediaIOCore();
    Z_Registration_Info_UEnum_EMediaIOStandardType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MediaIOCore_EMediaIOStandardType,(UObject *)pUVar1,
                       L"EMediaIOStandardType");
  }
  return Z_Registration_Info_UEnum_EMediaIOStandardType.OuterSingleton;
}

// EMediaIOTimecodeFormat_StaticEnum @ 14d77e1a0

UEnum * __cdecl EMediaIOTimecodeFormat_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMediaIOTimecodeFormat.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MediaIOCore();
    Z_Registration_Info_UEnum_EMediaIOTimecodeFormat.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MediaIOCore_EMediaIOTimecodeFormat,(UObject *)pUVar1,
                       L"EMediaIOTimecodeFormat");
  }
  return Z_Registration_Info_UEnum_EMediaIOTimecodeFormat.OuterSingleton;
}

// Z_Construct_UClass_UVideoDeinterlacer_NoRegister @ 14d77e1e0

UClass * __cdecl Z_Construct_UClass_UVideoDeinterlacer_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UVideoDeinterlacer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MediaIOCore",L"VideoDeinterlacer",
               &Z_Registration_Info_UClass_UVideoDeinterlacer.InnerSingleton,
               UVideoDeinterlacer::StaticRegisterNativesUVideoDeinterlacer,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UVideoDeinterlacer>,
               InternalVTableHelperCtorCaller<UVideoDeinterlacer>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UVideoDeinterlacer.InnerSingleton;
}

// EMediaIOAutoDetectableTimecodeFormat_StaticEnum @ 14d77e290

UEnum * __cdecl EMediaIOAutoDetectableTimecodeFormat_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMediaIOAutoDetectableTimecodeFormat.OuterSingleton == (UEnum *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_MediaIOCore();
    Z_Registration_Info_UEnum_EMediaIOAutoDetectableTimecodeFormat.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MediaIOCore_EMediaIOAutoDetectableTimecodeFormat,
                       (UObject *)pUVar1,L"EMediaIOAutoDetectableTimecodeFormat");
  }
  return Z_Registration_Info_UEnum_EMediaIOAutoDetectableTimecodeFormat.OuterSingleton;
}

// EMediaIOInterlaceFieldOrder_StaticEnum @ 14d77e2d0

UEnum * __cdecl EMediaIOInterlaceFieldOrder_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMediaIOInterlaceFieldOrder.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MediaIOCore();
    Z_Registration_Info_UEnum_EMediaIOInterlaceFieldOrder.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MediaIOCore_EMediaIOInterlaceFieldOrder,(UObject *)pUVar1,
                       L"EMediaIOInterlaceFieldOrder");
  }
  return Z_Registration_Info_UEnum_EMediaIOInterlaceFieldOrder.OuterSingleton;
}

// EMediaIOSampleEvaluationType_StaticEnum @ 14d77e310

UEnum * __cdecl EMediaIOSampleEvaluationType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMediaIOSampleEvaluationType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MediaIOCore();
    Z_Registration_Info_UEnum_EMediaIOSampleEvaluationType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MediaIOCore_EMediaIOSampleEvaluationType,(UObject *)pUVar1,
                       L"EMediaIOSampleEvaluationType");
  }
  return Z_Registration_Info_UEnum_EMediaIOSampleEvaluationType.OuterSingleton;
}

// NewProp_bAutoDetect_SetBit @ 14d77e350

void __cdecl
Z_Construct_UScriptStruct_FMediaIOAutoDetectableTimecodeFormat_Backup_Statics::
NewProp_bAutoDetect_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 4) = 1;
  return;
}

// NewStructOps @ 14d77e360

void * __cdecl
Z_Construct_UScriptStruct_FMediaIOAutoDetectableTimecodeFormat_Backup_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMediaIOAutoDetectableTimecodeFormat_Backup,&UE::CoreUObject::Private::Construct<FMediaIOAutoDetectableTimecodeFormat_Backup>,&UE::CoreUObject::Private::ConstructForTests<FMediaIOAutoDetectableTimecodeFormat_Backup>,&UE::CoreUObject::Private::Destruct<FMediaIOAutoDetectableTimecodeFormat_Backup>,&UE::CoreUObject::Private::Copy<FMediaIOAutoDetectableTimecodeFormat_Backup>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// EMediaIOInputType_StaticEnum @ 14d77e3a0

UEnum * __cdecl EMediaIOInputType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMediaIOInputType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MediaIOCore();
    Z_Registration_Info_UEnum_EMediaIOInputType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MediaIOCore_EMediaIOInputType,(UObject *)pUVar1,
                       L"EMediaIOInputType");
  }
  return Z_Registration_Info_UEnum_EMediaIOInputType.OuterSingleton;
}

// EMediaIOOutputType_StaticEnum @ 14d77e4b0

UEnum * __cdecl EMediaIOOutputType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMediaIOOutputType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MediaIOCore();
    Z_Registration_Info_UEnum_EMediaIOOutputType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MediaIOCore_EMediaIOOutputType,(UObject *)pUVar1,
                       L"EMediaIOOutputType");
  }
  return Z_Registration_Info_UEnum_EMediaIOOutputType.OuterSingleton;
}

// EMediaIOReferenceType_StaticEnum @ 14d77e540

UEnum * __cdecl EMediaIOReferenceType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMediaIOReferenceType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MediaIOCore();
    Z_Registration_Info_UEnum_EMediaIOReferenceType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MediaIOCore_EMediaIOReferenceType,(UObject *)pUVar1,
                       L"EMediaIOReferenceType");
  }
  return Z_Registration_Info_UEnum_EMediaIOReferenceType.OuterSingleton;
}

// NewStructOps @ 14d77e580

void * __cdecl Z_Construct_UScriptStruct_FMediaIODevice_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xc;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMediaIODevice,&UE::CoreUObject::Private::Construct<FMediaIODevice>,&UE::CoreUObject::Private::ConstructForTests<FMediaIODevice>,&UE::CoreUObject::Private::Destruct<FMediaIODevice>,&UE::CoreUObject::Private::Copy<FMediaIODevice>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UMediaCapture_NoRegister @ 14d77e670

UClass * __cdecl Z_Construct_UClass_UMediaCapture_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMediaCapture.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MediaIOCore",L"MediaCapture",
               &Z_Registration_Info_UClass_UMediaCapture.InnerSingleton,
               UMediaCapture::StaticRegisterNativesUMediaCapture,0x2d8,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMediaCapture>,InternalVTableHelperCtorCaller<UMediaCapture>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMediaCapture.InnerSingleton;
}

// NewStructOps @ 14d77e720

void * __cdecl Z_Construct_UScriptStruct_FMediaIOConnection_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMediaIOConnection,&UE::CoreUObject::Private::Construct<FMediaIOConnection>,&UE::CoreUObject::Private::ConstructForTests<FMediaIOConnection>,&UE::CoreUObject::Private::Destruct<FMediaIOConnection>,&UE::CoreUObject::Private::Copy<FMediaIOConnection>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14d77e860

void * __cdecl Z_Construct_UScriptStruct_FMediaIOMode_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMediaIOMode,&UE::CoreUObject::Private::Construct<FMediaIOMode>,&UE::CoreUObject::Private::ConstructForTests<FMediaIOMode>,&UE::CoreUObject::Private::Destruct<FMediaIOMode>,&UE::CoreUObject::Private::Copy<FMediaIOMode>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bIsInput_SetBit @ 14d77ea70

void __cdecl
Z_Construct_UScriptStruct_FMediaIOConfiguration_Statics::NewProp_bIsInput_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewStructOps @ 14d77ea80

void * __cdecl Z_Construct_UScriptStruct_FMediaIOConfiguration_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x3c;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMediaIOConfiguration,&UE::CoreUObject::Private::Construct<FMediaIOConfiguration>,&UE::CoreUObject::Private::ConstructForTests<FMediaIOConfiguration>,&UE::CoreUObject::Private::Destruct<FMediaIOConfiguration>,&UE::CoreUObject::Private::Copy<FMediaIOConfiguration>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14d77eb80

void * __cdecl Z_Construct_UScriptStruct_FMediaIOInputConfiguration_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x44;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMediaIOInputConfiguration,&UE::CoreUObject::Private::Construct<FMediaIOInputConfiguration>,&UE::CoreUObject::Private::ConstructForTests<FMediaIOInputConfiguration>,&UE::CoreUObject::Private::Destruct<FMediaIOInputConfiguration>,&UE::CoreUObject::Private::Copy<FMediaIOInputConfiguration>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14d77ec80

void * __cdecl Z_Construct_UScriptStruct_FMediaIOOutputConfiguration_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x4c;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMediaIOOutputConfiguration,&UE::CoreUObject::Private::Construct<FMediaIOOutputConfiguration>,&UE::CoreUObject::Private::ConstructForTests<FMediaIOOutputConfiguration>,&UE::CoreUObject::Private::Destruct<FMediaIOOutputConfiguration>,&UE::CoreUObject::Private::Copy<FMediaIOOutputConfiguration>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14d77ed30

void * __cdecl
Z_Construct_UScriptStruct_FMediaIOVideoTimecodeConfiguration_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x40;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMediaIOVideoTimecodeConfiguration,&UE::CoreUObject::Private::Construct<FMediaIOVideoTimecodeConfiguration>,&UE::CoreUObject::Private::ConstructForTests<FMediaIOVideoTimecodeConfiguration>,&UE::CoreUObject::Private::Destruct<FMediaIOVideoTimecodeConfiguration>,&UE::CoreUObject::Private::Copy<FMediaIOVideoTimecodeConfiguration>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// AddPass<UE::MediaCaptureData::FBufferCaptureFrame::FEnqueueCopyBufferPass,`UE::MediaCaptureData::FBufferCaptureFrame::EnqueueCopy'::__l5::<lambda_1>_> @ 14d77f260

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */

FRDGPass * __thiscall
FRDGBuilder::
AddPass<UE::MediaCaptureData::FBufferCaptureFrame::FEnqueueCopyBufferPass,_UE::MediaCaptureData::FBufferCaptureFrame::EnqueueCopy_::__l5::<lambda_1>_>
          (FRDGBuilder *this,FRDGEventName *param_1,FEnqueueCopyBufferPass *param_2,
          ERDGPassFlags param_3,<lambda_1> *param_4)

{
  int *piVar1;
  bool bVar2;
  ERDGPassFlags EVar3;
  int iVar4;
  wchar_t *pwVar5;
  FRDGPass *pFVar6;
  code *pcVar7;
  TArray<FShaderParametersMetadata::FMember,TSizedDefaultAllocator<32>_> local_48;
  FRDGParameterStruct local_38;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_UE::MediaCaptureData::FBufferCaptureFrame::FEnqueueCopyBufferPass::FTypeInfo::GetStructMetadata(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_UE::MediaCaptureData::FBufferCaptureFrame::FEnqueueCopyBufferPass::FTypeInfo::GetStructMetadata(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_UE::MediaCaptureData::FBufferCaptureFrame::FEnqueueCopyBufferPass::FTypeInfo::GetStructMetadata(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pcVar7 = UE::MediaCaptureData::FBufferCaptureFrame::FEnqueueCopyBufferPass::
               zzAppendMemberGetPrev;
      local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_48.ArrayNum = 0;
      local_48.ArrayMax = 0;
      do {
        pcVar7 = (code *)(*pcVar7)((ulonglong)param_4 & 0xff,&local_48);
      } while (pcVar7 != (code *)0x0);
      AlgoImpl::Reverse<FShaderParametersMetadata::FMember>
                ((FMember *)local_48.AllocatorInstance.Data,local_48.ArrayNum);
      FShaderParametersMetadata::FShaderParametersMetadata
                (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_UE::MediaCaptureData::FBufferCaptureFrame::FEnqueueCopyBufferPass::FTypeInfo::GetStructMetadata(void)'
                  ::__l2::StaticStructMetadata,ShaderParameterStruct,Shader,
                 L"FEnqueueCopyBufferPass",L"FEnqueueCopyBufferPass",(wchar_t *)0x0,(wchar_t *)0x0,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaIOFramework\\Source\\MediaIOCore\\Private\\MediaIOFrameManager.h"
                 ,0x1b3,0x10,&local_48,false,(FRHIUniformBufferLayoutInitializer *)0x0,None);
      if ((FMember *)local_48.AllocatorInstance.Data != (FMember *)0x0) {
        FMemory::Free(local_48.AllocatorInstance.Data);
      }
      atexit(`UE::MediaCaptureData::FBufferCaptureFrame::FEnqueueCopyBufferPass::FTypeInfo::
             GetStructMetadata'::__l2::_dynamic_atexit_destructor_for__StaticStructMetadata__);
      _Init_thread_footer(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_UE::MediaCaptureData::FBufferCaptureFrame::FEnqueueCopyBufferPass::FTypeInfo::GetStructMetadata(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FRDGUserValidation::ValidateAddPass
            (&this->UserValidation,param_2,
             &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_UE::MediaCaptureData::FBufferCaptureFrame::FEnqueueCopyBufferPass::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata,param_1,param_3);
  FlushAccessModeQueue(this);
  pwVar5 = FRDGEventName::GetTCHAR(param_1);
  EVar3 = OverridePassFlags(this,pwVar5,param_3);
  pFVar6 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,0x1a0,8);
  local_38.Contents = (uchar *)param_2;
  if (`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_UE::MediaCaptureData::FBufferCaptureFrame::FEnqueueCopyBufferPass::FTypeInfo::GetStructMetadata(void)'
      ::__l2::StaticStructMetadata.Layout.Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar2) {
      pcVar7 = (code *)swi(3);
      pFVar6 = (FRDGPass *)(*pcVar7)();
      return pFVar6;
    }
  }
  local_38.Layout.Reference =
       `public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_UE::MediaCaptureData::FBufferCaptureFrame::FEnqueueCopyBufferPass::FTypeInfo::GetStructMetadata(void)'
       ::__l2::StaticStructMetadata.Layout.Reference;
  if (`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_UE::MediaCaptureData::FBufferCaptureFrame::FEnqueueCopyBufferPass::FTypeInfo::GetStructMetadata(void)'
      ::__l2::StaticStructMetadata.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef
              ((FRHIResource *)
               `public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_UE::MediaCaptureData::FBufferCaptureFrame::FEnqueueCopyBufferPass::FTypeInfo::GetStructMetadata(void)'
               ::__l2::StaticStructMetadata.Layout.Reference);
  }
  local_38.Metadata =
       &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_UE::MediaCaptureData::FBufferCaptureFrame::FEnqueueCopyBufferPass::FTypeInfo::GetStructMetadata(void)'
        ::__l2::StaticStructMetadata;
  FRDGPass::FRDGPass(pFVar6,param_1,&local_38,EVar3,Await);
  pFVar6->_padding_ =
       (longlong)
       &
       ___7__TRDGLambdaPass_VFEnqueueCopyBufferPass_FBufferCaptureFrame_MediaCaptureData_UE__V<lambda_1>__4__EnqueueCopy_234_UEAAXAEAVFRDGBuilder__PEAVFRDGViewableResource___N_Z___6B_
  ;
  pFVar6[1]._padding_ = (longlong)(param_4->CaptureFramePtr).Object;
  pFVar6[1].FullPathIfDebug.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)
       (param_4->CaptureFramePtr).SharedReferenceCount.ReferenceController;
  (param_4->CaptureFramePtr).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (param_4->CaptureFramePtr).Object = (FBufferCaptureFrame *)0x0;
  *(FRDGViewableResource **)&pFVar6[1].FullPathIfDebug.Data.ArrayNum = param_4->ResourceToReadback;
  pFVar6[1].Name.EventFormat = (wchar_t *)param_2;
  ClobberPassOutputs(this,pFVar6);
  iVar4 = (this->Passes).Array.ArrayNum;
  piVar1 = &(this->Passes).Array.ArrayMax;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                      (0x808,(ForElementType<FRDGPass_*> *)&this->Passes,piVar1);
  }
  (this->Passes).Array.ArrayNum = iVar4 + 1;
  (this->Passes).Array.AllocatorInstance.Data[iVar4] = pFVar6;
  (pFVar6->Handle).Index = (this->Passes).Array.ArrayNum - 1;
  SetupParameterPass(this,pFVar6);
  return pFVar6;
}

// AddPass<UE::MediaCaptureData::FMediaCaptureBufferSyncPassParameters,`UE::MediaCaptureData::FMediaCaptureHelper::AddSyncPointPass<UE::MediaCaptureData::FBufferCaptureFrame>'::__l2::<lambda_1>_> @ 14d77f530

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */

FRDGPass * __thiscall
FRDGBuilder::
AddPass<UE::MediaCaptureData::FMediaCaptureBufferSyncPassParameters,_UE::MediaCaptureData::FMediaCaptureHelper::AddSyncPointPass<UE::MediaCaptureData::FBufferCaptureFrame>_::__l2::<lambda_1>_>
          (FRDGBuilder *this,FRDGEventName *param_1,FMediaCaptureBufferSyncPassParameters *param_2,
          ERDGPassFlags param_3,<lambda_1> *param_4)

{
  int *piVar1;
  bool bVar2;
  ERDGPassFlags EVar3;
  int iVar4;
  wchar_t *pwVar5;
  FRDGPass *pFVar6;
  code *pcVar7;
  TArray<FShaderParametersMetadata::FMember,TSizedDefaultAllocator<32>_> local_48;
  FRDGParameterStruct local_38;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_UE::MediaCaptureData::FMediaCaptureBufferSyncPassParameters::FTypeInfo::GetStructMetadata(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_UE::MediaCaptureData::FMediaCaptureBufferSyncPassParameters::FTypeInfo::GetStructMetadata(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_UE::MediaCaptureData::FMediaCaptureBufferSyncPassParameters::FTypeInfo::GetStructMetadata(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pcVar7 = UE::MediaCaptureData::FMediaCaptureBufferSyncPassParameters::zzAppendMemberGetPrev;
      local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_48.ArrayNum = 0;
      local_48.ArrayMax = 0;
      do {
        pcVar7 = (code *)(*pcVar7)((ulonglong)param_4 & 0xff,&local_48);
      } while (pcVar7 != (code *)0x0);
      AlgoImpl::Reverse<FShaderParametersMetadata::FMember>
                ((FMember *)local_48.AllocatorInstance.Data,local_48.ArrayNum);
      FShaderParametersMetadata::FShaderParametersMetadata
                (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_UE::MediaCaptureData::FMediaCaptureBufferSyncPassParameters::FTypeInfo::GetStructMetadata(void)'
                  ::__l2::StaticStructMetadata,ShaderParameterStruct,Shader,
                 L"FMediaCaptureBufferSyncPassParameters",L"FMediaCaptureBufferSyncPassParameters",
                 (wchar_t *)0x0,(wchar_t *)0x0,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaIOFramework\\Source\\MediaIOCore\\Private\\MediaIOFrameManager.h"
                 ,299,0x10,&local_48,false,(FRHIUniformBufferLayoutInitializer *)0x0,None);
      if ((FMember *)local_48.AllocatorInstance.Data != (FMember *)0x0) {
        FMemory::Free(local_48.AllocatorInstance.Data);
      }
      atexit(`UE::MediaCaptureData::FMediaCaptureBufferSyncPassParameters::FTypeInfo::
             GetStructMetadata'::__l2::_dynamic_atexit_destructor_for__StaticStructMetadata__);
      _Init_thread_footer(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_UE::MediaCaptureData::FMediaCaptureBufferSyncPassParameters::FTypeInfo::GetStructMetadata(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FRDGUserValidation::ValidateAddPass
            (&this->UserValidation,param_2,
             &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_UE::MediaCaptureData::FMediaCaptureBufferSyncPassParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata,param_1,param_3);
  FlushAccessModeQueue(this);
  pwVar5 = FRDGEventName::GetTCHAR(param_1);
  EVar3 = OverridePassFlags(this,pwVar5,param_3);
  pFVar6 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,0x1a0,8);
  local_38.Contents = (uchar *)param_2;
  if (`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_UE::MediaCaptureData::FMediaCaptureBufferSyncPassParameters::FTypeInfo::GetStructMetadata(void)'
      ::__l2::StaticStructMetadata.Layout.Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar2) {
      pcVar7 = (code *)swi(3);
      pFVar6 = (FRDGPass *)(*pcVar7)();
      return pFVar6;
    }
  }
  local_38.Layout.Reference =
       `public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_UE::MediaCaptureData::FMediaCaptureBufferSyncPassParameters::FTypeInfo::GetStructMetadata(void)'
       ::__l2::StaticStructMetadata.Layout.Reference;
  if (`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_UE::MediaCaptureData::FMediaCaptureBufferSyncPassParameters::FTypeInfo::GetStructMetadata(void)'
      ::__l2::StaticStructMetadata.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef
              ((FRHIResource *)
               `public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_UE::MediaCaptureData::FMediaCaptureBufferSyncPassParameters::FTypeInfo::GetStructMetadata(void)'
               ::__l2::StaticStructMetadata.Layout.Reference);
  }
  local_38.Metadata =
       &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_UE::MediaCaptureData::FMediaCaptureBufferSyncPassParameters::FTypeInfo::GetStructMetadata(void)'
        ::__l2::StaticStructMetadata;
  FRDGPass::FRDGPass(pFVar6,param_1,&local_38,EVar3,Inline);
  pFVar6->_padding_ =
       (longlong)
       &
       ___7__TRDGLambdaPass_VFMediaCaptureBufferSyncPassParameters_MediaCaptureData_UE__V<lambda_1>__1____AddSyncPointPass_VFBufferCaptureFrame_MediaCaptureData_UE___FMediaCaptureHelper_23_SAXAEAVFRDGBuilder__PEAVUMediaCapture__V__TSharedPtr_VFCaptureFrame_MediaCaptureData_UE___00__PEAVFRDGViewableResource___Z___6B_
  ;
  pFVar6[1]._padding_ = (longlong)param_4->MediaCapture;
  pFVar6[1].FullPathIfDebug.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)(param_4->CapturingFrame).Object;
  *(TReferenceControllerBase<1> **)&pFVar6[1].FullPathIfDebug.Data.ArrayNum =
       (param_4->CapturingFrame).SharedReferenceCount.ReferenceController;
  (param_4->CapturingFrame).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (param_4->CapturingFrame).Object = (FCaptureFrame *)0x0;
  pFVar6[1].Name.EventFormat = (wchar_t *)param_2;
  ClobberPassOutputs(this,pFVar6);
  iVar4 = (this->Passes).Array.ArrayNum;
  piVar1 = &(this->Passes).Array.ArrayMax;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                      (0x808,(ForElementType<FRDGPass_*> *)&this->Passes,piVar1);
  }
  (this->Passes).Array.ArrayNum = iVar4 + 1;
  (this->Passes).Array.AllocatorInstance.Data[iVar4] = pFVar6;
  (pFVar6->Handle).Index = (this->Passes).Array.ArrayNum - 1;
  SetupParameterPass(this,pFVar6);
  return pFVar6;
}

// AddPass<UE::MediaCaptureData::FMediaCaptureTextureSyncPassParameters,`UE::MediaCaptureData::FMediaCaptureHelper::AddSyncPointPass<UE::MediaCaptureData::FTextureCaptureFrame>'::__l2::<lambda_1>_> @ 14d77f800

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */

FRDGPass * __thiscall
FRDGBuilder::
AddPass<UE::MediaCaptureData::FMediaCaptureTextureSyncPassParameters,_UE::MediaCaptureData::FMediaCaptureHelper::AddSyncPointPass<UE::MediaCaptureData::FTextureCaptureFrame>_::__l2::<lambda_1>_>
          (FRDGBuilder *this,FRDGEventName *param_1,FMediaCaptureTextureSyncPassParameters *param_2,
          ERDGPassFlags param_3,<lambda_1> *param_4)

{
  int *piVar1;
  bool bVar2;
  ERDGPassFlags EVar3;
  int iVar4;
  wchar_t *pwVar5;
  FRDGPass *pFVar6;
  code *pcVar7;
  TArray<FShaderParametersMetadata::FMember,TSizedDefaultAllocator<32>_> local_48;
  FRDGParameterStruct local_38;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_UE::MediaCaptureData::FMediaCaptureTextureSyncPassParameters::FTypeInfo::GetStructMetadata(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_UE::MediaCaptureData::FMediaCaptureTextureSyncPassParameters::FTypeInfo::GetStructMetadata(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_UE::MediaCaptureData::FMediaCaptureTextureSyncPassParameters::FTypeInfo::GetStructMetadata(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pcVar7 = UE::MediaCaptureData::FMediaCaptureTextureSyncPassParameters::zzAppendMemberGetPrev;
      local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_48.ArrayNum = 0;
      local_48.ArrayMax = 0;
      do {
        pcVar7 = (code *)(*pcVar7)((ulonglong)param_4 & 0xff,&local_48);
      } while (pcVar7 != (code *)0x0);
      AlgoImpl::Reverse<FShaderParametersMetadata::FMember>
                ((FMember *)local_48.AllocatorInstance.Data,local_48.ArrayNum);
      FShaderParametersMetadata::FShaderParametersMetadata
                (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_UE::MediaCaptureData::FMediaCaptureTextureSyncPassParameters::FTypeInfo::GetStructMetadata(void)'
                  ::__l2::StaticStructMetadata,ShaderParameterStruct,Shader,
                 L"FMediaCaptureTextureSyncPassParameters",L"FMediaCaptureTextureSyncPassParameters"
                 ,(wchar_t *)0x0,(wchar_t *)0x0,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaIOFramework\\Source\\MediaIOCore\\Private\\MediaIOFrameManager.h"
                 ,0x127,0x20,&local_48,false,(FRHIUniformBufferLayoutInitializer *)0x0,None);
      if ((FMember *)local_48.AllocatorInstance.Data != (FMember *)0x0) {
        FMemory::Free(local_48.AllocatorInstance.Data);
      }
      atexit(`UE::MediaCaptureData::FMediaCaptureTextureSyncPassParameters::FTypeInfo::
             GetStructMetadata'::__l2::_dynamic_atexit_destructor_for__StaticStructMetadata__);
      _Init_thread_footer(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_UE::MediaCaptureData::FMediaCaptureTextureSyncPassParameters::FTypeInfo::GetStructMetadata(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FRDGUserValidation::ValidateAddPass
            (&this->UserValidation,param_2,
             &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_UE::MediaCaptureData::FMediaCaptureTextureSyncPassParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata,param_1,param_3);
  FlushAccessModeQueue(this);
  pwVar5 = FRDGEventName::GetTCHAR(param_1);
  EVar3 = OverridePassFlags(this,pwVar5,param_3);
  pFVar6 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,0x1a0,8);
  local_38.Contents = (uchar *)param_2;
  if (`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_UE::MediaCaptureData::FMediaCaptureTextureSyncPassParameters::FTypeInfo::GetStructMetadata(void)'
      ::__l2::StaticStructMetadata.Layout.Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar2) {
      pcVar7 = (code *)swi(3);
      pFVar6 = (FRDGPass *)(*pcVar7)();
      return pFVar6;
    }
  }
  local_38.Layout.Reference =
       `public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_UE::MediaCaptureData::FMediaCaptureTextureSyncPassParameters::FTypeInfo::GetStructMetadata(void)'
       ::__l2::StaticStructMetadata.Layout.Reference;
  if (`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_UE::MediaCaptureData::FMediaCaptureTextureSyncPassParameters::FTypeInfo::GetStructMetadata(void)'
      ::__l2::StaticStructMetadata.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef
              ((FRHIResource *)
               `public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_UE::MediaCaptureData::FMediaCaptureTextureSyncPassParameters::FTypeInfo::GetStructMetadata(void)'
               ::__l2::StaticStructMetadata.Layout.Reference);
  }
  local_38.Metadata =
       &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_UE::MediaCaptureData::FMediaCaptureTextureSyncPassParameters::FTypeInfo::GetStructMetadata(void)'
        ::__l2::StaticStructMetadata;
  FRDGPass::FRDGPass(pFVar6,param_1,&local_38,EVar3,Inline);
  pFVar6->_padding_ =
       (longlong)
       &
       ___7__TRDGLambdaPass_VFMediaCaptureTextureSyncPassParameters_MediaCaptureData_UE__V<lambda_1>__1____AddSyncPointPass_VFTextureCaptureFrame_MediaCaptureData_UE___FMediaCaptureHelper_23_SAXAEAVFRDGBuilder__PEAVUMediaCapture__V__TSharedPtr_VFCaptureFrame_MediaCaptureData_UE___00__PEAVFRDGViewableResource___Z___6B_
  ;
  pFVar6[1]._padding_ = (longlong)param_4->MediaCapture;
  pFVar6[1].FullPathIfDebug.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)(param_4->CapturingFrame).Object;
  *(TReferenceControllerBase<1> **)&pFVar6[1].FullPathIfDebug.Data.ArrayNum =
       (param_4->CapturingFrame).SharedReferenceCount.ReferenceController;
  (param_4->CapturingFrame).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (param_4->CapturingFrame).Object = (FCaptureFrame *)0x0;
  pFVar6[1].Name.EventFormat = (wchar_t *)param_2;
  ClobberPassOutputs(this,pFVar6);
  iVar4 = (this->Passes).Array.ArrayNum;
  piVar1 = &(this->Passes).Array.ArrayMax;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                      (0x808,(ForElementType<FRDGPass_*> *)&this->Passes,piVar1);
  }
  (this->Passes).Array.ArrayNum = iVar4 + 1;
  (this->Passes).Array.AllocatorInstance.Data[iVar4] = pFVar6;
  (pFVar6->Handle).Index = (this->Passes).Array.ArrayNum - 1;
  SetupParameterPass(this,pFVar6);
  return pFVar6;
}

// AddPass<UE::MediaCapture::Resample::FMediaCaptureResamplePS::FParameters,`FPixelShaderUtils::AddFullscreenPass<UE::MediaCapture::Resample::FMediaCaptureResamplePS>'::__l2::<lambda_1>_> @ 14d77fad0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGPass * __thiscall
FRDGBuilder::
AddPass<UE::MediaCapture::Resample::FMediaCaptureResamplePS::FParameters,_FPixelShaderUtils::AddFullscreenPass<UE::MediaCapture::Resample::FMediaCaptureResamplePS>_::__l2::<lambda_1>_>
          (FRDGBuilder *this,FRDGEventName *param_1,FParameters *param_2,ERDGPassFlags param_3,
          <lambda_1>_conflict *param_4)

{
  int *piVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  ERDGPassFlags EVar6;
  int iVar7;
  FShaderParametersMetadata *pFVar8;
  wchar_t *pwVar9;
  FRDGPass *pFVar10;
  FRDGParameterStruct local_38;
  
  pFVar8 = UE::MediaCapture::Resample::FMediaCaptureResamplePS::FParameters::FTypeInfo::
           GetStructMetadata();
  FRDGUserValidation::ValidateAddPass(&this->UserValidation,param_2,pFVar8,param_1,param_3);
  FlushAccessModeQueue(this);
  pwVar9 = FRDGEventName::GetTCHAR(param_1);
  EVar6 = OverridePassFlags(this,pwVar9,param_3);
  pFVar10 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,0x1d8,8);
  local_38.Contents = (uchar *)param_2;
  if ((pFVar8->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar10 = (FRDGPass *)(*pcVar4)();
      return pFVar10;
    }
  }
  local_38.Layout.Reference = (pFVar8->Layout).Reference;
  if (local_38.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_38.Layout.Reference);
  }
  local_38.Metadata = pFVar8;
  FRDGPass::FRDGPass(pFVar10,param_1,&local_38,EVar6,Async);
  pFVar10->_padding_ =
       (longlong)
       &
       ___7__TRDGLambdaPass_VFParameters_FMediaCaptureResamplePS_Resample_MediaCapture_UE__V<lambda_1>__1____AddFullscreenPass_VFMediaCaptureResamplePS_Resample_MediaCapture_UE___FPixelShaderUtils__SAXAEAVFRDGBuilder__PEBVFGlobalShaderMap____QEAVFRDGEventName__AEBV__TShaderRefBase_VFMediaCaptureResamplePS_Resample_MediaCapture_UE__VFShaderMapPointerTable____PEAV12345_AEBU__TIntRect_H_Math_5_PEAVFRHIBlendState__PEAVFRHIRasterizerState__PEAVFRHIDepthStencilState__IW4ERDGPassFlags___Z___6B_
  ;
  pFVar10[1]._padding_ = *(longlong *)param_4;
  pFVar10[1].FullPathIfDebug.Data.AllocatorInstance.Data =
       *(FScriptContainerElement **)(param_4 + 8);
  uVar3 = *(undefined8 *)(param_4 + 0x10);
  pwVar9 = *(wchar_t **)(param_4 + 0x18);
  pFVar10[1].FullPathIfDebug.Data.ArrayNum = (int)uVar3;
  pFVar10[1].FullPathIfDebug.Data.ArrayMax = (int)((ulonglong)uVar3 >> 0x20);
  pFVar10[1].Name.EventFormat = pwVar9;
  pFVar10[1].Name.FormattedEventName.Data.AllocatorInstance.Data =
       *(FScriptContainerElement **)(param_4 + 0x20);
  uVar3 = *(undefined8 *)(param_4 + 0x28);
  pFVar10[1].Name.FormattedEventName.Data.ArrayNum = (int)uVar3;
  pFVar10[1].Name.FormattedEventName.Data.ArrayMax = (int)((ulonglong)uVar3 >> 0x20);
  pFVar10[1].ParameterStruct.Contents = *(uchar **)(param_4 + 0x30);
  pFVar10[1].ParameterStruct.Layout.Reference = *(FRHIUniformBufferLayout **)(param_4 + 0x38);
  pFVar10[1].ParameterStruct.Metadata = *(FShaderParametersMetadata **)(param_4 + 0x40);
  uVar2 = *(undefined4 *)(param_4 + 0x48);
  pFVar10[1].Flags = (short)uVar2;
  pFVar10[1].TaskMode = (char)((uint)uVar2 >> 0x10);
  pFVar10[1].Pipeline = (char)((uint)uVar2 >> 0x18);
  *(FParameters **)&pFVar10[1].Workload = param_2;
  ClobberPassOutputs(this,pFVar10);
  iVar7 = (this->Passes).Array.ArrayNum;
  piVar1 = &(this->Passes).Array.ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                      (0x808,(ForElementType<FRDGPass_*> *)&this->Passes,piVar1);
  }
  (this->Passes).Array.ArrayNum = iVar7 + 1;
  (this->Passes).Array.AllocatorInstance.Data[iVar7] = pFVar10;
  (pFVar10->Handle).Index = (this->Passes).Array.ArrayNum - 1;
  SetupParameterPass(this,pFVar10);
  return pFVar10;
}

// AddPass<FModifyAlphaSwizzleRgbaPS::FParameters,`AddDrawScreenPass<FModifyAlphaSwizzleRgbaPS>'::__l2::<lambda_1>_> @ 14d77fca0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGPass * __thiscall
FRDGBuilder::
AddPass<FModifyAlphaSwizzleRgbaPS::FParameters,_AddDrawScreenPass<FModifyAlphaSwizzleRgbaPS>_::__l2::<lambda_1>_>
          (FRDGBuilder *this,FRDGEventName *param_1,FParameters *param_2,ERDGPassFlags param_3,
          <lambda_1> *param_4)

{
  FShaderParametersMetadata *pFVar1;
  FRDGPass *pFVar2;
  
  pFVar1 = FModifyAlphaSwizzleRgbaPS::FParameters::FTypeInfo::GetStructMetadata();
  pFVar2 = AddPassInternal<FModifyAlphaSwizzleRgbaPS::FParameters,_AddDrawScreenPass<FModifyAlphaSwizzleRgbaPS>_::__l2::<lambda_1>_>
                     (this,param_1,pFVar1,param_2,param_3,param_4);
  return pFVar2;
}

// AddPass<FRGB10toYUVv210ConvertPS::FParameters,`AddDrawScreenPass<FRGB10toYUVv210ConvertPS>'::__l2::<lambda_1>_> @ 14d77fd10

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGPass * __thiscall
FRDGBuilder::
AddPass<FRGB10toYUVv210ConvertPS::FParameters,_AddDrawScreenPass<FRGB10toYUVv210ConvertPS>_::__l2::<lambda_1>_>
          (FRDGBuilder *this,FRDGEventName *param_1,FParameters *param_2,ERDGPassFlags param_3,
          <lambda_1> *param_4)

{
  FShaderParametersMetadata *pFVar1;
  FRDGPass *pFVar2;
  
  pFVar1 = FRGB10toYUVv210ConvertPS::FParameters::FTypeInfo::GetStructMetadata();
  pFVar2 = AddPassInternal<FRGB10toYUVv210ConvertPS::FParameters,_AddDrawScreenPass<FRGB10toYUVv210ConvertPS>_::__l2::<lambda_1>_>
                     (this,param_1,pFVar1,param_2,param_3,param_4);
  return pFVar2;
}

// AddPass<FRGB8toUYVY8ConvertPS::FParameters,`AddDrawScreenPass<FRGB8toUYVY8ConvertPS>'::__l2::<lambda_1>_> @ 14d77fd80

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGPass * __thiscall
FRDGBuilder::
AddPass<FRGB8toUYVY8ConvertPS::FParameters,_AddDrawScreenPass<FRGB8toUYVY8ConvertPS>_::__l2::<lambda_1>_>
          (FRDGBuilder *this,FRDGEventName *param_1,FParameters *param_2,ERDGPassFlags param_3,
          <lambda_1> *param_4)

{
  FShaderParametersMetadata *pFVar1;
  FRDGPass *pFVar2;
  
  pFVar1 = FRGB8toUYVY8ConvertPS::FParameters::FTypeInfo::GetStructMetadata();
  pFVar2 = AddPassInternal<FRGB8toUYVY8ConvertPS::FParameters,_AddDrawScreenPass<FRGB8toUYVY8ConvertPS>_::__l2::<lambda_1>_>
                     (this,param_1,pFVar1,param_2,param_3,param_4);
  return pFVar2;
}

// AddPassInternal<UE::MediaCaptureData::FBufferCaptureFrame::FEnqueueCopyBufferPass,`UE::MediaCaptureData::FBufferCaptureFrame::EnqueueCopy'::__l5::<lambda_1>_> @ 14d77fdf0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGPass * __thiscall
FRDGBuilder::
AddPassInternal<UE::MediaCaptureData::FBufferCaptureFrame::FEnqueueCopyBufferPass,_UE::MediaCaptureData::FBufferCaptureFrame::EnqueueCopy_::__l5::<lambda_1>_>
          (FRDGBuilder *this,FRDGEventName *param_1,FShaderParametersMetadata *param_2,
          FEnqueueCopyBufferPass *param_3,ERDGPassFlags param_4,<lambda_1> *param_5)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  ERDGPassFlags EVar4;
  int iVar5;
  wchar_t *pwVar6;
  FRDGPass *pFVar7;
  FRDGParameterStruct local_38;
  
  FRDGUserValidation::ValidateAddPass(&this->UserValidation,param_3,param_2,param_1,param_4);
  FlushAccessModeQueue(this);
  pwVar6 = FRDGEventName::GetTCHAR(param_1);
  EVar4 = OverridePassFlags(this,pwVar6,param_4);
  pFVar7 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,0x1a0,8);
  local_38.Contents = (uchar *)param_3;
  if ((param_2->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar7 = (FRDGPass *)(*pcVar2)();
      return pFVar7;
    }
  }
  local_38.Layout.Reference = (param_2->Layout).Reference;
  if (local_38.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_38.Layout.Reference);
  }
  local_38.Metadata = param_2;
  FRDGPass::FRDGPass(pFVar7,param_1,&local_38,EVar4,Await);
  pFVar7->_padding_ =
       (longlong)
       &
       ___7__TRDGLambdaPass_VFEnqueueCopyBufferPass_FBufferCaptureFrame_MediaCaptureData_UE__V<lambda_1>__4__EnqueueCopy_234_UEAAXAEAVFRDGBuilder__PEAVFRDGViewableResource___N_Z___6B_
  ;
  pFVar7[1]._padding_ = (longlong)(param_5->CaptureFramePtr).Object;
  pFVar7[1].FullPathIfDebug.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)
       (param_5->CaptureFramePtr).SharedReferenceCount.ReferenceController;
  (param_5->CaptureFramePtr).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (param_5->CaptureFramePtr).Object = (FBufferCaptureFrame *)0x0;
  *(FRDGViewableResource **)&pFVar7[1].FullPathIfDebug.Data.ArrayNum = param_5->ResourceToReadback;
  pFVar7[1].Name.EventFormat = (wchar_t *)param_3;
  ClobberPassOutputs(this,pFVar7);
  iVar5 = (this->Passes).Array.ArrayNum;
  piVar1 = &(this->Passes).Array.ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                      (0x808,(ForElementType<FRDGPass_*> *)&this->Passes,piVar1);
  }
  (this->Passes).Array.ArrayNum = iVar5 + 1;
  (this->Passes).Array.AllocatorInstance.Data[iVar5] = pFVar7;
  (pFVar7->Handle).Index = (this->Passes).Array.ArrayNum - 1;
  SetupParameterPass(this,pFVar7);
  return pFVar7;
}

// AddPassInternal<UE::MediaCaptureData::FMediaCaptureBufferSyncPassParameters,`UE::MediaCaptureData::FMediaCaptureHelper::AddSyncPointPass<UE::MediaCaptureData::FBufferCaptureFrame>'::__l2::<lambda_1>_> @ 14d77ff90

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGPass * __thiscall
FRDGBuilder::
AddPassInternal<UE::MediaCaptureData::FMediaCaptureBufferSyncPassParameters,_UE::MediaCaptureData::FMediaCaptureHelper::AddSyncPointPass<UE::MediaCaptureData::FBufferCaptureFrame>_::__l2::<lambda_1>_>
          (FRDGBuilder *this,FRDGEventName *param_1,FShaderParametersMetadata *param_2,
          FMediaCaptureBufferSyncPassParameters *param_3,ERDGPassFlags param_4,<lambda_1> *param_5)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  ERDGPassFlags EVar4;
  int iVar5;
  wchar_t *pwVar6;
  FRDGPass *pFVar7;
  FRDGParameterStruct local_38;
  
  FRDGUserValidation::ValidateAddPass(&this->UserValidation,param_3,param_2,param_1,param_4);
  FlushAccessModeQueue(this);
  pwVar6 = FRDGEventName::GetTCHAR(param_1);
  EVar4 = OverridePassFlags(this,pwVar6,param_4);
  pFVar7 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,0x1a0,8);
  local_38.Contents = (uchar *)param_3;
  if ((param_2->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar7 = (FRDGPass *)(*pcVar2)();
      return pFVar7;
    }
  }
  local_38.Layout.Reference = (param_2->Layout).Reference;
  if (local_38.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_38.Layout.Reference);
  }
  local_38.Metadata = param_2;
  FRDGPass::FRDGPass(pFVar7,param_1,&local_38,EVar4,Inline);
  pFVar7->_padding_ =
       (longlong)
       &
       ___7__TRDGLambdaPass_VFMediaCaptureBufferSyncPassParameters_MediaCaptureData_UE__V<lambda_1>__1____AddSyncPointPass_VFBufferCaptureFrame_MediaCaptureData_UE___FMediaCaptureHelper_23_SAXAEAVFRDGBuilder__PEAVUMediaCapture__V__TSharedPtr_VFCaptureFrame_MediaCaptureData_UE___00__PEAVFRDGViewableResource___Z___6B_
  ;
  pFVar7[1]._padding_ = (longlong)param_5->MediaCapture;
  pFVar7[1].FullPathIfDebug.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)(param_5->CapturingFrame).Object;
  *(TReferenceControllerBase<1> **)&pFVar7[1].FullPathIfDebug.Data.ArrayNum =
       (param_5->CapturingFrame).SharedReferenceCount.ReferenceController;
  (param_5->CapturingFrame).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (param_5->CapturingFrame).Object = (FCaptureFrame *)0x0;
  pFVar7[1].Name.EventFormat = (wchar_t *)param_3;
  ClobberPassOutputs(this,pFVar7);
  iVar5 = (this->Passes).Array.ArrayNum;
  piVar1 = &(this->Passes).Array.ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                      (0x808,(ForElementType<FRDGPass_*> *)&this->Passes,piVar1);
  }
  (this->Passes).Array.ArrayNum = iVar5 + 1;
  (this->Passes).Array.AllocatorInstance.Data[iVar5] = pFVar7;
  (pFVar7->Handle).Index = (this->Passes).Array.ArrayNum - 1;
  SetupParameterPass(this,pFVar7);
  return pFVar7;
}

// AddPassInternal<UE::MediaCaptureData::FMediaCaptureTextureSyncPassParameters,`UE::MediaCaptureData::FMediaCaptureHelper::AddSyncPointPass<UE::MediaCaptureData::FTextureCaptureFrame>'::__l2::<lambda_1>_> @ 14d780130

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGPass * __thiscall
FRDGBuilder::
AddPassInternal<UE::MediaCaptureData::FMediaCaptureTextureSyncPassParameters,_UE::MediaCaptureData::FMediaCaptureHelper::AddSyncPointPass<UE::MediaCaptureData::FTextureCaptureFrame>_::__l2::<lambda_1>_>
          (FRDGBuilder *this,FRDGEventName *param_1,FShaderParametersMetadata *param_2,
          FMediaCaptureTextureSyncPassParameters *param_3,ERDGPassFlags param_4,<lambda_1> *param_5)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  ERDGPassFlags EVar4;
  int iVar5;
  wchar_t *pwVar6;
  FRDGPass *pFVar7;
  FRDGParameterStruct local_38;
  
  FRDGUserValidation::ValidateAddPass(&this->UserValidation,param_3,param_2,param_1,param_4);
  FlushAccessModeQueue(this);
  pwVar6 = FRDGEventName::GetTCHAR(param_1);
  EVar4 = OverridePassFlags(this,pwVar6,param_4);
  pFVar7 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,0x1a0,8);
  local_38.Contents = (uchar *)param_3;
  if ((param_2->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar7 = (FRDGPass *)(*pcVar2)();
      return pFVar7;
    }
  }
  local_38.Layout.Reference = (param_2->Layout).Reference;
  if (local_38.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_38.Layout.Reference);
  }
  local_38.Metadata = param_2;
  FRDGPass::FRDGPass(pFVar7,param_1,&local_38,EVar4,Inline);
  pFVar7->_padding_ =
       (longlong)
       &
       ___7__TRDGLambdaPass_VFMediaCaptureTextureSyncPassParameters_MediaCaptureData_UE__V<lambda_1>__1____AddSyncPointPass_VFTextureCaptureFrame_MediaCaptureData_UE___FMediaCaptureHelper_23_SAXAEAVFRDGBuilder__PEAVUMediaCapture__V__TSharedPtr_VFCaptureFrame_MediaCaptureData_UE___00__PEAVFRDGViewableResource___Z___6B_
  ;
  pFVar7[1]._padding_ = (longlong)param_5->MediaCapture;
  pFVar7[1].FullPathIfDebug.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)(param_5->CapturingFrame).Object;
  *(TReferenceControllerBase<1> **)&pFVar7[1].FullPathIfDebug.Data.ArrayNum =
       (param_5->CapturingFrame).SharedReferenceCount.ReferenceController;
  (param_5->CapturingFrame).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (param_5->CapturingFrame).Object = (FCaptureFrame *)0x0;
  pFVar7[1].Name.EventFormat = (wchar_t *)param_3;
  ClobberPassOutputs(this,pFVar7);
  iVar5 = (this->Passes).Array.ArrayNum;
  piVar1 = &(this->Passes).Array.ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                      (0x808,(ForElementType<FRDGPass_*> *)&this->Passes,piVar1);
  }
  (this->Passes).Array.ArrayNum = iVar5 + 1;
  (this->Passes).Array.AllocatorInstance.Data[iVar5] = pFVar7;
  (pFVar7->Handle).Index = (this->Passes).Array.ArrayNum - 1;
  SetupParameterPass(this,pFVar7);
  return pFVar7;
}

// AddPassInternal<UE::MediaCapture::Resample::FMediaCaptureResamplePS::FParameters,`FPixelShaderUtils::AddFullscreenPass<UE::MediaCapture::Resample::FMediaCaptureResamplePS>'::__l2::<lambda_1>_> @ 14d7802d0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGPass * __thiscall
FRDGBuilder::
AddPassInternal<UE::MediaCapture::Resample::FMediaCaptureResamplePS::FParameters,_FPixelShaderUtils::AddFullscreenPass<UE::MediaCapture::Resample::FMediaCaptureResamplePS>_::__l2::<lambda_1>_>
          (FRDGBuilder *this,FRDGEventName *param_1,FShaderParametersMetadata *param_2,
          FParameters *param_3,ERDGPassFlags param_4,<lambda_1>_conflict *param_5)

{
  int *piVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  ERDGPassFlags EVar6;
  int iVar7;
  wchar_t *pwVar8;
  FRDGPass *pFVar9;
  FRDGParameterStruct local_38;
  
  FRDGUserValidation::ValidateAddPass(&this->UserValidation,param_3,param_2,param_1,param_4);
  FlushAccessModeQueue(this);
  pwVar8 = FRDGEventName::GetTCHAR(param_1);
  EVar6 = OverridePassFlags(this,pwVar8,param_4);
  pFVar9 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,0x1d8,8);
  local_38.Contents = (uchar *)param_3;
  if ((param_2->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar9 = (FRDGPass *)(*pcVar4)();
      return pFVar9;
    }
  }
  local_38.Layout.Reference = (param_2->Layout).Reference;
  if (local_38.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_38.Layout.Reference);
  }
  local_38.Metadata = param_2;
  FRDGPass::FRDGPass(pFVar9,param_1,&local_38,EVar6,Async);
  pFVar9->_padding_ =
       (longlong)
       &
       ___7__TRDGLambdaPass_VFParameters_FMediaCaptureResamplePS_Resample_MediaCapture_UE__V<lambda_1>__1____AddFullscreenPass_VFMediaCaptureResamplePS_Resample_MediaCapture_UE___FPixelShaderUtils__SAXAEAVFRDGBuilder__PEBVFGlobalShaderMap____QEAVFRDGEventName__AEBV__TShaderRefBase_VFMediaCaptureResamplePS_Resample_MediaCapture_UE__VFShaderMapPointerTable____PEAV12345_AEBU__TIntRect_H_Math_5_PEAVFRHIBlendState__PEAVFRHIRasterizerState__PEAVFRHIDepthStencilState__IW4ERDGPassFlags___Z___6B_
  ;
  pFVar9[1]._padding_ = *(longlong *)param_5;
  pFVar9[1].FullPathIfDebug.Data.AllocatorInstance.Data = *(FScriptContainerElement **)(param_5 + 8)
  ;
  uVar3 = *(undefined8 *)(param_5 + 0x10);
  pwVar8 = *(wchar_t **)(param_5 + 0x18);
  pFVar9[1].FullPathIfDebug.Data.ArrayNum = (int)uVar3;
  pFVar9[1].FullPathIfDebug.Data.ArrayMax = (int)((ulonglong)uVar3 >> 0x20);
  pFVar9[1].Name.EventFormat = pwVar8;
  pFVar9[1].Name.FormattedEventName.Data.AllocatorInstance.Data =
       *(FScriptContainerElement **)(param_5 + 0x20);
  uVar3 = *(undefined8 *)(param_5 + 0x28);
  pFVar9[1].Name.FormattedEventName.Data.ArrayNum = (int)uVar3;
  pFVar9[1].Name.FormattedEventName.Data.ArrayMax = (int)((ulonglong)uVar3 >> 0x20);
  pFVar9[1].ParameterStruct.Contents = *(uchar **)(param_5 + 0x30);
  pFVar9[1].ParameterStruct.Layout.Reference = *(FRHIUniformBufferLayout **)(param_5 + 0x38);
  pFVar9[1].ParameterStruct.Metadata = *(FShaderParametersMetadata **)(param_5 + 0x40);
  uVar2 = *(undefined4 *)(param_5 + 0x48);
  pFVar9[1].Flags = (short)uVar2;
  pFVar9[1].TaskMode = (char)((uint)uVar2 >> 0x10);
  pFVar9[1].Pipeline = (char)((uint)uVar2 >> 0x18);
  *(FParameters **)&pFVar9[1].Workload = param_3;
  ClobberPassOutputs(this,pFVar9);
  iVar7 = (this->Passes).Array.ArrayNum;
  piVar1 = &(this->Passes).Array.ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                      (0x808,(ForElementType<FRDGPass_*> *)&this->Passes,piVar1);
  }
  (this->Passes).Array.ArrayNum = iVar7 + 1;
  (this->Passes).Array.AllocatorInstance.Data[iVar7] = pFVar9;
  (pFVar9->Handle).Index = (this->Passes).Array.ArrayNum - 1;
  SetupParameterPass(this,pFVar9);
  return pFVar9;
}

// AddPassInternal<FModifyAlphaSwizzleRgbaPS::FParameters,`AddDrawScreenPass<FModifyAlphaSwizzleRgbaPS>'::__l2::<lambda_1>_> @ 14d7804a0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGPass * __thiscall
FRDGBuilder::
AddPassInternal<FModifyAlphaSwizzleRgbaPS::FParameters,_AddDrawScreenPass<FModifyAlphaSwizzleRgbaPS>_::__l2::<lambda_1>_>
          (FRDGBuilder *this,FRDGEventName *param_1,FShaderParametersMetadata *param_2,
          FParameters *param_3,ERDGPassFlags param_4,<lambda_1> *param_5)

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
       ___7__TRDGLambdaPass_VFParameters_FModifyAlphaSwizzleRgbaPS__V<lambda_1>__1____AddDrawScreenPass_VFModifyAlphaSwizzleRgbaPS____YAXAEAVFRDGBuilder____QEAVFRDGEventName__UFScreenPassViewInfo__AEBVFScreenPassTextureViewport__3AEBV__TShaderRefBase_VFShader__VFShaderMapPointerTable____AEBV__TShaderRefBase_VFModifyAlphaSwizzleRgbaPS__VFShaderMapPointerTable____PEAVFRHIBlendState__PEAVFRHIDepthStencilState__PEAV12_W4EScreenPassDrawFlags___Z___6B_
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

// AddPassInternal<FRGB10toYUVv210ConvertPS::FParameters,`AddDrawScreenPass<FRGB10toYUVv210ConvertPS>'::__l2::<lambda_1>_> @ 14d7806b0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGPass * __thiscall
FRDGBuilder::
AddPassInternal<FRGB10toYUVv210ConvertPS::FParameters,_AddDrawScreenPass<FRGB10toYUVv210ConvertPS>_::__l2::<lambda_1>_>
          (FRDGBuilder *this,FRDGEventName *param_1,FShaderParametersMetadata *param_2,
          FParameters *param_3,ERDGPassFlags param_4,<lambda_1> *param_5)

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
       ___7__TRDGLambdaPass_VFParameters_FRGB10toYUVv210ConvertPS__V<lambda_1>__1____AddDrawScreenPass_VFRGB10toYUVv210ConvertPS____YAXAEAVFRDGBuilder____QEAVFRDGEventName__UFScreenPassViewInfo__AEBVFScreenPassTextureViewport__3AEBV__TShaderRefBase_VFShader__VFShaderMapPointerTable____AEBV__TShaderRefBase_VFRGB10toYUVv210ConvertPS__VFShaderMapPointerTable____PEAVFRHIBlendState__PEAVFRHIDepthStencilState__PEAV12_W4EScreenPassDrawFlags___Z___6B_
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

// AddPassInternal<FRGB8toUYVY8ConvertPS::FParameters,`AddDrawScreenPass<FRGB8toUYVY8ConvertPS>'::__l2::<lambda_1>_> @ 14d7808c0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGPass * __thiscall
FRDGBuilder::
AddPassInternal<FRGB8toUYVY8ConvertPS::FParameters,_AddDrawScreenPass<FRGB8toUYVY8ConvertPS>_::__l2::<lambda_1>_>
          (FRDGBuilder *this,FRDGEventName *param_1,FShaderParametersMetadata *param_2,
          FParameters *param_3,ERDGPassFlags param_4,<lambda_1> *param_5)

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
       ___7__TRDGLambdaPass_VFParameters_FRGB8toUYVY8ConvertPS__V<lambda_1>__1____AddDrawScreenPass_VFRGB8toUYVY8ConvertPS____YAXAEAVFRDGBuilder____QEAVFRDGEventName__UFScreenPassViewInfo__AEBVFScreenPassTextureViewport__3AEBV__TShaderRefBase_VFShader__VFShaderMapPointerTable____AEBV__TShaderRefBase_VFRGB8toUYVY8ConvertPS__VFShaderMapPointerTable____PEAVFRHIBlendState__PEAVFRHIDepthStencilState__PEAV12_W4EScreenPassDrawFlags___Z___6B_
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

// BindForLegacyShaderParameters<UE::MediaCapture::Resample::FMediaCaptureResamplePS::FParameters> @ 14d781ed0

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
BindForLegacyShaderParameters<UE::MediaCapture::Resample::FMediaCaptureResamplePS::FParameters>
          (FShader *param_1,int param_2,FShaderParameterMap *param_3,bool param_4)

{
  FShaderParametersMetadata *pFVar1;
  
  pFVar1 = UE::MediaCapture::Resample::FMediaCaptureResamplePS::FParameters::FTypeInfo::
           GetStructMetadata();
  FShaderParameterBindings::BindForLegacyShaderParameters
            (&param_1->Bindings,param_1,param_2,param_3,pFVar1,param_4);
  return;
}

// CastChecked<UGameEngine,UEngine> @ 14d781f30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UGameEngine * __cdecl CastChecked<UGameEngine,UEngine>(UEngine *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UEngine *)0x0) {
    pFVar3 = GetTypeName<UGameEngine>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_UGameEngine_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UGameEngine *)param_1;
  }
  pFVar3 = GetTypeName<UGameEngine>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UEngine>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// ClearUnusedGraphResources<UE::MediaCapture::Resample::FMediaCaptureResamplePS> @ 14d781ff0

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
ClearUnusedGraphResources<UE::MediaCapture::Resample::FMediaCaptureResamplePS>
          (TShaderRefBase<UE::MediaCapture::Resample::FMediaCaptureResamplePS,FShaderMapPointerTable>
           *param_1,FParameters *param_2,initializer_list<FRDGResource_*> *param_3)

{
  FShaderParametersMetadata *pFVar1;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_18;
  
  pFVar1 = UE::MediaCapture::Resample::FMediaCaptureResamplePS::FParameters::FTypeInfo::
           GetStructMetadata();
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

// ClearUnusedGraphResources<UE::MediaCapture::Resample::FMediaCaptureResamplePS> @ 14d782070

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
ClearUnusedGraphResources<UE::MediaCapture::Resample::FMediaCaptureResamplePS>
          (TShaderRefBase<UE::MediaCapture::Resample::FMediaCaptureResamplePS,FShaderMapPointerTable>
           *param_1,FShaderParametersMetadata *param_2,FParameters *param_3,
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

// ClearUnusedGraphResources<FModifyAlphaSwizzleRgbaPS> @ 14d7820f0

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
ClearUnusedGraphResources<FModifyAlphaSwizzleRgbaPS>
          (TShaderRefBase<FModifyAlphaSwizzleRgbaPS,FShaderMapPointerTable> *param_1,
          FParameters *param_2,initializer_list<FRDGResource_*> *param_3)

{
  FShaderParametersMetadata *pFVar1;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_18;
  
  pFVar1 = FModifyAlphaSwizzleRgbaPS::FParameters::FTypeInfo::GetStructMetadata();
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

// ClearUnusedGraphResources<FModifyAlphaSwizzleRgbaPS> @ 14d782170

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
ClearUnusedGraphResources<FModifyAlphaSwizzleRgbaPS>
          (TShaderRefBase<FModifyAlphaSwizzleRgbaPS,FShaderMapPointerTable> *param_1,
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

// ClearUnusedGraphResources<FRGB10toYUVv210ConvertPS> @ 14d7821f0

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
ClearUnusedGraphResources<FRGB10toYUVv210ConvertPS>
          (TShaderRefBase<FRGB10toYUVv210ConvertPS,FShaderMapPointerTable> *param_1,
          FParameters *param_2,initializer_list<FRDGResource_*> *param_3)

{
  FShaderParametersMetadata *pFVar1;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_18;
  
  pFVar1 = FRGB10toYUVv210ConvertPS::FParameters::FTypeInfo::GetStructMetadata();
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

// ClearUnusedGraphResources<FRGB10toYUVv210ConvertPS> @ 14d782270

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
ClearUnusedGraphResources<FRGB10toYUVv210ConvertPS>
          (TShaderRefBase<FRGB10toYUVv210ConvertPS,FShaderMapPointerTable> *param_1,
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

// ClearUnusedGraphResources<FRGB8toUYVY8ConvertPS> @ 14d7822f0

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
ClearUnusedGraphResources<FRGB8toUYVY8ConvertPS>
          (TShaderRefBase<FRGB8toUYVY8ConvertPS,FShaderMapPointerTable> *param_1,
          FParameters *param_2,initializer_list<FRDGResource_*> *param_3)

{
  FShaderParametersMetadata *pFVar1;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_18;
  
  pFVar1 = FRGB8toUYVY8ConvertPS::FParameters::FTypeInfo::GetStructMetadata();
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

// ClearUnusedGraphResources<FRGB8toUYVY8ConvertPS> @ 14d782370

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
ClearUnusedGraphResources<FRGB8toUYVY8ConvertPS>
          (TShaderRefBase<FRGB8toUYVY8ConvertPS,FShaderMapPointerTable> *param_1,
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

// ConstructItems<TSharedPtr<IMediaTextureSample,1>,TSharedPtr<IMediaTextureSample,1>,int> @ 14d7823f0

void __cdecl
ConstructItems<TSharedPtr<IMediaTextureSample,1>,TSharedPtr<IMediaTextureSample,1>,int>
          (void *param_1,TSharedPtr<IMediaTextureSample,1> *param_2,int param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      *(IMediaTextureSample **)(lVar2 + (longlong)param_2) = param_2->Object;
      pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
      *(TReferenceControllerBase<1> **)(lVar2 + 8 + (longlong)param_2) = pTVar1;
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DestructItems<UMediaCapture::FQueuedCaptureData,int> @ 14d782990

void __cdecl
DestructItems<UMediaCapture::FQueuedCaptureData,int>(FQueuedCaptureData *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &(param_1->UserData).SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<UE::MediaCapture::FRenderPass,int> @ 14d7829d0

void __cdecl DestructItems<UE::MediaCapture::FRenderPass,int>(FRenderPass *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->ExecutePassDelegate);
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_1);
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TSharedPtr<UMediaCapture::FMediaCaptureSyncData,1>,int> @ 14d782a10

void __cdecl
DestructItems<TSharedPtr<UMediaCapture::FMediaCaptureSyncData,1>,int>
          (TSharedPtr<UMediaCapture::FMediaCaptureSyncData,1> *param_1,int param_2)

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

// DestructItems<TSharedPtr<UE::MediaCaptureData::FFrame,1>,int> @ 14d782a50

void __cdecl
DestructItems<TSharedPtr<UE::MediaCaptureData::FFrame,1>,int>
          (TSharedPtr<UE::MediaCaptureData::FFrame,1> *param_1,int param_2)

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

// DestructItems<TSharedRef<FMediaIOCoreTextureSampleBase,1>,int> @ 14d782a90

void __cdecl
DestructItems<TSharedRef<FMediaIOCoreTextureSampleBase,1>,int>
          (TSharedRef<FMediaIOCoreTextureSampleBase,1> *param_1,int param_2)

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

// DrawScreenPass<``AddDrawScreenPass<FModifyAlphaSwizzleRgbaPS>'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_> @ 14d782dc0

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
DrawScreenPass<__AddDrawScreenPass<FModifyAlphaSwizzleRgbaPS>_::__l2::<lambda_1>::operator()_::__l2::<lambda_1>_>
          (FRHICommandList *param_1,FScreenPassViewInfo *param_2,FScreenPassTextureViewport *param_3
          ,FScreenPassTextureViewport *param_4,FScreenPassPipelineState *param_5,
          EScreenPassDrawFlags param_6,<lambda_1> *param_7)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  TShaderRefBase<FModifyAlphaSwizzleRgbaPS,FShaderMapPointerTable> *pTVar4;
  FParameters *pFVar5;
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
  if (pTVar4->ShaderContent != (FModifyAlphaSwizzleRgbaPS *)0x0) {
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
                 &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FModifyAlphaSwizzleRgbaPS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                  ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
    }
  }
  pFVar10 = FModifyAlphaSwizzleRgbaPS::FParameters::FTypeInfo::GetStructMetadata();
  local_48.ShaderContent = (FShader *)pTVar4->ShaderContent;
  local_48.ShaderMap = pTVar4->ShaderMap;
  ValidateShaderParameters(&local_48,pFVar10,pFVar5);
  SetShaderParameters(param_7->RHICmdList,(FRHIGraphicsShader *)aVar9,
                      (FShaderParameterBindings *)pTVar4->ShaderContent,pFVar10,pFVar5);
  DrawScreenPass_PostSetup(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}

// DrawScreenPass<``AddDrawScreenPass<FRGB10toYUVv210ConvertPS>'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_> @ 14d783000

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
DrawScreenPass<__AddDrawScreenPass<FRGB10toYUVv210ConvertPS>_::__l2::<lambda_1>::operator()_::__l2::<lambda_1>_>
          (FRHICommandList *param_1,FScreenPassViewInfo *param_2,FScreenPassTextureViewport *param_3
          ,FScreenPassTextureViewport *param_4,FScreenPassPipelineState *param_5,
          EScreenPassDrawFlags param_6,<lambda_1> *param_7)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  TShaderRefBase<FRGB10toYUVv210ConvertPS,FShaderMapPointerTable> *pTVar4;
  FParameters *pFVar5;
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
  if (pTVar4->ShaderContent != (FRGB10toYUVv210ConvertPS *)0x0) {
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
                 &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FRGB10toYUVv210ConvertPS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                  ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
    }
  }
  pFVar10 = FRGB10toYUVv210ConvertPS::FParameters::FTypeInfo::GetStructMetadata();
  local_48.ShaderContent = (FShader *)pTVar4->ShaderContent;
  local_48.ShaderMap = pTVar4->ShaderMap;
  ValidateShaderParameters(&local_48,pFVar10,pFVar5);
  SetShaderParameters(param_7->RHICmdList,(FRHIGraphicsShader *)aVar9,
                      (FShaderParameterBindings *)pTVar4->ShaderContent,pFVar10,pFVar5);
  DrawScreenPass_PostSetup(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}

// DrawScreenPass<``AddDrawScreenPass<FRGB8toUYVY8ConvertPS>'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_> @ 14d783240

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
DrawScreenPass<__AddDrawScreenPass<FRGB8toUYVY8ConvertPS>_::__l2::<lambda_1>::operator()_::__l2::<lambda_1>_>
          (FRHICommandList *param_1,FScreenPassViewInfo *param_2,FScreenPassTextureViewport *param_3
          ,FScreenPassTextureViewport *param_4,FScreenPassPipelineState *param_5,
          EScreenPassDrawFlags param_6,<lambda_1> *param_7)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  TShaderRefBase<FRGB8toUYVY8ConvertPS,FShaderMapPointerTable> *pTVar4;
  FParameters *pFVar5;
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
  if (pTVar4->ShaderContent != (FRGB8toUYVY8ConvertPS *)0x0) {
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
                 &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FRGB8toUYVY8ConvertPS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                  ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
    }
  }
  pFVar10 = FRGB8toUYVY8ConvertPS::FParameters::FTypeInfo::GetStructMetadata();
  local_48.ShaderContent = (FShader *)pTVar4->ShaderContent;
  local_48.ShaderMap = pTVar4->ShaderMap;
  ValidateShaderParameters(&local_48,pFVar10,pFVar5);
  SetShaderParameters(param_7->RHICmdList,(FRHIGraphicsShader *)aVar9,
                      (FShaderParameterBindings *)pTVar4->ShaderContent,pFVar10,pFVar5);
  DrawScreenPass_PostSetup(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}

// Enqueue<TRenderCommandTag<`UMediaCapture::PrepareAndDispatchCapture_GameThread'::__l6::TSTR_FMediaOutputCaptureFrameCreateTexture1139>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 14d784200

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_UMediaCapture::PrepareAndDispatchCapture_GameThread_::__l6::TSTR_FMediaOutputCaptureFrameCreateTexture1139>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`UMediaCapture::PrepareAndDispatchCapture_GameThread'::__l6::TSTR_FMediaOutputCaptureFrameCreateTexture1139>
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
      if (bVar8) goto LAB_14d784351;
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
    goto LAB_14d784545;
  }
LAB_14d784351:
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
LAB_14d78442f:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14d78442f;
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
LAB_14d784545:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`UE::MediaCaptureData::FFrameManager::~FFrameManager'::__l2::TSTR_MediaCaptureFrameManagerCleaning82>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 14d784580

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_UE::MediaCaptureData::FFrameManager::~FFrameManager_::__l2::TSTR_MediaCaptureFrameManagerCleaning82>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`UE::MediaCaptureData::FFrameManager::~FFrameManager'::__l2::TSTR_MediaCaptureFrameManagerCleaning82>
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
      if (bVar8) goto LAB_14d7846d1;
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
    goto LAB_14d7848c5;
  }
LAB_14d7846d1:
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
LAB_14d7847af:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14d7847af;
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
LAB_14d7848c5:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`FMediaIOCorePlayerBase::CreateAndRegisterTextures'::__l2::TSTR_MediaIOCorePlayerCreateTextures732>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 14d784900

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FMediaIOCorePlayerBase::CreateAndRegisterTextures_::__l2::TSTR_MediaIOCorePlayerCreateTextures732>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`FMediaIOCorePlayerBase::CreateAndRegisterTextures'::__l2::TSTR_MediaIOCorePlayerCreateTextures732>
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
      if (bVar8) goto LAB_14d784a51;
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
    goto LAB_14d784c45;
  }
LAB_14d784a51:
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
LAB_14d784b2f:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14d784b2f;
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
LAB_14d784c45:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`UMediaCapture::InitializeOutputResources'::__l2::TSTR_MediaOutputCaptureFrameCreateResources1227>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 14d784c80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_UMediaCapture::InitializeOutputResources_::__l2::TSTR_MediaOutputCaptureFrameCreateResources1227>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`UMediaCapture::InitializeOutputResources'::__l2::TSTR_MediaOutputCaptureFrameCreateResources1227>
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
      if (bVar8) goto LAB_14d784dd1;
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
    goto LAB_14d784fc5;
  }
LAB_14d784dd1:
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
LAB_14d784eaf:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14d784eaf;
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
LAB_14d784fc5:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`UE::MediaCaptureData::FSyncPointWatcher::ProcessPendingCapture'::__l31::TSTR_MediaOutputCaptureReadbackComplete112>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 14d785000

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_UE::MediaCaptureData::FSyncPointWatcher::ProcessPendingCapture_::__l31::TSTR_MediaOutputCaptureReadbackComplete112>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`UE::MediaCaptureData::FSyncPointWatcher::ProcessPendingCapture'::__l31::TSTR_MediaOutputCaptureReadbackComplete112>
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
      if (bVar8) goto LAB_14d785151;
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
    goto LAB_14d785345;
  }
LAB_14d785151:
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
LAB_14d78522f:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14d78522f;
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
LAB_14d785345:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`FMediaIOCorePlayerBase::RegisterSampleBuffer'::__l5::TSTR_RegisterSampleBuffers660>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 14d785380

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FMediaIOCorePlayerBase::RegisterSampleBuffer_::__l5::TSTR_RegisterSampleBuffers660>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`FMediaIOCorePlayerBase::RegisterSampleBuffer'::__l5::TSTR_RegisterSampleBuffers660>
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
      if (bVar8) goto LAB_14d7854d1;
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
    goto LAB_14d7856c5;
  }
LAB_14d7854d1:
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
LAB_14d7855af:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14d7855af;
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
LAB_14d7856c5:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`FMediaIOCorePlayerBase::ExecuteGPUTransfer'::__l2::TSTR_StartGPUTextureTransferCopy912>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 14d785700

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FMediaIOCorePlayerBase::ExecuteGPUTransfer_::__l2::TSTR_StartGPUTextureTransferCopy912>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`FMediaIOCorePlayerBase::ExecuteGPUTransfer'::__l2::TSTR_StartGPUTextureTransferCopy912>
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
      if (bVar8) goto LAB_14d785851;
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
    goto LAB_14d785a45;
  }
LAB_14d785851:
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
LAB_14d78592f:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14d78592f;
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
LAB_14d785a45:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`FMediaIOCorePlayerBase::UnregisterSampleBuffers'::__l2::TSTR_UnregisterSampleBuffers702>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 14d785a80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FMediaIOCorePlayerBase::UnregisterSampleBuffers_::__l2::TSTR_UnregisterSampleBuffers702>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`FMediaIOCorePlayerBase::UnregisterSampleBuffers'::__l2::TSTR_UnregisterSampleBuffers702>
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
      if (bVar8) goto LAB_14d785bd1;
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
    goto LAB_14d785dc5;
  }
LAB_14d785bd1:
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
LAB_14d785caf:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14d785caf;
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
LAB_14d785dc5:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`FMediaIOCorePlayerBase::UnregisterTextures'::__l2::TSTR_UnregisterSampleBuffers822>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 14d785e00

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FMediaIOCorePlayerBase::UnregisterTextures_::__l2::TSTR_UnregisterSampleBuffers822>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`FMediaIOCorePlayerBase::UnregisterTextures'::__l2::TSTR_UnregisterSampleBuffers822>
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
      if (bVar8) goto LAB_14d785f51;
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
    goto LAB_14d786145;
  }
LAB_14d785f51:
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
LAB_14d78602f:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14d78602f;
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
LAB_14d786145:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// FindByPredicate<`UMediaCapture::GetAvailableSyncHandler'::__l2::<lambda_1>_> @ 14d786180

TSharedPtr<UMediaCapture::FMediaCaptureSyncData,1> * __thiscall
TArray<TSharedPtr<UMediaCapture::FMediaCaptureSyncData,1>,TSizedDefaultAllocator<32>_>::
FindByPredicate<_UMediaCapture::GetAvailableSyncHandler_::__l2::<lambda_1>_>
          (TArray<TSharedPtr<UMediaCapture::FMediaCaptureSyncData,1>,TSizedDefaultAllocator<32>_>
           *this,<lambda_1> param_1)

{
  code *pcVar1;
  bool bVar2;
  TSharedPtr<UMediaCapture::FMediaCaptureSyncData,1> *pTVar3;
  TSharedPtr<UMediaCapture::FMediaCaptureSyncData,1> *pTVar4;
  
  pTVar3 = (TSharedPtr<UMediaCapture::FMediaCaptureSyncData,1> *)(this->AllocatorInstance).Data;
  pTVar4 = pTVar3 + this->ArrayNum;
  while( true ) {
    if (pTVar3 == pTVar4) {
      return (TSharedPtr<UMediaCapture::FMediaCaptureSyncData,1> *)0x0;
    }
    if ((pTVar3->Object == (FMediaCaptureSyncData *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) break;
    if (pTVar3->Object->bIsBusy == (atomic<bool>)0x0) {
      return pTVar3;
    }
    pTVar3 = pTVar3 + 1;
  }
  pcVar1 = (code *)swi(3);
  pTVar3 = (TSharedPtr<UMediaCapture::FMediaCaptureSyncData,1> *)(*pcVar1)();
  return pTVar3;
}

// GetFullNameForCastLogError<UEngine> @ 14d786940

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FString * __cdecl
GetFullNameForCastLogError<UEngine>(FString *__return_storage_ptr__,UEngine *param_1)

{
  UObjectBaseUtility::GetFullName
            ((UObjectBaseUtility *)param_1,__return_storage_ptr__,(UObject *)0x0,None);
  return __return_storage_ptr__;
}

// GetFullNameForCastLogError<UMediaOutput> @ 14d786970

FString * __cdecl
GetFullNameForCastLogError<UMediaOutput>(FString *__return_storage_ptr__,UMediaOutput *param_1)

{
  UObjectBaseUtility::GetFullName
            ((UObjectBaseUtility *)param_1,__return_storage_ptr__,(UObject *)0x0,None);
  return __return_storage_ptr__;
}

// GetTypeName<UFileMediaOutput> @ 14d786b60

FString * __cdecl GetTypeName<UFileMediaOutput>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UFileMediaOutput::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UGameEngine> @ 14d786ba0

FString * __cdecl GetTypeName<UGameEngine>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = Z_Construct_UClass_UGameEngine_NoRegister();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<URenderTargetMediaOutput> @ 14d786be0

FString * __cdecl GetTypeName<URenderTargetMediaOutput>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = URenderTargetMediaOutput::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// InternalConstructor<UBlendDeinterlacer> @ 14d786c20

void __cdecl InternalConstructor<UBlendDeinterlacer>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UBlendDeinterlacer__6B_;
  }
  return;
}

// InternalConstructor<UBobDeinterlacer> @ 14d786c50

void __cdecl InternalConstructor<UBobDeinterlacer>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UBobDeinterlacer__6B_;
  }
  return;
}

// InternalConstructor<UCaptureCardMediaSource> @ 14d786c80

void __cdecl InternalConstructor<UCaptureCardMediaSource>(FObjectInitializer *param_1)

{
  UTimeSynchronizableMediaSource *this;
  FName FVar1;
  FName *pFVar2;
  UClass *pUVar3;
  UObject *pUVar4;
  FName local_res8;
  
  this = (UTimeSynchronizableMediaSource *)param_1->Obj;
  if (this != (UTimeSynchronizableMediaSource *)0x0) {
    UTimeSynchronizableMediaSource::UTimeSynchronizableMediaSource(this);
    *(undefined2 *)&this[1]._padding_ = 1;
    this->_padding_ = (longlong)&UCaptureCardMediaSource::_vftable__for__UObject__;
    *(undefined1 *)((longlong)&this[1]._padding_ + 2) = 1;
    this->_padding_ = (longlong)&UCaptureCardMediaSource::_vftable__for__IMediaOptions__;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0x1010100;
    *(undefined1 *)((longlong)&this[1]._padding_ + 4) = 1;
    FOpenColorIOColorConversionSettings::FOpenColorIOColorConversionSettings
              ((FOpenColorIOColorConversionSettings *)&this[1]._padding_);
    pFVar2 = FName::FName(&local_res8,"Deinterlacer");
    FVar1 = *pFVar2;
    pUVar3 = UBobDeinterlacer::StaticClass();
    pUVar4 = UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar3,pUVar3,true,false);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar4);
    }
    this[1]._padding_ = (longlong)pUVar4;
  }
  return;
}

// InternalConstructor<UDiscardDeinterlacer> @ 14d786d60

void __cdecl InternalConstructor<UDiscardDeinterlacer>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UDiscardDeinterlacer__6B_;
  }
  return;
}

// InternalConstructor<UFileMediaCapture> @ 14d786d90

void __cdecl InternalConstructor<UFileMediaCapture>(FObjectInitializer *param_1)

{
  UMediaCapture *this;
  
  this = (UMediaCapture *)param_1->Obj;
  if (this != (UMediaCapture *)0x0) {
    UMediaCapture::UMediaCapture(this);
    this->_padding_ = (longlong)&___7UFileMediaCapture__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined8 *)&this[1].OnStateChangedNative = 0;
  }
  return;
}

// InternalConstructor<UFileMediaOutput> @ 14d786de0

void __cdecl InternalConstructor<UFileMediaOutput>(FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  UObject *this;
  FObjectInitializer *pFVar2;
  FString *pFVar3;
  size_t sVar4;
  int iVar5;
  wchar_t *_Str;
  FString local_48;
  FString local_38;
  TStringView<wchar_t> local_28;
  FScriptContainerElement *local_18;
  undefined4 local_10;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    pFVar2 = FObjectInitializer::Get();
    UObject::UObject(this,pFVar2);
    *(undefined4 *)(this + 1) = 4;
    *(undefined ***)this = &___7UFileMediaOutput__6B_;
    puVar1 = &this[3].field_0x18;
    this[1].field_0x8 = 3;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined2 *)&this[2].field_0x4 = 0x101;
    *(undefined8 *)&this[2].field_0x10 = 0;
    *(undefined8 *)&this[3].field_0x10 = 0;
    iVar5 = 0;
    *(undefined4 *)(this + 2) = 0;
    *(undefined8 *)puVar1 = 0;
    *(undefined8 *)&this[3].field_0x20 = 0;
    *(undefined8 *)(this + 4) = 0;
    *(undefined8 *)&this[4].field_0x8 = 0;
    this[4].field_0x24 = 1;
    pFVar3 = FString::FString(&local_38,"MediaOutput");
    local_28.DataPtr = L"";
    if ((pFVar3->Data).ArrayNum == 0) {
      _Str = L"";
    }
    else {
      _Str = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
    pFVar3 = FPaths::ProjectSavedDir();
    if ((pFVar3->Data).ArrayNum != 0) {
      local_28.DataPtr = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
    if ((FScriptContainerElement *)local_28.DataPtr != (FScriptContainerElement *)0x0) {
      sVar4 = wcslen(local_28.DataPtr);
      iVar5 = (int)sVar4;
    }
    local_10 = 0;
    local_28.Size = iVar5;
    local_18 = (FScriptContainerElement *)_Str;
    if ((FScriptContainerElement *)_Str != (FScriptContainerElement *)0x0) {
      sVar4 = wcslen(_Str);
      local_10 = (undefined4)sVar4;
    }
    FPaths::CombineInternal(&local_48,&local_28,2);
    if ((FString *)puVar1 != &local_48) {
      if (*(void **)puVar1 != (void *)0x0) {
        FMemory::Free(*(void **)puVar1);
      }
      *(FScriptContainerElement **)puVar1 = local_48.Data.AllocatorInstance.Data;
      *(int *)&this[3].field_0x20 = local_48.Data.ArrayNum;
      *(int *)&this[3].field_0x24 = local_48.Data.ArrayMax;
      local_48.Data.ArrayNum = 0;
      local_48.Data.ArrayMax = 0;
      local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// InternalConstructor<UMediaCapture> @ 14d786f60

void __cdecl InternalConstructor<UMediaCapture>(FObjectInitializer *param_1)

{
  UObject *this;
  uint uVar1;
  
  this = param_1->Obj;
  if (this == (UObject *)0x0) {
    return;
  }
  UObject::UObject(this);
  *(undefined ***)this = &___7UMediaCapture__6B_;
  *(undefined8 *)(this + 1) = 0;
  *(undefined8 *)&this[1].field_0x8 = 0;
  *(undefined8 *)&this[1].field_0x10 = 0;
  *(undefined8 *)&this[1].field_0x18 = 0;
  *(undefined8 *)&this[1].field_0x20 = 0;
  *(undefined8 *)(this + 2) = 0;
  *(undefined8 *)&this[2].field_0x8 = 2;
  *(undefined8 *)&this[2].field_0x10 = 0;
  *(undefined8 *)&this[2].field_0x18 = 0;
  *(undefined4 *)&this[2].field_0x20 = 0;
  *(undefined8 *)(this + 3) = 0;
  FAudioDeviceHandle::FAudioDeviceHandle((FAudioDeviceHandle *)&this[3].field_0x8);
  *(undefined4 *)&this[3].field_0x20 = 0x780;
  *(undefined4 *)&this[3].field_0x24 = 0x438;
  *(int *)(this + 4) = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
  this[4].field_0x4 = 1;
  *(undefined4 *)&this[4].field_0x8 = 2;
  *(undefined8 *)&this[4].field_0x10 = 0;
  *(undefined4 *)&this[4].field_0x18 = 0;
  this[4].field_0x1c = 4;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this[4].field_0x20,4000);
  *(undefined4 *)&this[5].field_0x20 = 0x780;
  *(undefined4 *)&this[5].field_0x24 = 0x438;
  *(undefined2 *)(this + 6) = 0x1212;
  *(undefined8 *)&this[6].field_0x8 = 0;
  *(undefined8 *)&this[6].field_0x10 = 1;
  *(undefined8 *)&this[6].field_0x18 = 0;
  *(undefined4 *)&this[6].field_0x20 = 0;
  uVar1 = GNumExplicitGPUsForRendering;
  *(undefined4 *)(this + 7) = 0;
  *(undefined4 *)&this[7].field_0x4 = 1;
  *(undefined4 *)&this[7].field_0x8 = 1;
  *(undefined4 *)&this[7].field_0xc = 0x10001;
  *(undefined4 *)&this[7].field_0x10 = 0x101;
  *(undefined2 *)&this[7].field_0x14 = 0xff00;
  *(undefined8 *)&this[7].field_0x20 = 0;
  *(int *)&this[6].field_0x24 = (1 << ((byte)uVar1 & 0x1f)) + -1;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)&this[8].field_0x4 = 1;
  *(undefined4 *)&this[8].field_0x8 = 1;
  *(undefined8 *)&this[8].field_0xc = 1;
  *(undefined8 *)&this[8].field_0x18 = 0;
  *(undefined2 *)&this[8].field_0x20 = 0;
  this[8].field_0x22 = 0;
  FOpenColorIOColorConversionSettings::FOpenColorIOColorConversionSettings
            ((FOpenColorIOColorConversionSettings *)(this + 9));
  ((TIntPoint<int>_u_0 *)(this + 0xd))->_s_0 =
       (TIntPoint<int>_u_0_s_0)UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
  *(undefined4 *)&this[0xd].field_0x8 = 0x10100;
  *(undefined2 *)&this[0xd].field_0xc = 0;
  *(undefined4 *)&this[0xd].field_0x10 = 0xffffffff;
  this[0xd].field_0x14 = 5;
  *(undefined2 *)&this[0xd].field_0x18 = 0;
  FString::FString((FString *)&this[0xd].field_0x20,L"[undefined]");
  *(undefined4 *)&this[0xe].field_0x8 = 0;
  *(undefined2 *)&this[0xe].field_0xc = 0;
  this[0xe].field_0xe = 0;
  *(undefined4 *)&this[0xe].field_0x10 = 0;
  *(undefined8 *)&this[0xe].field_0x18 = 0;
  *(undefined8 *)&this[0xe].field_0x20 = 0;
  *(undefined4 *)(this + 0xf) = 0;
  this[0xf].field_0x4 = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this[0xf].field_0x8,4000);
  *(undefined8 *)&this[0x10].field_0x8 = 0;
  *(undefined8 *)&this[0x10].field_0x10 = 0;
  *(undefined8 *)&this[0x10].field_0x18 = 0;
  *(undefined8 *)&this[0x10].field_0x20 = 0;
  *(undefined8 *)(this + 0x11) = 0;
  *(undefined8 *)&this[0x11].field_0x8 = 0;
  *(undefined8 *)&this[0x11].field_0x10 = 0;
  *(undefined8 *)&this[0x11].field_0x18 = 0;
  *(undefined8 *)&this[0x11].field_0x20 = 0;
  *(undefined8 *)(this + 0x12) = 0;
  return;
}

// InternalConstructor<UMediaIOCoreSubsystem> @ 14d786f80

void __cdecl InternalConstructor<UMediaIOCoreSubsystem>(FObjectInitializer *param_1)

{
  UEngineSubsystem *this;
  
  this = (UEngineSubsystem *)param_1->Obj;
  if (this != (UEngineSubsystem *)0x0) {
    UEngineSubsystem::UEngineSubsystem(this);
    *(undefined ***)this = &___7UMediaIOCoreSubsystem__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined4 *)&this[2].field_0x8 = 0;
    *(undefined4 *)&this[2].field_0xc = 0x80;
    *(undefined4 *)&this[2].field_0x10 = 0xffffffff;
    *(undefined4 *)&this[2].field_0x14 = 0;
    *(undefined8 *)&this[2].field_0x20 = 0;
    *(undefined4 *)&this[2].field_0x28 = 0;
    *(undefined8 *)(this + 3) = 0;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this[3].field_0x8,4000);
    *(undefined8 *)(this + 4) = 0;
    *(undefined8 *)&this[4].field_0x8 = 0;
    *(undefined8 *)&this[4].field_0x10 = 2;
  }
  return;
}

// InternalConstructor<UMediaOutput> @ 14d787030

void __cdecl InternalConstructor<UMediaOutput>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined4 *)(this + 1) = 4;
    *(undefined ***)this = &___7UMediaOutput__6B_;
  }
  return;
}

// InternalConstructor<URenderTargetMediaCapture> @ 14d787070

void __cdecl InternalConstructor<URenderTargetMediaCapture>(FObjectInitializer *param_1)

{
  UMediaCapture *this;
  
  this = (UMediaCapture *)param_1->Obj;
  if (this != (UMediaCapture *)0x0) {
    UMediaCapture::UMediaCapture(this);
    this->_padding_ = (longlong)&___7URenderTargetMediaCapture__6B_;
    this[1]._padding_ = 0;
                    /* WARNING: Could not recover jumptable at 0x00014d7870ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this[1]._padding_,4000);
    return;
  }
  return;
}

// InternalConstructor<URenderTargetMediaOutput> @ 14d7870c0

void __cdecl InternalConstructor<URenderTargetMediaOutput>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined4 *)(this + 1) = 4;
    this[1].field_0x8 = 0;
    *(undefined ***)this = &___7URenderTargetMediaOutput__6B_;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    FUtf8String::Reset((FUtf8String *)(this + 2),0);
    return;
  }
  return;
}

// InternalConstructor<UVideoDeinterlacer> @ 14d787120

void __cdecl InternalConstructor<UVideoDeinterlacer>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UVideoDeinterlacer__6B_;
  }
  return;
}

// InternalVTableHelperCtorCaller<UBlendDeinterlacer> @ 14d787150

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UBlendDeinterlacer>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UBlendDeinterlacer::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UBlendDeinterlacer__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UBobDeinterlacer> @ 14d787200

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UBobDeinterlacer>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UBobDeinterlacer::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UBobDeinterlacer__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UCaptureCardMediaSource> @ 14d7872b0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UCaptureCardMediaSource>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UTimeSynchronizableMediaSource *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UCaptureCardMediaSource::GetPrivateStaticClass();
  this = (UTimeSynchronizableMediaSource *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UTimeSynchronizableMediaSource *)0x0) {
    UTimeSynchronizableMediaSource::UTimeSynchronizableMediaSource(this,param_1);
    *(undefined2 *)&this[1]._padding_ = 1;
    this->_padding_ = (longlong)&UCaptureCardMediaSource::_vftable__for__UObject__;
    *(undefined1 *)((longlong)&this[1]._padding_ + 2) = 1;
    this->_padding_ = (longlong)&UCaptureCardMediaSource::_vftable__for__IMediaOptions__;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0x1010100;
    *(undefined1 *)((longlong)&this[1]._padding_ + 4) = 1;
    FOpenColorIOColorConversionSettings::FOpenColorIOColorConversionSettings
              ((FOpenColorIOColorConversionSettings *)&this[1]._padding_);
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UDiscardDeinterlacer> @ 14d7873a0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UDiscardDeinterlacer>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UDiscardDeinterlacer::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UDiscardDeinterlacer__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UFileMediaCapture> @ 14d787450

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UFileMediaCapture>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMediaCapture *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UFileMediaCapture::GetPrivateStaticClass();
  this = (UMediaCapture *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMediaCapture *)0x0) {
    UMediaCapture::UMediaCapture(this,param_1);
    this->_padding_ = (longlong)&___7UFileMediaCapture__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined8 *)&this[1].OnStateChangedNative = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UFileMediaOutput> @ 14d787520

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UFileMediaOutput>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UFileMediaOutput::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UFileMediaOutput__6B_;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    pUVar1[1].field_0x8 = 3;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined2 *)&pUVar1[2].field_0x4 = 0x101;
    *(undefined8 *)&pUVar1[2].field_0x10 = 0;
    *(undefined8 *)&pUVar1[3].field_0x10 = 0;
    *(undefined4 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[3].field_0x18 = 0;
    *(undefined8 *)&pUVar1[3].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 4) = 0;
    *(undefined8 *)&pUVar1[4].field_0x8 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMediaCapture> @ 14d787610

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMediaCapture>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMediaCapture *pUVar3;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMediaCapture::GetPrivateStaticClass();
  pUVar3 = (UMediaCapture *)
           StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar3 != (UMediaCapture *)0x0) {
    pUVar3 = UMediaCapture::UMediaCapture(pUVar3,param_1);
    return (UObject *)pUVar3;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMediaIOCoreSubsystem> @ 14d7876b0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMediaIOCoreSubsystem>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UEngineSubsystem *this;
  UEngineSubsystem *pUVar3;
  
  pUVar3 = (UEngineSubsystem *)0x0;
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMediaIOCoreSubsystem::GetPrivateStaticClass();
  this = (UEngineSubsystem *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UEngineSubsystem *)0x0) {
    UEngineSubsystem::UEngineSubsystem(this,param_1);
    *(undefined ***)this = &___7UMediaIOCoreSubsystem__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined4 *)&this[2].field_0x8 = 0;
    *(undefined4 *)&this[2].field_0xc = 0x80;
    *(undefined4 *)&this[2].field_0x10 = 0xffffffff;
    *(undefined4 *)&this[2].field_0x14 = 0;
    *(undefined8 *)&this[2].field_0x20 = 0;
    *(undefined4 *)&this[2].field_0x28 = 0;
    *(undefined8 *)(this + 3) = 0;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this[3].field_0x8,4000);
    *(undefined8 *)(this + 4) = 0;
    *(undefined8 *)&this[4].field_0x8 = 0;
    *(undefined8 *)&this[4].field_0x10 = 2;
    pUVar3 = this;
  }
  return (UObject *)pUVar3;
}

// InternalVTableHelperCtorCaller<UMediaOutput> @ 14d7877c0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMediaOutput>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMediaOutput::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UMediaOutput__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<URenderTargetMediaCapture> @ 14d787870

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<URenderTargetMediaCapture>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMediaCapture *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = URenderTargetMediaCapture::GetPrivateStaticClass();
  this = (UMediaCapture *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMediaCapture *)0x0) {
    UMediaCapture::UMediaCapture(this,param_1);
    this->_padding_ = (longlong)&___7URenderTargetMediaCapture__6B_;
    this[1]._padding_ = 0;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this[1]._padding_,4000);
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<URenderTargetMediaOutput> @ 14d787940

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<URenderTargetMediaOutput>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = URenderTargetMediaOutput::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    pUVar1[1].field_0x8 = 0;
    *(undefined ***)pUVar1 = &___7URenderTargetMediaOutput__6B_;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    FUtf8String::Reset((FUtf8String *)(pUVar1 + 2),0);
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UVideoDeinterlacer> @ 14d787a10

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UVideoDeinterlacer>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UVideoDeinterlacer::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UVideoDeinterlacer__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// MakeFulfilledPromise<void> @ 14d787ac0

TPromise<void> * __cdecl MakeFulfilledPromise<void>(TPromise<void> *__return_storage_ptr__)

{
  TPromise<void>::TPromise<void>(__return_storage_ptr__);
  TPromise<void>::EmplaceValue<>(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// MakeShared<FMediaIOCoreTextureSampleBase,1> @ 14d787af0

TSharedRef<FMediaIOCoreTextureSampleBase,1> * __cdecl
MakeShared<FMediaIOCoreTextureSampleBase,1>
          (TSharedRef<FMediaIOCoreTextureSampleBase,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  pTVar1 = operator_new(0x290);
  pTVar2 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    pTVar1->SharedReferenceCount = (atomic<int>)0x1;
    pTVar1->WeakReferenceCount = (atomic<int>)0x1;
    pTVar1[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar1[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar1->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFMediaIOCoreTextureSampleBase___00_SharedPointerInternals__6B_
    ;
    pTVar1[3]._padding_ = 0;
    pTVar1[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar1[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar1[4]._padding_ = 0;
    pTVar1[6].SharedReferenceCount = (atomic<int>)0x0;
    pTVar1[6].WeakReferenceCount = (atomic<int>)0x0;
    pTVar1[7]._padding_ = 0;
    pTVar1[1]._padding_ =
         (longlong)&FMediaIOCoreTextureSampleBase::_vftable__for__IMediaTextureSample__;
    *(undefined ***)&pTVar1[1].SharedReferenceCount =
         &FMediaIOCoreTextureSampleBase::_vftable__for__IMediaPoolable__;
    pTVar1[2]._padding_ =
         (longlong)
         &FMediaIOCoreTextureSampleBase::_vftable__for__IMediaTextureSampleColorConverter__;
    pTVar1[8]._padding_ = 0;
    pTVar1[7].SharedReferenceCount = (atomic<int>)0x0;
    *(undefined1 *)&pTVar1[10]._padding_ = 0;
    pTVar1[10].SharedReferenceCount = (atomic<int>)0x0;
    pTVar1[10].WeakReferenceCount = (atomic<int>)0x0;
    pTVar1[0xb]._padding_ = 0;
    pTVar1[0xb].SharedReferenceCount = (atomic<int>)0x0;
    pTVar1[0xc]._padding_ = 0;
    pTVar1[0xc].SharedReferenceCount = (atomic<int>)0x0;
    pTVar1[0xc].WeakReferenceCount = (atomic<int>)0x0;
    pTVar1[0xd]._padding_ = 0;
    *(undefined2 *)&pTVar1[0xd].SharedReferenceCount = 0x101;
    UE::Color::FColorSpace::FColorSpace((FColorSpace *)(pTVar1 + 0xe),sRGB);
    pTVar1[0x23]._padding_ = 0;
    pTVar1[0x23].SharedReferenceCount = (atomic<int>)0x0;
    pTVar1[0x23].WeakReferenceCount = (atomic<int>)0x0;
    pTVar1[0x24]._padding_ = 0;
    pTVar1[0x24].SharedReferenceCount = (atomic<int>)0x0;
    pTVar1[0x24].WeakReferenceCount = (atomic<int>)0x0;
    pTVar1[0x25]._padding_ = 0;
    pTVar1[0x25].SharedReferenceCount = (atomic<int>)0x0;
    pTVar1[0x25].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined1 *)&pTVar1[0x26]._padding_ = 0;
    pTVar1[0x26].SharedReferenceCount = (atomic<int>)0x0;
    pTVar1[0x26].WeakReferenceCount = (atomic<int>)0x0;
    pTVar1[0x27]._padding_ = 0;
    pTVar1[0x27].SharedReferenceCount = (atomic<int>)0x0;
    pTVar1[0x27].WeakReferenceCount = (atomic<int>)0x0;
    pTVar1[0x28]._padding_ = 0;
    pTVar1[0x28].SharedReferenceCount = (atomic<int>)0x0;
    pTVar1[0x28].WeakReferenceCount = (atomic<int>)0x0;
    pTVar2 = pTVar1;
  }
  TSharedRef<FMediaIOCoreTextureSampleBase,1>::TSharedRef<FMediaIOCoreTextureSampleBase,1>
            (__return_storage_ptr__,(FMediaIOCoreTextureSampleBase *)(pTVar2 + 1),pTVar2);
  return __return_storage_ptr__;
}

// MakeShared<UE::MediaCapture::Private::FRenderTargetCaptureSource,1,UMediaCapture_*,FMediaCaptureOptions_&,UTextureRenderTarget2D_*_&> @ 14d787c40

TSharedRef<UE::MediaCapture::Private::FRenderTargetCaptureSource,1> * __cdecl
MakeShared<UE::MediaCapture::Private::FRenderTargetCaptureSource,1,UMediaCapture_*,FMediaCaptureOptions_&,UTextureRenderTarget2D_*_&>
          (TSharedRef<UE::MediaCapture::Private::FRenderTargetCaptureSource,1>
           *__return_storage_ptr__,UMediaCapture **param_1,FMediaCaptureOptions *param_2,
          UTextureRenderTarget2D **param_3)

{
  UTextureRenderTarget2D *pUVar1;
  UMediaCapture *pUVar2;
  code *pcVar3;
  bool bVar4;
  TReferenceControllerBase<1> *pTVar5;
  FMediaCaptureOptions *pFVar6;
  FMediaCaptureOptions *pFVar7;
  TSharedRef<UE::MediaCapture::Private::FRenderTargetCaptureSource,1> *pTVar8;
  UMediaCapture *local_res8;
  UTextureRenderTarget2D *local_1b8;
  FMediaCaptureOptions local_1b0;
  FMediaCaptureOptions local_f0;
  
  pTVar5 = operator_new(0xe8);
  if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (FRenderTargetCaptureSource *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar5->SharedReferenceCount = (atomic<int>)0x1;
    pTVar5->WeakReferenceCount = (atomic<int>)0x1;
    pTVar5->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFRenderTargetCaptureSource_Private_MediaCapture_UE___00_SharedPointerInternals__6B_
    ;
    pUVar1 = *param_3;
    pFVar6 = FMediaCaptureOptions::FMediaCaptureOptions(&local_1b0,param_2);
    pUVar2 = *param_1;
    pFVar7 = FMediaCaptureOptions::FMediaCaptureOptions(&local_f0,pFVar6);
    pTVar5[1]._padding_ = (longlong)&___7FCaptureSource_Private_MediaCapture_UE__6B_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UMediaCapture *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    pTVar5[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar5[1].WeakReferenceCount = (atomic<int>)0x0;
    local_res8 = pUVar2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UMediaCapture *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    FWeakObjectPtr::operator=
              ((FWeakObjectPtr *)&pTVar5[1].SharedReferenceCount,(FObjectPtr)&local_res8);
    FMediaCaptureOptions::FMediaCaptureOptions((FMediaCaptureOptions *)(pTVar5 + 2),pFVar7);
    FOpenColorIOColorConversionSettings::~FOpenColorIOColorConversionSettings
              (&pFVar7->ColorConversionSettings);
    pTVar5[1]._padding_ = (longlong)&___7FRenderTargetCaptureSource_Private_MediaCapture_UE__6B_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 != (UTextureRenderTarget2D *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    pTVar5[0xe]._padding_ = 0;
    local_1b8 = pUVar1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 != (UTextureRenderTarget2D *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(pTVar5 + 0xe),(FObjectPtr)&local_1b8);
    FOpenColorIOColorConversionSettings::~FOpenColorIOColorConversionSettings
              (&pFVar6->ColorConversionSettings);
    __return_storage_ptr__->Object = (FRenderTargetCaptureSource *)(pTVar5 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar5;
    if ((FRenderTargetCaptureSource *)(pTVar5 + 1) == (FRenderTargetCaptureSource *)0x0) {
      bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar8 = (TSharedRef<UE::MediaCapture::Private::FRenderTargetCaptureSource,1> *)(*pcVar3)();
        return pTVar8;
      }
    }
  }
  return __return_storage_ptr__;
}

// MakeShared<UE::MediaCapture::Private::FSceneViewportCaptureSource,1,UMediaCapture_*,FMediaCaptureOptions_&,TSharedPtr<FSceneViewport,1>_&> @ 14d787e10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

TSharedRef<UE::MediaCapture::Private::FSceneViewportCaptureSource,1> * __cdecl
MakeShared<UE::MediaCapture::Private::FSceneViewportCaptureSource,1,UMediaCapture_*,FMediaCaptureOptions_&,TSharedPtr<FSceneViewport,1>_&>
          (TSharedRef<UE::MediaCapture::Private::FSceneViewportCaptureSource,1>
           *__return_storage_ptr__,UMediaCapture **param_1,FMediaCaptureOptions *param_2,
          TSharedPtr<FSceneViewport,1> *param_3)

{
  FSceneViewport *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  UMediaCapture *pUVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  FMediaCaptureOptions *pFVar7;
  FMediaCaptureOptions *pFVar8;
  TSharedRef<UE::MediaCapture::Private::FSceneViewportCaptureSource,1> *pTVar9;
  UMediaCapture *local_res8;
  FMediaCaptureOptions local_1a8;
  FMediaCaptureOptions local_e8;
  
  pTVar6 = operator_new(0xf0);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (FSceneViewportCaptureSource *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFSceneViewportCaptureSource_Private_MediaCapture_UE___00_SharedPointerInternals__6B_
    ;
    pFVar1 = param_3->Object;
    pTVar2 = (param_3->SharedReferenceCount).ReferenceController;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar7 = FMediaCaptureOptions::FMediaCaptureOptions(&local_1a8,param_2);
    pUVar3 = *param_1;
    pFVar8 = FMediaCaptureOptions::FMediaCaptureOptions(&local_e8,pFVar7);
    pTVar6[1]._padding_ = (longlong)&___7FCaptureSource_Private_MediaCapture_UE__6B_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UMediaCapture *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    pTVar6[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[1].WeakReferenceCount = (atomic<int>)0x0;
    local_res8 = pUVar3;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UMediaCapture *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    FWeakObjectPtr::operator=
              ((FWeakObjectPtr *)&pTVar6[1].SharedReferenceCount,(FObjectPtr)&local_res8);
    FMediaCaptureOptions::FMediaCaptureOptions((FMediaCaptureOptions *)(pTVar6 + 2),pFVar8);
    FOpenColorIOColorConversionSettings::~FOpenColorIOColorConversionSettings
              (&pFVar8->ColorConversionSettings);
    pTVar6[1]._padding_ = (longlong)&___7FSceneViewportCaptureSource_Private_MediaCapture_UE__6B_;
    pTVar6[0xe]._padding_ = (longlong)pFVar1;
    *(TReferenceControllerBase<1> **)&pTVar6[0xe].SharedReferenceCount = pTVar2;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->WeakReferenceCount = (atomic<int>)((int)pTVar2->WeakReferenceCount + 1);
      UNLOCK();
    }
    FOpenColorIOColorConversionSettings::~FOpenColorIOColorConversionSettings
              (&pFVar7->ColorConversionSettings);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    __return_storage_ptr__->Object = (FSceneViewportCaptureSource *)(pTVar6 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar6;
    if ((FSceneViewportCaptureSource *)(pTVar6 + 1) == (FSceneViewportCaptureSource *)0x0) {
      bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar9 = (TSharedRef<UE::MediaCapture::Private::FSceneViewportCaptureSource,1> *)(*pcVar4)()
        ;
        return pTVar9;
      }
    }
  }
  return __return_storage_ptr__;
}

// NewObject<UFileMediaCapture> @ 14d787fc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UFileMediaCapture * __cdecl NewObject<UFileMediaCapture>(UObject *param_1)

{
  UClass *pUVar1;
  UFileMediaCapture *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UFileMediaCapture::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UFileMediaCapture *)
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

// NewObject<URenderTargetMediaCapture> @ 14d788060

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

URenderTargetMediaCapture * __cdecl NewObject<URenderTargetMediaCapture>(UObject *param_1)

{
  UClass *pUVar1;
  URenderTargetMediaCapture *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = URenderTargetMediaCapture::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (URenderTargetMediaCapture *)
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

// StaticEnum<enum_EFileMediaOutputPixelFormat> @ 14d788800

UEnum * __cdecl StaticEnum<enum_EFileMediaOutputPixelFormat>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EFileMediaOutputPixelFormat.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MediaIOCore();
    Z_Registration_Info_UEnum_EFileMediaOutputPixelFormat.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MediaIOCore_EFileMediaOutputPixelFormat,(UObject *)pUVar1,
                       L"EFileMediaOutputPixelFormat");
  }
  return Z_Registration_Info_UEnum_EFileMediaOutputPixelFormat.OuterSingleton;
}

// StaticEnum<enum_EMediaCaptureCroppingType> @ 14d788840

UEnum * __cdecl StaticEnum<enum_EMediaCaptureCroppingType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMediaCaptureCroppingType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MediaIOCore();
    Z_Registration_Info_UEnum_EMediaCaptureCroppingType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MediaIOCore_EMediaCaptureCroppingType,(UObject *)pUVar1,
                       L"EMediaCaptureCroppingType");
  }
  return Z_Registration_Info_UEnum_EMediaCaptureCroppingType.OuterSingleton;
}

// StaticEnum<enum_EMediaCaptureOverrunAction> @ 14d788880

UEnum * __cdecl StaticEnum<enum_EMediaCaptureOverrunAction>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMediaCaptureOverrunAction.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MediaIOCore();
    Z_Registration_Info_UEnum_EMediaCaptureOverrunAction.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MediaIOCore_EMediaCaptureOverrunAction,(UObject *)pUVar1,
                       L"EMediaCaptureOverrunAction");
  }
  return Z_Registration_Info_UEnum_EMediaCaptureOverrunAction.OuterSingleton;
}

// StaticEnum<enum_EMediaCapturePhase> @ 14d7888c0

UEnum * __cdecl StaticEnum<enum_EMediaCapturePhase>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMediaCapturePhase.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MediaIOCore();
    Z_Registration_Info_UEnum_EMediaCapturePhase.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MediaIOCore_EMediaCapturePhase,(UObject *)pUVar1,
                       L"EMediaCapturePhase");
  }
  return Z_Registration_Info_UEnum_EMediaCapturePhase.OuterSingleton;
}

// StaticEnum<enum_EMediaCaptureResizeMethod> @ 14d788900

UEnum * __cdecl StaticEnum<enum_EMediaCaptureResizeMethod>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMediaCaptureResizeMethod.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MediaIOCore();
    Z_Registration_Info_UEnum_EMediaCaptureResizeMethod.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MediaIOCore_EMediaCaptureResizeMethod,(UObject *)pUVar1,
                       L"EMediaCaptureResizeMethod");
  }
  return Z_Registration_Info_UEnum_EMediaCaptureResizeMethod.OuterSingleton;
}

// StaticEnum<enum_EMediaCaptureResourceType> @ 14d788940

UEnum * __cdecl StaticEnum<enum_EMediaCaptureResourceType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMediaCaptureResourceType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MediaIOCore();
    Z_Registration_Info_UEnum_EMediaCaptureResourceType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MediaIOCore_EMediaCaptureResourceType,(UObject *)pUVar1,
                       L"EMediaCaptureResourceType");
  }
  return Z_Registration_Info_UEnum_EMediaCaptureResourceType.OuterSingleton;
}

// StaticEnum<enum_EMediaCaptureSourceType> @ 14d788980

UEnum * __cdecl StaticEnum<enum_EMediaCaptureSourceType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMediaCaptureSourceType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MediaIOCore();
    Z_Registration_Info_UEnum_EMediaCaptureSourceType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MediaIOCore_EMediaCaptureSourceType,(UObject *)pUVar1,
                       L"EMediaCaptureSourceType");
  }
  return Z_Registration_Info_UEnum_EMediaCaptureSourceType.OuterSingleton;
}

// StaticEnum<enum_EMediaCaptureState> @ 14d7889c0

UEnum * __cdecl StaticEnum<enum_EMediaCaptureState>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMediaCaptureState.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MediaIOCore();
    Z_Registration_Info_UEnum_EMediaCaptureState.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MediaIOCore_EMediaCaptureState,(UObject *)pUVar1,
                       L"EMediaCaptureState");
  }
  return Z_Registration_Info_UEnum_EMediaCaptureState.OuterSingleton;
}

// StaticEnum<enum_EMediaIOAutoDetectableTimecodeFormat> @ 14d788a00

UEnum * __cdecl StaticEnum<enum_EMediaIOAutoDetectableTimecodeFormat>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMediaIOAutoDetectableTimecodeFormat.OuterSingleton == (UEnum *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_MediaIOCore();
    Z_Registration_Info_UEnum_EMediaIOAutoDetectableTimecodeFormat.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MediaIOCore_EMediaIOAutoDetectableTimecodeFormat,
                       (UObject *)pUVar1,L"EMediaIOAutoDetectableTimecodeFormat");
  }
  return Z_Registration_Info_UEnum_EMediaIOAutoDetectableTimecodeFormat.OuterSingleton;
}

// StaticEnum<enum_EMediaIOCoreSourceEncoding> @ 14d788a40

UEnum * __cdecl StaticEnum<enum_EMediaIOCoreSourceEncoding>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMediaIOCoreSourceEncoding.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MediaIOCore();
    Z_Registration_Info_UEnum_EMediaIOCoreSourceEncoding.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MediaIOCore_EMediaIOCoreSourceEncoding,(UObject *)pUVar1,
                       L"EMediaIOCoreSourceEncoding");
  }
  return Z_Registration_Info_UEnum_EMediaIOCoreSourceEncoding.OuterSingleton;
}

// StaticEnum<enum_EMediaIOInputType> @ 14d788a80

UEnum * __cdecl StaticEnum<enum_EMediaIOInputType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMediaIOInputType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MediaIOCore();
    Z_Registration_Info_UEnum_EMediaIOInputType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MediaIOCore_EMediaIOInputType,(UObject *)pUVar1,
                       L"EMediaIOInputType");
  }
  return Z_Registration_Info_UEnum_EMediaIOInputType.OuterSingleton;
}

// StaticEnum<enum_EMediaIOInterlaceFieldOrder> @ 14d788ac0

UEnum * __cdecl StaticEnum<enum_EMediaIOInterlaceFieldOrder>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMediaIOInterlaceFieldOrder.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MediaIOCore();
    Z_Registration_Info_UEnum_EMediaIOInterlaceFieldOrder.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MediaIOCore_EMediaIOInterlaceFieldOrder,(UObject *)pUVar1,
                       L"EMediaIOInterlaceFieldOrder");
  }
  return Z_Registration_Info_UEnum_EMediaIOInterlaceFieldOrder.OuterSingleton;
}

// StaticEnum<enum_EMediaIOOutputType> @ 14d788b00

UEnum * __cdecl StaticEnum<enum_EMediaIOOutputType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMediaIOOutputType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MediaIOCore();
    Z_Registration_Info_UEnum_EMediaIOOutputType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MediaIOCore_EMediaIOOutputType,(UObject *)pUVar1,
                       L"EMediaIOOutputType");
  }
  return Z_Registration_Info_UEnum_EMediaIOOutputType.OuterSingleton;
}

// StaticEnum<enum_EMediaIOQuadLinkTransportType> @ 14d788b40

UEnum * __cdecl StaticEnum<enum_EMediaIOQuadLinkTransportType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMediaIOQuadLinkTransportType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MediaIOCore();
    Z_Registration_Info_UEnum_EMediaIOQuadLinkTransportType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MediaIOCore_EMediaIOQuadLinkTransportType,(UObject *)pUVar1
                       ,L"EMediaIOQuadLinkTransportType");
  }
  return Z_Registration_Info_UEnum_EMediaIOQuadLinkTransportType.OuterSingleton;
}

// StaticEnum<enum_EMediaIOReferenceType> @ 14d788b80

UEnum * __cdecl StaticEnum<enum_EMediaIOReferenceType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMediaIOReferenceType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MediaIOCore();
    Z_Registration_Info_UEnum_EMediaIOReferenceType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MediaIOCore_EMediaIOReferenceType,(UObject *)pUVar1,
                       L"EMediaIOReferenceType");
  }
  return Z_Registration_Info_UEnum_EMediaIOReferenceType.OuterSingleton;
}

// StaticEnum<enum_EMediaIOSampleEvaluationType> @ 14d788bc0

UEnum * __cdecl StaticEnum<enum_EMediaIOSampleEvaluationType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMediaIOSampleEvaluationType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MediaIOCore();
    Z_Registration_Info_UEnum_EMediaIOSampleEvaluationType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MediaIOCore_EMediaIOSampleEvaluationType,(UObject *)pUVar1,
                       L"EMediaIOSampleEvaluationType");
  }
  return Z_Registration_Info_UEnum_EMediaIOSampleEvaluationType.OuterSingleton;
}

// StaticEnum<enum_EMediaIOStandardType> @ 14d788c00

UEnum * __cdecl StaticEnum<enum_EMediaIOStandardType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMediaIOStandardType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MediaIOCore();
    Z_Registration_Info_UEnum_EMediaIOStandardType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MediaIOCore_EMediaIOStandardType,(UObject *)pUVar1,
                       L"EMediaIOStandardType");
  }
  return Z_Registration_Info_UEnum_EMediaIOStandardType.OuterSingleton;
}

// StaticEnum<enum_EMediaIOTimecodeFormat> @ 14d788c40

UEnum * __cdecl StaticEnum<enum_EMediaIOTimecodeFormat>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMediaIOTimecodeFormat.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MediaIOCore();
    Z_Registration_Info_UEnum_EMediaIOTimecodeFormat.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MediaIOCore_EMediaIOTimecodeFormat,(UObject *)pUVar1,
                       L"EMediaIOTimecodeFormat");
  }
  return Z_Registration_Info_UEnum_EMediaIOTimecodeFormat.OuterSingleton;
}

// StaticEnum<enum_EMediaIOTransportType> @ 14d788c80

UEnum * __cdecl StaticEnum<enum_EMediaIOTransportType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMediaIOTransportType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MediaIOCore();
    Z_Registration_Info_UEnum_EMediaIOTransportType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MediaIOCore_EMediaIOTransportType,(UObject *)pUVar1,
                       L"EMediaIOTransportType");
  }
  return Z_Registration_Info_UEnum_EMediaIOTransportType.OuterSingleton;
}

// Then<`UMediaCapture::StopCapture_Callback'::__l38::<lambda_3>_> @ 14d788cc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014d788fd3) */
/* WARNING: Removing unreachable block (ram,0x00014d788fdc) */
/* WARNING: Removing unreachable block (ram,0x00014d789001) */

TFuture<void> * __thiscall
TFutureBase<void>::Then<_UMediaCapture::StopCapture_Callback_::__l38::<lambda_3>_>
          (TFutureBase<void> *this,TFuture<void> *__return_storage_ptr__,<lambda_3> *param_1)

{
  TFutureState<void> *lpCriticalSection;
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  bool bVar10;
  TFuture<void> *pTVar11;
  longlong *plVar12;
  void *this_00;
  undefined1 auStack_f8 [32];
  TPromise<void> local_d8;
  TFutureState<void> *local_c0;
  TReferenceControllerBase<1> *local_b8;
  undefined1 local_b0;
  FWeakObjectPtr local_a8;
  TDelegateBase<FNotThreadSafeDelegateMode> local_a0;
  TFutureState<void> *local_88;
  TReferenceControllerBase<1> *local_80;
  code *local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_f8;
  if (((this->State).Object == (TFutureState<void> *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                          ,0x2aa,L""), bVar10)) {
    pcVar2 = (code *)swi(3);
    pTVar11 = (TFuture<void> *)(*pcVar2)();
    return pTVar11;
  }
  TPromise<void>::TPromise<void>(&local_d8);
  if ((local_d8.bFutureRetrieved != false) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("!bFutureRetrieved",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                          ,0x24d,L""), bVar10)) {
    pcVar2 = (code *)swi(3);
    pTVar11 = (TFuture<void> *)(*pcVar2)();
    return pTVar11;
  }
  local_d8.bFutureRetrieved = true;
  if ((local_d8.State.Object == (TFutureState<void> *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("State.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                          ,0x283,L""), bVar10)) {
    pcVar2 = (code *)swi(3);
    pTVar11 = (TFuture<void> *)(*pcVar2)();
    return pTVar11;
  }
  *(TFutureState<void> **)__return_storage_ptr__ = local_d8.State.Object;
  *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x8 =
       local_d8.State.SharedReferenceCount.ReferenceController;
  if (local_d8.State.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
  {
    LOCK();
    (local_d8.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_d8.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_b8 = local_d8.State.SharedReferenceCount.ReferenceController;
  local_a8 = (param_1->Self).WeakPtr;
  local_c0 = local_d8.State.Object;
  local_d8.State.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_d8.State.Object = (TFutureState<void> *)0x0;
  local_b0 = 1;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            (&local_a0,(TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Callback);
  local_88 = (this->State).Object;
  local_80 = (this->State).SharedReferenceCount.ReferenceController;
  if (local_80 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_80->SharedReferenceCount = (atomic<int>)((int)local_80->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_78 = (code *)0x0;
  plVar12 = FMemory::Malloc(0x50,8);
  *plVar12 = (longlong)
             &UE::Core::Private::Function::
              TFunction_OwnedObject<`TFutureBase<void>::Then<`UMediaCapture::StopCapture_Callback'::`38'::<lambda_3>_>'::`2'::<lambda_1>,1,1>
              ::_vftable_;
  plVar12[1] = (longlong)local_c0;
  plVar12[2] = (longlong)local_b8;
  local_b8 = (TReferenceControllerBase<1> *)0x0;
  local_c0 = (TFutureState<void> *)0x0;
  *(undefined1 *)(plVar12 + 3) = local_b0;
  *(FWeakObjectPtr *)(plVar12 + 4) = local_a8;
  uStack_50 = plVar12;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(plVar12 + 5),&local_a0);
  plVar12[8] = (longlong)local_88;
  plVar12[9] = (longlong)local_80;
  if (plVar12 + 1 != (longlong *)0x0) {
    local_78 = UE::Core::Private::Function::
               TFunctionRefCaller<`TFutureBase<void>::Then<`UMediaCapture::StopCapture_Callback'::__l38::<lambda_3>_>'::__l2::<lambda_1>,void>
               ::Call;
  }
  local_80 = (TReferenceControllerBase<1> *)0x0;
  local_88 = (TFutureState<void> *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(&local_a0);
  if (((local_c0 != (TFutureState<void> *)0x0) && (*(char *)((longlong)local_c0 + 0x68) == '\0')) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("State->IsComplete()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                          ,0x242,L""), bVar10)) {
    pcVar2 = (code *)swi(3);
    pTVar11 = (TFuture<void> *)(*pcVar2)();
    return pTVar11;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_b8);
  lpCriticalSection = (this->State).Object;
  pTVar1 = (this->State).SharedReferenceCount.ReferenceController;
  (this->State).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->State).Object = (TFutureState<void> *)0x0;
  if ((lpCriticalSection == (TFutureState<void> *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar10)) {
    pcVar2 = (code *)swi(3);
    pTVar11 = (TFuture<void> *)(*pcVar2)();
    return pTVar11;
  }
  if ((&lpCriticalSection->field_0x50)[0x18] == '\0') {
    if (lpCriticalSection == (TFutureState<void> *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if ((&lpCriticalSection->field_0x50)[0x18] == '\0') {
      pcVar2 = *(code **)(&lpCriticalSection->field_0x28 + 8);
      uVar3 = *(undefined4 *)(&lpCriticalSection->field_0x28 + 0x10);
      uVar4 = *(undefined4 *)(&lpCriticalSection->field_0x28 + 0x14);
      uVar5 = *(undefined4 *)(&lpCriticalSection->field_0x28 + 0x18);
      uVar6 = *(undefined4 *)(&lpCriticalSection->field_0x28 + 0x1c);
      uVar7 = *(undefined4 *)(&lpCriticalSection->field_0x28 + 0x20);
      uVar8 = *(undefined4 *)(&lpCriticalSection->field_0x28 + 0x24);
      uVar9 = *(undefined8 *)&lpCriticalSection->field_0x50;
      plVar12 = *(longlong **)(&lpCriticalSection->field_0x50 + 8);
      *(code **)(&lpCriticalSection->field_0x28 + 8) = local_78;
      *(ulonglong *)(&lpCriticalSection->field_0x28 + 0x10) = CONCAT44(uStack_6c,uStack_70);
      *(undefined4 *)(&lpCriticalSection->field_0x28 + 0x18) = local_68;
      *(undefined4 *)(&lpCriticalSection->field_0x28 + 0x1c) = uStack_64;
      *(undefined4 *)(&lpCriticalSection->field_0x28 + 0x20) = uStack_60;
      *(undefined4 *)(&lpCriticalSection->field_0x28 + 0x24) = uStack_5c;
      *(undefined4 *)&lpCriticalSection->field_0x50 = (undefined4)local_58;
      *(undefined4 *)(&lpCriticalSection->field_0x50 + 4) = local_58._4_4_;
      *(undefined4 *)(&lpCriticalSection->field_0x50 + 8) = (undefined4)uStack_50;
      *(undefined4 *)(&lpCriticalSection->field_0x50 + 0xc) = uStack_50._4_4_;
      local_78 = pcVar2;
      uStack_70 = uVar3;
      uStack_6c = uVar4;
      local_68 = uVar5;
      uStack_64 = uVar6;
      uStack_60 = uVar7;
      uStack_5c = uVar8;
      local_58 = uVar9;
      uStack_50 = plVar12;
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      goto LAB_14d788fab;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  if (local_78 != (code *)0x0) {
    UE::Core::Private::Function::CheckCallable(local_78);
    pcVar2 = local_78;
    plVar12 = (longlong *)&local_68;
    if (uStack_50 != (longlong *)0x0) {
      plVar12 = uStack_50;
    }
    this_00 = (void *)(**(code **)(*plVar12 + 8))();
    if (pcVar2 == UE::Core::Private::Function::
                  TFunctionRefCaller<`TFutureBase<void>::Then<`UMediaCapture::StopCapture_Callback'::__l38::<lambda_3>_>'::__l2::<lambda_1>,void>
                  ::Call) {
      `TFutureBase<void>::Then<`UMediaCapture::StopCapture_Callback'::__l38::<lambda_3>_>'::__l2::
      <lambda_1>::operator()(this_00);
    }
    else {
      (*pcVar2)();
    }
  }
LAB_14d788fab:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  if (local_78 != (code *)0x0) {
    plVar12 = (longlong *)&local_68;
    if (uStack_50 != (longlong *)0x0) {
      plVar12 = uStack_50;
    }
    (**(code **)(*plVar12 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_d8.State.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Callback);
  return __return_storage_ptr__;
}

// _Atomic_address_as<char,std::_Atomic_padded<enum_EMediaCaptureState>_> @ 14d789050

char * __cdecl
std::_Atomic_address_as<char,std::_Atomic_padded<enum_EMediaCaptureState>_>
          (_Atomic_padded<EMediaCaptureState> *param_1)

{
  return (char *)param_1;
}

// _Atomic_address_as<char,std::_Atomic_padded<enum_EMediaCaptureState>_> @ 14d789060

char * __cdecl
std::_Atomic_address_as<char,std::_Atomic_padded<enum_EMediaCaptureState>_>
          (_Atomic_padded<EMediaCaptureState> *param_1)

{
  return (char *)param_1;
}

// _Atomic_address_as<int,std::_Atomic_padded<FRHIGPUMask>_> @ 14d789070

int * __cdecl
std::_Atomic_address_as<int,std::_Atomic_padded<FRHIGPUMask>_>(_Atomic_padded<FRHIGPUMask> *param_1)

{
  return (int *)param_1;
}

// _Atomic_address_as<int,std::_Atomic_padded<FRHIGPUMask>_> @ 14d789080

int * __cdecl
std::_Atomic_address_as<int,std::_Atomic_padded<FRHIGPUMask>_>(_Atomic_padded<FRHIGPUMask> *param_1)

{
  return (int *)param_1;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<TSpscQueue<UE::MediaCaptureData::FPendingCaptureData,FMemory>::FNode_*>_> @ 14d789090

long64 * __cdecl
std::
_Atomic_address_as<__int64,std::_Atomic_padded<TSpscQueue<UE::MediaCaptureData::FPendingCaptureData,FMemory>::FNode_*>_>
          (_Atomic_padded<TSpscQueue<UE::MediaCaptureData::FPendingCaptureData,FMemory>::FNode_*>
           *param_1)

{
  return (long64 *)param_1;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<TSpscQueue<UE::MediaCaptureData::FPendingCaptureData,FMemory>::FNode_*>_> @ 14d7890a0

long64 * __cdecl
std::
_Atomic_address_as<__int64,std::_Atomic_padded<TSpscQueue<UE::MediaCaptureData::FPendingCaptureData,FMemory>::FNode_*>_>
          (_Atomic_padded<TSpscQueue<UE::MediaCaptureData::FPendingCaptureData,FMemory>::FNode_*>
           *param_1)

{
  return (long64 *)param_1;
}

// _Atomic_reinterpret_as<char,enum_EMediaCaptureState> @ 14d7890b0

char __cdecl std::_Atomic_reinterpret_as<char,enum_EMediaCaptureState>(EMediaCaptureState *param_1)

{
  return *param_1;
}

// _Atomic_reinterpret_as<int,FRHIGPUMask> @ 14d7890c0

int __cdecl std::_Atomic_reinterpret_as<int,FRHIGPUMask>(FRHIGPUMask *param_1)

{
  return param_1->GPUMask;
}

// _Atomic_reinterpret_as<__int64,TSpscQueue<UE::MediaCaptureData::FPendingCaptureData,FMemory>::FNode_*> @ 14d7890d0

long64 __cdecl
std::
_Atomic_reinterpret_as<__int64,TSpscQueue<UE::MediaCaptureData::FPendingCaptureData,FMemory>::FNode_*>
          (FNode **param_1)

{
  return (long64)*param_1;
}

// ~TFunction_OwnedObject<`TFutureBase<void>::Then<`UMediaCapture::StopCapture_Callback'::__l38::<lambda_3>_>'::__l2::<lambda_1>,1,1> @ 14d78bc90

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TFutureBase<void>::Then<`UMediaCapture::StopCapture_Callback'::__l38::<lambda_3>_>'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_TFutureBase<void>::Then<_UMediaCapture::StopCapture_Callback_::__l38::<lambda_3>_>_::__l2::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`TFutureBase<void>::Then<`UMediaCapture::StopCapture_Callback'::`38'::<lambda_3>_>'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  `TFutureBase<void>::Then<`UMediaCapture::StopCapture_Callback'::__l38::<lambda_3>_>'::__l2::
  <lambda_1>::~<lambda_1>((void *)((longlong)this + 8));
  return;
}

// ~TFunction_OwnedObject<`UE::MediaCaptureData::FFrameManager::~FFrameManager'::__l2::<lambda_1>,1,0> @ 14d78bcb0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::MediaCaptureData::FFrameManager::~FFrameManager'::__l2::<lambda_1>,1,0>::
~TFunction_OwnedObject<_UE::MediaCaptureData::FFrameManager::~FFrameManager_::__l2::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1___1FFrameManager_MediaCaptureData_UE__QEAA_XZ__00_0A__Function_Private_Core_UE__6B_
  ;
  DestructItems<TSharedPtr<UE::MediaCaptureData::FFrame,1>,int>
            (*(TSharedPtr<UE::MediaCaptureData::FFrame,1> **)((longlong)this + 8),
             *(int *)((longlong)this + 0x10));
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
    return;
  }
  return;
}

// ~TFunction_OwnedObject<``UMediaCapture::StopCapture_Callback'::__l38::<lambda_3>::operator()'::__l2::<lambda_1>,1,1> @ 14d78bcf0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UMediaCapture::StopCapture_Callback'::__l38::<lambda_3>::operator()'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<__UMediaCapture::StopCapture_Callback_::__l38::<lambda_3>::operator()_::__l2::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<``UMediaCapture::StopCapture_Callback'::`38'::<lambda_3>::operator()'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`UFileMediaCapture::CacheMediaOutputValues'::__l2::<lambda_1>,0,1> @ 14d78bd10

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UFileMediaCapture::CacheMediaOutputValues'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_UFileMediaCapture::CacheMediaOutputValues_::__l2::<lambda_1>,0,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`UFileMediaCapture::CacheMediaOutputValues'::`2'::<lambda_1>,0,1>::
        _vftable_;
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 0x40));
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
                    /* WARNING: Could not recover jumptable at 0x00014d78bd4a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`FMediaIODeinterlacerTests::Define'::__l2::<lambda_1>,0,0> @ 14d78bd60

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMediaIODeinterlacerTests::Define'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_FMediaIODeinterlacerTests::Define_::__l2::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FMediaIODeinterlacerTests::Define'::`2'::<lambda_1>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FMediaIOCorePlayerBase::ExecuteGPUTransfer'::__l2::<lambda_1>,1,1> @ 14d78bd80

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMediaIOCorePlayerBase::ExecuteGPUTransfer'::__l2::<lambda_1>,1,1>::
~TFunction_OwnedObject<_FMediaIOCorePlayerBase::ExecuteGPUTransfer_::__l2::<lambda_1>,1,1>
          (void *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FMediaIOCorePlayerBase::ExecuteGPUTransfer'::`2'::<lambda_1>,1,1>::
        _vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x20));
  plVar3 = *(longlong **)((longlong)this + 0x10);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014d78bdc1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// ~TFunction_OwnedObject<`UMediaCapture::InitializeOutputResources'::__l2::<lambda_1>,1,0> @ 14d78bde0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UMediaCapture::InitializeOutputResources'::__l2::<lambda_1>,1,0>::
~TFunction_OwnedObject<_UMediaCapture::InitializeOutputResources_::__l2::<lambda_1>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UMediaCapture::InitializeOutputResources'::`2'::<lambda_1>,1,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`FMediaIOCorePlayerBase::UnregisterSampleBuffers'::__l2::<lambda_1>,1,1> @ 14d78be00

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMediaIOCorePlayerBase::UnregisterSampleBuffers'::__l2::<lambda_1>,1,1>::
~TFunction_OwnedObject<_FMediaIOCorePlayerBase::UnregisterSampleBuffers_::__l2::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FMediaIOCorePlayerBase::UnregisterSampleBuffers'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  *(undefined4 *)((longlong)this + 0x60) = 0;
  if (*(void **)((longlong)this + 0x58) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x58));
  }
  TSparseArray<TSparseSetElement<void_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<void_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<void_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)this + 0x18));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`FMediaIOCorePlayerBase::UnregisterTextures'::__l2::<lambda_1>,1,1> @ 14d78be50

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMediaIOCorePlayerBase::UnregisterTextures'::__l2::<lambda_1>,1,1>::
~TFunction_OwnedObject<_FMediaIOCorePlayerBase::UnregisterTextures_::__l2::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FMediaIOCorePlayerBase::UnregisterTextures'::`2'::<lambda_1>,1,1>::
        _vftable_;
  *(undefined4 *)((longlong)this + 0x60) = 0;
  if (*(void **)((longlong)this + 0x58) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x58));
  }
  TSparseArray<TSparseSetElement<TRefCountPtr<FRHITexture>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TRefCountPtr<FRHITexture>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TRefCountPtr<FRHITexture>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)this + 0x18));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`FMediaIOCorePlayerBase::CreateAndRegisterTextures'::__l5::<lambda_1>,1,0> @ 14d78bea0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMediaIOCorePlayerBase::CreateAndRegisterTextures'::__l5::<lambda_1>,1,0>::
~TFunction_OwnedObject<_FMediaIOCorePlayerBase::CreateAndRegisterTextures_::__l5::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FMediaIOCorePlayerBase::CreateAndRegisterTextures'::`5'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FMediaIOCorePlayerBase::RegisterSampleBuffer'::__l5::<lambda_1>,1,1> @ 14d78bec0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMediaIOCorePlayerBase::RegisterSampleBuffer'::__l5::<lambda_1>,1,1>::
~TFunction_OwnedObject<_FMediaIOCorePlayerBase::RegisterSampleBuffer_::__l5::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FMediaIOCorePlayerBase::RegisterSampleBuffer'::`5'::<lambda_1>,1,1>::
        _vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x18));
  return;
}

// ~TFunction_OwnedObject<`UMediaCapture::PrepareAndDispatchCapture_GameThread'::__l6::<lambda_1>,1,1> @ 14d78bee0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UMediaCapture::PrepareAndDispatchCapture_GameThread'::__l6::<lambda_1>,1,1>::
~TFunction_OwnedObject<_UMediaCapture::PrepareAndDispatchCapture_GameThread_::__l6::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UMediaCapture::PrepareAndDispatchCapture_GameThread'::`6'::<lambda_1>,1,1>
        ::_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x28));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x18));
  return;
}

// ~TFunction_OwnedObject<`FMediaIOCoreTextureSampleBase::SetColorConversionSettings'::__l7::<lambda_1>,1,0> @ 14d78bf10

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMediaIOCoreTextureSampleBase::SetColorConversionSettings'::__l7::<lambda_1>,1,0>
::
~TFunction_OwnedObject<_FMediaIOCoreTextureSampleBase::SetColorConversionSettings_::__l7::<lambda_1>,1,0>
          (void *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FMediaIOCoreTextureSampleBase::SetColorConversionSettings'::`7'::<lambda_1>,1,0>
        ::_vftable_;
  plVar3 = *(longlong **)((longlong)this + 0x10);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014d78bf3a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// ~TFunction_OwnedObject<`UMediaCapture::StopCapture_Callback'::__l8::<lambda_1>,1,1> @ 14d78bf50

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UMediaCapture::StopCapture_Callback'::__l8::<lambda_1>,1,1>::
~TFunction_OwnedObject<_UMediaCapture::StopCapture_Callback_::__l8::<lambda_1>,1,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UMediaCapture::StopCapture_Callback'::`8'::<lambda_1>,1,1>::_vftable_
  ;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x18));
  return;
}

// ~TFunction_OwnedObject<`UMediaCapture::SetState'::__l10::<lambda_1>,1,0> @ 14d78bf70

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`UMediaCapture::SetState'::__l10::<lambda_1>,1,0>
::~TFunction_OwnedObject<_UMediaCapture::SetState_::__l10::<lambda_1>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UMediaCapture::SetState'::`10'::<lambda_1>,1,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FMediaIOCorePlayerBase::CreateAndRegisterTextures'::__l2::<lambda_2>,1,0> @ 14d78bf90

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMediaIOCorePlayerBase::CreateAndRegisterTextures'::__l2::<lambda_2>,1,0>::
~TFunction_OwnedObject<_FMediaIOCorePlayerBase::CreateAndRegisterTextures_::__l2::<lambda_2>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FMediaIOCorePlayerBase::CreateAndRegisterTextures'::`2'::<lambda_2>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FMediaIODeinterlacerTests::Define'::__l2::<lambda_2>,0,0> @ 14d78bfb0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMediaIODeinterlacerTests::Define'::__l2::<lambda_2>,0,0>::
~TFunction_OwnedObject<_FMediaIODeinterlacerTests::Define_::__l2::<lambda_2>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FMediaIODeinterlacerTests::Define'::`2'::<lambda_2>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FMediaIOCorePlayerBase::PreGPUTransfer'::__l9::<lambda_2>,0,0> @ 14d78bfd0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMediaIOCorePlayerBase::PreGPUTransfer'::__l9::<lambda_2>,0,0>::
~TFunction_OwnedObject<_FMediaIOCorePlayerBase::PreGPUTransfer_::__l9::<lambda_2>,0,0>(void *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FMediaIOCorePlayerBase::PreGPUTransfer'::`9'::<lambda_2>,0,0>::
        _vftable_;
  plVar3 = *(longlong **)((longlong)this + 0x10);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014d78bffa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// ~TFunction_OwnedObject<`UE::MediaCaptureData::FSyncPointWatcher::ProcessPendingCapture'::__l31::<lambda_2>,1,1> @ 14d78c010

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::MediaCaptureData::FSyncPointWatcher::ProcessPendingCapture'::__l31::<lambda_2>,1,1>
::
~TFunction_OwnedObject<_UE::MediaCaptureData::FSyncPointWatcher::ProcessPendingCapture_::__l31::<lambda_2>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::MediaCaptureData::FSyncPointWatcher::ProcessPendingCapture'::`31'::<lambda_2>,1,1>
        ::_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x18));
  return;
}

// ~TFunction_OwnedObject<`UMediaCapture::ProcessCapture_RenderThread'::__l182::<lambda_2>,1,0> @ 14d78c030

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UMediaCapture::ProcessCapture_RenderThread'::__l182::<lambda_2>,1,0>::
~TFunction_OwnedObject<_UMediaCapture::ProcessCapture_RenderThread_::__l182::<lambda_2>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UMediaCapture::ProcessCapture_RenderThread'::`182'::<lambda_2>,1,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`FMediaIODeinterlacerTests::Define'::__l2::<lambda_3>,0,0> @ 14d78c050

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMediaIODeinterlacerTests::Define'::__l2::<lambda_3>,0,0>::
~TFunction_OwnedObject<_FMediaIODeinterlacerTests::Define_::__l2::<lambda_3>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FMediaIODeinterlacerTests::Define'::`2'::<lambda_3>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FMediaIODeinterlacerTests::Define'::__l2::<lambda_4>,0,0> @ 14d78c070

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMediaIODeinterlacerTests::Define'::__l2::<lambda_4>,0,0>::
~TFunction_OwnedObject<_FMediaIODeinterlacerTests::Define_::__l2::<lambda_4>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FMediaIODeinterlacerTests::Define'::`2'::<lambda_4>,0,0>::_vftable_;
  return;
}

// operator() @ 14d78deb0

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

void __thiscall
`AddDrawScreenPass<FModifyAlphaSwizzleRgbaPS>'::__l2::<lambda_1>::operator()
          (void *this,FRDGAsyncTask param_1,FRHICommandList *param_2)

{
  FScreenPassViewInfo local_38;
  <lambda_1> local_28;
  
  local_38._0_8_ = *(undefined8 *)this;
  local_38._8_8_ = *(undefined8 *)((longlong)this + 8);
  local_28.PixelShader =
       (TShaderRefBase<FModifyAlphaSwizzleRgbaPS,FShaderMapPointerTable> *)((longlong)this + 0x80);
  local_28.PixelShaderParameters = (FParameters **)((longlong)this + 0x90);
  local_28.RHICmdList = param_2;
  DrawScreenPass<__AddDrawScreenPass<FModifyAlphaSwizzleRgbaPS>_::__l2::<lambda_1>::operator()_::__l2::<lambda_1>_>
            (param_2,&local_38,(FScreenPassTextureViewport *)((longlong)this + 0x10),
             (FScreenPassTextureViewport *)((longlong)this + 0x28),
             (FScreenPassPipelineState *)((longlong)this + 0x40),
             *(EScreenPassDrawFlags *)((longlong)this + 0x98),&local_28);
  return;
}

// operator() @ 14d78df20

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

void __thiscall
`AddDrawScreenPass<FRGB10toYUVv210ConvertPS>'::__l2::<lambda_1>::operator()
          (void *this,FRDGAsyncTask param_1,FRHICommandList *param_2)

{
  FScreenPassViewInfo local_38;
  <lambda_1> local_28;
  
  local_38._0_8_ = *(undefined8 *)this;
  local_38._8_8_ = *(undefined8 *)((longlong)this + 8);
  local_28.PixelShader =
       (TShaderRefBase<FRGB10toYUVv210ConvertPS,FShaderMapPointerTable> *)((longlong)this + 0x80);
  local_28.PixelShaderParameters = (FParameters **)((longlong)this + 0x90);
  local_28.RHICmdList = param_2;
  DrawScreenPass<__AddDrawScreenPass<FRGB10toYUVv210ConvertPS>_::__l2::<lambda_1>::operator()_::__l2::<lambda_1>_>
            (param_2,&local_38,(FScreenPassTextureViewport *)((longlong)this + 0x10),
             (FScreenPassTextureViewport *)((longlong)this + 0x28),
             (FScreenPassPipelineState *)((longlong)this + 0x40),
             *(EScreenPassDrawFlags *)((longlong)this + 0x98),&local_28);
  return;
}

// operator() @ 14d78df90

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
`AddDrawScreenPass<FRGB8toUYVY8ConvertPS>'::__l2::<lambda_1>::operator()
          (void *this,FRDGAsyncTask param_1,FRHICommandList *param_2)

{
  FScreenPassViewInfo local_38;
  <lambda_1> local_28;
  
  local_38._0_8_ = *(undefined8 *)this;
  local_38._8_8_ = *(undefined8 *)((longlong)this + 8);
  local_28.PixelShader =
       (TShaderRefBase<FRGB8toUYVY8ConvertPS,FShaderMapPointerTable> *)((longlong)this + 0x80);
  local_28.PixelShaderParameters = (FParameters **)((longlong)this + 0x90);
  local_28.RHICmdList = param_2;
  DrawScreenPass<__AddDrawScreenPass<FRGB8toUYVY8ConvertPS>_::__l2::<lambda_1>::operator()_::__l2::<lambda_1>_>
            (param_2,&local_38,(FScreenPassTextureViewport *)((longlong)this + 0x10),
             (FScreenPassTextureViewport *)((longlong)this + 0x28),
             (FScreenPassPipelineState *)((longlong)this + 0x40),
             *(EScreenPassDrawFlags *)((longlong)this + 0x98),&local_28);
  return;
}

// operator() @ 14d78e210

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
``UMediaCapture::StopCapture_Callback'::__l38::<lambda_3>::operator()'::__l2::<lambda_1>::operator()
          (void *this)

{
  UMediaCapture *this_00;
  bool bVar1;
  uint uVar2;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar3;
  undefined1 auStack_1078 [32];
  FWeakObjectPtr local_1058;
  UMediaCapture *local_1050;
  undefined1 local_1048 [24];
  FWeakObjectPtr local_1030;
  undefined8 local_1020;
  uchar local_1018 [4096];
  ulonglong local_18;
  undefined8 local_10;
  
  local_10 = 0x14d78e225;
  local_18 = __security_cookie.value ^ (ulonglong)auStack_1078;
  TVar3 = FWeakObjectPtr::Pin(this,SUB81(&local_1058,0));
  this_00 = *(UMediaCapture **)TVar3.Object;
  *(undefined8 *)TVar3.Object = 0;
  if (local_1058 != (FWeakObjectPtr)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_1058);
  }
  if (this_00 != (UMediaCapture *)0x0) {
    if (this_00->MediaState != (atomic<EMediaCaptureState>)0x4) {
      LOCK();
      this_00->MediaState = (atomic<EMediaCaptureState>)0x4;
      UNLOCK();
      bVar1 = IsInGameThread();
      if (bVar1) {
        TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
                  ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this_00->OnStateChanged,
                   (void *)0x0);
        TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                  (&this_00->OnStateChangedNative);
      }
      else {
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this_00);
        }
        local_1058.ObjectIndex = 0;
        local_1058.ObjectSerialNumber = 0;
        local_1050 = this_00;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this_00);
        }
        FWeakObjectPtr::operator=(&local_1058,(FObjectPtr)&local_1050);
        local_1020 = 0;
        local_1048._16_8_ =
             &UE::Core::Private::Function::
              TFunction_OwnedObject<`UMediaCapture::SetState'::`10'::<lambda_1>,1,0>::_vftable_;
        local_1030 = local_1058;
        local_1048._0_8_ =
             UE::Core::Private::Function::
             TFunctionRefCaller<`UMediaCapture::SetState'::__l10::<lambda_1>,void>::Call;
        AsyncTask(GameThread,(TUniqueFunction<void___cdecl(void)> *)local_1048);
      }
    }
    UMediaCapture::PostCaptureCleanup(this_00);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8),
               (FReadAccessScope *)local_1048);
    if ((*(int *)((longlong)this + 0x18) != 0) &&
       (*(longlong **)((longlong)this + 0x10) != (longlong *)0x0)) {
      (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x68))();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)local_1048);
    if (-1 < BookmarkChannel->Enabled) {
      if (__BookmarkPoint644 == false) {
        FMiscTrace::OutputBookmarkSpec
                  (&__BookmarkPoint644,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaIOFramework\\Source\\MediaIOCore\\Private\\MediaCapture.cpp"
                   ,0x284,L"UMediaCapture::CompleteStopCapture");
        __BookmarkPoint644 = true;
      }
      uVar2 = CallstackTrace_GetCurrentId();
      local_1018[0] = '\0';
      FMiscTrace::OutputBookmarkInternal(&__BookmarkPoint644,uVar2,1,local_1018);
    }
    UEStrongObjectPtr_Private::ReleaseUObject((UObject *)this_00);
  }
  return;
}

// `vcall'{304,{flat}}'_}' @ 14d791404

/* [thunk]: __cdecl FMediaIOCorePlayerBase::`vcall'{304,{flat}}' }' */

void __thiscall FMediaIOCorePlayerBase::_vcall__304__flat______(FMediaIOCorePlayerBase *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014d791407. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x130))();
  return;
}

// `vector_deleting_destructor'`adjustor{8}' @ 14d791414

/* [thunk]:public: virtual void * __ptr64 __cdecl FMediaIOCoreAudioSampleBase::`vector deleting
   destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
FMediaIOCoreAudioSampleBase::_vector_deleting_destructor__adjustor_8__
          (FMediaIOCoreAudioSampleBase *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FMediaIOCoreAudioSampleBase *)&this[-1].Timecode.bIsSet,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 14d791424

/* [thunk]:public: virtual void * __ptr64 __cdecl FMediaIOCoreBinarySampleBase::`vector deleting
   destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
FMediaIOCoreBinarySampleBase::_vector_deleting_destructor__adjustor_8__
          (FMediaIOCoreBinarySampleBase *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FMediaIOCoreBinarySampleBase *)&this[-1].Timecode.bIsSet,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 14d791434

/* [thunk]:public: virtual void * __ptr64 __cdecl FMediaIOCorePlayerBase::`vector deleting
   destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
FMediaIOCorePlayerBase::_vector_deleting_destructor__adjustor_8__
          (FMediaIOCorePlayerBase *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((FMediaIOCorePlayerBase *)&this[-1].JITRSamples,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{16}' @ 14d791444

/* [thunk]:public: virtual void * __ptr64 __cdecl FMediaIOCorePlayerBase::`vector deleting
   destructor'`adjustor{16}' (unsigned int) __ptr64 */

void * __thiscall
FMediaIOCorePlayerBase::_vector_deleting_destructor__adjustor_16__
          (FMediaIOCorePlayerBase *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FMediaIOCorePlayerBase *)&this[-1].bJustInTimeRender,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{24}' @ 14d791454

/* [thunk]:public: virtual void * __ptr64 __cdecl FMediaIOCorePlayerBase::`vector deleting
   destructor'`adjustor{24}' (unsigned int) __ptr64 */

void * __thiscall
FMediaIOCorePlayerBase::_vector_deleting_destructor__adjustor_24__
          (FMediaIOCorePlayerBase *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FMediaIOCorePlayerBase *)&this[-1].Deinterlacer.SharedReferenceCount,param_1)
  ;
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{32}' @ 14d791464

/* [thunk]:public: virtual void * __ptr64 __cdecl FMediaIOCorePlayerBase::`vector deleting
   destructor'`adjustor{32}' (unsigned int) __ptr64 */

void * __thiscall
FMediaIOCorePlayerBase::_vector_deleting_destructor__adjustor_32__
          (FMediaIOCorePlayerBase *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((FMediaIOCorePlayerBase *)&this[-1].Deinterlacer,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14d791474

/* [thunk]:public: virtual void * __ptr64 __cdecl FMediaIOCorePlayerBase::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
FMediaIOCorePlayerBase::_vector_deleting_destructor__adjustor_40__
          (FMediaIOCorePlayerBase *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FMediaIOCorePlayerBase *)
                      (this[-1].TexturesCriticalSection.CriticalSection.Opaque3 + 2),param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 14d791484

/* [thunk]:public: virtual void * __ptr64 __cdecl FMediaIOCoreTextureSampleBase::`vector deleting
   destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
FMediaIOCoreTextureSampleBase::_vector_deleting_destructor__adjustor_8__
          (FMediaIOCoreTextureSampleBase *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FMediaIOCoreTextureSampleBase *)
                      &this[-1].CachedOCIOResources.SharedReferenceCount,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{16}' @ 14d791494

/* [thunk]:public: virtual void * __ptr64 __cdecl FMediaIOCoreTextureSampleBase::`vector deleting
   destructor'`adjustor{16}' (unsigned int) __ptr64 */

void * __thiscall
FMediaIOCoreTextureSampleBase::_vector_deleting_destructor__adjustor_16__
          (FMediaIOCoreTextureSampleBase *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FMediaIOCoreTextureSampleBase *)&this[-1].CachedOCIOResources,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 14d7914b0

void * __thiscall
FMediaIOCoreSampleContainer<IMediaAudioSample>::_scalar_deleting_destructor_
          (FMediaIOCoreSampleContainer<IMediaAudioSample> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TSharedPtr<IMediaAudioSample,1>,int>
            ((TSharedPtr<IMediaAudioSample,1> *)(this->Samples).AllocatorInstance.Data,
             (this->Samples).ArrayNum);
  pFVar1 = (this->Samples).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->CriticalSection);
  pFVar1 = (this->CachedSamplesData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x98);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d791530

void * __thiscall
FMediaIOCoreSampleContainer<IMediaBinarySample>::_scalar_deleting_destructor_
          (FMediaIOCoreSampleContainer<IMediaBinarySample> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TSharedPtr<IMediaBinarySample,1>,int>
            ((TSharedPtr<IMediaBinarySample,1> *)(this->Samples).AllocatorInstance.Data,
             (this->Samples).ArrayNum);
  pFVar1 = (this->Samples).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->CriticalSection);
  pFVar1 = (this->CachedSamplesData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x98);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d7915b0

void * __thiscall
FMediaIOCoreSampleContainer<IMediaOverlaySample>::_scalar_deleting_destructor_
          (FMediaIOCoreSampleContainer<IMediaOverlaySample> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TSharedPtr<IMediaOverlaySample,1>,int>
            ((TSharedPtr<IMediaOverlaySample,1> *)(this->Samples).AllocatorInstance.Data,
             (this->Samples).ArrayNum);
  pFVar1 = (this->Samples).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->CriticalSection);
  pFVar1 = (this->CachedSamplesData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x98);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d791630

void * __thiscall
FMediaIOCoreSampleContainer<IMediaTextureSample>::_scalar_deleting_destructor_
          (FMediaIOCoreSampleContainer<IMediaTextureSample> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TSharedPtr<IMediaTextureSample,1>,int>
            ((TSharedPtr<IMediaTextureSample,1> *)(this->Samples).AllocatorInstance.Data,
             (this->Samples).ArrayNum);
  pFVar1 = (this->Samples).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->CriticalSection);
  pFVar1 = (this->CachedSamplesData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x98);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d7916b0

void * __thiscall
IBaseDelegateInstance<TSharedPtr<FMediaIOCoreTextureSampleBase,1>___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<TSharedPtr<FMediaIOCoreTextureSampleBase,1>___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d7916e0

void * __thiscall
IBaseDelegateInstance<TVariant<TRefCountPtr<IPooledRenderTarget>,TRefCountPtr<FRDGPooledBuffer>_>___cdecl(UE::MediaCapture::FInitializePassOutputArgs_const_&,unsigned_int),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<TVariant<TRefCountPtr<IPooledRenderTarget>,TRefCountPtr<FRDGPooledBuffer>_>___cdecl(UE::MediaCapture::FInitializePassOutputArgs_const_&,unsigned_int),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d791710

void * __thiscall
IBaseDelegateInstance<void___cdecl(UE::MediaCaptureData::FCaptureFrameArgs_const_&,TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>,FRDGViewableResource_*,FRDGViewableResource_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(UE::MediaCaptureData::FCaptureFrameArgs_const_&,TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>,FRDGViewableResource_*,FRDGViewableResource_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d791740

void * __thiscall
IBaseDelegateInstance<void___cdecl(float_*,int),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(float_*,int),FDefaultDelegateUserPolicy> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d791770

void * __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<FMediaIOCoreTextureSampleBase,1>___cdecl(void),FDefaultDelegateUserPolicy,`UE::MediaIOTests::TestBlendDeinterlace'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d7917a0

void * __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<FMediaIOCoreTextureSampleBase,1>___cdecl(void),FDefaultDelegateUserPolicy,`UE::MediaIOTests::TestBobDeinterlace'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d7917d0

void * __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<FMediaIOCoreTextureSampleBase,1>___cdecl(void),FDefaultDelegateUserPolicy,`UE::MediaIOTests::TestDiscardDeinterlace'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d791800

void * __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<FMediaIOCoreTextureSampleBase,1>___cdecl(void),FDefaultDelegateUserPolicy,`UE::MediaIOTests::TestDiscardDeinterlaceBottomFieldOrder'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d791830

void * __thiscall
TBaseFunctorDelegateInstance<TVariant<TRefCountPtr<IPooledRenderTarget>,TRefCountPtr<FRDGPooledBuffer>_>___cdecl(UE::MediaCapture::FInitializePassOutputArgs_const_&,unsigned_int),FDefaultDelegateUserPolicy,`UE::MediaCapture::FRenderPass::CreateFormatConversionPass'::__l5::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d791860

void * __thiscall
TBaseFunctorDelegateInstance<TVariant<TRefCountPtr<IPooledRenderTarget>,TRefCountPtr<FRDGPooledBuffer>_>___cdecl(UE::MediaCapture::FInitializePassOutputArgs_const_&,unsigned_int),FDefaultDelegateUserPolicy,`UE::MediaCapture::FRenderPass::CreateFormatConversionPass'::__l7::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d791890

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::MediaCaptureData::FCaptureFrameArgs_const_&,TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>,FRDGViewableResource_*,FRDGViewableResource_*),FDefaultDelegateUserPolicy,`UE::MediaCapture::FRenderPass::CreateColorConversionPass'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if (*(void **)((longlong)this + 0x30) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x30));
  }
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d7918f0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::MediaCaptureData::FCaptureFrameArgs_const_&,TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>,FRDGViewableResource_*,FRDGViewableResource_*),FDefaultDelegateUserPolicy,`UE::MediaCapture::FRenderPass::CreateResamplePass'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d791920

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::MediaCaptureData::FCaptureFrameArgs_const_&,TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>,FRDGViewableResource_*,FRDGViewableResource_*),FDefaultDelegateUserPolicy,`UE::MediaCapture::FRenderPass::CreateFormatConversionPass'::__l10::<lambda_3>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d791950

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::MediaCaptureData::FCaptureFrameArgs_const_&,TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>,FRDGViewableResource_*,FRDGViewableResource_*),FDefaultDelegateUserPolicy,`UE::MediaCapture::FRenderPass::CreateFormatConversionPass'::__l12::<lambda_4>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d791980

void * __thiscall
TBaseSPMethodDelegateInstance<1,FMediaIOCorePlayerBase_const_,1,TSharedPtr<FMediaIOCoreTextureSampleBase,1>___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,FMediaIOCorePlayerBase_const_,1,TSharedPtr<FMediaIOCoreTextureSampleBase,1>___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
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
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d7919e0

void * __thiscall
TBaseSPMethodDelegateInstance<0,FMediaCaptureSceneViewExtension,1,FScreenPassTexture___cdecl(FRDGBuilder_&,FSceneView_const_&,FPostProcessMaterialInputs_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,FMediaCaptureSceneViewExtension,1,FScreenPassTexture___cdecl(FRDGBuilder_&,FSceneView_const_&,FPostProcessMaterialInputs_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
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
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d791a40

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void * __thiscall
TBaseStaticDelegateInstance<TVariant<TRefCountPtr<IPooledRenderTarget>,TRefCountPtr<FRDGPooledBuffer>_>___cdecl(UE::MediaCapture::FInitializePassOutputArgs_const_&,unsigned_int),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseStaticDelegateInstance<TVariant<TRefCountPtr<IPooledRenderTarget>,TRefCountPtr<FRDGPooledBuffer>_>___cdecl(UE::MediaCapture::FInitializePassOutputArgs_const_&,unsigned_int),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d791a70

void * __thiscall
TBaseUObjectMethodDelegateInstance<1,UMediaIOCoreSubsystem_const_,void___cdecl(float_*,int),FDefaultDelegateUserPolicy,unsigned_int>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<1,UMediaIOCoreSubsystem_const_,void___cdecl(float_*,int),FDefaultDelegateUserPolicy,unsigned_int>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d791aa0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UMediaCapture,void___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UMediaCapture,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d791ad0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UMediaIOCoreSubsystem,void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UMediaIOCoreSubsystem,void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d791b00

void * __thiscall
TCommonDelegateInstanceState<TSharedPtr<FMediaIOCoreTextureSampleBase,1>___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<TSharedPtr<FMediaIOCoreTextureSampleBase,1>___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d791b30

void * __thiscall
TCommonDelegateInstanceState<TVariant<TRefCountPtr<IPooledRenderTarget>,TRefCountPtr<FRDGPooledBuffer>_>___cdecl(UE::MediaCapture::FInitializePassOutputArgs_const_&,unsigned_int),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<TVariant<TRefCountPtr<IPooledRenderTarget>,TRefCountPtr<FRDGPooledBuffer>_>___cdecl(UE::MediaCapture::FInitializePassOutputArgs_const_&,unsigned_int),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d791b60

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(UE::MediaCaptureData::FCaptureFrameArgs_const_&,TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>,FRDGViewableResource_*,FRDGViewableResource_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(UE::MediaCaptureData::FCaptureFrameArgs_const_&,TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>,FRDGViewableResource_*,FRDGViewableResource_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d791b90

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(float_*,int),FDefaultDelegateUserPolicy,unsigned_int>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(float_*,int),FDefaultDelegateUserPolicy,unsigned_int>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d791bc0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TFutureBase<void>::Then<`UMediaCapture::StopCapture_Callback'::__l38::<lambda_3>_>'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`TFutureBase<void>::Then<`UMediaCapture::StopCapture_Callback'::`38'::<lambda_3>_>'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  `TFutureBase<void>::Then<`UMediaCapture::StopCapture_Callback'::__l38::<lambda_3>_>'::__l2::
  <lambda_1>::~<lambda_1>((void *)((longlong)this + 8));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d791c10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::MediaCaptureData::FFrameManager::~FFrameManager'::__l2::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1___1FFrameManager_MediaCaptureData_UE__QEAA_XZ__00_0A__Function_Private_Core_UE__6B_
  ;
  DestructItems<TSharedPtr<UE::MediaCaptureData::FFrame,1>,int>
            (*(TSharedPtr<UE::MediaCaptureData::FFrame,1> **)((longlong)this + 8),
             *(int *)((longlong)this + 0x10));
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d791c70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UMediaCapture::StopCapture_Callback'::__l38::<lambda_3>::operator()'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<``UMediaCapture::StopCapture_Callback'::`38'::<lambda_3>::operator()'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d791cc0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UFileMediaCapture::CacheMediaOutputValues'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`UFileMediaCapture::CacheMediaOutputValues'::`2'::<lambda_1>,0,1>::
        _vftable_;
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 0x40));
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d791d30

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMediaIODeinterlacerTests::Define'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FMediaIODeinterlacerTests::Define'::`2'::<lambda_1>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d791d70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMediaIOCorePlayerBase::ExecuteGPUTransfer'::__l2::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FMediaIOCorePlayerBase::ExecuteGPUTransfer'::`2'::<lambda_1>,1,1>::
        _vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x20));
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
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d791de0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UMediaCapture::InitializeOutputResources'::__l2::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UMediaCapture::InitializeOutputResources'::`2'::<lambda_1>,1,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d791e20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMediaIOCorePlayerBase::UnregisterSampleBuffers'::__l2::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FMediaIOCorePlayerBase::UnregisterSampleBuffers'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  *(undefined4 *)((longlong)this + 0x60) = 0;
  if (*(void **)((longlong)this + 0x58) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x58));
  }
  TSparseArray<TSparseSetElement<void_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<void_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<void_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)this + 0x18));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x68);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d791ea0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMediaIOCorePlayerBase::UnregisterTextures'::__l2::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FMediaIOCorePlayerBase::UnregisterTextures'::`2'::<lambda_1>,1,1>::
        _vftable_;
  *(undefined4 *)((longlong)this + 0x60) = 0;
  if (*(void **)((longlong)this + 0x58) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x58));
  }
  TSparseArray<TSparseSetElement<TRefCountPtr<FRHITexture>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TRefCountPtr<FRHITexture>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TRefCountPtr<FRHITexture>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)this + 0x18));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x68);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d791f20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMediaIOCorePlayerBase::CreateAndRegisterTextures'::__l5::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FMediaIOCorePlayerBase::CreateAndRegisterTextures'::`5'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d791f60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMediaIOCorePlayerBase::RegisterSampleBuffer'::__l5::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FMediaIOCorePlayerBase::RegisterSampleBuffer'::`5'::<lambda_1>,1,1>::
        _vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x18));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d791fb0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UMediaCapture::PrepareAndDispatchCapture_GameThread'::__l6::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UMediaCapture::PrepareAndDispatchCapture_GameThread'::`6'::<lambda_1>,1,1>
        ::_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x28));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x18));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d792010

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMediaIOCoreTextureSampleBase::SetColorConversionSettings'::__l7::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FMediaIOCoreTextureSampleBase::SetColorConversionSettings'::`7'::<lambda_1>,1,0>
        ::_vftable_;
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
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d792080

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UMediaCapture::StopCapture_Callback'::__l8::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UMediaCapture::StopCapture_Callback'::`8'::<lambda_1>,1,1>::_vftable_
  ;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x18));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d7920d0

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`UMediaCapture::SetState'::__l10::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UMediaCapture::SetState'::`10'::<lambda_1>,1,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d792110

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMediaIOCorePlayerBase::CreateAndRegisterTextures'::__l2::<lambda_2>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FMediaIOCorePlayerBase::CreateAndRegisterTextures'::`2'::<lambda_2>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d792150

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMediaIODeinterlacerTests::Define'::__l2::<lambda_2>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FMediaIODeinterlacerTests::Define'::`2'::<lambda_2>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d792190

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMediaIOCorePlayerBase::PreGPUTransfer'::__l9::<lambda_2>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FMediaIOCorePlayerBase::PreGPUTransfer'::`9'::<lambda_2>,0,0>::
        _vftable_;
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
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d792200

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::MediaCaptureData::FSyncPointWatcher::ProcessPendingCapture'::__l31::<lambda_2>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::MediaCaptureData::FSyncPointWatcher::ProcessPendingCapture'::`31'::<lambda_2>,1,1>
        ::_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x18));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d792250

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UMediaCapture::ProcessCapture_RenderThread'::__l182::<lambda_2>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UMediaCapture::ProcessCapture_RenderThread'::`182'::<lambda_2>,1,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d792290

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMediaIODeinterlacerTests::Define'::__l2::<lambda_3>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FMediaIODeinterlacerTests::Define'::`2'::<lambda_3>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d7922d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMediaIODeinterlacerTests::Define'::__l2::<lambda_4>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FMediaIODeinterlacerTests::Define'::`2'::<lambda_4>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d792310

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UMediaCapture::FMediaCaptureSyncData,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UMediaCapture::FMediaCaptureSyncData,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d792350

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FOpenColorIOColorConversionSettings,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FOpenColorIOColorConversionSettings,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d792390

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UCaptureCardMediaSource::FOpenColorIODataContainer,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UCaptureCardMediaSource::FOpenColorIODataContainer,1> *this
          ,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,200);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d7923d0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FOpenColorIORenderPassResources,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FOpenColorIORenderPassResources,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d792410

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::MediaIOCore::FBlendDeinterlacer,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::MediaIOCore::FBlendDeinterlacer,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d792450

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::MediaIOCore::FBobDeinterlacer,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::MediaIOCore::FBobDeinterlacer,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d792490

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::MediaCaptureData::FBufferCaptureFrame,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::MediaCaptureData::FBufferCaptureFrame,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x178);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d7924d0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::MediaIOCore::FDeinterlacer,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::MediaIOCore::FDeinterlacer,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d792510

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::MediaIOCore::FDiscardDeinterlacer,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::MediaIOCore::FDiscardDeinterlacer,1> *this,uint param_1
          )

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d792550

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FMainMediaIOAudioCapture,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FMainMediaIOAudioCapture,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xd8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d792590

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FMediaIOAudioCapture,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FMediaIOAudioCapture,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xd8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d7925d0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FMediaIOAudioOutput,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FMediaIOAudioOutput,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d792610

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FMediaIOCoreTextureSampleBase,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FMediaIOCoreTextureSampleBase,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x290);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d792650

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FMediaIOCoreTextureSampleConverter,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FMediaIOCoreTextureSampleConverter,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d792690

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::MediaCapture::Private::FRHIResourceCaptureSource,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::MediaCapture::Private::FRHIResourceCaptureSource,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d7926d0

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::MediaCapture::Private::FRenderTargetCaptureSource,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::MediaCapture::Private::FRenderTargetCaptureSource,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d792710

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::MediaCapture::Private::FSceneViewportCaptureSource,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::MediaCapture::Private::FSceneViewportCaptureSource,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d792750

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<FMediaIOAudioCapture::FSubmixBufferListenerProxy,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FMediaIOAudioCapture::FSubmixBufferListenerProxy,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d792790

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::MediaCaptureData::FTextureCaptureFrame,1>
::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::MediaCaptureData::FTextureCaptureFrame,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x120);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d7927d0

void * __thiscall
FRDGAllocator::TObject<UE::MediaCaptureData::FBufferCaptureFrame::FEnqueueCopyBufferPass>::
_scalar_deleting_destructor_
          (TObject<UE::MediaCaptureData::FBufferCaptureFrame::FEnqueueCopyBufferPass> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d792800

void * __thiscall
FRDGAllocator::TObject<UE::MediaCaptureData::FMediaCaptureBufferSyncPassParameters>::
_scalar_deleting_destructor_
          (TObject<UE::MediaCaptureData::FMediaCaptureBufferSyncPassParameters> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d792830

void * __thiscall
FRDGAllocator::TObject<UE::MediaCaptureData::FMediaCaptureTextureSyncPassParameters>::
_scalar_deleting_destructor_
          (TObject<UE::MediaCaptureData::FMediaCaptureTextureSyncPassParameters> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d792860

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
FRDGAllocator::TObject<UE::MediaCapture::Resample::FMediaCaptureResamplePS::FParameters>::
_scalar_deleting_destructor_
          (TObject<UE::MediaCapture::Resample::FMediaCaptureResamplePS::FParameters> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x200);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d792890

void * __thiscall
TRDGLambdaPass<UE::MediaCaptureData::FBufferCaptureFrame::FEnqueueCopyBufferPass,`UE::MediaCaptureData::FBufferCaptureFrame::EnqueueCopy'::__l5::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x188));
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
    ::operator_delete(this,0x1a0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d792900

void * __thiscall
TRDGLambdaPass<UE::MediaCaptureData::FMediaCaptureBufferSyncPassParameters,`UE::MediaCaptureData::FMediaCaptureHelper::AddSyncPointPass<UE::MediaCaptureData::FBufferCaptureFrame>'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 400));
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
    ::operator_delete(this,0x1a0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d792970

void * __thiscall
TRDGLambdaPass<UE::MediaCaptureData::FMediaCaptureTextureSyncPassParameters,`UE::MediaCaptureData::FMediaCaptureHelper::AddSyncPointPass<UE::MediaCaptureData::FTextureCaptureFrame>'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 400));
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
    ::operator_delete(this,0x1a0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d7929e0

void * __thiscall
TRDGLambdaPass<UE::MediaCapture::Resample::FMediaCaptureResamplePS::FParameters,`FPixelShaderUtils::AddFullscreenPass<UE::MediaCapture::Resample::FMediaCaptureResamplePS>'::__l2::<lambda_1>_>
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
    ::operator_delete(this,0x1d8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d792a40

void * __thiscall
TRDGLambdaPass<FModifyAlphaSwizzleRgbaPS::FParameters,`AddDrawScreenPass<FModifyAlphaSwizzleRgbaPS>'::__l2::<lambda_1>_>
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

// `scalar_deleting_destructor' @ 14d792aa0

void * __thiscall
TRDGLambdaPass<FRGB10toYUVv210ConvertPS::FParameters,`AddDrawScreenPass<FRGB10toYUVv210ConvertPS>'::__l2::<lambda_1>_>
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

// `scalar_deleting_destructor' @ 14d792b00

void * __thiscall
TRDGLambdaPass<FRGB8toUYVY8ConvertPS::FParameters,`AddDrawScreenPass<FRGB8toUYVY8ConvertPS>'::__l2::<lambda_1>_>
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

// `scalar_deleting_destructor' @ 14d792b60

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FMediaCaptureSceneViewExtension,SharedPointerInternals::DefaultDeleter<FMediaCaptureSceneViewExtension>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FMediaCaptureSceneViewExtension,SharedPointerInternals::DefaultDeleter<FMediaCaptureSceneViewExtension>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d792ba0

void * __thiscall
UE::MediaIOCore::FBlendDeinterlacer::_scalar_deleting_destructor_
          (FBlendDeinterlacer *this,uint param_1)

{
  *(undefined ***)this = &___7FDeinterlacer_MediaIOCore_UE__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->field_0x8);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d792bf0

void * __thiscall
UE::MediaIOCore::FBobDeinterlacer::_scalar_deleting_destructor_(FBobDeinterlacer *this,uint param_1)

{
  *(undefined ***)this = &___7FDeinterlacer_MediaIOCore_UE__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->field_0x8);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d792c40

void * __thiscall
UE::MediaCaptureData::FBufferCaptureFrame::_scalar_deleting_destructor_
          (FBufferCaptureFrame *this,uint param_1)

{
  ~FBufferCaptureFrame(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x168);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d792c80

void * __thiscall
UE::MediaCaptureData::FCaptureFrame::_scalar_deleting_destructor_(FCaptureFrame *this,uint param_1)

{
  ~FCaptureFrame(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x108);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d792cc0

void * __thiscall
UE::MediaCapture::Private::FCaptureSource::_scalar_deleting_destructor_
          (FCaptureSource *this,uint param_1)

{
  FOpenColorIOColorConversionSettings::~FOpenColorIOColorConversionSettings
            (&(this->CaptureOptions).ColorConversionSettings);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xd0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d792d00

void * __thiscall
IMediaOptions::FDataContainer::_scalar_deleting_destructor_(FDataContainer *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this = &___7FDataContainer_IMediaOptions__6B_;
  plVar3 = *(longlong **)&this->field_0x10;
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
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d792d70

void * __thiscall
UE::MediaIOCore::FDeinterlacer::_scalar_deleting_destructor_(FDeinterlacer *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FDeinterlacer_MediaIOCore_UE__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->AcquireSampleDelegate);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d792dc0

void * __thiscall
UE::MediaIOCore::FDiscardDeinterlacer::_scalar_deleting_destructor_
          (FDiscardDeinterlacer *this,uint param_1)

{
  *(undefined ***)this = &___7FDeinterlacer_MediaIOCore_UE__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->field_0x8);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d792e10

void * __thiscall
UE::MediaCaptureData::FFrame::_scalar_deleting_destructor_(FFrame *this,uint param_1)

{
  *this = (FFrame)&___7FFrame_MediaCaptureData_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d792e50

void * __thiscall
FMediaIOCorePlayerBase::FJITRMediaTextureSamples::_scalar_deleting_destructor_
          (FJITRMediaTextureSamples *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ProxySample).SharedReferenceCount.ReferenceController);
  FMediaIOCoreSamples::~FMediaIOCoreSamples((FMediaIOCoreSamples *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x310);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d792ea0

void * __thiscall
FMainMediaIOAudioCapture::_scalar_deleting_destructor_(FMainMediaIOAudioCapture *this,uint param_1)

{
  *(undefined ***)this = &___7FMainMediaIOAudioCapture__6B_;
  FMediaIOAudioCapture::~FMediaIOAudioCapture((FMediaIOAudioCapture *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,200);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d792ef0

void * __thiscall
FMediaCaptureSceneViewExtension::_scalar_deleting_destructor_
          (FMediaCaptureSceneViewExtension *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->LastErrorMessage).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FSceneViewExtensionBase::~FSceneViewExtensionBase((FSceneViewExtensionBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d792f40

void * __thiscall
FMediaIOAudioCapture::_scalar_deleting_destructor_(FMediaIOAudioCapture *this,uint param_1)

{
  ~FMediaIOAudioCapture(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,200);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d792f80

void * __thiscall
FMediaIOCoreAudioSampleBase::_scalar_deleting_destructor_
          (FMediaIOCoreAudioSampleBase *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Buffer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IMediaPoolable__6B_;
  this->_padding_ = (longlong)&___7IMediaAudioSample__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d792fe0

void * __thiscall
FMediaIOCoreBinarySampleBase::_scalar_deleting_destructor_
          (FMediaIOCoreBinarySampleBase *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Buffer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IMediaPoolable__6B_;
  this->_padding_ = (longlong)&___7IMediaBinarySample__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d793040

void * __thiscall
FMediaIOCorePlayerBase::_scalar_deleting_destructor_(FMediaIOCorePlayerBase *this,uint param_1)

{
  ~FMediaIOCorePlayerBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x240);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d793080

void * __thiscall
FMediaIOCoreSamples::_scalar_deleting_destructor_(FMediaIOCoreSamples *this,uint param_1)

{
  ~FMediaIOCoreSamples(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x300);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d7930c0

void * __thiscall
FMediaIOCoreTextureSampleBase::_scalar_deleting_destructor_
          (FMediaIOCoreTextureSampleBase *this,uint param_1)

{
  ~FMediaIOCoreTextureSampleBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x280);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d793100

void * __thiscall
FMediaIOCoreTextureSampleConverter::_scalar_deleting_destructor_
          (FMediaIOCoreTextureSampleConverter *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->JITRProxySample).WeakReferenceCount.ReferenceController;
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
  this->_padding_ = (longlong)&___7IMediaTextureSampleConverter__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d793170

void * __thiscall
FMediaIOCoreWaitVSyncThread::_scalar_deleting_destructor_
          (FMediaIOCoreWaitVSyncThread *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->HardwareSync).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7FRunnable__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d7931c0

void * __thiscall
UCaptureCardMediaSource::FOpenColorIODataContainer::_scalar_deleting_destructor_
          (FOpenColorIODataContainer *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  FOpenColorIOColorConversionSettings::~FOpenColorIOColorConversionSettings
            (&this->ColorConversionSettings);
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
    ::operator_delete(this,0xb8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d793230

void * __thiscall
UE::MediaCapture::Private::FRHIResourceCaptureSource::_scalar_deleting_destructor_
          (FRHIResourceCaptureSource *this,uint param_1)

{
  FOpenColorIOColorConversionSettings::~FOpenColorIOColorConversionSettings
            ((FOpenColorIOColorConversionSettings *)&this->_padding_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d793270

void * __thiscall
UE::MediaCapture::Private::FRenderTargetCaptureSource::_scalar_deleting_destructor_
          (FRenderTargetCaptureSource *this,uint param_1)

{
  FOpenColorIOColorConversionSettings::~FOpenColorIOColorConversionSettings
            ((FOpenColorIOColorConversionSettings *)&this->_padding_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xd8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d7932b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void * __thiscall
UE::MediaCapture::Private::FSceneViewportCaptureSource::_scalar_deleting_destructor_
          (FSceneViewportCaptureSource *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->WeakViewport).WeakReferenceCount.ReferenceController;
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
  FOpenColorIOColorConversionSettings::~FOpenColorIOColorConversionSettings
            ((FOpenColorIOColorConversionSettings *)&this->_padding_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d793320

void * __thiscall
FMediaIOAudioCapture::FSubmixBufferListenerProxy::_scalar_deleting_destructor_
          (FSubmixBufferListenerProxy *this,uint param_1)

{
  atomic<int> *paVar1;
  int *piVar2;
  atomic<int> aVar3;
  int iVar4;
  TReferenceControllerBase<1> *pTVar5;
  longlong *plVar6;
  
  pTVar5 = (this->SubmixBufferListenerWeak).WeakReferenceCount.ReferenceController;
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
  plVar6 = (longlong *)this->_padding_;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar6 + 0xc);
    iVar4 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (**(code **)(*plVar6 + 8))(plVar6,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d7933a0

void * __thiscall
UE::MediaCaptureData::FSyncPointWatcher::_scalar_deleting_destructor_
          (FSyncPointWatcher *this,uint param_1)

{
  ~FSyncPointWatcher(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d7933e0

void * __thiscall
UE::MediaCaptureData::FTextureCaptureFrame::_scalar_deleting_destructor_
          (FTextureCaptureFrame *this,uint param_1)

{
  ~FTextureCaptureFrame(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x110);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d793420

void * __thiscall
IMediaAudioSample::_scalar_deleting_destructor_(IMediaAudioSample *this,uint param_1)

{
  *this = (IMediaAudioSample)&___7IMediaAudioSample__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d793460

void * __thiscall
IMediaBinarySample::_scalar_deleting_destructor_(IMediaBinarySample *this,uint param_1)

{
  *this = (IMediaBinarySample)&___7IMediaBinarySample__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d7934a0

void * __thiscall IMediaCache::_scalar_deleting_destructor_(IMediaCache *this,uint param_1)

{
  *this = (IMediaCache)&___7IMediaCache__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d7934e0

void * __thiscall IMediaControls::_scalar_deleting_destructor_(IMediaControls *this,uint param_1)

{
  *this = (IMediaControls)&___7IMediaControls__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d793520

void * __thiscall IMediaPlayer::_scalar_deleting_destructor_(IMediaPlayer *this,uint param_1)

{
  *this = (IMediaPlayer)&___7IMediaPlayer__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d793560

void * __thiscall IMediaPoolable::_scalar_deleting_destructor_(IMediaPoolable *this,uint param_1)

{
  *this = (IMediaPoolable)&___7IMediaPoolable__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d7935a0

void * __thiscall
IMediaTextureSample::_scalar_deleting_destructor_(IMediaTextureSample *this,uint param_1)

{
  *this = (IMediaTextureSample)&___7IMediaTextureSample__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d7935e0

void * __thiscall
IMediaTextureSampleColorConverter::_scalar_deleting_destructor_
          (IMediaTextureSampleColorConverter *this,uint param_1)

{
  *this = (IMediaTextureSampleColorConverter)&___7IMediaTextureSampleColorConverter__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d793620

void * __thiscall
IMediaTextureSampleConverter::_scalar_deleting_destructor_
          (IMediaTextureSampleConverter *this,uint param_1)

{
  *this = (IMediaTextureSampleConverter)&___7IMediaTextureSampleConverter__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d793660

void * __thiscall IMediaTracks::_scalar_deleting_destructor_(IMediaTracks *this,uint param_1)

{
  *this = (IMediaTracks)&___7IMediaTracks__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d7936a0

void * __thiscall IMediaView::_scalar_deleting_destructor_(IMediaView *this,uint param_1)

{
  *this = (IMediaView)&___7IMediaView__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d7936e0

void * __thiscall
UBlendDeinterlacer::_scalar_deleting_destructor_(UBlendDeinterlacer *this,uint param_1)

{
  *(undefined ***)this = &___7UVideoDeinterlacer__6B_;
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

// `scalar_deleting_destructor' @ 14d793740

void * __thiscall
UBobDeinterlacer::_scalar_deleting_destructor_(UBobDeinterlacer *this,uint param_1)

{
  *(undefined ***)this = &___7UVideoDeinterlacer__6B_;
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

// `scalar_deleting_destructor' @ 14d7937a0

void * __thiscall
UCaptureCardMediaSource::_scalar_deleting_destructor_(UCaptureCardMediaSource *this,uint param_1)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IMediaOptions__;
  FOpenColorIOColorConversionSettings::~FOpenColorIOColorConversionSettings
            (&this->ColorConversionSettings);
  UTimeSynchronizableMediaSource::~UTimeSynchronizableMediaSource
            ((UTimeSynchronizableMediaSource *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x158);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d793820

void * __thiscall
UDiscardDeinterlacer::_scalar_deleting_destructor_(UDiscardDeinterlacer *this,uint param_1)

{
  *(undefined ***)this = &___7UVideoDeinterlacer__6B_;
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

// `scalar_deleting_destructor' @ 14d793880

void * __thiscall
UFileMediaCapture::_scalar_deleting_destructor_(UFileMediaCapture *this,uint param_1)

{
  longlong *plVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  
  this->_padding_ = (longlong)&___7UFileMediaCapture__6B_;
  if (*(longlong *)&this->OnCompleteWrapper != 0) {
    plVar1 = *(longlong **)&(this->OnCompleteWrapper).field_0x28;
    plVar3 = (longlong *)&(this->OnCompleteWrapper).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar3 = plVar1;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  pFVar2 = (this->BaseFilePathName).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UMediaCapture::~UMediaCapture((UMediaCapture *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x330);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d793920

void * __thiscall
UFileMediaOutput::_scalar_deleting_destructor_(UFileMediaOutput *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  *(undefined ***)this = &___7UFileMediaOutput__6B_;
  pFVar1 = (this->BaseFileName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FilePath).Path.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if (*(longlong *)&(this->WriteOptions).NativeOnComplete != 0) {
    plVar2 = *(longlong **)&(this->WriteOptions).NativeOnComplete.field_0x28;
    plVar3 = (longlong *)&(this->WriteOptions).NativeOnComplete.field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar3 = plVar2;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->WriteOptions).OnComplete);
  *(undefined ***)this = &___7UMediaOutput__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xd0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d7939e0

void * __thiscall UMediaCapture::_scalar_deleting_destructor_(UMediaCapture *this,uint param_1)

{
  ~UMediaCapture(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x2d8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d793a40

void * __thiscall
UMediaIOCoreSubsystem::_scalar_deleting_destructor_(UMediaIOCoreSubsystem *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UMediaIOCoreSubsystem__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->BufferReceivedDelegate).field_0x28,
             *(int *)&(this->BufferReceivedDelegate).field_0x30);
  pvVar1 = *(void **)&(this->BufferReceivedDelegate).field_0x28;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->BufferReceivedDelegate);
  *(undefined4 *)&(this->MediaIOAudioCaptures).field_0x48 = 0;
  pvVar1 = *(void **)&(this->MediaIOAudioCaptures).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,TSharedPtr<FMediaIOAudioCapture,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,TSharedPtr<FMediaIOAudioCapture,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,TSharedPtr<FMediaIOAudioCapture,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->MediaIOAudioCaptures);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MainMediaIOAudioCapture).SharedReferenceCount.ReferenceController);
  UEngineSubsystem::~UEngineSubsystem((UEngineSubsystem *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xd8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d793b10

void * __thiscall UMediaOutput::_scalar_deleting_destructor_(UMediaOutput *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UMediaOutput__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d793b70

void * __thiscall
URenderTargetMediaCapture::_scalar_deleting_destructor_
          (URenderTargetMediaCapture *this,uint param_1)

{
  this->_padding_ = (longlong)&___7URenderTargetMediaCapture__6B_;
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->RenderTargetCriticalSection);
  UMediaCapture::~UMediaCapture((UMediaCapture *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x308);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d793be0

void * __thiscall
URenderTargetMediaOutput::_scalar_deleting_destructor_(URenderTargetMediaOutput *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7URenderTargetMediaOutput__6B_;
  pvVar1 = *(void **)&(this->RenderTarget).SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  this->_padding_ = (longlong)&___7UMediaOutput__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d793c60

void * __thiscall
UVideoDeinterlacer::_scalar_deleting_destructor_(UVideoDeinterlacer *this,uint param_1)

{
  *(undefined ***)this = &___7UVideoDeinterlacer__6B_;
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

// EmptyLinkFunctionForGeneratedCodeCaptureCardMediaSource @ 14d7a3a50

void __cdecl EmptyLinkFunctionForGeneratedCodeCaptureCardMediaSource(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeFileMediaCapture @ 14d7a3a60

void __cdecl EmptyLinkFunctionForGeneratedCodeFileMediaCapture(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeFileMediaOutput @ 14d7a3a70

void __cdecl EmptyLinkFunctionForGeneratedCodeFileMediaOutput(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMediaCapture @ 14d7a3a80

void __cdecl EmptyLinkFunctionForGeneratedCodeMediaCapture(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMediaIOCoreDefinitions @ 14d7a3a90

void __cdecl EmptyLinkFunctionForGeneratedCodeMediaIOCoreDefinitions(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMediaIOCoreDeinterlacer @ 14d7a3aa0

void __cdecl EmptyLinkFunctionForGeneratedCodeMediaIOCoreDeinterlacer(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMediaIOCoreSubsystem @ 14d7a3ab0

void __cdecl EmptyLinkFunctionForGeneratedCodeMediaIOCoreSubsystem(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMediaIOCore_init @ 14d7a3ac0

void __cdecl EmptyLinkFunctionForGeneratedCodeMediaIOCore_init(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMediaOutput @ 14d7a3ad0

void __cdecl EmptyLinkFunctionForGeneratedCodeMediaOutput(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeRenderTargetMediaCapture @ 14d7a3ae0

void __cdecl EmptyLinkFunctionForGeneratedCodeRenderTargetMediaCapture(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeRenderTargetMediaOutput @ 14d7a3af0

void __cdecl EmptyLinkFunctionForGeneratedCodeRenderTargetMediaOutput(void)

{
  return;
}

// FMediaCaptureStateChangedSignature_DelegateWrapper @ 14d7a6f50

void __cdecl
FMediaCaptureStateChangedSignature_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1)

{
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,(void *)0x0);
  return;
}

// FindSceneViewportAndLevel @ 14d7a79b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl MediaCaptureDetails::FindSceneViewportAndLevel(TSharedPtr<FSceneViewport,1> *param_1)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  UEngine *pUVar3;
  UClass *pUVar4;
  FString *pFVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  undefined1 local_28 [16];
  FString local_18;
  
  pUVar3 = GEngine;
  if (GEngine == (UEngine *)0x0) {
    pFVar5 = GetTypeName<UGameEngine>((FString *)local_28);
    if ((pFVar5->Data).ArrayNum == 0) {
      pwVar6 = L"";
    }
    else {
      pwVar6 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar6);
  }
  pUVar4 = Z_Construct_UClass_UGameEngine_NoRegister();
  iVar1 = (int)pUVar4->_padding_;
  if ((iVar1 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar4->_padding_)) {
    local_28._0_8_ = pUVar3[1]._padding_;
    local_28._8_8_ = pUVar3[1]._padding_;
    if ((TReferenceControllerBase<1> *)local_28._8_8_ != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      ((TReferenceControllerBase<1> *)local_28._8_8_)->SharedReferenceCount =
           (atomic<int>)
           ((int)((TReferenceControllerBase<1> *)local_28._8_8_)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
    param_1->Object = (FSceneViewport *)local_28._0_8_;
    (param_1->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)local_28._8_8_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    return param_1->Object != (FSceneViewport *)0x0;
  }
  pFVar5 = GetTypeName<UGameEngine>((FString *)local_28);
  pwVar6 = L"";
  if ((pFVar5->Data).ArrayNum == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
  }
  pFVar5 = GetFullNameForCastLogError<UEngine>(&local_18,pUVar3);
  if ((pFVar5->Data).ArrayNum != 0) {
    pwVar6 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar6,pwVar7);
}

// GetCurrentWorld @ 14d7a9bf0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UWorld * __cdecl MediaIOCoreAudioOutputUtils::GetCurrentWorld(void)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  piVar1 = &(GEngine->WorldList).Array.ArrayNum;
  pFVar4 = (GEngine->WorldList).Array.AllocatorInstance.Data;
  iVar3 = *piVar1;
  pFVar2 = pFVar4 + (longlong)iVar3 * 8;
  while( true ) {
    if (*piVar1 != iVar3) {
      `TCheckedPointerIterator<void_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar4 == pFVar2) break;
    if (**(char **)pFVar4 == '\x01') {
      return *(UWorld **)(*(char **)pFVar4 + 0x2c0);
    }
    pFVar4 = pFVar4 + 8;
  }
  return (UWorld *)0x0;
}

// GetTransportString @ 14d7ae9c0

wchar_t * __cdecl
MediaIOCoreDefinitions::GetTransportString
          (EMediaIOTransportType param_1,EMediaIOQuadLinkTransportType param_2)

{
  if (param_1 == DualLink) {
    return DualStr;
  }
  if (param_1 != QuadLink) {
    if (param_1 == HDMI) {
      return HDMIStr;
    }
    return SingleStr;
  }
  if (param_2 == TwoSampleInterleave) {
    return QuadTsiStr;
  }
  return QuadSquareStr;
}

// ShowSlateNotification @ 14d7bd550

void __cdecl MediaCaptureDetails::ShowSlateNotification(void)

{
  return;
}

// ValidateIsCapturing @ 14d7c3420

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl MediaCaptureDetails::ValidateIsCapturing(UMediaCapture *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(param_1->_padding_ + 0x2b0))();
  if (cVar1 != '\x01') {
    cVar1 = (**(code **)(param_1->_padding_ + 0x2b0))(param_1);
    if (cVar1 != '\x02') {
      if (1 < (byte)LogMediaIOCore._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMediaIOCore);
      }
      return false;
    }
  }
  return true;
}

// WriteRawFile @ 14d7c4420

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
MediaIOCoreFileWriter::WriteRawFile(FString *param_1,uchar *param_2,uint param_3,bool param_4)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  FString *pFVar4;
  size_t sVar5;
  IFileManager *pIVar6;
  FPlatformFileManager *pFVar7;
  IPlatformFile *pIVar8;
  FString *pFVar9;
  FString *pFVar10;
  longlong *plVar11;
  ForAnyElementType FVar12;
  int iVar13;
  undefined1 auStack_f8 [32];
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FDateTime local_a8;
  FString local_a0;
  FString local_90;
  FString local_80;
  TStringView<wchar_t> local_70;
  FScriptContainerElement *local_60;
  int local_58;
  wchar_t *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_f8;
  if ((param_1->Data).ArrayNum < 2) {
    return;
  }
  pFVar4 = FPaths::ProjectDir(&local_b8);
  if ((pFVar4->Data).ArrayNum == 0) {
    local_70.DataPtr = L"";
  }
  else {
    local_70.DataPtr = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  local_70.Size = 0;
  if ((FScriptContainerElement *)local_70.DataPtr != (FScriptContainerElement *)0x0) {
    sVar5 = wcslen(local_70.DataPtr);
    local_70.Size = (int)sVar5;
  }
  local_58 = 5;
  local_60 = (FScriptContainerElement *)0x15069beb0;
  local_48 = 5;
  local_50 = L"Media";
  FPaths::CombineInternal(&local_d8,&local_70,3);
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  FPaths::NormalizeDirectoryName(&local_d8);
  bVar2 = FPaths::DirectoryExists(&local_d8);
  if (!bVar2) {
    pIVar6 = IFileManager::Get();
    FVar12.Data = (FScriptContainerElement *)L"";
    if (local_d8.Data.ArrayNum != 0) {
      FVar12.Data = local_d8.Data.AllocatorInstance.Data;
    }
    cVar3 = (**(code **)((longlong)*pIVar6 + 0x60))(pIVar6,FVar12.Data,1);
    if (cVar3 == '\0') goto LAB_14d7c46f5;
  }
  local_70.DataPtr = (wchar_t *)local_d8.Data.AllocatorInstance.Data;
  local_60 = (param_1->Data).AllocatorInstance.Data;
  local_70.Size = local_d8.Data.ArrayNum + -1;
  if (local_d8.Data.ArrayNum == 0) {
    local_70.Size = 0;
  }
  iVar13 = (param_1->Data).ArrayNum;
  local_58 = iVar13 + -1;
  if (iVar13 == 0) {
    local_58 = 0;
  }
  FPaths::CombineInternal(&local_c8,&local_70,2);
  FDateTime::Now();
  if (param_4) {
    pFVar4 = ::FString::FString(&local_b8,".raw");
    iVar1 = (pFVar4->Data).ArrayNum;
    iVar13 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar13 = 0;
    }
    ::FString::AppendChars(&local_c8,(wchar_t *)(pFVar4->Data).AllocatorInstance.Data,iVar13);
    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
    pFVar7 = FPlatformFileManager::Get();
    pIVar8 = FPlatformFileManager::GetPlatformFile(pFVar7);
LAB_14d7c469c:
    FVar12.Data = (FScriptContainerElement *)L"";
    if (local_c8.Data.ArrayNum != 0) {
      FVar12.Data = local_c8.Data.AllocatorInstance.Data;
    }
    plVar11 = (longlong *)(**(code **)((longlong)*pIVar8 + 0x110))(pIVar8,FVar12.Data,param_4,0);
    if (plVar11 != (longlong *)0x0) {
      (**(code **)(*plVar11 + 0x30))(plVar11,param_2,param_3);
      (**(code **)*plVar11)(plVar11,1);
    }
  }
  else {
    pFVar4 = ::FString::FString((FString *)&local_70,".raw");
    pFVar9 = FDateTime::ToString(&local_a8,&local_80);
    pFVar10 = ::FString::FString(&local_90,"_");
    ::FString::ConcatFF(&local_b8,pFVar10,pFVar9);
    ::FString::ConcatFF(&local_a0,&local_b8,pFVar4);
    iVar13 = local_a0.Data.ArrayNum + -1;
    if (local_a0.Data.ArrayNum == 0) {
      iVar13 = 0;
    }
    ::FString::AppendChars(&local_c8,(wchar_t *)local_a0.Data.AllocatorInstance.Data,iVar13);
    if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a0.Data.AllocatorInstance.Data);
    }
    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
    if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.Data.AllocatorInstance.Data);
    }
    if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.Data.AllocatorInstance.Data);
    }
    if ((FScriptContainerElement *)local_70.DataPtr != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.DataPtr);
    }
    pFVar7 = FPlatformFileManager::Get();
    pIVar8 = FPlatformFileManager::GetPlatformFile(pFVar7);
    FVar12.Data = (FScriptContainerElement *)L"";
    if (local_c8.Data.ArrayNum != 0) {
      FVar12.Data = local_c8.Data.AllocatorInstance.Data;
    }
    cVar3 = (**(code **)((longlong)*pIVar8 + 0x78))(pIVar8,FVar12.Data);
    if (cVar3 == '\0') goto LAB_14d7c469c;
  }
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
LAB_14d7c46f5:
  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  return;
}

// Z_Construct_UClass_UBlendDeinterlacer_NoRegister @ 14d7c4740

UClass * __cdecl Z_Construct_UClass_UBlendDeinterlacer_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBlendDeinterlacer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MediaIOCore",L"BlendDeinterlacer",
               &Z_Registration_Info_UClass_UBlendDeinterlacer.InnerSingleton,
               UBlendDeinterlacer::StaticRegisterNativesUBlendDeinterlacer,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UBlendDeinterlacer>,
               InternalVTableHelperCtorCaller<UBlendDeinterlacer>,local_res8,
               UVideoDeinterlacer::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBlendDeinterlacer.InnerSingleton;
}

// Z_Construct_UClass_UBobDeinterlacer_NoRegister @ 14d7c4800

UClass * __cdecl Z_Construct_UClass_UBobDeinterlacer_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBobDeinterlacer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MediaIOCore",L"BobDeinterlacer",
               &Z_Registration_Info_UClass_UBobDeinterlacer.InnerSingleton,
               UBobDeinterlacer::StaticRegisterNativesUBobDeinterlacer,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UBobDeinterlacer>,
               InternalVTableHelperCtorCaller<UBobDeinterlacer>,local_res8,
               UVideoDeinterlacer::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBobDeinterlacer.InnerSingleton;
}

// Z_Construct_UClass_UCaptureCardMediaSource_NoRegister @ 14d7c48c0

UClass * __cdecl Z_Construct_UClass_UCaptureCardMediaSource_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCaptureCardMediaSource.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MediaIOCore",L"CaptureCardMediaSource",
               &Z_Registration_Info_UClass_UCaptureCardMediaSource.InnerSingleton,
               UCaptureCardMediaSource::StaticRegisterNativesUCaptureCardMediaSource,0x158,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UCaptureCardMediaSource>,
               InternalVTableHelperCtorCaller<UCaptureCardMediaSource>,local_res8,
               UTimeSynchronizableMediaSource::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCaptureCardMediaSource.InnerSingleton;
}

// Z_Construct_UClass_UDiscardDeinterlacer_NoRegister @ 14d7c4980

UClass * __cdecl Z_Construct_UClass_UDiscardDeinterlacer_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDiscardDeinterlacer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MediaIOCore",L"DiscardDeinterlacer",
               &Z_Registration_Info_UClass_UDiscardDeinterlacer.InnerSingleton,
               UDiscardDeinterlacer::StaticRegisterNativesUDiscardDeinterlacer,0x28,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UDiscardDeinterlacer>,
               InternalVTableHelperCtorCaller<UDiscardDeinterlacer>,local_res8,
               UVideoDeinterlacer::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDiscardDeinterlacer.InnerSingleton;
}

// Z_Construct_UClass_UFileMediaCapture_NoRegister @ 14d7c4a40

UClass * __cdecl Z_Construct_UClass_UFileMediaCapture_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFileMediaCapture.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MediaIOCore",L"FileMediaCapture",
               &Z_Registration_Info_UClass_UFileMediaCapture.InnerSingleton,
               UFileMediaCapture::StaticRegisterNativesUFileMediaCapture,0x330,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UFileMediaCapture>,
               InternalVTableHelperCtorCaller<UFileMediaCapture>,local_res8,
               UMediaCapture::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFileMediaCapture.InnerSingleton;
}

// Z_Construct_UClass_UFileMediaOutput_NoRegister @ 14d7c4b00

UClass * __cdecl Z_Construct_UClass_UFileMediaOutput_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFileMediaOutput.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MediaIOCore",L"FileMediaOutput",
               &Z_Registration_Info_UClass_UFileMediaOutput.InnerSingleton,
               UFileMediaOutput::StaticRegisterNativesUFileMediaOutput,0xd0,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UFileMediaOutput>,
               InternalVTableHelperCtorCaller<UFileMediaOutput>,local_res8,UMediaOutput::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFileMediaOutput.InnerSingleton;
}

// Z_Construct_UClass_UMediaIOCoreSubsystem_NoRegister @ 14d7c4bc0

UClass * __cdecl Z_Construct_UClass_UMediaIOCoreSubsystem_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMediaIOCoreSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MediaIOCore",L"MediaIOCoreSubsystem",
               &Z_Registration_Info_UClass_UMediaIOCoreSubsystem.InnerSingleton,
               UMediaIOCoreSubsystem::StaticRegisterNativesUMediaIOCoreSubsystem,0xd8,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UMediaIOCoreSubsystem>,
               InternalVTableHelperCtorCaller<UMediaIOCoreSubsystem>,local_res8,
               UEngineSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMediaIOCoreSubsystem.InnerSingleton;
}

// Z_Construct_UClass_URenderTargetMediaCapture_NoRegister @ 14d7c4c80

UClass * __cdecl Z_Construct_UClass_URenderTargetMediaCapture_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URenderTargetMediaCapture.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MediaIOCore",L"RenderTargetMediaCapture",
               &Z_Registration_Info_UClass_URenderTargetMediaCapture.InnerSingleton,
               URenderTargetMediaCapture::StaticRegisterNativesURenderTargetMediaCapture,0x308,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<URenderTargetMediaCapture>,
               InternalVTableHelperCtorCaller<URenderTargetMediaCapture>,local_res8,
               UMediaCapture::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URenderTargetMediaCapture.InnerSingleton;
}

// Z_Construct_UClass_URenderTargetMediaOutput_NoRegister @ 14d7c4d40

UClass * __cdecl Z_Construct_UClass_URenderTargetMediaOutput_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URenderTargetMediaOutput.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MediaIOCore",L"RenderTargetMediaOutput",
               &Z_Registration_Info_UClass_URenderTargetMediaOutput.InnerSingleton,
               URenderTargetMediaOutput::StaticRegisterNativesURenderTargetMediaOutput,0x60,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<URenderTargetMediaOutput>,
               InternalVTableHelperCtorCaller<URenderTargetMediaOutput>,local_res8,
               UMediaOutput::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URenderTargetMediaOutput.InnerSingleton;
}

// Z_Construct_UEnum_MediaIOCore_EMediaCaptureResourceType @ 14d7c4e00

UEnum * __cdecl Z_Construct_UEnum_MediaIOCore_EMediaCaptureResourceType(void)

{
  if (Z_Registration_Info_UEnum_EMediaCaptureResourceType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EMediaCaptureResourceType.InnerSingleton,
               &Z_Construct_UEnum_MediaIOCore_EMediaCaptureResourceType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EMediaCaptureResourceType.InnerSingleton;
}

// Z_Construct_UEnum_MediaIOCore_EMediaCaptureSourceType @ 14d7c4e40

UEnum * __cdecl Z_Construct_UEnum_MediaIOCore_EMediaCaptureSourceType(void)

{
  if (Z_Registration_Info_UEnum_EMediaCaptureSourceType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EMediaCaptureSourceType.InnerSingleton,
               &Z_Construct_UEnum_MediaIOCore_EMediaCaptureSourceType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EMediaCaptureSourceType.InnerSingleton;
}

// Z_Construct_UScriptStruct_FMediaIOAutoDetectableTimecodeFormat_Backup @ 14d7c4e80

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMediaIOAutoDetectableTimecodeFormat_Backup(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMediaIOAutoDetectableTimecodeFormat_Backup.InnerSingleton
      == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMediaIOAutoDetectableTimecodeFormat_Backup.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FMediaIOAutoDetectableTimecodeFormat_Backup_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMediaIOAutoDetectableTimecodeFormat_Backup.InnerSingleton
      != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMediaIOAutoDetectableTimecodeFormat_Backup.
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

// Z_Construct_UScriptStruct_FMediaIOInputConfiguration @ 14d7c4f00

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMediaIOInputConfiguration(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMediaIOInputConfiguration.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMediaIOInputConfiguration.InnerSingleton,
               &Z_Construct_UScriptStruct_FMediaIOInputConfiguration_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMediaIOInputConfiguration.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMediaIOInputConfiguration.InnerSingleton;
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

// Z_Construct_UScriptStruct_FMediaIOOutputConfiguration @ 14d7c4f80

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMediaIOOutputConfiguration(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMediaIOOutputConfiguration.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMediaIOOutputConfiguration.InnerSingleton,
               &Z_Construct_UScriptStruct_FMediaIOOutputConfiguration_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMediaIOOutputConfiguration.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMediaIOOutputConfiguration.InnerSingleton;
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

// Z_Construct_UScriptStruct_FMediaIOVideoTimecodeConfiguration @ 14d7c5000

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMediaIOVideoTimecodeConfiguration(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMediaIOVideoTimecodeConfiguration.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMediaIOVideoTimecodeConfiguration.InnerSingleton,
               &Z_Construct_UScriptStruct_FMediaIOVideoTimecodeConfiguration_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMediaIOVideoTimecodeConfiguration.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMediaIOVideoTimecodeConfiguration.InnerSingleton;
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

// IMPLEMENT_MODULE_MediaIOCore @ 14d7c6130

void __cdecl IMPLEMENT_MODULE_MediaIOCore(void)

{
  return;
}

// ShaderTypeRegistration'' @ 1504596a0

void __cdecl
`dynamic_atexit_destructor_for_'UE::MediaCapture::Resample::FMediaCaptureResamplePS::
ShaderTypeRegistration__(void)

{
  return;
}

// StaticResource'' @ 1504596b0

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

// StaticResource'' @ 150459730

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

// StaticResource'' @ 1504597b0

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

// `dynamic_atexit_destructor_for_'AllCommonDisplayModeResolutions'' @ 150459830

void __cdecl
MediaIOCommonDisplayModeInfo::_dynamic_atexit_destructor_for__AllCommonDisplayModeResolutions__
          (void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = 0xc;
  lVar3 = 0x154d909a8;
  do {
    plVar1 = (longlong *)(lVar3 + -0x18);
    lVar3 = lVar3 + -0x18;
    lVar2 = lVar2 + -1;
    if ((longlong *)*plVar1 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar1 + 0x10))();
    }
  } while (lVar2 != 0);
  return;
}

// `dynamic_atexit_destructor_for_'AllCommonDisplayModes'' @ 150459880

void __cdecl
MediaIOCommonDisplayModeInfo::_dynamic_atexit_destructor_for__AllCommonDisplayModes__(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = 0x42;
  lVar3 = 0x154d91408;
  do {
    plVar1 = (longlong *)(lVar3 + -0x28);
    lVar3 = lVar3 + -0x28;
    lVar2 = lVar2 + -1;
    if ((longlong *)*plVar1 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar1 + 0x10))();
    }
  } while (lVar2 != 0);
  return;
}

// `dynamic_atexit_destructor_for_'CCommandHideTimecode'' @ 1504598d0

void __cdecl MediaIOCorePlayerDetail::_dynamic_atexit_destructor_for__CCommandHideTimecode__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CCommandHideTimecode);
  return;
}

// `dynamic_atexit_destructor_for_'CCommandShowTimecode'' @ 1504598f0

void __cdecl MediaIOCorePlayerDetail::_dynamic_atexit_destructor_for__CCommandShowTimecode__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CCommandShowTimecode);
  return;
}

// `dynamic_atexit_destructor_for_'CVarEnableGPUDirectInput'' @ 150459910

void __cdecl
MediaIOCorePlayerDetail::_dynamic_atexit_destructor_for__CVarEnableGPUDirectInput__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarEnableGPUDirectInput);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMediaIOCapturePollTaskPriority'' @ 150459930

void __cdecl _dynamic_atexit_destructor_for__CVarMediaIOCapturePollTaskPriority__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarMediaIOCapturePollTaskPriority)
  ;
  return;
}

// `dynamic_atexit_destructor_for_'CVarMediaIOEnableExperimentalScheduling'' @ 150459950

void __cdecl _dynamic_atexit_destructor_for__CVarMediaIOEnableExperimentalScheduling__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarMediaIOEnableExperimentalScheduling);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMediaIOJITRInsights'' @ 150459970

void __cdecl
MediaIOCorePlayerDetail::_dynamic_atexit_destructor_for__CVarMediaIOJITRInsights__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarMediaIOJITRInsights);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMediaIOMaxBufferSize'' @ 150459990

void __cdecl
MediaIOCorePlayerDetail::_dynamic_atexit_destructor_for__CVarMediaIOMaxBufferSize__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarMediaIOMaxBufferSize);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMediaIOScheduleOnAnyThread'' @ 1504599b0

void __cdecl _dynamic_atexit_destructor_for__CVarMediaIOScheduleOnAnyThread__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarMediaIOScheduleOnAnyThread);
  return;
}

// `dynamic_atexit_destructor_for_'Desc'' @ 1504599d0

void __cdecl
```UE::MediaCaptureData::FMediaCaptureHelper::CaptureFrame'::__l7::Desc::operator()<>'::__l3::
<lambda_1>::operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001504599d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
  return;
}

// `dynamic_atexit_destructor_for_'Desc'' @ 1504599f0

void __cdecl
```FMediaCaptureSceneViewExtension::PostRenderView_RenderThread'::__l10::Desc::operator()<>'::__l3::
<lambda_1>::operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001504599f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection
            ((LPCRITICAL_SECTION)
             &`public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FMediaCaptureSceneViewExtension::PostRenderView_RenderThread(FRDGBuilder&___ptr64,FSceneView&___ptr64)___ptr64'::`10'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
              ::__l2::Desc.Cs);
  return;
}

// `dynamic_atexit_destructor_for_'Desc'' @ 150459a10

void __cdecl
```FMediaCaptureSceneViewExtension::PostProcessCallback_RenderThread'::__l17::Desc::operator()<>'::
__l3::<lambda_1>::operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__(void)

{
                    /* WARNING: Could not recover jumptable at 0x000150459a17. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection
            ((LPCRITICAL_SECTION)
             &`public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_struct_FScreenPassTexture___cdecl_FMediaCaptureSceneViewExtension::PostProcessCallback_RenderThread(FRDGBuilder&___ptr64,FSceneView_const&___ptr64,FPostProcessMaterialInputs_const&___ptr64)___ptr64'::`17'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
              ::__l2::Desc.Cs);
  return;
}

// `dynamic_atexit_destructor_for_'Desc'' @ 150459a30

void __cdecl
```UE::MediaCapture::FRenderPass::AddColorConversionPass'::__l30::Desc::operator()<>'::__l3::
<lambda_1>::operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__(void)

{
                    /* WARNING: Could not recover jumptable at 0x000150459a37. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
  return;
}

// `dynamic_atexit_destructor_for_'Desc'' @ 150459a50

void __cdecl
```FMediaIOCoreTextureSampleBase::ApplyColorConversion'::__l11::Desc::operator()<>'::__l3::
<lambda_1>::operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__(void)

{
                    /* WARNING: Could not recover jumptable at 0x000150459a57. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
  return;
}

// `dynamic_atexit_destructor_for_'Desc'' @ 150459a70

void __cdecl
````UE::MediaCapture::FRenderPass::CreateFormatConversionPass'::__l12::<lambda_4>::operator()'::
__l14::Desc::operator()<>'::__l3::<lambda_1>::operator()<>'::__l2::
_dynamic_atexit_destructor_for__Desc__(void)

{
                    /* WARNING: Could not recover jumptable at 0x000150459a77. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
  return;
}

// `dynamic_atexit_destructor_for_'Desc'' @ 150459a90

void __cdecl
```UE::MediaCapture::FRenderPass::AddTextureResamplePass'::__l14::Desc::operator()<>'::__l3::
<lambda_1>::operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__(void)

{
                    /* WARNING: Could not recover jumptable at 0x000150459a97. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
  return;
}

// `dynamic_atexit_destructor_for_'Desc'' @ 150459ab0

void __cdecl
```UE::MediaCaptureData::FMediaCaptureHelper::CaptureFrame'::__l49::<lambda_3>::operator()<>'::__l3
::<lambda_1>::operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__(void)

{
                    /* WARNING: Could not recover jumptable at 0x000150459ab7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
  return;
}

// `dynamic_atexit_destructor_for_'Desc'' @ 150459ad0

void __cdecl
```UE::MediaCaptureData::FMediaCaptureHelper::CaptureFrame'::__l59::<lambda_4>::operator()<>'::__l3
::<lambda_1>::operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__(void)

{
                    /* WARNING: Could not recover jumptable at 0x000150459ad7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
  return;
}

// `dynamic_atexit_destructor_for_'Desc'' @ 150459af0

void __cdecl
``FMediaIOCorePlayerBase::TransferTexture_RenderThread'::__l10::<lambda_1>::operator()<>'::__l2::
_dynamic_atexit_destructor_for__Desc__(void)

{
                    /* WARNING: Could not recover jumptable at 0x000150459af7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
  return;
}

// `dynamic_atexit_destructor_for_'Desc'' @ 150459b10

void __cdecl
``UE::MediaCaptureData::FMediaCaptureHelper::CaptureFrame'::__l41::<lambda_2>::operator()<>'::__l2::
_dynamic_atexit_destructor_for__Desc__(void)

{
                    /* WARNING: Could not recover jumptable at 0x000150459b17. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
  return;
}

// `dynamic_atexit_destructor_for_'Desc'' @ 150459b30

void __cdecl
```UMediaCapture::ProcessCapture_RenderThread'::__l10::Desc::operator()<int>'::__l3::<lambda_1>::
operator()<int>'::__l2::_dynamic_atexit_destructor_for__Desc__(void)

{
                    /* WARNING: Could not recover jumptable at 0x000150459b37. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
  return;
}

// `dynamic_atexit_destructor_for_'FMediaIODeinterlacerTestsAutomationSpecInstance'' @ 150459b50

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FMediaIODeinterlacerTestsAutomationSpecInstance__(void)

{
  FAutomationSpecBase::~FAutomationSpecBase
            ((FAutomationSpecBase *)&FMediaIODeinterlacerTestsAutomationSpecInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FMediaIOSetErrorState'' @ 150459b70

void __cdecl _dynamic_atexit_destructor_for__FMediaIOSetErrorState__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&FMediaIOSetErrorState);
  return;
}

// `dynamic_atexit_destructor_for_'GPUStat_MediaCapture_CaptureFrame'' @ 150459b90

void __cdecl _dynamic_atexit_destructor_for__GPUStat_MediaCapture_CaptureFrame__(void)

{
  GPUStat_MediaCapture_CaptureFrame._104_4_ = 0;
  if (GPUStat_MediaCapture_CaptureFrame._96_8_ != 0) {
    FMemory::Free((void *)GPUStat_MediaCapture_CaptureFrame._96_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&GPUStat_MediaCapture_CaptureFrame.field_0x20);
  return;
}

// `dynamic_atexit_destructor_for_'GPUStat_MediaCapture_ColorConversion'' @ 150459bd0

void __cdecl _dynamic_atexit_destructor_for__GPUStat_MediaCapture_ColorConversion__(void)

{
  GPUStat_MediaCapture_ColorConversion._104_4_ = 0;
  if (GPUStat_MediaCapture_ColorConversion._96_8_ != 0) {
    FMemory::Free((void *)GPUStat_MediaCapture_ColorConversion._96_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&GPUStat_MediaCapture_ColorConversion.field_0x20);
  return;
}

// `dynamic_atexit_destructor_for_'GPUStat_MediaCapture_Conversion'' @ 150459c10

void __cdecl _dynamic_atexit_destructor_for__GPUStat_MediaCapture_Conversion__(void)

{
  GPUStat_MediaCapture_Conversion._104_4_ = 0;
  if (GPUStat_MediaCapture_Conversion._96_8_ != 0) {
    FMemory::Free((void *)GPUStat_MediaCapture_Conversion._96_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&GPUStat_MediaCapture_Conversion.field_0x20);
  return;
}

// `dynamic_atexit_destructor_for_'GPUStat_MediaCapture_CustomCapture'' @ 150459c50

void __cdecl _dynamic_atexit_destructor_for__GPUStat_MediaCapture_CustomCapture__(void)

{
  GPUStat_MediaCapture_CustomCapture._104_4_ = 0;
  if (GPUStat_MediaCapture_CustomCapture._96_8_ != 0) {
    FMemory::Free((void *)GPUStat_MediaCapture_CustomCapture._96_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&GPUStat_MediaCapture_CustomCapture.field_0x20);
  return;
}

// `dynamic_atexit_destructor_for_'GPUStat_MediaCapture_ProcessCapture'' @ 150459c90

void __cdecl _dynamic_atexit_destructor_for__GPUStat_MediaCapture_ProcessCapture__(void)

{
  GPUStat_MediaCapture_ProcessCapture._104_4_ = 0;
  if (GPUStat_MediaCapture_ProcessCapture._96_8_ != 0) {
    FMemory::Free((void *)GPUStat_MediaCapture_ProcessCapture._96_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&GPUStat_MediaCapture_ProcessCapture.field_0x20);
  return;
}

// `dynamic_atexit_destructor_for_'GPUStat_MediaCapture_Readback'' @ 150459cd0

void __cdecl _dynamic_atexit_destructor_for__GPUStat_MediaCapture_Readback__(void)

{
  GPUStat_MediaCapture_Readback._104_4_ = 0;
  if (GPUStat_MediaCapture_Readback._96_8_ != 0) {
    FMemory::Free((void *)GPUStat_MediaCapture_Readback._96_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&GPUStat_MediaCapture_Readback.field_0x20);
  return;
}

// `dynamic_atexit_destructor_for_'GPUStat_MediaCapture_Resample'' @ 150459d10

void __cdecl _dynamic_atexit_destructor_for__GPUStat_MediaCapture_Resample__(void)

{
  GPUStat_MediaCapture_Resample._104_4_ = 0;
  if (GPUStat_MediaCapture_Resample._96_8_ != 0) {
    FMemory::Free((void *)GPUStat_MediaCapture_Resample._96_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&GPUStat_MediaCapture_Resample.field_0x20);
  return;
}

// `dynamic_atexit_destructor_for_'GPUStat_MediaCapture_SyncPoint'' @ 150459d50

void __cdecl _dynamic_atexit_destructor_for__GPUStat_MediaCapture_SyncPoint__(void)

{
  GPUStat_MediaCapture_SyncPoint._104_4_ = 0;
  if (GPUStat_MediaCapture_SyncPoint._96_8_ != 0) {
    FMemory::Free((void *)GPUStat_MediaCapture_SyncPoint._96_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&GPUStat_MediaCapture_SyncPoint.field_0x20);
  return;
}

// `dynamic_atexit_destructor_for_'GPUStat_MediaIO_ColorConversion'' @ 150459d90

void __cdecl _dynamic_atexit_destructor_for__GPUStat_MediaIO_ColorConversion__(void)

{
  GPUStat_MediaIO_ColorConversion._104_4_ = 0;
  if (GPUStat_MediaIO_ColorConversion._96_8_ != 0) {
    FMemory::Free((void *)GPUStat_MediaIO_ColorConversion._96_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&GPUStat_MediaIO_ColorConversion.field_0x20);
  return;
}

// `dynamic_atexit_destructor_for_'GPUStat_STAT_MediaIOPlayer_JITR_TransferTexture'' @ 150459dd0

void __cdecl _dynamic_atexit_destructor_for__GPUStat_STAT_MediaIOPlayer_JITR_TransferTexture__(void)

{
  GPUStat_STAT_MediaIOPlayer_JITR_TransferTexture._104_4_ = 0;
  if (GPUStat_STAT_MediaIOPlayer_JITR_TransferTexture._96_8_ != 0) {
    FMemory::Free((void *)GPUStat_STAT_MediaIOPlayer_JITR_TransferTexture._96_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&GPUStat_STAT_MediaIOPlayer_JITR_TransferTexture.field_0x20);
  return;
}

// `dynamic_atexit_destructor_for_'ListenerName'' @ 150459e10

void __cdecl
`FMediaIOAudioCapture::GetListenerName'::__l2::_dynamic_atexit_destructor_for__ListenerName__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ListenerName.Data.AllocatorInstance.Data;
  if (ListenerName.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (ListenerName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'ListenerName'' @ 150459e30

void __cdecl
`FMediaIOAudioCapture::FSubmixBufferListenerProxy::GetListenerName'::__l2::
_dynamic_atexit_destructor_for__ListenerName__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = `public:_virtual_class_FString_const&___ptr64___cdecl_FMediaIOAudioCapture::FSubmixBufferListenerProxy::GetListenerName(void)const___ptr64'
               ::__l2::ListenerName.Data.AllocatorInstance.Data;
  if (`public:_virtual_class_FString_const&___ptr64___cdecl_FMediaIOAudioCapture::FSubmixBufferListenerProxy::GetListenerName(void)const___ptr64'
      ::__l2::ListenerName.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (`public:_virtual_class_FString_const&___ptr64___cdecl_FMediaIOAudioCapture::FSubmixBufferListenerProxy::GetListenerName(void)const___ptr64'
      ::__l2::ListenerName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'LogMediaIOAudioOutput'' @ 150459e50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogMediaIOAudioOutput__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogMediaIOAudioOutput);
  return;
}

// `dynamic_atexit_destructor_for_'LogMediaIOCore'' @ 150459e70

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogMediaIOCore__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogMediaIOCore);
  return;
}

// `dynamic_atexit_destructor_for_'StaticStructMetadata'' @ 150459e90

void __cdecl
`UE::MediaCaptureData::FBufferCaptureFrame::FEnqueueCopyBufferPass::FTypeInfo::GetStructMetadata'::
__l2::_dynamic_atexit_destructor_for__StaticStructMetadata__(void)

{
  FShaderParametersMetadata::~FShaderParametersMetadata
            (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_UE::MediaCaptureData::FBufferCaptureFrame::FEnqueueCopyBufferPass::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata);
  return;
}

// `dynamic_atexit_destructor_for_'StaticStructMetadata'' @ 150459eb0

void __cdecl
`UE::MediaCaptureData::FMediaCaptureBufferSyncPassParameters::FTypeInfo::GetStructMetadata'::__l2::
_dynamic_atexit_destructor_for__StaticStructMetadata__(void)

{
  FShaderParametersMetadata::~FShaderParametersMetadata
            (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_UE::MediaCaptureData::FMediaCaptureBufferSyncPassParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata);
  return;
}

// `dynamic_atexit_destructor_for_'StaticStructMetadata'' @ 150459ed0

void __cdecl
`UE::MediaCaptureData::FMediaCaptureTextureSyncPassParameters::FTypeInfo::GetStructMetadata'::__l2::
_dynamic_atexit_destructor_for__StaticStructMetadata__(void)

{
  FShaderParametersMetadata::~FShaderParametersMetadata
            (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_UE::MediaCaptureData::FMediaCaptureTextureSyncPassParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata);
  return;
}

// `dynamic_atexit_destructor_for_'StaticStructMetadata'' @ 150459ef0

void __cdecl
`UE::MediaCapture::Resample::FMediaCaptureResamplePS::FParameters::FTypeInfo::GetStructMetadata'::
__l2::_dynamic_atexit_destructor_for__StaticStructMetadata__(void)

{
  FShaderParametersMetadata::~FShaderParametersMetadata
            (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_UE::MediaCapture::Resample::FMediaCaptureResamplePS::FParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata);
  return;
}

// `dynamic_atexit_destructor_for_'StaticType'' @ 150459f10

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
`UE::MediaCapture::Resample::FMediaCaptureResamplePS::GetStaticType'::__l2::
_dynamic_atexit_destructor_for__StaticType__(void)

{
  FShaderType::~FShaderType((FShaderType *)&::StaticType);
  return;
}

// `dynamic_atexit_destructor_for_'SupportedFormats'' @ 150459f30

void __cdecl
`UMediaCapture::GetSupportedRgbaSwizzleFormats'::__l2::
_dynamic_atexit_destructor_for__SupportedFormats__(void)

{
  SupportedFormats.HashSize = 0;
  if (SupportedFormats.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)SupportedFormats.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<enum_EPixelFormat>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<enum_EPixelFormat>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&SupportedFormats);
  return;
}

