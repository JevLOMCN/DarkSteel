// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 27

// FMallocBinned3 @ 1416791e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FMallocBinned3 * __thiscall
FMallocBinned3::FMallocBinned3(FMallocBinned3 *this,FPlatformVirtualMemoryBlock *param_1)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  code *pcVar4;
  undefined8 uVar5;
  FPoolTable *pFVar6;
  bool bVar7;
  uchar uVar8;
  uint uVar9;
  FPlatformVirtualMemoryBlock *pFVar10;
  FMallocBinned3 *pFVar11;
  ulong64 uVar12;
  uchar **ppuVar13;
  FGenericPlatformMemoryConstants *pFVar14;
  FPoolInfoSmall **_Dst;
  FPoolInfoSmall **ppFVar15;
  byte bVar16;
  int iVar17;
  uchar *puVar18;
  uint uVar19;
  longlong lVar20;
  uchar *puVar21;
  FSizeTableEntry *pFVar22;
  uint uVar23;
  int iVar24;
  ulonglong uVar26;
  uint uVar27;
  uint uVar28;
  FPlatformVirtualMemoryBlock *pFVar29;
  ushort *puVar30;
  FPoolInfoSmall ***pppFVar31;
  uchar **ppuVar32;
  uint *puVar33;
  void *pvVar34;
  uchar *puVar35;
  FBitTree *pFVar36;
  undefined1 auStackY_398 [32];
  uchar **local_368;
  longlong local_360;
  uchar *local_310 [3];
  ulong64 local_2f8;
  ulong64 uStack_2f0;
  ulong64 local_2e8;
  ulong64 uStack_2e0;
  ulong64 local_2d8;
  ulong64 uStack_2d0;
  uchar *local_2c8;
  ulong64 uStack_2c0;
  undefined8 local_2b8;
  FSizeTableEntry local_2a8;
  uint local_2a0 [150];
  int local_48;
  ulonglong local_38;
  uchar *puVar25;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_398;
  puVar18 = (uchar *)0x0;
  this->_padding_ = (longlong)&___7FMallocBinnedCommonBase__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->_padding_,4000);
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FMallocBinned3__6B_;
  pFVar6 = this->SmallPoolTables;
  this->_padding_ = 0;
  lVar20 = 0x4d;
  local_360 = 0x4d;
  do {
    pFVar36 = &pFVar6->BlocksAllocatedBits;
    *(undefined4 *)((longlong)(pFVar36 + -1) + 0x1c) = 0;
    pFVar36->Bits = (ulong64 *)0x0;
    pFVar36[1].Bits = (ulong64 *)0x0;
    *(ulong64 *)((longlong)(pFVar36 + 2) + 8) = 0;
    *(undefined8 *)((longlong)(pFVar36 + 2) + 0x10) = 0;
    *(uint *)((longlong)(pFVar36 + 2) + 0x18) = 0;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(pFVar36 + 3),4000);
    *(undefined8 *)((longlong)(pFVar36 + 4) + 8) = 0;
    *(undefined8 *)((longlong)(pFVar36 + 4) + 0x10) = 0;
    *(undefined8 *)((longlong)(pFVar36 + 4) + 0x18) = 0;
    pFVar6 = (FPoolTable *)(pFVar36 + 5);
    lVar20 = lVar20 + -1;
  } while (lVar20 != 0);
  pFVar29 = this->PoolBaseVMBlock;
  lVar20 = 0x4d;
  pFVar10 = pFVar29;
  do {
    *(undefined8 *)pFVar10 = 0;
    *(undefined4 *)&pFVar10->field_0x8 = 0;
    pFVar10 = pFVar10 + 1;
    lVar20 = lVar20 + -1;
  } while (lVar20 != 0);
  if ((bOnce != false) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bOnce",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinned3.cpp"
                         ,0x1bd,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    pFVar11 = (FMallocBinned3 *)(*pcVar4)();
    return pFVar11;
  }
  bOnce = true;
  uVar12 = FWindowsPlatformMemory::FPlatformVirtualMemoryBlock::GetCommitAlignment();
  FMallocBinnedCommonBase::OsAllocationGranularity = (uint)uVar12;
  if (((FMallocBinnedCommonBase::OsAllocationGranularity &
       FMallocBinnedCommonBase::OsAllocationGranularity - 1) != 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("FMath::IsPowerOfTwo(OsAllocationGranularity)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinned3.cpp"
                         ,0x1c1,L"OS page size must be a power of two"), bVar7)) {
    pcVar4 = (code *)swi(3);
    pFVar11 = (FMallocBinned3 *)(*pcVar4)();
    return pFVar11;
  }
  ppuVar32 = PoolBaseVMPtr;
  local_368 = PoolBaseVMPtr;
  puVar21 = puVar18;
  do {
    for (lVar20 = 0x3f; 0x7fffffffUL >> lVar20 == 0; lVar20 = lVar20 + -1) {
    }
    uVar9 = 1 << ((byte)lVar20 & 0x1f);
    iVar24 = 0;
    if (uVar9 != 0) {
      for (; (uVar9 >> iVar24 & 1) == 0; iVar24 = iVar24 + 1) {
      }
    }
    bVar16 = 0x20;
    if (uVar9 != 0) {
      bVar16 = (byte)iVar24;
    }
    FWindowsPlatformMemory::FPlatformVirtualMemoryBlock::AllocateVirtual
              ((FPlatformVirtualMemoryBlock *)local_310,1L << (bVar16 & 0x3f),
               (ulonglong)FMallocBinnedCommonBase::OsAllocationGranularity);
    puVar35 = local_310[0];
    if ((((ulonglong)local_310[0] & (ulonglong)FMallocBinnedCommonBase::OsAllocationGranularity - 1)
         != 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsAligned(NewVM, OsAllocationGranularity)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinned3.cpp"
                           ,0x1d2,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      pFVar11 = (FMallocBinned3 *)(*pcVar4)();
      return pFVar11;
    }
    uVar9 = (uint)puVar21;
    if ((uVar9 == 0) || (PoolBaseVMPtr[uVar9 - 1] <= puVar35)) {
      *local_368 = puVar35;
      *(uchar **)pFVar29 = local_310[0];
      *(uchar **)&pFVar29->field_0x8 = local_310[1];
    }
    else {
      uVar23 = 0;
      if (uVar9 != 0) {
        ppuVar13 = PoolBaseVMPtr;
        puVar25 = puVar18;
        do {
          uVar23 = (uint)puVar25;
          if (puVar35 < *ppuVar13) goto LAB_141679445;
          uVar23 = uVar23 + 1;
          puVar25 = (uchar *)(ulonglong)uVar23;
          ppuVar13 = ppuVar13 + 1;
        } while (uVar23 < uVar9);
      }
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InsertIndex < Index",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinned3.cpp"
                         ,0x1de,L"");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        pFVar11 = (FMallocBinned3 *)(*pcVar4)();
        return pFVar11;
      }
LAB_141679445:
      if (uVar23 < uVar9) {
        pFVar10 = this->PoolBaseVMBlock + (longlong)puVar21;
        ppuVar13 = PoolBaseVMPtr + (longlong)puVar21;
        do {
          uVar27 = (int)puVar21 - 1;
          puVar21 = (uchar *)(ulonglong)uVar27;
          *ppuVar13 = PoolBaseVMPtr[(longlong)puVar21];
          uVar5 = *(undefined8 *)&this->PoolBaseVMBlock[(longlong)puVar21].field_0x8;
          *(undefined8 *)pFVar10 = *(undefined8 *)(this->PoolBaseVMBlock + (longlong)puVar21);
          *(undefined8 *)&pFVar10->field_0x8 = uVar5;
          pFVar10 = pFVar10 + -1;
          ppuVar13 = ppuVar13 + -1;
        } while (uVar23 < uVar27);
      }
      PoolBaseVMPtr[uVar23] = puVar35;
      *(uchar **)(this->PoolBaseVMBlock + uVar23) = local_310[0];
      *(uchar **)&this->PoolBaseVMBlock[uVar23].field_0x8 = local_310[1];
    }
    local_368 = local_368 + 1;
    puVar21 = (uchar *)(ulonglong)(uVar9 + 1);
    pFVar29 = pFVar29 + 1;
    if (0x4c < uVar9 + 1) {
      ppuVar13 = PoolBaseVMPtr;
      HighestPoolBaseVMPtr = PoolBaseVMPtr[0x4c];
      lVar20 = 0x4c;
      puVar21 = puVar18;
      do {
        ppuVar13 = ppuVar13 + 1;
        if ((*ppuVar13 <= *ppuVar32) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("PoolBaseVMPtr[Index + 1] > PoolBaseVMPtr[Index]",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinned3.cpp"
                               ,0x1f1,L""), bVar7)) {
          pcVar4 = (code *)swi(3);
          pFVar11 = (FMallocBinned3 *)(*pcVar4)();
          return pFVar11;
        }
        for (lVar1 = 0x3f; 0x7fffffffUL >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
        uVar9 = 1 << ((byte)lVar1 & 0x1f);
        iVar24 = 0;
        if (uVar9 != 0) {
          for (; (uVar9 >> iVar24 & 1) == 0; iVar24 = iVar24 + 1) {
          }
        }
        bVar16 = 0x20;
        if (uVar9 != 0) {
          bVar16 = (byte)iVar24;
        }
        if ((*ppuVar13 < *ppuVar32 + (1L << (bVar16 & 0x3f))) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("PoolBaseVMPtr[Index + 1] >= PoolBaseVMPtr[Index] + (1ull << (FMath::CountTrailingZeros(FMath::RoundUpToPowerOfTwo(1024 * 1024 * 1024))))"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinned3.cpp"
                               ,0x1f2,L""), bVar7)) {
          pcVar4 = (code *)swi(3);
          pFVar11 = (FMallocBinned3 *)(*pcVar4)();
          return pFVar11;
        }
        for (lVar1 = 0x3f; 0x7fffffffUL >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
        uVar9 = 1 << ((byte)lVar1 & 0x1f);
        iVar24 = 0;
        if (uVar9 != 0) {
          for (; (uVar9 >> iVar24 & 1) == 0; iVar24 = iVar24 + 1) {
          }
        }
        bVar16 = 0x20;
        if (uVar9 != 0) {
          bVar16 = (byte)iVar24;
        }
        puVar35 = *ppuVar32;
        ppuVar32 = ppuVar32 + 1;
        puVar21 = *ppuVar13 + (longlong)(puVar21 + (-(longlong)puVar35 - (1L << (bVar16 & 0x3f))));
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      if (puVar21 == (uchar *)0x0) {
        PoolSearchDiv = 0;
        pFVar14 = FWindowsPlatformMemory::GetConstants();
        local_2f8 = pFVar14->TotalPhysical;
        uStack_2f0 = pFVar14->TotalVirtual;
        local_2e8 = pFVar14->PageSize;
        uStack_2e0 = pFVar14->OsAllocationGranularity;
        local_2d8 = pFVar14->BinnedPageSize;
        uStack_2d0 = pFVar14->BinnedAllocationGranularity;
        local_2c8 = (uchar *)pFVar14->AddressStart;
        uStack_2c0 = pFVar14->AddressLimit;
        local_2b8 = *(undefined8 *)&pFVar14->TotalPhysicalGB;
        puVar21 = local_2c8;
        if (local_2c8 == PoolBaseVMPtr[0]) {
          for (lVar20 = 0x3f; 0x7fffffffUL >> lVar20 == 0; lVar20 = lVar20 + -1) {
          }
          uVar9 = 1 << ((byte)lVar20 & 0x1f);
          iVar24 = 0;
          if (uVar9 != 0) {
            for (; (uVar9 >> iVar24 & 1) == 0; iVar24 = iVar24 + 1) {
            }
          }
          bVar16 = 0x20;
          if (uVar9 != 0) {
            bVar16 = (byte)iVar24;
          }
          puVar21 = local_2c8 +
                    (((ulonglong)FMallocBinnedCommonBase::OsAllocationGranularity - 1) +
                     (1L << (bVar16 & 0x3f)) * 0x4d &
                    ~((ulonglong)FMallocBinnedCommonBase::OsAllocationGranularity - 1));
        }
      }
      else {
        for (lVar20 = 0x3f; 0x7fffffffUL >> lVar20 == 0; lVar20 = lVar20 + -1) {
        }
        uVar9 = 1 << ((byte)lVar20 & 0x1f);
        iVar24 = 0;
        if (uVar9 != 0) {
          for (; (uVar9 >> iVar24 & 1) == 0; iVar24 = iVar24 + 1) {
          }
        }
        bVar16 = 0x20;
        if (uVar9 != 0) {
          bVar16 = (byte)iVar24;
        }
        for (lVar20 = 0x3f; 0x7fffffffUL >> lVar20 == 0; lVar20 = lVar20 + -1) {
        }
        if (puVar21 < (uchar *)(1L << (bVar16 & 0x3f))) {
          uVar9 = 1 << ((byte)lVar20 & 0x1f);
          iVar24 = 0;
          if (uVar9 != 0) {
            for (; (uVar9 >> iVar24 & 1) == 0; iVar24 = iVar24 + 1) {
            }
          }
          bVar16 = 0x20;
          if (uVar9 != 0) {
            bVar16 = (byte)iVar24;
          }
          PoolSearchDiv = 1L << (bVar16 & 0x3f);
        }
        else {
          uVar9 = 1 << ((byte)lVar20 & 0x1f);
          iVar24 = 0;
          if (uVar9 != 0) {
            for (; (uVar9 >> iVar24 & 1) == 0; iVar24 = iVar24 + 1) {
            }
          }
          bVar16 = 0x20;
          if (uVar9 != 0) {
            bVar16 = (byte)iVar24;
          }
          PoolSearchDiv = (1L << (bVar16 & 0x3f)) + (ulonglong)(puVar21 + 0x4b) / 0x4c;
        }
        pFVar14 = FWindowsPlatformMemory::GetConstants();
        local_2f8 = pFVar14->TotalPhysical;
        uStack_2f0 = pFVar14->TotalVirtual;
        local_2e8 = pFVar14->PageSize;
        uStack_2e0 = pFVar14->OsAllocationGranularity;
        local_2d8 = pFVar14->BinnedPageSize;
        uStack_2d0 = pFVar14->BinnedAllocationGranularity;
        puVar21 = (uchar *)pFVar14->AddressStart;
        uStack_2c0 = pFVar14->AddressLimit;
        local_2b8 = *(undefined8 *)&pFVar14->TotalPhysicalGB;
        local_2c8 = puVar21;
      }
      this->_padding_ = (ulonglong)(FMallocBinnedCommonBase::OsAllocationGranularity >> 4);
      if (((FMallocBinnedCommonBase::OsAllocationGranularity & 0xf) != 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("OsAllocationGranularity % sizeof(FPoolInfo) == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinned3.cpp"
                             ,0x212,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        pFVar11 = (FMallocBinned3 *)(*pcVar4)();
        return pFVar11;
      }
      uVar12 = uStack_2c0;
      FMallocBinnedCommonBase::FPtrToPoolMapping::Init
                ((FPtrToPoolMapping *)&this->_padding_,
                 FMallocBinnedCommonBase::OsAllocationGranularity,this->_padding_,(ulong64)puVar21,
                 uStack_2c0);
      if ((uVar12 <= FMallocBinnedCommonBase::OsAllocationGranularity) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Constants.AddressLimit > OsAllocationGranularity",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinned3.cpp"
                             ,0x215,L"OS address limit must be greater than the page size"), bVar7))
      {
        pcVar4 = (code *)swi(3);
        pFVar11 = (FMallocBinned3 *)(*pcVar4)();
        return pFVar11;
      }
      uVar8 = FSizeTableEntry::FillSizeTable
                        ((ulonglong)FMallocBinnedCommonBase::OsAllocationGranularity,&local_2a8,
                         0x1000,0x20000,0x1000);
      if ((uVar8 != 'M') &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("FSizeTableEntry::FillSizeTable(OsAllocationGranularity, SizeTable, 4096, (128 * 1024), 4096) == (52 + ((128 * 1024) - 28672) / 4096)"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinned3.cpp"
                             ,0x21c,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        pFVar11 = (FMallocBinned3 *)(*pcVar4)();
        return pFVar11;
      }
      if ((local_48 != 0x20000) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("SizeTable[(52 + ((128 * 1024) - 28672) / 4096) - 1].BinSize == (128 * 1024)"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinned3.cpp"
                             ,0x21d,
                             L"UE_MB3_MAX_SMALL_POOL_SIZE must be equal to the largest bin size"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        pFVar11 = (FMallocBinned3 *)(*pcVar4)();
        return pFVar11;
      }
      if ((local_2a8.BinSize < 8) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("sizeof(FFreeBlock) <= SizeTable[0].BinSize",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinned3.cpp"
                             ,0x21e,L"Pool header must be able to fit into the smallest bin"), bVar7
         )) {
        pcVar4 = (code *)swi(3);
        pFVar11 = (FMallocBinned3 *)(*pcVar4)();
        return pFVar11;
      }
      pFVar22 = &local_2a8;
      puVar33 = &this->SmallPoolTables[0].BlockSize;
      this->SmallPoolInfosPerPlatformPage = FMallocBinnedCommonBase::OsAllocationGranularity >> 2;
      puVar30 = SmallBinSizesShifted;
      puVar21 = puVar18;
      puVar35 = puVar18;
      do {
        puVar30 = puVar30 + 1;
        iVar24 = (int)puVar21;
        if (((iVar24 != 0) && (pFVar22->BinSize <= (&local_2a8)[iVar24 - 1].BinSize)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index == 0 || SizeTable[Index - 1].BinSize < SizeTable[Index].BinSize"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinned3.cpp"
                               ,0x225,L"Small bin sizes must be strictly increasing"), bVar7)) {
          pcVar4 = (code *)swi(3);
          pFVar11 = (FMallocBinned3 *)(*pcVar4)();
          return pFVar11;
        }
        uVar23 = pFVar22->BinSize;
        uVar9 = 8;
        uVar27 = pFVar22->NumMemoryPagesPerBlock;
        puVar33[1] = uVar27;
        ((FPoolTable *)(puVar33 + -1))->BinSize = uVar23;
        *puVar33 = uVar27 * FMallocBinnedCommonBase::OsAllocationGranularity;
        *puVar30 = (ushort)(uVar23 >> 3);
        for (lVar20 = 0x3f; 0x7fffffffUL >> lVar20 == 0; lVar20 = lVar20 + -1) {
        }
        uVar23 = 1 << ((byte)lVar20 & 0x1f);
        iVar17 = 0;
        if (uVar23 != 0) {
          for (; (uVar23 >> iVar17 & 1) == 0; iVar17 = iVar17 + 1) {
          }
        }
        bVar16 = 0x20;
        if (uVar23 != 0) {
          bVar16 = (byte)iVar17;
        }
        auVar2._8_8_ = 0;
        auVar2._0_8_ = 1L << (bVar16 & 0x3f);
        uVar27 = 0x40;
        iVar17 = 1;
        uVar28 = (int)(((SUB168(auVar2 / ZEXT416(*puVar33),0) +
                        (ulonglong)this->SmallPoolInfosPerPlatformPage) * 8 - 8) /
                      (ulonglong)this->SmallPoolInfosPerPlatformPage) + 0x3fU & 0xffffffc0;
        uVar19 = SUB164(auVar2 / ZEXT416(*puVar33),0);
        uVar23 = 0;
        if (0x40 < uVar19) {
          do {
            uVar23 = uVar9 >> 3;
            uVar27 = uVar27 << 6;
            uVar9 = uVar9 + iVar17 * 0x200;
            iVar17 = iVar17 * 0x40;
          } while (uVar27 < uVar19);
        }
        puVar21 = (uchar *)(ulonglong)(iVar24 + 1U);
        FMallocBinnedCommonBase::PoolInfoMemory =
             FMallocBinnedCommonBase::PoolInfoMemory + (ulonglong)uVar28;
        pFVar22 = pFVar22 + 1;
        puVar33 = puVar33 + 0x2c;
        uVar9 = uVar9 + ((uVar9 + uVar23 * -8) * 8 - uVar19 >> 6) * -8 + 0x3f & 0xffffffc0;
        Binned3FreeBitsMemory = Binned3FreeBitsMemory + (ulonglong)uVar9 * 2;
        uVar9 = (int)puVar35 + uVar28 + uVar9 * 2;
        puVar35 = (uchar *)(ulonglong)uVar9;
      } while (iVar24 + 1U < 0x4d);
      uVar26 = (ulonglong)
               ((FMallocBinnedCommonBase::OsAllocationGranularity - 1) + uVar9 &
               -FMallocBinnedCommonBase::OsAllocationGranularity);
      _Dst = AllocateMetaDataMemory(uVar26);
      ppFVar15 = (FPoolInfoSmall **)((longlong)_Dst + uVar26);
      memset(_Dst,0,uVar26);
      pppFVar31 = &this->SmallPoolTables[0].PoolInfos;
      pFVar36 = &this->SmallPoolTables[0].BlocksExhaustedBits;
      do {
        for (lVar20 = 0x3f; 0x7fffffffUL >> lVar20 == 0; lVar20 = lVar20 + -1) {
        }
        uVar9 = 1 << ((byte)lVar20 & 0x1f);
        iVar24 = 0;
        if (uVar9 != 0) {
          for (; (uVar9 >> iVar24 & 1) == 0; iVar24 = iVar24 + 1) {
          }
        }
        bVar16 = 0x20;
        if (uVar9 != 0) {
          bVar16 = (byte)iVar24;
        }
        auVar3._8_8_ = 0;
        auVar3._0_8_ = 1L << (bVar16 & 0x3f);
        auVar3 = auVar3 / ZEXT416(*(uint *)((longlong)pppFVar31 + -0x4c));
        uVar23 = this->SmallPoolInfosPerPlatformPage;
        *pppFVar31 = _Dst;
        uVar9 = 8;
        iVar24 = 1;
        pvVar34 = (void *)((longlong)_Dst +
                          (((auVar3._0_8_ + (ulonglong)uVar23) * 8 - 8) / (ulonglong)uVar23 + 0x3f &
                          0xffffffc0));
        uVar27 = 0x40;
        uVar19 = auVar3._0_4_;
        uVar23 = 0;
        if (0x40 < uVar19) {
          do {
            uVar23 = uVar9 >> 3;
            uVar27 = uVar27 << 6;
            uVar9 = uVar9 + iVar24 * 0x200;
            iVar24 = iVar24 * 0x40;
          } while (uVar27 < uVar19);
        }
        uVar9 = uVar9 + ((uVar9 + uVar23 * -8) * 8 - uVar19 >> 6) * -8 + 0x3f & 0xffffffc0;
        FBitTree::FBitTreeInit(pFVar36 + -1,uVar19,pvVar34,uVar9,false);
        pvVar34 = (void *)((longlong)pvVar34 + (ulonglong)uVar9);
        FBitTree::FBitTreeInit(pFVar36,uVar19,pvVar34,uVar9,true);
        _Dst = (FPoolInfoSmall **)((longlong)pvVar34 + (ulonglong)uVar9);
        pFVar36 = (FBitTree *)&pFVar36[5].Rows;
        pppFVar31 = pppFVar31 + 0x16;
        local_360 = local_360 + -1;
      } while (local_360 != 0);
      if ((ppFVar15 < _Dst) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("MetaMem <= MetaMemEnd",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinned3.cpp"
                             ,0x24e,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        pFVar11 = (FMallocBinned3 *)(*pcVar4)();
        return pFVar11;
      }
      puVar35 = MemSizeToPoolIndex;
      puVar21 = puVar18;
      while( true ) {
        uVar9 = (&local_2a8)[(longlong)puVar18].BinSize;
        while (uVar9 < (uint)((int)puVar21 * 8)) {
          uVar9 = (uint)puVar18 + 1;
          puVar18 = (uchar *)(ulonglong)uVar9;
          if ((uVar9 == 0x4d) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("PoolIndex != (52 + ((128 * 1024) - 28672) / 4096)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinned3.cpp"
                                 ,0x259,L""), bVar7)) {
            pcVar4 = (code *)swi(3);
            pFVar11 = (FMallocBinned3 *)(*pcVar4)();
            return pFVar11;
          }
          uVar9 = (&local_2a8)[(longlong)puVar18].BinSize;
        }
        if ((0xff < (uint)puVar18) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("PoolIndex < 256",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinned3.cpp"
                               ,0x25b,L""), bVar7)) break;
        *puVar35 = (uchar)puVar18;
        uVar9 = (int)puVar21 + 1;
        puVar21 = (uchar *)(ulonglong)uVar9;
        puVar35 = puVar35 + 1;
        if (uVar9 == 0x4001) {
          uVar12 = this->_padding_;
          uVar26 = ((ulonglong)FMallocBinnedCommonBase::OsAllocationGranularity - 1) + uVar12 * 0x20
                   & ~((ulonglong)FMallocBinnedCommonBase::OsAllocationGranularity - 1);
          pvVar34 = AllocateMetaDataMemory(uVar26);
          this->_padding_ = (longlong)pvVar34;
          FMallocBinnedCommonBase::HashMemory = FMallocBinnedCommonBase::HashMemory + uVar26;
          if ((this->_padding_ == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("HashBuckets",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\MallocBinnedCommon.h"
                                 ,0x3f7,L""), bVar7)) {
            pcVar4 = (code *)swi(3);
            pFVar11 = (FMallocBinned3 *)(*pcVar4)();
            return pFVar11;
          }
          DefaultConstructItems<TMallocBinnedCommon<FMallocBinned3,77,131072>::FPoolHashBucket,unsigned___int64>
                    ((void *)this->_padding_,uVar12);
          MallocBinned3 = this;
          GFixedMallocLocationPtr = (FMalloc **)&MallocBinned3;
          return this;
        }
      }
      pcVar4 = (code *)swi(3);
      pFVar11 = (FMallocBinned3 *)(*pcVar4)();
      return pFVar11;
    }
  } while( true );
}

