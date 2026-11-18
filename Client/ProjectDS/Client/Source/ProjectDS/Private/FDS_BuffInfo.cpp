// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 1

// SetInfoByBuffMsg @ 14ba71600

void __thiscall FDS_BuffInfo::SetInfoByBuffMsg(FDS_BuffInfo *this,Buff *param_1)

{
  int iVar1;
  FDS_BuffBaseTableRow *pFVar2;
  
  iVar1 = (param_1->_impl_).buff_id_;
  this->BuffID = iVar1;
  this->BuffLevel = (param_1->_impl_).buff_level_;
  this->BuffOverlapCount = (param_1->_impl_).buff_overlap_count_;
  this->TriggerEntityID = (param_1->_impl_).trigger_entity_id_;
  this->StartTicks = (param_1->_impl_).start_ticks_;
  pFVar2 = FDS_BuffBaseTableRow::Get((longlong)iVar1,true);
  if (pFVar2 != (FDS_BuffBaseTableRow *)0x0) {
    this->BuffApplyType = pFVar2->BuffApplyType;
  }
  return;
}

