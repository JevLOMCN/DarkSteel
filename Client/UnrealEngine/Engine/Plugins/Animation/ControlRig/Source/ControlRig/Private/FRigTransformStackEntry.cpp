// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 2

// StaticStruct @ 14a2b9020

UScriptStruct * __cdecl FRigTransformStackEntry::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigTransformStackEntry.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigTransformStackEntry.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigTransformStackEntry,(UObject *)pUVar1,
                         L"RigTransformStackEntry");
  }
  return Z_Registration_Info_UScriptStruct_FRigTransformStackEntry.OuterSingleton;
}

// FRigTransformStackEntry @ 14a2dce60

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigTransformStackEntry * __thiscall
FRigTransformStackEntry::FRigTransformStackEntry(FRigTransformStackEntry *this)

{
  (this->Key).Type = None;
  (this->Key).Name.ComparisonIndex = 0;
  (this->Key).Name.Number = 0;
  this->EntryType = '\0';
  this->TransformType = '\x01';
  *&(this->OldTransform).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->OldTransform).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->OldTransform).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->OldTransform).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->OldTransform).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->OldTransform).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  *&(this->NewTransform).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->NewTransform).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->NewTransform).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->NewTransform).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->NewTransform).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->NewTransform).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  (this->Callstack).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Callstack).ArrayNum = 0;
  (this->Callstack).ArrayMax = 0;
  this->bAffectChildren = true;
  return this;
}

