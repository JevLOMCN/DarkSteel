// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 15

// operator== @ 149d358b0

bool __thiscall
PCGIndexing::FPCGIndexCollection::operator==(FPCGIndexCollection *this,FPCGIndexCollection *param_1)

{
  int iVar1;
  bool bVar2;
  ForElementType<PCGIndexing::FPCGIndexRange> FVar3;
  ForElementType<PCGIndexing::FPCGIndexRange> FVar4;
  
  if (this->ArraySize == param_1->ArraySize) {
    iVar1 = (this->IndexRanges).ArrayNum;
    if (iVar1 == (param_1->IndexRanges).ArrayNum) {
      FVar4 = (param_1->IndexRanges).AllocatorInstance.SecondaryData;
      FVar3 = (this->IndexRanges).AllocatorInstance.SecondaryData;
      if (FVar4 == (ForElementType<PCGIndexing::FPCGIndexRange>)0x0) {
        FVar4 = (ForElementType<PCGIndexing::FPCGIndexRange>)&param_1->IndexRanges;
      }
      if (FVar3 == (ForElementType<PCGIndexing::FPCGIndexRange>)0x0) {
        FVar3 = (ForElementType<PCGIndexing::FPCGIndexRange>)&this->IndexRanges;
      }
      bVar2 = CompareItems<PCGIndexing::FPCGIndexRange,int>
                        ((FPCGIndexRange *)FVar3,(FPCGIndexRange *)FVar4,iVar1);
      if (bVar2) {
        return true;
      }
    }
  }
  return false;
}

// operator+= @ 149d3a4b0

FPCGIndexCollection * __thiscall
PCGIndexing::FPCGIndexCollection::operator+=(FPCGIndexCollection *this,FPCGIndexCollection *param_1)

