// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 3

// AnyEqual @ 1421673d0

bool __cdecl
UESetProperty_Private::AnyEqual
          (FScriptSetHelper *param_1,int param_2,int param_3,uchar *param_4,uint param_5)

{
  FProperty *pFVar1;
  TScriptSparseSet<FDefaultSetAllocator> *pTVar2;
  ForElementType<unsigned_int> FVar3;
  code *pcVar4;
  FScriptSetHelper *pFVar5;
  int iVar6;
  bool bVar7;
  undefined1 uVar8;
  char cVar9;
  uint uVar10;
  ForElementType<unsigned_int> FVar11;
  uint uVar12;
  TScriptContainerIterator<FScriptSetHelper> local_48 [2];
  
  pFVar1 = param_1->ElementProp;
  TScriptContainerIterator<FScriptSetHelper>::TScriptContainerIterator<FScriptSetHelper>
            (local_48,param_1,param_2);
  do {
    uVar10 = local_48[0].InternalIndex;
    pFVar5 = local_48[0].Container;
    pTVar2 = (local_48[0].Container)->Set;
    if ((local_48[0].InternalIndex < 0) ||
       ((pTVar2->Elements).AllocationFlags.NumBits <= local_48[0].InternalIndex)) {
      return false;
    }
    if (((pTVar2->Elements).AllocationFlags.NumBits <= local_48[0].InternalIndex) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x8c4,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      uVar8 = (*pcVar4)();
      return (bool)uVar8;
    }
    iVar6 = local_48[0].InternalIndex;
    FVar3 = (pTVar2->Elements).AllocationFlags.AllocatorInstance.SecondaryData;
    FVar11 = (ForElementType<unsigned_int>)&(pTVar2->Elements).AllocationFlags;
    if (FVar3 != (ForElementType<unsigned_int>)0x0) {
      FVar11 = FVar3;
    }
    uVar12 = uVar10;
    if ((int)uVar10 < 0) {
      uVar12 = uVar10 + 0x1f;
    }
    if ((*(uint *)((longlong)FVar11 + (longlong)((int)uVar12 >> 5) * 4) >> (uVar10 & 0x1f) & 1) == 0
       ) {
      return false;
    }
    if (param_3 == 0) {
      return false;
    }
    pTVar2 = pFVar5->Set;
    pcVar4 = *(code **)(pFVar1->_padding_ + 0xb8);
    if (((int)uVar10 < 0) || ((pTVar2->Elements).AllocationFlags.NumBits <= (int)uVar10)) {
LAB_14216750a:
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Iterator",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x16bb,L"Invalid Iterator. Test Iterator before calling this method.");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        uVar8 = (*pcVar4)();
        return (bool)uVar8;
      }
    }
    else {
      if (((pTVar2->Elements).AllocationFlags.NumBits <= (int)uVar10) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x8c4,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        uVar8 = (*pcVar4)();
        return (bool)uVar8;
      }
      FVar3 = (pTVar2->Elements).AllocationFlags.AllocatorInstance.SecondaryData;
      FVar11 = (ForElementType<unsigned_int>)&(pTVar2->Elements).AllocationFlags;
      if (FVar3 != (ForElementType<unsigned_int>)0x0) {
        FVar11 = FVar3;
      }
      uVar12 = uVar10 & 0x1f;
      if ((int)uVar10 < 0) {
        uVar10 = uVar10 + 0x1f;
      }
      if ((*(uint *)((longlong)FVar11 + (longlong)((int)uVar10 >> 5) * 4) >> uVar12 & 1) == 0)
      goto LAB_14216750a;
    }
    cVar9 = (*pcVar4)(pFVar1,(longlong)(iVar6 * (param_1->SetLayout).SparseArrayLayout.Size) +
                             (param_1->Set->Elements).Data._padding_,param_4,param_5);
    if (cVar9 != '\0') {
      return true;
    }
    param_3 = param_3 + -1;
    TScriptContainerIterator<FScriptSetHelper>::Advance(local_48);
  } while( true );
}

// IsPermutation @ 142184610

bool __cdecl
UESetProperty_Private::IsPermutation
          (FScriptSetHelper *param_1,FScriptSetHelper *param_2,uint param_3)

