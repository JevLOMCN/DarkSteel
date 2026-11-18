// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// operator= @ 148447bb0

FSpanAllocator * __thiscall FSpanAllocator::operator=(FSpanAllocator *this,FSpanAllocator *param_1)

{
  ForElementType<FSpanAllocator::FLinearAllocation> FVar1;
  
  this->CurrentSize = param_1->CurrentSize;
  this->CurrentMaxSize = param_1->CurrentMaxSize;
  this->PeakMaxSize = param_1->PeakMaxSize;
  this->FirstNonEmptySpan = param_1->FirstNonEmptySpan;
  if (&this->FreeSpans != &param_1->FreeSpans) {
    if ((param_1->FreeSpans).AllocatorInstance.SecondaryData ==
        (ForElementType<FSpanAllocator::FLinearAllocation>)0x0) {
      memmove(&this->FreeSpans,&param_1->FreeSpans,0x50);
    }
    FVar1 = (this->FreeSpans).AllocatorInstance.SecondaryData;
    if (FVar1 != (ForElementType<FSpanAllocator::FLinearAllocation>)0x0) {
      FMemory::Free((void *)FVar1);
    }
    (this->FreeSpans).AllocatorInstance.SecondaryData =
         (param_1->FreeSpans).AllocatorInstance.SecondaryData;
    (param_1->FreeSpans).AllocatorInstance.SecondaryData =
         (ForElementType<FSpanAllocator::FLinearAllocation>)0x0;
    (this->FreeSpans).ArrayNum = (param_1->FreeSpans).ArrayNum;
    (this->FreeSpans).ArrayMax = (param_1->FreeSpans).ArrayMax;
    (param_1->FreeSpans).ArrayNum = 0;
    (param_1->FreeSpans).ArrayMax = 10;
  }
  if (&this->PendingFreeSpans != &param_1->PendingFreeSpans) {
    if ((param_1->PendingFreeSpans).AllocatorInstance.SecondaryData ==
        (ForElementType<FSpanAllocator::FLinearAllocation>)0x0) {
      memmove(&this->PendingFreeSpans,&param_1->PendingFreeSpans,0x50);
    }
    FVar1 = (this->PendingFreeSpans).AllocatorInstance.SecondaryData;
    if (FVar1 != (ForElementType<FSpanAllocator::FLinearAllocation>)0x0) {
      FMemory::Free((void *)FVar1);
    }
    (this->PendingFreeSpans).AllocatorInstance.SecondaryData =
         (param_1->PendingFreeSpans).AllocatorInstance.SecondaryData;
    (param_1->PendingFreeSpans).AllocatorInstance.SecondaryData =
         (ForElementType<FSpanAllocator::FLinearAllocation>)0x0;
    (this->PendingFreeSpans).ArrayNum = (param_1->PendingFreeSpans).ArrayNum;
    (this->PendingFreeSpans).ArrayMax = (param_1->PendingFreeSpans).ArrayMax;
    (param_1->PendingFreeSpans).ArrayNum = 0;
    (param_1->PendingFreeSpans).ArrayMax = 10;
  }
  this->bGrowOnly = param_1->bGrowOnly;
  return this;
}

// FSpanAllocator @ 148710c20

FSpanAllocator * __thiscall FSpanAllocator::FSpanAllocator(FSpanAllocator *this,bool param_1)

{
  (this->FreeSpans).AllocatorInstance.SecondaryData =
       (ForElementType<FSpanAllocator::FLinearAllocation>)0x0;
  this->CurrentSize = 0;
  this->CurrentMaxSize = 0;
  this->PeakMaxSize = 0;
  this->FirstNonEmptySpan = 0;
  (this->FreeSpans).ArrayNum = 0;
  (this->FreeSpans).ArrayMax = 10;
  (this->PendingFreeSpans).AllocatorInstance.SecondaryData =
       (ForElementType<FSpanAllocator::FLinearAllocation>)0x0;
  (this->PendingFreeSpans).ArrayNum = 0;
  (this->PendingFreeSpans).ArrayMax = 10;
  this->bGrowOnly = param_1;
  return this;
}

// Consolidate @ 14872cea0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FSpanAllocator::Consolidate(FSpanAllocator *this)

