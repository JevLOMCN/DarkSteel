// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 1

// FActorSpawnParameters @ 149d33340

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FActorSpawnParameters * __thiscall
FActorSpawnParameters::FActorSpawnParameters
          (FActorSpawnParameters *this,FActorSpawnParameters *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 *puVar4;
  
  this->Name = param_1->Name;
  this->Template = param_1->Template;
  this->Owner = param_1->Owner;
  this->Instigator = param_1->Instigator;
  this->OverrideLevel = param_1->OverrideLevel;
  this->OverrideParentComponent = param_1->OverrideParentComponent;
  this->SpawnCollisionHandlingOverride = param_1->SpawnCollisionHandlingOverride;
  this->TransformScaleMethod = param_1->TransformScaleMethod;
  bVar3 = (this->bRemoteOwned ^ param_1->bRemoteOwned) & 1 ^ this->field_0x32;
  this->field_0x32 = bVar3;
  bVar3 = (bVar3 ^ param_1->field_0x32) & 2 ^ bVar3;
  this->field_0x32 = bVar3;
  bVar3 = (bVar3 ^ param_1->field_0x32) & 4 ^ bVar3;
  this->field_0x32 = bVar3;
  bVar3 = (bVar3 ^ param_1->field_0x32) & 8 ^ bVar3;
  this->field_0x32 = bVar3;
  this->field_0x32 = (bVar3 ^ param_1->field_0x32) & 0x10 ^ bVar3;
  this->NameMode = param_1->NameMode;
  this->ObjectFlags = param_1->ObjectFlags;
  lVar1 = *(longlong *)&param_1->CustomPreSpawnInitalization;
  *(longlong *)&this->CustomPreSpawnInitalization = lVar1;
  *(undefined8 *)&(this->CustomPreSpawnInitalization).field_0x28 = 0;
  if (lVar1 != 0) {
    puVar2 = *(undefined8 **)&(param_1->CustomPreSpawnInitalization).field_0x28;
    puVar4 = (undefined8 *)&(param_1->CustomPreSpawnInitalization).field_0x10;
    if (puVar2 != (undefined8 *)0x0) {
      puVar4 = puVar2;
    }
    (**(code **)*puVar4)();
  }
  return this;
}