// ~FMallocBinned3 @ 14167bfa0

/* WARNING: Type propagation algorithm not settling */

void __thiscall FMallocBinned3::~FMallocBinned3(FMallocBinned3 *this)

{
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar1;
  
  this->_padding_ = (longlong)&___7FMallocBinned3__6B_;
  lpCriticalSection = (LPCRITICAL_SECTION)&this->PoolBaseVMBlock[6].field_0x8;
  lVar1 = 0x4d;
  do {
    lpCriticalSection =
         (LPCRITICAL_SECTION)((longlong)(lpCriticalSection + 0xfffffffffffffffb) + 0x18);
    DeleteCriticalSection(lpCriticalSection);
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->_padding_);
  FExec::~FExec((FExec *)this);
  return;
}

// AllocateMetaDataMemory @ 141681760

void * __cdecl FMallocBinned3::AllocateMetaDataMemory(ulong64 param_1)

{
  FLLMTracker *this;
  bool bVar1;
  FLowLevelMemTracker *pFVar2;
  FTagData *pFVar3;
  FLLMThreadState *this_00;
  ulong64 uVar4;
  ulong64 uVar5;
  ulonglong uVar6;
  ELLMTagSet local_res8;
  void *local_28 [2];
  
  bVar1 = false;
  if ((FLowLevelMemTracker::EnabledState != Disabled) &&
     (pFVar2 = FLowLevelMemTracker::Get(), FLowLevelMemTracker::EnabledState != Disabled)) {
    FLowLevelMemTracker::BootstrapInitialise(pFVar2);
    this = pFVar2->Trackers[0];
    bVar1 = true;
    local_res8 = None;
    pFVar3 = FLowLevelMemTracker::FindOrAddTagData(this->LLMRef,FMalloc,Scope);
    this_00 = UE::LLMPrivate::FLLMTracker::GetOrCreateState(this);
    UE::LLMPrivate::FLLMThreadState::PushTag(this_00,pFVar3,None);
  }
  uVar4 = FWindowsPlatformMemory::FPlatformVirtualMemoryBlock::GetVirtualSizeAlignment();
  uVar5 = FWindowsPlatformMemory::FPlatformVirtualMemoryBlock::GetVirtualSizeAlignment();
  FWindowsPlatformMemory::FPlatformVirtualMemoryBlock::AllocateVirtual
            ((FPlatformVirtualMemoryBlock *)local_28,(param_1 - 1) + uVar4 & ~(uVar4 - 1),uVar5);
  uVar4 = FWindowsPlatformMemory::FPlatformVirtualMemoryBlock::GetCommitAlignment();
  uVar6 = (param_1 - 1) + uVar4 & ~(uVar4 - 1);
  FWindowsPlatformMemory::FPlatformVirtualMemoryBlock::Commit
            ((FPlatformVirtualMemoryBlock *)local_28,0,uVar6);
  if (FLowLevelMemTracker::EnabledState != Disabled) {
    pFVar2 = FLowLevelMemTracker::Get();
    FLowLevelMemTracker::OnLowLevelAlloc(pFVar2,Platform,local_28[0],uVar6,Untagged,None,true);
  }
  if (bVar1) {
    pFVar2 = FLowLevelMemTracker::Get();
    UE::LLMPrivate::FLLMTracker::PopTag(pFVar2->Trackers[local_res8],local_res8);
  }
  return local_28[0];
}

