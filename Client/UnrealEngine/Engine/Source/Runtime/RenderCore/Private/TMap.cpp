// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 11

// TMap<unsigned___int64> @ 145d8ab70

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

TMap<unsigned___int64> * __thiscall
DynamicRenderScaling::TMap<unsigned___int64>::TMap<unsigned___int64>(TMap<unsigned___int64> *this)

{
  uint uVar1;
  TLinkedList<DynamicRenderScaling::FBudget_*> *pTVar2;
  wchar_t *pwVar3;
  ForElementType<DynamicRenderScaling::TMap<unsigned___int64>::FItem> FVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  TLinkedList<DynamicRenderScaling::FBudget_*> **ppTVar9;
  TMap<unsigned___int64> *pTVar10;
  ForElementType<DynamicRenderScaling::TMap<unsigned___int64>::FItem> FVar11;
  
  (this->Array).AllocatorInstance.SecondaryData =
       (ForElementType<DynamicRenderScaling::TMap<unsigned___int64>::FItem>)0x0;
  (this->Array).ArrayNum = 0;
  (this->Array).ArrayMax = 0x10;
  iVar7 = FBudget::GetGlobalListSize();
  TArray<DynamicRenderScaling::TMap<unsigned___int64>::FItem,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
  ::SetNum(&this->Array,iVar7,Default);
  ppTVar9 = FBudget::GetGlobalList();
  pTVar2 = *ppTVar9;
  while( true ) {
    if (pTVar2 == (TLinkedList<DynamicRenderScaling::FBudget_*> *)0x0) {
      return this;
    }
    uVar1 = pTVar2->Element->BudgetId;
    pwVar3 = pTVar2->Element->Name;
    uVar8 = 0;
    if ((int)uVar1 < (this->Array).ArrayNum) {
      uVar8 = ~uVar1 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) break;
    FVar4 = (this->Array).AllocatorInstance.SecondaryData;
    FVar11 = (ForElementType<DynamicRenderScaling::TMap<unsigned___int64>::FItem>)this;
    if (FVar4 != (ForElementType<DynamicRenderScaling::TMap<unsigned___int64>::FItem>)0x0) {
      FVar11 = FVar4;
    }
    *(wchar_t **)((longlong)FVar11 + (longlong)(int)uVar1 * 0x10) = pwVar3;
    pTVar2 = (TLinkedList<DynamicRenderScaling::FBudget_*> *)pTVar2->_padding_;
  }
  pcVar5 = (code *)swi(3);
  pTVar10 = (TMap<unsigned___int64> *)(*pcVar5)();
  return pTVar10;
}

// TMap<bool> @ 145d8ac70

TMap<bool> * __thiscall DynamicRenderScaling::TMap<bool>::TMap<bool>(TMap<bool> *this)

