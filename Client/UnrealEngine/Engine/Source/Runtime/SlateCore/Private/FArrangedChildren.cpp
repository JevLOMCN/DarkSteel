// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 9

// Empty @ 14243b510

void __thiscall FArrangedChildren::Empty(FArrangedChildren *this)

{
  TArray<FArrangedWidget,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *pTVar1;
  int *piVar2;
  int iVar3;
  ForElementType<FArrangedWidget> FVar4;
  
  pTVar1 = &this->Array;
  iVar3 = (this->Array).ArrayNum;
  piVar2 = &(this->Array).ArrayMax;
  FVar4 = (this->Array).AllocatorInstance.SecondaryData;
  if (-1 < *piVar2) {
    if (FVar4 == (ForElementType<FArrangedWidget>)0x0) {
      FVar4 = (ForElementType<FArrangedWidget>)pTVar1;
    }
    DestructItems<FArrangedWidget,int>((FArrangedWidget *)FVar4,iVar3);
    (this->Array).ArrayNum = 0;
    return;
  }
  if (FVar4 == (ForElementType<FArrangedWidget>)0x0) {
    FVar4 = (ForElementType<FArrangedWidget>)pTVar1;
  }
  DestructItems<FArrangedWidget,int>((FArrangedWidget *)FVar4,iVar3);
  (this->Array).ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FArrangedWidget>_>
              (0x48,8,0,&pTVar1->AllocatorInstance,0,piVar2);
  }
  return;
}

// Reverse @ 142450be0

void __thiscall FArrangedChildren::Reverse(FArrangedChildren *this)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  bool bVar14;
  ForElementType<FArrangedWidget> FVar15;
  undefined8 *puVar16;
  longlong lVar17;
  int iVar18;
  int iVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  
  iVar18 = (this->Array).ArrayNum;
  lVar21 = (longlong)iVar18;
  iVar19 = 0;
  if (0 < iVar18 / 2) {
    lVar20 = 0;
    lVar22 = 0;
    do {
      iVar18 = iVar18 + -1;
      lVar17 = (lVar21 + -1) - lVar20;
      if (((lVar20 < 0) || (lVar17 < 0)) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(FirstIndexToSwap >= 0) && (SecondIndexToSwap >= 0)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0xce6,L""), bVar14)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar3 = (this->Array).ArrayNum;
      if (((iVar3 <= iVar19) || (iVar3 <= iVar18)) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(ArrayNum > FirstIndexToSwap) && (ArrayNum > SecondIndexToSwap)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0xce7,L""), bVar14)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (lVar20 != lVar17) {
        FVar15 = (this->Array).AllocatorInstance.SecondaryData;
        if (FVar15 == (ForElementType<FArrangedWidget>)0x0) {
          puVar16 = (undefined8 *)((longlong)&this->Array + lVar17 * 0x48);
          FVar15 = (ForElementType<FArrangedWidget>)&this->Array;
        }
        else {
          puVar16 = (undefined8 *)((longlong)FVar15 + lVar17 * 0x48);
        }
        uVar5 = puVar16[1];
        uVar6 = *(undefined8 *)(lVar22 + (longlong)FVar15);
        uVar7 = ((undefined8 *)(lVar22 + (longlong)FVar15))[1];
        puVar1 = (undefined8 *)(lVar22 + 0x10 + (longlong)FVar15);
        uVar8 = *puVar1;
        uVar9 = puVar1[1];
        puVar1 = (undefined8 *)(lVar22 + 0x20 + (longlong)FVar15);
        uVar10 = *puVar1;
        uVar11 = puVar1[1];
        puVar1 = (undefined8 *)(lVar22 + 0x30 + (longlong)FVar15);
        uVar12 = *puVar1;
        uVar13 = puVar1[1];
        uVar2 = *(undefined8 *)(lVar22 + 0x40 + (longlong)FVar15);
        *(undefined8 *)(lVar22 + (longlong)FVar15) = *puVar16;
        ((undefined8 *)(lVar22 + (longlong)FVar15))[1] = uVar5;
        uVar5 = puVar16[3];
        puVar1 = (undefined8 *)(lVar22 + 0x10 + (longlong)FVar15);
        *puVar1 = puVar16[2];
        puVar1[1] = uVar5;
        uVar5 = puVar16[5];
        puVar1 = (undefined8 *)(lVar22 + 0x20 + (longlong)FVar15);
        *puVar1 = puVar16[4];
        puVar1[1] = uVar5;
        uVar5 = puVar16[7];
        puVar1 = (undefined8 *)(lVar22 + 0x30 + (longlong)FVar15);
        *puVar1 = puVar16[6];
        puVar1[1] = uVar5;
        *(undefined8 *)(lVar22 + 0x40 + (longlong)FVar15) = puVar16[8];
        *puVar16 = uVar6;
        puVar16[1] = uVar7;
        puVar16[2] = uVar8;
        puVar16[3] = uVar9;
        puVar16[4] = uVar10;
        puVar16[5] = uVar11;
        puVar16[6] = uVar12;
        puVar16[7] = uVar13;
        puVar16[8] = uVar2;
      }
      iVar19 = iVar19 + 1;
      lVar20 = lVar20 + 1;
      lVar22 = lVar22 + 0x48;
    } while (iVar19 < (this->Array).ArrayNum / 2);
  }
  return;
}

