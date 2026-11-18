// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 13

// FWidgetAttributeIterator @ 142477140

FWidgetAttributeIterator * __thiscall
FSlateInvalidationWidgetList::FWidgetAttributeIterator::FWidgetAttributeIterator
          (FWidgetAttributeIterator *this,FSlateInvalidationWidgetList *param_1)

{
  ushort uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FWidgetAttributeIterator *pFVar6;
  undefined1 *puVar7;
  longlong lVar8;
  uint uVar9;
  FSlateInvalidationWidgetList *pFVar10;
  
  this->WidgetList = param_1;
  this->CurrentWidgetIndex = FSlateInvalidationWidgetIndex::Invalid;
  (this->CurrentWidgetSortOrder).Order = 0xffffffff;
  this->AttributeIndex = 0;
  this->MoveToWidgetIndexOnNextAdvance = FSlateInvalidationWidgetIndex::Invalid;
  this->bNeedsWidgetFixUp = false;
  param_1->NumberOfLock = param_1->NumberOfLock + 1;
  pFVar10 = this->WidgetList;
  uVar9 = pFVar10->FirstArrayIndex;
  if (uVar9 == 0xffffffff) {
    return this;
  }
  do {
    if (((int)uVar9 < 0) || (*(int *)&(pFVar10->Data).field_0x28 <= (int)uVar9)) {
LAB_1424771c2:
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("WidgetList.Data.IsValidIndex(ArrayIndex)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\FastUpdate\\SlateInvalidationWidgetList.cpp"
                         ,0x37,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FWidgetAttributeIterator *)(*pcVar3)();
        return pFVar6;
      }
    }
    else {
      puVar7 = *(undefined1 **)&(pFVar10->Data).field_0x20;
      if (puVar7 == (undefined1 *)0x0) {
        puVar7 = &(pFVar10->Data).field_0x10;
      }
      uVar5 = uVar9;
      if ((int)uVar9 < 0) {
        uVar5 = uVar9 + 0x1f;
      }
      if ((*(uint *)(puVar7 + (longlong)((int)uVar5 >> 5) * 4) >> (uVar9 & 0x1f) & 1) == 0)
      goto LAB_1424771c2;
    }
    pFVar10 = this->WidgetList;
    lVar8 = (longlong)(int)uVar9 * 0x40;
    lVar2 = *(longlong *)&pFVar10->Data;
    if (0 < *(int *)(lVar2 + 0x28 + lVar8)) {
      uVar1 = **(ushort **)(lVar2 + 0x20 + lVar8);
      this->CurrentWidgetIndex =
           (FSlateInvalidationWidgetIndex)((uint)uVar1 << 0x10 | uVar9 & 0xffff);
      (this->CurrentWidgetSortOrder).Order =
           *(int *)((ulonglong)(uVar9 & 0xffff) * 0x40 + 8 + *(longlong *)&param_1->Data) * 0x400 +
           (uint)uVar1;
      return this;
    }
    uVar9 = *(uint *)(lVar2 + 4 + lVar8);
    if (uVar9 == 0xffffffff) {
      return this;
    }
  } while( true );
}

// ~FWidgetAttributeIterator @ 142479dc0

