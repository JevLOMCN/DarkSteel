// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ApplicationCore
// Functions: 59

// ~FGenericApplicationMessageHandler @ 1423c6880

void __thiscall
FGenericApplicationMessageHandler::~FGenericApplicationMessageHandler
          (FGenericApplicationMessageHandler *this)

{
  *this = (FGenericApplicationMessageHandler)&___7FGenericApplicationMessageHandler__6B_;
  return;
}

// BeginReshapingWindow @ 1423d1350

bool __thiscall
FGenericApplicationMessageHandler::BeginReshapingWindow
          (FGenericApplicationMessageHandler *this,TSharedRef<FGenericWindow,1> *param_1)

{
  return true;
}

// FinishedReshapingWindow @ 1423dc8d0

void __thiscall
FGenericApplicationMessageHandler::FinishedReshapingWindow
          (FGenericApplicationMessageHandler *this,TSharedRef<FGenericWindow,1> *param_1)

{
  return;
}

// GetSizeLimitsForWindow @ 1423e2ad0

FWindowSizeLimits * __thiscall
FGenericApplicationMessageHandler::GetSizeLimitsForWindow
          (FGenericApplicationMessageHandler *this,FWindowSizeLimits *__return_storage_ptr__,
          TSharedRef<FGenericWindow,1> *param_1)

{
  (__return_storage_ptr__->MinWidth).TypedValue = 0.0;
  (__return_storage_ptr__->MinWidth).bIsSet = false;
  *(undefined3 *)&(__return_storage_ptr__->MinWidth).field_0x5 = 0;
  (__return_storage_ptr__->MinHeight).TypedValue = 0.0;
  (__return_storage_ptr__->MinHeight).bIsSet = false;
  *(undefined3 *)&(__return_storage_ptr__->MinHeight).field_0x5 = 0;
  (__return_storage_ptr__->MaxWidth).TypedValue = 0.0;
  (__return_storage_ptr__->MaxWidth).bIsSet = false;
  *(undefined3 *)&(__return_storage_ptr__->MaxWidth).field_0x5 = 0;
  (__return_storage_ptr__->MaxHeight).TypedValue = 0.0;
  (__return_storage_ptr__->MaxHeight).bIsSet = false;
  *(undefined3 *)&(__return_storage_ptr__->MaxHeight).field_0x5 = 0;
  return __return_storage_ptr__;
}

// GetWindowZoneForPoint @ 1423e5840

/* WARNING: Enum "Type": Some values do not have unique names */

Type __thiscall
FGenericApplicationMessageHandler::GetWindowZoneForPoint
          (FGenericApplicationMessageHandler *this,TSharedRef<FGenericWindow,1> *param_1,int param_2
          ,int param_3)

{
  return NotInWindow;
}

// HandleDPIScaleChanged @ 1423e69d0

void __thiscall
FGenericApplicationMessageHandler::HandleDPIScaleChanged
          (FGenericApplicationMessageHandler *this,TSharedRef<FGenericWindow,1> *param_1)

{
  return;
}

// OnApplicationActivationChanged @ 1423f0170

bool __thiscall
FGenericApplicationMessageHandler::OnApplicationActivationChanged
          (FGenericApplicationMessageHandler *this,bool param_1)

{
  return false;
}

// OnBeginGesture @ 1423f0180

void __thiscall
FGenericApplicationMessageHandler::OnBeginGesture(FGenericApplicationMessageHandler *this)

{
  return;
}

// OnControllerAnalog @ 1423f0190

bool __thiscall
FGenericApplicationMessageHandler::OnControllerAnalog
          (FGenericApplicationMessageHandler *this,FName param_1,FPlatformUserId param_2,
          FInputDeviceId param_3,float param_4)

{
  return false;
}

// OnControllerButtonPressed @ 1423f01a0

bool __thiscall
FGenericApplicationMessageHandler::OnControllerButtonPressed
          (FGenericApplicationMessageHandler *this,FName param_1,FPlatformUserId param_2,
          FInputDeviceId param_3,bool param_4)

