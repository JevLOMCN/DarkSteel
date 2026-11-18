// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 13

// FCamelCaseBreakIterator @ 1416d41d0

FCamelCaseBreakIterator * __thiscall
FCamelCaseBreakIterator::FCamelCaseBreakIterator(FCamelCaseBreakIterator *this)

{
  TArray<int,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FCamelCaseBreakIterator *pFVar5;
  ForElementType<int> FVar6;
  undefined4 local_18 [4];
  
  pTVar1 = &this->BreakPoints;
  (this->InternalString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->_padding_ = (longlong)&___7FCamelCaseBreakIterator__6B_;
  (this->InternalString).Data.ArrayNum = 0;
  (this->InternalString).Data.ArrayMax = 0;
  (this->String).DataPtr = (wchar_t *)0x0;
  (this->String).Size = 0;
  this->CurrentPosition = 0;
  (this->BreakPoints).AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
  (this->BreakPoints).ArrayNum = 0;
  (this->BreakPoints).ArrayMax = 0x20;
  local_18[0] = 0;
  if ((pTVar1 <= local_18) && (local_18 < &(this->BreakPoints).AllocatorInstance.SecondaryData)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FCamelCaseBreakIterator *)(*pcVar2)();
      return pFVar5;
    }
  }
  iVar4 = (this->BreakPoints).ArrayNum;
  if (iVar4 == (this->BreakPoints).ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                      (0x404,&pTVar1->AllocatorInstance,&(this->BreakPoints).ArrayMax);
  }
  (this->BreakPoints).ArrayNum = iVar4 + 1;
  FVar6 = (this->BreakPoints).AllocatorInstance.SecondaryData;
  if (FVar6 == (ForElementType<int>)0x0) {
    FVar6 = (ForElementType<int>)pTVar1;
  }
  *(undefined4 *)((longlong)FVar6 + (longlong)iVar4 * 4) = local_18[0];
  return this;
}

// operator() @ 1416dbcd0

