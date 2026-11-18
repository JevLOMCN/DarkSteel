// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 3

// Reset @ 14bac9450

void __thiscall FDS_CharacterSlotInfo::Reset(FDS_CharacterSlotInfo *this)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  FText *pFVar3;
  undefined1 local_res8 [8];
  
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  pFVar3 = FText::GetEmpty();
  pIVar1 = (this->CharacterLevel).TextData.Reference;
  pIVar2 = (pFVar3->TextData).Reference;
  if (pIVar1 != pIVar2) {
    (this->CharacterLevel).TextData.Reference = pIVar2;
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res8);
    }
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
    }
    (this->CharacterLevel).Flags = pFVar3->Flags;
    return;
  }
  (this->CharacterLevel).Flags = pFVar3->Flags;
  return;
}

// SetDragSlot @ 14bacc1c0

void __thiscall
FDS_CharacterSlotInfo::SetDragSlot
          (FDS_CharacterSlotInfo *this,TWeakObjectPtr<UDS_W_DragSlotVisual,FWeakObjectPtr> param_1)

{
  undefined4 uVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  UObject *pUVar5;
  FWeakObjectPtr local_res10;
  undefined1 local_res18 [8];
  ITextData *local_18;
  uint local_10;
  
  local_res10 = param_1.WeakPtr;
  bVar4 = FWeakObjectPtr::IsValid(&local_res10);
  if (bVar4) {
    pUVar5 = FWeakObjectPtr::Get(&local_res10);
    if (*(longlong *)&pUVar5[0x36].field_0x8 != 0) {
      uVar1 = *(undefined4 *)((longlong)&this->_padding_ + 4);
      pUVar5 = FWeakObjectPtr::Get(&local_res10);
      *(undefined4 *)(*(longlong *)&pUVar5[0x36].field_0x8 + 0x4b0) = uVar1;
    }
    pUVar5 = FWeakObjectPtr::Get(&local_res10);
    if (*(longlong *)&pUVar5[0x36].field_0x20 != 0) {
      pUVar5 = FWeakObjectPtr::Get(&local_res10);
      local_18 = (this->CharacterName).TextData.Reference;
      plVar2 = *(longlong **)&pUVar5[0x36].field_0x20;
      pcVar3 = *(code **)(*plVar2 + 0x358);
      if (local_18 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_18 + 8))(local_18,local_res18);
      }
      local_10 = (this->CharacterName).Flags;
      (*pcVar3)(plVar2,&local_18);
      if (local_18 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_18 + 0x10))();
      }
    }
    pUVar5 = FWeakObjectPtr::Get(&local_res10);
    if (*(longlong *)(pUVar5 + 0x37) != 0) {
      pUVar5 = FWeakObjectPtr::Get(&local_res10);
      local_18 = (this->CharacterLevel).TextData.Reference;
      plVar2 = *(longlong **)(pUVar5 + 0x37);
      pcVar3 = *(code **)(*plVar2 + 0x358);
      if (local_18 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_18 + 8))(local_18,local_res18);
      }
      local_10 = (this->CharacterLevel).Flags;
      (*pcVar3)(plVar2,&local_18);
      if (local_18 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_18 + 0x10))();
      }
    }
  }
  return;
}

// IsValid @ 14c023ac0

bool __thiscall FDS_CharacterSlotInfo::IsValid(FDS_CharacterSlotInfo *this)

{
  return (bool)((byte)((uint)*(undefined4 *)((longlong)&this->_padding_ + 4) >> 0x1f) ^ 1);
}

