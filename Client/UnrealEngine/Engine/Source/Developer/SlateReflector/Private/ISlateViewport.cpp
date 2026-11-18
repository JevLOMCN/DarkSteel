// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateReflector
// Functions: 43

// OnDrawViewport @ 142ddfc90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
ISlateViewport::OnDrawViewport
          (ISlateViewport *this,FGeometry *param_1,FSlateRect *param_2,
          FSlateWindowElementList *param_3,int param_4,FWidgetStyle *param_5,bool param_6)

{
  return;
}

// GetSceneTargetFormat @ 142ddfca0

EPixelFormat __thiscall ISlateViewport::GetSceneTargetFormat(ISlateViewport *this)

{
  return PF_Unknown;
}

// IsViewportTextureAlphaOnly @ 142ddfcb0

bool __thiscall ISlateViewport::IsViewportTextureAlphaOnly(ISlateViewport *this)

{
  return false;
}

// IsStereoscopic3D @ 142ddfcc0

bool __thiscall ISlateViewport::IsStereoscopic3D(ISlateViewport *this)

{
  return false;
}

// UseSeparateRenderTarget @ 142ddfcd0

bool __thiscall ISlateViewport::UseSeparateRenderTarget(ISlateViewport *this)

{
  return false;
}

// GetViewportDynamicRange @ 142ddfce0

ESlateViewportDynamicRange __thiscall ISlateViewport::GetViewportDynamicRange(ISlateViewport *this)

{
  return SDR;
}

// Tick @ 142ddfcf0

void __thiscall
ISlateViewport::Tick(ISlateViewport *this,FGeometry *param_1,double param_2,float param_3)

{
  return;
}

// AllowScaling @ 142ddfd00

bool __thiscall ISlateViewport::AllowScaling(ISlateViewport *this)

{
  return true;
}

// OnCursorQuery @ 142ddfd10

/* WARNING: Enum "Type": Some values do not have unique names */

FCursorReply * __thiscall
ISlateViewport::OnCursorQuery
          (ISlateViewport *this,FCursorReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  *(undefined1 *)&__return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  (__return_storage_ptr__->CursorWindow).Object = (SWindow *)0x0;
  (__return_storage_ptr__->CursorWindow).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (__return_storage_ptr__->CursorWidget).Object = (SWidget *)0x0;
  (__return_storage_ptr__->CursorWidget).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  __return_storage_ptr__->MouseCursor = Default;
  return __return_storage_ptr__;
}

// OnMapCursor @ 142ddfd40

/* WARNING: Enum "Type": Some values do not have unique names */

TOptional<TSharedRef<SWidget,1>_> * __thiscall
ISlateViewport::OnMapCursor
          (ISlateViewport *this,TOptional<TSharedRef<SWidget,1>_> *__return_storage_ptr__,
          FCursorReply *param_1)

