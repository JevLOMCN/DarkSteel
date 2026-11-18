// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FullBodyIK
// Functions: 2

// StaticStruct @ 14df6b320

UScriptStruct * __cdecl FFBIKConstraintOption::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FFBIKConstraintOption.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_FullBodyIK();
    Z_Registration_Info_UScriptStruct_FFBIKConstraintOption.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FFBIKConstraintOption,(UObject *)pUVar1,
                         L"FBIKConstraintOption");
  }
  return Z_Registration_Info_UScriptStruct_FFBIKConstraintOption.OuterSingleton;
}

// FFBIKConstraintOption @ 14df73680

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FFBIKConstraintOption * __thiscall
FFBIKConstraintOption::FFBIKConstraintOption(FFBIKConstraintOption *this)

{
  undefined8 uVar1;
  double dVar2;
  
  (this->Item).Type = Bone;
  (this->Item).Name.ComparisonIndex = 0;
  (this->Item).Name.Number = 0;
  this->bEnabled = true;
  this->bUseStiffness = true;
  (this->LinearStiffness).field0_0x0._s_0.X = 1.0;
  (this->LinearStiffness).field0_0x0._s_0.Y = 1.0;
  (this->LinearStiffness).field0_0x0._s_0.Z = 1.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->AngularStiffness).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->AngularStiffness).field0_0x0._s_0.Y = (double)uVar1;
  (this->AngularStiffness).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->AngularLimit).LimitType_X = Locked;
  (this->AngularLimit).LimitType_Y = Locked;
  (this->AngularLimit).LimitType_Z = Locked;
  (this->AngularLimit).Limit.field0_0x0._s_0.X = 0.0;
  (this->AngularLimit).Limit.field0_0x0._s_0.Y = 0.0;
  (this->AngularLimit).Limit.field0_0x0._s_0.Z = 0.0;
  this->bUseAngularLimit = false;
  this->bUsePoleVector = false;
  uVar1 = UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Y;
  this->PoleVectorOption = Direction;
  (this->PoleVector).field0_0x0._s_0.X = UE::Math::TVector<double>::RightVector.field0_0x0._s_0.X;
  (this->PoleVector).field0_0x0._s_0.Y = (double)uVar1;
  (this->PoleVector).field0_0x0._s_0.Z = UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Z;
  dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  (this->OffsetRotation).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->OffsetRotation).Yaw = dVar2;
  (this->OffsetRotation).Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  (this->AngularLimit).LimitType_X = Free;
  (this->AngularLimit).LimitType_Y = Free;
  (this->AngularLimit).LimitType_Z = Free;
  return this;
}

