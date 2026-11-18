// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 37

// CheckIfParameterCanBeOverridden<FBooleanCameraParameter> @ 14d539ad0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
UE::Cameras::Internal::FInterfaceParameterBindingBuilder::
CheckIfParameterCanBeOverridden<FBooleanCameraParameter>
          (FInterfaceParameterBindingBuilder *this,UCameraObjectInterfaceBlendableParameter *param_1
          ,FBooleanCameraParameter *param_2)

{
  bool bVar1;
  FText *pFVar2;
  FText *pFVar3;
  FText *pFVar4;
  FText *pFVar5;
  FText *pFVar6;
  FTextFormat *pFVar7;
  TRefCountPtr<ITextData> TVar8;
  FName local_res10;
  FText local_98;
  FText local_88;
  FText local_78;
  FText local_68;
  FText local_58;
  FText local_48;
  FText local_38;
  FText local_28;
  
  if (param_1->ParameterType == Boolean) {
    if ((param_2->Variable).field0_0x0.DebugPtr == (UBooleanCameraVariable *)0x0) {
      bVar1 = CheckIfParameterCanBeOverridden(this,param_1,&param_2->VariableID);
      return bVar1;
    }
    pFVar2 = FText::FromName(&local_28,(FName *)&param_1->_padding_);
    local_res10 = *(FName *)(param_1->_padding_ + 0x18);
    pFVar3 = FText::FromName(&local_38,&local_res10);
    pFVar4 = FText::AsLocalizable_Advanced_LocText
                       (&local_88,L"CameraObjectInterfaceBuilder",L"BlendableParameterDrivenTwice",
                        L"Camera node parameter \'{0}.{1}\' is both exposed and driven by a variable!"
                       );
    pFVar7 = FTextFormat::FTextFormat((FTextFormat *)&local_48,pFVar4,Default);
    pFVar2 = FText::Format<FText,FText>(&local_78,pFVar7,pFVar3,pFVar2);
    FCameraBuildLog::AddMessage(this->Owner->BuildLog,Error,(UObject *)0x0,pFVar2);
    TVar8.Reference = local_88.TextData.Reference;
    if (local_78.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      TVar8.Reference = local_88.TextData.Reference;
    }
  }
  else {
    pFVar2 = UEnum::GetDisplayValueAsText<enum_ECameraVariableType>
                       (&local_68,param_1->ParameterType);
    pFVar3 = FText::FromString(&local_58,(FString *)&param_1->_padding_);
    UEnum::GetDisplayValueAsText<enum_ECameraVariableType>(&local_98,Boolean);
    pFVar4 = FText::FromName(&local_48,(FName *)&param_1->_padding_);
    local_res10 = *(FName *)(param_1->_padding_ + 0x18);
    pFVar5 = FText::FromName(&local_38,&local_res10);
    pFVar6 = FText::AsLocalizable_Advanced_LocText
                       (&local_78,L"CameraObjectInterfaceBuilder",L"BlendableParameterTypeMismatch",
                        L"Camera node parameter \'{0}.{1}\' of type {2} is not compatible with camera rig parameter \'{3}\' of type {4}"
                       );
    pFVar7 = FTextFormat::FTextFormat((FTextFormat *)&local_28,pFVar6,Default);
    pFVar2 = FText::Format<FText,FText,FText,FText,FText>
                       (&local_88,pFVar7,pFVar5,pFVar4,&local_98,pFVar3,pFVar2);
    FCameraBuildLog::AddMessage(this->Owner->BuildLog,Error,(UObject *)0x0,pFVar2);
    TVar8.Reference = local_78.TextData.Reference;
    if (local_88.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
      TVar8.Reference = local_78.TextData.Reference;
    }
  }
  if (TVar8.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*TVar8.Reference + 0x10))();
  }
  return false;
}

// CheckIfParameterCanBeOverridden<FBooleanCameraVariableReference> @ 14d539cf0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
UE::Cameras::Internal::FInterfaceParameterBindingBuilder::
CheckIfParameterCanBeOverridden<FBooleanCameraVariableReference>
          (FInterfaceParameterBindingBuilder *this,UCameraObjectInterfaceBlendableParameter *param_1
          ,FBooleanCameraVariableReference *param_2)

{
  bool bVar1;
  FText *pFVar2;
  FText *pFVar3;
  FText *pFVar4;
  FText *pFVar5;
  FText *pFVar6;
  FTextFormat *pFVar7;
  TRefCountPtr<ITextData> TVar8;
  FName local_res10;
  FText local_98;
  FText local_88;
  FText local_78;
  FText local_68;
  FText local_58;
  FText local_48;
  FText local_38;
  FText local_28;
  
  if (param_1->ParameterType == Boolean) {
    if ((param_2->Variable).field0_0x0.DebugPtr == (UBooleanCameraVariable *)0x0) {
      bVar1 = CheckIfParameterCanBeOverridden(this,param_1,&param_2->VariableID);
      return bVar1;
    }
    pFVar2 = FText::FromName(&local_28,(FName *)&param_1->_padding_);
    local_res10 = *(FName *)(param_1->_padding_ + 0x18);
    pFVar3 = FText::FromName(&local_38,&local_res10);
    pFVar4 = FText::AsLocalizable_Advanced_LocText
                       (&local_88,L"CameraObjectInterfaceBuilder",L"BlendableParameterDrivenTwice",
                        L"Camera node parameter \'{0}.{1}\' is both exposed and driven by a variable!"
                       );
    pFVar7 = FTextFormat::FTextFormat((FTextFormat *)&local_48,pFVar4,Default);
    pFVar2 = FText::Format<FText,FText>(&local_78,pFVar7,pFVar3,pFVar2);
    FCameraBuildLog::AddMessage(this->Owner->BuildLog,Error,(UObject *)0x0,pFVar2);
    TVar8.Reference = local_88.TextData.Reference;
    if (local_78.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      TVar8.Reference = local_88.TextData.Reference;
    }
  }
  else {
    pFVar2 = UEnum::GetDisplayValueAsText<enum_ECameraVariableType>
                       (&local_68,param_1->ParameterType);
    pFVar3 = FText::FromString(&local_58,(FString *)&param_1->_padding_);
    UEnum::GetDisplayValueAsText<enum_ECameraVariableType>(&local_98,Boolean);
    pFVar4 = FText::FromName(&local_48,(FName *)&param_1->_padding_);
    local_res10 = *(FName *)(param_1->_padding_ + 0x18);
    pFVar5 = FText::FromName(&local_38,&local_res10);
    pFVar6 = FText::AsLocalizable_Advanced_LocText
                       (&local_78,L"CameraObjectInterfaceBuilder",L"BlendableParameterTypeMismatch",
                        L"Camera node parameter \'{0}.{1}\' of type {2} is not compatible with camera rig parameter \'{3}\' of type {4}"
                       );
    pFVar7 = FTextFormat::FTextFormat((FTextFormat *)&local_28,pFVar6,Default);
    pFVar2 = FText::Format<FText,FText,FText,FText,FText>
                       (&local_88,pFVar7,pFVar5,pFVar4,&local_98,pFVar3,pFVar2);
    FCameraBuildLog::AddMessage(this->Owner->BuildLog,Error,(UObject *)0x0,pFVar2);
    TVar8.Reference = local_78.TextData.Reference;
    if (local_88.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
      TVar8.Reference = local_78.TextData.Reference;
    }
  }
  if (TVar8.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*TVar8.Reference + 0x10))();
  }
  return false;
}

// CheckIfParameterCanBeOverridden<FDoubleCameraParameter> @ 14d539f10

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
UE::Cameras::Internal::FInterfaceParameterBindingBuilder::
CheckIfParameterCanBeOverridden<FDoubleCameraParameter>
          (FInterfaceParameterBindingBuilder *this,UCameraObjectInterfaceBlendableParameter *param_1
          ,FDoubleCameraParameter *param_2)

{
  bool bVar1;
  FText *pFVar2;
  FText *pFVar3;
  FText *pFVar4;
  FText *pFVar5;
  FText *pFVar6;
  FTextFormat *pFVar7;
  TRefCountPtr<ITextData> TVar8;
  FName local_res10;
  FText local_98;
  FText local_88;
  FText local_78;
  FText local_68;
  FText local_58;
  FText local_48;
  FText local_38;
  FText local_28;
  
  if (param_1->ParameterType == Double) {
    if ((param_2->Variable).field0_0x0.DebugPtr == (UDoubleCameraVariable *)0x0) {
      bVar1 = CheckIfParameterCanBeOverridden(this,param_1,&param_2->VariableID);
      return bVar1;
    }
    pFVar2 = FText::FromName(&local_28,(FName *)&param_1->_padding_);
    local_res10 = *(FName *)(param_1->_padding_ + 0x18);
    pFVar3 = FText::FromName(&local_38,&local_res10);
    pFVar4 = FText::AsLocalizable_Advanced_LocText
                       (&local_88,L"CameraObjectInterfaceBuilder",L"BlendableParameterDrivenTwice",
                        L"Camera node parameter \'{0}.{1}\' is both exposed and driven by a variable!"
                       );
    pFVar7 = FTextFormat::FTextFormat((FTextFormat *)&local_48,pFVar4,Default);
    pFVar2 = FText::Format<FText,FText>(&local_78,pFVar7,pFVar3,pFVar2);
    FCameraBuildLog::AddMessage(this->Owner->BuildLog,Error,(UObject *)0x0,pFVar2);
    TVar8.Reference = local_88.TextData.Reference;
    if (local_78.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      TVar8.Reference = local_88.TextData.Reference;
    }
  }
  else {
    pFVar2 = UEnum::GetDisplayValueAsText<enum_ECameraVariableType>
                       (&local_68,param_1->ParameterType);
    pFVar3 = FText::FromString(&local_58,(FString *)&param_1->_padding_);
    UEnum::GetDisplayValueAsText<enum_ECameraVariableType>(&local_98,Double);
    pFVar4 = FText::FromName(&local_48,(FName *)&param_1->_padding_);
    local_res10 = *(FName *)(param_1->_padding_ + 0x18);
    pFVar5 = FText::FromName(&local_38,&local_res10);
    pFVar6 = FText::AsLocalizable_Advanced_LocText
                       (&local_78,L"CameraObjectInterfaceBuilder",L"BlendableParameterTypeMismatch",
                        L"Camera node parameter \'{0}.{1}\' of type {2} is not compatible with camera rig parameter \'{3}\' of type {4}"
                       );
    pFVar7 = FTextFormat::FTextFormat((FTextFormat *)&local_28,pFVar6,Default);
    pFVar2 = FText::Format<FText,FText,FText,FText,FText>
                       (&local_88,pFVar7,pFVar5,pFVar4,&local_98,pFVar3,pFVar2);
    FCameraBuildLog::AddMessage(this->Owner->BuildLog,Error,(UObject *)0x0,pFVar2);
    TVar8.Reference = local_78.TextData.Reference;
    if (local_88.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
      TVar8.Reference = local_78.TextData.Reference;
    }
  }
  if (TVar8.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*TVar8.Reference + 0x10))();
  }
  return false;
}

// CheckIfParameterCanBeOverridden<FDoubleCameraVariableReference> @ 14d53a130

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
UE::Cameras::Internal::FInterfaceParameterBindingBuilder::
CheckIfParameterCanBeOverridden<FDoubleCameraVariableReference>
          (FInterfaceParameterBindingBuilder *this,UCameraObjectInterfaceBlendableParameter *param_1
          ,FDoubleCameraVariableReference *param_2)

{
  bool bVar1;
  FText *pFVar2;
  FText *pFVar3;
  FText *pFVar4;
  FText *pFVar5;
  FText *pFVar6;
  FTextFormat *pFVar7;
  TRefCountPtr<ITextData> TVar8;
  FName local_res10;
  FText local_98;
  FText local_88;
  FText local_78;
  FText local_68;
  FText local_58;
  FText local_48;
  FText local_38;
  FText local_28;
  
  if (param_1->ParameterType == Double) {
    if ((param_2->Variable).field0_0x0.DebugPtr == (UDoubleCameraVariable *)0x0) {
      bVar1 = CheckIfParameterCanBeOverridden(this,param_1,&param_2->VariableID);
      return bVar1;
    }
    pFVar2 = FText::FromName(&local_28,(FName *)&param_1->_padding_);
    local_res10 = *(FName *)(param_1->_padding_ + 0x18);
    pFVar3 = FText::FromName(&local_38,&local_res10);
    pFVar4 = FText::AsLocalizable_Advanced_LocText
                       (&local_88,L"CameraObjectInterfaceBuilder",L"BlendableParameterDrivenTwice",
                        L"Camera node parameter \'{0}.{1}\' is both exposed and driven by a variable!"
                       );
    pFVar7 = FTextFormat::FTextFormat((FTextFormat *)&local_48,pFVar4,Default);
    pFVar2 = FText::Format<FText,FText>(&local_78,pFVar7,pFVar3,pFVar2);
    FCameraBuildLog::AddMessage(this->Owner->BuildLog,Error,(UObject *)0x0,pFVar2);
    TVar8.Reference = local_88.TextData.Reference;
    if (local_78.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      TVar8.Reference = local_88.TextData.Reference;
    }
  }
  else {
    pFVar2 = UEnum::GetDisplayValueAsText<enum_ECameraVariableType>
                       (&local_68,param_1->ParameterType);
    pFVar3 = FText::FromString(&local_58,(FString *)&param_1->_padding_);
    UEnum::GetDisplayValueAsText<enum_ECameraVariableType>(&local_98,Double);
    pFVar4 = FText::FromName(&local_48,(FName *)&param_1->_padding_);
    local_res10 = *(FName *)(param_1->_padding_ + 0x18);
    pFVar5 = FText::FromName(&local_38,&local_res10);
    pFVar6 = FText::AsLocalizable_Advanced_LocText
                       (&local_78,L"CameraObjectInterfaceBuilder",L"BlendableParameterTypeMismatch",
                        L"Camera node parameter \'{0}.{1}\' of type {2} is not compatible with camera rig parameter \'{3}\' of type {4}"
                       );
    pFVar7 = FTextFormat::FTextFormat((FTextFormat *)&local_28,pFVar6,Default);
    pFVar2 = FText::Format<FText,FText,FText,FText,FText>
                       (&local_88,pFVar7,pFVar5,pFVar4,&local_98,pFVar3,pFVar2);
    FCameraBuildLog::AddMessage(this->Owner->BuildLog,Error,(UObject *)0x0,pFVar2);
    TVar8.Reference = local_78.TextData.Reference;
    if (local_88.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
      TVar8.Reference = local_78.TextData.Reference;
    }
  }
  if (TVar8.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*TVar8.Reference + 0x10))();
  }
  return false;
}

// CheckIfParameterCanBeOverridden<FFloatCameraParameter> @ 14d53a350

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
UE::Cameras::Internal::FInterfaceParameterBindingBuilder::
CheckIfParameterCanBeOverridden<FFloatCameraParameter>
          (FInterfaceParameterBindingBuilder *this,UCameraObjectInterfaceBlendableParameter *param_1
          ,FFloatCameraParameter *param_2)

{
  bool bVar1;
  FText *pFVar2;
  FText *pFVar3;
  FText *pFVar4;
  FText *pFVar5;
  FText *pFVar6;
  FTextFormat *pFVar7;
  TRefCountPtr<ITextData> TVar8;
  FName local_res10;
  FText local_98;
  FText local_88;
  FText local_78;
  FText local_68;
  FText local_58;
  FText local_48;
  FText local_38;
  FText local_28;
  
  if (param_1->ParameterType == Float) {
    if ((param_2->Variable).field0_0x0.DebugPtr == (UFloatCameraVariable *)0x0) {
      bVar1 = CheckIfParameterCanBeOverridden(this,param_1,&param_2->VariableID);
      return bVar1;
    }
    pFVar2 = FText::FromName(&local_28,(FName *)&param_1->_padding_);
    local_res10 = *(FName *)(param_1->_padding_ + 0x18);
    pFVar3 = FText::FromName(&local_38,&local_res10);
    pFVar4 = FText::AsLocalizable_Advanced_LocText
                       (&local_88,L"CameraObjectInterfaceBuilder",L"BlendableParameterDrivenTwice",
                        L"Camera node parameter \'{0}.{1}\' is both exposed and driven by a variable!"
                       );
    pFVar7 = FTextFormat::FTextFormat((FTextFormat *)&local_48,pFVar4,Default);
    pFVar2 = FText::Format<FText,FText>(&local_78,pFVar7,pFVar3,pFVar2);
    FCameraBuildLog::AddMessage(this->Owner->BuildLog,Error,(UObject *)0x0,pFVar2);
    TVar8.Reference = local_88.TextData.Reference;
    if (local_78.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      TVar8.Reference = local_88.TextData.Reference;
    }
  }
  else {
    pFVar2 = UEnum::GetDisplayValueAsText<enum_ECameraVariableType>
                       (&local_68,param_1->ParameterType);
    pFVar3 = FText::FromString(&local_58,(FString *)&param_1->_padding_);
    UEnum::GetDisplayValueAsText<enum_ECameraVariableType>(&local_98,Float);
    pFVar4 = FText::FromName(&local_48,(FName *)&param_1->_padding_);
    local_res10 = *(FName *)(param_1->_padding_ + 0x18);
    pFVar5 = FText::FromName(&local_38,&local_res10);
    pFVar6 = FText::AsLocalizable_Advanced_LocText
                       (&local_78,L"CameraObjectInterfaceBuilder",L"BlendableParameterTypeMismatch",
                        L"Camera node parameter \'{0}.{1}\' of type {2} is not compatible with camera rig parameter \'{3}\' of type {4}"
                       );
    pFVar7 = FTextFormat::FTextFormat((FTextFormat *)&local_28,pFVar6,Default);
    pFVar2 = FText::Format<FText,FText,FText,FText,FText>
                       (&local_88,pFVar7,pFVar5,pFVar4,&local_98,pFVar3,pFVar2);
    FCameraBuildLog::AddMessage(this->Owner->BuildLog,Error,(UObject *)0x0,pFVar2);
    TVar8.Reference = local_78.TextData.Reference;
    if (local_88.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
      TVar8.Reference = local_78.TextData.Reference;
    }
  }
  if (TVar8.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*TVar8.Reference + 0x10))();
  }
  return false;
}

