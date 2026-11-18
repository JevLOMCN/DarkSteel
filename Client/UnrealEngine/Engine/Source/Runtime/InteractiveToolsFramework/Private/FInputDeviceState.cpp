// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 5

// StaticStruct @ 14966d850

UScriptStruct * __cdecl FInputDeviceState::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FInputDeviceState.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_InteractiveToolsFramework();
    Z_Registration_Info_UScriptStruct_FInputDeviceState.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FInputDeviceState,(UObject *)pUVar1,
                         L"InputDeviceState");
  }
  return Z_Registration_Info_UScriptStruct_FInputDeviceState.OuterSingleton;
}

// FInputDeviceState @ 149682960

FInputDeviceState * __thiscall FInputDeviceState::FInputDeviceState(FInputDeviceState *this)

{
  TSharedPtr<FKeyDetails,1> *pTVar1;
  TSharedPtr<FKeyDetails,1> *pTVar2;
  double dVar3;
  FMouseInputDeviceState *pFVar4;
  FDeviceButtonState local_e8;
  FMouseInputDeviceState local_c8;
  
  FDeviceButtonState::FDeviceButtonState(&(this->Keyboard).ActiveKey);
  FMouseInputDeviceState::FMouseInputDeviceState(&this->Mouse);
  local_e8.Button.KeyName.ComparisonIndex.Value = 0;
  local_e8.Button.KeyName.Number = 0;
  local_e8.Button.KeyDetails.Object = (FKeyDetails *)0x0;
  this->InputDevice = None;
  this->bShiftKeyDown = false;
  this->bAltKeyDown = false;
  this->bCtrlKeyDown = false;
  this->bCmdKeyDown = false;
  local_e8.Button.KeyDetails.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_e8.bPressed = false;
  local_e8.bDown = false;
  local_e8.bReleased = false;
  local_e8.bDoubleClicked = false;
  local_e8._28_4_ = 0;
  FDeviceButtonState::FDeviceButtonState(&local_e8);
  pTVar1 = &(this->Keyboard).ActiveKey.Button.KeyDetails;
  (this->Keyboard).ActiveKey.Button.KeyName = local_e8.Button.KeyName;
  if (pTVar1 != &local_e8.Button.KeyDetails) {
    pTVar1->Object = local_e8.Button.KeyDetails.Object;
    local_e8.Button.KeyDetails.Object = (FKeyDetails *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->Keyboard).ActiveKey.Button.KeyDetails.SharedReferenceCount,
               &local_e8.Button.KeyDetails.SharedReferenceCount);
  }
  (this->Keyboard).ActiveKey.bPressed = local_e8.bPressed;
  (this->Keyboard).ActiveKey.bDown = local_e8.bDown;
  (this->Keyboard).ActiveKey.bReleased = local_e8.bReleased;
  (this->Keyboard).ActiveKey.bDoubleClicked = local_e8.bDoubleClicked;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_e8.Button.KeyDetails.SharedReferenceCount.ReferenceController);
  pFVar4 = FMouseInputDeviceState::FMouseInputDeviceState(&local_c8);
  pTVar1 = &(pFVar4->Left).Button.KeyDetails;
  pTVar2 = &(this->Mouse).Left.Button.KeyDetails;
  (this->Mouse).Left.Button.KeyName = (pFVar4->Left).Button.KeyName;
  if (pTVar2 != pTVar1) {
    pTVar2->Object = pTVar1->Object;
    pTVar1->Object = (FKeyDetails *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->Mouse).Left.Button.KeyDetails.SharedReferenceCount,
               &(pFVar4->Left).Button.KeyDetails.SharedReferenceCount);
  }
  pTVar1 = &(pFVar4->Middle).Button.KeyDetails;
  (this->Mouse).Left.bPressed = (pFVar4->Left).bPressed;
  pTVar2 = &(this->Mouse).Middle.Button.KeyDetails;
  (this->Mouse).Left.bDown = (pFVar4->Left).bDown;
  (this->Mouse).Left.bReleased = (pFVar4->Left).bReleased;
  (this->Mouse).Left.bDoubleClicked = (pFVar4->Left).bDoubleClicked;
  (this->Mouse).Middle.Button.KeyName = (pFVar4->Middle).Button.KeyName;
  if (pTVar2 != pTVar1) {
    pTVar2->Object = pTVar1->Object;
    pTVar1->Object = (FKeyDetails *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->Mouse).Middle.Button.KeyDetails.SharedReferenceCount,
               &(pFVar4->Middle).Button.KeyDetails.SharedReferenceCount);
  }
  pTVar1 = &(pFVar4->Right).Button.KeyDetails;
  (this->Mouse).Middle.bPressed = (pFVar4->Middle).bPressed;
  pTVar2 = &(this->Mouse).Right.Button.KeyDetails;
  (this->Mouse).Middle.bDown = (pFVar4->Middle).bDown;
  (this->Mouse).Middle.bReleased = (pFVar4->Middle).bReleased;
  (this->Mouse).Middle.bDoubleClicked = (pFVar4->Middle).bDoubleClicked;
  (this->Mouse).Right.Button.KeyName = (pFVar4->Right).Button.KeyName;
  if (pTVar2 != pTVar1) {
    pTVar2->Object = pTVar1->Object;
    pTVar1->Object = (FKeyDetails *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->Mouse).Right.Button.KeyDetails.SharedReferenceCount,
               &(pFVar4->Right).Button.KeyDetails.SharedReferenceCount);
  }
  (this->Mouse).Right.bPressed = (pFVar4->Right).bPressed;
  (this->Mouse).Right.bDown = (pFVar4->Right).bDown;
  (this->Mouse).Right.bReleased = (pFVar4->Right).bReleased;
  (this->Mouse).Right.bDoubleClicked = (pFVar4->Right).bDoubleClicked;
  (this->Mouse).WheelDelta = pFVar4->WheelDelta;
  dVar3 = (pFVar4->Position2D).field0_0x0._s_0.Y;
  (this->Mouse).Position2D.field0_0x0._s_0.X = (pFVar4->Position2D).field0_0x0._s_0.X;
  (this->Mouse).Position2D.field0_0x0._s_0.Y = dVar3;
  dVar3 = (pFVar4->Delta2D).field0_0x0._s_0.Y;
  (this->Mouse).Delta2D.field0_0x0._s_0.X = (pFVar4->Delta2D).field0_0x0._s_0.X;
  (this->Mouse).Delta2D.field0_0x0._s_0.Y = dVar3;
  dVar3 = (pFVar4->WorldRay).Origin.field0_0x0._s_0.Y;
  (this->Mouse).WorldRay.Origin.field0_0x0._s_0.X = (pFVar4->WorldRay).Origin.field0_0x0._s_0.X;
  (this->Mouse).WorldRay.Origin.field0_0x0._s_0.Y = dVar3;
  dVar3 = (pFVar4->WorldRay).Direction.field0_0x0._s_0.X;
  (this->Mouse).WorldRay.Origin.field0_0x0._s_0.Z = (pFVar4->WorldRay).Origin.field0_0x0._s_0.Z;
  (this->Mouse).WorldRay.Direction.field0_0x0._s_0.X = dVar3;
  dVar3 = (pFVar4->WorldRay).Direction.field0_0x0._s_0.Z;
  (this->Mouse).WorldRay.Direction.field0_0x0._s_0.Y =
       (pFVar4->WorldRay).Direction.field0_0x0._s_0.Y;
  (this->Mouse).WorldRay.Direction.field0_0x0._s_0.Z = dVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c8.Right.Button.KeyDetails.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c8.Middle.Button.KeyDetails.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c8.Left.Button.KeyDetails.SharedReferenceCount.ReferenceController);
  return this;
}

// operator= @ 14968adc0

FInputDeviceState * __thiscall
FInputDeviceState::operator=(FInputDeviceState *this,FInputDeviceState *param_1)

{
  this->InputDevice = param_1->InputDevice;
  this->bShiftKeyDown = param_1->bShiftKeyDown;
  this->bAltKeyDown = param_1->bAltKeyDown;
  this->bCtrlKeyDown = param_1->bCtrlKeyDown;
  this->bCmdKeyDown = param_1->bCmdKeyDown;
  FDeviceButtonState::operator=(&(this->Keyboard).ActiveKey,&(param_1->Keyboard).ActiveKey);
  FMouseInputDeviceState::operator=(&this->Mouse,&param_1->Mouse);
  return this;
}

// IsCtrlKeyDown @ 1496ad370

bool __cdecl FInputDeviceState::IsCtrlKeyDown(FInputDeviceState *param_1)

{
  return param_1->bCtrlKeyDown;
}

// IsShiftKeyDown @ 1496ae440

bool __cdecl FInputDeviceState::IsShiftKeyDown(FInputDeviceState *param_1)

{
  return param_1->bShiftKeyDown;
}

