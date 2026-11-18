// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 2

// StaticStruct @ 14a2c4e70

UScriptStruct * __cdecl FRigSocketState::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigSocketState.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigSocketState.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigSocketState,(UObject *)pUVar1,
                         L"RigSocketState");
  }
  return Z_Registration_Info_UScriptStruct_FRigSocketState.OuterSingleton;
}

// FRigSocketState @ 14a2dcde0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigSocketState * __thiscall FRigSocketState::FRigSocketState(FRigSocketState *this)

{
  (this->Name).ComparisonIndex = 0;
  (this->Name).Number = 0;
  (this->Parent).Type = None;
  (this->Parent).Name.ComparisonIndex = 0;
  (this->Parent).Name.Number = 0;
  *&(this->InitialLocalTransform).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->InitialLocalTransform).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->InitialLocalTransform).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->InitialLocalTransform).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->InitialLocalTransform).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->InitialLocalTransform).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  (this->Color).field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FRigSocketElement::SocketDefaultColor.field0_0x0;
  (this->Description).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Description).Data.ArrayNum = 0;
  (this->Description).Data.ArrayMax = 0;
  return this;
}

