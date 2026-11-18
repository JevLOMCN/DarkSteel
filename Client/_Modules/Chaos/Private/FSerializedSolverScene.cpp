// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 2

// StaticStruct @ 143dbdb00

UScriptStruct * __cdecl FSerializedSolverScene::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSerializedSolverScene.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Chaos();
    Z_Registration_Info_UScriptStruct_FSerializedSolverScene.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSerializedSolverScene,(UObject *)pUVar1,
                         L"SerializedSolverScene");
  }
  return Z_Registration_Info_UScriptStruct_FSerializedSolverScene.OuterSingleton;
}

// ~FSerializedSolverScene @ 143dfe1d0

void __thiscall FSerializedSolverScene::~FSerializedSolverScene(FSerializedSolverScene *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FChaosVDImplicitObjectDataWrapper<TRefCountPtr<Chaos::FImplicitObject>,Chaos::FChaosArchive>,int>
            ((FChaosVDImplicitObjectDataWrapper<TRefCountPtr<Chaos::FImplicitObject>,Chaos::FChaosArchive>
              *)(this->ImplicitObjectData).AllocatorInstance.Data,
             (this->ImplicitObjectData).ArrayNum);
  pFVar1 = (this->ImplicitObjectData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FChaosVDParticlePairMidPhase,int>
            ((FChaosVDParticlePairMidPhase *)(this->CollisionMidPhaseData).AllocatorInstance.Data,
             (this->CollisionMidPhaseData).ArrayNum);
  pFVar1 = (this->CollisionMidPhaseData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CharacterGroundConstraintData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->JointConstraintData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FChaosVDParticleDataWrapper,int>
            ((FChaosVDParticleDataWrapper *)(this->ParticleData).AllocatorInstance.Data,
             (this->ParticleData).ArrayNum);
  pFVar1 = (this->ParticleData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

