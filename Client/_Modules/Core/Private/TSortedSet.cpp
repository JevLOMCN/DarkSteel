// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 37

// AppendImpl<0> @ 1414e9920

void __thiscall
TSortedSet<int,TFixedAllocator<64>,TLess<int>_>::AppendImpl<0>
          (TSortedSet<int,TFixedAllocator<64>,TLess<int>_> *this,int *param_1,int param_2)

{
  int *piVar1;
  TTypeCompatibleBytes<int> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  TTypeCompatibleBytes<int> *pTVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  FIdentityFunctor local_res18;
  
  if (param_2 == 0) {
    return;
  }
  iVar8 = (this->Elements).ArrayNum;
  uVar10 = param_2 + iVar8;
  if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
  }
  piVar1 = &(this->Elements).ArrayMax;
  if (*piVar1 < (int)uVar10) {
    UE::Core::Private::ReallocTo<0,TFixedAllocator<64>::ForElementType<int>_>
              (4,4,uVar10,(ForElementType<int> *)this,iVar8,piVar1);
  }
  uVar10 = (this->Elements).ArrayNum;
  if (((int)uVar10 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  do {
    uVar5 = 0;
    if (uVar10 == 0) {
LAB_1414e9b74:
      if ((int)uVar10 <= (int)uVar5) goto LAB_1414e9a1b;
      uVar6 = 0;
      if ((int)uVar5 < (this->Elements).ArrayNum) {
        uVar6 = ~uVar5 >> 0x1f;
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
      if (*(int *)((TTypeCompatibleBytes<int> *)param_1)->Pad <
          *(int *)(this->Elements).AllocatorInstance.InlineData[(int)uVar5].Pad) goto LAB_1414e9a1b;
      *(int *)(this->Elements).AllocatorInstance.InlineData[(int)uVar5].Pad =
           *(int *)((TTypeCompatibleBytes<int> *)param_1)->Pad;
    }
    else {
      uVar6 = uVar10 - 1;
      uVar5 = 0;
      if ((int)uVar6 < (int)uVar10) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar8 = *(int *)(((TArray<int,TFixedAllocator<64>_> *)
                       ((TTypeCompatibleBytes<int> *)param_1)->Pad)->AllocatorInstance).InlineData
                      [0].Pad;
      uVar5 = uVar10;
      if (iVar8 <= *(int *)(this->Elements).AllocatorInstance.InlineData[(int)uVar6].Pad) {
        uVar5 = 0;
        uVar6 = uVar10;
        uVar9 = 0;
        if (0 < (int)uVar10) {
          do {
            uVar11 = uVar6 >> 1;
            uVar5 = uVar9;
            if (*(int *)(this->Elements).AllocatorInstance.InlineData[(int)(uVar11 + uVar9)].Pad <
                iVar8) {
              uVar5 = uVar11 + uVar9 + (uVar6 & 1);
            }
            uVar6 = uVar11;
            uVar9 = uVar5;
          } while (uVar11 != 0);
        }
        goto LAB_1414e9b74;
      }
LAB_1414e9a1b:
      iVar8 = (this->Elements).ArrayNum - uVar10;
      if (0 < iVar8) {
        pTVar7 = (this->Elements).AllocatorInstance.InlineData + (int)uVar10;
        pTVar2 = pTVar7 + iVar8;
        if (pTVar7 != pTVar2) {
          iVar8 = *(int *)(((TArray<int,TFixedAllocator<64>_> *)
                           ((TTypeCompatibleBytes<int> *)param_1)->Pad)->AllocatorInstance).
                          InlineData[0].Pad;
          do {
            if ((*(int *)pTVar7->Pad <= iVar8) && (iVar8 <= *(int *)pTVar7->Pad)) {
              if (pTVar7 != (TTypeCompatibleBytes<int> *)0x0) {
                *(int *)pTVar7->Pad = iVar8;
                goto LAB_1414e9b31;
              }
              break;
            }
            pTVar7 = pTVar7 + 1;
          } while (pTVar7 != pTVar2);
        }
      }
      if (((this <= param_1) && (param_1 < (this->Elements).AllocatorInstance.InlineData + *piVar1))
         && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar8 = (this->Elements).ArrayNum;
      if (iVar8 == *piVar1) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<64>::ForElementType<int>_>
                          (0x404,(ForElementType<int> *)this,piVar1);
      }
      (this->Elements).ArrayNum = iVar8 + 1;
      *(undefined4 *)(this->Elements).AllocatorInstance.InlineData[iVar8].Pad =
           *(undefined4 *)
            (((TArray<int,TFixedAllocator<64>_> *)((TTypeCompatibleBytes<int> *)param_1)->Pad)->
            AllocatorInstance).InlineData[0].Pad;
      if (((uVar5 == uVar10) && (uVar5 = (this->Elements).ArrayNum, uVar5 == uVar10 + 1)) &&
         ((uVar10 = uVar5, (int)uVar5 < 0 &&
          (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar4)))) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
LAB_1414e9b31:
    param_2 = param_2 + -1;
    if (param_2 == 0) {
      uVar5 = (this->Elements).ArrayNum;
      if (uVar10 == uVar5) {
        return;
      }
      AlgoImpl::IntroSortInternal<int,int,FIdentityFunctor,TLess<int>_>
                ((int *)this,uVar5,local_res18,(TLess<int>)local_res18);
      return;
    }
    param_1 = param_1 + 1;
  } while( true );
}

// AppendImpl<0> @ 1414e9c50

void __thiscall
TSortedSet<int,TSizedDefaultAllocator<32>,TLess<int>_>::AppendImpl<0>
          (TSortedSet<int,TSizedDefaultAllocator<32>,TLess<int>_> *this,int *param_1,int param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  FIdentityFunctor local_res18;
  
  if (param_2 == 0) {
    return;
  }
  iVar8 = (this->Elements).ArrayNum;
  uVar10 = param_2 + iVar8;
  if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
  }
  piVar1 = &(this->Elements).ArrayMax;
  if (*piVar1 < (int)uVar10) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar10,(ForAnyElementType *)this,iVar8,piVar1);
  }
  uVar10 = (this->Elements).ArrayNum;
  pFVar12 = (this->Elements).AllocatorInstance.Data;
  if (((int)uVar10 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  do {
    uVar5 = 0;
    if (uVar10 == 0) {
LAB_1414e9ea4:
      if ((int)uVar10 <= (int)uVar5) goto LAB_1414e9d47;
      uVar6 = 0;
      if ((int)uVar5 < (this->Elements).ArrayNum) {
        uVar6 = ~uVar5 >> 0x1f;
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
      pFVar7 = (this->Elements).AllocatorInstance.Data;
      if (*param_1 < *(int *)(pFVar7 + (longlong)(int)uVar5 * 4)) goto LAB_1414e9d47;
      *(int *)(pFVar7 + (longlong)(int)uVar5 * 4) = *param_1;
    }
    else {
      uVar6 = uVar10 - 1;
      uVar5 = 0;
      if ((int)uVar6 < (int)uVar10) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar5 = uVar10;
      if (*param_1 <= *(int *)(pFVar12 + (longlong)(int)uVar6 * 4)) {
        uVar5 = 0;
        uVar6 = uVar10;
        uVar9 = 0;
        if (0 < (int)uVar10) {
          do {
            uVar11 = uVar6 >> 1;
            uVar5 = uVar9;
            if (*(int *)(pFVar12 + (longlong)(int)(uVar11 + uVar9) * 4) < *param_1) {
              uVar5 = uVar11 + uVar9 + (uVar6 & 1);
            }
            uVar6 = uVar11;
            uVar9 = uVar5;
          } while (uVar11 != 0);
        }
        goto LAB_1414e9ea4;
      }
LAB_1414e9d47:
      iVar8 = (this->Elements).ArrayNum - uVar10;
      if (0 < iVar8) {
        pFVar7 = (this->Elements).AllocatorInstance.Data + (longlong)(int)uVar10 * 4;
        pFVar2 = pFVar7 + (longlong)iVar8 * 4;
        if (pFVar7 != pFVar2) {
          iVar8 = *param_1;
          do {
            if ((*(int *)pFVar7 <= iVar8) && (iVar8 <= *(int *)pFVar7)) {
              if (pFVar7 != (FScriptContainerElement *)0x0) {
                *(int *)pFVar7 = iVar8;
                goto LAB_1414e9e60;
              }
              break;
            }
            pFVar7 = pFVar7 + 4;
          } while (pFVar7 != pFVar2);
        }
      }
      pFVar7 = (this->Elements).AllocatorInstance.Data;
      if (((pFVar7 <= param_1) && (param_1 < pFVar7 + (longlong)*piVar1 * 4)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar8 = (this->Elements).ArrayNum;
      if (iVar8 == *piVar1) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,(ForAnyElementType *)this,piVar1);
      }
      (this->Elements).ArrayNum = iVar8 + 1;
      *(int *)((this->Elements).AllocatorInstance.Data + (longlong)iVar8 * 4) = *param_1;
      if (((uVar5 == uVar10) && (uVar5 = (this->Elements).ArrayNum, uVar5 == uVar10 + 1)) &&
         ((pFVar12 = (this->Elements).AllocatorInstance.Data, uVar10 = uVar5, (int)uVar5 < 0 &&
          (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar4)))) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
LAB_1414e9e60:
    param_2 = param_2 + -1;
    if (param_2 == 0) {
      uVar5 = (this->Elements).ArrayNum;
      if (uVar10 == uVar5) {
        return;
      }
      AlgoImpl::IntroSortInternal<int,int,FIdentityFunctor,TLess<int>_>
                ((int *)(this->Elements).AllocatorInstance.Data,uVar5,local_res18,
                 (TLess<int>)local_res18);
      return;
    }
    param_1 = (int *)((longlong)param_1 + 4);
  } while( true );
}

// AppendImpl<0> @ 1414e9f80

void __thiscall
TSortedSet<int,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>,TLess<int>_>::AppendImpl<0>
          (TSortedSet<int,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>,TLess<int>_>
           *this,int *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  ForElementType<int> FVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int *piVar7;
  ForElementType<int> FVar8;
  ForElementType<int> FVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  FIdentityFunctor local_res18;
  
  if (param_2 == 0) {
    return;
  }
  uVar11 = (this->Elements).ArrayNum;
  uVar13 = param_2 + uVar11;
  if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
  }
  piVar1 = &(this->Elements).ArrayMax;
  if (*piVar1 < (int)uVar13) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
              (4,4,uVar13,(ForElementType<int> *)this,uVar11,piVar1);
    uVar11 = (this->Elements).ArrayNum;
  }
  FVar3 = (this->Elements).AllocatorInstance.SecondaryData;
  FVar9 = (ForElementType<int>)this;
  if (FVar3 != (ForElementType<int>)0x0) {
    FVar9 = FVar3;
  }
  if (((int)uVar11 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  do {
    uVar13 = 0;
    if (uVar11 == 0) {
LAB_1414ea244:
      if ((int)uVar11 <= (int)uVar13) goto LAB_1414ea088;
      uVar6 = 0;
      if ((int)uVar13 < (this->Elements).ArrayNum) {
        uVar6 = ~uVar13 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FVar3 = (this->Elements).AllocatorInstance.SecondaryData;
      FVar8 = (ForElementType<int>)this;
      if (FVar3 != (ForElementType<int>)0x0) {
        FVar8 = FVar3;
      }
      if (*param_1 < *(int *)((longlong)FVar8 + (longlong)(int)uVar13 * 4)) goto LAB_1414ea088;
      FVar8 = (ForElementType<int>)this;
      if (FVar3 != (ForElementType<int>)0x0) {
        FVar8 = FVar3;
      }
      *(int *)((longlong)(int)uVar13 * 4 + (longlong)FVar8) = *param_1;
    }
    else {
      uVar6 = uVar11 - 1;
      uVar13 = 0;
      if ((int)uVar6 < (int)uVar11) {
        uVar13 = ~uVar6 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar13 = uVar11;
      if (*param_1 <= *(int *)((longlong)FVar9 + (longlong)(int)uVar6 * 4)) {
        uVar12 = 0;
        uVar13 = 0;
        uVar6 = uVar11;
        if (0 < (int)uVar11) {
          do {
            uVar14 = uVar6 >> 1;
            uVar13 = uVar12;
            if (*(int *)((longlong)FVar9 + (longlong)(int)(uVar14 + uVar12) * 4) < *param_1) {
              uVar13 = uVar14 + uVar12 + (uVar6 & 1);
            }
            uVar6 = uVar14;
            uVar12 = uVar13;
          } while (uVar14 != 0);
        }
        goto LAB_1414ea244;
      }
LAB_1414ea088:
      iVar10 = (this->Elements).ArrayNum - uVar11;
      if (0 < iVar10) {
        FVar3 = (this->Elements).AllocatorInstance.SecondaryData;
        FVar8 = (ForElementType<int>)this;
        if (FVar3 != (ForElementType<int>)0x0) {
          FVar8 = FVar3;
        }
        piVar7 = (int *)((longlong)FVar8 + (longlong)(int)uVar11 * 4);
        piVar2 = piVar7 + iVar10;
        if (piVar7 != piVar2) {
          iVar10 = *param_1;
          do {
            if ((*piVar7 <= iVar10) && (iVar10 <= *piVar7)) {
              if (piVar7 != (int *)0x0) {
                *piVar7 = iVar10;
                goto LAB_1414ea1fe;
              }
              break;
            }
            piVar7 = piVar7 + 1;
          } while (piVar7 != piVar2);
        }
      }
      FVar3 = (this->Elements).AllocatorInstance.SecondaryData;
      FVar8 = (ForElementType<int>)this;
      if (FVar3 != (ForElementType<int>)0x0) {
        FVar8 = FVar3;
      }
      if ((ulonglong)FVar8 <= param_1) {
        FVar8 = (ForElementType<int>)this;
        if (FVar3 != (ForElementType<int>)0x0) {
          FVar8 = FVar3;
        }
        if ((param_1 < (ulonglong)((longlong)FVar8 + (longlong)*piVar1 * 4)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar10 = (this->Elements).ArrayNum;
      if (iVar10 == *piVar1) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                           (0x404,(ForElementType<int> *)this,piVar1);
      }
      (this->Elements).ArrayNum = iVar10 + 1;
      FVar3 = (this->Elements).AllocatorInstance.SecondaryData;
      FVar8 = (ForElementType<int>)this;
      if (FVar3 != (ForElementType<int>)0x0) {
        FVar8 = FVar3;
      }
      *(int *)((longlong)FVar8 + (longlong)iVar10 * 4) = *param_1;
      if ((uVar13 == uVar11) && (uVar13 = (this->Elements).ArrayNum, uVar13 == uVar11 + 1)) {
        FVar3 = (this->Elements).AllocatorInstance.SecondaryData;
        FVar9 = (ForElementType<int>)this;
        if (FVar3 != (ForElementType<int>)0x0) {
          FVar9 = FVar3;
        }
        uVar11 = uVar13;
        if (((int)uVar13 < 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
LAB_1414ea1fe:
    param_2 = param_2 + -1;
    if (param_2 == 0) {
      uVar13 = (this->Elements).ArrayNum;
      if (uVar11 == uVar13) {
        return;
      }
      FVar3 = (this->Elements).AllocatorInstance.SecondaryData;
      if (FVar3 != (ForElementType<int>)0x0) {
        this = (TSortedSet<int,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>,TLess<int>_>
                *)FVar3;
      }
      AlgoImpl::IntroSortInternal<int,int,FIdentityFunctor,TLess<int>_>
                ((int *)this,uVar13,local_res18,(TLess<int>)local_res18);
      return;
    }
    param_1 = (int *)((longlong)param_1 + 4);
  } while( true );
}

// AppendImpl<0> @ 1414ea350

void __thiscall
TSortedSet<TTuple<int,short>,TFixedAllocator<64>,TLess<TTuple<int,short>_>_>::AppendImpl<0>
          (TSortedSet<TTuple<int,short>,TFixedAllocator<64>,TLess<TTuple<int,short>_>_> *this,
          TTuple<int,short> *param_1,int param_2)

{
  int *piVar1;
  TTypeCompatibleBytes<TTuple<int,short>_> *pTVar2;
  int iVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  uint uVar7;
  TTypeCompatibleBytes<TTuple<int,short>_> *pTVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  FIdentityFunctor local_res18;
  
  if (param_2 == 0) {
    return;
  }
  iVar9 = (this->Elements).ArrayNum;
  uVar12 = param_2 + iVar9;
  if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
  }
  piVar1 = &(this->Elements).ArrayMax;
  if (*piVar1 < (int)uVar12) {
    UE::Core::Private::ReallocTo<0,TFixedAllocator<64>::ForElementType<TTuple<int,short>_>_>
              (8,4,uVar12,(ForElementType<TTuple<int,short>_> *)this,iVar9,piVar1);
  }
  uVar12 = (this->Elements).ArrayNum;
  if (((int)uVar12 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  do {
    uVar11 = 0;
    uVar7 = uVar11;
    if (uVar12 == 0) {
LAB_1414ea4ac:
      if ((int)uVar12 <= (int)uVar7) goto LAB_1414ea523;
      uVar11 = 0;
      if ((int)uVar7 < (this->Elements).ArrayNum) {
        uVar11 = ~uVar7 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pTVar8 = (this->Elements).AllocatorInstance.InlineData + (int)uVar7;
      iVar9 = *(int *)(this->Elements).AllocatorInstance.InlineData[(int)uVar7].Pad;
      if ((*(int *)param_1 < iVar9) ||
         ((*(int *)param_1 <= iVar9 && (*(short *)&param_1->field_0x4 < *(short *)(pTVar8->Pad + 4))
          ))) goto LAB_1414ea523;
      *(TTuple<int,short> *)pTVar8->Pad = *param_1;
    }
    else {
      uVar7 = 0;
      if ((int)(uVar12 - 1) < (int)uVar12) {
        uVar7 = ~(uVar12 - 1) >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar9 = *(int *)param_1;
      iVar3 = *(int *)(this->Elements).AllocatorInstance.InlineData[(longlong)(int)uVar12 + -1].Pad;
      uVar7 = uVar12;
      if ((iVar9 <= iVar3) &&
         ((iVar9 < iVar3 ||
          (*(short *)&param_1->field_0x4 <=
           *(short *)((this->Elements).AllocatorInstance.InlineData[(longlong)(int)uVar12 + -1].Pad
                     + 4))))) {
        uVar7 = 0;
        uVar5 = uVar12;
        if (0 < (int)uVar12) {
          do {
            uVar10 = uVar5 >> 1;
            iVar13 = uVar10 + uVar11;
            iVar3 = *(int *)(this->Elements).AllocatorInstance.InlineData[iVar13].Pad;
            if ((iVar3 < iVar9) ||
               ((iVar3 <= iVar9 &&
                (*(short *)((this->Elements).AllocatorInstance.InlineData[iVar13].Pad + 4) <
                 *(short *)&param_1->field_0x4)))) {
              bVar6 = true;
            }
            else {
              bVar6 = false;
            }
            if (bVar6) {
              uVar11 = iVar13 + (uVar5 & 1);
            }
            uVar7 = uVar11;
            uVar5 = uVar10;
          } while (uVar10 != 0);
        }
        goto LAB_1414ea4ac;
      }
LAB_1414ea523:
      iVar9 = (this->Elements).ArrayNum - uVar12;
      if (0 < iVar9) {
        pTVar8 = (this->Elements).AllocatorInstance.InlineData + (int)uVar12;
        pTVar2 = pTVar8 + iVar9;
        if (pTVar8 != pTVar2) {
          iVar9 = *(int *)param_1;
          do {
            iVar3 = *(int *)pTVar8->Pad;
            if ((iVar3 <= iVar9) &&
               ((((iVar3 < iVar9 || (*(short *)(pTVar8->Pad + 4) <= *(short *)&param_1->field_0x4))
                 && (iVar9 <= iVar3)) &&
                (*(short *)&param_1->field_0x4 <= *(short *)(pTVar8->Pad + 4))))) {
              if (pTVar8 != (TTypeCompatibleBytes<TTuple<int,short>_> *)0x0) {
                *(TTuple<int,short> *)pTVar8->Pad = *param_1;
                goto LAB_1414ea659;
              }
              break;
            }
            pTVar8 = pTVar8 + 1;
          } while (pTVar8 != pTVar2);
        }
      }
      if (((this <= param_1) &&
          (param_1 < (TTuple<int,short> *)((this->Elements).AllocatorInstance.InlineData + *piVar1))
          ) && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar9 = (this->Elements).ArrayNum;
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<64>::ForElementType<TTuple<int,short>_>_>
                          (0x408,(ForElementType<TTuple<int,short>_> *)this,piVar1);
      }
      (this->Elements).ArrayNum = iVar9 + 1;
      *(TTuple<int,short> *)(this->Elements).AllocatorInstance.InlineData[iVar9].Pad = *param_1;
      if (((uVar7 == uVar12) && (uVar11 = (this->Elements).ArrayNum, uVar11 == uVar12 + 1)) &&
         ((uVar12 = uVar11, (int)uVar11 < 0 &&
          (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar6)))) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
LAB_1414ea659:
    param_2 = param_2 + -1;
    if (param_2 == 0) {
      uVar11 = (this->Elements).ArrayNum;
      if (uVar12 == uVar11) {
        return;
      }
      AlgoImpl::IntroSortInternal<TTuple<int,short>,int,FIdentityFunctor,TLess<TTuple<int,short>_>_>
                ((TTuple<int,short> *)this,uVar11,local_res18,(TLess<TTuple<int,short>_>)local_res18
                );
      return;
    }
    param_1 = param_1 + 1;
  } while( true );
}

// AppendImpl<0> @ 1414ea6d0

void __thiscall
TSortedSet<TTuple<int,short>,TSizedDefaultAllocator<32>,TLess<TTuple<int,short>_>_>::AppendImpl<0>
          (TSortedSet<TTuple<int,short>,TSizedDefaultAllocator<32>,TLess<TTuple<int,short>_>_> *this
          ,TTuple<int,short> *param_1,int param_2)

{
  int *piVar1;
  TTuple<int,short> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  uint uVar7;
  TTuple<int,short> *pTVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  FScriptContainerElement *pFVar14;
  FIdentityFunctor local_res18;
  
  if (param_2 == 0) {
    return;
  }
  iVar10 = (this->Elements).ArrayNum;
  uVar12 = param_2 + iVar10;
  if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
  }
  piVar1 = &(this->Elements).ArrayMax;
  if ((this->Elements).ArrayMax < (int)uVar12) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,uVar12,(ForAnyElementType *)this,iVar10,piVar1);
  }
  uVar12 = (this->Elements).ArrayNum;
  pFVar14 = (this->Elements).AllocatorInstance.Data;
  if (((int)uVar12 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  do {
    uVar11 = 0;
    uVar7 = uVar11;
    if (uVar12 == 0) {
LAB_1414ea81c:
      if ((int)uVar12 <= (int)uVar7) goto LAB_1414ea893;
      uVar11 = 0;
      if ((int)uVar7 < (this->Elements).ArrayNum) {
        uVar11 = ~uVar7 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar3 = (this->Elements).AllocatorInstance.Data;
      pTVar8 = (TTuple<int,short> *)(pFVar3 + (longlong)(int)uVar7 * 8);
      iVar10 = *(int *)(pFVar3 + (longlong)(int)uVar7 * 8);
      if ((*(int *)param_1 < iVar10) ||
         ((*(int *)param_1 <= iVar10 &&
          (*(short *)&param_1->field_0x4 < *(short *)&pTVar8->field_0x4)))) goto LAB_1414ea893;
      *pTVar8 = *param_1;
    }
    else {
      uVar7 = 0;
      if ((int)(uVar12 - 1) < (int)uVar12) {
        uVar7 = ~(uVar12 - 1) >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar10 = *(int *)param_1;
      uVar7 = uVar12;
      if ((iVar10 <= *(int *)(pFVar14 + (longlong)(int)uVar12 * 8 + -8)) &&
         ((iVar10 < *(int *)(pFVar14 + (longlong)(int)uVar12 * 8 + -8) ||
          (*(short *)&param_1->field_0x4 <= *(short *)(pFVar14 + (longlong)(int)uVar12 * 8 + -4)))))
      {
        uVar7 = 0;
        uVar5 = uVar12;
        if (0 < (int)uVar12) {
          do {
            uVar9 = uVar5 >> 1;
            iVar13 = uVar9 + uVar11;
            if ((*(int *)(pFVar14 + (longlong)iVar13 * 8) < iVar10) ||
               ((*(int *)(pFVar14 + (longlong)iVar13 * 8) <= iVar10 &&
                (*(short *)(pFVar14 + (longlong)iVar13 * 8 + 4) < *(short *)&param_1->field_0x4))))
            {
              bVar6 = true;
            }
            else {
              bVar6 = false;
            }
            if (bVar6) {
              uVar11 = iVar13 + (uVar5 & 1);
            }
            uVar7 = uVar11;
            uVar5 = uVar9;
          } while (uVar9 != 0);
        }
        goto LAB_1414ea81c;
      }
LAB_1414ea893:
      iVar10 = (this->Elements).ArrayNum - uVar12;
      if (0 < iVar10) {
        pTVar8 = (TTuple<int,short> *)
                 ((this->Elements).AllocatorInstance.Data + (longlong)(int)uVar12 * 8);
        pTVar2 = pTVar8 + iVar10;
        if (pTVar8 != pTVar2) {
          iVar10 = *(int *)param_1;
          do {
            iVar13 = *(int *)pTVar8;
            if ((iVar13 <= iVar10) &&
               ((((iVar13 < iVar10 ||
                  (*(short *)&pTVar8->field_0x4 <= *(short *)&param_1->field_0x4)) &&
                 (iVar10 <= iVar13)) &&
                (*(short *)&param_1->field_0x4 <= *(short *)&pTVar8->field_0x4)))) {
              if (pTVar8 != (TTuple<int,short> *)0x0) {
                *pTVar8 = *param_1;
                goto LAB_1414ea9c6;
              }
              break;
            }
            pTVar8 = pTVar8 + 1;
          } while (pTVar8 != pTVar2);
        }
      }
      pTVar8 = (TTuple<int,short> *)(this->Elements).AllocatorInstance.Data;
      if (((pTVar8 <= param_1) && (param_1 < pTVar8 + *piVar1)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar10 = (this->Elements).ArrayNum;
      if (iVar10 == *piVar1) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x408,(ForAnyElementType *)this,piVar1);
      }
      (this->Elements).ArrayNum = iVar10 + 1;
      *(TTuple<int,short> *)((this->Elements).AllocatorInstance.Data + (longlong)iVar10 * 8) =
           *param_1;
      if (((uVar7 == uVar12) && (uVar11 = (this->Elements).ArrayNum, uVar11 == uVar12 + 1)) &&
         ((pFVar14 = (this->Elements).AllocatorInstance.Data, uVar12 = uVar11, (int)uVar11 < 0 &&
          (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar6)))) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
LAB_1414ea9c6:
    param_2 = param_2 + -1;
    if (param_2 == 0) {
      uVar11 = (this->Elements).ArrayNum;
      if (uVar12 == uVar11) {
        return;
      }
      AlgoImpl::IntroSortInternal<TTuple<int,short>,int,FIdentityFunctor,TLess<TTuple<int,short>_>_>
                ((TTuple<int,short> *)(this->Elements).AllocatorInstance.Data,uVar11,local_res18,
                 (TLess<TTuple<int,short>_>)local_res18);
      return;
    }
    param_1 = param_1 + 1;
  } while( true );
}

// AppendImpl<0> @ 1414eaa40

void __thiscall
TSortedSet<TTuple<int,short>,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>,TLess<TTuple<int,short>_>_>
::AppendImpl<0>(TSortedSet<TTuple<int,short>,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>,TLess<TTuple<int,short>_>_>
                *this,TTuple<int,short> *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  ForElementType<TTuple<int,short>_> FVar5;
  code *pcVar6;
  uint uVar7;
  bool bVar8;
  uint uVar9;
  int *piVar10;
  ForElementType<TTuple<int,short>_> FVar11;
  ForElementType<TTuple<int,short>_> FVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  FIdentityFunctor local_res18;
  
  if (param_2 == 0) {
    return;
  }
  uVar17 = (this->Elements).ArrayNum;
  uVar15 = param_2 + uVar17;
  if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
  }
  piVar1 = &(this->Elements).ArrayMax;
  if (*piVar1 < (int)uVar15) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<int,short>_>_>
              (8,4,uVar15,(ForElementType<TTuple<int,short>_> *)this,uVar17,piVar1);
    uVar17 = (this->Elements).ArrayNum;
  }
  FVar5 = (this->Elements).AllocatorInstance.SecondaryData;
  FVar12 = (ForElementType<TTuple<int,short>_>)this;
  if (FVar5 != (ForElementType<TTuple<int,short>_>)0x0) {
    FVar12 = FVar5;
  }
  if (((int)uVar17 < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  do {
    uVar15 = 0;
    uVar9 = uVar15;
    if (uVar17 == 0) {
LAB_1414eabbc:
      if ((int)uVar17 <= (int)uVar9) goto LAB_1414eac5c;
      uVar15 = 0;
      if ((int)uVar9 < (this->Elements).ArrayNum) {
        uVar15 = ~uVar9 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      FVar5 = (this->Elements).AllocatorInstance.SecondaryData;
      FVar11 = (ForElementType<TTuple<int,short>_>)this;
      if (FVar5 != (ForElementType<TTuple<int,short>_>)0x0) {
        FVar11 = FVar5;
      }
      lVar3 = (longlong)(int)uVar9 * 8;
      iVar14 = *(int *)((longlong)FVar11 + (longlong)(int)uVar9 * 8);
      if ((*(int *)param_1 < iVar14) ||
         ((*(int *)param_1 <= iVar14 &&
          (*(short *)((longlong)param_1 + 4) < *(short *)((uchar *)((longlong)FVar11 + 4) + lVar3)))
         )) goto LAB_1414eac5c;
      FVar11 = (ForElementType<TTuple<int,short>_>)this;
      if (FVar5 != (ForElementType<TTuple<int,short>_>)0x0) {
        FVar11 = FVar5;
      }
      *(TTuple<int,short> *)(lVar3 + (longlong)FVar11) = *param_1;
    }
    else {
      uVar9 = 0;
      if ((int)(uVar17 - 1) < (int)uVar17) {
        uVar9 = ~(uVar17 - 1) >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar14 = *(int *)param_1;
      uVar9 = uVar17;
      if ((iVar14 <= ((int *)((longlong)FVar12 + -8))[(longlong)(int)uVar17 * 2]) &&
         ((iVar14 < ((int *)((longlong)FVar12 + -8))[(longlong)(int)uVar17 * 2] ||
          (*(short *)((longlong)param_1 + 4) <=
           *(short *)((longlong)FVar12 + (longlong)(int)uVar17 * 8 + -4))))) {
        uVar9 = 0;
        uVar7 = uVar17;
        if (0 < (int)uVar17) {
          do {
            uVar13 = uVar7 >> 1;
            iVar16 = uVar13 + uVar15;
            iVar4 = *(int *)((longlong)FVar12 + (longlong)iVar16 * 8);
            if ((iVar4 < iVar14) ||
               ((iVar4 <= iVar14 &&
                (*(short *)((longlong)FVar12 + (longlong)iVar16 * 8 + 4) <
                 *(short *)((longlong)param_1 + 4))))) {
              bVar8 = true;
            }
            else {
              bVar8 = false;
            }
            if (bVar8) {
              uVar15 = iVar16 + (uVar7 & 1);
            }
            uVar9 = uVar15;
            uVar7 = uVar13;
          } while (uVar13 != 0);
        }
        goto LAB_1414eabbc;
      }
LAB_1414eac5c:
      iVar14 = (this->Elements).ArrayNum - uVar17;
      if (0 < iVar14) {
        FVar5 = (this->Elements).AllocatorInstance.SecondaryData;
        FVar11 = (ForElementType<TTuple<int,short>_>)this;
        if (FVar5 != (ForElementType<TTuple<int,short>_>)0x0) {
          FVar11 = FVar5;
        }
        piVar10 = (int *)((longlong)FVar11 + (longlong)(int)uVar17 * 8);
        piVar2 = piVar10 + (longlong)iVar14 * 2;
        if (piVar10 != piVar2) {
          iVar14 = *(int *)param_1;
          do {
            iVar4 = *piVar10;
            if ((iVar4 <= iVar14) &&
               ((((iVar4 < iVar14 || ((short)piVar10[1] <= *(short *)((longlong)param_1 + 4))) &&
                 (iVar14 <= iVar4)) && (*(short *)((longlong)param_1 + 4) <= (short)piVar10[1])))) {
              if (piVar10 != (int *)0x0) {
                *(TTuple<int,short> *)piVar10 = *param_1;
                goto LAB_1414eadef;
              }
              break;
            }
            piVar10 = piVar10 + 2;
          } while (piVar10 != piVar2);
        }
      }
      FVar5 = (this->Elements).AllocatorInstance.SecondaryData;
      FVar11 = (ForElementType<TTuple<int,short>_>)this;
      if (FVar5 != (ForElementType<TTuple<int,short>_>)0x0) {
        FVar11 = FVar5;
      }
      if ((ulonglong)FVar11 <= param_1) {
        FVar11 = (ForElementType<TTuple<int,short>_>)this;
        if (FVar5 != (ForElementType<TTuple<int,short>_>)0x0) {
          FVar11 = FVar5;
        }
        if ((param_1 < (ulonglong)((longlong)FVar11 + (longlong)*piVar1 * 8)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      iVar14 = (this->Elements).ArrayNum;
      if (iVar14 == *piVar1) {
        iVar14 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<int,short>_>_>
                           (0x408,(ForElementType<TTuple<int,short>_> *)this,piVar1);
      }
      (this->Elements).ArrayNum = iVar14 + 1;
      FVar5 = (this->Elements).AllocatorInstance.SecondaryData;
      FVar11 = (ForElementType<TTuple<int,short>_>)this;
      if (FVar5 != (ForElementType<TTuple<int,short>_>)0x0) {
        FVar11 = FVar5;
      }
      *(TTuple<int,short> *)((longlong)FVar11 + (longlong)iVar14 * 8) = *param_1;
      if ((uVar9 == uVar17) && (uVar15 = (this->Elements).ArrayNum, uVar15 == uVar17 + 1)) {
        FVar5 = (this->Elements).AllocatorInstance.SecondaryData;
        FVar12 = (ForElementType<TTuple<int,short>_>)this;
        if (FVar5 != (ForElementType<TTuple<int,short>_>)0x0) {
          FVar12 = FVar5;
        }
        uVar17 = uVar15;
        if (((int)uVar15 < 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
    }
LAB_1414eadef:
    param_2 = param_2 + -1;
    if (param_2 == 0) {
      uVar15 = (this->Elements).ArrayNum;
      if (uVar17 == uVar15) {
        return;
      }
      FVar5 = (this->Elements).AllocatorInstance.SecondaryData;
      if (FVar5 != (ForElementType<TTuple<int,short>_>)0x0) {
        this = (TSortedSet<TTuple<int,short>,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>,TLess<TTuple<int,short>_>_>
                *)FVar5;
      }
      AlgoImpl::IntroSortInternal<TTuple<int,short>,int,FIdentityFunctor,TLess<TTuple<int,short>_>_>
                ((TTuple<int,short> *)this,uVar15,local_res18,(TLess<TTuple<int,short>_>)local_res18
                );
      return;
    }
    param_1 = (TTuple<int,short> *)((longlong)param_1 + 8);
  } while( true );
}

// AppendImpl<0> @ 1414eae80

void __thiscall
TSortedSet<TTuple<FString,FString>,TFixedAllocator<64>,TLess<TTuple<FString,FString>_>_>::
AppendImpl<0>(TSortedSet<TTuple<FString,FString>,TFixedAllocator<64>,TLess<TTuple<FString,FString>_>_>
              *this,TTuple<FString,FString> *param_1,int param_2)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  FIdentityFunctor FVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  wchar_t *pwVar9;
  wchar_t *pwVar10;
  TTuple<FString,FString> *pTVar11;
  TTuple<FString,FString> *this_00;
  TTypeCompatibleBytes<TTuple<FString,FString>_> *pTVar12;
  uint uVar13;
  int *piVar14;
  int local_res18;
  uint local_res20;
  TTuple<FString,FString> *local_68;
  TTuple<FString,FString> *local_58 [2];
  TTuple<FString,FString> *local_48;
  uint uStack_40;
  
  if (param_2 == 0) {
    return;
  }
  iVar6 = (this->Elements).ArrayNum;
  uVar13 = param_2 + iVar6;
  if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
  }
  piVar14 = &(this->Elements).ArrayMax;
  if (*piVar14 < (int)uVar13) {
    UE::Core::Private::ReallocTo<0,TFixedAllocator<64>::ForElementType<TTuple<FString,FString>_>_>
              (0x20,8,uVar13,(ForElementType<TTuple<FString,FString>_> *)this,iVar6,piVar14);
  }
  uVar13 = (this->Elements).ArrayNum;
  if (((int)uVar13 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_res18._0_1_ = SUB41(param_2,0);
  FVar4 = local_res18._0_1_;
  local_res18 = param_2;
  local_res20 = uVar13;
  local_68 = (TTuple<FString,FString> *)this;
  do {
    uVar7 = 0;
    if (uVar13 == 0) {
LAB_1414eb056:
      if ((int)uVar13 <= (int)uVar7) goto LAB_1414eb1c5;
      uVar8 = 0;
      if ((int)uVar7 < (this->Elements).ArrayNum) {
        uVar8 = ~uVar7 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (*(int *)((this->Elements).AllocatorInstance.InlineData[(int)uVar7].Pad + 8) == 0) {
        pwVar10 = L"";
      }
      else {
        pwVar10 = *(wchar_t **)(this->Elements).AllocatorInstance.InlineData[(int)uVar7].Pad;
      }
      if (*(int *)&param_1->field_0x8 == 0) {
        pwVar9 = L"";
      }
      else {
        pwVar9 = *(wchar_t **)param_1;
      }
      iVar6 = FGenericPlatformStricmp::Stricmp(pwVar9,pwVar10);
      if (iVar6 < 0) goto LAB_1414eb1c5;
      if (*(int *)&param_1->field_0x8 == 0) {
        pwVar10 = L"";
      }
      else {
        pwVar10 = *(wchar_t **)param_1;
      }
      if (*(int *)((this->Elements).AllocatorInstance.InlineData[(int)uVar7].Pad + 8) == 0) {
        pwVar9 = L"";
      }
      else {
        pwVar9 = *(wchar_t **)(this->Elements).AllocatorInstance.InlineData[(int)uVar7].Pad;
      }
      iVar6 = FGenericPlatformStricmp::Stricmp(pwVar9,pwVar10);
      if (-1 < iVar6) {
        if (*(int *)((this->Elements).AllocatorInstance.InlineData[(int)uVar7].Pad + 0x18) == 0) {
          pwVar10 = L"";
        }
        else {
          pwVar10 = *(wchar_t **)
                     ((this->Elements).AllocatorInstance.InlineData[(int)uVar7].Pad + 0x10);
        }
        if (*(int *)&param_1->field_0x18 == 0) {
          pwVar9 = L"";
        }
        else {
          pwVar9 = *(wchar_t **)&param_1->field_0x10;
        }
        iVar6 = FGenericPlatformStricmp::Stricmp(pwVar9,pwVar10);
        if (iVar6 < 0) goto LAB_1414eb1c5;
      }
      pvVar1 = *(void **)((this->Elements).AllocatorInstance.InlineData[(int)uVar7].Pad + 0x10);
      pTVar12 = (this->Elements).AllocatorInstance.InlineData + (int)uVar7;
      if (pvVar1 != (void *)0x0) {
        FMemory::Free(pvVar1);
      }
      pFVar2 = (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)pTVar12->Pad)->AllocatorInstance).
               Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      ::FString::FString((FString *)pTVar12,(FString *)param_1);
      ::FString::FString((FString *)
                         ((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)pTVar12->Pad + 1),
                         (FString *)&param_1->field_0x10);
    }
    else {
      uVar7 = 0;
      if ((int)(uVar13 - 1) < (int)uVar13) {
        uVar7 = ~(uVar13 - 1) >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (*(int *)&param_1->field_0x8 == 0) {
        pwVar10 = L"";
      }
      else {
        pwVar10 = *(wchar_t **)param_1;
      }
      if (*(int *)&local_68[(longlong)(int)uVar13 + -1].field_0x8 == 0) {
        pwVar9 = L"";
      }
      else {
        pwVar9 = *(wchar_t **)(local_68 + (longlong)(int)uVar13 + -1);
      }
      iVar6 = FGenericPlatformStricmp::Stricmp(pwVar9,pwVar10);
      uVar7 = uVar13;
      if (-1 < iVar6) {
        if (*(int *)&local_68[(longlong)(int)uVar13 + -1].field_0x8 == 0) {
          pwVar10 = L"";
        }
        else {
          pwVar10 = *(wchar_t **)(local_68 + (longlong)(int)uVar13 + -1);
        }
        if (*(int *)&param_1->field_0x8 == 0) {
          pwVar9 = L"";
        }
        else {
          pwVar9 = *(wchar_t **)param_1;
        }
        iVar6 = FGenericPlatformStricmp::Stricmp(pwVar9,pwVar10);
        if (-1 < iVar6) {
          if (*(int *)&param_1->field_0x18 == 0) {
            pwVar10 = L"";
          }
          else {
            pwVar10 = *(wchar_t **)&param_1->field_0x10;
          }
          if (*(int *)&local_68[(longlong)(int)uVar13 + -1].field_0x18 == 0) {
            pwVar9 = L"";
          }
          else {
            pwVar9 = *(wchar_t **)&local_68[(longlong)(int)uVar13 + -1].field_0x10;
          }
          iVar6 = FGenericPlatformStricmp::Stricmp(pwVar9,pwVar10);
          if (iVar6 < 0) goto LAB_1414eb1c5;
        }
        uVar7 = AlgoImpl::
                LowerBoundInternal<TTuple<FString,FString>,int,TTuple<FString,FString>,FIdentityFunctor,TLess<TTuple<FString,FString>_>_>
                          (local_68,uVar13,param_1,FVar4,(TLess<TTuple<FString,FString>_>)FVar4);
        goto LAB_1414eb056;
      }
LAB_1414eb1c5:
      piVar14 = &(this->Elements).ArrayMax;
      iVar6 = (this->Elements).ArrayNum - uVar13;
      if (0 < iVar6) {
        this_00 = (TTuple<FString,FString> *)
                  ((this->Elements).AllocatorInstance.InlineData + (int)uVar13);
        pTVar11 = this_00 + iVar6;
        local_58[0] = param_1;
        for (; uVar13 = local_res20, this_00 != pTVar11; this_00 = this_00 + 1) {
          bVar5 = `TSortedSet<TTuple<FString,FString>,TFixedAllocator<64>,TLess<TTuple<FString,FString>_>_>
                  ::AppendImpl<0>'::__l24::<lambda_1>::operator()(local_58,this_00);
          if (bVar5) {
            if (this_00 != (TTuple<FString,FString> *)0x0) {
              if (*(void **)&this_00->field_0x10 != (void *)0x0) {
                FMemory::Free(*(void **)&this_00->field_0x10);
              }
              if (*(void **)this_00 != (void *)0x0) {
                FMemory::Free(*(void **)this_00);
              }
              ::FString::FString((FString *)this_00,(FString *)param_1);
              ::FString::FString((FString *)&this_00->field_0x10,(FString *)&param_1->field_0x10);
              goto LAB_1414eb323;
            }
            break;
          }
        }
      }
      if (((this <= param_1) &&
          (param_1 < (TTuple<FString,FString> *)
                     ((this->Elements).AllocatorInstance.InlineData + *piVar14))) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar6 = (this->Elements).ArrayNum;
      if (iVar6 == *piVar14) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<64>::ForElementType<TTuple<FString,FString>_>_>
                          (0x820,(ForElementType<TTuple<FString,FString>_> *)this,piVar14);
      }
      (this->Elements).ArrayNum = iVar6 + 1;
      pTVar12 = (this->Elements).AllocatorInstance.InlineData + iVar6;
      ::FString::FString((FString *)pTVar12,(FString *)param_1);
      ::FString::FString((FString *)(pTVar12->Pad + 0x10),(FString *)&param_1->field_0x10);
      if ((uVar7 == uVar13) && (uVar7 = (this->Elements).ArrayNum, uVar7 == uVar13 + 1)) {
        local_48 = (TTuple<FString,FString> *)this;
        if (((int)uVar7 < 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        local_68 = local_48;
        uVar13 = uVar7;
        local_res20 = uVar7;
        uStack_40 = uVar7;
      }
    }
LAB_1414eb323:
    local_res18 = local_res18 + -1;
    if (local_res18 == 0) {
      uVar7 = (this->Elements).ArrayNum;
      if (uVar13 == uVar7) {
        return;
      }
      AlgoImpl::
      IntroSortInternal<TTuple<FString,FString>,int,FIdentityFunctor,TLess<TTuple<FString,FString>_>_>
                ((TTuple<FString,FString> *)this,uVar7,(FIdentityFunctor)0x0,
                 (TLess<TTuple<FString,FString>_>)0x0);
      return;
    }
    param_1 = param_1 + 1;
  } while( true );
}

// AppendImpl<0> @ 1414eb3f0

void __thiscall
TSortedSet<TTuple<FString,FString>,TSizedDefaultAllocator<32>,TLess<TTuple<FString,FString>_>_>::
AppendImpl<0>(TSortedSet<TTuple<FString,FString>,TSizedDefaultAllocator<32>,TLess<TTuple<FString,FString>_>_>
              *this,TTuple<FString,FString> *param_1,int param_2)

{
  code *pcVar1;
  FIdentityFunctor FVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  TTuple<FString,FString> *pTVar9;
  FScriptContainerElement *pFVar10;
  TTuple<FString,FString> *pTVar11;
  uint uVar12;
  int *piVar13;
  int local_res18;
  uint local_res20;
  TTuple<FString,FString> *local_68;
  TTuple<FString,FString> *local_58 [2];
  TTuple<FString,FString> *local_48;
  uint uStack_40;
  
  if (param_2 == 0) {
    return;
  }
  iVar4 = (this->Elements).ArrayNum;
  uVar12 = param_2 + iVar4;
  if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
  }
  if ((this->Elements).ArrayMax < (int)uVar12) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,uVar12,(ForAnyElementType *)this,iVar4,&(this->Elements).ArrayMax);
  }
  uVar12 = (this->Elements).ArrayNum;
  local_68 = (TTuple<FString,FString> *)(this->Elements).AllocatorInstance.Data;
  if (((int)uVar12 < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_res18._0_1_ = SUB41(param_2,0);
  FVar2 = local_res18._0_1_;
  local_res18 = param_2;
  local_res20 = uVar12;
  do {
    uVar5 = 0;
    if (uVar12 == 0) {
LAB_1414eb5bb:
      if ((int)uVar12 <= (int)uVar5) goto LAB_1414eb709;
      uVar6 = 0;
      if ((int)uVar5 < (this->Elements).ArrayNum) {
        uVar6 = ~uVar5 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pFVar10 = (this->Elements).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x20;
      if (*(int *)(pFVar10 + 8) == 0) {
        pwVar8 = L"";
      }
      else {
        pwVar8 = *(wchar_t **)pFVar10;
      }
      if (*(int *)&param_1->field_0x8 == 0) {
        pwVar7 = L"";
      }
      else {
        pwVar7 = *(wchar_t **)param_1;
      }
      iVar4 = FGenericPlatformStricmp::Stricmp(pwVar7,pwVar8);
      if (iVar4 < 0) goto LAB_1414eb709;
      if (*(int *)&param_1->field_0x8 == 0) {
        pwVar8 = L"";
      }
      else {
        pwVar8 = *(wchar_t **)param_1;
      }
      if (*(int *)(pFVar10 + 8) == 0) {
        pwVar7 = L"";
      }
      else {
        pwVar7 = *(wchar_t **)pFVar10;
      }
      iVar4 = FGenericPlatformStricmp::Stricmp(pwVar7,pwVar8);
      if (-1 < iVar4) {
        if (*(int *)(pFVar10 + 0x18) == 0) {
          pwVar8 = L"";
        }
        else {
          pwVar8 = *(wchar_t **)(pFVar10 + 0x10);
        }
        if (*(int *)&param_1->field_0x18 == 0) {
          pwVar7 = L"";
        }
        else {
          pwVar7 = *(wchar_t **)&param_1->field_0x10;
        }
        iVar4 = FGenericPlatformStricmp::Stricmp(pwVar7,pwVar8);
        if (iVar4 < 0) goto LAB_1414eb709;
      }
      pFVar10 = (this->Elements).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x20;
      if (*(void **)&pFVar10[0x10].field_0x0 != (void *)0x0) {
        FMemory::Free(*(void **)&pFVar10[0x10].field_0x0);
      }
      if (*(void **)&pFVar10->field_0x0 != (void *)0x0) {
        FMemory::Free(*(void **)&pFVar10->field_0x0);
      }
      ::FString::FString((FString *)pFVar10,(FString *)param_1);
      ::FString::FString((FString *)(pFVar10 + 0x10),(FString *)&param_1->field_0x10);
    }
    else {
      uVar5 = 0;
      if ((int)(uVar12 - 1) < (int)uVar12) {
        uVar5 = ~(uVar12 - 1) >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (*(int *)&param_1->field_0x8 == 0) {
        pwVar8 = L"";
      }
      else {
        pwVar8 = *(wchar_t **)param_1;
      }
      if (*(int *)&local_68[(longlong)(int)uVar12 + -1].field_0x8 == 0) {
        pwVar7 = L"";
      }
      else {
        pwVar7 = *(wchar_t **)(local_68 + (longlong)(int)uVar12 + -1);
      }
      iVar4 = FGenericPlatformStricmp::Stricmp(pwVar7,pwVar8);
      uVar5 = uVar12;
      if (-1 < iVar4) {
        if (*(int *)&local_68[(longlong)(int)uVar12 + -1].field_0x8 == 0) {
          pwVar8 = L"";
        }
        else {
          pwVar8 = *(wchar_t **)(local_68 + (longlong)(int)uVar12 + -1);
        }
        if (*(int *)&param_1->field_0x8 == 0) {
          pwVar7 = L"";
        }
        else {
          pwVar7 = *(wchar_t **)param_1;
        }
        iVar4 = FGenericPlatformStricmp::Stricmp(pwVar7,pwVar8);
        if (-1 < iVar4) {
          if (*(int *)&param_1->field_0x18 == 0) {
            pwVar8 = L"";
          }
          else {
            pwVar8 = *(wchar_t **)&param_1->field_0x10;
          }
          if (*(int *)&local_68[(longlong)(int)uVar12 + -1].field_0x18 == 0) {
            pwVar7 = L"";
          }
          else {
            pwVar7 = *(wchar_t **)&local_68[(longlong)(int)uVar12 + -1].field_0x10;
          }
          iVar4 = FGenericPlatformStricmp::Stricmp(pwVar7,pwVar8);
          if (iVar4 < 0) goto LAB_1414eb709;
        }
        uVar5 = AlgoImpl::
                LowerBoundInternal<TTuple<FString,FString>,int,TTuple<FString,FString>,FIdentityFunctor,TLess<TTuple<FString,FString>_>_>
                          (local_68,uVar12,param_1,FVar2,(TLess<TTuple<FString,FString>_>)FVar2);
        goto LAB_1414eb5bb;
      }
LAB_1414eb709:
      piVar13 = &(this->Elements).ArrayMax;
      iVar4 = (this->Elements).ArrayNum - uVar12;
      if (0 < iVar4) {
        pTVar11 = (TTuple<FString,FString> *)
                  ((this->Elements).AllocatorInstance.Data + (longlong)(int)uVar12 * 0x20);
        pTVar9 = pTVar11 + iVar4;
        local_58[0] = param_1;
        for (; uVar12 = local_res20, pTVar11 != pTVar9; pTVar11 = pTVar11 + 1) {
          bVar3 = `TSortedSet<TTuple<FString,FString>,TSizedDefaultAllocator<32>,TLess<TTuple<FString,FString>_>_>
                  ::AppendImpl<0>'::__l24::<lambda_1>::operator()(local_58,pTVar11);
          if (bVar3) {
            if (pTVar11 != (TTuple<FString,FString> *)0x0) {
              if (*(void **)&pTVar11->field_0x10 != (void *)0x0) {
                FMemory::Free(*(void **)&pTVar11->field_0x10);
              }
              if (*(void **)pTVar11 != (void *)0x0) {
                FMemory::Free(*(void **)pTVar11);
              }
              ::FString::FString((FString *)pTVar11,(FString *)param_1);
              ::FString::FString((FString *)&pTVar11->field_0x10,(FString *)&param_1->field_0x10);
              goto LAB_1414eb862;
            }
            break;
          }
        }
      }
      pTVar11 = (TTuple<FString,FString> *)(this->Elements).AllocatorInstance.Data;
      if (((pTVar11 <= param_1) && (param_1 < pTVar11 + *piVar13)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      iVar4 = (this->Elements).ArrayNum;
      if (iVar4 == *piVar13) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x820,(ForAnyElementType *)this,piVar13);
      }
      (this->Elements).ArrayNum = iVar4 + 1;
      pFVar10 = (this->Elements).AllocatorInstance.Data + (longlong)iVar4 * 0x20;
      ::FString::FString((FString *)pFVar10,(FString *)param_1);
      ::FString::FString((FString *)(pFVar10 + 0x10),(FString *)&param_1->field_0x10);
      if ((uVar5 == uVar12) && (uVar5 = (this->Elements).ArrayNum, uVar5 == uVar12 + 1)) {
        local_48 = (TTuple<FString,FString> *)(this->Elements).AllocatorInstance.Data;
        if (((int)uVar5 < 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        local_68 = local_48;
        uVar12 = uVar5;
        local_res20 = uVar5;
        uStack_40 = uVar5;
      }
    }
LAB_1414eb862:
    local_res18 = local_res18 + -1;
    if (local_res18 == 0) {
      uVar5 = (this->Elements).ArrayNum;
      if (uVar12 == uVar5) {
        return;
      }
      AlgoImpl::
      IntroSortInternal<TTuple<FString,FString>,int,FIdentityFunctor,TLess<TTuple<FString,FString>_>_>
                ((TTuple<FString,FString> *)(this->Elements).AllocatorInstance.Data,uVar5,
                 (FIdentityFunctor)0x0,(TLess<TTuple<FString,FString>_>)0x0);
      return;
    }
    param_1 = param_1 + 1;
  } while( true );
}

// AppendImpl<0> @ 1414eb930

void __thiscall
TSortedSet<TTuple<FString,FString>,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>,TLess<TTuple<FString,FString>_>_>
::AppendImpl<0>(TSortedSet<TTuple<FString,FString>,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>,TLess<TTuple<FString,FString>_>_>
                *this,TTuple<FString,FString> *param_1,int param_2)

{
  int *piVar1;
  ForElementType<TTuple<FString,FString>_> FVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  FIdentityFunctor FVar5;
  bool bVar6;
  int iVar7;
  ForElementType<TTuple<FString,FString>_> FVar8;
  wchar_t *pwVar9;
  wchar_t *pwVar10;
  uint uVar11;
  TTuple<FString,FString> *pTVar12;
  longlong lVar13;
  FString *pFVar14;
  TTuple<FString,FString> *this_00;
  uint uVar15;
  ForElementType<TTuple<FString,FString>_> FVar16;
  longlong lVar17;
  int local_res18;
  uint local_res20;
  uint local_78;
  ForElementType<TTuple<FString,FString>_> local_68;
  ForElementType<TTuple<FString,FString>_> local_58 [2];
  ForElementType<TTuple<FString,FString>_> local_48;
  uint uStack_40;
  
  if (param_2 == 0) {
    return;
  }
  uVar11 = (this->Elements).ArrayNum;
  uVar15 = param_2 + uVar11;
  if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
  }
  piVar1 = &(this->Elements).ArrayMax;
  if (*piVar1 < (int)uVar15) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<FString,FString>_>_>
              (0x20,8,uVar15,(ForElementType<TTuple<FString,FString>_> *)this,uVar11,piVar1);
    uVar11 = (this->Elements).ArrayNum;
  }
  FVar2 = (this->Elements).AllocatorInstance.SecondaryData;
  FVar16 = (ForElementType<TTuple<FString,FString>_>)this;
  if (FVar2 != (ForElementType<TTuple<FString,FString>_>)0x0) {
    FVar16 = FVar2;
  }
  if (((int)uVar11 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_res18._0_1_ = SUB41(param_2,0);
  FVar5 = local_res18._0_1_;
  local_res18 = param_2;
  local_res20 = uVar11;
  local_68 = FVar16;
  do {
    local_78 = 0;
    if (uVar11 == 0) {
LAB_1414ebb2d:
      if ((int)uVar11 <= (int)local_78) goto LAB_1414ebcbc;
      uVar15 = 0;
      if ((int)local_78 < (this->Elements).ArrayNum) {
        uVar15 = ~local_78 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FVar2 = (this->Elements).AllocatorInstance.SecondaryData;
      lVar13 = (longlong)(int)local_78;
      FVar8 = (ForElementType<TTuple<FString,FString>_>)this;
      if (FVar2 != (ForElementType<TTuple<FString,FString>_>)0x0) {
        FVar8 = FVar2;
      }
      lVar17 = lVar13 * 0x20;
      if (*(int *)(lVar17 + 8 + (longlong)FVar8) == 0) {
        pwVar10 = L"";
      }
      else {
        pwVar10 = *(wchar_t **)(lVar17 + (longlong)FVar8);
      }
      if (*(int *)((longlong)param_1 + 8) == 0) {
        pwVar9 = L"";
      }
      else {
        pwVar9 = *(wchar_t **)param_1;
      }
      iVar7 = FGenericPlatformStricmp::Stricmp(pwVar9,pwVar10);
      FVar16 = local_68;
      if (iVar7 < 0) goto LAB_1414ebcbc;
      if (*(int *)((longlong)param_1 + 8) == 0) {
        pwVar10 = L"";
      }
      else {
        pwVar10 = *(wchar_t **)param_1;
      }
      if (*(int *)(lVar17 + 8 + (longlong)FVar8) == 0) {
        pwVar9 = L"";
      }
      else {
        pwVar9 = *(wchar_t **)(lVar13 * 0x20 + (longlong)FVar8);
      }
      iVar7 = FGenericPlatformStricmp::Stricmp(pwVar9,pwVar10);
      if (-1 < iVar7) {
        if (*(int *)(lVar13 * 0x20 + 0x18 + (longlong)FVar8) == 0) {
          pwVar10 = L"";
        }
        else {
          pwVar10 = *(wchar_t **)(lVar13 * 0x20 + 0x10 + (longlong)FVar8);
        }
        if (*(int *)((longlong)param_1 + 0x18) == 0) {
          pwVar9 = L"";
        }
        else {
          pwVar9 = *(wchar_t **)((longlong)param_1 + 0x10);
        }
        iVar7 = FGenericPlatformStricmp::Stricmp(pwVar9,pwVar10);
        if (iVar7 < 0) goto LAB_1414ebcbc;
      }
      FVar2 = (this->Elements).AllocatorInstance.SecondaryData;
      FVar8 = (ForElementType<TTuple<FString,FString>_>)this;
      if (FVar2 != (ForElementType<TTuple<FString,FString>_>)0x0) {
        FVar8 = FVar2;
      }
      pFVar14 = (FString *)((longlong)FVar8 + lVar13 * 0x20);
      pFVar3 = pFVar14[1].Data.AllocatorInstance.Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      pFVar3 = (pFVar14->Data).AllocatorInstance.Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      ::FString::FString(pFVar14,(FString *)param_1);
      ::FString::FString(pFVar14 + 1,(FString *)((longlong)param_1 + 0x10));
    }
    else {
      uVar15 = 0;
      if ((int)(uVar11 - 1) < (int)uVar11) {
        uVar15 = ~(uVar11 - 1) >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar13 = (longlong)(int)uVar11 * 0x20 + (longlong)FVar16;
      if (*(int *)((longlong)param_1 + 8) == 0) {
        pwVar10 = L"";
      }
      else {
        pwVar10 = *(wchar_t **)param_1;
      }
      if (*(int *)(lVar13 + -0x18) == 0) {
        pwVar9 = L"";
      }
      else {
        pwVar9 = *(wchar_t **)(lVar13 + -0x20);
      }
      iVar7 = FGenericPlatformStricmp::Stricmp(pwVar9,pwVar10);
      local_78 = uVar11;
      if (-1 < iVar7) {
        if (*(int *)(lVar13 + -0x18) == 0) {
          pwVar10 = L"";
        }
        else {
          pwVar10 = *(wchar_t **)(lVar13 + -0x20);
        }
        if (*(int *)((longlong)param_1 + 8) == 0) {
          pwVar9 = L"";
        }
        else {
          pwVar9 = *(wchar_t **)param_1;
        }
        iVar7 = FGenericPlatformStricmp::Stricmp(pwVar9,pwVar10);
        if (-1 < iVar7) {
          if (*(int *)((longlong)param_1 + 0x18) == 0) {
            pwVar10 = L"";
          }
          else {
            pwVar10 = *(wchar_t **)((longlong)param_1 + 0x10);
          }
          if (*(int *)(lVar13 + -8) == 0) {
            pwVar9 = L"";
          }
          else {
            pwVar9 = *(wchar_t **)(lVar13 + -0x10);
          }
          iVar7 = FGenericPlatformStricmp::Stricmp(pwVar9,pwVar10);
          if (iVar7 < 0) goto LAB_1414ebcbc;
        }
        local_78 = AlgoImpl::
                   LowerBoundInternal<TTuple<FString,FString>,int,TTuple<FString,FString>,FIdentityFunctor,TLess<TTuple<FString,FString>_>_>
                             ((TTuple<FString,FString> *)FVar16,uVar11,param_1,FVar5,
                              (TLess<TTuple<FString,FString>_>)FVar5);
        goto LAB_1414ebb2d;
      }
LAB_1414ebcbc:
      iVar7 = (this->Elements).ArrayNum - uVar11;
      if (0 < iVar7) {
        FVar2 = (this->Elements).AllocatorInstance.SecondaryData;
        FVar8 = (ForElementType<TTuple<FString,FString>_>)this;
        if (FVar2 != (ForElementType<TTuple<FString,FString>_>)0x0) {
          FVar8 = FVar2;
        }
        this_00 = (TTuple<FString,FString> *)((longlong)(int)uVar11 * 0x20 + (longlong)FVar8);
        pTVar12 = this_00 + iVar7;
        local_58[0] = (ForElementType<TTuple<FString,FString>_>)param_1;
        for (; uVar11 = local_res20, this_00 != pTVar12; this_00 = this_00 + 1) {
          bVar6 = `TSortedSet<TTuple<FString,FString>,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>,TLess<TTuple<FString,FString>_>_>
                  ::AppendImpl<0>'::__l24::<lambda_1>::operator()(local_58,this_00);
          if (bVar6) {
            if (this_00 != (TTuple<FString,FString> *)0x0) {
              if (*(void **)&this_00->field_0x10 != (void *)0x0) {
                FMemory::Free(*(void **)&this_00->field_0x10);
              }
              if (*(void **)this_00 != (void *)0x0) {
                FMemory::Free(*(void **)this_00);
              }
              ::FString::FString((FString *)this_00,(FString *)param_1);
              ::FString::FString((FString *)&this_00->field_0x10,
                                 (FString *)((longlong)param_1 + 0x10));
              goto LAB_1414ebe93;
            }
            break;
          }
        }
      }
      FVar2 = (this->Elements).AllocatorInstance.SecondaryData;
      FVar8 = (ForElementType<TTuple<FString,FString>_>)this;
      if (FVar2 != (ForElementType<TTuple<FString,FString>_>)0x0) {
        FVar8 = FVar2;
      }
      if ((ulonglong)FVar8 <= param_1) {
        FVar8 = (ForElementType<TTuple<FString,FString>_>)this;
        if (FVar2 != (ForElementType<TTuple<FString,FString>_>)0x0) {
          FVar8 = FVar2;
        }
        if ((param_1 < (ulonglong)((longlong)(this->Elements).ArrayMax * 0x20 + (longlong)FVar8)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar7 = (this->Elements).ArrayNum;
      if (iVar7 == (this->Elements).ArrayMax) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<FString,FString>_>_>
                          (0x820,(ForElementType<TTuple<FString,FString>_> *)this,
                           &(this->Elements).ArrayMax);
      }
      (this->Elements).ArrayNum = iVar7 + 1;
      FVar2 = (this->Elements).AllocatorInstance.SecondaryData;
      FVar8 = (ForElementType<TTuple<FString,FString>_>)this;
      if (FVar2 != (ForElementType<TTuple<FString,FString>_>)0x0) {
        FVar8 = FVar2;
      }
      pFVar14 = (FString *)((longlong)iVar7 * 0x20 + (longlong)FVar8);
      ::FString::FString(pFVar14,(FString *)param_1);
      ::FString::FString(pFVar14 + 1,(FString *)((longlong)param_1 + 0x10));
      if ((local_78 == uVar11) && (uVar15 = (this->Elements).ArrayNum, uVar15 == uVar11 + 1)) {
        FVar2 = (this->Elements).AllocatorInstance.SecondaryData;
        local_48 = (ForElementType<TTuple<FString,FString>_>)this;
        if (FVar2 != (ForElementType<TTuple<FString,FString>_>)0x0) {
          local_48 = FVar2;
        }
        if (((int)uVar15 < 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_68 = local_48;
        FVar16 = local_48;
        uVar11 = uVar15;
        local_res20 = uVar15;
        uStack_40 = uVar15;
      }
    }
LAB_1414ebe93:
    local_res18 = local_res18 + -1;
    if (local_res18 == 0) {
      uVar15 = (this->Elements).ArrayNum;
      if (uVar11 == uVar15) {
        return;
      }
      FVar2 = (this->Elements).AllocatorInstance.SecondaryData;
      if (FVar2 != (ForElementType<TTuple<FString,FString>_>)0x0) {
        this = (TSortedSet<TTuple<FString,FString>,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>,TLess<TTuple<FString,FString>_>_>
                *)FVar2;
      }
      AlgoImpl::
      IntroSortInternal<TTuple<FString,FString>,int,FIdentityFunctor,TLess<TTuple<FString,FString>_>_>
                ((TTuple<FString,FString> *)this,uVar15,(FIdentityFunctor)0x0,
                 (TLess<TTuple<FString,FString>_>)0x0);
      return;
    }
    param_1 = (TTuple<FString,FString> *)((longlong)param_1 + 0x20);
  } while( true );
}

// AppendImpl<0> @ 1414ebf70

void __thiscall
TSortedSet<FString,TFixedAllocator<64>,TLess<FString>_>::AppendImpl<0>
          (TSortedSet<FString,TFixedAllocator<64>,TLess<FString>_> *this,FString *param_1,
          int param_2)

{
  FScriptContainerElement *pFVar1;
  void *_Src;
  code *pcVar2;
  FIdentityFunctor FVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  wchar_t *pwVar8;
  wchar_t *pwVar9;
  TTypeCompatibleBytes<FString> *pTVar10;
  int *piVar11;
  TTypeCompatibleBytes<FString> *pTVar12;
  uint uVar13;
  int local_res18;
  TTypeCompatibleBytes<FString> *local_res20;
  
  if (param_2 == 0) {
    return;
  }
  iVar5 = (this->Elements).ArrayNum;
  uVar13 = param_2 + iVar5;
  if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
  }
  piVar11 = &(this->Elements).ArrayMax;
  if (*piVar11 < (int)uVar13) {
    UE::Core::Private::ReallocTo<0,TFixedAllocator<64>::ForElementType<FString>_>
              (0x10,8,uVar13,(ForElementType<FString> *)this,iVar5,piVar11);
  }
  uVar13 = (this->Elements).ArrayNum;
  if (((int)uVar13 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_res18._0_1_ = SUB41(param_2,0);
  FVar3 = local_res18._0_1_;
  local_res18 = param_2;
  do {
    uVar6 = 0;
    if (uVar13 == 0) {
LAB_1414ec253:
      if ((int)uVar13 <= (int)uVar6) goto LAB_1414ec0cb;
      uVar7 = 0;
      if ((int)uVar6 < (this->Elements).ArrayNum) {
        uVar7 = ~uVar6 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pTVar12 = (this->Elements).AllocatorInstance.InlineData + (int)uVar6;
      if (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)pTVar12->Pad)->ArrayNum == 0) {
        pwVar9 = L"";
      }
      else {
        pwVar9 = (wchar_t *)
                 (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)pTVar12->Pad)->AllocatorInstance).
                 Data;
      }
      if (*(int *)((((TArray<FString,TFixedAllocator<64>_> *)
                    ((TTypeCompatibleBytes<FString> *)param_1)->Pad)->AllocatorInstance).InlineData
                   [0].Pad + 8) == 0) {
        pwVar8 = L"";
      }
      else {
        pwVar8 = *(wchar_t **)
                  (((TArray<FString,TFixedAllocator<64>_> *)
                   ((TTypeCompatibleBytes<FString> *)param_1)->Pad)->AllocatorInstance).InlineData
                  [0].Pad;
      }
      iVar5 = FGenericPlatformStricmp::Stricmp(pwVar8,pwVar9);
      if (iVar5 < 0) goto LAB_1414ec0cb;
LAB_1414ec2eb:
      pFVar1 = (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)pTVar12->Pad)->AllocatorInstance).
               Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)pTVar12->Pad)->AllocatorInstance).Data =
           (FScriptContainerElement *)0x0;
      piVar11 = &((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)pTVar12->Pad)->ArrayMax;
      iVar5 = *(int *)((((TArray<FString,TFixedAllocator<64>_> *)
                        ((TTypeCompatibleBytes<FString> *)param_1)->Pad)->AllocatorInstance).
                       InlineData[0].Pad + 8);
      _Src = *(void **)(((TArray<FString,TFixedAllocator<64>_> *)
                        ((TTypeCompatibleBytes<FString> *)param_1)->Pad)->AllocatorInstance).
                       InlineData[0].Pad;
      ((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)pTVar12->Pad)->ArrayNum = iVar5;
      if (iVar5 == 0) {
        *piVar11 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar5,0,(ForAnyElementType *)pTVar12,iVar5,piVar11);
        memcpy((((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)pTVar12->Pad)->AllocatorInstance).
               Data,_Src,(longlong)iVar5 * 2);
      }
    }
    else {
      uVar6 = 0;
      if ((int)(uVar13 - 1) < (int)uVar13) {
        uVar6 = ~(uVar13 - 1) >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (*(int *)((((TArray<FString,TFixedAllocator<64>_> *)
                    ((TTypeCompatibleBytes<FString> *)param_1)->Pad)->AllocatorInstance).InlineData
                   [0].Pad + 8) == 0) {
        pwVar9 = L"";
      }
      else {
        pwVar9 = *(wchar_t **)
                  (((TArray<FString,TFixedAllocator<64>_> *)
                   ((TTypeCompatibleBytes<FString> *)param_1)->Pad)->AllocatorInstance).InlineData
                  [0].Pad;
      }
      if (*(int *)((this->Elements).AllocatorInstance.InlineData[(longlong)(int)uVar13 + -1].Pad + 8
                  ) == 0) {
        pwVar8 = L"";
      }
      else {
        pwVar8 = *(wchar_t **)
                  (this->Elements).AllocatorInstance.InlineData[(longlong)(int)uVar13 + -1].Pad;
      }
      iVar5 = FGenericPlatformStricmp::Stricmp(pwVar8,pwVar9);
      uVar6 = uVar13;
      if (-1 < iVar5) {
        uVar6 = AlgoImpl::LowerBoundInternal<FString,int,FString,FIdentityFunctor,TLess<FString>_>
                          ((FString *)this,uVar13,param_1,FVar3,(TLess<FString>)FVar3);
        goto LAB_1414ec253;
      }
LAB_1414ec0cb:
      iVar5 = (this->Elements).ArrayNum - uVar13;
      if (0 < iVar5) {
        pTVar12 = (this->Elements).AllocatorInstance.InlineData + (int)uVar13;
        pTVar10 = pTVar12 + iVar5;
        local_res20 = (TTypeCompatibleBytes<FString> *)param_1;
        for (; pTVar12 != pTVar10; pTVar12 = pTVar12 + 1) {
          bVar4 = `TSortedSet<FString,TFixedAllocator<64>,TLess<FString>_>::AppendImpl<0>'::__l24::
                  <lambda_1>::operator()(&local_res20,(FString *)pTVar12);
          if (bVar4) goto LAB_1414ec11f;
        }
        pTVar12 = (TTypeCompatibleBytes<FString> *)0x0;
LAB_1414ec11f:
        if (pTVar12 != (TTypeCompatibleBytes<FString> *)0x0) goto LAB_1414ec2eb;
      }
      piVar11 = &(this->Elements).ArrayMax;
      if (((this <= param_1) && (param_1 < (this->Elements).AllocatorInstance.InlineData + *piVar11)
          ) && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar5 = (this->Elements).ArrayNum;
      if (iVar5 == *piVar11) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<64>::ForElementType<FString>_>
                          (0x810,(ForElementType<FString> *)this,piVar11);
      }
      (this->Elements).ArrayNum = iVar5 + 1;
      ::FString::FString((FString *)((this->Elements).AllocatorInstance.InlineData + iVar5),param_1)
      ;
      if (((uVar6 == uVar13) && (uVar6 = (this->Elements).ArrayNum, uVar6 == uVar13 + 1)) &&
         ((uVar13 = uVar6, (int)uVar6 < 0 &&
          (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar4)))) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    local_res18 = local_res18 + -1;
    if (local_res18 == 0) {
      uVar6 = (this->Elements).ArrayNum;
      if (uVar13 == uVar6) {
        return;
      }
      AlgoImpl::IntroSortInternal<FString,int,FIdentityFunctor,TLess<FString>_>
                ((FString *)this,uVar6,(FIdentityFunctor)0x0,(TLess<FString>)0x0);
      return;
    }
    param_1 = param_1 + 1;
  } while( true );
}

// AppendImpl<0> @ 1414ec3e0

void __thiscall
TSortedSet<FString,TSizedDefaultAllocator<32>,TLess<FString>_>::AppendImpl<0>
          (TSortedSet<FString,TSizedDefaultAllocator<32>,TLess<FString>_> *this,FString *param_1,
          int param_2)

{
  void *_Src;
  code *pcVar1;
  FIdentityFunctor FVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  FScriptContainerElement *pFVar9;
  int *piVar10;
  FScriptContainerElement *pFVar11;
  longlong lVar12;
  uint uVar13;
  int local_res18;
  FScriptContainerElement *local_res20;
  FScriptContainerElement *local_58;
  
  if (param_2 == 0) {
    return;
  }
  iVar4 = (this->Elements).ArrayNum;
  uVar13 = param_2 + iVar4;
  if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
  }
  piVar10 = &(this->Elements).ArrayMax;
  if (*piVar10 < (int)uVar13) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar13,(ForAnyElementType *)this,iVar4,piVar10);
  }
  local_58 = (this->Elements).AllocatorInstance.Data;
  uVar13 = (this->Elements).ArrayNum;
  if (((int)uVar13 < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_res18._0_1_ = SUB41(param_2,0);
  FVar2 = local_res18._0_1_;
  local_res18 = param_2;
  do {
    uVar5 = 0;
    if (uVar13 == 0) {
LAB_1414ec6aa:
      if ((int)uVar13 <= (int)uVar5) goto LAB_1414ec52b;
      uVar6 = 0;
      if ((int)uVar5 < (this->Elements).ArrayNum) {
        uVar6 = ~uVar5 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pFVar11 = (this->Elements).AllocatorInstance.Data;
      lVar12 = (longlong)(int)uVar5 * 0x10;
      if (*(int *)(pFVar11 + lVar12 + 8) == 0) {
        pwVar8 = L"";
      }
      else {
        pwVar8 = *(wchar_t **)(pFVar11 + lVar12);
      }
      if (*(int *)((longlong)param_1 + 8) == 0) {
        pwVar7 = L"";
      }
      else {
        pwVar7 = *(wchar_t **)&((FScriptContainerElement *)param_1)->field_0x0;
      }
      iVar4 = FGenericPlatformStricmp::Stricmp(pwVar7,pwVar8);
      if (iVar4 < 0) goto LAB_1414ec52b;
      pFVar11 = (this->Elements).AllocatorInstance.Data + lVar12;
LAB_1414ec744:
      pFVar9 = (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar11->field_0x0)->
               AllocatorInstance).Data;
      if (pFVar9 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar9);
      }
      (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar11->field_0x0)->AllocatorInstance).Data
           = (FScriptContainerElement *)0x0;
      iVar4 = *(int *)((longlong)param_1 + 8);
      _Src = *(void **)&((FScriptContainerElement *)param_1)->field_0x0;
      *(int *)&pFVar11[8].field_0x0 = iVar4;
      if (iVar4 == 0) {
        *(int *)&pFVar11[0xc].field_0x0 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar4,0,(ForAnyElementType *)pFVar11,iVar4,(int *)(pFVar11 + 0xc));
        memcpy((((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar11->field_0x0)->
               AllocatorInstance).Data,_Src,(longlong)iVar4 * 2);
      }
    }
    else {
      uVar5 = 0;
      if ((int)(uVar13 - 1) < (int)uVar13) {
        uVar5 = ~(uVar13 - 1) >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (*(int *)((longlong)param_1 + 8) == 0) {
        pwVar8 = L"";
      }
      else {
        pwVar8 = *(wchar_t **)&((FScriptContainerElement *)param_1)->field_0x0;
      }
      if (*(int *)(local_58 + ((longlong)(int)uVar13 + -1) * 0x10 + 8) == 0) {
        pwVar7 = L"";
      }
      else {
        pwVar7 = *(wchar_t **)&local_58[((longlong)(int)uVar13 + -1) * 0x10].field_0x0;
      }
      iVar4 = FGenericPlatformStricmp::Stricmp(pwVar7,pwVar8);
      uVar5 = uVar13;
      if (-1 < iVar4) {
        uVar5 = AlgoImpl::LowerBoundInternal<FString,int,FString,FIdentityFunctor,TLess<FString>_>
                          ((FString *)local_58,uVar13,param_1,FVar2,(TLess<FString>)FVar2);
        goto LAB_1414ec6aa;
      }
LAB_1414ec52b:
      iVar4 = (this->Elements).ArrayNum - uVar13;
      if (0 < iVar4) {
        pFVar11 = (this->Elements).AllocatorInstance.Data + (longlong)(int)uVar13 * 0x10;
        pFVar9 = pFVar11 + (longlong)iVar4 * 0x10;
        local_res20 = (FScriptContainerElement *)param_1;
        for (; pFVar11 != pFVar9; pFVar11 = pFVar11 + 0x10) {
          bVar3 = `TSortedSet<FString,TSizedDefaultAllocator<32>,TLess<FString>_>::AppendImpl<0>'::
                  __l24::<lambda_1>::operator()(&local_res20,(FString *)pFVar11);
          if (bVar3) goto LAB_1414ec57f;
        }
        pFVar11 = (FScriptContainerElement *)0x0;
LAB_1414ec57f:
        if (pFVar11 != (FScriptContainerElement *)0x0) goto LAB_1414ec744;
      }
      piVar10 = &(this->Elements).ArrayMax;
      pFVar11 = (this->Elements).AllocatorInstance.Data;
      if (((pFVar11 <= param_1) && (param_1 < pFVar11 + (longlong)*piVar10 * 0x10)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      iVar4 = (this->Elements).ArrayNum;
      if (iVar4 == *piVar10) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,(ForAnyElementType *)this,piVar10);
      }
      (this->Elements).ArrayNum = iVar4 + 1;
      ::FString::FString((FString *)
                         ((this->Elements).AllocatorInstance.Data + (longlong)iVar4 * 0x10),param_1)
      ;
      if (((uVar5 == uVar13) && (uVar5 = (this->Elements).ArrayNum, uVar5 == uVar13 + 1)) &&
         ((local_58 = (this->Elements).AllocatorInstance.Data, uVar13 = uVar5, (int)uVar5 < 0 &&
          (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar3)))) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    local_res18 = local_res18 + -1;
    if (local_res18 == 0) {
      uVar5 = (this->Elements).ArrayNum;
      if (uVar13 == uVar5) {
        return;
      }
      AlgoImpl::IntroSortInternal<FString,int,FIdentityFunctor,TLess<FString>_>
                ((FString *)(this->Elements).AllocatorInstance.Data,uVar5,(FIdentityFunctor)0x0,
                 (TLess<FString>)0x0);
      return;
    }
    param_1 = (FString *)((longlong)param_1 + 0x10);
  } while( true );
}

// AppendImpl<0> @ 1414ec830

void __thiscall
TSortedSet<FString,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>,TLess<FString>_>::
AppendImpl<0>(TSortedSet<FString,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>,TLess<FString>_>
              *this,FString *param_1,int param_2)

{
  ForElementType<FString> FVar1;
  FScriptContainerElement *pFVar2;
  void *_Src;
  code *pcVar3;
  FIdentityFunctor FVar4;
  bool bVar5;
  int iVar6;
  ForElementType<FString> FVar7;
  uint uVar8;
  wchar_t *pwVar9;
  wchar_t *pwVar10;
  FString *pFVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  FString *pFVar15;
  int *piVar16;
  int local_res18;
  ForElementType<FString> local_res20;
  ForElementType<FString> local_58;
  
  if (param_2 == 0) {
    return;
  }
  uVar14 = (this->Elements).ArrayNum;
  uVar13 = param_2 + uVar14;
  if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
  }
  piVar16 = &(this->Elements).ArrayMax;
  if (*piVar16 < (int)uVar13) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<FString>_>
              (0x10,8,uVar13,(ForElementType<FString> *)this,uVar14,piVar16);
    uVar14 = (this->Elements).ArrayNum;
  }
  FVar1 = (this->Elements).AllocatorInstance.SecondaryData;
  local_58 = (ForElementType<FString>)this;
  if (FVar1 != (ForElementType<FString>)0x0) {
    local_58 = FVar1;
  }
  if (((int)uVar14 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_res18._0_1_ = SUB41(param_2,0);
  FVar4 = local_res18._0_1_;
  local_res18 = param_2;
  do {
    uVar13 = 0;
    if (uVar14 == 0) {
LAB_1414ecb77:
      if ((int)uVar14 <= (int)uVar13) goto LAB_1414ec99b;
      uVar8 = 0;
      if ((int)uVar13 < (this->Elements).ArrayNum) {
        uVar8 = ~uVar13 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FVar1 = (this->Elements).AllocatorInstance.SecondaryData;
      FVar7 = (ForElementType<FString>)this;
      if (FVar1 != (ForElementType<FString>)0x0) {
        FVar7 = FVar1;
      }
      lVar12 = (longlong)(int)uVar13 * 0x10;
      if (*(int *)(lVar12 + 8 + (longlong)FVar7) == 0) {
        pwVar10 = L"";
      }
      else {
        pwVar10 = *(wchar_t **)(lVar12 + (longlong)FVar7);
      }
      if (*(int *)((longlong)param_1 + 8) == 0) {
        pwVar9 = L"";
      }
      else {
        pwVar9 = *(wchar_t **)param_1;
      }
      iVar6 = FGenericPlatformStricmp::Stricmp(pwVar9,pwVar10);
      if (iVar6 < 0) goto LAB_1414ec99b;
      FVar1 = (this->Elements).AllocatorInstance.SecondaryData;
      FVar7 = (ForElementType<FString>)this;
      if (FVar1 != (ForElementType<FString>)0x0) {
        FVar7 = FVar1;
      }
      pFVar11 = (FString *)(lVar12 + (longlong)FVar7);
LAB_1414ecc32:
      pFVar2 = (pFVar11->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      piVar16 = &(pFVar11->Data).ArrayMax;
      iVar6 = *(int *)((longlong)param_1 + 8);
      _Src = *(void **)param_1;
      (pFVar11->Data).ArrayNum = iVar6;
      if (iVar6 == 0) {
        *piVar16 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar6,0,(ForAnyElementType *)pFVar11,iVar6,piVar16);
        memcpy((pFVar11->Data).AllocatorInstance.Data,_Src,(longlong)iVar6 * 2);
      }
    }
    else {
      uVar13 = 0;
      if ((int)(uVar14 - 1) < (int)uVar14) {
        uVar13 = ~(uVar14 - 1) >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (*(int *)((longlong)param_1 + 8) == 0) {
        pwVar10 = L"";
      }
      else {
        pwVar10 = *(wchar_t **)param_1;
      }
      if (((int *)((longlong)local_58 + -8))[(longlong)(int)uVar14 * 4] == 0) {
        pwVar9 = L"";
      }
      else {
        pwVar9 = *(wchar_t **)
                  ((ForElementType<FString> *)((longlong)local_58 + -0x10) +
                  (longlong)(int)uVar14 * 2);
      }
      iVar6 = FGenericPlatformStricmp::Stricmp(pwVar9,pwVar10);
      uVar13 = uVar14;
      if (-1 < iVar6) {
        uVar13 = AlgoImpl::LowerBoundInternal<FString,int,FString,FIdentityFunctor,TLess<FString>_>
                           ((FString *)local_58,uVar14,param_1,FVar4,(TLess<FString>)FVar4);
        goto LAB_1414ecb77;
      }
LAB_1414ec99b:
      iVar6 = (this->Elements).ArrayNum - uVar14;
      if (0 < iVar6) {
        FVar1 = (this->Elements).AllocatorInstance.SecondaryData;
        FVar7 = (ForElementType<FString>)this;
        if (FVar1 != (ForElementType<FString>)0x0) {
          FVar7 = FVar1;
        }
        pFVar11 = (FString *)((longlong)(int)uVar14 * 0x10 + (longlong)FVar7);
        pFVar15 = pFVar11 + iVar6;
        local_res20 = (ForElementType<FString>)param_1;
        for (; pFVar11 != pFVar15; pFVar11 = pFVar11 + 1) {
          bVar5 = `TSortedSet<FString,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>,TLess<FString>_>
                  ::AppendImpl<0>'::__l24::<lambda_1>::operator()(&local_res20,pFVar11);
          if (bVar5) goto LAB_1414ec9ff;
        }
        pFVar11 = (FString *)0x0;
LAB_1414ec9ff:
        if (pFVar11 != (FString *)0x0) goto LAB_1414ecc32;
      }
      piVar16 = &(this->Elements).ArrayMax;
      FVar1 = (this->Elements).AllocatorInstance.SecondaryData;
      FVar7 = (ForElementType<FString>)this;
      if (FVar1 != (ForElementType<FString>)0x0) {
        FVar7 = FVar1;
      }
      if ((ulonglong)FVar7 <= param_1) {
        FVar7 = (ForElementType<FString>)this;
        if (FVar1 != (ForElementType<FString>)0x0) {
          FVar7 = FVar1;
        }
        if ((param_1 < (ulonglong)((longlong)*piVar16 * 0x10 + (longlong)FVar7)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      iVar6 = (this->Elements).ArrayNum;
      if (iVar6 == *piVar16) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<FString>_>
                          (0x810,(ForElementType<FString> *)this,piVar16);
      }
      (this->Elements).ArrayNum = iVar6 + 1;
      FVar1 = (this->Elements).AllocatorInstance.SecondaryData;
      FVar7 = (ForElementType<FString>)this;
      if (FVar1 != (ForElementType<FString>)0x0) {
        FVar7 = FVar1;
      }
      ::FString::FString((FString *)((longlong)iVar6 * 0x10 + (longlong)FVar7),param_1);
      if ((uVar13 == uVar14) && (uVar13 = (this->Elements).ArrayNum, uVar13 == uVar14 + 1)) {
        FVar1 = (this->Elements).AllocatorInstance.SecondaryData;
        local_58 = (ForElementType<FString>)this;
        if (FVar1 != (ForElementType<FString>)0x0) {
          local_58 = FVar1;
        }
        uVar14 = uVar13;
        if (((int)uVar13 < 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
    }
    local_res18 = local_res18 + -1;
    if (local_res18 == 0) {
      uVar13 = (this->Elements).ArrayNum;
      if (uVar14 == uVar13) {
        return;
      }
      FVar1 = (this->Elements).AllocatorInstance.SecondaryData;
      if (FVar1 != (ForElementType<FString>)0x0) {
        this = (TSortedSet<FString,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>,TLess<FString>_>
                *)FVar1;
      }
      AlgoImpl::IntroSortInternal<FString,int,FIdentityFunctor,TLess<FString>_>
                ((FString *)this,uVar13,(FIdentityFunctor)0x0,(TLess<FString>)0x0);
      return;
    }
    param_1 = (FString *)((longlong)param_1 + 0x10);
  } while( true );
}

// Emplace<int> @ 141504250

FSetElementId __thiscall
TSortedSet<int,TFixedAllocator<64>,TLess<int>_>::Emplace<int>
          (TSortedSet<int,TFixedAllocator<64>,TLess<int>_> *this,int *param_1,bool *param_2)

{
  int *piVar1;
  uint uVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  TTypeCompatibleBytes<int> *_Src;
  undefined1 *in_R9;
  uint uVar8;
  undefined1 uVar9;
  
  uVar2 = (this->Elements).ArrayNum;
  iVar6 = 0;
  if (0 < (int)uVar2) {
    uVar8 = uVar2;
    do {
      iVar7 = (uVar8 >> 1) + iVar6;
      if (*(int *)(this->Elements).AllocatorInstance.InlineData[iVar7].Pad < *(int *)param_2) {
        iVar6 = iVar7 + (uVar8 & 1);
      }
      uVar4 = uVar8 >> 1;
      uVar8 = uVar8 >> 1;
    } while (uVar4 != 0);
  }
  if (iVar6 < (int)uVar2) {
    if ((iVar6 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      iVar6 = (*pcVar3)();
      return (FSetElementId)iVar6;
    }
    _Src = (this->Elements).AllocatorInstance.InlineData + iVar6;
    if (*(int *)(this->Elements).AllocatorInstance.InlineData[iVar6].Pad <= *(int *)param_2) {
      uVar9 = 1;
      goto LAB_141504349;
    }
  }
  iVar7 = (this->Elements).ArrayNum;
  piVar1 = &(this->Elements).ArrayMax;
  uVar9 = 0;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<64>::ForElementType<int>_>
                      (0x404,(ForElementType<int> *)this,piVar1);
  }
  _Src = (this->Elements).AllocatorInstance.InlineData + iVar6;
  (this->Elements).ArrayNum = iVar7 + 1;
  memmove(_Src + 1,_Src,(longlong)(iVar7 - iVar6) << 2);
LAB_141504349:
  if (in_R9 != (undefined1 *)0x0) {
    *in_R9 = uVar9;
  }
  *(undefined4 *)_Src->Pad = *(undefined4 *)param_2;
  *param_1 = (int)((longlong)_Src - (longlong)this >> 2);
  return (FSetElementId)(int)param_1;
}

// Emplace<int> @ 141504390

FSetElementId __thiscall
TSortedSet<int,TSizedDefaultAllocator<32>,TLess<int>_>::Emplace<int>
          (TSortedSet<int,TSizedDefaultAllocator<32>,TLess<int>_> *this,int *param_1,bool *param_2)

{
  int *piVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  undefined1 uVar10;
  undefined1 *in_R9;
  uint uVar11;
  
  uVar2 = (this->Elements).ArrayNum;
  iVar7 = 0;
  if (0 < (int)uVar2) {
    uVar11 = uVar2;
    do {
      iVar8 = (uVar11 >> 1) + iVar7;
      if (*(int *)((this->Elements).AllocatorInstance.Data + (longlong)iVar8 * 4) < *(int *)param_2)
      {
        iVar7 = iVar8 + (uVar11 & 1);
      }
      uVar5 = uVar11 >> 1;
      uVar11 = uVar11 >> 1;
    } while (uVar5 != 0);
  }
  if (iVar7 < (int)uVar2) {
    if ((iVar7 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      iVar7 = (*pcVar4)();
      return (FSetElementId)iVar7;
    }
    pFVar3 = (this->Elements).AllocatorInstance.Data;
    pFVar9 = pFVar3 + (longlong)iVar7 * 4;
    if (*(int *)(pFVar3 + (longlong)iVar7 * 4) <= *(int *)param_2) {
      uVar10 = 1;
      goto LAB_141504494;
    }
  }
  iVar8 = (this->Elements).ArrayNum;
  piVar1 = &(this->Elements).ArrayMax;
  uVar10 = 0;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,(ForAnyElementType *)this,piVar1);
  }
  (this->Elements).ArrayNum = iVar8 + 1;
  pFVar9 = (this->Elements).AllocatorInstance.Data + (longlong)iVar7 * 4;
  memmove(pFVar9 + 4,pFVar9,(longlong)(iVar8 - iVar7) << 2);
  pFVar9 = (this->Elements).AllocatorInstance.Data + (longlong)iVar7 * 4;
LAB_141504494:
  if (in_R9 != (undefined1 *)0x0) {
    *in_R9 = uVar10;
  }
  *(undefined4 *)pFVar9 = *(undefined4 *)param_2;
  *param_1 = (int)((longlong)pFVar9 - (longlong)(this->Elements).AllocatorInstance.Data >> 2);
  return (FSetElementId)(int)param_1;
}

// Emplace<int> @ 1415044e0

FSetElementId __thiscall
TSortedSet<int,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>,TLess<int>_>::Emplace<int>
          (TSortedSet<int,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>,TLess<int>_>
           *this,int *param_1,bool *param_2)

{
  int *piVar1;
  void *_Src;
  uint uVar2;
  ForElementType<int> FVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  ForElementType<int> FVar9;
  undefined4 *puVar10;
  undefined1 uVar11;
  uint uVar12;
  undefined1 *in_R9;
  
  FVar3 = (this->Elements).AllocatorInstance.SecondaryData;
  uVar2 = (this->Elements).ArrayNum;
  FVar9 = (ForElementType<int>)this;
  if (FVar3 != (ForElementType<int>)0x0) {
    FVar9 = FVar3;
  }
  iVar7 = 0;
  if (0 < (int)uVar2) {
    uVar12 = uVar2;
    do {
      iVar8 = (uVar12 >> 1) + iVar7;
      if (*(int *)((longlong)FVar9 + (longlong)iVar8 * 4) < *(int *)param_2) {
        iVar7 = iVar8 + (uVar12 & 1);
      }
      uVar5 = uVar12 >> 1;
      uVar12 = uVar12 >> 1;
    } while (uVar5 != 0);
  }
  if (iVar7 < (int)uVar2) {
    if ((iVar7 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      iVar7 = (*pcVar4)();
      return (FSetElementId)iVar7;
    }
    FVar3 = (this->Elements).AllocatorInstance.SecondaryData;
    FVar9 = (ForElementType<int>)this;
    if (FVar3 != (ForElementType<int>)0x0) {
      FVar9 = FVar3;
    }
    if (*(int *)((longlong)iVar7 * 4 + (longlong)FVar9) <= *(int *)param_2) {
      uVar11 = 1;
      FVar9 = (ForElementType<int>)this;
      if (FVar3 != (ForElementType<int>)0x0) {
        FVar9 = FVar3;
      }
      puVar10 = (undefined4 *)((longlong)iVar7 * 4 + (longlong)FVar9);
      goto LAB_141504639;
    }
  }
  iVar8 = (this->Elements).ArrayNum;
  piVar1 = &(this->Elements).ArrayMax;
  uVar11 = 0;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                      (0x404,(ForElementType<int> *)this,piVar1);
  }
  (this->Elements).ArrayNum = iVar8 + 1;
  FVar3 = (this->Elements).AllocatorInstance.SecondaryData;
  FVar9 = (ForElementType<int>)this;
  if (FVar3 != (ForElementType<int>)0x0) {
    FVar9 = FVar3;
  }
  _Src = (void *)((longlong)FVar9 + (longlong)iVar7 * 4);
  memmove((void *)((longlong)_Src + 4),_Src,(longlong)(iVar8 - iVar7) << 2);
  FVar3 = (this->Elements).AllocatorInstance.SecondaryData;
  FVar9 = (ForElementType<int>)this;
  if (FVar3 != (ForElementType<int>)0x0) {
    FVar9 = FVar3;
  }
  puVar10 = (undefined4 *)((longlong)FVar9 + (longlong)iVar7 * 4);
LAB_141504639:
  if (in_R9 != (undefined1 *)0x0) {
    *in_R9 = uVar11;
  }
  *puVar10 = *(undefined4 *)param_2;
  FVar3 = (this->Elements).AllocatorInstance.SecondaryData;
  if (FVar3 != (ForElementType<int>)0x0) {
    this = (TSortedSet<int,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>,TLess<int>_> *)
           FVar3;
  }
  *param_1 = (int)((longlong)puVar10 - (longlong)this >> 2);
  return (FSetElementId)(int)param_1;
}

// Emplace<TTuple<int,short>_> @ 141504cb0

FSetElementId __thiscall
TSortedSet<TTuple<int,short>,TFixedAllocator<64>,TLess<TTuple<int,short>_>_>::
Emplace<TTuple<int,short>_>
          (TSortedSet<TTuple<int,short>,TFixedAllocator<64>,TLess<TTuple<int,short>_>_> *this,
          TTuple<int,short> *param_1,bool *param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  undefined1 uVar9;
  TTypeCompatibleBytes<TTuple<int,short>_> *_Src;
  undefined1 *in_R9;
  uint uVar10;
  longlong lVar11;
  
  uVar2 = (this->Elements).ArrayNum;
  iVar7 = 0;
  if ((int)uVar2 < 1) {
LAB_141504d90:
    lVar11 = (longlong)iVar7;
  }
  else {
    uVar10 = uVar2;
    do {
      iVar8 = (uVar10 >> 1) + iVar7;
      iVar3 = *(int *)(this->Elements).AllocatorInstance.InlineData[iVar8].Pad;
      if ((iVar3 < *(int *)param_2) ||
         ((iVar3 <= *(int *)param_2 &&
          (*(short *)((this->Elements).AllocatorInstance.InlineData[iVar8].Pad + 4) <
           *(short *)(param_2 + 4))))) {
        bVar6 = true;
      }
      else {
        bVar6 = false;
      }
      if (bVar6) {
        iVar7 = iVar8 + (uVar10 & 1);
      }
      uVar5 = uVar10 >> 1;
      uVar10 = uVar10 >> 1;
    } while (uVar5 != 0);
    if ((int)uVar2 <= iVar7) goto LAB_141504d90;
    if (iVar7 < 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        iVar7 = (*pcVar4)();
        return (FSetElementId)iVar7;
      }
    }
    lVar11 = (longlong)iVar7;
    iVar8 = *(int *)(this->Elements).AllocatorInstance.InlineData[lVar11].Pad;
    _Src = (this->Elements).AllocatorInstance.InlineData + lVar11;
    if ((iVar8 <= *(int *)param_2) &&
       ((iVar8 < *(int *)param_2 || (*(short *)(_Src->Pad + 4) <= *(short *)(param_2 + 4))))) {
      uVar9 = 1;
      goto LAB_141504ddd;
    }
  }
  iVar8 = (this->Elements).ArrayNum;
  piVar1 = &(this->Elements).ArrayMax;
  uVar9 = 0;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<64>::ForElementType<TTuple<int,short>_>_>
                      (0x408,(ForElementType<TTuple<int,short>_> *)this,piVar1);
    (this->Elements).ArrayNum = iVar8;
  }
  _Src = (this->Elements).AllocatorInstance.InlineData + lVar11;
  (this->Elements).ArrayNum = iVar8 + 1;
  memmove(_Src + 1,_Src,(longlong)(iVar8 - iVar7) << 3);
LAB_141504ddd:
  if (in_R9 != (undefined1 *)0x0) {
    *in_R9 = uVar9;
  }
  *(undefined8 *)_Src->Pad = *(undefined8 *)param_2;
  *(int *)param_1 = (int)((longlong)_Src - (longlong)this >> 3);
  return (FSetElementId)(int)param_1;
}

// Emplace<TTuple<int,short>_> @ 141504e20

FSetElementId __thiscall
TSortedSet<TTuple<int,short>,TSizedDefaultAllocator<32>,TLess<TTuple<int,short>_>_>::
Emplace<TTuple<int,short>_>
          (TSortedSet<TTuple<int,short>,TSizedDefaultAllocator<32>,TLess<TTuple<int,short>_>_> *this
          ,TTuple<int,short> *param_1,bool *param_2)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  uint uVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  undefined1 uVar12;
  undefined1 *in_R9;
  uint uVar13;
  
  uVar3 = (this->Elements).ArrayNum;
  iVar9 = 0;
  pFVar11 = (this->Elements).AllocatorInstance.Data;
  if (0 < (int)uVar3) {
    uVar13 = uVar3;
    do {
      iVar10 = (uVar13 >> 1) + iVar9;
      iVar4 = *(int *)(pFVar11 + (longlong)iVar10 * 8);
      if ((iVar4 < *(int *)param_2) ||
         ((iVar4 <= *(int *)param_2 &&
          (*(short *)(pFVar11 + (longlong)iVar10 * 8 + 4) < *(short *)(param_2 + 4))))) {
        bVar8 = true;
      }
      else {
        bVar8 = false;
      }
      if (bVar8) {
        iVar9 = iVar10 + (uVar13 & 1);
      }
      uVar7 = uVar13 >> 1;
      uVar13 = uVar13 >> 1;
    } while (uVar7 != 0);
    if (iVar9 < (int)uVar3) {
      if (iVar9 < 0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar8) {
          pcVar6 = (code *)swi(3);
          iVar9 = (*pcVar6)();
          return (FSetElementId)iVar9;
        }
      }
      pFVar5 = (this->Elements).AllocatorInstance.Data;
      pFVar11 = pFVar5 + (longlong)iVar9 * 8;
      iVar10 = *(int *)(pFVar5 + (longlong)iVar9 * 8);
      if ((iVar10 <= *(int *)param_2) &&
         ((iVar10 < *(int *)param_2 || (*(short *)(pFVar11 + 4) <= *(short *)(param_2 + 4))))) {
        uVar12 = 1;
        goto LAB_141504f66;
      }
    }
  }
  piVar1 = &(this->Elements).ArrayNum;
  iVar10 = *piVar1;
  piVar2 = &(this->Elements).ArrayMax;
  uVar12 = 0;
  if (iVar10 == *piVar2) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x408,(ForAnyElementType *)this,piVar2);
    *piVar1 = iVar10;
  }
  pFVar11 = (this->Elements).AllocatorInstance.Data;
  *piVar1 = iVar10 + 1;
  pFVar11 = pFVar11 + (longlong)iVar9 * 8;
  memmove(pFVar11 + 8,pFVar11,(longlong)(iVar10 - iVar9) << 3);
  pFVar11 = (this->Elements).AllocatorInstance.Data + (longlong)iVar9 * 8;
LAB_141504f66:
  if (in_R9 != (undefined1 *)0x0) {
    *in_R9 = uVar12;
  }
  *(undefined8 *)pFVar11 = *(undefined8 *)param_2;
  *(int *)param_1 =
       (int)((longlong)pFVar11 - (longlong)(this->Elements).AllocatorInstance.Data >> 3);
  return (FSetElementId)(int)param_1;
}

// Emplace<TTuple<int,short>_> @ 141504fb0

FSetElementId __thiscall
TSortedSet<TTuple<int,short>,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>,TLess<TTuple<int,short>_>_>
::Emplace<TTuple<int,short>_>
          (TSortedSet<TTuple<int,short>,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>,TLess<TTuple<int,short>_>_>
           *this,TTuple<int,short> *param_1,bool *param_2)

{
  int *piVar1;
  void *_Src;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  ForElementType<TTuple<int,short>_> FVar5;
  code *pcVar6;
  uint uVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  ForElementType<TTuple<int,short>_> FVar11;
  uint uVar12;
  undefined8 *puVar13;
  undefined1 uVar14;
  undefined1 *in_R9;
  
  FVar5 = (this->Elements).AllocatorInstance.SecondaryData;
  uVar3 = (this->Elements).ArrayNum;
  FVar11 = (ForElementType<TTuple<int,short>_>)this;
  if (FVar5 != (ForElementType<TTuple<int,short>_>)0x0) {
    FVar11 = FVar5;
  }
  iVar9 = 0;
  if (0 < (int)uVar3) {
    uVar12 = uVar3;
    do {
      iVar10 = (uVar12 >> 1) + iVar9;
      iVar4 = *(int *)((longlong)FVar11 + (longlong)iVar10 * 8);
      if ((iVar4 < *(int *)param_2) ||
         ((iVar4 <= *(int *)param_2 &&
          (*(short *)((longlong)FVar11 + (longlong)iVar10 * 8 + 4) < *(short *)(param_2 + 4))))) {
        bVar8 = true;
      }
      else {
        bVar8 = false;
      }
      if (bVar8) {
        iVar9 = iVar10 + (uVar12 & 1);
      }
      uVar7 = uVar12 >> 1;
      uVar12 = uVar12 >> 1;
    } while (uVar7 != 0);
  }
  if (iVar9 < (int)uVar3) {
    if ((iVar9 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar6 = (code *)swi(3);
      iVar9 = (*pcVar6)();
      return (FSetElementId)iVar9;
    }
    FVar5 = (this->Elements).AllocatorInstance.SecondaryData;
    lVar2 = (longlong)iVar9 * 8;
    FVar11 = (ForElementType<TTuple<int,short>_>)this;
    if (FVar5 != (ForElementType<TTuple<int,short>_>)0x0) {
      FVar11 = FVar5;
    }
    if ((*(int *)((longlong)FVar11 + lVar2) <= *(int *)param_2) &&
       ((*(int *)((longlong)FVar11 + lVar2) < *(int *)param_2 ||
        (*(short *)((uchar *)((longlong)FVar11 + 4) + lVar2) <= *(short *)(param_2 + 4))))) {
      uVar14 = 1;
      FVar11 = (ForElementType<TTuple<int,short>_>)this;
      if (FVar5 != (ForElementType<TTuple<int,short>_>)0x0) {
        FVar11 = FVar5;
      }
      puVar13 = (undefined8 *)(lVar2 + (longlong)FVar11);
      goto LAB_141505133;
    }
  }
  iVar10 = (this->Elements).ArrayNum;
  piVar1 = &(this->Elements).ArrayMax;
  uVar14 = 0;
  if (iVar10 == *piVar1) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<int,short>_>_>
                       (0x408,(ForElementType<TTuple<int,short>_> *)this,piVar1);
  }
  (this->Elements).ArrayNum = iVar10 + 1;
  FVar5 = (this->Elements).AllocatorInstance.SecondaryData;
  FVar11 = (ForElementType<TTuple<int,short>_>)this;
  if (FVar5 != (ForElementType<TTuple<int,short>_>)0x0) {
    FVar11 = FVar5;
  }
  _Src = (void *)((longlong)FVar11 + (longlong)iVar9 * 8);
  memmove((void *)((longlong)_Src + 8),_Src,(longlong)(iVar10 - iVar9) << 3);
  FVar5 = (this->Elements).AllocatorInstance.SecondaryData;
  FVar11 = (ForElementType<TTuple<int,short>_>)this;
  if (FVar5 != (ForElementType<TTuple<int,short>_>)0x0) {
    FVar11 = FVar5;
  }
  puVar13 = (undefined8 *)((longlong)FVar11 + (longlong)iVar9 * 8);
LAB_141505133:
  if (in_R9 != (undefined1 *)0x0) {
    *in_R9 = uVar14;
  }
  *puVar13 = *(undefined8 *)param_2;
  FVar5 = (this->Elements).AllocatorInstance.SecondaryData;
  if (FVar5 != (ForElementType<TTuple<int,short>_>)0x0) {
    this = (TSortedSet<TTuple<int,short>,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>,TLess<TTuple<int,short>_>_>
            *)FVar5;
  }
  *(int *)param_1 = (int)((longlong)puVar13 - (longlong)this >> 3);
  return (FSetElementId)(int)param_1;
}

// Emplace<TTuple<FString,FString>_> @ 141505720

FSetElementId __thiscall
TSortedSet<TTuple<FString,FString>,TFixedAllocator<64>,TLess<TTuple<FString,FString>_>_>::
Emplace<TTuple<FString,FString>_>
          (TSortedSet<TTuple<FString,FString>,TFixedAllocator<64>,TLess<TTuple<FString,FString>_>_>
           *this,TTuple<FString,FString> *param_1,bool *param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  TTypeCompatibleBytes<TTuple<FString,FString>_> *_Src;
  undefined1 uVar8;
  wchar_t *pwVar9;
  undefined1 *in_R9;
  FIdentityFunctor local_res8;
  
  iVar4 = AlgoImpl::
          LowerBoundInternal<TTuple<FString,FString>_const_,int,TTuple<FString,FString>,FIdentityFunctor,TLess<TTuple<FString,FString>_>_>
                    ((TTuple<FString,FString> *)this,(this->Elements).ArrayNum,
                     (TTuple<FString,FString> *)param_2,local_res8,
                     (TLess<TTuple<FString,FString>_>)local_res8);
  if (iVar4 < (this->Elements).ArrayNum) {
    if ((iVar4 < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return (FSetElementId)iVar4;
    }
    pwVar9 = L"";
    _Src = (this->Elements).AllocatorInstance.InlineData + iVar4;
    if (*(int *)(_Src->Pad + 8) == 0) {
      pwVar7 = L"";
    }
    else {
      pwVar7 = *(wchar_t **)_Src->Pad;
    }
    if (*(int *)(param_2 + 8) == 0) {
      pwVar6 = L"";
    }
    else {
      pwVar6 = *(wchar_t **)param_2;
    }
    iVar5 = FGenericPlatformStricmp::Stricmp(pwVar6,pwVar7);
    if (-1 < iVar5) {
      if (*(int *)(param_2 + 8) == 0) {
        pwVar7 = L"";
      }
      else {
        pwVar7 = *(wchar_t **)param_2;
      }
      if (*(int *)(_Src->Pad + 8) == 0) {
        pwVar6 = L"";
      }
      else {
        pwVar6 = *(wchar_t **)_Src->Pad;
      }
      iVar5 = FGenericPlatformStricmp::Stricmp(pwVar6,pwVar7);
      if (-1 < iVar5) {
        if (*(int *)(_Src->Pad + 0x18) == 0) {
          pwVar7 = L"";
        }
        else {
          pwVar7 = *(wchar_t **)(_Src->Pad + 0x10);
        }
        if (*(int *)(param_2 + 0x18) != 0) {
          pwVar9 = *(wchar_t **)(param_2 + 0x10);
        }
        iVar5 = FGenericPlatformStricmp::Stricmp(pwVar9,pwVar7);
        if (iVar5 < 0) goto LAB_14150585b;
      }
      uVar8 = 1;
      if (*(void **)(_Src->Pad + 0x10) != (void *)0x0) {
        FMemory::Free(*(void **)(_Src->Pad + 0x10));
      }
      if (*(void **)_Src->Pad != (void *)0x0) {
        FMemory::Free(*(void **)_Src->Pad);
      }
      goto LAB_1415058aa;
    }
  }
LAB_14150585b:
  iVar5 = (this->Elements).ArrayNum;
  piVar1 = &(this->Elements).ArrayMax;
  uVar8 = 0;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<64>::ForElementType<TTuple<FString,FString>_>_>
                      (0x820,(ForElementType<TTuple<FString,FString>_> *)this,piVar1);
    (this->Elements).ArrayNum = iVar5;
  }
  (this->Elements).ArrayNum = iVar5 + 1;
  _Src = (this->Elements).AllocatorInstance.InlineData + iVar4;
  memmove(_Src + 1,_Src,(longlong)(iVar5 - iVar4) << 5);
LAB_1415058aa:
  if (in_R9 != (undefined1 *)0x0) {
    *in_R9 = uVar8;
  }
  _Src->Pad[0] = '\0';
  _Src->Pad[1] = '\0';
  _Src->Pad[2] = '\0';
  _Src->Pad[3] = '\0';
  _Src->Pad[4] = '\0';
  _Src->Pad[5] = '\0';
  _Src->Pad[6] = '\0';
  _Src->Pad[7] = '\0';
  *(undefined8 *)_Src->Pad = *(undefined8 *)param_2;
  param_2[0] = false;
  param_2[1] = false;
  param_2[2] = false;
  param_2[3] = false;
  param_2[4] = false;
  param_2[5] = false;
  param_2[6] = false;
  param_2[7] = false;
  *(undefined4 *)(_Src->Pad + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(_Src->Pad + 0xc) = *(undefined4 *)(param_2 + 0xc);
  param_2[8] = false;
  param_2[9] = false;
  param_2[10] = false;
  param_2[0xb] = false;
  param_2[0xc] = false;
  param_2[0xd] = false;
  param_2[0xe] = false;
  param_2[0xf] = false;
  _Src->Pad[0x10] = '\0';
  _Src->Pad[0x11] = '\0';
  _Src->Pad[0x12] = '\0';
  _Src->Pad[0x13] = '\0';
  _Src->Pad[0x14] = '\0';
  _Src->Pad[0x15] = '\0';
  _Src->Pad[0x16] = '\0';
  _Src->Pad[0x17] = '\0';
  *(undefined8 *)(_Src->Pad + 0x10) = *(undefined8 *)(param_2 + 0x10);
  param_2[0x10] = false;
  param_2[0x11] = false;
  param_2[0x12] = false;
  param_2[0x13] = false;
  param_2[0x14] = false;
  param_2[0x15] = false;
  param_2[0x16] = false;
  param_2[0x17] = false;
  *(undefined4 *)(_Src->Pad + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(_Src->Pad + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  *(int *)param_1 = (int)((longlong)_Src - (longlong)this >> 5);
  param_2[0x18] = false;
  param_2[0x19] = false;
  param_2[0x1a] = false;
  param_2[0x1b] = false;
  param_2[0x1c] = false;
  param_2[0x1d] = false;
  param_2[0x1e] = false;
  param_2[0x1f] = false;
  return (FSetElementId)(int)param_1;
}

// Emplace<TTuple<FString,FString>_> @ 141505920

FSetElementId __thiscall
TSortedSet<TTuple<FString,FString>,TSizedDefaultAllocator<32>,TLess<TTuple<FString,FString>_>_>::
Emplace<TTuple<FString,FString>_>
          (TSortedSet<TTuple<FString,FString>,TSizedDefaultAllocator<32>,TLess<TTuple<FString,FString>_>_>
           *this,TTuple<FString,FString> *param_1,bool *param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  undefined1 uVar9;
  FScriptContainerElement *pFVar10;
  undefined1 *in_R9;
  longlong lVar11;
  bool *pbVar12;
  FIdentityFunctor local_res20;
  
  local_res20 = SUB81(in_R9,0);
  iVar4 = AlgoImpl::
          LowerBoundInternal<TTuple<FString,FString>_const_,int,TTuple<FString,FString>,FIdentityFunctor,TLess<TTuple<FString,FString>_>_>
                    ((TTuple<FString,FString> *)(this->Elements).AllocatorInstance.Data,
                     (this->Elements).ArrayNum,(TTuple<FString,FString> *)param_2,local_res20,
                     (TLess<TTuple<FString,FString>_>)local_res20);
  iVar5 = (this->Elements).ArrayNum;
  if (iVar4 < iVar5) {
    if ((iVar4 < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      iVar5 = (*pcVar2)();
      return (FSetElementId)iVar5;
    }
    pwVar8 = L"";
    lVar11 = (longlong)iVar4 * 0x20;
    pFVar10 = (this->Elements).AllocatorInstance.Data + lVar11;
    if (*(int *)(pFVar10 + 8) == 0) {
      pwVar7 = L"";
    }
    else {
      pwVar7 = *(wchar_t **)pFVar10;
    }
    if (*(int *)(param_2 + 8) == 0) {
      pwVar6 = L"";
    }
    else {
      pwVar6 = *(wchar_t **)param_2;
    }
    iVar5 = FGenericPlatformStricmp::Stricmp(pwVar6,pwVar7);
    if (-1 < iVar5) {
      if (*(int *)(param_2 + 8) == 0) {
        pwVar7 = L"";
      }
      else {
        pwVar7 = *(wchar_t **)param_2;
      }
      if (*(int *)(pFVar10 + 8) == 0) {
        pwVar6 = L"";
      }
      else {
        pwVar6 = *(wchar_t **)pFVar10;
      }
      iVar5 = FGenericPlatformStricmp::Stricmp(pwVar6,pwVar7);
      if (-1 < iVar5) {
        if (*(int *)(pFVar10 + 0x18) == 0) {
          pwVar7 = L"";
        }
        else {
          pwVar7 = *(wchar_t **)(pFVar10 + 0x10);
        }
        if (*(int *)(param_2 + 0x18) != 0) {
          pwVar8 = *(wchar_t **)(param_2 + 0x10);
        }
        iVar5 = FGenericPlatformStricmp::Stricmp(pwVar8,pwVar7);
        if (iVar5 < 0) goto LAB_141505a6a;
      }
      uVar9 = 1;
      pFVar10 = (this->Elements).AllocatorInstance.Data + lVar11;
      if (*(void **)(pFVar10 + 0x10) != (void *)0x0) {
        FMemory::Free(*(void **)(pFVar10 + 0x10));
      }
      if (*(void **)pFVar10 != (void *)0x0) {
        FMemory::Free(*(void **)pFVar10);
      }
      goto LAB_141505ab9;
    }
LAB_141505a6a:
    iVar5 = (this->Elements).ArrayNum;
  }
  uVar9 = 0;
  piVar1 = &(this->Elements).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,(ForAnyElementType *)this,piVar1);
  }
  pFVar10 = (this->Elements).AllocatorInstance.Data;
  (this->Elements).ArrayNum = iVar5 + 1;
  lVar11 = (longlong)iVar4 * 0x20;
  pFVar10 = pFVar10 + lVar11;
  memmove(pFVar10 + 0x20,pFVar10,(longlong)(iVar5 - iVar4) << 5);
  pFVar10 = (this->Elements).AllocatorInstance.Data + lVar11;
LAB_141505ab9:
  pbVar12 = param_2 + 8;
  if (in_R9 != (undefined1 *)0x0) {
    *in_R9 = uVar9;
  }
  *(undefined8 *)pFVar10 = 0;
  *(undefined8 *)pFVar10 = *(undefined8 *)param_2;
  param_2[0] = false;
  param_2[1] = false;
  param_2[2] = false;
  param_2[3] = false;
  param_2[4] = false;
  param_2[5] = false;
  param_2[6] = false;
  param_2[7] = false;
  *(undefined4 *)(pFVar10 + 8) = *(undefined4 *)pbVar12;
  *(undefined4 *)(pFVar10 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  pbVar12[0] = false;
  pbVar12[1] = false;
  pbVar12[2] = false;
  pbVar12[3] = false;
  param_2[0xc] = false;
  param_2[0xd] = false;
  param_2[0xe] = false;
  param_2[0xf] = false;
  *(undefined8 *)(pFVar10 + 0x10) = 0;
  *(undefined8 *)(pFVar10 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  param_2[0x10] = false;
  param_2[0x11] = false;
  param_2[0x12] = false;
  param_2[0x13] = false;
  param_2[0x14] = false;
  param_2[0x15] = false;
  param_2[0x16] = false;
  param_2[0x17] = false;
  *(undefined4 *)(pFVar10 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(pFVar10 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  param_2[0x18] = false;
  param_2[0x19] = false;
  param_2[0x1a] = false;
  param_2[0x1b] = false;
  param_2[0x1c] = false;
  param_2[0x1d] = false;
  param_2[0x1e] = false;
  param_2[0x1f] = false;
  *(int *)param_1 =
       (int)((longlong)pFVar10 - (longlong)(this->Elements).AllocatorInstance.Data >> 5);
  return (FSetElementId)(int)param_1;
}

// Emplace<TTuple<FString,FString>_> @ 141505b40

FSetElementId __thiscall
TSortedSet<TTuple<FString,FString>,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>,TLess<TTuple<FString,FString>_>_>
::Emplace<TTuple<FString,FString>_>
          (TSortedSet<TTuple<FString,FString>,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>,TLess<TTuple<FString,FString>_>_>
           *this,TTuple<FString,FString> *param_1,bool *param_2)

{
  ForElementType<TTuple<FString,FString>_> FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  wchar_t *pwVar6;
  ForElementType<TTuple<FString,FString>_> FVar7;
  wchar_t *pwVar8;
  undefined1 uVar9;
  wchar_t *pwVar10;
  undefined1 *in_R9;
  longlong lVar11;
  undefined8 *puVar12;
  FIdentityFunctor local_res10;
  
  FVar1 = (this->Elements).AllocatorInstance.SecondaryData;
  local_res10 = SUB81(param_1,0);
  FVar7 = (ForElementType<TTuple<FString,FString>_>)this;
  if (FVar1 != (ForElementType<TTuple<FString,FString>_>)0x0) {
    FVar7 = FVar1;
  }
  iVar4 = AlgoImpl::
          LowerBoundInternal<TTuple<FString,FString>_const_,int,TTuple<FString,FString>,FIdentityFunctor,TLess<TTuple<FString,FString>_>_>
                    ((TTuple<FString,FString> *)FVar7,(this->Elements).ArrayNum,
                     (TTuple<FString,FString> *)param_2,local_res10,
                     (TLess<TTuple<FString,FString>_>)local_res10);
  if (iVar4 < (this->Elements).ArrayNum) {
    if ((iVar4 < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return (FSetElementId)iVar4;
    }
    FVar1 = (this->Elements).AllocatorInstance.SecondaryData;
    pwVar10 = L"";
    FVar7 = (ForElementType<TTuple<FString,FString>_>)this;
    if (FVar1 != (ForElementType<TTuple<FString,FString>_>)0x0) {
      FVar7 = FVar1;
    }
    lVar11 = (longlong)iVar4 * 0x20;
    puVar12 = (undefined8 *)((longlong)FVar7 + lVar11);
    if (*(int *)(puVar12 + 1) == 0) {
      pwVar8 = L"";
    }
    else {
      pwVar8 = (wchar_t *)*puVar12;
    }
    if (*(int *)(param_2 + 8) == 0) {
      pwVar6 = L"";
    }
    else {
      pwVar6 = *(wchar_t **)param_2;
    }
    iVar5 = FGenericPlatformStricmp::Stricmp(pwVar6,pwVar8);
    if (-1 < iVar5) {
      if (*(int *)(param_2 + 8) == 0) {
        pwVar8 = L"";
      }
      else {
        pwVar8 = *(wchar_t **)param_2;
      }
      if (*(int *)(puVar12 + 1) == 0) {
        pwVar6 = L"";
      }
      else {
        pwVar6 = (wchar_t *)*puVar12;
      }
      iVar5 = FGenericPlatformStricmp::Stricmp(pwVar6,pwVar8);
      if (-1 < iVar5) {
        if (*(int *)(puVar12 + 3) == 0) {
          pwVar8 = L"";
        }
        else {
          pwVar8 = (wchar_t *)puVar12[2];
        }
        if (*(int *)(param_2 + 0x18) != 0) {
          pwVar10 = *(wchar_t **)(param_2 + 0x10);
        }
        iVar5 = FGenericPlatformStricmp::Stricmp(pwVar10,pwVar8);
        if (iVar5 < 0) goto LAB_141505cb6;
      }
      FVar1 = (this->Elements).AllocatorInstance.SecondaryData;
      uVar9 = 1;
      FVar7 = (ForElementType<TTuple<FString,FString>_>)this;
      if (FVar1 != (ForElementType<TTuple<FString,FString>_>)0x0) {
        FVar7 = FVar1;
      }
      puVar12 = (undefined8 *)((longlong)FVar7 + lVar11);
      if ((void *)puVar12[2] != (void *)0x0) {
        FMemory::Free((void *)puVar12[2]);
      }
      if ((void *)*puVar12 != (void *)0x0) {
        FMemory::Free((void *)*puVar12);
      }
      goto LAB_141505cdc;
    }
  }
LAB_141505cb6:
  uVar9 = 0;
  TArray<TTuple<FString,FString>,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>::
  InsertUninitializedImpl(&this->Elements,iVar4);
  FVar1 = (this->Elements).AllocatorInstance.SecondaryData;
  FVar7 = (ForElementType<TTuple<FString,FString>_>)this;
  if (FVar1 != (ForElementType<TTuple<FString,FString>_>)0x0) {
    FVar7 = FVar1;
  }
  puVar12 = (undefined8 *)((longlong)iVar4 * 0x20 + (longlong)FVar7);
LAB_141505cdc:
  if (in_R9 != (undefined1 *)0x0) {
    *in_R9 = uVar9;
  }
  *puVar12 = 0;
  *puVar12 = *(undefined8 *)param_2;
  param_2[0] = false;
  param_2[1] = false;
  param_2[2] = false;
  param_2[3] = false;
  param_2[4] = false;
  param_2[5] = false;
  param_2[6] = false;
  param_2[7] = false;
  *(undefined4 *)(puVar12 + 1) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)((longlong)puVar12 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  param_2[8] = false;
  param_2[9] = false;
  param_2[10] = false;
  param_2[0xb] = false;
  param_2[0xc] = false;
  param_2[0xd] = false;
  param_2[0xe] = false;
  param_2[0xf] = false;
  puVar12[2] = 0;
  puVar12[2] = *(undefined8 *)(param_2 + 0x10);
  param_2[0x10] = false;
  param_2[0x11] = false;
  param_2[0x12] = false;
  param_2[0x13] = false;
  param_2[0x14] = false;
  param_2[0x15] = false;
  param_2[0x16] = false;
  param_2[0x17] = false;
  *(undefined4 *)(puVar12 + 3) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)((longlong)puVar12 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  param_2[0x18] = false;
  param_2[0x19] = false;
  param_2[0x1a] = false;
  param_2[0x1b] = false;
  param_2[0x1c] = false;
  param_2[0x1d] = false;
  param_2[0x1e] = false;
  param_2[0x1f] = false;
  FVar1 = (this->Elements).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<TTuple<FString,FString>_>)0x0) {
    this = (TSortedSet<TTuple<FString,FString>,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>,TLess<TTuple<FString,FString>_>_>
            *)FVar1;
  }
  *(int *)param_1 = (int)((longlong)puVar12 - (longlong)this >> 5);
  return (FSetElementId)(int)param_1;
}

// Emplace<TUniquePtr<FString,TDefaultDelete<FString>_>_> @ 141509480

FSetElementId __thiscall
TSortedSet<TUniquePtr<FString,TDefaultDelete<FString>_>,TSizedDefaultAllocator<32>,TLess<TUniquePtr<FString,TDefaultDelete<FString>_>_>_>
::Emplace<TUniquePtr<FString,TDefaultDelete<FString>_>_>
          (TSortedSet<TUniquePtr<FString,TDefaultDelete<FString>_>,TSizedDefaultAllocator<32>,TLess<TUniquePtr<FString,TDefaultDelete<FString>_>_>_>
           *this,TUniquePtr<FString,TDefaultDelete<FString>_> *param_1,bool *param_2)

{
  int *piVar1;
  uint uVar2;
  undefined8 *puVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  undefined1 *in_R9;
  uint uVar10;
  undefined1 uVar11;
  
  uVar2 = (this->Elements).ArrayNum;
  iVar7 = 0;
  if (0 < (int)uVar2) {
    uVar10 = uVar2;
    do {
      iVar8 = (uVar10 >> 1) + iVar7;
      if (*(ulonglong *)((this->Elements).AllocatorInstance.Data + (longlong)iVar8 * 8) <
          *(ulonglong *)param_2) {
        iVar7 = iVar8 + (uVar10 & 1);
      }
      uVar5 = uVar10 >> 1;
      uVar10 = uVar10 >> 1;
    } while (uVar5 != 0);
  }
  if (iVar7 < (int)uVar2) {
    if ((iVar7 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      iVar7 = (*pcVar4)();
      return (FSetElementId)iVar7;
    }
    pFVar9 = (this->Elements).AllocatorInstance.Data;
    puVar3 = *(undefined8 **)(pFVar9 + (longlong)iVar7 * 8);
    pFVar9 = pFVar9 + (longlong)iVar7 * 8;
    if (puVar3 <= *(undefined8 **)param_2) {
      uVar11 = 1;
      if (puVar3 != (undefined8 *)0x0) {
        if ((void *)*puVar3 != (void *)0x0) {
          FMemory::Free((void *)*puVar3);
        }
        ::operator_delete(puVar3,0x10);
      }
      goto LAB_1415095a0;
    }
  }
  iVar8 = (this->Elements).ArrayNum;
  piVar1 = &(this->Elements).ArrayMax;
  uVar11 = 0;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)this,piVar1);
  }
  (this->Elements).ArrayNum = iVar8 + 1;
  pFVar9 = (this->Elements).AllocatorInstance.Data + (longlong)iVar7 * 8;
  memmove(pFVar9 + 8,pFVar9,(longlong)(iVar8 - iVar7) << 3);
  pFVar9 = (this->Elements).AllocatorInstance.Data + (longlong)iVar7 * 8;
LAB_1415095a0:
  if (in_R9 != (undefined1 *)0x0) {
    *in_R9 = uVar11;
  }
  *(undefined8 *)pFVar9 = *(undefined8 *)param_2;
  param_2[0] = false;
  param_2[1] = false;
  param_2[2] = false;
  param_2[3] = false;
  param_2[4] = false;
  param_2[5] = false;
  param_2[6] = false;
  param_2[7] = false;
  *(int *)&param_1->Ptr =
       (int)((longlong)pFVar9 - (longlong)(this->Elements).AllocatorInstance.Data >> 3);
  return (FSetElementId)(int)param_1;
}

// Emplace<FString> @ 141509df0

FSetElementId __thiscall
TSortedSet<FString,TFixedAllocator<64>,TLess<FString>_>::Emplace<FString>
          (TSortedSet<FString,TFixedAllocator<64>,TLess<FString>_> *this,FString *param_1,
          bool *param_2)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  TTypeCompatibleBytes<FString> *_Src;
  undefined1 *in_R9;
  undefined1 uVar9;
  FIdentityFunctor local_res10;
  
  local_res10 = SUB81(param_1,0);
  iVar5 = AlgoImpl::LowerBoundInternal<FString_const_,int,FString,FIdentityFunctor,TLess<FString>_>
                    ((FString *)this,(this->Elements).ArrayNum,(FString *)param_2,local_res10,
                     (TLess<FString>)local_res10);
  if (iVar5 < (this->Elements).ArrayNum) {
    if ((iVar5 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return (FSetElementId)iVar5;
    }
    pwVar7 = L"";
    _Src = (this->Elements).AllocatorInstance.InlineData + iVar5;
    if (*(int *)(_Src->Pad + 8) == 0) {
      pwVar8 = L"";
    }
    else {
      pwVar8 = *(wchar_t **)_Src->Pad;
    }
    if (*(int *)(param_2 + 8) != 0) {
      pwVar7 = *(wchar_t **)param_2;
    }
    iVar6 = FGenericPlatformStricmp::Stricmp(pwVar7,pwVar8);
    if (-1 < iVar6) {
      uVar9 = 1;
      if (*(void **)_Src->Pad != (void *)0x0) {
        FMemory::Free(*(void **)_Src->Pad);
      }
      goto LAB_141509f14;
    }
  }
  iVar6 = (this->Elements).ArrayNum;
  piVar1 = &(this->Elements).ArrayMax;
  uVar9 = 0;
  piVar2 = &(this->Elements).ArrayNum;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<64>::ForElementType<FString>_>
                      (0x810,(ForElementType<FString> *)this,piVar1);
    *piVar2 = iVar6;
  }
  *piVar2 = iVar6 + 1;
  _Src = (this->Elements).AllocatorInstance.InlineData + iVar5;
  memmove(_Src + 1,_Src,(longlong)(iVar6 - iVar5) << 4);
LAB_141509f14:
  if (in_R9 != (undefined1 *)0x0) {
    *in_R9 = uVar9;
  }
  _Src->Pad[0] = '\0';
  _Src->Pad[1] = '\0';
  _Src->Pad[2] = '\0';
  _Src->Pad[3] = '\0';
  _Src->Pad[4] = '\0';
  _Src->Pad[5] = '\0';
  _Src->Pad[6] = '\0';
  _Src->Pad[7] = '\0';
  *(undefined8 *)_Src->Pad = *(undefined8 *)param_2;
  param_2[0] = false;
  param_2[1] = false;
  param_2[2] = false;
  param_2[3] = false;
  param_2[4] = false;
  param_2[5] = false;
  param_2[6] = false;
  param_2[7] = false;
  *(undefined4 *)(_Src->Pad + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(_Src->Pad + 0xc) = *(undefined4 *)(param_2 + 0xc);
  param_2[8] = false;
  param_2[9] = false;
  param_2[10] = false;
  param_2[0xb] = false;
  param_2[0xc] = false;
  param_2[0xd] = false;
  param_2[0xe] = false;
  param_2[0xf] = false;
  *(int *)&(param_1->Data).AllocatorInstance.Data = (int)((longlong)_Src - (longlong)this >> 4);
  return (FSetElementId)(int)param_1;
}

// Emplace<FString> @ 141509f70

FSetElementId __thiscall
TSortedSet<FString,TSizedDefaultAllocator<32>,TLess<FString>_>::Emplace<FString>
          (TSortedSet<FString,TSizedDefaultAllocator<32>,TLess<FString>_> *this,FString *param_1,
          bool *param_2)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  FScriptContainerElement *pFVar9;
  undefined1 uVar10;
  undefined1 *in_R9;
  longlong lVar11;
  FIdentityFunctor local_res10;
  
  local_res10 = SUB81(param_1,0);
  iVar5 = AlgoImpl::LowerBoundInternal<FString_const_,int,FString,FIdentityFunctor,TLess<FString>_>
                    ((FString *)(this->Elements).AllocatorInstance.Data,(this->Elements).ArrayNum,
                     (FString *)param_2,local_res10,(TLess<FString>)local_res10);
  if (iVar5 < (this->Elements).ArrayNum) {
    if ((iVar5 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return (FSetElementId)iVar5;
    }
    pFVar9 = (this->Elements).AllocatorInstance.Data;
    pwVar7 = L"";
    lVar11 = (longlong)iVar5 * 0x10;
    if (*(int *)(pFVar9 + lVar11 + 8) == 0) {
      pwVar8 = L"";
    }
    else {
      pwVar8 = *(wchar_t **)(pFVar9 + lVar11);
    }
    if (*(int *)(param_2 + 8) != 0) {
      pwVar7 = *(wchar_t **)param_2;
    }
    iVar6 = FGenericPlatformStricmp::Stricmp(pwVar7,pwVar8);
    if (-1 < iVar6) {
      uVar10 = 1;
      pFVar9 = (this->Elements).AllocatorInstance.Data + lVar11;
      if (*(void **)pFVar9 != (void *)0x0) {
        FMemory::Free(*(void **)pFVar9);
      }
      goto LAB_14150a098;
    }
  }
  iVar6 = (this->Elements).ArrayNum;
  piVar1 = &(this->Elements).ArrayMax;
  uVar10 = 0;
  piVar2 = &(this->Elements).ArrayNum;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)this,piVar1);
    *piVar2 = iVar6;
  }
  pFVar9 = (this->Elements).AllocatorInstance.Data;
  *piVar2 = iVar6 + 1;
  lVar11 = (longlong)iVar5 * 0x10;
  pFVar9 = pFVar9 + lVar11;
  memmove(pFVar9 + 0x10,pFVar9,(longlong)(iVar6 - iVar5) << 4);
  pFVar9 = (this->Elements).AllocatorInstance.Data + lVar11;
LAB_14150a098:
  if (in_R9 != (undefined1 *)0x0) {
    *in_R9 = uVar10;
  }
  *(undefined8 *)pFVar9 = 0;
  *(undefined8 *)pFVar9 = *(undefined8 *)param_2;
  param_2[0] = false;
  param_2[1] = false;
  param_2[2] = false;
  param_2[3] = false;
  param_2[4] = false;
  param_2[5] = false;
  param_2[6] = false;
  param_2[7] = false;
  *(undefined4 *)(pFVar9 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(pFVar9 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  param_2[8] = false;
  param_2[9] = false;
  param_2[10] = false;
  param_2[0xb] = false;
  param_2[0xc] = false;
  param_2[0xd] = false;
  param_2[0xe] = false;
  param_2[0xf] = false;
  *(int *)&(param_1->Data).AllocatorInstance.Data =
       (int)((longlong)pFVar9 - (longlong)(this->Elements).AllocatorInstance.Data >> 4);
  return (FSetElementId)(int)param_1;
}

// Emplace<FString> @ 14150a0f0

FSetElementId __thiscall
TSortedSet<FString,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>,TLess<FString>_>::
Emplace<FString>(TSortedSet<FString,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>,TLess<FString>_>
                 *this,FString *param_1,bool *param_2)

{
  ForElementType<FString> FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  wchar_t *pwVar6;
  ForElementType<FString> FVar7;
  wchar_t *pwVar8;
  undefined8 *puVar9;
  undefined1 *in_R9;
  longlong lVar10;
  undefined1 uVar11;
  FIdentityFunctor local_res8;
  
  FVar1 = (this->Elements).AllocatorInstance.SecondaryData;
  FVar7 = (ForElementType<FString>)this;
  if (FVar1 != (ForElementType<FString>)0x0) {
    FVar7 = FVar1;
  }
  iVar4 = AlgoImpl::LowerBoundInternal<FString_const_,int,FString,FIdentityFunctor,TLess<FString>_>
                    ((FString *)FVar7,(this->Elements).ArrayNum,(FString *)param_2,local_res8,
                     (TLess<FString>)local_res8);
  if (iVar4 < (this->Elements).ArrayNum) {
    if ((iVar4 < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return (FSetElementId)iVar4;
    }
    FVar1 = (this->Elements).AllocatorInstance.SecondaryData;
    pwVar6 = L"";
    FVar7 = (ForElementType<FString>)this;
    if (FVar1 != (ForElementType<FString>)0x0) {
      FVar7 = FVar1;
    }
    lVar10 = (longlong)iVar4 * 0x10;
    if (*(int *)((uchar *)((longlong)FVar7 + 8) + lVar10) == 0) {
      pwVar8 = L"";
    }
    else {
      pwVar8 = *(wchar_t **)((longlong)FVar7 + lVar10);
    }
    if (*(int *)(param_2 + 8) != 0) {
      pwVar6 = *(wchar_t **)param_2;
    }
    iVar5 = FGenericPlatformStricmp::Stricmp(pwVar6,pwVar8);
    if (-1 < iVar5) {
      FVar1 = (this->Elements).AllocatorInstance.SecondaryData;
      uVar11 = 1;
      FVar7 = (ForElementType<FString>)this;
      if (FVar1 != (ForElementType<FString>)0x0) {
        FVar7 = FVar1;
      }
      puVar9 = (undefined8 *)((longlong)FVar7 + lVar10);
      if ((void *)*puVar9 != (void *)0x0) {
        FMemory::Free((void *)*puVar9);
      }
      goto LAB_14150a21f;
    }
  }
  uVar11 = 0;
  TArray<FString,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>::InsertUninitializedImpl
            (&this->Elements,iVar4);
  FVar1 = (this->Elements).AllocatorInstance.SecondaryData;
  FVar7 = (ForElementType<FString>)this;
  if (FVar1 != (ForElementType<FString>)0x0) {
    FVar7 = FVar1;
  }
  puVar9 = (undefined8 *)((longlong)iVar4 * 0x10 + (longlong)FVar7);
LAB_14150a21f:
  if (in_R9 != (undefined1 *)0x0) {
    *in_R9 = uVar11;
  }
  *puVar9 = 0;
  *puVar9 = *(undefined8 *)param_2;
  param_2[0] = false;
  param_2[1] = false;
  param_2[2] = false;
  param_2[3] = false;
  param_2[4] = false;
  param_2[5] = false;
  param_2[6] = false;
  param_2[7] = false;
  *(undefined4 *)(puVar9 + 1) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)((longlong)puVar9 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  param_2[8] = false;
  param_2[9] = false;
  param_2[10] = false;
  param_2[0xb] = false;
  param_2[0xc] = false;
  param_2[0xd] = false;
  param_2[0xe] = false;
  param_2[0xf] = false;
  FVar1 = (this->Elements).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<FString>)0x0) {
    this = (TSortedSet<FString,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>,TLess<FString>_>
            *)FVar1;
  }
  *(int *)&(param_1->Data).AllocatorInstance.Data = (int)((longlong)puVar9 - (longlong)this >> 4);
  return (FSetElementId)(int)param_1;
}

// TSortedSet<int,TSizedDefaultAllocator<32>,TLess<int>_> @ 141582450

TSortedSet<int,TSizedDefaultAllocator<32>,TLess<int>_> * __thiscall
TSortedSet<int,TSizedDefaultAllocator<32>,TLess<int>_>::
TSortedSet<int,TSizedDefaultAllocator<32>,TLess<int>_>
          (TSortedSet<int,TSizedDefaultAllocator<32>,TLess<int>_> *this,
          initializer_list<int> *param_1)

{
  int *piVar1;
  TArrayView<int_const_,int> *pTVar2;
  int iVar3;
  ulonglong uVar4;
  TArrayView<int_const_,int> local_18;
  
  piVar1 = &(this->Elements).ArrayMax;
  uVar4 = (longlong)param_1->_Last - (longlong)param_1->_First >> 2;
  *piVar1 = 0;
  (this->Elements).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Elements).ArrayNum = 0;
  iVar3 = (int)uVar4;
  if (-1 < iVar3) {
    if (0 < iVar3) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar3,(ForAnyElementType *)this,0,piVar1);
    }
    pTVar2 = TArrayView<int_const_,int>::
             TArrayView<int_const_,int><std::initializer_list<int>_&,std::initializer_list<int>_>
                       (&local_18,param_1);
    AppendImpl<0>(this,pTVar2->DataPtr,(int)*(undefined8 *)&pTVar2->ArrayNum);
    return this;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum(uVar4 & 0xffffffff);
}

// TSortedSet<int,TSizedDefaultAllocator<32>,TLess<int>_> @ 1415824e0

TSortedSet<int,TSizedDefaultAllocator<32>,TLess<int>_> * __thiscall
TSortedSet<int,TSizedDefaultAllocator<32>,TLess<int>_>::
TSortedSet<int,TSizedDefaultAllocator<32>,TLess<int>_>
          (TSortedSet<int,TSizedDefaultAllocator<32>,TLess<int>_> *this)

{
  int iVar1;
  
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType((ForAnyElementType *)this);
  (this->Elements).ArrayNum = 0;
  iVar1 = TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                    ((ForAnyElementType *)this);
  (this->Elements).ArrayMax = iVar1;
  return this;
}

// TSortedSet<TUniquePtr<FString,TDefaultDelete<FString>_>,TSizedDefaultAllocator<32>,TLess<TUniquePtr<FString,TDefaultDelete<FString>_>_>_> @ 141582540

TSortedSet<TUniquePtr<FString,TDefaultDelete<FString>_>,TSizedDefaultAllocator<32>,TLess<TUniquePtr<FString,TDefaultDelete<FString>_>_>_>
* __thiscall
TSortedSet<TUniquePtr<FString,TDefaultDelete<FString>_>,TSizedDefaultAllocator<32>,TLess<TUniquePtr<FString,TDefaultDelete<FString>_>_>_>
::
TSortedSet<TUniquePtr<FString,TDefaultDelete<FString>_>,TSizedDefaultAllocator<32>,TLess<TUniquePtr<FString,TDefaultDelete<FString>_>_>_>
          (TSortedSet<TUniquePtr<FString,TDefaultDelete<FString>_>,TSizedDefaultAllocator<32>,TLess<TUniquePtr<FString,TDefaultDelete<FString>_>_>_>
           *this)

{
  int iVar1;
  
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType((ForAnyElementType *)this);
  (this->Elements).ArrayNum = 0;
  iVar1 = TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                    ((ForAnyElementType *)this);
  (this->Elements).ArrayMax = iVar1;
  return this;
}

// TSortedSet<FString,TSizedDefaultAllocator<32>,TLess<FString>_> @ 1415825a0

TSortedSet<FString,TSizedDefaultAllocator<32>,TLess<FString>_> * __thiscall
TSortedSet<FString,TSizedDefaultAllocator<32>,TLess<FString>_>::
TSortedSet<FString,TSizedDefaultAllocator<32>,TLess<FString>_>
          (TSortedSet<FString,TSizedDefaultAllocator<32>,TLess<FString>_> *this,
          initializer_list<FString> *param_1)

{
  int *piVar1;
  TArrayView<FString_const_,int> *pTVar2;
  int iVar3;
  ulonglong uVar4;
  TArrayView<FString_const_,int> local_18;
  
  piVar1 = &(this->Elements).ArrayMax;
  uVar4 = (longlong)param_1->_Last - (longlong)param_1->_First >> 4;
  *piVar1 = 0;
  (this->Elements).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Elements).ArrayNum = 0;
  iVar3 = (int)uVar4;
  if (-1 < iVar3) {
    if (0 < iVar3) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar3,(ForAnyElementType *)this,0,piVar1);
    }
    pTVar2 = TArrayView<FString_const_,int>::
             TArrayView<FString_const_,int><std::initializer_list<FString>_&,std::initializer_list<FString>_>
                       (&local_18,param_1);
    AppendImpl<0>(this,pTVar2->DataPtr,(int)*(undefined8 *)&pTVar2->ArrayNum);
    return this;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum(uVar4 & 0xffffffff);
}

// ~TSortedSet<int,TSizedDefaultAllocator<32>,TLess<int>_> @ 1415884f0

void __thiscall
TSortedSet<int,TSizedDefaultAllocator<32>,TLess<int>_>::
~TSortedSet<int,TSizedDefaultAllocator<32>,TLess<int>_>
          (TSortedSet<int,TSizedDefaultAllocator<32>,TLess<int>_> *this)

{
  TArray<int,TSizedDefaultAllocator<32>_>::~TArray<int,TSizedDefaultAllocator<32>_>(&this->Elements)
  ;
  return;
}

// ~TSortedSet<FString,TSizedDefaultAllocator<32>,TLess<FString>_> @ 141588520

void __thiscall
TSortedSet<FString,TSizedDefaultAllocator<32>,TLess<FString>_>::
~TSortedSet<FString,TSizedDefaultAllocator<32>,TLess<FString>_>
          (TSortedSet<FString,TSizedDefaultAllocator<32>,TLess<FString>_> *this)

{
  TArray<FString,TSizedDefaultAllocator<32>_>::~TArray<FString,TSizedDefaultAllocator<32>_>
            (&this->Elements);
  return;
}

// operator() @ 141595320

bool __thiscall
`TSortedSet<TTuple<FString,FString>,TFixedAllocator<64>,TLess<TTuple<FString,FString>_>_>::
AppendImpl<0>'::__l24::<lambda_1>::operator()(void *this,TTuple<FString,FString> *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  
  pwVar5 = L"";
  puVar1 = *(undefined8 **)this;
  if (*(int *)&param_1->field_0x8 == 0) {
    pwVar4 = L"";
  }
  else {
    pwVar4 = *(wchar_t **)param_1;
  }
  if (*(int *)(puVar1 + 1) == 0) {
    pwVar3 = L"";
  }
  else {
    pwVar3 = (wchar_t *)*puVar1;
  }
  iVar2 = FGenericPlatformStricmp::Stricmp(pwVar3,pwVar4);
  if (-1 < iVar2) {
    if (*(int *)(puVar1 + 1) == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)*puVar1;
    }
    if (*(int *)&param_1->field_0x8 == 0) {
      pwVar3 = L"";
    }
    else {
      pwVar3 = *(wchar_t **)param_1;
    }
    iVar2 = FGenericPlatformStricmp::Stricmp(pwVar3,pwVar4);
    if (-1 < iVar2) {
      if (*(int *)&param_1->field_0x18 == 0) {
        pwVar4 = L"";
      }
      else {
        pwVar4 = *(wchar_t **)&param_1->field_0x10;
      }
      if (*(int *)(puVar1 + 3) == 0) {
        pwVar3 = L"";
      }
      else {
        pwVar3 = (wchar_t *)puVar1[2];
      }
      iVar2 = FGenericPlatformStricmp::Stricmp(pwVar3,pwVar4);
      if (iVar2 < 0) {
        return false;
      }
    }
    puVar1 = *(undefined8 **)this;
    if (*(int *)(puVar1 + 1) == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)*puVar1;
    }
    if (*(int *)&param_1->field_0x8 == 0) {
      pwVar3 = L"";
    }
    else {
      pwVar3 = *(wchar_t **)param_1;
    }
    iVar2 = FGenericPlatformStricmp::Stricmp(pwVar3,pwVar4);
    if (-1 < iVar2) {
      if (*(int *)&param_1->field_0x8 == 0) {
        pwVar4 = L"";
      }
      else {
        pwVar4 = *(wchar_t **)param_1;
      }
      if (*(int *)(puVar1 + 1) == 0) {
        pwVar3 = L"";
      }
      else {
        pwVar3 = (wchar_t *)*puVar1;
      }
      iVar2 = FGenericPlatformStricmp::Stricmp(pwVar3,pwVar4);
      if (-1 < iVar2) {
        if (*(int *)(puVar1 + 3) == 0) {
          pwVar4 = L"";
        }
        else {
          pwVar4 = (wchar_t *)puVar1[2];
        }
        if (*(int *)&param_1->field_0x18 != 0) {
          pwVar5 = *(wchar_t **)&param_1->field_0x10;
        }
        iVar2 = FGenericPlatformStricmp::Stricmp(pwVar5,pwVar4);
        if (iVar2 < 0) {
          return false;
        }
      }
      return true;
    }
  }
  return false;
}

// operator() @ 141595460

bool __thiscall
`TSortedSet<TTuple<FString,FString>,TSizedDefaultAllocator<32>,TLess<TTuple<FString,FString>_>_>::
AppendImpl<0>'::__l24::<lambda_1>::operator()(void *this,TTuple<FString,FString> *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  
  pwVar5 = L"";
  puVar1 = *(undefined8 **)this;
  if (*(int *)&param_1->field_0x8 == 0) {
    pwVar4 = L"";
  }
  else {
    pwVar4 = *(wchar_t **)param_1;
  }
  if (*(int *)(puVar1 + 1) == 0) {
    pwVar3 = L"";
  }
  else {
    pwVar3 = (wchar_t *)*puVar1;
  }
  iVar2 = FGenericPlatformStricmp::Stricmp(pwVar3,pwVar4);
  if (-1 < iVar2) {
    if (*(int *)(puVar1 + 1) == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)*puVar1;
    }
    if (*(int *)&param_1->field_0x8 == 0) {
      pwVar3 = L"";
    }
    else {
      pwVar3 = *(wchar_t **)param_1;
    }
    iVar2 = FGenericPlatformStricmp::Stricmp(pwVar3,pwVar4);
    if (-1 < iVar2) {
      if (*(int *)&param_1->field_0x18 == 0) {
        pwVar4 = L"";
      }
      else {
        pwVar4 = *(wchar_t **)&param_1->field_0x10;
      }
      if (*(int *)(puVar1 + 3) == 0) {
        pwVar3 = L"";
      }
      else {
        pwVar3 = (wchar_t *)puVar1[2];
      }
      iVar2 = FGenericPlatformStricmp::Stricmp(pwVar3,pwVar4);
      if (iVar2 < 0) {
        return false;
      }
    }
    puVar1 = *(undefined8 **)this;
    if (*(int *)(puVar1 + 1) == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)*puVar1;
    }
    if (*(int *)&param_1->field_0x8 == 0) {
      pwVar3 = L"";
    }
    else {
      pwVar3 = *(wchar_t **)param_1;
    }
    iVar2 = FGenericPlatformStricmp::Stricmp(pwVar3,pwVar4);
    if (-1 < iVar2) {
      if (*(int *)&param_1->field_0x8 == 0) {
        pwVar4 = L"";
      }
      else {
        pwVar4 = *(wchar_t **)param_1;
      }
      if (*(int *)(puVar1 + 1) == 0) {
        pwVar3 = L"";
      }
      else {
        pwVar3 = (wchar_t *)*puVar1;
      }
      iVar2 = FGenericPlatformStricmp::Stricmp(pwVar3,pwVar4);
      if (-1 < iVar2) {
        if (*(int *)(puVar1 + 3) == 0) {
          pwVar4 = L"";
        }
        else {
          pwVar4 = (wchar_t *)puVar1[2];
        }
        if (*(int *)&param_1->field_0x18 != 0) {
          pwVar5 = *(wchar_t **)&param_1->field_0x10;
        }
        iVar2 = FGenericPlatformStricmp::Stricmp(pwVar5,pwVar4);
        if (iVar2 < 0) {
          return false;
        }
      }
      return true;
    }
  }
  return false;
}

// operator() @ 1415955a0

bool __thiscall
`TSortedSet<TTuple<FString,FString>,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>,TLess<TTuple<FString,FString>_>_>
::AppendImpl<0>'::__l24::<lambda_1>::operator()(void *this,TTuple<FString,FString> *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  
  pwVar5 = L"";
  puVar1 = *(undefined8 **)this;
  if (*(int *)&param_1->field_0x8 == 0) {
    pwVar4 = L"";
  }
  else {
    pwVar4 = *(wchar_t **)param_1;
  }
  if (*(int *)(puVar1 + 1) == 0) {
    pwVar3 = L"";
  }
  else {
    pwVar3 = (wchar_t *)*puVar1;
  }
  iVar2 = FGenericPlatformStricmp::Stricmp(pwVar3,pwVar4);
  if (-1 < iVar2) {
    if (*(int *)(puVar1 + 1) == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)*puVar1;
    }
    if (*(int *)&param_1->field_0x8 == 0) {
      pwVar3 = L"";
    }
    else {
      pwVar3 = *(wchar_t **)param_1;
    }
    iVar2 = FGenericPlatformStricmp::Stricmp(pwVar3,pwVar4);
    if (-1 < iVar2) {
      if (*(int *)&param_1->field_0x18 == 0) {
        pwVar4 = L"";
      }
      else {
        pwVar4 = *(wchar_t **)&param_1->field_0x10;
      }
      if (*(int *)(puVar1 + 3) == 0) {
        pwVar3 = L"";
      }
      else {
        pwVar3 = (wchar_t *)puVar1[2];
      }
      iVar2 = FGenericPlatformStricmp::Stricmp(pwVar3,pwVar4);
      if (iVar2 < 0) {
        return false;
      }
    }
    puVar1 = *(undefined8 **)this;
    if (*(int *)(puVar1 + 1) == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)*puVar1;
    }
    if (*(int *)&param_1->field_0x8 == 0) {
      pwVar3 = L"";
    }
    else {
      pwVar3 = *(wchar_t **)param_1;
    }
    iVar2 = FGenericPlatformStricmp::Stricmp(pwVar3,pwVar4);
    if (-1 < iVar2) {
      if (*(int *)&param_1->field_0x8 == 0) {
        pwVar4 = L"";
      }
      else {
        pwVar4 = *(wchar_t **)param_1;
      }
      if (*(int *)(puVar1 + 1) == 0) {
        pwVar3 = L"";
      }
      else {
        pwVar3 = (wchar_t *)*puVar1;
      }
      iVar2 = FGenericPlatformStricmp::Stricmp(pwVar3,pwVar4);
      if (-1 < iVar2) {
        if (*(int *)(puVar1 + 3) == 0) {
          pwVar4 = L"";
        }
        else {
          pwVar4 = (wchar_t *)puVar1[2];
        }
        if (*(int *)&param_1->field_0x18 != 0) {
          pwVar5 = *(wchar_t **)&param_1->field_0x10;
        }
        iVar2 = FGenericPlatformStricmp::Stricmp(pwVar5,pwVar4);
        if (iVar2 < 0) {
          return false;
        }
      }
      return true;
    }
  }
  return false;
}

// operator() @ 1415956e0

bool __thiscall
`TSortedSet<FString,TFixedAllocator<64>,TLess<FString>_>::AppendImpl<0>'::__l24::<lambda_1>::
operator()(void *this,FString *param_1)

{
  int iVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  
  pwVar4 = L"";
  if ((param_1->Data).ArrayNum == 0) {
    pwVar3 = L"";
  }
  else {
    pwVar3 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  if (*(int *)(*(undefined8 **)this + 1) == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)**(undefined8 **)this;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(pwVar2,pwVar3);
  if (-1 < iVar1) {
    if (*(int *)(*(undefined8 **)this + 1) == 0) {
      pwVar3 = L"";
    }
    else {
      pwVar3 = (wchar_t *)**(undefined8 **)this;
    }
    if ((param_1->Data).ArrayNum != 0) {
      pwVar4 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    iVar1 = FGenericPlatformStricmp::Stricmp(pwVar4,pwVar3);
    if (-1 < iVar1) {
      return true;
    }
  }
  return false;
}

// operator() @ 141595780

bool __thiscall
`TSortedSet<FString,TSizedDefaultAllocator<32>,TLess<FString>_>::AppendImpl<0>'::__l24::<lambda_1>::
operator()(void *this,FString *param_1)

{
  int iVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  
  pwVar4 = L"";
  if ((param_1->Data).ArrayNum == 0) {
    pwVar3 = L"";
  }
  else {
    pwVar3 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  if (*(int *)(*(undefined8 **)this + 1) == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)**(undefined8 **)this;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(pwVar2,pwVar3);
  if (-1 < iVar1) {
    if (*(int *)(*(undefined8 **)this + 1) == 0) {
      pwVar3 = L"";
    }
    else {
      pwVar3 = (wchar_t *)**(undefined8 **)this;
    }
    if ((param_1->Data).ArrayNum != 0) {
      pwVar4 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    iVar1 = FGenericPlatformStricmp::Stricmp(pwVar4,pwVar3);
    if (-1 < iVar1) {
      return true;
    }
  }
  return false;
}

// operator() @ 141595820

bool __thiscall
`TSortedSet<FString,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>,TLess<FString>_>::
AppendImpl<0>'::__l24::<lambda_1>::operator()(void *this,FString *param_1)

{
  int iVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  
  pwVar4 = L"";
  if ((param_1->Data).ArrayNum == 0) {
    pwVar3 = L"";
  }
  else {
    pwVar3 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  if (*(int *)(*(undefined8 **)this + 1) == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)**(undefined8 **)this;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(pwVar2,pwVar3);
  if (-1 < iVar1) {
    if (*(int *)(*(undefined8 **)this + 1) == 0) {
      pwVar3 = L"";
    }
    else {
      pwVar3 = (wchar_t *)**(undefined8 **)this;
    }
    if ((param_1->Data).ArrayNum != 0) {
      pwVar4 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    iVar1 = FGenericPlatformStricmp::Stricmp(pwVar4,pwVar3);
    if (-1 < iVar1) {
      return true;
    }
  }
  return false;
}