// CheckIfParameterCanBeOverridden<FFloatCameraVariableReference> @ 14d53a570

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
UE::Cameras::Internal::FInterfaceParameterBindingBuilder::
CheckIfParameterCanBeOverridden<FFloatCameraVariableReference>
          (FInterfaceParameterBindingBuilder *this,UCameraObjectInterfaceBlendableParameter *param_1
          ,FFloatCameraVariableReference *param_2)

{
  bool bVar1;
  FText *pFVar2;
  FText *pFVar3;
  FText *pFVar4;
  FText *pFVar5;
  FText *pFVar6;
  FTextFormat *pFVar7;
  TRefCountPtr<ITextData> TVar8;
  FName local_res10;
  FText local_98;
  FText local_88;
  FText local_78;
  FText local_68;
  FText local_58;
  FText local_48;
  FText local_38;
  FText local_28;
  
  if (param_1->ParameterType == Float) {
    if ((param_2->Variable).field0_0x0.DebugPtr == (UFloatCameraVariable *)0x0) {
      bVar1 = CheckIfParameterCanBeOverridden(this,param_1,&param_2->VariableID);
      return bVar1;
    }
    pFVar2 = FText::FromName(&local_28,(FName *)&param_1->_padding_);
    local_res10 = *(FName *)(param_1->_padding_ + 0x18);
    pFVar3 = FText::FromName(&local_38,&local_res10);
    pFVar4 = FText::AsLocalizable_Advanced_LocText
                       (&local_88,L"CameraObjectInterfaceBuilder",L"BlendableParameterDrivenTwice",
                        L"Camera node parameter \'{0}.{1}\' is both exposed and driven by a variable!"
                       );
    pFVar7 = FTextFormat::FTextFormat((FTextFormat *)&local_48,pFVar4,Default);
    pFVar2 = FText::Format<FText,FText>(&local_78,pFVar7,pFVar3,pFVar2);
    FCameraBuildLog::AddMessage(this->Owner->BuildLog,Error,(UObject *)0x0,pFVar2);
    TVar8.Reference = local_88.TextData.Reference;
    if (local_78.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      TVar8.Reference = local_88.TextData.Reference;
    }
  }
  else {
    pFVar2 = UEnum::GetDisplayValueAsText<enum_ECameraVariableType>
                       (&local_68,param_1->ParameterType);
    pFVar3 = FText::FromString(&local_58,(FString *)&param_1->_padding_);
    UEnum::GetDisplayValueAsText<enum_ECameraVariableType>(&local_98,Float);
    pFVar4 = FText::FromName(&local_48,(FName *)&param_1->_padding_);
    local_res10 = *(FName *)(param_1->_padding_ + 0x18);
    pFVar5 = FText::FromName(&local_38,&local_res10);
    pFVar6 = FText::AsLocalizable_Advanced_LocText
                       (&local_78,L"CameraObjectInterfaceBuilder",L"BlendableParameterTypeMismatch",
                        L"Camera node parameter \'{0}.{1}\' of type {2} is not compatible with camera rig parameter \'{3}\' of type {4}"
                       );
    pFVar7 = FTextFormat::FTextFormat((FTextFormat *)&local_28,pFVar6,Default);
    pFVar2 = FText::Format<FText,FText,FText,FText,FText>
                       (&local_88,pFVar7,pFVar5,pFVar4,&local_98,pFVar3,pFVar2);
    FCameraBuildLog::AddMessage(this->Owner->BuildLog,Error,(UObject *)0x0,pFVar2);
    TVar8.Reference = local_78.TextData.Reference;
    if (local_88.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
      TVar8.Reference = local_78.TextData.Reference;
    }
  }
  if (TVar8.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*TVar8.Reference + 0x10))();
  }
  return false;
}

// CheckIfParameterCanBeOverridden<FInteger32CameraParameter> @ 14d53a790

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
UE::Cameras::Internal::FInterfaceParameterBindingBuilder::
CheckIfParameterCanBeOverridden<FInteger32CameraParameter>
          (FInterfaceParameterBindingBuilder *this,UCameraObjectInterfaceBlendableParameter *param_1
          ,FInteger32CameraParameter *param_2)

{
  bool bVar1;
  FText *pFVar2;
  FText *pFVar3;
  FText *pFVar4;
  FText *pFVar5;
  FText *pFVar6;
  FTextFormat *pFVar7;
  TRefCountPtr<ITextData> TVar8;
  FName local_res10;
  FText local_98;
  FText local_88;
  FText local_78;
  FText local_68;
  FText local_58;
  FText local_48;
  FText local_38;
  FText local_28;
  
  if (param_1->ParameterType == Integer32) {
    if ((param_2->Variable).field0_0x0.DebugPtr == (UInteger32CameraVariable *)0x0) {
      bVar1 = CheckIfParameterCanBeOverridden(this,param_1,&param_2->VariableID);
      return bVar1;
    }
    pFVar2 = FText::FromName(&local_28,(FName *)&param_1->_padding_);
    local_res10 = *(FName *)(param_1->_padding_ + 0x18);
    pFVar3 = FText::FromName(&local_38,&local_res10);
    pFVar4 = FText::AsLocalizable_Advanced_LocText
                       (&local_88,L"CameraObjectInterfaceBuilder",L"BlendableParameterDrivenTwice",
                        L"Camera node parameter \'{0}.{1}\' is both exposed and driven by a variable!"
                       );
    pFVar7 = FTextFormat::FTextFormat((FTextFormat *)&local_48,pFVar4,Default);
    pFVar2 = FText::Format<FText,FText>(&local_78,pFVar7,pFVar3,pFVar2);
    FCameraBuildLog::AddMessage(this->Owner->BuildLog,Error,(UObject *)0x0,pFVar2);
    TVar8.Reference = local_88.TextData.Reference;
    if (local_78.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      TVar8.Reference = local_88.TextData.Reference;
    }
  }
  else {
    pFVar2 = UEnum::GetDisplayValueAsText<enum_ECameraVariableType>
                       (&local_68,param_1->ParameterType);
    pFVar3 = FText::FromString(&local_58,(FString *)&param_1->_padding_);
    UEnum::GetDisplayValueAsText<enum_ECameraVariableType>(&local_98,Integer32);
    pFVar4 = FText::FromName(&local_48,(FName *)&param_1->_padding_);
    local_res10 = *(FName *)(param_1->_padding_ + 0x18);
    pFVar5 = FText::FromName(&local_38,&local_res10);
    pFVar6 = FText::AsLocalizable_Advanced_LocText
                       (&local_78,L"CameraObjectInterfaceBuilder",L"BlendableParameterTypeMismatch",
                        L"Camera node parameter \'{0}.{1}\' of type {2} is not compatible with camera rig parameter \'{3}\' of type {4}"
                       );
    pFVar7 = FTextFormat::FTextFormat((FTextFormat *)&local_28,pFVar6,Default);
    pFVar2 = FText::Format<FText,FText,FText,FText,FText>
                       (&local_88,pFVar7,pFVar5,pFVar4,&local_98,pFVar3,pFVar2);
    FCameraBuildLog::AddMessage(this->Owner->BuildLog,Error,(UObject *)0x0,pFVar2);
    TVar8.Reference = local_78.TextData.Reference;
    if (local_88.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
      TVar8.Reference = local_78.TextData.Reference;
    }
  }
  if (TVar8.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*TVar8.Reference + 0x10))();
  }
  return false;
}

// CheckIfParameterCanBeOverridden<FInteger32CameraVariableReference> @ 14d53a9b0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
UE::Cameras::Internal::FInterfaceParameterBindingBuilder::
CheckIfParameterCanBeOverridden<FInteger32CameraVariableReference>
          (FInterfaceParameterBindingBuilder *this,UCameraObjectInterfaceBlendableParameter *param_1
          ,FInteger32CameraVariableReference *param_2)

{
  bool bVar1;
  FText *pFVar2;
  FText *pFVar3;
  FText *pFVar4;
  FText *pFVar5;
  FText *pFVar6;
  FTextFormat *pFVar7;
  TRefCountPtr<ITextData> TVar8;
  FName local_res10;
  FText local_98;
  FText local_88;
  FText local_78;
  FText local_68;
  FText local_58;
  FText local_48;
  FText local_38;
  FText local_28;
  
  if (param_1->ParameterType == Integer32) {
    if ((param_2->Variable).field0_0x0.DebugPtr == (UInteger32CameraVariable *)0x0) {
      bVar1 = CheckIfParameterCanBeOverridden(this,param_1,&param_2->VariableID);
      return bVar1;
    }
    pFVar2 = FText::FromName(&local_28,(FName *)&param_1->_padding_);
    local_res10 = *(FName *)(param_1->_padding_ + 0x18);
    pFVar3 = FText::FromName(&local_38,&local_res10);
    pFVar4 = FText::AsLocalizable_Advanced_LocText
                       (&local_88,L"CameraObjectInterfaceBuilder",L"BlendableParameterDrivenTwice",
                        L"Camera node parameter \'{0}.{1}\' is both exposed and driven by a variable!"
                       );
    pFVar7 = FTextFormat::FTextFormat((FTextFormat *)&local_48,pFVar4,Default);
    pFVar2 = FText::Format<FText,FText>(&local_78,pFVar7,pFVar3,pFVar2);
    FCameraBuildLog::AddMessage(this->Owner->BuildLog,Error,(UObject *)0x0,pFVar2);
    TVar8.Reference = local_88.TextData.Reference;
    if (local_78.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      TVar8.Reference = local_88.TextData.Reference;
    }
  }
  else {
    pFVar2 = UEnum::GetDisplayValueAsText<enum_ECameraVariableType>
                       (&local_68,param_1->ParameterType);
    pFVar3 = FText::FromString(&local_58,(FString *)&param_1->_padding_);
    UEnum::GetDisplayValueAsText<enum_ECameraVariableType>(&local_98,Integer32);
    pFVar4 = FText::FromName(&local_48,(FName *)&param_1->_padding_);
    local_res10 = *(FName *)(param_1->_padding_ + 0x18);
    pFVar5 = FText::FromName(&local_38,&local_res10);
    pFVar6 = FText::AsLocalizable_Advanced_LocText
                       (&local_78,L"CameraObjectInterfaceBuilder",L"BlendableParameterTypeMismatch",
                        L"Camera node parameter \'{0}.{1}\' of type {2} is not compatible with camera rig parameter \'{3}\' of type {4}"
                       );
    pFVar7 = FTextFormat::FTextFormat((FTextFormat *)&local_28,pFVar6,Default);
    pFVar2 = FText::Format<FText,FText,FText,FText,FText>
                       (&local_88,pFVar7,pFVar5,pFVar4,&local_98,pFVar3,pFVar2);
    FCameraBuildLog::AddMessage(this->Owner->BuildLog,Error,(UObject *)0x0,pFVar2);
    TVar8.Reference = local_78.TextData.Reference;
    if (local_88.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
      TVar8.Reference = local_78.TextData.Reference;
    }
  }
  if (TVar8.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*TVar8.Reference + 0x10))();
  }
  return false;
}

// CheckIfParameterCanBeOverridden<FRotator3dCameraParameter> @ 14d53abd0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
UE::Cameras::Internal::FInterfaceParameterBindingBuilder::
CheckIfParameterCanBeOverridden<FRotator3dCameraParameter>
          (FInterfaceParameterBindingBuilder *this,UCameraObjectInterfaceBlendableParameter *param_1
          ,FRotator3dCameraParameter *param_2)

{
  bool bVar1;
  FText *pFVar2;
  FText *pFVar3;
  FText *pFVar4;
  FText *pFVar5;
  FText *pFVar6;
  FTextFormat *pFVar7;
  TRefCountPtr<ITextData> TVar8;
  FName local_res10;
  FText local_98;
  FText local_88;
  FText local_78;
  FText local_68;
  FText local_58;
  FText local_48;
  FText local_38;
  FText local_28;
  
  if (param_1->ParameterType == Rotator3d) {
    if ((param_2->Variable).field0_0x0.DebugPtr == (URotator3dCameraVariable *)0x0) {
      bVar1 = CheckIfParameterCanBeOverridden(this,param_1,&param_2->VariableID);
      return bVar1;
    }
    pFVar2 = FText::FromName(&local_28,(FName *)&param_1->_padding_);
    local_res10 = *(FName *)(param_1->_padding_ + 0x18);
    pFVar3 = FText::FromName(&local_38,&local_res10);
    pFVar4 = FText::AsLocalizable_Advanced_LocText
                       (&local_88,L"CameraObjectInterfaceBuilder",L"BlendableParameterDrivenTwice",
                        L"Camera node parameter \'{0}.{1}\' is both exposed and driven by a variable!"
                       );
    pFVar7 = FTextFormat::FTextFormat((FTextFormat *)&local_48,pFVar4,Default);
    pFVar2 = FText::Format<FText,FText>(&local_78,pFVar7,pFVar3,pFVar2);
    FCameraBuildLog::AddMessage(this->Owner->BuildLog,Error,(UObject *)0x0,pFVar2);
    TVar8.Reference = local_88.TextData.Reference;
    if (local_78.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      TVar8.Reference = local_88.TextData.Reference;
    }
  }
  else {
    pFVar2 = UEnum::GetDisplayValueAsText<enum_ECameraVariableType>
                       (&local_68,param_1->ParameterType);
    pFVar3 = FText::FromString(&local_58,(FString *)&param_1->_padding_);
    UEnum::GetDisplayValueAsText<enum_ECameraVariableType>(&local_98,Rotator3d);
    pFVar4 = FText::FromName(&local_48,(FName *)&param_1->_padding_);
    local_res10 = *(FName *)(param_1->_padding_ + 0x18);
    pFVar5 = FText::FromName(&local_38,&local_res10);
    pFVar6 = FText::AsLocalizable_Advanced_LocText
                       (&local_78,L"CameraObjectInterfaceBuilder",L"BlendableParameterTypeMismatch",
                        L"Camera node parameter \'{0}.{1}\' of type {2} is not compatible with camera rig parameter \'{3}\' of type {4}"
                       );
    pFVar7 = FTextFormat::FTextFormat((FTextFormat *)&local_28,pFVar6,Default);
    pFVar2 = FText::Format<FText,FText,FText,FText,FText>
                       (&local_88,pFVar7,pFVar5,pFVar4,&local_98,pFVar3,pFVar2);
    FCameraBuildLog::AddMessage(this->Owner->BuildLog,Error,(UObject *)0x0,pFVar2);
    TVar8.Reference = local_78.TextData.Reference;
    if (local_88.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
      TVar8.Reference = local_78.TextData.Reference;
    }
  }
  if (TVar8.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*TVar8.Reference + 0x10))();
  }
  return false;
}

// CheckIfParameterCanBeOverridden<FRotator3dCameraVariableReference> @ 14d53adf0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
UE::Cameras::Internal::FInterfaceParameterBindingBuilder::
CheckIfParameterCanBeOverridden<FRotator3dCameraVariableReference>
          (FInterfaceParameterBindingBuilder *this,UCameraObjectInterfaceBlendableParameter *param_1
          ,FRotator3dCameraVariableReference *param_2)