void __thiscall
FSlateInvalidationWidgetList::FWidgetAttributeIterator::~FWidgetAttributeIterator
          (FWidgetAttributeIterator *this)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  
  piVar1 = &this->WidgetList->NumberOfLock;
  *piVar1 = *piVar1 + -1;
  if (this->WidgetList->NumberOfLock < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("WidgetList.NumberOfLock >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\FastUpdate\\SlateInvalidationWidgetList.cpp"
                       ,0x48,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// Advance @ 14247fbd0

void __thiscall
FSlateInvalidationWidgetList::FWidgetAttributeIterator::Advance(FWidgetAttributeIterator *this)

{
  ushort uVar1;
  int iVar2;
  FSlateInvalidationWidgetList *pFVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  longlong lVar8;
  undefined1 *puVar9;
  int iVar10;
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
    puVar9 = *(undefined1 **)&(pFVar3->Data).field_0x20;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(pFVar3->Data).field_0x10;
    }
    if ((*(uint *)(puVar9 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0)
    goto LAB_14247fc6f;
  }
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("WidgetList.Data.IsValidIndex(CurrentWidgetIndex.ArrayIndex)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\FastUpdate\\SlateInvalidationWidgetList.cpp"
                     ,0xb0,L"");
  if (bVar6) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
LAB_14247fc6f:
  iVar2 = this->AttributeIndex;
  local_res8.ArrayIndex = (this->CurrentWidgetIndex).ArrayIndex;
  iVar10 = iVar2 + 1;
  lVar8 = (ulonglong)local_res8.ArrayIndex * 0x40;
  this->AttributeIndex = iVar10;
  lVar4 = *(longlong *)&this->WidgetList->Data;
  if (iVar10 < *(int *)(lVar4 + 0x28 + lVar8)) {
    local_res8.ElementIndex =
         *(ushort *)(*(longlong *)(lVar4 + 0x20 + lVar8) + 2 + (longlong)iVar2 * 2);
    this->CurrentWidgetIndex = local_res8;
    if ((local_res8.ArrayIndex == FSlateInvalidationWidgetIndex::Invalid.ArrayIndex) &&
       (local_res8.ElementIndex == FSlateInvalidationWidgetIndex::Invalid.ElementIndex)) {
      uVar7 = 0xffffffff;
    }
    else {
      uVar7 = *(int *)((ulonglong)local_res8.ArrayIndex * 0x40 + 8 +
                      *(longlong *)&this->WidgetList->Data) * 0x400 + (uint)local_res8.ElementIndex;
    }
    (this->CurrentWidgetSortOrder).Order = uVar7;
  }
  else {
    AdvanceArrayIndex(this,*(int *)(lVar4 + 4 + lVar8));
  }
  return;
}

// AdvanceArrayIndex @ 14247ff20

void __thiscall
FSlateInvalidationWidgetList::FWidgetAttributeIterator::AdvanceArrayIndex
          (FWidgetAttributeIterator *this,int param_1)

{
  ushort uVar1;
  FSlateInvalidationWidgetList *pFVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  undefined1 *puVar7;
  longlong lVar8;
  
  this->AttributeIndex = 0;
  this->CurrentWidgetIndex = FSlateInvalidationWidgetIndex::Invalid;
  (this->CurrentWidgetSortOrder).Order = 0xffffffff;
  if (param_1 == -1) {
    return;
  }
  do {
    pFVar2 = this->WidgetList;
    if ((param_1 < 0) || (*(int *)&(pFVar2->Data).field_0x28 <= param_1)) {
LAB_14247ff84:
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("WidgetList.Data.IsValidIndex(ArrayIndex)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\FastUpdate\\SlateInvalidationWidgetList.cpp"
                         ,0xf3,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    else {
      puVar7 = *(undefined1 **)&(pFVar2->Data).field_0x20;
      if (puVar7 == (undefined1 *)0x0) {
        puVar7 = &(pFVar2->Data).field_0x10;
      }
      uVar6 = param_1;
      if (param_1 < 0) {
        uVar6 = param_1 + 0x1f;
      }
      if ((*(uint *)(puVar7 + (longlong)((int)uVar6 >> 5) * 4) >> (param_1 & 0x1fU) & 1) == 0)
      goto LAB_14247ff84;
    }
    lVar8 = (longlong)param_1 * 0x40;
    lVar3 = *(longlong *)&this->WidgetList->Data;
    if (0 < *(int *)(lVar3 + 0x28 + lVar8)) {
      uVar1 = **(ushort **)(lVar3 + 0x20 + lVar8);
      this->CurrentWidgetIndex =
           (FSlateInvalidationWidgetIndex)((uint)uVar1 << 0x10 | param_1 & 0xffffU);
      (this->CurrentWidgetSortOrder).Order =
           *(int *)((ulonglong)(param_1 & 0xffffU) * 0x40 + 8 + *(longlong *)&this->WidgetList->Data
                   ) * 0x400 + (uint)uVar1;
      return;
    }
    param_1 = *(uint *)(lVar3 + 4 + lVar8);
    if (param_1 == 0xffffffff) {
      return;
    }
  } while( true );
}

// AdvanceToNextParent @ 142480020

void __thiscall
FSlateInvalidationWidgetList::FWidgetAttributeIterator::AdvanceToNextParent
          (FWidgetAttributeIterator *this)

{
  FSlateInvalidationWidgetIndex FVar1;
  FSlateInvalidationWidgetList *this_00;
  code *pcVar2;
  bool bVar3;
  FWidgetProxy *pFVar4;
  FSlateInvalidationWidgetIndex local_res8 [2];
  
  if (((this->MoveToWidgetIndexOnNextAdvance).ArrayIndex !=
       FSlateInvalidationWidgetIndex::Invalid.ArrayIndex) ||
     ((this->MoveToWidgetIndexOnNextAdvance).ElementIndex !=
      FSlateInvalidationWidgetIndex::Invalid.ElementIndex)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("MoveToWidgetIndexOnNextAdvance == FSlateInvalidationWidgetIndex::Invalid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\FastUpdate\\SlateInvalidationWidgetList.cpp"
                       ,0xd7,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar4 = FSlateInvalidationWidgetList::operator[](this->WidgetList,this->CurrentWidgetIndex);
  FVar1 = pFVar4->ParentIndex;
  if ((FVar1.ArrayIndex != FSlateInvalidationWidgetIndex::Invalid.ArrayIndex) ||
     (FVar1.ElementIndex != FSlateInvalidationWidgetIndex::Invalid.ElementIndex)) {
    this_00 = this->WidgetList;
    FSlateInvalidationWidgetList::operator[](this_00,FVar1);
    IncrementIndex(this_00,SUB84(local_res8,0));
    if ((local_res8[0].ArrayIndex != FSlateInvalidationWidgetIndex::Invalid.ArrayIndex) ||
       (local_res8[0].ElementIndex != FSlateInvalidationWidgetIndex::Invalid.ElementIndex)) {
      Seek(this,local_res8[0]);
      return;
    }
  }
  this->AttributeIndex = 0;
  this->CurrentWidgetIndex = FSlateInvalidationWidgetIndex::Invalid;
  (this->CurrentWidgetSortOrder).Order = 0xffffffff;
  return;
}

// AdvanceToNextSibling @ 142480100

void __thiscall
FSlateInvalidationWidgetList::FWidgetAttributeIterator::AdvanceToNextSibling
          (FWidgetAttributeIterator *this)

{
  FSlateInvalidationWidgetList *this_00;
  code *pcVar1;
  bool bVar2;
  FSlateInvalidationWidgetIndex local_res8 [2];
  
  if (((this->MoveToWidgetIndexOnNextAdvance).ArrayIndex !=
       FSlateInvalidationWidgetIndex::Invalid.ArrayIndex) ||
     ((this->MoveToWidgetIndexOnNextAdvance).ElementIndex !=
      FSlateInvalidationWidgetIndex::Invalid.ElementIndex)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("MoveToWidgetIndexOnNextAdvance == FSlateInvalidationWidgetIndex::Invalid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\FastUpdate\\SlateInvalidationWidgetList.cpp"
                       ,199,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this_00 = this->WidgetList;
  FSlateInvalidationWidgetList::operator[](this_00,this->CurrentWidgetIndex);
  IncrementIndex(this_00,SUB84(local_res8,0));
  if ((local_res8[0].ArrayIndex == FSlateInvalidationWidgetIndex::Invalid.ArrayIndex) &&
     (local_res8[0].ElementIndex == FSlateInvalidationWidgetIndex::Invalid.ElementIndex)) {
    this->AttributeIndex = 0;
    this->CurrentWidgetIndex = FSlateInvalidationWidgetIndex::Invalid;
    (this->CurrentWidgetSortOrder).Order = 0xffffffff;
    return;
  }
  Seek(this,local_res8[0]);
  return;
}

// Clear @ 142481ee0

void __thiscall
FSlateInvalidationWidgetList::FWidgetAttributeIterator::Clear(FWidgetAttributeIterator *this)

{
  this->AttributeIndex = 0;
  this->CurrentWidgetIndex = FSlateInvalidationWidgetIndex::Invalid;
  (this->CurrentWidgetSortOrder).Order = 0xffffffff;
  return;
}

// FixCurrentWidgetIndex @ 1424888c0

void __thiscall
FSlateInvalidationWidgetList::FWidgetAttributeIterator::FixCurrentWidgetIndex
          (FWidgetAttributeIterator *this)

{
  ushort uVar1;
  ushort uVar2;
  FSlateInvalidationWidgetList *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FSlateInvalidationWidgetIndex FVar7;
  longlong lVar8;
  undefined1 *puVar9;
  
  uVar1 = (this->MoveToWidgetIndexOnNextAdvance).ArrayIndex;
  if ((uVar1 == FSlateInvalidationWidgetIndex::Invalid.ArrayIndex) &&
     ((this->MoveToWidgetIndexOnNextAdvance).ElementIndex ==
      FSlateInvalidationWidgetIndex::Invalid.ElementIndex)) {
    if (this->bNeedsWidgetFixUp != false) {
      this->AttributeIndex = 0;
      this->CurrentWidgetIndex = FSlateInvalidationWidgetIndex::Invalid;
      (this->CurrentWidgetSortOrder).Order = 0xffffffff;
      this->MoveToWidgetIndexOnNextAdvance = FSlateInvalidationWidgetIndex::Invalid;
      this->bNeedsWidgetFixUp = false;
      return;
    }
    goto LAB_142488a26;
  }
  pFVar3 = this->WidgetList;
  if ((int)(uint)uVar1 < *(int *)&(pFVar3->Data).field_0x28) {
    if ((*(int *)&(pFVar3->Data).field_0x28 <= (int)(uint)uVar1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5c6,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    puVar9 = *(undefined1 **)&(pFVar3->Data).field_0x20;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(pFVar3->Data).field_0x10;
    }
    if ((*(uint *)(puVar9 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) == 0)
    goto LAB_142488987;
  }
  else {
LAB_142488987:
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("WidgetList.Data.IsValidIndex(ArrayIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\FastUpdate\\SlateInvalidationWidgetList.cpp"
                       ,0x80,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar3 = this->WidgetList;
  lVar8 = (ulonglong)uVar1 * 0x40 + *(longlong *)&pFVar3->Data;
  iVar6 = TSlateElementSortedArray<unsigned_short,TLess<void>_>::FindLowerBound
                    ((TSlateElementSortedArray<unsigned_short,TLess<void>_> *)(lVar8 + 0x20),
                     (this->MoveToWidgetIndexOnNextAdvance).ElementIndex);
  this->AttributeIndex = iVar6;
  if (iVar6 == -1) {
    AdvanceArrayIndex(this,*(int *)(lVar8 + 4));
  }
  else {
    uVar2 = *(ushort *)(*(longlong *)(lVar8 + 0x20) + (longlong)iVar6 * 2);
    FVar7.ElementIndex = uVar2;
    FVar7.ArrayIndex = uVar1;
    this->CurrentWidgetIndex = FVar7;
    (this->CurrentWidgetSortOrder).Order =
         *(int *)((ulonglong)uVar1 * 0x40 + 8 + *(longlong *)&pFVar3->Data) * 0x400 + (uint)uVar2;
  }
LAB_142488a26:
  this->MoveToWidgetIndexOnNextAdvance = FSlateInvalidationWidgetIndex::Invalid;
  this->bNeedsWidgetFixUp = false;
  return;
}

// PostResort @ 1424a1010

void __thiscall
FSlateInvalidationWidgetList::FWidgetAttributeIterator::PostResort(FWidgetAttributeIterator *this)

{
  if ((((this->MoveToWidgetIndexOnNextAdvance).ArrayIndex !=
        FSlateInvalidationWidgetIndex::Invalid.ArrayIndex) ||
      ((this->MoveToWidgetIndexOnNextAdvance).ElementIndex !=
       FSlateInvalidationWidgetIndex::Invalid.ElementIndex)) &&
     (((this->CurrentWidgetIndex).ArrayIndex != FSlateInvalidationWidgetIndex::Invalid.ArrayIndex ||
      ((this->CurrentWidgetIndex).ElementIndex !=
       FSlateInvalidationWidgetIndex::Invalid.ElementIndex)))) {
    (this->CurrentWidgetSortOrder).Order =
         *(int *)((ulonglong)((uint)this->CurrentWidgetIndex & 0xffff) * 0x40 + 8 +
                 *(longlong *)&this->WidgetList->Data) * 0x400 +
         ((uint)this->CurrentWidgetIndex >> 0x10);
  }
  return;
}

// PreChildRemove @ 1424a1070

void __thiscall
FSlateInvalidationWidgetList::FWidgetAttributeIterator::PreChildRemove
          (FWidgetAttributeIterator *this,FIndexRange *param_1)

{
  FSlateInvalidationWidgetIndex FVar1;
  undefined4 extraout_var;
  undefined1 local_res8 [32];
  
  if ((this->CurrentWidgetSortOrder).Order <= (param_1->OrderMax).Order) {
    FVar1 = IncrementIndex(this->WidgetList,SUB84(local_res8,0));
    this->MoveToWidgetIndexOnNextAdvance =
         *(FSlateInvalidationWidgetIndex *)CONCAT44(extraout_var,FVar1);
    this->bNeedsWidgetFixUp = true;
  }
  return;
}

// ProxiesBuilt @ 1424a2230

void __thiscall
FSlateInvalidationWidgetList::FWidgetAttributeIterator::ProxiesBuilt
          (FWidgetAttributeIterator *this,FIndexRange *param_1)

{
  FSlateInvalidationWidgetIndex FVar1;
  undefined4 extraout_var;
  undefined1 local_res8 [32];
  
  FVar1 = IncrementIndex(this->WidgetList,SUB84(local_res8,0));
  this->MoveToWidgetIndexOnNextAdvance =
       *(FSlateInvalidationWidgetIndex *)CONCAT44(extraout_var,FVar1);
  this->bNeedsWidgetFixUp = true;
  return;
}

// ReIndexed @ 1424a2410

void __thiscall
FSlateInvalidationWidgetList::FWidgetAttributeIterator::ReIndexed
          (FWidgetAttributeIterator *this,FReIndexOperation *param_1)

{
  ushort uVar1;
  FIndexRange *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FSlateInvalidationWidgetIndex FVar6;
  FSlateInvalidationWidgetIndex FVar7;
  
  if (((this->MoveToWidgetIndexOnNextAdvance).ArrayIndex ==
       FSlateInvalidationWidgetIndex::Invalid.ArrayIndex) &&
     ((this->MoveToWidgetIndexOnNextAdvance).ElementIndex ==
      FSlateInvalidationWidgetIndex::Invalid.ElementIndex)) {
    if (((this->CurrentWidgetIndex).ArrayIndex != FSlateInvalidationWidgetIndex::Invalid.ArrayIndex)
       || ((this->CurrentWidgetIndex).ElementIndex !=
           FSlateInvalidationWidgetIndex::Invalid.ElementIndex)) {
      FVar6 = this->CurrentWidgetIndex;
      uVar1 = (param_1->Range->InclusiveMax).ArrayIndex;
      if (FVar6.ArrayIndex == uVar1) {
        if ((param_1->Range->InclusiveMin).ArrayIndex != uVar1) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Range.GetInclusiveMinWidgetIndex().ArrayIndex == Range.GetInclusiveMaxWidgetIndex().ArrayIndex"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\FastUpdate\\SlateInvalidationWidgetList.cpp"
                             ,0x21,L"");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        FVar6.ElementIndex =
             ((param_1->ReIndexTarget).ElementIndex - (param_1->Range->InclusiveMin).ElementIndex) +
             FVar6.ElementIndex;
        FVar6.ArrayIndex = (param_1->ReIndexTarget).ArrayIndex;
      }
      this->CurrentWidgetIndex = FVar6;
      (this->CurrentWidgetSortOrder).Order =
           *(int *)((ulonglong)((uint)FVar6 & 0xffff) * 0x40 + 8 +
                   *(longlong *)&this->WidgetList->Data) * 0x400 + ((uint)FVar6 >> 0x10);
      return;
    }
  }
  else {
    pFVar2 = param_1->Range;
    FVar7 = this->MoveToWidgetIndexOnNextAdvance;
    uVar5 = *(int *)((ulonglong)((uint)FVar7 & 0xffff) * 0x40 + 8 +
                    *(longlong *)&this->WidgetList->Data) * 0x400 + ((uint)FVar7 >> 0x10);
    if (((pFVar2->OrderMin).Order <= uVar5) && (uVar5 <= (pFVar2->OrderMax).Order)) {
      uVar1 = (pFVar2->InclusiveMax).ArrayIndex;
      if (FVar7.ArrayIndex == uVar1) {
        if ((pFVar2->InclusiveMin).ArrayIndex != uVar1) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Range.GetInclusiveMinWidgetIndex().ArrayIndex == Range.GetInclusiveMaxWidgetIndex().ArrayIndex"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\FastUpdate\\SlateInvalidationWidgetList.cpp"
                             ,0x21,L"");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        FVar7.ElementIndex =
             ((param_1->ReIndexTarget).ElementIndex - (param_1->Range->InclusiveMin).ElementIndex) +
             FVar7.ElementIndex;
        FVar7.ArrayIndex = (param_1->ReIndexTarget).ArrayIndex;
      }
      this->MoveToWidgetIndexOnNextAdvance = FVar7;
    }
  }
  return;
}

// Seek @ 1424a68a0

void __thiscall
FSlateInvalidationWidgetList::FWidgetAttributeIterator::Seek
          (FWidgetAttributeIterator *this,FSlateInvalidationWidgetIndex param_1)

{
  ushort uVar1;
  FSlateInvalidationWidgetList *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FSlateInvalidationWidgetIndex FVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 *puVar9;
  
  if ((param_1.ArrayIndex == FSlateInvalidationWidgetIndex::Invalid.ArrayIndex) &&
     (param_1.ElementIndex == FSlateInvalidationWidgetIndex::Invalid.ElementIndex)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("SeekTo != FSlateInvalidationWidgetIndex::Invalid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\FastUpdate\\SlateInvalidationWidgetList.cpp"
                       ,0x9b,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = this->WidgetList;
  uVar8 = (uint)param_1 & 0xffff;
  if ((int)uVar8 < *(int *)&(pFVar2->Data).field_0x28) {
    if (*(int *)&(pFVar2->Data).field_0x28 <= (int)uVar8) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5c6,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    puVar9 = *(undefined1 **)&(pFVar2->Data).field_0x20;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(pFVar2->Data).field_0x10;
    }
    if ((*(uint *)(puVar9 + (ulonglong)(uVar8 >> 5) * 4) >> ((uint)param_1 & 0x1f) & 1) != 0)
    goto LAB_1424a6978;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("WidgetList.Data.IsValidIndex(SeekTo.ArrayIndex)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\FastUpdate\\SlateInvalidationWidgetList.cpp"
                     ,0x9c,L"");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_1424a6978:
  pFVar2 = this->WidgetList;
  lVar7 = (ulonglong)((uint)param_1 & 0xffff) * 0x40 + *(longlong *)&pFVar2->Data;
  iVar5 = TSlateElementSortedArray<unsigned_short,TLess<void>_>::FindLowerBound
                    ((TSlateElementSortedArray<unsigned_short,TLess<void>_> *)(lVar7 + 0x20),
                     param_1.ElementIndex);
  this->AttributeIndex = iVar5;
  if (iVar5 == -1) {
    AdvanceArrayIndex(this,*(int *)(lVar7 + 4));
  }
  else {
    uVar1 = *(ushort *)(*(longlong *)(lVar7 + 0x20) + (longlong)iVar5 * 2);
    FVar6 = (FSlateInvalidationWidgetIndex)((uint)uVar1 << 0x10 | uVar8);
    this->CurrentWidgetIndex = FVar6;
    (this->CurrentWidgetSortOrder).Order =
         *(int *)((ulonglong)uVar8 * 0x40 + 8 + *(longlong *)&pFVar2->Data) * 0x400 + (uint)uVar1;
    bVar4 = FSlateInvalidationWidgetList::IsValidIndex(pFVar2,FVar6);
    if (!bVar4) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("WidgetList.IsValidIndex(CurrentWidgetIndex)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\FastUpdate\\SlateInvalidationWidgetList.cpp"
                         ,0xa9,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
  }
  return;
}

