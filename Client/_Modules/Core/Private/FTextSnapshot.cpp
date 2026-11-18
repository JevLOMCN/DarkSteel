// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 7

// FTextSnapshot @ 141737c00

FTextSnapshot * __thiscall FTextSnapshot::FTextSnapshot(FTextSnapshot *this,FText *param_1)

{
  uint *puVar1;
  ITextData *pIVar2;
  ushort uVar3;
  ushort uVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  
  uVar4 = 0;
  (this->TextDataPtr).Reference = (ITextData *)0x0;
  pIVar2 = (param_1->TextData).Reference;
  (this->TextDataPtr).Reference = pIVar2;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res8);
  }
  pIVar2 = (param_1->TextData).Reference;
  (**(code **)((longlong)*pIVar2 + 0x30))(pIVar2,&this->LocalizedStringPtr);
  FText::Rebuild(param_1);
  lVar5 = (**(code **)((longlong)*(param_1->TextData).Reference + 0x28))();
  puVar1 = &param_1->Flags;
  if ((*(int *)(lVar5 + 8) < 2) || ((*puVar1 & 2) != 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = (**(code **)((longlong)*(param_1->TextData).Reference + 0x38))();
  }
  this->GlobalHistoryRevision = uVar3;
  FText::Rebuild(param_1);
  lVar5 = (**(code **)((longlong)*(param_1->TextData).Reference + 0x28))();
  if ((1 < *(int *)(lVar5 + 8)) && ((*puVar1 & 2) == 0)) {
    uVar4 = (**(code **)((longlong)*(param_1->TextData).Reference + 0x40))();
  }
  this->LocalHistoryRevision = uVar4;
  this->Flags = *puVar1;
  return this;
}

// FTextSnapshot @ 141737cd0

FTextSnapshot * __thiscall FTextSnapshot::FTextSnapshot(FTextSnapshot *this)

{
  (this->TextDataPtr).Reference = (ITextData *)0x0;
  this->LocalizedStringPtr = (TDisplayStringPtr<FString_const_>)0x0;
  this->GlobalHistoryRevision = 0;
  this->LocalHistoryRevision = 0;
  this->Flags = 0;
  return this;
}

// operator= @ 14173a040

FTextSnapshot * __thiscall FTextSnapshot::operator=(FTextSnapshot *this,FTextSnapshot *param_1)

{
  ITextData *pIVar1;
  
  if (this != param_1) {
    pIVar1 = (this->TextDataPtr).Reference;
    (this->TextDataPtr).Reference = (param_1->TextDataPtr).Reference;
    (param_1->TextDataPtr).Reference = (ITextData *)0x0;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))();
    }
  }
  TRefCountPtr<UE::Text::Private::FRefCountedDisplayString>::operator=
            ((TRefCountPtr<UE::Text::Private::FRefCountedDisplayString> *)&this->LocalizedStringPtr,
             (TRefCountPtr<UE::Text::Private::FRefCountedDisplayString> *)
             &param_1->LocalizedStringPtr);
  this->GlobalHistoryRevision = param_1->GlobalHistoryRevision;
  this->LocalHistoryRevision = param_1->LocalHistoryRevision;
  this->Flags = param_1->Flags;
  return this;
}

// GetGlobalHistoryRevisionForText @ 14175d6d0

ushort __cdecl FTextSnapshot::GetGlobalHistoryRevisionForText(FText *param_1)

{
  ushort uVar1;
  longlong lVar2;
  
  FText::Rebuild(param_1);
  lVar2 = (**(code **)((longlong)*(param_1->TextData).Reference + 0x28))();
  if ((1 < *(int *)(lVar2 + 8)) && ((param_1->Flags & 2) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00014175d6fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)((longlong)*(param_1->TextData).Reference + 0x38))();
    return uVar1;
  }
  return 0;
}

// GetLocalHistoryRevisionForText @ 14175ebb0

ushort __cdecl FTextSnapshot::GetLocalHistoryRevisionForText(FText *param_1)

