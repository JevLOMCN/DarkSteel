// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 1

// FSpawnDefaultActorParams @ 149eed8b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FSpawnDefaultActorParams * __thiscall
UPCGActorHelpers::FSpawnDefaultActorParams::FSpawnDefaultActorParams
          (FSpawnDefaultActorParams *this,UWorld *param_1,TSubclassOf<AActor> param_2,
          TTransform<double> *param_3,FActorSpawnParameters *param_4)

{
  undefined1 uVar1;
  UClass *pUVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  double dVar8;
  byte bVar9;
  undefined8 *puVar10;
  
  this->World = param_1;
  pUVar2 = *(UClass **)param_2.Class.field0_0x0;
  (this->ActorClass).Class.field0_0x0.DebugPtr = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  dVar8 = (param_3->Rotation).XY.m128d_f64[1];
  (this->Transform).Rotation.XY.m128d_f64[0] = (param_3->Rotation).XY.m128d_f64[0];
  (this->Transform).Rotation.XY.m128d_f64[1] = dVar8;
  dVar8 = (param_3->Rotation).ZW.m128d_f64[1];
  (this->Transform).Rotation.ZW.m128d_f64[0] = (param_3->Rotation).ZW.m128d_f64[0];
  (this->Transform).Rotation.ZW.m128d_f64[1] = dVar8;
  dVar8 = (param_3->Translation).XY.m128d_f64[1];
  (this->Transform).Translation.XY.m128d_f64[0] = (param_3->Translation).XY.m128d_f64[0];
  (this->Transform).Translation.XY.m128d_f64[1] = dVar8;
  dVar8 = (param_3->Translation).ZW.m128d_f64[1];
  (this->Transform).Translation.ZW.m128d_f64[0] = (param_3->Translation).ZW.m128d_f64[0];
  (this->Transform).Translation.ZW.m128d_f64[1] = dVar8;
  uVar5 = *(undefined4 *)((longlong)(param_3->Scale3D).XY.m128d_f64 + 4);
  uVar6 = *(undefined4 *)((param_3->Scale3D).XY.m128d_f64 + 1);
  uVar7 = *(undefined4 *)((longlong)(param_3->Scale3D).XY.m128d_f64 + 0xc);
  *(undefined4 *)(this->Transform).Scale3D.XY.m128d_f64 =
       *(undefined4 *)(param_3->Scale3D).XY.m128d_f64;
  *(undefined4 *)((longlong)(this->Transform).Scale3D.XY.m128d_f64 + 4) = uVar5;
  *(undefined4 *)((this->Transform).Scale3D.XY.m128d_f64 + 1) = uVar6;
  *(undefined4 *)((longlong)(this->Transform).Scale3D.XY.m128d_f64 + 0xc) = uVar7;
  uVar5 = *(undefined4 *)((longlong)(param_3->Scale3D).ZW.m128d_f64 + 4);
  uVar6 = *(undefined4 *)((param_3->Scale3D).ZW.m128d_f64 + 1);
  uVar7 = *(undefined4 *)((longlong)(param_3->Scale3D).ZW.m128d_f64 + 0xc);
  *(undefined4 *)(this->Transform).Scale3D.ZW.m128d_f64 =
       *(undefined4 *)(param_3->Scale3D).ZW.m128d_f64;
  *(undefined4 *)((longlong)(this->Transform).Scale3D.ZW.m128d_f64 + 4) = uVar5;
  *(undefined4 *)((this->Transform).Scale3D.ZW.m128d_f64 + 1) = uVar6;
  *(undefined4 *)((longlong)(this->Transform).Scale3D.ZW.m128d_f64 + 0xc) = uVar7;
  (this->SpawnParams).Name = param_4->Name;
  (this->SpawnParams).Template = param_4->Template;
  (this->SpawnParams).Owner = param_4->Owner;
  (this->SpawnParams).Instigator = param_4->Instigator;
  (this->SpawnParams).OverrideLevel = param_4->OverrideLevel;
  (this->SpawnParams).OverrideParentComponent = param_4->OverrideParentComponent;
  (this->SpawnParams).SpawnCollisionHandlingOverride = param_4->SpawnCollisionHandlingOverride;
  (this->SpawnParams).TransformScaleMethod = param_4->TransformScaleMethod;
  uVar1 = (this->SpawnParams).field_0x32;
  bVar9 = ((this->SpawnParams).bRemoteOwned ^ param_4->bRemoteOwned) & 1 ^ uVar1;
  (this->SpawnParams).field_0x32 = bVar9;
  bVar9 = (bVar9 ^ param_4->field_0x32) & 2 ^ bVar9;
  (this->SpawnParams).field_0x32 = bVar9;
  bVar9 = (bVar9 ^ param_4->field_0x32) & 4 ^ bVar9;
  (this->SpawnParams).field_0x32 = bVar9;
  bVar9 = (bVar9 ^ param_4->field_0x32) & 8 ^ bVar9;
  (this->SpawnParams).field_0x32 = bVar9;
  (this->SpawnParams).field_0x32 = (bVar9 ^ param_4->field_0x32) & 0x10 ^ bVar9;
  (this->SpawnParams).NameMode = param_4->NameMode;
  (this->SpawnParams).ObjectFlags = param_4->ObjectFlags;
  lVar3 = *(longlong *)&param_4->CustomPreSpawnInitalization;
  *(longlong *)&(this->SpawnParams).CustomPreSpawnInitalization = lVar3;
  *(undefined8 *)&(this->SpawnParams).CustomPreSpawnInitalization.field_0x28 = 0;
  if (lVar3 != 0) {
    puVar4 = *(undefined8 **)&(param_4->CustomPreSpawnInitalization).field_0x28;
    puVar10 = (undefined8 *)&(param_4->CustomPreSpawnInitalization).field_0x10;
    if (puVar4 != (undefined8 *)0x0) {
      puVar10 = puVar4;
    }
    (**(code **)*puVar10)();
  }
  this->Parent = (AActor *)0x0;
  this->bForceStaticMobility = true;
  this->bIsPreviewActor = false;
  return this;
}