void __thiscall
`FCamelCaseBreakIterator::PopulateBreakPointsArray'::__l2::<lambda_1>::operator()
          (void *this,int param_1)

{
  ForElementType<int> *pFVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  ForElementType<int> *pFVar8;
  uint uVar9;
  int local_res10 [2];
  
  lVar2 = *(longlong *)this;
  uVar9 = *(int *)(lVar2 + 0xb8) - 1;
  uVar5 = 0;
  if ((int)uVar9 < *(int *)(lVar2 + 0xb8)) {
    uVar5 = ~uVar9 >> 0x1f;
  }
  local_res10[0] = param_1;
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  lVar7 = *(longlong *)(lVar2 + 0xb0);
  if (*(longlong *)(lVar2 + 0xb0) == 0) {
    lVar7 = lVar2 + 0x30;
  }
  if (*(int *)(lVar7 + -4 + (longlong)*(int *)(lVar2 + 0xb8) * 4) < local_res10[0]) {
    lVar2 = *(longlong *)this;
    pFVar1 = (ForElementType<int> *)(lVar2 + 0x30);
    pFVar8 = *(ForElementType<int> **)(lVar2 + 0xb0);
    if (*(ForElementType<int> **)(lVar2 + 0xb0) == (ForElementType<int> *)0x0) {
      pFVar8 = pFVar1;
    }
    if ((pFVar8 <= (ForElementType<int> *)local_res10) &&
       (local_res10 < pFVar8->InlineData + (longlong)*(int *)(lVar2 + 0xbc) * 4)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar6 = *(int *)(lVar2 + 0xb8);
    if (iVar6 == *(int *)(lVar2 + 0xbc)) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                        (0x404,pFVar1,(int *)(lVar2 + 0xbc));
    }
    *(int *)(lVar2 + 0xb8) = iVar6 + 1;
    pFVar8 = *(ForElementType<int> **)(lVar2 + 0xb0);
    if (*(ForElementType<int> **)(lVar2 + 0xb0) == (ForElementType<int> *)0x0) {
      pFVar8 = pFVar1;
    }
    *(int *)(pFVar8->InlineData + (longlong)iVar6 * 4) = local_res10[0];
  }
  return;
}

// GetCurrentPosition @ 1416f6120

int __thiscall FCamelCaseBreakIterator::GetCurrentPosition(FCamelCaseBreakIterator *this)

{
  return this->CurrentPosition;
}

// MoveToCandidateAfter @ 141705330

int __thiscall
FCamelCaseBreakIterator::MoveToCandidateAfter(FCamelCaseBreakIterator *this,int param_1)

{
  ForElementType<int> FVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  ForElementType<int> FVar6;
  uint uVar7;
  longlong lVar8;
  
  uVar7 = 0;
  this->CurrentPosition = param_1;
  if (0 < (this->BreakPoints).ArrayNum) {
    lVar8 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar7 < (this->BreakPoints).ArrayNum) {
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
      FVar1 = (this->BreakPoints).AllocatorInstance.SecondaryData;
      FVar6 = (ForElementType<int>)&this->BreakPoints;
      if (FVar1 != (ForElementType<int>)0x0) {
        FVar6 = FVar1;
      }
      if (param_1 < *(int *)(lVar8 + (longlong)FVar6)) {
        this->CurrentPosition = *(int *)(lVar8 + (longlong)FVar6);
        break;
      }
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 4;
    } while ((int)uVar7 < (this->BreakPoints).ArrayNum);
  }
  iVar5 = this->CurrentPosition;
  if (iVar5 <= param_1) {
    iVar5 = -1;
  }
  return iVar5;
}

// MoveToCandidateBefore @ 141705490

int __thiscall
FCamelCaseBreakIterator::MoveToCandidateBefore(FCamelCaseBreakIterator *this,int param_1)

{
  ForElementType<int> FVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  ForElementType<int> FVar6;
  uint uVar7;
  longlong lVar8;
  
  uVar7 = (this->BreakPoints).ArrayNum - 1;
  this->CurrentPosition = param_1;
  if (-1 < (int)uVar7) {
    lVar8 = (longlong)(int)uVar7 * 4;
    do {
      uVar4 = 0;
      if ((int)uVar7 < (this->BreakPoints).ArrayNum) {
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
      FVar1 = (this->BreakPoints).AllocatorInstance.SecondaryData;
      FVar6 = (ForElementType<int>)&this->BreakPoints;
      if (FVar1 != (ForElementType<int>)0x0) {
        FVar6 = FVar1;
      }
      if (*(int *)(lVar8 + (longlong)FVar6) < param_1) {
        this->CurrentPosition = *(int *)(lVar8 + (longlong)FVar6);
        break;
      }
      lVar8 = lVar8 + -4;
      uVar7 = uVar7 - 1;
    } while (-1 < (int)uVar7);
  }
  iVar5 = this->CurrentPosition;
  if (param_1 <= iVar5) {
    iVar5 = -1;
  }
  return iVar5;
}

// MoveToNext @ 1417055f0

int __thiscall FCamelCaseBreakIterator::MoveToNext(FCamelCaseBreakIterator *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001417055f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (**(code **)(this->_padding_ + 0x88))(this,this->CurrentPosition);
  return iVar1;
}

// MoveToPrevious @ 141705750

int __thiscall FCamelCaseBreakIterator::MoveToPrevious(FCamelCaseBreakIterator *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000141705756. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (**(code **)(this->_padding_ + 0x80))(this,this->CurrentPosition);
  return iVar1;
}

// PopulateBreakPointsArray @ 141708090

void __thiscall
FCamelCaseBreakIterator::PopulateBreakPointsArray
          (FCamelCaseBreakIterator *this,
          TArray<FCamelCaseBreakIterator::FToken,TSizedInlineAllocator<1024,32,TSizedDefaultAllocator<32>_>_>
          *param_1)

{
  TArray<int,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_> *pTVar1;
  int *piVar2;
  byte bVar3;
  ForElementType<FCamelCaseBreakIterator::FToken> FVar4;
  code *pcVar5;
  FCamelCaseBreakIterator *pFVar6;
  FCamelCaseBreakIterator *pFVar7;
  bool bVar8;
  int iVar9;
  ForElementType<int> FVar10;
  ForElementType<int> FVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  ForElementType<FCamelCaseBreakIterator::FToken> FVar15;
  byte bVar16;
  ForElementType<int> FVar17;
  uint uVar18;
  longlong lVar19;
  ForElementType<FCamelCaseBreakIterator::FToken> FVar20;
  FCamelCaseBreakIterator *local_res8;
  int local_38 [2];
  undefined4 local_30 [2];
  
  uVar18 = param_1->ArrayNum;
  pTVar1 = &this->BreakPoints;
  if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
  }
  piVar2 = &(this->BreakPoints).ArrayMax;
  (this->BreakPoints).ArrayNum = 0;
  uVar13 = *piVar2;
  if (uVar13 != uVar18) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
              (4,4,uVar18,&pTVar1->AllocatorInstance,0,piVar2);
    uVar13 = (this->BreakPoints).ArrayMax;
  }
  FVar10 = (this->BreakPoints).AllocatorInstance.SecondaryData;
  local_30[0] = 0;
  FVar11 = FVar10;
  if (FVar10 == (ForElementType<int>)0x0) {
    FVar11 = (ForElementType<int>)pTVar1;
  }
  if ((ulonglong)FVar11 <= local_30) {
    if (FVar10 == (ForElementType<int>)0x0) {
      FVar10 = (ForElementType<int>)pTVar1;
    }
    if ((local_30 < (undefined4 *)((longlong)FVar10 + (longlong)(int)uVar13 * 4)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar9 = (this->BreakPoints).ArrayNum;
  if (iVar9 == *piVar2) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                      (0x404,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->BreakPoints).ArrayNum = iVar9 + 1;
  FVar10 = (this->BreakPoints).AllocatorInstance.SecondaryData;
  if (FVar10 == (ForElementType<int>)0x0) {
    FVar10 = (ForElementType<int>)pTVar1;
  }
  uVar18 = 0;
  bVar16 = 4;
  *(undefined4 *)((longlong)FVar10 + (longlong)iVar9 * 4) = local_30[0];
  iVar9 = param_1->ArrayNum;
  local_res8 = this;
  if (0 < iVar9) {
    lVar19 = 0;
    do {
      uVar13 = 0;
      if ((int)uVar18 < iVar9) {
        uVar13 = ~uVar18 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FVar4 = (param_1->AllocatorInstance).SecondaryData;
      FVar20 = (ForElementType<FCamelCaseBreakIterator::FToken>)param_1;
      if (FVar4 != (ForElementType<FCamelCaseBreakIterator::FToken>)0x0) {
        FVar20 = FVar4;
      }
      bVar3 = *(byte *)((longlong)FVar20 + lVar19 * 8);
      if (bVar3 == 3) {
        `FCamelCaseBreakIterator::PopulateBreakPointsArray'::__l2::<lambda_1>::operator()
                  (&local_res8,*(int *)((uchar *)((longlong)FVar20 + 4) + lVar19 * 8));
        break;
      }
      if (((2 < bVar16) || ((bVar3 == 2) == (bVar16 == 2))) && (bVar16 != bVar3)) {
        if ((bVar16 == 0) && (bVar3 == 1)) {
          iVar9 = 1;
          lVar12 = 1;
        }
        else {
          iVar9 = 0;
          lVar12 = 0;
        }
        uVar13 = uVar18 - iVar9;
        if (0 < (int)uVar13) {
          uVar14 = 0;
          if ((int)uVar13 < param_1->ArrayNum) {
            uVar14 = ~uVar13 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          FVar4 = (param_1->AllocatorInstance).SecondaryData;
          FVar15 = (ForElementType<FCamelCaseBreakIterator::FToken>)param_1;
          if (FVar4 != (ForElementType<FCamelCaseBreakIterator::FToken>)0x0) {
            FVar15 = FVar4;
          }
          `FCamelCaseBreakIterator::PopulateBreakPointsArray'::__l2::<lambda_1>::operator()
                    (&local_res8,*(int *)((uchar *)((longlong)FVar15 + 4) + (lVar19 - lVar12) * 8));
        }
      }
      pFVar6 = local_res8;
      if (*(char *)((longlong)FVar20 + lVar19 * 8) == '\x04') {
        local_38[0] = *(int *)((uchar *)((longlong)FVar20 + 4) + lVar19 * 8);
        FVar10 = (ForElementType<int>)&local_res8->BreakPoints;
        piVar2 = &(local_res8->BreakPoints).ArrayNum;
        iVar9 = *piVar2;
        uVar14 = iVar9 - 1;
        uVar13 = 0;
        if ((int)uVar14 < iVar9) {
          uVar13 = ~uVar14 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar7 = local_res8;
        FVar11 = (pFVar6->BreakPoints).AllocatorInstance.SecondaryData;
        if (FVar11 != (ForElementType<int>)0x0) {
          FVar10 = FVar11;
        }
        if (((int *)((longlong)FVar10 + -4))[*piVar2] < local_38[0]) {
          FVar17 = (ForElementType<int>)&local_res8->BreakPoints;
          FVar10 = (local_res8->BreakPoints).AllocatorInstance.SecondaryData;
          FVar11 = FVar17;
          if (FVar10 != (ForElementType<int>)0x0) {
            FVar11 = FVar10;
          }
          if ((ulonglong)FVar11 <= local_38) {
            FVar11 = FVar17;
            if (FVar10 != (ForElementType<int>)0x0) {
              FVar11 = FVar10;
            }
            if ((local_38 <
                 (int *)((longlong)FVar11 + (longlong)(local_res8->BreakPoints).ArrayMax * 4)) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar8)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
          iVar9 = (pFVar7->BreakPoints).ArrayNum;
          piVar2 = &(pFVar7->BreakPoints).ArrayMax;
          if (iVar9 == *piVar2) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                              (0x404,(ForElementType<int> *)FVar17,piVar2);
          }
          (pFVar7->BreakPoints).ArrayNum = iVar9 + 1;
          FVar10 = (pFVar7->BreakPoints).AllocatorInstance.SecondaryData;
          if (FVar10 != (ForElementType<int>)0x0) {
            FVar17 = FVar10;
          }
          *(int *)((longlong)FVar17 + (longlong)iVar9 * 4) = local_38[0];
        }
      }
      bVar16 = *(byte *)((longlong)FVar20 + lVar19 * 8);
      uVar18 = uVar18 + 1;
      iVar9 = param_1->ArrayNum;
      lVar19 = lVar19 + 1;
    } while ((int)uVar18 < iVar9);
  }
  if (((this->BreakPoints).ArrayNum == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("BreakPoints.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\CamelCaseBreakIterator.cpp"
                         ,0x9c,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  return;
}

// ResetToBeginning @ 14170dc60

int __thiscall FCamelCaseBreakIterator::ResetToBeginning(FCamelCaseBreakIterator *this)

{
  this->CurrentPosition = 0;
  return 0;
}

// ResetToEnd @ 14170dd20

int __thiscall FCamelCaseBreakIterator::ResetToEnd(FCamelCaseBreakIterator *this)

{
  int iVar1;
  
  iVar1 = (this->String).Size;
  this->CurrentPosition = iVar1;
  return iVar1;
}

// SetString @ 1417119d0

void __thiscall FCamelCaseBreakIterator::SetString(FCamelCaseBreakIterator *this,FString *param_1)

{
  FString *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  undefined4 uStack_c;
  
  pFVar1 = &this->InternalString;
  if (pFVar1 != param_1) {
    pFVar3 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar1->Data).AllocatorInstance.Data = (param_1->Data).AllocatorInstance.Data;
    (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->InternalString).Data.ArrayNum = (param_1->Data).ArrayNum;
    (this->InternalString).Data.ArrayMax = (param_1->Data).ArrayMax;
    (param_1->Data).ArrayNum = 0;
    (param_1->Data).ArrayMax = 0;
  }
  iVar2 = (this->InternalString).Data.ArrayNum;
  iVar4 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar4 = 0;
  }
  (this->String).DataPtr = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  *(ulonglong *)&(this->String).Size = CONCAT44(uStack_c,iVar4);
  UpdateBreakPointsArray(this);
                    /* WARNING: Could not recover jumptable at 0x000141711a5d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x60))(this);
  return;
}

// SetStringRef @ 141711df0

void __thiscall
FCamelCaseBreakIterator::SetStringRef(FCamelCaseBreakIterator *this,TStringView<wchar_t> *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  ::FString::Reset(&this->InternalString,0);
  iVar1 = param_1->Size;
  uVar2 = *(undefined4 *)&param_1->field_0xc;
  (this->String).DataPtr = param_1->DataPtr;
  (this->String).Size = iVar1;
  *(undefined4 *)&(this->String).field_0xc = uVar2;
  UpdateBreakPointsArray(this);
                    /* WARNING: Could not recover jumptable at 0x000141711e2a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x60))(this);
  return;
}

// UpdateBreakPointsArray @ 141719b20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FCamelCaseBreakIterator::UpdateBreakPointsArray(FCamelCaseBreakIterator *this)

{
  undefined1 auStack_2048 [32];
  TArray<FCamelCaseBreakIterator::FToken,TSizedInlineAllocator<1024,32,TSizedDefaultAllocator<32>_>_>
  local_2028;
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x141719b2c;
  local_18 = __security_cookie.value ^ (ulonglong)auStack_2048;
  local_2028.ArrayMax = 0x400;
  local_2028.AllocatorInstance.SecondaryData = (ForElementType<FCamelCaseBreakIterator::FToken>)0x0;
  local_2028.ArrayNum = 0;
  (**(code **)(this->_padding_ + 0x90))(this,&local_2028);
  PopulateBreakPointsArray(this,&local_2028);
  if (local_2028.AllocatorInstance.SecondaryData !=
      (ForElementType<FCamelCaseBreakIterator::FToken>)0x0) {
    FMemory::Free((void *)local_2028.AllocatorInstance.SecondaryData);
  }
  return;
}