{
  ForElementType<PCGIndexing::FPCGIndexRange> FVar1;
  ForElementType<PCGIndexing::FPCGIndexRange> FVar2;
  int iVar3;
  undefined1 local_res8 [8];
  
  iVar3 = param_1->ArraySize;
  if (param_1->ArraySize < this->ArraySize) {
    iVar3 = this->ArraySize;
  }
  this->ArraySize = iVar3;
  FVar2 = (param_1->IndexRanges).AllocatorInstance.SecondaryData;
  iVar3 = (param_1->IndexRanges).ArrayNum;
  if (FVar2 == (ForElementType<PCGIndexing::FPCGIndexRange>)0x0) {
    FVar2 = (ForElementType<PCGIndexing::FPCGIndexRange>)&param_1->IndexRanges;
  }
  FVar1 = (ForElementType<PCGIndexing::FPCGIndexRange>)((longlong)FVar2 + (longlong)iVar3 * 8);
  while( true ) {
    if ((param_1->IndexRanges).ArrayNum != iVar3) {
      `TCheckedPointerIterator<PCGIndexing::FPCGIndexRange_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (FVar2 == FVar1) break;
    AddRange(this,*(int *)FVar2,*(int *)((longlong)FVar2 + 4));
    FVar2 = (ForElementType<PCGIndexing::FPCGIndexRange>)((longlong)FVar2 + 8);
  }
  return this;
}

// AddRange @ 149d3bcb0

bool __thiscall
PCGIndexing::FPCGIndexCollection::AddRange(FPCGIndexCollection *this,FPCGIndexRange *param_1)

{
  bool bVar1;
  
  bVar1 = AddRange(this,param_1->StartIndex,param_1->EndIndex);
  return bVar1;
}

// AddRange @ 149d3bcd0

bool __thiscall
PCGIndexing::FPCGIndexCollection::AddRange(FPCGIndexCollection *this,int param_1,int param_2)

{
  TArray<PCGIndexing::FPCGIndexRange,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>_>
  *pTVar1;
  int *piVar2;
  FPCGIndexRange *pFVar3;
  FPCGIndexRange *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  ForElementType<PCGIndexing::FPCGIndexRange> FVar11;
  ForElementType<PCGIndexing::FPCGIndexRange> FVar12;
  ForElementType<PCGIndexing::FPCGIndexRange> FVar13;
  int iVar14;
  void *pvVar15;
  uint uVar16;
  uint uVar17;
  longlong lVar18;
  uint uVar19;
  int local_48;
  int iStack_44;
  
  iVar8 = this->ArraySize;
  if (iVar8 < 1) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4003492527322693598>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Helpers\\Parsing\\PCGIndexing.cpp"
                       ,0x22,"IsValid()");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
  }
  else {
    local_48 = iVar8;
    if (param_1 < 0) {
      if (iVar8 + param_1 < iVar8) {
        local_48 = iVar8 + param_1;
      }
    }
    else if (param_1 < iVar8) {
      local_48 = param_1;
    }
    iVar14 = iVar8;
    if (param_2 < 0) {
      if (iVar8 + param_2 < iVar8) {
        iVar14 = iVar8 + param_2;
      }
    }
    else if (param_2 < iVar8) {
      iVar14 = param_2;
    }
    iStack_44 = iVar14 + 1;
    if (iVar14 != local_48) {
      iStack_44 = iVar14;
    }
    if ((((-1 < local_48) && (local_48 <= iVar8)) && (-1 < iStack_44)) &&
       ((iStack_44 <= iVar8 && (local_48 < iStack_44)))) {
      pTVar1 = &this->IndexRanges;
      iVar8 = (this->IndexRanges).ArrayNum;
      if (iVar8 == 0) {
        FVar11 = (this->IndexRanges).AllocatorInstance.SecondaryData;
        if (FVar11 == (ForElementType<PCGIndexing::FPCGIndexRange>)0x0) {
          FVar11 = (ForElementType<PCGIndexing::FPCGIndexRange>)pTVar1;
        }
        if ((((ulonglong)FVar11 <= &local_48) &&
            (&local_48 < (int *)((longlong)FVar11 + (longlong)(this->IndexRanges).ArrayMax * 8))) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        iVar8 = (this->IndexRanges).ArrayNum;
        piVar2 = &(this->IndexRanges).ArrayMax;
        if (iVar8 == *piVar2) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<PCGIndexing::FPCGIndexRange>_>
                            (0x408,&pTVar1->AllocatorInstance,piVar2);
        }
        (this->IndexRanges).ArrayNum = iVar8 + 1;
        FVar11 = (this->IndexRanges).AllocatorInstance.SecondaryData;
        if (FVar11 == (ForElementType<PCGIndexing::FPCGIndexRange>)0x0) {
          FVar11 = (ForElementType<PCGIndexing::FPCGIndexRange>)pTVar1;
        }
        *(ulonglong *)((longlong)FVar11 + (longlong)iVar8 * 8) = CONCAT44(iStack_44,local_48);
        return true;
      }
      uVar16 = 0;
      if (0 < iVar8) {
        lVar18 = 0;
        do {
          uVar9 = 0;
          if ((int)uVar16 < (this->IndexRanges).ArrayNum) {
            uVar9 = ~uVar16 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
          FVar11 = (this->IndexRanges).AllocatorInstance.SecondaryData;
          FVar13 = (ForElementType<PCGIndexing::FPCGIndexRange>)pTVar1;
          if (FVar11 != (ForElementType<PCGIndexing::FPCGIndexRange>)0x0) {
            FVar13 = FVar11;
          }
          if (local_48 <= *(int *)((longlong)FVar13 + lVar18 * 8)) break;
          uVar16 = uVar16 + 1;
          lVar18 = lVar18 + 1;
        } while (lVar18 < iVar8);
      }
      FVar11 = (this->IndexRanges).AllocatorInstance.SecondaryData;
      if (FVar11 == (ForElementType<PCGIndexing::FPCGIndexRange>)0x0) {
        FVar11 = (ForElementType<PCGIndexing::FPCGIndexRange>)pTVar1;
      }
      if ((((ulonglong)FVar11 <= &local_48) &&
          (&local_48 < (int *)((longlong)FVar11 + (longlong)(this->IndexRanges).ArrayMax * 8))) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      iVar8 = (this->IndexRanges).ArrayNum;
      if (iVar8 == (this->IndexRanges).ArrayMax) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<PCGIndexing::FPCGIndexRange>_>
                          (0x408,&pTVar1->AllocatorInstance,&(this->IndexRanges).ArrayMax);
      }
      (this->IndexRanges).ArrayNum = iVar8 + 1;
      FVar11 = (this->IndexRanges).AllocatorInstance.SecondaryData;
      if (FVar11 == (ForElementType<PCGIndexing::FPCGIndexRange>)0x0) {
        FVar11 = (ForElementType<PCGIndexing::FPCGIndexRange>)pTVar1;
      }
      pvVar15 = (void *)((longlong)FVar11 + (longlong)(int)uVar16 * 8);
      memmove((void *)((longlong)pvVar15 + 8),pvVar15,(longlong)(int)(iVar8 - uVar16) << 3);
      FVar11 = (this->IndexRanges).AllocatorInstance.SecondaryData;
      if (FVar11 == (ForElementType<PCGIndexing::FPCGIndexRange>)0x0) {
        FVar11 = (ForElementType<PCGIndexing::FPCGIndexRange>)pTVar1;
      }
      *(ulonglong *)((longlong)FVar11 + (longlong)(int)uVar16 * 8) = CONCAT44(iStack_44,local_48);
      uVar9 = 0;
      if (0 < (int)(uVar16 - 1)) {
        uVar9 = uVar16 - 1;
      }
      lVar18 = (longlong)(int)uVar9;
      uVar16 = uVar9 + 1;
      uVar19 = ~uVar16 >> 0x1f;
      uVar17 = ~uVar9 >> 0x1f;
      do {
        uVar10 = 0;
        if ((int)uVar16 < (this->IndexRanges).ArrayNum) {
          uVar10 = uVar19;
        }
        if ((uVar10 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        FVar11 = (this->IndexRanges).AllocatorInstance.SecondaryData;
        FVar13 = (ForElementType<PCGIndexing::FPCGIndexRange>)pTVar1;
        if (FVar11 != (ForElementType<PCGIndexing::FPCGIndexRange>)0x0) {
          FVar13 = FVar11;
        }
        uVar10 = 0;
        if ((int)uVar9 < (this->IndexRanges).ArrayNum) {
          uVar10 = uVar17;
        }
        if ((uVar10 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        FVar11 = (this->IndexRanges).AllocatorInstance.SecondaryData;
        FVar12 = (ForElementType<PCGIndexing::FPCGIndexRange>)pTVar1;
        if (FVar11 != (ForElementType<PCGIndexing::FPCGIndexRange>)0x0) {
          FVar12 = FVar11;
        }
        bVar6 = CheckOverlap(this,(FPCGIndexRange *)((longlong)FVar12 + lVar18 * 8),
                             (FPCGIndexRange *)((longlong)FVar13 + (lVar18 + 1) * 8));
        if (!bVar6) {
          return true;
        }
        uVar10 = 0;
        if ((int)uVar16 < (this->IndexRanges).ArrayNum) {
          uVar10 = uVar19;
        }
        if ((uVar10 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        FVar11 = (this->IndexRanges).AllocatorInstance.SecondaryData;
        FVar13 = (ForElementType<PCGIndexing::FPCGIndexRange>)pTVar1;
        if (FVar11 != (ForElementType<PCGIndexing::FPCGIndexRange>)0x0) {
          FVar13 = FVar11;
        }
        pFVar3 = (FPCGIndexRange *)((longlong)FVar13 + (lVar18 + 1) * 8);
        uVar10 = 0;
        if ((int)uVar9 < (this->IndexRanges).ArrayNum) {
          uVar10 = uVar17;
        }
        if ((uVar10 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        FVar11 = (this->IndexRanges).AllocatorInstance.SecondaryData;
        FVar13 = (ForElementType<PCGIndexing::FPCGIndexRange>)pTVar1;
        if (FVar11 != (ForElementType<PCGIndexing::FPCGIndexRange>)0x0) {
          FVar13 = FVar11;
        }
        pFVar4 = (FPCGIndexRange *)((longlong)FVar13 + lVar18 * 8);
        bVar6 = CheckOverlap(this,pFVar4,pFVar3);
        if ((!bVar6) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("CheckOverlap(FirstRange, SecondRange)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Helpers\\Parsing\\PCGIndexing.cpp"
                               ,0xb7,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        iVar8 = pFVar3->EndIndex;
        if (pFVar3->EndIndex < pFVar4->EndIndex) {
          iVar8 = pFVar4->EndIndex;
        }
        iVar14 = pFVar3->StartIndex;
        if (pFVar4->StartIndex < pFVar3->StartIndex) {
          iVar14 = pFVar4->StartIndex;
        }
        uVar10 = 0;
        if ((int)uVar9 < (this->IndexRanges).ArrayNum) {
          uVar10 = uVar17;
        }
        if ((uVar10 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        FVar11 = (this->IndexRanges).AllocatorInstance.SecondaryData;
        FVar13 = (ForElementType<PCGIndexing::FPCGIndexRange>)pTVar1;
        if (FVar11 != (ForElementType<PCGIndexing::FPCGIndexRange>)0x0) {
          FVar13 = FVar11;
        }
        *(ulonglong *)((longlong)FVar13 + lVar18 * 8) = CONCAT44(iVar8,iVar14);
        uVar10 = 0;
        if ((int)uVar16 < (this->IndexRanges).ArrayNum) {
          uVar10 = uVar19;
        }
        if ((uVar10 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        FVar11 = (this->IndexRanges).AllocatorInstance.SecondaryData;
        FVar13 = (ForElementType<PCGIndexing::FPCGIndexRange>)pTVar1;
        if (FVar11 != (ForElementType<PCGIndexing::FPCGIndexRange>)0x0) {
          FVar13 = FVar11;
        }
        pvVar15 = (void *)((longlong)FVar13 + (lVar18 + 1) * 8);
        iVar8 = ~uVar16 + (this->IndexRanges).ArrayNum;
        if (iVar8 != 0) {
          memmove(pvVar15,(void *)((longlong)pvVar15 + 8),(longlong)iVar8 << 3);
        }
        piVar2 = &(this->IndexRanges).ArrayNum;
        *piVar2 = *piVar2 + -1;
        UE::Core::Private::
        ReallocShrink<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<PCGIndexing::FPCGIndexRange>_>
                  (8,4,&pTVar1->AllocatorInstance,(this->IndexRanges).ArrayNum,
                   &(this->IndexRanges).ArrayMax);
      } while ((int)uVar16 < (this->IndexRanges).ArrayNum);
      return true;
    }
  }
  return false;
}

// AdjustIndicesAndCreateRange @ 149d3c670

FPCGIndexRange __thiscall
PCGIndexing::FPCGIndexCollection::AdjustIndicesAndCreateRange
          (FPCGIndexCollection *this,int param_1,int param_2)

{
  int iVar1;
  FPCGIndexRange FVar2;
  FPCGIndexRange FVar3;
  int iVar4;
  int iVar5;
  int in_register_00000014;
  int in_R9D;
  
  iVar1 = this->ArraySize;
  iVar5 = iVar1;
  if (param_2 < 0) {
    if (iVar1 + param_2 < iVar1) {
      iVar5 = iVar1 + param_2;
    }
  }
  else if (param_2 < iVar1) {
    iVar5 = param_2;
  }
  if (in_R9D < 0) {
    *(int *)CONCAT44(in_register_00000014,param_1) = iVar5;
    if (iVar1 + in_R9D < iVar1) {
      iVar1 = iVar1 + in_R9D;
    }
    iVar4 = iVar1 + 1;
    if (iVar1 != iVar5) {
      iVar4 = iVar1;
    }
    *(int *)(CONCAT44(in_register_00000014,param_1) + 4) = iVar4;
    FVar3.EndIndex = in_register_00000014;
    FVar3.StartIndex = param_1;
    return FVar3;
  }
  *(int *)CONCAT44(in_register_00000014,param_1) = iVar5;
  if (in_R9D < iVar1) {
    iVar1 = in_R9D;
  }
  iVar4 = iVar1 + 1;
  if (iVar1 != iVar5) {
    iVar4 = iVar1;
  }
  *(int *)(CONCAT44(in_register_00000014,param_1) + 4) = iVar4;
  FVar2.EndIndex = in_register_00000014;
  FVar2.StartIndex = param_1;
  return FVar2;
}

// CheckOverlap @ 149d40110

bool __thiscall
PCGIndexing::FPCGIndexCollection::CheckOverlap
          (FPCGIndexCollection *this,FPCGIndexRange *param_1,FPCGIndexRange *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  
  iVar1 = this->ArraySize;
  if (((((((iVar1 < 1) || (iVar2 = param_1->StartIndex, iVar2 < 0)) || (iVar1 < iVar2)) ||
        ((iVar3 = param_1->EndIndex, iVar3 < 0 || (iVar1 < iVar3)))) ||
       ((iVar3 <= iVar2 || ((iVar2 = param_2->StartIndex, iVar2 < 0 || (iVar1 < iVar2)))))) ||
      ((iVar3 = param_2->EndIndex, iVar3 < 0 || ((iVar1 < iVar3 || (iVar3 <= iVar2)))))) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("RangeIsValid(FirstRange) && RangeIsValid(SecondRange)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Helpers\\Parsing\\PCGIndexing.cpp"
                         ,0xaf,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  if ((param_1->StartIndex <= param_2->EndIndex) && (param_2->StartIndex <= param_1->EndIndex)) {
    return true;
  }
  return false;
}

// ContainsIndex @ 149d420d0

bool __thiscall
PCGIndexing::FPCGIndexCollection::ContainsIndex(FPCGIndexCollection *this,int param_1)

{
  ForElementType<PCGIndexing::FPCGIndexRange> FVar1;
  int iVar2;
  bool bVar3;
  ForElementType<PCGIndexing::FPCGIndexRange> FVar4;
  undefined1 local_res8 [8];
  
  if (this->ArraySize < 1) {
LAB_149d42130:
    bVar3 = false;
  }
  else {
    FVar4 = (this->IndexRanges).AllocatorInstance.SecondaryData;
    iVar2 = (this->IndexRanges).ArrayNum;
    if (FVar4 == (ForElementType<PCGIndexing::FPCGIndexRange>)0x0) {
      FVar4 = (ForElementType<PCGIndexing::FPCGIndexRange>)&this->IndexRanges;
    }
    FVar1 = (ForElementType<PCGIndexing::FPCGIndexRange>)((longlong)FVar4 + (longlong)iVar2 * 8);
    while( true ) {
      if ((this->IndexRanges).ArrayNum != iVar2) {
        `TCheckedPointerIterator<PCGIndexing::FPCGIndexRange_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (FVar4 == FVar1) goto LAB_149d42130;
      if ((*(int *)FVar4 <= param_1) && (param_1 < *(int *)((longlong)FVar4 + 4))) break;
      FVar4 = (ForElementType<PCGIndexing::FPCGIndexRange>)((longlong)FVar4 + 8);
    }
    bVar3 = true;
  }
  return bVar3;
}

