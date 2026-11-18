// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MessageLog
// Functions: 1

// GetDisplayName @ 142bfc600

FText * __thiscall FWorkspaceItem::GetDisplayName(FWorkspaceItem *this)

{
  TAttribute<FText> *this_00;
  char cVar1;
  longlong *plVar2;
  FReadAccessScope local_38;
  FReadAccessScope local_20;
  
  this_00 = &this->DisplayNameAttribute;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &(this->DisplayNameAttribute).Getter,&local_38);
  if (((*(int *)&(this->DisplayNameAttribute).Getter.field_0x10 == 0) ||
      (plVar2 = *(longlong **)&(this->DisplayNameAttribute).Getter.field_0x8,
      plVar2 == (longlong *)0x0)) || (cVar1 = (**(code **)(*plVar2 + 0x38))(), cVar1 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_38);
    return &this_00->Value;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_38);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &(this->DisplayNameAttribute).Getter,&local_20);
  if (*(int *)&(this->DisplayNameAttribute).Getter.field_0x10 == 0) {
    plVar2 = (longlong *)0x0;
  }
  else {
    plVar2 = *(longlong **)&(this->DisplayNameAttribute).Getter.field_0x8;
  }
  (**(code **)(*plVar2 + 0x60))(plVar2,&local_38);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_20);
  FText::operator=(&this_00->Value,(FText *)&local_38);
  if ((ITextData *)local_38.DestructionSentinel._0_8_ == (ITextData *)0x0) {
    return &this_00->Value;
  }
  (**(code **)((longlong)*(ITextData *)local_38.DestructionSentinel._0_8_ + 0x10))();
  return &this_00->Value;
}

