// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 20

// Destroy @ 14612ae90

void __cdecl
UE::MovieScene::TPlaybackCapabilityDestructor<UE::MovieScene::FPlayerIndexPlaybackCapability>::
Destroy(void *param_1)

{
  return;
}

// Destroy @ 14619cd60

void __cdecl
UE::MovieScene::TPlaybackCapabilityDestructor<IMovieScenePlaybackClient_*>::Destroy(void *param_1)

{
  return;
}

// Destroy @ 14620e3c0

void __cdecl
UE::MovieScene::TPlaybackCapabilityDestructor<FMovieSceneEvaluationState_*>::Destroy(void *param_1)

{
  return;
}

// Destroy @ 14620e3d0

void __cdecl
UE::MovieScene::
TPlaybackCapabilityDestructor<UE::MovieScene::IObjectBindingNotifyPlaybackCapability_*>::Destroy
          (void *param_1)

{
  return;
}

// Destroy @ 14620e3e0

void __cdecl
UE::MovieScene::
TPlaybackCapabilityDestructor<UE::MovieScene::IStaticBindingOverridesPlaybackCapability_*>::Destroy
          (void *param_1)

{
  return;
}

// Destroy @ 14620e3f0

void __cdecl
UE::MovieScene::TPlaybackCapabilityDestructor<FMovieSceneSpawnRegister_*>::Destroy(void *param_1)

{
  return;
}

// Destroy @ 14620e400

void __cdecl
UE::MovieScene::
TPlaybackCapabilityDestructor<UE::MovieScene::FEventTriggerControlPlaybackCapability>::Destroy
          (void *param_1)

{
  return;
}

// Destroy @ 14620e410

void __cdecl
UE::MovieScene::TPlaybackCapabilityDestructor<UE::MovieScene::FSequenceDirectorPlaybackCapability>::
Destroy(void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014620e415. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)param_1)(param_1,0);
  return;
}

// Destroy @ 14620e420

void __cdecl
UE::MovieScene::TPlaybackCapabilityDestructor<TSharedPtr<FMovieSceneEvaluationState,1>_>::Destroy
          (void *param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 8));
  return;
}

// Destroy @ 1462abb90

void __cdecl
UE::MovieScene::TPlaybackCapabilityDestructor<UE::MovieScene::Tests::FTestCapabilityBase_*>::Destroy
          (void *param_1)

{
  return;
}

// Destroy @ 1462abba0

void __cdecl
UE::MovieScene::TPlaybackCapabilityDestructor<UE::MovieScene::Tests::FTestInvalidatableCapability_*>
::Destroy(void *param_1)

{
  return;
}

// Destroy @ 1462abbb0

void __cdecl
UE::MovieScene::TPlaybackCapabilityDestructor<UE::MovieScene::Tests::FTestOtherSimpleCapability_*>::
Destroy(void *param_1)

{
  return;
}

// Destroy @ 1462abbc0

void __cdecl
UE::MovieScene::TPlaybackCapabilityDestructor<UE::MovieScene::Tests::FTestSimpleCapability_*>::
Destroy(void *param_1)

{
  return;
}

// Destroy @ 1462abbd0

void __cdecl
UE::MovieScene::TPlaybackCapabilityDestructor<UE::MovieScene::Tests::FTestCapabilityDerived>::
Destroy(void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001462abbd5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)param_1)(param_1,0);
  return;
}

// Destroy @ 1462abbe0

void __cdecl
UE::MovieScene::TPlaybackCapabilityDestructor<UE::MovieScene::Tests::FTestInvalidatableCapability>::
Destroy(void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001462abbe5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)param_1)(param_1,0);
  return;
}

// Destroy @ 1462abbf0

void __cdecl
UE::MovieScene::TPlaybackCapabilityDestructor<UE::MovieScene::Tests::FTestSimpleCapability>::Destroy
          (void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  Tests::FTestSimpleCapability::TimesDestroyed = Tests::FTestSimpleCapability::TimesDestroyed + 1;
  pvVar1 = *(void **)((longlong)param_1 + 8);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// Destroy @ 1462abc10

void __cdecl
UE::MovieScene::TPlaybackCapabilityDestructor<UE::MovieScene::Tests::FTestSimpleCapabilityDerived>::
Destroy(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  Tests::FTestSimpleCapabilityDerived::TimesDestroyedDerived =
       Tests::FTestSimpleCapabilityDerived::TimesDestroyedDerived + 1;
  Tests::FTestSimpleCapability::TimesDestroyed = Tests::FTestSimpleCapability::TimesDestroyed + 1;
  pvVar1 = *(void **)((longlong)param_1 + 8);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// Destroy @ 1462abc30

void __cdecl
UE::MovieScene::
TPlaybackCapabilityDestructor<UE::MovieScene::Tests::FTestSimpleCapabilityDerivedWithInterface>::
Destroy(void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001462abc35. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)param_1)(param_1,0);
  return;
}

// Destroy @ 1462abc40

void __cdecl
UE::MovieScene::
TPlaybackCapabilityDestructor<TSharedPtr<UE::MovieScene::Tests::FTestInvalidatableCapability,1>_>::
Destroy(void *param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 8));
  return;
}

// Destroy @ 1462abc50

void __cdecl
UE::MovieScene::
TPlaybackCapabilityDestructor<TSharedPtr<UE::MovieScene::Tests::FTestSimpleCapability,1>_>::Destroy
          (void *param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 8));
  return;
}