{
  TArray<FSpanAllocator::FLinearAllocation,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>_>
  *pTVar1;
  int *piVar2;
  void *_Dst;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  ForElementType<FSpanAllocator::FLinearAllocation> FVar6;
  ForElementType<FSpanAllocator::FLinearAllocation> FVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  int iVar12;
  ulonglong uVar13;
  int iVar14;
  undefined1 auStackY_108 [32];
  FIdentityFunctor local_b8 [8];
  undefined8 local_b0;
  ulonglong local_a8;
  longlong local_a0;
  ForElementType<FSpanAllocator::FLinearAllocation> local_98;
  int local_40;
  int local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_108;
  iVar14 = (this->PendingFreeSpans).ArrayNum;
  if ((iVar14 == 0) && (this->FirstNonEmptySpan == 0)) {
    return;
  }
  pTVar1 = &this->PendingFreeSpans;
  FVar6 = (this->PendingFreeSpans).AllocatorInstance.SecondaryData;
  if (FVar6 == (ForElementType<FSpanAllocator::FLinearAllocation>)0x0) {
    FVar6 = (ForElementType<FSpanAllocator::FLinearAllocation>)pTVar1;
  }
  AlgoImpl::
  IntroSortInternal<FSpanAllocator::FLinearAllocation,int,FIdentityFunctor,TDereferenceWrapper<FSpanAllocator::FLinearAllocation,TLess<void>_>_>
            ((FLinearAllocation *)FVar6,iVar14,local_b8[0],(TLess<void> *)local_b8);
  uVar8 = (this->FreeSpans).ArrayNum;
  local_98.SecondaryData = (ForElementType<FSpanAllocator::FLinearAllocation>)0x0;
  local_3c = 10;
  if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
  }
  local_40 = 0;
  if (10 < (int)uVar8) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::ForElementType<FSpanAllocator::FLinearAllocation>_>
              (8,4,uVar8,&local_98,0,&local_3c);
  }
  uVar9 = 0;
  iVar14 = -1;
  local_a0 = 0;
  local_a8 = 0;
  uVar11 = uVar9;
  uVar13 = uVar9;
  do {
    iVar12 = (int)uVar9;
    uVar8 = (uint)uVar13;
    if (iVar12 < (this->FreeSpans).ArrayNum) {
      if ((iVar12 < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FVar6 = (this->FreeSpans).AllocatorInstance.SecondaryData;
      FVar7 = (ForElementType<FSpanAllocator::FLinearAllocation>)&this->FreeSpans;
      if (FVar6 != (ForElementType<FSpanAllocator::FLinearAllocation>)0x0) {
        FVar7 = FVar6;
      }
      local_b0 = *(undefined8 *)(uVar11 + (longlong)FVar7);
    }
    else {
      if ((this->PendingFreeSpans).ArrayNum <= (int)uVar8) {
        if (local_40 != 0) {
          uVar8 = 0;
          if ((int)(local_40 - 1U) < local_40) {
            uVar8 = ~(local_40 - 1U) >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          lVar10 = (longlong)local_40;
          FVar6 = (ForElementType<FSpanAllocator::FLinearAllocation>)&local_98;
          if (local_98.SecondaryData != (ForElementType<FSpanAllocator::FLinearAllocation>)0x0) {
            FVar6 = local_98.SecondaryData;
          }
          uVar8 = 0;
          if ((int)(local_40 - 1U) < local_40) {
            uVar8 = ~(local_40 - 1U) >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          FVar7 = (ForElementType<FSpanAllocator::FLinearAllocation>)&local_98;
          if (local_98.SecondaryData != (ForElementType<FSpanAllocator::FLinearAllocation>)0x0) {
            FVar7 = local_98.SecondaryData;
          }
          uVar8 = local_40 - 1;
          if (*(int *)((longlong)FVar7 + 4U + (longlong)(int)uVar8 * 8) +
              *(int *)((longlong)FVar6 + lVar10 * 8 + -8) == this->CurrentMaxSize) {
            uVar5 = 0;
            if ((int)uVar8 < local_40) {
              uVar5 = ~uVar8 >> 0x1f;
            }
            if ((uVar5 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            FVar6 = (ForElementType<FSpanAllocator::FLinearAllocation>)&local_98;
            if (local_98.SecondaryData != (ForElementType<FSpanAllocator::FLinearAllocation>)0x0) {
              FVar6 = local_98.SecondaryData;
            }
            this->CurrentMaxSize =
                 this->CurrentMaxSize -
                 *(int *)((longlong)FVar6 + 4U + (longlong)(local_40 + -1) * 8);
            if ((local_40 < 1) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            FVar6 = (ForElementType<FSpanAllocator::FLinearAllocation>)&local_98;
            if (local_98.SecondaryData != (ForElementType<FSpanAllocator::FLinearAllocation>)0x0) {
              FVar6 = local_98.SecondaryData;
            }
            _Dst = (void *)((longlong)FVar6 + (longlong)(local_40 + -1) * 8);
            iVar14 = (local_40 - (local_40 + -1)) + -1;
            if (iVar14 != 0) {
              memmove(_Dst,(void *)((longlong)_Dst + 8),(longlong)iVar14 << 3);
            }
            local_40 = local_40 + -1;
          }
        }
        if (&this->FreeSpans !=
            (TArray<FSpanAllocator::FLinearAllocation,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>_>
             *)&local_98) {
          if (local_98.SecondaryData == (ForElementType<FSpanAllocator::FLinearAllocation>)0x0) {
            *(undefined8 *)(this->FreeSpans).AllocatorInstance.InlineData =
                 local_98.InlineData._0_8_;
            *(undefined8 *)((this->FreeSpans).AllocatorInstance.InlineData + 8) =
                 local_98.InlineData._8_8_;
            *(undefined8 *)((this->FreeSpans).AllocatorInstance.InlineData + 0x10) =
                 local_98.InlineData._16_8_;
            *(undefined8 *)((this->FreeSpans).AllocatorInstance.InlineData + 0x18) =
                 local_98.InlineData._24_8_;
            *(undefined8 *)((this->FreeSpans).AllocatorInstance.InlineData + 0x20) =
                 local_98.InlineData._32_8_;
            *(undefined8 *)((this->FreeSpans).AllocatorInstance.InlineData + 0x28) =
                 local_98.InlineData._40_8_;
            *(undefined8 *)((this->FreeSpans).AllocatorInstance.InlineData + 0x30) =
                 local_98.InlineData._48_8_;
            *(undefined8 *)((this->FreeSpans).AllocatorInstance.InlineData + 0x38) =
                 local_98.InlineData._56_8_;
            *(undefined8 *)((this->FreeSpans).AllocatorInstance.InlineData + 0x40) =
                 local_98.InlineData._64_8_;
            *(undefined8 *)((this->FreeSpans).AllocatorInstance.InlineData + 0x48) =
                 local_98.InlineData._72_8_;
          }
          FVar6 = (this->FreeSpans).AllocatorInstance.SecondaryData;
          if (FVar6 != (ForElementType<FSpanAllocator::FLinearAllocation>)0x0) {
            FMemory::Free((void *)FVar6);
          }
          (this->FreeSpans).AllocatorInstance.SecondaryData = local_98.SecondaryData;
          (this->FreeSpans).ArrayNum = local_40;
          (this->FreeSpans).ArrayMax = local_3c;
          local_3c = 10;
          local_98.SecondaryData = (ForElementType<FSpanAllocator::FLinearAllocation>)0x0;
          local_40 = 0;
        }
        uVar8 = (this->PendingFreeSpans).ArrayNum;
        if (-1 < (int)uVar8) {
          piVar2 = &(this->PendingFreeSpans).ArrayMax;
          (this->PendingFreeSpans).ArrayNum = 0;
          if (*piVar2 != uVar8) {
            UE::Core::Private::
            ReallocTo<2,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::ForElementType<FSpanAllocator::FLinearAllocation>_>
                      (8,4,uVar8,&(this->PendingFreeSpans).AllocatorInstance,0,piVar2);
          }
          this->FirstNonEmptySpan = 0;
          if (local_98.SecondaryData == (ForElementType<FSpanAllocator::FLinearAllocation>)0x0) {
            return;
          }
          FMemory::Free((void *)local_98.SecondaryData);
          return;
        }
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
      }
      local_b0 = 0x7fffffff;
    }
    if ((((this->PendingFreeSpans).ArrayNum <= (int)uVar8) && (0x7ffffffe < (int)local_b0)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("PendingFreeIndex < PendingFreeSpans.Num() || Alloc.StartOffset < ((int32) 0x7fffffff)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SpanAllocator.cpp"
                           ,0x52,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((int)uVar8 < (this->PendingFreeSpans).ArrayNum) {
      if (((int)uVar8 < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FVar6 = (this->PendingFreeSpans).AllocatorInstance.SecondaryData;
      FVar7 = (ForElementType<FSpanAllocator::FLinearAllocation>)pTVar1;
      if (FVar6 != (ForElementType<FSpanAllocator::FLinearAllocation>)0x0) {
        FVar7 = FVar6;
      }
      lVar10 = local_a0 * 8;
      uVar11 = local_a8;
      if ((int)local_b0 <= *(int *)(lVar10 + (longlong)FVar7)) goto LAB_14872d107;
      uVar5 = 0;
      if ((int)uVar8 < (this->PendingFreeSpans).ArrayNum) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FVar6 = (this->PendingFreeSpans).AllocatorInstance.SecondaryData;
      FVar7 = (ForElementType<FSpanAllocator::FLinearAllocation>)pTVar1;
      if (FVar6 != (ForElementType<FSpanAllocator::FLinearAllocation>)0x0) {
        FVar7 = FVar6;
      }
      uVar13 = (ulonglong)(uVar8 + 1);
      local_a0 = local_a0 + 1;
      local_b0 = *(undefined8 *)((longlong)FVar7 + lVar10);
    }
    else {
LAB_14872d107:
      uVar9 = (ulonglong)(iVar12 + 1);
      local_a8 = uVar11 + 8;
    }
    uVar11 = local_a8;
    if ((0x7ffffffe < (int)local_b0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Alloc.StartOffset < ((int32) 0x7fffffff)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SpanAllocator.cpp"
                           ,0x5d,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (0 < local_b0._4_4_) {
      if (iVar14 == (int)local_b0) {
        uVar8 = 0;
        if ((int)(local_40 - 1U) < local_40) {
          uVar8 = ~(local_40 - 1U) >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        FVar6 = (ForElementType<FSpanAllocator::FLinearAllocation>)&local_98;
        if (local_98.SecondaryData != (ForElementType<FSpanAllocator::FLinearAllocation>)0x0) {
          FVar6 = local_98.SecondaryData;
        }
        piVar2 = (int *)((longlong)FVar6 + (longlong)local_40 * 8 + -4);
        *piVar2 = *piVar2 + local_b0._4_4_;
      }
      else {
        FVar6 = (ForElementType<FSpanAllocator::FLinearAllocation>)&local_98;
        if (local_98.SecondaryData != (ForElementType<FSpanAllocator::FLinearAllocation>)0x0) {
          FVar6 = local_98.SecondaryData;
        }
        if ((ulonglong)FVar6 <= &local_b0) {
          FVar6 = (ForElementType<FSpanAllocator::FLinearAllocation>)&local_98;
          if (local_98.SecondaryData != (ForElementType<FSpanAllocator::FLinearAllocation>)0x0) {
            FVar6 = local_98.SecondaryData;
          }
          if ((&local_b0 < (undefined8 *)((longlong)FVar6 + (longlong)local_3c * 8)) &&
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
        }
        if (local_40 == local_3c) {
          local_40 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::ForElementType<FSpanAllocator::FLinearAllocation>_>
                               (0x408,&local_98,&local_3c);
        }
        lVar10 = (longlong)local_40;
        FVar6 = (ForElementType<FSpanAllocator::FLinearAllocation>)&local_98;
        if (local_98.SecondaryData != (ForElementType<FSpanAllocator::FLinearAllocation>)0x0) {
          FVar6 = local_98.SecondaryData;
        }
        local_40 = local_40 + 1;
        *(undefined8 *)((longlong)FVar6 + lVar10 * 8) = local_b0;
      }
      uVar8 = 0;
      if ((int)(local_40 - 1U) < local_40) {
        uVar8 = ~(local_40 - 1U) >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar10 = (longlong)local_40;
      FVar6 = (ForElementType<FSpanAllocator::FLinearAllocation>)&local_98;
      if (local_98.SecondaryData != (ForElementType<FSpanAllocator::FLinearAllocation>)0x0) {
        FVar6 = local_98.SecondaryData;
      }
      uVar8 = 0;
      if ((int)(local_40 - 1U) < local_40) {
        uVar8 = ~(local_40 - 1U) >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FVar7 = (ForElementType<FSpanAllocator::FLinearAllocation>)&local_98;
      if (local_98.SecondaryData != (ForElementType<FSpanAllocator::FLinearAllocation>)0x0) {
        FVar7 = local_98.SecondaryData;
      }
      iVar14 = *(int *)(((longlong)FVar6 - 4U) + lVar10 * 8) +
               *(int *)((longlong)FVar7 + (longlong)(local_40 + -1) * 8);
      uVar11 = local_a8;
    }
  } while( true );
}

// Empty @ 148730a60

void __thiscall FSpanAllocator::Empty(FSpanAllocator *this)

{
  int *piVar1;
  
  this->CurrentSize = 0;
  this->CurrentMaxSize = 0;
  piVar1 = &(this->FreeSpans).ArrayMax;
  this->PeakMaxSize = 0;
  this->FirstNonEmptySpan = 0;
  (this->FreeSpans).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::ForElementType<FSpanAllocator::FLinearAllocation>_>
              (8,4,0,&(this->FreeSpans).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->PendingFreeSpans).ArrayMax;
  (this->PendingFreeSpans).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::ForElementType<FSpanAllocator::FLinearAllocation>_>
              (8,4,0,&(this->PendingFreeSpans).AllocatorInstance,0,piVar1);
  }
  return;
}

// IsFree @ 14874b500

bool __thiscall FSpanAllocator::IsFree(FSpanAllocator *this,int param_1)

{
  ForElementType<FSpanAllocator::FLinearAllocation> FVar1;
  int iVar2;
  ForElementType<FSpanAllocator::FLinearAllocation> FVar3;
  undefined1 local_res10 [8];
  
  if (param_1 < this->CurrentMaxSize) {
    FVar3 = (this->FreeSpans).AllocatorInstance.SecondaryData;
    iVar2 = (this->FreeSpans).ArrayNum;
    if (FVar3 == (ForElementType<FSpanAllocator::FLinearAllocation>)0x0) {
      FVar3 = (ForElementType<FSpanAllocator::FLinearAllocation>)&this->FreeSpans;
    }
    FVar1 = (ForElementType<FSpanAllocator::FLinearAllocation>)
            ((longlong)FVar3 + (longlong)iVar2 * 8);
    while( true ) {
      if ((this->FreeSpans).ArrayNum != iVar2) {
        `TCheckedPointerIterator<FSpanAllocator::FLinearAllocation_const_,int,0>::operator!='::__l2
        ::<lambda_1>::operator()(local_res10);
      }
      if (FVar3 == FVar1) {
        return false;
      }
      if ((*(int *)FVar3 <= param_1) && (param_1 < *(int *)FVar3 + *(int *)((longlong)FVar3 + 4)))
      break;
      FVar3 = (ForElementType<FSpanAllocator::FLinearAllocation>)((longlong)FVar3 + 8);
    }
  }
  return true;
}

// Reset @ 1487549d0

void __thiscall FSpanAllocator::Reset(FSpanAllocator *this)

{
  int *piVar1;
  
  this->CurrentSize = 0;
  this->CurrentMaxSize = 0;
  this->PeakMaxSize = 0;
  this->FirstNonEmptySpan = 0;
  piVar1 = &(this->FreeSpans).ArrayMax;
  (this->FreeSpans).ArrayNum = 0;
  if (*piVar1 < 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::ForElementType<FSpanAllocator::FLinearAllocation>_>
              (8,4,0,&(this->FreeSpans).AllocatorInstance,0,piVar1);
  }
  (this->PendingFreeSpans).ArrayNum = 0;
  if ((this->PendingFreeSpans).ArrayMax < 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::ForElementType<FSpanAllocator::FLinearAllocation>_>
              (8,4,0,&(this->PendingFreeSpans).AllocatorInstance,0,
               &(this->PendingFreeSpans).ArrayMax);
  }
  return;
}

// SearchFreeList @ 148755fd0

int __thiscall FSpanAllocator::SearchFreeList(FSpanAllocator *this,int param_1,int param_2)

{
  ForElementType<FSpanAllocator::FLinearAllocation> FVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  ForElementType<FSpanAllocator::FLinearAllocation> FVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  
  uVar8 = (ulonglong)param_2;
  if (param_2 < (this->FreeSpans).ArrayNum) {
    lVar9 = uVar8 * 8;
    do {
      uVar7 = (uint)uVar8;
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
      FVar6 = (ForElementType<FSpanAllocator::FLinearAllocation>)&this->FreeSpans;
      if (FVar1 != (ForElementType<FSpanAllocator::FLinearAllocation>)0x0) {
        FVar6 = FVar1;
      }
      if (param_1 <= (int)((ulonglong)*(undefined8 *)(lVar9 + (longlong)FVar6) >> 0x20)) {
        return uVar7;
      }
      uVar8 = (ulonglong)(uVar7 + 1);
      lVar9 = lVar9 + 8;
    } while ((int)(uVar7 + 1) < (this->FreeSpans).ArrayNum);
  }
  return -1;
}