// BlockPointerFromIndecies @ 141682290

uchar * __thiscall
FMallocBinned3::BlockPointerFromIndecies
          (FMallocBinned3 *this,uint param_1,uint param_2,uint param_3)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  byte bVar6;
  uchar *puVar7;
  
  for (lVar2 = 0x3f; 0x7fffffffUL >> lVar2 == 0; lVar2 = lVar2 + -1) {
  }
  puVar7 = PoolBaseVMPtr[param_1] + (ulonglong)param_2 * (ulonglong)param_3;
  uVar5 = 1 << ((byte)lVar2 & 0x1f);
  iVar1 = 0;
  if (uVar5 != 0) {
    for (; (uVar5 >> iVar1 & 1) == 0; iVar1 = iVar1 + 1) {
    }
  }
  bVar6 = 0x20;
  if (uVar5 != 0) {
    bVar6 = (byte)iVar1;
  }
  if ((PoolBaseVMPtr[param_1] + (1L << (bVar6 & 0x3f)) < puVar7 + param_3) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ptr + BlockSize <= PoolStart + (1ull << (FMath::CountTrailingZeros(FMath::RoundUpToPowerOfTwo(1024 * 1024 * 1024))))"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\MallocBinned3.h"
                         ,0x124,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    puVar7 = (uchar *)(*pcVar3)();
    return puVar7;
  }
  return puVar7;
}

// Commit @ 14168be80

void __thiscall
FMallocBinned3::Commit(FMallocBinned3 *this,uint param_1,void *param_2,ulong64 param_3)

{
  FLowLevelMemTracker *this_00;
  
  LOCK();
  Binned3Commits = (TAtomic<__int64>)((longlong)Binned3Commits + 1);
  UNLOCK();
  FWindowsPlatformMemory::FPlatformVirtualMemoryBlock::Commit
            (this->PoolBaseVMBlock + param_1,
             (longlong)param_2 - *(longlong *)(this->PoolBaseVMBlock + param_1),param_3);
  if (FLowLevelMemTracker::EnabledState != Disabled) {
    this_00 = FLowLevelMemTracker::Get();
    FLowLevelMemTracker::OnLowLevelAlloc(this_00,Platform,param_2,param_3,Untagged,None,true);
  }
  return;
}

// Decommit @ 14168dd70

void __thiscall
FMallocBinned3::Decommit(FMallocBinned3 *this,uint param_1,void *param_2,ulong64 param_3)

{
  FLowLevelMemTracker *this_00;
  
  if (((FLowLevelMemTracker::EnabledState != Disabled) &&
      (this_00 = FLowLevelMemTracker::Get(), FLowLevelMemTracker::EnabledState != Disabled)) &&
     (FLowLevelMemTracker::BootstrapInitialise(this_00), param_2 != (void *)0x0)) {
    UE::LLMPrivate::FLLMTracker::TrackFree(this_00->Trackers[0],param_2,None,true);
  }
  LOCK();
  Binned3Decommits = (TAtomic<__int64>)((longlong)Binned3Decommits + 1);
  UNLOCK();
  FWindowsPlatformMemory::FPlatformVirtualMemoryBlock::Decommit
            (this->PoolBaseVMBlock + param_1,
             (longlong)param_2 - *(longlong *)(this->PoolBaseVMBlock + param_1),param_3);
  return;
}

// DumpAllocatorStats @ 14168eaf0

void __thiscall FMallocBinned3::DumpAllocatorStats(FMallocBinned3 *this,FOutputDevice *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  uint *puVar5;
  
  TMallocBinnedCommon<FMallocBinned3,77,131072>::GetTotalAllocatedSmallPoolMemory
            ((TMallocBinnedCommon<FMallocBinned3,77,131072> *)this);
  FOutputDevice::Log(param_1,L"FMallocBinned3 Mem report");
  FOutputDevice::LogfImpl(param_1,L"Constants.BinnedAllocationGranularity = %d");
  FOutputDevice::LogfImpl(param_1,L"UE_MB3_MAX_SMALL_POOL_SIZE = %d");
  for (lVar4 = 0x3f; 0x7fffffffUL >> lVar4 == 0; lVar4 = lVar4 + -1) {
  }
  uVar3 = 1 << ((byte)lVar4 & 0x1f);
  iVar2 = 0;
  if (uVar3 != 0) {
    for (; (uVar3 >> iVar2 & 1) == 0; iVar2 = iVar2 + 1) {
    }
  }
  FOutputDevice::LogfImpl(param_1,L"UE_MB3_MAX_MEMORY_PER_POOL_SIZE = %llu");
  FOutputDevice::LogfImpl(param_1,L"Small Pool Allocations: %fmb  (including bin size padding)");
  FOutputDevice::LogfImpl(param_1,L"Small Pool OS Allocated: %fmb");
  FOutputDevice::LogfImpl(param_1,L"Large Pool Requested Allocations: %fmb");
  FOutputDevice::LogfImpl(param_1,L"Large Pool OS Allocated: %fmb");
  FOutputDevice::LogfImpl(param_1,L"PoolInfo: %fmb");
  FOutputDevice::LogfImpl(param_1,L"Hash: %fmb");
  FOutputDevice::LogfImpl(param_1,L"Free Bits: %fmb");
  FOutputDevice::LogfImpl(param_1,L"TLS: %fmb");
  FOutputDevice::LogfImpl(param_1,L"Slab Commits: %llu");
  FOutputDevice::LogfImpl(param_1,L"Slab Decommits: %llu");
  FOutputDevice::LogfImpl
            (param_1,L"BINNED3_USE_SEPARATE_VM_PER_POOL is true - VM is Contiguous = %d");
  if (PoolSearchDiv != 0) {
    FOutputDevice::LogfImpl
              (param_1,L"%llu Pointer Searches   %llu Pointer Compares    %llu Compares/Search");
    for (lVar4 = 0x3f; 0x7fffffffUL >> lVar4 == 0; lVar4 = lVar4 + -1) {
    }
    uVar3 = 1 << ((byte)lVar4 & 0x1f);
    for (lVar4 = 0x3f; 0x7fffffffUL >> lVar4 == 0; lVar4 = lVar4 + -1) {
    }
    iVar2 = 0;
    if (uVar3 != 0) {
      for (; (uVar3 >> iVar2 & 1) == 0; iVar2 = iVar2 + 1) {
      }
    }
    uVar3 = 1 << ((byte)lVar4 & 0x1f);
    iVar2 = 0;
    if (uVar3 != 0) {
      for (; (uVar3 >> iVar2 & 1) == 0; iVar2 = iVar2 + 1) {
      }
    }
    FOutputDevice::LogfImpl
              (param_1,
               L"Percent of gaps in the address range %6.4f  (hopefully < 1, or the searches above will suffer)"
              );
  }
  FOutputDevice::LogfImpl(param_1,L"Total allocated from OS: %fmb");
  lVar4 = 0x4d;
  do {
    FOutputDevice::LogfImpl
              (param_1,
               L"Bin %6d Fragmentation %d %%, Wasted Mem %.2f MB, Total Allocated Mem %.2f MB");
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  uVar3 = 0;
  puVar5 = &this->SmallPoolTables[0].BlockSize;
  do {
    uVar1 = puVar5[2];
    FBitTree::CountOnes(&this->SmallPoolTables[uVar3].BlocksAllocatedBits,uVar1);
    FBitTree::CountOnes(&this->SmallPoolTables[uVar3].BlocksExhaustedBits,uVar1);
    uVar3 = uVar3 + 1;
    FOutputDevice::LogfImpl
              (param_1,
               L"Pool %2d   Size %6d   Allocs %8lld  Frees %8lld  AveAllocSize %6d  EstPadWaste %4dKB  UsedVM %3dMB  CommittedVM %3dMB  HighSlabs %6d  CommittedSlabs %6d  FullSlabs %6d  PartialSlabs  %6d"
              );
    puVar5 = puVar5 + 0x2c;
  } while ((int)uVar3 < 0x4d);
  return;
}

// FlushCurrentThreadCacheInternal @ 1416958a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FMallocBinned3::FlushCurrentThreadCacheInternal(FMallocBinned3 *this,bool param_1)

{
  int *piVar1;
  double dVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  FPerThreadFreeBlockLists *pFVar6;
  FName *pFVar7;
  TStatIdData *pTVar8;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar9;
  FNameEntryId FVar10;
  FName FVar11;
  FNameEntryId FVar12;
  bool bVar13;
  LARGE_INTEGER LStackX_18;
  FName FStackX_20;
  FStatMessage aFStack_58 [3];
  
  if (FMallocBinnedCommonBase::BinnedTlsSlot == 0xffffffff) {
    return;
  }
  pFVar6 = TlsGetValue(FMallocBinnedCommonBase::BinnedTlsSlot);
  if (pFVar6 == (FPerThreadFreeBlockLists *)0x0) {
    return;
  }
  if (pFVar6->bLockedByOwnerThread == false) {
    return;
  }
  if (pFVar6->MemoryTrimEpoch < (ulonglong)this->_padding_) {
    pFVar6->MemoryTrimEpoch = this->_padding_;
  }
  else if (param_1) {
    return;
  }
  bVar13 = -1 < CpuChannel->Enabled;
  if (bVar13) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_static_void___cdecl_FMallocBinnedCommonUtils::FlushCurrentThreadCache<FMallocBinned3>(FMallocBinned3&___ptr64,bool)'
                ::__l8::__CpuProfilerEventSpecId125,
               "FMallocBinnedCommonUtils::FlushCurrentThreadCache",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\MallocBinnedCommonUtils.h"
               ,0x7d);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_static_void___cdecl_FMallocBinnedCommonUtils::FlushCurrentThreadCache<FMallocBinned3>(FMallocBinned3&___ptr64,bool)'
               ::__l8::__CpuProfilerEventSpecId125);
  }
  FVar12.Value = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_void___cdecl_FMallocBinnedCommonUtils::FlushCurrentThreadCache<FMallocBinned3>(FMallocBinned3&___ptr64,bool)'
       ::__l8::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_void___cdecl_FMallocBinnedCommonUtils::FlushCurrentThreadCache<FMallocBinned3>(FMallocBinned3&___ptr64,bool)'
                           ::__l8::_thread_safe_static_guard_0__),
     `public:_static_void___cdecl_FMallocBinnedCommonUtils::FlushCurrentThreadCache<FMallocBinned3>(FMallocBinned3&___ptr64,bool)'
     ::__l8::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_FMallocBinnedCommonUtils_FlushCurrentThreadCache = (TStatIdData *)0x0;
    pFVar7 = ::FName::FName((FName *)&LStackX_18.s,
                            "STAT_FMallocBinnedCommonUtils_FlushCurrentThreadCache");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_static_void___cdecl_FMallocBinnedCommonUtils::FlushCurrentThreadCache<FMallocBinned3>(FMallocBinned3&___ptr64,bool)'
                ::__l8::StatPtr_STAT_FMallocBinnedCommonUtils_FlushCurrentThreadCache,*pFVar7,
               L"STAT_FMallocBinnedCommonUtils_FlushCurrentThreadCache","STATGROUP_Quick",
               "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`public:_static_void___cdecl_FMallocBinnedCommonUtils::FlushCurrentThreadCache<FMallocBinned3>(FMallocBinned3&___ptr64,bool)'
                         ::__l8::_thread_safe_static_guard_0__);
  }
  pTVar8 = _StatPtr_STAT_FMallocBinnedCommonUtils_FlushCurrentThreadCache;
  if (_StatPtr_STAT_FMallocBinnedCommonUtils_FlushCurrentThreadCache == (TStatIdData *)0x0) {
    pFVar7 = ::FName::FName(&FStackX_20,"STAT_FMallocBinnedCommonUtils_FlushCurrentThreadCache");
    pTVar8 = FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &`public:_static_void___cdecl_FMallocBinnedCommonUtils::FlushCurrentThreadCache<FMallocBinned3>(FMallocBinned3&___ptr64,bool)'
                         ::__l8::StatPtr_STAT_FMallocBinnedCommonUtils_FlushCurrentThreadCache,
                        *pFVar7,L"STAT_FMallocBinnedCommonUtils_FlushCurrentThreadCache",
                        "STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  FVar11 = *(FName *)&pTVar8->Name;
  bVar3 = false;
  bVar5 = false;
  FVar10 = FVar11.ComparisonIndex.Value;
  uVar9 = FVar11.Number;
  if ((FVar10.Value != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      LStackX_18.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&LStackX_18.s,(pTVar8->StatDescriptionAnsi).Ptr);
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        LStackX_18.s.LowPart = FVar10.Value;
        LStackX_18.s.HighPart = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&LStackX_18.s,(pTVar8->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\MallocBinnedCommonUtils.h"
                   ,0x7e);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      LStackX_18.s.LowPart = FVar10.Value;
      LStackX_18.s.HighPart = uVar9;
      FThreadStats::AddMessage(FVar11,CycleScopeStart);
      bVar4 = true;
      FVar12.Value = FVar10.Value;
      goto LAB_1416724f6;
    }
  }
  bVar4 = false;
  FVar11.ComparisonIndex.Value = 0;
  FVar11.Number = 0;
LAB_1416724f6:
  QueryPerformanceCounter(&LStackX_18);
  dVar2 = (double)CONCAT44(LStackX_18.s.HighPart,LStackX_18.s.LowPart) *
          FGenericPlatformTime::SecondsPerCycle;
  FMallocBinnedCommonUtils::TrimThreadFreeBlockLists<FMallocBinned3>(this,pFVar6);
  QueryPerformanceCounter(&LStackX_18);
  if (((double)GMallocBinnedFlushThreadCacheMaxWaitTime <
       (double)CONCAT44(LStackX_18.s.HighPart,LStackX_18.s.LowPart) *
       FGenericPlatformTime::SecondsPerCycle - dVar2) && (2 < (byte)LogMemory._0_1_)) {
    (**(code **)(this->_padding_ + 200))(this);
    UE::Logging::Private::BasicLog<3>
              (&`public:_static_void___cdecl_FMallocBinnedCommonUtils::FlushCurrentThreadCache<FMallocBinned3>(FMallocBinned3&___ptr64,bool)'
                ::__l12::LOG_Static,(FLogCategoryBase *)&LogMemory);
  }
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar11 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      aFStack_58[0].NameAndInfo.Number = FVar11.Number & 0xffff6fff | 0x6000;
      aFStack_58[0].NameAndInfo.Index.Value = FVar12.Value;
      QueryPerformanceCounter(&LStackX_18);
      aFStack_58[0].StatData.Pad[4] = '\0';
      aFStack_58[0].StatData.Pad[5] = '\0';
      aFStack_58[0].StatData.Pad[6] = '\0';
      aFStack_58[0].StatData.Pad[7] = '\0';
      aFStack_58[0].StatData.Pad[0] = LStackX_18.s.LowPart._0_1_;
      aFStack_58[0].StatData.Pad[1] = LStackX_18.s.LowPart._1_1_;
      aFStack_58[0].StatData.Pad[2] = LStackX_18.s.LowPart._2_1_;
      aFStack_58[0].StatData.Pad[3] = LStackX_18.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,aFStack_58);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  if (bVar13) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Free @ 141695f70