{
  int *piVar1;
  int *piVar2;
  ForElementType<DynamicRenderScaling::TMap<bool>::FItem> FVar3;
  TLinkedList<DynamicRenderScaling::FBudget_*> *pTVar4;
  wchar_t *pwVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  void *_Dst;
  TLinkedList<DynamicRenderScaling::FBudget_*> **ppTVar10;
  TMap<bool> *pTVar11;
  int iVar12;
  ForElementType<DynamicRenderScaling::TMap<bool>::FItem> FVar13;
  uint uVar14;
  
  (this->Array).AllocatorInstance.SecondaryData =
       (ForElementType<DynamicRenderScaling::TMap<bool>::FItem>)0x0;
  piVar1 = &(this->Array).ArrayNum;
  piVar2 = &(this->Array).ArrayMax;
  *piVar1 = 0;
  *piVar2 = 0x10;
  uVar8 = FBudget::GetGlobalListSize();
  iVar12 = *piVar1;
  if (iVar12 < (int)uVar8) {
    iVar9 = UE::Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<DynamicRenderScaling::TMap<bool>::FItem>_>
                      (0x10,8,uVar8 - iVar12,
                       (ForElementType<DynamicRenderScaling::TMap<bool>::FItem> *)this,piVar1,piVar2
                      );
    FVar3 = (this->Array).AllocatorInstance.SecondaryData;
    FVar13 = (ForElementType<DynamicRenderScaling::TMap<bool>::FItem>)this;
    if (FVar3 != (ForElementType<DynamicRenderScaling::TMap<bool>::FItem>)0x0) {
      FVar13 = FVar3;
    }
    DefaultConstructItems<DynamicRenderScaling::TMap<bool>::FItem,int>
              ((void *)((longlong)iVar9 * 0x10 + (longlong)FVar13),uVar8 - iVar12);
  }
  else {
    if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
    }
    if ((int)uVar8 < iVar12) {
      uVar14 = iVar12 - uVar8;
      if (((int)(uVar14 | uVar8) < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        pTVar11 = (TMap<bool> *)(*pcVar6)();
        return pTVar11;
      }
      if (uVar14 != 0) {
        FVar3 = (this->Array).AllocatorInstance.SecondaryData;
        FVar13 = (ForElementType<DynamicRenderScaling::TMap<bool>::FItem>)this;
        if (FVar3 != (ForElementType<DynamicRenderScaling::TMap<bool>::FItem>)0x0) {
          FVar13 = FVar3;
        }
        _Dst = (void *)((longlong)(int)uVar8 * 0x10 + (longlong)FVar13);
        iVar12 = (*piVar1 - uVar14) - uVar8;
        if (iVar12 != 0) {
          memmove(_Dst,(void *)((longlong)(int)uVar14 * 0x10 + (longlong)_Dst),(longlong)iVar12 << 4
                 );
        }
        *piVar1 = *piVar1 - uVar14;
        UE::Core::Private::
        ReallocShrink<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<DynamicRenderScaling::TMap<bool>::FItem>_>
                  (0x10,8,(ForElementType<DynamicRenderScaling::TMap<bool>::FItem> *)this,*piVar1,
                   piVar2);
      }
    }
  }
  ppTVar10 = FBudget::GetGlobalList();
  pTVar4 = *ppTVar10;
  while( true ) {
    if (pTVar4 == (TLinkedList<DynamicRenderScaling::FBudget_*> *)0x0) {
      return this;
    }
    uVar8 = pTVar4->Element->BudgetId;
    pwVar5 = pTVar4->Element->Name;
    uVar14 = 0;
    if ((int)uVar8 < *piVar1) {
      uVar14 = ~uVar8 >> 0x1f;
    }
    if ((uVar14 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) break;
    FVar3 = (this->Array).AllocatorInstance.SecondaryData;
    FVar13 = (ForElementType<DynamicRenderScaling::TMap<bool>::FItem>)this;
    if (FVar3 != (ForElementType<DynamicRenderScaling::TMap<bool>::FItem>)0x0) {
      FVar13 = FVar3;
    }
    *(wchar_t **)((longlong)FVar13 + (longlong)(int)uVar8 * 0x10) = pwVar5;
    pTVar4 = (TLinkedList<DynamicRenderScaling::FBudget_*> *)pTVar4->_padding_;
  }
  pcVar6 = (code *)swi(3);
  pTVar11 = (TMap<bool> *)(*pcVar6)();
  return pTVar11;
}

// operator= @ 145d915f0

TMap<bool> * __thiscall
DynamicRenderScaling::TMap<bool>::operator=(TMap<bool> *this,TMap<bool> *param_1)

{
  int iVar1;
  ForElementType<DynamicRenderScaling::TMap<bool>::FItem> FVar2;
  int *piVar3;
  ForElementType<DynamicRenderScaling::TMap<bool>::FItem> _Dst;
  
  if (this != param_1) {
    FVar2 = (param_1->Array).AllocatorInstance.SecondaryData;
    piVar3 = &(this->Array).ArrayMax;
    iVar1 = (param_1->Array).ArrayNum;
    if (FVar2 != (ForElementType<DynamicRenderScaling::TMap<bool>::FItem>)0x0) {
      param_1 = (TMap<bool> *)FVar2;
    }
    (this->Array).ArrayNum = iVar1;
    if ((iVar1 == 0) && (*piVar3 == 0)) {
      *piVar3 = 0x10;
      return this;
    }
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<DynamicRenderScaling::TMap<bool>::FItem>_>
              (0x10,8,iVar1,*piVar3,(ForElementType<DynamicRenderScaling::TMap<bool>::FItem> *)this,
               iVar1,piVar3);
    FVar2 = (this->Array).AllocatorInstance.SecondaryData;
    _Dst = (ForElementType<DynamicRenderScaling::TMap<bool>::FItem>)this;
    if (FVar2 != (ForElementType<DynamicRenderScaling::TMap<bool>::FItem>)0x0) {
      _Dst = FVar2;
    }
    if (iVar1 != 0) {
      memcpy((void *)_Dst,param_1,(longlong)iVar1 << 4);
    }
  }
  return this;
}

// operator[] @ 145d91940

bool * __thiscall DynamicRenderScaling::TMap<bool>::operator[](TMap<bool> *this,FBudget *param_1)

{
  uint uVar1;
  ForElementType<DynamicRenderScaling::TMap<bool>::FItem> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  bool *pbVar7;
  
  iVar5 = FBudget::GetGlobalListSize();
  if ((this->Array).ArrayNum != iVar5) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Array.Num() == FBudget::GetGlobalListSize()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\DynamicRenderScaling.h"
                       ,0xcf,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pbVar7 = (bool *)(*pcVar3)();
      return pbVar7;
    }
  }
  uVar1 = param_1->BudgetId;
  uVar6 = 0;
  if ((int)uVar1 < (this->Array).ArrayNum) {
    uVar6 = ~uVar1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pbVar7 = (bool *)(*pcVar3)();
      return pbVar7;
    }
  }
  FVar2 = (this->Array).AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<DynamicRenderScaling::TMap<bool>::FItem>)0x0) {
    this = (TMap<bool> *)FVar2;
  }
  return (bool *)((uchar *)((longlong)this + 8) + (longlong)(int)uVar1 * 0x10);
}

