// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AssetRegistry
// Functions: 4

// TestGenericSet<4> @ 142b497a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000142b49807) */
/* WARNING: Removing unreachable block (ram,0x000142b4982c) */
/* WARNING: Removing unreachable block (ram,0x000142b49945) */
/* WARNING: Removing unreachable block (ram,0x000142b4996a) */

void __thiscall FPropertyCombinationSetTest::TestGenericSet<4>(FPropertyCombinationSetTest *this)

{
  code *pcVar1;
  byte bVar2;
  TPropertyCombinationSet<4> *pTVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  ulong64 uVar10;
  ForElementType<unsigned_int> FVar11;
  ForElementType<unsigned_int> FVar12;
  ulonglong uVar13;
  ForElementType<unsigned_int> FVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  ulonglong uVar19;
  uint *puVar20;
  uint uVar21;
  int iVar22;
  ulonglong uVar23;
  FAutomationTestBase *pFVar24;
  uint *puVar25;
  undefined1 auStackY_288 [32];
  FIdentityFunctor local_258;
  TPropertyCombinationSet<4> local_254 [4];
  uint local_244;
  uint local_240;
  uint local_23c;
  uint local_238 [2];
  FAutomationTestBase *local_230;
  uint local_228;
  uint local_224;
  uint local_220;
  uint local_21c;
  TPropertyCombinationSet<4> *local_218;
  uint local_210;
  uint local_208 [6];
  uint local_1f0 [2];
  FString local_1e8;
  FString local_1d8;
  FString local_1c8;
  FString local_1b8;
  TBitArray<FDefaultBitArrayAllocator> local_1a8;
  undefined1 local_188 [16];
  ForElementType<unsigned_int> local_178;
  int local_170;
  int local_16c;
  TBitArray<FDefaultBitArrayAllocator> local_168;
  TBitArray<FDefaultBitArrayAllocator> local_148;
  TBitArray<FDefaultBitArrayAllocator> local_128;
  TBitArray<FDefaultBitArrayAllocator> local_108;
  TBitArray<FDefaultBitArrayAllocator> local_e8;
  TBitArray<FDefaultBitArrayAllocator> local_c8;
  uint local_a8 [10];
  uint local_80 [10];
  uint local_58 [10];
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_288;
  local_208[4] = 1;
  local_230 = (FAutomationTestBase *)this;
  FAutomationTestBase::TestTrue((FAutomationTestBase *)this,L"Constructor stores value 0",true);
  uVar21 = 1;
  uVar16 = 2;
  uVar19 = 1;
  do {
    FAutomationTestBase::TestFalse
              ((FAutomationTestBase *)this,L"Generic Constructor is empty other than 0",
               (local_208[(uVar19 >> 5) + 4] & uVar16) != 0);
    uVar21 = uVar21 + 1;
    uVar16 = uVar16 << 1 | (uint)((int)uVar16 < 0);
    uVar19 = uVar19 + 1;
  } while (uVar21 < 0x10);
  uVar21 = 0;
  uVar16 = 1;
  local_218 = (TPropertyCombinationSet<4> *)0x0;
  do {
    pTVar3 = local_218;
    uVar19 = 0;
    local_254[3].Storage[0] = (uint  [1])1;
    if ((0xf < uVar21) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("PropertyCombination <= MaxValue",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\PropertyCombinationSet.h"
                           ,0x54,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    uVar5 = local_254[((ulonglong)pTVar3 >> 5) + 3].Storage[0];
    if ((uVar5 & uVar16) == 0) {
      uVar17 = 1;
      do {
        if (((uVar21 & uVar17) == 0) &&
           (bVar4 = TPropertyCombinationSet<4>::IsRedundantPropertyCombinationRecursive
                              (local_254 + 3,uVar17 | uVar21,2), bVar4)) goto LAB_142b49930;
        uVar17 = uVar17 * 2;
      } while (uVar17 < 0x10);
      local_254[((ulonglong)pTVar3 >> 5) + 3].Storage[0] = uVar16 | uVar5;
      uVar5 = 1;
      do {
        uVar17 = uVar5 * 2;
        if ((uVar21 & uVar5) != 0) {
          uVar5 = ~uVar5 & uVar21;
          local_254[(ulonglong)(uVar5 >> 5) + 3].Storage[0] =
               local_254[(ulonglong)(uVar5 >> 5) + 3].Storage[0] & ~(1 << ((byte)uVar5 & 0x1f));
          TPropertyCombinationSet<4>::RemoveRedundantPropertyCombinationsRecursive
                    (local_254 + 3,uVar5,uVar17);
        }
        uVar5 = uVar17;
      } while (uVar17 < 0x10);
    }
LAB_142b49930:
    local_208[5] = (uint)local_254[3].Storage[0];
    uVar5 = 1;
    uVar23 = uVar19;
    do {
      uVar17 = local_254[(uVar23 >> 5) + 3].Storage[0];
      if ((0xf < (uint)uVar19) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Value <= MaxValue",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\PropertyCombinationSet.h"
                             ,0x67,L""), bVar4)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pFVar24 = local_230;
      if (((local_1f0[(uVar23 >> 5) - 1] & uVar5) != 0) != ((uVar17 & uVar5) != 0)) {
        pcVar1 = *(code **)(local_230->_padding_ + 0x28);
        ::FString::PrintfImpl(&local_1e8,L"%s: The two values are not equal.");
        (*pcVar1)(pFVar24,&local_1e8,0);
        if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
        }
      }
      uVar17 = (uint)uVar19 + 1;
      uVar19 = (ulonglong)uVar17;
      uVar5 = uVar5 << 1 | (uint)((int)uVar5 < 0);
      uVar23 = uVar23 + 1;
    } while (uVar17 < 0x10);
    uVar21 = uVar21 + 1;
    uVar16 = uVar16 << 1 | (uint)((int)uVar16 < 0);
    local_218 = (TPropertyCombinationSet<4> *)((longlong)local_218 + 1);
    uVar5 = 0;
  } while (uVar21 < 0x10);
  uVar16 = 0;
  uVar19 = 0;
  do {
    local_23c = 1;
    do {
      local_e8.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
      local_e8.NumBits = 0;
      local_e8.MaxBits = 0x80;
      iVar6 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized(&local_e8,uVar5);
      TBitArray<FDefaultBitArrayAllocator>::SetRange(&local_e8,iVar6,uVar5,true);
      iVar6 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized(&local_e8,0x10);
      if (((iVar6 < 0) || (local_e8.NumBits < iVar6 + 0x10)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index >= 0 && NumBitsToSet >= 0 && Index + NumBitsToSet <= NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x3bc,L""), bVar4)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      FVar12 = (ForElementType<unsigned_int>)&local_e8;
      if (local_e8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar12 = local_e8.AllocatorInstance.SecondaryData;
      }
      FBitArrayMemory::MemmoveBitsWordOrder((uint *)FVar12,iVar6,&local_23c,0,0x10);
      local_208[0] = 1;
      if ((local_e8.NumBits < (int)(uVar5 + 0x10)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index >= 0 && NumBitsToGet >= 0 && Index + NumBitsToGet <= NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x3df,L""), bVar4)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      FVar12 = (ForElementType<unsigned_int>)&local_e8;
      if (local_e8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar12 = local_e8.AllocatorInstance.SecondaryData;
      }
      FBitArrayMemory::MemmoveBitsWordOrder(local_208,0,(uint *)FVar12,uVar5,0x10);
      pFVar24 = local_230;
      uVar17 = 1;
      uVar23 = uVar19;
      uVar21 = uVar16;
      do {
        uVar18 = local_23c & uVar17;
        if ((0xf < uVar21) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Value <= MaxValue",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\PropertyCombinationSet.h"
                               ,0x67,L""), bVar4)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if (((local_208[uVar23 >> 5] & uVar17) != 0) != (uVar18 != 0)) {
          pcVar1 = *(code **)(pFVar24->_padding_ + 0x28);
          ::FString::PrintfImpl(&local_1d8,L"%s: The two values are not equal.");
          (*pcVar1)(pFVar24,&local_1d8,0);
          if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
          }
        }
        uVar21 = uVar21 + 1;
        uVar17 = uVar17 << 1 | (uint)((int)uVar17 < 0);
        uVar23 = uVar23 + 1;
      } while (uVar21 < 0x10);
      if (local_e8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_e8.AllocatorInstance.SecondaryData);
      }
      pFVar24 = local_230;
      local_23c = local_23c + 1;
    } while (local_23c < 0x10000);
    uVar5 = uVar5 + 1;
    uVar23 = uVar19;
  } while (uVar5 < 0x20);
  do {
    local_224 = 1;
    iVar6 = (int)uVar23;
    iVar22 = iVar6 + 0x10;
    do {
      local_128.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
      local_128.NumBits = 0;
      local_128.MaxBits = 0x80;
      iVar7 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized(&local_128,iVar6);
      TBitArray<FDefaultBitArrayAllocator>::SetRange(&local_128,iVar7,iVar6,true);
      iVar7 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized(&local_128,0x10);
      if (((iVar7 < 0) || (local_128.NumBits < iVar7 + 0x10)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index >= 0 && NumBitsToSet >= 0 && Index + NumBitsToSet <= NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x3bc,L""), bVar4)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      FVar12 = (ForElementType<unsigned_int>)&local_128;
      if (local_128.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar12 = local_128.AllocatorInstance.SecondaryData;
      }
      FBitArrayMemory::MemmoveBitsWordOrder((uint *)FVar12,iVar7,&local_224,0,0x10);
      local_228 = 1;
      if ((local_128.NumBits < iVar22) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index >= 0 && NumBitsToGet >= 0 && Index + NumBitsToGet <= NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x3df,L""), bVar4)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      FVar12 = (ForElementType<unsigned_int>)&local_128;
      if (local_128.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar12 = local_128.AllocatorInstance.SecondaryData;
      }
      FBitArrayMemory::MemmoveBitsWordOrder(&local_228,0,(uint *)FVar12,iVar6,0x10);
      local_108.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
      local_108.NumBits = 0;
      local_108.MaxBits = 0x80;
      local_148.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
      local_148.NumBits = 0;
      local_148.MaxBits = 0x80;
      iVar7 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized(&local_108,iVar6);
      TBitArray<FDefaultBitArrayAllocator>::SetRange(&local_108,iVar7,iVar6,true);
      iVar7 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized(&local_108,0x10);
      TBitArray<FDefaultBitArrayAllocator>::SetRange(&local_108,iVar7,0x10,false);
      iVar7 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized(&local_148,iVar6);
      TBitArray<FDefaultBitArrayAllocator>::SetRange(&local_148,iVar7,iVar6,true);
      iVar7 = local_148.NumBits;
      if ((local_148.NumBits == 0) ||
         (iVar9 = local_148.NumBits + 0x10,
         (int)(local_148.NumBits + 0xf + (local_148.NumBits + 0xf >> 0x1f & 0x1fU)) >> 5 !=
         (int)((local_148.NumBits + -1 >> 0x1f & 0x1fU) + local_148.NumBits + -1) >> 5)) {
        if (local_148.MaxBits < local_148.NumBits + 0x10) {
          uVar21 = local_148.MaxBits + 0x1fU >> 5;
          uVar5 = local_148.NumBits + 0x2fU >> 5;
          if (uVar5 < 5) {
            local_148.MaxBits = 4;
          }
          else {
            uVar23 = (ulonglong)uVar5;
            if (uVar21 < 5) {
              uVar21 = uVar16;
            }
            if (uVar21 == 0) {
              uVar13 = 4;
              if (4 < uVar23) {
                uVar13 = uVar23;
              }
            }
            else {
              uVar13 = ((ulonglong)uVar5 * 3 >> 3) + 0x10 + uVar23;
            }
            uVar10 = FMemory::QuantizeSize(uVar13 * 4,0);
            local_148.MaxBits = (int)(uVar10 >> 2);
            if (local_148.MaxBits < (int)uVar5) {
              local_148.MaxBits = 0x7fffffff;
            }
          }
          local_148.MaxBits = local_148.MaxBits << 5;
          TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_148,local_148.NumBits);
        }
        local_148.NumBits = local_148.NumBits + 0x10;
        uVar5 = local_148.NumBits >> 0x1f & 0x1f;
        uVar21 = local_148.NumBits + uVar5;
        iVar8 = (uVar21 & 0x1f) - uVar5;
        iVar9 = local_148.NumBits;
        if (iVar8 != 0) {
          FVar12 = (ForElementType<unsigned_int>)&local_148;
          if (local_148.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
            FVar12 = local_148.AllocatorInstance.SecondaryData;
          }
          puVar20 = (uint *)((longlong)FVar12 + (longlong)((int)uVar21 >> 5) * 4);
          *puVar20 = *puVar20 & 0xffffffffU >> (0x20U - (char)iVar8 & 0x1f);
          iVar9 = local_148.NumBits;
        }
      }
      local_148.NumBits = iVar9;
      TBitArray<FDefaultBitArrayAllocator>::SetRange(&local_148,iVar7,0x10,true);
      if ((local_108.NumBits < iVar22) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index >= 0 && NumBitsToSet >= 0 && Index + NumBitsToSet <= NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x3bc,L""), bVar4)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      FVar12 = (ForElementType<unsigned_int>)&local_108;
      if (local_108.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar12 = local_108.AllocatorInstance.SecondaryData;
      }
      FBitArrayMemory::MemmoveBitsWordOrder((uint *)FVar12,iVar6,&local_228,0,0x10);
      if ((local_148.NumBits < iVar22) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index >= 0 && NumBitsToSet >= 0 && Index + NumBitsToSet <= NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x3bc,L""), bVar4)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      FVar12 = (ForElementType<unsigned_int>)&local_148;
      if (local_148.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar12 = local_148.AllocatorInstance.SecondaryData;
      }
      FBitArrayMemory::MemmoveBitsWordOrder((uint *)FVar12,iVar6,&local_228,0,0x10);
      iVar7 = local_128.NumBits;
      FVar12 = local_128.AllocatorInstance.SecondaryData;
      if (local_108.NumBits == local_128.NumBits) {
        FVar14 = (ForElementType<unsigned_int>)&local_128;
        if (local_128.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FVar14 = local_128.AllocatorInstance.SecondaryData;
        }
        FVar11 = (ForElementType<unsigned_int>)&local_108;
        if (local_108.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FVar11 = local_108.AllocatorInstance.SecondaryData;
        }
        iVar9 = memcmp((void *)FVar11,(void *)FVar14,
                       (ulonglong)(local_108.NumBits + 0x1fU >> 5) << 2);
        if ((iVar9 != 0) || (local_148.NumBits != iVar7)) goto LAB_142b4a017;
        FVar14 = (ForElementType<unsigned_int>)&local_128;
        if (FVar12 != (ForElementType<unsigned_int>)0x0) {
          FVar14 = FVar12;
        }
        FVar12 = (ForElementType<unsigned_int>)&local_148;
        if (local_148.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FVar12 = local_148.AllocatorInstance.SecondaryData;
        }
        iVar7 = memcmp((void *)FVar12,(void *)FVar14,
                       (ulonglong)(local_148.NumBits + 0x1fU >> 5) << 2);
        if (iVar7 != 0) goto LAB_142b4a017;
        bVar4 = true;
      }
      else {
LAB_142b4a017:
        bVar4 = false;
      }
      FAutomationTestBase::TestTrue(pFVar24,L"Generic Save to archive bits",bVar4);
      if (local_148.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_148.AllocatorInstance.SecondaryData);
      }
      if (local_108.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_108.AllocatorInstance.SecondaryData);
      }
      if (local_128.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_128.AllocatorInstance.SecondaryData);
      }
      local_224 = local_224 + 1;
    } while (local_224 < 0x10000);
    uVar23 = (ulonglong)(iVar6 + 1U);
  } while (iVar6 + 1U < 0x20);
  local_238[0] = 1;
  do {
    local_c8.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_c8.NumBits = 0;
    local_c8.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::SetRange(&local_c8,0,0,true);
    iVar6 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized(&local_c8,0x10);
    if (((iVar6 < 0) || (local_c8.NumBits < iVar6 + 0x10)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index >= 0 && NumBitsToSet >= 0 && Index + NumBitsToSet <= NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x3bc,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FVar12 = (ForElementType<unsigned_int>)&local_c8;
    if (local_c8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar12 = local_c8.AllocatorInstance.SecondaryData;
    }
    FBitArrayMemory::MemmoveBitsWordOrder((uint *)FVar12,iVar6,local_238,0,0x10);
    if ((local_c8.NumBits < 0x10) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index >= 0 && NumBitsToGet >= 0 && Index + NumBitsToGet <= NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x3df,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FVar12 = (ForElementType<unsigned_int>)&local_c8;
    if (local_c8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar12 = local_c8.AllocatorInstance.SecondaryData;
    }
    FBitArrayMemory::MemmoveBitsWordOrder(local_58,0,(uint *)FVar12,0,0x10);
    local_1f0[0] = local_58[0];
    uVar5 = 1;
    uVar23 = uVar19;
    uVar21 = uVar16;
    do {
      uVar17 = local_238[0] & uVar5;
      if ((0xf < uVar21) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Value <= MaxValue",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\PropertyCombinationSet.h"
                             ,0x67,L""), bVar4)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (((local_1f0[uVar23 >> 5] & uVar5) != 0) != (uVar17 != 0)) {
        pcVar1 = *(code **)(pFVar24->_padding_ + 0x28);
        ::FString::PrintfImpl(&local_1c8,L"%s: The two values are not equal.");
        (*pcVar1)(pFVar24);
        if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
        }
      }
      uVar21 = uVar21 + 1;
      uVar5 = uVar5 << 1 | (uint)((int)uVar5 < 0);
      uVar23 = uVar23 + 1;
    } while (uVar21 < 0x10);
    if (local_c8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_c8.AllocatorInstance.SecondaryData);
    }
    local_238[0] = local_238[0] + 1;
  } while (local_238[0] < 0x10000);
  local_220 = 1;
  do {
    local_168.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_168.NumBits = 0;
    local_168.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::SetRange(&local_168,0,0,true);
    iVar6 = local_168.NumBits;
    if ((local_168.NumBits == 0) ||
       (iVar22 = local_168.NumBits + 0x10,
       (int)(local_168.NumBits + 0xf + (local_168.NumBits + 0xf >> 0x1f & 0x1fU)) >> 5 !=
       (int)((local_168.NumBits + -1 >> 0x1f & 0x1fU) + local_168.NumBits + -1) >> 5)) {
      if (local_168.MaxBits < local_168.NumBits + 0x10) {
        uVar21 = local_168.MaxBits + 0x1fU >> 5;
        uVar5 = local_168.NumBits + 0x2fU >> 5;
        if (uVar5 < 5) {
          local_168.MaxBits = 4;
        }
        else {
          uVar19 = (ulonglong)uVar5;
          if (uVar21 < 5) {
            uVar21 = uVar16;
          }
          if (uVar21 == 0) {
            uVar23 = 4;
            if (4 < uVar19) {
              uVar23 = uVar19;
            }
          }
          else {
            uVar23 = ((ulonglong)uVar5 * 3 >> 3) + 0x10 + uVar19;
          }
          uVar10 = FMemory::QuantizeSize(uVar23 * 4,0);
          local_168.MaxBits = (int)(uVar10 >> 2);
          if (local_168.MaxBits < (int)uVar5) {
            local_168.MaxBits = 0x7fffffff;
          }
        }
        local_168.MaxBits = local_168.MaxBits << 5;
        TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_168,local_168.NumBits);
      }
      local_168.NumBits = local_168.NumBits + 0x10;
      uVar5 = local_168.NumBits >> 0x1f & 0x1f;
      uVar21 = local_168.NumBits + uVar5;
      iVar7 = (uVar21 & 0x1f) - uVar5;
      iVar22 = local_168.NumBits;
      if (iVar7 != 0) {
        FVar12 = (ForElementType<unsigned_int>)&local_168;
        if (local_168.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FVar12 = local_168.AllocatorInstance.SecondaryData;
        }
        puVar20 = (uint *)((longlong)FVar12 + (longlong)((int)uVar21 >> 5) * 4);
        *puVar20 = *puVar20 & 0xffffffffU >> (0x20U - (char)iVar7 & 0x1f);
        iVar22 = local_168.NumBits;
      }
    }
    local_168.NumBits = iVar22;
    if (((iVar6 < 0) || (local_168.NumBits < iVar6 + 0x10)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index >= 0 && NumBitsToSet >= 0 && Index + NumBitsToSet <= NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x3bc,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FVar12 = (ForElementType<unsigned_int>)&local_168;
    if (local_168.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar12 = local_168.AllocatorInstance.SecondaryData;
    }
    FBitArrayMemory::MemmoveBitsWordOrder((uint *)FVar12,iVar6,&local_220,0,0x10);
    local_208[1] = 1;
    if ((local_168.NumBits < 0x10) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index >= 0 && NumBitsToGet >= 0 && Index + NumBitsToGet <= NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x3df,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FVar12 = (ForElementType<unsigned_int>)&local_168;
    if (local_168.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar12 = local_168.AllocatorInstance.SecondaryData;
    }
    FBitArrayMemory::MemmoveBitsWordOrder(local_208 + 1,0,(uint *)FVar12,0,0x10);
    local_178 = (ForElementType<unsigned_int>)0x0;
    local_170 = 0;
    local_16c = 0x80;
    local_1a8.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_1a8.NumBits = 0;
    local_1a8.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::SetRange
              ((TBitArray<FDefaultBitArrayAllocator> *)local_188,0,0,true);
    iVar6 = local_170;
    if ((local_170 == 0) ||
       (iVar22 = local_170 + 0x10,
       (int)(local_170 + 0xf + (local_170 + 0xf >> 0x1f & 0x1fU)) >> 5 !=
       (int)((local_170 + -1 >> 0x1f & 0x1fU) + local_170 + -1) >> 5)) {
      if (local_16c < local_170 + 0x10) {
        uVar21 = local_16c + 0x1fU >> 5;
        uVar5 = local_170 + 0x2fU >> 5;
        if (uVar5 < 5) {
          local_16c = 4;
        }
        else {
          uVar19 = (ulonglong)uVar5;
          if (uVar21 < 5) {
            uVar21 = uVar16;
          }
          if (uVar21 == 0) {
            uVar23 = 4;
            if (4 < uVar19) {
              uVar23 = uVar19;
            }
          }
          else {
            uVar23 = ((ulonglong)uVar5 * 3 >> 3) + 0x10 + uVar19;
          }
          uVar10 = FMemory::QuantizeSize(uVar23 * 4,0);
          local_16c = (int)(uVar10 >> 2);
          if (local_16c < (int)uVar5) {
            local_16c = 0x7fffffff;
          }
        }
        local_16c = local_16c << 5;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)local_188,local_170);
      }
      local_170 = local_170 + 0x10;
      uVar5 = local_170 >> 0x1f & 0x1f;
      uVar21 = local_170 + uVar5;
      iVar7 = (uVar21 & 0x1f) - uVar5;
      iVar22 = local_170;
      if (iVar7 != 0) {
        FVar12 = (ForElementType<unsigned_int>)local_188;
        if (local_178 != (ForElementType<unsigned_int>)0x0) {
          FVar12 = local_178;
        }
        puVar20 = (uint *)((longlong)FVar12 + (longlong)((int)uVar21 >> 5) * 4);
        *puVar20 = *puVar20 & 0xffffffffU >> (0x20U - (char)iVar7 & 0x1f);
        iVar22 = local_170;
      }
    }
    local_170 = iVar22;
    TBitArray<FDefaultBitArrayAllocator>::SetRange
              ((TBitArray<FDefaultBitArrayAllocator> *)local_188,iVar6,0x10,false);
    TBitArray<FDefaultBitArrayAllocator>::SetRange(&local_1a8,local_1a8.NumBits,0,true);
    iVar6 = local_1a8.NumBits;
    if ((local_1a8.NumBits == 0) ||
       (iVar22 = local_1a8.NumBits + 0x10,
       (int)(local_1a8.NumBits + 0xf + (local_1a8.NumBits + 0xf >> 0x1f & 0x1fU)) >> 5 !=
       (int)((local_1a8.NumBits + -1 >> 0x1f & 0x1fU) + local_1a8.NumBits + -1) >> 5)) {
      if (local_1a8.MaxBits < local_1a8.NumBits + 0x10) {
        uVar21 = local_1a8.MaxBits + 0x1fU >> 5;
        uVar5 = local_1a8.NumBits + 0x2fU >> 5;
        if (uVar5 < 5) {
          local_1a8.MaxBits = 4;
        }
        else {
          uVar19 = (ulonglong)uVar5;
          if (uVar21 < 5) {
            uVar21 = uVar16;
          }
          if (uVar21 == 0) {
            uVar23 = 4;
            if (4 < uVar19) {
              uVar23 = uVar19;
            }
          }
          else {
            uVar23 = ((ulonglong)uVar5 * 3 >> 3) + 0x10 + uVar19;
          }
          uVar10 = FMemory::QuantizeSize(uVar23 * 4,0);
          local_1a8.MaxBits = (int)(uVar10 >> 2);
          if (local_1a8.MaxBits < (int)uVar5) {
            local_1a8.MaxBits = 0x7fffffff;
          }
        }
        local_1a8.MaxBits = local_1a8.MaxBits << 5;
        TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_1a8,local_1a8.NumBits);
      }
      local_1a8.NumBits = local_1a8.NumBits + 0x10;
      uVar5 = local_1a8.NumBits >> 0x1f & 0x1f;
      uVar21 = local_1a8.NumBits + uVar5;
      iVar7 = (uVar21 & 0x1f) - uVar5;
      iVar22 = local_1a8.NumBits;
      if (iVar7 != 0) {
        FVar12 = (ForElementType<unsigned_int>)&local_1a8;
        if (local_1a8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FVar12 = local_1a8.AllocatorInstance.SecondaryData;
        }
        puVar20 = (uint *)((longlong)FVar12 + (longlong)((int)uVar21 >> 5) * 4);
        *puVar20 = *puVar20 & 0xffffffffU >> (0x20U - (char)iVar7 & 0x1f);
        iVar22 = local_1a8.NumBits;
      }
    }
    local_1a8.NumBits = iVar22;
    TBitArray<FDefaultBitArrayAllocator>::SetRange(&local_1a8,iVar6,0x10,true);
    if ((local_170 < 0x10) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index >= 0 && NumBitsToGet >= 0 && Index + NumBitsToGet <= NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x3df,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FVar12 = (ForElementType<unsigned_int>)local_188;
    if (local_178 != (ForElementType<unsigned_int>)0x0) {
      FVar12 = local_178;
    }
    FBitArrayMemory::MemmoveBitsWordOrder(local_a8,0,(uint *)FVar12,0,0x10);
    if ((local_1a8.NumBits < 0x10) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index >= 0 && NumBitsToGet >= 0 && Index + NumBitsToGet <= NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x3df,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FVar12 = (ForElementType<unsigned_int>)&local_1a8;
    if (local_1a8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar12 = local_1a8.AllocatorInstance.SecondaryData;
    }
    FBitArrayMemory::MemmoveBitsWordOrder(local_80,0,(uint *)FVar12,0,0x10);
    local_a8[0] = local_208[1];
    local_80[0] = local_208[1];
    if ((local_170 < 0x10) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index >= 0 && NumBitsToSet >= 0 && Index + NumBitsToSet <= NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x3bc,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FVar12 = (ForElementType<unsigned_int>)local_188;
    if (local_178 != (ForElementType<unsigned_int>)0x0) {
      FVar12 = local_178;
    }
    FBitArrayMemory::MemmoveBitsWordOrder((uint *)FVar12,0,local_a8,0,0x10);
    if ((local_1a8.NumBits < 0x10) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index >= 0 && NumBitsToSet >= 0 && Index + NumBitsToSet <= NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x3bc,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FVar12 = (ForElementType<unsigned_int>)&local_1a8;
    if (local_1a8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar12 = local_1a8.AllocatorInstance.SecondaryData;
    }
    FBitArrayMemory::MemmoveBitsWordOrder((uint *)FVar12,0,local_80,0,0x10);
    iVar6 = local_168.NumBits;
    FVar12 = local_168.AllocatorInstance.SecondaryData;
    if (local_170 == local_168.NumBits) {
      FVar14 = (ForElementType<unsigned_int>)&local_168;
      if (local_168.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar14 = local_168.AllocatorInstance.SecondaryData;
      }
      FVar11 = (ForElementType<unsigned_int>)local_188;
      if (local_178 != (ForElementType<unsigned_int>)0x0) {
        FVar11 = local_178;
      }
      iVar22 = memcmp((void *)FVar11,(void *)FVar14,(ulonglong)(local_170 + 0x1fU >> 5) << 2);
      if ((iVar22 != 0) || (local_1a8.NumBits != iVar6)) goto LAB_142b4a855;
      FVar14 = (ForElementType<unsigned_int>)&local_168;
      if (FVar12 != (ForElementType<unsigned_int>)0x0) {
        FVar14 = FVar12;
      }
      FVar12 = (ForElementType<unsigned_int>)&local_1a8;
      if (local_1a8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar12 = local_1a8.AllocatorInstance.SecondaryData;
      }
      iVar6 = memcmp((void *)FVar12,(void *)FVar14,(ulonglong)(local_1a8.NumBits + 0x1fU >> 5) << 2)
      ;
      if (iVar6 != 0) goto LAB_142b4a855;
      bVar4 = true;
    }
    else {
LAB_142b4a855:
      bVar4 = false;
    }
    FAutomationTestBase::TestTrue(pFVar24,L"Generic Save to uint32* bits",bVar4);
    if (local_1a8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_1a8.AllocatorInstance.SecondaryData);
    }
    if (local_178 != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_178);
    }
    if (local_168.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_168.AllocatorInstance.SecondaryData);
    }
    local_220 = local_220 + 1;
    if (0xffff < local_220) {
      local_240 = 0;
      do {
        uVar19 = 0;
        bVar2 = (byte)local_240 & 0x1f;
        local_21c = 1 << bVar2 | 1U >> 0x20 - bVar2;
        local_244 = 1;
        local_218 = local_254 + (local_240 >> 5);
        uVar16 = local_240;
        do {
          pTVar3 = local_218;
          uVar5 = local_21c;
          uVar21 = local_244;
          local_254[0].Storage[0] = (uint  [1])1;
          if ((0xf < uVar16) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("PropertyCombination <= MaxValue",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\PropertyCombinationSet.h"
                                 ,0x54,L""), bVar4)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          uVar17 = pTVar3->Storage[0];
          if ((uVar17 & uVar5) == 0) {
            uVar18 = 1;
            do {
              if (((uVar16 & uVar18) == 0) &&
                 (bVar4 = TPropertyCombinationSet<4>::IsRedundantPropertyCombinationRecursive
                                    (local_254,uVar18 | uVar16,2), uVar21 = local_244, bVar4))
              goto LAB_142b4a9a2;
              uVar18 = uVar18 * 2;
            } while (uVar18 < 0x10);
            local_218->Storage[0] = uVar5 | uVar17;
            uVar5 = 1;
            do {
              uVar17 = uVar5 * 2;
              if ((uVar16 & uVar5) != 0) {
                uVar21 = ~uVar5 & uVar16;
                local_254[uVar21 >> 5].Storage[0] =
                     local_254[uVar21 >> 5].Storage[0] & ~(1 << ((byte)uVar21 & 0x1f));
                TPropertyCombinationSet<4>::RemoveRedundantPropertyCombinationsRecursive
                          (local_254,uVar21,uVar17);
              }
              uVar5 = uVar17;
              uVar21 = local_244;
            } while (uVar17 < 0x10);
          }
LAB_142b4a9a2:
          uVar5 = (uint)uVar19;
          if ((0xf < uVar5) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("PropertyCombination <= MaxValue",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\PropertyCombinationSet.h"
                                 ,0x54,L""), bVar4)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          uVar16 = local_254[uVar19 >> 5].Storage[0];
          if ((uVar16 & uVar21) == 0) {
            uVar21 = 1;
            do {
              if (((uVar5 & uVar21) == 0) &&
                 (bVar4 = TPropertyCombinationSet<4>::IsRedundantPropertyCombinationRecursive
                                    (local_254,uVar21 | uVar5,2), bVar4)) goto LAB_142b4aa62;
              uVar21 = uVar21 * 2;
            } while (uVar21 < 0x10);
            local_254[uVar19 >> 5].Storage[0] = local_244 | uVar16;
            uVar16 = 1;
            do {
              uVar21 = uVar16 * 2;
              if ((uVar5 & uVar16) != 0) {
                uVar16 = ~uVar16 & uVar5;
                local_254[uVar16 >> 5].Storage[0] =
                     local_254[uVar16 >> 5].Storage[0] & ~(1 << ((byte)uVar16 & 0x1f));
                TPropertyCombinationSet<4>::RemoveRedundantPropertyCombinationsRecursive
                          (local_254,uVar16,uVar21);
              }
              uVar16 = uVar21;
            } while (uVar21 < 0x10);
          }
LAB_142b4aa62:
          uVar16 = local_240;
          iVar6 = 0;
          if ((local_240 == uVar5) || ((uVar5 & local_240) != local_240)) {
            if ((0xf < local_240) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Value <= MaxValue",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\PropertyCombinationSet.h"
                                   ,0x67,L""), bVar4)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            pFVar24 = local_230;
            FAutomationTestBase::TestTrue
                      (local_230,L"Generic Add - Contains FirstIndex",
                       (local_218->Storage[0] & local_21c) != 0);
            local_208[2] = uVar16;
            puVar20 = local_208 + 3;
            iVar6 = 1;
            if (uVar16 != uVar5) goto LAB_142b4ab31;
LAB_142b4ab97:
            if ((0xf < uVar5) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Value <= MaxValue",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\PropertyCombinationSet.h"
                                   ,0x67,L""), bVar4)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            FAutomationTestBase::TestTrue
                      (pFVar24,L"Generic Add - Contains SecondIndex",
                       (local_254[uVar19 >> 5].Storage[0] & local_244) != 0);
            if (uVar16 != uVar5) {
              *puVar20 = uVar5;
              iVar6 = iVar6 + 1;
            }
          }
          else {
            if ((0xf < local_240) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Value <= MaxValue",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\PropertyCombinationSet.h"
                                   ,0x67,L""), bVar4)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            pFVar24 = local_230;
            FAutomationTestBase::TestFalse
                      (local_230,L"Generic Add - Not Contains FirstIndex",
                       (local_218->Storage[0] & local_21c) != 0);
            puVar20 = local_208 + 2;
LAB_142b4ab31:
            if (uVar16 == uVar5 || (uVar5 & uVar16) != uVar5) goto LAB_142b4ab97;
            if ((0xf < uVar5) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Value <= MaxValue",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\PropertyCombinationSet.h"
                                   ,0x67,L""), bVar4)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            FAutomationTestBase::TestFalse
                      (pFVar24,L"Generic Add - Not Contains SecondIndex",
                       (local_254[uVar19 >> 5].Storage[0] & local_244) != 0);
          }
          pFVar24 = local_230;
          uVar21 = 0;
          uVar19 = 0;
          uVar17 = 1;
          uVar16 = local_240;
          do {
            if ((uVar21 != uVar16) && (uVar21 != uVar5)) {
              if ((0xf < uVar21) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Value <= MaxValue",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\PropertyCombinationSet.h"
                                     ,0x67,L""), bVar4)) {
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
              FAutomationTestBase::TestFalse
                        (pFVar24,L"Generic Add - doesn\'t contain any others",
                         (local_254[uVar19 >> 5].Storage[0] & uVar17) != 0);
              uVar16 = local_240;
            }
            uVar21 = uVar21 + 1;
            uVar17 = uVar17 << 1 | (uint)((int)uVar17 < 0);
            uVar19 = uVar19 + 1;
          } while (uVar21 < 0xf);
          AlgoImpl::IntroSortInternal<unsigned_int,int,FIdentityFunctor,TLess<void>_>
                    (local_208 + 2,iVar6,local_258,(TLess<void>)local_258);
          uVar16 = 0;
          do {
            if ((local_254[uVar16 >> 5].Storage[0] >> (uVar16 & 0x1f) & 1) != 0) goto LAB_142b4acaa;
            uVar16 = uVar16 + 1;
          } while (uVar16 < 0x10);
          if (uVar16 != 0x10) {
LAB_142b4acaa:
            puVar20 = local_208 + 2;
            do {
              puVar25 = puVar20 + 1;
              if (uVar16 != *puVar20) {
                pcVar1 = *(code **)(pFVar24->_padding_ + 0x28);
                ::FString::PrintfImpl(&local_1b8,L"%s: The two values are not equal.");
                (*pcVar1)(pFVar24,&local_1b8);
                if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
                }
              }
              do {
                uVar16 = uVar16 + 1;
                puVar20 = puVar25;
                if (0xf < uVar16) {
                  if (uVar16 == 0x10) goto LAB_142b4ad21;
                  break;
                }
              } while ((local_254[uVar16 >> 5].Storage[0] >> (uVar16 & 0x1f) & 1) == 0);
            } while( true );
          }