{
  ushort uVar1;
  longlong lVar2;
  
  FText::Rebuild(param_1);
  lVar2 = (**(code **)((longlong)*(param_1->TextData).Reference + 0x28))();
  if ((1 < *(int *)(lVar2 + 8)) && ((param_1->Flags & 2) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00014175ebde. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)((longlong)*(param_1->TextData).Reference + 0x40))();
    return uVar1;
  }
  return 0;
}

// IdenticalTo @ 141763870

bool __thiscall FTextSnapshot::IdenticalTo(FTextSnapshot *this,FText *param_1)

{
  int iVar1;
  ITextData *pIVar2;
  ITextData *pIVar3;
  int *piVar4;
  ushort uVar5;
  TDisplayStringPtr<FString_const_> *pTVar6;
  bool bVar7;
  bool bVar8;
  undefined4 local_res8;
  undefined4 uStackX_c;
  
  local_res8 = 0;
  FText::Rebuild(param_1);
  pIVar2 = (this->TextDataPtr).Reference;
  bVar8 = false;
  if ((pIVar2 != (ITextData *)0x0) &&
     (pIVar3 = (param_1->TextData).Reference, bVar8 = false, pIVar2 == pIVar3)) {
    pTVar6 = (TDisplayStringPtr<FString_const_> *)
             (**(code **)((longlong)*pIVar3 + 0x30))(pIVar3,&local_res8);
    bVar8 = true;
    if (this->LocalizedStringPtr == *pTVar6) {
      uVar5 = GetGlobalHistoryRevisionForText(param_1);
      if (this->GlobalHistoryRevision == uVar5) {
        uVar5 = GetLocalHistoryRevisionForText(param_1);
        if ((this->LocalHistoryRevision == uVar5) && (this->Flags == param_1->Flags)) {
          bVar7 = true;
          goto LAB_1417638e8;
        }
      }
    }
  }
  bVar7 = false;
LAB_1417638e8:
  if ((bVar8) && (piVar4 = (int *)CONCAT44(uStackX_c,local_res8), piVar4 != (int *)0x0)) {
    LOCK();
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      if (*(void **)(piVar4 + 2) != (void *)0x0) {
        FMemory::Free(*(void **)(piVar4 + 2));
      }
      ::operator_delete(piVar4,0x18);
    }
  }
  return bVar7;
}

// IsDisplayStringEqualTo @ 141766ae0

bool __thiscall FTextSnapshot::IsDisplayStringEqualTo(FTextSnapshot *this,FText *param_1)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  bool bVar7;
  
  FText::Rebuild(param_1);
  if ((this->TextDataPtr).Reference != (ITextData *)0x0) {
    FText::Rebuild(param_1);
    lVar4 = (**(code **)((longlong)*(param_1->TextData).Reference + 0x28))();
    uVar2 = 0;
    if ((*(int *)(lVar4 + 8) < 2) || ((param_1->Flags & 2) != 0)) {
      uVar1 = 0;
    }
    else {
      uVar1 = (**(code **)((longlong)*(param_1->TextData).Reference + 0x38))();
    }
    if (this->GlobalHistoryRevision != uVar1) {
      return false;
    }
    FText::Rebuild(param_1);
    lVar4 = (**(code **)((longlong)*(param_1->TextData).Reference + 0x28))();
    if ((1 < *(int *)(lVar4 + 8)) && ((param_1->Flags & 2) == 0)) {
      uVar2 = (**(code **)((longlong)*(param_1->TextData).Reference + 0x40))();
    }
    if (this->LocalHistoryRevision != uVar2) {
      return false;
    }
    puVar5 = (undefined8 *)(**(code **)((longlong)*(this->TextDataPtr).Reference + 0x28))();
    puVar6 = (undefined8 *)(**(code **)((longlong)*(param_1->TextData).Reference + 0x28))();
    iVar3 = *(int *)(puVar5 + 1);
    if (iVar3 == *(int *)(puVar6 + 1)) {
      if (iVar3 < 2) {
        return true;
      }
      iVar3 = wcscmp((wchar_t *)*puVar5,(wchar_t *)*puVar6);
      bVar7 = iVar3 == 0;
    }
    else {
      bVar7 = *(int *)(puVar6 + 1) + iVar3 == 1;
    }
    if (bVar7) {
      return true;
    }
  }
  return false;
}

