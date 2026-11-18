// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 16

// CompressMemory @ 14181eb70

/* WARNING: Enum "ECompressionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
FCompression::CompressMemory
          (FName param_1,void *param_2,int *param_3,void *param_4,int param_5,
          ECompressionFlags param_6,int param_7)

{
  bool bVar1;
  longlong local_res18 [2];
  
  local_res18[0] = (longlong)*param_3;
  bVar1 = CompressMemory(param_1,param_2,local_res18,param_4,(longlong)param_5,param_6,
                         (longlong)param_7);
  if (local_res18[0] != (int)local_res18[0]) {
    if (1 < (byte)LogCompression._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCompression);
    }
    return false;
  }
  *param_3 = (int)local_res18[0];
  return bVar1;
}

// CompressMemory @ 14181ec00

/* WARNING: Enum "ECompressionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
FCompression::CompressMemory
          (FName param_1,void *param_2,long64 *param_3,void *param_4,long64 param_5,
          ECompressionFlags param_6,ulong64 param_7)

{
  char cVar1;
  FNameEntryId FVar2;
  int iVar3;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  ICompressionFormat *pIVar4;
  FName FVar5;
  FName FVar6;
  FName FVar7;
  bool bVar8;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_38 [2];
  
  bVar8 = -1 < CpuChannel->Enabled;
  if (bVar8) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId830,"FCompression::CompressMemory",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\Compression.cpp"
               ,0x33e);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId830);
  }
  QueryPerformanceCounter(local_38);
  cVar1 = '\0';
  FVar2 = FNameEntryId::FromValidEName((EName)&local_res8);
  FVar5.Number = 0;
  FVar5.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar2.Value);
  if (param_1 == FVar5) {
    if ((param_6 & COMPRESS_BiasMemory) == COMPRESS_NoFlags) {
      iVar3 = -1;
      if ((param_6 & COMPRESS_BiasSpeed) != COMPRESS_NoFlags) {
        iVar3 = 1;
      }
    }
    else {
      iVar3 = 9;
    }
    cVar1 = appCompressMemoryZLIB(param_2,param_3,param_4,param_5,(int)param_7,iVar3);
  }
  else {
    FVar2 = FNameEntryId::FromValidEName((EName)&local_res8);
    FVar6.Number = 0;
    FVar6.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var_00,FVar2.Value);
    if (param_1 == FVar6) {
      if ((param_6 & COMPRESS_BiasMemory) == COMPRESS_NoFlags) {
        iVar3 = -1;
        if ((param_6 & COMPRESS_BiasSpeed) != COMPRESS_NoFlags) {
          iVar3 = 1;
        }
      }
      else {
        iVar3 = 9;
      }
      cVar1 = appCompressMemoryGZIP(param_2,param_3,param_4,param_5,iVar3);
    }
    else {
      FVar2 = FNameEntryId::FromValidEName((EName)&local_res8);
      FVar7.Number = 0;
      FVar7.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var_01,FVar2.Value);
      if (param_1 == FVar7) {
        if (0x7e000000 < param_5) {
          if (1 < (byte)LogCompression._0_1_) {
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCompression);
          }
          goto LAB_14181ee43;
        }
        if ((param_6 & COMPRESS_BiasMemory) == COMPRESS_NoFlags) {
          iVar3 = 9;
          if ((param_6 & COMPRESS_BiasSpeed) != COMPRESS_NoFlags) {
            iVar3 = 3;
          }
        }
        else {
          iVar3 = 0xc;
        }
        iVar3 = LZ4_compress_HC(param_4,param_2,(int)param_5,(int)*param_3,iVar3);
        *param_3 = (longlong)iVar3;
        cVar1 = 0 < iVar3;
      }
      else {
        pIVar4 = GetCompressionFormat(param_1,true);
        if (pIVar4 != (ICompressionFormat *)0x0) {
          cVar1 = (**(code **)((longlong)*pIVar4 + 0x48))
                            (pIVar4,param_2,param_3,param_4,param_5,param_7,param_6);
        }
      }
    }
  }
  QueryPerformanceCounter(&local_res8);
  LOCK();
  CompressorTimeCycles =
       (TAtomic<unsigned___int64>)
       ((longlong)CompressorTimeCycles + (local_res8.QuadPart - (longlong)local_38[0]));
  UNLOCK();
  if (cVar1 != '\0') {
    LOCK();
    CompressorSrcBytes = (TAtomic<unsigned___int64>)((longlong)CompressorSrcBytes + param_5);
    UNLOCK();
    LOCK();
    CompressorDstBytes = (TAtomic<unsigned___int64>)((longlong)CompressorDstBytes + *param_3);
    UNLOCK();
  }
LAB_14181ee43:
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return (bool)cVar1;
}

// CompressMemoryBound @ 14181ee70

/* WARNING: Enum "ECompressionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

int __cdecl
FCompression::CompressMemoryBound(FName param_1,int param_2,ECompressionFlags param_3,int param_4)

{
  bool bVar1;
  FName local_res8 [4];
  long64 local_28;
  FString local_20;
  
  local_28 = 0;
  local_res8[0] = param_1;
  bVar1 = CompressMemoryBound(param_1,&local_28,(longlong)param_2,(longlong)param_4);
  if ((!bVar1) || (local_28 != (int)local_28)) {
    ::FName::ToString(local_res8,&local_20);
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogCompression);
    if (local_20.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_20.Data.AllocatorInstance.Data);
    }
    local_28 = 0xffffffff;
  }
  return (int)local_28;
}

// CompressMemoryBound @ 14181ef00

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
FCompression::CompressMemoryBound(FName param_1,long64 *param_2,long64 param_3,ulong64 param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  char cVar4;
  FNameEntryId FVar5;
  uint uVar6;
  int iVar7;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  ICompressionFormat *pIVar8;
  FName FVar9;
  FName FVar10;
  FName FVar11;
  longlong lVar12;
  FName local_res8;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_48 [8];
  FString local_40;
  FString local_30;
  
  *param_2 = -1;
  local_res8 = param_1;
  if (param_3 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("UncompressedSize >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\Compression.cpp"
                       ,0x25d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    if ((byte)LogCompression._0_1_ < 2) {
      return false;
    }
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCompression);
    return false;
  }
  if (param_1 == (FName)0x0) {
    *param_2 = param_3;
    return true;
  }
  FVar5 = FNameEntryId::FromValidEName((EName)local_res10);
  FVar11 = local_res8;
  FVar9.Number = 0;
  FVar9.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar5.Value);
  if (param_1 == FVar9) {
    if (param_3 == (param_3 & 0xffffffffU)) {
      if ((param_4 == 0) || (param_4 == 0xf)) {
        uVar6 = compressBound();
        *param_2 = (ulonglong)uVar6;
      }
      else {
        lVar12 = (param_3 + 0x3f >> 6) + param_3 + (param_3 + 7 >> 3) + 0xb;
        *param_2 = lVar12;
        if (lVar12 < 0) {
          if ((byte)LogCompression._0_1_ < 2) {
            return false;
          }
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCompression);
          return false;
        }
      }
      return true;
    }
    if (1 < (byte)LogCompression._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCompression);
    }
  }
  else {
    FVar5 = FNameEntryId::FromValidEName((EName)local_res18);
    FVar9 = local_res8;
    FVar10.Number = 0;
    FVar10.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var_00,FVar5.Value);
    iVar7 = (int)param_3;
    if (FVar11 == FVar10) {
      if (param_3 == iVar7) {
        iVar7 = appCompressMemoryBoundGZIP(iVar7);
        *param_2 = (longlong)iVar7;
        if (-1 < iVar7) {
          return true;
        }
        if (1 < (byte)LogCompression._0_1_) {
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCompression);
        }
      }
      else if (1 < (byte)LogCompression._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCompression);
      }
    }
    else {
      FVar5 = FNameEntryId::FromValidEName((EName)local_48);
      FVar11.Number = 0;
      FVar11.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var_01,FVar5.Value);
      if (FVar9 == FVar11) {
        if (param_3 < 0x7e000001) {
          iVar7 = LZ4_compressBound(iVar7);
          *param_2 = (longlong)iVar7;
          if (-1 < iVar7) {
            return true;
          }
          if (1 < (byte)LogCompression._0_1_) {
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCompression);
          }
        }
        else if (1 < (byte)LogCompression._0_1_) {
          UE::Logging::Private::BasicLog<2>
                    ((FStaticBasicLogRecord *)&PTR_u_LZ4_doesn_t_sup_150693368,
                     (FLogCategoryBase *)&LogCompression);
        }
      }
      else {
        pIVar8 = GetCompressionFormat(local_res8,true);
        if (pIVar8 != (ICompressionFormat *)0x0) {
          cVar4 = (**(code **)((longlong)*pIVar8 + 0x68))(pIVar8,param_2,param_3,param_4);
          if (cVar4 == '\0') {
            if ((byte)LogCompression._0_1_ < 2) {
              return false;
            }
            ::FName::ToString(&local_res8,&local_40);
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCompression);
          }
          else {
            if (-1 < *param_2) {
              return true;
            }
            if ((byte)LogCompression._0_1_ < 2) {
              return false;
            }
            ::FName::ToString(&local_res8,&local_30);
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCompression);
            local_40.Data.AllocatorInstance.Data = local_30.Data.AllocatorInstance.Data;
          }
          if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_40.Data.AllocatorInstance.Data);
          }
        }
      }
    }
  }
  return false;
}

// CompressMemoryIfWorthDecompressing @ 14181f260

/* WARNING: Enum "ECompressionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
FCompression::CompressMemoryIfWorthDecompressing
          (FName param_1,bool *param_2,long64 param_3,int param_4,void *param_5,long64 *param_6,
          void *param_7,long64 param_8,ECompressionFlags param_9,ulong64 param_10)

{
  long64 lVar1;
  char cVar2;
  bool bVar3;
  FNameEntryId FVar4;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  ICompressionFormat *pIVar5;
  longlong lVar6;
  FName FVar7;
  FName FVar8;
  FName FVar9;
  FName FVar10;
  bool bVar11;
  
  lVar1 = param_8;
  *param_2 = false;
  if ((param_8 < -1) || (*param_6 < -1)) {
    if (1 < (byte)LogCompression._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCompression);
    }
LAB_14181f3e3:
    bVar11 = false;
  }
  else {
    if (param_3 < param_8) {
      FVar4 = FNameEntryId::FromValidEName((EName)&param_8);
      FVar7.Number = 0;
      FVar7.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar4.Value);
      if (param_1 == FVar7) {
        bVar11 = false;
      }
      else {
        FVar4 = FNameEntryId::FromValidEName((EName)&param_8);
        FVar8.Number = 0;
        FVar8.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var_00,FVar4.Value);
        if (((param_1 == FVar8) ||
            (FVar4 = FNameEntryId::FromValidEName((EName)&param_8), FVar9.Number = 0,
            FVar9.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var_01,FVar4.Value),
            param_1 == FVar9)) ||
           (FVar4 = FNameEntryId::FromValidEName((EName)&param_8), FVar10.Number = 0,
           FVar10.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var_02,FVar4.Value),
           param_1 == FVar10)) {
          bVar11 = true;
        }
        else {
          pIVar5 = GetCompressionFormat(param_1,true);
          if (pIVar5 == (ICompressionFormat *)0x0) goto LAB_14181f3e3;
          cVar2 = (**(code **)((longlong)*pIVar5 + 0x88))(pIVar5);
          bVar11 = cVar2 == '\0';
        }
      }
      bVar3 = CompressMemory(param_1,param_5,param_6,param_7,lVar1,param_9,param_10);
      if (!bVar3) goto LAB_14181f3e3;
      if (bVar11) {
        lVar6 = lVar1 - *param_6;
        if (lVar6 < param_3) {
          *param_2 = false;
          return true;
        }
        *param_2 = param_4 * lVar1 <= lVar6 * 100;
        return true;
      }
      *param_2 = *param_6 < lVar1;
    }
    bVar11 = true;
  }
  return bVar11;
}

// CompressMemoryIfWorthDecompressing @ 14181f410

/* WARNING: Enum "ECompressionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
FCompression::CompressMemoryIfWorthDecompressing
          (FName param_1,int param_2,int param_3,void *param_4,int *param_5,void *param_6,
          int param_7,ECompressionFlags param_8,int param_9)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  FNameEntryId FVar5;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  ICompressionFormat *pIVar6;
  FName FVar7;
  FName FVar8;
  FName FVar9;
  FName FVar10;
  longlong lVar11;
  FName local_res8;
  FString local_38;
  
  piVar1 = param_5;
  lVar11 = (longlong)param_7;
  param_5 = (int *)(longlong)*param_5;
  local_res8 = param_1;
  if ((param_7 < -1) || ((longlong)param_5 < -1)) {
    if (1 < (byte)LogCompression._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCompression);
    }
  }
  else {
    if (param_2 < param_7) {
      FVar5 = FNameEntryId::FromValidEName((EName)&param_7);
      FVar7.Number = 0;
      FVar7.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar5.Value);
      if (param_1 == FVar7) {
        bVar4 = false;
      }
      else {
        FVar5 = FNameEntryId::FromValidEName((EName)&param_7);
        FVar8.Number = 0;
        FVar8.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var_00,FVar5.Value);
        if (((param_1 == FVar8) ||
            (FVar5 = FNameEntryId::FromValidEName((EName)&param_7), FVar9.Number = 0,
            FVar9.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var_01,FVar5.Value),
            param_1 == FVar9)) ||
           (FVar5 = FNameEntryId::FromValidEName((EName)&param_7), FVar10.Number = 0,
           FVar10.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var_02,FVar5.Value),
           param_1 == FVar10)) {
          bVar4 = true;
        }
        else {
          pIVar6 = GetCompressionFormat(param_1,true);
          if (pIVar6 == (ICompressionFormat *)0x0) goto LAB_14181f5a5;
          cVar2 = (**(code **)((longlong)*pIVar6 + 0x88))(pIVar6);
          bVar4 = cVar2 == '\0';
        }
      }
      bVar3 = CompressMemory(param_1,param_4,(long64 *)&param_5,param_6,lVar11,param_8,
                             (longlong)param_9);
      if (!bVar3) goto LAB_14181f5a5;
      if (bVar4) {
        if (lVar11 - (longlong)param_5 < (longlong)param_2) {
          bVar4 = false;
        }
        else {
          bVar4 = param_3 * lVar11 <= (lVar11 - (longlong)param_5) * 100;
        }
      }
      else {
        bVar4 = (longlong)param_5 < lVar11;
      }
    }
    else {
      bVar4 = false;
    }
    if (param_5 == (int *)(longlong)(int)param_5) {
      *piVar1 = (int)param_5;
      return bVar4;
    }
  }
LAB_14181f5a5:
  ::FName::ToString(&local_res8,&local_38);
  UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogCompression);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return false;
}

// GetCompressionFormat @ 1418254f0

/* WARNING: Enum "Type": Some values do not have unique names */

