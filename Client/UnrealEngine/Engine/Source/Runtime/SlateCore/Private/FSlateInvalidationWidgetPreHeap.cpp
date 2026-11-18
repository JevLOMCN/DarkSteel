// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 3

// HeapPushUnique @ 142444d80

void __thiscall
FSlateInvalidationWidgetPreHeap::HeapPushUnique
          (FSlateInvalidationWidgetPreHeap *this,FWidgetProxy *param_1)

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
  FSlateInvalidationWidgetSortOrder *pFVar10;
  ForElementType<FSlateInvalidationWidgetHeapElement> FVar11;
  FSlateInvalidationWidgetSortOrder local_res10 [2];
  FSlateInvalidationWidgetIndex local_18;
  uint uStack_14;
  
  if ((((param_1->Index).ArrayIndex == FSlateInvalidationWidgetIndex::Invalid.ArrayIndex) &&
      ((param_1->Index).ElementIndex == FSlateInvalidationWidgetIndex::Invalid.ElementIndex)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InvalidationWidget.Index != FSlateInvalidationWidgetIndex::Invalid",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\FastUpdate\\SlateInvalidationWidgetHeap.h"
                         ,0x31,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (UE::Slate::Private::GSlateInvalidationWidgetHeapVerifyWidgetContains != false) {
    FVar5 = (this->Heap).AllocatorInstance.SecondaryData;
    FVar11 = (ForElementType<FSlateInvalidationWidgetHeapElement>)this;
    if (FVar5 != (ForElementType<FSlateInvalidationWidgetHeapElement>)0x0) {
      FVar11 = FVar5;
    }
    FVar5 = (ForElementType<FSlateInvalidationWidgetHeapElement>)
            ((longlong)FVar11 + (longlong)(this->Heap).ArrayNum * 8);
    for (; FVar11 != FVar5;
        FVar11 = (ForElementType<FSlateInvalidationWidgetHeapElement>)((longlong)FVar11 + 8)) {
      if (((ushort)*(undefined4 *)FVar11 == (param_1->Index).ArrayIndex) &&
         ((ushort)((uint)*(undefined4 *)FVar11 >> 0x10) == (param_1->Index).ElementIndex))
      goto LAB_142444e21;
    }
    FVar11 = (ForElementType<FSlateInvalidationWidgetHeapElement>)0x0;
LAB_142444e21:
    if (((FVar11 != (ForElementType<FSlateInvalidationWidgetHeapElement>)0x0) !=
         (bool)((param_1->field6_0x16).PrivateFlags & 1)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Contains_Debug(InvalidationWidget.Index) == InvalidationWidget.bContainedByWidgetPreHeap"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\FastUpdate\\SlateInvalidationWidgetHeap.h"
                           ,0xa7,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  if (((param_1->field6_0x16).PrivateFlags & 1) == 0) {
    FVar4 = param_1->Index;
    (param_1->field6_0x16).PrivateFlags = (param_1->field6_0x16).PrivateFlags | 1;
    pFVar10 = FSlateInvalidationWidgetSortOrder::FSlateInvalidationWidgetSortOrder
                        (local_res10,this->OwnerList,FVar4);
    FVar5 = (this->Heap).AllocatorInstance.SecondaryData;
    uStack_14 = pFVar10->Order;
    FVar11 = (ForElementType<FSlateInvalidationWidgetHeapElement>)this;
    if (FVar5 != (ForElementType<FSlateInvalidationWidgetHeapElement>)0x0) {
      FVar11 = FVar5;
    }
    local_18 = FVar4;
    if ((ulonglong)FVar11 <= &local_18) {
      FVar11 = (ForElementType<FSlateInvalidationWidgetHeapElement>)this;
      if (FVar5 != (ForElementType<FSlateInvalidationWidgetHeapElement>)0x0) {
        FVar11 = FVar5;
      }
      if ((&local_18 <
           (FSlateInvalidationWidgetIndex *)((longlong)FVar11 + (longlong)(this->Heap).ArrayMax * 8)
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
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<FSlateInvalidationWidgetHeapElement>_>
                        (0x408,(ForElementType<FSlateInvalidationWidgetHeapElement> *)this,piVar1);
    }
    (this->Heap).ArrayNum = iVar9 + 1;
    FVar5 = (this->Heap).AllocatorInstance.SecondaryData;
    FVar11 = (ForElementType<FSlateInvalidationWidgetHeapElement>)this;
    if (FVar5 != (ForElementType<FSlateInvalidationWidgetHeapElement>)0x0) {
      FVar11 = FVar5;
    }
    *(ulonglong *)((longlong)FVar11 + (longlong)iVar9 * 8) = CONCAT44(uStack_14,local_18);
    FVar5 = (this->Heap).AllocatorInstance.SecondaryData;
    iVar9 = (this->Heap).ArrayNum + -1;
    if (FVar5 != (ForElementType<FSlateInvalidationWidgetHeapElement>)0x0) {
      this = (FSlateInvalidationWidgetPreHeap *)FVar5;
    }
    while (0 < iVar9) {
      puVar2 = (undefined8 *)((longlong)this + (longlong)iVar9 * 8);
      iVar9 = (iVar9 + -1) / 2;
      puVar3 = (undefined8 *)((longlong)this + (longlong)iVar9 * 8);
      if (*(uint *)((longlong)this + 4 + (longlong)iVar9 * 8) <= *(uint *)((longlong)puVar2 + 4)) {
        return;
      }
      uVar6 = *puVar2;
      *puVar2 = *puVar3;
      *puVar3 = uVar6;
    }
  }
  return;
}

// RemoveRange @ 14244f440

int __thiscall
FSlateInvalidationWidgetPreHeap::RemoveRange
          (FSlateInvalidationWidgetPreHeap *this,FIndexRange *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  byte *pbVar4;
  ForElementType<FSlateInvalidationWidgetHeapElement> FVar5;
  undefined8 uVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  ForElementType<FSlateInvalidationWidgetHeapElement> FVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  
  uVar13 = 0;
  iVar9 = (this->Heap).ArrayNum;
  if (0 < iVar9) {
    lVar16 = 0;
    do {
      uVar14 = ~uVar13 >> 0x1f;
      uVar11 = 0;
      if ((int)uVar13 < iVar9) {
        uVar11 = uVar14;
      }
      if ((uVar11 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        iVar9 = (*pcVar7)();
        return iVar9;
      }
      FVar5 = (this->Heap).AllocatorInstance.SecondaryData;
      FVar12 = (ForElementType<FSlateInvalidationWidgetHeapElement>)this;
      if (FVar5 != (ForElementType<FSlateInvalidationWidgetHeapElement>)0x0) {
        FVar12 = FVar5;
      }
      uVar11 = *(uint *)(lVar16 * 8 + 4 + (longlong)FVar12);
      if (((param_1->OrderMin).Order <= uVar11) && (uVar11 <= (param_1->OrderMax).Order)) {
        uVar11 = 0;
        if ((int)uVar13 < (this->Heap).ArrayNum) {
          uVar11 = uVar14;
        }
        if ((uVar11 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar7 = (code *)swi(3);
          iVar9 = (*pcVar7)();
          return iVar9;
        }
        FVar5 = (this->Heap).AllocatorInstance.SecondaryData;
        FVar12 = (ForElementType<FSlateInvalidationWidgetHeapElement>)this;
        if (FVar5 != (ForElementType<FSlateInvalidationWidgetHeapElement>)0x0) {
          FVar12 = FVar5;
        }
        uVar11 = *(uint *)(lVar16 * 8 + (longlong)FVar12);
        uVar15 = uVar11 >> 0x10;
        lVar16 = (ulonglong)(uVar11 & 0xffff) * 0x40 + *(longlong *)&this->OwnerList->Data;
        if ((*(int *)(lVar16 + 0x18) <= (int)uVar15) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar7 = (code *)swi(3);
          iVar9 = (*pcVar7)();
          return iVar9;
        }
        pbVar4 = (byte *)(*(longlong *)(lVar16 + 0x10) + 0x16 + (ulonglong)uVar15 * 0x18);
        *pbVar4 = *pbVar4 & 0xfe;
        uVar11 = 0;
        if ((int)(uVar13 + 1) <= (this->Heap).ArrayNum) {
          uVar11 = uVar14;
        }
        if ((uVar11 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar8)) {
          pcVar7 = (code *)swi(3);
          iVar9 = (*pcVar7)();
          return iVar9;
        }
        FVar5 = (this->Heap).AllocatorInstance.SecondaryData;
        iVar9 = (this->Heap).ArrayNum;
        FVar12 = (ForElementType<FSlateInvalidationWidgetHeapElement>)this;
        if (FVar5 != (ForElementType<FSlateInvalidationWidgetHeapElement>)0x0) {
          FVar12 = FVar5;
        }
        iVar10 = iVar9 + ~uVar13;
        if (1 < iVar10) {
          iVar10 = 1;
        }
        if (iVar10 != 0) {
          memmove((void *)((longlong)FVar12 + (longlong)(int)uVar13 * 8),
                  (void *)((longlong)FVar12 + (longlong)(iVar9 - iVar10) * 8),(longlong)iVar10 << 3)
          ;
        }
        piVar1 = &(this->Heap).ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::
        ReallocShrink<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<FSlateInvalidationWidgetHeapElement>_>
                  (8,4,(ForElementType<FSlateInvalidationWidgetHeapElement> *)this,
                   (this->Heap).ArrayNum,&(this->Heap).ArrayMax);
        FVar5 = (this->Heap).AllocatorInstance.SecondaryData;
        iVar9 = (this->Heap).ArrayNum;
        uVar11 = uVar13;
        FVar12 = (ForElementType<FSlateInvalidationWidgetHeapElement>)this;
        if (FVar5 != (ForElementType<FSlateInvalidationWidgetHeapElement>)0x0) {
          FVar12 = FVar5;
        }
        while ((int)(uVar11 * 2 + 1) < iVar9) {
          uVar15 = uVar11 * 2;
          uVar14 = uVar15 + 1;
          if ((int)(uVar15 + 2) < iVar9) {
            if (*(uint *)((uchar *)((longlong)FVar12 + 4) + (longlong)(int)uVar14 * 8) <
                *(uint *)((uchar *)((longlong)FVar12 + 0x14) + (longlong)(int)uVar15 * 8)) {
              uVar14 = uVar15;
            }
            uVar14 = uVar14 + 1;
          }
          puVar2 = (undefined8 *)((longlong)FVar12 + (longlong)(int)uVar14 * 8);
          puVar3 = (undefined8 *)((longlong)FVar12 + (longlong)(int)uVar11 * 8);
          if (*(uint *)((uchar *)((longlong)FVar12 + 4) + (longlong)(int)uVar11 * 8) <=
              *(uint *)((longlong)puVar2 + 4)) break;
          uVar6 = *puVar3;
          *puVar3 = *puVar2;
          *puVar2 = uVar6;
          uVar11 = uVar14;
        }
        FVar5 = (this->Heap).AllocatorInstance.SecondaryData;
        uVar11 = (this->Heap).ArrayNum - 1;
        if ((int)uVar13 < (int)uVar11) {
          uVar11 = uVar13;
        }
        FVar12 = (ForElementType<FSlateInvalidationWidgetHeapElement>)this;
        if (FVar5 != (ForElementType<FSlateInvalidationWidgetHeapElement>)0x0) {
          FVar12 = FVar5;
        }
        while (0 < (int)uVar11) {
          puVar2 = (undefined8 *)((longlong)FVar12 + (ulonglong)uVar11 * 8);
          uVar11 = (int)(uVar11 - 1) / 2;
          puVar3 = (undefined8 *)((longlong)FVar12 + (longlong)(int)uVar11 * 8);
          if (*(uint *)((uchar *)((longlong)FVar12 + 4) + (longlong)(int)uVar11 * 8) <=
              *(uint *)((longlong)puVar2 + 4)) break;
          uVar6 = *puVar2;
          *puVar2 = *puVar3;
          *puVar3 = uVar6;
        }
        uVar13 = 0xffffffff;
        lVar16 = -1;
      }
      iVar9 = (this->Heap).ArrayNum;
      uVar13 = uVar13 + 1;
      lVar16 = lVar16 + 1;
    } while ((int)uVar13 < iVar9);
  }
  return 0;
}

// Reset @ 1424503f0

void __thiscall
FSlateInvalidationWidgetPreHeap::Reset(FSlateInvalidationWidgetPreHeap *this,bool param_1)

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
      *pbVar2 = *pbVar2 & 0xfe;
      FVar7 = (ForElementType<FSlateInvalidationWidgetHeapElement>)((longlong)FVar7 + 8);
    }
  }
  piVar1 = &(this->Heap).ArrayMax;
  (this->Heap).ArrayNum = 0;
  if (*piVar1 != 0x20) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<FSlateInvalidationWidgetHeapElement>_>
              (8,4,0x20,(ForElementType<FSlateInvalidationWidgetHeapElement> *)this,0,piVar1);
  }
  return;
}

