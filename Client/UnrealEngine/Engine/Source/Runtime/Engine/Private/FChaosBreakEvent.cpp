// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// StaticStruct @ 14822c3e0

UScriptStruct * __cdecl FChaosBreakEvent::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FChaosBreakEvent.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FChaosBreakEvent.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FChaosBreakEvent,(UObject *)pUVar1,
                         L"ChaosBreakEvent");
  }
  return Z_Registration_Info_UScriptStruct_FChaosBreakEvent.OuterSingleton;
}

// FChaosBreakEvent @ 14824dfe0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FChaosBreakEvent * __thiscall
FChaosBreakEvent::FChaosBreakEvent(FChaosBreakEvent *this,FBreakingData *param_1)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  (this->Component).field0_0x0.DebugPtr = (UPrimitiveComponent *)0x0;
  dVar2 = *(double *)&(param_1->Location).field_0x8;
  (this->Location).field0_0x0._s_0.X = *(double *)&param_1->Location;
  (this->Location).field0_0x0._s_0.Y = dVar2;
  (this->Location).field0_0x0._s_0.Z = *(double *)&(param_1->Location).field_0x10;
  dVar2 = *(double *)&(param_1->Orientation).field_0x8;
  (this->Orientation).X = *(double *)&param_1->Orientation;
  (this->Orientation).Y = dVar2;
  dVar2 = *(double *)&(param_1->Orientation).field_0x18;
  (this->Orientation).Z = *(double *)&(param_1->Orientation).field_0x10;
  (this->Orientation).W = dVar2;
  dVar2 = *(double *)&(param_1->Velocity).field_0x8;
  (this->Velocity).field0_0x0._s_0.X = *(double *)&param_1->Velocity;
  (this->Velocity).field0_0x0._s_0.Y = dVar2;
  (this->Velocity).field0_0x0._s_0.Z = *(double *)&(param_1->Velocity).field_0x10;
  dVar2 = *(double *)&(param_1->AngularVelocity).field_0x8;
  (this->AngularVelocity).field0_0x0._s_0.X = *(double *)&param_1->AngularVelocity;
  (this->AngularVelocity).field0_0x0._s_0.Y = dVar2;
  (this->AngularVelocity).field0_0x0._s_0.Z = *(double *)&(param_1->AngularVelocity).field_0x10;
  dVar3 = *(double *)&(param_1->BoundingBox).MMax.field_0x8;
  dVar2 = *(double *)&(param_1->BoundingBox).MMax.field_0x10;
  dVar4 = *(double *)&(param_1->BoundingBox).MMin.field_0x8;
  dVar5 = *(double *)&(param_1->BoundingBox).MMin.field_0x10;
  (this->Extents).field0_0x0._s_0.X =
       *(double *)&(param_1->BoundingBox).MMax - *(double *)&(param_1->BoundingBox).MMin;
  dVar2 = dVar2 - dVar5;
  auVar1._8_4_ = SUB84(dVar2,0);
  auVar1._0_8_ = dVar3 - dVar4;
  auVar1._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  *(undefined1 (*) [16])((longlong)&(this->Extents).field0_0x0 + 8) = auVar1;
  this->Mass = (float)param_1->Mass;
  this->Index = param_1->TransformGroupIndex;
  this->bFromCrumble = param_1->bFromCrumble;
  return this;
}

// FChaosBreakEvent @ 14824e090

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FChaosBreakEvent * __thiscall FChaosBreakEvent::FChaosBreakEvent(FChaosBreakEvent *this)

{
  undefined8 uVar1;
  double dVar2;
  
  (this->Component).field0_0x0.DebugPtr = (UPrimitiveComponent *)0x0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Location).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Location).field0_0x0._s_0.Y = (double)uVar1;
  (this->Location).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar2 = UE::Math::TQuat<double>::Identity.Y;
  (this->Orientation).X = UE::Math::TQuat<double>::Identity.X;
  (this->Orientation).Y = dVar2;
  dVar2 = UE::Math::TQuat<double>::Identity.W;
  (this->Orientation).Z = UE::Math::TQuat<double>::Identity.Z;
  (this->Orientation).W = dVar2;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Velocity).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Velocity).field0_0x0._s_0.Y = (double)uVar1;
  (this->Velocity).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->AngularVelocity).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->AngularVelocity).field0_0x0._s_0.Y = (double)uVar1;
  (this->AngularVelocity).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Extents).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Extents).field0_0x0._s_0.Y = (double)uVar1;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->Mass = 0.0;
  this->bFromCrumble = false;
  (this->Extents).field0_0x0._s_0.Z = (double)uVar1;
  this->Index = -1;
  return this;
}

