// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 2

// StaticStruct @ 14df954e0

UScriptStruct * __cdecl FHairSimulationSettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FHairSimulationSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_HairStrandsCore();
    Z_Registration_Info_UScriptStruct_FHairSimulationSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FHairSimulationSettings,(UObject *)pUVar1,
                         L"HairSimulationSettings");
  }
  return Z_Registration_Info_UScriptStruct_FHairSimulationSettings.OuterSingleton;
}

// FHairSimulationSettings @ 14dfad6b0

FHairSimulationSettings * __thiscall
FHairSimulationSettings::FHairSimulationSettings(FHairSimulationSettings *this)

{
  this->bOverrideSettings = false;
  (this->SimulationSetup).bResetSimulation = false;
  (this->SimulationSetup).bDebugSimulation = false;
  (this->SimulationSetup).bLocalSimulation = true;
  (this->SimulationSetup).LinearVelocityScale = 1.0;
  (this->SimulationSetup).AngularVelocityScale = 1.0;
  ::FString::FString(&(this->SimulationSetup).LocalBone,"root");
  (this->SimulationSetup).TeleportDistance = 50.0;
  (this->SolverSettings).bEnableSimulation = false;
  (this->ExternalForces).GravityVector.field0_0x0._s_0.Z = -981.0;
  (this->ExternalForces).GravityVector.field0_0x0._s_0.X = 0.0;
  (this->ExternalForces).GravityVector.field0_0x0._s_0.Y = 0.0;
  (this->ExternalForces).AirDrag = 0.1;
  (this->ExternalForces).AirVelocity.field0_0x0._s_0.X = 0.0;
  (this->ExternalForces).AirVelocity.field0_0x0._s_0.Y = 0.0;
  (this->ExternalForces).AirVelocity.field0_0x0._s_0.Z = 0.0;
  (this->MaterialConstraints).BendDamping = 0.001;
  (this->MaterialConstraints).BendStiffness = 0.01;
  (this->MaterialConstraints).StretchDamping = 0.001;
  (this->MaterialConstraints).StretchStiffness = 1.0;
  (this->MaterialConstraints).StaticFriction = 0.1;
  (this->MaterialConstraints).KineticFriction = 0.1;
  (this->MaterialConstraints).StrandsViscosity = 1.0;
  (this->MaterialConstraints).CollisionRadius = 0.001;
  return this;
}

