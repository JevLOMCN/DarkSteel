// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 5

// Allocate @ 147cd4640

int __thiscall FGrowOnlySpanAllocator::Allocate(FGrowOnlySpanAllocator *this,int param_1)

{
  TArray<FGrowOnlySpanAllocator::FLinearAllocation,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>_>
  *pTVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  ForElementType<FGrowOnlySpanAllocator::FLinearAllocation> FVar8;
  ForElementType<FGrowOnlySpanAllocator::FLinearAllocation> FVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  
  uVar12 = 0;
  if (0 < (this->FreeSpans).ArrayNum) {
    pTVar1 = &this->FreeSpans;
    lVar11 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar12 < (this->FreeSpans).ArrayNum) {
        uVar5 = ~uVar12 >> 0x1f;
      }
      if (uVar5 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          iVar6 = (*pcVar3)();
          return iVar6;
        }
      }
      FVar8 = (this->FreeSpans).AllocatorInstance.SecondaryData;
      FVar9 = (ForElementType<FGrowOnlySpanAllocator::FLinearAllocation>)pTVar1;
      if (FVar8 != (ForElementType<FGrowOnlySpanAllocator::FLinearAllocation>)0x0) {
        FVar9 = FVar8;
      }
      if (param_1 <= (int)((ulonglong)*(undefined8 *)(lVar11 + (longlong)FVar9) >> 0x20)) {
        if (uVar12 != 0xffffffff) {
          uVar13 = ~uVar12 >> 0x1f;
          uVar5 = 0;
          if ((int)uVar12 < (this->FreeSpans).ArrayNum) {
            uVar5 = uVar13;
          }
          if (uVar5 == 0) {
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              iVar6 = (*pcVar3)();
              return iVar6;
            }
          }
          FVar8 = (this->FreeSpans).AllocatorInstance.SecondaryData;
          iVar6 = (this->FreeSpans).ArrayNum;
          lVar11 = (longlong)(int)uVar12;
          if (FVar8 == (ForElementType<FGrowOnlySpanAllocator::FLinearAllocation>)0x0) {
            FVar8 = (ForElementType<FGrowOnlySpanAllocator::FLinearAllocation>)pTVar1;
          }
          uVar2 = *(undefined8 *)((longlong)FVar8 + lVar11 * 8);
          iVar7 = (int)((ulonglong)uVar2 >> 0x20);
          iVar10 = (int)uVar2;
          if (param_1 < iVar7) {
            uVar5 = 0;
            if ((int)uVar12 < iVar6) {
              uVar5 = uVar13;
            }
            if (uVar5 == 0) {
              bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar4) {
                pcVar3 = (code *)swi(3);
                iVar6 = (*pcVar3)();
                return iVar6;
              }
            }
            FVar8 = (this->FreeSpans).AllocatorInstance.SecondaryData;
            if (FVar8 == (ForElementType<FGrowOnlySpanAllocator::FLinearAllocation>)0x0) {
              FVar8 = (ForElementType<FGrowOnlySpanAllocator::FLinearAllocation>)pTVar1;
            }
            *(ulonglong *)((longlong)FVar8 + lVar11 * 8) =
                 CONCAT44(iVar7 - param_1,iVar10 + param_1);
            return iVar10;
          }
          uVar5 = 0;
          if ((int)uVar12 < iVar6) {
            uVar5 = uVar13;
          }
          if (uVar5 == 0) {
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              iVar6 = (*pcVar3)();
              return iVar6;
            }
          }
          FVar8 = (this->FreeSpans).AllocatorInstance.SecondaryData;
          iVar6 = (this->FreeSpans).ArrayNum;
          if (FVar8 == (ForElementType<FGrowOnlySpanAllocator::FLinearAllocation>)0x0) {
            FVar8 = (ForElementType<FGrowOnlySpanAllocator::FLinearAllocation>)pTVar1;
          }
          iVar7 = ~uVar12 + iVar6;
          if (1 < iVar7) {
            iVar7 = 1;
          }
          if (iVar7 != 0) {
            memmove((void *)((longlong)FVar8 + lVar11 * 8),
                    (void *)((longlong)FVar8 + (longlong)(iVar6 - iVar7) * 8),(longlong)iVar7 << 3);
          }
          iVar6 = (this->FreeSpans).ArrayNum + -1;
          (this->FreeSpans).ArrayNum = iVar6;
          UE::Core::Private::
          ReallocShrink<2,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::ForElementType<FGrowOnlySpanAllocator::FLinearAllocation>_>
                    (8,4,&pTVar1->AllocatorInstance,iVar6,&(this->FreeSpans).ArrayMax);
          return iVar10;
        }
        break;
      }
      uVar12 = uVar12 + 1;
      lVar11 = lVar11 + 8;
    } while ((int)uVar12 < (this->FreeSpans).ArrayNum);
  }
  iVar6 = this->MaxSize;
  this->MaxSize = iVar6 + param_1;
  return iVar6;
}

