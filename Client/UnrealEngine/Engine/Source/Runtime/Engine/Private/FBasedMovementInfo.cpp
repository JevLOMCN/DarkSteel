// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// StaticStruct @ 1476d77c0

UScriptStruct * __cdecl FBasedMovementInfo::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FBasedMovementInfo.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FBasedMovementInfo.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FBasedMovementInfo,(UObject *)pUVar1,
                         L"BasedMovementInfo");
  }
  return Z_Registration_Info_UScriptStruct_FBasedMovementInfo.OuterSingleton;
}

// operator= @ 1476e9400

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FBasedMovementInfo * __thiscall
FBasedMovementInfo::operator=(FBasedMovementInfo *this,FBasedMovementInfo *param_1)

{
  UPrimitiveComponent *pUVar1;
  undefined8 uVar2;
  double dVar3;
  byte bVar4;
  
  this->BaseID = param_1->BaseID;
  bVar4 = (this->bServerHasBaseComponent ^ param_1->bServerHasBaseComponent) & 1 ^ this->field_0x2;
  this->field_0x2 = bVar4;
  bVar4 = (bVar4 ^ param_1->field_0x2) & 2 ^ bVar4;
  this->field_0x2 = bVar4;
  this->field_0x2 = (bVar4 ^ param_1->field_0x2) & 4 ^ bVar4;
  this->BoneName = param_1->BoneName;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 = (param_1->MovementBase).field0_0x0.DebugPtr, pUVar1 != (UPrimitiveComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->MovementBase).field0_0x0 = (param_1->MovementBase).field0_0x0;
  uVar2 = *(undefined8 *)&(param_1->Location).field_0x8;
  *(undefined8 *)&this->Location = *(undefined8 *)&param_1->Location;
  *(undefined8 *)&(this->Location).field_0x8 = uVar2;
  *(undefined8 *)&(this->Location).field_0x10 = *(undefined8 *)&(param_1->Location).field_0x10;
  dVar3 = (param_1->Rotation).Yaw;
  (this->Rotation).Pitch = (param_1->Rotation).Pitch;
  (this->Rotation).Yaw = dVar3;
  (this->Rotation).Roll = (param_1->Rotation).Roll;
  return this;
}

