// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ClothSysRuntimeIntrfc
// Functions: 9

// IClothingSimulationInterface @ 144648680

IClothingSimulationInterface * __thiscall
IClothingSimulationInterface::IClothingSimulationInterface(IClothingSimulationInterface *this)

{
  this->bIsLegacyInterface = false;
  this->_padding_ = (longlong)&___7IClothingSimulationInterface__6B_;
  return this;
}

// ~IClothingSimulationInterface @ 144648c90

void __thiscall
IClothingSimulationInterface::~IClothingSimulationInterface(IClothingSimulationInterface *this)

{
  this->_padding_ = (longlong)&___7IClothingSimulationInterface__6B_;
  return;
}

// GetNumCloths @ 14464b880

int __thiscall IClothingSimulationInterface::GetNumCloths(IClothingSimulationInterface *this)

{
  return 0;
}

// GetNumDynamicParticles @ 14464b890

int __thiscall
IClothingSimulationInterface::GetNumDynamicParticles(IClothingSimulationInterface *this)

{
  return 0;
}

// GetNumIterations @ 14464b8a0

int __thiscall IClothingSimulationInterface::GetNumIterations(IClothingSimulationInterface *this)

{
  return 0;
}

// GetNumKinematicParticles @ 14464b8b0

int __thiscall
IClothingSimulationInterface::GetNumKinematicParticles(IClothingSimulationInterface *this)

{
  return 0;
}

// GetNumSubsteps @ 14464b8d0

int __thiscall IClothingSimulationInterface::GetNumSubsteps(IClothingSimulationInterface *this)

{
  return 0;
}

// GetSimulationTime @ 14464be00

float __thiscall IClothingSimulationInterface::GetSimulationTime(IClothingSimulationInterface *this)

{
  return 0.0;
}

// IsTeleported @ 14464be80

bool __thiscall IClothingSimulationInterface::IsTeleported(IClothingSimulationInterface *this)

{
  return false;
}

