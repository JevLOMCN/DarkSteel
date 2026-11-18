// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosSolverEngine
// Functions: 3

// StaticStruct @ 146300d10

UScriptStruct * __cdecl FChaosPhysicsCollisionInfo::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FChaosPhysicsCollisionInfo.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ChaosSolverEngine();
    Z_Registration_Info_UScriptStruct_FChaosPhysicsCollisionInfo.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo,(UObject *)pUVar1,
                         L"ChaosPhysicsCollisionInfo");
  }
  return Z_Registration_Info_UScriptStruct_FChaosPhysicsCollisionInfo.OuterSingleton;
}

// FChaosPhysicsCollisionInfo @ 146309410

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FChaosPhysicsCollisionInfo * __thiscall
FChaosPhysicsCollisionInfo::FChaosPhysicsCollisionInfo(FChaosPhysicsCollisionInfo *this)

{
  undefined8 uVar1;
  
  (this->Component).field0_0x0.DebugPtr = (UPrimitiveComponent *)0x0;
  (this->OtherComponent).field0_0x0.DebugPtr = (UPrimitiveComponent *)0x0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Location).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Location).field0_0x0._s_0.Y = (double)uVar1;
  (this->Location).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Normal).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Normal).field0_0x0._s_0.Y = (double)uVar1;
  (this->Normal).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->AccumulatedImpulse).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->AccumulatedImpulse).field0_0x0._s_0.Y = (double)uVar1;
  (this->AccumulatedImpulse).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Velocity).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Velocity).field0_0x0._s_0.Y = (double)uVar1;
  (this->Velocity).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->OtherVelocity).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->OtherVelocity).field0_0x0._s_0.Y = (double)uVar1;
  (this->OtherVelocity).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->AngularVelocity).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->AngularVelocity).field0_0x0._s_0.Y = (double)uVar1;
  (this->AngularVelocity).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->OtherAngularVelocity).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->OtherAngularVelocity).field0_0x0._s_0.Y = (double)uVar1;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->Mass = 0.0;
  this->OtherMass = 0.0;
  (this->OtherAngularVelocity).field0_0x0._s_0.Z = (double)uVar1;
  return this;
}

// operator= @ 14630b690

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FChaosPhysicsCollisionInfo * __thiscall
FChaosPhysicsCollisionInfo::operator=
          (FChaosPhysicsCollisionInfo *this,FChaosPhysicsCollisionInfo *param_1)

{
  UPrimitiveComponent *pUVar1;
  double dVar2;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     (pUVar1 = (param_1->Component).field0_0x0.DebugPtr, pUVar1 != (UPrimitiveComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->Component).field0_0x0 = (param_1->Component).field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 = (param_1->OtherComponent).field0_0x0.DebugPtr, pUVar1 != (UPrimitiveComponent *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->OtherComponent).field0_0x0 = (param_1->OtherComponent).field0_0x0;
  dVar2 = (param_1->Location).field0_0x0._s_0.Y;
  (this->Location).field0_0x0._s_0.X = (param_1->Location).field0_0x0._s_0.X;
  (this->Location).field0_0x0._s_0.Y = dVar2;
  (this->Location).field0_0x0._s_0.Z = (param_1->Location).field0_0x0._s_0.Z;
  dVar2 = (param_1->Normal).field0_0x0._s_0.Y;
  (this->Normal).field0_0x0._s_0.X = (param_1->Normal).field0_0x0._s_0.X;
  (this->Normal).field0_0x0._s_0.Y = dVar2;
  (this->Normal).field0_0x0._s_0.Z = (param_1->Normal).field0_0x0._s_0.Z;
  dVar2 = (param_1->AccumulatedImpulse).field0_0x0._s_0.Y;
  (this->AccumulatedImpulse).field0_0x0._s_0.X = (param_1->AccumulatedImpulse).field0_0x0._s_0.X;
  (this->AccumulatedImpulse).field0_0x0._s_0.Y = dVar2;
  (this->AccumulatedImpulse).field0_0x0._s_0.Z = (param_1->AccumulatedImpulse).field0_0x0._s_0.Z;
  dVar2 = (param_1->Velocity).field0_0x0._s_0.Y;
  (this->Velocity).field0_0x0._s_0.X = (param_1->Velocity).field0_0x0._s_0.X;
  (this->Velocity).field0_0x0._s_0.Y = dVar2;
  (this->Velocity).field0_0x0._s_0.Z = (param_1->Velocity).field0_0x0._s_0.Z;
  dVar2 = (param_1->OtherVelocity).field0_0x0._s_0.Y;
  (this->OtherVelocity).field0_0x0._s_0.X = (param_1->OtherVelocity).field0_0x0._s_0.X;
  (this->OtherVelocity).field0_0x0._s_0.Y = dVar2;
  (this->OtherVelocity).field0_0x0._s_0.Z = (param_1->OtherVelocity).field0_0x0._s_0.Z;
  dVar2 = (param_1->AngularVelocity).field0_0x0._s_0.Y;
  (this->AngularVelocity).field0_0x0._s_0.X = (param_1->AngularVelocity).field0_0x0._s_0.X;
  (this->AngularVelocity).field0_0x0._s_0.Y = dVar2;
  (this->AngularVelocity).field0_0x0._s_0.Z = (param_1->AngularVelocity).field0_0x0._s_0.Z;
  dVar2 = (param_1->OtherAngularVelocity).field0_0x0._s_0.Y;
  (this->OtherAngularVelocity).field0_0x0._s_0.X = (param_1->OtherAngularVelocity).field0_0x0._s_0.X
  ;
  (this->OtherAngularVelocity).field0_0x0._s_0.Y = dVar2;
  (this->OtherAngularVelocity).field0_0x0._s_0.Z = (param_1->OtherAngularVelocity).field0_0x0._s_0.Z
  ;
  this->Mass = param_1->Mass;
  this->OtherMass = param_1->OtherMass;
  return this;
}