// operator[] @ 1424ede20

FArrangedWidget * __thiscall FArrangedChildren::operator[](FArrangedChildren *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FArrangedWidget *pFVar4;
  ForElementType<FArrangedWidget> FVar5;
  
  uVar3 = 0;
  if (param_1 < (this->Array).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FArrangedWidget *)(*pcVar1)();
      return pFVar4;
    }
  }
  FVar5 = (this->Array).AllocatorInstance.SecondaryData;
  if (FVar5 == (ForElementType<FArrangedWidget>)0x0) {
    FVar5 = (ForElementType<FArrangedWidget>)&this->Array;
  }
  return (FArrangedWidget *)((longlong)FVar5 + (longlong)param_1 * 0x48);
}

// operator[] @ 1424edec0

FArrangedWidget * __thiscall FArrangedChildren::operator[](FArrangedChildren *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FArrangedWidget *pFVar4;
  ForElementType<FArrangedWidget> FVar5;
  
  uVar3 = 0;
  if (param_1 < (this->Array).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FArrangedWidget *)(*pcVar1)();
      return pFVar4;
    }
  }
  FVar5 = (this->Array).AllocatorInstance.SecondaryData;
  if (FVar5 == (ForElementType<FArrangedWidget>)0x0) {
    FVar5 = (ForElementType<FArrangedWidget>)&this->Array;
  }
  return (FArrangedWidget *)((longlong)FVar5 + (longlong)param_1 * 0x48);
}

// AddWidget @ 142500930

/* WARNING: Type propagation algorithm not settling */

void __thiscall FArrangedChildren::AddWidget(FArrangedChildren *this,FArrangedWidget *param_1)

