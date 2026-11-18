// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 2

// StaticStruct @ 14a2c2900

UScriptStruct * __cdecl FRigPoseElement::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigPoseElement.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigPoseElement.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigPoseElement,(UObject *)pUVar1,
                         L"RigPoseElement");
  }
  return Z_Registration_Info_UScriptStruct_FRigPoseElement.OuterSingleton;
}

// FRigPoseElement @ 14a2dccd0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigPoseElement * __thiscall FRigPoseElement::FRigPoseElement(FRigPoseElement *this)

{
  undefined8 uVar1;
  
  (this->Index).Key.Type = None;
  (this->Index).Key.Name.ComparisonIndex = 0;
  (this->Index).Key.Name.Number = 0;
  (this->Index).Index = 0xffff;
  (this->Index).ContainerVersion = -1;
  (this->Index).Element = (FRigBaseElement *)0x0;
  *&(this->GlobalTransform).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->GlobalTransform).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->GlobalTransform).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->GlobalTransform).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->GlobalTransform).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->GlobalTransform).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  *&(this->LocalTransform).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->LocalTransform).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->LocalTransform).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->LocalTransform).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->LocalTransform).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->LocalTransform).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->PreferredEulerAngle).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->PreferredEulerAngle).field0_0x0._s_0.Y = (double)uVar1;
  (this->PreferredEulerAngle).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  URigHierarchy::GetDefaultParentKey(&this->ActiveParent);
  this->CurveValue = 0.0;
  return this;
}

