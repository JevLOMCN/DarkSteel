// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 1

// InitSkillGuideInfo @ 14ba56880

void __thiscall
FDS_SkillGuideInfo::InitSkillGuideInfo
          (FDS_SkillGuideInfo *this,FDS_SkillAttackTableRow *param_1,float param_2)

{
  double dVar1;
  
  if (param_1 != (FDS_SkillAttackTableRow *)0x0) {
    this->ID_SkillGuide = param_1->ID_SkillGuide;
    this->ImpactType = param_1->ImpactType;
    this->StartTime = param_2;
    this->AttackAngle = param_1->AttackAngle;
    this->AttackDistanceMax = (float)param_1->AttackDistanceMax;
    this->AttackWidth = (float)param_1->AttackWidth;
    dVar1 = (param_1->LocationOffset).field0_0x0._s_0.Y;
    (this->LocationOffset).field0_0x0._s_0.X = (param_1->LocationOffset).field0_0x0._s_0.X;
    (this->LocationOffset).field0_0x0._s_0.Y = dVar1;
    (this->LocationOffset).field0_0x0._s_0.Z = (param_1->LocationOffset).field0_0x0._s_0.Z;
    this->RotationOffset = param_1->RotationOffset;
    this->GuideEffectScalingTime = param_1->GuideEffectScalingTime;
    this->GuideEffectAliveTime = param_1->GuideEffectAliveTime;
  }
  return;
}