// BeginDeferMerges @ 147cd7f50

void __thiscall FGrowOnlySpanAllocator::BeginDeferMerges(FGrowOnlySpanAllocator *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->bDeferMerges == false) {
    this->bDeferMerges = true;
    return;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!bDeferMerges",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GrowOnlySpanAllocator.cpp"
                     ,0x6f,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this->bDeferMerges = true;
  return;
}

// EndDeferMerges @ 147cf26e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FGrowOnlySpanAllocator::EndDeferMerges(FGrowOnlySpanAllocator *this)

{
  TArray<FGrowOnlySpanAllocator::FLinearAllocation,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>_>
  *pTVar1;
  int *piVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  bool bVar15;
  int iVar16;
  ulonglong uVar17;
  uint uVar18;
  ForElementType<FGrowOnlySpanAllocator::FLinearAllocation> FVar19;
  ForElementType<FGrowOnlySpanAllocator::FLinearAllocation> FVar20;
  int iVar21;
  uint uVar22;
  longlong lVar23;
  undefined1 auStackY_118 [32];
  FIdentityFunctor local_c8 [8];
  undefined8 local_c0;
  ForElementType<FGrowOnlySpanAllocator::FLinearAllocation> local_b8;
  undefined8 uStack_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_118;
  if ((this->bDeferMerges == false) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("bDeferMerges",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GrowOnlySpanAllocator.cpp"
                          ,0x75,L""), bVar15)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pTVar1 = &this->FreeSpans;
  this->bDeferMerges = false;
  FVar19 = (this->FreeSpans).AllocatorInstance.SecondaryData;
  if (FVar19 == (ForElementType<FGrowOnlySpanAllocator::FLinearAllocation>)0x0) {
    FVar19 = (ForElementType<FGrowOnlySpanAllocator::FLinearAllocation>)pTVar1;
  }
  AlgoImpl::
  IntroSortInternal<FGrowOnlySpanAllocator::FLinearAllocation,int,FIdentityFunctor,TDereferenceWrapper<FGrowOnlySpanAllocator::FLinearAllocation,TLess<void>_>_>
            ((FLinearAllocation *)FVar19,(this->FreeSpans).ArrayNum,local_c8[0],
             (TLess<void> *)local_c8);
  uVar22 = (this->FreeSpans).ArrayNum;
  local_b8.SecondaryData = (ForElementType<FGrowOnlySpanAllocator::FLinearAllocation>)0x0;
  uStack_60 = (undefined1 *)CONCAT44(10,(int)uStack_60);
  if (-1 < (int)uVar22) {
    if ((int)uVar22 < 0xb) {
      uVar17 = 0;
      uStack_60 = &DAT_a00000000;
    }
    else {
      uStack_60 = &DAT_a00000000;
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::ForElementType<FGrowOnlySpanAllocator::FLinearAllocation>_>
                (8,4,uVar22,&local_b8,0,(int *)((longlong)&uStack_60 + 4));
      uVar17 = (ulonglong)uStack_60 & 0xffffffff;
    }
    uVar22 = 0;
    iVar21 = -1;
    if (0 < (this->FreeSpans).ArrayNum) {
      lVar23 = 0;
      do {
        uVar18 = 0;
        if ((int)uVar22 < (this->FreeSpans).ArrayNum) {
          uVar18 = ~uVar22 >> 0x1f;
        }
        iVar16 = (int)uVar17;
        if (uVar18 == 0) {
          bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar15) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          iVar16 = (int)uStack_60;
        }
        FVar19 = (this->FreeSpans).AllocatorInstance.SecondaryData;
        FVar20 = (ForElementType<FGrowOnlySpanAllocator::FLinearAllocation>)pTVar1;
        if (FVar19 != (ForElementType<FGrowOnlySpanAllocator::FLinearAllocation>)0x0) {
          FVar20 = FVar19;
        }
        local_c0 = *(undefined8 *)((longlong)FVar20 + lVar23);
        if (iVar21 == (int)local_c0) {
          uVar18 = 0;
          if ((int)(iVar16 - 1U) < iVar16) {
            uVar18 = ~(iVar16 - 1U) >> 0x1f;
          }
          if (uVar18 == 0) {
            bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar15) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            iVar16 = (int)uStack_60;
          }
          FVar19 = (ForElementType<FGrowOnlySpanAllocator::FLinearAllocation>)&local_b8;
          if (local_b8.SecondaryData !=
              (ForElementType<FGrowOnlySpanAllocator::FLinearAllocation>)0x0) {
            FVar19 = local_b8.SecondaryData;
          }
          piVar2 = (int *)((longlong)FVar19 + -4 + (longlong)iVar16 * 8);
          *piVar2 = *piVar2 + local_c0._4_4_;
        }
        else {
          FVar19 = (ForElementType<FGrowOnlySpanAllocator::FLinearAllocation>)&local_b8;
          if (local_b8.SecondaryData !=
              (ForElementType<FGrowOnlySpanAllocator::FLinearAllocation>)0x0) {
            FVar19 = local_b8.SecondaryData;
          }
          if ((ulonglong)FVar19 <= &local_c0) {
            FVar19 = (ForElementType<FGrowOnlySpanAllocator::FLinearAllocation>)&local_b8;
            if (local_b8.SecondaryData !=
                (ForElementType<FGrowOnlySpanAllocator::FLinearAllocation>)0x0) {
              FVar19 = local_b8.SecondaryData;
            }
            if (&local_c0 < (undefined8 *)((longlong)FVar19 + (longlong)uStack_60._4_4_ * 8)) {
              bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 );
              if (bVar15) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              iVar16 = (int)uStack_60;
            }
          }
          if (iVar16 == uStack_60._4_4_) {
            iVar16 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::ForElementType<FGrowOnlySpanAllocator::FLinearAllocation>_>
                               (0x408,&local_b8,(int *)((longlong)&uStack_60 + 4));
          }
          uStack_60 = (undefined1 *)CONCAT44(uStack_60._4_4_,iVar16 + 1);
          FVar19 = (ForElementType<FGrowOnlySpanAllocator::FLinearAllocation>)&local_b8;
          if (local_b8.SecondaryData !=
              (ForElementType<FGrowOnlySpanAllocator::FLinearAllocation>)0x0) {
            FVar19 = local_b8.SecondaryData;
          }
          *(undefined8 *)((longlong)FVar19 + (longlong)iVar16 * 8) = local_c0;
        }
        uVar17 = (ulonglong)(int)uStack_60;
        uVar18 = 0;
        if ((int)((int)uStack_60 - 1U) < (int)uStack_60) {
          uVar18 = ~((int)uStack_60 - 1U) >> 0x1f;
        }
        if (uVar18 == 0) {
          bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar15) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          uVar17 = (ulonglong)uStack_60 & 0xffffffff;
        }
        iVar21 = (int)uVar17;
        FVar19 = (ForElementType<FGrowOnlySpanAllocator::FLinearAllocation>)&local_b8;
        if (local_b8.SecondaryData != (ForElementType<FGrowOnlySpanAllocator::FLinearAllocation>)0x0
           ) {
          FVar19 = local_b8.SecondaryData;
        }
        uVar18 = 0;
        if ((int)(iVar21 - 1U) < iVar21) {
          uVar18 = ~(iVar21 - 1U) >> 0x1f;
        }
        if (uVar18 == 0) {
          bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar15) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          uVar17 = (ulonglong)uStack_60 & 0xffffffff;
        }
        FVar20 = (ForElementType<FGrowOnlySpanAllocator::FLinearAllocation>)&local_b8;
        if (local_b8.SecondaryData != (ForElementType<FGrowOnlySpanAllocator::FLinearAllocation>)0x0
           ) {
          FVar20 = local_b8.SecondaryData;
        }
        uVar22 = uVar22 + 1;
        lVar23 = lVar23 + 8;
        iVar21 = *(int *)((longlong)FVar20 + (longlong)((int)uVar17 + -1) * 8) +
                 *(int *)((longlong)FVar19 + -4 + (longlong)iVar21 * 8);
      } while ((int)uVar22 < (this->FreeSpans).ArrayNum);
    }
    FVar19 = (this->FreeSpans).AllocatorInstance.SecondaryData;
    uVar4._0_4_ = (this->FreeSpans).ArrayNum;
    uVar4._4_4_ = (this->FreeSpans).ArrayMax;
    uVar5 = *(undefined8 *)((this->FreeSpans).AllocatorInstance.InlineData + 0x40);
    uVar6 = *(undefined8 *)((this->FreeSpans).AllocatorInstance.InlineData + 0x48);
    uVar7 = *(undefined8 *)(pTVar1->AllocatorInstance).InlineData;
    uVar8 = *(undefined8 *)((this->FreeSpans).AllocatorInstance.InlineData + 8);
    uVar9 = *(undefined8 *)((this->FreeSpans).AllocatorInstance.InlineData + 0x10);
    uVar10 = *(undefined8 *)((this->FreeSpans).AllocatorInstance.InlineData + 0x18);
    uVar11 = *(undefined8 *)((this->FreeSpans).AllocatorInstance.InlineData + 0x20);
    uVar12 = *(undefined8 *)((this->FreeSpans).AllocatorInstance.InlineData + 0x28);
    uVar13 = *(undefined8 *)((this->FreeSpans).AllocatorInstance.InlineData + 0x30);
    uVar14 = *(undefined8 *)((this->FreeSpans).AllocatorInstance.InlineData + 0x38);
    *(undefined8 *)(pTVar1->AllocatorInstance).InlineData = local_b8.InlineData._0_8_;
    *(undefined8 *)((this->FreeSpans).AllocatorInstance.InlineData + 8) = local_b8.InlineData._8_8_;
    *(undefined8 *)((this->FreeSpans).AllocatorInstance.InlineData + 0x10) =
         local_b8.InlineData._16_8_;
    *(undefined8 *)((this->FreeSpans).AllocatorInstance.InlineData + 0x18) =
         local_b8.InlineData._24_8_;
    *(undefined8 *)((this->FreeSpans).AllocatorInstance.InlineData + 0x20) =
         local_b8.InlineData._32_8_;
    *(undefined8 *)((this->FreeSpans).AllocatorInstance.InlineData + 0x28) =
         local_b8.InlineData._40_8_;
    *(undefined8 *)((this->FreeSpans).AllocatorInstance.InlineData + 0x30) =
         local_b8.InlineData._48_8_;
    *(undefined8 *)((this->FreeSpans).AllocatorInstance.InlineData + 0x38) =
         local_b8.InlineData._56_8_;
    *(undefined8 *)((this->FreeSpans).AllocatorInstance.InlineData + 0x40) =
         local_b8.InlineData._64_8_;
    *(undefined8 *)((this->FreeSpans).AllocatorInstance.InlineData + 0x48) =
         local_b8.InlineData._72_8_;
    (this->FreeSpans).AllocatorInstance.SecondaryData = local_b8.SecondaryData;
    *(undefined1 **)&(this->FreeSpans).ArrayNum = uStack_60;
    if (FVar19 != (ForElementType<FGrowOnlySpanAllocator::FLinearAllocation>)0x0) {
      local_b8.InlineData._0_8_ = uVar7;
      local_b8.InlineData._8_8_ = uVar8;
      local_b8.InlineData._16_8_ = uVar9;
      local_b8.InlineData._24_8_ = uVar10;
      local_b8.InlineData._32_8_ = uVar11;
      local_b8.InlineData._40_8_ = uVar12;
      local_b8.InlineData._48_8_ = uVar13;
      local_b8.InlineData._56_8_ = uVar14;
      local_b8.InlineData._64_8_ = uVar5;
      local_b8.InlineData._72_8_ = uVar6;
      local_b8.SecondaryData = FVar19;
      uStack_60 = (undefined1 *)uVar4;
      FMemory::Free((void *)FVar19);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar22);
}

