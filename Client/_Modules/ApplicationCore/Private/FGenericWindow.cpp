// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ApplicationCore
// Functions: 38

// FGenericWindow @ 1423c1f70

FGenericWindow * __thiscall FGenericWindow::FGenericWindow(FGenericWindow *this)

{
  this->_padding_ = (longlong)&___7FGenericWindow__6B_;
  (this->Definition).Object = (FGenericWindowDefinition *)0x0;
  (this->Definition).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// ~FGenericWindow @ 1423c68a0

void __thiscall FGenericWindow::~FGenericWindow(FGenericWindow *this)

{
  this->_padding_ = (longlong)&___7FGenericWindow__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Definition).SharedReferenceCount.ReferenceController);
  return;
}

// AdjustCachedSize @ 1423d02a0

void __thiscall FGenericWindow::AdjustCachedSize(FGenericWindow *this,TVector2<double> *param_1)

{
  return;
}

// BringToFront @ 1423d1390

void __thiscall FGenericWindow::BringToFront(FGenericWindow *this,bool param_1)

{
  return;
}

// Destroy @ 1423d8d90

void __thiscall FGenericWindow::Destroy(FGenericWindow *this)

{
  return;
}

// DrawAttention @ 1423da0d0

void __thiscall
FGenericWindow::DrawAttention(FGenericWindow *this,FWindowDrawAttentionParameters *param_1)

{
  return;
}

// Enable @ 1423dafc0

void __thiscall FGenericWindow::Enable(FGenericWindow *this,bool param_1)

{
  return;
}

// GetDPIScaleFactor @ 1423de110

float __thiscall FGenericWindow::GetDPIScaleFactor(FGenericWindow *this)

{
  return __real_3f800000;
}

// GetDefinition @ 1423de2c0

FGenericWindowDefinition * __thiscall FGenericWindow::GetDefinition(FGenericWindow *this)

{
  return (this->Definition).Object;
}

// GetFullScreenInfo @ 1423def80

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FGenericWindow::GetFullScreenInfo
          (FGenericWindow *this,int *param_1,int *param_2,int *param_3,int *param_4)

{
  bool bVar1;
  wchar_t *pwVar2;
  
  pwVar2 = FCommandLine::Get();
  bVar1 = FParse::Param(pwVar2,L"RenderOffScreen");
  if (!bVar1) {
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogGenericPlatformWindow)
    ;
  }
  return false;
}

// GetOSWindowHandle @ 1423e0e20

void * __thiscall FGenericWindow::GetOSWindowHandle(FGenericWindow *this)

{
  return (void *)0x0;
}

// GetRestoredDimensions @ 1423e22e0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FGenericWindow::GetRestoredDimensions
          (FGenericWindow *this,int *param_1,int *param_2,int *param_3,int *param_4)

{
  bool bVar1;
  wchar_t *pwVar2;
  
  pwVar2 = FCommandLine::Get();
  bVar1 = FParse::Param(pwVar2,L"RenderOffScreen");
  if (!bVar1) {
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogGenericPlatformWindow)
    ;
  }
  return false;
}

// GetWindowBorderSize @ 1423e5000

int __thiscall FGenericWindow::GetWindowBorderSize(FGenericWindow *this)

{
  return 0;
}

// GetWindowMode @ 1423e50d0

Type __thiscall FGenericWindow::GetWindowMode(FGenericWindow *this)

{
  return Windowed;
}

// GetWindowTitleBarSize @ 1423e56c0

int __thiscall FGenericWindow::GetWindowTitleBarSize(FGenericWindow *this)

{
  return 0;
}

// HACK_ForceToFront @ 1423e5a80

void __thiscall FGenericWindow::HACK_ForceToFront(FGenericWindow *this)

{
  return;
}

// Hide @ 1423e76a0

void __thiscall FGenericWindow::Hide(FGenericWindow *this)

{
  return;
}

// IsDefinitionValid @ 1423ea7b0

bool __thiscall FGenericWindow::IsDefinitionValid(FGenericWindow *this)

{
  return (this->Definition).Object != (FGenericWindowDefinition *)0x0;
}

// IsForegroundWindow @ 1423ea850

bool __thiscall FGenericWindow::IsForegroundWindow(FGenericWindow *this)

{
  return true;
}

// IsFullscreenSupported @ 1423ea8a0

bool __thiscall FGenericWindow::IsFullscreenSupported(FGenericWindow *this)

{
  return true;
}

// IsManualManageDPIChanges @ 1423eab60

bool __thiscall FGenericWindow::IsManualManageDPIChanges(FGenericWindow *this)

{
  return false;
}

// IsMaximized @ 1423eab90

bool __thiscall FGenericWindow::IsMaximized(FGenericWindow *this)

{
  return true;
}

// IsMinimized @ 1423eac20

bool __thiscall FGenericWindow::IsMinimized(FGenericWindow *this)

{
  return false;
}

// IsPointInWindow @ 1423eae00

bool __thiscall FGenericWindow::IsPointInWindow(FGenericWindow *this,int param_1,int param_2)

{
  return true;
}

// IsVisible @ 1423eb590

bool __thiscall FGenericWindow::IsVisible(FGenericWindow *this)

{
  return true;
}

// Maximize @ 1423eef20

void __thiscall FGenericWindow::Maximize(FGenericWindow *this)

{
  return;
}

// Minimize @ 1423eefc0

void __thiscall FGenericWindow::Minimize(FGenericWindow *this)

{
  return;
}

// MoveWindowTo @ 1423ef300

void __thiscall FGenericWindow::MoveWindowTo(FGenericWindow *this,int param_1,int param_2)

{
  return;
}

// ReshapeWindow @ 1424016a0

void __thiscall
FGenericWindow::ReshapeWindow(FGenericWindow *this,int param_1,int param_2,int param_3,int param_4)

{
  return;
}

// Restore @ 142402040

void __thiscall FGenericWindow::Restore(FGenericWindow *this)

{
  return;
}

// SetDPIScaleFactor @ 1424041b0

void __thiscall FGenericWindow::SetDPIScaleFactor(FGenericWindow *this,float param_1)

{
  return;
}

// SetManualManageDPIChanges @ 1424050c0

void __thiscall FGenericWindow::SetManualManageDPIChanges(FGenericWindow *this,bool param_1)

{
  return;
}

// SetNativeWindowButtonsVisibility @ 142405380

void __thiscall FGenericWindow::SetNativeWindowButtonsVisibility(FGenericWindow *this,bool param_1)

{
  return;
}

// SetOpacity @ 1424053a0

void __thiscall FGenericWindow::SetOpacity(FGenericWindow *this,float param_1)

{
  return;
}

// SetText @ 142405980

void __thiscall FGenericWindow::SetText(FGenericWindow *this,wchar_t *param_1)

{
  return;
}

// SetWindowFocus @ 142405fa0

void __thiscall FGenericWindow::SetWindowFocus(FGenericWindow *this)

{
  return;
}

// SetWindowMode @ 142405ff0

void __thiscall FGenericWindow::SetWindowMode(FGenericWindow *this,Type param_1)

{
  return;
}

// Show @ 1424063c0

void __thiscall FGenericWindow::Show(FGenericWindow *this)

{
  return;
}

