// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 1

// FWidgetTraceResult @ 146a55d30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

FWidgetTraceResult * __thiscall
UWidgetInteractionComponent::FWidgetTraceResult::FWidgetTraceResult(FWidgetTraceResult *this)

{
  TVector2<double> TVar1;
  undefined8 uVar2;
  
  memset(this,0,0x100);
  (this->HitResult).Time = 1.0;
  (this->HitResult).MyItem = -1;
  (this->HitResult).HitObjectHandle.ReferenceObject.WeakPtr = (FWeakObjectPtr)0x0;
  (this->HitResult).HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr = (FWeakObjectPtr)0x0;
  (this->HitResult).HitObjectHandle.ManagerInterface.InterfaceInstance =
       (IActorInstanceManagerInterface *)0x0;
  (this->HitResult).HitObjectHandle.InstanceIndex = -1;
  TVar1 = UE::Math::TVector2<double>::ZeroVector;
  (this->HitResult).HitObjectHandle.ResolutionStatus = Invalid;
  *(undefined3 *)&(this->HitResult).HitObjectHandle.field_0x1d = 0;
  this->HitWidgetComponent = (UWidgetComponent *)0x0;
  (this->LocalHitLocation).field0_0x0._s_0 = (TVector2<double>_u_0_s_0)TVar1.field0_0x0;
  FWidgetPath::FWidgetPath(&this->HitWidgetPath);
  this->bWasHit = false;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->LineStartLocation).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->LineStartLocation).field0_0x0._s_0.Y = (double)uVar2;
  (this->LineStartLocation).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->LineEndLocation).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->LineEndLocation).field0_0x0._s_0.Y = (double)uVar2;
  (this->LineEndLocation).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return this;
}

