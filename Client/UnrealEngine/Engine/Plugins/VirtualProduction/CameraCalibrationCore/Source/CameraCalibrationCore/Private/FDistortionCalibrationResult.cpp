// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CameraCalibrationCore
// Functions: 2

// StaticStruct @ 14d67cfb0

UScriptStruct * __cdecl FDistortionCalibrationResult::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDistortionCalibrationResult.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CameraCalibrationCore();
    Z_Registration_Info_UScriptStruct_FDistortionCalibrationResult.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDistortionCalibrationResult,(UObject *)pUVar1,
                         L"DistortionCalibrationResult");
  }
  return Z_Registration_Info_UScriptStruct_FDistortionCalibrationResult.OuterSingleton;
}

// FDistortionCalibrationResult @ 14d6a7610

FDistortionCalibrationResult * __thiscall
FDistortionCalibrationResult::FDistortionCalibrationResult(FDistortionCalibrationResult *this)

{
  undefined8 uVar1;
  double dVar2;
  
  (this->CameraPoses).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CameraPoses).ArrayNum = 0;
  (this->CameraPoses).ArrayMax = 0;
  (this->FocalLength).FxFy.field0_0x0._s_0.X = 1.0;
  (this->FocalLength).FxFy.field0_0x0._s_0.Y = 1.7777777777777777;
  this->EvaluatedFocus = 0.0;
  this->EvaluatedZoom = 0.0;
  this->ReprojectionError = 0.0;
  (this->ImageCenter).PrincipalPoint.field0_0x0._s_0.X = 0.5;
  (this->ImageCenter).PrincipalPoint.field0_0x0._s_0.Y = 0.5;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->NodalOffset).LocationOffset.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->NodalOffset).LocationOffset.field0_0x0._s_0.Y = (double)uVar1;
  (this->NodalOffset).LocationOffset.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar2 = UE::Math::TQuat<double>::Identity.Y;
  (this->NodalOffset).RotationOffset.X = UE::Math::TQuat<double>::Identity.X;
  (this->NodalOffset).RotationOffset.Y = dVar2;
  dVar2 = UE::Math::TQuat<double>::Identity.W;
  (this->NodalOffset).RotationOffset.Z = UE::Math::TQuat<double>::Identity.Z;
  (this->NodalOffset).RotationOffset.W = dVar2;
  (this->Parameters).Parameters.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Parameters).Parameters.ArrayNum = 0;
  (this->Parameters).Parameters.ArrayMax = 0;
  (this->STMap).DistortionMap.field0_0x0.DebugPtr = (UTexture *)0x0;
  (this->STMap).MapFormat.PixelOrigin = TopLeft;
  (this->STMap).MapFormat.UndistortionChannels = RG;
  (this->STMapFullPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->STMapFullPath).Data.ArrayNum = 0;
  (this->STMapFullPath).Data.ArrayMax = 0;
  (this->STMap).MapFormat.DistortionChannels = BA;
  FText::FText(&this->ErrorMessage);
  return this;
}

