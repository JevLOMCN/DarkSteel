// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 9

// StaticStruct @ 14a202260

UScriptStruct * __cdecl FCRSimContainer::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCRSimContainer.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FCRSimContainer.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCRSimContainer,(UObject *)pUVar1,
                         L"CRSimContainer");
  }
  return Z_Registration_Info_UScriptStruct_FCRSimContainer.OuterSingleton;
}

// Reset @ 14a2022a0

void __thiscall FCRSimContainer::Reset(FCRSimContainer *this)

{
  this->AccumulatedTime = 0.0;
  this->TimeLeftForStep = 0.0;
  return;
}

// ResetTime @ 14a2022b0

void __thiscall FCRSimContainer::ResetTime(FCRSimContainer *this)

{
  this->AccumulatedTime = 0.0;
  this->TimeLeftForStep = 0.0;
  return;
}

// StepVerlet @ 14a2022c0

void __thiscall FCRSimContainer::StepVerlet(FCRSimContainer *this,float param_1,float param_2)

{
  float fVar1;
  
  fVar1 = this->TimeLeftForStep - param_1;
  this->TimeLeftForStep = fVar1;
  while (fVar1 < 0.0) {
    this->AccumulatedTime = this->TimeStep + this->AccumulatedTime;
    this->TimeLeftForStep = this->TimeStep + fVar1;
    (**(code **)(this->_padding_ + 0x28))(this);
    (**(code **)(this->_padding_ + 0x30))(this,param_2);
    fVar1 = this->TimeLeftForStep;
  }
  return;
}

// StepSemiExplicitEuler @ 14a202340

void __thiscall FCRSimContainer::StepSemiExplicitEuler(FCRSimContainer *this,float param_1)

{
  float fVar1;
  
  fVar1 = this->TimeLeftForStep - param_1;
  this->TimeLeftForStep = fVar1;
  while (fVar1 < 0.0) {
    this->AccumulatedTime = this->TimeStep + this->AccumulatedTime;
    this->TimeLeftForStep = this->TimeStep + fVar1;
    (**(code **)(this->_padding_ + 0x28))(this);
    (**(code **)(this->_padding_ + 0x38))(this);
    fVar1 = this->TimeLeftForStep;
  }
  return;
}

// CachePreviousStep @ 14a2023c0

void __thiscall FCRSimContainer::CachePreviousStep(FCRSimContainer *this)

{
  return;
}

// IntegrateVerlet @ 14a2023d0

void __thiscall FCRSimContainer::IntegrateVerlet(FCRSimContainer *this,float param_1)

{
  return;
}

// IntegrateSemiExplicitEuler @ 14a2023e0

void __thiscall FCRSimContainer::IntegrateSemiExplicitEuler(FCRSimContainer *this)

{
  return;
}

// ~FCRSimContainer @ 14a225460

void __thiscall FCRSimContainer::~FCRSimContainer(FCRSimContainer *this)

{
  this->_padding_ = (longlong)&___7FCRSimContainer__6B_;
  return;
}

