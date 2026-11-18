// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 4

// FDS_CompleteMsgInfo @ 14bf99080

FDS_CompleteMsgInfo * __thiscall
FDS_CompleteMsgInfo::FDS_CompleteMsgInfo
          (FDS_CompleteMsgInfo *this,
          TWeakObjectPtr<UDS_VM_W_Common_CompleteMessage,FWeakObjectPtr> param_1,int param_2,
          TWeakObjectPtr<UDS_VM_W_HUDMessage,FWeakObjectPtr> param_3)

{
  (this->ParentVM).WeakPtr = param_1.WeakPtr;
  this->PosIndex = 0;
  this->CurTransY = 0.0;
  this->DestTransY = 0.0;
  this->MsgVMIndex = param_2;
  (this->MsgVM).WeakPtr = param_3.WeakPtr;
  return this;
}

// IncreasePosIndex @ 14bfadae0

void __thiscall FDS_CompleteMsgInfo::IncreasePosIndex(FDS_CompleteMsgInfo *this)

{
  bool bVar1;
  UDS_VM_W_HUDMessage *this_00;
  
  this->PosIndex = this->PosIndex + 1;
  this->DestTransY = (float)this->PosIndex * __real_42700000;
  if (2 < this->PosIndex) {
    bVar1 = TWeakObjectPtr<UDS_VM_W_HUDMessage,FWeakObjectPtr>::UEOpEquals(&this->MsgVM,(void *)0x0)
    ;
    if (!bVar1) {
      this_00 = (UDS_VM_W_HUDMessage *)FWeakObjectPtr::Get(&(this->MsgVM).WeakPtr);
      UDS_VM_W_HUDMessage::ClearMsg(this_00);
      return;
    }
  }
  return;
}

// ResetTransY @ 14bfd5850

void __thiscall FDS_CompleteMsgInfo::ResetTransY(FDS_CompleteMsgInfo *this)

{
  int iVar1;
  bool bVar2;
  UDS_VM_W_Common_CompleteMessage *pUVar3;
  
  this->PosIndex = 0;
  this->CurTransY = 0.0;
  this->DestTransY = 0.0;
  bVar2 = TWeakObjectPtr<UDS_VM_W_Common_CompleteMessage,FWeakObjectPtr>::UEOpEquals
                    (&this->ParentVM,(void *)0x0);
  if (!bVar2) {
    iVar1 = this->MsgVMIndex;
    if (iVar1 == 0) {
      pUVar3 = (UDS_VM_W_Common_CompleteMessage *)FWeakObjectPtr::Get((FWeakObjectPtr *)this);
      UDS_VM_W_Common_CompleteMessage::SetMsgTransY_0(pUVar3,this->CurTransY);
      return;
    }
    if (iVar1 == 1) {
      pUVar3 = (UDS_VM_W_Common_CompleteMessage *)FWeakObjectPtr::Get((FWeakObjectPtr *)this);
      UDS_VM_W_Common_CompleteMessage::SetMsgTransY_1(pUVar3,this->CurTransY);
      return;
    }
    if (iVar1 == 2) {
      pUVar3 = (UDS_VM_W_Common_CompleteMessage *)FWeakObjectPtr::Get((FWeakObjectPtr *)this);
      UDS_VM_W_Common_CompleteMessage::SetMsgTransY_2(pUVar3,this->CurTransY);
      return;
    }
    if (iVar1 == 3) {
      pUVar3 = (UDS_VM_W_Common_CompleteMessage *)FWeakObjectPtr::Get((FWeakObjectPtr *)this);
      UDS_VM_W_Common_CompleteMessage::SetMsgTransY_3(pUVar3,this->CurTransY);
      return;
    }
  }
  return;
}

// UpdateTransY @ 14bfe5b70

void __thiscall FDS_CompleteMsgInfo::UpdateTransY(FDS_CompleteMsgInfo *this,float param_1)

{
  float fVar1;
  int iVar2;
  bool bVar3;
  UDS_VM_W_Common_CompleteMessage *pUVar4;
  float fVar5;
  
  fVar1 = this->DestTransY;
  if (this->CurTransY < fVar1) {
    fVar5 = param_1 * __real_43480000 + this->CurTransY;
    this->CurTransY = fVar5;
    if (fVar1 < fVar5) {
      this->CurTransY = fVar1;
    }
    bVar3 = TWeakObjectPtr<UDS_VM_W_Common_CompleteMessage,FWeakObjectPtr>::UEOpEquals
                      (&this->ParentVM,(void *)0x0);
    if (!bVar3) {
      iVar2 = this->MsgVMIndex;
      if (iVar2 == 0) {
        pUVar4 = (UDS_VM_W_Common_CompleteMessage *)FWeakObjectPtr::Get((FWeakObjectPtr *)this);
        UDS_VM_W_Common_CompleteMessage::SetMsgTransY_0(pUVar4,this->CurTransY);
        return;
      }
      if (iVar2 == 1) {
        pUVar4 = (UDS_VM_W_Common_CompleteMessage *)FWeakObjectPtr::Get((FWeakObjectPtr *)this);
        UDS_VM_W_Common_CompleteMessage::SetMsgTransY_1(pUVar4,this->CurTransY);
        return;
      }
      if (iVar2 == 2) {
        pUVar4 = (UDS_VM_W_Common_CompleteMessage *)FWeakObjectPtr::Get((FWeakObjectPtr *)this);
        UDS_VM_W_Common_CompleteMessage::SetMsgTransY_2(pUVar4,this->CurTransY);
        return;
      }
      if (iVar2 == 3) {
        pUVar4 = (UDS_VM_W_Common_CompleteMessage *)FWeakObjectPtr::Get((FWeakObjectPtr *)this);
        UDS_VM_W_Common_CompleteMessage::SetMsgTransY_3(pUVar4,this->CurTransY);
        return;
      }
    }
  }
  return;
}

