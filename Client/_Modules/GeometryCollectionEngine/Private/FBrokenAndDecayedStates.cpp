// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionEngine
// Functions: 11

// GetHasDecayed @ 1463752c0

bool __thiscall
UGeometryCollectionComponent::FBrokenAndDecayedStates::GetHasDecayed
          (FBrokenAndDecayedStates *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  ForElementType<unsigned_int> FVar4;
  
  if (this->bIsRootBroken == false) {
    return false;
  }
  if ((param_1 < 0) || ((this->HasDecayed).NumBits <= param_1)) {
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
  FVar4 = (this->HasDecayed).AllocatorInstance.SecondaryData;
  if (FVar4 == (ForElementType<unsigned_int>)0x0) {
    FVar4 = (ForElementType<unsigned_int>)&this->HasDecayed;
  }
  return (*(uint *)((longlong)FVar4 +
                   (longlong)((int)(param_1 + (param_1 >> 0x1f & 0x1fU)) >> 5) * 4) >>
          (param_1 & 0x1fU) & 1) != 0;
}

// GetIsBroken @ 1463772b0

bool __thiscall
UGeometryCollectionComponent::FBrokenAndDecayedStates::GetIsBroken
          (FBrokenAndDecayedStates *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  ForElementType<unsigned_int> FVar4;
  
  if (this->bIsRootBroken == false) {
    return false;
  }
  if ((param_1 < 0) || ((this->IsBroken).NumBits <= param_1)) {
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
  FVar4 = (this->IsBroken).AllocatorInstance.SecondaryData;
  if (FVar4 == (ForElementType<unsigned_int>)0x0) {
    FVar4 = (ForElementType<unsigned_int>)&this->IsBroken;
  }
  return (*(uint *)((longlong)FVar4 +
                   (longlong)((int)(param_1 + (param_1 >> 0x1f & 0x1fU)) >> 5) * 4) >>
          (param_1 & 0x1fU) & 1) != 0;
}

// GetRootBrokenElapsedTimeInMs @ 14637a430

double __thiscall
UGeometryCollectionComponent::FBrokenAndDecayedStates::GetRootBrokenElapsedTimeInMs
          (FBrokenAndDecayedStates *this)

{
  LARGE_INTEGER local_res8 [4];
  
  if (this->bIsRootBroken != false) {
    QueryPerformanceCounter(local_res8);
    return (double)(ulonglong)local_res8[0].QuadPart * FGenericPlatformTime::SecondsPerCycle64 *
           __real_408f400000000000 - this->RootBrokenEventTimeInMs;
  }
  return 0.0;
}

// GetRootBrokenEventTimeInMs @ 14637a4a0

double __thiscall
UGeometryCollectionComponent::FBrokenAndDecayedStates::GetRootBrokenEventTimeInMs
          (FBrokenAndDecayedStates *this)

{
  return this->RootBrokenEventTimeInMs;
}

// HasAnyDecaying @ 14637e250

bool __thiscall
UGeometryCollectionComponent::FBrokenAndDecayedStates::HasAnyDecaying(FBrokenAndDecayedStates *this)

{
  return 0 < this->NumDecaying;
}

// HasFullyDecayed @ 14637e670

bool __thiscall
UGeometryCollectionComponent::FBrokenAndDecayedStates::HasFullyDecayed
          (FBrokenAndDecayedStates *this)

{
  int iVar1;
  
  if (0 < this->NumDecaying) {
    return false;
  }
  iVar1 = TBitArray<FDefaultBitArrayAllocator>::CountSetBits(&this->HasDecayed,0,-1);
  return iVar1 == (this->HasDecayed).NumBits;
}

// Reset @ 14638aba0

void __thiscall
UGeometryCollectionComponent::FBrokenAndDecayedStates::Reset
          (FBrokenAndDecayedStates *this,int param_1)

{
  int iVar1;
  
  this->NumTransforms = param_1;
  this->NumDecaying = 0;
  this->bIsRootBroken = false;
  iVar1 = (this->IsBroken).MaxBits;
  (this->IsBroken).NumBits = 0;
  if ((iVar1 < 0) || (0x80 < iVar1)) {
    (this->IsBroken).MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&this->IsBroken,0);
  }
  iVar1 = (this->HasDecayed).MaxBits;
  (this->HasDecayed).NumBits = 0;
  if ((iVar1 < 0) || (0x80 < iVar1)) {
    (this->HasDecayed).MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&this->HasDecayed,0);
  }
  this->RootBrokenEventTimeInMs = 0.0;
  return;
}

