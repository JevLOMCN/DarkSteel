// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 52

// ~FSlateInvalidationWidgetList @ 14242f4d0

void __thiscall
FSlateInvalidationWidgetList::~FSlateInvalidationWidgetList(FSlateInvalidationWidgetList *this)

{
  atomic<int> *paVar1;
  undefined1 *puVar2;
  atomic<int> aVar3;
  int iVar4;
  TReferenceControllerBase<1> *pTVar5;
  void *pvVar6;
  
  pTVar5 = (this->Root).WeakReferenceCount.ReferenceController;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar5->WeakReferenceCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)(pTVar5->_padding_ + 8))();
    }
  }
  TSparseArray<FSlateInvalidationWidgetList::FArrayNode,FDefaultSparseArrayAllocator>::
  DestroyElements(&this->Data,0,*(int *)&(this->Data).field_0x8);
  puVar2 = &(this->Data).field_0xc;
  *(undefined4 *)&(this->Data).field_0x8 = 0;
  if (*(int *)puVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,0,(ForAnyElementType *)&this->Data,0,(int *)puVar2);
  }
  *(undefined4 *)&(this->Data).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Data).field_0x34 = 0;
  iVar4 = *(int *)&(this->Data).field_0x2c;
  *(undefined4 *)&(this->Data).field_0x28 = 0;
  if ((iVar4 < 0) || (0x80 < iVar4)) {
    *(undefined4 *)&(this->Data).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Data).field_0x10,0);
  }
  pvVar6 = *(void **)&(this->Data).field_0x20;
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  if (*(void **)&this->Data != (void *)0x0) {
    FMemory::Free(*(void **)&this->Data);
  }
  return;
}

// operator[] @ 14242f6b0

FWidgetProxy * __thiscall
FSlateInvalidationWidgetList::operator[]
          (FSlateInvalidationWidgetList *this,FSlateInvalidationWidgetIndex param_1)

{
  code *pcVar1;
  bool bVar2;
  FWidgetProxy *pFVar3;
  longlong lVar4;
  
  lVar4 = (ulonglong)param_1.ArrayIndex * 0x40 + *(longlong *)&this->Data;
  if (*(int *)(lVar4 + 0x18) <= (int)((uint)param_1 >> 0x10)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FWidgetProxy *)(*pcVar1)();
      return pFVar3;
    }
  }
  return (FWidgetProxy *)(*(longlong *)(lVar4 + 0x10) + (ulonglong)((uint)param_1 >> 0x10) * 0x18);
}

// operator[] @ 14242f730

FWidgetProxy * __thiscall
FSlateInvalidationWidgetList::operator[]
          (FSlateInvalidationWidgetList *this,FSlateInvalidationWidgetIndex param_1)

{
  code *pcVar1;
  bool bVar2;
  FWidgetProxy *pFVar3;
  longlong lVar4;
  
  lVar4 = (ulonglong)param_1.ArrayIndex * 0x40 + *(longlong *)&this->Data;
  if (*(int *)(lVar4 + 0x18) <= (int)((uint)param_1 >> 0x10)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FWidgetProxy *)(*pcVar1)();
      return pFVar3;
    }
  }
  return (FWidgetProxy *)(*(longlong *)(lVar4 + 0x10) + (ulonglong)((uint)param_1 >> 0x10) * 0x18);
}

// IsValidIndex @ 142445c10

bool __thiscall
FSlateInvalidationWidgetList::IsValidIndex
          (FSlateInvalidationWidgetList *this,FSlateInvalidationWidgetIndex param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  undefined1 *puVar4;
  longlong lVar5;
  ushort uStackX_12;
  
  if ((int)((uint)param_1 & 0xffff) < *(int *)&(this->Data).field_0x28) {
    if (*(int *)&(this->Data).field_0x28 <= (int)((uint)param_1 & 0xffff)) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5c6,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    puVar4 = *(undefined1 **)&(this->Data).field_0x20;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->Data).field_0x10;
    }
    if ((*(uint *)(puVar4 + (ulonglong)(ushort)(param_1.ArrayIndex >> 5) * 4) >>
         ((uint)param_1 & 0x1f) & 1) != 0) {
      uStackX_12 = param_1.ElementIndex;
      lVar5 = (ulonglong)((uint)param_1 & 0xffff) * 0x40 + *(longlong *)&this->Data;
      if ((*(ushort *)(lVar5 + 0xc) <= uStackX_12) &&
         ((int)(uint)uStackX_12 < *(int *)(lVar5 + 0x18))) {
        return true;
      }
    }
  }
  return false;
}

// FSlateInvalidationWidgetList @ 142476a90

FSlateInvalidationWidgetList * __thiscall
FSlateInvalidationWidgetList::FSlateInvalidationWidgetList
          (FSlateInvalidationWidgetList *this,FSlateInvalidationRootHandle *param_1,
          FArguments *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  bool bVar4;
  undefined3 uVar5;
  FSlateInvalidationWidgetList *local_res8 [4];
  
  iVar1 = param_1->UniqueId;
  uVar3 = *(undefined4 *)&param_1->field_0xc;
  (this->Owner).InvalidationRoot = param_1->InvalidationRoot;
  (this->Owner).UniqueId = iVar1;
  *(undefined4 *)&(this->Owner).field_0xc = uVar3;
  *(undefined8 *)&this->Data = 0;
  *(undefined8 *)&(this->Data).field_0x8 = 0;
  *(undefined8 *)&(this->Data).field_0x20 = 0;
  *(undefined4 *)&(this->Data).field_0x28 = 0;
  *(undefined4 *)&(this->Data).field_0x2c = 0x80;
  *(undefined4 *)&(this->Data).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Data).field_0x34 = 0;
  (this->Root).Object = (SWidget *)0x0;
  (this->Root).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->FirstArrayIndex = -1;
  this->LastArrayIndex = -1;
  this->NumberOfLock = 0;
  this->CurrentInvalidationCallback = (IProcessChildOrderInvalidationCallback *)0x0;
  iVar1 = param_2->NumberElementsLeftBeforeSplitting;
  iVar2 = param_2->SortOrderPaddingBetweenArray;
  bVar4 = param_2->bAssignedWidgetIndex;
  uVar5 = *(undefined3 *)&param_2->field_0xd;
  (this->WidgetListConfig).PreferedElementsNum = param_2->PreferedElementsNum;
  (this->WidgetListConfig).NumberElementsLeftBeforeSplitting = iVar1;
  (this->WidgetListConfig).SortOrderPaddingBetweenArray = iVar2;
  (this->WidgetListConfig).bAssignedWidgetIndex = bVar4;
  *(undefined3 *)&(this->WidgetListConfig).field_0xd = uVar5;
  iVar1 = (this->WidgetListConfig).PreferedElementsNum;
  if ((((iVar1 < 2) || (FArguments::MaxPreferedElementsNum < iVar1)) ||
      (iVar2 = (this->WidgetListConfig).SortOrderPaddingBetweenArray, iVar2 <= iVar1)) ||
     (FArguments::MaxSortOrderPaddingBetweenArray < iVar2)) {
    local_res8[0] = this;
    `FSlateInvalidationWidgetList::FSlateInvalidationWidgetList'::__l5::<lambda_1>::operator()
              (local_res8);
    (this->WidgetListConfig).PreferedElementsNum = 0x40;
    (this->WidgetListConfig).SortOrderPaddingBetweenArray = 1000;
  }
  return this;
}

// operator() @ 14247b180

void __thiscall
`FSlateInvalidationWidgetList::RebuildOrderIndex'::__l2::<lambda_1>::operator()
          (void *this,ushort param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  ushort uVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  undefined4 *local_res8;
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  int local_2c;
  
  if ((*(int *)(*(longlong *)this + 0x60) != 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Self->NumberOfLock == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\FastUpdate\\SlateInvalidationWidgetList.cpp"
                         ,0x3ab,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lVar9 = *(longlong *)(*(longlong *)this + 0x10) + (ulonglong)param_1 * 0x40;
  uVar1 = *(ushort *)(lVar9 + 0xc);
  uVar10 = (uint)uVar1;
  if ((int)(uint)uVar1 < *(int *)(lVar9 + 0x18)) {
    local_38 = CONCAT22(uVar1,param_1);
    uVar6 = (uVar1 - 1) + (short)*(int *)(lVar9 + 0x18);
    local_34 = CONCAT22(uVar6,param_1);
    local_30 = *(int *)(lVar9 + 8) * 0x400 + (uint)uVar1;
    local_2c = *(int *)(lVar9 + 8) * 0x400 + (uint)uVar6;
    *(int *)(lVar9 + 8) = param_2;
    plVar3 = *(longlong **)(*(longlong *)this + 0x68);
    if (plVar3 != (longlong *)0x0) {
      local_res8 = &local_38;
      (**(code **)(*plVar3 + 0x10))(plVar3,&local_res8);
    }
    iVar8 = *(int *)(lVar9 + 0x18);
    if ((int)(uint)uVar1 < iVar8) {
      do {
        iVar2 = *(int *)(*(longlong *)(*(longlong *)this + 0x10) + 8 + (ulonglong)param_1 * 0x40);
        uVar7 = 0;
        if ((int)uVar10 < iVar8) {
          uVar7 = ~uVar10 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (*(longlong *)((longlong)(int)uVar10 * 0x18 + *(longlong *)(lVar9 + 0x10)) != 0) {
          uVar7 = 0;
          if ((int)uVar10 < *(int *)(lVar9 + 0x18)) {
            uVar7 = ~uVar10 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          SWidget::SetFastPathSortOrder
                    (*(SWidget **)(*(longlong *)(lVar9 + 0x10) + (longlong)(int)uVar10 * 0x18),
                     (FSlateInvalidationWidgetSortOrder)(iVar2 * 0x400 + (uVar10 & 0xffff)));
        }
        iVar8 = *(int *)(lVar9 + 0x18);
        uVar10 = uVar10 + 1;
      } while ((int)uVar10 < iVar8);
    }
    if (*(longlong **)(*(longlong *)this + 0x68) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(*(longlong *)this + 0x68) + 0x18))();
    }
  }
  else {
    *(int *)(lVar9 + 8) = param_2;
  }
  return;
}

// operator() @ 14247c060

void __thiscall
`FSlateInvalidationWidgetList::Internal_RemoveRangeFromSameParent'::__l20::<lambda_1>::operator()
          (void *this,ushort param_1,int param_2,int param_3)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  FSlateInvalidationRootHandle local_48;
  FSlateInvalidationWidgetIndex local_38;
  undefined4 uStack_34;
  
  uVar6 = (ulonglong)param_2;
  if (param_2 < param_3) {
    lVar7 = uVar6 * 0x18;
    do {
      uVar5 = (uint)uVar6;
      lVar1 = *(longlong *)(*(longlong *)this + 0x10);
      uVar4 = 0;
      if ((int)uVar5 < *(int *)(lVar1 + 0x18 + (ulonglong)param_1 * 0x40)) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      lVar1 = *(longlong *)(lVar7 + *(longlong *)(lVar1 + 0x10 + (ulonglong)param_1 * 0x40));
      if (lVar1 != 0) {
        FSlateInvalidationRootHandle::FSlateInvalidationRootHandle(&local_48);
        local_38 = FSlateInvalidationWidgetIndex::Invalid;
        uStack_34 = 0;
        uVar6 = (ulonglong)(uint)FSlateInvalidationWidgetIndex::Invalid;
        *(FSlateInvalidationRoot **)(lVar1 + 0x18) = local_48.InvalidationRoot;
        *(undefined8 *)(lVar1 + 0x20) = local_48._8_8_;
        *(ulonglong *)(lVar1 + 0x28) = uVar6;
      }
      uVar6 = (ulonglong)(uVar5 + 1);
      lVar7 = lVar7 + 0x18;
    } while ((int)(uVar5 + 1) < param_3);
  }
  return;
}

// operator() @ 14247cb80

void __thiscall
`FSlateInvalidationWidgetList::Internal_RemoveRangeFromSameParent'::__l20::<lambda_2>::operator()
          (void *this,ushort param_1,ushort param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  ushort local_res20;
  short local_res22;
  FSlateInvalidationRootHandle local_48;
  FSlateInvalidationWidgetIndex local_38;
  undefined4 uStack_34;
  
  if (0 < param_3) {
    uVar7 = (ulonglong)param_2;
    lVar9 = (ulonglong)param_1 * 0x40 + *(longlong *)(*(longlong *)this + 0x10);
    if ((int)(uint)param_2 < param_3) {
      lVar8 = uVar7 * 0x18;
      do {
        uVar6 = (uint)uVar7;
        uVar5 = 0;
        if ((int)uVar6 < *(int *)(lVar9 + 0x18)) {
          uVar5 = ~uVar6 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        lVar1 = *(longlong *)(lVar9 + 0x10);
        lVar2 = *(longlong *)(lVar1 + lVar8);
        if (lVar2 != 0) {
          FSlateInvalidationRootHandle::FSlateInvalidationRootHandle(&local_48);
          local_38 = FSlateInvalidationWidgetIndex::Invalid;
          uStack_34 = 0;
          uVar7 = (ulonglong)(uint)FSlateInvalidationWidgetIndex::Invalid;
          *(FSlateInvalidationRoot **)(lVar2 + 0x18) = local_48.InvalidationRoot;
          *(undefined8 *)(lVar2 + 0x20) = local_48._8_8_;
          *(ulonglong *)(lVar2 + 0x28) = uVar7;
        }
        *(undefined8 *)(lVar1 + lVar8) = 0;
        uVar7 = (ulonglong)(uVar6 + 1);
        lVar8 = lVar8 + 0x18;
      } while ((int)(uVar6 + 1) < param_3);
    }
    local_res22 = (short)param_3 + -1 + param_2;
    local_res20 = param_2;
    FArrayNode::RemoveElementIndexBetweenOrEqualThan'::__l2::<lambda_1>::operator()
              (&local_res20,(TSlateElementSortedArray<unsigned_short,TLess<void>_> *)(lVar9 + 0x20))
    ;
    FArrayNode::RemoveElementIndexBetweenOrEqualThan'::__l2::<lambda_1>::operator()
              (&local_res20,(TSlateElementSortedArray<unsigned_short,TLess<void>_> *)(lVar9 + 0x30))
    ;
  }
  return;
}

// AddArrayNodeIfNeeded @ 14247e730

ushort __thiscall
FSlateInvalidationWidgetList::AddArrayNodeIfNeeded(FSlateInvalidationWidgetList *this,bool param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  ushort uVar4;
  int iVar5;
  ulonglong uVar6;
  ForAnyElementType *pFVar7;
  undefined1 local_res8 [8];
  FArrayNode local_48;
  
  uVar6 = (ulonglong)this->LastArrayIndex;
  if ((this->LastArrayIndex == -1) ||
     ((this->WidgetListConfig).PreferedElementsNum <
      *(int *)(uVar6 * 0x40 + 0x18 + *(longlong *)&this->Data) + 1)) {
    if ((*(int *)&(this->Data).field_0x8 - *(int *)&(this->Data).field_0x34) + 1U ==
        (uint)FSlateInvalidationWidgetIndex::Invalid.ArrayIndex) {
      `FSlateInvalidationWidgetList::AddArrayNodeIfNeeded'::__l8::<lambda_1>::operator()(local_res8)
      ;
      return (ushort)this->LastArrayIndex;
    }
    if (this->NumberOfLock != 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumberOfLock == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\FastUpdate\\SlateInvalidationWidgetList.cpp"
                         ,0x37c,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return uVar4;
      }
    }
    local_48.PreviousArrayIndex = -1;
    local_48.NextArrayIndex = -1;
    local_48.SortOrder = 0;
    local_48.StartIndex = 0;
    local_48._14_2_ = 0;
    local_48.ElementList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.ElementList.ArrayNum = 0;
    local_48.ElementList.ArrayMax = 0;
    local_48.ElementIndexList_WidgetWithRegisteredSlateAttribute.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    local_48.ElementIndexList_WidgetWithRegisteredSlateAttribute.Data.ArrayNum = 0;
    local_48.ElementIndexList_WidgetWithRegisteredSlateAttribute.Data.ArrayMax = 0;
    local_48.ElementIndexList_VolatileUpdateWidget.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    local_48.ElementIndexList_VolatileUpdateWidget.Data.ArrayNum = 0;
    local_48.ElementIndexList_VolatileUpdateWidget.Data.ArrayMax = 0;
    iVar5 = TSparseArray<FSlateInvalidationWidgetList::FArrayNode,FDefaultSparseArrayAllocator>::Add
                      (&this->Data,&local_48);
    uVar6 = (ulonglong)iVar5;
    if (local_48.ElementIndexList_VolatileUpdateWidget.Data.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.ElementIndexList_VolatileUpdateWidget.Data.AllocatorInstance.Data);
    }
    if (local_48.ElementIndexList_WidgetWithRegisteredSlateAttribute.Data.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.ElementIndexList_WidgetWithRegisteredSlateAttribute.Data.
                    AllocatorInstance.Data);
    }
    if (local_48.ElementList.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.ElementList.AllocatorInstance.Data);
    }
    if (0xfffe < iVar5) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index < std::numeric_limits<IndexType>::max()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\FastUpdate\\SlateInvalidationWidgetList.cpp"
                         ,0x37e,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return uVar4;
      }
    }
    if (param_1) {
      uVar1 = (this->WidgetListConfig).PreferedElementsNum;
      pFVar7 = (ForAnyElementType *)(*(longlong *)&this->Data + 0x10 + uVar6 * 0x40);
      if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
      }
      if (*(int *)((longlong)&pFVar7[1].Data + 4) < (int)uVar1) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,uVar1,pFVar7,*(int *)&pFVar7[1].Data,
                   (int *)((longlong)&pFVar7[1].Data + 4));
      }
    }
    if (this->LastArrayIndex != -1) {
      *(int *)((longlong)this->LastArrayIndex * 0x40 + 4 + *(longlong *)&this->Data) = iVar5;
      *(int *)(uVar6 * 0x40 + 8 + *(longlong *)&this->Data) =
           *(int *)((longlong)this->LastArrayIndex * 0x40 + 8 + *(longlong *)&this->Data) +
           (this->WidgetListConfig).SortOrderPaddingBetweenArray;
    }
    *(int *)(uVar6 * 0x40 + *(longlong *)&this->Data) = this->LastArrayIndex;
    uVar6 = uVar6 & 0xffff;
    this->LastArrayIndex = iVar5;
    if (this->FirstArrayIndex == -1) {
      this->FirstArrayIndex = iVar5;
    }
  }
  return (ushort)uVar6;
}

// BuildWidgetList @ 142481410

void __thiscall
FSlateInvalidationWidgetList::BuildWidgetList
          (FSlateInvalidationWidgetList *this,TSharedRef<SWidget,1> *param_1)

{
  TWeakPtr<SWidget,1> *pTVar1;
  atomic<int> *paVar2;
  atomic<int> aVar3;
  TEnumAsByte<EVisibility::Private> TVar4;
  TReferenceControllerBase<1> *pTVar5;
  SWidget *pSVar6;
  SWidget *pSVar7;
  atomic<int> aVar8;
  byte bVar9;
  TReferenceControllerBase<1> *pTVar10;
  TReferenceControllerBase<1> *pTVar11;
  byte bVar12;
  bool bVar13;
  bool bVar14;
  byte local_res8;
  ushort local_res20;
  
  if (this->NumberOfLock != 0) {
    `FSlateInvalidationWidgetList::BuildWidgetList'::__l2::<lambda_1>::operator()(&stack0x00000010);
  }
  FGenericPlatformMisc::BeginNamedEvent(&FColorList::Blue,"Slate_InvalidationList_ProcessBuild");
  bVar13 = -1 < CpuChannel->Enabled;
  if (bVar13) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId501,"Slate_InvalidationList_ProcessBuild",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\FastUpdate\\SlateInvalidationWidgetList.cpp"
               ,0x1f5);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId501);
  }
  if (this->NumberOfLock != 0) {
    `FSlateInvalidationWidgetList::Reset'::__l2::<lambda_1>::operator()(&stack0x00000018);
  }
  TSparseArray<FSlateInvalidationWidgetList::FArrayNode,FDefaultSparseArrayAllocator>::
  DestroyElements(&this->Data,0,*(int *)&(this->Data).field_0x8);
  pTVar11 = (TReferenceControllerBase<1> *)0x0;
  *(undefined4 *)&(this->Data).field_0x8 = 0;
  if (*(int *)&(this->Data).field_0xc < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,0,(ForAnyElementType *)&this->Data,0,(int *)&(this->Data).field_0xc);
  }
  pTVar1 = &this->Root;
  *(undefined4 *)&(this->Data).field_0x34 = 0;
  *(undefined4 *)&(this->Data).field_0x28 = 0;
  *(undefined4 *)&(this->Data).field_0x30 = 0xffffffff;
  if (pTVar1 != (TWeakPtr<SWidget,1> *)&stack0xffffffffffffffa0) {
    pTVar5 = (this->Root).WeakReferenceCount.ReferenceController;
    pTVar1->Object = (SWidget *)0x0;
    (this->Root).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar2 = &pTVar5->WeakReferenceCount;
      aVar3 = *paVar2;
      *paVar2 = (atomic<int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
      }
    }
  }
  this->FirstArrayIndex = -1;
  this->LastArrayIndex = -1;
  pTVar1->Object = param_1->Object;
  pTVar5 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar5 != (this->Root).WeakReferenceCount.ReferenceController) {
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->WeakReferenceCount = (atomic<int>)((int)pTVar5->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar10 = (this->Root).WeakReferenceCount.ReferenceController;
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar2 = &pTVar10->WeakReferenceCount;
      aVar3 = *paVar2;
      *paVar2 = (atomic<int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)(pTVar10->_padding_ + 8))(pTVar10,1);
      }
    }
    (this->Root).WeakReferenceCount.ReferenceController = pTVar5;
  }
  pTVar5 = (param_1->SharedReferenceCount).ReferenceController;
  pSVar6 = param_1->Object;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  pSVar7 = SNullWidget::NullWidget.Object;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  if (pSVar6 != pSVar7) {
    bVar12 = 0;
    pSVar6 = param_1->Object;
    if (((byte)EVisibility::Visible.Value.Value & 0x19) != 0) {
      bVar12 = 2;
    }
    pTVar5 = (pSVar6->ParentWidgetPtr).WeakReferenceCount.ReferenceController;
    bVar9 = 1;
    if (EVisibility::Visible.Value.Value == EVisibility::Collapsed.Value.Value) {
      bVar9 = 9;
    }
    bVar12 = bVar12 | bVar9;
    pTVar10 = pTVar5;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      aVar3 = pTVar5->SharedReferenceCount;
      do {
        pTVar10 = pTVar11;
        if (aVar3 == (atomic<int>)0x0) goto LAB_1424815f1;
        LOCK();
        aVar8 = pTVar5->SharedReferenceCount;
        bVar14 = aVar3 == aVar8;
        if (bVar14) {
          pTVar5->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
          aVar8 = aVar3;
        }
        UNLOCK();
        aVar3 = aVar8;
      } while (!bVar14);
      pSVar6 = (pSVar6->ParentWidgetPtr).Object;
      pTVar10 = pTVar5;
      if (pSVar6 != (SWidget *)0x0) {
        TVar4.Value = *(uchar *)&pSVar6->VisibilityAttribute;
        if ((TVar4.Value & 0x19) != 0) {
          pTVar11 = (TReferenceControllerBase<1> *)&DAT_00000002;
        }
        bVar12 = 1;
        if ((TEnumAsByte<EVisibility::Private>)TVar4.Value == EVisibility::Collapsed.Value.Value) {
          bVar12 = 9;
        }
        bVar12 = (byte)pTVar11 | bVar12;
      }
    }
LAB_1424815f1:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
    local_res20 = FSlateInvalidationWidgetIndex::Invalid.ArrayIndex;
    local_res8 = bVar12;
    Internal_BuildWidgetList_Recursive
              (this,(SWidget *)&stack0xffffffffffffff98,SUB84(param_1->Object,0),
               (ushort *)(ulonglong)(uint)FSlateInvalidationWidgetIndex::Invalid,
               (FSlateInvalidationWidgetVisibility)SUB81(&stack0x00000020,0),
               SUB81(&stack0x00000008,0));
  }
  if (bVar13) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return;
}

// CutArray @ 142483f00

FCutResult __thiscall
FSlateInvalidationWidgetList::CutArray
          (FSlateInvalidationWidgetList *this,FSlateInvalidationWidgetIndex param_1)

{
  void *_Dst;
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined4 in_register_00000014;
  uint uVar5;
  ushort in_R8W;
  longlong lVar6;
  undefined2 local_res10 [4];
  
  Internal_CutArray(this,param_1);
  uVar1 = *(uint *)CONCAT44(in_register_00000014,param_1);
  if (uVar1 != 0xffffffff) {
    lVar6 = (ulonglong)in_R8W * 0x40 + *(longlong *)&this->Data;
    uVar5 = *(int *)(lVar6 + 0x18) - uVar1;
    if (((int)(uVar5 | uVar1) < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return (FCutResult)iVar4;
    }
    if (uVar5 != 0) {
      _Dst = (void *)(*(longlong *)(lVar6 + 0x10) + (longlong)(int)uVar1 * 0x18);
      iVar4 = (*(int *)(lVar6 + 0x18) - uVar1) - uVar5;
      if (iVar4 != 0) {
        memmove(_Dst,(void *)((longlong)_Dst + (longlong)(int)uVar5 * 0x18),(longlong)iVar4 * 0x18);
      }
      *(int *)(lVar6 + 0x18) = *(int *)(lVar6 + 0x18) - uVar5;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,(ForAnyElementType *)(lVar6 + 0x10),*(int *)(lVar6 + 0x18),
                 (int *)(lVar6 + 0x1c));
    }
    if (*(int *)(lVar6 + 0x18) == 0) {
      RemoveDataNode(this,in_R8W);
    }
    else {
      local_res10[0] = (undefined2)*(uint *)CONCAT44(in_register_00000014,param_1);
      `FSlateInvalidationWidgetList::FArrayNode::RemoveElementIndexBiggerOrEqualThan'::__l2::
      <lambda_1>::operator()
                (local_res10,(TSlateElementSortedArray<unsigned_short,TLess<void>_> *)(lVar6 + 0x20)
                );
      `FSlateInvalidationWidgetList::FArrayNode::RemoveElementIndexBiggerOrEqualThan'::__l2::
      <lambda_1>::operator()
                (local_res10,(TSlateElementSortedArray<unsigned_short,TLess<void>_> *)(lVar6 + 0x30)
                );
    }
  }
  return (FCutResult)(int)param_1;
}

// DecrementIndex @ 142484050

FSlateInvalidationWidgetIndex __thiscall
FSlateInvalidationWidgetList::DecrementIndex
          (FSlateInvalidationWidgetList *this,FSlateInvalidationWidgetIndex param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FSlateInvalidationWidgetIndex FVar4;
  undefined4 in_register_00000014;
  undefined1 *puVar5;
  longlong lVar6;
  uint in_R8D;
  FSlateInvalidationWidgetIndex local_res18;
  
  local_res18.ArrayIndex = (ushort)in_R8D;
  if ((int)(in_R8D & 0xffff) < *(int *)&(this->Data).field_0x28) {
    if ((*(int *)&(this->Data).field_0x28 <= (int)(in_R8D & 0xffff)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5c6,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      FVar4 = (FSlateInvalidationWidgetIndex)(*pcVar2)();
      return FVar4;
    }
    puVar5 = *(undefined1 **)&(this->Data).field_0x20;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->Data).field_0x10;
    }
    if ((*(uint *)(puVar5 + (ulonglong)(local_res18.ArrayIndex >> 5) * 4) >> (in_R8D & 0x1f) & 1) !=
        0) goto LAB_1424840f0;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Data.IsValidIndex(Index.ArrayIndex)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\FastUpdate\\SlateInvalidationWidgetList.cpp"
                     ,0x336,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    FVar4 = (FSlateInvalidationWidgetIndex)(*pcVar2)();
    return FVar4;
  }
LAB_1424840f0:
  local_res18.ElementIndex = (ushort)(in_R8D >> 0x10);
  lVar6 = (ulonglong)local_res18.ArrayIndex * 0x40;
  if (local_res18.ElementIndex == *(short *)(*(longlong *)&this->Data + 0xc + lVar6)) {
    iVar1 = *(int *)(*(longlong *)&this->Data + lVar6);
    local_res18 = FSlateInvalidationWidgetIndex::Invalid;
    if (iVar1 != -1) {
      if (((int)((uint)FSlateInvalidationWidgetIndex::Invalid & 0xffff) <= iVar1) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Data[Index.ArrayIndex].PreviousArrayIndex < FSlateInvalidationWidgetIndex::Invalid.ArrayIndex"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\FastUpdate\\SlateInvalidationWidgetList.cpp"
                             ,0x33d,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        FVar4 = (FSlateInvalidationWidgetIndex)(*pcVar2)();
        return FVar4;
      }
      local_res18.ArrayIndex = *(ushort *)(*(longlong *)&this->Data + lVar6);
      if ((*(int *)((ulonglong)local_res18.ArrayIndex * 0x40 + 0x18 + *(longlong *)&this->Data) < 1)
         && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                               ("Data[Index.ArrayIndex].ElementList.Num() > 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\FastUpdate\\SlateInvalidationWidgetList.cpp"
                                ,0x33f,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        FVar4 = (FSlateInvalidationWidgetIndex)(*pcVar2)();
        return FVar4;
      }
      local_res18.ElementIndex =
           *(short *)((ulonglong)local_res18.ArrayIndex * 0x40 + 0x18 + *(longlong *)&this->Data) -
           1;
    }
  }
  else {
    local_res18.ElementIndex = local_res18.ElementIndex - 1;
  }
  *(FSlateInvalidationWidgetIndex *)CONCAT44(in_register_00000014,param_1) = local_res18;
  return param_1;
}

// DeepCompare @ 1424841e0

bool __thiscall
FSlateInvalidationWidgetList::DeepCompare
          (FSlateInvalidationWidgetList *this,FSlateInvalidationWidgetList *param_1)

{
  longlong *plVar1;
  SWidget *pSVar2;
  code *pcVar3;
  int iVar4;
  atomic<int> aVar5;
  undefined1 uVar6;
  int iVar7;
  atomic<int> aVar8;
  FSlateInvalidationWidgetIndex FVar9;
  FWidgetProxy *pFVar10;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  SWidget *pSVar11;
  SWidget *pSVar12;
  uint uVar13;
  SWidget *pSVar14;
  SWidget *pSVar15;
  longlong lVar16;
  longlong lVar17;
  bool bVar18;
  FSlateInvalidationWidgetIndex local_res8;
  undefined1 local_res10 [8];
  undefined1 local_res18 [16];
  
  pSVar2 = (SWidget *)(param_1->Root).WeakReferenceCount.ReferenceController;
  pSVar15 = (SWidget *)0x0;
  pSVar12 = pSVar2;
  pSVar14 = pSVar15;
  if (pSVar2 != (SWidget *)0x0) {
    iVar4 = (int)pSVar2->_padding_;
    do {
      pSVar12 = pSVar15;
      pSVar14 = (SWidget *)0x0;
      if (iVar4 == 0) goto LAB_142484217;
      LOCK();
      iVar7 = (int)pSVar2->_padding_;
      bVar18 = iVar4 == iVar7;
      if (bVar18) {
        *(int *)&pSVar2->_padding_ = iVar4 + 1;
        iVar7 = iVar4;
      }
      UNLOCK();
      iVar4 = iVar7;
    } while (!bVar18);
    pSVar12 = pSVar2;
    pSVar14 = (param_1->Root).Object;
  }
LAB_142484217:
  pSVar2 = (SWidget *)(this->Root).WeakReferenceCount.ReferenceController;
  pSVar11 = pSVar2;
  if (pSVar2 != (SWidget *)0x0) {
    aVar5 = *(atomic<int> *)&pSVar2->_padding_;
    do {
      pSVar11 = pSVar15;
      if (aVar5 == (atomic<int>)0x0) goto LAB_142484241;
      LOCK();
      aVar8 = *(atomic<int> *)&pSVar2->_padding_;
      bVar18 = aVar5 == aVar8;
      if (bVar18) {
        *(atomic<int> *)&pSVar2->_padding_ = (atomic<int>)((int)aVar5 + 1);
        aVar8 = aVar5;
      }
      UNLOCK();
      aVar5 = aVar8;
    } while (!bVar18);
    pSVar15 = (this->Root).Object;
    pSVar11 = pSVar2;
  }
LAB_142484241:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar11);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar12);
  if (pSVar15 == pSVar14) {
    uVar13 = this->FirstArrayIndex;
    local_res8 = FSlateInvalidationWidgetIndex::Invalid;
    if (uVar13 != 0xffffffff) {
      local_res8 = (FSlateInvalidationWidgetIndex)
                   ((uint)*(ushort *)((longlong)(int)uVar13 * 0x40 + 0xc + *(longlong *)&this->Data)
                    << 0x10 | uVar13 & 0xffff);
    }
    uVar13 = param_1->FirstArrayIndex;
    FVar9 = FSlateInvalidationWidgetIndex::Invalid;
    if (uVar13 != 0xffffffff) {
      FVar9 = (FSlateInvalidationWidgetIndex)
              ((uint)*(ushort *)((longlong)(int)uVar13 * 0x40 + 0xc + *(longlong *)&param_1->Data)
               << 0x10 | uVar13 & 0xffff);
    }
    while( true ) {
      if (((local_res8.ArrayIndex == FSlateInvalidationWidgetIndex::Invalid.ArrayIndex) &&
          (local_res8.ElementIndex == FSlateInvalidationWidgetIndex::Invalid.ElementIndex)) ||
         ((FVar9.ArrayIndex == FSlateInvalidationWidgetIndex::Invalid.ArrayIndex &&
          (FVar9.ElementIndex == FSlateInvalidationWidgetIndex::Invalid.ElementIndex)))) break;
      lVar16 = (ulonglong)((uint)local_res8 & 0xffff) * 0x40 + *(longlong *)&this->Data;
      if ((*(int *)(lVar16 + 0x18) <= (int)((uint)local_res8 >> 0x10)) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      lVar17 = (ulonglong)((uint)FVar9 & 0xffff) * 0x40 + *(longlong *)&param_1->Data;
      plVar1 = (longlong *)
               (*(longlong *)(lVar16 + 0x10) + (ulonglong)((uint)local_res8 >> 0x10) * 0x18);
      uVar13 = (uint)FVar9 >> 0x10;
      if ((*(int *)(lVar17 + 0x18) <= (int)uVar13) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      lVar17 = *(longlong *)(lVar17 + 0x10);
      lVar16 = lVar17 + (ulonglong)uVar13 * 0x18;
      if (*plVar1 != *(longlong *)(lVar17 + (ulonglong)uVar13 * 0x18)) {
        return false;
      }
      if ((*(ushort *)((longlong)plVar1 + 0xc) == FSlateInvalidationWidgetIndex::Invalid.ArrayIndex)
         && (*(ushort *)((longlong)plVar1 + 0xe) ==
             FSlateInvalidationWidgetIndex::Invalid.ElementIndex)) {
        if (*(ushort *)((longlong)plVar1 + 0xc) != (ushort)*(undefined4 *)(lVar16 + 0xc)) {
          return false;
        }
        bVar18 = *(short *)((longlong)plVar1 + 0xe) ==
                 (short)((uint)*(undefined4 *)(lVar16 + 0xc) >> 0x10);
      }
      else {
        pFVar10 = operator[](this,*(FSlateInvalidationWidgetIndex *)((longlong)plVar1 + 0xc));
        pSVar2 = pFVar10->Widget;
        pFVar10 = operator[](param_1,*(FSlateInvalidationWidgetIndex *)(lVar16 + 0xc));
        bVar18 = pSVar2 == pFVar10->Widget;
      }
      if (!bVar18) {
        return false;
      }
      if (((*(ushort *)(plVar1 + 2) == FSlateInvalidationWidgetIndex::Invalid.ArrayIndex) &&
          (*(ushort *)((longlong)plVar1 + 0x12) ==
           FSlateInvalidationWidgetIndex::Invalid.ElementIndex)) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("InvalidationWidgetA.LeafMostChildIndex != FSlateInvalidationWidgetIndex::Invalid"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\FastUpdate\\SlateInvalidationWidgetList.cpp"
                              ,0x630,L""), bVar18)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      if (((*(ushort *)(lVar16 + 0x10) == FSlateInvalidationWidgetIndex::Invalid.ArrayIndex) &&
          (*(ushort *)(lVar16 + 0x12) == FSlateInvalidationWidgetIndex::Invalid.ElementIndex)) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("InvalidationWidgetB.LeafMostChildIndex != FSlateInvalidationWidgetIndex::Invalid"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\FastUpdate\\SlateInvalidationWidgetList.cpp"
                              ,0x631,L""), bVar18)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      pFVar10 = operator[](this,*(FSlateInvalidationWidgetIndex *)(plVar1 + 2));
      pSVar2 = pFVar10->Widget;
      pFVar10 = operator[](param_1,*(FSlateInvalidationWidgetIndex *)(lVar16 + 0x10));
      if (pSVar2 != pFVar10->Widget) {
        return false;
      }
      FVar9 = IncrementIndex(this,SUB84(local_res10,0));
      local_res8 = *(FSlateInvalidationWidgetIndex *)CONCAT44(extraout_var,FVar9);
      FVar9 = IncrementIndex(param_1,SUB84(local_res18,0));
      FVar9 = *(FSlateInvalidationWidgetIndex *)CONCAT44(extraout_var_00,FVar9);
    }
    if ((((local_res8.ArrayIndex == FSlateInvalidationWidgetIndex::Invalid.ArrayIndex) &&
         (local_res8.ElementIndex == FSlateInvalidationWidgetIndex::Invalid.ElementIndex)) &&
        (FVar9.ArrayIndex == FSlateInvalidationWidgetIndex::Invalid.ArrayIndex)) &&
       (FVar9.ElementIndex == FSlateInvalidationWidgetIndex::Invalid.ElementIndex)) {
      return true;
    }
  }
  return false;
}

// Empty @ 142486260

void __thiscall FSlateInvalidationWidgetList::Empty(FSlateInvalidationWidgetList *this)

{
  undefined1 *puVar1;
  atomic<int> *paVar2;
  atomic<int> aVar3;
  int iVar4;
  TReferenceControllerBase<1> *pTVar5;
  undefined1 local_res8 [8];
  undefined8 local_18 [2];
  
  if (this->NumberOfLock != 0) {
    `FSlateInvalidationWidgetList::Empty'::__l2::<lambda_1>::operator()(local_res8);
  }
  TSparseArray<FSlateInvalidationWidgetList::FArrayNode,FDefaultSparseArrayAllocator>::
  DestroyElements(&this->Data,0,*(int *)&(this->Data).field_0x8);
  puVar1 = &(this->Data).field_0xc;
  *(undefined4 *)&(this->Data).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,0,(ForAnyElementType *)&this->Data,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->Data).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Data).field_0x34 = 0;
  iVar4 = *(int *)&(this->Data).field_0x2c;
  *(undefined4 *)&(this->Data).field_0x28 = 0;
  if ((iVar4 < 0) || (0x80 < iVar4)) {
    *(undefined4 *)&(this->Data).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Data).field_0x10,0);
  }
  if (&this->Root != (TWeakPtr<SWidget,1> *)local_18) {
    pTVar5 = (this->Root).WeakReferenceCount.ReferenceController;
    (this->Root).Object = (SWidget *)0x0;
    (this->Root).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar2 = &pTVar5->WeakReferenceCount;
      aVar3 = *paVar2;
      *paVar2 = (atomic<int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
      }
    }
  }
  this->FirstArrayIndex = -1;
  this->LastArrayIndex = -1;
  return;
}

