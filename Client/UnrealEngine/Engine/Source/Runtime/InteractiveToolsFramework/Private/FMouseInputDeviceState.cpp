// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 3

// StaticStruct @ 14966d6c0

UScriptStruct * __cdecl FMouseInputDeviceState::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMouseInputDeviceState.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_InteractiveToolsFramework();
    Z_Registration_Info_UScriptStruct_FMouseInputDeviceState.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMouseInputDeviceState,(UObject *)pUVar1,
                         L"MouseInputDeviceState");
  }
  return Z_Registration_Info_UScriptStruct_FMouseInputDeviceState.OuterSingleton;
}

// FMouseInputDeviceState @ 149682e20

FMouseInputDeviceState * __thiscall
FMouseInputDeviceState::FMouseInputDeviceState(FMouseInputDeviceState *this)

{
  TSharedPtr<FKeyDetails,1> *pTVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  FName FVar5;
  FKeyDetails *pFVar6;
  FSharedReferencer<1> FVar7;
  FKeyDetails *local_b0;
  FSharedReferencer<1> FStack_a8;
  undefined4 local_a0;
  FName local_98;
  FKeyDetails *local_90;
  FSharedReferencer<1> FStack_88;
  undefined4 local_80;
  FName local_78;
  FKeyDetails *local_70;
  FSharedReferencer<1> FStack_68;
  undefined4 local_60;
  
  FDeviceButtonState::FDeviceButtonState(&this->Left);
  FDeviceButtonState::FDeviceButtonState(&this->Middle);
  FDeviceButtonState::FDeviceButtonState(&this->Right);
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->WorldRay).Origin.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->WorldRay).Origin.field0_0x0._s_0.Y = (double)uVar2;
  (this->WorldRay).Origin.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->WorldRay).Direction.field0_0x0._s_0.X = 0.0;
  (this->WorldRay).Direction.field0_0x0._s_0.Y = 0.0;
  (this->WorldRay).Direction.field0_0x0._s_0.Z = 1.0;
  FVar7 = EKeys::LeftMouseButton.KeyDetails.SharedReferenceCount;
  pFVar6 = EKeys::LeftMouseButton.KeyDetails.Object;
  FVar5 = EKeys::LeftMouseButton.KeyName;
  if (EKeys::LeftMouseButton.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (EKeys::LeftMouseButton.KeyDetails.SharedReferenceCount.ReferenceController)->
    SharedReferenceCount =
         (atomic<int>)
         ((int)(EKeys::LeftMouseButton.KeyDetails.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  local_b0 = pFVar6;
  FStack_a8.ReferenceController = FVar7.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  local_a0._3_1_ = false;
  local_a0 = 0;
  local_a0._2_1_ = false;
  (this->Left).Button.KeyName = FVar5;
  local_a0._1_1_ = false;
  pTVar1 = &(this->Left).Button.KeyDetails;
  local_a0._0_1_ = false;
  if (pTVar1 != (TSharedPtr<FKeyDetails,1> *)&local_b0) {
    pTVar1->Object = pFVar6;
    local_b0 = (FKeyDetails *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->Left).Button.KeyDetails.SharedReferenceCount,&FStack_a8);
    FVar7.ReferenceController = FStack_a8.ReferenceController;
  }
  (this->Left).bPressed = (bool)(undefined1)local_a0;
  (this->Left).bDown = (bool)local_a0._1_1_;
  (this->Left).bReleased = (bool)local_a0._2_1_;
  (this->Left).bDoubleClicked = (bool)local_a0._3_1_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar7.ReferenceController);
  FVar7 = EKeys::MiddleMouseButton.KeyDetails.SharedReferenceCount;
  pFVar6 = EKeys::MiddleMouseButton.KeyDetails.Object;
  FVar5 = EKeys::MiddleMouseButton.KeyName;
  local_98 = EKeys::MiddleMouseButton.KeyName;
  if (EKeys::MiddleMouseButton.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (EKeys::MiddleMouseButton.KeyDetails.SharedReferenceCount.ReferenceController)->
    SharedReferenceCount =
         (atomic<int>)
         ((int)(EKeys::MiddleMouseButton.KeyDetails.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  local_90 = pFVar6;
  FStack_88.ReferenceController = FVar7.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  local_80._3_1_ = false;
  local_80 = 0;
  local_80._2_1_ = false;
  (this->Middle).Button.KeyName = FVar5;
  local_80._1_1_ = false;
  pTVar1 = &(this->Middle).Button.KeyDetails;
  local_80._0_1_ = false;
  if (pTVar1 != (TSharedPtr<FKeyDetails,1> *)&local_90) {
    pTVar1->Object = pFVar6;
    local_90 = (FKeyDetails *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->Middle).Button.KeyDetails.SharedReferenceCount,&FStack_88);
    FVar7.ReferenceController = FStack_88.ReferenceController;
  }
  (this->Middle).bPressed = (bool)(undefined1)local_80;
  (this->Middle).bDown = (bool)local_80._1_1_;
  (this->Middle).bReleased = (bool)local_80._2_1_;
  (this->Middle).bDoubleClicked = (bool)local_80._3_1_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar7.ReferenceController);
  FVar7 = EKeys::RightMouseButton.KeyDetails.SharedReferenceCount;
  pFVar6 = EKeys::RightMouseButton.KeyDetails.Object;
  FVar5 = EKeys::RightMouseButton.KeyName;
  local_78 = EKeys::RightMouseButton.KeyName;
  if (EKeys::RightMouseButton.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (EKeys::RightMouseButton.KeyDetails.SharedReferenceCount.ReferenceController)->
    SharedReferenceCount =
         (atomic<int>)
         ((int)(EKeys::RightMouseButton.KeyDetails.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  local_70 = pFVar6;
  FStack_68.ReferenceController = FVar7.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  local_60._3_1_ = false;
  local_60 = 0;
  local_60._2_1_ = false;
  (this->Right).Button.KeyName = FVar5;
  local_60._1_1_ = false;
  pTVar1 = &(this->Right).Button.KeyDetails;
  local_60._0_1_ = false;
  if (pTVar1 != (TSharedPtr<FKeyDetails,1> *)&local_70) {
    pTVar1->Object = pFVar6;
    local_70 = (FKeyDetails *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->Right).Button.KeyDetails.SharedReferenceCount,&FStack_68);
    FVar7.ReferenceController = FStack_68.ReferenceController;
  }
  (this->Right).bPressed = (bool)(undefined1)local_60;
  (this->Right).bDown = (bool)local_60._1_1_;
  (this->Right).bReleased = (bool)local_60._2_1_;
  (this->Right).bDoubleClicked = (bool)local_60._3_1_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar7.ReferenceController);
  uVar2 = __real_3ff0000000000000;
  this->WheelDelta = 0.0;
  (this->Position2D).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->Delta2D).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->WorldRay).Origin.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->WorldRay).Origin.field0_0x0._s_0.Y = (double)uVar3;
  (this->WorldRay).Origin.field0_0x0._s_0.Z = (double)uVar4;
  (this->WorldRay).Direction.field0_0x0._s_0.X = 0.0;
  *(undefined4 *)((longlong)&(this->WorldRay).Direction.field0_0x0 + 8) = 0;
  *(undefined4 *)((longlong)&(this->WorldRay).Direction.field0_0x0 + 0xc) = 0;
  *(int *)((longlong)&(this->WorldRay).Direction.field0_0x0 + 0x10) = (int)uVar2;
  *(int *)((longlong)&(this->WorldRay).Direction.field0_0x0 + 0x14) =
       (int)((ulonglong)uVar2 >> 0x20);
  return this;
}

