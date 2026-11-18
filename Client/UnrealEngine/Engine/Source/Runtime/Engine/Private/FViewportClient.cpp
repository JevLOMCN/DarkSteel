// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// InputAxis @ 148963030

bool __thiscall
FViewportClient::InputAxis
          (FViewportClient *this,FViewport *param_1,FInputDeviceId param_2,FKey *param_3,
          float param_4,float param_5,int param_6,bool param_7)

{
  undefined1 uVar1;
  FInputKeyEventArgs local_58;
  
  FInputKeyEventArgs::FInputKeyEventArgs(&local_58,param_1,param_2,param_3,IE_Axis,param_4,false,0);
  local_58.NumSamples = param_6;
  local_58.DeltaTime = param_5;
  uVar1 = (**(code **)((longlong)*this + 0x48))(this,&local_58);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.Key.KeyDetails.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->KeyDetails).SharedReferenceCount.ReferenceController);
  return (bool)uVar1;
}

// InputGesture @ 148963190

bool __thiscall
FViewportClient::InputGesture
          (FViewportClient *this,FViewport *param_1,EGestureEvent param_2,TVector2<double> *param_3,
          bool param_4)

{
  undefined1 uVar1;
  IPlatformInputDeviceMapper *pIVar2;
  undefined4 local_res8 [2];
  undefined4 local_18 [4];
  
  pIVar2 = IPlatformInputDeviceMapper::Get();
  (**(code **)(pIVar2->_padding_ + 0x50))(pIVar2,local_res8);
  pIVar2 = IPlatformInputDeviceMapper::Get();
  (**(code **)(pIVar2->_padding_ + 0x70))(pIVar2,local_18,local_res8[0]);
  uVar1 = (**(code **)((longlong)*this + 0x70))(this,param_1,local_18[0],param_2,param_3,param_4,0);
  return (bool)uVar1;
}

// InputMotion @ 1489650a0

bool __thiscall
FViewportClient::InputMotion
          (FViewportClient *this,FViewport *param_1,int param_2,TVector<double> *param_3,
          TVector<double> *param_4,TVector<double> *param_5,TVector<double> *param_6)

{
  undefined1 uVar1;
  IPlatformInputDeviceMapper *pIVar2;
  undefined4 local_res8 [2];
  undefined4 local_18 [4];
  
  local_18[0] = 0xffffffff;
  local_res8[0] = 0xffffffff;
  pIVar2 = IPlatformInputDeviceMapper::Get();
  (**(code **)(pIVar2->_padding_ + 0xb0))(pIVar2,param_2,local_18,local_res8);
  uVar1 = (**(code **)((longlong)*this + 0x80))
                    (this,param_1,local_res8[0],param_3,param_4,param_5,param_6,0);
  return (bool)uVar1;
}

// InputTouch @ 1489657f0

bool __thiscall
FViewportClient::InputTouch
          (FViewportClient *this,FViewport *param_1,int param_2,uint param_3,Type param_4,
          TVector2<double> *param_5,float param_6,FDateTime param_7,uint param_8)

{
  undefined1 uVar1;
  IPlatformInputDeviceMapper *pIVar2;
  undefined4 local_res8 [2];
  undefined4 local_18 [4];
  
  local_18[0] = 0xffffffff;
  local_res8[0] = 0xffffffff;
  pIVar2 = IPlatformInputDeviceMapper::Get();
  (**(code **)(pIVar2->_padding_ + 0xb0))(pIVar2,param_2,local_18,local_res8);
  uVar1 = (**(code **)((longlong)*this + 0x60))
                    (this,param_1,local_res8[0],param_3,param_4,param_5,param_6,param_8,0);
  return (bool)uVar1;
}

// MapCursor @ 1489694b0

/* WARNING: Enum "Type": Some values do not have unique names */

TOptional<TSharedRef<SWidget,1>_> * __thiscall
FViewportClient::MapCursor
          (FViewportClient *this,TOptional<TSharedRef<SWidget,1>_> *__return_storage_ptr__,
          FViewport *param_1,FCursorReply *param_2)

{
  (__return_storage_ptr__->field0_0x0).TypedValue.Object = (SWidget *)0x0;
  (__return_storage_ptr__->field0_0x0).TypedValue.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// OnQueryPopupMethod @ 14896dab0

FPopupMethodReply * __thiscall
FViewportClient::OnQueryPopupMethod(FViewportClient *this,FPopupMethodReply *__return_storage_ptr__)

{
  *(undefined1 *)&__return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->PopupMethod = CreateNewWindow;
  __return_storage_ptr__->ShouldThrottle = Yes;
  return __return_storage_ptr__;
}

// RedrawRequested @ 1489759d0

void __thiscall FViewportClient::RedrawRequested(FViewportClient *this,FViewport *param_1)

{
  FViewport::Draw(param_1,true);
  return;
}

// RequestInvalidateHitProxy @ 148979500

void __thiscall FViewportClient::RequestInvalidateHitProxy(FViewportClient *this,FViewport *param_1)

{
  FViewport::InvalidateHitProxy(param_1);
  return;
}

