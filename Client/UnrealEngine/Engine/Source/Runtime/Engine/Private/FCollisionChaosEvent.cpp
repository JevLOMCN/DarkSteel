// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// StaticStruct @ 14822c350

UScriptStruct * __cdecl FCollisionChaosEvent::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCollisionChaosEvent.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FCollisionChaosEvent.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCollisionChaosEvent,(UObject *)pUVar1,
                         L"CollisionChaosEvent");
  }
  return Z_Registration_Info_UScriptStruct_FCollisionChaosEvent.OuterSingleton;
}

// FCollisionChaosEvent @ 14824e2e0

FCollisionChaosEvent * __thiscall
FCollisionChaosEvent::FCollisionChaosEvent(FCollisionChaosEvent *this,FCollidingData *param_1)

{
  double dVar1;
  
  dVar1 = *(double *)&(param_1->Location).field_0x8;
  (this->Location).field0_0x0._s_0.X = *(double *)&param_1->Location;
  (this->Location).field0_0x0._s_0.Y = dVar1;
  (this->Location).field0_0x0._s_0.Z = *(double *)&(param_1->Location).field_0x10;
  dVar1 = *(double *)&(param_1->AccumulatedImpulse).field_0x8;
  (this->AccumulatedImpulse).field0_0x0._s_0.X = *(double *)&param_1->AccumulatedImpulse;
  (this->AccumulatedImpulse).field0_0x0._s_0.Y = dVar1;
  (this->AccumulatedImpulse).field0_0x0._s_0.Z =
       *(double *)&(param_1->AccumulatedImpulse).field_0x10;
  dVar1 = *(double *)&(param_1->Normal).field_0x8;
  (this->Normal).field0_0x0._s_0.X = *(double *)&param_1->Normal;
  (this->Normal).field0_0x0._s_0.Y = dVar1;
  (this->Normal).field0_0x0._s_0.Z = *(double *)&(param_1->Normal).field_0x10;
  this->PenetrationDepth = (float)param_1->PenetrationDepth;
  FCollisionChaosEventBodyInfo::FCollisionChaosEventBodyInfo(&this->Body1);
  FCollisionChaosEventBodyInfo::FCollisionChaosEventBodyInfo(&this->Body2);
  dVar1 = *(double *)&(param_1->Velocity1).field_0x8;
  (this->Body1).Velocity.field0_0x0._s_0.X = *(double *)&param_1->Velocity1;
  (this->Body1).Velocity.field0_0x0._s_0.Y = dVar1;
  (this->Body1).Velocity.field0_0x0._s_0.Z = *(double *)&(param_1->Velocity1).field_0x10;
  dVar1 = *(double *)&(param_1->DeltaVelocity1).field_0x8;
  (this->Body1).DeltaVelocity.field0_0x0._s_0.X = *(double *)&param_1->DeltaVelocity1;
  (this->Body1).DeltaVelocity.field0_0x0._s_0.Y = dVar1;
  (this->Body1).DeltaVelocity.field0_0x0._s_0.Z = *(double *)&(param_1->DeltaVelocity1).field_0x10;
  dVar1 = *(double *)&(param_1->AngularVelocity1).field_0x8;
  (this->Body1).AngularVelocity.field0_0x0._s_0.X = *(double *)&param_1->AngularVelocity1;
  (this->Body1).AngularVelocity.field0_0x0._s_0.Y = dVar1;
  (this->Body1).AngularVelocity.field0_0x0._s_0.Z =
       *(double *)&(param_1->AngularVelocity1).field_0x10;
  (this->Body1).Mass = (float)param_1->Mass1;
  dVar1 = *(double *)&(param_1->Velocity2).field_0x8;
  (this->Body2).Velocity.field0_0x0._s_0.X = *(double *)&param_1->Velocity2;
  (this->Body2).Velocity.field0_0x0._s_0.Y = dVar1;
  (this->Body2).Velocity.field0_0x0._s_0.Z = *(double *)&(param_1->Velocity2).field_0x10;
  dVar1 = *(double *)&(param_1->DeltaVelocity2).field_0x8;
  (this->Body2).DeltaVelocity.field0_0x0._s_0.X = *(double *)&param_1->DeltaVelocity2;
  (this->Body2).DeltaVelocity.field0_0x0._s_0.Y = dVar1;
  (this->Body2).DeltaVelocity.field0_0x0._s_0.Z = *(double *)&(param_1->DeltaVelocity2).field_0x10;
  dVar1 = *(double *)&(param_1->AngularVelocity2).field_0x8;
  (this->Body2).AngularVelocity.field0_0x0._s_0.X = *(double *)&param_1->AngularVelocity2;
  (this->Body2).AngularVelocity.field0_0x0._s_0.Y = dVar1;
  (this->Body2).AngularVelocity.field0_0x0._s_0.Z =
       *(double *)&(param_1->AngularVelocity2).field_0x10;
  (this->Body2).Mass = (float)param_1->Mass2;
  return this;
}

// FCollisionChaosEvent @ 14824e440

FCollisionChaosEvent * __thiscall
FCollisionChaosEvent::FCollisionChaosEvent(FCollisionChaosEvent *this)

{
  undefined8 uVar1;
  
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Location).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Location).field0_0x0._s_0.Y = (double)uVar1;
  (this->Location).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->AccumulatedImpulse).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->AccumulatedImpulse).field0_0x0._s_0.Y = (double)uVar1;
  (this->AccumulatedImpulse).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Normal).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Normal).field0_0x0._s_0.Y = (double)uVar1;
  (this->Normal).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->PenetrationDepth = 0.0;
  FCollisionChaosEventBodyInfo::FCollisionChaosEventBodyInfo(&this->Body1);
  FCollisionChaosEventBodyInfo::FCollisionChaosEventBodyInfo(&this->Body2);
  return this;
}

