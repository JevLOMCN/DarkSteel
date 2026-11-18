// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// FSizeTableEntry @ 14167a920

FSizeTableEntry * __thiscall
FSizeTableEntry::FSizeTableEntry
          (FSizeTableEntry *this,uint param_1,ulong64 param_2,uchar param_3,uint param_4)

{
  code *pcVar1;
  bool bVar2;
  FSizeTableEntry *pFVar3;
  ulonglong uVar4;
  uint uVar5;
  
  this->BinSize = param_1;
  if (((param_2 & param_4 - 1) != 0) || (param_2 < param_4)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(PlatformPageSize & (BasePageSize - 1)) == 0 && PlatformPageSize >= BasePageSize"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinnedCommon.cpp"
                       ,0x6b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FSizeTableEntry *)(*pcVar1)();
      return pFVar3;
    }
  }
  if ((param_1 & 7) != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InBinSize % 8 == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinnedCommon.cpp"
                       ,0x6c,L"Small bin size must be a multiple of UE_MBC_MIN_BIN_SIZE");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FSizeTableEntry *)(*pcVar1)();
      return pFVar3;
    }
  }
  uVar5 = 0;
  this->NumMemoryPagesPerBlock = 0;
  do {
    if (0xfe < uVar5) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumMemoryPagesPerBlock < ((uint8) 0xff)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinnedCommon.cpp"
                         ,0x73,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FSizeTableEntry *)(*pcVar1)();
        return pFVar3;
      }
    }
    uVar5 = this->NumMemoryPagesPerBlock + 1;
    uVar4 = (ulonglong)uVar5 * (param_2 / param_4);
    this->NumMemoryPagesPerBlock = uVar5;
  } while ((uVar4 < param_3) || (uVar4 % (ulonglong)param_3 != 0));
  if (0xffffffff < (uVar5 * param_2) / (ulonglong)this->BinSize) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(PlatformPageSize * NumMemoryPagesPerBlock) / BinSize <= ((uint32) 0xffffffff)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinnedCommon.cpp"
                       ,0x7f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FSizeTableEntry *)(*pcVar1)();
      return pFVar3;
    }
  }
  return this;
}

// FillSizeTable @ 1416929f0