// SetAll @ 145dcbc10

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
DynamicRenderScaling::TMap<unsigned___int64>::SetAll(TMap<unsigned___int64> *this,ulong64 *param_1)

{
  ulong64 uVar1;
  ForElementType<DynamicRenderScaling::TMap<unsigned___int64>::FItem> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  ForElementType<DynamicRenderScaling::TMap<unsigned___int64>::FItem> FVar7;
  uint uVar8;
  longlong lVar9;
  
  iVar5 = FBudget::GetGlobalListSize();
  TArray<DynamicRenderScaling::TMap<unsigned___int64>::FItem,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
  ::SetNum(&this->Array,iVar5,Default);
  iVar5 = (this->Array).ArrayNum;
  uVar8 = 0;
  if (0 < iVar5) {
    lVar9 = 0;
    do {
      uVar1 = *param_1;
      uVar6 = 0;
      if ((int)uVar8 < iVar5) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FVar2 = (this->Array).AllocatorInstance.SecondaryData;
      FVar7 = (ForElementType<DynamicRenderScaling::TMap<unsigned___int64>::FItem>)this;
      if (FVar2 != (ForElementType<DynamicRenderScaling::TMap<unsigned___int64>::FItem>)0x0) {
        FVar7 = FVar2;
      }
      uVar8 = uVar8 + 1;
      *(ulong64 *)(lVar9 + 8 + (longlong)FVar7) = uVar1;
      lVar9 = lVar9 + 0x10;
      iVar5 = (this->Array).ArrayNum;
    } while ((int)uVar8 < iVar5);
  }
  return;
}

// Append<FDefaultSetAllocator> @ 145e3a540