// FindChildren @ 1424872d0

/* WARNING: Removing unreachable block (ram,0x000142487582) */
/* WARNING: Removing unreachable block (ram,0x000142487595) */

TArray<TSharedPtr<SWidget,1>,TSizedDefaultAllocator<32>_> * __thiscall
FSlateInvalidationWidgetList::FindChildren
          (FSlateInvalidationWidgetList *this,
          TArray<TSharedPtr<SWidget,1>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          SWidget *param_1)

{
  int *piVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  TArray<TSharedPtr<SWidget,1>,TSizedDefaultAllocator<32>_> *pTVar9;
  FWidgetProxy *pFVar10;
  TSharedRef<SWidget,1> *pTVar11;
  int iVar12;
  ulonglong uVar13;
  FScriptContainerElement *pFVar14;
  FScriptContainerElement *pFVar15;
  TTuple<SWidget_*,FSlateInvalidationWidgetIndex> *pTVar16;
  ForElementType<TTuple<SWidget_*,FSlateInvalidationWidgetIndex>_> FVar17;
  uint local_res8 [2];
  ForElementType<TTuple<SWidget_*,FSlateInvalidationWidgetIndex>_> local_98;
  undefined8 local_90;
  SWidget *local_88;
  TReferenceControllerBase<1> *local_80;
  undefined8 local_78;
  TReferenceControllerBase<1> *pTStack_70;
  TSharedRef<SWidget,1> local_68;
  FSlateInvalidationRoot *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  FSlateInvalidationRoot *local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  piVar1 = &__return_storage_ptr__->ArrayMax;
  bVar5 = false;
  bVar4 = false;
  bVar6 = false;
  local_res8[0] = 0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  local_58 = (param_1->FastPathProxyHandle).InvalidationRootHandle.InvalidationRoot;
  uStack_50 = *(undefined8 *)&(param_1->FastPathProxyHandle).InvalidationRootHandle.UniqueId;
  uVar2._0_2_ = (param_1->FastPathProxyHandle).WidgetIndex.ArrayIndex;
  uVar2._2_2_ = (param_1->FastPathProxyHandle).WidgetIndex.ElementIndex;
  uVar2._4_4_ = (param_1->FastPathProxyHandle).WidgetSortOrder;
  local_40 = local_58;
  uStack_38 = uStack_50;
  local_30 = uVar2;
  if ((param_1->FastPathProxyHandle).InvalidationRootHandle.UniqueId == (this->Owner).UniqueId) {
    if (((undefined2)uVar2 != FSlateInvalidationWidgetIndex::Invalid.ArrayIndex) ||
       (uVar2._2_2_ != FSlateInvalidationWidgetIndex::Invalid.ElementIndex)) {
      local_98.Data = (TTuple<SWidget_*,FSlateInvalidationWidgetIndex> *)0x0;
      local_90 = 0;
      local_48 = uVar2;
      UE::Core::Private::
      ReallocTo<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<TTuple<SWidget_*,FSlateInvalidationWidgetIndex>_>_>
                (0x10,8,0x10,&local_98,0,(int *)((longlong)&local_90 + 4));
      pFVar10 = operator[](this,(FSlateInvalidationWidgetIndex)(undefined4)uVar2);
      InvalidationList::
      ForEachChildren<FSlateInvalidationWidgetList_const_,_FSlateInvalidationWidgetList::Internal_FindChildren_::__l2::<lambda_1>_>
                (this,pFVar10,(FSlateInvalidationWidgetIndex)(undefined4)uVar2,
                 (TArray<TTuple<SWidget_*,FSlateInvalidationWidgetIndex>,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>
                  *)&local_98);
      uVar13 = local_90 & 0xffffffff;
      if ((int)local_90 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum(uVar13);
      }
      if (*piVar1 < (int)local_90) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,(int)local_90,&__return_storage_ptr__->AllocatorInstance,
                   __return_storage_ptr__->ArrayNum,piVar1);
        uVar13 = local_90 & 0xffffffff;
      }
      iVar12 = (int)uVar13;
      pTVar16 = local_98.Data + iVar12;
      FVar17.Data = local_98.Data;
      while( true ) {
        if ((int)uVar13 != iVar12) {
          local_res8[0] = local_res8[0] & 0xffffff00;
          `TCheckedPointerIterator<TTuple<SWidget_*,FSlateInvalidationWidgetIndex>,int,0>::
          operator!='::__l2::<lambda_1>::operator()(local_res8);
        }
        if (FVar17.Data == pTVar16) break;
        if (*(longlong *)FVar17.Data == 0) {
          pFVar15 = (FScriptContainerElement *)&local_78;
          local_78 = 0;
          pTStack_70 = (TReferenceControllerBase<1> *)0x0;
          bVar6 = true;
        }
        else {
          bVar5 = true;
          bVar4 = true;
          pTVar11 = TSharedFromThis<SWidget,1>::AsShared
                              ((TSharedFromThis<SWidget,1> *)(*(longlong *)FVar17.Data + 8),
                               &local_68);
          local_88 = pTVar11->Object;
          local_80 = (pTVar11->SharedReferenceCount).ReferenceController;
          if (local_80 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            local_80->SharedReferenceCount = (atomic<int>)((int)local_80->SharedReferenceCount + 1);
            UNLOCK();
          }
          pFVar15 = (FScriptContainerElement *)&local_88;
        }
        pFVar14 = (__return_storage_ptr__->AllocatorInstance).Data;
        if (((pFVar14 <= pFVar15) && (pFVar15 < pFVar14 + (longlong)*piVar1 * 0x10)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar3 = (code *)swi(3);
          pTVar9 = (TArray<TSharedPtr<SWidget,1>,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar9;
        }
        iVar8 = __return_storage_ptr__->ArrayNum;
        if (iVar8 == *piVar1) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&__return_storage_ptr__->AllocatorInstance,piVar1);
        }
        uVar2 = *(undefined8 *)pFVar15;
        pFVar14 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar8 * 0x10;
        __return_storage_ptr__->ArrayNum = iVar8 + 1;
        *(undefined8 *)pFVar14 = uVar2;
        *(undefined8 *)(pFVar14 + 8) = *(undefined8 *)(pFVar15 + 8);
        *(undefined8 *)(pFVar15 + 8) = 0;
        *(undefined8 *)pFVar15 = 0;
        if (bVar6) {
          bVar6 = false;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTStack_70);
        }
        if (bVar4) {
          bVar4 = false;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_80);
        }
        if (bVar5) {
          bVar5 = false;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_68.SharedReferenceCount.ReferenceController);
        }
        uVar13 = local_90 & 0xffffffff;
        FVar17.Data = FVar17.Data + 1;
      }
      if (local_98.Data != (TTuple<SWidget_*,FSlateInvalidationWidgetIndex> *)0x0) {
        TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Free(local_98.Data);
      }
    }
  }
  else {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8451985538147154436>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\FastUpdate\\SlateInvalidationWidgetList.cpp"
                       ,0x5fc,
                       "Widget.GetProxyHandle().GetInvalidationRootHandle().GetUniqueId() == Owner.GetUniqueId()"
                      );
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      pTVar9 = (TArray<TSharedPtr<SWidget,1>,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
      return pTVar9;
    }
  }
  return __return_storage_ptr__;
}

// FindNextSibling @ 142487cc0

FSlateInvalidationWidgetIndex __thiscall
FSlateInvalidationWidgetList::FindNextSibling
          (FSlateInvalidationWidgetList *this,FSlateInvalidationWidgetIndex param_1)

{
  FWidgetProxy *pFVar1;
  FWidgetProxy *pFVar2;
  undefined4 in_register_00000014;
  FSlateInvalidationWidgetIndex in_R8D;
  FSlateInvalidationWidgetIndex local_res10 [2];
  
  *(FSlateInvalidationWidgetIndex *)CONCAT44(in_register_00000014,param_1) =
       FSlateInvalidationWidgetIndex::Invalid;
  pFVar1 = operator[](this,in_R8D);
  IncrementIndex(this,SUB84(local_res10,0));
  if ((local_res10[0].ArrayIndex != FSlateInvalidationWidgetIndex::Invalid.ArrayIndex) ||
     (local_res10[0].ElementIndex != FSlateInvalidationWidgetIndex::Invalid.ElementIndex)) {
    pFVar2 = operator[](this,local_res10[0]);
    if (((pFVar2->ParentIndex).ArrayIndex == (pFVar1->ParentIndex).ArrayIndex) &&
       ((pFVar2->ParentIndex).ElementIndex == (pFVar1->ParentIndex).ElementIndex)) {
      *(FSlateInvalidationWidgetIndex *)CONCAT44(in_register_00000014,param_1) = local_res10[0];
    }
  }
  return param_1;
}

// FindWidget @ 1424887c0

FSlateInvalidationWidgetIndex __thiscall
FSlateInvalidationWidgetList::FindWidget(FSlateInvalidationWidgetList *this,SWidget *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  FSlateInvalidationWidgetIndex FVar4;
  undefined4 extraout_var;
  longlong lVar5;
  longlong in_R8;
  undefined1 local_res8 [8];
  
  uVar1 = this->FirstArrayIndex;
  FVar4 = FSlateInvalidationWidgetIndex::Invalid;
  if (uVar1 != 0xffffffff) {
    FVar4 = (FSlateInvalidationWidgetIndex)
            ((uint)*(ushort *)((longlong)(int)uVar1 * 0x40 + 0xc + *(longlong *)&this->Data) << 0x10
            | uVar1 & 0xffff);
  }
  while( true ) {
    if ((FVar4.ArrayIndex == FSlateInvalidationWidgetIndex::Invalid.ArrayIndex) &&
       (FVar4.ElementIndex == FSlateInvalidationWidgetIndex::Invalid.ElementIndex)) {
      *(FSlateInvalidationWidgetIndex *)&param_1->_padding_ = FSlateInvalidationWidgetIndex::Invalid
      ;
      goto LAB_1424888a0;
    }
    lVar5 = (ulonglong)((uint)FVar4 & 0xffff) * 0x40 + *(longlong *)&this->Data;
    if ((*(int *)(lVar5 + 0x18) <= (int)((uint)FVar4 >> 0x10)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      FVar4 = (FSlateInvalidationWidgetIndex)(*pcVar2)();
      return FVar4;
    }
    if (in_R8 == *(longlong *)
                  (*(longlong *)(lVar5 + 0x10) + (ulonglong)((uint)FVar4 >> 0x10) * 0x18)) break;
    FVar4 = IncrementIndex(this,SUB84(local_res8,0));
    FVar4 = *(FSlateInvalidationWidgetIndex *)CONCAT44(extraout_var,FVar4);
  }
  *(FSlateInvalidationWidgetIndex *)&param_1->_padding_ = FVar4;
LAB_1424888a0:
  return SUB84(param_1,0);
}

// IncrementIndex @ 142497be0

FSlateInvalidationWidgetIndex __thiscall
FSlateInvalidationWidgetList::IncrementIndex
          (FSlateInvalidationWidgetList *this,FSlateInvalidationWidgetIndex param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FSlateInvalidationWidgetIndex FVar4;
  undefined4 in_register_00000014;
  undefined1 *puVar5;
  longlong lVar6;
  uint in_R8D;
  FSlateInvalidationWidgetIndex local_res18;
  
  local_res18.ArrayIndex = (ushort)in_R8D;
  if ((int)(in_R8D & 0xffff) < *(int *)&(this->Data).field_0x28) {
    if ((*(int *)&(this->Data).field_0x28 <= (int)(in_R8D & 0xffff)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5c6,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      FVar4 = (FSlateInvalidationWidgetIndex)(*pcVar2)();
      return FVar4;
    }
    puVar5 = *(undefined1 **)&(this->Data).field_0x20;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->Data).field_0x10;
    }
    if ((*(uint *)(puVar5 + (ulonglong)(local_res18.ArrayIndex >> 5) * 4) >> (in_R8D & 0x1f) & 1) !=
        0) goto LAB_142497c80;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Data.IsValidIndex(Index.ArrayIndex)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\FastUpdate\\SlateInvalidationWidgetList.cpp"
                     ,0x324,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    FVar4 = (FSlateInvalidationWidgetIndex)(*pcVar2)();
    return FVar4;
  }
LAB_142497c80:
  local_res18.ElementIndex = (ushort)(in_R8D >> 0x10);
  local_res18.ElementIndex = local_res18.ElementIndex + 1;
  lVar6 = (ulonglong)local_res18.ArrayIndex * 0x40;
  if ((*(int *)(lVar6 + 0x18 + *(longlong *)&this->Data) <= (int)(uint)local_res18.ElementIndex) &&
     (iVar1 = *(int *)(lVar6 + 4 + *(longlong *)&this->Data),
     local_res18 = FSlateInvalidationWidgetIndex::Invalid, iVar1 != -1)) {
    if (((int)((uint)FSlateInvalidationWidgetIndex::Invalid & 0xffff) <= iVar1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Data[Index.ArrayIndex].NextArrayIndex < FSlateInvalidationWidgetIndex::Invalid.ArrayIndex"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\FastUpdate\\SlateInvalidationWidgetList.cpp"
                           ,0x32c,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      FVar4 = (FSlateInvalidationWidgetIndex)(*pcVar2)();
      return FVar4;
    }
    local_res18.ArrayIndex = *(ushort *)(*(longlong *)&this->Data + 4 + lVar6);
    local_res18.ElementIndex =
         *(ushort *)((ulonglong)local_res18.ArrayIndex * 0x40 + 0xc + *(longlong *)&this->Data);
  }
  *(FSlateInvalidationWidgetIndex *)CONCAT44(in_register_00000014,param_1) = local_res18;
  return param_1;
}

// InsertArrayNodeIfNeeded @ 142498170

ushort __thiscall
FSlateInvalidationWidgetList::InsertArrayNodeIfNeeded
          (FSlateInvalidationWidgetList *this,ushort param_1,bool param_2)

{
  ushort uVar1;
  
  if (param_1 == FSlateInvalidationWidgetIndex::Invalid.ArrayIndex) {
    uVar1 = AddArrayNodeIfNeeded(this,param_2);
    return uVar1;
  }
  if ((this->WidgetListConfig).PreferedElementsNum <
      *(int *)((ulonglong)param_1 * 0x40 + 0x18 + *(longlong *)&this->Data) + 1) {
    uVar1 = InsertDataNodeAfter(this,param_1,param_2);
    return uVar1;
  }
  return param_1;
}

// InsertDataNodeAfter @ 1424981b0

ushort __thiscall
FSlateInvalidationWidgetList::InsertDataNodeAfter
          (FSlateInvalidationWidgetList *this,ushort param_1,bool param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  ushort uVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  ForAnyElementType *pFVar10;
  undefined1 local_res8 [8];
  FArrayNode local_58;
  
  if (this->FirstArrayIndex != -1) {
    if ((this->NumberOfLock != 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("NumberOfLock == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\FastUpdate\\SlateInvalidationWidgetList.cpp"
                           ,0x41f,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return uVar6;
    }
    if ((*(int *)&(this->Data).field_0x8 - *(int *)&(this->Data).field_0x34) + 1U ==
        (uint)FSlateInvalidationWidgetIndex::Invalid.ArrayIndex) {
      `FSlateInvalidationWidgetList::InsertDataNodeAfter'::__l45::<lambda_1>::operator()(local_res8)
      ;
      uVar6 = (ushort)this->LastArrayIndex;
    }
    else {
      local_58.SortOrder = 0;
      local_58.StartIndex = 0;
      local_58._14_2_ = 0;
      local_58.ElementList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_58.ElementList.ArrayNum = 0;
      local_58.ElementList.ArrayMax = 0;
      local_58.ElementIndexList_WidgetWithRegisteredSlateAttribute.Data.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      local_58.ElementIndexList_WidgetWithRegisteredSlateAttribute.Data.ArrayNum = 0;
      local_58.ElementIndexList_WidgetWithRegisteredSlateAttribute.Data.ArrayMax = 0;
      local_58.ElementIndexList_VolatileUpdateWidget.Data.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      local_58.ElementIndexList_VolatileUpdateWidget.Data.ArrayNum = 0;
      local_58.ElementIndexList_VolatileUpdateWidget.Data.ArrayMax = 0;
      local_58.PreviousArrayIndex = -1;
      local_58.NextArrayIndex = -1;
      iVar7 = TSparseArray<FSlateInvalidationWidgetList::FArrayNode,FDefaultSparseArrayAllocator>::
              Add(&this->Data,&local_58);
      lVar9 = (longlong)iVar7;
      if (local_58.ElementIndexList_VolatileUpdateWidget.Data.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.ElementIndexList_VolatileUpdateWidget.Data.AllocatorInstance.Data);
      }
      if (local_58.ElementIndexList_WidgetWithRegisteredSlateAttribute.Data.AllocatorInstance.Data
          != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.ElementIndexList_WidgetWithRegisteredSlateAttribute.Data.
                      AllocatorInstance.Data);
      }
      if (local_58.ElementList.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.ElementList.AllocatorInstance.Data);
      }
      if ((0xfffe < iVar7) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("NewIndex < std::numeric_limits<IndexType>::max()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\FastUpdate\\SlateInvalidationWidgetList.cpp"
                             ,0x429,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return uVar6;
      }
      if (param_2) {
        uVar1 = (this->WidgetListConfig).PreferedElementsNum;
        pFVar10 = (ForAnyElementType *)(*(longlong *)&this->Data + 0x10 + lVar9 * 0x40);
        if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
        }
        if (*(int *)((longlong)&pFVar10[1].Data + 4) < (int)uVar1) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,uVar1,pFVar10,*(int *)&pFVar10[1].Data,
                     (int *)((longlong)&pFVar10[1].Data + 4));
        }
      }
      lVar3 = *(longlong *)&this->Data;
      lVar8 = (ulonglong)param_1 * 0x40;
      iVar2 = *(int *)(lVar3 + 4 + lVar8);
      uVar6 = (ushort)iVar7;
      if (iVar2 == -1) {
        if ((this->LastArrayIndex != (uint)param_1) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("LastArrayIndex == AfterIndex",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\FastUpdate\\SlateInvalidationWidgetList.cpp"
                               ,0x441,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return uVar6;
        }
        this->LastArrayIndex = iVar7;
        *(uint *)(lVar9 * 0x40 + *(longlong *)&this->Data) = (uint)param_1;
        *(int *)(*(longlong *)&this->Data + 4 + lVar8) = iVar7;
        *(int *)(*(longlong *)&this->Data + 8 + lVar9 * 0x40) =
             *(int *)(*(longlong *)&this->Data + 8 + lVar8) +
             (this->WidgetListConfig).SortOrderPaddingBetweenArray;
      }
      else {
        *(int *)((longlong)iVar2 * 0x40 + lVar3) = iVar7;
        *(undefined4 *)(lVar9 * 0x40 + 4 + *(longlong *)&this->Data) =
             *(undefined4 *)(lVar3 + lVar8 + 4);
        *(int *)(lVar3 + lVar8 + 4) = iVar7;
        *(uint *)(lVar9 * 0x40 + *(longlong *)&this->Data) = (uint)param_1;
        if (this->LastArrayIndex == (uint)param_1) {
          this->LastArrayIndex = iVar7;
        }
        RebuildOrderIndex(this,uVar6);
      }
    }
    return uVar6;
  }
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("AfterIndex == INDEX_NONE",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\FastUpdate\\SlateInvalidationWidgetList.cpp"
                     ,0x417,L"");
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return uVar6;
  }
  if ((this->LastArrayIndex != -1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("LastArrayIndex == INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\FastUpdate\\SlateInvalidationWidgetList.cpp"
                         ,0x418,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return uVar6;
  }
  uVar6 = AddArrayNodeIfNeeded(this,param_2);
  if (((uint)uVar6 != this->LastArrayIndex) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("NewLastArrayIndex == LastArrayIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\FastUpdate\\SlateInvalidationWidgetList.cpp"
                         ,0x41a,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return uVar6;
  }
  return uVar6;
}

// Internal_BuildWidgetList_Recursive @ 142498dd0

/* WARNING: Enum "Type": Some values do not have unique names */

FSlateInvalidationWidgetIndex __thiscall
FSlateInvalidationWidgetList::Internal_BuildWidgetList_Recursive
          (FSlateInvalidationWidgetList *this,SWidget *param_1,FSlateInvalidationWidgetIndex param_2
          ,ushort *param_3,FSlateInvalidationWidgetVisibility param_4,bool param_5)

{
  code *pcVar1;
  atomic<int> aVar2;
  SWidget *pSVar3;
  bool bVar4;
  byte bVar5;
  char cVar6;
  ushort uVar7;
  uint uVar8;
  FSlateInvalidationWidgetIndex FVar9;
  int iVar10;
  atomic<int> aVar11;
  FSlateInvalidationWidgetIndex FVar12;
  FWidgetProxy *pFVar13;
  longlong *plVar14;
  undefined4 extraout_var;
  byte bVar15;
  TReferenceControllerBase<1> *pTVar16;
  int iVar17;
  longlong lVar18;
  undefined4 in_register_00000084;
  SWidget *this_00;
  ushort *puVar19;
  SWidget *pSVar20;
  ulonglong uVar21;
  FSlateInvalidationWidgetVisibility_u_0 local_res8 [8];
  SWidget *local_res10;
  undefined1 local_res18 [8];
  char local_res20;
  undefined7 in_stack_00000029;
  undefined3 in_stack_00000031;
  undefined4 in_stack_00000034;
  bool in_stack_00000038;
  ushort local_98 [4];
  ushort local_90 [4];
  uint local_88;
  FSlateInvalidationWidgetIndex local_84;
  undefined1 local_80 [16];
  longlong lStack_70;
  FSlateInvalidationWidgetIndex local_68;
  int local_64;
  longlong local_60;
  TReferenceControllerBase<1> *local_58;
  SWidget *local_50;
  
  this_00 = (SWidget *)CONCAT44(in_register_00000084,param_2);
  if ((this->FirstArrayIndex == -1) ||
     (local_res20 = '\0',
     *(int *)((longlong)this->FirstArrayIndex * 0x40 + 0x18 + *(longlong *)&this->Data) == 0)) {
    local_res20 = '\x01';
  }
  uVar7 = *(ushort *)CONCAT71(in_stack_00000029,param_4.field0_0x0);
  uVar21 = (ulonglong)uVar7;
  local_res10 = param_1;
  if (uVar7 == FSlateInvalidationWidgetIndex::Invalid.ArrayIndex) {
    uVar7 = AddArrayNodeIfNeeded(this,true);
  }
  else {
    if (*(int *)(uVar21 * 0x40 + 0x18 + *(longlong *)&this->Data) + 1 <=
        (this->WidgetListConfig).PreferedElementsNum) goto LAB_142498e5d;
    uVar7 = InsertDataNodeAfter(this,uVar7,true);
  }
  uVar21 = (ulonglong)uVar7;
LAB_142498e5d:
  lVar18 = uVar21 * 0x40 + *(longlong *)&this->Data;
  uVar8 = *(uint *)(lVar18 + 0x18);
  if (uVar8 == *(uint *)(lVar18 + 0x1c)) {
    uVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,(ForAnyElementType *)(lVar18 + 0x10),(int *)(lVar18 + 0x1c));
  }
  puVar19 = (ushort *)CONCAT71(in_stack_00000029,param_4.field0_0x0);
  *(uint *)(lVar18 + 0x18) = uVar8 + 1;
  uVar7 = (ushort)uVar8;
  local_84.ElementIndex = uVar7;
  local_84.ArrayIndex = (ushort)uVar21;
  FVar9 = local_84;
  lVar18 = *(longlong *)(lVar18 + 0x10);
  *(SWidget **)(lVar18 + (longlong)(int)uVar8 * 0x18) = this_00;
  lVar18 = lVar18 + (longlong)(int)uVar8 * 0x18;
  *(FSlateInvalidationWidgetIndex *)(lVar18 + 8) = FSlateInvalidationWidgetIndex::Invalid;
  *(FSlateInvalidationWidgetIndex *)(lVar18 + 0xc) = FSlateInvalidationWidgetIndex::Invalid;
  *(FSlateInvalidationWidgetIndex *)(lVar18 + 0x10) = FSlateInvalidationWidgetIndex::Invalid;
  *(undefined4 *)(lVar18 + 0x14) = 0;
  *puVar19 = (ushort)uVar21;
  *(FSlateInvalidationWidgetIndex *)&param_1->_padding_ = local_84;
  bVar15 = 0;
  if ((*(uchar *)&this_00->VisibilityAttribute & 0x19) != 0) {
    bVar15 = 0xfe;
  }
  bVar5 = 0;
  if ((TEnumAsByte<EVisibility::Private>)*(uchar *)&this_00->VisibilityAttribute ==
      EVisibility::Collapsed.Value.Value) {
    bVar5 = 8;
  }
  local_88 = (uint)(byte)(bVar15 & 3 | (*(byte *)CONCAT44(in_stack_00000034,_param_5) & 3) == 3 |
                          bVar5 | -((*(byte *)CONCAT44(in_stack_00000034,_param_5) & 0xc) != 0) & 4U
                         );
  if (this_00->bHasRegisteredSlateAttribute == '\x01' && this_00->bEnabledAttributesUpdate == '\x01'
     ) {
    lVar18 = (ulonglong)*puVar19 * 0x40 + *(longlong *)&this->Data;
    local_98[0] = uVar7;
    if (((*(ushort **)(lVar18 + 0x20) <= local_98) &&
        (local_98 < *(ushort **)(lVar18 + 0x20) + *(int *)(lVar18 + 0x2c))) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar1 = (code *)swi(3);
      FVar9 = (FSlateInvalidationWidgetIndex)(*pcVar1)();
      return FVar9;
    }
    iVar10 = *(int *)(lVar18 + 0x28);
    if (iVar10 == *(int *)(lVar18 + 0x2c)) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x202,(ForAnyElementType *)(lVar18 + 0x20),(int *)(lVar18 + 0x2c));
    }
    *(int *)(lVar18 + 0x28) = iVar10 + 1;
    *(ushort *)(*(longlong *)(lVar18 + 0x20) + (longlong)iVar10 * 2) = local_98[0];
    if ((local_88 & 4) == 0) {
      FSlateAttributeMetaData::UpdateOnlyVisibilityAttributes
                (this_00,DenyAndClearDelayedInvalidation);
      bVar15 = 0;
      if ((*(uchar *)&this_00->VisibilityAttribute & 0x19) != 0) {
        bVar15 = 2;
      }
      bVar5 = 0;
      if ((TEnumAsByte<EVisibility::Private>)*(uchar *)&this_00->VisibilityAttribute ==
          EVisibility::Collapsed.Value.Value) {
        bVar5 = 8;
      }
      local_88 = CONCAT31(local_88._1_3_,
                          bVar15 | bVar5 |
                          -((*(byte *)CONCAT44(in_stack_00000034,_param_5) & 0xc) != 0) & 4U |
                          (*(byte *)CONCAT44(in_stack_00000034,_param_5) & 3) == 3);
    }
    puVar19 = (ushort *)CONCAT71(in_stack_00000029,param_4.field0_0x0);
  }
  if ((this_00->UpdateFlags &
      (NeedsVolatilePrepass|NeedsVolatilePaint|NeedsActiveTimerUpdate|NeedsTick)) != None) {
    lVar18 = (ulonglong)*puVar19 * 0x40 + *(longlong *)&this->Data;
    local_90[0] = uVar7;
    if (((*(ushort **)(lVar18 + 0x30) <= local_90) &&
        (local_90 < *(ushort **)(lVar18 + 0x30) + *(int *)(lVar18 + 0x3c))) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar1 = (code *)swi(3);
      FVar9 = (FSlateInvalidationWidgetIndex)(*pcVar1)();
      return FVar9;
    }
    iVar10 = *(int *)(lVar18 + 0x38);
    if (iVar10 == *(int *)(lVar18 + 0x3c)) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x202,(ForAnyElementType *)(lVar18 + 0x30),(int *)(lVar18 + 0x3c));
    }
    *(int *)(lVar18 + 0x38) = iVar10 + 1;
    *(ushort *)(*(longlong *)(lVar18 + 0x30) + (longlong)iVar10 * 2) = local_90[0];
  }
  cVar6 = (**(code **)(this_00->_padding_ + 0x210))(this_00);
  pFVar13 = operator[](this,FVar9);
  pSVar20 = local_res10;
  pFVar13->ParentIndex = SUB84(param_3,0);
  bVar15 = (cVar6 << 3 ^ (pFVar13->field6_0x16).PrivateFlags) & 8 ^
           (pFVar13->field6_0x16).PrivateFlags;
  pFVar13->Index = FVar9;
  pFVar13->LeafMostChildIndex = *(FSlateInvalidationWidgetIndex *)&local_res10->_padding_;
  (pFVar13->field6_0x16).PrivateFlags = bVar15;
  (pFVar13->Visibility).field0_0x0.Flags = (uchar)local_88;
  (pFVar13->field6_0x16).PrivateFlags = (this_00->UpdateFlags >> 3 ^ bVar15) & 0x10 ^ bVar15;
  if ((this->WidgetListConfig).bAssignedWidgetIndex != false) {
    local_80._8_8_ = (this->Owner).InvalidationRoot;
    lStack_70 = *(longlong *)&(this->Owner).UniqueId;
    local_68 = FVar9;
    local_64 = *(int *)(uVar21 * 0x40 + 8 + *(longlong *)&this->Data) * 0x400 + (uVar8 & 0xffff);
    local_res8[0].Flags = (uchar)local_88;
    SWidget::SetFastPathProxyHandle
              (this_00,(FWidgetProxyHandle *)(local_80 + 8),
               (FSlateInvalidationWidgetVisibility)SUB81(local_res8,0),in_stack_00000038);
  }
  if ((cVar6 == '\0') || (local_res20 != '\0')) {
    plVar14 = (longlong *)(**(code **)(this_00->_padding_ + 0x188))(this_00);
    if (*(char *)((longlong)plVar14 + 0x19) != -0x24) {
      UE::Logging::Private::BasicFatalLog
                ((FStaticBasicLogRecord *)
                 &`protected:_void___cdecl_FChildren::Debug_TestDestroyTag(void)const___ptr64'::__l3
                  ::LOG_Static,(FLogCategoryBase *)&LogSlate);
    }
    local_res20 = (char)plVar14[3];
    *(undefined1 *)(plVar14 + 3) = 1;
    iVar10 = (**(code **)*plVar14)(plVar14);
    iVar17 = 0;
    if (0 < iVar10) {
      do {
        (**(code **)(*plVar14 + 0x38))(plVar14,&local_60,iVar17);
        pSVar3 = local_50;
        if (local_50 != SNullWidget::NullWidget.Object) {
          pTVar16 = (local_50->ParentWidgetPtr).WeakReferenceCount.ReferenceController;
          pSVar20 = (SWidget *)0x0;
          if (pTVar16 != (TReferenceControllerBase<1> *)0x0) {
            aVar2 = pTVar16->SharedReferenceCount;
            do {
              if (aVar2 == (atomic<int>)0x0) {
                pTVar16 = (TReferenceControllerBase<1> *)0x0;
                goto LAB_142499274;
              }
              LOCK();
              aVar11 = pTVar16->SharedReferenceCount;
              bVar4 = aVar2 == aVar11;
              if (bVar4) {
                pTVar16->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
                aVar11 = aVar2;
              }
              UNLOCK();
              aVar2 = aVar11;
            } while (!bVar4);
            pSVar20 = (local_50->ParentWidgetPtr).Object;
          }
LAB_142499274:
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar16);
          if ((pSVar20 != this_00) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("NewWidget.GetParentWidget().Get() == &Widget",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\FastUpdate\\SlateInvalidationWidgetList.cpp"
                                 ,0x1e5,L""), bVar4)) {
            pcVar1 = (code *)swi(3);
            FVar9 = (FSlateInvalidationWidgetIndex)(*pcVar1)();
            return FVar9;
          }
          local_res18[0] = (undefined1)local_88;
          FVar12 = Internal_BuildWidgetList_Recursive
                             (this,(SWidget *)local_80,SUB84(pSVar3,0),
                              (ushort *)(ulonglong)(uint)FVar9,param_4,SUB81(local_res18,0));
          *(undefined4 *)&local_res10->_padding_ = *(undefined4 *)CONCAT44(extraout_var,FVar12);
          pSVar20 = local_res10;
        }
        if (local_60 != 0) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_58);
        }
        iVar17 = iVar17 + 1;
      } while (iVar17 < iVar10);
    }
    *(char *)(plVar14 + 3) = local_res20;
    pFVar13 = operator[](this,FVar9);
    pFVar13->LeafMostChildIndex = *(FSlateInvalidationWidgetIndex *)&pSVar20->_padding_;
  }
  return SUB84(pSVar20,0);
}

// Internal_CutArray @ 142499340

FCutResult __thiscall
FSlateInvalidationWidgetList::Internal_CutArray
          (FSlateInvalidationWidgetList *this,FSlateInvalidationWidgetIndex param_1)

{
  longlong *plVar1;
  ushort uVar2;
  IProcessChildOrderInvalidationCallback *pIVar3;
  code *pcVar4;
  FSlateInvalidationWidgetIndex FVar5;
  bool bVar6;
  ushort uVar7;
  ushort uVar8;
  int iVar9;
  FSlateInvalidationWidgetIndex FVar10;
  undefined4 extraout_var;
  FWidgetProxy *pFVar11;
  uint uVar12;
  undefined4 in_register_00000014;
  uint *puVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ushort uVar17;
  uint uVar18;
  uint uVar19;
  ulonglong in_R8;
  ForAnyElementType *pFVar20;
  undefined2 uVar21;
  longlong lVar22;
  ushort uVar23;
  uint uVar24;
  longlong lVar25;
  FSlateInvalidationWidgetIndex local_res8;
  short sStackX_1a;
  undefined2 local_118 [4];
  undefined2 local_110 [4];
  ushort local_108;
  FSlateInvalidationWidgetIndex local_104;
  uint local_100;
  FSlateInvalidationWidgetIndex local_fc;
  FSlateInvalidationWidgetIndex local_f8;
  FSlateInvalidationWidgetIndex local_f4;
  ushort local_f0;
  ushort uStack_ee;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  uint local_e0;
  undefined4 local_dc;
  uint local_d8;
  uint local_d4;
  longlong local_d0;
  FSlateInvalidationWidgetIndex local_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  longlong local_a8;
  uint local_98;
  uint uStack_94;
  uint uStack_90;
  int iStack_8c;
  undefined1 local_88 [8];
  longlong *local_80;
  undefined8 *local_78;
  ushort local_70;
  ushort local_6e;
  FSlateInvalidationRoot *local_68;
  undefined8 uStack_60;
  FSlateInvalidationWidgetIndex local_58;
  int iStack_54;
  
  FVar10 = FSlateInvalidationWidgetIndex::Invalid;
  puVar13 = (uint *)CONCAT44(in_register_00000014,param_1);
  uStack_b0 = 0;
  lVar22 = (in_R8 & 0xffff) * 0x40;
  local_b8 = CONCAT44(FSlateInvalidationWidgetIndex::Invalid,FSlateInvalidationWidgetIndex::Invalid)
  ;
  uVar17 = (ushort)in_R8;
  iVar9 = *(int *)(*(longlong *)&this->Data + 0x18 + lVar22);
  *puVar13 = 0xffffffff;
  local_f8 = FVar10;
  local_f4 = FVar10;
  local_a8 = lVar22;
  if ((int)((uint)(in_R8 >> 0x10) & 0xffff) < iVar9 + -1) {
    if ((this->NumberOfLock != 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("NumberOfLock == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\FastUpdate\\SlateInvalidationWidgetList.cpp"
                           ,0x553,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      iVar9 = (*pcVar4)();
      return (FCutResult)iVar9;
    }
    sStackX_1a = (short)(in_R8 >> 0x10);
    uVar23 = sStackX_1a + 1;
    uVar2 = *(ushort *)(lVar22 + 0x18 + *(longlong *)&this->Data);
    uVar7 = InsertDataNodeAfter(this,uVar17,false);
    uVar24 = (uint)uVar23;
    local_d0 = (ulonglong)uVar7 * 0x40;
    local_d4 = (uint)uVar2 - (uint)uVar23;
    pFVar20 = (ForAnyElementType *)(*(longlong *)&this->Data + 0x10 + local_d0);
    if ((int)local_d4 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)local_d4);
    }
    if (*(int *)((longlong)&pFVar20[1].Data + 4) < (int)local_d4) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,local_d4,pFVar20,*(int *)&pFVar20[1].Data,
                 (int *)((longlong)&pFVar20[1].Data + 4));
    }
    uVar8 = uVar2 - 1;
    uVar18 = (uint)in_R8 & 0xffff;
    uVar12 = (uint)uVar23 << 0x10 | uVar18;
    uVar18 = (uint)uVar8 << 0x10 | uVar18;
    _local_f0 = CONCAT22(uVar8,uVar17);
    iVar9 = *(int *)(*(longlong *)&this->Data + 8 + lVar22) * 0x400;
    local_100 = *(int *)((in_R8 & 0xffff) * 0x40 + 8 + *(longlong *)&this->Data) * 0x400 +
                (uint)uVar8;
    local_e0 = iVar9 + uVar24;
    if (uVar23 < uVar2) {
      iStack_8c = iVar9 + (uint)uVar8;
      local_b8 = CONCAT44(uVar18,uVar12);
      uStack_b0 = CONCAT44(iStack_8c,local_e0);
      *puVar13 = uVar24;
      local_ec = (uint)uVar17;
      local_104.ArrayIndex = uVar7;
      uVar17 = uVar23;
      local_98 = uVar12;
      uStack_94 = uVar18;
      uStack_90 = local_e0;
      do {
        local_ec = CONCAT22(uVar17,(undefined2)local_ec);
        lVar25 = local_a8 + *(longlong *)&this->Data;
        uVar24 = (uint)uVar17;
        lVar22 = *(longlong *)&this->Data + local_d0;
        local_108 = uVar17;
        if ((*(int *)(lVar25 + 0x18) <= (int)uVar24) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          iVar9 = (*pcVar4)();
          return (FCutResult)iVar9;
        }
        pFVar11 = (FWidgetProxy *)(*(longlong *)(lVar25 + 0x10) + (ulonglong)uVar24 * 0x18);
        if (((*(FWidgetProxy **)(lVar22 + 0x10) <= pFVar11) &&
            (pFVar11 < *(FWidgetProxy **)(lVar22 + 0x10) + *(int *)(lVar22 + 0x1c))) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar4 = (code *)swi(3);
          iVar9 = (*pcVar4)();
          return (FCutResult)iVar9;
        }
        uVar18 = *(uint *)(lVar22 + 0x18);
        if (uVar18 == *(uint *)(lVar22 + 0x1c)) {
          local_d8 = uVar18;
          uVar18 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x818,(ForAnyElementType *)(lVar22 + 0x10),(int *)(lVar22 + 0x1c));
        }
        *(uint *)(lVar22 + 0x18) = uVar18 + 1;
        local_d8 = uVar18;
        FWidgetProxy::FWidgetProxy
                  ((FWidgetProxy *)(*(longlong *)(lVar22 + 0x10) + (longlong)(int)uVar18 * 0x18),
                   pFVar11);
        lVar22 = local_a8 + *(longlong *)&this->Data;
        if ((*(int *)(lVar22 + 0x18) <= (int)uVar24) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          iVar9 = (*pcVar4)();
          return (FCutResult)iVar9;
        }
        local_104.ElementIndex = (ushort)uVar18;
        FVar5 = local_104;
        *(undefined8 *)(*(longlong *)(lVar22 + 0x10) + (ulonglong)uVar24 * 0x18) = 0;
        local_c8 = local_104;
        if (((ushort)(uVar17 - uVar23) != (ushort)uVar18) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("OldToNewIndex(MoveWidgetIndex) == NewWidgetIndex",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\FastUpdate\\SlateInvalidationWidgetList.cpp"
                               ,0x576,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          iVar9 = (*pcVar4)();
          return (FCutResult)iVar9;
        }
        lVar22 = local_d0 + *(longlong *)&this->Data;
        if ((*(int *)(lVar22 + 0x18) <= (int)(uVar18 & 0xffff)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          iVar9 = (*pcVar4)();
          return (FCutResult)iVar9;
        }
        plVar1 = (longlong *)(*(longlong *)(lVar22 + 0x10) + (ulonglong)(uVar18 & 0xffff) * 0x18);
        if ((FVar10.ArrayIndex == FSlateInvalidationWidgetIndex::Invalid.ArrayIndex) &&
           (bVar6 = local_f4.ElementIndex == FSlateInvalidationWidgetIndex::Invalid.ElementIndex,
           local_f8 = FVar10, local_f4 = FVar10, bVar6)) {
          local_f8 = FVar5;
          local_f4 = FVar5;
        }
        uVar24 = *(uint *)((longlong)plVar1 + 0xc);
        *(FSlateInvalidationWidgetIndex *)(plVar1 + 1) = FVar5;
        uVar18 = *(int *)((ulonglong)(uVar24 & 0xffff) * 0x40 + 8 + *(longlong *)&this->Data) *
                 0x400 + (uVar24 >> 0x10);
        if ((local_e0 <= uVar18) && (uVar18 <= local_100)) {
          local_e8 = CONCAT22((short)(uVar24 >> 0x10) - uVar23,uVar7);
          *(undefined4 *)((longlong)plVar1 + 0xc) = local_e8;
        }
        uVar24 = *(uint *)(plVar1 + 2);
        uVar18 = uVar24 & 0xffff;
        uVar19 = uVar24 >> 0x10;
        uVar12 = *(int *)((ulonglong)uVar18 * 0x40 + 8 + *(longlong *)&this->Data) * 0x400 + uVar19;
        if ((local_e0 <= uVar12) && (uVar12 <= local_100)) {
          uVar17 = (short)(uVar24 >> 0x10) - uVar23;
          uVar19 = (uint)uVar17;
          local_e4 = CONCAT22(uVar17,uVar7);
          uVar18 = (uint)uVar7;
          *(undefined4 *)(plVar1 + 2) = local_e4;
        }
        local_80 = plVar1;
        if ((((ushort)uVar18 == FSlateInvalidationWidgetIndex::Invalid.ArrayIndex) &&
            ((ushort)uVar19 == FSlateInvalidationWidgetIndex::Invalid.ElementIndex)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("NewInvalidationWidget.LeafMostChildIndex != FSlateInvalidationWidgetIndex::Invalid"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\FastUpdate\\SlateInvalidationWidgetList.cpp"
                               ,0x58f,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          iVar9 = (*pcVar4)();
          return (FCutResult)iVar9;
        }
        lVar22 = (ulonglong)(*(uint *)((longlong)plVar1 + 0xc) & 0xffff) * 0x40 +
                 *(longlong *)&this->Data;
        uVar12 = *(uint *)((longlong)plVar1 + 0xc) >> 0x10;
        uVar15 = (ulonglong)uVar12;
        uVar24 = local_e0;
        uVar18 = local_100;
        if ((*(int *)(lVar22 + 0x18) <= (int)uVar12) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , uVar24 = local_e0, uVar18 = local_100, bVar6)) {
          pcVar4 = (code *)swi(3);
          iVar9 = (*pcVar4)();
          return (FCutResult)iVar9;
        }
        while( true ) {
          plVar1 = local_80;
          lVar14 = local_d0;
          FVar10 = local_f8;
          lVar25 = *(longlong *)(lVar22 + 0x10) + uVar15 * 0x18;
          uVar12 = *(uint *)(*(longlong *)(lVar22 + 0x10) + 0x10 + uVar15 * 0x18);
          uVar19 = *(int *)((ulonglong)(uVar12 & 0xffff) * 0x40 + 8 + *(longlong *)&this->Data) *
                   0x400 + (uVar12 >> 0x10);
          if ((uVar19 < uVar24) || (uVar18 < uVar19)) break;
          local_dc = CONCAT22((short)(uVar12 >> 0x10) - uVar23,uVar7);
          *(undefined4 *)(lVar25 + 0x10) = local_dc;
          if ((*(ushort *)(lVar25 + 0xc) == FSlateInvalidationWidgetIndex::Invalid.ArrayIndex) &&
             (*(ushort *)(lVar25 + 0xe) == FSlateInvalidationWidgetIndex::Invalid.ElementIndex))
          break;
          lVar22 = (ulonglong)(*(uint *)(lVar25 + 0xc) & 0xffff) * 0x40 + *(longlong *)&this->Data;
          uVar12 = *(uint *)(lVar25 + 0xc) >> 0x10;
          uVar15 = (ulonglong)uVar12;
          if ((*(int *)(lVar22 + 0x18) <= (int)uVar12) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            iVar9 = (*pcVar4)();
            return (FCutResult)iVar9;
          }
        }
        lVar22 = *local_80;
        if (lVar22 != 0) {
          local_68 = (this->Owner).InvalidationRoot;
          uStack_60 = *(undefined8 *)&(this->Owner).UniqueId;
          local_58 = local_c8;
          iStack_54 = *(int *)((ulonglong)uVar7 * 0x40 + 8 + *(longlong *)&this->Data) * 0x400 +
                      ((uint)local_c8 >> 0x10);
          *(FSlateInvalidationRoot **)(lVar22 + 0x18) = local_68;
          *(undefined8 *)(lVar22 + 0x20) = uStack_60;
          *(ulonglong *)(lVar22 + 0x28) = CONCAT44(iStack_54,local_c8);
          uVar21 = (undefined2)local_d8;
          if ((*(byte *)(lVar22 + 0x31) & 3) == 3) {
            lVar25 = *(longlong *)&this->Data + local_d0;
            local_118[0] = uVar21;
            if (((*(undefined2 **)(lVar25 + 0x20) <= local_118) &&
                (local_118 < *(undefined2 **)(lVar25 + 0x20) + *(int *)(lVar25 + 0x2c))) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar6)) {
              pcVar4 = (code *)swi(3);
              iVar9 = (*pcVar4)();
              return (FCutResult)iVar9;
            }
            iVar9 = *(int *)(lVar25 + 0x28);
            if (iVar9 == *(int *)(lVar25 + 0x2c)) {
              iVar9 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x202,(ForAnyElementType *)(lVar25 + 0x20),(int *)(lVar25 + 0x2c));
            }
            *(int *)(lVar25 + 0x28) = iVar9 + 1;
            *(undefined2 *)(*(longlong *)(lVar25 + 0x20) + (longlong)iVar9 * 2) = local_118[0];
            *(byte *)((longlong)plVar1 + 0x14) = *(byte *)((longlong)plVar1 + 0x14) & 0xbf;
          }
          if ((*(byte *)(lVar22 + 0x38) & 0xcc) != 0) {
            lVar14 = *(longlong *)&this->Data + lVar14;
            local_110[0] = uVar21;
            if (((*(undefined2 **)(lVar14 + 0x30) <= local_110) &&
                (local_110 < *(undefined2 **)(lVar14 + 0x30) + *(int *)(lVar14 + 0x3c))) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar6)) {
              pcVar4 = (code *)swi(3);
              iVar9 = (*pcVar4)();
              return (FCutResult)iVar9;
            }
            iVar9 = *(int *)(lVar14 + 0x38);
            if (iVar9 == *(int *)(lVar14 + 0x3c)) {
              iVar9 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x202,(ForAnyElementType *)(lVar14 + 0x30),(int *)(lVar14 + 0x3c));
            }
            *(int *)(lVar14 + 0x38) = iVar9 + 1;
            *(undefined2 *)(*(longlong *)(lVar14 + 0x30) + (longlong)iVar9 * 2) = local_110[0];
          }
        }
        uVar17 = local_108 + 1;
        local_108 = uVar17;
      } while (uVar17 < uVar2);
    }
    else {
      *puVar13 = uVar24;
    }
    uVar24 = local_d4;
    uVar15 = (ulonglong)uVar7;
    if ((*(uint *)(uVar15 * 0x40 + 0x18 + *(longlong *)&this->Data) != local_d4) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Data[NewArrayIndex].ElementList.Num() == NewExpectedElementArraySize",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\FastUpdate\\SlateInvalidationWidgetList.cpp"
                           ,0x5b5,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      iVar9 = (*pcVar4)();
      return (FCutResult)iVar9;
    }
    if ((*(short *)(uVar15 * 0x40 + 0xc + *(longlong *)&this->Data) != 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Data[NewArrayIndex].StartIndex == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\FastUpdate\\SlateInvalidationWidgetList.cpp"
                           ,0x5b6,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      iVar9 = (*pcVar4)();
      return (FCutResult)iVar9;
    }
    if (0 < (int)uVar24) {
      uVar16 = 0;
      local_res8.ElementIndex = 0;
      local_res8.ArrayIndex = uVar7;
      do {
        lVar22 = *(longlong *)&this->Data;
        uVar17 = (ushort)uVar16;
        local_res8.ElementIndex = uVar17;
        if ((*(int *)(lVar22 + 0x18 + uVar15 * 0x40) <= (int)uVar16) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          iVar9 = (*pcVar4)();
          return (FCutResult)iVar9;
        }
        lVar22 = *(longlong *)(lVar22 + 0x10 + uVar15 * 0x40) + uVar16 * 0x18;
        if (((*(ushort *)(lVar22 + 0xc) == FSlateInvalidationWidgetIndex::Invalid.ArrayIndex) &&
            (*(ushort *)(lVar22 + 0xe) == FSlateInvalidationWidgetIndex::Invalid.ElementIndex)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("NewInvalidationWidget.ParentIndex != FSlateInvalidationWidgetIndex::Invalid"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\FastUpdate\\SlateInvalidationWidgetList.cpp"
                               ,0x5bd,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          iVar9 = (*pcVar4)();
          return (FCutResult)iVar9;
        }
        if ((*(ushort *)(lVar22 + 0x10) != uVar7) || (*(ushort *)(lVar22 + 0x12) != uVar17)) {
          IncrementIndex(this,SUB84(&local_fc,0));
          do {
            lVar25 = (ulonglong)((uint)local_fc & 0xffff) * 0x40 + *(longlong *)&this->Data;
            uVar24 = (uint)local_fc >> 0x10;
            if ((*(int *)(lVar25 + 0x18) <= (int)uVar24) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar4 = (code *)swi(3);
              iVar9 = (*pcVar4)();
              return (FCutResult)iVar9;
            }
            lVar25 = *(longlong *)(lVar25 + 0x10);
            local_fc = *(FSlateInvalidationWidgetIndex *)(lVar25 + 0x10 + (ulonglong)uVar24 * 0x18);
            *(FSlateInvalidationWidgetIndex *)(lVar25 + 0xc + (ulonglong)uVar24 * 0x18) = local_res8
            ;
            if ((*(ushort *)(lVar22 + 0x10) == local_fc.ArrayIndex) &&
               (*(ushort *)(lVar22 + 0x12) == local_fc.ElementIndex)) goto LAB_142499d27;
            FVar10 = IncrementIndex(this,SUB84(local_88,0));
            local_fc = *(FSlateInvalidationWidgetIndex *)CONCAT44(extraout_var,FVar10);
          } while ((*(ushort *)(lVar22 + 0x10) != local_fc.ArrayIndex) ||
                  (*(ushort *)(lVar22 + 0x12) != local_fc.ElementIndex));
          pFVar11 = operator[](this,local_fc);
          pFVar11->ParentIndex = local_res8;
        }
LAB_142499d27:
        uVar16 = (ulonglong)(ushort)(uVar17 + 1);
        FVar10 = local_f8;
      } while ((int)(uint)(ushort)(uVar17 + 1) < (int)local_d4);
    }
  }
  pIVar3 = this->CurrentInvalidationCallback;
  if ((pIVar3 != (IProcessChildOrderInvalidationCallback *)0x0) &&
     (((ushort)local_b8 != FSlateInvalidationWidgetIndex::Invalid.ArrayIndex ||
      (local_b8._2_2_ != FSlateInvalidationWidgetIndex::Invalid.ElementIndex)))) {
    local_78 = &local_b8;
    local_70 = FVar10.ArrayIndex;
    local_6e = local_f4.ElementIndex;
    (**(code **)((longlong)*pIVar3 + 8))(pIVar3,&local_78);
  }
  return (FCutResult)(int)param_1;
}

// Internal_FindChildren @ 142499db0

void __thiscall
FSlateInvalidationWidgetList::Internal_FindChildren
          (FSlateInvalidationWidgetList *this,FSlateInvalidationWidgetIndex param_1,
          TArray<TTuple<SWidget_*,FSlateInvalidationWidgetIndex>,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>
          *param_2)

{
  FWidgetProxy *pFVar1;
  
  if (param_2->ArrayMax < 0x10) {
    UE::Core::Private::
    ReallocTo<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<TTuple<SWidget_*,FSlateInvalidationWidgetIndex>_>_>
              (0x10,8,0x10,&param_2->AllocatorInstance,param_2->ArrayNum,&param_2->ArrayMax);
  }
  pFVar1 = operator[](this,param_1);
  InvalidationList::
  ForEachChildren<FSlateInvalidationWidgetList_const_,_FSlateInvalidationWidgetList::Internal_FindChildren_::__l2::<lambda_1>_>
            (this,pFVar1,param_1,(<lambda_1>)param_2);
  return;
}

// Internal_RebuildWidgetListTree @ 142499e30

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSlateInvalidationWidgetList::Internal_RebuildWidgetListTree
          (FSlateInvalidationWidgetList *this,SWidget *param_1,int param_2)

{
  ulonglong uVar1;
  FSlateInvalidationWidgetVisibility_u_0 FVar2;
  code *pcVar3;
  atomic<int> aVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  atomic<int> aVar8;
  FSlateInvalidationWidgetIndex FVar9;
  longlong *plVar10;
  FWidgetProxy *pFVar11;
  undefined4 extraout_var;
  TReferenceControllerBase<1> *pTVar12;
  SWidget *pSVar13;
  bool bVar14;
  FSlateInvalidationWidgetVisibility_u_0 local_res20 [8];
  FSlateInvalidationWidgetIndex local_84;
  ushort local_80 [2];
  int local_7c;
  FSlateInvalidationWidgetIndex local_78;
  FSlateInvalidationWidgetIndex local_74;
  undefined1 local_70 [48];
  ulonglong local_40;
  
  bVar14 = param_1 != SNullWidget::NullWidget.Object;
  plVar10 = (longlong *)(**(code **)(param_1->_padding_ + 0x188))(param_1);
  uVar1._0_2_ = (param_1->FastPathProxyHandle).WidgetIndex.ArrayIndex;
  uVar1._2_2_ = (param_1->FastPathProxyHandle).WidgetIndex.ElementIndex;
  uVar1._4_4_ = (param_1->FastPathProxyHandle).WidgetSortOrder;
  local_70._32_4_ =
       *(undefined4 *)&(param_1->FastPathProxyHandle).InvalidationRootHandle.InvalidationRoot;
  local_70._36_4_ =
       *(undefined4 *)
        ((longlong)&(param_1->FastPathProxyHandle).InvalidationRootHandle.InvalidationRoot + 4);
  local_70._40_4_ = (param_1->FastPathProxyHandle).InvalidationRootHandle.UniqueId;
  local_70._44_4_ = *(undefined4 *)&(param_1->FastPathProxyHandle).InvalidationRootHandle.field_0xc;
  if (((bVar14) && (local_40 = uVar1, iVar7 = (**(code **)*plVar10)(plVar10), param_2 < iVar7)) &&
     (((undefined2)uVar1 != FSlateInvalidationWidgetIndex::Invalid.ArrayIndex ||
      (uVar1._2_2_ != FSlateInvalidationWidgetIndex::Invalid.ElementIndex)))) {
    pFVar11 = operator[](this,(FSlateInvalidationWidgetIndex)(undefined4)uVar1);
    if ((pFVar11->Widget != param_1) &&
       (bVar14 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<_8451985538147155439>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\FastUpdate\\SlateInvalidationWidgetList.cpp"
                            ,0x211,"CurrentInvalidationWidget.GetWidget() == &Widget"), bVar14)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    FVar9 = pFVar11->LeafMostChildIndex;
    local_80[0] = FVar9.ArrayIndex;
    local_78 = FVar9;
    local_74 = FVar9;
    bVar14 = ShouldDoRecursion(this,param_1);
    local_84 = FVar9;
    if (bVar14) {
      FVar2 = (pFVar11->Visibility).field0_0x0;
      if (*(char *)((longlong)plVar10 + 0x19) != -0x24) {
        UE::Logging::Private::BasicFatalLog
                  ((FStaticBasicLogRecord *)
                   &`protected:_void___cdecl_FChildren::Debug_TestDestroyTag(void)const___ptr64'::
                    __l3::LOG_Static,(FLogCategoryBase *)&LogSlate);
      }
      lVar5 = plVar10[3];
      *(undefined1 *)(plVar10 + 3) = 1;
      local_7c = (**(code **)*plVar10)(plVar10);
      iVar7 = 0;
      if (0 < local_7c) {
        do {
          (**(code **)(*plVar10 + 0x38))(plVar10,local_70 + 8,iVar7);
          uVar6 = local_70._24_8_;
          if ((SWidget *)local_70._24_8_ != SNullWidget::NullWidget.Object) {
            pTVar12 = (((TWeakPtr<SWidget,1> *)(local_70._24_8_ + 0x1c8))->WeakReferenceCount).
                      ReferenceController;
            pSVar13 = (SWidget *)0x0;
            if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
              aVar4 = pTVar12->SharedReferenceCount;
              do {
                if (aVar4 == (atomic<int>)0x0) {
                  pTVar12 = (TReferenceControllerBase<1> *)0x0;
                  goto LAB_142499fe4;
                }
                LOCK();
                aVar8 = pTVar12->SharedReferenceCount;
                bVar14 = aVar4 == aVar8;
                if (bVar14) {
                  pTVar12->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
                  aVar8 = aVar4;
                }
                UNLOCK();
                aVar4 = aVar8;
              } while (!bVar14);
              pSVar13 = ((TWeakPtr<SWidget,1> *)(local_70._24_8_ + 0x1c8))->Object;
            }
LAB_142499fe4:
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar12);
            if ((pSVar13 != param_1) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("ChildWidget.GetParentWidget().Get() == &Widget",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\FastUpdate\\SlateInvalidationWidgetList.cpp"
                                    ,0x21f,L""), bVar14)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            local_res20[0] = FVar2;
            FVar9 = Internal_BuildWidgetList_Recursive
                              (this,(SWidget *)local_70,SUB84(uVar6,0),
                               (ushort *)(uVar1 & 0xffffffff),
                               (FSlateInvalidationWidgetVisibility)SUB81(local_80,0),
                               SUB81(local_res20,0));
            local_84 = *(FSlateInvalidationWidgetIndex *)CONCAT44(extraout_var,FVar9);
          }
          if (local_70._8_8_ != 0) {
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      ((TReferenceControllerBase<1> *)local_70._16_8_);
          }
          iVar7 = iVar7 + 1;
          FVar9 = local_78;
        } while (iVar7 < local_7c);
      }
      *(char *)(plVar10 + 3) = (char)lVar5;
    }
    if (local_84.ArrayIndex == FVar9.ArrayIndex) {
      if (local_84.ElementIndex == local_74.ElementIndex) {
        return;
      }
    }
    pFVar11 = operator[](this,(FSlateInvalidationWidgetIndex)(undefined4)uVar1);
    pFVar11->LeafMostChildIndex = local_84;
    UpdateParentLeafIndex(this,pFVar11,FVar9,local_84);
  }
  return;
}

