// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 1

// FHitResult @ 14cac97a0

FHitResult * __thiscall
FHitResult::FHitResult(FHitResult *this,TVector<double> *param_1,TVector<double> *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  this->FaceIndex = 0;
  this->Distance = 0.0;
  this->_padding_ = 0;
  *(undefined8 *)&this->Location = 0;
  *(undefined8 *)&(this->Location).field_0x8 = 0;
  *(undefined8 *)&(this->Location).field_0x10 = 0;
  *(undefined8 *)&this->ImpactPoint = 0;
  *(undefined8 *)&(this->ImpactPoint).field_0x8 = 0;
  *(undefined8 *)&(this->ImpactPoint).field_0x10 = 0;
  *(undefined8 *)&this->Normal = 0;
  *(undefined8 *)&(this->Normal).field_0x8 = 0;
  *(undefined8 *)&(this->Normal).field_0x10 = 0;
  *(undefined8 *)&this->ImpactNormal = 0;
  *(undefined8 *)&(this->ImpactNormal).field_0x8 = 0;
  *(undefined8 *)&(this->ImpactNormal).field_0x10 = 0;
  this->PenetrationDepth = 0.0;
  this->Item = 0;
  this->ElementIndex = '\0';
  this->field_0xad = 0;
  this->_padding_ = 0;
  (this->PhysMaterial).WeakPtr = (FWeakObjectPtr)0x0;
  (this->Component).WeakPtr = (FWeakObjectPtr)0x0;
  (this->PhysicsObjectOwner).WeakPtr = (FWeakObjectPtr)0x0;
  this->PhysicsObject = (FPhysicsObject *)0x0;
  (this->BoneName).ComparisonIndex = 0;
  (this->BoneName).Number = 0;
  (this->MyBoneName).ComparisonIndex = 0;
  (this->MyBoneName).Number = 0;
  dVar1 = (param_1->field0_0x0)._s_0.Z;
  (this->HitObjectHandle).ReferenceObject.WeakPtr = (FWeakObjectPtr)0x0;
  (this->HitObjectHandle).ManagerInterface.ObjectInstance.WeakPtr = (FWeakObjectPtr)0x0;
  this->Time = 1.0;
  this->MyItem = -1;
  (this->HitObjectHandle).ManagerInterface.InterfaceInstance = (IActorInstanceManagerInterface *)0x0
  ;
  (this->HitObjectHandle).InstanceIndex = -1;
  (this->HitObjectHandle).ResolutionStatus = Invalid;
  *(undefined3 *)&(this->HitObjectHandle).field_0x1d = 0;
  dVar2 = (param_1->field0_0x0)._s_0.Y;
  *(double *)&this->TraceStart = (param_1->field0_0x0)._s_0.X;
  *(double *)&(this->TraceStart).field_0x8 = dVar2;
  dVar2 = (param_2->field0_0x0)._s_0.X;
  dVar3 = (param_2->field0_0x0)._s_0.Y;
  *(double *)&(this->TraceStart).field_0x10 = dVar1;
  dVar1 = (param_2->field0_0x0)._s_0.Z;
  *(double *)&this->TraceEnd = dVar2;
  *(double *)&(this->TraceEnd).field_0x8 = dVar3;
  *(double *)&(this->TraceEnd).field_0x10 = dVar1;
  return this;
}

