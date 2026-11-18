// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// GetBodyInstance @ 148307050

FBodyInstance * __thiscall FRigidBodyCollisionInfo::GetBodyInstance(FRigidBodyCollisionInfo *this)

{
  bool bVar1;
  UObject *pUVar2;
  FBodyInstance *pFVar3;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->Component).WeakPtr);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&(this->Component).WeakPtr);
                    /* WARNING: Could not recover jumptable at 0x000148307095. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pFVar3 = (FBodyInstance *)
             (**(code **)(*(longlong *)pUVar2 + 0x818))(pUVar2,this->BoneName,1,this->BodyIndex);
    return pFVar3;
  }
  return (FBodyInstance *)0x0;
}

// SetFrom @ 1483217d0

void __thiscall
FRigidBodyCollisionInfo::SetFrom
          (FRigidBodyCollisionInfo *this,FBodyInstance *param_1,TVector<double> *param_2)

{
  double dVar1;
  undefined8 uVar2;
  bool bVar3;
  UObject *pUVar4;
  FName FVar5;
  FWeakObjectPtr local_res10 [2];
  undefined8 local_res20;
  
  if (param_1 == (FBodyInstance *)0x0) {
    local_res10[0].ObjectIndex = 0;
    local_res10[0].ObjectSerialNumber = 0;
    local_res20 = 0;
    FWeakObjectPtr::operator=(local_res10,(FObjectPtr)&local_res20);
    (this->Component).WeakPtr = local_res10[0];
    local_res10[0].ObjectIndex = 0;
    local_res10[0].ObjectSerialNumber = 0;
    local_res20 = 0;
    FWeakObjectPtr::operator=(local_res10,(FObjectPtr)&local_res20);
    (this->Actor).WeakPtr = local_res10[0];
    (this->BoneName).ComparisonIndex = 0;
    (this->BoneName).Number = 0;
    this->BodyIndex = -1;
    uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    (this->DeltaVelocity).field0_0x0._s_0.X =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    (this->DeltaVelocity).field0_0x0._s_0.Y = (double)uVar2;
    (this->DeltaVelocity).field0_0x0._s_0.Z =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  }
  else {
    this->BodyIndex = param_1->InstanceBodyIndex;
    bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)param_1);
    if (bVar3) {
      pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)param_1);
      FVar5.ComparisonIndex.Value = *(uint *)&pUVar4[1].field_0x0;
      FVar5.Number = *(uint *)&pUVar4[1].field_0x4;
    }
    else {
      FVar5.ComparisonIndex.Value = 0;
      FVar5.Number = 0;
    }
    this->BoneName = FVar5;
    dVar1 = (param_2->field0_0x0)._s_0.Y;
    (this->DeltaVelocity).field0_0x0._s_0.X = (param_2->field0_0x0)._s_0.X;
    (this->DeltaVelocity).field0_0x0._s_0.Y = dVar1;
    (this->DeltaVelocity).field0_0x0._s_0.Z = (param_2->field0_0x0)._s_0.Z;
    bVar3 = FWeakObjectPtr::IsValid(&(param_1->OwnerComponent).WeakPtr);
    if (bVar3) {
      (this->Component).WeakPtr = (param_1->OwnerComponent).WeakPtr;
      pUVar4 = FWeakObjectPtr::Get(&(this->Component).WeakPtr);
      local_res10[0].ObjectIndex = *(int *)&pUVar4[4].field_0x8;
      local_res10[0].ObjectSerialNumber = *(int *)&pUVar4[4].field_0xc;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_res10[0] != (FWeakObjectPtr)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_res10[0]);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)this,(FObjectPtr)local_res10);
      return;
    }
  }
  return;
}

