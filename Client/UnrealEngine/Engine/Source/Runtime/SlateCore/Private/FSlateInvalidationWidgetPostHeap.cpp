// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 7

// HeapPushUnique @ 142444b70

void __thiscall
FSlateInvalidationWidgetPostHeap::HeapPushUnique
          (FSlateInvalidationWidgetPostHeap *this,FWidgetProxy *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  FSlateInvalidationWidgetIndex FVar4;
  ForElementType<FSlateInvalidationWidgetHeapElement> FVar5;
  undefined8 uVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  FSlateInvalidationWidgetSortOrder *pFVar11;
  ForElementType<FSlateInvalidationWidgetHeapElement> FVar12;
  FSlateInvalidationWidgetSortOrder local_res8 [2];
  FSlateInvalidationWidgetIndex local_18;
  uint uStack_14;
  
  if ((this->bIsHeap == false) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("bIsHeap",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\FastUpdate\\SlateInvalidationWidgetHeap.h"
                         ,0xcc,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((((param_1->Index).ArrayIndex == FSlateInvalidationWidgetIndex::Invalid.ArrayIndex) &&
      ((param_1->Index).ElementIndex == FSlateInvalidationWidgetIndex::Invalid.ElementIndex)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InvalidationWidget.Index != FSlateInvalidationWidgetIndex::Invalid",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\FastUpdate\\SlateInvalidationWidgetHeap.h"
                         ,0xcd,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  VerifyContainsFlag(this,param_1);
  if (((param_1->field6_0x16).PrivateFlags & 2) == 0) {
    FVar4 = param_1->Index;
    (param_1->field6_0x16).PrivateFlags = (param_1->field6_0x16).PrivateFlags | 2;
    pFVar11 = FSlateInvalidationWidgetSortOrder::FSlateInvalidationWidgetSortOrder
                        (local_res8,this->OwnerList,FVar4);
    FVar5 = (this->Heap).AllocatorInstance.SecondaryData;
    uStack_14 = pFVar11->Order;
    FVar12 = (ForElementType<FSlateInvalidationWidgetHeapElement>)this;
    if (FVar5 != (ForElementType<FSlateInvalidationWidgetHeapElement>)0x0) {
      FVar12 = FVar5;
    }
    local_18 = FVar4;
    if ((ulonglong)FVar12 <= &local_18) {
      FVar12 = (ForElementType<FSlateInvalidationWidgetHeapElement>)this;
      if (FVar5 != (ForElementType<FSlateInvalidationWidgetHeapElement>)0x0) {
        FVar12 = FVar5;
      }
      if ((&local_18 <
           (FSlateInvalidationWidgetIndex *)((longlong)FVar12 + (longlong)(this->Heap).ArrayMax * 8)
          ) && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    iVar9 = (this->Heap).ArrayNum;
    piVar1 = &(this->Heap).ArrayMax;
    if (iVar9 == *piVar1) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<100,32,TSizedDefaultAllocator<32>_>::ForElementType<FSlateInvalidationWidgetHeapElement>_>
                        (0x408,(ForElementType<FSlateInvalidationWidgetHeapElement> *)this,piVar1);
    }
    (this->Heap).ArrayNum = iVar9 + 1;
    FVar5 = (this->Heap).AllocatorInstance.SecondaryData;
    FVar12 = (ForElementType<FSlateInvalidationWidgetHeapElement>)this;
    if (FVar5 != (ForElementType<FSlateInvalidationWidgetHeapElement>)0x0) {
      FVar12 = FVar5;
    }
    *(ulonglong *)((longlong)FVar12 + (longlong)iVar9 * 8) = CONCAT44(uStack_14,local_18);
    FVar5 = (this->Heap).AllocatorInstance.SecondaryData;
    iVar9 = (this->Heap).ArrayNum + -1;
    if (FVar5 != (ForElementType<FSlateInvalidationWidgetHeapElement>)0x0) {
      this = (FSlateInvalidationWidgetPostHeap *)FVar5;
    }
    while (0 < iVar9) {
      iVar10 = (iVar9 + -1) / 2;
      puVar2 = (undefined8 *)((longlong)this + (longlong)iVar10 * 8);
      puVar3 = (undefined8 *)((longlong)this + (longlong)iVar9 * 8);
      if (*(uint *)((longlong)this + 4 + (longlong)iVar9 * 8) <= *(uint *)((longlong)puVar2 + 4)) {
        return;
      }
      uVar6 = *puVar3;
      *puVar3 = *puVar2;
      *puVar2 = uVar6;
      iVar9 = iVar10;
    }
  }
  return;
}

// IsValidHeap_Debug @ 142445ba0

bool __thiscall
FSlateInvalidationWidgetPostHeap::IsValidHeap_Debug(FSlateInvalidationWidgetPostHeap *this)

{
  ForElementType<FSlateInvalidationWidgetHeapElement> FVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  uchar *puVar6;
  
  FVar1 = (this->Heap).AllocatorInstance.SecondaryData;
  lVar4 = (longlong)(this->Heap).ArrayNum;
  if (FVar1 != (ForElementType<FSlateInvalidationWidgetHeapElement>)0x0) {
    this = (FSlateInvalidationWidgetPostHeap *)FVar1;
  }
  if (1 < lVar4) {
    iVar3 = 0;
    puVar6 = (uchar *)((longlong)this + 0xc);
    lVar5 = 1;
    do {
      iVar2 = iVar3;
      if (iVar3 < 0) {
        iVar2 = iVar3 + 1;
      }
      if (*(uint *)((uchar *)((longlong)this + 4) + (longlong)(iVar2 >> 1) * 8) < *(uint *)puVar6) {
        return false;
      }
      iVar3 = iVar3 + 1;
      lVar5 = lVar5 + 1;
      puVar6 = puVar6 + 8;
    } while (lVar5 < lVar4);
  }
  return true;
}

// PushBackOrHeapUnique @ 14244d960

void __thiscall
FSlateInvalidationWidgetPostHeap::PushBackOrHeapUnique
          (FSlateInvalidationWidgetPostHeap *this,FWidgetProxy *param_1)

{
  int *piVar1;
  FSlateInvalidationWidgetIndex FVar2;
  ForElementType<FSlateInvalidationWidgetHeapElement> FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FSlateInvalidationWidgetIndex *pFVar7;
  FSlateInvalidationWidgetSortOrder local_res8 [2];
  
  if (this->bIsHeap != false) {
    HeapPushUnique(this,param_1);
    return;
  }
  if (((param_1->Index).ArrayIndex == FSlateInvalidationWidgetIndex::Invalid.ArrayIndex) &&
     ((param_1->Index).ElementIndex == FSlateInvalidationWidgetIndex::Invalid.ElementIndex)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InvalidationWidget.Index != FSlateInvalidationWidgetIndex::Invalid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\FastUpdate\\SlateInvalidationWidgetHeap.h"
                       ,0xdb,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  VerifyContainsFlag(this,param_1);
  if (((param_1->field6_0x16).PrivateFlags & 2) == 0) {
    (param_1->field6_0x16).PrivateFlags = (param_1->field6_0x16).PrivateFlags | 2;
    pFVar7 = (FSlateInvalidationWidgetIndex *)
             FSlateInvalidationWidgetSortOrder::FSlateInvalidationWidgetSortOrder
                       (local_res8,this->OwnerList,param_1->Index);
    piVar1 = &(this->Heap).ArrayMax;
    iVar6 = (this->Heap).ArrayNum;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<100,32,TSizedDefaultAllocator<32>_>::ForElementType<FSlateInvalidationWidgetHeapElement>_>
                        (0x408,(ForElementType<FSlateInvalidationWidgetHeapElement> *)this,piVar1);
    }
    (this->Heap).ArrayNum = iVar6 + 1;
    FVar3 = (this->Heap).AllocatorInstance.SecondaryData;
    if (FVar3 != (ForElementType<FSlateInvalidationWidgetHeapElement>)0x0) {
      this = (FSlateInvalidationWidgetPostHeap *)FVar3;
    }
    FVar2 = *pFVar7;
    pFVar7 = (FSlateInvalidationWidgetIndex *)((longlong)this + (longlong)iVar6 * 8);
    *pFVar7 = param_1->Index;
    pFVar7[1] = FVar2;
  }
  return;
}

// RemoveRange @ 14244f180

int __thiscall
FSlateInvalidationWidgetPostHeap::RemoveRange
          (FSlateInvalidationWidgetPostHeap *this,FIndexRange *param_1)

{
  int *piVar1;
  byte *pbVar2;
  ForElementType<FSlateInvalidationWidgetHeapElement> FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  ForElementType<FSlateInvalidationWidgetHeapElement> FVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  int local_res8;
  
  if ((this->bIsHeap != false) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("bIsHeap == false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\FastUpdate\\SlateInvalidationWidgetHeap.h"
                         ,0xff,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    iVar6 = (*pcVar4)();
    return iVar6;
  }
  iVar6 = 0;
  uVar11 = (this->Heap).ArrayNum - 1;
  local_res8 = 0;
  if (-1 < (int)uVar11) {
    lVar10 = (longlong)(int)uVar11;
    lVar12 = lVar10 * 8;
    do {
      uVar9 = ~uVar11 >> 0x1f;
      uVar14 = 0;
      if ((int)uVar11 < (this->Heap).ArrayNum) {
        uVar14 = uVar9;
      }
      if ((uVar14 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         iVar6 = local_res8, bVar5)) {
        pcVar4 = (code *)swi(3);
        iVar6 = (*pcVar4)();
        return iVar6;
      }
      FVar3 = (this->Heap).AllocatorInstance.SecondaryData;
      FVar8 = (ForElementType<FSlateInvalidationWidgetHeapElement>)this;
      if (FVar3 != (ForElementType<FSlateInvalidationWidgetHeapElement>)0x0) {
        FVar8 = FVar3;
      }
      uVar14 = *(uint *)(lVar12 + 4 + (longlong)FVar8);
      if (((param_1->OrderMin).Order <= uVar14) && (uVar14 <= (param_1->OrderMax).Order)) {
        uVar14 = 0;
        if ((int)uVar11 < (this->Heap).ArrayNum) {
          uVar14 = uVar9;
        }
        if ((uVar14 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          iVar6 = (*pcVar4)();
          return iVar6;
        }
        FVar3 = (this->Heap).AllocatorInstance.SecondaryData;
        FVar8 = (ForElementType<FSlateInvalidationWidgetHeapElement>)this;
        if (FVar3 != (ForElementType<FSlateInvalidationWidgetHeapElement>)0x0) {
          FVar8 = FVar3;
        }
        uVar14 = *(uint *)(lVar12 + (longlong)FVar8) >> 0x10;
        lVar13 = (ulonglong)(*(uint *)(lVar12 + (longlong)FVar8) & 0xffff) * 0x40 +
                 *(longlong *)&this->OwnerList->Data;
        if ((*(int *)(lVar13 + 0x18) <= (int)uVar14) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          iVar6 = (*pcVar4)();
          return iVar6;
        }
        pbVar2 = (byte *)(*(longlong *)(lVar13 + 0x10) + 0x16 + (ulonglong)uVar14 * 0x18);
        *pbVar2 = *pbVar2 & 0xfd;
        uVar14 = 0;
        if ((int)uVar11 < (this->Heap).ArrayNum) {
          uVar14 = uVar9;
        }
        if ((uVar14 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          iVar6 = (*pcVar4)();
          return iVar6;
        }
        FVar3 = (this->Heap).AllocatorInstance.SecondaryData;
        iVar6 = (this->Heap).ArrayNum;
        FVar8 = (ForElementType<FSlateInvalidationWidgetHeapElement>)this;
        if (FVar3 != (ForElementType<FSlateInvalidationWidgetHeapElement>)0x0) {
          FVar8 = FVar3;
        }
        iVar7 = iVar6 + ~uVar11;
        if (1 < iVar7) {
          iVar7 = 1;
        }
        if (iVar7 != 0) {
          memmove((void *)((longlong)FVar8 + lVar10 * 8),
                  (void *)((longlong)FVar8 + (longlong)(iVar6 - iVar7) * 8),(longlong)iVar7 << 3);
        }
        piVar1 = &(this->Heap).ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::
        ReallocShrink<2,TSizedInlineAllocator<100,32,TSizedDefaultAllocator<32>_>::ForElementType<FSlateInvalidationWidgetHeapElement>_>
                  (8,4,(ForElementType<FSlateInvalidationWidgetHeapElement> *)this,
                   (this->Heap).ArrayNum,&(this->Heap).ArrayMax);
        iVar6 = local_res8 + 1;
        local_res8 = iVar6;
      }
      lVar10 = lVar10 + -1;
      lVar12 = lVar12 + -8;
      uVar11 = uVar11 - 1;
    } while (-1 < (int)uVar11);
  }
  return iVar6;
}

// Reset @ 142450280

void __thiscall
FSlateInvalidationWidgetPostHeap::Reset(FSlateInvalidationWidgetPostHeap *this,bool param_1)

{
  int *piVar1;
  byte *pbVar2;
  int iVar3;
  ForElementType<FSlateInvalidationWidgetHeapElement> FVar4;
  code *pcVar5;
  bool bVar6;
  ForElementType<FSlateInvalidationWidgetHeapElement> FVar7;
  uint uVar8;
  longlong lVar9;
  undefined1 local_res10 [8];
  
  if (param_1) {
    FVar4 = (this->Heap).AllocatorInstance.SecondaryData;
    iVar3 = (this->Heap).ArrayNum;
    FVar7 = (ForElementType<FSlateInvalidationWidgetHeapElement>)this;
    if (FVar4 != (ForElementType<FSlateInvalidationWidgetHeapElement>)0x0) {
      FVar7 = FVar4;
    }
    FVar4 = (ForElementType<FSlateInvalidationWidgetHeapElement>)
            ((longlong)FVar7 + (longlong)iVar3 * 8);
    while( true ) {
      if ((this->Heap).ArrayNum != iVar3) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<FSlateInvalidationWidgetHeapElement,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
      }
      if (FVar7 == FVar4) break;
      uVar8 = *(uint *)FVar7 >> 0x10;
      lVar9 = (ulonglong)(*(uint *)FVar7 & 0xffff) * 0x40 + *(longlong *)&this->OwnerList->Data;
      if ((*(int *)(lVar9 + 0x18) <= (int)uVar8) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pbVar2 = (byte *)(*(longlong *)(lVar9 + 0x10) + 0x16 + (ulonglong)uVar8 * 0x18);
      *pbVar2 = *pbVar2 & 0xfd;
      FVar7 = (ForElementType<FSlateInvalidationWidgetHeapElement>)((longlong)FVar7 + 8);
    }
  }
  piVar1 = &(this->Heap).ArrayMax;
  (this->Heap).ArrayNum = 0;
  if (*piVar1 == 100) {
    this->bIsHeap = false;
    return;
  }
  UE::Core::Private::
  ReallocTo<2,TSizedInlineAllocator<100,32,TSizedDefaultAllocator<32>_>::ForElementType<FSlateInvalidationWidgetHeapElement>_>
            (8,4,100,(ForElementType<FSlateInvalidationWidgetHeapElement> *)this,0,piVar1);
  this->bIsHeap = false;
  return;
}

// VerifyContainsFlag @ 1424566a0

void __thiscall
FSlateInvalidationWidgetPostHeap::VerifyContainsFlag
          (FSlateInvalidationWidgetPostHeap *this,FWidgetProxy *param_1)

{
  ForElementType<FSlateInvalidationWidgetHeapElement> FVar1;
  code *pcVar2;
  bool bVar3;
  ushort uVar4;
  ForElementType<FSlateInvalidationWidgetHeapElement> FVar5;
  ushort uVar6;
  
  if (UE::Slate::Private::GSlateInvalidationWidgetHeapVerifyWidgetContains) {
    FVar1 = (this->Heap).AllocatorInstance.SecondaryData;
    FVar5 = (ForElementType<FSlateInvalidationWidgetHeapElement>)this;
    if (FVar1 != (ForElementType<FSlateInvalidationWidgetHeapElement>)0x0) {
      FVar5 = FVar1;
    }
    FVar1 = (ForElementType<FSlateInvalidationWidgetHeapElement>)
            ((longlong)FVar5 + (longlong)(this->Heap).ArrayNum * 8);
    uVar6 = (param_1->Index).ArrayIndex;
    uVar4 = (param_1->Index).ElementIndex;
    for (; FVar5 != FVar1;
        FVar5 = (ForElementType<FSlateInvalidationWidgetHeapElement>)((longlong)FVar5 + 8)) {
      if (((ushort)*(undefined4 *)FVar5 == uVar6) &&
         ((ushort)((uint)*(undefined4 *)FVar5 >> 0x10) == uVar4)) goto LAB_142456703;
    }
    FVar5 = (ForElementType<FSlateInvalidationWidgetHeapElement>)0x0;
LAB_142456703:
    if (((FVar5 != (ForElementType<FSlateInvalidationWidgetHeapElement>)0x0) !=
         (bool)((param_1->field6_0x16).PrivateFlags >> 1 & 1)) &&
       ((((this->WidgetCannotBeAdded).ArrayIndex != uVar6 ||
         ((this->WidgetCannotBeAdded).ElementIndex != uVar4)) &&
        (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                           ("Contains_Debug(InvalidationWidget.Index) == InvalidationWidget.bContainedByWidgetPostHeap || WidgetCannotBeAdded == InvalidationWidget.Index"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\FastUpdate\\SlateInvalidationWidgetHeap.h"
                            ,0x170,L""), bVar3)))) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// PushBackUnique @ 1424a2260

void __thiscall
FSlateInvalidationWidgetPostHeap::PushBackUnique
          (FSlateInvalidationWidgetPostHeap *this,FWidgetProxy *param_1)

{
  int *piVar1;
  FSlateInvalidationWidgetIndex *pFVar2;
  FSlateInvalidationWidgetIndex FVar3;
  int iVar4;
  FSlateInvalidationWidgetIndex FVar5;
  ForElementType<FSlateInvalidationWidgetHeapElement> FVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  
  if (this->bIsHeap != false) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsHeap == false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\FastUpdate\\SlateInvalidationWidgetHeap.h"
                       ,0xda,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  if (((param_1->Index).ArrayIndex == FSlateInvalidationWidgetIndex::Invalid.ArrayIndex) &&
     ((param_1->Index).ElementIndex == FSlateInvalidationWidgetIndex::Invalid.ElementIndex)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("InvalidationWidget.Index != FSlateInvalidationWidgetIndex::Invalid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\FastUpdate\\SlateInvalidationWidgetHeap.h"
                       ,0xdb,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  VerifyContainsFlag(this,param_1);
  if (((param_1->field6_0x16).PrivateFlags & 2) == 0) {
    FVar3 = param_1->Index;
    (param_1->field6_0x16).PrivateFlags = (param_1->field6_0x16).PrivateFlags | 2;
    iVar9 = (this->Heap).ArrayNum;
    iVar4 = *(int *)((ulonglong)((uint)FVar3 & 0xffff) * 0x40 + 8 +
                    *(longlong *)&this->OwnerList->Data);
    piVar1 = &(this->Heap).ArrayMax;
    if (iVar9 == *piVar1) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<100,32,TSizedDefaultAllocator<32>_>::ForElementType<FSlateInvalidationWidgetHeapElement>_>
                        (0x408,(ForElementType<FSlateInvalidationWidgetHeapElement> *)this,piVar1);
    }
    (this->Heap).ArrayNum = iVar9 + 1;
    FVar6 = (this->Heap).AllocatorInstance.SecondaryData;
    if (FVar6 != (ForElementType<FSlateInvalidationWidgetHeapElement>)0x0) {
      this = (FSlateInvalidationWidgetPostHeap *)FVar6;
    }
    pFVar2 = (FSlateInvalidationWidgetIndex *)((longlong)this + (longlong)iVar9 * 8);
    FVar5 = param_1->Index;
    pFVar2[1] = (FSlateInvalidationWidgetIndex)(iVar4 * 0x400 + ((uint)FVar3 >> 0x10));
    *pFVar2 = FVar5;
  }
  return;
}