{
  return false;
}

// OnControllerButtonReleased @ 1423f01b0

bool __thiscall
FGenericApplicationMessageHandler::OnControllerButtonReleased
          (FGenericApplicationMessageHandler *this,FName param_1,FPlatformUserId param_2,
          FInputDeviceId param_3,bool param_4)

{
  return false;
}

// OnConvertibleLaptopModeChanged @ 1423f01c0

bool __thiscall
FGenericApplicationMessageHandler::OnConvertibleLaptopModeChanged
          (FGenericApplicationMessageHandler *this)

{
  return false;
}

// OnCursorSet @ 1423f01d0

bool __thiscall
FGenericApplicationMessageHandler::OnCursorSet(FGenericApplicationMessageHandler *this)

{
  return false;
}

// OnDragDrop @ 1423f0210

Type __thiscall
FGenericApplicationMessageHandler::OnDragDrop
          (FGenericApplicationMessageHandler *this,TSharedPtr<FGenericWindow,1> *param_1)

{
  return None;
}

// OnDragEnterExternal @ 1423f0220

Type __thiscall
FGenericApplicationMessageHandler::OnDragEnterExternal
          (FGenericApplicationMessageHandler *this,TSharedRef<FGenericWindow,1> *param_1,
          FString *param_2,TArray<FString,TSizedDefaultAllocator<32>_> *param_3)

{
  return None;
}

// OnDragEnterFiles @ 1423f0230

Type __thiscall
FGenericApplicationMessageHandler::OnDragEnterFiles
          (FGenericApplicationMessageHandler *this,TSharedRef<FGenericWindow,1> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  return None;
}

// OnDragEnterText @ 1423f0240

Type __thiscall
FGenericApplicationMessageHandler::OnDragEnterText
          (FGenericApplicationMessageHandler *this,TSharedRef<FGenericWindow,1> *param_1,
          FString *param_2)

{
  return None;
}

// OnDragLeave @ 1423f0250

void __thiscall
FGenericApplicationMessageHandler::OnDragLeave
          (FGenericApplicationMessageHandler *this,TSharedPtr<FGenericWindow,1> *param_1)

{
  return;
}

// OnDragOver @ 1423f0260

Type __thiscall
FGenericApplicationMessageHandler::OnDragOver
          (FGenericApplicationMessageHandler *this,TSharedPtr<FGenericWindow,1> *param_1)

{
  return None;
}

// OnEndGesture @ 1423f02f0

void __thiscall
FGenericApplicationMessageHandler::OnEndGesture(FGenericApplicationMessageHandler *this)

{
  return;
}

// OnInputLanguageChanged @ 1423f0b00

void __thiscall
FGenericApplicationMessageHandler::OnInputLanguageChanged(FGenericApplicationMessageHandler *this)

{
  return;
}

// OnKeyChar @ 1423f0b10

bool __thiscall
FGenericApplicationMessageHandler::OnKeyChar
          (FGenericApplicationMessageHandler *this,wchar_t param_1,bool param_2)

{
  return false;
}

// OnKeyDown @ 1423f0b20

bool __thiscall
FGenericApplicationMessageHandler::OnKeyDown
          (FGenericApplicationMessageHandler *this,int param_1,uint param_2,bool param_3)

{
  return false;
}

// OnKeyUp @ 1423f0b30

bool __thiscall
FGenericApplicationMessageHandler::OnKeyUp
          (FGenericApplicationMessageHandler *this,int param_1,uint param_2,bool param_3)

{
  return false;
}

// OnMotionDetected @ 1423f0b40

bool __thiscall
FGenericApplicationMessageHandler::OnMotionDetected
          (FGenericApplicationMessageHandler *this,TVector<double> *param_1,TVector<double> *param_2
          ,TVector<double> *param_3,TVector<double> *param_4,int param_5)

