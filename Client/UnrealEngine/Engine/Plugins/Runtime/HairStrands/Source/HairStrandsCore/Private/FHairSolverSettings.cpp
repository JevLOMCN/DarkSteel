// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 3

// StaticStruct @ 14df94f00

UScriptStruct * __cdecl FHairSolverSettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FHairSolverSettings.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_HairStrandsCore();
    Z_Registration_Info_UScriptStruct_FHairSolverSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FHairSolverSettings,(UObject *)pUVar1,
                         L"HairSolverSettings");
  }
  return Z_Registration_Info_UScriptStruct_FHairSolverSettings.OuterSingleton;
}

// FHairSolverSettings @ 14dfad770

FHairSolverSettings * __thiscall FHairSolverSettings::FHairSolverSettings(FHairSolverSettings *this)

{
  undefined1 *this_00;
  
  this_00 = &(this->CustomSystem).SoftObjectPtr.field_0x18;
  *(undefined8 *)&(this->CustomSystem).SoftObjectPtr = 0;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->CustomSystem).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->CustomSystem).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->CustomSystem).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  this->bEnableDeformation = false;
  this->EnableSimulation = false;
  this->NiagaraSolver = AngularSprings;
  this->SubSteps = 5;
  this->IterationCount = 5;
  this->GravityPreloading = 0.0;
  this->bForceVisible = false;
  return this;
}

// operator== @ 14dfb2410

bool __thiscall
FHairSolverSettings::operator==(FHairSolverSettings *this,FHairSolverSettings *param_1)

{
  if ((((this->EnableSimulation == param_1->EnableSimulation) &&
       (this->bEnableDeformation == param_1->bEnableDeformation)) &&
      (this->NiagaraSolver == param_1->NiagaraSolver)) &&
     (((this->SubSteps == param_1->SubSteps && (this->IterationCount == param_1->IterationCount)) &&
      (this->bForceVisible == param_1->bForceVisible)))) {
    return true;
  }
  return false;
}