void __thiscall
TMap<unsigned_int,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_char,0>_>
::Append<FDefaultSetAllocator>
          (TMap<unsigned_int,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_char,0>_>
           *this,TMap<unsigned_int,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_char,0>_>
                 *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  int iVar14;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  TSet<TTuple<unsigned_int,unsigned_char>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_char,0>,FDefaultSetAllocator>
  ::Reserve((TSet<TTuple<unsigned_int,unsigned_char>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_char,0>,FDefaultSetAllocator>
             *)this,((*(int *)&this->field_0x8 - *(int *)&this->field_0x34) -
                    *(int *)&param_1->field_0x34) + *(int *)&param_1->field_0x8);
  iVar3 = *(int *)&param_1->field_0x28;
  puVar1 = &param_1->field_0x10;
  iVar12 = 0;
  uVar6 = 1;
  iVar14 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar9 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar9 = (uint *)puVar1;
    }
    uVar11 = *puVar9;
    while (uVar11 == 0) {
      lVar8 = (longlong)iVar12;
      iVar14 = iVar14 + 0x20;
      iVar12 = iVar12 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_145e3a5ed;
      uVar11 = puVar9[lVar8 + 1];
    }
    uVar6 = -uVar11 & uVar11;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res10 = (int)lVar8;
    iVar7 = iVar14 + -1 + local_res10;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_145e3a5ed:
  uVar11 = *(uint *)&param_1->field_0x28;
  uVar10 = uVar11 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar12);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar11 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar14;
  uStack_40 = CONCAT44(uStack_6c,*(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&param_1->field_0x28;
  if (uVar11 != uVar6) {
    puVar13 = *(undefined1 **)&param_1->field_0x20;
    if (*(undefined1 **)&param_1->field_0x20 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar12 * 4);
    while (uVar11 == 0) {
      lVar8 = (longlong)iVar12;
      uVar10 = uVar10 + 0x20;
      iVar12 = iVar12 + 1;
      uVar11 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_145e3a6f0;
      uVar11 = *(uint *)(puVar13 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar11 = (int)lVar8 + -1 + uVar10;
    if ((int)uVar6 < (int)uVar11) {
      uVar11 = uVar6;
    }
  }
LAB_145e3a6f0:
  while( true ) {
    if (*(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<unsigned_int,unsigned_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar11) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    puVar9 = (uint *)((longlong)TStack_60.CurrentBitIndex * 0x10 + *(longlong *)param_1);
    TMapBase<unsigned_int,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_char,0>_>
    ::Emplace<unsigned_int_const_&,unsigned_char_const_&>
              ((TMapBase<unsigned_int,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_char,0>_>
                *)this,puVar9,(uchar *)(puVar9 + 1));
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// Append<FDefaultSetAllocator> @ 145e3a770

void __thiscall
TMap<FString,TVariant<bool,float,int,unsigned_int,FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TVariant<bool,float,int,unsigned_int,FString>,0>_>
::Append<FDefaultSetAllocator>
          (TMap<FString,TVariant<bool,float,int,unsigned_int,FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TVariant<bool,float,int,unsigned_int,FString>,0>_>
           *this,TMap<FString,TVariant<bool,float,int,unsigned_int,FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TVariant<bool,float,int,unsigned_int,FString>,0>_>
                 *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  TMap<FString,TVariant<bool,float,int,unsigned_int,FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TVariant<bool,float,int,unsigned_int,FString>,0>_>
  *pTVar6;
  bool bVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  undefined1 *puVar12;
  uint *puVar13;
  undefined1 local_res8 [8];
  int local_res10;
  longlong local_a8;
  longlong local_a0;
  TMap<FString,TVariant<bool,float,int,unsigned_int,FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TVariant<bool,float,int,unsigned_int,FString>,0>_>
  *local_98;
  int iStack_90;
  uint uStack_8c;
  undefined1 *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TMap<FString,TVariant<bool,float,int,unsigned_int,FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TVariant<bool,float,int,unsigned_int,FString>,0>_>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  TSet<TTuple<FString,TVariant<bool,float,int,unsigned_int,FString>_>,TDefaultMapHashableKeyFuncs<FString,TVariant<bool,float,int,unsigned_int,FString>,0>,FDefaultSetAllocator>
  ::Reserve((TSet<TTuple<FString,TVariant<bool,float,int,unsigned_int,FString>_>,TDefaultMapHashableKeyFuncs<FString,TVariant<bool,float,int,unsigned_int,FString>,0>,FDefaultSetAllocator>
             *)this,((*(int *)&this->field_0x8 - *(int *)&this->field_0x34) -
                    *(int *)&param_1->field_0x34) + *(int *)&param_1->field_0x8);
  iVar3 = *(int *)&param_1->field_0x28;
  puVar1 = &param_1->field_0x10;
  iStack_90 = 0;
  uStack_8c = 1;
  local_78 = 0;
  iStack_7c = 0;
  if (iVar3 != 0) {
    puVar13 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar13 = (uint *)puVar1;
    }
    uVar11 = *puVar13;
    while (uVar11 == 0) {
      lVar8 = (longlong)iStack_90;
      local_78 = local_78 + 0x20;
      iStack_90 = iStack_90 + 1;
      iStack_7c = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_90) goto LAB_145e3a82d;
      uVar11 = puVar13[lVar8 + 1];
    }
    uStack_8c = -uVar11 & uVar11;
    uVar2 = (ulonglong)uStack_8c * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res10 = (int)lVar8;
    iStack_7c = local_78 + -1 + local_res10;
    if (iVar3 < iStack_7c) {
      iStack_7c = iVar3;
    }
  }
LAB_145e3a82d:
  uVar11 = *(uint *)&param_1->field_0x28;
  uVar10 = uVar11 & 0xffffffe0;
  iStack_70 = *(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34;
  uStack_80 = 0xffffffff;
  TStack_60._padding_ = CONCAT44(uStack_8c,iStack_90);
  TStack_60.CurrentBitIndex = iStack_7c;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar9 = (int)uVar11 >> 5;
  TStack_60._28_4_ = iStack_7c;
  TStack_60.BaseBitIndex = local_78;
  uStack_40 = CONCAT44(uStack_6c,iStack_70);
  local_98 = param_1;
  local_88 = puVar1;
  iStack_74 = iStack_7c;
  local_68 = param_1;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar4 = *(uint *)&param_1->field_0x28;
  if (uVar11 != uVar4) {
    puVar12 = *(undefined1 **)&param_1->field_0x20;
    if (*(undefined1 **)&param_1->field_0x20 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar9 * 4);
    while (uVar11 == 0) {
      lVar8 = (longlong)iVar9;
      uVar10 = uVar10 + 0x20;
      iVar9 = iVar9 + 1;
      uVar11 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar9) goto LAB_145e3a930;
      uVar11 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar11 = (int)lVar8 + -1 + uVar10;
    if ((int)uVar4 < (int)uVar11) {
      uVar11 = uVar4;
    }
  }
LAB_145e3a930:
  while( true ) {
    pTVar6 = local_68;
    if (*(int *)&local_68->field_0x8 - *(int *)&local_68->field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FString,TVariant<bool,float,int,unsigned_int,FString>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_60.CurrentBitIndex == uVar11) &&
        (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar6 == param_1))
    break;
    local_a8 = *(longlong *)pTVar6 + (longlong)TStack_60.CurrentBitIndex * 0x30;
    local_a0 = local_a8 + 0x10;
    TSet<TTuple<FString,TVariant<bool,float,int,unsigned_int,FString>_>,TDefaultMapHashableKeyFuncs<FString,TVariant<bool,float,int,unsigned_int,FString>,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<FString_const_&,TVariant<bool,float,int,unsigned_int,FString>_const_&>_>
              ((TSet<TTuple<FString,TVariant<bool,float,int,unsigned_int,FString>_>,TDefaultMapHashableKeyFuncs<FString,TVariant<bool,float,int,unsigned_int,FString>,0>,FDefaultSetAllocator>
                *)this,(TPairInitializer<FString_const_&,TVariant<bool,float,int,unsigned_int,FString>_const_&>
                        *)&stack0x00000018,(bool *)&local_a8);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// TMap<int,FShaderLibraryInstance::FCachedRHIShader,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FShaderLibraryInstance::FCachedRHIShader,0>_> @ 145e402e0

TMap<int,FShaderLibraryInstance::FCachedRHIShader,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FShaderLibraryInstance::FCachedRHIShader,0>_>
* __thiscall
TMap<int,FShaderLibraryInstance::FCachedRHIShader,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FShaderLibraryInstance::FCachedRHIShader,0>_>
::
TMap<int,FShaderLibraryInstance::FCachedRHIShader,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FShaderLibraryInstance::FCachedRHIShader,0>_>
          (TMap<int,FShaderLibraryInstance::FCachedRHIShader,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FShaderLibraryInstance::FCachedRHIShader,0>_>
           *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x20 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  *(undefined4 *)&this->field_0x2c = 0x80;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined8 *)&this->field_0x40 = 0;
  *(undefined4 *)&this->field_0x48 = 0;
  return this;
}

// TMap<FString,enum_ECompilerFlags,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,enum_ECompilerFlags,0>_> @ 145e40320

TMap<FString,ECompilerFlags,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,ECompilerFlags,0>_>
* __thiscall
TMap<FString,enum_ECompilerFlags,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,enum_ECompilerFlags,0>_>
::
TMap<FString,enum_ECompilerFlags,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,enum_ECompilerFlags,0>_>
          (void *this,
          initializer_list<TPairInitializer<FString_const_&,ECompilerFlags_const_&>_> *param_1)

{
  TPairInitializer<FString_const_&,ECompilerFlags_const_&> *pTVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar7;
  wchar_t *pwVar8;
  TPairInitializer<FString_const_&,ECompilerFlags_const_&> *pTVar9;
  uint uVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  TBitArray<FDefaultBitArrayAllocator> *pTVar13;
  undefined8 local_78;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_70;
  undefined4 local_68;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  longlong *local_58;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  ulonglong uVar6;
  
  pTVar1 = param_1->_Last;
  uVar6 = 0;
  pTVar9 = param_1->_First;
  *(undefined8 *)this = 0;
  *(undefined8 *)((longlong)this + 8) = 0;
  *(undefined8 *)((longlong)this + 0x20) = 0;
  *(undefined4 *)((longlong)this + 0x28) = 0;
  *(undefined4 *)((longlong)this + 0x2c) = 0x80;
  *(undefined4 *)((longlong)this + 0x30) = 0xffffffff;
  *(undefined4 *)((longlong)this + 0x34) = 0;
  *(undefined8 *)((longlong)this + 0x40) = 0;
  *(undefined4 *)((longlong)this + 0x48) = 0;
  uVar10 = (uint)((longlong)pTVar1 - (longlong)pTVar9 >> 4);
  if (uVar10 == 0) goto joined_r0x000145e405a2;
  if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar10);
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve(this,uVar10);
  if (uVar10 < 4) {
    uVar10 = 1;
  }
  else {
    uVar7 = (ulonglong)((uVar10 >> 1) + 7) * 2 + 1;
    lVar5 = 0x3f;
    if (uVar7 != 0) {
      for (; uVar7 >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    uVar10 = 1 << ((byte)lVar5 & 0x1f);
  }
  if ((*(int *)((longlong)this + 0x48) != 0) && ((int)uVar10 <= *(int *)((longlong)this + 0x48)))
  goto joined_r0x000145e405a2;
  *(uint *)((longlong)this + 0x48) = uVar10;
  if (*(longlong *)((longlong)this + 0x40) != 0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)((longlong)this + 0x40),0,0,4);
  }
  if (uVar10 != 0) {
    uVar4 = uVar10;
    if (uVar10 < 2) {
      if (*(longlong *)((longlong)this + 0x40) != 0) {
        uVar4 = 0;
        goto LAB_145e403fd;
      }
    }
    else {
LAB_145e403fd:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)((longlong)this + 0x40),0,uVar4,4);
    }
    if (0 < (int)uVar10) {
      uVar12 = (ulonglong)uVar10;
      uVar7 = uVar6;
      do {
        lVar5 = (longlong)this + 0x38;
        if (*(longlong *)((longlong)this + 0x40) != 0) {
          lVar5 = *(longlong *)((longlong)this + 0x40);
        }
        uVar2 = uVar7 & (longlong)(int)uVar10 - 1U;
        uVar7 = uVar7 + 1;
        *(undefined4 *)(lVar5 + uVar2 * 4) = 0xffffffff;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
  }
  if (*(int *)((longlong)this + 0x48) != 0) {
    uVar10 = *(uint *)((longlong)this + 0x28);
    pTStack_70 = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x10);
    local_78 = (FString *)0x100000000;
    uStack_64 = 0;
    uStack_60 = 0;
    if (uVar10 != 0) {
      pTVar13 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x20);
      if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x20) ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar13 = pTStack_70;
      }
      uVar4 = *(uint *)(pTVar13->AllocatorInstance).InlineData;
      uVar7 = uVar6;
      while (uVar4 == 0) {
        uStack_60 = (int)uVar7 + 0x20;
        uVar7 = (ulonglong)uStack_60;
        iVar3 = (int)uVar6;
        uVar4 = iVar3 + 1;
        uVar6 = (ulonglong)uVar4;
        uVar12 = (ulonglong)local_78 >> 0x20;
        local_78 = (FString *)CONCAT44((int)uVar12,uVar4);
        if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar4)
        goto LAB_145e404e9;
        uVar4 = *(uint *)((pTVar13->AllocatorInstance).InlineData + (longlong)iVar3 * 4 + 4);
      }
      local_78 = (FString *)CONCAT44(-uVar4 & uVar4,SUB84(local_78,0));
      uVar6 = (ulonglong)(-uVar4 & uVar4) * 2 + 1;
      lVar5 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      uStack_64 = (int)lVar5 + -1 + uStack_60;
      uVar6 = (ulonglong)uStack_64;
      if ((int)uVar10 < (int)uStack_64) {
LAB_145e404e9:
        uVar6 = (ulonglong)uVar10;
        uStack_64 = uVar10;
      }
    }
    local_68 = 0xffffffff;
    local_50.CurrentBitIndex = uStack_64;
    local_50.UnvisitedBitMask = 0xffffffff;
    local_50._28_4_ = uStack_5c;
    local_50.BaseBitIndex = uStack_60;
    local_50._padding_ = (longlong)local_78;
    local_58 = this;
    local_50.Array = pTStack_70;
    if ((int)uVar6 < (int)uVar10) {
      do {
        puVar11 = (undefined8 *)((longlong)(int)uVar6 * 0x20 + *local_58);
        iVar3 = *(int *)(puVar11 + 1) + -1;
        if (*(int *)(puVar11 + 1) == 0) {
          pwVar8 = L"";
          iVar3 = 0;
        }
        else {
          pwVar8 = (wchar_t *)*puVar11;
        }
        uVar10 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,pwVar8);
        uVar10 = *(int *)((longlong)this + 0x48) - 1U & uVar10;
        *(uint *)((longlong)puVar11 + 0x1c) = uVar10;
        lVar5 = (longlong)this + 0x38;
        if (*(longlong *)((longlong)this + 0x40) != 0) {
          lVar5 = *(longlong *)((longlong)this + 0x40);
        }
        uVar7 = (longlong)*(int *)((longlong)this + 0x48) - 1U & (longlong)(int)uVar10;
        *(undefined4 *)(puVar11 + 3) = *(undefined4 *)(lVar5 + uVar7 * 4);
        *(int *)(lVar5 + uVar7 * 4) = (int)uVar6;
        local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
        uVar6 = (ulonglong)(uint)local_50.CurrentBitIndex;
      } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
    }
  }