uchar __cdecl
FSizeTableEntry::FillSizeTable
          (ulong64 param_1,FSizeTableEntry *param_2,uint param_3,uint param_4,uint param_5)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  uchar uVar5;
  FSizeTableEntry *pFVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  uint *puVar10;
  longlong lVar11;
  int iVar12;
  int local_res18 [2];
  uint local_res20;
  FSizeTableEntry local_78;
  FSizeTableEntry local_70;
  FSizeTableEntry local_68;
  FSizeTableEntry local_60;
  FSizeTableEntry local_58 [3];
  
  local_res20 = param_4;
  if ((0x4000 < param_3) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("BasePageSize <= 16 * 1024",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinnedCommon.cpp"
                         ,0x90,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return uVar5;
  }
  iVar12 = 0;
  puVar10 = BinnedCommonSmallBinSizes4k;
  lVar11 = 0x1c;
  do {
    if (*puVar10 < 0x7001) {
      pFVar6 = FSizeTableEntry(&local_60,*puVar10,param_1,'\x01',param_3);
      lVar7 = (longlong)iVar12;
      iVar12 = iVar12 + 1;
      param_2[lVar7] = *pFVar6;
    }
    puVar10 = puVar10 + 1;
    lVar11 = lVar11 + -1;
  } while (lVar11 != 0);
  pFVar6 = FSizeTableEntry(&local_68,0x2e0,param_1,'\x02',param_3);
  param_2[iVar12] = *pFVar6;
  pFVar6 = FSizeTableEntry(&local_68,0x490,param_1,'\x02',param_3);
  param_2[iVar12 + 1] = *pFVar6;
  pFVar6 = FSizeTableEntry(&local_68,0x660,param_1,'\x02',param_3);
  param_2[iVar12 + 2] = *pFVar6;
  pFVar6 = FSizeTableEntry(&local_68,0xaa0,param_1,'\x02',param_3);
  param_2[iVar12 + 3] = *pFVar6;
  pFVar6 = FSizeTableEntry(&local_68,0x2000,param_1,'\x02',param_3);
  param_2[(longlong)iVar12 + 4] = *pFVar6;
  pFVar6 = FSizeTableEntry(&local_78,0x600,param_1,'\x03',param_3);
  param_2[(longlong)(iVar12 + 1) + 4] = *pFVar6;
  pFVar6 = FSizeTableEntry(&local_78,0x6d0,param_1,'\x03',param_3);
  param_2[(longlong)(iVar12 + 2) + 4] = *pFVar6;
  pFVar6 = FSizeTableEntry(&local_78,0x990,param_1,'\x03',param_3);
  param_2[(longlong)(iVar12 + 3) + 4] = *pFVar6;
  pFVar6 = FSizeTableEntry(&local_78,0xc00,param_1,'\x03',param_3);
  param_2[(longlong)(iVar12 + 4) + 4] = *pFVar6;
  pFVar6 = FSizeTableEntry(&local_78,0x1800,param_1,'\x03',param_3);
  param_2[(longlong)(iVar12 + 5) + 4] = *pFVar6;
  pFVar6 = FSizeTableEntry(&local_78,0x3000,param_1,'\x03',param_3);
  param_2[(longlong)(iVar12 + 6) + 4] = *pFVar6;
  local_res18[0] = iVar12 + 0xb;
  FillTable(param_2,local_res18,BinnedCommonSmallBinSizes16k,3,4,param_1,param_3);
  FillTable(param_2,local_res18,BinnedCommonSmallBinSizes20k,3,5,param_1,param_3);
  FillTable(param_2,local_res18,BinnedCommonSmallBinSizes24k,1,6,param_1,param_3);
  pFVar6 = FSizeTableEntry(&local_70,0x12a0,param_1,'\a',param_3);
  iVar2 = local_res18[0];
  param_2[local_res18[0]] = *pFVar6;
  iVar8 = local_res18[0] + 1;
  pFVar6 = FSizeTableEntry(&local_70,0x1660,param_1,'\a',param_3);
  param_2[iVar8] = *pFVar6;
  pFVar6 = FSizeTableEntry(&local_70,0x1c00,param_1,'\a',param_3);
  param_2[(longlong)iVar8 + 1] = *pFVar6;
  pFVar6 = FSizeTableEntry(&local_70,0x2550,param_1,'\a',param_3);
  param_2[(longlong)iVar8 + 2] = *pFVar6;
  pFVar6 = FSizeTableEntry(&local_70,0x3800,param_1,'\a',param_3);
  param_2[(longlong)iVar8 + 3] = *pFVar6;
  pFVar6 = FSizeTableEntry(&local_70,0x7000,param_1,'\a',param_3);
  iVar12 = iVar2 + 6;
  param_2[(longlong)iVar8 + 4] = *pFVar6;
  local_res18[0] = iVar12;
  if ((iVar12 != 0x34) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == 52",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinnedCommon.cpp"
                         ,0x9b,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return uVar5;
  }
  if ((iVar12 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return uVar5;
  }
  AlgoImpl::IntroSortInternal<FSizeTableEntry,int,FIdentityFunctor,TLess<void>_>
            (param_2,iVar12,local_res20._0_1_,(TLess<void>)local_res20._0_1_);
  if ((param_2[iVar2 + 5].BinSize != 0x7000) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("SizeTable[Index - 1].BinSize == 28672",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinnedCommon.cpp"
                         ,0x9e,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return uVar5;
  }
  uVar3 = local_res20;
  if (((local_res20 != 0x7000) && ((param_3 - 1 & 0x7000) != 0)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(28672 == MaxSize) || IsAligned(28672, BasePageSize)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinnedCommon.cpp"
                         ,0x9f,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return uVar5;
  }
  uVar9 = param_3 + 0x7000;
  iVar2 = local_res18[0];
  while (uVar9 <= uVar3) {
    pFVar6 = FSizeTableEntry(local_58,uVar9,param_1,(uchar)(uVar9 / param_3),param_3);
    lVar11 = (longlong)iVar12;
    uVar9 = uVar9 + param_5;
    iVar12 = iVar12 + 1;
    param_2[lVar11] = *pFVar6;
    iVar2 = iVar12;
  }
  if ((0xff < iVar12) &&
     (local_res18[0] = iVar2,
     bVar4 = ::FDebug::CheckVerifyFailedImpl2
                       ("Index < 256",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinnedCommon.cpp"
                        ,0xa4,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return uVar5;
  }
  return (uchar)iVar12;
}

