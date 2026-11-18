// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 14

// FBitArrayTest @ 141b1a9e0

FBitArrayTest * __thiscall FBitArrayTest::FBitArrayTest(FBitArrayTest *this)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  wchar_t *pwVar2;
  uchar *puVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  ForElementType<unsigned_int> FVar7;
  uint uVar8;
  
  this->NumGrowingTrue = 10;
  (this->ArrGrowingTrue).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  this->bGrowingTrue[0] = true;
  this->bGrowingTrue[1] = false;
  this->bGrowingTrue[2] = true;
  this->bGrowingTrue[3] = true;
  this->bGrowingTrue[4] = false;
  this->bGrowingTrue[5] = true;
  this->bGrowingTrue[6] = true;
  this->bGrowingTrue[7] = true;
  this->bGrowingTrue[8] = false;
  this->bGrowingTrue[9] = true;
  this->GrowingTrueInt = 0x2ed;
  (this->ArrGrowingTrue).NumBits = 10;
  (this->ArrGrowingTrue).MaxBits = 0x80;
  (this->ArrGrowingTrue).AllocatorInstance.InlineData[0] = 0xff;
  (this->ArrGrowingTrue).AllocatorInstance.InlineData[1] = 0xff;
  (this->ArrGrowingTrue).AllocatorInstance.InlineData[2] = 0xff;
  (this->ArrGrowingTrue).AllocatorInstance.InlineData[3] = 0xff;
  iVar6 = (this->ArrGrowingTrue).NumBits;
  uVar8 = iVar6 >> 0x1f & 0x1f;
  uVar5 = iVar6 + uVar8;
  iVar6 = (uVar5 & 0x1f) - uVar8;
  if (iVar6 != 0) {
    puVar3 = (this->ArrGrowingTrue).AllocatorInstance.InlineData + (longlong)((int)uVar5 >> 5) * 4;
    *(uint *)puVar3 = *(uint *)puVar3 & 0xffffffffU >> (-(char)iVar6 & 0x1fU);
  }
  this->NumSquareWave = 0xc;
  (this->ArrSquareWave).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  (this->ArrSquareWave).NumBits = 0xc;
  (this->ArrSquareWave).MaxBits = 0x80;
  (this->ArrSquareWave).AllocatorInstance.InlineData[0] = 0xff;
  (this->ArrSquareWave).AllocatorInstance.InlineData[1] = 0xff;
  (this->ArrSquareWave).AllocatorInstance.InlineData[2] = 0xff;
  (this->ArrSquareWave).AllocatorInstance.InlineData[3] = 0xff;
  iVar6 = (this->ArrSquareWave).NumBits;
  uVar8 = iVar6 >> 0x1f & 0x1f;
  uVar5 = iVar6 + uVar8;
  iVar6 = (uVar5 & 0x1f) - uVar8;
  if (iVar6 != 0) {
    puVar3 = (this->ArrSquareWave).AllocatorInstance.InlineData + (longlong)((int)uVar5 >> 5) * 4;
    *(uint *)puVar3 = *(uint *)puVar3 & 0xffffffffU >> (-(char)iVar6 & 0x1fU);
  }
  (this->ArrTrue).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  (this->ArrTrue).NumBits = 10;
  (this->ArrTrue).MaxBits = 0x80;
  (this->ArrTrue).AllocatorInstance.InlineData[0] = 0xff;
  (this->ArrTrue).AllocatorInstance.InlineData[1] = 0xff;
  (this->ArrTrue).AllocatorInstance.InlineData[2] = 0xff;
  (this->ArrTrue).AllocatorInstance.InlineData[3] = 0xff;
  iVar6 = (this->ArrTrue).NumBits;
  uVar8 = iVar6 >> 0x1f & 0x1f;
  uVar5 = iVar6 + uVar8;
  iVar6 = (uVar5 & 0x1f) - uVar8;
  if (iVar6 != 0) {
    puVar3 = (this->ArrTrue).AllocatorInstance.InlineData + (longlong)((int)uVar5 >> 5) * 4;
    *(uint *)puVar3 = *(uint *)puVar3 & 0xffffffffU >> (-(char)iVar6 & 0x1fU);
  }
  pTVar1 = &this->ArrFalse;
  (this->ArrFalse).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  (this->ArrFalse).NumBits = 10;
  (this->ArrFalse).MaxBits = 0x80;
  (pTVar1->AllocatorInstance).InlineData[0] = '\0';
  (pTVar1->AllocatorInstance).InlineData[1] = '\0';
  (pTVar1->AllocatorInstance).InlineData[2] = '\0';
  (pTVar1->AllocatorInstance).InlineData[3] = '\0';
  iVar6 = (this->ArrFalse).NumBits;
  uVar8 = iVar6 >> 0x1f & 0x1f;
  uVar5 = iVar6 + uVar8;
  iVar6 = (uVar5 & 0x1f) - uVar8;
  if (iVar6 != 0) {
    puVar3 = (pTVar1->AllocatorInstance).InlineData + (longlong)((int)uVar5 >> 5) * 4;
    *(uint *)puVar3 = *(uint *)puVar3 & 0xffffffffU >> (-(char)iVar6 & 0x1fU);
  }
  pTVar1 = &this->ArrGrowingTrueTwice;
  iVar6 = this->NumGrowingTrue * 2;
  (this->ArrGrowingTrueTwice).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  (this->ArrGrowingTrueTwice).MaxBits = 0x80;
  (this->ArrGrowingTrueTwice).NumBits = iVar6;
  uVar5 = iVar6 + 0x1f;
  uVar8 = uVar5 >> 5;
  if (uVar5 >> 5 != 0) {
    if (4 < uVar8) {
      TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
      ResizeAllocation(&pTVar1->AllocatorInstance,0,uVar8,4);
      (this->ArrGrowingTrueTwice).MaxBits = uVar8 << 5;
    }
    FVar7 = (this->ArrGrowingTrueTwice).AllocatorInstance.SecondaryData;
    if (FVar7 == (ForElementType<unsigned_int>)0x0) {
      FVar7 = (ForElementType<unsigned_int>)pTVar1;
    }
    if (uVar8 < 9) {
      iVar6 = -1;
    }
    else {
      iVar6 = 0xff;
    }
    memset((void *)FVar7,iVar6,(ulonglong)uVar8 << 2);
    iVar6 = (this->ArrGrowingTrueTwice).NumBits;
    uVar8 = iVar6 >> 0x1f & 0x1f;
    uVar5 = iVar6 + uVar8;
    iVar6 = (uVar5 & 0x1f) - uVar8;
    if (iVar6 != 0) {
      FVar7 = (this->ArrGrowingTrueTwice).AllocatorInstance.SecondaryData;
      if (FVar7 == (ForElementType<unsigned_int>)0x0) {
        FVar7 = (ForElementType<unsigned_int>)pTVar1;
      }
      puVar4 = (uint *)((longlong)FVar7 + (longlong)((int)uVar5 >> 5) * 4);
      *puVar4 = *puVar4 & 0xffffffffU >> (0x20U - (char)iVar6 & 0x1f);
    }
  }
  pwVar2 = (this->Label).StringBuffer;
  (this->Label)._padding_ = (longlong)pwVar2;
  (this->Label)._padding_ = (longlong)pwVar2;
  (this->Label)._padding_ = (longlong)(this + 1);
  *(undefined2 *)&(this->Label)._padding_ = 0;
  return this;
}

// ConstructAndTestConstructors @ 141b3b550

bool __thiscall FBitArrayTest::ConstructAndTestConstructors(FBitArrayTest *this)

{
  longlong lVar1;
  int *piVar2;
  TBitArray<FDefaultBitArrayAllocator> *pTVar3;
  ForElementType<unsigned_int> FVar4;
  FAutomationTestBase *pFVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  FAutomationTestFramework *pFVar13;
  ForElementType<unsigned_int> FVar14;
  uint uVar15;
  uint uVar16;
  FBitArrayTest *pFVar17;
  int *piVar18;
  uint uVar19;
  int iVar20;
  byte local_res10;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  TBitArray<FDefaultBitArrayAllocator>::CheckInvariants(&this->ArrTrue);
  if ((this->ArrTrue).NumBits == 10) {
    TBitArray<FDefaultBitArrayAllocator>::CheckInvariants(&this->ArrFalse);
    if ((this->ArrFalse).NumBits == 10) {
      bVar7 = false;
      goto LAB_141b3b64d;
    }
  }
  else {
    pFVar13 = FAutomationTestFramework::Get();
    pFVar5 = pFVar13->CurrentTest;
    pcVar6 = *(code **)(pFVar5->_padding_ + 0x28);
    ::FString::FString(&local_98,L"ArrTrue Size");
    (*pcVar6)(pFVar5,&local_98,0);
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    TBitArray<FDefaultBitArrayAllocator>::CheckInvariants(&this->ArrFalse);
  }
  bVar7 = true;
  if ((this->ArrFalse).NumBits != 10) {
    pFVar13 = FAutomationTestFramework::Get();
    pFVar5 = pFVar13->CurrentTest;
    pcVar6 = *(code **)(pFVar5->_padding_ + 0x28);
    ::FString::FString(&local_88,L"ArrFalse Size");
    (*pcVar6)(pFVar5,&local_88,0);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
  }
LAB_141b3b64d:
  uVar16 = 0;
  uVar19 = 1;
  do {
    if (bVar7) {
LAB_141b3b6a9:
      bVar7 = true;
    }
    else {
      if (((this->ArrTrue).NumBits <= (int)uVar16) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return (bool)uVar8;
      }
      FVar4 = (this->ArrTrue).AllocatorInstance.SecondaryData;
      FVar14 = (ForElementType<unsigned_int>)&this->ArrTrue;
      if (FVar4 != (ForElementType<unsigned_int>)0x0) {
        FVar14 = FVar4;
      }
      if ((*(uint *)((longlong)FVar14 + (ulonglong)(uVar16 >> 5) * 4) & uVar19) == 0)
      goto LAB_141b3b6a9;
      bVar7 = false;
    }
    if (((this->ArrTrue).NumBits <= (int)uVar16) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return (bool)uVar8;
    }
    FVar4 = (this->ArrTrue).AllocatorInstance.SecondaryData;
    FVar14 = (ForElementType<unsigned_int>)&this->ArrTrue;
    if (FVar4 != (ForElementType<unsigned_int>)0x0) {
      FVar14 = FVar4;
    }
    if ((*(uint *)((longlong)FVar14 + (ulonglong)(uVar16 >> 5) * 4) & uVar19) == 0) {
      pFVar13 = FAutomationTestFramework::Get();
      pFVar5 = pFVar13->CurrentTest;
      pcVar6 = *(code **)(pFVar5->_padding_ + 0x28);
      ::FString::FString(&local_78,L"ArrTrue elements");
      (*pcVar6)(pFVar5,&local_78,0);
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
    }
    if (bVar7) {
LAB_141b3b785:
      bVar7 = true;
    }
    else {
      if (((this->ArrFalse).NumBits <= (int)uVar16) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return (bool)uVar8;
      }
      FVar4 = (this->ArrFalse).AllocatorInstance.SecondaryData;
      FVar14 = (ForElementType<unsigned_int>)&this->ArrFalse;
      if (FVar4 != (ForElementType<unsigned_int>)0x0) {
        FVar14 = FVar4;
      }
      if ((*(uint *)((longlong)FVar14 + (ulonglong)(uVar16 >> 5) * 4) & uVar19) != 0)
      goto LAB_141b3b785;
      bVar7 = false;
    }
    if (((this->ArrFalse).NumBits <= (int)uVar16) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return (bool)uVar8;
    }
    FVar4 = (this->ArrFalse).AllocatorInstance.SecondaryData;
    FVar14 = (ForElementType<unsigned_int>)&this->ArrFalse;
    if (FVar4 != (ForElementType<unsigned_int>)0x0) {
      FVar14 = FVar4;
    }
    if ((*(uint *)((longlong)FVar14 + (ulonglong)(uVar16 >> 5) * 4) & uVar19) != 0) {
      pFVar13 = FAutomationTestFramework::Get();
      pFVar5 = pFVar13->CurrentTest;
      pcVar6 = *(code **)(pFVar5->_padding_ + 0x28);
      ::FString::FString(&local_68,L"ArrFalse elements");
      (*pcVar6)(pFVar5,&local_68);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
    }
    uVar16 = uVar16 + 1;
    uVar19 = uVar19 << 1 | (uint)((int)uVar19 < 0);
  } while ((int)uVar16 < 10);
  TBitArray<FDefaultBitArrayAllocator>::CheckInvariants(&this->ArrGrowingTrue);
  piVar18 = &(this->ArrGrowingTrue).NumBits;
  piVar2 = &this->NumGrowingTrue;
  if ((bVar7) || (local_res10 = 0, *piVar18 != *piVar2)) {
    local_res10 = 1;
    if (*piVar18 != *piVar2) {
      pFVar13 = FAutomationTestFramework::Get();
      pFVar5 = pFVar13->CurrentTest;
      pcVar6 = *(code **)(pFVar5->_padding_ + 0x28);
      ::FString::FString(&local_58,L"ArrGrowingTrue Size");
      (*pcVar6)(pFVar5,&local_58,0);
      local_res10 = 1;
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
        local_res10 = 1;
      }
    }
  }
  iVar20 = 0;
  if (0 < *piVar2) {
    pTVar3 = &this->ArrGrowingTrue;
    uVar16 = 1;
    pFVar17 = this;
    do {
      bVar7 = pFVar17->bGrowingTrue[0];
      if (((iVar20 < 0) || ((this->ArrGrowingTrue).NumBits <= iVar20)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar9)) {
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return (bool)uVar8;
      }
      FVar4 = (this->ArrGrowingTrue).AllocatorInstance.SecondaryData;
      FVar14 = (ForElementType<unsigned_int>)pTVar3;
      if (FVar4 != (ForElementType<unsigned_int>)0x0) {
        FVar14 = FVar4;
      }
      iVar10 = iVar20;
      if (iVar20 < 0) {
        iVar10 = iVar20 + 0x1f;
      }
      uVar19 = *(uint *)((longlong)FVar14 + (longlong)(iVar10 >> 5) * 4);
      if (bVar7 == false) {
        uVar19 = ~uVar16 & uVar19;
      }
      else {
        uVar19 = uVar16 | uVar19;
      }
      *(uint *)((longlong)(iVar10 >> 5) * 4 + (longlong)FVar14) = uVar19;
      if (local_res10 == 0) {
        if (((iVar20 < 0) || ((this->ArrGrowingTrue).NumBits <= iVar20)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5be,L""), bVar7)) {
          pcVar6 = (code *)swi(3);
          uVar8 = (*pcVar6)();
          return (bool)uVar8;
        }
        FVar4 = (this->ArrGrowingTrue).AllocatorInstance.SecondaryData;
        FVar14 = (ForElementType<unsigned_int>)pTVar3;
        if (FVar4 != (ForElementType<unsigned_int>)0x0) {
          FVar14 = FVar4;
        }
        iVar10 = iVar20;
        if (iVar20 < 0) {
          iVar10 = iVar20 + 0x1f;
        }
        if (((*(uint *)((longlong)FVar14 + (longlong)(iVar10 >> 5) * 4) & uVar16) != 0) !=
            pFVar17->bGrowingTrue[0]) goto LAB_141b3b994;
        local_res10 = 0;
      }
      else {
LAB_141b3b994:
        local_res10 = 1;
      }
      if (((iVar20 < 0) || ((this->ArrGrowingTrue).NumBits <= iVar20)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return (bool)uVar8;
      }
      FVar4 = (this->ArrGrowingTrue).AllocatorInstance.SecondaryData;
      FVar14 = (ForElementType<unsigned_int>)pTVar3;
      if (FVar4 != (ForElementType<unsigned_int>)0x0) {
        FVar14 = FVar4;
      }
      iVar10 = iVar20;
      if (iVar20 < 0) {
        iVar10 = iVar20 + 0x1f;
      }
      if (((*(uint *)((longlong)FVar14 + (longlong)(iVar10 >> 5) * 4) & uVar16) != 0) !=
          pFVar17->bGrowingTrue[0]) {
        pFVar13 = FAutomationTestFramework::Get();
        pFVar5 = pFVar13->CurrentTest;
        pcVar6 = *(code **)(pFVar5->_padding_ + 0x28);
        ::FString::FString(&local_48,L"ArrGrowingTrue elements");
        (*pcVar6)(pFVar5,&local_48,0);
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
      }
      iVar20 = iVar20 + 1;
      uVar16 = uVar16 << 1 | (uint)((int)uVar16 < 0);
      pFVar17 = (FBitArrayTest *)(pFVar17->bGrowingTrue + 1);
    } while (iVar20 < *piVar2);
  }
  uVar19 = 0;
  TBitArray<FDefaultBitArrayAllocator>::CheckInvariants(&this->ArrSquareWave);
  uVar16 = uVar19;
  if (0 < this->NumSquareWave) {
    do {
      uVar15 = uVar16 & 0x80000001;
      if ((int)uVar15 < 0) {
        uVar15 = (uVar15 - 1 | 0xfffffffe) + 1;
      }
      if ((((int)uVar16 < 0) || ((this->ArrSquareWave).NumBits <= (int)uVar16)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return (bool)uVar8;
      }
      FVar4 = (this->ArrSquareWave).AllocatorInstance.SecondaryData;
      FVar14 = (ForElementType<unsigned_int>)&this->ArrSquareWave;
      if (FVar4 != (ForElementType<unsigned_int>)0x0) {
        FVar14 = FVar4;
      }
      uVar11 = uVar16;
      if ((int)uVar16 < 0) {
        uVar11 = uVar16 + 0x1f;
      }
      lVar1 = (longlong)((int)uVar11 >> 5) * 4;
      uVar12 = 1 << ((byte)uVar16 & 0x1f);
      uVar11 = *(uint *)(lVar1 + (longlong)FVar14);
      if (uVar15 == 1) {
        uVar11 = uVar11 | uVar12;
      }
      else {
        uVar11 = uVar11 & ~uVar12;
      }
      uVar16 = uVar16 + 1;
      *(uint *)(lVar1 + (longlong)FVar14) = uVar11;
    } while ((int)uVar16 < this->NumSquareWave);
  }
  piVar18 = &this->NumGrowingTrue;
  pTVar3 = &this->ArrGrowingTrueTwice;
  TBitArray<FDefaultBitArrayAllocator>::CheckInvariants(pTVar3);
  if (0 < *piVar18) {
    uVar16 = 1;
    pFVar17 = this;
    do {
      bVar7 = pFVar17->bGrowingTrue[0];
      if ((((int)uVar19 < 0) || ((this->ArrGrowingTrueTwice).NumBits <= (int)uVar19)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar9)) {
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return (bool)uVar8;
      }
      FVar4 = (this->ArrGrowingTrueTwice).AllocatorInstance.SecondaryData;
      FVar14 = (ForElementType<unsigned_int>)pTVar3;
      if (FVar4 != (ForElementType<unsigned_int>)0x0) {
        FVar14 = FVar4;
      }
      uVar15 = uVar19;
      if ((int)uVar19 < 0) {
        uVar15 = uVar19 + 0x1f;
      }
      lVar1 = (longlong)((int)uVar15 >> 5) * 4;
      uVar15 = *(uint *)(lVar1 + (longlong)FVar14);
      if (bVar7 == false) {
        uVar15 = uVar15 & ~uVar16;
      }
      else {
        uVar15 = uVar15 | uVar16;
      }
      *(uint *)((longlong)FVar14 + lVar1) = uVar15;
      iVar20 = *piVar18 + uVar19;
      bVar7 = pFVar17->bGrowingTrue[0];
      if (((iVar20 < 0) || ((this->ArrGrowingTrueTwice).NumBits <= iVar20)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar9)) {
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return (bool)uVar8;
      }
      FVar4 = (this->ArrGrowingTrueTwice).AllocatorInstance.SecondaryData;
      FVar14 = (ForElementType<unsigned_int>)pTVar3;
      if (FVar4 != (ForElementType<unsigned_int>)0x0) {
        FVar14 = FVar4;
      }
      iVar10 = iVar20;
      if (iVar20 < 0) {
        iVar10 = iVar20 + 0x1f;
      }
      lVar1 = (longlong)(iVar10 >> 5) * 4;
      uVar11 = 1 << ((byte)iVar20 & 0x1f);
      uVar15 = *(uint *)(lVar1 + (longlong)FVar14);
      if (bVar7 == false) {
        uVar15 = uVar15 & ~uVar11;
      }
      else {
        uVar15 = uVar15 | uVar11;
      }
      uVar19 = uVar19 + 1;
      uVar16 = uVar16 << 1 | (uint)((int)uVar16 < 0);
      pFVar17 = (FBitArrayTest *)(pFVar17->bGrowingTrue + 1);
      *(uint *)(lVar1 + (longlong)FVar14) = uVar15;
    } while ((int)uVar19 < *piVar18);
  }
  return (bool)(local_res10 ^ 1);
}

// TestAddFromRange @ 141b5c970

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FBitArrayTest::TestAddFromRange(FBitArrayTest *this)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  TStringBuilderWithBuffer<wchar_t,128> *pTVar2;
  uint *puVar3;
  FAutomationTestBase *pFVar4;
  code *pcVar5;
  int iVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  FAutomationTestFramework *pFVar10;
  TStringBuilderBase<wchar_t> *pTVar11;
  TStringBuilderBase<wchar_t> *pTVar12;
  ulong64 uVar13;
  ForElementType<unsigned_int> FVar14;
  ForElementType<unsigned_int> FVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  ulonglong uVar23;
  undefined1 auStackY_2b8 [32];
  uint local_280 [6];
  TStringBuilderBase<wchar_t> *local_268;
  uint local_260 [2];
  FString local_258;
  FString local_248;
  FString local_238;
  FString local_228;
  FString local_218;
  FString local_208;
  FString local_1f8;
  FString local_1e8;
  FString local_1d8;
  FString local_1c8;
  FString local_1b8;
  FString local_1a8;
  FString local_198;
  FString local_188;
  FString local_178;
  FString local_168;
  TBitArray<FDefaultBitArrayAllocator> local_158;
  TBitArray<FDefaultBitArrayAllocator> local_138;
  TBitArray<FDefaultBitArrayAllocator> local_118;
  TBitArray<FDefaultBitArrayAllocator> local_f8;
  TBitArray<FDefaultBitArrayAllocator> local_d8;
  TBitArray<FDefaultBitArrayAllocator> local_b8;
  TBitArray<FDefaultBitArrayAllocator> local_98;
  TBitArray<FDefaultBitArrayAllocator> local_78;
  TBitArray<FDefaultBitArrayAllocator> local_58;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_2b8;
  puVar3 = &this->GrowingTrueInt;
  uVar23 = 0;
  local_b8.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_b8.NumBits = 0;
  local_b8.MaxBits = 0x80;
  TBitArray<FDefaultBitArrayAllocator>::AddRange<unsigned_int>
            (&local_b8,puVar3,this->NumGrowingTrue,0);
  TBitArray<FDefaultBitArrayAllocator>::CheckInvariants(&local_b8);
  if (local_b8.NumBits == (this->ArrGrowingTrue).NumBits) {
    FVar15 = (this->ArrGrowingTrue).AllocatorInstance.SecondaryData;
    if (FVar15 == (ForElementType<unsigned_int>)0x0) {
      FVar15 = (ForElementType<unsigned_int>)&this->ArrGrowingTrue;
    }
    FVar14 = (ForElementType<unsigned_int>)&local_b8;
    if (local_b8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar14 = local_b8.AllocatorInstance.SecondaryData;
    }
    iVar8 = memcmp((void *)FVar14,(void *)FVar15,(ulonglong)(local_b8.NumBits + 0x1fU >> 5) << 2);
    if (iVar8 != 0) goto LAB_141b5ca39;
  }
  else {
LAB_141b5ca39:
    pFVar10 = FAutomationTestFramework::Get();
    pFVar4 = pFVar10->CurrentTest;
    pcVar5 = *(code **)(pFVar4->_padding_ + 0x28);
    ::FString::FString(&local_258,L"Add from uint32 with ReadOffset 0 from empty");
    (*pcVar5)(pFVar4,&local_258,0);
    if (local_258.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_258.Data.AllocatorInstance.Data);
    }
  }
  uVar22 = this->NumGrowingTrue;
  iVar8 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized(&local_b8,uVar22);
  if ((((iVar8 < 0) || ((int)uVar22 < 0)) || (local_b8.NumBits < (int)(iVar8 + uVar22))) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index >= 0 && NumBitsToSet >= 0 && Index + NumBitsToSet <= NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x3bc,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (((uVar22 != 0) && (puVar3 == (uint *)0x0)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumBitsToSet == 0 || ReadBits != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x3bd,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FVar15 = (ForElementType<unsigned_int>)&local_b8;
  if (local_b8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FVar15 = local_b8.AllocatorInstance.SecondaryData;
  }
  FBitArrayMemory::MemmoveBitsWordOrder((uint *)FVar15,iVar8,puVar3,0,uVar22);
  TBitArray<FDefaultBitArrayAllocator>::CheckInvariants(&local_b8);
  if (local_b8.NumBits == (this->ArrGrowingTrueTwice).NumBits) {
    FVar15 = (this->ArrGrowingTrueTwice).AllocatorInstance.SecondaryData;
    if (FVar15 == (ForElementType<unsigned_int>)0x0) {
      FVar15 = (ForElementType<unsigned_int>)&this->ArrGrowingTrueTwice;
    }
    FVar14 = (ForElementType<unsigned_int>)&local_b8;
    if (local_b8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar14 = local_b8.AllocatorInstance.SecondaryData;
    }
    iVar8 = memcmp((void *)FVar14,(void *)FVar15,(ulonglong)(local_b8.NumBits + 0x1fU >> 5) << 2);
    if (iVar8 != 0) goto LAB_141b5cb75;
  }
  else {
LAB_141b5cb75:
    pFVar10 = FAutomationTestFramework::Get();
    pFVar4 = pFVar10->CurrentTest;
    pcVar5 = *(code **)(pFVar4->_padding_ + 0x28);
    ::FString::FString(&local_248,L"Add from uint32 with ReadOffset 0 to nonempty");
    (*pcVar5)(pFVar4,&local_248,0);
    if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_248.Data.AllocatorInstance.Data);
    }
  }
  local_d8.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_d8.NumBits = 0;
  local_d8.MaxBits = 0x80;
  local_280[0] = 0;
  local_280[1] = 0xffffffff;
  iVar8 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized(&local_d8,10);
  if (((iVar8 < 0) || (local_d8.NumBits < iVar8 + 10)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index >= 0 && NumBitsToSet >= 0 && Index + NumBitsToSet <= NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x3bc,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FVar15 = (ForElementType<unsigned_int>)&local_d8;
  if (local_d8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FVar15 = local_d8.AllocatorInstance.SecondaryData;
  }
  FBitArrayMemory::MemmoveBitsWordOrder((uint *)FVar15,iVar8,local_280,0,10);
  TBitArray<FDefaultBitArrayAllocator>::CheckInvariants(&local_d8);
  iVar8 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized(&local_d8,10);
  if (((iVar8 < 0) || (local_d8.NumBits < iVar8 + 10)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index >= 0 && NumBitsToSet >= 0 && Index + NumBitsToSet <= NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x3bc,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FVar15 = (ForElementType<unsigned_int>)&local_d8;
  if (local_d8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FVar15 = local_d8.AllocatorInstance.SecondaryData;
  }
  FBitArrayMemory::MemmoveBitsWordOrder((uint *)FVar15,iVar8,local_280 + 1,0,10);
  TBitArray<FDefaultBitArrayAllocator>::CheckInvariants(&local_d8);
  uVar22 = 1;
  do {
    uVar18 = (uint)uVar23;
    if ((local_d8.NumBits <= (int)uVar18) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    FVar15 = (ForElementType<unsigned_int>)&local_d8;
    if (local_d8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar15 = local_d8.AllocatorInstance.SecondaryData;
    }
    if (((*(uint *)((longlong)FVar15 + (uVar23 >> 5) * 4) & uVar22) != 0) != 9 < uVar18) {
      pFVar10 = FAutomationTestFramework::Get();
      pFVar4 = pFVar10->CurrentTest;
      pcVar5 = *(code **)(pFVar4->_padding_ + 0x28);
      ::FString::FString(&local_238,L"Add from uint32 with ReadOffset 0, Zeroes, Then Ones");
      (*pcVar5)(pFVar4,&local_238,0);
      if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_238.Data.AllocatorInstance.Data);
      }
    }
    uVar23 = (ulonglong)(uVar18 + 1);
    uVar22 = uVar22 << 1 | (uint)((int)uVar22 < 0);
  } while ((int)(uVar18 + 1) < 0x14);
  uVar23 = 0;
  local_58.MaxBits = 0x80;
  local_58.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_280[4] = 0xffff0000;
  local_280[5] = 0xf0f0f0f;
  local_58.NumBits = 0x40;
  FBitArrayMemory::MemmoveBitsWordOrder((uint *)&local_58,0,local_280 + 4,0,0x40);
  TBitArray<FDefaultBitArrayAllocator>::CheckInvariants(&local_58);
  if (local_58.NumBits != 0x40) {
    pFVar10 = FAutomationTestFramework::Get();
    pFVar4 = pFVar10->CurrentTest;
    pcVar5 = *(code **)(pFVar4->_padding_ + 0x28);
    ::FString::FString(&local_228,L"Add from uint32 with ReadOffset 0, size");
    (*pcVar5)(pFVar4,&local_228,0);
    if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_228.Data.AllocatorInstance.Data);
    }
  }
  pTVar2 = &this->Label;
  uVar22 = 1;
  local_268 = (TStringBuilderBase<wchar_t> *)pTVar2;
  do {
    (this->Label)._padding_ = pTVar2->_padding_;
    uVar18 = (uint)uVar23;
    if ((local_58.NumBits <= (int)uVar18) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    FVar15 = (ForElementType<unsigned_int>)&local_58;
    if (local_58.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar15 = local_58.AllocatorInstance.SecondaryData;
    }
    if (((*(uint *)((longlong)FVar15 + (uVar23 >> 5) * 4) & uVar22) != 0) != 0xf < uVar18) {
      pFVar10 = FAutomationTestFramework::Get();
      pFVar4 = pFVar10->CurrentTest;
      pcVar5 = *(code **)(pFVar4->_padding_ + 0x28);
      pTVar11 = TStringBuilderBase<wchar_t>::AppendfImpl
                          ((TStringBuilderBase<wchar_t> *)pTVar2,
                           L"Add from uint32 with ReadOffset 0, MultipleInts, %d");
      if (pTVar11->End < pTVar11->CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(pTVar11,1);
      }
      *pTVar11->CurPos = L'\0';
      ::FString::FString(&local_218,pTVar11->Base);
      (*pcVar5)(pFVar4,&local_218,0);
      if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_218.Data.AllocatorInstance.Data);
      }
    }
    uVar23 = (ulonglong)(uVar18 + 1);
    uVar22 = uVar22 << 1 | (uint)((int)uVar22 < 0);
  } while ((int)(uVar18 + 1) < 0x20);
  uVar18 = 0x20;
  uVar22 = 1;
  do {
    (this->Label)._padding_ = pTVar2->_padding_;
    if ((local_58.NumBits <= (int)uVar18) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    FVar15 = (ForElementType<unsigned_int>)&local_58;
    if (local_58.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar15 = local_58.AllocatorInstance.SecondaryData;
    }
    if ((uint)((*(uint *)((longlong)FVar15 + (ulonglong)(uVar18 >> 5) * 4) & uVar22) != 0) !=
        (~(uVar18 >> 2) & 1)) {
      pFVar10 = FAutomationTestFramework::Get();
      pFVar4 = pFVar10->CurrentTest;
      pcVar5 = *(code **)(pFVar4->_padding_ + 0x28);
      pTVar11 = TStringBuilderBase<wchar_t>::AppendfImpl
                          ((TStringBuilderBase<wchar_t> *)pTVar2,
                           L"Add from uint32 with ReadOffset 0, MultipleInts, %d");
      if (pTVar11->End < pTVar11->CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(pTVar11,1);
      }
      *pTVar11->CurPos = L'\0';
      ::FString::FString(&local_208,pTVar11->Base);
      (*pcVar5)(pFVar4,&local_208,0);
      if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_208.Data.AllocatorInstance.Data);
      }
    }
    uVar23 = 0;
    uVar18 = uVar18 + 1;
    uVar22 = uVar22 << 1 | (uint)((int)uVar22 < 0);
  } while ((int)uVar18 < 0x40);
  local_78.MaxBits = 0x80;
  local_78.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_78.NumBits = 0x20;
  local_280[2] = 0x10;
  FBitArrayMemory::MemmoveBitsWordOrder((uint *)&local_78,0,local_280 + 4,0x10,0x20);
  TBitArray<FDefaultBitArrayAllocator>::CheckInvariants(&local_78);
  if (local_78.NumBits != 0x20) {
    pFVar10 = FAutomationTestFramework::Get();
    pFVar4 = pFVar10->CurrentTest;
    pcVar5 = *(code **)(pFVar4->_padding_ + 0x28);
    ::FString::FString(&local_1f8,L"Add from uint32 with ReadOffset 16, MultipleInts, size");
    (*pcVar5)(pFVar4,&local_1f8,0);
    if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
    }
  }
  uVar22 = 1;
  do {
    (this->Label)._padding_ = pTVar2->_padding_;
    if ((local_78.NumBits <= (int)uVar23) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    FVar15 = (ForElementType<unsigned_int>)&local_78;
    if (local_78.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar15 = local_78.AllocatorInstance.SecondaryData;
    }
    if ((*(uint *)((longlong)FVar15 + (uVar23 >> 5) * 4) & uVar22) == 0) {
      pFVar10 = FAutomationTestFramework::Get();
      pFVar4 = pFVar10->CurrentTest;
      pcVar5 = *(code **)(pFVar4->_padding_ + 0x28);
      pTVar11 = TStringBuilderBase<wchar_t>::AppendfImpl
                          ((TStringBuilderBase<wchar_t> *)pTVar2,
                           L"Add from uint32 with ReadOffset 16, MultipleInts, %d");
      if (pTVar11->End < pTVar11->CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(pTVar11,1);
      }
      *pTVar11->CurPos = L'\0';
      ::FString::FString(&local_1e8,pTVar11->Base);
      (*pcVar5)(pFVar4,&local_1e8,0);
      if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
      }
    }
    pTVar11 = local_268;
    uVar18 = (int)uVar23 + 1;
    uVar23 = (ulonglong)uVar18;
    uVar22 = uVar22 << 1 | (uint)((int)uVar22 < 0);
  } while ((int)uVar18 < 0x10);
  uVar18 = 0x10;
  uVar22 = 0x10000;
  local_280[3] = 0x10000;
  do {
    (this->Label)._padding_ = (longlong)pTVar11->Base;
    if ((local_78.NumBits <= (int)uVar18) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    FVar15 = (ForElementType<unsigned_int>)&local_78;
    if (local_78.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar15 = local_78.AllocatorInstance.SecondaryData;
    }
    if ((uint)((*(uint *)((longlong)FVar15 + (ulonglong)(uVar18 >> 5) * 4) & uVar22) != 0) !=
        (~(uVar18 >> 2) & 1)) {
      pFVar10 = FAutomationTestFramework::Get();
      pFVar4 = pFVar10->CurrentTest;
      pcVar5 = *(code **)(pFVar4->_padding_ + 0x28);
      pTVar12 = TStringBuilderBase<wchar_t>::AppendfImpl
                          (pTVar11,L"Add from uint32 with ReadOffset 16, MultipleInts, %d");
      if (pTVar12->End < pTVar12->CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(pTVar12,1);
      }
      *pTVar12->CurPos = L'\0';
      ::FString::FString(&local_1d8,pTVar12->Base);
      (*pcVar5)(pFVar4,&local_1d8,0);
      if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
      }
    }
    uVar18 = uVar18 + 1;
    uVar22 = uVar22 << 1 | (uint)((int)uVar22 < 0);
  } while ((int)uVar18 < 0x20);
  if (local_78.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_78.AllocatorInstance.SecondaryData);
  }
  if (local_58.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_58.AllocatorInstance.SecondaryData);
  }
  if (local_d8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_d8.AllocatorInstance.SecondaryData);
  }
  if (local_b8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_b8.AllocatorInstance.SecondaryData);
  }
  uVar22 = this->NumGrowingTrue;
  local_f8.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_f8.NumBits = 0;
  local_f8.MaxBits = 0x80;
  if (((this->ArrGrowingTrue).NumBits < (int)uVar22) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("0 <= ReadOffsetBits && ReadOffsetBits + NumBitsToAdd <= ReadBits.NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x298,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar8 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized(&local_f8,uVar22);
  if ((((iVar8 < 0) || ((int)uVar22 < 0)) || (local_f8.NumBits < (int)(iVar8 + uVar22))) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index >= 0 && NumBitsToSet >= 0 && Index + NumBitsToSet <= NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x3cf,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (((this->ArrGrowingTrue).NumBits < (int)uVar22) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("0 <= ReadOffsetBits && ReadOffsetBits + NumBitsToSet <= ReadBits.NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x3d0,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FVar15 = (this->ArrGrowingTrue).AllocatorInstance.SecondaryData;
  pTVar1 = &this->ArrGrowingTrue;
  if (FVar15 == (ForElementType<unsigned_int>)0x0) {
    FVar15 = (ForElementType<unsigned_int>)pTVar1;
  }
  FVar14 = (ForElementType<unsigned_int>)&local_f8;
  if (local_f8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FVar14 = local_f8.AllocatorInstance.SecondaryData;
  }
  FBitArrayMemory::MemmoveBitsWordOrder((uint *)FVar14,iVar8,(uint *)FVar15,0,uVar22);
  TBitArray<FDefaultBitArrayAllocator>::CheckInvariants(&local_f8);
  if (local_f8.NumBits == (this->ArrGrowingTrue).NumBits) {
    FVar15 = (this->ArrGrowingTrue).AllocatorInstance.SecondaryData;
    if (FVar15 == (ForElementType<unsigned_int>)0x0) {
      FVar15 = (ForElementType<unsigned_int>)pTVar1;
    }
    FVar14 = (ForElementType<unsigned_int>)&local_f8;
    if (local_f8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar14 = local_f8.AllocatorInstance.SecondaryData;
    }
    iVar8 = memcmp((void *)FVar14,(void *)FVar15,(ulonglong)(local_f8.NumBits + 0x1fU >> 5) << 2);
    if (iVar8 != 0) goto LAB_141b5d451;
  }
  else {
LAB_141b5d451:
    pFVar10 = FAutomationTestFramework::Get();
    pFVar4 = pFVar10->CurrentTest;
    pcVar5 = *(code **)(pFVar4->_padding_ + 0x28);
    ::FString::FString(&local_1c8,L"Add from BitArray with ReadOffset 0 from empty");
    (*pcVar5)(pFVar4,&local_1c8,0);
    if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
    }
  }
  uVar22 = this->NumGrowingTrue;
  if (((this->ArrGrowingTrue).NumBits < (int)uVar22) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("0 <= ReadOffsetBits && ReadOffsetBits + NumBitsToAdd <= ReadBits.NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x298,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar8 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized(&local_f8,uVar22);
  if ((((iVar8 < 0) || ((int)uVar22 < 0)) || (local_f8.NumBits < (int)(iVar8 + uVar22))) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index >= 0 && NumBitsToSet >= 0 && Index + NumBitsToSet <= NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x3cf,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (((this->ArrGrowingTrue).NumBits < (int)uVar22) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("0 <= ReadOffsetBits && ReadOffsetBits + NumBitsToSet <= ReadBits.NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x3d0,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FVar15 = (this->ArrGrowingTrue).AllocatorInstance.SecondaryData;
  if (FVar15 == (ForElementType<unsigned_int>)0x0) {
    FVar15 = (ForElementType<unsigned_int>)pTVar1;
  }
  FVar14 = (ForElementType<unsigned_int>)&local_f8;
  if (local_f8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FVar14 = local_f8.AllocatorInstance.SecondaryData;
  }
  FBitArrayMemory::MemmoveBitsWordOrder((uint *)FVar14,iVar8,(uint *)FVar15,0,uVar22);
  TBitArray<FDefaultBitArrayAllocator>::CheckInvariants(&local_f8);
  if (local_f8.NumBits == (this->ArrGrowingTrueTwice).NumBits) {
    FVar15 = (this->ArrGrowingTrueTwice).AllocatorInstance.SecondaryData;
    if (FVar15 == (ForElementType<unsigned_int>)0x0) {
      FVar15 = (ForElementType<unsigned_int>)&this->ArrGrowingTrueTwice;
    }
    FVar14 = (ForElementType<unsigned_int>)&local_f8;
    if (local_f8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar14 = local_f8.AllocatorInstance.SecondaryData;
    }
    iVar8 = memcmp((void *)FVar14,(void *)FVar15,(ulonglong)(local_f8.NumBits + 0x1fU >> 5) << 2);
    if (iVar8 != 0) goto LAB_141b5d5bb;
  }
  else {
LAB_141b5d5bb:
    pFVar10 = FAutomationTestFramework::Get();
    pFVar4 = pFVar10->CurrentTest;
    pcVar5 = *(code **)(pFVar4->_padding_ + 0x28);
    ::FString::FString(&local_1b8,L"Add from BitArray with ReadOffset 0 to nonempty");
    (*pcVar5)(pFVar4,&local_1b8,0);
    if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
    }
  }
  local_158.MaxBits = 0x80;
  local_158.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_158.NumBits = 0;
  if (((this->ArrFalse).NumBits < 10) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("0 <= ReadOffsetBits && ReadOffsetBits + NumBitsToAdd <= ReadBits.NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x298,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar8 = local_158.NumBits;
  iVar19 = local_158.NumBits + 10;
  uVar23 = 4;
  if ((local_158.NumBits == 0) ||
     (iVar6 = iVar19,
     (int)(local_158.NumBits + 9 + (local_158.NumBits + 9 >> 0x1f & 0x1fU)) >> 5 !=
     (int)((local_158.NumBits + -1 >> 0x1f & 0x1fU) + local_158.NumBits + -1) >> 5)) {
    if (local_158.MaxBits < iVar19) {
      uVar18 = local_158.MaxBits + 0x1fU >> 5;
      uVar22 = local_158.NumBits + 0x29U >> 5;
      uVar17 = (ulonglong)uVar22;
      if (uVar22 < 5) {
        local_158.MaxBits = 4;
      }
      else {
        if (uVar18 < 5) {
          uVar18 = 0;
        }
        if (uVar18 == 0) {
          uVar16 = 4;
          if (4 < uVar17) {
            uVar16 = uVar17;
          }
        }
        else {
          uVar16 = (uVar17 * 3 >> 3) + 0x10 + uVar17;
        }
        uVar13 = FMemory::QuantizeSize(uVar16 * 4,0);
        local_158.MaxBits = (int)(uVar13 >> 2);
        if (local_158.MaxBits < (int)uVar22) {
          local_158.MaxBits = 0x7fffffff;
        }
      }
      local_158.MaxBits = local_158.MaxBits << 5;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_158,local_158.NumBits);
    }
    local_158.NumBits = local_158.NumBits + 10;
    uVar18 = local_158.NumBits >> 0x1f & 0x1f;
    uVar22 = local_158.NumBits + uVar18;
    iVar9 = (uVar22 & 0x1f) - uVar18;
    iVar6 = local_158.NumBits;
    if (iVar9 != 0) {
      FVar15 = (ForElementType<unsigned_int>)&local_158;
      if (local_158.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar15 = local_158.AllocatorInstance.SecondaryData;
      }
      puVar3 = (uint *)((longlong)FVar15 + (longlong)((int)uVar22 >> 5) * 4);
      *puVar3 = *puVar3 & 0xffffffffU >> (0x20U - (char)iVar9 & 0x1f);
      iVar6 = local_158.NumBits;
    }
  }
  local_158.NumBits = iVar6;
  if (((iVar8 < 0) || (local_158.NumBits < iVar19)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index >= 0 && NumBitsToSet >= 0 && Index + NumBitsToSet <= NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x3cf,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (((this->ArrFalse).NumBits < 10) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("0 <= ReadOffsetBits && ReadOffsetBits + NumBitsToSet <= ReadBits.NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x3d0,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FVar15 = (this->ArrFalse).AllocatorInstance.SecondaryData;
  if (FVar15 == (ForElementType<unsigned_int>)0x0) {
    FVar15 = (ForElementType<unsigned_int>)&this->ArrFalse;
  }
  FVar14 = (ForElementType<unsigned_int>)&local_158;
  if (local_158.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FVar14 = local_158.AllocatorInstance.SecondaryData;
  }
  FBitArrayMemory::MemmoveBitsWordOrder((uint *)FVar14,iVar8,(uint *)FVar15,0,10);
  TBitArray<FDefaultBitArrayAllocator>::CheckInvariants(&local_158);
  if (((this->ArrTrue).NumBits < 10) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("0 <= ReadOffsetBits && ReadOffsetBits + NumBitsToAdd <= ReadBits.NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x298,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar19 = local_158.NumBits;
  iVar8 = local_158.NumBits + 10;
  if ((local_158.NumBits == 0) ||
     (iVar6 = iVar8,
     (int)(local_158.NumBits + 9 + (local_158.NumBits + 9 >> 0x1f & 0x1fU)) >> 5 !=
     (int)((local_158.NumBits + -1 >> 0x1f & 0x1fU) + local_158.NumBits + -1) >> 5)) {
    if (local_158.MaxBits < iVar8) {
      uVar22 = local_158.MaxBits + 0x1fU >> 5;
      uVar18 = local_158.NumBits + 0x29U >> 5;
      uVar17 = (ulonglong)uVar18;
      if (uVar18 < 5) {
        local_158.MaxBits = 4;
      }
      else {
        if (uVar22 < 5) {
          uVar22 = 0;
        }
        if (uVar22 == 0) {
          uVar16 = 4;
          if (4 < uVar17) {
            uVar16 = uVar17;
          }
        }
        else {
          uVar16 = (uVar17 * 3 >> 3) + 0x10 + uVar17;
        }
        uVar13 = FMemory::QuantizeSize(uVar16 * 4,0);
        local_158.MaxBits = (int)(uVar13 >> 2);
        if (local_158.MaxBits < (int)uVar18) {
          local_158.MaxBits = 0x7fffffff;
        }
      }
      local_158.MaxBits = local_158.MaxBits << 5;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_158,local_158.NumBits);
    }
    local_158.NumBits = local_158.NumBits + 10;
    uVar18 = local_158.NumBits >> 0x1f & 0x1f;
    uVar22 = local_158.NumBits + uVar18;
    iVar9 = (uVar22 & 0x1f) - uVar18;
    iVar6 = local_158.NumBits;
    if (iVar9 != 0) {
      FVar15 = (ForElementType<unsigned_int>)&local_158;
      if (local_158.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar15 = local_158.AllocatorInstance.SecondaryData;
      }
      puVar3 = (uint *)((longlong)FVar15 + (longlong)((int)uVar22 >> 5) * 4);
      *puVar3 = *puVar3 & 0xffffffffU >> (0x20U - (char)iVar9 & 0x1f);
      iVar6 = local_158.NumBits;
    }
  }
  local_158.NumBits = iVar6;
  if (((iVar19 < 0) || (local_158.NumBits < iVar8)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index >= 0 && NumBitsToSet >= 0 && Index + NumBitsToSet <= NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x3cf,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (((this->ArrTrue).NumBits < 10) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("0 <= ReadOffsetBits && ReadOffsetBits + NumBitsToSet <= ReadBits.NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x3d0,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FVar15 = (this->ArrTrue).AllocatorInstance.SecondaryData;
  if (FVar15 == (ForElementType<unsigned_int>)0x0) {
    FVar15 = (ForElementType<unsigned_int>)&this->ArrTrue;
  }
  FVar14 = (ForElementType<unsigned_int>)&local_158;
  if (local_158.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FVar14 = local_158.AllocatorInstance.SecondaryData;
  }
  FBitArrayMemory::MemmoveBitsWordOrder((uint *)FVar14,iVar19,(uint *)FVar15,0,10);
  TBitArray<FDefaultBitArrayAllocator>::CheckInvariants(&local_158);
  uVar17 = 0;
  uVar22 = 1;
  do {
    uVar18 = (uint)uVar17;
    if ((local_158.NumBits <= (int)uVar18) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    FVar15 = (ForElementType<unsigned_int>)&local_158;
    if (local_158.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar15 = local_158.AllocatorInstance.SecondaryData;
    }
    if (((*(uint *)((longlong)FVar15 + (uVar17 >> 5) * 4) & uVar22) != 0) != 9 < uVar18) {
      pFVar10 = FAutomationTestFramework::Get();
      pFVar4 = pFVar10->CurrentTest;
      pcVar5 = *(code **)(pFVar4->_padding_ + 0x28);
      ::FString::FString(&local_1a8,L"Add from BitArray with ReadOffset 0, Zeroes, Then Ones");
      (*pcVar5)(pFVar4,&local_1a8,0);
      if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
      }
    }
    uVar17 = (ulonglong)(uVar18 + 1);
    uVar22 = uVar22 << 1 | (uint)((int)uVar22 < 0);
  } while ((int)(uVar18 + 1) < 0x14);
  local_118.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_118.MaxBits = 0x80;
  local_98.MaxBits = 0x80;
  local_118.NumBits = 0;
  local_260[0] = 0xffff0000;
  local_260[1] = 0xf0f0f0f;
  local_98.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_98.NumBits = 0x40;
  FBitArrayMemory::MemmoveBitsWordOrder((uint *)&local_98,0,local_260,0,0x40);
  TBitArray<FDefaultBitArrayAllocator>::CheckInvariants(&local_98);
  if ((local_98.NumBits < 0x40) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("0 <= ReadOffsetBits && ReadOffsetBits + NumBitsToAdd <= ReadBits.NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x298,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar8 = local_118.NumBits;
  uVar22 = local_118.NumBits + 0x40;
  if ((local_118.NumBits == 0) ||
     (uVar18 = uVar22,
     (int)(local_118.NumBits + 0x3f + (local_118.NumBits + 0x3f >> 0x1f & 0x1fU)) >> 5 !=
     (int)((local_118.NumBits + -1 >> 0x1f & 0x1fU) + local_118.NumBits + -1) >> 5)) {
    if (local_118.MaxBits < (int)uVar22) {
      uVar18 = local_118.MaxBits + 0x1fU >> 5;
      uVar20 = local_118.NumBits + 0x5fU >> 5;
      uVar17 = (ulonglong)uVar20;
      if (uVar20 < 5) {
        local_118.MaxBits = 4;
      }
      else {
        if (uVar18 < 5) {
          uVar18 = 0;
        }
        if (uVar18 == 0) {
          uVar16 = 4;
          if (4 < uVar17) {
            uVar16 = uVar17;
          }
        }
        else {
          uVar16 = (uVar17 * 3 >> 3) + 0x10 + uVar17;
        }
        uVar13 = FMemory::QuantizeSize(uVar16 * 4,0);
        local_118.MaxBits = (int)(uVar13 >> 2);
        if (local_118.MaxBits < (int)uVar20) {
          local_118.MaxBits = 0x7fffffff;
        }
      }
      local_118.MaxBits = local_118.MaxBits << 5;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_118,local_118.NumBits);
    }
    local_118.NumBits = local_118.NumBits + 0x40;
    uVar18 = local_118.NumBits >> 0x1f & 0x1f;
    uVar20 = local_118.NumBits + uVar18;
    iVar19 = (uVar20 & 0x1f) - uVar18;
    uVar18 = local_118.NumBits;
    if (iVar19 != 0) {
      FVar15 = (ForElementType<unsigned_int>)&local_118;
      if (local_118.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar15 = local_118.AllocatorInstance.SecondaryData;
      }
      puVar3 = (uint *)((longlong)FVar15 + (longlong)((int)uVar20 >> 5) * 4);
      *puVar3 = *puVar3 & 0xffffffffU >> (0x20U - (char)iVar19 & 0x1f);
      uVar18 = local_118.NumBits;
    }
  }
  local_118.NumBits = uVar18;
  if (((iVar8 < 0) || (local_118.NumBits < (int)uVar22)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index >= 0 && NumBitsToSet >= 0 && Index + NumBitsToSet <= NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x3cf,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((local_98.NumBits < 0x40) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("0 <= ReadOffsetBits && ReadOffsetBits + NumBitsToSet <= ReadBits.NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x3d0,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FVar15 = (ForElementType<unsigned_int>)&local_98;
  if (local_98.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FVar15 = local_98.AllocatorInstance.SecondaryData;
  }
  FVar14 = (ForElementType<unsigned_int>)&local_118;
  if (local_118.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FVar14 = local_118.AllocatorInstance.SecondaryData;
  }
  FBitArrayMemory::MemmoveBitsWordOrder((uint *)FVar14,iVar8,(uint *)FVar15,0,0x40);
  if ((local_118.MaxBits < local_118.NumBits) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumBits <= MaxBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x238,L"TBitArray::NumBits (%d) should never be greater than MaxBits (%d)"
                        ), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (((local_118.NumBits < 0) || (local_118.MaxBits < 0)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumBits >= 0 && MaxBits >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x239,L"NumBits (%d) and MaxBits (%d) should always be >= 0"), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar22 = local_118.NumBits & 0x8000001f;
  if ((int)uVar22 < 0) {
    uVar22 = (uVar22 - 1 | 0xffffffe0) + 1;
  }
  if (uVar22 != 0) {
    FVar15 = (ForElementType<unsigned_int>)&local_118;
    if (local_118.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar15 = local_118.AllocatorInstance.SecondaryData;
    }
    if (((*(uint *)((longlong)FVar15 +
                   (longlong)((int)(local_118.NumBits + (local_118.NumBits >> 0x1f & 0x1fU)) >> 5) *
                   4) & -1 << ((byte)uVar22 & 0x1f)) != 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(LastWord & SlackMask) == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x243,
                           L"TBitArray slack bits are non-zero, this will result in undefined behavior."
                          ), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (local_118.NumBits == local_98.NumBits) {
    FVar15 = (ForElementType<unsigned_int>)&local_98;
    if (local_98.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar15 = local_98.AllocatorInstance.SecondaryData;
    }
    FVar14 = (ForElementType<unsigned_int>)&local_118;
    if (local_118.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar14 = local_118.AllocatorInstance.SecondaryData;
    }
    iVar8 = memcmp((void *)FVar14,(void *)FVar15,(ulonglong)(local_118.NumBits + 0x1fU >> 5) << 2);
    if (iVar8 == 0) goto LAB_141b5de4e;
  }
  pFVar10 = FAutomationTestFramework::Get();
  pFVar4 = pFVar10->CurrentTest;
  pcVar5 = *(code **)(pFVar4->_padding_ + 0x28);
  ::FString::FString(&local_198,L"Add from BitArray with ReadOffset 0");
  (*pcVar5)(pFVar4,&local_198,0);
  if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_198.Data.AllocatorInstance.Data);
  }
LAB_141b5de4e:
  local_138.MaxBits = 0x80;
  local_138.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_138.NumBits = 0;
  if ((local_98.NumBits < 0x30) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("0 <= ReadOffsetBits && ReadOffsetBits + NumBitsToAdd <= ReadBits.NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x298,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar8 = local_138.NumBits;
  uVar22 = local_138.NumBits + 0x20;
  if ((local_138.NumBits == 0) ||
     (uVar18 = uVar22,
     (int)(local_138.NumBits + 0x1f + (local_138.NumBits + 0x1f >> 0x1f & 0x1fU)) >> 5 !=
     (int)((local_138.NumBits + -1 >> 0x1f & 0x1fU) + local_138.NumBits + -1) >> 5)) {
    if (local_138.MaxBits < (int)uVar22) {
      uVar18 = local_138.MaxBits + 0x1fU >> 5;
      uVar20 = local_138.NumBits + 0x3fU >> 5;
      uVar17 = (ulonglong)uVar20;
      if (4 < uVar20) {
        if (uVar18 < 5) {
          uVar18 = 0;
        }
        if (uVar18 == 0) {
          if (4 < uVar17) {
            uVar23 = uVar17;
          }
        }
        else {
          uVar23 = (uVar17 * 3 >> 3) + 0x10 + uVar17;
        }
        uVar13 = FMemory::QuantizeSize(uVar23 * 4,0);
        uVar18 = (uint)(uVar13 >> 2);
        if ((int)uVar18 < (int)uVar20) {
          uVar18 = 0x7fffffff;
        }
        uVar23 = (ulonglong)uVar18;
      }
      local_138.MaxBits = (int)uVar23 << 5;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_138,local_138.NumBits);
    }
    local_138.NumBits = local_138.NumBits + 0x20;
    uVar18 = local_138.NumBits >> 0x1f & 0x1f;
    uVar20 = local_138.NumBits + uVar18;
    iVar19 = (uVar20 & 0x1f) - uVar18;
    uVar18 = local_138.NumBits;
    if (iVar19 != 0) {
      FVar15 = (ForElementType<unsigned_int>)&local_138;
      if (local_138.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar15 = local_138.AllocatorInstance.SecondaryData;
      }
      puVar3 = (uint *)((longlong)FVar15 + (longlong)((int)uVar20 >> 5) * 4);
      *puVar3 = *puVar3 & 0xffffffffU >> (0x20U - (char)iVar19 & 0x1f);
      uVar18 = local_138.NumBits;
    }
  }
  local_138.NumBits = uVar18;
  if (((iVar8 < 0) || (local_138.NumBits < (int)uVar22)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index >= 0 && NumBitsToSet >= 0 && Index + NumBitsToSet <= NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x3cf,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((local_98.NumBits < 0x30) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("0 <= ReadOffsetBits && ReadOffsetBits + NumBitsToSet <= ReadBits.NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x3d0,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FVar15 = (ForElementType<unsigned_int>)&local_98;
  if (local_98.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FVar15 = local_98.AllocatorInstance.SecondaryData;
  }
  FVar14 = (ForElementType<unsigned_int>)&local_138;
  if (local_138.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FVar14 = local_138.AllocatorInstance.SecondaryData;
  }
  FBitArrayMemory::MemmoveBitsWordOrder((uint *)FVar14,iVar8,(uint *)FVar15,0x10,0x20);
  if ((local_138.MaxBits < local_138.NumBits) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumBits <= MaxBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x238,L"TBitArray::NumBits (%d) should never be greater than MaxBits (%d)"
                        ), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (((local_138.NumBits < 0) || (local_138.MaxBits < 0)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumBits >= 0 && MaxBits >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x239,L"NumBits (%d) and MaxBits (%d) should always be >= 0"), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar22 = local_138.NumBits & 0x8000001f;
  if ((int)uVar22 < 0) {
    uVar22 = (uVar22 - 1 | 0xffffffe0) + 1;
  }
  if (uVar22 != 0) {
    FVar15 = (ForElementType<unsigned_int>)&local_138;
    if (local_138.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar15 = local_138.AllocatorInstance.SecondaryData;
    }
    if (((*(uint *)((longlong)FVar15 +
                   (longlong)((int)(local_138.NumBits + (local_138.NumBits >> 0x1f & 0x1fU)) >> 5) *
                   4) & -1 << ((byte)uVar22 & 0x1f)) != 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(LastWord & SlackMask) == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x243,
                           L"TBitArray slack bits are non-zero, this will result in undefined behavior."
                          ), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (local_138.NumBits != 0x20) {
    pFVar10 = FAutomationTestFramework::Get();
    pFVar4 = pFVar10->CurrentTest;
    pcVar5 = *(code **)(pFVar4->_padding_ + 0x28);
    ::FString::FString(&local_188,L"Add from BitArray with ReadOffset 16, MultipleInts, size");
    (*pcVar5)(pFVar4,&local_188,0);
    if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_188.Data.AllocatorInstance.Data);
    }
  }
  pTVar11 = local_268;
  uVar22 = 0;
  uVar18 = 1;
  do {
    (this->Label)._padding_ = (longlong)pTVar11->Base;
    if ((local_138.NumBits <= (int)uVar22) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    FVar15 = (ForElementType<unsigned_int>)&local_138;
    if (local_138.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar15 = local_138.AllocatorInstance.SecondaryData;
    }
    if ((*(uint *)((longlong)FVar15 + (ulonglong)(uVar22 >> 5) * 4) & uVar18) == 0) {
      pFVar10 = FAutomationTestFramework::Get();
      pFVar4 = pFVar10->CurrentTest;
      pcVar5 = *(code **)(pFVar4->_padding_ + 0x28);
      pTVar12 = TStringBuilderBase<wchar_t>::AppendfImpl
                          (pTVar11,L"Add from BitArray with ReadOffset 16, MultipleInts, %d");
      if (pTVar12->End < pTVar12->CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(pTVar12,1);
      }
      *pTVar12->CurPos = L'\0';
      ::FString::FString(&local_178,pTVar12->Base);
      (*pcVar5)(pFVar4,&local_178,0);
      if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_178.Data.AllocatorInstance.Data);
      }
    }
    pTVar12 = local_268;
    uVar22 = uVar22 + 1;
    uVar18 = uVar18 << 1 | (uint)((int)uVar18 < 0);
    uVar20 = local_280[2];
    uVar21 = local_280[3];
  } while ((int)uVar22 < 0x10);
  do {
    (this->Label)._padding_ = (longlong)pTVar12->Base;
    if ((local_138.NumBits <= (int)uVar20) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    FVar15 = (ForElementType<unsigned_int>)&local_138;
    if (local_138.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar15 = local_138.AllocatorInstance.SecondaryData;
    }
    if ((uint)((*(uint *)((longlong)FVar15 + (ulonglong)(uVar20 >> 5) * 4) & uVar21) != 0) !=
        (~(uVar20 >> 2) & 1)) {
      pFVar10 = FAutomationTestFramework::Get();
      pFVar4 = pFVar10->CurrentTest;
      pcVar5 = *(code **)(pFVar4->_padding_ + 0x28);
      pTVar11 = TStringBuilderBase<wchar_t>::AppendfImpl
                          (pTVar12,L"Add from BitArray with ReadOffset 16, MultipleInts, %d");
      if (pTVar11->End < pTVar11->CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(pTVar11,1);
      }
      *pTVar11->CurPos = L'\0';
      ::FString::FString(&local_168,pTVar11->Base);
      (*pcVar5)(pFVar4,&local_168,0);
      if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_168.Data.AllocatorInstance.Data);
      }
    }
    uVar20 = uVar20 + 1;
    uVar21 = uVar21 << 1 | (uint)((int)uVar21 < 0);
  } while ((int)uVar20 < 0x20);
  if (local_138.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_138.AllocatorInstance.SecondaryData);
  }
  if (local_98.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_98.AllocatorInstance.SecondaryData);
  }
  if (local_118.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_118.AllocatorInstance.SecondaryData);
  }
  if (local_158.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_158.AllocatorInstance.SecondaryData);
  }
  if (local_f8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_f8.AllocatorInstance.SecondaryData);
  }
  return;
}

// TestEmpty @ 141ba5620

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FBitArrayTest::TestEmpty(FBitArrayTest *this)

{
  uint *puVar1;
  FAutomationTestBase *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  ulong64 uVar7;
  FAutomationTestFramework *pFVar8;
  uint uVar9;
  undefined1 auStack_f8 [32];
  uint local_d8;
  int local_d0;
  TBitArray<TSizedDefaultAllocator<32>_> local_c8;
  TBitArray<TSizedDefaultAllocator<32>_> local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  TBitArray<TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> local_48;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_f8;
  local_c8.AllocatorInstance = (ForElementType<unsigned_int>)0x0;
  local_c8.NumBits = 0;
  uVar7 = FMemory::QuantizeSize(0x10,0);
  local_c8.MaxBits = (int)(uVar7 >> 2);
  if (local_c8.MaxBits < 1) {
    local_c8.MaxBits = 0x7fffffff;
  }
  local_c8.MaxBits = local_c8.MaxBits << 5;
  TBitArray<TSizedDefaultAllocator<32>_>::Realloc(&local_c8,local_c8.NumBits);
  local_c8.NumBits = local_c8.NumBits + 10;
  uVar9 = local_c8.NumBits >> 0x1f & 0x1f;
  uVar5 = local_c8.NumBits + uVar9;
  iVar6 = (uVar5 & 0x1f) - uVar9;
  if (iVar6 != 0) {
    puVar1 = (uint *)((longlong)local_c8.AllocatorInstance + (longlong)((int)uVar5 >> 5) * 4);
    *puVar1 = *puVar1 & 0xffffffffU >> (0x20U - (char)iVar6 & 0x1f);
  }
  TBitArray<TSizedDefaultAllocator<32>_>::SetRange(&local_c8,0,10,true);
  TBitArray<TSizedDefaultAllocator<32>_>::CheckInvariants(&local_c8);
  local_c8.NumBits = 0;
  if (local_c8.MaxBits != 0) {
    local_c8.MaxBits = 0;
    TBitArray<TSizedDefaultAllocator<32>_>::Realloc(&local_c8,0);
  }
  if (local_c8.MaxBits < local_c8.NumBits) {
    local_d0 = local_c8.MaxBits;
    local_d8 = local_c8.NumBits;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumBits <= MaxBits",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x238,L"TBitArray::NumBits (%d) should never be greater than MaxBits (%d)");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if ((local_c8.NumBits < 0) || (local_c8.MaxBits < 0)) {
    local_d0 = local_c8.MaxBits;
    local_d8 = local_c8.NumBits;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumBits >= 0 && MaxBits >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x239,L"NumBits (%d) and MaxBits (%d) should always be >= 0");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  uVar5 = local_c8.NumBits & 0x8000001f;
  if ((int)uVar5 < 0) {
    uVar5 = (uVar5 - 1 | 0xffffffe0) + 1;
  }
  if (((uVar5 != 0) &&
      ((*(uint *)((longlong)local_c8.AllocatorInstance +
                 (longlong)((int)(local_c8.NumBits + (local_c8.NumBits >> 0x1f & 0x1fU)) >> 5) * 4)
       & -1 << ((byte)uVar5 & 0x1f)) != 0)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(LastWord & SlackMask) == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x243,
                         L"TBitArray slack bits are non-zero, this will result in undefined behavior."
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (local_c8.NumBits != 0) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar2 = pFVar8->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_a8,L"Empty with no arguments sets num to 0");
    (*pcVar3)(pFVar2,&local_a8,0);
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
  }
  if (local_c8.MaxBits != 0) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar2 = pFVar8->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_98,L"Empty with no arguments sets max to 0");
    (*pcVar3)(pFVar2,&local_98,0);
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
  }
  local_b8.AllocatorInstance = (ForElementType<unsigned_int>)0x0;
  local_b8.NumBits = 0;
  uVar7 = FMemory::QuantizeSize(0x10,0);
  local_b8.MaxBits = (int)(uVar7 >> 2);
  if (local_b8.MaxBits < 1) {
    local_b8.MaxBits = 0x7fffffff;
  }
  local_b8.MaxBits = local_b8.MaxBits << 5;
  TBitArray<TSizedDefaultAllocator<32>_>::Realloc(&local_b8,local_b8.NumBits);
  local_b8.NumBits = local_b8.NumBits + 10;
  uVar9 = local_b8.NumBits >> 0x1f & 0x1f;
  uVar5 = local_b8.NumBits + uVar9;
  iVar6 = (uVar5 & 0x1f) - uVar9;
  if (iVar6 != 0) {
    puVar1 = (uint *)((longlong)local_b8.AllocatorInstance + (longlong)((int)uVar5 >> 5) * 4);
    *puVar1 = *puVar1 & 0xffffffffU >> (0x20U - (char)iVar6 & 0x1f);
  }
  TBitArray<TSizedDefaultAllocator<32>_>::SetRange(&local_b8,0,10,true);
  TBitArray<TSizedDefaultAllocator<32>_>::CheckInvariants(&local_b8);
  local_b8.NumBits = 0;
  local_b8.MaxBits = 0x20;
  TBitArray<TSizedDefaultAllocator<32>_>::Realloc(&local_b8,0);
  if (local_b8.MaxBits < local_b8.NumBits) {
    local_d0 = local_b8.MaxBits;
    local_d8 = local_b8.NumBits;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumBits <= MaxBits",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x238,L"TBitArray::NumBits (%d) should never be greater than MaxBits (%d)");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if ((local_b8.NumBits < 0) || (local_b8.MaxBits < 0)) {
    local_d0 = local_b8.MaxBits;
    local_d8 = local_b8.NumBits;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumBits >= 0 && MaxBits >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x239,L"NumBits (%d) and MaxBits (%d) should always be >= 0");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  uVar5 = local_b8.NumBits & 0x8000001f;
  if ((int)uVar5 < 0) {
    uVar5 = (uVar5 - 1 | 0xffffffe0) + 1;
  }
  if (((uVar5 != 0) &&
      ((*(uint *)((longlong)local_b8.AllocatorInstance +
                 (longlong)((int)(local_b8.NumBits + (local_b8.NumBits >> 0x1f & 0x1fU)) >> 5) * 4)
       & -1 << ((byte)uVar5 & 0x1f)) != 0)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(LastWord & SlackMask) == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x243,
                         L"TBitArray slack bits are non-zero, this will result in undefined behavior."
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (local_b8.NumBits != 0) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar2 = pFVar8->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_88,L"Empty with an arguments sets num to 0");
    (*pcVar3)(pFVar2,&local_88,0);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
  }
  if (local_b8.MaxBits != 0x20) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar2 = pFVar8->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_78,L"Empty with an argument sets max to rounded up input");
    (*pcVar3)(pFVar2,&local_78,0);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
  }
  local_48.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_48.NumBits = 0;
  local_48.MaxBits = 0x80;
  iVar6 = TBitArray<TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>::AddUninitialized
                    (&local_48,0x100);
  TBitArray<TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>::SetRange
            (&local_48,iVar6,0x100,true);
  TBitArray<TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>::CheckInvariants(&local_48);
  local_48.NumBits = 0;
  if (0x80 < (uint)local_48.MaxBits) {
    local_48.MaxBits = 0x80;
    TBitArray<TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>::Realloc(&local_48,0);
  }
  TBitArray<TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>::CheckInvariants(&local_48);
  if (local_48.NumBits != 0) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar2 = pFVar8->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_68,
                       L"Empty from a dynamic allocation with an inline allocator sets num to 0");
    (*pcVar3)(pFVar2,&local_68,0);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  if (local_48.MaxBits != 0x80) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar2 = pFVar8->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_58,
                       L"Empty from a dynamic allocation with an inline allocator sets max back to the size of the inline allocation"
                      );
    (*pcVar3)(pFVar2,&local_58,0);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  if (local_48.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_48.AllocatorInstance.SecondaryData);
  }
  if (local_b8.AllocatorInstance != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_b8.AllocatorInstance);
  }
  if (local_c8.AllocatorInstance != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_c8.AllocatorInstance);
  }
  return;
}

// TestEqualityOperator @ 141ba5bc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FBitArrayTest::TestEqualityOperator(FBitArrayTest *this)

{
  ForElementType<unsigned_int> *pFVar1;
  uint *puVar2;
  bool bVar3;
  FAutomationTestBase *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FAutomationTestFramework *pFVar8;
  ForElementType<unsigned_int> FVar9;
  ForElementType<unsigned_int> FVar10;
  ForElementType<unsigned_int> FVar11;
  ForElementType<unsigned_int> FVar12;
  longlong lVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  ForAnyElementType FVar17;
  FBitArrayTest *pFVar18;
  int *piVar19;
  TBitArray<FDefaultBitArrayAllocator> *pTVar20;
  ForAnyElementType FVar21;
  undefined1 auStack_138 [32];
  ForElementType<unsigned_int> local_118;
  FString local_110;
  FString local_100;
  FString local_f0;
  FString local_e0;
  FString local_d0;
  FString local_c0;
  FString local_b0;
  FString local_a0;
  ForElementType<unsigned_int> local_90;
  uint local_78;
  int local_74;
  ForElementType<unsigned_int> local_70;
  uint local_58;
  int local_54;
  ForElementType<unsigned_int> local_50;
  uint local_38;
  int local_34;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_138;
  iVar14 = 0;
  local_70.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_54 = 0x80;
  local_58 = this->NumGrowingTrue;
  uVar16 = this->NumGrowingTrue + 0x1f;
  uVar15 = uVar16 >> 5;
  if (uVar16 >> 5 != 0) {
    if (4 < uVar15) {
      TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
      ResizeAllocation(&local_70,0,uVar15,4);
      local_54 = uVar15 << 5;
    }
    FVar12 = (ForElementType<unsigned_int>)&local_70;
    if (local_70.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar12 = local_70.SecondaryData;
    }
    if (uVar15 < 9) {
      iVar7 = -1;
    }
    else {
      iVar7 = 0xff;
    }
    memset((void *)FVar12,iVar7,(ulonglong)uVar15 << 2);
    uVar16 = local_58 & 0x8000001f;
    if ((int)uVar16 < 0) {
      uVar16 = (uVar16 - 1 | 0xffffffe0) + 1;
    }
    if (uVar16 != 0) {
      FVar12 = (ForElementType<unsigned_int>)&local_70;
      if (local_70.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar12 = local_70.SecondaryData;
      }
      puVar2 = (uint *)((longlong)FVar12 +
                       (longlong)((int)(local_58 + ((int)local_58 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar2 = *puVar2 & 0xffffffffU >> (-(char)uVar16 & 0x1fU);
    }
  }
  local_50.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_34 = 0x80;
  local_38 = this->NumGrowingTrue;
  uVar16 = this->NumGrowingTrue + 0x1f;
  uVar15 = uVar16 >> 5;
  if (uVar16 >> 5 != 0) {
    if (4 < uVar15) {
      TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
      ResizeAllocation(&local_50,0,uVar15,4);
      local_34 = uVar15 << 5;
    }
    FVar12 = (ForElementType<unsigned_int>)&local_50;
    if (local_50.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar12 = local_50.SecondaryData;
    }
    if (uVar15 < 9) {
      iVar7 = -1;
    }
    else {
      iVar7 = 0xff;
    }
    memset((void *)FVar12,iVar7,(ulonglong)uVar15 << 2);
    uVar16 = local_38 & 0x8000001f;
    if ((int)uVar16 < 0) {
      uVar16 = (uVar16 - 1 | 0xffffffe0) + 1;
    }
    if (uVar16 != 0) {
      FVar12 = (ForElementType<unsigned_int>)&local_50;
      if (local_50.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar12 = local_50.SecondaryData;
      }
      puVar2 = (uint *)((longlong)FVar12 +
                       (longlong)((int)(local_38 + ((int)local_38 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar2 = *puVar2 & 0xffffffffU >> (-(char)uVar16 & 0x1fU);
    }
  }
  local_90.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_74 = 0x80;
  local_78 = this->NumGrowingTrue - 1;
  uVar16 = this->NumGrowingTrue + 0x1e;
  uVar15 = uVar16 >> 5;
  if (uVar16 >> 5 != 0) {
    if (4 < uVar15) {
      TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
      ResizeAllocation(&local_90,0,uVar15,4);
      local_74 = uVar15 << 5;
    }
    FVar12 = (ForElementType<unsigned_int>)&local_90;
    if (local_90.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar12 = local_90.SecondaryData;
    }
    if (uVar15 < 9) {
      iVar7 = -1;
    }
    else {
      iVar7 = 0xff;
    }
    memset((void *)FVar12,iVar7,(ulonglong)uVar15 << 2);
    uVar16 = local_78 & 0x8000001f;
    if ((int)uVar16 < 0) {
      uVar16 = (uVar16 - 1 | 0xffffffe0) + 1;
    }
    if (uVar16 != 0) {
      FVar12 = (ForElementType<unsigned_int>)&local_90;
      if (local_90.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar12 = local_90.SecondaryData;
      }
      puVar2 = (uint *)((longlong)FVar12 +
                       (longlong)((int)(local_78 + ((int)local_78 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar2 = *puVar2 & 0xffffffffU >> (0x20U - (char)uVar16 & 0x1f);
    }
  }
  iVar7 = this->NumGrowingTrue;
  if (0 < iVar7 + -1) {
    uVar16 = 1;
    pFVar18 = this;
    do {
      bVar3 = pFVar18->bGrowingTrue[0];
      if (((iVar14 < 0) || ((int)local_58 <= iVar14)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FVar12 = (ForElementType<unsigned_int>)&local_70;
      if (local_70.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar12 = local_70.SecondaryData;
      }
      iVar7 = iVar14;
      if (iVar14 < 0) {
        iVar7 = iVar14 + 0x1f;
      }
      lVar13 = (longlong)(iVar7 >> 5) * 4;
      if (bVar3 == false) {
        uVar15 = *(uint *)(lVar13 + (longlong)FVar12) & ~uVar16;
      }
      else {
        uVar15 = *(uint *)(lVar13 + (longlong)FVar12) | uVar16;
      }
      *(uint *)(lVar13 + (longlong)FVar12) = uVar15;
      bVar3 = pFVar18->bGrowingTrue[0];
      if (((iVar14 < 0) || ((int)local_38 <= iVar14)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FVar12 = (ForElementType<unsigned_int>)&local_50;
      if (local_50.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar12 = local_50.SecondaryData;
      }
      if (bVar3 == false) {
        uVar15 = *(uint *)((longlong)FVar12 + lVar13) & ~uVar16;
      }
      else {
        uVar15 = *(uint *)((longlong)FVar12 + lVar13) | uVar16;
      }
      *(uint *)((longlong)FVar12 + lVar13) = uVar15;
      bVar3 = pFVar18->bGrowingTrue[0];
      if (((iVar14 < 0) || ((int)local_78 <= iVar14)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FVar12 = (ForElementType<unsigned_int>)&local_90;
      if (local_90.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar12 = local_90.SecondaryData;
      }
      if (bVar3 == false) {
        uVar15 = *(uint *)((longlong)FVar12 + lVar13) & ~uVar16;
      }
      else {
        uVar15 = *(uint *)((longlong)FVar12 + lVar13) | uVar16;
      }
      *(uint *)((longlong)FVar12 + lVar13) = uVar15;
      iVar14 = iVar14 + 1;
      iVar7 = this->NumGrowingTrue;
      pFVar18 = (FBitArrayTest *)(pFVar18->bGrowingTrue + 1);
      uVar16 = uVar16 << 1 | (uint)((int)uVar16 < 0);
    } while (iVar14 < iVar7 + -1);
  }
  iVar7 = iVar7 + -1;
  bVar3 = this->bGrowingTrue[iVar7];
  if (((iVar7 < 0) || ((int)local_58 <= iVar7)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FVar12 = (ForElementType<unsigned_int>)&local_70;
  if (local_70.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FVar12 = local_70.SecondaryData;
  }
  lVar13 = (longlong)((int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5);
  uVar15 = 1 << ((byte)iVar7 & 0x1f);
  uVar16 = *(uint *)((longlong)FVar12 + lVar13 * 4);
  if (bVar3 == false) {
    uVar16 = uVar16 & ~uVar15;
  }
  else {
    uVar16 = uVar16 | uVar15;
  }
  *(uint *)((longlong)FVar12 + lVar13 * 4) = uVar16;
  iVar14 = this->NumGrowingTrue + -1;
  bVar3 = this->bGrowingTrue[iVar14];
  if (((iVar14 < 0) || ((int)local_38 <= iVar14)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FVar12 = (ForElementType<unsigned_int>)&local_50;
  if (local_50.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FVar12 = local_50.SecondaryData;
  }
  uVar15 = 1 << ((byte)iVar14 & 0x1f);
  lVar13 = (longlong)((int)(iVar14 + (iVar14 >> 0x1f & 0x1fU)) >> 5);
  uVar16 = *(uint *)((longlong)FVar12 + lVar13 * 4);
  if (bVar3 == false) {
    uVar16 = uVar16 | uVar15;
  }
  else {
    uVar16 = uVar16 & ~uVar15;
  }
  *(uint *)((longlong)FVar12 + lVar13 * 4) = uVar16;
  uVar16 = (this->ArrGrowingTrue).NumBits;
  pFVar1 = &(this->ArrGrowingTrue).AllocatorInstance.SecondaryData;
  if (uVar16 == local_58) {
    FVar12 = (ForElementType<unsigned_int>)&local_70;
    if (local_70.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar12 = local_70.SecondaryData;
    }
    FVar9 = *pFVar1;
    if (FVar9 == (ForElementType<unsigned_int>)0x0) {
      FVar9 = (ForElementType<unsigned_int>)&this->ArrGrowingTrue;
    }
    iVar14 = memcmp((void *)FVar9,(void *)FVar12,(ulonglong)(uVar16 + 0x1f >> 5) << 2);
    if (iVar14 != 0) goto LAB_141ba60b7;
  }
  else {
LAB_141ba60b7:
    pFVar8 = FAutomationTestFramework::Get();
    pFVar4 = pFVar8->CurrentTest;
    pcVar5 = *(code **)(pFVar4->_padding_ + 0x28);
    ::FString::FString(&local_110,L"Equality operator on equal arrays");
    (*pcVar5)(pFVar4,&local_110,0);
    if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_110.Data.AllocatorInstance.Data);
    }
  }
  uVar16 = (this->ArrGrowingTrue).NumBits;
  if (uVar16 == local_58) {
    FVar12 = (ForElementType<unsigned_int>)&local_70;
    if (local_70.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar12 = local_70.SecondaryData;
    }
    FVar9 = *pFVar1;
    if (FVar9 == (ForElementType<unsigned_int>)0x0) {
      FVar9 = (ForElementType<unsigned_int>)&this->ArrGrowingTrue;
    }
    iVar14 = memcmp((void *)FVar9,(void *)FVar12,(ulonglong)(uVar16 + 0x1f >> 5) << 2);
    if (iVar14 == 0) goto LAB_141ba617e;
  }
  pFVar8 = FAutomationTestFramework::Get();
  pFVar4 = pFVar8->CurrentTest;
  pcVar5 = *(code **)(pFVar4->_padding_ + 0x28);
  ::FString::FString(&local_100,L"Inequality operator on equal arrays");
  (*pcVar5)(pFVar4,&local_100,0);
  if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_100.Data.AllocatorInstance.Data);
  }
LAB_141ba617e:
  pTVar20 = &this->ArrGrowingTrue;
  piVar19 = &(this->ArrGrowingTrue).NumBits;
  uVar16 = *piVar19;
  if (uVar16 == local_38) {
    FVar12 = (ForElementType<unsigned_int>)&local_50;
    if (local_50.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar12 = local_50.SecondaryData;
    }
    FVar9 = (this->ArrGrowingTrue).AllocatorInstance.SecondaryData;
    if (FVar9 == (ForElementType<unsigned_int>)0x0) {
      FVar9 = (ForElementType<unsigned_int>)pTVar20;
    }
    local_118 = (ForElementType<unsigned_int>)pTVar20;
    iVar14 = memcmp((void *)FVar9,(void *)FVar12,(ulonglong)(uVar16 + 0x1f >> 5) << 2);
    if (iVar14 == 0) {
      local_118 = (ForElementType<unsigned_int>)pTVar20;
      pFVar8 = FAutomationTestFramework::Get();
      pFVar4 = pFVar8->CurrentTest;
      pcVar5 = *(code **)(pFVar4->_padding_ + 0x28);
      ::FString::FString(&local_f0,L"Equality operator on nonequal arrays");
      (*pcVar5)(pFVar4,&local_f0,0);
      if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        local_118 = (ForElementType<unsigned_int>)pTVar20;
        FMemory::Free(local_f0.Data.AllocatorInstance.Data);
      }
    }
  }
  FVar12 = (ForElementType<unsigned_int>)&this->ArrGrowingTrue;
  uVar16 = *piVar19;
  local_118 = FVar12;
  local_110.Data.AllocatorInstance.Data = (FScriptContainerElement *)FVar12;
  if (uVar16 == local_38) {
    FVar9 = (ForElementType<unsigned_int>)&local_50;
    if (local_50.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar9 = local_50.SecondaryData;
    }
    FVar10 = (this->ArrGrowingTrue).AllocatorInstance.SecondaryData;
    if (FVar10 == (ForElementType<unsigned_int>)0x0) {
      FVar10 = (ForElementType<unsigned_int>)pTVar20;
    }
    iVar14 = memcmp((void *)FVar10,(void *)FVar9,(ulonglong)(uVar16 + 0x1f >> 5) << 2);
    local_110.Data.AllocatorInstance.Data = (FScriptContainerElement *)FVar12;
    if (iVar14 == 0) {
      pFVar8 = FAutomationTestFramework::Get();
      pFVar4 = pFVar8->CurrentTest;
      pcVar5 = *(code **)(pFVar4->_padding_ + 0x28);
      ::FString::FString(&local_e0,L"Inequality operator on nonequal arrays");
      (*pcVar5)(pFVar4,&local_e0,0);
      FVar12 = local_118;
      local_110.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_118;
      if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e0.Data.AllocatorInstance.Data);
        local_110.Data.AllocatorInstance.Data = (FScriptContainerElement *)&this->ArrGrowingTrue;
      }
    }
  }
  FVar9 = local_90.SecondaryData;
  uVar16 = (this->ArrGrowingTrue).NumBits;
  FVar17.Data = local_110.Data.AllocatorInstance.Data;
  FVar21.Data = local_110.Data.AllocatorInstance.Data;
  if (uVar16 == local_78) {
    FVar10 = (this->ArrGrowingTrue).AllocatorInstance.SecondaryData;
    FVar11 = (ForElementType<unsigned_int>)&local_90;
    if (local_90.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar11 = local_90.SecondaryData;
    }
    if (FVar10 == (ForElementType<unsigned_int>)0x0) {
      FVar10 = FVar12;
    }
    iVar14 = memcmp((void *)FVar10,(void *)FVar11,(ulonglong)(uVar16 + 0x1f >> 5) << 2);
    FVar21.Data = local_110.Data.AllocatorInstance.Data;
    FVar17.Data = FVar21.Data;
    if (iVar14 == 0) {
      pFVar8 = FAutomationTestFramework::Get();
      pFVar4 = pFVar8->CurrentTest;
      pcVar5 = *(code **)(pFVar4->_padding_ + 0x28);
      ::FString::FString(&local_d0,L"Equality operator when lhs is superset of rhs");
      (*pcVar5)(pFVar4,&local_d0,0);
      FVar9 = local_90.SecondaryData;
      if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d0.Data.AllocatorInstance.Data);
        FVar21.Data = (FScriptContainerElement *)&this->ArrGrowingTrue;
        FVar9 = local_90.SecondaryData;
        FVar17.Data = local_110.Data.AllocatorInstance.Data;
      }
    }
  }
  uVar16 = (this->ArrGrowingTrue).NumBits;
  FVar12 = (ForElementType<unsigned_int>)FVar21.Data;
  if (uVar16 == local_78) {
    FVar10 = (this->ArrGrowingTrue).AllocatorInstance.SecondaryData;
    FVar11 = (ForElementType<unsigned_int>)&local_90;
    if (FVar9 != (ForElementType<unsigned_int>)0x0) {
      FVar11 = FVar9;
    }
    if (FVar10 == (ForElementType<unsigned_int>)0x0) {
      FVar10 = (ForElementType<unsigned_int>)FVar17.Data;
    }
    iVar14 = memcmp((void *)FVar10,(void *)FVar11,(ulonglong)(uVar16 + 0x1f >> 5) << 2);
    if (iVar14 == 0) {
      pFVar8 = FAutomationTestFramework::Get();
      pFVar4 = pFVar8->CurrentTest;
      pcVar5 = *(code **)(pFVar4->_padding_ + 0x28);
      ::FString::FString(&local_c0,L"Inequality operator when lhs is superset of rhs");
      (*pcVar5)(pFVar4,&local_c0,0);
      FVar9 = local_90.SecondaryData;
      if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c0.Data.AllocatorInstance.Data);
        FVar12 = (ForElementType<unsigned_int>)&this->ArrGrowingTrue;
        FVar9 = local_90.SecondaryData;
      }
    }
  }
  if (local_78 == (this->ArrGrowingTrue).NumBits) {
    FVar10 = (this->ArrGrowingTrue).AllocatorInstance.SecondaryData;
    if (FVar10 == (ForElementType<unsigned_int>)0x0) {
      FVar10 = (ForElementType<unsigned_int>)FVar21.Data;
    }
    FVar11 = (ForElementType<unsigned_int>)&local_90;
    if (FVar9 != (ForElementType<unsigned_int>)0x0) {
      FVar11 = FVar9;
    }
    iVar14 = memcmp((void *)FVar11,(void *)FVar10,(ulonglong)(local_78 + 0x1f >> 5) << 2);
    if (iVar14 == 0) {
      pFVar8 = FAutomationTestFramework::Get();
      pFVar4 = pFVar8->CurrentTest;
      pcVar5 = *(code **)(pFVar4->_padding_ + 0x28);
      ::FString::FString(&local_b0,L"Equality operator when lhs is subset of rhs");
      (*pcVar5)(pFVar4,&local_b0,0);
      FVar9 = local_90.SecondaryData;
      if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b0.Data.AllocatorInstance.Data);
        FVar9 = local_90.SecondaryData;
      }
    }
  }
  if (local_78 == (this->ArrGrowingTrue).NumBits) {
    FVar10 = (this->ArrGrowingTrue).AllocatorInstance.SecondaryData;
    if (FVar10 == (ForElementType<unsigned_int>)0x0) {
      FVar10 = FVar12;
    }
    FVar12 = (ForElementType<unsigned_int>)&local_90;
    if (FVar9 != (ForElementType<unsigned_int>)0x0) {
      FVar12 = FVar9;
    }
    iVar14 = memcmp((void *)FVar12,(void *)FVar10,(ulonglong)(local_78 + 0x1f >> 5) << 2);
    if (iVar14 == 0) {
      pFVar8 = FAutomationTestFramework::Get();
      pFVar4 = pFVar8->CurrentTest;
      pcVar5 = *(code **)(pFVar4->_padding_ + 0x28);
      ::FString::FString(&local_a0,L"Inequality operator when lhs is subset of rhs");
      (*pcVar5)(pFVar4,&local_a0,0);
      FVar9 = local_90.SecondaryData;
      if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a0.Data.AllocatorInstance.Data);
        FVar9 = local_90.SecondaryData;
      }
    }
  }
  if (FVar9 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar9);
  }
  if (local_50.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_50.SecondaryData);
  }
  if (local_70.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_70.SecondaryData);
  }
  return;
}

// TestGetRange @ 141ba6530

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FBitArrayTest::TestGetRange(FBitArrayTest *this)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  bool bVar3;
  FAutomationTestFramework *pFVar4;
  uint *puVar5;
  undefined1 auStackY_a8 [32];
  uint local_78;
  uint local_74;
  FString local_70;
  FString local_60;
  uint local_50 [4];
  uint *local_40;
  int local_38;
  undefined4 local_34;
  uint local_30 [4];
  uint *local_20;
  int local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  local_74 = 0xffffffff;
  local_78 = 0;
  local_18 = 0x20;
  local_38 = 0x20;
  local_20 = (uint *)0x0;
  local_14 = 0x80;
  local_30[0] = 0;
  local_40 = (uint *)0x0;
  local_34 = 0x80;
  local_50[0] = 0xffffffff;
  FBitArrayMemory::MemmoveBitsWordOrder(&local_78,0,local_50,0,10);
  if (local_38 < 0x14) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index >= 0 && NumBitsToGet >= 0 && Index + NumBitsToGet <= NumBits",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x3df,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  puVar5 = local_50;
  if (local_40 != (uint *)0x0) {
    puVar5 = local_40;
  }
  FBitArrayMemory::MemmoveBitsWordOrder(&local_78,10,puVar5,10,10);
  if (local_38 < 0x20) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index >= 0 && NumBitsToGet >= 0 && Index + NumBitsToGet <= NumBits",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x3df,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  puVar5 = local_50;
  if (local_40 != (uint *)0x0) {
    puVar5 = local_40;
  }
  FBitArrayMemory::MemmoveBitsWordOrder(&local_78,0x14,puVar5,0x14,0xc);
  if (local_18 < 10) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index >= 0 && NumBitsToGet >= 0 && Index + NumBitsToGet <= NumBits",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x3df,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  puVar5 = local_30;
  if (local_20 != (uint *)0x0) {
    puVar5 = local_20;
  }
  FBitArrayMemory::MemmoveBitsWordOrder(&local_74,0,puVar5,0,10);
  if (local_18 < 0x14) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index >= 0 && NumBitsToGet >= 0 && Index + NumBitsToGet <= NumBits",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x3df,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  puVar5 = local_30;
  if (local_20 != (uint *)0x0) {
    puVar5 = local_20;
  }
  FBitArrayMemory::MemmoveBitsWordOrder(&local_74,10,puVar5,10,10);
  if (local_18 < 0x20) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index >= 0 && NumBitsToGet >= 0 && Index + NumBitsToGet <= NumBits",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x3df,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  puVar5 = local_30;
  if (local_20 != (uint *)0x0) {
    puVar5 = local_20;
  }
  FBitArrayMemory::MemmoveBitsWordOrder(&local_74,0x14,puVar5,0x14,0xc);
  if (local_78 != 0xffffffff) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_70,L"GetRange Zeroes");
    (*pcVar2)(pFVar1,&local_70,0);
    if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.Data.AllocatorInstance.Data);
    }
  }
  if (local_74 != 0) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_60,L"GetRange Ones");
    (*pcVar2)(pFVar1,&local_60,0);
    if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.Data.AllocatorInstance.Data);
    }
  }
  if (local_40 != (uint *)0x0) {
    FMemory::Free(local_40);
  }
  if (local_20 != (uint *)0x0) {
    FMemory::Free(local_20);
  }
  return;
}

// TestInitAndSetNumUninitialized @ 141ba6820

/* WARNING: Removing unreachable block (ram,0x000141ba7da2) */
/* WARNING: Removing unreachable block (ram,0x000141ba70f5) */
/* WARNING: Removing unreachable block (ram,0x000141ba7122) */
/* WARNING: Removing unreachable block (ram,0x000141ba7125) */
/* WARNING: Removing unreachable block (ram,0x000141ba697e) */
/* WARNING: Removing unreachable block (ram,0x000141ba69a2) */
/* WARNING: Removing unreachable block (ram,0x000141ba69a6) */
/* WARNING: Removing unreachable block (ram,0x000141ba73a7) */
/* WARNING: Removing unreachable block (ram,0x000141ba73d4) */
/* WARNING: Removing unreachable block (ram,0x000141ba73d5) */
/* WARNING: Removing unreachable block (ram,0x000141ba73df) */
/* WARNING: Removing unreachable block (ram,0x000141ba73e5) */
/* WARNING: Removing unreachable block (ram,0x000141ba7417) */
/* WARNING: Removing unreachable block (ram,0x000141ba7418) */
/* WARNING: Removing unreachable block (ram,0x000141ba8001) */
/* WARNING: Removing unreachable block (ram,0x000141ba7dd7) */
/* WARNING: Removing unreachable block (ram,0x000141ba7428) */
/* WARNING: Removing unreachable block (ram,0x000141ba69d2) */
/* WARNING: Removing unreachable block (ram,0x000141ba69c3) */
/* WARNING: Removing unreachable block (ram,0x000141ba7142) */
/* WARNING: Removing unreachable block (ram,0x000141ba7433) */
/* WARNING: Removing unreachable block (ram,0x000141ba7452) */
/* WARNING: Removing unreachable block (ram,0x000141ba7477) */
/* WARNING: Removing unreachable block (ram,0x000141ba7478) */
/* WARNING: Removing unreachable block (ram,0x000141ba8038) */
/* WARNING: Removing unreachable block (ram,0x000141ba7482) */
/* WARNING: Removing unreachable block (ram,0x000141ba74c3) */
/* WARNING: Removing unreachable block (ram,0x000141ba74cf) */
/* WARNING: Removing unreachable block (ram,0x000141ba7510) */

void __thiscall FBitArrayTest::TestInitAndSetNumUninitialized(FBitArrayTest *this)

{
  uint *puVar1;
  FAutomationTestBase *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FAutomationTestFramework *pFVar6;
  ulong64 uVar7;
  int iVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  TBitArray<TSizedDefaultAllocator<32>_> local_358;
  TBitArray<TSizedDefaultAllocator<32>_> local_348;
  TBitArray<TSizedDefaultAllocator<32>_> local_338;
  TBitArray<TSizedDefaultAllocator<32>_> local_328;
  ForAnyElementType local_318;
  undefined8 local_310;
  TBitArray<TSizedDefaultAllocator<32>_> local_308;
  TBitArray<TSizedDefaultAllocator<32>_> local_2f8;
  TBitArray<TSizedDefaultAllocator<32>_> local_2e8;
  TBitArray<TSizedDefaultAllocator<32>_> local_2d8;
  TBitArray<TSizedDefaultAllocator<32>_> local_2c8;
  TBitArray<TSizedDefaultAllocator<32>_> local_2b8;
  TBitArray<TSizedDefaultAllocator<32>_> local_2a8;
  ForAnyElementType local_298;
  undefined8 local_290;
  ForAnyElementType local_288;
  undefined8 local_280;
  TBitArray<TSizedDefaultAllocator<32>_> local_278;
  TBitArray<TSizedDefaultAllocator<32>_> local_268;
  TBitArray<TSizedDefaultAllocator<32>_> local_258;
  FString local_248;
  FString local_238;
  FString local_228;
  FString local_218;
  FString local_208;
  FString local_1f8;
  FString local_1e8;
  FString local_1d8;
  FString local_1c8;
  FString local_1b8;
  FString local_1a8;
  FString local_198;
  FString local_188;
  FString local_178;
  FString local_168;
  FString local_158 [3];
  FString local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  ulonglong uVar12;
  
  uVar9 = 0;
  local_268.AllocatorInstance = (ForElementType<unsigned_int>)0x0;
  local_268.NumBits = 0;
  local_268.MaxBits = 0;
  TBitArray<TSizedDefaultAllocator<32>_>::SetNumUninitialized(&local_268,0);
  TBitArray<TSizedDefaultAllocator<32>_>::CheckInvariants(&local_268);
  if (local_268.NumBits != 0) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar2 = pFVar6->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_248,L"SetNumUninitialized 0 from empty keeps num at 0");
    (*pcVar3)(pFVar2,&local_248,0);
    if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_248.Data.AllocatorInstance.Data);
    }
  }
  if (local_268.MaxBits != 0) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar2 = pFVar6->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_238,L"SetNumUninitialized 0 from empty keeps max at 0");
    (*pcVar3)(pFVar2,&local_238,0);
    if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_238.Data.AllocatorInstance.Data);
    }
  }
  local_2e8.AllocatorInstance = (ForElementType<unsigned_int>)0x0;
  local_2e8.NumBits = 0x20;
  local_2e8.MaxBits = 0;
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&local_2e8,0,1,4);
  *(undefined4 *)local_2e8.AllocatorInstance = 0xffffffff;
  uVar10 = local_2e8.NumBits & 0x8000001f;
  if ((int)uVar10 < 0) {
    uVar10 = (uVar10 - 1 | 0xffffffe0) + 1;
  }
  if (uVar10 != 0) {
    puVar1 = (uint *)((longlong)local_2e8.AllocatorInstance +
                     (longlong)((int)(local_2e8.NumBits + (local_2e8.NumBits >> 0x1f & 0x1fU)) >> 5)
                     * 4);
    *puVar1 = *puVar1 & 0xffffffffU >> (0x20U - (char)uVar10 & 0x1f);
  }
  local_2e8.NumBits = 0;
  local_2e8.MaxBits = 0x20;
  TBitArray<TSizedDefaultAllocator<32>_>::CheckInvariants(&local_2e8);
  if (local_2e8.NumBits != 0) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar2 = pFVar6->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_228,L"SetNumUninitialized 0 from filled sets num to 0");
    (*pcVar3)(pFVar2,&local_228,0);
    if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_228.Data.AllocatorInstance.Data);
    }
  }
  if (local_2e8.MaxBits != 0x20) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar2 = pFVar6->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_218,L"SetNumUninitialized 0 from filled does not change max");
    (*pcVar3)(pFVar2,&local_218,0);
    if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_218.Data.AllocatorInstance.Data);
    }
  }
  local_278.AllocatorInstance = (ForElementType<unsigned_int>)0x0;
  local_278.NumBits = 0;
  local_278.MaxBits = 0;
  TBitArray<TSizedDefaultAllocator<32>_>::SetNumUninitialized(&local_278,0x14);
  TBitArray<TSizedDefaultAllocator<32>_>::CheckInvariants(&local_278);
  if (local_278.NumBits != 0x14) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar2 = pFVar6->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_208,L"SetNumUninitialized 20 from empty sets num at 20");
    (*pcVar3)(pFVar2,&local_208,0);
    if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_208.Data.AllocatorInstance.Data);
    }
  }
  if (local_278.MaxBits < 0x20) {
LAB_141ba6b06:
    pFVar6 = FAutomationTestFramework::Get();
    pFVar2 = pFVar6->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_1f8,L"SetNumUninitialized 20 sets max at rounded up");
    (*pcVar3)(pFVar2,&local_1f8,0);
    if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
    }
  }
  else {
    uVar10 = local_278.MaxBits & 0x8000001f;
    if ((int)uVar10 < 0) {
      uVar10 = (uVar10 - 1 | 0xffffffe0) + 1;
    }
    if (uVar10 != 0) goto LAB_141ba6b06;
  }
  local_2c8.AllocatorInstance = (ForElementType<unsigned_int>)0x0;
  local_2c8.NumBits = 0x20;
  local_2c8.MaxBits = 0;
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&local_2c8,0,1,4);
  local_2c8.MaxBits = 0x20;
  *(undefined4 *)local_2c8.AllocatorInstance = 0xffffffff;
  uVar10 = local_2c8.NumBits & 0x8000001f;
  if ((int)uVar10 < 0) {
    uVar10 = (uVar10 - 1 | 0xffffffe0) + 1;
  }
  if (uVar10 != 0) {
    puVar1 = (uint *)((longlong)local_2c8.AllocatorInstance +
                     (longlong)((int)(local_2c8.NumBits + (local_2c8.NumBits >> 0x1f & 0x1fU)) >> 5)
                     * 4);
    *puVar1 = *puVar1 & 0xffffffffU >> (-(char)uVar10 & 0x1fU);
  }
  TBitArray<TSizedDefaultAllocator<32>_>::SetNumUninitialized(&local_2c8,0x30);
  TBitArray<TSizedDefaultAllocator<32>_>::CheckInvariants(&local_2c8);
  if (local_2c8.NumBits != 0x30) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar2 = pFVar6->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_1e8,
                       L"SetNumUninitialized to a higher number sets num to the higher number");
    (*pcVar3)(pFVar2,&local_1e8,0);
    if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
    }
  }
  if (0x3f < local_2c8.MaxBits) {
    uVar10 = local_2c8.MaxBits & 0x8000001f;
    if ((int)uVar10 < 0) {
      uVar10 = (uVar10 - 1 | 0xffffffe0) + 1;
    }
    if (uVar10 == 0) goto LAB_141ba6c78;
  }
  pFVar6 = FAutomationTestFramework::Get();
  pFVar2 = pFVar6->CurrentTest;
  pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
  ::FString::FString(&local_1d8,L"SetNumUninitialized to a higher number sets max to rounded up");
  (*pcVar3)(pFVar2,&local_1d8,0);
  if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
  }
LAB_141ba6c78:
  uVar10 = 1;
  uVar12 = uVar9;
  do {
    if ((local_2c8.NumBits <= (int)uVar12) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((*(uint *)((longlong)local_2c8.AllocatorInstance + (uVar12 >> 5) * 4) & uVar10) == 0) {
      pFVar6 = FAutomationTestFramework::Get();
      pFVar2 = pFVar6->CurrentTest;
      pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
      ::FString::FString(&local_1c8,
                         L"SetNumUninitialized to a higher number keeps the old elements - ones");
      (*pcVar3)(pFVar2,&local_1c8,0);
      if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
      }
    }
    uVar11 = (int)uVar12 + 1;
    uVar12 = (ulonglong)uVar11;
    uVar10 = uVar10 << 1 | (uint)((int)uVar10 < 0);
  } while ((int)uVar11 < 0x20);
  local_2f8.AllocatorInstance = (ForElementType<unsigned_int>)0x0;
  local_2f8.NumBits = 0x20;
  local_2f8.MaxBits = 0;
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&local_2f8,0,1,4);
  iVar5 = local_2f8.NumBits;
  *(undefined4 *)local_2f8.AllocatorInstance = 0;
  uVar10 = local_2f8.NumBits & 0x8000001f;
  if ((int)uVar10 < 0) {
    uVar10 = (uVar10 - 1 | 0xffffffe0) + 1;
  }
  if (uVar10 != 0) {
    puVar1 = (uint *)((longlong)local_2f8.AllocatorInstance +
                     (longlong)((int)(local_2f8.NumBits + (local_2f8.NumBits >> 0x1f & 0x1fU)) >> 5)
                     * 4);
    *puVar1 = *puVar1 & 0xffffffffU >> (-(char)uVar10 & 0x1fU);
  }
  local_2f8.NumBits = 0x30;
  local_2f8.MaxBits = 0x20;
  uVar7 = FMemory::QuantizeSize(8,0);
  iVar8 = (int)(uVar7 >> 2);
  if (iVar8 < 2) {
    iVar8 = 0x7fffffff;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&local_2f8,iVar5 + 0x1fU >> 5,iVar8,4);
  local_2f8.MaxBits = iVar8 << 5;
  uVar10 = local_2f8.NumBits & 0x8000001f;
  if ((int)uVar10 < 0) {
    uVar10 = (uVar10 - 1 | 0xffffffe0) + 1;
  }
  if (uVar10 != 0) {
    puVar1 = (uint *)((longlong)local_2f8.AllocatorInstance +
                     (longlong)((int)(local_2f8.NumBits + (local_2f8.NumBits >> 0x1f & 0x1fU)) >> 5)
                     * 4);
    *puVar1 = *puVar1 & 0xffffffffU >> (-(char)uVar10 & 0x1fU);
  }
  TBitArray<TSizedDefaultAllocator<32>_>::CheckInvariants(&local_2f8);
  uVar10 = 1;
  uVar12 = uVar9;
  do {
    if ((local_2f8.NumBits <= (int)uVar12) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((*(uint *)((longlong)local_2f8.AllocatorInstance + (uVar12 >> 5) * 4) & uVar10) != 0) {
      pFVar6 = FAutomationTestFramework::Get();
      pFVar2 = pFVar6->CurrentTest;
      pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
      ::FString::FString(&local_1b8,
                         L"SetNumUninitialized to a higher number keeps the old elements - zeroes");
      (*pcVar3)(pFVar2,&local_1b8,0);
      if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
      }
    }
    uVar11 = (int)uVar12 + 1;
    uVar12 = (ulonglong)uVar11;
    uVar10 = uVar10 << 1 | (uint)((int)uVar10 < 0);
  } while ((int)uVar11 < 0x20);
  local_2d8.AllocatorInstance = (ForElementType<unsigned_int>)0x0;
  local_2d8.NumBits = 0x40;
  local_2d8.MaxBits = 0;
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&local_2d8,0,2,4);
  local_2d8.MaxBits = 0x40;
  *(undefined8 *)local_2d8.AllocatorInstance = 0xffffffffffffffff;
  uVar10 = local_2d8.NumBits & 0x8000001f;
  if ((int)uVar10 < 0) {
    uVar10 = (uVar10 - 1 | 0xffffffe0) + 1;
  }
  if (uVar10 != 0) {
    puVar1 = (uint *)((longlong)local_2d8.AllocatorInstance +
                     (longlong)((int)(local_2d8.NumBits + (local_2d8.NumBits >> 0x1f & 0x1fU)) >> 5)
                     * 4);
    *puVar1 = *puVar1 & 0xffffffffU >> (-(char)uVar10 & 0x1fU);
  }
  TBitArray<TSizedDefaultAllocator<32>_>::SetNumUninitialized(&local_2d8,0x10);
  TBitArray<TSizedDefaultAllocator<32>_>::CheckInvariants(&local_2d8);
  if (local_2d8.NumBits != 0x10) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar2 = pFVar6->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_1a8,
                       L"SetNumUninitialized to a lower number sets num to the lowernumber");
    (*pcVar3)(pFVar2,&local_1a8,0);
    if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
    }
  }
  if (local_2d8.MaxBits != 0x40) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar2 = pFVar6->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_198,L"SetNumUninitialized to a lower number does not change max");
    (*pcVar3)(pFVar2,&local_198,0);
    if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_198.Data.AllocatorInstance.Data);
    }
  }
  uVar10 = 1;
  uVar12 = uVar9;
  do {
    if ((local_2d8.NumBits <= (int)uVar12) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((*(uint *)((longlong)local_2d8.AllocatorInstance + (uVar12 >> 5) * 4) & uVar10) == 0) {
      pFVar6 = FAutomationTestFramework::Get();
      pFVar2 = pFVar6->CurrentTest;
      pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
      ::FString::FString(&local_188,
                         L"SetNumUninitialized to a lower number keeps the old elements below the lower number - ones"
                        );
      (*pcVar3)(pFVar2,&local_188,0);
      if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_188.Data.AllocatorInstance.Data);
      }
    }
    uVar11 = (int)uVar12 + 1;
    uVar12 = (ulonglong)uVar11;
    uVar10 = uVar10 << 1 | (uint)((int)uVar10 < 0);
  } while ((int)uVar11 < 0x10);
  local_308.AllocatorInstance = (ForElementType<unsigned_int>)0x0;
  local_308.NumBits = 0x40;
  local_308.MaxBits = 0;
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&local_308,0,2,4);
  *(undefined8 *)local_308.AllocatorInstance = 0;
  uVar10 = local_308.NumBits & 0x8000001f;
  if ((int)uVar10 < 0) {
    uVar10 = (uVar10 - 1 | 0xffffffe0) + 1;
  }
  if (uVar10 != 0) {
    puVar1 = (uint *)((longlong)local_308.AllocatorInstance +
                     (longlong)((int)(local_308.NumBits + (local_308.NumBits >> 0x1f & 0x1fU)) >> 5)
                     * 4);
    *puVar1 = *puVar1 & 0xffffffffU >> (-(char)uVar10 & 0x1fU);
  }
  local_308.NumBits = 0x10;
  local_308.MaxBits = 0x40;
  *(uint *)local_308.AllocatorInstance = *(uint *)local_308.AllocatorInstance & 0xffff;
  TBitArray<TSizedDefaultAllocator<32>_>::CheckInvariants(&local_308);
  uVar10 = 1;
  uVar12 = uVar9;
  do {
    if ((local_308.NumBits <= (int)uVar12) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((*(uint *)((longlong)local_308.AllocatorInstance + (uVar12 >> 5) * 4) & uVar10) != 0) {
      pFVar6 = FAutomationTestFramework::Get();
      pFVar2 = pFVar6->CurrentTest;
      pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
      ::FString::FString(&local_178,
                         L"SetNumUninitialized to a lower number keeps the old elements below the lower number - zeroes"
                        );
      (*pcVar3)(pFVar2,&local_178,0);
      if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_178.Data.AllocatorInstance.Data);
      }
    }
    uVar11 = (int)uVar12 + 1;
    uVar12 = (ulonglong)uVar11;
    uVar10 = uVar10 << 1 | (uint)((int)uVar10 < 0);
  } while ((int)uVar11 < 0x10);
  if (local_308.AllocatorInstance != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_308.AllocatorInstance);
  }
  if (local_2d8.AllocatorInstance != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_2d8.AllocatorInstance);
  }
  if (local_2f8.AllocatorInstance != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_2f8.AllocatorInstance);
  }
  if (local_2c8.AllocatorInstance != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_2c8.AllocatorInstance);
  }
  if (local_278.AllocatorInstance != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_278.AllocatorInstance);
  }
  if (local_2e8.AllocatorInstance != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_2e8.AllocatorInstance);
  }
  if (local_268.AllocatorInstance != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_268.AllocatorInstance);
  }
  local_258.AllocatorInstance = (ForElementType<unsigned_int>)0x0;
  local_258.NumBits = 0;
  local_258.MaxBits = 0;
  TBitArray<TSizedDefaultAllocator<32>_>::CheckInvariants(&local_258);
  if (local_258.NumBits != 0) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar2 = pFVar6->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_168,L"Init 0 from empty keeps num at 0");
    (*pcVar3)(pFVar2,&local_168,0);
    if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_168.Data.AllocatorInstance.Data);
    }
  }
  if (local_258.MaxBits != 0) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar2 = pFVar6->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(local_158,L"Init 0 from empty keeps max at 0");
    (*pcVar3)(pFVar2,local_158,0);
    if (local_158[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_158[0].Data.AllocatorInstance.Data);
    }
  }
  local_318.Data = (FScriptContainerElement *)0x0;
  local_310 = 0x20;
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_318,0,1,4);
  *(undefined4 *)local_318.Data = 0xffffffff;
  uVar10 = (uint)local_310 & 0x8000001f;
  if ((int)uVar10 < 0) {
    uVar10 = (uVar10 - 1 | 0xffffffe0) + 1;
  }
  if (uVar10 != 0) {
    *(uint *)(local_318.Data +
             (longlong)((int)((uint)local_310 + ((int)(uint)local_310 >> 0x1f & 0x1fU)) >> 5) * 4) =
         *(uint *)(local_318.Data +
                  (longlong)((int)((uint)local_310 + ((int)(uint)local_310 >> 0x1f & 0x1fU)) >> 5) *
                  4) & 0xffffffffU >> (-(char)uVar10 & 0x1fU);
  }
  local_310._4_4_ = 0x20;
  local_310._0_4_ = 0;
  local_2a8.AllocatorInstance = (ForElementType<unsigned_int>)0x0;
  local_2a8.MaxBits = 0;
  local_2b8.AllocatorInstance = (ForElementType<unsigned_int>)0x0;
  local_2b8.MaxBits = 0;
  local_288.Data = (FScriptContainerElement *)0x0;
  local_280 = 0x14;
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_288,0,1,4);
  local_280 = CONCAT44(0x20,(uint)local_280);
  *(undefined4 *)local_288.Data = 0xffffffff;
  uVar10 = (uint)local_280 & 0x8000001f;
  if ((int)uVar10 < 0) {
    uVar10 = (uVar10 - 1 | 0xffffffe0) + 1;
  }
  if (uVar10 != 0) {
    *(uint *)(local_288.Data +
             (longlong)((int)((uint)local_280 + ((int)(uint)local_280 >> 0x1f & 0x1fU)) >> 5) * 4) =
         *(uint *)(local_288.Data +
                  (longlong)((int)((uint)local_280 + ((int)(uint)local_280 >> 0x1f & 0x1fU)) >> 5) *
                  4) & 0xffffffffU >> (-(char)uVar10 & 0x1fU);
  }
  local_298.Data = (FScriptContainerElement *)0x0;
  local_290 = 0x14;
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_298,0,1,4);
  local_290 = CONCAT44(0x20,(uint)local_290);
  *(undefined4 *)local_298.Data = 0;
  uVar10 = (uint)local_290 & 0x8000001f;
  if ((int)uVar10 < 0) {
    uVar10 = (uVar10 - 1 | 0xffffffe0) + 1;
  }
  if (uVar10 != 0) {
    *(uint *)(local_298.Data +
             (longlong)((int)((uint)local_290 + ((int)(uint)local_290 >> 0x1f & 0x1fU)) >> 5) * 4) =
         *(uint *)(local_298.Data +
                  (longlong)((int)((uint)local_290 + ((int)(uint)local_290 >> 0x1f & 0x1fU)) >> 5) *
                  4) & 0xffffffffU >> (-(char)uVar10 & 0x1fU);
  }
  local_2a8.NumBits = 0x14;
  if ((local_2a8.MaxBits + 0x1fU & 0xffffffe0) < 0x20) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_2a8,0,1,4);
    local_2a8.MaxBits = 0x20;
  }
  *(undefined4 *)local_2a8.AllocatorInstance = 0xffffffff;
  uVar10 = local_2a8.NumBits & 0x8000001f;
  if ((int)uVar10 < 0) {
    uVar10 = (uVar10 - 1 | 0xffffffe0) + 1;
  }
  if (uVar10 != 0) {
    puVar1 = (uint *)((longlong)local_2a8.AllocatorInstance +
                     (longlong)((int)(local_2a8.NumBits + (local_2a8.NumBits >> 0x1f & 0x1fU)) >> 5)
                     * 4);
    *puVar1 = *puVar1 & 0xffffffffU >> (-(char)uVar10 & 0x1fU);
  }
  TBitArray<TSizedDefaultAllocator<32>_>::CheckInvariants(&local_2a8);
  if ((local_2a8.NumBits != (uint)local_280) ||
     (iVar5 = memcmp((void *)local_2a8.AllocatorInstance,local_288.Data,
                     (ulonglong)(local_2a8.NumBits + 0x1fU >> 5) << 2), iVar5 != 0)) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar2 = pFVar6->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_128,L"Init true 20 from empty sets size and elements");
    (*pcVar3)(pFVar2,&local_128,0);
    if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
    }
  }
  if (local_2a8.MaxBits != 0x20) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar2 = pFVar6->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_118,L"Init true 20 sets max at rounded up");
    (*pcVar3)(pFVar2,&local_118,0);
    if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_118.Data.AllocatorInstance.Data);
    }
  }
  local_2b8.NumBits = 0x14;
  if ((local_2b8.MaxBits + 0x1fU & 0xffffffe0) < 0x20) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_2b8,0,1,4);
    local_2b8.MaxBits = 0x20;
  }
  *(undefined4 *)local_2b8.AllocatorInstance = 0;
  uVar10 = local_2b8.NumBits & 0x8000001f;
  if ((int)uVar10 < 0) {
    uVar10 = (uVar10 - 1 | 0xffffffe0) + 1;
  }
  if (uVar10 != 0) {
    puVar1 = (uint *)((longlong)local_2b8.AllocatorInstance +
                     (longlong)((int)(local_2b8.NumBits + (local_2b8.NumBits >> 0x1f & 0x1fU)) >> 5)
                     * 4);
    *puVar1 = *puVar1 & 0xffffffffU >> (-(char)uVar10 & 0x1fU);
  }
  TBitArray<TSizedDefaultAllocator<32>_>::CheckInvariants(&local_2b8);
  if ((local_2b8.NumBits != (uint)local_290) ||
     (iVar5 = memcmp((void *)local_2b8.AllocatorInstance,local_298.Data,
                     (ulonglong)(local_2b8.NumBits + 0x1fU >> 5) << 2), iVar5 != 0)) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar2 = pFVar6->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_108,L"Init false 20 from empty sets size and elements");
    (*pcVar3)(pFVar2,&local_108,0);
    if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.Data.AllocatorInstance.Data);
    }
  }
  if (local_2b8.MaxBits != 0x20) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar2 = pFVar6->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_f8,L"Init false 20 sets max at rounded up");
    (*pcVar3)(pFVar2,&local_f8,0);
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
  }
  local_328.AllocatorInstance = (ForElementType<unsigned_int>)0x0;
  local_328.NumBits = 0x20;
  local_328.MaxBits = 0;
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&local_328,0,1,4);
  *(undefined4 *)local_328.AllocatorInstance = 0xffffffff;
  uVar10 = local_328.NumBits & 0x8000001f;
  if ((int)uVar10 < 0) {
    uVar10 = (uVar10 - 1 | 0xffffffe0) + 1;
  }
  if (uVar10 != 0) {
    puVar1 = (uint *)((longlong)local_328.AllocatorInstance +
                     (longlong)((int)(local_328.NumBits + (local_328.NumBits >> 0x1f & 0x1fU)) >> 5)
                     * 4);
    *puVar1 = *puVar1 & 0xffffffffU >> (-(char)uVar10 & 0x1fU);
  }
  local_328.NumBits = 0x30;
  local_328.MaxBits = 0x20;
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&local_328,0,2,4);
  local_328.MaxBits = 0x40;
  *(undefined8 *)local_328.AllocatorInstance = 0;
  uVar10 = local_328.NumBits & 0x8000001f;
  if ((int)uVar10 < 0) {
    uVar10 = (uVar10 - 1 | 0xffffffe0) + 1;
  }
  if (uVar10 != 0) {
    puVar1 = (uint *)((longlong)local_328.AllocatorInstance +
                     (longlong)((int)(local_328.NumBits + (local_328.NumBits >> 0x1f & 0x1fU)) >> 5)
                     * 4);
    *puVar1 = *puVar1 & 0xffffffffU >> (-(char)uVar10 & 0x1fU);
  }
  TBitArray<TSizedDefaultAllocator<32>_>::CheckInvariants(&local_328);
  if (local_328.NumBits != 0x30) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar2 = pFVar6->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_e8,L"Init false to a higher number sets num to the higher number");
    (*pcVar3)(pFVar2,&local_e8,0);
    if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.Data.AllocatorInstance.Data);
    }
  }
  if (local_328.MaxBits != 0x40) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar2 = pFVar6->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_d8,L"Init false to a higher number sets max to rounded up");
    (*pcVar3)(pFVar2,&local_d8,0);
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
  }
  uVar12 = uVar9;
  if (0 < local_328.NumBits) {
    do {
      uVar10 = (uint)uVar12;
      if ((((int)uVar10 < 0) || (local_328.NumBits <= (int)uVar10)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar11 = uVar10;
      if ((int)uVar10 < 0) {
        uVar11 = uVar10 + 0x1f;
      }
      if ((*(uint *)((longlong)local_328.AllocatorInstance + (longlong)((int)uVar11 >> 5) * 4) >>
           (uVar10 & 0x1f) & 1) != 0) {
        pFVar6 = FAutomationTestFramework::Get();
        pFVar2 = pFVar6->CurrentTest;
        pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
        ::FString::FString(&local_c8,L"Init false to a higher number overwrites all elements");
        (*pcVar3)(pFVar2,&local_c8,0);
        if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c8.Data.AllocatorInstance.Data);
        }
      }
      uVar12 = (ulonglong)(uVar10 + 1);
    } while ((int)(uVar10 + 1) < local_328.NumBits);
  }
  local_338.AllocatorInstance = (ForElementType<unsigned_int>)0x0;
  local_338.NumBits = 0x20;
  local_338.MaxBits = 0;
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&local_338,0,1,4);
  *(undefined4 *)local_338.AllocatorInstance = 0;
  uVar10 = local_338.NumBits & 0x8000001f;
  if ((int)uVar10 < 0) {
    uVar10 = (uVar10 - 1 | 0xffffffe0) + 1;
  }
  if (uVar10 != 0) {
    puVar1 = (uint *)((longlong)local_338.AllocatorInstance +
                     (longlong)((int)(local_338.NumBits + (local_338.NumBits >> 0x1f & 0x1fU)) >> 5)
                     * 4);
    *puVar1 = *puVar1 & 0xffffffffU >> (-(char)uVar10 & 0x1fU);
  }
  local_338.NumBits = 0x30;
  local_338.MaxBits = 0x20;
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&local_338,0,2,4);
  local_338.MaxBits = 0x40;
  *(undefined8 *)local_338.AllocatorInstance = 0xffffffffffffffff;
  uVar10 = local_338.NumBits & 0x8000001f;
  if ((int)uVar10 < 0) {
    uVar10 = (uVar10 - 1 | 0xffffffe0) + 1;
  }
  if (uVar10 != 0) {
    puVar1 = (uint *)((longlong)local_338.AllocatorInstance +
                     (longlong)((int)(local_338.NumBits + (local_338.NumBits >> 0x1f & 0x1fU)) >> 5)
                     * 4);
    *puVar1 = *puVar1 & 0xffffffffU >> (-(char)uVar10 & 0x1fU);
  }
  TBitArray<TSizedDefaultAllocator<32>_>::CheckInvariants(&local_338);
  if (local_338.NumBits != 0x30) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar2 = pFVar6->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_b8,L"Init true to a higher number sets num to the higher number");
    (*pcVar3)(pFVar2,&local_b8,0);
    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
  }
  if (local_338.MaxBits != 0x40) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar2 = pFVar6->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_a8,L"Init true to a higher number sets max to rounded up");
    (*pcVar3)(pFVar2,&local_a8,0);
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
  }
  uVar12 = uVar9;
  if (0 < local_338.NumBits) {
    do {
      uVar10 = (uint)uVar12;
      if ((((int)uVar10 < 0) || (local_338.NumBits <= (int)uVar10)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar11 = uVar10;
      if ((int)uVar10 < 0) {
        uVar11 = uVar10 + 0x1f;
      }
      if ((*(uint *)((longlong)local_338.AllocatorInstance + (longlong)((int)uVar11 >> 5) * 4) >>
           (uVar10 & 0x1f) & 1) == 0) {
        pFVar6 = FAutomationTestFramework::Get();
        pFVar2 = pFVar6->CurrentTest;
        pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
        ::FString::FString(&local_98,L"Init true to a higher number overwrites all elements");
        (*pcVar3)(pFVar2,&local_98,0);
        if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_98.Data.AllocatorInstance.Data);
        }
      }
      uVar12 = (ulonglong)(uVar10 + 1);
    } while ((int)(uVar10 + 1) < local_338.NumBits);
  }
  local_348.AllocatorInstance = (ForElementType<unsigned_int>)0x0;
  local_348.NumBits = 0x40;
  local_348.MaxBits = 0;
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&local_348,0,2,4);
  *(undefined8 *)local_348.AllocatorInstance = 0xffffffffffffffff;
  uVar10 = local_348.NumBits & 0x8000001f;
  if ((int)uVar10 < 0) {
    uVar10 = (uVar10 - 1 | 0xffffffe0) + 1;
  }
  if (uVar10 != 0) {
    puVar1 = (uint *)((longlong)local_348.AllocatorInstance +
                     (longlong)((int)(local_348.NumBits + (local_348.NumBits >> 0x1f & 0x1fU)) >> 5)
                     * 4);
    *puVar1 = *puVar1 & 0xffffffffU >> (-(char)uVar10 & 0x1fU);
  }
  local_348.NumBits = 0x10;
  local_348.MaxBits = 0x40;
  *(uint *)local_348.AllocatorInstance = 0;
  *(uint *)local_348.AllocatorInstance = *(uint *)local_348.AllocatorInstance & 0xffff;
  TBitArray<TSizedDefaultAllocator<32>_>::CheckInvariants(&local_348);
  if (local_348.NumBits != 0x10) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar2 = pFVar6->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_88,L"Init false to a lower number sets num to the lowernumber");
    (*pcVar3)(pFVar2,&local_88,0);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
  }
  if (local_348.MaxBits != 0x40) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar2 = pFVar6->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_78,L"Init false to a lower number does not change max");
    (*pcVar3)(pFVar2,&local_78,0);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
  }
  uVar12 = uVar9;
  if (0 < local_348.NumBits) {
    do {
      uVar10 = (uint)uVar12;
      if ((((int)uVar10 < 0) || (local_348.NumBits <= (int)uVar10)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar11 = uVar10;
      if ((int)uVar10 < 0) {
        uVar11 = uVar10 + 0x1f;
      }
      if ((*(uint *)((longlong)local_348.AllocatorInstance + (longlong)((int)uVar11 >> 5) * 4) >>
           (uVar10 & 0x1f) & 1) != 0) {
        pFVar6 = FAutomationTestFramework::Get();
        pFVar2 = pFVar6->CurrentTest;
        pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
        ::FString::FString(&local_68,L"Init false to a lower number overwrites all elements");
        (*pcVar3)(pFVar2,&local_68,0);
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
      }
      uVar12 = (ulonglong)(uVar10 + 1);
    } while ((int)(uVar10 + 1) < local_348.NumBits);
  }
  local_358.AllocatorInstance = (ForElementType<unsigned_int>)0x0;
  local_358.NumBits = 0x40;
  local_358.MaxBits = 0;
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&local_358,0,2,4);
  *(undefined8 *)local_358.AllocatorInstance = 0;
  uVar10 = local_358.NumBits & 0x8000001f;
  if ((int)uVar10 < 0) {
    uVar10 = (uVar10 - 1 | 0xffffffe0) + 1;
  }
  if (uVar10 != 0) {
    puVar1 = (uint *)((longlong)local_358.AllocatorInstance +
                     (longlong)((int)(local_358.NumBits + (local_358.NumBits >> 0x1f & 0x1fU)) >> 5)
                     * 4);
    *puVar1 = *puVar1 & 0xffffffffU >> (-(char)uVar10 & 0x1fU);
  }
  local_358.NumBits = 0x10;
  local_358.MaxBits = 0x40;
  *(uint *)local_358.AllocatorInstance = 0xffffffff;
  *(uint *)local_358.AllocatorInstance = *(uint *)local_358.AllocatorInstance & 0xffff;
  TBitArray<TSizedDefaultAllocator<32>_>::CheckInvariants(&local_358);
  if (local_358.NumBits != 0x10) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar2 = pFVar6->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_58,L"Init true to a lower number sets num to the lowernumber");
    (*pcVar3)(pFVar2,&local_58,0);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  if (local_358.MaxBits != 0x40) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar2 = pFVar6->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_48,L"Init true to a lower number does not change max");
    (*pcVar3)(pFVar2,&local_48,0);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  if (0 < local_358.NumBits) {
    do {
      uVar10 = (uint)uVar9;
      if ((((int)uVar10 < 0) || (local_358.NumBits <= (int)uVar10)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar11 = uVar10;
      if ((int)uVar10 < 0) {
        uVar11 = uVar10 + 0x1f;
      }
      if ((*(uint *)((longlong)local_358.AllocatorInstance + (longlong)((int)uVar11 >> 5) * 4) >>
           (uVar10 & 0x1f) & 1) == 0) {
        pFVar6 = FAutomationTestFramework::Get();
        pFVar2 = pFVar6->CurrentTest;
        pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
        ::FString::FString(&local_38,L"Init true to a lower number overwrites all elements");
        (*pcVar3)(pFVar2,&local_38,0);
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
      }
      uVar9 = (ulonglong)(uVar10 + 1);
    } while ((int)(uVar10 + 1) < local_358.NumBits);
  }
  if (local_358.AllocatorInstance != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_358.AllocatorInstance);
  }
  if (local_348.AllocatorInstance != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_348.AllocatorInstance);
  }
  if (local_338.AllocatorInstance != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_338.AllocatorInstance);
  }
  if (local_328.AllocatorInstance != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_328.AllocatorInstance);
  }
  if (local_298.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_298.Data);
  }
  if (local_288.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_288.Data);
  }
  if (local_2b8.AllocatorInstance != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_2b8.AllocatorInstance);
  }
  if (local_2a8.AllocatorInstance != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_2a8.AllocatorInstance);
  }
  if (local_318.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_318.Data);
  }
  if (local_258.AllocatorInstance != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_258.AllocatorInstance);
  }
  return;
}

// TestInsertFromRange @ 141babf70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FBitArrayTest::TestInsertFromRange(FBitArrayTest *this)

{
  ForElementType<unsigned_int> *pFVar1;
  TStringBuilderWithBuffer<wchar_t,128> *pTVar2;
  TBitArray<FDefaultBitArrayAllocator> *pTVar3;
  uint *puVar4;
  longlong lVar5;
  FAutomationTestBase *pFVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  FAutomationTestFramework *pFVar12;
  TStringBuilderBase<wchar_t> *pTVar13;
  ForElementType<unsigned_int> FVar14;
  ulong64 uVar15;
  ForElementType<unsigned_int> FVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ForElementType<unsigned_int> FVar19;
  uint uVar20;
  ulonglong uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  TBitArray<FDefaultBitArrayAllocator> *pTVar25;
  undefined1 auStackY_5d8 [32];
  uint local_5a0 [2];
  FString local_598;
  FString local_588;
  FString local_578;
  FString local_568;
  FString local_558;
  FString local_548;
  ForElementType<unsigned_int> *local_538;
  uint local_530 [8];
  FString local_510;
  FString local_500;
  FString local_4f0;
  FString local_4e0;
  FString local_4d0;
  FString local_4c0;
  FString local_4b0;
  FString local_4a0;
  FString local_490;
  FString local_480;
  FString local_470;
  FString local_460;
  FString local_450;
  FString local_440;
  FString local_430;
  FString local_420;
  FString local_410;
  FString local_400;
  FString local_3f0;
  FString local_3e0;
  FString local_3d0;
  FString local_3c0;
  FString local_3b0;
  FString local_3a0;
  FString local_390;
  FString local_380;
  FString local_370;
  FString local_360;
  FString local_350;
  FString local_340;
  FString local_330;
  FString local_320;
  FString local_310;
  FString local_300;
  FString local_2f0;
  FString local_2e0;
  FString local_2d0;
  FString local_2c0;
  TBitArray<FDefaultBitArrayAllocator> local_2b0;
  TBitArray<FDefaultBitArrayAllocator> local_290;
  TBitArray<FDefaultBitArrayAllocator> local_270;
  TBitArray<FDefaultBitArrayAllocator> local_250;
  TBitArray<FDefaultBitArrayAllocator> local_230;
  TBitArray<FDefaultBitArrayAllocator> local_210;
  TBitArray<FDefaultBitArrayAllocator> local_1f0;
  TBitArray<FDefaultBitArrayAllocator> local_1d0;
  TBitArray<FDefaultBitArrayAllocator> local_1b0;
  TBitArray<FDefaultBitArrayAllocator> local_190;
  TBitArray<FDefaultBitArrayAllocator> local_170;
  TBitArray<FDefaultBitArrayAllocator> local_150;
  TBitArray<FDefaultBitArrayAllocator> local_130;
  TBitArray<FDefaultBitArrayAllocator> local_110;
  TBitArray<FDefaultBitArrayAllocator> local_f0;
  TBitArray<FDefaultBitArrayAllocator> local_d0;
  TBitArray<FDefaultBitArrayAllocator> local_b0;
  TBitArray<FDefaultBitArrayAllocator> local_90;
  TBitArray<FDefaultBitArrayAllocator> local_70;
  TBitArray<FDefaultBitArrayAllocator> local_50;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_5d8;
  uVar18 = 0;
  local_f0.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_f0.NumBits = 0;
  local_f0.MaxBits = 0x80;
  TBitArray<FDefaultBitArrayAllocator>::InsertRange<unsigned_int>
            (&local_f0,&this->GrowingTrueInt,0,this->NumGrowingTrue,0);
  TBitArray<FDefaultBitArrayAllocator>::CheckInvariants(&local_f0);
  iVar10 = local_f0.NumBits;
  pTVar25 = &this->ArrGrowingTrue;
  if (local_f0.NumBits == (this->ArrGrowingTrue).NumBits) {
    FVar14 = (this->ArrGrowingTrue).AllocatorInstance.SecondaryData;
    if (FVar14 == (ForElementType<unsigned_int>)0x0) {
      FVar14 = (ForElementType<unsigned_int>)pTVar25;
    }
    FVar19 = (ForElementType<unsigned_int>)&local_f0;
    if (local_f0.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar19 = local_f0.AllocatorInstance.SecondaryData;
    }
    iVar9 = memcmp((void *)FVar19,(void *)FVar14,(ulonglong)(local_f0.NumBits + 0x1fU >> 5) << 2);
    if (iVar9 != 0) goto LAB_141bac038;
  }
  else {
LAB_141bac038:
    pFVar12 = FAutomationTestFramework::Get();
    pFVar6 = pFVar12->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_510,L"Insert from uint32 with ReadOffset 0 at end from empty");
    (*pcVar7)(pFVar6,&local_510,0);
    iVar10 = local_f0.NumBits;
    if (local_510.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_510.Data.AllocatorInstance.Data);
      iVar10 = local_f0.NumBits;
    }
  }
  TBitArray<FDefaultBitArrayAllocator>::InsertRange<unsigned_int>
            (&local_f0,&this->GrowingTrueInt,iVar10,this->NumGrowingTrue,0);
  TBitArray<FDefaultBitArrayAllocator>::CheckInvariants(&local_f0);
  pFVar1 = &(this->ArrGrowingTrueTwice).AllocatorInstance.SecondaryData;
  if (local_f0.NumBits == (this->ArrGrowingTrueTwice).NumBits) {
    FVar14 = *pFVar1;
    if (*pFVar1 == (ForElementType<unsigned_int>)0x0) {
      FVar14 = (ForElementType<unsigned_int>)&this->ArrGrowingTrueTwice;
    }
    FVar19 = (ForElementType<unsigned_int>)&local_f0;
    if (local_f0.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar19 = local_f0.AllocatorInstance.SecondaryData;
    }
    local_538 = pFVar1;
    iVar10 = memcmp((void *)FVar19,(void *)FVar14,(ulonglong)(local_f0.NumBits + 0x1fU >> 5) << 2);
    if (iVar10 != 0) goto LAB_141bac0f9;
  }
  else {
LAB_141bac0f9:
    pFVar12 = FAutomationTestFramework::Get();
    pFVar6 = pFVar12->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_500,L"Insert from uint32 with ReadOffset 0 at end to nonempty");
    (*pcVar7)(pFVar6,&local_500);
    local_538 = pFVar1;
    if (local_500.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_500.Data.AllocatorInstance.Data);
      local_538 = pFVar1;
    }
  }
  local_b0.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_b0.NumBits = 0;
  local_b0.MaxBits = 0x80;
  TBitArray<FDefaultBitArrayAllocator>::InsertRange<unsigned_int>
            (&local_b0,&this->GrowingTrueInt,0,this->NumGrowingTrue,0);
  TBitArray<FDefaultBitArrayAllocator>::CheckInvariants(&local_b0);
  TBitArray<FDefaultBitArrayAllocator>::InsertRange<unsigned_int>
            (&local_b0,&this->GrowingTrueInt,0,this->NumGrowingTrue,0);
  TBitArray<FDefaultBitArrayAllocator>::CheckInvariants(&local_b0);
  if (local_b0.NumBits == (this->ArrGrowingTrueTwice).NumBits) {
    FVar14 = *pFVar1;
    if (*pFVar1 == (ForElementType<unsigned_int>)0x0) {
      FVar14 = (ForElementType<unsigned_int>)&this->ArrGrowingTrueTwice;
    }
    FVar19 = (ForElementType<unsigned_int>)&local_b0;
    if (local_b0.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar19 = local_b0.AllocatorInstance.SecondaryData;
    }
    iVar10 = memcmp((void *)FVar19,(void *)FVar14,(ulonglong)(local_b0.NumBits + 0x1fU >> 5) << 2);
    if (iVar10 != 0) goto LAB_141bac1f1;
  }
  else {
LAB_141bac1f1:
    pFVar12 = FAutomationTestFramework::Get();
    pFVar6 = pFVar12->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_4f0,L"Insert from uint32 with ReadOffset 0 at beginning to nonempty");
    (*pcVar7)(pFVar6,&local_4f0);
    if (local_4f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4f0.Data.AllocatorInstance.Data);
    }
  }
  local_5a0[0] = 0;
  local_5a0[1] = 0xffffffff;
  local_230.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_230.NumBits = 0;
  local_230.MaxBits = 0x80;
  TBitArray<FDefaultBitArrayAllocator>::InsertRange<unsigned_int>
            (&local_230,&this->GrowingTrueInt,0,this->NumGrowingTrue,0);
  TBitArray<FDefaultBitArrayAllocator>::CheckInvariants(&local_230);
  TBitArray<FDefaultBitArrayAllocator>::InsertUninitialized(&local_230,5,5);
  if ((local_230.NumBits < 10) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index >= 0 && NumBitsToSet >= 0 && Index + NumBitsToSet <= NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x3bc,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  FVar14 = (ForElementType<unsigned_int>)&local_230;
  if (local_230.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FVar14 = local_230.AllocatorInstance.SecondaryData;
  }
  FBitArrayMemory::MemmoveBitsWordOrder((uint *)FVar14,5,local_5a0,0,5);
  TBitArray<FDefaultBitArrayAllocator>::CheckInvariants(&local_230);
  if (local_230.NumBits != this->NumGrowingTrue + 5) {
    pFVar12 = FAutomationTestFramework::Get();
    pFVar6 = pFVar12->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_4e0,L"Insert from uint32 with ReadOffset 0 at middle to nonempty size"
                      );
    (*pcVar7)(pFVar6,&local_4e0,0);
    if (local_4e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4e0.Data.AllocatorInstance.Data);
    }
  }
  uVar23 = 1;
  do {
    iVar10 = (int)uVar18;
    if ((local_230.NumBits <= iVar10) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    FVar14 = (ForElementType<unsigned_int>)&local_230;
    if (local_230.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar14 = local_230.AllocatorInstance.SecondaryData;
    }
    lVar5 = (uVar18 >> 5) * 4;
    if (((this->ArrGrowingTrue).NumBits <= iVar10) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    FVar19 = (this->ArrGrowingTrue).AllocatorInstance.SecondaryData;
    FVar16 = (ForElementType<unsigned_int>)pTVar25;
    if (FVar19 != (ForElementType<unsigned_int>)0x0) {
      FVar16 = FVar19;
    }
    if (((*(uint *)((longlong)FVar14 + lVar5) & uVar23) != 0) !=
        ((*(uint *)((longlong)FVar16 + lVar5) & uVar23) != 0)) {
      pFVar12 = FAutomationTestFramework::Get();
      pFVar6 = pFVar12->CurrentTest;
      pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
      ::FString::FString(&local_4d0,L"Insert from uint32 with ReadOffset 0 at middle to nonempty");
      (*pcVar7)(pFVar6,&local_4d0,0);
      if (local_4d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_4d0.Data.AllocatorInstance.Data);
      }
    }
    uVar18 = (ulonglong)(iVar10 + 1U);
    uVar23 = uVar23 << 1 | (uint)((int)uVar23 < 0);
  } while ((int)(iVar10 + 1U) < 5);
  if ((local_230.NumBits < 6) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  FVar14 = (ForElementType<unsigned_int>)&local_230;
  if (local_230.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FVar14 = local_230.AllocatorInstance.SecondaryData;
  }
  if ((*(byte *)FVar14 & 0x20) != 0) {
    pFVar12 = FAutomationTestFramework::Get();
    pFVar6 = pFVar12->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_598,L"Insert from uint32 with ReadOffset 0 at middle to nonempty");
    (*pcVar7)(pFVar6,&local_598,0);
    if (local_598.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_598.Data.AllocatorInstance.Data);
    }
  }
  if ((local_230.NumBits < 7) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  FVar14 = (ForElementType<unsigned_int>)&local_230;
  if (local_230.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FVar14 = local_230.AllocatorInstance.SecondaryData;
  }
  if ((*(byte *)FVar14 & 0x40) != 0) {
    pFVar12 = FAutomationTestFramework::Get();
    pFVar6 = pFVar12->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_598,L"Insert from uint32 with ReadOffset 0 at middle to nonempty");
    (*pcVar7)(pFVar6,&local_598,0);
    if (local_598.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_598.Data.AllocatorInstance.Data);
    }
  }
  if ((local_230.NumBits < 8) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  FVar14 = (ForElementType<unsigned_int>)&local_230;
  if (local_230.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FVar14 = local_230.AllocatorInstance.SecondaryData;
  }
  if ((*(byte *)FVar14 & 0x80) != 0) {
    pFVar12 = FAutomationTestFramework::Get();
    pFVar6 = pFVar12->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_598,L"Insert from uint32 with ReadOffset 0 at middle to nonempty");
    (*pcVar7)(pFVar6,&local_598,0);
    if (local_598.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_598.Data.AllocatorInstance.Data);
    }
  }
  if ((local_230.NumBits < 9) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  FVar14 = (ForElementType<unsigned_int>)&local_230;
  if (local_230.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FVar14 = local_230.AllocatorInstance.SecondaryData;
  }
  if ((*(uint *)FVar14 & 0x100) != 0) {
    pFVar12 = FAutomationTestFramework::Get();
    pFVar6 = pFVar12->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_598,L"Insert from uint32 with ReadOffset 0 at middle to nonempty");
    (*pcVar7)(pFVar6,&local_598,0);
    if (local_598.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_598.Data.AllocatorInstance.Data);
    }
  }
  if ((local_230.NumBits < 10) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  FVar14 = (ForElementType<unsigned_int>)&local_230;
  if (local_230.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FVar14 = local_230.AllocatorInstance.SecondaryData;
  }
  if ((*(uint *)FVar14 & 0x200) != 0) {
    pFVar12 = FAutomationTestFramework::Get();
    pFVar6 = pFVar12->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_598,L"Insert from uint32 with ReadOffset 0 at middle to nonempty");
    (*pcVar7)(pFVar6,&local_598,0);
    if (local_598.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_598.Data.AllocatorInstance.Data);
    }
  }
  uVar23 = 10;
  if (10 < this->NumGrowingTrue + 5) {
    do {
      if ((((int)uVar23 < 0) || (local_230.NumBits <= (int)uVar23)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      FVar14 = (ForElementType<unsigned_int>)&local_230;
      if (local_230.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar14 = local_230.AllocatorInstance.SecondaryData;
      }
      uVar24 = uVar23;
      if ((int)uVar23 < 0) {
        uVar24 = uVar23 + 0x1f;
      }
      uVar22 = uVar23 - 5;
      uVar24 = *(uint *)((longlong)FVar14 + (longlong)((int)uVar24 >> 5) * 4);
      if ((((int)uVar22 < 0) || ((this->ArrGrowingTrue).NumBits <= (int)uVar22)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      FVar14 = (this->ArrGrowingTrue).AllocatorInstance.SecondaryData;
      FVar19 = (ForElementType<unsigned_int>)pTVar25;
      if (FVar14 != (ForElementType<unsigned_int>)0x0) {
        FVar19 = FVar14;
      }
      uVar20 = uVar22 & 0x1f;
      if ((int)uVar22 < 0) {
        uVar22 = uVar23 + 0x1a;
      }
      if (((uVar24 >> (uVar23 & 0x1f) & 1) != 0) !=
          ((*(uint *)((longlong)FVar19 + (longlong)((int)uVar22 >> 5) * 4) >> uVar20 & 1) != 0)) {
        pFVar12 = FAutomationTestFramework::Get();
        pFVar6 = pFVar12->CurrentTest;
        pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
        ::FString::FString(&local_4c0,L"Insert from uint32 with ReadOffset 0 at middle to nonempty")
        ;
        (*pcVar7)(pFVar6,&local_4c0,0);
        if (local_4c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_4c0.Data.AllocatorInstance.Data);
        }
      }
      uVar23 = uVar23 + 1;
    } while ((int)uVar23 < this->NumGrowingTrue + 5);
  }
  uVar18 = 0;
  local_170.MaxBits = 0x80;
  local_170.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_170.NumBits = 0;
  TBitArray<FDefaultBitArrayAllocator>::InsertUninitialized(&local_170,0,10);
  if ((local_170.NumBits < 10) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index >= 0 && NumBitsToSet >= 0 && Index + NumBitsToSet <= NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x3bc,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  FVar14 = (ForElementType<unsigned_int>)&local_170;
  if (local_170.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FVar14 = local_170.AllocatorInstance.SecondaryData;
  }
  FBitArrayMemory::MemmoveBitsWordOrder((uint *)FVar14,0,local_5a0,0,10);
  TBitArray<FDefaultBitArrayAllocator>::CheckInvariants(&local_170);
  iVar10 = local_170.NumBits;
  TBitArray<FDefaultBitArrayAllocator>::InsertUninitialized(&local_170,local_170.NumBits,10);
  if (((iVar10 < 0) || (local_170.NumBits < iVar10 + 10)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index >= 0 && NumBitsToSet >= 0 && Index + NumBitsToSet <= NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x3bc,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  FVar14 = (ForElementType<unsigned_int>)&local_170;
  if (local_170.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FVar14 = local_170.AllocatorInstance.SecondaryData;
  }
  FBitArrayMemory::MemmoveBitsWordOrder((uint *)FVar14,iVar10,local_5a0 + 1,0,10);
  TBitArray<FDefaultBitArrayAllocator>::CheckInvariants(&local_170);
  uVar23 = 1;
  do {
    uVar24 = (uint)uVar18;
    if ((local_170.NumBits <= (int)uVar24) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    FVar14 = (ForElementType<unsigned_int>)&local_170;
    if (local_170.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar14 = local_170.AllocatorInstance.SecondaryData;
    }
    if (((*(uint *)((longlong)FVar14 + (uVar18 >> 5) * 4) & uVar23) != 0) != 9 < uVar24) {
      pFVar12 = FAutomationTestFramework::Get();
      pFVar6 = pFVar12->CurrentTest;
      pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
      ::FString::FString(&local_4b0,
                         L"Insert from uint32 with ReadOffset 0 at end, Zeroes, Then Ones");
      (*pcVar7)(pFVar6,&local_4b0,0);
      if (local_4b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_4b0.Data.AllocatorInstance.Data);
      }
    }
    uVar18 = (ulonglong)(uVar24 + 1);
    uVar23 = uVar23 << 1 | (uint)((int)uVar23 < 0);
  } while ((int)(uVar24 + 1) < 0x14);
  local_150.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_150.NumBits = 0;
  local_150.MaxBits = 0x80;
  TBitArray<FDefaultBitArrayAllocator>::AddUninitialized(&local_150,10);
  if ((local_150.NumBits < 10) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index >= 0 && NumBitsToSet >= 0 && Index + NumBitsToSet <= NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x3bc,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  FVar14 = (ForElementType<unsigned_int>)&local_150;
  if (local_150.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FVar14 = local_150.AllocatorInstance.SecondaryData;
  }
  FBitArrayMemory::MemmoveBitsWordOrder((uint *)FVar14,0,local_5a0,0,10);
  TBitArray<FDefaultBitArrayAllocator>::CheckInvariants(&local_150);
  TBitArray<FDefaultBitArrayAllocator>::InsertUninitialized(&local_150,0,10);
  if ((local_150.NumBits < 10) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index >= 0 && NumBitsToSet >= 0 && Index + NumBitsToSet <= NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x3bc,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  FVar14 = (ForElementType<unsigned_int>)&local_150;
  if (local_150.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FVar14 = local_150.AllocatorInstance.SecondaryData;
  }
  FBitArrayMemory::MemmoveBitsWordOrder((uint *)FVar14,0,local_5a0 + 1,0,10);
  TBitArray<FDefaultBitArrayAllocator>::CheckInvariants(&local_150);
  uVar18 = 0;
  uVar23 = 1;
  do {
    uVar24 = (uint)uVar18;
    if ((local_150.NumBits <= (int)uVar24) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    FVar14 = (ForElementType<unsigned_int>)&local_150;
    if (local_150.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar14 = local_150.AllocatorInstance.SecondaryData;
    }
    if (((*(uint *)((longlong)FVar14 + (uVar18 >> 5) * 4) & uVar23) != 0) != uVar24 < 10) {
      pFVar12 = FAutomationTestFramework::Get();
      pFVar6 = pFVar12->CurrentTest;
      pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
      ::FString::FString(&local_4a0,
                         L"Insert from uint32 with ReadOffset 0 at beginning, Zeroes, Then Ones");
      (*pcVar7)(pFVar6,&local_4a0,0);
      if (local_4a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_4a0.Data.AllocatorInstance.Data);
      }
    }
    uVar18 = (ulonglong)(uVar24 + 1);
    uVar23 = uVar23 << 1 | (uint)((int)uVar23 < 0);
  } while ((int)(uVar24 + 1) < 0x14);
  local_270.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_270.NumBits = 0;
  local_270.MaxBits = 0x80;
  TBitArray<FDefaultBitArrayAllocator>::InsertUninitialized(&local_270,0,10);
  if ((local_270.NumBits < 10) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index >= 0 && NumBitsToSet >= 0 && Index + NumBitsToSet <= NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x3bc,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  FVar14 = (ForElementType<unsigned_int>)&local_270;
  if (local_270.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FVar14 = local_270.AllocatorInstance.SecondaryData;
  }
  FBitArrayMemory::MemmoveBitsWordOrder((uint *)FVar14,0,local_5a0,0,10);
  TBitArray<FDefaultBitArrayAllocator>::CheckInvariants(&local_270);
  if ((local_270.NumBits < 5) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("0 <= Index && Index <= NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x2f7,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar10 = local_270.NumBits;
  TBitArray<FDefaultBitArrayAllocator>::AddUninitialized(&local_270,10);
  if (iVar10 - 5U != 0) {
    FVar14 = (ForElementType<unsigned_int>)&local_270;
    if (local_270.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar14 = local_270.AllocatorInstance.SecondaryData;
    }
    FBitArrayMemory::MemmoveBitsWordOrder((uint *)FVar14,0xf,(uint *)FVar14,5,iVar10 - 5U);
  }
  if ((local_270.NumBits < 0xf) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index >= 0 && NumBitsToSet >= 0 && Index + NumBitsToSet <= NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x3bc,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  FVar14 = (ForElementType<unsigned_int>)&local_270;
  if (local_270.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FVar14 = local_270.AllocatorInstance.SecondaryData;
  }
  FBitArrayMemory::MemmoveBitsWordOrder((uint *)FVar14,5,local_5a0 + 1,0,10);
  TBitArray<FDefaultBitArrayAllocator>::CheckInvariants(&local_270);
  if ((local_270.NumBits < 1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  FVar14 = (ForElementType<unsigned_int>)&local_270;
  if (local_270.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FVar14 = local_270.AllocatorInstance.SecondaryData;
  }
  if ((*(byte *)FVar14 & 1) != 0) {
    pFVar12 = FAutomationTestFramework::Get();
    pFVar6 = pFVar12->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_588,
                       L"Insert from uint32 with ReadOffset 0 at middle, Zeroes, Then Ones");
    (*pcVar7)(pFVar6,&local_588,0);
    if (local_588.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_588.Data.AllocatorInstance.Data);
    }
  }
  if ((local_270.NumBits < 2) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  FVar14 = (ForElementType<unsigned_int>)&local_270;
  if (local_270.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FVar14 = local_270.AllocatorInstance.SecondaryData;
  }
  if ((*(byte *)FVar14 & 2) != 0) {
    pFVar12 = FAutomationTestFramework::Get();
    pFVar6 = pFVar12->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_588,
                       L"Insert from uint32 with ReadOffset 0 at middle, Zeroes, Then Ones");
    (*pcVar7)(pFVar6,&local_588,0);
    if (local_588.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_588.Data.AllocatorInstance.Data);
    }
  }
  if ((local_270.NumBits < 3) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  FVar14 = (ForElementType<unsigned_int>)&local_270;
  if (local_270.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FVar14 = local_270.AllocatorInstance.SecondaryData;
  }
  if ((*(byte *)FVar14 & 4) != 0) {
    pFVar12 = FAutomationTestFramework::Get();
    pFVar6 = pFVar12->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_588,
                       L"Insert from uint32 with ReadOffset 0 at middle, Zeroes, Then Ones");
    (*pcVar7)(pFVar6,&local_588,0);
    if (local_588.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_588.Data.AllocatorInstance.Data);
    }
  }
  if ((local_270.NumBits < 4) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  FVar14 = (ForElementType<unsigned_int>)&local_270;
  if (local_270.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FVar14 = local_270.AllocatorInstance.SecondaryData;
  }
  if ((*(byte *)FVar14 & 8) != 0) {
    pFVar12 = FAutomationTestFramework::Get();
    pFVar6 = pFVar12->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_588,
                       L"Insert from uint32 with ReadOffset 0 at middle, Zeroes, Then Ones");
    (*pcVar7)(pFVar6,&local_588,0);
    if (local_588.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_588.Data.AllocatorInstance.Data);
    }
  }
  if ((local_270.NumBits < 5) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  FVar14 = (ForElementType<unsigned_int>)&local_270;
  if (local_270.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FVar14 = local_270.AllocatorInstance.SecondaryData;
  }
  if ((*(byte *)FVar14 & 0x10) != 0) {
    pFVar12 = FAutomationTestFramework::Get();
    pFVar6 = pFVar12->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_588,
                       L"Insert from uint32 with ReadOffset 0 at middle, Zeroes, Then Ones");
    (*pcVar7)(pFVar6,&local_588,0);
    if (local_588.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_588.Data.AllocatorInstance.Data);
    }
  }
  uVar23 = 5;
  uVar24 = 0x20;
  do {
    if ((local_270.NumBits <= (int)uVar23) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    FVar14 = (ForElementType<unsigned_int>)&local_270;
    if (local_270.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar14 = local_270.AllocatorInstance.SecondaryData;
    }
    if ((*(uint *)((longlong)FVar14 + (ulonglong)(uVar23 >> 5) * 4) & uVar24) == 0) {
      pFVar12 = FAutomationTestFramework::Get();
      pFVar6 = pFVar12->CurrentTest;
      pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
      ::FString::FString(&local_490,
                         L"Insert from uint32 with ReadOffset 0 at middle, Zeroes, Then Ones");
      (*pcVar7)(pFVar6,&local_490,0);
      if (local_490.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_490.Data.AllocatorInstance.Data);
      }
    }
    uVar23 = uVar23 + 1;
    uVar24 = uVar24 << 1 | (uint)((int)uVar24 < 0);
  } while ((int)uVar23 < 0xf);
  if ((local_270.NumBits < 0x10) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  FVar14 = (ForElementType<unsigned_int>)&local_270;
  if (local_270.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FVar14 = local_270.AllocatorInstance.SecondaryData;
  }
  if ((*(uint *)FVar14 & 0x8000) != 0) {
    pFVar12 = FAutomationTestFramework::Get();
    pFVar6 = pFVar12->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_578,
                       L"Insert from uint32 with ReadOffset 0 at middle, Zeroes, Then Ones");
    (*pcVar7)(pFVar6,&local_578,0);
    if (local_578.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_578.Data.AllocatorInstance.Data);
    }
  }
  if ((local_270.NumBits < 0x11) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  FVar14 = (ForElementType<unsigned_int>)&local_270;
  if (local_270.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FVar14 = local_270.AllocatorInstance.SecondaryData;
  }
  if ((*(uint *)FVar14 & 0x10000) != 0) {
    pFVar12 = FAutomationTestFramework::Get();
    pFVar6 = pFVar12->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_578,
                       L"Insert from uint32 with ReadOffset 0 at middle, Zeroes, Then Ones");
    (*pcVar7)(pFVar6,&local_578,0);
    if (local_578.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_578.Data.AllocatorInstance.Data);
    }
  }
  if ((local_270.NumBits < 0x12) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  FVar14 = (ForElementType<unsigned_int>)&local_270;
  if (local_270.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FVar14 = local_270.AllocatorInstance.SecondaryData;
  }
  if ((*(uint *)FVar14 & 0x20000) != 0) {
    pFVar12 = FAutomationTestFramework::Get();
    pFVar6 = pFVar12->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_578,
                       L"Insert from uint32 with ReadOffset 0 at middle, Zeroes, Then Ones");
    (*pcVar7)(pFVar6,&local_578,0);
    if (local_578.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_578.Data.AllocatorInstance.Data);
    }
  }
  if ((local_270.NumBits < 0x13) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  FVar14 = (ForElementType<unsigned_int>)&local_270;
  if (local_270.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FVar14 = local_270.AllocatorInstance.SecondaryData;
  }
  if ((*(uint *)FVar14 & 0x40000) != 0) {
    pFVar12 = FAutomationTestFramework::Get();
    pFVar6 = pFVar12->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_578,
                       L"Insert from uint32 with ReadOffset 0 at middle, Zeroes, Then Ones");
    (*pcVar7)(pFVar6,&local_578,0);
    if (local_578.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_578.Data.AllocatorInstance.Data);
    }
  }
  if ((local_270.NumBits < 0x14) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  FVar14 = (ForElementType<unsigned_int>)&local_270;
  if (local_270.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FVar14 = local_270.AllocatorInstance.SecondaryData;
  }
  if ((*(uint *)FVar14 & 0x80000) != 0) {
    pFVar12 = FAutomationTestFramework::Get();
    pFVar6 = pFVar12->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_578,
                       L"Insert from uint32 with ReadOffset 0 at middle, Zeroes, Then Ones");
    (*pcVar7)(pFVar6,&local_578,0);
    if (local_578.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_578.Data.AllocatorInstance.Data);
    }
  }
  uVar23 = 0;
  local_110.MaxBits = 0x80;
  local_110.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_110.NumBits = 0;
  local_530[0] = 0xffff0000;
  local_530[1] = 0xf0f0f0f;
  TBitArray<FDefaultBitArrayAllocator>::InsertUninitialized(&local_110,0,0x40);
  if ((local_110.NumBits < 0x40) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index >= 0 && NumBitsToSet >= 0 && Index + NumBitsToSet <= NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x3bc,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  FVar14 = (ForElementType<unsigned_int>)&local_110;
  if (local_110.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FVar14 = local_110.AllocatorInstance.SecondaryData;
  }
  FBitArrayMemory::MemmoveBitsWordOrder((uint *)FVar14,0,local_530,0,0x40);
  TBitArray<FDefaultBitArrayAllocator>::CheckInvariants(&local_110);
  if (local_110.NumBits != 0x40) {
    pFVar12 = FAutomationTestFramework::Get();
    pFVar6 = pFVar12->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_480,L"Insert from uint32 with ReadOffset 0 at end, MutlipleInts, size"
                      );
    (*pcVar7)(pFVar6,&local_480,0);
    if (local_480.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_480.Data.AllocatorInstance.Data);
    }
  }
  pTVar2 = &this->Label;
  uVar24 = 1;
  do {
    (this->Label)._padding_ = pTVar2->_padding_;
    if ((local_110.NumBits <= (int)uVar23) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    FVar14 = (ForElementType<unsigned_int>)&local_110;
    if (local_110.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar14 = local_110.AllocatorInstance.SecondaryData;
    }
    if (((*(uint *)((longlong)FVar14 + (ulonglong)(uVar23 >> 5) * 4) & uVar24) != 0) != 0xf < uVar23
       ) {
      pFVar12 = FAutomationTestFramework::Get();
      pFVar6 = pFVar12->CurrentTest;
      pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
      pTVar13 = TStringBuilderBase<wchar_t>::AppendfImpl
                          ((TStringBuilderBase<wchar_t> *)pTVar2,
                           L"Insert from uint32 with ReadOffset 0 at end, MultipleInts, %d");
      if (pTVar13->End < pTVar13->CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(pTVar13,1);
      }
      *pTVar13->CurPos = L'\0';
      ::FString::FString(&local_470,pTVar13->Base);
      (*pcVar7)(pFVar6,&local_470,0);
      if (local_470.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_470.Data.AllocatorInstance.Data);
      }
    }
    uVar23 = uVar23 + 1;
    uVar24 = uVar24 << 1 | (uint)((int)uVar24 < 0);
  } while ((int)uVar23 < 0x20);
  uVar24 = 0x20;
  uVar23 = 1;
  do {
    (this->Label)._padding_ = pTVar2->_padding_;
    if ((local_110.NumBits <= (int)uVar24) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    FVar14 = (ForElementType<unsigned_int>)&local_110;
    if (local_110.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar14 = local_110.AllocatorInstance.SecondaryData;
    }
    if ((uint)((*(uint *)((longlong)FVar14 + (ulonglong)(uVar24 >> 5) * 4) & uVar23) != 0) !=
        (~(uVar24 >> 2) & 1)) {
      pFVar12 = FAutomationTestFramework::Get();
      pFVar6 = pFVar12->CurrentTest;
      pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
      pTVar13 = TStringBuilderBase<wchar_t>::AppendfImpl
                          ((TStringBuilderBase<wchar_t> *)pTVar2,
                           L"Insert from uint32 with ReadOffset 0 at end, MultipleInts, %d");
      if (pTVar13->End < pTVar13->CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(pTVar13,1);
      }
      *pTVar13->CurPos = L'\0';
      ::FString::FString(&local_460,pTVar13->Base);
      (*pcVar7)(pFVar6,&local_460,0);
      if (local_460.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_460.Data.AllocatorInstance.Data);
      }
    }
    uVar18 = 0;
    uVar24 = uVar24 + 1;
    uVar23 = uVar23 << 1 | (uint)((int)uVar23 < 0);
  } while ((int)uVar24 < 0x40);
  local_130.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_130.NumBits = 0;
  local_130.MaxBits = 0x80;
  TBitArray<FDefaultBitArrayAllocator>::InsertUninitialized(&local_130,0,0x20);
  if ((local_130.NumBits < 0x20) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index >= 0 && NumBitsToSet >= 0 && Index + NumBitsToSet <= NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x3bc,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  FVar14 = (ForElementType<unsigned_int>)&local_130;
  if (local_130.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FVar14 = local_130.AllocatorInstance.SecondaryData;
  }
  FBitArrayMemory::MemmoveBitsWordOrder((uint *)FVar14,0,local_530,0x10,0x20);
  TBitArray<FDefaultBitArrayAllocator>::CheckInvariants(&local_130);
  if (local_130.NumBits != 0x20) {
    pFVar12 = FAutomationTestFramework::Get();
    pFVar6 = pFVar12->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_450,
                       L"Insert from uint32 with ReadOffset 16 at end, MultipleInts, size");
    (*pcVar7)(pFVar6,&local_450,0);
    if (local_450.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_450.Data.AllocatorInstance.Data);
    }
  }
  uVar23 = 1;
  do {
    (this->Label)._padding_ = pTVar2->_padding_;
    if ((local_130.NumBits <= (int)uVar18) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    FVar14 = (ForElementType<unsigned_int>)&local_130;
    if (local_130.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar14 = local_130.AllocatorInstance.SecondaryData;
    }
    if ((*(uint *)((longlong)FVar14 + (uVar18 >> 5) * 4) & uVar23) == 0) {
      pFVar12 = FAutomationTestFramework::Get();
      pFVar6 = pFVar12->CurrentTest;
      pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
      pTVar13 = TStringBuilderBase<wchar_t>::AppendfImpl
                          ((TStringBuilderBase<wchar_t> *)pTVar2,
                           L"Insert from uint32 with ReadOffset 16 at end, MultipleInts, %d");
      if (pTVar13->End < pTVar13->CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(pTVar13,1);
      }
      *pTVar13->CurPos = L'\0';
      ::FString::FString(&local_440,pTVar13->Base);
      (*pcVar7)(pFVar6,&local_440,0);
      if (local_440.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_440.Data.AllocatorInstance.Data);
      }
    }
    uVar24 = (int)uVar18 + 1;
    uVar18 = (ulonglong)uVar24;
    uVar23 = uVar23 << 1 | (uint)((int)uVar23 < 0);
  } while ((int)uVar24 < 0x10);
  uVar24 = 0x10;
  uVar23 = 0x10000;
  do {
    (this->Label)._padding_ = pTVar2->_padding_;
    if ((local_130.NumBits <= (int)uVar24) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    FVar14 = (ForElementType<unsigned_int>)&local_130;
    if (local_130.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar14 = local_130.AllocatorInstance.SecondaryData;
    }
    if ((uint)((*(uint *)((longlong)FVar14 + (ulonglong)(uVar24 >> 5) * 4) & uVar23) != 0) !=
        (~(uVar24 >> 2) & 1)) {
      pFVar12 = FAutomationTestFramework::Get();
      pFVar6 = pFVar12->CurrentTest;
      pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
      pTVar13 = TStringBuilderBase<wchar_t>::AppendfImpl
                          ((TStringBuilderBase<wchar_t> *)pTVar2,
                           L"Insert from uint32 with ReadOffset 16 at end, MultipleInts, %d");
      if (pTVar13->End < pTVar13->CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(pTVar13,1);
      }
      *pTVar13->CurPos = L'\0';
      ::FString::FString(&local_430,pTVar13->Base);
      (*pcVar7)(pFVar6,&local_430,0);
      if (local_430.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_430.Data.AllocatorInstance.Data);
      }
    }
    uVar24 = uVar24 + 1;
    uVar23 = uVar23 << 1 | (uint)((int)uVar23 < 0);
  } while ((int)uVar24 < 0x20);
  local_210.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_210.NumBits = 0;
  local_210.MaxBits = 0x80;
  local_530[2] = 0xf0f0f0f;
  local_530[3] = 0xffff0000;
  TBitArray<FDefaultBitArrayAllocator>::AddUninitialized(&local_210,0x20);
  if ((local_210.NumBits < 0x20) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index >= 0 && NumBitsToSet >= 0 && Index + NumBitsToSet <= NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x3bc,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  FVar14 = (ForElementType<unsigned_int>)&local_210;
  if (local_210.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FVar14 = local_210.AllocatorInstance.SecondaryData;
  }
  FBitArrayMemory::MemmoveBitsWordOrder((uint *)FVar14,0,local_530,0x10,0x20);
  TBitArray<FDefaultBitArrayAllocator>::CheckInvariants(&local_210);
  if ((local_210.NumBits < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("0 <= Index && Index <= NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x2f7,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar10 = local_210.NumBits;
  TBitArray<FDefaultBitArrayAllocator>::AddUninitialized(&local_210,0x20);
  if (iVar10 != 0) {
    FVar14 = (ForElementType<unsigned_int>)&local_210;
    if (local_210.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar14 = local_210.AllocatorInstance.SecondaryData;
    }
    FBitArrayMemory::MemmoveBitsWordOrder((uint *)FVar14,0x20,(uint *)FVar14,0,iVar10);
  }
  if ((local_210.NumBits < 0x20) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index >= 0 && NumBitsToSet >= 0 && Index + NumBitsToSet <= NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x3bc,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  FVar14 = (ForElementType<unsigned_int>)&local_210;
  if (local_210.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FVar14 = local_210.AllocatorInstance.SecondaryData;
  }
  FBitArrayMemory::MemmoveBitsWordOrder((uint *)FVar14,0,local_530 + 2,0x10,0x20);
  TBitArray<FDefaultBitArrayAllocator>::CheckInvariants(&local_210);
  if (local_210.NumBits != 0x40) {
    pFVar12 = FAutomationTestFramework::Get();
    pFVar6 = pFVar12->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_420,
                       L"Insert from uint32 with ReadOffset 16 at beginning, MultipleInts, size");
    (*pcVar7)(pFVar6,&local_420,0);
    if (local_420.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_420.Data.AllocatorInstance.Data);
    }
  }
  uVar18 = 0;
  uVar23 = 1;
  do {
    (this->Label)._padding_ = pTVar2->_padding_;
    if ((local_210.NumBits <= (int)uVar18) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    FVar14 = (ForElementType<unsigned_int>)&local_210;
    if (local_210.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar14 = local_210.AllocatorInstance.SecondaryData;
    }
    if ((uint)((*(uint *)((longlong)FVar14 + (uVar18 >> 5) * 4) & uVar23) != 0) !=
        (~(uint)(uVar18 >> 2) & 1)) {
      pFVar12 = FAutomationTestFramework::Get();
      pFVar6 = pFVar12->CurrentTest;
      pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
      pTVar13 = TStringBuilderBase<wchar_t>::AppendfImpl
                          ((TStringBuilderBase<wchar_t> *)pTVar2,
                           L"Insert from uint32 with ReadOffset 16 at beginning, MultipleInts, %d");
      if (pTVar13->End < pTVar13->CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(pTVar13,1);
      }
      *pTVar13->CurPos = L'\0';
      ::FString::FString(&local_410,pTVar13->Base);
      (*pcVar7)(pFVar6,&local_410,0);
      if (local_410.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_410.Data.AllocatorInstance.Data);
      }
    }
    uVar24 = (int)uVar18 + 1;
    uVar18 = (ulonglong)uVar24;
    uVar23 = uVar23 << 1 | (uint)((int)uVar23 < 0);
  } while ((int)uVar24 < 0x10);
  uVar23 = 0x10;
  uVar24 = 0x10000;
  do {
    (this->Label)._padding_ = pTVar2->_padding_;
    if ((local_210.NumBits <= (int)uVar23) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    FVar14 = (ForElementType<unsigned_int>)&local_210;
    if (local_210.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar14 = local_210.AllocatorInstance.SecondaryData;
    }
    if ((*(uint *)((longlong)FVar14 + (ulonglong)(uVar23 >> 5) * 4) & uVar24) != 0) {
      pFVar12 = FAutomationTestFramework::Get();
      pFVar6 = pFVar12->CurrentTest;
      pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
      pTVar13 = TStringBuilderBase<wchar_t>::AppendfImpl
                          ((TStringBuilderBase<wchar_t> *)pTVar2,
                           L"Insert from uint32 with ReadOffset 16 at beginning, MultipleInts, %d");
      if (pTVar13->End < pTVar13->CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(pTVar13,1);
      }
      *pTVar13->CurPos = L'\0';
      ::FString::FString(&local_400,pTVar13->Base);
      (*pcVar7)(pFVar6,&local_400,0);
      if (local_400.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_400.Data.AllocatorInstance.Data);
      }
    }
    uVar23 = uVar23 + 1;
    uVar24 = uVar24 << 1 | (uint)((int)uVar24 < 0);
  } while ((int)uVar23 < 0x20);
  uVar23 = 0x20;
  uVar24 = 1;
  do {
    (this->Label)._padding_ = pTVar2->_padding_;
    if ((local_210.NumBits <= (int)uVar23) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    FVar14 = (ForElementType<unsigned_int>)&local_210;
    if (local_210.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar14 = local_210.AllocatorInstance.SecondaryData;
    }
    if ((*(uint *)((longlong)FVar14 + (ulonglong)(uVar23 >> 5) * 4) & uVar24) == 0) {
      pFVar12 = FAutomationTestFramework::Get();
      pFVar6 = pFVar12->CurrentTest;
      pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
      pTVar13 = TStringBuilderBase<wchar_t>::AppendfImpl
                          ((TStringBuilderBase<wchar_t> *)pTVar2,
                           L"Insert from uint32 with ReadOffset 16 at beginning, MultipleInts, %d");
      if (pTVar13->End < pTVar13->CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(pTVar13,1);
      }
      *pTVar13->CurPos = L'\0';
      ::FString::FString(&local_3f0,pTVar13->Base);
      (*pcVar7)(pFVar6,&local_3f0,0);
      if (local_3f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3f0.Data.AllocatorInstance.Data);
      }
    }
    uVar23 = uVar23 + 1;
    uVar24 = uVar24 << 1 | (uint)((int)uVar24 < 0);
  } while ((int)uVar23 < 0x30);
  uVar24 = 0x30;
  uVar23 = 0x10000;
  do {
    (this->Label)._padding_ = pTVar2->_padding_;
    if ((local_210.NumBits <= (int)uVar24) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    FVar14 = (ForElementType<unsigned_int>)&local_210;
    if (local_210.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar14 = local_210.AllocatorInstance.SecondaryData;
    }
    if ((uint)((*(uint *)((longlong)FVar14 + (ulonglong)(uVar24 >> 5) * 4) & uVar23) != 0) !=
        (~(uVar24 >> 2) & 1)) {
      pFVar12 = FAutomationTestFramework::Get();
      pFVar6 = pFVar12->CurrentTest;
      pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
      pTVar13 = TStringBuilderBase<wchar_t>::AppendfImpl
                          ((TStringBuilderBase<wchar_t> *)pTVar2,
                           L"Insert from uint32 with ReadOffset 16 at beginning, MultipleInts, %d");
      if (pTVar13->End < pTVar13->CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(pTVar13,1);
      }
      *pTVar13->CurPos = L'\0';
      ::FString::FString(&local_3e0,pTVar13->Base);
      (*pcVar7)(pFVar6,&local_3e0,0);
      if (local_3e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3e0.Data.AllocatorInstance.Data);
      }
    }
    pFVar1 = local_538;
    uVar24 = uVar24 + 1;
    uVar23 = uVar23 << 1 | (uint)((int)uVar23 < 0);
  } while ((int)uVar24 < 0x40);
  if (local_210.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_210.AllocatorInstance.SecondaryData);
  }
  if (local_130.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_130.AllocatorInstance.SecondaryData);
  }
  if (local_110.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_110.AllocatorInstance.SecondaryData);
  }
  if (local_270.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_270.AllocatorInstance.SecondaryData);
  }
  if (local_150.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_150.AllocatorInstance.SecondaryData);
  }
  if (local_170.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_170.AllocatorInstance.SecondaryData);
  }
  if (local_230.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_230.AllocatorInstance.SecondaryData);
  }
  if (local_b0.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_b0.AllocatorInstance.SecondaryData);
  }
  if (local_f0.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_f0.AllocatorInstance.SecondaryData);
  }
  uVar23 = this->NumGrowingTrue;
  pTVar25 = &this->ArrGrowingTrue;
  uVar18 = 0;
  local_1f0.MaxBits = 0x80;
  local_1f0.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_1f0.NumBits = 0;
  if ((this->ArrGrowingTrue).NumBits < (int)uVar23) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("0 <= ReadOffsetBits && ReadOffsetBits + NumBitsToAdd <= ReadBits.NumBits",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x2ea,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if ((local_1f0.NumBits < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("0 <= Index && Index <= NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x2f7,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar10 = local_1f0.NumBits;
  if ((int)uVar23 < 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumBitsToAdd >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x2f8,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
LAB_141bae05f:
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index >= 0 && NumBitsToSet >= 0 && Index + NumBitsToSet <= NumBits",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x3cf,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  else {
    if ((0 < (int)uVar23) &&
       (TBitArray<FDefaultBitArrayAllocator>::AddUninitialized(&local_1f0,uVar23), iVar10 != 0)) {
      FVar14 = (ForElementType<unsigned_int>)&local_1f0;
      if (local_1f0.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar14 = local_1f0.AllocatorInstance.SecondaryData;
      }
      FBitArrayMemory::MemmoveBitsWordOrder((uint *)FVar14,uVar23,(uint *)FVar14,0,iVar10);
    }
    if (local_1f0.NumBits < (int)uVar23) goto LAB_141bae05f;
  }
  if (((this->ArrGrowingTrue).NumBits < (int)uVar23) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("0 <= ReadOffsetBits && ReadOffsetBits + NumBitsToSet <= ReadBits.NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x3d0,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  FVar14 = (this->ArrGrowingTrue).AllocatorInstance.SecondaryData;
  FVar19 = (ForElementType<unsigned_int>)pTVar25;
  if (FVar14 != (ForElementType<unsigned_int>)0x0) {
    FVar19 = FVar14;
  }
  FVar14 = (ForElementType<unsigned_int>)&local_1f0;
  if (local_1f0.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FVar14 = local_1f0.AllocatorInstance.SecondaryData;
  }
  FBitArrayMemory::MemmoveBitsWordOrder((uint *)FVar14,0,(uint *)FVar19,0,uVar23);
  TBitArray<FDefaultBitArrayAllocator>::CheckInvariants(&local_1f0);
  uVar23 = local_1f0.NumBits;
  if (local_1f0.NumBits == (this->ArrGrowingTrue).NumBits) {
    FVar14 = (this->ArrGrowingTrue).AllocatorInstance.SecondaryData;
    if (FVar14 == (ForElementType<unsigned_int>)0x0) {
      FVar14 = (ForElementType<unsigned_int>)pTVar25;
    }
    FVar19 = (ForElementType<unsigned_int>)&local_1f0;
    if (local_1f0.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar19 = local_1f0.AllocatorInstance.SecondaryData;
    }
    iVar10 = memcmp((void *)FVar19,(void *)FVar14,(ulonglong)(local_1f0.NumBits + 0x1fU >> 5) << 2);
    if (iVar10 != 0) goto LAB_141bae131;
  }
  else {
LAB_141bae131:
    pFVar12 = FAutomationTestFramework::Get();
    pFVar6 = pFVar12->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_3d0,L"Insert from uint32 with ReadOffset 0 at end from empty");
    (*pcVar7)(pFVar6,&local_3d0,0);
    uVar23 = local_1f0.NumBits;
    if (local_3d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3d0.Data.AllocatorInstance.Data);
      uVar23 = local_1f0.NumBits;
    }
  }
  uVar24 = this->NumGrowingTrue;
  if (((this->ArrGrowingTrue).NumBits < (int)uVar24) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("0 <= ReadOffsetBits && ReadOffsetBits + NumBitsToAdd <= ReadBits.NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x2ea,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  TBitArray<FDefaultBitArrayAllocator>::InsertUninitialized(&local_1f0,uVar23,uVar24);
  if (((((int)uVar23 < 0) || ((int)uVar24 < 0)) || (local_1f0.NumBits < (int)(uVar23 + uVar24))) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index >= 0 && NumBitsToSet >= 0 && Index + NumBitsToSet <= NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x3cf,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (((this->ArrGrowingTrue).NumBits < (int)uVar24) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("0 <= ReadOffsetBits && ReadOffsetBits + NumBitsToSet <= ReadBits.NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x3d0,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  FVar14 = (this->ArrGrowingTrue).AllocatorInstance.SecondaryData;
  FVar19 = (ForElementType<unsigned_int>)pTVar25;
  if (FVar14 != (ForElementType<unsigned_int>)0x0) {
    FVar19 = FVar14;
  }
  FVar14 = (ForElementType<unsigned_int>)&local_1f0;
  if (local_1f0.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FVar14 = local_1f0.AllocatorInstance.SecondaryData;
  }
  FBitArrayMemory::MemmoveBitsWordOrder((uint *)FVar14,uVar23,(uint *)FVar19,0,uVar24);
  TBitArray<FDefaultBitArrayAllocator>::CheckInvariants(&local_1f0);
  if (local_1f0.NumBits == (this->ArrGrowingTrueTwice).NumBits) {
    FVar14 = *pFVar1;
    if (FVar14 == (ForElementType<unsigned_int>)0x0) {
      FVar14 = (ForElementType<unsigned_int>)&this->ArrGrowingTrueTwice;
    }
    FVar19 = (ForElementType<unsigned_int>)&local_1f0;
    if (local_1f0.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar19 = local_1f0.AllocatorInstance.SecondaryData;
    }
    iVar10 = memcmp((void *)FVar19,(void *)FVar14,(ulonglong)(local_1f0.NumBits + 0x1fU >> 5) << 2);
    if (iVar10 != 0) goto LAB_141bae2ae;
  }
  else {
LAB_141bae2ae:
    pFVar12 = FAutomationTestFramework::Get();
    pFVar6 = pFVar12->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_3c0,L"Insert from uint32 with ReadOffset 0 at end to nonempty");
    (*pcVar7)(pFVar6,&local_3c0,0);
    if (local_3c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3c0.Data.AllocatorInstance.Data);
    }
  }
  uVar23 = this->NumGrowingTrue;
  local_1d0.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_1d0.NumBits = 0;
  local_1d0.MaxBits = 0x80;
  if ((this->ArrGrowingTrue).NumBits < (int)uVar23) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("0 <= ReadOffsetBits && ReadOffsetBits + NumBitsToAdd <= ReadBits.NumBits",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x2ea,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if ((local_1d0.NumBits < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("0 <= Index && Index <= NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x2f7,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar10 = local_1d0.NumBits;
  if ((int)uVar23 < 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumBitsToAdd >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x2f8,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
LAB_141bae3e0:
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index >= 0 && NumBitsToSet >= 0 && Index + NumBitsToSet <= NumBits",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x3cf,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  else {
    if ((0 < (int)uVar23) &&
       (TBitArray<FDefaultBitArrayAllocator>::AddUninitialized(&local_1d0,uVar23), iVar10 != 0)) {
      FVar14 = (ForElementType<unsigned_int>)&local_1d0;
      if (local_1d0.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar14 = local_1d0.AllocatorInstance.SecondaryData;
      }
      FBitArrayMemory::MemmoveBitsWordOrder((uint *)FVar14,uVar23,(uint *)FVar14,0,iVar10);
    }
    if (local_1d0.NumBits < (int)uVar23) goto LAB_141bae3e0;
  }
  if (((this->ArrGrowingTrue).NumBits < (int)uVar23) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("0 <= ReadOffsetBits && ReadOffsetBits + NumBitsToSet <= ReadBits.NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x3d0,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  FVar14 = (this->ArrGrowingTrue).AllocatorInstance.SecondaryData;
  FVar19 = (ForElementType<unsigned_int>)pTVar25;
  if (FVar14 != (ForElementType<unsigned_int>)0x0) {
    FVar19 = FVar14;
  }
  FVar14 = (ForElementType<unsigned_int>)&local_1d0;
  if (local_1d0.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FVar14 = local_1d0.AllocatorInstance.SecondaryData;
  }
  FBitArrayMemory::MemmoveBitsWordOrder((uint *)FVar14,0,(uint *)FVar19,0,uVar23);
  TBitArray<FDefaultBitArrayAllocator>::CheckInvariants(&local_1d0);
  uVar23 = this->NumGrowingTrue;
  if (((this->ArrGrowingTrue).NumBits < (int)uVar23) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("0 <= ReadOffsetBits && ReadOffsetBits + NumBitsToAdd <= ReadBits.NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x2ea,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((local_1d0.NumBits < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("0 <= Index && Index <= NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x2f7,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar10 = local_1d0.NumBits;
  if ((int)uVar23 < 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumBitsToAdd >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x2f8,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
LAB_141bae545:
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index >= 0 && NumBitsToSet >= 0 && Index + NumBitsToSet <= NumBits",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x3cf,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  else {
    if ((0 < (int)uVar23) &&
       (TBitArray<FDefaultBitArrayAllocator>::AddUninitialized(&local_1d0,uVar23), iVar10 != 0)) {
      FVar14 = (ForElementType<unsigned_int>)&local_1d0;
      if (local_1d0.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar14 = local_1d0.AllocatorInstance.SecondaryData;
      }
      FBitArrayMemory::MemmoveBitsWordOrder((uint *)FVar14,uVar23,(uint *)FVar14,0,iVar10);
    }
    if (local_1d0.NumBits < (int)uVar23) goto LAB_141bae545;
  }
  if (((this->ArrGrowingTrue).NumBits < (int)uVar23) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("0 <= ReadOffsetBits && ReadOffsetBits + NumBitsToSet <= ReadBits.NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x3d0,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  FVar14 = (this->ArrGrowingTrue).AllocatorInstance.SecondaryData;
  FVar19 = (ForElementType<unsigned_int>)pTVar25;
  if (FVar14 != (ForElementType<unsigned_int>)0x0) {
    FVar19 = FVar14;
  }
  FVar14 = (ForElementType<unsigned_int>)&local_1d0;
  if (local_1d0.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FVar14 = local_1d0.AllocatorInstance.SecondaryData;
  }
  FBitArrayMemory::MemmoveBitsWordOrder((uint *)FVar14,0,(uint *)FVar19,0,uVar23);
  TBitArray<FDefaultBitArrayAllocator>::CheckInvariants(&local_1d0);
  if (local_1d0.NumBits == (this->ArrGrowingTrueTwice).NumBits) {
    FVar14 = *pFVar1;
    if (FVar14 == (ForElementType<unsigned_int>)0x0) {
      FVar14 = (ForElementType<unsigned_int>)&this->ArrGrowingTrueTwice;
    }
    FVar19 = (ForElementType<unsigned_int>)&local_1d0;
    if (local_1d0.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar19 = local_1d0.AllocatorInstance.SecondaryData;
    }
    iVar10 = memcmp((void *)FVar19,(void *)FVar14,(ulonglong)(local_1d0.NumBits + 0x1fU >> 5) << 2);
    if (iVar10 != 0) goto LAB_141bae61a;
  }
  else {
LAB_141bae61a:
    pFVar12 = FAutomationTestFramework::Get();
    pFVar6 = pFVar12->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_3b0,L"Insert from uint32 with ReadOffset 0 at beginning to nonempty");
    (*pcVar7)(pFVar6,&local_3b0,0);
    if (local_3b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3b0.Data.AllocatorInstance.Data);
    }
  }
  uVar23 = this->NumGrowingTrue;
  local_2b0.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_2b0.NumBits = 0;
  local_2b0.MaxBits = 0x80;
  if ((this->ArrGrowingTrue).NumBits < (int)uVar23) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("0 <= ReadOffsetBits && ReadOffsetBits + NumBitsToAdd <= ReadBits.NumBits",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x2ea,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if ((local_2b0.NumBits < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("0 <= Index && Index <= NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x2f7,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar10 = local_2b0.NumBits;
  if ((int)uVar23 < 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumBitsToAdd >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x2f8,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
LAB_141bae74c:
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index >= 0 && NumBitsToSet >= 0 && Index + NumBitsToSet <= NumBits",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x3cf,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  else {
    if ((0 < (int)uVar23) &&
       (TBitArray<FDefaultBitArrayAllocator>::AddUninitialized(&local_2b0,uVar23), iVar10 != 0)) {
      FVar14 = (ForElementType<unsigned_int>)&local_2b0;
      if (local_2b0.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar14 = local_2b0.AllocatorInstance.SecondaryData;
      }
      FBitArrayMemory::MemmoveBitsWordOrder((uint *)FVar14,uVar23,(uint *)FVar14,0,iVar10);
    }
    if (local_2b0.NumBits < (int)uVar23) goto LAB_141bae74c;
  }
  if (((this->ArrGrowingTrue).NumBits < (int)uVar23) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("0 <= ReadOffsetBits && ReadOffsetBits + NumBitsToSet <= ReadBits.NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x3d0,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  FVar14 = (this->ArrGrowingTrue).AllocatorInstance.SecondaryData;
  FVar19 = (ForElementType<unsigned_int>)pTVar25;
  if (FVar14 != (ForElementType<unsigned_int>)0x0) {
    FVar19 = FVar14;
  }
  FVar14 = (ForElementType<unsigned_int>)&local_2b0;
  if (local_2b0.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FVar14 = local_2b0.AllocatorInstance.SecondaryData;
  }
  FBitArrayMemory::MemmoveBitsWordOrder((uint *)FVar14,0,(uint *)FVar19,0,uVar23);
  if ((local_2b0.MaxBits < local_2b0.NumBits) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumBits <= MaxBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x238,L"TBitArray::NumBits (%d) should never be greater than MaxBits (%d)"
                        ), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (((local_2b0.NumBits < 0) || (local_2b0.MaxBits < 0)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumBits >= 0 && MaxBits >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x239,L"NumBits (%d) and MaxBits (%d) should always be >= 0"), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar23 = local_2b0.NumBits & 0x8000001f;
  if ((int)uVar23 < 0) {
    uVar23 = (uVar23 - 1 | 0xffffffe0) + 1;
  }
  if (uVar23 != 0) {
    FVar14 = (ForElementType<unsigned_int>)&local_2b0;
    if (local_2b0.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar14 = local_2b0.AllocatorInstance.SecondaryData;
    }
    if (((*(uint *)((longlong)FVar14 +
                   (longlong)((int)(local_2b0.NumBits + (local_2b0.NumBits >> 0x1f & 0x1fU)) >> 5) *
                   4) & -1 << ((byte)uVar23 & 0x1f)) != 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(LastWord & SlackMask) == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x243,
                           L"TBitArray slack bits are non-zero, this will result in undefined behavior."
                          ), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pTVar3 = &this->ArrFalse;
  if (((this->ArrFalse).NumBits < 5) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("0 <= ReadOffsetBits && ReadOffsetBits + NumBitsToAdd <= ReadBits.NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x2ea,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((local_2b0.NumBits < 5) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("0 <= Index && Index <= NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x2f7,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar10 = local_2b0.NumBits;
  if ((local_2b0.NumBits == 0) ||
     (iVar9 = local_2b0.NumBits + 5U,
     (int)(local_2b0.NumBits + 4U + ((int)(local_2b0.NumBits + 4U) >> 0x1f & 0x1fU)) >> 5 !=
     (int)(((int)(local_2b0.NumBits - 1U) >> 0x1f & 0x1fU) + (local_2b0.NumBits - 1U)) >> 5)) {
    if (local_2b0.MaxBits < (int)(local_2b0.NumBits + 5U)) {
      uVar23 = local_2b0.MaxBits + 0x1fU >> 5;
      uVar24 = local_2b0.NumBits + 0x24U >> 5;
      if (uVar24 < 5) {
        local_2b0.MaxBits = 4;
      }
      else {
        uVar17 = (ulonglong)uVar24;
        if (uVar23 < 5) {
          uVar23 = 0;
        }
        if (uVar23 == 0) {
          uVar21 = 4;
          if (4 < uVar17) {
            uVar21 = uVar17;
          }
        }
        else {
          uVar21 = ((ulonglong)uVar24 * 3 >> 3) + 0x10 + uVar17;
        }
        uVar15 = FMemory::QuantizeSize(uVar21 * 4,0);
        local_2b0.MaxBits = (int)(uVar15 >> 2);
        if (local_2b0.MaxBits < (int)uVar24) {
          local_2b0.MaxBits = 0x7fffffff;
        }
      }
      local_2b0.MaxBits = local_2b0.MaxBits << 5;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_2b0,local_2b0.NumBits);
    }
    local_2b0.NumBits = local_2b0.NumBits + 5;
    uVar24 = local_2b0.NumBits >> 0x1f & 0x1f;
    uVar23 = local_2b0.NumBits + uVar24;
    iVar11 = (uVar23 & 0x1f) - uVar24;
    iVar9 = local_2b0.NumBits;
    if (iVar11 != 0) {
      FVar14 = (ForElementType<unsigned_int>)&local_2b0;
      if (local_2b0.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar14 = local_2b0.AllocatorInstance.SecondaryData;
      }
      puVar4 = (uint *)((longlong)FVar14 + (longlong)((int)uVar23 >> 5) * 4);
      *puVar4 = *puVar4 & 0xffffffffU >> (0x20U - (char)iVar11 & 0x1f);
      iVar9 = local_2b0.NumBits;
    }
  }
  local_2b0.NumBits = iVar9;
  if (iVar10 - 5U != 0) {
    FVar14 = (ForElementType<unsigned_int>)&local_2b0;
    if (local_2b0.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar14 = local_2b0.AllocatorInstance.SecondaryData;
    }
    FBitArrayMemory::MemmoveBitsWordOrder((uint *)FVar14,10,(uint *)FVar14,5,iVar10 - 5U);
  }
  if ((local_2b0.NumBits < 10) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index >= 0 && NumBitsToSet >= 0 && Index + NumBitsToSet <= NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x3cf,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (((this->ArrFalse).NumBits < 5) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("0 <= ReadOffsetBits && ReadOffsetBits + NumBitsToSet <= ReadBits.NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x3d0,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  FVar14 = (this->ArrFalse).AllocatorInstance.SecondaryData;
  FVar19 = (ForElementType<unsigned_int>)pTVar3;
  if (FVar14 != (ForElementType<unsigned_int>)0x0) {
    FVar19 = FVar14;
  }
  FVar14 = (ForElementType<unsigned_int>)&local_2b0;
  if (local_2b0.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FVar14 = local_2b0.AllocatorInstance.SecondaryData;
  }
  FBitArrayMemory::MemmoveBitsWordOrder((uint *)FVar14,5,(uint *)FVar19,0,5);
  TBitArray<FDefaultBitArrayAllocator>::CheckInvariants(&local_2b0);
  if (local_2b0.NumBits != this->NumGrowingTrue + 5) {
    pFVar12 = FAutomationTestFramework::Get();
    pFVar6 = pFVar12->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_3a0,L"Insert from uint32 with ReadOffset 0 at middle to nonempty size"
                      );
    (*pcVar7)(pFVar6,&local_3a0);
    if (local_3a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3a0.Data.AllocatorInstance.Data);
    }
  }
  uVar23 = 1;
  do {
    iVar10 = (int)uVar18;
    if (((this->ArrGrowingTrue).NumBits <= iVar10) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    FVar14 = (this->ArrGrowingTrue).AllocatorInstance.SecondaryData;
    FVar19 = (ForElementType<unsigned_int>)pTVar25;
    if (FVar14 != (ForElementType<unsigned_int>)0x0) {
      FVar19 = FVar14;
    }
    lVar5 = (uVar18 >> 5) * 4;
    if ((local_2b0.NumBits <= iVar10) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    FVar14 = (ForElementType<unsigned_int>)&local_2b0;
    if (local_2b0.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar14 = local_2b0.AllocatorInstance.SecondaryData;
    }
    if (((*(uint *)(lVar5 + (longlong)FVar14) & uVar23) != 0) !=
        ((*(uint *)((longlong)FVar19 + lVar5) & uVar23) != 0)) {
      pFVar12 = FAutomationTestFramework::Get();
      pFVar6 = pFVar12->CurrentTest;
      pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
      ::FString::FString(&local_390,L"Insert from uint32 with ReadOffset 0 at middle to nonempty");
      (*pcVar7)(pFVar6,&local_390);
      if (local_390.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_390.Data.AllocatorInstance.Data);
      }
    }
    uVar18 = (ulonglong)(iVar10 + 1U);
    uVar23 = uVar23 << 1 | (uint)((int)uVar23 < 0);
  } while ((int)(iVar10 + 1U) < 5);
  if ((local_2b0.NumBits < 6) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  FVar14 = (ForElementType<unsigned_int>)&local_2b0;
  if (local_2b0.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FVar14 = local_2b0.AllocatorInstance.SecondaryData;
  }
  if ((*(byte *)FVar14 & 0x20) != 0) {
    pFVar12 = FAutomationTestFramework::Get();
    pFVar6 = pFVar12->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_568,L"Insert from uint32 with ReadOffset 0 at middle to nonempty");
    (*pcVar7)(pFVar6,&local_568);
    if (local_568.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_568.Data.AllocatorInstance.Data);
    }
  }
  if ((local_2b0.NumBits < 7) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  FVar14 = (ForElementType<unsigned_int>)&local_2b0;
  if (local_2b0.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FVar14 = local_2b0.AllocatorInstance.SecondaryData;
  }
  if ((*(byte *)FVar14 & 0x40) != 0) {
    pFVar12 = FAutomationTestFramework::Get();
    pFVar6 = pFVar12->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_568,L"Insert from uint32 with ReadOffset 0 at middle to nonempty");
    (*pcVar7)(pFVar6,&local_568);
    if (local_568.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_568.Data.AllocatorInstance.Data);
    }
  }
  if ((local_2b0.NumBits < 8) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  FVar14 = (ForElementType<unsigned_int>)&local_2b0;
  if (local_2b0.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FVar14 = local_2b0.AllocatorInstance.SecondaryData;
  }
  if ((*(byte *)FVar14 & 0x80) != 0) {
    pFVar12 = FAutomationTestFramework::Get();
    pFVar6 = pFVar12->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_568,L"Insert from uint32 with ReadOffset 0 at middle to nonempty");
    (*pcVar7)(pFVar6,&local_568);
    if (local_568.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_568.Data.AllocatorInstance.Data);
    }
  }
  if ((local_2b0.NumBits < 9) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  FVar14 = (ForElementType<unsigned_int>)&local_2b0;
  if (local_2b0.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FVar14 = local_2b0.AllocatorInstance.SecondaryData;
  }
  if ((*(uint *)FVar14 & 0x100) != 0) {
    pFVar12 = FAutomationTestFramework::Get();
    pFVar6 = pFVar12->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_568,L"Insert from uint32 with ReadOffset 0 at middle to nonempty");
    (*pcVar7)(pFVar6,&local_568);
    if (local_568.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_568.Data.AllocatorInstance.Data);
    }
  }
  if ((local_2b0.NumBits < 10) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  FVar14 = (ForElementType<unsigned_int>)&local_2b0;
  if (local_2b0.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FVar14 = local_2b0.AllocatorInstance.SecondaryData;
  }
  if ((*(uint *)FVar14 & 0x200) != 0) {
    pFVar12 = FAutomationTestFramework::Get();
    pFVar6 = pFVar12->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_568,L"Insert from uint32 with ReadOffset 0 at middle to nonempty");
    (*pcVar7)(pFVar6,&local_568);
    if (local_568.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_568.Data.AllocatorInstance.Data);
    }
  }
  uVar23 = 10;
  if (10 < this->NumGrowingTrue + 5) {
    iVar10 = 5;
    do {
      uVar24 = uVar23 - 5;
      if (((iVar10 < 0) || ((this->ArrGrowingTrue).NumBits <= (int)uVar24)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      FVar14 = (this->ArrGrowingTrue).AllocatorInstance.SecondaryData;
      FVar19 = (ForElementType<unsigned_int>)pTVar25;
      if (FVar14 != (ForElementType<unsigned_int>)0x0) {
        FVar19 = FVar14;
      }
      uVar22 = uVar24 & 0x1f;
      if ((int)uVar24 < 0) {
        uVar24 = uVar23 + 0x1a;
      }
      uVar24 = *(uint *)((longlong)FVar19 + (longlong)((int)uVar24 >> 5) * 4);
      if ((((int)uVar23 < 0) || (local_2b0.NumBits <= (int)uVar23)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      FVar14 = (ForElementType<unsigned_int>)&local_2b0;
      if (local_2b0.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar14 = local_2b0.AllocatorInstance.SecondaryData;
      }
      uVar20 = uVar23;
      if ((int)uVar23 < 0) {
        uVar20 = uVar23 + 0x1f;
      }
      if (((*(uint *)((longlong)FVar14 + (longlong)((int)uVar20 >> 5) * 4) >> (uVar23 & 0x1f) & 1)
          != 0) != ((uVar24 >> uVar22 & 1) != 0)) {
        pFVar12 = FAutomationTestFramework::Get();
        pFVar6 = pFVar12->CurrentTest;
        pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
        ::FString::FString(&local_380,L"Insert from uint32 with ReadOffset 0 at middle to nonempty")
        ;
        (*pcVar7)(pFVar6,&local_380);
        if (local_380.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_380.Data.AllocatorInstance.Data);
        }
      }
      uVar23 = uVar23 + 1;
      iVar10 = iVar10 + 1;
    } while ((int)uVar23 < this->NumGrowingTrue + 5);
  }
  uVar18 = 0;
  local_d0.MaxBits = 0x80;
  local_d0.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_d0.NumBits = 0;
  TBitArray<FDefaultBitArrayAllocator>::InsertRange<FDefaultBitArrayAllocator>
            (&local_d0,pTVar3,0,10,0);
  TBitArray<FDefaultBitArrayAllocator>::CheckInvariants(&local_d0);
  pTVar25 = &this->ArrTrue;
  TBitArray<FDefaultBitArrayAllocator>::InsertRange<FDefaultBitArrayAllocator>
            (&local_d0,pTVar25,local_d0.NumBits,10,0);
  TBitArray<FDefaultBitArrayAllocator>::CheckInvariants(&local_d0);
  uVar23 = 1;
  do {
    uVar24 = (uint)uVar18;
    if ((local_d0.NumBits <= (int)uVar24) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    FVar14 = (ForElementType<unsigned_int>)&local_d0;
    if (local_d0.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar14 = local_d0.AllocatorInstance.SecondaryData;
    }
    if (((*(uint *)((longlong)FVar14 + (uVar18 >> 5) * 4) & uVar23) != 0) != 9 < uVar24) {
      pFVar12 = FAutomationTestFramework::Get();
      pFVar6 = pFVar12->CurrentTest;
      pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
      ::FString::FString(&local_370,
                         L"Insert from uint32 with ReadOffset 0 at end, Zeroes, Then Ones");
      (*pcVar7)(pFVar6,&local_370);
      if (local_370.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_370.Data.AllocatorInstance.Data);
      }
    }
    uVar18 = (ulonglong)(uVar24 + 1);
    uVar23 = uVar23 << 1 | (uint)((int)uVar23 < 0);
  } while ((int)(uVar24 + 1) < 0x14);
  local_90.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_90.NumBits = 0;
  local_90.MaxBits = 0x80;
  TBitArray<FDefaultBitArrayAllocator>::InsertRange<FDefaultBitArrayAllocator>
            (&local_90,pTVar3,0,10,0);
  TBitArray<FDefaultBitArrayAllocator>::CheckInvariants(&local_90);
  TBitArray<FDefaultBitArrayAllocator>::InsertRange<FDefaultBitArrayAllocator>
            (&local_90,pTVar25,0,10,0);
  TBitArray<FDefaultBitArrayAllocator>::CheckInvariants(&local_90);
  uVar18 = 0;
  uVar23 = 1;
  do {
    uVar24 = (uint)uVar18;
    if ((local_90.NumBits <= (int)uVar24) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    FVar14 = (ForElementType<unsigned_int>)&local_90;
    if (local_90.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar14 = local_90.AllocatorInstance.SecondaryData;
    }
    if (((*(uint *)((longlong)FVar14 + (uVar18 >> 5) * 4) & uVar23) != 0) != uVar24 < 10) {
      pFVar12 = FAutomationTestFramework::Get();
      pFVar6 = pFVar12->CurrentTest;
      pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
      ::FString::FString(&local_360,
                         L"Insert from uint32 with ReadOffset 0 at beginning, Zeroes, Then Ones");
      (*pcVar7)(pFVar6,&local_360);
      if (local_360.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_360.Data.AllocatorInstance.Data);
      }
    }
    uVar18 = (ulonglong)(uVar24 + 1);
    uVar23 = uVar23 << 1 | (uint)((int)uVar23 < 0);
  } while ((int)(uVar24 + 1) < 0x14);
  local_250.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_250.NumBits = 0;
  local_250.MaxBits = 0x80;
  TBitArray<FDefaultBitArrayAllocator>::InsertRange<FDefaultBitArrayAllocator>
            (&local_250,pTVar3,0,10,0);
  TBitArray<FDefaultBitArrayAllocator>::CheckInvariants(&local_250);
  uVar23 = 5;
  TBitArray<FDefaultBitArrayAllocator>::InsertRange<FDefaultBitArrayAllocator>
            (&local_250,pTVar25,5,10,0);
  TBitArray<FDefaultBitArrayAllocator>::CheckInvariants(&local_250);
  if ((local_250.NumBits < 1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  FVar14 = (ForElementType<unsigned_int>)&local_250;
  if (local_250.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FVar14 = local_250.AllocatorInstance.SecondaryData;
  }
  if ((*(byte *)FVar14 & 1) != 0) {
    pFVar12 = FAutomationTestFramework::Get();
    pFVar6 = pFVar12->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_558,
                       L"Insert from uint32 with ReadOffset 0 at middle, Zeroes, Then Ones");
    (*pcVar7)(pFVar6,&local_558,0);
    if (local_558.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_558.Data.AllocatorInstance.Data);
    }
  }
  if ((local_250.NumBits < 2) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  FVar14 = (ForElementType<unsigned_int>)&local_250;
  if (local_250.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FVar14 = local_250.AllocatorInstance.SecondaryData;
  }
  if ((*(byte *)FVar14 & 2) != 0) {
    pFVar12 = FAutomationTestFramework::Get();
    pFVar6 = pFVar12->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_558,
                       L"Insert from uint32 with ReadOffset 0 at middle, Zeroes, Then Ones");
    (*pcVar7)(pFVar6,&local_558,0);
    if (local_558.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_558.Data.AllocatorInstance.Data);
    }
  }
  if ((local_250.NumBits < 3) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  FVar14 = (ForElementType<unsigned_int>)&local_250;
  if (local_250.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FVar14 = local_250.AllocatorInstance.SecondaryData;
  }
  if ((*(byte *)FVar14 & 4) != 0) {
    pFVar12 = FAutomationTestFramework::Get();
    pFVar6 = pFVar12->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_558,
                       L"Insert from uint32 with ReadOffset 0 at middle, Zeroes, Then Ones");
    (*pcVar7)(pFVar6,&local_558,0);
    if (local_558.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_558.Data.AllocatorInstance.Data);
    }
  }
  if ((local_250.NumBits < 4) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  FVar14 = (ForElementType<unsigned_int>)&local_250;
  if (local_250.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FVar14 = local_250.AllocatorInstance.SecondaryData;
  }
  if ((*(byte *)FVar14 & 8) != 0) {
    pFVar12 = FAutomationTestFramework::Get();
    pFVar6 = pFVar12->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_558,
                       L"Insert from uint32 with ReadOffset 0 at middle, Zeroes, Then Ones");
    (*pcVar7)(pFVar6,&local_558,0);
    if (local_558.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_558.Data.AllocatorInstance.Data);
    }
  }
  if ((local_250.NumBits < 5) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  FVar14 = (ForElementType<unsigned_int>)&local_250;
  if (local_250.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FVar14 = local_250.AllocatorInstance.SecondaryData;
  }
  if ((*(byte *)FVar14 & 0x10) != 0) {
    pFVar12 = FAutomationTestFramework::Get();
    pFVar6 = pFVar12->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_558,
                       L"Insert from uint32 with ReadOffset 0 at middle, Zeroes, Then Ones");
    (*pcVar7)(pFVar6,&local_558,0);
    if (local_558.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_558.Data.AllocatorInstance.Data);
    }
  }
  uVar24 = 0x20;
  do {
    if ((local_250.NumBits <= (int)uVar23) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    FVar14 = (ForElementType<unsigned_int>)&local_250;
    if (local_250.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar14 = local_250.AllocatorInstance.SecondaryData;
    }
    if ((*(uint *)((longlong)FVar14 + (ulonglong)(uVar23 >> 5) * 4) & uVar24) == 0) {
      pFVar12 = FAutomationTestFramework::Get();
      pFVar6 = pFVar12->CurrentTest;
      pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
      ::FString::FString(&local_350,
                         L"Insert from uint32 with ReadOffset 0 at middle, Zeroes, Then Ones");
      (*pcVar7)(pFVar6,&local_350,0);
      if (local_350.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_350.Data.AllocatorInstance.Data);
      }
    }
    uVar23 = uVar23 + 1;
    uVar24 = uVar24 << 1 | (uint)((int)uVar24 < 0);
  } while ((int)uVar23 < 0xf);
  if ((local_250.NumBits < 0x10) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  FVar14 = (ForElementType<unsigned_int>)&local_250;
  if (local_250.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FVar14 = local_250.AllocatorInstance.SecondaryData;
  }
  if ((*(uint *)FVar14 & 0x8000) != 0) {
    pFVar12 = FAutomationTestFramework::Get();
    pFVar6 = pFVar12->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_548,
                       L"Insert from uint32 with ReadOffset 0 at middle, Zeroes, Then Ones");
    (*pcVar7)(pFVar6,&local_548,0);
    if (local_548.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_548.Data.AllocatorInstance.Data);
    }
  }
  if ((local_250.NumBits < 0x11) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  FVar14 = (ForElementType<unsigned_int>)&local_250;
  if (local_250.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FVar14 = local_250.AllocatorInstance.SecondaryData;
  }
  if ((*(uint *)FVar14 & 0x10000) != 0) {
    pFVar12 = FAutomationTestFramework::Get();
    pFVar6 = pFVar12->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_548,
                       L"Insert from uint32 with ReadOffset 0 at middle, Zeroes, Then Ones");
    (*pcVar7)(pFVar6,&local_548,0);
    if (local_548.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_548.Data.AllocatorInstance.Data);
    }
  }
  if ((local_250.NumBits < 0x12) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  FVar14 = (ForElementType<unsigned_int>)&local_250;
  if (local_250.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FVar14 = local_250.AllocatorInstance.SecondaryData;
  }
  if ((*(uint *)FVar14 & 0x20000) != 0) {
    pFVar12 = FAutomationTestFramework::Get();
    pFVar6 = pFVar12->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_548,
                       L"Insert from uint32 with ReadOffset 0 at middle, Zeroes, Then Ones");
    (*pcVar7)(pFVar6,&local_548,0);
    if (local_548.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_548.Data.AllocatorInstance.Data);
    }
  }
  if ((local_250.NumBits < 0x13) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  FVar14 = (ForElementType<unsigned_int>)&local_250;
  if (local_250.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FVar14 = local_250.AllocatorInstance.SecondaryData;
  }
  if ((*(uint *)FVar14 & 0x40000) != 0) {
    pFVar12 = FAutomationTestFramework::Get();
    pFVar6 = pFVar12->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_548,
                       L"Insert from uint32 with ReadOffset 0 at middle, Zeroes, Then Ones");
    (*pcVar7)(pFVar6,&local_548,0);
    if (local_548.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_548.Data.AllocatorInstance.Data);
    }
  }
  if ((local_250.NumBits < 0x14) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  FVar14 = (ForElementType<unsigned_int>)&local_250;
  if (local_250.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FVar14 = local_250.AllocatorInstance.SecondaryData;
  }
  if ((*(uint *)FVar14 & 0x80000) != 0) {
    pFVar12 = FAutomationTestFramework::Get();
    pFVar6 = pFVar12->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_548,
                       L"Insert from uint32 with ReadOffset 0 at middle, Zeroes, Then Ones");
    (*pcVar7)(pFVar6,&local_548,0);
    if (local_548.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_548.Data.AllocatorInstance.Data);
    }
  }
  uVar18 = 0;
  local_50.MaxBits = 0x80;
  local_50.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_50.NumBits = 0;
  local_1b0.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_1b0.NumBits = 0;
  local_530[4] = 0xffff0000;
  local_530[5] = 0xf0f0f0f;
  local_1b0.MaxBits = 0x80;
  TBitArray<FDefaultBitArrayAllocator>::AddUninitialized(&local_1b0,0x40);
  if ((local_1b0.NumBits < 0x40) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index >= 0 && NumBitsToSet >= 0 && Index + NumBitsToSet <= NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x3bc,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  FVar14 = (ForElementType<unsigned_int>)&local_1b0;
  if (local_1b0.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FVar14 = local_1b0.AllocatorInstance.SecondaryData;
  }
  FBitArrayMemory::MemmoveBitsWordOrder((uint *)FVar14,0,local_530 + 4,0,0x40);
  TBitArray<FDefaultBitArrayAllocator>::CheckInvariants(&local_1b0);
  TBitArray<FDefaultBitArrayAllocator>::InsertRange<FDefaultBitArrayAllocator>
            (&local_50,&local_1b0,0,0x40,0);
  TBitArray<FDefaultBitArrayAllocator>::CheckInvariants(&local_50);
  if (local_50.NumBits == local_1b0.NumBits) {
    FVar14 = (ForElementType<unsigned_int>)&local_1b0;
    if (local_1b0.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar14 = local_1b0.AllocatorInstance.SecondaryData;
    }
    FVar19 = (ForElementType<unsigned_int>)&local_50;
    if (local_50.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar19 = local_50.AllocatorInstance.SecondaryData;
    }
    iVar10 = memcmp((void *)FVar19,(void *)FVar14,(ulonglong)(local_50.NumBits + 0x1fU >> 5) << 2);
    if (iVar10 == 0) goto LAB_141bafa8a;
  }
  pFVar12 = FAutomationTestFramework::Get();
  pFVar6 = pFVar12->CurrentTest;
  pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
  ::FString::FString(&local_340,L"Insert from uint32 with ReadOffset 0 at end, MutlipleInts, size");
  (*pcVar7)(pFVar6,&local_340,0);
  if (local_340.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_340.Data.AllocatorInstance.Data);
  }
LAB_141bafa8a:
  local_190.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_190.NumBits = 0;
  local_190.MaxBits = 0x80;
  if (local_1b0.NumBits < 0x30) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("0 <= ReadOffsetBits && ReadOffsetBits + NumBitsToAdd <= ReadBits.NumBits",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x2ea,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if ((local_190.NumBits < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("0 <= Index && Index <= NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x2f7,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar10 = local_190.NumBits;
  TBitArray<FDefaultBitArrayAllocator>::AddUninitialized(&local_190,0x20);
  if (iVar10 != 0) {
    FVar14 = (ForElementType<unsigned_int>)&local_190;
    if (local_190.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar14 = local_190.AllocatorInstance.SecondaryData;
    }
    FBitArrayMemory::MemmoveBitsWordOrder((uint *)FVar14,0x20,(uint *)FVar14,0,iVar10);
  }
  if ((local_190.NumBits < 0x20) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index >= 0 && NumBitsToSet >= 0 && Index + NumBitsToSet <= NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x3cf,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((local_1b0.NumBits < 0x30) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("0 <= ReadOffsetBits && ReadOffsetBits + NumBitsToSet <= ReadBits.NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x3d0,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  FVar14 = (ForElementType<unsigned_int>)&local_1b0;
  if (local_1b0.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FVar14 = local_1b0.AllocatorInstance.SecondaryData;
  }
  FVar19 = (ForElementType<unsigned_int>)&local_190;
  if (local_190.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FVar19 = local_190.AllocatorInstance.SecondaryData;
  }
  FBitArrayMemory::MemmoveBitsWordOrder((uint *)FVar19,0,(uint *)FVar14,0x10,0x20);
  TBitArray<FDefaultBitArrayAllocator>::CheckInvariants(&local_190);
  if (local_190.NumBits != 0x20) {
    pFVar12 = FAutomationTestFramework::Get();
    pFVar6 = pFVar12->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_330,
                       L"Insert from uint32 with ReadOffset 16 at end, MultipleInts, size");
    (*pcVar7)(pFVar6,&local_330,0);
    if (local_330.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_330.Data.AllocatorInstance.Data);
    }
  }
  uVar23 = 1;
  do {
    (this->Label)._padding_ = (this->Label)._padding_;
    if ((local_190.NumBits <= (int)uVar18) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    FVar14 = (ForElementType<unsigned_int>)&local_190;
    if (local_190.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar14 = local_190.AllocatorInstance.SecondaryData;
    }
    if ((*(uint *)((longlong)FVar14 + (uVar18 >> 5) * 4) & uVar23) == 0) {
      pFVar12 = FAutomationTestFramework::Get();
      pFVar6 = pFVar12->CurrentTest;
      pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
      pTVar13 = TStringBuilderBase<wchar_t>::AppendfImpl
                          ((TStringBuilderBase<wchar_t> *)&this->Label,
                           L"Insert from uint32 with ReadOffset 16 at end, MultipleInts, %d");
      if (pTVar13->End < pTVar13->CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(pTVar13,1);
      }
      *pTVar13->CurPos = L'\0';
      ::FString::FString(&local_320,pTVar13->Base);
      (*pcVar7)(pFVar6,&local_320,0);
      if (local_320.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_320.Data.AllocatorInstance.Data);
      }
    }
    uVar24 = (int)uVar18 + 1;
    uVar18 = (ulonglong)uVar24;
    uVar23 = uVar23 << 1 | (uint)((int)uVar23 < 0);
  } while ((int)uVar24 < 0x10);
  uVar24 = 0x10;
  uVar23 = 0x10000;
  do {
    (this->Label)._padding_ = (this->Label)._padding_;
    if ((local_190.NumBits <= (int)uVar24) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    FVar14 = (ForElementType<unsigned_int>)&local_190;
    if (local_190.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar14 = local_190.AllocatorInstance.SecondaryData;
    }
    if ((uint)((*(uint *)((longlong)FVar14 + (ulonglong)(uVar24 >> 5) * 4) & uVar23) != 0) !=
        (~(uVar24 >> 2) & 1)) {
      pFVar12 = FAutomationTestFramework::Get();
      pFVar6 = pFVar12->CurrentTest;
      pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
      pTVar13 = TStringBuilderBase<wchar_t>::AppendfImpl
                          ((TStringBuilderBase<wchar_t> *)&this->Label,
                           L"Insert from uint32 with ReadOffset 16 at end, MultipleInts, %d");
      if (pTVar13->End < pTVar13->CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(pTVar13,1);
      }
      *pTVar13->CurPos = L'\0';
      ::FString::FString(&local_310,pTVar13->Base);
      (*pcVar7)(pFVar6,&local_310,0);
      if (local_310.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_310.Data.AllocatorInstance.Data);
      }
    }
    uVar24 = uVar24 + 1;
    uVar23 = uVar23 << 1 | (uint)((int)uVar23 < 0);
  } while ((int)uVar24 < 0x20);
  local_290.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_290.NumBits = 0;
  local_290.MaxBits = 0x80;
  local_530[6] = 0xf0f0f0f;
  local_530[7] = 0xffff0000;
  local_70.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_70.MaxBits = 0x80;
  local_70.NumBits = 0x40;
  FBitArrayMemory::MemmoveBitsWordOrder((uint *)&local_70,0,local_530 + 6,0,0x40);
  TBitArray<FDefaultBitArrayAllocator>::CheckInvariants(&local_70);
  if ((local_1b0.NumBits < 0x30) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("0 <= ReadOffsetBits && ReadOffsetBits + NumBitsToAdd <= ReadBits.NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x2ea,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((local_290.NumBits < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("0 <= Index && Index <= NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x2f7,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar10 = local_290.NumBits;
  if ((local_290.NumBits == 0) ||
     (uVar23 = local_290.NumBits + 0x20U,
     (int)(local_290.NumBits + 0x1fU + ((int)(local_290.NumBits + 0x1fU) >> 0x1f & 0x1fU)) >> 5 !=
     (int)(((int)(local_290.NumBits - 1U) >> 0x1f & 0x1fU) + (local_290.NumBits - 1U)) >> 5)) {
    if (local_290.MaxBits < (int)(local_290.NumBits + 0x20U)) {
      uVar23 = local_290.MaxBits + 0x1fU >> 5;
      uVar24 = local_290.NumBits + 0x3fU >> 5;
      uVar18 = (ulonglong)uVar24;
      iVar9 = 4;
      if (4 < uVar24) {
        if (uVar23 < 5) {
          uVar23 = 0;
        }
        if (uVar23 == 0) {
          uVar17 = 4;
          if (4 < uVar18) {
            uVar17 = uVar18;
          }
        }
        else {
          uVar17 = (uVar18 * 3 >> 3) + 0x10 + uVar18;
        }
        uVar15 = FMemory::QuantizeSize(uVar17 * 4,0);
        iVar9 = (int)(uVar15 >> 2);
        if (iVar9 < (int)uVar24) {
          iVar9 = 0x7fffffff;
        }
      }
      local_290.MaxBits = iVar9 << 5;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_290,local_290.NumBits);
    }
    local_290.NumBits = local_290.NumBits + 0x20;
    uVar23 = local_290.NumBits >> 0x1f & 0x1f;
    uVar24 = local_290.NumBits + uVar23;
    iVar9 = (uVar24 & 0x1f) - uVar23;
    uVar23 = local_290.NumBits;
    if (iVar9 != 0) {
      FVar14 = (ForElementType<unsigned_int>)&local_290;
      if (local_290.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar14 = local_290.AllocatorInstance.SecondaryData;
      }
      puVar4 = (uint *)((longlong)FVar14 + (longlong)((int)uVar24 >> 5) * 4);
      *puVar4 = *puVar4 & 0xffffffffU >> (-(char)iVar9 & 0x1fU);
      uVar23 = local_290.NumBits;
    }
  }
  local_290.NumBits = uVar23;
  if (iVar10 != 0) {
    FVar14 = (ForElementType<unsigned_int>)&local_290;
    if (local_290.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar14 = local_290.AllocatorInstance.SecondaryData;
    }
    FBitArrayMemory::MemmoveBitsWordOrder((uint *)FVar14,0x20,(uint *)FVar14,0,iVar10);
  }
  if ((local_290.NumBits < 0x20) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index >= 0 && NumBitsToSet >= 0 && Index + NumBitsToSet <= NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x3cf,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((local_1b0.NumBits < 0x30) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("0 <= ReadOffsetBits && ReadOffsetBits + NumBitsToSet <= ReadBits.NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x3d0,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  FVar14 = (ForElementType<unsigned_int>)&local_1b0;
  if (local_1b0.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FVar14 = local_1b0.AllocatorInstance.SecondaryData;
  }
  FVar19 = (ForElementType<unsigned_int>)&local_290;
  if (local_290.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FVar19 = local_290.AllocatorInstance.SecondaryData;
  }
  FBitArrayMemory::MemmoveBitsWordOrder((uint *)FVar19,0,(uint *)FVar14,0x10,0x20);
  if ((local_290.MaxBits < local_290.NumBits) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumBits <= MaxBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x238,L"TBitArray::NumBits (%d) should never be greater than MaxBits (%d)"
                        ), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (((local_290.NumBits < 0) || (local_290.MaxBits < 0)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumBits >= 0 && MaxBits >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x239,L"NumBits (%d) and MaxBits (%d) should always be >= 0"), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar23 = local_290.NumBits & 0x8000001f;
  if ((int)uVar23 < 0) {
    uVar23 = (uVar23 - 1 | 0xffffffe0) + 1;
  }
  if (uVar23 != 0) {
    FVar14 = (ForElementType<unsigned_int>)&local_290;
    if (local_290.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar14 = local_290.AllocatorInstance.SecondaryData;
    }
    if (((*(uint *)((longlong)FVar14 +
                   (longlong)((int)(local_290.NumBits + (local_290.NumBits >> 0x1f & 0x1fU)) >> 5) *
                   4) & -1 << ((byte)uVar23 & 0x1f)) != 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(LastWord & SlackMask) == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x243,
                           L"TBitArray slack bits are non-zero, this will result in undefined behavior."
                          ), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  if ((local_70.NumBits < 0x30) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("0 <= ReadOffsetBits && ReadOffsetBits + NumBitsToAdd <= ReadBits.NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x2ea,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((local_290.NumBits < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("0 <= Index && Index <= NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x2f7,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar10 = local_290.NumBits;
  if ((local_290.NumBits == 0) ||
     (iVar9 = local_290.NumBits + 0x20U,
     (int)(local_290.NumBits + 0x1fU + ((int)(local_290.NumBits + 0x1fU) >> 0x1f & 0x1fU)) >> 5 !=
     (int)(((int)(local_290.NumBits - 1U) >> 0x1f & 0x1fU) + (local_290.NumBits - 1U)) >> 5)) {
    if (local_290.MaxBits < (int)(local_290.NumBits + 0x20U)) {
      uVar23 = local_290.MaxBits + 0x1fU >> 5;
      uVar24 = local_290.NumBits + 0x3fU >> 5;
      if (uVar24 < 5) {
        local_290.MaxBits = 4;
      }
      else {
        uVar18 = (ulonglong)uVar24;
        if (uVar23 < 5) {
          uVar23 = 0;
        }
        if (uVar23 == 0) {
          uVar17 = 4;
          if (4 < uVar18) {
            uVar17 = uVar18;
          }
        }
        else {
          uVar17 = ((ulonglong)uVar24 * 3 >> 3) + 0x10 + uVar18;
        }
        uVar15 = FMemory::QuantizeSize(uVar17 * 4,0);
        local_290.MaxBits = (int)(uVar15 >> 2);
        if (local_290.MaxBits < (int)uVar24) {
          local_290.MaxBits = 0x7fffffff;
        }
      }
      local_290.MaxBits = local_290.MaxBits << 5;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_290,local_290.NumBits);
    }
    local_290.NumBits = local_290.NumBits + 0x20;
    uVar24 = local_290.NumBits >> 0x1f & 0x1f;
    uVar23 = local_290.NumBits + uVar24;
    iVar11 = (uVar23 & 0x1f) - uVar24;
    iVar9 = local_290.NumBits;
    if (iVar11 != 0) {
      FVar14 = (ForElementType<unsigned_int>)&local_290;
      if (local_290.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar14 = local_290.AllocatorInstance.SecondaryData;
      }
      puVar4 = (uint *)((longlong)FVar14 + (longlong)((int)uVar23 >> 5) * 4);
      *puVar4 = *puVar4 & 0xffffffffU >> (-(char)iVar11 & 0x1fU);
      iVar9 = local_290.NumBits;
    }
  }
  local_290.NumBits = iVar9;
  if (iVar10 != 0) {
    FVar14 = (ForElementType<unsigned_int>)&local_290;
    if (local_290.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar14 = local_290.AllocatorInstance.SecondaryData;
    }
    FBitArrayMemory::MemmoveBitsWordOrder((uint *)FVar14,0x20,(uint *)FVar14,0,iVar10);
  }
  if ((local_290.NumBits < 0x20) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index >= 0 && NumBitsToSet >= 0 && Index + NumBitsToSet <= NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x3cf,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((local_70.NumBits < 0x30) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("0 <= ReadOffsetBits && ReadOffsetBits + NumBitsToSet <= ReadBits.NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x3d0,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  FVar14 = (ForElementType<unsigned_int>)&local_70;
  if (local_70.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FVar14 = local_70.AllocatorInstance.SecondaryData;
  }
  FVar19 = (ForElementType<unsigned_int>)&local_290;
  if (local_290.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FVar19 = local_290.AllocatorInstance.SecondaryData;
  }
  FBitArrayMemory::MemmoveBitsWordOrder((uint *)FVar19,0,(uint *)FVar14,0x10,0x20);
  TBitArray<FDefaultBitArrayAllocator>::CheckInvariants(&local_290);
  if (local_290.NumBits != 0x40) {
    pFVar12 = FAutomationTestFramework::Get();
    pFVar6 = pFVar12->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_300,
                       L"Insert from uint32 with ReadOffset 16 at beginning, MultipleInts, size");
    (*pcVar7)(pFVar6,&local_300,0);
    if (local_300.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_300.Data.AllocatorInstance.Data);
    }
  }
  uVar23 = 1;
  uVar24 = 0;
  do {
    (this->Label)._padding_ = (this->Label)._padding_;
    if ((local_290.NumBits <= (int)uVar24) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    FVar14 = (ForElementType<unsigned_int>)&local_290;
    if (local_290.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar14 = local_290.AllocatorInstance.SecondaryData;
    }
    if ((uint)((*(uint *)((longlong)FVar14 + (ulonglong)(uVar24 >> 5) * 4) & uVar23) != 0) !=
        (~(uVar24 >> 2) & 1)) {
      pFVar12 = FAutomationTestFramework::Get();
      pFVar6 = pFVar12->CurrentTest;
      pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
      pTVar13 = TStringBuilderBase<wchar_t>::AppendfImpl
                          ((TStringBuilderBase<wchar_t> *)&this->Label,
                           L"Insert from uint32 with ReadOffset 16 at beginning, MultipleInts, %d");
      if (pTVar13->End < pTVar13->CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(pTVar13,1);
      }
      *pTVar13->CurPos = L'\0';
      ::FString::FString(&local_2f0,pTVar13->Base);
      (*pcVar7)(pFVar6,&local_2f0,0);
      if (local_2f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2f0.Data.AllocatorInstance.Data);
      }
    }
    uVar24 = uVar24 + 1;
    uVar23 = uVar23 << 1 | (uint)((int)uVar23 < 0);
  } while ((int)uVar24 < 0x10);
  uVar23 = 0x10000;
  uVar24 = 0x10;
  do {
    (this->Label)._padding_ = (this->Label)._padding_;
    if ((local_290.NumBits <= (int)uVar24) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    FVar14 = (ForElementType<unsigned_int>)&local_290;
    if (local_290.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar14 = local_290.AllocatorInstance.SecondaryData;
    }
    if ((*(uint *)((longlong)FVar14 + (ulonglong)(uVar24 >> 5) * 4) & uVar23) != 0) {
      pFVar12 = FAutomationTestFramework::Get();
      pFVar6 = pFVar12->CurrentTest;
      pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
      pTVar13 = TStringBuilderBase<wchar_t>::AppendfImpl
                          ((TStringBuilderBase<wchar_t> *)&this->Label,
                           L"Insert from uint32 with ReadOffset 16 at beginning, MultipleInts, %d");
      if (pTVar13->End < pTVar13->CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(pTVar13,1);
      }
      *pTVar13->CurPos = L'\0';
      ::FString::FString(&local_2e0,pTVar13->Base);
      (*pcVar7)(pFVar6,&local_2e0,0);
      if (local_2e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2e0.Data.AllocatorInstance.Data);
      }
    }
    uVar24 = uVar24 + 1;
    uVar23 = uVar23 << 1 | (uint)((int)uVar23 < 0);
  } while ((int)uVar24 < 0x20);
  uVar23 = 1;
  uVar24 = 0x20;
  do {
    (this->Label)._padding_ = (this->Label)._padding_;
    if ((local_290.NumBits <= (int)uVar24) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    FVar14 = (ForElementType<unsigned_int>)&local_290;
    if (local_290.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar14 = local_290.AllocatorInstance.SecondaryData;
    }
    if ((*(uint *)((longlong)FVar14 + (ulonglong)(uVar24 >> 5) * 4) & uVar23) == 0) {
      pFVar12 = FAutomationTestFramework::Get();
      pFVar6 = pFVar12->CurrentTest;
      pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
      pTVar13 = TStringBuilderBase<wchar_t>::AppendfImpl
                          ((TStringBuilderBase<wchar_t> *)&this->Label,
                           L"Insert from uint32 with ReadOffset 16 at beginning, MultipleInts, %d");
      if (pTVar13->End < pTVar13->CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(pTVar13,1);
      }
      *pTVar13->CurPos = L'\0';
      ::FString::FString(&local_2d0,pTVar13->Base);
      (*pcVar7)(pFVar6,&local_2d0,0);
      if (local_2d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2d0.Data.AllocatorInstance.Data);
      }
    }
    uVar24 = uVar24 + 1;
    uVar23 = uVar23 << 1 | (uint)((int)uVar23 < 0);
  } while ((int)uVar24 < 0x30);
  uVar24 = 0x30;
  uVar23 = 0x10000;
  do {
    (this->Label)._padding_ = (this->Label)._padding_;
    if ((local_290.NumBits <= (int)uVar24) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    FVar14 = (ForElementType<unsigned_int>)&local_290;
    if (local_290.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar14 = local_290.AllocatorInstance.SecondaryData;
    }
    if ((uint)((*(uint *)((longlong)FVar14 + (ulonglong)(uVar24 >> 5) * 4) & uVar23) != 0) !=
        (~(uVar24 >> 2) & 1)) {
      pFVar12 = FAutomationTestFramework::Get();
      pFVar6 = pFVar12->CurrentTest;
      pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
      pTVar13 = TStringBuilderBase<wchar_t>::AppendfImpl
                          ((TStringBuilderBase<wchar_t> *)&this->Label,
                           L"Insert from uint32 with ReadOffset 16 at beginning, MultipleInts, %d");
      if (pTVar13->End < pTVar13->CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(pTVar13,1);
      }
      *pTVar13->CurPos = L'\0';
      ::FString::FString(&local_2c0,pTVar13->Base);
      (*pcVar7)(pFVar6,&local_2c0,0);
      if (local_2c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2c0.Data.AllocatorInstance.Data);
      }
    }
    uVar24 = uVar24 + 1;
    uVar23 = uVar23 << 1 | (uint)((int)uVar23 < 0);
  } while ((int)uVar24 < 0x40);
  if (local_70.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_70.AllocatorInstance.SecondaryData);
  }
  if (local_290.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_290.AllocatorInstance.SecondaryData);
  }
  if (local_190.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_190.AllocatorInstance.SecondaryData);
  }
  if (local_1b0.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_1b0.AllocatorInstance.SecondaryData);
  }
  if (local_50.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_50.AllocatorInstance.SecondaryData);
  }
  if (local_250.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_250.AllocatorInstance.SecondaryData);
  }
  if (local_90.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_90.AllocatorInstance.SecondaryData);
  }
  if (local_d0.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_d0.AllocatorInstance.SecondaryData);
  }
  if (local_2b0.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_2b0.AllocatorInstance.SecondaryData);
  }
  if (local_1d0.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_1d0.AllocatorInstance.SecondaryData);
  }
  if (local_1f0.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_1f0.AllocatorInstance.SecondaryData);
  }
  return;
}

// TestOtherConstructorAndAssignment @ 141bb34f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000141bb3579) */
/* WARNING: Removing unreachable block (ram,0x000141bb358a) */
/* WARNING: Removing unreachable block (ram,0x000141bb35b7) */
/* WARNING: Removing unreachable block (ram,0x000141bb35b8) */
/* WARNING: Removing unreachable block (ram,0x000141bb35c6) */
/* WARNING: Removing unreachable block (ram,0x000141bb35f3) */
/* WARNING: Removing unreachable block (ram,0x000141bb35f4) */
/* WARNING: Removing unreachable block (ram,0x000141bb3601) */
/* WARNING: Removing unreachable block (ram,0x000141bb3627) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffac : 0x000141bb362b */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __thiscall FBitArrayTest::TestOtherConstructorAndAssignment(FBitArrayTest *this)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  uint *puVar2;
  FAutomationTestBase *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FAutomationTestFramework *pFVar7;
  uint uVar8;
  ForElementType<unsigned_int> FVar9;
  ForElementType<unsigned_int> FVar10;
  ForElementType<unsigned_int> FVar11;
  uint uVar12;
  undefined1 auStack_198 [32];
  uint local_178;
  uint local_170;
  TBitArray<TSizedDefaultAllocator<32>_> local_168;
  uchar local_158 [8];
  uchar auStack_150 [8];
  ForElementType<unsigned_int> local_148;
  uint local_140;
  uint local_13c;
  FString local_138;
  FString local_128;
  FString local_118;
  FString local_108;
  uchar local_f8 [8];
  uchar auStack_f0 [8];
  ForElementType<unsigned_int> local_e8;
  uint local_e0;
  uint local_dc;
  TBitArray<FDefaultBitArrayAllocator> local_d8;
  TBitArray<FDefaultBitArrayAllocator> local_b8;
  uchar local_98 [8];
  uchar auStack_90 [8];
  ForElementType<unsigned_int> local_88;
  undefined8 local_80;
  TBitArray<FDefaultBitArrayAllocator> local_78;
  undefined8 local_58;
  void *local_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_198;
  local_58 = 0xffffffffffffffff;
  local_48 = (void *)0x0;
  local_40 = 0x30;
  local_3c = 0x80;
                    /* WARNING: Ignoring partial resolution of indirect */
  local_58._4_4_ = 0xffff;
  local_3c = 0x80;
  local_40 = 0x30;
  local_48 = (void *)0x0;
  if (((local_58 & 0xffff000000000000) != 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(LastWord & SlackMask) == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x243,
                         L"TBitArray slack bits are non-zero, this will result in undefined behavior."
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  local_168.AllocatorInstance = (ForElementType<unsigned_int>)0x0;
  local_168.NumBits = 0x30;
  local_168.MaxBits = 0;
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&local_168,0,2,4);
  local_168.MaxBits = 0x40;
  *(undefined8 *)local_168.AllocatorInstance = 0xffffffffffffffff;
  uVar12 = local_168.NumBits & 0x8000001f;
  if ((int)uVar12 < 0) {
    uVar12 = (uVar12 - 1 | 0xffffffe0) + 1;
  }
  if (uVar12 != 0) {
    puVar2 = (uint *)((longlong)local_168.AllocatorInstance +
                     (longlong)((int)(local_168.NumBits + (local_168.NumBits >> 0x1f & 0x1fU)) >> 5)
                     * 4);
    *puVar2 = *puVar2 & 0xffffffffU >> (0x20U - (char)uVar12 & 0x1f);
  }
  TBitArray<TSizedDefaultAllocator<32>_>::CheckInvariants(&local_168);
  if (local_168.AllocatorInstance != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_168.AllocatorInstance);
  }
  pTVar1 = &this->ArrGrowingTrue;
  local_88 = (ForElementType<unsigned_int>)0x0;
  local_80 = 0;
  uVar12 = (this->ArrGrowingTrue).NumBits + 0x1fU & 0xffffffe0;
  if (0 < (int)uVar12) {
    uVar8 = 0x80;
    if (0x80 < (int)uVar12) {
      uVar8 = uVar12;
    }
    local_80 = (ulonglong)uVar8 << 0x20;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)local_98,0);
  }
  uVar12 = (this->ArrGrowingTrue).NumBits;
  local_80._0_4_ = uVar12;
  if (uVar12 != 0) {
    FVar9 = (this->ArrGrowingTrue).AllocatorInstance.SecondaryData;
    if (FVar9 == (ForElementType<unsigned_int>)0x0) {
      FVar9 = (ForElementType<unsigned_int>)pTVar1;
    }
    FVar10 = (ForElementType<unsigned_int>)local_98;
    if (local_88 != (ForElementType<unsigned_int>)0x0) {
      FVar10 = local_88;
    }
    memcpy((void *)FVar10,(void *)FVar9,(ulonglong)(uVar12 + 0x1f >> 5) << 2);
  }
  if ((int)local_80._4_4_ < (int)(uint)local_80) {
    local_170 = local_80._4_4_;
    local_178 = (uint)local_80;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumBits <= MaxBits",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x238,L"TBitArray::NumBits (%d) should never be greater than MaxBits (%d)");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (((int)(uint)local_80 < 0) || ((int)local_80._4_4_ < 0)) {
    local_170 = local_80._4_4_;
    local_178 = (uint)local_80;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumBits >= 0 && MaxBits >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x239,L"NumBits (%d) and MaxBits (%d) should always be >= 0");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  uVar12 = (uint)local_80 & 0x8000001f;
  if ((int)uVar12 < 0) {
    uVar12 = (uVar12 - 1 | 0xffffffe0) + 1;
  }
  if (uVar12 != 0) {
    FVar9 = (ForElementType<unsigned_int>)local_98;
    if (local_88 != (ForElementType<unsigned_int>)0x0) {
      FVar9 = local_88;
    }
    if (((*(uint *)((longlong)FVar9 +
                   (longlong)((int)((uint)local_80 + ((int)(uint)local_80 >> 0x1f & 0x1fU)) >> 5) *
                   4) & -1 << ((byte)uVar12 & 0x1f)) != 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(LastWord & SlackMask) == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x243,
                           L"TBitArray slack bits are non-zero, this will result in undefined behavior."
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  uVar8 = local_80._4_4_;
  uVar12 = (uint)local_80;
  FVar9 = local_88;
  if (local_88 == (ForElementType<unsigned_int>)0x0) {
    local_158[0] = local_98[0];
    local_158[1] = local_98[1];
    local_158[2] = local_98[2];
    local_158[3] = local_98[3];
    local_158[4] = local_98[4];
    local_158[5] = local_98[5];
    local_158[6] = local_98[6];
    local_158[7] = local_98[7];
    auStack_150[0] = auStack_90[0];
    auStack_150[1] = auStack_90[1];
    auStack_150[2] = auStack_90[2];
    auStack_150[3] = auStack_90[3];
    auStack_150[4] = auStack_90[4];
    auStack_150[5] = auStack_90[5];
    auStack_150[6] = auStack_90[6];
    auStack_150[7] = auStack_90[7];
  }
  local_148 = local_88;
  local_88 = (ForElementType<unsigned_int>)0x0;
  local_140 = (uint)local_80;
  local_13c = local_80._4_4_;
  local_80._0_4_ = 0;
  local_80._4_4_ = 0;
  if ((int)uVar8 < (int)uVar12) {
    local_170 = uVar8;
    local_178 = uVar12;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumBits <= MaxBits",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x238,L"TBitArray::NumBits (%d) should never be greater than MaxBits (%d)");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (((int)uVar12 < 0) || ((int)uVar8 < 0)) {
    local_170 = uVar8;
    local_178 = uVar12;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumBits >= 0 && MaxBits >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x239,L"NumBits (%d) and MaxBits (%d) should always be >= 0");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  uVar8 = uVar12 & 0x8000001f;
  if ((int)uVar8 < 0) {
    uVar8 = (uVar8 - 1 | 0xffffffe0) + 1;
  }
  if (uVar8 != 0) {
    FVar10 = (ForElementType<unsigned_int>)local_158;
    if (FVar9 != (ForElementType<unsigned_int>)0x0) {
      FVar10 = FVar9;
    }
    if (((*(uint *)((longlong)FVar10 +
                   (longlong)((int)(uVar12 + ((int)uVar12 >> 0x1f & 0x1fU)) >> 5) * 4) &
         -1 << ((byte)uVar8 & 0x1f)) != 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(LastWord & SlackMask) == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x243,
                           L"TBitArray slack bits are non-zero, this will result in undefined behavior."
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (uVar12 == (this->ArrGrowingTrue).NumBits) {
    FVar10 = (this->ArrGrowingTrue).AllocatorInstance.SecondaryData;
    if (FVar10 == (ForElementType<unsigned_int>)0x0) {
      FVar10 = (ForElementType<unsigned_int>)pTVar1;
    }
    FVar11 = (ForElementType<unsigned_int>)local_158;
    if (FVar9 != (ForElementType<unsigned_int>)0x0) {
      FVar11 = FVar9;
    }
    iVar6 = memcmp((void *)FVar11,(void *)FVar10,(ulonglong)(uVar12 + 0x1f >> 5) << 2);
    if (iVar6 != 0) goto LAB_141bb3983;
  }
  else {
LAB_141bb3983:
    pFVar7 = FAutomationTestFramework::Get();
    pFVar3 = pFVar7->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_138,L"Copy Constructor");
    (*pcVar4)(pFVar3,&local_138,0);
    if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_138.Data.AllocatorInstance.Data);
    }
  }
  if (FVar9 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar9);
  }
  if (local_88 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_88);
  }
  local_78.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_78.NumBits = 0;
  local_78.MaxBits = 0;
  uVar12 = (this->ArrGrowingTrue).NumBits + 0x1fU & 0xffffffe0;
  if (0 < (int)uVar12) {
    local_78.MaxBits = 0x80;
    if (0x80 < (int)uVar12) {
      local_78.MaxBits = uVar12;
    }
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_78,0);
  }
  local_78.NumBits = (this->ArrGrowingTrue).NumBits;
  if (local_78.NumBits != 0) {
    FVar9 = (this->ArrGrowingTrue).AllocatorInstance.SecondaryData;
    if (FVar9 == (ForElementType<unsigned_int>)0x0) {
      FVar9 = (ForElementType<unsigned_int>)pTVar1;
    }
    FVar10 = (ForElementType<unsigned_int>)&local_78;
    if (local_78.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar10 = local_78.AllocatorInstance.SecondaryData;
    }
    memcpy((void *)FVar10,(void *)FVar9,(ulonglong)(local_78.NumBits + 0x1fU >> 5) << 2);
  }
  if ((local_78.MaxBits < local_78.NumBits) &&
     (local_178 = local_78.NumBits, local_170 = local_78.MaxBits,
     bVar5 = ::FDebug::CheckVerifyFailedImpl2
                       ("NumBits <= MaxBits",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                        ,0x238,L"TBitArray::NumBits (%d) should never be greater than MaxBits (%d)")
     , bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (((local_78.NumBits < 0) || (local_78.MaxBits < 0)) &&
     (local_178 = local_78.NumBits, local_170 = local_78.MaxBits,
     bVar5 = ::FDebug::CheckVerifyFailedImpl2
                       ("NumBits >= 0 && MaxBits >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                        ,0x239,L"NumBits (%d) and MaxBits (%d) should always be >= 0"), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar12 = local_78.NumBits & 0x8000001f;
  if ((int)uVar12 < 0) {
    uVar12 = (uVar12 - 1 | 0xffffffe0) + 1;
  }
  if (uVar12 != 0) {
    FVar9 = (ForElementType<unsigned_int>)&local_78;
    if (local_78.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar9 = local_78.AllocatorInstance.SecondaryData;
    }
    if (((*(uint *)((longlong)FVar9 +
                   (longlong)((int)(local_78.NumBits + (local_78.NumBits >> 0x1f & 0x1fU)) >> 5) * 4
                   ) & -1 << ((byte)uVar12 & 0x1f)) != 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(LastWord & SlackMask) == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x243,
                           L"TBitArray slack bits are non-zero, this will result in undefined behavior."
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (local_78.NumBits == (this->ArrGrowingTrue).NumBits) {
    FVar9 = (this->ArrGrowingTrue).AllocatorInstance.SecondaryData;
    if (FVar9 == (ForElementType<unsigned_int>)0x0) {
      FVar9 = (ForElementType<unsigned_int>)&this->ArrGrowingTrue;
    }
    FVar10 = (ForElementType<unsigned_int>)&local_78;
    if (local_78.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar10 = local_78.AllocatorInstance.SecondaryData;
    }
    iVar6 = memcmp((void *)FVar10,(void *)FVar9,(ulonglong)(local_78.NumBits + 0x1fU >> 5) << 2);
    if (iVar6 != 0) goto LAB_141bb3b68;
  }
  else {
LAB_141bb3b68:
    pFVar7 = FAutomationTestFramework::Get();
    pFVar3 = pFVar7->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_128,L"Copy Constructor");
    (*pcVar4)(pFVar3,&local_128,0);
    if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
    }
  }
  if (local_78.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_78.AllocatorInstance.SecondaryData);
  }
  local_d8.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_d8.NumBits = 0;
  local_d8.MaxBits = 0x80;
  TBitArray<FDefaultBitArrayAllocator>::CheckInvariants(&local_d8);
  if (&local_d8 != &this->ArrGrowingTrue) {
    local_d8.NumBits = 0;
    uVar12 = (this->ArrGrowingTrue).NumBits + 0x1fU & 0xffffffe0;
    if ((local_d8.MaxBits < (int)uVar12) || (0x80 < local_d8.MaxBits)) {
      local_d8.MaxBits = 0x80;
      if (0x80 < (int)uVar12) {
        local_d8.MaxBits = uVar12;
      }
      TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_d8,0);
    }
    local_d8.NumBits = (this->ArrGrowingTrue).NumBits;
    if (local_d8.NumBits != 0) {
      FVar9 = (this->ArrGrowingTrue).AllocatorInstance.SecondaryData;
      if (FVar9 == (ForElementType<unsigned_int>)0x0) {
        FVar9 = (ForElementType<unsigned_int>)&this->ArrGrowingTrue;
      }
      FVar10 = (ForElementType<unsigned_int>)&local_d8;
      if (local_d8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar10 = local_d8.AllocatorInstance.SecondaryData;
      }
      memcpy((void *)FVar10,(void *)FVar9,(ulonglong)(local_d8.NumBits + 0x1fU >> 5) << 2);
    }
  }
  if ((local_d8.MaxBits < local_d8.NumBits) &&
     (local_178 = local_d8.NumBits, local_170 = local_d8.MaxBits,
     bVar5 = ::FDebug::CheckVerifyFailedImpl2
                       ("NumBits <= MaxBits",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                        ,0x238,L"TBitArray::NumBits (%d) should never be greater than MaxBits (%d)")
     , bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (((local_d8.NumBits < 0) || (local_d8.MaxBits < 0)) &&
     (local_178 = local_d8.NumBits, local_170 = local_d8.MaxBits,
     bVar5 = ::FDebug::CheckVerifyFailedImpl2
                       ("NumBits >= 0 && MaxBits >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                        ,0x239,L"NumBits (%d) and MaxBits (%d) should always be >= 0"), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar12 = local_d8.NumBits & 0x8000001f;
  if ((int)uVar12 < 0) {
    uVar12 = (uVar12 - 1 | 0xffffffe0) + 1;
  }
  if (uVar12 != 0) {
    FVar9 = (ForElementType<unsigned_int>)&local_d8;
    if (local_d8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar9 = local_d8.AllocatorInstance.SecondaryData;
    }
    if (((*(uint *)((longlong)FVar9 +
                   (longlong)((int)(local_d8.NumBits + (local_d8.NumBits >> 0x1f & 0x1fU)) >> 5) * 4
                   ) & -1 << ((byte)uVar12 & 0x1f)) != 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(LastWord & SlackMask) == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x243,
                           L"TBitArray slack bits are non-zero, this will result in undefined behavior."
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  FVar9 = local_d8.AllocatorInstance.SecondaryData;
  if (local_d8.NumBits == (this->ArrGrowingTrue).NumBits) {
    FVar10 = (this->ArrGrowingTrue).AllocatorInstance.SecondaryData;
    if (FVar10 == (ForElementType<unsigned_int>)0x0) {
      FVar10 = (ForElementType<unsigned_int>)&this->ArrGrowingTrue;
    }
    FVar11 = (ForElementType<unsigned_int>)&local_d8;
    if (local_d8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar11 = local_d8.AllocatorInstance.SecondaryData;
    }
    iVar6 = memcmp((void *)FVar11,(void *)FVar10,(ulonglong)(local_d8.NumBits + 0x1fU >> 5) << 2);
    if (iVar6 != 0) goto LAB_141bb3d65;
  }
  else {
LAB_141bb3d65:
    pFVar7 = FAutomationTestFramework::Get();
    pFVar3 = pFVar7->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_118,L"Assignment operator");
    (*pcVar4)(pFVar3,&local_118,0);
    FVar9 = local_d8.AllocatorInstance.SecondaryData;
    if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_118.Data.AllocatorInstance.Data);
      FVar9 = local_d8.AllocatorInstance.SecondaryData;
    }
  }
  if (FVar9 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar9);
  }
  local_b8.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_b8.NumBits = 0;
  local_b8.MaxBits = 0;
  uVar12 = (this->ArrGrowingTrue).NumBits + 0x1fU & 0xffffffe0;
  if (0 < (int)uVar12) {
    uVar8 = 0x80;
    if (0x80 < (int)uVar12) {
      uVar8 = uVar12;
    }
    local_b8._24_8_ = (ulonglong)uVar8 << 0x20;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_b8,0);
  }
  uVar12 = (this->ArrGrowingTrue).NumBits;
  local_b8.NumBits = uVar12;
  if (uVar12 != 0) {
    FVar9 = (this->ArrGrowingTrue).AllocatorInstance.SecondaryData;
    if (FVar9 == (ForElementType<unsigned_int>)0x0) {
      FVar9 = (ForElementType<unsigned_int>)&this->ArrGrowingTrue;
    }
    FVar10 = (ForElementType<unsigned_int>)&local_b8;
    if (local_b8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar10 = local_b8.AllocatorInstance.SecondaryData;
    }
    memcpy((void *)FVar10,(void *)FVar9,(ulonglong)(uVar12 + 0x1f >> 5) << 2);
  }
  if (local_b8.MaxBits < local_b8.NumBits) {
    local_170 = local_b8.MaxBits;
    local_178 = local_b8.NumBits;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumBits <= MaxBits",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x238,L"TBitArray::NumBits (%d) should never be greater than MaxBits (%d)");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if ((local_b8.NumBits < 0) || (local_b8.MaxBits < 0)) {
    local_170 = local_b8.MaxBits;
    local_178 = local_b8.NumBits;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumBits >= 0 && MaxBits >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x239,L"NumBits (%d) and MaxBits (%d) should always be >= 0");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  uVar12 = local_b8.NumBits & 0x8000001f;
  if ((int)uVar12 < 0) {
    uVar12 = (uVar12 - 1 | 0xffffffe0) + 1;
  }
  if (uVar12 != 0) {
    FVar9 = (ForElementType<unsigned_int>)&local_b8;
    if (local_b8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar9 = local_b8.AllocatorInstance.SecondaryData;
    }
    if (((*(uint *)((longlong)FVar9 +
                   (longlong)((int)(local_b8.NumBits + (local_b8.NumBits >> 0x1f & 0x1fU)) >> 5) * 4
                   ) & -1 << ((byte)uVar12 & 0x1f)) != 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(LastWord & SlackMask) == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x243,
                           L"TBitArray slack bits are non-zero, this will result in undefined behavior."
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  local_e0 = local_b8.NumBits;
  FVar9 = local_b8.AllocatorInstance.SecondaryData;
  if (local_b8.AllocatorInstance.SecondaryData == (ForElementType<unsigned_int>)0x0) {
    local_f8[0] = local_b8.AllocatorInstance.InlineData[0];
    local_f8[1] = local_b8.AllocatorInstance.InlineData[1];
    local_f8[2] = local_b8.AllocatorInstance.InlineData[2];
    local_f8[3] = local_b8.AllocatorInstance.InlineData[3];
    local_f8[4] = local_b8.AllocatorInstance.InlineData[4];
    local_f8[5] = local_b8.AllocatorInstance.InlineData[5];
    local_f8[6] = local_b8.AllocatorInstance.InlineData[6];
    local_f8[7] = local_b8.AllocatorInstance.InlineData[7];
    auStack_f0[0] = local_b8.AllocatorInstance.InlineData[8];
    auStack_f0[1] = local_b8.AllocatorInstance.InlineData[9];
    auStack_f0[2] = local_b8.AllocatorInstance.InlineData[10];
    auStack_f0[3] = local_b8.AllocatorInstance.InlineData[0xb];
    auStack_f0[4] = local_b8.AllocatorInstance.InlineData[0xc];
    auStack_f0[5] = local_b8.AllocatorInstance.InlineData[0xd];
    auStack_f0[6] = local_b8.AllocatorInstance.InlineData[0xe];
    auStack_f0[7] = local_b8.AllocatorInstance.InlineData[0xf];
  }
  local_dc = local_b8.MaxBits;
  local_b8.NumBits = 0;
  local_b8.MaxBits = 0;
  local_b8.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_e8 = FVar9;
  if (local_e0 == (this->ArrGrowingTrue).NumBits) {
    FVar10 = (this->ArrGrowingTrue).AllocatorInstance.SecondaryData;
    if (FVar10 == (ForElementType<unsigned_int>)0x0) {
      FVar10 = (ForElementType<unsigned_int>)&this->ArrGrowingTrue;
    }
    FVar11 = (ForElementType<unsigned_int>)local_f8;
    if (FVar9 != (ForElementType<unsigned_int>)0x0) {
      FVar11 = FVar9;
    }
    iVar6 = memcmp((void *)FVar11,(void *)FVar10,(ulonglong)(local_e0 + 0x1f >> 5) << 2);
    if (iVar6 == 0) goto LAB_141bb3fad;
  }
  pFVar7 = FAutomationTestFramework::Get();
  pFVar3 = pFVar7->CurrentTest;
  pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
  ::FString::FString(&local_108,L"Move Assignment operator");
  (*pcVar4)(pFVar3,&local_108,0);
  if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Data.AllocatorInstance.Data);
  }
LAB_141bb3fad:
  if (FVar9 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar9);
  }
  if (local_b8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_b8.AllocatorInstance.SecondaryData);
  }
  return;
}

// TestRemoveAt @ 141bb4000

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FBitArrayTest::TestRemoveAt(FBitArrayTest *this)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  uint *puVar2;
  FAutomationTestBase *pFVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  FAutomationTestFramework *pFVar10;
  ForElementType<unsigned_int> FVar11;
  uint uVar12;
  ForElementType<unsigned_int> FVar13;
  ForElementType<unsigned_int> FVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  longlong lVar18;
  undefined1 auStackY_168 [32];
  TBitArray<TSizedDefaultAllocator<32>_> local_138;
  FString local_128;
  ForAnyElementType local_118;
  undefined8 local_110;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  TBitArray<FDefaultBitArrayAllocator> local_78;
  undefined4 local_58;
  undefined4 uStack_54;
  uchar auStack_50 [8];
  ForElementType<unsigned_int> local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_168;
  pTVar1 = &this->ArrSquareWave;
  iVar17 = 0;
  local_78.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_78.NumBits = 0;
  local_78.MaxBits = 0;
  uVar12 = (this->ArrSquareWave).NumBits + 0x1fU & 0xffffffe0;
  if (0 < (int)uVar12) {
    uVar15 = 0x80;
    if (0x80 < (int)uVar12) {
      uVar15 = uVar12;
    }
    local_78._24_8_ = (ulonglong)uVar15 << 0x20;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_78,0);
  }
  iVar7 = (this->ArrSquareWave).NumBits;
  local_78.NumBits = iVar7;
  if (iVar7 != 0) {
    FVar11 = (this->ArrSquareWave).AllocatorInstance.SecondaryData;
    if (FVar11 == (ForElementType<unsigned_int>)0x0) {
      FVar11 = (ForElementType<unsigned_int>)pTVar1;
    }
    FVar13 = (ForElementType<unsigned_int>)&local_78;
    if (local_78.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar13 = local_78.AllocatorInstance.SecondaryData;
    }
    memcpy((void *)FVar13,(void *)FVar11,(ulonglong)(iVar7 + 0x1fU >> 5) << 2);
  }
  iVar5 = local_78.NumBits;
  iVar7 = local_78.NumBits + -1;
  if (iVar7 < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("BaseIndex >= 0 && NumBitsToRemove >= 0 && BaseIndex + NumBitsToRemove <= NumBits"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x3ee,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (iVar5 != local_78.NumBits) {
      FVar11 = (ForElementType<unsigned_int>)&local_78;
      if (local_78.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar11 = local_78.AllocatorInstance.SecondaryData;
      }
      FBitArrayMemory::MemmoveBitsWordOrder
                ((uint *)FVar11,iVar7,(uint *)FVar11,iVar5,(local_78.NumBits - iVar7) - 1);
    }
  }
  uVar12 = local_78.NumBits - 1;
  local_78.NumBits = uVar12;
  uVar15 = (int)uVar12 >> 0x1f & 0x1f;
  uVar12 = uVar12 + uVar15;
  iVar7 = (uVar12 & 0x1f) - uVar15;
  if (iVar7 != 0) {
    FVar11 = (ForElementType<unsigned_int>)&local_78;
    if (local_78.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar11 = local_78.AllocatorInstance.SecondaryData;
    }
    puVar2 = (uint *)((longlong)FVar11 + (longlong)((int)uVar12 >> 5) * 4);
    *puVar2 = *puVar2 & 0xffffffffU >> (-(char)iVar7 & 0x1fU);
  }
  if ((local_78.MaxBits < local_78.NumBits) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumBits <= MaxBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x238,L"TBitArray::NumBits (%d) should never be greater than MaxBits (%d)"
                        ), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (((local_78.NumBits < 0) || (local_78.MaxBits < 0)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumBits >= 0 && MaxBits >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x239,L"NumBits (%d) and MaxBits (%d) should always be >= 0"), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar12 = local_78.NumBits & 0x8000001f;
  if ((int)uVar12 < 0) {
    uVar12 = (uVar12 - 1 | 0xffffffe0) + 1;
  }
  if (uVar12 != 0) {
    FVar11 = (ForElementType<unsigned_int>)&local_78;
    if (local_78.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar11 = local_78.AllocatorInstance.SecondaryData;
    }
    if (((*(uint *)((longlong)FVar11 +
                   (longlong)((int)(local_78.NumBits + (local_78.NumBits >> 0x1f & 0x1fU)) >> 5) * 4
                   ) & -1 << ((byte)uVar12 & 0x1f)) != 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(LastWord & SlackMask) == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x243,
                           L"TBitArray slack bits are non-zero, this will result in undefined behavior."
                          ), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if ((local_78.MaxBits < local_78.NumBits) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumBits <= MaxBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x238,L"TBitArray::NumBits (%d) should never be greater than MaxBits (%d)"
                        ), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (((local_78.NumBits < 0) || (local_78.MaxBits < 0)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumBits >= 0 && MaxBits >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x239,L"NumBits (%d) and MaxBits (%d) should always be >= 0"), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar12 = local_78.NumBits & 0x8000001f;
  if ((int)uVar12 < 0) {
    uVar12 = (uVar12 - 1 | 0xffffffe0) + 1;
  }
  if (uVar12 != 0) {
    FVar11 = (ForElementType<unsigned_int>)&local_78;
    if (local_78.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar11 = local_78.AllocatorInstance.SecondaryData;
    }
    if (((*(uint *)((longlong)FVar11 +
                   (longlong)((int)(local_78.NumBits + (local_78.NumBits >> 0x1f & 0x1fU)) >> 5) * 4
                   ) & -1 << ((byte)uVar12 & 0x1f)) != 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(LastWord & SlackMask) == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x243,
                           L"TBitArray slack bits are non-zero, this will result in undefined behavior."
                          ), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (local_78.NumBits != this->NumSquareWave - 1U) {
    pFVar10 = FAutomationTestFramework::Get();
    pFVar3 = pFVar10->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_108,L"RemoveAt from end size");
    (*pcVar4)(pFVar3,&local_108,0);
    if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.Data.AllocatorInstance.Data);
    }
  }
  if (0 < this->NumSquareWave + -1) {
    do {
      if (((iVar17 < 0) || (local_78.NumBits <= iVar17)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FVar11 = (ForElementType<unsigned_int>)&local_78;
      if (local_78.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar11 = local_78.AllocatorInstance.SecondaryData;
      }
      iVar7 = iVar17;
      if (iVar17 < 0) {
        iVar7 = iVar17 + 0x1f;
      }
      uVar15 = 1 << ((byte)iVar17 & 0x1f);
      lVar18 = (longlong)(iVar7 >> 5) * 4;
      uVar12 = *(uint *)((longlong)FVar11 + lVar18);
      if (((iVar17 < 0) || ((this->ArrSquareWave).NumBits <= iVar17)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FVar11 = (this->ArrSquareWave).AllocatorInstance.SecondaryData;
      FVar13 = (ForElementType<unsigned_int>)pTVar1;
      if (FVar11 != (ForElementType<unsigned_int>)0x0) {
        FVar13 = FVar11;
      }
      if (((uVar12 & uVar15) != 0) != ((*(uint *)((longlong)FVar13 + lVar18) & uVar15) != 0)) {
        pFVar10 = FAutomationTestFramework::Get();
        pFVar3 = pFVar10->CurrentTest;
        pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
        ::FString::FString(&local_f8,L"RemoveAt from end elements");
        (*pcVar4)(pFVar3,&local_f8,0);
        if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f8.Data.AllocatorInstance.Data);
        }
      }
      iVar17 = iVar17 + 1;
    } while (iVar17 < this->NumSquareWave + -1);
  }
  if (&local_78 != pTVar1) {
    TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>(&local_78,pTVar1);
  }
  if ((local_78.NumBits < 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("BaseIndex >= 0 && NumBitsToRemove >= 0 && BaseIndex + NumBitsToRemove <= NumBits"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x3ee,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (local_78.NumBits != 1) {
    FVar11 = (ForElementType<unsigned_int>)&local_78;
    if (local_78.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar11 = local_78.AllocatorInstance.SecondaryData;
    }
    FBitArrayMemory::MemmoveBitsWordOrder((uint *)FVar11,0,(uint *)FVar11,1,local_78.NumBits - 1);
  }
  local_78.NumBits = local_78.NumBits - 1;
  uVar15 = local_78.NumBits >> 0x1f & 0x1f;
  uVar12 = local_78.NumBits + uVar15;
  iVar17 = (uVar12 & 0x1f) - uVar15;
  if (iVar17 != 0) {
    FVar11 = (ForElementType<unsigned_int>)&local_78;
    if (local_78.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar11 = local_78.AllocatorInstance.SecondaryData;
    }
    puVar2 = (uint *)((longlong)FVar11 + (longlong)((int)uVar12 >> 5) * 4);
    *puVar2 = *puVar2 & 0xffffffffU >> (-(char)iVar17 & 0x1fU);
  }
  TBitArray<FDefaultBitArrayAllocator>::CheckInvariants(&local_78);
  TBitArray<FDefaultBitArrayAllocator>::CheckInvariants(&local_78);
  if (local_78.NumBits != this->NumSquareWave + -1) {
    pFVar10 = FAutomationTestFramework::Get();
    pFVar3 = pFVar10->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_e8,L"RemoveAt from start size");
    (*pcVar4)(pFVar3,&local_e8,0);
    if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.Data.AllocatorInstance.Data);
    }
  }
  uVar12 = 0;
  if (0 < this->NumSquareWave + -1) {
    do {
      if ((((int)uVar12 < 0) || (local_78.NumBits <= (int)uVar12)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FVar11 = (ForElementType<unsigned_int>)&local_78;
      if (local_78.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar11 = local_78.AllocatorInstance.SecondaryData;
      }
      uVar15 = uVar12;
      if ((int)uVar12 < 0) {
        uVar15 = uVar12 + 0x1f;
      }
      uVar16 = uVar12 + 1;
      if ((((int)uVar16 < 0) || ((this->ArrSquareWave).NumBits <= (int)uVar16)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FVar13 = (this->ArrSquareWave).AllocatorInstance.SecondaryData;
      FVar14 = (ForElementType<unsigned_int>)pTVar1;
      if (FVar13 != (ForElementType<unsigned_int>)0x0) {
        FVar14 = FVar13;
      }
      uVar9 = uVar16;
      if ((int)uVar16 < 0) {
        uVar9 = uVar12 + 0x20;
      }
      if (((*(uint *)((longlong)FVar11 + (longlong)((int)uVar15 >> 5) * 4) &
           1 << ((byte)uVar12 & 0x1f)) != 0) !=
          ((*(uint *)((longlong)FVar14 + (longlong)((int)uVar9 >> 5) * 4) >> (uVar16 & 0x1f) & 1) !=
          0)) {
        pFVar10 = FAutomationTestFramework::Get();
        pFVar3 = pFVar10->CurrentTest;
        pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
        ::FString::FString(&local_d8,L"RemoveAt from start elements");
        (*pcVar4)(pFVar3,&local_d8,0);
        if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d8.Data.AllocatorInstance.Data);
        }
      }
      uVar12 = uVar16;
    } while ((int)uVar16 < this->NumSquareWave + -1);
  }
  if (&local_78 != pTVar1) {
    TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>(&local_78,pTVar1);
  }
  if ((local_78.NumBits < 6) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("BaseIndex >= 0 && NumBitsToRemove >= 0 && BaseIndex + NumBitsToRemove <= NumBits"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x3ee,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar12 = 5;
  if (local_78.NumBits != 6) {
    FVar11 = (ForElementType<unsigned_int>)&local_78;
    if (local_78.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar11 = local_78.AllocatorInstance.SecondaryData;
    }
    FBitArrayMemory::MemmoveBitsWordOrder((uint *)FVar11,5,(uint *)FVar11,6,local_78.NumBits - 6);
  }
  iVar17 = local_78.NumBits + -1;
  local_78.NumBits = iVar17;
  uVar16 = iVar17 >> 0x1f & 0x1f;
  uVar15 = iVar17 + uVar16;
  iVar17 = (uVar15 & 0x1f) - uVar16;
  if (iVar17 != 0) {
    FVar11 = (ForElementType<unsigned_int>)&local_78;
    if (local_78.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar11 = local_78.AllocatorInstance.SecondaryData;
    }
    puVar2 = (uint *)((longlong)FVar11 + (longlong)((int)uVar15 >> 5) * 4);
    *puVar2 = *puVar2 & 0xffffffffU >> (0x20U - (char)iVar17 & 0x1f);
  }
  TBitArray<FDefaultBitArrayAllocator>::CheckInvariants(&local_78);
  TBitArray<FDefaultBitArrayAllocator>::CheckInvariants(&local_78);
  if (local_78.NumBits != this->NumSquareWave + -1) {
    pFVar10 = FAutomationTestFramework::Get();
    pFVar3 = pFVar10->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_c8,L"RemoveAt from middle size");
    (*pcVar4)(pFVar3,&local_c8,0);
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
  }
  uVar15 = 0;
  uVar16 = 1;
  do {
    if (((this->ArrSquareWave).NumBits <= (int)uVar15) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    FVar11 = (this->ArrSquareWave).AllocatorInstance.SecondaryData;
    FVar13 = (ForElementType<unsigned_int>)pTVar1;
    if (FVar11 != (ForElementType<unsigned_int>)0x0) {
      FVar13 = FVar11;
    }
    lVar18 = (ulonglong)(uVar15 >> 5) * 4;
    if ((local_78.NumBits <= (int)uVar15) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    FVar11 = (ForElementType<unsigned_int>)&local_78;
    if (local_78.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar11 = local_78.AllocatorInstance.SecondaryData;
    }
    if (((*(uint *)(lVar18 + (longlong)FVar11) & uVar16) != 0) !=
        ((*(uint *)((longlong)FVar13 + lVar18) & uVar16) != 0)) {
      pFVar10 = FAutomationTestFramework::Get();
      pFVar3 = pFVar10->CurrentTest;
      pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
      ::FString::FString(&local_b8,L"RemoveAt from middle elements");
      (*pcVar4)(pFVar3,&local_b8,0);
      if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.Data.AllocatorInstance.Data);
      }
    }
    uVar15 = uVar15 + 1;
    uVar16 = uVar16 << 1 | (uint)((int)uVar16 < 0);
  } while ((int)uVar15 < 5);
  uVar15 = 5;
  if (5 < this->NumSquareWave + -1) {
    do {
      if ((((int)uVar15 < 0) || (local_78.NumBits <= (int)uVar15)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FVar11 = (ForElementType<unsigned_int>)&local_78;
      if (local_78.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar11 = local_78.AllocatorInstance.SecondaryData;
      }
      uVar16 = uVar15;
      if ((int)uVar15 < 0) {
        uVar16 = uVar15 + 0x1f;
      }
      uVar9 = uVar15 + 1;
      if ((((int)uVar9 < 0) || ((this->ArrSquareWave).NumBits <= (int)uVar9)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FVar13 = (this->ArrSquareWave).AllocatorInstance.SecondaryData;
      FVar14 = (ForElementType<unsigned_int>)pTVar1;
      if (FVar13 != (ForElementType<unsigned_int>)0x0) {
        FVar14 = FVar13;
      }
      uVar8 = uVar9;
      if ((int)uVar9 < 0) {
        uVar8 = uVar15 + 0x20;
      }
      if (((*(uint *)((longlong)FVar11 + (longlong)((int)uVar16 >> 5) * 4) &
           1 << ((byte)uVar15 & 0x1f)) != 0) !=
          ((*(uint *)((longlong)FVar14 + (longlong)((int)uVar8 >> 5) * 4) >> (uVar9 & 0x1f) & 1) !=
          0)) {
        pFVar10 = FAutomationTestFramework::Get();
        pFVar3 = pFVar10->CurrentTest;
        pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
        ::FString::FString(&local_a8,L"RemoveAt from middle elements");
        (*pcVar4)(pFVar3,&local_a8,0);
        if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a8.Data.AllocatorInstance.Data);
        }
      }
      uVar15 = uVar9;
    } while ((int)uVar9 < this->NumSquareWave + -1);
  }
  local_48 = (ForElementType<unsigned_int>)0x0;
  local_58 = 0xfffff;
  local_40._4_4_ = 0x80;
  local_40._0_4_ = 0x14;
  local_78.AllocatorInstance.InlineData[0] = 0xff;
  local_78.AllocatorInstance.InlineData[1] = 0xff;
  local_78.AllocatorInstance.InlineData[2] = '\x0f';
  local_78.AllocatorInstance.InlineData[3] = '\0';
  local_78.AllocatorInstance.InlineData[4] = (undefined1)uStack_54;
  local_78.AllocatorInstance.InlineData[5] = uStack_54._1_1_;
  local_78.AllocatorInstance.InlineData[6] = uStack_54._2_1_;
  local_78.AllocatorInstance.InlineData[7] = uStack_54._3_1_;
  local_78.AllocatorInstance.InlineData[8] = auStack_50[0];
  local_78.AllocatorInstance.InlineData[9] = auStack_50[1];
  local_78.AllocatorInstance.InlineData[10] = auStack_50[2];
  local_78.AllocatorInstance.InlineData[0xb] = auStack_50[3];
  local_78.AllocatorInstance.InlineData[0xc] = auStack_50[4];
  local_78.AllocatorInstance.InlineData[0xd] = auStack_50[5];
  local_78.AllocatorInstance.InlineData[0xe] = auStack_50[6];
  local_78.AllocatorInstance.InlineData[0xf] = auStack_50[7];
  FVar11 = (ForElementType<unsigned_int>)0x0;
  iVar17 = 0x80;
  iVar7 = 0x14;
  if (local_78.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_78.AllocatorInstance.SecondaryData);
    FVar11 = local_48;
    iVar17 = local_40._4_4_;
    iVar7 = (int)local_40;
  }
  local_78.AllocatorInstance.SecondaryData = FVar11;
  uVar15 = 10;
  local_48 = (ForElementType<unsigned_int>)0x0;
  uVar16 = 0x400;
  local_78.MaxBits = iVar17;
  local_78.NumBits = iVar7;
  local_40 = 0;
  do {
    if ((iVar7 <= (int)uVar15) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    FVar11 = (ForElementType<unsigned_int>)&local_78;
    if (local_78.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar11 = local_78.AllocatorInstance.SecondaryData;
    }
    uVar9 = uVar15 >> 5;
    uVar15 = uVar15 + 1;
    puVar2 = (uint *)((longlong)FVar11 + (ulonglong)uVar9 * 4);
    uVar9 = ~uVar16;
    uVar16 = uVar16 << 1 | (uint)((int)uVar16 < 0);
    *puVar2 = *puVar2 & uVar9;
    iVar7 = local_78.NumBits;
  } while ((int)uVar15 < 0x14);
  if (local_78.NumBits < 10) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("BaseIndex >= 0 && NumBitsToRemove >= 0 && BaseIndex + NumBitsToRemove <= NumBits"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x3ee,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar17 = local_78.NumBits;
  if (local_78.NumBits != 10) {
    FVar11 = (ForElementType<unsigned_int>)&local_78;
    if (local_78.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar11 = local_78.AllocatorInstance.SecondaryData;
    }
    FBitArrayMemory::MemmoveBitsWordOrder((uint *)FVar11,5,(uint *)FVar11,10,local_78.NumBits - 10);
    iVar17 = local_78.NumBits;
  }
  iVar17 = iVar17 + -5;
  local_78.NumBits = iVar17;
  uVar16 = iVar17 >> 0x1f & 0x1f;
  uVar15 = iVar17 + uVar16;
  iVar17 = (uVar15 & 0x1f) - uVar16;
  if (iVar17 != 0) {
    FVar11 = (ForElementType<unsigned_int>)&local_78;
    if (local_78.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar11 = local_78.AllocatorInstance.SecondaryData;
    }
    puVar2 = (uint *)((longlong)FVar11 + (longlong)((int)uVar15 >> 5) * 4);
    *puVar2 = *puVar2 & 0xffffffffU >> (-(char)iVar17 & 0x1fU);
  }
  TBitArray<FDefaultBitArrayAllocator>::CheckInvariants(&local_78);
  TBitArray<FDefaultBitArrayAllocator>::CheckInvariants(&local_78);
  if (local_78.NumBits != 0xf) {
    pFVar10 = FAutomationTestFramework::Get();
    pFVar3 = pFVar10->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_98,L"RemoveAt multiple size");
    (*pcVar4)(pFVar3,&local_98,0);
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
  }
  if ((local_78.NumBits < 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FVar11 = (ForElementType<unsigned_int>)&local_78;
  if (local_78.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FVar11 = local_78.AllocatorInstance.SecondaryData;
  }
  if ((*(byte *)FVar11 & 1) == 0) {
    pFVar10 = FAutomationTestFramework::Get();
    pFVar3 = pFVar10->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_128,L"RemoveAt multiple elements");
    (*pcVar4)(pFVar3,&local_128,0);
    if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
    }
  }
  if ((local_78.NumBits < 2) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FVar11 = (ForElementType<unsigned_int>)&local_78;
  if (local_78.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FVar11 = local_78.AllocatorInstance.SecondaryData;
  }
  if ((*(byte *)FVar11 & 2) == 0) {
    pFVar10 = FAutomationTestFramework::Get();
    pFVar3 = pFVar10->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_128,L"RemoveAt multiple elements");
    (*pcVar4)(pFVar3,&local_128,0);
    if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
    }
  }
  if ((local_78.NumBits < 3) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FVar11 = (ForElementType<unsigned_int>)&local_78;
  if (local_78.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FVar11 = local_78.AllocatorInstance.SecondaryData;
  }
  if ((*(byte *)FVar11 & 4) == 0) {
    pFVar10 = FAutomationTestFramework::Get();
    pFVar3 = pFVar10->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_128,L"RemoveAt multiple elements");
    (*pcVar4)(pFVar3,&local_128,0);
    if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
    }
  }
  if ((local_78.NumBits < 4) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FVar11 = (ForElementType<unsigned_int>)&local_78;
  if (local_78.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FVar11 = local_78.AllocatorInstance.SecondaryData;
  }
  if ((*(byte *)FVar11 & 8) == 0) {
    pFVar10 = FAutomationTestFramework::Get();
    pFVar3 = pFVar10->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_128,L"RemoveAt multiple elements");
    (*pcVar4)(pFVar3,&local_128,0);
    if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
    }
  }
  if ((local_78.NumBits < 5) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FVar11 = (ForElementType<unsigned_int>)&local_78;
  if (local_78.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FVar11 = local_78.AllocatorInstance.SecondaryData;
  }
  if ((*(byte *)FVar11 & 0x10) == 0) {
    pFVar10 = FAutomationTestFramework::Get();
    pFVar3 = pFVar10->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_128,L"RemoveAt multiple elements");
    (*pcVar4)(pFVar3,&local_128,0);
    if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
    }
  }
  uVar15 = 0x20;
  do {
    if ((local_78.NumBits <= (int)uVar12) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    FVar11 = (ForElementType<unsigned_int>)&local_78;
    if (local_78.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar11 = local_78.AllocatorInstance.SecondaryData;
    }
    if ((*(uint *)((longlong)FVar11 + (ulonglong)(uVar12 >> 5) * 4) & uVar15) != 0) {
      pFVar10 = FAutomationTestFramework::Get();
      pFVar3 = pFVar10->CurrentTest;
      pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
      ::FString::FString(&local_88,L"RemoveAt multiple elements");
      (*pcVar4)(pFVar3,&local_88,0);
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
    }
    uVar12 = uVar12 + 1;
    uVar15 = uVar15 << 1 | (uint)((int)uVar15 < 0);
  } while ((int)uVar12 < 0xf);
  if (local_78.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_78.AllocatorInstance.SecondaryData);
  }
  local_138.AllocatorInstance = (ForElementType<unsigned_int>)0x0;
  local_138.NumBits = 0x30;
  local_138.MaxBits = 0;
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&local_138,0,2,4);
  local_138.MaxBits = 0x40;
  *(undefined8 *)local_138.AllocatorInstance = 0xffffffffffffffff;
  uVar12 = local_138.NumBits & 0x8000001f;
  if ((int)uVar12 < 0) {
    uVar12 = (uVar12 - 1 | 0xffffffe0) + 1;
  }
  if (uVar12 != 0) {
    puVar2 = (uint *)((longlong)local_138.AllocatorInstance +
                     (longlong)((int)(local_138.NumBits + (local_138.NumBits >> 0x1f & 0x1fU)) >> 5)
                     * 4);
    *puVar2 = *puVar2 & 0xffffffffU >> (-(char)uVar12 & 0x1fU);
  }
  lVar18 = 0x30;
  while( true ) {
    iVar7 = local_138.NumBits;
    iVar17 = local_138.NumBits - 1;
    if (iVar17 < 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("BaseIndex >= 0 && NumBitsToRemove >= 0 && BaseIndex + NumBitsToRemove <= NumBits"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x3ee,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (iVar7 != local_138.NumBits) {
        FBitArrayMemory::MemmoveBitsWordOrder
                  ((uint *)local_138.AllocatorInstance,iVar17,(uint *)local_138.AllocatorInstance,
                   iVar7,(local_138.NumBits - iVar17) - 1);
      }
    }
    local_138.NumBits = local_138.NumBits - 1;
    uVar15 = local_138.NumBits >> 0x1f & 0x1f;
    uVar12 = local_138.NumBits + uVar15;
    iVar17 = (uVar12 & 0x1f) - uVar15;
    if (iVar17 != 0) {
      puVar2 = (uint *)((longlong)local_138.AllocatorInstance + (longlong)((int)uVar12 >> 5) * 4);
      *puVar2 = *puVar2 & 0xffffffffU >> (-(char)iVar17 & 0x1fU);
    }
    TBitArray<TSizedDefaultAllocator<32>_>::CheckInvariants(&local_138);
    if ((local_138.MaxBits < local_138.NumBits) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("NumBits <= MaxBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x238,
                           L"TBitArray::NumBits (%d) should never be greater than MaxBits (%d)"),
       bVar6)) break;
    if (((local_138.NumBits < 0) || (local_138.MaxBits < 0)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("NumBits >= 0 && MaxBits >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x239,L"NumBits (%d) and MaxBits (%d) should always be >= 0"), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar12 = local_138.NumBits & 0x8000001f;
    if ((int)uVar12 < 0) {
      uVar12 = (uVar12 - 1 | 0xffffffe0) + 1;
    }
    if (uVar12 != 0) {
      uVar15 = local_138.NumBits;
      if (local_138.NumBits < 0) {
        uVar15 = local_138.NumBits + 0x1f;
      }
      if (((*(uint *)((longlong)local_138.AllocatorInstance + (longlong)((int)uVar15 >> 5) * 4) &
           -1 << ((byte)uVar12 & 0x1f)) != 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(LastWord & SlackMask) == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x243,
                             L"TBitArray slack bits are non-zero, this will result in undefined behavior."
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    lVar18 = lVar18 + -1;
    if (lVar18 == 0) {
      local_118.Data = (FScriptContainerElement *)0x0;
      local_110 = 0x30;
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_118,0,2,4);
      iVar17 = local_138.NumBits;
      local_110 = CONCAT44(0x40,(uint)local_110);
      *(undefined8 *)local_118.Data = 0xffffffffffffffff;
      uVar12 = (uint)local_110 & 0x8000001f;
      if ((int)uVar12 < 0) {
        uVar12 = (uVar12 - 1 | 0xffffffe0) + 1;
      }
      if (uVar12 != 0) {
        *(uint *)(local_118.Data +
                 (longlong)((int)((uint)local_110 + ((int)(uint)local_110 >> 0x1f & 0x1fU)) >> 5) *
                 4) = *(uint *)(local_118.Data +
                               (longlong)
                               ((int)((uint)local_110 + ((int)(uint)local_110 >> 0x1f & 0x1fU)) >> 5
                               ) * 4) & 0xffffffffU >> (-(char)uVar12 & 0x1fU);
      }
      if (local_138.NumBits < 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("BaseIndex >= 0 && NumBitsToRemove >= 0 && BaseIndex + NumBitsToRemove <= NumBits"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x3ee,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (iVar17 != local_138.NumBits) {
          FBitArrayMemory::MemmoveBitsWordOrder
                    ((uint *)local_138.AllocatorInstance,0,(uint *)local_138.AllocatorInstance,
                     iVar17,local_138.NumBits - iVar17);
        }
      }
      local_138.NumBits = local_138.NumBits - iVar17;
      uVar15 = local_138.NumBits >> 0x1f & 0x1f;
      uVar12 = local_138.NumBits + uVar15;
      iVar17 = (uVar12 & 0x1f) - uVar15;
      if (iVar17 != 0) {
        puVar2 = (uint *)((longlong)local_138.AllocatorInstance + (longlong)((int)uVar12 >> 5) * 4);
        *puVar2 = *puVar2 & 0xffffffffU >> (0x20U - (char)iVar17 & 0x1f);
      }
      TBitArray<TSizedDefaultAllocator<32>_>::CheckInvariants(&local_138);
      TBitArray<TSizedDefaultAllocator<32>_>::CheckInvariants(&local_138);
      if (local_118.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.Data);
      }
      if (local_138.AllocatorInstance != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_138.AllocatorInstance);
      }
      return;
    }
  }
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

// TestRemoveAtSwap @ 141bb5210

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FBitArrayTest::TestRemoveAtSwap(FBitArrayTest *this)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  uint *puVar2;
  FAutomationTestBase *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  FAutomationTestFramework *pFVar9;
  ForElementType<unsigned_int> FVar10;
  byte bVar11;
  uint uVar12;
  ForElementType<unsigned_int> FVar13;
  ForElementType<unsigned_int> FVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  longlong lVar19;
  longlong *plVar20;
  undefined1 auStack_1a8 [32];
  uint local_188;
  int local_180;
  TBitArray<TSizedDefaultAllocator<32>_> local_178;
  FString local_168;
  FString local_158;
  ForAnyElementType local_148;
  undefined8 local_140;
  FString local_138;
  FString local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  longlong local_c8;
  int local_c0;
  longlong local_b8;
  int local_b0;
  FString local_a8;
  FString local_98;
  FString local_88;
  TBitArray<FDefaultBitArrayAllocator> local_78;
  undefined4 local_58;
  undefined4 uStack_54;
  uchar auStack_50 [8];
  ForElementType<unsigned_int> local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1a8;
  pTVar1 = &this->ArrSquareWave;
  iVar16 = 0;
  local_78.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_78.NumBits = 0;
  local_78.MaxBits = 0;
  uVar12 = (this->ArrSquareWave).NumBits + 0x1fU & 0xffffffe0;
  if (0 < (int)uVar12) {
    uVar15 = 0x80;
    if (0x80 < (int)uVar12) {
      uVar15 = uVar12;
    }
    local_78._24_8_ = (ulonglong)uVar15 << 0x20;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_78,0);
  }
  iVar6 = (this->ArrSquareWave).NumBits;
  local_78.NumBits = iVar6;
  iVar7 = 0;
  if (iVar6 != 0) {
    FVar10 = (this->ArrSquareWave).AllocatorInstance.SecondaryData;
    if (FVar10 == (ForElementType<unsigned_int>)0x0) {
      FVar10 = (ForElementType<unsigned_int>)pTVar1;
    }
    FVar14 = (ForElementType<unsigned_int>)&local_78;
    if (local_78.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar14 = local_78.AllocatorInstance.SecondaryData;
    }
    memcpy((void *)FVar14,(void *)FVar10,(ulonglong)(iVar6 + 0x1fU >> 5) << 2);
    iVar7 = local_78.NumBits;
  }
  TBitArray<FDefaultBitArrayAllocator>::RemoveAtSwap(&local_78,iVar7 + -1,1);
  TBitArray<FDefaultBitArrayAllocator>::CheckInvariants(&local_78);
  if (local_78.NumBits != this->NumSquareWave + -1) {
    pFVar9 = FAutomationTestFramework::Get();
    pFVar3 = pFVar9->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_128,L"RemoveAtSwap from end size");
    (*pcVar4)(pFVar3,&local_128,0);
    if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
    }
  }
  if (0 < this->NumSquareWave + -1) {
    do {
      if (((iVar16 < 0) || (local_78.NumBits <= iVar16)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FVar10 = (ForElementType<unsigned_int>)&local_78;
      if (local_78.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar10 = local_78.AllocatorInstance.SecondaryData;
      }
      iVar6 = iVar16;
      if (iVar16 < 0) {
        iVar6 = iVar16 + 0x1f;
      }
      lVar19 = (longlong)(iVar6 >> 5) * 4;
      uVar12 = 1 << ((byte)iVar16 & 0x1f);
      if (((iVar16 < 0) || ((this->ArrSquareWave).NumBits <= iVar16)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FVar14 = (this->ArrSquareWave).AllocatorInstance.SecondaryData;
      FVar13 = (ForElementType<unsigned_int>)pTVar1;
      if (FVar14 != (ForElementType<unsigned_int>)0x0) {
        FVar13 = FVar14;
      }
      if (((*(uint *)((longlong)FVar10 + lVar19) & uVar12) != 0) !=
          ((*(uint *)((longlong)FVar13 + lVar19) & uVar12) != 0)) {
        pFVar9 = FAutomationTestFramework::Get();
        pFVar3 = pFVar9->CurrentTest;
        pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
        ::FString::FString(&local_118,L"RemoveAtSwap from end elements");
        (*pcVar4)(pFVar3,&local_118,0);
        if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_118.Data.AllocatorInstance.Data);
        }
      }
      iVar16 = iVar16 + 1;
    } while (iVar16 < this->NumSquareWave + -1);
  }
  if (&local_78 != pTVar1) {
    TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>(&local_78,pTVar1);
  }
  TBitArray<FDefaultBitArrayAllocator>::RemoveAtSwap(&local_78,0,1);
  TBitArray<FDefaultBitArrayAllocator>::CheckInvariants(&local_78);
  if (local_78.NumBits != this->NumSquareWave + -1) {
    pFVar9 = FAutomationTestFramework::Get();
    pFVar3 = pFVar9->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_108,L"RemoveAtSwap from start size");
    (*pcVar4)(pFVar3,&local_108,0);
    if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.Data.AllocatorInstance.Data);
    }
  }
  if ((local_78.NumBits < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FVar10 = (ForElementType<unsigned_int>)&local_78;
  if (local_78.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FVar10 = local_78.AllocatorInstance.SecondaryData;
  }
  bVar11 = *(byte *)FVar10;
  uVar12 = this->NumSquareWave - 1;
  if ((((int)uVar12 < 0) || ((this->ArrSquareWave).NumBits <= (int)uVar12)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FVar10 = (this->ArrSquareWave).AllocatorInstance.SecondaryData;
  FVar14 = (ForElementType<unsigned_int>)&this->ArrSquareWave;
  if (FVar10 != (ForElementType<unsigned_int>)0x0) {
    FVar14 = FVar10;
  }
  if ((bool)(bVar11 & 1) !=
      ((*(uint *)((longlong)FVar14 +
                 (longlong)((int)(uVar12 + ((int)uVar12 >> 0x1f & 0x1fU)) >> 5) * 4) >>
        (uVar12 & 0x1f) & 1) != 0)) {
    pFVar9 = FAutomationTestFramework::Get();
    pFVar3 = pFVar9->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_f8,L"RemoveAtSwap from start elements");
    (*pcVar4)(pFVar3,&local_f8,0);
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
  }
  iVar16 = 1;
  if (1 < this->NumSquareWave + -1) {
    do {
      if (((iVar16 < 0) || (local_78.NumBits <= iVar16)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FVar10 = (ForElementType<unsigned_int>)&local_78;
      if (local_78.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar10 = local_78.AllocatorInstance.SecondaryData;
      }
      iVar6 = iVar16;
      if (iVar16 < 0) {
        iVar6 = iVar16 + 0x1f;
      }
      uVar15 = 1 << ((byte)iVar16 & 0x1f);
      lVar19 = (longlong)(iVar6 >> 5) * 4;
      uVar12 = *(uint *)((longlong)FVar10 + lVar19);
      if (((iVar16 < 0) || ((this->ArrSquareWave).NumBits <= iVar16)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FVar10 = (this->ArrSquareWave).AllocatorInstance.SecondaryData;
      FVar14 = (ForElementType<unsigned_int>)&this->ArrSquareWave;
      if (FVar10 != (ForElementType<unsigned_int>)0x0) {
        FVar14 = FVar10;
      }
      if (((uVar12 & uVar15) != 0) != ((*(uint *)((longlong)FVar14 + lVar19) & uVar15) != 0)) {
        pFVar9 = FAutomationTestFramework::Get();
        pFVar3 = pFVar9->CurrentTest;
        pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
        ::FString::FString(&local_e8,L"RemoveAtSwap from start elements");
        (*pcVar4)(pFVar3,&local_e8,0);
        if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_e8.Data.AllocatorInstance.Data);
        }
      }
      iVar16 = iVar16 + 1;
    } while (iVar16 < this->NumSquareWave + -1);
  }
  if (&local_78 != pTVar1) {
    TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>(&local_78,pTVar1);
  }
  TBitArray<FDefaultBitArrayAllocator>::RemoveAtSwap(&local_78,5,1);
  TBitArray<FDefaultBitArrayAllocator>::CheckInvariants(&local_78);
  if (local_78.NumBits != this->NumSquareWave + -1) {
    pFVar9 = FAutomationTestFramework::Get();
    pFVar3 = pFVar9->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_d8,L"RemoveAtSwap from middle size");
    (*pcVar4)(pFVar3,&local_d8,0);
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
  }
  iVar16 = this->NumSquareWave;
  FVar10 = (ForElementType<unsigned_int>)0x0;
  if (0 < iVar16 + -1) {
    do {
      uVar12 = FVar10._0_4_;
      if (uVar12 == 5) {
        iVar6 = iVar16 + -1;
        if (((iVar6 < 0) || ((this->ArrSquareWave).NumBits <= iVar6)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5be,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FVar10 = (this->ArrSquareWave).AllocatorInstance.SecondaryData;
        FVar14 = (ForElementType<unsigned_int>)&this->ArrSquareWave;
        if (FVar10 != (ForElementType<unsigned_int>)0x0) {
          FVar14 = FVar10;
        }
        iVar7 = iVar6;
        if (iVar6 < 0) {
          iVar7 = iVar16 + 0x1e;
        }
        plVar20 = &local_b8;
        uVar15 = 5;
        local_b8 = (longlong)FVar14 + (longlong)(iVar7 >> 5) * 4;
        local_b0 = 1 << ((byte)iVar6 & 0x1f);
        iVar16 = 0;
LAB_141bb580f:
        if (local_78.NumBits <= (int)uVar12) goto LAB_141bb5814;
      }
      else {
        if ((((int)uVar12 < 0) || ((this->ArrSquareWave).NumBits <= (int)uVar12)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5be,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FVar10 = (this->ArrSquareWave).AllocatorInstance.SecondaryData;
        FVar14 = (ForElementType<unsigned_int>)&this->ArrSquareWave;
        if (FVar10 != (ForElementType<unsigned_int>)0x0) {
          FVar14 = FVar10;
        }
        uVar15 = uVar12;
        if ((int)uVar12 < 0) {
          uVar15 = uVar12 + 0x1f;
        }
        iVar16 = (int)uVar15 >> 5;
        plVar20 = &local_c8;
        uVar15 = uVar12 & 0x1f;
        local_c8 = (longlong)FVar14 + (longlong)iVar16 * 4;
        local_c0 = 1 << (sbyte)uVar15;
        if (-1 < (int)uVar12) goto LAB_141bb580f;
LAB_141bb5814:
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      FVar10 = (ForElementType<unsigned_int>)&local_78;
      if (local_78.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar10 = local_78.AllocatorInstance.SecondaryData;
      }
      if (((*(uint *)((longlong)FVar10 + (longlong)iVar16 * 4) >> uVar15 & 1) != 0) !=
          ((*(uint *)*plVar20 & *(uint *)(plVar20 + 1)) != 0)) {
        pFVar9 = FAutomationTestFramework::Get();
        pFVar3 = pFVar9->CurrentTest;
        pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
        ::FString::FString(&local_a8,L"RemoveAtSwap from middle elements");
        (*pcVar4)(pFVar3,&local_a8,0);
        if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a8.Data.AllocatorInstance.Data);
        }
      }
      iVar16 = this->NumSquareWave;
      FVar10._0_4_ = uVar12 + 1;
      FVar10._4_4_ = 0;
    } while ((int)FVar10._0_4_ < iVar16 + -1);
  }
  local_48 = (ForElementType<unsigned_int>)0x0;
  local_58 = 0xfffff;
  local_40._4_4_ = 0x80;
  local_40._0_4_ = 0x14;
  local_78.AllocatorInstance.InlineData[0] = 0xff;
  local_78.AllocatorInstance.InlineData[1] = 0xff;
  local_78.AllocatorInstance.InlineData[2] = '\x0f';
  local_78.AllocatorInstance.InlineData[3] = '\0';
  local_78.AllocatorInstance.InlineData[4] = (undefined1)uStack_54;
  local_78.AllocatorInstance.InlineData[5] = uStack_54._1_1_;
  local_78.AllocatorInstance.InlineData[6] = uStack_54._2_1_;
  local_78.AllocatorInstance.InlineData[7] = uStack_54._3_1_;
  local_78.AllocatorInstance.InlineData[8] = auStack_50[0];
  local_78.AllocatorInstance.InlineData[9] = auStack_50[1];
  local_78.AllocatorInstance.InlineData[10] = auStack_50[2];
  local_78.AllocatorInstance.InlineData[0xb] = auStack_50[3];
  local_78.AllocatorInstance.InlineData[0xc] = auStack_50[4];
  local_78.AllocatorInstance.InlineData[0xd] = auStack_50[5];
  local_78.AllocatorInstance.InlineData[0xe] = auStack_50[6];
  local_78.AllocatorInstance.InlineData[0xf] = auStack_50[7];
  FVar10 = (ForElementType<unsigned_int>)0x0;
  iVar16 = 0x80;
  iVar6 = 0x14;
  if (local_78.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_78.AllocatorInstance.SecondaryData);
    FVar10 = local_48;
    iVar16 = local_40._4_4_;
    iVar6 = (int)local_40;
  }
  uVar15 = 10;
  local_78.AllocatorInstance.SecondaryData = FVar10;
  uVar18 = 0x400;
  local_48 = (ForElementType<unsigned_int>)0x0;
  uVar12 = 10;
  uVar17 = 0x400;
  local_78.MaxBits = iVar16;
  local_78.NumBits = iVar6;
  local_40 = 0;
  while( true ) {
    if ((iVar6 <= (int)uVar12) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    FVar10 = (ForElementType<unsigned_int>)&local_78;
    if (local_78.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar10 = local_78.AllocatorInstance.SecondaryData;
    }
    uVar8 = uVar12 >> 5;
    uVar12 = uVar12 + 1;
    puVar2 = (uint *)((longlong)FVar10 + (ulonglong)uVar8 * 4);
    uVar8 = ~uVar17;
    uVar17 = uVar17 << 1 | (uint)((int)uVar17 < 0);
    *puVar2 = *puVar2 & uVar8;
    if (0x13 < (int)uVar12) break;
    iVar6 = local_78.NumBits;
  }
  TBitArray<FDefaultBitArrayAllocator>::RemoveAtSwap(&local_78,5,2);
  TBitArray<FDefaultBitArrayAllocator>::CheckInvariants(&local_78);
  if (local_78.NumBits != 0x12) {
    pFVar9 = FAutomationTestFramework::Get();
    pFVar3 = pFVar9->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_98,L"RemoveAtSwap, multiple, size");
    (*pcVar4)(pFVar3,&local_98,0);
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
  }
  if ((local_78.NumBits < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FVar10 = (ForElementType<unsigned_int>)&local_78;
  if (local_78.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FVar10 = local_78.AllocatorInstance.SecondaryData;
  }
  if ((*(byte *)FVar10 & 1) == 0) {
    pFVar9 = FAutomationTestFramework::Get();
    pFVar3 = pFVar9->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_168,L"RemoveAtSwap, multiple, elements");
    (*pcVar4)(pFVar3,&local_168,0);
    if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_168.Data.AllocatorInstance.Data);
    }
  }
  if ((local_78.NumBits < 2) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FVar10 = (ForElementType<unsigned_int>)&local_78;
  if (local_78.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FVar10 = local_78.AllocatorInstance.SecondaryData;
  }
  if ((*(byte *)FVar10 & 2) == 0) {
    pFVar9 = FAutomationTestFramework::Get();
    pFVar3 = pFVar9->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_168,L"RemoveAtSwap, multiple, elements");
    (*pcVar4)(pFVar3,&local_168,0);
    if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_168.Data.AllocatorInstance.Data);
    }
  }
  if ((local_78.NumBits < 3) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FVar10 = (ForElementType<unsigned_int>)&local_78;
  if (local_78.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FVar10 = local_78.AllocatorInstance.SecondaryData;
  }
  if ((*(byte *)FVar10 & 4) == 0) {
    pFVar9 = FAutomationTestFramework::Get();
    pFVar3 = pFVar9->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_168,L"RemoveAtSwap, multiple, elements");
    (*pcVar4)(pFVar3,&local_168,0);
    if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_168.Data.AllocatorInstance.Data);
    }
  }
  if ((local_78.NumBits < 4) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FVar10 = (ForElementType<unsigned_int>)&local_78;
  if (local_78.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FVar10 = local_78.AllocatorInstance.SecondaryData;
  }
  if ((*(byte *)FVar10 & 8) == 0) {
    pFVar9 = FAutomationTestFramework::Get();
    pFVar3 = pFVar9->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_168,L"RemoveAtSwap, multiple, elements");
    (*pcVar4)(pFVar3,&local_168,0);
    if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_168.Data.AllocatorInstance.Data);
    }
  }
  if ((local_78.NumBits < 5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FVar10 = (ForElementType<unsigned_int>)&local_78;
  if (local_78.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FVar10 = local_78.AllocatorInstance.SecondaryData;
  }
  if ((*(byte *)FVar10 & 0x10) == 0) {
    pFVar9 = FAutomationTestFramework::Get();
    pFVar3 = pFVar9->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_168,L"RemoveAtSwap, multiple, elements");
    (*pcVar4)(pFVar3,&local_168,0);
    if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_168.Data.AllocatorInstance.Data);
    }
  }
  if ((local_78.NumBits < 6) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FVar10 = (ForElementType<unsigned_int>)&local_78;
  if (local_78.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FVar10 = local_78.AllocatorInstance.SecondaryData;
  }
  if ((*(byte *)FVar10 & 0x20) != 0) {
    pFVar9 = FAutomationTestFramework::Get();
    pFVar3 = pFVar9->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_138,L"RemoveAtSwap, multiple, elements");
    (*pcVar4)(pFVar3,&local_138,0);
    if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_138.Data.AllocatorInstance.Data);
    }
  }
  if ((local_78.NumBits < 7) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FVar10 = (ForElementType<unsigned_int>)&local_78;
  if (local_78.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FVar10 = local_78.AllocatorInstance.SecondaryData;
  }
  if ((*(byte *)FVar10 & 0x40) != 0) {
    pFVar9 = FAutomationTestFramework::Get();
    pFVar3 = pFVar9->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_138,L"RemoveAtSwap, multiple, elements");
    (*pcVar4)(pFVar3,&local_138,0);
    if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_138.Data.AllocatorInstance.Data);
    }
  }
  if ((local_78.NumBits < 8) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FVar10 = (ForElementType<unsigned_int>)&local_78;
  if (local_78.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FVar10 = local_78.AllocatorInstance.SecondaryData;
  }
  if ((*(byte *)FVar10 & 0x80) == 0) {
    pFVar9 = FAutomationTestFramework::Get();
    pFVar3 = pFVar9->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_158,L"RemoveAtSwap, multiple, elements");
    (*pcVar4)(pFVar3,&local_158,0);
    if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_158.Data.AllocatorInstance.Data);
    }
  }
  if ((local_78.NumBits < 9) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FVar10 = (ForElementType<unsigned_int>)&local_78;
  if (local_78.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FVar10 = local_78.AllocatorInstance.SecondaryData;
  }
  if ((*(uint *)FVar10 & 0x100) == 0) {
    pFVar9 = FAutomationTestFramework::Get();
    pFVar3 = pFVar9->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_158,L"RemoveAtSwap, multiple, elements");
    (*pcVar4)(pFVar3,&local_158,0);
    if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_158.Data.AllocatorInstance.Data);
    }
  }
  if ((local_78.NumBits < 10) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FVar10 = (ForElementType<unsigned_int>)&local_78;
  if (local_78.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FVar10 = local_78.AllocatorInstance.SecondaryData;
  }
  if ((*(uint *)FVar10 & 0x200) == 0) {
    pFVar9 = FAutomationTestFramework::Get();
    pFVar3 = pFVar9->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_158,L"RemoveAtSwap, multiple, elements");
    (*pcVar4)(pFVar3,&local_158,0);
    if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_158.Data.AllocatorInstance.Data);
    }
  }
  do {
    if ((local_78.NumBits <= (int)uVar15) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    FVar10 = (ForElementType<unsigned_int>)&local_78;
    if (local_78.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar10 = local_78.AllocatorInstance.SecondaryData;
    }
    if ((*(uint *)((longlong)FVar10 + (ulonglong)(uVar15 >> 5) * 4) & uVar18) != 0) {
      pFVar9 = FAutomationTestFramework::Get();
      pFVar3 = pFVar9->CurrentTest;
      pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
      ::FString::FString(&local_88,L"RemoveAtSwap, multiple, elements");
      (*pcVar4)(pFVar3,&local_88,0);
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
    }
    uVar15 = uVar15 + 1;
    uVar18 = uVar18 << 1 | (uint)((int)uVar18 < 0);
  } while ((int)uVar15 < 0x12);
  if (local_78.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_78.AllocatorInstance.SecondaryData);
  }
  local_178.AllocatorInstance = (ForElementType<unsigned_int>)0x0;
  local_178.NumBits = 0x30;
  local_178.MaxBits = 0;
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&local_178,0,2,4);
  local_178.MaxBits = 0x40;
  *(undefined8 *)local_178.AllocatorInstance = 0xffffffffffffffff;
  uVar12 = local_178.NumBits & 0x8000001f;
  if ((int)uVar12 < 0) {
    uVar12 = (uVar12 - 1 | 0xffffffe0) + 1;
  }
  if (uVar12 != 0) {
    puVar2 = (uint *)((longlong)local_178.AllocatorInstance +
                     (longlong)((int)(local_178.NumBits + (local_178.NumBits >> 0x1f & 0x1fU)) >> 5)
                     * 4);
    *puVar2 = *puVar2 & 0xffffffffU >> (-(char)uVar12 & 0x1fU);
  }
  lVar19 = 0x30;
  do {
    if ((local_178.NumBits < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("BaseIndex >= 0 && NumBitsToRemove >= 0 && BaseIndex + NumBitsToRemove <= NumBits"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x405,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar6 = local_178.NumBits;
    iVar16 = local_178.NumBits - 1;
    if (0 < iVar16) {
      if ((local_178.NumBits <= iVar16) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      bVar11 = (byte)iVar16;
      if (iVar16 < 0) {
        iVar16 = iVar6 + 0x1e;
      }
      uVar12 = *(uint *)((longlong)local_178.AllocatorInstance + (longlong)(iVar16 >> 5) * 4);
      if ((local_178.NumBits < 1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((1 << (bVar11 & 0x1f) & uVar12) == 0) {
        *(uint *)local_178.AllocatorInstance = *(uint *)local_178.AllocatorInstance & 0xfffffffe;
      }
      else {
        *(uint *)local_178.AllocatorInstance = *(uint *)local_178.AllocatorInstance | 1;
      }
    }
    local_178.NumBits = local_178.NumBits - 1;
    uVar15 = local_178.NumBits >> 0x1f & 0x1f;
    uVar12 = local_178.NumBits + uVar15;
    iVar16 = (uVar12 & 0x1f) - uVar15;
    if (iVar16 != 0) {
      puVar2 = (uint *)((longlong)local_178.AllocatorInstance + (longlong)((int)uVar12 >> 5) * 4);
      *puVar2 = *puVar2 & 0xffffffffU >> (-(char)iVar16 & 0x1fU);
    }
    TBitArray<TSizedDefaultAllocator<32>_>::CheckInvariants(&local_178);
    if (local_178.MaxBits < local_178.NumBits) {
      local_180 = local_178.MaxBits;
      local_188 = local_178.NumBits;
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumBits <= MaxBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x238,L"TBitArray::NumBits (%d) should never be greater than MaxBits (%d)"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    if (((local_178.NumBits < 0) || (local_178.MaxBits < 0)) &&
       (local_188 = local_178.NumBits, local_180 = local_178.MaxBits,
       bVar5 = ::FDebug::CheckVerifyFailedImpl2
                         ("NumBits >= 0 && MaxBits >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x239,L"NumBits (%d) and MaxBits (%d) should always be >= 0"), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar12 = local_178.NumBits & 0x8000001f;
    if ((int)uVar12 < 0) {
      uVar12 = (uVar12 - 1 | 0xffffffe0) + 1;
    }
    if (uVar12 != 0) {
      uVar15 = local_178.NumBits;
      if (local_178.NumBits < 0) {
        uVar15 = local_178.NumBits + 0x1f;
      }
      if (((*(uint *)((longlong)local_178.AllocatorInstance + (longlong)((int)uVar15 >> 5) * 4) &
           -1 << ((byte)uVar12 & 0x1f)) != 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(LastWord & SlackMask) == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x243,
                             L"TBitArray slack bits are non-zero, this will result in undefined behavior."
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    lVar19 = lVar19 + -1;
    if (lVar19 == 0) {
      local_148.Data = (FScriptContainerElement *)0x0;
      local_140 = 0x30;
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_148,0,2,4);
      local_140 = CONCAT44(0x40,(uint)local_140);
      *(undefined8 *)local_148.Data = 0xffffffffffffffff;
      uVar12 = (uint)local_140 & 0x8000001f;
      if ((int)uVar12 < 0) {
        uVar12 = (uVar12 - 1 | 0xffffffe0) + 1;
      }
      if (uVar12 != 0) {
        *(uint *)(local_148.Data +
                 (longlong)((int)((uint)local_140 + ((int)(uint)local_140 >> 0x1f & 0x1fU)) >> 5) *
                 4) = *(uint *)(local_148.Data +
                               (longlong)
                               ((int)((uint)local_140 + ((int)(uint)local_140 >> 0x1f & 0x1fU)) >> 5
                               ) * 4) & 0xffffffffU >> (0x20U - (char)uVar12 & 0x1f);
      }
      TBitArray<TSizedDefaultAllocator<32>_>::RemoveAtSwap(&local_178,0,local_178.NumBits);
      TBitArray<TSizedDefaultAllocator<32>_>::CheckInvariants(&local_178);
      if (local_148.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_148.Data);
      }
      if (local_178.AllocatorInstance != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_178.AllocatorInstance);
      }
      return;
    }
  } while( true );
}

// TestReserve @ 141bb62f0

/* WARNING: Removing unreachable block (ram,0x000141bb65b4) */

void __thiscall FBitArrayTest::TestReserve(FBitArrayTest *this)

{
  uint *puVar1;
  FAutomationTestBase *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ulong64 uVar6;
  FAutomationTestFramework *pFVar7;
  uint uVar8;
  TBitArray<TSizedDefaultAllocator<32>_> local_88;
  TBitArray<TSizedDefaultAllocator<32>_> local_78;
  ForAnyElementType local_68;
  undefined8 local_60;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  local_88.AllocatorInstance = (ForElementType<unsigned_int>)0x0;
  local_88.NumBits = 0;
  uVar6 = FMemory::QuantizeSize(0x10,0);
  local_88.MaxBits = (int)(uVar6 >> 2);
  if (local_88.MaxBits < 2) {
    local_88.MaxBits = 0x7fffffff;
  }
  local_88.MaxBits = local_88.MaxBits << 5;
  TBitArray<TSizedDefaultAllocator<32>_>::Realloc(&local_88,local_88.NumBits);
  if ((local_88.MaxBits < local_88.NumBits) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumBits <= MaxBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x238,L"TBitArray::NumBits (%d) should never be greater than MaxBits (%d)"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (((local_88.NumBits < 0) || (local_88.MaxBits < 0)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumBits >= 0 && MaxBits >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x239,L"NumBits (%d) and MaxBits (%d) should always be >= 0"), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar8 = local_88.NumBits & 0x8000001f;
  if ((int)uVar8 < 0) {
    uVar8 = (uVar8 - 1 | 0xffffffe0) + 1;
  }
  if (((uVar8 != 0) &&
      ((*(uint *)((longlong)local_88.AllocatorInstance +
                 (longlong)((int)(local_88.NumBits + (local_88.NumBits >> 0x1f & 0x1fU)) >> 5) * 4)
       & -1 << ((byte)uVar8 & 0x1f)) != 0)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(LastWord & SlackMask) == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x243,
                         L"TBitArray slack bits are non-zero, this will result in undefined behavior."
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (local_88.NumBits != 0) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar2 = pFVar7->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_58,L"Reserve from empty does not change num");
    (*pcVar3)(pFVar2,&local_58,0);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  if (local_88.MaxBits < 0x40) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar2 = pFVar7->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_48,L"Reserve from empty sets max to rounded up request");
    (*pcVar3)(pFVar2,&local_48,0);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  local_68.Data = (FScriptContainerElement *)0x0;
  local_60 = 0x20;
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_68,0,1,4);
  local_60 = CONCAT44(0x20,(uint)local_60);
  *(undefined4 *)local_68.Data = 0xffffffff;
  uVar8 = (uint)local_60 & 0x8000001f;
  if ((int)uVar8 < 0) {
    uVar8 = (uVar8 - 1 | 0xffffffe0) + 1;
  }
  if (uVar8 != 0) {
    *(uint *)(local_68.Data +
             (longlong)((int)((uint)local_60 + ((int)(uint)local_60 >> 0x1f & 0x1fU)) >> 5) * 4) =
         *(uint *)(local_68.Data +
                  (longlong)((int)((uint)local_60 + ((int)(uint)local_60 >> 0x1f & 0x1fU)) >> 5) * 4
                  ) & 0xffffffffU >> (-(char)uVar8 & 0x1fU);
  }
  local_78.AllocatorInstance = (ForElementType<unsigned_int>)0x0;
  local_78.NumBits = 0x20;
  local_78.MaxBits = 0;
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&local_78,0,1,4);
  local_78.MaxBits = 0x20;
  *(undefined4 *)local_78.AllocatorInstance = 0xffffffff;
  uVar8 = local_78.NumBits & 0x8000001f;
  if ((int)uVar8 < 0) {
    uVar8 = (uVar8 - 1 | 0xffffffe0) + 1;
  }
  if (uVar8 != 0) {
    puVar1 = (uint *)((longlong)local_78.AllocatorInstance +
                     (longlong)((int)(local_78.NumBits + (local_78.NumBits >> 0x1f & 0x1fU)) >> 5) *
                     4);
    *puVar1 = *puVar1 & 0xffffffffU >> (0x20U - (char)uVar8 & 0x1f);
  }
  uVar6 = FMemory::QuantizeSize(0x48,0);
  iVar5 = (int)(uVar6 >> 2);
  if (iVar5 < 2) {
    iVar5 = 0x7fffffff;
  }
  local_78.MaxBits = iVar5 << 5;
  TBitArray<TSizedDefaultAllocator<32>_>::Realloc(&local_78,local_78.NumBits);
  TBitArray<TSizedDefaultAllocator<32>_>::CheckInvariants(&local_78);
  if ((local_78.NumBits != (uint)local_60) ||
     (iVar5 = memcmp((void *)local_78.AllocatorInstance,local_68.Data,
                     (ulonglong)(local_78.NumBits + 0x1fU >> 5) << 2), iVar5 != 0)) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar2 = pFVar7->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_38,L"Reserve from filled does not size or elements");
    (*pcVar3)(pFVar2,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (local_88.MaxBits < 0x40) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar2 = pFVar7->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_28,L"Reserve from filled sets max to rounded up request");
    (*pcVar3)(pFVar2,&local_28,0);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  if (local_78.AllocatorInstance != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_78.AllocatorInstance);
  }
  if (local_68.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data);
  }
  if (local_88.AllocatorInstance != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_88.AllocatorInstance);
  }
  return;
}

// TestSerialize @ 141bb66f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000141bb6848) */

void __thiscall FBitArrayTest::TestSerialize(FBitArrayTest *this)

{
  uint *puVar1;
  FAutomationTestBase *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FArchive *pFVar6;
  FAutomationTestFramework *pFVar7;
  uint uVar8;
  uint uVar9;
  ForElementType<unsigned_int> FVar10;
  ForElementType<unsigned_int> FVar11;
  undefined1 auStack_598 [32];
  uint local_578;
  int local_570;
  uint local_568 [2];
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_560;
  undefined8 local_550;
  undefined8 local_548;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_540;
  FString local_530;
  FString local_520;
  FString local_510;
  FString local_500;
  FString local_4f0;
  FString local_4e0;
  FString local_4d0;
  FString local_4c0;
  FString local_4b0;
  FString local_4a0;
  FString local_490;
  FString local_480;
  TMemoryWriterBase<TSizedDefaultAllocator<32>_> local_468;
  FArchiveState local_3b8;
  undefined8 local_328;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *local_320;
  undefined8 local_318;
  FMemoryReader local_308;
  TMemoryWriterBase<TSizedDefaultAllocator<32>_> local_258;
  TBitArray<TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> local_1a8;
  TBitArray<FDefaultBitArrayAllocator> local_188;
  TBitArray<FDefaultBitArrayAllocator> local_168;
  TBitArray<FDefaultBitArrayAllocator> local_148;
  TBitArray<FDefaultBitArrayAllocator> local_128;
  TBitArray<FDefaultBitArrayAllocator> local_108;
  TBitArray<FDefaultBitArrayAllocator> local_e8;
  TBitArray<FDefaultBitArrayAllocator> local_c8;
  TBitArray<FDefaultBitArrayAllocator> local_a8;
  TBitArray<FDefaultBitArrayAllocator> local_88;
  undefined1 local_68 [16];
  void *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_598;
  local_88.MaxBits = 0x80;
  local_108.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_108.NumBits = 0x30;
  local_88.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_88.NumBits = 0;
  local_108.MaxBits = 0x80;
  local_58 = (void *)0x0;
  local_50 = 0;
  local_4c = 0x80;
  local_108.AllocatorInstance.InlineData[0] = 0xff;
  local_108.AllocatorInstance.InlineData[1] = 0xff;
  local_108.AllocatorInstance.InlineData[2] = 0xff;
  local_108.AllocatorInstance.InlineData[3] = 0xff;
  local_108.AllocatorInstance.InlineData[4] = 0xff;
  local_108.AllocatorInstance.InlineData[5] = 0xff;
  local_108.AllocatorInstance.InlineData[6] = '\0';
  local_108.AllocatorInstance.InlineData[7] = '\0';
  local_168.NumBits = 0x30;
  local_168.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_168.MaxBits = 0x80;
  local_168.AllocatorInstance.InlineData[0] = '\0';
  local_168.AllocatorInstance.InlineData[1] = '\0';
  local_168.AllocatorInstance.InlineData[2] = '\0';
  local_168.AllocatorInstance.InlineData[3] = '\0';
  local_168.AllocatorInstance.InlineData[4] = '\0';
  local_168.AllocatorInstance.InlineData[5] = '\0';
  local_168.AllocatorInstance.InlineData[6] = '\0';
  local_168.AllocatorInstance.InlineData[7] = '\0';
  local_a8.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_a8.NumBits = 0;
  local_a8.MaxBits = 0x80;
  TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_a8,0);
  local_a8.NumBits = local_108.NumBits;
  if (local_108.NumBits != 0) {
    FVar11 = (ForElementType<unsigned_int>)&local_108;
    if (local_108.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar11 = local_108.AllocatorInstance.SecondaryData;
    }
    FVar10 = (ForElementType<unsigned_int>)&local_a8;
    if (local_a8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar10 = local_a8.AllocatorInstance.SecondaryData;
    }
    memcpy((void *)FVar10,(void *)FVar11,(ulonglong)(local_108.NumBits + 0x1fU >> 5) << 2);
  }
  local_c8.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_c8.NumBits = 0;
  local_c8.MaxBits = 0;
  uVar8 = local_168.NumBits + 0x1fU & 0xffffffe0;
  if (0 < (int)uVar8) {
    uVar9 = 0x80;
    if (0x80 < (int)uVar8) {
      uVar9 = uVar8;
    }
    local_c8._24_8_ = (ulonglong)uVar9 << 0x20;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_c8,0);
  }
  local_c8.NumBits = local_168.NumBits;
  if (local_168.NumBits != 0) {
    FVar11 = (ForElementType<unsigned_int>)&local_168;
    if (local_168.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar11 = local_168.AllocatorInstance.SecondaryData;
    }
    FVar10 = (ForElementType<unsigned_int>)&local_c8;
    if (local_c8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar10 = local_c8.AllocatorInstance.SecondaryData;
    }
    memcpy((void *)FVar10,(void *)FVar11,(ulonglong)(local_168.NumBits + 0x1fU >> 5) << 2);
  }
  local_568[0] = 0x12345678;
  local_540.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_258._padding_ = 0;
  local_258._padding_ = 0;
  local_540.ArrayNum = 0;
  local_540.ArrayMax = 0;
  local_258._padding_ = 0;
  local_258._padding_ = 0;
  local_550 = 0;
  local_258._padding_ = 0;
  local_258._padding_ = 0;
  local_258._padding_ = 0;
  local_258._padding_ = 0;
  local_258._padding_ = 0;
  local_258._padding_ = 0;
  local_258._padding_ = 0;
  local_258._padding_ = 0;
  local_258._padding_ = 0;
  local_258._padding_ = 0;
  local_258._padding_ = 0;
  local_258._padding_ = 0;
  local_258._padding_ = 0;
  local_258._padding_ = 0;
  FArchiveState::FArchiveState((FArchiveState *)&local_258);
  local_258._padding_ = 0;
  local_258._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
  local_258.Bytes = &local_540;
  local_258.ArchiveName.ComparisonIndex.Value = 0;
  local_258.ArchiveName.Number = 0;
  FArchiveState::SetIsSaving((FArchiveState *)&local_258,true);
  (**(code **)(local_258._padding_ + 0x108))(&local_258,0);
  local_258._padding_ = (longlong)&___7FMemoryWriter__6B_;
  if (*(uint **)(local_258._padding_ + 8) < *(uint **)local_258._padding_ + 1) {
    if ((local_258._padding_ & 0x10000U) == 0) {
      TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize(&local_258,local_568,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)&local_258,local_568);
    }
  }
  else {
    local_568[0] = **(uint **)local_258._padding_;
    *(longlong *)local_258._padding_ = *(longlong *)local_258._padding_ + 4;
  }
  pFVar6 = operator<<<FDefaultBitArrayAllocator>((FArchive *)&local_258,&local_88);
  puVar1 = (uint *)**(undefined8 **)&pFVar6->field_0x8;
  if ((uint *)(*(undefined8 **)&pFVar6->field_0x8)[1] < puVar1 + 1) {
    if ((pFVar6->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar6 + 0x188))(pFVar6,local_568,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar6,local_568);
    }
  }
  else {
    local_568[0] = *puVar1;
    **(longlong **)&pFVar6->field_0x8 = **(longlong **)&pFVar6->field_0x8 + 4;
  }
  pFVar6 = operator<<<FDefaultBitArrayAllocator>(pFVar6,&local_108);
  puVar1 = (uint *)**(undefined8 **)&pFVar6->field_0x8;
  if ((uint *)(*(undefined8 **)&pFVar6->field_0x8)[1] < puVar1 + 1) {
    if ((pFVar6->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar6 + 0x188))(pFVar6,local_568,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar6,local_568);
    }
  }
  else {
    local_568[0] = *puVar1;
    **(longlong **)&pFVar6->field_0x8 = **(longlong **)&pFVar6->field_0x8 + 4;
  }
  pFVar6 = operator<<<FDefaultBitArrayAllocator>(pFVar6,&local_168);
  puVar1 = (uint *)**(undefined8 **)&pFVar6->field_0x8;
  if ((uint *)(*(undefined8 **)&pFVar6->field_0x8)[1] < puVar1 + 1) {
    if ((pFVar6->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar6 + 0x188))(pFVar6,local_568,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar6,local_568);
    }
  }
  else {
    local_568[0] = *puVar1;
    **(longlong **)&pFVar6->field_0x8 = **(longlong **)&pFVar6->field_0x8 + 4;
  }
  FArchive::~FArchive((FArchive *)&local_258);
  if (local_88.NumBits == 0) {
    FVar11 = (ForElementType<unsigned_int>)&local_88;
    if (local_88.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar11 = local_88.AllocatorInstance.SecondaryData;
    }
    iVar5 = memcmp((void *)FVar11,local_68,0);
    if (iVar5 != 0) goto LAB_141bb6b95;
  }
  else {
LAB_141bb6b95:
    pFVar7 = FAutomationTestFramework::Get();
    pFVar2 = pFVar7->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_520,L"Serialize Empty");
    (*pcVar3)(pFVar2,&local_520,0);
    if (local_520.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_520.Data.AllocatorInstance.Data);
    }
  }
  if (local_108.NumBits == local_a8.NumBits) {
    FVar11 = (ForElementType<unsigned_int>)&local_a8;
    if (local_a8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar11 = local_a8.AllocatorInstance.SecondaryData;
    }
    FVar10 = (ForElementType<unsigned_int>)&local_108;
    if (local_108.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar10 = local_108.AllocatorInstance.SecondaryData;
    }
    iVar5 = memcmp((void *)FVar10,(void *)FVar11,(ulonglong)(local_108.NumBits + 0x1fU >> 5) << 2);
    if (iVar5 != 0) goto LAB_141bb6c22;
  }
  else {
LAB_141bb6c22:
    pFVar7 = FAutomationTestFramework::Get();
    pFVar2 = pFVar7->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_510,L"Serialize Ones");
    (*pcVar3)(pFVar2,&local_510,0);
    if (local_510.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_510.Data.AllocatorInstance.Data);
    }
  }
  if (local_168.NumBits == local_c8.NumBits) {
    FVar11 = (ForElementType<unsigned_int>)&local_c8;
    if (local_c8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar11 = local_c8.AllocatorInstance.SecondaryData;
    }
    FVar10 = (ForElementType<unsigned_int>)&local_168;
    if (local_168.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar10 = local_168.AllocatorInstance.SecondaryData;
    }
    iVar5 = memcmp((void *)FVar10,(void *)FVar11,(ulonglong)(local_168.NumBits + 0x1fU >> 5) << 2);
    if (iVar5 != 0) goto LAB_141bb6cac;
  }
  else {
LAB_141bb6cac:
    pFVar7 = FAutomationTestFramework::Get();
    pFVar2 = pFVar7->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_500,L"Serialize Ones");
    (*pcVar3)(pFVar2,&local_500,0);
    if (local_500.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_500.Data.AllocatorInstance.Data);
    }
  }
  local_e8.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_e8.NumBits = 0;
  local_e8.MaxBits = 0x80;
  local_128.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_128.MaxBits = 0x80;
  local_128.NumBits = 0x30;
  local_128.AllocatorInstance.InlineData[0] = '\0';
  local_128.AllocatorInstance.InlineData[1] = '\0';
  local_128.AllocatorInstance.InlineData[2] = '\0';
  local_128.AllocatorInstance.InlineData[3] = '\0';
  local_128.AllocatorInstance.InlineData[4] = '\0';
  local_128.AllocatorInstance.InlineData[5] = '\0';
  local_128.AllocatorInstance.InlineData[6] = '\0';
  local_128.AllocatorInstance.InlineData[7] = '\0';
  local_148.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_148.MaxBits = 0x80;
  local_148.NumBits = 0x30;
  local_148.AllocatorInstance.InlineData[0] = 0xff;
  local_148.AllocatorInstance.InlineData[1] = 0xff;
  local_148.AllocatorInstance.InlineData[2] = 0xff;
  local_148.AllocatorInstance.InlineData[3] = 0xff;
  local_148.AllocatorInstance.InlineData[4] = 0xff;
  local_148.AllocatorInstance.InlineData[5] = 0xff;
  local_148.AllocatorInstance.InlineData[6] = '\0';
  local_148.AllocatorInstance.InlineData[7] = '\0';
  local_308._padding_ = 0;
  local_308._padding_ = 0;
  local_308._padding_ = 0;
  local_308._padding_ = 0;
  local_308._padding_ = 0;
  local_308._padding_ = 0;
  local_308._padding_ = 0;
  local_308._padding_ = 0;
  local_308._padding_ = 0;
  local_308._padding_ = 0;
  local_308._padding_ = 0;
  local_308._padding_ = 0;
  local_308._padding_ = 0;
  local_308._padding_ = 0;
  local_308._padding_ = 0;
  local_308._padding_ = 0;
  local_308._padding_ = 0;
  local_308._padding_ = 0;
  FArchiveState::FArchiveState((FArchiveState *)&local_308);
  local_308._padding_ = 0;
  local_308._padding_ = (longlong)&___7FMemoryReader__6B_;
  local_308.Bytes = &local_540;
  local_308.LimitSize = 0x7fffffffffffffff;
  FArchiveState::SetIsLoading((FArchiveState *)&local_308,true);
  (**(code **)(local_308._padding_ + 0x108))(&local_308,0);
  if (*(uint **)(local_308._padding_ + 8) < *(uint **)local_308._padding_ + 1) {
    if ((local_308._padding_ & 0x10000U) == 0) {
      if (*(code **)(local_308._padding_ + 0x188) == FMemoryReader::Serialize) {
        FMemoryReader::Serialize(&local_308,&local_48,4);
      }
      else {
        (**(code **)(local_308._padding_ + 0x188))();
      }
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)&local_308,&local_48);
    }
  }
  else {
    local_48 = **(uint **)local_308._padding_;
    *(longlong *)local_308._padding_ = *(longlong *)local_308._padding_ + 4;
  }
  pFVar6 = operator<<<FDefaultBitArrayAllocator>((FArchive *)&local_308,&local_e8);
  puVar1 = (uint *)**(undefined8 **)&pFVar6->field_0x8;
  if ((uint *)(*(undefined8 **)&pFVar6->field_0x8)[1] < puVar1 + 1) {
    if ((pFVar6->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar6 + 0x188))(pFVar6,&local_44,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar6,&local_44);
    }
  }
  else {
    local_44 = *puVar1;
    **(longlong **)&pFVar6->field_0x8 = **(longlong **)&pFVar6->field_0x8 + 4;
  }
  pFVar6 = operator<<<FDefaultBitArrayAllocator>(pFVar6,&local_148);
  puVar1 = (uint *)**(undefined8 **)&pFVar6->field_0x8;
  if ((uint *)(*(undefined8 **)&pFVar6->field_0x8)[1] < puVar1 + 1) {
    if ((pFVar6->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar6 + 0x188))(pFVar6,&local_40,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar6,&local_40);
    }
  }
  else {
    local_40 = *puVar1;
    **(longlong **)&pFVar6->field_0x8 = **(longlong **)&pFVar6->field_0x8 + 4;
  }
  pFVar6 = operator<<<FDefaultBitArrayAllocator>(pFVar6,&local_128);
  puVar1 = (uint *)**(undefined8 **)&pFVar6->field_0x8;
  if ((uint *)(*(undefined8 **)&pFVar6->field_0x8)[1] < puVar1 + 1) {
    if ((pFVar6->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar6 + 0x188))(pFVar6,&local_3c,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar6,&local_3c);
    }
  }
  else {
    local_3c = *puVar1;
    **(longlong **)&pFVar6->field_0x8 = **(longlong **)&pFVar6->field_0x8 + 4;
  }
  FArchive::~FArchive((FArchive *)&local_308);
  if (local_48 != local_568[0]) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar2 = pFVar7->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_4f0,L"Serialize Empty Underflow");
    (*pcVar3)(pFVar2,&local_4f0,0);
    if (local_4f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4f0.Data.AllocatorInstance.Data);
    }
  }
  uVar8 = local_e8.NumBits;
  if (local_88.NumBits == local_e8.NumBits) {
    FVar11 = (ForElementType<unsigned_int>)&local_e8;
    if (local_e8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar11 = local_e8.AllocatorInstance.SecondaryData;
    }
    FVar10 = (ForElementType<unsigned_int>)&local_88;
    if (local_88.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar10 = local_88.AllocatorInstance.SecondaryData;
    }
    iVar5 = memcmp((void *)FVar10,(void *)FVar11,(ulonglong)(local_88.NumBits + 0x1fU >> 5) << 2);
    if (iVar5 != 0) goto LAB_141bb7065;
  }
  else {
LAB_141bb7065:
    pFVar7 = FAutomationTestFramework::Get();
    pFVar2 = pFVar7->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_4e0,L"Serialize Empty");
    (*pcVar3)(pFVar2,&local_4e0,0);
    uVar8 = local_e8.NumBits;
    if (local_4e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4e0.Data.AllocatorInstance.Data);
      uVar8 = local_e8.NumBits;
    }
  }
  if (local_e8.MaxBits < (int)uVar8) {
    local_570 = local_e8.MaxBits;
    local_578 = uVar8;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumBits <= MaxBits",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x238,L"TBitArray::NumBits (%d) should never be greater than MaxBits (%d)");
    uVar8 = local_e8.NumBits;
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (((int)uVar8 < 0) || (local_e8.MaxBits < 0)) {
    local_570 = local_e8.MaxBits;
    local_578 = uVar8;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumBits >= 0 && MaxBits >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x239,L"NumBits (%d) and MaxBits (%d) should always be >= 0");
    uVar8 = local_e8.NumBits;
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  uVar9 = uVar8 & 0x8000001f;
  if ((int)uVar9 < 0) {
    uVar9 = (uVar9 - 1 | 0xffffffe0) + 1;
  }
  if (uVar9 != 0) {
    FVar11 = (ForElementType<unsigned_int>)&local_e8;
    if (local_e8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar11 = local_e8.AllocatorInstance.SecondaryData;
    }
    if (((*(uint *)((longlong)FVar11 +
                   (longlong)((int)(uVar8 + ((int)uVar8 >> 0x1f & 0x1fU)) >> 5) * 4) &
         -1 << ((byte)uVar9 & 0x1f)) != 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(LastWord & SlackMask) == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x243,
                           L"TBitArray slack bits are non-zero, this will result in undefined behavior."
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (local_44 != local_568[0]) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar2 = pFVar7->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_4d0,L"Serialize Ones Underflow");
    (*pcVar3)(pFVar2,&local_4d0,0);
    if (local_4d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4d0.Data.AllocatorInstance.Data);
    }
  }
  uVar8 = local_148.NumBits;
  if (local_108.NumBits == local_148.NumBits) {
    FVar11 = (ForElementType<unsigned_int>)&local_148;
    if (local_148.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar11 = local_148.AllocatorInstance.SecondaryData;
    }
    FVar10 = (ForElementType<unsigned_int>)&local_108;
    if (local_108.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar10 = local_108.AllocatorInstance.SecondaryData;
    }
    iVar5 = memcmp((void *)FVar10,(void *)FVar11,(ulonglong)(local_108.NumBits + 0x1fU >> 5) << 2);
    if (iVar5 != 0) goto LAB_141bb7227;
  }
  else {
LAB_141bb7227:
    pFVar7 = FAutomationTestFramework::Get();
    pFVar2 = pFVar7->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_4c0,L"Serialize Ones");
    (*pcVar3)(pFVar2,&local_4c0,0);
    uVar8 = local_148.NumBits;
    if (local_4c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4c0.Data.AllocatorInstance.Data);
      uVar8 = local_148.NumBits;
    }
  }
  if (local_148.MaxBits < (int)uVar8) {
    local_570 = local_148.MaxBits;
    local_578 = uVar8;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumBits <= MaxBits",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x238,L"TBitArray::NumBits (%d) should never be greater than MaxBits (%d)");
    uVar8 = local_148.NumBits;
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (((int)uVar8 < 0) || (local_148.MaxBits < 0)) {
    local_570 = local_148.MaxBits;
    local_578 = uVar8;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumBits >= 0 && MaxBits >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x239,L"NumBits (%d) and MaxBits (%d) should always be >= 0");
    uVar8 = local_148.NumBits;
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  uVar9 = uVar8 & 0x8000001f;
  if ((int)uVar9 < 0) {
    uVar9 = (uVar9 - 1 | 0xffffffe0) + 1;
  }
  if (uVar9 != 0) {
    FVar11 = (ForElementType<unsigned_int>)&local_148;
    if (local_148.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar11 = local_148.AllocatorInstance.SecondaryData;
    }
    if (((*(uint *)((longlong)FVar11 +
                   (longlong)((int)(uVar8 + ((int)uVar8 >> 0x1f & 0x1fU)) >> 5) * 4) &
         -1 << ((byte)uVar9 & 0x1f)) != 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(LastWord & SlackMask) == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x243,
                           L"TBitArray slack bits are non-zero, this will result in undefined behavior."
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (local_40 != local_568[0]) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar2 = pFVar7->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_4b0,L"Serialize Zeroes Underflow");
    (*pcVar3)(pFVar2,&local_4b0,0);
    if (local_4b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4b0.Data.AllocatorInstance.Data);
    }
  }
  uVar8 = local_128.NumBits;
  if (local_168.NumBits == local_128.NumBits) {
    FVar11 = (ForElementType<unsigned_int>)&local_128;
    if (local_128.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar11 = local_128.AllocatorInstance.SecondaryData;
    }
    FVar10 = (ForElementType<unsigned_int>)&local_168;
    if (local_168.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar10 = local_168.AllocatorInstance.SecondaryData;
    }
    iVar5 = memcmp((void *)FVar10,(void *)FVar11,(ulonglong)(local_168.NumBits + 0x1fU >> 5) << 2);
    if (iVar5 == 0) goto LAB_141bb742c;
  }
  pFVar7 = FAutomationTestFramework::Get();
  pFVar2 = pFVar7->CurrentTest;
  pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
  ::FString::FString(&local_4a0,L"Serialize Ones");
  (*pcVar3)(pFVar2,&local_4a0,0);
  uVar8 = local_128.NumBits;
  if (local_4a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4a0.Data.AllocatorInstance.Data);
    uVar8 = local_128.NumBits;
  }
LAB_141bb742c:
  if (local_128.MaxBits < (int)uVar8) {
    local_570 = local_128.MaxBits;
    local_578 = uVar8;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumBits <= MaxBits",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x238,L"TBitArray::NumBits (%d) should never be greater than MaxBits (%d)");
    uVar8 = local_128.NumBits;
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (((int)uVar8 < 0) || (local_128.MaxBits < 0)) {
    local_570 = local_128.MaxBits;
    local_578 = uVar8;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumBits >= 0 && MaxBits >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x239,L"NumBits (%d) and MaxBits (%d) should always be >= 0");
    uVar8 = local_128.NumBits;
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  uVar9 = uVar8 & 0x8000001f;
  if ((int)uVar9 < 0) {
    uVar9 = (uVar9 - 1 | 0xffffffe0) + 1;
  }
  if (uVar9 != 0) {
    FVar11 = (ForElementType<unsigned_int>)&local_128;
    if (local_128.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar11 = local_128.AllocatorInstance.SecondaryData;
    }
    if (((*(uint *)((longlong)FVar11 +
                   (longlong)((int)(uVar8 + ((int)uVar8 >> 0x1f & 0x1fU)) >> 5) * 4) &
         -1 << ((byte)uVar9 & 0x1f)) != 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(LastWord & SlackMask) == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x243,
                           L"TBitArray slack bits are non-zero, this will result in undefined behavior."
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (local_3c != local_568[0]) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar2 = pFVar7->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_490,L"Serialize Zeroes Overflow");
    (*pcVar3)(pFVar2,&local_490,0);
    if (local_490.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_490.Data.AllocatorInstance.Data);
    }
  }
  local_188.NumBits = 0x10;
  local_188.MaxBits = 0x80;
  local_188.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_560.ArrayNum = 0;
  local_560.ArrayMax = 0;
  local_560.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_188.AllocatorInstance.InlineData[0] = 0xff;
  local_188.AllocatorInstance.InlineData[1] = 0xff;
  local_188.AllocatorInstance.InlineData[2] = '\0';
  local_188.AllocatorInstance.InlineData[3] = '\0';
  local_548 = 0;
  local_468._padding_ = 0;
  local_468._padding_ = 0;
  local_468._padding_ = 0;
  local_468._padding_ = 0;
  local_468._padding_ = 0;
  local_468._padding_ = 0;
  local_468._padding_ = 0;
  local_468._padding_ = 0;
  local_468._padding_ = 0;
  local_468._padding_ = 0;
  local_468._padding_ = 0;
  local_468._padding_ = 0;
  local_468._padding_ = 0;
  local_468._padding_ = 0;
  local_468._padding_ = 0;
  local_468._padding_ = 0;
  local_468._padding_ = 0;
  local_468._padding_ = 0;
  FArchiveState::FArchiveState((FArchiveState *)&local_468);
  local_468._padding_ = 0;
  local_468._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
  local_468.Bytes = &local_560;
  local_468.ArchiveName.ComparisonIndex.Value = 0;
  local_468.ArchiveName.Number = 0;
  FArchiveState::SetIsSaving((FArchiveState *)&local_468,true);
  (**(code **)(local_468._padding_ + 0x108))(&local_468,0);
  local_468._padding_ = (longlong)&___7FMemoryWriter__6B_;
  if (*(uint **)(local_468._padding_ + 8) < *(uint **)local_468._padding_ + 1) {
    if ((local_468._padding_ & 0x10000U) == 0) {
      TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize(&local_468,&local_188.NumBits,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)&local_468,(uint *)&local_188.NumBits);
    }
  }
  else {
    local_188.NumBits = **(uint **)local_468._padding_;
    *(longlong *)local_468._padding_ = *(longlong *)local_468._padding_ + 4;
  }
  if ((local_468._padding_ & 1U) != 0) {
    uVar9 = local_188.NumBits + 0x1fU >> 5;
    uVar8 = 4;
    if (4 < uVar9) {
      uVar8 = uVar9;
    }
    local_188.MaxBits = uVar8 << 5;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_188,0);
  }
  FVar11 = (ForElementType<unsigned_int>)&local_188;
  if (local_188.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FVar11 = local_188.AllocatorInstance.SecondaryData;
  }
  if (*(code **)(local_468._padding_ + 0x188) ==
      TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize) {
    TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize
              (&local_468,(void *)FVar11,(ulonglong)(local_188.NumBits + 0x1fU >> 5) << 2);
  }
  else {
    (**(code **)(local_468._padding_ + 0x188))();
  }
  if ((((local_468._padding_ & 1U) != 0) && ((local_468._padding_ & 0x1000000U) == 0)) &&
     ((local_468._padding_ & 0x4000000U) == 0)) {
    uVar8 = local_188.NumBits & 0x8000001f;
    if ((int)uVar8 < 0) {
      uVar8 = (uVar8 - 1 | 0xffffffe0) + 1;
    }
    if (uVar8 != 0) {
      FVar11 = (ForElementType<unsigned_int>)&local_188;
      if (local_188.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar11 = local_188.AllocatorInstance.SecondaryData;
      }
      puVar1 = (uint *)((longlong)FVar11 +
                       (longlong)
                       ((int)(local_188.NumBits + (local_188.NumBits >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & 0xffffffffU >> (-(char)uVar8 & 0x1fU);
    }
  }
  FArchive::~FArchive((FArchive *)&local_468);
  local_1a8.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_1a8.NumBits = 0;
  local_1a8.MaxBits = 0x80;
  iVar5 = TBitArray<TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>::AddUninitialized
                    (&local_1a8,0x100);
  TBitArray<TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>::SetRange
            (&local_1a8,iVar5,0x100,true);
  if (local_1a8.MaxBits < local_1a8.NumBits) {
    local_570 = local_1a8.MaxBits;
    local_578 = local_1a8.NumBits;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumBits <= MaxBits",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x238,L"TBitArray::NumBits (%d) should never be greater than MaxBits (%d)");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if ((local_1a8.NumBits < 0) || (local_1a8.MaxBits < 0)) {
    local_570 = local_1a8.MaxBits;
    local_578 = local_1a8.NumBits;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumBits >= 0 && MaxBits >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x239,L"NumBits (%d) and MaxBits (%d) should always be >= 0");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  uVar8 = local_1a8.NumBits & 0x8000001f;
  if ((int)uVar8 < 0) {
    uVar8 = (uVar8 - 1 | 0xffffffe0) + 1;
  }
  if (uVar8 != 0) {
    FVar11 = (ForElementType<unsigned_int>)&local_1a8;
    if (local_1a8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar11 = local_1a8.AllocatorInstance.SecondaryData;
    }
    if (((*(uint *)((longlong)FVar11 +
                   (longlong)((int)(local_1a8.NumBits + (local_1a8.NumBits >> 0x1f & 0x1fU)) >> 5) *
                   4) & -1 << ((byte)uVar8 & 0x1f)) != 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(LastWord & SlackMask) == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x243,
                           L"TBitArray slack bits are non-zero, this will result in undefined behavior."
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_3b8._padding_ = 0;
  local_3b8.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
  local_3b8.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
  local_3b8.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
  local_3b8.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
  local_3b8._40_8_ = 0;
  local_3b8.ArSerializingDefaults = 0;
  local_3b8.ArPortFlags = 0;
  local_3b8.ArMaxSerializeSize = 0;
  local_3b8.ArUEVer.FileVersionUE4 = 0;
  local_3b8.ArUEVer.FileVersionUE5 = 0;
  local_3b8.ArLicenseeUEVer = 0;
  local_3b8.ArEngineVer.Major = 0;
  local_3b8.ArEngineVer.Minor = 0;
  local_3b8.ArEngineVer.Patch = 0;
  local_3b8.ArEngineVer._6_2_ = 0;
  local_3b8.ArEngineVer.Changelist = 0;
  local_3b8.CustomVersionContainer = (FCustomVersionContainer *)0x0;
  local_3b8.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
  local_3b8.SavePackageData = (FArchiveSavePackageData *)0x0;
  local_3b8.SerializedProperty = (FProperty *)0x0;
  local_3b8.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
  local_3b8.bCustomVersionsAreReset = false;
  local_3b8._129_7_ = 0;
  local_3b8.NextProxy = (FArchiveState *)0x0;
  FArchiveState::FArchiveState(&local_3b8);
  local_328 = 0;
  local_3b8._padding_ = (longlong)&___7FMemoryReader__6B_;
  local_320 = &local_560;
  local_318 = 0x7fffffffffffffff;
  FArchiveState::SetIsLoading(&local_3b8,true);
  (**(code **)(local_3b8._padding_ + 0x108))(&local_3b8,0);
  if ((local_3b8.ActiveFPLB)->EndFastPathLoadBuffer <
      (uint *)((longlong)(local_3b8.ActiveFPLB)->StartFastPathLoadBuffer + 4)) {
    if (local_3b8.ArForceByteSwapping == 0) {
      (**(code **)(local_3b8._padding_ + 0x188))(&local_3b8,&local_1a8.NumBits,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)&local_3b8,(uint *)&local_1a8.NumBits);
    }
  }
  else {
    local_1a8.NumBits = *(int *)(local_3b8.ActiveFPLB)->StartFastPathLoadBuffer;
    (local_3b8.ActiveFPLB)->StartFastPathLoadBuffer =
         (local_3b8.ActiveFPLB)->StartFastPathLoadBuffer + 4;
  }
  if (local_3b8.ArIsLoading != 0) {
    uVar9 = local_1a8.NumBits + 0x1fU >> 5;
    uVar8 = 4;
    if (4 < uVar9) {
      uVar8 = uVar9;
    }
    local_1a8.MaxBits = uVar8 << 5;
    TBitArray<TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>::Realloc(&local_1a8,0);
  }
  FVar11 = (ForElementType<unsigned_int>)&local_1a8;
  if (local_1a8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FVar11 = local_1a8.AllocatorInstance.SecondaryData;
  }
  (**(code **)(local_3b8._padding_ + 0x188))
            (&local_3b8,FVar11,(ulonglong)(local_1a8.NumBits + 0x1fU >> 5) << 2);
  if (((local_3b8.ArIsLoading != 0) && (local_3b8.ArIsObjectReferenceCollector == 0)) &&
     (local_3b8.ArIsCountingMemory == 0)) {
    uVar8 = local_1a8.NumBits & 0x8000001f;
    if ((int)uVar8 < 0) {
      uVar8 = (uVar8 - 1 | 0xffffffe0) + 1;
    }
    if (uVar8 != 0) {
      FVar11 = (ForElementType<unsigned_int>)&local_1a8;
      if (local_1a8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar11 = local_1a8.AllocatorInstance.SecondaryData;
      }
      puVar1 = (uint *)((longlong)FVar11 +
                       (longlong)
                       ((int)(local_1a8.NumBits + (local_1a8.NumBits >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & 0xffffffffU >> (0x20U - (char)uVar8 & 0x1f);
    }
  }
  FArchive::~FArchive((FArchive *)&local_3b8);
  if (local_1a8.NumBits != local_188.NumBits) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar2 = pFVar7->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_480,
                       L"Serialize from a dynamic allocation with an inline allocator sets num down to the size of the loaded array"
                      );
    (*pcVar3)(pFVar2,&local_480,0);
    if (local_480.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_480.Data.AllocatorInstance.Data);
    }
  }
  if (local_1a8.MaxBits != 0x80) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar2 = pFVar7->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_530,
                       L"Serialize from a dynamic allocation with an inline allocator sets max back to the size of the inline allocation"
                      );
    (*pcVar3)(pFVar2,&local_530,0);
    if (local_530.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_530.Data.AllocatorInstance.Data);
    }
  }
  if (local_1a8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_1a8.AllocatorInstance.SecondaryData);
  }
  if (local_188.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_188.AllocatorInstance.SecondaryData);
  }
  if (local_560.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_560.AllocatorInstance.Data);
  }
  if (local_148.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_148.AllocatorInstance.SecondaryData);
  }
  if (local_128.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_128.AllocatorInstance.SecondaryData);
  }
  if (local_e8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_e8.AllocatorInstance.SecondaryData);
  }
  if (local_540.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_540.AllocatorInstance.Data);
  }
  if (local_c8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_c8.AllocatorInstance.SecondaryData);
  }
  if (local_a8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_a8.AllocatorInstance.SecondaryData);
  }
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  if (local_168.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_168.AllocatorInstance.SecondaryData);
  }
  if (local_108.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_108.AllocatorInstance.SecondaryData);
  }
  if (local_88.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_88.AllocatorInstance.SecondaryData);
  }
  return;
}

// TestSetRange @ 141bb7c00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000141bb8e40) */
/* WARNING: Removing unreachable block (ram,0x000141bb8e65) */
/* WARNING: Removing unreachable block (ram,0x000141bb8e86) */
/* WARNING: Removing unreachable block (ram,0x000141bb8e94) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FBitArrayTest::TestSetRange(FBitArrayTest *this)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  int iVar2;
  longlong lVar3;
  FAutomationTestBase *pFVar4;
  code *pcVar5;
  byte bVar6;
  uchar *puVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  bool bVar24;
  int iVar25;
  ForElementType<unsigned_int> FVar26;
  FAutomationTestFramework *pFVar27;
  ForAnyElementType FVar28;
  uint *puVar29;
  uint *puVar30;
  ForElementType<unsigned_int> FVar31;
  undefined4 *puVar32;
  undefined4 *_Buf2;
  int iVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  bool bVar37;
  bool bVar38;
  int *piVar39;
  undefined1 auStackY_1778 [32];
  uint local_1744 [3];
  int local_1738;
  longlong local_1730;
  int *local_1728;
  int *local_1720;
  FString local_1718;
  FString local_1708;
  FString local_16f8;
  FString local_16e8;
  FString local_16d8;
  FString local_16c8;
  undefined8 local_16b8;
  undefined8 uStack_16b0;
  undefined8 local_16a8;
  undefined8 uStack_16a0;
  undefined8 local_1698;
  undefined8 uStack_1690;
  undefined8 local_1688;
  undefined8 uStack_1680;
  undefined8 local_1678;
  undefined8 uStack_1670;
  undefined8 local_1668;
  undefined8 uStack_1660;
  undefined4 local_1658;
  undefined4 local_1654;
  undefined4 local_1650;
  int local_164c;
  undefined8 local_1648;
  undefined8 uStack_1640;
  undefined8 local_1638;
  undefined8 uStack_1630;
  undefined8 local_1628;
  undefined8 uStack_1620;
  undefined8 local_1618;
  undefined8 uStack_1610;
  undefined8 local_1608;
  undefined8 uStack_1600;
  undefined4 local_15f8;
  int local_15f4 [3];
  uint local_15e8 [4];
  uint *local_15d8;
  uint local_15d0;
  int local_15cc;
  uint local_15c8 [4];
  uint *local_15b8;
  uint local_15b0;
  int local_15ac;
  uint local_15a8 [4];
  uint *local_1598;
  uint local_1590;
  int local_158c;
  TBitArray<FDefaultBitArrayAllocator> local_1588;
  TBitArray<FDefaultBitArrayAllocator> local_1568;
  TBitArray<FDefaultBitArrayAllocator> local_1548;
  uint local_1528 [4];
  uint *local_1518;
  int local_1510;
  undefined4 local_150c;
  uint local_1508 [4];
  uint *local_14f8;
  uint local_14f0;
  undefined4 local_14ec;
  undefined4 local_14e8 [4];
  undefined4 *local_14d8;
  uint local_14d0;
  undefined4 local_14cc;
  undefined4 local_14c8 [4];
  undefined4 *local_14b8;
  uint local_14b0;
  undefined4 local_14ac;
  short local_14a8 [640];
  short local_fa8 [640];
  short local_aa8 [640];
  short local_5a8 [640];
  ulonglong local_a8;
  
  uVar23 = _UNK_15071d3c8;
  uVar22 = ___xmm_0000009f00000041000000400000003f;
  uVar21 = _UNK_15071d398;
  uVar20 = ___xmm_00000031000000300000002f00000021;
  uVar19 = _UNK_15071d378;
  uVar18 = ___xmm_000000200000001f0000001900000018;
  uVar17 = _UNK_15071d348;
  uVar16 = ___xmm_0000001700000011000000100000000f;
  uVar15 = _UNK_15071d2f8;
  uVar14 = ___xmm_00000009000000080000000700000004;
  uVar13 = _UNK_150631e08;
  uVar12 = __xmm_00000003000000020000000100000000;
  uVar11 = _UNK_15060db28;
  FVar31 = ___xmm_ffffffffffffffffffffffffffffffff;
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_1778;
  local_1720 = (int *)&local_1648;
  iVar25 = 1;
  local_1648 = ___xmm_00000004000000030000000200000001;
  uStack_1640 = _UNK_150631e38;
  local_1628 = ___xmm_000000400000003f0000002100000020;
  uStack_1620 = _UNK_15071d3a8;
  local_1638 = ___xmm_0000001f00000011000000100000000f;
  uStack_1630 = _UNK_15071d368;
  local_1608 = ___xmm_000000b0000000af000000a5000000a4;
  uStack_1600 = _UNK_15071d3e8;
  local_1618 = ___xmm_000000a3000000a1000000a00000009f;
  uStack_1610 = _UNK_15071d3d8;
  local_15f8 = 0xb1;
  do {
    piVar39 = (int *)&local_16b8;
    local_16b8 = uVar12;
    uStack_16b0 = uVar13;
    local_16a8 = uVar14;
    uStack_16a0 = uVar15;
    local_1698 = uVar16;
    uStack_1690 = uVar17;
    local_1688 = uVar18;
    uStack_1680 = uVar19;
    local_1678 = uVar20;
    uStack_1670 = uVar21;
    local_1668 = uVar22;
    uStack_1660 = uVar23;
    local_1658 = 0xa0;
    local_1654 = 0xa1;
    local_1650 = 0xaf;
    local_1738 = iVar25;
    do {
      uVar34 = *piVar39;
      local_1568.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
      local_1568.MaxBits = 0x80;
      local_1568.NumBits = 0x280;
      local_1744[2] = uVar34;
      local_1728 = piVar39;
      TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
      ResizeAllocation(&local_1568.AllocatorInstance,0,0x14,4);
      local_1568.MaxBits = 0x280;
      FVar26 = (ForElementType<unsigned_int>)&local_1568;
      if (local_1568.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar26 = local_1568.AllocatorInstance.SecondaryData;
      }
      *(undefined8 *)FVar26 = 0;
      puVar7 = (uchar *)((longlong)FVar26 + 8);
      puVar7[0] = '\0';
      puVar7[1] = '\0';
      puVar7[2] = '\0';
      puVar7[3] = '\0';
      puVar7[4] = '\0';
      puVar7[5] = '\0';
      puVar7[6] = '\0';
      puVar7[7] = '\0';
      *(ForElementType<unsigned_int> *)((longlong)FVar26 + 0x10) = (ForElementType<unsigned_int>)0x0
      ;
      *(undefined8 *)((longlong)FVar26 + 0x18) = 0;
      pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)FVar26 + 0x20);
      (pTVar1->AllocatorInstance).InlineData[0] = '\0';
      (pTVar1->AllocatorInstance).InlineData[1] = '\0';
      (pTVar1->AllocatorInstance).InlineData[2] = '\0';
      (pTVar1->AllocatorInstance).InlineData[3] = '\0';
      (pTVar1->AllocatorInstance).InlineData[4] = '\0';
      (pTVar1->AllocatorInstance).InlineData[5] = '\0';
      (pTVar1->AllocatorInstance).InlineData[6] = '\0';
      (pTVar1->AllocatorInstance).InlineData[7] = '\0';
      puVar7 = (uchar *)((longlong)FVar26 + 0x28);
      puVar7[0] = '\0';
      puVar7[1] = '\0';
      puVar7[2] = '\0';
      puVar7[3] = '\0';
      puVar7[4] = '\0';
      puVar7[5] = '\0';
      puVar7[6] = '\0';
      puVar7[7] = '\0';
      *(ForElementType<unsigned_int> *)((longlong)FVar26 + 0x30) = (ForElementType<unsigned_int>)0x0
      ;
      *(undefined8 *)((longlong)FVar26 + 0x38) = 0;
      pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)FVar26 + 0x40);
      (pTVar1->AllocatorInstance).InlineData[0] = '\0';
      (pTVar1->AllocatorInstance).InlineData[1] = '\0';
      (pTVar1->AllocatorInstance).InlineData[2] = '\0';
      (pTVar1->AllocatorInstance).InlineData[3] = '\0';
      (pTVar1->AllocatorInstance).InlineData[4] = '\0';
      (pTVar1->AllocatorInstance).InlineData[5] = '\0';
      (pTVar1->AllocatorInstance).InlineData[6] = '\0';
      (pTVar1->AllocatorInstance).InlineData[7] = '\0';
      puVar7 = (uchar *)((longlong)FVar26 + 0x48);
      puVar7[0] = '\0';
      puVar7[1] = '\0';
      puVar7[2] = '\0';
      puVar7[3] = '\0';
      puVar7[4] = '\0';
      puVar7[5] = '\0';
      puVar7[6] = '\0';
      puVar7[7] = '\0';
      uVar35 = local_1568.NumBits & 0x8000001f;
      if ((int)uVar35 < 0) {
        uVar35 = (uVar35 - 1 | 0xffffffe0) + 1;
      }
      if (uVar35 != 0) {
        FVar26 = (ForElementType<unsigned_int>)&local_1568;
        if (local_1568.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FVar26 = local_1568.AllocatorInstance.SecondaryData;
        }
        puVar29 = (uint *)((longlong)FVar26 +
                          (longlong)
                          ((int)(local_1568.NumBits + (local_1568.NumBits >> 0x1f & 0x1fU)) >> 5) *
                          4);
        *puVar29 = *puVar29 & 0xffffffffU >> (-(char)uVar35 & 0x1fU);
      }
      local_1588.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
      local_1588.MaxBits = 0x80;
      local_1588.NumBits = 0x280;
      TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
      ResizeAllocation(&local_1588.AllocatorInstance,0,0x14,4);
      local_1588.MaxBits = 0x280;
      FVar26 = (ForElementType<unsigned_int>)&local_1588;
      if (local_1588.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar26 = local_1588.AllocatorInstance.SecondaryData;
      }
      *(ForElementType<unsigned_int> *)FVar26 = FVar31;
      *(undefined8 *)((longlong)FVar26 + 8) = uVar11;
      *(ForElementType<unsigned_int> *)((longlong)FVar26 + 0x10) = FVar31;
      *(undefined8 *)((longlong)FVar26 + 0x18) = uVar11;
      *(ForElementType<unsigned_int> *)
       (((TBitArray<FDefaultBitArrayAllocator> *)((longlong)FVar26 + 0x20))->AllocatorInstance).
       InlineData = FVar31;
      *(undefined8 *)((longlong)FVar26 + 0x28) = uVar11;
      *(ForElementType<unsigned_int> *)((longlong)FVar26 + 0x30) = FVar31;
      *(undefined8 *)((longlong)FVar26 + 0x38) = uVar11;
      *(ForElementType<unsigned_int> *)
       (((TBitArray<FDefaultBitArrayAllocator> *)((longlong)FVar26 + 0x40))->AllocatorInstance).
       InlineData = FVar31;
      *(undefined8 *)((longlong)FVar26 + 0x48) = uVar11;
      uVar35 = local_1588.NumBits & 0x8000001f;
      if ((int)uVar35 < 0) {
        uVar35 = (uVar35 - 1 | 0xffffffe0) + 1;
      }
      if (uVar35 != 0) {
        FVar26 = (ForElementType<unsigned_int>)&local_1588;
        if (local_1588.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FVar26 = local_1588.AllocatorInstance.SecondaryData;
        }
        puVar29 = (uint *)((longlong)FVar26 +
                          (longlong)
                          ((int)(local_1588.NumBits + (local_1588.NumBits >> 0x1f & 0x1fU)) >> 5) *
                          4);
        *puVar29 = *puVar29 & 0xffffffffU >> (-(char)uVar35 & 0x1fU);
      }
      TBitArray<FDefaultBitArrayAllocator>::SetRange(&local_1568,uVar34,iVar25,true);
      if ((local_1568.MaxBits < local_1568.NumBits) &&
         (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                             ("NumBits <= MaxBits",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x238,
                              L"TBitArray::NumBits (%d) should never be greater than MaxBits (%d)"),
         bVar24)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (((local_1568.NumBits < 0) || (local_1568.MaxBits < 0)) &&
         (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                             ("NumBits >= 0 && MaxBits >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x239,L"NumBits (%d) and MaxBits (%d) should always be >= 0"), bVar24
         )) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar35 = local_1568.NumBits & 0x8000001f;
      if ((int)uVar35 < 0) {
        uVar35 = (uVar35 - 1 | 0xffffffe0) + 1;
      }
      if (uVar35 != 0) {
        FVar26 = (ForElementType<unsigned_int>)&local_1568;
        if (local_1568.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FVar26 = local_1568.AllocatorInstance.SecondaryData;
        }
        if (((*(uint *)((longlong)FVar26 +
                       (longlong)
                       ((int)(local_1568.NumBits + (local_1568.NumBits >> 0x1f & 0x1fU)) >> 5) * 4)
             & -1 << ((byte)uVar35 & 0x1f)) != 0) &&
           (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("(LastWord & SlackMask) == 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x243,
                                L"TBitArray slack bits are non-zero, this will result in undefined behavior."
                               ), bVar24)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      TBitArray<FDefaultBitArrayAllocator>::SetRange(&local_1588,uVar34,iVar25,false);
      if ((local_1588.MaxBits < local_1588.NumBits) &&
         (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                             ("NumBits <= MaxBits",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x238,
                              L"TBitArray::NumBits (%d) should never be greater than MaxBits (%d)"),
         bVar24)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (((local_1588.NumBits < 0) || (local_1588.MaxBits < 0)) &&
         (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                             ("NumBits >= 0 && MaxBits >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x239,L"NumBits (%d) and MaxBits (%d) should always be >= 0"), bVar24
         )) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar35 = local_1588.NumBits & 0x8000001f;
      if ((int)uVar35 < 0) {
        uVar35 = (uVar35 - 1 | 0xffffffe0) + 1;
      }
      if (uVar35 != 0) {
        FVar26 = (ForElementType<unsigned_int>)&local_1588;
        if (local_1588.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FVar26 = local_1588.AllocatorInstance.SecondaryData;
        }
        if (((*(uint *)((longlong)FVar26 +
                       (longlong)
                       ((int)(local_1588.NumBits + (local_1588.NumBits >> 0x1f & 0x1fU)) >> 5) * 4)
             & -1 << ((byte)uVar35 & 0x1f)) != 0) &&
           (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("(LastWord & SlackMask) == 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x243,
                                L"TBitArray slack bits are non-zero, this will result in undefined behavior."
                               ), bVar24)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      bVar24 = true;
      bVar9 = true;
      iVar33 = uVar34 + -0x20;
      if ((int)uVar34 < 0x21) {
        iVar33 = 0;
      }
      iVar2 = uVar34 + iVar25;
      local_1730 = 0;
      if (iVar33 < iVar2 + 0x20) {
        bVar6 = (byte)iVar33 & 0x1f;
        uVar35 = 1 << bVar6 | 1U >> 0x20 - bVar6;
        bVar8 = true;
        bVar10 = true;
        do {
          bVar37 = false;
          if ((iVar33 < (int)uVar34) || (iVar2 <= iVar33)) {
            bVar38 = true;
          }
          else {
            bVar38 = bVar37;
            bVar37 = true;
          }
          if (((iVar33 < 0) || (local_1568.NumBits <= iVar33)) &&
             (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Index>=0 && Index<NumBits",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                  ,0x5be,L""), bVar24)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          FVar26 = (ForElementType<unsigned_int>)&local_1568;
          if (local_1568.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
            FVar26 = local_1568.AllocatorInstance.SecondaryData;
          }
          iVar25 = iVar33;
          if (iVar33 < 0) {
            iVar25 = iVar33 + 0x1f;
          }
          lVar3 = (longlong)(iVar25 >> 5) * 4;
          uVar34 = *(uint *)(lVar3 + (longlong)FVar26) & uVar35;
          if (((iVar33 < 0) || (local_1588.NumBits <= iVar33)) &&
             (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Index>=0 && Index<NumBits",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                  ,0x5be,L""), bVar24)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          FVar26 = (ForElementType<unsigned_int>)&local_1588;
          if (local_1588.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
            FVar26 = local_1588.AllocatorInstance.SecondaryData;
          }
          uVar36 = uVar35 & *(uint *)(lVar3 + (longlong)FVar26);
          bVar24 = false;
          if ((uVar36 != 0) == bVar38) {
            bVar24 = bVar8;
          }
          bVar9 = false;
          if ((uVar34 != 0) == bVar37) {
            bVar9 = bVar10;
          }
          local_fa8[local_1730] = (bVar38 != false) + 0x30;
          local_14a8[local_1730] = (uVar36 != 0) + 0x30;
          local_5a8[local_1730] = (bVar37 != false) + 0x30;
          iVar33 = iVar33 + 1;
          uVar35 = uVar35 << 1 | (uint)((int)uVar35 < 0);
          local_aa8[local_1730] = (uVar34 != 0) + 0x30;
          local_1730 = local_1730 + 1;
          piVar39 = local_1728;
          uVar34 = local_1744[2];
          iVar25 = local_1738;
          bVar8 = bVar24;
          bVar10 = bVar9;
        } while (iVar33 < iVar2 + 0x20);
      }
      if (0x4ff < (ulonglong)(local_1730 * 2)) {
                    /* WARNING: Subroutine does not return */
        __report_rangecheckfailure();
      }
      local_fa8[local_1730] = 0;
      local_14a8[local_1730] = 0;
      local_5a8[local_1730] = 0;
      local_aa8[local_1730] = 0;
      if (bVar24) {
        if (!bVar9) {
          pFVar27 = FAutomationTestFramework::Get();
          pFVar4 = pFVar27->CurrentTest;
          pcVar5 = *(code **)(pFVar4->_padding_ + 0x28);
          ::FString::PrintfImpl
                    (&local_1708,
                     L"SetRange bool BitWidth=%d WriteOffset=%d, Zeroes\nExpected=%s\nActual  =%s");
          (*pcVar5)(pFVar4,&local_1708,0);
          FVar28.Data = local_1708.Data.AllocatorInstance.Data;
          goto LAB_141bb83a9;
        }
      }
      else {
        pFVar27 = FAutomationTestFramework::Get();
        pFVar4 = pFVar27->CurrentTest;
        pcVar5 = *(code **)(pFVar4->_padding_ + 0x28);
        ::FString::PrintfImpl
                  (&local_1718,
                   L"SetRange bool BitWidth=%d WriteOffset=%d, Ones\nExpected=%s\nActual  =%s");
        (*pcVar5)(pFVar4,&local_1718,0);
        FVar28.Data = local_1718.Data.AllocatorInstance.Data;
LAB_141bb83a9:
        if (FVar28.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FVar28.Data);
        }
      }
      if (local_1588.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_1588.AllocatorInstance.SecondaryData);
      }
      if (local_1568.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_1568.AllocatorInstance.SecondaryData);
      }
      piVar39 = piVar39 + 1;
    } while (piVar39 != &local_164c);
    local_1720 = local_1720 + 1;
    if (local_1720 == local_15f4) break;
    iVar25 = *local_1720;
  } while( true );
  local_1744[1] = 0;
  local_1744[0] = 0xffffffff;
  local_15b8 = (uint *)0x0;
  local_15ac = 0x80;
  local_15b0 = 0x20;
  local_15c8[0] = 0;
  local_15d8 = (uint *)0x0;
  local_15cc = 0x80;
  local_15d0 = 0x20;
  local_15e8[0] = 0xffffffff;
  local_14d8 = (undefined4 *)0x0;
  local_14cc = 0x80;
  local_14d0 = 0x20;
  local_14e8[0] = 0;
  local_14b8 = (undefined4 *)0x0;
  local_14ac = 0x80;
  local_14b0 = 0x20;
  local_14c8[0] = 0xffffffff;
  local_1728 = piVar39;
  FBitArrayMemory::MemmoveBitsWordOrder(local_15c8,0,local_1744,0,10);
  if ((local_15ac < (int)local_15b0) &&
     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("NumBits <= MaxBits",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x238,
                          L"TBitArray::NumBits (%d) should never be greater than MaxBits (%d)"),
     bVar24)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((((int)local_15b0 < 0) || (local_15ac < 0)) &&
     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("NumBits >= 0 && MaxBits >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x239,L"NumBits (%d) and MaxBits (%d) should always be >= 0"), bVar24)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar34 = local_15b0 & 0x8000001f;
  if ((int)uVar34 < 0) {
    uVar34 = (uVar34 - 1 | 0xffffffe0) + 1;
  }
  if (uVar34 != 0) {
    puVar29 = local_15c8;
    if (local_15b8 != (uint *)0x0) {
      puVar29 = local_15b8;
    }
    if (((puVar29[(int)(local_15b0 + ((int)local_15b0 >> 0x1f & 0x1fU)) >> 5] &
         -1 << ((byte)uVar34 & 0x1f)) != 0) &&
       (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                           ("(LastWord & SlackMask) == 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x243,
                            L"TBitArray slack bits are non-zero, this will result in undefined behavior."
                           ), bVar24)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (((int)local_15b0 < 0x14) &&
     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("Index >= 0 && NumBitsToSet >= 0 && Index + NumBitsToSet <= NumBits",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x3bc,L""), bVar24)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  puVar29 = local_15c8;
  if (local_15b8 != (uint *)0x0) {
    puVar29 = local_15b8;
  }
  FBitArrayMemory::MemmoveBitsWordOrder(puVar29,10,local_1744,10,10);
  if ((local_15ac < (int)local_15b0) &&
     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("NumBits <= MaxBits",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x238,
                          L"TBitArray::NumBits (%d) should never be greater than MaxBits (%d)"),
     bVar24)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((((int)local_15b0 < 0) || (local_15ac < 0)) &&
     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("NumBits >= 0 && MaxBits >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x239,L"NumBits (%d) and MaxBits (%d) should always be >= 0"), bVar24)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar34 = local_15b0 & 0x8000001f;
  if ((int)uVar34 < 0) {
    uVar34 = (uVar34 - 1 | 0xffffffe0) + 1;
  }
  if (uVar34 != 0) {
    puVar29 = local_15c8;
    if (local_15b8 != (uint *)0x0) {
      puVar29 = local_15b8;
    }
    if (((puVar29[(int)(local_15b0 + ((int)local_15b0 >> 0x1f & 0x1fU)) >> 5] &
         -1 << ((byte)uVar34 & 0x1f)) != 0) &&
       (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                           ("(LastWord & SlackMask) == 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x243,
                            L"TBitArray slack bits are non-zero, this will result in undefined behavior."
                           ), bVar24)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (((int)local_15b0 < 0x20) &&
     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("Index >= 0 && NumBitsToSet >= 0 && Index + NumBitsToSet <= NumBits",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x3bc,L""), bVar24)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  puVar29 = local_15c8;
  if (local_15b8 != (uint *)0x0) {
    puVar29 = local_15b8;
  }
  FBitArrayMemory::MemmoveBitsWordOrder(puVar29,0x14,local_1744,0x14,0xc);
  if ((local_15ac < (int)local_15b0) &&
     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("NumBits <= MaxBits",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x238,
                          L"TBitArray::NumBits (%d) should never be greater than MaxBits (%d)"),
     bVar24)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((((int)local_15b0 < 0) || (local_15ac < 0)) &&
     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("NumBits >= 0 && MaxBits >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x239,L"NumBits (%d) and MaxBits (%d) should always be >= 0"), bVar24)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar34 = local_15b0 & 0x8000001f;
  if ((int)uVar34 < 0) {
    uVar34 = (uVar34 - 1 | 0xffffffe0) + 1;
  }
  if (uVar34 != 0) {
    puVar29 = local_15c8;
    if (local_15b8 != (uint *)0x0) {
      puVar29 = local_15b8;
    }
    if (((puVar29[(int)(local_15b0 + ((int)local_15b0 >> 0x1f & 0x1fU)) >> 5] &
         -1 << ((byte)uVar34 & 0x1f)) != 0) &&
       (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                           ("(LastWord & SlackMask) == 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x243,
                            L"TBitArray slack bits are non-zero, this will result in undefined behavior."
                           ), bVar24)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (((int)local_15d0 < 10) &&
     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("Index >= 0 && NumBitsToSet >= 0 && Index + NumBitsToSet <= NumBits",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x3bc,L""), bVar24)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  puVar29 = local_15e8;
  if (local_15d8 != (uint *)0x0) {
    puVar29 = local_15d8;
  }
  FBitArrayMemory::MemmoveBitsWordOrder(puVar29,0,local_1744 + 1,0,10);
  if ((local_15cc < (int)local_15d0) &&
     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("NumBits <= MaxBits",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x238,
                          L"TBitArray::NumBits (%d) should never be greater than MaxBits (%d)"),
     bVar24)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((((int)local_15d0 < 0) || (local_15cc < 0)) &&
     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("NumBits >= 0 && MaxBits >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x239,L"NumBits (%d) and MaxBits (%d) should always be >= 0"), bVar24)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar34 = local_15d0 & 0x8000001f;
  if ((int)uVar34 < 0) {
    uVar34 = (uVar34 - 1 | 0xffffffe0) + 1;
  }
  if (uVar34 != 0) {
    puVar29 = local_15e8;
    if (local_15d8 != (uint *)0x0) {
      puVar29 = local_15d8;
    }
    if (((puVar29[(int)(local_15d0 + ((int)local_15d0 >> 0x1f & 0x1fU)) >> 5] &
         -1 << ((byte)uVar34 & 0x1f)) != 0) &&
       (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                           ("(LastWord & SlackMask) == 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x243,
                            L"TBitArray slack bits are non-zero, this will result in undefined behavior."
                           ), bVar24)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (((int)local_15d0 < 0x14) &&
     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("Index >= 0 && NumBitsToSet >= 0 && Index + NumBitsToSet <= NumBits",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x3bc,L""), bVar24)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  puVar29 = local_15e8;
  if (local_15d8 != (uint *)0x0) {
    puVar29 = local_15d8;
  }
  FBitArrayMemory::MemmoveBitsWordOrder(puVar29,10,local_1744 + 1,10,10);
  if ((local_15cc < (int)local_15d0) &&
     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("NumBits <= MaxBits",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x238,
                          L"TBitArray::NumBits (%d) should never be greater than MaxBits (%d)"),
     bVar24)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((((int)local_15d0 < 0) || (local_15cc < 0)) &&
     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("NumBits >= 0 && MaxBits >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x239,L"NumBits (%d) and MaxBits (%d) should always be >= 0"), bVar24)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar34 = local_15d0 & 0x8000001f;
  if ((int)uVar34 < 0) {
    uVar34 = (uVar34 - 1 | 0xffffffe0) + 1;
  }
  if (uVar34 != 0) {
    puVar29 = local_15e8;
    if (local_15d8 != (uint *)0x0) {
      puVar29 = local_15d8;
    }
    if (((puVar29[(int)(local_15d0 + ((int)local_15d0 >> 0x1f & 0x1fU)) >> 5] &
         -1 << ((byte)uVar34 & 0x1f)) != 0) &&
       (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                           ("(LastWord & SlackMask) == 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x243,
                            L"TBitArray slack bits are non-zero, this will result in undefined behavior."
                           ), bVar24)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (((int)local_15d0 < 0x20) &&
     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("Index >= 0 && NumBitsToSet >= 0 && Index + NumBitsToSet <= NumBits",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x3bc,L""), bVar24)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  puVar29 = local_15e8;
  if (local_15d8 != (uint *)0x0) {
    puVar29 = local_15d8;
  }
  FBitArrayMemory::MemmoveBitsWordOrder(puVar29,0x14,local_1744 + 1,0x14,0xc);
  if ((local_15cc < (int)local_15d0) &&
     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("NumBits <= MaxBits",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x238,
                          L"TBitArray::NumBits (%d) should never be greater than MaxBits (%d)"),
     bVar24)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((((int)local_15d0 < 0) || (local_15cc < 0)) &&
     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("NumBits >= 0 && MaxBits >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x239,L"NumBits (%d) and MaxBits (%d) should always be >= 0"), bVar24)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar34 = local_15d0 & 0x8000001f;
  if ((int)uVar34 < 0) {
    uVar34 = (uVar34 - 1 | 0xffffffe0) + 1;
  }
  if (uVar34 != 0) {
    puVar29 = local_15e8;
    if (local_15d8 != (uint *)0x0) {
      puVar29 = local_15d8;
    }
    if (((puVar29[(int)(local_15d0 + ((int)local_15d0 >> 0x1f & 0x1fU)) >> 5] &
         -1 << ((byte)uVar34 & 0x1f)) != 0) &&
       (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                           ("(LastWord & SlackMask) == 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x243,
                            L"TBitArray slack bits are non-zero, this will result in undefined behavior."
                           ), bVar24)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (local_15b0 == local_14b0) {
    puVar32 = local_14c8;
    if (local_14b8 != (undefined4 *)0x0) {
      puVar32 = local_14b8;
    }
    puVar29 = local_15c8;
    if (local_15b8 != (uint *)0x0) {
      puVar29 = local_15b8;
    }
    iVar25 = memcmp(puVar29,puVar32,(ulonglong)(local_15b0 + 0x1f >> 5) << 2);
    if (iVar25 != 0) goto LAB_141bb8ca8;
  }
  else {
LAB_141bb8ca8:
    pFVar27 = FAutomationTestFramework::Get();
    pFVar4 = pFVar27->CurrentTest;
    pcVar5 = *(code **)(pFVar4->_padding_ + 0x28);
    ::FString::FString(&local_16f8,L"SetRangeFromRange Zeroes");
    (*pcVar5)(pFVar4,&local_16f8,0);
    if (local_16f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_16f8.Data.AllocatorInstance.Data);
    }
  }
  puVar32 = local_14d8;
  if (local_15d0 == local_14d0) {
    _Buf2 = local_14e8;
    if (local_14d8 != (undefined4 *)0x0) {
      _Buf2 = local_14d8;
    }
    puVar29 = local_15e8;
    if (local_15d8 != (uint *)0x0) {
      puVar29 = local_15d8;
    }
    iVar25 = memcmp(puVar29,_Buf2,(ulonglong)(local_15d0 + 0x1f >> 5) << 2);
    if (iVar25 != 0) goto LAB_141bb8d32;
  }
  else {
LAB_141bb8d32:
    pFVar27 = FAutomationTestFramework::Get();
    pFVar4 = pFVar27->CurrentTest;
    pcVar5 = *(code **)(pFVar4->_padding_ + 0x28);
    ::FString::FString(&local_16e8,L"SetRangeFromRange Ones");
    (*pcVar5)(pFVar4,&local_16e8,0);
    puVar32 = local_14d8;
    if (local_16e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_16e8.Data.AllocatorInstance.Data);
      puVar32 = local_14d8;
    }
  }
  if (local_14b8 != (undefined4 *)0x0) {
    FMemory::Free(local_14b8);
    puVar32 = local_14d8;
  }
  if (puVar32 != (undefined4 *)0x0) {
    FMemory::Free(puVar32);
  }
  if (local_15d8 != (uint *)0x0) {
    FMemory::Free(local_15d8);
  }
  if (local_15b8 != (uint *)0x0) {
    FMemory::Free(local_15b8);
  }
  local_1598 = (uint *)0x0;
  local_158c = 0x80;
  local_1590 = 0x20;
  local_15a8[0] = 0;
  local_1548.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_1548.MaxBits = 0x80;
  local_1548.NumBits = 0x20;
  local_1548.AllocatorInstance.InlineData[0] = 0xff;
  local_1548.AllocatorInstance.InlineData[1] = 0xff;
  local_1548.AllocatorInstance.InlineData[2] = 0xff;
  local_1548.AllocatorInstance.InlineData[3] = 0xff;
  local_1518 = (uint *)0x0;
  local_150c = 0x80;
  local_1510 = 0x20;
  local_1528[0] = 0;
  local_14f8 = (uint *)0x0;
  local_14ec = 0x80;
  local_14f0 = 0x20;
  local_1508[0] = 0xffffffff;
  FBitArrayMemory::MemmoveBitsWordOrder(local_15a8,0,local_1508,0,10);
  if ((local_158c < (int)local_1590) &&
     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("NumBits <= MaxBits",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x238,
                          L"TBitArray::NumBits (%d) should never be greater than MaxBits (%d)"),
     bVar24)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((((int)local_1590 < 0) || (local_158c < 0)) &&
     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("NumBits >= 0 && MaxBits >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x239,L"NumBits (%d) and MaxBits (%d) should always be >= 0"), bVar24)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar34 = local_1590 & 0x8000001f;
  if ((int)uVar34 < 0) {
    uVar34 = (uVar34 - 1 | 0xffffffe0) + 1;
  }
  if (uVar34 != 0) {
    puVar29 = local_15a8;
    if (local_1598 != (uint *)0x0) {
      puVar29 = local_1598;
    }
    if (((puVar29[(int)(local_1590 + ((int)local_1590 >> 0x1f & 0x1fU)) >> 5] &
         -1 << ((byte)uVar34 & 0x1f)) != 0) &&
       (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                           ("(LastWord & SlackMask) == 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x243,
                            L"TBitArray slack bits are non-zero, this will result in undefined behavior."
                           ), bVar24)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (((int)local_1590 < 0x14) &&
     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("Index >= 0 && NumBitsToSet >= 0 && Index + NumBitsToSet <= NumBits",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x3cf,L""), bVar24)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (((int)local_14f0 < 0x14) &&
     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("0 <= ReadOffsetBits && ReadOffsetBits + NumBitsToSet <= ReadBits.NumBits"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x3d0,L""), bVar24)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  puVar29 = local_1508;
  if (local_14f8 != (uint *)0x0) {
    puVar29 = local_14f8;
  }
  puVar30 = local_15a8;
  if (local_1598 != (uint *)0x0) {
    puVar30 = local_1598;
  }
  FBitArrayMemory::MemmoveBitsWordOrder(puVar30,10,puVar29,10,10);
  if ((local_158c < (int)local_1590) &&
     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("NumBits <= MaxBits",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x238,
                          L"TBitArray::NumBits (%d) should never be greater than MaxBits (%d)"),
     bVar24)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((((int)local_1590 < 0) || (local_158c < 0)) &&
     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("NumBits >= 0 && MaxBits >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x239,L"NumBits (%d) and MaxBits (%d) should always be >= 0"), bVar24)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar34 = local_1590 & 0x8000001f;
  if ((int)uVar34 < 0) {
    uVar34 = (uVar34 - 1 | 0xffffffe0) + 1;
  }
  if (uVar34 != 0) {
    puVar29 = local_15a8;
    if (local_1598 != (uint *)0x0) {
      puVar29 = local_1598;
    }
    if (((puVar29[(int)(local_1590 + ((int)local_1590 >> 0x1f & 0x1fU)) >> 5] &
         -1 << ((byte)uVar34 & 0x1f)) != 0) &&
       (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                           ("(LastWord & SlackMask) == 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x243,
                            L"TBitArray slack bits are non-zero, this will result in undefined behavior."
                           ), bVar24)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (((int)local_1590 < 0x20) &&
     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("Index >= 0 && NumBitsToSet >= 0 && Index + NumBitsToSet <= NumBits",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x3cf,L""), bVar24)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (((int)local_14f0 < 0x20) &&
     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("0 <= ReadOffsetBits && ReadOffsetBits + NumBitsToSet <= ReadBits.NumBits"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x3d0,L""), bVar24)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  puVar29 = local_1508;
  if (local_14f8 != (uint *)0x0) {
    puVar29 = local_14f8;
  }
  puVar30 = local_15a8;
  if (local_1598 != (uint *)0x0) {
    puVar30 = local_1598;
  }
  FBitArrayMemory::MemmoveBitsWordOrder(puVar30,0x14,puVar29,0x14,0xc);
  if ((local_158c < (int)local_1590) &&
     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("NumBits <= MaxBits",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x238,
                          L"TBitArray::NumBits (%d) should never be greater than MaxBits (%d)"),
     bVar24)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((((int)local_1590 < 0) || (local_158c < 0)) &&
     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("NumBits >= 0 && MaxBits >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x239,L"NumBits (%d) and MaxBits (%d) should always be >= 0"), bVar24)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar34 = local_1590 & 0x8000001f;
  if ((int)uVar34 < 0) {
    uVar34 = (uVar34 - 1 | 0xffffffe0) + 1;
  }
  if (uVar34 != 0) {
    puVar29 = local_15a8;
    if (local_1598 != (uint *)0x0) {
      puVar29 = local_1598;
    }
    if (((puVar29[(int)(local_1590 + ((int)local_1590 >> 0x1f & 0x1fU)) >> 5] &
         -1 << ((byte)uVar34 & 0x1f)) != 0) &&
       (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                           ("(LastWord & SlackMask) == 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x243,
                            L"TBitArray slack bits are non-zero, this will result in undefined behavior."
                           ), bVar24)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if ((local_1548.NumBits < 10) &&
     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("Index >= 0 && NumBitsToSet >= 0 && Index + NumBitsToSet <= NumBits",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x3cf,L""), bVar24)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((local_1510 < 10) &&
     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("0 <= ReadOffsetBits && ReadOffsetBits + NumBitsToSet <= ReadBits.NumBits"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x3d0,L""), bVar24)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  puVar29 = local_1528;
  if (local_1518 != (uint *)0x0) {
    puVar29 = local_1518;
  }
  FVar31 = (ForElementType<unsigned_int>)&local_1548;
  if (local_1548.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FVar31 = local_1548.AllocatorInstance.SecondaryData;
  }
  FBitArrayMemory::MemmoveBitsWordOrder((uint *)FVar31,0,puVar29,0,10);
  TBitArray<FDefaultBitArrayAllocator>::CheckInvariants(&local_1548);
  if ((local_1548.NumBits < 0x14) &&
     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("Index >= 0 && NumBitsToSet >= 0 && Index + NumBitsToSet <= NumBits",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x3cf,L""), bVar24)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((local_1510 < 0x14) &&
     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("0 <= ReadOffsetBits && ReadOffsetBits + NumBitsToSet <= ReadBits.NumBits"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x3d0,L""), bVar24)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  puVar29 = local_1528;
  if (local_1518 != (uint *)0x0) {
    puVar29 = local_1518;
  }
  FVar31 = (ForElementType<unsigned_int>)&local_1548;
  if (local_1548.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FVar31 = local_1548.AllocatorInstance.SecondaryData;
  }
  FBitArrayMemory::MemmoveBitsWordOrder((uint *)FVar31,10,puVar29,10,10);
  TBitArray<FDefaultBitArrayAllocator>::CheckInvariants(&local_1548);
  if ((local_1548.NumBits < 0x20) &&
     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("Index >= 0 && NumBitsToSet >= 0 && Index + NumBitsToSet <= NumBits",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x3cf,L""), bVar24)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((local_1510 < 0x20) &&
     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("0 <= ReadOffsetBits && ReadOffsetBits + NumBitsToSet <= ReadBits.NumBits"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x3d0,L""), bVar24)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  puVar29 = local_1528;
  if (local_1518 != (uint *)0x0) {
    puVar29 = local_1518;
  }
  FVar31 = (ForElementType<unsigned_int>)&local_1548;
  if (local_1548.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FVar31 = local_1548.AllocatorInstance.SecondaryData;
  }
  FBitArrayMemory::MemmoveBitsWordOrder((uint *)FVar31,0x14,puVar29,0x14,0xc);
  TBitArray<FDefaultBitArrayAllocator>::CheckInvariants(&local_1548);
  if (local_1590 == local_14f0) {
    puVar29 = local_1508;
    if (local_14f8 != (uint *)0x0) {
      puVar29 = local_14f8;
    }
    puVar30 = local_15a8;
    if (local_1598 != (uint *)0x0) {
      puVar30 = local_1598;
    }
    iVar25 = memcmp(puVar30,puVar29,(ulonglong)(local_1590 + 0x1f >> 5) << 2);
    if (iVar25 != 0) goto LAB_141bb94fb;
  }
  else {
LAB_141bb94fb:
    pFVar27 = FAutomationTestFramework::Get();
    pFVar4 = pFVar27->CurrentTest;
    pcVar5 = *(code **)(pFVar4->_padding_ + 0x28);
    ::FString::FString(&local_16d8,L"SetRange bitarray Zeroes");
    (*pcVar5)(pFVar4,&local_16d8,0);
    if (local_16d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_16d8.Data.AllocatorInstance.Data);
    }
  }
  puVar29 = local_1518;
  if (local_1548.NumBits == local_1510) {
    puVar30 = local_1528;
    if (local_1518 != (uint *)0x0) {
      puVar30 = local_1518;
    }
    FVar31 = (ForElementType<unsigned_int>)&local_1548;
    if (local_1548.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar31 = local_1548.AllocatorInstance.SecondaryData;
    }
    iVar25 = memcmp((void *)FVar31,puVar30,(ulonglong)(local_1548.NumBits + 0x1fU >> 5) << 2);
    if (iVar25 == 0) goto LAB_141bb95c9;
  }
  pFVar27 = FAutomationTestFramework::Get();
  pFVar4 = pFVar27->CurrentTest;
  pcVar5 = *(code **)(pFVar4->_padding_ + 0x28);
  ::FString::FString(&local_16c8,L"SetRange bitarray Ones");
  (*pcVar5)(pFVar4,&local_16c8,0);
  puVar29 = local_1518;
  if (local_16c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_16c8.Data.AllocatorInstance.Data);
    puVar29 = local_1518;
  }
LAB_141bb95c9:
  if (local_14f8 != (uint *)0x0) {
    FMemory::Free(local_14f8);
    puVar29 = local_1518;
  }
  if (puVar29 != (uint *)0x0) {
    FMemory::Free(puVar29);
  }
  if (local_1548.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_1548.AllocatorInstance.SecondaryData);
  }
  if (local_1598 != (uint *)0x0) {
    FMemory::Free(local_1598);
  }
  return;
}