{
  char cVar1;
  undefined1 uVar2;
  IPlatformInputDeviceMapper *pIVar3;
  undefined4 local_res8 [2];
  undefined4 local_18 [4];
  
  cVar1 = (**(code **)((longlong)*this + 0x88))();
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    FGenericPlatformMisc::GetPlatformUserForUserIndex((int)local_18);
    local_res8[0] = 0xffffffff;
    pIVar3 = IPlatformInputDeviceMapper::Get();
    (**(code **)(pIVar3->_padding_ + 0xb0))(pIVar3,param_5,local_18,local_res8);
    uVar2 = (**(code **)((longlong)*this + 0x120))
                      (this,param_1,param_2,param_3,param_4,local_18[0],local_res8[0]);
  }
  return (bool)uVar2;
}

// OnMotionDetected @ 1423f0c10

bool __thiscall
FGenericApplicationMessageHandler::OnMotionDetected
          (FGenericApplicationMessageHandler *this,TVector<double> *param_1,TVector<double> *param_2
          ,TVector<double> *param_3,TVector<double> *param_4,FPlatformUserId param_5,
          FInputDeviceId param_6)

{
  char cVar1;
  undefined1 uVar2;
  
  cVar1 = (**(code **)((longlong)*this + 0x88))();
  if (cVar1 == '\0') {
    uVar2 = (**(code **)((longlong)*this + 0x118))
                      (this,param_1,param_2,param_3,param_4,param_5.InternalId);
  }
  else {
    uVar2 = 0;
  }
  return (bool)uVar2;
}

// OnMouseDoubleClick @ 1423f0c90

bool __thiscall
FGenericApplicationMessageHandler::OnMouseDoubleClick
          (FGenericApplicationMessageHandler *this,TSharedPtr<FGenericWindow,1> *param_1,
          Type param_2)

{
  return false;
}

// OnMouseDoubleClick @ 1423f0ca0

bool __thiscall
FGenericApplicationMessageHandler::OnMouseDoubleClick
          (FGenericApplicationMessageHandler *this,TSharedPtr<FGenericWindow,1> *param_1,
          Type param_2,TVector2<double> *param_3)

{
  return false;
}

// OnMouseDown @ 1423f0cb0

bool __thiscall
FGenericApplicationMessageHandler::OnMouseDown
          (FGenericApplicationMessageHandler *this,TSharedPtr<FGenericWindow,1> *param_1,
          Type param_2)

{
  return false;
}

// OnMouseDown @ 1423f0cc0

bool __thiscall
FGenericApplicationMessageHandler::OnMouseDown
          (FGenericApplicationMessageHandler *this,TSharedPtr<FGenericWindow,1> *param_1,
          Type param_2,TVector2<double> *param_3)

{
  return false;
}

// OnMouseMove @ 1423f0cd0

bool __thiscall
FGenericApplicationMessageHandler::OnMouseMove(FGenericApplicationMessageHandler *this)

{
  return false;
}

// OnMouseUp @ 1423f0ce0

bool __thiscall
FGenericApplicationMessageHandler::OnMouseUp(FGenericApplicationMessageHandler *this,Type param_1)

{
  return false;
}

// OnMouseUp @ 1423f0cf0

bool __thiscall
FGenericApplicationMessageHandler::OnMouseUp
          (FGenericApplicationMessageHandler *this,Type param_1,TVector2<double> *param_2)

{
  return false;
}

// OnMouseWheel @ 1423f0d00

bool __thiscall
FGenericApplicationMessageHandler::OnMouseWheel
          (FGenericApplicationMessageHandler *this,float param_1)

{
  return false;
}

// OnMouseWheel @ 1423f0d10

bool __thiscall
FGenericApplicationMessageHandler::OnMouseWheel
          (FGenericApplicationMessageHandler *this,float param_1,TVector2<double> *param_2)

{
  return false;
}

// OnMovedWindow @ 1423f0d20

void __thiscall
FGenericApplicationMessageHandler::OnMovedWindow
          (FGenericApplicationMessageHandler *this,TSharedRef<FGenericWindow,1> *param_1,int param_2
          ,int param_3)

{
  return;
}

// OnOSPaint @ 1423f1230