{
  TArray<FArrangedWidget,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *pTVar1;
  int *piVar2;
  FDeprecateSlateVector2D *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  FDeprecateSlateVector2D FVar6;
  undefined8 uVar7;
  bool bVar8;
  int iVar9;
  longlong lVar10;
  ForElementType<FArrangedWidget> FVar11;
  
  if (((this->VisibilityFilter).Value.Value & (byte)((param_1->Widget).Object)->VisibilityAttribute)
      != 0) {
    FVar11 = (this->Array).AllocatorInstance.SecondaryData;
    pTVar1 = &this->Array;
    if (FVar11 == (ForElementType<FArrangedWidget>)0x0) {
      FVar11 = (ForElementType<FArrangedWidget>)pTVar1;
    }
    if (((ulonglong)FVar11 <= param_1) &&
       (param_1 < (FArrangedWidget *)((longlong)FVar11 + (longlong)(this->Array).ArrayMax * 0x48)))
    {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar8) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    iVar9 = (this->Array).ArrayNum;
    piVar2 = &(this->Array).ArrayMax;
    if (iVar9 == *piVar2) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FArrangedWidget>_>
                        (0x848,&pTVar1->AllocatorInstance,piVar2);
    }
    lVar10 = (longlong)iVar9;
    (this->Array).ArrayNum = iVar9 + 1;
    FVar11 = (this->Array).AllocatorInstance.SecondaryData;
    FVar6 = *(FDeprecateSlateVector2D *)&(param_1->Geometry).Scale;
    if (FVar11 == (ForElementType<FArrangedWidget>)0x0) {
      FVar11 = (ForElementType<FArrangedWidget>)pTVar1;
    }
    pFVar3 = (FDeprecateSlateVector2D *)((longlong)FVar11 + lVar10 * 0x48);
    *pFVar3 = (param_1->Geometry).Size;
    pFVar3[1] = FVar6;
    uVar7 = *(undefined8 *)((longlong)&(param_1->Geometry).Position.field0_0x0 + 4);
    *(undefined8 *)((uchar *)((longlong)FVar11 + 0x10) + lVar10 * 0x48) =
         *(undefined8 *)((longlong)&(param_1->Geometry).AbsolutePosition.field0_0x0 + 4);
    *(undefined8 *)((uchar *)((longlong)FVar11 + 0x10) + lVar10 * 0x48 + 8) = uVar7;
    uVar7 = *(undefined8 *)((param_1->Geometry).AccumulatedRenderTransform.M.M[1] + 1);
    *(undefined8 *)((uchar *)((longlong)FVar11 + 0x20) + lVar10 * 0x48) =
         *(undefined8 *)((param_1->Geometry).AccumulatedRenderTransform.M.M[0] + 1);
    *(undefined8 *)((uchar *)((longlong)FVar11 + 0x20) + lVar10 * 0x48 + 8) = uVar7;
    *(undefined8 *)((uchar *)((longlong)FVar11 + 0x30) + lVar10 * 0x48) =
         *(undefined8 *)
          ((longlong)&(param_1->Geometry).AccumulatedRenderTransform.Trans.field0_0x0 + 4);
    *(SWidget **)((uchar *)((longlong)FVar11 + 0x38) + lVar10 * 0x48) = (param_1->Widget).Object;
    pTVar4 = (param_1->Widget).SharedReferenceCount.ReferenceController;
    *(TReferenceControllerBase<1> **)((uchar *)((longlong)FVar11 + 0x40) + lVar10 * 0x48) = pTVar4;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  return;
}

// Hittest2_FromArray @ 1425103f0

FArrangedChildren * __cdecl
FArrangedChildren::Hittest2_FromArray
          (FArrangedChildren *__return_storage_ptr__,TArrayView<FWidgetAndPointer,int> *param_1)