LAB_142b4ad21:
          pFVar24 = local_230;
          uVar16 = local_240;
          uVar23 = 0;
          local_210 = 0;
          uVar19 = uVar23;
          do {
            local_254[2].Storage[0] = (uint  [1])1;
            local_254[1].Storage[0] = (uint  [1])1;
            uVar13 = 1;
            if ((int)uVar19 != 0) {
              uVar19 = uVar23;
              bVar4 = true;
              do {
                uVar21 = uVar5;
                if (bVar4) {
                  uVar21 = uVar16;
                }
                if ((0xf < uVar21) &&
                   (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                      ("PropertyCombination <= MaxValue",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\PropertyCombinationSet.h"
                                       ,0x54,L""), bVar4)) {
                  pcVar1 = (code *)swi(3);
                  (*pcVar1)();
                  return;
                }
                if ((local_254[(ulonglong)(uVar21 >> 5) + 2].Storage[0] >> (uVar21 & 0x1f) & 1) == 0
                   ) {
                  uVar17 = 1;
                  do {
                    if (((uVar21 & uVar17) == 0) &&
                       (bVar4 = TPropertyCombinationSet<4>::IsRedundantPropertyCombinationRecursive
                                          (local_254 + 2,uVar17 | uVar21,2), bVar4))
                    goto LAB_142b4ae3e;
                    uVar17 = uVar17 * 2;
                  } while (uVar17 < 0x10);
                  local_254[(ulonglong)(uVar21 >> 5) + 2].Storage[0] =
                       local_254[(ulonglong)(uVar21 >> 5) + 2].Storage[0] |
                       1 << ((byte)uVar21 & 0x1f);
                  uVar17 = 1;
                  do {
                    uVar18 = uVar17 * 2;
                    if ((uVar21 & uVar17) != 0) {
                      uVar17 = ~uVar17 & uVar21;
                      local_254[(ulonglong)(uVar17 >> 5) + 2].Storage[0] =
                           local_254[(ulonglong)(uVar17 >> 5) + 2].Storage[0] &
                           ~(1 << ((byte)uVar17 & 0x1f));
                      TPropertyCombinationSet<4>::RemoveRedundantPropertyCombinationsRecursive
                                (local_254 + 2,uVar17,uVar18);
                    }
                    uVar17 = uVar18;
                  } while (uVar18 < 0x10);
                }
LAB_142b4ae3e:
                uVar21 = (int)uVar19 + 1;
                uVar19 = (ulonglong)uVar21;
                uVar13 = uVar23;
                bVar4 = false;
              } while ((int)uVar21 < (int)local_210);
            }
            uVar19 = (ulonglong)(2 - local_210);
            do {
              uVar21 = uVar5;
              if ((int)uVar13 != 0) {
                uVar21 = uVar16;
              }
              if ((0xf < uVar21) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("PropertyCombination <= MaxValue",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\PropertyCombinationSet.h"
                                     ,0x54,L""), bVar4)) {
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
              if ((local_254[(ulonglong)(uVar21 >> 5) + 1].Storage[0] >> (uVar21 & 0x1f) & 1) == 0)
              {
                uVar17 = 1;
                do {
                  if (((uVar21 & uVar17) == 0) &&
                     (bVar4 = TPropertyCombinationSet<4>::IsRedundantPropertyCombinationRecursive
                                        (local_254 + 1,uVar17 | uVar21,2), bVar4))
                  goto LAB_142b4af3e;
                  uVar17 = uVar17 * 2;
                } while (uVar17 < 0x10);
                local_254[(ulonglong)(uVar21 >> 5) + 1].Storage[0] =
                     local_254[(ulonglong)(uVar21 >> 5) + 1].Storage[0] | 1 << ((byte)uVar21 & 0x1f)
                ;
                uVar17 = 1;
                do {
                  uVar18 = uVar17 * 2;
                  if ((uVar21 & uVar17) != 0) {
                    uVar17 = ~uVar17 & uVar21;
                    local_254[(ulonglong)(uVar17 >> 5) + 1].Storage[0] =
                         local_254[(ulonglong)(uVar17 >> 5) + 1].Storage[0] &
                         ~(1 << ((byte)uVar17 & 0x1f));
                    TPropertyCombinationSet<4>::RemoveRedundantPropertyCombinationsRecursive
                              (local_254 + 1,uVar17,uVar18);
                  }
                  uVar17 = uVar18;
                } while (uVar18 < 0x10);
              }
LAB_142b4af3e:
              uVar19 = uVar19 - 1;
              uVar13 = uVar23;
            } while (uVar19 != 0);
            do {
              if ((local_254[(uVar13 >> 5) + 1].Storage[0] >> ((uint)uVar13 & 0x1f) & 1) != 0)
              goto LAB_142b4af72;
              uVar21 = (uint)uVar13 + 1;
              uVar13 = (ulonglong)uVar21;
            } while (uVar21 < 0x10);
joined_r0x000142b4af70:
            uVar19 = uVar23;
            uVar15 = uVar23;
            if (uVar21 != 0x10) {
LAB_142b4af72:
              do {
                uVar21 = (uint)uVar13;
                TPropertyCombinationSet<4>::Add(local_254 + 2,uVar21);
                do {
                  uVar21 = uVar21 + 1;
                  uVar13 = (ulonglong)uVar21;
                  if (0xf < uVar21) goto joined_r0x000142b4af70;
                } while ((local_254[(ulonglong)(uVar21 >> 5) + 1].Storage[0] >> (uVar21 & 0x1f) & 1)
                         == 0);
              } while( true );
            }
            do {
              if (*(int *)((longlong)local_254[2].Storage + uVar19) !=
                  *(int *)((longlong)local_254[0].Storage + uVar19)) {
                bVar4 = false;
                goto LAB_142b4afcf;
              }
              uVar21 = (int)uVar15 + 1;
              uVar19 = uVar19 + 4;
              uVar15 = (ulonglong)uVar21;
            } while (uVar21 == 0);
            bVar4 = true;
LAB_142b4afcf:
            FAutomationTestBase::TestTrue
                      (pFVar24,
                       L"Generic AddRange results in same set as adding all values to a single set",
                       bVar4);
            local_210 = local_210 + 1;
            uVar19 = (ulonglong)local_210;
          } while ((int)local_210 < 2);
          uVar19 = (ulonglong)(uVar5 + 1);
          local_244 = local_244 << 1 | (uint)((int)local_244 < 0);
        } while (uVar5 + 1 < 0x10);
        local_240 = uVar16 + 1;
        if (0xf < uVar16 + 1) {
          return;
        }
      } while( true );
    }
  } while( true );
}

