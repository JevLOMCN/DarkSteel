// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 54

// ~FViewportClient @ 146992330

void __thiscall FViewportClient::~FViewportClient(FViewportClient *this)

{
  *this = (FViewportClient)&___7FViewportClient__6B_;
  return;
}

// Activated @ 1469a0bb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FViewportClient::Activated(FViewportClient *this,FViewport *param_1,FWindowActivateEvent *param_2)

{
  return;
}

// CaptureMouseOnLaunch @ 1469a6150

bool __thiscall FViewportClient::CaptureMouseOnLaunch(FViewportClient *this)

{
  return true;
}

// CaptureSceneTexturesAsync @ 1469a6160

void __thiscall
FViewportClient::CaptureSceneTexturesAsync
          (FViewportClient *this,FString *param_1,bool param_2,FEngineShowFlags *param_3)

{
  ForElementType<unsigned_int> FVar1;
  FLowLevelMemTracker *this_00;
  
  FVar1 = (param_3->CustomShowFlags).AllocatorInstance.SecondaryData;
  if (FVar1 == (ForElementType<unsigned_int>)0x0) {
    return;
  }
  if (FVar1 != (ForElementType<unsigned_int>)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,(void *)FVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1);
  }
  return;
}

// CapturedMouseMove @ 1469a6180

void __thiscall
FViewportClient::CapturedMouseMove(FViewportClient *this,FViewport *param_1,int param_2,int param_3)

{
  return;
}

// CloseRequested @ 1469a7650

void __thiscall FViewportClient::CloseRequested(FViewportClient *this,FViewport *param_1)

{
  return;
}

// ConditionalRestoreWorld @ 1469a7c20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FViewportClient::ConditionalRestoreWorld(FViewportClient *this,UWorld *param_1)

{
  return;
}

// ConditionalSetWorld @ 1469a7c30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UWorld * __thiscall FViewportClient::ConditionalSetWorld(FViewportClient *this)

{
  return (UWorld *)0x0;
}

// Deactivated @ 1469bdab0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FViewportClient::Deactivated(FViewportClient *this,FViewport *param_1,FWindowActivateEvent *param_2)

{
  return;
}

// Draw @ 1469bee00

void __thiscall FViewportClient::Draw(FViewportClient *this,FViewport *param_1,FCanvas *param_2)

{
  return;
}

// GetCursor @ 1469cec10

Type __thiscall
FViewportClient::GetCursor(FViewportClient *this,FViewport *param_1,int param_2,int param_3)

{
  return Default;
}

// GetDPIScale @ 1469cec30

float __thiscall FViewportClient::GetDPIScale(FViewportClient *this)

{
  return __real_3f800000;
}

// GetEnabledStats @ 1469d0250

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
FViewportClient::GetEnabledStats(FViewportClient *this)

{
  return (TArray<FString,TSizedDefaultAllocator<32>_> *)0x0;
}

// GetEngineShowFlags @ 1469d0260

FEngineShowFlags * __thiscall FViewportClient::GetEngineShowFlags(FViewportClient *this)

{
  return (FEngineShowFlags *)0x0;
}

// GetMouseCaptureMode @ 1469d1f10

EMouseCaptureMode __thiscall FViewportClient::GetMouseCaptureMode(FViewportClient *this)

{
  return CapturePermanently;
}

// GetStatHitchesData @ 1469d89c0

FStatHitchesData * __thiscall FViewportClient::GetStatHitchesData(FViewportClient *this)

{
  return (FStatHitchesData *)0x0;
}

// GetStatUnitData @ 1469d89d0

FStatUnitData * __thiscall FViewportClient::GetStatUnitData(FViewportClient *this)

{
  return (FStatUnitData *)0x0;
}

// GetWorld @ 1469da890

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UWorld * __thiscall FViewportClient::GetWorld(FViewportClient *this)

{
  return (UWorld *)0x0;
}

// HandleNavigation @ 1469dcf00

bool __thiscall
FViewportClient::HandleNavigation(FViewportClient *this,uint param_1,TSharedPtr<SWidget,1> *param_2)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return false;
}

// HideCursorDuringCapture @ 1469dfa20

bool __thiscall FViewportClient::HideCursorDuringCapture(FViewportClient *this)

{
  return false;
}

// IgnoreInput @ 1469dfa30

bool __thiscall FViewportClient::IgnoreInput(FViewportClient *this)

{
  return false;
}

// InputAxis @ 1469e0590

bool __thiscall FViewportClient::InputAxis(FViewportClient *this,FInputKeyEventArgs *param_1)

{
  return false;
}

// InputChar @ 1469e05a0

bool __thiscall
FViewportClient::InputChar(FViewportClient *this,FViewport *param_1,int param_2,wchar_t param_3)

{
  return false;
}

// InputGesture @ 1469e05b0

bool __thiscall
FViewportClient::InputGesture
          (FViewportClient *this,FViewport *param_1,FInputDeviceId param_2,EGestureEvent param_3,
          TVector2<double> *param_4,bool param_5,ulong64 param_6)

{
  return false;
}

// InputKey @ 1469e05c0

bool __thiscall FViewportClient::InputKey(FViewportClient *this,FInputKeyEventArgs *param_1)

{
  return false;
}

// InputMotion @ 1469e05d0

bool __thiscall
FViewportClient::InputMotion
          (FViewportClient *this,FViewport *param_1,FInputDeviceId param_2,TVector<double> *param_3,
          TVector<double> *param_4,TVector<double> *param_5,TVector<double> *param_6,ulong64 param_7
          )