joined_r0x000145e405a2:
  for (; pTVar9 != pTVar1; pTVar9 = pTVar9 + 1) {
    local_78 = pTVar9->Key;
    pTStack_70 = (TBitArray<FDefaultBitArrayAllocator> *)pTVar9->Value;
    TSet<TTuple<FString,enum_ECompilerFlags>,TDefaultMapHashableKeyFuncs<FString,enum_ECompilerFlags,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_const_&,enum_ECompilerFlags_const_&>_>
              (this,(TPairInitializer<FString_const_&,ECompilerFlags_const_&> *)&stack0x00000008,
               (bool *)&local_78);
  }
  return this;
}

// ~TMap<int,FShaderLibraryInstance::FCachedRHIShader,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FShaderLibraryInstance::FCachedRHIShader,0>_> @ 145e42f70

void __thiscall
TMap<int,FShaderLibraryInstance::FCachedRHIShader,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FShaderLibraryInstance::FCachedRHIShader,0>_>
::
~TMap<int,FShaderLibraryInstance::FCachedRHIShader,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FShaderLibraryInstance::FCachedRHIShader,0>_>
          (TMap<int,FShaderLibraryInstance::FCachedRHIShader,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FShaderLibraryInstance::FCachedRHIShader,0>_>
           *this)