{
  bool bVar1;
  FText *pFVar2;
  FText *pFVar3;
  FText *pFVar4;
  FText *pFVar5;
  FText *pFVar6;
  FTextFormat *pFVar7;
  TRefCountPtr<ITextData> TVar8;
  FName local_res10;
  FText local_98;
  FText local_88;
  FText local_78;
  FText local_68;
  FText local_58;
  FText local_48;
  FText local_38;
  FText local_28;
  
  if (param_1->ParameterType == Rotator3d) {
    if ((param_2->Variable).field0_0x0.DebugPtr == (URotator3dCameraVariable *)0x0) {
      bVar1 = CheckIfParameterCanBeOverridden(this,param_1,&param_2->VariableID);
      return bVar1;
    }
    pFVar2 = FText::FromName(&local_28,(FName *)&param_1->_padding_);
    local_res10 = *(FName *)(param_1->_padding_ + 0x18);
    pFVar3 = FText::FromName(&local_38,&local_res10);
    pFVar4 = FText::AsLocalizable_Advanced_LocText
                       (&local_88,L"CameraObjectInterfaceBuilder",L"BlendableParameterDrivenTwice",
                        L"Camera node parameter \'{0}.{1}\' is both exposed and driven by a variable!"
                       );
    pFVar7 = FTextFormat::FTextFormat((FTextFormat *)&local_48,pFVar4,Default);
    pFVar2 = FText::Format<FText,FText>(&local_78,pFVar7,pFVar3,pFVar2);
    FCameraBuildLog::AddMessage(this->Owner->BuildLog,Error,(UObject *)0x0,pFVar2);
    TVar8.Reference = local_88.TextData.Reference;
    if (local_78.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      TVar8.Reference = local_88.TextData.Reference;
    }
  }
  else {
    pFVar2 = UEnum::GetDisplayValueAsText<enum_ECameraVariableType>
                       (&local_68,param_1->ParameterType);
    pFVar3 = FText::FromString(&local_58,(FString *)&param_1->_padding_);
    UEnum::GetDisplayValueAsText<enum_ECameraVariableType>(&local_98,Rotator3d);
    pFVar4 = FText::FromName(&local_48,(FName *)&param_1->_padding_);
    local_res10 = *(FName *)(param_1->_padding_ + 0x18);
    pFVar5 = FText::FromName(&local_38,&local_res10);
    pFVar6 = FText::AsLocalizable_Advanced_LocText
                       (&local_78,L"CameraObjectInterfaceBuilder",L"BlendableParameterTypeMismatch",
                        L"Camera node parameter \'{0}.{1}\' of type {2} is not compatible with camera rig parameter \'{3}\' of type {4}"
                       );
    pFVar7 = FTextFormat::FTextFormat((FTextFormat *)&local_28,pFVar6,Default);
    pFVar2 = FText::Format<FText,FText,FText,FText,FText>
                       (&local_88,pFVar7,pFVar5,pFVar4,&local_98,pFVar3,pFVar2);
    FCameraBuildLog::AddMessage(this->Owner->BuildLog,Error,(UObject *)0x0,pFVar2);
    TVar8.Reference = local_78.TextData.Reference;
    if (local_88.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
      TVar8.Reference = local_78.TextData.Reference;
    }
  }
  if (TVar8.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*TVar8.Reference + 0x10))();
  }
  return false;
}

// CheckIfParameterCanBeOverridden<FRotator3fCameraParameter> @ 14d53b010

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
UE::Cameras::Internal::FInterfaceParameterBindingBuilder::
CheckIfParameterCanBeOverridden<FRotator3fCameraParameter>
          (FInterfaceParameterBindingBuilder *this,UCameraObjectInterfaceBlendableParameter *param_1
          ,FRotator3fCameraParameter *param_2)

{
  bool bVar1;
  FText *pFVar2;
  FText *pFVar3;
  FText *pFVar4;
  FText *pFVar5;
  FText *pFVar6;
  FTextFormat *pFVar7;
  TRefCountPtr<ITextData> TVar8;
  FName local_res10;
  FText local_98;
  FText local_88;
  FText local_78;
  FText local_68;
  FText local_58;
  FText local_48;
  FText local_38;
  FText local_28;
  
  if (param_1->ParameterType == Rotator3f) {
    if ((param_2->Variable).field0_0x0.DebugPtr == (URotator3fCameraVariable *)0x0) {
      bVar1 = CheckIfParameterCanBeOverridden(this,param_1,&param_2->VariableID);
      return bVar1;
    }
    pFVar2 = FText::FromName(&local_28,(FName *)&param_1->_padding_);
    local_res10 = *(FName *)(param_1->_padding_ + 0x18);
    pFVar3 = FText::FromName(&local_38,&local_res10);
    pFVar4 = FText::AsLocalizable_Advanced_LocText
                       (&local_88,L"CameraObjectInterfaceBuilder",L"BlendableParameterDrivenTwice",
                        L"Camera node parameter \'{0}.{1}\' is both exposed and driven by a variable!"
                       );
    pFVar7 = FTextFormat::FTextFormat((FTextFormat *)&local_48,pFVar4,Default);
    pFVar2 = FText::Format<FText,FText>(&local_78,pFVar7,pFVar3,pFVar2);
    FCameraBuildLog::AddMessage(this->Owner->BuildLog,Error,(UObject *)0x0,pFVar2);
    TVar8.Reference = local_88.TextData.Reference;
    if (local_78.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      TVar8.Reference = local_88.TextData.Reference;
    }
  }
  else {
    pFVar2 = UEnum::GetDisplayValueAsText<enum_ECameraVariableType>
                       (&local_68,param_1->ParameterType);
    pFVar3 = FText::FromString(&local_58,(FString *)&param_1->_padding_);
    UEnum::GetDisplayValueAsText<enum_ECameraVariableType>(&local_98,Rotator3f);
    pFVar4 = FText::FromName(&local_48,(FName *)&param_1->_padding_);
    local_res10 = *(FName *)(param_1->_padding_ + 0x18);
    pFVar5 = FText::FromName(&local_38,&local_res10);
    pFVar6 = FText::AsLocalizable_Advanced_LocText
                       (&local_78,L"CameraObjectInterfaceBuilder",L"BlendableParameterTypeMismatch",
                        L"Camera node parameter \'{0}.{1}\' of type {2} is not compatible with camera rig parameter \'{3}\' of type {4}"
                       );
    pFVar7 = FTextFormat::FTextFormat((FTextFormat *)&local_28,pFVar6,Default);
    pFVar2 = FText::Format<FText,FText,FText,FText,FText>
                       (&local_88,pFVar7,pFVar5,pFVar4,&local_98,pFVar3,pFVar2);
    FCameraBuildLog::AddMessage(this->Owner->BuildLog,Error,(UObject *)0x0,pFVar2);
    TVar8.Reference = local_78.TextData.Reference;
    if (local_88.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
      TVar8.Reference = local_78.TextData.Reference;
    }
  }
  if (TVar8.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*TVar8.Reference + 0x10))();
  }
  return false;
}

// CheckIfParameterCanBeOverridden<FRotator3fCameraVariableReference> @ 14d53b230

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
UE::Cameras::Internal::FInterfaceParameterBindingBuilder::
CheckIfParameterCanBeOverridden<FRotator3fCameraVariableReference>
          (FInterfaceParameterBindingBuilder *this,UCameraObjectInterfaceBlendableParameter *param_1
          ,FRotator3fCameraVariableReference *param_2)

{
  bool bVar1;
  FText *pFVar2;
  FText *pFVar3;
  FText *pFVar4;
  FText *pFVar5;
  FText *pFVar6;
  FTextFormat *pFVar7;
  TRefCountPtr<ITextData> TVar8;
  FName local_res10;
  FText local_98;
  FText local_88;
  FText local_78;
  FText local_68;
  FText local_58;
  FText local_48;
  FText local_38;
  FText local_28;
  
  if (param_1->ParameterType == Rotator3f) {
    if ((param_2->Variable).field0_0x0.DebugPtr == (URotator3fCameraVariable *)0x0) {
      bVar1 = CheckIfParameterCanBeOverridden(this,param_1,&param_2->VariableID);
      return bVar1;
    }
    pFVar2 = FText::FromName(&local_28,(FName *)&param_1->_padding_);
    local_res10 = *(FName *)(param_1->_padding_ + 0x18);
    pFVar3 = FText::FromName(&local_38,&local_res10);
    pFVar4 = FText::AsLocalizable_Advanced_LocText
                       (&local_88,L"CameraObjectInterfaceBuilder",L"BlendableParameterDrivenTwice",
                        L"Camera node parameter \'{0}.{1}\' is both exposed and driven by a variable!"
                       );
    pFVar7 = FTextFormat::FTextFormat((FTextFormat *)&local_48,pFVar4,Default);
    pFVar2 = FText::Format<FText,FText>(&local_78,pFVar7,pFVar3,pFVar2);
    FCameraBuildLog::AddMessage(this->Owner->BuildLog,Error,(UObject *)0x0,pFVar2);
    TVar8.Reference = local_88.TextData.Reference;
    if (local_78.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      TVar8.Reference = local_88.TextData.Reference;
    }
  }
  else {
    pFVar2 = UEnum::GetDisplayValueAsText<enum_ECameraVariableType>
                       (&local_68,param_1->ParameterType);
    pFVar3 = FText::FromString(&local_58,(FString *)&param_1->_padding_);
    UEnum::GetDisplayValueAsText<enum_ECameraVariableType>(&local_98,Rotator3f);
    pFVar4 = FText::FromName(&local_48,(FName *)&param_1->_padding_);
    local_res10 = *(FName *)(param_1->_padding_ + 0x18);
    pFVar5 = FText::FromName(&local_38,&local_res10);
    pFVar6 = FText::AsLocalizable_Advanced_LocText
                       (&local_78,L"CameraObjectInterfaceBuilder",L"BlendableParameterTypeMismatch",
                        L"Camera node parameter \'{0}.{1}\' of type {2} is not compatible with camera rig parameter \'{3}\' of type {4}"
                       );
    pFVar7 = FTextFormat::FTextFormat((FTextFormat *)&local_28,pFVar6,Default);
    pFVar2 = FText::Format<FText,FText,FText,FText,FText>
                       (&local_88,pFVar7,pFVar5,pFVar4,&local_98,pFVar3,pFVar2);
    FCameraBuildLog::AddMessage(this->Owner->BuildLog,Error,(UObject *)0x0,pFVar2);
    TVar8.Reference = local_78.TextData.Reference;
    if (local_88.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
      TVar8.Reference = local_78.TextData.Reference;
    }
  }
  if (TVar8.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*TVar8.Reference + 0x10))();
  }
  return false;
}

// CheckIfParameterCanBeOverridden<FTransform3dCameraParameter> @ 14d53b450

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
UE::Cameras::Internal::FInterfaceParameterBindingBuilder::
CheckIfParameterCanBeOverridden<FTransform3dCameraParameter>
          (FInterfaceParameterBindingBuilder *this,UCameraObjectInterfaceBlendableParameter *param_1
          ,FTransform3dCameraParameter *param_2)

{
  bool bVar1;
  FText *pFVar2;
  FText *pFVar3;
  FText *pFVar4;
  FText *pFVar5;
  FText *pFVar6;
  FTextFormat *pFVar7;
  TRefCountPtr<ITextData> TVar8;
  FName local_res10;
  FText local_98;
  FText local_88;
  FText local_78;
  FText local_68;
  FText local_58;
  FText local_48;
  FText local_38;
  FText local_28;
  
  if (param_1->ParameterType == Transform3d) {
    if ((param_2->Variable).field0_0x0.DebugPtr == (UTransform3dCameraVariable *)0x0) {
      bVar1 = CheckIfParameterCanBeOverridden(this,param_1,&param_2->VariableID);
      return bVar1;
    }
    pFVar2 = FText::FromName(&local_28,(FName *)&param_1->_padding_);
    local_res10 = *(FName *)(param_1->_padding_ + 0x18);
    pFVar3 = FText::FromName(&local_38,&local_res10);
    pFVar4 = FText::AsLocalizable_Advanced_LocText
                       (&local_88,L"CameraObjectInterfaceBuilder",L"BlendableParameterDrivenTwice",
                        L"Camera node parameter \'{0}.{1}\' is both exposed and driven by a variable!"
                       );
    pFVar7 = FTextFormat::FTextFormat((FTextFormat *)&local_48,pFVar4,Default);
    pFVar2 = FText::Format<FText,FText>(&local_78,pFVar7,pFVar3,pFVar2);
    FCameraBuildLog::AddMessage(this->Owner->BuildLog,Error,(UObject *)0x0,pFVar2);
    TVar8.Reference = local_88.TextData.Reference;
    if (local_78.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      TVar8.Reference = local_88.TextData.Reference;
    }
  }
  else {
    pFVar2 = UEnum::GetDisplayValueAsText<enum_ECameraVariableType>
                       (&local_68,param_1->ParameterType);
    pFVar3 = FText::FromString(&local_58,(FString *)&param_1->_padding_);
    UEnum::GetDisplayValueAsText<enum_ECameraVariableType>(&local_98,Transform3d);
    pFVar4 = FText::FromName(&local_48,(FName *)&param_1->_padding_);
    local_res10 = *(FName *)(param_1->_padding_ + 0x18);
    pFVar5 = FText::FromName(&local_38,&local_res10);
    pFVar6 = FText::AsLocalizable_Advanced_LocText
                       (&local_78,L"CameraObjectInterfaceBuilder",L"BlendableParameterTypeMismatch",
                        L"Camera node parameter \'{0}.{1}\' of type {2} is not compatible with camera rig parameter \'{3}\' of type {4}"
                       );
    pFVar7 = FTextFormat::FTextFormat((FTextFormat *)&local_28,pFVar6,Default);
    pFVar2 = FText::Format<FText,FText,FText,FText,FText>
                       (&local_88,pFVar7,pFVar5,pFVar4,&local_98,pFVar3,pFVar2);
    FCameraBuildLog::AddMessage(this->Owner->BuildLog,Error,(UObject *)0x0,pFVar2);
    TVar8.Reference = local_78.TextData.Reference;
    if (local_88.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
      TVar8.Reference = local_78.TextData.Reference;
    }
  }
  if (TVar8.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*TVar8.Reference + 0x10))();
  }
  return false;
}

// CheckIfParameterCanBeOverridden<FTransform3dCameraVariableReference> @ 14d53b670

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
UE::Cameras::Internal::FInterfaceParameterBindingBuilder::
CheckIfParameterCanBeOverridden<FTransform3dCameraVariableReference>
          (FInterfaceParameterBindingBuilder *this,UCameraObjectInterfaceBlendableParameter *param_1
          ,FTransform3dCameraVariableReference *param_2)

{
  bool bVar1;
  FText *pFVar2;
  FText *pFVar3;
  FText *pFVar4;
  FText *pFVar5;
  FText *pFVar6;
  FTextFormat *pFVar7;
  TRefCountPtr<ITextData> TVar8;
  FName local_res10;
  FText local_98;
  FText local_88;
  FText local_78;
  FText local_68;
  FText local_58;
  FText local_48;
  FText local_38;
  FText local_28;
  
  if (param_1->ParameterType == Transform3d) {
    if ((param_2->Variable).field0_0x0.DebugPtr == (UTransform3dCameraVariable *)0x0) {
      bVar1 = CheckIfParameterCanBeOverridden(this,param_1,&param_2->VariableID);
      return bVar1;
    }
    pFVar2 = FText::FromName(&local_28,(FName *)&param_1->_padding_);
    local_res10 = *(FName *)(param_1->_padding_ + 0x18);
    pFVar3 = FText::FromName(&local_38,&local_res10);
    pFVar4 = FText::AsLocalizable_Advanced_LocText
                       (&local_88,L"CameraObjectInterfaceBuilder",L"BlendableParameterDrivenTwice",
                        L"Camera node parameter \'{0}.{1}\' is both exposed and driven by a variable!"
                       );
    pFVar7 = FTextFormat::FTextFormat((FTextFormat *)&local_48,pFVar4,Default);
    pFVar2 = FText::Format<FText,FText>(&local_78,pFVar7,pFVar3,pFVar2);
    FCameraBuildLog::AddMessage(this->Owner->BuildLog,Error,(UObject *)0x0,pFVar2);
    TVar8.Reference = local_88.TextData.Reference;
    if (local_78.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      TVar8.Reference = local_88.TextData.Reference;
    }
  }
  else {
    pFVar2 = UEnum::GetDisplayValueAsText<enum_ECameraVariableType>
                       (&local_68,param_1->ParameterType);
    pFVar3 = FText::FromString(&local_58,(FString *)&param_1->_padding_);
    UEnum::GetDisplayValueAsText<enum_ECameraVariableType>(&local_98,Transform3d);
    pFVar4 = FText::FromName(&local_48,(FName *)&param_1->_padding_);
    local_res10 = *(FName *)(param_1->_padding_ + 0x18);
    pFVar5 = FText::FromName(&local_38,&local_res10);
    pFVar6 = FText::AsLocalizable_Advanced_LocText
                       (&local_78,L"CameraObjectInterfaceBuilder",L"BlendableParameterTypeMismatch",
                        L"Camera node parameter \'{0}.{1}\' of type {2} is not compatible with camera rig parameter \'{3}\' of type {4}"
                       );
    pFVar7 = FTextFormat::FTextFormat((FTextFormat *)&local_28,pFVar6,Default);
    pFVar2 = FText::Format<FText,FText,FText,FText,FText>
                       (&local_88,pFVar7,pFVar5,pFVar4,&local_98,pFVar3,pFVar2);
    FCameraBuildLog::AddMessage(this->Owner->BuildLog,Error,(UObject *)0x0,pFVar2);
    TVar8.Reference = local_78.TextData.Reference;
    if (local_88.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
      TVar8.Reference = local_78.TextData.Reference;
    }
  }
  if (TVar8.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*TVar8.Reference + 0x10))();
  }
  return false;
}