{
  int iVar1;
  FProperty *pFVar2;
  TScriptSparseSet<FDefaultSetAllocator> *pTVar3;
  ForElementType<unsigned_int> FVar4;
  longlong lVar5;
  code *pcVar6;
  int iVar7;
  FScriptSetHelper *pFVar8;
  int iVar9;
  bool bVar10;
  undefined1 uVar11;
  char cVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  ForElementType<unsigned_int> FVar16;
  uchar *puVar17;
  int iVar18;
  int iVar19;
  int local_res20;
  int local_94;
  TScriptContainerIterator<FScriptSetHelper> local_88;
  TScriptContainerIterator<FScriptSetHelper> local_78;
  TScriptContainerIterator<FScriptSetHelper> local_68 [2];
  
  pFVar2 = param_1->ElementProp;
  if ((pFVar2 != param_2->ElementProp) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("ElementProp == SetHelperB.GetElementProperty()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertySet.cpp"
                          ,0x4e,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    uVar11 = (*pcVar6)();
    return (bool)uVar11;
  }
  iVar18 = (param_1->Set->Elements).Data.ArrayNum - (param_1->Set->Elements).NumFreeIndices;
  if (iVar18 == (param_2->Set->Elements).Data.ArrayNum - (param_2->Set->Elements).NumFreeIndices) {
    local_88.InternalIndex = -1;
    local_88.LogicalIndex = -1;
    local_88.Container = param_1;
    TScriptContainerIterator<FScriptSetHelper>::Advance(&local_88);
    local_78.InternalIndex = -1;
    local_78.LogicalIndex = -1;
    local_78.Container = param_2;
    TScriptContainerIterator<FScriptSetHelper>::Advance(&local_78);
    for (; iVar18 != 0; iVar18 = iVar18 + -1) {
      uVar13 = local_88.InternalIndex;
      pTVar3 = (local_88.Container)->Set;
      if (((int)uVar13 < 0) || ((pTVar3->Elements).AllocationFlags.NumBits <= (int)uVar13)) {
LAB_14218475e:
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Iterator",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                            ,0x16bb,L"Invalid Iterator. Test Iterator before calling this method.");
        if (bVar10) {
          pcVar6 = (code *)swi(3);
          uVar11 = (*pcVar6)();
          return (bool)uVar11;
        }
      }
      else {
        if (((pTVar3->Elements).AllocationFlags.NumBits <= (int)uVar13) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValidIndex(Index)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x8c4,L""), bVar10)) {
          pcVar6 = (code *)swi(3);
          uVar11 = (*pcVar6)();
          return (bool)uVar11;
        }
        FVar4 = (pTVar3->Elements).AllocationFlags.AllocatorInstance.SecondaryData;
        FVar16 = (ForElementType<unsigned_int>)&(pTVar3->Elements).AllocationFlags;
        if (FVar4 != (ForElementType<unsigned_int>)0x0) {
          FVar16 = FVar4;
        }
        uVar14 = uVar13;
        if ((int)uVar13 < 0) {
          uVar14 = uVar13 + 0x1f;
        }
        if ((*(uint *)((longlong)FVar16 + (longlong)((int)uVar14 >> 5) * 4) >> (uVar13 & 0x1f) & 1)
            == 0) goto LAB_14218475e;
      }
      iVar1 = (param_1->SetLayout).SparseArrayLayout.Size;
      uVar14 = local_78.InternalIndex;
      lVar5 = (param_1->Set->Elements).Data._padding_;
      pTVar3 = (local_78.Container)->Set;
      if (((int)uVar14 < 0) || ((pTVar3->Elements).AllocationFlags.NumBits <= (int)uVar14)) {
LAB_142184816:
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Iterator",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                            ,0x16bb,L"Invalid Iterator. Test Iterator before calling this method.");
        if (bVar10) {
          pcVar6 = (code *)swi(3);
          uVar11 = (*pcVar6)();
          return (bool)uVar11;
        }
      }
      else {
        if (((pTVar3->Elements).AllocationFlags.NumBits <= (int)uVar14) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValidIndex(Index)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x8c4,L""), bVar10)) {
          pcVar6 = (code *)swi(3);
          uVar11 = (*pcVar6)();
          return (bool)uVar11;
        }
        FVar4 = (pTVar3->Elements).AllocationFlags.AllocatorInstance.SecondaryData;
        FVar16 = (ForElementType<unsigned_int>)&(pTVar3->Elements).AllocationFlags;
        if (FVar4 != (ForElementType<unsigned_int>)0x0) {
          FVar16 = FVar4;
        }
        uVar15 = uVar14;
        if ((int)uVar14 < 0) {
          uVar15 = uVar14 + 0x1f;
        }
        if ((*(uint *)((longlong)FVar16 + (longlong)((int)uVar15 >> 5) * 4) >> (uVar14 & 0x1f) & 1)
            == 0) goto LAB_142184816;
      }
      cVar12 = (**(code **)(pFVar2->_padding_ + 0xb8))
                         (pFVar2,(int)(uVar13 * iVar1) + lVar5,
                          (longlong)(int)(uVar14 * (param_2->SetLayout).SparseArrayLayout.Size) +
                          (param_2->Set->Elements).Data._padding_,param_3);
      if (cVar12 == '\0') {
        iVar1 = local_88.LogicalIndex;
        iVar7 = local_78.LogicalIndex;
        local_94 = 0;
        local_res20 = iVar18;
        goto LAB_1421848c0;
      }
      TScriptContainerIterator<FScriptSetHelper>::Advance(&local_88);
      TScriptContainerIterator<FScriptSetHelper>::Advance(&local_78);
    }
