// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 4

// FDS_NPCGimmickInfo @ 14ba90920

FDS_NPCGimmickInfo * __thiscall
FDS_NPCGimmickInfo::FDS_NPCGimmickInfo
          (FDS_NPCGimmickInfo *this,TWeakObjectPtr<UDS_NPCGimmickData,FWeakObjectPtr> param_1,
          int param_2)

{
  FDS_NpcGimmickEventTableRow *pFVar1;
  undefined8 local_res8;
  
  (this->NPCGimmickData).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)this,(FObjectPtr)&local_res8);
  this->CurrentActionCount = 0;
  this->MaxActionCount = 0;
  (this->NPCGimmickData).WeakPtr = param_1.WeakPtr;
  this->GimmickEventID = param_2;
  pFVar1 = FDS_NpcGimmickEventTableRow::Get((longlong)param_2,true);
  if (pFVar1 != (FDS_NpcGimmickEventTableRow *)0x0) {
    this->MaxActionCount = pFVar1->ActionCountMax;
    this->CurrentActionCount = 0;
  }
  return this;
}

// IsMaxActionCount @ 14baba0a0

bool __thiscall FDS_NPCGimmickInfo::IsMaxActionCount(FDS_NPCGimmickInfo *this)

{
  return this->MaxActionCount <= this->CurrentActionCount;
}

// Reset @ 14bac94e0

void __thiscall FDS_NPCGimmickInfo::Reset(FDS_NPCGimmickInfo *this)

{
  FWeakObjectPtr local_res8;
  undefined8 local_res10;
  
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  (this->NPCGimmickData).WeakPtr = local_res8;
  this->GimmickEventID = 0;
  this->CurrentActionCount = 0;
  this->MaxActionCount = 0;
  return;
}

// SetGimmickActionCcount @ 14baccac0

void __thiscall FDS_NPCGimmickInfo::SetGimmickActionCcount(FDS_NPCGimmickInfo *this,int param_1)

{
  this->CurrentActionCount = param_1;
  return;
}

