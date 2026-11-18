// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 1

// InitializeHitResult @ 1496df250

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FSceneHitQueryResult::InitializeHitResult(FSceneHitQueryResult *this,FSceneHitQueryRequest *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  int iVar13;
  FHitResult *pFVar14;
  FHitResult *pFVar15;
  longlong lVar16;
  TVector<double>_u_0 local_138;
  TVector<double>_u_0 local_120;
  FHitResult local_108;
  
  local_138._s_0.X = (this->Normal).field0_0x0._s_0.X;
  local_138._s_0.Y = (this->Normal).field0_0x0._s_0.Y;
  local_138._s_0.Z = (this->Normal).field0_0x0._s_0.Z;
  local_120._s_0.X = (this->Position).field0_0x0._s_0.X;
  local_120._s_0.Y = (this->Position).field0_0x0._s_0.Y;
  local_120._s_0.Z = (this->Position).field0_0x0._s_0.Z;
  pFVar14 = FHitResult::FHitResult
                      (&local_108,this->TargetActor,this->TargetComponent,
                       (TVector<double> *)&local_120._s_0,(TVector<double> *)&local_138._s_0);
  lVar16 = 2;
  pFVar15 = &this->HitResult;
  do {
    fVar11 = pFVar14->Time;
    fVar12 = pFVar14->Distance;
    iVar13 = pFVar14->_padding_;
    pFVar15->FaceIndex = pFVar14->FaceIndex;
    pFVar15->Time = fVar11;
    pFVar15->Distance = fVar12;
    pFVar15->_padding_ = iVar13;
    uVar10 = *(undefined8 *)&(pFVar14->Location).field_0x8;
    *(undefined8 *)&pFVar15->Location = *(undefined8 *)&pFVar14->Location;
    *(undefined8 *)&(pFVar15->Location).field_0x8 = uVar10;
    uVar10 = *(undefined8 *)&pFVar14->ImpactPoint;
    *(undefined8 *)&(pFVar15->Location).field_0x10 = *(undefined8 *)&(pFVar14->Location).field_0x10;
    *(undefined8 *)&pFVar15->ImpactPoint = uVar10;
    uVar10 = *(undefined8 *)&(pFVar14->ImpactPoint).field_0x10;
    *(undefined8 *)&(pFVar15->ImpactPoint).field_0x8 =
         *(undefined8 *)&(pFVar14->ImpactPoint).field_0x8;
    *(undefined8 *)&(pFVar15->ImpactPoint).field_0x10 = uVar10;
    uVar10 = *(undefined8 *)&(pFVar14->Normal).field_0x8;
    *(undefined8 *)&pFVar15->Normal = *(undefined8 *)&pFVar14->Normal;
    *(undefined8 *)&(pFVar15->Normal).field_0x8 = uVar10;
    uVar10 = *(undefined8 *)&pFVar14->ImpactNormal;
    *(undefined8 *)&(pFVar15->Normal).field_0x10 = *(undefined8 *)&(pFVar14->Normal).field_0x10;
    *(undefined8 *)&pFVar15->ImpactNormal = uVar10;
    uVar10 = *(undefined8 *)&(pFVar14->ImpactNormal).field_0x10;
    *(undefined8 *)&(pFVar15->ImpactNormal).field_0x8 =
         *(undefined8 *)&(pFVar14->ImpactNormal).field_0x8;
    *(undefined8 *)&(pFVar15->ImpactNormal).field_0x10 = uVar10;
    uVar10 = *(undefined8 *)&(pFVar14->TraceStart).field_0x8;
    *(undefined8 *)&pFVar15->TraceStart = *(undefined8 *)&pFVar14->TraceStart;
    *(undefined8 *)&(pFVar15->TraceStart).field_0x8 = uVar10;
    lVar16 = lVar16 + -1;
    pFVar14 = (FHitResult *)&(pFVar14->TraceStart).field_0x10;
    pFVar15 = (FHitResult *)&(pFVar15->TraceStart).field_0x10;
  } while (lVar16 != 0);
  dVar1 = (this->Position).field0_0x0._s_0.Y;
  dVar2 = (param_1->WorldRay).Origin.field0_0x0._s_0.Y;
  dVar3 = (this->Position).field0_0x0._s_0.X;
  dVar4 = (param_1->WorldRay).Origin.field0_0x0._s_0.X;
  dVar5 = (this->Position).field0_0x0._s_0.Z;
  dVar6 = (param_1->WorldRay).Origin.field0_0x0._s_0.Z;
  dVar7 = (param_1->WorldRay).Direction.field0_0x0._s_0.Y;
  dVar8 = (param_1->WorldRay).Direction.field0_0x0._s_0.X;
  dVar9 = (param_1->WorldRay).Direction.field0_0x0._s_0.Z;
  (this->HitResult).FaceIndex = this->HitTriIndex;
  (this->HitResult).Distance =
       (float)((dVar1 - dVar2) * dVar7 + (dVar3 - dVar4) * dVar8 + (dVar5 - dVar6) * dVar9);
  return;
}

