// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// StaticStruct @ 14822e510

UScriptStruct * __cdecl FConstraintBaseParams::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FConstraintBaseParams.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FConstraintBaseParams.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FConstraintBaseParams,(UObject *)pUVar1,
                         L"ConstraintBaseParams");
  }
  return Z_Registration_Info_UScriptStruct_FConstraintBaseParams.OuterSingleton;
}

// FConstraintBaseParams @ 14824e670

FConstraintBaseParams * __thiscall
FConstraintBaseParams::FConstraintBaseParams(FConstraintBaseParams *this)

{
  this->bSoftConstraint = '\0';
  this->Stiffness = 50.0;
  this->Damping = 5.0;
  this->Restitution = 0.0;
  this->ContactDistance = 1.0;
  return this;
}