// CheckIfParameterCanBeOverridden<FTransform3fCameraParameter> @ 14d53b890

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
UE::Cameras::Internal::FInterfaceParameterBindingBuilder::
CheckIfParameterCanBeOverridden<FTransform3fCameraParameter>
          (FInterfaceParameterBindingBuilder *this,UCameraObjectInterfaceBlendableParameter *param_1
          ,FTransform3fCameraParameter *param_2)

{
  bool bVar1;
  FText *pFVar2;
  FText *pFVar3;
  FText *pFVar4;
  FText *pFVar5;
  FText *pFVar6;
  FTextFormat *pFVar7;
  TRefCountPtr<ITextData> TVar8;
  FName local_res10;
  FText local_98;
  FText local_88;
  FText local_78;
  FText local_68;
  FText local_58;
  FText local_48;
  FText local_38;
  FText local_28;
  
  if (param_1->ParameterType == Transform3f) {
    if ((param_2->Variable).field0_0x0.DebugPtr == (UTransform3fCameraVariable *)0x0) {
      bVar1 = CheckIfParameterCanBeOverridden(this,param_1,&param_2->VariableID);
      return bVar1;
    }
    pFVar2 = FText::FromName(&local_28,(FName *)&param_1->_padding_);
    local_res10 = *(FName *)(param_1->_padding_ + 0x18);
    pFVar3 = FText::FromName(&local_38,&local_res10);
    pFVar4 = FText::AsLocalizable_Advanced_LocText
                       (&local_88,L"CameraObjectInterfaceBuilder",L"BlendableParameterDrivenTwice",
                        L"Camera node parameter \'{0}.{1}\' is both exposed and driven by a variable!"
                       );
    pFVar7 = FTextFormat::FTextFormat((FTextFormat *)&local_48,pFVar4,Default);
    pFVar2 = FText::Format<FText,FText>(&local_78,pFVar7,pFVar3,pFVar2);
    FCameraBuildLog::AddMessage(this->Owner->BuildLog,Error,(UObject *)0x0,pFVar2);
    TVar8.Reference = local_88.TextData.Reference;
    if (local_78.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      TVar8.Reference = local_88.TextData.Reference;
    }
  }
  else {
    pFVar2 = UEnum::GetDisplayValueAsText<enum_ECameraVariableType>
                       (&local_68,param_1->ParameterType);
    pFVar3 = FText::FromString(&local_58,(FString *)&param_1->_padding_);
    UEnum::GetDisplayValueAsText<enum_ECameraVariableType>(&local_98,Transform3f);
    pFVar4 = FText::FromName(&local_48,(FName *)&param_1->_padding_);
    local_res10 = *(FName *)(param_1->_padding_ + 0x18);
    pFVar5 = FText::FromName(&local_38,&local_res10);
    pFVar6 = FText::AsLocalizable_Advanced_LocText
                       (&local_78,L"CameraObjectInterfaceBuilder",L"BlendableParameterTypeMismatch",
                        L"Camera node parameter \'{0}.{1}\' of type {2} is not compatible with camera rig parameter \'{3}\' of type {4}"
                       );
    pFVar7 = FTextFormat::FTextFormat((FTextFormat *)&local_28,pFVar6,Default);
    pFVar2 = FText::Format<FText,FText,FText,FText,FText>
                       (&local_88,pFVar7,pFVar5,pFVar4,&local_98,pFVar3,pFVar2);
    FCameraBuildLog::AddMessage(this->Owner->BuildLog,Error,(UObject *)0x0,pFVar2);
    TVar8.Reference = local_78.TextData.Reference;
    if (local_88.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
      TVar8.Reference = local_78.TextData.Reference;
    }
  }
  if (TVar8.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*TVar8.Reference + 0x10))();
  }
  return false;
}

// CheckIfParameterCanBeOverridden<FTransform3fCameraVariableReference> @ 14d53bab0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
UE::Cameras::Internal::FInterfaceParameterBindingBuilder::
CheckIfParameterCanBeOverridden<FTransform3fCameraVariableReference>
          (FInterfaceParameterBindingBuilder *this,UCameraObjectInterfaceBlendableParameter *param_1
          ,FTransform3fCameraVariableReference *param_2)

{
  bool bVar1;
  FText *pFVar2;
  FText *pFVar3;
  FText *pFVar4;
  FText *pFVar5;
  FText *pFVar6;
  FTextFormat *pFVar7;
  TRefCountPtr<ITextData> TVar8;
  FName local_res10;
  FText local_98;
  FText local_88;
  FText local_78;
  FText local_68;
  FText local_58;
  FText local_48;
  FText local_38;
  FText local_28;
  
  if (param_1->ParameterType == Transform3f) {
    if ((param_2->Variable).field0_0x0.DebugPtr == (UTransform3fCameraVariable *)0x0) {
      bVar1 = CheckIfParameterCanBeOverridden(this,param_1,&param_2->VariableID);
      return bVar1;
    }
    pFVar2 = FText::FromName(&local_28,(FName *)&param_1->_padding_);
    local_res10 = *(FName *)(param_1->_padding_ + 0x18);
    pFVar3 = FText::FromName(&local_38,&local_res10);
    pFVar4 = FText::AsLocalizable_Advanced_LocText
                       (&local_88,L"CameraObjectInterfaceBuilder",L"BlendableParameterDrivenTwice",
                        L"Camera node parameter \'{0}.{1}\' is both exposed and driven by a variable!"
                       );
    pFVar7 = FTextFormat::FTextFormat((FTextFormat *)&local_48,pFVar4,Default);
    pFVar2 = FText::Format<FText,FText>(&local_78,pFVar7,pFVar3,pFVar2);
    FCameraBuildLog::AddMessage(this->Owner->BuildLog,Error,(UObject *)0x0,pFVar2);
    TVar8.Reference = local_88.TextData.Reference;
    if (local_78.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      TVar8.Reference = local_88.TextData.Reference;
    }
  }
  else {
    pFVar2 = UEnum::GetDisplayValueAsText<enum_ECameraVariableType>
                       (&local_68,param_1->ParameterType);
    pFVar3 = FText::FromString(&local_58,(FString *)&param_1->_padding_);
    UEnum::GetDisplayValueAsText<enum_ECameraVariableType>(&local_98,Transform3f);
    pFVar4 = FText::FromName(&local_48,(FName *)&param_1->_padding_);
    local_res10 = *(FName *)(param_1->_padding_ + 0x18);
    pFVar5 = FText::FromName(&local_38,&local_res10);
    pFVar6 = FText::AsLocalizable_Advanced_LocText
                       (&local_78,L"CameraObjectInterfaceBuilder",L"BlendableParameterTypeMismatch",
                        L"Camera node parameter \'{0}.{1}\' of type {2} is not compatible with camera rig parameter \'{3}\' of type {4}"
                       );
    pFVar7 = FTextFormat::FTextFormat((FTextFormat *)&local_28,pFVar6,Default);
    pFVar2 = FText::Format<FText,FText,FText,FText,FText>
                       (&local_88,pFVar7,pFVar5,pFVar4,&local_98,pFVar3,pFVar2);
    FCameraBuildLog::AddMessage(this->Owner->BuildLog,Error,(UObject *)0x0,pFVar2);
    TVar8.Reference = local_78.TextData.Reference;
    if (local_88.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
      TVar8.Reference = local_78.TextData.Reference;
    }
  }
  if (TVar8.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*TVar8.Reference + 0x10))();
  }
  return false;
}

// CheckIfParameterCanBeOverridden<FVector2dCameraParameter> @ 14d53bcd0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
UE::Cameras::Internal::FInterfaceParameterBindingBuilder::
CheckIfParameterCanBeOverridden<FVector2dCameraParameter>
          (FInterfaceParameterBindingBuilder *this,UCameraObjectInterfaceBlendableParameter *param_1
          ,FVector2dCameraParameter *param_2)

{
  bool bVar1;
  FText *pFVar2;
  FText *pFVar3;
  FText *pFVar4;
  FText *pFVar5;
  FText *pFVar6;
  FTextFormat *pFVar7;
  TRefCountPtr<ITextData> TVar8;
  FName local_res10;
  FText local_98;
  FText local_88;
  FText local_78;
  FText local_68;
  FText local_58;
  FText local_48;
  FText local_38;
  FText local_28;
  
  if (param_1->ParameterType == Vector2d) {
    if ((param_2->Variable).field0_0x0.DebugPtr == (UVector2dCameraVariable *)0x0) {
      bVar1 = CheckIfParameterCanBeOverridden(this,param_1,&param_2->VariableID);
      return bVar1;
    }
    pFVar2 = FText::FromName(&local_28,(FName *)&param_1->_padding_);
    local_res10 = *(FName *)(param_1->_padding_ + 0x18);
    pFVar3 = FText::FromName(&local_38,&local_res10);
    pFVar4 = FText::AsLocalizable_Advanced_LocText
                       (&local_88,L"CameraObjectInterfaceBuilder",L"BlendableParameterDrivenTwice",
                        L"Camera node parameter \'{0}.{1}\' is both exposed and driven by a variable!"
                       );
    pFVar7 = FTextFormat::FTextFormat((FTextFormat *)&local_48,pFVar4,Default);
    pFVar2 = FText::Format<FText,FText>(&local_78,pFVar7,pFVar3,pFVar2);
    FCameraBuildLog::AddMessage(this->Owner->BuildLog,Error,(UObject *)0x0,pFVar2);
    TVar8.Reference = local_88.TextData.Reference;
    if (local_78.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      TVar8.Reference = local_88.TextData.Reference;
    }
  }
  else {
    pFVar2 = UEnum::GetDisplayValueAsText<enum_ECameraVariableType>
                       (&local_68,param_1->ParameterType);
    pFVar3 = FText::FromString(&local_58,(FString *)&param_1->_padding_);
    UEnum::GetDisplayValueAsText<enum_ECameraVariableType>(&local_98,Vector2d);
    pFVar4 = FText::FromName(&local_48,(FName *)&param_1->_padding_);
    local_res10 = *(FName *)(param_1->_padding_ + 0x18);
    pFVar5 = FText::FromName(&local_38,&local_res10);
    pFVar6 = FText::AsLocalizable_Advanced_LocText
                       (&local_78,L"CameraObjectInterfaceBuilder",L"BlendableParameterTypeMismatch",
                        L"Camera node parameter \'{0}.{1}\' of type {2} is not compatible with camera rig parameter \'{3}\' of type {4}"
                       );
    pFVar7 = FTextFormat::FTextFormat((FTextFormat *)&local_28,pFVar6,Default);
    pFVar2 = FText::Format<FText,FText,FText,FText,FText>
                       (&local_88,pFVar7,pFVar5,pFVar4,&local_98,pFVar3,pFVar2);
    FCameraBuildLog::AddMessage(this->Owner->BuildLog,Error,(UObject *)0x0,pFVar2);
    TVar8.Reference = local_78.TextData.Reference;
    if (local_88.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
      TVar8.Reference = local_78.TextData.Reference;
    }
  }
  if (TVar8.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*TVar8.Reference + 0x10))();
  }
  return false;
}

// CheckIfParameterCanBeOverridden<FVector2dCameraVariableReference> @ 14d53bef0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
UE::Cameras::Internal::FInterfaceParameterBindingBuilder::
CheckIfParameterCanBeOverridden<FVector2dCameraVariableReference>
          (FInterfaceParameterBindingBuilder *this,UCameraObjectInterfaceBlendableParameter *param_1
          ,FVector2dCameraVariableReference *param_2)

{
  bool bVar1;
  FText *pFVar2;
  FText *pFVar3;
  FText *pFVar4;
  FText *pFVar5;
  FText *pFVar6;
  FTextFormat *pFVar7;
  TRefCountPtr<ITextData> TVar8;
  FName local_res10;
  FText local_98;
  FText local_88;
  FText local_78;
  FText local_68;
  FText local_58;
  FText local_48;
  FText local_38;
  FText local_28;
  
  if (param_1->ParameterType == Vector2d) {
    if ((param_2->Variable).field0_0x0.DebugPtr == (UVector2dCameraVariable *)0x0) {
      bVar1 = CheckIfParameterCanBeOverridden(this,param_1,&param_2->VariableID);
      return bVar1;
    }
    pFVar2 = FText::FromName(&local_28,(FName *)&param_1->_padding_);
    local_res10 = *(FName *)(param_1->_padding_ + 0x18);
    pFVar3 = FText::FromName(&local_38,&local_res10);
    pFVar4 = FText::AsLocalizable_Advanced_LocText
                       (&local_88,L"CameraObjectInterfaceBuilder",L"BlendableParameterDrivenTwice",
                        L"Camera node parameter \'{0}.{1}\' is both exposed and driven by a variable!"
                       );
    pFVar7 = FTextFormat::FTextFormat((FTextFormat *)&local_48,pFVar4,Default);
    pFVar2 = FText::Format<FText,FText>(&local_78,pFVar7,pFVar3,pFVar2);
    FCameraBuildLog::AddMessage(this->Owner->BuildLog,Error,(UObject *)0x0,pFVar2);
    TVar8.Reference = local_88.TextData.Reference;
    if (local_78.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      TVar8.Reference = local_88.TextData.Reference;
    }
  }
  else {
    pFVar2 = UEnum::GetDisplayValueAsText<enum_ECameraVariableType>
                       (&local_68,param_1->ParameterType);
    pFVar3 = FText::FromString(&local_58,(FString *)&param_1->_padding_);
    UEnum::GetDisplayValueAsText<enum_ECameraVariableType>(&local_98,Vector2d);
    pFVar4 = FText::FromName(&local_48,(FName *)&param_1->_padding_);
    local_res10 = *(FName *)(param_1->_padding_ + 0x18);
    pFVar5 = FText::FromName(&local_38,&local_res10);
    pFVar6 = FText::AsLocalizable_Advanced_LocText
                       (&local_78,L"CameraObjectInterfaceBuilder",L"BlendableParameterTypeMismatch",
                        L"Camera node parameter \'{0}.{1}\' of type {2} is not compatible with camera rig parameter \'{3}\' of type {4}"
                       );
    pFVar7 = FTextFormat::FTextFormat((FTextFormat *)&local_28,pFVar6,Default);
    pFVar2 = FText::Format<FText,FText,FText,FText,FText>
                       (&local_88,pFVar7,pFVar5,pFVar4,&local_98,pFVar3,pFVar2);
    FCameraBuildLog::AddMessage(this->Owner->BuildLog,Error,(UObject *)0x0,pFVar2);
    TVar8.Reference = local_78.TextData.Reference;
    if (local_88.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
      TVar8.Reference = local_78.TextData.Reference;
    }
  }
  if (TVar8.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*TVar8.Reference + 0x10))();
  }
  return false;
}

// CheckIfParameterCanBeOverridden<FVector2fCameraParameter> @ 14d53c110

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
UE::Cameras::Internal::FInterfaceParameterBindingBuilder::
CheckIfParameterCanBeOverridden<FVector2fCameraParameter>
          (FInterfaceParameterBindingBuilder *this,UCameraObjectInterfaceBlendableParameter *param_1
          ,FVector2fCameraParameter *param_2)