// TestHardcodedSet<1> @ 142b4b070

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffff80 : 0x000142b4b691 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __thiscall FPropertyCombinationSetTest::TestHardcodedSet<1>(FPropertyCombinationSetTest *this)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  FIdentityFunctor FVar6;
  ForElementType<unsigned_int> FVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint *puVar12;
  uint uVar13;
  uint *puVar14;
  longlong lVar15;
  uint *puVar16;
  longlong lVar17;
  undefined1 auStackY_118 [32];
  FIdentityFunctor local_e8;
  int local_e4;
  int local_e0;
  uint local_dc;
  uint local_d8 [2];
  longlong local_d0;
  int local_c8;
  uint local_c4;
  FAutomationTestBase *local_c0;
  uint *local_b8;
  FString local_b0;
  TBitArray<FDefaultBitArrayAllocator> local_a0;
  uint local_80 [10];
  uint local_58 [10];
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_118;
  local_c0 = (FAutomationTestBase *)this;
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"Hardcoded Constructor stores value 0",true);
  FAutomationTestBase::TestFalse
            ((FAutomationTestBase *)this,L"Hardcoded Constructor is empty other than 0",false);
  iVar10 = 1;
  lVar17 = 0x20;
  uVar9 = 0;
  do {
    do {
      local_a0.NumBits = 0;
      local_a0.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
      local_a0.MaxBits = 0x80;
      local_d8[0] = uVar9;
      if (-1 < iVar10) {
        iVar5 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized(&local_a0,iVar10);
        TBitArray<FDefaultBitArrayAllocator>::SetRange(&local_a0,iVar5,iVar10,true);
      }
      if ((local_a0.NumBits < iVar10) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index >= 0 && NumBitsToSet >= 0 && Index + NumBitsToSet <= NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x3bc,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FVar7 = (ForElementType<unsigned_int>)&local_a0;
      if (local_a0.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar7 = local_a0.AllocatorInstance.SecondaryData;
      }
      FBitArrayMemory::MemmoveBitsWordOrder((uint *)FVar7,iVar10 + -1,local_d8,0,1);
      local_dc = 0;
      if ((local_a0.NumBits < iVar10) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index >= 0 && NumBitsToGet >= 0 && Index + NumBitsToGet <= NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x3df,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FVar7 = (ForElementType<unsigned_int>)&local_a0;
      if (local_a0.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar7 = local_a0.AllocatorInstance.SecondaryData;
      }
      FBitArrayMemory::MemmoveBitsWordOrder(&local_dc,0,(uint *)FVar7,iVar10 + -1,1);
      if ((local_dc == 0) != (local_d8[0] == 0)) {
        pcVar2 = *(code **)(*(longlong *)this + 0x28);
        ::FString::PrintfImpl(&local_b0,L"%s: The two values are not equal.");
        (*pcVar2)(this,&local_b0,0);
        if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b0.Data.AllocatorInstance.Data);
        }
      }
      if ((local_dc == 1) != (local_d8[0] == 1)) {
        pcVar2 = *(code **)(*(longlong *)this + 0x28);
        ::FString::PrintfImpl(&local_b0,L"%s: The two values are not equal.");
        (*pcVar2)(this,&local_b0,0);
        if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b0.Data.AllocatorInstance.Data);
        }
      }
      if (local_a0.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_a0.AllocatorInstance.SecondaryData);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < 2);
    iVar10 = iVar10 + 1;
    lVar17 = lVar17 + -1;
    uVar9 = 0;
  } while (lVar17 != 0);
  local_80[0] = 0;
  local_e0 = 1;