{
  *(undefined4 *)&this->field_0x48 = 0;
  if (*(void **)&this->field_0x40 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x40);
  }
  TSparseArray<TSparseSetElement<TTuple<int,FShaderLibraryInstance::FCachedRHIShader>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,FShaderLibraryInstance::FCachedRHIShader>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,FShaderLibraryInstance::FCachedRHIShader>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}

// RemoveAndCopyValue @ 145e6ae90

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
TMap<FString,TUniquePtr<UE::ShaderLibrary::Private::FNamedShaderLibrary,TDefaultDelete<UE::ShaderLibrary::Private::FNamedShaderLibrary>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::ShaderLibrary::Private::FNamedShaderLibrary,TDefaultDelete<UE::ShaderLibrary::Private::FNamedShaderLibrary>_>,0>_>
::RemoveAndCopyValue
          (TMap<FString,TUniquePtr<UE::ShaderLibrary::Private::FNamedShaderLibrary,TDefaultDelete<UE::ShaderLibrary::Private::FNamedShaderLibrary>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::ShaderLibrary::Private::FNamedShaderLibrary,TDefaultDelete<UE::ShaderLibrary::Private::FNamedShaderLibrary>_>,0>_>
           *this,FString *param_1,
          TUniquePtr<UE::ShaderLibrary::Private::FNamedShaderLibrary,TDefaultDelete<UE::ShaderLibrary::Private::FNamedShaderLibrary>_>
          *param_2)

