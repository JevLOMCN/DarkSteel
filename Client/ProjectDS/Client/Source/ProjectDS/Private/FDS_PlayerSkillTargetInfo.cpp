// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 2

// FDS_PlayerSkillTargetInfo @ 14ba31760

FDS_PlayerSkillTargetInfo * __thiscall
FDS_PlayerSkillTargetInfo::FDS_PlayerSkillTargetInfo
          (FDS_PlayerSkillTargetInfo *this,PlayerSkillPreservedInfo *param_1)

{
  Vector *pVVar1;
  undefined8 uVar2;
  Vector *pVVar3;
  
  this->TableID = 0;
  this->ZoneID = 0;
  this->EntityID = 0;
  this->bIsStuff = false;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Position).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Position).field0_0x0._s_0.Y = (double)uVar2;
  (this->Position).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->EndTime = 0.0;
  this->EntityID = (param_1->_impl_).entity_id_;
  this->bIsStuff = (param_1->_impl_).is_stuff_;
  this->TableID = (param_1->_impl_).target_id_;
  this->ZoneID = (param_1->_impl_).zone_id_;
  pVVar1 = (param_1->_impl_).position_;
  pVVar3 = &_Vector_default_instance_._instance;
  if (pVVar1 != (Vector *)0x0) {
    pVVar3 = pVVar1;
  }
  DS_Util::SetFVector(&this->Position,pVVar3);
  this->EndTime = (param_1->_impl_).end_time_;
  return this;
}

// IsOverEndTime @ 14ba5be00

bool __thiscall FDS_PlayerSkillTargetInfo::IsOverEndTime(FDS_PlayerSkillTargetInfo *this)

{
  double dVar1;
  double dVar2;
  
  dVar1 = this->EndTime;
  if (__real_3e45798ee2308c3a <
      (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
    dVar2 = UDS_TimeUtilManager::GetCurrentServerTime();
    return dVar1 < dVar2;
  }
  return true;
}