void __thiscall
FGenericApplicationMessageHandler::OnOSPaint
          (FGenericApplicationMessageHandler *this,TSharedRef<FGenericWindow,1> *param_1)

{
  return;
}

// OnRawMouseMove @ 1423f1280

bool __thiscall
FGenericApplicationMessageHandler::OnRawMouseMove
          (FGenericApplicationMessageHandler *this,int param_1,int param_2)

{
  return false;
}

// OnResizingWindow @ 1423f12a0

void __thiscall
FGenericApplicationMessageHandler::OnResizingWindow
          (FGenericApplicationMessageHandler *this,TSharedRef<FGenericWindow,1> *param_1)

{
  return;
}

// OnSizeChanged @ 1423f12b0

bool __thiscall
FGenericApplicationMessageHandler::OnSizeChanged
          (FGenericApplicationMessageHandler *this,TSharedRef<FGenericWindow,1> *param_1,int param_2
          ,int param_3,bool param_4)

{
  return false;
}

// OnTouchEnded @ 1423f1500

bool __thiscall
FGenericApplicationMessageHandler::OnTouchEnded
          (FGenericApplicationMessageHandler *this,TVector2<double> *param_1,int param_2,int param_3
          )

{
  char cVar1;
  undefined1 uVar2;
  IPlatformInputDeviceMapper *pIVar3;
  undefined4 local_res8 [2];
  undefined4 local_18 [4];
  
  cVar1 = (**(code **)((longlong)*this + 0x88))();
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    FGenericPlatformMisc::GetPlatformUserForUserIndex((int)local_18);
    local_res8[0] = 0xffffffff;
    pIVar3 = IPlatformInputDeviceMapper::Get();
    (**(code **)(pIVar3->_padding_ + 0xb0))(pIVar3,param_3,local_18,local_res8);
    uVar2 = (**(code **)((longlong)*this + 0xe8))(this,param_1,param_2,local_18[0],local_res8[0]);
  }
  return (bool)uVar2;
}

// OnTouchEnded @ 1423f15b0

bool __thiscall
FGenericApplicationMessageHandler::OnTouchEnded
          (FGenericApplicationMessageHandler *this,TVector2<double> *param_1,int param_2,
          FPlatformUserId param_3,FInputDeviceId param_4)

{
  char cVar1;
  undefined1 uVar2;
  
  cVar1 = (**(code **)((longlong)*this + 0x88))();
  if (cVar1 == '\0') {
    uVar2 = (**(code **)((longlong)*this + 0xe0))(this,param_1,param_2,param_3.InternalId);
  }
  else {
    uVar2 = 0;
  }
  return (bool)uVar2;
}

// OnTouchFirstMove @ 1423f1620

bool __thiscall
FGenericApplicationMessageHandler::OnTouchFirstMove
          (FGenericApplicationMessageHandler *this,TVector2<double> *param_1,float param_2,
          int param_3,int param_4)

{
  char cVar1;
  undefined1 uVar2;
  IPlatformInputDeviceMapper *pIVar3;
  undefined4 local_res8 [2];
  undefined4 local_28 [8];
  
  cVar1 = (**(code **)((longlong)*this + 0x88))();
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    FGenericPlatformMisc::GetPlatformUserForUserIndex((int)local_28);
    local_res8[0] = 0xffffffff;
    pIVar3 = IPlatformInputDeviceMapper::Get();
    (**(code **)(pIVar3->_padding_ + 0xb0))(pIVar3,param_4,local_28,local_res8);
    uVar2 = (**(code **)((longlong)*this + 0x108))
                      (this,param_1,param_2,param_3,local_28[0],local_res8[0]);
  }
  return (bool)uVar2;
}

// OnTouchFirstMove @ 1423f16e0

bool __thiscall
FGenericApplicationMessageHandler::OnTouchFirstMove
          (FGenericApplicationMessageHandler *this,TVector2<double> *param_1,float param_2,
          int param_3,FPlatformUserId param_4,FInputDeviceId param_5)