// GetArraySize @ 149d4e5e0

int __thiscall PCGIndexing::FPCGIndexCollection::GetArraySize(FPCGIndexCollection *this)

{
  return this->ArraySize;
}

// GetTotalIndexCount @ 149d55a80

int __thiscall PCGIndexing::FPCGIndexCollection::GetTotalIndexCount(FPCGIndexCollection *this)

{
  ForElementType<PCGIndexing::FPCGIndexRange> FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ForElementType<PCGIndexing::FPCGIndexRange> FVar7;
  int iVar8;
  undefined1 local_res8 [8];
  
  FVar7 = (this->IndexRanges).AllocatorInstance.SecondaryData;
  iVar4 = (this->IndexRanges).ArrayNum;
  iVar8 = 0;
  if (FVar7 == (ForElementType<PCGIndexing::FPCGIndexRange>)0x0) {
    FVar7 = (ForElementType<PCGIndexing::FPCGIndexRange>)&this->IndexRanges;
  }
  FVar1 = (ForElementType<PCGIndexing::FPCGIndexRange>)((longlong)FVar7 + (longlong)iVar4 * 8);
  while( true ) {
    if ((this->IndexRanges).ArrayNum != iVar4) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<PCGIndexing::FPCGIndexRange_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (FVar7 == FVar1) break;
    iVar6 = *(int *)((longlong)FVar7 + 4) - *(int *)FVar7;
    iVar5 = 0;
    if (0 < iVar6) {
      iVar5 = iVar6;
    }
    if (iVar5 < 1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Range.GetIndexCount() > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Helpers\\Parsing\\PCGIndexing.cpp"
                         ,0x83,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        iVar4 = (*pcVar2)();
        return iVar4;
      }
    }
    iVar6 = *(int *)((longlong)FVar7 + 4) - *(int *)FVar7;
    iVar5 = 0;
    if (0 < iVar6) {
      iVar5 = iVar6;
    }
    iVar8 = iVar8 + iVar5;
    FVar7 = (ForElementType<PCGIndexing::FPCGIndexRange>)((longlong)FVar7 + 8);
  }
  return iVar8;
}

