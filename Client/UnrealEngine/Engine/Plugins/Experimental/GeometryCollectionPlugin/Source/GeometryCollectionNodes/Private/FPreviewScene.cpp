// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 1

// ConstructionValues @ 14e90fb20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

ConstructionValues * __thiscall
FPreviewScene::ConstructionValues::ConstructionValues
          (ConstructionValues *this,ConstructionValues *param_1)

{
  UClass *pUVar1;
  double dVar2;
  uint uVar3;
  
  dVar2 = (param_1->LightRotation).Yaw;
  (this->LightRotation).Pitch = (param_1->LightRotation).Pitch;
  (this->LightRotation).Yaw = dVar2;
  (this->LightRotation).Roll = (param_1->LightRotation).Roll;
  this->SkyBrightness = param_1->SkyBrightness;
  this->LightBrightness = param_1->LightBrightness;
  uVar3 = (this->bDefaultLighting ^ param_1->bDefaultLighting) & 1 ^ *(uint *)&this->field_0x20;
  *(uint *)&this->field_0x20 = uVar3;
  uVar3 = (uVar3 ^ *(uint *)&param_1->field_0x20) & 2 ^ uVar3;
  *(uint *)&this->field_0x20 = uVar3;
  uVar3 = (uVar3 ^ *(uint *)&param_1->field_0x20) & 4 ^ uVar3;
  *(uint *)&this->field_0x20 = uVar3;
  uVar3 = (uVar3 ^ *(uint *)&param_1->field_0x20) & 8 ^ uVar3;
  *(uint *)&this->field_0x20 = uVar3;
  uVar3 = (uVar3 ^ *(uint *)&param_1->field_0x20) & 0x10 ^ uVar3;
  *(uint *)&this->field_0x20 = uVar3;
  uVar3 = (uVar3 ^ *(uint *)&param_1->field_0x20) & 0x20 ^ uVar3;
  *(uint *)&this->field_0x20 = uVar3;
  uVar3 = (uVar3 ^ *(uint *)&param_1->field_0x20) & 0x40 ^ uVar3;
  *(uint *)&this->field_0x20 = uVar3;
  *(uint *)&this->field_0x20 = (uVar3 ^ *(uint *)&param_1->field_0x20) & 0x80 ^ uVar3;
  pUVar1 = (param_1->DefaultGameMode).Class.field0_0x0.DebugPtr;
  (this->DefaultGameMode).Class.field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  this->OwningGameInstance = param_1->OwningGameInstance;
  return this;
}

