// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 3

// TVariablePagedArrayIterator<double> @ 14d420860

TVariablePagedArrayIterator<double> * __thiscall
TraceServices::TVariablePagedArrayIterator<double>::TVariablePagedArrayIterator<double>
          (TVariablePagedArrayIterator<double> *this,TVariablePagedArray<double> *param_1,
          ulong64 param_2)

{
  TVariablePagedArrayPage<double> *pTVar1;
  TVariablePagedArray<double> *pTVar2;
  FScriptContainerElement *pFVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulong64 uVar6;
  double *pdVar7;
  ulong64 uVar8;
  code *pcVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  TVariablePagedArrayIterator<double> *pTVar13;
  ulonglong uVar14;
  FScriptContainerElement *pFVar15;
  int iVar16;
  int iVar17;
  ulonglong uVar18;
  
  iVar16 = 0;
  this->Outer = param_1;
  this->CurrentPage = (TVariablePagedArrayPage<double> *)0x0;
  this->CurrentItemIndex = 0;
  this->CurrentItem = (double *)0x0;
  this->CurrentPageFirstItem = (double *)0x0;
  this->CurrentPageLastItem = (double *)0x0;
  if (param_1->TotalItemCount <= param_2) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("ItemIndex < Outer->TotalItemCount",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Common\\VariablePagedArray.h"
                        ,0x8e,L"");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      pTVar13 = (TVariablePagedArrayIterator<double> *)(*pcVar9)();
      return pTVar13;
    }
  }
  pTVar2 = this->Outer;
  uVar11 = (pTVar2->PageGroups).ArrayNum;
  pFVar15 = (pTVar2->PageGroups).AllocatorInstance.Data;
  iVar17 = 0;
  if (0 < (int)uVar11) {
    do {
      uVar12 = uVar11 >> 1;
      iVar16 = iVar17;
      if (*(ulonglong *)(pFVar15 + (longlong)(int)(uVar12 + iVar17) * 0x20) <= param_2) {
        iVar16 = uVar12 + iVar17 + (uVar11 & 1);
      }
      uVar11 = uVar12;
      iVar17 = iVar16;
    } while (uVar12 != 0);
  }
  uVar18 = param_2 - *(longlong *)(pFVar15 + (longlong)iVar16 * 0x20 + -0x20);
  pFVar3 = (pTVar2->Pages).AllocatorInstance.Data;
  uVar4 = *(ulonglong *)
           (pFVar3 + *(longlong *)(pFVar15 + (longlong)iVar16 * 0x20 + -0x10) * 0x18 + 0x10);
  pFVar3 = pFVar3 + *(longlong *)(pFVar15 + (longlong)iVar16 * 0x20 + -0x10) * 0x18;
  uVar14 = uVar18 - uVar4;
  if (uVar18 < uVar4) {
    uVar14 = uVar18;
  }
  uVar5 = pTVar2->PageSize;
  pFVar15 = pFVar3 + 0x18;
  if (uVar18 < uVar4) {
    pFVar15 = pFVar3;
  }
  pTVar1 = (TVariablePagedArrayPage<double> *)(pFVar15 + (uVar14 / uVar5) * 0x18);
  this->CurrentPage = pTVar1;
  uVar6 = pTVar1->ItemOffset;
  pdVar7 = pTVar1->Items;
  this->CurrentPageFirstItem = pdVar7 + uVar6;
  uVar8 = pTVar1->ItemCount;
  this->CurrentItemIndex = param_2;
  this->CurrentPageLastItem = pdVar7 + uVar6 + (uVar8 - 1);
  this->CurrentItem = pTVar1->Items + pTVar1->ItemOffset + uVar14 % uVar5;
  return this;
}

// operator++ @ 14d42d390

TVariablePagedArrayIterator<double> * __thiscall
TraceServices::TVariablePagedArrayIterator<double>::operator++
          (TVariablePagedArrayIterator<double> *this)

{
  double *pdVar1;
  TVariablePagedArrayPage<double> *pTVar2;
  
  pdVar1 = this->CurrentItem;
  if (pdVar1 != this->CurrentPageLastItem) {
    this->CurrentItemIndex = this->CurrentItemIndex + 1;
    this->CurrentItem = pdVar1 + 1;
    return this;
  }
  pTVar2 = this->CurrentPage;
  this->CurrentItemIndex =
       ((longlong)this->CurrentPageLastItem - (longlong)pdVar1 >> 3) + this->CurrentItemIndex + 1;
  if (pTVar2 != this->Outer->LastPage) {
    this->CurrentPage = pTVar2 + 1;
    pdVar1 = pTVar2[1].Items + pTVar2[1].ItemOffset;
    this->CurrentPageFirstItem = pdVar1;
    this->CurrentPageLastItem = pdVar1 + (pTVar2[1].ItemCount - 1);
    this->CurrentItem = pdVar1;
    return this;
  }
  this->CurrentPage = (TVariablePagedArrayPage<double> *)0x0;
  this->CurrentPageLastItem = (double *)0x0;
  this->CurrentItemIndex = 0;
  this->CurrentPageFirstItem = (double *)0x0;
  this->CurrentItem = (double *)0x0;
  return this;
}

// operator++ @ 14d42d430

TVariablePagedArrayIterator<TraceServices::ECounterOpType> * __thiscall
TraceServices::TVariablePagedArrayIterator<enum_TraceServices::ECounterOpType>::operator++
          (void *this)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)((longlong)this + 0x18);
  if (lVar2 != *(longlong *)((longlong)this + 0x28)) {
    *(longlong *)((longlong)this + 0x10) = *(longlong *)((longlong)this + 0x10) + 1;
    *(longlong *)((longlong)this + 0x18) = lVar2 + 1;
    return this;
  }
  lVar1 = *(longlong *)((longlong)this + 8);
  *(longlong *)((longlong)this + 0x10) =
       (*(longlong *)((longlong)this + 0x10) - lVar2) + *(longlong *)((longlong)this + 0x28) + 1;
  if (lVar1 != *(longlong *)(*(longlong *)this + 0x20)) {
    *(longlong **)((longlong)this + 8) = (longlong *)(lVar1 + 0x18);
    lVar2 = *(longlong *)(lVar1 + 0x20) + *(longlong *)(lVar1 + 0x18);
    *(longlong *)((longlong)this + 0x20) = lVar2;
    *(longlong *)((longlong)this + 0x28) = *(longlong *)(lVar1 + 0x28) + -1 + lVar2;
    *(longlong *)((longlong)this + 0x18) = lVar2;
    return this;
  }
  *(undefined8 *)((longlong)this + 8) = 0;
  *(undefined8 *)((longlong)this + 0x28) = 0;
  *(undefined8 *)((longlong)this + 0x10) = 0;
  *(undefined8 *)((longlong)this + 0x20) = 0;
  *(undefined8 *)((longlong)this + 0x18) = 0;
  return this;
}