// SetHasDecayed @ 14638c9e0

void __thiscall
UGeometryCollectionComponent::FBrokenAndDecayedStates::SetHasDecayed
          (FBrokenAndDecayedStates *this,int param_1)

{
  int *piVar1;
  uint *puVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  ForElementType<unsigned_int> FVar7;
  uint uVar8;
  
  if (this->bIsRootBroken != false) {
    piVar1 = &(this->HasDecayed).NumBits;
    if (((param_1 < 0) || (*piVar1 <= param_1)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    FVar7 = (this->HasDecayed).AllocatorInstance.SecondaryData;
    iVar6 = (int)(param_1 + (param_1 >> 0x1f & 0x1fU)) >> 5;
    uVar8 = 1 << ((byte)param_1 & 0x1f);
    lVar3 = (longlong)iVar6 * 4;
    if (FVar7 == (ForElementType<unsigned_int>)0x0) {
      FVar7 = (ForElementType<unsigned_int>)&this->HasDecayed;
    }
    if ((*(uint *)((longlong)FVar7 + lVar3) & uVar8) == 0) {
      if (((param_1 < 0) || (*piVar1 <= param_1)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FVar7 = (this->HasDecayed).AllocatorInstance.SecondaryData;
      if (FVar7 == (ForElementType<unsigned_int>)0x0) {
        FVar7 = (ForElementType<unsigned_int>)&this->HasDecayed;
      }
      puVar2 = (uint *)((longlong)FVar7 + lVar3);
      *puVar2 = *puVar2 | uVar8;
      if (((param_1 < 0) || ((this->IsBroken).NumBits <= param_1)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FVar7 = (this->IsBroken).AllocatorInstance.SecondaryData;
      if (FVar7 == (ForElementType<unsigned_int>)0x0) {
        FVar7 = (ForElementType<unsigned_int>)&this->IsBroken;
      }
      if ((*(uint *)((longlong)FVar7 + (longlong)iVar6 * 4) >> (param_1 & 0x1fU) & 1) != 0) {
        this->NumDecaying = this->NumDecaying + -1;
      }
    }
  }
  return;
}

// SetHasDecayedRecursive @ 14638cb70

void __thiscall
UGeometryCollectionComponent::FBrokenAndDecayedStates::SetHasDecayedRecursive
          (FBrokenAndDecayedStates *this,int param_1,
          TArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,TSizedDefaultAllocator<32>_>
          *param_2)

{
  ulonglong uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ForElementType<unsigned_int> FVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  TBitArray<FDefaultBitArrayAllocator> *pTVar13;
  FScriptContainerElement *pFVar14;
  uint uVar15;
  undefined1 local_res8 [8];
  undefined4 local_9c;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  if (this->bIsRootBroken != false) {
    iVar11 = (this->HasDecayed).NumBits;
    if (param_2->ArrayNum == iVar11) {
      if (((param_1 < 0) || (iVar11 <= param_1)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FVar8 = (this->HasDecayed).AllocatorInstance.SecondaryData;
      uVar5 = 1;
      uVar10 = 1 << ((byte)param_1 & 0x1f);
      lVar9 = (longlong)((int)(param_1 + (param_1 >> 0x1f & 0x1fU)) >> 5) * 4;
      if (FVar8 == (ForElementType<unsigned_int>)0x0) {
        FVar8 = (ForElementType<unsigned_int>)&this->HasDecayed;
      }
      if ((*(uint *)((longlong)FVar8 + lVar9) & uVar10) == 0) {
        if (((param_1 < 0) || ((this->HasDecayed).NumBits <= param_1)) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5be,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        FVar8 = (this->HasDecayed).AllocatorInstance.SecondaryData;
        if (FVar8 == (ForElementType<unsigned_int>)0x0) {
          FVar8 = (ForElementType<unsigned_int>)&this->HasDecayed;
        }
        *(uint *)((longlong)FVar8 + lVar9) = *(uint *)((longlong)FVar8 + lVar9) | uVar10;
        if (((param_1 < 0) || ((this->IsBroken).NumBits <= param_1)) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5be,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        FVar8 = (this->IsBroken).AllocatorInstance.SecondaryData;
        if (FVar8 == (ForElementType<unsigned_int>)0x0) {
          FVar8 = (ForElementType<unsigned_int>)&this->IsBroken;
        }
        if ((*(uint *)((longlong)FVar8 + lVar9) & uVar10) != 0) {
          this->NumDecaying = this->NumDecaying + -1;
        }
        uVar10 = 0;
        uVar4 = uVar10;
        if (param_1 < param_2->ArrayNum) {
          uVar4 = (uint)~param_1 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar14 = (param_2->AllocatorInstance).Data + (longlong)param_1 * 0x50;
        uVar4 = *(uint *)(pFVar14 + 0x28);
        TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)(pFVar14 + 0x10);
        uVar6 = uVar10;
        uVar12 = uVar10;
        if (uVar4 != 0) {
          pTVar13 = *(TBitArray<FDefaultBitArrayAllocator> **)(pFVar14 + 0x20);
          if (*(TBitArray<FDefaultBitArrayAllocator> **)(pFVar14 + 0x20) ==
              (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
            pTVar13 = TStack_60.Array;
          }
          uVar6 = *(uint *)(pTVar13->AllocatorInstance).InlineData;
          while (uVar6 == 0) {
            lVar9 = (longlong)(int)uVar10;
            uVar12 = uVar12 + 0x20;
            uVar10 = uVar10 + 1;
            uVar6 = uVar4;
            if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar10)
            goto LAB_14638cdbe;
            uVar6 = *(uint *)((pTVar13->AllocatorInstance).InlineData + lVar9 * 4 + 4);
          }
          uVar5 = -uVar6 & uVar6;
          uVar1 = (ulonglong)uVar5 * 2 + 1;
          lVar9 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
            }
          }
          uVar6 = (int)lVar9 + -1 + uVar12;
          if ((int)uVar4 < (int)uVar6) {
            uVar6 = uVar4;
          }
        }
LAB_14638cdbe:
        uVar7 = *(uint *)(pFVar14 + 0x28);
        uVar15 = uVar7 & 0xffffffe0;
        TStack_60._padding_ = CONCAT44(uVar5,uVar10);
        TStack_60.CurrentBitIndex = uVar6;
        TStack_60.UnvisitedBitMask = 0xffffffff;
        iVar11 = (int)uVar7 >> 5;
        TStack_60._28_4_ = local_9c;
        TStack_60.BaseBitIndex = uVar12;
        uStack_40 = CONCAT44(uStack_6c,*(int *)(pFVar14 + 8) - *(int *)(pFVar14 + 0x34));
        if ((((int)uVar7 < 0) || ((int)uVar4 < (int)uVar7)) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("StartIndex >= 0 && StartIndex <= Array.Num()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x7af,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar5 = *(uint *)(pFVar14 + 0x28);
        if (uVar7 != uVar5) {
          pTVar13 = *(TBitArray<FDefaultBitArrayAllocator> **)(pFVar14 + 0x20);
          if (*(TBitArray<FDefaultBitArrayAllocator> **)(pFVar14 + 0x20) ==
              (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
            pTVar13 = (TBitArray<FDefaultBitArrayAllocator> *)(pFVar14 + 0x10);
          }
          uVar10 = -1 << ((byte)uVar7 & 0x1f) &
                   *(uint *)((pTVar13->AllocatorInstance).InlineData + (longlong)iVar11 * 4);
          while (uVar10 == 0) {
            lVar9 = (longlong)iVar11;
            uVar15 = uVar15 + 0x20;
            iVar11 = iVar11 + 1;
            uVar7 = uVar5;
            if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11)
            goto LAB_14638cec0;
            uVar10 = *(uint *)((pTVar13->AllocatorInstance).InlineData + lVar9 * 4 + 4);
          }
          uVar1 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
          lVar9 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
            }
          }
          uVar7 = (int)lVar9 + -1 + uVar15;
          if ((int)uVar5 < (int)uVar7) {
            uVar7 = uVar5;
          }
        }
LAB_14638cec0:
        while( true ) {
          if (*(int *)(pFVar14 + 8) - *(int *)(pFVar14 + 0x34) != (int)uStack_40) {
            `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
          }
          if ((TStack_60.CurrentBitIndex == uVar7) &&
             (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)(pFVar14 + 0x10))) break;
          SetHasDecayedRecursive
                    (this,*(int *)(*(longlong *)pFVar14 + (longlong)TStack_60.CurrentBitIndex * 0xc)
                     ,param_2);
          TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
        }
      }
    }
    else {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_7287575455585005390>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\GeometryCollectionEngine\\Private\\GeometryCollection\\GeometryCollectionComponent.cpp"
                         ,0x10b2,"Children.Num() == HasDecayed.Num()");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  return;
}

// SetIsBroken @ 14638d290

void __thiscall
UGeometryCollectionComponent::FBrokenAndDecayedStates::SetIsBroken
          (FBrokenAndDecayedStates *this,int param_1)

{
  int *piVar1;
  uint *puVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  ForElementType<unsigned_int> FVar6;
  uint uVar7;
  
  if (this->bIsRootBroken != false) {
    piVar1 = &(this->IsBroken).NumBits;
    if (((param_1 < 0) || (*piVar1 <= param_1)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    FVar6 = (this->IsBroken).AllocatorInstance.SecondaryData;
    lVar3 = (longlong)((int)(param_1 + (param_1 >> 0x1f & 0x1fU)) >> 5) * 4;
    uVar7 = 1 << ((byte)param_1 & 0x1f);
    if (FVar6 == (ForElementType<unsigned_int>)0x0) {
      FVar6 = (ForElementType<unsigned_int>)&this->IsBroken;
    }
    if ((*(uint *)((longlong)FVar6 + lVar3) & uVar7) == 0) {
      if (((param_1 < 0) || (*piVar1 <= param_1)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FVar6 = (this->IsBroken).AllocatorInstance.SecondaryData;
      if (FVar6 == (ForElementType<unsigned_int>)0x0) {
        FVar6 = (ForElementType<unsigned_int>)&this->IsBroken;
      }
      puVar2 = (uint *)((longlong)FVar6 + lVar3);
      *puVar2 = *puVar2 | uVar7;
      this->NumDecaying = this->NumDecaying + 1;
    }
  }
  return;
}

// SetRootIsBroken @ 14638e910

void __thiscall
UGeometryCollectionComponent::FBrokenAndDecayedStates::SetRootIsBroken
          (FBrokenAndDecayedStates *this,bool param_1)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  ForElementType<unsigned_int> FVar5;
  uint uVar6;
  LARGE_INTEGER local_res8;
  
  if (param_1 != this->bIsRootBroken) {
    pTVar1 = &this->IsBroken;
    this->bIsRootBroken = param_1;
    this->NumDecaying = 0;
    if (param_1) {
      iVar4 = this->NumTransforms;
      (this->IsBroken).NumBits = iVar4;
      uVar3 = iVar4 + 0x1f;
      uVar6 = uVar3 >> 5;
      if (uVar3 >> 5 != 0) {
        if ((this->IsBroken).MaxBits + 0x1fU >> 5 < uVar6) {
          TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
          ResizeAllocation(&pTVar1->AllocatorInstance,0,uVar6,4);
          (this->IsBroken).MaxBits = uVar6 << 5;
        }
        FVar5 = (this->IsBroken).AllocatorInstance.SecondaryData;
        if (FVar5 == (ForElementType<unsigned_int>)0x0) {
          FVar5 = (ForElementType<unsigned_int>)pTVar1;
        }
        memset((void *)FVar5,0,(ulonglong)uVar6 << 2);
        iVar4 = (this->IsBroken).NumBits;
        uVar6 = iVar4 >> 0x1f & 0x1f;
        uVar3 = iVar4 + uVar6;
        iVar4 = (uVar3 & 0x1f) - uVar6;
        if (iVar4 != 0) {
          FVar5 = (this->IsBroken).AllocatorInstance.SecondaryData;
          if (FVar5 == (ForElementType<unsigned_int>)0x0) {
            FVar5 = (ForElementType<unsigned_int>)pTVar1;
          }
          puVar2 = (uint *)((longlong)FVar5 + (longlong)((int)uVar3 >> 5) * 4);
          *puVar2 = *puVar2 & 0xffffffffU >> (-(char)iVar4 & 0x1fU);
        }
      }
      iVar4 = this->NumTransforms;
      pTVar1 = &this->HasDecayed;
      (this->HasDecayed).NumBits = iVar4;
      uVar3 = iVar4 + 0x1f;
      uVar6 = uVar3 >> 5;
      if (uVar3 >> 5 != 0) {
        if ((this->HasDecayed).MaxBits + 0x1fU >> 5 < uVar6) {
          TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
          ResizeAllocation(&pTVar1->AllocatorInstance,0,uVar6,4);
          (this->HasDecayed).MaxBits = uVar6 << 5;
        }
        FVar5 = (this->HasDecayed).AllocatorInstance.SecondaryData;
        if (FVar5 == (ForElementType<unsigned_int>)0x0) {
          FVar5 = (ForElementType<unsigned_int>)pTVar1;
        }
        memset((void *)FVar5,0,(ulonglong)uVar6 << 2);
        iVar4 = (this->HasDecayed).NumBits;
        uVar6 = iVar4 >> 0x1f & 0x1f;
        uVar3 = iVar4 + uVar6;
        iVar4 = (uVar3 & 0x1f) - uVar6;
        if (iVar4 != 0) {
          FVar5 = (this->HasDecayed).AllocatorInstance.SecondaryData;
          if (FVar5 == (ForElementType<unsigned_int>)0x0) {
            FVar5 = (ForElementType<unsigned_int>)pTVar1;
          }
          puVar2 = (uint *)((longlong)FVar5 + (longlong)((int)uVar3 >> 5) * 4);
          *puVar2 = *puVar2 & 0xffffffffU >> (0x20U - (char)iVar4 & 0x1f);
        }
      }
      QueryPerformanceCounter(&local_res8);
      this->RootBrokenEventTimeInMs =
           (double)(ulonglong)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle64 *
           __real_408f400000000000;
      return;
    }
    iVar4 = (this->IsBroken).MaxBits;
    (this->IsBroken).NumBits = 0;
    if ((iVar4 < 0) || (0x80 < iVar4)) {
      (this->IsBroken).MaxBits = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(pTVar1,0);
    }
    iVar4 = (this->HasDecayed).MaxBits;
    (this->HasDecayed).NumBits = 0;
    if ((iVar4 < 0) || (0x80 < iVar4)) {
      (this->HasDecayed).MaxBits = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(&this->HasDecayed,0);
    }
    this->RootBrokenEventTimeInMs = 0.0;
  }
  return;
}