{
  return false;
}

// InputTouch @ 1469e05e0

bool __thiscall
FViewportClient::InputTouch
          (FViewportClient *this,FViewport *param_1,FInputDeviceId param_2,uint param_3,Type param_4
          ,TVector2<double> *param_5,float param_6,uint param_7,ulong64 param_8)

{
  return false;
}

// IsFocused @ 1469e1730

bool __thiscall FViewportClient::IsFocused(FViewportClient *this,FViewport *param_1)

{
  return true;
}

// IsInGameView @ 1469e1850

bool __thiscall FViewportClient::IsInGameView(FViewportClient *this)

{
  return false;
}

// IsInPermanentCapture @ 1469e1860

bool __thiscall FViewportClient::IsInPermanentCapture(FViewportClient *this)

{
  char cVar1;
  
  cVar1 = (**(code **)((longlong)*this + 0x198))();
  if (cVar1 != '\x01') {
    cVar1 = (**(code **)((longlong)*this + 0x198))(this);
    if (cVar1 != '\x02') {
      return false;
    }
  }
  return true;
}

// IsOrtho @ 1469e2800

bool __thiscall FViewportClient::IsOrtho(FViewportClient *this)

{
  return false;
}

// IsStatEnabled @ 1469e3820

bool __thiscall FViewportClient::IsStatEnabled(FViewportClient *this,FString *param_1)

{
  return false;
}

// LockDuringCapture @ 1469e3f80

bool __thiscall FViewportClient::LockDuringCapture(FViewportClient *this)

{
  return true;
}

// LostFocus @ 1469e3f90

void __thiscall FViewportClient::LostFocus(FViewportClient *this,FViewport *param_1)

{
  return;
}

// MouseEnter @ 1469e45d0

void __thiscall
FViewportClient::MouseEnter(FViewportClient *this,FViewport *param_1,int param_2,int param_3)

{
  return;
}

// MouseLeave @ 1469e45e0

void __thiscall FViewportClient::MouseLeave(FViewportClient *this,FViewport *param_1)

{
  return;
}

// MouseMove @ 1469e45f0

void __thiscall
FViewportClient::MouseMove(FViewportClient *this,FViewport *param_1,int param_2,int param_3)

{
  return;
}

// OverrideHighResScreenshotCaptureRegion @ 1469f2e70

bool __thiscall
FViewportClient::OverrideHighResScreenshotCaptureRegion
          (FViewportClient *this,TIntRect<int> *param_1)

{
  return false;
}

// Precache @ 1469f41b0

void __thiscall FViewportClient::Precache(FViewportClient *this)

{
  return;
}

// ProcessAccumulatedPointerInput @ 1469f6e20

void __thiscall
FViewportClient::ProcessAccumulatedPointerInput(FViewportClient *this,FViewport *param_1)

{
  return;
}

// ProcessScreenShots @ 1469f79a0

bool __thiscall FViewportClient::ProcessScreenShots(FViewportClient *this,FViewport *param_1)

{
  return false;
}

// QueryShowFocus @ 1469f79b0

TOptional<bool> __thiscall
FViewportClient::QueryShowFocus(FViewportClient *this,EFocusCause param_1)

{
  undefined7 in_register_00000011;
  
  *(undefined1 *)(CONCAT71(in_register_00000011,param_1) + 1) = 0;
  return SUB82(CONCAT71(in_register_00000011,param_1),0);
}

// ReceivedFocus @ 146a09130

void __thiscall FViewportClient::ReceivedFocus(FViewportClient *this,FViewport *param_1)

{
  return;
}

// RequiresHitProxyStorage @ 146a0d990

bool __thiscall FViewportClient::RequiresHitProxyStorage(FViewportClient *this)

{
  return true;
}

// RequiresKeyboardInput @ 146a0d9a0

bool __thiscall FViewportClient::RequiresKeyboardInput(FViewportClient *this)

{
  return true;
}

// RequiresUncapturedAxisInput @ 146a0d9b0

bool __thiscall FViewportClient::RequiresUncapturedAxisInput(FViewportClient *this)

{
  return false;
}

// SetEnabledStats @ 146a13670

void __thiscall
FViewportClient::SetEnabledStats
          (FViewportClient *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  return;
}

// SetIsSimulateInEditorViewport @ 146a161b0

void __thiscall FViewportClient::SetIsSimulateInEditorViewport(FViewportClient *this,bool param_1)

{
  return;
}

// SetShowStats @ 146a1afd0

void __thiscall FViewportClient::SetShowStats(FViewportClient *this,bool param_1)

{
  return;
}

// ShouldAlwaysLockMouse @ 146a1e290

bool __thiscall FViewportClient::ShouldAlwaysLockMouse(FViewportClient *this)

{
  return false;
}

// ShouldDPIScaleSceneCanvas @ 146a1e2a0

bool __thiscall FViewportClient::ShouldDPIScaleSceneCanvas(FViewportClient *this)

{
  return true;
}

// TrySaveSceneTexturesCaptureInfos @ 146a2aed0

void __thiscall FViewportClient::TrySaveSceneTexturesCaptureInfos(FViewportClient *this)

{
  return;
}

// WantsPollingMouseMovement @ 146a2dc50

bool __thiscall FViewportClient::WantsPollingMouseMovement(FViewportClient *this)

{
  return true;
}

// WindowCloseRequested @ 146a2df00

bool __thiscall FViewportClient::WindowCloseRequested(FViewportClient *this)

{
  return true;
}

