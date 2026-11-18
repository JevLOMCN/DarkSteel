// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 764

// CurrentAudioThreadStatIdCS'' @ 1410e2d20

void __cdecl `dynamic_initializer_for_'FAudioThread::CurrentAudioThreadStatIdCS__(void)

{
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&FAudioThread::CurrentAudioThreadStatIdCS,4000);
  atexit(`dynamic_atexit_destructor_for_'FAudioThread::CurrentAudioThreadStatIdCS__);
  return;
}

// FeatureName'' @ 1410e2d50

void __cdecl `dynamic_initializer_for_'IMotionController::FeatureName__(void)

{
  ::FName::FName(&IMotionController::FeatureName,L"MotionController");
  return;
}

// ResumeEvent'' @ 1410e2d70

void __cdecl `dynamic_initializer_for_'FAudioThread::ResumeEvent__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FAudioThread::ResumeEvent__);
  return;
}

// StaticResource'' @ 1410e2d90

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
`dynamic_initializer_for_'TStaticStateRHI<TStaticBlendState<7,0,1,1,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
::StaticResource__(void)

{
  TRefCountPtr<FRHIBlendState> this;
  TRefCountPtr<FRHIBlendState> TVar1;
  FRHIResource *local_res8;
  
  FRenderResource::FRenderResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticBlendState<7,0,1,1,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
              ::StaticResource);
  TStaticStateRHI<TStaticBlendState<7,0,1,1,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
  ::StaticResource._padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticBlendState__06_0A__00_00_0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0A___V__TRefCountPtr_VFRHIBlendState____PEAVFRHIBlendState____6B_
  ;
  TStaticStateRHI<TStaticBlendState<7,0,1,1,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
  ::StaticResource.StateRHI.Reference = (FRHIBlendState *)0x0;
  if ((GRHIGlobals.IsRHIInitialized == false) || (GRHIGlobals.SupportsRHIThread == false)) {
    BeginInitResource((FRenderResource *)
                      &TStaticStateRHI<TStaticBlendState<7,0,1,1,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
                       ::StaticResource,(FRenderCommandPipe *)0x0);
  }
  else {
    TVar1 = TStaticBlendState<7,0,1,1,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>
            ::CreateRHI();
    this = TStaticStateRHI<TStaticBlendState<7,0,1,1,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
           ::StaticResource.StateRHI;
    if (TVar1.Reference !=
        (FRHIBlendState *)
        &TStaticStateRHI<TStaticBlendState<7,0,1,1,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
         ::StaticResource.StateRHI) {
                    /* WARNING: Load size is inaccurate */
      TStaticStateRHI<TStaticBlendState<7,0,1,1,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
      ::StaticResource.StateRHI.Reference = *TVar1.Reference;
      *(undefined8 *)TVar1.Reference = 0;
      if (this.Reference != (FRHIBlendState *)0x0) {
        FRHIResource::Release((FRHIResource *)this.Reference);
      }
    }
    if (local_res8 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_res8);
      atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticBlendState<7,0,1,1,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
             ::StaticResource__);
      return;
    }
  }
  atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticBlendState<7,0,1,1,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
         ::StaticResource__);
  return;
}

// StaticResource'' @ 1410e2e50

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
`dynamic_initializer_for_'TStaticStateRHI<TStaticBlendState<7,0,4,5,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
::StaticResource__(void)

{
  TRefCountPtr<FRHIBlendState> this;
  TRefCountPtr<FRHIBlendState> TVar1;
  FRHIResource *local_res8;
  
  FRenderResource::FRenderResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticBlendState<7,0,4,5,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
              ::StaticResource);
  TStaticStateRHI<TStaticBlendState<7,0,4,5,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
  ::StaticResource._padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticBlendState__06_0A__03_04_0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0A___V__TRefCountPtr_VFRHIBlendState____PEAVFRHIBlendState____6B_
  ;
  TStaticStateRHI<TStaticBlendState<7,0,4,5,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
  ::StaticResource.StateRHI.Reference = (FRHIBlendState *)0x0;
  if ((GRHIGlobals.IsRHIInitialized == false) || (GRHIGlobals.SupportsRHIThread == false)) {
    BeginInitResource((FRenderResource *)
                      &TStaticStateRHI<TStaticBlendState<7,0,4,5,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
                       ::StaticResource,(FRenderCommandPipe *)0x0);
  }
  else {
    TVar1 = TStaticBlendState<7,0,4,5,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>
            ::CreateRHI();
    this = TStaticStateRHI<TStaticBlendState<7,0,4,5,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
           ::StaticResource.StateRHI;
    if (TVar1.Reference !=
        (FRHIBlendState *)
        &TStaticStateRHI<TStaticBlendState<7,0,4,5,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
         ::StaticResource.StateRHI) {
                    /* WARNING: Load size is inaccurate */
      TStaticStateRHI<TStaticBlendState<7,0,4,5,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
      ::StaticResource.StateRHI.Reference = *TVar1.Reference;
      *(undefined8 *)TVar1.Reference = 0;
      if (this.Reference != (FRHIBlendState *)0x0) {
        FRHIResource::Release((FRHIResource *)this.Reference);
      }
    }
    if (local_res8 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_res8);
      atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticBlendState<7,0,4,5,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
             ::StaticResource__);
      return;
    }
  }
  atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticBlendState<7,0,4,5,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
         ::StaticResource__);
  return;
}

// StaticResource'' @ 1410e2f10

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
`dynamic_initializer_for_'TStaticStateRHI<TStaticBlendState<7,0,4,5,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
::StaticResource__(void)

{
  TRefCountPtr<FRHIBlendState> this;
  TRefCountPtr<FRHIBlendState> TVar1;
  FRHIResource *local_res8;
  
  FRenderResource::FRenderResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticBlendState<7,0,4,5,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
              ::StaticResource);
  TStaticStateRHI<TStaticBlendState<7,0,4,5,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
  ::StaticResource._padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticBlendState__06_0A__03_04_0A__0A__00_0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0A___V__TRefCountPtr_VFRHIBlendState____PEAVFRHIBlendState____6B_
  ;
  TStaticStateRHI<TStaticBlendState<7,0,4,5,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
  ::StaticResource.StateRHI.Reference = (FRHIBlendState *)0x0;
  if ((GRHIGlobals.IsRHIInitialized == false) || (GRHIGlobals.SupportsRHIThread == false)) {
    BeginInitResource((FRenderResource *)
                      &TStaticStateRHI<TStaticBlendState<7,0,4,5,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
                       ::StaticResource,(FRenderCommandPipe *)0x0);
  }
  else {
    TVar1 = TStaticBlendState<7,0,4,5,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>
            ::CreateRHI();
    this = TStaticStateRHI<TStaticBlendState<7,0,4,5,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
           ::StaticResource.StateRHI;
    if (TVar1.Reference !=
        (FRHIBlendState *)
        &TStaticStateRHI<TStaticBlendState<7,0,4,5,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
         ::StaticResource.StateRHI) {
                    /* WARNING: Load size is inaccurate */
      TStaticStateRHI<TStaticBlendState<7,0,4,5,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
      ::StaticResource.StateRHI.Reference = *TVar1.Reference;
      *(undefined8 *)TVar1.Reference = 0;
      if (this.Reference != (FRHIBlendState *)0x0) {
        FRHIResource::Release((FRHIResource *)this.Reference);
      }
    }
    if (local_res8 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_res8);
      atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticBlendState<7,0,4,5,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
             ::StaticResource__);
      return;
    }
  }
  atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticBlendState<7,0,4,5,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
         ::StaticResource__);
  return;
}

// StaticResource'' @ 1410e2fd0

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
`dynamic_initializer_for_'TStaticStateRHI<TStaticBlendState<7,0,8,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
::StaticResource__(void)

{
  TRefCountPtr<FRHIBlendState> this;
  TRefCountPtr<FRHIBlendState> TVar1;
  FRHIResource *local_res8;
  
  FRenderResource::FRenderResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticBlendState<7,0,8,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
              ::StaticResource);
  TStaticStateRHI<TStaticBlendState<7,0,8,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
  ::StaticResource._padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticBlendState__06_0A__07_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0A___V__TRefCountPtr_VFRHIBlendState____PEAVFRHIBlendState____6B_
  ;
  TStaticStateRHI<TStaticBlendState<7,0,8,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
  ::StaticResource.StateRHI.Reference = (FRHIBlendState *)0x0;
  if ((GRHIGlobals.IsRHIInitialized == false) || (GRHIGlobals.SupportsRHIThread == false)) {
    BeginInitResource((FRenderResource *)
                      &TStaticStateRHI<TStaticBlendState<7,0,8,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
                       ::StaticResource,(FRenderCommandPipe *)0x0);
  }
  else {
    TVar1 = TStaticBlendState<7,0,8,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>
            ::CreateRHI();
    this = TStaticStateRHI<TStaticBlendState<7,0,8,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
           ::StaticResource.StateRHI;
    if (TVar1.Reference !=
        (FRHIBlendState *)
        &TStaticStateRHI<TStaticBlendState<7,0,8,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
         ::StaticResource.StateRHI) {
                    /* WARNING: Load size is inaccurate */
      TStaticStateRHI<TStaticBlendState<7,0,8,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
      ::StaticResource.StateRHI.Reference = *TVar1.Reference;
      *(undefined8 *)TVar1.Reference = 0;
      if (this.Reference != (FRHIBlendState *)0x0) {
        FRHIResource::Release((FRHIResource *)this.Reference);
      }
    }
    if (local_res8 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_res8);
      atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticBlendState<7,0,8,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
             ::StaticResource__);
      return;
    }
  }
  atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticBlendState<7,0,8,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
         ::StaticResource__);
  return;
}

// StaticResource'' @ 1410e3090

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
`dynamic_initializer_for_'TStaticStateRHI<TStaticBlendState<15,0,1,5,0,1,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
::StaticResource__(void)

{
  TRefCountPtr<FRHIBlendState> this;
  TRefCountPtr<FRHIBlendState> TVar1;
  FRHIResource *local_res8;
  
  FRenderResource::FRenderResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticBlendState<15,0,1,5,0,1,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
              ::StaticResource);
  TStaticStateRHI<TStaticBlendState<15,0,1,5,0,1,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
  ::StaticResource._padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticBlendState__0P__0A__00_04_0A__00_04_0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0A___V__TRefCountPtr_VFRHIBlendState____PEAVFRHIBlendState____6B_
  ;
  TStaticStateRHI<TStaticBlendState<15,0,1,5,0,1,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
  ::StaticResource.StateRHI.Reference = (FRHIBlendState *)0x0;
  if ((GRHIGlobals.IsRHIInitialized == false) || (GRHIGlobals.SupportsRHIThread == false)) {
    BeginInitResource((FRenderResource *)
                      &TStaticStateRHI<TStaticBlendState<15,0,1,5,0,1,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
                       ::StaticResource,(FRenderCommandPipe *)0x0);
  }
  else {
    TVar1 = TStaticBlendState<15,0,1,5,0,1,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>
            ::CreateRHI();
    this = TStaticStateRHI<TStaticBlendState<15,0,1,5,0,1,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
           ::StaticResource.StateRHI;
    if (TVar1.Reference !=
        (FRHIBlendState *)
        &TStaticStateRHI<TStaticBlendState<15,0,1,5,0,1,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
         ::StaticResource.StateRHI) {
                    /* WARNING: Load size is inaccurate */
      TStaticStateRHI<TStaticBlendState<15,0,1,5,0,1,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
      ::StaticResource.StateRHI.Reference = *TVar1.Reference;
      *(undefined8 *)TVar1.Reference = 0;
      if (this.Reference != (FRHIBlendState *)0x0) {
        FRHIResource::Release((FRHIResource *)this.Reference);
      }
    }
    if (local_res8 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_res8);
      atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticBlendState<15,0,1,5,0,1,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
             ::StaticResource__);
      return;
    }
  }
  atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticBlendState<15,0,1,5,0,1,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
         ::StaticResource__);
  return;
}

// StaticResource'' @ 1410e3150

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

// StaticResource'' @ 1410e3210

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
`dynamic_initializer_for_'TStaticStateRHI<TStaticBlendState<15,0,4,5,0,7,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
::StaticResource__(void)

{
  TRefCountPtr<FRHIBlendState> this;
  TRefCountPtr<FRHIBlendState> TVar1;
  FRHIResource *local_res8;
  
  FRenderResource::FRenderResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticBlendState<15,0,4,5,0,7,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
              ::StaticResource);
  TStaticStateRHI<TStaticBlendState<15,0,4,5,0,7,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
  ::StaticResource._padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticBlendState__0P__0A__03_04_0A__06_00_0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0A___V__TRefCountPtr_VFRHIBlendState____PEAVFRHIBlendState____6B_
  ;
  TStaticStateRHI<TStaticBlendState<15,0,4,5,0,7,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
  ::StaticResource.StateRHI.Reference = (FRHIBlendState *)0x0;
  if ((GRHIGlobals.IsRHIInitialized == false) || (GRHIGlobals.SupportsRHIThread == false)) {
    BeginInitResource((FRenderResource *)
                      &TStaticStateRHI<TStaticBlendState<15,0,4,5,0,7,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
                       ::StaticResource,(FRenderCommandPipe *)0x0);
  }
  else {
    TVar1 = TStaticBlendState<15,0,4,5,0,7,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>
            ::CreateRHI();
    this = TStaticStateRHI<TStaticBlendState<15,0,4,5,0,7,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
           ::StaticResource.StateRHI;
    if (TVar1.Reference !=
        (FRHIBlendState *)
        &TStaticStateRHI<TStaticBlendState<15,0,4,5,0,7,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
         ::StaticResource.StateRHI) {
                    /* WARNING: Load size is inaccurate */
      TStaticStateRHI<TStaticBlendState<15,0,4,5,0,7,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
      ::StaticResource.StateRHI.Reference = *TVar1.Reference;
      *(undefined8 *)TVar1.Reference = 0;
      if (this.Reference != (FRHIBlendState *)0x0) {
        FRHIResource::Release((FRHIResource *)this.Reference);
      }
    }
    if (local_res8 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_res8);
      atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticBlendState<15,0,4,5,0,7,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
             ::StaticResource__);
      return;
    }
  }
  atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticBlendState<15,0,4,5,0,7,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
         ::StaticResource__);
  return;
}

// StaticResource'' @ 1410e32d0

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
`dynamic_initializer_for_'TStaticStateRHI<TStaticBlendState<15,0,0,5,0,0,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
::StaticResource__(void)

{
  TRefCountPtr<FRHIBlendState> this;
  TRefCountPtr<FRHIBlendState> TVar1;
  FRHIResource *local_res8;
  
  FRenderResource::FRenderResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticBlendState<15,0,0,5,0,0,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
              ::StaticResource);
  TStaticStateRHI<TStaticBlendState<15,0,0,5,0,0,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
  ::StaticResource._padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticBlendState__0P__0A__0A__04_0A__0A__04_0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0A___V__TRefCountPtr_VFRHIBlendState____PEAVFRHIBlendState____6B_
  ;
  TStaticStateRHI<TStaticBlendState<15,0,0,5,0,0,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
  ::StaticResource.StateRHI.Reference = (FRHIBlendState *)0x0;
  if ((GRHIGlobals.IsRHIInitialized == false) || (GRHIGlobals.SupportsRHIThread == false)) {
    BeginInitResource((FRenderResource *)
                      &TStaticStateRHI<TStaticBlendState<15,0,0,5,0,0,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
                       ::StaticResource,(FRenderCommandPipe *)0x0);
  }
  else {
    TVar1 = TStaticBlendState<15,0,0,5,0,0,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>
            ::CreateRHI();
    this = TStaticStateRHI<TStaticBlendState<15,0,0,5,0,0,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
           ::StaticResource.StateRHI;
    if (TVar1.Reference !=
        (FRHIBlendState *)
        &TStaticStateRHI<TStaticBlendState<15,0,0,5,0,0,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
         ::StaticResource.StateRHI) {
                    /* WARNING: Load size is inaccurate */
      TStaticStateRHI<TStaticBlendState<15,0,0,5,0,0,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
      ::StaticResource.StateRHI.Reference = *TVar1.Reference;
      *(undefined8 *)TVar1.Reference = 0;
      if (this.Reference != (FRHIBlendState *)0x0) {
        FRHIResource::Release((FRHIResource *)this.Reference);
      }
    }
    if (local_res8 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_res8);
      atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticBlendState<15,0,0,5,0,0,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
             ::StaticResource__);
      return;
    }
  }
  atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticBlendState<15,0,0,5,0,0,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
         ::StaticResource__);
  return;
}

// StaticResource'' @ 1410e3390

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
`dynamic_initializer_for_'TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
::StaticResource__(void)

{
  TRefCountPtr<FRHIRasterizerState> this;
  FLLMScope local_res8 [2];
  FRHIResource *local_res10;
  FMemScope local_res18 [2];
  undefined2 local_18 [2];
  undefined8 local_14;
  undefined2 local_c;
  
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
    local_18[0] = 2;
    local_14 = 0;
    local_c = 0x100;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) <
        `class_TRefCountPtr<FRHIRasterizerState>___cdecl_RHICreateRasterizerState(FRasterizerStateInitializerRHI_const&___ptr64)'
        ::__l2::_thread_safe_static_guard_0__) {
      _Init_thread_header(&`class_TRefCountPtr<FRHIRasterizerState>___cdecl_RHICreateRasterizerState(FRasterizerStateInitializerRHI_const&___ptr64)'
                           ::__l2::_thread_safe_static_guard_0__);
      if (`class_TRefCountPtr<FRHIRasterizerState>___cdecl_RHICreateRasterizerState(FRasterizerStateInitializerRHI_const&___ptr64)'
          ::__l2::_thread_safe_static_guard_0__ == -1) {
        ::FName::FName(&`class_TRefCountPtr<FRHIRasterizerState>___cdecl_RHICreateRasterizerState(FRasterizerStateInitializerRHI_const&___ptr64)'
                        ::__l2::LLMScope_Name1153,L"RHIMisc/CreateRasterizerState");
        _Init_thread_footer(&`class_TRefCountPtr<FRHIRasterizerState>___cdecl_RHICreateRasterizerState(FRasterizerStateInitializerRHI_const&___ptr64)'
                             ::__l2::_thread_safe_static_guard_0__);
      }
    }
    FLLMScope::FLLMScope
              (local_res8,
               `class_TRefCountPtr<FRHIRasterizerState>___cdecl_RHICreateRasterizerState(FRasterizerStateInitializerRHI_const&___ptr64)'
               ::__l2::LLMScope_Name1153,false,None,Default,true);
    FMemScope::FMemScope
              (local_res18,
               &`class_TRefCountPtr<FRHIRasterizerState>___cdecl_RHICreateRasterizerState(FRasterizerStateInitializerRHI_const&___ptr64)'
                ::__l2::LLMScope_Name1153,true);
    (**(code **)(GDynamicRHI->_padding_ + 0x50))(GDynamicRHI,&local_res10,local_18);
    FMemScope::~FMemScope(local_res18);
    FLLMScope::~FLLMScope(local_res8);
    this = TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
           ::StaticResource.StateRHI;
    TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
    ::StaticResource.StateRHI.Reference = (FRHIRasterizerState *)local_res10;
    local_res10 = (FRHIResource *)0x0;
    if (this.Reference != (FRHIRasterizerState *)0x0) {
      FRHIResource::Release((FRHIResource *)this.Reference);
      if (local_res10 != (FRHIResource *)0x0) {
        FRHIResource::Release(local_res10);
        atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
               ::StaticResource__);
        return;
      }
    }
  }
  atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
         ::StaticResource__);
  return;
}

// `dynamic_initializer_for_'AudioThreadPriorityConsoleCommand'' @ 1410e3520

void __cdecl _dynamic_initializer_for__AudioThreadPriorityConsoleCommand__(void)

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
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = SetAudioTaskPriority;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&AudioThreadPriorityConsoleCommand,L"AudioThread.TaskPriority",
             L"Takes a single parameter of value `High`, `Normal`, `BackgroundHigh`, `BackgroundNormal` or `BackgroundLow`."
             ,(TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
               *)local_48,0);
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
  atexit(_dynamic_atexit_destructor_for__AudioThreadPriorityConsoleCommand__);
  return;
}

// `dynamic_initializer_for_'BufferVisualizationDumpFramesAsHDR'' @ 1410e3660

void __cdecl _dynamic_initializer_for__BufferVisualizationDumpFramesAsHDR__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&BufferVisualizationDumpFramesAsHDR,L"r.BufferVisualizationDumpFramesAsHDR",local_res8,
             L"When saving out buffer visualization materials in a HDR capable format\n0: Do not override default save format.\n1: Force HDR format for buffer visualization materials."
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__BufferVisualizationDumpFramesAsHDR__);
  return;
}

// `dynamic_initializer_for_'CPrio_ClearAudioChunkCacheReadRequest'' @ 1410e36b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__CPrio_ClearAudioChunkCacheReadRequest__(void)

{
  FAutoConsoleTaskPriority::FAutoConsoleTaskPriority
            (&CPrio_ClearAudioChunkCacheReadRequest,
             L"TaskGraph.TaskPriorities.ClearAudioChunkCacheReadRequest",
             L"Task and thread priority for an async task that clears FCacheElement::ReadRequest",
             BackgroundThreadPriority,MainQueue,MainQueue);
  atexit(_dynamic_atexit_destructor_for__CPrio_ClearAudioChunkCacheReadRequest__);
  return;
}

// `dynamic_initializer_for_'CVarAboveNormalAudioThreadPri'' @ 1410e3700

void __cdecl _dynamic_initializer_for__CVarAboveNormalAudioThreadPri__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarAboveNormalAudioThreadPri,L"AudioThread.AboveNormalPriority",
             &GCVarAboveNormalAudioThreadPri,L"0=Normal, 1=AboveNormal",0);
  atexit(_dynamic_atexit_destructor_for__CVarAboveNormalAudioThreadPri__);
  return;
}

// `dynamic_initializer_for_'CVarAlwaysLogCacheMisses'' @ 1410e3750

void __cdecl _dynamic_initializer_for__CVarAlwaysLogCacheMisses__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarAlwaysLogCacheMisses,L"au.streamcaching.AlwaysLogCacheMisses",
             &AlwaysLogCacheMissesCVar,
             L"When set to a nonzero value, all cache misses will be added to the audiomemreport.\n0: Don\'t log cache misses until au.streamcaching.StartProfiling is called. 1: Always log cache misses."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarAlwaysLogCacheMisses__);
  return;
}

// `dynamic_initializer_for_'CVarAttachedEmitterTransformOptimizationEnabled'' @ 1410e37a0

void __cdecl
CameraLensEffectCVars::_dynamic_initializer_for__CVarAttachedEmitterTransformOptimizationEnabled__
          (void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarAttachedEmitterTransformOptimizationEnabled,
             L"CameraLensEffect.AttachedEmitterTransformOptimizationEnabled",
             &bAttachedEmitterTransformOptimizationEnabled,
             L"If true, GetAttachedEmitterTransform avoids doing unnecessary work when the camera FOV matches the emitter\'s base FOV, and avoids recalculating constant values."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarAttachedEmitterTransformOptimizationEnabled__);
  return;
}

// `dynamic_initializer_for_'CVarAudioCommandFenceWaitTimeMs'' @ 1410e37f0

void __cdecl _dynamic_initializer_for__CVarAudioCommandFenceWaitTimeMs__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarAudioCommandFenceWaitTimeMs,L"AudioCommand.FenceWaitTimeMs",
             &GAudioCommandFenceWaitTimeMs,L"Sets number of ms for fence wait",0);
  atexit(_dynamic_atexit_destructor_for__CVarAudioCommandFenceWaitTimeMs__);
  return;
}

// `dynamic_initializer_for_'CVarAudioThreadUseSafeRunCommandOnGameThread'' @ 1410e3840

void __cdecl _dynamic_initializer_for__CVarAudioThreadUseSafeRunCommandOnGameThread__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarAudioThreadUseSafeRunCommandOnGameThread,
             L"AudioThread.UseSafeRunCommandOnGameThread",&GAudioThreadUseSafeRunCommandOnGameThread
             ,
             L"When active, limit commands sent to the game thread to run at a safe place inside a tick"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarAudioThreadUseSafeRunCommandOnGameThread__);
  return;
}

// `dynamic_initializer_for_'CVarBatchAudioAsyncBatchSize'' @ 1410e3890

void __cdecl _dynamic_initializer_for__CVarBatchAudioAsyncBatchSize__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarBatchAudioAsyncBatchSize,L"AudioThread.BatchAsyncBatchSize",
             &GBatchAudioAsyncBatchSize,
             L"When AudioThread.EnableBatchProcessing = 1, controls the number of audio commands grouped together for threading."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarBatchAudioAsyncBatchSize__);
  return;
}

// `dynamic_initializer_for_'CVarBatchGameThreadAudioCommands'' @ 1410e38e0

void __cdecl AudioCommandPrivate::_dynamic_initializer_for__CVarBatchGameThreadAudioCommands__(void)

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
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = BatchGameThreadAudioCommandsChangedCallback;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarBatchGameThreadAudioCommands,L"AudioThread.BatchCommands",
             &bBatchGameThreadAudioCommands,
             L"Batch audio commands that are created from the audio thread and executed on the game thread so that they are executed in a single task."
             ,(TDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy> *)local_48,0);
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
  atexit(_dynamic_atexit_destructor_for__CVarBatchGameThreadAudioCommands__);
  return;
}

// `dynamic_initializer_for_'CVarBlockForPendingLoadOnCacheOverflow'' @ 1410e3a20

void __cdecl _dynamic_initializer_for__CVarBlockForPendingLoadOnCacheOverflow__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarBlockForPendingLoadOnCacheOverflow,
             L"au.streamcaching.BlockForPendingLoadOnCacheOverflow",
             &BlockForPendingLoadOnCacheOverflowCVar,
             L"This cvar sets the default request priority for audio chunks that are about to play back, but aren\'t in the cache.\n0: When we blow the cache we clear any soundwave retainers. 1:When we blow the cache we attempt to cancel a load in flight."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarBlockForPendingLoadOnCacheOverflow__);
  return;
}

// `dynamic_initializer_for_'CVarBlueprintComponentInstancingFastPathDisabled'' @ 1410e3a70

void __cdecl _dynamic_initializer_for__CVarBlueprintComponentInstancingFastPathDisabled__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarBlueprintComponentInstancingFastPathDisabled,
             L"bp.ComponentInstancingFastPathDisabled",
             &GBlueprintComponentInstancingFastPathDisabled,
             L"Disable the Blueprint component instancing fast path.",0);
  atexit(_dynamic_atexit_destructor_for__CVarBlueprintComponentInstancingFastPathDisabled__);
  return;
}

// `dynamic_initializer_for_'CVarBlueprintNativePropertyInitFastPathDisabled'' @ 1410e3ac0

void __cdecl _dynamic_initializer_for__CVarBlueprintNativePropertyInitFastPathDisabled__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarBlueprintNativePropertyInitFastPathDisabled,
             L"bp.NativePropertyInitFastPathDisabled",&GBlueprintNativePropertyInitFastPathDisabled,
             L"Disable the native property initialization fast path.",0);
  atexit(_dynamic_atexit_destructor_for__CVarBlueprintNativePropertyInitFastPathDisabled__);
  return;
}

// `dynamic_initializer_for_'CVarBufferVisualizationDumpFrames'' @ 1410e3b10

void __cdecl _dynamic_initializer_for__CVarBufferVisualizationDumpFrames__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarBufferVisualizationDumpFrames,L"r.BufferVisualizationDumpFrames",local_res8,
             L"When screenshots or movies dumps are requested, also save out dumps of the current buffer visualization materials\n0:off (default)\n1:on"
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarBufferVisualizationDumpFrames__);
  return;
}

// `dynamic_initializer_for_'CVarDebugCacheDisplaySortMethod'' @ 1410e3b60

void __cdecl _dynamic_initializer_for__CVarDebugCacheDisplaySortMethod__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarDebugCacheDisplaySortMethod,L"au.streamcaching.CacheDisplaySortMethod",
             &DebugCacheDisplaySortMethod,
             L"What to sort on when showing the stream cache elements. Requries DEBUG_STREAM_CACHE.\n  0 (def): Recently Used.\n  1      : Load Time.\n  2      : Access Count.\n  3      : Retaining Handle Count.\n  4      : When Loaded.\n"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarDebugCacheDisplaySortMethod__);
  return;
}

// `dynamic_initializer_for_'CVarDebugDisplayCaches'' @ 1410e3bb0

void __cdecl _dynamic_initializer_for__CVarDebugDisplayCaches__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarDebugDisplayCaches,L"au.streamcaching.MaxCachesToDisplay",
             &DebugMaxElementsDisplayCVar,
             L"Sets the max amount of stream chunks to display on screen.\nn: Number of elements to display on screen."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarDebugDisplayCaches__);
  return;
}

// `dynamic_initializer_for_'CVarDebugView'' @ 1410e3c00

void __cdecl _dynamic_initializer_for__CVarDebugView__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarDebugView,L"au.streamcaching.DebugView",&DebugViewCVar,
             L"Controls Drawing the Debug Display for the Stream Cache.\n0: Legacy, 1: Default, 2: Averaged View, 3: High Detail View"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarDebugView__);
  return;
}

// `dynamic_initializer_for_'CVarEnableAudioCommandLogging'' @ 1410e3c50

void __cdecl _dynamic_initializer_for__CVarEnableAudioCommandLogging__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarEnableAudioCommandLogging,L"AudioThread.EnableAudioCommandLogging",
             &GCVarEnableAudioCommandLogging,L"0=Disbaled, 1=Enabled",0);
  atexit(_dynamic_atexit_destructor_for__CVarEnableAudioCommandLogging__);
  return;
}

// `dynamic_initializer_for_'CVarEnableBatchProcessing'' @ 1410e3ca0

void __cdecl _dynamic_initializer_for__CVarEnableBatchProcessing__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarEnableBatchProcessing,L"AudioThread.EnableBatchProcessing",
             &GCVarEnableBatchProcessing,
             L"Enables batch processing audio thread commands.\n0: Not Enabled, 1: Enabled",0);
  atexit(_dynamic_atexit_destructor_for__CVarEnableBatchProcessing__);
  return;
}

// `dynamic_initializer_for_'CVarEnableExhaustiveCacheSearches'' @ 1410e3cf0

void __cdecl _dynamic_initializer_for__CVarEnableExhaustiveCacheSearches__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarEnableExhaustiveCacheSearches,L"au.streamcaching.EnableExhaustiveCacheSearches",
             &EnableExhaustiveCacheSearchesCVar,
             L"Enables an exhaustive search of the cache in FindElementForKey.\n0: Rely on chunk offset. 1: Search using linear search"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarEnableExhaustiveCacheSearches__);
  return;
}

// `dynamic_initializer_for_'CVarEnableTrimmingRetainedAudio'' @ 1410e3d40

void __cdecl _dynamic_initializer_for__CVarEnableTrimmingRetainedAudio__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarEnableTrimmingRetainedAudio,L"au.streamcaching.EnableTrimmingRetainedAudio",
             &EnableTrimmingRetainedAudioCVar,
             L"When set > 0, we will trim retained audio when the stream cache goes over the memory limit.\n0: never trims retained audio, >0: will trim retained audio."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarEnableTrimmingRetainedAudio__);
  return;
}

// `dynamic_initializer_for_'CVarForceBlockForLoad'' @ 1410e3d90

void __cdecl _dynamic_initializer_for__CVarForceBlockForLoad__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarForceBlockForLoad,L"au.streamcaching.ForceBlockForLoad",&ForceBlockForLoadCVar,
             L"When set to a nonzero value, blocks GetLoadedChunk until the disk read is complete.\n"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarForceBlockForLoad__);
  return;
}

// `dynamic_initializer_for_'CVarGatherImplementers'' @ 1410e3de0

void __cdecl
ActorSoundParameterInterfaceConsoleVariables::_dynamic_initializer_for__CVarGatherImplementers__
          (void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarGatherImplementers,L"au.ActorSoundParameterInterface.GatherImplementers",
             &bGatherImplementers,
             L"When true, allows the interface to search for attached components and actors that implement the interface."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarGatherImplementers__);
  return;
}

// `dynamic_initializer_for_'CVarKeepCacheMissBufferOnFlush'' @ 1410e3e30

void __cdecl _dynamic_initializer_for__CVarKeepCacheMissBufferOnFlush__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarKeepCacheMissBufferOnFlush,L"au.streamcaching.KeepCacheMissBufferOnFlush",
             &KeepCacheMissBufferOnFlushCVar,
             L"If set to 1, this will maintain the buffer of recorded cache misses after calling AudioMemReport. Otherwise, calling audiomemreport will flush all previous recorded cache misses.\n1: All cache misses from the whole session will show up in audiomemreport. 0: Only cache misses since the previous call to audiomemreport will show up in the current audiomemreport."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarKeepCacheMissBufferOnFlush__);
  return;
}

// `dynamic_initializer_for_'CVarMaxConcurrentStreams'' @ 1410e3e80

void __cdecl _dynamic_initializer_for__CVarMaxConcurrentStreams__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarMaxConcurrentStreams,L"au.MaxConcurrentStreams",&MaxConcurrentStreamsCvar,
             L"Overrides the max concurrent streams.\n0: Not Overridden, >0 Overridden",0);
  atexit(_dynamic_atexit_destructor_for__CVarMaxConcurrentStreams__);
  return;
}

// `dynamic_initializer_for_'CVarMemoryLimitTrimPercentage'' @ 1410e3ed0

void __cdecl _dynamic_initializer_for__CVarMemoryLimitTrimPercentage__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarMemoryLimitTrimPercentage,L"au.streamcaching.MemoryLimitTrimPercentage",
             &MemoryLimitTrimPercentageCVar,
             L"When set > 0.0, we will trim percentage of memory cache audio per trim call audio when the stream cache goes over the memory limit.\n0.0: trims only the amount needed to allocate a single chunk, >0: that percentage of memory limit."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarMemoryLimitTrimPercentage__);
  return;
}

// `dynamic_initializer_for_'CVarNumSoundWavesToClearOnCacheOverflow'' @ 1410e3f20

void __cdecl _dynamic_initializer_for__CVarNumSoundWavesToClearOnCacheOverflow__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNumSoundWavesToClearOnCacheOverflow,
             L"au.streamcaching.NumSoundWavesToClearOnCacheOverflow",
             &NumSoundWavesToClearOnCacheOverflowCVar,
             L"When set > 0, we will attempt to release retainers for only that many sounds every time we have a cache overflow.\n0: reset all retained sounds on cache overflow, >0: evict this many sounds on any cache overflow."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarNumSoundWavesToClearOnCacheOverflow__);
  return;
}

// `dynamic_initializer_for_'CVarPlaybackRequestPriority'' @ 1410e3f70

void __cdecl _dynamic_initializer_for__CVarPlaybackRequestPriority__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarPlaybackRequestPriority,L"au.streamcaching.PlaybackRequestPriority",
             &PlaybackRequestPriorityCVar,
             L"This cvar sets the default request priority for audio chunks that are about to play back, but aren\'t in the cache.\n0: High, 1: Normal, 2: Below Normal, 3: Low, 4: Min"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarPlaybackRequestPriority__);
  return;
}

// `dynamic_initializer_for_'CVarReadRequestPriority'' @ 1410e3fc0

void __cdecl _dynamic_initializer_for__CVarReadRequestPriority__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarReadRequestPriority,L"au.streamcaching.ReadRequestPriority",
             &ReadRequestPriorityCVar,
             L"This cvar sets the default request priority for audio chunks when Stream Caching is turned on.\n0: High, 1: Normal, 2: Below Normal, 3: Low, 4: Min"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarReadRequestPriority__);
  return;
}

// `dynamic_initializer_for_'CVarSaveAudiomemReportOnCacheOverflow'' @ 1410e4010

void __cdecl _dynamic_initializer_for__CVarSaveAudiomemReportOnCacheOverflow__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarSaveAudiomemReportOnCacheOverflow,
             L"au.streamcaching.SaveAudiomemReportOnCacheOverflow",
             &SaveAudioMemReportOnCacheOverflowCVar,
             L"When set to one, we print an audiomemreport when the cache has overflown.\n0: Disabled, 1: Enabled"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarSaveAudiomemReportOnCacheOverflow__);
  return;
}

// `dynamic_initializer_for_'CVarSearchUsingChunkArray'' @ 1410e4060

void __cdecl _dynamic_initializer_for__CVarSearchUsingChunkArray__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarSearchUsingChunkArray,L"au.streamcaching.SearchUsingChunkArray",
             &SearchUsingChunkArrayCVar,
             L"If performing an exhaustive search of the cache, use the chunk array instead of the LRU (we give up knowing how far down the cache an element was).\n0: Search using LRU (linked list). 1: Search using Chunk Pool (TArray)"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarSearchUsingChunkArray__);
  return;
}

// `dynamic_initializer_for_'CVarSpoofFailedStreamChunkLoad'' @ 1410e40b0

void __cdecl _dynamic_initializer_for__CVarSpoofFailedStreamChunkLoad__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarSpoofFailedStreamChunkLoad,L"au.SpoofFailedStreamChunkLoad",
             &SpoofFailedStreamChunkLoad,
             L"Forces failing to load streamed chunks.\n0: Not Enabled, 1: Enabled",0);
  atexit(_dynamic_atexit_destructor_for__CVarSpoofFailedStreamChunkLoad__);
  return;
}

// `dynamic_initializer_for_'CVarStreamCacheSizeOverrideMB'' @ 1410e4100

void __cdecl _dynamic_initializer_for__CVarStreamCacheSizeOverrideMB__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarStreamCacheSizeOverrideMB,L"au.streamcaching.StreamCacheSizeOverrideMB",
             &StreamCacheSizeOverrideMBCVar,
             L"This cvar can be set to override the size of the cache.\n0: use cache size from project settings. n: the new cache size in megabytes."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarStreamCacheSizeOverrideMB__);
  return;
}

// `dynamic_initializer_for_'CVarSuspendAudioThread'' @ 1410e4150

void __cdecl _dynamic_initializer_for__CVarSuspendAudioThread__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarSuspendAudioThread,L"AudioThread.SuspendAudioThread",&GCVarSuspendAudioThread,
             L"0=Resume, 1=Suspend",1);
  atexit(_dynamic_atexit_destructor_for__CVarSuspendAudioThread__);
  return;
}

// `dynamic_initializer_for_'CVarTrimCacheWhenOverBudget'' @ 1410e41a0

void __cdecl _dynamic_initializer_for__CVarTrimCacheWhenOverBudget__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarTrimCacheWhenOverBudget,L"au.streamcaching.TrimCacheWhenOverBudget",
             &TrimCacheWhenOverBudgetCVar,
             L"When set to a nonzero value, TrimMemory will be called in AddOrTouchChunk to ensure we never go over budget.\n"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarTrimCacheWhenOverBudget__);
  return;
}

// `dynamic_initializer_for_'CVarUseAudioThreadSink'' @ 1410e41f0

void __cdecl _dynamic_initializer_for__CVarUseAudioThreadSink__(void)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  ulong64 *puVar5;
  undefined1 local_res8 [8];
  undefined1 local_58 [8];
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  local_58 = (undefined1  [8])0x0;
  local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_50.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
             (FWriteAccessScope *)&local_28);
  local_10 = &local_50;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_50);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &___7__TBaseStaticDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[3] = FAudioThreadInteractor::UseAudioThreadCVarSinkFunction;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  CVarUseAudioThreadSink._padding_ = (longlong)&___7FAutoConsoleVariableSink__6B_;
  CVarUseAudioThreadSink.Command =
       (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_58;
  CVarUseAudioThreadSink.Handle.Handle.ID = (FDelegateHandle)0;
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  puVar5 = (ulong64 *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0x60))
                     (IConsoleManager::Singleton,local_res8);
  CVarUseAudioThreadSink.Handle.Handle.ID = (FDelegateHandle)*puVar5;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
             (FWriteAccessScope *)&local_40);
  if ((local_50.DelegateSize != 0) &&
     (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_50,0,0,0x10);
    local_50.DelegateSize = 0;
  }
  if (local_40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
  }
  if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_50.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_58);
  atexit(_dynamic_atexit_destructor_for__CVarUseAudioThreadSink__);
  return;
}

// `dynamic_initializer_for_'CVarVirtualLoopsEnabled'' @ 1410e4380

void __cdecl _dynamic_initializer_for__CVarVirtualLoopsEnabled__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarVirtualLoopsEnabled,L"au.VirtualLoops.Enabled",&bVirtualLoopsEnabledCVar,
             L"Enables or disables whether virtualizing is supported for audio loops.\n",0);
  atexit(_dynamic_atexit_destructor_for__CVarVirtualLoopsEnabled__);
  return;
}

// `dynamic_initializer_for_'CVarVirtualLoopsForceUpdateListenerMoveDistance'' @ 1410e43d0

void __cdecl _dynamic_initializer_for__CVarVirtualLoopsForceUpdateListenerMoveDistance__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarVirtualLoopsForceUpdateListenerMoveDistance,
             L"au.VirtualLoops.ForceUpdateListenerMoveDistance",
             &VirtualLoopsForceUpdateListenerMoveDistanceCVar,
             L"Sets distance threshold required to force an update on virtualized sounds to check for if listener moves in a single frame over the given distance.\n"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarVirtualLoopsForceUpdateListenerMoveDistance__);
  return;
}

// `dynamic_initializer_for_'CVarVirtualLoopsPerfDistance'' @ 1410e4420

void __cdecl _dynamic_initializer_for__CVarVirtualLoopsPerfDistance__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarVirtualLoopsPerfDistance,L"au.VirtualLoops.PerfDistance",
             &VirtualLoopsPerfDistanceCVar,
             L"Sets virtual loop distance to scale update rate between min and max beyond max audible distance of sound.\n"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarVirtualLoopsPerfDistance__);
  return;
}

// `dynamic_initializer_for_'CVarVirtualLoopsUpdateRateMax'' @ 1410e4470

void __cdecl _dynamic_initializer_for__CVarVirtualLoopsUpdateRateMax__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarVirtualLoopsUpdateRateMax,L"au.VirtualLoops.UpdateRate.Max",
             &VirtualLoopsUpdateRateMaxCVar,
             L"Sets maximum rate to check if sound becomes audible again (at beyond sound\'s max audible distance + perf scaling distance).\n"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarVirtualLoopsUpdateRateMax__);
  return;
}

// `dynamic_initializer_for_'CVarVirtualLoopsUpdateRateMin'' @ 1410e44c0

void __cdecl _dynamic_initializer_for__CVarVirtualLoopsUpdateRateMin__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarVirtualLoopsUpdateRateMin,L"au.VirtualLoops.UpdateRate.Min",
             &VirtualLoopsUpdateRateMinCVar,
             L"Sets minimum rate to check if sound becomes audible again at sound\'s max audible distance.\n"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarVirtualLoopsUpdateRateMin__);
  return;
}

// `dynamic_initializer_for_'CVarWellCanvasDistanceFieldSmoothWidth'' @ 1410e4510

void __cdecl _dynamic_initializer_for__CVarWellCanvasDistanceFieldSmoothWidth__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarWellCanvasDistanceFieldSmoothWidth,L"Canvas.DistanceFieldSmoothness",
             &GBatchedElementSmoothWidth,
             L"Global sharpness of distance field fonts/shapes rendered by canvas.",0);
  atexit(_dynamic_atexit_destructor_for__CVarWellCanvasDistanceFieldSmoothWidth__);
  return;
}

// `dynamic_initializer_for_'ColorLoadInProgress'' @ 1410e4560

void __cdecl _dynamic_initializer_for__ColorLoadInProgress__(void)

{
  ColorLoadInProgress = FLinearColor::Black;
  return;
}

// `dynamic_initializer_for_'ColorOther'' @ 1410e4580

void __cdecl _dynamic_initializer_for__ColorOther__(void)

{
  ColorOther = FLinearColor::Gray;
  return;
}

// `dynamic_initializer_for_'ColorRetained'' @ 1410e45a0

void __cdecl _dynamic_initializer_for__ColorRetained__(void)

{
  ColorRetained = FLinearColor::Green;
  return;
}

// `dynamic_initializer_for_'ColorTrimmed'' @ 1410e45c0

void __cdecl _dynamic_initializer_for__ColorTrimmed__(void)

{
  ColorTrimmed = FLinearColor::Red;
  return;
}

// `dynamic_initializer_for_'CommandQueue'' @ 1410e45e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl AudioCommandPrivate::_dynamic_initializer_for__CommandQueue__(void)

{
  FTickFunction::FTickFunction((FTickFunction *)&CommandQueue);
  CommandQueue._padding_ = (longlong)&___7FGameThreadAudioCommandQueue_AudioCommandPrivate__6B_;
  CommandQueue.Commands.Tail =
       (atomic<TSpscQueue<AudioCommandPrivate::FAudioCommand,FMemory>::FNode_*>)0x0;
  CommandQueue.Commands.NumElems = (atomic<int>)0x0;
  CommandQueue.Commands.Tail =
       (atomic<TSpscQueue<AudioCommandPrivate::FAudioCommand,FMemory>::FNode_*>)
       FMemory::Malloc(0x50,0x10);
  *(undefined8 *)CommandQueue.Commands.Tail = 0;
  LOCK();
  CommandQueue.Commands.NumElems = (atomic<int>)0x0;
  UNLOCK();
  CommandQueue._padding_._0_1_ = 0;
  CommandQueue._padding_._2_1_ = CommandQueue._padding_._2_1_ & 0xb6 | 6;
  CommandQueue.bIsTicking = false;
  CommandQueue.Commands.Head = (FNode *)CommandQueue.Commands.Tail;
  CommandQueue.Commands.First = (FNode *)CommandQueue.Commands.Tail;
  CommandQueue.Commands.TailCopy = (FNode *)CommandQueue.Commands.Tail;
  atexit(_dynamic_atexit_destructor_for__CommandQueue__);
  return;
}

// `dynamic_initializer_for_'GAudioAsyncBatcher'' @ 1410e4680

void __cdecl _dynamic_initializer_for__GAudioAsyncBatcher__(void)

{
  atexit(_dynamic_atexit_destructor_for__GAudioAsyncBatcher__);
  return;
}

// `dynamic_initializer_for_'GBufferVisualizationData'' @ 1410e46a0

void __cdecl _dynamic_initializer_for__GBufferVisualizationData__(void)

{
  atexit(_dynamic_atexit_destructor_for__GBufferVisualizationData__);
  return;
}

// `dynamic_initializer_for_'GCameraShakeDebugInfoRecordLimitCVar'' @ 1410e46c0

void __cdecl _dynamic_initializer_for__GCameraShakeDebugInfoRecordLimitCVar__(void)

{
  float local_res8 [8];
  
  local_res8[0] = 2.0;
  TAutoConsoleVariable<float>::TAutoConsoleVariable<float>
            (&GCameraShakeDebugInfoRecordLimitCVar,L"r.CameraShakeDebug.InfoRecordLimit",local_res8,
             L"How many seconds to keep while recording camera shake debug info (defaults to 2 seconds)"
             ,0);
  atexit(_dynamic_atexit_destructor_for__GCameraShakeDebugInfoRecordLimitCVar__);
  return;
}

// `dynamic_initializer_for_'GCameraShakeDebugLargeGraphCVar'' @ 1410e4710

void __cdecl _dynamic_initializer_for__GCameraShakeDebugLargeGraphCVar__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = false;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&GCameraShakeDebugLargeGraphCVar,L"r.CameraShakeDebug.LargeGraph",local_res8,
             L"Draws larger graphs for camera shake debug info",0);
  atexit(_dynamic_atexit_destructor_for__GCameraShakeDebugLargeGraphCVar__);
  return;
}

// `dynamic_initializer_for_'GDisableProfilingAudioCacheCommand'' @ 1410e4760

void __cdecl _dynamic_initializer_for__GDisableProfilingAudioCacheCommand__(void)

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
    *puVar1 = &___7__TBaseStaticDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[3] = <lambda_28>::<lambda_invoker_cdecl>;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&GDisableProfilingAudioCacheCommand,L"au.streamcaching.StopProfiling",
             L"This will start a performance-intensive profiling mode for this streaming manager. Profile stats can be output with audiomemreport."
             ,(TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_48,0);
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
  atexit(_dynamic_atexit_destructor_for__GDisableProfilingAudioCacheCommand__);
  return;
}

// `dynamic_initializer_for_'GEnableProfilingAudioCacheCommand'' @ 1410e48a0

void __cdecl _dynamic_initializer_for__GEnableProfilingAudioCacheCommand__(void)

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
    *puVar1 = &___7__TBaseStaticDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[3] = <lambda_27>::<lambda_invoker_cdecl>;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&GEnableProfilingAudioCacheCommand,L"au.streamcaching.StartProfiling",
             L"This will start a performance-intensive profiling mode for this streaming manager. Profile stats can be output with audiomemreport."
             ,(TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_48,0);
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
  atexit(_dynamic_atexit_destructor_for__GEnableProfilingAudioCacheCommand__);
  return;
}

// `dynamic_initializer_for_'GFlushAudioCacheCommand'' @ 1410e49e0

void __cdecl _dynamic_initializer_for__GFlushAudioCacheCommand__(void)

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
    *puVar1 = &___7__TBaseStaticDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[3] = <lambda_25>::<lambda_invoker_cdecl>;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&GFlushAudioCacheCommand,L"au.streamcaching.FlushAudioCache",
             L"This will flush any non retained audio from the cache when Stream Caching is enabled."
             ,(TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_48,0);
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
  atexit(_dynamic_atexit_destructor_for__GFlushAudioCacheCommand__);
  return;
}

// `dynamic_initializer_for_'GResizeAudioCacheCommand'' @ 1410e4b20

void __cdecl _dynamic_initializer_for__GResizeAudioCacheCommand__(void)

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
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = <lambda_26>::<lambda_invoker_cdecl>;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&GResizeAudioCacheCommand,L"au.streamcaching.ResizeAudioCacheTo",
             L"This will try to cull enough audio chunks to shrink the audio stream cache to the new size if neccessary, and keep the cache at that size."
             ,(TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
               *)local_48,0);
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
  atexit(_dynamic_atexit_destructor_for__GResizeAudioCacheCommand__);
  return;
}

// `dynamic_initializer_for_'GShowCameraShakeDebugCVar'' @ 1410e4c60

void __cdecl _dynamic_initializer_for__GShowCameraShakeDebugCVar__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = false;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&GShowCameraShakeDebugCVar,L"r.CameraShakeDebug",local_res8,
             L"Show extra debug info for camera shakes (requires `showdebug CAMERA`)",0);
  atexit(_dynamic_atexit_destructor_for__GShowCameraShakeDebugCVar__);
  return;
}

// `dynamic_initializer_for_'GShowCameraShakeDebugLocationCVar'' @ 1410e4cb0

void __cdecl _dynamic_initializer_for__GShowCameraShakeDebugLocationCVar__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = true;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&GShowCameraShakeDebugLocationCVar,L"r.CameraShakeDebug.Location",local_res8,
             L"Whether to show camera shakes\' location modifications (defaults to true)",0);
  atexit(_dynamic_atexit_destructor_for__GShowCameraShakeDebugLocationCVar__);
  return;
}

// `dynamic_initializer_for_'GShowCameraShakeDebugRotationCVar'' @ 1410e4d00

void __cdecl _dynamic_initializer_for__GShowCameraShakeDebugRotationCVar__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = true;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&GShowCameraShakeDebugRotationCVar,L"r.CameraShakeDebug.Rotation",local_res8,
             L"Whether to show camera shakes\' rotation modifications (defaults to true)",0);
  atexit(_dynamic_atexit_destructor_for__GShowCameraShakeDebugRotationCVar__);
  return;
}

// `dynamic_initializer_for_'GSimpleElementVertexDeclaration'' @ 1410e4d50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__GSimpleElementVertexDeclaration__(void)

{
  code *pcVar1;
  bool bVar2;
  FRHICommandListBase *pFVar3;
  
  FRenderResource::FRenderResource((FRenderResource *)&GSimpleElementVertexDeclaration);
  GSimpleElementVertexDeclaration._0_8_ =
       &___7__TGlobalResource_VFSimpleElementVertexDeclaration___00__6B_;
  GSimpleElementVertexDeclaration._32_8_ = 0;
  if (GSimpleElementVertexDeclaration._24_4_ != -1) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("!IsInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderResource.h"
                       ,0xb9,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  GSimpleElementVertexDeclaration._29_1_ = 1;
  bVar2 = IsInRenderingThread();
  if (bVar2) {
    pcVar1 = *(code **)(GSimpleElementVertexDeclaration._0_8_ + 0x18);
    pFVar3 = FRenderResource::GetImmediateCommandList();
    (*pcVar1)(&GSimpleElementVertexDeclaration,pFVar3);
    atexit(_dynamic_atexit_destructor_for__GSimpleElementVertexDeclaration__);
    return;
  }
  BeginInitResource((FRenderResource *)&GSimpleElementVertexDeclaration,(FRenderCommandPipe *)0x0);
  atexit(_dynamic_atexit_destructor_for__GSimpleElementVertexDeclaration__);
  return;
}

// `dynamic_initializer_for_'InvisibleWall_NAME'' @ 1410e4e20

void __cdecl _dynamic_initializer_for__InvisibleWall_NAME__(void)

{
  FName::FName(&InvisibleWall_NAME,L"InvisibleWall");
  return;
}

// `dynamic_initializer_for_'LLMTagDeclaration_BoneContainer'' @ 1410e4e40

void __cdecl _dynamic_initializer_for__LLMTagDeclaration_BoneContainer__(void)

{
  FLLMTagDeclaration::FLLMTagDeclaration
            (&LLMTagDeclaration_BoneContainer,L"BoneContainer",(FName)0x0,(FName)0x0,(FName)0x0,
             (FName)0x0,None);
  return;
}

// `dynamic_initializer_for_'LogAudioStreamCaching'' @ 1410e4e90

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogAudioStreamCaching__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogAudioStreamCaching,L"LogAudioStreamCaching",Display,All);
  atexit(_dynamic_atexit_destructor_for__LogAudioStreamCaching__);
  return;
}

// `dynamic_initializer_for_'LogAudioTiming'' @ 1410e4ed0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogAudioTiming__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogAudioTiming,L"LogAudioTiming",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogAudioTiming__);
  return;
}

// `dynamic_initializer_for_'LogBatchedElements'' @ 1410e4f10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogBatchedElements__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogBatchedElements,L"LogBatchedElements",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogBatchedElements__);
  return;
}

// `dynamic_initializer_for_'LogBlueprint'' @ 1410e4f50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogBlueprint__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogBlueprint,L"LogBlueprint",Warning,All);
  atexit(_dynamic_atexit_destructor_for__LogBlueprint__);
  return;
}

// `dynamic_initializer_for_'LogBlueprintFuncLibrary'' @ 1410e4f90

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogBlueprintFuncLibrary__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogBlueprintFuncLibrary,L"LogBlueprintFuncLibrary",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogBlueprintFuncLibrary__);
  return;
}

// `dynamic_initializer_for_'LogBlueprintSpingMathLibrary'' @ 1410e4fd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogBlueprintSpingMathLibrary__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogBlueprintSpingMathLibrary,L"LogBlueprintSpingMathLibrary",Log,
             All);
  atexit(_dynamic_atexit_destructor_for__LogBlueprintSpingMathLibrary__);
  return;
}

// `dynamic_initializer_for_'LogBrush'' @ 1410e5010

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogBrush__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogBrush,L"LogBrush",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogBrush__);
  return;
}

// `dynamic_initializer_for_'LogCamera'' @ 1410e5050

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogCamera__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogCamera,L"LogCamera",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogCamera__);
  return;
}

// `dynamic_initializer_for_'LogCameraShake'' @ 1410e5090

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogCameraShake__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogCameraShake,L"LogCameraShake",Warning,All);
  atexit(_dynamic_atexit_destructor_for__LogCameraShake__);
  return;
}

// `dynamic_initializer_for_'LogSkeletalControl'' @ 1410e50d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogSkeletalControl__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogSkeletalControl,L"LogSkeletalControl",Warning,All);
  atexit(_dynamic_atexit_destructor_for__LogSkeletalControl__);
  return;
}

// `dynamic_initializer_for_'MetaSoundSource'' @ 1410e5110

void __cdecl Audio::Trace::Private::_dynamic_initializer_for__MetaSoundSource__(void)

{
  ::FString::FString(&MetaSoundSource,L"MetaSoundSource");
  atexit(_dynamic_atexit_destructor_for__MetaSoundSource__);
  return;
}

// `dynamic_initializer_for_'ModuleName'' @ 1410e5140

void __cdecl AssetRegistryConstants::_dynamic_initializer_for__ModuleName__(void)

{
  ::FName::FName(&ModuleName,"AssetRegistry");
  return;
}

// `dynamic_initializer_for_'NAME_UActorSoundParameterInterface_GetActorSoundParams'' @ 1410e5160

void __cdecl
_dynamic_initializer_for__NAME_UActorSoundParameterInterface_GetActorSoundParams__(void)

{
  FName::FName(&NAME_UActorSoundParameterInterface_GetActorSoundParams,L"GetActorSoundParams");
  return;
}

// `dynamic_initializer_for_'NAME_UCameraModifier_BlueprintModifyCamera'' @ 1410e5180

void __cdecl _dynamic_initializer_for__NAME_UCameraModifier_BlueprintModifyCamera__(void)

{
  FName::FName(&NAME_UCameraModifier_BlueprintModifyCamera,L"BlueprintModifyCamera");
  return;
}

// `dynamic_initializer_for_'NAME_UCameraModifier_BlueprintModifyPostProcess'' @ 1410e51a0

void __cdecl _dynamic_initializer_for__NAME_UCameraModifier_BlueprintModifyPostProcess__(void)

{
  FName::FName(&NAME_UCameraModifier_BlueprintModifyPostProcess,L"BlueprintModifyPostProcess");
  return;
}

// `dynamic_initializer_for_'ProxyFeatureName'' @ 1410e51c0

void __cdecl
SoundParameterControllerInterfacePrivate::_dynamic_initializer_for__ProxyFeatureName__(void)

{
  ::FName::FName(&ProxyFeatureName,"SoundParameterControllerInterface");
  return;
}

// `dynamic_initializer_for_'SoundCue'' @ 1410e51e0

void __cdecl Audio::Trace::Private::_dynamic_initializer_for__SoundCue__(void)

{
  ::FString::FString(&SoundCue,L"SoundCue");
  atexit(_dynamic_atexit_destructor_for__SoundCue__);
  return;
}

// `dynamic_initializer_for_'SoundCueTemplate'' @ 1410e5210

void __cdecl Audio::Trace::Private::_dynamic_initializer_for__SoundCueTemplate__(void)

{
  ::FString::FString(&SoundCueTemplate,L"SoundCueTemplate");
  atexit(_dynamic_atexit_destructor_for__SoundCueTemplate__);
  return;
}

// `dynamic_initializer_for_'SoundWave'' @ 1410e5240

void __cdecl Audio::Trace::Private::_dynamic_initializer_for__SoundWave__(void)

{
  ::FString::FString(&SoundWave,L"SoundWave");
  atexit(_dynamic_atexit_destructor_for__SoundWave__);
  return;
}

// `dynamic_initializer_for_'SoundWaveProcedural'' @ 1410e5270

void __cdecl Audio::Trace::Private::_dynamic_initializer_for__SoundWaveProcedural__(void)

{
  ::FString::FString(&SoundWaveProcedural,L"SoundWaveProcedural");
  atexit(_dynamic_atexit_destructor_for__SoundWaveProcedural__);
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AddCameraShake'' @ 1410e52a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AddCameraShake__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AddCameraShake == (FThreadSafeStaticStat<FStat_STAT_AddCameraShake>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AddCameraShake");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AddCameraShake,*pFVar1,L"AddCameraShake",
               "STATGROUP_Game","STATCAT_Advanced",L"Game",true,true,ST_int64,true,false,MCR_Invalid
              );
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AsyncLoadingTime'' @ 1410e5330

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AsyncLoadingTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AsyncLoadingTime == (FThreadSafeStaticStat<FStat_STAT_AsyncLoadingTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AsyncLoadingTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AsyncLoadingTime,*pFVar1,
               L"Async Loading Time","STATGROUP_AsyncLoad","STATCAT_Advanced",L"Async Load",false,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_BPCompInstancingFastPathMemory'' @ 1410e53c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_BPCompInstancingFastPathMemory__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_BPCompInstancingFastPathMemory ==
      (FThreadSafeStaticStat<FStat_STAT_BPCompInstancingFastPathMemory>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_BPCompInstancingFastPathMemory");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BPCompInstancingFastPathMemory,*pFVar1,
               L"BPComp Instancing Fast Path memory","STATGROUP_Memory","STATCAT_Advanced",L"Memory"
               ,true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_CreateWidget'' @ 1410e5450

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_CreateWidget__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_CreateWidget == (FThreadSafeStaticStat<FStat_STAT_CreateWidget>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_CreateWidget");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_CreateWidget,*pFVar1,L"UserWidget Create",
               "STATGROUP_Slate","STATCAT_Advanced",L"Slate",true,true,ST_int64,true,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_FAsyncPackage_CreateClustersGameThread'' @ 1410e54e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_FAsyncPackage_CreateClustersGameThread__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_FAsyncPackage_CreateClustersGameThread ==
      (FThreadSafeStaticStat<FStat_STAT_FAsyncPackage_CreateClustersGameThread>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_FAsyncPackage_CreateClustersGameThread");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FAsyncPackage_CreateClustersGameThread,
               *pFVar1,L"CreateClusters GT","STATGROUP_AsyncLoadGameThread","STATCAT_Advanced",
               L"Async Load Game Thread",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_FAsyncPackage_FlushAllAsyncLoadingGameThread'' @ 1410e5570

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
_dynamic_initializer_for__StatPtr_STAT_FAsyncPackage_FlushAllAsyncLoadingGameThread__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_FAsyncPackage_FlushAllAsyncLoadingGameThread ==
      (FThreadSafeStaticStat<FStat_STAT_FAsyncPackage_FlushAllAsyncLoadingGameThread>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_FAsyncPackage_FlushAllAsyncLoadingGameThread");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &StatPtr_STAT_FAsyncPackage_FlushAllAsyncLoadingGameThread,*pFVar1,
               L"Flush All Async Loads GT","STATGROUP_AsyncLoadGameThread","STATCAT_Advanced",
               L"Async Load Game Thread",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_FAsyncPackage_FlushAsyncLoadingGameThread'' @ 1410e5600

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
_dynamic_initializer_for__StatPtr_STAT_FAsyncPackage_FlushAsyncLoadingGameThread__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_FAsyncPackage_FlushAsyncLoadingGameThread ==
      (FThreadSafeStaticStat<FStat_STAT_FAsyncPackage_FlushAsyncLoadingGameThread>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_FAsyncPackage_FlushAsyncLoadingGameThread");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FAsyncPackage_FlushAsyncLoadingGameThread,
               *pFVar1,L"Flush Async Loading GT","STATGROUP_AsyncLoadGameThread","STATCAT_Advanced",
               L"Async Load Game Thread",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_FAsyncPackage_PostLoadInstancesGameThread'' @ 1410e5690

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
_dynamic_initializer_for__StatPtr_STAT_FAsyncPackage_PostLoadInstancesGameThread__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_FAsyncPackage_PostLoadInstancesGameThread ==
      (FThreadSafeStaticStat<FStat_STAT_FAsyncPackage_PostLoadInstancesGameThread>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_FAsyncPackage_PostLoadInstancesGameThread");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FAsyncPackage_PostLoadInstancesGameThread,
               *pFVar1,L"PostLoadInstances GT","STATGROUP_AsyncLoadGameThread","STATCAT_Advanced",
               L"Async Load Game Thread",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_FAsyncPackage_PostLoadObjectsGameThread'' @ 1410e5720

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_FAsyncPackage_PostLoadObjectsGameThread__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_FAsyncPackage_PostLoadObjectsGameThread ==
      (FThreadSafeStaticStat<FStat_STAT_FAsyncPackage_PostLoadObjectsGameThread>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_FAsyncPackage_PostLoadObjectsGameThread");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FAsyncPackage_PostLoadObjectsGameThread,
               *pFVar1,L"PostLoadObjects GT","STATGROUP_AsyncLoadGameThread","STATCAT_Advanced",
               L"Async Load Game Thread",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_FAsyncPackage_TickAsyncLoadingGameThread'' @ 1410e57b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_FAsyncPackage_TickAsyncLoadingGameThread__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_FAsyncPackage_TickAsyncLoadingGameThread ==
      (FThreadSafeStaticStat<FStat_STAT_FAsyncPackage_TickAsyncLoadingGameThread>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_FAsyncPackage_TickAsyncLoadingGameThread");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FAsyncPackage_TickAsyncLoadingGameThread,
               *pFVar1,L"TickAsyncLoading GT","STATGROUP_AsyncLoadGameThread","STATCAT_Advanced",
               L"Async Load Game Thread",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_PersistentUberGraphFrameMemory'' @ 1410e5840

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_PersistentUberGraphFrameMemory__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_PersistentUberGraphFrameMemory ==
      (FThreadSafeStaticStat<FStat_STAT_PersistentUberGraphFrameMemory>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_PersistentUberGraphFrameMemory");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PersistentUberGraphFrameMemory,*pFVar1,
               L"Persistent Uber Graph Frame memory","STATGROUP_Memory","STATCAT_Advanced",L"Memory"
               ,true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Audio_ActorSoundParameterInterface_h__Script_Engine_4246164895'' @ 1410e58d0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Audio_ActorSoundParameterInterface_h__Script_Engine_4246164895__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Audio_ActorSoundParameterInterface_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraActor_h__Script_Engine_1932756532'' @ 1410e5910

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraActor_h__Script_Engine_1932756532__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraActor_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraComponent_h__Script_Engine_2064482097'' @ 1410e5950

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraComponent_h__Script_Engine_2064482097__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraComponent_h__Script_Engine_Statics
             ::ClassInfo,2,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraLensEffectInterface_h__Script_Engine_1661526181'' @ 1410e5990

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraLensEffectInterface_h__Script_Engine_1661526181__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraLensEffectInterface_h__Script_Engine_Statics
             ::ClassInfo,2,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraLensEffectInterface_h__Script_Engine_Statics
             ::ScriptStructInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraLensEffectInterface_h__Script_Engine_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraModifier_CameraShake_h__Script_Engine_4225538704'' @ 1410e59e0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraModifier_CameraShake_h__Script_Engine_4225538704__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraModifier_CameraShake_h__Script_Engine_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraModifier_CameraShake_h__Script_Engine_Statics
             ::ScriptStructInfo,2,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraModifier_h__Script_Engine_2833217081'' @ 1410e5a30

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraModifier_h__Script_Engine_2833217081__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraModifier_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_BlockingVolume_h__Script_Engine_1701727141'' @ 1410e5a70

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_BlockingVolume_h__Script_Engine_1701727141__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_BlockingVolume_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_BlueprintGeneratedClass_h__Script_Engine_1621789255'' @ 1410e5ab0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_BlueprintGeneratedClass_h__Script_Engine_1621789255__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_BlueprintGeneratedClass_h__Script_Engine_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_BlueprintGeneratedClass_h__Script_Engine_Statics
             ::ScriptStructInfo,8,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Blueprint_h__Script_Engine_1548465060'' @ 1410e5b00

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Blueprint_h__Script_Engine_1548465060__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Blueprint_h__Script_Engine_Statics
             ::ClassInfo,2,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Blueprint_h__Script_Engine_Statics
             ::ScriptStructInfo,6,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Blueprint_h__Script_Engine_Statics
             ::EnumInfo,4);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_BookMark_h__Script_Engine_2149407553'' @ 1410e5b50

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_BookMark_h__Script_Engine_2149407553__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_BookMark_h__Script_Engine_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_BookMark_h__Script_Engine_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_BrushBuilder_h__Script_Engine_2646138389'' @ 1410e5ba0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_BrushBuilder_h__Script_Engine_2646138389__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_BrushBuilder_h__Script_Engine_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_BrushBuilder_h__Script_Engine_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_BrushShape_h__Script_Engine_1756355987'' @ 1410e5bf0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_BrushShape_h__Script_Engine_1756355987__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_BrushShape_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Brush_h__Script_Engine_1515702944'' @ 1410e5c30

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Brush_h__Script_Engine_1515702944__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Brush_h__Script_Engine_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Brush_h__Script_Engine_Statics
             ::ScriptStructInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Brush_h__Script_Engine_Statics
             ::EnumInfo,2);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_CameraBlockingVolume_h__Script_Engine_1157967789'' @ 1410e5c80

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_CameraBlockingVolume_h__Script_Engine_1157967789__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_CameraBlockingVolume_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintFunctionLibrary_h__Script_Engine_36602280'' @ 1410e5cc0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintFunctionLibrary_h__Script_Engine_36602280__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintFunctionLibrary_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintInstancedStructLibrary_h__Script_Engine_2723732859'' @ 1410e5d00

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintInstancedStructLibrary_h__Script_Engine_2723732859__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintInstancedStructLibrary_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintInstancedStructLibrary_h__Script_Engine_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintMapLibrary_h__Script_Engine_1779347213'' @ 1410e5d50

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintMapLibrary_h__Script_Engine_1779347213__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintMapLibrary_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintSetLibrary_h__Script_Engine_2320882579'' @ 1410e5d90

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintSetLibrary_h__Script_Engine_2320882579__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintSetLibrary_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_AudioVolume_h__Script_Engine_76576492'' @ 1410e5dd0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_AudioVolume_h__Script_Engine_76576492__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_AudioVolume_h__Script_Engine_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_AudioVolume_h__Script_Engine_Statics
             ::ScriptStructInfo,3,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_AudioVolume_h__Script_Engine_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Audio_AudioWidgetSubsystem_h__Script_Engine_3042702357'' @ 1410e5e20

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Audio_AudioWidgetSubsystem_h__Script_Engine_3042702357__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Audio_AudioWidgetSubsystem_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Audio_SoundParameterControllerInterface_h__Script_Engine_2202921909'' @ 1410e5e60

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Audio_SoundParameterControllerInterface_h__Script_Engine_2202921909__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Audio_SoundParameterControllerInterface_h__Script_Engine_Statics
             ::ClassInfo,2,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'__GTraceCounterAudioStreamCache_Loads'' @ 1410e5ea0

void __cdecl _dynamic_initializer_for____GTraceCounterAudioStreamCache_Loads__(void)

{
  __GTraceCounterAudioStreamCache_Loads.CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"AudioStreamCache Loads",TraceCounterType_Int,TraceCounterDisplayHint_None);
  LOCK();
  __GTraceCounterAudioStreamCache_Loads.CounterId._2_2_ = 0;
  UNLOCK();
  atexit(_dynamic_atexit_destructor_for____GTraceCounterAudioStreamCache_Loads__);
  return;
}

// `dynamic_initializer_for_'__GTraceCounterAudioStreamCache_Loads_Playback'' @ 1410e5ee0

void __cdecl _dynamic_initializer_for____GTraceCounterAudioStreamCache_Loads_Playback__(void)

{
  __GTraceCounterAudioStreamCache_Loads_Playback.CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"AudioStreamCache Loads Playback",TraceCounterType_Int,
                  TraceCounterDisplayHint_None);
  LOCK();
  __GTraceCounterAudioStreamCache_Loads_Playback.CounterId._2_2_ = 0;
  UNLOCK();
  atexit(_dynamic_atexit_destructor_for____GTraceCounterAudioStreamCache_Loads_Playback__);
  return;
}

// `dynamic_initializer_for_'__GTraceCounterAudioStreamCache_Loads_Request'' @ 1410e5f20

void __cdecl _dynamic_initializer_for____GTraceCounterAudioStreamCache_Loads_Request__(void)

{
  __GTraceCounterAudioStreamCache_Loads_Request.CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"AudioStreamCache Loads Request",TraceCounterType_Int,
                  TraceCounterDisplayHint_None);
  LOCK();
  __GTraceCounterAudioStreamCache_Loads_Request.CounterId._2_2_ = 0;
  UNLOCK();
  atexit(_dynamic_atexit_destructor_for____GTraceCounterAudioStreamCache_Loads_Request__);
  return;
}

// NewStructOps @ 147670d10

void * __cdecl Z_Construct_UScriptStruct_FBlueprintMacroCosmeticInfo_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FBlueprintMacroCosmeticInfo,&UE::CoreUObject::Private::Construct<FBlueprintMacroCosmeticInfo>,&UE::CoreUObject::Private::ConstructForTests<FBlueprintMacroCosmeticInfo>,&UE::CoreUObject::Private::Destruct<FBlueprintMacroCosmeticInfo>,&UE::CoreUObject::Private::Copy<FBlueprintMacroCosmeticInfo>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UAudioParameterConversionStatics_StringArrayToAudioParameter @ 147670d50

UFunction * __cdecl
Z_Construct_UFunction_UAudioParameterConversionStatics_StringArrayToAudioParameter(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioParameterConversionStatics_StringArrayToAudioParameter_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UCameraLensEffectInterface_GetParticleComponents @ 147670d90

UFunction * __cdecl Z_Construct_UFunction_UCameraLensEffectInterface_GetParticleComponents(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UCameraLensEffectInterface_GetParticleComponents_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAudioParameterConversionStatics_StringToAudioParameter @ 147670dd0

UFunction * __cdecl
Z_Construct_UFunction_UAudioParameterConversionStatics_StringToAudioParameter(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioParameterConversionStatics_StringToAudioParameter_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 147670e10

void * __cdecl Z_Construct_UScriptStruct_FBPVariableMetaDataEntry_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FBPVariableMetaDataEntry,&UE::CoreUObject::Private::Construct<FBPVariableMetaDataEntry>,&UE::CoreUObject::Private::ConstructForTests<FBPVariableMetaDataEntry>,&UE::CoreUObject::Private::Destruct<FBPVariableMetaDataEntry>,&UE::CoreUObject::Private::Copy<FBPVariableMetaDataEntry>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UCameraLensEffectInterface_GetPrimaryParticleComponent @ 147670e50

UFunction * __cdecl
Z_Construct_UFunction_UCameraLensEffectInterface_GetPrimaryParticleComponent(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UCameraLensEffectInterface_GetPrimaryParticleComponent_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 147670fd0

void * __cdecl Z_Construct_UScriptStruct_FBPVariableDescription_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 200;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FBPVariableDescription,&UE::CoreUObject::Private::Construct<FBPVariableDescription>,&UE::CoreUObject::Private::ConstructForTests<FBPVariableDescription>,&UE::CoreUObject::Private::Destruct<FBPVariableDescription>,&UE::CoreUObject::Private::Copy<FBPVariableDescription>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UBrushBuilder @ 147671130

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UBrushBuilder(void)

{
  if (Z_Registration_Info_UClass_UBrushBuilder.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UBrushBuilder.OuterSingleton,
               &Z_Construct_UClass_UBrushBuilder_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UBrushBuilder.OuterSingleton;
}

// Z_Construct_UScriptStruct_FBuilderPoly @ 147671170

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FBuilderPoly(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FBuilderPoly.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FBuilderPoly.InnerSingleton,
               &Z_Construct_UScriptStruct_FBuilderPoly_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FBuilderPoly.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FBuilderPoly.InnerSingleton;
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

// NewStructOps @ 1476712b0

void * __cdecl Z_Construct_UScriptStruct_FBuilderPoly_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FBuilderPoly,&UE::CoreUObject::Private::Construct<FBuilderPoly>,&UE::CoreUObject::Private::ConstructForTests<FBuilderPoly>,&UE::CoreUObject::Private::Destruct<FBuilderPoly>,&UE::CoreUObject::Private::Copy<FBuilderPoly>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1476712f0

void * __cdecl Z_Construct_UScriptStruct_FBPInterfaceDescription_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FBPInterfaceDescription,&UE::CoreUObject::Private::Construct<FBPInterfaceDescription>,&UE::CoreUObject::Private::ConstructForTests<FBPInterfaceDescription>,&UE::CoreUObject::Private::Destruct<FBPInterfaceDescription>,&UE::CoreUObject::Private::Copy<FBPInterfaceDescription>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1476713f0

void * __cdecl
Z_Construct_UScriptStruct_FCameraLensInterfaceClassSupport_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FCameraLensInterfaceClassSupport,&UE::CoreUObject::Private::Construct<FCameraLensInterfaceClassSupport>,&UE::CoreUObject::Private::ConstructForTests<FCameraLensInterfaceClassSupport>,&UE::CoreUObject::Private::Destruct<FCameraLensInterfaceClassSupport>,&UE::CoreUObject::Private::Copy<FCameraLensInterfaceClassSupport>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_NotifyBadParams_SetBit @ 147671430

void __cdecl Z_Construct_UClass_UBrushBuilder_Statics::NewProp_NotifyBadParams_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x48) = *(uint *)((longlong)param_1 + 0x48) | 1;
  return;
}

// NewProp_MergeCoplanars_SetBit @ 147671440

void __cdecl Z_Construct_UClass_UBrushBuilder_Statics::NewProp_MergeCoplanars_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x78) = *(uint *)((longlong)param_1 + 0x78) | 1;
  return;
}

// NewStructOps @ 147671450

void * __cdecl Z_Construct_UScriptStruct_FEditedDocumentInfo_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x38;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FEditedDocumentInfo,&UE::CoreUObject::Private::Construct<FEditedDocumentInfo>,&UE::CoreUObject::Private::ConstructForTests<FEditedDocumentInfo>,&UE::CoreUObject::Private::Destruct<FEditedDocumentInfo>,&UE::CoreUObject::Private::PostSerialize<FEditedDocumentInfo>,&UE::CoreUObject::Private::Copy<FEditedDocumentInfo>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// EInterfaceValidResult_StaticEnum @ 147671490

UEnum * __cdecl EInterfaceValidResult_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EInterfaceValidResult.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EInterfaceValidResult.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EInterfaceValidResult,(UObject *)pUVar1,
                       L"EInterfaceValidResult");
  }
  return Z_Registration_Info_UEnum_EInterfaceValidResult.OuterSingleton;
}

// NewStructOps @ 1476714d0

void * __cdecl Z_Construct_UScriptStruct_FBPEditorBookmarkNode_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FBPEditorBookmarkNode,&UE::CoreUObject::Private::Construct<FBPEditorBookmarkNode>,&UE::CoreUObject::Private::ConstructForTests<FBPEditorBookmarkNode>,&UE::CoreUObject::Private::Destruct<FBPEditorBookmarkNode>,&UE::CoreUObject::Private::Copy<FBPEditorBookmarkNode>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_GetInterfaceClass @ 147671510

UFunction * __cdecl
Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_GetInterfaceClass(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_GetInterfaceClass_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_IsInterfaceClassValid @ 147671550

UFunction * __cdecl
Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_IsInterfaceClassValid(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_IsInterfaceClassValid_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// EShouldCookBlueprintPropertyGuids_StaticEnum @ 147671590

UEnum * __cdecl EShouldCookBlueprintPropertyGuids_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EShouldCookBlueprintPropertyGuids.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EShouldCookBlueprintPropertyGuids.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EShouldCookBlueprintPropertyGuids,(UObject *)pUVar1,
                       L"EShouldCookBlueprintPropertyGuids");
  }
  return Z_Registration_Info_UEnum_EShouldCookBlueprintPropertyGuids.OuterSingleton;
}

// Z_Construct_UClass_UBlueprintSetLibrary @ 147671690

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UBlueprintSetLibrary(void)

{
  if (Z_Registration_Info_UClass_UBlueprintSetLibrary.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UBlueprintSetLibrary.OuterSingleton,
               &Z_Construct_UClass_UBlueprintSetLibrary_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UBlueprintSetLibrary.OuterSingleton;
}

// NewProp_bRecompileOnLoad_SetBit @ 1476716d0

void __cdecl Z_Construct_UClass_UBlueprint_Statics::NewProp_bRecompileOnLoad_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x61) = *(byte *)((longlong)param_1 + 0x61) | 1;
  return;
}

// NewProp_bHasBeenRegenerated_SetBit @ 1476716e0

void __cdecl
Z_Construct_UClass_UBlueprint_Statics::NewProp_bHasBeenRegenerated_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x61) = *(byte *)((longlong)param_1 + 0x61) | 2;
  return;
}

// NewProp_bIsRegeneratingOnLoad_SetBit @ 1476716f0

void __cdecl
Z_Construct_UClass_UBlueprint_Statics::NewProp_bIsRegeneratingOnLoad_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x61) = *(byte *)((longlong)param_1 + 0x61) | 4;
  return;
}

// Z_Construct_UFunction_UBlueprintSetLibrary_Set_Add @ 147671730

UFunction * __cdecl Z_Construct_UFunction_UBlueprintSetLibrary_Set_Add(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintSetLibrary_Set_Add_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_ABrushShape @ 147671770

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ABrushShape(void)

{
  if (Z_Registration_Info_UClass_ABrushShape.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ABrushShape.OuterSingleton,
               &Z_Construct_UClass_ABrushShape_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ABrushShape.OuterSingleton;
}

// Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_IsInterfaceValid @ 1476717b0

UFunction * __cdecl
Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_IsInterfaceValid(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_IsInterfaceValid_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UBlueprintSetLibrary_Set_AddItems @ 147671880

UFunction * __cdecl Z_Construct_UFunction_UBlueprintSetLibrary_Set_AddItems(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintSetLibrary_Set_AddItems_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_SetInterfaceClass @ 1476718c0

UFunction * __cdecl
Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_SetInterfaceClass(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_SetInterfaceClass_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UBlueprintSetLibrary_Set_Clear @ 1476719c0

UFunction * __cdecl Z_Construct_UFunction_UBlueprintSetLibrary_Set_Clear(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintSetLibrary_Set_Clear_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 147671a00

void __cdecl
Z_Construct_UFunction_UBlueprintSetLibrary_Set_Contains_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x54) = 1;
  return;
}

// Z_Construct_UFunction_UBlueprintSetLibrary_Set_Contains @ 147671a10

UFunction * __cdecl Z_Construct_UFunction_UBlueprintSetLibrary_Set_Contains(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintSetLibrary_Set_Contains_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UActorSoundParameterInterface @ 147671a50

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UActorSoundParameterInterface(void)

{
  if (Z_Registration_Info_UClass_UActorSoundParameterInterface.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UActorSoundParameterInterface.OuterSingleton,
               &Z_Construct_UClass_UActorSoundParameterInterface_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UActorSoundParameterInterface.OuterSingleton;
}

// Z_Construct_UFunction_UBlueprintSetLibrary_Set_Difference @ 147671af0

UFunction * __cdecl Z_Construct_UFunction_UBlueprintSetLibrary_Set_Difference(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintSetLibrary_Set_Difference_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UBlueprintSetLibrary_Set_GetItemByIndex @ 147671c20

UFunction * __cdecl Z_Construct_UFunction_UBlueprintSetLibrary_Set_GetItemByIndex(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintSetLibrary_Set_GetItemByIndex_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UActorSoundParameterInterface_GetActorSoundParams @ 147671c60

UFunction * __cdecl Z_Construct_UFunction_UActorSoundParameterInterface_GetActorSoundParams(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UActorSoundParameterInterface_GetActorSoundParams_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UBlueprintSetLibrary_Set_GetLastIndex @ 147671ca0

UFunction * __cdecl Z_Construct_UFunction_UBlueprintSetLibrary_Set_GetLastIndex(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintSetLibrary_Set_GetLastIndex_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UCameraModifier_CameraShake @ 147671ce0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UCameraModifier_CameraShake(void)

{
  if (Z_Registration_Info_UClass_UCameraModifier_CameraShake.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UCameraModifier_CameraShake.OuterSingleton,
               &Z_Construct_UClass_UCameraModifier_CameraShake_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UCameraModifier_CameraShake.OuterSingleton;
}

// Z_Construct_UScriptStruct_FActiveCameraShakeInfo @ 147671d20

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FActiveCameraShakeInfo(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FActiveCameraShakeInfo.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FActiveCameraShakeInfo.InnerSingleton,
               &Z_Construct_UScriptStruct_FActiveCameraShakeInfo_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FActiveCameraShakeInfo.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FActiveCameraShakeInfo.InnerSingleton;
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

// Z_Construct_UScriptStruct_FPooledCameraShakes @ 147671da0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPooledCameraShakes(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPooledCameraShakes.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPooledCameraShakes.InnerSingleton,
               &Z_Construct_UScriptStruct_FPooledCameraShakes_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPooledCameraShakes.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FPooledCameraShakes.InnerSingleton;
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

// NewStructOps @ 147671e20

void * __cdecl Z_Construct_UScriptStruct_FPooledCameraShakes_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPooledCameraShakes,&UE::CoreUObject::Private::Construct<FPooledCameraShakes>,&UE::CoreUObject::Private::ConstructForTests<FPooledCameraShakes>,&UE::CoreUObject::Private::Destruct<FPooledCameraShakes>,&UE::CoreUObject::Private::Copy<FPooledCameraShakes>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UBlueprintSetLibrary_Set_Intersection @ 147671e60

UFunction * __cdecl Z_Construct_UFunction_UBlueprintSetLibrary_Set_Intersection(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintSetLibrary_Set_Intersection_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 147671ea0

void __cdecl
Z_Construct_UFunction_UBlueprintSetLibrary_Set_IsEmpty_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x50) = 1;
  return;
}

// Z_Construct_UFunction_UBlueprintSetLibrary_Set_IsEmpty @ 147671eb0

UFunction * __cdecl Z_Construct_UFunction_UBlueprintSetLibrary_Set_IsEmpty(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintSetLibrary_Set_IsEmpty_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bIsCustomInitialized_SetBit @ 147671ef0

void __cdecl
Z_Construct_UScriptStruct_FActiveCameraShakeInfo_Statics::NewProp_bIsCustomInitialized_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// NewStructOps @ 147671f00

void * __cdecl Z_Construct_UScriptStruct_FActiveCameraShakeInfo_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FActiveCameraShakeInfo,&UE::CoreUObject::Private::Construct<FActiveCameraShakeInfo>,&UE::CoreUObject::Private::ConstructForTests<FActiveCameraShakeInfo>,&UE::CoreUObject::Private::Destruct<FActiveCameraShakeInfo>,&UE::CoreUObject::Private::Copy<FActiveCameraShakeInfo>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_ReturnValue_SetBit @ 147671f40

void __cdecl
Z_Construct_UFunction_UBlueprintSetLibrary_Set_IsNotEmpty_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x50) = 1;
  return;
}

// Z_Construct_UFunction_UBlueprintSetLibrary_Set_IsNotEmpty @ 147671f50

UFunction * __cdecl Z_Construct_UFunction_UBlueprintSetLibrary_Set_IsNotEmpty(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintSetLibrary_Set_IsNotEmpty_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UBlueprintSetLibrary_Set_Length @ 147671f90

UFunction * __cdecl Z_Construct_UFunction_UBlueprintSetLibrary_Set_Length(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintSetLibrary_Set_Length_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 147671fd0

void __cdecl
Z_Construct_UFunction_UBlueprintSetLibrary_Set_Remove_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x54) = 1;
  return;
}

// Z_Construct_UFunction_UBlueprintSetLibrary_Set_Remove @ 147672010

UFunction * __cdecl Z_Construct_UFunction_UBlueprintSetLibrary_Set_Remove(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintSetLibrary_Set_Remove_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UBlueprintSetLibrary_Set_RemoveItems @ 1476722b0

UFunction * __cdecl Z_Construct_UFunction_UBlueprintSetLibrary_Set_RemoveItems(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintSetLibrary_Set_RemoveItems_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UBlueprintSetLibrary_Set_ToArray @ 147672400

UFunction * __cdecl Z_Construct_UFunction_UBlueprintSetLibrary_Set_ToArray(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintSetLibrary_Set_ToArray_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UBlueprintSetLibrary_Set_Union @ 1476724e0

UFunction * __cdecl Z_Construct_UFunction_UBlueprintSetLibrary_Set_Union(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintSetLibrary_Set_Union_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UCameraModifier @ 147672520

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UCameraModifier(void)

{
  if (Z_Registration_Info_UClass_UCameraModifier.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UCameraModifier.OuterSingleton,
               &Z_Construct_UClass_UCameraModifier_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UCameraModifier.OuterSingleton;
}

// Z_Construct_UFunction_UBlueprintSetLibrary_SetSetPropertyByName @ 1476725a0

UFunction * __cdecl Z_Construct_UFunction_UBlueprintSetLibrary_SetSetPropertyByName(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintSetLibrary_SetSetPropertyByName_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UBlueprintGeneratedClass @ 147672620

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UBlueprintGeneratedClass(void)

{
  if (Z_Registration_Info_UClass_UBlueprintGeneratedClass.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UBlueprintGeneratedClass.OuterSingleton,
               &Z_Construct_UClass_UBlueprintGeneratedClass_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UBlueprintGeneratedClass.OuterSingleton;
}

// Z_Construct_UScriptStruct_FBlueprintComponentChangedPropertyInfo @ 147672660

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FBlueprintComponentChangedPropertyInfo(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FBlueprintComponentChangedPropertyInfo.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FBlueprintComponentChangedPropertyInfo.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FBlueprintComponentChangedPropertyInfo_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FBlueprintComponentChangedPropertyInfo.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FBlueprintComponentChangedPropertyInfo.InnerSingleton;
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

// Z_Construct_UScriptStruct_FBlueprintCookedComponentInstancingData @ 1476726e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FBlueprintCookedComponentInstancingData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FBlueprintCookedComponentInstancingData.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FBlueprintCookedComponentInstancingData.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FBlueprintCookedComponentInstancingData_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FBlueprintCookedComponentInstancingData.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FBlueprintCookedComponentInstancingData.InnerSingleton;
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

// NewStructOps @ 147672760

void * __cdecl Z_Construct_UScriptStruct_FNodeToCodeAssociation_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x14;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNodeToCodeAssociation,&UE::CoreUObject::Private::Construct<FNodeToCodeAssociation>,&UE::CoreUObject::Private::ConstructForTests<FNodeToCodeAssociation>,&UE::CoreUObject::Private::Destruct<FNodeToCodeAssociation>,&UE::CoreUObject::Private::Copy<FNodeToCodeAssociation>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UCameraModifier_BlueprintModifyCamera @ 1476727a0

UFunction * __cdecl Z_Construct_UFunction_UCameraModifier_BlueprintModifyCamera(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UCameraModifier_BlueprintModifyCamera_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UCameraModifier_BlueprintModifyPostProcess @ 1476728a0

UFunction * __cdecl Z_Construct_UFunction_UCameraModifier_BlueprintModifyPostProcess(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UCameraModifier_BlueprintModifyPostProcess_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// NewProp_bImmediate_SetBit @ 147672930

void __cdecl
Z_Construct_UFunction_UCameraModifier_DisableModifier_Statics::NewProp_bImmediate_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewStructOps @ 1476729a0

void * __cdecl Z_Construct_UScriptStruct_FDebuggingInfoForSingleFunction_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 400;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDebuggingInfoForSingleFunction,&UE::CoreUObject::Private::Construct<FDebuggingInfoForSingleFunction>,&UE::CoreUObject::Private::ConstructForTests<FDebuggingInfoForSingleFunction>,&UE::CoreUObject::Private::Destruct<FDebuggingInfoForSingleFunction>,&UE::CoreUObject::Private::Copy<FDebuggingInfoForSingleFunction>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UCameraModifier_DisableModifier @ 147672a20

UFunction * __cdecl Z_Construct_UFunction_UCameraModifier_DisableModifier(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UCameraModifier_DisableModifier_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UCameraModifier_EnableModifier @ 147672b00

UFunction * __cdecl Z_Construct_UFunction_UCameraModifier_EnableModifier(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UCameraModifier_EnableModifier_Statics::FuncParams);
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 147672b40

void * __thiscall
TGlobalResource<FSimpleElementVertexDeclaration,1>::_scalar_deleting_destructor_
          (TGlobalResource<FSimpleElementVertexDeclaration,1> *this,uint param_1)

{
  *(undefined ***)this = &___7__TGlobalResource_VFSimpleElementVertexDeclaration___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  *(undefined ***)this = &___7FSimpleElementVertexDeclaration__6B_;
  if (*(FRHIResource **)&this->field_0x20 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)&this->field_0x20);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// Z_Construct_UFunction_UCameraModifier_GetViewTarget @ 147672bb0

UFunction * __cdecl Z_Construct_UFunction_UCameraModifier_GetViewTarget(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UCameraModifier_GetViewTarget_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 147672bf0

void * __cdecl Z_Construct_UScriptStruct_FPointerToUberGraphFrame_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPointerToUberGraphFrame,&UE::CoreUObject::Private::Destruct<FPointerToUberGraphFrame>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_ReturnValue_SetBit @ 147672c50

void __cdecl
Z_Construct_UFunction_UCameraModifier_IsDisabled_Statics::NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UCameraModifier_IsDisabled @ 147672c70

UFunction * __cdecl Z_Construct_UFunction_UCameraModifier_IsDisabled(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UCameraModifier_IsDisabled_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// NewStructOps @ 147672cb0

void * __cdecl Z_Construct_UScriptStruct_FBlueprintDebugData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FBlueprintDebugData,&UE::CoreUObject::Private::Construct<FBlueprintDebugData>,&UE::CoreUObject::Private::ConstructForTests<FBlueprintDebugData>,&UE::CoreUObject::Private::Destruct<FBlueprintDebugData>,&UE::CoreUObject::Private::Copy<FBlueprintDebugData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_ReturnValue_SetBit @ 147672d40

void __cdecl
Z_Construct_UFunction_UCameraModifier_IsPendingDisable_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UCameraModifier_IsPendingDisable @ 147672d50

UFunction * __cdecl Z_Construct_UFunction_UCameraModifier_IsPendingDisable(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UCameraModifier_IsPendingDisable_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UCameraModifier_OnCameraOwnerDestroyed @ 147672d90

UFunction * __cdecl Z_Construct_UFunction_UCameraModifier_OnCameraOwnerDestroyed(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UCameraModifier_OnCameraOwnerDestroyed_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 147672dd0

void * __cdecl Z_Construct_UScriptStruct_FEventGraphFastCallPair_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FEventGraphFastCallPair,&UE::CoreUObject::Private::Construct<FEventGraphFastCallPair>,&UE::CoreUObject::Private::ConstructForTests<FEventGraphFastCallPair>,&UE::CoreUObject::Private::Destruct<FEventGraphFastCallPair>,&UE::CoreUObject::Private::Copy<FEventGraphFastCallPair>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bDebug_SetBit @ 147672e10

void __cdecl Z_Construct_UClass_UCameraModifier_Statics::NewProp_bDebug_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x28) = *(uint *)((longlong)param_1 + 0x28) | 1;
  return;
}

// NewProp_bExclusive_SetBit @ 147672e20

void __cdecl Z_Construct_UClass_UCameraModifier_Statics::NewProp_bExclusive_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x28) = *(uint *)((longlong)param_1 + 0x28) | 2;
  return;
}

// NewStructOps @ 147672e30

void * __cdecl
Z_Construct_UScriptStruct_FBlueprintComponentChangedPropertyInfo_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FBlueprintComponentChangedPropertyInfo,&UE::CoreUObject::Private::Construct<FBlueprintComponentChangedPropertyInfo>,&UE::CoreUObject::Private::ConstructForTests<FBlueprintComponentChangedPropertyInfo>,&UE::CoreUObject::Private::Destruct<FBlueprintComponentChangedPropertyInfo>,&UE::CoreUObject::Private::Copy<FBlueprintComponentChangedPropertyInfo>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bHasValidCookedData_SetBit @ 147672f10

void __cdecl
Z_Construct_UScriptStruct_FBlueprintCookedComponentInstancingData_Statics::
NewProp_bHasValidCookedData_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x21) = 1;
  return;
}

// NewStructOps @ 147672f20

void * __cdecl
Z_Construct_UScriptStruct_FBlueprintCookedComponentInstancingData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x48;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FBlueprintCookedComponentInstancingData,&UE::CoreUObject::Private::Construct<FBlueprintCookedComponentInstancingData>,&UE::CoreUObject::Private::ConstructForTests<FBlueprintCookedComponentInstancingData>,&UE::CoreUObject::Private::Destruct<FBlueprintCookedComponentInstancingData>,&UE::CoreUObject::Private::Copy<FBlueprintCookedComponentInstancingData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 147672f60

void * __cdecl Z_Construct_UScriptStruct_FBPComponentClassOverride_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FBPComponentClassOverride,&UE::CoreUObject::Private::Construct<FBPComponentClassOverride>,&UE::CoreUObject::Private::ConstructForTests<FBPComponentClassOverride>,&UE::CoreUObject::Private::Destruct<FBPComponentClassOverride>,&UE::CoreUObject::Private::Copy<FBPComponentClassOverride>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bHasCookedComponentInstancingData_SetBit @ 147673040

void __cdecl
Z_Construct_UClass_UBlueprintGeneratedClass_Statics::
NewProp_bHasCookedComponentInstancingData_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x214) = *(byte *)((longlong)param_1 + 0x214) | 1;
  return;
}

// NewProp_bSupportsDynamicInstancedReference_SetBit @ 147673050

void __cdecl
Z_Construct_UClass_UBlueprintGeneratedClass_Statics::
NewProp_bSupportsDynamicInstancedReference_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x214) = *(byte *)((longlong)param_1 + 0x214) | 2;
  return;
}

// Z_Construct_UClass_UCameraComponent_NoRegister @ 147673060

UClass * __cdecl Z_Construct_UClass_UCameraComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCameraComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"CameraComponent",
               &Z_Registration_Info_UClass_UCameraComponent.InnerSingleton,
               UCameraComponent::StaticRegisterNativesUCameraComponent,0xaa0,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UCameraComponent>,
               InternalVTableHelperCtorCaller<UCameraComponent>,local_res8,
               USceneComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCameraComponent.InnerSingleton;
}

// `scalar_deleting_destructor' @ 147673530

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __thiscall
AudioCommandPrivate::FGameThreadAudioCommandQueue::_scalar_deleting_destructor_
          (FGameThreadAudioCommandQueue *this,uint param_1)

{
  TSpscQueue<AudioCommandPrivate::FAudioCommand,FMemory>::
  ~TSpscQueue<AudioCommandPrivate::FAudioCommand,FMemory>(&this->Commands);
  FTickFunction::~FTickFunction((FTickFunction *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// Z_Construct_UClass_ACameraActor @ 1476735c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ACameraActor(void)

{
  if (Z_Registration_Info_UClass_ACameraActor.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ACameraActor.OuterSingleton,
               &Z_Construct_UClass_ACameraActor_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ACameraActor.OuterSingleton;
}

// Z_Construct_UFunction_ACameraActor_GetAutoActivatePlayerIndex @ 147673600

UFunction * __cdecl Z_Construct_UFunction_ACameraActor_GetAutoActivatePlayerIndex(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ACameraActor_GetAutoActivatePlayerIndex_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bConstrainAspectRatio_SetBit @ 147673640

void __cdecl
Z_Construct_UClass_ACameraActor_Statics::NewProp_bConstrainAspectRatio_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x2d8) = *(uint *)((longlong)param_1 + 0x2d8) | 1;
  return;
}

// Z_Construct_UClass_ACameraBlockingVolume @ 147673750

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ACameraBlockingVolume(void)

{
  if (Z_Registration_Info_UClass_ACameraBlockingVolume.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ACameraBlockingVolume.OuterSingleton,
               &Z_Construct_UClass_ACameraBlockingVolume_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ACameraBlockingVolume.OuterSingleton;
}

// Z_Construct_UClass_UBlueprintInstancedStructLibrary @ 147673a10

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UBlueprintInstancedStructLibrary(void)

{
  if (Z_Registration_Info_UClass_UBlueprintInstancedStructLibrary.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UBlueprintInstancedStructLibrary.OuterSingleton,
               &Z_Construct_UClass_UBlueprintInstancedStructLibrary_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UBlueprintInstancedStructLibrary.OuterSingleton;
}

// Z_Construct_UEnum_Engine_EStructUtilsResult @ 147673a50

UEnum * __cdecl Z_Construct_UEnum_Engine_EStructUtilsResult(void)

{
  if (Z_Registration_Info_UEnum_EStructUtilsResult.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EStructUtilsResult.InnerSingleton,
               &Z_Construct_UEnum_Engine_EStructUtilsResult_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EStructUtilsResult.InnerSingleton;
}

// EStructUtilsResult_StaticEnum @ 147673a90

UEnum * __cdecl EStructUtilsResult_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EStructUtilsResult.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EStructUtilsResult.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EStructUtilsResult,(UObject *)pUVar1,
                       L"EStructUtilsResult");
  }
  return Z_Registration_Info_UEnum_EStructUtilsResult.OuterSingleton;
}

// NewProp_ReturnValue_SetBit @ 147673ad0

void __cdecl
Z_Construct_UFunction_UBlueprintInstancedStructLibrary_EqualEqual_InstancedStruct_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x20) = 1;
  return;
}

// Z_Construct_UFunction_UBlueprintInstancedStructLibrary_EqualEqual_InstancedStruct @ 147673ae0

UFunction * __cdecl
Z_Construct_UFunction_UBlueprintInstancedStructLibrary_EqualEqual_InstancedStruct(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintInstancedStructLibrary_EqualEqual_InstancedStruct_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UBlueprintInstancedStructLibrary_GetInstancedStructValue @ 147673e70

UFunction * __cdecl
Z_Construct_UFunction_UBlueprintInstancedStructLibrary_GetInstancedStructValue(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintInstancedStructLibrary_GetInstancedStructValue_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UBlueprintInstancedStructLibrary_IsInstancedStructValid @ 147673eb0

UFunction * __cdecl
Z_Construct_UFunction_UBlueprintInstancedStructLibrary_IsInstancedStructValid(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintInstancedStructLibrary_IsInstancedStructValid_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 147673ef0

void __cdecl
Z_Construct_UFunction_UBlueprintInstancedStructLibrary_IsValid_InstancedStruct_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// Z_Construct_UFunction_UBlueprintInstancedStructLibrary_IsValid_InstancedStruct @ 147673f00

UFunction * __cdecl
Z_Construct_UFunction_UBlueprintInstancedStructLibrary_IsValid_InstancedStruct(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintInstancedStructLibrary_IsValid_InstancedStruct_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UBlueprintInstancedStructLibrary_MakeInstancedStruct @ 147673f40

UFunction * __cdecl Z_Construct_UFunction_UBlueprintInstancedStructLibrary_MakeInstancedStruct(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintInstancedStructLibrary_MakeInstancedStruct_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 147673f80

void __cdecl
Z_Construct_UFunction_UBlueprintInstancedStructLibrary_NotEqual_InstancedStruct_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x20) = 1;
  return;
}

// Z_Construct_UFunction_UBlueprintInstancedStructLibrary_NotEqual_InstancedStruct @ 147673f90

UFunction * __cdecl
Z_Construct_UFunction_UBlueprintInstancedStructLibrary_NotEqual_InstancedStruct(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintInstancedStructLibrary_NotEqual_InstancedStruct_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UBlueprintInstancedStructLibrary_Reset @ 147673ff0

UFunction * __cdecl Z_Construct_UFunction_UBlueprintInstancedStructLibrary_Reset(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintInstancedStructLibrary_Reset_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UCameraComponent @ 147674060

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UCameraComponent(void)

{
  if (Z_Registration_Info_UClass_UCameraComponent.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UCameraComponent.OuterSingleton,
               &Z_Construct_UClass_UCameraComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UCameraComponent.OuterSingleton;
}

// Z_Construct_UClass_UCameraProxyMeshComponent @ 1476740a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UCameraProxyMeshComponent(void)

{
  if (Z_Registration_Info_UClass_UCameraProxyMeshComponent.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UCameraProxyMeshComponent.OuterSingleton,
               &Z_Construct_UClass_UCameraProxyMeshComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UCameraProxyMeshComponent.OuterSingleton;
}

// Z_Construct_UFunction_UBlueprintInstancedStructLibrary_SetInstancedStructValue @ 147674180

UFunction * __cdecl
Z_Construct_UFunction_UBlueprintInstancedStructLibrary_SetInstancedStructValue(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintInstancedStructLibrary_SetInstancedStructValue_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UCameraComponent_AddOrUpdateBlendable @ 147674380

UFunction * __cdecl Z_Construct_UFunction_UCameraComponent_AddOrUpdateBlendable(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UCameraComponent_AddOrUpdateBlendable_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UCameraComponent_GetCameraView @ 147674800

UFunction * __cdecl Z_Construct_UFunction_UCameraComponent_GetCameraView(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UCameraComponent_GetCameraView_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UCameraComponent_OnCameraMeshHiddenChanged @ 147674840

UFunction * __cdecl Z_Construct_UFunction_UCameraComponent_OnCameraMeshHiddenChanged(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UCameraComponent_OnCameraMeshHiddenChanged_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UCameraComponent_RemoveBlendable @ 147674880

UFunction * __cdecl Z_Construct_UFunction_UCameraComponent_RemoveBlendable(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UCameraComponent_RemoveBlendable_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UBookMark @ 1476748c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UBookMark(void)

{
  if (Z_Registration_Info_UClass_UBookMark.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UBookMark.OuterSingleton,
               &Z_Construct_UClass_UBookMark_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UBookMark.OuterSingleton;
}

// NewStructOps @ 147674900

void * __cdecl Z_Construct_UScriptStruct_FBookmarkJumpToSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FBookmarkJumpToSettings,&UE::CoreUObject::Private::Construct<FBookmarkJumpToSettings>,&UE::CoreUObject::Private::ConstructForTests<FBookmarkJumpToSettings>,&UE::CoreUObject::Private::Destruct<FBookmarkJumpToSettings>,&UE::CoreUObject::Private::Copy<FBookmarkJumpToSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UCameraComponent_SetAspectRatio @ 147674940

UFunction * __cdecl Z_Construct_UFunction_UCameraComponent_SetAspectRatio(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UCameraComponent_SetAspectRatio_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UCameraComponent_SetAspectRatioAxisConstraint @ 147674980

UFunction * __cdecl Z_Construct_UFunction_UCameraComponent_SetAspectRatioAxisConstraint(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UCameraComponent_SetAspectRatioAxisConstraint_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UCameraComponent_SetAsymmetricOverscan @ 1476749f0

UFunction * __cdecl Z_Construct_UFunction_UCameraComponent_SetAsymmetricOverscan(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UCameraComponent_SetAsymmetricOverscan_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bAutoCalculate_SetBit @ 147674ac0

void __cdecl
Z_Construct_UFunction_UCameraComponent_SetAutoCalculateOrthoPlanes_Statics::
NewProp_bAutoCalculate_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UCameraComponent_SetAutoCalculateOrthoPlanes @ 147674b90

UFunction * __cdecl Z_Construct_UFunction_UCameraComponent_SetAutoCalculateOrthoPlanes(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UCameraComponent_SetAutoCalculateOrthoPlanes_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_AAudioVolume @ 147674bd0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_AAudioVolume(void)

{
  if (Z_Registration_Info_UClass_AAudioVolume.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_AAudioVolume.OuterSingleton,
               &Z_Construct_UClass_AAudioVolume_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_AAudioVolume.OuterSingleton;
}

// Z_Construct_UEnum_Engine_EAudioVolumeLocationState @ 147674c10

UEnum * __cdecl Z_Construct_UEnum_Engine_EAudioVolumeLocationState(void)

{
  if (Z_Registration_Info_UEnum_EAudioVolumeLocationState.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EAudioVolumeLocationState.InnerSingleton,
               &Z_Construct_UEnum_Engine_EAudioVolumeLocationState_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EAudioVolumeLocationState.InnerSingleton;
}

// Z_Construct_UScriptStruct_FAudioVolumeSubmixOverrideSettings @ 147674c50

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAudioVolumeSubmixOverrideSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAudioVolumeSubmixOverrideSettings.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAudioVolumeSubmixOverrideSettings.InnerSingleton,
               &Z_Construct_UScriptStruct_FAudioVolumeSubmixOverrideSettings_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAudioVolumeSubmixOverrideSettings.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAudioVolumeSubmixOverrideSettings.InnerSingleton;
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

// Z_Construct_UScriptStruct_FAudioVolumeSubmixSendSettings @ 147674cd0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAudioVolumeSubmixSendSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAudioVolumeSubmixSendSettings.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAudioVolumeSubmixSendSettings.InnerSingleton,
               &Z_Construct_UScriptStruct_FAudioVolumeSubmixSendSettings_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAudioVolumeSubmixSendSettings.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAudioVolumeSubmixSendSettings.InnerSingleton;
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

// Z_Construct_UScriptStruct_FInteriorSettings @ 147674d50

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FInteriorSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FInteriorSettings.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FInteriorSettings.InnerSingleton,
               &Z_Construct_UScriptStruct_FInteriorSettings_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FInteriorSettings.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FInteriorSettings.InnerSingleton;
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

// Z_Construct_UFunction_UCameraComponent_SetAutoPlaneShift @ 147674dd0

UFunction * __cdecl Z_Construct_UFunction_UCameraComponent_SetAutoPlaneShift(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UCameraComponent_SetAutoPlaneShift_Statics::FuncParams);
  }
  return ReturnFunction;
}

// EAudioVolumeLocationState_StaticEnum @ 147674e10

UEnum * __cdecl EAudioVolumeLocationState_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EAudioVolumeLocationState.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EAudioVolumeLocationState.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EAudioVolumeLocationState,(UObject *)pUVar1,
                       L"EAudioVolumeLocationState");
  }
  return Z_Registration_Info_UEnum_EAudioVolumeLocationState.OuterSingleton;
}

// NewProp_bInConstrainAspectRatio_SetBit @ 147674e50

void __cdecl
Z_Construct_UFunction_UCameraComponent_SetConstraintAspectRatio_Statics::
NewProp_bInConstrainAspectRatio_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UCameraComponent_SetConstraintAspectRatio @ 147674e60

UFunction * __cdecl Z_Construct_UFunction_UCameraComponent_SetConstraintAspectRatio(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UCameraComponent_SetConstraintAspectRatio_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// NewStructOps @ 147674ea0

void * __cdecl Z_Construct_UScriptStruct_FAudioVolumeSubmixSendSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAudioVolumeSubmixSendSettings,&UE::CoreUObject::Private::Construct<FAudioVolumeSubmixSendSettings>,&UE::CoreUObject::Private::ConstructForTests<FAudioVolumeSubmixSendSettings>,&UE::CoreUObject::Private::Destruct<FAudioVolumeSubmixSendSettings>,&UE::CoreUObject::Private::Copy<FAudioVolumeSubmixSendSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bInCropOverscan_SetBit @ 147674ee0

void __cdecl
Z_Construct_UFunction_UCameraComponent_SetCropOverscan_Statics::NewProp_bInCropOverscan_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UCameraComponent_SetCropOverscan @ 147674ef0

UFunction * __cdecl Z_Construct_UFunction_UCameraComponent_SetCropOverscan(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UCameraComponent_SetCropOverscan_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bInEnableFirstPersonFieldOfView_SetBit @ 147674f30

void __cdecl
Z_Construct_UFunction_UCameraComponent_SetEnableFirstPersonFieldOfView_Statics::
NewProp_bInEnableFirstPersonFieldOfView_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UCameraComponent_SetEnableFirstPersonFieldOfView @ 147674f40

UFunction * __cdecl Z_Construct_UFunction_UCameraComponent_SetEnableFirstPersonFieldOfView(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UCameraComponent_SetEnableFirstPersonFieldOfView_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bInEnableFirstPersonScale_SetBit @ 147674f80

void __cdecl
Z_Construct_UFunction_UCameraComponent_SetEnableFirstPersonScale_Statics::
NewProp_bInEnableFirstPersonScale_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UCameraComponent_SetEnableFirstPersonScale @ 147674f90

UFunction * __cdecl Z_Construct_UFunction_UCameraComponent_SetEnableFirstPersonScale(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UCameraComponent_SetEnableFirstPersonScale_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// NewStructOps @ 147674fd0

void * __cdecl
Z_Construct_UScriptStruct_FAudioVolumeSubmixOverrideSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAudioVolumeSubmixOverrideSettings,&UE::CoreUObject::Private::Construct<FAudioVolumeSubmixOverrideSettings>,&UE::CoreUObject::Private::ConstructForTests<FAudioVolumeSubmixOverrideSettings>,&UE::CoreUObject::Private::Destruct<FAudioVolumeSubmixOverrideSettings>,&UE::CoreUObject::Private::Copy<FAudioVolumeSubmixOverrideSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UCameraComponent_SetFieldOfView @ 147675010

UFunction * __cdecl Z_Construct_UFunction_UCameraComponent_SetFieldOfView(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UCameraComponent_SetFieldOfView_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UCameraComponent_SetFirstPersonFieldOfView @ 147675080

UFunction * __cdecl Z_Construct_UFunction_UCameraComponent_SetFirstPersonFieldOfView(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UCameraComponent_SetFirstPersonFieldOfView_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UCameraComponent_SetFirstPersonScale @ 1476750d0

UFunction * __cdecl Z_Construct_UFunction_UCameraComponent_SetFirstPersonScale(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UCameraComponent_SetFirstPersonScale_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bIsWorldSettings_SetBit @ 147675110

void __cdecl
Z_Construct_UScriptStruct_FInteriorSettings_Statics::NewProp_bIsWorldSettings_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewStructOps @ 147675120

void * __cdecl Z_Construct_UScriptStruct_FInteriorSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x24;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FInteriorSettings,&UE::CoreUObject::Private::Construct<FInteriorSettings>,&UE::CoreUObject::Private::ConstructForTests<FInteriorSettings>,&UE::CoreUObject::Private::Destruct<FInteriorSettings>,&UE::CoreUObject::Private::Copy<FInteriorSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UCameraComponent_SetOrthoFarClipPlane @ 147675160

UFunction * __cdecl Z_Construct_UFunction_UCameraComponent_SetOrthoFarClipPlane(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UCameraComponent_SetOrthoFarClipPlane_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UCameraComponent_SetOrthoNearClipPlane @ 1476751a0

UFunction * __cdecl Z_Construct_UFunction_UCameraComponent_SetOrthoNearClipPlane(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UCameraComponent_SetOrthoNearClipPlane_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UCameraComponent_SetOrthoWidth @ 1476751e0

UFunction * __cdecl Z_Construct_UFunction_UCameraComponent_SetOrthoWidth(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UCameraComponent_SetOrthoWidth_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AAudioVolume_OnRep_bEnabled @ 147675220

UFunction * __cdecl Z_Construct_UFunction_AAudioVolume_OnRep_bEnabled(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AAudioVolume_OnRep_bEnabled_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UCameraComponent_SetOverscan @ 147675260

UFunction * __cdecl Z_Construct_UFunction_UCameraComponent_SetOverscan(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UCameraComponent_SetOverscan_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bNewEnabled_SetBit @ 1476752a0

void __cdecl
Z_Construct_UFunction_AAudioVolume_SetEnabled_Statics::NewProp_bNewEnabled_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_AAudioVolume_SetEnabled @ 1476752b0

UFunction * __cdecl Z_Construct_UFunction_AAudioVolume_SetEnabled(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_AAudioVolume_SetEnabled_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UCameraComponent_SetPostProcessBlendWeight @ 1476752f0

UFunction * __cdecl Z_Construct_UFunction_UCameraComponent_SetPostProcessBlendWeight(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UCameraComponent_SetPostProcessBlendWeight_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UAudioWidgetSubsystem @ 147675330

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAudioWidgetSubsystem(void)

{
  if (Z_Registration_Info_UClass_UAudioWidgetSubsystem.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAudioWidgetSubsystem.OuterSingleton,
               &Z_Construct_UClass_UAudioWidgetSubsystem_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAudioWidgetSubsystem.OuterSingleton;
}

// Z_Construct_UFunction_UCameraComponent_SetProjectionMode @ 147675370

UFunction * __cdecl Z_Construct_UFunction_UCameraComponent_SetProjectionMode(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UCameraComponent_SetProjectionMode_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AAudioVolume_SetInteriorSettings @ 1476753b0

UFunction * __cdecl Z_Construct_UFunction_AAudioVolume_SetInteriorSettings(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AAudioVolume_SetInteriorSettings_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bInScaleResolutionWithOverscan_SetBit @ 1476753f0

void __cdecl
Z_Construct_UFunction_UCameraComponent_SetScaleResolutionWithOverscan_Statics::
NewProp_bInScaleResolutionWithOverscan_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UCameraComponent_SetScaleResolutionWithOverscan @ 147675400

UFunction * __cdecl Z_Construct_UFunction_UCameraComponent_SetScaleResolutionWithOverscan(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UCameraComponent_SetScaleResolutionWithOverscan_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AAudioVolume_SetPriority @ 147675440

UFunction * __cdecl Z_Construct_UFunction_AAudioVolume_SetPriority(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_AAudioVolume_SetPriority_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bInUpdateOrthoPlanes_SetBit @ 147675480

void __cdecl
Z_Construct_UFunction_UCameraComponent_SetUpdateOrthoPlanes_Statics::
NewProp_bInUpdateOrthoPlanes_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_AAudioVolume_SetReverbSettings @ 1476754a0

UFunction * __cdecl Z_Construct_UFunction_AAudioVolume_SetReverbSettings(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AAudioVolume_SetReverbSettings_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UCameraComponent_SetUpdateOrthoPlanes @ 1476754e0

UFunction * __cdecl Z_Construct_UFunction_UCameraComponent_SetUpdateOrthoPlanes(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UCameraComponent_SetUpdateOrthoPlanes_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bInUseCameraHeightAsViewTarget_SetBit @ 147675520

void __cdecl
Z_Construct_UFunction_UCameraComponent_SetUseCameraHeightAsViewTarget_Statics::
NewProp_bInUseCameraHeightAsViewTarget_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UCameraComponent_SetUseCameraHeightAsViewTarget @ 147675530

UFunction * __cdecl Z_Construct_UFunction_UCameraComponent_SetUseCameraHeightAsViewTarget(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UCameraComponent_SetUseCameraHeightAsViewTarget_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AAudioVolume_SetSubmixOverrideSettings @ 147675570

UFunction * __cdecl Z_Construct_UFunction_AAudioVolume_SetSubmixOverrideSettings(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AAudioVolume_SetSubmixOverrideSettings_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bInUseFieldOfViewForLOD_SetBit @ 1476755b0

void __cdecl
Z_Construct_UFunction_UCameraComponent_SetUseFieldOfViewForLOD_Statics::
NewProp_bInUseFieldOfViewForLOD_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UCameraComponent_SetUseFieldOfViewForLOD @ 1476755c0

UFunction * __cdecl Z_Construct_UFunction_UCameraComponent_SetUseFieldOfViewForLOD(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UCameraComponent_SetUseFieldOfViewForLOD_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AAudioVolume_SetSubmixSendSettings @ 147675600

UFunction * __cdecl Z_Construct_UFunction_AAudioVolume_SetSubmixSendSettings(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AAudioVolume_SetSubmixSendSettings_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bAutoCalculateOrthoPlanes_SetBit @ 147675640

void __cdecl
Z_Construct_UClass_UCameraComponent_Statics::NewProp_bAutoCalculateOrthoPlanes_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x260) = 1;
  return;
}

// NewProp_bUpdateOrthoPlanes_SetBit @ 147675650

void __cdecl
Z_Construct_UClass_UCameraComponent_Statics::NewProp_bUpdateOrthoPlanes_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x270) = 1;
  return;
}

// NewProp_bUseCameraHeightAsViewTarget_SetBit @ 147675660

void __cdecl
Z_Construct_UClass_UCameraComponent_Statics::NewProp_bUseCameraHeightAsViewTarget_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x271) = 1;
  return;
}

// NewProp_bConstrainAspectRatio_SetBit @ 147675670

void __cdecl
Z_Construct_UClass_UCameraComponent_Statics::NewProp_bConstrainAspectRatio_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x279) = *(byte *)((longlong)param_1 + 0x279) | 1;
  return;
}

// NewProp_bOverrideAspectRatioAxisConstraint_SetBit @ 147675680

void __cdecl
Z_Construct_UClass_UCameraComponent_Statics::NewProp_bOverrideAspectRatioAxisConstraint_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x279) = *(byte *)((longlong)param_1 + 0x279) | 2;
  return;
}

// NewProp_bUseFieldOfViewForLOD_SetBit @ 147675690

void __cdecl
Z_Construct_UClass_UCameraComponent_Statics::NewProp_bUseFieldOfViewForLOD_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x279) = *(byte *)((longlong)param_1 + 0x279) | 4;
  return;
}

// NewProp_bScaleResolutionWithOverscan_SetBit @ 1476756a0

void __cdecl
Z_Construct_UClass_UCameraComponent_Statics::NewProp_bScaleResolutionWithOverscan_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x290) = 1;
  return;
}

// NewProp_bCropOverscan_SetBit @ 1476756b0

void __cdecl
Z_Construct_UClass_UCameraComponent_Statics::NewProp_bCropOverscan_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x291) = 1;
  return;
}

// NewProp_bEnabled_SetBit @ 1476756c0

void __cdecl Z_Construct_UClass_AAudioVolume_Statics::NewProp_bEnabled_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x2fc) = *(uint *)((longlong)param_1 + 0x2fc) | 1;
  return;
}

// NewProp_bLockToHmd_SetBit @ 1476756d0

void __cdecl Z_Construct_UClass_UCameraComponent_Statics::NewProp_bLockToHmd_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x292) = *(byte *)((longlong)param_1 + 0x292) | 1;
  return;
}

// NewProp_bUsePawnControlRotation_SetBit @ 1476756e0

void __cdecl
Z_Construct_UClass_UCameraComponent_Statics::NewProp_bUsePawnControlRotation_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x292) = *(byte *)((longlong)param_1 + 0x292) | 2;
  return;
}

// NewProp_bEnableFirstPersonFieldOfView_SetBit @ 1476756f0

void __cdecl
Z_Construct_UClass_UCameraComponent_Statics::NewProp_bEnableFirstPersonFieldOfView_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x292) = *(byte *)((longlong)param_1 + 0x292) | 4;
  return;
}

// NewProp_bEnableFirstPersonScale_SetBit @ 147675700

void __cdecl
Z_Construct_UClass_UCameraComponent_Statics::NewProp_bEnableFirstPersonScale_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x292) = *(byte *)((longlong)param_1 + 0x292) | 8;
  return;
}

// Z_Construct_UClass_UBlueprintMapLibrary @ 147675710

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UBlueprintMapLibrary(void)

{
  if (Z_Registration_Info_UClass_UBlueprintMapLibrary.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UBlueprintMapLibrary.OuterSingleton,
               &Z_Construct_UClass_UBlueprintMapLibrary_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UBlueprintMapLibrary.OuterSingleton;
}

// Z_Construct_UFunction_UBlueprintMapLibrary_Map_Add @ 147675800

UFunction * __cdecl Z_Construct_UFunction_UBlueprintMapLibrary_Map_Add(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintMapLibrary_Map_Add_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UBlueprintMapLibrary_Map_Clear @ 147675880

UFunction * __cdecl Z_Construct_UFunction_UBlueprintMapLibrary_Map_Clear(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintMapLibrary_Map_Clear_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 1476758c0

void __cdecl
Z_Construct_UFunction_UBlueprintMapLibrary_Map_Contains_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x54) = 1;
  return;
}

// Z_Construct_UFunction_UBlueprintMapLibrary_Map_Contains @ 147675910

UFunction * __cdecl Z_Construct_UFunction_UBlueprintMapLibrary_Map_Contains(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintMapLibrary_Map_Contains_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 147675990

void __cdecl
Z_Construct_UFunction_UBlueprintMapLibrary_Map_Find_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x58) = 1;
  return;
}

// Z_Construct_UFunction_UBlueprintMapLibrary_Map_Find @ 1476759a0

UFunction * __cdecl Z_Construct_UFunction_UBlueprintMapLibrary_Map_Find(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintMapLibrary_Map_Find_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UBlueprintMapLibrary_Map_GetKeyValueByIndex @ 147675db0

UFunction * __cdecl Z_Construct_UFunction_UBlueprintMapLibrary_Map_GetKeyValueByIndex(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintMapLibrary_Map_GetKeyValueByIndex_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UBlueprintMapLibrary_Map_GetLastIndex @ 147675ee0

UFunction * __cdecl Z_Construct_UFunction_UBlueprintMapLibrary_Map_GetLastIndex(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintMapLibrary_Map_GetLastIndex_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 147675f20

void __cdecl
Z_Construct_UFunction_UBlueprintMapLibrary_Map_IsEmpty_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x50) = 1;
  return;
}

// Z_Construct_UFunction_UBlueprintMapLibrary_Map_IsEmpty @ 147675f30

UFunction * __cdecl Z_Construct_UFunction_UBlueprintMapLibrary_Map_IsEmpty(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintMapLibrary_Map_IsEmpty_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 147676010

void __cdecl
Z_Construct_UFunction_UBlueprintMapLibrary_Map_IsNotEmpty_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x50) = 1;
  return;
}

// Z_Construct_UFunction_UBlueprintMapLibrary_Map_IsNotEmpty @ 147676130

UFunction * __cdecl Z_Construct_UFunction_UBlueprintMapLibrary_Map_IsNotEmpty(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintMapLibrary_Map_IsNotEmpty_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UBlueprintMapLibrary_Map_Keys @ 1476762a0

UFunction * __cdecl Z_Construct_UFunction_UBlueprintMapLibrary_Map_Keys(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintMapLibrary_Map_Keys_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UAudioParameterConversionStatics @ 1476762e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAudioParameterConversionStatics(void)

{
  if (Z_Registration_Info_UClass_UAudioParameterConversionStatics.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAudioParameterConversionStatics.OuterSingleton,
               &Z_Construct_UClass_UAudioParameterConversionStatics_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAudioParameterConversionStatics.OuterSingleton;
}

// Z_Construct_UClass_UBlueprintFunctionLibrary @ 147676320

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UBlueprintFunctionLibrary(void)

{
  if (Z_Registration_Info_UClass_UBlueprintFunctionLibrary.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UBlueprintFunctionLibrary.OuterSingleton,
               &Z_Construct_UClass_UBlueprintFunctionLibrary_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UBlueprintFunctionLibrary.OuterSingleton;
}

// Z_Construct_UClass_USoundParameterControllerInterface @ 147676360

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_USoundParameterControllerInterface(void)

{
  if (Z_Registration_Info_UClass_USoundParameterControllerInterface.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_USoundParameterControllerInterface.OuterSingleton,
               &Z_Construct_UClass_USoundParameterControllerInterface_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_USoundParameterControllerInterface.OuterSingleton;
}

// Z_Construct_UFunction_UBlueprintMapLibrary_Map_Length @ 1476763a0

UFunction * __cdecl Z_Construct_UFunction_UBlueprintMapLibrary_Map_Length(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintMapLibrary_Map_Length_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 1476763e0

void __cdecl
Z_Construct_UFunction_UBlueprintMapLibrary_Map_Remove_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x54) = 1;
  return;
}

// Z_Construct_UFunction_UBlueprintMapLibrary_Map_Remove @ 147676490

UFunction * __cdecl Z_Construct_UFunction_UBlueprintMapLibrary_Map_Remove(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintMapLibrary_Map_Remove_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UBlueprintMapLibrary_Map_Values @ 147676520

UFunction * __cdecl Z_Construct_UFunction_UBlueprintMapLibrary_Map_Values(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintMapLibrary_Map_Values_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAudioParameterConversionStatics_BooleanArrayToAudioParameter @ 147676560

UFunction * __cdecl
Z_Construct_UFunction_UAudioParameterConversionStatics_BooleanArrayToAudioParameter(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioParameterConversionStatics_BooleanArrayToAudioParameter_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UBlueprintMapLibrary_SetMapPropertyByName @ 1476765e0

UFunction * __cdecl Z_Construct_UFunction_UBlueprintMapLibrary_SetMapPropertyByName(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintMapLibrary_SetMapPropertyByName_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// NewProp_Bool_SetBit @ 1476766a0

void __cdecl
Z_Construct_UFunction_UAudioParameterConversionStatics_BooleanToAudioParameter_Statics::
NewProp_Bool_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// Z_Construct_UClass_UCameraLensEffectInterface_NoRegister @ 1476766b0

UClass * __cdecl Z_Construct_UClass_UCameraLensEffectInterface_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCameraLensEffectInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"CameraLensEffectInterface",
               &Z_Registration_Info_UClass_UCameraLensEffectInterface.InnerSingleton,
               UCameraLensEffectInterface::StaticRegisterNativesUCameraLensEffectInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UCameraLensEffectInterface>,
               InternalVTableHelperCtorCaller<UCameraLensEffectInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCameraLensEffectInterface.InnerSingleton;
}

// Z_Construct_UClass_UCameraLensEffectInterface @ 147676770

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UCameraLensEffectInterface(void)

{
  if (Z_Registration_Info_UClass_UCameraLensEffectInterface.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UCameraLensEffectInterface.OuterSingleton,
               &Z_Construct_UClass_UCameraLensEffectInterface_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UCameraLensEffectInterface.OuterSingleton;
}

// Z_Construct_UClass_UCameraLensEffectInterfaceClassSupportLibrary @ 1476767b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UCameraLensEffectInterfaceClassSupportLibrary(void)

{
  if (Z_Registration_Info_UClass_UCameraLensEffectInterfaceClassSupportLibrary.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UCameraLensEffectInterfaceClassSupportLibrary.
                OuterSingleton,
               &Z_Construct_UClass_UCameraLensEffectInterfaceClassSupportLibrary_Statics::
                ClassParams);
  }
  return Z_Registration_Info_UClass_UCameraLensEffectInterfaceClassSupportLibrary.OuterSingleton;
}

// Z_Construct_UEnum_Engine_EInterfaceValidResult @ 1476767f0

UEnum * __cdecl Z_Construct_UEnum_Engine_EInterfaceValidResult(void)

{
  if (Z_Registration_Info_UEnum_EInterfaceValidResult.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EInterfaceValidResult.InnerSingleton,
               &Z_Construct_UEnum_Engine_EInterfaceValidResult_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EInterfaceValidResult.InnerSingleton;
}

// Z_Construct_UScriptStruct_FCameraLensInterfaceClassSupport @ 147676930

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FCameraLensInterfaceClassSupport(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FCameraLensInterfaceClassSupport.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FCameraLensInterfaceClassSupport.InnerSingleton,
               &Z_Construct_UScriptStruct_FCameraLensInterfaceClassSupport_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FCameraLensInterfaceClassSupport.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FCameraLensInterfaceClassSupport.InnerSingleton;
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

// Z_Construct_UFunction_UAudioParameterConversionStatics_BooleanToAudioParameter @ 147676b30

UFunction * __cdecl
Z_Construct_UFunction_UAudioParameterConversionStatics_BooleanToAudioParameter(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioParameterConversionStatics_BooleanToAudioParameter_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_ABrush @ 147676b70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ABrush(void)

{
  if (Z_Registration_Info_UClass_ABrush.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ABrush.OuterSingleton,
               &Z_Construct_UClass_ABrush_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ABrush.OuterSingleton;
}

// Z_Construct_UEnum_Engine_EBrushType @ 147676bb0

UEnum * __cdecl Z_Construct_UEnum_Engine_EBrushType(void)

{
  if (Z_Registration_Info_UEnum_EBrushType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EBrushType.InnerSingleton,
               &Z_Construct_UEnum_Engine_EBrushType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EBrushType.InnerSingleton;
}

// Z_Construct_UScriptStruct_FGeomSelection @ 147676bf0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FGeomSelection(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FGeomSelection.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FGeomSelection.InnerSingleton,
               &Z_Construct_UScriptStruct_FGeomSelection_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FGeomSelection.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FGeomSelection.InnerSingleton;
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

// ECsgOper_StaticEnum @ 147676c70

UEnum * __cdecl ECsgOper_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ECsgOper.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_ECsgOper.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_ECsgOper,(UObject *)pUVar1,L"ECsgOper");
  }
  return Z_Registration_Info_UEnum_ECsgOper.OuterSingleton;
}

// Z_Construct_UFunction_UAudioParameterConversionStatics_FloatArrayToAudioParameter @ 147676cb0

UFunction * __cdecl
Z_Construct_UFunction_UAudioParameterConversionStatics_FloatArrayToAudioParameter(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioParameterConversionStatics_FloatArrayToAudioParameter_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_ABlockingVolume @ 147676cf0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ABlockingVolume(void)

{
  if (Z_Registration_Info_UClass_ABlockingVolume.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ABlockingVolume.OuterSingleton,
               &Z_Construct_UClass_ABlockingVolume_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ABlockingVolume.OuterSingleton;
}

// EBrushType_StaticEnum @ 147676d30

UEnum * __cdecl EBrushType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EBrushType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EBrushType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EBrushType,(UObject *)pUVar1,L"EBrushType");
  }
  return Z_Registration_Info_UEnum_EBrushType.OuterSingleton;
}

// Z_Construct_UFunction_UAudioParameterConversionStatics_FloatToAudioParameter @ 147676db0

UFunction * __cdecl
Z_Construct_UFunction_UAudioParameterConversionStatics_FloatToAudioParameter(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioParameterConversionStatics_FloatToAudioParameter_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 147676df0

void * __cdecl Z_Construct_UScriptStruct_FGeomSelection_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xc;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FGeomSelection,&UE::CoreUObject::Private::Construct<FGeomSelection>,&UE::CoreUObject::Private::ConstructForTests<FGeomSelection>,&UE::CoreUObject::Private::Destruct<FGeomSelection>,&UE::CoreUObject::Private::Copy<FGeomSelection>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UAudioParameterConversionStatics_IntegerArrayToAudioParameter @ 147676ef0

UFunction * __cdecl
Z_Construct_UFunction_UAudioParameterConversionStatics_IntegerArrayToAudioParameter(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioParameterConversionStatics_IntegerArrayToAudioParameter_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UBlueprint @ 147676ff0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UBlueprint(void)

{
  if (Z_Registration_Info_UClass_UBlueprint.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UBlueprint.OuterSingleton,
               &Z_Construct_UClass_UBlueprint_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UBlueprint.OuterSingleton;
}

// Z_Construct_UClass_UDEPRECATED_Breakpoint @ 147677030

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UDEPRECATED_Breakpoint(void)

{
  if (Z_Registration_Info_UClass_UDEPRECATED_Breakpoint.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UDEPRECATED_Breakpoint.OuterSingleton,
               &Z_Construct_UClass_UDEPRECATED_Breakpoint_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UDEPRECATED_Breakpoint.OuterSingleton;
}

// Z_Construct_UEnum_Engine_EBlueprintType @ 147677070

UEnum * __cdecl Z_Construct_UEnum_Engine_EBlueprintType(void)

{
  if (Z_Registration_Info_UEnum_EBlueprintType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EBlueprintType.InnerSingleton,
               &Z_Construct_UEnum_Engine_EBlueprintType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EBlueprintType.InnerSingleton;
}

// Z_Construct_UScriptStruct_FBPComponentClassOverride @ 1476770e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FBPComponentClassOverride(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FBPComponentClassOverride.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FBPComponentClassOverride.InnerSingleton,
               &Z_Construct_UScriptStruct_FBPComponentClassOverride_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FBPComponentClassOverride.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FBPComponentClassOverride.InnerSingleton;
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

// Z_Construct_UScriptStruct_FBPVariableMetaDataEntry @ 147677160

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FBPVariableMetaDataEntry(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FBPVariableMetaDataEntry.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FBPVariableMetaDataEntry.InnerSingleton,
               &Z_Construct_UScriptStruct_FBPVariableMetaDataEntry_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FBPVariableMetaDataEntry.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FBPVariableMetaDataEntry.InnerSingleton;
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

// EBlueprintStatus_StaticEnum @ 147677220

UEnum * __cdecl EBlueprintStatus_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EBlueprintStatus.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EBlueprintStatus.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EBlueprintStatus,(UObject *)pUVar1,
                       L"EBlueprintStatus");
  }
  return Z_Registration_Info_UEnum_EBlueprintStatus.OuterSingleton;
}

// Z_Construct_UFunction_UAudioParameterConversionStatics_IntegerToAudioParameter @ 147677310

UFunction * __cdecl
Z_Construct_UFunction_UAudioParameterConversionStatics_IntegerToAudioParameter(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioParameterConversionStatics_IntegerToAudioParameter_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// EBlueprintType_StaticEnum @ 147677350

UEnum * __cdecl EBlueprintType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EBlueprintType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EBlueprintType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EBlueprintType,(UObject *)pUVar1,L"EBlueprintType");
  }
  return Z_Registration_Info_UEnum_EBlueprintType.OuterSingleton;
}

// NewProp_bColored_SetBit @ 147677390

void __cdecl Z_Construct_UClass_ABrush_Statics::NewProp_bColored_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x2cc) = *(uint *)((longlong)param_1 + 0x2cc) | 1;
  return;
}

// NewProp_bSolidWhenSelected_SetBit @ 1476773a0

void __cdecl Z_Construct_UClass_ABrush_Statics::NewProp_bSolidWhenSelected_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x2cc) = *(uint *)((longlong)param_1 + 0x2cc) | 2;
  return;
}

// NewProp_bPlaceableFromClassBrowser_SetBit @ 1476773b0

void __cdecl
Z_Construct_UClass_ABrush_Statics::NewProp_bPlaceableFromClassBrowser_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x2cc) = *(uint *)((longlong)param_1 + 0x2cc) | 4;
  return;
}

// NewProp_bNotForClientOrServer_SetBit @ 1476773c0

void __cdecl Z_Construct_UClass_ABrush_Statics::NewProp_bNotForClientOrServer_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x2cc) = *(uint *)((longlong)param_1 + 0x2cc) | 8;
  return;
}

// NewProp_bInManipulation_SetBit @ 1476773d0

void __cdecl Z_Construct_UClass_ABrush_Statics::NewProp_bInManipulation_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x2e0) = *(uint *)((longlong)param_1 + 0x2e0) | 1;
  return;
}

// Z_Construct_UFunction_UAudioParameterConversionStatics_ObjectArrayToAudioParameter @ 1476773e0

UFunction * __cdecl
Z_Construct_UFunction_UAudioParameterConversionStatics_ObjectArrayToAudioParameter(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioParameterConversionStatics_ObjectArrayToAudioParameter_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAudioParameterConversionStatics_ObjectToAudioParameter @ 147677460

UFunction * __cdecl
Z_Construct_UFunction_UAudioParameterConversionStatics_ObjectToAudioParameter(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioParameterConversionStatics_ObjectToAudioParameter_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// EBlueprintCompileMode_StaticEnum @ 147677570

UEnum * __cdecl EBlueprintCompileMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EBlueprintCompileMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EBlueprintCompileMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EBlueprintCompileMode,(UObject *)pUVar1,
                       L"EBlueprintCompileMode");
  }
  return Z_Registration_Info_UEnum_EBlueprintCompileMode.OuterSingleton;
}

// <lambda_invoker_cdecl> @ 1476775e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl <lambda_25>::<lambda_invoker_cdecl>(void)

{
  FStreamingManagerCollection *this;
  IAudioStreamingManager *pIVar1;
  
  this = IStreamingManager::Get();
  pIVar1 = FStreamingManagerCollection::GetAudioStreamingManager(this);
  (**(code **)(*(longlong *)pIVar1 + 0xb8))(pIVar1,0x7fffffffffffffff);
  if (3 < (byte)LogAudioStreamCaching._0_1_) {
    UE::Logging::Private::BasicLog<4>
              ((FStaticBasicLogRecord *)&PTR_u_Audio_Cache_Flu_15172f2c8,
               (FLogCategoryBase *)&LogAudioStreamCaching);
    return;
  }
  return;
}

// <lambda_invoker_cdecl> @ 147677670

void __cdecl
<lambda_26>::<lambda_invoker_cdecl>(TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  <lambda_26> local_res10 [24];
  
  operator()(local_res10,param_1);
  return;
}

// <lambda_invoker_cdecl> @ 147677690

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl <lambda_27>::<lambda_invoker_cdecl>(void)

{
  FStreamingManagerCollection *this;
  IAudioStreamingManager *pIVar1;
  
  this = IStreamingManager::Get();
  pIVar1 = FStreamingManagerCollection::GetAudioStreamingManager(this);
  (**(code **)(*(longlong *)pIVar1 + 0xd0))(pIVar1,1);
  if (3 < (byte)LogAudioStreamCaching._0_1_) {
    UE::Logging::Private::BasicLog<4>
              ((FStaticBasicLogRecord *)&PTR_u_Enabled_profili_15172fea0,
               (FLogCategoryBase *)&LogAudioStreamCaching);
    return;
  }
  return;
}

// <lambda_invoker_cdecl> @ 1476776e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl <lambda_28>::<lambda_invoker_cdecl>(void)

{
  FStreamingManagerCollection *this;
  IAudioStreamingManager *pIVar1;
  
  this = IStreamingManager::Get();
  pIVar1 = FStreamingManagerCollection::GetAudioStreamingManager(this);
  (**(code **)(*(longlong *)pIVar1 + 0xd0))(pIVar1,0);
  if (3 < (byte)LogAudioStreamCaching._0_1_) {
    UE::Logging::Private::BasicLog<4>
              ((FStaticBasicLogRecord *)&PTR_u_Disabled_profil_151730258,
               (FLogCategoryBase *)&LogAudioStreamCaching);
    return;
  }
  return;
}

// operator<<<UObject> @ 1476778b0

FArchive * __cdecl operator<<<UObject>(FArchive *param_1,TSubclassOf<UObject> *param_2)

{
  (**(code **)(*(longlong *)param_1 + 0x150))();
  return param_1;
}

// BinarySearchBy<TArray<TTuple<unsigned___int64,float>,TSizedDefaultAllocator<32>_>,unsigned___int64,TSortedMap<unsigned___int64,float,TSizedDefaultAllocator<32>,TLess<unsigned___int64_const_>_>::FKeyForward,TLess<unsigned___int64_const_>_> @ 1476782d0

int __cdecl
Algo::
BinarySearchBy<TArray<TTuple<unsigned___int64,float>,TSizedDefaultAllocator<32>_>,unsigned___int64,TSortedMap<unsigned___int64,float,TSizedDefaultAllocator<32>,TLess<unsigned___int64_const_>_>::FKeyForward,TLess<unsigned___int64_const_>_>
          (TArray<TTuple<unsigned___int64,float>,TSizedDefaultAllocator<32>_> *param_1,
          ulong64 *param_2,FKeyForward param_3,TLess<unsigned___int64_const_> param_4)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  pFVar2 = (param_1->AllocatorInstance).Data;
  iVar5 = 0;
  uVar1 = param_1->ArrayNum;
  if (0 < (int)uVar1) {
    uVar6 = uVar1;
    do {
      iVar4 = (uVar6 >> 1) + iVar5;
      if (*(ulonglong *)(pFVar2 + (longlong)iVar4 * 0x10) < *param_2) {
        iVar5 = iVar4 + (uVar6 & 1);
      }
      uVar3 = uVar6 >> 1;
      uVar6 = uVar6 >> 1;
    } while (uVar3 != 0);
  }
  iVar4 = -1;
  if ((iVar5 < (int)uVar1) &&
     (iVar4 = -1, *(ulonglong *)(pFVar2 + (longlong)iVar5 * 0x10) <= *param_2)) {
    iVar4 = iVar5;
  }
  return iVar4;
}

// BinarySearchBy<TArray<TTuple<unsigned___int64,FAudioVirtualLoop::FWaveInstanceData>,TSizedDefaultAllocator<32>_>,unsigned___int64,TSortedMap<unsigned___int64,FAudioVirtualLoop::FWaveInstanceData,TSizedDefaultAllocator<32>,TLess<unsigned___int64_const_>_>::FKeyForward,TLess<unsigned___int64_const_>_> @ 147678350

int __cdecl
Algo::
BinarySearchBy<TArray<TTuple<unsigned___int64,FAudioVirtualLoop::FWaveInstanceData>,TSizedDefaultAllocator<32>_>,unsigned___int64,TSortedMap<unsigned___int64,FAudioVirtualLoop::FWaveInstanceData,TSizedDefaultAllocator<32>,TLess<unsigned___int64_const_>_>::FKeyForward,TLess<unsigned___int64_const_>_>
          (TArray<TTuple<unsigned___int64,FAudioVirtualLoop::FWaveInstanceData>,TSizedDefaultAllocator<32>_>
           *param_1,ulong64 *param_2,FKeyForward param_3,TLess<unsigned___int64_const_> param_4)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  pFVar2 = (param_1->AllocatorInstance).Data;
  iVar5 = 0;
  uVar1 = param_1->ArrayNum;
  if (0 < (int)uVar1) {
    uVar6 = uVar1;
    do {
      iVar4 = (uVar6 >> 1) + iVar5;
      if (*(ulonglong *)(pFVar2 + (longlong)iVar4 * 0x28) < *param_2) {
        iVar5 = iVar4 + (uVar6 & 1);
      }
      uVar3 = uVar6 >> 1;
      uVar6 = uVar6 >> 1;
    } while (uVar3 != 0);
  }
  if ((int)uVar1 <= iVar5) {
    return -1;
  }
  iVar4 = -1;
  if (*(ulonglong *)(pFVar2 + (longlong)iVar5 * 0x28) <= *param_2) {
    iVar4 = iVar5;
  }
  return iVar4;
}

// CastChecked<UBlueprint,UObject> @ 1476783d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UBlueprint * __cdecl CastChecked<UBlueprint,UObject>(UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<UBlueprint>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UBlueprint::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (UBlueprint *)param_1;
  }
  pFVar3 = GetTypeName<UBlueprint>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UObject>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// ConstructItems<TObjectPtr<UCameraShakeBase>,TObjectPtr<UCameraShakeBase>,int> @ 147678490

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __cdecl
ConstructItems<TObjectPtr<UCameraShakeBase>,TObjectPtr<UCameraShakeBase>,int>
          (void *param_1,TObjectPtr<UCameraShakeBase> *param_2,int param_3)

{
  TObjectPtr<UCameraShakeBase> TVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      TVar1.field0_0x0 = (TObjectPtr<UCameraShakeBase>_u_0)param_2->field0_0x0;
      ((TObjectPtr<UCameraShakeBase>_u_0 *)(lVar2 + (longlong)param_2))->DebugPtr =
           (UCameraShakeBase *)TVar1.field0_0x0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar1.field0_0x0 != (UCameraShakeBase *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar1.field0_0x0);
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<TObjectPtr<UEdGraph>,TObjectPtr<UEdGraph>,int> @ 1476784f0

void __cdecl
ConstructItems<TObjectPtr<UEdGraph>,TObjectPtr<UEdGraph>,int>
          (void *param_1,TObjectPtr<UEdGraph> *param_2,int param_3)

{
  TObjectPtr<UEdGraph> TVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      TVar1.field0_0x0 = (TObjectPtr<UEdGraph>_u_0)param_2->field0_0x0;
      ((TObjectPtr<UEdGraph>_u_0 *)(lVar2 + (longlong)param_2))->DebugPtr =
           (UEdGraph *)TVar1.field0_0x0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar1.field0_0x0 != (UEdGraph *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar1.field0_0x0);
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FActiveCameraShakeInfo,FActiveCameraShakeInfo,int> @ 147678550

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __cdecl
ConstructItems<FActiveCameraShakeInfo,FActiveCameraShakeInfo,int>
          (void *param_1,FActiveCameraShakeInfo *param_2,int param_3)

{
  int *piVar1;
  UObject *pUVar2;
  undefined1 *puVar3;
  bool *pbVar4;
  
  if (param_3 != 0) {
    puVar3 = (undefined1 *)((longlong)param_1 + 0x10);
    pbVar4 = &param_2->bIsCustomInitialized;
    do {
      pUVar2 = *(UObject **)(puVar3 + (longlong)param_2 + (-0x10 - (longlong)param_1));
      *(UObject **)(puVar3 + -0x10) = pUVar2;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar2);
      }
      *(FWeakObjectPtr *)(puVar3 + -8) = *(FWeakObjectPtr *)(pbVar4 + -8);
      *puVar3 = *pbVar4;
      piVar1 = (int *)(pbVar4 + 4);
      pbVar4 = pbVar4 + 0x18;
      *(int *)(puVar3 + 4) = *piVar1;
      puVar3 = puVar3 + 0x18;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FBPVariableMetaDataEntry,FBPVariableMetaDataEntry,int> @ 1476785e0

void __cdecl
ConstructItems<FBPVariableMetaDataEntry,FBPVariableMetaDataEntry,int>
          (void *param_1,FBPVariableMetaDataEntry *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_1 - (longlong)param_2;
    do {
      *(FName *)(lVar1 + (longlong)param_2) = param_2->DataKey;
      FString::FString((FString *)(lVar1 + 8 + (longlong)param_2),&param_2->DataValue);
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FBlueprintComponentChangedPropertyInfo,FBlueprintComponentChangedPropertyInfo,int> @ 147678640

void __cdecl
ConstructItems<FBlueprintComponentChangedPropertyInfo,FBlueprintComponentChangedPropertyInfo,int>
          (void *param_1,FBlueprintComponentChangedPropertyInfo *param_2,int param_3)

{
  TObjectPtr<UStruct> TVar1;
  TObjectPtr<UStruct>_u_0 *pTVar2;
  TObjectPtr<UStruct>_u_0 *pTVar3;
  
  if (param_3 != 0) {
    pTVar2 = (TObjectPtr<UStruct>_u_0 *)((longlong)param_1 + 0x10);
    pTVar3 = &(param_2->PropertyScope).field0_0x0;
    do {
      pTVar2[-2] = *(TObjectPtr<UStruct>_u_0 *)
                    ((longlong)pTVar2 + (longlong)param_2 + (-0x10 - (longlong)param_1));
      *(undefined4 *)(pTVar2 + -1) = *(undefined4 *)(pTVar3 + -1);
      TVar1.field0_0x0 = (TObjectPtr<UStruct>_u_0)pTVar3->DebugPtr;
      pTVar2->DebugPtr = (UStruct *)TVar1.field0_0x0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar1.field0_0x0 != (UStruct *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar1.field0_0x0);
      }
      pTVar3 = pTVar3 + 3;
      pTVar2 = pTVar2 + 3;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<Audio::FTabularRenderHelper::FItem,Audio::FTabularRenderHelper::FItem,int> @ 1476786c0

void __cdecl
ConstructItems<Audio::FTabularRenderHelper::FItem,Audio::FTabularRenderHelper::FItem,int>
          (void *param_1,FItem *param_2,int param_3)

{
  FLinearColor *pFVar1;
  FString *this;
  undefined8 uVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = (longlong)param_1 - (longlong)param_2;
    do {
      this = (FString *)(lVar3 + (longlong)param_2);
      FString::FString(this,&param_2->Text);
      pFVar1 = &param_2->Color;
      uVar2 = *(undefined8 *)((longlong)&(param_2->Color).field0_0x0 + 8);
      param_2 = param_2 + 1;
      this[1].Data.AllocatorInstance.Data = *(FScriptContainerElement **)&pFVar1->field0_0x0;
      this[1].Data.ArrayNum = (int)uVar2;
      this[1].Data.ArrayMax = (int)((ulonglong)uVar2 >> 0x20);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FPostProcessSettings,FPostProcessSettings,int> @ 147678730

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __cdecl
ConstructItems<FPostProcessSettings,FPostProcessSettings,int>
          (void *param_1,FPostProcessSettings *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_1 - (longlong)param_2;
    do {
      FPostProcessSettings::FPostProcessSettings
                ((FPostProcessSettings *)(lVar1 + (longlong)param_2),param_2);
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// CriticalSpringDamper<float> @ 147678880

void __cdecl
SpringMath::CriticalSpringDamper<float>
          (float *param_1,float *param_2,float param_3,float param_4,float param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if (param_4 <= __real_38d1b717) {
    param_4 = __real_38d1b717;
  }
  fVar3 = __real_40000000 / param_4;
  fVar1 = fVar3 * param_5;
  fVar2 = (*param_1 - param_3) * fVar3 + *param_2;
  fVar1 = __real_3f800000 /
          (((fVar1 * __real_3e83b5ca + __real_3ee6ad0d) * fVar1 + __real_3f80f478) * fVar1 +
          __real_3f800000);
  *param_1 = (fVar2 * param_5 + (*param_1 - param_3)) * fVar1 + param_3;
  *param_2 = (*param_2 - fVar2 * fVar3 * param_5) * fVar1;
  return;
}

// CriticalSpringDamper<UE::Math::TVector2<double>_> @ 147678940

void __cdecl
SpringMath::CriticalSpringDamper<UE::Math::TVector2<double>_>
          (TVector2<double> *param_1,TVector2<double> *param_2,TVector2<double> *param_3,
          float param_4,float param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  if (param_4 <= __real_38d1b717) {
    param_4 = __real_38d1b717;
  }
  dVar9 = (param_1->field0_0x0)._s_0.Y - (param_3->field0_0x0)._s_0.Y;
  dVar8 = (double)param_5;
  dVar7 = (param_1->field0_0x0)._s_0.X - (param_3->field0_0x0)._s_0.X;
  dVar4 = (double)(__real_40000000 / param_4);
  fVar5 = (__real_40000000 / param_4) * param_5;
  dVar2 = dVar4 * dVar7 + (param_2->field0_0x0)._s_0.X;
  dVar3 = dVar4 * dVar9 + (param_2->field0_0x0)._s_0.Y;
  dVar6 = (double)(__real_3f800000 /
                  (((fVar5 * __real_3e83b5ca + __real_3ee6ad0d) * fVar5 + __real_3f80f478) * fVar5 +
                  __real_3f800000));
  dVar1 = (param_3->field0_0x0)._s_0.Y;
  (param_1->field0_0x0)._s_0.X = (dVar2 * dVar8 + dVar7) * dVar6 + (param_3->field0_0x0)._s_0.X;
  (param_1->field0_0x0)._s_0.Y = (dVar3 * dVar8 + dVar9) * dVar6 + dVar1;
  (param_2->field0_0x0)._s_0.X = ((param_2->field0_0x0)._s_0.X - dVar2 * dVar4 * dVar8) * dVar6;
  (param_2->field0_0x0)._s_0.Y = ((param_2->field0_0x0)._s_0.Y - dVar3 * dVar4 * dVar8) * dVar6;
  return;
}

// CriticalSpringDamper<UE::Math::TVector<double>_> @ 147678a70

void __cdecl
SpringMath::CriticalSpringDamper<UE::Math::TVector<double>_>
          (TVector<double> *param_1,TVector<double> *param_2,TVector<double> *param_3,float param_4,
          float param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  float fVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  if (param_4 <= __real_38d1b717) {
    param_4 = __real_38d1b717;
  }
  dVar11 = (param_1->field0_0x0)._s_0.Y - (param_3->field0_0x0)._s_0.Y;
  dVar2 = (param_1->field0_0x0)._s_0.Z - (param_3->field0_0x0)._s_0.Z;
  dVar3 = (double)param_5;
  dVar10 = (param_1->field0_0x0)._s_0.X - (param_3->field0_0x0)._s_0.X;
  dVar7 = (double)(__real_40000000 / param_4);
  fVar8 = (__real_40000000 / param_4) * param_5;
  dVar4 = dVar7 * dVar10 + (param_2->field0_0x0)._s_0.X;
  dVar5 = dVar7 * dVar11 + (param_2->field0_0x0)._s_0.Y;
  dVar6 = dVar7 * dVar2 + (param_2->field0_0x0)._s_0.Z;
  dVar9 = (double)(__real_3f800000 /
                  (((fVar8 * __real_3e83b5ca + __real_3ee6ad0d) * fVar8 + __real_3f80f478) * fVar8 +
                  __real_3f800000));
  dVar1 = (param_3->field0_0x0)._s_0.Y;
  (param_1->field0_0x0)._s_0.X = (dVar4 * dVar3 + dVar10) * dVar9 + (param_3->field0_0x0)._s_0.X;
  (param_1->field0_0x0)._s_0.Y = (dVar5 * dVar3 + dVar11) * dVar9 + dVar1;
  (param_1->field0_0x0)._s_0.Z = (dVar6 * dVar3 + dVar2) * dVar9 + (param_3->field0_0x0)._s_0.Z;
  (param_2->field0_0x0)._s_0.X = ((param_2->field0_0x0)._s_0.X - dVar4 * dVar7 * dVar3) * dVar9;
  (param_2->field0_0x0)._s_0.Y = ((param_2->field0_0x0)._s_0.Y - dVar5 * dVar7 * dVar3) * dVar9;
  (param_2->field0_0x0)._s_0.Z = ((param_2->field0_0x0)._s_0.Z - dVar6 * dVar7 * dVar3) * dVar9;
  return;
}

// DefaultConstructItems<TTuple<FAudioChunkCache::FCacheElement_*,int>,int> @ 147678c10

void __cdecl
DefaultConstructItems<TTuple<FAudioChunkCache::FCacheElement_*,int>,int>(void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined8 *)param_1 = 0;
    *(undefined4 *)((longlong)param_1 + 8) = 0;
    param_1 = (void *)((longlong)param_1 + 0x10);
  }
  return;
}

// DefaultConstructItems<FBatchedElements::FBatchedMeshElement,int> @ 147678c40

void __cdecl
DefaultConstructItems<FBatchedElements::FBatchedMeshElement,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x10);
    do {
      *(uint *)(puVar1 + 4) = *(uint *)(puVar1 + 4) & 0xfffffffe;
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1[2] = 0;
      *(undefined8 *)((longlong)puVar1 + 0x24) = 0;
      *(undefined8 *)((longlong)puVar1 + 0x2c) = 0;
      puVar1[7] = 0;
      puVar1[8] = 0;
      puVar1[9] = 0;
      puVar1[10] = 0;
      puVar1 = puVar1 + 0xd;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FBatchedElements::FBatchedPoint,int> @ 147678c90

void __cdecl DefaultConstructItems<FBatchedElements::FBatchedPoint,int>(void *param_1,int param_2)

{
  return;
}

// DefaultConstructItems<FBatchedElements::FBatchedSprite,int> @ 147678ca0

void __cdecl DefaultConstructItems<FBatchedElements::FBatchedSprite,int>(void *param_1,int param_2)

{
  return;
}

// DefaultConstructItems<FBatchedElements::FBatchedThickLines,int> @ 147678cb0

void __cdecl
DefaultConstructItems<FBatchedElements::FBatchedThickLines,int>(void *param_1,int param_2)

{
  return;
}

// DefaultConstructItems<FBatchedElements::FBatchedWireTris,int> @ 147678cc0

void __cdecl
DefaultConstructItems<FBatchedElements::FBatchedWireTris,int>(void *param_1,int param_2)

{
  return;
}

// DestructItems<FBPVariableMetaDataEntry,int> @ 147678d30

void __cdecl
DestructItems<FBPVariableMetaDataEntry,int>(FBPVariableMetaDataEntry *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  
  if (param_2 != 0) {
    pFVar2 = &param_1->DataValue;
    do {
      pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar2 = (FString *)((longlong)(pFVar2 + 1) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FBuilderPoly,int> @ 147678d70

void __cdecl DestructItems<FBuilderPoly,int>(FBuilderPoly *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->VertexIndices).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FAudioChunkCache::FCacheElement,int> @ 147678db0

/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */

void __cdecl DestructItems<FAudioChunkCache::FCacheElement,int>(FCacheElement *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  FBulkDataBatchRequest FVar3;
  FBulkDataBatchRequest *pFVar4;
  FBulkDataBatchRequest local_18 [2];
  
  if (param_2 != 0) {
    pFVar4 = &param_1->Read;
    do {
      if (*pFVar4 != (FBulkDataBatchRequest)0x0) {
        iVar2 = (**(code **)(*(longlong *)*pFVar4 + 0x20))();
        if (iVar2 == 1) {
          FVar3 = (FBulkDataBatchRequest)0x0;
          if (*pFVar4 != (FBulkDataBatchRequest)0x0) {
            (**(code **)(*(longlong *)*pFVar4 + 0x28))();
            FVar3 = *pFVar4;
          }
          if ((pFVar4 != local_18) &&
             (*pFVar4 = (FBulkDataBatchRequest)0x0, FVar3 != (FBulkDataBatchRequest)0x0)) {
            (**(code **)(*(longlong *)FVar3 + 0x10))();
          }
        }
      }
      if ((*(int *)(pFVar4 + -1) == 0) && (pFVar4[-9] != (FBulkDataBatchRequest)0x0)) {
        FMemory::Free((void *)pFVar4[-9]);
        pFVar4[-9] = (FBulkDataBatchRequest)0x0;
      }
      if (*pFVar4 != (FBulkDataBatchRequest)0x0) {
        (**(code **)(*(longlong *)*pFVar4 + 0x10))();
      }
      FVar3 = pFVar4[-3];
      if (FVar3 != (FBulkDataBatchRequest)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)FVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*(longlong *)FVar3 + 8))(FVar3,1);
        }
      }
      pFVar4 = pFVar4 + 0x16;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FCameraShakeDebugData,int> @ 147678e80

void __cdecl DestructItems<FCameraShakeDebugData,int>(FCameraShakeDebugData *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  
  if (param_2 != 0) {
    pFVar2 = &param_1->ShakeInstanceName;
    do {
      pFVar1 = (((TArray<FCameraShakeDebugDataPoint,TSizedDefaultAllocator<32>_> *)(pFVar2 + 1))->
               AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar2 = pFVar2 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<Audio::FTabularRenderHelper::FCol,int> @ 147678ed0

void __cdecl DestructItems<Audio::FTabularRenderHelper::FCol,int>(FCol *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->Items;
    do {
      pFVar1 = (((TArray<FLinearColor,TSizedDefaultAllocator<32>_> *)(pTVar2 + 1))->
               AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      DestructItems<FString,int>((FString *)(pTVar2->AllocatorInstance).Data,pTVar2->ArrayNum);
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      if (*(void **)((longlong)(pTVar2 + -2) + 8) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)(pTVar2 + -2) + 8));
      }
      pTVar2 = (TArray<FString,TSizedDefaultAllocator<32>_> *)((longlong)(pTVar2 + 3) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<Audio::FTabularRenderHelper::FItem,int> @ 147678f40

void __cdecl DestructItems<Audio::FTabularRenderHelper::FItem,int>(FItem *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->Text).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FPostProcessSettings,int> @ 147678f80

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __cdecl DestructItems<FPostProcessSettings,int>(FPostProcessSettings *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  FWeightedBlendables *pFVar2;
  
  if (param_2 != 0) {
    pFVar2 = &param_1->WeightedBlendables;
    do {
      pFVar1 = (pFVar2->Array).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar2 = pFVar2 + 0x77;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>,int> @ 147678fd0

void __cdecl
DestructItems<TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>,int>
          (TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
           *param_1,int param_2)

{
  ForElementType<FSetElementId> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &(param_1->Hash).SecondaryData;
    do {
      *(undefined4 *)(pFVar1 + 1) = 0;
      if (*pFVar1 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)*pFVar1);
      }
      TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(pFVar1 + -8));
      pFVar1 = pFVar1 + 10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FAudioChunkCache,int> @ 147679030

/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */

void __cdecl DestructItems<FAudioChunkCache,int>(FAudioChunkCache *param_1,int param_2)

{
  int *piVar1;
  FCacheElement *pFVar2;
  void *pvVar3;
  undefined8 *puVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int *piVar8;
  FLLMScope local_res10 [2];
  FMemScope local_res18;
  
  if (param_2 != 0) {
    piVar8 = &(param_1->CachePool).ArrayNum;
    do {
      FLLMScope::FLLMScope(local_res10,AudioStreamCache,false,None,Default,true);
      FMemScope::FMemScope(&local_res18,AudioStreamCache,true);
      piVar1 = piVar8 + 1;
      pFVar2 = (FCacheElement *)
               (((TArray<FAudioChunkCache::FCacheElement,TSizedDefaultAllocator<32>_> *)
                (piVar8 + -2))->AllocatorInstance).Data;
      if (*piVar1 < 0) {
        DestructItems<FAudioChunkCache::FCacheElement,int>(pFVar2,*piVar8);
        *piVar8 = 0;
        if (*piVar1 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xb0,8,0,(ForAnyElementType *)(piVar8 + -2),0,piVar1);
        }
      }
      else {
        DestructItems<FAudioChunkCache::FCacheElement,int>(pFVar2,*piVar8);
        *piVar8 = 0;
      }
      if ((piVar8[0x10] != 0) &&
         (bVar7 = FDebug::CheckVerifyFailedImpl2
                            ("NumberOfLoadsInFlight.GetValue() == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioStreamingCache.cpp"
                             ,0x339,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      FMemScope::~FMemScope(&local_res18);
      FLLMScope::~FLLMScope(local_res10);
      pvVar3 = *(void **)(piVar8 + 0x50);
      if (pvVar3 != (void *)0x0) {
        puVar4 = *(undefined8 **)((longlong)pvVar3 + 8);
        while (puVar4 != (undefined8 *)0x0) {
          *(undefined8 *)((longlong)pvVar3 + 8) = *puVar4;
          operator_delete(puVar4,0x20);
          puVar4 = *(undefined8 **)((longlong)pvVar3 + 8);
        }
        operator_delete(pvVar3,0x10);
      }
      DeleteCriticalSection((LPCRITICAL_SECTION)(piVar8 + 0x46));
      piVar8[0x44] = 0;
      if (*(void **)(piVar8 + 0x42) != (void *)0x0) {
        FMemory::Free(*(void **)(piVar8 + 0x42));
      }
      TSparseArray<TSparseSetElement<TTuple<TSharedPtr<FSoundWaveProxy,1>,FAudioChunkCache::FSoundWaveMemoryTracker>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<TSharedPtr<FSoundWaveProxy,1>,FAudioChunkCache::FSoundWaveMemoryTracker>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<TSharedPtr<FSoundWaveProxy,1>,FAudioChunkCache::FSoundWaveMemoryTracker>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(piVar8 + 0x32));
      piVar8[0x30] = 0;
      if (*(void **)(piVar8 + 0x2e) != (void *)0x0) {
        FMemory::Free(*(void **)(piVar8 + 0x2e));
      }
      TSparseArray<TSparseSetElement<TTuple<FAudioChunkCache::FChunkKey,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FAudioChunkCache::FChunkKey,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FAudioChunkCache::FChunkKey,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(piVar8 + 0x1e));
      DeleteCriticalSection((LPCRITICAL_SECTION)(piVar8 + 0x14));
      operator_delete(*(void **)(piVar8 + 0xe),8);
      operator_delete(*(void **)(piVar8 + 0xc),8);
      operator_delete(*(void **)(piVar8 + 8),8);
      DestructItems<FAudioChunkCache::FCacheElement,int>
                ((FCacheElement *)
                 (((TArray<FAudioChunkCache::FCacheElement,TSizedDefaultAllocator<32>_> *)
                  (piVar8 + -2))->AllocatorInstance).Data,*piVar8);
      pFVar5 = (((TArray<FAudioChunkCache::FCacheElement,TSizedDefaultAllocator<32>_> *)
                (piVar8 + -2))->AllocatorInstance).Data;
      if (pFVar5 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar5);
      }
      piVar8 = piVar8 + 0x58;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// ExecuteOnGameThread<`AudioCommandPrivate::FGameThreadAudioCommandQueue::FlushCommands'::__l7::<lambda_1>_> @ 14767a600

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
ExecuteOnGameThread<_AudioCommandPrivate::FGameThreadAudioCommandQueue::FlushCommands_::__l7::<lambda_1>_>
          (wchar_t *param_1,<lambda_1> *param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FTSTicker *this;
  code **ppcVar3;
  undefined1 auStackY_d8 [32];
  TWeakPtr<FTSTicker::FElement,1> local_a8;
  code *local_98;
  code *local_88;
  code *pcStack_80;
  code *local_78;
  code **local_70;
  TStatIdData *local_68;
  code *local_58 [2];
  code *local_48 [3];
  code **local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  this = FTSTicker::GetCoreTicker();
  local_98 = *(code **)&param_2->Function;
  local_70 = *(code ***)&(param_2->Function).field_0x28;
  *(undefined8 *)&(param_2->Function).field_0x28 = 0;
  local_78 = *(code **)&(param_2->Function).field_0x20;
  local_88 = *(code **)&(param_2->Function).field_0x10;
  pcStack_80 = *(code **)&(param_2->Function).field_0x18;
  if (local_98 != (code *)0x0) {
    *(undefined8 *)&param_2->Function = 0;
  }
  local_68 = (param_2->StatId).StatIdPtr;
  local_58[0] = (code *)0x0;
  local_30 = FMemory::Malloc(0x50,0x10);
  *local_30 = (code *)&
                      ___7__TFunction_OwnedObject_V<lambda_1>__1____ExecuteOnGameThread_V<lambda_1>__6__FlushCommands_FGameThreadAudioCommandQueue_AudioCommandPrivate__QEAAXXZ___YAXPEB_W__QEAV1_6__FlushCommands_FGameThreadAudioCommandQueue_AudioCommandPrivate__QEAAXXZ__Z__00_00_Function_Private_Core_UE__6B_
  ;
  ppcVar3 = local_30 + 2;
  *ppcVar3 = local_98;
  local_30[7] = (code *)local_70;
  local_70 = (code **)0x0;
  local_30[4] = local_88;
  local_30[5] = pcStack_80;
  local_30[6] = local_78;
  if (*ppcVar3 != (code *)0x0) {
    local_98 = (code *)0x0;
  }
  local_30[8] = (code *)local_68;
  if (ppcVar3 != (code **)0x0) {
    local_58[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`ExecuteOnGameThread<`AudioCommandPrivate::FGameThreadAudioCommandQueue::FlushCommands'::__l7::<lambda_1>_>'::__l2::<lambda_1>,bool,float>
                  ::Call;
  }
  FTSTicker::AddTicker(this,&local_a8,param_1,0.0,(TUniqueFunction<bool___cdecl(float)> *)local_58);
  if (local_a8.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(local_a8.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((local_a8.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_a8.WeakReferenceCount.ReferenceController,1);
    }
  }
  if (local_58[0] != (code *)0x0) {
    ppcVar3 = local_58 + 2;
    if (local_30 != (code **)0x0) {
      ppcVar3 = local_30;
    }
    (**(code **)(*ppcVar3 + 0x10))();
  }
  if (local_98 != (code *)0x0) {
    ppcVar3 = &local_88;
    if (local_70 != (code **)0x0) {
      ppcVar3 = local_70;
    }
    (**(code **)(*ppcVar3 + 0x10))();
  }
  return;
}

// FindFProperty<FSetProperty> @ 14767a830

FSetProperty * __cdecl
FindFProperty<FSetProperty>(UStruct *param_1,FName param_2,EFieldIterationFlags param_3)

{
  int iVar1;
  FSetProperty *pFVar2;
  bool bVar3;
  UClass *pUVar4;
  FName FVar5;
  FName FVar6;
  TFieldIterator<FSetProperty> local_28;
  
  if (param_2 == (FName)0x0) {
    return (FSetProperty *)0x0;
  }
  FVar6.ComparisonIndex.Value = 0;
  FVar6.Number = 0;
  if (param_1 == (UStruct *)0x0) {
    local_28.Field = (FField *)0x0;
  }
  else {
    local_28.Field = param_1->ChildProperties;
  }
  local_28.InterfaceIndex = -1;
  local_28.bIncludeSuper = (bool)(param_3 & IncludeSuper);
  local_28.bIncludeDeprecated = (bool)(param_3 >> 1 & 1);
  local_28.Struct = param_1;
  if (((param_3 & IncludeInterfaces) != None) && (param_1 != (UStruct *)0x0)) {
    pUVar4 = Z_Construct_UClass_UClass_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       (local_28.bIncludeInterface = true,
       (longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
       == &pUVar4->_padding_)) goto LAB_14767a8c0;
  }
  local_28.bIncludeInterface = false;
LAB_14767a8c0:
  TFieldIterator<FSetProperty>::IterateToNext(&local_28);
  pFVar2 = (FSetProperty *)local_28.Field;
  while( true ) {
    if (pFVar2 == (FSetProperty *)0x0) {
      return (FSetProperty *)0x0;
    }
    local_28.Field = (FField *)pFVar2;
    bVar3 = IsThisNotNull(pFVar2,"FField::GetFName");
    FVar5 = FVar6;
    if (bVar3) {
      FVar5 = (FName)pFVar2->_padding_;
    }
    if (FVar5 == param_2) break;
    local_28.Field = (FField *)pFVar2->_padding_;
    TFieldIterator<FSetProperty>::IterateToNext(&local_28);
    pFVar2 = (FSetProperty *)local_28.Field;
  }
  return pFVar2;
}

// ForEachComponent_Internal<UFXSystemComponent,1,1,`AActor::GetComponents<UFXSystemComponent,TSizedDefaultAllocator<32>_>'::__l2::<lambda_1>_> @ 14767af20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
AActor::
ForEachComponent_Internal<UFXSystemComponent,1,1,_AActor::GetComponents<UFXSystemComponent,TSizedDefaultAllocator<32>_>_::__l2::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  undefined1 *puVar1;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar2;
  ForElementType<AActor_*> FVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  undefined1 *puVar7;
  UFXSystemComponent *pUVar8;
  AActor *this_00;
  code *pcVar9;
  <lambda_1> <Var10;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar11;
  bool bVar12;
  UClass *pUVar13;
  UClass *pUVar14;
  longlong lVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  ForElementType<AActor_*> FVar19;
  undefined1 *puVar20;
  uint *puVar21;
  <lambda_1> local_res18;
  undefined1 auStack_1f8 [32];
  longlong *local_1d8;
  ForElementType<AActor_*> local_1d0;
  longlong local_1c8;
  longlong local_1c0;
  undefined8 local_1b8;
  undefined1 local_1a8;
  undefined1 local_1a7 [7];
  longlong local_1a0;
  int local_198;
  int local_194;
  UObject *local_190;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_188;
  int iStack_180;
  uint uStack_17c;
  undefined1 *local_178;
  undefined4 uStack_170;
  int iStack_16c;
  int local_168;
  undefined4 uStack_164;
  int iStack_160;
  undefined4 uStack_15c;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_158;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_150;
  undefined8 uStack_130;
  undefined4 local_10c;
  ForElementType<AActor_*> local_108;
  int local_40;
  int local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  lVar15 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar15 == 0) {
    return;
  }
  local_res18.OutComponents = param_2.OutComponents;
  pUVar13 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar13 == (UClass *)0x0) {
    return;
  }
  iVar5 = (int)pUVar13->_padding_;
  if ((*(int *)(lVar15 + 0x38) < iVar5) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar15 + 0x30) + (longlong)iVar5 * 8) !=
      &pUVar13->_padding_)) {
    bVar12 = false;
  }
  else {
    bVar12 = true;
  }
  if (!bVar12) {
    return;
  }
  pUVar13 = *(UClass **)param_1.Class.field0_0x0;
  if (pUVar13 == (UClass *)0x0) {
    return;
  }
  pUVar14 = Z_Construct_UClass_UActorComponent_NoRegister();
  if ((pUVar13 != pUVar14) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("bClassIsActorComponent == false || ComponentClass == UActorComponent::StaticClass()"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                          ,0xf1c,L""), bVar12)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pUVar14 = Z_Construct_UClass_UFXSystemComponent_NoRegister();
  if (pUVar14 != (UClass *)0x0) {
    iVar5 = (int)pUVar14->_padding_;
    if (((int)pUVar13->_padding_ < iVar5) ||
       ((longlong *)*(undefined1 **)(pUVar13->_padding_ + (longlong)iVar5 * 8) !=
        &pUVar14->_padding_)) {
      bVar12 = false;
    }
    else {
      bVar12 = true;
    }
    if (bVar12) goto LAB_14767b043;
  }
  bVar12 = ::FDebug::CheckVerifyFailedImpl2
                     ("ComponentClass->IsChildOf(ComponentType::StaticClass())",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                      ,0xf1d,L"");
  if (bVar12) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
LAB_14767b043:
  local_3c = 0x18;
  pTVar2 = &this->OwnedComponents;
  local_108.SecondaryData = (ForElementType<AActor_*>)0x0;
  puVar1 = &(this->OwnedComponents).Elements.field_0x10;
  iStack_180 = 0;
  local_40 = 0;
  iVar5 = *(int *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_17c = 1;
  local_168 = 0;
  iStack_16c = iStack_180;
  if (iVar5 != 0) {
    puVar21 = *(uint **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar21 == (uint *)0x0) {
      puVar21 = (uint *)puVar1;
    }
    uVar18 = *puVar21;
    iStack_180 = 0;
    local_168 = 0;
    while (uVar18 == 0) {
      iStack_180 = iStack_180 + 1;
      local_168 = local_168 + 0x20;
      iStack_16c = iVar5;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_180) goto LAB_14767b0dd;
      uVar18 = puVar21[iStack_180];
    }
    uStack_17c = ~(uVar18 - 1) & uVar18;
    uVar4 = (ulonglong)uStack_17c * 2 + 1;
    lVar15 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_198 = (int)lVar15;
    iStack_16c = local_198 + -1 + local_168;
    if (iVar5 < iStack_16c) {
      iStack_16c = iVar5;
    }
  }
LAB_14767b0dd:
  uVar18 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_164 = local_10c;
  uVar17 = uVar18 & 0xffffffe0;
  iStack_160 = *(int *)&(this->OwnedComponents).Elements.field_0x8 -
               *(int *)&(this->OwnedComponents).Elements.field_0x34;
  uStack_170 = 0xffffffff;
  TStack_150._padding_ = CONCAT44(uStack_17c,iStack_180);
  TStack_150.CurrentBitIndex = iStack_16c;
  TStack_150.UnvisitedBitMask = 0xffffffff;
  iVar16 = (int)uVar18 >> 5;
  TStack_150._28_4_ = local_10c;
  TStack_150.BaseBitIndex = local_168;
  uStack_130 = CONCAT44(uStack_15c,iStack_160);
  local_188 = pTVar2;
  local_178 = puVar1;
  local_158 = pTVar2;
  TStack_150.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar18 < 0) || (iVar5 < (int)uVar18)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar12)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  uVar6 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  if (uVar18 != uVar6) {
    puVar7 = *(undefined1 **)&(this->OwnedComponents).Elements.field_0x20;
    puVar20 = puVar1;
    if (puVar7 != (undefined1 *)0x0) {
      puVar20 = puVar7;
    }
    uVar18 = -1 << ((byte)uVar18 & 0x1f) & *(uint *)(puVar20 + (longlong)iVar16 * 4);
    while (uVar18 == 0) {
      iVar16 = iVar16 + 1;
      uVar17 = uVar17 + 0x20;
      uVar18 = uVar6;
      if ((int)(((int)(uVar6 - 1) >> 0x1f & 0x1fU) + (uVar6 - 1)) >> 5 < iVar16) goto LAB_14767b1e0;
      uVar18 = *(uint *)(puVar20 + (longlong)iVar16 * 4);
    }
    uVar4 = (ulonglong)(~(uVar18 - 1) & uVar18) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_194 = (int)lVar15;
    uVar18 = local_194 + -1 + uVar17;
    if ((int)uVar6 < (int)uVar18) {
      uVar18 = uVar6;
    }
  }
LAB_14767b1e0:
  do {
    pTVar11 = local_158;
    if (*(int *)&(local_158->Elements).field_0x8 - *(int *)&(local_158->Elements).field_0x34 !=
        (int)uStack_130) {
      local_1a8 = 0;
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_1a8);
    }
    iVar5 = local_40;
    <Var10.OutComponents = local_res18.OutComponents;
    if (((TStack_150.CurrentBitIndex == uVar18) &&
        (TStack_150.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar11 == pTVar2)
       ) {
      FVar19 = (ForElementType<AActor_*>)&local_108;
      if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FVar19 = local_108.SecondaryData;
      }
      FVar3 = (ForElementType<AActor_*>)((longlong)FVar19 + (longlong)local_40 * 8);
      while( true ) {
        if (local_40 != iVar5) {
          `TCheckedPointerIterator<AActor_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_1a7);
        }
        if (FVar19 == FVar3) break;
        local_190 = *(UObject **)param_1.Class.field0_0x0;
        this_00 = *(AActor **)FVar19;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_190 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_190);
        }
        ForEachComponent_Internal<UFXSystemComponent,1,1,_AActor::GetComponents<UFXSystemComponent,TSizedDefaultAllocator<32>_>_::__l2::<lambda_1>_>
                  (this_00,(TSubclassOf<UActorComponent>)&local_190,<Var10);
        FVar19 = (ForElementType<AActor_*>)((longlong)FVar19 + 8);
      }
      if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FMemory::Free((void *)local_108.SecondaryData);
      }
      return;
    }
    pUVar8 = *(UFXSystemComponent **)
              (*(longlong *)&pTVar11->Elements + (longlong)TStack_150.CurrentBitIndex * 0x10);
    if (pUVar8 != (UFXSystemComponent *)0x0) {
      `AActor::GetComponents<UFXSystemComponent,TSizedDefaultAllocator<32>_>'::__l2::<lambda_1>::
      operator()(&local_res18,pUVar8);
      pUVar13 = Z_Construct_UClass_UChildActorComponent_NoRegister();
      iVar5 = (int)pUVar13->_padding_;
      if (((iVar5 <= *(int *)(pUVar8->_padding_ + 0x38)) &&
          ((longlong *)
           *(undefined1 **)(*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)iVar5 * 8) ==
           &pUVar13->_padding_)) && (local_1a0 = pUVar8->_padding_, local_1a0 != 0)) {
        FVar19 = (ForElementType<AActor_*>)&local_108;
        if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
          FVar19 = local_108.SecondaryData;
        }
        if ((ulonglong)FVar19 <= &local_1a0) {
          FVar19 = (ForElementType<AActor_*>)&local_108;
          if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
            FVar19 = local_108.SecondaryData;
          }
          if (&local_1a0 < (longlong *)((longlong)FVar19 + (longlong)local_3c * 8)) {
            local_1c0 = (longlong)local_40;
            local_1b8 = 8;
            local_1d8 = &local_1a0;
            local_1d0 = (ForElementType<AActor_*>)&local_108;
            if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
              local_1d0 = local_108.SecondaryData;
            }
            local_1c8 = (longlong)local_3c;
            bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               );
            if (bVar12) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
          }
        }
        if (local_40 == local_3c) {
          local_40 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<AActor_*>_>
                               (0x808,&local_108,&local_3c);
        }
        lVar15 = (longlong)local_40;
        FVar19 = (ForElementType<AActor_*>)&local_108;
        if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
          FVar19 = local_108.SecondaryData;
        }
        local_40 = local_40 + 1;
        *(longlong *)((longlong)FVar19 + lVar15 * 8) = local_1a0;
      }
    }
    TStack_150.UnvisitedBitMask = TStack_150.UnvisitedBitMask & ~TStack_150._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_150);
  } while( true );
}

// ForEachComponent_Internal<UFXSystemComponent,1,0,`AActor::GetComponents<UFXSystemComponent,TSizedDefaultAllocator<32>_>'::__l2::<lambda_1>_> @ 14767b450

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
AActor::
ForEachComponent_Internal<UFXSystemComponent,1,0,_AActor::GetComponents<UFXSystemComponent,TSizedDefaultAllocator<32>_>_::__l2::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  UFXSystemComponent *pUVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  UClass *pUVar9;
  UClass *pUVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  undefined1 *puVar15;
  int iVar16;
  uint *puVar17;
  undefined1 local_res10 [8];
  TArray<UFXSystemComponent_*,TSizedDefaultAllocator<32>_> *local_res18;
  int local_res20;
  undefined4 local_9c;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  lVar11 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar11 == 0) {
    return;
  }
  local_res18 = param_2.OutComponents;
  pUVar9 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar9 == (UClass *)0x0) {
    return;
  }
  iVar3 = (int)pUVar9->_padding_;
  if ((*(int *)(lVar11 + 0x38) < iVar3) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar11 + 0x30) + (longlong)iVar3 * 8) !=
      &pUVar9->_padding_)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  if (!bVar6) {
    return;
  }
  pUVar9 = *(UClass **)param_1.Class.field0_0x0;
  if (pUVar9 == (UClass *)0x0) {
    return;
  }
  pUVar10 = Z_Construct_UClass_UActorComponent_NoRegister();
  if ((pUVar9 != pUVar10) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("bClassIsActorComponent == false || ComponentClass == UActorComponent::StaticClass()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                         ,0xf1c,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pUVar10 = Z_Construct_UClass_UFXSystemComponent_NoRegister();
  if (pUVar10 != (UClass *)0x0) {
    iVar3 = (int)pUVar10->_padding_;
    if (((int)pUVar9->_padding_ < iVar3) ||
       ((longlong *)*(undefined1 **)(pUVar9->_padding_ + (longlong)iVar3 * 8) != &pUVar10->_padding_
       )) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) goto LAB_14767b556;
  }
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("ComponentClass->IsChildOf(ComponentType::StaticClass())",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                     ,0xf1d,L"");
  if (bVar6) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
LAB_14767b556:
  iVar14 = 0;
  puVar1 = &(this->OwnedComponents).Elements.field_0x10;
  iVar3 = *(int *)&(this->OwnedComponents).Elements.field_0x28;
  uVar7 = 1;
  iVar16 = 0;
  iVar8 = 0;
  if (iVar3 != 0) {
    puVar17 = *(uint **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar1;
    }
    uVar13 = *puVar17;
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar14;
      iVar16 = iVar16 + 0x20;
      iVar14 = iVar14 + 1;
      iVar8 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14767b5dd;
      uVar13 = puVar17[lVar11 + 1];
    }
    uVar7 = -uVar13 & uVar13;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res20 = (int)lVar11;
    iVar8 = local_res20 + -1 + iVar16;
    if (iVar3 < iVar8) {
      iVar8 = iVar3;
    }
  }
LAB_14767b5dd:
  uVar13 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  uVar12 = uVar13 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar7,iVar14);
  TStack_60.CurrentBitIndex = iVar8;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar13 >> 5;
  TStack_60._28_4_ = local_9c;
  TStack_60.BaseBitIndex = iVar16;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->OwnedComponents).Elements.field_0x8 -
                       *(int *)&(this->OwnedComponents).Elements.field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar3 < (int)uVar13)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar7 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  if (uVar13 != uVar7) {
    puVar15 = *(undefined1 **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar14;
      uVar12 = uVar12 + 0x20;
      iVar14 = iVar14 + 1;
      uVar13 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14767b6e1;
      uVar13 = *(uint *)(puVar15 + lVar11 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar13 = (int)lVar11 + -1 + uVar12;
    if ((int)uVar7 < (int)uVar13) {
      uVar13 = uVar7;
    }
  }
LAB_14767b6e1:
  while( true ) {
    if (*(int *)&(this->OwnedComponents).Elements.field_0x8 -
        *(int *)&(this->OwnedComponents).Elements.field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_60.CurrentBitIndex == uVar13) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    pUVar4 = *(UFXSystemComponent **)
              (*(longlong *)&(this->OwnedComponents).Elements +
              (longlong)TStack_60.CurrentBitIndex * 0x10);
    if (pUVar4 != (UFXSystemComponent *)0x0) {
      `AActor::GetComponents<UFXSystemComponent,TSizedDefaultAllocator<32>_>'::__l2::<lambda_1>::
      operator()(&local_res18,pUVar4);
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// ForEachComponent_Internal<UFXSystemComponent,0,1,`AActor::GetComponents<UFXSystemComponent,TSizedDefaultAllocator<32>_>'::__l2::<lambda_1>_> @ 14767b760

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
AActor::
ForEachComponent_Internal<UFXSystemComponent,0,1,_AActor::GetComponents<UFXSystemComponent,TSizedDefaultAllocator<32>_>_::__l2::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  undefined1 *puVar1;
  ForElementType<AActor_*> FVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  undefined1 *puVar7;
  UFXSystemComponent *pUVar8;
  AActor *this_00;
  code *pcVar9;
  <lambda_1> <Var10;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar11;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar12;
  bool bVar13;
  UClass *pUVar14;
  longlong lVar15;
  uint uVar16;
  int iVar17;
  ForElementType<AActor_*> FVar18;
  undefined1 *puVar19;
  uint *puVar20;
  uint uVar21;
  <lambda_1> local_res18;
  undefined1 auStack_1f8 [32];
  longlong *local_1d8;
  ForElementType<AActor_*> local_1d0;
  longlong local_1c8;
  longlong local_1c0;
  undefined8 local_1b8;
  undefined1 local_1a8;
  undefined1 local_1a7 [7];
  longlong local_1a0;
  int local_198;
  int local_194;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_190;
  UObject *local_188;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_180;
  int iStack_178;
  uint uStack_174;
  undefined1 *local_170;
  undefined4 uStack_168;
  int iStack_164;
  int local_160;
  undefined4 uStack_15c;
  int iStack_158;
  undefined4 uStack_154;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_150;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_148;
  undefined8 uStack_128;
  undefined4 local_104;
  ForElementType<AActor_*> local_100;
  int local_38;
  int local_34;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  lVar6 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar6 == 0) {
    return;
  }
  local_res18.OutComponents = param_2.OutComponents;
  pUVar14 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar14 == (UClass *)0x0) {
    return;
  }
  iVar4 = (int)pUVar14->_padding_;
  if ((*(int *)(lVar6 + 0x38) < iVar4) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar4 * 8) !=
      &pUVar14->_padding_)) {
    bVar13 = false;
  }
  else {
    bVar13 = true;
  }
  if (!bVar13) {
    return;
  }
  lVar6 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar6 == 0) {
    return;
  }
  pUVar14 = Z_Construct_UClass_UFXSystemComponent_NoRegister();
  if (pUVar14 != (UClass *)0x0) {
    iVar4 = (int)pUVar14->_padding_;
    if ((*(int *)(lVar6 + 0x38) < iVar4) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar4 * 8) !=
        &pUVar14->_padding_)) {
      bVar13 = false;
    }
    else {
      bVar13 = true;
    }
    if (bVar13) goto LAB_14767b853;
  }
  bVar13 = ::FDebug::CheckVerifyFailedImpl2
                     ("ComponentClass->IsChildOf(ComponentType::StaticClass())",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                      ,0xf1d,L"");
  if (bVar13) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
LAB_14767b853:
  local_34 = 0x18;
  local_190 = &this->OwnedComponents;
  local_100.SecondaryData = (ForElementType<AActor_*>)0x0;
  puVar1 = &(this->OwnedComponents).Elements.field_0x10;
  iStack_178 = 0;
  local_38 = 0;
  iVar4 = *(int *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_174 = 1;
  local_160 = 0;
  iStack_164 = iStack_178;
  if (iVar4 != 0) {
    puVar20 = *(uint **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar20 == (uint *)0x0) {
      puVar20 = (uint *)puVar1;
    }
    uVar16 = *puVar20;
    iStack_178 = 0;
    local_160 = 0;
    while (uVar16 == 0) {
      iStack_178 = iStack_178 + 1;
      local_160 = local_160 + 0x20;
      iStack_164 = iVar4;
      if ((int)((iVar4 + -1 >> 0x1f & 0x1fU) + iVar4 + -1) >> 5 < iStack_178) goto LAB_14767b900;
      uVar16 = puVar20[iStack_178];
    }
    uStack_174 = ~(uVar16 - 1) & uVar16;
    uVar3 = (ulonglong)uStack_174 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_198 = (int)lVar15;
    iStack_164 = local_198 + -1 + local_160;
    if (iVar4 < iStack_164) {
      iStack_164 = iVar4;
    }
  }
LAB_14767b900:
  uStack_15c = local_104;
  iStack_158 = *(int *)&(this->OwnedComponents).Elements.field_0x8 -
               *(int *)&(this->OwnedComponents).Elements.field_0x34;
  uVar16 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_168 = 0xffffffff;
  TStack_148._padding_ = CONCAT44(uStack_174,iStack_178);
  uVar21 = uVar16 & 0xffffffe0;
  TStack_148.CurrentBitIndex = iStack_164;
  TStack_148.UnvisitedBitMask = 0xffffffff;
  iVar17 = (int)uVar16 >> 5;
  TStack_148._28_4_ = local_104;
  TStack_148.BaseBitIndex = local_160;
  uStack_128 = CONCAT44(uStack_154,iStack_158);
  local_180 = local_190;
  local_170 = puVar1;
  local_150 = local_190;
  TStack_148.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar16 < 0) || (iVar4 < (int)uVar16)) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar13)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pTVar11 = local_190;
  uVar5 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  if (uVar16 != uVar5) {
    puVar7 = *(undefined1 **)&(this->OwnedComponents).Elements.field_0x20;
    puVar19 = puVar1;
    if (puVar7 != (undefined1 *)0x0) {
      puVar19 = puVar7;
    }
    uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar17 * 4);
    while (uVar16 == 0) {
      iVar17 = iVar17 + 1;
      uVar21 = uVar21 + 0x20;
      uVar16 = uVar5;
      if ((int)(((int)(uVar5 - 1) >> 0x1f & 0x1fU) + (uVar5 - 1)) >> 5 < iVar17) goto LAB_14767ba10;
      uVar16 = *(uint *)(puVar19 + (longlong)iVar17 * 4);
    }
    uVar3 = (ulonglong)(~(uVar16 - 1) & uVar16) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_194 = (int)lVar15;
    uVar16 = local_194 + -1 + uVar21;
    if ((int)uVar5 < (int)uVar16) {
      uVar16 = uVar5;
    }
  }
LAB_14767ba10:
  do {
    pTVar12 = local_150;
    if (*(int *)&(local_150->Elements).field_0x8 - *(int *)&(local_150->Elements).field_0x34 !=
        (int)uStack_128) {
      local_1a8 = 0;
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_1a8);
    }
    iVar4 = local_38;
    <Var10.OutComponents = local_res18.OutComponents;
    if (((TStack_148.CurrentBitIndex == uVar16) &&
        (TStack_148.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
       (pTVar12 == pTVar11)) {
      FVar18 = (ForElementType<AActor_*>)&local_100;
      if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FVar18 = local_100.SecondaryData;
      }
      FVar2 = (ForElementType<AActor_*>)((longlong)FVar18 + (longlong)local_38 * 8);
      while( true ) {
        if (local_38 != iVar4) {
          `TCheckedPointerIterator<AActor_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_1a7);
        }
        if (FVar18 == FVar2) break;
        local_188 = *(UObject **)param_1.Class.field0_0x0;
        this_00 = *(AActor **)FVar18;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_188 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_188);
        }
        ForEachComponent_Internal<UFXSystemComponent,0,1,_AActor::GetComponents<UFXSystemComponent,TSizedDefaultAllocator<32>_>_::__l2::<lambda_1>_>
                  (this_00,(TSubclassOf<UActorComponent>)&local_188,<Var10);
        FVar18 = (ForElementType<AActor_*>)((longlong)FVar18 + 8);
      }
      if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FMemory::Free((void *)local_100.SecondaryData);
      }
      return;
    }
    pUVar8 = *(UFXSystemComponent **)
              (*(longlong *)&pTVar12->Elements + (longlong)TStack_148.CurrentBitIndex * 0x10);
    if (pUVar8 != (UFXSystemComponent *)0x0) {
      if ((*(int *)(lVar6 + 0x38) <= *(int *)(pUVar8->_padding_ + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
          lVar6 + 0x30)) {
        `AActor::GetComponents<UFXSystemComponent,TSizedDefaultAllocator<32>_>'::__l2::<lambda_1>::
        operator()(&local_res18,pUVar8);
      }
      pUVar14 = Z_Construct_UClass_UChildActorComponent_NoRegister();
      iVar4 = (int)pUVar14->_padding_;
      if (((iVar4 <= *(int *)(pUVar8->_padding_ + 0x38)) &&
          ((longlong *)
           *(undefined1 **)(*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)iVar4 * 8) ==
           &pUVar14->_padding_)) && (local_1a0 = pUVar8->_padding_, local_1a0 != 0)) {
        FVar18 = (ForElementType<AActor_*>)&local_100;
        if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
          FVar18 = local_100.SecondaryData;
        }
        if ((ulonglong)FVar18 <= &local_1a0) {
          FVar18 = (ForElementType<AActor_*>)&local_100;
          if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
            FVar18 = local_100.SecondaryData;
          }
          if (&local_1a0 < (longlong *)((longlong)FVar18 + (longlong)local_34 * 8)) {
            local_1c0 = (longlong)local_38;
            local_1b8 = 8;
            local_1d8 = &local_1a0;
            local_1d0 = (ForElementType<AActor_*>)&local_100;
            if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
              local_1d0 = local_100.SecondaryData;
            }
            local_1c8 = (longlong)local_34;
            bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               );
            if (bVar13) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
          }
        }
        if (local_38 == local_34) {
          local_38 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<AActor_*>_>
                               (0x808,&local_100,&local_34);
        }
        lVar15 = (longlong)local_38;
        FVar18 = (ForElementType<AActor_*>)&local_100;
        if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
          FVar18 = local_100.SecondaryData;
        }
        local_38 = local_38 + 1;
        *(longlong *)((longlong)FVar18 + lVar15 * 8) = local_1a0;
      }
    }
    TStack_148.UnvisitedBitMask = TStack_148.UnvisitedBitMask & ~TStack_148._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_148);
  } while( true );
}

// ForEachComponent_Internal<UFXSystemComponent,0,0,`AActor::GetComponents<UFXSystemComponent,TSizedDefaultAllocator<32>_>'::__l2::<lambda_1>_> @ 14767bca0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
AActor::
ForEachComponent_Internal<UFXSystemComponent,0,0,_AActor::GetComponents<UFXSystemComponent,TSizedDefaultAllocator<32>_>_::__l2::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  int iVar3;
  longlong lVar4;
  undefined1 *puVar5;
  UFXSystemComponent *pUVar6;
  longlong lVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  UClass *pUVar12;
  uint uVar13;
  int iVar14;
  undefined1 *puVar15;
  int iVar16;
  uint *puVar17;
  uint uVar18;
  undefined1 local_res10 [8];
  TArray<UFXSystemComponent_*,TSizedDefaultAllocator<32>_> *local_res18;
  int local_res20;
  undefined4 local_9c;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  lVar4 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar4 == 0) {
    return;
  }
  local_res18 = param_2.OutComponents;
  pUVar12 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar12 == (UClass *)0x0) {
    return;
  }
  iVar3 = (int)pUVar12->_padding_;
  if ((*(int *)(lVar4 + 0x38) < iVar3) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar3 * 8) !=
      &pUVar12->_padding_)) {
    bVar9 = false;
  }
  else {
    bVar9 = true;
  }
  if (!bVar9) {
    return;
  }
  lVar4 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar4 == 0) {
    return;
  }
  pUVar12 = Z_Construct_UClass_UFXSystemComponent_NoRegister();
  if (pUVar12 != (UClass *)0x0) {
    iVar3 = (int)pUVar12->_padding_;
    if ((*(int *)(lVar4 + 0x38) < iVar3) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar3 * 8) !=
        &pUVar12->_padding_)) {
      bVar9 = false;
    }
    else {
      bVar9 = true;
    }
    if (bVar9) goto LAB_14767bd7e;
  }
  bVar9 = ::FDebug::CheckVerifyFailedImpl2
                    ("ComponentClass->IsChildOf(ComponentType::StaticClass())",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                     ,0xf1d,L"");
  if (bVar9) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
LAB_14767bd7e:
  iVar14 = 0;
  iVar3 = *(int *)&(this->OwnedComponents).Elements.field_0x28;
  puVar2 = &(this->OwnedComponents).Elements.field_0x10;
  uVar10 = 1;
  iVar16 = 0;
  iVar11 = 0;
  if (iVar3 != 0) {
    puVar17 = *(uint **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar2;
    }
    uVar13 = *puVar17;
    while (uVar13 == 0) {
      iVar14 = iVar14 + 1;
      iVar16 = iVar16 + 0x20;
      iVar11 = iVar3;
      if ((int)((iVar3 + -1 >> 0x1f & 0x1fU) + iVar3 + -1) >> 5 < iVar14) goto LAB_14767be0f;
      uVar13 = puVar17[iVar14];
    }
    uVar10 = ~(uVar13 - 1) & uVar13;
    uVar1 = (ulonglong)uVar10 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    local_res20 = (int)lVar7;
    iVar11 = local_res20 + -1 + iVar16;
    if (iVar3 < iVar11) {
      iVar11 = iVar3;
    }
  }
LAB_14767be0f:
  uVar13 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  uVar18 = uVar13 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar10,iVar14);
  TStack_60.CurrentBitIndex = iVar11;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar13 >> 5;
  TStack_60._28_4_ = local_9c;
  TStack_60.BaseBitIndex = iVar16;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->OwnedComponents).Elements.field_0x8 -
                       *(int *)&(this->OwnedComponents).Elements.field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar13 < 0) || (iVar3 < (int)uVar13)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar10 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  if (uVar13 != uVar10) {
    puVar5 = *(undefined1 **)&(this->OwnedComponents).Elements.field_0x20;
    puVar15 = puVar2;
    if (puVar5 != (undefined1 *)0x0) {
      puVar15 = puVar5;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
    while (uVar13 == 0) {
      iVar14 = iVar14 + 1;
      uVar18 = uVar18 + 0x20;
      uVar13 = uVar10;
      if ((int)(((int)(uVar10 - 1) >> 0x1f & 0x1fU) + (uVar10 - 1)) >> 5 < iVar14)
      goto LAB_14767bf20;
      uVar13 = *(uint *)(puVar15 + (longlong)iVar14 * 4);
    }
    uVar1 = (ulonglong)(~(uVar13 - 1) & uVar13) * 2 + 1;
    lVar7 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    uVar13 = (int)lVar7 + -1 + uVar18;
    if ((int)uVar10 < (int)uVar13) {
      uVar13 = uVar10;
    }
  }
LAB_14767bf20:
  while( true ) {
    if (*(int *)&(this->OwnedComponents).Elements.field_0x8 -
        *(int *)&(this->OwnedComponents).Elements.field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_60.CurrentBitIndex == uVar13) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) break;
    pUVar6 = *(UFXSystemComponent **)
              (*(longlong *)&(this->OwnedComponents).Elements +
              (longlong)TStack_60.CurrentBitIndex * 0x10);
    if (pUVar6 != (UFXSystemComponent *)0x0) {
      if ((*(int *)(lVar4 + 0x38) <= *(int *)(pUVar6->_padding_ + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(pUVar6->_padding_ + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
          lVar4 + 0x30)) {
        `AActor::GetComponents<UFXSystemComponent,TSizedDefaultAllocator<32>_>'::__l2::<lambda_1>::
        operator()(&local_res18,pUVar6);
      }
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// GetTypeHash<FSoundWaveProxy_const_,1> @ 14767c130

uint __cdecl GetTypeHash<FSoundWaveProxy_const_,1>(TSharedPtr<FSoundWaveProxy_const_,1> *param_1)

{
  uint uVar1;
  
  uVar1 = ((uint)((ulonglong)param_1->Object >> 0x14) & 0xffff ^
          (uint)((ulonglong)param_1->Object >> 4)) * -0x7a143595;
  uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
  return uVar1 >> 0x10 ^ uVar1;
}

// GetTypeHash<FSoundWaveProxy,1> @ 14767c160

uint __cdecl GetTypeHash<FSoundWaveProxy,1>(TSharedPtr<FSoundWaveProxy,1> *param_1)

{
  uint uVar1;
  
  uVar1 = ((uint)((ulonglong)param_1->Object >> 0x14) & 0xffff ^
          (uint)((ulonglong)param_1->Object >> 4)) * -0x7a143595;
  uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
  return uVar1 >> 0x10 ^ uVar1;
}

// GetTypeName<UBlueprint> @ 14767c190

FString * __cdecl GetTypeName<UBlueprint>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UBlueprint::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// HeapSiftDown<FAudioChunkCache,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<FAudioChunkCache,TLess<void>_>_>_> @ 14767c1d0

/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */

void __cdecl
AlgoImpl::
HeapSiftDown<FAudioChunkCache,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<FAudioChunkCache,TLess<void>_>_>_>
          (FAudioChunkCache *param_1,int param_2,int param_3,FIdentityFunctor *param_4,
          TReversePredicate<TDereferenceWrapper<FAudioChunkCache,TLess<void>_>_> *param_5)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  undefined8 uVar3;
  FCacheElement *pFVar4;
  FCacheElement *pFVar5;
  undefined8 uVar6;
  TAtomic<unsigned___int64> *pTVar7;
  ulong64 uVar8;
  TAtomic<unsigned___int64> *pTVar9;
  TAtomic<unsigned___int64> *pTVar10;
  void *pvVar11;
  void *pvVar12;
  void *pvVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  FThreadSafeCounter FVar16;
  undefined4 uVar17;
  undefined8 *puVar18;
  FAudioChunkCache *pFVar19;
  FAudioChunkCache *pFVar20;
  undefined8 *puVar21;
  FAudioChunkCache *pFVar22;
  FAudioChunkCache *pFVar23;
  FAudioChunkCache *pFVar24;
  int iVar25;
  longlong lVar26;
  undefined8 local_168 [44];
  
  while( true ) {
    if (param_3 <= param_2 * 2 + 1) {
      return;
    }
    iVar1 = param_2 * 2;
    iVar25 = iVar1 + 1;
    if (iVar1 + 2 < param_3) {
      if (param_1[(longlong)iVar1 + 2].MaxChunkSize < param_1[iVar25].MaxChunkSize) {
        iVar25 = iVar1;
      }
      iVar25 = iVar25 + 1;
    }
    pFVar22 = param_1 + iVar25;
    pFVar23 = param_1 + param_2;
    if (pFVar22->MaxChunkSize <= pFVar23->MaxChunkSize) break;
    lVar26 = 2;
    pFVar19 = pFVar23;
    puVar18 = local_168;
    do {
      puVar21 = puVar18;
      pFVar20 = pFVar19;
      pFVar2 = (pFVar20->CachePool).AllocatorInstance.Data;
      uVar3 = *(undefined8 *)&(pFVar20->CachePool).ArrayNum;
      pFVar4 = pFVar20->MostRecentElement;
      pFVar19 = (FAudioChunkCache *)
                ((pFVar20->CacheMutationCriticalSection).Value.CriticalSection.Opaque3 + 2);
      *puVar21 = *(undefined8 *)pFVar20;
      puVar21[1] = pFVar2;
      pFVar5 = pFVar20->LeastRecentElement;
      uVar6 = *(undefined8 *)&pFVar20->ChunksInUse;
      puVar21[2] = uVar3;
      puVar21[3] = pFVar4;
      pTVar7 = (pFVar20->MemoryCounterBytes).Obj.Ptr;
      uVar8 = pFVar20->MemoryLimitBytes;
      puVar21[4] = pFVar5;
      puVar21[5] = uVar6;
      pTVar9 = (pFVar20->ForceInlineMemoryCounterBytes).Obj.Ptr;
      pTVar10 = (pFVar20->FeatureMemoryCounterBytes).Obj.Ptr;
      puVar21[6] = pTVar7;
      puVar21[7] = uVar8;
      uVar3 = *(undefined8 *)&pFVar20->NumberOfLoadsInFlight;
      uVar8 = pFVar20->TimeOfBeginPlayCycles;
      puVar21[8] = pTVar9;
      puVar21[9] = pTVar10;
      pvVar11 = (pFVar20->CacheMutationCriticalSection).Value.CriticalSection.Opaque1[0];
      uVar6 = *(undefined8 *)(pFVar20->CacheMutationCriticalSection).Value.CriticalSection.Opaque2;
      puVar21[10] = uVar3;
      puVar21[0xb] = uVar8;
      pvVar12 = (pFVar20->CacheMutationCriticalSection).Value.CriticalSection.Opaque3[0];
      pvVar13 = (pFVar20->CacheMutationCriticalSection).Value.CriticalSection.Opaque3[1];
      puVar21[0xc] = pvVar11;
      puVar21[0xd] = uVar6;
      puVar21[0xe] = pvVar12;
      puVar21[0xf] = pvVar13;
      lVar26 = lVar26 + -1;
      puVar18 = puVar21 + 0x10;
    } while (lVar26 != 0);
    uVar3 = *(undefined8 *)&pFVar20->CacheLookupIdMap;
    uVar6 = *(undefined8 *)&(pFVar20->CacheLookupIdMap).field_0x8;
    uVar14 = *(undefined8 *)&(pFVar20->CacheLookupIdMap).field_0x10;
    puVar21[0x10] = *(void **)pFVar19;
    puVar21[0x11] = uVar3;
    uVar3 = *(undefined8 *)&(pFVar20->CacheLookupIdMap).field_0x18;
    uVar15 = *(undefined8 *)&(pFVar20->CacheLookupIdMap).field_0x20;
    puVar21[0x12] = uVar6;
    puVar21[0x13] = uVar14;
    uVar6 = *(undefined8 *)&(pFVar20->CacheLookupIdMap).field_0x28;
    uVar14 = *(undefined8 *)&(pFVar20->CacheLookupIdMap).field_0x30;
    puVar21[0x14] = uVar3;
    puVar21[0x15] = uVar15;
    uVar3 = *(undefined8 *)&(pFVar20->CacheLookupIdMap).field_0x38;
    uVar15 = *(undefined8 *)&(pFVar20->CacheLookupIdMap).field_0x40;
    puVar21[0x16] = uVar6;
    puVar21[0x17] = uVar14;
    uVar6 = *(undefined8 *)&(pFVar20->CacheLookupIdMap).field_0x48;
    uVar14 = *(undefined8 *)&pFVar20->SoundWaveTracker;
    puVar21[0x18] = uVar3;
    puVar21[0x19] = uVar15;
    puVar21[0x1a] = uVar6;
    puVar21[0x1b] = uVar14;
    lVar26 = 2;
    pFVar19 = pFVar22;
    do {
      pFVar24 = pFVar23;
      pFVar20 = pFVar19;
      pFVar23 = (FAudioChunkCache *)
                ((pFVar24->CacheMutationCriticalSection).Value.CriticalSection.Opaque3 + 2);
      FVar16.Counter = (pFVar20->CacheOverflowCount).Counter;
      pFVar2 = (pFVar20->CachePool).AllocatorInstance.Data;
      pFVar19 = (FAudioChunkCache *)
                ((pFVar20->CacheMutationCriticalSection).Value.CriticalSection.Opaque3 + 2);
      pFVar24->MaxChunkSize = pFVar20->MaxChunkSize;
      pFVar24->CacheOverflowCount = (FThreadSafeCounter)FVar16.Counter;
      (pFVar24->CachePool).AllocatorInstance.Data = pFVar2;
      iVar1 = (pFVar20->CachePool).ArrayMax;
      pFVar4 = pFVar20->MostRecentElement;
      (pFVar24->CachePool).ArrayNum = (pFVar20->CachePool).ArrayNum;
      (pFVar24->CachePool).ArrayMax = iVar1;
      pFVar24->MostRecentElement = pFVar4;
      iVar1 = pFVar20->ChunksInUse;
      uVar17 = *(undefined4 *)&pFVar20->field_0x2c;
      pFVar24->LeastRecentElement = pFVar20->LeastRecentElement;
      pFVar24->ChunksInUse = iVar1;
      *(undefined4 *)&pFVar24->field_0x2c = uVar17;
      uVar8 = pFVar20->MemoryLimitBytes;
      (pFVar24->MemoryCounterBytes).Obj.Ptr = (pFVar20->MemoryCounterBytes).Obj.Ptr;
      pFVar24->MemoryLimitBytes = uVar8;
      pTVar7 = (pFVar20->FeatureMemoryCounterBytes).Obj.Ptr;
      (pFVar24->ForceInlineMemoryCounterBytes).Obj.Ptr =
           (pFVar20->ForceInlineMemoryCounterBytes).Obj.Ptr;
      (pFVar24->FeatureMemoryCounterBytes).Obj.Ptr = pTVar7;
      uVar17 = *(undefined4 *)&pFVar20->field_0x54;
      uVar8 = pFVar20->TimeOfBeginPlayCycles;
      pFVar24->NumberOfLoadsInFlight = (FThreadSafeCounter)(pFVar20->NumberOfLoadsInFlight).Counter;
      *(undefined4 *)&pFVar24->field_0x54 = uVar17;
      pFVar24->TimeOfBeginPlayCycles = uVar8;
      uVar3 = *(undefined8 *)(pFVar20->CacheMutationCriticalSection).Value.CriticalSection.Opaque2;
      (pFVar24->CacheMutationCriticalSection).Value.CriticalSection.Opaque1[0] =
           (pFVar20->CacheMutationCriticalSection).Value.CriticalSection.Opaque1[0];
      *(undefined8 *)(pFVar24->CacheMutationCriticalSection).Value.CriticalSection.Opaque2 = uVar3;
      pvVar11 = (pFVar20->CacheMutationCriticalSection).Value.CriticalSection.Opaque3[1];
      (pFVar24->CacheMutationCriticalSection).Value.CriticalSection.Opaque3[0] =
           (pFVar20->CacheMutationCriticalSection).Value.CriticalSection.Opaque3[0];
      (pFVar24->CacheMutationCriticalSection).Value.CriticalSection.Opaque3[1] = pvVar11;
      lVar26 = lVar26 + -1;
    } while (lVar26 != 0);
    FVar16.Counter = (pFVar19->CacheOverflowCount).Counter;
    uVar3 = *(undefined8 *)&pFVar20->CacheLookupIdMap;
    lVar26 = 2;
    pFVar23->MaxChunkSize = pFVar19->MaxChunkSize;
    pFVar23->CacheOverflowCount = (FThreadSafeCounter)FVar16.Counter;
    *(undefined8 *)&pFVar24->CacheLookupIdMap = uVar3;
    uVar3 = *(undefined8 *)&(pFVar20->CacheLookupIdMap).field_0x10;
    *(undefined8 *)&(pFVar24->CacheLookupIdMap).field_0x8 =
         *(undefined8 *)&(pFVar20->CacheLookupIdMap).field_0x8;
    *(undefined8 *)&(pFVar24->CacheLookupIdMap).field_0x10 = uVar3;
    uVar3 = *(undefined8 *)&(pFVar20->CacheLookupIdMap).field_0x20;
    *(undefined8 *)&(pFVar24->CacheLookupIdMap).field_0x18 =
         *(undefined8 *)&(pFVar20->CacheLookupIdMap).field_0x18;
    *(undefined8 *)&(pFVar24->CacheLookupIdMap).field_0x20 = uVar3;
    uVar3 = *(undefined8 *)&(pFVar20->CacheLookupIdMap).field_0x30;
    *(undefined8 *)&(pFVar24->CacheLookupIdMap).field_0x28 =
         *(undefined8 *)&(pFVar20->CacheLookupIdMap).field_0x28;
    *(undefined8 *)&(pFVar24->CacheLookupIdMap).field_0x30 = uVar3;
    uVar3 = *(undefined8 *)&(pFVar20->CacheLookupIdMap).field_0x40;
    *(undefined8 *)&(pFVar24->CacheLookupIdMap).field_0x38 =
         *(undefined8 *)&(pFVar20->CacheLookupIdMap).field_0x38;
    *(undefined8 *)&(pFVar24->CacheLookupIdMap).field_0x40 = uVar3;
    uVar3 = *(undefined8 *)&pFVar20->SoundWaveTracker;
    *(undefined8 *)&(pFVar24->CacheLookupIdMap).field_0x48 =
         *(undefined8 *)&(pFVar20->CacheLookupIdMap).field_0x48;
    *(undefined8 *)&pFVar24->SoundWaveTracker = uVar3;
    puVar18 = local_168;
    do {
      pFVar23 = pFVar22;
      puVar21 = puVar18;
      pFVar22 = (FAudioChunkCache *)
                ((pFVar23->CacheMutationCriticalSection).Value.CriticalSection.Opaque3 + 2);
      uVar3 = *puVar21;
      pFVar2 = (FScriptContainerElement *)puVar21[1];
      uVar6 = puVar21[2];
      pFVar4 = (FCacheElement *)puVar21[3];
      pFVar23->MaxChunkSize = (int)uVar3;
      pFVar23->CacheOverflowCount = (FThreadSafeCounter)(int)((ulonglong)uVar3 >> 0x20);
      (pFVar23->CachePool).AllocatorInstance.Data = pFVar2;
      pFVar5 = (FCacheElement *)puVar21[4];
      uVar3 = puVar21[5];
      (pFVar23->CachePool).ArrayNum = (int)uVar6;
      (pFVar23->CachePool).ArrayMax = (int)((ulonglong)uVar6 >> 0x20);
      pFVar23->MostRecentElement = pFVar4;
      pTVar7 = (TAtomic<unsigned___int64> *)puVar21[6];
      uVar8 = puVar21[7];
      pFVar23->LeastRecentElement = pFVar5;
      *(undefined8 *)&pFVar23->ChunksInUse = uVar3;
      pTVar9 = (TAtomic<unsigned___int64> *)puVar21[8];
      pTVar10 = (TAtomic<unsigned___int64> *)puVar21[9];
      (pFVar23->MemoryCounterBytes).Obj.Ptr = pTVar7;
      pFVar23->MemoryLimitBytes = uVar8;
      uVar3 = puVar21[10];
      uVar8 = puVar21[0xb];
      (pFVar23->ForceInlineMemoryCounterBytes).Obj.Ptr = pTVar9;
      (pFVar23->FeatureMemoryCounterBytes).Obj.Ptr = pTVar10;
      pvVar11 = (void *)puVar21[0xc];
      uVar6 = puVar21[0xd];
      *(undefined8 *)&pFVar23->NumberOfLoadsInFlight = uVar3;
      pFVar23->TimeOfBeginPlayCycles = uVar8;
      pvVar12 = (void *)puVar21[0xe];
      pvVar13 = (void *)puVar21[0xf];
      (pFVar23->CacheMutationCriticalSection).Value.CriticalSection.Opaque1[0] = pvVar11;
      *(undefined8 *)(pFVar23->CacheMutationCriticalSection).Value.CriticalSection.Opaque2 = uVar6;
      (pFVar23->CacheMutationCriticalSection).Value.CriticalSection.Opaque3[0] = pvVar12;
      (pFVar23->CacheMutationCriticalSection).Value.CriticalSection.Opaque3[1] = pvVar13;
      lVar26 = lVar26 + -1;
      puVar18 = puVar21 + 0x10;
    } while (lVar26 != 0);
    uVar3 = puVar21[0x11];
    uVar6 = puVar21[0x12];
    uVar14 = puVar21[0x13];
    *(void **)pFVar22 = (void *)puVar21[0x10];
    *(undefined8 *)&pFVar23->CacheLookupIdMap = uVar3;
    uVar3 = puVar21[0x14];
    uVar15 = puVar21[0x15];
    *(undefined8 *)&(pFVar23->CacheLookupIdMap).field_0x8 = uVar6;
    *(undefined8 *)&(pFVar23->CacheLookupIdMap).field_0x10 = uVar14;
    uVar6 = puVar21[0x16];
    uVar14 = puVar21[0x17];
    *(undefined8 *)&(pFVar23->CacheLookupIdMap).field_0x18 = uVar3;
    *(undefined8 *)&(pFVar23->CacheLookupIdMap).field_0x20 = uVar15;
    uVar3 = puVar21[0x18];
    uVar15 = puVar21[0x19];
    *(undefined8 *)&(pFVar23->CacheLookupIdMap).field_0x28 = uVar6;
    *(undefined8 *)&(pFVar23->CacheLookupIdMap).field_0x30 = uVar14;
    uVar6 = puVar21[0x1a];
    uVar14 = puVar21[0x1b];
    *(undefined8 *)&(pFVar23->CacheLookupIdMap).field_0x38 = uVar3;
    *(undefined8 *)&(pFVar23->CacheLookupIdMap).field_0x40 = uVar15;
    *(undefined8 *)&(pFVar23->CacheLookupIdMap).field_0x48 = uVar6;
    *(undefined8 *)&pFVar23->SoundWaveTracker = uVar14;
    param_2 = iVar25;
  }
  return;
}

// HeapSortInternal<AAudioVolume_*,int,FIdentityFunctor,TDereferenceWrapper<AAudioVolume_*,`AAudioVolume::PostRegisterAllComponents'::__l2::<lambda_1>_>_> @ 14767c450

void __cdecl
AlgoImpl::
HeapSortInternal<AAudioVolume_*,int,FIdentityFunctor,TDereferenceWrapper<AAudioVolume_*,_AAudioVolume::PostRegisterAllComponents_::__l2::<lambda_1>_>_>
          (AAudioVolume **param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<AAudioVolume_*,_public:_virtual_void___cdecl_AAudioVolume::PostRegisterAllComponents(void)_::_2_::<lambda_1>_>
          param_4)

{
  AAudioVolume *pAVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  if (param_2 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar4 = (param_2 + -2) / 2;
  iVar5 = iVar4 * 2 + 1;
  iVar9 = iVar5;
  iVar8 = iVar4;
  do {
    while (param_2 <= iVar5) {
LAB_14767c54c:
      if (iVar8 == 0) {
        iVar5 = param_2 + -1;
        lVar6 = (longlong)iVar5;
        if (0 < iVar5) {
          do {
            iVar9 = 0;
            pAVar1 = *param_1;
            *param_1 = param_1[lVar6];
            param_1[lVar6] = pAVar1;
            if (1 < iVar5) {
              do {
                iVar4 = iVar9 * 2;
                iVar8 = iVar4 + 1;
                if (iVar4 + 2 < iVar5) {
                  if (param_1[iVar8]->Priority <= param_1[(longlong)iVar4 + 2]->Priority &&
                      param_1[(longlong)iVar4 + 2]->Priority != param_1[iVar8]->Priority) {
                    iVar8 = iVar4;
                  }
                  iVar8 = iVar8 + 1;
                }
                pAVar1 = param_1[iVar9];
                if (pAVar1->Priority <= param_1[iVar8]->Priority) break;
                param_1[iVar9] = param_1[iVar8];
                param_1[iVar8] = pAVar1;
                iVar9 = iVar8;
              } while (iVar8 * 2 + 1 < iVar5);
            }
            iVar5 = iVar5 + -1;
            lVar6 = lVar6 + -1;
          } while (0 < lVar6);
        }
        return;
      }
      iVar4 = iVar8 + -1;
      iVar5 = iVar9 + -2;
      iVar9 = iVar5;
      iVar8 = iVar4;
    }
    iVar5 = iVar4 * 2;
    iVar7 = iVar5 + 1;
    if (iVar5 + 2 < param_2) {
      if (param_1[iVar7]->Priority <= param_1[(longlong)iVar5 + 2]->Priority &&
          param_1[(longlong)iVar5 + 2]->Priority != param_1[iVar7]->Priority) {
        iVar7 = iVar5;
      }
      iVar7 = iVar7 + 1;
    }
    pAVar1 = param_1[iVar4];
    if (pAVar1->Priority <= param_1[iVar7]->Priority) goto LAB_14767c54c;
    param_1[iVar4] = param_1[iVar7];
    param_1[iVar7] = pAVar1;
    iVar5 = iVar7 * 2 + 1;
    iVar4 = iVar7;
  } while( true );
}

// HeapSortInternal<AAudioVolume_*,int,FIdentityFunctor,TDereferenceWrapper<AAudioVolume_*,`AAudioVolume::SetPriority'::__l8::<lambda_1>_>_> @ 14767c620

void __cdecl
AlgoImpl::
HeapSortInternal<AAudioVolume_*,int,FIdentityFunctor,TDereferenceWrapper<AAudioVolume_*,_AAudioVolume::SetPriority_::__l8::<lambda_1>_>_>
          (AAudioVolume **param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<AAudioVolume_*,_public:_void___cdecl_AAudioVolume::SetPriority(float)_::_8_::<lambda_1>_>
          param_4)

{
  AAudioVolume *pAVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  if (param_2 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar4 = (param_2 + -2) / 2;
  iVar5 = iVar4 * 2 + 1;
  iVar9 = iVar5;
  iVar8 = iVar4;
  do {
    while (param_2 <= iVar5) {
LAB_14767c71c:
      if (iVar8 == 0) {
        iVar5 = param_2 + -1;
        lVar6 = (longlong)iVar5;
        if (0 < iVar5) {
          do {
            iVar9 = 0;
            pAVar1 = *param_1;
            *param_1 = param_1[lVar6];
            param_1[lVar6] = pAVar1;
            if (1 < iVar5) {
              do {
                iVar4 = iVar9 * 2;
                iVar8 = iVar4 + 1;
                if (iVar4 + 2 < iVar5) {
                  if (param_1[iVar8]->Priority <= param_1[(longlong)iVar4 + 2]->Priority &&
                      param_1[(longlong)iVar4 + 2]->Priority != param_1[iVar8]->Priority) {
                    iVar8 = iVar4;
                  }
                  iVar8 = iVar8 + 1;
                }
                pAVar1 = param_1[iVar9];
                if (pAVar1->Priority <= param_1[iVar8]->Priority) break;
                param_1[iVar9] = param_1[iVar8];
                param_1[iVar8] = pAVar1;
                iVar9 = iVar8;
              } while (iVar8 * 2 + 1 < iVar5);
            }
            iVar5 = iVar5 + -1;
            lVar6 = lVar6 + -1;
          } while (0 < lVar6);
        }
        return;
      }
      iVar4 = iVar8 + -1;
      iVar5 = iVar9 + -2;
      iVar9 = iVar5;
      iVar8 = iVar4;
    }
    iVar5 = iVar4 * 2;
    iVar7 = iVar5 + 1;
    if (iVar5 + 2 < param_2) {
      if (param_1[iVar7]->Priority <= param_1[(longlong)iVar5 + 2]->Priority &&
          param_1[(longlong)iVar5 + 2]->Priority != param_1[iVar7]->Priority) {
        iVar7 = iVar5;
      }
      iVar7 = iVar7 + 1;
    }
    pAVar1 = param_1[iVar4];
    if (pAVar1->Priority <= param_1[iVar7]->Priority) goto LAB_14767c71c;
    param_1[iVar4] = param_1[iVar7];
    param_1[iVar7] = pAVar1;
    iVar5 = iVar7 * 2 + 1;
    iVar4 = iVar7;
  } while( true );
}

// HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<152,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<unsigned_int,FAudioVolumeProxy>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<unsigned_int,FAudioVolumeProxy>,TDefaultMapHashableKeyFuncs<unsigned_int,FAudioVolumeProxy,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<unsigned_int,FAudioVolumeProxy,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FAudioVolumeProxy,0>_>::FValueComparisonClass<`FAudioDevice::AddAudioVolumeProxy'::__l2::<lambda_1>_>_>_>_> @ 14767c7f0

void __cdecl
AlgoImpl::
HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<152,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<unsigned_int,FAudioVolumeProxy>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<unsigned_int,FAudioVolumeProxy>,TDefaultMapHashableKeyFuncs<unsigned_int,FAudioVolumeProxy,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<unsigned_int,FAudioVolumeProxy,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FAudioVolumeProxy,0>_>::FValueComparisonClass<_FAudioDevice::AddAudioVolumeProxy_::__l2::<lambda_1>_>_>_>_>
          (TSparseArrayElementOrFreeListLink<TAlignedBytes<152,8>_> *param_1,int param_2,
          FIdentityFunctor param_3,
          FElementCompareClass<TSet<TTuple<unsigned_int,FAudioVolumeProxy>,TDefaultMapHashableKeyFuncs<unsigned_int,FAudioVolumeProxy,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<unsigned_int,FAudioVolumeProxy,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FAudioVolumeProxy,0>_>::FValueComparisonClass<_public:_void___cdecl_FAudioDevice::AddAudioVolumeProxy(FAudioVolumeProxy_const_&)_::_2_::<lambda_1>_>_>_>
          param_4)

{
  float *pfVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  float fVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined8 uVar7;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<152,8>_>_s_1 TVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  bool bVar26;
  int iVar27;
  int iVar28;
  longlong lVar29;
  longlong lVar30;
  longlong lVar31;
  longlong lVar32;
  longlong lVar33;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<152,8>_> *pTVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  
  if (param_2 < 0) {
    bVar26 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar26) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    bVar26 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar26) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar27 = (param_2 + -2) / 2;
  iVar28 = iVar27 * 2 + 1;
  iVar36 = iVar28;
  iVar37 = iVar27;
  do {
    while (param_2 <= iVar28) {
LAB_14767ca09:
      if (iVar37 == 0) {
        iVar28 = param_2 + -1;
        lVar29 = (longlong)iVar28;
        if (0 < iVar28) {
          pTVar34 = param_1 + lVar29;
          do {
            uVar7 = *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 8);
            uVar5 = *(undefined8 *)((param_1->ElementData).Pad + 0x90);
            TVar8 = param_1->_s_1;
            uVar9 = *(undefined8 *)((param_1->ElementData).Pad + 8);
            uVar10 = *(undefined8 *)((param_1->ElementData).Pad + 0x10);
            uVar11 = *(undefined8 *)((param_1->ElementData).Pad + 0x18);
            uVar12 = *(undefined8 *)((param_1->ElementData).Pad + 0x20);
            uVar13 = *(undefined8 *)((param_1->ElementData).Pad + 0x28);
            uVar14 = *(undefined8 *)((param_1->ElementData).Pad + 0x30);
            uVar15 = *(undefined8 *)((param_1->ElementData).Pad + 0x38);
            uVar16 = *(undefined8 *)((param_1->ElementData).Pad + 0x40);
            uVar17 = *(undefined8 *)((param_1->ElementData).Pad + 0x48);
            uVar18 = *(undefined8 *)((param_1->ElementData).Pad + 0x50);
            uVar19 = *(undefined8 *)((param_1->ElementData).Pad + 0x58);
            uVar20 = *(undefined8 *)((param_1->ElementData).Pad + 0x60);
            uVar21 = *(undefined8 *)((param_1->ElementData).Pad + 0x68);
            uVar22 = *(undefined8 *)((param_1->ElementData).Pad + 0x70);
            uVar23 = *(undefined8 *)((param_1->ElementData).Pad + 0x78);
            uVar24 = *(undefined8 *)((param_1->ElementData).Pad + 0x80);
            uVar25 = *(undefined8 *)((param_1->ElementData).Pad + 0x88);
            param_1->_s_1 = pTVar34->_s_1;
            *(undefined8 *)((param_1->ElementData).Pad + 8) = uVar7;
            uVar7 = *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x18);
            *(undefined8 *)((param_1->ElementData).Pad + 0x10) =
                 *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x10);
            *(undefined8 *)((param_1->ElementData).Pad + 0x18) = uVar7;
            uVar7 = *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x28);
            *(undefined8 *)((param_1->ElementData).Pad + 0x20) =
                 *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x20);
            *(undefined8 *)((param_1->ElementData).Pad + 0x28) = uVar7;
            uVar7 = *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x38);
            *(undefined8 *)((param_1->ElementData).Pad + 0x30) =
                 *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x30);
            *(undefined8 *)((param_1->ElementData).Pad + 0x38) = uVar7;
            uVar7 = *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x48);
            *(undefined8 *)((param_1->ElementData).Pad + 0x40) =
                 *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x40);
            *(undefined8 *)((param_1->ElementData).Pad + 0x48) = uVar7;
            uVar7 = *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x58);
            *(undefined8 *)((param_1->ElementData).Pad + 0x50) =
                 *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x50);
            *(undefined8 *)((param_1->ElementData).Pad + 0x58) = uVar7;
            uVar7 = *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x68);
            *(undefined8 *)((param_1->ElementData).Pad + 0x60) =
                 *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x60);
            *(undefined8 *)((param_1->ElementData).Pad + 0x68) = uVar7;
            uVar7 = *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x78);
            *(undefined8 *)((param_1->ElementData).Pad + 0x70) =
                 *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x70);
            *(undefined8 *)((param_1->ElementData).Pad + 0x78) = uVar7;
            uVar7 = *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x88);
            *(undefined8 *)((param_1->ElementData).Pad + 0x80) =
                 *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x80);
            *(undefined8 *)((param_1->ElementData).Pad + 0x88) = uVar7;
            *(undefined8 *)((param_1->ElementData).Pad + 0x90) =
                 *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x90);
            pTVar34->_s_1 = TVar8;
            *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 8) = uVar9;
            *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x10) = uVar10;
            *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x18) = uVar11;
            *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x20) = uVar12;
            *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x28) = uVar13;
            *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x30) = uVar14;
            *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x38) = uVar15;
            *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x40) = uVar16;
            *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x48) = uVar17;
            *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x50) = uVar18;
            *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x58) = uVar19;
            *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x60) = uVar20;
            *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x68) = uVar21;
            *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x70) = uVar22;
            *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x78) = uVar23;
            *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x80) = uVar24;
            *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x88) = uVar25;
            *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x90) = uVar5;
            iVar36 = 0;
            if (1 < iVar28) {
              do {
                iVar37 = iVar36 * 2;
                iVar27 = iVar37 + 1;
                if (iVar37 + 2 < iVar28) {
                  fVar4 = *(float *)((longlong)iVar37 * 0x98 + 0x140 + (longlong)param_1);
                  pfVar1 = (float *)((longlong)iVar27 * 0x98 + 0x10 + (longlong)param_1);
                  if (*pfVar1 <= fVar4 && fVar4 != *pfVar1) {
                    iVar27 = iVar37;
                  }
                  iVar27 = iVar27 + 1;
                }
                lVar30 = (longlong)iVar36;
                lVar32 = lVar30 * 0x98;
                lVar31 = (longlong)iVar27;
                lVar33 = lVar31 * 0x98;
                if (*(float *)(lVar32 + 0x10 + (longlong)param_1) <=
                    *(float *)(lVar33 + 0x10 + (longlong)param_1)) break;
                uVar7 = *(undefined8 *)(param_1[lVar31].ElementData.Pad + 8);
                uVar5 = *(undefined8 *)(lVar32 + 0x90 + (longlong)param_1);
                TVar8 = param_1[lVar30]._s_1;
                uVar9 = *(undefined8 *)(param_1[lVar30].ElementData.Pad + 8);
                puVar2 = (undefined8 *)(lVar32 + 0x10 + (longlong)param_1);
                uVar10 = *puVar2;
                uVar11 = puVar2[1];
                puVar2 = (undefined8 *)(lVar32 + 0x20 + (longlong)param_1);
                uVar12 = *puVar2;
                uVar13 = puVar2[1];
                puVar2 = (undefined8 *)(lVar32 + 0x30 + (longlong)param_1);
                uVar14 = *puVar2;
                uVar15 = puVar2[1];
                puVar2 = (undefined8 *)(lVar32 + 0x40 + (longlong)param_1);
                uVar16 = *puVar2;
                uVar17 = puVar2[1];
                puVar2 = (undefined8 *)(lVar32 + 0x50 + (longlong)param_1);
                uVar18 = *puVar2;
                uVar19 = puVar2[1];
                puVar2 = (undefined8 *)(lVar32 + 0x60 + (longlong)param_1);
                uVar20 = *puVar2;
                uVar21 = puVar2[1];
                puVar2 = (undefined8 *)(lVar32 + 0x70 + (longlong)param_1);
                uVar22 = *puVar2;
                uVar23 = puVar2[1];
                puVar2 = (undefined8 *)(lVar32 + 0x80 + (longlong)param_1);
                uVar24 = *puVar2;
                uVar25 = puVar2[1];
                param_1[lVar30]._s_1 = param_1[lVar31]._s_1;
                *(undefined8 *)((longlong)param_1[lVar30].ElementData.Pad + 8) = uVar7;
                puVar2 = (undefined8 *)(lVar33 + 0x10 + (longlong)param_1);
                uVar7 = puVar2[1];
                puVar3 = (undefined8 *)(lVar32 + 0x10 + (longlong)param_1);
                *puVar3 = *puVar2;
                puVar3[1] = uVar7;
                puVar2 = (undefined8 *)(lVar33 + 0x20 + (longlong)param_1);
                uVar7 = puVar2[1];
                puVar3 = (undefined8 *)(lVar32 + 0x20 + (longlong)param_1);
                *puVar3 = *puVar2;
                puVar3[1] = uVar7;
                puVar2 = (undefined8 *)(lVar33 + 0x30 + (longlong)param_1);
                uVar7 = puVar2[1];
                puVar3 = (undefined8 *)(lVar32 + 0x30 + (longlong)param_1);
                *puVar3 = *puVar2;
                puVar3[1] = uVar7;
                puVar2 = (undefined8 *)(lVar33 + 0x40 + (longlong)param_1);
                uVar7 = puVar2[1];
                puVar3 = (undefined8 *)(lVar32 + 0x40 + (longlong)param_1);
                *puVar3 = *puVar2;
                puVar3[1] = uVar7;
                puVar2 = (undefined8 *)(lVar33 + 0x50 + (longlong)param_1);
                uVar7 = puVar2[1];
                puVar3 = (undefined8 *)(lVar32 + 0x50 + (longlong)param_1);
                *puVar3 = *puVar2;
                puVar3[1] = uVar7;
                puVar2 = (undefined8 *)(lVar33 + 0x60 + (longlong)param_1);
                uVar7 = puVar2[1];
                puVar3 = (undefined8 *)(lVar32 + 0x60 + (longlong)param_1);
                *puVar3 = *puVar2;
                puVar3[1] = uVar7;
                puVar2 = (undefined8 *)(lVar33 + 0x70 + (longlong)param_1);
                uVar7 = puVar2[1];
                puVar3 = (undefined8 *)(lVar32 + 0x70 + (longlong)param_1);
                *puVar3 = *puVar2;
                puVar3[1] = uVar7;
                puVar2 = (undefined8 *)(lVar33 + 0x80 + (longlong)param_1);
                uVar7 = puVar2[1];
                puVar3 = (undefined8 *)(lVar32 + 0x80 + (longlong)param_1);
                *puVar3 = *puVar2;
                puVar3[1] = uVar7;
                *(undefined8 *)(lVar32 + 0x90 + (longlong)param_1) =
                     *(undefined8 *)(lVar33 + 0x90 + (longlong)param_1);
                param_1[lVar31]._s_1 = TVar8;
                *(undefined8 *)((longlong)param_1[lVar31].ElementData.Pad + 8) = uVar9;
                puVar2 = (undefined8 *)(lVar33 + 0x10 + (longlong)param_1);
                *puVar2 = uVar10;
                puVar2[1] = uVar11;
                puVar2 = (undefined8 *)(lVar33 + 0x20 + (longlong)param_1);
                *puVar2 = uVar12;
                puVar2[1] = uVar13;
                puVar2 = (undefined8 *)(lVar33 + 0x30 + (longlong)param_1);
                *puVar2 = uVar14;
                puVar2[1] = uVar15;
                puVar2 = (undefined8 *)(lVar33 + 0x40 + (longlong)param_1);
                *puVar2 = uVar16;
                puVar2[1] = uVar17;
                puVar2 = (undefined8 *)(lVar33 + 0x50 + (longlong)param_1);
                *puVar2 = uVar18;
                puVar2[1] = uVar19;
                puVar2 = (undefined8 *)(lVar33 + 0x60 + (longlong)param_1);
                *puVar2 = uVar20;
                puVar2[1] = uVar21;
                puVar2 = (undefined8 *)(lVar33 + 0x70 + (longlong)param_1);
                *puVar2 = uVar22;
                puVar2[1] = uVar23;
                puVar2 = (undefined8 *)(lVar33 + 0x80 + (longlong)param_1);
                *puVar2 = uVar24;
                puVar2[1] = uVar25;
                *(undefined8 *)(lVar33 + 0x90 + (longlong)param_1) = uVar5;
                iVar36 = iVar27;
              } while (iVar27 * 2 + 1 < iVar28);
            }
            iVar28 = iVar28 + -1;
            lVar29 = lVar29 + -1;
            pTVar34 = pTVar34 + -1;
          } while (0 < lVar29);
        }
        return;
      }
      iVar27 = iVar37 + -1;
      iVar28 = iVar36 + -2;
      iVar36 = iVar28;
      iVar37 = iVar27;
    }
    iVar28 = iVar27 * 2;
    iVar35 = iVar28 + 1;
    if (iVar28 + 2 < param_2) {
      fVar4 = *(float *)((longlong)iVar28 * 0x98 + 0x140 + (longlong)param_1);
      pfVar1 = (float *)((longlong)iVar35 * 0x98 + 0x10 + (longlong)param_1);
      if (*pfVar1 <= fVar4 && fVar4 != *pfVar1) {
        iVar35 = iVar28;
      }
      iVar35 = iVar35 + 1;
    }
    lVar29 = (longlong)iVar27;
    lVar31 = lVar29 * 0x98;
    lVar30 = (longlong)iVar35;
    lVar32 = lVar30 * 0x98;
    if (*(float *)(lVar31 + 0x10 + (longlong)param_1) <=
        *(float *)(lVar32 + 0x10 + (longlong)param_1)) goto LAB_14767ca09;
    uVar7 = *(undefined8 *)(param_1[lVar30].ElementData.Pad + 8);
    iVar28 = iVar35 * 2 + 1;
    uVar5 = *(undefined8 *)(lVar31 + 0x90 + (longlong)param_1);
    TVar8 = param_1[lVar29]._s_1;
    uVar9 = *(undefined8 *)(param_1[lVar29].ElementData.Pad + 8);
    puVar2 = (undefined8 *)(lVar31 + 0x10 + (longlong)param_1);
    uVar10 = *puVar2;
    uVar11 = puVar2[1];
    puVar2 = (undefined8 *)(lVar31 + 0x20 + (longlong)param_1);
    uVar12 = *puVar2;
    uVar13 = puVar2[1];
    puVar2 = (undefined8 *)(lVar31 + 0x30 + (longlong)param_1);
    uVar14 = *puVar2;
    uVar15 = puVar2[1];
    puVar2 = (undefined8 *)(lVar31 + 0x40 + (longlong)param_1);
    uVar16 = *puVar2;
    uVar17 = puVar2[1];
    puVar2 = (undefined8 *)(lVar31 + 0x50 + (longlong)param_1);
    uVar18 = *puVar2;
    uVar19 = puVar2[1];
    puVar2 = (undefined8 *)(lVar31 + 0x60 + (longlong)param_1);
    uVar20 = *puVar2;
    uVar21 = puVar2[1];
    puVar2 = (undefined8 *)(lVar31 + 0x70 + (longlong)param_1);
    uVar22 = *puVar2;
    uVar23 = puVar2[1];
    puVar2 = (undefined8 *)(lVar31 + 0x80 + (longlong)param_1);
    uVar24 = *puVar2;
    uVar25 = puVar2[1];
    param_1[lVar29]._s_1 = param_1[lVar30]._s_1;
    *(undefined8 *)((longlong)param_1[lVar29].ElementData.Pad + 8) = uVar7;
    puVar2 = (undefined8 *)(lVar32 + 0x10 + (longlong)param_1);
    uVar7 = puVar2[1];
    puVar3 = (undefined8 *)(lVar31 + 0x10 + (longlong)param_1);
    *puVar3 = *puVar2;
    puVar3[1] = uVar7;
    puVar2 = (undefined8 *)(lVar32 + 0x20 + (longlong)param_1);
    uVar7 = puVar2[1];
    puVar3 = (undefined8 *)(lVar31 + 0x20 + (longlong)param_1);
    *puVar3 = *puVar2;
    puVar3[1] = uVar7;
    puVar2 = (undefined8 *)(lVar32 + 0x30 + (longlong)param_1);
    uVar7 = puVar2[1];
    puVar3 = (undefined8 *)(lVar31 + 0x30 + (longlong)param_1);
    *puVar3 = *puVar2;
    puVar3[1] = uVar7;
    puVar2 = (undefined8 *)(lVar32 + 0x40 + (longlong)param_1);
    uVar7 = puVar2[1];
    puVar3 = (undefined8 *)(lVar31 + 0x40 + (longlong)param_1);
    *puVar3 = *puVar2;
    puVar3[1] = uVar7;
    puVar2 = (undefined8 *)(lVar32 + 0x50 + (longlong)param_1);
    uVar7 = puVar2[1];
    puVar3 = (undefined8 *)(lVar31 + 0x50 + (longlong)param_1);
    *puVar3 = *puVar2;
    puVar3[1] = uVar7;
    puVar2 = (undefined8 *)(lVar32 + 0x60 + (longlong)param_1);
    uVar7 = puVar2[1];
    puVar3 = (undefined8 *)(lVar31 + 0x60 + (longlong)param_1);
    *puVar3 = *puVar2;
    puVar3[1] = uVar7;
    puVar2 = (undefined8 *)(lVar32 + 0x70 + (longlong)param_1);
    uVar7 = puVar2[1];
    puVar3 = (undefined8 *)(lVar31 + 0x70 + (longlong)param_1);
    *puVar3 = *puVar2;
    puVar3[1] = uVar7;
    puVar2 = (undefined8 *)(lVar32 + 0x80 + (longlong)param_1);
    uVar7 = puVar2[1];
    puVar3 = (undefined8 *)(lVar31 + 0x80 + (longlong)param_1);
    *puVar3 = *puVar2;
    puVar3[1] = uVar7;
    *(undefined8 *)(lVar31 + 0x90 + (longlong)param_1) =
         *(undefined8 *)(lVar32 + 0x90 + (longlong)param_1);
    param_1[lVar30]._s_1 = TVar8;
    *(undefined8 *)((longlong)param_1[lVar30].ElementData.Pad + 8) = uVar9;
    puVar2 = (undefined8 *)(lVar32 + 0x10 + (longlong)param_1);
    *puVar2 = uVar10;
    puVar2[1] = uVar11;
    puVar2 = (undefined8 *)(lVar32 + 0x20 + (longlong)param_1);
    *puVar2 = uVar12;
    puVar2[1] = uVar13;
    puVar2 = (undefined8 *)(lVar32 + 0x30 + (longlong)param_1);
    *puVar2 = uVar14;
    puVar2[1] = uVar15;
    puVar2 = (undefined8 *)(lVar32 + 0x40 + (longlong)param_1);
    *puVar2 = uVar16;
    puVar2[1] = uVar17;
    puVar2 = (undefined8 *)(lVar32 + 0x50 + (longlong)param_1);
    *puVar2 = uVar18;
    puVar2[1] = uVar19;
    puVar2 = (undefined8 *)(lVar32 + 0x60 + (longlong)param_1);
    *puVar2 = uVar20;
    puVar2[1] = uVar21;
    puVar2 = (undefined8 *)(lVar32 + 0x70 + (longlong)param_1);
    *puVar2 = uVar22;
    puVar2[1] = uVar23;
    puVar2 = (undefined8 *)(lVar32 + 0x80 + (longlong)param_1);
    *puVar2 = uVar24;
    puVar2[1] = uVar25;
    *(undefined8 *)(lVar32 + 0x90 + (longlong)param_1) = uVar5;
    iVar27 = iVar35;
  } while( true );
}

// HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<152,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<unsigned_int,FAudioVolumeProxy>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<unsigned_int,FAudioVolumeProxy>,TDefaultMapHashableKeyFuncs<unsigned_int,FAudioVolumeProxy,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<unsigned_int,FAudioVolumeProxy,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FAudioVolumeProxy,0>_>::FValueComparisonClass<`FAudioDevice::UpdateAudioVolumeProxy'::__l15::<lambda_1>_>_>_>_> @ 14767ccd0

void __cdecl
AlgoImpl::
HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<152,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<unsigned_int,FAudioVolumeProxy>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<unsigned_int,FAudioVolumeProxy>,TDefaultMapHashableKeyFuncs<unsigned_int,FAudioVolumeProxy,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<unsigned_int,FAudioVolumeProxy,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FAudioVolumeProxy,0>_>::FValueComparisonClass<_FAudioDevice::UpdateAudioVolumeProxy_::__l15::<lambda_1>_>_>_>_>
          (TSparseArrayElementOrFreeListLink<TAlignedBytes<152,8>_> *param_1,int param_2,
          FIdentityFunctor param_3,
          FElementCompareClass<TSet<TTuple<unsigned_int,FAudioVolumeProxy>,TDefaultMapHashableKeyFuncs<unsigned_int,FAudioVolumeProxy,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<unsigned_int,FAudioVolumeProxy,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FAudioVolumeProxy,0>_>::FValueComparisonClass<_public:_void___cdecl_FAudioDevice::UpdateAudioVolumeProxy(FAudioVolumeProxy_const_&)_::_15_::<lambda_1>_>_>_>
          param_4)

{
  float *pfVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  float fVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined8 uVar7;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<152,8>_>_s_1 TVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  bool bVar26;
  int iVar27;
  int iVar28;
  longlong lVar29;
  longlong lVar30;
  longlong lVar31;
  longlong lVar32;
  longlong lVar33;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<152,8>_> *pTVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  
  if (param_2 < 0) {
    bVar26 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar26) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    bVar26 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar26) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar27 = (param_2 + -2) / 2;
  iVar28 = iVar27 * 2 + 1;
  iVar36 = iVar28;
  iVar37 = iVar27;
  do {
    while (param_2 <= iVar28) {
LAB_14767cee9:
      if (iVar37 == 0) {
        iVar28 = param_2 + -1;
        lVar29 = (longlong)iVar28;
        if (0 < iVar28) {
          pTVar34 = param_1 + lVar29;
          do {
            uVar7 = *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 8);
            uVar5 = *(undefined8 *)((param_1->ElementData).Pad + 0x90);
            TVar8 = param_1->_s_1;
            uVar9 = *(undefined8 *)((param_1->ElementData).Pad + 8);
            uVar10 = *(undefined8 *)((param_1->ElementData).Pad + 0x10);
            uVar11 = *(undefined8 *)((param_1->ElementData).Pad + 0x18);
            uVar12 = *(undefined8 *)((param_1->ElementData).Pad + 0x20);
            uVar13 = *(undefined8 *)((param_1->ElementData).Pad + 0x28);
            uVar14 = *(undefined8 *)((param_1->ElementData).Pad + 0x30);
            uVar15 = *(undefined8 *)((param_1->ElementData).Pad + 0x38);
            uVar16 = *(undefined8 *)((param_1->ElementData).Pad + 0x40);
            uVar17 = *(undefined8 *)((param_1->ElementData).Pad + 0x48);
            uVar18 = *(undefined8 *)((param_1->ElementData).Pad + 0x50);
            uVar19 = *(undefined8 *)((param_1->ElementData).Pad + 0x58);
            uVar20 = *(undefined8 *)((param_1->ElementData).Pad + 0x60);
            uVar21 = *(undefined8 *)((param_1->ElementData).Pad + 0x68);
            uVar22 = *(undefined8 *)((param_1->ElementData).Pad + 0x70);
            uVar23 = *(undefined8 *)((param_1->ElementData).Pad + 0x78);
            uVar24 = *(undefined8 *)((param_1->ElementData).Pad + 0x80);
            uVar25 = *(undefined8 *)((param_1->ElementData).Pad + 0x88);
            param_1->_s_1 = pTVar34->_s_1;
            *(undefined8 *)((param_1->ElementData).Pad + 8) = uVar7;
            uVar7 = *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x18);
            *(undefined8 *)((param_1->ElementData).Pad + 0x10) =
                 *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x10);
            *(undefined8 *)((param_1->ElementData).Pad + 0x18) = uVar7;
            uVar7 = *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x28);
            *(undefined8 *)((param_1->ElementData).Pad + 0x20) =
                 *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x20);
            *(undefined8 *)((param_1->ElementData).Pad + 0x28) = uVar7;
            uVar7 = *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x38);
            *(undefined8 *)((param_1->ElementData).Pad + 0x30) =
                 *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x30);
            *(undefined8 *)((param_1->ElementData).Pad + 0x38) = uVar7;
            uVar7 = *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x48);
            *(undefined8 *)((param_1->ElementData).Pad + 0x40) =
                 *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x40);
            *(undefined8 *)((param_1->ElementData).Pad + 0x48) = uVar7;
            uVar7 = *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x58);
            *(undefined8 *)((param_1->ElementData).Pad + 0x50) =
                 *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x50);
            *(undefined8 *)((param_1->ElementData).Pad + 0x58) = uVar7;
            uVar7 = *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x68);
            *(undefined8 *)((param_1->ElementData).Pad + 0x60) =
                 *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x60);
            *(undefined8 *)((param_1->ElementData).Pad + 0x68) = uVar7;
            uVar7 = *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x78);
            *(undefined8 *)((param_1->ElementData).Pad + 0x70) =
                 *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x70);
            *(undefined8 *)((param_1->ElementData).Pad + 0x78) = uVar7;
            uVar7 = *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x88);
            *(undefined8 *)((param_1->ElementData).Pad + 0x80) =
                 *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x80);
            *(undefined8 *)((param_1->ElementData).Pad + 0x88) = uVar7;
            *(undefined8 *)((param_1->ElementData).Pad + 0x90) =
                 *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x90);
            pTVar34->_s_1 = TVar8;
            *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 8) = uVar9;
            *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x10) = uVar10;
            *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x18) = uVar11;
            *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x20) = uVar12;
            *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x28) = uVar13;
            *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x30) = uVar14;
            *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x38) = uVar15;
            *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x40) = uVar16;
            *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x48) = uVar17;
            *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x50) = uVar18;
            *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x58) = uVar19;
            *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x60) = uVar20;
            *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x68) = uVar21;
            *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x70) = uVar22;
            *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x78) = uVar23;
            *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x80) = uVar24;
            *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x88) = uVar25;
            *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x90) = uVar5;
            iVar36 = 0;
            if (1 < iVar28) {
              do {
                iVar37 = iVar36 * 2;
                iVar27 = iVar37 + 1;
                if (iVar37 + 2 < iVar28) {
                  fVar4 = *(float *)((longlong)iVar37 * 0x98 + 0x140 + (longlong)param_1);
                  pfVar1 = (float *)((longlong)iVar27 * 0x98 + 0x10 + (longlong)param_1);
                  if (*pfVar1 <= fVar4 && fVar4 != *pfVar1) {
                    iVar27 = iVar37;
                  }
                  iVar27 = iVar27 + 1;
                }
                lVar30 = (longlong)iVar36;
                lVar32 = lVar30 * 0x98;
                lVar31 = (longlong)iVar27;
                lVar33 = lVar31 * 0x98;
                if (*(float *)(lVar32 + 0x10 + (longlong)param_1) <=
                    *(float *)(lVar33 + 0x10 + (longlong)param_1)) break;
                uVar7 = *(undefined8 *)(param_1[lVar31].ElementData.Pad + 8);
                uVar5 = *(undefined8 *)(lVar32 + 0x90 + (longlong)param_1);
                TVar8 = param_1[lVar30]._s_1;
                uVar9 = *(undefined8 *)(param_1[lVar30].ElementData.Pad + 8);
                puVar2 = (undefined8 *)(lVar32 + 0x10 + (longlong)param_1);
                uVar10 = *puVar2;
                uVar11 = puVar2[1];
                puVar2 = (undefined8 *)(lVar32 + 0x20 + (longlong)param_1);
                uVar12 = *puVar2;
                uVar13 = puVar2[1];
                puVar2 = (undefined8 *)(lVar32 + 0x30 + (longlong)param_1);
                uVar14 = *puVar2;
                uVar15 = puVar2[1];
                puVar2 = (undefined8 *)(lVar32 + 0x40 + (longlong)param_1);
                uVar16 = *puVar2;
                uVar17 = puVar2[1];
                puVar2 = (undefined8 *)(lVar32 + 0x50 + (longlong)param_1);
                uVar18 = *puVar2;
                uVar19 = puVar2[1];
                puVar2 = (undefined8 *)(lVar32 + 0x60 + (longlong)param_1);
                uVar20 = *puVar2;
                uVar21 = puVar2[1];
                puVar2 = (undefined8 *)(lVar32 + 0x70 + (longlong)param_1);
                uVar22 = *puVar2;
                uVar23 = puVar2[1];
                puVar2 = (undefined8 *)(lVar32 + 0x80 + (longlong)param_1);
                uVar24 = *puVar2;
                uVar25 = puVar2[1];
                param_1[lVar30]._s_1 = param_1[lVar31]._s_1;
                *(undefined8 *)((longlong)param_1[lVar30].ElementData.Pad + 8) = uVar7;
                puVar2 = (undefined8 *)(lVar33 + 0x10 + (longlong)param_1);
                uVar7 = puVar2[1];
                puVar3 = (undefined8 *)(lVar32 + 0x10 + (longlong)param_1);
                *puVar3 = *puVar2;
                puVar3[1] = uVar7;
                puVar2 = (undefined8 *)(lVar33 + 0x20 + (longlong)param_1);
                uVar7 = puVar2[1];
                puVar3 = (undefined8 *)(lVar32 + 0x20 + (longlong)param_1);
                *puVar3 = *puVar2;
                puVar3[1] = uVar7;
                puVar2 = (undefined8 *)(lVar33 + 0x30 + (longlong)param_1);
                uVar7 = puVar2[1];
                puVar3 = (undefined8 *)(lVar32 + 0x30 + (longlong)param_1);
                *puVar3 = *puVar2;
                puVar3[1] = uVar7;
                puVar2 = (undefined8 *)(lVar33 + 0x40 + (longlong)param_1);
                uVar7 = puVar2[1];
                puVar3 = (undefined8 *)(lVar32 + 0x40 + (longlong)param_1);
                *puVar3 = *puVar2;
                puVar3[1] = uVar7;
                puVar2 = (undefined8 *)(lVar33 + 0x50 + (longlong)param_1);
                uVar7 = puVar2[1];
                puVar3 = (undefined8 *)(lVar32 + 0x50 + (longlong)param_1);
                *puVar3 = *puVar2;
                puVar3[1] = uVar7;
                puVar2 = (undefined8 *)(lVar33 + 0x60 + (longlong)param_1);
                uVar7 = puVar2[1];
                puVar3 = (undefined8 *)(lVar32 + 0x60 + (longlong)param_1);
                *puVar3 = *puVar2;
                puVar3[1] = uVar7;
                puVar2 = (undefined8 *)(lVar33 + 0x70 + (longlong)param_1);
                uVar7 = puVar2[1];
                puVar3 = (undefined8 *)(lVar32 + 0x70 + (longlong)param_1);
                *puVar3 = *puVar2;
                puVar3[1] = uVar7;
                puVar2 = (undefined8 *)(lVar33 + 0x80 + (longlong)param_1);
                uVar7 = puVar2[1];
                puVar3 = (undefined8 *)(lVar32 + 0x80 + (longlong)param_1);
                *puVar3 = *puVar2;
                puVar3[1] = uVar7;
                *(undefined8 *)(lVar32 + 0x90 + (longlong)param_1) =
                     *(undefined8 *)(lVar33 + 0x90 + (longlong)param_1);
                param_1[lVar31]._s_1 = TVar8;
                *(undefined8 *)((longlong)param_1[lVar31].ElementData.Pad + 8) = uVar9;
                puVar2 = (undefined8 *)(lVar33 + 0x10 + (longlong)param_1);
                *puVar2 = uVar10;
                puVar2[1] = uVar11;
                puVar2 = (undefined8 *)(lVar33 + 0x20 + (longlong)param_1);
                *puVar2 = uVar12;
                puVar2[1] = uVar13;
                puVar2 = (undefined8 *)(lVar33 + 0x30 + (longlong)param_1);
                *puVar2 = uVar14;
                puVar2[1] = uVar15;
                puVar2 = (undefined8 *)(lVar33 + 0x40 + (longlong)param_1);
                *puVar2 = uVar16;
                puVar2[1] = uVar17;
                puVar2 = (undefined8 *)(lVar33 + 0x50 + (longlong)param_1);
                *puVar2 = uVar18;
                puVar2[1] = uVar19;
                puVar2 = (undefined8 *)(lVar33 + 0x60 + (longlong)param_1);
                *puVar2 = uVar20;
                puVar2[1] = uVar21;
                puVar2 = (undefined8 *)(lVar33 + 0x70 + (longlong)param_1);
                *puVar2 = uVar22;
                puVar2[1] = uVar23;
                puVar2 = (undefined8 *)(lVar33 + 0x80 + (longlong)param_1);
                *puVar2 = uVar24;
                puVar2[1] = uVar25;
                *(undefined8 *)(lVar33 + 0x90 + (longlong)param_1) = uVar5;
                iVar36 = iVar27;
              } while (iVar27 * 2 + 1 < iVar28);
            }
            iVar28 = iVar28 + -1;
            lVar29 = lVar29 + -1;
            pTVar34 = pTVar34 + -1;
          } while (0 < lVar29);
        }
        return;
      }
      iVar27 = iVar37 + -1;
      iVar28 = iVar36 + -2;
      iVar36 = iVar28;
      iVar37 = iVar27;
    }
    iVar28 = iVar27 * 2;
    iVar35 = iVar28 + 1;
    if (iVar28 + 2 < param_2) {
      fVar4 = *(float *)((longlong)iVar28 * 0x98 + 0x140 + (longlong)param_1);
      pfVar1 = (float *)((longlong)iVar35 * 0x98 + 0x10 + (longlong)param_1);
      if (*pfVar1 <= fVar4 && fVar4 != *pfVar1) {
        iVar35 = iVar28;
      }
      iVar35 = iVar35 + 1;
    }
    lVar29 = (longlong)iVar27;
    lVar31 = lVar29 * 0x98;
    lVar30 = (longlong)iVar35;
    lVar32 = lVar30 * 0x98;
    if (*(float *)(lVar31 + 0x10 + (longlong)param_1) <=
        *(float *)(lVar32 + 0x10 + (longlong)param_1)) goto LAB_14767cee9;
    uVar7 = *(undefined8 *)(param_1[lVar30].ElementData.Pad + 8);
    iVar28 = iVar35 * 2 + 1;
    uVar5 = *(undefined8 *)(lVar31 + 0x90 + (longlong)param_1);
    TVar8 = param_1[lVar29]._s_1;
    uVar9 = *(undefined8 *)(param_1[lVar29].ElementData.Pad + 8);
    puVar2 = (undefined8 *)(lVar31 + 0x10 + (longlong)param_1);
    uVar10 = *puVar2;
    uVar11 = puVar2[1];
    puVar2 = (undefined8 *)(lVar31 + 0x20 + (longlong)param_1);
    uVar12 = *puVar2;
    uVar13 = puVar2[1];
    puVar2 = (undefined8 *)(lVar31 + 0x30 + (longlong)param_1);
    uVar14 = *puVar2;
    uVar15 = puVar2[1];
    puVar2 = (undefined8 *)(lVar31 + 0x40 + (longlong)param_1);
    uVar16 = *puVar2;
    uVar17 = puVar2[1];
    puVar2 = (undefined8 *)(lVar31 + 0x50 + (longlong)param_1);
    uVar18 = *puVar2;
    uVar19 = puVar2[1];
    puVar2 = (undefined8 *)(lVar31 + 0x60 + (longlong)param_1);
    uVar20 = *puVar2;
    uVar21 = puVar2[1];
    puVar2 = (undefined8 *)(lVar31 + 0x70 + (longlong)param_1);
    uVar22 = *puVar2;
    uVar23 = puVar2[1];
    puVar2 = (undefined8 *)(lVar31 + 0x80 + (longlong)param_1);
    uVar24 = *puVar2;
    uVar25 = puVar2[1];
    param_1[lVar29]._s_1 = param_1[lVar30]._s_1;
    *(undefined8 *)((longlong)param_1[lVar29].ElementData.Pad + 8) = uVar7;
    puVar2 = (undefined8 *)(lVar32 + 0x10 + (longlong)param_1);
    uVar7 = puVar2[1];
    puVar3 = (undefined8 *)(lVar31 + 0x10 + (longlong)param_1);
    *puVar3 = *puVar2;
    puVar3[1] = uVar7;
    puVar2 = (undefined8 *)(lVar32 + 0x20 + (longlong)param_1);
    uVar7 = puVar2[1];
    puVar3 = (undefined8 *)(lVar31 + 0x20 + (longlong)param_1);
    *puVar3 = *puVar2;
    puVar3[1] = uVar7;
    puVar2 = (undefined8 *)(lVar32 + 0x30 + (longlong)param_1);
    uVar7 = puVar2[1];
    puVar3 = (undefined8 *)(lVar31 + 0x30 + (longlong)param_1);
    *puVar3 = *puVar2;
    puVar3[1] = uVar7;
    puVar2 = (undefined8 *)(lVar32 + 0x40 + (longlong)param_1);
    uVar7 = puVar2[1];
    puVar3 = (undefined8 *)(lVar31 + 0x40 + (longlong)param_1);
    *puVar3 = *puVar2;
    puVar3[1] = uVar7;
    puVar2 = (undefined8 *)(lVar32 + 0x50 + (longlong)param_1);
    uVar7 = puVar2[1];
    puVar3 = (undefined8 *)(lVar31 + 0x50 + (longlong)param_1);
    *puVar3 = *puVar2;
    puVar3[1] = uVar7;
    puVar2 = (undefined8 *)(lVar32 + 0x60 + (longlong)param_1);
    uVar7 = puVar2[1];
    puVar3 = (undefined8 *)(lVar31 + 0x60 + (longlong)param_1);
    *puVar3 = *puVar2;
    puVar3[1] = uVar7;
    puVar2 = (undefined8 *)(lVar32 + 0x70 + (longlong)param_1);
    uVar7 = puVar2[1];
    puVar3 = (undefined8 *)(lVar31 + 0x70 + (longlong)param_1);
    *puVar3 = *puVar2;
    puVar3[1] = uVar7;
    puVar2 = (undefined8 *)(lVar32 + 0x80 + (longlong)param_1);
    uVar7 = puVar2[1];
    puVar3 = (undefined8 *)(lVar31 + 0x80 + (longlong)param_1);
    *puVar3 = *puVar2;
    puVar3[1] = uVar7;
    *(undefined8 *)(lVar31 + 0x90 + (longlong)param_1) =
         *(undefined8 *)(lVar32 + 0x90 + (longlong)param_1);
    param_1[lVar30]._s_1 = TVar8;
    *(undefined8 *)((longlong)param_1[lVar30].ElementData.Pad + 8) = uVar9;
    puVar2 = (undefined8 *)(lVar32 + 0x10 + (longlong)param_1);
    *puVar2 = uVar10;
    puVar2[1] = uVar11;
    puVar2 = (undefined8 *)(lVar32 + 0x20 + (longlong)param_1);
    *puVar2 = uVar12;
    puVar2[1] = uVar13;
    puVar2 = (undefined8 *)(lVar32 + 0x30 + (longlong)param_1);
    *puVar2 = uVar14;
    puVar2[1] = uVar15;
    puVar2 = (undefined8 *)(lVar32 + 0x40 + (longlong)param_1);
    *puVar2 = uVar16;
    puVar2[1] = uVar17;
    puVar2 = (undefined8 *)(lVar32 + 0x50 + (longlong)param_1);
    *puVar2 = uVar18;
    puVar2[1] = uVar19;
    puVar2 = (undefined8 *)(lVar32 + 0x60 + (longlong)param_1);
    *puVar2 = uVar20;
    puVar2[1] = uVar21;
    puVar2 = (undefined8 *)(lVar32 + 0x70 + (longlong)param_1);
    *puVar2 = uVar22;
    puVar2[1] = uVar23;
    puVar2 = (undefined8 *)(lVar32 + 0x80 + (longlong)param_1);
    *puVar2 = uVar24;
    puVar2[1] = uVar25;
    *(undefined8 *)(lVar32 + 0x90 + (longlong)param_1) = uVar5;
    iVar27 = iVar35;
  } while( true );
}

// HeapSortInternal<TTuple<FAudioChunkCache::FCacheElement_*,int>,int,`FAudioChunkCache::DebugDisplayLegacy'::__l14::<lambda_1>,TGreater<float>_> @ 14767d1b0

void __cdecl
AlgoImpl::
HeapSortInternal<TTuple<FAudioChunkCache::FCacheElement_*,int>,int,_FAudioChunkCache::DebugDisplayLegacy_::__l14::<lambda_1>,TGreater<float>_>
          (TTuple<FAudioChunkCache::FCacheElement_*,int> *param_1,int param_2,<lambda_1> param_3,
          TGreater<float> param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  TTuple<FAudioChunkCache::FCacheElement_*,int> *pTVar11;
  longlong lVar12;
  
  if (param_2 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar6 = (param_2 + -2) / 2;
  iVar7 = iVar6 * 2 + 1;
  iVar9 = iVar7;
  iVar10 = iVar6;
  do {
    while (param_2 <= iVar7) {
LAB_14767d2cd:
      if (iVar10 == 0) {
        iVar7 = param_2 + -1;
        lVar12 = (longlong)iVar7;
        if (0 < iVar7) {
          pTVar11 = param_1 + lVar12;
          do {
            uVar2 = *(undefined8 *)&pTVar11->field_0x8;
            iVar9 = 0;
            uVar3 = *(undefined8 *)param_1;
            uVar4 = *(undefined8 *)&param_1->field_0x8;
            *(undefined8 *)param_1 = *(undefined8 *)pTVar11;
            *(undefined8 *)&param_1->field_0x8 = uVar2;
            *(undefined8 *)pTVar11 = uVar3;
            *(undefined8 *)&pTVar11->field_0x8 = uVar4;
            if (1 < iVar7) {
              do {
                iVar10 = iVar9 * 2;
                iVar6 = iVar10 + 1;
                if (iVar10 + 2 < iVar7) {
                  if (*(float *)(*(longlong *)(param_1 + iVar6) + 0x90) <=
                      *(float *)(*(longlong *)(param_1 + (longlong)iVar10 + 2) + 0x90) &&
                      *(float *)(*(longlong *)(param_1 + (longlong)iVar10 + 2) + 0x90) !=
                      *(float *)(*(longlong *)(param_1 + iVar6) + 0x90)) {
                    iVar6 = iVar10;
                  }
                  iVar6 = iVar6 + 1;
                }
                if (*(float *)(*(longlong *)(param_1 + iVar9) + 0x90) <
                    *(float *)(*(longlong *)(param_1 + iVar6) + 0x90) ||
                    *(float *)(*(longlong *)(param_1 + iVar9) + 0x90) ==
                    *(float *)(*(longlong *)(param_1 + iVar6) + 0x90)) break;
                uVar2 = *(undefined8 *)&param_1[iVar6].field_0x8;
                uVar3 = *(undefined8 *)(param_1 + iVar9);
                uVar4 = *(undefined8 *)&param_1[iVar9].field_0x8;
                *(undefined8 *)(param_1 + iVar9) = *(undefined8 *)(param_1 + iVar6);
                *(undefined8 *)&param_1[iVar9].field_0x8 = uVar2;
                *(undefined8 *)(param_1 + iVar6) = uVar3;
                *(undefined8 *)&param_1[iVar6].field_0x8 = uVar4;
                iVar9 = iVar6;
              } while (iVar6 * 2 + 1 < iVar7);
            }
            iVar7 = iVar7 + -1;
            lVar12 = lVar12 + -1;
            pTVar11 = pTVar11 + -1;
          } while (0 < lVar12);
        }
        return;
      }
      iVar6 = iVar10 + -1;
      iVar7 = iVar9 + -2;
      iVar9 = iVar7;
      iVar10 = iVar6;
    }
    iVar7 = iVar6 * 2;
    iVar8 = iVar7 + 1;
    if (iVar7 + 2 < param_2) {
      if (*(float *)(*(longlong *)(param_1 + iVar8) + 0x90) <=
          *(float *)(*(longlong *)(param_1 + (longlong)iVar7 + 2) + 0x90) &&
          *(float *)(*(longlong *)(param_1 + (longlong)iVar7 + 2) + 0x90) !=
          *(float *)(*(longlong *)(param_1 + iVar8) + 0x90)) {
        iVar8 = iVar7;
      }
      iVar8 = iVar8 + 1;
    }
    if (*(float *)(*(longlong *)(param_1 + iVar6) + 0x90) <
        *(float *)(*(longlong *)(param_1 + iVar8) + 0x90) ||
        *(float *)(*(longlong *)(param_1 + iVar6) + 0x90) ==
        *(float *)(*(longlong *)(param_1 + iVar8) + 0x90)) goto LAB_14767d2cd;
    uVar2 = *(undefined8 *)&param_1[iVar8].field_0x8;
    iVar7 = iVar8 * 2 + 1;
    uVar3 = *(undefined8 *)(param_1 + iVar6);
    uVar4 = *(undefined8 *)&param_1[iVar6].field_0x8;
    *(undefined8 *)(param_1 + iVar6) = *(undefined8 *)(param_1 + iVar8);
    *(undefined8 *)&param_1[iVar6].field_0x8 = uVar2;
    *(undefined8 *)(param_1 + iVar8) = uVar3;
    *(undefined8 *)&param_1[iVar8].field_0x8 = uVar4;
    iVar6 = iVar8;
  } while( true );
}

// HeapSortInternal<TTuple<FAudioChunkCache::FCacheElement_*,int>,int,`FAudioChunkCache::DebugDisplayLegacy'::__l15::<lambda_2>,TGreater<int>_> @ 14767d3e0

void __cdecl
AlgoImpl::
HeapSortInternal<TTuple<FAudioChunkCache::FCacheElement_*,int>,int,_FAudioChunkCache::DebugDisplayLegacy_::__l15::<lambda_2>,TGreater<int>_>
          (TTuple<FAudioChunkCache::FCacheElement_*,int> *param_1,int param_2,<lambda_2> param_3,
          TGreater<int> param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  int iVar13;
  TTuple<FAudioChunkCache::FCacheElement_*,int> *pTVar14;
  
  if (param_2 < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar7) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar7) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar8 = (param_2 + -2) / 2;
  iVar9 = iVar8 * 2 + 1;
  iVar10 = iVar9;
  iVar13 = iVar8;
  do {
    while (param_2 <= iVar9) {
LAB_14767d4ed:
      if (iVar13 == 0) {
        iVar9 = param_2 + -1;
        lVar12 = (longlong)iVar9;
        if (0 < iVar9) {
          pTVar14 = param_1 + lVar12;
          do {
            uVar2 = *(undefined8 *)&pTVar14->field_0x8;
            iVar13 = 0;
            uVar4 = *(undefined8 *)param_1;
            uVar6 = *(undefined8 *)&param_1->field_0x8;
            *(undefined8 *)param_1 = *(undefined8 *)pTVar14;
            *(undefined8 *)&param_1->field_0x8 = uVar2;
            *(undefined8 *)pTVar14 = uVar4;
            *(undefined8 *)&pTVar14->field_0x8 = uVar6;
            if (1 < iVar9) {
              do {
                iVar8 = iVar13 * 2;
                iVar10 = iVar8 + 1;
                if (iVar8 + 2 < iVar9) {
                  if (*(int *)(*(longlong *)(param_1 + iVar10) + 0x7c) <
                      *(int *)(*(longlong *)(param_1 + (longlong)iVar8 + 2) + 0x7c)) {
                    iVar10 = iVar8;
                  }
                  iVar10 = iVar10 + 1;
                }
                lVar3 = *(longlong *)(param_1 + iVar13);
                uVar2 = *(undefined8 *)&param_1[iVar13].field_0x8;
                lVar5 = *(longlong *)(param_1 + iVar10);
                uVar4 = *(undefined8 *)&param_1[iVar10].field_0x8;
                if (*(int *)(lVar3 + 0x7c) <= *(int *)(lVar5 + 0x7c)) break;
                *(longlong *)(param_1 + iVar13) = lVar5;
                *(undefined8 *)&param_1[iVar13].field_0x8 = uVar4;
                *(longlong *)(param_1 + iVar10) = lVar3;
                *(undefined8 *)&param_1[iVar10].field_0x8 = uVar2;
                iVar13 = iVar10;
              } while (iVar10 * 2 + 1 < iVar9);
            }
            iVar9 = iVar9 + -1;
            lVar12 = lVar12 + -1;
            pTVar14 = pTVar14 + -1;
          } while (0 < lVar12);
        }
        return;
      }
      iVar8 = iVar13 + -1;
      iVar9 = iVar10 + -2;
      iVar10 = iVar9;
      iVar13 = iVar8;
    }
    iVar9 = iVar8 * 2;
    iVar11 = iVar9 + 1;
    if (iVar9 + 2 < param_2) {
      if (*(int *)(*(longlong *)(param_1 + iVar11) + 0x7c) <
          *(int *)(*(longlong *)(param_1 + (longlong)iVar9 + 2) + 0x7c)) {
        iVar11 = iVar9;
      }
      iVar11 = iVar11 + 1;
    }
    lVar12 = *(longlong *)(param_1 + iVar8);
    uVar2 = *(undefined8 *)&param_1[iVar8].field_0x8;
    lVar3 = *(longlong *)(param_1 + iVar11);
    uVar4 = *(undefined8 *)&param_1[iVar11].field_0x8;
    if (*(int *)(lVar12 + 0x7c) <= *(int *)(lVar3 + 0x7c)) goto LAB_14767d4ed;
    *(longlong *)(param_1 + iVar8) = lVar3;
    *(undefined8 *)&param_1[iVar8].field_0x8 = uVar4;
    iVar9 = iVar11 * 2 + 1;
    *(longlong *)(param_1 + iVar11) = lVar12;
    *(undefined8 *)&param_1[iVar11].field_0x8 = uVar2;
    iVar8 = iVar11;
  } while( true );
}

// HeapSortInternal<TTuple<FAudioChunkCache::FCacheElement_*,int>,int,`FAudioChunkCache::DebugDisplayLegacy'::__l16::<lambda_3>,TGreater<int>_> @ 14767d5f0

void __cdecl
AlgoImpl::
HeapSortInternal<TTuple<FAudioChunkCache::FCacheElement_*,int>,int,_FAudioChunkCache::DebugDisplayLegacy_::__l16::<lambda_3>,TGreater<int>_>
          (TTuple<FAudioChunkCache::FCacheElement_*,int> *param_1,int param_2,<lambda_3> param_3,
          TGreater<int> param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  TTuple<FAudioChunkCache::FCacheElement_*,int> *pTVar10;
  int iVar11;
  int iVar12;
  
  if (param_2 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar6 = (param_2 + -2) / 2;
  iVar7 = iVar6 * 2 + 1;
  iVar8 = iVar6;
  iVar12 = iVar7;
  do {
    while (param_2 <= iVar7) {
LAB_14767d6fc:
      if (iVar8 == 0) {
        iVar7 = param_2 + -1;
        lVar9 = (longlong)iVar7;
        if (0 < iVar7) {
          pTVar10 = param_1 + lVar9;
          do {
            uVar2 = *(undefined8 *)&pTVar10->field_0x8;
            uVar3 = *(undefined8 *)param_1;
            uVar4 = *(undefined8 *)&param_1->field_0x8;
            *(undefined8 *)param_1 = *(undefined8 *)pTVar10;
            *(undefined8 *)&param_1->field_0x8 = uVar2;
            *(undefined8 *)pTVar10 = uVar3;
            *(undefined8 *)&pTVar10->field_0x8 = uVar4;
            iVar12 = 0;
            if (1 < iVar7) {
              do {
                iVar6 = iVar12 * 2;
                iVar8 = iVar6 + 1;
                if (iVar6 + 2 < iVar7) {
                  if (*(int *)(*(longlong *)(param_1 + iVar8) + 0x60) <
                      *(int *)(*(longlong *)(param_1 + (longlong)iVar6 + 2) + 0x60)) {
                    iVar8 = iVar6;
                  }
                  iVar8 = iVar8 + 1;
                }
                if (*(int *)(*(longlong *)(param_1 + iVar12) + 0x60) <=
                    *(int *)(*(longlong *)(param_1 + iVar8) + 0x60)) break;
                uVar2 = *(undefined8 *)(param_1 + iVar12);
                uVar3 = *(undefined8 *)&param_1[iVar12].field_0x8;
                uVar4 = *(undefined8 *)&param_1[iVar8].field_0x8;
                *(undefined8 *)(param_1 + iVar12) = *(undefined8 *)(param_1 + iVar8);
                *(undefined8 *)&param_1[iVar12].field_0x8 = uVar4;
                *(undefined8 *)(param_1 + iVar8) = uVar2;
                *(undefined8 *)&param_1[iVar8].field_0x8 = uVar3;
                iVar12 = iVar8;
              } while (iVar8 * 2 + 1 < iVar7);
            }
            iVar7 = iVar7 + -1;
            lVar9 = lVar9 + -1;
            pTVar10 = pTVar10 + -1;
          } while (0 < lVar9);
        }
        return;
      }
      iVar6 = iVar8 + -1;
      iVar7 = iVar12 + -2;
      iVar8 = iVar6;
      iVar12 = iVar7;
    }
    iVar7 = iVar6 * 2;
    iVar11 = iVar7 + 1;
    if (iVar7 + 2 < param_2) {
      if (*(int *)(*(longlong *)(param_1 + iVar11) + 0x60) <
          *(int *)(*(longlong *)(param_1 + (longlong)iVar7 + 2) + 0x60)) {
        iVar11 = iVar7;
      }
      iVar11 = iVar11 + 1;
    }
    if (*(int *)(*(longlong *)(param_1 + iVar6) + 0x60) <=
        *(int *)(*(longlong *)(param_1 + iVar11) + 0x60)) goto LAB_14767d6fc;
    uVar2 = *(undefined8 *)(param_1 + iVar6);
    uVar3 = *(undefined8 *)&param_1[iVar6].field_0x8;
    iVar7 = iVar11 * 2 + 1;
    uVar4 = *(undefined8 *)&param_1[iVar11].field_0x8;
    *(undefined8 *)(param_1 + iVar6) = *(undefined8 *)(param_1 + iVar11);
    *(undefined8 *)&param_1[iVar6].field_0x8 = uVar4;
    *(undefined8 *)(param_1 + iVar11) = uVar2;
    *(undefined8 *)&param_1[iVar11].field_0x8 = uVar3;
    iVar6 = iVar11;
  } while( true );
}

// HeapSortInternal<TTuple<FAudioChunkCache::FCacheElement_*,int>,int,`FAudioChunkCache::DebugDisplayLegacy'::__l17::<lambda_4>,TGreater<unsigned___int64>_> @ 14767d800

void __cdecl
AlgoImpl::
HeapSortInternal<TTuple<FAudioChunkCache::FCacheElement_*,int>,int,_FAudioChunkCache::DebugDisplayLegacy_::__l17::<lambda_4>,TGreater<unsigned___int64>_>
          (TTuple<FAudioChunkCache::FCacheElement_*,int> *param_1,int param_2,<lambda_4> param_3,
          TGreater<unsigned___int64> param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  int iVar13;
  TTuple<FAudioChunkCache::FCacheElement_*,int> *pTVar14;
  
  if (param_2 < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar7) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar7) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar8 = (param_2 + -2) / 2;
  iVar9 = iVar8 * 2 + 1;
  iVar10 = iVar9;
  iVar13 = iVar8;
  do {
    while (param_2 <= iVar9) {
LAB_14767d921:
      if (iVar13 == 0) {
        iVar9 = param_2 + -1;
        lVar12 = (longlong)iVar9;
        if (0 < iVar9) {
          pTVar14 = param_1 + lVar12;
          do {
            uVar2 = *(undefined8 *)&pTVar14->field_0x8;
            iVar13 = 0;
            uVar4 = *(undefined8 *)param_1;
            uVar6 = *(undefined8 *)&param_1->field_0x8;
            *(undefined8 *)param_1 = *(undefined8 *)pTVar14;
            *(undefined8 *)&param_1->field_0x8 = uVar2;
            *(undefined8 *)pTVar14 = uVar4;
            *(undefined8 *)&pTVar14->field_0x8 = uVar6;
            if (1 < iVar9) {
              do {
                iVar8 = iVar13 * 2;
                iVar10 = iVar8 + 1;
                if (iVar8 + 2 < iVar9) {
                  if (*(ulonglong *)(*(longlong *)(param_1 + iVar10) + 0x80) <
                      *(ulonglong *)(*(longlong *)(param_1 + (longlong)iVar8 + 2) + 0x80)) {
                    iVar10 = iVar8;
                  }
                  iVar10 = iVar10 + 1;
                }
                lVar3 = *(longlong *)(param_1 + iVar13);
                uVar2 = *(undefined8 *)&param_1[iVar13].field_0x8;
                lVar5 = *(longlong *)(param_1 + iVar10);
                uVar4 = *(undefined8 *)&param_1[iVar10].field_0x8;
                if (*(ulonglong *)(lVar3 + 0x80) <= *(ulonglong *)(lVar5 + 0x80)) break;
                *(longlong *)(param_1 + iVar13) = lVar5;
                *(undefined8 *)&param_1[iVar13].field_0x8 = uVar4;
                *(longlong *)(param_1 + iVar10) = lVar3;
                *(undefined8 *)&param_1[iVar10].field_0x8 = uVar2;
                iVar13 = iVar10;
              } while (iVar10 * 2 + 1 < iVar9);
            }
            iVar9 = iVar9 + -1;
            lVar12 = lVar12 + -1;
            pTVar14 = pTVar14 + -1;
          } while (0 < lVar12);
        }
        return;
      }
      iVar8 = iVar13 + -1;
      iVar9 = iVar10 + -2;
      iVar10 = iVar9;
      iVar13 = iVar8;
    }
    iVar9 = iVar8 * 2;
    iVar11 = iVar9 + 1;
    if (iVar9 + 2 < param_2) {
      if (*(ulonglong *)(*(longlong *)(param_1 + iVar11) + 0x80) <
          *(ulonglong *)(*(longlong *)(param_1 + (longlong)iVar9 + 2) + 0x80)) {
        iVar11 = iVar9;
      }
      iVar11 = iVar11 + 1;
    }
    lVar12 = *(longlong *)(param_1 + iVar8);
    uVar2 = *(undefined8 *)&param_1[iVar8].field_0x8;
    lVar3 = *(longlong *)(param_1 + iVar11);
    uVar4 = *(undefined8 *)&param_1[iVar11].field_0x8;
    if (*(ulonglong *)(lVar12 + 0x80) <= *(ulonglong *)(lVar3 + 0x80)) goto LAB_14767d921;
    *(longlong *)(param_1 + iVar8) = lVar3;
    *(undefined8 *)&param_1[iVar8].field_0x8 = uVar4;
    iVar9 = iVar11 * 2 + 1;
    *(longlong *)(param_1 + iVar11) = lVar12;
    *(undefined8 *)&param_1[iVar11].field_0x8 = uVar2;
    iVar8 = iVar11;
  } while( true );
}

// HeapSortInternal<FBatchedElements::FBatchedSprite,int,FIdentityFunctor,TDereferenceWrapper<FBatchedElements::FBatchedSprite,`FBatchedElements::Draw'::__l125::FCompareSprite>_> @ 14767da30

void __cdecl
AlgoImpl::
HeapSortInternal<FBatchedElements::FBatchedSprite,int,FIdentityFunctor,TDereferenceWrapper<FBatchedElements::FBatchedSprite,_FBatchedElements::Draw_::__l125::FCompareSprite>_>
          (FBatchedSprite *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FBatchedElements::FBatchedSprite,_public:_bool___cdecl_FBatchedElements::Draw(FRHICommandList_&,FMeshPassProcessorRenderState_const_&,ERHIFeatureLevel::Type,FSceneView_const_&,bool,float,EBlendModeFilter::Type,unsigned_int)const_::_125_::FCompareSprite>
          param_4)

{
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  byte bVar4;
  code *pcVar5;
  int iVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  FTexture *pFVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  float fVar15;
  float fVar16;
  FColor FVar17;
  float fVar18;
  undefined7 uVar19;
  float fVar20;
  float fVar21;
  FColor FVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  uchar uVar28;
  undefined7 uVar29;
  bool bVar30;
  int iVar31;
  byte bVar32;
  int iVar33;
  int iVar34;
  FBatchedSprite *pFVar35;
  FBatchedSprite *pFVar36;
  FBatchedSprite *pFVar37;
  longlong lVar38;
  FCompareSprite *local_res20;
  
  local_res20 = param_4.Predicate;
  if (param_2 < 0) {
    bVar30 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar30) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  HeapifyInternal<FBatchedElements::FBatchedSprite,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<FBatchedElements::FBatchedSprite,_FBatchedElements::Draw_::__l125::FCompareSprite>_>_>
            (param_1,param_2,param_3,
             (TDereferenceWrapper<FBatchedElements::FBatchedSprite,_public:_bool___cdecl_FBatchedElements::Draw(FRHICommandList_&,FMeshPassProcessorRenderState_const_&,ERHIFeatureLevel::Type,FSceneView_const_&,bool,float,EBlendModeFilter::Type,unsigned_int)const_::_125_::FCompareSprite>
              *)&local_res20);
  iVar33 = param_2 + -1;
  lVar38 = (longlong)iVar33;
  if (0 < iVar33) {
    pFVar37 = param_1 + lVar38;
    do {
      dVar7 = (pFVar37->Position).field0_0x0._s_0.Y;
      iVar34 = 0;
      uVar28 = param_1->BlendMode;
      uVar29 = *(undefined7 *)&param_1->field_0x51;
      dVar8 = (param_1->Position).field0_0x0._s_0.X;
      dVar9 = (param_1->Position).field0_0x0._s_0.Y;
      dVar10 = (param_1->Position).field0_0x0._s_0.Z;
      fVar20 = param_1->SizeX;
      fVar21 = param_1->SizeY;
      pFVar11 = param_1->Texture;
      uVar12 = *(undefined8 *)&(param_1->Color).field0_0x0;
      uVar13 = *(undefined8 *)((longlong)&(param_1->Color).field0_0x0 + 8);
      FVar22.field0_0x0 = (param_1->HitProxyColor).field0_0x0;
      fVar23 = param_1->U;
      fVar24 = param_1->UL;
      fVar25 = param_1->V;
      fVar26 = param_1->VL;
      fVar27 = param_1->OpacityMaskRefVal;
      (param_1->Position).field0_0x0._s_0.X = (pFVar37->Position).field0_0x0._s_0.X;
      (param_1->Position).field0_0x0._s_0.Y = dVar7;
      fVar15 = pFVar37->SizeX;
      fVar16 = pFVar37->SizeY;
      (param_1->Position).field0_0x0._s_0.Z = (pFVar37->Position).field0_0x0._s_0.Z;
      param_1->SizeX = fVar15;
      param_1->SizeY = fVar16;
      uVar14 = *(undefined8 *)&(pFVar37->Color).field0_0x0;
      param_1->Texture = pFVar37->Texture;
      *(undefined8 *)&(param_1->Color).field0_0x0 = uVar14;
      FVar17.field0_0x0 = (pFVar37->HitProxyColor).field0_0x0;
      fVar15 = pFVar37->U;
      *(undefined8 *)((longlong)&(param_1->Color).field0_0x0 + 8) =
           *(undefined8 *)((longlong)&(pFVar37->Color).field0_0x0 + 8);
      param_1->HitProxyColor = (FColor)FVar17.field0_0x0;
      param_1->U = fVar15;
      fVar15 = pFVar37->V;
      fVar16 = pFVar37->VL;
      fVar18 = pFVar37->OpacityMaskRefVal;
      param_1->UL = pFVar37->UL;
      param_1->V = fVar15;
      param_1->VL = fVar16;
      param_1->OpacityMaskRefVal = fVar18;
      uVar19 = *(undefined7 *)&pFVar37->field_0x51;
      param_1->BlendMode = pFVar37->BlendMode;
      *(undefined7 *)&param_1->field_0x51 = uVar19;
      (pFVar37->Position).field0_0x0._s_0.X = dVar8;
      (pFVar37->Position).field0_0x0._s_0.Y = dVar9;
      (pFVar37->Position).field0_0x0._s_0.Z = dVar10;
      pFVar37->SizeX = fVar20;
      pFVar37->SizeY = fVar21;
      pFVar37->Texture = pFVar11;
      *(undefined8 *)&(pFVar37->Color).field0_0x0 = uVar12;
      *(undefined8 *)((longlong)&(pFVar37->Color).field0_0x0 + 8) = uVar13;
      pFVar37->HitProxyColor = (FColor)FVar22.field0_0x0;
      pFVar37->U = fVar23;
      pFVar37->UL = fVar24;
      pFVar37->V = fVar25;
      pFVar37->VL = fVar26;
      pFVar37->OpacityMaskRefVal = fVar27;
      pFVar37->BlendMode = uVar28;
      *(undefined7 *)&pFVar37->field_0x51 = uVar29;
      if (1 < iVar33) {
        do {
          iVar6 = iVar34 * 2;
          iVar31 = iVar6 + 1;
          if (iVar6 + 2 < iVar33) {
            lVar1 = (longlong)iVar6 + 2;
            lVar2 = (longlong)iVar6 + 1;
            bVar3 = param_1[lVar1].BlendMode;
            bVar4 = param_1[lVar2].BlendMode;
            if (bVar3 == bVar4) {
              bVar30 = param_1[lVar1].Texture < param_1[lVar2].Texture;
            }
            else {
              bVar32 = (byte)local_res20->ValidBlendFilter;
              bVar30 = (bVar32 & bVar3) != 0;
              if (bVar30 == ((bVar32 & bVar4) != 0)) {
                bVar30 = bVar3 < bVar4;
              }
            }
            if (bVar30) {
              iVar31 = iVar6;
            }
            iVar31 = iVar31 + 1;
          }
          pFVar36 = param_1 + iVar34;
          pFVar35 = param_1 + iVar31;
          bVar3 = pFVar36->BlendMode;
          bVar4 = pFVar35->BlendMode;
          if (bVar3 == bVar4) {
            bVar30 = pFVar36->Texture < pFVar35->Texture;
          }
          else {
            bVar32 = (byte)local_res20->ValidBlendFilter;
            bVar30 = (bVar32 & bVar3) != 0;
            if (bVar30 == ((bVar32 & bVar4) != 0)) {
              bVar30 = bVar3 < bVar4;
            }
          }
          if (!bVar30) break;
          dVar7 = (pFVar35->Position).field0_0x0._s_0.Y;
          uVar28 = pFVar36->BlendMode;
          uVar29 = *(undefined7 *)&pFVar36->field_0x51;
          dVar8 = (pFVar36->Position).field0_0x0._s_0.X;
          dVar9 = (pFVar36->Position).field0_0x0._s_0.Y;
          dVar10 = (pFVar36->Position).field0_0x0._s_0.Z;
          fVar20 = pFVar36->SizeX;
          fVar21 = pFVar36->SizeY;
          pFVar11 = pFVar36->Texture;
          uVar12 = *(undefined8 *)&(pFVar36->Color).field0_0x0;
          uVar13 = *(undefined8 *)((longlong)&(pFVar36->Color).field0_0x0 + 8);
          FVar22.field0_0x0 = (pFVar36->HitProxyColor).field0_0x0;
          fVar23 = pFVar36->U;
          fVar24 = pFVar36->UL;
          fVar25 = pFVar36->V;
          fVar26 = pFVar36->VL;
          fVar27 = pFVar36->OpacityMaskRefVal;
          (pFVar36->Position).field0_0x0._s_0.X = (pFVar35->Position).field0_0x0._s_0.X;
          (pFVar36->Position).field0_0x0._s_0.Y = dVar7;
          fVar15 = pFVar35->SizeX;
          fVar16 = pFVar35->SizeY;
          (pFVar36->Position).field0_0x0._s_0.Z = (pFVar35->Position).field0_0x0._s_0.Z;
          pFVar36->SizeX = fVar15;
          pFVar36->SizeY = fVar16;
          uVar14 = *(undefined8 *)&(pFVar35->Color).field0_0x0;
          pFVar36->Texture = pFVar35->Texture;
          *(undefined8 *)&(pFVar36->Color).field0_0x0 = uVar14;
          FVar17.field0_0x0 = (pFVar35->HitProxyColor).field0_0x0;
          fVar15 = pFVar35->U;
          *(undefined8 *)((longlong)&(pFVar36->Color).field0_0x0 + 8) =
               *(undefined8 *)((longlong)&(pFVar35->Color).field0_0x0 + 8);
          pFVar36->HitProxyColor = (FColor)FVar17.field0_0x0;
          pFVar36->U = fVar15;
          fVar15 = pFVar35->V;
          fVar16 = pFVar35->VL;
          fVar18 = pFVar35->OpacityMaskRefVal;
          pFVar36->UL = pFVar35->UL;
          pFVar36->V = fVar15;
          pFVar36->VL = fVar16;
          pFVar36->OpacityMaskRefVal = fVar18;
          uVar19 = *(undefined7 *)&pFVar35->field_0x51;
          pFVar36->BlendMode = pFVar35->BlendMode;
          *(undefined7 *)&pFVar36->field_0x51 = uVar19;
          (pFVar35->Position).field0_0x0._s_0.X = dVar8;
          (pFVar35->Position).field0_0x0._s_0.Y = dVar9;
          (pFVar35->Position).field0_0x0._s_0.Z = dVar10;
          pFVar35->SizeX = fVar20;
          pFVar35->SizeY = fVar21;
          pFVar35->Texture = pFVar11;
          *(undefined8 *)&(pFVar35->Color).field0_0x0 = uVar12;
          *(undefined8 *)((longlong)&(pFVar35->Color).field0_0x0 + 8) = uVar13;
          pFVar35->HitProxyColor = (FColor)FVar22.field0_0x0;
          pFVar35->U = fVar23;
          pFVar35->UL = fVar24;
          pFVar35->V = fVar25;
          pFVar35->VL = fVar26;
          pFVar35->OpacityMaskRefVal = fVar27;
          pFVar35->BlendMode = uVar28;
          *(undefined7 *)&pFVar35->field_0x51 = uVar29;
          iVar34 = iVar31;
        } while (iVar31 * 2 + 1 < iVar33);
      }
      iVar33 = iVar33 + -1;
      lVar38 = lVar38 + -1;
      pFVar37 = pFVar37 + -1;
    } while (0 < lVar38);
  }
  return;
}

// HeapSortInternal<`FAudioChunkCache::FlushCacheMissLog'::__l2::FMissedChunk,int,FIdentityFunctor,TDereferenceWrapper<`FAudioChunkCache::FlushCacheMissLog'::__l2::FMissedChunk,`FAudioChunkCache::FlushCacheMissLog'::__l2::FCacheMissSortPredicate>_> @ 14767dcc0

void __cdecl
AlgoImpl::
HeapSortInternal<_FAudioChunkCache::FlushCacheMissLog_::__l2::FMissedChunk,int,FIdentityFunctor,TDereferenceWrapper<_FAudioChunkCache::FlushCacheMissLog_::__l2::FMissedChunk,_FAudioChunkCache::FlushCacheMissLog_::__l2::FCacheMissSortPredicate>_>
          (FMissedChunk *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<_public:_class_FString___cdecl_FAudioChunkCache::FlushCacheMissLog(void)_::_2_::FMissedChunk,_public:_class_FString___cdecl_FAudioChunkCache::FlushCacheMissLog(void)_::_2_::FCacheMissSortPredicate>
          param_4)

{
  FMissedChunk *pFVar1;
  FMissedChunk *pFVar2;
  code *pcVar3;
  FName FVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  int iVar15;
  FMissedChunk *pFVar16;
  
  if (param_2 < 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar9) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar9) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar10 = (param_2 + -2) / 2;
  iVar11 = iVar10 * 2 + 1;
  iVar12 = iVar11;
  iVar15 = iVar10;
  do {
    while (param_2 <= iVar11) {
LAB_14767ddb0:
      if (iVar15 == 0) {
        iVar11 = param_2 + -1;
        lVar14 = (longlong)iVar11;
        if (0 < iVar11) {
          pFVar16 = param_1 + lVar14;
          do {
            uVar5 = pFVar16->ChunkIndex;
            iVar12 = pFVar16->MissCount;
            iVar15 = 0;
            FVar4 = param_1->SoundWaveName;
            uVar7 = param_1->ChunkIndex;
            iVar10 = param_1->MissCount;
            param_1->SoundWaveName = pFVar16->SoundWaveName;
            param_1->ChunkIndex = uVar5;
            param_1->MissCount = iVar12;
            pFVar16->SoundWaveName = FVar4;
            pFVar16->ChunkIndex = uVar7;
            pFVar16->MissCount = iVar10;
            if (1 < iVar11) {
              do {
                iVar10 = iVar15 * 2;
                iVar12 = iVar10 + 1;
                if (iVar10 + 2 < iVar11) {
                  if (param_1[iVar12].MissCount < param_1[(longlong)iVar10 + 2].MissCount) {
                    iVar12 = iVar10;
                  }
                  iVar12 = iVar12 + 1;
                }
                if (param_1[iVar15].MissCount <= param_1[iVar12].MissCount) break;
                pFVar1 = param_1 + iVar12;
                uVar5 = pFVar1->ChunkIndex;
                iVar10 = pFVar1->MissCount;
                pFVar2 = param_1 + iVar15;
                FVar4 = pFVar2->SoundWaveName;
                uVar7 = pFVar2->ChunkIndex;
                iVar13 = pFVar2->MissCount;
                pFVar2 = param_1 + iVar15;
                pFVar2->SoundWaveName = pFVar1->SoundWaveName;
                pFVar2->ChunkIndex = uVar5;
                pFVar2->MissCount = iVar10;
                pFVar1 = param_1 + iVar12;
                pFVar1->SoundWaveName = FVar4;
                pFVar1->ChunkIndex = uVar7;
                pFVar1->MissCount = iVar13;
                iVar15 = iVar12;
              } while (iVar12 * 2 + 1 < iVar11);
            }
            iVar11 = iVar11 + -1;
            lVar14 = lVar14 + -1;
            pFVar16 = pFVar16 + -1;
          } while (0 < lVar14);
        }
        return;
      }
      iVar10 = iVar15 + -1;
      iVar11 = iVar12 + -2;
      iVar12 = iVar11;
      iVar15 = iVar10;
    }
    iVar11 = iVar10 * 2;
    iVar13 = iVar11 + 1;
    if (iVar11 + 2 < param_2) {
      if (param_1[iVar13].MissCount < param_1[(longlong)iVar11 + 2].MissCount) {
        iVar13 = iVar11;
      }
      iVar13 = iVar13 + 1;
    }
    if (param_1[iVar10].MissCount <= param_1[iVar13].MissCount) goto LAB_14767ddb0;
    pFVar16 = param_1 + iVar13;
    uVar5 = pFVar16->ChunkIndex;
    iVar6 = pFVar16->MissCount;
    iVar11 = iVar13 * 2 + 1;
    pFVar1 = param_1 + iVar10;
    FVar4 = pFVar1->SoundWaveName;
    uVar7 = pFVar1->ChunkIndex;
    iVar8 = pFVar1->MissCount;
    pFVar1 = param_1 + iVar10;
    pFVar1->SoundWaveName = pFVar16->SoundWaveName;
    pFVar1->ChunkIndex = uVar5;
    pFVar1->MissCount = iVar6;
    pFVar16 = param_1 + iVar13;
    pFVar16->SoundWaveName = FVar4;
    pFVar16->ChunkIndex = uVar7;
    pFVar16->MissCount = iVar8;
    iVar10 = iVar13;
  } while( true );
}

// HeapSortInternal<FAudioChunkCache,int,FIdentityFunctor,TDereferenceWrapper<FAudioChunkCache,TLess<void>_>_> @ 14767de90

/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */

void __cdecl
AlgoImpl::
HeapSortInternal<FAudioChunkCache,int,FIdentityFunctor,TDereferenceWrapper<FAudioChunkCache,TLess<void>_>_>
          (FAudioChunkCache *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FAudioChunkCache,TLess<void>_> param_4)

{
  code *pcVar1;
  FScriptContainerElement *pFVar2;
  undefined8 uVar3;
  FCacheElement *pFVar4;
  FCacheElement *pFVar5;
  undefined8 uVar6;
  TAtomic<unsigned___int64> *pTVar7;
  ulong64 uVar8;
  TAtomic<unsigned___int64> *pTVar9;
  TAtomic<unsigned___int64> *pTVar10;
  void *pvVar11;
  void *pvVar12;
  void *pvVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  FThreadSafeCounter FVar16;
  int iVar17;
  undefined4 uVar18;
  undefined8 *puVar19;
  FAudioChunkCache *pFVar20;
  bool bVar21;
  int iVar22;
  FAudioChunkCache *pFVar23;
  FAudioChunkCache *pFVar24;
  undefined8 *puVar25;
  FAudioChunkCache *pFVar26;
  longlong lVar27;
  FAudioChunkCache *pFVar28;
  FIdentityFunctor local_res10 [8];
  FIdentityFunctor local_res18 [8];
  TDereferenceWrapper<FAudioChunkCache,TLess<void>_> local_res20;
  TReversePredicate<TDereferenceWrapper<FAudioChunkCache,TLess<void>_>_> local_188;
  TReversePredicate<TDereferenceWrapper<FAudioChunkCache,TLess<void>_>_> local_180;
  undefined8 local_178 [44];
  
  local_res18[0] = param_3;
  local_res20.Predicate = param_4.Predicate;
  if (param_2 < 0) {
    bVar21 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar21) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  local_180.Predicate = &local_res20;
  local_188.Predicate = &local_res20;
  local_res10[0] = param_3;
  if ((param_2 < 0) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("Num >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                          ,0x97,L"Algo::HeapifyInternal called with negative count"), bVar21)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar22 = (param_2 + -2) / 2;
  HeapSiftDown<FAudioChunkCache,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<FAudioChunkCache,TLess<void>_>_>_>
            (param_1,iVar22,param_2,local_res10,&local_188);
  while (iVar22 != 0) {
    iVar22 = iVar22 + -1;
    HeapSiftDown<FAudioChunkCache,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<FAudioChunkCache,TLess<void>_>_>_>
              (param_1,iVar22,param_2,local_res10,&local_188);
  }
  iVar22 = param_2 + -1;
  if (0 < iVar22) {
    pFVar28 = param_1 + iVar22;
    do {
      lVar27 = 2;
      pFVar20 = param_1;
      puVar19 = local_178;
      do {
        puVar25 = puVar19;
        pFVar23 = pFVar20;
        pFVar2 = (pFVar23->CachePool).AllocatorInstance.Data;
        uVar3 = *(undefined8 *)&(pFVar23->CachePool).ArrayNum;
        pFVar4 = pFVar23->MostRecentElement;
        pFVar20 = (FAudioChunkCache *)
                  ((pFVar23->CacheMutationCriticalSection).Value.CriticalSection.Opaque3 + 2);
        *puVar25 = *(undefined8 *)pFVar23;
        puVar25[1] = pFVar2;
        pFVar5 = pFVar23->LeastRecentElement;
        uVar6 = *(undefined8 *)&pFVar23->ChunksInUse;
        puVar25[2] = uVar3;
        puVar25[3] = pFVar4;
        pTVar7 = (pFVar23->MemoryCounterBytes).Obj.Ptr;
        uVar8 = pFVar23->MemoryLimitBytes;
        puVar25[4] = pFVar5;
        puVar25[5] = uVar6;
        pTVar9 = (pFVar23->ForceInlineMemoryCounterBytes).Obj.Ptr;
        pTVar10 = (pFVar23->FeatureMemoryCounterBytes).Obj.Ptr;
        puVar25[6] = pTVar7;
        puVar25[7] = uVar8;
        uVar3 = *(undefined8 *)&pFVar23->NumberOfLoadsInFlight;
        uVar8 = pFVar23->TimeOfBeginPlayCycles;
        puVar25[8] = pTVar9;
        puVar25[9] = pTVar10;
        pvVar11 = (pFVar23->CacheMutationCriticalSection).Value.CriticalSection.Opaque1[0];
        uVar6 = *(undefined8 *)(pFVar23->CacheMutationCriticalSection).Value.CriticalSection.Opaque2
        ;
        puVar25[10] = uVar3;
        puVar25[0xb] = uVar8;
        pvVar12 = (pFVar23->CacheMutationCriticalSection).Value.CriticalSection.Opaque3[0];
        pvVar13 = (pFVar23->CacheMutationCriticalSection).Value.CriticalSection.Opaque3[1];
        puVar25[0xc] = pvVar11;
        puVar25[0xd] = uVar6;
        puVar25[0xe] = pvVar12;
        puVar25[0xf] = pvVar13;
        lVar27 = lVar27 + -1;
        puVar19 = puVar25 + 0x10;
      } while (lVar27 != 0);
      uVar3 = *(undefined8 *)&pFVar23->CacheLookupIdMap;
      lVar27 = 2;
      uVar6 = *(undefined8 *)&(pFVar23->CacheLookupIdMap).field_0x8;
      uVar14 = *(undefined8 *)&(pFVar23->CacheLookupIdMap).field_0x10;
      puVar25[0x10] = *(void **)pFVar20;
      puVar25[0x11] = uVar3;
      uVar3 = *(undefined8 *)&(pFVar23->CacheLookupIdMap).field_0x18;
      uVar15 = *(undefined8 *)&(pFVar23->CacheLookupIdMap).field_0x20;
      puVar25[0x12] = uVar6;
      puVar25[0x13] = uVar14;
      uVar6 = *(undefined8 *)&(pFVar23->CacheLookupIdMap).field_0x28;
      uVar14 = *(undefined8 *)&(pFVar23->CacheLookupIdMap).field_0x30;
      puVar25[0x14] = uVar3;
      puVar25[0x15] = uVar15;
      uVar3 = *(undefined8 *)&(pFVar23->CacheLookupIdMap).field_0x38;
      uVar15 = *(undefined8 *)&(pFVar23->CacheLookupIdMap).field_0x40;
      puVar25[0x16] = uVar6;
      puVar25[0x17] = uVar14;
      uVar6 = *(undefined8 *)&(pFVar23->CacheLookupIdMap).field_0x48;
      uVar14 = *(undefined8 *)&pFVar23->SoundWaveTracker;
      puVar25[0x18] = uVar3;
      puVar25[0x19] = uVar15;
      puVar25[0x1a] = uVar6;
      puVar25[0x1b] = uVar14;
      pFVar20 = param_1;
      pFVar23 = pFVar28;
      do {
        pFVar26 = pFVar23;
        pFVar24 = pFVar20;
        pFVar20 = (FAudioChunkCache *)
                  ((pFVar24->CacheMutationCriticalSection).Value.CriticalSection.Opaque3 + 2);
        FVar16.Counter = (pFVar26->CacheOverflowCount).Counter;
        pFVar2 = (pFVar26->CachePool).AllocatorInstance.Data;
        pFVar23 = (FAudioChunkCache *)
                  ((pFVar26->CacheMutationCriticalSection).Value.CriticalSection.Opaque3 + 2);
        pFVar24->MaxChunkSize = pFVar26->MaxChunkSize;
        pFVar24->CacheOverflowCount = (FThreadSafeCounter)FVar16.Counter;
        (pFVar24->CachePool).AllocatorInstance.Data = pFVar2;
        iVar17 = (pFVar26->CachePool).ArrayMax;
        pFVar4 = pFVar26->MostRecentElement;
        (pFVar24->CachePool).ArrayNum = (pFVar26->CachePool).ArrayNum;
        (pFVar24->CachePool).ArrayMax = iVar17;
        pFVar24->MostRecentElement = pFVar4;
        iVar17 = pFVar26->ChunksInUse;
        uVar18 = *(undefined4 *)&pFVar26->field_0x2c;
        pFVar24->LeastRecentElement = pFVar26->LeastRecentElement;
        pFVar24->ChunksInUse = iVar17;
        *(undefined4 *)&pFVar24->field_0x2c = uVar18;
        uVar8 = pFVar26->MemoryLimitBytes;
        (pFVar24->MemoryCounterBytes).Obj.Ptr = (pFVar26->MemoryCounterBytes).Obj.Ptr;
        pFVar24->MemoryLimitBytes = uVar8;
        pTVar7 = (pFVar26->FeatureMemoryCounterBytes).Obj.Ptr;
        (pFVar24->ForceInlineMemoryCounterBytes).Obj.Ptr =
             (pFVar26->ForceInlineMemoryCounterBytes).Obj.Ptr;
        (pFVar24->FeatureMemoryCounterBytes).Obj.Ptr = pTVar7;
        uVar18 = *(undefined4 *)&pFVar26->field_0x54;
        uVar8 = pFVar26->TimeOfBeginPlayCycles;
        pFVar24->NumberOfLoadsInFlight =
             (FThreadSafeCounter)(pFVar26->NumberOfLoadsInFlight).Counter;
        *(undefined4 *)&pFVar24->field_0x54 = uVar18;
        pFVar24->TimeOfBeginPlayCycles = uVar8;
        uVar3 = *(undefined8 *)(pFVar26->CacheMutationCriticalSection).Value.CriticalSection.Opaque2
        ;
        (pFVar24->CacheMutationCriticalSection).Value.CriticalSection.Opaque1[0] =
             (pFVar26->CacheMutationCriticalSection).Value.CriticalSection.Opaque1[0];
        *(undefined8 *)(pFVar24->CacheMutationCriticalSection).Value.CriticalSection.Opaque2 = uVar3
        ;
        pvVar11 = (pFVar26->CacheMutationCriticalSection).Value.CriticalSection.Opaque3[1];
        (pFVar24->CacheMutationCriticalSection).Value.CriticalSection.Opaque3[0] =
             (pFVar26->CacheMutationCriticalSection).Value.CriticalSection.Opaque3[0];
        (pFVar24->CacheMutationCriticalSection).Value.CriticalSection.Opaque3[1] = pvVar11;
        lVar27 = lVar27 + -1;
      } while (lVar27 != 0);
      FVar16.Counter = (pFVar23->CacheOverflowCount).Counter;
      uVar3 = *(undefined8 *)&pFVar26->CacheLookupIdMap;
      lVar27 = 2;
      pFVar20->MaxChunkSize = pFVar23->MaxChunkSize;
      pFVar20->CacheOverflowCount = (FThreadSafeCounter)FVar16.Counter;
      *(undefined8 *)&pFVar24->CacheLookupIdMap = uVar3;
      uVar3 = *(undefined8 *)&(pFVar26->CacheLookupIdMap).field_0x10;
      *(undefined8 *)&(pFVar24->CacheLookupIdMap).field_0x8 =
           *(undefined8 *)&(pFVar26->CacheLookupIdMap).field_0x8;
      *(undefined8 *)&(pFVar24->CacheLookupIdMap).field_0x10 = uVar3;
      uVar3 = *(undefined8 *)&(pFVar26->CacheLookupIdMap).field_0x20;
      *(undefined8 *)&(pFVar24->CacheLookupIdMap).field_0x18 =
           *(undefined8 *)&(pFVar26->CacheLookupIdMap).field_0x18;
      *(undefined8 *)&(pFVar24->CacheLookupIdMap).field_0x20 = uVar3;
      uVar3 = *(undefined8 *)&(pFVar26->CacheLookupIdMap).field_0x30;
      *(undefined8 *)&(pFVar24->CacheLookupIdMap).field_0x28 =
           *(undefined8 *)&(pFVar26->CacheLookupIdMap).field_0x28;
      *(undefined8 *)&(pFVar24->CacheLookupIdMap).field_0x30 = uVar3;
      uVar3 = *(undefined8 *)&(pFVar26->CacheLookupIdMap).field_0x40;
      *(undefined8 *)&(pFVar24->CacheLookupIdMap).field_0x38 =
           *(undefined8 *)&(pFVar26->CacheLookupIdMap).field_0x38;
      *(undefined8 *)&(pFVar24->CacheLookupIdMap).field_0x40 = uVar3;
      uVar3 = *(undefined8 *)&pFVar26->SoundWaveTracker;
      *(undefined8 *)&(pFVar24->CacheLookupIdMap).field_0x48 =
           *(undefined8 *)&(pFVar26->CacheLookupIdMap).field_0x48;
      *(undefined8 *)&pFVar24->SoundWaveTracker = uVar3;
      puVar19 = local_178;
      pFVar20 = pFVar28;
      do {
        pFVar23 = pFVar20;
        puVar25 = puVar19;
        pFVar20 = (FAudioChunkCache *)
                  ((pFVar23->CacheMutationCriticalSection).Value.CriticalSection.Opaque3 + 2);
        uVar3 = *puVar25;
        pFVar2 = (FScriptContainerElement *)puVar25[1];
        uVar6 = puVar25[2];
        pFVar4 = (FCacheElement *)puVar25[3];
        pFVar23->MaxChunkSize = (int)uVar3;
        pFVar23->CacheOverflowCount = (FThreadSafeCounter)(int)((ulonglong)uVar3 >> 0x20);
        (pFVar23->CachePool).AllocatorInstance.Data = pFVar2;
        pFVar5 = (FCacheElement *)puVar25[4];
        uVar3 = puVar25[5];
        (pFVar23->CachePool).ArrayNum = (int)uVar6;
        (pFVar23->CachePool).ArrayMax = (int)((ulonglong)uVar6 >> 0x20);
        pFVar23->MostRecentElement = pFVar4;
        pTVar7 = (TAtomic<unsigned___int64> *)puVar25[6];
        uVar8 = puVar25[7];
        pFVar23->LeastRecentElement = pFVar5;
        *(undefined8 *)&pFVar23->ChunksInUse = uVar3;
        pTVar9 = (TAtomic<unsigned___int64> *)puVar25[8];
        pTVar10 = (TAtomic<unsigned___int64> *)puVar25[9];
        (pFVar23->MemoryCounterBytes).Obj.Ptr = pTVar7;
        pFVar23->MemoryLimitBytes = uVar8;
        uVar3 = puVar25[10];
        uVar8 = puVar25[0xb];
        (pFVar23->ForceInlineMemoryCounterBytes).Obj.Ptr = pTVar9;
        (pFVar23->FeatureMemoryCounterBytes).Obj.Ptr = pTVar10;
        pvVar11 = (void *)puVar25[0xc];
        uVar6 = puVar25[0xd];
        *(undefined8 *)&pFVar23->NumberOfLoadsInFlight = uVar3;
        pFVar23->TimeOfBeginPlayCycles = uVar8;
        pvVar12 = (void *)puVar25[0xe];
        pvVar13 = (void *)puVar25[0xf];
        (pFVar23->CacheMutationCriticalSection).Value.CriticalSection.Opaque1[0] = pvVar11;
        *(undefined8 *)(pFVar23->CacheMutationCriticalSection).Value.CriticalSection.Opaque2 = uVar6
        ;
        (pFVar23->CacheMutationCriticalSection).Value.CriticalSection.Opaque3[0] = pvVar12;
        (pFVar23->CacheMutationCriticalSection).Value.CriticalSection.Opaque3[1] = pvVar13;
        lVar27 = lVar27 + -1;
        puVar19 = puVar25 + 0x10;
      } while (lVar27 != 0);
      uVar3 = puVar25[0x11];
      uVar6 = puVar25[0x12];
      uVar14 = puVar25[0x13];
      *(void **)pFVar20 = (void *)puVar25[0x10];
      *(undefined8 *)&pFVar23->CacheLookupIdMap = uVar3;
      uVar3 = puVar25[0x14];
      uVar15 = puVar25[0x15];
      *(undefined8 *)&(pFVar23->CacheLookupIdMap).field_0x8 = uVar6;
      *(undefined8 *)&(pFVar23->CacheLookupIdMap).field_0x10 = uVar14;
      uVar6 = puVar25[0x16];
      uVar14 = puVar25[0x17];
      *(undefined8 *)&(pFVar23->CacheLookupIdMap).field_0x18 = uVar3;
      *(undefined8 *)&(pFVar23->CacheLookupIdMap).field_0x20 = uVar15;
      uVar3 = puVar25[0x18];
      uVar15 = puVar25[0x19];
      *(undefined8 *)&(pFVar23->CacheLookupIdMap).field_0x28 = uVar6;
      *(undefined8 *)&(pFVar23->CacheLookupIdMap).field_0x30 = uVar14;
      uVar6 = puVar25[0x1a];
      uVar14 = puVar25[0x1b];
      *(undefined8 *)&(pFVar23->CacheLookupIdMap).field_0x38 = uVar3;
      *(undefined8 *)&(pFVar23->CacheLookupIdMap).field_0x40 = uVar15;
      *(undefined8 *)&(pFVar23->CacheLookupIdMap).field_0x48 = uVar6;
      *(undefined8 *)&pFVar23->SoundWaveTracker = uVar14;
      HeapSiftDown<FAudioChunkCache,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<FAudioChunkCache,TLess<void>_>_>_>
                (param_1,0,iVar22,local_res18,&local_180);
      iVar22 = iVar22 + -1;
      pFVar28 = pFVar28 + -1;
    } while (0 < iVar22);
  }
  return;
}

// HeapifyInternal<FBatchedElements::FBatchedSprite,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<FBatchedElements::FBatchedSprite,`FBatchedElements::Draw'::__l125::FCompareSprite>_>_> @ 14767e1b0

void __cdecl
AlgoImpl::
HeapifyInternal<FBatchedElements::FBatchedSprite,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<FBatchedElements::FBatchedSprite,_FBatchedElements::Draw_::__l125::FCompareSprite>_>_>
          (FBatchedSprite *param_1,int param_2,FIdentityFunctor param_3,
          TReversePredicate<TDereferenceWrapper<FBatchedElements::FBatchedSprite,_public:_bool___cdecl_FBatchedElements::Draw(FRHICommandList_&,FMeshPassProcessorRenderState_const_&,ERHIFeatureLevel::Type,FSceneView_const_&,bool,float,EBlendModeFilter::Type,unsigned_int)const_::_125_::FCompareSprite>_>
          param_4)

{
  byte bVar1;
  byte bVar2;
  code *pcVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  FTexture *pFVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  FColor FVar15;
  float fVar16;
  undefined7 uVar17;
  float fVar18;
  float fVar19;
  FColor FVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  uchar uVar26;
  undefined7 uVar27;
  bool bVar28;
  int iVar29;
  byte bVar30;
  int iVar31;
  FBatchedSprite *pFVar32;
  int iVar33;
  int iVar34;
  
  if (param_2 < 0) {
    bVar28 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar28) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar29 = (param_2 + -2) / 2;
  iVar34 = iVar29 * 2;
  iVar4 = iVar34;
  iVar33 = iVar29;
  do {
    while (param_2 <= iVar34 + 1) {
LAB_14767e395:
      if (iVar33 == 0) {
        return;
      }
      iVar29 = iVar33 + -1;
      iVar34 = iVar4 + -2;
      iVar4 = iVar34;
      iVar33 = iVar29;
    }
    iVar31 = iVar34;
    if (iVar34 + 2 < param_2) {
      bVar1 = param_1[(longlong)iVar34 + 2].BlendMode;
      bVar2 = param_1[(longlong)iVar34 + 1].BlendMode;
      iVar31 = iVar34 + 1;
      if (bVar1 == bVar2) {
        bVar28 = param_1[(longlong)iVar34 + 2].Texture < param_1[(longlong)iVar34 + 1].Texture;
      }
      else {
        bVar30 = (byte)(param_4.Predicate)->Predicate->ValidBlendFilter;
        bVar28 = (bVar30 & bVar1) != 0;
        if (bVar28 == ((bVar30 & bVar2) != 0)) {
          if (bVar1 < bVar2) {
            iVar31 = iVar34;
          }
          goto LAB_14767e2a4;
        }
      }
      if (bVar28) {
        iVar31 = iVar34;
      }
    }
LAB_14767e2a4:
    pFVar32 = param_1 + iVar29;
    bVar1 = pFVar32->BlendMode;
    bVar2 = param_1[(longlong)iVar31 + 1].BlendMode;
    if (bVar1 == bVar2) {
      bVar28 = pFVar32->Texture < param_1[(longlong)iVar31 + 1].Texture;
    }
    else {
      bVar30 = (byte)(param_4.Predicate)->Predicate->ValidBlendFilter;
      bVar28 = (bVar30 & bVar1) != 0;
      if (bVar28 == ((bVar30 & bVar2) != 0)) {
        bVar28 = bVar1 < bVar2;
      }
    }
    if (!bVar28) goto LAB_14767e395;
    dVar5 = param_1[(longlong)iVar31 + 1].Position.field0_0x0._s_0.Y;
    iVar29 = iVar31 + 1;
    dVar6 = (pFVar32->Position).field0_0x0._s_0.X;
    dVar7 = (pFVar32->Position).field0_0x0._s_0.Y;
    iVar34 = iVar29 * 2;
    dVar8 = (pFVar32->Position).field0_0x0._s_0.Z;
    fVar18 = pFVar32->SizeX;
    fVar19 = pFVar32->SizeY;
    uVar26 = pFVar32->BlendMode;
    uVar27 = *(undefined7 *)&pFVar32->field_0x51;
    pFVar9 = pFVar32->Texture;
    uVar10 = *(undefined8 *)&(pFVar32->Color).field0_0x0;
    uVar11 = *(undefined8 *)((longlong)&(pFVar32->Color).field0_0x0 + 8);
    FVar20.field0_0x0 = (pFVar32->HitProxyColor).field0_0x0;
    fVar21 = pFVar32->U;
    fVar22 = pFVar32->UL;
    fVar23 = pFVar32->V;
    fVar24 = pFVar32->VL;
    fVar25 = pFVar32->OpacityMaskRefVal;
    (pFVar32->Position).field0_0x0._s_0.X = param_1[(longlong)iVar31 + 1].Position.field0_0x0._s_0.X
    ;
    (pFVar32->Position).field0_0x0._s_0.Y = dVar5;
    fVar13 = param_1[(longlong)iVar31 + 1].SizeX;
    fVar14 = param_1[(longlong)iVar31 + 1].SizeY;
    (pFVar32->Position).field0_0x0._s_0.Z = param_1[(longlong)iVar31 + 1].Position.field0_0x0._s_0.Z
    ;
    pFVar32->SizeX = fVar13;
    pFVar32->SizeY = fVar14;
    uVar12 = *(undefined8 *)&param_1[(longlong)iVar31 + 1].Color.field0_0x0;
    pFVar32->Texture = param_1[(longlong)iVar31 + 1].Texture;
    *(undefined8 *)&(pFVar32->Color).field0_0x0 = uVar12;
    FVar15.field0_0x0 = param_1[(longlong)iVar31 + 1].HitProxyColor.field0_0x0;
    fVar13 = param_1[(longlong)iVar31 + 1].U;
    *(undefined8 *)((longlong)&(pFVar32->Color).field0_0x0 + 8) =
         *(undefined8 *)((longlong)&param_1[(longlong)iVar31 + 1].Color.field0_0x0 + 8);
    pFVar32->HitProxyColor = (FColor)FVar15.field0_0x0;
    pFVar32->U = fVar13;
    fVar13 = param_1[(longlong)iVar31 + 1].V;
    fVar14 = param_1[(longlong)iVar31 + 1].VL;
    fVar16 = param_1[(longlong)iVar31 + 1].OpacityMaskRefVal;
    pFVar32->UL = param_1[(longlong)iVar31 + 1].UL;
    pFVar32->V = fVar13;
    pFVar32->VL = fVar14;
    pFVar32->OpacityMaskRefVal = fVar16;
    uVar17 = *(undefined7 *)&param_1[(longlong)iVar31 + 1].field_0x51;
    pFVar32->BlendMode = param_1[(longlong)iVar31 + 1].BlendMode;
    *(undefined7 *)&pFVar32->field_0x51 = uVar17;
    param_1[(longlong)iVar31 + 1].Position.field0_0x0._s_0.X = dVar6;
    param_1[(longlong)iVar31 + 1].Position.field0_0x0._s_0.Y = dVar7;
    param_1[(longlong)iVar31 + 1].Position.field0_0x0._s_0.Z = dVar8;
    param_1[(longlong)iVar31 + 1].SizeX = fVar18;
    param_1[(longlong)iVar31 + 1].SizeY = fVar19;
    param_1[(longlong)iVar31 + 1].Texture = pFVar9;
    *(undefined8 *)&param_1[(longlong)iVar31 + 1].Color.field0_0x0 = uVar10;
    *(undefined8 *)((longlong)&param_1[(longlong)iVar31 + 1].Color.field0_0x0 + 8) = uVar11;
    param_1[(longlong)iVar31 + 1].HitProxyColor = (FColor)FVar20.field0_0x0;
    param_1[(longlong)iVar31 + 1].U = fVar21;
    param_1[(longlong)iVar31 + 1].UL = fVar22;
    param_1[(longlong)iVar31 + 1].V = fVar23;
    param_1[(longlong)iVar31 + 1].VL = fVar24;
    param_1[(longlong)iVar31 + 1].OpacityMaskRefVal = fVar25;
    param_1[(longlong)iVar31 + 1].BlendMode = uVar26;
    *(undefined7 *)&param_1[(longlong)iVar31 + 1].field_0x51 = uVar27;
  } while( true );
}

// InternalConstructor<AAudioVolume> @ 14767e410

void __cdecl InternalConstructor<AAudioVolume>(FObjectInitializer *param_1)

{
  byte *pbVar1;
  AVolume *this;
  
  this = (AVolume *)param_1->Obj;
  if (this != (AVolume *)0x0) {
    AVolume::AVolume(this,param_1);
    *(undefined ***)this = &___7AAudioVolume__6B_;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    this[1].field_0x28 = 0;
    *(undefined8 *)&this[1].field_0x50 = 0;
    *(undefined8 *)&this[1].field_0x58 = 0;
    *(undefined8 *)&this[1].field_0x60 = 0;
    *(undefined8 *)&this[1].field_0x68 = 0;
    this[1].field_0x8 = 1;
    *(undefined4 *)&this[1].field_0x20 = 0x3f000000;
    *(undefined4 *)&this[1].field_0x24 = 0x40000000;
    *(undefined4 *)&this[1].field_0x2c = 0x3f800000;
    *(undefined4 *)&this[1].field_0x30 = 0x3f000000;
    *(undefined4 *)&this[1].field_0x34 = 0x469c4000;
    *(undefined4 *)&this[1].field_0x38 = 0x3f000000;
    *(undefined4 *)&this[1].field_0x3c = 0x3f800000;
    *(undefined4 *)&this[1].field_0x40 = 0x3f000000;
    *(undefined4 *)&this[1].field_0x44 = 0x469c4000;
    *(undefined4 *)&this[1].field_0x48 = 0x3f000000;
    (**(code **)(**(longlong **)&this->field_0x2d8 + 0x788))
              (*(longlong **)&this->field_0x2d8,UCollisionProfile::NoCollision_ProfileName,1);
    pbVar1 = (byte *)(*(longlong *)&this->field_0x2d8 + 0x27b);
    *pbVar1 = *pbVar1 | 4;
    *(uint *)&this->field_0x2cc = *(uint *)&this->field_0x2cc | 1;
    *(uint *)&this[1].field_0x4 = *(uint *)&this[1].field_0x4 | 1;
    *(undefined4 *)&this->field_0x2c4 = 0xffffff00;
  }
  return;
}

// InternalConstructor<ABlockingVolume> @ 14767e530

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<ABlockingVolume>(FObjectInitializer *param_1)

{
  AVolume *this;
  
  this = (AVolume *)param_1->Obj;
  if (this != (AVolume *)0x0) {
    AVolume::AVolume(this,param_1);
    *(undefined ***)this = &___7ABlockingVolume__6B_;
    UActorComponent::SetCanEverAffectNavigation(*(UActorComponent **)&this->field_0x2d8,true);
                    /* WARNING: Could not recover jumptable at 0x00014767e57a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)&this->field_0x2d8 + 0x788))
              (*(longlong **)&this->field_0x2d8,InvisibleWall_NAME,1);
    return;
  }
  return;
}

// InternalConstructor<ABrush> @ 14767e590

void __cdecl InternalConstructor<ABrush>(FObjectInitializer *param_1)

{
  if ((ABrush *)param_1->Obj != (ABrush *)0x0) {
    ABrush::ABrush((ABrush *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<ABrushShape> @ 14767e5b0

void __cdecl InternalConstructor<ABrushShape>(FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  ABrush *this;
  UBrushComponent *pUVar2;
  
  this = (ABrush *)param_1->Obj;
  if (this != (ABrush *)0x0) {
    ABrush::ABrush(this,param_1);
    pUVar2 = (this->BrushComponent).field0_0x0.DebugPtr;
    this->_padding_ = (longlong)&___7ABrushShape__6B_;
    (**(code **)(*(longlong *)pUVar2 + 0x788))(pUVar2,UCollisionProfile::NoCollision_ProfileName,1);
    puVar1 = &((this->BrushComponent).field0_0x0.DebugPtr)->field_0x281;
    *puVar1 = *puVar1 | 4;
    puVar1 = &((this->BrushComponent).field0_0x0.DebugPtr)->field_0x281;
    *puVar1 = *puVar1 & 0xf7;
  }
  return;
}

// InternalConstructor<ACameraActor> @ 14767e620

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<ACameraActor>(FObjectInitializer *param_1)

{
  byte *pbVar1;
  AActor *this;
  FName FVar2;
  FName *pFVar3;
  UClass *pUVar4;
  UObject *pUVar5;
  FName local_res8;
  
  this = (AActor *)param_1->Obj;
  if (this != (AActor *)0x0) {
    AActor::AActor(this,param_1);
    this->_padding_ = (longlong)&___7ACameraActor__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    FPostProcessSettings::FPostProcessSettings
              ((FPostProcessSettings *)&this[1].PrimaryActorTick._padding_);
    pFVar3 = FName::FName(&local_res8,L"SceneComponent");
    FVar2 = *pFVar3;
    pUVar4 = Z_Construct_UClass_USceneComponent_NoRegister();
    pUVar5 = UObject::CreateDefaultSubobject((UObject *)this,FVar2,pUVar4,pUVar4,true,false);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar5);
    }
    this[1]._padding_ = (longlong)pUVar5;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar5);
    }
    (this->RootComponent).field0_0x0 = (TObjectPtr<USceneComponent>_u_0)this[1]._padding_;
    pFVar3 = FName::FName(&local_res8,L"CameraComponent");
    FVar2 = *pFVar3;
    pUVar4 = UCameraComponent::StaticClass();
    pUVar5 = UObject::CreateDefaultSubobject((UObject *)this,FVar2,pUVar4,pUVar4,true,false);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar5);
    }
    this[1]._padding_ = (longlong)pUVar5;
    *(undefined4 *)&pUVar5[0xe].field_0x20 = 0x42b40000;
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    pbVar1 = (byte *)(this[1]._padding_ + 0x279);
    *pbVar1 = *pbVar1 | 1;
    *(undefined4 *)(this[1]._padding_ + 0x274) = 0x3fe38e3b;
    *(undefined4 *)(this[1]._padding_ + 0x300) = 0x3f800000;
    USceneComponent::SetupAttachment
              ((USceneComponent *)this[1]._padding_,(USceneComponent *)this[1]._padding_,(FName)0x0)
    ;
    *(uint *)&this[1]._padding_ = (uint)this[1]._padding_ | 1;
    *(undefined4 *)&this[1]._padding_ = 0x42b40000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x3fe38e3b;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x3f800000;
  }
  return;
}

// InternalConstructor<ACameraBlockingVolume> @ 14767e7d0

void __cdecl InternalConstructor<ACameraBlockingVolume>(FObjectInitializer *param_1)

{
  AVolume *this;
  
  this = (AVolume *)param_1->Obj;
  if (this != (AVolume *)0x0) {
    AVolume::AVolume(this,param_1);
    *(undefined ***)this = &___7ACameraBlockingVolume__6B_;
                    /* WARNING: Could not recover jumptable at 0x00014767e80d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)&this->field_0x2d8 + 0x9f0))(*(longlong **)&this->field_0x2d8,4,2);
    return;
  }
  return;
}

// InternalConstructor<UActorSoundParameterInterface> @ 14767e820

void __cdecl InternalConstructor<UActorSoundParameterInterface>(FObjectInitializer *param_1)

{
  UInterface *this;
  
  this = (UInterface *)param_1->Obj;
  if (this != (UInterface *)0x0) {
    UInterface::UInterface(this,param_1);
    *(undefined ***)this = &___7UActorSoundParameterInterface__6B_;
  }
  return;
}

// InternalConstructor<UAudioParameterConversionStatics> @ 14767e850

void __cdecl InternalConstructor<UAudioParameterConversionStatics>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UAudioParameterConversionStatics__6B_;
  }
  return;
}

// InternalConstructor<UAudioWidgetSubsystem> @ 14767e880

void __cdecl InternalConstructor<UAudioWidgetSubsystem>(FObjectInitializer *param_1)

{
  UEngineSubsystem *this;
  
  this = (UEngineSubsystem *)param_1->Obj;
  if (this != (UEngineSubsystem *)0x0) {
    UEngineSubsystem::UEngineSubsystem(this);
    *(undefined ***)this = &___7UAudioWidgetSubsystem__6B_;
  }
  return;
}

// InternalConstructor<UBlueprint> @ 14767e8b0

void __cdecl InternalConstructor<UBlueprint>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    this[1].field_0x10 = 1;
    *(undefined8 *)(this + 1) = 0;
    *(undefined ***)this = &UBlueprint::_vftable__for__UBlueprintCore__;
    *(undefined ***)(this + 2) = &UBlueprint::_vftable__for__IBlueprintPropertyGuidProvider__;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x14 = 0;
    *(undefined8 *)&this[1].field_0x1c = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
    *(undefined8 *)&this[2].field_0x20 = 0;
    *(undefined8 *)(this + 3) = 0;
    *(undefined8 *)&this[3].field_0x8 = 0;
    *(undefined8 *)&this[3].field_0x10 = 0;
    *(undefined8 *)&this[3].field_0x18 = 0;
    *(undefined8 *)&this[3].field_0x20 = 0;
    *(undefined8 *)(this + 4) = 0;
  }
  return;
}

// InternalConstructor<UBlueprintFunctionLibrary> @ 14767e940

void __cdecl InternalConstructor<UBlueprintFunctionLibrary>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UBlueprintFunctionLibrary__6B_;
  }
  return;
}

// InternalConstructor<UBlueprintGeneratedClass> @ 14767e970

void __cdecl InternalConstructor<UBlueprintGeneratedClass>(FObjectInitializer *param_1)

{
  byte *pbVar1;
  UClass *this;
  
  this = (UClass *)param_1->Obj;
  if (this != (UClass *)0x0) {
    UClass::UClass(this,param_1);
    this->_padding_ = (longlong)&UBlueprintGeneratedClass::_vftable__for__UClass__;
    this[1]._padding_ = 0;
    this[1]._padding_ =
         (longlong)&UBlueprintGeneratedClass::_vftable__for__IBlueprintPropertyGuidProvider__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].ClassConstructor = (_func___cdecl_void_FObjectInitializer_ptr *)0x0;
    *(undefined4 *)&this[1].ClassVTableHelperCtorCaller = 0;
    *(undefined4 *)((longlong)&this[1].ClassVTableHelperCtorCaller + 4) = 0x80;
    *(undefined4 *)&this[1].CppClassStaticFunctions.AddReferencedObjects = 0xffffffff;
    *(undefined4 *)((longlong)&this[1].CppClassStaticFunctions.AddReferencedObjects + 4) = 0;
    this[1].bCooked = false;
    this[1].bLayoutChanging = false;
    *(undefined2 *)&this[1].field_0xd2 = 0;
    this[1].ClassFlags = CLASS_None;
    *(undefined4 *)&this[1].ClassCastFlags = CASTCLASS_None;
    this[1].ClassWithin.field0_0x0.DebugPtr = (UClass *)0x0;
    this[1].ClassConfigName.ComparisonIndex = 0;
    this[1].ClassConfigName.Number = 0;
    this[1].NetFields.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[1].NetFields.ArrayNum = 0;
    this[1].NetFields.ArrayMax = 0x80;
    *(undefined4 *)&this[1].ClassDefaultObject.field0_0x0 = 0xffffffff;
    *(undefined4 *)((longlong)&this[1].ClassDefaultObject.field0_0x0 + 4) = 0;
    this[1].SparseClassDataStruct.field0_0x0.DebugPtr = (UScriptStruct *)0x0;
    *(undefined4 *)&this[1].bNeedsDynamicSubobjectInstancing = 0;
    *(undefined8 *)&this[1].FuncMap = 0;
    *(undefined8 *)&this[1].FuncMap.field_0x8 = 0;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this[1].FuncMap.field_0x10,4000);
    pbVar1 = (byte *)((longlong)&this[1]._padding_ + 4);
    *pbVar1 = *pbVar1 & 0xf8;
    *(undefined4 *)&this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<UBlueprintInstancedStructLibrary> @ 14767eae0

void __cdecl InternalConstructor<UBlueprintInstancedStructLibrary>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UBlueprintInstancedStructLibrary__6B_;
  }
  return;
}

// InternalConstructor<UBlueprintMapLibrary> @ 14767eb10

void __cdecl InternalConstructor<UBlueprintMapLibrary>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UBlueprintMapLibrary__6B_;
  }
  return;
}

// InternalConstructor<UBlueprintSetLibrary> @ 14767eb40

void __cdecl InternalConstructor<UBlueprintSetLibrary>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UBlueprintSetLibrary__6B_;
  }
  return;
}

// InternalConstructor<UBookMark> @ 14767eb70

void __cdecl InternalConstructor<UBookMark>(FObjectInitializer *param_1)

{
  UBookmarkBase *this;
  
  this = (UBookmarkBase *)param_1->Obj;
  if (this != (UBookmarkBase *)0x0) {
    UBookmarkBase::UBookmarkBase(this,param_1);
    *(undefined ***)this = &___7UBookMark__6B_;
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined8 *)&this[2].field_0x10 = 0;
  }
  return;
}

// InternalConstructor<UBrushBuilder> @ 14767ebb0

void __cdecl InternalConstructor<UBrushBuilder>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UBrushBuilder__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined8 *)&this[2].field_0x10 = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
    *(undefined8 *)&this[2].field_0x20 = 0;
    FString::operator=((FString *)(this + 1),L"BBGeneric");
    FString::operator=((FString *)&this[1].field_0x10,L"BrushBuilderName_Generic");
    *(uint *)&this[1].field_0x20 = *(uint *)&this[1].field_0x20 | 1;
  }
  return;
}

// InternalConstructor<UCameraComponent> @ 14767ec40

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<UCameraComponent>(FObjectInitializer *param_1)

{
  byte *pbVar1;
  byte bVar2;
  USceneComponent *this;
  float fVar3;
  float fVar4;
  float fVar5;
  
  this = (USceneComponent *)param_1->Obj;
  if (this != (USceneComponent *)0x0) {
    USceneComponent::USceneComponent(this,param_1);
    this->_padding_ = (longlong)&UCameraComponent::_vftable__for__UObject__;
    *(undefined1 *)&this[1]._padding_ = 1;
    this->_padding_ = (longlong)&UCameraComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ = (longlong)&UCameraComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    fVar3 = GlobalVectorConstants::Float0001.m128_f32[1];
    fVar4 = GlobalVectorConstants::Float0001.m128_f32[2];
    fVar5 = GlobalVectorConstants::Float0001.m128_f32[3];
    this[1]._padding_ = (longlong)(double)GlobalVectorConstants::Float0001.m128_f32[0];
    this[1]._padding_ = (longlong)(double)fVar3;
    this[1]._padding_ = (longlong)(double)fVar4;
    this[1]._padding_ = (longlong)(double)fVar5;
    fVar3 = GlobalVectorConstants::FloatZero.m128_f32[1];
    fVar4 = GlobalVectorConstants::FloatZero.m128_f32[2];
    fVar5 = GlobalVectorConstants::FloatZero.m128_f32[3];
    this[1]._padding_ = (longlong)(double)GlobalVectorConstants::FloatZero.m128_f32[0];
    this[1]._padding_ = (longlong)(double)fVar3;
    this[1]._padding_ = (longlong)(double)fVar4;
    this[1]._padding_ = (longlong)(double)fVar5;
    fVar3 = GlobalVectorConstants::Float1110.m128_f32[1];
    fVar4 = GlobalVectorConstants::Float1110.m128_f32[2];
    fVar5 = GlobalVectorConstants::Float1110.m128_f32[3];
    this[1]._padding_ = (longlong)(double)GlobalVectorConstants::Float1110.m128_f32[0];
    this[1]._padding_ = (longlong)(double)fVar3;
    this[1]._padding_ = (longlong)(double)fVar4;
    this[1]._padding_ = (longlong)(double)fVar5;
    this[1]._padding_ = 0;
    this[1].CachedLevelCollection = (FLevelCollection *)0x0;
    this[1].PhysicsVolume.WeakPtr = (FWeakObjectPtr)0x0;
    this[1].AttachParent.field0_0x0.DebugPtr = (USceneComponent *)0x0;
    FPostProcessSettings::FPostProcessSettings
              ((FPostProcessSettings *)&this[1].NetOldAttachSocketName);
    bVar2 = *(byte *)((longlong)&this[1]._padding_ + 2);
    pbVar1 = (byte *)((longlong)&this[1]._padding_ + 1);
    *pbVar1 = *pbVar1 & 0xfc;
    pbVar1 = (byte *)((longlong)&this[1]._padding_ + 1);
    *pbVar1 = *pbVar1 | 4;
    pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
    *pbVar1 = *pbVar1 | 8;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0;
    *(byte *)((longlong)&this[1]._padding_ + 2) = bVar2 & 0xf1 | 1;
    *(undefined4 *)&this[1]._padding_ = 0x42b40000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x42b40000;
    *(undefined4 *)&this[1]._padding_ = 0x3f800000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x3fe38e3b;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x44c00000;
    *(undefined1 *)&this[1]._padding_ = 1;
    *(undefined2 *)&this[1]._padding_ = 0x101;
    *(undefined4 *)&this[1]._padding_ = 0xc4400000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x4a000000;
    *(undefined4 *)&this[1]._padding_ = 0x3f800000;
  }
  return;
}

// InternalConstructor<UCameraLensEffectInterface> @ 14767edc0

void __cdecl InternalConstructor<UCameraLensEffectInterface>(FObjectInitializer *param_1)

{
  UInterface *this;
  
  this = (UInterface *)param_1->Obj;
  if (this != (UInterface *)0x0) {
    UInterface::UInterface(this,param_1);
    *(undefined ***)this = &___7UCameraLensEffectInterface__6B_;
  }
  return;
}

// InternalConstructor<UCameraLensEffectInterfaceClassSupportLibrary> @ 14767edf0

void __cdecl
InternalConstructor<UCameraLensEffectInterfaceClassSupportLibrary>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UCameraLensEffectInterfaceClassSupportLibrary__6B_;
  }
  return;
}

// InternalConstructor<UCameraModifier> @ 14767ee20

void __cdecl InternalConstructor<UCameraModifier>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    this[1].field_0x4 = 0x7f;
    *(undefined ***)this = &___7UCameraModifier__6B_;
    *(undefined8 *)&this[1].field_0x8 = 0;
  }
  return;
}

// InternalConstructor<UCameraModifier_CameraShake> @ 14767ee60

void __cdecl InternalConstructor<UCameraModifier_CameraShake>(FObjectInitializer *param_1)

{
  pmf_cd9e60c5 this;
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  
  this = (pmf_cd9e60c5)param_1->Obj;
  if (this != (pmf_cd9e60c5)0x0) {
    UObject::UObject((UObject *)this,param_1);
    *(undefined1 *)((longlong)this + 0x2c) = 0x7f;
    *(undefined8 *)((longlong)this + 0x30) = 0;
    *(undefined8 *)((longlong)this + 0x48) = 0;
    *(undefined8 *)((longlong)this + 0x50) = 0;
    *(undefined8 *)((longlong)this + 0x58) = 0;
    *(undefined8 *)((longlong)this + 0x60) = 0;
    *(undefined8 *)((longlong)this + 0x78) = 0;
    *(undefined ***)this = &___7UCameraModifier_CameraShake__6B_;
    *(undefined4 *)((longlong)this + 0x80) = 0;
    *(undefined4 *)((longlong)this + 0x84) = 0x80;
    *(undefined4 *)((longlong)this + 0x88) = 0xffffffff;
    *(undefined4 *)((longlong)this + 0x8c) = 0;
    *(undefined8 *)((longlong)this + 0x98) = 0;
    *(undefined4 *)((longlong)this + 0xa0) = 0;
    *(undefined8 *)((longlong)this + 0xb0) = 0;
    *(undefined8 *)((longlong)this + 0xb8) = 0;
    *(undefined1 *)((longlong)this + 0xc0) = 0;
    *(undefined4 *)((longlong)this + 0xa8) = 0x3f000000;
    this_00 = FCoreUObjectDelegates::GetPreGarbageCollectDelegate();
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UCameraModifier_CameraShake>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               this_00,(UCameraModifier_CameraShake *)&stack0x00000008,this);
  }
  return;
}

// InternalConstructor<UCameraProxyMeshComponent> @ 14767ef20

void __cdecl InternalConstructor<UCameraProxyMeshComponent>(FObjectInitializer *param_1)

{
  UStaticMeshComponent *this;
  
  this = (UStaticMeshComponent *)param_1->Obj;
  if (this != (UStaticMeshComponent *)0x0) {
    UStaticMeshComponent::UStaticMeshComponent(this,param_1);
    this->_padding_ = (longlong)&UCameraProxyMeshComponent::_vftable__for__UObject__;
    this->_padding_ =
         (longlong)&UCameraProxyMeshComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)&UCameraProxyMeshComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    this->_padding_ = (longlong)&UCameraProxyMeshComponent::_vftable__for__INavRelevantInterface__;
    this->_padding_ =
         (longlong)&UCameraProxyMeshComponent::_vftable__for__IInterface_AsyncCompilation__;
    this->_padding_ = (longlong)&UCameraProxyMeshComponent::_vftable__for__IPhysicsComponent__;
  }
  return;
}

// InternalConstructor<UDEPRECATED_Breakpoint> @ 14767ef90

void __cdecl InternalConstructor<UDEPRECATED_Breakpoint>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UDEPRECATED_Breakpoint__6B_;
  }
  return;
}

// InternalConstructor<USoundParameterControllerInterface> @ 14767efc0

void __cdecl InternalConstructor<USoundParameterControllerInterface>(FObjectInitializer *param_1)

{
  UAudioParameterControllerInterface *this;
  
  this = (UAudioParameterControllerInterface *)param_1->Obj;
  if (this != (UAudioParameterControllerInterface *)0x0) {
    UAudioParameterControllerInterface::UAudioParameterControllerInterface(this,param_1);
    *(undefined ***)this = &___7USoundParameterControllerInterface__6B_;
  }
  return;
}

// InternalGetDefaultObject<TResourceArray<FSimpleElementVertex,0>_> @ 14767eff0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TResourceArray<FSimpleElementVertex,0> * __cdecl
InternalGetDefaultObject<TResourceArray<FSimpleElementVertex,0>_>(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_TResourceArray<FSimpleElementVertex,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<FSimpleElementVertex,0>_>(void)'
      ::__l3::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_TResourceArray<FSimpleElementVertex,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<FSimpleElementVertex,0>_>(void)'
                         ::__l3::_thread_safe_static_guard_0__);
    if (`class_TResourceArray<FSimpleElementVertex,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<FSimpleElementVertex,0>_>(void)'
        ::__l3::_thread_safe_static_guard_0__ == -1) {
      DAT_1551f3130 = 0;
      _DAT_1551f3120 = 0;
      _DAT_1551f3128 = 0;
      _Default = &___7__TResourceArray_UFSimpleElementVertex___0A___6B_;
      atexit(`InternalGetDefaultObject<TResourceArray<FSimpleElementVertex,0>_>'::__l3::
             _dynamic_atexit_destructor_for__Default__);
      _Init_thread_footer(&`class_TResourceArray<FSimpleElementVertex,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<FSimpleElementVertex,0>_>(void)'
                           ::__l3::_thread_safe_static_guard_0__);
      return (TResourceArray<FSimpleElementVertex,0> *)
             &`class_TResourceArray<FSimpleElementVertex,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<FSimpleElementVertex,0>_>(void)'
              ::__l3::Default;
    }
  }
  return (TResourceArray<FSimpleElementVertex,0> *)
         &`class_TResourceArray<FSimpleElementVertex,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<FSimpleElementVertex,0>_>(void)'
          ::__l3::Default;
}

// InternalVTableHelperCtorCaller<AAudioVolume> @ 14767f090

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<AAudioVolume>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  AVolume *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = AAudioVolume::GetPrivateStaticClass();
  this = (AVolume *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (AVolume *)0x0) {
    AVolume::AVolume(this,param_1);
    *(undefined ***)this = &___7AAudioVolume__6B_;
    this[1].field_0x8 = 1;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined4 *)&this[1].field_0x20 = 0x3f000000;
    *(undefined4 *)&this[1].field_0x24 = 0x40000000;
    this[1].field_0x28 = 0;
    *(undefined4 *)&this[1].field_0x2c = 0x3f800000;
    *(undefined4 *)&this[1].field_0x30 = 0x3f000000;
    *(undefined4 *)&this[1].field_0x34 = 0x469c4000;
    *(undefined4 *)&this[1].field_0x38 = 0x3f000000;
    *(undefined4 *)&this[1].field_0x3c = 0x3f800000;
    *(undefined4 *)&this[1].field_0x40 = 0x3f000000;
    *(undefined4 *)&this[1].field_0x44 = 0x469c4000;
    *(undefined4 *)&this[1].field_0x48 = 0x3f000000;
    *(undefined8 *)&this[1].field_0x50 = 0;
    *(undefined8 *)&this[1].field_0x58 = 0;
    *(undefined8 *)&this[1].field_0x60 = 0;
    *(undefined8 *)&this[1].field_0x68 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ABlockingVolume> @ 14767f1e0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<ABlockingVolume>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  AVolume *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ABlockingVolume::GetPrivateStaticClass();
  this = (AVolume *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (AVolume *)0x0) {
    AVolume::AVolume(this,param_1);
    *(undefined ***)this = &___7ABlockingVolume__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ABrush> @ 14767f290

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

UObject * __cdecl InternalVTableHelperCtorCaller<ABrush>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  AActor *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ABrush::GetPrivateStaticClass();
  this = (AActor *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (AActor *)0x0) {
    AActor::AActor(this,param_1);
    this->_padding_ = (longlong)&___7ABrush__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].PrimaryActorTick._padding_ = 0;
    this[1].PrimaryActorTick._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ABrushShape> @ 14767f360

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

UObject * __cdecl InternalVTableHelperCtorCaller<ABrushShape>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  AActor *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ABrushShape::GetPrivateStaticClass();
  this = (AActor *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (AActor *)0x0) {
    AActor::AActor(this,param_1);
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7ABrushShape__6B_;
    this[1]._padding_ = 0;
    this[1].PrimaryActorTick._padding_ = 0;
    this[1].PrimaryActorTick._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ACameraActor> @ 14767f430

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

UObject * __cdecl InternalVTableHelperCtorCaller<ACameraActor>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  AActor *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ACameraActor::GetPrivateStaticClass();
  this = (AActor *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (AActor *)0x0) {
    AActor::AActor(this,param_1);
    this->_padding_ = (longlong)&___7ACameraActor__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    FPostProcessSettings::FPostProcessSettings
              ((FPostProcessSettings *)&this[1].PrimaryActorTick._padding_);
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ACameraBlockingVolume> @ 14767f500

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<ACameraBlockingVolume>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  AVolume *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ACameraBlockingVolume::GetPrivateStaticClass();
  this = (AVolume *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (AVolume *)0x0) {
    AVolume::AVolume(this,param_1);
    *(undefined ***)this = &___7ACameraBlockingVolume__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UActorSoundParameterInterface> @ 14767f5b0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UActorSoundParameterInterface>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UActorSoundParameterInterface::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UInterface::UInterface((UInterface *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UActorSoundParameterInterface__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAudioParameterConversionStatics> @ 14767f660

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UAudioParameterConversionStatics>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAudioParameterConversionStatics::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UAudioParameterConversionStatics__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAudioWidgetSubsystem> @ 14767f710

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UAudioWidgetSubsystem>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UEngineSubsystem *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAudioWidgetSubsystem::GetPrivateStaticClass();
  this = (UEngineSubsystem *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UEngineSubsystem *)0x0) {
    UEngineSubsystem::UEngineSubsystem(this,param_1);
    *(undefined ***)this = &___7UAudioWidgetSubsystem__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UBlueprint> @ 14767f7c0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UBlueprint>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UBlueprintCore *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UBlueprint::GetPrivateStaticClass();
  this = (UBlueprintCore *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UBlueprintCore *)0x0) {
    UBlueprintCore::UBlueprintCore(this,param_1);
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&UBlueprint::_vftable__for__UBlueprintCore__;
    this[1]._padding_ = (longlong)&UBlueprint::_vftable__for__IBlueprintPropertyGuidProvider__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].SkeletonGeneratedClass.Class.field0_0x0.DebugPtr = (UClass *)0x0;
    this[1].GeneratedClass.Class.field0_0x0.DebugPtr = (UClass *)0x0;
    this[1].bLegacyNeedToPurgeSkelRefs = false;
    *(undefined3 *)&this[1].field_0x39 = 0;
    this[1].BlueprintGuid.A = 0;
    this[1].BlueprintGuid.B = 0;
    this[1].BlueprintGuid.C = 0;
    *(undefined8 *)&this[1].BlueprintGuid.D = 0;
    this[2]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UBlueprintFunctionLibrary> @ 14767f8b0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UBlueprintFunctionLibrary>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UBlueprintFunctionLibrary::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UBlueprintFunctionLibrary__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UBlueprintGeneratedClass> @ 14767f960

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UBlueprintGeneratedClass>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UBlueprintGeneratedClass::GetPrivateStaticClass();
  pUVar2 = (UClass *)
           StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar2 != (UClass *)0x0) {
    UClass::UClass(pUVar2,param_1);
    pUVar2[1]._padding_ = 0;
    pUVar2->_padding_ = (longlong)&UBlueprintGeneratedClass::_vftable__for__UClass__;
    pUVar2[1]._padding_ = 0;
    pUVar2[1]._padding_ =
         (longlong)&UBlueprintGeneratedClass::_vftable__for__IBlueprintPropertyGuidProvider__;
    pUVar2[1]._padding_ = 0;
    pUVar2[1]._padding_ = 0;
    pUVar2[1]._padding_ = 0;
    pUVar2[1]._padding_ = 0;
    pUVar2[1]._padding_ = 0;
    pUVar2[1]._padding_ = 0;
    pUVar2[1]._padding_ = 0;
    pUVar2[1]._padding_ = 0;
    *(undefined4 *)&pUVar2[1]._padding_ = 0;
    pUVar2[1]._padding_ = 0;
    pUVar2[1]._padding_ = 0;
    pUVar2[1]._padding_ = 0;
    pUVar2[1]._padding_ = 0;
    pUVar2[1]._padding_ = 0;
    pUVar2[1].ClassConstructor = (_func___cdecl_void_FObjectInitializer_ptr *)0x0;
    *(undefined4 *)&pUVar2[1].ClassVTableHelperCtorCaller = 0;
    *(undefined4 *)((longlong)&pUVar2[1].ClassVTableHelperCtorCaller + 4) = 0x80;
    *(undefined4 *)&pUVar2[1].CppClassStaticFunctions.AddReferencedObjects = 0xffffffff;
    *(undefined4 *)((longlong)&pUVar2[1].CppClassStaticFunctions.AddReferencedObjects + 4) = 0;
    pUVar2[1].bCooked = false;
    pUVar2[1].bLayoutChanging = false;
    *(undefined2 *)&pUVar2[1].field_0xd2 = 0;
    pUVar2[1].ClassFlags = CLASS_None;
    *(undefined4 *)&pUVar2[1].ClassCastFlags = CASTCLASS_None;
    pUVar2[1].ClassWithin.field0_0x0.DebugPtr = (UClass *)0x0;
    pUVar2[1].ClassConfigName.ComparisonIndex = 0;
    pUVar2[1].ClassConfigName.Number = 0;
    pUVar2[1].NetFields.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pUVar2[1].NetFields.ArrayNum = 0;
    pUVar2[1].NetFields.ArrayMax = 0x80;
    *(undefined4 *)&pUVar2[1].ClassDefaultObject.field0_0x0 = 0xffffffff;
    *(undefined4 *)((longlong)&pUVar2[1].ClassDefaultObject.field0_0x0 + 4) = 0;
    pUVar2[1].SparseClassDataStruct.field0_0x0.DebugPtr = (UScriptStruct *)0x0;
    *(undefined4 *)&pUVar2[1].bNeedsDynamicSubobjectInstancing = 0;
    *(undefined8 *)&pUVar2[1].FuncMap = 0;
    *(undefined8 *)&pUVar2[1].FuncMap.field_0x8 = 0;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&pUVar2[1].FuncMap.field_0x10,4000);
    return (UObject *)pUVar2;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UBlueprintInstancedStructLibrary> @ 14767fb30

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UBlueprintInstancedStructLibrary>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UBlueprintInstancedStructLibrary::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UBlueprintInstancedStructLibrary__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UBlueprintMapLibrary> @ 14767fbe0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UBlueprintMapLibrary>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UBlueprintMapLibrary::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UBlueprintMapLibrary__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UBlueprintSetLibrary> @ 14767fc90

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UBlueprintSetLibrary>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UBlueprintSetLibrary::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UBlueprintSetLibrary__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UBookMark> @ 14767fd40

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UBookMark>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UBookMark::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBookmarkBase::UBookmarkBase((UBookmarkBase *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UBookMark__6B_;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    *(undefined8 *)&pUVar1[2].field_0x10 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UBrushBuilder> @ 14767fe00

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UBrushBuilder>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UBrushBuilder::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UBrushBuilder__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    *(undefined8 *)&pUVar1[2].field_0x10 = 0;
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    *(undefined8 *)&pUVar1[2].field_0x20 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UCameraComponent> @ 14767fed0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UCameraComponent>(FVTableHelper *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  USceneComponent *this;
  
  pUVar4 = GetTransientPackageAsObject();
  pUVar5 = UCameraComponent::GetPrivateStaticClass();
  this = (USceneComponent *)
         StaticAllocateObject
                   (pUVar5,pUVar4,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (USceneComponent *)0x0) {
    USceneComponent::USceneComponent(this,param_1);
    this->_padding_ = (longlong)&UCameraComponent::_vftable__for__UObject__;
    *(undefined1 *)&this[1]._padding_ = 1;
    this->_padding_ = (longlong)&UCameraComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ = (longlong)&UCameraComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
    fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
    this[1]._padding_ = (longlong)(double)GlobalVectorConstants::Float0001.m128_f32[0];
    this[1]._padding_ = (longlong)(double)fVar1;
    this[1]._padding_ = (longlong)(double)fVar2;
    this[1]._padding_ = (longlong)(double)fVar3;
    fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
    fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
    fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
    this[1]._padding_ = (longlong)(double)GlobalVectorConstants::FloatZero.m128_f32[0];
    this[1]._padding_ = (longlong)(double)fVar1;
    this[1]._padding_ = (longlong)(double)fVar2;
    this[1]._padding_ = (longlong)(double)fVar3;
    fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
    fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
    this[1]._padding_ = (longlong)(double)GlobalVectorConstants::Float1110.m128_f32[0];
    this[1]._padding_ = (longlong)(double)fVar1;
    this[1]._padding_ = (longlong)(double)fVar2;
    this[1]._padding_ = (longlong)(double)fVar3;
    this[1]._padding_ = 0;
    this[1].CachedLevelCollection = (FLevelCollection *)0x0;
    this[1].PhysicsVolume.WeakPtr = (FWeakObjectPtr)0x0;
    this[1].AttachParent.field0_0x0.DebugPtr = (USceneComponent *)0x0;
    FPostProcessSettings::FPostProcessSettings
              ((FPostProcessSettings *)&this[1].NetOldAttachSocketName);
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UCameraLensEffectInterface> @ 147680030

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UCameraLensEffectInterface>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UCameraLensEffectInterface::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UInterface::UInterface((UInterface *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UCameraLensEffectInterface__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UCameraLensEffectInterfaceClassSupportLibrary> @ 1476800e0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UCameraLensEffectInterfaceClassSupportLibrary>
          (FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UCameraLensEffectInterfaceClassSupportLibrary::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UCameraLensEffectInterfaceClassSupportLibrary__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UCameraModifier> @ 147680190

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UCameraModifier>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UCameraModifier::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UCameraModifier__6B_;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UCameraModifier_CameraShake> @ 147680240

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UCameraModifier_CameraShake>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UCameraModifier_CameraShake::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined ***)pUVar1 = &___7UCameraModifier_CameraShake__6B_;
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
    *(undefined8 *)&pUVar1[4].field_0x10 = 0;
    *(undefined8 *)&pUVar1[4].field_0x18 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UCameraProxyMeshComponent> @ 147680340

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UCameraProxyMeshComponent>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UStaticMeshComponent *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UCameraProxyMeshComponent::GetPrivateStaticClass();
  this = (UStaticMeshComponent *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UStaticMeshComponent *)0x0) {
    UStaticMeshComponent::UStaticMeshComponent(this,param_1);
    this->_padding_ = (longlong)&UCameraProxyMeshComponent::_vftable__for__UObject__;
    this->_padding_ =
         (longlong)&UCameraProxyMeshComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)&UCameraProxyMeshComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    this->_padding_ = (longlong)&UCameraProxyMeshComponent::_vftable__for__INavRelevantInterface__;
    this->_padding_ =
         (longlong)&UCameraProxyMeshComponent::_vftable__for__IInterface_AsyncCompilation__;
    this->_padding_ = (longlong)&UCameraProxyMeshComponent::_vftable__for__IPhysicsComponent__;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UDEPRECATED_Breakpoint> @ 147680430

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UDEPRECATED_Breakpoint>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UDEPRECATED_Breakpoint::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UDEPRECATED_Breakpoint__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<USoundParameterControllerInterface> @ 1476804e0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<USoundParameterControllerInterface>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = USoundParameterControllerInterface::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UAudioParameterControllerInterface::UAudioParameterControllerInterface
              ((UAudioParameterControllerInterface *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7USoundParameterControllerInterface__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// IntrinsicAppendHash<FSimpleElementVertex,TMemoryImageAllocator<0>_> @ 147680590

uint __cdecl
Freeze::IntrinsicAppendHash<FSimpleElementVertex,TMemoryImageAllocator<0>_>
          (TArray<FSimpleElementVertex,TMemoryImageAllocator<0>_> *param_1,FTypeLayoutDesc *param_2,
          FPlatformTypeLayoutParameters *param_3,FSHA1 *param_4)

{
  uint uVar1;
  
  uVar1 = AppendHashForNameAndSize(param_2->Name,0x10,param_4);
  return uVar1;
}

// IntrinsicGetTargetAlignment<FSimpleElementVertex,TMemoryImageAllocator<0>_> @ 1476805b0

uint __cdecl
Freeze::IntrinsicGetTargetAlignment<FSimpleElementVertex,TMemoryImageAllocator<0>_>
          (TArray<FSimpleElementVertex,TMemoryImageAllocator<0>_> *param_1,FTypeLayoutDesc *param_2,
          FPlatformTypeLayoutParameters *param_3)

{
  uint uVar1;
  
  uVar1 = param_3->MaxFieldAlignment;
  if (8 < uVar1) {
    uVar1 = 8;
  }
  return uVar1;
}

// IntrinsicToString<FSimpleElementVertex,TMemoryImageAllocator<0>_> @ 1476805d0

void __cdecl
Freeze::IntrinsicToString<FSimpleElementVertex,TMemoryImageAllocator<0>_>
          (TArray<FSimpleElementVertex,TMemoryImageAllocator<0>_> *param_1,FTypeLayoutDesc *param_2,
          FPlatformTypeLayoutParameters *param_3,FMemoryToStringContext *param_4)

{
  return;
}

// IntrinsicUnfrozenCopy<FSimpleElementVertex,TMemoryImageAllocator<0>_> @ 1476805e0

uint __cdecl
Freeze::IntrinsicUnfrozenCopy<FSimpleElementVertex,TMemoryImageAllocator<0>_>
          (FMemoryUnfreezeContent *param_1,
          TArray<FSimpleElementVertex,TMemoryImageAllocator<0>_> *param_2,void *param_3)

{
  *(undefined8 *)param_3 = 0;
  *(undefined8 *)((longlong)param_3 + 8) = 0;
  return 0x10;
}

// IntrinsicWriteMemoryImage<FSimpleElementVertex,TMemoryImageAllocator<0>_> @ 147680600

void __cdecl
Freeze::IntrinsicWriteMemoryImage<FSimpleElementVertex,TMemoryImageAllocator<0>_>
          (FMemoryImageWriter *param_1,
          TArray<FSimpleElementVertex,TMemoryImageAllocator<0>_> *param_2,FTypeLayoutDesc *param_3)

{
  code *pcVar1;
  bool bVar2;
  FPlatformTypeLayoutParameters *pFVar3;
  TMemoryImagePtr<FScriptContainerElement>_u_0 local_18;
  undefined8 local_10;
  
  pFVar3 = FMemoryImageWriter::GetTargetLayoutParams(param_1);
  if ((pFVar3->Flags & 2) != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Writer.Is64BitTarget()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0xe07,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_18.Packed = 0;
  local_10 = 0;
  FMemoryImageWriter::WriteBytes(param_1,&local_18,0x10);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&local_18.Frozen);
  return;
}

// IntroSortInternal<AAudioVolume_*,int,FIdentityFunctor,TDereferenceWrapper<AAudioVolume_*,`AAudioVolume::PostRegisterAllComponents'::__l2::<lambda_1>_>_> @ 147680670

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<AAudioVolume_*,int,FIdentityFunctor,TDereferenceWrapper<AAudioVolume_*,_AAudioVolume::PostRegisterAllComponents_::__l2::<lambda_1>_>_>
          (AAudioVolume **param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<AAudioVolume_*,_public:_virtual_void___cdecl_AAudioVolume::PostRegisterAllComponents(void)_::_2_::<lambda_1>_>
          param_4)

{
  AAudioVolume **ppAVar1;
  int iVar2;
  AAudioVolume **ppAVar3;
  AAudioVolume **ppAVar4;
  AAudioVolume ***pppAVar5;
  AAudioVolume **ppAVar6;
  AAudioVolume **ppAVar7;
  AAudioVolume **ppAVar8;
  AAudioVolume *pAVar9;
  float fVar10;
  undefined1 auStack_368 [48];
  AAudioVolume **local_338;
  AAudioVolume **local_328;
  AAudioVolume **local_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = __security_cookie.value ^ (ulonglong)auStack_368;
    local_320 = param_1 + (longlong)param_2 + -1;
    local_328 = param_1;
    fVar10 = logf((float)param_2 * (float)param_2);
    local_318 = (undefined4)(longlong)fVar10;
    memset(local_310,0,0x2e8);
    pppAVar5 = &local_328;
    do {
      ppAVar7 = pppAVar5[1];
      ppAVar3 = *pppAVar5;
      ppAVar1 = pppAVar5[2];
      iVar2 = (int)((longlong)ppAVar7 - (longlong)ppAVar3 >> 3) + 1;
      local_338._0_4_ = (int)ppAVar1;
      ppAVar8 = ppAVar3;
      if ((int)local_338 != 0) {
LAB_147680720:
        if (8 < iVar2) {
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          ppAVar4 = ppAVar7 + 1;
          pAVar9 = ppAVar8[iVar2 >> 1];
          ppAVar8[iVar2 >> 1] = *ppAVar8;
          *ppAVar8 = pAVar9;
          ppAVar3 = ppAVar8;
LAB_147680750:
          ppAVar3 = ppAVar3 + 1;
          if (ppAVar3 <= ppAVar7) goto code_r0x000147680759;
          goto LAB_147680770;
        }
        if (ppAVar8 < ppAVar7) {
          ppAVar1 = ppAVar8 + 1;
          do {
            ppAVar3 = ppAVar8;
            if (ppAVar1 <= ppAVar7) {
              ppAVar4 = ppAVar1;
              if (0x1f < ((longlong)ppAVar7 + (8 - (longlong)ppAVar1) & 0xfffffffffffffff8U)) {
                do {
                  pAVar9 = *ppAVar3;
                  if ((*ppAVar4)->Priority < (*ppAVar3)->Priority) {
                    ppAVar3 = ppAVar4;
                    pAVar9 = *ppAVar4;
                  }
                  if (ppAVar4[1]->Priority < pAVar9->Priority) {
                    ppAVar3 = ppAVar4 + 1;
                  }
                  pAVar9 = *ppAVar3;
                  if (ppAVar4[2]->Priority < (*ppAVar3)->Priority) {
                    ppAVar3 = ppAVar4 + 2;
                    pAVar9 = ppAVar4[2];
                  }
                  if (ppAVar4[3]->Priority < pAVar9->Priority) {
                    ppAVar3 = ppAVar4 + 3;
                  }
                  ppAVar4 = ppAVar4 + 4;
                } while (ppAVar4 <= ppAVar7 + -3);
              }
              for (; ppAVar4 <= ppAVar7; ppAVar4 = ppAVar4 + 1) {
                if ((*ppAVar4)->Priority < (*ppAVar3)->Priority) {
                  ppAVar3 = ppAVar4;
                }
              }
            }
            pAVar9 = *ppAVar3;
            ppAVar4 = ppAVar7 + -1;
            *ppAVar3 = *ppAVar7;
            *ppAVar7 = pAVar9;
            ppAVar7 = ppAVar4;
          } while (ppAVar8 < ppAVar4);
        }
        goto LAB_147680839;
      }
LAB_147680828:
      local_338 = ppAVar1;
      HeapSortInternal<AAudioVolume_*,int,FIdentityFunctor,TDereferenceWrapper<AAudioVolume_*,_AAudioVolume::PostRegisterAllComponents_::__l2::<lambda_1>_>_>
                (ppAVar3,iVar2,param_3,param_4);
LAB_147680839:
      pppAVar5 = pppAVar5 + -3;
    } while (&local_328 <= pppAVar5);
  }
  return;
code_r0x000147680759:
  if ((*ppAVar8)->Priority <= (*ppAVar3)->Priority) goto LAB_147680750;
LAB_147680770:
  do {
    ppAVar6 = ppAVar4;
    ppAVar4 = ppAVar6 + -1;
    if (ppAVar4 <= ppAVar8) break;
  } while ((*ppAVar4)->Priority <= (*ppAVar8)->Priority);
  if (ppAVar3 <= ppAVar4) {
    pAVar9 = *ppAVar3;
    *ppAVar3 = *ppAVar4;
    *ppAVar4 = pAVar9;
    goto LAB_147680750;
  }
  pAVar9 = *ppAVar8;
  local_338._0_4_ = (int)local_338 + -1;
  *ppAVar8 = *ppAVar4;
  *ppAVar4 = pAVar9;
  if ((longlong)((longlong)ppAVar4 + (-8 - (longlong)ppAVar8) & 0xfffffffffffffff8U) <
      (longlong)((longlong)ppAVar7 - (longlong)ppAVar3 & 0xfffffffffffffff8U)) {
    if (ppAVar3 < ppAVar7) {
      *pppAVar5 = ppAVar3;
      pppAVar5[1] = ppAVar7;
      *(int *)(pppAVar5 + 2) = (int)local_338;
      pppAVar5 = pppAVar5 + 3;
    }
    if (ppAVar4 <= ppAVar8 + 1) goto LAB_147680839;
    ppAVar7 = ppAVar6 + -2;
    ppAVar3 = ppAVar8;
  }
  else {
    if (ppAVar8 + 1 < ppAVar4) {
      *pppAVar5 = ppAVar8;
      pppAVar5[1] = ppAVar6 + -2;
      *(int *)(pppAVar5 + 2) = (int)local_338;
      pppAVar5 = pppAVar5 + 3;
    }
    if (ppAVar7 <= ppAVar3) goto LAB_147680839;
  }
  iVar2 = (int)((longlong)ppAVar7 - (longlong)ppAVar3 >> 3) + 1;
  ppAVar8 = ppAVar3;
  if ((int)local_338 == 0) goto LAB_147680828;
  goto LAB_147680720;
}

// IntroSortInternal<AAudioVolume_*,int,FIdentityFunctor,TDereferenceWrapper<AAudioVolume_*,`AAudioVolume::SetPriority'::__l8::<lambda_1>_>_> @ 147680990

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<AAudioVolume_*,int,FIdentityFunctor,TDereferenceWrapper<AAudioVolume_*,_AAudioVolume::SetPriority_::__l8::<lambda_1>_>_>
          (AAudioVolume **param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<AAudioVolume_*,_public:_void___cdecl_AAudioVolume::SetPriority(float)_::_8_::<lambda_1>_>
          param_4)

{
  AAudioVolume **ppAVar1;
  int iVar2;
  AAudioVolume **ppAVar3;
  AAudioVolume **ppAVar4;
  AAudioVolume ***pppAVar5;
  AAudioVolume **ppAVar6;
  AAudioVolume **ppAVar7;
  AAudioVolume **ppAVar8;
  AAudioVolume *pAVar9;
  float fVar10;
  undefined1 auStack_368 [48];
  AAudioVolume **local_338;
  AAudioVolume **local_328;
  AAudioVolume **local_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = __security_cookie.value ^ (ulonglong)auStack_368;
    local_320 = param_1 + (longlong)param_2 + -1;
    local_328 = param_1;
    fVar10 = logf((float)param_2 * (float)param_2);
    local_318 = (undefined4)(longlong)fVar10;
    memset(local_310,0,0x2e8);
    pppAVar5 = &local_328;
    do {
      ppAVar7 = pppAVar5[1];
      ppAVar3 = *pppAVar5;
      ppAVar1 = pppAVar5[2];
      iVar2 = (int)((longlong)ppAVar7 - (longlong)ppAVar3 >> 3) + 1;
      local_338._0_4_ = (int)ppAVar1;
      ppAVar8 = ppAVar3;
      if ((int)local_338 != 0) {
LAB_147680a40:
        if (8 < iVar2) {
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          ppAVar4 = ppAVar7 + 1;
          pAVar9 = ppAVar8[iVar2 >> 1];
          ppAVar8[iVar2 >> 1] = *ppAVar8;
          *ppAVar8 = pAVar9;
          ppAVar3 = ppAVar8;
LAB_147680a70:
          ppAVar3 = ppAVar3 + 1;
          if (ppAVar3 <= ppAVar7) goto code_r0x000147680a79;
          goto LAB_147680a90;
        }
        if (ppAVar8 < ppAVar7) {
          ppAVar1 = ppAVar8 + 1;
          do {
            ppAVar3 = ppAVar8;
            if (ppAVar1 <= ppAVar7) {
              ppAVar4 = ppAVar1;
              if (0x1f < ((longlong)ppAVar7 + (8 - (longlong)ppAVar1) & 0xfffffffffffffff8U)) {
                do {
                  pAVar9 = *ppAVar3;
                  if ((*ppAVar4)->Priority < (*ppAVar3)->Priority) {
                    ppAVar3 = ppAVar4;
                    pAVar9 = *ppAVar4;
                  }
                  if (ppAVar4[1]->Priority < pAVar9->Priority) {
                    ppAVar3 = ppAVar4 + 1;
                  }
                  pAVar9 = *ppAVar3;
                  if (ppAVar4[2]->Priority < (*ppAVar3)->Priority) {
                    ppAVar3 = ppAVar4 + 2;
                    pAVar9 = ppAVar4[2];
                  }
                  if (ppAVar4[3]->Priority < pAVar9->Priority) {
                    ppAVar3 = ppAVar4 + 3;
                  }
                  ppAVar4 = ppAVar4 + 4;
                } while (ppAVar4 <= ppAVar7 + -3);
              }
              for (; ppAVar4 <= ppAVar7; ppAVar4 = ppAVar4 + 1) {
                if ((*ppAVar4)->Priority < (*ppAVar3)->Priority) {
                  ppAVar3 = ppAVar4;
                }
              }
            }
            pAVar9 = *ppAVar3;
            ppAVar4 = ppAVar7 + -1;
            *ppAVar3 = *ppAVar7;
            *ppAVar7 = pAVar9;
            ppAVar7 = ppAVar4;
          } while (ppAVar8 < ppAVar4);
        }
        goto LAB_147680b59;
      }
LAB_147680b48:
      local_338 = ppAVar1;
      HeapSortInternal<AAudioVolume_*,int,FIdentityFunctor,TDereferenceWrapper<AAudioVolume_*,_AAudioVolume::SetPriority_::__l8::<lambda_1>_>_>
                (ppAVar3,iVar2,param_3,param_4);
LAB_147680b59:
      pppAVar5 = pppAVar5 + -3;
    } while (&local_328 <= pppAVar5);
  }
  return;
code_r0x000147680a79:
  if ((*ppAVar8)->Priority <= (*ppAVar3)->Priority) goto LAB_147680a70;
LAB_147680a90:
  do {
    ppAVar6 = ppAVar4;
    ppAVar4 = ppAVar6 + -1;
    if (ppAVar4 <= ppAVar8) break;
  } while ((*ppAVar4)->Priority <= (*ppAVar8)->Priority);
  if (ppAVar3 <= ppAVar4) {
    pAVar9 = *ppAVar3;
    *ppAVar3 = *ppAVar4;
    *ppAVar4 = pAVar9;
    goto LAB_147680a70;
  }
  pAVar9 = *ppAVar8;
  local_338._0_4_ = (int)local_338 + -1;
  *ppAVar8 = *ppAVar4;
  *ppAVar4 = pAVar9;
  if ((longlong)((longlong)ppAVar4 + (-8 - (longlong)ppAVar8) & 0xfffffffffffffff8U) <
      (longlong)((longlong)ppAVar7 - (longlong)ppAVar3 & 0xfffffffffffffff8U)) {
    if (ppAVar3 < ppAVar7) {
      *pppAVar5 = ppAVar3;
      pppAVar5[1] = ppAVar7;
      *(int *)(pppAVar5 + 2) = (int)local_338;
      pppAVar5 = pppAVar5 + 3;
    }
    if (ppAVar4 <= ppAVar8 + 1) goto LAB_147680b59;
    ppAVar7 = ppAVar6 + -2;
    ppAVar3 = ppAVar8;
  }
  else {
    if (ppAVar8 + 1 < ppAVar4) {
      *pppAVar5 = ppAVar8;
      pppAVar5[1] = ppAVar6 + -2;
      *(int *)(pppAVar5 + 2) = (int)local_338;
      pppAVar5 = pppAVar5 + 3;
    }
    if (ppAVar7 <= ppAVar3) goto LAB_147680b59;
  }
  iVar2 = (int)((longlong)ppAVar7 - (longlong)ppAVar3 >> 3) + 1;
  ppAVar8 = ppAVar3;
  if ((int)local_338 == 0) goto LAB_147680b48;
  goto LAB_147680a40;
}

// IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<152,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<unsigned_int,FAudioVolumeProxy>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<unsigned_int,FAudioVolumeProxy>,TDefaultMapHashableKeyFuncs<unsigned_int,FAudioVolumeProxy,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<unsigned_int,FAudioVolumeProxy,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FAudioVolumeProxy,0>_>::FValueComparisonClass<`FAudioDevice::AddAudioVolumeProxy'::__l2::<lambda_1>_>_>_>_> @ 147680cb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<152,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<unsigned_int,FAudioVolumeProxy>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<unsigned_int,FAudioVolumeProxy>,TDefaultMapHashableKeyFuncs<unsigned_int,FAudioVolumeProxy,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<unsigned_int,FAudioVolumeProxy,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FAudioVolumeProxy,0>_>::FValueComparisonClass<_FAudioDevice::AddAudioVolumeProxy_::__l2::<lambda_1>_>_>_>_>
          (TSparseArrayElementOrFreeListLink<TAlignedBytes<152,8>_> *param_1,int param_2,
          FIdentityFunctor param_3,
          FElementCompareClass<TSet<TTuple<unsigned_int,FAudioVolumeProxy>,TDefaultMapHashableKeyFuncs<unsigned_int,FAudioVolumeProxy,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<unsigned_int,FAudioVolumeProxy,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FAudioVolumeProxy,0>_>::FValueComparisonClass<_public:_void___cdecl_FAudioDevice::AddAudioVolumeProxy(FAudioVolumeProxy_const_&)_::_2_::<lambda_1>_>_>_>
          param_4)

{
  TSparseArrayElementOrFreeListLink<TAlignedBytes<152,8>_> *pTVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<152,8>_>_s_1 TVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  longlong lVar22;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<152,8>_> *pTVar23;
  int iVar24;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<152,8>_> *pTVar25;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<152,8>_> *pTVar26;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<152,8>_> *pTVar27;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<152,8>_> *pTVar28;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<152,8>_> *pTVar29;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<152,8>_> **ppTVar30;
  float fVar31;
  undefined1 auStack_3d8 [48];
  TSparseArrayElementOrFreeListLink<TAlignedBytes<152,8>_> *local_3a8;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<152,8>_> *local_398;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<152,8>_> *local_390;
  undefined4 local_388;
  undefined1 local_380 [744];
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStack_3d8;
  if (1 < param_2) {
    local_390 = param_1 + (longlong)param_2 + -1;
    local_398 = param_1;
    fVar31 = logf((float)param_2 * (float)param_2);
    local_388 = (undefined4)(longlong)fVar31;
    memset(local_380,0,0x2e8);
    ppTVar30 = &local_398;
    do {
      pTVar26 = ppTVar30[1];
      pTVar23 = *ppTVar30;
      pTVar1 = ppTVar30[2];
      local_3a8._0_4_ = (int)pTVar1;
      iVar24 = (int)(((longlong)pTVar26 - (longlong)pTVar23) / 0x98) + 1;
      pTVar29 = pTVar23;
      if ((int)local_3a8 != 0) {
LAB_147680db0:
        if (8 < iVar24) {
          uVar3 = *(undefined8 *)((pTVar29->ElementData).Pad + 8);
          pTVar25 = pTVar26 + 1;
          pTVar23 = pTVar29 + iVar24 / 2;
          TVar4 = pTVar23->_s_1;
          uVar5 = *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 8);
          uVar6 = *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x10);
          uVar7 = *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x18);
          uVar8 = *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x20);
          uVar9 = *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x28);
          uVar10 = *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x30);
          uVar11 = *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x38);
          uVar12 = *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x40);
          uVar13 = *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x48);
          uVar14 = *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x50);
          uVar15 = *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x58);
          uVar16 = *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x60);
          uVar17 = *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x68);
          uVar18 = *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x70);
          uVar19 = *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x78);
          uVar20 = *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x80);
          uVar21 = *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x88);
          uVar2 = *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x90);
          pTVar23->_s_1 = pTVar29->_s_1;
          *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 8) = uVar3;
          uVar3 = *(undefined8 *)((pTVar29->ElementData).Pad + 0x18);
          *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x10) =
               *(undefined8 *)((pTVar29->ElementData).Pad + 0x10);
          *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x18) = uVar3;
          uVar3 = *(undefined8 *)((pTVar29->ElementData).Pad + 0x28);
          *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x20) =
               *(undefined8 *)((pTVar29->ElementData).Pad + 0x20);
          *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x28) = uVar3;
          uVar3 = *(undefined8 *)((pTVar29->ElementData).Pad + 0x38);
          *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x30) =
               *(undefined8 *)((pTVar29->ElementData).Pad + 0x30);
          *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x38) = uVar3;
          uVar3 = *(undefined8 *)((pTVar29->ElementData).Pad + 0x48);
          *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x40) =
               *(undefined8 *)((pTVar29->ElementData).Pad + 0x40);
          *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x48) = uVar3;
          uVar3 = *(undefined8 *)((pTVar29->ElementData).Pad + 0x58);
          *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x50) =
               *(undefined8 *)((pTVar29->ElementData).Pad + 0x50);
          *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x58) = uVar3;
          uVar3 = *(undefined8 *)((pTVar29->ElementData).Pad + 0x68);
          *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x60) =
               *(undefined8 *)((pTVar29->ElementData).Pad + 0x60);
          *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x68) = uVar3;
          uVar3 = *(undefined8 *)((pTVar29->ElementData).Pad + 0x78);
          *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x70) =
               *(undefined8 *)((pTVar29->ElementData).Pad + 0x70);
          *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x78) = uVar3;
          uVar3 = *(undefined8 *)((pTVar29->ElementData).Pad + 0x88);
          *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x80) =
               *(undefined8 *)((pTVar29->ElementData).Pad + 0x80);
          *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x88) = uVar3;
          *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x90) =
               *(undefined8 *)((pTVar29->ElementData).Pad + 0x90);
          pTVar29->_s_1 = TVar4;
          *(undefined8 *)((pTVar29->ElementData).Pad + 8) = uVar5;
          *(undefined8 *)((pTVar29->ElementData).Pad + 0x10) = uVar6;
          *(undefined8 *)((pTVar29->ElementData).Pad + 0x18) = uVar7;
          *(undefined8 *)((pTVar29->ElementData).Pad + 0x20) = uVar8;
          *(undefined8 *)((pTVar29->ElementData).Pad + 0x28) = uVar9;
          *(undefined8 *)((pTVar29->ElementData).Pad + 0x30) = uVar10;
          *(undefined8 *)((pTVar29->ElementData).Pad + 0x38) = uVar11;
          *(undefined8 *)((pTVar29->ElementData).Pad + 0x40) = uVar12;
          *(undefined8 *)((pTVar29->ElementData).Pad + 0x48) = uVar13;
          *(undefined8 *)((pTVar29->ElementData).Pad + 0x50) = uVar14;
          *(undefined8 *)((pTVar29->ElementData).Pad + 0x58) = uVar15;
          *(undefined8 *)((pTVar29->ElementData).Pad + 0x60) = uVar16;
          *(undefined8 *)((pTVar29->ElementData).Pad + 0x68) = uVar17;
          *(undefined8 *)((pTVar29->ElementData).Pad + 0x70) = uVar18;
          *(undefined8 *)((pTVar29->ElementData).Pad + 0x78) = uVar19;
          *(undefined8 *)((pTVar29->ElementData).Pad + 0x80) = uVar20;
          *(undefined8 *)((pTVar29->ElementData).Pad + 0x88) = uVar21;
          *(undefined8 *)((pTVar29->ElementData).Pad + 0x90) = uVar2;
          pTVar23 = pTVar29;
LAB_147680eb0:
          pTVar28 = pTVar23;
          pTVar23 = pTVar28 + 1;
          if (pTVar23 <= pTVar26) goto code_r0x000147680ebc;
          goto LAB_147680ed0;
        }
        if (pTVar29 < pTVar26) {
          pTVar1 = pTVar29 + 1;
          do {
            pTVar23 = pTVar29;
            if (pTVar1 <= pTVar26) {
              pTVar25 = pTVar1;
              if (0x25f < (ulonglong)((longlong)pTVar26 + (0x98 - (longlong)pTVar1))) {
                do {
                  if (*(float *)((pTVar25->ElementData).Pad + 0x10) <
                      *(float *)((pTVar23->ElementData).Pad + 0x10)) {
                    pTVar23 = pTVar25;
                  }
                  if (*(float *)((longlong)pTVar25 + 0xa8) <
                      *(float *)((pTVar23->ElementData).Pad + 0x10)) {
                    pTVar23 = pTVar25 + 1;
                  }
                  if (*(float *)((longlong)pTVar25 + 0x140) <
                      *(float *)((pTVar23->ElementData).Pad + 0x10)) {
                    pTVar23 = pTVar25 + 2;
                  }
                  if (*(float *)((longlong)pTVar25 + 0x1d8) <
                      *(float *)((pTVar23->ElementData).Pad + 0x10)) {
                    pTVar23 = pTVar25 + 3;
                  }
                  pTVar25 = pTVar25 + 4;
                } while (pTVar25 <= pTVar26 + -3);
              }
              for (; pTVar25 <= pTVar26; pTVar25 = pTVar25 + 1) {
                if (*(float *)((pTVar25->ElementData).Pad + 0x10) <
                    *(float *)((pTVar23->ElementData).Pad + 0x10)) {
                  pTVar23 = pTVar25;
                }
              }
            }
            TVar4 = pTVar23->_s_1;
            uVar3 = *(undefined8 *)((pTVar23->ElementData).Pad + 8);
            pTVar25 = pTVar26 + -1;
            uVar2 = *(undefined8 *)((pTVar23->ElementData).Pad + 0x90);
            uVar5 = *(undefined8 *)((pTVar23->ElementData).Pad + 0x10);
            uVar6 = *(undefined8 *)((pTVar23->ElementData).Pad + 0x18);
            uVar7 = *(undefined8 *)((pTVar26->ElementData).Pad + 8);
            uVar8 = *(undefined8 *)((pTVar23->ElementData).Pad + 0x20);
            uVar9 = *(undefined8 *)((pTVar23->ElementData).Pad + 0x28);
            uVar10 = *(undefined8 *)((pTVar23->ElementData).Pad + 0x30);
            uVar11 = *(undefined8 *)((pTVar23->ElementData).Pad + 0x38);
            uVar12 = *(undefined8 *)((pTVar23->ElementData).Pad + 0x40);
            uVar13 = *(undefined8 *)((pTVar23->ElementData).Pad + 0x48);
            uVar14 = *(undefined8 *)((pTVar23->ElementData).Pad + 0x50);
            uVar15 = *(undefined8 *)((pTVar23->ElementData).Pad + 0x58);
            uVar16 = *(undefined8 *)((pTVar23->ElementData).Pad + 0x60);
            uVar17 = *(undefined8 *)((pTVar23->ElementData).Pad + 0x68);
            uVar18 = *(undefined8 *)((pTVar23->ElementData).Pad + 0x70);
            uVar19 = *(undefined8 *)((pTVar23->ElementData).Pad + 0x78);
            uVar20 = *(undefined8 *)((pTVar23->ElementData).Pad + 0x80);
            uVar21 = *(undefined8 *)((pTVar23->ElementData).Pad + 0x88);
            pTVar23->_s_1 = pTVar26->_s_1;
            *(undefined8 *)((pTVar23->ElementData).Pad + 8) = uVar7;
            uVar7 = *(undefined8 *)((pTVar26->ElementData).Pad + 0x18);
            *(undefined8 *)((pTVar23->ElementData).Pad + 0x10) =
                 *(undefined8 *)((pTVar26->ElementData).Pad + 0x10);
            *(undefined8 *)((pTVar23->ElementData).Pad + 0x18) = uVar7;
            uVar7 = *(undefined8 *)((pTVar26->ElementData).Pad + 0x28);
            *(undefined8 *)((pTVar23->ElementData).Pad + 0x20) =
                 *(undefined8 *)((pTVar26->ElementData).Pad + 0x20);
            *(undefined8 *)((pTVar23->ElementData).Pad + 0x28) = uVar7;
            uVar7 = *(undefined8 *)((pTVar26->ElementData).Pad + 0x38);
            *(undefined8 *)((pTVar23->ElementData).Pad + 0x30) =
                 *(undefined8 *)((pTVar26->ElementData).Pad + 0x30);
            *(undefined8 *)((pTVar23->ElementData).Pad + 0x38) = uVar7;
            uVar7 = *(undefined8 *)((pTVar26->ElementData).Pad + 0x48);
            *(undefined8 *)((pTVar23->ElementData).Pad + 0x40) =
                 *(undefined8 *)((pTVar26->ElementData).Pad + 0x40);
            *(undefined8 *)((pTVar23->ElementData).Pad + 0x48) = uVar7;
            uVar7 = *(undefined8 *)((pTVar26->ElementData).Pad + 0x58);
            *(undefined8 *)((pTVar23->ElementData).Pad + 0x50) =
                 *(undefined8 *)((pTVar26->ElementData).Pad + 0x50);
            *(undefined8 *)((pTVar23->ElementData).Pad + 0x58) = uVar7;
            uVar7 = *(undefined8 *)((pTVar26->ElementData).Pad + 0x68);
            *(undefined8 *)((pTVar23->ElementData).Pad + 0x60) =
                 *(undefined8 *)((pTVar26->ElementData).Pad + 0x60);
            *(undefined8 *)((pTVar23->ElementData).Pad + 0x68) = uVar7;
            uVar7 = *(undefined8 *)((pTVar26->ElementData).Pad + 0x78);
            *(undefined8 *)((pTVar23->ElementData).Pad + 0x70) =
                 *(undefined8 *)((pTVar26->ElementData).Pad + 0x70);
            *(undefined8 *)((pTVar23->ElementData).Pad + 0x78) = uVar7;
            uVar7 = *(undefined8 *)((pTVar26->ElementData).Pad + 0x88);
            *(undefined8 *)((pTVar23->ElementData).Pad + 0x80) =
                 *(undefined8 *)((pTVar26->ElementData).Pad + 0x80);
            *(undefined8 *)((pTVar23->ElementData).Pad + 0x88) = uVar7;
            *(undefined8 *)((pTVar23->ElementData).Pad + 0x90) =
                 *(undefined8 *)((pTVar26->ElementData).Pad + 0x90);
            pTVar26->_s_1 = TVar4;
            *(undefined8 *)((pTVar26->ElementData).Pad + 8) = uVar3;
            *(undefined8 *)((pTVar26->ElementData).Pad + 0x10) = uVar5;
            *(undefined8 *)((pTVar26->ElementData).Pad + 0x18) = uVar6;
            *(undefined8 *)((pTVar26->ElementData).Pad + 0x20) = uVar8;
            *(undefined8 *)((pTVar26->ElementData).Pad + 0x28) = uVar9;
            *(undefined8 *)((pTVar26->ElementData).Pad + 0x30) = uVar10;
            *(undefined8 *)((pTVar26->ElementData).Pad + 0x38) = uVar11;
            *(undefined8 *)((pTVar26->ElementData).Pad + 0x40) = uVar12;
            *(undefined8 *)((pTVar26->ElementData).Pad + 0x48) = uVar13;
            *(undefined8 *)((pTVar26->ElementData).Pad + 0x50) = uVar14;
            *(undefined8 *)((pTVar26->ElementData).Pad + 0x58) = uVar15;
            *(undefined8 *)((pTVar26->ElementData).Pad + 0x60) = uVar16;
            *(undefined8 *)((pTVar26->ElementData).Pad + 0x68) = uVar17;
            *(undefined8 *)((pTVar26->ElementData).Pad + 0x70) = uVar18;
            *(undefined8 *)((pTVar26->ElementData).Pad + 0x78) = uVar19;
            *(undefined8 *)((pTVar26->ElementData).Pad + 0x80) = uVar20;
            *(undefined8 *)((pTVar26->ElementData).Pad + 0x88) = uVar21;
            *(undefined8 *)((pTVar26->ElementData).Pad + 0x90) = uVar2;
            pTVar26 = pTVar25;
          } while (pTVar29 < pTVar25);
        }
        goto LAB_14768117e;
      }
LAB_14768116f:
      local_3a8 = pTVar1;
      HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<152,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<unsigned_int,FAudioVolumeProxy>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<unsigned_int,FAudioVolumeProxy>,TDefaultMapHashableKeyFuncs<unsigned_int,FAudioVolumeProxy,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<unsigned_int,FAudioVolumeProxy,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FAudioVolumeProxy,0>_>::FValueComparisonClass<_FAudioDevice::AddAudioVolumeProxy_::__l2::<lambda_1>_>_>_>_>
                (pTVar23,iVar24,param_3,param_4);
LAB_14768117e:
      ppTVar30 = ppTVar30 + -3;
    } while (&local_398 <= ppTVar30);
  }
  return;
code_r0x000147680ebc:
  if (*(float *)((pTVar29->ElementData).Pad + 0x10) <= *(float *)((longlong)pTVar28 + 0xa8))
  goto LAB_147680eb0;
LAB_147680ed0:
  do {
    pTVar27 = pTVar25;
    pTVar25 = pTVar27 + -1;
    if (pTVar25 <= pTVar29) break;
  } while (*(float *)((longlong)pTVar27 + -0x88) <= *(float *)((pTVar29->ElementData).Pad + 0x10));
  uVar2 = *(undefined8 *)((longlong)pTVar27 + -0x90);
  if (pTVar23 <= pTVar25) {
    TVar4 = pTVar23->_s_1;
    uVar5 = *(undefined8 *)((longlong)pTVar28 + 0xa0);
    uVar6 = *(undefined8 *)((longlong)pTVar28 + 0xa8);
    uVar7 = *(undefined8 *)((longlong)pTVar28 + 0xb0);
    uVar8 = *(undefined8 *)((longlong)pTVar28 + 0xb8);
    uVar9 = *(undefined8 *)((longlong)pTVar28 + 0xc0);
    uVar10 = *(undefined8 *)((longlong)pTVar28 + 200);
    uVar11 = *(undefined8 *)((longlong)pTVar28 + 0xd0);
    uVar12 = *(undefined8 *)((longlong)pTVar28 + 0xd8);
    uVar13 = *(undefined8 *)((longlong)pTVar28 + 0xe0);
    uVar14 = *(undefined8 *)((longlong)pTVar28 + 0xe8);
    uVar15 = *(undefined8 *)((longlong)pTVar28 + 0xf0);
    uVar16 = *(undefined8 *)((longlong)pTVar28 + 0xf8);
    uVar17 = *(undefined8 *)((longlong)pTVar28 + 0x100);
    uVar18 = *(undefined8 *)((longlong)pTVar28 + 0x108);
    uVar19 = *(undefined8 *)((longlong)pTVar28 + 0x110);
    uVar20 = *(undefined8 *)((longlong)pTVar28 + 0x118);
    uVar21 = *(undefined8 *)((longlong)pTVar28 + 0x120);
    uVar3 = *(undefined8 *)((longlong)pTVar28 + 0x128);
    pTVar23->_s_1 = pTVar25->_s_1;
    *(undefined8 *)((longlong)pTVar28 + 0xa0) = uVar2;
    uVar2 = *(undefined8 *)((longlong)pTVar27 + -0x80);
    *(undefined8 *)((longlong)pTVar28 + 0xa8) = *(undefined8 *)((longlong)pTVar27 + -0x88);
    *(undefined8 *)((longlong)pTVar28 + 0xb0) = uVar2;
    uVar2 = *(undefined8 *)((longlong)pTVar27 + -0x70);
    *(undefined8 *)((longlong)pTVar28 + 0xb8) = *(undefined8 *)((longlong)pTVar27 + -0x78);
    *(undefined8 *)((longlong)pTVar28 + 0xc0) = uVar2;
    uVar2 = *(undefined8 *)((longlong)pTVar27 + -0x60);
    *(undefined8 *)((longlong)pTVar28 + 200) = *(undefined8 *)((longlong)pTVar27 + -0x68);
    *(undefined8 *)((longlong)pTVar28 + 0xd0) = uVar2;
    uVar2 = *(undefined8 *)((longlong)pTVar27 + -0x50);
    *(undefined8 *)((longlong)pTVar28 + 0xd8) = *(undefined8 *)((longlong)pTVar27 + -0x58);
    *(undefined8 *)((longlong)pTVar28 + 0xe0) = uVar2;
    uVar2 = *(undefined8 *)((longlong)pTVar27 + -0x40);
    *(undefined8 *)((longlong)pTVar28 + 0xe8) = *(undefined8 *)((longlong)pTVar27 + -0x48);
    *(undefined8 *)((longlong)pTVar28 + 0xf0) = uVar2;
    uVar2 = *(undefined8 *)((longlong)pTVar27 + -0x30);
    *(undefined8 *)((longlong)pTVar28 + 0xf8) = *(undefined8 *)((longlong)pTVar27 + -0x38);
    *(undefined8 *)((longlong)pTVar28 + 0x100) = uVar2;
    uVar2 = *(undefined8 *)((longlong)pTVar27 + -0x20);
    *(undefined8 *)((longlong)pTVar28 + 0x108) = *(undefined8 *)((longlong)pTVar27 + -0x28);
    *(undefined8 *)((longlong)pTVar28 + 0x110) = uVar2;
    uVar2 = *(undefined8 *)((longlong)pTVar27 + -0x10);
    *(undefined8 *)((longlong)pTVar28 + 0x118) = *(undefined8 *)((longlong)pTVar27 + -0x18);
    *(undefined8 *)((longlong)pTVar28 + 0x120) = uVar2;
    *(undefined8 *)((longlong)pTVar28 + 0x128) = *(undefined8 *)((longlong)pTVar27 + -8);
    pTVar25->_s_1 = TVar4;
    *(undefined8 *)((longlong)pTVar27 + -0x90) = uVar5;
    *(undefined8 *)((longlong)pTVar27 + -0x88) = uVar6;
    *(undefined8 *)((longlong)pTVar27 + -0x80) = uVar7;
    *(undefined8 *)((longlong)pTVar27 + -0x78) = uVar8;
    *(undefined8 *)((longlong)pTVar27 + -0x70) = uVar9;
    *(undefined8 *)((longlong)pTVar27 + -0x68) = uVar10;
    *(undefined8 *)((longlong)pTVar27 + -0x60) = uVar11;
    *(undefined8 *)((longlong)pTVar27 + -0x58) = uVar12;
    *(undefined8 *)((longlong)pTVar27 + -0x50) = uVar13;
    *(undefined8 *)((longlong)pTVar27 + -0x48) = uVar14;
    *(undefined8 *)((longlong)pTVar27 + -0x40) = uVar15;
    *(undefined8 *)((longlong)pTVar27 + -0x38) = uVar16;
    *(undefined8 *)((longlong)pTVar27 + -0x30) = uVar17;
    *(undefined8 *)((longlong)pTVar27 + -0x28) = uVar18;
    *(undefined8 *)((longlong)pTVar27 + -0x20) = uVar19;
    *(undefined8 *)((longlong)pTVar27 + -0x18) = uVar20;
    *(undefined8 *)((longlong)pTVar27 + -0x10) = uVar21;
    *(undefined8 *)((longlong)pTVar27 + -8) = uVar3;
    goto LAB_147680eb0;
  }
  TVar4 = pTVar29->_s_1;
  uVar5 = *(undefined8 *)((pTVar29->ElementData).Pad + 8);
  uVar6 = *(undefined8 *)((pTVar29->ElementData).Pad + 0x10);
  uVar7 = *(undefined8 *)((pTVar29->ElementData).Pad + 0x18);
  local_3a8._0_4_ = (int)local_3a8 + -1;
  uVar8 = *(undefined8 *)((pTVar29->ElementData).Pad + 0x20);
  uVar9 = *(undefined8 *)((pTVar29->ElementData).Pad + 0x28);
  lVar22 = (longlong)pTVar25 + (-0x98 - (longlong)pTVar29);
  uVar10 = *(undefined8 *)((pTVar29->ElementData).Pad + 0x30);
  uVar11 = *(undefined8 *)((pTVar29->ElementData).Pad + 0x38);
  uVar12 = *(undefined8 *)((pTVar29->ElementData).Pad + 0x40);
  uVar13 = *(undefined8 *)((pTVar29->ElementData).Pad + 0x48);
  uVar14 = *(undefined8 *)((pTVar29->ElementData).Pad + 0x50);
  uVar15 = *(undefined8 *)((pTVar29->ElementData).Pad + 0x58);
  uVar16 = *(undefined8 *)((pTVar29->ElementData).Pad + 0x60);
  uVar17 = *(undefined8 *)((pTVar29->ElementData).Pad + 0x68);
  uVar18 = *(undefined8 *)((pTVar29->ElementData).Pad + 0x70);
  uVar19 = *(undefined8 *)((pTVar29->ElementData).Pad + 0x78);
  uVar20 = *(undefined8 *)((pTVar29->ElementData).Pad + 0x80);
  uVar21 = *(undefined8 *)((pTVar29->ElementData).Pad + 0x88);
  uVar3 = *(undefined8 *)((pTVar29->ElementData).Pad + 0x90);
  pTVar29->_s_1 = pTVar25->_s_1;
  *(undefined8 *)((pTVar29->ElementData).Pad + 8) = uVar2;
  uVar2 = *(undefined8 *)((longlong)pTVar27 + -0x80);
  lVar22 = lVar22 / 0x26 + (lVar22 >> 0x3f);
  *(undefined8 *)((pTVar29->ElementData).Pad + 0x10) = *(undefined8 *)((longlong)pTVar27 + -0x88);
  *(undefined8 *)((pTVar29->ElementData).Pad + 0x18) = uVar2;
  uVar2 = *(undefined8 *)((longlong)pTVar27 + -0x70);
  *(undefined8 *)((pTVar29->ElementData).Pad + 0x20) = *(undefined8 *)((longlong)pTVar27 + -0x78);
  *(undefined8 *)((pTVar29->ElementData).Pad + 0x28) = uVar2;
  uVar2 = *(undefined8 *)((longlong)pTVar27 + -0x60);
  *(undefined8 *)((pTVar29->ElementData).Pad + 0x30) = *(undefined8 *)((longlong)pTVar27 + -0x68);
  *(undefined8 *)((pTVar29->ElementData).Pad + 0x38) = uVar2;
  uVar2 = *(undefined8 *)((longlong)pTVar27 + -0x50);
  *(undefined8 *)((pTVar29->ElementData).Pad + 0x40) = *(undefined8 *)((longlong)pTVar27 + -0x58);
  *(undefined8 *)((pTVar29->ElementData).Pad + 0x48) = uVar2;
  uVar2 = *(undefined8 *)((longlong)pTVar27 + -0x40);
  *(undefined8 *)((pTVar29->ElementData).Pad + 0x50) = *(undefined8 *)((longlong)pTVar27 + -0x48);
  *(undefined8 *)((pTVar29->ElementData).Pad + 0x58) = uVar2;
  uVar2 = *(undefined8 *)((longlong)pTVar27 + -0x30);
  *(undefined8 *)((pTVar29->ElementData).Pad + 0x60) = *(undefined8 *)((longlong)pTVar27 + -0x38);
  *(undefined8 *)((pTVar29->ElementData).Pad + 0x68) = uVar2;
  uVar2 = *(undefined8 *)((longlong)pTVar27 + -0x20);
  *(undefined8 *)((pTVar29->ElementData).Pad + 0x70) = *(undefined8 *)((longlong)pTVar27 + -0x28);
  *(undefined8 *)((pTVar29->ElementData).Pad + 0x78) = uVar2;
  uVar2 = *(undefined8 *)((longlong)pTVar27 + -0x10);
  *(undefined8 *)((pTVar29->ElementData).Pad + 0x80) = *(undefined8 *)((longlong)pTVar27 + -0x18);
  *(undefined8 *)((pTVar29->ElementData).Pad + 0x88) = uVar2;
  *(undefined8 *)((pTVar29->ElementData).Pad + 0x90) = *(undefined8 *)((longlong)pTVar27 + -8);
  pTVar25->_s_1 = TVar4;
  *(undefined8 *)((longlong)pTVar27 + -0x90) = uVar5;
  *(undefined8 *)((longlong)pTVar27 + -0x88) = uVar6;
  *(undefined8 *)((longlong)pTVar27 + -0x80) = uVar7;
  *(undefined8 *)((longlong)pTVar27 + -0x78) = uVar8;
  *(undefined8 *)((longlong)pTVar27 + -0x70) = uVar9;
  *(undefined8 *)((longlong)pTVar27 + -0x68) = uVar10;
  *(undefined8 *)((longlong)pTVar27 + -0x60) = uVar11;
  *(undefined8 *)((longlong)pTVar27 + -0x58) = uVar12;
  *(undefined8 *)((longlong)pTVar27 + -0x50) = uVar13;
  *(undefined8 *)((longlong)pTVar27 + -0x48) = uVar14;
  *(undefined8 *)((longlong)pTVar27 + -0x40) = uVar15;
  *(undefined8 *)((longlong)pTVar27 + -0x38) = uVar16;
  *(undefined8 *)((longlong)pTVar27 + -0x30) = uVar17;
  *(undefined8 *)((longlong)pTVar27 + -0x28) = uVar18;
  *(undefined8 *)((longlong)pTVar27 + -0x20) = uVar19;
  *(undefined8 *)((longlong)pTVar27 + -0x18) = uVar20;
  *(undefined8 *)((longlong)pTVar27 + -0x10) = uVar21;
  *(undefined8 *)((longlong)pTVar27 + -8) = uVar3;
  if ((lVar22 >> 2) - (lVar22 >> 0x3f) < ((longlong)pTVar26 - (longlong)pTVar23) / 0x98) {
    if (pTVar23 < pTVar26) {
      *ppTVar30 = pTVar23;
      ppTVar30[1] = pTVar26;
      *(int *)(ppTVar30 + 2) = (int)local_3a8;
      ppTVar30 = ppTVar30 + 3;
    }
    if (pTVar25 <= pTVar29 + 1) goto LAB_14768117e;
    pTVar26 = pTVar27 + -2;
    pTVar23 = pTVar29;
  }
  else {
    if (pTVar29 + 1 < pTVar25) {
      *ppTVar30 = pTVar29;
      ppTVar30[1] = pTVar27 + -2;
      *(int *)(ppTVar30 + 2) = (int)local_3a8;
      ppTVar30 = ppTVar30 + 3;
    }
    if (pTVar26 <= pTVar23) goto LAB_14768117e;
  }
  iVar24 = (int)(((longlong)pTVar26 - (longlong)pTVar23) / 0x98) + 1;
  pTVar29 = pTVar23;
  if ((int)local_3a8 == 0) goto LAB_14768116f;
  goto LAB_147680db0;
}

// IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<152,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<unsigned_int,FAudioVolumeProxy>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<unsigned_int,FAudioVolumeProxy>,TDefaultMapHashableKeyFuncs<unsigned_int,FAudioVolumeProxy,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<unsigned_int,FAudioVolumeProxy,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FAudioVolumeProxy,0>_>::FValueComparisonClass<`FAudioDevice::UpdateAudioVolumeProxy'::__l15::<lambda_1>_>_>_>_> @ 147681390

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<152,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<unsigned_int,FAudioVolumeProxy>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<unsigned_int,FAudioVolumeProxy>,TDefaultMapHashableKeyFuncs<unsigned_int,FAudioVolumeProxy,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<unsigned_int,FAudioVolumeProxy,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FAudioVolumeProxy,0>_>::FValueComparisonClass<_FAudioDevice::UpdateAudioVolumeProxy_::__l15::<lambda_1>_>_>_>_>
          (TSparseArrayElementOrFreeListLink<TAlignedBytes<152,8>_> *param_1,int param_2,
          FIdentityFunctor param_3,
          FElementCompareClass<TSet<TTuple<unsigned_int,FAudioVolumeProxy>,TDefaultMapHashableKeyFuncs<unsigned_int,FAudioVolumeProxy,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<unsigned_int,FAudioVolumeProxy,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FAudioVolumeProxy,0>_>::FValueComparisonClass<_public:_void___cdecl_FAudioDevice::UpdateAudioVolumeProxy(FAudioVolumeProxy_const_&)_::_15_::<lambda_1>_>_>_>
          param_4)

{
  TSparseArrayElementOrFreeListLink<TAlignedBytes<152,8>_> *pTVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<152,8>_>_s_1 TVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  longlong lVar22;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<152,8>_> *pTVar23;
  int iVar24;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<152,8>_> *pTVar25;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<152,8>_> *pTVar26;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<152,8>_> *pTVar27;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<152,8>_> *pTVar28;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<152,8>_> *pTVar29;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<152,8>_> **ppTVar30;
  float fVar31;
  undefined1 auStack_3d8 [48];
  TSparseArrayElementOrFreeListLink<TAlignedBytes<152,8>_> *local_3a8;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<152,8>_> *local_398;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<152,8>_> *local_390;
  undefined4 local_388;
  undefined1 local_380 [744];
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStack_3d8;
  if (1 < param_2) {
    local_390 = param_1 + (longlong)param_2 + -1;
    local_398 = param_1;
    fVar31 = logf((float)param_2 * (float)param_2);
    local_388 = (undefined4)(longlong)fVar31;
    memset(local_380,0,0x2e8);
    ppTVar30 = &local_398;
    do {
      pTVar26 = ppTVar30[1];
      pTVar23 = *ppTVar30;
      pTVar1 = ppTVar30[2];
      local_3a8._0_4_ = (int)pTVar1;
      iVar24 = (int)(((longlong)pTVar26 - (longlong)pTVar23) / 0x98) + 1;
      pTVar29 = pTVar23;
      if ((int)local_3a8 != 0) {
LAB_147681490:
        if (8 < iVar24) {
          uVar3 = *(undefined8 *)((pTVar29->ElementData).Pad + 8);
          pTVar25 = pTVar26 + 1;
          pTVar23 = pTVar29 + iVar24 / 2;
          TVar4 = pTVar23->_s_1;
          uVar5 = *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 8);
          uVar6 = *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x10);
          uVar7 = *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x18);
          uVar8 = *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x20);
          uVar9 = *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x28);
          uVar10 = *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x30);
          uVar11 = *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x38);
          uVar12 = *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x40);
          uVar13 = *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x48);
          uVar14 = *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x50);
          uVar15 = *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x58);
          uVar16 = *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x60);
          uVar17 = *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x68);
          uVar18 = *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x70);
          uVar19 = *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x78);
          uVar20 = *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x80);
          uVar21 = *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x88);
          uVar2 = *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x90);
          pTVar23->_s_1 = pTVar29->_s_1;
          *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 8) = uVar3;
          uVar3 = *(undefined8 *)((pTVar29->ElementData).Pad + 0x18);
          *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x10) =
               *(undefined8 *)((pTVar29->ElementData).Pad + 0x10);
          *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x18) = uVar3;
          uVar3 = *(undefined8 *)((pTVar29->ElementData).Pad + 0x28);
          *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x20) =
               *(undefined8 *)((pTVar29->ElementData).Pad + 0x20);
          *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x28) = uVar3;
          uVar3 = *(undefined8 *)((pTVar29->ElementData).Pad + 0x38);
          *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x30) =
               *(undefined8 *)((pTVar29->ElementData).Pad + 0x30);
          *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x38) = uVar3;
          uVar3 = *(undefined8 *)((pTVar29->ElementData).Pad + 0x48);
          *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x40) =
               *(undefined8 *)((pTVar29->ElementData).Pad + 0x40);
          *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x48) = uVar3;
          uVar3 = *(undefined8 *)((pTVar29->ElementData).Pad + 0x58);
          *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x50) =
               *(undefined8 *)((pTVar29->ElementData).Pad + 0x50);
          *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x58) = uVar3;
          uVar3 = *(undefined8 *)((pTVar29->ElementData).Pad + 0x68);
          *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x60) =
               *(undefined8 *)((pTVar29->ElementData).Pad + 0x60);
          *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x68) = uVar3;
          uVar3 = *(undefined8 *)((pTVar29->ElementData).Pad + 0x78);
          *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x70) =
               *(undefined8 *)((pTVar29->ElementData).Pad + 0x70);
          *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x78) = uVar3;
          uVar3 = *(undefined8 *)((pTVar29->ElementData).Pad + 0x88);
          *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x80) =
               *(undefined8 *)((pTVar29->ElementData).Pad + 0x80);
          *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x88) = uVar3;
          *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x90) =
               *(undefined8 *)((pTVar29->ElementData).Pad + 0x90);
          pTVar29->_s_1 = TVar4;
          *(undefined8 *)((pTVar29->ElementData).Pad + 8) = uVar5;
          *(undefined8 *)((pTVar29->ElementData).Pad + 0x10) = uVar6;
          *(undefined8 *)((pTVar29->ElementData).Pad + 0x18) = uVar7;
          *(undefined8 *)((pTVar29->ElementData).Pad + 0x20) = uVar8;
          *(undefined8 *)((pTVar29->ElementData).Pad + 0x28) = uVar9;
          *(undefined8 *)((pTVar29->ElementData).Pad + 0x30) = uVar10;
          *(undefined8 *)((pTVar29->ElementData).Pad + 0x38) = uVar11;
          *(undefined8 *)((pTVar29->ElementData).Pad + 0x40) = uVar12;
          *(undefined8 *)((pTVar29->ElementData).Pad + 0x48) = uVar13;
          *(undefined8 *)((pTVar29->ElementData).Pad + 0x50) = uVar14;
          *(undefined8 *)((pTVar29->ElementData).Pad + 0x58) = uVar15;
          *(undefined8 *)((pTVar29->ElementData).Pad + 0x60) = uVar16;
          *(undefined8 *)((pTVar29->ElementData).Pad + 0x68) = uVar17;
          *(undefined8 *)((pTVar29->ElementData).Pad + 0x70) = uVar18;
          *(undefined8 *)((pTVar29->ElementData).Pad + 0x78) = uVar19;
          *(undefined8 *)((pTVar29->ElementData).Pad + 0x80) = uVar20;
          *(undefined8 *)((pTVar29->ElementData).Pad + 0x88) = uVar21;
          *(undefined8 *)((pTVar29->ElementData).Pad + 0x90) = uVar2;
          pTVar23 = pTVar29;
LAB_147681590:
          pTVar28 = pTVar23;
          pTVar23 = pTVar28 + 1;
          if (pTVar23 <= pTVar26) goto code_r0x00014768159c;
          goto LAB_1476815b0;
        }
        if (pTVar29 < pTVar26) {
          pTVar1 = pTVar29 + 1;
          do {
            pTVar23 = pTVar29;
            if (pTVar1 <= pTVar26) {
              pTVar25 = pTVar1;
              if (0x25f < (ulonglong)((longlong)pTVar26 + (0x98 - (longlong)pTVar1))) {
                do {
                  if (*(float *)((pTVar25->ElementData).Pad + 0x10) <
                      *(float *)((pTVar23->ElementData).Pad + 0x10)) {
                    pTVar23 = pTVar25;
                  }
                  if (*(float *)((longlong)pTVar25 + 0xa8) <
                      *(float *)((pTVar23->ElementData).Pad + 0x10)) {
                    pTVar23 = pTVar25 + 1;
                  }
                  if (*(float *)((longlong)pTVar25 + 0x140) <
                      *(float *)((pTVar23->ElementData).Pad + 0x10)) {
                    pTVar23 = pTVar25 + 2;
                  }
                  if (*(float *)((longlong)pTVar25 + 0x1d8) <
                      *(float *)((pTVar23->ElementData).Pad + 0x10)) {
                    pTVar23 = pTVar25 + 3;
                  }
                  pTVar25 = pTVar25 + 4;
                } while (pTVar25 <= pTVar26 + -3);
              }
              for (; pTVar25 <= pTVar26; pTVar25 = pTVar25 + 1) {
                if (*(float *)((pTVar25->ElementData).Pad + 0x10) <
                    *(float *)((pTVar23->ElementData).Pad + 0x10)) {
                  pTVar23 = pTVar25;
                }
              }
            }
            TVar4 = pTVar23->_s_1;
            uVar3 = *(undefined8 *)((pTVar23->ElementData).Pad + 8);
            pTVar25 = pTVar26 + -1;
            uVar2 = *(undefined8 *)((pTVar23->ElementData).Pad + 0x90);
            uVar5 = *(undefined8 *)((pTVar23->ElementData).Pad + 0x10);
            uVar6 = *(undefined8 *)((pTVar23->ElementData).Pad + 0x18);
            uVar7 = *(undefined8 *)((pTVar26->ElementData).Pad + 8);
            uVar8 = *(undefined8 *)((pTVar23->ElementData).Pad + 0x20);
            uVar9 = *(undefined8 *)((pTVar23->ElementData).Pad + 0x28);
            uVar10 = *(undefined8 *)((pTVar23->ElementData).Pad + 0x30);
            uVar11 = *(undefined8 *)((pTVar23->ElementData).Pad + 0x38);
            uVar12 = *(undefined8 *)((pTVar23->ElementData).Pad + 0x40);
            uVar13 = *(undefined8 *)((pTVar23->ElementData).Pad + 0x48);
            uVar14 = *(undefined8 *)((pTVar23->ElementData).Pad + 0x50);
            uVar15 = *(undefined8 *)((pTVar23->ElementData).Pad + 0x58);
            uVar16 = *(undefined8 *)((pTVar23->ElementData).Pad + 0x60);
            uVar17 = *(undefined8 *)((pTVar23->ElementData).Pad + 0x68);
            uVar18 = *(undefined8 *)((pTVar23->ElementData).Pad + 0x70);
            uVar19 = *(undefined8 *)((pTVar23->ElementData).Pad + 0x78);
            uVar20 = *(undefined8 *)((pTVar23->ElementData).Pad + 0x80);
            uVar21 = *(undefined8 *)((pTVar23->ElementData).Pad + 0x88);
            pTVar23->_s_1 = pTVar26->_s_1;
            *(undefined8 *)((pTVar23->ElementData).Pad + 8) = uVar7;
            uVar7 = *(undefined8 *)((pTVar26->ElementData).Pad + 0x18);
            *(undefined8 *)((pTVar23->ElementData).Pad + 0x10) =
                 *(undefined8 *)((pTVar26->ElementData).Pad + 0x10);
            *(undefined8 *)((pTVar23->ElementData).Pad + 0x18) = uVar7;
            uVar7 = *(undefined8 *)((pTVar26->ElementData).Pad + 0x28);
            *(undefined8 *)((pTVar23->ElementData).Pad + 0x20) =
                 *(undefined8 *)((pTVar26->ElementData).Pad + 0x20);
            *(undefined8 *)((pTVar23->ElementData).Pad + 0x28) = uVar7;
            uVar7 = *(undefined8 *)((pTVar26->ElementData).Pad + 0x38);
            *(undefined8 *)((pTVar23->ElementData).Pad + 0x30) =
                 *(undefined8 *)((pTVar26->ElementData).Pad + 0x30);
            *(undefined8 *)((pTVar23->ElementData).Pad + 0x38) = uVar7;
            uVar7 = *(undefined8 *)((pTVar26->ElementData).Pad + 0x48);
            *(undefined8 *)((pTVar23->ElementData).Pad + 0x40) =
                 *(undefined8 *)((pTVar26->ElementData).Pad + 0x40);
            *(undefined8 *)((pTVar23->ElementData).Pad + 0x48) = uVar7;
            uVar7 = *(undefined8 *)((pTVar26->ElementData).Pad + 0x58);
            *(undefined8 *)((pTVar23->ElementData).Pad + 0x50) =
                 *(undefined8 *)((pTVar26->ElementData).Pad + 0x50);
            *(undefined8 *)((pTVar23->ElementData).Pad + 0x58) = uVar7;
            uVar7 = *(undefined8 *)((pTVar26->ElementData).Pad + 0x68);
            *(undefined8 *)((pTVar23->ElementData).Pad + 0x60) =
                 *(undefined8 *)((pTVar26->ElementData).Pad + 0x60);
            *(undefined8 *)((pTVar23->ElementData).Pad + 0x68) = uVar7;
            uVar7 = *(undefined8 *)((pTVar26->ElementData).Pad + 0x78);
            *(undefined8 *)((pTVar23->ElementData).Pad + 0x70) =
                 *(undefined8 *)((pTVar26->ElementData).Pad + 0x70);
            *(undefined8 *)((pTVar23->ElementData).Pad + 0x78) = uVar7;
            uVar7 = *(undefined8 *)((pTVar26->ElementData).Pad + 0x88);
            *(undefined8 *)((pTVar23->ElementData).Pad + 0x80) =
                 *(undefined8 *)((pTVar26->ElementData).Pad + 0x80);
            *(undefined8 *)((pTVar23->ElementData).Pad + 0x88) = uVar7;
            *(undefined8 *)((pTVar23->ElementData).Pad + 0x90) =
                 *(undefined8 *)((pTVar26->ElementData).Pad + 0x90);
            pTVar26->_s_1 = TVar4;
            *(undefined8 *)((pTVar26->ElementData).Pad + 8) = uVar3;
            *(undefined8 *)((pTVar26->ElementData).Pad + 0x10) = uVar5;
            *(undefined8 *)((pTVar26->ElementData).Pad + 0x18) = uVar6;
            *(undefined8 *)((pTVar26->ElementData).Pad + 0x20) = uVar8;
            *(undefined8 *)((pTVar26->ElementData).Pad + 0x28) = uVar9;
            *(undefined8 *)((pTVar26->ElementData).Pad + 0x30) = uVar10;
            *(undefined8 *)((pTVar26->ElementData).Pad + 0x38) = uVar11;
            *(undefined8 *)((pTVar26->ElementData).Pad + 0x40) = uVar12;
            *(undefined8 *)((pTVar26->ElementData).Pad + 0x48) = uVar13;
            *(undefined8 *)((pTVar26->ElementData).Pad + 0x50) = uVar14;
            *(undefined8 *)((pTVar26->ElementData).Pad + 0x58) = uVar15;
            *(undefined8 *)((pTVar26->ElementData).Pad + 0x60) = uVar16;
            *(undefined8 *)((pTVar26->ElementData).Pad + 0x68) = uVar17;
            *(undefined8 *)((pTVar26->ElementData).Pad + 0x70) = uVar18;
            *(undefined8 *)((pTVar26->ElementData).Pad + 0x78) = uVar19;
            *(undefined8 *)((pTVar26->ElementData).Pad + 0x80) = uVar20;
            *(undefined8 *)((pTVar26->ElementData).Pad + 0x88) = uVar21;
            *(undefined8 *)((pTVar26->ElementData).Pad + 0x90) = uVar2;
            pTVar26 = pTVar25;
          } while (pTVar29 < pTVar25);
        }
        goto LAB_14768185e;
      }
LAB_14768184f:
      local_3a8 = pTVar1;
      HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<152,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<unsigned_int,FAudioVolumeProxy>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<unsigned_int,FAudioVolumeProxy>,TDefaultMapHashableKeyFuncs<unsigned_int,FAudioVolumeProxy,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<unsigned_int,FAudioVolumeProxy,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FAudioVolumeProxy,0>_>::FValueComparisonClass<_FAudioDevice::UpdateAudioVolumeProxy_::__l15::<lambda_1>_>_>_>_>
                (pTVar23,iVar24,param_3,param_4);
LAB_14768185e:
      ppTVar30 = ppTVar30 + -3;
    } while (&local_398 <= ppTVar30);
  }
  return;
code_r0x00014768159c:
  if (*(float *)((pTVar29->ElementData).Pad + 0x10) <= *(float *)((longlong)pTVar28 + 0xa8))
  goto LAB_147681590;
LAB_1476815b0:
  do {
    pTVar27 = pTVar25;
    pTVar25 = pTVar27 + -1;
    if (pTVar25 <= pTVar29) break;
  } while (*(float *)((longlong)pTVar27 + -0x88) <= *(float *)((pTVar29->ElementData).Pad + 0x10));
  uVar2 = *(undefined8 *)((longlong)pTVar27 + -0x90);
  if (pTVar23 <= pTVar25) {
    TVar4 = pTVar23->_s_1;
    uVar5 = *(undefined8 *)((longlong)pTVar28 + 0xa0);
    uVar6 = *(undefined8 *)((longlong)pTVar28 + 0xa8);
    uVar7 = *(undefined8 *)((longlong)pTVar28 + 0xb0);
    uVar8 = *(undefined8 *)((longlong)pTVar28 + 0xb8);
    uVar9 = *(undefined8 *)((longlong)pTVar28 + 0xc0);
    uVar10 = *(undefined8 *)((longlong)pTVar28 + 200);
    uVar11 = *(undefined8 *)((longlong)pTVar28 + 0xd0);
    uVar12 = *(undefined8 *)((longlong)pTVar28 + 0xd8);
    uVar13 = *(undefined8 *)((longlong)pTVar28 + 0xe0);
    uVar14 = *(undefined8 *)((longlong)pTVar28 + 0xe8);
    uVar15 = *(undefined8 *)((longlong)pTVar28 + 0xf0);
    uVar16 = *(undefined8 *)((longlong)pTVar28 + 0xf8);
    uVar17 = *(undefined8 *)((longlong)pTVar28 + 0x100);
    uVar18 = *(undefined8 *)((longlong)pTVar28 + 0x108);
    uVar19 = *(undefined8 *)((longlong)pTVar28 + 0x110);
    uVar20 = *(undefined8 *)((longlong)pTVar28 + 0x118);
    uVar21 = *(undefined8 *)((longlong)pTVar28 + 0x120);
    uVar3 = *(undefined8 *)((longlong)pTVar28 + 0x128);
    pTVar23->_s_1 = pTVar25->_s_1;
    *(undefined8 *)((longlong)pTVar28 + 0xa0) = uVar2;
    uVar2 = *(undefined8 *)((longlong)pTVar27 + -0x80);
    *(undefined8 *)((longlong)pTVar28 + 0xa8) = *(undefined8 *)((longlong)pTVar27 + -0x88);
    *(undefined8 *)((longlong)pTVar28 + 0xb0) = uVar2;
    uVar2 = *(undefined8 *)((longlong)pTVar27 + -0x70);
    *(undefined8 *)((longlong)pTVar28 + 0xb8) = *(undefined8 *)((longlong)pTVar27 + -0x78);
    *(undefined8 *)((longlong)pTVar28 + 0xc0) = uVar2;
    uVar2 = *(undefined8 *)((longlong)pTVar27 + -0x60);
    *(undefined8 *)((longlong)pTVar28 + 200) = *(undefined8 *)((longlong)pTVar27 + -0x68);
    *(undefined8 *)((longlong)pTVar28 + 0xd0) = uVar2;
    uVar2 = *(undefined8 *)((longlong)pTVar27 + -0x50);
    *(undefined8 *)((longlong)pTVar28 + 0xd8) = *(undefined8 *)((longlong)pTVar27 + -0x58);
    *(undefined8 *)((longlong)pTVar28 + 0xe0) = uVar2;
    uVar2 = *(undefined8 *)((longlong)pTVar27 + -0x40);
    *(undefined8 *)((longlong)pTVar28 + 0xe8) = *(undefined8 *)((longlong)pTVar27 + -0x48);
    *(undefined8 *)((longlong)pTVar28 + 0xf0) = uVar2;
    uVar2 = *(undefined8 *)((longlong)pTVar27 + -0x30);
    *(undefined8 *)((longlong)pTVar28 + 0xf8) = *(undefined8 *)((longlong)pTVar27 + -0x38);
    *(undefined8 *)((longlong)pTVar28 + 0x100) = uVar2;
    uVar2 = *(undefined8 *)((longlong)pTVar27 + -0x20);
    *(undefined8 *)((longlong)pTVar28 + 0x108) = *(undefined8 *)((longlong)pTVar27 + -0x28);
    *(undefined8 *)((longlong)pTVar28 + 0x110) = uVar2;
    uVar2 = *(undefined8 *)((longlong)pTVar27 + -0x10);
    *(undefined8 *)((longlong)pTVar28 + 0x118) = *(undefined8 *)((longlong)pTVar27 + -0x18);
    *(undefined8 *)((longlong)pTVar28 + 0x120) = uVar2;
    *(undefined8 *)((longlong)pTVar28 + 0x128) = *(undefined8 *)((longlong)pTVar27 + -8);
    pTVar25->_s_1 = TVar4;
    *(undefined8 *)((longlong)pTVar27 + -0x90) = uVar5;
    *(undefined8 *)((longlong)pTVar27 + -0x88) = uVar6;
    *(undefined8 *)((longlong)pTVar27 + -0x80) = uVar7;
    *(undefined8 *)((longlong)pTVar27 + -0x78) = uVar8;
    *(undefined8 *)((longlong)pTVar27 + -0x70) = uVar9;
    *(undefined8 *)((longlong)pTVar27 + -0x68) = uVar10;
    *(undefined8 *)((longlong)pTVar27 + -0x60) = uVar11;
    *(undefined8 *)((longlong)pTVar27 + -0x58) = uVar12;
    *(undefined8 *)((longlong)pTVar27 + -0x50) = uVar13;
    *(undefined8 *)((longlong)pTVar27 + -0x48) = uVar14;
    *(undefined8 *)((longlong)pTVar27 + -0x40) = uVar15;
    *(undefined8 *)((longlong)pTVar27 + -0x38) = uVar16;
    *(undefined8 *)((longlong)pTVar27 + -0x30) = uVar17;
    *(undefined8 *)((longlong)pTVar27 + -0x28) = uVar18;
    *(undefined8 *)((longlong)pTVar27 + -0x20) = uVar19;
    *(undefined8 *)((longlong)pTVar27 + -0x18) = uVar20;
    *(undefined8 *)((longlong)pTVar27 + -0x10) = uVar21;
    *(undefined8 *)((longlong)pTVar27 + -8) = uVar3;
    goto LAB_147681590;
  }
  TVar4 = pTVar29->_s_1;
  uVar5 = *(undefined8 *)((pTVar29->ElementData).Pad + 8);
  uVar6 = *(undefined8 *)((pTVar29->ElementData).Pad + 0x10);
  uVar7 = *(undefined8 *)((pTVar29->ElementData).Pad + 0x18);
  local_3a8._0_4_ = (int)local_3a8 + -1;
  uVar8 = *(undefined8 *)((pTVar29->ElementData).Pad + 0x20);
  uVar9 = *(undefined8 *)((pTVar29->ElementData).Pad + 0x28);
  lVar22 = (longlong)pTVar25 + (-0x98 - (longlong)pTVar29);
  uVar10 = *(undefined8 *)((pTVar29->ElementData).Pad + 0x30);
  uVar11 = *(undefined8 *)((pTVar29->ElementData).Pad + 0x38);
  uVar12 = *(undefined8 *)((pTVar29->ElementData).Pad + 0x40);
  uVar13 = *(undefined8 *)((pTVar29->ElementData).Pad + 0x48);
  uVar14 = *(undefined8 *)((pTVar29->ElementData).Pad + 0x50);
  uVar15 = *(undefined8 *)((pTVar29->ElementData).Pad + 0x58);
  uVar16 = *(undefined8 *)((pTVar29->ElementData).Pad + 0x60);
  uVar17 = *(undefined8 *)((pTVar29->ElementData).Pad + 0x68);
  uVar18 = *(undefined8 *)((pTVar29->ElementData).Pad + 0x70);
  uVar19 = *(undefined8 *)((pTVar29->ElementData).Pad + 0x78);
  uVar20 = *(undefined8 *)((pTVar29->ElementData).Pad + 0x80);
  uVar21 = *(undefined8 *)((pTVar29->ElementData).Pad + 0x88);
  uVar3 = *(undefined8 *)((pTVar29->ElementData).Pad + 0x90);
  pTVar29->_s_1 = pTVar25->_s_1;
  *(undefined8 *)((pTVar29->ElementData).Pad + 8) = uVar2;
  uVar2 = *(undefined8 *)((longlong)pTVar27 + -0x80);
  lVar22 = lVar22 / 0x26 + (lVar22 >> 0x3f);
  *(undefined8 *)((pTVar29->ElementData).Pad + 0x10) = *(undefined8 *)((longlong)pTVar27 + -0x88);
  *(undefined8 *)((pTVar29->ElementData).Pad + 0x18) = uVar2;
  uVar2 = *(undefined8 *)((longlong)pTVar27 + -0x70);
  *(undefined8 *)((pTVar29->ElementData).Pad + 0x20) = *(undefined8 *)((longlong)pTVar27 + -0x78);
  *(undefined8 *)((pTVar29->ElementData).Pad + 0x28) = uVar2;
  uVar2 = *(undefined8 *)((longlong)pTVar27 + -0x60);
  *(undefined8 *)((pTVar29->ElementData).Pad + 0x30) = *(undefined8 *)((longlong)pTVar27 + -0x68);
  *(undefined8 *)((pTVar29->ElementData).Pad + 0x38) = uVar2;
  uVar2 = *(undefined8 *)((longlong)pTVar27 + -0x50);
  *(undefined8 *)((pTVar29->ElementData).Pad + 0x40) = *(undefined8 *)((longlong)pTVar27 + -0x58);
  *(undefined8 *)((pTVar29->ElementData).Pad + 0x48) = uVar2;
  uVar2 = *(undefined8 *)((longlong)pTVar27 + -0x40);
  *(undefined8 *)((pTVar29->ElementData).Pad + 0x50) = *(undefined8 *)((longlong)pTVar27 + -0x48);
  *(undefined8 *)((pTVar29->ElementData).Pad + 0x58) = uVar2;
  uVar2 = *(undefined8 *)((longlong)pTVar27 + -0x30);
  *(undefined8 *)((pTVar29->ElementData).Pad + 0x60) = *(undefined8 *)((longlong)pTVar27 + -0x38);
  *(undefined8 *)((pTVar29->ElementData).Pad + 0x68) = uVar2;
  uVar2 = *(undefined8 *)((longlong)pTVar27 + -0x20);
  *(undefined8 *)((pTVar29->ElementData).Pad + 0x70) = *(undefined8 *)((longlong)pTVar27 + -0x28);
  *(undefined8 *)((pTVar29->ElementData).Pad + 0x78) = uVar2;
  uVar2 = *(undefined8 *)((longlong)pTVar27 + -0x10);
  *(undefined8 *)((pTVar29->ElementData).Pad + 0x80) = *(undefined8 *)((longlong)pTVar27 + -0x18);
  *(undefined8 *)((pTVar29->ElementData).Pad + 0x88) = uVar2;
  *(undefined8 *)((pTVar29->ElementData).Pad + 0x90) = *(undefined8 *)((longlong)pTVar27 + -8);
  pTVar25->_s_1 = TVar4;
  *(undefined8 *)((longlong)pTVar27 + -0x90) = uVar5;
  *(undefined8 *)((longlong)pTVar27 + -0x88) = uVar6;
  *(undefined8 *)((longlong)pTVar27 + -0x80) = uVar7;
  *(undefined8 *)((longlong)pTVar27 + -0x78) = uVar8;
  *(undefined8 *)((longlong)pTVar27 + -0x70) = uVar9;
  *(undefined8 *)((longlong)pTVar27 + -0x68) = uVar10;
  *(undefined8 *)((longlong)pTVar27 + -0x60) = uVar11;
  *(undefined8 *)((longlong)pTVar27 + -0x58) = uVar12;
  *(undefined8 *)((longlong)pTVar27 + -0x50) = uVar13;
  *(undefined8 *)((longlong)pTVar27 + -0x48) = uVar14;
  *(undefined8 *)((longlong)pTVar27 + -0x40) = uVar15;
  *(undefined8 *)((longlong)pTVar27 + -0x38) = uVar16;
  *(undefined8 *)((longlong)pTVar27 + -0x30) = uVar17;
  *(undefined8 *)((longlong)pTVar27 + -0x28) = uVar18;
  *(undefined8 *)((longlong)pTVar27 + -0x20) = uVar19;
  *(undefined8 *)((longlong)pTVar27 + -0x18) = uVar20;
  *(undefined8 *)((longlong)pTVar27 + -0x10) = uVar21;
  *(undefined8 *)((longlong)pTVar27 + -8) = uVar3;
  if ((lVar22 >> 2) - (lVar22 >> 0x3f) < ((longlong)pTVar26 - (longlong)pTVar23) / 0x98) {
    if (pTVar23 < pTVar26) {
      *ppTVar30 = pTVar23;
      ppTVar30[1] = pTVar26;
      *(int *)(ppTVar30 + 2) = (int)local_3a8;
      ppTVar30 = ppTVar30 + 3;
    }
    if (pTVar25 <= pTVar29 + 1) goto LAB_14768185e;
    pTVar26 = pTVar27 + -2;
    pTVar23 = pTVar29;
  }
  else {
    if (pTVar29 + 1 < pTVar25) {
      *ppTVar30 = pTVar29;
      ppTVar30[1] = pTVar27 + -2;
      *(int *)(ppTVar30 + 2) = (int)local_3a8;
      ppTVar30 = ppTVar30 + 3;
    }
    if (pTVar26 <= pTVar23) goto LAB_14768185e;
  }
  iVar24 = (int)(((longlong)pTVar26 - (longlong)pTVar23) / 0x98) + 1;
  pTVar29 = pTVar23;
  if ((int)local_3a8 == 0) goto LAB_14768184f;
  goto LAB_147681490;
}

// IntroSortInternal<TTuple<FAudioChunkCache::FCacheElement_*,int>,int,`FAudioChunkCache::DebugDisplayLegacy'::__l14::<lambda_1>,TGreater<float>_> @ 147681a70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<TTuple<FAudioChunkCache::FCacheElement_*,int>,int,_FAudioChunkCache::DebugDisplayLegacy_::__l14::<lambda_1>,TGreater<float>_>
          (TTuple<FAudioChunkCache::FCacheElement_*,int> *param_1,int param_2,<lambda_1> param_3,
          TGreater<float> param_4)

{
  float *pfVar1;
  TTuple<FAudioChunkCache::FCacheElement_*,int> *pTVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  TTuple<FAudioChunkCache::FCacheElement_*,int> *pTVar7;
  TTuple<FAudioChunkCache::FCacheElement_*,int> *pTVar8;
  TTuple<FAudioChunkCache::FCacheElement_*,int> *pTVar9;
  TTuple<FAudioChunkCache::FCacheElement_*,int> *pTVar10;
  TTuple<FAudioChunkCache::FCacheElement_*,int> *pTVar11;
  TTuple<FAudioChunkCache::FCacheElement_*,int> *pTVar12;
  TTuple<FAudioChunkCache::FCacheElement_*,int> *pTVar13;
  TTuple<FAudioChunkCache::FCacheElement_*,int> **ppTVar14;
  float fVar15;
  undefined1 auStack_378 [48];
  TTuple<FAudioChunkCache::FCacheElement_*,int> *local_348;
  TTuple<FAudioChunkCache::FCacheElement_*,int> *local_338;
  TTuple<FAudioChunkCache::FCacheElement_*,int> *local_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  if (1 < param_2) {
    local_38 = __security_cookie.value ^ (ulonglong)auStack_378;
    local_330 = param_1 + (longlong)param_2 + -1;
    local_338 = param_1;
    fVar15 = logf((float)param_2 * (float)param_2);
    local_328 = (undefined4)(longlong)fVar15;
    memset(local_320,0,0x2e8);
    ppTVar14 = &local_338;
    do {
      pTVar11 = ppTVar14[1];
      pTVar13 = *ppTVar14;
      pTVar2 = ppTVar14[2];
      iVar6 = (int)((longlong)pTVar11 - (longlong)pTVar13 >> 4) + 1;
      local_348._0_4_ = (int)pTVar2;
      pTVar12 = pTVar13;
      if ((int)local_348 != 0) {
LAB_147681b30:
        if (8 < iVar6) {
          uVar3 = *(undefined8 *)&pTVar12->field_0x8;
          pTVar9 = pTVar11 + 1;
          lVar4 = *(longlong *)(pTVar12 + iVar6 / 2);
          uVar5 = *(undefined8 *)&pTVar12[iVar6 / 2].field_0x8;
          *(longlong *)(pTVar12 + iVar6 / 2) = *(longlong *)pTVar12;
          *(undefined8 *)&pTVar12[iVar6 / 2].field_0x8 = uVar3;
          *(longlong *)pTVar12 = lVar4;
          *(undefined8 *)&pTVar12->field_0x8 = uVar5;
          pTVar13 = pTVar12;
LAB_147681b60:
          pTVar8 = pTVar13;
          pTVar13 = pTVar8 + 1;
          if (pTVar13 <= pTVar11) goto code_r0x000147681b69;
          goto LAB_147681b80;
        }
        if (pTVar12 < pTVar11) {
          pTVar2 = pTVar12 + 1;
          do {
            pTVar13 = pTVar12;
            if (pTVar2 <= pTVar11) {
              pTVar9 = pTVar2;
              if (0x3f < ((longlong)pTVar11 + (0x10 - (longlong)pTVar2) & 0xfffffffffffffff0U)) {
                pTVar8 = pTVar12 + 3;
                do {
                  if (*(float *)(*(longlong *)pTVar9 + 0x90) <
                      *(float *)(*(longlong *)pTVar13 + 0x90)) {
                    pTVar13 = pTVar9;
                  }
                  pfVar1 = (float *)(*(longlong *)(pTVar8 + -1) + 0x90);
                  pTVar10 = pTVar8 + -1;
                  if (*(float *)(*(longlong *)pTVar13 + 0x90) < *pfVar1 ||
                      *(float *)(*(longlong *)pTVar13 + 0x90) == *pfVar1) {
                    pTVar10 = pTVar13;
                  }
                  pTVar7 = pTVar8;
                  if (*(float *)(*(longlong *)pTVar10 + 0x90) <
                      *(float *)(*(longlong *)pTVar8 + 0x90) ||
                      *(float *)(*(longlong *)pTVar10 + 0x90) ==
                      *(float *)(*(longlong *)pTVar8 + 0x90)) {
                    pTVar7 = pTVar10;
                  }
                  pfVar1 = (float *)(*(longlong *)(pTVar8 + 1) + 0x90);
                  pTVar13 = pTVar8 + 1;
                  if (*(float *)(*(longlong *)pTVar7 + 0x90) < *pfVar1 ||
                      *(float *)(*(longlong *)pTVar7 + 0x90) == *pfVar1) {
                    pTVar13 = pTVar7;
                  }
                  pTVar9 = pTVar9 + 4;
                  pTVar8 = pTVar8 + 4;
                } while (pTVar9 <= pTVar11 + -3);
              }
              for (; pTVar9 <= pTVar11; pTVar9 = pTVar9 + 1) {
                if (*(float *)(*(longlong *)pTVar9 + 0x90) < *(float *)(*(longlong *)pTVar13 + 0x90)
                   ) {
                  pTVar13 = pTVar9;
                }
              }
            }
            lVar4 = *(longlong *)pTVar13;
            uVar3 = *(undefined8 *)&pTVar13->field_0x8;
            pTVar9 = pTVar11 + -1;
            uVar5 = *(undefined8 *)&pTVar11->field_0x8;
            *(longlong *)pTVar13 = *(longlong *)pTVar11;
            *(undefined8 *)&pTVar13->field_0x8 = uVar5;
            *(longlong *)pTVar11 = lVar4;
            *(undefined8 *)&pTVar11->field_0x8 = uVar3;
            pTVar11 = pTVar9;
          } while (pTVar12 < pTVar9);
        }
        goto LAB_147681c4f;
      }
LAB_147681c3d:
      local_348 = pTVar2;
      HeapSortInternal<TTuple<FAudioChunkCache::FCacheElement_*,int>,int,_FAudioChunkCache::DebugDisplayLegacy_::__l14::<lambda_1>,TGreater<float>_>
                (pTVar13,iVar6,param_3,param_4);
LAB_147681c4f:
      ppTVar14 = ppTVar14 + -3;
    } while (&local_338 <= ppTVar14);
  }
  return;
code_r0x000147681b69:
  if (*(float *)(*(longlong *)pTVar12 + 0x90) < *(float *)(*(longlong *)pTVar13 + 0x90) ||
      *(float *)(*(longlong *)pTVar12 + 0x90) == *(float *)(*(longlong *)pTVar13 + 0x90))
  goto LAB_147681b60;
LAB_147681b80:
  do {
    pTVar10 = pTVar9;
    pTVar9 = pTVar10 + -1;
    if (pTVar9 <= pTVar12) break;
  } while (*(float *)(*(longlong *)pTVar9 + 0x90) < *(float *)(*(longlong *)pTVar12 + 0x90) ||
           *(float *)(*(longlong *)pTVar9 + 0x90) == *(float *)(*(longlong *)pTVar12 + 0x90));
  uVar3 = *(undefined8 *)&pTVar10[-1].field_0x8;
  if (pTVar13 <= pTVar9) {
    lVar4 = *(longlong *)pTVar13;
    uVar5 = *(undefined8 *)&pTVar8[1].field_0x8;
    *(longlong *)pTVar13 = *(longlong *)pTVar9;
    *(undefined8 *)&pTVar8[1].field_0x8 = uVar3;
    *(longlong *)pTVar9 = lVar4;
    *(undefined8 *)&pTVar10[-1].field_0x8 = uVar5;
    goto LAB_147681b60;
  }
  lVar4 = *(longlong *)pTVar12;
  uVar5 = *(undefined8 *)&pTVar12->field_0x8;
  local_348._0_4_ = (int)local_348 + -1;
  *(longlong *)pTVar12 = *(longlong *)pTVar9;
  *(undefined8 *)&pTVar12->field_0x8 = uVar3;
  *(longlong *)pTVar9 = lVar4;
  *(undefined8 *)&pTVar10[-1].field_0x8 = uVar5;
  if ((longlong)((longlong)pTVar9 + (-0x10 - (longlong)pTVar12) & 0xfffffffffffffff0U) <
      (longlong)((longlong)pTVar11 - (longlong)pTVar13 & 0xfffffffffffffff0U)) {
    if (pTVar13 < pTVar11) {
      *ppTVar14 = pTVar13;
      ppTVar14[1] = pTVar11;
      *(int *)(ppTVar14 + 2) = (int)local_348;
      ppTVar14 = ppTVar14 + 3;
    }
    if (pTVar9 <= pTVar12 + 1) goto LAB_147681c4f;
    pTVar11 = pTVar10 + -2;
    pTVar13 = pTVar12;
  }
  else {
    if (pTVar12 + 1 < pTVar9) {
      *ppTVar14 = pTVar12;
      ppTVar14[1] = pTVar10 + -2;
      *(int *)(ppTVar14 + 2) = (int)local_348;
      ppTVar14 = ppTVar14 + 3;
    }
    if (pTVar11 <= pTVar13) goto LAB_147681c4f;
  }
  iVar6 = (int)((longlong)pTVar11 - (longlong)pTVar13 >> 4) + 1;
  pTVar12 = pTVar13;
  if ((int)local_348 == 0) goto LAB_147681c3d;
  goto LAB_147681b30;
}

// IntroSortInternal<TTuple<FAudioChunkCache::FCacheElement_*,int>,int,`FAudioChunkCache::DebugDisplayLegacy'::__l15::<lambda_2>,TGreater<int>_> @ 147681dc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<TTuple<FAudioChunkCache::FCacheElement_*,int>,int,_FAudioChunkCache::DebugDisplayLegacy_::__l15::<lambda_2>,TGreater<int>_>
          (TTuple<FAudioChunkCache::FCacheElement_*,int> *param_1,int param_2,<lambda_2> param_3,
          TGreater<int> param_4)

{
  TTuple<FAudioChunkCache::FCacheElement_*,int> *pTVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  TTuple<FAudioChunkCache::FCacheElement_*,int> *pTVar6;
  TTuple<FAudioChunkCache::FCacheElement_*,int> **ppTVar7;
  TTuple<FAudioChunkCache::FCacheElement_*,int> *pTVar8;
  TTuple<FAudioChunkCache::FCacheElement_*,int> *pTVar9;
  TTuple<FAudioChunkCache::FCacheElement_*,int> *pTVar10;
  TTuple<FAudioChunkCache::FCacheElement_*,int> *pTVar11;
  TTuple<FAudioChunkCache::FCacheElement_*,int> *pTVar12;
  float fVar13;
  undefined1 auStack_368 [48];
  TTuple<FAudioChunkCache::FCacheElement_*,int> *local_338;
  TTuple<FAudioChunkCache::FCacheElement_*,int> *local_328;
  TTuple<FAudioChunkCache::FCacheElement_*,int> *local_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = __security_cookie.value ^ (ulonglong)auStack_368;
    local_320 = param_1 + (longlong)param_2 + -1;
    local_328 = param_1;
    fVar13 = logf((float)param_2 * (float)param_2);
    local_318 = (undefined4)(longlong)fVar13;
    memset(local_310,0,0x2e8);
    ppTVar7 = &local_328;
    do {
      pTVar10 = ppTVar7[1];
      pTVar12 = *ppTVar7;
      pTVar1 = ppTVar7[2];
      iVar5 = (int)((longlong)pTVar10 - (longlong)pTVar12 >> 4) + 1;
      local_338._0_4_ = (int)pTVar1;
      pTVar11 = pTVar12;
      if ((int)local_338 != 0) {
LAB_147681e70:
        if (8 < iVar5) {
          uVar2 = *(undefined8 *)&pTVar11->field_0x8;
          pTVar8 = pTVar10 + 1;
          lVar3 = *(longlong *)(pTVar11 + iVar5 / 2);
          uVar4 = *(undefined8 *)&pTVar11[iVar5 / 2].field_0x8;
          *(longlong *)(pTVar11 + iVar5 / 2) = *(longlong *)pTVar11;
          *(undefined8 *)&pTVar11[iVar5 / 2].field_0x8 = uVar2;
          *(longlong *)pTVar11 = lVar3;
          *(undefined8 *)&pTVar11->field_0x8 = uVar4;
          pTVar12 = pTVar11;
LAB_147681ea0:
          pTVar6 = pTVar12;
          pTVar12 = pTVar6 + 1;
          if (pTVar12 <= pTVar10) goto code_r0x000147681ea9;
          goto LAB_147681eb7;
        }
        for (; pTVar12 = pTVar11, pTVar1 = pTVar11, pTVar11 < pTVar10; pTVar10 = pTVar10 + -1) {
          while (pTVar8 = pTVar12, pTVar1 = pTVar1 + 1, pTVar1 <= pTVar10) {
            pTVar12 = pTVar1;
            if (*(int *)(*(longlong *)pTVar8 + 0x7c) <= *(int *)(*(longlong *)pTVar1 + 0x7c)) {
              pTVar12 = pTVar8;
            }
          }
          lVar3 = *(longlong *)pTVar8;
          uVar2 = *(undefined8 *)&pTVar8->field_0x8;
          uVar4 = *(undefined8 *)&pTVar10->field_0x8;
          *(longlong *)pTVar8 = *(longlong *)pTVar10;
          *(undefined8 *)&pTVar8->field_0x8 = uVar4;
          *(longlong *)pTVar10 = lVar3;
          *(undefined8 *)&pTVar10->field_0x8 = uVar2;
        }
        goto LAB_147681f7d;
      }
LAB_147681f6b:
      local_338 = pTVar1;
      HeapSortInternal<TTuple<FAudioChunkCache::FCacheElement_*,int>,int,_FAudioChunkCache::DebugDisplayLegacy_::__l15::<lambda_2>,TGreater<int>_>
                (pTVar12,iVar5,param_3,param_4);
LAB_147681f7d:
      ppTVar7 = ppTVar7 + -3;
    } while (&local_328 <= ppTVar7);
  }
  return;
code_r0x000147681ea9:
  if (*(int *)(*(longlong *)pTVar11 + 0x7c) <= *(int *)(*(longlong *)pTVar12 + 0x7c))
  goto LAB_147681ea0;
LAB_147681eb7:
  do {
    pTVar9 = pTVar8;
    pTVar8 = pTVar9 + -1;
    if (pTVar8 <= pTVar11) break;
  } while (*(int *)(*(longlong *)pTVar8 + 0x7c) <= *(int *)(*(longlong *)pTVar11 + 0x7c));
  uVar2 = *(undefined8 *)&pTVar9[-1].field_0x8;
  if (pTVar12 <= pTVar8) {
    lVar3 = *(longlong *)pTVar12;
    uVar4 = *(undefined8 *)&pTVar6[1].field_0x8;
    *(longlong *)pTVar12 = *(longlong *)pTVar8;
    *(undefined8 *)&pTVar6[1].field_0x8 = uVar2;
    *(longlong *)pTVar8 = lVar3;
    *(undefined8 *)&pTVar9[-1].field_0x8 = uVar4;
    goto LAB_147681ea0;
  }
  lVar3 = *(longlong *)pTVar11;
  uVar4 = *(undefined8 *)&pTVar11->field_0x8;
  local_338._0_4_ = (int)local_338 + -1;
  *(longlong *)pTVar11 = *(longlong *)pTVar8;
  *(undefined8 *)&pTVar11->field_0x8 = uVar2;
  *(longlong *)pTVar8 = lVar3;
  *(undefined8 *)&pTVar9[-1].field_0x8 = uVar4;
  if ((longlong)((longlong)pTVar8 + (-0x10 - (longlong)pTVar11) & 0xfffffffffffffff0U) <
      (longlong)((longlong)pTVar10 - (longlong)pTVar12 & 0xfffffffffffffff0U)) {
    if (pTVar12 < pTVar10) {
      *ppTVar7 = pTVar12;
      ppTVar7[1] = pTVar10;
      *(int *)(ppTVar7 + 2) = (int)local_338;
      ppTVar7 = ppTVar7 + 3;
    }
    if (pTVar8 <= pTVar11 + 1) goto LAB_147681f7d;
    pTVar10 = pTVar9 + -2;
    pTVar12 = pTVar11;
  }
  else {
    if (pTVar11 + 1 < pTVar8) {
      *ppTVar7 = pTVar11;
      ppTVar7[1] = pTVar9 + -2;
      *(int *)(ppTVar7 + 2) = (int)local_338;
      ppTVar7 = ppTVar7 + 3;
    }
    if (pTVar10 <= pTVar12) goto LAB_147681f7d;
  }
  iVar5 = (int)((longlong)pTVar10 - (longlong)pTVar12 >> 4) + 1;
  pTVar11 = pTVar12;
  if ((int)local_338 == 0) goto LAB_147681f6b;
  goto LAB_147681e70;
}

// IntroSortInternal<TTuple<FAudioChunkCache::FCacheElement_*,int>,int,`FAudioChunkCache::DebugDisplayLegacy'::__l16::<lambda_3>,TGreater<int>_> @ 147682020

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<TTuple<FAudioChunkCache::FCacheElement_*,int>,int,_FAudioChunkCache::DebugDisplayLegacy_::__l16::<lambda_3>,TGreater<int>_>
          (TTuple<FAudioChunkCache::FCacheElement_*,int> *param_1,int param_2,<lambda_3> param_3,
          TGreater<int> param_4)

{
  TTuple<FAudioChunkCache::FCacheElement_*,int> *pTVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  TTuple<FAudioChunkCache::FCacheElement_*,int> **ppTVar6;
  TTuple<FAudioChunkCache::FCacheElement_*,int> *pTVar7;
  TTuple<FAudioChunkCache::FCacheElement_*,int> *pTVar8;
  TTuple<FAudioChunkCache::FCacheElement_*,int> *pTVar9;
  TTuple<FAudioChunkCache::FCacheElement_*,int> *pTVar10;
  TTuple<FAudioChunkCache::FCacheElement_*,int> *pTVar11;
  TTuple<FAudioChunkCache::FCacheElement_*,int> *pTVar12;
  float fVar13;
  undefined1 auStack_368 [48];
  TTuple<FAudioChunkCache::FCacheElement_*,int> *local_338;
  TTuple<FAudioChunkCache::FCacheElement_*,int> *local_328;
  TTuple<FAudioChunkCache::FCacheElement_*,int> *local_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = __security_cookie.value ^ (ulonglong)auStack_368;
    local_320 = param_1 + (longlong)param_2 + -1;
    local_328 = param_1;
    fVar13 = logf((float)param_2 * (float)param_2);
    local_318 = (undefined4)(longlong)fVar13;
    memset(local_310,0,0x2e8);
    ppTVar6 = &local_328;
    do {
      pTVar12 = ppTVar6[1];
      pTVar11 = *ppTVar6;
      pTVar1 = ppTVar6[2];
      iVar5 = (int)((longlong)pTVar12 - (longlong)pTVar11 >> 4) + 1;
      local_338._0_4_ = (int)pTVar1;
      pTVar10 = pTVar11;
      if ((int)local_338 != 0) {
LAB_1476820d0:
        if (8 < iVar5) {
          uVar2 = *(undefined8 *)&pTVar10->field_0x8;
          pTVar8 = pTVar12 + 1;
          lVar3 = *(longlong *)(pTVar10 + iVar5 / 2);
          uVar4 = *(undefined8 *)&pTVar10[iVar5 / 2].field_0x8;
          *(longlong *)(pTVar10 + iVar5 / 2) = *(longlong *)pTVar10;
          *(undefined8 *)&pTVar10[iVar5 / 2].field_0x8 = uVar2;
          *(longlong *)pTVar10 = lVar3;
          *(undefined8 *)&pTVar10->field_0x8 = uVar4;
          pTVar11 = pTVar10;
LAB_147682100:
          pTVar7 = pTVar11;
          pTVar11 = pTVar7 + 1;
          if (pTVar11 <= pTVar12) goto code_r0x000147682109;
          goto LAB_147682120;
        }
        for (; pTVar11 = pTVar10, pTVar1 = pTVar10, pTVar10 < pTVar12; pTVar12 = pTVar12 + -1) {
          while (pTVar8 = pTVar11, pTVar1 = pTVar1 + 1, pTVar1 <= pTVar12) {
            pTVar11 = pTVar1;
            if (*(int *)(*(longlong *)pTVar8 + 0x60) <= *(int *)(*(longlong *)pTVar1 + 0x60)) {
              pTVar11 = pTVar8;
            }
          }
          lVar3 = *(longlong *)pTVar8;
          uVar2 = *(undefined8 *)&pTVar8->field_0x8;
          uVar4 = *(undefined8 *)&pTVar12->field_0x8;
          *(longlong *)pTVar8 = *(longlong *)pTVar12;
          *(undefined8 *)&pTVar8->field_0x8 = uVar4;
          *(longlong *)pTVar12 = lVar3;
          *(undefined8 *)&pTVar12->field_0x8 = uVar2;
        }
        goto LAB_1476821e8;
      }
LAB_1476821d6:
      local_338 = pTVar1;
      HeapSortInternal<TTuple<FAudioChunkCache::FCacheElement_*,int>,int,_FAudioChunkCache::DebugDisplayLegacy_::__l16::<lambda_3>,TGreater<int>_>
                (pTVar11,iVar5,param_3,param_4);
LAB_1476821e8:
      ppTVar6 = ppTVar6 + -3;
    } while (&local_328 <= ppTVar6);
  }
  return;
code_r0x000147682109:
  if (*(int *)(*(longlong *)pTVar10 + 0x60) <= *(int *)(*(longlong *)pTVar11 + 0x60))
  goto LAB_147682100;
LAB_147682120:
  do {
    pTVar9 = pTVar8;
    pTVar8 = pTVar9 + -1;
    if (pTVar8 <= pTVar10) break;
  } while (*(int *)(*(longlong *)pTVar8 + 0x60) <= *(int *)(*(longlong *)pTVar10 + 0x60));
  uVar2 = *(undefined8 *)&pTVar9[-1].field_0x8;
  if (pTVar11 <= pTVar8) {
    lVar3 = *(longlong *)pTVar11;
    uVar4 = *(undefined8 *)&pTVar7[1].field_0x8;
    *(longlong *)pTVar11 = *(longlong *)pTVar8;
    *(undefined8 *)&pTVar7[1].field_0x8 = uVar2;
    *(longlong *)pTVar8 = lVar3;
    *(undefined8 *)&pTVar9[-1].field_0x8 = uVar4;
    goto LAB_147682100;
  }
  lVar3 = *(longlong *)pTVar10;
  uVar4 = *(undefined8 *)&pTVar10->field_0x8;
  local_338._0_4_ = (int)local_338 + -1;
  *(longlong *)pTVar10 = *(longlong *)pTVar8;
  *(undefined8 *)&pTVar10->field_0x8 = uVar2;
  *(longlong *)pTVar8 = lVar3;
  *(undefined8 *)&pTVar9[-1].field_0x8 = uVar4;
  if ((longlong)((longlong)pTVar8 + (-0x10 - (longlong)pTVar10) & 0xfffffffffffffff0U) <
      (longlong)((longlong)pTVar12 - (longlong)pTVar11 & 0xfffffffffffffff0U)) {
    if (pTVar11 < pTVar12) {
      *ppTVar6 = pTVar11;
      ppTVar6[1] = pTVar12;
      *(int *)(ppTVar6 + 2) = (int)local_338;
      ppTVar6 = ppTVar6 + 3;
    }
    if (pTVar8 <= pTVar10 + 1) goto LAB_1476821e8;
    pTVar12 = pTVar9 + -2;
    pTVar11 = pTVar10;
  }
  else {
    if (pTVar10 + 1 < pTVar8) {
      *ppTVar6 = pTVar10;
      ppTVar6[1] = pTVar9 + -2;
      *(int *)(ppTVar6 + 2) = (int)local_338;
      ppTVar6 = ppTVar6 + 3;
    }
    if (pTVar12 <= pTVar11) goto LAB_1476821e8;
  }
  iVar5 = (int)((longlong)pTVar12 - (longlong)pTVar11 >> 4) + 1;
  pTVar10 = pTVar11;
  if ((int)local_338 == 0) goto LAB_1476821d6;
  goto LAB_1476820d0;
}

// IntroSortInternal<TTuple<FAudioChunkCache::FCacheElement_*,int>,int,`FAudioChunkCache::DebugDisplayLegacy'::__l17::<lambda_4>,TGreater<unsigned___int64>_> @ 147682290

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<TTuple<FAudioChunkCache::FCacheElement_*,int>,int,_FAudioChunkCache::DebugDisplayLegacy_::__l17::<lambda_4>,TGreater<unsigned___int64>_>
          (TTuple<FAudioChunkCache::FCacheElement_*,int> *param_1,int param_2,<lambda_4> param_3,
          TGreater<unsigned___int64> param_4)

{
  TTuple<FAudioChunkCache::FCacheElement_*,int> *pTVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  TTuple<FAudioChunkCache::FCacheElement_*,int> *pTVar6;
  TTuple<FAudioChunkCache::FCacheElement_*,int> **ppTVar7;
  TTuple<FAudioChunkCache::FCacheElement_*,int> *pTVar8;
  TTuple<FAudioChunkCache::FCacheElement_*,int> *pTVar9;
  TTuple<FAudioChunkCache::FCacheElement_*,int> *pTVar10;
  TTuple<FAudioChunkCache::FCacheElement_*,int> *pTVar11;
  TTuple<FAudioChunkCache::FCacheElement_*,int> *pTVar12;
  float fVar13;
  undefined1 auStack_368 [48];
  TTuple<FAudioChunkCache::FCacheElement_*,int> *local_338;
  TTuple<FAudioChunkCache::FCacheElement_*,int> *local_328;
  TTuple<FAudioChunkCache::FCacheElement_*,int> *local_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = __security_cookie.value ^ (ulonglong)auStack_368;
    local_320 = param_1 + (longlong)param_2 + -1;
    local_328 = param_1;
    fVar13 = logf((float)param_2 * (float)param_2);
    local_318 = (undefined4)(longlong)fVar13;
    memset(local_310,0,0x2e8);
    ppTVar7 = &local_328;
    do {
      pTVar10 = ppTVar7[1];
      pTVar12 = *ppTVar7;
      pTVar1 = ppTVar7[2];
      iVar5 = (int)((longlong)pTVar10 - (longlong)pTVar12 >> 4) + 1;
      local_338._0_4_ = (int)pTVar1;
      pTVar11 = pTVar12;
      if ((int)local_338 != 0) {
LAB_147682340:
        if (8 < iVar5) {
          uVar2 = *(undefined8 *)&pTVar11->field_0x8;
          pTVar8 = pTVar10 + 1;
          lVar3 = *(longlong *)(pTVar11 + iVar5 / 2);
          uVar4 = *(undefined8 *)&pTVar11[iVar5 / 2].field_0x8;
          *(longlong *)(pTVar11 + iVar5 / 2) = *(longlong *)pTVar11;
          *(undefined8 *)&pTVar11[iVar5 / 2].field_0x8 = uVar2;
          *(longlong *)pTVar11 = lVar3;
          *(undefined8 *)&pTVar11->field_0x8 = uVar4;
          pTVar12 = pTVar11;
LAB_147682370:
          pTVar6 = pTVar12;
          pTVar12 = pTVar6 + 1;
          if (pTVar12 <= pTVar10) goto code_r0x000147682379;
          goto LAB_147682390;
        }
        for (; pTVar12 = pTVar11, pTVar1 = pTVar11, pTVar11 < pTVar10; pTVar10 = pTVar10 + -1) {
          while (pTVar8 = pTVar12, pTVar1 = pTVar1 + 1, pTVar1 <= pTVar10) {
            pTVar12 = pTVar1;
            if (*(ulonglong *)(*(longlong *)pTVar8 + 0x80) <=
                *(ulonglong *)(*(longlong *)pTVar1 + 0x80)) {
              pTVar12 = pTVar8;
            }
          }
          lVar3 = *(longlong *)pTVar8;
          uVar2 = *(undefined8 *)&pTVar8->field_0x8;
          uVar4 = *(undefined8 *)&pTVar10->field_0x8;
          *(longlong *)pTVar8 = *(longlong *)pTVar10;
          *(undefined8 *)&pTVar8->field_0x8 = uVar4;
          *(longlong *)pTVar10 = lVar3;
          *(undefined8 *)&pTVar10->field_0x8 = uVar2;
        }
        goto LAB_14768245e;
      }
LAB_14768244c:
      local_338 = pTVar1;
      HeapSortInternal<TTuple<FAudioChunkCache::FCacheElement_*,int>,int,_FAudioChunkCache::DebugDisplayLegacy_::__l17::<lambda_4>,TGreater<unsigned___int64>_>
                (pTVar12,iVar5,param_3,param_4);
LAB_14768245e:
      ppTVar7 = ppTVar7 + -3;
    } while (&local_328 <= ppTVar7);
  }
  return;
code_r0x000147682379:
  if (*(ulonglong *)(*(longlong *)pTVar11 + 0x80) <= *(ulonglong *)(*(longlong *)pTVar12 + 0x80))
  goto LAB_147682370;
LAB_147682390:
  do {
    pTVar9 = pTVar8;
    pTVar8 = pTVar9 + -1;
    if (pTVar8 <= pTVar11) break;
  } while (*(ulonglong *)(*(longlong *)pTVar8 + 0x80) <= *(ulonglong *)(*(longlong *)pTVar11 + 0x80)
          );
  uVar2 = *(undefined8 *)&pTVar9[-1].field_0x8;
  if (pTVar12 <= pTVar8) {
    lVar3 = *(longlong *)pTVar12;
    uVar4 = *(undefined8 *)&pTVar6[1].field_0x8;
    *(longlong *)pTVar12 = *(longlong *)pTVar8;
    *(undefined8 *)&pTVar6[1].field_0x8 = uVar2;
    *(longlong *)pTVar8 = lVar3;
    *(undefined8 *)&pTVar9[-1].field_0x8 = uVar4;
    goto LAB_147682370;
  }
  lVar3 = *(longlong *)pTVar11;
  uVar4 = *(undefined8 *)&pTVar11->field_0x8;
  local_338._0_4_ = (int)local_338 + -1;
  *(longlong *)pTVar11 = *(longlong *)pTVar8;
  *(undefined8 *)&pTVar11->field_0x8 = uVar2;
  *(longlong *)pTVar8 = lVar3;
  *(undefined8 *)&pTVar9[-1].field_0x8 = uVar4;
  if ((longlong)((longlong)pTVar8 + (-0x10 - (longlong)pTVar11) & 0xfffffffffffffff0U) <
      (longlong)((longlong)pTVar10 - (longlong)pTVar12 & 0xfffffffffffffff0U)) {
    if (pTVar12 < pTVar10) {
      *ppTVar7 = pTVar12;
      ppTVar7[1] = pTVar10;
      *(int *)(ppTVar7 + 2) = (int)local_338;
      ppTVar7 = ppTVar7 + 3;
    }
    if (pTVar8 <= pTVar11 + 1) goto LAB_14768245e;
    pTVar10 = pTVar9 + -2;
    pTVar12 = pTVar11;
  }
  else {
    if (pTVar11 + 1 < pTVar8) {
      *ppTVar7 = pTVar11;
      ppTVar7[1] = pTVar9 + -2;
      *(int *)(ppTVar7 + 2) = (int)local_338;
      ppTVar7 = ppTVar7 + 3;
    }
    if (pTVar10 <= pTVar12) goto LAB_14768245e;
  }
  iVar5 = (int)((longlong)pTVar10 - (longlong)pTVar12 >> 4) + 1;
  pTVar11 = pTVar12;
  if ((int)local_338 == 0) goto LAB_14768244c;
  goto LAB_147682340;
}

// IntroSortInternal<FBatchedElements::FBatchedSprite,int,FIdentityFunctor,TDereferenceWrapper<FBatchedElements::FBatchedSprite,`FBatchedElements::Draw'::__l125::FCompareSprite>_> @ 147682500

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<FBatchedElements::FBatchedSprite,int,FIdentityFunctor,TDereferenceWrapper<FBatchedElements::FBatchedSprite,_FBatchedElements::Draw_::__l125::FCompareSprite>_>
          (FBatchedSprite *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FBatchedElements::FBatchedSprite,_public:_bool___cdecl_FBatchedElements::Draw(FRHICommandList_&,FMeshPassProcessorRenderState_const_&,ERHIFeatureLevel::Type,FSceneView_const_&,bool,float,EBlendModeFilter::Type,unsigned_int)const_::_125_::FCompareSprite>
          param_4)

{
  FBatchedSprite *pFVar1;
  byte bVar2;
  byte bVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  FTexture *pFVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  double dVar12;
  float fVar13;
  FColor FVar14;
  float fVar15;
  undefined7 uVar16;
  float fVar17;
  float fVar18;
  FColor FVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  uchar uVar25;
  undefined7 uVar26;
  byte bVar27;
  int iVar28;
  FBatchedSprite *pFVar29;
  FBatchedSprite *pFVar30;
  FBatchedSprite *pFVar31;
  FBatchedSprite *pFVar32;
  FBatchedSprite *pFVar33;
  FBatchedSprite *pFVar34;
  FBatchedSprite **ppFVar35;
  bool bVar36;
  float fVar37;
  undefined1 auStack_3a8 [48];
  FBatchedSprite *local_378;
  FBatchedSprite *local_368;
  FBatchedSprite *local_360;
  undefined4 local_358;
  undefined1 local_350 [744];
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_3a8;
  if (1 < param_2) {
    local_360 = param_1 + (longlong)param_2 + -1;
    local_368 = param_1;
    fVar37 = logf((float)param_2 * (float)param_2);
    local_358 = (undefined4)(longlong)fVar37;
    memset(local_350,0,0x2e8);
    ppFVar35 = &local_368;
    do {
      pFVar29 = ppFVar35[1];
      pFVar34 = *ppFVar35;
      pFVar1 = ppFVar35[2];
      local_378._0_4_ = (int)pFVar1;
      iVar28 = (int)(((longlong)pFVar29 - (longlong)pFVar34) / 0x58) + 1;
      pFVar33 = pFVar34;
      if ((int)local_378 != 0) {
LAB_1476825e0:
        if (8 < iVar28) {
          dVar4 = (pFVar33->Position).field0_0x0._s_0.Y;
          pFVar31 = pFVar29 + 1;
          pFVar34 = pFVar33 + iVar28 / 2;
          dVar5 = (pFVar34->Position).field0_0x0._s_0.X;
          dVar6 = (pFVar34->Position).field0_0x0._s_0.Y;
          dVar7 = (pFVar34->Position).field0_0x0._s_0.Z;
          fVar17 = pFVar34->SizeX;
          fVar18 = pFVar34->SizeY;
          pFVar8 = pFVar34->Texture;
          uVar9 = *(undefined8 *)&(pFVar34->Color).field0_0x0;
          uVar10 = *(undefined8 *)((longlong)&(pFVar34->Color).field0_0x0 + 8);
          FVar19.field0_0x0 = (pFVar34->HitProxyColor).field0_0x0;
          fVar20 = pFVar34->U;
          fVar21 = pFVar34->UL;
          fVar22 = pFVar34->V;
          fVar23 = pFVar34->VL;
          fVar24 = pFVar34->OpacityMaskRefVal;
          uVar25 = pFVar34->BlendMode;
          uVar26 = *(undefined7 *)&pFVar34->field_0x51;
          (pFVar34->Position).field0_0x0._s_0.X = (pFVar33->Position).field0_0x0._s_0.X;
          (pFVar34->Position).field0_0x0._s_0.Y = dVar4;
          fVar37 = pFVar33->SizeX;
          fVar13 = pFVar33->SizeY;
          (pFVar34->Position).field0_0x0._s_0.Z = (pFVar33->Position).field0_0x0._s_0.Z;
          pFVar34->SizeX = fVar37;
          pFVar34->SizeY = fVar13;
          uVar11 = *(undefined8 *)&(pFVar33->Color).field0_0x0;
          pFVar34->Texture = pFVar33->Texture;
          *(undefined8 *)&(pFVar34->Color).field0_0x0 = uVar11;
          FVar14.field0_0x0 = (pFVar33->HitProxyColor).field0_0x0;
          fVar37 = pFVar33->U;
          *(undefined8 *)((longlong)&(pFVar34->Color).field0_0x0 + 8) =
               *(undefined8 *)((longlong)&(pFVar33->Color).field0_0x0 + 8);
          pFVar34->HitProxyColor = (FColor)FVar14.field0_0x0;
          pFVar34->U = fVar37;
          fVar37 = pFVar33->V;
          fVar13 = pFVar33->VL;
          fVar15 = pFVar33->OpacityMaskRefVal;
          pFVar34->UL = pFVar33->UL;
          pFVar34->V = fVar37;
          pFVar34->VL = fVar13;
          pFVar34->OpacityMaskRefVal = fVar15;
          uVar16 = *(undefined7 *)&pFVar33->field_0x51;
          pFVar34->BlendMode = pFVar33->BlendMode;
          *(undefined7 *)&pFVar34->field_0x51 = uVar16;
          (pFVar33->Position).field0_0x0._s_0.X = dVar5;
          (pFVar33->Position).field0_0x0._s_0.Y = dVar6;
          (pFVar33->Position).field0_0x0._s_0.Z = dVar7;
          pFVar33->SizeX = fVar17;
          pFVar33->SizeY = fVar18;
          pFVar33->Texture = pFVar8;
          *(undefined8 *)&(pFVar33->Color).field0_0x0 = uVar9;
          *(undefined8 *)((longlong)&(pFVar33->Color).field0_0x0 + 8) = uVar10;
          pFVar33->HitProxyColor = (FColor)FVar19.field0_0x0;
          pFVar33->U = fVar20;
          pFVar33->UL = fVar21;
          pFVar33->V = fVar22;
          pFVar33->VL = fVar23;
          pFVar33->OpacityMaskRefVal = fVar24;
          pFVar33->BlendMode = uVar25;
          *(undefined7 *)&pFVar33->field_0x51 = uVar26;
          pFVar34 = pFVar33;
LAB_147682670:
          pFVar30 = pFVar34;
          pFVar34 = pFVar30 + 1;
          if (pFVar34 <= pFVar29) goto code_r0x00014768267c;
          goto LAB_1476826b3;
        }
        for (; pFVar1 = pFVar33, pFVar34 = pFVar33, pFVar33 < pFVar29; pFVar29 = pFVar29 + -1) {
          while (pFVar31 = pFVar1, pFVar1 = pFVar34 + 1, pFVar1 <= pFVar29) {
            bVar2 = pFVar34[1].BlendMode;
            bVar3 = pFVar31->BlendMode;
            if (bVar3 == bVar2) {
              bVar36 = pFVar31->Texture < pFVar34[1].Texture;
            }
            else {
              bVar27 = (byte)(param_4.Predicate)->ValidBlendFilter;
              bVar36 = (bVar27 & bVar3) != 0;
              if (bVar36 == ((bVar27 & bVar2) != 0)) {
                bVar36 = bVar3 < bVar2;
              }
            }
            pFVar34 = pFVar1;
            if (!bVar36) {
              pFVar1 = pFVar31;
            }
          }
          dVar4 = (pFVar31->Position).field0_0x0._s_0.X;
          dVar5 = (pFVar31->Position).field0_0x0._s_0.Y;
          uVar25 = pFVar31->BlendMode;
          uVar26 = *(undefined7 *)&pFVar31->field_0x51;
          dVar6 = (pFVar31->Position).field0_0x0._s_0.Z;
          fVar17 = pFVar31->SizeX;
          fVar18 = pFVar31->SizeY;
          dVar7 = (pFVar29->Position).field0_0x0._s_0.Y;
          pFVar8 = pFVar31->Texture;
          uVar9 = *(undefined8 *)&(pFVar31->Color).field0_0x0;
          uVar10 = *(undefined8 *)((longlong)&(pFVar31->Color).field0_0x0 + 8);
          FVar19.field0_0x0 = (pFVar31->HitProxyColor).field0_0x0;
          fVar20 = pFVar31->U;
          fVar21 = pFVar31->UL;
          fVar22 = pFVar31->V;
          fVar23 = pFVar31->VL;
          fVar24 = pFVar31->OpacityMaskRefVal;
          (pFVar31->Position).field0_0x0._s_0.X = (pFVar29->Position).field0_0x0._s_0.X;
          (pFVar31->Position).field0_0x0._s_0.Y = dVar7;
          fVar37 = pFVar29->SizeX;
          fVar13 = pFVar29->SizeY;
          (pFVar31->Position).field0_0x0._s_0.Z = (pFVar29->Position).field0_0x0._s_0.Z;
          pFVar31->SizeX = fVar37;
          pFVar31->SizeY = fVar13;
          uVar11 = *(undefined8 *)&(pFVar29->Color).field0_0x0;
          pFVar31->Texture = pFVar29->Texture;
          *(undefined8 *)&(pFVar31->Color).field0_0x0 = uVar11;
          FVar14.field0_0x0 = (pFVar29->HitProxyColor).field0_0x0;
          fVar37 = pFVar29->U;
          *(undefined8 *)((longlong)&(pFVar31->Color).field0_0x0 + 8) =
               *(undefined8 *)((longlong)&(pFVar29->Color).field0_0x0 + 8);
          pFVar31->HitProxyColor = (FColor)FVar14.field0_0x0;
          pFVar31->U = fVar37;
          fVar37 = pFVar29->V;
          fVar13 = pFVar29->VL;
          fVar15 = pFVar29->OpacityMaskRefVal;
          pFVar31->UL = pFVar29->UL;
          pFVar31->V = fVar37;
          pFVar31->VL = fVar13;
          pFVar31->OpacityMaskRefVal = fVar15;
          uVar16 = *(undefined7 *)&pFVar29->field_0x51;
          pFVar31->BlendMode = pFVar29->BlendMode;
          *(undefined7 *)&pFVar31->field_0x51 = uVar16;
          (pFVar29->Position).field0_0x0._s_0.X = dVar4;
          (pFVar29->Position).field0_0x0._s_0.Y = dVar5;
          (pFVar29->Position).field0_0x0._s_0.Z = dVar6;
          pFVar29->SizeX = fVar17;
          pFVar29->SizeY = fVar18;
          pFVar29->Texture = pFVar8;
          *(undefined8 *)&(pFVar29->Color).field0_0x0 = uVar9;
          *(undefined8 *)((longlong)&(pFVar29->Color).field0_0x0 + 8) = uVar10;
          pFVar29->HitProxyColor = (FColor)FVar19.field0_0x0;
          pFVar29->U = fVar20;
          pFVar29->UL = fVar21;
          pFVar29->V = fVar22;
          pFVar29->VL = fVar23;
          pFVar29->OpacityMaskRefVal = fVar24;
          pFVar29->BlendMode = uVar25;
          *(undefined7 *)&pFVar29->field_0x51 = uVar26;
        }
        goto LAB_1476828a4;
      }
LAB_147682895:
      local_378 = pFVar1;
      HeapSortInternal<FBatchedElements::FBatchedSprite,int,FIdentityFunctor,TDereferenceWrapper<FBatchedElements::FBatchedSprite,_FBatchedElements::Draw_::__l125::FCompareSprite>_>
                (pFVar34,iVar28,param_3,param_4);
LAB_1476828a4:
      ppFVar35 = ppFVar35 + -3;
    } while (&local_368 <= ppFVar35);
  }
  return;
code_r0x00014768267c:
  bVar2 = pFVar30[1].BlendMode;
  bVar3 = pFVar33->BlendMode;
  if (bVar3 == bVar2) {
    bVar36 = pFVar33->Texture < pFVar30[1].Texture;
  }
  else {
    bVar27 = (byte)(param_4.Predicate)->ValidBlendFilter;
    bVar36 = (bVar27 & bVar3) != 0;
    if (bVar36 == ((bVar27 & bVar2) != 0)) {
      bVar36 = bVar3 < bVar2;
    }
  }
  if (!bVar36) goto LAB_147682670;
LAB_1476826b3:
  do {
    pFVar32 = pFVar31;
    pFVar31 = pFVar32 + -1;
    if (pFVar31 <= pFVar33) break;
    bVar2 = pFVar33->BlendMode;
    bVar3 = pFVar32[-1].BlendMode;
    if (bVar3 == bVar2) {
      bVar36 = pFVar32[-1].Texture < pFVar33->Texture;
    }
    else {
      bVar27 = (byte)(param_4.Predicate)->ValidBlendFilter;
      bVar36 = (bVar27 & bVar3) != 0;
      if (bVar36 == ((bVar27 & bVar2) != 0)) {
        bVar36 = bVar3 < bVar2;
      }
    }
  } while (!bVar36);
  dVar4 = (pFVar31->Position).field0_0x0._s_0.X;
  dVar5 = pFVar32[-1].Position.field0_0x0._s_0.Y;
  if (pFVar34 <= pFVar31) {
    dVar6 = (pFVar34->Position).field0_0x0._s_0.X;
    dVar7 = pFVar30[1].Position.field0_0x0._s_0.Y;
    dVar12 = pFVar30[1].Position.field0_0x0._s_0.Z;
    fVar17 = pFVar30[1].SizeX;
    fVar18 = pFVar30[1].SizeY;
    pFVar8 = pFVar30[1].Texture;
    uVar9 = *(undefined8 *)&pFVar30[1].Color.field0_0x0;
    uVar10 = *(undefined8 *)((longlong)&pFVar30[1].Color.field0_0x0 + 8);
    FVar19.field0_0x0 = pFVar30[1].HitProxyColor.field0_0x0;
    fVar20 = pFVar30[1].U;
    fVar21 = pFVar30[1].UL;
    fVar22 = pFVar30[1].V;
    fVar23 = pFVar30[1].VL;
    fVar24 = pFVar30[1].OpacityMaskRefVal;
    uVar25 = pFVar30[1].BlendMode;
    uVar26 = *(undefined7 *)&pFVar30[1].field_0x51;
    (pFVar34->Position).field0_0x0._s_0.X = dVar4;
    pFVar30[1].Position.field0_0x0._s_0.Y = dVar5;
    fVar37 = pFVar32[-1].SizeX;
    fVar13 = pFVar32[-1].SizeY;
    pFVar30[1].Position.field0_0x0._s_0.Z = pFVar32[-1].Position.field0_0x0._s_0.Z;
    pFVar30[1].SizeX = fVar37;
    pFVar30[1].SizeY = fVar13;
    uVar11 = *(undefined8 *)&pFVar32[-1].Color.field0_0x0;
    pFVar30[1].Texture = pFVar32[-1].Texture;
    *(undefined8 *)&pFVar30[1].Color.field0_0x0 = uVar11;
    FVar14.field0_0x0 = pFVar32[-1].HitProxyColor.field0_0x0;
    fVar37 = pFVar32[-1].U;
    *(undefined8 *)((longlong)&pFVar30[1].Color.field0_0x0 + 8) =
         *(undefined8 *)((longlong)&pFVar32[-1].Color.field0_0x0 + 8);
    pFVar30[1].HitProxyColor = (FColor)FVar14.field0_0x0;
    pFVar30[1].U = fVar37;
    fVar37 = pFVar32[-1].V;
    fVar13 = pFVar32[-1].VL;
    fVar15 = pFVar32[-1].OpacityMaskRefVal;
    pFVar30[1].UL = pFVar32[-1].UL;
    pFVar30[1].V = fVar37;
    pFVar30[1].VL = fVar13;
    pFVar30[1].OpacityMaskRefVal = fVar15;
    uVar16 = *(undefined7 *)&pFVar32[-1].field_0x51;
    pFVar30[1].BlendMode = pFVar32[-1].BlendMode;
    *(undefined7 *)&pFVar30[1].field_0x51 = uVar16;
    (pFVar31->Position).field0_0x0._s_0.X = dVar6;
    pFVar32[-1].Position.field0_0x0._s_0.Y = dVar7;
    pFVar32[-1].Position.field0_0x0._s_0.Z = dVar12;
    pFVar32[-1].SizeX = fVar17;
    pFVar32[-1].SizeY = fVar18;
    pFVar32[-1].Texture = pFVar8;
    *(undefined8 *)&pFVar32[-1].Color.field0_0x0 = uVar9;
    *(undefined8 *)((longlong)&pFVar32[-1].Color.field0_0x0 + 8) = uVar10;
    pFVar32[-1].HitProxyColor = (FColor)FVar19.field0_0x0;
    pFVar32[-1].U = fVar20;
    pFVar32[-1].UL = fVar21;
    pFVar32[-1].V = fVar22;
    pFVar32[-1].VL = fVar23;
    pFVar32[-1].OpacityMaskRefVal = fVar24;
    pFVar32[-1].BlendMode = uVar25;
    *(undefined7 *)&pFVar32[-1].field_0x51 = uVar26;
    goto LAB_147682670;
  }
  dVar6 = (pFVar33->Position).field0_0x0._s_0.X;
  dVar7 = (pFVar33->Position).field0_0x0._s_0.Y;
  dVar12 = (pFVar33->Position).field0_0x0._s_0.Z;
  fVar17 = pFVar33->SizeX;
  fVar18 = pFVar33->SizeY;
  local_378._0_4_ = (int)local_378 + -1;
  pFVar8 = pFVar33->Texture;
  uVar9 = *(undefined8 *)&(pFVar33->Color).field0_0x0;
  uVar10 = *(undefined8 *)((longlong)&(pFVar33->Color).field0_0x0 + 8);
  FVar19.field0_0x0 = (pFVar33->HitProxyColor).field0_0x0;
  fVar20 = pFVar33->U;
  fVar21 = pFVar33->UL;
  fVar22 = pFVar33->V;
  fVar23 = pFVar33->VL;
  fVar24 = pFVar33->OpacityMaskRefVal;
  uVar25 = pFVar33->BlendMode;
  uVar26 = *(undefined7 *)&pFVar33->field_0x51;
  (pFVar33->Position).field0_0x0._s_0.X = dVar4;
  (pFVar33->Position).field0_0x0._s_0.Y = dVar5;
  fVar37 = pFVar32[-1].SizeX;
  fVar13 = pFVar32[-1].SizeY;
  (pFVar33->Position).field0_0x0._s_0.Z = pFVar32[-1].Position.field0_0x0._s_0.Z;
  pFVar33->SizeX = fVar37;
  pFVar33->SizeY = fVar13;
  uVar11 = *(undefined8 *)&pFVar32[-1].Color.field0_0x0;
  pFVar33->Texture = pFVar32[-1].Texture;
  *(undefined8 *)&(pFVar33->Color).field0_0x0 = uVar11;
  FVar14.field0_0x0 = pFVar32[-1].HitProxyColor.field0_0x0;
  fVar37 = pFVar32[-1].U;
  *(undefined8 *)((longlong)&(pFVar33->Color).field0_0x0 + 8) =
       *(undefined8 *)((longlong)&pFVar32[-1].Color.field0_0x0 + 8);
  pFVar33->HitProxyColor = (FColor)FVar14.field0_0x0;
  pFVar33->U = fVar37;
  fVar37 = pFVar32[-1].V;
  fVar13 = pFVar32[-1].VL;
  fVar15 = pFVar32[-1].OpacityMaskRefVal;
  pFVar33->UL = pFVar32[-1].UL;
  pFVar33->V = fVar37;
  pFVar33->VL = fVar13;
  pFVar33->OpacityMaskRefVal = fVar15;
  uVar16 = *(undefined7 *)&pFVar32[-1].field_0x51;
  pFVar33->BlendMode = pFVar32[-1].BlendMode;
  *(undefined7 *)&pFVar33->field_0x51 = uVar16;
  (pFVar31->Position).field0_0x0._s_0.X = dVar6;
  pFVar32[-1].Position.field0_0x0._s_0.Y = dVar7;
  pFVar32[-1].Position.field0_0x0._s_0.Z = dVar12;
  pFVar32[-1].SizeX = fVar17;
  pFVar32[-1].SizeY = fVar18;
  pFVar32[-1].Texture = pFVar8;
  *(undefined8 *)&pFVar32[-1].Color.field0_0x0 = uVar9;
  *(undefined8 *)((longlong)&pFVar32[-1].Color.field0_0x0 + 8) = uVar10;
  pFVar32[-1].HitProxyColor = (FColor)FVar19.field0_0x0;
  pFVar32[-1].U = fVar20;
  pFVar32[-1].UL = fVar21;
  pFVar32[-1].V = fVar22;
  pFVar32[-1].VL = fVar23;
  pFVar32[-1].OpacityMaskRefVal = fVar24;
  pFVar32[-1].BlendMode = uVar25;
  *(undefined7 *)&pFVar32[-1].field_0x51 = uVar26;
  if (((longlong)pFVar31 + (-0x58 - (longlong)pFVar33)) / 0x58 <
      ((longlong)pFVar29 - (longlong)pFVar34) / 0x58) {
    if (pFVar34 < pFVar29) {
      *ppFVar35 = pFVar34;
      ppFVar35[1] = pFVar29;
      *(int *)(ppFVar35 + 2) = (int)local_378;
      ppFVar35 = ppFVar35 + 3;
    }
    if (pFVar31 <= pFVar33 + 1) goto LAB_1476828a4;
    pFVar29 = pFVar32 + -2;
    pFVar34 = pFVar33;
  }
  else {
    if (pFVar33 + 1 < pFVar31) {
      *ppFVar35 = pFVar33;
      ppFVar35[1] = pFVar32 + -2;
      *(int *)(ppFVar35 + 2) = (int)local_378;
      ppFVar35 = ppFVar35 + 3;
    }
    if (pFVar29 <= pFVar34) goto LAB_1476828a4;
  }
  iVar28 = (int)(((longlong)pFVar29 - (longlong)pFVar34) / 0x58) + 1;
  pFVar33 = pFVar34;
  if ((int)local_378 == 0) goto LAB_147682895;
  goto LAB_1476825e0;
}

// IntroSortInternal<`FAudioChunkCache::FlushCacheMissLog'::__l2::FMissedChunk,int,FIdentityFunctor,TDereferenceWrapper<`FAudioChunkCache::FlushCacheMissLog'::__l2::FMissedChunk,`FAudioChunkCache::FlushCacheMissLog'::__l2::FCacheMissSortPredicate>_> @ 1476829f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<_FAudioChunkCache::FlushCacheMissLog_::__l2::FMissedChunk,int,FIdentityFunctor,TDereferenceWrapper<_FAudioChunkCache::FlushCacheMissLog_::__l2::FMissedChunk,_FAudioChunkCache::FlushCacheMissLog_::__l2::FCacheMissSortPredicate>_>
          (FMissedChunk *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<_public:_class_FString___cdecl_FAudioChunkCache::FlushCacheMissLog(void)_::_2_::FMissedChunk,_public:_class_FString___cdecl_FAudioChunkCache::FlushCacheMissLog(void)_::_2_::FCacheMissSortPredicate>
          param_4)

{
  FMissedChunk *pFVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  FName FVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  FMissedChunk *pFVar10;
  FMissedChunk **ppFVar11;
  FMissedChunk *pFVar12;
  FMissedChunk *pFVar13;
  FMissedChunk *pFVar14;
  FMissedChunk *pFVar15;
  FMissedChunk *pFVar16;
  float fVar17;
  undefined1 auStack_368 [48];
  FMissedChunk *local_338;
  FMissedChunk *local_328;
  FMissedChunk *local_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = __security_cookie.value ^ (ulonglong)auStack_368;
    local_320 = param_1 + (longlong)param_2 + -1;
    local_328 = param_1;
    fVar17 = logf((float)param_2 * (float)param_2);
    local_318 = (undefined4)(longlong)fVar17;
    memset(local_310,0,0x2e8);
    ppFVar11 = &local_328;
    do {
      pFVar14 = ppFVar11[1];
      pFVar16 = *ppFVar11;
      pFVar1 = ppFVar11[2];
      iVar9 = (int)((longlong)pFVar14 - (longlong)pFVar16 >> 4) + 1;
      local_338._0_4_ = (int)pFVar1;
      pFVar15 = pFVar16;
      if ((int)local_338 != 0) {
LAB_147682aa0:
        if (8 < iVar9) {
          uVar5 = pFVar15->ChunkIndex;
          iVar6 = pFVar15->MissCount;
          pFVar12 = pFVar14 + 1;
          pFVar16 = pFVar15 + iVar9 / 2;
          FVar4 = pFVar16->SoundWaveName;
          uVar7 = pFVar16->ChunkIndex;
          iVar8 = pFVar16->MissCount;
          pFVar16 = pFVar15 + iVar9 / 2;
          pFVar16->SoundWaveName = pFVar15->SoundWaveName;
          pFVar16->ChunkIndex = uVar5;
          pFVar16->MissCount = iVar6;
          pFVar15->SoundWaveName = FVar4;
          pFVar15->ChunkIndex = uVar7;
          pFVar15->MissCount = iVar8;
          pFVar16 = pFVar15;
LAB_147682ad0:
          pFVar10 = pFVar16;
          pFVar16 = pFVar10 + 1;
          if (pFVar16 <= pFVar14) goto code_r0x000147682ad9;
          goto LAB_147682ae2;
        }
        for (; pFVar16 = pFVar15, pFVar1 = pFVar15, pFVar15 < pFVar14; pFVar14 = pFVar14 + -1) {
          while (pFVar1 = pFVar1 + 1, pFVar1 <= pFVar14) {
            if (pFVar1->MissCount < pFVar16->MissCount) {
              pFVar16 = pFVar1;
            }
          }
          FVar4 = pFVar16->SoundWaveName;
          uVar7 = pFVar16->ChunkIndex;
          iVar6 = pFVar16->MissCount;
          uVar5 = pFVar14->ChunkIndex;
          iVar9 = pFVar14->MissCount;
          pFVar16->SoundWaveName = pFVar14->SoundWaveName;
          pFVar16->ChunkIndex = uVar5;
          pFVar16->MissCount = iVar9;
          pFVar14->SoundWaveName = FVar4;
          pFVar14->ChunkIndex = uVar7;
          pFVar14->MissCount = iVar6;
        }
        goto LAB_147682ba3;
      }
LAB_147682b92:
      local_338 = pFVar1;
      HeapSortInternal<_FAudioChunkCache::FlushCacheMissLog_::__l2::FMissedChunk,int,FIdentityFunctor,TDereferenceWrapper<_FAudioChunkCache::FlushCacheMissLog_::__l2::FMissedChunk,_FAudioChunkCache::FlushCacheMissLog_::__l2::FCacheMissSortPredicate>_>
                (pFVar16,iVar9,param_3,param_4);
LAB_147682ba3:
      ppFVar11 = ppFVar11 + -3;
    } while (&local_328 <= ppFVar11);
  }
  return;
code_r0x000147682ad9:
  if (pFVar15->MissCount <= pFVar10[1].MissCount) goto LAB_147682ad0;
LAB_147682ae2:
  do {
    pFVar13 = pFVar12;
    pFVar12 = pFVar13 + -1;
    if (pFVar12 <= pFVar15) break;
  } while (pFVar13[-1].MissCount <= pFVar15->MissCount);
  uVar2 = pFVar13[-1].ChunkIndex;
  uVar3 = pFVar13[-1].MissCount;
  if (pFVar16 <= pFVar12) {
    FVar4 = pFVar16->SoundWaveName;
    uVar5 = pFVar10[1].ChunkIndex;
    iVar9 = pFVar10[1].MissCount;
    pFVar16->SoundWaveName = pFVar12->SoundWaveName;
    pFVar10[1].ChunkIndex = uVar2;
    pFVar10[1].MissCount = uVar3;
    pFVar12->SoundWaveName = FVar4;
    pFVar13[-1].ChunkIndex = uVar5;
    pFVar13[-1].MissCount = iVar9;
    goto LAB_147682ad0;
  }
  FVar4 = pFVar15->SoundWaveName;
  uVar5 = pFVar15->ChunkIndex;
  iVar9 = pFVar15->MissCount;
  local_338._0_4_ = (int)local_338 + -1;
  pFVar15->SoundWaveName = pFVar12->SoundWaveName;
  pFVar15->ChunkIndex = uVar2;
  pFVar15->MissCount = uVar3;
  pFVar12->SoundWaveName = FVar4;
  pFVar13[-1].ChunkIndex = uVar5;
  pFVar13[-1].MissCount = iVar9;
  if ((longlong)((longlong)pFVar12 + (-0x10 - (longlong)pFVar15) & 0xfffffffffffffff0U) <
      (longlong)((longlong)pFVar14 - (longlong)pFVar16 & 0xfffffffffffffff0U)) {
    if (pFVar16 < pFVar14) {
      *ppFVar11 = pFVar16;
      ppFVar11[1] = pFVar14;
      *(int *)(ppFVar11 + 2) = (int)local_338;
      ppFVar11 = ppFVar11 + 3;
    }
    if (pFVar12 <= pFVar15 + 1) goto LAB_147682ba3;
    pFVar14 = pFVar13 + -2;
    pFVar16 = pFVar15;
  }
  else {
    if (pFVar15 + 1 < pFVar12) {
      *ppFVar11 = pFVar15;
      ppFVar11[1] = pFVar13 + -2;
      *(int *)(ppFVar11 + 2) = (int)local_338;
      ppFVar11 = ppFVar11 + 3;
    }
    if (pFVar14 <= pFVar16) goto LAB_147682ba3;
  }
  iVar9 = (int)((longlong)pFVar14 - (longlong)pFVar16 >> 4) + 1;
  pFVar15 = pFVar16;
  if ((int)local_338 == 0) goto LAB_147682b92;
  goto LAB_147682aa0;
}

// IntroSortInternal<FAudioChunkCache,int,FIdentityFunctor,TDereferenceWrapper<FAudioChunkCache,TLess<void>_>_> @ 147682c30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */

void __cdecl
AlgoImpl::
IntroSortInternal<FAudioChunkCache,int,FIdentityFunctor,TDereferenceWrapper<FAudioChunkCache,TLess<void>_>_>
          (FAudioChunkCache *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FAudioChunkCache,TLess<void>_> param_4)

{
  code *pcVar1;
  FScriptContainerElement *pFVar2;
  undefined8 uVar3;
  FCacheElement *pFVar4;
  FCacheElement *pFVar5;
  undefined8 uVar6;
  TAtomic<unsigned___int64> *pTVar7;
  ulong64 uVar8;
  TAtomic<unsigned___int64> *pTVar9;
  TAtomic<unsigned___int64> *pTVar10;
  void *pvVar11;
  void *pvVar12;
  void *pvVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  FThreadSafeCounter FVar16;
  undefined4 uVar17;
  bool bVar18;
  int iVar19;
  FAudioChunkCache *pFVar20;
  FAudioChunkCache *pFVar21;
  FAudioChunkCache *pFVar22;
  FAudioChunkCache *pFVar23;
  FAudioChunkCache *pFVar24;
  FAudioChunkCache *pFVar25;
  undefined8 *puVar26;
  undefined8 *puVar27;
  undefined8 *puVar28;
  FAudioChunkCache *pFVar29;
  undefined8 *puVar30;
  FAudioChunkCache *pFVar31;
  longlong lVar32;
  longlong lVar33;
  FAudioChunkCache *pFVar34;
  FAudioChunkCache *pFVar35;
  FAudioChunkCache **ppFVar36;
  int iVar37;
  float fVar38;
  undefined1 auStackY_518 [32];
  FIdentityFunctor local_4e8 [8];
  FIdentityFunctor local_4e0 [8];
  TDereferenceWrapper<FAudioChunkCache,TLess<void>_> local_4d8;
  TReversePredicate<TDereferenceWrapper<FAudioChunkCache,TLess<void>_>_> local_4d0;
  TReversePredicate<TDereferenceWrapper<FAudioChunkCache,TLess<void>_>_> local_4c8 [3];
  FAudioChunkCache *local_4b0;
  undefined8 local_4a8 [44];
  FAudioChunkCache *local_348;
  FAudioChunkCache *local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = __security_cookie.value ^ (ulonglong)auStackY_518;
    local_340 = param_1 + (longlong)param_2 + -1;
    local_348 = param_1;
    fVar38 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar38;
    memset(local_330,0,0x2e8);
    ppFVar36 = &local_348;
    do {
      pFVar35 = ppFVar36[1];
      pFVar20 = *ppFVar36;
      pFVar25 = ppFVar36[2];
      local_4b0._0_4_ = (int)pFVar25;
      iVar37 = (int)(((longlong)pFVar35 - (longlong)pFVar20) / 0x160) + 1;
      pFVar31 = pFVar20;
      if ((int)local_4b0 != 0) {
LAB_147682d24:
        if (8 < iVar37) {
          lVar32 = 2;
          pFVar20 = pFVar31 + iVar37 / 2;
          puVar28 = local_4a8;
          do {
            puVar27 = puVar28;
            pFVar21 = pFVar20;
            pFVar2 = (pFVar21->CachePool).AllocatorInstance.Data;
            uVar3 = *(undefined8 *)&(pFVar21->CachePool).ArrayNum;
            pFVar4 = pFVar21->MostRecentElement;
            pFVar20 = (FAudioChunkCache *)
                      ((pFVar21->CacheMutationCriticalSection).Value.CriticalSection.Opaque3 + 2);
            *puVar27 = *(undefined8 *)pFVar21;
            puVar27[1] = pFVar2;
            pFVar5 = pFVar21->LeastRecentElement;
            uVar6 = *(undefined8 *)&pFVar21->ChunksInUse;
            puVar27[2] = uVar3;
            puVar27[3] = pFVar4;
            pTVar7 = (pFVar21->MemoryCounterBytes).Obj.Ptr;
            uVar8 = pFVar21->MemoryLimitBytes;
            puVar27[4] = pFVar5;
            puVar27[5] = uVar6;
            pTVar9 = (pFVar21->ForceInlineMemoryCounterBytes).Obj.Ptr;
            pTVar10 = (pFVar21->FeatureMemoryCounterBytes).Obj.Ptr;
            puVar27[6] = pTVar7;
            puVar27[7] = uVar8;
            uVar3 = *(undefined8 *)&pFVar21->NumberOfLoadsInFlight;
            uVar8 = pFVar21->TimeOfBeginPlayCycles;
            puVar27[8] = pTVar9;
            puVar27[9] = pTVar10;
            pvVar11 = (pFVar21->CacheMutationCriticalSection).Value.CriticalSection.Opaque1[0];
            uVar6 = *(undefined8 *)
                     (pFVar21->CacheMutationCriticalSection).Value.CriticalSection.Opaque2;
            puVar27[10] = uVar3;
            puVar27[0xb] = uVar8;
            pvVar12 = (pFVar21->CacheMutationCriticalSection).Value.CriticalSection.Opaque3[0];
            pvVar13 = (pFVar21->CacheMutationCriticalSection).Value.CriticalSection.Opaque3[1];
            puVar27[0xc] = pvVar11;
            puVar27[0xd] = uVar6;
            puVar27[0xe] = pvVar12;
            puVar27[0xf] = pvVar13;
            lVar32 = lVar32 + -1;
            puVar28 = puVar27 + 0x10;
          } while (lVar32 != 0);
          uVar3 = *(undefined8 *)&pFVar21->CacheLookupIdMap;
          uVar6 = *(undefined8 *)&(pFVar21->CacheLookupIdMap).field_0x8;
          uVar14 = *(undefined8 *)&(pFVar21->CacheLookupIdMap).field_0x10;
          puVar27[0x10] = *(void **)pFVar20;
          puVar27[0x11] = uVar3;
          uVar3 = *(undefined8 *)&(pFVar21->CacheLookupIdMap).field_0x18;
          uVar15 = *(undefined8 *)&(pFVar21->CacheLookupIdMap).field_0x20;
          puVar27[0x12] = uVar6;
          puVar27[0x13] = uVar14;
          uVar6 = *(undefined8 *)&(pFVar21->CacheLookupIdMap).field_0x28;
          uVar14 = *(undefined8 *)&(pFVar21->CacheLookupIdMap).field_0x30;
          puVar27[0x14] = uVar3;
          puVar27[0x15] = uVar15;
          uVar3 = *(undefined8 *)&(pFVar21->CacheLookupIdMap).field_0x38;
          uVar15 = *(undefined8 *)&(pFVar21->CacheLookupIdMap).field_0x40;
          puVar27[0x16] = uVar6;
          puVar27[0x17] = uVar14;
          uVar6 = *(undefined8 *)&(pFVar21->CacheLookupIdMap).field_0x48;
          uVar14 = *(undefined8 *)&pFVar21->SoundWaveTracker;
          puVar27[0x18] = uVar3;
          puVar27[0x19] = uVar15;
          puVar27[0x1a] = uVar6;
          puVar27[0x1b] = uVar14;
          lVar32 = 2;
          pFVar20 = pFVar31 + iVar37 / 2;
          pFVar21 = pFVar31;
          do {
            pFVar22 = pFVar21;
            pFVar34 = pFVar20;
            pFVar20 = (FAudioChunkCache *)
                      ((pFVar34->CacheMutationCriticalSection).Value.CriticalSection.Opaque3 + 2);
            FVar16.Counter = (pFVar22->CacheOverflowCount).Counter;
            pFVar2 = (pFVar22->CachePool).AllocatorInstance.Data;
            pFVar21 = (FAudioChunkCache *)
                      ((pFVar22->CacheMutationCriticalSection).Value.CriticalSection.Opaque3 + 2);
            pFVar34->MaxChunkSize = pFVar22->MaxChunkSize;
            pFVar34->CacheOverflowCount = (FThreadSafeCounter)FVar16.Counter;
            (pFVar34->CachePool).AllocatorInstance.Data = pFVar2;
            iVar37 = (pFVar22->CachePool).ArrayMax;
            pFVar4 = pFVar22->MostRecentElement;
            (pFVar34->CachePool).ArrayNum = (pFVar22->CachePool).ArrayNum;
            (pFVar34->CachePool).ArrayMax = iVar37;
            pFVar34->MostRecentElement = pFVar4;
            iVar37 = pFVar22->ChunksInUse;
            uVar17 = *(undefined4 *)&pFVar22->field_0x2c;
            pFVar34->LeastRecentElement = pFVar22->LeastRecentElement;
            pFVar34->ChunksInUse = iVar37;
            *(undefined4 *)&pFVar34->field_0x2c = uVar17;
            uVar8 = pFVar22->MemoryLimitBytes;
            (pFVar34->MemoryCounterBytes).Obj.Ptr = (pFVar22->MemoryCounterBytes).Obj.Ptr;
            pFVar34->MemoryLimitBytes = uVar8;
            pTVar7 = (pFVar22->FeatureMemoryCounterBytes).Obj.Ptr;
            (pFVar34->ForceInlineMemoryCounterBytes).Obj.Ptr =
                 (pFVar22->ForceInlineMemoryCounterBytes).Obj.Ptr;
            (pFVar34->FeatureMemoryCounterBytes).Obj.Ptr = pTVar7;
            uVar17 = *(undefined4 *)&pFVar22->field_0x54;
            uVar8 = pFVar22->TimeOfBeginPlayCycles;
            pFVar34->NumberOfLoadsInFlight =
                 (FThreadSafeCounter)(pFVar22->NumberOfLoadsInFlight).Counter;
            *(undefined4 *)&pFVar34->field_0x54 = uVar17;
            pFVar34->TimeOfBeginPlayCycles = uVar8;
            uVar3 = *(undefined8 *)
                     (pFVar22->CacheMutationCriticalSection).Value.CriticalSection.Opaque2;
            (pFVar34->CacheMutationCriticalSection).Value.CriticalSection.Opaque1[0] =
                 (pFVar22->CacheMutationCriticalSection).Value.CriticalSection.Opaque1[0];
            *(undefined8 *)(pFVar34->CacheMutationCriticalSection).Value.CriticalSection.Opaque2 =
                 uVar3;
            pvVar11 = (pFVar22->CacheMutationCriticalSection).Value.CriticalSection.Opaque3[1];
            (pFVar34->CacheMutationCriticalSection).Value.CriticalSection.Opaque3[0] =
                 (pFVar22->CacheMutationCriticalSection).Value.CriticalSection.Opaque3[0];
            (pFVar34->CacheMutationCriticalSection).Value.CriticalSection.Opaque3[1] = pvVar11;
            lVar32 = lVar32 + -1;
          } while (lVar32 != 0);
          FVar16.Counter = (pFVar21->CacheOverflowCount).Counter;
          uVar3 = *(undefined8 *)&pFVar22->CacheLookupIdMap;
          lVar32 = 2;
          pFVar20->MaxChunkSize = pFVar21->MaxChunkSize;
          pFVar20->CacheOverflowCount = (FThreadSafeCounter)FVar16.Counter;
          *(undefined8 *)&pFVar34->CacheLookupIdMap = uVar3;
          uVar3 = *(undefined8 *)&(pFVar22->CacheLookupIdMap).field_0x10;
          *(undefined8 *)&(pFVar34->CacheLookupIdMap).field_0x8 =
               *(undefined8 *)&(pFVar22->CacheLookupIdMap).field_0x8;
          *(undefined8 *)&(pFVar34->CacheLookupIdMap).field_0x10 = uVar3;
          uVar3 = *(undefined8 *)&(pFVar22->CacheLookupIdMap).field_0x20;
          *(undefined8 *)&(pFVar34->CacheLookupIdMap).field_0x18 =
               *(undefined8 *)&(pFVar22->CacheLookupIdMap).field_0x18;
          *(undefined8 *)&(pFVar34->CacheLookupIdMap).field_0x20 = uVar3;
          uVar3 = *(undefined8 *)&(pFVar22->CacheLookupIdMap).field_0x30;
          *(undefined8 *)&(pFVar34->CacheLookupIdMap).field_0x28 =
               *(undefined8 *)&(pFVar22->CacheLookupIdMap).field_0x28;
          *(undefined8 *)&(pFVar34->CacheLookupIdMap).field_0x30 = uVar3;
          uVar3 = *(undefined8 *)&(pFVar22->CacheLookupIdMap).field_0x40;
          *(undefined8 *)&(pFVar34->CacheLookupIdMap).field_0x38 =
               *(undefined8 *)&(pFVar22->CacheLookupIdMap).field_0x38;
          *(undefined8 *)&(pFVar34->CacheLookupIdMap).field_0x40 = uVar3;
          uVar3 = *(undefined8 *)&pFVar22->SoundWaveTracker;
          *(undefined8 *)&(pFVar34->CacheLookupIdMap).field_0x48 =
               *(undefined8 *)&(pFVar22->CacheLookupIdMap).field_0x48;
          *(undefined8 *)&pFVar34->SoundWaveTracker = uVar3;
          pFVar20 = pFVar31;
          puVar28 = local_4a8;
          do {
            pFVar21 = (FAudioChunkCache *)
                      ((pFVar20->CacheMutationCriticalSection).Value.CriticalSection.Opaque3 + 2);
            pFVar2 = (FScriptContainerElement *)puVar28[1];
            uVar3 = puVar28[2];
            pFVar4 = (FCacheElement *)puVar28[3];
            puVar27 = puVar28 + 0x10;
            *(void **)pFVar20 = (void *)*puVar28;
            (pFVar20->CachePool).AllocatorInstance.Data = pFVar2;
            pFVar5 = (FCacheElement *)puVar28[4];
            uVar6 = puVar28[5];
            (pFVar20->CachePool).ArrayNum = (int)uVar3;
            (pFVar20->CachePool).ArrayMax = (int)((ulonglong)uVar3 >> 0x20);
            pFVar20->MostRecentElement = pFVar4;
            pTVar7 = (TAtomic<unsigned___int64> *)puVar28[6];
            uVar8 = puVar28[7];
            pFVar20->LeastRecentElement = pFVar5;
            *(undefined8 *)&pFVar20->ChunksInUse = uVar6;
            pTVar9 = (TAtomic<unsigned___int64> *)puVar28[8];
            pTVar10 = (TAtomic<unsigned___int64> *)puVar28[9];
            (pFVar20->MemoryCounterBytes).Obj.Ptr = pTVar7;
            pFVar20->MemoryLimitBytes = uVar8;
            uVar3 = puVar28[10];
            uVar8 = puVar28[0xb];
            (pFVar20->ForceInlineMemoryCounterBytes).Obj.Ptr = pTVar9;
            (pFVar20->FeatureMemoryCounterBytes).Obj.Ptr = pTVar10;
            pvVar11 = (void *)puVar28[0xc];
            uVar6 = puVar28[0xd];
            *(undefined8 *)&pFVar20->NumberOfLoadsInFlight = uVar3;
            pFVar20->TimeOfBeginPlayCycles = uVar8;
            pvVar12 = (void *)puVar28[0xe];
            pvVar13 = (void *)puVar28[0xf];
            (pFVar20->CacheMutationCriticalSection).Value.CriticalSection.Opaque1[0] = pvVar11;
            *(undefined8 *)(pFVar20->CacheMutationCriticalSection).Value.CriticalSection.Opaque2 =
                 uVar6;
            (pFVar20->CacheMutationCriticalSection).Value.CriticalSection.Opaque3[0] = pvVar12;
            (pFVar20->CacheMutationCriticalSection).Value.CriticalSection.Opaque3[1] = pvVar13;
            lVar32 = lVar32 + -1;
            pFVar20 = pFVar21;
            puVar28 = puVar27;
          } while (lVar32 != 0);
          pFVar34 = pFVar35 + 1;
          pFVar20 = pFVar31;
          do {
            pFVar2 = (FScriptContainerElement *)puVar27[1];
            uVar3 = puVar27[2];
            pFVar4 = (FCacheElement *)puVar27[3];
            *(void **)pFVar21 = (void *)*puVar27;
            (pFVar21->CachePool).AllocatorInstance.Data = pFVar2;
            pFVar5 = (FCacheElement *)puVar27[4];
            uVar6 = puVar27[5];
            (pFVar21->CachePool).ArrayNum = (int)uVar3;
            (pFVar21->CachePool).ArrayMax = (int)((ulonglong)uVar3 >> 0x20);
            pFVar21->MostRecentElement = pFVar4;
            pTVar7 = (TAtomic<unsigned___int64> *)puVar27[6];
            uVar8 = puVar27[7];
            pFVar21->LeastRecentElement = pFVar5;
            *(undefined8 *)&pFVar21->ChunksInUse = uVar6;
            pTVar9 = (TAtomic<unsigned___int64> *)puVar27[8];
            pTVar10 = (TAtomic<unsigned___int64> *)puVar27[9];
            (pFVar21->MemoryCounterBytes).Obj.Ptr = pTVar7;
            pFVar21->MemoryLimitBytes = uVar8;
            uVar3 = puVar27[10];
            uVar8 = puVar27[0xb];
            (pFVar21->ForceInlineMemoryCounterBytes).Obj.Ptr = pTVar9;
            (pFVar21->FeatureMemoryCounterBytes).Obj.Ptr = pTVar10;
            *(undefined8 *)&pFVar21->NumberOfLoadsInFlight = uVar3;
            pFVar21->TimeOfBeginPlayCycles = uVar8;
            do {
              pFVar20 = pFVar20 + 1;
              if (pFVar35 < pFVar20) break;
            } while (pFVar20->MaxChunkSize <= pFVar31->MaxChunkSize);
            do {
              pFVar21 = pFVar34;
              pFVar34 = pFVar21 + -1;
              if (pFVar34 <= pFVar31) break;
            } while (pFVar31->MaxChunkSize <= pFVar34->MaxChunkSize);
            lVar32 = 2;
            pFVar24 = pFVar31;
            pFVar22 = pFVar20;
            puVar28 = local_4a8;
            if (pFVar34 < pFVar20) goto LAB_1476830c0;
            do {
              puVar27 = puVar28;
              pFVar21 = pFVar22;
              pFVar2 = (pFVar21->CachePool).AllocatorInstance.Data;
              uVar3 = *(undefined8 *)&(pFVar21->CachePool).ArrayNum;
              pFVar4 = pFVar21->MostRecentElement;
              pFVar22 = (FAudioChunkCache *)
                        ((pFVar21->CacheMutationCriticalSection).Value.CriticalSection.Opaque3 + 2);
              *puVar27 = *(undefined8 *)pFVar21;
              puVar27[1] = pFVar2;
              pFVar5 = pFVar21->LeastRecentElement;
              uVar6 = *(undefined8 *)&pFVar21->ChunksInUse;
              puVar27[2] = uVar3;
              puVar27[3] = pFVar4;
              pTVar7 = (pFVar21->MemoryCounterBytes).Obj.Ptr;
              uVar8 = pFVar21->MemoryLimitBytes;
              puVar27[4] = pFVar5;
              puVar27[5] = uVar6;
              pTVar9 = (pFVar21->ForceInlineMemoryCounterBytes).Obj.Ptr;
              pTVar10 = (pFVar21->FeatureMemoryCounterBytes).Obj.Ptr;
              puVar27[6] = pTVar7;
              puVar27[7] = uVar8;
              uVar3 = *(undefined8 *)&pFVar21->NumberOfLoadsInFlight;
              uVar8 = pFVar21->TimeOfBeginPlayCycles;
              puVar27[8] = pTVar9;
              puVar27[9] = pTVar10;
              pvVar11 = (pFVar21->CacheMutationCriticalSection).Value.CriticalSection.Opaque1[0];
              uVar6 = *(undefined8 *)
                       (pFVar21->CacheMutationCriticalSection).Value.CriticalSection.Opaque2;
              puVar27[10] = uVar3;
              puVar27[0xb] = uVar8;
              pvVar12 = (pFVar21->CacheMutationCriticalSection).Value.CriticalSection.Opaque3[0];
              pvVar13 = (pFVar21->CacheMutationCriticalSection).Value.CriticalSection.Opaque3[1];
              puVar27[0xc] = pvVar11;
              puVar27[0xd] = uVar6;
              puVar27[0xe] = pvVar12;
              puVar27[0xf] = pvVar13;
              lVar32 = lVar32 + -1;
              puVar28 = puVar27 + 0x10;
            } while (lVar32 != 0);
            uVar3 = *(undefined8 *)&pFVar21->CacheLookupIdMap;
            lVar32 = 2;
            uVar6 = *(undefined8 *)&(pFVar21->CacheLookupIdMap).field_0x8;
            uVar14 = *(undefined8 *)&(pFVar21->CacheLookupIdMap).field_0x10;
            puVar27[0x10] = *(void **)pFVar22;
            puVar27[0x11] = uVar3;
            uVar3 = *(undefined8 *)&(pFVar21->CacheLookupIdMap).field_0x18;
            uVar15 = *(undefined8 *)&(pFVar21->CacheLookupIdMap).field_0x20;
            puVar27[0x12] = uVar6;
            puVar27[0x13] = uVar14;
            uVar6 = *(undefined8 *)&(pFVar21->CacheLookupIdMap).field_0x28;
            uVar14 = *(undefined8 *)&(pFVar21->CacheLookupIdMap).field_0x30;
            puVar27[0x14] = uVar3;
            puVar27[0x15] = uVar15;
            uVar3 = *(undefined8 *)&(pFVar21->CacheLookupIdMap).field_0x38;
            uVar15 = *(undefined8 *)&(pFVar21->CacheLookupIdMap).field_0x40;
            puVar27[0x16] = uVar6;
            puVar27[0x17] = uVar14;
            uVar6 = *(undefined8 *)&(pFVar21->CacheLookupIdMap).field_0x48;
            uVar14 = *(undefined8 *)&pFVar21->SoundWaveTracker;
            puVar27[0x18] = uVar3;
            puVar27[0x19] = uVar15;
            puVar27[0x1a] = uVar6;
            puVar27[0x1b] = uVar14;
            pFVar21 = pFVar20;
            pFVar22 = pFVar34;
            do {
              pFVar23 = pFVar22;
              pFVar24 = pFVar21;
              pFVar21 = (FAudioChunkCache *)
                        ((pFVar24->CacheMutationCriticalSection).Value.CriticalSection.Opaque3 + 2);
              FVar16.Counter = (pFVar23->CacheOverflowCount).Counter;
              pFVar2 = (pFVar23->CachePool).AllocatorInstance.Data;
              pFVar22 = (FAudioChunkCache *)
                        ((pFVar23->CacheMutationCriticalSection).Value.CriticalSection.Opaque3 + 2);
              pFVar24->MaxChunkSize = pFVar23->MaxChunkSize;
              pFVar24->CacheOverflowCount = (FThreadSafeCounter)FVar16.Counter;
              (pFVar24->CachePool).AllocatorInstance.Data = pFVar2;
              iVar37 = (pFVar23->CachePool).ArrayMax;
              pFVar4 = pFVar23->MostRecentElement;
              (pFVar24->CachePool).ArrayNum = (pFVar23->CachePool).ArrayNum;
              (pFVar24->CachePool).ArrayMax = iVar37;
              pFVar24->MostRecentElement = pFVar4;
              iVar37 = pFVar23->ChunksInUse;
              uVar17 = *(undefined4 *)&pFVar23->field_0x2c;
              pFVar24->LeastRecentElement = pFVar23->LeastRecentElement;
              pFVar24->ChunksInUse = iVar37;
              *(undefined4 *)&pFVar24->field_0x2c = uVar17;
              uVar8 = pFVar23->MemoryLimitBytes;
              (pFVar24->MemoryCounterBytes).Obj.Ptr = (pFVar23->MemoryCounterBytes).Obj.Ptr;
              pFVar24->MemoryLimitBytes = uVar8;
              pTVar7 = (pFVar23->FeatureMemoryCounterBytes).Obj.Ptr;
              (pFVar24->ForceInlineMemoryCounterBytes).Obj.Ptr =
                   (pFVar23->ForceInlineMemoryCounterBytes).Obj.Ptr;
              (pFVar24->FeatureMemoryCounterBytes).Obj.Ptr = pTVar7;
              uVar17 = *(undefined4 *)&pFVar23->field_0x54;
              uVar8 = pFVar23->TimeOfBeginPlayCycles;
              pFVar24->NumberOfLoadsInFlight =
                   (FThreadSafeCounter)(pFVar23->NumberOfLoadsInFlight).Counter;
              *(undefined4 *)&pFVar24->field_0x54 = uVar17;
              pFVar24->TimeOfBeginPlayCycles = uVar8;
              uVar3 = *(undefined8 *)
                       (pFVar23->CacheMutationCriticalSection).Value.CriticalSection.Opaque2;
              (pFVar24->CacheMutationCriticalSection).Value.CriticalSection.Opaque1[0] =
                   (pFVar23->CacheMutationCriticalSection).Value.CriticalSection.Opaque1[0];
              *(undefined8 *)(pFVar24->CacheMutationCriticalSection).Value.CriticalSection.Opaque2 =
                   uVar3;
              pvVar11 = (pFVar23->CacheMutationCriticalSection).Value.CriticalSection.Opaque3[1];
              (pFVar24->CacheMutationCriticalSection).Value.CriticalSection.Opaque3[0] =
                   (pFVar23->CacheMutationCriticalSection).Value.CriticalSection.Opaque3[0];
              (pFVar24->CacheMutationCriticalSection).Value.CriticalSection.Opaque3[1] = pvVar11;
              lVar32 = lVar32 + -1;
            } while (lVar32 != 0);
            FVar16.Counter = (pFVar22->CacheOverflowCount).Counter;
            uVar3 = *(undefined8 *)&pFVar23->CacheLookupIdMap;
            lVar32 = 2;
            pFVar21->MaxChunkSize = pFVar22->MaxChunkSize;
            pFVar21->CacheOverflowCount = (FThreadSafeCounter)FVar16.Counter;
            *(undefined8 *)&pFVar24->CacheLookupIdMap = uVar3;
            uVar3 = *(undefined8 *)&(pFVar23->CacheLookupIdMap).field_0x10;
            *(undefined8 *)&(pFVar24->CacheLookupIdMap).field_0x8 =
                 *(undefined8 *)&(pFVar23->CacheLookupIdMap).field_0x8;
            *(undefined8 *)&(pFVar24->CacheLookupIdMap).field_0x10 = uVar3;
            uVar3 = *(undefined8 *)&(pFVar23->CacheLookupIdMap).field_0x20;
            *(undefined8 *)&(pFVar24->CacheLookupIdMap).field_0x18 =
                 *(undefined8 *)&(pFVar23->CacheLookupIdMap).field_0x18;
            *(undefined8 *)&(pFVar24->CacheLookupIdMap).field_0x20 = uVar3;
            uVar3 = *(undefined8 *)&(pFVar23->CacheLookupIdMap).field_0x30;
            *(undefined8 *)&(pFVar24->CacheLookupIdMap).field_0x28 =
                 *(undefined8 *)&(pFVar23->CacheLookupIdMap).field_0x28;
            *(undefined8 *)&(pFVar24->CacheLookupIdMap).field_0x30 = uVar3;
            uVar3 = *(undefined8 *)&(pFVar23->CacheLookupIdMap).field_0x40;
            *(undefined8 *)&(pFVar24->CacheLookupIdMap).field_0x38 =
                 *(undefined8 *)&(pFVar23->CacheLookupIdMap).field_0x38;
            *(undefined8 *)&(pFVar24->CacheLookupIdMap).field_0x40 = uVar3;
            uVar3 = *(undefined8 *)&pFVar23->SoundWaveTracker;
            *(undefined8 *)&(pFVar24->CacheLookupIdMap).field_0x48 =
                 *(undefined8 *)&(pFVar23->CacheLookupIdMap).field_0x48;
            *(undefined8 *)&pFVar24->SoundWaveTracker = uVar3;
            pFVar22 = pFVar34;
            puVar28 = local_4a8;
            do {
              pFVar21 = (FAudioChunkCache *)
                        ((pFVar22->CacheMutationCriticalSection).Value.CriticalSection.Opaque3 + 2);
              uVar3 = *puVar28;
              pFVar2 = (FScriptContainerElement *)puVar28[1];
              uVar6 = puVar28[2];
              pFVar4 = (FCacheElement *)puVar28[3];
              puVar27 = puVar28 + 0x10;
              pFVar22->MaxChunkSize = (int)uVar3;
              pFVar22->CacheOverflowCount = (FThreadSafeCounter)(int)((ulonglong)uVar3 >> 0x20);
              (pFVar22->CachePool).AllocatorInstance.Data = pFVar2;
              pFVar5 = (FCacheElement *)puVar28[4];
              uVar3 = puVar28[5];
              (pFVar22->CachePool).ArrayNum = (int)uVar6;
              (pFVar22->CachePool).ArrayMax = (int)((ulonglong)uVar6 >> 0x20);
              pFVar22->MostRecentElement = pFVar4;
              pTVar7 = (TAtomic<unsigned___int64> *)puVar28[6];
              uVar8 = puVar28[7];
              pFVar22->LeastRecentElement = pFVar5;
              *(undefined8 *)&pFVar22->ChunksInUse = uVar3;
              pTVar9 = (TAtomic<unsigned___int64> *)puVar28[8];
              pTVar10 = (TAtomic<unsigned___int64> *)puVar28[9];
              (pFVar22->MemoryCounterBytes).Obj.Ptr = pTVar7;
              pFVar22->MemoryLimitBytes = uVar8;
              uVar3 = puVar28[10];
              uVar8 = puVar28[0xb];
              (pFVar22->ForceInlineMemoryCounterBytes).Obj.Ptr = pTVar9;
              (pFVar22->FeatureMemoryCounterBytes).Obj.Ptr = pTVar10;
              pvVar11 = (void *)puVar28[0xc];
              uVar6 = puVar28[0xd];
              *(undefined8 *)&pFVar22->NumberOfLoadsInFlight = uVar3;
              pFVar22->TimeOfBeginPlayCycles = uVar8;
              pvVar12 = (void *)puVar28[0xe];
              pvVar13 = (void *)puVar28[0xf];
              (pFVar22->CacheMutationCriticalSection).Value.CriticalSection.Opaque1[0] = pvVar11;
              *(undefined8 *)(pFVar22->CacheMutationCriticalSection).Value.CriticalSection.Opaque2 =
                   uVar6;
              (pFVar22->CacheMutationCriticalSection).Value.CriticalSection.Opaque3[0] = pvVar12;
              (pFVar22->CacheMutationCriticalSection).Value.CriticalSection.Opaque3[1] = pvVar13;
              lVar32 = lVar32 + -1;
              pFVar22 = pFVar21;
              puVar28 = puVar27;
            } while (lVar32 != 0);
          } while( true );
        }
        while (pFVar25 = pFVar31, pFVar20 = pFVar31, pFVar31 < pFVar35) {
          while (pFVar20 = pFVar20 + 1, pFVar20 <= pFVar35) {
            if (pFVar25->MaxChunkSize < pFVar20->MaxChunkSize) {
              pFVar25 = pFVar20;
            }
          }
          lVar32 = 2;
          pFVar20 = pFVar25;
          puVar28 = local_4a8;
          do {
            puVar27 = puVar28;
            pFVar21 = pFVar20;
            pFVar2 = (pFVar21->CachePool).AllocatorInstance.Data;
            uVar3 = *(undefined8 *)&(pFVar21->CachePool).ArrayNum;
            pFVar4 = pFVar21->MostRecentElement;
            pFVar20 = (FAudioChunkCache *)
                      ((pFVar21->CacheMutationCriticalSection).Value.CriticalSection.Opaque3 + 2);
            *puVar27 = *(undefined8 *)pFVar21;
            puVar27[1] = pFVar2;
            pFVar5 = pFVar21->LeastRecentElement;
            uVar6 = *(undefined8 *)&pFVar21->ChunksInUse;
            puVar27[2] = uVar3;
            puVar27[3] = pFVar4;
            pTVar7 = (pFVar21->MemoryCounterBytes).Obj.Ptr;
            uVar8 = pFVar21->MemoryLimitBytes;
            puVar27[4] = pFVar5;
            puVar27[5] = uVar6;
            pTVar9 = (pFVar21->ForceInlineMemoryCounterBytes).Obj.Ptr;
            pTVar10 = (pFVar21->FeatureMemoryCounterBytes).Obj.Ptr;
            puVar27[6] = pTVar7;
            puVar27[7] = uVar8;
            uVar3 = *(undefined8 *)&pFVar21->NumberOfLoadsInFlight;
            uVar8 = pFVar21->TimeOfBeginPlayCycles;
            puVar27[8] = pTVar9;
            puVar27[9] = pTVar10;
            pvVar11 = (pFVar21->CacheMutationCriticalSection).Value.CriticalSection.Opaque1[0];
            uVar6 = *(undefined8 *)
                     (pFVar21->CacheMutationCriticalSection).Value.CriticalSection.Opaque2;
            puVar27[10] = uVar3;
            puVar27[0xb] = uVar8;
            pvVar12 = (pFVar21->CacheMutationCriticalSection).Value.CriticalSection.Opaque3[0];
            pvVar13 = (pFVar21->CacheMutationCriticalSection).Value.CriticalSection.Opaque3[1];
            puVar27[0xc] = pvVar11;
            puVar27[0xd] = uVar6;
            puVar27[0xe] = pvVar12;
            puVar27[0xf] = pvVar13;
            lVar32 = lVar32 + -1;
            puVar28 = puVar27 + 0x10;
          } while (lVar32 != 0);
          uVar3 = *(undefined8 *)&pFVar21->CacheLookupIdMap;
          uVar6 = *(undefined8 *)&(pFVar21->CacheLookupIdMap).field_0x8;
          uVar14 = *(undefined8 *)&(pFVar21->CacheLookupIdMap).field_0x10;
          puVar27[0x10] = *(void **)pFVar20;
          puVar27[0x11] = uVar3;
          uVar3 = *(undefined8 *)&(pFVar21->CacheLookupIdMap).field_0x18;
          uVar15 = *(undefined8 *)&(pFVar21->CacheLookupIdMap).field_0x20;
          puVar27[0x12] = uVar6;
          puVar27[0x13] = uVar14;
          uVar6 = *(undefined8 *)&(pFVar21->CacheLookupIdMap).field_0x28;
          uVar14 = *(undefined8 *)&(pFVar21->CacheLookupIdMap).field_0x30;
          puVar27[0x14] = uVar3;
          puVar27[0x15] = uVar15;
          uVar3 = *(undefined8 *)&(pFVar21->CacheLookupIdMap).field_0x38;
          uVar15 = *(undefined8 *)&(pFVar21->CacheLookupIdMap).field_0x40;
          puVar27[0x16] = uVar6;
          puVar27[0x17] = uVar14;
          uVar6 = *(undefined8 *)&(pFVar21->CacheLookupIdMap).field_0x48;
          uVar14 = *(undefined8 *)&pFVar21->SoundWaveTracker;
          puVar27[0x18] = uVar3;
          puVar27[0x19] = uVar15;
          puVar27[0x1a] = uVar6;
          puVar27[0x1b] = uVar14;
          lVar32 = 2;
          pFVar20 = pFVar35;
          do {
            pFVar34 = pFVar20;
            pFVar21 = pFVar25;
            pFVar25 = (FAudioChunkCache *)
                      ((pFVar21->CacheMutationCriticalSection).Value.CriticalSection.Opaque3 + 2);
            FVar16.Counter = (pFVar34->CacheOverflowCount).Counter;
            pFVar2 = (pFVar34->CachePool).AllocatorInstance.Data;
            pFVar20 = (FAudioChunkCache *)
                      ((pFVar34->CacheMutationCriticalSection).Value.CriticalSection.Opaque3 + 2);
            pFVar21->MaxChunkSize = pFVar34->MaxChunkSize;
            pFVar21->CacheOverflowCount = (FThreadSafeCounter)FVar16.Counter;
            (pFVar21->CachePool).AllocatorInstance.Data = pFVar2;
            iVar37 = (pFVar34->CachePool).ArrayMax;
            pFVar4 = pFVar34->MostRecentElement;
            (pFVar21->CachePool).ArrayNum = (pFVar34->CachePool).ArrayNum;
            (pFVar21->CachePool).ArrayMax = iVar37;
            pFVar21->MostRecentElement = pFVar4;
            iVar37 = pFVar34->ChunksInUse;
            uVar17 = *(undefined4 *)&pFVar34->field_0x2c;
            pFVar21->LeastRecentElement = pFVar34->LeastRecentElement;
            pFVar21->ChunksInUse = iVar37;
            *(undefined4 *)&pFVar21->field_0x2c = uVar17;
            uVar8 = pFVar34->MemoryLimitBytes;
            (pFVar21->MemoryCounterBytes).Obj.Ptr = (pFVar34->MemoryCounterBytes).Obj.Ptr;
            pFVar21->MemoryLimitBytes = uVar8;
            pTVar7 = (pFVar34->FeatureMemoryCounterBytes).Obj.Ptr;
            (pFVar21->ForceInlineMemoryCounterBytes).Obj.Ptr =
                 (pFVar34->ForceInlineMemoryCounterBytes).Obj.Ptr;
            (pFVar21->FeatureMemoryCounterBytes).Obj.Ptr = pTVar7;
            uVar17 = *(undefined4 *)&pFVar34->field_0x54;
            uVar8 = pFVar34->TimeOfBeginPlayCycles;
            pFVar21->NumberOfLoadsInFlight =
                 (FThreadSafeCounter)(pFVar34->NumberOfLoadsInFlight).Counter;
            *(undefined4 *)&pFVar21->field_0x54 = uVar17;
            pFVar21->TimeOfBeginPlayCycles = uVar8;
            uVar3 = *(undefined8 *)
                     (pFVar34->CacheMutationCriticalSection).Value.CriticalSection.Opaque2;
            (pFVar21->CacheMutationCriticalSection).Value.CriticalSection.Opaque1[0] =
                 (pFVar34->CacheMutationCriticalSection).Value.CriticalSection.Opaque1[0];
            *(undefined8 *)(pFVar21->CacheMutationCriticalSection).Value.CriticalSection.Opaque2 =
                 uVar3;
            pvVar11 = (pFVar34->CacheMutationCriticalSection).Value.CriticalSection.Opaque3[1];
            (pFVar21->CacheMutationCriticalSection).Value.CriticalSection.Opaque3[0] =
                 (pFVar34->CacheMutationCriticalSection).Value.CriticalSection.Opaque3[0];
            (pFVar21->CacheMutationCriticalSection).Value.CriticalSection.Opaque3[1] = pvVar11;
            lVar32 = lVar32 + -1;
          } while (lVar32 != 0);
          FVar16.Counter = (pFVar20->CacheOverflowCount).Counter;
          uVar3 = *(undefined8 *)&pFVar34->CacheLookupIdMap;
          pFVar25->MaxChunkSize = pFVar20->MaxChunkSize;
          pFVar25->CacheOverflowCount = (FThreadSafeCounter)FVar16.Counter;
          *(undefined8 *)&pFVar21->CacheLookupIdMap = uVar3;
          uVar3 = *(undefined8 *)&(pFVar34->CacheLookupIdMap).field_0x10;
          *(undefined8 *)&(pFVar21->CacheLookupIdMap).field_0x8 =
               *(undefined8 *)&(pFVar34->CacheLookupIdMap).field_0x8;
          *(undefined8 *)&(pFVar21->CacheLookupIdMap).field_0x10 = uVar3;
          uVar3 = *(undefined8 *)&(pFVar34->CacheLookupIdMap).field_0x20;
          *(undefined8 *)&(pFVar21->CacheLookupIdMap).field_0x18 =
               *(undefined8 *)&(pFVar34->CacheLookupIdMap).field_0x18;
          *(undefined8 *)&(pFVar21->CacheLookupIdMap).field_0x20 = uVar3;
          uVar3 = *(undefined8 *)&(pFVar34->CacheLookupIdMap).field_0x30;
          *(undefined8 *)&(pFVar21->CacheLookupIdMap).field_0x28 =
               *(undefined8 *)&(pFVar34->CacheLookupIdMap).field_0x28;
          *(undefined8 *)&(pFVar21->CacheLookupIdMap).field_0x30 = uVar3;
          uVar3 = *(undefined8 *)&(pFVar34->CacheLookupIdMap).field_0x40;
          *(undefined8 *)&(pFVar21->CacheLookupIdMap).field_0x38 =
               *(undefined8 *)&(pFVar34->CacheLookupIdMap).field_0x38;
          *(undefined8 *)&(pFVar21->CacheLookupIdMap).field_0x40 = uVar3;
          uVar3 = *(undefined8 *)&pFVar34->SoundWaveTracker;
          lVar32 = 2;
          *(undefined8 *)&(pFVar21->CacheLookupIdMap).field_0x48 =
               *(undefined8 *)&(pFVar34->CacheLookupIdMap).field_0x48;
          *(undefined8 *)&pFVar21->SoundWaveTracker = uVar3;
          pFVar25 = pFVar35;
          puVar28 = local_4a8;
          do {
            puVar27 = puVar28;
            pFVar20 = pFVar25;
            pFVar25 = (FAudioChunkCache *)
                      ((pFVar20->CacheMutationCriticalSection).Value.CriticalSection.Opaque3 + 2);
            uVar3 = *puVar27;
            pFVar2 = (FScriptContainerElement *)puVar27[1];
            uVar6 = puVar27[2];
            pFVar4 = (FCacheElement *)puVar27[3];
            pFVar20->MaxChunkSize = (int)uVar3;
            pFVar20->CacheOverflowCount = (FThreadSafeCounter)(int)((ulonglong)uVar3 >> 0x20);
            (pFVar20->CachePool).AllocatorInstance.Data = pFVar2;
            pFVar5 = (FCacheElement *)puVar27[4];
            uVar3 = puVar27[5];
            (pFVar20->CachePool).ArrayNum = (int)uVar6;
            (pFVar20->CachePool).ArrayMax = (int)((ulonglong)uVar6 >> 0x20);
            pFVar20->MostRecentElement = pFVar4;
            pTVar7 = (TAtomic<unsigned___int64> *)puVar27[6];
            uVar8 = puVar27[7];
            pFVar20->LeastRecentElement = pFVar5;
            *(undefined8 *)&pFVar20->ChunksInUse = uVar3;
            pTVar9 = (TAtomic<unsigned___int64> *)puVar27[8];
            pTVar10 = (TAtomic<unsigned___int64> *)puVar27[9];
            (pFVar20->MemoryCounterBytes).Obj.Ptr = pTVar7;
            pFVar20->MemoryLimitBytes = uVar8;
            uVar3 = puVar27[10];
            uVar8 = puVar27[0xb];
            (pFVar20->ForceInlineMemoryCounterBytes).Obj.Ptr = pTVar9;
            (pFVar20->FeatureMemoryCounterBytes).Obj.Ptr = pTVar10;
            pvVar11 = (void *)puVar27[0xc];
            uVar6 = puVar27[0xd];
            *(undefined8 *)&pFVar20->NumberOfLoadsInFlight = uVar3;
            pFVar20->TimeOfBeginPlayCycles = uVar8;
            pvVar12 = (void *)puVar27[0xe];
            pvVar13 = (void *)puVar27[0xf];
            (pFVar20->CacheMutationCriticalSection).Value.CriticalSection.Opaque1[0] = pvVar11;
            *(undefined8 *)(pFVar20->CacheMutationCriticalSection).Value.CriticalSection.Opaque2 =
                 uVar6;
            (pFVar20->CacheMutationCriticalSection).Value.CriticalSection.Opaque3[0] = pvVar12;
            (pFVar20->CacheMutationCriticalSection).Value.CriticalSection.Opaque3[1] = pvVar13;
            lVar32 = lVar32 + -1;
            puVar28 = puVar27 + 0x10;
          } while (lVar32 != 0);
          uVar3 = puVar27[0x11];
          uVar6 = puVar27[0x12];
          uVar14 = puVar27[0x13];
          *(void **)pFVar25 = (void *)puVar27[0x10];
          *(undefined8 *)&pFVar20->CacheLookupIdMap = uVar3;
          uVar3 = puVar27[0x14];
          uVar15 = puVar27[0x15];
          *(undefined8 *)&(pFVar20->CacheLookupIdMap).field_0x8 = uVar6;
          *(undefined8 *)&(pFVar20->CacheLookupIdMap).field_0x10 = uVar14;
          uVar6 = puVar27[0x16];
          uVar14 = puVar27[0x17];
          *(undefined8 *)&(pFVar20->CacheLookupIdMap).field_0x18 = uVar3;
          *(undefined8 *)&(pFVar20->CacheLookupIdMap).field_0x20 = uVar15;
          uVar3 = puVar27[0x18];
          uVar15 = puVar27[0x19];
          *(undefined8 *)&(pFVar20->CacheLookupIdMap).field_0x28 = uVar6;
          *(undefined8 *)&(pFVar20->CacheLookupIdMap).field_0x30 = uVar14;
          uVar6 = puVar27[0x1a];
          uVar14 = puVar27[0x1b];
          *(undefined8 *)&(pFVar20->CacheLookupIdMap).field_0x38 = uVar3;
          *(undefined8 *)&(pFVar20->CacheLookupIdMap).field_0x40 = uVar15;
          *(undefined8 *)&(pFVar20->CacheLookupIdMap).field_0x48 = uVar6;
          *(undefined8 *)&pFVar20->SoundWaveTracker = uVar14;
          pFVar35 = (FAudioChunkCache *)((longlong)pFVar35 + 0xfffffffffffffea0);
        }
        goto LAB_14768383e;
      }
LAB_14768332e:
      local_4e0[0] = param_3;
      local_4d8.Predicate = param_4.Predicate;
      local_4b0 = pFVar25;
      if (iVar37 < 0) {
        bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("Num >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                            ,0xb9,L"Algo::HeapSortInternal called with negative count");
        if (bVar18) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
LAB_1476835a5:
        local_4c8[0].Predicate = &local_4d8;
        local_4d0.Predicate = &local_4d8;
        local_4e8[0] = param_3;
        if ((iVar37 < 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("Num >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                                ,0x97,L"Algo::HeapifyInternal called with negative count"), bVar18))
        {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        iVar19 = (iVar37 + -2) / 2;
        HeapSiftDown<FAudioChunkCache,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<FAudioChunkCache,TLess<void>_>_>_>
                  (pFVar20,iVar19,iVar37,local_4e8,&local_4d0);
        while (iVar19 != 0) {
          iVar19 = iVar19 + -1;
          HeapSiftDown<FAudioChunkCache,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<FAudioChunkCache,TLess<void>_>_>_>
                    (pFVar20,iVar19,iVar37,local_4e8,&local_4d0);
        }
        iVar37 = iVar37 + -1;
        if (0 < iVar37) {
          lVar32 = (longlong)iVar37 * 0x160;
          do {
            puVar28 = (undefined8 *)
                      ((longlong)
                       (pFVar20->CacheMutationCriticalSection).Value.CriticalSection.Opaque1 +
                      lVar32 + -0x60);
            lVar33 = 2;
            pFVar35 = pFVar20;
            puVar27 = local_4a8;
            do {
              puVar26 = puVar27;
              pFVar25 = pFVar35;
              pFVar2 = (pFVar25->CachePool).AllocatorInstance.Data;
              uVar3 = *(undefined8 *)&(pFVar25->CachePool).ArrayNum;
              pFVar4 = pFVar25->MostRecentElement;
              pFVar35 = (FAudioChunkCache *)
                        ((pFVar25->CacheMutationCriticalSection).Value.CriticalSection.Opaque3 + 2);
              *puVar26 = *(undefined8 *)pFVar25;
              puVar26[1] = pFVar2;
              pFVar5 = pFVar25->LeastRecentElement;
              uVar6 = *(undefined8 *)&pFVar25->ChunksInUse;
              puVar26[2] = uVar3;
              puVar26[3] = pFVar4;
              pTVar7 = (pFVar25->MemoryCounterBytes).Obj.Ptr;
              uVar8 = pFVar25->MemoryLimitBytes;
              puVar26[4] = pFVar5;
              puVar26[5] = uVar6;
              pTVar9 = (pFVar25->ForceInlineMemoryCounterBytes).Obj.Ptr;
              pTVar10 = (pFVar25->FeatureMemoryCounterBytes).Obj.Ptr;
              puVar26[6] = pTVar7;
              puVar26[7] = uVar8;
              uVar3 = *(undefined8 *)&pFVar25->NumberOfLoadsInFlight;
              uVar8 = pFVar25->TimeOfBeginPlayCycles;
              puVar26[8] = pTVar9;
              puVar26[9] = pTVar10;
              pvVar11 = (pFVar25->CacheMutationCriticalSection).Value.CriticalSection.Opaque1[0];
              uVar6 = *(undefined8 *)
                       (pFVar25->CacheMutationCriticalSection).Value.CriticalSection.Opaque2;
              puVar26[10] = uVar3;
              puVar26[0xb] = uVar8;
              pvVar12 = (pFVar25->CacheMutationCriticalSection).Value.CriticalSection.Opaque3[0];
              pvVar13 = (pFVar25->CacheMutationCriticalSection).Value.CriticalSection.Opaque3[1];
              puVar26[0xc] = pvVar11;
              puVar26[0xd] = uVar6;
              puVar26[0xe] = pvVar12;
              puVar26[0xf] = pvVar13;
              lVar33 = lVar33 + -1;
              puVar27 = puVar26 + 0x10;
            } while (lVar33 != 0);
            uVar3 = *(undefined8 *)&pFVar25->CacheLookupIdMap;
            lVar33 = 2;
            uVar6 = *(undefined8 *)&(pFVar25->CacheLookupIdMap).field_0x8;
            uVar14 = *(undefined8 *)&(pFVar25->CacheLookupIdMap).field_0x10;
            puVar26[0x10] = *(void **)pFVar35;
            puVar26[0x11] = uVar3;
            uVar3 = *(undefined8 *)&(pFVar25->CacheLookupIdMap).field_0x18;
            uVar15 = *(undefined8 *)&(pFVar25->CacheLookupIdMap).field_0x20;
            puVar26[0x12] = uVar6;
            puVar26[0x13] = uVar14;
            uVar6 = *(undefined8 *)&(pFVar25->CacheLookupIdMap).field_0x28;
            uVar14 = *(undefined8 *)&(pFVar25->CacheLookupIdMap).field_0x30;
            puVar26[0x14] = uVar3;
            puVar26[0x15] = uVar15;
            uVar3 = *(undefined8 *)&(pFVar25->CacheLookupIdMap).field_0x38;
            uVar15 = *(undefined8 *)&(pFVar25->CacheLookupIdMap).field_0x40;
            puVar26[0x16] = uVar6;
            puVar26[0x17] = uVar14;
            uVar6 = *(undefined8 *)&(pFVar25->CacheLookupIdMap).field_0x48;
            uVar14 = *(undefined8 *)&pFVar25->SoundWaveTracker;
            puVar26[0x18] = uVar3;
            puVar26[0x19] = uVar15;
            puVar26[0x1a] = uVar6;
            puVar26[0x1b] = uVar14;
            pFVar35 = pFVar20;
            puVar27 = puVar28;
            do {
              puVar26 = puVar27;
              pFVar25 = pFVar35;
              pFVar35 = (FAudioChunkCache *)
                        ((pFVar25->CacheMutationCriticalSection).Value.CriticalSection.Opaque3 + 2);
              uVar3 = *puVar26;
              pFVar2 = (FScriptContainerElement *)puVar26[1];
              pFVar25->MaxChunkSize = (int)uVar3;
              pFVar25->CacheOverflowCount = (FThreadSafeCounter)(int)((ulonglong)uVar3 >> 0x20);
              (pFVar25->CachePool).AllocatorInstance.Data = pFVar2;
              uVar3 = puVar26[2];
              pFVar4 = (FCacheElement *)puVar26[3];
              (pFVar25->CachePool).ArrayNum = (int)uVar3;
              (pFVar25->CachePool).ArrayMax = (int)((ulonglong)uVar3 >> 0x20);
              pFVar25->MostRecentElement = pFVar4;
              uVar3 = puVar26[5];
              pFVar25->LeastRecentElement = (FCacheElement *)puVar26[4];
              *(undefined8 *)&pFVar25->ChunksInUse = uVar3;
              uVar8 = puVar26[7];
              (pFVar25->MemoryCounterBytes).Obj.Ptr = (TAtomic<unsigned___int64> *)puVar26[6];
              pFVar25->MemoryLimitBytes = uVar8;
              pTVar7 = (TAtomic<unsigned___int64> *)puVar26[9];
              (pFVar25->ForceInlineMemoryCounterBytes).Obj.Ptr =
                   (TAtomic<unsigned___int64> *)puVar26[8];
              (pFVar25->FeatureMemoryCounterBytes).Obj.Ptr = pTVar7;
              uVar8 = puVar26[0xb];
              *(undefined8 *)&pFVar25->NumberOfLoadsInFlight = puVar26[10];
              pFVar25->TimeOfBeginPlayCycles = uVar8;
              uVar3 = puVar26[0xd];
              (pFVar25->CacheMutationCriticalSection).Value.CriticalSection.Opaque1[0] =
                   (void *)puVar26[0xc];
              *(undefined8 *)(pFVar25->CacheMutationCriticalSection).Value.CriticalSection.Opaque2 =
                   uVar3;
              pvVar11 = (void *)puVar26[0xf];
              (pFVar25->CacheMutationCriticalSection).Value.CriticalSection.Opaque3[0] =
                   (void *)puVar26[0xe];
              (pFVar25->CacheMutationCriticalSection).Value.CriticalSection.Opaque3[1] = pvVar11;
              lVar33 = lVar33 + -1;
              puVar27 = puVar26 + 0x10;
            } while (lVar33 != 0);
            uVar3 = puVar26[0x11];
            *(void **)pFVar35 = (void *)puVar26[0x10];
            *(undefined8 *)&pFVar25->CacheLookupIdMap = uVar3;
            uVar3 = puVar26[0x13];
            *(undefined8 *)&(pFVar25->CacheLookupIdMap).field_0x8 = puVar26[0x12];
            *(undefined8 *)&(pFVar25->CacheLookupIdMap).field_0x10 = uVar3;
            uVar3 = puVar26[0x15];
            *(undefined8 *)&(pFVar25->CacheLookupIdMap).field_0x18 = puVar26[0x14];
            *(undefined8 *)&(pFVar25->CacheLookupIdMap).field_0x20 = uVar3;
            uVar3 = puVar26[0x17];
            *(undefined8 *)&(pFVar25->CacheLookupIdMap).field_0x28 = puVar26[0x16];
            *(undefined8 *)&(pFVar25->CacheLookupIdMap).field_0x30 = uVar3;
            uVar3 = puVar26[0x19];
            *(undefined8 *)&(pFVar25->CacheLookupIdMap).field_0x38 = puVar26[0x18];
            *(undefined8 *)&(pFVar25->CacheLookupIdMap).field_0x40 = uVar3;
            uVar3 = puVar26[0x1b];
            lVar33 = 2;
            *(undefined8 *)&(pFVar25->CacheLookupIdMap).field_0x48 = puVar26[0x1a];
            *(undefined8 *)&pFVar25->SoundWaveTracker = uVar3;
            puVar27 = local_4a8;
            do {
              puVar30 = puVar28;
              puVar26 = puVar27;
              uVar3 = puVar26[1];
              uVar6 = puVar26[2];
              uVar14 = puVar26[3];
              *puVar30 = *puVar26;
              puVar30[1] = uVar3;
              uVar3 = puVar26[4];
              uVar15 = puVar26[5];
              puVar30[2] = uVar6;
              puVar30[3] = uVar14;
              uVar6 = puVar26[6];
              uVar14 = puVar26[7];
              puVar30[4] = uVar3;
              puVar30[5] = uVar15;
              uVar3 = puVar26[8];
              uVar15 = puVar26[9];
              puVar30[6] = uVar6;
              puVar30[7] = uVar14;
              uVar6 = puVar26[10];
              uVar14 = puVar26[0xb];
              puVar30[8] = uVar3;
              puVar30[9] = uVar15;
              uVar3 = puVar26[0xc];
              uVar15 = puVar26[0xd];
              puVar30[10] = uVar6;
              puVar30[0xb] = uVar14;
              uVar6 = puVar26[0xe];
              uVar14 = puVar26[0xf];
              puVar30[0xc] = uVar3;
              puVar30[0xd] = uVar15;
              puVar30[0xe] = uVar6;
              puVar30[0xf] = uVar14;
              lVar33 = lVar33 + -1;
              puVar27 = puVar26 + 0x10;
              puVar28 = puVar30 + 0x10;
            } while (lVar33 != 0);
            uVar3 = puVar26[0x11];
            uVar6 = puVar26[0x12];
            uVar14 = puVar26[0x13];
            puVar30[0x10] = puVar26[0x10];
            puVar30[0x11] = uVar3;
            uVar3 = puVar26[0x14];
            uVar15 = puVar26[0x15];
            puVar30[0x12] = uVar6;
            puVar30[0x13] = uVar14;
            uVar6 = puVar26[0x16];
            uVar14 = puVar26[0x17];
            puVar30[0x14] = uVar3;
            puVar30[0x15] = uVar15;
            uVar3 = puVar26[0x18];
            uVar15 = puVar26[0x19];
            puVar30[0x16] = uVar6;
            puVar30[0x17] = uVar14;
            uVar6 = puVar26[0x1a];
            uVar14 = puVar26[0x1b];
            puVar30[0x18] = uVar3;
            puVar30[0x19] = uVar15;
            puVar30[0x1a] = uVar6;
            puVar30[0x1b] = uVar14;
            HeapSiftDown<FAudioChunkCache,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<FAudioChunkCache,TLess<void>_>_>_>
                      (pFVar20,0,iVar37,local_4e0,local_4c8);
            iVar37 = iVar37 + -1;
            lVar32 = lVar32 + -0x160;
          } while (0 < iVar37);
        }
      }
      else if (iVar37 != 0) goto LAB_1476835a5;
LAB_14768383e:
      ppFVar36 = ppFVar36 + -3;
    } while (&local_348 <= ppFVar36);
  }
  return;
LAB_1476830c0:
  do {
    puVar27 = puVar28;
    pFVar22 = pFVar24;
    pFVar2 = (pFVar22->CachePool).AllocatorInstance.Data;
    uVar3 = *(undefined8 *)&(pFVar22->CachePool).ArrayNum;
    pFVar4 = pFVar22->MostRecentElement;
    pFVar24 = (FAudioChunkCache *)
              ((pFVar22->CacheMutationCriticalSection).Value.CriticalSection.Opaque3 + 2);
    *puVar27 = *(undefined8 *)pFVar22;
    puVar27[1] = pFVar2;
    pFVar5 = pFVar22->LeastRecentElement;
    uVar6 = *(undefined8 *)&pFVar22->ChunksInUse;
    puVar27[2] = uVar3;
    puVar27[3] = pFVar4;
    pTVar7 = (pFVar22->MemoryCounterBytes).Obj.Ptr;
    uVar8 = pFVar22->MemoryLimitBytes;
    puVar27[4] = pFVar5;
    puVar27[5] = uVar6;
    pTVar9 = (pFVar22->ForceInlineMemoryCounterBytes).Obj.Ptr;
    pTVar10 = (pFVar22->FeatureMemoryCounterBytes).Obj.Ptr;
    puVar27[6] = pTVar7;
    puVar27[7] = uVar8;
    uVar3 = *(undefined8 *)&pFVar22->NumberOfLoadsInFlight;
    uVar8 = pFVar22->TimeOfBeginPlayCycles;
    puVar27[8] = pTVar9;
    puVar27[9] = pTVar10;
    pvVar11 = (pFVar22->CacheMutationCriticalSection).Value.CriticalSection.Opaque1[0];
    uVar6 = *(undefined8 *)(pFVar22->CacheMutationCriticalSection).Value.CriticalSection.Opaque2;
    puVar27[10] = uVar3;
    puVar27[0xb] = uVar8;
    pvVar12 = (pFVar22->CacheMutationCriticalSection).Value.CriticalSection.Opaque3[0];
    pvVar13 = (pFVar22->CacheMutationCriticalSection).Value.CriticalSection.Opaque3[1];
    puVar27[0xc] = pvVar11;
    puVar27[0xd] = uVar6;
    puVar27[0xe] = pvVar12;
    puVar27[0xf] = pvVar13;
    lVar32 = lVar32 + -1;
    puVar28 = puVar27 + 0x10;
  } while (lVar32 != 0);
  uVar3 = *(undefined8 *)&pFVar22->CacheLookupIdMap;
  lVar32 = 2;
  uVar6 = *(undefined8 *)&(pFVar22->CacheLookupIdMap).field_0x8;
  uVar14 = *(undefined8 *)&(pFVar22->CacheLookupIdMap).field_0x10;
  puVar27[0x10] = *(void **)pFVar24;
  puVar27[0x11] = uVar3;
  uVar3 = *(undefined8 *)&(pFVar22->CacheLookupIdMap).field_0x18;
  uVar15 = *(undefined8 *)&(pFVar22->CacheLookupIdMap).field_0x20;
  puVar27[0x12] = uVar6;
  puVar27[0x13] = uVar14;
  uVar6 = *(undefined8 *)&(pFVar22->CacheLookupIdMap).field_0x28;
  uVar14 = *(undefined8 *)&(pFVar22->CacheLookupIdMap).field_0x30;
  puVar27[0x14] = uVar3;
  puVar27[0x15] = uVar15;
  uVar3 = *(undefined8 *)&(pFVar22->CacheLookupIdMap).field_0x38;
  uVar15 = *(undefined8 *)&(pFVar22->CacheLookupIdMap).field_0x40;
  puVar27[0x16] = uVar6;
  puVar27[0x17] = uVar14;
  uVar6 = *(undefined8 *)&(pFVar22->CacheLookupIdMap).field_0x48;
  uVar14 = *(undefined8 *)&pFVar22->SoundWaveTracker;
  puVar27[0x18] = uVar3;
  puVar27[0x19] = uVar15;
  puVar27[0x1a] = uVar6;
  puVar27[0x1b] = uVar14;
  pFVar22 = pFVar31;
  pFVar24 = pFVar34;
  do {
    pFVar29 = pFVar24;
    pFVar23 = pFVar22;
    pFVar22 = (FAudioChunkCache *)
              ((pFVar23->CacheMutationCriticalSection).Value.CriticalSection.Opaque3 + 2);
    FVar16.Counter = (pFVar29->CacheOverflowCount).Counter;
    pFVar2 = (pFVar29->CachePool).AllocatorInstance.Data;
    pFVar24 = (FAudioChunkCache *)
              ((pFVar29->CacheMutationCriticalSection).Value.CriticalSection.Opaque3 + 2);
    pFVar23->MaxChunkSize = pFVar29->MaxChunkSize;
    pFVar23->CacheOverflowCount = (FThreadSafeCounter)FVar16.Counter;
    (pFVar23->CachePool).AllocatorInstance.Data = pFVar2;
    iVar37 = (pFVar29->CachePool).ArrayMax;
    pFVar4 = pFVar29->MostRecentElement;
    (pFVar23->CachePool).ArrayNum = (pFVar29->CachePool).ArrayNum;
    (pFVar23->CachePool).ArrayMax = iVar37;
    pFVar23->MostRecentElement = pFVar4;
    iVar37 = pFVar29->ChunksInUse;
    uVar17 = *(undefined4 *)&pFVar29->field_0x2c;
    pFVar23->LeastRecentElement = pFVar29->LeastRecentElement;
    pFVar23->ChunksInUse = iVar37;
    *(undefined4 *)&pFVar23->field_0x2c = uVar17;
    uVar8 = pFVar29->MemoryLimitBytes;
    (pFVar23->MemoryCounterBytes).Obj.Ptr = (pFVar29->MemoryCounterBytes).Obj.Ptr;
    pFVar23->MemoryLimitBytes = uVar8;
    pTVar7 = (pFVar29->FeatureMemoryCounterBytes).Obj.Ptr;
    (pFVar23->ForceInlineMemoryCounterBytes).Obj.Ptr =
         (pFVar29->ForceInlineMemoryCounterBytes).Obj.Ptr;
    (pFVar23->FeatureMemoryCounterBytes).Obj.Ptr = pTVar7;
    uVar17 = *(undefined4 *)&pFVar29->field_0x54;
    uVar8 = pFVar29->TimeOfBeginPlayCycles;
    pFVar23->NumberOfLoadsInFlight = (FThreadSafeCounter)(pFVar29->NumberOfLoadsInFlight).Counter;
    *(undefined4 *)&pFVar23->field_0x54 = uVar17;
    pFVar23->TimeOfBeginPlayCycles = uVar8;
    uVar3 = *(undefined8 *)(pFVar29->CacheMutationCriticalSection).Value.CriticalSection.Opaque2;
    (pFVar23->CacheMutationCriticalSection).Value.CriticalSection.Opaque1[0] =
         (pFVar29->CacheMutationCriticalSection).Value.CriticalSection.Opaque1[0];
    *(undefined8 *)(pFVar23->CacheMutationCriticalSection).Value.CriticalSection.Opaque2 = uVar3;
    pvVar11 = (pFVar29->CacheMutationCriticalSection).Value.CriticalSection.Opaque3[1];
    (pFVar23->CacheMutationCriticalSection).Value.CriticalSection.Opaque3[0] =
         (pFVar29->CacheMutationCriticalSection).Value.CriticalSection.Opaque3[0];
    (pFVar23->CacheMutationCriticalSection).Value.CriticalSection.Opaque3[1] = pvVar11;
    lVar32 = lVar32 + -1;
  } while (lVar32 != 0);
  FVar16.Counter = (pFVar24->CacheOverflowCount).Counter;
  uVar3 = *(undefined8 *)&pFVar29->CacheLookupIdMap;
  lVar32 = 2;
  pFVar22->MaxChunkSize = pFVar24->MaxChunkSize;
  pFVar22->CacheOverflowCount = (FThreadSafeCounter)FVar16.Counter;
  *(undefined8 *)&pFVar23->CacheLookupIdMap = uVar3;
  uVar3 = *(undefined8 *)&(pFVar29->CacheLookupIdMap).field_0x10;
  *(undefined8 *)&(pFVar23->CacheLookupIdMap).field_0x8 =
       *(undefined8 *)&(pFVar29->CacheLookupIdMap).field_0x8;
  *(undefined8 *)&(pFVar23->CacheLookupIdMap).field_0x10 = uVar3;
  uVar3 = *(undefined8 *)&(pFVar29->CacheLookupIdMap).field_0x20;
  *(undefined8 *)&(pFVar23->CacheLookupIdMap).field_0x18 =
       *(undefined8 *)&(pFVar29->CacheLookupIdMap).field_0x18;
  *(undefined8 *)&(pFVar23->CacheLookupIdMap).field_0x20 = uVar3;
  uVar3 = *(undefined8 *)&(pFVar29->CacheLookupIdMap).field_0x30;
  *(undefined8 *)&(pFVar23->CacheLookupIdMap).field_0x28 =
       *(undefined8 *)&(pFVar29->CacheLookupIdMap).field_0x28;
  *(undefined8 *)&(pFVar23->CacheLookupIdMap).field_0x30 = uVar3;
  uVar3 = *(undefined8 *)&(pFVar29->CacheLookupIdMap).field_0x40;
  *(undefined8 *)&(pFVar23->CacheLookupIdMap).field_0x38 =
       *(undefined8 *)&(pFVar29->CacheLookupIdMap).field_0x38;
  *(undefined8 *)&(pFVar23->CacheLookupIdMap).field_0x40 = uVar3;
  uVar3 = *(undefined8 *)&pFVar29->SoundWaveTracker;
  *(undefined8 *)&(pFVar23->CacheLookupIdMap).field_0x48 =
       *(undefined8 *)&(pFVar29->CacheLookupIdMap).field_0x48;
  *(undefined8 *)&pFVar23->SoundWaveTracker = uVar3;
  pFVar22 = pFVar34;
  puVar28 = local_4a8;
  do {
    puVar27 = puVar28;
    pFVar24 = pFVar22;
    pFVar22 = (FAudioChunkCache *)
              ((pFVar24->CacheMutationCriticalSection).Value.CriticalSection.Opaque3 + 2);
    uVar3 = *puVar27;
    pFVar2 = (FScriptContainerElement *)puVar27[1];
    uVar6 = puVar27[2];
    pFVar4 = (FCacheElement *)puVar27[3];
    pFVar24->MaxChunkSize = (int)uVar3;
    pFVar24->CacheOverflowCount = (FThreadSafeCounter)(int)((ulonglong)uVar3 >> 0x20);
    (pFVar24->CachePool).AllocatorInstance.Data = pFVar2;
    pFVar5 = (FCacheElement *)puVar27[4];
    uVar3 = puVar27[5];
    (pFVar24->CachePool).ArrayNum = (int)uVar6;
    (pFVar24->CachePool).ArrayMax = (int)((ulonglong)uVar6 >> 0x20);
    pFVar24->MostRecentElement = pFVar4;
    pTVar7 = (TAtomic<unsigned___int64> *)puVar27[6];
    uVar8 = puVar27[7];
    pFVar24->LeastRecentElement = pFVar5;
    *(undefined8 *)&pFVar24->ChunksInUse = uVar3;
    pTVar9 = (TAtomic<unsigned___int64> *)puVar27[8];
    pTVar10 = (TAtomic<unsigned___int64> *)puVar27[9];
    (pFVar24->MemoryCounterBytes).Obj.Ptr = pTVar7;
    pFVar24->MemoryLimitBytes = uVar8;
    uVar3 = puVar27[10];
    uVar8 = puVar27[0xb];
    (pFVar24->ForceInlineMemoryCounterBytes).Obj.Ptr = pTVar9;
    (pFVar24->FeatureMemoryCounterBytes).Obj.Ptr = pTVar10;
    pvVar11 = (void *)puVar27[0xc];
    uVar6 = puVar27[0xd];
    *(undefined8 *)&pFVar24->NumberOfLoadsInFlight = uVar3;
    pFVar24->TimeOfBeginPlayCycles = uVar8;
    pvVar12 = (void *)puVar27[0xe];
    pvVar13 = (void *)puVar27[0xf];
    (pFVar24->CacheMutationCriticalSection).Value.CriticalSection.Opaque1[0] = pvVar11;
    *(undefined8 *)(pFVar24->CacheMutationCriticalSection).Value.CriticalSection.Opaque2 = uVar6;
    (pFVar24->CacheMutationCriticalSection).Value.CriticalSection.Opaque3[0] = pvVar12;
    (pFVar24->CacheMutationCriticalSection).Value.CriticalSection.Opaque3[1] = pvVar13;
    lVar32 = lVar32 + -1;
    puVar28 = puVar27 + 0x10;
  } while (lVar32 != 0);
  uVar3 = puVar27[0x11];
  local_4b0._0_4_ = (int)local_4b0 + -1;
  uVar6 = puVar27[0x12];
  uVar14 = puVar27[0x13];
  *(void **)pFVar22 = (void *)puVar27[0x10];
  *(undefined8 *)&pFVar24->CacheLookupIdMap = uVar3;
  uVar3 = puVar27[0x14];
  uVar15 = puVar27[0x15];
  *(undefined8 *)&(pFVar24->CacheLookupIdMap).field_0x8 = uVar6;
  *(undefined8 *)&(pFVar24->CacheLookupIdMap).field_0x10 = uVar14;
  uVar6 = puVar27[0x16];
  uVar14 = puVar27[0x17];
  *(undefined8 *)&(pFVar24->CacheLookupIdMap).field_0x18 = uVar3;
  *(undefined8 *)&(pFVar24->CacheLookupIdMap).field_0x20 = uVar15;
  uVar3 = puVar27[0x18];
  uVar15 = puVar27[0x19];
  *(undefined8 *)&(pFVar24->CacheLookupIdMap).field_0x28 = uVar6;
  *(undefined8 *)&(pFVar24->CacheLookupIdMap).field_0x30 = uVar14;
  uVar6 = puVar27[0x1a];
  uVar14 = puVar27[0x1b];
  *(undefined8 *)&(pFVar24->CacheLookupIdMap).field_0x38 = uVar3;
  *(undefined8 *)&(pFVar24->CacheLookupIdMap).field_0x40 = uVar15;
  *(undefined8 *)&(pFVar24->CacheLookupIdMap).field_0x48 = uVar6;
  *(undefined8 *)&pFVar24->SoundWaveTracker = uVar14;
  if (((longlong)pFVar34 + (-0x160 - (longlong)pFVar31)) / 0x160 <
      ((longlong)pFVar35 - (longlong)pFVar20) / 0x160) {
    if (pFVar20 < pFVar35) {
      *ppFVar36 = pFVar20;
      ppFVar36[1] = pFVar35;
      *(int *)(ppFVar36 + 2) = (int)local_4b0;
      ppFVar36 = ppFVar36 + 3;
    }
    if (pFVar34 <= pFVar31 + 1) goto LAB_14768383e;
    pFVar35 = pFVar21 + -2;
    pFVar20 = pFVar31;
  }
  else {
    if (pFVar31 + 1 < pFVar34) {
      *ppFVar36 = pFVar31;
      ppFVar36[1] = pFVar21 + -2;
      *(int *)(ppFVar36 + 2) = (int)local_4b0;
      ppFVar36 = ppFVar36 + 3;
    }
    if (pFVar35 <= pFVar20) goto LAB_14768383e;
  }
  iVar37 = (int)(((longlong)pFVar35 - (longlong)pFVar20) / 0x160) + 1;
  pFVar31 = pFVar20;
  if ((int)local_4b0 == 0) goto LAB_14768332e;
  goto LAB_147682d24;
}

// IsObjectPtrEqual<APlayerCameraManager,AActor_*,0> @ 1476838a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<APlayerCameraManager,AActor_*,0>
          (TObjectPtr<APlayerCameraManager> *param_1,AActor **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (APlayerCameraManager *)0x0) {
    return (APlayerCameraManager *)*param_2 == (APlayerCameraManager *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == (APlayerCameraManager *)*param_2;
}

// IsObjectPtrEqual<UBrushComponent,UActorComponent_*,0> @ 1476838c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<UBrushComponent,UActorComponent_*,0>
          (TObjectPtr<UBrushComponent> *param_1,UActorComponent **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (UBrushComponent *)0x0) {
    return (UBrushComponent *)*param_2 == (UBrushComponent *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == (UBrushComponent *)*param_2;
}

// IsObjectPtrEqual<UCameraShakeBase,UCameraShakeBase_*,0> @ 1476838e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<UCameraShakeBase,UCameraShakeBase_*,0>
          (TObjectPtr<UCameraShakeBase> *param_1,UCameraShakeBase **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (UCameraShakeBase *)0x0) {
    return *param_2 == (UCameraShakeBase *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == *param_2;
}

// IsObjectPtrEqual<UStruct,UStruct_const_*,0> @ 147683900

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<UStruct,UStruct_const_*,0>
          (TObjectPtr<UStruct> *param_1,UStruct **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (UStruct *)0x0) {
    return *param_2 == (UStruct *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == *param_2;
}

// IterateOverAvailableMaterials<`FBufferVisualizationData::ConfigureConsoleCommand'::__l2::Local> @ 147683920

void __thiscall
FBufferVisualizationData::
IterateOverAvailableMaterials<_FBufferVisualizationData::ConfigureConsoleCommand_::__l2::Local>
          (FBufferVisualizationData *this,Local *param_1)

{
  ulonglong uVar1;
  uint uVar2;
  int iVar3;
  FString *pFVar4;
  longlong lVar5;
  int iVar6;
  uint *puVar7;
  FString local_78;
  undefined1 *local_68;
  undefined4 uStack_60;
  int iStack_5c;
  int local_58;
  int iStack_54;
  FBufferVisualizationData *local_48;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_40;
  
  iVar6 = *(int *)&(this->MaterialMap).field_0x28;
  local_68 = &(this->MaterialMap).field_0x10;
  local_78.Data.ArrayNum = 0;
  local_78.Data.ArrayMax = 1;
  local_58 = 0;
  iStack_5c = 0;
  if (iVar6 != 0) {
    puVar7 = *(uint **)&(this->MaterialMap).field_0x20;
    if (puVar7 == (uint *)0x0) {
      puVar7 = (uint *)local_68;
    }
    uVar2 = *puVar7;
    local_58 = 0;
    while (uVar2 == 0) {
      lVar5 = (longlong)local_78.Data.ArrayNum;
      local_58 = local_58 + 0x20;
      local_78.Data.ArrayNum = local_78.Data.ArrayNum + 1;
      iStack_5c = iVar6;
      if ((int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 < local_78.Data.ArrayNum)
      goto LAB_1476839ba;
      uVar2 = puVar7[lVar5 + 1];
    }
    local_78.Data.ArrayMax = -uVar2 & uVar2;
    uVar1 = (ulonglong)(uint)local_78.Data.ArrayMax * 2 + 1;
    lVar5 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    iStack_5c = local_58 + -1 + (int)lVar5;
    if (iVar6 < iStack_5c) {
      iStack_5c = iVar6;
    }
  }
LAB_1476839ba:
  uStack_60 = 0xffffffff;
  TStack_40._padding_ = CONCAT44(local_78.Data.ArrayMax,local_78.Data.ArrayNum);
  TStack_40.UnvisitedBitMask = 0xffffffff;
  TStack_40._28_4_ = iStack_5c;
  TStack_40.BaseBitIndex = local_58;
  local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)this;
  iStack_54 = iStack_5c;
  local_48 = this;
  TStack_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_68;
  TStack_40.CurrentBitIndex = iStack_5c;
  if (iStack_5c < iVar6) {
    do {
      lVar5 = (longlong)TStack_40.CurrentBitIndex * 0x40 + *(longlong *)&local_48->MaterialMap;
      pFVar4 = ::FString::FString(&local_78,L"\n  ");
      iVar3 = (pFVar4->Data).ArrayNum;
      iVar6 = iVar3 + -1;
      if (iVar3 == 0) {
        iVar6 = 0;
      }
      ::FString::AppendChars
                (param_1->Message,(wchar_t *)(pFVar4->Data).AllocatorInstance.Data,iVar6);
      if ((FBufferVisualizationData *)local_78.Data.AllocatorInstance.Data !=
          (FBufferVisualizationData *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      iVar3 = *(int *)(lVar5 + 0x10);
      iVar6 = iVar3 + -1;
      if (iVar3 == 0) {
        iVar6 = 0;
      }
      ::FString::AppendChars(param_1->Message,*(wchar_t **)(lVar5 + 8),iVar6);
      TStack_40.UnvisitedBitMask = TStack_40.UnvisitedBitMask & ~TStack_40._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_40);
    } while (TStack_40.CurrentBitIndex < (TStack_40.Array)->NumBits);
  }
  return;
}

// LowerBoundInternal<TTuple<unsigned___int64,float>_const_,int,unsigned___int64,TSortedMap<unsigned___int64,float,TSizedDefaultAllocator<32>,TLess<unsigned___int64_const_>_>::FKeyForward,TLess<unsigned___int64_const_>_> @ 147683ac0

int __cdecl
AlgoImpl::
LowerBoundInternal<TTuple<unsigned___int64,float>_const_,int,unsigned___int64,TSortedMap<unsigned___int64,float,TSizedDefaultAllocator<32>,TLess<unsigned___int64_const_>_>::FKeyForward,TLess<unsigned___int64_const_>_>
          (TTuple<unsigned___int64,float> *param_1,int param_2,ulong64 *param_3,FKeyForward param_4,
          TLess<unsigned___int64_const_> param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar3;
      if (*(ulonglong *)(param_1 + iVar1) < *param_3) {
        iVar3 = iVar1 + (param_2 & 1U);
      }
      uVar2 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar2 != 0);
  }
  return iVar3;
}

// LowerBoundInternal<TTuple<unsigned___int64,FAudioVirtualLoop::FWaveInstanceData>_const_,int,unsigned___int64,TSortedMap<unsigned___int64,FAudioVirtualLoop::FWaveInstanceData,TSizedDefaultAllocator<32>,TLess<unsigned___int64_const_>_>::FKeyForward,TLess<unsigned___int64_const_>_> @ 147683b20

int __cdecl
AlgoImpl::
LowerBoundInternal<TTuple<unsigned___int64,FAudioVirtualLoop::FWaveInstanceData>_const_,int,unsigned___int64,TSortedMap<unsigned___int64,FAudioVirtualLoop::FWaveInstanceData,TSizedDefaultAllocator<32>,TLess<unsigned___int64_const_>_>::FKeyForward,TLess<unsigned___int64_const_>_>
          (TTuple<unsigned___int64,FAudioVirtualLoop::FWaveInstanceData> *param_1,int param_2,
          ulong64 *param_3,FKeyForward param_4,TLess<unsigned___int64_const_> param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar3;
      if (*(ulonglong *)(param_1 + iVar1) < *param_3) {
        iVar3 = iVar1 + (param_2 & 1U);
      }
      uVar2 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar2 != 0);
  }
  return iVar3;
}

// MakeConstArrayView<TArray<FSimpleElementVertex,TSizedDefaultAllocator<32>_>_const_&,TArray<FSimpleElementVertex,TSizedDefaultAllocator<32>_>_> @ 147683b70

TArrayView<FSimpleElementVertex_const_,int> * __cdecl
MakeConstArrayView<TArray<FSimpleElementVertex,TSizedDefaultAllocator<32>_>_const_&,TArray<FSimpleElementVertex,TSizedDefaultAllocator<32>_>_>
          (TArrayView<FSimpleElementVertex_const_,int> *__return_storage_ptr__,
          TArray<FSimpleElementVertex,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FSimpleElementVertex_const_,int> *pTVar4;
  
  iVar1 = param_1->ArrayNum;
  __return_storage_ptr__->DataPtr = (FSimpleElementVertex *)(param_1->AllocatorInstance).Data;
  if (-1 < iVar1) {
    __return_storage_ptr__->ArrayNum = iVar1;
    return __return_storage_ptr__;
  }
  bVar3 = FDebug::CheckVerifyFailedImpl2
                    ("InCount >= 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0xeb,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<FSimpleElementVertex_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// NewObject<UInheritableComponentHandler> @ 147683c20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UInheritableComponentHandler * __cdecl
NewObject<UInheritableComponentHandler>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UInheritableComponentHandler *pUVar2;
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
  pUVar1 = Z_Construct_UClass_UInheritableComponentHandler_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UInheritableComponentHandler *)
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

// NewObject<UTimelineComponent> @ 147683d10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UTimelineComponent * __cdecl
NewObject<UTimelineComponent>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UTimelineComponent *pUVar2;
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
  pUVar1 = Z_Construct_UClass_UTimelineComponent_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UTimelineComponent *)
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

// Sort<TSortableMapBase<unsigned_int,FAudioVolumeProxy,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FAudioVolumeProxy,0>_>::FValueComparisonClass<`FAudioDevice::AddAudioVolumeProxy'::__l2::<lambda_1>_>_> @ 1476843f0

void __thiscall
TSet<TTuple<unsigned_int,FAudioVolumeProxy>,TDefaultMapHashableKeyFuncs<unsigned_int,FAudioVolumeProxy,0>,FDefaultSetAllocator>
::
Sort<TSortableMapBase<unsigned_int,FAudioVolumeProxy,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FAudioVolumeProxy,0>_>::FValueComparisonClass<_FAudioDevice::AddAudioVolumeProxy_::__l2::<lambda_1>_>_>
          (TSet<TTuple<unsigned_int,FAudioVolumeProxy>,TDefaultMapHashableKeyFuncs<unsigned_int,FAudioVolumeProxy,0>,FDefaultSetAllocator>
           *this,FValueComparisonClass<_public:_void___cdecl_FAudioDevice::AddAudioVolumeProxy(FAudioVolumeProxy_const_&)_::_2_::<lambda_1>_>
                 *param_1)

{
  TSparseArrayElementOrFreeListLink<TAlignedBytes<152,8>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FValueComparisonClass<_public:_void___cdecl_FAudioDevice::AddAudioVolumeProxy(FAudioVolumeProxy_const_&)_::_2_::<lambda_1>_>
  *local_res8;
  
  local_res8 = param_1;
  if (0 < *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34) {
    TSparseArrayBase<152,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Compact((TSparseArrayBase<152,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)this);
    iVar4 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    pTVar1 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<152,8>_> **)&this->Elements;
    if (iVar4 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    AlgoImpl::
    IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<152,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<unsigned_int,FAudioVolumeProxy>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<unsigned_int,FAudioVolumeProxy>,TDefaultMapHashableKeyFuncs<unsigned_int,FAudioVolumeProxy,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<unsigned_int,FAudioVolumeProxy,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FAudioVolumeProxy,0>_>::FValueComparisonClass<_FAudioDevice::AddAudioVolumeProxy_::__l2::<lambda_1>_>_>_>_>
              (pTVar1,iVar4,local_res8._0_1_,
               (FElementCompareClass<TSortableMapBase<unsigned_int,FAudioVolumeProxy,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FAudioVolumeProxy,0>_>::FValueComparisonClass<_public:_void___cdecl_FAudioDevice::AddAudioVolumeProxy(FAudioVolumeProxy_const_&)_::_2_::<lambda_1>_>_>
                *)&local_res8);
  }
  Rehash(this);
  return;
}

// Sort<TSortableMapBase<unsigned_int,FAudioVolumeProxy,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FAudioVolumeProxy,0>_>::FValueComparisonClass<`FAudioDevice::UpdateAudioVolumeProxy'::__l15::<lambda_1>_>_> @ 147684480

void __thiscall
TSet<TTuple<unsigned_int,FAudioVolumeProxy>,TDefaultMapHashableKeyFuncs<unsigned_int,FAudioVolumeProxy,0>,FDefaultSetAllocator>
::
Sort<TSortableMapBase<unsigned_int,FAudioVolumeProxy,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FAudioVolumeProxy,0>_>::FValueComparisonClass<_FAudioDevice::UpdateAudioVolumeProxy_::__l15::<lambda_1>_>_>
          (TSet<TTuple<unsigned_int,FAudioVolumeProxy>,TDefaultMapHashableKeyFuncs<unsigned_int,FAudioVolumeProxy,0>,FDefaultSetAllocator>
           *this,FValueComparisonClass<_public:_void___cdecl_FAudioDevice::UpdateAudioVolumeProxy(FAudioVolumeProxy_const_&)_::_15_::<lambda_1>_>
                 *param_1)

{
  TSparseArrayElementOrFreeListLink<TAlignedBytes<152,8>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FValueComparisonClass<_public:_void___cdecl_FAudioDevice::UpdateAudioVolumeProxy(FAudioVolumeProxy_const_&)_::_15_::<lambda_1>_>
  *local_res8;
  
  local_res8 = param_1;
  if (0 < *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34) {
    TSparseArrayBase<152,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Compact((TSparseArrayBase<152,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)this);
    iVar4 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    pTVar1 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<152,8>_> **)&this->Elements;
    if (iVar4 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    AlgoImpl::
    IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<152,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<unsigned_int,FAudioVolumeProxy>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<unsigned_int,FAudioVolumeProxy>,TDefaultMapHashableKeyFuncs<unsigned_int,FAudioVolumeProxy,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<unsigned_int,FAudioVolumeProxy,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FAudioVolumeProxy,0>_>::FValueComparisonClass<_FAudioDevice::UpdateAudioVolumeProxy_::__l15::<lambda_1>_>_>_>_>
              (pTVar1,iVar4,local_res8._0_1_,
               (FElementCompareClass<TSortableMapBase<unsigned_int,FAudioVolumeProxy,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FAudioVolumeProxy,0>_>::FValueComparisonClass<_public:_void___cdecl_FAudioDevice::UpdateAudioVolumeProxy(FAudioVolumeProxy_const_&)_::_15_::<lambda_1>_>_>
                *)&local_res8);
  }
  Rehash(this);
  return;
}

// SpringCharacterUpdate<UE::Math::TVector<double>_> @ 147684510

void __cdecl
SpringMath::SpringCharacterUpdate<UE::Math::TVector<double>_>
          (TVector<double> *param_1,TVector<double> *param_2,TVector<double> *param_3,
          TVector<double> *param_4,float param_5,float param_6,float param_7,float param_8)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined8 uVar9;
  double dVar10;
  double dVar11;
  float fVar12;
  double dVar13;
  double dVar14;
  float fVar15;
  double dVar16;
  
  if (param_5 <= __real_38d1b717) {
    param_5 = __real_38d1b717;
  }
  dVar10 = (param_2->field0_0x0)._s_0.X - (param_4->field0_0x0)._s_0.X;
  fVar15 = __real_40000000 / param_5;
  dVar13 = (double)fVar15;
  dVar16 = __real_3ff0000000000000 / dVar13;
  dVar1 = (param_4->field0_0x0)._s_0.Z;
  dVar11 = (param_4->field0_0x0)._s_0.Y;
  dVar14 = (param_2->field0_0x0)._s_0.Z - dVar1;
  dVar3 = dVar13 * dVar10 + (param_3->field0_0x0)._s_0.X;
  fVar12 = fVar15 * param_6;
  dVar8 = (param_2->field0_0x0)._s_0.Y - dVar11;
  dVar7 = (double)param_6;
  dVar6 = dVar13 * dVar14 + (param_3->field0_0x0)._s_0.Z;
  dVar4 = dVar13 * dVar8 + (param_3->field0_0x0)._s_0.Y;
  dVar2 = __real_3ff0000000000000 / (double)(fVar15 * fVar15);
  dVar5 = (double)(__real_3f800000 /
                  (((fVar12 * __real_3e83b5ca + __real_3ee6ad0d) * fVar12 + __real_3f80f478) *
                   fVar12 + __real_3f800000));
  (param_1->field0_0x0)._s_0.X =
       ((param_1->field0_0x0)._s_0.X - ((dVar3 * dVar7 + dVar10) * dVar16 + dVar2 * dVar3) * dVar5)
       + dVar2 * dVar3 + dVar7 * (param_4->field0_0x0)._s_0.X + dVar16 * dVar10;
  (param_1->field0_0x0)._s_0.Y =
       (dVar2 * dVar4 - ((dVar4 * dVar7 + dVar8) * dVar16 + dVar2 * dVar4) * dVar5) + dVar16 * dVar8
       + dVar7 * dVar11 + (param_1->field0_0x0)._s_0.Y;
  (param_1->field0_0x0)._s_0.Z =
       (dVar2 * dVar6 - ((dVar6 * dVar7 + dVar14) * dVar16 + dVar2 * dVar6) * dVar5) +
       dVar16 * dVar14 + dVar7 * dVar1 + (param_1->field0_0x0)._s_0.Z;
  dVar1 = (param_4->field0_0x0)._s_0.Y;
  dVar11 = (param_4->field0_0x0)._s_0.Z;
  (param_2->field0_0x0)._s_0.X = (dVar3 * dVar7 + dVar10) * dVar5 + (param_4->field0_0x0)._s_0.X;
  (param_2->field0_0x0)._s_0.Y = (dVar4 * dVar7 + dVar8) * dVar5 + dVar1;
  (param_2->field0_0x0)._s_0.Z = (dVar6 * dVar7 + dVar14) * dVar5 + dVar11;
  (param_3->field0_0x0)._s_0.X = ((param_3->field0_0x0)._s_0.X - dVar3 * dVar13 * dVar7) * dVar5;
  (param_3->field0_0x0)._s_0.Y = ((param_3->field0_0x0)._s_0.Y - dVar4 * dVar13 * dVar7) * dVar5;
  (param_3->field0_0x0)._s_0.Z = ((param_3->field0_0x0)._s_0.Z - dVar6 * dVar13 * dVar7) * dVar5;
  dVar1 = (param_4->field0_0x0)._s_0.Z - (param_2->field0_0x0)._s_0.Z;
  dVar14 = (param_4->field0_0x0)._s_0.Y - (param_2->field0_0x0)._s_0.Y;
  dVar11 = (param_4->field0_0x0)._s_0.X - (param_2->field0_0x0)._s_0.X;
  if (dVar14 * dVar14 + dVar11 * dVar11 + dVar1 * dVar1 < (double)(param_7 * param_7)) {
    dVar1 = (param_4->field0_0x0)._s_0.Y;
    (param_2->field0_0x0)._s_0.X = (param_4->field0_0x0)._s_0.X;
    (param_2->field0_0x0)._s_0.Y = dVar1;
    (param_2->field0_0x0)._s_0.Z = (param_4->field0_0x0)._s_0.Z;
    uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    dVar1 = (param_3->field0_0x0)._s_0.X;
    dVar11 = (param_3->field0_0x0)._s_0.Y;
    dVar14 = (param_3->field0_0x0)._s_0.Z;
    if (dVar11 * dVar11 + dVar1 * dVar1 + dVar14 * dVar14 < (double)(param_8 * param_8)) {
      (param_3->field0_0x0)._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      (param_3->field0_0x0)._s_0.Y = (double)uVar9;
      (param_3->field0_0x0)._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    }
  }
  return;
}

// StaticEnum<enum_EAudioVolumeLocationState> @ 147684900

UEnum * __cdecl StaticEnum<enum_EAudioVolumeLocationState>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EAudioVolumeLocationState.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EAudioVolumeLocationState.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EAudioVolumeLocationState,(UObject *)pUVar1,
                       L"EAudioVolumeLocationState");
  }
  return Z_Registration_Info_UEnum_EAudioVolumeLocationState.OuterSingleton;
}

// StaticEnum<enum_EBlueprintCompileMode> @ 147684940

UEnum * __cdecl StaticEnum<enum_EBlueprintCompileMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EBlueprintCompileMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EBlueprintCompileMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EBlueprintCompileMode,(UObject *)pUVar1,
                       L"EBlueprintCompileMode");
  }
  return Z_Registration_Info_UEnum_EBlueprintCompileMode.OuterSingleton;
}

// StaticEnum<enum_EBlueprintStatus> @ 147684980

UEnum * __cdecl StaticEnum<enum_EBlueprintStatus>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EBlueprintStatus.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EBlueprintStatus.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EBlueprintStatus,(UObject *)pUVar1,
                       L"EBlueprintStatus");
  }
  return Z_Registration_Info_UEnum_EBlueprintStatus.OuterSingleton;
}

// StaticEnum<enum_EBlueprintType> @ 1476849c0

UEnum * __cdecl StaticEnum<enum_EBlueprintType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EBlueprintType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EBlueprintType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EBlueprintType,(UObject *)pUVar1,L"EBlueprintType");
  }
  return Z_Registration_Info_UEnum_EBlueprintType.OuterSingleton;
}

// StaticEnum<enum_EBrushType> @ 147684a00

UEnum * __cdecl StaticEnum<enum_EBrushType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EBrushType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EBrushType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EBrushType,(UObject *)pUVar1,L"EBrushType");
  }
  return Z_Registration_Info_UEnum_EBrushType.OuterSingleton;
}

// StaticEnum<enum_ECsgOper> @ 147684a40

UEnum * __cdecl StaticEnum<enum_ECsgOper>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ECsgOper.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_ECsgOper.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_ECsgOper,(UObject *)pUVar1,L"ECsgOper");
  }
  return Z_Registration_Info_UEnum_ECsgOper.OuterSingleton;
}

// StaticEnum<enum_EInterfaceValidResult> @ 147684a80

UEnum * __cdecl StaticEnum<enum_EInterfaceValidResult>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EInterfaceValidResult.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EInterfaceValidResult.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EInterfaceValidResult,(UObject *)pUVar1,
                       L"EInterfaceValidResult");
  }
  return Z_Registration_Info_UEnum_EInterfaceValidResult.OuterSingleton;
}

// StaticEnum<enum_EShouldCookBlueprintPropertyGuids> @ 147684ac0

UEnum * __cdecl StaticEnum<enum_EShouldCookBlueprintPropertyGuids>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EShouldCookBlueprintPropertyGuids.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EShouldCookBlueprintPropertyGuids.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EShouldCookBlueprintPropertyGuids,(UObject *)pUVar1,
                       L"EShouldCookBlueprintPropertyGuids");
  }
  return Z_Registration_Info_UEnum_EShouldCookBlueprintPropertyGuids.OuterSingleton;
}

// StaticEnum<enum_EStructUtilsResult> @ 147684b00

UEnum * __cdecl StaticEnum<enum_EStructUtilsResult>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EStructUtilsResult.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EStructUtilsResult.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EStructUtilsResult,(UObject *)pUVar1,
                       L"EStructUtilsResult");
  }
  return Z_Registration_Info_UEnum_EStructUtilsResult.OuterSingleton;
}

// VelocitySpringCharacterUpdate<UE::Math::TVector<double>_> @ 147684b40

void __cdecl
SpringMath::VelocitySpringCharacterUpdate<UE::Math::TVector<double>_>
          (TVector<double> *param_1,TVector<double> *param_2,TVector<double> *param_3,
          TVector<double> *param_4,TVector<double> *param_5,float param_6,float param_7,
          float param_8,float param_9,float param_10)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  double *pdVar15;
  float fVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  double dVar23;
  double dVar24;
  float fVar25;
  undefined4 uVar26;
  float fVar27;
  undefined1 local_148 [16];
  double local_138;
  undefined1 local_128 [16];
  double local_118;
  double local_108;
  double local_100;
  
  pdVar15 = (double *)local_148;
  dVar20 = (param_5->field0_0x0)._s_0.X;
  dVar1 = (param_3->field0_0x0)._s_0.X;
  dVar17 = dVar20 - dVar1;
  dVar2 = (param_3->field0_0x0)._s_0.Y;
  dVar24 = (param_5->field0_0x0)._s_0.Y;
  dVar23 = (param_3->field0_0x0)._s_0.Z;
  dVar5 = dVar24 - dVar2;
  dVar3 = (param_5->field0_0x0)._s_0.Z;
  dVar6 = dVar3 - dVar23;
  auVar21._0_8_ = dVar17 * dVar17;
  auVar21._8_8_ = 0;
  auVar22._8_8_ = 0;
  auVar22._0_8_ = dVar5 * dVar5 + auVar21._0_8_ + dVar6 * dVar6;
  auVar22 = sqrtpd(auVar21,auVar22);
  fVar27 = (float)auVar22._0_8_;
  if (fVar27 <= __real_38d1b717) {
    local_118 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    uVar11 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    uVar12 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    uVar13 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    uVar14 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_;
  }
  else {
    dVar4 = __real_3ff0000000000000 / (double)fVar27;
    uVar11 = dVar4 * dVar6;
    uVar12 = dVar4 * dVar17;
    uVar13 = dVar4 * dVar5;
    uVar14 = 0;
  }
  uVar26 = (undefined4)((ulonglong)uVar14 >> 0x20);
  local_100 = (double)param_7;
  local_128._8_4_ = (int)uVar14;
  local_128._0_8_ = uVar13;
  local_128._12_4_ = uVar26;
  local_148._8_4_ = (int)uVar14;
  local_148._0_8_ = uVar12;
  local_148._12_4_ = uVar26;
  if (fVar27 <= param_6 * param_7) {
    dVar1 = SUB168(*(undefined1 (*) [16])&param_5->field0_0x0,0);
    dVar2 = SUB168(*(undefined1 (*) [16])&param_5->field0_0x0,8);
    dVar23 = (param_5->field0_0x0)._s_0.Z;
  }
  else {
    dVar17 = (double)param_6;
    dVar1 = local_100 * (double)uVar12 * dVar17 + dVar1;
    dVar23 = local_100 * (double)uVar11 * dVar17 + dVar23;
    dVar2 = local_100 * (double)uVar13 * dVar17 + dVar2;
  }
  if (param_6 <= __real_38d1b717) {
    param_6 = __real_38d1b717;
  }
  dVar6 = (param_2->field0_0x0)._s_0.X - dVar1;
  dVar4 = (param_2->field0_0x0)._s_0.Y - dVar2;
  fVar16 = __real_40000000 / param_6;
  dVar7 = (param_2->field0_0x0)._s_0.Z - dVar23;
  local_108 = (double)fVar16;
  fVar25 = fVar16 * param_8;
  dVar8 = local_108 * dVar6 + (param_4->field0_0x0)._s_0.X;
  dVar17 = __real_3ff0000000000000 / (double)(fVar16 * fVar16);
  dVar9 = local_108 * dVar4 + (param_4->field0_0x0)._s_0.Y;
  dVar18 = (double)param_8;
  dVar10 = local_108 * dVar7 + (param_4->field0_0x0)._s_0.Z;
  dVar19 = __real_3ff0000000000000 / local_108;
  dVar5 = (double)(__real_3f800000 /
                  (((fVar25 * __real_3e83b5ca + __real_3ee6ad0d) * fVar25 + __real_3f80f478) *
                   fVar25 + __real_3f800000));
  (param_1->field0_0x0)._s_0.X =
       ((dVar19 * dVar6 + (param_1->field0_0x0)._s_0.X) -
       ((dVar8 * dVar18 + dVar6) * dVar19 + dVar17 * dVar8) * dVar5) +
       dVar1 * dVar18 + dVar17 * dVar8;
  (param_1->field0_0x0)._s_0.Y =
       (dVar19 * dVar4 - ((dVar9 * dVar18 + dVar4) * dVar19 + dVar17 * dVar9) * dVar5) +
       dVar17 * dVar9 + dVar2 * dVar18 + (param_1->field0_0x0)._s_0.Y;
  (param_1->field0_0x0)._s_0.Z =
       (dVar19 * dVar7 - ((dVar10 * dVar18 + dVar7) * dVar19 + dVar17 * dVar10) * dVar5) +
       dVar17 * dVar10 + dVar23 * dVar18 + (param_1->field0_0x0)._s_0.Z;
  (param_2->field0_0x0)._s_0.X = (dVar8 * dVar18 + dVar6) * dVar5 + dVar1;
  (param_2->field0_0x0)._s_0.Y = (dVar9 * dVar18 + dVar4) * dVar5 + dVar2;
  (param_2->field0_0x0)._s_0.Z = (dVar10 * dVar18 + dVar7) * dVar5 + dVar23;
  (param_4->field0_0x0)._s_0.X = ((param_4->field0_0x0)._s_0.X - dVar8 * local_108 * dVar18) * dVar5
  ;
  (param_4->field0_0x0)._s_0.Y = ((param_4->field0_0x0)._s_0.Y - dVar9 * local_108 * dVar18) * dVar5
  ;
  (param_4->field0_0x0)._s_0.Z =
       ((param_4->field0_0x0)._s_0.Z - dVar10 * local_108 * dVar18) * dVar5;
  if (fVar27 <= param_7 * param_8) {
    pdVar15 = (double *)local_128;
    local_128 = *(undefined1 (*) [16])&param_5->field0_0x0;
    local_118 = (param_5->field0_0x0)._s_0.Z;
  }
  else {
    local_148._8_8_ = local_100 * (double)uVar13 * dVar18 + (param_3->field0_0x0)._s_0.Y;
    local_148._0_8_ = local_100 * (double)uVar12 * dVar18 + (param_3->field0_0x0)._s_0.X;
    local_138 = local_100 * (double)uVar11 * dVar18 + (param_3->field0_0x0)._s_0.Z;
  }
  dVar2 = pdVar15[1];
  dVar1 = pdVar15[2];
  (param_3->field0_0x0)._s_0.X = *pdVar15;
  (param_3->field0_0x0)._s_0.Y = dVar2;
  (param_3->field0_0x0)._s_0.Z = dVar1;
  dVar20 = dVar20 - (param_2->field0_0x0)._s_0.X;
  dVar24 = dVar24 - (param_2->field0_0x0)._s_0.Y;
  dVar3 = dVar3 - (param_2->field0_0x0)._s_0.Z;
  if (dVar24 * dVar24 + dVar20 * dVar20 + dVar3 * dVar3 < (double)(param_9 * param_9)) {
    dVar1 = (param_5->field0_0x0)._s_0.Y;
    dVar20 = (param_5->field0_0x0)._s_0.Z;
    (param_2->field0_0x0)._s_0.X = (param_5->field0_0x0)._s_0.X;
    (param_2->field0_0x0)._s_0.Y = dVar1;
    (param_2->field0_0x0)._s_0.Z = dVar20;
    uVar11 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    dVar20 = (param_4->field0_0x0)._s_0.X;
    dVar1 = (param_4->field0_0x0)._s_0.Y;
    dVar2 = (param_4->field0_0x0)._s_0.Z;
    if (dVar1 * dVar1 + dVar20 * dVar20 + dVar2 * dVar2 < (double)(param_10 * param_10)) {
      (param_4->field0_0x0)._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      (param_4->field0_0x0)._s_0.Y = (double)uVar11;
      (param_4->field0_0x0)._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    }
  }
  return;
}

// VelocitySpringDamper<UE::Math::TVector<double>_> @ 147685130

void __cdecl
SpringMath::VelocitySpringDamper<UE::Math::TVector<double>_>
          (TVector<double> *param_1,TVector<double> *param_2,TVector<double> *param_3,
          TVector<double> *param_4,float param_5,float param_6,float param_7)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  TVector<double>_u_0 *pTVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined8 uVar8;
  double dVar9;
  undefined8 uVar10;
  double dVar11;
  float fVar12;
  TVector<double>_u_0 local_a8;
  TVector<double>_u_0 local_88 [5];
  
  dVar11 = (param_4->field0_0x0)._s_0.Y - (param_3->field0_0x0)._s_0.Y;
  dVar3 = (param_4->field0_0x0)._s_0.Z - (param_3->field0_0x0)._s_0.Z;
  dVar1 = (param_3->field0_0x0)._s_0.X;
  dVar9 = (param_4->field0_0x0)._s_0.X - dVar1;
  auVar6._0_8_ = dVar9 * dVar9;
  auVar6._8_8_ = 0;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = dVar11 * dVar11 + auVar6._0_8_ + dVar3 * dVar3;
  auVar7 = sqrtpd(auVar6,auVar7);
  fVar12 = (float)auVar7._0_8_;
  uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  if (__real_34000000 < fVar12) {
    dVar2 = __real_3ff0000000000000 / (double)fVar12;
    uVar8 = dVar2 * dVar9;
    uVar10 = dVar2 * dVar11;
    uVar4 = dVar2 * dVar3;
  }
  dVar3 = (double)param_5;
  if (fVar12 <= param_5 * param_6) {
    local_a8._s_0.X = (param_4->field0_0x0)._s_0.X;
    local_a8._s_0.Y = (param_4->field0_0x0)._s_0.Y;
    local_a8._s_0.Z = (param_4->field0_0x0)._s_0.Z;
  }
  else {
    dVar9 = (double)param_6;
    local_a8._s_0.X = dVar3 * (double)uVar8 * dVar9 + dVar1;
    local_a8._s_0.Y = dVar3 * (double)uVar10 * dVar9 + (param_3->field0_0x0)._s_0.Y;
    local_a8._s_0.Z = dVar3 * (double)uVar4 * dVar9 + (param_3->field0_0x0)._s_0.Z;
  }
  local_88[0]._s_0.X = local_a8._s_0.X;
  local_88[0]._s_0.Y = local_a8._s_0.Y;
  local_88[0]._s_0.Z = local_a8._s_0.Z;
  CriticalSpringDamper<UE::Math::TVector<double>_>
            (param_1,param_2,(TVector<double> *)&local_88[0]._s_0,param_6,param_7);
  if (fVar12 <= param_5 * param_7) {
    pTVar5 = local_88;
    local_88[0]._s_0.X = (param_4->field0_0x0)._s_0.X;
    local_88[0]._s_0.Y = (param_4->field0_0x0)._s_0.Y;
    local_88[0]._s_0.Z = (param_4->field0_0x0)._s_0.Z;
  }
  else {
    dVar1 = (double)param_7;
    pTVar5 = &local_a8;
    local_a8._s_0.X = dVar1 * dVar3 * (double)uVar8 + (param_3->field0_0x0)._s_0.X;
    local_a8._s_0.Y = dVar1 * dVar3 * (double)uVar10 + (param_3->field0_0x0)._s_0.Y;
    local_a8._s_0.Z = dVar1 * dVar3 * (double)uVar4 + (param_3->field0_0x0)._s_0.Z;
  }
  dVar3 = pTVar5->XYZ[1];
  dVar1 = pTVar5->XYZ[2];
  (param_3->field0_0x0)._s_0.X = (pTVar5->_s_0).X;
  (param_3->field0_0x0)._s_0.Y = dVar3;
  (param_3->field0_0x0)._s_0.Z = dVar1;
  return;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<TSpscQueue<AudioCommandPrivate::FAudioCommand,FMemory>::FNode_*>_> @ 147685380

long64 * __cdecl
std::
_Atomic_address_as<__int64,std::_Atomic_padded<TSpscQueue<AudioCommandPrivate::FAudioCommand,FMemory>::FNode_*>_>
          (_Atomic_padded<TSpscQueue<AudioCommandPrivate::FAudioCommand,FMemory>::FNode_*> *param_1)

{
  return (long64 *)param_1;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<TSpscQueue<AudioCommandPrivate::FAudioCommand,FMemory>::FNode_*>_> @ 147685390

long64 * __cdecl
std::
_Atomic_address_as<__int64,std::_Atomic_padded<TSpscQueue<AudioCommandPrivate::FAudioCommand,FMemory>::FNode_*>_>
          (_Atomic_padded<TSpscQueue<AudioCommandPrivate::FAudioCommand,FMemory>::FNode_*> *param_1)

{
  return (long64 *)param_1;
}

// _Atomic_reinterpret_as<__int64,TSpscQueue<AudioCommandPrivate::FAudioCommand,FMemory>::FNode_*> @ 1476853a0

long64 __cdecl
std::_Atomic_reinterpret_as<__int64,TSpscQueue<AudioCommandPrivate::FAudioCommand,FMemory>::FNode_*>
          (FNode **param_1)

{
  return (long64)*param_1;
}

// ~TFunction_OwnedObject<`ExecuteOnGameThread<`AudioCommandPrivate::FGameThreadAudioCommandQueue::FlushCommands'::__l7::<lambda_1>_>'::__l2::<lambda_1>,1,1> @ 147689150

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ExecuteOnGameThread<`AudioCommandPrivate::FGameThreadAudioCommandQueue::FlushCommands'::__l7::<lambda_1>_>'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_ExecuteOnGameThread<_AudioCommandPrivate::FGameThreadAudioCommandQueue::FlushCommands_::__l7::<lambda_1>_>_::__l2::<lambda_1>,1,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____ExecuteOnGameThread_V<lambda_1>__6__FlushCommands_FGameThreadAudioCommandQueue_AudioCommandPrivate__QEAAXXZ___YAXPEB_W__QEAV1_6__FlushCommands_FGameThreadAudioCommandQueue_AudioCommandPrivate__QEAAXXZ__Z__00_00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
                    /* WARNING: Could not recover jumptable at 0x000147689173. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`ExecuteOnGameThread<`FAudioThread::RunCommandOnGameThread'::__l20::<lambda_1>_>'::__l2::<lambda_1>,1,1> @ 147689180

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ExecuteOnGameThread<`FAudioThread::RunCommandOnGameThread'::__l20::<lambda_1>_>'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_ExecuteOnGameThread<_FAudioThread::RunCommandOnGameThread_::__l20::<lambda_1>_>_::__l2::<lambda_1>,1,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`ExecuteOnGameThread<`FAudioThread::RunCommandOnGameThread'::`20'::<lambda_1>_>'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
                    /* WARNING: Could not recover jumptable at 0x0001476891a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`FAudioThread::SuspendAudioThread'::__l2::<lambda_1>,1,0> @ 1476891b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FAudioThread::SuspendAudioThread'::__l2::<lambda_1>,1,0>::
~TFunction_OwnedObject<_FAudioThread::SuspendAudioThread_::__l2::<lambda_1>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FAudioThread::SuspendAudioThread'::`2'::<lambda_1>,1,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FAudioThread::GetCommandWrapper'::__l5::<lambda_1>,1,1> @ 1476891d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FAudioThread::GetCommandWrapper'::__l5::<lambda_1>,1,1>::
~TFunction_OwnedObject<_FAudioThread::GetCommandWrapper_::__l5::<lambda_1>,1,1>(void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FAudioThread::GetCommandWrapper'::`5'::<lambda_1>,1,1>::_vftable_;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
                    /* WARNING: Could not recover jumptable at 0x0001476891f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`FAudioChunkCache::ExecuteOnLoadCompleteCallback'::__l7::<lambda_1>,1,1> @ 147689200

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FAudioChunkCache::ExecuteOnLoadCompleteCallback'::__l7::<lambda_1>,1,1>::
~TFunction_OwnedObject<_FAudioChunkCache::ExecuteOnLoadCompleteCallback_::__l7::<lambda_1>,1,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FAudioChunkCache::ExecuteOnLoadCompleteCallback'::`7'::<lambda_1>,1,1>
        ::_vftable_;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
                    /* WARNING: Could not recover jumptable at 0x000147689223. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`AAudioVolume::AddProxy'::__l8::<lambda_1>,1,1> @ 147689230

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`AAudioVolume::AddProxy'::__l8::<lambda_1>,1,1>::
~TFunction_OwnedObject<_AAudioVolume::AddProxy_::__l8::<lambda_1>,1,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`AAudioVolume::AddProxy'::`8'::<lambda_1>,1,1>::_vftable_;
  DestructItems<FAudioVolumeSubmixOverrideSettings,int>
            (*(FAudioVolumeSubmixOverrideSettings **)((longlong)this + 0x88),
             *(int *)((longlong)this + 0x90));
  if (*(void **)((longlong)this + 0x88) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x88));
  }
  DestructItems<FAudioVolumeSubmixSendSettings,int>
            (*(FAudioVolumeSubmixSendSettings **)((longlong)this + 0x78),
             *(int *)((longlong)this + 0x80));
  if (*(void **)((longlong)this + 0x78) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x78));
  }
  FAudioDeviceHandle::~FAudioDeviceHandle((FAudioDeviceHandle *)((longlong)this + 8));
  return;
}

// ~TFunction_OwnedObject<`AAudioVolume::RemoveProxy'::__l8::<lambda_1>,1,1> @ 1476892a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`AAudioVolume::RemoveProxy'::__l8::<lambda_1>,1,1>::
~TFunction_OwnedObject<_AAudioVolume::RemoveProxy_::__l8::<lambda_1>,1,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`AAudioVolume::RemoveProxy'::`8'::<lambda_1>,1,1>::_vftable_;
  FAudioDeviceHandle::~FAudioDeviceHandle((FAudioDeviceHandle *)((longlong)this + 8));
  return;
}

// ~TFunction_OwnedObject<`AAudioVolume::UpdateProxy'::__l8::<lambda_1>,1,1> @ 1476892c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`AAudioVolume::UpdateProxy'::__l8::<lambda_1>,1,1>::
~TFunction_OwnedObject<_AAudioVolume::UpdateProxy_::__l8::<lambda_1>,1,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`AAudioVolume::UpdateProxy'::`8'::<lambda_1>,1,1>::_vftable_;
  DestructItems<FAudioVolumeSubmixOverrideSettings,int>
            (*(FAudioVolumeSubmixOverrideSettings **)((longlong)this + 0x78),
             *(int *)((longlong)this + 0x80));
  if (*(void **)((longlong)this + 0x78) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x78));
  }
  DestructItems<FAudioVolumeSubmixSendSettings,int>
            (*(FAudioVolumeSubmixSendSettings **)((longlong)this + 0x68),
             *(int *)((longlong)this + 0x70));
  if (*(void **)((longlong)this + 0x68) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x68));
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`ISoundParameterControllerInterface::SetParameters'::__l17::<lambda_1>,1,1> @ 147689320

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ISoundParameterControllerInterface::SetParameters'::__l17::<lambda_1>,1,1>::
~TFunction_OwnedObject<_ISoundParameterControllerInterface::SetParameters_::__l17::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`ISoundParameterControllerInterface::SetParameters'::`17'::<lambda_1>,1,1>
        ::_vftable_;
  DestructItems<FAudioParameter,int>
            (*(FAudioParameter **)((longlong)this + 0x10),*(int *)((longlong)this + 0x18));
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`FAudioChunkCache::KickOffAsyncLoad'::__l47::<lambda_1>,0,1> @ 147689360

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FAudioChunkCache::KickOffAsyncLoad'::__l47::<lambda_1>,0,1>::
~TFunction_OwnedObject<_FAudioChunkCache::KickOffAsyncLoad_::__l47::<lambda_1>,0,1>(void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FAudioChunkCache::KickOffAsyncLoad'::`47'::<lambda_1>,0,1>::_vftable_
  ;
  if (*(longlong *)((longlong)this + 0x20) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x30);
    if (*(longlong **)((longlong)this + 0x48) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x48);
    }
                    /* WARNING: Could not recover jumptable at 0x000147689383. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`ISoundParameterControllerInterface::SetTriggerParameter'::__l11::<lambda_1>,1,1> @ 147689390

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ISoundParameterControllerInterface::SetTriggerParameter'::__l11::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_ISoundParameterControllerInterface::SetTriggerParameter_::__l11::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`ISoundParameterControllerInterface::SetTriggerParameter'::`11'::<lambda_1>,1,1>
        ::_vftable_;
  FAudioParameter::~FAudioParameter((FAudioParameter *)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`FAudioThread::GetCommandWrapper'::__l7::<lambda_2>,1,1> @ 1476893b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FAudioThread::GetCommandWrapper'::__l7::<lambda_2>,1,1>::
~TFunction_OwnedObject<_FAudioThread::GetCommandWrapper_::__l7::<lambda_2>,1,1>(void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FAudioThread::GetCommandWrapper'::`7'::<lambda_2>,1,1>::_vftable_;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
                    /* WARNING: Could not recover jumptable at 0x0001476893d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`FAudioThread::RunCommandOnGameThread'::__l22::<lambda_2>,1,1> @ 1476893e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FAudioThread::RunCommandOnGameThread'::__l22::<lambda_2>,1,1>::
~TFunction_OwnedObject<_FAudioThread::RunCommandOnGameThread_::__l22::<lambda_2>,1,1>(void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FAudioThread::RunCommandOnGameThread'::`22'::<lambda_2>,1,1>::
        _vftable_;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
                    /* WARNING: Could not recover jumptable at 0x000147689403. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`UBlueprintGeneratedClass::AddReferencedObjectsInUbergraphFrame'::__l14::<lambda_2>,1,0> @ 147689410

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UBlueprintGeneratedClass::AddReferencedObjectsInUbergraphFrame'::__l14::<lambda_2>,1,0>
::
~TFunction_OwnedObject<_UBlueprintGeneratedClass::AddReferencedObjectsInUbergraphFrame_::__l14::<lambda_2>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UBlueprintGeneratedClass::AddReferencedObjectsInUbergraphFrame'::`14'::<lambda_2>,1,0>
        ::_vftable_;
  return;
}

// operator<< @ 14768b0f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FArchive * __cdecl operator<<(FArchive *param_1,FBasedPosition *param_2)

{
  (**(code **)(*(longlong *)param_1 + 0x150))();
  UE::Math::operator<<(param_1,&param_2->Position);
  return param_1;
}

// operator() @ 14768d730

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
<lambda_26>::operator()(<lambda_26> *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  code *pcVar3;
  float fVar4;
  IConsoleVariable *pIVar5;
  bool bVar6;
  FStreamingManagerCollection *this_00;
  IAudioStreamingManager *pIVar7;
  undefined8 uVar8;
  IConsoleManager *pIVar9;
  wchar_t *_Str;
  ForAnyElementType FVar10;
  float fVar11;
  float fVar12;
  double dVar13;
  undefined1 local_68 [16];
  FString local_58;
  undefined4 local_48;
  undefined1 local_44;
  undefined8 local_40;
  undefined1 local_38;
  undefined4 local_34;
  undefined4 local_30;
  
  if (0 < param_1->ArrayNum) {
    pFVar1 = (param_1->AllocatorInstance).Data;
    if (*(int *)(pFVar1 + 8) == 0) {
      _Str = L"";
    }
    else {
      _Str = *(wchar_t **)pFVar1;
    }
    dVar13 = _wtof(_Str);
    if (0.0 < (float)dVar13) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        pIVar9 = IConsoleManager::Get();
        StreamCacheSizeCVar =
             (IConsoleVariable *)
             (**(code **)((longlong)*pIVar9 + 0xc0))
                       (pIVar9,L"au.streamcaching.StreamCacheSizeOverrideMB",1);
        _Init_thread_footer(&::_TSS0);
      }
      if ((StreamCacheSizeCVar == (IConsoleVariable *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("StreamCacheSizeCVar",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioStreamingCache.cpp"
                             ,0x103,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      fVar4 = __real_5f000000;
      fVar11 = (float)dVar13 * __real_44800000;
      if (__real_5f000000 <= fVar11) {
        fVar11 = fVar11 - __real_5f000000;
      }
      fVar12 = (float)(**(code **)(*(longlong *)StreamCacheSizeCVar + 0xd0))();
      fVar12 = fVar12 * __real_44800000;
      if (fVar4 <= fVar12) {
        fVar12 = fVar12 - fVar4;
      }
      if ((ulonglong)((longlong)fVar11 * 0x400) < (ulonglong)((longlong)fVar12 * 0x400)) {
        this_00 = IStreamingManager::Get();
        pIVar7 = FStreamingManagerCollection::GetAudioStreamingManager(this_00);
        (**(code **)(*(longlong *)pIVar7 + 0xb8))
                  (pIVar7,(longlong)fVar12 * 0x400 + (longlong)fVar11 * -0x400);
      }
      pIVar5 = StreamCacheSizeCVar;
      local_48 = 0xe000000;
      local_44 = 0;
      local_40 = 0;
      local_38 = 0;
      local_34 = 0xf000000;
      local_30 = 0x1000000;
      ::FString::PrintfImpl(&local_58,L"%g");
      lVar2 = *(longlong *)pIVar5;
      FVar10.Data = (FScriptContainerElement *)L"";
      if (local_58.Data.ArrayNum != 0) {
        FVar10.Data = local_58.Data.AllocatorInstance.Data;
      }
      uVar8 = (**(code **)(lVar2 + 0xa8))(pIVar5,local_68,&local_48);
      (**(code **)(lVar2 + 0xb0))(pIVar5,FVar10.Data,uVar8);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      if (3 < (byte)LogAudioStreamCaching._0_1_) {
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAudioStreamCaching);
      }
    }
  }
  return;
}

// `vector_deleting_destructor'`adjustor{80}' @ 14768e2e8

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl UBlueprint::`vector deleting
   destructor'`adjustor{80}' (unsigned int) __ptr64 */

void * __thiscall
UBlueprint::_vector_deleting_destructor__adjustor_80__(UBlueprint *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UBlueprint *)&this[-1].ParentClass,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{520}' @ 14768e2f8

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl UBlueprintGeneratedClass::`vector deleting
   destructor'`adjustor{520}' (unsigned int) __ptr64 */

void * __thiscall
UBlueprintGeneratedClass::_vector_deleting_destructor__adjustor_520__
          (UBlueprintGeneratedClass *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UBlueprintGeneratedClass *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14768e30c

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl UCameraComponent::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UCameraComponent::_vector_deleting_destructor__adjustor_40__(UCameraComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UCameraComponent *)&this[-1].PostProcessSettings.LPVFadeRange_DEPRECATED,
                      param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{592}' @ 14768e31c

/* [thunk]:public: virtual void * __ptr64 __cdecl UCameraProxyMeshComponent::`vector deleting
   destructor'`adjustor{592}' (unsigned int) __ptr64 */

void * __thiscall
UCameraProxyMeshComponent::_vector_deleting_destructor__adjustor_592__
          (UCameraProxyMeshComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UCameraProxyMeshComponent *)&this[-1].field_0x400,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{600}' @ 14768e330

/* [thunk]:public: virtual void * __ptr64 __cdecl UCameraProxyMeshComponent::`vector deleting
   destructor'`adjustor{600}' (unsigned int) __ptr64 */

void * __thiscall
UCameraProxyMeshComponent::_vector_deleting_destructor__adjustor_600__
          (UCameraProxyMeshComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UCameraProxyMeshComponent *)&this[-1].field_0x3f8,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{608}' @ 14768e344

/* [thunk]:public: virtual void * __ptr64 __cdecl UCameraProxyMeshComponent::`vector deleting
   destructor'`adjustor{608}' (unsigned int) __ptr64 */

void * __thiscall
UCameraProxyMeshComponent::_vector_deleting_destructor__adjustor_608__
          (UCameraProxyMeshComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UCameraProxyMeshComponent *)&this[-1].field_0x3f0,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14768e358

/* [thunk]:public: virtual void * __ptr64 __cdecl UCameraProxyMeshComponent::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UCameraProxyMeshComponent::_vector_deleting_destructor__adjustor_40__
          (UCameraProxyMeshComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UCameraProxyMeshComponent *)&this[-1].field_0x628,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 14768e370

void * __thiscall
IBaseDelegateInstance<void___cdecl(FActorsInitializedParams_const_&),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(FActorsInitializedParams_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14768e3a0

void * __thiscall
TBaseRawMethodDelegateInstance<0,AudioCommandPrivate::FGameThreadAudioCommandQueue,void___cdecl(FActorsInitializedParams_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,AudioCommandPrivate::FGameThreadAudioCommandQueue,void___cdecl(FActorsInitializedParams_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14768e3d0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,AAudioVolume,void___cdecl(USceneComponent_*,enum_EUpdateTransformFlags,enum_ETeleportType),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14768e400

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UCameraModifier_CameraShake,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UCameraModifier_CameraShake,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14768e430

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(FActorsInitializedParams_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(FActorsInitializedParams_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14768e460

void * __thiscall
UE::Tasks::Private::TExecutableTask<`FAudioAsyncBatcher::Flush'::__l2::<lambda_1>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14768e4d0

void * __thiscall
UE::Tasks::Private::TExecutableTask<TUniqueFunction<void___cdecl(void)>_>::
_scalar_deleting_destructor_
          (TExecutableTask<TUniqueFunction<void___cdecl(void)>_> *this,uint param_1)

{
  FTaskBase::~FTaskBase((FTaskBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x140,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14768e530

void * __thiscall
UE::Tasks::Private::TExecutableTaskBase<`FAudioAsyncBatcher::Flush'::__l2::<lambda_1>,void,void>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14768e570

void * __thiscall
UE::Tasks::Private::TExecutableTaskBase<TUniqueFunction<void___cdecl(void)>,void,void>::
_scalar_deleting_destructor_
          (TExecutableTaskBase<TUniqueFunction<void___cdecl(void)>,void,void> *this,uint param_1)

{
  FTaskBase::~FTaskBase((FTaskBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x110);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14768e5b0

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<void_(__cdecl*)(FActiveSound_&),1,0>::
_scalar_deleting_destructor_
          (TFunction_OwnedObject<void_(__cdecl*)(FActiveSound_&),1,0> *this,uint param_1)

{
  this->_padding_ =
       (longlong)
       &___7__TFunction_OwnedObject_P6AXAEAUFActiveSound___Z_00_0A__Function_Private_Core_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14768e5f0

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<void_(__cdecl*)(enum_EAudioChunkLoadResult),0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_P6AXW4EAudioChunkLoadResult___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14768e630

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ExecuteOnGameThread<`AudioCommandPrivate::FGameThreadAudioCommandQueue::FlushCommands'::__l7::<lambda_1>_>'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____ExecuteOnGameThread_V<lambda_1>__6__FlushCommands_FGameThreadAudioCommandQueue_AudioCommandPrivate__QEAAXXZ___YAXPEB_W__QEAV1_6__FlushCommands_FGameThreadAudioCommandQueue_AudioCommandPrivate__QEAAXXZ__Z__00_00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14768e690

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ExecuteOnGameThread<`FAudioThread::RunCommandOnGameThread'::__l20::<lambda_1>_>'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`ExecuteOnGameThread<`FAudioThread::RunCommandOnGameThread'::`20'::<lambda_1>_>'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14768e6f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FAudioThread::SuspendAudioThread'::__l2::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FAudioThread::SuspendAudioThread'::`2'::<lambda_1>,1,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14768e730

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FAudioThread::GetCommandWrapper'::__l5::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FAudioThread::GetCommandWrapper'::`5'::<lambda_1>,1,1>::_vftable_;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14768e790

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FAudioChunkCache::ExecuteOnLoadCompleteCallback'::__l7::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FAudioChunkCache::ExecuteOnLoadCompleteCallback'::`7'::<lambda_1>,1,1>
        ::_vftable_;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14768e7f0

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`AAudioVolume::AddProxy'::__l8::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`AAudioVolume::AddProxy'::`8'::<lambda_1>,1,1>::_vftable_;
  DestructItems<FAudioVolumeSubmixOverrideSettings,int>
            (*(FAudioVolumeSubmixOverrideSettings **)((longlong)this + 0x88),
             *(int *)((longlong)this + 0x90));
  if (*(void **)((longlong)this + 0x88) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x88));
  }
  DestructItems<FAudioVolumeSubmixSendSettings,int>
            (*(FAudioVolumeSubmixSendSettings **)((longlong)this + 0x78),
             *(int *)((longlong)this + 0x80));
  if (*(void **)((longlong)this + 0x78) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x78));
  }
  FAudioDeviceHandle::~FAudioDeviceHandle((FAudioDeviceHandle *)((longlong)this + 8));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14768e890

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`AAudioVolume::RemoveProxy'::__l8::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`AAudioVolume::RemoveProxy'::`8'::<lambda_1>,1,1>::_vftable_;
  FAudioDeviceHandle::~FAudioDeviceHandle((FAudioDeviceHandle *)((longlong)this + 8));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14768e8e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`AAudioVolume::UpdateProxy'::__l8::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`AAudioVolume::UpdateProxy'::`8'::<lambda_1>,1,1>::_vftable_;
  DestructItems<FAudioVolumeSubmixOverrideSettings,int>
            (*(FAudioVolumeSubmixOverrideSettings **)((longlong)this + 0x78),
             *(int *)((longlong)this + 0x80));
  if (*(void **)((longlong)this + 0x78) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x78));
  }
  DestructItems<FAudioVolumeSubmixSendSettings,int>
            (*(FAudioVolumeSubmixSendSettings **)((longlong)this + 0x68),
             *(int *)((longlong)this + 0x70));
  if (*(void **)((longlong)this + 0x68) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x68));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x98);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14768e960

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ISoundParameterControllerInterface::SetParameters'::__l17::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`ISoundParameterControllerInterface::SetParameters'::`17'::<lambda_1>,1,1>
        ::_vftable_;
  DestructItems<FAudioParameter,int>
            (*(FAudioParameter **)((longlong)this + 0x10),*(int *)((longlong)this + 0x18));
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14768e9c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FAudioChunkCache::KickOffAsyncLoad'::__l47::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FAudioChunkCache::KickOffAsyncLoad'::`47'::<lambda_1>,0,1>::_vftable_
  ;
  if (*(longlong *)((longlong)this + 0x20) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x30);
    if (*(longlong **)((longlong)this + 0x48) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x48);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14768ea20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ISoundParameterControllerInterface::SetTriggerParameter'::__l11::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`ISoundParameterControllerInterface::SetTriggerParameter'::`11'::<lambda_1>,1,1>
        ::_vftable_;
  FAudioParameter::~FAudioParameter((FAudioParameter *)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14768ea70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FAudioThread::GetCommandWrapper'::__l7::<lambda_2>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FAudioThread::GetCommandWrapper'::`7'::<lambda_2>,1,1>::_vftable_;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14768ead0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FAudioThread::RunCommandOnGameThread'::__l22::<lambda_2>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FAudioThread::RunCommandOnGameThread'::`22'::<lambda_2>,1,1>::
        _vftable_;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14768eb30

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UBlueprintGeneratedClass::AddReferencedObjectsInUbergraphFrame'::__l14::<lambda_2>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UBlueprintGeneratedClass::AddReferencedObjectsInUbergraphFrame'::`14'::<lambda_2>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14768eb70

void * __thiscall
TResourceArray<FSimpleElementVertex,0>::_scalar_deleting_destructor_
          (TResourceArray<FSimpleElementVertex,0> *this,uint param_1)

{
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->_padding_);
  this->_padding_ = (longlong)&___7FResourceArrayUploadInterface__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14768ebc0

void * __thiscall
TThreadSingleton<FBoneContainerScratchArea>::_scalar_deleting_destructor_
          (TThreadSingleton<FBoneContainerScratchArea> *this,uint param_1)

{
  ~TThreadSingleton<FBoneContainerScratchArea>(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14768ec00

void * __thiscall AAudioVolume::_scalar_deleting_destructor_(AAudioVolume *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7AAudioVolume__6B_;
  DestructItems<FAudioVolumeSubmixOverrideSettings,int>
            ((FAudioVolumeSubmixOverrideSettings *)
             (this->SubmixOverrideSettings).AllocatorInstance.Data,
             (this->SubmixOverrideSettings).ArrayNum);
  pFVar1 = (this->SubmixOverrideSettings).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FAudioVolumeSubmixSendSettings,int>
            ((FAudioVolumeSubmixSendSettings *)(this->SubmixSendSettings).AllocatorInstance.Data,
             (this->SubmixSendSettings).ArrayNum);
  pFVar1 = (this->SubmixSendSettings).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  AVolume::~AVolume((AVolume *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x368);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14768ecb0

void * __thiscall ABlockingVolume::_scalar_deleting_destructor_(ABlockingVolume *this,uint param_1)

{
  *(undefined ***)this = &___7ABlockingVolume__6B_;
  AVolume::~AVolume((AVolume *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x2f8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14768ed10

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall ABrush::_scalar_deleting_destructor_(ABrush *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7ABrush__6B_;
  pFVar1 = (this->SavedSelections).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  AActor::~AActor((AActor *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x2f8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14768ed90

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall ABrushShape::_scalar_deleting_destructor_(ABrushShape *this,uint param_1)

{
  *(undefined ***)this = &___7ABrush__6B_;
  if (*(void **)&this->field_0x2e8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x2e8);
  }
  AActor::~AActor((AActor *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x2f8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14768ee10

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall ACameraActor::_scalar_deleting_destructor_(ACameraActor *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7ACameraActor__6B_;
  pFVar1 = (this->PostProcessSettings_DEPRECATED).WeightedBlendables.Array.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  AActor::~AActor((AActor *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xa60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14768ee90

void * __thiscall
ACameraBlockingVolume::_scalar_deleting_destructor_(ACameraBlockingVolume *this,uint param_1)

{
  *(undefined ***)this = &___7ACameraBlockingVolume__6B_;
  AVolume::~AVolume((AVolume *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x2f8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14768eef0

void * __thiscall
`FBlueprintCookedComponentInstancingData::BuildCachedPropertyDataFromTemplate'::__l2::
FBlueprintComponentInstanceDataWriter::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FArchive::~FArchive(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14768ef30

void * __thiscall
FBoneContainerScratchArea::_scalar_deleting_destructor_
          (FBoneContainerScratchArea *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->MeshIndexToCompactPoseIndex).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TThreadSingleton<FBoneContainerScratchArea>::~TThreadSingleton<FBoneContainerScratchArea>
            ((TThreadSingleton<FBoneContainerScratchArea> *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14768ef80

/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */

void * __thiscall
FCachedAudioStreamingManager::_scalar_deleting_destructor_
          (FCachedAudioStreamingManager *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FCachedAudioStreamingManager__6B_;
  DestructItems<FAudioChunkCache,int>
            ((FAudioChunkCache *)(this->CacheArray).AllocatorInstance.Data,
             (this->CacheArray).ArrayNum);
  pFVar1 = (this->CacheArray).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IStreamingManager__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14768eff0

void * __thiscall
`UCameraProxyMeshComponent::CreateSceneProxy'::__l2::FCameraProxyMeshProxy::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FStaticMeshSceneProxy::~FStaticMeshSceneProxy(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb90);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14768f030

void * __thiscall
FPersistentFrameCollector::_scalar_deleting_destructor_
          (FPersistentFrameCollector *this,uint param_1)

{
  FReferenceCollector::~FReferenceCollector((FReferenceCollector *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14768f070

void * __thiscall
FSimpleElementVertexDeclaration::_scalar_deleting_destructor_
          (FSimpleElementVertexDeclaration *this,uint param_1)

{
  FRHIResource *this_00;
  
  this->_padding_ = (longlong)&___7FSimpleElementVertexDeclaration__6B_;
  this_00 = (FRHIResource *)(this->VertexDeclarationRHI).Reference;
  if (this_00 != (FRHIResource *)0x0) {
    FRHIResource::Release(this_00);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14768f0d0

void * __thiscall
IAudioStreamingManager::_scalar_deleting_destructor_(IAudioStreamingManager *this,uint param_1)

{
  *(undefined ***)this = &___7IStreamingManager__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14768f110

void * __thiscall
IBlueprintPropertyGuidProvider::_scalar_deleting_destructor_
          (IBlueprintPropertyGuidProvider *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14768f140

void * __thiscall
UActorSoundParameterInterface::_scalar_deleting_destructor_
          (UActorSoundParameterInterface *this,uint param_1)

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

// `scalar_deleting_destructor' @ 14768f1a0

void * __thiscall
UAudioParameterConversionStatics::_scalar_deleting_destructor_
          (UAudioParameterConversionStatics *this,uint param_1)

{
  *(undefined ***)this = &___7UBlueprintFunctionLibrary__6B_;
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

// `scalar_deleting_destructor' @ 14768f200

void * __thiscall
UAudioWidgetSubsystem::_scalar_deleting_destructor_(UAudioWidgetSubsystem *this,uint param_1)

{
  *(undefined ***)this = &___7UAudioWidgetSubsystem__6B_;
  UEngineSubsystem::~UEngineSubsystem((UEngineSubsystem *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14768f260

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall UBlueprint::_scalar_deleting_destructor_(UBlueprint *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UBlueprintCore__;
  this->_padding_ = (longlong)&_vftable__for__IBlueprintPropertyGuidProvider__;
  pFVar1 = (this->ComponentClassOverrides).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Timelines).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ComponentTemplates).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UBlueprintCore::~UBlueprintCore((UBlueprintCore *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xa8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14768f300

void * __thiscall
UBlueprintFunctionLibrary::_scalar_deleting_destructor_
          (UBlueprintFunctionLibrary *this,uint param_1)

{
  *(undefined ***)this = &___7UBlueprintFunctionLibrary__6B_;
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

// `scalar_deleting_destructor' @ 14768f360

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall
UBlueprintGeneratedClass::_scalar_deleting_destructor_(UBlueprintGeneratedClass *this,uint param_1)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UClass__;
  this->_padding_ = (longlong)&_vftable__for__IBlueprintPropertyGuidProvider__;
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->SerializeAndPostLoadCritical);
  TIndirectArray<FCustomPropertyListNode,TSizedDefaultAllocator<32>_>::
  ~TIndirectArray<FCustomPropertyListNode,TSizedDefaultAllocator<32>_>
            (&this->CustomPropertyListForPostConstruction);
  *(undefined4 *)&(this->CookedComponentInstancingData).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CookedComponentInstancingData).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FBlueprintCookedComponentInstancingData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FBlueprintCookedComponentInstancingData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FBlueprintCookedComponentInstancingData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CookedComponentInstancingData);
  *(undefined4 *)&(this->CookedPropertyGuids).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CookedPropertyGuids).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FGuid>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FGuid>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FGuid>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CookedPropertyGuids);
  pFVar2 = (this->FieldNotifies).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->ComponentClassOverrides).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->Timelines).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->ComponentTemplates).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->DynamicBindingObjects).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UClass::~UClass((UClass *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x370);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14768f4a0

void * __thiscall
UBlueprintInstancedStructLibrary::_scalar_deleting_destructor_
          (UBlueprintInstancedStructLibrary *this,uint param_1)

{
  *(undefined ***)this = &___7UBlueprintFunctionLibrary__6B_;
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

// `scalar_deleting_destructor' @ 14768f500

void * __thiscall
UBlueprintMapLibrary::_scalar_deleting_destructor_(UBlueprintMapLibrary *this,uint param_1)

{
  *(undefined ***)this = &___7UBlueprintFunctionLibrary__6B_;
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

// `scalar_deleting_destructor' @ 14768f560

void * __thiscall
UBlueprintSetLibrary::_scalar_deleting_destructor_(UBlueprintSetLibrary *this,uint param_1)

{
  *(undefined ***)this = &___7UBlueprintFunctionLibrary__6B_;
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

// `scalar_deleting_destructor' @ 14768f5c0

void * __thiscall UBookMark::_scalar_deleting_destructor_(UBookMark *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UBookMark__6B_;
  DestructItems<FString,int>
            ((FString *)(this->HiddenLevels).AllocatorInstance.Data,(this->HiddenLevels).ArrayNum);
  pFVar1 = (this->HiddenLevels).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UBookmarkBase::~UBookmarkBase((UBookmarkBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x68);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14768f640

void * __thiscall UBrushBuilder::_scalar_deleting_destructor_(UBrushBuilder *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UBrushBuilder__6B_;
  DestructItems<FBuilderPoly,int>
            ((FBuilderPoly *)(this->Polys).AllocatorInstance.Data,(this->Polys).ArrayNum);
  pFVar1 = (this->Polys).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Vertices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ToolTip).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BitmapFilename).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
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

// `scalar_deleting_destructor' @ 14768f6f0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall
UCameraComponent::_scalar_deleting_destructor_(UCameraComponent *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  pFVar1 = (this->PostProcessSettings).WeightedBlendables.Array.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ExtraPostProcessBlendWeights).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FPostProcessSettings,int>
            ((FPostProcessSettings *)(this->ExtraPostProcessBlends).AllocatorInstance.Data,
             (this->ExtraPostProcessBlends).ArrayNum);
  pFVar1 = (this->ExtraPostProcessBlends).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  USceneComponent::~USceneComponent((USceneComponent *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xaa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14768f7b0

void * __thiscall
UCameraLensEffectInterface::_scalar_deleting_destructor_
          (UCameraLensEffectInterface *this,uint param_1)

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

// `scalar_deleting_destructor' @ 14768f810

void * __thiscall
UCameraLensEffectInterfaceClassSupportLibrary::_scalar_deleting_destructor_
          (UCameraLensEffectInterfaceClassSupportLibrary *this,uint param_1)

{
  *(undefined ***)this = &___7UBlueprintFunctionLibrary__6B_;
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

// `scalar_deleting_destructor' @ 14768f870

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void * __thiscall UCameraModifier::_scalar_deleting_destructor_(UCameraModifier *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UCameraModifier__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14768f8d0

void * __thiscall
UCameraModifier_CameraShake::_scalar_deleting_destructor_
          (UCameraModifier_CameraShake *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UCameraModifier_CameraShake__6B_;
  DestructItems<FCameraShakeDebugData,int>
            ((FCameraShakeDebugData *)(this->DebugShakes).AllocatorInstance.Data,
             (this->DebugShakes).ArrayNum);
  pFVar1 = (this->DebugShakes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->ExpiredPooledShakesMap).field_0x48 = 0;
  pvVar2 = *(void **)&(this->ExpiredPooledShakesMap).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<TSubclassOf<UCameraShakeBase>,FPooledCameraShakes>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TSubclassOf<UCameraShakeBase>,FPooledCameraShakes>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TSubclassOf<UCameraShakeBase>,FPooledCameraShakes>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ExpiredPooledShakesMap);
  pFVar1 = (this->ActiveShakes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UCameraModifier__6B_;
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

// `scalar_deleting_destructor' @ 14768f9a0

void * __thiscall
UCameraProxyMeshComponent::_scalar_deleting_destructor_
          (UCameraProxyMeshComponent *this,uint param_1)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  UStaticMeshComponent::~UStaticMeshComponent((UStaticMeshComponent *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x650);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14768fa40

void * __thiscall
UDEPRECATED_Breakpoint::_scalar_deleting_destructor_(UDEPRECATED_Breakpoint *this,uint param_1)

{
  *(undefined ***)this = &___7UDEPRECATED_Breakpoint__6B_;
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

// `scalar_deleting_destructor' @ 14768faa0

void * __thiscall
USoundParameterControllerInterface::_scalar_deleting_destructor_
          (USoundParameterControllerInterface *this,uint param_1)

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

// AddLoadCounters @ 147691920

/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */

void __cdecl AddLoadCounters(EAsyncIOPriorityAndFlags param_1,int param_2)

{
  ushort uVar1;
  EAsyncIOPriorityAndFlags EVar2;
  EAsyncIOPriorityAndFlags EVar3;
  longlong lVar4;
  
  lVar4 = (longlong)param_2;
  EVar3 = AIOP_High;
  if (ReadRequestPriorityCVar != 0) {
    if (ReadRequestPriorityCVar == 1) {
      EVar2 = AIOP_Normal;
      goto LAB_147691973;
    }
    if (ReadRequestPriorityCVar == 2) {
      EVar2 = AIOP_BelowNormal;
      goto LAB_147691973;
    }
    if (ReadRequestPriorityCVar == 3) {
      EVar2 = AIOP_Low;
      goto LAB_147691973;
    }
    if (ReadRequestPriorityCVar == 4) {
      EVar2 = AIOP_MIN;
      goto LAB_147691973;
    }
  }
  EVar2 = AIOP_High;
LAB_147691973:
  if (PlaybackRequestPriorityCVar != 0) {
    if (PlaybackRequestPriorityCVar == 1) {
      EVar3 = AIOP_Normal;
    }
    else if (PlaybackRequestPriorityCVar == 2) {
      EVar3 = AIOP_BelowNormal;
    }
    else if (PlaybackRequestPriorityCVar == 3) {
      EVar3 = AIOP_Low;
    }
    else if (PlaybackRequestPriorityCVar == 4) {
      EVar3 = AIOP_MIN;
    }
  }
  if (param_2 != 0) {
    if (EVar2 == (param_1 & AIOP_PRIORITY_MASK)) {
      LOCK();
      __GTraceCounterAudioStreamCache_Loads_Request.Value =
           (atomic<__int64>)((longlong)__GTraceCounterAudioStreamCache_Loads_Request.Value + lVar4);
      UNLOCK();
      if (-1 < CountersChannel->Enabled) {
        if (__GTraceCounterAudioStreamCache_Loads_Request.CounterId == (atomic<unsigned_int>)0x0) {
          uVar1 = FCountersTrace::OutputInitCounter
                            (__GTraceCounterAudioStreamCache_Loads_Request.CounterName,
                             TraceCounterType_Int,
                             __GTraceCounterAudioStreamCache_Loads_Request.CounterFlags & 0xf);
          LOCK();
          if (__GTraceCounterAudioStreamCache_Loads_Request.CounterId == (atomic<unsigned_int>)0x0)
          {
            __GTraceCounterAudioStreamCache_Loads_Request.CounterId._2_2_ = 0;
            __GTraceCounterAudioStreamCache_Loads_Request.CounterId._0_2_ = uVar1;
          }
          UNLOCK();
        }
        FCountersTrace::OutputSetValue
                  (__GTraceCounterAudioStreamCache_Loads_Request.CounterId._0_2_,
                   (long64)__GTraceCounterAudioStreamCache_Loads_Request.Value);
      }
    }
    if (EVar3 == (param_1 & AIOP_PRIORITY_MASK)) {
      LOCK();
      __GTraceCounterAudioStreamCache_Loads_Playback.Value =
           (atomic<__int64>)((longlong)__GTraceCounterAudioStreamCache_Loads_Playback.Value + lVar4)
      ;
      UNLOCK();
      if (-1 < CountersChannel->Enabled) {
        if (__GTraceCounterAudioStreamCache_Loads_Playback.CounterId == (atomic<unsigned_int>)0x0) {
          uVar1 = FCountersTrace::OutputInitCounter
                            (__GTraceCounterAudioStreamCache_Loads_Playback.CounterName,
                             TraceCounterType_Int,
                             __GTraceCounterAudioStreamCache_Loads_Playback.CounterFlags & 0xf);
          LOCK();
          if (__GTraceCounterAudioStreamCache_Loads_Playback.CounterId == (atomic<unsigned_int>)0x0)
          {
            __GTraceCounterAudioStreamCache_Loads_Playback.CounterId._2_2_ = 0;
            __GTraceCounterAudioStreamCache_Loads_Playback.CounterId._0_2_ = uVar1;
          }
          UNLOCK();
        }
        FCountersTrace::OutputSetValue
                  (__GTraceCounterAudioStreamCache_Loads_Playback.CounterId._0_2_,
                   (long64)__GTraceCounterAudioStreamCache_Loads_Playback.Value);
      }
    }
    LOCK();
    __GTraceCounterAudioStreamCache_Loads.Value =
         (atomic<__int64>)((longlong)__GTraceCounterAudioStreamCache_Loads.Value + lVar4);
    UNLOCK();
    if (-1 < CountersChannel->Enabled) {
      if (__GTraceCounterAudioStreamCache_Loads.CounterId == (atomic<unsigned_int>)0x0) {
        uVar1 = FCountersTrace::OutputInitCounter
                          (__GTraceCounterAudioStreamCache_Loads.CounterName,TraceCounterType_Int,
                           __GTraceCounterAudioStreamCache_Loads.CounterFlags & 0xf);
        LOCK();
        if (__GTraceCounterAudioStreamCache_Loads.CounterId == (atomic<unsigned_int>)0x0) {
          __GTraceCounterAudioStreamCache_Loads.CounterId._2_2_ = 0;
          __GTraceCounterAudioStreamCache_Loads.CounterId._0_2_ = uVar1;
        }
        UNLOCK();
      }
      FCountersTrace::OutputSetValue
                (__GTraceCounterAudioStreamCache_Loads.CounterId._0_2_,
                 (long64)__GTraceCounterAudioStreamCache_Loads.Value);
    }
  }
  return;
}

// BatchGameThreadAudioCommandsChangedCallback @ 1476949f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
AudioCommandPrivate::BatchGameThreadAudioCommandsChangedCallback(IConsoleVariable *param_1)

{
  char cVar1;
  UWorld *pUVar2;
  
  if (GIsAudioThreadRunning != (atomic<bool>)0x0) {
    cVar1 = (**(code **)(*(longlong *)param_1 + 0xc0))();
    if (cVar1 == '\0') {
      if (CommandQueue.bIsTicking != false) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                   &FWorldDelegates::OnWorldInitializedActors,&CommandQueue);
        FTickFunction::UnRegisterTickFunction((FTickFunction *)&CommandQueue);
        CommandQueue.bIsTicking = false;
      }
      FGameThreadAudioCommandQueue::FlushCommands(&CommandQueue);
      return;
    }
    if ((CommandQueue.bIsTicking == false) && (bBatchGameThreadAudioCommands != false)) {
      if (GEngine != (UEngine *)0x0) {
        pUVar2 = UEngine::GetCurrentPlayWorld(GEngine,(UWorld *)0x0);
        if (pUVar2 != (UWorld *)0x0) {
          FTickFunction::RegisterTickFunction
                    ((FTickFunction *)&CommandQueue,(pUVar2->PersistentLevel).field0_0x0.DebugPtr);
        }
      }
      TMulticastDelegateRegistration<void___cdecl(FActorsInitializedParams_const_&),FDefaultDelegateUserPolicy>
      ::AddRaw<AudioCommandPrivate::FGameThreadAudioCommandQueue>
                ((TMulticastDelegateRegistration<void___cdecl(FActorsInitializedParams_const_&),FDefaultDelegateUserPolicy>
                  *)&FWorldDelegates::OnWorldInitializedActors,
                 (FGameThreadAudioCommandQueue *)&stack0x00000010,(pmf_647a4ab2)0x1551f2920);
      CommandQueue.bIsTicking = true;
      return;
    }
  }
  return;
}

// CriticalSpringDamperQuat @ 14769b240

void __cdecl
SpringMath::CriticalSpringDamperQuat
          (TQuat<double> *param_1,TVector<double> *param_2,TQuat<double> *param_3,float param_4,
          float param_5)

{
  double dVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  float fVar21;
  TQuat<double> local_108;
  TQuat<double> local_e8;
  TQuat<double> local_c8 [6];
  
  if (param_4 <= __real_38d1b717) {
    param_4 = __real_38d1b717;
  }
  dVar19 = param_3->Z * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  dVar20 = param_3->W * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  dVar1 = param_1->X;
  dVar3 = param_1->Y;
  dVar5 = param_3->X * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar17 = param_3->Y * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  dVar4 = param_1->Z;
  dVar10 = param_1->W;
  fVar21 = __real_40000000 / param_4;
  dVar8 = dVar1 * dVar20 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
          dVar10 * dVar5 +
          dVar3 * dVar19 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
          dVar4 * dVar17 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  dVar9 = dVar1 * dVar19 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
          dVar10 * dVar17 +
          dVar3 * dVar20 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
          dVar4 * dVar5 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  dVar7 = dVar1 * dVar17 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
          dVar10 * dVar19 +
          dVar3 * dVar5 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
          dVar4 * dVar20 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  dVar5 = dVar1 * dVar5 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
          dVar10 * dVar20 +
          dVar3 * dVar17 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
          dVar4 * dVar19 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  dVar17 = __real_bff0000000000000;
  if (0.0 <= dVar5 * UE::Math::TQuat<double>::Identity.W +
             dVar7 * UE::Math::TQuat<double>::Identity.Z +
             dVar9 * UE::Math::TQuat<double>::Identity.Y +
             dVar8 * UE::Math::TQuat<double>::Identity.X) {
    dVar17 = __real_3ff0000000000000;
  }
  local_108.Y = dVar9 * dVar17;
  local_108.X = dVar8 * dVar17;
  local_108.W = dVar5 * dVar17;
  local_108.Z = dVar7 * dVar17;
  UE::Math::TQuat<double>::Log(&local_108,&local_e8);
  dVar18 = (double)fVar21;
  local_e8.W = 0.0;
  dVar20 = local_e8.X * __real_4000000000000000 * dVar18 + (param_2->field0_0x0)._s_0.X;
  dVar11 = local_e8.Y * __real_4000000000000000 * dVar18 + (param_2->field0_0x0)._s_0.Y;
  dVar12 = local_e8.Z * __real_4000000000000000 * dVar18 + (param_2->field0_0x0)._s_0.Z;
  fVar21 = fVar21 * param_5;
  dVar19 = (double)param_5;
  dVar10 = (double)(__real_3f800000 /
                   (((fVar21 * __real_3e83b5ca + __real_3ee6ad0d) * fVar21 + __real_3f80f478) *
                    fVar21 + __real_3f800000));
  local_e8.X = (dVar19 * dVar20 + local_e8.X * __real_4000000000000000) * dVar10 *
               __real_3fe0000000000000;
  local_e8.Y = (dVar19 * dVar11 + local_e8.Y * __real_4000000000000000) * dVar10 *
               __real_3fe0000000000000;
  local_e8.Z = (dVar19 * dVar12 + local_e8.Z * __real_4000000000000000) * dVar10 *
               __real_3fe0000000000000;
  UE::Math::TQuat<double>::Exp(&local_e8,local_c8);
  dVar13 = param_3->Z;
  dVar14 = param_3->W;
  dVar15 = param_3->X;
  dVar16 = param_3->Y;
  dVar5 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
  dVar8 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1];
  dVar17 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  dVar9 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  dVar7 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
  dVar1 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1];
  dVar3 = local_c8[0].X * dVar14 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
          dVar15 * local_c8[0].W +
          dVar13 * local_c8[0].Y * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
          local_c8[0].Z * dVar16 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  dVar4 = local_c8[0].X * dVar13 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
          dVar16 * local_c8[0].W +
          dVar14 * local_c8[0].Y * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
          local_c8[0].Z * dVar15 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  auVar2._8_4_ = SUB84(dVar4,0);
  auVar2._0_8_ = dVar3;
  auVar2._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  param_1->X = dVar3;
  param_1->Y = (double)auVar2._8_8_;
  dVar5 = local_c8[0].X * dVar16 * dVar5 + dVar13 * local_c8[0].W + dVar15 * local_c8[0].Y * dVar7 +
          local_c8[0].Z * dVar14 * dVar17;
  dVar17 = local_c8[0].X * dVar15 * dVar8 + dVar14 * local_c8[0].W + dVar16 * local_c8[0].Y * dVar1
           + local_c8[0].Z * dVar13 * dVar9;
  auVar6._8_4_ = SUB84(dVar17,0);
  auVar6._0_8_ = dVar5;
  auVar6._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
  param_1->Z = dVar5;
  param_1->W = (double)auVar6._8_8_;
  (param_2->field0_0x0)._s_0.X = ((param_2->field0_0x0)._s_0.X - dVar20 * dVar18 * dVar19) * dVar10;
  (param_2->field0_0x0)._s_0.Y = ((param_2->field0_0x0)._s_0.Y - dVar11 * dVar18 * dVar19) * dVar10;
  (param_2->field0_0x0)._s_0.Z = ((param_2->field0_0x0)._s_0.Z - dVar12 * dVar18 * dVar19) * dVar10;
  return;
}

// EmptyLinkFunctionForGeneratedCodeActorSoundParameterInterface @ 1476a64f0

void __cdecl EmptyLinkFunctionForGeneratedCodeActorSoundParameterInterface(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAudioVolume @ 1476a6500

void __cdecl EmptyLinkFunctionForGeneratedCodeAudioVolume(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAudioWidgetSubsystem @ 1476a6510

void __cdecl EmptyLinkFunctionForGeneratedCodeAudioWidgetSubsystem(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeBlockingVolume @ 1476a6520

void __cdecl EmptyLinkFunctionForGeneratedCodeBlockingVolume(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeBlueprint @ 1476a6530

void __cdecl EmptyLinkFunctionForGeneratedCodeBlueprint(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeBlueprintFunctionLibrary @ 1476a6540

void __cdecl EmptyLinkFunctionForGeneratedCodeBlueprintFunctionLibrary(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeBlueprintGeneratedClass @ 1476a6550

void __cdecl EmptyLinkFunctionForGeneratedCodeBlueprintGeneratedClass(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeBlueprintInstancedStructLibrary @ 1476a6560

void __cdecl EmptyLinkFunctionForGeneratedCodeBlueprintInstancedStructLibrary(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeBlueprintMapLibrary @ 1476a6570

void __cdecl EmptyLinkFunctionForGeneratedCodeBlueprintMapLibrary(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeBlueprintSetLibrary @ 1476a6580

void __cdecl EmptyLinkFunctionForGeneratedCodeBlueprintSetLibrary(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeBookMark @ 1476a6590

void __cdecl EmptyLinkFunctionForGeneratedCodeBookMark(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeBrush @ 1476a65a0

void __cdecl EmptyLinkFunctionForGeneratedCodeBrush(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeBrushBuilder @ 1476a65b0

void __cdecl EmptyLinkFunctionForGeneratedCodeBrushBuilder(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeBrushShape @ 1476a65c0

void __cdecl EmptyLinkFunctionForGeneratedCodeBrushShape(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeCameraActor @ 1476a65d0

void __cdecl EmptyLinkFunctionForGeneratedCodeCameraActor(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeCameraBlockingVolume @ 1476a65e0

void __cdecl EmptyLinkFunctionForGeneratedCodeCameraBlockingVolume(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeCameraComponent @ 1476a65f0

void __cdecl EmptyLinkFunctionForGeneratedCodeCameraComponent(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeCameraLensEffectInterface @ 1476a6600

void __cdecl EmptyLinkFunctionForGeneratedCodeCameraLensEffectInterface(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeCameraModifier @ 1476a6610

void __cdecl EmptyLinkFunctionForGeneratedCodeCameraModifier(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeCameraModifier_CameraShake @ 1476a6620

void __cdecl EmptyLinkFunctionForGeneratedCodeCameraModifier_CameraShake(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeSoundParameterControllerInterface @ 1476a6630

void __cdecl EmptyLinkFunctionForGeneratedCodeSoundParameterControllerInterface(void)

{
  return;
}

// ExponentialSmoothingApproxQuat @ 1476a78d0

void __cdecl
SpringMath::ExponentialSmoothingApproxQuat
          (TQuat<double> *param_1,TQuat<double> *param_2,float param_3,float param_4)

{
  double dVar1;
  ulonglong uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  TQuat<double> *pTVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  double dVar10;
  double dVar12;
  undefined1 auVar11 [16];
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  uint uVar18;
  uint uVar19;
  TQuat<double> local_48 [2];
  
  if (__real_38d1b717 < param_4) {
    fVar13 = param_3 / param_4;
    pTVar7 = UE::Math::TQuat<double>::Slerp_NotNormalized
                       (local_48,param_1,param_2,
                        (double)(__real_3f800000 -
                                __real_3f800000 /
                                ((fVar13 * __real_3e83b5ca * fVar13 + __real_3f80f478 +
                                 fVar13 * __real_3ee6ad0d) * fVar13 + __real_3f800000)));
    dVar3 = pTVar7->X;
    dVar4 = pTVar7->Y;
    dVar5 = pTVar7->Z;
    dVar6 = pTVar7->W;
    dVar10 = dVar5 * dVar5 + dVar3 * dVar3;
    dVar12 = dVar6 * dVar6 + dVar4 * dVar4;
    dVar1 = dVar12 + dVar10;
    dVar10 = dVar10 + dVar12;
    auVar15._8_4_ = SUB84(dVar10,0);
    auVar15._0_8_ = dVar1;
    auVar15._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
    auVar15 = sqrtpd(in_XMM4,auVar15);
    uVar8 = -(ulonglong)(__real_3e45798ee0000000 <= dVar1);
    uVar9 = -(ulonglong)(__real_3e45798ee0000000 <= dVar10);
    uVar18 = (uint)(uVar8 >> 0x20);
    uVar19 = (uint)(uVar9 >> 0x20);
    auVar16 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar15);
    auVar17._0_8_ = uVar8 & (ulonglong)(auVar16._0_8_ * dVar3);
    uVar2 = uVar9 & (ulonglong)(auVar16._8_8_ * dVar4);
    auVar17._8_4_ = (undefined4)uVar2;
    auVar17._12_4_ = (undefined4)(uVar2 >> 0x20);
    auVar16._0_4_ = ~(uint)uVar8 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
    auVar16._4_4_ =
         ~uVar18 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20);
    auVar16._8_4_ = ~(uint)uVar9 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    auVar16._12_4_ =
         ~uVar19 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    auVar15 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar15);
    auVar14._0_4_ = ~(uint)uVar8 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
    auVar14._4_4_ =
         ~uVar18 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20);
    auVar14._8_4_ = ~(uint)uVar9 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    auVar14._12_4_ =
         ~uVar19 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    auVar11._0_8_ = (ulonglong)(auVar15._0_8_ * dVar5) & uVar8;
    uVar9 = (ulonglong)(auVar15._8_8_ * dVar6) & uVar9;
    auVar11._8_4_ = (undefined4)uVar9;
    auVar11._12_4_ = (undefined4)(uVar9 >> 0x20);
    param_1->X = (double)SUB168(auVar17 | auVar16,0);
    param_1->Y = (double)SUB168(auVar17 | auVar16,8);
    param_1->Z = (double)SUB168(auVar14 | auVar11,0);
    param_1->W = (double)SUB168(auVar14 | auVar11,8);
    return;
  }
  dVar1 = param_2->Y;
  param_1->X = param_2->X;
  param_1->Y = dVar1;
  dVar1 = param_2->W;
  param_1->Z = param_2->Z;
  param_1->W = dVar1;
  return;
}

// GetBlendModeFilter @ 1476adf00

Type __cdecl GetBlendModeFilter(ESimpleElementBlendMode param_1)

{
  if (((param_1 & ~SE_BLEND_MaskedDistanceField) == SE_BLEND_Opaque) &&
     (param_1 != SE_BLEND_Modulate)) {
    return OpaqueAndMasked;
  }
  return (param_1 != SE_BLEND_MaskedDistanceFieldShadowed) + OpaqueAndMasked;
}

// GetBufferVisualizationData @ 1476ae910

FBufferVisualizationData * __cdecl GetBufferVisualizationData(void)

{
  if (!GBufferVisualizationData.bIsInitialized) {
    FBufferVisualizationData::Initialize(&GBufferVisualizationData);
    return &GBufferVisualizationData;
  }
  return &GBufferVisualizationData;
}

// GetOwnerActorIconName @ 1476b2690

FName __cdecl Audio::Trace::Util::GetOwnerActorIconName(FActiveSound *param_1)

{
  *(undefined8 *)param_1 = 0;
  return (FName)param_1;
}

// GetOwnerActorLabel @ 1476b26a0

FString * __cdecl
Audio::Trace::Util::GetOwnerActorLabel(FString *__return_storage_ptr__,FActiveSound *param_1)

{
  longlong lVar1;
  UAudioComponent *pUVar2;
  FName local_res10;
  
  pUVar2 = UAudioComponent::GetAudioComponentFromID(param_1->AudioComponentID);
  if (pUVar2 != (UAudioComponent *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    lVar1 = *(longlong *)&pUVar2->field_0xa8;
    if (lVar1 != 0) {
      if (1 < *(int *)(lVar1 + 0x1f0)) {
        ::FString::FString(__return_storage_ptr__,(FString *)(lVar1 + 0x1e8));
        return __return_storage_ptr__;
      }
      local_res10 = *(FName *)(lVar1 + 0x18);
      ::FName::ToString(&local_res10,__return_storage_ptr__);
      return __return_storage_ptr__;
    }
  }
  FActiveSound::GetOwnerName(param_1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetSoundBaseAssetName @ 1476b55f0

FString * __cdecl
Audio::Trace::Util::GetSoundBaseAssetName
          (FString *__return_storage_ptr__,TObjectPtr<UClass> param_1)

{
  UObject *pUVar1;
  bool bVar2;
  UObject *pUVar3;
  FString *pFVar4;
  uint uVar5;
  FName local_res10;
  FString local_48;
  FString local_38;
  FString local_28;
  UObject *pUVar6;
  
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  if (*(longlong *)param_1.field0_0x0 == 0) {
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = 0;
    (__return_storage_ptr__->Data).ArrayMax = 0;
  }
  else {
    pUVar1 = *(UObject **)(*(longlong *)param_1.field0_0x0 + 0x40);
    if ((UE::GC::GIsIncrementalReachabilityPending) && (pUVar1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar1);
    }
    local_res10 = *(FName *)(*(longlong *)param_1.field0_0x0 + 0x18);
    ::FName::ToString(&local_res10,&local_48);
    bVar2 = Trace::Private::NameMatchesBaseAudioAsset(&local_48);
    pUVar6 = (UObject *)0x0;
    while ((!bVar2 && (1 < local_48.Data.ArrayNum))) {
      if (pUVar1 == (UObject *)0x0) {
        uVar5 = (uint)pUVar6 | 2;
        local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_38.Data.ArrayNum = 0;
        local_38.Data.ArrayMax = 0;
        pFVar4 = &local_38;
      }
      else {
        local_res10.ComparisonIndex.Value = *(uint *)&pUVar1->field_0x18;
        local_res10.Number = *(uint *)&pUVar1->field_0x1c;
        uVar5 = (uint)pUVar6 | 1;
        ::FName::ToString(&local_res10,&local_28);
        pFVar4 = &local_28;
      }
      pUVar6 = (UObject *)(ulonglong)uVar5;
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      local_48.Data.AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
      (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_48.Data.ArrayNum = (pFVar4->Data).ArrayNum;
      local_48.Data.ArrayMax = (pFVar4->Data).ArrayMax;
      (pFVar4->Data).ArrayNum = 0;
      (pFVar4->Data).ArrayMax = 0;
      if (((uVar5 & 2) != 0) &&
         (pUVar6 = (UObject *)(ulonglong)(uVar5 & 0xfffffffd),
         local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      if ((((ulonglong)pUVar6 & 1) != 0) &&
         (pUVar6 = (UObject *)(ulonglong)((uint)pUVar6 & 0xfffffffe),
         local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      pUVar3 = (UObject *)0x0;
      if (pUVar1 != (UObject *)0x0) {
        pUVar3 = *(UObject **)&pUVar1[1].field_0x18;
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar3);
      }
      bVar2 = Trace::Private::NameMatchesBaseAudioAsset(&local_48);
      pUVar1 = pUVar3;
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
    (__return_storage_ptr__->Data).ArrayMax = local_48.Data.ArrayMax;
    (__return_storage_ptr__->Data).ArrayNum = local_48.Data.ArrayNum;
  }
  return __return_storage_ptr__;
}

// GetSoundObjectPointer @ 1476b5780

TObjectPtr<UObject> __cdecl Audio::Trace::Util::GetSoundObjectPointer(FActiveSound *param_1)

{
  int iVar1;
  FString *pFVar2;
  UObject *pUVar3;
  int iVar4;
  longlong in_RDX;
  UObject *pUVar5;
  TStringView<wchar_t> local_48;
  FString local_38;
  FSoftObjectPath local_28;
  
  pUVar3 = (UObject *)0x0;
  pUVar5 = pUVar3;
  if (*(UObjectBaseUtility **)(in_RDX + 0x18) != (UObjectBaseUtility *)0x0) {
    pFVar2 = UObjectBaseUtility::GetPathName
                       (*(UObjectBaseUtility **)(in_RDX + 0x18),&local_38,(UObject *)0x0);
    local_28.AssetPath.PackageName.ComparisonIndex.Value = 0;
    local_28.AssetPath.PackageName.Number = 0;
    local_28.AssetPath.AssetName.ComparisonIndex.Value = 0;
    local_28.AssetPath.AssetName.Number = 0;
    local_28.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.SubPathString.Data.ArrayNum = 0;
    local_28.SubPathString.Data.ArrayMax = 0;
    local_48.DataPtr = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
    iVar1 = (pFVar2->Data).ArrayNum;
    iVar4 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar4 = 0;
    }
    local_48.Size = iVar4;
    FSoftObjectPath::SetPath(&local_28,&local_48);
    pUVar3 = FSoftObjectPath::ResolveObject(&local_28);
    pUVar5 = (UObject *)&DAT_00000003;
  }
  *(UObject **)param_1 = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  if ((((ulonglong)pUVar5 & 2) != 0) &&
     (pUVar5 = (UObject *)(ulonglong)((uint)pUVar5 & 0xfffffffd),
     local_28.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.SubPathString.Data.AllocatorInstance.Data);
  }
  if ((((ulonglong)pUVar5 & 1) != 0) &&
     (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return (TObjectPtr<UObject>)(TObjectPtr<UObject>_u_0)param_1;
}

// GetTypeHash @ 1476b5b30

uint __cdecl GetTypeHash(FChunkKey *param_1)

{
  uint uVar1;
  FName FVar2;
  uint uVar3;
  ulong64 uVar4;
  
  uVar4 = CityHash64((char *)&param_1->ObjectKey,0x10);
  uVar1 = param_1->ChunkIndex;
  FVar2 = param_1->SoundWaveName;
  uVar3 = GetTypeHash(FVar2.ComparisonIndex.Value);
  uVar3 = uVar3 + FVar2.Number;
  uVar3 = uVar3 * 0x40 + uVar1 + 0x9e3779b9 + (uVar3 >> 2) ^ uVar3;
  return uVar3 * 0x40 + (int)uVar4 + -0x61c88647 + (uVar3 >> 2) ^ uVar3;
}

// GetTypeHash @ 1476b5bc0

uint __cdecl GetTypeHash(FRetargetSourceCachedDataKey *param_1)

{
  FName FVar1;
  FName FVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  FVar1 = param_1->SourceRetargetName;
  uVar3 = GetTypeHash(FVar1.ComparisonIndex.Value);
  uVar3 = uVar3 + FVar1.Number;
  FVar1 = (param_1->SourceSkeletonPath).AssetName;
  uVar4 = GetTypeHash(FVar1.ComparisonIndex.Value);
  FVar2 = (param_1->SourceSkeletonPath).PackageName;
  uVar5 = GetTypeHash(FVar2.ComparisonIndex.Value);
  uVar5 = uVar5 + FVar2.Number;
  uVar6 = (uVar5 * 0x40 + uVar4 + FVar1.Number + -0x61c88647 + (uVar5 >> 2) ^ uVar5) - uVar3 ^
          uVar3 >> 0xd;
  uVar4 = (-0x61c88647 - uVar3) - uVar6 ^ uVar6 << 8;
  uVar5 = (uVar3 - uVar6) - uVar4 ^ uVar4 >> 0xd;
  uVar6 = (uVar6 - uVar5) - uVar4 ^ uVar5 >> 0xc;
  uVar3 = (uVar4 - uVar6) - uVar5 ^ uVar6 << 0x10;
  uVar4 = (uVar5 - uVar3) - uVar6 ^ uVar3 >> 5;
  uVar5 = (uVar6 - uVar4) - uVar3 ^ uVar4 >> 3;
  uVar3 = (uVar3 - uVar5) - uVar4 ^ uVar5 << 10;
  return (uVar4 - uVar3) - uVar5 ^ uVar3 >> 0xf;
}

// IncrementUberGraphSerialNumber @ 1476b7720

int __cdecl IncrementUberGraphSerialNumber(void)

{
  TAtomic<int> TVar1;
  
  TVar1 = GUberGraphSerialNumber;
  LOCK();
  GUberGraphSerialNumber = (TAtomic<int>)((int)GUberGraphSerialNumber + 1);
  UNLOCK();
  return (int)TVar1 + 1;
}

// NameMatchesBaseAudioAsset @ 1476bd4f0

bool __cdecl Audio::Trace::Private::NameMatchesBaseAudioAsset(FString *param_1)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = (param_1->Data).ArrayNum;
  if (iVar1 == MetaSoundSource.Data.ArrayNum) {
    if (iVar1 < 2) {
      return true;
    }
    iVar1 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)(param_1->Data).AllocatorInstance.Data,
                       (wchar_t *)MetaSoundSource.Data.AllocatorInstance.Data);
    bVar2 = iVar1 == 0;
  }
  else {
    bVar2 = iVar1 + MetaSoundSource.Data.ArrayNum == 1;
  }
  if (!bVar2) {
    iVar1 = (param_1->Data).ArrayNum;
    if (iVar1 == SoundWaveProcedural.Data.ArrayNum) {
      if (iVar1 < 2) {
        return true;
      }
      iVar1 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(param_1->Data).AllocatorInstance.Data,
                         (wchar_t *)SoundWaveProcedural.Data.AllocatorInstance.Data);
      bVar2 = iVar1 == 0;
    }
    else {
      bVar2 = iVar1 + SoundWaveProcedural.Data.ArrayNum == 1;
    }
    if (!bVar2) {
      iVar1 = (param_1->Data).ArrayNum;
      if (iVar1 == SoundCue.Data.ArrayNum) {
        if (iVar1 < 2) {
          return true;
        }
        iVar1 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)(param_1->Data).AllocatorInstance.Data,
                           (wchar_t *)SoundCue.Data.AllocatorInstance.Data);
        bVar2 = iVar1 == 0;
      }
      else {
        bVar2 = iVar1 + SoundCue.Data.ArrayNum == 1;
      }
      if (!bVar2) {
        iVar1 = (param_1->Data).ArrayNum;
        if (iVar1 == SoundWave.Data.ArrayNum) {
          if (iVar1 < 2) {
            return true;
          }
          iVar1 = FGenericPlatformStricmp::Stricmp
                            ((wchar_t *)(param_1->Data).AllocatorInstance.Data,
                             (wchar_t *)SoundWave.Data.AllocatorInstance.Data);
          bVar2 = iVar1 == 0;
        }
        else {
          bVar2 = iVar1 + SoundWave.Data.ArrayNum == 1;
        }
        if (!bVar2) {
          iVar1 = (param_1->Data).ArrayNum;
          if (iVar1 == SoundCueTemplate.Data.ArrayNum) {
            if (iVar1 < 2) {
              return true;
            }
            iVar1 = FGenericPlatformStricmp::Stricmp
                              ((wchar_t *)(param_1->Data).AllocatorInstance.Data,
                               (wchar_t *)SoundCueTemplate.Data.AllocatorInstance.Data);
            bVar2 = iVar1 == 0;
          }
          else {
            bVar2 = iVar1 + SoundCueTemplate.Data.ArrayNum == 1;
          }
          if (!bVar2) {
            return false;
          }
        }
      }
    }
  }
  return true;
}

// ParseWaveFormatHeader @ 1476bdbc0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl ParseWaveFormatHeader(uchar *param_1,uint param_2,FWaveFormatInfo *param_3)

{
  FSampleLoop *_Dst;
  undefined8 uVar1;
  FChunkHeader FVar2;
  undefined8 uVar3;
  uint uVar4;
  FStaticBasicLogRecord *pFVar5;
  uchar *_Src;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  
  if ((param_1 == (uchar *)0x0) || (param_2 < 0xc)) {
    if ((byte)LogAudio._0_1_ < 2) {
      return false;
    }
    pFVar5 = &LOG_Static;
  }
  else {
    param_3->DataStartOffset = 0;
    uVar7 = 0;
    uVar1 = *(undefined8 *)param_1;
    uVar10 = 0xc;
    (param_3->RiffWaveHeader).ChunkId = (int)uVar1;
    (param_3->RiffWaveHeader).ChunkDataSize = (int)((ulonglong)uVar1 >> 0x20);
    uVar9 = *(uint *)(param_1 + 8);
    (param_3->RiffWaveHeader).TypeId = uVar9;
    if ((param_3->RiffWaveHeader).ChunkId == 0x46464952) {
      if (uVar9 == 0x45564157) {
        if (0xc < param_2) {
          do {
            iVar8 = (int)uVar10;
            uVar9 = iVar8 + 8;
            FVar2 = *(FChunkHeader *)(param_1 + uVar10);
            uVar4 = FVar2.ChunkId;
            uVar6 = (uint)uVar7;
            if (uVar4 == 0x20746d66) {
              param_3->FmtChunkHeader = FVar2;
              uVar1 = *(undefined8 *)(param_1 + uVar9);
              uVar3 = *(undefined8 *)(param_1 + uVar9 + 8);
              (param_3->FmtChunk).FormatTag = (short)uVar1;
              (param_3->FmtChunk).NumChannels = (short)((ulonglong)uVar1 >> 0x10);
              (param_3->FmtChunk).SamplesPerSec = (int)((ulonglong)uVar1 >> 0x20);
              (param_3->FmtChunk).AverageBytesPerSec = (int)uVar3;
              (param_3->FmtChunk).BlockAlign = (short)((ulonglong)uVar3 >> 0x20);
              (param_3->FmtChunk).BitsPerSample = (short)((ulonglong)uVar3 >> 0x30);
              uVar1 = *(undefined8 *)(param_1 + (ulonglong)uVar9 + 0x10);
              uVar3 = *(undefined8 *)(param_1 + (ulonglong)uVar9 + 0x10 + 8);
              (param_3->FmtChunk).cbSize = (short)uVar1;
              (param_3->FmtChunk).SamplesPerBlock = (short)((ulonglong)uVar1 >> 0x10);
              (param_3->FmtChunk).ChannelMask = (int)((ulonglong)uVar1 >> 0x20);
              *(undefined8 *)(param_3->FmtChunk).SubFormat = uVar3;
              uVar1 = *(undefined8 *)(param_1 + (ulonglong)uVar9 + 0x20 + 8);
              *(undefined8 *)((param_3->FmtChunk).SubFormat + 8) =
                   *(undefined8 *)(param_1 + (ulonglong)uVar9 + 0x20);
              (param_3->FmtChunk).VersionInfo = (int)uVar1;
              (param_3->FmtChunk).ConfigData[0] = (char)((ulonglong)uVar1 >> 0x20);
              (param_3->FmtChunk).ConfigData[1] = (char)((ulonglong)uVar1 >> 0x28);
              (param_3->FmtChunk).ConfigData[2] = (char)((ulonglong)uVar1 >> 0x30);
              (param_3->FmtChunk).ConfigData[3] = (char)((ulonglong)uVar1 >> 0x38);
              uVar7 = (ulonglong)uVar9;
              uVar9 = iVar8 + 0x3c;
              (param_3->FmtChunk).Reserved = *(uint *)(param_1 + uVar7 + 0x30);
              if (uVar6 < 0x34) {
                uVar7 = 0;
              }
              else {
                uVar7 = (ulonglong)(uVar6 - 0x34);
              }
            }
            else if (uVar4 == 0x61746164) {
              param_3->DataChunkHeader = FVar2;
              uVar7 = (ulonglong)FVar2 >> 0x20;
              param_3->DataStartOffset = uVar9;
            }
            else if (uVar4 == 0x6c706d73) {
              param_3->SampleChunkHeader = FVar2;
              _Dst = (param_3->SampleChunk).SampleLoop;
              uVar1 = *(undefined8 *)(param_1 + uVar9);
              uVar3 = *(undefined8 *)(param_1 + uVar9 + 8);
              (param_3->SampleChunk).Manufacturer = (int)uVar1;
              (param_3->SampleChunk).Product = (int)((ulonglong)uVar1 >> 0x20);
              (param_3->SampleChunk).SamplePeriod = (int)uVar3;
              (param_3->SampleChunk).MidiUnityNote = (int)((ulonglong)uVar3 >> 0x20);
              uVar1 = *(undefined8 *)(param_1 + (ulonglong)uVar9 + 0x10);
              uVar3 = *(undefined8 *)(param_1 + (ulonglong)uVar9 + 0x10 + 8);
              (param_3->SampleChunk).MidiPitchFraction = (int)uVar1;
              (param_3->SampleChunk).SmpteFormat = (int)((ulonglong)uVar1 >> 0x20);
              (param_3->SampleChunk).SmpteOffset = (int)uVar3;
              (param_3->SampleChunk).SampleLoops = (int)((ulonglong)uVar3 >> 0x20);
              _Src = param_1 + (iVar8 + 0x2cU);
              (param_3->SampleChunk).SamplerData = *(uint *)(param_1 + (ulonglong)uVar9 + 0x20);
              uVar9 = (param_3->SampleChunk).SampleLoops;
              if (uVar9 < 3) {
                uVar9 = uVar9 * 0x18;
                memcpy(_Dst,_Src,(ulonglong)uVar9);
                uVar7 = 0;
                uVar9 = iVar8 + 0x2cU + uVar9;
                if (0x53 < uVar6) {
                  uVar7 = (ulonglong)(uVar6 - 0x54);
                }
              }
              else {
                uVar1 = *(undefined8 *)_Src;
                uVar3 = *(undefined8 *)(_Src + 8);
                uVar9 = iVar8 + 0x5c;
                _Dst->Identifier = (int)uVar1;
                _Dst->Type = (int)((ulonglong)uVar1 >> 0x20);
                (param_3->SampleChunk).SampleLoop[0].Start = (int)uVar3;
                (param_3->SampleChunk).SampleLoop[0].End = (int)((ulonglong)uVar3 >> 0x20);
                uVar1 = *(undefined8 *)(_Src + 0x10);
                uVar3 = *(undefined8 *)(_Src + 0x18);
                (param_3->SampleChunk).SampleLoop[0].Fraction = (int)uVar1;
                (param_3->SampleChunk).SampleLoop[0].PlayCount = (int)((ulonglong)uVar1 >> 0x20);
                (param_3->SampleChunk).SampleLoop[1].Identifier = (int)uVar3;
                (param_3->SampleChunk).SampleLoop[1].Type = (int)((ulonglong)uVar3 >> 0x20);
                uVar1 = *(undefined8 *)(_Src + 0x20);
                uVar3 = *(undefined8 *)(_Src + 0x28);
                (param_3->SampleChunk).SampleLoop[1].Start = (int)uVar1;
                (param_3->SampleChunk).SampleLoop[1].End = (int)((ulonglong)uVar1 >> 0x20);
                (param_3->SampleChunk).SampleLoop[1].Fraction = (int)uVar3;
                (param_3->SampleChunk).SampleLoop[1].PlayCount = (int)((ulonglong)uVar3 >> 0x20);
                uVar7 = 0;
                if (0x53 < uVar6) {
                  uVar7 = (ulonglong)(uVar6 - 0x54);
                }
              }
            }
            else if (uVar4 == 0x74636166) {
              param_3->FactChunkHeader = FVar2;
              uVar1 = *(undefined8 *)(param_1 + uVar9);
              (param_3->FactChunk).TotalSamples = (int)uVar1;
              (param_3->FactChunk).DelaySamplesInputOverlap = (int)((ulonglong)uVar1 >> 0x20);
              uVar7 = (ulonglong)uVar9;
              uVar9 = iVar8 + 0x14;
              (param_3->FactChunk).DelaySamplesInputOverlapEncoder = *(uint *)(param_1 + uVar7 + 8);
              uVar7 = 0;
              if (0xb < uVar6) {
                uVar7 = (ulonglong)(uVar6 - 0xc);
              }
            }
            else if (2 < (byte)LogAudio._0_1_) {
              UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogAudio);
            }
            uVar9 = uVar9 + (int)uVar7;
            uVar10 = (ulonglong)uVar9;
          } while (uVar9 < param_2);
        }
        return true;
      }
      if ((byte)LogAudio._0_1_ < 2) {
        return false;
      }
      pFVar5 = &LOG_Static;
    }
    else {
      if ((byte)LogAudio._0_1_ < 2) {
        return false;
      }
      pFVar5 = &LOG_Static;
    }
  }
  UE::Logging::Private::BasicLog<2>(pFVar5,(FLogCategoryBase *)&LogAudio);
  return false;
}

// RHICreateRasterizerState @ 1476bfdc0

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */

TRefCountPtr<FRHIRasterizerState> __cdecl
RHICreateRasterizerState(FRasterizerStateInitializerRHI *param_1)

{
  FLLMScope local_res8 [2];
  FMemScope local_res18 [2];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_TRefCountPtr<FRHIRasterizerState>___cdecl_RHICreateRasterizerState(FRasterizerStateInitializerRHI_const&___ptr64)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_TRefCountPtr<FRHIRasterizerState>___cdecl_RHICreateRasterizerState(FRasterizerStateInitializerRHI_const&___ptr64)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_TRefCountPtr<FRHIRasterizerState>___cdecl_RHICreateRasterizerState(FRasterizerStateInitializerRHI_const&___ptr64)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FName::FName(&`class_TRefCountPtr<FRHIRasterizerState>___cdecl_RHICreateRasterizerState(FRasterizerStateInitializerRHI_const&___ptr64)'
                    ::__l2::LLMScope_Name1153,L"RHIMisc/CreateRasterizerState");
      _Init_thread_footer(&`class_TRefCountPtr<FRHIRasterizerState>___cdecl_RHICreateRasterizerState(FRasterizerStateInitializerRHI_const&___ptr64)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FLLMScope::FLLMScope
            (local_res8,
             `class_TRefCountPtr<FRHIRasterizerState>___cdecl_RHICreateRasterizerState(FRasterizerStateInitializerRHI_const&___ptr64)'
             ::__l2::LLMScope_Name1153,false,None,Default,true);
  FMemScope::FMemScope
            (local_res18,
             &`class_TRefCountPtr<FRHIRasterizerState>___cdecl_RHICreateRasterizerState(FRasterizerStateInitializerRHI_const&___ptr64)'
              ::__l2::LLMScope_Name1153,true);
  (**(code **)(GDynamicRHI->_padding_ + 0x50))(GDynamicRHI,param_1);
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return (TRefCountPtr<FRHIRasterizerState>)(FRHIRasterizerState *)param_1;
}

// SendActiveSoundEvent @ 1476c5ac0

void __cdecl Audio::Trace::EventLog::SendActiveSoundEvent(FActiveSound *param_1,FString *param_2)

{
  int iVar1;
  USoundBase *this;
  UObject *pUVar2;
  longlong lVar3;
  void *_Src;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  FString *pFVar7;
  UObject *this_00;
  UAudioComponent *pUVar8;
  FString *pFVar9;
  UObject *pUVar10;
  longlong lVar11;
  TStringView<wchar_t> *pTVar12;
  UObject *pUVar13;
  FName local_res18;
  FName local_res20;
  FString local_a8;
  FString local_98;
  TStringView<wchar_t> local_88;
  TStringView<wchar_t> local_78;
  FString local_68;
  FSoftObjectPath local_58;
  
  pUVar13 = (UObject *)0x0;
  local_res18 = (FName)((ulonglong)local_res18 & 0xffffffff00000000);
  if (AudioMixerChannel->Enabled < 0) {
    return;
  }
  if (param_1->AudioDevice == (FAudioDevice *)0x0) {
    return;
  }
  this = (param_1->Sound).field0_0x0.DebugPtr;
  pUVar10 = pUVar13;
  this_00 = pUVar13;
  if (this != (USoundBase *)0x0) {
    pFVar7 = UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_98,(UObject *)0x0);
    local_58.AssetPath.PackageName.ComparisonIndex.Value = 0;
    local_58.AssetPath.PackageName.Number = 0;
    local_58.AssetPath.AssetName.ComparisonIndex.Value = 0;
    local_58.AssetPath.AssetName.Number = 0;
    local_58.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.SubPathString.Data.ArrayNum = 0;
    local_58.SubPathString.Data.ArrayMax = 0;
    local_88.DataPtr = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
    iVar1 = (pFVar7->Data).ArrayNum;
    local_78.Size = iVar1 + -1;
    if (iVar1 == 0) {
      local_78.Size = 0;
    }
    local_88.Size = local_78.Size;
    local_78._12_4_ = local_88._12_4_;
    local_78.DataPtr = local_88.DataPtr;
    FSoftObjectPath::SetPath(&local_58,&local_78);
    this_00 = FSoftObjectPath::ResolveObject(&local_58);
    pUVar10 = (UObject *)&DAT_00000003;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this_00 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(this_00);
  }
  if ((((ulonglong)pUVar10 & 2) != 0) &&
     (pUVar10 = (UObject *)(ulonglong)((uint)pUVar10 & 0xfffffffd),
     local_58.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_58.SubPathString.Data.AllocatorInstance.Data);
  }
  if ((((ulonglong)pUVar10 & 1) != 0) &&
     (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  bVar5 = false;
  bVar4 = false;
  if (this_00 == (UObject *)0x0) {
    return;
  }
  pUVar10 = *(UObject **)&this_00->field_0x10;
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar10 != (UObject *)0x0) goto LAB_1476c5bf1;
LAB_1476c5c65:
    local_88.DataPtr = (wchar_t *)0x0;
    local_88.Size = 0;
    local_88._12_4_ = 0;
  }
  else {
    if (pUVar10 == (UObject *)0x0) goto LAB_1476c5c65;
    UE::GC::MarkAsReachable(pUVar10);
LAB_1476c5bf1:
    pUVar2 = *(UObject **)&pUVar10[1].field_0x18;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar2);
    }
    local_res20.ComparisonIndex.Value = *(uint *)&pUVar10->field_0x18;
    local_res20.Number = *(uint *)&pUVar10->field_0x1c;
    ::FName::ToString(&local_res20,&local_a8);
    bVar6 = Trace::Private::NameMatchesBaseAudioAsset(&local_a8);
    while ((!bVar6 && (1 < local_a8.Data.ArrayNum))) {
      if (pUVar2 == (UObject *)0x0) {
        bVar4 = true;
        local_88.DataPtr = (wchar_t *)0x0;
        local_88.Size = 0;
        local_88._12_4_ = 0;
        pTVar12 = &local_88;
      }
      else {
        local_res20.ComparisonIndex.Value = *(uint *)&pUVar2->field_0x18;
        local_res20.Number = *(uint *)&pUVar2->field_0x1c;
        bVar5 = true;
        ::FName::ToString(&local_res20,(FString *)&local_78);
        pTVar12 = &local_78;
      }
      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
      local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)pTVar12->DataPtr;
      pTVar12->DataPtr = (wchar_t *)0x0;
      local_a8.Data.ArrayNum = pTVar12->Size;
      local_a8.Data.ArrayMax = *(int *)&pTVar12->field_0xc;
      *(undefined8 *)&pTVar12->Size = 0;
      if ((bVar4) &&
         (bVar4 = false,
         (FScriptContainerElement *)local_88.DataPtr != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_88.DataPtr);
      }
      if ((bVar5) &&
         (bVar5 = false,
         (FScriptContainerElement *)local_78.DataPtr != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_78.DataPtr);
      }
      pUVar10 = pUVar13;
      if (pUVar2 != (UObject *)0x0) {
        pUVar10 = *(UObject **)&pUVar2[1].field_0x18;
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar10);
      }
      bVar6 = Trace::Private::NameMatchesBaseAudioAsset(&local_a8);
      pUVar2 = pUVar10;
    }
    local_88._12_4_ = local_a8.Data.ArrayMax;
    local_88.Size = local_a8.Data.ArrayNum;
    local_88.DataPtr = (wchar_t *)local_a8.Data.AllocatorInstance.Data;
  }
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  pFVar7 = ::FName::ToString(&local_res18,(FString *)&local_58);
  pUVar8 = UAudioComponent::GetAudioComponentFromID(param_1->AudioComponentID);
  if (pUVar8 != (UAudioComponent *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar8);
    }
    lVar3 = *(longlong *)&pUVar8->field_0xa8;
    if (lVar3 != 0) {
      if (*(int *)(lVar3 + 0x1f0) < 2) {
        local_res20 = *(FName *)(lVar3 + 0x18);
        ::FName::ToString(&local_res20,&local_98);
      }
      else {
        local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_98.Data.ArrayNum = *(int *)(lVar3 + 0x1f0);
        lVar11 = (longlong)local_98.Data.ArrayNum;
        _Src = *(void **)(lVar3 + 0x1e8);
        if (local_98.Data.ArrayNum == 0) {
          local_98.Data.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_98.Data.ArrayNum,0,(ForAnyElementType *)&local_98,
                     local_98.Data.ArrayNum,&local_98.Data.ArrayMax);
          memcpy(local_98.Data.AllocatorInstance.Data,_Src,lVar11 * 2);
        }
      }
      goto LAB_1476c5df1;
    }
  }
  FActiveSound::GetOwnerName(param_1,&local_98);
LAB_1476c5df1:
  pFVar9 = UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this_00,&local_68,(UObject *)0x0);
  SendEvent(param_1->AudioDevice->DeviceID,param_2,param_1->PlayOrder,pFVar9,&local_98,pFVar7,
            (FString *)&local_88);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  if (local_58.AssetPath.PackageName != (FName)0x0) {
    FMemory::Free((void *)local_58.AssetPath.PackageName);
  }
  if ((FScriptContainerElement *)local_88.DataPtr != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.DataPtr);
  }
  return;
}

// SendEvent @ 1476c5ea0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
Audio::Trace::EventLog::SendEvent
          (uint param_1,FString *param_2,uint param_3,FString *param_4,FString *param_5,
          FString *param_6,FString *param_7)

{
  wchar_t wVar1;
  short sVar2;
  longlong lVar3;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  wchar_t *pwVar6;
  int iVar7;
  wchar_t *pwVar8;
  int iVar9;
  undefined1 auStack_78 [32];
  LARGE_INTEGER local_58;
  uint *local_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_78;
  if ((-1 < AudioMixerChannel->Enabled) && (-1 < AudioMixerChannel->Enabled)) {
    UE::Trace::Private::FLogScope::Enter<FAudioEventLogFields>((TLogScope<1> *)&local_50);
    *local_50 = param_1;
    QueryPerformanceCounter(&local_58);
    *(LARGE_INTEGER *)(local_50 + 1) = local_58;
    local_50[3] = param_3;
    pwVar8 = L"";
    if ((param_4->Data).ArrayNum == 0) {
      pwVar6 = L"";
    }
    else {
      pwVar6 = (wchar_t *)(param_4->Data).AllocatorInstance.Data;
    }
    iVar7 = 0;
    iVar9 = 0;
    wVar1 = *pwVar6;
    pFVar4 = (FScriptContainerElement *)pwVar6;
    while (wVar1 != L'\0') {
      pFVar4 = pFVar4 + 2;
      iVar9 = iVar9 + 1;
      wVar1 = *(wchar_t *)pFVar4;
    }
    UE::Trace::Private::Field_WriteStringWide(3,pwVar6,iVar9);
    if ((param_2->Data).ArrayNum == 0) {
      pwVar6 = L"";
    }
    else {
      pwVar6 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
    }
    iVar9 = 0;
    sVar2 = *pwVar6;
    pFVar4 = (FScriptContainerElement *)pwVar6;
    while (sVar2 != 0) {
      pFVar4 = pFVar4 + 2;
      iVar9 = iVar9 + 1;
      sVar2 = *(short *)pFVar4;
    }
    UE::Trace::Private::Field_WriteStringWide(4,pwVar6,iVar9);
    if ((param_5->Data).ArrayNum == 0) {
      pwVar6 = L"";
    }
    else {
      pwVar6 = (wchar_t *)(param_5->Data).AllocatorInstance.Data;
    }
    iVar9 = 0;
    wVar1 = *pwVar6;
    pFVar4 = (FScriptContainerElement *)pwVar6;
    while (wVar1 != L'\0') {
      pFVar4 = pFVar4 + 2;
      iVar9 = iVar9 + 1;
      wVar1 = *(wchar_t *)pFVar4;
    }
    UE::Trace::Private::Field_WriteStringWide(5,pwVar6,iVar9);
    if ((param_6->Data).ArrayNum == 0) {
      pwVar6 = L"";
    }
    else {
      pwVar6 = (wchar_t *)(param_6->Data).AllocatorInstance.Data;
    }
    iVar9 = 0;
    wVar1 = *pwVar6;
    pFVar4 = (FScriptContainerElement *)pwVar6;
    while (wVar1 != L'\0') {
      pFVar4 = pFVar4 + 2;
      iVar9 = iVar9 + 1;
      wVar1 = *(wchar_t *)pFVar4;
    }
    UE::Trace::Private::Field_WriteStringWide(6,pwVar6,iVar9);
    if ((param_7->Data).ArrayNum != 0) {
      pwVar8 = (wchar_t *)(param_7->Data).AllocatorInstance.Data;
    }
    wVar1 = *pwVar8;
    pFVar4 = (FScriptContainerElement *)pwVar8;
    while (wVar1 != L'\0') {
      pFVar4 = pFVar4 + 2;
      iVar7 = iVar7 + 1;
      wVar1 = *(wchar_t *)pFVar4;
    }
    UE::Trace::Private::Field_WriteStringWide(7,pwVar8,iVar7);
    lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar3 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar3 = *(longlong *)(lVar3 + 0x20);
    **(undefined1 **)(lVar3 + 0x20) = 6;
    lVar5 = *(longlong *)(lVar3 + 0x20) + 1;
    *(longlong *)(lVar3 + 0x20) = lVar5;
    if (lVar3 != local_48) {
      *(longlong *)(lVar3 + 0x28) = lVar5;
    }
    *(undefined8 *)(local_48 + 0x28) = *(undefined8 *)(local_48 + 0x20);
  }
  return;
}

// SetAudioTaskPriority @ 1476c7350

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl SetAudioTaskPriority(TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  wchar_t *pwVar5;
  
  if (3 < (byte)LogConsoleResponse._0_1_) {
    LowLevelTasks::ToString(GAudioTaskPriority);
    UE::Logging::Private::BasicLog<4>(&LOG_Static,(FLogCategoryBase *)&LogConsoleResponse);
  }
  iVar4 = param_1->ArrayNum;
  if (iVar4 < 2) {
    if (iVar4 == 0) {
      if ((byte)LogConsoleResponse._0_1_ < 4) {
        return;
      }
      UE::Logging::Private::BasicLog<4>(&LOG_Static,(FLogCategoryBase *)&LogConsoleResponse);
      return;
    }
  }
  else if (3 < (byte)LogConsoleResponse._0_1_) {
    UE::Logging::Private::BasicLog<4>(&LOG_Static,(FLogCategoryBase *)&LogConsoleResponse);
    iVar4 = param_1->ArrayNum;
  }
  if ((iVar4 < 1) &&
     (bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar1 = (param_1->AllocatorInstance).Data;
  if (*(int *)(pFVar1 + 8) == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = *(wchar_t **)pFVar1;
  }
  iVar4 = FGenericPlatformStricmp::Stricmp(pwVar5,L"High");
  if (iVar4 == 0) {
    GAudioTaskPriority = High;
  }
  else {
    iVar4 = FGenericPlatformStricmp::Stricmp(pwVar5,L"Normal");
    if (iVar4 == 0) {
      GAudioTaskPriority = Default;
    }
    else {
      iVar4 = FGenericPlatformStricmp::Stricmp(pwVar5,L"BackgroundHigh");
      if (iVar4 == 0) {
        GAudioTaskPriority = BackgroundHigh;
      }
      else {
        iVar4 = FGenericPlatformStricmp::Stricmp(pwVar5,L"BackgroundNormal");
        if (iVar4 == 0) {
          GAudioTaskPriority = BackgroundNormal;
        }
        else {
          iVar4 = FGenericPlatformStricmp::Stricmp(pwVar5,L"BackgroundLow");
          if (iVar4 == 0) {
            GAudioTaskPriority = BackgroundLow;
          }
          else if (3 < (byte)LogConsoleResponse._0_1_) {
            if ((param_1->ArrayNum < 1) &&
               (bVar3 = FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar3)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            UE::Logging::Private::BasicLog<4>(&LOG_Static,(FLogCategoryBase *)&LogConsoleResponse);
          }
        }
      }
    }
  }
  if (3 < (byte)LogConsoleResponse._0_1_) {
    UE::Logging::Private::BasicLog<4>(&LOG_Static,(FLogCategoryBase *)&LogConsoleResponse);
  }
  return;
}

// SetBlendState @ 1476c7600

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
SetBlendState(FRHICommandList *param_1,FGraphicsPipelineStateInitializer *param_2,
             ESimpleElementBlendMode param_3)

{
  code *pcVar1;
  bool bVar2;
  TRefCountPtr<FRHIBlendState> TVar3;
  IConsoleManager *pIVar4;
  longlong *plVar5;
  TConsoleVariableData<int> *pTVar6;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < _TSS0) && (_Init_thread_header(&_TSS0), _TSS0 == -1)) {
    pIVar4 = IConsoleManager::Get();
    plVar5 = (longlong *)(**(code **)((longlong)*pIVar4 + 0xc0))(pIVar4,L"r.HDR.UI.CompositeMode",1)
    ;
    pTVar6 = (TConsoleVariableData<int> *)0x0;
    if (plVar5 != (longlong *)0x0) {
      pTVar6 = (TConsoleVariableData<int> *)(**(code **)(*plVar5 + 0x68))(plVar5);
    }
    CVarCompositeMode = pTVar6;
    _Init_thread_footer(&_TSS0);
  }
  pTVar6 = CVarCompositeMode;
  if ((GRHIGlobals.SupportsHDROutput == false) ||
     (CVarCompositeMode == (TConsoleVariableData<int> *)0x0)) {
LAB_1476c76ac:
    switch(param_3) {
    case SE_BLEND_Opaque:
    case SE_BLEND_Masked:
    case SE_BLEND_MaskedDistanceField:
    case SE_BLEND_MaskedDistanceFieldShadowed:
      TVar3.Reference =
           TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
           ::StaticResource.StateRHI.Reference;
      break;
    case SE_BLEND_Translucent:
    case SE_BLEND_TranslucentDistanceField:
    case SE_BLEND_TranslucentDistanceFieldShadowed:
    case SE_BLEND_TranslucentAlphaOnly:
      TVar3.Reference =
           TStaticStateRHI<TStaticBlendState<7,0,4,5,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
           ::StaticResource.StateRHI.Reference;
      break;
    case SE_BLEND_Additive:
      TVar3.Reference =
           TStaticStateRHI<TStaticBlendState<7,0,1,1,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
           ::StaticResource.StateRHI.Reference;
      break;
    case SE_BLEND_Modulate:
      TVar3.Reference =
           TStaticStateRHI<TStaticBlendState<7,0,8,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
           ::StaticResource.StateRHI.Reference;
      break;
    case SE_BLEND_AlphaComposite:
      TVar3.Reference =
           TStaticStateRHI<TStaticBlendState<15,0,1,5,0,1,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
           ::StaticResource.StateRHI.Reference;
      break;
    case SE_BLEND_AlphaHoldout:
      TVar3.Reference =
           TStaticStateRHI<TStaticBlendState<15,0,0,5,0,0,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
           ::StaticResource.StateRHI.Reference;
      break;
    case SE_BLEND_AlphaBlend:
    case SE_BLEND_TranslucentAlphaOnlyWriteAlpha:
      goto switchD_1476c76c2_caseD_b;
    default:
      goto switchD_1476c76c2_default;
    }
  }
  else {
    bVar2 = IsInParallelRenderingThread();
    if ((!bVar2) &&
       (bVar2 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<6409875433831007955>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                           ,0x6d3,"IsInParallelRenderingThread()"), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (((pTVar6->ShadowedValue[1] == 0) || (bVar2 = IsHDREnabled(), !bVar2)) ||
       ((param_3 != SE_BLEND_Translucent &&
        (((param_3 != SE_BLEND_TranslucentDistanceField &&
          (param_3 != SE_BLEND_TranslucentDistanceFieldShadowed)) &&
         (param_3 != SE_BLEND_TranslucentAlphaOnly)))))) goto LAB_1476c76ac;
switchD_1476c76c2_caseD_b:
    TVar3.Reference =
         TStaticStateRHI<TStaticBlendState<15,0,4,5,0,7,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
         ::StaticResource.StateRHI.Reference;
  }
  param_2->BlendState = TVar3.Reference;
switchD_1476c76c2_default:
  return;
}

// ToString @ 1476cab60

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

wchar_t * __cdecl LowLevelTasks::ToString(ETaskPriority param_1)

{
  wchar_t *local_38 [7];
  
  if (param_1 < Count) {
    local_38[0] = L"High";
    local_38[1] = L"Normal";
    local_38[2] = L"BackgroundHigh";
    local_38[3] = L"BackgroundNormal";
    local_38[4] = L"BackgroundLow";
    return local_38[(char)param_1];
  }
  return (wchar_t *)0x0;
}

// WriteBPGCBreadcrumbs @ 1476ce180

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
WriteBPGCBreadcrumbs(FCrashContextExtendedWriter *param_1,BPGCBreadcrumbsParams *param_2)

{
  code *pcVar1;
  wchar_t *pwVar2;
  undefined1 auStack_908 [32];
  TStringBuilderBase<wchar_t> local_8e8;
  wchar_t local_8c8 [64];
  TStringBuilderBase<wchar_t> local_848;
  wchar_t local_828 [1024];
  ulonglong local_28 [2];
  
  local_28[0] = __security_cookie.value ^ (ulonglong)auStack_908;
  if (ThreadCount < 0x10) {
    local_848.Base = local_828;
    local_848.CurPos = local_828;
    local_848.End = (wchar_t *)local_28;
    local_848.bIsDynamic = false;
    local_848.bIsExternal = false;
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_2->Object,(UObject *)0x0,&local_848)
    ;
    if (local_848.End < local_848.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_848,1);
    }
    *local_848.CurPos = L'\n';
    local_848.CurPos = local_848.CurPos + 1;
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_2->BPGC,(UObject *)0x0,&local_848);
    if (local_848.End < local_848.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_848,1);
    }
    *local_848.CurPos = L'\n';
    local_8e8.Base = local_8c8;
    local_848.CurPos = local_848.CurPos + 1;
    local_8e8.CurPos = local_8c8;
    local_8e8.End = (wchar_t *)&local_848;
    local_8e8.bIsDynamic = false;
    local_8e8.bIsExternal = false;
    TStringBuilderBase<wchar_t>::AppendfImpl(&local_8e8,L"BPGCBreadcrumb_%u");
    pcVar1 = *(code **)((longlong)*param_1 + 0x10);
    if (local_848.End < local_848.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_848,1);
    }
    pwVar2 = local_848.Base;
    *local_848.CurPos = L'\0';
    if (local_8e8.End < (TStringBuilderBase<wchar_t> *)(local_8e8.CurPos + 1)) {
      TStringBuilderBase<wchar_t>::Extend(&local_8e8,1);
    }
    *local_8e8.CurPos = L'\0';
    (*pcVar1)(param_1,local_8e8.Base,pwVar2);
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_8e8);
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_848);
  }
  ThreadCount = ThreadCount + 1;
  return;
}

// Z_Construct_UClass_AAudioVolume_NoRegister @ 1476ce350

UClass * __cdecl Z_Construct_UClass_AAudioVolume_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AAudioVolume.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AudioVolume",
               &Z_Registration_Info_UClass_AAudioVolume.InnerSingleton,
               AAudioVolume::StaticRegisterNativesAAudioVolume,0x368,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<AAudioVolume>,
               InternalVTableHelperCtorCaller<AAudioVolume>,local_res8,AVolume::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AAudioVolume.InnerSingleton;
}

// Z_Construct_UClass_ABlockingVolume_NoRegister @ 1476ce410

UClass * __cdecl Z_Construct_UClass_ABlockingVolume_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ABlockingVolume.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"BlockingVolume",
               &Z_Registration_Info_UClass_ABlockingVolume.InnerSingleton,
               ABlockingVolume::StaticRegisterNativesABlockingVolume,0x2f8,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<ABlockingVolume>,InternalVTableHelperCtorCaller<ABlockingVolume>,
               local_res8,AVolume::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ABlockingVolume.InnerSingleton;
}

// Z_Construct_UClass_ABrushShape_NoRegister @ 1476ce4d0

UClass * __cdecl Z_Construct_UClass_ABrushShape_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ABrushShape.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"BrushShape",
               &Z_Registration_Info_UClass_ABrushShape.InnerSingleton,
               ABrushShape::StaticRegisterNativesABrushShape,0x2f8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ABrushShape>,
               InternalVTableHelperCtorCaller<ABrushShape>,local_res8,ABrush::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ABrushShape.InnerSingleton;
}

// Z_Construct_UClass_ABrush_NoRegister @ 1476ce590

UClass * __cdecl Z_Construct_UClass_ABrush_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ABrush.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"Brush",&Z_Registration_Info_UClass_ABrush.InnerSingleton,
               ABrush::StaticRegisterNativesABrush,0x2f8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ABrush>,
               InternalVTableHelperCtorCaller<ABrush>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ABrush.InnerSingleton;
}

// Z_Construct_UClass_ACameraActor_NoRegister @ 1476ce650

UClass * __cdecl Z_Construct_UClass_ACameraActor_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ACameraActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"CameraActor",
               &Z_Registration_Info_UClass_ACameraActor.InnerSingleton,
               ACameraActor::StaticRegisterNativesACameraActor,0xa60,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<ACameraActor>,InternalVTableHelperCtorCaller<ACameraActor>,
               local_res8,AActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ACameraActor.InnerSingleton;
}

// Z_Construct_UClass_ACameraBlockingVolume_NoRegister @ 1476ce710

UClass * __cdecl Z_Construct_UClass_ACameraBlockingVolume_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ACameraBlockingVolume.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"CameraBlockingVolume",
               &Z_Registration_Info_UClass_ACameraBlockingVolume.InnerSingleton,
               ACameraBlockingVolume::StaticRegisterNativesACameraBlockingVolume,0x2f8,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<ACameraBlockingVolume>,
               InternalVTableHelperCtorCaller<ACameraBlockingVolume>,local_res8,AVolume::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ACameraBlockingVolume.InnerSingleton;
}

// Z_Construct_UClass_UActorSoundParameterInterface_NoRegister @ 1476ce7d0

UClass * __cdecl Z_Construct_UClass_UActorSoundParameterInterface_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UActorSoundParameterInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ActorSoundParameterInterface",
               &Z_Registration_Info_UClass_UActorSoundParameterInterface.InnerSingleton,
               UActorSoundParameterInterface::StaticRegisterNativesUActorSoundParameterInterface,
               0x28,8,CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UActorSoundParameterInterface>,
               InternalVTableHelperCtorCaller<UActorSoundParameterInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UActorSoundParameterInterface.InnerSingleton;
}

// Z_Construct_UClass_UAudioParameterConversionStatics_NoRegister @ 1476ce890

UClass * __cdecl Z_Construct_UClass_UAudioParameterConversionStatics_NoRegister(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UAudioParameterConversionStatics.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AudioParameterConversionStatics",
               &Z_Registration_Info_UClass_UAudioParameterConversionStatics.InnerSingleton,
               UAudioParameterConversionStatics::
               StaticRegisterNativesUAudioParameterConversionStatics,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAudioParameterConversionStatics>,
               InternalVTableHelperCtorCaller<UAudioParameterConversionStatics>,aFStackX_8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioParameterConversionStatics.InnerSingleton;
}

// Z_Construct_UClass_UAudioWidgetSubsystem_NoRegister @ 1476ce8a0

UClass * __cdecl Z_Construct_UClass_UAudioWidgetSubsystem_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioWidgetSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AudioWidgetSubsystem",
               &Z_Registration_Info_UClass_UAudioWidgetSubsystem.InnerSingleton,
               UAudioWidgetSubsystem::StaticRegisterNativesUAudioWidgetSubsystem,0x30,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UAudioWidgetSubsystem>,
               InternalVTableHelperCtorCaller<UAudioWidgetSubsystem>,local_res8,
               UEngineSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioWidgetSubsystem.InnerSingleton;
}

// Z_Construct_UClass_UBlueprintFunctionLibrary_NoRegister @ 1476ce960

UClass * __cdecl Z_Construct_UClass_UBlueprintFunctionLibrary_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBlueprintFunctionLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"BlueprintFunctionLibrary",
               &Z_Registration_Info_UClass_UBlueprintFunctionLibrary.InnerSingleton,
               UBlueprintFunctionLibrary::StaticRegisterNativesUBlueprintFunctionLibrary,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UBlueprintFunctionLibrary>,
               InternalVTableHelperCtorCaller<UBlueprintFunctionLibrary>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBlueprintFunctionLibrary.InnerSingleton;
}

// Z_Construct_UClass_UBlueprintGeneratedClass_NoRegister @ 1476cea10

UClass * __cdecl Z_Construct_UClass_UBlueprintGeneratedClass_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBlueprintGeneratedClass.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UClass::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"BlueprintGeneratedClass",
               &Z_Registration_Info_UClass_UBlueprintGeneratedClass.InnerSingleton,
               UBlueprintGeneratedClass::StaticRegisterNativesUBlueprintGeneratedClass,0x370,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UBlueprintGeneratedClass>,
               InternalVTableHelperCtorCaller<UBlueprintGeneratedClass>,local_res8,
               UClass::StaticClass,UPackage::StaticClass);
  }
  return Z_Registration_Info_UClass_UBlueprintGeneratedClass.InnerSingleton;
}

// Z_Construct_UClass_UBlueprintInstancedStructLibrary_NoRegister @ 1476cead0

UClass * __cdecl Z_Construct_UClass_UBlueprintInstancedStructLibrary_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBlueprintInstancedStructLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"BlueprintInstancedStructLibrary",
               &Z_Registration_Info_UClass_UBlueprintInstancedStructLibrary.InnerSingleton,
               UBlueprintInstancedStructLibrary::
               StaticRegisterNativesUBlueprintInstancedStructLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UBlueprintInstancedStructLibrary>,
               InternalVTableHelperCtorCaller<UBlueprintInstancedStructLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBlueprintInstancedStructLibrary.InnerSingleton;
}

// Z_Construct_UClass_UBlueprintMapLibrary_NoRegister @ 1476ceb90

UClass * __cdecl Z_Construct_UClass_UBlueprintMapLibrary_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBlueprintMapLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"BlueprintMapLibrary",
               &Z_Registration_Info_UClass_UBlueprintMapLibrary.InnerSingleton,
               UBlueprintMapLibrary::StaticRegisterNativesUBlueprintMapLibrary,0x28,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UBlueprintMapLibrary>,
               InternalVTableHelperCtorCaller<UBlueprintMapLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBlueprintMapLibrary.InnerSingleton;
}

// Z_Construct_UClass_UBlueprintSetLibrary_NoRegister @ 1476cec50

UClass * __cdecl Z_Construct_UClass_UBlueprintSetLibrary_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBlueprintSetLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"BlueprintSetLibrary",
               &Z_Registration_Info_UClass_UBlueprintSetLibrary.InnerSingleton,
               UBlueprintSetLibrary::StaticRegisterNativesUBlueprintSetLibrary,0x28,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UBlueprintSetLibrary>,
               InternalVTableHelperCtorCaller<UBlueprintSetLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBlueprintSetLibrary.InnerSingleton;
}

// Z_Construct_UClass_UBlueprint_NoRegister @ 1476ced10

UClass * __cdecl Z_Construct_UClass_UBlueprint_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBlueprint.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"Blueprint",&Z_Registration_Info_UClass_UBlueprint.InnerSingleton,
               UBlueprint::StaticRegisterNativesUBlueprint,0xa8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_UBlueprint,L"Engine",InternalConstructor<UBlueprint>,
               InternalVTableHelperCtorCaller<UBlueprint>,local_res8,UBlueprintCore::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBlueprint.InnerSingleton;
}

// Z_Construct_UClass_UBookMark_NoRegister @ 1476cedd0

UClass * __cdecl Z_Construct_UClass_UBookMark_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBookMark.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"BookMark",&Z_Registration_Info_UClass_UBookMark.InnerSingleton,
               UBookMark::StaticRegisterNativesUBookMark,0x68,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UBookMark>,InternalVTableHelperCtorCaller<UBookMark>,
               local_res8,UBookmarkBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBookMark.InnerSingleton;
}

// Z_Construct_UClass_UBrushBuilder_NoRegister @ 1476cee90

UClass * __cdecl Z_Construct_UClass_UBrushBuilder_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBrushBuilder.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"BrushBuilder",
               &Z_Registration_Info_UClass_UBrushBuilder.InnerSingleton,
               UBrushBuilder::StaticRegisterNativesUBrushBuilder,0x80,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UBrushBuilder>,InternalVTableHelperCtorCaller<UBrushBuilder>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBrushBuilder.InnerSingleton;
}

// Z_Construct_UClass_UCameraLensEffectInterfaceClassSupportLibrary_NoRegister @ 1476cef40

UClass * __cdecl Z_Construct_UClass_UCameraLensEffectInterfaceClassSupportLibrary_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCameraLensEffectInterfaceClassSupportLibrary.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"CameraLensEffectInterfaceClassSupportLibrary",
               &Z_Registration_Info_UClass_UCameraLensEffectInterfaceClassSupportLibrary.
                InnerSingleton,
               UCameraLensEffectInterfaceClassSupportLibrary::
               StaticRegisterNativesUCameraLensEffectInterfaceClassSupportLibrary,0x28,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UCameraLensEffectInterfaceClassSupportLibrary>,
               InternalVTableHelperCtorCaller<UCameraLensEffectInterfaceClassSupportLibrary>,
               local_res8,UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCameraLensEffectInterfaceClassSupportLibrary.InnerSingleton;
}

// Z_Construct_UClass_UCameraModifier_CameraShake_NoRegister @ 1476cf000

UClass * __cdecl Z_Construct_UClass_UCameraModifier_CameraShake_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCameraModifier_CameraShake.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"CameraModifier_CameraShake",
               &Z_Registration_Info_UClass_UCameraModifier_CameraShake.InnerSingleton,
               UCameraModifier_CameraShake::StaticRegisterNativesUCameraModifier_CameraShake,200,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Camera",
               InternalConstructor<UCameraModifier_CameraShake>,
               InternalVTableHelperCtorCaller<UCameraModifier_CameraShake>,local_res8,
               UCameraModifier::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCameraModifier_CameraShake.InnerSingleton;
}

// Z_Construct_UClass_UCameraModifier_NoRegister @ 1476cf0c0

UClass * __cdecl Z_Construct_UClass_UCameraModifier_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCameraModifier.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"CameraModifier",
               &Z_Registration_Info_UClass_UCameraModifier.InnerSingleton,
               UCameraModifier::StaticRegisterNativesUCameraModifier,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UCameraModifier>,
               InternalVTableHelperCtorCaller<UCameraModifier>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCameraModifier.InnerSingleton;
}

// Z_Construct_UClass_UCameraProxyMeshComponent_NoRegister @ 1476cf170

UClass * __cdecl Z_Construct_UClass_UCameraProxyMeshComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCameraProxyMeshComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UStaticMeshComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"CameraProxyMeshComponent",
               &Z_Registration_Info_UClass_UCameraProxyMeshComponent.InnerSingleton,
               UCameraProxyMeshComponent::StaticRegisterNativesUCameraProxyMeshComponent,0x650,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UCameraProxyMeshComponent>,
               InternalVTableHelperCtorCaller<UCameraProxyMeshComponent>,local_res8,
               UStaticMeshComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCameraProxyMeshComponent.InnerSingleton;
}

// Z_Construct_UClass_UDEPRECATED_Breakpoint_NoRegister @ 1476cf230

UClass * __cdecl Z_Construct_UClass_UDEPRECATED_Breakpoint_NoRegister(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UDEPRECATED_Breakpoint.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"Breakpoint",
               &Z_Registration_Info_UClass_UDEPRECATED_Breakpoint.InnerSingleton,
               UDEPRECATED_Breakpoint::StaticRegisterNativesUDEPRECATED_Breakpoint,0x28,8,
               CLASS_Intrinsic|CLASS_Deprecated,CASTCLASS_None,L"Engine",
               InternalConstructor<UDEPRECATED_Breakpoint>,
               InternalVTableHelperCtorCaller<UDEPRECATED_Breakpoint>,aFStackX_8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDEPRECATED_Breakpoint.InnerSingleton;
}

// Z_Construct_UClass_USoundParameterControllerInterface_NoRegister @ 1476cf240

UClass * __cdecl Z_Construct_UClass_USoundParameterControllerInterface_NoRegister(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_USoundParameterControllerInterface.InnerSingleton == (UClass *)0x0)
  {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SoundParameterControllerInterface",
               &Z_Registration_Info_UClass_USoundParameterControllerInterface.InnerSingleton,
               USoundParameterControllerInterface::
               StaticRegisterNativesUSoundParameterControllerInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<USoundParameterControllerInterface>,
               InternalVTableHelperCtorCaller<USoundParameterControllerInterface>,aFStackX_8,
               UAudioParameterControllerInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USoundParameterControllerInterface.InnerSingleton;
}

// Z_Construct_UEnum_Engine_EBlueprintCompileMode @ 1476cf250

UEnum * __cdecl Z_Construct_UEnum_Engine_EBlueprintCompileMode(void)

{
  if (Z_Registration_Info_UEnum_EBlueprintCompileMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EBlueprintCompileMode.InnerSingleton,
               &Z_Construct_UEnum_Engine_EBlueprintCompileMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EBlueprintCompileMode.InnerSingleton;
}

// Z_Construct_UEnum_Engine_EBlueprintStatus @ 1476cf290

UEnum * __cdecl Z_Construct_UEnum_Engine_EBlueprintStatus(void)

{
  if (Z_Registration_Info_UEnum_EBlueprintStatus.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EBlueprintStatus.InnerSingleton,
               &Z_Construct_UEnum_Engine_EBlueprintStatus_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EBlueprintStatus.InnerSingleton;
}

// Z_Construct_UEnum_Engine_ECsgOper @ 1476cf2d0

UEnum * __cdecl Z_Construct_UEnum_Engine_ECsgOper(void)

{
  if (Z_Registration_Info_UEnum_ECsgOper.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ECsgOper.InnerSingleton,
               &Z_Construct_UEnum_Engine_ECsgOper_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ECsgOper.InnerSingleton;
}

// Z_Construct_UEnum_Engine_EShouldCookBlueprintPropertyGuids @ 1476cf310

UEnum * __cdecl Z_Construct_UEnum_Engine_EShouldCookBlueprintPropertyGuids(void)

{
  if (Z_Registration_Info_UEnum_EShouldCookBlueprintPropertyGuids.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EShouldCookBlueprintPropertyGuids.InnerSingleton,
               &Z_Construct_UEnum_Engine_EShouldCookBlueprintPropertyGuids_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EShouldCookBlueprintPropertyGuids.InnerSingleton;
}

// Z_Construct_UScriptStruct_FBPEditorBookmarkNode @ 1476cf350

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FBPEditorBookmarkNode(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FBPEditorBookmarkNode.InnerSingleton == (UScriptStruct *)0x0
     ) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FBPEditorBookmarkNode.InnerSingleton,
               &Z_Construct_UScriptStruct_FBPEditorBookmarkNode_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FBPEditorBookmarkNode.InnerSingleton != (UScriptStruct *)0x0
     ) {
    return Z_Registration_Info_UScriptStruct_FBPEditorBookmarkNode.InnerSingleton;
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

// Z_Construct_UScriptStruct_FBPInterfaceDescription @ 1476cf3d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FBPInterfaceDescription(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FBPInterfaceDescription.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FBPInterfaceDescription.InnerSingleton,
               &Z_Construct_UScriptStruct_FBPInterfaceDescription_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FBPInterfaceDescription.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FBPInterfaceDescription.InnerSingleton;
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

// Z_Construct_UScriptStruct_FBPVariableDescription @ 1476cf450

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FBPVariableDescription(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FBPVariableDescription.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FBPVariableDescription.InnerSingleton,
               &Z_Construct_UScriptStruct_FBPVariableDescription_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FBPVariableDescription.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FBPVariableDescription.InnerSingleton;
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

// Z_Construct_UScriptStruct_FBlueprintDebugData @ 1476cf4d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FBlueprintDebugData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FBlueprintDebugData.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FBlueprintDebugData.InnerSingleton,
               &Z_Construct_UScriptStruct_FBlueprintDebugData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FBlueprintDebugData.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FBlueprintDebugData.InnerSingleton;
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

// Z_Construct_UScriptStruct_FBlueprintMacroCosmeticInfo @ 1476cf550

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FBlueprintMacroCosmeticInfo(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FBlueprintMacroCosmeticInfo.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FBlueprintMacroCosmeticInfo.InnerSingleton,
               &Z_Construct_UScriptStruct_FBlueprintMacroCosmeticInfo_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FBlueprintMacroCosmeticInfo.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FBlueprintMacroCosmeticInfo.InnerSingleton;
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

// Z_Construct_UScriptStruct_FBookmarkJumpToSettings @ 1476cf5d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FBookmarkJumpToSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FBookmarkJumpToSettings.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FBookmarkJumpToSettings.InnerSingleton,
               &Z_Construct_UScriptStruct_FBookmarkJumpToSettings_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FBookmarkJumpToSettings.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FBookmarkJumpToSettings.InnerSingleton;
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

// Z_Construct_UScriptStruct_FDebuggingInfoForSingleFunction @ 1476cf650

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDebuggingInfoForSingleFunction(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDebuggingInfoForSingleFunction.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDebuggingInfoForSingleFunction.InnerSingleton,
               &Z_Construct_UScriptStruct_FDebuggingInfoForSingleFunction_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDebuggingInfoForSingleFunction.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FDebuggingInfoForSingleFunction.InnerSingleton;
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

// Z_Construct_UScriptStruct_FEditedDocumentInfo @ 1476cf6d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FEditedDocumentInfo(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FEditedDocumentInfo.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FEditedDocumentInfo.InnerSingleton,
               &Z_Construct_UScriptStruct_FEditedDocumentInfo_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FEditedDocumentInfo.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FEditedDocumentInfo.InnerSingleton;
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

// Z_Construct_UScriptStruct_FEventGraphFastCallPair @ 1476cf750

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FEventGraphFastCallPair(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FEventGraphFastCallPair.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FEventGraphFastCallPair.InnerSingleton,
               &Z_Construct_UScriptStruct_FEventGraphFastCallPair_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FEventGraphFastCallPair.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FEventGraphFastCallPair.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNodeToCodeAssociation @ 1476cf7d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNodeToCodeAssociation(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNodeToCodeAssociation.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNodeToCodeAssociation.InnerSingleton,
               &Z_Construct_UScriptStruct_FNodeToCodeAssociation_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNodeToCodeAssociation.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNodeToCodeAssociation.InnerSingleton;
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

// Z_Construct_UScriptStruct_FPointerToUberGraphFrame @ 1476cf850

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPointerToUberGraphFrame(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPointerToUberGraphFrame.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPointerToUberGraphFrame.InnerSingleton,
               &Z_Construct_UScriptStruct_FPointerToUberGraphFrame_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPointerToUberGraphFrame.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPointerToUberGraphFrame.InnerSingleton;
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

// CurrentAudioThreadStatIdCS'' @ 1503e8840

void __cdecl `dynamic_atexit_destructor_for_'FAudioThread::CurrentAudioThreadStatIdCS__(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001503e8847. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&FAudioThread::CurrentAudioThreadStatIdCS);
  return;
}

// ResumeEvent'' @ 1503e8860

void __cdecl `dynamic_atexit_destructor_for_'FAudioThread::ResumeEvent__(void)

{
  int *piVar1;
  int iVar2;
  FTaskEvent FVar3;
  TUniquePtr<UE::Tasks::FTaskEvent,TDefaultDelete<UE::Tasks::FTaskEvent>_> TVar4;
  
  TVar4.Ptr = FAudioThread::ResumeEvent.Ptr;
  if (FAudioThread::ResumeEvent.Ptr != (FTaskEvent *)0x0) {
    FVar3 = *FAudioThread::ResumeEvent.Ptr;
    if (FVar3 != (FTaskEvent)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)FVar3 + 0x30);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (*(code *)**(undefined8 **)FVar3)(FVar3,1);
      }
    }
    ::operator_delete(TVar4.Ptr,8);
    return;
  }
  return;
}

// StaticResource'' @ 1503e88c0

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticBlendState<7,0,1,1,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
::StaticResource__(void)

{
  code *pcVar1;
  bool bVar2;
  
  TStaticStateRHI<TStaticBlendState<7,0,1,1,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
  ::StaticResource._padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticBlendState__06_0A__00_00_0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0A___V__TRefCountPtr_VFRHIBlendState____PEAVFRHIBlendState____6B_
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
             &TStaticStateRHI<TStaticBlendState<7,0,1,1,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
              ::StaticResource);
  if (TStaticStateRHI<TStaticBlendState<7,0,1,1,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
      ::StaticResource.StateRHI.Reference != (FRHIBlendState *)0x0) {
    FRHIResource::Release
              ((FRHIResource *)
               TStaticStateRHI<TStaticBlendState<7,0,1,1,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
               ::StaticResource.StateRHI.Reference);
  }
  FRenderResource::~FRenderResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticBlendState<7,0,1,1,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
              ::StaticResource);
  return;
}

// StaticResource'' @ 1503e8940

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticBlendState<7,0,4,5,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
::StaticResource__(void)

{
  code *pcVar1;
  bool bVar2;
  
  TStaticStateRHI<TStaticBlendState<7,0,4,5,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
  ::StaticResource._padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticBlendState__06_0A__03_04_0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0A___V__TRefCountPtr_VFRHIBlendState____PEAVFRHIBlendState____6B_
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
             &TStaticStateRHI<TStaticBlendState<7,0,4,5,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
              ::StaticResource);
  if (TStaticStateRHI<TStaticBlendState<7,0,4,5,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
      ::StaticResource.StateRHI.Reference != (FRHIBlendState *)0x0) {
    FRHIResource::Release
              ((FRHIResource *)
               TStaticStateRHI<TStaticBlendState<7,0,4,5,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
               ::StaticResource.StateRHI.Reference);
  }
  FRenderResource::~FRenderResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticBlendState<7,0,4,5,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
              ::StaticResource);
  return;
}

// StaticResource'' @ 1503e89c0

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticBlendState<7,0,4,5,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
::StaticResource__(void)

{
  code *pcVar1;
  bool bVar2;
  
  TStaticStateRHI<TStaticBlendState<7,0,4,5,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
  ::StaticResource._padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticBlendState__06_0A__03_04_0A__0A__00_0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0A___V__TRefCountPtr_VFRHIBlendState____PEAVFRHIBlendState____6B_
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
             &TStaticStateRHI<TStaticBlendState<7,0,4,5,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
              ::StaticResource);
  if (TStaticStateRHI<TStaticBlendState<7,0,4,5,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
      ::StaticResource.StateRHI.Reference != (FRHIBlendState *)0x0) {
    FRHIResource::Release
              ((FRHIResource *)
               TStaticStateRHI<TStaticBlendState<7,0,4,5,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
               ::StaticResource.StateRHI.Reference);
  }
  FRenderResource::~FRenderResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticBlendState<7,0,4,5,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
              ::StaticResource);
  return;
}

// StaticResource'' @ 1503e8a40

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticBlendState<7,0,8,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
::StaticResource__(void)

{
  code *pcVar1;
  bool bVar2;
  
  TStaticStateRHI<TStaticBlendState<7,0,8,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
  ::StaticResource._padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticBlendState__06_0A__07_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0A___V__TRefCountPtr_VFRHIBlendState____PEAVFRHIBlendState____6B_
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
             &TStaticStateRHI<TStaticBlendState<7,0,8,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
              ::StaticResource);
  if (TStaticStateRHI<TStaticBlendState<7,0,8,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
      ::StaticResource.StateRHI.Reference != (FRHIBlendState *)0x0) {
    FRHIResource::Release
              ((FRHIResource *)
               TStaticStateRHI<TStaticBlendState<7,0,8,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
               ::StaticResource.StateRHI.Reference);
  }
  FRenderResource::~FRenderResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticBlendState<7,0,8,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
              ::StaticResource);
  return;
}

// StaticResource'' @ 1503e8ac0

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticBlendState<15,0,1,5,0,1,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
::StaticResource__(void)

{
  code *pcVar1;
  bool bVar2;
  
  TStaticStateRHI<TStaticBlendState<15,0,1,5,0,1,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
  ::StaticResource._padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticBlendState__0P__0A__00_04_0A__00_04_0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0A___V__TRefCountPtr_VFRHIBlendState____PEAVFRHIBlendState____6B_
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
             &TStaticStateRHI<TStaticBlendState<15,0,1,5,0,1,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
              ::StaticResource);
  if (TStaticStateRHI<TStaticBlendState<15,0,1,5,0,1,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
      ::StaticResource.StateRHI.Reference != (FRHIBlendState *)0x0) {
    FRHIResource::Release
              ((FRHIResource *)
               TStaticStateRHI<TStaticBlendState<15,0,1,5,0,1,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
               ::StaticResource.StateRHI.Reference);
  }
  FRenderResource::~FRenderResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticBlendState<15,0,1,5,0,1,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
              ::StaticResource);
  return;
}

// StaticResource'' @ 1503e8b40

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

// StaticResource'' @ 1503e8bc0

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticBlendState<15,0,4,5,0,7,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
::StaticResource__(void)

{
  code *pcVar1;
  bool bVar2;
  
  TStaticStateRHI<TStaticBlendState<15,0,4,5,0,7,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
  ::StaticResource._padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticBlendState__0P__0A__03_04_0A__06_00_0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0A___V__TRefCountPtr_VFRHIBlendState____PEAVFRHIBlendState____6B_
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
             &TStaticStateRHI<TStaticBlendState<15,0,4,5,0,7,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
              ::StaticResource);
  if (TStaticStateRHI<TStaticBlendState<15,0,4,5,0,7,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
      ::StaticResource.StateRHI.Reference != (FRHIBlendState *)0x0) {
    FRHIResource::Release
              ((FRHIResource *)
               TStaticStateRHI<TStaticBlendState<15,0,4,5,0,7,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
               ::StaticResource.StateRHI.Reference);
  }
  FRenderResource::~FRenderResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticBlendState<15,0,4,5,0,7,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
              ::StaticResource);
  return;
}

// StaticResource'' @ 1503e8c40

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticBlendState<15,0,0,5,0,0,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
::StaticResource__(void)

{
  code *pcVar1;
  bool bVar2;
  
  TStaticStateRHI<TStaticBlendState<15,0,0,5,0,0,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
  ::StaticResource._padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticBlendState__0P__0A__0A__04_0A__0A__04_0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0A___V__TRefCountPtr_VFRHIBlendState____PEAVFRHIBlendState____6B_
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
             &TStaticStateRHI<TStaticBlendState<15,0,0,5,0,0,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
              ::StaticResource);
  if (TStaticStateRHI<TStaticBlendState<15,0,0,5,0,0,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
      ::StaticResource.StateRHI.Reference != (FRHIBlendState *)0x0) {
    FRHIResource::Release
              ((FRHIResource *)
               TStaticStateRHI<TStaticBlendState<15,0,0,5,0,0,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
               ::StaticResource.StateRHI.Reference);
  }
  FRenderResource::~FRenderResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticBlendState<15,0,0,5,0,0,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
              ::StaticResource);
  return;
}

// StaticResource'' @ 1503e8cc0

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

// `dynamic_atexit_destructor_for_'AudioThreadPriorityConsoleCommand'' @ 1503e8d40

void __cdecl _dynamic_atexit_destructor_for__AudioThreadPriorityConsoleCommand__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&AudioThreadPriorityConsoleCommand);
  return;
}

// `dynamic_atexit_destructor_for_'BufferVisualizationDumpFramesAsHDR'' @ 1503e8d60

void __cdecl _dynamic_atexit_destructor_for__BufferVisualizationDumpFramesAsHDR__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&BufferVisualizationDumpFramesAsHDR)
  ;
  return;
}

// `dynamic_atexit_destructor_for_'CPrio_ClearAudioChunkCacheReadRequest'' @ 1503e8d80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__CPrio_ClearAudioChunkCacheReadRequest__(void)

{
  CPrio_ClearAudioChunkCacheReadRequest.Variable._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CPrio_ClearAudioChunkCacheReadRequest.Variable);
  if (CPrio_ClearAudioChunkCacheReadRequest.FullHelpText.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(CPrio_ClearAudioChunkCacheReadRequest.FullHelpText.Data.AllocatorInstance.Data);
  }
  if (CPrio_ClearAudioChunkCacheReadRequest.RawSetting.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(CPrio_ClearAudioChunkCacheReadRequest.RawSetting.Data.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'CVarAboveNormalAudioThreadPri'' @ 1503e8dd0

void __cdecl _dynamic_atexit_destructor_for__CVarAboveNormalAudioThreadPri__(void)

{
  CVarAboveNormalAudioThreadPri._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarAboveNormalAudioThreadPri);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAlwaysLogCacheMisses'' @ 1503e8df0

void __cdecl _dynamic_atexit_destructor_for__CVarAlwaysLogCacheMisses__(void)

{
  CVarAlwaysLogCacheMisses._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarAlwaysLogCacheMisses);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAttachedEmitterTransformOptimizationEnabled'' @ 1503e8e10

void __cdecl
CameraLensEffectCVars::
_dynamic_atexit_destructor_for__CVarAttachedEmitterTransformOptimizationEnabled__(void)

{
  CVarAttachedEmitterTransformOptimizationEnabled._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarAttachedEmitterTransformOptimizationEnabled);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAudioCommandFenceWaitTimeMs'' @ 1503e8e30

void __cdecl _dynamic_atexit_destructor_for__CVarAudioCommandFenceWaitTimeMs__(void)

{
  CVarAudioCommandFenceWaitTimeMs._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarAudioCommandFenceWaitTimeMs);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAudioThreadUseSafeRunCommandOnGameThread'' @ 1503e8e50

void __cdecl _dynamic_atexit_destructor_for__CVarAudioThreadUseSafeRunCommandOnGameThread__(void)

{
  CVarAudioThreadUseSafeRunCommandOnGameThread._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarAudioThreadUseSafeRunCommandOnGameThread);
  return;
}

// `dynamic_atexit_destructor_for_'CVarBatchAudioAsyncBatchSize'' @ 1503e8e70

void __cdecl _dynamic_atexit_destructor_for__CVarBatchAudioAsyncBatchSize__(void)

{
  CVarBatchAudioAsyncBatchSize._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarBatchAudioAsyncBatchSize);
  return;
}

// `dynamic_atexit_destructor_for_'CVarBatchGameThreadAudioCommands'' @ 1503e8e90

void __cdecl
AudioCommandPrivate::_dynamic_atexit_destructor_for__CVarBatchGameThreadAudioCommands__(void)

{
  CVarBatchGameThreadAudioCommands._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarBatchGameThreadAudioCommands);
  return;
}

// `dynamic_atexit_destructor_for_'CVarBlockForPendingLoadOnCacheOverflow'' @ 1503e8eb0

void __cdecl _dynamic_atexit_destructor_for__CVarBlockForPendingLoadOnCacheOverflow__(void)

{
  CVarBlockForPendingLoadOnCacheOverflow._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarBlockForPendingLoadOnCacheOverflow);
  return;
}

// `dynamic_atexit_destructor_for_'CVarBlueprintComponentInstancingFastPathDisabled'' @ 1503e8ed0

void __cdecl
_dynamic_atexit_destructor_for__CVarBlueprintComponentInstancingFastPathDisabled__(void)

{
  CVarBlueprintComponentInstancingFastPathDisabled._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarBlueprintComponentInstancingFastPathDisabled);
  return;
}

// `dynamic_atexit_destructor_for_'CVarBlueprintNativePropertyInitFastPathDisabled'' @ 1503e8ef0

void __cdecl _dynamic_atexit_destructor_for__CVarBlueprintNativePropertyInitFastPathDisabled__(void)

{
  CVarBlueprintNativePropertyInitFastPathDisabled._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarBlueprintNativePropertyInitFastPathDisabled);
  return;
}

// `dynamic_atexit_destructor_for_'CVarBufferVisualizationDumpFrames'' @ 1503e8f10

void __cdecl _dynamic_atexit_destructor_for__CVarBufferVisualizationDumpFrames__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarBufferVisualizationDumpFrames);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDebugCacheDisplaySortMethod'' @ 1503e8f30

void __cdecl _dynamic_atexit_destructor_for__CVarDebugCacheDisplaySortMethod__(void)

{
  CVarDebugCacheDisplaySortMethod._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarDebugCacheDisplaySortMethod);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDebugDisplayCaches'' @ 1503e8f50

void __cdecl _dynamic_atexit_destructor_for__CVarDebugDisplayCaches__(void)

{
  CVarDebugDisplayCaches._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarDebugDisplayCaches);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDebugView'' @ 1503e8f70

void __cdecl _dynamic_atexit_destructor_for__CVarDebugView__(void)

{
  CVarDebugView._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarDebugView);
  return;
}

// `dynamic_atexit_destructor_for_'CVarEnableAudioCommandLogging'' @ 1503e8f90

void __cdecl _dynamic_atexit_destructor_for__CVarEnableAudioCommandLogging__(void)

{
  CVarEnableAudioCommandLogging._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarEnableAudioCommandLogging);
  return;
}

// `dynamic_atexit_destructor_for_'CVarEnableBatchProcessing'' @ 1503e8fb0

void __cdecl _dynamic_atexit_destructor_for__CVarEnableBatchProcessing__(void)

{
  CVarEnableBatchProcessing._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarEnableBatchProcessing);
  return;
}

// `dynamic_atexit_destructor_for_'CVarEnableExhaustiveCacheSearches'' @ 1503e8fd0

void __cdecl _dynamic_atexit_destructor_for__CVarEnableExhaustiveCacheSearches__(void)

{
  CVarEnableExhaustiveCacheSearches._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarEnableExhaustiveCacheSearches);
  return;
}

// `dynamic_atexit_destructor_for_'CVarEnableTrimmingRetainedAudio'' @ 1503e8ff0

void __cdecl _dynamic_atexit_destructor_for__CVarEnableTrimmingRetainedAudio__(void)

{
  CVarEnableTrimmingRetainedAudio._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarEnableTrimmingRetainedAudio);
  return;
}

// `dynamic_atexit_destructor_for_'CVarForceBlockForLoad'' @ 1503e9010

void __cdecl _dynamic_atexit_destructor_for__CVarForceBlockForLoad__(void)

{
  CVarForceBlockForLoad._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarForceBlockForLoad);
  return;
}

// `dynamic_atexit_destructor_for_'CVarGatherImplementers'' @ 1503e9030

void __cdecl
ActorSoundParameterInterfaceConsoleVariables::
_dynamic_atexit_destructor_for__CVarGatherImplementers__(void)

{
  CVarGatherImplementers._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarGatherImplementers);
  return;
}

// `dynamic_atexit_destructor_for_'CVarKeepCacheMissBufferOnFlush'' @ 1503e9050

void __cdecl _dynamic_atexit_destructor_for__CVarKeepCacheMissBufferOnFlush__(void)

{
  CVarKeepCacheMissBufferOnFlush._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarKeepCacheMissBufferOnFlush);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMaxConcurrentStreams'' @ 1503e9070

void __cdecl _dynamic_atexit_destructor_for__CVarMaxConcurrentStreams__(void)

{
  CVarMaxConcurrentStreams._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarMaxConcurrentStreams);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMemoryLimitTrimPercentage'' @ 1503e9090

void __cdecl _dynamic_atexit_destructor_for__CVarMemoryLimitTrimPercentage__(void)

{
  CVarMemoryLimitTrimPercentage._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarMemoryLimitTrimPercentage);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNumSoundWavesToClearOnCacheOverflow'' @ 1503e90b0

void __cdecl _dynamic_atexit_destructor_for__CVarNumSoundWavesToClearOnCacheOverflow__(void)

{
  CVarNumSoundWavesToClearOnCacheOverflow._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarNumSoundWavesToClearOnCacheOverflow);
  return;
}

// `dynamic_atexit_destructor_for_'CVarPlaybackRequestPriority'' @ 1503e90d0

void __cdecl _dynamic_atexit_destructor_for__CVarPlaybackRequestPriority__(void)

{
  CVarPlaybackRequestPriority._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarPlaybackRequestPriority);
  return;
}

// `dynamic_atexit_destructor_for_'CVarReadRequestPriority'' @ 1503e90f0

void __cdecl _dynamic_atexit_destructor_for__CVarReadRequestPriority__(void)

{
  CVarReadRequestPriority._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarReadRequestPriority);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSaveAudiomemReportOnCacheOverflow'' @ 1503e9110

void __cdecl _dynamic_atexit_destructor_for__CVarSaveAudiomemReportOnCacheOverflow__(void)

{
  CVarSaveAudiomemReportOnCacheOverflow._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarSaveAudiomemReportOnCacheOverflow);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSearchUsingChunkArray'' @ 1503e9130

void __cdecl _dynamic_atexit_destructor_for__CVarSearchUsingChunkArray__(void)

{
  CVarSearchUsingChunkArray._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarSearchUsingChunkArray);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSpoofFailedStreamChunkLoad'' @ 1503e9150

void __cdecl _dynamic_atexit_destructor_for__CVarSpoofFailedStreamChunkLoad__(void)

{
  CVarSpoofFailedStreamChunkLoad._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarSpoofFailedStreamChunkLoad);
  return;
}

// `dynamic_atexit_destructor_for_'CVarStreamCacheSizeOverrideMB'' @ 1503e9170

void __cdecl _dynamic_atexit_destructor_for__CVarStreamCacheSizeOverrideMB__(void)

{
  CVarStreamCacheSizeOverrideMB._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarStreamCacheSizeOverrideMB);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSuspendAudioThread'' @ 1503e9190

void __cdecl _dynamic_atexit_destructor_for__CVarSuspendAudioThread__(void)

{
  CVarSuspendAudioThread._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarSuspendAudioThread);
  return;
}

// `dynamic_atexit_destructor_for_'CVarTrimCacheWhenOverBudget'' @ 1503e91b0

void __cdecl _dynamic_atexit_destructor_for__CVarTrimCacheWhenOverBudget__(void)

{
  CVarTrimCacheWhenOverBudget._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarTrimCacheWhenOverBudget);
  return;
}

// `dynamic_atexit_destructor_for_'CVarUseAudioThreadSink'' @ 1503e91d0

void __cdecl _dynamic_atexit_destructor_for__CVarUseAudioThreadSink__(void)

{
  CVarUseAudioThreadSink._padding_ = (longlong)&___7FAutoConsoleVariableSink__6B_;
  return;
}

// `dynamic_atexit_destructor_for_'CVarVirtualLoopsEnabled'' @ 1503e91f0

void __cdecl _dynamic_atexit_destructor_for__CVarVirtualLoopsEnabled__(void)

{
  CVarVirtualLoopsEnabled._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarVirtualLoopsEnabled);
  return;
}

// `dynamic_atexit_destructor_for_'CVarVirtualLoopsForceUpdateListenerMoveDistance'' @ 1503e9210

void __cdecl _dynamic_atexit_destructor_for__CVarVirtualLoopsForceUpdateListenerMoveDistance__(void)

{
  CVarVirtualLoopsForceUpdateListenerMoveDistance._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarVirtualLoopsForceUpdateListenerMoveDistance);
  return;
}

// `dynamic_atexit_destructor_for_'CVarVirtualLoopsPerfDistance'' @ 1503e9230

void __cdecl _dynamic_atexit_destructor_for__CVarVirtualLoopsPerfDistance__(void)

{
  CVarVirtualLoopsPerfDistance._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarVirtualLoopsPerfDistance);
  return;
}

// `dynamic_atexit_destructor_for_'CVarVirtualLoopsUpdateRateMax'' @ 1503e9250

void __cdecl _dynamic_atexit_destructor_for__CVarVirtualLoopsUpdateRateMax__(void)

{
  CVarVirtualLoopsUpdateRateMax._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarVirtualLoopsUpdateRateMax);
  return;
}

// `dynamic_atexit_destructor_for_'CVarVirtualLoopsUpdateRateMin'' @ 1503e9270

void __cdecl _dynamic_atexit_destructor_for__CVarVirtualLoopsUpdateRateMin__(void)

{
  CVarVirtualLoopsUpdateRateMin._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarVirtualLoopsUpdateRateMin);
  return;
}

// `dynamic_atexit_destructor_for_'CVarWellCanvasDistanceFieldSmoothWidth'' @ 1503e9290

void __cdecl _dynamic_atexit_destructor_for__CVarWellCanvasDistanceFieldSmoothWidth__(void)

{
  CVarWellCanvasDistanceFieldSmoothWidth._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarWellCanvasDistanceFieldSmoothWidth);
  return;
}

// `dynamic_atexit_destructor_for_'CommandQueue'' @ 1503e92b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl AudioCommandPrivate::_dynamic_atexit_destructor_for__CommandQueue__(void)

{
  TSpscQueue<AudioCommandPrivate::FAudioCommand,FMemory>::
  ~TSpscQueue<AudioCommandPrivate::FAudioCommand,FMemory>(&CommandQueue.Commands);
  FTickFunction::~FTickFunction((FTickFunction *)&CommandQueue);
  return;
}

// `dynamic_atexit_destructor_for_'Default'' @ 1503e92e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`InternalGetDefaultObject<TResourceArray<FSimpleElementVertex,0>_>'::__l3::
_dynamic_atexit_destructor_for__Default__(void)

{
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase((FMemoryImageAllocatorBase *)&DAT_1551f3120)
  ;
  _Default = &___7FResourceArrayUploadInterface__6B_;
  return;
}

// `dynamic_atexit_destructor_for_'Dummy'' @ 1503e9310

void __cdecl
`FBoneContainer::GetUIDToArrayLookupTable'::__l2::_dynamic_atexit_destructor_for__Dummy__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ::Dummy.AllocatorInstance.Data;
  if (::Dummy.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (::Dummy.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'Dummy'' @ 1503e9330

void __cdecl
`FBoneContainer::GetUIDToArrayLookupTableBackup'::__l2::_dynamic_atexit_destructor_for__Dummy__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ::Dummy.AllocatorInstance.Data;
  if (::Dummy.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (::Dummy.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'Dummy'' @ 1503e9350

void __cdecl
`FBoneContainer::GetUIDToCurveTypeLookupTable'::__l2::_dynamic_atexit_destructor_for__Dummy__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ::Dummy.AllocatorInstance.Data;
  if (::Dummy.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (::Dummy.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'GAudioAsyncBatcher'' @ 1503e9370

void __cdecl _dynamic_atexit_destructor_for__GAudioAsyncBatcher__(void)

{
  int *piVar1;
  int iVar2;
  FTaskHandle FVar3;
  
  FVar3.Pimpl.Reference = GAudioAsyncBatcher.LastBatch.Pimpl.Reference;
  if (GAudioAsyncBatcher.LastBatch.Pimpl.Reference != (FTaskBase *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)GAudioAsyncBatcher.LastBatch.Pimpl.Reference + 0x30);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (*(code *)**(undefined8 **)FVar3.Pimpl.Reference)(FVar3.Pimpl.Reference,1);
    }
  }
  DestructItems<TUniqueFunction<void___cdecl(void)>,int>
            ((TUniqueFunction<void___cdecl(void)> *)
             GAudioAsyncBatcher.WorkItems.AllocatorInstance.Data,
             GAudioAsyncBatcher.WorkItems.ArrayNum);
  if (GAudioAsyncBatcher.WorkItems.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(GAudioAsyncBatcher.WorkItems.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'GBufferVisualizationData'' @ 1503e93d0

void __cdecl _dynamic_atexit_destructor_for__GBufferVisualizationData__(void)

{
  if (GBufferVisualizationData.ConsoleDocumentationOverviewTargets.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(GBufferVisualizationData.ConsoleDocumentationOverviewTargets.Data.
                  AllocatorInstance.Data);
  }
  if (GBufferVisualizationData.ConsoleDocumentationVisualizationMode.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(GBufferVisualizationData.ConsoleDocumentationVisualizationMode.Data.
                  AllocatorInstance.Data);
  }
  if (GBufferVisualizationData.OverviewMaterials.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(GBufferVisualizationData.OverviewMaterials.AllocatorInstance.Data);
  }
  if (GBufferVisualizationData.CurrentOverviewMaterialNames.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(GBufferVisualizationData.CurrentOverviewMaterialNames.Data.AllocatorInstance.Data)
    ;
  }
  GBufferVisualizationData.MaterialMapFromMaterialName._72_4_ = 0;
  if (GBufferVisualizationData.MaterialMapFromMaterialName._64_8_ != 0) {
    FMemory::Free((void *)GBufferVisualizationData.MaterialMapFromMaterialName._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FBufferVisualizationData::Record>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FBufferVisualizationData::Record>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FBufferVisualizationData::Record>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&GBufferVisualizationData.MaterialMapFromMaterialName);
  GBufferVisualizationData.MaterialMap._72_4_ = 0;
  if (GBufferVisualizationData.MaterialMap._64_8_ != 0) {
    FMemory::Free((void *)GBufferVisualizationData.MaterialMap._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FBufferVisualizationData::Record>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FBufferVisualizationData::Record>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FBufferVisualizationData::Record>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&GBufferVisualizationData);
  return;
}

// `dynamic_atexit_destructor_for_'GCameraShakeDebugInfoRecordLimitCVar'' @ 1503e9470

void __cdecl _dynamic_atexit_destructor_for__GCameraShakeDebugInfoRecordLimitCVar__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&GCameraShakeDebugInfoRecordLimitCVar);
  return;
}

// `dynamic_atexit_destructor_for_'GCameraShakeDebugLargeGraphCVar'' @ 1503e9490

void __cdecl _dynamic_atexit_destructor_for__GCameraShakeDebugLargeGraphCVar__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&GCameraShakeDebugLargeGraphCVar);
  return;
}

// `dynamic_atexit_destructor_for_'GDisableProfilingAudioCacheCommand'' @ 1503e94b0

void __cdecl _dynamic_atexit_destructor_for__GDisableProfilingAudioCacheCommand__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&GDisableProfilingAudioCacheCommand)
  ;
  return;
}

// `dynamic_atexit_destructor_for_'GEnableProfilingAudioCacheCommand'' @ 1503e94d0

void __cdecl _dynamic_atexit_destructor_for__GEnableProfilingAudioCacheCommand__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&GEnableProfilingAudioCacheCommand);
  return;
}

// `dynamic_atexit_destructor_for_'GFlushAudioCacheCommand'' @ 1503e94f0

void __cdecl _dynamic_atexit_destructor_for__GFlushAudioCacheCommand__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&GFlushAudioCacheCommand);
  return;
}

// `dynamic_atexit_destructor_for_'GResizeAudioCacheCommand'' @ 1503e9510

void __cdecl _dynamic_atexit_destructor_for__GResizeAudioCacheCommand__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&GResizeAudioCacheCommand);
  return;
}

// `dynamic_atexit_destructor_for_'GShowCameraShakeDebugCVar'' @ 1503e9530

void __cdecl _dynamic_atexit_destructor_for__GShowCameraShakeDebugCVar__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&GShowCameraShakeDebugCVar);
  return;
}

// `dynamic_atexit_destructor_for_'GShowCameraShakeDebugLocationCVar'' @ 1503e9550

void __cdecl _dynamic_atexit_destructor_for__GShowCameraShakeDebugLocationCVar__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&GShowCameraShakeDebugLocationCVar);
  return;
}

// `dynamic_atexit_destructor_for_'GShowCameraShakeDebugRotationCVar'' @ 1503e9570

void __cdecl _dynamic_atexit_destructor_for__GShowCameraShakeDebugRotationCVar__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&GShowCameraShakeDebugRotationCVar);
  return;
}

// `dynamic_atexit_destructor_for_'GSimpleElementVertexDeclaration'' @ 1503e9590

void __cdecl _dynamic_atexit_destructor_for__GSimpleElementVertexDeclaration__(void)

{
  GSimpleElementVertexDeclaration._0_8_ =
       &___7__TGlobalResource_VFSimpleElementVertexDeclaration___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)&GSimpleElementVertexDeclaration);
  GSimpleElementVertexDeclaration._0_8_ = &___7FSimpleElementVertexDeclaration__6B_;
  if (GSimpleElementVertexDeclaration._32_8_ != 0) {
    FRHIResource::Release((FRHIResource *)GSimpleElementVertexDeclaration._32_8_);
  }
  FRenderResource::~FRenderResource((FRenderResource *)&GSimpleElementVertexDeclaration);
  return;
}

// `dynamic_atexit_destructor_for_'InterfaceIdentifier'' @ 1503e95f0

void __cdecl
`UAudioWidgetSubsystem::ImplementsInterface'::__l8::
_dynamic_atexit_destructor_for__InterfaceIdentifier__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = InterfaceIdentifier.Data.AllocatorInstance.Data;
  if (InterfaceIdentifier.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (InterfaceIdentifier.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'InvalidChars'' @ 1503e9610

void __cdecl
`FAudioAddressPattern::GetInvalidChars'::__l2::_dynamic_atexit_destructor_for__InvalidChars__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = InvalidChars.AllocatorInstance.Data;
  if (InvalidChars.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (InvalidChars.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'LogAudioStreamCaching'' @ 1503e9630

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogAudioStreamCaching__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogAudioStreamCaching);
  return;
}

// `dynamic_atexit_destructor_for_'LogAudioTiming'' @ 1503e9650

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogAudioTiming__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogAudioTiming);
  return;
}

// `dynamic_atexit_destructor_for_'LogBatchedElements'' @ 1503e9670

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogBatchedElements__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogBatchedElements);
  return;
}

// `dynamic_atexit_destructor_for_'LogBlueprint'' @ 1503e9690

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogBlueprint__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogBlueprint);
  return;
}

// `dynamic_atexit_destructor_for_'LogBlueprintFuncLibrary'' @ 1503e96b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogBlueprintFuncLibrary__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogBlueprintFuncLibrary);
  return;
}

// `dynamic_atexit_destructor_for_'LogBlueprintSpingMathLibrary'' @ 1503e96d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogBlueprintSpingMathLibrary__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogBlueprintSpingMathLibrary);
  return;
}

// `dynamic_atexit_destructor_for_'LogBrush'' @ 1503e96f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogBrush__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogBrush);
  return;
}

// `dynamic_atexit_destructor_for_'LogCamera'' @ 1503e9710

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogCamera__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogCamera);
  return;
}

// `dynamic_atexit_destructor_for_'LogCameraShake'' @ 1503e9730

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogCameraShake__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogCameraShake);
  return;
}

// `dynamic_atexit_destructor_for_'LogSkeletalControl'' @ 1503e9750

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogSkeletalControl__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogSkeletalControl);
  return;
}

// `dynamic_atexit_destructor_for_'MetaSoundSource'' @ 1503e9770

void __cdecl Audio::Trace::Private::_dynamic_atexit_destructor_for__MetaSoundSource__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = MetaSoundSource.Data.AllocatorInstance.Data;
  if (MetaSoundSource.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (MetaSoundSource.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'PatternChars'' @ 1503e9790

void __cdecl
`FAudioAddressPattern::GetPatternChars'::__l2::_dynamic_atexit_destructor_for__PatternChars__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = PatternChars.AllocatorInstance.Data;
  if (PatternChars.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (PatternChars.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'PropertiesRequiringCompleteValueInitialization'' @ 1503e97b0

void __cdecl
`UE::Runtime::Engine::Private::FBlueprintGeneratedClassUtils::
RequiresCompleteValueForPostConstruction'::__l2::
_dynamic_atexit_destructor_for__PropertiesRequiringCompleteValueInitialization__(void)

{
  DAT_154c28698 = 0;
  if (DAT_154c28690 != (void *)0x0) {
    FMemory::Free(DAT_154c28690);
  }
  TSparseArray<TSparseSetElement<FProperty_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FProperty_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FProperty_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&`public:_static_bool___cdecl_UE::Runtime::Engine::Private::FBlueprintGeneratedClassUtils::RequiresCompleteValueForPostConstruction(FProperty*___ptr64)'
                 ::__l2::PropertiesRequiringCompleteValueInitialization);
  return;
}

// `dynamic_atexit_destructor_for_'SoundCue'' @ 1503e97f0

void __cdecl Audio::Trace::Private::_dynamic_atexit_destructor_for__SoundCue__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = SoundCue.Data.AllocatorInstance.Data;
  if (SoundCue.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (SoundCue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'SoundCueTemplate'' @ 1503e9810

void __cdecl Audio::Trace::Private::_dynamic_atexit_destructor_for__SoundCueTemplate__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = SoundCueTemplate.Data.AllocatorInstance.Data;
  if (SoundCueTemplate.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (SoundCueTemplate.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'SoundWave'' @ 1503e9830

void __cdecl Audio::Trace::Private::_dynamic_atexit_destructor_for__SoundWave__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = SoundWave.Data.AllocatorInstance.Data;
  if (SoundWave.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (SoundWave.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'SoundWaveProcedural'' @ 1503e9850

void __cdecl Audio::Trace::Private::_dynamic_atexit_destructor_for__SoundWaveProcedural__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = SoundWaveProcedural.Data.AllocatorInstance.Data;
  if (SoundWaveProcedural.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (SoundWaveProcedural.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'__GTraceCounterAudioStreamCache_Loads'' @ 1503e9870

void __cdecl _dynamic_atexit_destructor_for____GTraceCounterAudioStreamCache_Loads__(void)

{
  if ((__GTraceCounterAudioStreamCache_Loads.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(__GTraceCounterAudioStreamCache_Loads.CounterName);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'__GTraceCounterAudioStreamCache_Loads_Playback'' @ 1503e9890

void __cdecl _dynamic_atexit_destructor_for____GTraceCounterAudioStreamCache_Loads_Playback__(void)

{
  if ((__GTraceCounterAudioStreamCache_Loads_Playback.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(__GTraceCounterAudioStreamCache_Loads_Playback.CounterName);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'__GTraceCounterAudioStreamCache_Loads_Request'' @ 1503e98b0

void __cdecl _dynamic_atexit_destructor_for____GTraceCounterAudioStreamCache_Loads_Request__(void)

{
  if ((__GTraceCounterAudioStreamCache_Loads_Request.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(__GTraceCounterAudioStreamCache_Loads_Request.CounterName);
    return;
  }
  return;
}

