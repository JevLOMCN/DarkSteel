// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Foliage
// Functions: 7

// StaticStruct @ 145ecffb0

UScriptStruct * __cdecl FProceduralFoliageInstance::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FProceduralFoliageInstance.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Foliage();
    Z_Registration_Info_UScriptStruct_FProceduralFoliageInstance.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FProceduralFoliageInstance,(UObject *)pUVar1,
                         L"ProceduralFoliageInstance");
  }
  return Z_Registration_Info_UScriptStruct_FProceduralFoliageInstance.OuterSingleton;
}

// FProceduralFoliageInstance @ 145ed88c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FProceduralFoliageInstance * __thiscall
FProceduralFoliageInstance::FProceduralFoliageInstance(FProceduralFoliageInstance *this)

{
  (this->Rotation).W = 1.0;
  (this->Rotation).X = 0.0;
  (this->Rotation).Y = 0.0;
  (this->Rotation).Z = 0.0;
  (this->Location).field0_0x0._s_0.X = 0.0;
  (this->Location).field0_0x0._s_0.Y = 0.0;
  (this->Location).field0_0x0._s_0.Z = 0.0;
  this->Age = 0.0;
  (this->Normal).field0_0x0._s_0.X = 0.0;
  (this->Normal).field0_0x0._s_0.Y = 0.0;
  (this->Normal).field0_0x0._s_0.Z = 0.0;
  this->Scale = 1.0;
  this->BaseComponent = (UActorComponent *)0x0;
  this->bBlocker = false;
  this->bAlive = true;
  (this->Type).field0_0x0.DebugPtr = (UFoliageType *)0x0;
  return this;
}

// Domination @ 145ee0080

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FProceduralFoliageInstance * __cdecl
FProceduralFoliageInstance::Domination
          (FProceduralFoliageInstance *param_1,FProceduralFoliageInstance *param_2,Type param_3)

{
  FProceduralFoliageInstance *pFVar1;
  float fVar2;
  float fVar3;
  
  pFVar1 = param_2;
  if ((param_1->bBlocker == false) && (pFVar1 = param_1, param_2->bBlocker == false)) {
    fVar2 = ((param_2->Type).field0_0x0.DebugPtr)->OverlapPriority;
    fVar3 = ((param_1->Type).field0_0x0.DebugPtr)->OverlapPriority;
    if (fVar3 == fVar2) {
      fVar2 = param_2->Age;
      fVar3 = param_1->Age;
      if (fVar3 == fVar2) {
        pFVar1 = param_2;
        if (param_1->Scale < param_2->Scale) {
          pFVar1 = param_1;
        }
        goto LAB_145ee00d3;
      }
    }
    pFVar1 = param_2;
    if (fVar3 < fVar2) {
      pFVar1 = param_1;
    }
  }
LAB_145ee00d3:
  if ((param_3 == ShadeOverlap) && (((pFVar1->Type).field0_0x0.DebugPtr)->bCanGrowInShade != false))
  {
    pFVar1 = (FProceduralFoliageInstance *)0x0;
  }
  return pFVar1;
}

// GetCollisionRadius @ 145ee3380

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

float __thiscall FProceduralFoliageInstance::GetCollisionRadius(FProceduralFoliageInstance *this)

{
  return ((this->Type).field0_0x0.DebugPtr)->CollisionRadius * this->Scale;
}

// GetMaxRadius @ 145ee4020

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

float __thiscall FProceduralFoliageInstance::GetMaxRadius(FProceduralFoliageInstance *this)

{
  UFoliageType *pUVar1;
  float fVar2;
  float fVar3;
  
  pUVar1 = (this->Type).field0_0x0.DebugPtr;
  fVar2 = this->Scale * pUVar1->ShadeRadius;
  fVar3 = this->Scale * pUVar1->CollisionRadius;
  if (fVar2 <= fVar3) {
    fVar2 = fVar3;
  }
  return fVar2;
}

// GetShadeRadius @ 145ee6160

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

float __thiscall FProceduralFoliageInstance::GetShadeRadius(FProceduralFoliageInstance *this)

{
  return ((this->Type).field0_0x0.DebugPtr)->ShadeRadius * this->Scale;
}

// TerminateInstance @ 145eed550

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FProceduralFoliageInstance::TerminateInstance(FProceduralFoliageInstance *this)

{
  this->bAlive = false;
  return;
}