{
  bool bVar1;
  FText *pFVar2;
  FText *pFVar3;
  FText *pFVar4;
  FText *pFVar5;
  FText *pFVar6;
  FTextFormat *pFVar7;
  TRefCountPtr<ITextData> TVar8;
  FName local_res10;
  FText local_98;
  FText local_88;
  FText local_78;
  FText local_68;
  FText local_58;
  FText local_48;
  FText local_38;
  FText local_28;
  
  if (param_1->ParameterType == Vector2f) {
    if ((param_2->Variable).field0_0x0.DebugPtr == (UVector2fCameraVariable *)0x0) {
      bVar1 = CheckIfParameterCanBeOverridden(this,param_1,&param_2->VariableID);
      return bVar1;
    }
    pFVar2 = FText::FromName(&local_28,(FName *)&param_1->_padding_);
    local_res10 = *(FName *)(param_1->_padding_ + 0x18);
    pFVar3 = FText::FromName(&local_38,&local_res10);
    pFVar4 = FText::AsLocalizable_Advanced_LocText
                       (&local_88,L"CameraObjectInterfaceBuilder",L"BlendableParameterDrivenTwice",
                        L"Camera node parameter \'{0}.{1}\' is both exposed and driven by a variable!"
                       );
    pFVar7 = FTextFormat::FTextFormat((FTextFormat *)&local_48,pFVar4,Default);
    pFVar2 = FText::Format<FText,FText>(&local_78,pFVar7,pFVar3,pFVar2);
    FCameraBuildLog::AddMessage(this->Owner->BuildLog,Error,(UObject *)0x0,pFVar2);
    TVar8.Reference = local_88.TextData.Reference;
    if (local_78.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      TVar8.Reference = local_88.TextData.Reference;
    }
  }
  else {
    pFVar2 = UEnum::GetDisplayValueAsText<enum_ECameraVariableType>
                       (&local_68,param_1->ParameterType);
    pFVar3 = FText::FromString(&local_58,(FString *)&param_1->_padding_);
    UEnum::GetDisplayValueAsText<enum_ECameraVariableType>(&local_98,Vector2f);
    pFVar4 = FText::FromName(&local_48,(FName *)&param_1->_padding_);
    local_res10 = *(FName *)(param_1->_padding_ + 0x18);
    pFVar5 = FText::FromName(&local_38,&local_res10);
    pFVar6 = FText::AsLocalizable_Advanced_LocText
                       (&local_78,L"CameraObjectInterfaceBuilder",L"BlendableParameterTypeMismatch",
                        L"Camera node parameter \'{0}.{1}\' of type {2} is not compatible with camera rig parameter \'{3}\' of type {4}"
                       );
    pFVar7 = FTextFormat::FTextFormat((FTextFormat *)&local_28,pFVar6,Default);
    pFVar2 = FText::Format<FText,FText,FText,FText,FText>
                       (&local_88,pFVar7,pFVar5,pFVar4,&local_98,pFVar3,pFVar2);
    FCameraBuildLog::AddMessage(this->Owner->BuildLog,Error,(UObject *)0x0,pFVar2);
    TVar8.Reference = local_78.TextData.Reference;
    if (local_88.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
      TVar8.Reference = local_78.TextData.Reference;
    }
  }
  if (TVar8.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*TVar8.Reference + 0x10))();
  }
  return false;
}

// CheckIfParameterCanBeOverridden<FVector2fCameraVariableReference> @ 14d53c330

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
UE::Cameras::Internal::FInterfaceParameterBindingBuilder::
CheckIfParameterCanBeOverridden<FVector2fCameraVariableReference>
          (FInterfaceParameterBindingBuilder *this,UCameraObjectInterfaceBlendableParameter *param_1
          ,FVector2fCameraVariableReference *param_2)

{
  bool bVar1;
  FText *pFVar2;
  FText *pFVar3;
  FText *pFVar4;
  FText *pFVar5;
  FText *pFVar6;
  FTextFormat *pFVar7;
  TRefCountPtr<ITextData> TVar8;
  FName local_res10;
  FText local_98;
  FText local_88;
  FText local_78;
  FText local_68;
  FText local_58;
  FText local_48;
  FText local_38;
  FText local_28;
  
  if (param_1->ParameterType == Vector2f) {
    if ((param_2->Variable).field0_0x0.DebugPtr == (UVector2fCameraVariable *)0x0) {
      bVar1 = CheckIfParameterCanBeOverridden(this,param_1,&param_2->VariableID);
      return bVar1;
    }
    pFVar2 = FText::FromName(&local_28,(FName *)&param_1->_padding_);
    local_res10 = *(FName *)(param_1->_padding_ + 0x18);
    pFVar3 = FText::FromName(&local_38,&local_res10);
    pFVar4 = FText::AsLocalizable_Advanced_LocText
                       (&local_88,L"CameraObjectInterfaceBuilder",L"BlendableParameterDrivenTwice",
                        L"Camera node parameter \'{0}.{1}\' is both exposed and driven by a variable!"
                       );
    pFVar7 = FTextFormat::FTextFormat((FTextFormat *)&local_48,pFVar4,Default);
    pFVar2 = FText::Format<FText,FText>(&local_78,pFVar7,pFVar3,pFVar2);
    FCameraBuildLog::AddMessage(this->Owner->BuildLog,Error,(UObject *)0x0,pFVar2);
    TVar8.Reference = local_88.TextData.Reference;
    if (local_78.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      TVar8.Reference = local_88.TextData.Reference;
    }
  }
  else {
    pFVar2 = UEnum::GetDisplayValueAsText<enum_ECameraVariableType>
                       (&local_68,param_1->ParameterType);
    pFVar3 = FText::FromString(&local_58,(FString *)&param_1->_padding_);
    UEnum::GetDisplayValueAsText<enum_ECameraVariableType>(&local_98,Vector2f);
    pFVar4 = FText::FromName(&local_48,(FName *)&param_1->_padding_);
    local_res10 = *(FName *)(param_1->_padding_ + 0x18);
    pFVar5 = FText::FromName(&local_38,&local_res10);
    pFVar6 = FText::AsLocalizable_Advanced_LocText
                       (&local_78,L"CameraObjectInterfaceBuilder",L"BlendableParameterTypeMismatch",
                        L"Camera node parameter \'{0}.{1}\' of type {2} is not compatible with camera rig parameter \'{3}\' of type {4}"
                       );
    pFVar7 = FTextFormat::FTextFormat((FTextFormat *)&local_28,pFVar6,Default);
    pFVar2 = FText::Format<FText,FText,FText,FText,FText>
                       (&local_88,pFVar7,pFVar5,pFVar4,&local_98,pFVar3,pFVar2);
    FCameraBuildLog::AddMessage(this->Owner->BuildLog,Error,(UObject *)0x0,pFVar2);
    TVar8.Reference = local_78.TextData.Reference;
    if (local_88.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
      TVar8.Reference = local_78.TextData.Reference;
    }
  }
  if (TVar8.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*TVar8.Reference + 0x10))();
  }
  return false;
}

// CheckIfParameterCanBeOverridden<FVector3dCameraParameter> @ 14d53c550

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
UE::Cameras::Internal::FInterfaceParameterBindingBuilder::
CheckIfParameterCanBeOverridden<FVector3dCameraParameter>
          (FInterfaceParameterBindingBuilder *this,UCameraObjectInterfaceBlendableParameter *param_1
          ,FVector3dCameraParameter *param_2)

{
  bool bVar1;
  FText *pFVar2;
  FText *pFVar3;
  FText *pFVar4;
  FText *pFVar5;
  FText *pFVar6;
  FTextFormat *pFVar7;
  TRefCountPtr<ITextData> TVar8;
  FName local_res10;
  FText local_98;
  FText local_88;
  FText local_78;
  FText local_68;
  FText local_58;
  FText local_48;
  FText local_38;
  FText local_28;
  
  if (param_1->ParameterType == Vector3d) {
    if ((param_2->Variable).field0_0x0.DebugPtr == (UVector3dCameraVariable *)0x0) {
      bVar1 = CheckIfParameterCanBeOverridden(this,param_1,&param_2->VariableID);
      return bVar1;
    }
    pFVar2 = FText::FromName(&local_28,(FName *)&param_1->_padding_);
    local_res10 = *(FName *)(param_1->_padding_ + 0x18);
    pFVar3 = FText::FromName(&local_38,&local_res10);
    pFVar4 = FText::AsLocalizable_Advanced_LocText
                       (&local_88,L"CameraObjectInterfaceBuilder",L"BlendableParameterDrivenTwice",
                        L"Camera node parameter \'{0}.{1}\' is both exposed and driven by a variable!"
                       );
    pFVar7 = FTextFormat::FTextFormat((FTextFormat *)&local_48,pFVar4,Default);
    pFVar2 = FText::Format<FText,FText>(&local_78,pFVar7,pFVar3,pFVar2);
    FCameraBuildLog::AddMessage(this->Owner->BuildLog,Error,(UObject *)0x0,pFVar2);
    TVar8.Reference = local_88.TextData.Reference;
    if (local_78.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      TVar8.Reference = local_88.TextData.Reference;
    }
  }
  else {
    pFVar2 = UEnum::GetDisplayValueAsText<enum_ECameraVariableType>
                       (&local_68,param_1->ParameterType);
    pFVar3 = FText::FromString(&local_58,(FString *)&param_1->_padding_);
    UEnum::GetDisplayValueAsText<enum_ECameraVariableType>(&local_98,Vector3d);
    pFVar4 = FText::FromName(&local_48,(FName *)&param_1->_padding_);
    local_res10 = *(FName *)(param_1->_padding_ + 0x18);
    pFVar5 = FText::FromName(&local_38,&local_res10);
    pFVar6 = FText::AsLocalizable_Advanced_LocText
                       (&local_78,L"CameraObjectInterfaceBuilder",L"BlendableParameterTypeMismatch",
                        L"Camera node parameter \'{0}.{1}\' of type {2} is not compatible with camera rig parameter \'{3}\' of type {4}"
                       );
    pFVar7 = FTextFormat::FTextFormat((FTextFormat *)&local_28,pFVar6,Default);
    pFVar2 = FText::Format<FText,FText,FText,FText,FText>
                       (&local_88,pFVar7,pFVar5,pFVar4,&local_98,pFVar3,pFVar2);
    FCameraBuildLog::AddMessage(this->Owner->BuildLog,Error,(UObject *)0x0,pFVar2);
    TVar8.Reference = local_78.TextData.Reference;
    if (local_88.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
      TVar8.Reference = local_78.TextData.Reference;
    }
  }
  if (TVar8.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*TVar8.Reference + 0x10))();
  }
  return false;
}

// CheckIfParameterCanBeOverridden<FVector3dCameraVariableReference> @ 14d53c770

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
UE::Cameras::Internal::FInterfaceParameterBindingBuilder::
CheckIfParameterCanBeOverridden<FVector3dCameraVariableReference>
          (FInterfaceParameterBindingBuilder *this,UCameraObjectInterfaceBlendableParameter *param_1
          ,FVector3dCameraVariableReference *param_2)

{
  bool bVar1;
  FText *pFVar2;
  FText *pFVar3;
  FText *pFVar4;
  FText *pFVar5;
  FText *pFVar6;
  FTextFormat *pFVar7;
  TRefCountPtr<ITextData> TVar8;
  FName local_res10;
  FText local_98;
  FText local_88;
  FText local_78;
  FText local_68;
  FText local_58;
  FText local_48;
  FText local_38;
  FText local_28;
  
  if (param_1->ParameterType == Vector3d) {
    if ((param_2->Variable).field0_0x0.DebugPtr == (UVector3dCameraVariable *)0x0) {
      bVar1 = CheckIfParameterCanBeOverridden(this,param_1,&param_2->VariableID);
      return bVar1;
    }
    pFVar2 = FText::FromName(&local_28,(FName *)&param_1->_padding_);
    local_res10 = *(FName *)(param_1->_padding_ + 0x18);
    pFVar3 = FText::FromName(&local_38,&local_res10);
    pFVar4 = FText::AsLocalizable_Advanced_LocText
                       (&local_88,L"CameraObjectInterfaceBuilder",L"BlendableParameterDrivenTwice",
                        L"Camera node parameter \'{0}.{1}\' is both exposed and driven by a variable!"
                       );
    pFVar7 = FTextFormat::FTextFormat((FTextFormat *)&local_48,pFVar4,Default);
    pFVar2 = FText::Format<FText,FText>(&local_78,pFVar7,pFVar3,pFVar2);
    FCameraBuildLog::AddMessage(this->Owner->BuildLog,Error,(UObject *)0x0,pFVar2);
    TVar8.Reference = local_88.TextData.Reference;
    if (local_78.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      TVar8.Reference = local_88.TextData.Reference;
    }
  }
  else {
    pFVar2 = UEnum::GetDisplayValueAsText<enum_ECameraVariableType>
                       (&local_68,param_1->ParameterType);
    pFVar3 = FText::FromString(&local_58,(FString *)&param_1->_padding_);
    UEnum::GetDisplayValueAsText<enum_ECameraVariableType>(&local_98,Vector3d);
    pFVar4 = FText::FromName(&local_48,(FName *)&param_1->_padding_);
    local_res10 = *(FName *)(param_1->_padding_ + 0x18);
    pFVar5 = FText::FromName(&local_38,&local_res10);
    pFVar6 = FText::AsLocalizable_Advanced_LocText
                       (&local_78,L"CameraObjectInterfaceBuilder",L"BlendableParameterTypeMismatch",
                        L"Camera node parameter \'{0}.{1}\' of type {2} is not compatible with camera rig parameter \'{3}\' of type {4}"
                       );
    pFVar7 = FTextFormat::FTextFormat((FTextFormat *)&local_28,pFVar6,Default);
    pFVar2 = FText::Format<FText,FText,FText,FText,FText>
                       (&local_88,pFVar7,pFVar5,pFVar4,&local_98,pFVar3,pFVar2);
    FCameraBuildLog::AddMessage(this->Owner->BuildLog,Error,(UObject *)0x0,pFVar2);
    TVar8.Reference = local_78.TextData.Reference;
    if (local_88.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
      TVar8.Reference = local_78.TextData.Reference;
    }
  }
  if (TVar8.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*TVar8.Reference + 0x10))();
  }
  return false;
}

// CheckIfParameterCanBeOverridden<FVector3fCameraParameter> @ 14d53c990

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
UE::Cameras::Internal::FInterfaceParameterBindingBuilder::
CheckIfParameterCanBeOverridden<FVector3fCameraParameter>
          (FInterfaceParameterBindingBuilder *this,UCameraObjectInterfaceBlendableParameter *param_1
          ,FVector3fCameraParameter *param_2)

{
  bool bVar1;
  FText *pFVar2;
  FText *pFVar3;
  FText *pFVar4;
  FText *pFVar5;
  FText *pFVar6;
  FTextFormat *pFVar7;
  TRefCountPtr<ITextData> TVar8;
  FName local_res10;
  FText local_98;
  FText local_88;
  FText local_78;
  FText local_68;
  FText local_58;
  FText local_48;
  FText local_38;
  FText local_28;
  
  if (param_1->ParameterType == Vector3f) {
    if ((param_2->Variable).field0_0x0.DebugPtr == (UVector3fCameraVariable *)0x0) {
      bVar1 = CheckIfParameterCanBeOverridden(this,param_1,&param_2->VariableID);
      return bVar1;
    }
    pFVar2 = FText::FromName(&local_28,(FName *)&param_1->_padding_);
    local_res10 = *(FName *)(param_1->_padding_ + 0x18);
    pFVar3 = FText::FromName(&local_38,&local_res10);
    pFVar4 = FText::AsLocalizable_Advanced_LocText
                       (&local_88,L"CameraObjectInterfaceBuilder",L"BlendableParameterDrivenTwice",
                        L"Camera node parameter \'{0}.{1}\' is both exposed and driven by a variable!"
                       );
    pFVar7 = FTextFormat::FTextFormat((FTextFormat *)&local_48,pFVar4,Default);
    pFVar2 = FText::Format<FText,FText>(&local_78,pFVar7,pFVar3,pFVar2);
    FCameraBuildLog::AddMessage(this->Owner->BuildLog,Error,(UObject *)0x0,pFVar2);
    TVar8.Reference = local_88.TextData.Reference;
    if (local_78.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      TVar8.Reference = local_88.TextData.Reference;
    }
  }
  else {
    pFVar2 = UEnum::GetDisplayValueAsText<enum_ECameraVariableType>
                       (&local_68,param_1->ParameterType);
    pFVar3 = FText::FromString(&local_58,(FString *)&param_1->_padding_);
    UEnum::GetDisplayValueAsText<enum_ECameraVariableType>(&local_98,Vector3f);
    pFVar4 = FText::FromName(&local_48,(FName *)&param_1->_padding_);
    local_res10 = *(FName *)(param_1->_padding_ + 0x18);
    pFVar5 = FText::FromName(&local_38,&local_res10);
    pFVar6 = FText::AsLocalizable_Advanced_LocText
                       (&local_78,L"CameraObjectInterfaceBuilder",L"BlendableParameterTypeMismatch",
                        L"Camera node parameter \'{0}.{1}\' of type {2} is not compatible with camera rig parameter \'{3}\' of type {4}"
                       );
    pFVar7 = FTextFormat::FTextFormat((FTextFormat *)&local_28,pFVar6,Default);
    pFVar2 = FText::Format<FText,FText,FText,FText,FText>
                       (&local_88,pFVar7,pFVar5,pFVar4,&local_98,pFVar3,pFVar2);
    FCameraBuildLog::AddMessage(this->Owner->BuildLog,Error,(UObject *)0x0,pFVar2);
    TVar8.Reference = local_78.TextData.Reference;
    if (local_88.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
      TVar8.Reference = local_78.TextData.Reference;
    }
  }
  if (TVar8.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*TVar8.Reference + 0x10))();
  }
  return false;
}

