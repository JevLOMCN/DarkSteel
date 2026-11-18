// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_CS
// Functions: 2

// StaticStruct @ 14a69d020

UScriptStruct * __cdecl FWN_CS_CharacterLightDesc::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FWN_CS_CharacterLightDesc.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_WN_CS();
    Z_Registration_Info_UScriptStruct_FWN_CS_CharacterLightDesc.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FWN_CS_CharacterLightDesc,(UObject *)pUVar1,
                         L"WN_CS_CharacterLightDesc");
  }
  return Z_Registration_Info_UScriptStruct_FWN_CS_CharacterLightDesc.OuterSingleton;
}

// FWN_CS_CharacterLightDesc @ 14a6a1910

FWN_CS_CharacterLightDesc * __thiscall
FWN_CS_CharacterLightDesc::FWN_CS_CharacterLightDesc(FWN_CS_CharacterLightDesc *this)

{
  undefined8 uVar1;
  double dVar2;
  uint uVar3;
  
  this->LightType = Point;
  (this->Name).Number = 0;
  this->ID = 0;
  (this->Name).ComparisonIndex = 0;
  (this->LightColor).field0_0x0._s_0.R =
       FLinearColor::sRGBToLinearTable[FColor::White.field0_0x0._s_0.R];
  (this->LightColor).field0_0x0._s_0.G =
       FLinearColor::sRGBToLinearTable[FColor::White.field0_0x0._s_0.G];
  (this->LightColor).field0_0x0._s_0.B =
       FLinearColor::sRGBToLinearTable[FColor::White.field0_0x0._s_0.B];
  uVar3 = (uint)FColor::White.field0_0x0._s_0.A;
  this->Intensity = 1000.0;
  this->AttenuationRadius = 200.0;
  this->Radius = 200.0;
  (this->LightColor).field0_0x0._s_0.A = (float)uVar3 * __real_3b808081;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->LocationOffset).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X
  ;
  (this->LocationOffset).field0_0x0._s_0.Y = (double)uVar1;
  (this->LocationOffset).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z
  ;
  dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  (this->RotationOffset).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->RotationOffset).Yaw = dVar2;
  (this->RotationOffset).Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  this->InnerConeAngle = 0.0;
  this->OuterConeAngle = 44.0;
  return this;
}