{
  TArray<FArrangedWidget,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *pTVar1;
  int *piVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  code *pcVar6;
  undefined8 uVar7;
  bool bVar8;
  int iVar9;
  FArrangedChildren *pFVar10;
  longlong lVar11;
  ForElementType<FArrangedWidget> FVar12;
  ForElementType<FArrangedWidget> FVar13;
  ForElementType<FArrangedWidget> FVar14;
  
  piVar2 = &(__return_storage_ptr__->Array).ArrayMax;
  uVar4 = param_1->ArrayNum;
  pTVar1 = &__return_storage_ptr__->Array;
  (__return_storage_ptr__->VisibilityFilter).Value.Value = (uchar)EVisibility::All.Value.Value;
  (__return_storage_ptr__->Array).AllocatorInstance.SecondaryData =
       (ForElementType<FArrangedWidget>)0x0;
  (__return_storage_ptr__->Array).ArrayNum = 0;
  *piVar2 = 4;
  __return_storage_ptr__->bAllow3DWidgets = false;
  if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
  }
  if ((__return_storage_ptr__->Array).ArrayMax < (int)uVar4) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FArrangedWidget>_>
              (0x48,8,uVar4,&pTVar1->AllocatorInstance,(__return_storage_ptr__->Array).ArrayNum,
               piVar2);
  }
  FVar13 = (ForElementType<FArrangedWidget>)param_1->DataPtr;
  FVar14 = (ForElementType<FArrangedWidget>)((longlong)(int)uVar4 * 0x60 + (longlong)FVar13);
  while( true ) {
    if (FVar13 == FVar14) {
      return __return_storage_ptr__;
    }
    FVar12 = (__return_storage_ptr__->Array).AllocatorInstance.SecondaryData;
    if (FVar12 == (ForElementType<FArrangedWidget>)0x0) {
      FVar12 = (ForElementType<FArrangedWidget>)pTVar1;
    }
    if ((((ulonglong)FVar12 <= (ulonglong)FVar13) &&
        ((ulonglong)FVar13 < (ulonglong)((longlong)FVar12 + (longlong)*piVar2 * 0x48))) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar8)) break;
    iVar9 = (__return_storage_ptr__->Array).ArrayNum;
    if (iVar9 == *piVar2) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FArrangedWidget>_>
                        (0x848,&pTVar1->AllocatorInstance,piVar2);
    }
    lVar11 = (longlong)iVar9;
    (__return_storage_ptr__->Array).ArrayNum = iVar9 + 1;
    FVar12 = (__return_storage_ptr__->Array).AllocatorInstance.SecondaryData;
    uVar7 = *(undefined8 *)((longlong)FVar13 + 8);
    if (FVar12 == (ForElementType<FArrangedWidget>)0x0) {
      FVar12 = (ForElementType<FArrangedWidget>)pTVar1;
    }
    puVar3 = (undefined8 *)((longlong)FVar12 + lVar11 * 0x48);
    *puVar3 = *(undefined8 *)FVar13;
    puVar3[1] = uVar7;
    uVar7 = *(undefined8 *)((longlong)FVar13 + 0x18);
    *(undefined8 *)((uchar *)((longlong)FVar12 + 0x10) + lVar11 * 0x48) =
         *(undefined8 *)((longlong)FVar13 + 0x10);
    *(undefined8 *)((uchar *)((longlong)FVar12 + 0x10) + lVar11 * 0x48 + 8) = uVar7;
    uVar7 = *(undefined8 *)((longlong)FVar13 + 0x28);
    *(undefined8 *)((uchar *)((longlong)FVar12 + 0x20) + lVar11 * 0x48) =
         *(undefined8 *)((longlong)FVar13 + 0x20);
    *(undefined8 *)((uchar *)((longlong)FVar12 + 0x20) + lVar11 * 0x48 + 8) = uVar7;
    *(undefined8 *)((uchar *)((longlong)FVar12 + 0x30) + lVar11 * 0x48) =
         *(undefined8 *)((longlong)FVar13 + 0x30);
    *(undefined8 *)((uchar *)((longlong)FVar12 + 0x38) + lVar11 * 0x48) =
         *(undefined8 *)((longlong)FVar13 + 0x38);
    lVar5 = *(longlong *)((longlong)FVar13 + 0x40);
    *(longlong *)((uchar *)((longlong)FVar12 + 0x40) + lVar11 * 0x48) = lVar5;
    if (lVar5 != 0) {
      LOCK();
      *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
      UNLOCK();
    }
    FVar13 = (ForElementType<FArrangedWidget>)((longlong)FVar13 + 0x60);
  }
  pcVar6 = (code *)swi(3);
  pFVar10 = (FArrangedChildren *)(*pcVar6)();
  return pFVar10;
}

// InsertWidget @ 142510b20

/* WARNING: Type propagation algorithm not settling */

void __thiscall
FArrangedChildren::InsertWidget(FArrangedChildren *this,FArrangedWidget *param_1,int param_2)

