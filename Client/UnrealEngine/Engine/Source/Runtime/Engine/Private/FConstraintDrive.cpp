// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// StaticStruct @ 14822b4e0

UScriptStruct * __cdecl FConstraintDrive::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FConstraintDrive.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FConstraintDrive.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FConstraintDrive,(UObject *)pUVar1,
                         L"ConstraintDrive");
  }
  return Z_Registration_Info_UScriptStruct_FConstraintDrive.OuterSingleton;
}

// FConstraintDrive @ 14824e6e0

FConstraintDrive * __thiscall FConstraintDrive::FConstraintDrive(FConstraintDrive *this)

{
  undefined1 *puVar1;
  
  this->bEnablePositionDrive = '\0';
  this->bEnableVelocityDrive = '\0';
  this->Stiffness = 50.0;
  this->Damping = 1.0;
  this->MaxForce = 0.0;
  return this;
}

// SetDriveParams @ 1482aa7d0

void __thiscall
FConstraintDrive::SetDriveParams(FConstraintDrive *this,float param_1,float param_2,float param_3)

{
  this->Stiffness = param_1;
  this->Damping = param_2;
  this->MaxForce = param_3;
  return;
}

