// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 4

// Reset @ 14bac95c0

void __thiscall FDS_SlotInfoBase::Reset(FDS_SlotInfoBase *this)

{
  this->IconID = 0;
  return;
}

// ~FDS_SlotInfoBase @ 14bce5c20

void __thiscall FDS_SlotInfoBase::~FDS_SlotInfoBase(FDS_SlotInfoBase *this)

{
  this->_padding_ = (longlong)&___7FDS_SlotInfoBase__6B_;
  return;
}

// IsValid @ 14bd068b0

bool __thiscall FDS_SlotInfoBase::IsValid(FDS_SlotInfoBase *this)

{
  return false;
}

// SetDragSlot @ 14bd1f290

void __thiscall
FDS_SlotInfoBase::SetDragSlot
          (FDS_SlotInfoBase *this,TWeakObjectPtr<UDS_W_DragSlotVisual,FWeakObjectPtr> param_1)

{
  int iVar1;
  bool bVar2;
  UObject *pUVar3;
  FWeakObjectPtr local_res10 [3];
  
  local_res10[0] = param_1.WeakPtr;
  bVar2 = FWeakObjectPtr::IsValid(local_res10);
  if (bVar2) {
    pUVar3 = FWeakObjectPtr::Get(local_res10);
    if (*(longlong *)&pUVar3[0x36].field_0x18 != 0) {
      iVar1 = this->GradeBgID;
      pUVar3 = FWeakObjectPtr::Get(local_res10);
      *(int *)(*(longlong *)&pUVar3[0x36].field_0x18 + 0x4b0) = iVar1;
    }
    pUVar3 = FWeakObjectPtr::Get(local_res10);
    if (*(longlong *)&pUVar3[0x36].field_0x8 != 0) {
      iVar1 = this->IconID;
      pUVar3 = FWeakObjectPtr::Get(local_res10);
      *(int *)(*(longlong *)&pUVar3[0x36].field_0x8 + 0x4b0) = iVar1;
    }
  }
  return;
}

