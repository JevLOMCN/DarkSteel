// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 6

// FWidgetVolatileUpdateIterator @ 1424773e0

FWidgetVolatileUpdateIterator * __thiscall
FSlateInvalidationWidgetList::FWidgetVolatileUpdateIterator::FWidgetVolatileUpdateIterator
          (FWidgetVolatileUpdateIterator *this,FSlateInvalidationWidgetList *param_1,bool param_2)

{
  this->WidgetList = param_1;
  this->CurrentWidgetIndex = FSlateInvalidationWidgetIndex::Invalid;
  this->AttributeIndex = 0;
  this->bSkipCollapsed = param_2;
  AdvanceArray(this,param_1->FirstArrayIndex);
  if (this->bSkipCollapsed != false) {
    SkipToNextExpend(this);
  }
  return this;
}

// Advance @ 14247fd10

void __thiscall
FSlateInvalidationWidgetList::FWidgetVolatileUpdateIterator::Advance
          (FWidgetVolatileUpdateIterator *this)

{
  ushort uVar1;
  int iVar2;
  FSlateInvalidationWidgetList *pFVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 *puVar7;
  int iVar8;
  longlong lVar9;
  FSlateInvalidationWidgetIndex local_res8;
  
  pFVar3 = this->WidgetList;
  uVar1 = (this->CurrentWidgetIndex).ArrayIndex;
  if ((int)(uint)uVar1 < *(int *)&(pFVar3->Data).field_0x28) {
    if ((*(int *)&(pFVar3->Data).field_0x28 <= (int)(uint)uVar1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5c6,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    puVar7 = *(undefined1 **)&(pFVar3->Data).field_0x20;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(pFVar3->Data).field_0x10;
    }
    if ((*(uint *)(puVar7 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0)
    goto LAB_14247fdc0;
  }
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("WidgetList.Data.IsValidIndex(CurrentWidgetIndex.ArrayIndex)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\FastUpdate\\SlateInvalidationWidgetList.cpp"
                     ,0x123,L"");
  if (bVar6) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
LAB_14247fdc0:
  iVar2 = this->AttributeIndex;
  local_res8.ArrayIndex = (this->CurrentWidgetIndex).ArrayIndex;
  iVar8 = iVar2 + 1;
  this->AttributeIndex = iVar8;
  lVar4 = *(longlong *)&this->WidgetList->Data;
  lVar9 = (ulonglong)local_res8.ArrayIndex * 0x40;
  if (iVar8 < *(int *)(lVar9 + 0x38 + lVar4)) {
    local_res8.ElementIndex =
         *(ushort *)(*(longlong *)(lVar9 + 0x30 + lVar4) + 2 + (longlong)iVar2 * 2);
    this->CurrentWidgetIndex = local_res8;
  }
  else {
    this->AttributeIndex = 0;
    this->CurrentWidgetIndex = FSlateInvalidationWidgetIndex::Invalid;
    AdvanceArray(this,*(int *)(lVar9 + 4 + lVar4));
  }
  if (this->bSkipCollapsed == false) {
    return;
  }
  SkipToNextExpend(this);
  return;
}

// AdvanceArray @ 14247fe50

void __thiscall
FSlateInvalidationWidgetList::FWidgetVolatileUpdateIterator::AdvanceArray
          (FWidgetVolatileUpdateIterator *this,int param_1)

{
  FSlateInvalidationWidgetList *pFVar1;
  longlong lVar2;
  code *pcVar3;
  FSlateInvalidationWidgetIndex FVar4;
  bool bVar5;
  uint uVar6;
  undefined1 *puVar7;
  longlong lVar8;
  
  if (param_1 == -1) {
    return;
  }
  do {
    pFVar1 = this->WidgetList;
    if ((param_1 < 0) || (*(int *)&(pFVar1->Data).field_0x28 <= param_1)) {
LAB_14247fe9c:
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("WidgetList.Data.IsValidIndex(ArrayIndex)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\FastUpdate\\SlateInvalidationWidgetList.cpp"
                         ,0x161,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    else {
      puVar7 = *(undefined1 **)&(pFVar1->Data).field_0x20;
      if (puVar7 == (undefined1 *)0x0) {
        puVar7 = &(pFVar1->Data).field_0x10;
      }
      uVar6 = param_1;
      if (param_1 < 0) {
        uVar6 = param_1 + 0x1f;
      }
      if ((*(uint *)(puVar7 + (longlong)((int)uVar6 >> 5) * 4) >> (param_1 & 0x1fU) & 1) == 0)
      goto LAB_14247fe9c;
    }
    lVar8 = (longlong)param_1 * 0x40;
    lVar2 = *(longlong *)&this->WidgetList->Data;
    if (0 < *(int *)(lVar2 + 0x38 + lVar8)) {
      FVar4.ElementIndex = **(ushort **)(lVar2 + 0x30 + lVar8);
      FVar4.ArrayIndex = (ushort)param_1;
      this->CurrentWidgetIndex = FVar4;
      return;
    }
    param_1 = *(uint *)(lVar2 + 4 + lVar8);
    if (param_1 == 0xffffffff) {
      return;
    }
  } while( true );
}

// Internal_Advance @ 142498ca0

void __thiscall
FSlateInvalidationWidgetList::FWidgetVolatileUpdateIterator::Internal_Advance
          (FWidgetVolatileUpdateIterator *this)

{
  ushort uVar1;
  int iVar2;
  FSlateInvalidationWidgetList *pFVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 *puVar7;
  int iVar8;
  longlong lVar9;
  FSlateInvalidationWidgetIndex local_res8;
  
  pFVar3 = this->WidgetList;
  uVar1 = (this->CurrentWidgetIndex).ArrayIndex;
  if ((int)(uint)uVar1 < *(int *)&(pFVar3->Data).field_0x28) {
    if ((*(int *)&(pFVar3->Data).field_0x28 <= (int)(uint)uVar1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5c6,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    puVar7 = *(undefined1 **)&(pFVar3->Data).field_0x20;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(pFVar3->Data).field_0x10;
    }
    if ((*(uint *)(puVar7 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0)
    goto LAB_142498d4c;
  }
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("WidgetList.Data.IsValidIndex(CurrentWidgetIndex.ArrayIndex)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\FastUpdate\\SlateInvalidationWidgetList.cpp"
                     ,0x123,L"");
  if (bVar6) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
LAB_142498d4c:
  iVar2 = this->AttributeIndex;
  local_res8.ArrayIndex = (this->CurrentWidgetIndex).ArrayIndex;
  iVar8 = iVar2 + 1;
  this->AttributeIndex = iVar8;
  lVar4 = *(longlong *)&this->WidgetList->Data;
  lVar9 = (ulonglong)local_res8.ArrayIndex * 0x40;
  if (iVar8 < *(int *)(lVar9 + 0x38 + lVar4)) {
    local_res8.ElementIndex =
         *(ushort *)(*(longlong *)(lVar9 + 0x30 + lVar4) + 2 + (longlong)iVar2 * 2);
    this->CurrentWidgetIndex = local_res8;
    return;
  }
  this->AttributeIndex = 0;
  this->CurrentWidgetIndex = FSlateInvalidationWidgetIndex::Invalid;
  AdvanceArray(this,*(int *)(lVar9 + 4 + lVar4));
  return;
}

// Seek @ 1424a6a30

void __thiscall
FSlateInvalidationWidgetList::FWidgetVolatileUpdateIterator::Seek
          (FWidgetVolatileUpdateIterator *this,FSlateInvalidationWidgetIndex param_1)

{
  FSlateInvalidationWidgetList *pFVar1;
  code *pcVar2;
  FSlateInvalidationWidgetIndex FVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  undefined1 *puVar8;
  
  if ((param_1.ArrayIndex == FSlateInvalidationWidgetIndex::Invalid.ArrayIndex) &&
     (param_1.ElementIndex == FSlateInvalidationWidgetIndex::Invalid.ElementIndex)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("SeekTo != FSlateInvalidationWidgetIndex::Invalid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\FastUpdate\\SlateInvalidationWidgetList.cpp"
                       ,0x14b,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = this->WidgetList;
  uVar6 = (uint)param_1 & 0xffff;
  if ((int)uVar6 < *(int *)&(pFVar1->Data).field_0x28) {
    if (*(int *)&(pFVar1->Data).field_0x28 <= (int)uVar6) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5c6,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    puVar8 = *(undefined1 **)&(pFVar1->Data).field_0x20;
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = &(pFVar1->Data).field_0x10;
    }
    if ((*(uint *)(puVar8 + (ulonglong)(uVar6 >> 5) * 4) >> ((uint)param_1 & 0x1f) & 1) != 0)
    goto LAB_1424a6b0b;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("WidgetList.Data.IsValidIndex(SeekTo.ArrayIndex)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\FastUpdate\\SlateInvalidationWidgetList.cpp"
                     ,0x14c,L"");
  if (bVar4) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_1424a6b0b:
  lVar7 = (ulonglong)((uint)param_1 & 0xffff) * 0x40 + *(longlong *)&this->WidgetList->Data;
  iVar5 = TSlateElementSortedArray<unsigned_short,TLess<void>_>::FindLowerBound
                    ((TSlateElementSortedArray<unsigned_short,TLess<void>_> *)(lVar7 + 0x30),
                     param_1.ElementIndex);
  this->AttributeIndex = iVar5;
  if (iVar5 == -1) {
    this->AttributeIndex = 0;
    this->CurrentWidgetIndex = FSlateInvalidationWidgetIndex::Invalid;
    AdvanceArray(this,*(int *)(lVar7 + 4));
    return;
  }
  FVar3.ElementIndex = *(ushort *)(*(longlong *)(lVar7 + 0x30) + (longlong)iVar5 * 2);
  FVar3.ArrayIndex = param_1.ArrayIndex;
  this->CurrentWidgetIndex = FVar3;
  return;
}

// SkipToNextExpend @ 1424a7d10

void __thiscall
FSlateInvalidationWidgetList::FWidgetVolatileUpdateIterator::SkipToNextExpend
          (FWidgetVolatileUpdateIterator *this)

{
  FSlateInvalidationWidgetList *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined1 *puVar5;
  ushort uVar6;
  uint uVar7;
  longlong lVar8;
  undefined4 local_res8;
  FSlateInvalidationWidgetIndex local_res10;
  undefined4 local_res18;
  
  do {
    if (((this->CurrentWidgetIndex).ArrayIndex == FSlateInvalidationWidgetIndex::Invalid.ArrayIndex)
       && ((this->CurrentWidgetIndex).ElementIndex ==
           FSlateInvalidationWidgetIndex::Invalid.ElementIndex)) {
      return;
    }
    uVar7 = (uint)this->CurrentWidgetIndex >> 0x10;
    lVar8 = (ulonglong)((uint)this->CurrentWidgetIndex & 0xffff) * 0x40 +
            *(longlong *)&this->WidgetList->Data;
    if ((*(int *)(lVar8 + 0x18) <= (int)uVar7) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((*(byte *)(*(longlong *)(lVar8 + 0x10) + 0x15 + (ulonglong)uVar7 * 0x18) & 0xc) == 0) {
      return;
    }
    pFVar1 = this->WidgetList;
    if ((*(int *)((ulonglong)((uint)this->CurrentWidgetIndex & 0xffff) * 0x40 +
                  *(longlong *)&pFVar1->Data + 0x18) <=
         (int)((uint)this->CurrentWidgetIndex >> 0x10)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    IncrementIndex(pFVar1,SUB84(&local_res8,0));
    uVar7 = local_res8;
    uVar6 = (ushort)local_res8;
    if ((uVar6 == FSlateInvalidationWidgetIndex::Invalid.ArrayIndex) &&
       (local_res8._2_2_ == FSlateInvalidationWidgetIndex::Invalid.ElementIndex)) {
      this->AttributeIndex = 0;
      this->CurrentWidgetIndex = FSlateInvalidationWidgetIndex::Invalid;
      return;
    }
    local_res18 = local_res8;
    if (((uVar6 == FSlateInvalidationWidgetIndex::Invalid.ArrayIndex) &&
        (local_res8._2_2_ == FSlateInvalidationWidgetIndex::Invalid.ElementIndex)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("SeekTo != FSlateInvalidationWidgetIndex::Invalid",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\FastUpdate\\SlateInvalidationWidgetList.cpp"
                           ,0x14b,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar1 = this->WidgetList;
    if ((int)(uVar7 & 0xffff) < *(int *)&(pFVar1->Data).field_0x28) {
      puVar5 = *(undefined1 **)&(pFVar1->Data).field_0x20;
      if (puVar5 == (undefined1 *)0x0) {
        puVar5 = &(pFVar1->Data).field_0x10;
      }
      if ((*(uint *)(puVar5 + (ulonglong)((uVar7 & 0xffff) >> 5) * 4) >> (uVar7 & 0x1f) & 1) == 0)
      goto LAB_1424a7ea3;
    }
    else {
LAB_1424a7ea3:
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("WidgetList.Data.IsValidIndex(SeekTo.ArrayIndex)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\FastUpdate\\SlateInvalidationWidgetList.cpp"
                         ,0x14c,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    lVar8 = (ulonglong)(uVar7 & 0xffff) * 0x40 + *(longlong *)&this->WidgetList->Data;
    iVar4 = TSlateElementSortedArray<unsigned_short,TLess<void>_>::FindLowerBound
                      ((TSlateElementSortedArray<unsigned_short,TLess<void>_> *)(lVar8 + 0x30),
                       local_res18._2_2_);
    this->AttributeIndex = iVar4;
    if (iVar4 == -1) {
      this->AttributeIndex = 0;
      this->CurrentWidgetIndex = FSlateInvalidationWidgetIndex::Invalid;
      AdvanceArray(this,*(int *)(lVar8 + 4));
    }
    else {
      local_res10.ElementIndex = *(ushort *)(*(longlong *)(lVar8 + 0x30) + (longlong)iVar4 * 2);
      local_res10.ArrayIndex = uVar6;
      this->CurrentWidgetIndex = local_res10;
    }
  } while( true );
}

