// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ClothSysRuntimeIntrfc
// Functions: 20

// IClothingSimulation @ 144648640

IClothingSimulation * __thiscall IClothingSimulation::IClothingSimulation(IClothingSimulation *this)

{
  this->field_0x8 = 1;
  *(undefined ***)this = &___7IClothingSimulation__6B_;
  return this;
}

// ~IClothingSimulation @ 144648c50

void __thiscall IClothingSimulation::~IClothingSimulation(IClothingSimulation *this)

{
  *(undefined ***)this = &___7IClothingSimulationInterface__6B_;
  return;
}

// AppendSimulationData @ 144649560

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
IClothingSimulation::AppendSimulationData
          (IClothingSimulation *this,
          TMap<int,FClothSimulData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FClothSimulData,0>_>
          *param_1,USkeletalMeshComponent *param_2,USkinnedMeshComponent *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000144649563. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0xf0))();
  return;
}

// CreateActor @ 14464a870

void __thiscall
IClothingSimulation::CreateActor
          (IClothingSimulation *this,USkeletalMeshComponent *param_1,UClothingAssetBase *param_2,
          int param_3)

{
  return;
}

// CreateActor @ 14464a880

void __thiscall
IClothingSimulation::CreateActor
          (IClothingSimulation *this,USkeletalMeshComponent *param_1,UClothingAssetBase *param_2,
          int param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00014464a883. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 200))();
  return;
}

// FillContext @ 14464ab40

void __thiscall
IClothingSimulation::FillContext
          (IClothingSimulation *this,USkeletalMeshComponent *param_1,float param_2,
          IClothingSimulationContext *param_3)

{
  return;
}

// FillContext @ 14464ab50

void __thiscall
IClothingSimulation::FillContext
          (IClothingSimulation *this,USkeletalMeshComponent *param_1,float param_2,
          IClothingSimulationContext *param_3,bool param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00014464ab53. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0xd0))();
  return;
}

// FillContextAndPrepareTick @ 14464abf0

void __thiscall
IClothingSimulation::FillContextAndPrepareTick
          (IClothingSimulation *this,USkeletalMeshComponent *param_1,float param_2,
          IClothingSimulationContext *param_3,bool param_4,bool param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00014464ac03. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0xd8))(this,param_1,*(code **)(*(longlong *)this + 0xd8));
  return;
}

// ForceClothNextUpdateTeleportAndReset_AnyThread @ 14464b2c0

void __thiscall
IClothingSimulation::ForceClothNextUpdateTeleportAndReset_AnyThread(IClothingSimulation *this)

{
  return;
}

// GatherStats @ 14464b2d0

void __thiscall IClothingSimulation::GatherStats(IClothingSimulation *this)

{
  return;
}

// GetSimulationData @ 14464bdf0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
IClothingSimulation::GetSimulationData
          (IClothingSimulation *this,
          TMap<int,FClothSimulData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FClothSimulData,0>_>
          *param_1,USkeletalMeshComponent *param_2,USkinnedMeshComponent *param_3)

{
  return;
}

// HardResetSimulation @ 14464be40

void __thiscall
IClothingSimulation::HardResetSimulation
          (IClothingSimulation *this,IClothingSimulationContext *param_1)

{
  return;
}

// SetMaxNumIterations @ 14464c680

void __thiscall IClothingSimulation::SetMaxNumIterations(IClothingSimulation *this,int param_1)

{
  return;
}

// SetNumIterations @ 14464c6c0

void __thiscall IClothingSimulation::SetNumIterations(IClothingSimulation *this,int param_1)

{
  return;
}

// SetNumSubsteps @ 14464c700

void __thiscall IClothingSimulation::SetNumSubsteps(IClothingSimulation *this,int param_1)

{
  return;
}

// ShouldSimulate @ 14464c740

bool __thiscall IClothingSimulation::ShouldSimulate(IClothingSimulation *this)

{
  return true;
}

// ShouldSimulateLOD @ 14464c750

bool __thiscall IClothingSimulation::ShouldSimulateLOD(IClothingSimulation *this,int param_1)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014464c753. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)this + 0xe0))();
  return (bool)uVar1;
}

// Simulate @ 14464c770

void __thiscall
IClothingSimulation::Simulate(IClothingSimulation *this,IClothingSimulationContext *param_1)

{
  return;
}

// Simulate_AnyThread @ 14464c780

void __thiscall
IClothingSimulation::Simulate_AnyThread
          (IClothingSimulation *this,IClothingSimulationContext *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014464c783. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0xe8))();
  return;
}

// UpdateWorldForces @ 14464d180

void __thiscall
IClothingSimulation::UpdateWorldForces(IClothingSimulation *this,USkeletalMeshComponent *param_1)

{
  return;
}