{
  (__return_storage_ptr__->field0_0x0).TypedValue.Object = (SWidget *)0x0;
  (__return_storage_ptr__->field0_0x0).TypedValue.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// IsSoftwareCursorVisible @ 142ddfd60

bool __thiscall ISlateViewport::IsSoftwareCursorVisible(ISlateViewport *this)

{
  return false;
}

// GetSoftwareCursorPosition @ 142ddfd70

TVector2<double> * __thiscall
ISlateViewport::GetSoftwareCursorPosition
          (ISlateViewport *this,TVector2<double> *__return_storage_ptr__)

{
  (__return_storage_ptr__->field0_0x0)._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector;
  return __return_storage_ptr__;
}

// OnMouseButtonDown @ 142ddfd90

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
ISlateViewport::OnMouseButtonDown
          (ISlateViewport *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// OnMouseButtonUp @ 142ddfdc0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
ISlateViewport::OnMouseButtonUp
          (ISlateViewport *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// OnMouseEnter @ 142ddfdf0

void __thiscall
ISlateViewport::OnMouseEnter(ISlateViewport *this,FGeometry *param_1,FPointerEvent *param_2)

{
  return;
}

// OnMouseLeave @ 142ddfe00

void __thiscall ISlateViewport::OnMouseLeave(ISlateViewport *this,FPointerEvent *param_1)

{
  return;
}

// OnMouseMove @ 142ddfe10

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
ISlateViewport::OnMouseMove
          (ISlateViewport *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// OnMouseWheel @ 142ddfe40

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
ISlateViewport::OnMouseWheel
          (ISlateViewport *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// OnMouseButtonDoubleClick @ 142ddfe70

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
ISlateViewport::OnMouseButtonDoubleClick
          (ISlateViewport *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// OnKeyDown @ 142ddfea0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
ISlateViewport::OnKeyDown
          (ISlateViewport *this,FReply *__return_storage_ptr__,FGeometry *param_1,FKeyEvent *param_2
          )

{
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// OnKeyUp @ 142ddfed0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
ISlateViewport::OnKeyUp
          (ISlateViewport *this,FReply *__return_storage_ptr__,FGeometry *param_1,FKeyEvent *param_2
          )

{
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// OnAnalogValueChanged @ 142ddff00

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
ISlateViewport::OnAnalogValueChanged
          (ISlateViewport *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FAnalogInputEvent *param_2)

{
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// OnKeyChar @ 142ddff30

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
ISlateViewport::OnKeyChar
          (ISlateViewport *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FCharacterEvent *param_2)

{
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// OnFocusReceived @ 142ddff60

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
ISlateViewport::OnFocusReceived
          (ISlateViewport *this,FReply *__return_storage_ptr__,FFocusEvent *param_1)

{
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// OnTouchStarted @ 142ddff90

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
ISlateViewport::OnTouchStarted
          (ISlateViewport *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// OnTouchMoved @ 142ddffc0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
ISlateViewport::OnTouchMoved
          (ISlateViewport *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// OnTouchEnded @ 142ddfff0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
ISlateViewport::OnTouchEnded
          (ISlateViewport *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// OnTouchForceChanged @ 142de0020

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
ISlateViewport::OnTouchForceChanged
          (ISlateViewport *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// OnTouchFirstMove @ 142de0050

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
ISlateViewport::OnTouchFirstMove
          (ISlateViewport *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// OnTouchGesture @ 142de0080

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
ISlateViewport::OnTouchGesture
          (ISlateViewport *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// OnMotionDetected @ 142de00b0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
ISlateViewport::OnMotionDetected
          (ISlateViewport *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FMotionEvent *param_2)

{
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// OnQueryShowFocus @ 142de00e0

TOptional<bool> __thiscall
ISlateViewport::OnQueryShowFocus(ISlateViewport *this,EFocusCause param_1)

{
  undefined7 in_register_00000011;
  
  *(undefined1 *)(CONCAT71(in_register_00000011,param_1) + 1) = 0;
  return SUB82(CONCAT71(in_register_00000011,param_1),0);
}

// OnFinishedPointerInput @ 142de00f0

void __thiscall ISlateViewport::OnFinishedPointerInput(ISlateViewport *this)

{
  return;
}

// OnQueryPopupMethod @ 142de0100

FPopupMethodReply * __thiscall
ISlateViewport::OnQueryPopupMethod(ISlateViewport *this,FPopupMethodReply *__return_storage_ptr__)

{
  *(undefined1 *)&__return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->PopupMethod = CreateNewWindow;
  __return_storage_ptr__->ShouldThrottle = Yes;
  return __return_storage_ptr__;
}

// OnNavigation @ 142de0120

FNavigationReply * __thiscall
ISlateViewport::OnNavigation
          (ISlateViewport *this,FNavigationReply *__return_storage_ptr__,FGeometry *param_1,
          FNavigationEvent *param_2)

{
  (__return_storage_ptr__->EventHandler).Object = (SWidget *)0x0;
  (__return_storage_ptr__->EventHandler).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (__return_storage_ptr__->FocusRecipient).Object = (SWidget *)0x0;
  (__return_storage_ptr__->FocusRecipient).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&(__return_storage_ptr__->FocusDelegate).field_0x10 = 0;
  *(undefined8 *)&__return_storage_ptr__->FocusDelegate = 0;
  *(undefined8 *)&(__return_storage_ptr__->FocusDelegate).field_0x8 = 0;
  __return_storage_ptr__->BoundaryRule = Stop;
  return __return_storage_ptr__;
}

// HandleNavigation @ 142de0150

bool __thiscall
ISlateViewport::HandleNavigation(ISlateViewport *this,uint param_1,TSharedPtr<SWidget,1> *param_2)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return false;
}

// OnFocusLost @ 142de0170

void __thiscall ISlateViewport::OnFocusLost(ISlateViewport *this,FFocusEvent *param_1)

{
  return;
}

// OnRequestWindowClose @ 142de0180

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
ISlateViewport::OnRequestWindowClose(ISlateViewport *this,FReply *__return_storage_ptr__)

{
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// OnViewportClosed @ 142de01b0

void __thiscall ISlateViewport::OnViewportClosed(ISlateViewport *this)

{
  return;
}

// GetWidget @ 142de01c0

TWeakPtr<SWidget,1> * __thiscall
ISlateViewport::GetWidget(ISlateViewport *this,TWeakPtr<SWidget,1> *__return_storage_ptr__)

{
  __return_storage_ptr__->Object = (SWidget *)0x0;
  (__return_storage_ptr__->WeakReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// OnViewportActivated @ 142de01e0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
ISlateViewport::OnViewportActivated
          (ISlateViewport *this,FReply *__return_storage_ptr__,FWindowActivateEvent *param_1)

{
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// OnViewportDeactivated @ 142de0210

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
ISlateViewport::OnViewportDeactivated(ISlateViewport *this,FWindowActivateEvent *param_1)

{
  return;
}

// ~ISlateViewport @ 142e14ab0

void __thiscall ISlateViewport::~ISlateViewport(ISlateViewport *this)

{
  *this = (ISlateViewport)&___7ISlateViewport__6B_;
  return;
}

