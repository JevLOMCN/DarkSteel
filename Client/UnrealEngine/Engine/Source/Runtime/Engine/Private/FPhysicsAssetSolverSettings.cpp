// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// StaticStruct @ 1482c9840

UScriptStruct * __cdecl FPhysicsAssetSolverSettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPhysicsAssetSolverSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FPhysicsAssetSolverSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPhysicsAssetSolverSettings,(UObject *)pUVar1,
                         L"PhysicsAssetSolverSettings");
  }
  return Z_Registration_Info_UScriptStruct_FPhysicsAssetSolverSettings.OuterSingleton;
}

// FPhysicsAssetSolverSettings @ 1482d9000

FPhysicsAssetSolverSettings * __thiscall
FPhysicsAssetSolverSettings::FPhysicsAssetSolverSettings(FPhysicsAssetSolverSettings *this)

{
  this->PositionIterations = 6;
  this->FixedTimeStep = 0.0;
  this->VelocityIterations = 1;
  this->ProjectionIterations = 1;
  this->CullDistance = 3.0;
  this->MaxDepenetrationVelocity = 0.0;
  this->bUseLinearJointSolver = true;
  this->bUseManifolds = true;
  return this;
}

