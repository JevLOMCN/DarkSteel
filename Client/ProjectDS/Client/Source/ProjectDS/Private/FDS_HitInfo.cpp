// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 2

// StaticStruct @ 14b4aae90

UScriptStruct * __cdecl FDS_HitInfo::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDS_HitInfo.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UScriptStruct_FDS_HitInfo.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDS_HitInfo,(UObject *)pUVar1,L"DS_HitInfo");
  }
  return Z_Registration_Info_UScriptStruct_FDS_HitInfo.OuterSingleton;
}

// FDS_HitInfo @ 14b7d7d40

FDS_HitInfo * __thiscall FDS_HitInfo::FDS_HitInfo(FDS_HitInfo *this,FDS_StruckInfo *param_1)

{
  double dVar1;
  double dVar2;
  undefined8 uVar3;
  bool bVar4;
  FDS_SkillAttackTableRow *pFVar5;
  UDS_SkillData *this_00;
  UObject *pUVar6;
  FWeakObjectPtr local_res8;
  
  this->MultiHitPointIndex = -1;
  this->SkillAttackID = 0;
  this->Damage = 0;
  this->FirstAttackerEntityID = 0;
  this->AttackerEntityID = 0;
  this->DefenderEntityID = 0;
  this->EventTime = 0.0;
  this->ExecuteTime = 0.0;
  this->SkillEndTime = 0.0;
  uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->EffectLocation).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X
  ;
  (this->EffectLocation).field0_0x0._s_0.Y = (double)uVar3;
  (this->EffectLocation).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z
  ;
  this->FirstAttackerEntityID = param_1->AttackerEntityID;
  this->AttackerEntityID = param_1->AttackerEntityID;
  this->DefenderEntityID = param_1->DefenderEntityID;
  this->SkillAttackID = param_1->SkillAttackID;
  this->Damage = param_1->Damage;
  this->EventTime = param_1->EventTime;
  this->ExecuteTime = param_1->ExecuteTime;
  this->MultiHitPointIndex = param_1->MultiHitPointIndex;
  dVar1 = (param_1->EffectLocation).field0_0x0._s_0.Y;
  (this->EffectLocation).field0_0x0._s_0.X = (param_1->EffectLocation).field0_0x0._s_0.X;
  (this->EffectLocation).field0_0x0._s_0.Y = dVar1;
  (this->EffectLocation).field0_0x0._s_0.Z = (param_1->EffectLocation).field0_0x0._s_0.Z;
  pFVar5 = FDS_SkillAttackTableRow::Get((longlong)param_1->SkillAttackID,true);
  if (pFVar5 != (FDS_SkillAttackTableRow *)0x0) {
    UDS_SkillData::GetData
              ((ulong64)&local_res8,this->FirstAttackerEntityID,SUB41(pFVar5->ID_Skill,0));
    bVar4 = FWeakObjectPtr::IsValid(&local_res8);
    if (bVar4) {
      this_00 = (UDS_SkillData *)FWeakObjectPtr::Get(&local_res8);
      pUVar6 = FWeakObjectPtr::Get(&local_res8);
      dVar1 = *(double *)&pUVar6[7].field_0x8;
      dVar2 = UDS_SkillData::GetSkillAniCutTime(this_00,true);
      this->SkillEndTime = dVar2 + dVar1;
    }
  }
  return this;
}

