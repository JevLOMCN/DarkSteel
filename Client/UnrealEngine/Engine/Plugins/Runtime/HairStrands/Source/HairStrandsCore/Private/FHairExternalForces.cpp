// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 3

// StaticStruct @ 14df95010

UScriptStruct * __cdecl FHairExternalForces::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FHairExternalForces.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_HairStrandsCore();
    Z_Registration_Info_UScriptStruct_FHairExternalForces.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FHairExternalForces,(UObject *)pUVar1,
                         L"HairExternalForces");
  }
  return Z_Registration_Info_UScriptStruct_FHairExternalForces.OuterSingleton;
}

// FHairExternalForces @ 14dfac140

FHairExternalForces * __thiscall FHairExternalForces::FHairExternalForces(FHairExternalForces *this)

{
  (this->GravityVector).field0_0x0._s_0.X = 0.0;
  (this->GravityVector).field0_0x0._s_0.Y = 0.0;
  (this->GravityVector).field0_0x0._s_0.Z = -981.0;
  this->AirDrag = 0.1;
  (this->AirVelocity).field0_0x0._s_0.X = 0.0;
  (this->AirVelocity).field0_0x0._s_0.Y = 0.0;
  (this->AirVelocity).field0_0x0._s_0.Z = 0.0;
  return this;
}

// operator== @ 14dfb1c70

bool __thiscall
FHairExternalForces::operator==(FHairExternalForces *this,FHairExternalForces *param_1)

{
  if (((((param_1->GravityVector).field0_0x0._s_0.X == (this->GravityVector).field0_0x0._s_0.X) &&
       ((param_1->GravityVector).field0_0x0._s_0.Y == (this->GravityVector).field0_0x0._s_0.Y)) &&
      ((param_1->GravityVector).field0_0x0._s_0.Z == (this->GravityVector).field0_0x0._s_0.Z)) &&
     (((param_1->AirDrag == this->AirDrag &&
       ((param_1->AirVelocity).field0_0x0._s_0.X == (this->AirVelocity).field0_0x0._s_0.X)) &&
      (((param_1->AirVelocity).field0_0x0._s_0.Y == (this->AirVelocity).field0_0x0._s_0.Y &&
       ((param_1->AirVelocity).field0_0x0._s_0.Z == (this->AirVelocity).field0_0x0._s_0.Z)))))) {
    return true;
  }
  return false;
}