// CheckIfParameterCanBeOverridden<FVector3fCameraVariableReference> @ 14d53cbb0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
UE::Cameras::Internal::FInterfaceParameterBindingBuilder::
CheckIfParameterCanBeOverridden<FVector3fCameraVariableReference>
          (FInterfaceParameterBindingBuilder *this,UCameraObjectInterfaceBlendableParameter *param_1
          ,FVector3fCameraVariableReference *param_2)

{
  bool bVar1;
  FText *pFVar2;
  FText *pFVar3;
  FText *pFVar4;
  FText *pFVar5;
  FText *pFVar6;
  FTextFormat *pFVar7;
  TRefCountPtr<ITextData> TVar8;
  FName local_res10;
  FText local_98;
  FText local_88;
  FText local_78;
  FText local_68;
  FText local_58;
  FText local_48;
  FText local_38;
  FText local_28;
  
  if (param_1->ParameterType == Vector3f) {
    if ((param_2->Variable).field0_0x0.DebugPtr == (UVector3fCameraVariable *)0x0) {
      bVar1 = CheckIfParameterCanBeOverridden(this,param_1,&param_2->VariableID);
      return bVar1;
    }
    pFVar2 = FText::FromName(&local_28,(FName *)&param_1->_padding_);
    local_res10 = *(FName *)(param_1->_padding_ + 0x18);
    pFVar3 = FText::FromName(&local_38,&local_res10);
    pFVar4 = FText::AsLocalizable_Advanced_LocText
                       (&local_88,L"CameraObjectInterfaceBuilder",L"BlendableParameterDrivenTwice",
                        L"Camera node parameter \'{0}.{1}\' is both exposed and driven by a variable!"
                       );
    pFVar7 = FTextFormat::FTextFormat((FTextFormat *)&local_48,pFVar4,Default);
    pFVar2 = FText::Format<FText,FText>(&local_78,pFVar7,pFVar3,pFVar2);
    FCameraBuildLog::AddMessage(this->Owner->BuildLog,Error,(UObject *)0x0,pFVar2);
    TVar8.Reference = local_88.TextData.Reference;
    if (local_78.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      TVar8.Reference = local_88.TextData.Reference;
    }
  }
  else {
    pFVar2 = UEnum::GetDisplayValueAsText<enum_ECameraVariableType>
                       (&local_68,param_1->ParameterType);
    pFVar3 = FText::FromString(&local_58,(FString *)&param_1->_padding_);
    UEnum::GetDisplayValueAsText<enum_ECameraVariableType>(&local_98,Vector3f);
    pFVar4 = FText::FromName(&local_48,(FName *)&param_1->_padding_);
    local_res10 = *(FName *)(param_1->_padding_ + 0x18);
    pFVar5 = FText::FromName(&local_38,&local_res10);
    pFVar6 = FText::AsLocalizable_Advanced_LocText
                       (&local_78,L"CameraObjectInterfaceBuilder",L"BlendableParameterTypeMismatch",
                        L"Camera node parameter \'{0}.{1}\' of type {2} is not compatible with camera rig parameter \'{3}\' of type {4}"
                       );
    pFVar7 = FTextFormat::FTextFormat((FTextFormat *)&local_28,pFVar6,Default);
    pFVar2 = FText::Format<FText,FText,FText,FText,FText>
                       (&local_88,pFVar7,pFVar5,pFVar4,&local_98,pFVar3,pFVar2);
    FCameraBuildLog::AddMessage(this->Owner->BuildLog,Error,(UObject *)0x0,pFVar2);
    TVar8.Reference = local_78.TextData.Reference;
    if (local_88.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
      TVar8.Reference = local_78.TextData.Reference;
    }
  }
  if (TVar8.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*TVar8.Reference + 0x10))();
  }
  return false;
}

// CheckIfParameterCanBeOverridden<FVector4dCameraParameter> @ 14d53cdd0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
UE::Cameras::Internal::FInterfaceParameterBindingBuilder::
CheckIfParameterCanBeOverridden<FVector4dCameraParameter>
          (FInterfaceParameterBindingBuilder *this,UCameraObjectInterfaceBlendableParameter *param_1
          ,FVector4dCameraParameter *param_2)

{
  bool bVar1;
  FText *pFVar2;
  FText *pFVar3;
  FText *pFVar4;
  FText *pFVar5;
  FText *pFVar6;
  FTextFormat *pFVar7;
  TRefCountPtr<ITextData> TVar8;
  FName local_res10;
  FText local_98;
  FText local_88;
  FText local_78;
  FText local_68;
  FText local_58;
  FText local_48;
  FText local_38;
  FText local_28;
  
  if (param_1->ParameterType == Vector4d) {
    if ((param_2->Variable).field0_0x0.DebugPtr == (UVector4dCameraVariable *)0x0) {
      bVar1 = CheckIfParameterCanBeOverridden(this,param_1,&param_2->VariableID);
      return bVar1;
    }
    pFVar2 = FText::FromName(&local_28,(FName *)&param_1->_padding_);
    local_res10 = *(FName *)(param_1->_padding_ + 0x18);
    pFVar3 = FText::FromName(&local_38,&local_res10);
    pFVar4 = FText::AsLocalizable_Advanced_LocText
                       (&local_88,L"CameraObjectInterfaceBuilder",L"BlendableParameterDrivenTwice",
                        L"Camera node parameter \'{0}.{1}\' is both exposed and driven by a variable!"
                       );
    pFVar7 = FTextFormat::FTextFormat((FTextFormat *)&local_48,pFVar4,Default);
    pFVar2 = FText::Format<FText,FText>(&local_78,pFVar7,pFVar3,pFVar2);
    FCameraBuildLog::AddMessage(this->Owner->BuildLog,Error,(UObject *)0x0,pFVar2);
    TVar8.Reference = local_88.TextData.Reference;
    if (local_78.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      TVar8.Reference = local_88.TextData.Reference;
    }
  }
  else {
    pFVar2 = UEnum::GetDisplayValueAsText<enum_ECameraVariableType>
                       (&local_68,param_1->ParameterType);
    pFVar3 = FText::FromString(&local_58,(FString *)&param_1->_padding_);
    UEnum::GetDisplayValueAsText<enum_ECameraVariableType>(&local_98,Vector4d);
    pFVar4 = FText::FromName(&local_48,(FName *)&param_1->_padding_);
    local_res10 = *(FName *)(param_1->_padding_ + 0x18);
    pFVar5 = FText::FromName(&local_38,&local_res10);
    pFVar6 = FText::AsLocalizable_Advanced_LocText
                       (&local_78,L"CameraObjectInterfaceBuilder",L"BlendableParameterTypeMismatch",
                        L"Camera node parameter \'{0}.{1}\' of type {2} is not compatible with camera rig parameter \'{3}\' of type {4}"
                       );
    pFVar7 = FTextFormat::FTextFormat((FTextFormat *)&local_28,pFVar6,Default);
    pFVar2 = FText::Format<FText,FText,FText,FText,FText>
                       (&local_88,pFVar7,pFVar5,pFVar4,&local_98,pFVar3,pFVar2);
    FCameraBuildLog::AddMessage(this->Owner->BuildLog,Error,(UObject *)0x0,pFVar2);
    TVar8.Reference = local_78.TextData.Reference;
    if (local_88.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
      TVar8.Reference = local_78.TextData.Reference;
    }
  }
  if (TVar8.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*TVar8.Reference + 0x10))();
  }
  return false;
}

// CheckIfParameterCanBeOverridden<FVector4dCameraVariableReference> @ 14d53cff0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
UE::Cameras::Internal::FInterfaceParameterBindingBuilder::
CheckIfParameterCanBeOverridden<FVector4dCameraVariableReference>
          (FInterfaceParameterBindingBuilder *this,UCameraObjectInterfaceBlendableParameter *param_1
          ,FVector4dCameraVariableReference *param_2)

{
  bool bVar1;
  FText *pFVar2;
  FText *pFVar3;
  FText *pFVar4;
  FText *pFVar5;
  FText *pFVar6;
  FTextFormat *pFVar7;
  TRefCountPtr<ITextData> TVar8;
  FName local_res10;
  FText local_98;
  FText local_88;
  FText local_78;
  FText local_68;
  FText local_58;
  FText local_48;
  FText local_38;
  FText local_28;
  
  if (param_1->ParameterType == Vector4d) {
    if ((param_2->Variable).field0_0x0.DebugPtr == (UVector4dCameraVariable *)0x0) {
      bVar1 = CheckIfParameterCanBeOverridden(this,param_1,&param_2->VariableID);
      return bVar1;
    }
    pFVar2 = FText::FromName(&local_28,(FName *)&param_1->_padding_);
    local_res10 = *(FName *)(param_1->_padding_ + 0x18);
    pFVar3 = FText::FromName(&local_38,&local_res10);
    pFVar4 = FText::AsLocalizable_Advanced_LocText
                       (&local_88,L"CameraObjectInterfaceBuilder",L"BlendableParameterDrivenTwice",
                        L"Camera node parameter \'{0}.{1}\' is both exposed and driven by a variable!"
                       );
    pFVar7 = FTextFormat::FTextFormat((FTextFormat *)&local_48,pFVar4,Default);
    pFVar2 = FText::Format<FText,FText>(&local_78,pFVar7,pFVar3,pFVar2);
    FCameraBuildLog::AddMessage(this->Owner->BuildLog,Error,(UObject *)0x0,pFVar2);
    TVar8.Reference = local_88.TextData.Reference;
    if (local_78.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      TVar8.Reference = local_88.TextData.Reference;
    }
  }
  else {
    pFVar2 = UEnum::GetDisplayValueAsText<enum_ECameraVariableType>
                       (&local_68,param_1->ParameterType);
    pFVar3 = FText::FromString(&local_58,(FString *)&param_1->_padding_);
    UEnum::GetDisplayValueAsText<enum_ECameraVariableType>(&local_98,Vector4d);
    pFVar4 = FText::FromName(&local_48,(FName *)&param_1->_padding_);
    local_res10 = *(FName *)(param_1->_padding_ + 0x18);
    pFVar5 = FText::FromName(&local_38,&local_res10);
    pFVar6 = FText::AsLocalizable_Advanced_LocText
                       (&local_78,L"CameraObjectInterfaceBuilder",L"BlendableParameterTypeMismatch",
                        L"Camera node parameter \'{0}.{1}\' of type {2} is not compatible with camera rig parameter \'{3}\' of type {4}"
                       );
    pFVar7 = FTextFormat::FTextFormat((FTextFormat *)&local_28,pFVar6,Default);
    pFVar2 = FText::Format<FText,FText,FText,FText,FText>
                       (&local_88,pFVar7,pFVar5,pFVar4,&local_98,pFVar3,pFVar2);
    FCameraBuildLog::AddMessage(this->Owner->BuildLog,Error,(UObject *)0x0,pFVar2);
    TVar8.Reference = local_78.TextData.Reference;
    if (local_88.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
      TVar8.Reference = local_78.TextData.Reference;
    }
  }
  if (TVar8.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*TVar8.Reference + 0x10))();
  }
  return false;
}

// CheckIfParameterCanBeOverridden<FVector4fCameraParameter> @ 14d53d210

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
UE::Cameras::Internal::FInterfaceParameterBindingBuilder::
CheckIfParameterCanBeOverridden<FVector4fCameraParameter>
          (FInterfaceParameterBindingBuilder *this,UCameraObjectInterfaceBlendableParameter *param_1
          ,FVector4fCameraParameter *param_2)

{
  bool bVar1;
  FText *pFVar2;
  FText *pFVar3;
  FText *pFVar4;
  FText *pFVar5;
  FText *pFVar6;
  FTextFormat *pFVar7;
  TRefCountPtr<ITextData> TVar8;
  FName local_res10;
  FText local_98;
  FText local_88;
  FText local_78;
  FText local_68;
  FText local_58;
  FText local_48;
  FText local_38;
  FText local_28;
  
  if (param_1->ParameterType == Vector4f) {
    if ((param_2->Variable).field0_0x0.DebugPtr == (UVector4fCameraVariable *)0x0) {
      bVar1 = CheckIfParameterCanBeOverridden(this,param_1,&param_2->VariableID);
      return bVar1;
    }
    pFVar2 = FText::FromName(&local_28,(FName *)&param_1->_padding_);
    local_res10 = *(FName *)(param_1->_padding_ + 0x18);
    pFVar3 = FText::FromName(&local_38,&local_res10);
    pFVar4 = FText::AsLocalizable_Advanced_LocText
                       (&local_88,L"CameraObjectInterfaceBuilder",L"BlendableParameterDrivenTwice",
                        L"Camera node parameter \'{0}.{1}\' is both exposed and driven by a variable!"
                       );
    pFVar7 = FTextFormat::FTextFormat((FTextFormat *)&local_48,pFVar4,Default);
    pFVar2 = FText::Format<FText,FText>(&local_78,pFVar7,pFVar3,pFVar2);
    FCameraBuildLog::AddMessage(this->Owner->BuildLog,Error,(UObject *)0x0,pFVar2);
    TVar8.Reference = local_88.TextData.Reference;
    if (local_78.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      TVar8.Reference = local_88.TextData.Reference;
    }
  }
  else {
    pFVar2 = UEnum::GetDisplayValueAsText<enum_ECameraVariableType>
                       (&local_68,param_1->ParameterType);
    pFVar3 = FText::FromString(&local_58,(FString *)&param_1->_padding_);
    UEnum::GetDisplayValueAsText<enum_ECameraVariableType>(&local_98,Vector4f);
    pFVar4 = FText::FromName(&local_48,(FName *)&param_1->_padding_);
    local_res10 = *(FName *)(param_1->_padding_ + 0x18);
    pFVar5 = FText::FromName(&local_38,&local_res10);
    pFVar6 = FText::AsLocalizable_Advanced_LocText
                       (&local_78,L"CameraObjectInterfaceBuilder",L"BlendableParameterTypeMismatch",
                        L"Camera node parameter \'{0}.{1}\' of type {2} is not compatible with camera rig parameter \'{3}\' of type {4}"
                       );
    pFVar7 = FTextFormat::FTextFormat((FTextFormat *)&local_28,pFVar6,Default);
    pFVar2 = FText::Format<FText,FText,FText,FText,FText>
                       (&local_88,pFVar7,pFVar5,pFVar4,&local_98,pFVar3,pFVar2);
    FCameraBuildLog::AddMessage(this->Owner->BuildLog,Error,(UObject *)0x0,pFVar2);
    TVar8.Reference = local_78.TextData.Reference;
    if (local_88.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
      TVar8.Reference = local_78.TextData.Reference;
    }
  }
  if (TVar8.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*TVar8.Reference + 0x10))();
  }
  return false;
}

// CheckIfParameterCanBeOverridden<FVector4fCameraVariableReference> @ 14d53d430

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
UE::Cameras::Internal::FInterfaceParameterBindingBuilder::
CheckIfParameterCanBeOverridden<FVector4fCameraVariableReference>
          (FInterfaceParameterBindingBuilder *this,UCameraObjectInterfaceBlendableParameter *param_1
          ,FVector4fCameraVariableReference *param_2)

