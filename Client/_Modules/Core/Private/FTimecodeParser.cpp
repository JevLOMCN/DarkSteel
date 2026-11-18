// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 3

// FTimecodeParser @ 141918cc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FTimecodeParser * __thiscall
UE::Core::Private::FTimecodeParser::FTimecodeParser(FTimecodeParser *this)

{
  TArray<wchar_t,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>_> *pTVar1;
  TArray<TArray<wchar_t,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>_>_const_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ForElementType<wchar_t> FVar6;
  FTimecodeParser *pFVar7;
  ForElementType<wchar_t> FVar8;
  ForElementType<TArray<wchar_t,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>_>_const_*>
  FVar9;
  undefined1 auStackY_b8 [32];
  FTimecodeParser *local_60;
  FTimecodeParser *local_58;
  FTimecodeParser *local_50;
  ForElementType<wchar_t> local_48;
  undefined4 local_40;
  undefined2 local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  local_40 = 0x3b003a;
  (this->AllSeparators).AllocatorInstance.SecondaryData = (ForElementType<wchar_t>)0x0;
  (this->AllSeparators).ArrayNum = 3;
  local_3c = 0x2e;
  ReallocForCopy<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<wchar_t>_>
            (2,2,3,0,(ForElementType<wchar_t> *)this,3,&(this->AllSeparators).ArrayMax);
  FVar6 = (this->AllSeparators).AllocatorInstance.SecondaryData;
  pTVar1 = &this->SubFrameSeparators;
  FVar8 = (ForElementType<wchar_t>)this;
  if (FVar6 != (ForElementType<wchar_t>)0x0) {
    FVar8 = FVar6;
  }
  *(undefined4 *)FVar8 = local_40;
  ((uchar *)((longlong)FVar8 + 4))[0] = '.';
  ((uchar *)((longlong)FVar8 + 4))[1] = '\0';
  (this->SubFrameSeparators).AllocatorInstance.SecondaryData = (ForElementType<wchar_t>)0x0;
  (this->SubFrameSeparators).ArrayNum = 1;
  ReallocForCopy<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<wchar_t>_>
            (2,2,1,0,&pTVar1->AllocatorInstance,1,&(this->SubFrameSeparators).ArrayMax);
  FVar6 = (this->SubFrameSeparators).AllocatorInstance.SecondaryData;
  if (FVar6 == (ForElementType<wchar_t>)0x0) {
    FVar6 = (ForElementType<wchar_t>)pTVar1;
  }
  *(undefined2 *)FVar6 = 0x2e;
  (this->DropFrameSeparators).AllocatorInstance.SecondaryData = (ForElementType<wchar_t>)0x0;
  (this->DropFrameSeparators).ArrayNum = 2;
  ReallocForCopy<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<wchar_t>_>
            (2,2,2,0,&(this->DropFrameSeparators).AllocatorInstance,2,
             &(this->DropFrameSeparators).ArrayMax);
  FVar6 = (this->DropFrameSeparators).AllocatorInstance.SecondaryData;
  if (FVar6 == (ForElementType<wchar_t>)0x0) {
    FVar6 = (ForElementType<wchar_t>)&this->DropFrameSeparators;
  }
  pTVar2 = &this->ValueSeparators;
  *(undefined4 *)FVar6 = 0x2e003b;
  (this->ValueSeparators).AllocatorInstance.SecondaryData =
       (ForElementType<TArray<wchar_t,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>_>_const_*>
        )0x0;
  (this->ValueSeparators).ArrayNum = 0;
  (this->ValueSeparators).ArrayMax = 4;
  local_60 = this;
  if ((pTVar2 <= &local_60) &&
     (&local_60 < &(this->ValueSeparators).AllocatorInstance.SecondaryData)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FTimecodeParser *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->ValueSeparators).ArrayNum;
  if (iVar5 == (this->ValueSeparators).ArrayMax) {
    iVar5 = ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TArray<wchar_t,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>_>_const_*>_>
                      (0x808,&pTVar2->AllocatorInstance,&(this->ValueSeparators).ArrayMax);
  }
  (this->ValueSeparators).ArrayNum = iVar5 + 1;
  FVar9 = (this->ValueSeparators).AllocatorInstance.SecondaryData;
  if (FVar9 == (ForElementType<TArray<wchar_t,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>_>_const_*>
                )0x0) {
    FVar9 = (ForElementType<TArray<wchar_t,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>_>_const_*>
             )pTVar2;
  }
  *(FTimecodeParser **)((longlong)FVar9 + (longlong)iVar5 * 8) = local_60;
  FVar9 = (this->ValueSeparators).AllocatorInstance.SecondaryData;
  if (FVar9 == (ForElementType<TArray<wchar_t,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>_>_const_*>
                )0x0) {
    FVar9 = (ForElementType<TArray<wchar_t,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>_>_const_*>
             )pTVar2;
  }
  local_58 = this;
  if (((ulonglong)FVar9 <= &local_58) &&
     (&local_58 <
      (FTimecodeParser **)((longlong)FVar9 + (longlong)(this->ValueSeparators).ArrayMax * 8))) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FTimecodeParser *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->ValueSeparators).ArrayNum;
  if (iVar5 == (this->ValueSeparators).ArrayMax) {
    iVar5 = ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TArray<wchar_t,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>_>_const_*>_>
                      (0x808,&pTVar2->AllocatorInstance,&(this->ValueSeparators).ArrayMax);
  }
  (this->ValueSeparators).ArrayNum = iVar5 + 1;
  FVar9 = (this->ValueSeparators).AllocatorInstance.SecondaryData;
  if (FVar9 == (ForElementType<TArray<wchar_t,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>_>_const_*>
                )0x0) {
    FVar9 = (ForElementType<TArray<wchar_t,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>_>_const_*>
             )pTVar2;
  }
  *(FTimecodeParser **)((longlong)FVar9 + (longlong)iVar5 * 8) = local_58;
  FVar9 = (this->ValueSeparators).AllocatorInstance.SecondaryData;
  if (FVar9 == (ForElementType<TArray<wchar_t,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>_>_const_*>
                )0x0) {
    FVar9 = (ForElementType<TArray<wchar_t,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>_>_const_*>
             )pTVar2;
  }
  local_50 = this;
  if (((ulonglong)FVar9 <= &local_50) &&
     (&local_50 <
      (FTimecodeParser **)((longlong)FVar9 + (longlong)(this->ValueSeparators).ArrayMax * 8))) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FTimecodeParser *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->ValueSeparators).ArrayNum;
  if (iVar5 == (this->ValueSeparators).ArrayMax) {
    iVar5 = ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TArray<wchar_t,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>_>_const_*>_>
                      (0x808,&pTVar2->AllocatorInstance,&(this->ValueSeparators).ArrayMax);
  }
  (this->ValueSeparators).ArrayNum = iVar5 + 1;
  FVar9 = (this->ValueSeparators).AllocatorInstance.SecondaryData;
  if (FVar9 == (ForElementType<TArray<wchar_t,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>_>_const_*>
                )0x0) {
    FVar9 = (ForElementType<TArray<wchar_t,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>_>_const_*>
             )pTVar2;
  }
  *(FTimecodeParser **)((longlong)FVar9 + (longlong)iVar5 * 8) = local_50;
  FVar9 = (this->ValueSeparators).AllocatorInstance.SecondaryData;
  if (FVar9 == (ForElementType<TArray<wchar_t,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>_>_const_*>
                )0x0) {
    FVar9 = (ForElementType<TArray<wchar_t,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>_>_const_*>
             )pTVar2;
  }
  local_48 = (ForElementType<wchar_t>)pTVar1;
  if (((ulonglong)FVar9 <= &local_48) &&
     (&local_48 <
      (ForElementType<wchar_t> *)((longlong)FVar9 + (longlong)(this->ValueSeparators).ArrayMax * 8))
     ) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FTimecodeParser *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->ValueSeparators).ArrayNum;
  if (iVar5 == (this->ValueSeparators).ArrayMax) {
    iVar5 = ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TArray<wchar_t,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>_>_const_*>_>
                      (0x808,&pTVar2->AllocatorInstance,&(this->ValueSeparators).ArrayMax);
  }
  (this->ValueSeparators).ArrayNum = iVar5 + 1;
  FVar9 = (this->ValueSeparators).AllocatorInstance.SecondaryData;
  if (FVar9 == (ForElementType<TArray<wchar_t,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>_>_const_*>
                )0x0) {
    FVar9 = (ForElementType<TArray<wchar_t,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>_>_const_*>
             )pTVar2;
  }
  *(ForElementType<wchar_t> *)((longlong)FVar9 + (longlong)iVar5 * 8) = local_48;
  return this;
}