LAB_14218488e:
    bVar10 = true;
  }
  else {
LAB_142184b1b:
    bVar10 = false;
  }
  return bVar10;
LAB_1421848c0:
  iVar19 = local_88.InternalIndex;
  pTVar3 = (local_88.Container)->Set;
  if ((local_88.InternalIndex < 0) ||
     ((pTVar3->Elements).AllocationFlags.NumBits <= local_88.InternalIndex)) {
LAB_14218492c:
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Iterator",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                        ,0x16bb,L"Invalid Iterator. Test Iterator before calling this method.");
    if (bVar10) {
      pcVar6 = (code *)swi(3);
      uVar11 = (*pcVar6)();
      return (bool)uVar11;
    }
  }
  else {
    if (((pTVar3->Elements).AllocationFlags.NumBits <= local_88.InternalIndex) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValidIndex(Index)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x8c4,L""), bVar10)) {
      pcVar6 = (code *)swi(3);
      uVar11 = (*pcVar6)();
      return (bool)uVar11;
    }
    FVar4 = (pTVar3->Elements).AllocationFlags.AllocatorInstance.SecondaryData;
    FVar16 = (ForElementType<unsigned_int>)&(pTVar3->Elements).AllocationFlags;
    if (FVar4 != (ForElementType<unsigned_int>)0x0) {
      FVar16 = FVar4;
    }
    uVar13 = iVar19;
    if (iVar19 < 0) {
      uVar13 = iVar19 + 0x1f;
    }
    if ((*(uint *)((longlong)FVar16 + (longlong)((int)uVar13 >> 5) * 4) >> (iVar19 & 0x1fU) & 1) ==
        0) goto LAB_14218492c;
  }
  pFVar2 = param_1->ElementProp;
  puVar17 = (uchar *)((longlong)(iVar19 * (param_1->SetLayout).SparseArrayLayout.Size) +
                     (param_1->Set->Elements).Data._padding_);
  TScriptContainerIterator<FScriptSetHelper>::TScriptContainerIterator<FScriptSetHelper>
            (local_68,param_1,iVar1);
  iVar19 = local_94;
  while ((uVar13 = local_68[0].InternalIndex, pFVar8 = local_68[0].Container,
         pTVar3 = (local_68[0].Container)->Set, -1 < local_68[0].InternalIndex &&
         (local_68[0].InternalIndex < (pTVar3->Elements).AllocationFlags.NumBits))) {
    if (((pTVar3->Elements).AllocationFlags.NumBits <= local_68[0].InternalIndex) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValidIndex(Index)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x8c4,L""), bVar10)) {
      pcVar6 = (code *)swi(3);
      uVar11 = (*pcVar6)();
      return (bool)uVar11;
    }
    iVar9 = local_68[0].InternalIndex;
    FVar4 = (pTVar3->Elements).AllocationFlags.AllocatorInstance.SecondaryData;
    FVar16 = (ForElementType<unsigned_int>)&(pTVar3->Elements).AllocationFlags;
    if (FVar4 != (ForElementType<unsigned_int>)0x0) {
      FVar16 = FVar4;
    }
    uVar14 = uVar13;
    if ((int)uVar13 < 0) {
      uVar14 = uVar13 + 0x1f;
    }
    if (((*(uint *)((longlong)FVar16 + (longlong)((int)uVar14 >> 5) * 4) >> (uVar13 & 0x1f) & 1) ==
         0) || (iVar19 == 0)) break;
    pTVar3 = pFVar8->Set;
    pcVar6 = *(code **)(pFVar2->_padding_ + 0xb8);
    if (((int)uVar13 < 0) || ((pTVar3->Elements).AllocationFlags.NumBits <= (int)uVar13)) {
LAB_142184a86:
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Iterator",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                          ,0x16bb,L"Invalid Iterator. Test Iterator before calling this method.");
      if (bVar10) {
        pcVar6 = (code *)swi(3);
        uVar11 = (*pcVar6)();
        return (bool)uVar11;
      }
    }
    else {
      if (((pTVar3->Elements).AllocationFlags.NumBits <= (int)uVar13) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValidIndex(Index)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x8c4,L""), bVar10)) {
        pcVar6 = (code *)swi(3);
        uVar11 = (*pcVar6)();
        return (bool)uVar11;
      }
      FVar4 = (pTVar3->Elements).AllocationFlags.AllocatorInstance.SecondaryData;
      FVar16 = (ForElementType<unsigned_int>)&(pTVar3->Elements).AllocationFlags;
      if (FVar4 != (ForElementType<unsigned_int>)0x0) {
        FVar16 = FVar4;
      }
      uVar14 = uVar13 & 0x1f;
      if ((int)uVar13 < 0) {
        uVar13 = uVar13 + 0x1f;
      }
      if ((*(uint *)((longlong)FVar16 + (longlong)((int)uVar13 >> 5) * 4) >> uVar14 & 1) == 0)
      goto LAB_142184a86;
    }
    cVar12 = (*pcVar6)(pFVar2,(longlong)(iVar9 * (param_1->SetLayout).SparseArrayLayout.Size) +
                              (param_1->Set->Elements).Data._padding_,puVar17,param_3);
    if (cVar12 != '\0') goto LAB_142184b4f;
    iVar19 = iVar19 + -1;
    TScriptContainerIterator<FScriptSetHelper>::Advance(local_68);
  }
  bVar10 = RangesContainSameAmountsOfVal(param_1,iVar1,param_2,iVar7,iVar18,puVar17,param_3);
  if (!bVar10) goto LAB_142184b1b;
