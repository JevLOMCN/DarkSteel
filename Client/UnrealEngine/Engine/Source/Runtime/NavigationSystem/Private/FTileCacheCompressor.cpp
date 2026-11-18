// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 3

// compress @ 146e76220

/* WARNING: Enum "ECompressionFlags": Some values do not have unique names */

uint __thiscall
FTileCacheCompressor::compress
          (FTileCacheCompressor *this,uchar *param_1,int param_2,uchar *param_3,int param_4,
          int *param_5)

{
  code *pcVar1;
  FName FVar2;
  bool bVar3;
  uint uVar4;
  FNameEntryId FVar5;
  long64 lVar6;
  undefined4 extraout_var;
  int iVar7;
  undefined1 local_res18 [8];
  uint local_res20;
  undefined4 uStackX_24;
  
  param_4 = param_4 + -4;
  *(int *)param_3 = param_2;
  if (GNavmeshUseOodleCompression == false) {
    FVar5 = FNameEntryId::FromValidEName((EName)local_res18);
    local_res20 = *(uint *)CONCAT44(extraout_var,FVar5.Value);
    uStackX_24 = 0;
    FVar2.Number = 0;
    FVar2.ComparisonIndex.Value = local_res20;
    bVar3 = FCompression::CompressMemory
                      (FVar2,param_3 + 4,&param_4,param_1,param_2,COMPRESS_BiasMemory,0);
    if (bVar3) {
      *param_5 = param_4 + 4;
      return 0x40000000;
    }
  }
  else {
    lVar6 = FOodleDataCompression::CompressParallel
                      (param_3 + 4,(longlong)param_4,param_1,(longlong)param_2,
                       GNavmeshTileCacheCompressor,GNavmeshTileCacheCompressionLevel,false);
    if (0 < lVar6) {
      iVar7 = (int)(lVar6 + 4);
      if (lVar6 + 4 != (longlong)iVar7) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IntFitsIn<OutType>(In)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                           ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return uVar4;
        }
      }
      *param_5 = iVar7;
      return 0x40000000;
    }
  }
  return 0x80000000;
}

// decompress @ 146e76360

/* WARNING: Enum "ECompressionFlags": Some values do not have unique names */

uint __thiscall
FTileCacheCompressor::decompress
          (FTileCacheCompressor *this,uchar *param_1,int param_2,uchar *param_3,int param_4,
          int *param_5)

{
  int iVar1;
  FName FVar2;
  bool bVar3;
  FNameEntryId FVar4;
  undefined4 extraout_var;
  undefined1 local_res18 [8];
  
  iVar1 = *(int *)param_1;
  if (GNavmeshUseOodleCompression) {
    bVar3 = FOodleDataCompression::Decompress
                      (param_3,(longlong)iVar1,param_1 + 4,(longlong)(param_2 + -4));
    if (bVar3) {
LAB_146e763f9:
      *param_5 = iVar1;
      return 0x40000000;
    }
  }
  else {
    FVar4 = FNameEntryId::FromValidEName((EName)local_res18);
    FVar2.Number = 0;
    FVar2.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar4.Value);
    bVar3 = FCompression::UncompressMemory
                      (FVar2,param_3,(longlong)iVar1,param_1 + 4,(longlong)(param_2 + -4),
                       COMPRESS_NoFlags,0);
    if (bVar3) goto LAB_146e763f9;
  }
  return 0x80000000;
}

// maxCompressedSize @ 146e770b0

int __thiscall FTileCacheCompressor::maxCompressedSize(FTileCacheCompressor *this,int param_1)

{
  long64 lVar1;
  
  if (GNavmeshUseOodleCompression) {
    lVar1 = FOodleDataCompression::CompressedBufferSizeNeeded((longlong)param_1);
    return (int)lVar1 + 4;
  }
  return (int)((float)param_1 * __real_3f8ccccd) + 4;
}