// operator() @ 14191e890

bool __thiscall
`UE::Core::Private::FTimecodeParser::Evaluate'::__l2::<lambda_1>::operator()(void *this)

{
  ForElementType<int> FVar1;
  ForElementType<double> FVar2;
  ForElementType<wchar_t> *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  byte bVar7;
  wint_t wVar8;
  int iVar9;
  ForElementType<int> FVar10;
  ForElementType<wchar_t> FVar11;
  ForElementType<wchar_t> FVar12;
  ForElementType<double> FVar13;
  wchar_t *pwVar14;
  wchar_t *pwVar15;
  wint_t *pwVar16;
  ForElementType<int> FVar17;
  ulonglong uVar18;
  ForElementType<wchar_t> FVar19;
  ForElementType<double> FVar20;
  wint_t *pwVar21;
  uint uVar22;
  uint uVar23;
  byte bVar25;
  uint uVar26;
  ulonglong uVar27;
  double dVar28;
  undefined2 local_58;
  undefined2 local_56;
  undefined4 local_54;
  double local_50;
  double local_48 [2];
  ulonglong uVar24;
  
  FVar19 = *(ForElementType<wchar_t> *)this;
  local_58 = 0;
  FVar12 = *(ForElementType<wchar_t> *)((longlong)FVar19 + 0x80);
  FVar11 = FVar12;
  if (FVar12 == (ForElementType<wchar_t>)0x0) {
    FVar11 = FVar19;
  }
  if ((ulonglong)FVar11 <= &local_58) {
    if (FVar12 == (ForElementType<wchar_t>)0x0) {
      FVar12 = FVar19;
    }
    if ((&local_58 <
         (undefined2 *)((longlong)FVar12 + (longlong)*(int *)((longlong)FVar19 + 0x8c) * 2)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  iVar9 = *(int *)((longlong)FVar19 + 0x88);
  if (iVar9 == *(int *)((longlong)FVar19 + 0x8c)) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<wchar_t>_>
                      (0x202,(ForElementType<wchar_t> *)FVar19,(int *)((longlong)FVar19 + 0x8c));
  }
  *(int *)((longlong)FVar19 + 0x88) = iVar9 + 1;
  if (*(ForElementType<wchar_t> *)((longlong)FVar19 + 0x80) != (ForElementType<wchar_t>)0x0) {
    FVar19 = *(ForElementType<wchar_t> *)((longlong)FVar19 + 0x80);
  }
  *(undefined2 *)((longlong)FVar19 + (longlong)iVar9 * 2) = local_58;
  pwVar21 = *(wint_t **)this;
  pwVar16 = *(wint_t **)(pwVar21 + 0x40);
  if (*(wint_t **)(pwVar21 + 0x40) == (wint_t *)0x0) {
    pwVar16 = pwVar21;
  }
  wVar8 = *pwVar16;
  if ((wVar8 == 0x2d) || (wVar8 == 0x2b)) {
    pwVar16 = pwVar16 + 1;
    wVar8 = *pwVar16;
  }
  bVar5 = false;
  if (wVar8 != 0) {
    wVar8 = *pwVar16;
    do {
      if (wVar8 == 0x2e) {
        if (bVar5) {
          return false;
        }
        bVar5 = true;
      }
      else {
        iVar9 = iswdigit(wVar8);
        if (iVar9 == 0) {
          return false;
        }
      }
      wVar8 = pwVar16[1];
      pwVar16 = pwVar16 + 1;
    } while (wVar8 != 0);
    pwVar21 = *(wint_t **)this;
  }
  FVar17 = *(ForElementType<int> *)((longlong)this + 0x10);
  if ((*(int *)(pwVar21 + 0x44) < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  if (*(wint_t **)(pwVar21 + 0x40) != (wint_t *)0x0) {
    pwVar21 = *(wint_t **)(pwVar21 + 0x40);
  }
  local_54 = 1;
  if (*pwVar21 == 0x2d) {
    local_54 = 0xffffffff;
  }
  FVar1 = *(ForElementType<int> *)((longlong)FVar17 + 0x18);
  FVar10 = FVar17;
  if (FVar1 != (ForElementType<int>)0x0) {
    FVar10 = FVar1;
  }
  if ((ulonglong)FVar10 <= &local_54) {
    FVar10 = FVar17;
    if (FVar1 != (ForElementType<int>)0x0) {
      FVar10 = FVar1;
    }
    if ((&local_54 <
         (undefined4 *)((longlong)FVar10 + (longlong)*(int *)((longlong)FVar17 + 0x24) * 4)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  iVar9 = *(int *)((longlong)FVar17 + 0x20);
  if (iVar9 == *(int *)((longlong)FVar17 + 0x24)) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<5,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                      (0x404,(ForElementType<int> *)FVar17,(int *)((longlong)FVar17 + 0x24));
  }
  *(int *)((longlong)FVar17 + 0x20) = iVar9 + 1;
  if (*(ForElementType<int> *)((longlong)FVar17 + 0x18) != (ForElementType<int>)0x0) {
    FVar17 = *(ForElementType<int> *)((longlong)FVar17 + 0x18);
  }
  *(undefined4 *)((longlong)FVar17 + (longlong)iVar9 * 4) = local_54;
  FVar20 = *(ForElementType<double> *)((longlong)this + 8);
  pwVar14 = *(wchar_t **)this;
  if (*(int *)((ForElementType<double> *)((longlong)FVar20 + 0x30))->InlineData < 4) {
    pwVar15 = *(wchar_t **)(pwVar14 + 0x40);
    if (*(wchar_t **)(pwVar14 + 0x40) == (wchar_t *)0x0) {
      pwVar15 = pwVar14;
    }
    iVar9 = _wtoi(pwVar15);
    local_48[0] = (double)iVar9;
    FVar2 = *(ForElementType<double> *)((longlong)FVar20 + 0x28);
    FVar13 = FVar2;
    if (FVar2 == (ForElementType<double>)0x0) {
      FVar13 = FVar20;
    }
    if ((ulonglong)FVar13 <= local_48) {
      FVar13 = FVar20;
      if (FVar2 != (ForElementType<double>)0x0) {
        FVar13 = FVar2;
      }
      if ((local_48 < (double *)((longlong)FVar13 + (longlong)*(int *)((longlong)FVar20 + 0x34) * 8)
          ) && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
    }
    iVar9 = *(int *)((longlong)FVar20 + 0x30);
    if (iVar9 == *(int *)((longlong)FVar20 + 0x34)) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<5,32,TSizedDefaultAllocator<32>_>::ForElementType<double>_>
                        (0x808,(ForElementType<double> *)FVar20,(int *)((longlong)FVar20 + 0x34));
    }
    *(int *)((longlong)FVar20 + 0x30) = iVar9 + 1;
    dVar28 = local_48[0];
  }
  else {
    iVar9 = *(int *)(pwVar14 + 0x44);
    if (iVar9 != 0) {
      pwVar15 = pwVar14;
      if (*(wchar_t **)(pwVar14 + 0x40) != (wchar_t *)0x0) {
        pwVar15 = *(wchar_t **)(pwVar14 + 0x40);
      }
      uVar18 = 0;
      uVar24 = uVar18;
      uVar27 = uVar18;
      if ((*pwVar15 == L'-') || (*pwVar15 == L'+')) {
        bVar25 = 0;
      }
      else {
        bVar25 = 1;
      }
      do {
        uVar22 = (uint)uVar24;
        uVar23 = uVar22;
        do {
          uVar18 = uVar18 + 1;
          uVar23 = uVar23 + 1;
          if ((longlong)iVar9 <= (longlong)uVar18) break;
          if ((pwVar15[uVar18] == L'-') || (bVar7 = 1, pwVar15[uVar18] == L'+')) {
            bVar7 = 0;
          }
        } while (bVar25 == bVar7);
        if (bVar25 != 0) {
          uVar26 = (uint)uVar27;
          if (uVar26 != uVar22) {
            memmove(pwVar15 + (int)uVar26,pwVar15 + (int)uVar22,(longlong)(int)(uVar23 - uVar22) * 2
                   );
          }
          uVar27 = (ulonglong)(uVar26 + (uVar23 - uVar22));
        }
        bVar25 = bVar25 ^ 1;
        uVar24 = (ulonglong)uVar23;
      } while ((longlong)uVar18 < (longlong)iVar9);
      *(int *)(pwVar14 + 0x44) = (int)uVar27;
    }
    FVar19 = *(ForElementType<wchar_t> *)this;
    local_56 = 0x2e;
    FVar12 = *(ForElementType<wchar_t> *)((longlong)FVar19 + 0x80);
    FVar11 = FVar12;
    if (FVar12 == (ForElementType<wchar_t>)0x0) {
      FVar11 = FVar19;
    }
    if ((ulonglong)FVar11 <= &local_56) {
      if (FVar12 == (ForElementType<wchar_t>)0x0) {
        FVar12 = FVar19;
      }
      if ((&local_56 <
           (undefined2 *)((longlong)FVar12 + (longlong)*(int *)((longlong)FVar19 + 0x8c) * 2)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
    }
    iVar9 = *(int *)((longlong)FVar19 + 0x88);
    if (iVar9 == *(int *)((longlong)FVar19 + 0x8c)) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<wchar_t>_>
                        (0x202,(ForElementType<wchar_t> *)FVar19,(int *)((longlong)FVar19 + 0x8c));
    }
    *(int *)((longlong)FVar19 + 0x88) = iVar9 + 1;
    FVar12 = FVar19;
    if (*(ForElementType<wchar_t> *)((longlong)FVar19 + 0x80) != (ForElementType<wchar_t>)0x0) {
      FVar12 = *(ForElementType<wchar_t> *)((longlong)FVar19 + 0x80);
    }
    memmove((void *)((longlong)FVar12 + 2),(void *)FVar12,(longlong)iVar9 * 2);
    if (*(ForElementType<wchar_t> *)((longlong)FVar19 + 0x80) != (ForElementType<wchar_t>)0x0) {
      FVar19 = *(ForElementType<wchar_t> *)((longlong)FVar19 + 0x80);
    }
    *(undefined2 *)FVar19 = local_56;
    FVar20 = *(ForElementType<double> *)((longlong)this + 8);
    pwVar14 = *(wchar_t **)(*(wchar_t **)this + 0x40);
    if (pwVar14 == (wchar_t *)0x0) {
      pwVar14 = *(wchar_t **)this;
    }
    dVar28 = _wtof(pwVar14);
    local_50 = (double)(float)dVar28;
    FVar2 = *(ForElementType<double> *)((longlong)FVar20 + 0x28);
    FVar13 = FVar2;
    if (FVar2 == (ForElementType<double>)0x0) {
      FVar13 = FVar20;
    }
    if ((ulonglong)FVar13 <= &local_50) {
      FVar13 = FVar20;
      if (FVar2 != (ForElementType<double>)0x0) {
        FVar13 = FVar2;
      }
      if ((&local_50 <
           (double *)((longlong)FVar13 + (longlong)*(int *)((longlong)FVar20 + 0x34) * 8)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
    }
    iVar9 = *(int *)((longlong)FVar20 + 0x30);
    if (iVar9 == *(int *)((longlong)FVar20 + 0x34)) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<5,32,TSizedDefaultAllocator<32>_>::ForElementType<double>_>
                        (0x808,(ForElementType<double> *)FVar20,(int *)((longlong)FVar20 + 0x34));
    }
    *(int *)((longlong)FVar20 + 0x30) = iVar9 + 1;
    dVar28 = local_50;
  }
  pFVar3 = *(ForElementType<wchar_t> **)this;
  if (*(ForElementType<double> *)((longlong)FVar20 + 0x28) != (ForElementType<double>)0x0) {
    FVar20 = *(ForElementType<double> *)((longlong)FVar20 + 0x28);
  }
  *(double *)((longlong)FVar20 + (longlong)iVar9 * 8) = dVar28;
  iVar9 = *(int *)(pFVar3[1].InlineData + 4);
  pFVar3[1].InlineData[0] = '\0';
  pFVar3[1].InlineData[1] = '\0';
  pFVar3[1].InlineData[2] = '\0';
  pFVar3[1].InlineData[3] = '\0';
  if (iVar9 < 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<wchar_t>_>
              (2,2,0,pFVar3,0,(int *)(pFVar3[1].InlineData + 4));
  }
  return true;
}

// Evaluate @ 141938120

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOptional<FTimecode> * __thiscall
UE::Core::Private::FTimecodeParser::Evaluate
          (FTimecodeParser *this,TOptional<FTimecode> *__return_storage_ptr__,
          TStringView<wchar_t> *param_1)

{
  int *piVar1;
  double *pdVar2;
  double dVar3;
  ForElementType<TArray<wchar_t,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>_>_const_*>
  FVar4;
  wchar_t *pwVar5;
  code *pcVar6;
  uint uVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  ForElementType<wchar_t> FVar12;
  TOptional<FTimecode> *pTVar13;
  double *pdVar14;
  ForElementType<wchar_t> FVar15;
  longlong lVar16;
  int *piVar17;
  wchar_t *pwVar18;
  char cVar19;
  ForElementType<TArray<wchar_t,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>_>_const_*>
  FVar20;
  wchar_t *pwVar21;
  undefined1 auStack_1c8 [32];
  wchar_t *local_1a8;
  ForElementType<wchar_t> local_1a0;
  longlong local_198;
  longlong local_190;
  undefined8 local_188;
  char local_178;
  wchar_t local_174 [2];
  int local_170;
  int iStack_16c;
  int iStack_168;
  int iStack_164;
  float local_160;
  undefined4 uStack_15c;
  wchar_t *local_158;
  ForElementType<wchar_t> *local_150;
  double *local_148;
  int *local_140;
  double local_138 [5];
  double *local_110;
  uint local_108;
  undefined4 local_104;
  int local_100 [6];
  int *local_e8;
  int local_e0;
  undefined4 local_dc;
  ForElementType<wchar_t> local_d8;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  pwVar21 = param_1->DataPtr;
  local_150 = &local_d8;
  local_148 = local_138;
  local_d8.SecondaryData = (ForElementType<wchar_t>)0x0;
  cVar19 = '\0';
  local_140 = local_100;
  local_50 = 0;
  bVar9 = false;
  local_4c = 0x40;
  local_110 = (double *)0x0;
  local_108 = 0;
  local_158 = pwVar21 + param_1->Size;
  local_104 = 5;
  local_e8 = (int *)0x0;
  local_e0 = 0;
  local_dc = 5;
  local_178 = '\0';
  if (pwVar21 != local_158) {
LAB_1419381d0:
    uVar7 = local_108;
    FVar12 = (this->AllSeparators).AllocatorInstance.SecondaryData;
    local_174[0] = *pwVar21;
    FVar15 = (ForElementType<wchar_t>)this;
    if (FVar12 != (ForElementType<wchar_t>)0x0) {
      FVar15 = FVar12;
    }
    FVar12 = (ForElementType<wchar_t>)
             ((longlong)FVar15 + (longlong)(this->AllSeparators).ArrayNum * 2);
    for (; FVar15 != FVar12; FVar15 = (ForElementType<wchar_t>)((longlong)FVar15 + 2)) {
      if (*(wchar_t *)FVar15 == local_174[0]) {
        if (((int)local_108 < 0) || ((this->ValueSeparators).ArrayNum <= (int)local_108))
        goto LAB_14193838f;
        iVar10 = (this->ValueSeparators).ArrayNum;
        uVar11 = 0;
        if ((int)local_108 < iVar10) {
          uVar11 = ~local_108 >> 0x1f;
        }
        if (uVar11 == 0) {
          local_1a8 = (wchar_t *)(longlong)(int)local_108;
          local_1a0 = (ForElementType<wchar_t>)(longlong)iVar10;
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar8) {
            pcVar6 = (code *)swi(3);
            pTVar13 = (TOptional<FTimecode> *)(*pcVar6)();
            return pTVar13;
          }
        }
        FVar4 = (this->ValueSeparators).AllocatorInstance.SecondaryData;
        FVar20 = (ForElementType<TArray<wchar_t,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>_>_const_*>
                  )&this->ValueSeparators;
        if (FVar4 != (ForElementType<TArray<wchar_t,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>_>_const_*>
                      )0x0) {
          FVar20 = FVar4;
        }
        pwVar5 = *(wchar_t **)((longlong)FVar20 + (longlong)(int)uVar7 * 8);
        pwVar18 = pwVar5;
        if (*(wchar_t **)(pwVar5 + 4) != (wchar_t *)0x0) {
          pwVar18 = *(wchar_t **)(pwVar5 + 4);
        }
        pwVar5 = pwVar18 + *(int *)(pwVar5 + 8);
        goto joined_r0x00014193837b;
      }
    }
    iVar10 = iswspace(local_174[0]);
    if (iVar10 == 0) {
      FVar12 = (ForElementType<wchar_t>)&local_d8;
      if (local_d8.SecondaryData != (ForElementType<wchar_t>)0x0) {
        FVar12 = local_d8.SecondaryData;
      }
      if ((ulonglong)FVar12 <= local_174) {
        FVar12 = (ForElementType<wchar_t>)&local_d8;
        if (local_d8.SecondaryData != (ForElementType<wchar_t>)0x0) {
          FVar12 = local_d8.SecondaryData;
        }
        if (local_174 < (wchar_t *)((longlong)FVar12 + (longlong)local_4c * 2)) {
          local_190 = (longlong)local_50;
          local_188 = 2;
          local_1a8 = local_174;
          local_1a0 = (ForElementType<wchar_t>)&local_d8;
          if (local_d8.SecondaryData != (ForElementType<wchar_t>)0x0) {
            local_1a0 = local_d8.SecondaryData;
          }
          local_198 = (longlong)local_4c;
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar8) {
            pcVar6 = (code *)swi(3);
            pTVar13 = (TOptional<FTimecode> *)(*pcVar6)();
            return pTVar13;
          }
        }
      }
      if (local_50 == local_4c) {
        local_50 = ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<wchar_t>_>
                             (0x202,&local_d8,&local_4c);
      }
      lVar16 = (longlong)local_50;
      FVar12 = (ForElementType<wchar_t>)&local_d8;
      if (local_d8.SecondaryData != (ForElementType<wchar_t>)0x0) {
        FVar12 = local_d8.SecondaryData;
      }
      local_50 = local_50 + 1;
      *(wchar_t *)((longlong)FVar12 + lVar16 * 2) = local_174[0];
    }
    goto LAB_1419383fb;
  }
LAB_1419386c1:
  __return_storage_ptr__->bIsSet = false;
  if (local_e8 != (int *)0x0) {
    FMemory::Free(local_e8);
  }
  if (local_110 == (double *)0x0) goto LAB_1419386e1;
  goto LAB_1419386dc;
joined_r0x00014193837b:
  if (pwVar18 == pwVar5) goto LAB_14193838f;
  if (*pwVar18 == local_174[0]) goto LAB_1419383b3;
  pwVar18 = pwVar18 + 1;
  goto joined_r0x00014193837b;
LAB_1419383b3:
  if ((local_50 == 0) ||
     (bVar8 = `UE::Core::Private::FTimecodeParser::Evaluate'::__l2::<lambda_1>::operator()
                        (&local_150), !bVar8)) goto LAB_14193838f;
  FVar12 = (this->DropFrameSeparators).AllocatorInstance.SecondaryData;
  FVar15 = (ForElementType<wchar_t>)&this->DropFrameSeparators;
  if (FVar12 != (ForElementType<wchar_t>)0x0) {
    FVar15 = FVar12;
  }
  FVar12 = (ForElementType<wchar_t>)
           ((longlong)FVar15 + (longlong)(this->DropFrameSeparators).ArrayNum * 2);
  for (; cVar19 = local_178, FVar15 != FVar12;
      FVar15 = (ForElementType<wchar_t>)((longlong)FVar15 + 2)) {
    if (*(wchar_t *)FVar15 == local_174[0]) {
      if ((uVar7 < 3) && (bVar9 = true, uVar7 == 2)) {
        local_178 = '\x01';
        cVar19 = '\x01';
      }
      break;
    }
  }
