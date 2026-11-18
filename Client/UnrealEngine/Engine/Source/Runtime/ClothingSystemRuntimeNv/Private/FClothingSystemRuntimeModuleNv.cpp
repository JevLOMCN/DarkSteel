// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ClothingSystemRuntimeNv
// Functions: 6

// FClothingSystemRuntimeModuleNv @ 148c36430

FClothingSystemRuntimeModuleNv * __thiscall
FClothingSystemRuntimeModuleNv::FClothingSystemRuntimeModuleNv(FClothingSystemRuntimeModuleNv *this)

{
  *(undefined ***)this = &_vftable__for__IModuleInterface__;
  *(undefined ***)&this->field_0x8 = &_vftable__for__IClothingSimulationFactoryClassProvider__;
  return this;
}

// GetClothingSimulationFactoryClass @ 148c36dd0

TSubclassOf<UClothingSimulationFactory> __thiscall
FClothingSystemRuntimeModuleNv::GetClothingSimulationFactoryClass
          (FClothingSystemRuntimeModuleNv *this)

{
  TObjectPtr<UClass> in_RDX;
  
  *(undefined8 *)in_RDX.field0_0x0 = 0;
  return (TSubclassOf<UClothingSimulationFactory>)in_RDX.field0_0x0;
}

// GetMeshQuadifier @ 148c36df0

ClothMeshQuadifier * __thiscall
FClothingSystemRuntimeModuleNv::GetMeshQuadifier(FClothingSystemRuntimeModuleNv *this)

{
  return (ClothMeshQuadifier *)0x0;
}

// GetSoftwareFactory @ 148c37140

Factory * __thiscall
FClothingSystemRuntimeModuleNv::GetSoftwareFactory(FClothingSystemRuntimeModuleNv *this)

{
  return (Factory *)0x0;
}

// ShutdownModule @ 148c37790

void __thiscall FClothingSystemRuntimeModuleNv::ShutdownModule(FClothingSystemRuntimeModuleNv *this)

{
  return;
}

// StartupModule @ 148c377a0

void __thiscall FClothingSystemRuntimeModuleNv::StartupModule(FClothingSystemRuntimeModuleNv *this)

{
  return;
}

