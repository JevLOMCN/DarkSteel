// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PakFile
// Functions: 14

// DereferenceIfNecessary<FPakPlatformFile,FPakPlatformFile_*_&> @ 142a3d000

FPakPlatformFile * __cdecl
UE::Core::Private::DereferenceIfNecessary<FPakPlatformFile,FPakPlatformFile_*_&>
          (FPakPlatformFile **param_1)

{
  return *param_1;
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FFileIoStoreCompressedBlock_*>_> @ 142a4c950

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FFileIoStoreCompressedBlock_*>_>
          (ushort param_1,ForElementType<FFileIoStoreCompressedBlock_*> *param_2,int *param_3)

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
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 9) {
      iVar8 = 8;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 9) {
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
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FFileIoStoreCompressedBlock_*>::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FFileIoStoreReadRequest_*>_> @ 142a4ca20

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FFileIoStoreReadRequest_*>_>
          (ushort param_1,ForElementType<FFileIoStoreReadRequest_*> *param_2,int *param_3)

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
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 3) {
      iVar8 = 2;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 3) {
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
    TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FFileIoStoreReadRequest_*>::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FPakProcessedReadRequest_*>_> @ 142a4caf0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FPakProcessedReadRequest_*>_>
          (ushort param_1,ForElementType<FPakProcessedReadRequest_*> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar6 = 4;
    uVar7 = (ulonglong)(byte)param_1;
    if (4 < uVar1) {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 5) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      uVar3 = (uint)(uVar4 / uVar7);
      if ((int)uVar3 < (int)uVar1) {
        uVar3 = 0x7fffffff;
      }
      uVar6 = (ulonglong)uVar3;
    }
    TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FPakProcessedReadRequest_*>::ResizeAllocation(param_2,uVar2,(int)uVar6,uVar7);
    *param_3 = (int)uVar6;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FPakPlatformFile::FPakListEntry_const_*>_> @ 142a4cbb0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FPakPlatformFile::FPakListEntry_const_*>_>
          (ushort param_1,ForElementType<FPakPlatformFile::FPakListEntry_const_*> *param_2,
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
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 2) {
      iVar8 = 1;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 2) {
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
    TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FPakPlatformFile::FPakListEntry_const_*>::ResizeAllocation
              (param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FFileIoStoreBlockScatter>_> @ 142a4cc80

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FFileIoStoreBlockScatter>_>
          (ushort param_1,ForElementType<FFileIoStoreBlockScatter> *param_2,int *param_3)

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
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 3) {
      iVar8 = 2;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 3) {
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
    TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FFileIoStoreBlockScatter>::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::FIoScatterGatherRequestParams::FScatterParams>_> @ 142a4cd50

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::FIoScatterGatherRequestParams::FScatterParams>_>
          (ushort param_1,ForElementType<UE::FIoScatterGatherRequestParams::FScatterParams> *param_2
          ,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar6 = 4;
    uVar7 = (ulonglong)(byte)param_1;
    if (4 < uVar1) {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 5) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      uVar3 = (uint)(uVar4 / uVar7);
      if ((int)uVar3 < (int)uVar1) {
        uVar3 = 0x7fffffff;
      }
      uVar6 = (ulonglong)uVar3;
    }
    TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::FIoScatterGatherRequestParams::FScatterParams>::ResizeAllocation
              (param_2,uVar2,(int)uVar6,uVar7);
    *param_3 = (int)uVar6;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::ForElementType<TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>::FIteratorInternal::FStackData>_> @ 142a4ce10

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::ForElementType<TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>::FIteratorInternal::FStackData>_>
          (ushort param_1,
          ForElementType<TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>::FIteratorInternal::FStackData>
          *param_2,int *param_3)

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
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 0xb) {
      iVar8 = 10;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0xb) {
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
    TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::
    ForElementType<TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>::FIteratorInternal::FStackData>
    ::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocShrink<2,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::ForElementType<TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>::FIteratorInternal::FStackData>_> @ 142a4cee0

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::ForElementType<TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>::FIteratorInternal::FStackData>_>
          (uint param_1,uint param_2,
          ForElementType<TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>::FIteratorInternal::FStackData>
          *param_3,int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  if ((uint)param_4 < 0xb) {
    iVar2 = 10;
  }
  else {
    iVar2 = iVar1;
    if ((((0x3fff < (longlong)(iVar1 - param_4) * uVar4) || (param_4 * 3 < iVar1 * 2)) &&
        ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (iVar2 = param_4, 0 < param_4)) {
      uVar3 = FMemory::QuantizeSize((longlong)param_4 * uVar4,0);
      iVar2 = (int)(uVar3 / uVar4);
    }
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::
    ForElementType<TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>::FIteratorInternal::FStackData>
    ::ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

// MakeFileIoDispatcherBackend @ 142a834b0

TSharedPtr<UE::IoStore::IFileIoDispatcherBackend,1> * __cdecl
UE::IoStore::MakeFileIoDispatcherBackend
          (TSharedPtr<UE::IoStore::IFileIoDispatcherBackend,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedPtr<UE::IoStore::IFileIoDispatcherBackend,1> *pTVar5;
  longlong lVar6;
  TReferenceControllerBase<1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  
  pTVar3 = ::operator_new(0x68);
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (IFileIoDispatcherBackend *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFFileIoDispatcherBackend_IoStore_UE___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FFileIoDispatcherBackend_IoStore_UE__6B_;
    pTVar3[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[2]._padding_ = 0;
    pTVar3[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[3]._padding_ = 0;
    pTVar3[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[3].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar3[4]._padding_ = 1;
    pTVar3[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[4].WeakReferenceCount = (atomic<int>)0x0;
    pTVar4 = ::operator_new(0x48008);
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      memset((void *)((longlong)&pTVar4->_padding_ + 4),0,0x48004);
      lVar6 = 0x1000;
      *(undefined4 *)&pTVar4->_padding_ = 0;
      pTVar7 = pTVar4;
      do {
        pTVar7 = (TReferenceControllerBase<1> *)&pTVar7[4].SharedReferenceCount;
        *(undefined8 *)&((atomic<int> *)pTVar7)->field_0x0 = 0;
        lVar6 = lVar6 + -1;
        pTVar8 = pTVar4;
      } while (lVar6 != 0);
    }
    *(TReferenceControllerBase<1> **)&pTVar3[4].SharedReferenceCount = pTVar8;
    pTVar3[5]._padding_ = 0;
    pTVar3[5].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[5].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined1 *)&pTVar3[6]._padding_ = 0;
    if ((pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TSharedPtr<UE::IoStore::IFileIoDispatcherBackend,1> *)(*pcVar1)();
      return pTVar5;
    }
    __return_storage_ptr__->Object = (IFileIoDispatcherBackend *)(pTVar3 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    pTVar8 = pTVar3;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  return __return_storage_ptr__;
}

// SortByEntryOffset @ 142aa0a90

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UE::FilePackageStorePrivate::SortByEntryOffset
          (TArray<TTuple<FPackageId,UE::FilePackageStorePrivate::FEntryHandle>,TSizedDefaultAllocator<32>_>
           *param_1)

{
  FScriptContainerElement *pFVar1;
  undefined8 uVar2;
  bool bVar3;
  <lambda_1> local_res8 [8];
  TArray<TTuple<FPackageId,UE::FilePackageStorePrivate::FEntryHandle>,TSizedDefaultAllocator<32>_>
  local_18;
  
  bVar3 = -1 < CpuChannel->Enabled;
  if (bVar3) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId80,"SortByEntryOffset",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\FilePackageStore.cpp"
               ,0x50);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId80);
  }
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  TArray<TTuple<FPackageId,UE::FilePackageStorePrivate::FEntryHandle>,TSizedDefaultAllocator<32>_>::
  SetNumUninitialized(&local_18,param_1->ArrayNum,Default);
  RadixSort32<TTuple<FPackageId,UE::FilePackageStorePrivate::FEntryHandle>,int,_UE::FilePackageStorePrivate::SortByEntryOffset_::__l2::<lambda_1>_>
            ((TTuple<FPackageId,UE::FilePackageStorePrivate::FEntryHandle> *)
             local_18.AllocatorInstance.Data,
             (TTuple<FPackageId,UE::FilePackageStorePrivate::FEntryHandle> *)
             (param_1->AllocatorInstance).Data,param_1->ArrayNum,local_res8);
  pFVar1 = (param_1->AllocatorInstance).Data;
  uVar2._0_4_ = param_1->ArrayNum;
  uVar2._4_4_ = param_1->ArrayMax;
  (param_1->AllocatorInstance).Data = local_18.AllocatorInstance.Data;
  param_1->ArrayNum = local_18.ArrayNum;
  param_1->ArrayMax = local_18.ArrayMax;
  local_18.AllocatorInstance.Data = pFVar1;
  local_18._8_8_ = uVar2;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// SortBySlotIndex @ 142aa0b50

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UE::FilePackageStorePrivate::SortBySlotIndex
          (TArray<TTuple<FPackageId,UE::FilePackageStorePrivate::FEntryHandle>,TSizedDefaultAllocator<32>_>
           *param_1)

{
  FScriptContainerElement *pFVar1;
  undefined8 uVar2;
  bool bVar3;
  <lambda_1> local_res8 [8];
  TArray<TTuple<FPackageId,UE::FilePackageStorePrivate::FEntryHandle>,TSizedDefaultAllocator<32>_>
  local_18;
  
  bVar3 = -1 < CpuChannel->Enabled;
  if (bVar3) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId89,"SortBySlotIndex",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\FilePackageStore.cpp"
               ,0x59);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId89);
  }
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  TArray<TTuple<FPackageId,UE::FilePackageStorePrivate::FEntryHandle>,TSizedDefaultAllocator<32>_>::
  SetNumUninitialized(&local_18,param_1->ArrayNum,Default);
  RadixSort32<TTuple<FPackageId,UE::FilePackageStorePrivate::FEntryHandle>,int,_UE::FilePackageStorePrivate::SortBySlotIndex_::__l2::<lambda_1>_>
            ((TTuple<FPackageId,UE::FilePackageStorePrivate::FEntryHandle> *)
             local_18.AllocatorInstance.Data,
             (TTuple<FPackageId,UE::FilePackageStorePrivate::FEntryHandle> *)
             (param_1->AllocatorInstance).Data,param_1->ArrayNum,local_res8);
  pFVar1 = (param_1->AllocatorInstance).Data;
  uVar2._0_4_ = param_1->ArrayNum;
  uVar2._4_4_ = param_1->ArrayMax;
  (param_1->AllocatorInstance).Data = local_18.AllocatorInstance.Data;
  param_1->ArrayNum = local_18.ArrayNum;
  param_1->ArrayMax = local_18.ArrayMax;
  local_18.AllocatorInstance.Data = pFVar1;
  local_18._8_8_ = uVar2;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Split @ 142aa0c10

FPackageIdKey * __cdecl
UE::FilePackageStorePrivate::Split
          (FPackageIdKey *__return_storage_ptr__,FPackageId param_1,uint param_2)

{
  code *pcVar1;
  bool bVar2;
  FPackageIdKey *pFVar3;
  
  if (param_1.Id == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PID.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\FilePackageStore.cpp"
                       ,0x30,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FPackageIdKey *)(*pcVar1)();
      return pFVar3;
    }
  }
  if (0xf < param_2 - 0x11) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SlotBits >= MinSlotBits && SlotBits <= MaxSlotBits",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\FilePackageStore.cpp"
                       ,0x31,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FPackageIdKey *)(*pcVar1)();
      return pFVar3;
    }
  }
  __return_storage_ptr__->SlotIndex = (uint)(param_1.Id >> (0x40U - (char)param_2 & 0x3f));
  __return_storage_ptr__->Half = (uint)(param_1.Id >> 0xf);
  __return_storage_ptr__->Quarter = (ushort)param_1.Id & 0x7fff;
  return __return_storage_ptr__;
}

// ToArray @ 142aa3aa0

TArray<TTuple<FPackageId,UE::FilePackageStorePrivate::FEntryHandle>,TSizedDefaultAllocator<32>_> *
__cdecl UE::FilePackageStorePrivate::ToArray
                  (TArray<TTuple<FPackageId,UE::FilePackageStorePrivate::FEntryHandle>,TSizedDefaultAllocator<32>_>
                   *__return_storage_ptr__,FPackageIdMap *param_1)

{
  int *piVar1;
  ushort *puVar2;
  uint *puVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  TArray<TTuple<FPackageId,UE::FilePackageStorePrivate::FEntryHandle>,TSizedDefaultAllocator<32>_>
  *pTVar8;
  byte bVar9;
  uint uVar10;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong uVar11;
  
  uVar12 = 0;
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  uVar13 = param_1->MaxValues;
  uVar14 = (ulonglong)uVar13;
  if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum(uVar14);
  }
  if (0 < (int)uVar13) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar13,&__return_storage_ptr__->AllocatorInstance,0,piVar1);
    uVar14 = (ulonglong)param_1->MaxValues;
  }
  puVar2 = param_1->Values;
  puVar3 = param_1->Slots;
  bVar9 = (byte)param_1->SlotBits;
  uVar13 = 1 << (bVar9 & 0x1f);
  if (param_1->SlotBits == 0) {
    uVar13 = 0;
  }
  uVar11 = uVar12;
  if (uVar13 != 0) {
    do {
      if (puVar3[uVar11] != 0xffffffff) {
        uVar12 = (ulonglong)puVar3[uVar11];
        goto LAB_142aa3b4b;
      }
      uVar10 = (int)uVar11 + 1;
      uVar11 = (ulonglong)uVar10;
    } while (uVar10 < uVar13);
  }
  if ((uint)uVar11 < uVar13) {
LAB_142aa3b4b:
    do {
      uStack_40 = *(undefined4 *)(puVar2 + uVar12 * 2 + uVar14 * 3);
      uVar10 = (uint)uVar11;
      local_48 = (ulonglong)*(uint *)(puVar2 + uVar14 + uVar12 * 2) << 0xf |
                 (ulonglong)(puVar2[uVar12] & 0x7fff) | uVar11 << (0x40 - bVar9 & 0x3f);
      pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
      if (((pFVar4 <= (FScriptContainerElement *)&local_48) &&
          ((FScriptContainerElement *)&local_48 < pFVar4 + (longlong)*piVar1 * 0x10)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        pTVar8 = (TArray<TTuple<FPackageId,UE::FilePackageStorePrivate::FEntryHandle>,TSizedDefaultAllocator<32>_>
                  *)(*pcVar5)();
        return pTVar8;
      }
      iVar7 = __return_storage_ptr__->ArrayNum;
      if (iVar7 == *piVar1) {
        iVar7 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&__return_storage_ptr__->AllocatorInstance,piVar1);
      }
      __return_storage_ptr__->ArrayNum = iVar7 + 1;
      pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 0x10;
      *(ulonglong *)pFVar4 = local_48;
      *(ulonglong *)(pFVar4 + 8) = CONCAT44(uStack_3c,uStack_40);
      if ((uVar13 <= uVar10) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("*this",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\FilePackageStore.cpp"
                             ,0xec,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        pTVar8 = (TArray<TTuple<FPackageId,UE::FilePackageStorePrivate::FEntryHandle>,TSizedDefaultAllocator<32>_>
                  *)(*pcVar5)();
        return pTVar8;
      }
      if ((short)puVar2[uVar12] < 0) {
        do {
          uVar10 = uVar10 + 1;
          uVar11 = (ulonglong)uVar10;
          if (uVar13 <= uVar10) goto LAB_142aa3c9d;
        } while (puVar3[uVar11] == 0xffffffff);
        if (uVar10 < uVar13) {
          uVar12 = (ulonglong)puVar3[uVar11];
        }
        else {
LAB_142aa3c9d:
          uVar12 = 0;
        }
      }
      else {
        uVar10 = (int)uVar12 + 1;
        uVar12 = (ulonglong)uVar10;
        if (((uint)uVar14 <= uVar10) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("ValueIdx < MaxValues",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\FilePackageStore.cpp"
                               ,0xf6,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          pTVar8 = (TArray<TTuple<FPackageId,UE::FilePackageStorePrivate::FEntryHandle>,TSizedDefaultAllocator<32>_>
                    *)(*pcVar5)();
          return pTVar8;
        }
      }
    } while ((uint)uVar11 < uVar13);
  }
  return __return_storage_ptr__;
}

