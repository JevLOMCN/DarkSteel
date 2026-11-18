// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ImgMedia
// Functions: 4

// Add @ 14ea40aa0

void __thiscall
TLruCache<int,TSharedPtr<FImgMediaFrame,1>,DefaultKeyComparer<int>_>::Add
          (TLruCache<int,TSharedPtr<FImgMediaFrame,1>,DefaultKeyComparer<int>_> *this,int *param_1,
          TSharedPtr<FImgMediaFrame,1> *param_2)

{
  int iVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  FImgMediaFrame *pFVar4;
  code *pcVar5;
  TReferenceControllerBase<1> *pTVar6;
  bool bVar7;
  int iVar8;
  FCacheEntry *pFVar9;
  FCacheEntry *pFVar10;
  undefined8 *puVar11;
  ForElementType<FSetElementId> FVar12;
  FCacheEntry *local_res8;
  FCacheEntry *local_res10;
  
  if ((this->MaxNumElements == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("MaxNumElements != 0 && \"Cannot add values to zero size TLruCache\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\LruCache.h"
                         ,0xaf,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar1 = *(int *)&(this->LookupSet).Elements.field_0x8;
  iVar2 = *(int *)&(this->LookupSet).Elements.field_0x34;
  if (iVar1 != iVar2) {
    FVar12 = (this->LookupSet).Hash.SecondaryData;
    if (FVar12 == (ForElementType<FSetElementId>)0x0) {
      FVar12 = (ForElementType<FSetElementId>)&(this->LookupSet).Hash;
    }
    iVar8 = *(int *)((longlong)FVar12 + (ulonglong)((this->LookupSet).HashSize - 1U & *param_1) * 4)
    ;
    if (iVar8 != -1) {
      do {
        puVar11 = (undefined8 *)((longlong)iVar8 * 0x10 + *(longlong *)&(this->LookupSet).Elements);
        pFVar10 = (FCacheEntry *)*puVar11;
        if (pFVar10->Key == *param_1) {
          if (puVar11 != (undefined8 *)0x0) {
            pTVar3 = (param_2->SharedReferenceCount).ReferenceController;
            pFVar4 = param_2->Object;
            if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
              UNLOCK();
            }
            pTVar6 = (pFVar10->Value).SharedReferenceCount.ReferenceController;
            (pFVar10->Value).Object = pFVar4;
            (pFVar10->Value).SharedReferenceCount.ReferenceController = pTVar3;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar6);
            MarkAsRecent(this,pFVar10);
            return;
          }
          break;
        }
        iVar8 = *(int *)(puVar11 + 1);
      } while (iVar8 != -1);
    }
  }
  pFVar10 = (FCacheEntry *)0x0;
  if ((iVar1 - iVar2 == this->MaxNumElements) &&
     (pFVar9 = this->LeastRecent, pFVar9 != (FCacheEntry *)0x0)) {
    TSet<TLruCache<int,TSharedPtr<FImgMediaFrame,1>,DefaultKeyComparer<int>_>::FCacheEntry_*,TLruCache<int,TSharedPtr<FImgMediaFrame,1>,DefaultKeyComparer<int>_>::FKeyFuncs,FDefaultSetAllocator>
    ::Remove(&this->LookupSet,pFVar9->Key);
    if (pFVar9 == this->LeastRecent) {
      this->LeastRecent = pFVar9->MoreRecent;
    }
    if (pFVar9 == this->MostRecent) {
      this->MostRecent = pFVar9->LessRecent;
    }
    if (pFVar9->LessRecent != (FCacheEntry *)0x0) {
      pFVar9->LessRecent->MoreRecent = pFVar9->MoreRecent;
    }
    if (pFVar9->MoreRecent != (FCacheEntry *)0x0) {
      pFVar9->MoreRecent->LessRecent = pFVar9->LessRecent;
    }
    pTVar3 = (pFVar9->Value).SharedReferenceCount.ReferenceController;
    pFVar9->LessRecent = (FCacheEntry *)0x0;
    pFVar9->MoreRecent = (FCacheEntry *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    ::operator_delete(pFVar9,0x28);
  }
  pFVar9 = ::operator_new(0x28);
  if (pFVar9 != (FCacheEntry *)0x0) {
    pFVar9->Key = *param_1;
    pFVar9->LessRecent = (FCacheEntry *)0x0;
    pFVar9->MoreRecent = (FCacheEntry *)0x0;
    (pFVar9->Value).Object = param_2->Object;
    pTVar3 = (param_2->SharedReferenceCount).ReferenceController;
    (pFVar9->Value).SharedReferenceCount.ReferenceController = pTVar3;
    pFVar10 = pFVar9;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  pFVar9 = this->MostRecent;
  pFVar10->LessRecent = pFVar9;
  if (pFVar9 != (FCacheEntry *)0x0) {
    pFVar9->MoreRecent = pFVar10;
  }
  this->MostRecent = pFVar10;
  if (this->LeastRecent == (FCacheEntry *)0x0) {
    this->LeastRecent = pFVar10;
  }
  local_res10 = pFVar10;
  TSet<TLruCache<int,TSharedPtr<FImgMediaFrame,1>,DefaultKeyComparer<int>_>::FCacheEntry_*,TLruCache<int,TSharedPtr<FImgMediaFrame,1>,DefaultKeyComparer<int>_>::FKeyFuncs,FDefaultSetAllocator>
  ::
  Emplace<TLruCache<int,TSharedPtr<FImgMediaFrame,1>,DefaultKeyComparer<int>_>::FCacheEntry_*_const_&>
            (&this->LookupSet,&local_res8,(bool *)&local_res10);
  return;
}

// Empty @ 14ea478d0

void __thiscall
TLruCache<int,TSharedPtr<FImgMediaFrame,1>,DefaultKeyComparer<int>_>::Empty
          (TLruCache<int,TSharedPtr<FImgMediaFrame,1>,DefaultKeyComparer<int>_> *this,int param_1)

{
  undefined1 *puVar1;
  int *piVar2;
  ulonglong uVar3;
  int iVar4;
  void *pvVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  int iVar14;
  uint *puVar15;
  int iVar16;
  uint uVar17;
  undefined1 local_res8 [8];
  uint local_res10;
  int local_res18;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar4 = *(int *)&(this->LookupSet).Elements.field_0x28;
  puVar1 = &(this->LookupSet).Elements.field_0x10;
  iVar12 = 0;
  iVar14 = 0;
  iVar16 = 1;
  iVar9 = 0;
  uVar8 = 1;
  if (iVar4 != 0) {
    puVar15 = *(uint **)&(this->LookupSet).Elements.field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar8 = *puVar15;
    while (uVar8 == 0) {
      lVar10 = (longlong)iVar12;
      iVar14 = iVar14 + 0x20;
      iVar12 = iVar12 + 1;
      iVar9 = iVar4;
      uVar8 = 1;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14ea4796e;
      uVar8 = puVar15[lVar10 + 1];
    }
    uVar8 = -uVar8 & uVar8;
    uVar3 = (ulonglong)uVar8 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_res18 = (int)lVar10;
    iVar9 = local_res18 + -1 + iVar14;
    if (iVar4 < iVar9) {
      iVar9 = iVar4;
    }
  }
LAB_14ea4796e:
  uVar11 = *(uint *)&(this->LookupSet).Elements.field_0x28;
  uVar17 = uVar11 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar8,iVar12);
  TStack_60.CurrentBitIndex = iVar9;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar11 >> 5;
  TStack_60._28_4_ = iVar9;
  TStack_60.BaseBitIndex = iVar14;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->LookupSet).Elements.field_0x8 -
                       *(int *)&(this->LookupSet).Elements.field_0x34);
  local_res10 = param_1;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar4 < (int)uVar11)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar8 = *(uint *)&(this->LookupSet).Elements.field_0x28;
  if (uVar11 != uVar8) {
    puVar13 = *(undefined1 **)&(this->LookupSet).Elements.field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar12 * 4);
    while (uVar11 == 0) {
      lVar10 = (longlong)iVar12;
      uVar17 = uVar17 + 0x20;
      iVar12 = iVar12 + 1;
      uVar11 = uVar8;
      if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14ea47a70;
      uVar11 = *(uint *)(puVar13 + lVar10 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar11 = (int)lVar10 + -1 + uVar17;
    if ((int)uVar8 < (int)uVar11) {
      uVar11 = uVar8;
    }
  }
LAB_14ea47a70:
  while( true ) {
    if (*(int *)&(this->LookupSet).Elements.field_0x8 -
        *(int *)&(this->LookupSet).Elements.field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TLruCache<int,TSharedPtr<FImgMediaFrame,1>,DefaultKeyComparer<int>_>::FCacheEntry_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar11) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    pvVar5 = *(void **)(*(longlong *)&(this->LookupSet).Elements +
                       (longlong)TStack_60.CurrentBitIndex * 0x10);
    if (pvVar5 != (void *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<1> **)((longlong)pvVar5 + 0x20));
      ::operator_delete(pvVar5,0x28);
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  this->MaxNumElements = local_res10;
  uVar8 = 0;
  if (0 < (int)local_res10) {
    uVar8 = local_res10;
  }
  if (3 < uVar8) {
    uVar3 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iVar16 = 1 << ((byte)lVar10 & 0x1f);
  }
  piVar2 = &(this->LookupSet).HashSize;
  if ((((int)uVar8 < 1) || (iVar16 <= *piVar2)) && (*piVar2 <= iVar16)) {
    TSet<TLruCache<int,TSharedPtr<FImgMediaFrame,1>,DefaultKeyComparer<int>_>::FCacheEntry_*,TLruCache<int,TSharedPtr<FImgMediaFrame,1>,DefaultKeyComparer<int>_>::FKeyFuncs,FDefaultSetAllocator>
    ::UnhashElements(&this->LookupSet);
    TSparseArray<TSparseSetElement<TLruCache<int,TSharedPtr<FImgMediaFrame,1>,DefaultKeyComparer<int>_>::FCacheEntry_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty((TSparseArray<TSparseSetElement<TLruCache<int,TSharedPtr<FImgMediaFrame,1>,DefaultKeyComparer<int>_>::FCacheEntry_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)this,uVar8);
  }
  else {
    TSparseArray<TSparseSetElement<TLruCache<int,TSharedPtr<FImgMediaFrame,1>,DefaultKeyComparer<int>_>::FCacheEntry_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty((TSparseArray<TSparseSetElement<TLruCache<int,TSharedPtr<FImgMediaFrame,1>,DefaultKeyComparer<int>_>::FCacheEntry_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)this,uVar8);
    *piVar2 = iVar16;
    TSet<TLruCache<int,TSharedPtr<FImgMediaFrame,1>,DefaultKeyComparer<int>_>::FCacheEntry_*,TLruCache<int,TSharedPtr<FImgMediaFrame,1>,DefaultKeyComparer<int>_>::FKeyFuncs,FDefaultSetAllocator>
    ::Rehash(&this->LookupSet);
  }
  this->LeastRecent = (FCacheEntry *)0x0;
  this->MostRecent = (FCacheEntry *)0x0;
  return;
}

// GetKeys @ 14ea4cc40

void __thiscall
TLruCache<int,TSharedPtr<FImgMediaFrame,1>,DefaultKeyComparer<int>_>::GetKeys
          (TLruCache<int,TSharedPtr<FImgMediaFrame,1>,DefaultKeyComparer<int>_> *this,
          TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  int iVar14;
  uint *puVar15;
  uint uVar16;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar9 = *(int *)&(this->LookupSet).Elements.field_0x28;
  puVar1 = &(this->LookupSet).Elements.field_0x10;
  iVar12 = 0;
  uVar7 = 1;
  iVar14 = 0;
  iVar8 = 0;
  if (iVar9 != 0) {
    puVar15 = *(uint **)&(this->LookupSet).Elements.field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar11 = *puVar15;
    while (uVar11 == 0) {
      lVar10 = (longlong)iVar12;
      iVar14 = iVar14 + 0x20;
      iVar12 = iVar12 + 1;
      iVar8 = iVar9;
      if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14ea4ccde;
      uVar11 = puVar15[lVar10 + 1];
    }
    uVar7 = -uVar11 & uVar11;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iVar8 = (int)lVar10 + -1 + iVar14;
    if (iVar9 < iVar8) {
      iVar8 = iVar9;
    }
  }
LAB_14ea4ccde:
  uVar11 = *(uint *)&(this->LookupSet).Elements.field_0x28;
  uVar16 = uVar11 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar7,iVar12);
  TStack_60.CurrentBitIndex = iVar8;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar11 >> 5;
  TStack_60._28_4_ = iVar8;
  TStack_60.BaseBitIndex = iVar14;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->LookupSet).Elements.field_0x8 -
                       *(int *)&(this->LookupSet).Elements.field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar9 < (int)uVar11)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar7 = *(uint *)&(this->LookupSet).Elements.field_0x28;
  if (uVar11 != uVar7) {
    puVar13 = *(undefined1 **)&(this->LookupSet).Elements.field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar12 * 4);
    while (uVar11 == 0) {
      lVar10 = (longlong)iVar12;
      uVar16 = uVar16 + 0x20;
      iVar12 = iVar12 + 1;
      uVar11 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14ea4cde0;
      uVar11 = *(uint *)(puVar13 + lVar10 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar11 = (int)lVar10 + -1 + uVar16;
    if ((int)uVar7 < (int)uVar11) {
      uVar11 = uVar7;
    }
  }
LAB_14ea4cde0:
  while( true ) {
    if (*(int *)&(this->LookupSet).Elements.field_0x8 -
        *(int *)&(this->LookupSet).Elements.field_0x34 != (int)uStack_40) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TLruCache<int,TSharedPtr<FImgMediaFrame,1>,DefaultKeyComparer<int>_>::FCacheEntry_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar11) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    pFVar3 = *(FScriptContainerElement **)
              (*(longlong *)&(this->LookupSet).Elements + (longlong)TStack_60.CurrentBitIndex * 0x10
              );
    pFVar4 = (param_1->AllocatorInstance).Data;
    if (((pFVar4 <= pFVar3) && (pFVar3 < pFVar4 + (longlong)param_1->ArrayMax * 4)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar9 = param_1->ArrayNum;
    if (iVar9 == param_1->ArrayMax) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&param_1->AllocatorInstance,&param_1->ArrayMax);
    }
    param_1->ArrayNum = iVar9 + 1;
    *(undefined4 *)((param_1->AllocatorInstance).Data + (longlong)iVar9 * 4) = *(undefined4 *)pFVar3
    ;
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// MarkAsRecent @ 14ea531b0

void __thiscall
TLruCache<int,TSharedPtr<FImgMediaFrame,1>,DefaultKeyComparer<int>_>::MarkAsRecent
          (TLruCache<int,TSharedPtr<FImgMediaFrame,1>,DefaultKeyComparer<int>_> *this,
          FCacheEntry *param_1)

{
  FCacheEntry *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  if (this->LeastRecent == (FCacheEntry *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("LeastRecent != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\LruCache.h"
                       ,0x311,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (this->MostRecent == (FCacheEntry *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("MostRecent != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\LruCache.h"
                       ,0x312,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((param_1 == this->LeastRecent) &&
     (pFVar1 = this->LeastRecent->MoreRecent, pFVar1 != (FCacheEntry *)0x0)) {
    this->LeastRecent = pFVar1;
  }
  if (param_1 != this->MostRecent) {
    if (param_1->LessRecent != (FCacheEntry *)0x0) {
      param_1->LessRecent->MoreRecent = param_1->MoreRecent;
    }
    if (param_1->MoreRecent != (FCacheEntry *)0x0) {
      param_1->MoreRecent->LessRecent = param_1->LessRecent;
    }
    param_1->LessRecent = (FCacheEntry *)0x0;
    param_1->MoreRecent = (FCacheEntry *)0x0;
    pFVar1 = this->MostRecent;
    param_1->LessRecent = pFVar1;
    if (pFVar1 != (FCacheEntry *)0x0) {
      pFVar1->MoreRecent = param_1;
    }
    this->MostRecent = param_1;
  }
  return;
}