{
  char cVar1;
  undefined1 uVar2;
  
  cVar1 = (**(code **)((longlong)*this + 0x88))();
  if (cVar1 == '\0') {
    uVar2 = (**(code **)((longlong)*this + 0x100))(this,param_1,param_2,param_3,param_4.InternalId);
  }
  else {
    uVar2 = 0;
  }
  return (bool)uVar2;
}

// OnTouchForceChanged @ 1423f1750

bool __thiscall
FGenericApplicationMessageHandler::OnTouchForceChanged
          (FGenericApplicationMessageHandler *this,TVector2<double> *param_1,float param_2,
          int param_3,int param_4)

{
  char cVar1;
  undefined1 uVar2;
  IPlatformInputDeviceMapper *pIVar3;
  undefined4 local_res8 [2];
  undefined4 local_28 [8];
  
  cVar1 = (**(code **)((longlong)*this + 0x88))();
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    FGenericPlatformMisc::GetPlatformUserForUserIndex((int)local_28);
    local_res8[0] = 0xffffffff;
    pIVar3 = IPlatformInputDeviceMapper::Get();
    (**(code **)(pIVar3->_padding_ + 0xb0))(pIVar3,param_4,local_28,local_res8);
    uVar2 = (**(code **)((longlong)*this + 0xf8))
                      (this,param_1,param_2,param_3,local_28[0],local_res8[0]);
  }
  return (bool)uVar2;
}

// OnTouchForceChanged @ 1423f1810

bool __thiscall
FGenericApplicationMessageHandler::OnTouchForceChanged
          (FGenericApplicationMessageHandler *this,TVector2<double> *param_1,float param_2,
          int param_3,FPlatformUserId param_4,FInputDeviceId param_5)

{
  char cVar1;
  undefined1 uVar2;
  
  cVar1 = (**(code **)((longlong)*this + 0x88))();
  if (cVar1 == '\0') {
    uVar2 = (**(code **)((longlong)*this + 0xf0))(this,param_1,param_2,param_3,param_4.InternalId);
  }
  else {
    uVar2 = 0;
  }
  return (bool)uVar2;
}

// OnTouchGesture @ 1423f1880

bool __thiscall
FGenericApplicationMessageHandler::OnTouchGesture
          (FGenericApplicationMessageHandler *this,EGestureEvent param_1,TVector2<double> *param_2,
          float param_3,bool param_4)

{
  return false;
}

// OnTouchMoved @ 1423f1890

bool __thiscall
FGenericApplicationMessageHandler::OnTouchMoved
          (FGenericApplicationMessageHandler *this,TVector2<double> *param_1,float param_2,
          int param_3,int param_4)

{
  char cVar1;
  undefined1 uVar2;
  IPlatformInputDeviceMapper *pIVar3;
  undefined4 local_res8 [2];
  undefined4 local_28 [8];
  
  cVar1 = (**(code **)((longlong)*this + 0x88))();
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    FGenericPlatformMisc::GetPlatformUserForUserIndex((int)local_28);
    local_res8[0] = 0xffffffff;
    pIVar3 = IPlatformInputDeviceMapper::Get();
    (**(code **)(pIVar3->_padding_ + 0xb0))(pIVar3,param_4,local_28,local_res8);
    uVar2 = (**(code **)((longlong)*this + 0xd8))
                      (this,param_1,param_2,param_3,local_28[0],local_res8[0]);
  }
  return (bool)uVar2;
}

// OnTouchMoved @ 1423f1950

bool __thiscall
FGenericApplicationMessageHandler::OnTouchMoved
          (FGenericApplicationMessageHandler *this,TVector2<double> *param_1,float param_2,
          int param_3,FPlatformUserId param_4,FInputDeviceId param_5)

{
  char cVar1;
  undefined1 uVar2;
  
  cVar1 = (**(code **)((longlong)*this + 0x88))();
  if (cVar1 == '\0') {
    uVar2 = (**(code **)((longlong)*this + 0xd0))(this,param_1,param_2,param_3,param_4.InternalId);
  }
  else {
    uVar2 = 0;
  }
  return (bool)uVar2;
}