{
  bool bVar1;
  FText *pFVar2;
  FText *pFVar3;
  FText *pFVar4;
  FText *pFVar5;
  FText *pFVar6;
  FTextFormat *pFVar7;
  TRefCountPtr<ITextData> TVar8;
  FName local_res10;
  FText local_98;
  FText local_88;
  FText local_78;
  FText local_68;
  FText local_58;
  FText local_48;
  FText local_38;
  FText local_28;
  
  if (param_1->ParameterType == Vector4f) {
    if ((param_2->Variable).field0_0x0.DebugPtr == (UVector4fCameraVariable *)0x0) {
      bVar1 = CheckIfParameterCanBeOverridden(this,param_1,&param_2->VariableID);
      return bVar1;
    }
    pFVar2 = FText::FromName(&local_28,(FName *)&param_1->_padding_);
    local_res10 = *(FName *)(param_1->_padding_ + 0x18);
    pFVar3 = FText::FromName(&local_38,&local_res10);
    pFVar4 = FText::AsLocalizable_Advanced_LocText
                       (&local_88,L"CameraObjectInterfaceBuilder",L"BlendableParameterDrivenTwice",
                        L"Camera node parameter \'{0}.{1}\' is both exposed and driven by a variable!"
                       );
    pFVar7 = FTextFormat::FTextFormat((FTextFormat *)&local_48,pFVar4,Default);
    pFVar2 = FText::Format<FText,FText>(&local_78,pFVar7,pFVar3,pFVar2);
    FCameraBuildLog::AddMessage(this->Owner->BuildLog,Error,(UObject *)0x0,pFVar2);
    TVar8.Reference = local_88.TextData.Reference;
    if (local_78.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      TVar8.Reference = local_88.TextData.Reference;
    }
  }
  else {
    pFVar2 = UEnum::GetDisplayValueAsText<enum_ECameraVariableType>
                       (&local_68,param_1->ParameterType);
    pFVar3 = FText::FromString(&local_58,(FString *)&param_1->_padding_);
    UEnum::GetDisplayValueAsText<enum_ECameraVariableType>(&local_98,Vector4f);
    pFVar4 = FText::FromName(&local_48,(FName *)&param_1->_padding_);
    local_res10 = *(FName *)(param_1->_padding_ + 0x18);
    pFVar5 = FText::FromName(&local_38,&local_res10);
    pFVar6 = FText::AsLocalizable_Advanced_LocText
                       (&local_78,L"CameraObjectInterfaceBuilder",L"BlendableParameterTypeMismatch",
                        L"Camera node parameter \'{0}.{1}\' of type {2} is not compatible with camera rig parameter \'{3}\' of type {4}"
                       );
    pFVar7 = FTextFormat::FTextFormat((FTextFormat *)&local_28,pFVar6,Default);
    pFVar2 = FText::Format<FText,FText,FText,FText,FText>
                       (&local_88,pFVar7,pFVar5,pFVar4,&local_98,pFVar3,pFVar2);
    FCameraBuildLog::AddMessage(this->Owner->BuildLog,Error,(UObject *)0x0,pFVar2);
    TVar8.Reference = local_78.TextData.Reference;
    if (local_88.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
      TVar8.Reference = local_78.TextData.Reference;
    }
  }
  if (TVar8.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*TVar8.Reference + 0x10))();
  }
  return false;
}

// SetCameraParameterOrVariableReferenceOverride<FTransform3dCameraParameter> @ 14d541cf0

void __thiscall
UE::Cameras::Internal::FInterfaceParameterBindingBuilder::
SetCameraParameterOrVariableReferenceOverride<FTransform3dCameraParameter>
          (FInterfaceParameterBindingBuilder *this,UCameraObjectInterfaceBlendableParameter *param_1
          ,FStructProperty *param_2,FTransform3dCameraParameter *param_3)

{
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  FCameraVariableID local_res10 [2];
  TTuple<FName,UObject_*> local_28;
  
  if (((param_1->PrivateVariableID).Value == 0xffffffff) &&
     (bVar2 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<1378543571254116439>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Build\\CameraObjectInterfaceBuilder.cpp"
                         ,0x57,"BlendableParameter->PrivateVariableID.IsValid()"), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  bVar2 = IsThisNotNull(param_2,"FField::GetFName");
  lVar4 = 0;
  lVar3 = lVar4;
  if (bVar2) {
    lVar3 = param_2->_padding_;
  }
  if ((param_1->_padding_ != lVar3) &&
     (bVar2 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<1378543571254116440>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Build\\CameraObjectInterfaceBuilder.cpp"
                         ,0x58,
                         "BlendableParameter->TargetPropertyName == TargetProperty->GetFName()"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  bVar2 = CheckIfParameterCanBeOverridden<FTransform3dCameraParameter>(this,param_1,param_3);
  if (bVar2) {
    lVar3 = param_1->_padding_;
    bVar2 = IsThisNotNull(param_2,"FField::GetFName");
    if (bVar2) {
      lVar4 = param_2->_padding_;
    }
    local_28._0_8_ = lVar4;
    local_28._8_8_ = lVar3;
    TMap<TTuple<FName,UObject_*>,FCameraVariableID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,UObject_*>,FCameraVariableID,0>_>
    ::RemoveAndCopyValue(&this->Owner->OldDrivenBlendableParameters,&local_28,local_res10);
    (param_3->VariableID).Value = (param_1->PrivateVariableID).Value;
  }
  return;
}

// SetCameraParameterOrVariableReferenceOverride<FTransform3dCameraVariableReference> @ 14d541e10

void __thiscall
UE::Cameras::Internal::FInterfaceParameterBindingBuilder::
SetCameraParameterOrVariableReferenceOverride<FTransform3dCameraVariableReference>
          (FInterfaceParameterBindingBuilder *this,UCameraObjectInterfaceBlendableParameter *param_1
          ,FStructProperty *param_2,FTransform3dCameraVariableReference *param_3)

{
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  FCameraVariableID local_res10 [2];
  TTuple<FName,UObject_*> local_28;
  
  if (((param_1->PrivateVariableID).Value == 0xffffffff) &&
     (bVar2 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<1378543571254116439>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Build\\CameraObjectInterfaceBuilder.cpp"
                         ,0x57,"BlendableParameter->PrivateVariableID.IsValid()"), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  bVar2 = IsThisNotNull(param_2,"FField::GetFName");
  lVar4 = 0;
  lVar3 = lVar4;
  if (bVar2) {
    lVar3 = param_2->_padding_;
  }
  if ((param_1->_padding_ != lVar3) &&
     (bVar2 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<1378543571254116440>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Build\\CameraObjectInterfaceBuilder.cpp"
                         ,0x58,
                         "BlendableParameter->TargetPropertyName == TargetProperty->GetFName()"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  bVar2 = CheckIfParameterCanBeOverridden<FTransform3dCameraVariableReference>(this,param_1,param_3)
  ;
  if (bVar2) {
    lVar3 = param_1->_padding_;
    bVar2 = IsThisNotNull(param_2,"FField::GetFName");
    if (bVar2) {
      lVar4 = param_2->_padding_;
    }
    local_28._0_8_ = lVar4;
    local_28._8_8_ = lVar3;
    TMap<TTuple<FName,UObject_*>,FCameraVariableID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,UObject_*>,FCameraVariableID,0>_>
    ::RemoveAndCopyValue(&this->Owner->OldDrivenBlendableParameters,&local_28,local_res10);
    (param_3->VariableID).Value = (param_1->PrivateVariableID).Value;
  }
  return;
}

// SetCameraParameterOrVariableReferenceOverride<FTransform3fCameraVariableReference> @ 14d541f30

void __thiscall
UE::Cameras::Internal::FInterfaceParameterBindingBuilder::
SetCameraParameterOrVariableReferenceOverride<FTransform3fCameraVariableReference>
          (FInterfaceParameterBindingBuilder *this,UCameraObjectInterfaceBlendableParameter *param_1
          ,FStructProperty *param_2,FTransform3fCameraVariableReference *param_3)

{
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  FCameraVariableID local_res10 [2];
  TTuple<FName,UObject_*> local_28;
  
  if (((param_1->PrivateVariableID).Value == 0xffffffff) &&
     (bVar2 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<1378543571254116439>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Build\\CameraObjectInterfaceBuilder.cpp"
                         ,0x57,"BlendableParameter->PrivateVariableID.IsValid()"), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  bVar2 = IsThisNotNull(param_2,"FField::GetFName");
  lVar4 = 0;
  lVar3 = lVar4;
  if (bVar2) {
    lVar3 = param_2->_padding_;
  }
  if ((param_1->_padding_ != lVar3) &&
     (bVar2 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<1378543571254116440>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Build\\CameraObjectInterfaceBuilder.cpp"
                         ,0x58,
                         "BlendableParameter->TargetPropertyName == TargetProperty->GetFName()"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  bVar2 = CheckIfParameterCanBeOverridden<FTransform3fCameraVariableReference>(this,param_1,param_3)
  ;
  if (bVar2) {
    lVar3 = param_1->_padding_;
    bVar2 = IsThisNotNull(param_2,"FField::GetFName");
    if (bVar2) {
      lVar4 = param_2->_padding_;
    }
    local_28._0_8_ = lVar4;
    local_28._8_8_ = lVar3;
    TMap<TTuple<FName,UObject_*>,FCameraVariableID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,UObject_*>,FCameraVariableID,0>_>
    ::RemoveAndCopyValue(&this->Owner->OldDrivenBlendableParameters,&local_28,local_res10);
    (param_3->VariableID).Value = (param_1->PrivateVariableID).Value;
  }
  return;
}

// CheckIfParameterCanBeOverridden @ 14d550300

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
UE::Cameras::Internal::FInterfaceParameterBindingBuilder::CheckIfParameterCanBeOverridden
          (FInterfaceParameterBindingBuilder *this,UCameraObjectInterfaceBlendableParameter *param_1
          ,FBlendableParameterInfo *param_2)

{
  bool bVar1;
  FText *pFVar2;
  FText *pFVar3;
  FText *pFVar4;
  FText *pFVar5;
  FText *pFVar6;
  FText *pFVar7;
  FTextFormat *pFVar8;
  TRefCountPtr<ITextData> TVar9;
  FName local_res10;
  FText local_a8;
  FText local_98;
  FText local_88;
  FText local_78;
  FText local_68;
  FText local_58;
  FText local_48;
  FText local_38;
  
  if (param_1->ParameterType == param_2->ParameterType) {
    if (param_2->OverrideVariable == (UCameraVariableAsset *)0x0) {
      bVar1 = CheckIfParameterCanBeOverridden(this,param_1,param_2->OverrideVariableID);
      return bVar1;
    }
    pFVar2 = FText::FromName(&local_38,(FName *)&param_1->_padding_);
    local_res10 = *(FName *)(param_1->_padding_ + 0x18);
    pFVar3 = FText::FromName(&local_48,&local_res10);
    pFVar4 = FText::AsLocalizable_Advanced_LocText
                       (&local_a8,L"CameraObjectInterfaceBuilder",L"BlendableParameterDrivenTwice",
                        L"Camera node parameter \'{0}.{1}\' is both exposed and driven by a variable!"
                       );
    pFVar8 = FTextFormat::FTextFormat((FTextFormat *)&local_58,pFVar4,Default);
    pFVar2 = FText::Format<FText,FText>(&local_98,pFVar8,pFVar3,pFVar2);
    FCameraBuildLog::AddMessage(this->Owner->BuildLog,Error,(UObject *)0x0,pFVar2);
    TVar9.Reference = local_a8.TextData.Reference;
    if (local_98.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
      TVar9.Reference = local_a8.TextData.Reference;
    }
  }
  else {
    pFVar2 = UEnum::GetDisplayValueAsText<enum_ECameraVariableType>
                       (&local_88,param_1->ParameterType);
    pFVar3 = FText::FromString(&local_78,(FString *)&param_1->_padding_);
    pFVar4 = UEnum::GetDisplayValueAsText<enum_ECameraVariableType>
                       (&local_68,param_2->ParameterType);
    pFVar5 = FText::FromName(&local_58,&param_2->ParameterName);
    local_res10 = *(FName *)(param_1->_padding_ + 0x18);
    pFVar6 = FText::FromName(&local_48,&local_res10);
    pFVar7 = FText::AsLocalizable_Advanced_LocText
                       (&local_98,L"CameraObjectInterfaceBuilder",L"BlendableParameterTypeMismatch",
                        L"Camera node parameter \'{0}.{1}\' of type {2} is not compatible with camera rig parameter \'{3}\' of type {4}"
                       );
    pFVar8 = FTextFormat::FTextFormat((FTextFormat *)&local_38,pFVar7,Default);
    pFVar2 = FText::Format<FText,FText,FText,FText,FText>
                       (&local_a8,pFVar8,pFVar6,pFVar5,pFVar4,pFVar3,pFVar2);
    FCameraBuildLog::AddMessage(this->Owner->BuildLog,Error,(UObject *)0x0,pFVar2);
    TVar9.Reference = local_98.TextData.Reference;
    if (local_a8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
      TVar9.Reference = local_98.TextData.Reference;
    }
  }
  if (TVar9.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*TVar9.Reference + 0x10))();
  }
  return false;
}

// CheckIfParameterCanBeOverridden @ 14d550530

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
UE::Cameras::Internal::FInterfaceParameterBindingBuilder::CheckIfParameterCanBeOverridden
          (FInterfaceParameterBindingBuilder *this,UCameraObjectInterfaceBlendableParameter *param_1
          ,FCameraVariableID *param_2)

{
  FText *pFVar1;
  FText *pFVar2;
  FText *pFVar3;
  FTextFormat *pFVar4;
  TRefCountPtr<ITextData> TVar5;
  FName local_res18 [2];
  FText local_58;
  FText local_48;
  FText local_38;
  FText local_28;
  FText local_18;
  
  if (param_2 == (FCameraVariableID *)0x0) {
    pFVar1 = FText::FromName(&local_38,(FName *)&param_1->_padding_);
    local_res18[0] = *(FName *)(param_1->_padding_ + 0x18);
    pFVar2 = FText::FromName(&local_28,local_res18);
    pFVar3 = FText::AsLocalizable_Advanced_LocText
                       (&local_48,L"CameraObjectInterfaceBuilder",
                        L"BlendableParameterMissingOverrideID",
                        L"Camera node parameter \'{0}.{1}\' cannot be overriden by a parameter");
    pFVar4 = FTextFormat::FTextFormat((FTextFormat *)&local_18,pFVar3,Default);
    pFVar1 = FText::Format<FText,FText>(&local_58,pFVar4,pFVar2,pFVar1);
    FCameraBuildLog::AddMessage(this->Owner->BuildLog,Error,(UObject *)0x0,pFVar1);
    TVar5.Reference = local_48.TextData.Reference;
    if (local_58.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
      TVar5.Reference = local_48.TextData.Reference;
    }
  }
  else {
    if (param_2->Value == 0xffffffff) {
      return true;
    }
    pFVar1 = FText::FromName(&local_18,(FName *)&param_1->_padding_);
    local_res18[0] = *(FName *)(param_1->_padding_ + 0x18);
    pFVar2 = FText::FromName(&local_28,local_res18);
    pFVar3 = FText::AsLocalizable_Advanced_LocText
                       (&local_58,L"CameraObjectInterfaceBuilder",L"BlendableParameterDrivenTwice",
                        L"Camera node parameter \'{0}.{1}\' is both exposed and driven by a variable!"
                       );
    pFVar4 = FTextFormat::FTextFormat((FTextFormat *)&local_38,pFVar3,Default);
    pFVar1 = FText::Format<FText,FText>(&local_48,pFVar4,pFVar2,pFVar1);
    FCameraBuildLog::AddMessage(this->Owner->BuildLog,Error,(UObject *)0x0,pFVar1);
    TVar5.Reference = local_58.TextData.Reference;
    if (local_48.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
      TVar5.Reference = local_58.TextData.Reference;
    }
  }
  if (TVar5.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*TVar5.Reference + 0x10))();
  }
  return false;
}

// CheckIfParameterCanBeOverridden @ 14d5506e0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
UE::Cameras::Internal::FInterfaceParameterBindingBuilder::CheckIfParameterCanBeOverridden
          (FInterfaceParameterBindingBuilder *this,UCameraObjectInterfaceDataParameter *param_1,
          FDataParameterInfo *param_2)

{
  bool bVar1;
  FText *pFVar2;
  FText *pFVar3;
  FText *pFVar4;
  FText *pFVar5;
  FText *pFVar6;
  FText *pFVar7;
  FTextFormat *pFVar8;
  TRefCountPtr<ITextData> TVar9;
  FName local_res10;
  FText local_a8;
  FText local_98;
  FText local_88;
  FText local_78;
  FText local_68;
  FText local_58;
  FText local_48;
  FText local_38;
  
  if (param_1->DataType == param_2->ParameterType) {
    if (param_1->DataContainerType == param_2->ParameterContainerType) {
      bVar1 = CheckIfParameterCanBeOverridden(this,param_1,param_2->OverrideDataID);
      return bVar1;
    }
    pFVar2 = UEnum::GetDisplayValueAsText<enum_ECameraContextDataContainerType>
                       (&local_38,param_1->DataContainerType);
    pFVar3 = UEnum::GetDisplayValueAsText<enum_ECameraContextDataContainerType>
                       (&local_48,param_2->ParameterContainerType);
    pFVar4 = FText::FromString(&local_58,(FString *)&param_1->_padding_);
    pFVar5 = FText::FromName(&local_68,&param_2->ParameterName);
    local_res10 = *(FName *)(param_1->_padding_ + 0x18);
    pFVar6 = FText::FromName(&local_78,&local_res10);
    pFVar7 = FText::AsLocalizable_Advanced_LocText
                       (&local_a8,L"CameraObjectInterfaceBuilder",
                        L"DataParameterContainerTypeMismatch",
                        L"Camera node parameter \'{0}.{1}\' has a different container type than camera rig parameter \'{2}\' ({3} vs {4})"
                       );
    pFVar8 = FTextFormat::FTextFormat((FTextFormat *)&local_88,pFVar7,Default);
    pFVar2 = FText::Format<FText,FText,FText,FText,FText>
                       (&local_98,pFVar8,pFVar6,pFVar5,pFVar4,pFVar3,pFVar2);
    FCameraBuildLog::AddMessage(this->Owner->BuildLog,Error,(UObject *)0x0,pFVar2);
    TVar9.Reference = local_a8.TextData.Reference;
    if (local_98.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
      TVar9.Reference = local_a8.TextData.Reference;
    }
  }
  else {
    pFVar2 = UEnum::GetDisplayValueAsText<enum_ECameraContextDataType>(&local_88,param_1->DataType);
    pFVar3 = FText::FromString(&local_78,(FString *)&param_1->_padding_);
    pFVar4 = UEnum::GetDisplayValueAsText<enum_ECameraContextDataType>
                       (&local_68,param_2->ParameterType);
    pFVar5 = FText::FromName(&local_58,&param_2->ParameterName);
    local_res10 = *(FName *)(param_1->_padding_ + 0x18);
    pFVar6 = FText::FromName(&local_48,&local_res10);
    pFVar7 = FText::AsLocalizable_Advanced_LocText
                       (&local_98,L"CameraObjectInterfaceBuilder",L"DataParameterTypeMismatch",
                        L"Camera node parameter \'{0}.{1}\' of type {2} is not compatible with camera rig parameter \'{3}\' of type {4}"
                       );
    pFVar8 = FTextFormat::FTextFormat((FTextFormat *)&local_38,pFVar7,Default);
    pFVar2 = FText::Format<FText,FText,FText,FText,FText>
                       (&local_a8,pFVar8,pFVar6,pFVar5,pFVar4,pFVar3,pFVar2);
    FCameraBuildLog::AddMessage(this->Owner->BuildLog,Error,(UObject *)0x0,pFVar2);
    TVar9.Reference = local_98.TextData.Reference;
    if (local_a8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
      TVar9.Reference = local_98.TextData.Reference;
    }
  }
  if (TVar9.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*TVar9.Reference + 0x10))();
  }
  return false;
}

// CheckIfParameterCanBeOverridden @ 14d550910

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
UE::Cameras::Internal::FInterfaceParameterBindingBuilder::CheckIfParameterCanBeOverridden
          (FInterfaceParameterBindingBuilder *this,UCameraObjectInterfaceDataParameter *param_1,
          FCameraContextDataID *param_2)

{
  FText *pFVar1;
  FText *pFVar2;
  FText *pFVar3;
  FTextFormat *pFVar4;
  TRefCountPtr<ITextData> TVar5;
  FName local_res18 [2];
  FText local_58;
  FText local_48;
  FText local_38;
  FText local_28;
  FText local_18;
  
  if (param_2 == (FCameraContextDataID *)0x0) {
    pFVar1 = FText::FromName(&local_38,(FName *)&param_1->_padding_);
    local_res18[0] = *(FName *)(param_1->_padding_ + 0x18);
    pFVar2 = FText::FromName(&local_28,local_res18);
    pFVar3 = FText::AsLocalizable_Advanced_LocText
                       (&local_48,L"CameraObjectInterfaceBuilder",L"DataParameterMissingOverrideID",
                        L"Camera node parameter \'{0}.{1}\' cannot be overriden by a parameter");
    pFVar4 = FTextFormat::FTextFormat((FTextFormat *)&local_18,pFVar3,Default);
    pFVar1 = FText::Format<FText,FText>(&local_58,pFVar4,pFVar2,pFVar1);
    FCameraBuildLog::AddMessage(this->Owner->BuildLog,Error,(UObject *)0x0,pFVar1);
    TVar5.Reference = local_48.TextData.Reference;
    if (local_58.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
      TVar5.Reference = local_48.TextData.Reference;
    }
  }
  else {
    if (param_2->Value == 0xffffffff) {
      return true;
    }
    pFVar1 = FText::FromName(&local_18,(FName *)&param_1->_padding_);
    local_res18[0] = *(FName *)(param_1->_padding_ + 0x18);
    pFVar2 = FText::FromName(&local_28,local_res18);
    pFVar3 = FText::AsLocalizable_Advanced_LocText
                       (&local_58,L"CameraObjectInterfaceBuilder",L"DataParameterDrivenTwice",
                        L"Camera node parameter \'{0}.{1}\' is somehow overriden twice!");
    pFVar4 = FTextFormat::FTextFormat((FTextFormat *)&local_38,pFVar3,Default);
    pFVar1 = FText::Format<FText,FText>(&local_48,pFVar4,pFVar2,pFVar1);
    FCameraBuildLog::AddMessage(this->Owner->BuildLog,Error,(UObject *)0x0,pFVar1);
    TVar5.Reference = local_58.TextData.Reference;
    if (local_48.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
      TVar5.Reference = local_58.TextData.Reference;
    }
  }
  if (TVar5.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*TVar5.Reference + 0x10))();
  }
  return false;
}

// CheckIfParameterCanBeOverridden @ 14d550ac0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
UE::Cameras::Internal::FInterfaceParameterBindingBuilder::CheckIfParameterCanBeOverridden
          (FInterfaceParameterBindingBuilder *this,UCameraObjectInterfaceDataParameter *param_1,
          FProperty *param_2,FCameraContextDataID *param_3)

{
  ulonglong uVar1;
  UObject *pUVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  FText *pFVar6;
  FText *pFVar7;
  FText *pFVar8;
  FText *pFVar9;
  FText *pFVar10;
  FText *pFVar11;
  FTextFormat *pFVar12;
  FName local_res10;
  FName local_148;
  FName local_140;
  FName local_138;
  FText local_130;
  FText local_120;
  FText local_110;
  FText local_100;
  FText local_f0;
  FText local_e0;
  FText local_d0;
  FText local_c0;
  FText local_b0;
  FTextFormat local_a0;
  FText local_90;
  FText local_80;
  FText local_70;
  FText local_60;
  FText local_50;
  FTextFormat local_40;
  
  if (param_1->DataContainerType == Array) {
    if ((param_2 == (FProperty *)0x0) || ((*(uint *)(param_2->_padding_ + 0x18) >> 0x15 & 1) == 0))
    goto LAB_14d550b14;
    param_2 = (FProperty *)param_2[1]._padding_;
  }
  else {
    uVar1 = *(ulonglong *)(param_2->_padding_ + 0x18);
    if ((((uVar1 >> 0x15 & 1) != 0) || ((uVar1 >> 0x2e & 1) != 0)) || ((uVar1 >> 0x2f & 1) != 0)) {
LAB_14d550b14:
      pFVar6 = UEnum::GetDisplayValueAsText<enum_ECameraContextDataContainerType>
                         (&local_90,param_1->DataContainerType);
      pFVar7 = FFieldClass::GetDisplayNameText((FFieldClass *)param_2->_padding_,&local_80);
      pFVar8 = FText::FromString(&local_70,(FString *)&param_1->_padding_);
      bVar4 = IsThisNotNull(param_2,"FField::GetFName");
      if (bVar4) {
        local_148 = (FName)param_2->_padding_;
      }
      else {
        local_148.ComparisonIndex.Value = 0;
        local_148.Number = 0;
      }
      pFVar9 = FText::FromName(&local_60,&local_148);
      local_138 = *(FName *)(param_1->_padding_ + 0x18);
      pFVar10 = FText::FromName(&local_50,&local_138);
      pFVar11 = FText::AsLocalizable_Advanced_LocText
                          (&local_100,L"CameraObjectInterfaceBuilder",
                           L"DataParameterContainerTypeMismatch",
                           L"Camera node parameter \'{0}.{1}\' has a different container type than camera rig parameter \'{2}\' ({3} vs {4})"
                          );
      pFVar12 = FTextFormat::FTextFormat(&local_40,pFVar11,Default);
      pFVar6 = FText::Format<FText,FText,FText,FText,FText>
                         (&local_110,pFVar12,pFVar10,pFVar9,pFVar8,pFVar7,pFVar6);
      FCameraBuildLog::AddMessage(this->Owner->BuildLog,Error,(UObject *)0x0,pFVar6);
      if (local_110.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_110.TextData.Reference + 0x10))();
      }
      goto LAB_14d550e45;
    }
  }
  switch(param_1->DataType) {
  case Name:
    bVar4 = (bool)((byte)(*(uint *)(param_2->_padding_ + 0x18) >> 0xd) & 1);
    goto LAB_14d550c41;
  case String:
    bVar4 = (bool)((byte)(*(uint *)(param_2->_padding_ + 0x18) >> 0xe) & 1);
LAB_14d550c41:
    if (bVar4 != false) {
      bVar4 = CheckIfParameterCanBeOverridden(this,param_1,param_3);
      return bVar4;
    }
    break;
  case Enum:
    if ((param_2 != (FProperty *)0x0) &&
       ((*(ulonglong *)(param_2->_padding_ + 0x18) & 0x1000000000000) != 0)) {
      pUVar2 = (param_1->DataTypeObject).field0_0x0.DebugPtr;
      if (pUVar2 == (UObject *)0x0) {
        bVar4 = (UObject *)param_2[1]._padding_ == (UObject *)0x0;
      }
      else {
        bVar4 = pUVar2 == (UObject *)param_2[1]._padding_;
      }
      goto LAB_14d550c41;
    }
    break;
  case Struct:
    if (param_2 != (FProperty *)0x0) {
      bVar4 = (*(uint *)(param_2->_padding_ + 0x18) & 0x100000) == 0;
LAB_14d550c34:
      if (!bVar4) {
        bVar4 = (UObject *)param_2[1]._padding_ == (param_1->DataTypeObject).field0_0x0.DebugPtr;
        goto LAB_14d550c41;
      }
    }
    break;
  case Object:
    if (param_2 != (FProperty *)0x0) {
      bVar4 = (*(uint *)(param_2->_padding_ + 0x18) & 0x10000) == 0;
      goto LAB_14d550c34;
    }
    break;
  case Class:
    if (param_2 != (FProperty *)0x0) {
      bVar4 = (*(uint *)(param_2->_padding_ + 0x18) & 0x400) == 0;
      goto LAB_14d550c34;
    }
    break;
  default:
    bVar4 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1378543571254116800>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Build\\CameraObjectInterfaceBuilder.cpp"
                       ,0x1c0,"false");
    if (!bVar4) {
      return false;
    }
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  pFVar6 = UEnum::GetDisplayValueAsText<enum_ECameraContextDataType>(&local_f0,param_1->DataType);
  pFVar7 = FText::FromString(&local_e0,(FString *)&param_1->_padding_);
  pFVar8 = FFieldClass::GetDisplayNameText((FFieldClass *)param_2->_padding_,&local_d0);
  bVar4 = IsThisNotNull(param_2,"FField::GetFName");
  if (bVar4) {
    local_res10 = (FName)param_2->_padding_;
  }
  else {
    local_res10.ComparisonIndex.Value = 0;
    local_res10.Number = 0;
  }
  pFVar9 = FText::FromName(&local_c0,&local_res10);
  local_140 = *(FName *)(param_1->_padding_ + 0x18);
  pFVar10 = FText::FromName(&local_b0,&local_140);
  pFVar11 = FText::AsLocalizable_Advanced_LocText
                      (&local_120,L"CameraObjectInterfaceBuilder",L"DataParameterTypeMismatch",
                       L"Camera node parameter \'{0}.{1}\' of type {2} is not compatible with camera rig parameter \'{3}\' of type {4}"
                      );
  pFVar12 = FTextFormat::FTextFormat(&local_a0,pFVar11,Default);
  pFVar6 = FText::Format<FText,FText,FText,FText,FText>
                     (&local_130,pFVar12,pFVar10,pFVar9,pFVar8,pFVar7,pFVar6);
  FCameraBuildLog::AddMessage(this->Owner->BuildLog,Error,(UObject *)0x0,pFVar6);
  local_100.TextData.Reference = local_120.TextData.Reference;
  if (local_130.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_130.TextData.Reference + 0x10))();
    local_100.TextData.Reference = local_120.TextData.Reference;
  }
