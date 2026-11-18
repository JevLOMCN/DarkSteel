// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 1

// FUndoState @ 1429b9f30

FUndoState * __thiscall
SlateEditableTextTypes::FUndoState::FUndoState(FUndoState *this,FUndoState *param_1)

{
  bool bVar1;
  ITextData *pIVar2;
  ECursorAlignment EVar3;
  ETextDirection EVar4;
  undefined6 uVar5;
  undefined1 local_res8 [8];
  
  (this->Text).TextData.Reference = (ITextData *)0x0;
  pIVar2 = (param_1->Text).TextData.Reference;
  (this->Text).TextData.Reference = pIVar2;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res8);
  }
  (this->Text).Flags = (param_1->Text).Flags;
  (this->SelectionStart).bIsSet = false;
  bVar1 = (param_1->SelectionStart).bIsSet;
  (this->SelectionStart).bIsSet = bVar1;
  if (bVar1 != false) {
    (this->SelectionStart).TypedValue = (param_1->SelectionStart).TypedValue;
  }
  EVar3 = (param_1->CursorInfo).CursorAlignment;
  EVar4 = (param_1->CursorInfo).CursorTextDirection;
  uVar5 = *(undefined6 *)&(param_1->CursorInfo).field_0xa;
  (this->CursorInfo).CursorPosition = (param_1->CursorInfo).CursorPosition;
  (this->CursorInfo).CursorAlignment = EVar3;
  (this->CursorInfo).CursorTextDirection = EVar4;
  *(undefined6 *)&(this->CursorInfo).field_0xa = uVar5;
  (this->CursorInfo).LastCursorInteractionTime = (param_1->CursorInfo).LastCursorInteractionTime;
  return this;
}

