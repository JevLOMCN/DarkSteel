// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StorageServerClient
// Functions: 11

// DereferenceIfNecessary<FCookOnTheFlyPackageStoreBackend,FCookOnTheFlyPackageStoreBackend_*_&> @ 148cae170

FCookOnTheFlyPackageStoreBackend * __cdecl
UE::Core::Private::
DereferenceIfNecessary<FCookOnTheFlyPackageStoreBackend,FCookOnTheFlyPackageStoreBackend_*_&>
          (FCookOnTheFlyPackageStoreBackend **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<FStorageServerPlatformFile,FStorageServerPlatformFile_*_&> @ 148cae190

FStorageServerPlatformFile * __cdecl
UE::Core::Private::DereferenceIfNecessary<FStorageServerPlatformFile,FStorageServerPlatformFile_*_&>
          (FStorageServerPlatformFile **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<StorageServer::ICacheStrategy,StorageServer::ICacheStrategy_*_&> @ 148cae1b0

ICacheStrategy * __cdecl
UE::Core::Private::
DereferenceIfNecessary<StorageServer::ICacheStrategy,StorageServer::ICacheStrategy_*_&>
          (ICacheStrategy **param_1)

{
  return *param_1;
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<24576,32,TSizedDefaultAllocator<32>_>::ForElementType<StorageServer::FCacheStorageBlocking::FWriteOp>_> @ 148cb0db0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<24576,32,TSizedDefaultAllocator<32>_>::ForElementType<StorageServer::FCacheStorageBlocking::FWriteOp>_>
          (ushort param_1,ForElementType<StorageServer::FCacheStorageBlocking::FWriteOp> *param_2,
          int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    iVar8 = 0x6000;
    uVar7 = (ulonglong)(byte)param_1;
    if (0x6000 < uVar1) {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x6001) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<24576,32,TSizedDefaultAllocator<32>_>::
    ForElementType<StorageServer::FCacheStorageBlocking::FWriteOp>::ResizeAllocation
              (param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow<2,TSizedInlineAllocator<16777216,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_char>_> @ 148cb0e80

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<16777216,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_char>_>
          (uint param_1,uint param_2,int param_3,ForElementType<unsigned_char> *param_4,int *param_5
          ,int *param_6)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  
  iVar2 = *param_5;
  uVar6 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if (uVar6 - iVar2 < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    iVar7 = 0x1000000;
    uVar8 = (ulonglong)param_1;
    if (0x1000000 < uVar1) {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar6 < 0x1000001) {
        uVar6 = 0;
      }
      if (uVar6 == 0) {
        uVar3 = 4;
        if (4 < uVar5) {
          uVar3 = uVar5;
        }
      }
      else {
        uVar3 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar8 * uVar3,0);
      iVar7 = (int)(uVar4 / uVar8);
      if (iVar7 < (int)uVar1) {
        iVar7 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<16777216,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_char>::
    ResizeAllocation(param_4,iVar2,iVar7,uVar8);
    *param_6 = iVar7;
  }
  return iVar2;
}

// ReallocGrow<2,TSizedInlineAllocator<262144,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_char>_> @ 148cb0f60

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<262144,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_char>_>
          (uint param_1,uint param_2,int param_3,ForElementType<unsigned_char> *param_4,int *param_5
          ,int *param_6)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  
  iVar2 = *param_5;
  uVar6 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if (uVar6 - iVar2 < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    iVar7 = 0x40000;
    uVar8 = (ulonglong)param_1;
    if (0x40000 < uVar1) {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar6 < 0x40001) {
        uVar6 = 0;
      }
      if (uVar6 == 0) {
        uVar3 = 4;
        if (4 < uVar5) {
          uVar3 = uVar5;
        }
      }
      else {
        uVar3 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar8 * uVar3,0);
      iVar7 = (int)(uVar4 / uVar8);
      if (iVar7 < (int)uVar1) {
        iVar7 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<262144,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_char>::
    ResizeAllocation(param_4,iVar2,iVar7,uVar8);
    *param_6 = iVar7;
  }
  return iVar2;
}

// ReallocShrink<2,TSizedInlineAllocator<16777216,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_char>_> @ 148cb1040

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<16777216,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_char>_>
          (uint param_1,uint param_2,ForElementType<unsigned_char> *param_3,int param_4,int *param_5
          )

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  iVar2 = 0x1000000;
  if (0x1000000 < (uint)param_4) {
    iVar2 = iVar1;
    if ((((0x3fff < (longlong)(iVar1 - param_4) * uVar4) || (param_4 * 3 < iVar1 * 2)) &&
        ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (iVar2 = param_4, 0 < param_4)) {
      uVar3 = FMemory::QuantizeSize((longlong)param_4 * uVar4,0);
      iVar2 = (int)(uVar3 / uVar4);
    }
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<16777216,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_char>::
    ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocShrink<2,TSizedInlineAllocator<262144,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_char>_> @ 148cb1100

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<262144,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_char>_>
          (uint param_1,uint param_2,ForElementType<unsigned_char> *param_3,int param_4,int *param_5
          )

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  iVar2 = 0x40000;
  if (0x40000 < (uint)param_4) {
    iVar2 = iVar1;
    if ((((0x3fff < (longlong)(iVar1 - param_4) * uVar4) || (param_4 * 3 < iVar1 * 2)) &&
        ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (iVar2 = param_4, 0 < param_4)) {
      uVar3 = FMemory::QuantizeSize((longlong)param_4 * uVar4,0);
      iVar2 = (int)(uVar3 / uVar4);
    }
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<262144,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_char>::
    ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<16777216,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_char>_> @ 148cb11c0

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<16777216,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_char>_>
          (uint param_1,uint param_2,int param_3,ForElementType<unsigned_char> *param_4,int param_5,
          int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 0x1000001) {
      iVar1 = 0x1000000;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<16777216,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_char>::
    ResizeAllocation(param_4,param_5,iVar1,uVar3);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<262144,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_char>_> @ 148cb1240

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<262144,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_char>_>
          (uint param_1,uint param_2,int param_3,ForElementType<unsigned_char> *param_4,int param_5,
          int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 0x40001) {
      iVar1 = 0x40000;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<262144,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_char>::
    ResizeAllocation(param_4,param_5,iVar1,uVar3);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<24576,32,TSizedDefaultAllocator<32>_>::ForElementType<StorageServer::FCacheStorageBlocking::FWriteOp>_> @ 148cb12c0

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<24576,32,TSizedDefaultAllocator<32>_>::ForElementType<StorageServer::FCacheStorageBlocking::FWriteOp>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<StorageServer::FCacheStorageBlocking::FWriteOp> *param_4,int param_5,
          int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 0x6001) {
      iVar1 = 0x6000;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<24576,32,TSizedDefaultAllocator<32>_>::
    ForElementType<StorageServer::FCacheStorageBlocking::FWriteOp>::ResizeAllocation
              (param_4,param_5,iVar1,uVar3);
  }
  return;
}