// Internal_RemoveRangeFromSameParent @ 14249a0f0

void __thiscall
FSlateInvalidationWidgetList::Internal_RemoveRangeFromSameParent
          (FSlateInvalidationWidgetList *this,FIndexRange *param_1)

{
  void *_Dst;
  ushort uVar1;
  uint uVar2;
  FSlateInvalidationWidgetIndex FVar3;
  FSlateInvalidationWidgetIndex FVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  FWidgetProxy *pFVar10;
  FWidgetProxy *pFVar11;
  FWidgetProxy *pFVar12;
  uint uVar13;
  undefined1 *puVar14;
  uint uVar15;
  longlong lVar16;
  ulonglong uVar17;
  TSparseArray<FSlateInvalidationWidgetList::FArrayNode,FDefaultSparseArrayAllocator> *pTVar18;
  int iVar19;
  longlong lVar20;
  ushort uVar21;
  ushort uVar22;
  ushort uVar23;
  ulonglong uVar24;
  longlong lVar25;
  FSlateInvalidationWidgetIndex local_res8;
  ushort local_res18 [4];
  undefined1 local_res20 [8];
  FSlateInvalidationWidgetList *local_78;
  ulonglong local_70;
  FSlateInvalidationWidgetList *local_68;
  FSlateInvalidationRootHandle local_60;
  ushort local_50;
  ushort uStack_4e;
  undefined4 uStack_4c;
  
  pFVar10 = operator[](this,param_1->InclusiveMin);
  pFVar11 = operator[](this,param_1->InclusiveMax);
  if (((pFVar10->ParentIndex).ArrayIndex != FSlateInvalidationWidgetIndex::Invalid.ArrayIndex) ||
     ((pFVar10->ParentIndex).ElementIndex != FSlateInvalidationWidgetIndex::Invalid.ElementIndex)) {
    pFVar12 = operator[](this,pFVar10->ParentIndex);
    uVar15 = (param_1->OrderMin).Order;
    uVar13 = *(int *)((ulonglong)((uint)pFVar12->LeafMostChildIndex & 0xffff) * 0x40 + 8 +
                     *(longlong *)&this->Data) * 0x400 + ((uint)pFVar12->LeafMostChildIndex >> 0x10)
    ;
    if ((uVar15 <= uVar13) && (uVar2 = (param_1->OrderMax).Order, uVar13 <= uVar2)) {
      pFVar11 = operator[](this,pFVar11->ParentIndex);
      uVar13 = *(int *)((ulonglong)((uint)pFVar11->LeafMostChildIndex & 0xffff) * 0x40 + 8 +
                       *(longlong *)&this->Data) * 0x400 +
               ((uint)pFVar11->LeafMostChildIndex >> 0x10);
      if (((uVar13 < uVar15) || (uVar2 < uVar13)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Range.Include(FSlateInvalidationWidgetSortOrder{ *this, (*this)[InvalidationWidgetEnd.ParentIndex].LeafMostChildIndex })"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\FastUpdate\\SlateInvalidationWidgetList.cpp"
                             ,0x4a3,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      FVar3 = param_1->InclusiveMin;
      uVar15 = (uint)FVar3 & 0xffff;
      if ((int)uVar15 < *(int *)&(this->Data).field_0x28) {
        if ((*(int *)&(this->Data).field_0x28 <= (int)uVar15) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        puVar14 = *(undefined1 **)&(this->Data).field_0x20;
        if (puVar14 == (undefined1 *)0x0) {
          puVar14 = &(this->Data).field_0x10;
        }
        if ((*(uint *)(puVar14 + (ulonglong)(uVar15 >> 5) * 4) >> ((uint)FVar3 & 0x1f) & 1) == 0)
        goto LAB_14249a244;
      }
      else {
LAB_14249a244:
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Data.IsValidIndex(Index.ArrayIndex)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\FastUpdate\\SlateInvalidationWidgetList.cpp"
                           ,0x336,L"");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      local_res8.ArrayIndex = FVar3.ArrayIndex;
      local_res8.ElementIndex = FVar3.ElementIndex;
      lVar16 = (ulonglong)local_res8.ArrayIndex * 0x40;
      if (local_res8.ElementIndex == *(ushort *)(*(longlong *)&this->Data + 0xc + lVar16)) {
        iVar19 = *(int *)(*(longlong *)&this->Data + lVar16);
        local_res8 = FSlateInvalidationWidgetIndex::Invalid;
        if (iVar19 != -1) {
          if (((int)((uint)FSlateInvalidationWidgetIndex::Invalid & 0xffff) <= iVar19) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Data[Index.ArrayIndex].PreviousArrayIndex < FSlateInvalidationWidgetIndex::Invalid.ArrayIndex"
                                 ,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\FastUpdate\\SlateInvalidationWidgetList.cpp"
                                 ,0x33d,L""), bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          local_res8.ArrayIndex = *(ushort *)(*(longlong *)&this->Data + lVar16);
          if ((*(int *)((ulonglong)local_res8.ArrayIndex * 0x40 + 0x18 + *(longlong *)&this->Data) <
               1) && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Data[Index.ArrayIndex].ElementList.Num() > 0",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\FastUpdate\\SlateInvalidationWidgetList.cpp"
                                         ,0x33f,L""), bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          local_res8.ElementIndex =
               *(short *)((ulonglong)local_res8.ArrayIndex * 0x40 + 0x18 + *(longlong *)&this->Data)
               - 1;
        }
      }
      else {
        local_res8.ElementIndex = local_res8.ElementIndex - 1;
      }
      UpdateParentLeafIndex(this,pFVar10,pFVar12->LeafMostChildIndex,local_res8);
    }
  }
  FVar3 = param_1->InclusiveMax;
  FVar4 = param_1->InclusiveMin;
  uVar24 = (ulonglong)((uint)FVar3 & 0xffff);
  uVar23 = FVar3.ArrayIndex;
  uVar21 = FVar4.ArrayIndex;
  local_70 = uVar24;
  if (((int)((*(int *)(uVar24 * 0x40 + 0x18 + *(longlong *)&this->Data) - ((uint)FVar3 >> 0x10)) +
            -1) < (this->WidgetListConfig).NumberElementsLeftBeforeSplitting) ||
     ((uVar21 == uVar23 &&
      (*(ushort *)((ulonglong)((uint)FVar4 & 0xffff) * 0x40 + 0xc + *(longlong *)&this->Data) !=
       FVar4.ElementIndex)))) {
    bVar7 = true;
    Internal_CutArray(this,SUB84(local_res20,0));
  }
  else {
    bVar7 = false;
  }
  local_78 = this;
  local_68 = this;
  if ((uVar21 != uVar23) &&
     (uVar22 = *(ushort *)((ulonglong)((uint)FVar4 & 0xffff) * 0x40 + 4 + *(longlong *)&this->Data),
     uVar22 != uVar23)) {
    do {
      lVar16 = *(longlong *)&this->Data;
      lVar20 = (ulonglong)uVar22 * 0x40;
      uVar17 = (ulonglong)*(ushort *)(lVar20 + 0xc + lVar16);
      lVar16 = (longlong)*(int *)(lVar20 + 0x18 + lVar16);
      if ((longlong)uVar17 < lVar16) {
        lVar25 = uVar17 * 0x18;
        lVar16 = lVar16 - uVar17;
        do {
          lVar5 = *(longlong *)&this->Data;
          uVar13 = (uint)uVar17;
          uVar15 = 0;
          if ((int)uVar13 < *(int *)(lVar5 + 0x18 + lVar20)) {
            uVar15 = ~uVar13 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          lVar5 = *(longlong *)(lVar25 + *(longlong *)(lVar5 + 0x10 + lVar20));
          if (lVar5 != 0) {
            FSlateInvalidationRootHandle::FSlateInvalidationRootHandle(&local_60);
            local_50 = FSlateInvalidationWidgetIndex::Invalid.ArrayIndex;
            uStack_4e = FSlateInvalidationWidgetIndex::Invalid.ElementIndex;
            uStack_4c = 0;
            uVar24 = (ulonglong)(uint)FSlateInvalidationWidgetIndex::Invalid;
            *(FSlateInvalidationRoot **)(lVar5 + 0x18) = local_60.InvalidationRoot;
            *(undefined8 *)(lVar5 + 0x20) = local_60._8_8_;
            *(ulonglong *)(lVar5 + 0x28) = uVar24;
          }
          uVar17 = (ulonglong)(uVar13 + 1);
          lVar25 = lVar25 + 0x18;
          lVar16 = lVar16 + -1;
          uVar24 = local_70;
        } while (lVar16 != 0);
      }
      uVar23 = *(ushort *)((ulonglong)uVar22 * 0x40 + 4 + *(longlong *)&this->Data);
      RemoveDataNode(this,uVar22);
      uVar22 = uVar23;
    } while (uVar23 != (ushort)uVar24);
  }
  pTVar18 = &this->Data;
  uVar23 = (ushort)uVar24;
  if (bVar7) {
    if (uVar21 != uVar23) {
      FVar3 = param_1->InclusiveMax;
      `FSlateInvalidationWidgetList::Internal_RemoveRangeFromSameParent'::__l20::<lambda_1>::
      operator()(&local_78,FVar3.ArrayIndex,
                 (uint)*(ushort *)
                        ((ulonglong)((uint)FVar3 & 0xffff) * 0x40 + 0xc + *(longlong *)pTVar18),
                 ((uint)FVar3 >> 0x10) + 1);
      RemoveDataNode(this,FVar3.ArrayIndex);
    }
  }
  else {
    uVar22 = (param_1->InclusiveMin).ArrayIndex;
    uVar1 = (param_1->InclusiveMax).ArrayIndex;
    if (uVar21 == uVar23) {
      if ((uVar22 != uVar1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Range.GetInclusiveMinWidgetIndex().ArrayIndex == Range.GetInclusiveMaxWidgetIndex().ArrayIndex"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\FastUpdate\\SlateInvalidationWidgetList.cpp"
                             ,0x524,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (((param_1->InclusiveMin).ElementIndex !=
           *(ushort *)
            ((ulonglong)((uint)param_1->InclusiveMin & 0xffff) * 0x40 + 0xc + *(longlong *)pTVar18))
         && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                               ("Range.GetInclusiveMinWidgetIndex().ElementIndex == Data[Range.GetInclusiveMinWidgetIndex().ArrayIndex].StartIndex"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\FastUpdate\\SlateInvalidationWidgetList.cpp"
                                ,0x525,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      FVar3 = param_1->InclusiveMin;
      uVar21 = (param_1->InclusiveMax).ElementIndex;
      uVar15 = (uint)FVar3 & 0xffff;
      `FSlateInvalidationWidgetList::Internal_RemoveRangeFromSameParent'::__l20::<lambda_2>::
      operator()(&local_68,FVar3.ArrayIndex,FVar3.ElementIndex,uVar21 + 1);
      *(ushort *)(*(longlong *)pTVar18 + 0xc + (ulonglong)uVar15 * 0x40) = uVar21 + 1;
      lVar16 = (ulonglong)uVar15 * 0x40 + *(longlong *)pTVar18;
      if ((int)(uint)*(ushort *)(lVar16 + 0xc) < *(int *)(lVar16 + 0x18)) {
        return;
      }
      goto LAB_14249a828;
    }
    if ((uVar22 == uVar1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Range.GetInclusiveMinWidgetIndex().ArrayIndex != Range.GetInclusiveMaxWidgetIndex().ArrayIndex"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\FastUpdate\\SlateInvalidationWidgetList.cpp"
                           ,0x504,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    FVar3 = param_1->InclusiveMax;
    lVar16 = (ulonglong)((uint)FVar3 & 0xffff) * 0x40;
    `FSlateInvalidationWidgetList::Internal_RemoveRangeFromSameParent'::__l20::<lambda_2>::
    operator()(&local_68,FVar3.ArrayIndex,*(ushort *)(lVar16 + 0xc + *(longlong *)pTVar18),
               ((uint)FVar3 >> 0x10) + 1);
    *(ushort *)(lVar16 + 0xc + *(longlong *)pTVar18) = FVar3.ElementIndex + 1;
    if (*(int *)(*(longlong *)pTVar18 + 0x18 + lVar16) <=
        (int)(uint)*(ushort *)(*(longlong *)pTVar18 + 0xc + lVar16)) {
      RemoveDataNode(this,FVar3.ArrayIndex);
    }
    uVar23 = (ushort)local_70;
  }
  FVar3 = param_1->InclusiveMin;
  uVar15 = (uint)FVar3 >> 0x10;
  lVar16 = (ulonglong)((uint)FVar3 & 0xffff) * 0x40 + *(longlong *)pTVar18;
  if (uVar21 == uVar23) {
    uVar13 = (uint)(param_1->InclusiveMax).ElementIndex;
  }
  else {
    uVar13 = *(uint *)(lVar16 + 0x18);
  }
  `FSlateInvalidationWidgetList::Internal_RemoveRangeFromSameParent'::__l20::<lambda_1>::operator()
            (&local_78,FVar3.ArrayIndex,uVar15,uVar13);
  iVar19 = *(int *)(lVar16 + 0x18) - uVar15;
  if ((iVar19 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        ), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (iVar19 != 0) {
    _Dst = (void *)(*(longlong *)(lVar16 + 0x10) + (ulonglong)uVar15 * 0x18);
    iVar9 = (*(int *)(lVar16 + 0x18) - iVar19) - uVar15;
    if (iVar9 != 0) {
      memmove(_Dst,(void *)((longlong)_Dst + (longlong)iVar19 * 0x18),(longlong)iVar9 * 0x18);
    }
    *(int *)(lVar16 + 0x18) = *(int *)(lVar16 + 0x18) - iVar19;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,(ForAnyElementType *)(lVar16 + 0x10),*(int *)(lVar16 + 0x18),
               (int *)(lVar16 + 0x1c));
  }
  uVar15 = (uint)FVar3 & 0xffff;
  lVar20 = (ulonglong)uVar15 * 0x40 + *(longlong *)&this->Data;
  if ((int)(uint)*(ushort *)(lVar20 + 0xc) < *(int *)(lVar20 + 0x18)) {
    local_res18[0] = FVar3.ElementIndex;
    `FSlateInvalidationWidgetList::FArrayNode::RemoveElementIndexBiggerOrEqualThan'::__l2::
    <lambda_1>::operator()
              (local_res18,(TSlateElementSortedArray<unsigned_short,TLess<void>_> *)(lVar16 + 0x20))
    ;
    `FSlateInvalidationWidgetList::FArrayNode::RemoveElementIndexBiggerOrEqualThan'::__l2::
    <lambda_1>::operator()
              (local_res18,(TSlateElementSortedArray<unsigned_short,TLess<void>_> *)(lVar16 + 0x30))
    ;
    return;
  }
LAB_14249a828:
  RemoveDataNode(this,(ushort)uVar15);
  return;
}

// LogWidgetsList @ 14249b800

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSlateInvalidationWidgetList::LogWidgetsList(FSlateInvalidationWidgetList *this,bool param_1)

{
  TSparseArray<FSlateInvalidationWidgetList::FArrayNode,FDefaultSparseArrayAllocator> *pTVar1;
  wchar_t *pwVar2;
  undefined8 *puVar3;
  int iVar4;
  SWidget *pSVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  FSlateInvalidationWidgetIndex FVar9;
  FString *pFVar10;
  void *pvVar11;
  FName *pFVar12;
  wchar_t *pwVar13;
  TStringBuilderBase<wchar_t> *pTVar14;
  undefined4 extraout_var;
  ulong64 uVar15;
  longlong lVar16;
  uint uVar17;
  int iVar18;
  undefined1 auStack_4e8 [32];
  ulonglong local_4c8;
  longlong local_4c0;
  char local_4b8;
  undefined1 local_4b6 [6];
  FSlateInvalidationWidgetList *local_4b0;
  undefined1 local_4a8 [8];
  undefined1 local_4a0 [8];
  undefined1 local_498 [8];
  FString local_490;
  FString local_480;
  FString local_470;
  TStringBuilderBase<wchar_t> local_458;
  wchar_t local_438 [512];
  ulonglong local_38 [2];
  
  local_38[0] = __security_cookie.value ^ (ulonglong)auStack_4e8;
  local_458.CurPos = local_438;
  local_458.Base = local_438;
  local_458.bIsDynamic = false;
  local_458.bIsExternal = false;
  uVar17 = this->FirstArrayIndex;
  local_458.End = (wchar_t *)local_38;
  pTVar1 = &this->Data;
  FVar9 = FSlateInvalidationWidgetIndex::Invalid;
  local_4b8 = param_1;
  local_4b0 = this;
  if (uVar17 != 0xffffffff) {
    FVar9 = (FSlateInvalidationWidgetIndex)
            ((uint)*(ushort *)((longlong)(int)uVar17 * 0x40 + 0xc + *(longlong *)pTVar1) << 0x10 |
            uVar17 & 0xffff);
  }
  while( true ) {
    if ((FVar9.ArrayIndex == FSlateInvalidationWidgetIndex::Invalid.ArrayIndex) &&
       (FVar9.ElementIndex == FSlateInvalidationWidgetIndex::Invalid.ElementIndex)) {
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_458);
      return;
    }
    lVar16 = (ulonglong)((uint)FVar9 & 0xffff) * 0x40 + *(longlong *)pTVar1;
    uVar17 = (uint)FVar9 >> 0x10;
    iVar18 = *(int *)(lVar16 + 0x18);
    local_458.CurPos = local_458.Base;
    if ((iVar18 <= (int)uVar17) &&
       (local_4c8 = (ulonglong)uVar17, local_4c0 = (longlong)iVar18,
       bVar8 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) break;
    puVar3 = (undefined8 *)(*(longlong *)(lVar16 + 0x10) + (ulonglong)uVar17 * 0x18);
    if ((param_1 == false) || ((*(byte *)((longlong)puVar3 + 0x15) & 3) == 3)) {
      iVar18 = 0;
      while( true ) {
        if ((FVar9.ArrayIndex == FSlateInvalidationWidgetIndex::Invalid.ArrayIndex) &&
           (FVar9.ElementIndex == FSlateInvalidationWidgetIndex::Invalid.ElementIndex)) break;
        iVar18 = iVar18 + 1;
        lVar16 = ((ulonglong)(uint)FVar9 & 0xffff) * 0x40 + *(longlong *)pTVar1;
        uVar17 = (uint)FVar9 >> 0x10;
        iVar4 = *(int *)(lVar16 + 0x18);
        if ((iVar4 <= (int)uVar17) &&
           (local_4c8 = (ulonglong)uVar17, local_4c0 = (longlong)iVar4,
           bVar8 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
           bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        FVar9 = *(FSlateInvalidationWidgetIndex *)
                 (*(longlong *)(lVar16 + 0x10) + 0xc + (ulonglong)uVar17 * 0x18);
      }
      while (iVar18 = iVar18 + -1, 0 < iVar18) {
        if (local_458.End < local_458.CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(&local_458,1);
        }
        *local_458.CurPos = L' ';
        local_458.CurPos = local_458.CurPos + 1;
      }
      pSVar5 = (SWidget *)*puVar3;
      if (pSVar5 == (SWidget *)0x0) {
        if (local_458.End < local_458.CurPos + 6) {
          TStringBuilderBase<wchar_t>::Extend(&local_458,6);
        }
        pvVar11 = FGenericPlatformString::Memcpy(local_458.CurPos,L"[None]",0xc);
        local_458.CurPos = (wchar_t *)((longlong)pvVar11 + 0xc);
      }
      else {
        pFVar10 = FReflectionMetaData::GetWidgetDebugInfo(&local_490,pSVar5);
        iVar4 = (pFVar10->Data).ArrayNum;
        pFVar6 = (pFVar10->Data).AllocatorInstance.Data;
        iVar18 = iVar4 + -1;
        if (iVar4 == 0) {
          iVar18 = 0;
        }
        uVar15 = (ulong64)iVar18;
        if (local_458.End < local_458.CurPos + uVar15) {
          TStringBuilderBase<wchar_t>::Extend(&local_458,uVar15);
        }
        if (iVar18 != 0) {
          pvVar11 = FGenericPlatformString::Memcpy(local_458.CurPos,pFVar6,uVar15 * 2);
          local_458.CurPos = (wchar_t *)((longlong)pvVar11 + uVar15 * 2);
        }
        if (local_458.End < local_458.CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(&local_458,1);
        }
        *local_458.CurPos = L'(';
        local_458.CurPos = local_458.CurPos + 1;
        pFVar12 = (FName *)(**(code **)(pSVar5->_padding_ + 0x1f0))(pSVar5,local_4a8);
        ::FName::AppendString(pFVar12,&local_458);
        if (local_458.End < local_458.CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(&local_458,1);
        }
        *local_458.CurPos = L')';
        pwVar2 = local_458.CurPos + 1;
        pwVar13 = local_458.CurPos + 2;
        local_458.CurPos = pwVar2;
        if (local_458.End < pwVar13) {
          TStringBuilderBase<wchar_t>::Extend(&local_458,1);
        }
        *local_458.CurPos = L'[';
        local_458.CurPos = local_458.CurPos + 1;
        pTVar14 = TStringBuilderBase<wchar_t>::AppendfImpl(&local_458,L"%d");
        if (pTVar14->End < pTVar14->CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(pTVar14,1);
        }
        *pTVar14->CurPos = L',';
        pTVar14->CurPos = pTVar14->CurPos + 1;
        pTVar14 = TStringBuilderBase<wchar_t>::AppendfImpl(pTVar14,L"%d");
        if (pTVar14->End < pTVar14->CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(pTVar14,1);
        }
        *pTVar14->CurPos = L']';
        pTVar14->CurPos = pTVar14->CurPos + 1;
        if (local_490.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_490.Data.AllocatorInstance.Data);
        }
      }
      if (local_458.End < local_458.CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(&local_458,1);
      }
      pvVar11 = FGenericPlatformString::Memcpy(local_458.CurPos,L"\t",2);
      local_458.CurPos = (wchar_t *)((longlong)pvVar11 + 2);
      if ((*(ushort *)((longlong)puVar3 + 0xc) == FSlateInvalidationWidgetIndex::Invalid.ArrayIndex)
         && (*(ushort *)((longlong)puVar3 + 0xe) ==
             FSlateInvalidationWidgetIndex::Invalid.ElementIndex)) {
        if (local_458.End < (wchar_t *)((longlong)pvVar11 + 0xc)) {
          TStringBuilderBase<wchar_t>::Extend(&local_458,5);
        }
        pvVar11 = FGenericPlatformString::Memcpy(local_458.CurPos,L"[---]",10);
        local_458.CurPos = (wchar_t *)((longlong)pvVar11 + 10);
      }
      else {
        lVar16 = (ulonglong)(*(uint *)((longlong)puVar3 + 0xc) & 0xffff) * 0x40 +
                 *(longlong *)pTVar1;
        uVar17 = *(uint *)((longlong)puVar3 + 0xc) >> 0x10;
        iVar18 = *(int *)(lVar16 + 0x18);
        if ((iVar18 <= (int)uVar17) &&
           (local_4c8 = (ulonglong)uVar17, local_4c0 = (longlong)iVar18,
           bVar8 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
           bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pSVar5 = *(SWidget **)(*(longlong *)(lVar16 + 0x10) + (ulonglong)uVar17 * 0x18);
        if (pSVar5 == (SWidget *)0x0) {
          if (local_458.End < local_458.CurPos + 6) {
            TStringBuilderBase<wchar_t>::Extend(&local_458,6);
          }
          pvVar11 = FGenericPlatformString::Memcpy(local_458.CurPos,L"[None]",0xc);
          local_458.CurPos = (wchar_t *)((longlong)pvVar11 + 0xc);
        }
        else {
          pFVar10 = FReflectionMetaData::GetWidgetDebugInfo(&local_480,pSVar5);
          iVar4 = (pFVar10->Data).ArrayNum;
          pFVar6 = (pFVar10->Data).AllocatorInstance.Data;
          iVar18 = iVar4 + -1;
          if (iVar4 == 0) {
            iVar18 = 0;
          }
          uVar15 = (ulong64)iVar18;
          if (local_458.End < local_458.CurPos + uVar15) {
            TStringBuilderBase<wchar_t>::Extend(&local_458,uVar15);
          }
          if (iVar18 != 0) {
            pvVar11 = FGenericPlatformString::Memcpy(local_458.CurPos,pFVar6,uVar15 * 2);
            local_458.CurPos = (wchar_t *)((longlong)pvVar11 + uVar15 * 2);
          }
          if (local_458.End < local_458.CurPos + 1) {
            TStringBuilderBase<wchar_t>::Extend(&local_458,1);
          }
          pvVar11 = FGenericPlatformString::Memcpy(local_458.CurPos,L"(",2);
          local_458.CurPos = (wchar_t *)((longlong)pvVar11 + 2);
          pFVar12 = (FName *)(**(code **)(pSVar5->_padding_ + 0x1f0))(pSVar5,local_4a0);
          ::FName::AppendString(pFVar12,&local_458);
          if (local_458.End < local_458.CurPos + 1) {
            TStringBuilderBase<wchar_t>::Extend(&local_458,1);
          }
          pvVar11 = FGenericPlatformString::Memcpy(local_458.CurPos,L")",2);
          local_458.CurPos = (wchar_t *)((longlong)pvVar11 + 2);
          if (local_480.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_480.Data.AllocatorInstance.Data);
          }
        }
      }
      if (local_458.End < local_458.CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(&local_458,1);
      }
      pvVar11 = FGenericPlatformString::Memcpy(local_458.CurPos,L"\t",2);
      local_458.CurPos = (wchar_t *)((longlong)pvVar11 + 2);
      if ((*(ushort *)(puVar3 + 2) == FSlateInvalidationWidgetIndex::Invalid.ArrayIndex) &&
         (*(ushort *)((longlong)puVar3 + 0x12) ==
          FSlateInvalidationWidgetIndex::Invalid.ElementIndex)) {
        if (local_458.End < (wchar_t *)((longlong)pvVar11 + 0xc)) {
          TStringBuilderBase<wchar_t>::Extend(&local_458,5);
        }
        pvVar11 = FGenericPlatformString::Memcpy(local_458.CurPos,L"[---]",10);
        local_458.CurPos = (wchar_t *)((longlong)pvVar11 + 10);
      }
      else {
        lVar16 = (ulonglong)(*(uint *)(puVar3 + 2) & 0xffff) * 0x40 + *(longlong *)pTVar1;
        uVar17 = *(uint *)(puVar3 + 2) >> 0x10;
        iVar18 = *(int *)(lVar16 + 0x18);
        if ((iVar18 <= (int)uVar17) &&
           (local_4c8 = (ulonglong)uVar17, local_4c0 = (longlong)iVar18,
           bVar8 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
           bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pSVar5 = *(SWidget **)(*(longlong *)(lVar16 + 0x10) + (ulonglong)uVar17 * 0x18);
        if (pSVar5 == (SWidget *)0x0) {
          if (local_458.End < local_458.CurPos + 6) {
            TStringBuilderBase<wchar_t>::Extend(&local_458,6);
          }
          pvVar11 = FGenericPlatformString::Memcpy(local_458.CurPos,L"[None]",0xc);
          local_458.CurPos = (wchar_t *)((longlong)pvVar11 + 0xc);
        }
        else {
          pFVar10 = FReflectionMetaData::GetWidgetDebugInfo(&local_470,pSVar5);
          iVar4 = (pFVar10->Data).ArrayNum;
          pFVar6 = (pFVar10->Data).AllocatorInstance.Data;
          iVar18 = iVar4 + -1;
          if (iVar4 == 0) {
            iVar18 = 0;
          }
          uVar15 = (ulong64)iVar18;
          if (local_458.End < local_458.CurPos + uVar15) {
            TStringBuilderBase<wchar_t>::Extend(&local_458,uVar15);
          }
          if (iVar18 != 0) {
            pvVar11 = FGenericPlatformString::Memcpy(local_458.CurPos,pFVar6,uVar15 * 2);
            local_458.CurPos = (wchar_t *)((longlong)pvVar11 + uVar15 * 2);
          }
          if (local_458.End < local_458.CurPos + 1) {
            TStringBuilderBase<wchar_t>::Extend(&local_458,1);
          }
          pvVar11 = FGenericPlatformString::Memcpy(local_458.CurPos,L"(",2);
          local_458.CurPos = (wchar_t *)((longlong)pvVar11 + 2);
          pFVar12 = (FName *)(**(code **)(pSVar5->_padding_ + 0x1f0))(pSVar5,local_498);
          ::FName::AppendString(pFVar12,&local_458);
          if (local_458.End < local_458.CurPos + 1) {
            TStringBuilderBase<wchar_t>::Extend(&local_458,1);
          }
          pvVar11 = FGenericPlatformString::Memcpy(local_458.CurPos,L")",2);
          local_458.CurPos = (wchar_t *)((longlong)pvVar11 + 2);
          if (local_470.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_470.Data.AllocatorInstance.Data);
          }
        }
      }
      if (local_458.End < local_458.CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(&local_458,1);
      }
      pvVar11 = FGenericPlatformString::Memcpy(local_458.CurPos,L"\t",2);
      local_458.CurPos = (wchar_t *)((longlong)pvVar11 + 2);
      param_1 = (bool)local_4b8;
      if (4 < (byte)LogSlate._0_1_) {
        if (local_458.End < (wchar_t *)((longlong)pvVar11 + 4)) {
          TStringBuilderBase<wchar_t>::Extend(&local_458,1);
        }
        *local_458.CurPos = L'\0';
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogSlate);
        param_1 = (bool)local_4b8;
      }
    }
    FVar9 = IncrementIndex(local_4b0,SUB84(local_4b6,0));
    FVar9 = *(FSlateInvalidationWidgetIndex *)CONCAT44(extraout_var,FVar9);
  }
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

// ProcessAttributeRegistrationInvalidation @ 1424a1230

void __thiscall
FSlateInvalidationWidgetList::ProcessAttributeRegistrationInvalidation
          (FSlateInvalidationWidgetList *this,FWidgetProxy *param_1)

{
  undefined1 *puVar1;
  ushort uVar2;
  SWidget *pSVar3;
  code *pcVar4;
  bool bVar5;
  TSlateElementSortedArray<unsigned_short,TLess<void>_> *this_00;
  undefined1 local_res8 [8];
  
  if (this->NumberOfLock != 0) {
    local_res8[0] = 0;
    `FSlateInvalidationWidgetList::ProcessAttributeRegistrationInvalidation'::__l2::<lambda_1>::
    operator()(local_res8);
  }
  pSVar3 = param_1->Widget;
  if (pSVar3 == (SWidget *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("WidgetPtr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\FastUpdate\\SlateInvalidationWidgetList.cpp"
                       ,0x2d9,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  uVar2 = (param_1->Index).ElementIndex;
  this_00 = (TSlateElementSortedArray<unsigned_short,TLess<void>_> *)
            ((ulonglong)(param_1->Index).ArrayIndex * 0x40 + *(longlong *)&this->Data + 0x20);
  if (pSVar3->bHasRegisteredSlateAttribute == '\x01' && pSVar3->bEnabledAttributesUpdate == '\x01')
  {
    TSlateElementSortedArray<unsigned_short,TLess<void>_>::InsertUnique(this_00,uVar2);
    return;
  }
  TSlateElementSortedArray<unsigned_short,TLess<void>_>::RemoveSingle(this_00,uVar2);
  return;
}

// ProcessChildOrderInvalidation @ 1424a12e0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FSlateInvalidationWidgetList::ProcessChildOrderInvalidation
          (FSlateInvalidationWidgetList *this,FSlateInvalidationWidgetIndex param_1,
          IProcessChildOrderInvalidationCallback *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  longlong lVar6;
  bool bVar7;
  bool bVar8;
  undefined1 uVar9;
  char cVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  FName *pFVar14;
  FThreadSafeStaticStat<FStat_STAT_WidgetList_ProcessChildOrderInvalidation> FVar15;
  FWidgetProxy *pFVar16;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined8 *puVar17;
  undefined4 extraout_var_01;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  SWidget *pSVar18;
  FName FVar19;
  uint uVar20;
  bool bVar21;
  uint uVar22;
  char local_res8;
  undefined1 local_168;
  undefined1 local_167 [3];
  undefined2 local_164 [2];
  undefined1 local_160 [4];
  int local_15c;
  uint local_158;
  uint local_154;
  ushort local_148;
  ushort uStack_146;
  FSlateInvalidationWidgetIndex FStack_144;
  undefined8 uStack_140;
  FSlateInvalidationWidgetIndex local_138;
  FSlateInvalidationWidgetIndex local_134;
  int local_130;
  int local_12c;
  FColor_u_0 local_128 [2];
  ForAnyElementType *local_120;
  SWidget *local_118;
  FName local_110;
  FName local_108;
  FSlateInvalidationWidgetIndex local_f8;
  FSlateInvalidationWidgetIndex FStack_f4;
  uint uStack_f0;
  uint uStack_ec;
  FSlateInvalidationWidgetIndex local_e8;
  FSlateInvalidationWidgetIndex FStack_e4;
  uint uStack_e0;
  uint uStack_dc;
  FSlateInvalidationWidgetIndex local_d8;
  FSlateInvalidationWidgetIndex FStack_d4;
  uint uStack_d0;
  uint uStack_cc;
  undefined1 local_c8 [4];
  undefined1 local_c4 [4];
  undefined1 local_c0 [8];
  longlong local_b8;
  IProcessChildOrderInvalidationCallback *local_b0;
  LARGE_INTEGER local_a8;
  FStatMessage local_a0;
  undefined4 local_90;
  undefined4 uStack_8c;
  int iStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  FName local_78 [2];
  FIndexRange local_68 [2];
  undefined8 local_48;
  
  if (this->NumberOfLock != 0) {
    local_168 = 0;
    `FSlateInvalidationWidgetList::ProcessChildOrderInvalidation'::__l2::<lambda_1>::operator()
              (&local_168);
  }
  FVar15 = StatPtr_STAT_WidgetList_ProcessChildOrderInvalidation;
  if (StatPtr_STAT_WidgetList_ProcessChildOrderInvalidation ==
      (FThreadSafeStaticStat<FStat_STAT_WidgetList_ProcessChildOrderInvalidation>)0x0) {
    pFVar14 = ::FName::FName(local_78,"STAT_WidgetList_ProcessChildOrderInvalidation");
    FVar15 = (FThreadSafeStaticStat<FStat_STAT_WidgetList_ProcessChildOrderInvalidation>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_WidgetList_ProcessChildOrderInvalidation,*pFVar14,
                        L"WidgetList ChildOrder Invalidation","STATGROUP_Slate","STATCAT_Advanced",
                        L"Slate",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar19 = *(FName *)FVar15;
  bVar4 = false;
  bVar5 = false;
  local_108.ComparisonIndex.Value = 0;
  local_108.Number = 0;
  bVar7 = false;
  bVar21 = false;
  if ((FVar19.ComparisonIndex.Value.Value == 0) && (FVar19.Number == 0)) {
LAB_1424a145a:
    bVar5 = bVar21;
    bVar4 = bVar7;
    bVar7 = false;
    FVar19 = local_108;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_128[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_128[0]._s_0,(char *)*(FName *)((longlong)FVar15 + 0x10));
      bVar4 = false;
      bVar5 = true;
      bVar7 = false;
      bVar21 = true;
      if (-1 < CpuChannel->Enabled) {
        local_110.ComparisonIndex.Value = FVar19.ComparisonIndex.Value.Value;
        local_110.Number = FVar19.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_110,(wchar_t *)*(FName *)((longlong)FVar15 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\FastUpdate\\SlateInvalidationWidgetList.cpp"
                   ,0x232);
        bVar4 = true;
        bVar5 = true;
        bVar7 = true;
        bVar21 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1424a145a;
    FThreadStats::AddMessage(FVar19,CycleScopeStart);
    bVar7 = true;
  }
  local_b0 = this->CurrentInvalidationCallback;
  bVar21 = true;
  this->CurrentInvalidationCallback = param_2;
  local_15c = -1;
  local_res8 = '\x02';
  pFVar16 = operator[](this,param_1);
  pSVar18 = pFVar16->Widget;
  local_118 = pSVar18;
  if ((pSVar18 == (SWidget *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("WidgetPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\FastUpdate\\SlateInvalidationWidgetList.cpp"
                         ,0x23f,L""), bVar8)) {
    pcVar3 = (code *)swi(3);
    uVar9 = (*pcVar3)();
    return (bool)uVar9;
  }
  local_90 = *(undefined4 *)&(pSVar18->FastPathProxyHandle).InvalidationRootHandle.InvalidationRoot;
  uStack_8c = *(undefined4 *)
               ((longlong)&(pSVar18->FastPathProxyHandle).InvalidationRootHandle.InvalidationRoot +
               4);
  iStack_88 = (pSVar18->FastPathProxyHandle).InvalidationRootHandle.UniqueId;
  uStack_84 = *(undefined4 *)&(pSVar18->FastPathProxyHandle).InvalidationRootHandle.field_0xc;
  local_80._0_2_ = (pSVar18->FastPathProxyHandle).WidgetIndex.ArrayIndex;
  local_80._2_2_ = (pSVar18->FastPathProxyHandle).WidgetIndex.ElementIndex;
  local_80._4_4_ = (pSVar18->FastPathProxyHandle).WidgetSortOrder;
  if (((undefined2)local_80 != (pFVar16->Index).ArrayIndex) ||
     (local_80._2_2_ != (pFVar16->Index).ElementIndex)) {
    `FSlateInvalidationWidgetList::ProcessChildOrderInvalidation'::__l14::<lambda_2>::operator()
              (local_160);
    bVar21 = false;
    goto LAB_1424a1a7e;
  }
  local_148 = FSlateInvalidationWidgetIndex::Invalid.ArrayIndex;
  uStack_146 = FSlateInvalidationWidgetIndex::Invalid.ElementIndex;
  FStack_144 = FSlateInvalidationWidgetIndex::Invalid;
  uStack_140._0_4_ = 0;
  uStack_140._4_4_ = 0;
  if (pSVar18 == SNullWidget::NullWidget.Object) {
    uVar2._0_4_ = pFVar16->Index;
    bVar21 = false;
    FStack_144 = pFVar16->LeafMostChildIndex;
    uStack_140._0_4_ =
         *(int *)((ulonglong)((uint)uVar2._0_4_ & 0xffff) * 0x40 + 8 + *(longlong *)&this->Data) *
         0x400 + ((uint)uVar2._0_4_ >> 0x10);
    uStack_140._4_4_ =
         *(int *)((ulonglong)((uint)FStack_144 & 0xffff) * 0x40 + 8 + *(longlong *)&this->Data) *
         0x400 + ((uint)FStack_144 >> 0x10);
    local_f8 = uVar2._0_4_;
    FStack_f4 = FStack_144;
    uStack_f0 = uStack_140._0_4_;
    uStack_ec = uStack_140._4_4_;
LAB_1424a168b:
    local_res8 = '\0';
    local_148 = (ushort)uVar2;
    uStack_146 = uVar2._2_2_;
  }
  else {
    cVar10 = (**(code **)(pSVar18->_padding_ + 0x210))(pSVar18);
    if (((cVar10 == '\0') || (this->FirstArrayIndex == -1)) ||
       (*(int *)((longlong)this->FirstArrayIndex * 0x40 + 0x18 + *(longlong *)&this->Data) == 0)) {
      if (((pFVar16->Index).ArrayIndex != (pFVar16->LeafMostChildIndex).ArrayIndex) ||
         ((pFVar16->Index).ElementIndex != (pFVar16->LeafMostChildIndex).ElementIndex)) {
        uVar2._0_4_ = IncrementIndex(this,SUB84(local_c4,0));
        FStack_144 = pFVar16->LeafMostChildIndex;
        uVar2._0_4_ = *(FSlateInvalidationWidgetIndex *)CONCAT44(extraout_var_00,uVar2._0_4_);
        local_15c = 0;
        uStack_140._0_4_ =
             *(int *)((ulonglong)((uint)uVar2._0_4_ & 0xffff) * 0x40 + 8 + *(longlong *)&this->Data)
             * 0x400 + ((uint)uVar2._0_4_ >> 0x10);
        uStack_140._4_4_ =
             *(int *)((ulonglong)((uint)FStack_144 & 0xffff) * 0x40 + 8 + *(longlong *)&this->Data)
             * 0x400 + ((uint)FStack_144 >> 0x10);
        local_d8 = uVar2._0_4_;
        FStack_d4 = FStack_144;
        uStack_d0 = uStack_140._0_4_;
        uStack_cc = uStack_140._4_4_;
        goto LAB_1424a168b;
      }
      local_15c = 0;
      local_res8 = '\x01';
    }
    else if (((pFVar16->Index).ArrayIndex != (pFVar16->LeafMostChildIndex).ArrayIndex) ||
            ((pFVar16->Index).ElementIndex != (pFVar16->LeafMostChildIndex).ElementIndex)) {
      uVar2._0_4_ = IncrementIndex(this,SUB84(local_c8,0));
      FStack_144 = pFVar16->LeafMostChildIndex;
      uVar2._0_4_ = *(FSlateInvalidationWidgetIndex *)CONCAT44(extraout_var,uVar2._0_4_);
      uStack_140._0_4_ =
           *(int *)((ulonglong)((uint)uVar2._0_4_ & 0xffff) * 0x40 + 8 + *(longlong *)&this->Data) *
           0x400 + ((uint)uVar2._0_4_ >> 0x10);
      uStack_140._4_4_ =
           *(int *)((ulonglong)((uint)FStack_144 & 0xffff) * 0x40 + 8 + *(longlong *)&this->Data) *
           0x400 + ((uint)FStack_144 >> 0x10);
      local_e8 = uVar2._0_4_;
      FStack_e4 = FStack_144;
      uStack_e0 = uStack_140._0_4_;
      uStack_dc = uStack_140._4_4_;
      goto LAB_1424a168b;
    }
  }
  FGenericPlatformMisc::BeginNamedEvent(&FColorList::Blue,"Slate_InvalidationList_ProcessRemove");
  bVar8 = -1 < CpuChannel->Enabled;
  if (bVar8) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId681,"Slate_InvalidationList_ProcessRemove",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\FastUpdate\\SlateInvalidationWidgetList.cpp"
               ,0x2a9);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId681);
  }
  if (local_res8 == '\0') {
    if ((local_148 == FSlateInvalidationWidgetIndex::Invalid.ArrayIndex) &&
       (uStack_146 == FSlateInvalidationWidgetIndex::Invalid.ElementIndex)) {
      local_167[0] = 0;
      `FSlateInvalidationWidgetList::ProcessChildOrderInvalidation'::__l34::<lambda_3>::operator()
                (local_167);
    }
    (**(code **)*param_2)(param_2,&local_148);
    local_68[0].InclusiveMin.ElementIndex = uStack_146;
    local_68[0].InclusiveMin.ArrayIndex = local_148;
    local_68[0].InclusiveMax = FStack_144;
    local_68[0].OrderMin.Order = uStack_140._0_4_;
    local_68[0].OrderMax.Order = uStack_140._4_4_;
    Internal_RemoveRangeFromSameParent(this,local_68);
  }
  else if (local_res8 == '\x01') {
    uVar2._0_4_ = pFVar16->LeafMostChildIndex;
    Internal_CutArray(this,SUB84(&local_158,0));
    pSVar18 = local_118;
    if (local_158 != 0xffffffff) {
      local_b8 = *(longlong *)&this->Data + (ulonglong)((uint)uVar2._0_4_ & 0xffff) * 0x40;
      local_154 = local_158;
      local_120 = (ForAnyElementType *)(local_b8 + 0x10);
      uVar20 = *(int *)(local_b8 + 0x18) - local_158;
      uVar22 = 0;
      if ((int)(uVar20 + local_158) <= *(int *)(local_b8 + 0x18)) {
        uVar22 = ~(uVar20 | local_158) >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x458,
                              L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                             ), bVar11)) {
        pcVar3 = (code *)swi(3);
        uVar9 = (*pcVar3)();
        return (bool)uVar9;
      }
      if (uVar20 != 0) {
        iVar12 = (*(int *)&local_120[1].Data - local_158) - uVar20;
        if (iVar12 != 0) {
          memmove(local_120->Data + (longlong)(int)local_158 * 0x18,
                  local_120->Data + (longlong)(int)local_158 * 0x18 + (longlong)(int)uVar20 * 0x18,
                  (longlong)iVar12 * 0x18);
        }
        *(uint *)&local_120[1].Data = *(int *)&local_120[1].Data - uVar20;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,local_120,*(int *)&local_120[1].Data,
                   (int *)((longlong)&local_120[1].Data + 4));
      }
      lVar6 = local_b8;
      if (*(int *)(local_b8 + 0x18) == 0) {
        RemoveDataNode(this,(ushort)uVar2);
        pSVar18 = local_118;
      }
      else {
        local_164[0] = (undefined2)local_158;
        `FSlateInvalidationWidgetList::FArrayNode::RemoveElementIndexBiggerOrEqualThan'::__l2::
        <lambda_1>::operator()
                  (local_164,
                   (TSlateElementSortedArray<unsigned_short,TLess<void>_> *)(local_b8 + 0x20));
        `FSlateInvalidationWidgetList::FArrayNode::RemoveElementIndexBiggerOrEqualThan'::__l2::
        <lambda_1>::operator()
                  (local_164,(TSlateElementSortedArray<unsigned_short,TLess<void>_> *)(lVar6 + 0x30)
                  );
        pSVar18 = local_118;
      }
    }
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  iVar12 = local_15c;
  if (local_15c != -1) {
    if ((pSVar18 == (SWidget *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("WidgetPtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\FastUpdate\\SlateInvalidationWidgetList.cpp"
                           ,0x2ba,L""), bVar8)) {
      pcVar3 = (code *)swi(3);
      uVar9 = (*pcVar3)();
      return (bool)uVar9;
    }
    puVar17 = (undefined8 *)(**(code **)(pSVar18->_padding_ + 0x188))(pSVar18);
    if ((puVar17 == (undefined8 *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InvalidatedChildren",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\FastUpdate\\SlateInvalidationWidgetList.cpp"
                           ,700,L""), bVar8)) {
      pcVar3 = (code *)swi(3);
      uVar9 = (*pcVar3)();
      return (bool)uVar9;
    }
    iVar13 = (**(code **)*puVar17)(puVar17);
    if (0 < iVar13) {
      FGenericPlatformMisc::BeginNamedEvent
                (&FColorList::Blue,"Slate_InvalidationList_ProcessRebuild");
      bVar8 = -1 < CpuChannel->Enabled;
      if (bVar8) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId703,"Slate_InvalidationList_ProcessRebuild",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\FastUpdate\\SlateInvalidationWidgetList.cpp"
                   ,0x2bf);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId703);
      }
      Internal_RebuildWidgetListTree(this,pSVar18,iVar12);
      uVar2._0_2_ = (pSVar18->FastPathProxyHandle).WidgetIndex.ArrayIndex;
      uVar2._2_2_ = (pSVar18->FastPathProxyHandle).WidgetIndex.ElementIndex;
      uVar2._4_4_ = (pSVar18->FastPathProxyHandle).WidgetSortOrder;
      local_48 = uVar2;
      pFVar16 = operator[](this,uVar2._0_4_);
      if (((pFVar16->LeafMostChildIndex).ArrayIndex == (undefined2)uVar2) &&
         ((pFVar16->LeafMostChildIndex).ElementIndex == uVar2._2_2_)) {
        local_134 = pFVar16->LeafMostChildIndex;
      }
      else {
        uVar2._0_4_ = IncrementIndex(this,SUB84(local_c0,0));
        local_134 = pFVar16->LeafMostChildIndex;
        uVar2._0_4_ = *(FSlateInvalidationWidgetIndex *)CONCAT44(extraout_var_01,uVar2._0_4_);
      }
      local_130 = *(int *)((ulonglong)((uint)uVar2._0_4_ & 0xffff) * 0x40 + 8 +
                          *(longlong *)&this->Data) * 0x400 + ((uint)uVar2._0_4_ >> 0x10);
      local_12c = *(int *)((ulonglong)((uint)local_134 & 0xffff) * 0x40 + 8 +
                          *(longlong *)&this->Data) * 0x400 + ((uint)local_134 >> 0x10);
      local_138.ArrayIndex = (ushort)uVar2;
      local_138 = uVar2._0_4_;
      if ((local_138.ArrayIndex != FSlateInvalidationWidgetIndex::Invalid.ArrayIndex) ||
         (uVar2._2_2_ != FSlateInvalidationWidgetIndex::Invalid.ElementIndex)) {
        (**(code **)((longlong)*param_2 + 0x20))(param_2,&local_138);
      }
      if (bVar8) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      FGenericPlatformMisc::EndNamedEvent();
    }
  }
LAB_1424a1a7e:
  this->CurrentInvalidationCallback = local_b0;
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar7) && (FVar19 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_a0.NameAndInfo.Index = FVar19.ComparisonIndex.Value;
      local_a0.NameAndInfo.Number = FVar19.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_a8);
      local_a0.StatData.Pad[4] = '\0';
      local_a0.StatData.Pad[5] = '\0';
      local_a0.StatData.Pad[6] = '\0';
      local_a0.StatData.Pad[7] = '\0';
      local_a0.StatData.Pad[0] = local_a8.s.LowPart._0_1_;
      local_a0.StatData.Pad[1] = local_a8.s.LowPart._1_1_;
      local_a0.StatData.Pad[2] = local_a8.s.LowPart._2_1_;
      local_a0.StatData.Pad[3] = local_a8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_a0);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return bVar21;
}

// ProcessVolatileUpdateInvalidation @ 1424a2180

void __thiscall
FSlateInvalidationWidgetList::ProcessVolatileUpdateInvalidation
          (FSlateInvalidationWidgetList *this,FWidgetProxy *param_1)

{
  ushort uVar1;
  SWidget *pSVar2;
  code *pcVar3;
  bool bVar4;
  TSlateElementSortedArray<unsigned_short,TLess<void>_> *this_00;
  undefined1 local_res8 [8];
  
  if (this->NumberOfLock != 0) {
    local_res8[0] = 0;
    `FSlateInvalidationWidgetList::ProcessVolatileUpdateInvalidation'::__l2::<lambda_1>::operator()
              (local_res8);
  }
  pSVar2 = param_1->Widget;
  if (pSVar2 == (SWidget *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("WidgetPtr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\FastUpdate\\SlateInvalidationWidgetList.cpp"
                       ,0x2eb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  uVar1 = (param_1->Index).ElementIndex;
  this_00 = (TSlateElementSortedArray<unsigned_short,TLess<void>_> *)
            ((ulonglong)(param_1->Index).ArrayIndex * 0x40 + *(longlong *)&this->Data + 0x30);
  if ((pSVar2->UpdateFlags &
      (NeedsVolatilePrepass|NeedsVolatilePaint|NeedsActiveTimerUpdate|NeedsTick)) == None) {
    TSlateElementSortedArray<unsigned_short,TLess<void>_>::RemoveSingle(this_00,uVar1);
  }
  else {
    TSlateElementSortedArray<unsigned_short,TLess<void>_>::InsertUnique(this_00,uVar1);
  }
  (param_1->field6_0x16).PrivateFlags =
       (param_1->field6_0x16).PrivateFlags ^
       (pSVar2->UpdateFlags >> 3 ^ (param_1->field6_0x16).PrivateFlags) & 0x10;
  return;
}

// RebuildOrderIndex @ 1424a2820

void __thiscall
FSlateInvalidationWidgetList::RebuildOrderIndex(FSlateInvalidationWidgetList *this,ushort param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  IProcessChildOrderInvalidationCallback *pIVar4;
  code *pcVar5;
  bool bVar6;
  ushort uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  FSlateInvalidationWidgetList *local_res8;
  uint local_res10 [2];
  uint *local_res18;
  uint local_58;
  uint local_54;
  int local_50;
  int local_4c;
  FSlateInvalidationWidgetList *local_48;
  uint *local_40;
  
  if ((FArguments::MaxPreferedElementsNum <= (this->WidgetListConfig).PreferedElementsNum) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("WidgetListConfig.PreferedElementsNum < WidgetListConfig.MaxPreferedElementsNum"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\FastUpdate\\SlateInvalidationWidgetList.cpp"
                         ,0x3a6,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_res8 = this;
  if (((this->WidgetListConfig).SortOrderPaddingBetweenArray <
       (this->WidgetListConfig).PreferedElementsNum) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("WidgetListConfig.PreferedElementsNum <= WidgetListConfig.SortOrderPaddingBetweenArray"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\FastUpdate\\SlateInvalidationWidgetList.cpp"
                         ,0x3d3,L"It should have been confirmed at initialization."), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_res10[0] = (uint)param_1;
  do {
    uVar9 = local_res10[0];
    lVar14 = *(longlong *)&this->Data;
    lVar13 = (longlong)(int)local_res10[0] * 0x40;
    iVar8 = *(int *)(lVar13 + 4 + lVar14);
    if (*(int *)(lVar13 + lVar14) == -1) {
      if ((local_res8->NumberOfLock != 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Self->NumberOfLock == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\FastUpdate\\SlateInvalidationWidgetList.cpp"
                             ,0x3ab,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar14 = (ulonglong)(uVar9 & 0xffff) * 0x40;
      lVar13 = *(longlong *)&local_res8->Data + lVar14;
      uVar1 = *(ushort *)(lVar13 + 0xc);
      uVar10 = (uint)uVar1;
      if ((int)(uint)uVar1 < *(int *)(lVar13 + 0x18)) {
        uVar9 = uVar9 & 0xffff;
        local_58 = uVar10 << 0x10 | uVar9;
        uVar7 = (uVar1 - 1) + (short)*(int *)(lVar13 + 0x18);
        local_54 = (uint)uVar7 << 0x10 | uVar9;
        local_50 = *(int *)(lVar13 + 8) * 0x400 + (uint)uVar1;
        local_4c = *(int *)(lVar13 + 8) * 0x400 + (uint)uVar7;
        *(undefined4 *)(lVar13 + 8) = 0;
        pIVar4 = local_res8->CurrentInvalidationCallback;
        if (pIVar4 != (IProcessChildOrderInvalidationCallback *)0x0) {
          local_res18 = &local_58;
          (**(code **)((longlong)*pIVar4 + 0x10))(pIVar4,&local_res18);
        }
        iVar8 = *(int *)(lVar13 + 0x18);
        if ((int)(uint)uVar1 < iVar8) {
          do {
            iVar2 = *(int *)(*(longlong *)&local_res8->Data + 8 + lVar14);
            uVar9 = 0;
            if ((int)uVar10 < iVar8) {
              uVar9 = ~uVar10 >> 0x1f;
            }
            if ((uVar9 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            if (*(longlong *)((longlong)(int)uVar10 * 0x18 + *(longlong *)(lVar13 + 0x10)) != 0) {
              uVar9 = 0;
              if ((int)uVar10 < *(int *)(lVar13 + 0x18)) {
                uVar9 = ~uVar10 >> 0x1f;
              }
              if ((uVar9 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              SWidget::SetFastPathSortOrder
                        (*(SWidget **)((longlong)(int)uVar10 * 0x18 + *(longlong *)(lVar13 + 0x10)),
                         (FSlateInvalidationWidgetSortOrder)(iVar2 * 0x400 + (uVar10 & 0xffff)));
            }
            iVar8 = *(int *)(lVar13 + 0x18);
            uVar10 = uVar10 + 1;
          } while ((int)uVar10 < iVar8);
        }
        if (local_res8->CurrentInvalidationCallback != (IProcessChildOrderInvalidationCallback *)0x0
           ) {
          (**(code **)((longlong)*local_res8->CurrentInvalidationCallback + 0x18))();
        }
      }
      else {
        *(undefined4 *)(lVar13 + 8) = 0;
      }
    }
    else {
      iVar3 = (this->WidgetListConfig).PreferedElementsNum;
      iVar11 = *(int *)((longlong)*(int *)(lVar13 + lVar14) * 0x40 + 8 + lVar14);
      iVar2 = iVar3 + iVar11;
      if (iVar8 == -1) {
        if (iVar2 <= *(int *)(lVar13 + 8 + lVar14)) {
          return;
        }
        `FSlateInvalidationWidgetList::RebuildOrderIndex'::__l2::<lambda_1>::operator()
                  (&local_res8,(ushort)local_res10[0],
                   (this->WidgetListConfig).SortOrderPaddingBetweenArray + iVar11);
        return;
      }
      iVar8 = *(int *)((longlong)iVar8 * 0x40 + 8 + lVar14);
      iVar12 = *(int *)((longlong)(int)local_res10[0] * 0x40 + 8 + lVar14);
      if ((iVar2 < iVar12) && (iVar3 + iVar12 < iVar8)) {
        return;
      }
      iVar12 = (this->WidgetListConfig).SortOrderPaddingBetweenArray;
      iVar11 = iVar12 + iVar11;
      if (iVar8 <= iVar11) {
        if ((iVar2 < iVar8) && (iVar3 <= iVar8 - iVar2)) {
          iVar11 = (((iVar8 - iVar2) / iVar3) / 2) * iVar3 + iVar2;
          if (((iVar11 < iVar2) || (iVar8 < iVar3 + iVar11)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("PreviousMaxSortOrder <= NewCurrentOrderIndex && NewCurrentOrderIndex + WidgetListConfig.PreferedElementsNum <= NextMinSortOrder"
                                 ,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\FastUpdate\\SlateInvalidationWidgetList.cpp"
                                 ,0x401,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        else {
          if (iVar3 * 2 < iVar12) {
            iVar12 = iVar3 * 2;
          }
          iVar11 = iVar12 + iVar2;
        }
      }
      `FSlateInvalidationWidgetList::RebuildOrderIndex'::__l2::<lambda_1>::operator()
                (&local_res8,(ushort)local_res10[0],iVar11);
    }
    if (FArguments::MaxSortOrderPaddingBetweenArray <
        *(int *)((longlong)(int)local_res10[0] * 0x40 + 8 + *(longlong *)&this->Data)) {
      local_40 = local_res10;
      local_48 = this;
      `FSlateInvalidationWidgetList::RebuildOrderIndex'::__l27::<lambda_2>::operator()(&local_48);
    }
    local_res10[0] = *(uint *)((longlong)(int)local_res10[0] * 0x40 + 4 + *(longlong *)&this->Data);
    if (local_res10[0] == 0xffffffff) {
      return;
    }
  } while( true );
}

// RemoveDataNode @ 1424a5730

void __thiscall
FSlateInvalidationWidgetList::RemoveDataNode(FSlateInvalidationWidgetList *this,ushort param_1)

{
  code *pcVar1;
  bool bVar2;
  int *piVar3;
  
  if ((this->NumberOfLock != 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumberOfLock == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\FastUpdate\\SlateInvalidationWidgetList.cpp"
                         ,0x44f,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((param_1 == 0xffff) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index != INDEX_NONE && Index != std::numeric_limits<IndexType>::max()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\FastUpdate\\SlateInvalidationWidgetList.cpp"
                         ,0x450,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  piVar3 = (int *)((ulonglong)param_1 * 0x40 + *(longlong *)&this->Data);
  if (*piVar3 == -1) {
    this->FirstArrayIndex = piVar3[1];
  }
  else {
    *(int *)((longlong)*piVar3 * 0x40 + 4 + *(longlong *)&this->Data) = piVar3[1];
  }
  if (piVar3[1] == -1) {
    this->LastArrayIndex = *piVar3;
  }
  else {
    *(int *)((longlong)piVar3[1] * 0x40 + *(longlong *)&this->Data) = *piVar3;
  }
  piVar3[6] = 0;
  if (piVar3[7] != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)(piVar3 + 4),0,piVar3 + 7);
  }
  piVar3[10] = 0;
  if (piVar3[0xb] != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,0,(ForAnyElementType *)(piVar3 + 8),0,piVar3 + 0xb);
  }
  piVar3[0xe] = 0;
  if (piVar3[0xf] != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,0,(ForAnyElementType *)(piVar3 + 0xc),0,piVar3 + 0xf);
  }
  TSparseArray<FSlateInvalidationWidgetList::FArrayNode,FDefaultSparseArrayAllocator>::RemoveAt
            (&this->Data,(uint)param_1,1);
  if ((this->FirstArrayIndex == (uint)param_1) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("FirstArrayIndex != Index",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\FastUpdate\\SlateInvalidationWidgetList.cpp"
                         ,0x46c,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((this->LastArrayIndex == (uint)param_1) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("LastArrayIndex != Index",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\FastUpdate\\SlateInvalidationWidgetList.cpp"
                         ,0x46d,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (*(int *)&(this->Data).field_0x8 == *(int *)&(this->Data).field_0x34) {
    if (((this->LastArrayIndex != -1) || (this->FirstArrayIndex != -1)) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("LastArrayIndex == INDEX_NONE && FirstArrayIndex == INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\FastUpdate\\SlateInvalidationWidgetList.cpp"
                           ,0x470,L""), bVar2)) {
code_r0x0001424a5940:
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (((this->FirstArrayIndex == -1) || (this->LastArrayIndex == -1)) &&
          (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                             ("FirstArrayIndex != INDEX_NONE && LastArrayIndex != INDEX_NONE",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\FastUpdate\\SlateInvalidationWidgetList.cpp"
                              ,0x474,L""), bVar2)) goto code_r0x0001424a5940;
  return;
}

// RemoveWidget @ 1424a5ae0

void __thiscall
FSlateInvalidationWidgetList::RemoveWidget(FSlateInvalidationWidgetList *this,SWidget *param_1)

{
  undefined8 uVar1;
  FSlateInvalidationWidgetIndex FVar2;
  code *pcVar3;
  bool bVar4;
  FWidgetProxy *pFVar5;
  FIndexRange local_48 [2];
  undefined8 local_28;
  FSlateInvalidationRoot *local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  
  local_20 = (param_1->FastPathProxyHandle).InvalidationRootHandle.InvalidationRoot;
  uStack_18 = *(undefined8 *)&(param_1->FastPathProxyHandle).InvalidationRootHandle.UniqueId;
  uVar1._0_2_ = (param_1->FastPathProxyHandle).WidgetIndex.ArrayIndex;
  uVar1._2_2_ = (param_1->FastPathProxyHandle).WidgetIndex.ElementIndex;
  uVar1._4_4_ = (param_1->FastPathProxyHandle).WidgetSortOrder;
  local_10 = uVar1;
  if ((param_1->FastPathProxyHandle).InvalidationRootHandle.UniqueId == (this->Owner).UniqueId) {
    if (((undefined2)uVar1 != FSlateInvalidationWidgetIndex::Invalid.ArrayIndex) ||
       (uVar1._2_2_ != FSlateInvalidationWidgetIndex::Invalid.ElementIndex)) {
      local_28 = uVar1;
      pFVar5 = operator[](this,(FSlateInvalidationWidgetIndex)(undefined4)uVar1);
      FVar2 = pFVar5->LeafMostChildIndex;
      local_48[0].InclusiveMax = FVar2;
      local_48[0].InclusiveMin.ArrayIndex = (undefined2)uVar1;
      local_48[0].InclusiveMin.ElementIndex = uVar1._2_2_;
      local_48[0].OrderMax.Order =
           *(int *)((ulonglong)((uint)FVar2 & 0xffff) * 0x40 + 8 + *(longlong *)&this->Data) * 0x400
           + ((uint)FVar2 >> 0x10);
      local_48[0].OrderMin.Order =
           *(int *)((ulonglong)((undefined4)uVar1 & 0xffff) * 0x40 + 8 + *(longlong *)&this->Data) *
           0x400 + ((uint)(undefined4)uVar1 >> 0x10);
      Internal_RemoveRangeFromSameParent(this,local_48);
    }
  }
  else {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8451985538147154453>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\FastUpdate\\SlateInvalidationWidgetList.cpp"
                       ,0x5eb,
                       "WidgetToRemove.GetProxyHandle().GetInvalidationRootHandle().GetUniqueId() == Owner.GetUniqueId()"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// RemoveWidget @ 1424a5bf0

void __thiscall
FSlateInvalidationWidgetList::RemoveWidget
          (FSlateInvalidationWidgetList *this,FSlateInvalidationWidgetIndex param_1)

{
  bool bVar1;
  FWidgetProxy *pFVar2;
  FIndexRange local_18;
  
  if ((param_1.ArrayIndex != FSlateInvalidationWidgetIndex::Invalid.ArrayIndex) ||
     (param_1.ElementIndex != FSlateInvalidationWidgetIndex::Invalid.ElementIndex)) {
    bVar1 = IsValidIndex(this,param_1);
    if (bVar1) {
      pFVar2 = operator[](this,param_1);
      local_18.InclusiveMax = pFVar2->LeafMostChildIndex;
      local_18.InclusiveMin = param_1;
      local_18.OrderMax.Order =
           *(int *)((ulonglong)((uint)local_18.InclusiveMax & 0xffff) * 0x40 + 8 +
                   *(longlong *)&this->Data) * 0x400 + ((uint)local_18.InclusiveMax >> 0x10);
      local_18.OrderMin.Order =
           *(int *)((ulonglong)((uint)param_1 & 0xffff) * 0x40 + 8 + *(longlong *)&this->Data) *
           0x400 + ((uint)param_1 >> 0x10);
      Internal_RemoveRangeFromSameParent(this,&local_18);
    }
  }
  return;
}

// Reset @ 1424a6150

void __thiscall FSlateInvalidationWidgetList::Reset(FSlateInvalidationWidgetList *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  undefined1 local_res8 [8];
  undefined8 local_18 [2];
  
  if (this->NumberOfLock != 0) {
    `FSlateInvalidationWidgetList::Reset'::__l2::<lambda_1>::operator()(local_res8);
  }
  TSparseArray<FSlateInvalidationWidgetList::FArrayNode,FDefaultSparseArrayAllocator>::
  DestroyElements(&this->Data,0,*(int *)&(this->Data).field_0x8);
  *(undefined4 *)&(this->Data).field_0x8 = 0;
  if (*(int *)&(this->Data).field_0xc < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,0,(ForAnyElementType *)&this->Data,0,(int *)&(this->Data).field_0xc);
  }
  *(undefined4 *)&(this->Data).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Data).field_0x34 = 0;
  *(undefined4 *)&(this->Data).field_0x28 = 0;
  if (&this->Root != (TWeakPtr<SWidget,1> *)local_18) {
    pTVar3 = (this->Root).WeakReferenceCount.ReferenceController;
    (this->Root).Object = (SWidget *)0x0;
    (this->Root).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar3->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
      }
    }
  }
  this->FirstArrayIndex = -1;
  this->LastArrayIndex = -1;
  return;
}

// ShouldDoRecursion @ 1424a7cc0

bool __thiscall
FSlateInvalidationWidgetList::ShouldDoRecursion(FSlateInvalidationWidgetList *this,SWidget *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(param_1->_padding_ + 0x210))(param_1);
  if (((cVar1 != '\0') && (this->FirstArrayIndex != -1)) &&
     (*(int *)((longlong)this->FirstArrayIndex * 0x40 + 0x18 + *(longlong *)&this->Data) != 0)) {
    return false;
  }
  return true;
}

// UpdateParentLeafIndex @ 1424acd00

void __thiscall
FSlateInvalidationWidgetList::UpdateParentLeafIndex
          (FSlateInvalidationWidgetList *this,FWidgetProxy *param_1,
          FSlateInvalidationWidgetIndex param_2,FSlateInvalidationWidgetIndex param_3)

{
  code *pcVar1;
  bool bVar2;
  FWidgetProxy *pFVar3;
  uint uVar4;
  longlong lVar5;
  ushort uStackX_1a;
  
  if (((param_1->ParentIndex).ArrayIndex != FSlateInvalidationWidgetIndex::Invalid.ArrayIndex) ||
     ((param_1->ParentIndex).ElementIndex != FSlateInvalidationWidgetIndex::Invalid.ElementIndex)) {
    pFVar3 = operator[](this,param_1->ParentIndex);
    uStackX_1a = param_2.ElementIndex;
    while (((pFVar3->LeafMostChildIndex).ArrayIndex == param_2.ArrayIndex &&
           ((pFVar3->LeafMostChildIndex).ElementIndex == uStackX_1a))) {
      pFVar3->LeafMostChildIndex = param_3;
      if (((pFVar3->ParentIndex).ArrayIndex != FSlateInvalidationWidgetIndex::Invalid.ArrayIndex) ||
         ((pFVar3->ParentIndex).ElementIndex != FSlateInvalidationWidgetIndex::Invalid.ElementIndex)
         ) {
        lVar5 = (ulonglong)((uint)pFVar3->ParentIndex & 0xffff) * 0x40 + *(longlong *)&this->Data;
        uVar4 = (uint)pFVar3->ParentIndex >> 0x10;
        if ((*(int *)(lVar5 + 0x18) <= (int)uVar4) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pFVar3 = (FWidgetProxy *)(*(longlong *)(lVar5 + 0x10) + (ulonglong)uVar4 * 0x18);
      }
    }
  }
  return;
}

// VerifyElementIndexList @ 1424ad630

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FSlateInvalidationWidgetList::VerifyElementIndexList(FSlateInvalidationWidgetList *this)

{
  int *piVar1;
  ushort *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  ushort uVar5;
  uint uVar6;
  undefined1 *puVar7;
  SWidget *pSVar8;
  code *pcVar9;
  bool bVar10;
  undefined1 uVar11;
  bool bVar12;
  int iVar13;
  longlong lVar14;
  ForAnyElementType FVar15;
  uint uVar16;
  TSparseArray<FSlateInvalidationWidgetList::FArrayNode,FDefaultSparseArrayAllocator> *pTVar17;
  uint uVar18;
  undefined1 *puVar19;
  ushort *puVar20;
  ForElementType<unsigned_int> FVar21;
  uint *puVar22;
  TSparseArray<FSlateInvalidationWidgetList::FArrayNode,FDefaultSparseArrayAllocator> *pTVar23;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  FSlateInvalidationWidgetIndex local_res20;
  ForAnyElementType local_108;
  undefined8 local_100;
  ForElementType<unsigned_int> local_f8;
  longlong local_f0;
  ForAnyElementType local_e8;
  int local_e0;
  int local_dc;
  FWidgetAttributeIterator local_d8;
  int local_b8;
  uint uStack_b4;
  undefined1 *puStack_b0;
  undefined4 local_a8;
  int iStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  TSparseArray<FSlateInvalidationWidgetList::FArrayNode,FDefaultSparseArrayAllocator> *local_98;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_90;
  int local_70;
  int local_68;
  int local_64;
  TSparseArray<FSlateInvalidationWidgetList::FArrayNode,FDefaultSparseArrayAllocator> *local_60;
  FString local_58;
  FString local_48;
  
  local_d8.CurrentWidgetIndex = FSlateInvalidationWidgetIndex::Invalid;
  local_108.Data = (FScriptContainerElement *)0x0;
  local_100 = 0;
  this->NumberOfLock = this->NumberOfLock + 1;
  uVar16 = this->FirstArrayIndex;
  local_d8.CurrentWidgetSortOrder.Order = 0xffffffff;
  local_d8.AttributeIndex = 0;
  local_d8.bNeedsWidgetFixUp = false;
  local_d8.WidgetList = this;
  local_d8.MoveToWidgetIndexOnNextAdvance = local_d8.CurrentWidgetIndex;
  while (uVar16 != 0xffffffff) {
    if (((int)uVar16 < 0) || (*(int *)&(this->Data).field_0x28 <= (int)uVar16)) {
LAB_1424ad6f2:
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("WidgetList.Data.IsValidIndex(ArrayIndex)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\FastUpdate\\SlateInvalidationWidgetList.cpp"
                          ,0x37,L"");
      if (bVar10) {
        pcVar9 = (code *)swi(3);
        uVar11 = (*pcVar9)();
        return (bool)uVar11;
      }
    }
    else {
      if ((*(int *)&(this->Data).field_0x28 <= (int)uVar16) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index>=0 && Index<NumBits",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x5c6,L""), bVar10)) {
        pcVar9 = (code *)swi(3);
        uVar11 = (*pcVar9)();
        return (bool)uVar11;
      }
      puVar7 = *(undefined1 **)&(this->Data).field_0x20;
      puVar19 = &(this->Data).field_0x10;
      if (puVar7 != (undefined1 *)0x0) {
        puVar19 = puVar7;
      }
      uVar18 = uVar16;
      if ((int)uVar16 < 0) {
        uVar18 = uVar16 + 0x1f;
      }
      if ((*(uint *)(puVar19 + (longlong)((int)uVar18 >> 5) * 4) >> (uVar16 & 0x1f) & 1) == 0)
      goto LAB_1424ad6f2;
    }
    lVar14 = *(longlong *)&this->Data + (longlong)(int)uVar16 * 0x40;
    if (0 < *(int *)(lVar14 + 0x28)) {
      local_res20.ElementIndex = **(ushort **)(lVar14 + 0x20);
      local_res20.ArrayIndex = (ushort)uVar16;
      local_d8.CurrentWidgetSortOrder.Order =
           *(int *)((ulonglong)(uVar16 & 0xffff) * 0x40 + 8 + *(longlong *)&this->Data) * 0x400 +
           (uint)**(ushort **)(lVar14 + 0x20);
      local_d8.CurrentWidgetIndex = local_res20;
      break;
    }
    uVar16 = *(uint *)(lVar14 + 4);
  }
  while( true ) {
    if ((local_d8.CurrentWidgetIndex.ArrayIndex == FSlateInvalidationWidgetIndex::Invalid.ArrayIndex
        ) && (local_d8.CurrentWidgetIndex.ElementIndex ==
              FSlateInvalidationWidgetIndex::Invalid.ElementIndex)) break;
    lVar14 = (ulonglong)local_d8.CurrentWidgetIndex.ArrayIndex * 0x40 + *(longlong *)&this->Data;
    uVar16 = (uint)local_d8.CurrentWidgetIndex >> 0x10;
    if ((*(int *)(lVar14 + 0x18) <= (int)uVar16) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar9 = (code *)swi(3);
      uVar11 = (*pcVar9)();
      return (bool)uVar11;
    }
    local_f0 = *(longlong *)(*(longlong *)(lVar14 + 0x10) + (ulonglong)uVar16 * 0x18);
    if (local_f0 != 0) {
      if (((local_108.Data <= (FScriptContainerElement *)&local_f0) &&
          ((FScriptContainerElement *)&local_f0 < local_108.Data + (longlong)local_100._4_4_ * 8))
         && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar10)) {
        pcVar9 = (code *)swi(3);
        uVar11 = (*pcVar9)();
        return (bool)uVar11;
      }
      iVar13 = (int)local_100;
      if ((int)local_100 == local_100._4_4_) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&local_108,(int *)((longlong)&local_100 + 4));
      }
      local_100 = CONCAT44(local_100._4_4_,iVar13 + 1);
      *(longlong *)(local_108.Data + (longlong)iVar13 * 8) = local_f0;
    }
    FWidgetAttributeIterator::Advance(&local_d8);
  }
  local_e8.Data = (FScriptContainerElement *)0x0;
  local_dc = 0;
  if ((int)local_100 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(local_100 & 0xffffffff);
  }
  local_e0 = 0;
  if (0 < (int)local_100) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,(int)local_100,&local_e8,0,&local_dc);
  }
  ForEachWidget<_FSlateInvalidationWidgetList::VerifyElementIndexList_::__l5::<lambda_1>_>
            (this,(TArray<SWidget_const_*,TSizedDefaultAllocator<32>_> *)&local_e8);
  FVar15.Data = local_e8.Data;
  if (((int)local_100 == local_e0) &&
     (((int)local_100 == 0 ||
      (iVar13 = memcmp(local_108.Data,local_e8.Data,(longlong)(int)local_100 << 3), iVar13 == 0))))
  {
    bVar10 = true;
  }
  else {
    bVar10 = false;
    if (2 < (byte)LogSlate._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSlate);
      FVar15.Data = local_e8.Data;
    }
  }
  if (FVar15.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar15.Data);
  }
  piVar1 = &(local_d8.WidgetList)->NumberOfLock;
  *piVar1 = *piVar1 + -1;
  if ((*piVar1 < 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("WidgetList.NumberOfLock >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\FastUpdate\\SlateInvalidationWidgetList.cpp"
                          ,0x48,L""), bVar12)) {
    pcVar9 = (code *)swi(3);
    uVar11 = (*pcVar9)();
    return (bool)uVar11;
  }
  if (local_108.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Data);
  }
  if (bVar10 != false) {
    iVar13 = *(int *)&(this->Data).field_0x28;
    local_60 = &this->Data;
    local_f8 = (ForElementType<unsigned_int>)&(this->Data).field_0x10;
    local_b8 = 0;
    uStack_b4 = 1;
    iStack_a4 = 0;
    iStack_a0 = 0;
    if (iVar13 != 0) {
      puVar22 = *(uint **)&(this->Data).field_0x20;
      if (puVar22 == (uint *)0x0) {
        puVar22 = (uint *)local_f8;
      }
      uVar16 = *puVar22;
      iStack_a0 = 0;
      local_b8 = 0;
      while (uVar16 == 0) {
        lVar14 = (longlong)local_b8;
        iStack_a0 = iStack_a0 + 0x20;
        local_b8 = local_b8 + 1;
        if ((int)(iVar13 + -1 + (iVar13 + -1 >> 0x1f & 0x1fU)) >> 5 < local_b8) goto LAB_1424ada5b;
        uVar16 = (puVar22 + 1)[lVar14];
      }
      uStack_b4 = -uVar16 & uVar16;
      uVar4 = (ulonglong)uStack_b4 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      local_68 = (int)lVar14;
      iStack_a4 = local_68 + -1 + iStack_a0;
      if (iVar13 < iStack_a4) {
LAB_1424ada5b:
        iStack_a4 = iVar13;
      }
    }
    local_a8 = 0xffffffff;
    pTVar17 = &this->Data;
    uVar16 = *(uint *)&(this->Data).field_0x28;
    local_70 = *(int *)&(this->Data).field_0x8 - *(int *)&(this->Data).field_0x34;
    local_90._padding_ = CONCAT44(uStack_b4,local_b8);
    local_90.CurrentBitIndex = iStack_a4;
    local_90.UnvisitedBitMask = 0xffffffff;
    local_90._28_4_ = uStack_9c;
    local_90.BaseBitIndex = iStack_a0;
    iVar13 = (int)uVar16 >> 5;
    uVar18 = uVar16 & 0xffffffe0;
    puStack_b0 = (undefined1 *)local_f8;
    local_98 = pTVar17;
    local_90.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_f8;
    if (((int)uVar16 < 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar12)) {
      pcVar9 = (code *)swi(3);
      uVar11 = (*pcVar9)();
      return (bool)uVar11;
    }
    uVar6 = *(int *)((longlong)local_f8 + 0x18);
    pTVar23 = pTVar17;
    if (uVar16 != uVar6) {
      FVar21 = *(ForElementType<unsigned_int> *)((longlong)local_f8 + 0x10);
      if (*(ForElementType<unsigned_int> *)((longlong)local_f8 + 0x10) ==
          (ForElementType<unsigned_int>)0x0) {
        FVar21 = local_f8;
      }
      uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)((longlong)FVar21 + (longlong)iVar13 * 4);
      while (uVar16 == 0) {
        lVar14 = (longlong)iVar13;
        uVar18 = uVar18 + 0x20;
        iVar13 = iVar13 + 1;
        uVar16 = uVar6;
        if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13)
        goto LAB_1424adb40;
        uVar16 = *(uint *)((undefined1 *)((longlong)FVar21 + 4) + lVar14 * 4);
      }
      uVar4 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
      lVar14 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      local_64 = (int)lVar14;
      uVar16 = local_64 + -1 + uVar18;
      if ((int)uVar6 < (int)uVar16) {
        uVar16 = uVar6;
      }
    }
LAB_1424adb40:
    while( true ) {
      if (*(int *)&pTVar17->field_0x8 - *(int *)&pTVar17->field_0x34 != local_70) {
        local_res10[0] = 0;
        `TSparseArray<FSlateInvalidationWidgetList::FArrayNode,FDefaultSparseArrayAllocator>::
        TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if (((local_90.CurrentBitIndex == uVar16) &&
          ((ForElementType<unsigned_int>)local_90.Array == local_f8)) && (pTVar17 == pTVar23))
      break;
      lVar14 = (longlong)local_90.CurrentBitIndex * 0x40 + *(longlong *)pTVar17;
      puVar20 = *(ushort **)(lVar14 + 0x20);
      iVar13 = *(int *)(lVar14 + 0x28);
      puVar2 = puVar20 + iVar13;
      while( true ) {
        if (*(int *)(lVar14 + 0x28) != iVar13) {
          local_res18[0] = 0;
          `TCheckedPointerIterator<unsigned_short_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res18);
        }
        if (puVar20 == puVar2) goto LAB_1424adce1;
        uVar5 = *puVar20;
        if (*(int *)(lVar14 + 0x18) <= (int)(uint)uVar5) break;
        if ((*(int *)(lVar14 + 0x18) <= (int)(uint)uVar5) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar9 = (code *)swi(3);
          uVar11 = (*pcVar9)();
          return (bool)uVar11;
        }
        pSVar8 = *(SWidget **)(*(longlong *)(lVar14 + 0x10) + (ulonglong)uVar5 * 0x18);
        lVar3 = *(longlong *)(lVar14 + 0x10) + (ulonglong)uVar5 * 0x18;
        if (pSVar8 != (SWidget *)0x0) {
          if (pSVar8->bHasRegisteredSlateAttribute == 0) {
            if (2 < (byte)LogSlate._0_1_) {
              FReflectionMetaData::GetWidgetDebugInfo(&local_58,pSVar8);
              UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSlate);
              FVar15.Data = local_58.Data.AllocatorInstance.Data;
LAB_1424adca5:
              if (FVar15.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(FVar15.Data);
              }
            }
          }
          else {
            if (((*(byte *)(lVar3 + 0x15) & 0xc) != 0) || ((*(byte *)(lVar3 + 0x17) & 4) != 0))
            goto LAB_1424adcb2;
            if (2 < (byte)LogSlate._0_1_) {
              FReflectionMetaData::GetWidgetDebugInfo(&local_48,pSVar8);
              UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSlate);
              FVar15.Data = local_48.Data.AllocatorInstance.Data;
              goto LAB_1424adca5;
            }
          }
          bVar10 = false;
        }
LAB_1424adcb2:
        puVar20 = puVar20 + 1;
      }
      if (2 < (byte)LogSlate._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSlate);
      }
      bVar10 = false;
LAB_1424adce1:
      local_90.UnvisitedBitMask = local_90.UnvisitedBitMask & ~local_90._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_90);
      pTVar17 = local_98;
      pTVar23 = local_60;
    }
  }
  return bVar10;
}

// VerifyProxiesWidget @ 1424add40

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FSlateInvalidationWidgetList::VerifyProxiesWidget(FSlateInvalidationWidgetList *this)

{
  TSparseArray<FSlateInvalidationWidgetList::FArrayNode,FDefaultSparseArrayAllocator> *pTVar1;
  ushort uVar2;
  int iVar3;
  SWidget *pSVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined1 *puVar10;
  uint uVar11;
  TSparseArray<FSlateInvalidationWidgetList::FArrayNode,FDefaultSparseArrayAllocator> *pTVar12;
  int iVar13;
  uint uVar14;
  longlong lVar15;
  uint *puVar16;
  TBitArray<FDefaultBitArrayAllocator> *pTVar17;
  uint uVar18;
  bool bVar19;
  undefined1 local_res8 [8];
  int local_res10;
  int local_res18;
  TBitArray<FDefaultBitArrayAllocator> *local_res20;
  FString local_b0;
  int local_a0;
  uint uStack_9c;
  undefined1 *puStack_98;
  undefined4 local_90;
  int iStack_8c;
  int iStack_88;
  undefined4 uStack_84;
  TSparseArray<FSlateInvalidationWidgetList::FArrayNode,FDefaultSparseArrayAllocator> *local_80;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_78;
  int local_58;
  
  uStack_9c = 1;
  pTVar1 = &this->Data;
  local_a0 = 0;
  iVar3 = *(int *)&(this->Data).field_0x28;
  pTVar17 = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Data).field_0x10;
  bVar19 = true;
  iStack_8c = 0;
  iStack_88 = 0;
  if (iVar3 != 0) {
    puVar16 = *(uint **)&(this->Data).field_0x20;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)pTVar17;
    }
    uVar14 = *puVar16;
    iStack_88 = 0;
    local_a0 = 0;
    while (uVar14 == 0) {
      iStack_88 = iStack_88 + 0x20;
      lVar8 = (longlong)local_a0;
      local_a0 = local_a0 + 1;
      if ((int)((iVar3 + -1 >> 0x1f & 0x1fU) + iVar3 + -1) >> 5 < local_a0) goto LAB_1424ade08;
      uVar14 = puVar16[lVar8 + 1];
    }
    uStack_9c = -uVar14 & uVar14;
    uVar9 = (ulonglong)uStack_9c * 2 + 1;
    lVar8 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res10 = (int)lVar8;
    iStack_8c = local_res10 + -1 + iStack_88;
    if (iVar3 < iStack_8c) {
LAB_1424ade08:
      iStack_8c = iVar3;
    }
  }
  local_90 = 0xffffffff;
  uVar14 = *(uint *)&(this->Data).field_0x28;
  local_58 = *(int *)&(this->Data).field_0x8 - *(int *)&(this->Data).field_0x34;
  local_78._padding_ = CONCAT44(uStack_9c,local_a0);
  local_78.CurrentBitIndex = iStack_8c;
  local_78.UnvisitedBitMask = 0xffffffff;
  local_78._28_4_ = uStack_84;
  local_78.BaseBitIndex = iStack_88;
  iVar13 = (int)uVar14 >> 5;
  uVar18 = uVar14 & 0xffffffe0;
  local_res20 = pTVar17;
  puStack_98 = (undefined1 *)pTVar17;
  local_80 = pTVar1;
  local_78.Array = pTVar17;
  if ((((int)uVar14 < 0) || (iVar3 < (int)uVar14)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  uVar11 = *(uint *)&(this->Data).field_0x28;
  pTVar12 = pTVar1;
  if (uVar14 != uVar11) {
    puVar10 = *(undefined1 **)&(this->Data).field_0x20;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = (undefined1 *)pTVar17;
    }
    uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar10 + (longlong)iVar13 * 4);
    while (uVar14 == 0) {
      lVar8 = (longlong)iVar13;
      uVar18 = uVar18 + 0x20;
      iVar13 = iVar13 + 1;
      uVar14 = uVar11;
      if ((int)(((int)(uVar11 - 1) >> 0x1f & 0x1fU) + (uVar11 - 1)) >> 5 < iVar13)
      goto LAB_1424adee2;
      uVar14 = *(uint *)(puVar10 + lVar8 * 4 + 4);
    }
    uVar9 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res18 = (int)lVar8;
    uVar14 = local_res18 + -1 + uVar18;
    if ((int)uVar11 < (int)uVar14) {
      uVar14 = uVar11;
    }
  }
LAB_1424adee2:
  do {
    if (*(int *)&pTVar12->field_0x8 - *(int *)&pTVar12->field_0x34 != local_58) {
      local_res8[0] = 0;
      `TSparseArray<FSlateInvalidationWidgetList::FArrayNode,FDefaultSparseArrayAllocator>::
      TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((local_78.CurrentBitIndex == uVar14) && (local_78.Array == pTVar17)) && (pTVar12 == pTVar1)
       ) {
      return bVar19;
    }
    lVar8 = (longlong)local_78.CurrentBitIndex * 0x40 + *(longlong *)pTVar12;
    uVar18 = 0;
    uVar2 = 0;
    if (*(short *)(lVar8 + 0xc) != 0) {
      lVar15 = 0;
      do {
        uVar11 = 0;
        if ((int)uVar18 < *(int *)(lVar8 + 0x18)) {
          uVar11 = ~uVar18 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        pSVar4 = *(SWidget **)(lVar15 + *(longlong *)(lVar8 + 0x10));
        if (pSVar4 != (SWidget *)0x0) {
          if (2 < (byte)LogSlate._0_1_) {
            FReflectionMetaData::GetWidgetDebugInfo(&local_b0,pSVar4);
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSlate);
            if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_b0.Data.AllocatorInstance.Data);
            }
          }
          bVar19 = false;
        }
        uVar2 = *(ushort *)(lVar8 + 0xc);
        uVar18 = uVar18 + 1;
        lVar15 = lVar15 + 0x18;
        pTVar17 = local_res20;
      } while ((int)uVar18 < (int)(uint)uVar2);
    }
    uVar9 = (ulonglong)uVar2;
    if ((int)(uint)uVar2 < *(int *)(lVar8 + 0x18)) {
      lVar15 = uVar9 * 0x18;
      do {
        uVar11 = (uint)uVar9;
        uVar18 = 0;
        if ((int)uVar11 < *(int *)(lVar8 + 0x18)) {
          uVar18 = ~uVar11 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        if (*(longlong *)(lVar15 + *(longlong *)(lVar8 + 0x10)) == 0) {
          if (2 < (byte)LogSlate._0_1_) {
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSlate);
          }
          bVar19 = false;
        }
        uVar9 = (ulonglong)(uVar11 + 1);
        lVar15 = lVar15 + 0x18;
        pTVar17 = local_res20;
      } while ((int)(uVar11 + 1) < *(int *)(lVar8 + 0x18));
    }
    local_78.UnvisitedBitMask = local_78.UnvisitedBitMask & ~local_78._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_78);
    pTVar12 = local_80;
  } while( true );
}

// VerifySortOrder @ 1424ae0e0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FSlateInvalidationWidgetList::VerifySortOrder(FSlateInvalidationWidgetList *this)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (this->FirstArrayIndex != -1) {
    lVar2 = *(longlong *)&this->Data;
    lVar3 = (longlong)this->FirstArrayIndex * 0x40;
    for (iVar1 = *(int *)(lVar3 + 4 + lVar2); iVar1 != -1;
        iVar1 = *(int *)((longlong)iVar1 * 0x40 + 4 + lVar2)) {
      if (*(int *)((longlong)iVar1 * 0x40 + 8 + lVar2) <= *(int *)(lVar3 + 8 + lVar2)) {
        if (2 < (byte)LogSlate._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSlate);
        }
        return false;
      }
    }
  }
  return true;
}

// VerifyWidgetsIndex @ 1424ae160

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FSlateInvalidationWidgetList::VerifyWidgetsIndex(FSlateInvalidationWidgetList *this)

{
  SWidget *pSVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  ushort uVar5;
  FSlateInvalidationWidgetIndex FVar6;
  undefined4 extraout_var;
  ushort uVar7;
  uint uVar8;
  bool bVar9;
  longlong lVar10;
  undefined1 local_res10 [8];
  FString local_68;
  FString local_58;
  FSlateInvalidationRoot *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  uVar8 = this->FirstArrayIndex;
  bVar9 = true;
  FVar6 = FSlateInvalidationWidgetIndex::Invalid;
  if (uVar8 != 0xffffffff) {
    FVar6 = (FSlateInvalidationWidgetIndex)
            ((uint)*(ushort *)((longlong)(int)uVar8 * 0x40 + 0xc + *(longlong *)&this->Data) << 0x10
            | uVar8 & 0xffff);
  }
  do {
    uVar7 = FVar6.ArrayIndex;
    uVar5 = FVar6.ElementIndex;
    if ((uVar7 == FSlateInvalidationWidgetIndex::Invalid.ArrayIndex) &&
       (uVar5 == FSlateInvalidationWidgetIndex::Invalid.ElementIndex)) {
      return bVar9;
    }
    lVar10 = (ulonglong)((uint)FVar6 & 0xffff) * 0x40 + *(longlong *)&this->Data;
    uVar8 = (uint)FVar6 >> 0x10;
    if ((*(int *)(lVar10 + 0x18) <= (int)uVar8) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    lVar10 = *(longlong *)(lVar10 + 0x10);
    pSVar1 = *(SWidget **)(lVar10 + (ulonglong)uVar8 * 0x18);
    lVar10 = lVar10 + (ulonglong)uVar8 * 0x18;
    if (pSVar1 == (SWidget *)0x0) {
      if (2 < (byte)LogSlate._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSlate);
      }
LAB_1424ae373:
      bVar9 = false;
    }
    else {
      local_38._0_2_ = (pSVar1->FastPathProxyHandle).WidgetIndex.ArrayIndex;
      local_38._2_2_ = (pSVar1->FastPathProxyHandle).WidgetIndex.ElementIndex;
      local_38._4_4_ = (pSVar1->FastPathProxyHandle).WidgetSortOrder;
      local_48 = (pSVar1->FastPathProxyHandle).InvalidationRootHandle.InvalidationRoot;
      uStack_40 = *(undefined8 *)&(pSVar1->FastPathProxyHandle).InvalidationRootHandle.UniqueId;
      if ((uVar7 != (undefined2)local_38) || (uVar5 != local_38._2_2_)) {
        if (2 < (byte)LogSlate._0_1_) {
          FReflectionMetaData::GetWidgetDebugInfo(&local_58,pSVar1);
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSlate);
          if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_58.Data.AllocatorInstance.Data);
          }
        }
        goto LAB_1424ae373;
      }
      if ((*(ushort *)(lVar10 + 8) != uVar7) || (*(ushort *)(lVar10 + 10) != uVar5)) {
        if (2 < (byte)LogSlate._0_1_) {
          FReflectionMetaData::GetWidgetDebugInfo(&local_68,pSVar1);
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSlate);
          if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68.Data.AllocatorInstance.Data);
          }
        }
        goto LAB_1424ae373;
      }
    }
    FVar6 = IncrementIndex(this,SUB84(local_res10,0));
    FVar6 = *(FSlateInvalidationWidgetIndex *)CONCAT44(extraout_var,FVar6);
  } while( true );
}

// operator() @ 15048e870

bool __thiscall
`FSlateInvalidationWidgetList::BuildWidgetList'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8451985538147155468>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8451985538147155468>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15048e8b0

bool __thiscall `FSlateInvalidationWidgetList::Empty'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8451985538147155106>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8451985538147155106>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15048e8f0

bool __thiscall
`FSlateInvalidationWidgetList::ProcessAttributeRegistrationInvalidation'::__l2::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8451985538147155242>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8451985538147155242>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15048e930

bool __thiscall
`FSlateInvalidationWidgetList::ProcessChildOrderInvalidation'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8451985538147155407>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8451985538147155407>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15048e970

bool __thiscall
`FSlateInvalidationWidgetList::ProcessVolatileUpdateInvalidation'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8451985538147155224>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8451985538147155224>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15048e9b0

bool __thiscall `FSlateInvalidationWidgetList::Reset'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8451985538147155095>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8451985538147155095>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15048ea50

bool __thiscall
`FSlateInvalidationWidgetList::FSlateInvalidationWidgetList'::__l5::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8451985538147155552>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8451985538147155552>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15048eb20

bool __thiscall
`FSlateInvalidationWidgetList::AddArrayNodeIfNeeded'::__l8::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_8451985538147155080>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8451985538147155080>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15048eb60

bool __thiscall
`FSlateInvalidationWidgetList::InsertDataNodeAfter'::__l45::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_8451985538147154908>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8451985538147154908>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15048eca0

bool __thiscall
`FSlateInvalidationWidgetList::RebuildOrderIndex'::__l27::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8451985538147154930>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8451985538147154930>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 15048ed00

bool __thiscall
`FSlateInvalidationWidgetList::ProcessChildOrderInvalidation'::__l14::<lambda_2>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8451985538147155388>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8451985538147155388>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15048ed80

bool __thiscall
`FSlateInvalidationWidgetList::ProcessChildOrderInvalidation'::__l34::<lambda_3>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8451985538147155284>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8451985538147155284>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