{
  TArray<FArrangedWidget,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *pTVar1;
  int *piVar2;
  longlong lVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  FDeprecateSlateVector2D FVar6;
  undefined8 uVar7;
  bool bVar8;
  int iVar9;
  ForElementType<FArrangedWidget> FVar10;
  
  if (((this->VisibilityFilter).Value.Value & (byte)((param_1->Widget).Object)->VisibilityAttribute)
      != 0) {
    FVar10 = (this->Array).AllocatorInstance.SecondaryData;
    pTVar1 = &this->Array;
    if (FVar10 == (ForElementType<FArrangedWidget>)0x0) {
      FVar10 = (ForElementType<FArrangedWidget>)pTVar1;
    }
    if (((ulonglong)FVar10 <= param_1) &&
       (param_1 < (FArrangedWidget *)((longlong)FVar10 + (longlong)(this->Array).ArrayMax * 0x48)))
    {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar8) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    iVar9 = (this->Array).ArrayNum;
    piVar2 = &(this->Array).ArrayMax;
    if (iVar9 == *piVar2) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FArrangedWidget>_>
                        (0x848,&pTVar1->AllocatorInstance,piVar2);
    }
    (this->Array).ArrayNum = iVar9 + 1;
    FVar10 = (this->Array).AllocatorInstance.SecondaryData;
    if (FVar10 == (ForElementType<FArrangedWidget>)0x0) {
      FVar10 = (ForElementType<FArrangedWidget>)pTVar1;
    }
    lVar3 = (longlong)param_2 * 0x48;
    memmove((void *)((longlong)FVar10 + lVar3 + 0x48),(void *)((longlong)FVar10 + lVar3),
            (longlong)(iVar9 - param_2) * 0x48);
    FVar10 = (this->Array).AllocatorInstance.SecondaryData;
    FVar6 = *(FDeprecateSlateVector2D *)&(param_1->Geometry).Scale;
    if (FVar10 == (ForElementType<FArrangedWidget>)0x0) {
      FVar10 = (ForElementType<FArrangedWidget>)pTVar1;
    }
    *(FDeprecateSlateVector2D *)((longlong)FVar10 + lVar3) = (param_1->Geometry).Size;
    ((FDeprecateSlateVector2D *)((longlong)FVar10 + lVar3))[1] = FVar6;
    lVar3 = (longlong)FVar10 + lVar3;
    uVar7 = *(undefined8 *)((longlong)&(param_1->Geometry).Position.field0_0x0 + 4);
    *(undefined8 *)(lVar3 + 0x10) =
         *(undefined8 *)((longlong)&(param_1->Geometry).AbsolutePosition.field0_0x0 + 4);
    *(undefined8 *)(lVar3 + 0x18) = uVar7;
    uVar7 = *(undefined8 *)((param_1->Geometry).AccumulatedRenderTransform.M.M[1] + 1);
    *(undefined8 *)(lVar3 + 0x20) =
         *(undefined8 *)((param_1->Geometry).AccumulatedRenderTransform.M.M[0] + 1);
    *(undefined8 *)(lVar3 + 0x28) = uVar7;
    *(undefined8 *)(lVar3 + 0x30) =
         *(undefined8 *)
          ((longlong)&(param_1->Geometry).AccumulatedRenderTransform.Trans.field0_0x0 + 4);
    *(SWidget **)(lVar3 + 0x38) = (param_1->Widget).Object;
    pTVar4 = (param_1->Widget).SharedReferenceCount.ReferenceController;
    *(TReferenceControllerBase<1> **)(lVar3 + 0x40) = pTVar4;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  return;
}

// AddWidget @ 1425ca8d0

/* WARNING: Type propagation algorithm not settling */

void __thiscall
FArrangedChildren::AddWidget(FArrangedChildren *this,EVisibility param_1,FArrangedWidget *param_2)

