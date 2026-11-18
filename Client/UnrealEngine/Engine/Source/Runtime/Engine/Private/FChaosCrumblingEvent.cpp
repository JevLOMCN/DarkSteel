// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// StaticStruct @ 14822c4f0

UScriptStruct * __cdecl FChaosCrumblingEvent::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FChaosCrumblingEvent.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FChaosCrumblingEvent.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FChaosCrumblingEvent,(UObject *)pUVar1,
                         L"ChaosCrumblingEvent");
  }
  return Z_Registration_Info_UScriptStruct_FChaosCrumblingEvent.OuterSingleton;
}

// FChaosCrumblingEvent @ 14824e130

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FChaosCrumblingEvent * __thiscall
FChaosCrumblingEvent::FChaosCrumblingEvent(FChaosCrumblingEvent *this)

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
  (this->LinearVelocity).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X
  ;
  (this->LinearVelocity).field0_0x0._s_0.Y = (double)uVar1;
  (this->LinearVelocity).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z
  ;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->AngularVelocity).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->AngularVelocity).field0_0x0._s_0.Y = (double)uVar1;
  (this->AngularVelocity).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->Mass = 0.0;
  (this->LocalBounds).Min.field0_0x0._s_0.X = 0.0;
  (this->LocalBounds).Min.field0_0x0._s_0.Y = 0.0;
  (this->LocalBounds).Min.field0_0x0._s_0.Z = 0.0;
  (this->LocalBounds).Max.field0_0x0._s_0.X = 0.0;
  (this->LocalBounds).Max.field0_0x0._s_0.Y = 0.0;
  (this->LocalBounds).Max.field0_0x0._s_0.Z = 0.0;
  (this->LocalBounds).IsValid = '\0';
  (this->LocalBounds).Pad[0] = '\0';
  (this->LocalBounds).Pad[1] = '\0';
  (this->LocalBounds).Pad[2] = '\0';
  (this->LocalBounds).Pad[3] = '\0';
  (this->LocalBounds).Pad[4] = '\0';
  (this->LocalBounds).Pad[5] = '\0';
  (this->LocalBounds).Pad[6] = '\0';
  (this->Children).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Children).ArrayNum = 0;
  (this->Children).ArrayMax = 0;
  return this;
}