LAB_142b4b287:
  do {
    uVar9 = 0;
    if (local_e0 == 2) {
      local_58[0] = 0;
      local_b8 = local_80;
      local_e4 = 1;
      lVar17 = 1;
      local_d0 = 1;
      local_c8 = 0;
      do {
        lVar15 = 0;
        uVar11 = *local_b8;
        local_c4 = uVar11;
        if ((1 < uVar11) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("PropertyCombination <= MaxValue",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\PropertyCombinationSet.h"
                               ,0x119,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        bVar3 = false;
        uVar9 = uVar9 | uVar11 != 0;
        FVar6 = (FIdentityFunctor)0x0;
        if (lVar17 < 1) {
LAB_142b4b47d:
          if ((1 < uVar11) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("Value <= MaxValue",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\PropertyCombinationSet.h"
                                 ,0x124,L""), bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          FAutomationTestBase::TestTrue
                    ((FAutomationTestBase *)this,L"Hardcoded Add correctly added non-redundant",
                     uVar11 == uVar9);
          if ((0 < lVar17) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("NumExisting < MaxNonRedundant",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\PropertyCombinationSetTest.cpp"
                                 ,0xb5,L""), bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          local_e4 = local_e4 + 1;
          local_58[lVar17] = uVar11;
          lVar17 = lVar17 + 1;
          local_d0 = lVar17;
        }
        else {
          iVar10 = local_e4 + -1;
          puVar16 = local_58;
          do {
            uVar13 = *puVar16;
            FVar6 = (FIdentityFunctor)((byte)FVar6 | uVar11 == uVar13);
            bVar3 = (bool)(bVar3 | ((uVar13 & uVar11) == uVar11 && uVar13 != uVar11));
            if (uVar11 == uVar13 || (uVar13 & uVar11) != uVar13) {
              if ((1 < uVar13) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Value <= MaxValue",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\PropertyCombinationSet.h"
                                     ,0x124,L""), bVar4)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              this = (FPropertyCombinationSetTest *)local_c0;
              FAutomationTestBase::TestTrue
                        (local_c0,L"Hardcoded Add correctly kept existing non-redundant",
                         uVar13 == uVar9);
              lVar15 = lVar15 + 1;
              puVar16 = puVar16 + 1;
            }
            else {
              if (lVar15 < iVar10) {
                puVar14 = puVar16;
                puVar12 = puVar16;
                for (lVar8 = iVar10 - lVar15; puVar12 = puVar12 + 1, lVar17 = local_d0,
                    uVar11 = local_c4, lVar8 != 0; lVar8 = lVar8 + -1) {
                  *puVar14 = *puVar12;
                  puVar14 = puVar14 + 1;
                }
              }
              local_e4 = local_e4 + -1;
              lVar17 = lVar17 + -1;
              iVar10 = iVar10 + -1;
              local_d0 = lVar17;
              if ((1 < uVar13) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Value <= MaxValue",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\PropertyCombinationSet.h"
                                     ,0x124,L""), bVar4)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              this = (FPropertyCombinationSetTest *)local_c0;
              FAutomationTestBase::TestFalse
                        (local_c0,L"Hardcoded Add correctly removed existing redundant",
                         uVar13 == uVar9);
            }
          } while (lVar15 < lVar17);
          local_e8 = FVar6;
          if (bVar3) {
            if ((1 < uVar11) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Value <= MaxValue",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\PropertyCombinationSet.h"
                                   ,0x124,L""), bVar3)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            FAutomationTestBase::TestFalse
                      ((FAutomationTestBase *)this,L"Hardcoded Add correctly did not add redundant",
                       uVar11 == uVar9);
          }
          else if (FVar6 == (FIdentityFunctor)0x0) goto LAB_142b4b47d;
        }
        local_c8 = local_c8 + 1;
        local_b8 = local_b8 + 1;
      } while (local_c8 < 2);
      FAutomationTestBase::TestTrue
                ((FAutomationTestBase *)this,
                 L"Hardcoded MaxNonRedundant is correct - trying to add more than MaxNonRedundant results in one of them being redundant"
                 ,local_e4 < 2);
      if ((local_e4 < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      AlgoImpl::IntroSortInternal<unsigned_int,int,FIdentityFunctor,TLess<void>_>
                (local_58,local_e4,local_e8,(TLess<void>)local_e8);
      if ((local_e4 < 1) || (uVar9 != local_58[0])) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      FAutomationTestBase::TestTrue
                ((FAutomationTestBase *)this,
                 L"Hardcoded Iteration lists the existing non-redundant values in order",bVar3);
      local_d0 = 0;
      do {
        uVar13 = 0;
        uVar11 = 0;
        lVar15 = 0;
        lVar17 = local_d0;
        if (local_d0 != 0) {
          do {
            uVar1 = local_80[lVar15];
            if ((1 < uVar1) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("PropertyCombination <= MaxValue",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\PropertyCombinationSet.h"
                                   ,0x119,L""), bVar3)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            lVar15 = lVar15 + 1;
            uVar13 = uVar13 | uVar1 != 0;
            lVar17 = local_d0;
          } while (lVar15 < local_d0);
        }
        do {
          uVar1 = local_80[lVar17];
          if ((1 < uVar1) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("PropertyCombination <= MaxValue",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\PropertyCombinationSet.h"
                                 ,0x119,L""), bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          this = (FPropertyCombinationSetTest *)local_c0;
          lVar17 = lVar17 + 1;
          uVar11 = uVar11 | uVar1 != 0;
        } while (lVar17 < 2);
        FAutomationTestBase::TestTrue
                  (local_c0,
                   L"Hardcoded AddRange results in same set as adding all values to a single set",
                   (uVar13 | uVar11) == uVar9);
        local_d0 = local_d0 + 1;
      } while (local_d0 < 2);
      local_80[0] = local_80[0] + 1;
      local_e0 = 1;
    }
    else {
      iVar10 = local_e0 + -1;
      if (local_80[iVar10] < 2) {
        if (local_e0 < 2) {
          local_80[local_e0] = 0;
        }
        local_e0 = local_e0 + 1;
      }
      else {
        local_e0 = iVar10;
        if (0 < iVar10) {
          local_80[(longlong)iVar10 + -1] = local_80[(longlong)iVar10 + -1] + 1;
          goto LAB_142b4b287;
        }
      }
    }
    if (local_e0 < 1) {
      return;
    }
  } while( true );
}

// TestHardcodedSet<2> @ 142b4b710

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000142b4ba17) */
/* WARNING: Removing unreachable block (ram,0x000142b4ba3c) */
/* WARNING: Removing unreachable block (ram,0x000142b4b78c) */
/* WARNING: Removing unreachable block (ram,0x000142b4b7b1) */
/* WARNING: Removing unreachable block (ram,0x000142b4b7f7) */
/* WARNING: Removing unreachable block (ram,0x000142b4b81c) */
/* WARNING: Removing unreachable block (ram,0x000142b4bbcd) */
/* WARNING: Removing unreachable block (ram,0x000142b4bbf2) */

void __thiscall FPropertyCombinationSetTest::TestHardcodedSet<2>(FPropertyCombinationSetTest *this)

{
  uint **ppuVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  uint **ppuVar8;
  longlong lVar9;
  uint **ppuVar10;
  uint *puVar11;
  ForElementType<unsigned_int> FVar12;
  longlong lVar13;
  FIdentityFunctor FVar14;
  int iVar15;
  ulonglong uVar16;
  uint uVar17;
  uint *puVar18;
  char cVar19;
  uint uVar20;
  uint *puVar21;
  uint uVar22;
  uint *puVar23;
  uint **ppuVar24;
  undefined1 auStackY_1a8 [32];
  FIdentityFunctor local_178;
  int local_174;
  uint local_16c;
  longlong local_160;
  int local_158;
  longlong local_148;
  uint local_138;
  uint local_134;
  uint local_130;
  int local_12c;
  int local_128;
  int local_124;
  uint **local_120;
  uint *local_118;
  longlong local_110;
  uint local_108 [2];
  uint local_100 [2];
  uint local_f8 [2];
  uint **local_f0;
  uint **local_e8;
  FString local_e0;
  FString local_d0;
  FString local_c0;
  uint *local_b0;
  undefined1 local_a8 [16];
  ForElementType<unsigned_int> local_98;
  int local_90;
  uint local_8c [11];
  uint local_60 [10];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  ppuVar8 = &`public:_static_void___cdecl_FPropertyCombinationPack2::Unpack(unsigned_int,unsigned_int_const*___ptr64&___ptr64,int&___ptr64)'
             ::__l5::Values;
  do {
    if (*(int *)ppuVar8 == 0) {
      bVar4 = true;
      goto LAB_142b4b776;
    }
    ppuVar8 = (uint **)((longlong)ppuVar8 + 4);
  } while (ppuVar8 !=
           (uint **)((longlong)
                     &`public:_static_void___cdecl_FPropertyCombinationPack2::Unpack(unsigned_int,unsigned_int_const*___ptr64&___ptr64,int&___ptr64)'
                      ::__l5::Values + 4));
  bVar4 = false;
LAB_142b4b776:
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"Hardcoded Constructor stores value 0",bVar4);
  uVar20 = 1;
  do {
    ppuVar8 = &`public:_static_void___cdecl_FPropertyCombinationPack2::Unpack(unsigned_int,unsigned_int_const*___ptr64&___ptr64,int&___ptr64)'
               ::__l5::Values;
    do {
      if (*(uint *)ppuVar8 == uVar20) {
        bVar4 = true;
        goto LAB_142b4b7ca;
      }
      ppuVar8 = (uint **)((longlong)ppuVar8 + 4);
    } while (ppuVar8 !=
             (uint **)((longlong)
                       &`public:_static_void___cdecl_FPropertyCombinationPack2::Unpack(unsigned_int,unsigned_int_const*___ptr64&___ptr64,int&___ptr64)'
                        ::__l5::Values + 4));
    bVar4 = false;
