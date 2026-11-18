// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 6

// CompressData64 @ 1415b12a0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __cdecl
FOodleCompressedArray::CompressData64
          (TArray<unsigned_char,TSizedDefaultAllocator<64>_> *param_1,void *param_2,long64 param_3,
          ECompressor param_4,ECompressionLevel param_5)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  long64 lVar5;
  longlong lVar6;
  
  if ((-1 < param_3) && (param_2 != (void *)0x0)) {
    lVar5 = OodleLZ_GetCompressedBufferSizeNeeded(OodleLZ_Compressor_Kraken,param_3);
    lVar6 = 0x10;
    if (param_3 < 0x80000000) {
      lVar6 = 8;
    }
    TArray<unsigned_char,TSizedDefaultAllocator<64>_>::SetNum(param_1,lVar6 + lVar5,Default);
    lVar5 = FOodleDataCompression::CompressParallel
                      ((param_1->AllocatorInstance).Data + lVar6,lVar5,param_2,param_3,param_4,
                       param_5,false);
    if (0 < lVar5) {
      if (param_3 < 0x80000000) {
        if ((0x7fffffff < lVar5) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("CompressedSize < (1U << 31)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Compression\\OodleDataCompressionUtil.cpp"
                               ,0x5d,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        pFVar1 = (param_1->AllocatorInstance).Data;
        *(int *)pFVar1 = (int)param_3;
        *(int *)(pFVar1 + 4) = (int)lVar5;
      }
      else {
        pFVar1 = (param_1->AllocatorInstance).Data;
        *(ulonglong *)pFVar1 = param_3 | 0x8000000000000000;
        *(long64 *)(pFVar1 + 8) = lVar5;
      }
      TArray<unsigned_char,TSizedDefaultAllocator<64>_>::SetNum(param_1,lVar6 + lVar5,No);
      return true;
    }
    param_1->ArrayNum = 0;
    if (param_1->ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                (1,1,0,&param_1->AllocatorInstance,0,&param_1->ArrayMax);
    }
  }
  return false;
}

// CompressData @ 1415b1400

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __cdecl
FOodleCompressedArray::CompressData
          (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1,void *param_2,int param_3,
          ECompressor param_4,ECompressionLevel param_5)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  long64 lVar6;
  
  if ((-1 < param_3) && (param_2 != (void *)0x0)) {
    lVar6 = OodleLZ_GetCompressedBufferSizeNeeded(OodleLZ_Compressor_Kraken,(longlong)param_3);
    iVar5 = (int)lVar6;
    if ((lVar6 != iVar5) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IntFitsIn<OutType>(In)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                           ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar3))
    {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNum(param_1,iVar5 + 8,Default);
    lVar6 = FOodleDataCompression::CompressParallel
                      ((param_1->AllocatorInstance).Data + 8,(longlong)iVar5,param_2,
                       (longlong)param_3,param_4,param_5,false);
    iVar5 = (int)lVar6;
    if ((lVar6 != iVar5) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IntFitsIn<OutType>(In)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                           ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar3))
    {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    if (0 < iVar5) {
      pFVar1 = (param_1->AllocatorInstance).Data;
      *(int *)pFVar1 = param_3;
      *(int *)(pFVar1 + 4) = iVar5;
      TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNum(param_1,iVar5 + 8,No);
      return true;
    }
    param_1->ArrayNum = 0;
    if (param_1->ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,0,&param_1->AllocatorInstance,0,&param_1->ArrayMax);
    }
  }
  return false;
}

// DecompressToAllocatedBuffer64 @ 1415bc930

bool __cdecl
FOodleCompressedArray::DecompressToAllocatedBuffer64
          (void **param_1,long64 *param_2,TArray<unsigned_char,TSizedDefaultAllocator<64>_> *param_3
          )

