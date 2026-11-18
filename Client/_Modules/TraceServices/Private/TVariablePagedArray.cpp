// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 13

// ~TVariablePagedArray<double> @ 14d42acd0

void __thiscall
TraceServices::TVariablePagedArray<double>::~TVariablePagedArray<double>
          (TVariablePagedArray<double> *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar2 = (this->Pages).ArrayNum;
  pFVar3 = (this->Pages).AllocatorInstance.Data;
  pFVar1 = pFVar3 + (longlong)iVar2 * 0x18;
  while( true ) {
    if ((this->Pages).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TraceServices::TVariablePagedArrayPage<double>,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    pFVar3 = pFVar3 + 0x18;
  }
  pFVar1 = (this->PageGroups).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Pages).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// ~TVariablePagedArray<enum_TraceServices::ECounterOpType> @ 14d42ad50

void __thiscall
TraceServices::TVariablePagedArray<enum_TraceServices::ECounterOpType>::
~TVariablePagedArray<enum_TraceServices::ECounterOpType>(void *this)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined1 local_res8 [8];
  
  iVar2 = *(int *)((longlong)this + 0x10);
  lVar3 = *(longlong *)((longlong)this + 8);
  lVar1 = lVar3 + (longlong)iVar2 * 0x18;
  while( true ) {
    if (*(int *)((longlong)this + 0x10) != iVar2) {
      `TCheckedPointerIterator<TraceServices::TVariablePagedArrayPage<enum_TraceServices::ECounterOpType>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (lVar3 == lVar1) break;
    lVar3 = lVar3 + 0x18;
  }
  if (*(void **)((longlong)this + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x28));
  }
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
  }
  return;
}

// ~TVariablePagedArray<__int64> @ 14d42add0

void __thiscall
TraceServices::TVariablePagedArray<__int64>::~TVariablePagedArray<__int64>
          (TVariablePagedArray<__int64> *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar2 = (this->Pages).ArrayNum;
  pFVar3 = (this->Pages).AllocatorInstance.Data;
  pFVar1 = pFVar3 + (longlong)iVar2 * 0x18;
  while( true ) {
    if ((this->Pages).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TraceServices::TVariablePagedArrayPage<__int64>,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    pFVar3 = pFVar3 + 0x18;
  }
  pFVar1 = (this->PageGroups).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Pages).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// GetIterator @ 14d468780

TVariablePagedArrayIterator<TraceServices::ECounterOpType> * __thiscall
TraceServices::TVariablePagedArray<enum_TraceServices::ECounterOpType>::GetIterator
          (void *this,
          TVariablePagedArrayIterator<TraceServices::ECounterOpType> *__return_storage_ptr__)

{
  TVariablePagedArray<TraceServices::ECounterOpType> *pTVar1;
  FScriptContainerElement *pFVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  TVariablePagedArrayIterator<TraceServices::ECounterOpType> *pTVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  FScriptContainerElement *pFVar14;
  int iVar15;
  int iVar16;
  ulonglong uVar17;
  
  iVar16 = 0;
  __return_storage_ptr__->Outer = this;
  __return_storage_ptr__->CurrentPage =
       (TVariablePagedArrayPage<TraceServices::ECounterOpType> *)0x0;
  __return_storage_ptr__->CurrentItemIndex = 0;
  __return_storage_ptr__->CurrentItem = (ECounterOpType *)0x0;
  __return_storage_ptr__->CurrentPageFirstItem = (ECounterOpType *)0x0;
  __return_storage_ptr__->CurrentPageLastItem = (ECounterOpType *)0x0;
  if ((*(longlong *)((longlong)this + 0x50) == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("ItemIndex < Outer->TotalItemCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Common\\VariablePagedArray.h"
                         ,0x8e,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    pTVar11 = (TVariablePagedArrayIterator<TraceServices::ECounterOpType> *)(*pcVar7)();
    return pTVar11;
  }
  pTVar1 = __return_storage_ptr__->Outer;
  iVar15 = 0;
  uVar9 = (pTVar1->PageGroups).ArrayNum;
  pFVar14 = (pTVar1->PageGroups).AllocatorInstance.Data;
  if (0 < (int)uVar9) {
    do {
      uVar10 = uVar9 >> 1;
      iVar15 = iVar16;
      if (*(longlong *)(pFVar14 + (longlong)(int)(uVar10 + iVar16) * 0x20) == 0) {
        iVar15 = uVar10 + iVar16 + (uVar9 & 1);
      }
      uVar9 = uVar10;
      iVar16 = iVar15;
    } while (uVar10 != 0);
  }
  __return_storage_ptr__->CurrentItemIndex = 0;
  uVar17 = -*(longlong *)(pFVar14 + (longlong)iVar15 * 0x20 + -0x20);
  pFVar2 = (pTVar1->Pages).AllocatorInstance.Data;
  uVar3 = *(ulonglong *)
           (pFVar2 + *(longlong *)(pFVar14 + (longlong)iVar15 * 0x20 + -0x10) * 0x18 + 0x10);
  pFVar2 = pFVar2 + *(longlong *)(pFVar14 + (longlong)iVar15 * 0x20 + -0x10) * 0x18;
  uVar12 = uVar17 - uVar3;
  if (uVar17 < uVar3) {
    uVar12 = uVar17;
  }
  uVar4 = pTVar1->PageSize;
  uVar13 = uVar12 / uVar4;
  pFVar14 = pFVar2 + 0x18;
  if (uVar17 < uVar3) {
    pFVar14 = pFVar2;
  }
  lVar5 = *(longlong *)(pFVar14 + uVar13 * 0x18);
  lVar6 = *(longlong *)(pFVar14 + uVar13 * 0x18 + 8);
  __return_storage_ptr__->CurrentPage =
       (TVariablePagedArrayPage<TraceServices::ECounterOpType> *)(pFVar14 + uVar13 * 0x18);
  __return_storage_ptr__->CurrentPageFirstItem = (ECounterOpType *)(lVar6 + lVar5);
  __return_storage_ptr__->CurrentPageLastItem =
       (ECounterOpType *)
       ((((TVariablePagedArrayPage<TraceServices::ECounterOpType> *)(pFVar14 + uVar13 * 0x18))->
         ItemCount - 1) + lVar6 + lVar5);
  __return_storage_ptr__->CurrentItem = (ECounterOpType *)(lVar6 + lVar5 + uVar12 % uVar4);
  return __return_storage_ptr__;
}

// Insert @ 14d472750

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * __thiscall
TraceServices::TVariablePagedArray<double>::Insert
          (TVariablePagedArray<double> *this,ulong64 param_1)

{
  void *_Src;
  ulonglong uVar1;
  ulonglong uVar2;
  TVariablePagedArrayPageGroup<double> *pTVar3;
  uint uVar4;
  int iVar5;
  double *pdVar6;
  ulonglong uVar7;
  TVariablePagedArrayPage<double> *pTVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  ulong64 uVar11;
  ulonglong uVar12;
  FScriptContainerElement *pFVar13;
  longlong lVar14;
  int iVar15;
  uint uVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  double *local_res8;
  
  if (param_1 < this->TotalItemCount) {
    uVar16 = (this->PageGroups).ArrayNum;
    iVar5 = 0;
    pFVar13 = (this->PageGroups).AllocatorInstance.Data;
    if (0 < (int)uVar16) {
      do {
        iVar15 = (uVar16 >> 1) + iVar5;
        if (*(ulonglong *)(pFVar13 + (longlong)iVar15 * 0x20) <= param_1) {
          iVar5 = iVar15 + (uVar16 & 1);
        }
        uVar4 = uVar16 >> 1;
        uVar16 = uVar16 >> 1;
      } while (uVar4 != 0);
    }
    lVar18 = (longlong)iVar5 + -1;
    lVar19 = lVar18 * 0x20;
    if ((param_1 == *(ulong64 *)(pFVar13 + lVar19)) && (lVar18 != 0)) {
      local_res8 = PushBackItemInPageGroup(this,(longlong)iVar5 - 2);
    }
    else {
      pFVar9 = (this->Pages).AllocatorInstance.Data;
      uVar17 = param_1 - *(ulong64 *)(pFVar13 + lVar19);
      uVar1 = *(ulonglong *)(pFVar9 + *(longlong *)(pFVar13 + lVar19 + 0x10) * 0x18 + 0x10);
      pFVar9 = pFVar9 + *(longlong *)(pFVar13 + lVar19 + 0x10) * 0x18;
      uVar2 = this->PageSize;
      uVar7 = uVar17 - uVar1;
      if (uVar17 < uVar1) {
        uVar7 = uVar17;
      }
      uVar12 = uVar7 % uVar2;
      pFVar13 = pFVar9 + 0x18;
      if (uVar17 < uVar1) {
        pFVar13 = pFVar9;
      }
      uVar1 = *(ulonglong *)(pFVar13 + (uVar7 / uVar2) * 0x18 + 0x10);
      pFVar13 = pFVar13 + (uVar7 / uVar2) * 0x18;
      if (uVar1 < uVar2) {
        lVar18 = *(longlong *)(pFVar13 + 8);
        if (lVar18 + uVar1 < uVar2) {
          local_res8 = (double *)(*(longlong *)pFVar13 + (lVar18 + uVar12) * 8);
          memmove(local_res8 + 1,local_res8,(uVar1 - uVar12) * 8);
          *(longlong *)(pFVar13 + 0x10) = *(longlong *)(pFVar13 + 0x10) + 1;
          pFVar9 = (this->PageGroups).AllocatorInstance.Data;
          pFVar13 = pFVar9 + lVar19 + 8;
          *(longlong *)pFVar13 = *(longlong *)pFVar13 + 1;
          iVar5 = (this->PageGroups).ArrayNum;
          this->TotalItemCount = this->TotalItemCount + 1;
          pFVar13 = (this->PageGroups).AllocatorInstance.Data;
          for (pFVar9 = pFVar9 + lVar19 + 0x20; pFVar9 != pFVar13 + (longlong)iVar5 * 0x20;
              pFVar9 = pFVar9 + 0x20) {
            *(longlong *)pFVar9 = *(longlong *)pFVar9 + 1;
          }
        }
        else {
          if (uVar12 != 0) {
            _Src = (void *)(*(longlong *)pFVar13 + lVar18 * 8);
            memmove((void *)((longlong)_Src + -8),_Src,uVar12 * 8);
          }
          lVar18 = _UNK_152b1eaa8 + *(longlong *)(pFVar13 + 0x10);
          *(longlong *)(pFVar13 + 8) =
               ___xmm_0000000000000001ffffffffffffffff + *(longlong *)(pFVar13 + 8);
          *(longlong *)(pFVar13 + 0x10) = lVar18;
          pFVar10 = (this->PageGroups).AllocatorInstance.Data;
          pFVar9 = pFVar10 + lVar19 + 8;
          *(longlong *)pFVar9 = *(longlong *)pFVar9 + 1;
          iVar5 = (this->PageGroups).ArrayNum;
          this->TotalItemCount = this->TotalItemCount + 1;
          pFVar9 = (this->PageGroups).AllocatorInstance.Data;
          for (pFVar10 = pFVar10 + lVar19 + 0x20; pFVar10 != pFVar9 + (longlong)iVar5 * 0x20;
              pFVar10 = pFVar10 + 0x20) {
            *(longlong *)pFVar10 = *(longlong *)pFVar10 + 1;
          }
          local_res8 = (double *)(*(longlong *)pFVar13 + (*(longlong *)(pFVar13 + 8) + uVar12) * 8);
        }
      }
      else {
        lVar14 = (longlong)pFVar13 - (longlong)(this->Pages).AllocatorInstance.Data;
        lVar14 = lVar14 / 6 + (lVar14 >> 0x3f);
        lVar14 = (lVar14 >> 2) - (lVar14 >> 0x3f);
        if (uVar12 == 0) {
          pTVar8 = TArray<TraceServices::TVariablePagedArrayPage<double>,TSizedDefaultAllocator<32>_>
                   ::InsertDefaulted_GetRef(&this->Pages,(int)lVar14);
          local_res8 = (double *)
                       (**(code **)((longlong)*this->Allocator + 8))
                                 (this->Allocator,this->PageSize << 3);
          pTVar8->Items = local_res8;
          pTVar8->ItemCount = 1;
        }
        else {
          pTVar8 = TArray<TraceServices::TVariablePagedArrayPage<double>,TSizedDefaultAllocator<32>_>
                   ::InsertDefaulted_GetRef(&this->Pages,(int)lVar14 + 1);
          pdVar6 = (double *)
                   (**(code **)((longlong)*this->Allocator + 8))
                             (this->Allocator,this->PageSize << 3);
          pTVar8->Items = pdVar6;
          uVar11 = pTVar8[-1].ItemCount - uVar12;
          pTVar8->ItemCount = uVar11;
          pTVar8->ItemOffset = this->PageSize - uVar11;
          pTVar8[-1].ItemCount = uVar12 + 1;
          local_res8 = pTVar8[-1].Items + pTVar8[-1].ItemOffset + uVar12;
          memcpy(pTVar8->Items + pTVar8->ItemOffset,local_res8,pTVar8->ItemCount << 3);
        }
        pTVar8 = (TVariablePagedArrayPage<double> *)(this->Pages).AllocatorInstance.Data;
        iVar5 = (this->Pages).ArrayNum;
        this->FirstPage = pTVar8;
        this->LastPage = pTVar8 + (longlong)iVar5 + -1;
        pFVar9 = (this->PageGroups).AllocatorInstance.Data;
        pFVar13 = pFVar9 + lVar19 + 0x18;
        *(longlong *)pFVar13 = *(longlong *)pFVar13 + 1;
        iVar5 = (this->PageGroups).ArrayNum;
        pFVar13 = (this->PageGroups).AllocatorInstance.Data;
        for (pFVar9 = pFVar9 + lVar19 + 0x20; pFVar9 != pFVar13 + (longlong)iVar5 * 0x20;
            pFVar9 = pFVar9 + 0x20) {
          *(longlong *)(pFVar9 + 0x10) = *(longlong *)(pFVar9 + 0x10) + 1;
        }
        pFVar9 = (this->PageGroups).AllocatorInstance.Data;
        pFVar13 = pFVar9 + lVar19 + 8;
        *(longlong *)pFVar13 = *(longlong *)pFVar13 + 1;
        iVar5 = (this->PageGroups).ArrayNum;
        this->TotalItemCount = this->TotalItemCount + 1;
        pFVar13 = (this->PageGroups).AllocatorInstance.Data;
        for (pFVar9 = pFVar9 + lVar19 + 0x20; pFVar9 != pFVar13 + (longlong)iVar5 * 0x20;
            pFVar9 = pFVar9 + 0x20) {
          *(longlong *)pFVar9 = *(longlong *)pFVar9 + 1;
        }
        iVar15 = (int)lVar18 + 1;
        iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x20,8,1,&(this->PageGroups).AllocatorInstance,
                           &(this->PageGroups).ArrayNum,&(this->PageGroups).ArrayMax);
        lVar18 = (longlong)iVar15 * 0x20;
        pFVar13 = (this->PageGroups).AllocatorInstance.Data + lVar18;
        memmove(pFVar13 + 0x20,pFVar13,(longlong)(iVar5 - iVar15) << 5);
        pFVar13 = (this->PageGroups).AllocatorInstance.Data + lVar18;
        DefaultConstructItems<TraceServices::TVariablePagedArrayPageGroup<double>,int>(pFVar13,1);
        pTVar3 = (TVariablePagedArrayPageGroup<double> *)(this->PageGroups).AllocatorInstance.Data;
        iVar5 = (this->PageGroups).ArrayNum;
        this->FirstPageGroup = pTVar3;
        this->LastPageGroup = pTVar3 + (longlong)iVar5 + -1;
        lVar18 = *(longlong *)(pFVar13 + -8);
        lVar19 = *(longlong *)(pFVar13 + -0x18);
        *(longlong *)(pFVar13 + -8) = (lVar14 - *(longlong *)(pFVar13 + -0x10)) + 1;
        *(ulong64 *)(pFVar13 + -0x18) = (param_1 - *(longlong *)(pFVar13 + -0x20)) + 1;
        *(ulong64 *)pFVar13 = param_1 + 1;
        *(ulong64 *)(pFVar13 + 8) = (*(longlong *)(pFVar13 + -0x20) - param_1) + -1 + lVar19;
        *(longlong *)(pFVar13 + 0x10) = lVar14 + 1;
        *(longlong *)(pFVar13 + 0x18) = (*(longlong *)(pFVar13 + -0x10) - lVar14) + -1 + lVar18;
      }
    }
    return local_res8;
  }
  pdVar6 = PushBack(this);
  return pdVar6;
}

// Insert @ 14d472b70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ECounterOpType * __thiscall
TraceServices::TVariablePagedArray<enum_TraceServices::ECounterOpType>::Insert
          (void *this,ulong64 param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  ECounterOpType *pEVar6;
  ulonglong uVar7;
  TVariablePagedArrayPage<TraceServices::ECounterOpType> *pTVar8;
  longlong *plVar9;
  longlong *plVar10;
  ulong64 uVar11;
  longlong lVar12;
  ulonglong _Size;
  void *_Src;
  int iVar13;
  uint uVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  ECounterOpType *local_res8;
  
  if (param_1 < *(ulonglong *)((longlong)this + 0x50)) {
    iVar5 = 0;
    lVar18 = *(longlong *)((longlong)this + 0x28);
    uVar14 = *(uint *)((longlong)this + 0x30);
    if (0 < (int)*(uint *)((longlong)this + 0x30)) {
      do {
        iVar13 = (uVar14 >> 1) + iVar5;
        if (*(ulonglong *)((longlong)iVar13 * 0x20 + lVar18) <= param_1) {
          iVar5 = iVar13 + (uVar14 & 1);
        }
        uVar4 = uVar14 >> 1;
        uVar14 = uVar14 >> 1;
      } while (uVar4 != 0);
    }
    lVar16 = (longlong)iVar5 + -1;
    lVar17 = lVar16 * 0x20;
    if ((param_1 == *(ulong64 *)(lVar17 + lVar18)) && (lVar16 != 0)) {
      local_res8 = PushBackItemInPageGroup(this,(longlong)iVar5 - 2);
    }
    else {
      lVar12 = *(longlong *)(lVar17 + lVar18 + 0x10);
      uVar15 = param_1 - *(ulong64 *)(lVar17 + lVar18);
      uVar1 = *(ulonglong *)(*(longlong *)((longlong)this + 8) + 0x10 + lVar12 * 0x18);
      lVar18 = *(longlong *)((longlong)this + 8) + lVar12 * 0x18;
      uVar2 = *(ulonglong *)((longlong)this + 0x48);
      uVar7 = uVar15 - uVar1;
      if (uVar15 < uVar1) {
        uVar7 = uVar15;
      }
      _Size = uVar7 % uVar2;
      lVar12 = lVar18 + 0x18;
      if (uVar15 < uVar1) {
        lVar12 = lVar18;
      }
      uVar1 = *(ulonglong *)(lVar12 + 0x10 + (uVar7 / uVar2) * 0x18);
      plVar9 = (longlong *)(lVar12 + (uVar7 / uVar2) * 0x18);
      if (uVar1 < uVar2) {
        lVar18 = plVar9[1];
        if (lVar18 + uVar1 < uVar2) {
          local_res8 = (ECounterOpType *)(*plVar9 + lVar18 + _Size);
          memmove(local_res8 + 1,local_res8,uVar1 - _Size);
          plVar9[2] = plVar9[2] + 1;
          lVar18 = *(longlong *)((longlong)this + 0x28);
          plVar9 = (longlong *)(lVar18 + 8 + lVar17);
          *plVar9 = *plVar9 + 1;
          iVar5 = *(int *)((longlong)this + 0x30);
          *(longlong *)((longlong)this + 0x50) = *(longlong *)((longlong)this + 0x50) + 1;
          lVar16 = *(longlong *)((longlong)this + 0x28);
          for (plVar9 = (longlong *)(lVar18 + 0x20 + lVar17);
              plVar9 != (longlong *)((longlong)iVar5 * 0x20 + lVar16); plVar9 = plVar9 + 4) {
            *plVar9 = *plVar9 + 1;
          }
        }
        else {
          if (_Size != 0) {
            memmove((void *)(*plVar9 + lVar18 + -1),(void *)(*plVar9 + lVar18),_Size);
          }
          lVar18 = _UNK_152b1eaa8 + plVar9[2];
          plVar9[1] = ___xmm_0000000000000001ffffffffffffffff + plVar9[1];
          plVar9[2] = lVar18;
          lVar18 = *(longlong *)((longlong)this + 0x28);
          plVar10 = (longlong *)(lVar18 + 8 + lVar17);
          *plVar10 = *plVar10 + 1;
          iVar5 = *(int *)((longlong)this + 0x30);
          *(longlong *)((longlong)this + 0x50) = *(longlong *)((longlong)this + 0x50) + 1;
          lVar16 = *(longlong *)((longlong)this + 0x28);
          for (plVar10 = (longlong *)(lVar18 + 0x20 + lVar17);
              plVar10 != (longlong *)((longlong)iVar5 * 0x20 + lVar16); plVar10 = plVar10 + 4) {
            *plVar10 = *plVar10 + 1;
          }
          local_res8 = (ECounterOpType *)(*plVar9 + _Size + plVar9[1]);
        }
      }
      else {
        lVar18 = (longlong)plVar9 - *(longlong *)((longlong)this + 8);
        lVar18 = lVar18 / 6 + (lVar18 >> 0x3f);
        lVar18 = (lVar18 >> 2) - (lVar18 >> 0x3f);
        if (_Size == 0) {
          pTVar8 = TArray<TraceServices::TVariablePagedArrayPage<enum_TraceServices::ECounterOpType>,TSizedDefaultAllocator<32>_>
                   ::InsertDefaulted_GetRef((void *)((longlong)this + 8),(int)lVar18);
          local_res8 = (ECounterOpType *)
                       (**(code **)(**(longlong **)this + 8))
                                 (*(longlong **)this,*(undefined8 *)((longlong)this + 0x48));
          pTVar8->Items = local_res8;
          pTVar8->ItemCount = 1;
        }
        else {
          pTVar8 = TArray<TraceServices::TVariablePagedArrayPage<enum_TraceServices::ECounterOpType>,TSizedDefaultAllocator<32>_>
                   ::InsertDefaulted_GetRef((void *)((longlong)this + 8),(int)lVar18 + 1);
          pEVar6 = (ECounterOpType *)
                   (**(code **)(**(longlong **)this + 8))
                             (*(longlong **)this,*(undefined8 *)((longlong)this + 0x48));
          pTVar8->Items = pEVar6;
          uVar11 = pTVar8[-1].ItemCount - _Size;
          pTVar8->ItemCount = uVar11;
          pTVar8->ItemOffset = *(longlong *)((longlong)this + 0x48) - uVar11;
          pTVar8[-1].ItemCount = _Size + 1;
          local_res8 = pTVar8[-1].Items + pTVar8[-1].ItemOffset + _Size;
          memcpy(pTVar8->Items + pTVar8->ItemOffset,local_res8,pTVar8->ItemCount);
        }
        *(longlong *)((longlong)this + 0x18) = *(longlong *)((longlong)this + 8);
        *(longlong *)((longlong)this + 0x20) =
             *(longlong *)((longlong)this + 8) +
             ((longlong)*(int *)((longlong)this + 0x10) + -1) * 0x18;
        lVar12 = *(longlong *)((longlong)this + 0x28);
        plVar9 = (longlong *)(lVar12 + 0x18 + lVar17);
        *plVar9 = *plVar9 + 1;
        iVar5 = *(int *)((longlong)this + 0x30);
        lVar3 = *(longlong *)((longlong)this + 0x28);
        for (lVar12 = lVar12 + 0x20 + lVar17; lVar12 != (longlong)iVar5 * 0x20 + lVar3;
            lVar12 = lVar12 + 0x20) {
          *(longlong *)(lVar12 + 0x10) = *(longlong *)(lVar12 + 0x10) + 1;
        }
        lVar12 = *(longlong *)((longlong)this + 0x28);
        plVar9 = (longlong *)(lVar12 + 8 + lVar17);
        *plVar9 = *plVar9 + 1;
        iVar5 = *(int *)((longlong)this + 0x30);
        *(longlong *)((longlong)this + 0x50) = *(longlong *)((longlong)this + 0x50) + 1;
        lVar3 = *(longlong *)((longlong)this + 0x28);
        for (plVar9 = (longlong *)(lVar12 + 0x20 + lVar17);
            plVar9 != (longlong *)((longlong)iVar5 * 0x20 + lVar3); plVar9 = plVar9 + 4) {
          *plVar9 = *plVar9 + 1;
        }
        iVar13 = (int)lVar16 + 1;
        iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x20,8,1,(ForAnyElementType *)((longlong)this + 0x28),
                           (int *)((longlong)this + 0x30),(int *)((longlong)this + 0x34));
        lVar16 = (longlong)iVar13 * 0x20;
        _Src = (void *)(*(longlong *)((longlong)this + 0x28) + lVar16);
        memmove((void *)((longlong)_Src + 0x20),_Src,(longlong)(iVar5 - iVar13) << 5);
        plVar9 = (longlong *)(lVar16 + *(longlong *)((longlong)this + 0x28));
        DefaultConstructItems<TraceServices::TVariablePagedArrayPageGroup<enum_TraceServices::ECounterOpType>,int>
                  (plVar9,1);
        *(longlong *)((longlong)this + 0x38) = *(longlong *)((longlong)this + 0x28);
        *(longlong *)((longlong)this + 0x40) =
             (longlong)*(int *)((longlong)this + 0x30) * 0x20 +
             *(longlong *)((longlong)this + 0x28) + -0x20;
        lVar16 = plVar9[-1];
        lVar17 = plVar9[-3];
        plVar9[-1] = (lVar18 - plVar9[-2]) + 1;
        plVar9[-3] = (param_1 - plVar9[-4]) + 1;
        *plVar9 = param_1 + 1;
        plVar9[1] = (plVar9[-4] - param_1) + -1 + lVar17;
        plVar9[2] = lVar18 + 1;
        plVar9[3] = (plVar9[-2] - lVar18) + -1 + lVar16;
      }
    }
    return local_res8;
  }
  pEVar6 = PushBack(this);
  return pEVar6;
}

// Insert @ 14d472f90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long64 * __thiscall
TraceServices::TVariablePagedArray<__int64>::Insert
          (TVariablePagedArray<__int64> *this,ulong64 param_1)

{
  void *_Src;
  ulonglong uVar1;
  ulonglong uVar2;
  TVariablePagedArrayPageGroup<__int64> *pTVar3;
  uint uVar4;
  int iVar5;
  long64 *plVar6;
  ulonglong uVar7;
  TVariablePagedArrayPage<__int64> *pTVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  ulong64 uVar11;
  ulonglong uVar12;
  FScriptContainerElement *pFVar13;
  longlong lVar14;
  int iVar15;
  uint uVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  long64 *local_res8;
  
  if (param_1 < this->TotalItemCount) {
    uVar16 = (this->PageGroups).ArrayNum;
    iVar5 = 0;
    pFVar13 = (this->PageGroups).AllocatorInstance.Data;
    if (0 < (int)uVar16) {
      do {
        iVar15 = (uVar16 >> 1) + iVar5;
        if (*(ulonglong *)(pFVar13 + (longlong)iVar15 * 0x20) <= param_1) {
          iVar5 = iVar15 + (uVar16 & 1);
        }
        uVar4 = uVar16 >> 1;
        uVar16 = uVar16 >> 1;
      } while (uVar4 != 0);
    }
    lVar18 = (longlong)iVar5 + -1;
    lVar19 = lVar18 * 0x20;
    if ((param_1 == *(ulong64 *)(pFVar13 + lVar19)) && (lVar18 != 0)) {
      local_res8 = PushBackItemInPageGroup(this,(longlong)iVar5 - 2);
    }
    else {
      pFVar9 = (this->Pages).AllocatorInstance.Data;
      uVar17 = param_1 - *(ulong64 *)(pFVar13 + lVar19);
      uVar1 = *(ulonglong *)(pFVar9 + *(longlong *)(pFVar13 + lVar19 + 0x10) * 0x18 + 0x10);
      pFVar9 = pFVar9 + *(longlong *)(pFVar13 + lVar19 + 0x10) * 0x18;
      uVar2 = this->PageSize;
      uVar7 = uVar17 - uVar1;
      if (uVar17 < uVar1) {
        uVar7 = uVar17;
      }
      uVar12 = uVar7 % uVar2;
      pFVar13 = pFVar9 + 0x18;
      if (uVar17 < uVar1) {
        pFVar13 = pFVar9;
      }
      uVar1 = *(ulonglong *)(pFVar13 + (uVar7 / uVar2) * 0x18 + 0x10);
      pFVar13 = pFVar13 + (uVar7 / uVar2) * 0x18;
      if (uVar1 < uVar2) {
        lVar18 = *(longlong *)(pFVar13 + 8);
        if (lVar18 + uVar1 < uVar2) {
          local_res8 = (long64 *)(*(longlong *)pFVar13 + (lVar18 + uVar12) * 8);
          memmove(local_res8 + 1,local_res8,(uVar1 - uVar12) * 8);
          *(longlong *)(pFVar13 + 0x10) = *(longlong *)(pFVar13 + 0x10) + 1;
          pFVar9 = (this->PageGroups).AllocatorInstance.Data;
          pFVar13 = pFVar9 + lVar19 + 8;
          *(longlong *)pFVar13 = *(longlong *)pFVar13 + 1;
          iVar5 = (this->PageGroups).ArrayNum;
          this->TotalItemCount = this->TotalItemCount + 1;
          pFVar13 = (this->PageGroups).AllocatorInstance.Data;
          for (pFVar9 = pFVar9 + lVar19 + 0x20; pFVar9 != pFVar13 + (longlong)iVar5 * 0x20;
              pFVar9 = pFVar9 + 0x20) {
            *(longlong *)pFVar9 = *(longlong *)pFVar9 + 1;
          }
        }
        else {
          if (uVar12 != 0) {
            _Src = (void *)(*(longlong *)pFVar13 + lVar18 * 8);
            memmove((void *)((longlong)_Src + -8),_Src,uVar12 * 8);
          }
          lVar18 = _UNK_152b1eaa8 + *(longlong *)(pFVar13 + 0x10);
          *(longlong *)(pFVar13 + 8) =
               ___xmm_0000000000000001ffffffffffffffff + *(longlong *)(pFVar13 + 8);
          *(longlong *)(pFVar13 + 0x10) = lVar18;
          pFVar10 = (this->PageGroups).AllocatorInstance.Data;
          pFVar9 = pFVar10 + lVar19 + 8;
          *(longlong *)pFVar9 = *(longlong *)pFVar9 + 1;
          iVar5 = (this->PageGroups).ArrayNum;
          this->TotalItemCount = this->TotalItemCount + 1;
          pFVar9 = (this->PageGroups).AllocatorInstance.Data;
          for (pFVar10 = pFVar10 + lVar19 + 0x20; pFVar10 != pFVar9 + (longlong)iVar5 * 0x20;
              pFVar10 = pFVar10 + 0x20) {
            *(longlong *)pFVar10 = *(longlong *)pFVar10 + 1;
          }
          local_res8 = (long64 *)(*(longlong *)pFVar13 + (*(longlong *)(pFVar13 + 8) + uVar12) * 8);
        }
      }
      else {
        lVar14 = (longlong)pFVar13 - (longlong)(this->Pages).AllocatorInstance.Data;
        lVar14 = lVar14 / 6 + (lVar14 >> 0x3f);
        lVar14 = (lVar14 >> 2) - (lVar14 >> 0x3f);
        if (uVar12 == 0) {
          pTVar8 = TArray<TraceServices::TVariablePagedArrayPage<__int64>,TSizedDefaultAllocator<32>_>
                   ::InsertDefaulted_GetRef(&this->Pages,(int)lVar14);
          local_res8 = (long64 *)
                       (**(code **)((longlong)*this->Allocator + 8))
                                 (this->Allocator,this->PageSize << 3);
          pTVar8->Items = local_res8;
          pTVar8->ItemCount = 1;
        }
        else {
          pTVar8 = TArray<TraceServices::TVariablePagedArrayPage<__int64>,TSizedDefaultAllocator<32>_>
                   ::InsertDefaulted_GetRef(&this->Pages,(int)lVar14 + 1);
          plVar6 = (long64 *)
                   (**(code **)((longlong)*this->Allocator + 8))
                             (this->Allocator,this->PageSize << 3);
          pTVar8->Items = plVar6;
          uVar11 = pTVar8[-1].ItemCount - uVar12;
          pTVar8->ItemCount = uVar11;
          pTVar8->ItemOffset = this->PageSize - uVar11;
          pTVar8[-1].ItemCount = uVar12 + 1;
          local_res8 = pTVar8[-1].Items + pTVar8[-1].ItemOffset + uVar12;
          memcpy(pTVar8->Items + pTVar8->ItemOffset,local_res8,pTVar8->ItemCount << 3);
        }
        pTVar8 = (TVariablePagedArrayPage<__int64> *)(this->Pages).AllocatorInstance.Data;
        iVar5 = (this->Pages).ArrayNum;
        this->FirstPage = pTVar8;
        this->LastPage = pTVar8 + (longlong)iVar5 + -1;
        pFVar9 = (this->PageGroups).AllocatorInstance.Data;
        pFVar13 = pFVar9 + lVar19 + 0x18;
        *(longlong *)pFVar13 = *(longlong *)pFVar13 + 1;
        iVar5 = (this->PageGroups).ArrayNum;
        pFVar13 = (this->PageGroups).AllocatorInstance.Data;
        for (pFVar9 = pFVar9 + lVar19 + 0x20; pFVar9 != pFVar13 + (longlong)iVar5 * 0x20;
            pFVar9 = pFVar9 + 0x20) {
          *(longlong *)(pFVar9 + 0x10) = *(longlong *)(pFVar9 + 0x10) + 1;
        }
        pFVar9 = (this->PageGroups).AllocatorInstance.Data;
        pFVar13 = pFVar9 + lVar19 + 8;
        *(longlong *)pFVar13 = *(longlong *)pFVar13 + 1;
        iVar5 = (this->PageGroups).ArrayNum;
        this->TotalItemCount = this->TotalItemCount + 1;
        pFVar13 = (this->PageGroups).AllocatorInstance.Data;
        for (pFVar9 = pFVar9 + lVar19 + 0x20; pFVar9 != pFVar13 + (longlong)iVar5 * 0x20;
            pFVar9 = pFVar9 + 0x20) {
          *(longlong *)pFVar9 = *(longlong *)pFVar9 + 1;
        }
        iVar15 = (int)lVar18 + 1;
        iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x20,8,1,&(this->PageGroups).AllocatorInstance,
                           &(this->PageGroups).ArrayNum,&(this->PageGroups).ArrayMax);
        lVar18 = (longlong)iVar15 * 0x20;
        pFVar13 = (this->PageGroups).AllocatorInstance.Data + lVar18;
        memmove(pFVar13 + 0x20,pFVar13,(longlong)(iVar5 - iVar15) << 5);
        pFVar13 = (this->PageGroups).AllocatorInstance.Data + lVar18;
        DefaultConstructItems<TraceServices::TVariablePagedArrayPageGroup<__int64>,int>(pFVar13,1);
        pTVar3 = (TVariablePagedArrayPageGroup<__int64> *)(this->PageGroups).AllocatorInstance.Data;
        iVar5 = (this->PageGroups).ArrayNum;
        this->FirstPageGroup = pTVar3;
        this->LastPageGroup = pTVar3 + (longlong)iVar5 + -1;
        lVar18 = *(longlong *)(pFVar13 + -8);
        lVar19 = *(longlong *)(pFVar13 + -0x18);
        *(longlong *)(pFVar13 + -8) = (lVar14 - *(longlong *)(pFVar13 + -0x10)) + 1;
        *(ulong64 *)(pFVar13 + -0x18) = (param_1 - *(longlong *)(pFVar13 + -0x20)) + 1;
        *(ulong64 *)pFVar13 = param_1 + 1;
        *(ulong64 *)(pFVar13 + 8) = (*(longlong *)(pFVar13 + -0x20) - param_1) + -1 + lVar19;
        *(longlong *)(pFVar13 + 0x10) = lVar14 + 1;
        *(longlong *)(pFVar13 + 0x18) = (*(longlong *)(pFVar13 + -0x10) - lVar14) + -1 + lVar18;
      }
    }
    return local_res8;
  }
  plVar6 = PushBack(this);
  return plVar6;
}

// PushBack @ 14d47d670

double * __thiscall
TraceServices::TVariablePagedArray<double>::PushBack(TVariablePagedArray<double> *this)

{
  int *piVar1;
  ulong64 *puVar2;
  TVariablePagedArrayPage<double> *pTVar3;
  FScriptContainerElement *pFVar4;
  ulong64 uVar5;
  ulong64 uVar6;
  int iVar7;
  double *pdVar8;
  TVariablePagedArrayPageGroup<double> *pTVar9;
  TArray<TraceServices::TVariablePagedArrayPage<double>,TSizedDefaultAllocator<32>_> *pTVar10;
  
  if (this->LastPage == (TVariablePagedArrayPage<double> *)0x0) {
    iVar7 = (this->Pages).ArrayNum;
    piVar1 = &(this->Pages).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,&(this->Pages).AllocatorInstance,piVar1);
    }
    (this->Pages).ArrayNum = iVar7 + 1;
    pTVar3 = (TVariablePagedArrayPage<double> *)
             ((this->Pages).AllocatorInstance.Data + (longlong)iVar7 * 0x18);
    DefaultConstructItems<TraceServices::TVariablePagedArrayPage<double>,int>(pTVar3,1);
    pdVar8 = (double *)
             (**(code **)((longlong)*this->Allocator + 8))(this->Allocator,this->PageSize << 3);
    pTVar3->Items = pdVar8;
    piVar1 = &(this->PageGroups).ArrayMax;
    this->FirstPage = pTVar3;
    this->LastPage = pTVar3;
    iVar7 = (this->PageGroups).ArrayNum;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,&(this->PageGroups).AllocatorInstance,piVar1);
    }
    pFVar4 = (this->PageGroups).AllocatorInstance.Data;
    (this->PageGroups).ArrayNum = iVar7 + 1;
    pTVar9 = (TVariablePagedArrayPageGroup<double> *)(pFVar4 + (longlong)iVar7 * 0x20);
    DefaultConstructItems<TraceServices::TVariablePagedArrayPageGroup<double>,int>(pTVar9,1);
    pTVar9->PageCount = 1;
    this->FirstPageGroup = pTVar9;
    this->LastPageGroup = pTVar9;
  }
  pTVar10 = &this->Pages;
  if (this->LastPage->ItemCount + this->LastPage->ItemOffset == this->PageSize) {
    iVar7 = (this->Pages).ArrayNum;
    piVar1 = &(this->Pages).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,&pTVar10->AllocatorInstance,piVar1);
      (this->Pages).ArrayNum = iVar7;
    }
    (this->Pages).ArrayNum = iVar7 + 1;
    pTVar3 = (TVariablePagedArrayPage<double> *)
             ((pTVar10->AllocatorInstance).Data + (longlong)iVar7 * 0x18);
    DefaultConstructItems<TraceServices::TVariablePagedArrayPage<double>,int>(pTVar3,1);
    pdVar8 = (double *)
             (**(code **)((longlong)*this->Allocator + 8))(this->Allocator,this->PageSize << 3);
    pTVar3->Items = pdVar8;
    this->FirstPage = (TVariablePagedArrayPage<double> *)(pTVar10->AllocatorInstance).Data;
    this->LastPage = pTVar3;
    puVar2 = &this->LastPageGroup->PageCount;
    *puVar2 = *puVar2 + 1;
  }
  pTVar3 = this->LastPage;
  uVar5 = pTVar3->ItemCount;
  uVar6 = pTVar3->ItemOffset;
  pdVar8 = pTVar3->Items;
  pdVar8[uVar5 + uVar6] = 0.0;
  puVar2 = &this->LastPage->ItemCount;
  *puVar2 = *puVar2 + 1;
  puVar2 = &this->LastPageGroup->ItemCount;
  *puVar2 = *puVar2 + 1;
  this->TotalItemCount = this->TotalItemCount + 1;
  return pdVar8 + uVar5 + uVar6;
}

// PushBack @ 14d47d810

ECounterOpType * __thiscall
TraceServices::TVariablePagedArray<enum_TraceServices::ECounterOpType>::PushBack(void *this)

{
  longlong *plVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  undefined8 uVar4;
  ECounterOpType *pEVar5;
  void *pvVar6;
  ForAnyElementType *pFVar7;
  
  if (*(longlong *)((longlong)this + 0x20) == 0) {
    iVar3 = *(int *)((longlong)this + 0x10);
    if (iVar3 == *(int *)((longlong)this + 0x14)) {
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,(ForAnyElementType *)((longlong)this + 8),
                         (int *)((longlong)this + 0x14));
    }
    *(int *)((longlong)this + 0x10) = iVar3 + 1;
    pFVar2 = ((ForAnyElementType *)((longlong)this + 8))->Data + (longlong)iVar3 * 0x18;
    DefaultConstructItems<TraceServices::TVariablePagedArrayPage<enum_TraceServices::ECounterOpType>,int>
              (pFVar2,1);
    uVar4 = (**(code **)(**(longlong **)this + 8))
                      (*(longlong **)this,*(undefined8 *)((longlong)this + 0x48));
    *(undefined8 *)pFVar2 = uVar4;
    *(FScriptContainerElement **)((longlong)this + 0x18) = pFVar2;
    *(FScriptContainerElement **)((longlong)this + 0x20) = pFVar2;
    iVar3 = *(int *)((longlong)this + 0x30);
    if (iVar3 == *(int *)((longlong)this + 0x34)) {
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,(ForAnyElementType *)((longlong)this + 0x28),
                         (int *)((longlong)this + 0x34));
    }
    *(int *)((longlong)this + 0x30) = iVar3 + 1;
    pvVar6 = (void *)(*(longlong *)((longlong)this + 0x28) + (longlong)iVar3 * 0x20);
    DefaultConstructItems<TraceServices::TVariablePagedArrayPageGroup<enum_TraceServices::ECounterOpType>,int>
              (pvVar6,1);
    *(undefined8 *)((longlong)pvVar6 + 0x18) = 1;
    *(void **)((longlong)this + 0x38) = pvVar6;
    *(void **)((longlong)this + 0x40) = pvVar6;
  }
  pFVar7 = (ForAnyElementType *)((longlong)this + 8);
  if (*(longlong *)(*(longlong *)((longlong)this + 0x20) + 0x10) +
      *(longlong *)(*(longlong *)((longlong)this + 0x20) + 8) ==
      *(longlong *)((longlong)this + 0x48)) {
    iVar3 = *(int *)((longlong)this + 0x10);
    if (iVar3 == *(int *)((longlong)this + 0x14)) {
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,pFVar7,(int *)((longlong)this + 0x14));
      *(int *)((longlong)this + 0x10) = iVar3;
    }
    *(int *)((longlong)this + 0x10) = iVar3 + 1;
    pFVar2 = pFVar7->Data + (longlong)iVar3 * 0x18;
    DefaultConstructItems<TraceServices::TVariablePagedArrayPage<enum_TraceServices::ECounterOpType>,int>
              (pFVar2,1);
    uVar4 = (**(code **)(**(longlong **)this + 8))
                      (*(longlong **)this,*(undefined8 *)((longlong)this + 0x48));
    *(undefined8 *)pFVar2 = uVar4;
    *(FScriptContainerElement **)((longlong)this + 0x18) = pFVar7->Data;
    *(FScriptContainerElement **)((longlong)this + 0x20) = pFVar2;
    plVar1 = (longlong *)(*(longlong *)((longlong)this + 0x40) + 0x18);
    *plVar1 = *plVar1 + 1;
  }
  plVar1 = *(longlong **)((longlong)this + 0x20);
  pEVar5 = (ECounterOpType *)(*plVar1 + plVar1[2] + plVar1[1]);
  *pEVar5 = Set;
  plVar1 = (longlong *)(*(longlong *)((longlong)this + 0x20) + 0x10);
  *plVar1 = *plVar1 + 1;
  plVar1 = (longlong *)(*(longlong *)((longlong)this + 0x40) + 8);
  *plVar1 = *plVar1 + 1;
  *(longlong *)((longlong)this + 0x50) = *(longlong *)((longlong)this + 0x50) + 1;
  return pEVar5;
}

// PushBack @ 14d47d9b0

long64 * __thiscall
TraceServices::TVariablePagedArray<__int64>::PushBack(TVariablePagedArray<__int64> *this)

{
  int *piVar1;
  ulong64 *puVar2;
  TVariablePagedArrayPage<__int64> *pTVar3;
  FScriptContainerElement *pFVar4;
  ulong64 uVar5;
  ulong64 uVar6;
  int iVar7;
  long64 *plVar8;
  TVariablePagedArrayPageGroup<__int64> *pTVar9;
  TArray<TraceServices::TVariablePagedArrayPage<__int64>,TSizedDefaultAllocator<32>_> *pTVar10;
  
  if (this->LastPage == (TVariablePagedArrayPage<__int64> *)0x0) {
    iVar7 = (this->Pages).ArrayNum;
    piVar1 = &(this->Pages).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,&(this->Pages).AllocatorInstance,piVar1);
    }
    (this->Pages).ArrayNum = iVar7 + 1;
    pTVar3 = (TVariablePagedArrayPage<__int64> *)
             ((this->Pages).AllocatorInstance.Data + (longlong)iVar7 * 0x18);
    DefaultConstructItems<TraceServices::TVariablePagedArrayPage<__int64>,int>(pTVar3,1);
    plVar8 = (long64 *)
             (**(code **)((longlong)*this->Allocator + 8))(this->Allocator,this->PageSize << 3);
    pTVar3->Items = plVar8;
    piVar1 = &(this->PageGroups).ArrayMax;
    this->FirstPage = pTVar3;
    this->LastPage = pTVar3;
    iVar7 = (this->PageGroups).ArrayNum;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,&(this->PageGroups).AllocatorInstance,piVar1);
    }
    pFVar4 = (this->PageGroups).AllocatorInstance.Data;
    (this->PageGroups).ArrayNum = iVar7 + 1;
    pTVar9 = (TVariablePagedArrayPageGroup<__int64> *)(pFVar4 + (longlong)iVar7 * 0x20);
    DefaultConstructItems<TraceServices::TVariablePagedArrayPageGroup<__int64>,int>(pTVar9,1);
    pTVar9->PageCount = 1;
    this->FirstPageGroup = pTVar9;
    this->LastPageGroup = pTVar9;
  }
  pTVar10 = &this->Pages;
  if (this->LastPage->ItemCount + this->LastPage->ItemOffset == this->PageSize) {
    iVar7 = (this->Pages).ArrayNum;
    piVar1 = &(this->Pages).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,&pTVar10->AllocatorInstance,piVar1);
      (this->Pages).ArrayNum = iVar7;
    }
    (this->Pages).ArrayNum = iVar7 + 1;
    pTVar3 = (TVariablePagedArrayPage<__int64> *)
             ((pTVar10->AllocatorInstance).Data + (longlong)iVar7 * 0x18);
    DefaultConstructItems<TraceServices::TVariablePagedArrayPage<__int64>,int>(pTVar3,1);
    plVar8 = (long64 *)
             (**(code **)((longlong)*this->Allocator + 8))(this->Allocator,this->PageSize << 3);
    pTVar3->Items = plVar8;
    this->FirstPage = (TVariablePagedArrayPage<__int64> *)(pTVar10->AllocatorInstance).Data;
    this->LastPage = pTVar3;
    puVar2 = &this->LastPageGroup->PageCount;
    *puVar2 = *puVar2 + 1;
  }
  pTVar3 = this->LastPage;
  uVar5 = pTVar3->ItemCount;
  uVar6 = pTVar3->ItemOffset;
  plVar8 = pTVar3->Items;
  plVar8[uVar5 + uVar6] = 0;
  puVar2 = &this->LastPage->ItemCount;
  *puVar2 = *puVar2 + 1;
  puVar2 = &this->LastPageGroup->ItemCount;
  *puVar2 = *puVar2 + 1;
  this->TotalItemCount = this->TotalItemCount + 1;
  return plVar8 + uVar5 + uVar6;
}

// PushBackItemInPageGroup @ 14d47db50

double * __thiscall
TraceServices::TVariablePagedArray<double>::PushBackItemInPageGroup
          (TVariablePagedArray<double> *this,ulong64 param_1)

{
  int *piVar1;
  TVariablePagedArrayPage<double> *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  double *pdVar6;
  longlong lVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  int iVar13;
  
  uVar12 = (uint)param_1;
  uVar8 = 0;
  if ((int)uVar12 < (this->PageGroups).ArrayNum) {
    uVar8 = ~uVar12 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    pdVar6 = (double *)(*pcVar3)();
    return pdVar6;
  }
  pFVar10 = (this->PageGroups).AllocatorInstance.Data;
  piVar1 = &(this->Pages).ArrayNum;
  iVar13 = *(int *)(pFVar10 + (longlong)(int)uVar12 * 0x20 + 0x18) +
           *(int *)(pFVar10 + (longlong)(int)uVar12 * 0x20 + 0x10);
  uVar8 = iVar13 - 1;
  uVar12 = 0;
  if ((int)uVar8 < *piVar1) {
    uVar12 = ~uVar8 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    pdVar6 = (double *)(*pcVar3)();
    return pdVar6;
  }
  pFVar9 = (this->Pages).AllocatorInstance.Data;
  pFVar10 = pFVar9 + (longlong)(int)uVar8 * 0x18;
  if (*(longlong *)(pFVar9 + (longlong)(int)uVar8 * 0x18 + 0x10) + *(longlong *)(pFVar10 + 8) ==
      this->PageSize) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,1,&(this->Pages).AllocatorInstance,piVar1,&(this->Pages).ArrayMax);
    pFVar10 = (this->Pages).AllocatorInstance.Data + (longlong)iVar13 * 0x18;
    memmove(pFVar10 + 0x18,pFVar10,(longlong)(iVar5 - iVar13) * 0x18);
    pFVar10 = (this->Pages).AllocatorInstance.Data + (longlong)iVar13 * 0x18;
    DefaultConstructItems<TraceServices::TVariablePagedArrayPage<double>,int>(pFVar10,1);
    lVar7 = (**(code **)((longlong)*this->Allocator + 8))(this->Allocator,this->PageSize << 3);
    *(longlong *)pFVar10 = lVar7;
    pTVar2 = (TVariablePagedArrayPage<double> *)(this->Pages).AllocatorInstance.Data;
    iVar13 = (this->Pages).ArrayNum;
    this->FirstPage = pTVar2;
    this->LastPage = pTVar2 + (longlong)iVar13 + -1;
    pFVar11 = (this->PageGroups).AllocatorInstance.Data;
    pFVar9 = pFVar11 + param_1 * 0x20 + 0x18;
    *(longlong *)pFVar9 = *(longlong *)pFVar9 + 1;
    iVar13 = (this->PageGroups).ArrayNum;
    pFVar9 = (this->PageGroups).AllocatorInstance.Data;
    for (pFVar11 = pFVar11 + param_1 * 0x20 + 0x20; pFVar11 != pFVar9 + (longlong)iVar13 * 0x20;
        pFVar11 = pFVar11 + 0x20) {
      *(longlong *)(pFVar11 + 0x10) = *(longlong *)(pFVar11 + 0x10) + 1;
    }
  }
  pdVar6 = (double *)
           (*(longlong *)pFVar10 + (*(longlong *)(pFVar10 + 8) + *(longlong *)(pFVar10 + 0x10)) * 8)
  ;
  *pdVar6 = 0.0;
  *(longlong *)(pFVar10 + 0x10) = *(longlong *)(pFVar10 + 0x10) + 1;
  pFVar9 = (this->PageGroups).AllocatorInstance.Data;
  pFVar10 = pFVar9 + param_1 * 0x20 + 8;
  *(longlong *)pFVar10 = *(longlong *)pFVar10 + 1;
  iVar13 = (this->PageGroups).ArrayNum;
  this->TotalItemCount = this->TotalItemCount + 1;
  pFVar10 = (this->PageGroups).AllocatorInstance.Data;
  for (pFVar9 = pFVar9 + param_1 * 0x20 + 0x20; pFVar9 != pFVar10 + (longlong)iVar13 * 0x20;
      pFVar9 = pFVar9 + 0x20) {
    *(longlong *)pFVar9 = *(longlong *)pFVar9 + 1;
  }
  return pdVar6;
}

// PushBackItemInPageGroup @ 14d47dda0

ECounterOpType * __thiscall
TraceServices::TVariablePagedArray<enum_TraceServices::ECounterOpType>::PushBackItemInPageGroup
          (void *this,ulong64 param_1)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ECounterOpType *pEVar6;
  longlong lVar7;
  uint uVar8;
  void *_Src;
  longlong *plVar9;
  uint uVar10;
  int iVar11;
  
  uVar10 = (uint)param_1;
  uVar8 = 0;
  if ((int)uVar10 < *(int *)((longlong)this + 0x30)) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    pEVar6 = (ECounterOpType *)(*pcVar3)();
    return pEVar6;
  }
  iVar11 = *(int *)(*(longlong *)((longlong)this + 0x28) + 0x18 + (longlong)(int)uVar10 * 0x20) +
           *(int *)(*(longlong *)((longlong)this + 0x28) + 0x10 + (longlong)(int)uVar10 * 0x20);
  uVar8 = iVar11 - 1;
  uVar10 = 0;
  if ((int)uVar8 < *(int *)((longlong)this + 0x10)) {
    uVar10 = ~uVar8 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    pEVar6 = (ECounterOpType *)(*pcVar3)();
    return pEVar6;
  }
  plVar9 = (longlong *)(*(longlong *)((longlong)this + 8) + (longlong)(int)uVar8 * 0x18);
  if (*(longlong *)(*(longlong *)((longlong)this + 8) + 0x10 + (longlong)(int)uVar8 * 0x18) +
      plVar9[1] == *(longlong *)((longlong)this + 0x48)) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,1,(ForAnyElementType *)((longlong)this + 8),
                       (int *)((longlong)this + 0x10),(int *)((longlong)this + 0x14));
    _Src = (void *)(*(longlong *)((longlong)this + 8) + (longlong)iVar11 * 0x18);
    memmove((void *)((longlong)_Src + 0x18),_Src,(longlong)(iVar5 - iVar11) * 0x18);
    plVar9 = (longlong *)((longlong)iVar11 * 0x18 + *(longlong *)((longlong)this + 8));
    DefaultConstructItems<TraceServices::TVariablePagedArrayPage<enum_TraceServices::ECounterOpType>,int>
              (plVar9,1);
    lVar7 = (**(code **)(**(longlong **)this + 8))
                      (*(longlong **)this,*(undefined8 *)((longlong)this + 0x48));
    *plVar9 = lVar7;
    *(longlong *)((longlong)this + 0x18) = *(longlong *)((longlong)this + 8);
    *(longlong *)((longlong)this + 0x20) =
         *(longlong *)((longlong)this + 8) + ((longlong)*(int *)((longlong)this + 0x10) + -1) * 0x18
    ;
    lVar7 = *(longlong *)((longlong)this + 0x28);
    plVar1 = (longlong *)(param_1 * 0x20 + 0x18 + lVar7);
    *plVar1 = *plVar1 + 1;
    iVar11 = *(int *)((longlong)this + 0x30);
    lVar2 = *(longlong *)((longlong)this + 0x28);
    for (lVar7 = lVar7 + 0x20 + param_1 * 0x20; lVar7 != (longlong)iVar11 * 0x20 + lVar2;
        lVar7 = lVar7 + 0x20) {
      *(longlong *)(lVar7 + 0x10) = *(longlong *)(lVar7 + 0x10) + 1;
    }
  }
  pEVar6 = (ECounterOpType *)(plVar9[1] + plVar9[2] + *plVar9);
  *pEVar6 = Set;
  plVar9[2] = plVar9[2] + 1;
  lVar7 = *(longlong *)((longlong)this + 0x28);
  plVar9 = (longlong *)(param_1 * 0x20 + 8 + lVar7);
  *plVar9 = *plVar9 + 1;
  iVar11 = *(int *)((longlong)this + 0x30);
  *(longlong *)((longlong)this + 0x50) = *(longlong *)((longlong)this + 0x50) + 1;
  lVar2 = *(longlong *)((longlong)this + 0x28);
  for (plVar9 = (longlong *)(lVar7 + 0x20 + param_1 * 0x20);
      plVar9 != (longlong *)((longlong)iVar11 * 0x20 + lVar2); plVar9 = plVar9 + 4) {
    *plVar9 = *plVar9 + 1;
  }
  return pEVar6;
}

// PushBackItemInPageGroup @ 14d47dfe0

long64 * __thiscall
TraceServices::TVariablePagedArray<__int64>::PushBackItemInPageGroup
          (TVariablePagedArray<__int64> *this,ulong64 param_1)

{
  int *piVar1;
  TVariablePagedArrayPage<__int64> *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  long64 *plVar6;
  longlong lVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  int iVar13;
  
  uVar12 = (uint)param_1;
  uVar8 = 0;
  if ((int)uVar12 < (this->PageGroups).ArrayNum) {
    uVar8 = ~uVar12 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    plVar6 = (long64 *)(*pcVar3)();
    return plVar6;
  }
  pFVar10 = (this->PageGroups).AllocatorInstance.Data;
  piVar1 = &(this->Pages).ArrayNum;
  iVar13 = *(int *)(pFVar10 + (longlong)(int)uVar12 * 0x20 + 0x18) +
           *(int *)(pFVar10 + (longlong)(int)uVar12 * 0x20 + 0x10);
  uVar8 = iVar13 - 1;
  uVar12 = 0;
  if ((int)uVar8 < *piVar1) {
    uVar12 = ~uVar8 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    plVar6 = (long64 *)(*pcVar3)();
    return plVar6;
  }
  pFVar9 = (this->Pages).AllocatorInstance.Data;
  pFVar10 = pFVar9 + (longlong)(int)uVar8 * 0x18;
  if (*(longlong *)(pFVar9 + (longlong)(int)uVar8 * 0x18 + 0x10) + *(longlong *)(pFVar10 + 8) ==
      this->PageSize) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,1,&(this->Pages).AllocatorInstance,piVar1,&(this->Pages).ArrayMax);
    pFVar10 = (this->Pages).AllocatorInstance.Data + (longlong)iVar13 * 0x18;
    memmove(pFVar10 + 0x18,pFVar10,(longlong)(iVar5 - iVar13) * 0x18);
    pFVar10 = (this->Pages).AllocatorInstance.Data + (longlong)iVar13 * 0x18;
    DefaultConstructItems<TraceServices::TVariablePagedArrayPage<__int64>,int>(pFVar10,1);
    lVar7 = (**(code **)((longlong)*this->Allocator + 8))(this->Allocator,this->PageSize << 3);
    *(longlong *)pFVar10 = lVar7;
    pTVar2 = (TVariablePagedArrayPage<__int64> *)(this->Pages).AllocatorInstance.Data;
    iVar13 = (this->Pages).ArrayNum;
    this->FirstPage = pTVar2;
    this->LastPage = pTVar2 + (longlong)iVar13 + -1;
    pFVar11 = (this->PageGroups).AllocatorInstance.Data;
    pFVar9 = pFVar11 + param_1 * 0x20 + 0x18;
    *(longlong *)pFVar9 = *(longlong *)pFVar9 + 1;
    iVar13 = (this->PageGroups).ArrayNum;
    pFVar9 = (this->PageGroups).AllocatorInstance.Data;
    for (pFVar11 = pFVar11 + param_1 * 0x20 + 0x20; pFVar11 != pFVar9 + (longlong)iVar13 * 0x20;
        pFVar11 = pFVar11 + 0x20) {
      *(longlong *)(pFVar11 + 0x10) = *(longlong *)(pFVar11 + 0x10) + 1;
    }
  }
  plVar6 = (long64 *)
           (*(longlong *)pFVar10 + (*(longlong *)(pFVar10 + 8) + *(longlong *)(pFVar10 + 0x10)) * 8)
  ;
  *plVar6 = 0;
  *(longlong *)(pFVar10 + 0x10) = *(longlong *)(pFVar10 + 0x10) + 1;
  pFVar9 = (this->PageGroups).AllocatorInstance.Data;
  pFVar10 = pFVar9 + param_1 * 0x20 + 8;
  *(longlong *)pFVar10 = *(longlong *)pFVar10 + 1;
  iVar13 = (this->PageGroups).ArrayNum;
  this->TotalItemCount = this->TotalItemCount + 1;
  pFVar10 = (this->PageGroups).AllocatorInstance.Data;
  for (pFVar9 = pFVar9 + param_1 * 0x20 + 0x20; pFVar9 != pFVar10 + (longlong)iVar13 * 0x20;
      pFVar9 = pFVar9 + 0x20) {
    *(longlong *)pFVar9 = *(longlong *)pFVar9 + 1;
  }
  return plVar6;
}