LAB_142b4b7ca:
    FAutomationTestBase::TestFalse
              ((FAutomationTestBase *)this,L"Hardcoded Constructor is empty other than 0",bVar4);
    uVar20 = uVar20 + 1;
  } while (uVar20 < 4);
  uVar16 = 0;
  do {
    uVar20 = 0;
    do {
      uVar17 = (uint)uVar16;
      if (uVar17 < 4) {
        ppuVar8 = (uint **)((longlong)
                            &`public:_static_void___cdecl_FPropertyCombinationPack2::Unpack(unsigned_int,unsigned_int_const*___ptr64&___ptr64,int&___ptr64)'
                             ::__l5::Values + uVar16 * 4);
        lVar9 = 4;
      }
      else {
        ppuVar8 = &`public:_static_void___cdecl_FPropertyCombinationPack2::Unpack(unsigned_int,unsigned_int_const*___ptr64&___ptr64,int&___ptr64)'
                   ::__l7::Values;
        lVar9 = 8;
      }
      ppuVar10 = (uint **)(lVar9 + (longlong)ppuVar8);
      for (; ppuVar8 != ppuVar10; ppuVar8 = (uint **)((longlong)ppuVar8 + 4)) {
        if (*(uint *)ppuVar8 == uVar20) {
          cVar19 = '\x01';
          goto LAB_142b4b850;
        }
      }
      cVar19 = '\0';
LAB_142b4b850:
      if ((3 < uVar20) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Value <= MaxValue",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\PropertyCombinationSet.h"
                             ,0x1b0,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (uVar17 < 4) {
        ppuVar8 = (uint **)((longlong)
                            &`public:_static_void___cdecl_FPropertyCombinationPack2::Unpack(unsigned_int,unsigned_int_const*___ptr64&___ptr64,int&___ptr64)'
                             ::__l5::Values + uVar16 * 4);
        lVar9 = 4;
      }
      else {
        ppuVar8 = &`public:_static_void___cdecl_FPropertyCombinationPack2::Unpack(unsigned_int,unsigned_int_const*___ptr64&___ptr64,int&___ptr64)'
                   ::__l7::Values;
        lVar9 = 8;
      }
      ppuVar10 = (uint **)(lVar9 + (longlong)ppuVar8);
      for (; ppuVar8 != ppuVar10; ppuVar8 = (uint **)((longlong)ppuVar8 + 4)) {
        if (*(uint *)ppuVar8 == uVar20) {
          cVar5 = '\x01';
          goto LAB_142b4b8b3;
        }
      }
      cVar5 = '\0';
LAB_142b4b8b3:
      if (cVar5 != cVar19) {
        pcVar3 = *(code **)(*(longlong *)this + 0x28);
        ::FString::PrintfImpl(&local_e0,L"%s: The two values are not equal.");
        (*pcVar3)(this,&local_e0,0);
        if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_e0.Data.AllocatorInstance.Data);
        }
      }
      uVar20 = uVar20 + 1;
    } while (uVar20 < 4);
    uVar16 = (ulonglong)(uVar17 + 1);
  } while (uVar17 + 1 < 5);
  local_148 = 0x20;
  iVar15 = 3;
  do {
    uVar20 = 0;
    do {
      uVar17 = 0;
      local_90 = 0;
      local_98 = (ForElementType<unsigned_int>)0x0;
      local_8c[0] = 0x80;
      local_138 = uVar20;
      if (-1 < iVar15) {
        iVar7 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                          ((TBitArray<FDefaultBitArrayAllocator> *)local_a8,iVar15);
        TBitArray<FDefaultBitArrayAllocator>::SetRange
                  ((TBitArray<FDefaultBitArrayAllocator> *)local_a8,iVar7,iVar15,true);
      }
      if ((local_90 < iVar15) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index >= 0 && NumBitsToSet >= 0 && Index + NumBitsToSet <= NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x3bc,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FVar12 = (ForElementType<unsigned_int>)local_a8;
      if (local_98 != (ForElementType<unsigned_int>)0x0) {
        FVar12 = local_98;
      }
      FBitArrayMemory::MemmoveBitsWordOrder((uint *)FVar12,iVar15 + -3,&local_138,0,3);
      local_134 = 0;
      if ((local_90 < iVar15) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index >= 0 && NumBitsToGet >= 0 && Index + NumBitsToGet <= NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x3df,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FVar12 = (ForElementType<unsigned_int>)local_a8;
      if (local_98 != (ForElementType<unsigned_int>)0x0) {
        FVar12 = local_98;
      }
      FBitArrayMemory::MemmoveBitsWordOrder(&local_134,0,(uint *)FVar12,iVar15 + -3,3);
      do {
        if (local_138 < 4) {
          ppuVar8 = (uint **)((longlong)
                              &`public:_static_void___cdecl_FPropertyCombinationPack2::Unpack(unsigned_int,unsigned_int_const*___ptr64&___ptr64,int&___ptr64)'
                               ::__l5::Values + (ulonglong)local_138 * 4);
          lVar9 = 4;
        }
        else {
          if ((local_138 != 4) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Compressed == 4",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\PropertyCombinationSet.h"
                                 ,0x229,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          ppuVar8 = &`public:_static_void___cdecl_FPropertyCombinationPack2::Unpack(unsigned_int,unsigned_int_const*___ptr64&___ptr64,int&___ptr64)'
                     ::__l7::Values;
          lVar9 = 8;
        }
        ppuVar10 = (uint **)(lVar9 + (longlong)ppuVar8);
        for (; ppuVar8 != ppuVar10; ppuVar8 = (uint **)((longlong)ppuVar8 + 4)) {
          if (*(uint *)ppuVar8 == uVar17) {
            cVar19 = '\x01';
            goto LAB_142b4bab0;
          }
        }
        cVar19 = '\0';
LAB_142b4bab0:
        if ((3 < uVar17) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Value <= MaxValue",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\PropertyCombinationSet.h"
                               ,0x1b0,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (local_134 < 4) {
          ppuVar8 = (uint **)((longlong)
                              &`public:_static_void___cdecl_FPropertyCombinationPack2::Unpack(unsigned_int,unsigned_int_const*___ptr64&___ptr64,int&___ptr64)'
                               ::__l5::Values + (ulonglong)local_134 * 4);
          lVar9 = 4;
        }
        else {
          if ((local_134 != 4) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Compressed == 4",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\PropertyCombinationSet.h"
                                 ,0x229,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          ppuVar8 = &`public:_static_void___cdecl_FPropertyCombinationPack2::Unpack(unsigned_int,unsigned_int_const*___ptr64&___ptr64,int&___ptr64)'
                     ::__l7::Values;
          lVar9 = 8;
        }
        ppuVar10 = (uint **)(lVar9 + (longlong)ppuVar8);
        for (; ppuVar8 != ppuVar10; ppuVar8 = (uint **)((longlong)ppuVar8 + 4)) {
          if (*(uint *)ppuVar8 == uVar17) {
            cVar5 = '\x01';
            goto LAB_142b4bb48;
          }
        }
        cVar5 = '\0';
LAB_142b4bb48:
        if (cVar5 != cVar19) {
          pcVar3 = *(code **)(*(longlong *)this + 0x28);
          ::FString::PrintfImpl(&local_d0,L"%s: The two values are not equal.");
          (*pcVar3)(this,&local_d0,0);
          if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_d0.Data.AllocatorInstance.Data);
          }
        }
        uVar17 = uVar17 + 1;
      } while (uVar17 < 4);
      if (local_98 != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_98);
      }
      uVar20 = uVar20 + 1;
    } while (uVar20 < 5);
    iVar15 = iVar15 + 1;
    local_148 = local_148 + -1;
  } while (local_148 != 0);
  uVar16 = 0;
  do {
    uVar20 = 0;
    do {
      uVar17 = (uint)uVar16;
      if (uVar17 < 4) {
        ppuVar8 = (uint **)((longlong)
                            &`public:_static_void___cdecl_FPropertyCombinationPack2::Unpack(unsigned_int,unsigned_int_const*___ptr64&___ptr64,int&___ptr64)'
                             ::__l5::Values + uVar16 * 4);
        lVar9 = 4;
      }
      else {
        ppuVar8 = &`public:_static_void___cdecl_FPropertyCombinationPack2::Unpack(unsigned_int,unsigned_int_const*___ptr64&___ptr64,int&___ptr64)'
                   ::__l7::Values;
        lVar9 = 8;
      }
      ppuVar10 = (uint **)(lVar9 + (longlong)ppuVar8);
      for (; ppuVar8 != ppuVar10; ppuVar8 = (uint **)((longlong)ppuVar8 + 4)) {
        if (*(uint *)ppuVar8 == uVar20) {
          cVar19 = '\x01';
          goto LAB_142b4bc35;
        }
      }
      cVar19 = '\0';
LAB_142b4bc35:
      if ((3 < uVar20) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Value <= MaxValue",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\PropertyCombinationSet.h"
                             ,0x1b0,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (uVar17 < 4) {
        ppuVar8 = (uint **)((longlong)
                            &`public:_static_void___cdecl_FPropertyCombinationPack2::Unpack(unsigned_int,unsigned_int_const*___ptr64&___ptr64,int&___ptr64)'
                             ::__l5::Values + uVar16 * 4);
        lVar9 = 4;
      }
      else {
        ppuVar8 = &`public:_static_void___cdecl_FPropertyCombinationPack2::Unpack(unsigned_int,unsigned_int_const*___ptr64&___ptr64,int&___ptr64)'
                   ::__l7::Values;
        lVar9 = 8;
      }
      ppuVar10 = (uint **)(lVar9 + (longlong)ppuVar8);
      for (; ppuVar8 != ppuVar10; ppuVar8 = (uint **)((longlong)ppuVar8 + 4)) {
        if (*(uint *)ppuVar8 == uVar20) {
          cVar5 = '\x01';
          goto LAB_142b4bca3;
        }
      }
      cVar5 = '\0';
LAB_142b4bca3:
      if (cVar5 != cVar19) {
        pcVar3 = *(code **)(*(longlong *)this + 0x28);
        ::FString::PrintfImpl(&local_c0,L"%s: The two values are not equal.");
        (*pcVar3)(this,&local_c0,0);
        if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c0.Data.AllocatorInstance.Data);
        }
      }
      uVar20 = uVar20 + 1;
    } while (uVar20 < 4);
    uVar16 = (ulonglong)(uVar17 + 1);
  } while (uVar17 + 1 < 5);
  local_158 = 1;
  local_8c[1] = 0;
LAB_142b4bd20:
  do {
    if (local_158 == 3) {
      uVar20 = 0;
      local_130 = 0;
      local_60[0] = 0;
      local_174 = 1;
      local_160 = 1;
      iVar15 = 0;
      puVar11 = local_8c;
      do {
        puVar11 = puVar11 + 1;
        uVar17 = *puVar11;
        if ((3 < uVar17) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("PropertyCombination <= MaxValue",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\PropertyCombinationSet.h"
                               ,0x185,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (uVar20 < 4) {
          iVar7 = 1;
          ppuVar8 = (uint **)((longlong)
                              &`public:_static_void___cdecl_FPropertyCombinationPack2::Unpack(unsigned_int,unsigned_int_const*___ptr64&___ptr64,int&___ptr64)'
                               ::__l5::Values + (ulonglong)uVar20 * 4);
        }
        else {
          if ((uVar20 != 4) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Compressed == 4",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\PropertyCombinationSet.h"
                                 ,0x229,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          ppuVar8 = &`public:_static_void___cdecl_FPropertyCombinationPack2::Unpack(unsigned_int,unsigned_int_const*___ptr64&___ptr64,int&___ptr64)'
                     ::__l7::Values;
          iVar7 = 2;
        }
        bVar4 = TPropertyCombinationSetHardcoded<FPropertyCombinationPack2>::AddNonRedundant
                          ((uint *)ppuVar8,iVar7,uVar17,local_108,&local_12c);
        if (bVar4) {
          uVar20 = FPropertyCombinationPack2::Pack(local_108,local_12c);
        }
        bVar4 = false;
        lVar9 = 0;
        if (local_160 < 1) {
LAB_142b4c1dd:
          if ((3 < uVar17) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Value <= MaxValue",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\PropertyCombinationSet.h"
                                 ,0x1b0,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (uVar20 < 4) {
            ppuVar8 = (uint **)((longlong)
                                &`public:_static_void___cdecl_FPropertyCombinationPack2::Unpack(unsigned_int,unsigned_int_const*___ptr64&___ptr64,int&___ptr64)'
                                 ::__l5::Values + (ulonglong)uVar20 * 4);
            lVar9 = 4;
          }
          else {
            if ((uVar20 != 4) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Compressed == 4",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\PropertyCombinationSet.h"
                                   ,0x229,L""), bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            ppuVar8 = &`public:_static_void___cdecl_FPropertyCombinationPack2::Unpack(unsigned_int,unsigned_int_const*___ptr64&___ptr64,int&___ptr64)'
                       ::__l7::Values;
            lVar9 = 8;
          }
          ppuVar10 = (uint **)(lVar9 + (longlong)ppuVar8);
          for (; ppuVar8 != ppuVar10; ppuVar8 = (uint **)((longlong)ppuVar8 + 4)) {
            if (*(uint *)ppuVar8 == uVar17) {
              bVar4 = true;
              goto LAB_142b4c272;
            }
          }
          bVar4 = false;
LAB_142b4c272:
          FAutomationTestBase::TestTrue
                    ((FAutomationTestBase *)this,L"Hardcoded Add correctly added non-redundant",
                     bVar4);
          if ((1 < local_160) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("NumExisting < MaxNonRedundant",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\PropertyCombinationSetTest.cpp"
                                 ,0xb5,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          local_174 = local_174 + 1;
          local_60[local_160] = uVar17;
          local_160 = local_160 + 1;
        }
        else {
          puVar23 = local_60;
          iVar7 = local_174 + -1;
          local_178 = (FIdentityFunctor)0x0;
          do {
            uVar22 = *puVar23;
            bVar4 = (bool)(bVar4 | uVar17 == uVar22);
            local_178 = (FIdentityFunctor)
                        ((byte)local_178 | ((uVar22 & uVar17) == uVar17 && uVar22 != uVar17));
            if (uVar17 == uVar22 || (uVar22 & uVar17) != uVar22) {
              if ((3 < uVar22) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Value <= MaxValue",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\PropertyCombinationSet.h"
                                     ,0x1b0,L""), bVar6)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              if (uVar20 < 4) {
                ppuVar8 = (uint **)((longlong)
                                    &`public:_static_void___cdecl_FPropertyCombinationPack2::Unpack(unsigned_int,unsigned_int_const*___ptr64&___ptr64,int&___ptr64)'
                                     ::__l5::Values + (ulonglong)uVar20 * 4);
                lVar13 = 4;
              }
              else {
                if ((uVar20 != 4) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Compressed == 4",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\PropertyCombinationSet.h"
                                       ,0x229,L""), bVar6)) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                ppuVar8 = &`public:_static_void___cdecl_FPropertyCombinationPack2::Unpack(unsigned_int,unsigned_int_const*___ptr64&___ptr64,int&___ptr64)'
                           ::__l7::Values;
                lVar13 = 8;
              }
              ppuVar10 = (uint **)((longlong)ppuVar8 + lVar13);
              for (; ppuVar8 != ppuVar10; ppuVar8 = (uint **)((longlong)ppuVar8 + 4)) {
                if (*(uint *)ppuVar8 == uVar22) {
                  bVar6 = true;
                  goto LAB_142b4c009;
                }
              }
              bVar6 = false;
LAB_142b4c009:
              FAutomationTestBase::TestTrue
                        ((FAutomationTestBase *)this,
                         L"Hardcoded Add correctly kept existing non-redundant",bVar6);
              lVar9 = lVar9 + 1;
              puVar23 = puVar23 + 1;
            }
            else {
              if (lVar9 < iVar7) {
                puVar21 = puVar23;
                puVar18 = puVar23;
                for (lVar13 = iVar7 - lVar9; puVar18 = puVar18 + 1, lVar13 != 0;
                    lVar13 = lVar13 + -1) {
                  *puVar21 = *puVar18;
                  puVar21 = puVar21 + 1;
                }
              }
              local_174 = local_174 + -1;
              local_160 = local_160 + -1;
              iVar7 = iVar7 + -1;
              if ((3 < uVar22) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Value <= MaxValue",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\PropertyCombinationSet.h"
                                     ,0x1b0,L""), bVar6)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              if (uVar20 < 4) {
                ppuVar8 = (uint **)((longlong)
                                    &`public:_static_void___cdecl_FPropertyCombinationPack2::Unpack(unsigned_int,unsigned_int_const*___ptr64&___ptr64,int&___ptr64)'
                                     ::__l5::Values + (ulonglong)uVar20 * 4);
                lVar13 = 4;
              }
              else {
                if ((uVar20 != 4) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Compressed == 4",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\PropertyCombinationSet.h"
                                       ,0x229,L""), bVar6)) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                ppuVar8 = &`public:_static_void___cdecl_FPropertyCombinationPack2::Unpack(unsigned_int,unsigned_int_const*___ptr64&___ptr64,int&___ptr64)'
                           ::__l7::Values;
                lVar13 = 8;
              }
              ppuVar10 = (uint **)((longlong)ppuVar8 + lVar13);
              for (; ppuVar8 != ppuVar10; ppuVar8 = (uint **)((longlong)ppuVar8 + 4)) {
                if (*(uint *)ppuVar8 == uVar22) {
                  bVar6 = true;
                  goto LAB_142b4bf51;
                }
              }
              bVar6 = false;
LAB_142b4bf51:
              FAutomationTestBase::TestFalse
                        ((FAutomationTestBase *)this,
                         L"Hardcoded Add correctly removed existing redundant",bVar6);
            }
          } while (lVar9 < local_160);
          if (local_178 == (FIdentityFunctor)0x0) {
            if (!bVar4) goto LAB_142b4c1dd;
          }
          else {
            if ((3 < uVar17) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Value <= MaxValue",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\PropertyCombinationSet.h"
                                   ,0x1b0,L""), bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            if (uVar20 < 4) {
              ppuVar8 = (uint **)((longlong)
                                  &`public:_static_void___cdecl_FPropertyCombinationPack2::Unpack(unsigned_int,unsigned_int_const*___ptr64&___ptr64,int&___ptr64)'
                                   ::__l5::Values + (ulonglong)uVar20 * 4);
              lVar9 = 4;
            }
            else {
              if ((uVar20 != 4) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Compressed == 4",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\PropertyCombinationSet.h"
                                     ,0x229,L""), bVar4)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              ppuVar8 = &`public:_static_void___cdecl_FPropertyCombinationPack2::Unpack(unsigned_int,unsigned_int_const*___ptr64&___ptr64,int&___ptr64)'
                         ::__l7::Values;
              lVar9 = 8;
            }
            ppuVar10 = (uint **)(lVar9 + (longlong)ppuVar8);
            for (; ppuVar8 != ppuVar10; ppuVar8 = (uint **)((longlong)ppuVar8 + 4)) {
              if (*(uint *)ppuVar8 == uVar17) {
                bVar4 = true;
                goto LAB_142b4c0e6;
              }
            }
            bVar4 = false;
LAB_142b4c0e6:
            FAutomationTestBase::TestFalse
                      ((FAutomationTestBase *)this,L"Hardcoded Add correctly did not add redundant",
                       bVar4);
          }
        }
        iVar15 = iVar15 + 1;
      } while (iVar15 < 3);
      local_130 = uVar20;
      FAutomationTestBase::TestTrue
                ((FAutomationTestBase *)this,
                 L"Hardcoded MaxNonRedundant is correct - trying to add more than MaxNonRedundant results in one of them being redundant"
                 ,local_174 < 3);
      if ((local_174 < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      AlgoImpl::IntroSortInternal<unsigned_int,int,FIdentityFunctor,TLess<void>_>
                (local_60,local_174,local_178,(TLess<void>)local_178);
      lVar9 = 0;
      if (uVar20 < 4) {
        lVar13 = 1;
        ppuVar8 = (uint **)((longlong)
                            &`public:_static_void___cdecl_FPropertyCombinationPack2::Unpack(unsigned_int,unsigned_int_const*___ptr64&___ptr64,int&___ptr64)'
                             ::__l5::Values + (ulonglong)uVar20 * 4);
      }
      else {
        if ((uVar20 != 4) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Compressed == 4",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\PropertyCombinationSet.h"
                               ,0x229,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        ppuVar8 = &`public:_static_void___cdecl_FPropertyCombinationPack2::Unpack(unsigned_int,unsigned_int_const*___ptr64&___ptr64,int&___ptr64)'
                   ::__l7::Values;
        if ((uVar20 != 4) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Compressed == 4",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\PropertyCombinationSet.h"
                               ,0x229,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        lVar13 = 2;
      }
      do {
        if ((lVar9 < local_174) && (*(uint *)ppuVar8 == local_60[lVar9])) {
          bVar4 = true;
        }
        else {
          bVar4 = false;
        }
        FAutomationTestBase::TestTrue
                  ((FAutomationTestBase *)this,
                   L"Hardcoded Iteration lists the existing non-redundant values in order",bVar4);
        lVar9 = lVar9 + 1;
        ppuVar8 = (uint **)((longlong)ppuVar8 + 4);
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
      local_110 = 0;
      do {
        lVar9 = local_110;
        uVar20 = 0;
        uVar17 = 0;
        lVar13 = 0;
        if (0 < local_110) {
          do {
            uVar22 = local_8c[lVar13 + 1];
            if ((3 < uVar22) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("PropertyCombination <= MaxValue",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\PropertyCombinationSet.h"
                                   ,0x185,L""), bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            if (uVar20 < 4) {
              iVar15 = 1;
              ppuVar8 = (uint **)((longlong)
                                  &`public:_static_void___cdecl_FPropertyCombinationPack2::Unpack(unsigned_int,unsigned_int_const*___ptr64&___ptr64,int&___ptr64)'
                                   ::__l5::Values + (ulonglong)uVar20 * 4);
            }
            else {
              if ((uVar20 != 4) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Compressed == 4",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\PropertyCombinationSet.h"
                                     ,0x229,L""), bVar4)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              ppuVar8 = &`public:_static_void___cdecl_FPropertyCombinationPack2::Unpack(unsigned_int,unsigned_int_const*___ptr64&___ptr64,int&___ptr64)'
                         ::__l7::Values;
              iVar15 = 2;
            }
            bVar4 = TPropertyCombinationSetHardcoded<FPropertyCombinationPack2>::AddNonRedundant
                              ((uint *)ppuVar8,iVar15,uVar22,local_100,&local_128);
            if (bVar4) {
              uVar20 = FPropertyCombinationPack2::Pack(local_100,local_128);
            }
            lVar13 = lVar13 + 1;
          } while (lVar13 < lVar9);
        }
        do {
          uVar22 = local_8c[lVar9 + 1];
          if ((3 < uVar22) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("PropertyCombination <= MaxValue",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\PropertyCombinationSet.h"
                                 ,0x185,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (uVar17 < 4) {
            iVar15 = 1;
            ppuVar8 = (uint **)((longlong)
                                &`public:_static_void___cdecl_FPropertyCombinationPack2::Unpack(unsigned_int,unsigned_int_const*___ptr64&___ptr64,int&___ptr64)'
                                 ::__l5::Values + (ulonglong)uVar17 * 4);
          }
          else {
            if ((uVar17 != 4) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Compressed == 4",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\PropertyCombinationSet.h"
                                   ,0x229,L""), bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            ppuVar8 = &`public:_static_void___cdecl_FPropertyCombinationPack2::Unpack(unsigned_int,unsigned_int_const*___ptr64&___ptr64,int&___ptr64)'
                       ::__l7::Values;
            iVar15 = 2;
          }
          bVar4 = TPropertyCombinationSetHardcoded<FPropertyCombinationPack2>::AddNonRedundant
                            ((uint *)ppuVar8,iVar15,uVar22,local_f8,&local_124);
          if (bVar4) {
            uVar17 = FPropertyCombinationPack2::Pack(local_f8,local_124);
          }
          lVar9 = lVar9 + 1;
        } while (lVar9 < 3);
        if (uVar20 < 4) {
          local_16c = 1;
          ppuVar8 = (uint **)((longlong)
                              &`public:_static_void___cdecl_FPropertyCombinationPack2::Unpack(unsigned_int,unsigned_int_const*___ptr64&___ptr64,int&___ptr64)'
                               ::__l5::Values + (ulonglong)uVar20 * 4);
        }
        else {
          if ((uVar20 != 4) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Compressed == 4",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\PropertyCombinationSet.h"
                                 ,0x229,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          ppuVar8 = &`public:_static_void___cdecl_FPropertyCombinationPack2::Unpack(unsigned_int,unsigned_int_const*___ptr64&___ptr64,int&___ptr64)'
                     ::__l7::Values;
          local_16c = 2;
        }
        local_120 = ppuVar8;
        if (uVar17 < 4) {
          ppuVar10 = (uint **)((longlong)
                               &`public:_static_void___cdecl_FPropertyCombinationPack2::Unpack(unsigned_int,unsigned_int_const*___ptr64&___ptr64,int&___ptr64)'
                                ::__l5::Values + (ulonglong)uVar17 * 4);
          lVar9 = 4;
        }
        else {
          if ((uVar17 != 4) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Compressed == 4",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\PropertyCombinationSet.h"
                                 ,0x229,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          ppuVar10 = &`public:_static_void___cdecl_FPropertyCombinationPack2::Unpack(unsigned_int,unsigned_int_const*___ptr64&___ptr64,int&___ptr64)'
                      ::__l7::Values;
          lVar9 = 8;
        }
        uVar20 = local_130;
        ppuVar24 = &local_118;
        local_e8 = (uint **)((longlong)ppuVar10 + lVar9);
        if (ppuVar10 != (uint **)((longlong)ppuVar10 + lVar9)) {
          do {
            uVar17 = *(uint *)ppuVar10;
            uVar22 = 0;
            local_f0 = ppuVar24;
            lVar9 = 0;
            local_178 = (FIdentityFunctor)0x0;
            if (((int)local_16c < 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("ArrayNum >= 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0xfe,L""), bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            FVar14 = (FIdentityFunctor)0x0;
            ppuVar1 = (uint **)((longlong)ppuVar8 + (longlong)(int)local_16c * 4);
            if (ppuVar8 == ppuVar1) {
LAB_142b4c774:
              uVar22 = uVar22 + 1;
              *(uint *)((longlong)ppuVar24 + lVar9 * 4) = uVar17;
            }
            else {
              do {
                uVar2 = *(uint *)ppuVar8;
                if ((uVar2 & uVar17) == uVar17) {
                  bVar4 = false;
                  goto LAB_142b4c847;
                }
                if ((uVar17 < uVar2) && (FVar14 == (FIdentityFunctor)0x0)) {
                  if ((1 < uVar22) &&
                     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                        ("NewNum < ArrayMax",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\PropertyCombinationSet.h"
                                         ,0x1fa,L""), bVar4)) {
                    pcVar3 = (code *)swi(3);
                    (*pcVar3)();
                    return;
                  }
                  uVar22 = uVar22 + 1;
                  *(uint *)((longlong)ppuVar24 + lVar9 * 4) = uVar17;
                  FVar14 = (FIdentityFunctor)0x1;
                  lVar9 = lVar9 + 1;
                  local_178 = (FIdentityFunctor)0x1;
                }
                if ((uVar2 & uVar17) != uVar2) {
                  if ((1 < uVar22) &&
                     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                        ("NewNum < ArrayMax",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\PropertyCombinationSet.h"
                                         ,0x200,L""), FVar14 = local_178, bVar4)) {
                    pcVar3 = (code *)swi(3);
                    (*pcVar3)();
                    return;
                  }
                  uVar22 = uVar22 + 1;
                  *(uint *)((longlong)ppuVar24 + lVar9 * 4) = uVar2;
                  lVar9 = lVar9 + 1;
                }
                ppuVar8 = (uint **)((longlong)ppuVar8 + 4);
              } while (ppuVar8 != ppuVar1);
              if (FVar14 == (FIdentityFunctor)0x0) {
                if ((1 < uVar22) &&
                   (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                      ("NewNum < ArrayMax",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\PropertyCombinationSet.h"
                                       ,0x206,L""), bVar4)) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                goto LAB_142b4c774;
              }
            }
            if (((int)uVar22 < 1) || (2 < uVar22)) {
              bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("1 <= NewNum && NewNum <= ArrayMax",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\PropertyCombinationSet.h"
                                 ,0x209,L"");
              if (bVar4) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              if ((int)uVar22 < 0) {
                bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("ArrayNum >= 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0xfe,L"");
                if (bVar4) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                goto LAB_142b4c7e4;
              }
              if (uVar22 != 0) goto LAB_142b4c7e4;
            }
            else {
LAB_142b4c7e4:
              iVar15 = uVar22 - 1;
              if (iVar15 != 0) {
                ppuVar8 = ppuVar24;
                uVar17 = *(uint *)ppuVar24;
                do {
                  puVar11 = (uint *)((longlong)ppuVar8 + 4);
                  ppuVar8 = (uint **)((longlong)ppuVar8 + 4);
                  if (*puVar11 < uVar17) {
                    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Algo::IsSorted(TArrayView<uint32>(NewValues, NewNum))",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\PropertyCombinationSet.h"
                                       ,0x20a,L"");
                    if (bVar4) {
                      pcVar3 = (code *)swi(3);
                      (*pcVar3)();
                      return;
                    }
                    break;
                  }
                  iVar15 = iVar15 + -1;
                  uVar17 = *puVar11;
                } while (iVar15 != 0);
              }
            }
            bVar4 = true;
            bVar6 = ppuVar24 != &local_118;
            ppuVar24 = &local_b0;
            if (bVar6) {
              ppuVar24 = &local_118;
            }
LAB_142b4c847:
            ppuVar8 = local_f0;
            if (!bVar4) {
              ppuVar8 = local_120;
              uVar22 = local_16c;
            }
            local_16c = uVar22;
            ppuVar10 = (uint **)((longlong)ppuVar10 + 4);
            local_120 = ppuVar8;
          } while (ppuVar10 != local_e8);
        }
        uVar17 = FPropertyCombinationPack2::Pack((uint *)ppuVar8,local_16c);
        FAutomationTestBase::TestTrue
                  ((FAutomationTestBase *)this,
                   L"Hardcoded AddRange results in same set as adding all values to a single set",
                   uVar17 == uVar20);
        local_110 = local_110 + 1;
      } while (local_110 < 3);
      local_8c[2] = local_8c[2] + 1;
      local_158 = 2;
    }
    else {
      iVar15 = local_158 + -1;
      if (local_8c[(longlong)iVar15 + 1] < 4) {
        if (local_158 < 3) {
          local_8c[(longlong)local_158 + 1] = 0;
        }
        local_158 = local_158 + 1;
      }
      else {
        local_158 = iVar15;
        if (0 < iVar15) {
          local_8c[iVar15] = local_8c[iVar15] + 1;
          goto LAB_142b4bd20;
        }
      }
    }
    if (local_158 < 1) {
      return;
    }
  } while( true );
}

// TestHardcodedSet<3> @ 142b4c960

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000142b4cd2c) */
/* WARNING: Removing unreachable block (ram,0x000142b4cd51) */
/* WARNING: Removing unreachable block (ram,0x000142b4c9df) */
/* WARNING: Removing unreachable block (ram,0x000142b4ca04) */
/* WARNING: Removing unreachable block (ram,0x000142b4ca87) */
/* WARNING: Removing unreachable block (ram,0x000142b4caac) */
/* WARNING: Removing unreachable block (ram,0x000142b4ced7) */
/* WARNING: Removing unreachable block (ram,0x000142b4cefc) */

void __thiscall FPropertyCombinationSetTest::TestHardcodedSet<3>(FPropertyCombinationSetTest *this)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  uint **ppuVar9;
  uint *puVar10;
  FIdentityFunctor FVar11;
  ForElementType<unsigned_int> FVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  uint uVar16;
  uint *puVar17;
  uint *puVar18;
  ulonglong uVar19;
  char cVar20;
  int iVar21;
  uint *puVar22;
  undefined1 auStackY_298 [32];
  FIdentityFunctor local_267;
  int local_264;
  uint local_260;
  longlong local_258;
  int local_24c;
  longlong local_240;
  uint local_230;
  uint local_22c;
  int local_228;
  int local_224;
  int local_220;
  int local_21c;
  int local_218;
  int local_214;
  int local_210;
  int local_20c;
  int local_208;
  int local_204;
  int local_200;
  int local_1fc;
  int local_1f8;
  int local_1f4;
  int local_1f0;
  int local_1ec;
  int local_1e8;
  uint local_1e4;
  int local_1e0 [2];
  uint *local_1d8;
  uint *local_1d0;
  uint *local_1c8;
  int local_1c0;
  uint local_1bc;
  uint *local_1b8;
  uint *local_1b0;
  uint *local_1a8;
  uint *local_1a0;
  uint *local_198;
  uint *local_190;
  uint *local_188;
  uint *local_180;
  uint *local_178;
  uint *local_170;
  uint *local_168;
  uint *local_160;
  uint *local_158;
  uint *local_150;
  uint *local_148;
  uint *local_140;
  uint *local_138;
  uint *local_130;
  uint local_128;
  uint local_124;
  FString local_120;
  FString local_110;
  FString local_100;
  TBitArray<FDefaultBitArrayAllocator> local_f0;
  uint local_d0 [3];
  uint auStack_c4 [11];
  uint local_98 [4];
  uint local_88 [4];
  uint local_78 [4];
  uint local_68 [10];
  uint local_40 [4];
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_298;
  ppuVar9 = &`public:_static_void___cdecl_FPropertyCombinationPack3::Unpack(unsigned_int,unsigned_int_const*___ptr64&___ptr64,int&___ptr64)'
             ::__l5::Values;
  do {
    if (*(int *)ppuVar9 == 0) {
      bVar3 = true;
      goto LAB_142b4c9c6;
    }
    ppuVar9 = (uint **)((longlong)ppuVar9 + 4);
  } while (ppuVar9 !=
           (uint **)((longlong)
                     &`public:_static_void___cdecl_FPropertyCombinationPack3::Unpack(unsigned_int,unsigned_int_const*___ptr64&___ptr64,int&___ptr64)'
                      ::__l5::Values + 4));
  bVar3 = false;
LAB_142b4c9c6:
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"Hardcoded Constructor stores value 0",bVar3);
  uVar15 = 1;
  do {
    FPropertyCombinationPack3::Unpack(0,&local_138,&local_228);
    puVar17 = local_138;
    lVar14 = (longlong)local_228;
    if ((local_228 < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    puVar10 = puVar17 + lVar14;
    for (; puVar17 != puVar10; puVar17 = puVar17 + 1) {
      if (*puVar17 == uVar15) {
        bVar3 = true;
        goto LAB_142b4ca65;
      }
    }
    bVar3 = false;
LAB_142b4ca65:
    FAutomationTestBase::TestFalse
              ((FAutomationTestBase *)this,L"Hardcoded Constructor is empty other than 0",bVar3);
    uVar15 = uVar15 + 1;
  } while (uVar15 < 8);
  uVar15 = 0;
  do {
    uVar16 = 0;
    do {
      FPropertyCombinationPack3::Unpack(uVar15,&local_1b8,&local_224);
      puVar17 = local_1b8;
      lVar14 = (longlong)local_224;
      if ((local_224 < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      puVar10 = puVar17 + lVar14;
      for (; puVar17 != puVar10; puVar17 = puVar17 + 1) {
        if (*puVar17 == uVar16) {
          cVar20 = '\x01';
          goto LAB_142b4cb14;
        }
      }
      cVar20 = '\0';
LAB_142b4cb14:
      if ((7 < uVar16) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Value <= MaxValue",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\PropertyCombinationSet.h"
                             ,0x1b0,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FPropertyCombinationPack3::Unpack(uVar15,&local_1b0,&local_220);
      puVar17 = local_1b0;
      lVar14 = (longlong)local_220;
      if ((local_220 < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      puVar10 = puVar17 + lVar14;
      for (; puVar17 != puVar10; puVar17 = puVar17 + 1) {
        if (*puVar17 == uVar16) {
          cVar4 = '\x01';
          goto LAB_142b4cba3;
        }
      }
      cVar4 = '\0';
LAB_142b4cba3:
      if (cVar4 != cVar20) {
        pcVar2 = *(code **)(*(longlong *)this + 0x28);
        ::FString::PrintfImpl(&local_120,L"%s: The two values are not equal.");
        (*pcVar2)(this,&local_120,0);
        if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_120.Data.AllocatorInstance.Data);
        }
      }
      uVar16 = uVar16 + 1;
    } while (uVar16 < 8);
    uVar15 = uVar15 + 1;
  } while (uVar15 < 0x13);
  iVar21 = 5;
  local_240 = 0x20;
  do {
    uVar15 = 0;
    do {
      uVar16 = 0;
      local_f0.NumBits = 0;
      local_f0.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
      local_f0.MaxBits = 0x80;
      local_230 = uVar15;
      if (-1 < iVar21) {
        iVar7 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized(&local_f0,iVar21);
        TBitArray<FDefaultBitArrayAllocator>::SetRange(&local_f0,iVar7,iVar21,true);
      }
      if ((local_f0.NumBits < iVar21) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index >= 0 && NumBitsToSet >= 0 && Index + NumBitsToSet <= NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x3bc,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FVar12 = (ForElementType<unsigned_int>)&local_f0;
      if (local_f0.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar12 = local_f0.AllocatorInstance.SecondaryData;
      }
      FBitArrayMemory::MemmoveBitsWordOrder((uint *)FVar12,iVar21 + -5,&local_230,0,5);
      local_22c = 0;
      if ((local_f0.NumBits < iVar21) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index >= 0 && NumBitsToGet >= 0 && Index + NumBitsToGet <= NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x3df,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FVar12 = (ForElementType<unsigned_int>)&local_f0;
      if (local_f0.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar12 = local_f0.AllocatorInstance.SecondaryData;
      }
      FBitArrayMemory::MemmoveBitsWordOrder(&local_22c,0,(uint *)FVar12,iVar21 + -5,5);
      do {
        FPropertyCombinationPack3::Unpack(local_230,&local_1a8,&local_21c);
        puVar17 = local_1a8;
        lVar14 = (longlong)local_21c;
        if ((local_21c < 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("ArrayNum >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xfe,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        puVar10 = puVar17 + lVar14;
        for (; puVar17 != puVar10; puVar17 = puVar17 + 1) {
          if (*puVar17 == uVar16) {
            cVar20 = '\x01';
            goto LAB_142b4cdb4;
          }
        }
        cVar20 = '\0';
LAB_142b4cdb4:
        if ((7 < uVar16) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Value <= MaxValue",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\PropertyCombinationSet.h"
                               ,0x1b0,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        FPropertyCombinationPack3::Unpack(local_22c,&local_1a0,&local_218);
        puVar17 = local_1a0;
        lVar14 = (longlong)local_218;
        if ((local_218 < 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("ArrayNum >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xfe,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        puVar10 = puVar17 + lVar14;
        for (; puVar17 != puVar10; puVar17 = puVar17 + 1) {
          if (*puVar17 == uVar16) {
            cVar4 = '\x01';
            goto LAB_142b4ce43;
          }
        }
        cVar4 = '\0';
LAB_142b4ce43:
        if (cVar4 != cVar20) {
          pcVar2 = *(code **)(*(longlong *)this + 0x28);
          ::FString::PrintfImpl(&local_110,L"%s: The two values are not equal.");
          (*pcVar2)(this,&local_110,0);
          if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_110.Data.AllocatorInstance.Data);
          }
        }
        uVar16 = uVar16 + 1;
      } while (uVar16 < 8);
      if (local_f0.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_f0.AllocatorInstance.SecondaryData);
      }
      uVar15 = uVar15 + 1;
    } while (uVar15 < 0x13);
    iVar21 = iVar21 + 1;
    local_240 = local_240 + -1;
  } while (local_240 != 0);
  uVar15 = 0;
  do {
    uVar16 = 0;
    do {
      FPropertyCombinationPack3::Unpack(uVar15,&local_198,&local_214);
      puVar17 = local_198;
      lVar14 = (longlong)local_214;
      if ((local_214 < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      puVar10 = puVar17 + lVar14;
      for (; puVar17 != puVar10; puVar17 = puVar17 + 1) {
        if (*puVar17 == uVar16) {
          cVar20 = '\x01';
          goto LAB_142b4cf5c;
        }
      }
      cVar20 = '\0';
LAB_142b4cf5c:
      if ((7 < uVar16) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Value <= MaxValue",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\PropertyCombinationSet.h"
                             ,0x1b0,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FPropertyCombinationPack3::Unpack(uVar15,&local_190,&local_210);
      puVar17 = local_190;
      lVar14 = (longlong)local_210;
      if ((local_210 < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      puVar10 = puVar17 + lVar14;
      for (; puVar17 != puVar10; puVar17 = puVar17 + 1) {
        if (*puVar17 == uVar16) {
          cVar4 = '\x01';
          goto LAB_142b4cfe5;
        }
      }
      cVar4 = '\0';
LAB_142b4cfe5:
      if (cVar4 != cVar20) {
        pcVar2 = *(code **)(*(longlong *)this + 0x28);
        ::FString::PrintfImpl(&local_100,L"%s: The two values are not equal.");
        (*pcVar2)(this,&local_100,0);
        if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_100.Data.AllocatorInstance.Data);
        }
      }
      uVar16 = uVar16 + 1;
    } while (uVar16 < 8);
    uVar15 = uVar15 + 1;
  } while (uVar15 < 0x13);
  local_24c = 1;
  auStack_c4[1] = 0;
LAB_142b4d080:
  do {
    if (local_24c == 4) {
      uVar15 = 0;
      local_68[0] = 0;
      local_264 = 1;
      local_258 = 1;
      iVar21 = 0;
      puVar17 = auStack_c4;
      do {
        puVar17 = puVar17 + 1;
        uVar16 = *puVar17;
        if ((7 < uVar16) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("PropertyCombination <= MaxValue",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\PropertyCombinationSet.h"
                               ,0x185,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        FPropertyCombinationPack3::Unpack(uVar15,&local_188,&local_20c);
        bVar3 = TPropertyCombinationSetHardcoded<FPropertyCombinationPack3>::AddNonRedundant
                          (local_188,local_20c,uVar16,local_98,&local_208);
        if (bVar3) {
          uVar15 = FPropertyCombinationPack3::Pack(local_98,local_208);
        }
        bVar3 = false;
        FVar11 = (FIdentityFunctor)0x0;
        lVar14 = 0;
        if (local_258 < 1) {
LAB_142b4d42f:
          if ((7 < uVar16) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("Value <= MaxValue",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\PropertyCombinationSet.h"
                                 ,0x1b0,L""), bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          FPropertyCombinationPack3::Unpack(uVar15,&local_168,&local_1f8);
          puVar10 = local_168;
          lVar14 = (longlong)local_1f8;
          if ((local_1f8 < 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("ArrayNum >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xfe,L""), bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          puVar22 = puVar10 + lVar14;
          for (; puVar10 != puVar22; puVar10 = puVar10 + 1) {
            if (*puVar10 == uVar16) {
              bVar3 = true;
              goto LAB_142b4d4c1;
            }
          }
          bVar3 = false;
LAB_142b4d4c1:
          FAutomationTestBase::TestTrue
                    ((FAutomationTestBase *)this,L"Hardcoded Add correctly added non-redundant",
                     bVar3);
          if ((2 < local_258) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("NumExisting < MaxNonRedundant",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\PropertyCombinationSetTest.cpp"
                                 ,0xb5,L""), bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          local_264 = local_264 + 1;
          local_68[local_258] = uVar16;
          local_258 = local_258 + 1;
        }
        else {
          puVar10 = local_68;
          iVar7 = local_264 + -1;
          do {
            uVar8 = *puVar10;
            FVar11 = (FIdentityFunctor)((byte)FVar11 | uVar16 == uVar8);
            bVar3 = (bool)(bVar3 | ((uVar8 & uVar16) == uVar16 && uVar8 != uVar16));
            if (uVar16 == uVar8 || (uVar8 & uVar16) != uVar8) {
              if ((7 < uVar8) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Value <= MaxValue",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\PropertyCombinationSet.h"
                                     ,0x1b0,L""), bVar5)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              FPropertyCombinationPack3::Unpack(uVar15,&local_178,&local_200);
              puVar22 = local_178;
              lVar13 = (longlong)local_200;
              if ((local_200 < 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("ArrayNum >= 0",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                     ,0xfe,L""), bVar5)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              puVar18 = puVar22 + lVar13;
              for (; puVar22 != puVar18; puVar22 = puVar22 + 1) {
                if (*puVar22 == uVar8) {
                  bVar5 = true;
                  goto LAB_142b4d32c;
                }
              }
              bVar5 = false;
LAB_142b4d32c:
              FAutomationTestBase::TestTrue
                        ((FAutomationTestBase *)this,
                         L"Hardcoded Add correctly kept existing non-redundant",bVar5);
              lVar14 = lVar14 + 1;
              puVar10 = puVar10 + 1;
            }
            else {
              if (lVar14 < iVar7) {
                puVar18 = puVar10;
                puVar22 = puVar10;
                for (lVar13 = iVar7 - lVar14; puVar22 = puVar22 + 1, lVar13 != 0;
                    lVar13 = lVar13 + -1) {
                  *puVar18 = *puVar22;
                  puVar18 = puVar18 + 1;
                }
              }
              local_264 = local_264 + -1;
              local_258 = local_258 + -1;
              iVar7 = iVar7 + -1;
              if ((7 < uVar8) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Value <= MaxValue",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\PropertyCombinationSet.h"
                                     ,0x1b0,L""), bVar5)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              FPropertyCombinationPack3::Unpack(uVar15,&local_180,&local_204);
              puVar22 = local_180;
              lVar13 = (longlong)local_204;
              if ((local_204 < 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("ArrayNum >= 0",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                     ,0xfe,L""), bVar5)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              puVar18 = puVar22 + lVar13;
              for (; puVar22 != puVar18; puVar22 = puVar22 + 1) {
                if (*puVar22 == uVar8) {
                  bVar5 = true;
                  goto LAB_142b4d251;
                }
              }
              bVar5 = false;
LAB_142b4d251:
              FAutomationTestBase::TestFalse
                        ((FAutomationTestBase *)this,
                         L"Hardcoded Add correctly removed existing redundant",bVar5);
            }
          } while (lVar14 < local_258);
          local_267 = FVar11;
          if (bVar3) {
            if ((7 < uVar16) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Value <= MaxValue",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\PropertyCombinationSet.h"
                                   ,0x1b0,L""), bVar3)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            FPropertyCombinationPack3::Unpack(uVar15,&local_170,&local_1fc);
            puVar10 = local_170;
            lVar14 = (longlong)local_1fc;
            if ((local_1fc < 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("ArrayNum >= 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0xfe,L""), bVar3)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            puVar22 = puVar10 + lVar14;
            for (; puVar10 != puVar22; puVar10 = puVar10 + 1) {
              if (*puVar10 == uVar16) {
                bVar3 = true;
                goto LAB_142b4d3f8;
              }
            }
            bVar3 = false;
LAB_142b4d3f8:
            FAutomationTestBase::TestFalse
                      ((FAutomationTestBase *)this,L"Hardcoded Add correctly did not add redundant",
                       bVar3);
          }
          else if (FVar11 == (FIdentityFunctor)0x0) goto LAB_142b4d42f;
        }
        iVar21 = iVar21 + 1;
      } while (iVar21 < 4);
      FAutomationTestBase::TestTrue
                ((FAutomationTestBase *)this,
                 L"Hardcoded MaxNonRedundant is correct - trying to add more than MaxNonRedundant results in one of them being redundant"
                 ,local_264 < 4);
      if ((local_264 < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      AlgoImpl::IntroSortInternal<unsigned_int,int,FIdentityFunctor,TLess<void>_>
                (local_68,local_264,local_267,(TLess<void>)local_267);
      lVar14 = 0;
      FPropertyCombinationPack3::Unpack(uVar15,&local_1c8,&local_1c0);
      local_1bc = 0;
      FPropertyCombinationPack3::Unpack(uVar15,&local_130,(int *)&local_128);
      local_124 = local_128;
      if (local_128 != 0) {
        uVar19 = (ulonglong)local_128;
        local_1bc = local_128;
        puVar17 = local_1c8;
        do {
          if ((lVar14 < local_264) && (*puVar17 == local_68[lVar14])) {
            bVar3 = true;
          }
          else {
            bVar3 = false;
          }
          FAutomationTestBase::TestTrue
                    ((FAutomationTestBase *)this,
                     L"Hardcoded Iteration lists the existing non-redundant values in order",bVar3);
          lVar14 = lVar14 + 1;
          puVar17 = puVar17 + 1;
          uVar19 = uVar19 - 1;
        } while (uVar19 != 0);
      }
      local_240 = 0;
      do {
        uVar16 = 0;
        uVar8 = 0;
        lVar13 = 0;
        lVar14 = local_240;
        if (0 < local_240) {
          do {
            uVar1 = auStack_c4[lVar13 + 1];
            if ((7 < uVar1) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("PropertyCombination <= MaxValue",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\PropertyCombinationSet.h"
                                   ,0x185,L""), bVar3)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            FPropertyCombinationPack3::Unpack(uVar16,&local_160,&local_1f4);
            bVar3 = TPropertyCombinationSetHardcoded<FPropertyCombinationPack3>::AddNonRedundant
                              (local_160,local_1f4,uVar1,local_88,&local_1f0);
            if (bVar3) {
              uVar16 = FPropertyCombinationPack3::Pack(local_88,local_1f0);
            }
            lVar13 = lVar13 + 1;
          } while (lVar13 < local_240);
        }
        do {
          uVar1 = auStack_c4[lVar14 + 1];
          if ((7 < uVar1) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("PropertyCombination <= MaxValue",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\PropertyCombinationSet.h"
                                 ,0x185,L""), bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          FPropertyCombinationPack3::Unpack(uVar8,&local_158,&local_1ec);
          bVar3 = TPropertyCombinationSetHardcoded<FPropertyCombinationPack3>::AddNonRedundant
                            (local_158,local_1ec,uVar1,local_78,&local_1e8);
          if (bVar3) {
            uVar8 = FPropertyCombinationPack3::Pack(local_78,local_1e8);
          }
          lVar14 = lVar14 + 1;
        } while (lVar14 < 4);
        FPropertyCombinationPack3::Unpack(uVar16,&local_150,(int *)&local_1e4);
        FPropertyCombinationPack3::Unpack(uVar8,&local_148,local_1e0);
        puVar22 = local_148;
        puVar10 = local_150;
        local_260 = local_1e4;
        lVar14 = (longlong)local_1e0[0];
        puVar17 = local_d0;
        local_1d8 = local_150;
        if ((local_1e0[0] < 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("ArrayNum >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xfe,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        local_1d0 = puVar22 + lVar14;
        if (puVar22 != local_1d0) {
          do {
            uVar16 = *puVar22;
            uVar8 = 0;
            lVar14 = 0;
            bVar3 = false;
            local_140 = puVar17;
            if (((int)local_260 < 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("ArrayNum >= 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0xfe,L""), bVar5)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            bVar5 = false;
            puVar18 = puVar10 + (int)local_260;
            if (puVar10 == puVar18) {
LAB_142b4d964:
              uVar8 = uVar8 + 1;
              puVar17[lVar14] = uVar16;
            }
            else {
              do {
                uVar1 = *puVar10;
                if ((uVar1 & uVar16) == uVar16) {
                  bVar3 = false;
                  goto LAB_142b4da40;
                }
                if ((uVar16 < uVar1) && (!bVar5)) {
                  if ((2 < uVar8) &&
                     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                        ("NewNum < ArrayMax",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\PropertyCombinationSet.h"
                                         ,0x1fa,L""), bVar3)) {
                    pcVar2 = (code *)swi(3);
                    (*pcVar2)();
                    return;
                  }
                  uVar8 = uVar8 + 1;
                  puVar17[lVar14] = uVar16;
                  bVar5 = true;
                  lVar14 = lVar14 + 1;
                  bVar3 = true;
                }
                if ((uVar1 & uVar16) != uVar1) {
                  if ((2 < uVar8) &&
                     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                        ("NewNum < ArrayMax",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\PropertyCombinationSet.h"
                                         ,0x200,L""), bVar5 = bVar3, bVar6)) {
                    pcVar2 = (code *)swi(3);
                    (*pcVar2)();
                    return;
                  }
                  uVar8 = uVar8 + 1;
                  puVar17[lVar14] = uVar1;
                  lVar14 = lVar14 + 1;
                }
                puVar10 = puVar10 + 1;
              } while (puVar10 != puVar18);
              if (!bVar5) {
                if ((2 < uVar8) &&
                   (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                      ("NewNum < ArrayMax",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\PropertyCombinationSet.h"
                                       ,0x206,L""), bVar3)) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                goto LAB_142b4d964;
              }
            }
            if (((int)uVar8 < 1) || (3 < uVar8)) {
              bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("1 <= NewNum && NewNum <= ArrayMax",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\PropertyCombinationSet.h"
                                 ,0x209,L"");
              if (bVar3) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              if ((int)uVar8 < 0) {
                bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("ArrayNum >= 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0xfe,L"");
                if (bVar3) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                goto LAB_142b4d9d4;
              }
              if (uVar8 != 0) goto LAB_142b4d9d4;
            }
            else {
LAB_142b4d9d4:
              iVar21 = uVar8 - 1;
              if (iVar21 != 0) {
                puVar10 = puVar17;
                uVar16 = *puVar17;
                do {
                  puVar18 = puVar10 + 1;
                  puVar10 = puVar10 + 1;
                  if (*puVar18 < uVar16) {
                    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Algo::IsSorted(TArrayView<uint32>(NewValues, NewNum))",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\PropertyCombinationSet.h"
                                       ,0x20a,L"");
                    if (bVar3) {
                      pcVar2 = (code *)swi(3);
                      (*pcVar2)();
                      return;
                    }
                    break;
                  }
                  iVar21 = iVar21 + -1;
                  uVar16 = *puVar18;
                } while (iVar21 != 0);
              }
            }
            bVar3 = true;
            bVar5 = puVar17 != local_d0;
            puVar17 = local_40;
            if (bVar5) {
              puVar17 = local_d0;
            }
LAB_142b4da40:
            puVar10 = local_140;
            if (!bVar3) {
              puVar10 = local_1d8;
              uVar8 = local_260;
            }
            local_260 = uVar8;
            puVar22 = puVar22 + 1;
            local_1d8 = puVar10;
          } while (puVar22 != local_1d0);
        }
        uVar16 = FPropertyCombinationPack3::Pack(puVar10,local_260);
        FAutomationTestBase::TestTrue
                  ((FAutomationTestBase *)this,
                   L"Hardcoded AddRange results in same set as adding all values to a single set",
                   uVar16 == uVar15);
        local_240 = local_240 + 1;
      } while (local_240 < 4);
      auStack_c4[3] = auStack_c4[3] + 1;
      local_24c = 3;
    }
    else {
      iVar21 = local_24c + -1;
      if (auStack_c4[(longlong)iVar21 + 1] < 8) {
        if (local_24c < 4) {
          auStack_c4[(longlong)local_24c + 1] = 0;
        }
        local_24c = local_24c + 1;
      }
      else {
        local_24c = iVar21;
        if (0 < iVar21) {
          auStack_c4[iVar21] = auStack_c4[iVar21] + 1;
          goto LAB_142b4d080;
        }
      }
    }
    if (local_24c < 1) {
      return;
    }
  } while( true );
}