{
  ulonglong uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  ulonglong uVar6;
  void *pvVar7;
  ulong64 uVar8;
  longlong lVar9;
  
  uVar1 = param_3->ArrayNum;
  if (7 < uVar1) {
    pFVar2 = (param_3->AllocatorInstance).Data;
    uVar6 = (ulonglong)*(int *)(pFVar2 + 4);
    uVar8 = (ulong64)*(int *)pFVar2;
    if (*(int *)(pFVar2 + 4) < 0) {
      if (uVar1 < 0x10) {
        return false;
      }
      uVar6 = *(ulonglong *)(pFVar2 + 8);
      uVar8 = *(ulonglong *)pFVar2 & 0x7fffffffffffffff;
      lVar9 = 0x10;
    }
    else {
      lVar9 = 8;
    }
    if (((longlong)uVar1 < (longlong)(lVar9 + uVar6)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("OffsetToCompressedData + CompressedSize <= InCompressed.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Compression\\OodleDataCompressionUtil.cpp"
                           ,0xc5,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    pvVar7 = FMemory::Malloc(uVar8,0);
    if (pvVar7 != (void *)0x0) {
      *param_2 = uVar8;
      *param_1 = pvVar7;
      bVar4 = FOodleDataCompression::DecompressParallel
                        (pvVar7,uVar8,(param_3->AllocatorInstance).Data + lVar9,uVar6);
      if (bVar4) {
        return true;
      }
      FMemory::Free(pvVar7);
      *param_1 = (void *)0x0;
    }
  }
  return false;
}

// DecompressToAllocatedBuffer @ 1415bca40

bool __cdecl
FOodleCompressedArray::DecompressToAllocatedBuffer
          (void **param_1,int *param_2,TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_3)

{
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  void *pvVar7;
  
  if (7 < (uint)param_3->ArrayNum) {
    pFVar3 = (param_3->AllocatorInstance).Data;
    iVar1 = *(int *)(pFVar3 + 4);
    iVar2 = *(int *)pFVar3;
    if (-1 < iVar1) {
      if ((param_3->ArrayNum < iVar1 + 8) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("OffsetToCompressedData + CompressedSize <= InCompressed.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Compression\\OodleDataCompressionUtil.cpp"
                             ,0xa7,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      pvVar7 = FMemory::Malloc((longlong)iVar2,0);
      if (pvVar7 != (void *)0x0) {
        *param_2 = iVar2;
        *param_1 = pvVar7;
        bVar5 = FOodleDataCompression::DecompressParallel
                          (pvVar7,(longlong)iVar2,(param_3->AllocatorInstance).Data + 8,
                           (longlong)iVar1);
        if (bVar5) {
          return true;
        }
        FMemory::Free(pvVar7);
        *param_1 = (void *)0x0;
      }
    }
  }
  return false;
}

// DecompressToExistingBuffer64 @ 1415bcb20

bool __cdecl
FOodleCompressedArray::DecompressToExistingBuffer64
          (void *param_1,long64 param_2,TArray<unsigned_char,TSizedDefaultAllocator<64>_> *param_3)

{
  ulonglong uVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  uVar1 = param_3->ArrayNum;
  if (7 < uVar1) {
    pFVar2 = (param_3->AllocatorInstance).Data;
    uVar4 = (ulonglong)*(int *)(pFVar2 + 4);
    uVar6 = (ulonglong)*(int *)pFVar2;
    if (*(int *)(pFVar2 + 4) < 0) {
      if (uVar1 < 0x10) {
        return false;
      }
      uVar4 = *(ulonglong *)(pFVar2 + 8);
      uVar6 = *(ulonglong *)pFVar2 & 0x7fffffffffffffff;
      lVar5 = 0x10;
    }
    else {
      lVar5 = 8;
    }
    if (((longlong)uVar6 <= param_2) && ((longlong)(lVar5 + uVar4) <= (longlong)uVar1)) {
      bVar3 = FOodleDataCompression::DecompressParallel(param_1,uVar6,pFVar2 + lVar5,uVar4);
      return bVar3;
    }
  }
  return false;
}

// DecompressToExistingBuffer @ 1415bcb90

bool __cdecl
FOodleCompressedArray::DecompressToExistingBuffer
          (void *param_1,long64 param_2,TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_3)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  
  if (7 < (uint)param_3->ArrayNum) {
    pFVar2 = (param_3->AllocatorInstance).Data;
    iVar1 = *(int *)(pFVar2 + 4);
    if (((-1 < iVar1) && (*(int *)pFVar2 <= param_2)) && (iVar1 + 8 <= param_3->ArrayNum)) {
      bVar3 = FOodleDataCompression::DecompressParallel
                        (param_1,(longlong)*(int *)pFVar2,pFVar2 + 8,(longlong)iVar1);
      return bVar3;
    }
  }
  return false;
}

