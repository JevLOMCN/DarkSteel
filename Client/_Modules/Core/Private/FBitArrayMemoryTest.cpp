// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// TestMemmoveBitsWordOrder @ 141bb23c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FBitArrayMemoryTest::TestMemmoveBitsWordOrder(FBitArrayMemoryTest *this)

{
  uint *puVar1;
  uint *puVar2;
  FAutomationTestBase *pFVar3;
  code *pcVar4;
  char cVar5;
  char cVar6;
  bool bVar7;
  bool bVar8;
  undefined8 uVar9;
  undefined8 uVar10;
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
  undefined8 uVar24;
  uint uVar25;
  int iVar26;
  ulonglong uVar27;
  FAutomationTestFramework *pFVar28;
  size_t sVar29;
  byte bVar30;
  int iVar31;
  int *piVar32;
  uint uVar33;
  int iVar34;
  longlong lVar35;
  int iVar36;
  uint uVar37;
  int iVar38;
  uint uVar39;
  uint uVar40;
  byte bVar41;
  bool bVar42;
  ulonglong uVar43;
  bool bVar44;
  int **ppiVar45;
  int iVar46;
  undefined1 auStackY_20e8 [32];
  uint *local_2090;
  undefined4 local_2080;
  undefined4 local_207c;
  int *local_2078;
  int *local_2070;
  FString local_2068;
  size_t local_2058;
  FString local_2050;
  undefined8 local_2040;
  undefined8 uStack_2038;
  undefined8 local_2030;
  undefined8 uStack_2028;
  undefined8 local_2020;
  undefined8 uStack_2018;
  undefined4 local_2010;
  undefined4 local_200c;
  undefined4 local_2008;
  int local_2004;
  undefined8 local_2000;
  undefined8 uStack_1ff8;
  undefined8 local_1ff0;
  undefined8 uStack_1fe8;
  undefined8 local_1fe0;
  undefined8 uStack_1fd8;
  undefined4 local_1fd0;
  undefined4 local_1fcc;
  undefined4 local_1fc8;
  int local_1fc4 [3];
  undefined8 local_1fb8;
  undefined8 uStack_1fb0;
  undefined8 local_1fa8;
  undefined8 uStack_1fa0;
  undefined8 local_1f98;
  undefined8 uStack_1f90;
  undefined8 local_1f88;
  undefined8 uStack_1f80;
  undefined8 local_1f78;
  undefined8 uStack_1f70;
  undefined4 local_1f68;
  uint local_1f64 [3];
  undefined8 local_1f58;
  undefined8 uStack_1f50;
  undefined8 local_1f48;
  undefined8 uStack_1f40;
  undefined8 local_1f38;
  undefined8 uStack_1f30;
  undefined8 local_1f28;
  undefined8 uStack_1f20;
  undefined4 local_1f18;
  char acStack_1f14 [636];
  char local_1c98 [640];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_1a18;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_18f8;
  uint local_17d8 [20];
  undefined8 local_1788;
  undefined8 uStack_1780;
  undefined8 local_1778;
  undefined8 uStack_1770;
  undefined8 local_1768;
  undefined8 uStack_1760;
  undefined8 local_1758;
  undefined8 uStack_1750;
  undefined8 local_1748;
  undefined8 uStack_1740;
  uint local_1738 [20];
  uint local_16e8 [20];
  undefined8 local_1698;
  undefined8 uStack_1690;
  undefined8 local_1688;
  undefined8 uStack_1680;
  undefined8 local_1678;
  undefined8 uStack_1670;
  undefined8 local_1668;
  undefined8 uStack_1660;
  undefined8 local_1658;
  undefined8 uStack_1650;
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
  undefined8 local_15f8;
  undefined8 uStack_15f0;
  undefined8 local_15e8;
  undefined8 uStack_15e0;
  undefined8 local_15d8;
  undefined8 uStack_15d0;
  undefined8 local_15c8;
  undefined8 uStack_15c0;
  undefined8 local_15b8;
  undefined8 uStack_15b0;
  undefined8 local_15a8;
  undefined8 uStack_15a0;
  undefined8 local_1598;
  undefined8 uStack_1590;
  undefined8 local_1588;
  undefined8 uStack_1580;
  undefined8 local_1578;
  undefined8 uStack_1570;
  undefined8 local_1568;
  undefined8 uStack_1560;
  uint local_1558 [40];
  short local_14b8 [640];
  short local_fb8 [640];
  short local_ab8 [640];
  short local_5b8 [640];
  ulonglong local_b8;
  
  uVar24 = _UNK_15071d448;
  uVar23 = ___xmm_ffffffe0ffffffe1ffffffff00000081;
  uVar22 = _UNK_15071d438;
  uVar21 = ___xmm_ffffff7fffffff80ffffff81ffffffdf;
  uVar20 = _UNK_15071d3b8;
  uVar19 = ___xmm_000000800000007f0000002100000020;
  uVar18 = _UNK_15071d358;
  uVar17 = ___xmm_0000001f000000010000000000000280;
  uVar16 = _UNK_15071d348;
  uVar15 = ___xmm_0000001700000011000000100000000f;
  uVar14 = _UNK_15071d2f8;
  uVar13 = ___xmm_00000009000000080000000700000004;
  uVar12 = _UNK_150631e08;
  uVar11 = __xmm_00000003000000020000000100000000;
  uVar10 = _UNK_15060db28;
  uVar9 = ___xmm_ffffffffffffffffffffffffffffffff;
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_20e8;
  uVar37 = 0;
  local_17d8[0] = 0;
  local_17d8[1] = 0;
  local_17d8[2] = 0;
  local_17d8[3] = 0;
  local_17d8[4] = 0;
  local_17d8[5] = 0;
  local_17d8[6] = 0;
  local_17d8[7] = 0;
  local_17d8[8] = 0;
  local_17d8[9] = 0;
  do {
    uVar25 = 0x140 - uVar37;
    if (0x1b < uVar25) {
      uVar25 = 0x1b;
    }
    if (0 < (int)uVar25) {
      uVar40 = 1;
      uVar43 = (ulonglong)uVar25;
      do {
        bVar30 = (byte)uVar37 & 0x1f;
        uVar25 = uVar37;
        if ((int)uVar37 < 0) {
          uVar25 = uVar37 + 0x1f;
          bVar30 = bVar30 - 0x20;
        }
        uVar37 = uVar37 + 1;
        local_17d8[(int)uVar25 >> 5] =
             local_17d8[(int)uVar25 >> 5] | (uint)((uVar40 & 0x2732e0d) != 0) << (bVar30 & 0x1f);
        uVar40 = uVar40 << 1 | (uint)((int)uVar40 < 0);
        uVar43 = uVar43 - 1;
      } while (uVar43 != 0);
    }
  } while (uVar37 < 0x140);
  local_2090 = (uint *)&local_1fb8;
  uVar37 = 1;
  local_1fb8 = ___xmm_00000004000000030000000200000001;
  uStack_1fb0 = _UNK_150631e38;
  local_1f98 = ___xmm_000000400000003f0000002100000020;
  uStack_1f90 = _UNK_15071d3a8;
  local_1fa8 = ___xmm_0000001f00000011000000100000000f;
  uStack_1fa0 = _UNK_15071d368;
  local_1f78 = ___xmm_000000b0000000af000000a5000000a4;
  uStack_1f70 = _UNK_15071d3e8;
  local_1f88 = ___xmm_000000a3000000a1000000a00000009f;
  uStack_1f80 = _UNK_15071d3d8;
  local_1f68 = 0xb1;
  do {
    local_2070 = (int *)&local_2000;
    local_2000 = uVar11;
    uStack_1ff8 = uVar12;
    local_1fd0 = 0x18;
    local_1ff0 = uVar13;
    uStack_1fe8 = uVar14;
    local_1fcc = 0x19;
    local_1fe0 = uVar15;
    uStack_1fd8 = uVar16;
    local_1fc8 = 0x1f;
    do {
      iVar46 = *local_2070;
      local_1788 = 0;
      uStack_1780 = 0;
      iVar34 = iVar46 + uVar37;
      local_1778 = 0;
      uStack_1770 = 0;
      local_1768 = 0;
      uStack_1760 = 0;
      local_1758 = 0;
      uStack_1750 = 0;
      local_1748 = 0;
      uStack_1740 = 0;
      for (iVar38 = iVar46; iVar38 < iVar34; iVar38 = iVar38 + 1) {
        uVar25 = iVar38 - iVar46;
        bVar30 = (byte)iVar38 & 0x1f;
        iVar26 = iVar38;
        if (iVar38 < 0) {
          iVar26 = iVar38 + 0x1f;
          bVar30 = bVar30 - 0x20;
        }
        puVar1 = (uint *)((longlong)&local_1788 + (longlong)(iVar26 >> 5) * 4);
        uVar40 = uVar25;
        if ((int)uVar25 < 0) {
          uVar40 = uVar25 + 0x1f;
        }
        *puVar1 = *puVar1 | (uint)((local_17d8[(int)uVar40 >> 5] >> (uVar25 & 0x1f) & 1) != 0) <<
                            (bVar30 & 0x1f);
      }
      local_2078 = (int *)&local_2040;
      local_2010 = 0x18;
      local_2040 = uVar11;
      uStack_2038 = uVar12;
      local_200c = 0x19;
      local_2030 = uVar13;
      uStack_2028 = uVar14;
      local_2008 = 0x1f;
      local_2020 = uVar15;
      uStack_2018 = uVar16;
      do {
        iVar38 = *local_2078;
        piVar32 = (int *)&local_1f58;
        iVar26 = uVar37 + 0x40 + iVar38;
        local_1f58 = uVar17;
        uStack_1f50 = uVar18;
        local_1f48 = uVar19;
        uStack_1f40 = uVar20;
        local_1f38 = uVar23;
        uStack_1f30 = uVar24;
        local_1f28 = uVar21;
        uStack_1f20 = uVar22;
        local_2058 = (longlong)((int)(iVar26 + 0x1f + (iVar26 + 0x1f >> 0x1f & 0x1fU)) >> 5) << 2;
        do {
          sVar29 = local_2058;
          iVar36 = *piVar32;
          local_1698 = uVar9;
          uStack_1690 = uVar10;
          local_1688 = uVar9;
          uStack_1680 = uVar10;
          local_1678 = uVar9;
          uStack_1670 = uVar10;
          local_1668 = uVar9;
          uStack_1660 = uVar10;
          local_1658 = uVar9;
          uStack_1650 = uVar10;
          local_1648 = uVar9;
          uStack_1640 = uVar10;
          local_1638 = uVar9;
          uStack_1630 = uVar10;
          local_1628 = uVar9;
          uStack_1620 = uVar10;
          local_1618 = uVar9;
          uStack_1610 = uVar10;
          local_1608 = uVar9;
          uStack_1600 = uVar10;
          local_15f8 = uVar9;
          uStack_15f0 = uVar10;
          local_15e8 = uVar9;
          uStack_15e0 = uVar10;
          local_15d8 = uVar9;
          uStack_15d0 = uVar10;
          local_15c8 = uVar9;
          uStack_15c0 = uVar10;
          local_15b8 = uVar9;
          uStack_15b0 = uVar10;
          local_15a8 = 0;
          uStack_15a0 = 0;
          local_1598 = 0;
          uStack_1590 = 0;
          local_1588 = 0;
          uStack_1580 = 0;
          local_1578 = 0;
          uStack_1570 = 0;
          local_1568 = 0;
          uStack_1560 = 0;
          local_1558[0] = 0;
          local_1558[1] = 0;
          local_1558[2] = 0;
          local_1558[3] = 0;
          local_1558[4] = 0;
          local_1558[5] = 0;
          local_1558[6] = 0;
          local_1558[7] = 0;
          local_1558[8] = 0;
          local_1558[9] = 0;
          local_1558[10] = 0;
          local_1558[0xb] = 0;
          local_1558[0xc] = 0;
          local_1558[0xd] = 0;
          local_1558[0xe] = 0;
          local_1558[0xf] = 0;
          local_1558[0x10] = 0;
          local_1558[0x11] = 0;
          local_1558[0x12] = 0;
          local_1558[0x13] = 0;
          local_1558[0x14] = 0;
          local_1558[0x15] = 0;
          local_1558[0x16] = 0;
          local_1558[0x17] = 0;
          local_1558[0x18] = 0;
          local_1558[0x19] = 0;
          local_1558[0x1a] = 0;
          local_1558[0x1b] = 0;
          local_1558[0x1c] = 0;
          local_1558[0x1d] = 0;
          local_1558[0x1e] = 0;
          local_1558[0x1f] = 0;
          local_1558[0x20] = 0;
          local_1558[0x21] = 0;
          local_1558[0x22] = 0;
          local_1558[0x23] = 0;
          local_1558[0x24] = 0;
          local_1558[0x25] = 0;
          local_1558[0x26] = 0;
          local_1558[0x27] = 0;
          iVar31 = iVar36;
          if (iVar36 < 0) {
            iVar31 = iVar36 + -0x21;
          }
          uVar25 = 0;
          iVar31 = (int)((iVar31 >> 0x1f & 0x1fU) + iVar31) >> 5;
          iVar36 = iVar36 + iVar31 * -0x20;
          puVar1 = (uint *)((longlong)&local_1648 + (longlong)iVar31 * 4);
          puVar2 = local_1558 + iVar31;
          if (0 < iVar34) {
            uVar40 = 1;
            do {
              iVar31 = uVar25 + iVar36;
              bVar30 = (byte)iVar31 & 0x1f;
              if (iVar31 < 0) {
                iVar31 = iVar31 + 0x1f;
                bVar30 = bVar30 - 0x20;
              }
              iVar31 = iVar31 >> 5;
              uVar39 = (uint)((*(uint *)((longlong)&local_1788 + (ulonglong)(uVar25 >> 5) * 4) &
                              uVar40) != 0) << (bVar30 & 0x1f);
              uVar33 = ~(1 << (bVar30 & 0x1f));
              uVar25 = uVar25 + 1;
              uVar40 = uVar40 << 1 | (uint)((int)uVar40 < 0);
              puVar1[iVar31] = puVar1[iVar31] & uVar33 | uVar39;
              puVar2[iVar31] = uVar33 & puVar2[iVar31] | uVar39;
            } while ((int)uVar25 < iVar34);
          }
          memcpy(local_1738,(void *)((longlong)&uStack_1650 + 4),local_2058);
          memcpy(local_16e8,(void *)((longlong)&uStack_1560 + 4),sVar29);
          uVar43 = 0;
          if (0 < (int)uVar37) {
            uVar25 = 1;
            do {
              iVar31 = iVar38 + 0x20 + (int)uVar43;
              bVar30 = (byte)iVar31 & 0x1f;
              if (iVar31 < 0) {
                iVar31 = iVar31 + 0x1f;
                bVar30 = bVar30 - 0x20;
              }
              iVar31 = iVar31 >> 5;
              uVar33 = (uint)((local_17d8[uVar43 >> 5] & uVar25) != 0) << (bVar30 & 0x1f);
              uVar40 = ~(1 << (bVar30 & 0x1f));
              uVar39 = (int)uVar43 + 1;
              uVar43 = (ulonglong)uVar39;
              uVar25 = uVar25 << 1 | (uint)((int)uVar25 < 0);
              local_1738[iVar31] = uVar40 & local_1738[iVar31] | uVar33;
              local_16e8[iVar31] = uVar40 & local_16e8[iVar31] | uVar33;
            } while ((int)uVar39 < (int)uVar37);
          }
          iVar36 = iVar36 + iVar46;
          FBitArrayMemory::MemmoveBitsWordOrder((uint *)&local_1648,iVar38,puVar1,iVar36,uVar37);
          FBitArrayMemory::MemmoveBitsWordOrder(local_1558,iVar38,puVar2,iVar36,uVar37);
          bVar42 = true;
          bVar44 = true;
          lVar35 = 0;
          uVar43 = 0;
          if (0 < iVar26) {
            uVar25 = 1;
            bVar7 = bVar42;
            bVar8 = bVar44;
            do {
              uVar27 = uVar43 >> 5;
              uVar39 = uVar25 & *(uint *)((longlong)&uStack_1650 + uVar27 * 4 + 4);
              uVar40 = local_16e8[uVar27];
              uVar33 = uVar25 & *(uint *)((longlong)&uStack_1560 + uVar27 * 4 + 4);
              bVar42 = false;
              if ((uVar39 != 0) == ((uVar25 & local_1738[uVar27]) != 0)) {
                bVar42 = bVar7;
              }
              bVar44 = false;
              if ((uVar33 != 0) == ((uVar25 & uVar40) != 0)) {
                bVar44 = bVar8;
              }
              local_fb8[lVar35] = ((uVar25 & local_1738[uVar27]) != 0) + 0x30;
              local_14b8[lVar35] = (uVar39 != 0) + 0x30;
              local_5b8[lVar35] = ((uVar25 & uVar40) != 0) + 0x30;
              uVar40 = (int)uVar43 + 1;
              uVar43 = (ulonglong)uVar40;
              uVar25 = uVar25 << 1 | (uint)((int)uVar25 < 0);
              local_ab8[lVar35] = (uVar33 != 0) + 0x30;
              lVar35 = lVar35 + 1;
              bVar7 = bVar42;
              bVar8 = bVar44;
            } while ((int)uVar40 < iVar26);
          }
          if (0x4ff < (ulonglong)(lVar35 * 2)) {
                    /* WARNING: Subroutine does not return */
            __report_rangecheckfailure();
          }
          local_fb8[lVar35] = 0;
          local_14b8[lVar35] = 0;
          local_5b8[lVar35] = 0;
          local_ab8[lVar35] = 0;
          if (bVar42) {
            if (!bVar44) {
              pFVar28 = FAutomationTestFramework::Get();
              pFVar3 = pFVar28->CurrentTest;
              pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
              ::FString::PrintfImpl
                        (&local_2068,
                         L"MemmoveBitsWordOrder BitWidth=%d ReadOffset=%d, WriteOffset=%d, Overlap=%d, Zeroes\nExpected=%s\nActual  =%s"
                        );
              (*pcVar4)(pFVar3,&local_2068,0);
              if (local_2068.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_2068.Data.AllocatorInstance.Data);
              }
            }
          }
          else {
            pFVar28 = FAutomationTestFramework::Get();
            pFVar3 = pFVar28->CurrentTest;
            pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
            ::FString::PrintfImpl
                      (&local_2050,
                       L"MemmoveBitsWordOrder BitWidth=%d ReadOffset=%d, WriteOffset=%d, Overlap=%d, Ones\nExpected=%s\nActual  =%s"
                      );
            (*pcVar4)(pFVar3,&local_2050,0);
            if (local_2050.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_2050.Data.AllocatorInstance.Data);
            }
          }
          piVar32 = piVar32 + 1;
        } while (piVar32 != &local_1f18);
        local_2078 = local_2078 + 1;
      } while (local_2078 != &local_2004);
      local_2070 = local_2070 + 1;
    } while (local_2070 != local_1fc4);
    local_2090 = local_2090 + 1;
    if (local_2090 == local_1f64) {
      ppiVar45 = (int **)&local_2080;
      local_2080 = 0xfffffffb;
      local_207c = 0x25;
      while( true ) {
        uVar37 = *(uint *)ppiVar45;
        uVar25 = ~uVar37;
        local_17d8[0] = 0;
        local_17d8[1] = 0;
        local_17d8[2] = 0;
        local_17d8[3] = 0;
        iVar34 = uVar37 + 1;
        local_17d8[4] = 0;
        local_17d8[5] = 0;
        local_17d8[6] = 0;
        local_17d8[7] = 0;
        iVar46 = uVar25 + iVar34;
        local_17d8[8] = 0;
        local_17d8[9] = 0;
        local_17d8[10] = 0;
        local_17d8[0xb] = 0;
        local_17d8[0xc] = 0;
        local_17d8[0xd] = 0;
        local_17d8[0xe] = 0;
        local_17d8[0xf] = 0;
        local_17d8[0x10] = 0;
        local_17d8[0x11] = 0;
        local_17d8[0x12] = 0;
        local_17d8[0x13] = 0;
        local_1788 = 0;
        uStack_1780 = 0;
        local_1778 = 0;
        uStack_1770 = 0;
        local_1768 = 0;
        uStack_1760 = 0;
        local_1758 = 0;
        uStack_1750 = 0;
        local_1748 = 0;
        uStack_1740 = 0;
        iVar38 = iVar34;
        iVar26 = iVar46;
        do {
          iVar31 = iVar38 + -1;
          if (iVar31 < 0) {
            iVar31 = iVar38 + -0x22;
          }
          cVar5 = (char)uVar37;
          local_17d8[(longlong)((int)((iVar31 >> 0x1f & 0x1fU) + iVar31) >> 5) + 5] =
               local_17d8[(longlong)((int)((iVar31 >> 0x1f & 0x1fU) + iVar31) >> 5) + 5] |
               1 << ((char)iVar26 + cVar5 & 0x1fU);
          iVar31 = iVar38;
          if (iVar38 < 0) {
            iVar31 = iVar38 + -0x21;
          }
          cVar6 = (char)uVar25 + (char)iVar38;
          local_17d8[(longlong)((int)((iVar31 >> 0x1f & 0x1fU) + iVar31) >> 5) + 5] =
               local_17d8[(longlong)((int)((iVar31 >> 0x1f & 0x1fU) + iVar31) >> 5) + 5] |
               1 << (cVar6 + '\x01' + cVar5 & 0x1fU);
          iVar31 = iVar38 + 1;
          if (iVar31 < 0) {
            iVar31 = iVar38 + -0x20;
          }
          local_17d8[(longlong)((int)((iVar31 >> 0x1f & 0x1fU) + iVar31) >> 5) + 5] =
               local_17d8[(longlong)((int)((iVar31 >> 0x1f & 0x1fU) + iVar31) >> 5) + 5] |
               1 << (cVar6 + '\x02' + cVar5 & 0x1fU);
          iVar31 = iVar38 + 2;
          if (iVar31 < 0) {
            iVar31 = iVar38 + -0x1f;
          }
          local_17d8[(longlong)((int)((iVar31 >> 0x1f & 0x1fU) + iVar31) >> 5) + 5] =
               local_17d8[(longlong)((int)((iVar31 >> 0x1f & 0x1fU) + iVar31) >> 5) + 5] |
               1 << (cVar6 + '\x03' + cVar5 & 0x1fU);
          iVar31 = iVar38 + 3;
          if (iVar31 < 0) {
            iVar31 = iVar38 + -0x1e;
          }
          local_17d8[(longlong)((int)((iVar31 >> 0x1f & 0x1fU) + iVar31) >> 5) + 5] =
               local_17d8[(longlong)((int)((iVar31 >> 0x1f & 0x1fU) + iVar31) >> 5) + 5] |
               1 << (cVar6 + '\x04' + cVar5 & 0x1fU);
          iVar31 = iVar38 + 4;
          if (iVar31 < 0) {
            iVar31 = iVar38 + -0x1d;
          }
          local_17d8[(longlong)((int)((iVar31 >> 0x1f & 0x1fU) + iVar31) >> 5) + 5] =
               local_17d8[(longlong)((int)((iVar31 >> 0x1f & 0x1fU) + iVar31) >> 5) + 5] |
               1 << (cVar6 + '\x05' + cVar5 & 0x1fU);
          iVar31 = iVar38 + 5;
          if (iVar31 < 0) {
            iVar31 = iVar38 + -0x1c;
          }
          local_17d8[(longlong)((int)((iVar31 >> 0x1f & 0x1fU) + iVar31) >> 5) + 5] =
               local_17d8[(longlong)((int)((iVar31 >> 0x1f & 0x1fU) + iVar31) >> 5) + 5] |
               1 << (cVar6 + '\x06' + cVar5 & 0x1fU);
          iVar31 = iVar38 + 6;
          if (iVar31 < 0) {
            iVar31 = iVar38 + -0x1b;
          }
          local_17d8[(longlong)((int)((iVar31 >> 0x1f & 0x1fU) + iVar31) >> 5) + 5] =
               local_17d8[(longlong)((int)((iVar31 >> 0x1f & 0x1fU) + iVar31) >> 5) + 5] |
               1 << (cVar6 + '\a' + cVar5 & 0x1fU);
          iVar31 = iVar38 + 7;
          if (iVar31 < 0) {
            iVar31 = iVar38 + -0x1a;
          }
          local_17d8[(longlong)((int)((iVar31 >> 0x1f & 0x1fU) + iVar31) >> 5) + 5] =
               local_17d8[(longlong)((int)((iVar31 >> 0x1f & 0x1fU) + iVar31) >> 5) + 5] |
               1 << (cVar6 + '\b' + cVar5 & 0x1fU);
          iVar31 = iVar38 + 8;
          if (iVar31 < 0) {
            iVar31 = iVar38 + -0x19;
          }
          local_17d8[(longlong)((int)((iVar31 >> 0x1f & 0x1fU) + iVar31) >> 5) + 5] =
               local_17d8[(longlong)((int)((iVar31 >> 0x1f & 0x1fU) + iVar31) >> 5) + 5] |
               1 << (cVar6 + '\t' + cVar5 & 0x1fU);
          iVar31 = iVar38 + 9;
          if (iVar31 < 0) {
            iVar31 = iVar38 + -0x18;
          }
          local_17d8[(longlong)((int)((iVar31 >> 0x1f & 0x1fU) + iVar31) >> 5) + 5] =
               local_17d8[(longlong)((int)((iVar31 >> 0x1f & 0x1fU) + iVar31) >> 5) + 5] |
               1 << (cVar6 + '\n' + cVar5 & 0x1fU);
          iVar31 = iVar38 + 10;
          if (iVar31 < 0) {
            iVar31 = iVar38 + -0x17;
          }
          local_17d8[(longlong)((int)((iVar31 >> 0x1f & 0x1fU) + iVar31) >> 5) + 5] =
               local_17d8[(longlong)((int)((iVar31 >> 0x1f & 0x1fU) + iVar31) >> 5) + 5] |
               1 << (cVar6 + '\v' + cVar5 & 0x1fU);
          iVar31 = iVar38 + 0xb;
          if (iVar31 < 0) {
            iVar31 = iVar38 + -0x16;
          }
          local_17d8[(longlong)((int)((iVar31 >> 0x1f & 0x1fU) + iVar31) >> 5) + 5] =
               local_17d8[(longlong)((int)((iVar31 >> 0x1f & 0x1fU) + iVar31) >> 5) + 5] |
               1 << (cVar6 + '\f' + cVar5 & 0x1fU);
          iVar31 = iVar38 + 0xc;
          if (iVar31 < 0) {
            iVar31 = iVar38 + -0x15;
          }
          local_17d8[(longlong)((int)((iVar31 >> 0x1f & 0x1fU) + iVar31) >> 5) + 5] =
               local_17d8[(longlong)((int)((iVar31 >> 0x1f & 0x1fU) + iVar31) >> 5) + 5] |
               1 << (cVar6 + '\r' + cVar5 & 0x1fU);
          iVar31 = iVar38 + 0xd;
          if (iVar31 < 0) {
            iVar31 = iVar38 + -0x14;
          }
          local_17d8[(longlong)((int)((iVar31 >> 0x1f & 0x1fU) + iVar31) >> 5) + 5] =
               local_17d8[(longlong)((int)((iVar31 >> 0x1f & 0x1fU) + iVar31) >> 5) + 5] |
               1 << (cVar6 + '\x0e' + cVar5 & 0x1fU);
          iVar31 = iVar38 + 0xe;
          if (iVar31 < 0) {
            iVar31 = iVar38 + -0x13;
          }
          iVar38 = iVar38 + 0x10;
          iVar26 = iVar26 + 0x10;
          local_17d8[(longlong)((int)((iVar31 >> 0x1f & 0x1fU) + iVar31) >> 5) + 5] =
               local_17d8[(longlong)((int)((iVar31 >> 0x1f & 0x1fU) + iVar31) >> 5) + 5] |
               1 << (cVar6 + '\x0f' + cVar5 & 0x1fU);
        } while ((int)(uVar25 + iVar38) < 0x20);
        FBitArrayMemory::MemmoveBitsWordOrder
                  ((uint *)((longlong)&local_1778 + 4),uVar37,local_17d8 + 5,uVar37,0x20);
        bVar42 = true;
        uVar43 = 0;
        do {
          uVar27 = uVar43;
          iVar38 = iVar34 + -1;
          if (iVar38 < 0) {
            iVar38 = iVar34 + -0x22;
          }
          local_1c98[uVar27] = '1';
          uVar37 = 1 << ((char)iVar46 + cVar5 & 0x1fU) &
                   *(uint *)((longlong)&local_1778 +
                            (longlong)((int)((iVar38 >> 0x1f & 0x1fU) + iVar38) >> 5) * 4 + 4);
          *(char *)((longlong)&local_1f18 + uVar27) = (uVar37 != 0) + '0';
          bVar44 = false;
          if (uVar37 != 0) {
            bVar44 = bVar42;
          }
          iVar38 = iVar34;
          if (iVar34 < 0) {
            iVar38 = iVar34 + -0x21;
          }
          local_1c98[uVar27 + 1] = '1';
          cVar6 = (char)uVar25 + (char)iVar34;
          uVar37 = 1 << (cVar6 + '\x01' + cVar5 & 0x1fU) &
                   *(uint *)((longlong)&local_1778 +
                            (longlong)((int)((iVar38 >> 0x1f & 0x1fU) + iVar38) >> 5) * 4 + 4);
          *(char *)((longlong)&local_1f18 + uVar27 + 1) = (uVar37 != 0) + '0';
          iVar38 = iVar34 + 1;
          if (iVar38 < 0) {
            iVar38 = iVar34 + -0x20;
          }
          local_1c98[uVar27 + 2] = '1';
          uVar40 = 1 << (cVar6 + '\x02' + cVar5 & 0x1fU) &
                   *(uint *)((longlong)&local_1778 +
                            (longlong)((int)((iVar38 >> 0x1f & 0x1fU) + iVar38) >> 5) * 4 + 4);
          *(char *)((longlong)&local_1f18 + uVar27 + 2) = (uVar40 != 0) + '0';
          bVar42 = false;
          if (uVar40 != 0) {
            bVar42 = (bool)(uVar37 != 0 & bVar44);
          }
          iVar38 = iVar34 + 2;
          if (iVar38 < 0) {
            iVar38 = iVar34 + -0x1f;
          }
          local_1c98[uVar27 + 3] = '1';
          uVar37 = 1 << (cVar6 + '\x03' + cVar5 & 0x1fU) &
                   *(uint *)((longlong)&local_1778 +
                            (longlong)((int)((iVar38 >> 0x1f & 0x1fU) + iVar38) >> 5) * 4 + 4);
          *(char *)((longlong)&local_1f18 + uVar27 + 3) = (uVar37 != 0) + '0';
          iVar38 = iVar34 + 3;
          if (iVar38 < 0) {
            iVar38 = iVar34 + -0x1e;
          }
          local_1c98[uVar27 + 4] = '1';
          uVar40 = 1 << (cVar6 + '\x04' + cVar5 & 0x1fU) &
                   *(uint *)((longlong)&local_1778 +
                            (longlong)((int)((iVar38 >> 0x1f & 0x1fU) + iVar38) >> 5) * 4 + 4);
          acStack_1f14[uVar27] = (uVar40 != 0) + '0';
          bVar30 = 0;
          if (uVar40 != 0) {
            bVar30 = uVar37 != 0 & bVar42;
          }
          iVar38 = iVar34 + 4;
          if (iVar38 < 0) {
            iVar38 = iVar34 + -0x1d;
          }
          local_1c98[uVar27 + 5] = '1';
          uVar37 = 1 << (cVar6 + '\x05' + cVar5 & 0x1fU) &
                   *(uint *)((longlong)&local_1778 +
                            (longlong)((int)((iVar38 >> 0x1f & 0x1fU) + iVar38) >> 5) * 4 + 4);
          acStack_1f14[uVar27 + 1] = (uVar37 != 0) + '0';
          iVar38 = iVar34 + 5;
          if (iVar38 < 0) {
            iVar38 = iVar34 + -0x1c;
          }
          local_1c98[uVar27 + 6] = '1';
          uVar40 = 1 << (cVar6 + '\x06' + cVar5 & 0x1fU) &
                   *(uint *)((longlong)&local_1778 +
                            (longlong)((int)((iVar38 >> 0x1f & 0x1fU) + iVar38) >> 5) * 4 + 4);
          acStack_1f14[uVar27 + 2] = (uVar40 != 0) + '0';
          bVar41 = 0;
          if (uVar40 != 0) {
            bVar41 = uVar37 != 0 & bVar30;
          }
          iVar38 = iVar34 + 6;
          if (iVar38 < 0) {
            iVar38 = iVar34 + -0x1b;
          }
          local_1c98[uVar27 + 7] = '1';
          uVar37 = 1 << (cVar6 + '\a' + cVar5 & 0x1fU) &
                   *(uint *)((longlong)&local_1778 +
                            (longlong)((int)((iVar38 >> 0x1f & 0x1fU) + iVar38) >> 5) * 4 + 4);
          acStack_1f14[uVar27 + 3] = (uVar37 != 0) + '0';
          iVar34 = iVar34 + 8;
          bVar42 = (bool)(bVar41 & uVar37 != 0);
          uVar43 = uVar27 + 8;
          iVar46 = iVar46 + 8;
        } while ((longlong)uVar43 < 0x20);
        if (0x27f < uVar43) break;
        local_1c98[uVar27 + 8] = '\0';
        acStack_1f14[uVar27 + 4] = '\0';
        if (!bVar42) {
          pFVar28 = FAutomationTestFramework::Get();
          pFVar3 = pFVar28->CurrentTest;
          local_18f8._padding_ = 0;
          pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
          sVar29 = strlen((char *)&local_1f18);
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_18f8,(char *)&local_1f18,(int)sVar29,Yes);
          local_1a18._padding_ = 0;
          sVar29 = strlen(local_1c98);
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_1a18,local_1c98,(int)sVar29,Yes);
          ::FString::PrintfImpl
                    (&local_2068,
                     L"MemmoveBitsWordOrder ModularizeWordOffset Offset=%d\nExpected=%s\nActual  =%s"
                    );
          (*pcVar4)(pFVar3,&local_2068,0);
          if (local_2068.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2068.Data.AllocatorInstance.Data);
          }
          if ((void *)local_1a18._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_1a18._padding_);
          }
          if ((void *)local_18f8._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_18f8._padding_);
          }
        }
        ppiVar45 = (int **)((longlong)ppiVar45 + 4);
        if (ppiVar45 == &local_2078) {
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      __report_rangecheckfailure();
    }
    uVar37 = *local_2090;
  } while( true );
}

