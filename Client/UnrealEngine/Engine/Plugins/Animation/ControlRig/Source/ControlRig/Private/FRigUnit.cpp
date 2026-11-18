// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 4

// DetermineSpaceForPin @ 14a203750

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigElementKey * __thiscall
FRigUnit::DetermineSpaceForPin
          (FRigUnit *this,FRigElementKey *__return_storage_ptr__,FString *param_1,void *param_2)

{
  __return_storage_ptr__->Type = None;
  (__return_storage_ptr__->Name).ComparisonIndex = 0;
  (__return_storage_ptr__->Name).Number = 0;
  return __return_storage_ptr__;
}

// DetermineOffsetTransformForPin @ 14a203770

TTransform<double> * __thiscall
FRigUnit::DetermineOffsetTransformForPin
          (FRigUnit *this,TTransform<double> *__return_storage_ptr__,FString *param_1,void *param_2)

{
  __m128d _Var1;
  __m128d _Var2;
  
  _Var1.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(__return_storage_ptr__->Rotation).XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  _Var2 = UE::Math::TTransform<double>::Identity.Translation.XY;
  *&(__return_storage_ptr__->Rotation).ZW.m128d_f64 = _Var1.m128d_f64;
  _Var1 = UE::Math::TTransform<double>::Identity.Translation.ZW;
  *&(__return_storage_ptr__->Translation).XY.m128d_f64 = _Var2.m128d_f64;
  _Var2 = UE::Math::TTransform<double>::Identity.Scale3D.XY;
  *&(__return_storage_ptr__->Translation).ZW.m128d_f64 = _Var1.m128d_f64;
  _Var1 = UE::Math::TTransform<double>::Identity.Scale3D.ZW;
  *&(__return_storage_ptr__->Scale3D).XY.m128d_f64 = _Var2.m128d_f64;
  *&(__return_storage_ptr__->Scale3D).ZW.m128d_f64 = _Var1.m128d_f64;
  return __return_storage_ptr__;
}

// ~FRigUnit @ 14a226200

void __thiscall FRigUnit::~FRigUnit(FRigUnit *this)

{
  *this = (FRigUnit)&___7FRigVMStruct__6B_;
  return;
}

// StaticStruct @ 14a480410

UScriptStruct * __cdecl FRigUnit::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit,(UObject *)pUVar1,L"RigUnit");
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit.OuterSingleton;
}