LAB_142184b4f:
  local_res20 = local_res20 + -1;
  local_94 = local_94 + 1;
  if (local_res20 == 0) goto LAB_14218488e;
  TScriptContainerIterator<FScriptSetHelper>::Advance(&local_88);
  goto LAB_1421848c0;
}

// RangesContainSameAmountsOfVal @ 142187da0

bool __cdecl
UESetProperty_Private::RangesContainSameAmountsOfVal
          (FScriptSetHelper *param_1,int param_2,FScriptSetHelper *param_3,int param_4,int param_5,
          uchar *param_6,uint param_7)

{
  FProperty *pFVar1;
  TScriptSparseSet<FDefaultSetAllocator> *pTVar2;
  ForElementType<unsigned_int> FVar3;
  longlong lVar4;
  longlong lVar5;
  code *pcVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  undefined1 uVar10;
  char cVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  ForElementType<unsigned_int> FVar17;
  TScriptContainerIterator<FScriptSetHelper> local_58;
  TScriptContainerIterator<FScriptSetHelper> local_48 [2];
  
  pFVar1 = param_1->ElementProp;
  if ((pFVar1 != param_3->ElementProp) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("ElementProp == SetHelperB.GetElementProperty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertySet.cpp"
                         ,0x29,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    uVar10 = (*pcVar6)();
    return (bool)uVar10;
  }
  TScriptContainerIterator<FScriptSetHelper>::TScriptContainerIterator<FScriptSetHelper>
            (&local_58,param_1,param_2);
  TScriptContainerIterator<FScriptSetHelper>::TScriptContainerIterator<FScriptSetHelper>
            (local_48,param_3,param_4);
  iVar7 = 0;
  iVar8 = 0;
  do {
    if (param_5 == 0) {
      return iVar7 == iVar8;
    }
    uVar14 = local_58.InternalIndex;
    pTVar2 = (local_58.Container)->Set;
    if (((int)uVar14 < 0) || ((pTVar2->Elements).AllocationFlags.NumBits <= (int)uVar14)) {
LAB_142187ea8:
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Iterator",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x16bb,L"Invalid Iterator. Test Iterator before calling this method.");
      if (bVar9) {
        pcVar6 = (code *)swi(3);
        uVar10 = (*pcVar6)();
        return (bool)uVar10;
      }
    }
    else {
      if (((pTVar2->Elements).AllocationFlags.NumBits <= (int)uVar14) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x8c4,L""), bVar9)) {
        pcVar6 = (code *)swi(3);
        uVar10 = (*pcVar6)();
        return (bool)uVar10;
      }
      FVar3 = (pTVar2->Elements).AllocationFlags.AllocatorInstance.SecondaryData;
      FVar17 = (ForElementType<unsigned_int>)&(pTVar2->Elements).AllocationFlags;
      if (FVar3 != (ForElementType<unsigned_int>)0x0) {
        FVar17 = FVar3;
      }
      uVar15 = uVar14;
      if ((int)uVar14 < 0) {
        uVar15 = uVar14 + 0x1f;
      }
      if ((*(uint *)((longlong)FVar17 + (longlong)((int)uVar15 >> 5) * 4) >> (uVar14 & 0x1f) & 1) ==
          0) goto LAB_142187ea8;
    }
    iVar12 = (param_1->SetLayout).SparseArrayLayout.Size;
    uVar15 = (uint)local_48[0]._8_8_;
    lVar4 = (param_1->Set->Elements).Data._padding_;
    pTVar2 = (local_48[0].Container)->Set;
    if (((int)uVar15 < 0) || ((pTVar2->Elements).AllocationFlags.NumBits <= (int)uVar15)) {
LAB_142187f5f:
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Iterator",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x16bb,L"Invalid Iterator. Test Iterator before calling this method.");
      if (bVar9) {
        pcVar6 = (code *)swi(3);
        uVar10 = (*pcVar6)();
        return (bool)uVar10;
      }
    }
    else {
      if (((pTVar2->Elements).AllocationFlags.NumBits <= (int)uVar15) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x8c4,L""), bVar9)) {
        pcVar6 = (code *)swi(3);
        uVar10 = (*pcVar6)();
        return (bool)uVar10;
      }
      FVar3 = (pTVar2->Elements).AllocationFlags.AllocatorInstance.SecondaryData;
      FVar17 = (ForElementType<unsigned_int>)&(pTVar2->Elements).AllocationFlags;
      if (FVar3 != (ForElementType<unsigned_int>)0x0) {
        FVar17 = FVar3;
      }
      uVar16 = uVar15;
      if ((int)uVar15 < 0) {
        uVar16 = uVar15 + 0x1f;
      }
      if ((*(uint *)((longlong)FVar17 + (longlong)((int)uVar16 >> 5) * 4) >> (uVar15 & 0x1f) & 1) ==
          0) goto LAB_142187f5f;
    }
    iVar13 = (param_3->SetLayout).SparseArrayLayout.Size;
    lVar5 = (param_3->Set->Elements).Data._padding_;
    cVar11 = (**(code **)(pFVar1->_padding_ + 0xb8))
                       (pFVar1,(int)(uVar14 * iVar12) + lVar4,param_6,param_7);
    iVar12 = iVar7 + 1;
    if (cVar11 == '\0') {
      iVar12 = iVar7;
    }
    cVar11 = (**(code **)(pFVar1->_padding_ + 0xb8))
                       (pFVar1,(int)(uVar15 * iVar13) + lVar5,param_6,param_7);
    iVar13 = iVar8 + 1;
    if (cVar11 == '\0') {
      iVar13 = iVar8;
    }
    TScriptContainerIterator<FScriptSetHelper>::Advance(&local_58);
    TScriptContainerIterator<FScriptSetHelper>::Advance(local_48);
    param_5 = param_5 + -1;
    iVar7 = iVar12;
    iVar8 = iVar13;
  } while( true );
}