ICompressionFormat * __cdecl FCompression::GetCompressionFormat(FName param_1,bool param_2)

{
  code *pcVar1;
  FName FVar2;
  bool bVar3;
  uint uVar4;
  FNameEntryId FVar5;
  int iVar6;
  int iVar7;
  undefined4 extraout_var;
  IModularFeatures *pIVar8;
  FName *pFVar9;
  longlong lVar10;
  ICompressionFormat *pIVar11;
  FName FVar12;
  ulonglong uVar13;
  ForAnyElementType FVar14;
  ICompressionFormat IVar15;
  ICompressionFormat IVar16;
  FName local_res8 [2];
  undefined1 local_res18 [8];
  int local_res20;
  ForAnyElementType local_a8;
  undefined8 local_a0;
  ICompressionFormat local_98;
  undefined1 local_90 [8];
  ICompressionFormat local_88;
  FName *local_80;
  ICompressionFormat *local_78;
  FName local_70;
  undefined1 local_68 [8];
  FString local_60;
  FString local_50;
  
  local_res8[0] = param_1;
  EnterCriticalSection((LPCRITICAL_SECTION)&CompressionFormatsCriticalSection);
  FVar12 = local_res8[0];
  uVar4 = ::GetTypeHash(local_res8[0].ComparisonIndex.Value);
  FVar2 = local_res8[0];
  IVar16 = (ICompressionFormat)0x0;
  if (CompressionFormats._8_4_ != CompressionFormats._52_4_) {
    lVar10 = 0x154b78958;
    if (CompressionFormats._64_8_ != 0) {
      lVar10 = CompressionFormats._64_8_;
    }
    iVar6 = *(int *)(lVar10 + (ulonglong)(CompressionFormats._72_4_ - 1 & FVar12.Number + uVar4) * 4
                    );
    while (iVar6 != -1) {
      lVar10 = CompressionFormats._0_8_ + (longlong)iVar6 * 0x18;
      if (*(FName *)(CompressionFormats._0_8_ + (longlong)iVar6 * 0x18) == FVar12) {
        IVar15 = (ICompressionFormat)(lVar10 + 8);
        if (lVar10 == 0) {
          IVar15 = IVar16;
        }
        if (IVar15 != (ICompressionFormat)0x0) goto LAB_141825786;
        break;
      }
      iVar6 = *(int *)(lVar10 + 0x10);
    }
  }
  FVar5 = FNameEntryId::FromValidEName((EName)local_90);
  FVar12.Number = 0;
  FVar12.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar5.Value);
  if (FVar2 == FVar12) {
    FOodleDataCompression::CompressionFormatInitOnFirstUseFromLock();
  }
  pIVar8 = IModularFeatures::Get();
  pFVar9 = ::FName::FName(&local_70,"CompressionFormat");
  FVar12 = *pFVar9;
  local_a8.Data = (FScriptContainerElement *)0x0;
  local_a0 = 0;
  iVar6 = (**(code **)((longlong)*pIVar8 + 0x18))(pIVar8,FVar12);
  IVar15 = IVar16;
  if (0 < iVar6) {
    do {
      lVar10 = (**(code **)((longlong)*pIVar8 + 0x20))(pIVar8,FVar12,IVar15);
      local_98 = (ICompressionFormat)(lVar10 + -8);
      if (lVar10 == 0) {
        local_98 = IVar16;
      }
      if (((local_a8.Data <= &local_98) &&
          (&local_98 < (ICompressionFormat *)(local_a8.Data + (longlong)local_a0._4_4_ * 8))) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar1 = (code *)swi(3);
        pIVar11 = (ICompressionFormat *)(*pcVar1)();
        return pIVar11;
      }
      iVar7 = (int)local_a0;
      if ((int)local_a0 == local_a0._4_4_) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&local_a8,(int *)((longlong)&local_a0 + 4));
      }
      IVar15._0_4_ = IVar15._0_4_ + 1;
      IVar15._4_4_ = 0;
      local_a0 = CONCAT44(local_a0._4_4_,iVar7 + 1);
      *(ICompressionFormat *)(local_a8.Data + (longlong)iVar7 * 8) = local_98;
    } while ((int)IVar15._0_4_ < iVar6);
  }
  iVar6 = (int)local_a0;
  uVar13 = (ulonglong)(int)local_a0;
  pIVar11 = (ICompressionFormat *)(local_a8.Data + uVar13 * 8);
  FVar14.Data = local_a8.Data;
  while( true ) {
    if ((int)uVar13 != iVar6) {
      `TCheckedPointerIterator<ICompressionFormat_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res18);
    }
    if ((ICompressionFormat *)FVar14.Data == pIVar11) goto LAB_14182578e;
    local_88 = *(ICompressionFormat *)FVar14.Data;
    pFVar9 = (FName *)(**(code **)(*(longlong *)local_88 + 0x40))(local_88,local_68);
    if (*pFVar9 == local_res8[0]) break;
    uVar13 = local_a0 & 0xffffffff;
    FVar14.Data = FVar14.Data + 8;
  }
  local_80 = local_res8;
  local_78 = &local_88;
  TSet<TTuple<FName,ICompressionFormat_*>,TDefaultMapHashableKeyFuncs<FName,ICompressionFormat_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_const_&,ICompressionFormat_*_const_&>_>
            ((TSet<TTuple<FName,ICompressionFormat_*>,TDefaultMapHashableKeyFuncs<FName,ICompressionFormat_*,0>,FDefaultSetAllocator>
              *)&CompressionFormats,
             (TPairInitializer<FName_const_&,ICompressionFormat_*_const_&> *)&local_res20,
             (bool *)&local_80);
  IVar15 = (ICompressionFormat)(CompressionFormats._0_8_ + ((longlong)local_res20 * 3 + 1) * 8);
  if (IVar15 != (ICompressionFormat)0x0) {
    if ((ICompressionFormat *)local_a8.Data != (ICompressionFormat *)0x0) {
      FMemory::Free(local_a8.Data);
    }
LAB_141825786:
    IVar16 = *(ICompressionFormat *)IVar15;
    goto LAB_14182582f;
  }
LAB_14182578e:
  if (param_2) {
    if (1 < (byte)LogCompression._0_1_) {
      ::FName::ToString(local_res8,&local_60);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCompression);
LAB_141825817:
      if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60.Data.AllocatorInstance.Data);
      }
    }
  }
  else if (3 < (byte)LogCompression._0_1_) {
    ::FName::ToString(local_res8,&local_50);
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogCompression);
    local_60.Data.AllocatorInstance.Data = local_50.Data.AllocatorInstance.Data;
    goto LAB_141825817;
  }
  if ((ICompressionFormat *)local_a8.Data != (ICompressionFormat *)0x0) {
    FMemory::Free(local_a8.Data);
  }
LAB_14182582f:
  LeaveCriticalSection((LPCRITICAL_SECTION)&CompressionFormatsCriticalSection);
  return (ICompressionFormat *)IVar16;
}

// GetCompressionFormatFromDeprecatedFlags @ 141825860

/* WARNING: Enum "ECompressionFlags": Some values do not have unique names */

FName __cdecl FCompression::GetCompressionFormatFromDeprecatedFlags(ECompressionFlags param_1)

{
  undefined4 uVar1;
  FNameEntryId FVar2;
  undefined4 extraout_var;
  uint in_register_0000000c;
  FName FVar3;
  uint in_EDX;
  uint uVar4;
  undefined1 local_res10 [24];
  
  FVar3.Number = in_register_0000000c;
  FVar3.ComparisonIndex.Value = param_1;
  uVar4 = in_EDX & 0xf;
  if (((uVar4 != 1) && (uVar4 != 2)) && (uVar4 != 4)) {
    *(undefined8 *)FVar3 = 0;
    return FVar3;
  }
  FVar2 = FNameEntryId::FromValidEName((EName)local_res10);
  uVar1 = *(undefined4 *)CONCAT44(extraout_var,FVar2.Value);
  *(undefined4 *)((longlong)FVar3 + 4) = 0;
  *(undefined4 *)FVar3 = uVar1;
  return FVar3;
}

// GetCompressorDDCSuffix @ 1418258c0

FString * __cdecl
FCompression::GetCompressorDDCSuffix(FString *__return_storage_ptr__,FName param_1)

{
  FNameEntryId FVar1;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  ICompressionFormat *pIVar2;
  undefined4 extraout_var_02;
  undefined4 extraout_var_03;
  undefined4 extraout_var_04;
  undefined8 *puVar3;
  FName FVar4;
  FName FVar5;
  FName FVar6;
  FName FVar7;
  FName FVar8;
  FName FVar9;
  int iVar10;
  undefined1 local_res8 [8];
  FName local_res10;
  FString local_18;
  
  local_res10 = param_1;
  if ((((param_1 != (FName)0x0) &&
       (FVar1 = FNameEntryId::FromValidEName((EName)local_res8), FVar4.Number = 0,
       FVar4.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar1.Value), param_1 != FVar4))
      && (FVar1 = FNameEntryId::FromValidEName((EName)local_res8), FVar5.Number = 0,
         FVar5.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var_00,FVar1.Value),
         param_1 != FVar5)) &&
     ((FVar1 = FNameEntryId::FromValidEName((EName)local_res8), FVar6.Number = 0,
      FVar6.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var_01,FVar1.Value), param_1 != FVar6
      && (pIVar2 = GetCompressionFormat(param_1,true), pIVar2 != (ICompressionFormat *)0x0)))) {
    (**(code **)((longlong)*pIVar2 + 0x78))(pIVar2);
  }
  ::FName::ToString(&local_res10,&local_18);
  ::FString::PrintfImpl(__return_storage_ptr__,L"%s_VER%d_");
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  FVar4 = local_res10;
  if ((local_res10 != (FName)0x0) &&
     (FVar1 = FNameEntryId::FromValidEName((EName)local_res8), FVar5 = local_res10, FVar7.Number = 0
     , FVar7.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var_02,FVar1.Value), FVar4 != FVar7)
     ) {
    FVar1 = FNameEntryId::FromValidEName((EName)local_res8);
    FVar4 = local_res10;
    FVar8.Number = 0;
    FVar8.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var_03,FVar1.Value);
    if (FVar5 == FVar8) {
      ::FString::AppendChars(__return_storage_ptr__,L"9810EC9C5D34401CBD57AA3852417A6C",0x20);
      return __return_storage_ptr__;
    }
    FVar1 = FNameEntryId::FromValidEName((EName)local_res8);
    FVar9.Number = 0;
    FVar9.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var_04,FVar1.Value);
    if (FVar4 == FVar9) {
      ::FString::AppendChars(__return_storage_ptr__,L"FB2181277DF44305ABBE03FD1751CBDE",0x20);
      return __return_storage_ptr__;
    }
    pIVar2 = GetCompressionFormat(local_res10,true);
    if (pIVar2 != (ICompressionFormat *)0x0) {
      puVar3 = (undefined8 *)(**(code **)((longlong)*pIVar2 + 0x80))(pIVar2,&local_18);
      iVar10 = *(int *)(puVar3 + 1) + -1;
      if (*(int *)(puVar3 + 1) == 0) {
        iVar10 = 0;
      }
      ::FString::AppendChars(__return_storage_ptr__,(wchar_t *)*puVar3,iVar10);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
  }
  return __return_storage_ptr__;
}

// GetCompressorVersion @ 141825aa0

uint __cdecl FCompression::GetCompressorVersion(FName param_1)

{
  FNameEntryId FVar1;
  uint uVar2;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  ICompressionFormat *pIVar3;
  FName FVar4;
  FName FVar5;
  FName FVar6;
  undefined1 local_res8 [32];
  
  if ((param_1 == (FName)0x0) ||
     (FVar1 = FNameEntryId::FromValidEName((EName)local_res8), FVar4.Number = 0,
     FVar4.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar1.Value), param_1 == FVar4)) {
    return 0;
  }
  FVar1 = FNameEntryId::FromValidEName((EName)local_res8);
  FVar5.Number = 0;
  FVar5.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var_00,FVar1.Value);
  if ((param_1 != FVar5) &&
     (FVar1 = FNameEntryId::FromValidEName((EName)local_res8), FVar6.Number = 0,
     FVar6.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var_01,FVar1.Value), param_1 != FVar6)
     ) {
    pIVar3 = GetCompressionFormat(param_1,true);
    if (pIVar3 == (ICompressionFormat *)0x0) {
      return 0;
    }
                    /* WARNING: Could not recover jumptable at 0x000141825b0e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)((longlong)*pIVar3 + 0x78))(pIVar3,*(code **)((longlong)*pIVar3 + 0x78));
    return uVar2;
  }
  return 0x1300;
}

// GetMaximumCompressedSize @ 141826450

/* WARNING: Enum "ECompressionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

int __cdecl
FCompression::GetMaximumCompressedSize
          (FName param_1,int param_2,ECompressionFlags param_3,int param_4)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FNameEntryId FVar4;
  undefined4 extraout_var;
  FName FVar5;
  long64 lVar6;
  FName local_res8;
  undefined1 local_res10 [8];
  long64 local_38;
  FString local_30;
  
  lVar6 = (long64)param_2;
  local_38 = -1;
  local_res8 = param_1;
  if (param_2 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("UncompressedSize >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\Compression.cpp"
                       ,0x22d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
    if (1 < (byte)LogCompression._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCompression);
    }
  }
  else {
    if (param_1 != (FName)0x0) {
      FVar4 = FNameEntryId::FromValidEName((EName)local_res10);
      FVar5.Number = 0;
      FVar5.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar4.Value);
      if (param_1 == FVar5) {
        lVar6 = FOodleDataCompression::GetMaximumCompressedSize(lVar6);
      }
      else {
        bVar2 = CompressMemoryBound(param_1,&local_38,lVar6,(longlong)param_4);
        lVar6 = local_38;
        if (!bVar2) goto LAB_1418264c9;
      }
    }
    local_38 = lVar6;
    if (local_38 == (int)local_38) {
      return (int)local_38;
    }
  }
LAB_1418264c9:
  ::FName::ToString(&local_res8,&local_30);
  UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogCompression);
  if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Data.AllocatorInstance.Data);
  }
  return -1;
}

// GetMaximumCompressedSize @ 141826590

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
FCompression::GetMaximumCompressedSize(FName param_1,long64 *param_2,long64 param_3,ulong64 param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FNameEntryId FVar4;
  undefined4 extraout_var;
  long64 lVar5;
  FName FVar6;
  undefined1 local_res18 [8];
  
  if (param_3 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("UncompressedSize >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\Compression.cpp"
                       ,0x22d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    *param_2 = -1;
    if (1 < (byte)LogCompression._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCompression);
    }
    bVar2 = false;
  }
  else if (param_1 == (FName)0x0) {
    *param_2 = param_3;
    bVar2 = true;
  }
  else {
    FVar4 = FNameEntryId::FromValidEName((EName)local_res18);
    FVar6.Number = 0;
    FVar6.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar4.Value);
    if (param_1 == FVar6) {
      lVar5 = FOodleDataCompression::GetMaximumCompressedSize(param_3);
      *param_2 = lVar5;
      bVar2 = true;
    }
    else {
      bVar2 = CompressMemoryBound(param_1,param_2,param_3,param_4);
    }
  }
  return bVar2;
}

// IsFormatValid @ 14182aa30

bool __cdecl FCompression::IsFormatValid(FName param_1)

{
  FNameEntryId FVar1;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  ICompressionFormat *pIVar2;
  FName FVar3;
  FName FVar4;
  FName FVar5;
  FName FVar6;
  undefined1 local_res8 [32];
  
  FVar1 = FNameEntryId::FromValidEName((EName)local_res8);
  FVar3.Number = 0;
  FVar3.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar1.Value);
  if (param_1 != FVar3) {
    FVar1 = FNameEntryId::FromValidEName((EName)local_res8);
    FVar4.Number = 0;
    FVar4.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var_00,FVar1.Value);
    if (param_1 != FVar4) {
      FVar1 = FNameEntryId::FromValidEName((EName)local_res8);
      FVar5.Number = 0;
      FVar5.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var_01,FVar1.Value);
      if (param_1 != FVar5) {
        FVar1 = FNameEntryId::FromValidEName((EName)local_res8);
        FVar6.Number = 0;
        FVar6.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var_02,FVar1.Value);
        if (param_1 != FVar6) {
          pIVar2 = GetCompressionFormat(param_1,false);
          return pIVar2 != (ICompressionFormat *)0x0;
        }
      }
    }
  }
  return true;
}

// UncompressMemory @ 141839260

/* WARNING: Enum "ECompressionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
FCompression::UncompressMemory
          (FName param_1,void *param_2,long64 param_3,void *param_4,long64 param_5,
          ECompressionFlags param_6,ulong64 param_7)

{
  LARGE_INTEGER LVar1;
  double dVar2;
  uchar auVar3 [8];
  atomic<int> aVar4;
  char cVar5;
  FNameEntryId FVar6;
  int iVar7;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  ICompressionFormat *pIVar8;
  undefined4 extraout_var_03;
  FName *pFVar9;
  FThreadSafeStaticStat<FStat_STAT_UncompressorTime> FVar10;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  FName FVar11;
  FName FVar12;
  FName FVar13;
  FName FVar14;
  FName FVar15;
  bool bVar16;
  bool bVar17;
  FName local_res8;
  LARGE_INTEGER local_68;
  FStatMessage local_60 [2];
  
  bVar16 = -1 < CpuChannel->Enabled;
  local_res8 = param_1;
  if (bVar16) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId917,"FCompression::UncompressMemory",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\Compression.cpp"
               ,0x395);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId917);
  }
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Cyan,"FCompression_UncompressMemory");
  bVar17 = -1 < CpuChannel->Enabled;
  if (bVar17) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId918,"FCompression_UncompressMemory",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\Compression.cpp"
               ,0x396);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId918);
  }
  QueryPerformanceCounter(&local_68);
  FVar14 = local_res8;
  cVar5 = '\0';
  dVar2 = (double)local_68.QuadPart * FGenericPlatformTime::SecondsPerCycle;
  FVar6 = FNameEntryId::FromValidEName((EName)&local_68);
  FVar15 = local_res8;
  FVar11.Number = 0;
  FVar11.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar6.Value);
  if (FVar14 == FVar11) {
    cVar5 = appUncompressMemoryZLIB(param_2,param_3,param_4,param_5,(int)param_7);
LAB_14183948a:
    if (cVar5 == '\0') goto LAB_141839493;
  }
  else {
    FVar6 = FNameEntryId::FromValidEName((EName)&local_68);
    FVar14 = local_res8;
    FVar12.Number = 0;
    FVar12.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var_00,FVar6.Value);
    if (FVar15 == FVar12) {
      cVar5 = appUncompressMemoryGZIP(param_2,param_3,param_4,param_5);
      goto LAB_14183948a;
    }
    FVar6 = FNameEntryId::FromValidEName((EName)&local_68);
    FVar15 = local_res8;
    FVar13.Number = 0;
    FVar13.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var_01,FVar6.Value);
    if (FVar14 == FVar13) {
      if ((param_3 != (int)param_3) || (param_5 != (int)param_5)) {
        if (1 < (byte)LogCompression._0_1_) {
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCompression);
        }
        goto LAB_141839707;
      }
      iVar7 = LZ4_decompress_safe(param_4,param_2,(int)param_5,(int)param_3);
      cVar5 = 0 < iVar7;
      goto LAB_14183948a;
    }
    FVar6 = FNameEntryId::FromValidEName((EName)&local_68);
    FVar14.Number = 0;
    FVar14.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var_02,FVar6.Value);
    if (FVar15 == FVar14) {
      cVar5 = FOodleDataCompression::Decompress(param_2,param_3,param_4,param_5);
      goto LAB_14183948a;
    }
    pIVar8 = GetCompressionFormat(local_res8,true);
    if (pIVar8 != (ICompressionFormat *)0x0) {
      cVar5 = (**(code **)((longlong)*pIVar8 + 0x58))
                        (pIVar8,param_2,param_3,param_4,param_5,param_7);
      goto LAB_14183948a;
    }
LAB_141839493:
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      if (GConfig != (FConfigCacheIni *)0x0) {
        FConfigCacheIni::GetBool
                  (GConfig,L"Core.System",L"FailOnUncompressErrors",&FailOnUncompressErrors.Value,
                   &GEngineIni);
      }
      _Init_thread_footer(&::_TSS0);
    }
    if (FailOnUncompressErrors.Value == false) {
      cVar5 = '\x01';
    }
    if (1 < (byte)LogCompression._0_1_) {
      ::FName::ToString(&local_res8,(FString *)local_60);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCompression);
      if (local_60[0].StatData.Pad != (uchar  [8])0x0) {
        FMemory::Free((void *)local_60[0].StatData.Pad);
      }
    }
    FVar14 = local_res8;
    aVar4 = has_logged;
    LOCK();
    has_logged = (atomic<int>)0x1;
    UNLOCK();
    if (((aVar4 == (atomic<int>)0x0) &&
        (FVar6 = FNameEntryId::FromValidEName((EName)&local_68), FVar15.Number = 0,
        FVar15.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var_03,FVar6.Value),
        FVar14 == FVar15)) && (param_5 < 0x4001)) {
      if (1 < (byte)LogCompression._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCompression);
      }
      FCompressionUtil::LogHexDump(param_4,param_5,0,param_5,0x20);
    }
  }
  if (FThreadStats::TlsSlot != 0xffffffff) {
    QueryPerformanceCounter(&local_68);
    auVar3 = (uchar  [8])
             (double)(float)((double)local_68.QuadPart * FGenericPlatformTime::SecondsPerCycle -
                            dVar2);
    if ((double)auVar3 != 0.0) {
      FVar10 = StatPtr_STAT_UncompressorTime;
      if (StatPtr_STAT_UncompressorTime == (FThreadSafeStaticStat<FStat_STAT_UncompressorTime>)0x0)
      {
        pFVar9 = ::FName::FName((FName *)&local_68.s,"STAT_UncompressorTime");
        FVar10 = (FThreadSafeStaticStat<FStat_STAT_UncompressorTime>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UncompressorTime,*pFVar9,
                            L"Uncompressor total time","STATGROUP_Compression","STATCAT_Advanced",
                            L"Compression",true,false,NumBits,false,false,MCR_Invalid);
      }
      LVar1 = *(LARGE_INTEGER *)FVar10;
      local_68 = LVar1;
      if (((LVar1.QuadPart != 0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        this = TlsGetValue(FThreadStats::TlsSlot);
        if (this == (FThreadStats *)0x0) {
          this_00 = FThreadStatsPool::Get();
          this = FThreadStatsPool::GetFromPool(this_00);
        }
        local_60[0].NameAndInfo.Number = LVar1.s.HighPart & 0xffffafffU | 0xa000;
        local_68 = LVar1;
        local_60[0].StatData.Pad = auVar3;
        local_60[0].NameAndInfo.Index.Value = LVar1.s.LowPart;
        FThreadStats::AddStatMessage(this,local_60);
        FStatsTrace::Add((FName *)&local_68.s,(double)auVar3);
        if (this->ScopeCount == 0) {
          FThreadStats::Flush(this,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(this,false,false);
        }
      }
    }
  }
LAB_141839707:
  if (bVar17) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  if (bVar16) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return (bool)cVar5;
}

// UncompressMemoryStream @ 1418397b0

/* WARNING: Enum "ECompressionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
FCompression::UncompressMemoryStream
          (FName param_1,void *param_2,long64 param_3,IMemoryReadStream *param_4,long64 param_5,
          long64 param_6,ECompressionFlags param_7,ulong64 param_8)

{
  double dVar1;
  ulong64 uVar2;
  bool bVar3;
  FNameEntryId FVar4;
  void *pvVar5;
  undefined4 extraout_var;
  FName *pFVar6;
  FThreadSafeStaticStat<FStat_STAT_UncompressorTime> FVar7;
  FName FVar8;
  bool bVar9;
  bool bVar10;
  longlong local_res20;
  
  bVar9 = -1 < CpuChannel->Enabled;
  uVar2 = param_6;
  if (bVar9) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1010,"FCompression::UncompressMemoryStream",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\Compression.cpp"
               ,0x3f2);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1010);
    uVar2 = param_6;
  }
  local_res20 = 0;
  param_6 = uVar2;
  pvVar5 = (void *)(**(code **)param_4->_padding_)(param_4,&local_res20,param_5,uVar2);
  if (local_res20 < (longlong)uVar2) {
    FVar4 = FNameEntryId::FromValidEName((EName)&param_6);
    FVar8.Number = 0;
    FVar8.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar4.Value);
    if (param_1 == FVar8) {
      FGenericPlatformMisc::BeginNamedEvent(&FColor::Cyan,"FCompression_UncompressMemoryStream");
      bVar10 = -1 < CpuChannel->Enabled;
      if (bVar10) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId1022,"FCompression_UncompressMemoryStream",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\Compression.cpp"
                   ,0x3fe);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1022);
      }
      QueryPerformanceCounter((LARGE_INTEGER *)&param_6);
      dVar1 = (double)param_6 * FGenericPlatformTime::SecondsPerCycle;
      bVar3 = appUncompressMemoryStreamZLIB(param_2,param_3,param_4,param_5,uVar2,(int)param_8);
      if (FThreadStats::TlsSlot != 0xffffffff) {
        QueryPerformanceCounter((LARGE_INTEGER *)&param_6);
        dVar1 = (double)(float)((double)param_6 * FGenericPlatformTime::SecondsPerCycle - dVar1);
        if (dVar1 != 0.0) {
          FVar7 = StatPtr_STAT_UncompressorTime;
          if (StatPtr_STAT_UncompressorTime ==
              (FThreadSafeStaticStat<FStat_STAT_UncompressorTime>)0x0) {
            pFVar6 = ::FName::FName((FName *)&param_6,"STAT_UncompressorTime");
            FVar7 = (FThreadSafeStaticStat<FStat_STAT_UncompressorTime>)
                    FThreadSafeStaticStatBase::DoSetup
                              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UncompressorTime,*pFVar6,
                               L"Uncompressor total time","STATGROUP_Compression","STATCAT_Advanced"
                               ,L"Compression",true,false,NumBits,false,false,MCR_Invalid);
          }
          FVar8 = *(FName *)FVar7;
          param_6._0_4_ = FVar8.ComparisonIndex.Value;
          param_6._4_4_ = FVar8.Number;
          FThreadStats::AddMessage<double>(FVar8,Add,dVar1,false);
        }
      }
      if (bVar10) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      FGenericPlatformMisc::EndNamedEvent();
    }
    else {
      pvVar5 = FMemory::Malloc(uVar2,0);
      (**(code **)(param_4->_padding_ + 0x10))(param_4,pvVar5,param_5,uVar2);
      bVar3 = UncompressMemory(param_1,param_2,param_3,pvVar5,uVar2,param_7,param_8);
      FMemory::Free(pvVar5);
    }
  }
  else {
    bVar3 = UncompressMemory(param_1,param_2,param_3,pvVar5,uVar2,param_7,param_8);
  }
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar3;
}

// VerifyCompressionFlagsValid @ 14183ac20

bool __cdecl FCompression::VerifyCompressionFlagsValid(int param_1)

{
  return (param_1 & 0xfffff000U) == 0;
}

