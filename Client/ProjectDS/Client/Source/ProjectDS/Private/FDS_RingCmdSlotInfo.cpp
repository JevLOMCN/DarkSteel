// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 3

// IsValid @ 14babb4b0

bool __thiscall FDS_RingCmdSlotInfo::IsValid(FDS_RingCmdSlotInfo *this)

{
  if (this->RingCmdType != None) {
    return this->ContentId != 0;
  }
  return false;
}

// Reset @ 14bac95a0

void __thiscall FDS_RingCmdSlotInfo::Reset(FDS_RingCmdSlotInfo *this)

{
  this->RingCmdType = None;
  this->ContentId = 0;
  return;
}

// SetDragSlot @ 14bacc300

void __thiscall
FDS_RingCmdSlotInfo::SetDragSlot
          (FDS_RingCmdSlotInfo *this,TWeakObjectPtr<UDS_W_DragSlotVisual,FWeakObjectPtr> param_1)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  UObject *pUVar4;
  FDS_CommonGradeTableRow *pFVar5;
  FWeakObjectPtr local_res10 [3];
  
  local_res10[0] = param_1.WeakPtr;
  bVar3 = FWeakObjectPtr::IsValid(local_res10);
  if (bVar3) {
    pUVar4 = FWeakObjectPtr::Get(local_res10);
    if (*(longlong *)&pUVar4[0x36].field_0x18 != 0) {
      pFVar5 = FDS_CommonGradeTableRow::GetRef(1,true);
      iVar1 = pFVar5->ID_ItemSlotGradeBg;
      pUVar4 = FWeakObjectPtr::Get(local_res10);
      *(int *)(*(longlong *)&pUVar4[0x36].field_0x18 + 0x4b0) = iVar1;
    }
    pUVar4 = FWeakObjectPtr::Get(local_res10);
    if (*(longlong *)&pUVar4[0x36].field_0x8 != 0) {
      uVar2 = *(undefined4 *)((longlong)&this->_padding_ + 4);
      pUVar4 = FWeakObjectPtr::Get(local_res10);
      *(undefined4 *)(*(longlong *)&pUVar4[0x36].field_0x8 + 0x4b0) = uVar2;
    }
  }
  return;
}

