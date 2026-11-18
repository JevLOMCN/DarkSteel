// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 2

// StaticStruct @ 14a1ff590

UScriptStruct * __cdecl FControlShapeActorCreationParam::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FControlShapeActorCreationParam.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FControlShapeActorCreationParam.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FControlShapeActorCreationParam,(UObject *)pUVar1
                         ,L"ControlShapeActorCreationParam");
  }
  return Z_Registration_Info_UScriptStruct_FControlShapeActorCreationParam.OuterSingleton;
}

// FControlShapeActorCreationParam @ 14a21f340

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FControlShapeActorCreationParam * __thiscall
FControlShapeActorCreationParam::FControlShapeActorCreationParam
          (FControlShapeActorCreationParam *this)

{
  undefined1 *puVar1;
  FLinearColor FVar2;
  undefined8 local_res8;
  
  this->ControlRigIndex = -1;
  this->ManipObj = (UObject *)0x0;
  this->ControlRig = (UControlRig *)0x0;
  (this->ControlName).ComparisonIndex = 0;
  (this->ControlName).Number = 0;
  (this->ShapeName).ComparisonIndex = 0;
  (this->ShapeName).Number = 0;
  *&(this->SpawnTransform).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->SpawnTransform).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->SpawnTransform).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->SpawnTransform).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->SpawnTransform).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->SpawnTransform).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  *&(this->ShapeTransform).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->ShapeTransform).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->ShapeTransform).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->ShapeTransform).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->ShapeTransform).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->ShapeTransform).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  *&(this->MeshTransform).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->MeshTransform).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->MeshTransform).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->MeshTransform).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->MeshTransform).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->MeshTransform).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  puVar1 = &(this->StaticMesh).SoftObjectPtr.field_0x18;
  *(undefined8 *)&(this->StaticMesh).SoftObjectPtr = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&(this->StaticMesh).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->StaticMesh).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->StaticMesh).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)puVar1,0);
  local_res8 = 0;
  FSoftObjectPtr::operator=(&(this->StaticMesh).SoftObjectPtr,(FObjectPtr)&local_res8);
  puVar1 = &(this->Material).SoftObjectPtr.field_0x18;
  *(undefined8 *)&(this->Material).SoftObjectPtr = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&(this->Material).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->Material).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->Material).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)puVar1,0);
  local_res8 = 0;
  FSoftObjectPtr::operator=(&(this->Material).SoftObjectPtr,(FObjectPtr)&local_res8);
  (this->ColorParameterName).ComparisonIndex = 0;
  FVar2 = FLinearColor::Red;
  (this->ColorParameterName).Number = 0;
  this->bSelectable = true;
  (this->Color).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar2.field0_0x0;
  return this;
}