{
  TArray<FArrangedWidget,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *pTVar1;
  int *piVar2;
  FDeprecateSlateVector2D *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  FDeprecateSlateVector2D FVar6;
  undefined8 uVar7;
  bool bVar8;
  int iVar9;
  longlong lVar10;
  ForElementType<FArrangedWidget> FVar11;
  
  if (((this->VisibilityFilter).Value.Value & (byte)param_1.Value.Value) != 0) {
    FVar11 = (this->Array).AllocatorInstance.SecondaryData;
    pTVar1 = &this->Array;
    if (FVar11 == (ForElementType<FArrangedWidget>)0x0) {
      FVar11 = (ForElementType<FArrangedWidget>)pTVar1;
    }
    if (((ulonglong)FVar11 <= param_2) &&
       (param_2 < (FArrangedWidget *)((longlong)FVar11 + (longlong)(this->Array).ArrayMax * 0x48)))
    {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar8) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    iVar9 = (this->Array).ArrayNum;
    piVar2 = &(this->Array).ArrayMax;
    if (iVar9 == *piVar2) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FArrangedWidget>_>
                        (0x848,&pTVar1->AllocatorInstance,piVar2);
    }
    lVar10 = (longlong)iVar9;
    (this->Array).ArrayNum = iVar9 + 1;
    FVar11 = (this->Array).AllocatorInstance.SecondaryData;
    FVar6 = *(FDeprecateSlateVector2D *)&(param_2->Geometry).Scale;
    if (FVar11 == (ForElementType<FArrangedWidget>)0x0) {
      FVar11 = (ForElementType<FArrangedWidget>)pTVar1;
    }
    pFVar3 = (FDeprecateSlateVector2D *)((longlong)FVar11 + lVar10 * 0x48);
    *pFVar3 = (param_2->Geometry).Size;
    pFVar3[1] = FVar6;
    uVar7 = *(undefined8 *)((longlong)&(param_2->Geometry).Position.field0_0x0 + 4);
    *(undefined8 *)((uchar *)((longlong)FVar11 + 0x10) + lVar10 * 0x48) =
         *(undefined8 *)((longlong)&(param_2->Geometry).AbsolutePosition.field0_0x0 + 4);
    *(undefined8 *)((uchar *)((longlong)FVar11 + 0x10) + lVar10 * 0x48 + 8) = uVar7;
    uVar7 = *(undefined8 *)((param_2->Geometry).AccumulatedRenderTransform.M.M[1] + 1);
    *(undefined8 *)((uchar *)((longlong)FVar11 + 0x20) + lVar10 * 0x48) =
         *(undefined8 *)((param_2->Geometry).AccumulatedRenderTransform.M.M[0] + 1);
    *(undefined8 *)((uchar *)((longlong)FVar11 + 0x20) + lVar10 * 0x48 + 8) = uVar7;
    *(undefined8 *)((uchar *)((longlong)FVar11 + 0x30) + lVar10 * 0x48) =
         *(undefined8 *)
          ((longlong)&(param_2->Geometry).AccumulatedRenderTransform.Trans.field0_0x0 + 4);
    *(SWidget **)((uchar *)((longlong)FVar11 + 0x38) + lVar10 * 0x48) = (param_2->Widget).Object;
    pTVar4 = (param_2->Widget).SharedReferenceCount.ReferenceController;
    *(TReferenceControllerBase<1> **)((uchar *)((longlong)FVar11 + 0x40) + lVar10 * 0x48) = pTVar4;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  return;
}

// Last @ 1425e9c90

FArrangedWidget * __thiscall FArrangedChildren::Last(FArrangedChildren *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FArrangedWidget *pFVar5;
  uint uVar6;
  ForElementType<FArrangedWidget> FVar7;
  
  iVar1 = (this->Array).ArrayNum;
  uVar6 = iVar1 - 1;
  uVar4 = 0;
  if ((int)uVar6 < iVar1) {
    uVar4 = ~uVar6 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FArrangedWidget *)(*pcVar2)();
      return pFVar5;
    }
  }
  FVar7 = (this->Array).AllocatorInstance.SecondaryData;
  if (FVar7 == (ForElementType<FArrangedWidget>)0x0) {
    FVar7 = (ForElementType<FArrangedWidget>)&this->Array;
  }
  return (FArrangedWidget *)((longlong)FVar7 + (longlong)((this->Array).ArrayNum + -1) * 0x48);
}