{
  int iVar1;
  uint uVar2;
  FNamedShaderLibrary *this_00;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  undefined1 *puVar8;
  wchar_t *pwVar9;
  TUniquePtr<UE::ShaderLibrary::Private::FNamedShaderLibrary,TDefaultDelete<UE::ShaderLibrary::Private::FNamedShaderLibrary>_>
  *pTVar10;
  uint *puVar11;
  longlong lVar12;
  
  iVar1 = (param_1->Data).ArrayNum;
  iVar7 = iVar1 + -1;
  if (iVar1 == 0) {
    pwVar9 = L"";
    iVar7 = 0;
  }
  else {
    pwVar9 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar7,pwVar9);
  uVar6 = TSet<TTuple<FString,TUniquePtr<UE::ShaderLibrary::Private::FNamedShaderLibrary,TDefaultDelete<UE::ShaderLibrary::Private::FNamedShaderLibrary>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::ShaderLibrary::Private::FNamedShaderLibrary,TDefaultDelete<UE::ShaderLibrary::Private::FNamedShaderLibrary>_>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,TUniquePtr<UE::ShaderLibrary::Private::FNamedShaderLibrary,TDefaultDelete<UE::ShaderLibrary::Private::FNamedShaderLibrary>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::ShaderLibrary::Private::FNamedShaderLibrary,TDefaultDelete<UE::ShaderLibrary::Private::FNamedShaderLibrary>_>,0>,FDefaultSetAllocator>
                      *)this,uVar6,param_1);
  if (uVar6 == 0xffffffff) {
    return false;
  }
  pTVar10 = (TUniquePtr<UE::ShaderLibrary::Private::FNamedShaderLibrary,TDefaultDelete<UE::ShaderLibrary::Private::FNamedShaderLibrary>_>
             *)(*(longlong *)this + 0x10 + (longlong)(int)uVar6 * 0x20);
  if (param_2 != pTVar10) {
    this_00 = param_2->Ptr;
    param_2->Ptr = pTVar10->Ptr;
    pTVar10->Ptr = (FNamedShaderLibrary *)0x0;
    if (this_00 != (FNamedShaderLibrary *)0x0) {
      UE::ShaderLibrary::Private::FNamedShaderLibrary::_scalar_deleting_destructor_(this_00,1);
    }
  }
  if ((-1 < (int)uVar6) && ((int)uVar6 < *(int *)&this->field_0x28)) {
    puVar8 = *(undefined1 **)&this->field_0x20;
    if (*(undefined1 **)&this->field_0x20 == (undefined1 *)0x0) {
      puVar8 = &this->field_0x10;
    }
    if ((*(uint *)(puVar8 + (longlong)((int)(uVar6 + ((int)uVar6 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar6 & 0x1f) & 1) != 0) goto LAB_145e6af7c;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Elements.IsValidIndex(ElementIndex)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                     ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
LAB_145e6af7c:
  lVar12 = *(longlong *)this + (longlong)(int)uVar6 * 0x20;
  puVar8 = *(undefined1 **)&this->field_0x40;
  if (*(undefined1 **)&this->field_0x40 == (undefined1 *)0x0) {
    puVar8 = &this->field_0x38;
  }
  puVar11 = (uint *)(puVar8 + (longlong)*(int *)(lVar12 + 0x1c) * 4);
  do {
    uVar2 = *puVar11;
    if (uVar2 == 0xffffffff) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NextElementIndex != INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                         ,0x2b5,L"Corrupt hash");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    else if (uVar2 == uVar6) {
      *puVar11 = *(uint *)(lVar12 + 0x18);
      TSparseArray<TSparseSetElement<TTuple<FString,TUniquePtr<UE::ShaderLibrary::Private::FNamedShaderLibrary,TDefaultDelete<UE::ShaderLibrary::Private::FNamedShaderLibrary>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,TUniquePtr<UE::ShaderLibrary::Private::FNamedShaderLibrary,TDefaultDelete<UE::ShaderLibrary::Private::FNamedShaderLibrary>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)this,uVar6,1);
      TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,uVar6,1);
      return true;
    }
    puVar11 = (uint *)(*(longlong *)this + 0x18 + (longlong)(int)uVar2 * 0x20);
  } while( true );
}