// GetTotalRangeCount @ 149d55b40

int __thiscall PCGIndexing::FPCGIndexCollection::GetTotalRangeCount(FPCGIndexCollection *this)

{
  return (this->IndexRanges).ArrayNum;
}

// IsEmpty @ 149d57c80

bool __thiscall PCGIndexing::FPCGIndexCollection::IsEmpty(FPCGIndexCollection *this)

{
  return (this->IndexRanges).ArrayNum == 0;
}

// IsValid @ 149d57ee0

bool __thiscall PCGIndexing::FPCGIndexCollection::IsValid(FPCGIndexCollection *this)

{
  return 0 < this->ArraySize;
}

// MergeRanges @ 149d59a20

FPCGIndexRange __thiscall
PCGIndexing::FPCGIndexCollection::MergeRanges
          (FPCGIndexCollection *this,FPCGIndexRange *param_1,FPCGIndexRange *param_2)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  FPCGIndexRange FVar6;
  FPCGIndexRange *in_R9;
  
  bVar5 = CheckOverlap(this,param_2,in_R9);
  if (!bVar5) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("CheckOverlap(FirstRange, SecondRange)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Helpers\\Parsing\\PCGIndexing.cpp"
                       ,0xb7,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      FVar6 = (FPCGIndexRange)(*pcVar3)();
      return FVar6;
    }
  }
  iVar2 = in_R9->EndIndex;
  iVar4 = in_R9->StartIndex;
  if (param_2->StartIndex < in_R9->StartIndex) {
    iVar4 = param_2->StartIndex;
  }
  iVar1 = param_2->EndIndex;
  param_1->StartIndex = iVar4;
  if (iVar2 < iVar1) {
    iVar2 = param_2->EndIndex;
  }
  param_1->EndIndex = iVar2;
  return (FPCGIndexRange)param_1;
}