// OnTouchStarted @ 1423f19c0

bool __thiscall
FGenericApplicationMessageHandler::OnTouchStarted
          (FGenericApplicationMessageHandler *this,TSharedPtr<FGenericWindow,1> *param_1,
          TVector2<double> *param_2,float param_3,int param_4,int param_5)

{
  char cVar1;
  undefined1 uVar2;
  IPlatformInputDeviceMapper *pIVar3;
  undefined4 local_res8 [2];
  undefined4 local_28 [8];
  
  cVar1 = (**(code **)((longlong)*this + 0x88))();
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    FGenericPlatformMisc::GetPlatformUserForUserIndex((int)local_28);
    local_res8[0] = 0xffffffff;
    pIVar3 = IPlatformInputDeviceMapper::Get();
    (**(code **)(pIVar3->_padding_ + 0xb0))(pIVar3,param_5,local_28,local_res8);
    uVar2 = (**(code **)((longlong)*this + 200))
                      (this,param_1,param_2,param_3,param_4,local_28[0],local_res8[0]);
  }
  return (bool)uVar2;
}

// OnTouchStarted @ 1423f1a90

bool __thiscall
FGenericApplicationMessageHandler::OnTouchStarted
          (FGenericApplicationMessageHandler *this,TSharedPtr<FGenericWindow,1> *param_1,
          TVector2<double> *param_2,float param_3,int param_4,FPlatformUserId param_5,
          FInputDeviceId param_6)

{
  char cVar1;
  undefined1 uVar2;
  
  cVar1 = (**(code **)((longlong)*this + 0x88))();
  if (cVar1 == '\0') {
    uVar2 = (**(code **)((longlong)*this + 0xc0))
                      (this,param_1,param_2,param_3,param_4,param_5.InternalId);
  }
  else {
    uVar2 = 0;
  }
  return (bool)uVar2;
}

// OnWindowAction @ 1423f1fb0

bool __thiscall
FGenericApplicationMessageHandler::OnWindowAction
          (FGenericApplicationMessageHandler *this,TSharedRef<FGenericWindow,1> *param_1,
          Type param_2)

{
  return true;
}

// OnWindowActivationChanged @ 1423f1fc0

bool __thiscall
FGenericApplicationMessageHandler::OnWindowActivationChanged
          (FGenericApplicationMessageHandler *this,TSharedRef<FGenericWindow,1> *param_1,
          EWindowActivation param_2)

{
  return false;
}

// OnWindowClose @ 1423f1fd0

void __thiscall
FGenericApplicationMessageHandler::OnWindowClose
          (FGenericApplicationMessageHandler *this,TSharedRef<FGenericWindow,1> *param_1)

{
  return;
}

// SetCursorPos @ 142404180

void __thiscall
FGenericApplicationMessageHandler::SetCursorPos
          (FGenericApplicationMessageHandler *this,TVector2<double> *param_1)

{
  return;
}

// ShouldProcessUserInputMessages @ 142406390

bool __thiscall
FGenericApplicationMessageHandler::ShouldProcessUserInputMessages
          (FGenericApplicationMessageHandler *this,TSharedPtr<FGenericWindow,1> *param_1)

{
  return false;
}

// ShouldSimulateGesture @ 1424063a0

void __thiscall
FGenericApplicationMessageHandler::ShouldSimulateGesture
          (FGenericApplicationMessageHandler *this,EGestureEvent param_1,bool param_2)

{
  return;
}

// ShouldUsePlatformUserId @ 1424063b0

bool __thiscall
FGenericApplicationMessageHandler::ShouldUsePlatformUserId(FGenericApplicationMessageHandler *this)

{
  return true;
}

// SignalSystemDPIChanged @ 142407a20

void __thiscall
FGenericApplicationMessageHandler::SignalSystemDPIChanged
          (FGenericApplicationMessageHandler *this,TSharedRef<FGenericWindow,1> *param_1)

{
  return;
}

