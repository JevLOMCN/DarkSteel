// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IKRig
// Functions: 2

// StaticStruct @ 14dee95c0

UScriptStruct * __cdecl FTargetChainSettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FTargetChainSettings.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FTargetChainSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTargetChainSettings,(UObject *)pUVar1,
                         L"TargetChainSettings");
  }
  return Z_Registration_Info_UScriptStruct_FTargetChainSettings.OuterSingleton;
}

// FTargetChainSettings @ 14df18d90

FTargetChainSettings * __thiscall
FTargetChainSettings::FTargetChainSettings(FTargetChainSettings *this)

{
  undefined8 uVar1;
  double dVar2;
  
  (this->FK).EnableFK = true;
  (this->FK).RotationMode = Interpolated;
  (this->FK).PoleVectorMaintainOffset = false;
  (this->FK).PoleVectorOffset = 0.0;
  (this->FK).RotationAlpha = 1.0;
  (this->FK).TranslationMode = None;
  (this->FK).TranslationAlpha = 1.0;
  (this->FK).PoleVectorMatching = 0.0;
  (this->IK).BlendToSource = 0.0;
  (this->IK).EnableIK = true;
  (this->IK).BlendToSourceTranslation = 1.0;
  uVar1 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  (this->IK).BlendToSourceRotation = 0.0;
  (this->IK).BlendToSourceWeights.field0_0x0._s_0.X =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  (this->IK).BlendToSourceWeights.field0_0x0._s_0.Y = (double)uVar1;
  (this->IK).BlendToSourceWeights.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->IK).StaticOffset.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->IK).StaticOffset.field0_0x0._s_0.Y = (double)uVar1;
  (this->IK).StaticOffset.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->IK).StaticLocalOffset.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->IK).StaticLocalOffset.field0_0x0._s_0.Y = (double)uVar1;
  (this->IK).StaticLocalOffset.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  (this->IK).StaticRotationOffset.Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->IK).StaticRotationOffset.Yaw = dVar2;
  (this->IK).StaticRotationOffset.Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  (this->IK).ScaleVertical = 1.0;
  (this->IK).Extension = 1.0;
  (this->IK).bAffectedByIKWarping = true;
  (this->SpeedPlanting).EnableSpeedPlanting = false;
  (this->SpeedPlanting).SpeedCurveName.ComparisonIndex = 0;
  (this->SpeedPlanting).SpeedCurveName.Number = 0;
  (this->SpeedPlanting).SpeedThreshold = 15.0;
  (this->SpeedPlanting).UnplantStiffness = 250.0;
  (this->SpeedPlanting).UnplantCriticalDamping = 1.0;
  return this;
}