void __thiscall FMallocBinned3::Free(FMallocBinned3 *this,void *param_1)

{
  ulong64 uVar1;
  
  uVar1 = PoolIndexFromPtr(this,param_1);
  FreeExternal(this,param_1,uVar1);
  return;
}

// FreeBundles @ 1416963f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FMallocBinned3::FreeBundles(FMallocBinned3 *this,FBundleNode *param_1,uint param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  uint *puVar1;
  FPoolInfoSmall *pFVar2;
  uint uVar3;
  FPoolInfoSmall FVar4;
  FBundleNode FVar5;
  uchar *puVar6;
  FPoolInfoSmall *pFVar7;
  int iVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  code *pcVar11;
  FPoolInfoSmall FVar12;
  uint6 uVar13;
  bool bVar14;
  ulong64 uVar15;
  ulonglong uVar16;
  longlong lVar17;
  FLowLevelMemTracker *this_00;
  byte bVar18;
  uint uVar19;
  uint uVar20;
  FPoolInfoSmall FVar21;
  ulonglong uVar22;
  uchar *puVar23;
  
  lpCriticalSection = &this->SmallPoolTables[param_2].Mutex;
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  do {
    FVar5 = *param_1;
    uVar3 = this->SmallPoolTables[param_2].BinSize;
    uVar19 = this->SmallPoolTables[param_2].NumMemoryPagesPerBlock;
    uVar15 = PoolIndexFromPtr(this,param_1);
    if ((0x4c < uVar15) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("Result < (52 + ((128 * 1024) - 28672) / 4096)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\MallocBinned3.h"
                            ,0x10a,L""), bVar14)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    uVar22 = (ulonglong)FMallocBinnedCommonBase::OsAllocationGranularity * (ulonglong)(byte)uVar19;
    puVar6 = PoolBaseVMPtr[uVar15 & 0xffffffff];
    auVar9._8_8_ = 0;
    auVar9._0_8_ = uVar22;
    auVar10._8_8_ = 0;
    auVar10._0_8_ = (longlong)param_1 - (longlong)puVar6;
    uVar16 = SUB168(auVar10 / auVar9,0);
    for (lVar17 = 0x3f; 0x7fffffffUL >> lVar17 == 0; lVar17 = lVar17 + -1) {
    }
    puVar23 = puVar6 + uVar16 * uVar22;
    uVar19 = 1 << ((byte)lVar17 & 0x1f);
    iVar8 = 0;
    if (uVar19 != 0) {
      for (; (uVar19 >> iVar8 & 1) == 0; iVar8 = iVar8 + 1) {
      }
    }
    bVar18 = 0x20;
    if (uVar19 != 0) {
      bVar18 = (byte)iVar8;
    }
    if ((puVar6 + (1L << (bVar18 & 0x3f)) <= puVar23) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("Result < PoolStart + (1ull << (FMath::CountTrailingZeros(FMath::RoundUpToPowerOfTwo(1024 * 1024 * 1024))))"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\MallocBinned3.h"
                            ,0x11c,L""), bVar14)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    lVar17 = ((longlong)param_1 - (longlong)puVar23) / (longlong)(ulonglong)uVar3;
    pFVar7 = this->SmallPoolTables[param_2].PoolInfos
             [(uVar16 & 0xffffffff) / (ulonglong)this->SmallPoolInfosPerPlatformPage];
    if (pFVar7 == (FPoolInfoSmall *)0x0) {
      UE::Logging::Private::BasicFatalLog
                (&`public:_static_void___cdecl_FMallocBinned3::Private::FreeBundles(FMallocBinned3&___ptr64,FMallocBinnedCommonBase::FBundleNode*___ptr64,unsigned_int)'
                  ::__l8::LOG_Static,(FLogCategoryBase *)&LogMemory);
    }
    uVar16 = (uVar16 & 0xffffffff) % (ulonglong)this->SmallPoolInfosPerPlatformPage;
    pFVar2 = pFVar7 + uVar16;
    if (pFVar7[uVar16].Canary != 1) {
      UE::Logging::Private::BasicFatalLog
                ((FStaticBasicLogRecord *)
                 &`public:_void___cdecl_FMallocBinned3::FPoolInfoSmall::CheckCanary(FMallocBinned3::FPoolInfoSmall::ECanary)const___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogMemory);
    }
    uVar20 = *(uint *)((longlong)&param_1->NextNodeInCurrentBundle + 4) & 0xfffff001 | 1;
    *(uint *)((longlong)&param_1->NextNodeInCurrentBundle + 4) = uVar20;
    uVar19 = pFVar2->FirstFreeIndex;
    if (pFVar2->NoFirstFreeIndex != 0) {
      uVar19 = 0x1000;
    }
    uVar13 = param_1->NextNodeInCurrentBundle;
    *(uint *)((longlong)&param_1->NextNodeInCurrentBundle + 4) =
         (uVar19 << 0xc ^ uVar20) & 0x1fff000 ^ uVar20;
    uVar19 = (uVar3 >> 3 & 0x7fff ^ (uint)uVar13 & 0xffff8000) & 0xf9ffffff | 0x39c00000;
    *(uint *)&param_1->NextNodeInCurrentBundle = (uVar19 ^ param_2 << 0xf) & 0x3f8000 ^ uVar19;
    uVar19 = (uint)lVar17;
    pFVar2->NoFirstFreeIndex = 0;
    pFVar2->FirstFreeIndex = lVar17;
    if (((uVar19 & 0x3fff) != uVar19) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("uint32(NodePool->FirstFreeIndex) == BinIndexWithinBlock",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinned3.cpp"
                            ,0x161,L""), bVar14)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    puVar1 = &this->SmallPoolTables[param_2].TotalUsedBins;
    *puVar1 = *puVar1 - 1;
    if ((((uint)*pFVar2 & 0x1fffc) < 4) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("NodePool->Taken >= 1",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinned3.cpp"
                            ,0x166,L""), bVar14)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    FVar21 = *pFVar2;
    uVar19 = ((uint)FVar21 >> 2) - 1;
    FVar21 = (FPoolInfoSmall)((uVar19 * 4 ^ (uint)FVar21) & 0x1fffc ^ (uint)FVar21);
    *pFVar2 = FVar21;
    uVar20 = SUB164(auVar10 / auVar9,0);
    if ((uVar19 & 0x7fff) == 0) {
      if (FVar21.Canary != 1) {
        UE::Logging::Private::BasicFatalLog
                  ((FStaticBasicLogRecord *)&PTR_u_MallocBinned3_C_150661b48,
                   (FLogCategoryBase *)&LogMemory);
      }
      pFVar2->Canary = 3;
      FBitTree::FreeBit(&this->SmallPoolTables[param_2].BlocksAllocatedBits,uVar20);
      if (pFVar2->NoFirstFreeIndex == 0) {
        FBitTree::AllocBit(&this->SmallPoolTables[param_2].BlocksExhaustedBits,uVar20);
      }
      uVar19 = this->SmallPoolTables[param_2].BlockSize;
      if (((FLowLevelMemTracker::EnabledState != Disabled) &&
          (this_00 = FLowLevelMemTracker::Get(), FLowLevelMemTracker::EnabledState != Disabled)) &&
         (FLowLevelMemTracker::BootstrapInitialise(this_00), puVar23 != (uchar *)0x0)) {
        UE::LLMPrivate::FLLMTracker::TrackFree(this_00->Trackers[0],puVar23,None,true);
      }
      LOCK();
      Binned3Decommits = (TAtomic<__int64>)((longlong)Binned3Decommits + 1);
      UNLOCK();
      FWindowsPlatformMemory::FPlatformVirtualMemoryBlock::Decommit
                (this->PoolBaseVMBlock + param_2,
                 (longlong)puVar23 - *(longlong *)(this->PoolBaseVMBlock + param_2),
                 (ulonglong)uVar19);
      puVar1 = &this->SmallPoolTables[param_2].TotalAllocatedMem;
      *puVar1 = *puVar1 - uVar19;
      puVar1 = &this->SmallPoolTables[param_2].TotalAllocatedBins;
      *puVar1 = *puVar1 - uVar19 / uVar3;
      LOCK();
      FMallocBinnedCommonBase::AllocatedOSSmallPoolMemory =
           (atomic<__int64>)
           ((longlong)FMallocBinnedCommonBase::AllocatedOSSmallPoolMemory - (ulonglong)uVar19);
      UNLOCK();
    }
    else if (pFVar2->NoFirstFreeIndex != 0) {
      FBitTree::FreeBit(&this->SmallPoolTables[param_2].BlocksExhaustedBits,uVar20);
    }
    param_1 = (FBundleNode *)((ulonglong)FVar5 & 0xffffffffffff);
  } while ((FBundleNode *)((ulonglong)FVar5 & 0xffffffffffff) != (FBundleNode *)0x0);
                    /* WARNING: Could not recover jumptable at 0x000141696b2a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// FreeBundles @ 141696730

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FMallocBinned3::Private::FreeBundles(FMallocBinned3 *param_1,FBundleNode *param_2,uint param_3)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  uint *puVar1;
  FPoolInfoSmall *pFVar2;
  uint uVar3;
  FPoolInfoSmall FVar4;
  FBundleNode FVar5;
  uchar *puVar6;
  FPoolInfoSmall *pFVar7;
  int iVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  code *pcVar11;
  FPoolInfoSmall FVar12;
  uint6 uVar13;
  bool bVar14;
  ulong64 uVar15;
  ulonglong uVar16;
  longlong lVar17;
  FLowLevelMemTracker *this;
  byte bVar18;
  uint uVar19;
  uint uVar20;
  FPoolInfoSmall FVar21;
  ulonglong uVar22;
  uchar *puVar23;
  
  lpCriticalSection = &param_1->SmallPoolTables[param_3].Mutex;
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  do {
    FVar5 = *param_2;
    uVar3 = param_1->SmallPoolTables[param_3].BinSize;
    uVar19 = param_1->SmallPoolTables[param_3].NumMemoryPagesPerBlock;
    uVar15 = PoolIndexFromPtr(param_1,param_2);
    if ((0x4c < uVar15) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("Result < (52 + ((128 * 1024) - 28672) / 4096)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\MallocBinned3.h"
                            ,0x10a,L""), bVar14)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    uVar22 = (ulonglong)FMallocBinnedCommonBase::OsAllocationGranularity * (ulonglong)(byte)uVar19;
    puVar6 = PoolBaseVMPtr[uVar15 & 0xffffffff];
    auVar9._8_8_ = 0;
    auVar9._0_8_ = uVar22;
    auVar10._8_8_ = 0;
    auVar10._0_8_ = (longlong)param_2 - (longlong)puVar6;
    uVar16 = SUB168(auVar10 / auVar9,0);
    for (lVar17 = 0x3f; 0x7fffffffUL >> lVar17 == 0; lVar17 = lVar17 + -1) {
    }
    puVar23 = puVar6 + uVar16 * uVar22;
    uVar19 = 1 << ((byte)lVar17 & 0x1f);
    iVar8 = 0;
    if (uVar19 != 0) {
      for (; (uVar19 >> iVar8 & 1) == 0; iVar8 = iVar8 + 1) {
      }
    }
    bVar18 = 0x20;
    if (uVar19 != 0) {
      bVar18 = (byte)iVar8;
    }
    if ((puVar6 + (1L << (bVar18 & 0x3f)) <= puVar23) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("Result < PoolStart + (1ull << (FMath::CountTrailingZeros(FMath::RoundUpToPowerOfTwo(1024 * 1024 * 1024))))"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\MallocBinned3.h"
                            ,0x11c,L""), bVar14)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    lVar17 = ((longlong)param_2 - (longlong)puVar23) / (longlong)(ulonglong)uVar3;
    pFVar7 = param_1->SmallPoolTables[param_3].PoolInfos
             [(uVar16 & 0xffffffff) / (ulonglong)param_1->SmallPoolInfosPerPlatformPage];
    if (pFVar7 == (FPoolInfoSmall *)0x0) {
      UE::Logging::Private::BasicFatalLog
                (&`public:_static_void___cdecl_FMallocBinned3::Private::FreeBundles(FMallocBinned3&___ptr64,FMallocBinnedCommonBase::FBundleNode*___ptr64,unsigned_int)'
                  ::__l8::LOG_Static,(FLogCategoryBase *)&LogMemory);
    }
    uVar16 = (uVar16 & 0xffffffff) % (ulonglong)param_1->SmallPoolInfosPerPlatformPage;
    pFVar2 = pFVar7 + uVar16;
    if (pFVar7[uVar16].Canary != 1) {
      UE::Logging::Private::BasicFatalLog
                ((FStaticBasicLogRecord *)
                 &`public:_void___cdecl_FMallocBinned3::FPoolInfoSmall::CheckCanary(FMallocBinned3::FPoolInfoSmall::ECanary)const___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogMemory);
    }
    uVar20 = *(uint *)((longlong)&param_2->NextNodeInCurrentBundle + 4) & 0xfffff001 | 1;
    *(uint *)((longlong)&param_2->NextNodeInCurrentBundle + 4) = uVar20;
    uVar19 = pFVar2->FirstFreeIndex;
    if (pFVar2->NoFirstFreeIndex != 0) {
      uVar19 = 0x1000;
    }
    uVar13 = param_2->NextNodeInCurrentBundle;
    *(uint *)((longlong)&param_2->NextNodeInCurrentBundle + 4) =
         (uVar19 << 0xc ^ uVar20) & 0x1fff000 ^ uVar20;
    uVar19 = (uVar3 >> 3 & 0x7fff ^ (uint)uVar13 & 0xffff8000) & 0xf9ffffff | 0x39c00000;
    *(uint *)&param_2->NextNodeInCurrentBundle = (uVar19 ^ param_3 << 0xf) & 0x3f8000 ^ uVar19;
    uVar19 = (uint)lVar17;
    pFVar2->NoFirstFreeIndex = 0;
    pFVar2->FirstFreeIndex = lVar17;
    if (((uVar19 & 0x3fff) != uVar19) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("uint32(NodePool->FirstFreeIndex) == BinIndexWithinBlock",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinned3.cpp"
                            ,0x161,L""), bVar14)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    puVar1 = &param_1->SmallPoolTables[param_3].TotalUsedBins;
    *puVar1 = *puVar1 - 1;
    if ((((uint)*pFVar2 & 0x1fffc) < 4) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("NodePool->Taken >= 1",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinned3.cpp"
                            ,0x166,L""), bVar14)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    FVar21 = *pFVar2;
    uVar19 = ((uint)FVar21 >> 2) - 1;
    FVar21 = (FPoolInfoSmall)((uVar19 * 4 ^ (uint)FVar21) & 0x1fffc ^ (uint)FVar21);
    *pFVar2 = FVar21;
    uVar20 = SUB164(auVar10 / auVar9,0);
    if ((uVar19 & 0x7fff) == 0) {
      if (FVar21.Canary != 1) {
        UE::Logging::Private::BasicFatalLog
                  ((FStaticBasicLogRecord *)&PTR_u_MallocBinned3_C_150661b48,
                   (FLogCategoryBase *)&LogMemory);
      }
      pFVar2->Canary = 3;
      FBitTree::FreeBit(&param_1->SmallPoolTables[param_3].BlocksAllocatedBits,uVar20);
      if (pFVar2->NoFirstFreeIndex == 0) {
        FBitTree::AllocBit(&param_1->SmallPoolTables[param_3].BlocksExhaustedBits,uVar20);
      }
      uVar19 = param_1->SmallPoolTables[param_3].BlockSize;
      if (((FLowLevelMemTracker::EnabledState != Disabled) &&
          (this = FLowLevelMemTracker::Get(), FLowLevelMemTracker::EnabledState != Disabled)) &&
         (FLowLevelMemTracker::BootstrapInitialise(this), puVar23 != (uchar *)0x0)) {
        UE::LLMPrivate::FLLMTracker::TrackFree(this->Trackers[0],puVar23,None,true);
      }
      LOCK();
      Binned3Decommits = (TAtomic<__int64>)((longlong)Binned3Decommits + 1);
      UNLOCK();
      FWindowsPlatformMemory::FPlatformVirtualMemoryBlock::Decommit
                (param_1->PoolBaseVMBlock + param_3,
                 (longlong)puVar23 - *(longlong *)(param_1->PoolBaseVMBlock + param_3),
                 (ulonglong)uVar19);
      puVar1 = &param_1->SmallPoolTables[param_3].TotalAllocatedMem;
      *puVar1 = *puVar1 - uVar19;
      puVar1 = &param_1->SmallPoolTables[param_3].TotalAllocatedBins;
      *puVar1 = *puVar1 - uVar19 / uVar3;
      LOCK();
      FMallocBinnedCommonBase::AllocatedOSSmallPoolMemory =
           (atomic<__int64>)
           ((longlong)FMallocBinnedCommonBase::AllocatedOSSmallPoolMemory - (ulonglong)uVar19);
      UNLOCK();
    }
    else if (pFVar2->NoFirstFreeIndex != 0) {
      FBitTree::FreeBit(&param_1->SmallPoolTables[param_3].BlocksExhaustedBits,uVar20);
    }
    param_2 = (FBundleNode *)((ulonglong)FVar5 & 0xffffffffffff);
  } while ((FBundleNode *)((ulonglong)FVar5 & 0xffffffffffff) != (FBundleNode *)0x0);
                    /* WARNING: Could not recover jumptable at 0x000141696b2a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// FreeExternal @ 1416970c0

/* WARNING: Removing unreachable block (ram,0x0001416971cb) */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FMallocBinned3::FreeExternal(FMallocBinned3 *this,void *param_1,ulong64 param_2)