// RangeIsValid @ 149d607d0

bool __thiscall
PCGIndexing::FPCGIndexCollection::RangeIsValid(FPCGIndexCollection *this,FPCGIndexRange *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = this->ArraySize;
  if ((((0 < iVar1) && (iVar2 = param_1->StartIndex, -1 < iVar2)) && (iVar2 <= iVar1)) &&
     (((iVar3 = param_1->EndIndex, -1 < iVar3 && (iVar3 <= iVar1)) && (iVar2 < iVar3)))) {
    return true;
  }
  return false;
}

// operator= @ 14a019250

FPCGIndexCollection * __thiscall
PCGIndexing::FPCGIndexCollection::operator=(FPCGIndexCollection *this,FPCGIndexCollection *param_1)

{
  ForElementType<PCGIndexing::FPCGIndexRange> FVar1;
  
  this->ArraySize = param_1->ArraySize;
  if (&this->IndexRanges != &param_1->IndexRanges) {
    if ((param_1->IndexRanges).AllocatorInstance.SecondaryData ==
        (ForElementType<PCGIndexing::FPCGIndexRange>)0x0) {
      memmove(&this->IndexRanges,&param_1->IndexRanges,0x200);
    }
    FVar1 = (this->IndexRanges).AllocatorInstance.SecondaryData;
    if (FVar1 != (ForElementType<PCGIndexing::FPCGIndexRange>)0x0) {
      FMemory::Free((void *)FVar1);
    }
    (this->IndexRanges).AllocatorInstance.SecondaryData =
         (param_1->IndexRanges).AllocatorInstance.SecondaryData;
    (param_1->IndexRanges).AllocatorInstance.SecondaryData =
         (ForElementType<PCGIndexing::FPCGIndexRange>)0x0;
    (this->IndexRanges).ArrayNum = (param_1->IndexRanges).ArrayNum;
    (this->IndexRanges).ArrayMax = (param_1->IndexRanges).ArrayMax;
    (param_1->IndexRanges).ArrayNum = 0;
    (param_1->IndexRanges).ArrayMax = 0x40;
  }
  return this;
}