LAB_14d550e45:
  if (local_100.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_100.TextData.Reference + 0x10))();
  }
  return false;
}

// SetCustomBlendableStructParameterOverride @ 14d562fe0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
UE::Cameras::Internal::FInterfaceParameterBindingBuilder::SetCustomBlendableStructParameterOverride
          (FInterfaceParameterBindingBuilder *this,UCameraObjectInterfaceBlendableParameter *param_1
          ,FBlendableParameterInfo *param_2)

{
  UScriptStruct *pUVar1;
  code *pcVar2;
  bool bVar3;
  FText *pFVar4;
  FText *pFVar5;
  FText *pFVar6;
  FText *pFVar7;
  FText *pFVar8;
  FText *pFVar9;
  FTextFormat *pFVar10;
  FCameraVariableID local_res10 [2];
  FName local_res18;
  FName local_res20;
  FName local_d8;
  FName local_d0;
  longlong local_c8;
  FText local_c0;
  FText local_b0;
  FText local_a0;
  FText local_90;
  FText local_80;
  FText local_70;
  FText local_60;
  FTextFormat local_50;
  
  if ((param_1->PrivateVariableID).Value == 0xffffffff) {
    bVar3 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1378543571254116488>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Build\\CameraObjectInterfaceBuilder.cpp"
                       ,0x88,"BlendableParameter->PrivateVariableID.IsValid()");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((FName)param_1->_padding_ != param_2->ParameterName) {
    bVar3 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1378543571254116489>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Build\\CameraObjectInterfaceBuilder.cpp"
                       ,0x89,
                       "BlendableParameter->TargetPropertyName == CustomParameter.ParameterName");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  bVar3 = CheckIfParameterCanBeOverridden(this,param_1,param_2);
  if (bVar3) {
    pUVar1 = (param_1->BlendableStructType).field0_0x0.DebugPtr;
    if (pUVar1 == (UScriptStruct *)0x0) {
      bVar3 = param_2->BlendableStructType == (UScriptStruct *)0x0;
    }
    else {
      bVar3 = pUVar1 == param_2->BlendableStructType;
    }
    if (bVar3) {
      local_d0 = param_2->ParameterName;
      local_c8 = param_1->_padding_;
      TMap<TTuple<FName,UObject_*>,FCameraVariableID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,UObject_*>,FCameraVariableID,0>_>
      ::RemoveAndCopyValue
                (&this->Owner->OldDrivenBlendableParameters,(TTuple<FName,UObject_*> *)&local_d0,
                 local_res10);
      param_2->OverrideVariableID->Value = (param_1->PrivateVariableID).Value;
    }
    else {
      local_res18 = (FName)pUVar1->_padding_;
      pFVar4 = FText::FromName(&local_a0,&local_res18);
      local_res20 = (FName)param_2->BlendableStructType->_padding_;
      pFVar5 = FText::FromName(&local_90,&local_res20);
      local_d8 = *(FName *)(param_1->_padding_ + 0x18);
      pFVar6 = FText::FromName(&local_80,&local_d8);
      pFVar7 = FText::FromName(&local_70,(FName *)&param_1->_padding_);
      pFVar8 = FText::FromString(&local_60,(FString *)&param_1->_padding_);
      pFVar9 = FText::AsLocalizable_Advanced_LocText
                         (&local_b0,L"CameraObjectInterfaceBuilder",
                          L"IncompatibleBlendableStructType",
                          L"Invalid interface parameter \'{0}\', driving property \'{1}\' on \'{2}\': expected type {3} but was {4}"
                         );
      pFVar10 = FTextFormat::FTextFormat(&local_50,pFVar9,Default);
      pFVar4 = FText::Format<FText,FText,FText,FText,FText>
                         (&local_c0,pFVar10,pFVar8,pFVar7,pFVar6,pFVar5,pFVar4);
      FCameraBuildLog::AddMessage(this->Owner->BuildLog,Error,(UObject *)0x0,pFVar4);
      if (local_c0.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_c0.TextData.Reference + 0x10))();
      }
      if (local_b0.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_b0.TextData.Reference + 0x10))();
        return;
      }
    }
  }
  return;
}

