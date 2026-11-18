// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 2

// FDigestedSightProperties @ 146f91150

FDigestedSightProperties * __thiscall
UAISense_Sight::FDigestedSightProperties::FDigestedSightProperties
          (FDigestedSightProperties *this,UAISenseConfig_Sight *param_1)

{
  FAISenseAffiliationFilter FVar1;
  code *pcVar2;
  float fVar3;
  bool bVar4;
  uint uVar5;
  FDigestedSightProperties *pFVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  float fVar10;
  
  fVar10 = param_1->SightRadius + param_1->PointOfViewBackwardOffset;
  this->SightRadiusSq = fVar10 * fVar10;
  fVar10 = param_1->LoseSightRadius + param_1->PointOfViewBackwardOffset;
  this->LoseSightRadiusSq = fVar10 * fVar10;
  this->PointOfViewBackwardOffset = param_1->PointOfViewBackwardOffset;
  this->NearClippingRadiusSq = param_1->NearClippingRadius * param_1->NearClippingRadius;
  fVar10 = param_1->PeripheralVisionAngleDegrees * __real_3c8efa35;
  if (__real_40490fdb <= fVar10) {
    fVar10 = __real_40490fdb;
  }
  if (fVar10 <= 0.0) {
    fVar10 = 0.0;
  }
  fVar10 = cosf(fVar10);
  this->PeripheralVisionAngleCos = fVar10;
  FVar1 = param_1->DetectionByAffiliation;
  uVar8 = (param_1->DetectionByAffiliation).bDetectFriendlies;
  uVar5 = (param_1->DetectionByAffiliation).bDetectEnemies << 2;
  uVar7 = (uint)FVar1 & 2;
  uVar9 = uVar8 | uVar5 | uVar7;
  if (uVar9 != (uVar8 | uVar5 | uVar7)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IntFitsIn<OutType>(In)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                       ,0xae,L"Loss of data caused by narrowing conversion, In = %llu");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FDigestedSightProperties *)(*pcVar2)();
      return pFVar6;
    }
  }
  fVar3 = __real_bf800000;
  this->AffiliationFlags = (uchar)uVar9;
  fVar10 = param_1->AutoSuccessRangeFromLastSeenLocation;
  if (fVar10 == fVar3) {
    this->AutoSuccessRangeSqFromLastSeenLocation = fVar3;
    return this;
  }
  this->AutoSuccessRangeSqFromLastSeenLocation = fVar10 * fVar10;
  return this;
}

// FDigestedSightProperties @ 146f91260

FDigestedSightProperties * __thiscall
UAISense_Sight::FDigestedSightProperties::FDigestedSightProperties(FDigestedSightProperties *this)

{
  this->SightRadiusSq = -1.0;
  this->PeripheralVisionAngleCos = 0.0;
  this->PointOfViewBackwardOffset = 0.0;
  this->NearClippingRadiusSq = 0.0;
  this->AutoSuccessRangeSqFromLastSeenLocation = -1.0;
  this->LoseSightRadiusSq = -1.0;
  this->AffiliationFlags = '\a';
  return this;
}

