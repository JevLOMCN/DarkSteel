// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 2

// StaticStruct @ 14a4f6e30

UScriptStruct * __cdecl FRigUnit_HierarchyCreatePoseItemArray_Entry::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyCreatePoseItemArray_Entry.OuterSingleton
      == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyCreatePoseItemArray_Entry.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_HierarchyCreatePoseItemArray_Entry,
                         (UObject *)pUVar1,L"RigUnit_HierarchyCreatePoseItemArray_Entry");
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyCreatePoseItemArray_Entry.
         OuterSingleton;
}

// FRigUnit_HierarchyCreatePoseItemArray_Entry @ 14a511520

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigUnit_HierarchyCreatePoseItemArray_Entry * __thiscall
FRigUnit_HierarchyCreatePoseItemArray_Entry::FRigUnit_HierarchyCreatePoseItemArray_Entry
          (FRigUnit_HierarchyCreatePoseItemArray_Entry *this)

{
  undefined8 uVar1;
  
  (this->Item).Type = Bone;
  (this->Item).Name.ComparisonIndex = 0;
  (this->Item).Name.Number = 0;
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
  this->UseEulerAngles = false;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->EulerAngles).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->EulerAngles).field0_0x0._s_0.Y = (double)uVar1;
  (this->EulerAngles).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->CurveValue = 0.0;
  return this;
}