{
  atomic<__int64> *paVar1;
  FBundleNode *pFVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  FBundleNode *pFVar6;
  code *pcVar7;
  bool bVar8;
  longlong *plVar9;
  FPoolInfo *pFVar10;
  FLowLevelMemTracker *this_00;
  uint uVar11;
  FBundleNode **ppFVar13;
  FBundleNode *pFVar14;
  ulonglong uVar15;
  void *local_48;
  uint local_40;
  FBundleNode *pFVar12;
  
  if (0x4c < param_2) {
    if (param_1 == (void *)0x0) {
      return;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)&this->_padding_);
    pFVar10 = TMallocBinnedCommon<FMallocBinned3,77,131072>::Internal::FindPoolInfo(this,param_1);
    if (pFVar10 == (FPoolInfo *)0x0) {
      UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogMemory);
    }
    uVar11 = pFVar10->CommitSize;
    uVar4 = pFVar10->AllocSize;
    if (pFVar10->Canary != Assigned) {
      UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogMemory);
    }
    uVar5 = pFVar10->VMSizeDivVirtualSizeAlignment;
    LOCK();
    FMallocBinnedCommonBase::AllocatedLargePoolMemory =
         (atomic<__int64>)
         ((longlong)FMallocBinnedCommonBase::AllocatedLargePoolMemory - (ulonglong)uVar4);
    UNLOCK();
    LOCK();
    FMallocBinnedCommonBase::AllocatedLargePoolMemoryWAlignment =
         (atomic<__int64>)
         ((longlong)FMallocBinnedCommonBase::AllocatedLargePoolMemoryWAlignment - (ulonglong)uVar11)
    ;
    UNLOCK();
    if ((uVar11 < uVar4) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("PoolOSRequestedBytes <= PoolOsBytes",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinned3.cpp"
                           ,0x3cc,L"FMallocBinned3::FreeExternal %u %u"), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if (pFVar10->Canary != Assigned) {
      UE::Logging::Private::BasicFatalLog
                ((FStaticBasicLogRecord *)&PTR_u_MallocBinned3_C_150661f40,
                 (FLogCategoryBase *)&LogMemory);
    }
    pFVar10->Canary = Unassigned;
    LeaveCriticalSection((LPCRITICAL_SECTION)&this->_padding_);
    if ((FLowLevelMemTracker::EnabledState != Disabled) &&
       (this_00 = FLowLevelMemTracker::Get(), FLowLevelMemTracker::EnabledState != Disabled)) {
      FLowLevelMemTracker::BootstrapInitialise(this_00);
      UE::LLMPrivate::FLLMTracker::TrackFree(this_00->Trackers[0],param_1,None,true);
    }
    local_48 = param_1;
    local_40 = uVar5;
    FWindowsPlatformMemory::FPlatformVirtualMemoryBlock::FreeVirtual
              ((FPlatformVirtualMemoryBlock *)&local_48);
    return;
  }
  if ((param_1 == (void *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinned3.cpp"
                         ,0x393,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar3 = SmallBinSizesShifted[(uint)param_2 + 1];
  if (((FMallocBinnedCommonBase::BinnedTlsSlot == 0xffffffff) ||
      (plVar9 = TlsGetValue(FMallocBinnedCommonBase::BinnedTlsSlot), plVar9 == (longlong *)0x0)) ||
     ((char)plVar9[0x137] == '\0')) {
    plVar9 = (longlong *)0x0;
    *(ulonglong *)param_1 = *(ulonglong *)param_1 & 0xffff000000000000;
    goto LAB_1416972e8;
  }
  pFVar14 = (FBundleNode *)0x0;
  uVar15 = param_2 & 0xffffffff;
  if (plVar9[uVar15 * 4 + 5] != 0) {
    *(char *)(plVar9[uVar15 * 4 + 5] + 6) = (char)plVar9[uVar15 * 4 + 6];
    pFVar6 = (FBundleNode *)plVar9[uVar15 * 4 + 5];
    pFVar12 = pFVar14;
    do {
      ppFVar13 = Private::GGlobalRecycler.Bundles[0].FreeBundles +
                 (longlong)(pFVar12 + (param_2 & 0xffffffff));
      if (*ppFVar13 == (FBundleNode *)0x0) {
        LOCK();
        pFVar2 = *ppFVar13;
        if (pFVar2 == (FBundleNode *)0x0) {
          *ppFVar13 = pFVar6;
        }
        UNLOCK();
        if (pFVar2 == (FBundleNode *)0x0) goto LAB_141697219;
      }
      uVar11 = (int)pFVar12 + 1;
      pFVar12 = (FBundleNode *)(ulonglong)uVar11;
    } while (uVar11 < 8);
    pFVar14 = (FBundleNode *)plVar9[uVar15 * 4 + 5];
LAB_141697219:
    plVar9[uVar15 * 4 + 5] = 0;
    *(undefined4 *)(plVar9 + uVar15 * 4 + 6) = 0;
  }
  uVar15 = param_2 & 0xffffffff;
  if ((int)plVar9[uVar15 * 4 + 4] * (uint)uVar3 * 8 < 0x10000 &&
      *(uint *)(plVar9 + uVar15 * 4 + 4) < 0x40) {
LAB_14169728f:
    *(ulonglong *)param_1 =
         (plVar9[uVar15 * 4 + 3] ^ *(ulonglong *)param_1) & 0xffff000000000000 ^
         plVar9[uVar15 * 4 + 3];
    *(int *)(plVar9 + uVar15 * 4 + 4) = (int)plVar9[uVar15 * 4 + 4] + 1;
    plVar9[uVar15 * 4 + 3] = (longlong)param_1;
  }
  else {
    if (plVar9[uVar15 * 4 + 5] == 0) {
      plVar9[uVar15 * 4 + 5] = plVar9[uVar15 * 4 + 3];
      plVar9[uVar15 * 4 + 6] = plVar9[uVar15 * 4 + 4];
      plVar9[uVar15 * 4 + 3] = 0;
      *(undefined4 *)(plVar9 + uVar15 * 4 + 4) = 0;
      goto LAB_14169728f;
    }
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("bPushed",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinned3.cpp"
                       ,0x39c,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  LOCK();
  paVar1 = &this->SmallPoolTables[param_2].TotalFreeCount;
  *paVar1 = (atomic<__int64>)((longlong)*paVar1 + 1);
  UNLOCK();
  *plVar9 = *plVar9 + (ulonglong)uVar3 * -8;
  param_1 = pFVar14;
LAB_1416972e8:
  if ((param_1 != (FBundleNode *)0x0) &&
     (Private::FreeBundles(this,param_1,(uint)param_2), plVar9 == (longlong *)0x0)) {
    LOCK();
    paVar1 = &this->SmallPoolTables[param_2].TotalFreeCount;
    *paVar1 = (atomic<__int64>)((longlong)*paVar1 + 1);
    UNLOCK();
    LOCK();
    FMallocBinnedCommonBase::AllocatedSmallPoolMemory =
         (atomic<__int64>)
         ((longlong)FMallocBinnedCommonBase::AllocatedSmallPoolMemory + (ulonglong)uVar3 * -8);
    UNLOCK();
  }
  return;
}

// FreeMetaDataMemory @ 141697c10

void __cdecl FMallocBinned3::FreeMetaDataMemory(void *param_1,ulong64 param_2)

{
  FLowLevelMemTracker *this;
  ulong64 uVar1;
  ulong64 uVar2;
  void *local_18 [2];
  
  if (param_1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::Get();
      if (FLowLevelMemTracker::EnabledState != Disabled) {
        FLowLevelMemTracker::BootstrapInitialise(this);
        UE::LLMPrivate::FLLMTracker::TrackFree(this->Trackers[0],param_1,None,true);
      }
    }
    uVar1 = FWindowsPlatformMemory::FPlatformVirtualMemoryBlock::GetVirtualSizeAlignment();
    uVar2 = FWindowsPlatformMemory::FPlatformVirtualMemoryBlock::GetVirtualSizeAlignment();
    local_18[1]._0_4_ = (undefined4)(((param_2 - 1) + uVar1 & ~(uVar1 - 1)) / uVar2);
    local_18[0] = param_1;
    FWindowsPlatformMemory::FPlatformVirtualMemoryBlock::FreeVirtual
              ((FPlatformVirtualMemoryBlock *)local_18);
  }
  return;
}

// GetAllocationSize @ 141698750

bool __thiscall
FMallocBinned3::GetAllocationSize(FMallocBinned3 *this,void *param_1,ulong64 *param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  ulong64 uVar5;
  FPoolInfo *pFVar6;
  
  uVar5 = PoolIndexFromPtr(this,param_1);
  if (uVar5 < 0x4d) {
    *param_2 = (ulonglong)SmallBinSizesShifted[(int)uVar5 + 1] << 3;
    return true;
  }
  uVar5 = PoolIndexFromPtr(this,param_1);
  if (uVar5 < 0x4d) {
    *param_2 = (ulonglong)SmallBinSizesShifted[(int)uVar5 + 1] << 3;
  }
  else {
    if (param_1 == (void *)0x0) {
      return false;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)&this->_padding_);
    pFVar6 = TMallocBinnedCommon<FMallocBinned3,77,131072>::Internal::FindPoolInfo(this,param_1);
    LeaveCriticalSection((LPCRITICAL_SECTION)&this->_padding_);
    if (pFVar6 == (FPoolInfo *)0x0) {
                    /* WARNING: Subroutine does not return */
      FMallocBinnedCommonBase::UnrecognizedPointerFatalError
                ((FMallocBinnedCommonBase *)this,param_1);
    }
    uVar1 = pFVar6->CommitSize;
    if (((ulonglong)uVar1 < (ulonglong)pFVar6->AllocSize) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("PoolOSRequestedBytes <= PoolOsBytes",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\MallocBinnedCommon.h"
                           ,0x3a5,L"FMallocBinned::GetAllocationSizeExternal %zu %zu"), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    *param_2 = (ulonglong)uVar1;
  }
  return true;
}

// GetDescriptiveName @ 141699570

wchar_t * __thiscall FMallocBinned3::GetDescriptiveName(FMallocBinned3 *this)

{
  return L"Binned3";
}

// GetFrontPool @ 141699800

FPoolInfoSmall * __thiscall
FMallocBinned3::GetFrontPool(FMallocBinned3 *this,FPoolTable *param_1,uint param_2,uint *param_3)

{
  uint uVar1;
  FPoolInfoSmall *pFVar2;
  
  uVar1 = FBitTree::NextAllocBit(&param_1->BlocksExhaustedBits);
  *param_3 = uVar1;
  if (uVar1 == 0xffffffff) {
    return (FPoolInfoSmall *)0x0;
  }
  pFVar2 = Private::GetOrCreatePoolInfoSmall(this,param_2,uVar1);
  return pFVar2;
}

// GetOrCreatePoolInfoSmall @ 14169a410

/* WARNING: Enum "Type": Some values do not have unique names */

FPoolInfoSmall * __cdecl
FMallocBinned3::Private::GetOrCreatePoolInfoSmall(FMallocBinned3 *param_1,uint param_2,uint param_3)

{
  FPoolInfoSmall **ppFVar1;
  uint uVar2;
  FPoolInfoSmall **ppFVar3;
  ulonglong uVar4;
  FPoolInfoSmall *pFVar5;
  undefined **ppuVar6;
  
  uVar2 = param_1->SmallPoolInfosPerPlatformPage;
  uVar4 = (ulonglong)param_3 / (ulonglong)uVar2;
  ppFVar3 = param_1->SmallPoolTables[param_2].PoolInfos;
  ppFVar1 = ppFVar3 + uVar4;
  if (ppFVar3[uVar4] == (FPoolInfoSmall *)0x0) {
    pFVar5 = AllocateMetaDataMemory((ulonglong)FMallocBinnedCommonBase::OsAllocationGranularity);
    *ppFVar1 = pFVar5;
    FMallocBinnedCommonBase::PoolInfoMemory =
         FMallocBinnedCommonBase::PoolInfoMemory +
         (ulonglong)FMallocBinnedCommonBase::OsAllocationGranularity;
    DefaultConstructItems<FMallocBinned3::FPoolInfoSmall,unsigned_int>(*ppFVar1,uVar2);
  }
  pFVar5 = *ppFVar1 + (ulonglong)param_3 % (ulonglong)uVar2;
  if (param_3 < param_1->SmallPoolTables[param_2].NumEverUsedBlocks) {
    if ((pFVar5->Canary - 1 & 0xfffffffd) == 0) goto LAB_14169a4de;
    ppuVar6 = &PTR_u_MallocBinned3_C_150661e50;
  }
  else {
    param_1->SmallPoolTables[param_2].NumEverUsedBlocks = param_3 + 1;
    if (pFVar5->Canary == 3) goto LAB_14169a4de;
    ppuVar6 = &PTR_u_MallocBinned3_C_150661d38;
  }
  UE::Logging::Private::BasicFatalLog
            ((FStaticBasicLogRecord *)ppuVar6,(FLogCategoryBase *)&LogMemory);
LAB_14169a4de:
  *pFVar5 = (FPoolInfoSmall)((uint)*pFVar5 & 0xfffffffd);
  *pFVar5 = (FPoolInfoSmall)((uint)*pFVar5 | 1);
  return pFVar5;
}

// IsInternallyThreadSafe @ 1416b0bb0

bool __thiscall FMallocBinned3::IsInternallyThreadSafe(FMallocBinned3 *this)

{
  return true;
}

// Malloc @ 1416b21b0

/* WARNING: Removing unreachable block (ram,0x0001416b231d) */
/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall FMallocBinned3::Malloc(FMallocBinned3 *this,ulong64 param_1,uint param_2)

{
  uint *puVar1;
  FBundleNode *pFVar2;
  FLLMTracker *this_00;
  code *pcVar3;
  longlong lVar4;
  longlong *plVar5;
  uchar *puVar6;
  bool bVar7;
  bool bVar8;
  void *pvVar9;
  longlong *plVar10;
  FPoolInfoSmall *this_01;
  ulonglong *puVar11;
  ulong64 uVar12;
  FLowLevelMemTracker *pFVar13;
  FTagData *pFVar14;
  FLLMThreadState *this_02;
  FPoolInfo *pFVar15;
  FBundleNode **ppFVar16;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar17;
  longlong *plVar18;
  int iVar19;
  ulonglong uVar20;
  FBundleNode *pFVar21;
  longlong *local_res10;
  uint local_res18 [2];
  uchar *local_res20;
  ELLMTagSet local_68;
  uint local_64;
  LPCRITICAL_SECTION local_60;
  FBitTree *local_58;
  ulonglong *local_50;
  uint local_48;
  
  bVar8 = param_1 < 0x20001;
  local_res10 = (longlong *)param_1;
  local_res18[0] = param_2;
  if (((param_2 & param_2 - 1) != 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("FMath::IsPowerOfTwo(Alignment)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinned3.cpp"
                         ,0x2a6,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    pvVar9 = (void *)(*pcVar3)();
    return pvVar9;
  }
  if ((param_1 < 0x20001) && (0x10 < param_2)) {
    bVar8 = TMallocBinnedCommon<FMallocBinned3,77,131072>::PromoteToLargerBin
                      ((TMallocBinnedCommon<FMallocBinned3,77,131072> *)this,(ulong64 *)&local_res10
                       ,local_res18,this);
    param_1 = (ulong64)local_res10;
    param_2 = local_res18[0];
  }
  if (bVar8 == false) {
    local_res18[0] = 0x10;
    if (0x10 < param_2) {
      local_res18[0] = param_2;
    }
    uVar20 = (ulonglong)local_res18[0];
    uVar12 = FWindowsPlatformMemory::FPlatformVirtualMemoryBlock::GetCommitAlignment();
    local_res20 = (uchar *)((ulonglong)local_res20 & 0xffffffffffffff00);
    plVar18 = (longlong *)((uVar12 - 1) + param_1 & ~(uVar12 - 1));
    if ((FLowLevelMemTracker::EnabledState == Disabled) ||
       (pFVar13 = FLowLevelMemTracker::Get(), FLowLevelMemTracker::EnabledState == Disabled)) {
      local_68 = (ELLMTagSet)local_res18[0];
    }
    else {
      FLowLevelMemTracker::BootstrapInitialise(pFVar13);
      this_00 = pFVar13->Trackers[0];
      local_res20 = (uchar *)CONCAT71(local_res20._1_7_,1);
      local_68 = None;
      pFVar14 = FLowLevelMemTracker::FindOrAddTagData(this_00->LLMRef,FMalloc,Scope);
      this_02 = UE::LLMPrivate::FLLMTracker::GetOrCreateState(this_00);
      UE::LLMPrivate::FLLMThreadState::PushTag(this_02,pFVar14,None);
    }
    FWindowsPlatformMemory::FPlatformVirtualMemoryBlock::AllocateVirtual
              ((FPlatformVirtualMemoryBlock *)&local_50,(ulong64)plVar18,uVar20);
    FWindowsPlatformMemory::FPlatformVirtualMemoryBlock::Commit
              ((FPlatformVirtualMemoryBlock *)&local_50,0,(ulong64)plVar18);
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      pFVar13 = FLowLevelMemTracker::Get();
      FLowLevelMemTracker::OnLowLevelAlloc
                (pFVar13,Platform,local_50,(ulong64)plVar18,Untagged,None,true);
    }
    if (((ulonglong)local_50 & uVar20 - 1) != 0) {
      UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogMemory);
    }
    if (local_50 == (ulonglong *)0x0) {
                    /* WARNING: Subroutine does not return */
      FMallocBinnedCommonBase::OutOfMemory((ulong64)plVar18,0);
    }
    uVar12 = PoolIndexFromPtr(this,local_50);
    if ((uVar12 < 0x4d) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsOSAllocation(Result)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinned3.cpp"
                           ,0x32d,L""), bVar8)) {
      pcVar3 = (code *)swi(3);
      pvVar9 = (void *)(*pcVar3)();
      return pvVar9;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)&this->_padding_);
    LOCK();
    FMallocBinnedCommonBase::AllocatedLargePoolMemory =
         (atomic<__int64>)((longlong)FMallocBinnedCommonBase::AllocatedLargePoolMemory + param_1);
    UNLOCK();
    LOCK();
    FMallocBinnedCommonBase::AllocatedLargePoolMemoryWAlignment =
         (atomic<__int64>)
         ((longlong)FMallocBinnedCommonBase::AllocatedLargePoolMemoryWAlignment + (longlong)plVar18)
    ;
    UNLOCK();
    pFVar15 = TMallocBinnedCommon<FMallocBinned3,77,131072>::Internal::GetOrCreatePoolInfo
                        (this,local_50,Assigned);
    if (((((longlong *)param_1 == (longlong *)0x0) || (plVar18 < param_1)) ||
        (plVar10 = (longlong *)
                   FWindowsPlatformMemory::FPlatformVirtualMemoryBlock::GetCommitAlignment(),
        plVar18 < plVar10)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Size > 0 && Size <= AlignedSize && AlignedSize >= FPlatformMemory::FPlatformVirtualMemoryBlock::GetCommitAlignment()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinned3.cpp"
                           ,0x33a,L""), bVar8)) {
      pcVar3 = (code *)swi(3);
      pvVar9 = (void *)(*pcVar3)();
      return pvVar9;
    }
    if (pFVar15->Canary != Assigned) {
      UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogMemory);
    }
    uVar17 = (uint)param_1;
    pFVar15->AllocSize = uVar17;
    pFVar15->CommitSize = (uint)plVar18;
    pFVar15->VMSizeDivVirtualSizeAlignment = local_48;
    if ((((uVar17 == 0) || ((uint)plVar18 < uVar17)) ||
        (uVar12 = FWindowsPlatformMemory::FPlatformVirtualMemoryBlock::GetVirtualSizeAlignment(),
        uVar12 * local_48 < ((ulonglong)plVar18 & 0xffffffff))) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("AllocSize > 0 && CommitSize >= AllocSize && VMSizeDivVirtualSizeAlignment * FPlatformMemory::FPlatformVirtualMemoryBlock::GetVirtualSizeAlignment() >= CommitSize"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinned3.cpp"
                           ,0x11a,L""), bVar8)) {
      pcVar3 = (code *)swi(3);
      pvVar9 = (void *)(*pcVar3)();
      return pvVar9;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&this->_padding_);
    if ((char)local_res20 != '\0') {
      pFVar13 = FLowLevelMemTracker::Get();
      UE::LLMPrivate::FLLMTracker::PopTag(pFVar13->Trackers[local_68],local_68);
    }
  }
  else {
    plVar18 = (longlong *)(ulonglong)MemSizeToPoolIndex[param_1 + 7 >> 3];
    uVar17 = (uint)MemSizeToPoolIndex[param_1 + 7 >> 3];
    local_res18[0] = uVar17;
    if (((FMallocBinnedCommonBase::BinnedTlsSlot == 0xffffffff) ||
        (plVar10 = TlsGetValue(FMallocBinnedCommonBase::BinnedTlsSlot), plVar10 == (longlong *)0x0))
       || ((char)plVar10[0x137] == '\0')) {
      plVar10 = (longlong *)0x0;
    }
    else {
      uVar20 = 0;
      local_res10 = plVar10 + (ulonglong)uVar17 * 4;
      pFVar21 = (FBundleNode *)local_res10[3];
      if (pFVar21 == (FBundleNode *)0x0) {
        local_res20 = (uchar *)((longlong)plVar18 * 8);
        *(undefined4 *)(local_res10 + 4) = 0;
        do {
          ppFVar16 = Private::GGlobalRecycler.Bundles[(longlong)plVar18].FreeBundles + uVar20;
          pFVar21 = *ppFVar16;
          if (pFVar21 != (FBundleNode *)0x0) {
            LOCK();
            pFVar2 = *ppFVar16;
            if (pFVar21 == pFVar2) {
              *ppFVar16 = (FBundleNode *)0x0;
            }
            UNLOCK();
            if (pFVar21 == pFVar2) {
              plVar18 = (longlong *)(ulonglong)local_res18[0];
              local_res10[3] = (longlong)pFVar21;
              *(uint *)(local_res10 + 4) = (uint)pFVar21->Count;
              goto LAB_1416b2381;
            }
          }
          uVar17 = (int)uVar20 + 1;
          uVar20 = (ulonglong)uVar17;
        } while (uVar17 < 8);
        plVar18 = (longlong *)(ulonglong)local_res18[0];
        local_res10[3] = 0;
      }
      else {
LAB_1416b2381:
        if (plVar10[(longlong)plVar18 * 4 + 5] != 0 && pFVar21 == (FBundleNode *)0x0) {
          lVar4 = plVar10[(longlong)plVar18 * 4 + 5];
          plVar10[(longlong)plVar18 * 4 + 5] = 0;
          plVar10[(longlong)plVar18 * 4 + 3] = lVar4;
          plVar10[(longlong)plVar18 * 4 + 4] = plVar10[(longlong)plVar18 * 4 + 6];
          *(undefined4 *)(plVar10 + (longlong)plVar18 * 4 + 6) = 0;
        }
        puVar11 = (ulonglong *)plVar10[(longlong)plVar18 * 4 + 3];
        if (puVar11 != (ulonglong *)0x0) {
          *(int *)(plVar10 + (longlong)plVar18 * 4 + 4) =
               (int)plVar10[(longlong)plVar18 * 4 + 4] + -1;
          plVar10[(longlong)plVar18 * 4 + 3] = *puVar11 & 0xffffffffffff;
          FPoolTable::HeadEndAlloc(this->SmallPoolTables + (longlong)plVar18,param_1);
          *plVar10 = *plVar10 + (ulonglong)this->SmallPoolTables[(longlong)plVar18].BinSize;
          return puVar11;
        }
      }
    }
    iVar19 = 0;
    lpCriticalSection = (LPCRITICAL_SECTION)&this->SmallPoolTables[(longlong)plVar18].Mutex;
    local_res10 = plVar18;
    local_60 = lpCriticalSection;
    EnterCriticalSection(lpCriticalSection);
    local_58 = &this->SmallPoolTables[(longlong)plVar18].BlocksExhaustedBits;
    local_64 = FBitTree::NextAllocBit(local_58);
    if (((local_64 == 0xffffffff) ||
        (this_01 = Private::GetOrCreatePoolInfoSmall(this,local_res18[0],local_64),
        this_01 == (FPoolInfoSmall *)0x0)) &&
       (this_01 = PushNewPoolToFront(this,this->SmallPoolTables + (longlong)plVar18,
                                     this->SmallPoolTables[(longlong)plVar18].BinSize,local_res18[0]
                                     ,&local_64), this_01 == (FPoolInfoSmall *)0x0)) {
      if (local_res18[0] + 1 < 0x4d) {
        puVar11 = Malloc(this,(ulonglong)this->SmallPoolTables[local_res18[0] + 1].BinSize,param_2);
        LeaveCriticalSection(lpCriticalSection);
        local_50 = puVar11;
      }
      else {
        puVar11 = Malloc(this,0x20001,param_2);
        LeaveCriticalSection(lpCriticalSection);
        local_50 = puVar11;
      }
    }
    else {
      local_res20 = BlockPointerFromIndecies
                              (this,local_res18[0],local_64,
                               this->SmallPoolTables[(longlong)plVar18].BlockSize);
      puVar11 = FPoolInfoSmall::AllocateBin
                          (this_01,local_res20,this->SmallPoolTables[(longlong)plVar18].BinSize);
      puVar1 = &this->SmallPoolTables[(longlong)plVar18].TotalUsedBins;
      *puVar1 = *puVar1 + 1;
      FPoolTable::HeadEndAlloc(this->SmallPoolTables + (longlong)plVar18,param_1);
      puVar6 = local_res20;
      plVar5 = local_res10;
      LOCK();
      FMallocBinnedCommonBase::AllocatedSmallPoolMemory =
           (atomic<__int64>)
           ((longlong)FMallocBinnedCommonBase::AllocatedSmallPoolMemory +
           (ulonglong)this->SmallPoolTables[(longlong)plVar18].BinSize);
      UNLOCK();
      if (plVar10 != (longlong *)0x0) {
        do {
          if (this_01->Canary != 1) {
            UE::Logging::Private::BasicFatalLog
                      ((FStaticBasicLogRecord *)
                       &`public:_void___cdecl_FMallocBinned3::FPoolInfoSmall::CheckCanary(FMallocBinned3::FPoolInfoSmall::ECanary)const___ptr64'
                        ::__l6::LOG_Static,(FLogCategoryBase *)&LogMemory);
          }
          lpCriticalSection = local_60;
          if (this_01->NoFirstFreeIndex != 0) break;
          if (0xffff < (int)plVar10[(longlong)plVar5 * 4 + 4] *
                       this->SmallPoolTables[(longlong)plVar18].BinSize ||
              0x3f < *(uint *)(plVar10 + (longlong)plVar5 * 4 + 4)) {
            if (plVar10[(longlong)plVar5 * 4 + 5] != 0) break;
            plVar10[(longlong)plVar5 * 4 + 5] = plVar10[(longlong)plVar5 * 4 + 3];
            plVar10[(longlong)plVar5 * 4 + 6] = plVar10[(longlong)plVar5 * 4 + 4];
            plVar10[(longlong)plVar5 * 4 + 3] = 0;
            *(undefined4 *)(plVar10 + (longlong)plVar5 * 4 + 4) = 0;
          }
          *puVar11 = (plVar10[(longlong)plVar5 * 4 + 3] ^ *puVar11) & 0xffff000000000000 ^
                     plVar10[(longlong)plVar5 * 4 + 3];
          *(int *)(plVar10 + (longlong)plVar5 * 4 + 4) = (int)plVar10[(longlong)plVar5 * 4 + 4] + 1;
          plVar10[(longlong)plVar5 * 4 + 3] = (longlong)puVar11;
          puVar11 = FPoolInfoSmall::AllocateBin
                              (this_01,puVar6,this->SmallPoolTables[(longlong)plVar18].BinSize);
          puVar1 = &this->SmallPoolTables[(longlong)plVar18].TotalUsedBins;
          *puVar1 = *puVar1 + 1;
          iVar19 = iVar19 + 1;
          lpCriticalSection = local_60;
        } while (iVar19 < 0x20);
      }
      if (this_01->Canary != 1) {
        UE::Logging::Private::BasicFatalLog
                  ((FStaticBasicLogRecord *)
                   &`public:_void___cdecl_FMallocBinned3::FPoolInfoSmall::CheckCanary(FMallocBinned3::FPoolInfoSmall::ECanary)const___ptr64'
                    ::__l6::LOG_Static,(FLogCategoryBase *)&LogMemory);
      }
      if (this_01->NoFirstFreeIndex != 0) {
        FBitTree::AllocBit(local_58,local_64);
      }
      LeaveCriticalSection(lpCriticalSection);
      local_50 = puVar11;
    }
  }
  return local_50;
}

// PoolIndexFromPtr @ 1416b5f70

ulong64 __thiscall FMallocBinned3::PoolIndexFromPtr(FMallocBinned3 *this,void *param_1)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  ulonglong uVar5;
  ulong64 uVar6;
  uint uVar7;
  uint uVar8;
  byte bVar9;
  
  for (lVar2 = 0x3f; 0x7fffffffUL >> lVar2 == 0; lVar2 = lVar2 + -1) {
  }
  if (PoolSearchDiv != 0) {
    uVar8 = 1;
    uVar7 = 1 << ((byte)lVar2 & 0x1f);
    iVar1 = 0;
    if (uVar7 != 0) {
      for (; (uVar7 >> iVar1 & 1) == 0; iVar1 = iVar1 + 1) {
      }
    }
    bVar9 = 0x20;
    if (uVar7 != 0) {
      bVar9 = (byte)iVar1;
    }
    uVar5 = 0x4d;
    if (PoolBaseVMPtr[0] <= param_1 && param_1 < HighestPoolBaseVMPtr + (1L << (bVar9 & 0x3f))) {
      uVar5 = (ulonglong)((longlong)param_1 - (longlong)PoolBaseVMPtr[0]) / PoolSearchDiv;
      if (0x4c < uVar5) {
        uVar5 = 0x4c;
      }
      if (param_1 < PoolBaseVMPtr[uVar5]) {
        do {
          uVar8 = uVar8 + 1;
          uVar5 = uVar5 - 1;
          if ((0x4c < uVar5) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("PoolIndex < (52 + ((128 * 1024) - 28672) / 4096)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\MallocBinned3.h"
                                 ,0xe8,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            uVar6 = (*pcVar3)();
            return uVar6;
          }
        } while (param_1 < PoolBaseVMPtr[uVar5]);
        for (lVar2 = 0x3f; 0x7fffffffUL >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
        uVar7 = 1 << ((byte)lVar2 & 0x1f);
        iVar1 = 0;
        if (uVar7 != 0) {
          for (; (uVar7 >> iVar1 & 1) == 0; iVar1 = iVar1 + 1) {
          }
        }
        bVar9 = 0x20;
        if (uVar7 != 0) {
          bVar9 = (byte)iVar1;
        }
        uVar7 = uVar8;
        if (PoolBaseVMPtr[uVar5] + (1L << (bVar9 & 0x3f)) <= param_1) {
          uVar5 = 0x4d;
        }
      }
      else {
        for (lVar2 = 0x3f; 0x7fffffffUL >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
        uVar7 = 1 << ((byte)lVar2 & 0x1f);
        iVar1 = 0;
        if (uVar7 != 0) {
          for (; (uVar7 >> iVar1 & 1) == 0; iVar1 = iVar1 + 1) {
          }
        }
        bVar9 = 0x20;
        if (uVar7 != 0) {
          bVar9 = (byte)iVar1;
        }
        uVar7 = 1;
        if (PoolBaseVMPtr[uVar5] + (1L << (bVar9 & 0x3f)) <= param_1) {
          do {
            uVar8 = uVar8 + 1;
            uVar5 = uVar5 + 1;
            if ((0x4c < uVar5) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("PoolIndex < (52 + ((128 * 1024) - 28672) / 4096)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\MallocBinned3.h"
                                   ,0xf5,L""), bVar4)) {
              pcVar3 = (code *)swi(3);
              uVar6 = (*pcVar3)();
              return uVar6;
            }
            for (lVar2 = 0x3f; 0x7fffffffUL >> lVar2 == 0; lVar2 = lVar2 + -1) {
            }
            uVar7 = 1 << ((byte)lVar2 & 0x1f);
            iVar1 = 0;
            if (uVar7 != 0) {
              for (; (uVar7 >> iVar1 & 1) == 0; iVar1 = iVar1 + 1) {
              }
            }
            bVar9 = 0x20;
            if (uVar7 != 0) {
              bVar9 = (byte)iVar1;
            }
          } while (PoolBaseVMPtr[uVar5] + (1L << (bVar9 & 0x3f)) <= param_1);
          uVar7 = uVar8;
          if (param_1 < PoolBaseVMPtr[uVar5]) {
            uVar5 = 0x4d;
          }
        }
      }
      LOCK();
      Binned3TotalPoolSearches = (TAtomic<__int64>)((longlong)Binned3TotalPoolSearches + 1);
      UNLOCK();
      LOCK();
      Binned3TotalPointerTests =
           (TAtomic<__int64>)((longlong)Binned3TotalPointerTests + (ulonglong)uVar7);
      UNLOCK();
    }
    return uVar5;
  }
  uVar7 = 1 << ((byte)lVar2 & 0x1f);
  iVar1 = 0;
  if (uVar7 != 0) {
    for (; (uVar7 >> iVar1 & 1) == 0; iVar1 = iVar1 + 1) {
    }
  }
  bVar9 = 0x20;
  if (uVar7 != 0) {
    bVar9 = (byte)iVar1;
  }
  return (ulonglong)((longlong)param_1 - (longlong)PoolBaseVMPtr[0]) >> (bVar9 & 0x3f);
}

// PushNewPoolToFront @ 1416b8d70

/* WARNING: Enum "Type": Some values do not have unique names */

FPoolInfoSmall * __thiscall
FMallocBinned3::PushNewPoolToFront
          (FMallocBinned3 *this,FPoolTable *param_1,uint param_2,uint param_3,uint *param_4)

{
  ulonglong uVar1;
  uint uVar2;
  FLLMTracker *this_00;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  uint *puVar7;
  FLowLevelMemTracker *pFVar8;
  FTagData *pFVar9;
  FLLMThreadState *this_01;
  FPoolInfoSmall *pFVar10;
  
  uVar6 = FBitTree::AllocBit(&param_1->BlocksAllocatedBits);
  if (uVar6 == 0xffffffff) {
    return (FPoolInfoSmall *)0x0;
  }
  puVar7 = (uint *)BlockPointerFromIndecies(this,param_3,uVar6,param_1->BlockSize);
  bVar4 = false;
  if ((FLowLevelMemTracker::EnabledState != Disabled) &&
     (pFVar8 = FLowLevelMemTracker::Get(), FLowLevelMemTracker::EnabledState != Disabled)) {
    FLowLevelMemTracker::BootstrapInitialise(pFVar8);
    this_00 = pFVar8->Trackers[0];
    bVar4 = true;
    pFVar9 = FLowLevelMemTracker::FindOrAddTagData(this_00->LLMRef,FMalloc,Scope);
    this_01 = UE::LLMPrivate::FLLMTracker::GetOrCreateState(this_00);
    UE::LLMPrivate::FLLMThreadState::PushTag(this_01,pFVar9,None);
  }
  uVar2 = param_1->BlockSize;
  LOCK();
  Binned3Commits = (TAtomic<__int64>)((longlong)Binned3Commits + 1);
  UNLOCK();
  FWindowsPlatformMemory::FPlatformVirtualMemoryBlock::Commit
            (this->PoolBaseVMBlock + param_3,
             (longlong)puVar7 - *(longlong *)(this->PoolBaseVMBlock + param_3),(ulonglong)uVar2);
  if (FLowLevelMemTracker::EnabledState != Disabled) {
    pFVar8 = FLowLevelMemTracker::Get();
    FLowLevelMemTracker::OnLowLevelAlloc(pFVar8,Platform,puVar7,(ulonglong)uVar2,Untagged,None,true)
    ;
  }
  uVar2 = param_1->BlockSize;
  uVar1 = ((ulonglong)uVar2 - (longlong)PoolBaseVMPtr[param_3]) + (longlong)puVar7;
  if (param_1->UnusedAreaOffsetLow < uVar1) {
    param_1->UnusedAreaOffsetLow = uVar1;
  }
  puVar7[1] = puVar7[1] & 0xff000fff;
  puVar7[1] = puVar7[1] | 0x1000000;
  *puVar7 = ((param_3 & 0x7f) << 0xf ^ ((*puVar7 ^ param_2 >> 3) & 0x7fff ^ *puVar7) & 0xffc07fff) &
            0xf9ffffff | 0x39c00000;
  if ((((char)param_3 == -1) || (0xffff < param_2 >> 3)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InPoolIndex < ((uint8) 0xff) && (InBinSize >> 3) <= ((uint16) 0xffff)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinned3.cpp"
                         ,0x74,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pFVar10 = (FPoolInfoSmall *)(*pcVar3)();
    return pFVar10;
  }
  puVar7[1] = puVar7[1] ^ (uVar2 / param_2 ^ puVar7[1]) & 0xfff;
  LOCK();
  FMallocBinnedCommonBase::AllocatedOSSmallPoolMemory =
       (atomic<__int64>)
       ((longlong)FMallocBinnedCommonBase::AllocatedOSSmallPoolMemory +
       (ulonglong)param_1->BlockSize);
  UNLOCK();
  param_1->TotalAllocatedBins = param_1->TotalAllocatedBins + (puVar7[1] & 0xfff);
  param_1->TotalAllocatedMem = param_1->TotalAllocatedMem + param_1->BlockSize;
  if ((((ulonglong)puVar7 & (ulonglong)FMallocBinnedCommonBase::OsAllocationGranularity - 1) != 0)
     && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsAligned(Free, OsAllocationGranularity)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinned3.cpp"
                            ,0x1a2,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pFVar10 = (FPoolInfoSmall *)(*pcVar3)();
    return pFVar10;
  }
  pFVar10 = Private::GetOrCreatePoolInfoSmall(this,param_3,uVar6);
  if (pFVar10->Canary != 1) {
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`public:_void___cdecl_FMallocBinned3::FPoolInfoSmall::CheckCanary(FMallocBinned3::FPoolInfoSmall::ECanary)const___ptr64'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogMemory);
  }
  pFVar10->Taken = 0;
  pFVar10->FirstFreeIndex = 0;
  pFVar10->NoFirstFreeIndex = 0;
  FBitTree::FreeBit(&param_1->BlocksExhaustedBits,uVar6);
  *param_4 = uVar6;
  if (bVar4) {
    pFVar8 = FLowLevelMemTracker::Get();
    UE::LLMPrivate::FLLMTracker::PopTag(pFVar8->Trackers[0],None);
  }
  return pFVar10;
}

// QuantizeSize @ 1416b9810

ulong64 __thiscall FMallocBinned3::QuantizeSize(FMallocBinned3 *this,ulong64 param_1,uint param_2)

{
  ulong64 uVar1;
  
  uVar1 = TMallocBinnedCommon<FMallocBinned3,77,131072>::QuantizeSizeCommon
                    ((TMallocBinnedCommon<FMallocBinned3,77,131072> *)this,param_1,param_2,this);
  return uVar1;
}

// Realloc @ 1416ba670

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
FMallocBinned3::Realloc(FMallocBinned3 *this,void *param_1,ulong64 param_2,uint param_3)

{
  atomic<__int64> *paVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  ulong64 uVar5;
  void *pvVar6;
  FPoolInfo *pFVar7;
  uint uVar8;
  ulonglong uVar9;
  
  uVar5 = PoolIndexFromPtr(this,param_1);
  if (param_2 == 0) {
    FreeExternal(this,param_1,uVar5);
    return (void *)0x0;
  }
  if (((param_3 & param_3 - 1) != 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("FMath::IsPowerOfTwo(Alignment)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinned3.cpp"
                         ,0x34d,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pvVar6 = (void *)(*pcVar3)();
    return pvVar6;
  }
  if ((FMallocBinnedCommonBase::OsAllocationGranularity < param_3) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Alignment <= OsAllocationGranularity",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinned3.cpp"
                         ,0x34e,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pvVar6 = (void *)(*pcVar3)();
    return pvVar6;
  }
  if (uVar5 < 0x4d) {
    if ((param_1 == (void *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Ptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinned3.cpp"
                           ,0x352,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pvVar6 = (void *)(*pcVar3)();
      return pvVar6;
    }
    uVar9 = (ulonglong)SmallBinSizesShifted[(int)uVar5 + 1] * 8;
    if ((param_2 <= uVar9 && (uVar9 & (ulonglong)param_3 - 1) == 0) &&
       ((uVar5 == 0 || ((ulonglong)SmallBinSizesShifted[uVar5 & 0xffffffff] << 3 < param_2)))) {
      FPoolTable::HeadEndAlloc(this->SmallPoolTables + uVar5,param_2);
      LOCK();
      paVar1 = &this->SmallPoolTables[uVar5].TotalFreeCount;
      *paVar1 = (atomic<__int64>)((longlong)*paVar1 + 1);
      UNLOCK();
      return param_1;
    }
    pvVar6 = Malloc(this,param_2,param_3);
    if (param_2 < uVar9) {
      uVar9 = param_2;
    }
    memcpy(pvVar6,param_1,uVar9);
    FreeExternal(this,param_1,uVar5);
    return pvVar6;
  }
  if (param_1 == (void *)0x0) {
    pvVar6 = Malloc(this,param_2,param_3);
    return pvVar6;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&this->_padding_);
  pFVar7 = TMallocBinnedCommon<FMallocBinned3,77,131072>::Internal::FindPoolInfo(this,param_1);
  if (pFVar7 == (FPoolInfo *)0x0) {
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogMemory);
  }
  uVar8 = pFVar7->CommitSize;
  uVar9 = (ulonglong)pFVar7->AllocSize;
  if ((uVar8 < pFVar7->AllocSize) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PoolOSRequestedBytes <= PoolOsBytes",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinned3.cpp"
                         ,0x377,L"FMallocBinned3::ReallocExternal %u %u"), bVar4)) {
    pcVar3 = (code *)swi(3);
    pvVar6 = (void *)(*pcVar3)();
    return pvVar6;
  }
  if ((uVar8 < param_2) ||
     (((param_2 < 0x20001 && (param_3 < 0x11)) ||
      ((((ulonglong)FMallocBinnedCommonBase::OsAllocationGranularity - 1) + param_2 &
       ~((ulonglong)FMallocBinnedCommonBase::OsAllocationGranularity - 1)) < (ulonglong)uVar8)))) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&this->_padding_);
    pvVar6 = Malloc(this,param_2,param_3);
    if (param_2 < uVar9) {
      uVar9 = param_2;
    }
    memcpy(pvVar6,param_1,uVar9);
    FreeExternal(this,param_1,uVar5);
    return pvVar6;
  }
  LOCK();
  FMallocBinnedCommonBase::AllocatedLargePoolMemory =
       (atomic<__int64>)
       ((longlong)FMallocBinnedCommonBase::AllocatedLargePoolMemory + (param_2 - uVar9));
  UNLOCK();
  if (pFVar7->Canary != Assigned) {
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogMemory);
  }
  uVar8 = (uint)param_2;
  pFVar7->AllocSize = uVar8;
  if ((((uVar8 == 0) || (uVar2 = pFVar7->CommitSize, uVar2 < uVar8)) ||
      (uVar8 = pFVar7->VMSizeDivVirtualSizeAlignment,
      uVar5 = FWindowsPlatformMemory::FPlatformVirtualMemoryBlock::GetVirtualSizeAlignment(),
      uVar5 * uVar8 < (ulonglong)uVar2)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("AllocSize > 0 && CommitSize >= AllocSize && VMSizeDivVirtualSizeAlignment * FPlatformMemory::FPlatformVirtualMemoryBlock::GetVirtualSizeAlignment() >= CommitSize"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinned3.cpp"
                         ,0x111,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pvVar6 = (void *)(*pcVar3)();
    return pvVar6;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&this->_padding_);
  return param_1;
}

// RecordPoolSearch @ 1416badf0

void __thiscall FMallocBinned3::RecordPoolSearch(FMallocBinned3 *this,uint param_1)

{
  LOCK();
  Binned3TotalPoolSearches = (TAtomic<__int64>)((longlong)Binned3TotalPoolSearches + 1);
  UNLOCK();
  LOCK();
  Binned3TotalPointerTests =
       (TAtomic<__int64>)((longlong)Binned3TotalPointerTests + (ulonglong)param_1);
  UNLOCK();
  return;
}

// Trim @ 1416c2df0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FMallocBinned3::Trim(FMallocBinned3 *this,bool param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  FName *pFVar4;
  TStatIdData *pTVar5;
  uint uVar6;
  undefined ***pppuVar7;
  FNameEntryId FVar8;
  FName FVar9;
  undefined1 auStackY_d8 [32];
  FName FStack_78;
  FName FStack_70;
  FName FStack_60;
  code *apcStack_58 [2];
  undefined **ppuStack_48;
  FMallocBinned3 *pFStack_40;
  undefined ***pppuStack_30;
  ulonglong uStack_28;
  
  if (!param_1) {
    return;
  }
  uStack_28 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  LOCK();
  this->_padding_ = this->_padding_ + 1;
  UNLOCK();
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_void___cdecl_FMallocBinnedCommonUtils::Trim<FMallocBinned3>(FMallocBinned3&___ptr64)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_void___cdecl_FMallocBinnedCommonUtils::Trim<FMallocBinned3>(FMallocBinned3&___ptr64)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_void___cdecl_FMallocBinnedCommonUtils::Trim<FMallocBinned3>(FMallocBinned3&___ptr64)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_FMallocBinnedCommonUtils_Trim = (TStatIdData *)0x0;
    pFVar4 = ::FName::FName(&FStack_78,"STAT_FMallocBinnedCommonUtils_Trim");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_static_void___cdecl_FMallocBinnedCommonUtils::Trim<FMallocBinned3>(FMallocBinned3&___ptr64)'
                ::__l2::StatPtr_STAT_FMallocBinnedCommonUtils_Trim,*pFVar4,
               L"STAT_FMallocBinnedCommonUtils_Trim","STATGROUP_Quick","STATCAT_Advanced",L"Quick",
               true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`public:_static_void___cdecl_FMallocBinnedCommonUtils::Trim<FMallocBinned3>(FMallocBinned3&___ptr64)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar5 = _StatPtr_STAT_FMallocBinnedCommonUtils_Trim;
  if (_StatPtr_STAT_FMallocBinnedCommonUtils_Trim == (TStatIdData *)0x0) {
    pFVar4 = ::FName::FName(&FStack_60,"STAT_FMallocBinnedCommonUtils_Trim");
    pTVar5 = FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &`public:_static_void___cdecl_FMallocBinnedCommonUtils::Trim<FMallocBinned3>(FMallocBinned3&___ptr64)'
                         ::__l2::StatPtr_STAT_FMallocBinnedCommonUtils_Trim,*pFVar4,
                        L"STAT_FMallocBinnedCommonUtils_Trim","STATGROUP_Quick","STATCAT_Advanced",
                        L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar9 = *(FName *)&pTVar5->Name;
  bVar1 = false;
  bVar3 = false;
  FStack_70.ComparisonIndex.Value = 0;
  FStack_70.Number = 0;
  FVar8 = FVar9.ComparisonIndex.Value;
  uVar6 = FVar9.Number;
  if ((FVar8.Value != 0) || (uVar6 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      FStack_78.ComparisonIndex.Value = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&FStack_78,(pTVar5->StatDescriptionAnsi).Ptr);
      bVar1 = false;
      bVar3 = true;
      if (-1 < CpuChannel->Enabled) {
        FStack_78.ComparisonIndex.Value = FVar8.Value;
        FStack_78.Number = uVar6;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&FStack_78,(pTVar5->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\MallocBinnedCommonUtils.h"
                   ,0x92);
        bVar1 = true;
        bVar3 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      FStack_78.ComparisonIndex.Value = FVar8.Value;
      FStack_78.Number = uVar6;
      FThreadStats::AddMessage(FVar9,CycleScopeStart);
      bVar2 = true;
      goto LAB_14167712c;
    }
  }
  bVar2 = false;
  FVar9 = FStack_70;
LAB_14167712c:
  pppuStack_30 = (undefined ***)0x0;
  ppuStack_48 = &
                ___7__TFunction_OwnedObject_V<lambda_1>__1____Trim_VFMallocBinned3___FMallocBinnedCommonUtils__SAXAEAVFMallocBinned3___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  apcStack_58[0] =
       UE::Core::Private::Function::
       TFunctionRefCaller<`FMallocBinnedCommonUtils::Trim<FMallocBinned3>'::__l2::<lambda_1>,void,enum_ENamedThreads::Type>
       ::Call;
  pFStack_40 = this;
  FTaskGraphInterface::BroadcastSlow_OnlyUseForSpecialPurposes
            (false,false,(TFunction<void___cdecl(ENamedThreads::Type)> *)apcStack_58);
  if (apcStack_58[0] != (code *)0x0) {
    pppuVar7 = &ppuStack_48;
    if (pppuStack_30 != (undefined ***)0x0) {
      pppuVar7 = pppuStack_30;
    }
    (*(code *)(*pppuVar7)[2])();
  }
  if (bVar3) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar1) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar2) {
    FThreadStats::AddMessage(FVar9,CycleScopeEnd);
  }
  return;
}

// UpdateStats @ 1416c5f20

void __thiscall FMallocBinned3::UpdateStats(FMallocBinned3 *this)

{
  TMallocBinnedCommon<FMallocBinned3,77,131072>::UpdateStatsCommon
            ((TMallocBinnedCommon<FMallocBinned3,77,131072> *)this,this);
  return;
}

// ValidateHeap @ 1416c7bf0

bool __thiscall FMallocBinned3::ValidateHeap(FMallocBinned3 *this)

{
  return true;
}

