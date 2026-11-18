// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// StaticStruct @ 14822c310

UScriptStruct * __cdecl FCollisionChaosEventBodyInfo::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCollisionChaosEventBodyInfo.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FCollisionChaosEventBodyInfo.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCollisionChaosEventBodyInfo,(UObject *)pUVar1,
                         L"CollisionChaosEventBodyInfo");
  }
  return Z_Registration_Info_UScriptStruct_FCollisionChaosEventBodyInfo.OuterSingleton;
}

// FCollisionChaosEventBodyInfo @ 14824e4c0

FCollisionChaosEventBodyInfo * __thiscall
FCollisionChaosEventBodyInfo::FCollisionChaosEventBodyInfo
          (FCollisionChaosEventBodyInfo *this,FCollisionChaosEventBodyInfo *param_1)

{
  UPhysicalMaterial *pUVar1;
  double dVar2;
  
  dVar2 = (param_1->Velocity).field0_0x0._s_0.Y;
  (this->Velocity).field0_0x0._s_0.X = (param_1->Velocity).field0_0x0._s_0.X;
  (this->Velocity).field0_0x0._s_0.Y = dVar2;
  (this->Velocity).field0_0x0._s_0.Z = (param_1->Velocity).field0_0x0._s_0.Z;
  dVar2 = (param_1->DeltaVelocity).field0_0x0._s_0.Y;
  (this->DeltaVelocity).field0_0x0._s_0.X = (param_1->DeltaVelocity).field0_0x0._s_0.X;
  (this->DeltaVelocity).field0_0x0._s_0.Y = dVar2;
  (this->DeltaVelocity).field0_0x0._s_0.Z = (param_1->DeltaVelocity).field0_0x0._s_0.Z;
  dVar2 = (param_1->AngularVelocity).field0_0x0._s_0.Y;
  (this->AngularVelocity).field0_0x0._s_0.X = (param_1->AngularVelocity).field0_0x0._s_0.X;
  (this->AngularVelocity).field0_0x0._s_0.Y = dVar2;
  (this->AngularVelocity).field0_0x0._s_0.Z = (param_1->AngularVelocity).field0_0x0._s_0.Z;
  this->Mass = param_1->Mass;
  pUVar1 = (param_1->PhysMaterial).field0_0x0.DebugPtr;
  (this->PhysMaterial).field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UPhysicalMaterial *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->Component).WeakPtr = (param_1->Component).WeakPtr;
  this->BodyIndex = param_1->BodyIndex;
  this->BoneName = param_1->BoneName;
  return this;
}

// FCollisionChaosEventBodyInfo @ 14824e550

FCollisionChaosEventBodyInfo * __thiscall
FCollisionChaosEventBodyInfo::FCollisionChaosEventBodyInfo(FCollisionChaosEventBodyInfo *this)

{
  undefined8 uVar1;
  undefined8 local_res8;
  
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_res8 = 0;
  (this->Velocity).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Velocity).field0_0x0._s_0.Y = (double)uVar1;
  (this->Velocity).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->DeltaVelocity).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->DeltaVelocity).field0_0x0._s_0.Y = (double)uVar1;
  (this->DeltaVelocity).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->AngularVelocity).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->AngularVelocity).field0_0x0._s_0.Y = (double)uVar1;
  (this->AngularVelocity).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->PhysMaterial).field0_0x0.DebugPtr = (UPhysicalMaterial *)0x0;
  this->Mass = 0.0;
  (this->Component).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->Component).WeakPtr,(FObjectPtr)&local_res8);
  this->BodyIndex = 0;
  (this->BoneName).ComparisonIndex = 0;
  (this->BoneName).Number = 0;
  return this;
}

// operator= @ 148254190

FCollisionChaosEventBodyInfo * __thiscall
FCollisionChaosEventBodyInfo::operator=
          (FCollisionChaosEventBodyInfo *this,FCollisionChaosEventBodyInfo *param_1)

{
  UPhysicalMaterial *pUVar1;
  double dVar2;
  
  dVar2 = (param_1->Velocity).field0_0x0._s_0.Y;
  (this->Velocity).field0_0x0._s_0.X = (param_1->Velocity).field0_0x0._s_0.X;
  (this->Velocity).field0_0x0._s_0.Y = dVar2;
  (this->Velocity).field0_0x0._s_0.Z = (param_1->Velocity).field0_0x0._s_0.Z;
  dVar2 = (param_1->DeltaVelocity).field0_0x0._s_0.Y;
  (this->DeltaVelocity).field0_0x0._s_0.X = (param_1->DeltaVelocity).field0_0x0._s_0.X;
  (this->DeltaVelocity).field0_0x0._s_0.Y = dVar2;
  (this->DeltaVelocity).field0_0x0._s_0.Z = (param_1->DeltaVelocity).field0_0x0._s_0.Z;
  dVar2 = (param_1->AngularVelocity).field0_0x0._s_0.Y;
  (this->AngularVelocity).field0_0x0._s_0.X = (param_1->AngularVelocity).field0_0x0._s_0.X;
  (this->AngularVelocity).field0_0x0._s_0.Y = dVar2;
  (this->AngularVelocity).field0_0x0._s_0.Z = (param_1->AngularVelocity).field0_0x0._s_0.Z;
  this->Mass = param_1->Mass;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 = (param_1->PhysMaterial).field0_0x0.DebugPtr, pUVar1 != (UPhysicalMaterial *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->PhysMaterial).field0_0x0 = (param_1->PhysMaterial).field0_0x0;
  (this->Component).WeakPtr = (param_1->Component).WeakPtr;
  this->BodyIndex = param_1->BodyIndex;
  this->BoneName = param_1->BoneName;
  return this;
}