LAB_1419383fb:
  pwVar21 = pwVar21 + 1;
  if (pwVar21 == local_158) goto LAB_141938426;
  goto LAB_1419381d0;
LAB_141938426:
  if ((!bVar9) || (cVar19 != '\0')) {
    if ((local_50 == 0) ||
       (bVar9 = `UE::Core::Private::FTimecodeParser::Evaluate'::__l2::<lambda_1>::operator()
                          (&local_150), !bVar9)) goto LAB_1419386c1;
    if (local_108 - 4 < 2) {
      piVar17 = local_100;
      if (local_e8 != (int *)0x0) {
        piVar17 = local_e8;
      }
      piVar1 = piVar17 + local_e0;
      for (; piVar17 != piVar1; piVar17 = piVar17 + 1) {
        if (*piVar17 == -1) {
          pdVar14 = local_138;
          if (local_110 != (double *)0x0) {
            pdVar14 = local_110;
          }
          pdVar2 = pdVar14 + (int)local_108;
          if (pdVar14 == pdVar2) goto LAB_1419384bf;
          goto LAB_1419384b0;
        }
      }
      goto LAB_1419384fa;
    }
  }
LAB_14193838f:
  __return_storage_ptr__->bIsSet = false;
  goto joined_r0x0001419386ab;
  while (pdVar14 = pdVar14 + 1, pdVar14 != pdVar2) {
LAB_1419384b0:
    if (*pdVar14 <= 0.0 && *pdVar14 != 0.0) goto LAB_1419384fa;
  }
LAB_1419384bf:
  pdVar14 = local_138;
  if (local_110 != (double *)0x0) {
    pdVar14 = local_110;
  }
  pdVar2 = pdVar14 + (int)local_108;
  for (; pdVar14 != pdVar2; pdVar14 = pdVar14 + 1) {
    dVar3 = *pdVar14;
    if (0.0 < dVar3) {
      *pdVar14 = (double)CONCAT44((uint)((ulonglong)dVar3 >> 0x20) ^
                                  __xmm_80000000000000008000000000000000._4_4_,
                                  SUB84(dVar3,0) ^ (uint)__xmm_80000000000000008000000000000000);
      break;
    }
  }
LAB_1419384fa:
  local_160 = 0.0;
  if ((int)local_108 < 1) {
    local_1a0 = (ForElementType<wchar_t>)(longlong)(int)local_108;
    local_1a8 = (wchar_t *)0x0;
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar6 = (code *)swi(3);
      pTVar13 = (TOptional<FTimecode> *)(*pcVar6)();
      return pTVar13;
    }
  }
  pdVar14 = local_138;
  if (local_110 != (double *)0x0) {
    pdVar14 = local_110;
  }
  local_170 = (int)*pdVar14;
  if ((int)local_108 < 2) {
    local_1a0 = (ForElementType<wchar_t>)(longlong)(int)local_108;
    local_1a8 = (wchar_t *)&DAT_00000001;
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar6 = (code *)swi(3);
      pTVar13 = (TOptional<FTimecode> *)(*pcVar6)();
      return pTVar13;
    }
  }
  pdVar14 = local_138;
  if (local_110 != (double *)0x0) {
    pdVar14 = local_110;
  }
  iStack_16c = (int)pdVar14[1];
  if ((int)local_108 < 3) {
    local_1a0 = (ForElementType<wchar_t>)(longlong)(int)local_108;
    local_1a8 = (wchar_t *)&DAT_00000002;
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar6 = (code *)swi(3);
      pTVar13 = (TOptional<FTimecode> *)(*pcVar6)();
      return pTVar13;
    }
  }
  pdVar14 = local_138;
  if (local_110 != (double *)0x0) {
    pdVar14 = local_110;
  }
  iStack_168 = (int)pdVar14[2];
  if ((int)local_108 < 4) {
    local_1a0 = (ForElementType<wchar_t>)(longlong)(int)local_108;
    local_1a8 = (wchar_t *)&DAT_00000003;
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar6 = (code *)swi(3);
      pTVar13 = (TOptional<FTimecode> *)(*pcVar6)();
      return pTVar13;
    }
  }
  pdVar14 = local_138;
  if (local_110 != (double *)0x0) {
    pdVar14 = local_110;
  }
  iStack_164 = (int)pdVar14[3];
  if (4 < (int)local_108) {
    pdVar14 = local_138;
    if (local_110 != (double *)0x0) {
      pdVar14 = local_110;
    }
    local_160 = (float)pdVar14[4];
    if (__real_3f800000 <= (float)pdVar14[4]) {
      local_160 = __real_3f800000;
    }
    if (local_160 <= __real_bf800000) {
      local_160 = __real_bf800000;
    }
  }
  uStack_15c = CONCAT31(uStack_15c._1_3_,cVar19);
  __return_storage_ptr__->bIsSet = true;
  (__return_storage_ptr__->TypedValue).Hours = local_170;
  (__return_storage_ptr__->TypedValue).Minutes = iStack_16c;
  (__return_storage_ptr__->TypedValue).Seconds = iStack_168;
  (__return_storage_ptr__->TypedValue).Frames = iStack_164;
  (__return_storage_ptr__->TypedValue).Subframe = local_160;
  (__return_storage_ptr__->TypedValue).bDropFrameFormat = (bool)cVar19;
  *(undefined3 *)&(__return_storage_ptr__->TypedValue).field_0x15 = uStack_15c._1_3_;
joined_r0x0001419386ab:
  if (local_e8 != (int *)0x0) {
    FMemory::Free(local_e8);
  }
  if (local_110 != (double *)0x0) {
LAB_1419386dc:
    FMemory::Free(local_110);
  }
LAB_1419386e1:
  if (local_d8.SecondaryData != (ForElementType<wchar_t>)0x0) {
    FMemory::Free((void *)local_d8.SecondaryData);
  }
  return __return_storage_ptr__;
}

