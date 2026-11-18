// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 3

// StaticStruct @ 1436f1190

UScriptStruct * __cdecl FChaosSolverConfiguration::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FChaosSolverConfiguration.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Chaos();
    Z_Registration_Info_UScriptStruct_FChaosSolverConfiguration.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FChaosSolverConfiguration,(UObject *)pUVar1,
                         L"ChaosSolverConfiguration");
  }
  return Z_Registration_Info_UScriptStruct_FChaosSolverConfiguration.OuterSingleton;
}

// FChaosSolverConfiguration @ 1436f5960

FChaosSolverConfiguration * __thiscall
FChaosSolverConfiguration::FChaosSolverConfiguration(FChaosSolverConfiguration *this)

{
  this->PositionIterations = 8;
  (this->CollisionFilterSettings).MinMass = 0.0;
  (this->CollisionFilterSettings).MinSpeed = 0.0;
  (this->CollisionFilterSettings).MinImpulse = 0.0;
  this->bGenerateBreakData = false;
  (this->BreakingFilterSettings).FilterEnabled = false;
  (this->BreakingFilterSettings).MinMass = 0.0;
  (this->BreakingFilterSettings).MinSpeed = 0.0;
  (this->BreakingFilterSettings).MinVolume = 0.0;
  this->bGenerateTrailingData = false;
  (this->TrailingFilterSettings).FilterEnabled = false;
  (this->TrailingFilterSettings).MinMass = 0.0;
  (this->TrailingFilterSettings).MinSpeed = 0.0;
  (this->TrailingFilterSettings).MinVolume = 0.0;
  this->VelocityIterations = 2;
  this->ProjectionIterations = 1;
  this->CollisionMarginFraction = 0.05;
  this->CollisionMarginMax = 10.0;
  this->CollisionCullDistance = 3.0;
  this->CollisionMaxPushOutVelocity = 1000.0;
  this->CollisionInitialOverlapDepenetrationVelocity = -1.0;
  this->ClusterConnectionFactor = 1.0;
  this->ClusterUnionConnectionType = DelaunayTriangulation;
  (this->DestructionSettings).PerAdvanceBreaksAllowed = 0x7fffffff;
  (this->DestructionSettings).PerAdvanceBreaksRescheduleLimit = 0x7fffffff;
  (this->DestructionSettings).ClusteringParticleReleaseThrottlingMinCount = -1;
  (this->DestructionSettings).ClusteringParticleReleaseThrottlingMaxCount = -1;
  (this->DestructionSettings).bOptimizeForRuntimeMemory = false;
  this->bGenerateCollisionData = false;
  (this->CollisionFilterSettings).FilterEnabled = false;
  this->Iterations_DEPRECATED = 8;
  this->PushOutIterations_DEPRECATED = 2;
  this->bGenerateContactGraph_DEPRECATED = true;
  return this;
}

// MoveRenamedPropertyValues @ 143701da0

void __thiscall
FChaosSolverConfiguration::MoveRenamedPropertyValues(FChaosSolverConfiguration *this)

{
  if (this->Iterations_DEPRECATED != 8) {
    this->PositionIterations = this->Iterations_DEPRECATED;
  }
  if (this->PushOutIterations_DEPRECATED != 2) {
    this->VelocityIterations = this->PushOutIterations_DEPRECATED;
  }
  return;
}