// Free @ 147cf7da0

void __thiscall FGrowOnlySpanAllocator::Free(FGrowOnlySpanAllocator *this,int param_1,int param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  ForElementType<FGrowOnlySpanAllocator::FLinearAllocation> FVar8;
  ForElementType<FGrowOnlySpanAllocator::FLinearAllocation> FVar9;
  ForElementType<FGrowOnlySpanAllocator::FLinearAllocation> FVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  int local_28;
  int iStack_24;
  
  if ((this->MaxSize < param_1 + param_2) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("BaseOffset + Num <= MaxSize",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GrowOnlySpanAllocator.cpp"
                         ,0x29,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FVar10 = (ForElementType<FGrowOnlySpanAllocator::FLinearAllocation>)&this->FreeSpans;
  local_28 = param_1;
  iStack_24 = param_2;
  if (this->bDeferMerges != false) {
    FVar8 = (this->FreeSpans).AllocatorInstance.SecondaryData;
    FVar9 = FVar8;
    if (FVar8 == (ForElementType<FGrowOnlySpanAllocator::FLinearAllocation>)0x0) {
      FVar9 = FVar10;
    }
    if ((ulonglong)FVar9 <= &local_28) {
      if (FVar8 == (ForElementType<FGrowOnlySpanAllocator::FLinearAllocation>)0x0) {
        FVar8 = FVar10;
      }
      if ((&local_28 < (int *)((longlong)FVar8 + (longlong)(this->FreeSpans).ArrayMax * 8)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    iVar4 = (this->FreeSpans).ArrayNum;
    piVar1 = &(this->FreeSpans).ArrayMax;
    if (iVar4 == *piVar1) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::ForElementType<FGrowOnlySpanAllocator::FLinearAllocation>_>
                        (0x408,(ForElementType<FGrowOnlySpanAllocator::FLinearAllocation> *)FVar10,
                         piVar1);
    }
    (this->FreeSpans).ArrayNum = iVar4 + 1;
    FVar8 = (this->FreeSpans).AllocatorInstance.SecondaryData;
    if (FVar8 == (ForElementType<FGrowOnlySpanAllocator::FLinearAllocation>)0x0) {
      FVar8 = FVar10;
    }
    *(ulonglong *)((longlong)FVar8 + (longlong)iVar4 * 8) = CONCAT44(iStack_24,local_28);
    return;
  }
  uVar12 = 0;
  uVar6 = 0xffffffff;
  uVar11 = 0xffffffff;
  if (0 < (this->FreeSpans).ArrayNum) {
    lVar13 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar12 < (this->FreeSpans).ArrayNum) {
        uVar5 = ~uVar12 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FVar8 = (this->FreeSpans).AllocatorInstance.SecondaryData;
      FVar9 = FVar10;
      if (FVar8 != (ForElementType<FGrowOnlySpanAllocator::FLinearAllocation>)0x0) {
        FVar9 = FVar8;
      }
      iVar4 = (int)*(undefined8 *)(lVar13 + (longlong)FVar9);
      if (iVar4 == iStack_24 + local_28) {
        uVar11 = uVar12;
      }
      if ((int)((ulonglong)*(undefined8 *)(lVar13 + (longlong)FVar9) >> 0x20) + iVar4 == local_28) {
        uVar6 = uVar12;
      }
      uVar12 = uVar12 + 1;
      lVar13 = lVar13 + 8;
    } while ((int)uVar12 < (this->FreeSpans).ArrayNum);
    if (uVar6 != 0xffffffff) {
      uVar12 = 0;
      if ((int)uVar6 < (this->FreeSpans).ArrayNum) {
        uVar12 = ~uVar6 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FVar8 = (this->FreeSpans).AllocatorInstance.SecondaryData;
      if (FVar8 == (ForElementType<FGrowOnlySpanAllocator::FLinearAllocation>)0x0) {
        FVar8 = FVar10;
      }
      lVar13 = (longlong)FVar8 + (longlong)(int)uVar6 * 8;
      piVar1 = (int *)(lVar13 + 4);
      *piVar1 = *piVar1 + iStack_24;
      if (uVar11 == 0xffffffff) {
        return;
      }
      uVar12 = ~uVar11 >> 0x1f;
      uVar6 = 0;
      if ((int)uVar11 < (this->FreeSpans).ArrayNum) {
        uVar6 = uVar12;
      }
      if ((uVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FVar8 = (this->FreeSpans).AllocatorInstance.SecondaryData;
      if (FVar8 == (ForElementType<FGrowOnlySpanAllocator::FLinearAllocation>)0x0) {
        FVar8 = FVar10;
      }
      piVar1 = (int *)(lVar13 + 4);
      *piVar1 = *piVar1 + (int)((ulonglong)
                                *(undefined8 *)((longlong)FVar8 + (longlong)(int)uVar11 * 8) >> 0x20
                               );
      uVar6 = 0;
      if ((int)uVar11 < (this->FreeSpans).ArrayNum) {
        uVar6 = uVar12;
      }
      if ((uVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FVar8 = (this->FreeSpans).AllocatorInstance.SecondaryData;
      iVar4 = (this->FreeSpans).ArrayNum;
      if (FVar8 == (ForElementType<FGrowOnlySpanAllocator::FLinearAllocation>)0x0) {
        FVar8 = FVar10;
      }
      iVar7 = ~uVar11 + iVar4;
      if (1 < iVar7) {
        iVar7 = 1;
      }
      if (iVar7 != 0) {
        memmove((void *)((longlong)FVar8 + (longlong)(int)uVar11 * 8),
                (void *)((longlong)FVar8 + (longlong)(iVar4 - iVar7) * 8),(longlong)iVar7 << 3);
      }
      iVar4 = (this->FreeSpans).ArrayNum + -1;
      (this->FreeSpans).ArrayNum = iVar4;
      UE::Core::Private::
      ReallocShrink<2,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::ForElementType<FGrowOnlySpanAllocator::FLinearAllocation>_>
                (8,4,(ForElementType<FGrowOnlySpanAllocator::FLinearAllocation> *)FVar10,iVar4,
                 &(this->FreeSpans).ArrayMax);
      return;
    }
    if (uVar11 != 0xffffffff) {
      uVar6 = 0;
      if ((int)uVar11 < (this->FreeSpans).ArrayNum) {
        uVar6 = ~uVar11 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FVar8 = (this->FreeSpans).AllocatorInstance.SecondaryData;
      if (FVar8 == (ForElementType<FGrowOnlySpanAllocator::FLinearAllocation>)0x0) {
        FVar8 = FVar10;
      }
      piVar1 = (int *)((longlong)FVar8 + (longlong)(int)uVar11 * 8);
      *piVar1 = local_28;
      piVar1 = piVar1 + 1;
      *piVar1 = *piVar1 + iStack_24;
      return;
    }
  }
  FVar8 = (this->FreeSpans).AllocatorInstance.SecondaryData;
  FVar9 = FVar8;
  if (FVar8 == (ForElementType<FGrowOnlySpanAllocator::FLinearAllocation>)0x0) {
    FVar9 = FVar10;
  }
  if ((ulonglong)FVar9 <= &local_28) {
    FVar9 = FVar10;
    if (FVar8 != (ForElementType<FGrowOnlySpanAllocator::FLinearAllocation>)0x0) {
      FVar9 = FVar8;
    }
    if ((&local_28 < (int *)((longlong)FVar9 + (longlong)(this->FreeSpans).ArrayMax * 8)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = (this->FreeSpans).ArrayNum;
  piVar1 = &(this->FreeSpans).ArrayMax;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::ForElementType<FGrowOnlySpanAllocator::FLinearAllocation>_>
                      (0x408,(ForElementType<FGrowOnlySpanAllocator::FLinearAllocation> *)FVar10,
                       piVar1);
    (this->FreeSpans).ArrayNum = iVar4;
  }
  (this->FreeSpans).ArrayNum = iVar4 + 1;
  FVar8 = (this->FreeSpans).AllocatorInstance.SecondaryData;
  if (FVar8 != (ForElementType<FGrowOnlySpanAllocator::FLinearAllocation>)0x0) {
    FVar10 = FVar8;
  }
  *(ulonglong *)((longlong)FVar10 + (longlong)iVar4 * 8) = CONCAT44(iStack_24,local_28);
  return;
}

// SearchFreeList @ 147d279d0

int __thiscall FGrowOnlySpanAllocator::SearchFreeList(FGrowOnlySpanAllocator *this,int param_1)

{
  ForElementType<FGrowOnlySpanAllocator::FLinearAllocation> FVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  ForElementType<FGrowOnlySpanAllocator::FLinearAllocation> FVar6;
  uint uVar7;
  longlong lVar8;
  
  uVar7 = 0;
  if (0 < (this->FreeSpans).ArrayNum) {
    lVar8 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar7 < (this->FreeSpans).ArrayNum) {
        uVar4 = ~uVar7 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        iVar5 = (*pcVar2)();
        return iVar5;
      }
      FVar1 = (this->FreeSpans).AllocatorInstance.SecondaryData;
      FVar6 = (ForElementType<FGrowOnlySpanAllocator::FLinearAllocation>)&this->FreeSpans;
      if (FVar1 != (ForElementType<FGrowOnlySpanAllocator::FLinearAllocation>)0x0) {
        FVar6 = FVar1;
      }
      if (param_1 <= (int)((ulonglong)*(undefined8 *)(lVar8 + (longlong)FVar6) >> 0x20)) {
        return uVar7;
      }
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 8;
    } while ((int)uVar7 < (this->FreeSpans).ArrayNum);
  }
  return -1;
}

