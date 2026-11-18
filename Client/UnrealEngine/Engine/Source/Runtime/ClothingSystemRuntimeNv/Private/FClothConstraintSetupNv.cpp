// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ClothingSystemRuntimeNv
// Functions: 4

// StaticStruct @ 148c35640

UScriptStruct * __cdecl FClothConstraintSetupNv::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FClothConstraintSetupNv.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ClothingSystemRuntimeNv();
    Z_Registration_Info_UScriptStruct_FClothConstraintSetupNv.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FClothConstraintSetupNv,(UObject *)pUVar1,
                         L"ClothConstraintSetupNv");
  }
  return Z_Registration_Info_UScriptStruct_FClothConstraintSetupNv.OuterSingleton;
}

// FClothConstraintSetupNv @ 148c36400

FClothConstraintSetupNv * __thiscall
FClothConstraintSetupNv::FClothConstraintSetupNv(FClothConstraintSetupNv *this)

{
  this->Stiffness = 1.0;
  this->StiffnessMultiplier = 1.0;
  this->StretchLimit = 1.0;
  this->CompressionLimit = 1.0;
  return this;
}

// MigrateFrom @ 148c371a0

void __thiscall
FClothConstraintSetupNv::MigrateFrom
          (FClothConstraintSetupNv *this,FClothConstraintSetup_Legacy *param_1)

{
  this->Stiffness = param_1->Stiffness;
  this->StiffnessMultiplier = param_1->StiffnessMultiplier;
  this->StretchLimit = param_1->StretchLimit;
  this->CompressionLimit = param_1->CompressionLimit;
  return;
}

// MigrateTo @ 148c37390

void __thiscall
FClothConstraintSetupNv::MigrateTo
          (FClothConstraintSetupNv *this,FClothConstraintSetup_Legacy *param_1)

{
  param_1->Stiffness = this->Stiffness;
  param_1->StiffnessMultiplier = this->StiffnessMultiplier;
  param_1->StretchLimit = this->StretchLimit;
  param_1->CompressionLimit = this->CompressionLimit;
  return;
}