// operator= @ 14968ae20

FMouseInputDeviceState * __thiscall
FMouseInputDeviceState::operator=(FMouseInputDeviceState *this,FMouseInputDeviceState *param_1)

{
  double dVar1;
  
  FDeviceButtonState::operator=(&this->Left,&param_1->Left);
  FDeviceButtonState::operator=(&this->Middle,&param_1->Middle);
  FDeviceButtonState::operator=(&this->Right,&param_1->Right);
  this->WheelDelta = param_1->WheelDelta;
  dVar1 = (param_1->Position2D).field0_0x0._s_0.Y;
  (this->Position2D).field0_0x0._s_0.X = (param_1->Position2D).field0_0x0._s_0.X;
  (this->Position2D).field0_0x0._s_0.Y = dVar1;
  dVar1 = (param_1->Delta2D).field0_0x0._s_0.Y;
  (this->Delta2D).field0_0x0._s_0.X = (param_1->Delta2D).field0_0x0._s_0.X;
  (this->Delta2D).field0_0x0._s_0.Y = dVar1;
  dVar1 = (param_1->WorldRay).Origin.field0_0x0._s_0.Y;
  (this->WorldRay).Origin.field0_0x0._s_0.X = (param_1->WorldRay).Origin.field0_0x0._s_0.X;
  (this->WorldRay).Origin.field0_0x0._s_0.Y = dVar1;
  dVar1 = (param_1->WorldRay).Direction.field0_0x0._s_0.X;
  (this->WorldRay).Origin.field0_0x0._s_0.Z = (param_1->WorldRay).Origin.field0_0x0._s_0.Z;
  (this->WorldRay).Direction.field0_0x0._s_0.X = dVar1;
  dVar1 = (param_1->WorldRay).Direction.field0_0x0._s_0.Z;
  (this->WorldRay).Direction.field0_0x0._s_0.Y = (param_1->WorldRay).Direction.field0_0x0._s_0.Y;
  (this->WorldRay).Direction.field0_0x0._s_0.Z = dVar1;
  return this;
}

