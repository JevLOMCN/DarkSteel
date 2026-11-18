// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// StaticStruct @ 1476d7550

UScriptStruct * __cdecl FRepRootMotionMontage::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRepRootMotionMontage.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FRepRootMotionMontage.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRepRootMotionMontage,(UObject *)pUVar1,
                         L"RepRootMotionMontage");
  }
  return Z_Registration_Info_UScriptStruct_FRepRootMotionMontage.OuterSingleton;
}

// operator= @ 1476e9680

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FRepRootMotionMontage * __thiscall
FRepRootMotionMontage::operator=(FRepRootMotionMontage *this,FRepRootMotionMontage *param_1)

{
  UAnimSequenceBase *pUVar1;
  UPrimitiveComponent *pUVar2;
  undefined8 uVar3;
  double dVar4;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     (pUVar1 = (param_1->Animation).field0_0x0.DebugPtr, pUVar1 != (UAnimSequenceBase *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->Animation).field0_0x0 = (param_1->Animation).field0_0x0;
  this->bIsActive = param_1->bIsActive;
  this->bRelativePosition = param_1->bRelativePosition;
  this->bRelativeRotation = param_1->bRelativeRotation;
  this->Position = param_1->Position;
  uVar3 = *(undefined8 *)&(param_1->Location).field_0x8;
  *(undefined8 *)&this->Location = *(undefined8 *)&param_1->Location;
  *(undefined8 *)&(this->Location).field_0x8 = uVar3;
  *(undefined8 *)&(this->Location).field_0x10 = *(undefined8 *)&(param_1->Location).field_0x10;
  dVar4 = (param_1->Rotation).Yaw;
  (this->Rotation).Pitch = (param_1->Rotation).Pitch;
  (this->Rotation).Yaw = dVar4;
  (this->Rotation).Roll = (param_1->Rotation).Roll;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar2 = (param_1->MovementBase).field0_0x0.DebugPtr, pUVar2 != (UPrimitiveComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  (this->MovementBase).field0_0x0 = (param_1->MovementBase).field0_0x0;
  this->MovementBaseBoneName = param_1->MovementBaseBoneName;
  FRootMotionSourceGroup::operator=
            (&this->AuthoritativeRootMotion,&param_1->AuthoritativeRootMotion);
  uVar3 = *(undefined8 *)&(param_1->Acceleration).field_0x8;
  *(undefined8 *)&this->Acceleration = *(undefined8 *)&param_1->Acceleration;
  *(undefined8 *)&(this->Acceleration).field_0x8 = uVar3;
  *(undefined8 *)&(this->Acceleration).field_0x10 =
       *(undefined8 *)&(param_1->Acceleration).field_0x10;
  uVar3 = *(undefined8 *)&(param_1->LinearVelocity).field_0x8;
  *(undefined8 *)&this->LinearVelocity = *(undefined8 *)&param_1->LinearVelocity;
  *(undefined8 *)&(this->LinearVelocity).field_0x8 = uVar3;
  *(undefined8 *)&(this->LinearVelocity).field_0x10 =
       *(undefined8 *)&(param_1->LinearVelocity).field_0x10;
  return this;
}

// GetAnimMontage @ 147706870

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UAnimMontage * __thiscall FRepRootMotionMontage::GetAnimMontage(FRepRootMotionMontage *this)

{
  bool bVar1;
  UClass *pUVar2;
  
  if ((this->Animation).field0_0x0.DebugPtr != (UAnimSequenceBase *)0x0) {
    pUVar2 = Z_Construct_UClass_UAnimMontage_NoRegister();
    bVar1 = FObjectPtr::IsA((FObjectPtr *)this,pUVar2);
    if (bVar1) {
      return (UAnimMontage *)(this->Animation).field0_0x0.DebugPtr;
    }
  }
  return (UAnimMontage *)0x0;
}

