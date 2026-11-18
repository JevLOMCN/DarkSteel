// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 9

// ~ICrowdAgentInterface @ 146f967d0

void __thiscall ICrowdAgentInterface::~ICrowdAgentInterface(ICrowdAgentInterface *this)

{
  *this = (ICrowdAgentInterface)&___7ICrowdAgentInterface__6B_;
  return;
}

// GetCrowdAgentAvoidanceGroup @ 146facc00

int __thiscall ICrowdAgentInterface::GetCrowdAgentAvoidanceGroup(ICrowdAgentInterface *this)

{
  return 1;
}

// GetCrowdAgentCollisions @ 146facc90

void __thiscall
ICrowdAgentInterface::GetCrowdAgentCollisions
          (ICrowdAgentInterface *this,float *param_1,float *param_2)

{
  return;
}

// GetCrowdAgentGroupsToAvoid @ 146facdd0

int __thiscall ICrowdAgentInterface::GetCrowdAgentGroupsToAvoid(ICrowdAgentInterface *this)

{
  return 0x7fffffff;
}

// GetCrowdAgentGroupsToIgnore @ 146face60

int __thiscall ICrowdAgentInterface::GetCrowdAgentGroupsToIgnore(ICrowdAgentInterface *this)

{
  return 0;
}

// GetCrowdAgentLocation @ 146facef0

TVector<double> * __thiscall
ICrowdAgentInterface::GetCrowdAgentLocation
          (ICrowdAgentInterface *this,TVector<double> *__return_storage_ptr__)

{
  undefined8 uVar1;
  
  uVar1 = FAISystem::InvalidLocation.field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X = FAISystem::InvalidLocation.field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = FAISystem::InvalidLocation.field0_0x0._s_0.Z;
  return __return_storage_ptr__;
}

// GetCrowdAgentMaxSpeed @ 146facfe0

float __thiscall ICrowdAgentInterface::GetCrowdAgentMaxSpeed(ICrowdAgentInterface *this)

{
  return 0.0;
}

// GetCrowdAgentVelocity @ 146fad070

TVector<double> * __thiscall
ICrowdAgentInterface::GetCrowdAgentVelocity
          (ICrowdAgentInterface *this,TVector<double> *__return_storage_ptr__)

{
  undefined8 uVar1;
  
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return __return_storage_ptr__;
}

// _getUObject @ 146fe4070

UObject * __thiscall ICrowdAgentInterface::_getUObject(ICrowdAgentInterface *this)

{
  return (UObject *)0x0;
}

