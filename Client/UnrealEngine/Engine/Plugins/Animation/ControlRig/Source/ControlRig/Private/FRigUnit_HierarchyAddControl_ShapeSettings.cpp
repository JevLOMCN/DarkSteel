// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 4

// StaticStruct @ 14a472930

UScriptStruct * __cdecl FRigUnit_HierarchyAddControl_ShapeSettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyAddControl_ShapeSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyAddControl_ShapeSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_HierarchyAddControl_ShapeSettings,
                         (UObject *)pUVar1,L"RigUnit_HierarchyAddControl_ShapeSettings");
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyAddControl_ShapeSettings.OuterSingleton
  ;
}

// FRigUnit_HierarchyAddControl_ShapeSettings @ 14a510da0

FRigUnit_HierarchyAddControl_ShapeSettings * __thiscall
FRigUnit_HierarchyAddControl_ShapeSettings::FRigUnit_HierarchyAddControl_ShapeSettings
          (FRigUnit_HierarchyAddControl_ShapeSettings *this)

{
  this->bVisible = true;
  ::FName::FName(&this->Name,L"Default");
  (this->Color).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FLinearColor::Red.field0_0x0;
  *&(this->Transform).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->Transform).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->Transform).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->Transform).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->Transform).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->Transform).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  return this;
}

// Configure @ 14a520280

void __thiscall
FRigUnit_HierarchyAddControl_ShapeSettings::Configure
          (FRigUnit_HierarchyAddControl_ShapeSettings *this,FRigControlSettings *param_1)

{
  undefined8 uVar1;
  double dVar2;
  
  param_1->bShapeVisible = this->bVisible;
  param_1->ShapeName = this->Name;
  uVar1 = *(undefined8 *)((longlong)&(this->Color).field0_0x0 + 8);
  *(undefined8 *)&(param_1->ShapeColor).field0_0x0 = *(undefined8 *)&(this->Color).field0_0x0;
  *(undefined8 *)((longlong)&(param_1->ShapeColor).field0_0x0 + 8) = uVar1;
  dVar2 = (this->Transform).Rotation.XY.m128d_f64[1];
  (param_1->ShapeTransform).Rotation.XY.m128d_f64[0] = (this->Transform).Rotation.XY.m128d_f64[0];
  (param_1->ShapeTransform).Rotation.XY.m128d_f64[1] = dVar2;
  dVar2 = (this->Transform).Rotation.ZW.m128d_f64[1];
  (param_1->ShapeTransform).Rotation.ZW.m128d_f64[0] = (this->Transform).Rotation.ZW.m128d_f64[0];
  (param_1->ShapeTransform).Rotation.ZW.m128d_f64[1] = dVar2;
  dVar2 = (this->Transform).Translation.XY.m128d_f64[1];
  (param_1->ShapeTransform).Translation.XY.m128d_f64[0] =
       (this->Transform).Translation.XY.m128d_f64[0];
  (param_1->ShapeTransform).Translation.XY.m128d_f64[1] = dVar2;
  dVar2 = (this->Transform).Translation.ZW.m128d_f64[1];
  (param_1->ShapeTransform).Translation.ZW.m128d_f64[0] =
       (this->Transform).Translation.ZW.m128d_f64[0];
  (param_1->ShapeTransform).Translation.ZW.m128d_f64[1] = dVar2;
  dVar2 = (this->Transform).Scale3D.XY.m128d_f64[1];
  (param_1->ShapeTransform).Scale3D.XY.m128d_f64[0] = (this->Transform).Scale3D.XY.m128d_f64[0];
  (param_1->ShapeTransform).Scale3D.XY.m128d_f64[1] = dVar2;
  dVar2 = (this->Transform).Scale3D.ZW.m128d_f64[1];
  (param_1->ShapeTransform).Scale3D.ZW.m128d_f64[0] = (this->Transform).Scale3D.ZW.m128d_f64[0];
  (param_1->ShapeTransform).Scale3D.ZW.m128d_f64[1] = dVar2;
  return;
}

// ConfigureFrom @ 14a520cd0

void __thiscall
FRigUnit_HierarchyAddControl_ShapeSettings::ConfigureFrom
          (FRigUnit_HierarchyAddControl_ShapeSettings *this,FRigControlElement *param_1,
          FRigControlSettings *param_2)

{
  undefined8 uVar1;
  double dVar2;
  FRigCurrentAndInitialTransform *pFVar3;
  TTransform<double> *pTVar4;
  
  this->bVisible = param_2->bShapeVisible;
  this->Name = param_2->ShapeName;
  uVar1 = *(undefined8 *)((longlong)&(param_2->ShapeColor).field0_0x0 + 8);
  *(undefined8 *)&(this->Color).field0_0x0 = *(undefined8 *)&(param_2->ShapeColor).field0_0x0;
  *(undefined8 *)((longlong)&(this->Color).field0_0x0 + 8) = uVar1;
  pFVar3 = FRigControlElement::GetShapeTransform(param_1);
  pTVar4 = FRigComputedTransform::Get(&(pFVar3->Initial).Local);
  dVar2 = (pTVar4->Rotation).XY.m128d_f64[1];
  (this->Transform).Rotation.XY.m128d_f64[0] = (pTVar4->Rotation).XY.m128d_f64[0];
  (this->Transform).Rotation.XY.m128d_f64[1] = dVar2;
  dVar2 = (pTVar4->Rotation).ZW.m128d_f64[1];
  (this->Transform).Rotation.ZW.m128d_f64[0] = (pTVar4->Rotation).ZW.m128d_f64[0];
  (this->Transform).Rotation.ZW.m128d_f64[1] = dVar2;
  dVar2 = (pTVar4->Translation).XY.m128d_f64[1];
  (this->Transform).Translation.XY.m128d_f64[0] = (pTVar4->Translation).XY.m128d_f64[0];
  (this->Transform).Translation.XY.m128d_f64[1] = dVar2;
  dVar2 = (pTVar4->Translation).ZW.m128d_f64[1];
  (this->Transform).Translation.ZW.m128d_f64[0] = (pTVar4->Translation).ZW.m128d_f64[0];
  (this->Transform).Translation.ZW.m128d_f64[1] = dVar2;
  dVar2 = (pTVar4->Scale3D).XY.m128d_f64[1];
  (this->Transform).Scale3D.XY.m128d_f64[0] = (pTVar4->Scale3D).XY.m128d_f64[0];
  (this->Transform).Scale3D.XY.m128d_f64[1] = dVar2;
  dVar2 = (pTVar4->Scale3D).ZW.m128d_f64[1];
  (this->Transform).Scale3D.ZW.m128d_f64[0] = (pTVar4->Scale3D).ZW.m128d_f64[0];
  (this->Transform).Scale3D.ZW.m128d_f64[1] = dVar2;
  return;
}

