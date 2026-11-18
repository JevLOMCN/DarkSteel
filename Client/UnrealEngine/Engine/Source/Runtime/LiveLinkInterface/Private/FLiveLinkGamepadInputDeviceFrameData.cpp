// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLinkInterface
// Functions: 3

// StaticStruct @ 14cfaf520

UScriptStruct * __cdecl FLiveLinkGamepadInputDeviceFrameData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FLiveLinkGamepadInputDeviceFrameData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_LiveLinkInterface();
    Z_Registration_Info_UScriptStruct_FLiveLinkGamepadInputDeviceFrameData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkGamepadInputDeviceFrameData,
                         (UObject *)pUVar1,L"LiveLinkGamepadInputDeviceFrameData");
  }
  return Z_Registration_Info_UScriptStruct_FLiveLinkGamepadInputDeviceFrameData.OuterSingleton;
}

// FLiveLinkGamepadInputDeviceFrameData @ 14cfb54c0

FLiveLinkGamepadInputDeviceFrameData * __thiscall
FLiveLinkGamepadInputDeviceFrameData::FLiveLinkGamepadInputDeviceFrameData
          (FLiveLinkGamepadInputDeviceFrameData *this)

{
  FLiveLinkBaseFrameData::FLiveLinkBaseFrameData((FLiveLinkBaseFrameData *)this);
  this->LeftAnalogX = 0.0;
  this->LeftAnalogY = 0.0;
  this->RightAnalogX = 0.0;
  this->RightAnalogY = 0.0;
  this->LeftTriggerAnalog = 0.0;
  this->RightTriggerAnalog = 0.0;
  this->LeftThumb = 0.0;
  this->RightThumb = 0.0;
  this->SpecialLeft = 0.0;
  this->SpecialLeft_X = 0.0;
  this->SpecialLeft_Y = 0.0;
  this->SpecialRight = 0.0;
  this->FaceButtonBottom = 0.0;
  this->FaceButtonRight = 0.0;
  this->FaceButtonLeft = 0.0;
  this->FaceButtonTop = 0.0;
  this->LeftShoulder = 0.0;
  this->RightShoulder = 0.0;
  this->LeftTriggerThreshold = 0.0;
  this->RightTriggerThreshold = 0.0;
  this->DPadUp = 0.0;
  this->DPadDown = 0.0;
  this->DPadRight = 0.0;
  this->DPadLeft = 0.0;
  this->LeftStickUp = 0.0;
  this->LeftStickDown = 0.0;
  this->LeftStickRight = 0.0;
  this->LeftStickLeft = 0.0;
  this->RightStickUp = 0.0;
  this->RightStickDown = 0.0;
  this->RightStickRight = 0.0;
  this->RightStickLeft = 0.0;
  return this;
}

// operator= @ 14cfb6d40

FLiveLinkGamepadInputDeviceFrameData * __thiscall
FLiveLinkGamepadInputDeviceFrameData::operator=
          (FLiveLinkGamepadInputDeviceFrameData *this,FLiveLinkGamepadInputDeviceFrameData *param_1)

{
  FLiveLinkBaseFrameData::operator=
            ((FLiveLinkBaseFrameData *)this,(FLiveLinkBaseFrameData *)param_1);
  this->LeftAnalogX = param_1->LeftAnalogX;
  this->LeftAnalogY = param_1->LeftAnalogY;
  this->RightAnalogX = param_1->RightAnalogX;
  this->RightAnalogY = param_1->RightAnalogY;
  this->LeftTriggerAnalog = param_1->LeftTriggerAnalog;
  this->RightTriggerAnalog = param_1->RightTriggerAnalog;
  this->LeftThumb = param_1->LeftThumb;
  this->RightThumb = param_1->RightThumb;
  this->SpecialLeft = param_1->SpecialLeft;
  this->SpecialLeft_X = param_1->SpecialLeft_X;
  this->SpecialLeft_Y = param_1->SpecialLeft_Y;
  this->SpecialRight = param_1->SpecialRight;
  this->FaceButtonBottom = param_1->FaceButtonBottom;
  this->FaceButtonRight = param_1->FaceButtonRight;
  this->FaceButtonLeft = param_1->FaceButtonLeft;
  this->FaceButtonTop = param_1->FaceButtonTop;
  this->LeftShoulder = param_1->LeftShoulder;
  this->RightShoulder = param_1->RightShoulder;
  this->LeftTriggerThreshold = param_1->LeftTriggerThreshold;
  this->RightTriggerThreshold = param_1->RightTriggerThreshold;
  this->DPadUp = param_1->DPadUp;
  this->DPadDown = param_1->DPadDown;
  this->DPadRight = param_1->DPadRight;
  this->DPadLeft = param_1->DPadLeft;
  this->LeftStickUp = param_1->LeftStickUp;
  this->LeftStickDown = param_1->LeftStickDown;
  this->LeftStickRight = param_1->LeftStickRight;
  this->LeftStickLeft = param_1->LeftStickLeft;
  this->RightStickUp = param_1->RightStickUp;
  this->RightStickDown = param_1->RightStickDown;
  this->RightStickRight = param_1->RightStickRight;
  this->RightStickLeft = param_1->RightStickLeft;
  return this;
}

