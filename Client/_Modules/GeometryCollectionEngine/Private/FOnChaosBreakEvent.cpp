// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionEngine
// Functions: 1

// Broadcast @ 146369af0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FOnChaosBreakEvent::Broadcast(FOnChaosBreakEvent *this,FChaosBreakEvent *param_1)

{
  UPrimitiveComponent *pUVar1;
  TObjectPtr<UPrimitiveComponent>_u_0 local_a8;
  double local_a0;
  double dStack_98;
  double local_90;
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  double local_50;
  double dStack_48;
  double local_40;
  double local_38;
  double dStack_30;
  double local_28;
  float local_20;
  int local_1c;
  undefined1 local_18;
  
  FChaosBreakEvent::FChaosBreakEvent((FChaosBreakEvent *)&local_a8.ObjectPtr);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 = (param_1->Component).field0_0x0.DebugPtr, pUVar1 != (UPrimitiveComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  local_a0 = (param_1->Location).field0_0x0._s_0.X;
  dStack_98 = (param_1->Location).field0_0x0._s_0.Y;
  local_a8.ObjectPtr.field0_0x0 = *(FObjectPtr *)&(param_1->Component).field0_0x0;
  local_90 = (param_1->Location).field0_0x0._s_0.Z;
  local_88 = (param_1->Orientation).X;
  dStack_80 = (param_1->Orientation).Y;
  local_1c = param_1->Index;
  local_78 = (param_1->Orientation).Z;
  dStack_70 = (param_1->Orientation).W;
  local_18 = param_1->bFromCrumble;
  local_68 = (param_1->Velocity).field0_0x0._s_0.X;
  dStack_60 = (param_1->Velocity).field0_0x0._s_0.Y;
  local_58 = (param_1->Velocity).field0_0x0._s_0.Z;
  local_50 = (param_1->AngularVelocity).field0_0x0._s_0.X;
  dStack_48 = (param_1->AngularVelocity).field0_0x0._s_0.Y;
  local_40 = (param_1->AngularVelocity).field0_0x0._s_0.Z;
  local_38 = (param_1->Extents).field0_0x0._s_0.X;
  dStack_30 = (param_1->Extents).field0_0x0._s_0.Y;
  local_28 = (param_1->Extents).field0_0x0._s_0.Z;
  local_20 = param_1->Mass;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)this,&local_a8);
  return;
}

