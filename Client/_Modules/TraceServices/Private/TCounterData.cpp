// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 3

// GetIterator @ 14d4684f0

TCounterDataIterator<__int64> * __thiscall
TraceServices::TCounterData<__int64>::GetIterator
          (TCounterData<__int64> *this,TCounterDataIterator<__int64> *__return_storage_ptr__,
          TArray<double,TSizedDefaultAllocator<64>_> *param_1)

{
  TVariablePagedArrayPage<__int64> *pTVar1;
  TVariablePagedArray<__int64> *pTVar2;
  FScriptContainerElement *pFVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulong64 uVar6;
  long64 *plVar7;
  ulong64 uVar8;
  code *pcVar9;
  bool bVar10;
  TCounterDataIterator<__int64> *pTVar11;
  ulonglong uVar12;
  FScriptContainerElement *pFVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  ulonglong uVar18;
  
  (__return_storage_ptr__->FrameStartTimesIterator).Container = param_1;
  iVar17 = 0;
  (__return_storage_ptr__->FrameStartTimesIterator).Index = 0;
  TVariablePagedArrayIterator<double>::TVariablePagedArrayIterator<double>
            (&__return_storage_ptr__->TimestampsIterator,&this->Timestamps,0);
  TVariablePagedArray<enum_TraceServices::ECounterOpType>::GetIterator
            (&this->OpTypes,&__return_storage_ptr__->OpTypesIterator);
  (__return_storage_ptr__->OpArgumentsIterator).CurrentPage =
       (TVariablePagedArrayPage<__int64> *)0x0;
  (__return_storage_ptr__->OpArgumentsIterator).Outer = &this->OpArguments;
  (__return_storage_ptr__->OpArgumentsIterator).CurrentItemIndex = 0;
  (__return_storage_ptr__->OpArgumentsIterator).CurrentItem = (long64 *)0x0;
  (__return_storage_ptr__->OpArgumentsIterator).CurrentPageFirstItem = (long64 *)0x0;
  (__return_storage_ptr__->OpArgumentsIterator).CurrentPageLastItem = (long64 *)0x0;
  if (((this->OpArguments).TotalItemCount == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("ItemIndex < Outer->TotalItemCount",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Common\\VariablePagedArray.h"
                          ,0x8e,L""), bVar10)) {
    pcVar9 = (code *)swi(3);
    pTVar11 = (TCounterDataIterator<__int64> *)(*pcVar9)();
    return pTVar11;
  }
  pTVar2 = (__return_storage_ptr__->OpArgumentsIterator).Outer;
  iVar16 = 0;
  uVar14 = (pTVar2->PageGroups).ArrayNum;
  pFVar13 = (pTVar2->PageGroups).AllocatorInstance.Data;
  if (0 < (int)uVar14) {
    do {
      uVar15 = uVar14 >> 1;
      iVar16 = iVar17;
      if (*(longlong *)(pFVar13 + (longlong)(int)(uVar15 + iVar17) * 0x20) == 0) {
        iVar16 = uVar15 + iVar17 + (uVar14 & 1);
      }
      uVar14 = uVar15;
      iVar17 = iVar16;
    } while (uVar15 != 0);
  }
  uVar18 = -*(longlong *)(pFVar13 + (longlong)iVar16 * 0x20 + -0x20);
  pFVar3 = (pTVar2->Pages).AllocatorInstance.Data;
  uVar4 = *(ulonglong *)
           (pFVar3 + *(longlong *)(pFVar13 + (longlong)iVar16 * 0x20 + -0x10) * 0x18 + 0x10);
  pFVar3 = pFVar3 + *(longlong *)(pFVar13 + (longlong)iVar16 * 0x20 + -0x10) * 0x18;
  uVar12 = uVar18 - uVar4;
  if (uVar18 < uVar4) {
    uVar12 = uVar18;
  }
  uVar5 = pTVar2->PageSize;
  pFVar13 = pFVar3 + 0x18;
  if (uVar18 < uVar4) {
    pFVar13 = pFVar3;
  }
  pTVar1 = (TVariablePagedArrayPage<__int64> *)(pFVar13 + (uVar12 / uVar5) * 0x18);
  (__return_storage_ptr__->OpArgumentsIterator).CurrentPage = pTVar1;
  uVar6 = pTVar1->ItemOffset;
  plVar7 = pTVar1->Items;
  (__return_storage_ptr__->OpArgumentsIterator).CurrentPageFirstItem = plVar7 + uVar6;
  uVar8 = pTVar1->ItemCount;
  (__return_storage_ptr__->OpArgumentsIterator).CurrentItemIndex = 0;
  (__return_storage_ptr__->OpArgumentsIterator).CurrentPageLastItem = plVar7 + uVar6 + (uVar8 - 1);
  (__return_storage_ptr__->OpArgumentsIterator).CurrentItem =
       pTVar1->Items + pTVar1->ItemOffset + uVar12 % uVar5;
  __return_storage_ptr__->CurrentTime = 0.0;
  __return_storage_ptr__->CurrentOp = Set;
  __return_storage_ptr__->CurrentOpArgument = 0;
  __return_storage_ptr__->CurrentValue = 0;
  TCounterDataIterator<__int64>::UpdateValue(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// InsertOp @ 14d4738b0

void __thiscall
TraceServices::TCounterData<double>::InsertOp
          (TCounterData<double> *this,double param_1,ECounterOpType param_2,double param_3)

{
  TVariablePagedArrayPage<double> *pTVar1;
  code *pcVar2;
  ulonglong uVar3;
  longlong lVar4;
  bool bVar5;
  double *pdVar6;
  ECounterOpType *pEVar7;
  uint uVar8;
  ulonglong uVar9;
  ulong64 uVar10;
  TVariablePagedArrayIterator<double> local_58;
  
  uVar10 = (this->Timestamps).TotalItemCount;
  if ((uVar10 != 0) &&
     (pTVar1 = (this->Timestamps).LastPage,
     param_1 < pTVar1->Items[pTVar1->ItemCount + pTVar1->ItemOffset + -1])) {
    pTVar1 = (this->Timestamps).FirstPage;
    pdVar6 = pTVar1->Items + pTVar1->ItemOffset;
    if (*pdVar6 <= param_1 && param_1 != *pdVar6) {
      TVariablePagedArrayIterator<double>::TVariablePagedArrayIterator<double>
                (&local_58,&this->Timestamps,uVar10 - 1);
      if (param_1 < (local_58.CurrentPage)->Items[(local_58.CurrentPage)->ItemOffset]) {
        do {
          local_58.CurrentItemIndex =
               local_58.CurrentItemIndex +
               (-1 - ((longlong)local_58.CurrentItem - (longlong)local_58.CurrentPageFirstItem >> 3)
               );
          if (local_58.CurrentPage == (local_58.Outer)->FirstPage) {
            local_58.CurrentPage = (TVariablePagedArrayPage<double> *)0x0;
            local_58.CurrentItemIndex = 0;
            local_58.CurrentPageLastItem = (double *)0x0;
            local_58.CurrentPageFirstItem = (double *)0x0;
          }
          else {
            local_58.CurrentPageFirstItem =
                 local_58.CurrentPage[-1].Items + local_58.CurrentPage[-1].ItemOffset;
            local_58.CurrentPageLastItem =
                 local_58.CurrentPageFirstItem + (local_58.CurrentPage[-1].ItemCount - 1);
            local_58.CurrentPage = local_58.CurrentPage + -1;
          }
          local_58.CurrentItem = local_58.CurrentPageLastItem;
        } while (param_1 < (local_58.CurrentPage)->Items[(local_58.CurrentPage)->ItemOffset]);
      }
      uVar3 = (local_58.CurrentPage)->ItemCount;
      lVar4 = 0;
      while (uVar3 != 0) {
        uVar9 = uVar3 >> 1;
        uVar8 = (uint)uVar3;
        uVar3 = uVar9;
        if ((local_58.CurrentPage)->Items[(local_58.CurrentPage)->ItemOffset + uVar9 + lVar4] <=
            param_1 &&
            param_1 !=
            (local_58.CurrentPage)->Items[(local_58.CurrentPage)->ItemOffset + uVar9 + lVar4]) {
          lVar4 = (ulonglong)(uVar8 & 1) + uVar9 + lVar4;
        }
      }
      uVar10 = (lVar4 - (local_58.CurrentPage)->ItemCount) + 1 + local_58.CurrentItemIndex;
      if (((this->Timestamps).TotalItemCount < uVar10) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("InsertionIndex <= Timestamps.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\CountersPrivate.h"
                             ,0xac,L""), bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else {
      uVar10 = 0;
    }
  }
  pdVar6 = TVariablePagedArray<double>::Insert(&this->Timestamps,uVar10);
  *pdVar6 = param_1;
  pEVar7 = TVariablePagedArray<enum_TraceServices::ECounterOpType>::Insert(&this->OpTypes,uVar10);
  *pEVar7 = param_2;
  pdVar6 = TVariablePagedArray<double>::Insert(&this->OpArguments,uVar10);
  *pdVar6 = param_3;
  return;
}

// InsertOp @ 14d473ac0

void __thiscall
TraceServices::TCounterData<__int64>::InsertOp
          (TCounterData<__int64> *this,double param_1,ECounterOpType param_2,long64 param_3)

{
  TVariablePagedArrayPage<double> *pTVar1;
  code *pcVar2;
  ulonglong uVar3;
  longlong lVar4;
  bool bVar5;
  double *pdVar6;
  ECounterOpType *pEVar7;
  long64 *plVar8;
  uint uVar9;
  ulonglong uVar10;
  ulong64 uVar11;
  TVariablePagedArrayIterator<double> local_48;
  
  uVar11 = (this->Timestamps).TotalItemCount;
  if ((uVar11 != 0) &&
     (pTVar1 = (this->Timestamps).LastPage,
     param_1 < pTVar1->Items[pTVar1->ItemCount + pTVar1->ItemOffset + -1])) {
    pTVar1 = (this->Timestamps).FirstPage;
    pdVar6 = pTVar1->Items + pTVar1->ItemOffset;
    if (*pdVar6 <= param_1 && param_1 != *pdVar6) {
      TVariablePagedArrayIterator<double>::TVariablePagedArrayIterator<double>
                (&local_48,&this->Timestamps,uVar11 - 1);
      if (param_1 < (local_48.CurrentPage)->Items[(local_48.CurrentPage)->ItemOffset]) {
        do {
          local_48.CurrentItemIndex =
               local_48.CurrentItemIndex +
               (-1 - ((longlong)local_48.CurrentItem - (longlong)local_48.CurrentPageFirstItem >> 3)
               );
          if (local_48.CurrentPage == (local_48.Outer)->FirstPage) {
            local_48.CurrentPage = (TVariablePagedArrayPage<double> *)0x0;
            local_48.CurrentItemIndex = 0;
            local_48.CurrentPageLastItem = (double *)0x0;
            local_48.CurrentPageFirstItem = (double *)0x0;
          }
          else {
            local_48.CurrentPageFirstItem =
                 local_48.CurrentPage[-1].Items + local_48.CurrentPage[-1].ItemOffset;
            local_48.CurrentPageLastItem =
                 local_48.CurrentPageFirstItem + (local_48.CurrentPage[-1].ItemCount - 1);
            local_48.CurrentPage = local_48.CurrentPage + -1;
          }
          local_48.CurrentItem = local_48.CurrentPageLastItem;
        } while (param_1 < (local_48.CurrentPage)->Items[(local_48.CurrentPage)->ItemOffset]);
      }
      uVar3 = (local_48.CurrentPage)->ItemCount;
      lVar4 = 0;
      while (uVar3 != 0) {
        uVar10 = uVar3 >> 1;
        uVar9 = (uint)uVar3;
        uVar3 = uVar10;
        if ((local_48.CurrentPage)->Items[(local_48.CurrentPage)->ItemOffset + uVar10 + lVar4] <=
            param_1 &&
            param_1 !=
            (local_48.CurrentPage)->Items[(local_48.CurrentPage)->ItemOffset + uVar10 + lVar4]) {
          lVar4 = (ulonglong)(uVar9 & 1) + uVar10 + lVar4;
        }
      }
      uVar11 = (lVar4 - (local_48.CurrentPage)->ItemCount) + 1 + local_48.CurrentItemIndex;
      if (((this->Timestamps).TotalItemCount < uVar11) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("InsertionIndex <= Timestamps.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\CountersPrivate.h"
                             ,0xac,L""), bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else {
      uVar11 = 0;
    }
  }
  pdVar6 = TVariablePagedArray<double>::Insert(&this->Timestamps,uVar11);
  *pdVar6 = param_1;
  pEVar7 = TVariablePagedArray<enum_TraceServices::ECounterOpType>::Insert(&this->OpTypes,uVar11);
  *pEVar7 = param_2;
  plVar8 = TVariablePagedArray<__int64>::Insert(&this->OpArguments,uVar11);
  *plVar8 = param_3;
  return;
}

