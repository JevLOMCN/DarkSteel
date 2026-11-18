// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 2

// FDigestedHearingProperties @ 146f910a0

FDigestedHearingProperties * __thiscall
UAISense_Hearing::FDigestedHearingProperties::FDigestedHearingProperties
          (FDigestedHearingProperties *this,UAISenseConfig_Hearing *param_1)

{
  FAISenseAffiliationFilter FVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FDigestedHearingProperties *pFVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  this->HearingRangeSq = param_1->HearingRange * param_1->HearingRange;
  FVar1 = param_1->DetectionByAffiliation;
  uVar6 = (param_1->DetectionByAffiliation).bDetectFriendlies;
  uVar4 = (param_1->DetectionByAffiliation).bDetectEnemies << 2;
  uVar8 = (uint)FVar1 & 2;
  uVar7 = uVar6 | uVar4 | uVar8;
  if (uVar7 != (uVar6 | uVar4 | uVar8)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IntFitsIn<OutType>(In)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                       ,0xae,L"Loss of data caused by narrowing conversion, In = %llu");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FDigestedHearingProperties *)(*pcVar2)();
      return pFVar5;
    }
  }
  this->AffiliationFlags = (uchar)uVar7;
  return this;
}

// FDigestedHearingProperties @ 146f91130

FDigestedHearingProperties * __thiscall
UAISense_Hearing::FDigestedHearingProperties::FDigestedHearingProperties
          (FDigestedHearingProperties *this)

{
  this->HearingRangeSq = -1.0;
  this->AffiliationFlags = '\a';
  return this;
}

