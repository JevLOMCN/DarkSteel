// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 38

// <lambda_invoker_cdecl> @ 14166edd0

FPlatformVirtualMemoryBlock * __cdecl
`FMallocBinnedGPU::FMallocBinnedGPU'::__l2::<lambda_1>::<lambda_invoker_cdecl>
          (FPlatformVirtualMemoryBlock *__return_storage_ptr__,ulong64 param_1)

{
  ulong64 uVar1;
  
  uVar1 = FWindowsPlatformMemory::FPlatformVirtualMemoryBlock::GetCommitAlignment();
  FWindowsPlatformMemory::FPlatformVirtualMemoryBlock::AllocateVirtual
            (__return_storage_ptr__,param_1,uVar1);
  return __return_storage_ptr__;
}

// <lambda_invoker_cdecl> @ 14166ee10

void * __cdecl
`FMallocBinnedGPU::FMallocBinnedGPU'::__l2::<lambda_2>::<lambda_invoker_cdecl>
          (ulong64 param_1,ulong64 param_2,ulong64 *param_3,uint *param_4)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  void *local_18;
  uint local_10;
  
  FWindowsPlatformMemory::FPlatformVirtualMemoryBlock::AllocateVirtual
            ((FPlatformVirtualMemoryBlock *)&local_18,param_1,param_2);
  if (((ulonglong)local_18 & param_2 - 1) != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsAligned(Block.GetVirtualPointer(), Alignment)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinnedGPU.cpp"
                       ,0x21d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pvVar3 = (void *)(*pcVar1)();
      return pvVar3;
    }
  }
  uVar4 = FWindowsPlatformMemory::FPlatformVirtualMemoryBlock::GetCommitAlignment();
  uVar5 = (param_1 - 1) + uVar4 & -uVar4;
  *param_3 = uVar5;
  FWindowsPlatformMemory::FPlatformVirtualMemoryBlock::Commit
            ((FPlatformVirtualMemoryBlock *)&local_18,0,uVar5);
  *param_4 = local_10;
  return local_18;
}

// <lambda_invoker_cdecl> @ 14166eec0

void __cdecl
`FMallocBinnedGPU::FMallocBinnedGPU'::__l2::<lambda_3>::<lambda_invoker_cdecl>
          (void *param_1,uint param_2)

{
  void *local_18;
  uint local_10;
  
  local_18 = param_1;
  local_10 = param_2;
  FWindowsPlatformMemory::FPlatformVirtualMemoryBlock::FreeVirtual
            ((FPlatformVirtualMemoryBlock *)&local_18);
  return;
}

// FMallocBinnedGPU @ 14167a180

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FMallocBinnedGPU * __thiscall FMallocBinnedGPU::FMallocBinnedGPU(FMallocBinnedGPU *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong64 uVar3;
  longlong *plVar4;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 uStack_40;
  longlong local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  this->_padding_ = (longlong)&___7FMallocBinnedGPU__6B_;
  (this->SmallPoolTables).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SmallPoolTables).ArrayNum = 0;
  (this->SmallPoolTables).ArrayMax = 0;
  this->HashBucketFreeList = (PoolHashBucket *)0x0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->Mutex,4000);
  (this->GGlobalRecycler).Bundles.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GGlobalRecycler).Bundles.ArrayNum = 0;
  (this->GGlobalRecycler).Bundles.ArrayMax = 0;
  (this->PtrToPoolMapping).PtrToPoolPageBitShift = 0;
  (this->PtrToPoolMapping).HashKeyShift = 0;
  (this->PtrToPoolMapping).PoolMask = 0;
  (this->PtrToPoolMapping).MaxHashBuckets = 0;
  (this->ArenaParams).AddressLimit = 0x40000000;
  (this->ArenaParams).BasePageSize = 0x1000;
  (this->ArenaParams).AllocationGranularity = 0x1000;
  (this->ArenaParams).MaxSizePerBundle = 0x2000;
  (this->ArenaParams).MaxStandardPoolSize = 0x20000;
  (this->ArenaParams).MaxBlocksPerBundle = 0x40;
  (this->ArenaParams).MaxMemoryPerBlockSizeShift = '\x1d';
  (this->ArenaParams).EmptyCacheAllocExtra = ' ';
  (this->ArenaParams).MaxGlobalBundles = ' ';
  (this->ArenaParams).MinimumAlignmentShift = '\x04';
  (this->ArenaParams).bUseSeparateVMPerPool = true;
  (this->ArenaParams).bPerThreadCaches = true;
  (this->ArenaParams).bUseStandardSmallPoolSizes = true;
  (this->ArenaParams).bAttemptToAlignSmallBocks = true;
  (this->ArenaParams).AdditionalBlockSizes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ArenaParams).AdditionalBlockSizes.ArrayNum = 0;
  (this->ArenaParams).AdditionalBlockSizes.ArrayMax = 0;
  *(undefined8 *)&(this->ArenaParams).ReserveVM = 0;
  *(undefined8 *)&(this->ArenaParams).ReserveVM.field_0x28 = 0;
  *(undefined8 *)&(this->ArenaParams).LargeBlockAlloc = 0;
  *(undefined8 *)&(this->ArenaParams).LargeBlockAlloc.field_0x28 = 0;
  *(undefined8 *)&(this->ArenaParams).LargeBlockFree = 0;
  *(undefined8 *)&(this->ArenaParams).LargeBlockFree.field_0x28 = 0;
  (this->SmallBlockSizesReversedShifted).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SmallBlockSizesReversedShifted).ArrayNum = 0;
  (this->SmallBlockSizesReversedShifted).ArrayMax = 0;
  this->BinnedGPUTlsSlot = 0xffffffff;
  *(undefined8 *)&this->PoolBaseVMBlock = 0;
  *(undefined4 *)&(this->PoolBaseVMBlock).field_0x8 = 0;
  (this->PoolBaseVMPtr).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PoolBaseVMPtr).ArrayNum = 0;
  (this->PoolBaseVMPtr).ArrayMax = 0;
  (this->PoolBaseVMBlocks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PoolBaseVMBlocks).ArrayNum = 0;
  (this->PoolBaseVMBlocks).ArrayMax = 0;
  (this->MemSizeToIndex).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MemSizeToIndex).ArrayNum = 0;
  (this->MemSizeToIndex).ArrayMax = 0;
  this->BinnedGPUAllocatedSmallPoolMemory = 0;
  this->BinnedGPUAllocatedOSSmallPoolMemory = 0;
  this->BinnedGPUAllocatedLargePoolMemory = 0;
  this->BinnedGPUAllocatedLargePoolMemoryWAlignment = 0;
  this->BinnedGPUPoolInfoMemory = 0;
  this->BinnedGPUHashMemory = 0;
  this->BinnedGPUFreeBitsMemory = 0;
  this->BinnedGPUTLSMemory = 0;
  this->ConsolidatedMemory = (TAtomic<__int64>)0x0;
  this->GPUProxyMemory = (TAtomic<__int64>)0x0;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&this->FreeBlockListsRegistrationMutex,4000);
  (this->RegisteredFreeBlockLists).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RegisteredFreeBlockLists).ArrayNum = 0;
  (this->RegisteredFreeBlockLists).ArrayMax = 0;
  (this->MallocedPointers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MallocedPointers).ArrayNum = 0;
  (this->MallocedPointers).ArrayMax = 0;
  LOCK();
  this->ConsolidatedMemory = (TAtomic<__int64>)0x0;
  UNLOCK();
  LOCK();
  this->GPUProxyMemory = (TAtomic<__int64>)0x0;
  UNLOCK();
  (this->ArenaParams).BasePageSize = 0x1000;
  uVar3 = FWindowsPlatformMemory::FPlatformVirtualMemoryBlock::GetCommitAlignment();
  (this->ArenaParams).AllocationGranularity = (uint)uVar3;
  local_48 = *(longlong *)&(this->ArenaParams).ReserveVM;
  uVar2 = *(undefined8 *)&(this->ArenaParams).ReserveVM.field_0x8;
  local_38 = *(longlong *)&(this->ArenaParams).ReserveVM.field_0x10;
  uStack_30 = *(undefined8 *)&(this->ArenaParams).ReserveVM.field_0x18;
  uVar1 = *(undefined8 *)&(this->ArenaParams).ReserveVM.field_0x20;
  plStack_20 = *(longlong **)&(this->ArenaParams).ReserveVM.field_0x28;
  *(code **)&(this->ArenaParams).ReserveVM =
       UE::Core::Private::Function::
       TFunctionRefCaller<FWindowsPlatformMemory::FPlatformVirtualMemoryBlock_(__cdecl*)(unsigned___int64),FWindowsPlatformMemory::FPlatformVirtualMemoryBlock,unsigned___int64>
       ::Call;
  *(undefined8 *)&(this->ArenaParams).ReserveVM.field_0x8 = uStack_40;
  *(undefined4 *)&(this->ArenaParams).ReserveVM.field_0x10 = 0x50662cb0;
  *(undefined4 *)&(this->ArenaParams).ReserveVM.field_0x14 = 1;
  *(undefined4 *)&(this->ArenaParams).ReserveVM.field_0x18 = 0x4166edd0;
  *(undefined4 *)&(this->ArenaParams).ReserveVM.field_0x1c = 1;
  *(undefined4 *)&(this->ArenaParams).ReserveVM.field_0x20 = (undefined4)local_28;
  *(undefined4 *)&(this->ArenaParams).ReserveVM.field_0x24 = local_28._4_4_;
  *(undefined4 *)&(this->ArenaParams).ReserveVM.field_0x28 = 0;
  *(undefined4 *)&(this->ArenaParams).ReserveVM.field_0x2c = 0;
  local_28 = uVar1;
  uStack_40 = uVar2;
  if (local_48 != 0) {
    plVar4 = &local_38;
    if (plStack_20 != (longlong *)0x0) {
      plVar4 = plStack_20;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  local_48 = *(longlong *)&(this->ArenaParams).LargeBlockAlloc;
  uVar2 = *(undefined8 *)&(this->ArenaParams).LargeBlockAlloc.field_0x8;
  local_38 = *(longlong *)&(this->ArenaParams).LargeBlockAlloc.field_0x10;
  uStack_30 = *(undefined8 *)&(this->ArenaParams).LargeBlockAlloc.field_0x18;
  uVar1 = *(undefined8 *)&(this->ArenaParams).LargeBlockAlloc.field_0x20;
  plStack_20 = *(longlong **)&(this->ArenaParams).LargeBlockAlloc.field_0x28;
  *(code **)&(this->ArenaParams).LargeBlockAlloc =
       UE::Core::Private::Function::
       TFunctionRefCaller<void_*_(__cdecl*)(unsigned___int64,unsigned___int64,unsigned___int64_&,unsigned_int_&),void_*,unsigned___int64,unsigned___int64,unsigned___int64_&,unsigned_int_&>
       ::Call;
  *(undefined8 *)&(this->ArenaParams).LargeBlockAlloc.field_0x8 = uStack_40;
  *(undefined4 *)&(this->ArenaParams).LargeBlockAlloc.field_0x10 = 0x50662cd0;
  *(undefined4 *)&(this->ArenaParams).LargeBlockAlloc.field_0x14 = 1;
  *(undefined4 *)&(this->ArenaParams).LargeBlockAlloc.field_0x18 = 0x4166ee10;
  *(undefined4 *)&(this->ArenaParams).LargeBlockAlloc.field_0x1c = 1;
  *(undefined4 *)&(this->ArenaParams).LargeBlockAlloc.field_0x20 = (undefined4)local_28;
  *(undefined4 *)&(this->ArenaParams).LargeBlockAlloc.field_0x24 = local_28._4_4_;
  *(undefined4 *)&(this->ArenaParams).LargeBlockAlloc.field_0x28 = 0;
  *(undefined4 *)&(this->ArenaParams).LargeBlockAlloc.field_0x2c = 0;
  local_28 = uVar1;
  uStack_40 = uVar2;
  if (local_48 != 0) {
    plVar4 = &local_38;
    if (plStack_20 != (longlong *)0x0) {
      plVar4 = plStack_20;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  local_48 = *(longlong *)&(this->ArenaParams).LargeBlockFree;
  uVar2 = *(undefined8 *)&(this->ArenaParams).LargeBlockFree.field_0x8;
  local_38 = *(longlong *)&(this->ArenaParams).LargeBlockFree.field_0x10;
  uStack_30 = *(undefined8 *)&(this->ArenaParams).LargeBlockFree.field_0x18;
  uVar1 = *(undefined8 *)&(this->ArenaParams).LargeBlockFree.field_0x20;
  plStack_20 = *(longlong **)&(this->ArenaParams).LargeBlockFree.field_0x28;
  *(code **)&(this->ArenaParams).LargeBlockFree =
       UE::Core::Private::Function::
       TFunctionRefCaller<void_(__cdecl*)(void_*,unsigned_int),void,void_*,unsigned_int>::Call;
  *(undefined8 *)&(this->ArenaParams).LargeBlockFree.field_0x8 = uStack_40;
  *(undefined4 *)&(this->ArenaParams).LargeBlockFree.field_0x10 = 0x50662cf0;
  *(undefined4 *)&(this->ArenaParams).LargeBlockFree.field_0x14 = 1;
  *(undefined4 *)&(this->ArenaParams).LargeBlockFree.field_0x18 = 0x4166eec0;
  *(undefined4 *)&(this->ArenaParams).LargeBlockFree.field_0x1c = 1;
  *(undefined4 *)&(this->ArenaParams).LargeBlockFree.field_0x20 = (undefined4)local_28;
  *(undefined4 *)&(this->ArenaParams).LargeBlockFree.field_0x24 = local_28._4_4_;
  *(undefined4 *)&(this->ArenaParams).LargeBlockFree.field_0x28 = 0;
  *(undefined4 *)&(this->ArenaParams).LargeBlockFree.field_0x2c = 0;
  local_28 = uVar1;
  if (local_48 != 0) {
    plVar4 = &local_38;
    if (plStack_20 != (longlong *)0x0) {
      plVar4 = plStack_20;
    }
    uStack_40 = uVar2;
    (**(code **)(*plVar4 + 0x10))();
  }
  return this;
}

// ~FMallocBinnedGPU @ 14167c0a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FMallocBinnedGPU::~FMallocBinnedGPU(FMallocBinnedGPU *this)

{
  int iVar1;
  void *pvVar2;
  longlong lVar3;
  FBundleNode *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  FScriptContainerElement *pFVar10;
  ulonglong uVar11;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  FBundleNode *pFVar14;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  FScriptContainerElement *local_res18;
  FScriptContainerElement *local_res20;
  
  this->_padding_ = (longlong)&___7FMallocBinnedGPU__6B_;
  EnterCriticalSection((LPCRITICAL_SECTION)&this->Mutex);
  EnterCriticalSection((LPCRITICAL_SECTION)&this->FreeBlockListsRegistrationMutex);
  if (1 < (byte)LogCore._0_1_) {
    if (0 < this->BinnedGPUAllocatedOSSmallPoolMemory) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCore);
    }
    if ((1 < (byte)LogCore._0_1_) && (0 < this->BinnedGPUAllocatedLargePoolMemoryWAlignment)) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCore);
    }
  }
  pFVar12 = (this->RegisteredFreeBlockLists).AllocatorInstance.Data;
  iVar1 = (this->RegisteredFreeBlockLists).ArrayNum;
  pFVar10 = pFVar12 + (longlong)iVar1 * 8;
  local_res20 = pFVar10;
  do {
    local_res18 = pFVar12;
    if ((this->RegisteredFreeBlockLists).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FMallocBinnedGPU::FPerThreadFreeBlockLists_*,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    uVar9 = 0;
    if (pFVar12 == pFVar10) {
      if ((this->ArenaParams).bUseSeparateVMPerPool == false) {
        FWindowsPlatformMemory::FPlatformVirtualMemoryBlock::FreeVirtual(&this->PoolBaseVMBlock);
      }
      else if ((this->ArenaParams).PoolCount != '\0') {
        do {
          uVar8 = (uint)uVar9;
          uVar7 = 0;
          if ((int)uVar8 < (this->PoolBaseVMBlocks).ArrayNum) {
            uVar7 = ~uVar8 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          FWindowsPlatformMemory::FPlatformVirtualMemoryBlock::FreeVirtual
                    ((FPlatformVirtualMemoryBlock *)
                     ((this->PoolBaseVMBlocks).AllocatorInstance.Data + (longlong)(int)uVar8 * 0x10)
                    );
          uVar9 = (ulonglong)(uVar8 + 1);
        } while (uVar8 + 1 != (uint)(this->ArenaParams).PoolCount);
      }
      pFVar12 = (this->MallocedPointers).AllocatorInstance.Data;
      iVar1 = (this->MallocedPointers).ArrayNum;
      pFVar10 = pFVar12 + (longlong)iVar1 * 8;
      while( true ) {
        if ((this->MallocedPointers).ArrayNum != iVar1) {
          `TCheckedPointerIterator<void_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res10);
        }
        if (pFVar12 == pFVar10) break;
        FMemory::Free(*(void **)pFVar12);
        pFVar12 = pFVar12 + 8;
      }
      TlsFree(this->BinnedGPUTlsSlot);
      LeaveCriticalSection((LPCRITICAL_SECTION)&this->FreeBlockListsRegistrationMutex);
      LeaveCriticalSection((LPCRITICAL_SECTION)&this->Mutex);
      pFVar10 = (this->MallocedPointers).AllocatorInstance.Data;
      if (pFVar10 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar10);
      }
      pFVar10 = (this->RegisteredFreeBlockLists).AllocatorInstance.Data;
      if (pFVar10 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar10);
      }
      DeleteCriticalSection((LPCRITICAL_SECTION)&this->FreeBlockListsRegistrationMutex);
      pFVar10 = (this->MemSizeToIndex).AllocatorInstance.Data;
      if (pFVar10 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar10);
      }
      pFVar10 = (this->PoolBaseVMBlocks).AllocatorInstance.Data;
      if (pFVar10 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar10);
      }
      pFVar10 = (this->PoolBaseVMPtr).AllocatorInstance.Data;
      if (pFVar10 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar10);
      }
      pFVar10 = (this->SmallBlockSizesReversedShifted).AllocatorInstance.Data;
      if (pFVar10 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar10);
      }
      FArenaParams::~FArenaParams(&this->ArenaParams);
      pFVar10 = (this->GGlobalRecycler).Bundles.AllocatorInstance.Data;
      if (pFVar10 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar10);
      }
      DeleteCriticalSection((LPCRITICAL_SECTION)&this->Mutex);
      pFVar10 = (this->SmallPoolTables).AllocatorInstance.Data;
      if (pFVar10 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar10);
      }
      FExec::~FExec((FExec *)this);
      return;
    }
    pvVar2 = *(void **)pFVar12;
    if (pvVar2 != (void *)0x0) {
      uVar11 = uVar9;
      if ((this->ArenaParams).PoolCount != '\0') {
        do {
          uVar8 = (uint)uVar9;
          uVar7 = 0;
          if ((int)uVar8 < *(int *)((longlong)pvVar2 + 0x10)) {
            uVar7 = ~uVar8 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          lVar3 = *(longlong *)((longlong)pvVar2 + 8);
          pFVar4 = *(FBundleNode **)(lVar3 + uVar11);
          if (pFVar4 != (FBundleNode *)0x0) {
            *(undefined8 *)(lVar3 + uVar11) = 0;
            *(undefined4 *)(lVar3 + 8 + uVar11) = 0;
            (pFVar4->field1_0x8).NextBundle = (FBundleNode *)0x0;
          }
          pFVar14 = *(FBundleNode **)(lVar3 + 0x10 + uVar11);
          if (pFVar14 != (FBundleNode *)0x0) {
            *(undefined8 *)(lVar3 + 0x10 + uVar11) = 0;
            *(undefined4 *)(lVar3 + 0x18 + uVar11) = 0;
            (pFVar14->field1_0x8).NextBundle = (FBundleNode *)0x0;
          }
          if (pFVar4 == (FBundleNode *)0x0) {
            if (pFVar14 != (FBundleNode *)0x0) goto LAB_14167c266;
          }
          else {
            (pFVar4->field1_0x8).NextBundle = pFVar14;
            pFVar14 = pFVar4;
LAB_14167c266:
            uVar13 = ((this->ArenaParams).PoolCount - uVar8) - 1;
            uVar7 = 0;
            if ((int)uVar13 < (this->SmallBlockSizesReversedShifted).ArrayNum) {
              uVar7 = ~uVar13 >> 0x1f;
            }
            if ((uVar7 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            Private::FreeBundles
                      (this,pFVar14,
                       (uint)*(ushort *)
                              ((this->SmallBlockSizesReversedShifted).AllocatorInstance.Data +
                              (longlong)(int)uVar13 * 2) <<
                       ((this->ArenaParams).MinimumAlignmentShift & 0x1f),uVar8);
          }
          uVar9 = (ulonglong)(uVar8 + 1);
          pFVar12 = local_res18;
          uVar11 = uVar11 + 0x20;
        } while (uVar8 + 1 != (uint)(this->ArenaParams).PoolCount);
      }
      if (*(void **)((longlong)pvVar2 + 8) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)pvVar2 + 8));
      }
      ::operator_delete(pvVar2,0x18);
      pFVar10 = local_res20;
    }
    pFVar12 = pFVar12 + 8;
  } while( true );
}

// operator() @ 14167cb20

FPoolInfoLarge * __thiscall
`FMallocBinnedGPU::Private::GetOrCreatePoolInfoLarge'::__l2::<lambda_1>::operator()
          (void *this,FMallocBinnedGPU *param_1)

{
  int *piVar1;
  TArray<void_*,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FPoolInfoLarge *pFVar7;
  ulong64 uVar8;
  FPoolInfoLarge *local_18 [2];
  
  uVar8 = param_1->NumLargePoolsPerPage * 0x10;
  local_18[0] = FMemory::Malloc(uVar8,0);
  pTVar2 = &param_1->MallocedPointers;
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  if ((pFVar3 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 <
      pFVar3 + (longlong)(param_1->MallocedPointers).ArrayMax * 8)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FPoolInfoLarge *)(*pcVar4)();
      return pFVar7;
    }
  }
  iVar6 = (param_1->MallocedPointers).ArrayNum;
  piVar1 = &(param_1->MallocedPointers).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  (param_1->MallocedPointers).ArrayNum = iVar6 + 1;
  *(FPoolInfoLarge **)((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_18[0];
  param_1->BinnedGPUPoolInfoMemory = param_1->BinnedGPUPoolInfoMemory + uVar8;
  DefaultConstructItems<FMallocBinnedGPU::FPoolInfoLarge,unsigned___int64>
            (local_18[0],param_1->NumLargePoolsPerPage);
  return local_18[0];
}

// AdjustSmallBlockSizeForAlignment @ 14167fee0

bool __thiscall
FMallocBinnedGPU::AdjustSmallBlockSizeForAlignment
          (FMallocBinnedGPU *this,ulong64 *param_1,uint param_2)

{
  ulonglong uVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  
  uVar7 = (ulonglong)(this->ArenaParams).MaxPoolSize;
  if (*param_1 <= uVar7 && param_2 <= (this->ArenaParams).MinimumAlignment) {
    return true;
  }
  uVar1 = (ulonglong)param_2 - 1;
  uVar8 = ((ulonglong)param_2 - 1) + *param_1 & ~uVar1;
  if (((this->ArenaParams).bAttemptToAlignSmallBocks &
      (param_2 <= (this->ArenaParams).MaximumAlignmentForSmallBlock && uVar8 <= uVar7)) != 0) {
    uVar5 = BoundSizeToPoolIndex(this,uVar8);
    while( true ) {
      uVar9 = ((this->ArenaParams).PoolCount - uVar5) - 1;
      uVar6 = 0;
      if ((int)uVar9 < (this->SmallBlockSizesReversedShifted).ArrayNum) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
      }
      uVar7 = (ulonglong)
              ((uint)*(ushort *)
                      ((this->SmallBlockSizesReversedShifted).AllocatorInstance.Data +
                      (longlong)(int)uVar9 * 2) <<
              ((this->ArenaParams).MinimumAlignmentShift & 0x1f));
      if ((uVar1 & uVar7) == 0) break;
      uVar5 = uVar5 + 1;
      if ((this->ArenaParams).PoolCount <= uVar5) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("PoolIndex < ArenaParams.PoolCount",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\MallocBinnedGPU.h"
                           ,0x1f8,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
      }
    }
    *param_1 = uVar7;
    return true;
  }
  return false;
}

// BlockPointerFromIndecies @ 141682320

uchar * __thiscall
FMallocBinnedGPU::BlockPointerFromIndecies
          (FMallocBinnedGPU *this,uint param_1,uint param_2,uint param_3)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uchar *puVar5;
  
  uVar4 = 0;
  if ((int)param_1 < (this->PoolBaseVMPtr).ArrayNum) {
    uVar4 = ~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      puVar5 = (uchar *)(*pcVar2)();
      return puVar5;
    }
  }
  lVar1 = *(longlong *)((this->PoolBaseVMPtr).AllocatorInstance.Data + (longlong)(int)param_1 * 8);
  puVar5 = (uchar *)((ulonglong)param_2 * (ulonglong)param_3 + lVar1);
  if ((uchar *)(lVar1 + (this->ArenaParams).MaxMemoryPerBlockSize) < puVar5 + param_3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Ptr + BlockOfBlocksSize <= PoolStart + ArenaParams.MaxMemoryPerBlockSize",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\MallocBinnedGPU.h"
                       ,0x1df,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      puVar5 = (uchar *)(*pcVar2)();
      return puVar5;
    }
  }
  return puVar5;
}

// BoundSizeToPoolIndex @ 14168a040

uint __thiscall FMallocBinnedGPU::BoundSizeToPoolIndex(FMallocBinnedGPU *this,ulong64 param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = (uint)(((ulonglong)(this->ArenaParams).MinimumAlignment - 1) + param_1 >>
                ((this->ArenaParams).MinimumAlignmentShift & 0x3f));
  uVar3 = 0;
  if ((int)uVar4 < (this->MemSizeToIndex).ArrayNum) {
    uVar3 = ~uVar4 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  return (uint)(byte)(this->MemSizeToIndex).AllocatorInstance.Data[(int)uVar4];
}

// ClearAndDisableTLSCachesOnCurrentThread @ 14168b100

void __thiscall FMallocBinnedGPU::ClearAndDisableTLSCachesOnCurrentThread(FMallocBinnedGPU *this)

{
  long64 lVar1;
  
  FlushCurrentThreadCache(this);
  lVar1 = FPerThreadFreeBlockLists::ClearTLS(this);
  LOCK();
  this->ConsolidatedMemory = (TAtomic<__int64>)((longlong)this->ConsolidatedMemory + lVar1);
  UNLOCK();
  return;
}

// Commit @ 14168bf00

void __thiscall
FMallocBinnedGPU::Commit(FMallocBinnedGPU *this,uint param_1,void *param_2,ulong64 param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FPlatformVirtualMemoryBlock *this_00;
  
  if ((this->ArenaParams).bUseSeparateVMPerPool == false) {
    this_00 = &this->PoolBaseVMBlock;
  }
  else {
    uVar3 = 0;
    if ((int)param_1 < (this->PoolBaseVMBlocks).ArrayNum) {
      uVar3 = ~param_1 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    this_00 = (FPlatformVirtualMemoryBlock *)
              ((this->PoolBaseVMBlocks).AllocatorInstance.Data + (longlong)(int)param_1 * 0x10);
  }
  FWindowsPlatformMemory::FPlatformVirtualMemoryBlock::Commit
            (this_00,(longlong)param_2 - *(longlong *)this_00,param_3);
  return;
}

// Decommit @ 14168de20

void __thiscall
FMallocBinnedGPU::Decommit(FMallocBinnedGPU *this,uint param_1,void *param_2,ulong64 param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FPlatformVirtualMemoryBlock *this_00;
  
  if ((this->ArenaParams).bUseSeparateVMPerPool == false) {
    this_00 = &this->PoolBaseVMBlock;
  }
  else {
    uVar3 = 0;
    if ((int)param_1 < (this->PoolBaseVMBlocks).ArrayNum) {
      uVar3 = ~param_1 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    this_00 = (FPlatformVirtualMemoryBlock *)
              ((this->PoolBaseVMBlocks).AllocatorInstance.Data + (longlong)(int)param_1 * 0x10);
  }
  FWindowsPlatformMemory::FPlatformVirtualMemoryBlock::Decommit
            (this_00,(longlong)param_2 - *(longlong *)this_00,param_3);
  return;
}

// DumpAllocatorStats @ 14168f8c0

void __thiscall FMallocBinnedGPU::DumpAllocatorStats(FMallocBinnedGPU *this,FOutputDevice *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  int *piVar10;
  longlong lVar11;
  
  FOutputDevice::Log(param_1,L"FMallocBinnedGPU Mem report");
  FOutputDevice::LogfImpl(param_1,L"Constants.BinnedAllocationGranularity = %d");
  FOutputDevice::LogfImpl(param_1,L"ArenaParams.MaxPoolSize = %d");
  FOutputDevice::LogfImpl(param_1,L"MAX_MEMORY_PER_BLOCK_SIZE = %llu");
  GetTotalAllocatedSmallPoolMemory(this);
  FOutputDevice::LogfImpl(param_1,L"Small Pool Allocations: %fmb  (including block size padding)");
  FOutputDevice::LogfImpl(param_1,L"Small Pool OS Allocated: %fmb");
  FOutputDevice::LogfImpl(param_1,L"Large Pool Requested Allocations: %fmb");
  FOutputDevice::LogfImpl(param_1,L"Large Pool OS Allocated: %fmb");
  FOutputDevice::LogfImpl(param_1,L"PoolInfo: %fmb");
  FOutputDevice::LogfImpl(param_1,L"Hash: %fmb");
  FOutputDevice::LogfImpl(param_1,L"Free Bits: %fmb");
  FOutputDevice::LogfImpl(param_1,L"TLS: %fmb");
  FOutputDevice::LogfImpl(param_1,L"GPU Memory Proxies: %fmb");
  FOutputDevice::LogfImpl(param_1,L"Total allocated from OS: %fmb");
  FOutputDevice::LogfImpl
            (param_1,L"BINNEDGPU_USE_SEPARATE_VM_PER_POOL is true - VM is Contiguous = %d");
  if (this->PoolSearchDiv != 0) {
    if (((this->PoolBaseVMPtr).ArrayNum < 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar6 = (this->ArenaParams).PoolCount - 1;
    uVar9 = 0;
    if ((int)uVar6 < (this->PoolBaseVMPtr).ArrayNum) {
      uVar9 = ~uVar6 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    FOutputDevice::LogfImpl
              (param_1,
               L"Percent of gaps in the address range %6.4f  (hopefully < 1, or the searches above will suffer)"
              );
  }
  uVar9 = 0;
  if ((this->ArenaParams).PoolCount != '\0') {
    piVar1 = &(this->SmallPoolTables).ArrayNum;
    lVar7 = 0;
    do {
      piVar10 = &(this->SmallPoolTables).ArrayNum;
      uVar8 = ~uVar9 >> 0x1f;
      uVar6 = 0;
      if ((int)uVar9 < *piVar10) {
        uVar6 = uVar8;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar6 = 0;
      if ((int)uVar9 < *piVar10) {
        uVar6 = uVar8;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = (this->SmallPoolTables).AllocatorInstance.Data;
      lVar11 = lVar7 * 0x60;
      uVar6 = 0;
      if ((int)uVar9 < *piVar10) {
        uVar6 = uVar8;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FBitTree::CountOnes((FBitTree *)(pFVar2 + lVar11 + 8),
                          *(uint *)((this->SmallPoolTables).AllocatorInstance.Data + lVar11 + 0x48))
      ;
      uVar6 = 0;
      if ((int)uVar9 < *piVar10) {
        uVar6 = uVar8;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = (this->SmallPoolTables).AllocatorInstance.Data;
      uVar6 = 0;
      if ((int)uVar9 < *piVar10) {
        uVar6 = uVar8;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar6 = *(uint *)((this->SmallPoolTables).AllocatorInstance.Data + lVar7 * 0x60 + 0x48);
      uVar5 = 0;
      if ((int)uVar9 < *piVar1) {
        uVar5 = uVar8;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FBitTree::CountOnes((FBitTree *)(pFVar2 + lVar11 + 0x28),uVar6);
      uVar6 = 0;
      if ((int)uVar9 < *piVar1) {
        uVar6 = uVar8;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar6 = 0;
      if ((int)uVar9 < (this->SmallPoolTables).ArrayNum) {
        uVar6 = uVar8;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar6 = 0;
      if ((int)uVar9 < (this->SmallPoolTables).ArrayNum) {
        uVar6 = uVar8;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar8 = ((this->ArenaParams).PoolCount - uVar9) - 1;
      uVar6 = 0;
      if ((int)uVar8 < (this->SmallBlockSizesReversedShifted).ArrayNum) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FOutputDevice::LogfImpl
                (param_1,
                 L"Pool %2d   Size %6d   UsedVM %3dMB  CommittedVM %3dMB  HighSlabs %6d  CommittedSlabs %6d  FullSlabs %6d  PartialSlabs  %6d"
                );
      uVar9 = uVar9 + 1;
      lVar7 = lVar7 + 1;
    } while ((int)uVar9 < (int)(uint)(this->ArenaParams).PoolCount);
  }
  return;
}

// FindPoolInfo @ 141694070

FPoolInfoLarge * __cdecl
FMallocBinnedGPU::Private::FindPoolInfo(FMallocBinnedGPU *param_1,void *param_2)

{
  PoolHashBucket *pPVar1;
  ulonglong uVar2;
  
  uVar2 = (ulonglong)param_2 >> ((byte)(param_1->PtrToPoolMapping).HashKeyShift & 0x3f);
  pPVar1 = param_1->HashBuckets +
           ((ulonglong)((int)(param_1->PtrToPoolMapping).MaxHashBuckets - 1) & uVar2 & 0xffffffff);
  do {
    if (pPVar1->BucketIndex == uVar2) {
      return pPVar1->FirstPool +
             ((uint)((ulonglong)param_2 >>
                    ((byte)(param_1->PtrToPoolMapping).PtrToPoolPageBitShift & 0x3f)) &
             (uint)(param_1->PtrToPoolMapping).PoolMask);
    }
    pPVar1 = pPVar1->Next;
  } while (pPVar1 != param_1->HashBuckets +
                     ((ulonglong)((int)(param_1->PtrToPoolMapping).MaxHashBuckets - 1) &
                     uVar2 & 0xffffffff));
  return (FPoolInfoLarge *)0x0;
}

// FlushCurrentThreadCache @ 141695350

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FMallocBinnedGPU::FlushCurrentThreadCache(FMallocBinnedGPU *this)

{
  longlong lVar1;
  FBundleNode *pFVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  double dVar10;
  LARGE_INTEGER LVar11;
  bool bVar12;
  uint uVar13;
  FName *pFVar14;
  FThreadSafeStaticStat<_public:_void___cdecl_FMallocBinnedGPU::FlushCurrentThreadCache(void)_::_2_::FStat_STAT_FMallocBinnedGPU_FlushCurrentThreadCache>
  FVar15;
  FNameEntryId FVar16;
  FName FVar17;
  uint uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  LPCRITICAL_SECTION lpCriticalSection;
  FBundleNode *pFVar21;
  uint uVar22;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18;
  LARGE_INTEGER local_res20;
  LARGE_INTEGER local_a8;
  LPCRITICAL_SECTION local_a0;
  FName local_98;
  FName local_90;
  FName local_88;
  
  QueryPerformanceCounter(&local_res20);
  uVar19 = 0;
  dVar5 = (double)local_res20.QuadPart * FGenericPlatformTime::SecondsPerCycle;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_FMallocBinnedGPU_FlushCurrentThreadCache ==
        (FThreadSafeStaticStat<_public:_void___cdecl_FMallocBinnedGPU::FlushCurrentThreadCache(void)_::_2_::FStat_STAT_FMallocBinnedGPU_FlushCurrentThreadCache>
         )0x0) {
      pFVar14 = ::FName::FName(&local_98,"STAT_FMallocBinnedGPU_FlushCurrentThreadCache");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FMallocBinnedGPU_FlushCurrentThreadCache
                 ,*pFVar14,L"STAT_FMallocBinnedGPU_FlushCurrentThreadCache","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar15 = StatPtr_STAT_FMallocBinnedGPU_FlushCurrentThreadCache;
  if (StatPtr_STAT_FMallocBinnedGPU_FlushCurrentThreadCache ==
      (FThreadSafeStaticStat<_public:_void___cdecl_FMallocBinnedGPU::FlushCurrentThreadCache(void)_::_2_::FStat_STAT_FMallocBinnedGPU_FlushCurrentThreadCache>
       )0x0) {
    pFVar14 = ::FName::FName(&local_90,"STAT_FMallocBinnedGPU_FlushCurrentThreadCache");
    FVar15 = (FThreadSafeStaticStat<_public:_void___cdecl_FMallocBinnedGPU::FlushCurrentThreadCache(void)_::_2_::FStat_STAT_FMallocBinnedGPU_FlushCurrentThreadCache>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_FMallocBinnedGPU_FlushCurrentThreadCache,*pFVar14,
                          L"STAT_FMallocBinnedGPU_FlushCurrentThreadCache","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar17 = *(FName *)FVar15;
  bVar7 = false;
  bVar9 = false;
  local_88.ComparisonIndex.Value = 0;
  local_88.Number = 0;
  FVar16 = FVar17.ComparisonIndex.Value;
  uVar13 = FVar17.Number;
  if ((FVar16.Value != 0) || (uVar13 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar15 + 0x10));
      bVar7 = false;
      bVar9 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar16.Value;
        local_res10.Number = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)*(FName *)((longlong)FVar15 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinnedGPU.cpp"
                   ,0x413);
        bVar7 = true;
        bVar9 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res18.s.LowPart = FVar16.Value;
      local_res18.s.HighPart = uVar13;
      FThreadStats::AddMessage(FVar17,CycleScopeStart);
      bVar8 = true;
      goto LAB_141695500;
    }
  }
  bVar8 = false;
  FVar17 = local_88;
LAB_141695500:
  if ((this->BinnedGPUTlsSlot != 0xffffffff) &&
     (local_a8 = (LARGE_INTEGER)TlsGetValue(this->BinnedGPUTlsSlot),
     (LPVOID)local_a8.QuadPart != (LPVOID)0x0)) {
    lpCriticalSection = (LPCRITICAL_SECTION)&this->Mutex;
    local_a0 = lpCriticalSection;
    EnterCriticalSection(lpCriticalSection);
    QueryPerformanceCounter(&local_res18);
    LVar11 = local_a8;
    dVar6 = (double)CONCAT44(local_res18.s.HighPart,local_res18.s.LowPart) *
            FGenericPlatformTime::SecondsPerCycle;
    uVar20 = uVar19;
    if ((this->ArenaParams).PoolCount != '\0') {
      do {
        uVar18 = (uint)uVar19;
        uVar13 = 0;
        if ((int)uVar18 < *(int *)(LVar11.QuadPart + 0x10)) {
          uVar13 = ~uVar18 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        lVar1 = *(longlong *)(LVar11.QuadPart + 8);
        pFVar2 = *(FBundleNode **)(uVar20 + lVar1);
        if (pFVar2 != (FBundleNode *)0x0) {
          *(undefined8 *)(uVar20 + lVar1) = 0;
          *(undefined4 *)(uVar20 + 8 + lVar1) = 0;
          (pFVar2->field1_0x8).NextBundle = (FBundleNode *)0x0;
        }
        pFVar21 = *(FBundleNode **)(uVar20 + 0x10 + lVar1);
        if (pFVar21 != (FBundleNode *)0x0) {
          *(undefined8 *)(uVar20 + 0x10 + lVar1) = 0;
          *(undefined4 *)(uVar20 + 0x18 + lVar1) = 0;
          (pFVar21->field1_0x8).NextBundle = (FBundleNode *)0x0;
        }
        if (pFVar2 == (FBundleNode *)0x0) {
          if (pFVar21 != (FBundleNode *)0x0) goto LAB_141695633;
        }
        else {
          (pFVar2->field1_0x8).NextBundle = pFVar21;
          pFVar21 = pFVar2;
LAB_141695633:
          uVar22 = ((this->ArenaParams).PoolCount - uVar18) - 1;
          uVar13 = 0;
          if ((int)uVar22 < (this->SmallBlockSizesReversedShifted).ArrayNum) {
            uVar13 = ~uVar22 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          Private::FreeBundles
                    (this,pFVar21,
                     (uint)*(ushort *)
                            ((this->SmallBlockSizesReversedShifted).AllocatorInstance.Data +
                            (longlong)(int)uVar22 * 2) <<
                     ((this->ArenaParams).MinimumAlignmentShift & 0x1f),uVar18);
        }
        uVar19 = (ulonglong)(uVar18 + 1);
        uVar20 = uVar20 + 0x20;
        lpCriticalSection = local_a0;
      } while (uVar18 + 1 != (uint)(this->ArenaParams).PoolCount);
    }
    QueryPerformanceCounter(&local_a8);
    dVar4 = (double)local_a8.QuadPart * FGenericPlatformTime::SecondsPerCycle;
    LeaveCriticalSection(lpCriticalSection);
    dVar10 = __real_3f947ae140000000;
    if ((__real_3f947ae140000000 < dVar6 - dVar5) && (2 < (byte)LogMemory._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMemory);
    }
    if ((dVar10 < dVar4 - dVar5) && (2 < (byte)LogMemory._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMemory);
    }
  }
  if (bVar9) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar8) {
    FThreadStats::AddMessage(FVar17,CycleScopeEnd);
  }
  return;
}

// Free @ 141695fc0

void __thiscall FMallocBinnedGPU::Free(FMallocBinnedGPU *this,void *param_1)

{
  code *pcVar1;
  bool bVar2;
  ulong64 uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined8 *puVar9;
  int iVar10;
  
  uVar3 = PoolIndexFromPtr(this,param_1);
  if ((uVar3 < (this->ArenaParams).PoolCount) && ((this->ArenaParams).bPerThreadCaches != false)) {
    if (this->BinnedGPUTlsSlot == 0xffffffff) {
      plVar4 = (longlong *)0x0;
    }
    else {
      plVar4 = TlsGetValue(this->BinnedGPUTlsSlot);
    }
    if (plVar4 != (longlong *)0x0) {
      uVar8 = (uint)uVar3;
      uVar7 = ((this->ArenaParams).PoolCount - uVar8) - 1;
      uVar6 = 0;
      if ((int)uVar7 < (this->SmallBlockSizesReversedShifted).ArrayNum) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      iVar10 = (uint)*(ushort *)
                      ((this->SmallBlockSizesReversedShifted).AllocatorInstance.Data +
                      (longlong)(int)uVar7 * 2) <<
               ((this->ArenaParams).MinimumAlignmentShift & 0x1f);
      uVar6 = 0;
      if ((int)uVar8 < (int)plVar4[2]) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      puVar9 = (undefined8 *)((longlong)(int)uVar8 * 0x20 + plVar4[1]);
      if ((param_1 == (void *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("InPtr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\MallocBinnedGPU.h"
                             ,0x104,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if ((this->ArenaParams).MaxSizePerBundle <= (uint)(*(int *)(puVar9 + 1) * iVar10) ||
          (uint)(this->ArenaParams).MaxBlocksPerBundle <= *(uint *)(puVar9 + 1)) {
        if (puVar9[2] != 0) goto LAB_1416961cc;
        puVar9[2] = *puVar9;
        puVar9[3] = puVar9[1];
        *puVar9 = 0;
        *(undefined4 *)(puVar9 + 1) = 0;
      }
      puVar5 = ::operator_new(0x20);
      if (puVar5 == (undefined8 *)0x0) {
        puVar5 = (undefined8 *)0x0;
      }
      else {
        puVar5[3] = param_1;
        if ((param_1 == (void *)0x0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("GPUMemory",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\MallocBinnedGPU.h"
                               ,0x61,L""), bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      *puVar5 = *puVar9;
      puVar5[1] = 0;
      *(int *)(puVar9 + 1) = *(int *)(puVar9 + 1) + 1;
      *puVar9 = puVar5;
      LOCK();
      this->GPUProxyMemory = (TAtomic<__int64>)((longlong)this->GPUProxyMemory + 0x20);
      UNLOCK();
      *plVar4 = *plVar4 - (longlong)iVar10;
      return;
    }
  }
LAB_1416961cc:
  FreeExternal(this,param_1);
  return;
}

// FreeBundles @ 141696b40

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FMallocBinnedGPU::Private::FreeBundles
          (FMallocBinnedGPU *param_1,FBundleNode *param_2,uint param_3,uint param_4)

{
  int *piVar1;
  FScriptContainerElement FVar2;
  FScriptContainerElement *pFVar3;
  FBundleNode *pFVar4;
  FBundleNode *pFVar5;
  FBundleNode *pFVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  code *pcVar9;
  bool bVar10;
  uint uVar11;
  ulong64 uVar12;
  ulonglong uVar13;
  FPlatformVirtualMemoryBlock *this;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  longlong lVar17;
  ulonglong uVar18;
  FBundleNode *pFVar19;
  int *piVar20;
  
  uVar14 = ~param_4 >> 0x1f;
  uVar11 = 0;
  if ((int)param_4 < (param_1->SmallPoolTables).ArrayNum) {
    uVar11 = uVar14;
  }
  if ((uVar11 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pFVar3 = (param_1->SmallPoolTables).AllocatorInstance.Data;
  lVar17 = (longlong)(int)param_4 * 0x60;
  do {
    if (param_2 == (FBundleNode *)0x0) {
      return;
    }
    pFVar4 = (param_2->field1_0x8).NextBundle;
    pFVar19 = param_2;
    do {
      pFVar5 = pFVar19[1].field1_0x8.NextBundle;
      pFVar6 = pFVar19->NextNodeInCurrentBundle;
      if ((pFVar5 == (FBundleNode *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("GPUNode",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinnedGPU.cpp"
                              ,0x192,L""), bVar10)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      uVar11 = 0;
      if ((int)param_4 < (param_1->SmallPoolTables).ArrayNum) {
        uVar11 = uVar14;
      }
      if ((uVar11 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      FVar2 = (param_1->SmallPoolTables).AllocatorInstance.Data[lVar17 + 6];
      uVar12 = PoolIndexFromPtr(param_1,pFVar5);
      if (((param_1->ArenaParams).PoolCount <= uVar12) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Result < ArenaParams.PoolCount",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\MallocBinnedGPU.h"
                              ,0x1c5,L""), bVar10)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      uVar15 = (uint)uVar12;
      uVar11 = 0;
      if ((int)uVar15 < (param_1->PoolBaseVMPtr).ArrayNum) {
        uVar11 = ~uVar15 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      uVar18 = (ulonglong)(param_1->ArenaParams).AllocationGranularity * (ulonglong)(byte)FVar2;
      lVar16 = *(longlong *)
                ((param_1->PoolBaseVMPtr).AllocatorInstance.Data + (longlong)(int)uVar15 * 8);
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar18;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = (longlong)pFVar5 - lVar16;
      uVar13 = SUB168(auVar8 / auVar7,0);
      uVar18 = uVar13 * uVar18 + lVar16;
      if (((param_1->ArenaParams).MaxMemoryPerBlockSize + lVar16 <= uVar18) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Result < PoolStart + ArenaParams.MaxMemoryPerBlockSize",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\MallocBinnedGPU.h"
                              ,0x1d8,L""), bVar10)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      uVar11 = 0;
      if ((int)param_4 < (param_1->SmallPoolTables).ArrayNum) {
        uVar11 = uVar14;
      }
      if ((uVar11 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      uVar11 = 0;
      if ((int)param_4 < (param_1->SmallPoolTables).ArrayNum) {
        uVar11 = uVar14;
      }
      if ((uVar11 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      lVar16 = *(longlong *)
                (*(longlong *)((param_1->SmallPoolTables).AllocatorInstance.Data + lVar17 + 0x50) +
                ((uVar13 & 0xffffffff) / (ulonglong)param_1->SmallPoolInfosPerPlatformPage) * 8);
      if (lVar16 == 0) {
        UE::Logging::Private::BasicFatalLog
                  (&`public:_static_void___cdecl_FMallocBinnedGPU::Private::FreeBundles(FMallocBinnedGPU&___ptr64,FMallocBinnedGPU::FBundleNode*___ptr64,unsigned_int,unsigned_int)'
                    ::__l17::LOG_Static,(FLogCategoryBase *)&LogMemory);
      }
      piVar20 = (int *)(((uVar13 & 0xffffffff) % (ulonglong)param_1->SmallPoolInfosPerPlatformPage)
                        * 0x10 + lVar16);
      if (*piVar20 != 0x69ffeed) {
        UE::Logging::Private::BasicFatalLog
                  ((FStaticBasicLogRecord *)
                   &`public:_void___cdecl_FMallocBinnedGPU::FPoolInfoSmall::CheckCanary(FMallocBinnedGPU::FPoolInfoSmall::ECanary)const___ptr64'
                    ::__l6::LOG_Static,(FLogCategoryBase *)&LogMemory);
      }
      lVar16 = *(longlong *)(piVar20 + 2);
      *(undefined4 *)((longlong)&pFVar19->NextNodeInCurrentBundle + 4) = 1;
      pFVar19->field1_0x8 = *(FBundleNode_u_8 *)(piVar20 + 2);
      *(short *)&pFVar19->NextNodeInCurrentBundle =
           (short)(param_3 >> ((param_1->ArenaParams).MinimumAlignmentShift & 0x1f));
      *(undefined1 *)((longlong)&pFVar19->NextNodeInCurrentBundle + 3) = 0xc3;
      *(char *)((longlong)&pFVar19->NextNodeInCurrentBundle + 2) = (char)param_4;
      *(FBundleNode **)(piVar20 + 2) = pFVar19;
      if ((piVar20[1] == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("NodePool->Taken >= 1",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinnedGPU.cpp"
                              ,0x1ab,L""), bVar10)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      piVar1 = piVar20 + 1;
      *piVar1 = *piVar1 + -1;
      uVar11 = SUB164(auVar8 / auVar7,0);
      if (*piVar1 == 0) {
        if (*piVar20 != 0x69ffeed) {
          UE::Logging::Private::BasicFatalLog
                    ((FStaticBasicLogRecord *)
                     &`public:_void___cdecl_FMallocBinnedGPU::FPoolInfoSmall::SetCanary(FMallocBinnedGPU::FPoolInfoSmall::ECanary,bool,bool)___ptr64'
                      ::__l33::LOG_Static,(FLogCategoryBase *)&LogMemory);
        }
        *piVar20 = 0x5effeed;
        FBitTree::FreeBit((FBitTree *)(pFVar3 + lVar17 + 8),uVar11);
        uVar15 = 0;
        if ((int)param_4 < (param_1->SmallPoolTables).ArrayNum) {
          uVar15 = uVar14;
        }
        if ((uVar15 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        uVar12 = (ulonglong)(byte)(param_1->SmallPoolTables).AllocatorInstance.Data[lVar17 + 6] *
                 (ulonglong)(param_1->ArenaParams).AllocationGranularity;
        if (lVar16 != 0) {
          FBitTree::AllocBit((FBitTree *)(pFVar3 + lVar17 + 0x28),uVar11);
        }
        if ((param_1->ArenaParams).bUseSeparateVMPerPool == false) {
          this = &param_1->PoolBaseVMBlock;
        }
        else {
          uVar11 = 0;
          if ((int)param_4 < (param_1->PoolBaseVMBlocks).ArrayNum) {
            uVar11 = uVar14;
          }
          if ((uVar11 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          this = (FPlatformVirtualMemoryBlock *)
                 ((param_1->PoolBaseVMBlocks).AllocatorInstance.Data + (longlong)(int)param_4 * 0x10
                 );
        }
        FWindowsPlatformMemory::FPlatformVirtualMemoryBlock::Decommit
                  (this,uVar18 - *(longlong *)this,uVar12);
        param_1->BinnedGPUAllocatedOSSmallPoolMemory =
             param_1->BinnedGPUAllocatedOSSmallPoolMemory - uVar12;
        lVar16 = 0;
        do {
          pFVar5 = (pFVar19->field1_0x8).NextBundle;
          ::operator_delete(pFVar19,0x20);
          lVar16 = lVar16 + 0x20;
          pFVar19 = pFVar5;
        } while (pFVar5 != (FBundleNode *)0x0);
        LOCK();
        param_1->GPUProxyMemory = (TAtomic<__int64>)((longlong)param_1->GPUProxyMemory - lVar16);
        UNLOCK();
        piVar20[2] = 0;
        piVar20[3] = 0;
      }
      else if (lVar16 == 0) {
        FBitTree::FreeBit((FBitTree *)(pFVar3 + lVar17 + 0x28),uVar11);
      }
      pFVar19 = pFVar6;
      param_2 = pFVar4;
    } while (pFVar6 != (FBundleNode *)0x0);
  } while( true );
}

// FreeExternal @ 141697480

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FMallocBinnedGPU::FreeExternal(FMallocBinnedGPU *this,void *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  ulong64 uVar4;
  FPerThreadFreeBlockLists *this_00;
  FBundleNode *pFVar5;
  undefined8 *puVar6;
  FPoolInfoLarge *pFVar7;
  undefined8 uVar8;
  longlong *plVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  uint uVar13;
  uint local_res8 [2];
  void *local_res18 [2];
  
  uVar4 = PoolIndexFromPtr(this,param_1);
  if ((this->ArenaParams).PoolCount <= uVar4) {
    if (param_1 == (void *)0x0) {
      return;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)&this->Mutex);
    pFVar7 = Private::FindPoolInfo(this,param_1);
    if (pFVar7 == (FPoolInfoLarge *)0x0) {
      UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogMemory);
    }
    if (pFVar7->Canary != 0xf4d) {
      UE::Logging::Private::BasicFatalLog
                ((FStaticBasicLogRecord *)
                 &`public:_void___cdecl_FMallocBinnedGPU::FPoolInfoLarge::CheckCanary(FMallocBinnedGPU::FPoolInfoLarge::ECanary)const___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogMemory);
    }
    uVar12 = pFVar7->OSCommitSize;
    uVar10 = pFVar7->AllocSize;
    if (pFVar7->Canary != 0xf4d) {
      UE::Logging::Private::BasicFatalLog
                ((FStaticBasicLogRecord *)
                 &`public:_void___cdecl_FMallocBinnedGPU::FPoolInfoLarge::CheckCanary(FMallocBinnedGPU::FPoolInfoLarge::ECanary)const___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogMemory);
    }
    uVar13 = pFVar7->VMSizeDivVirtualSizeAlignment;
    this->BinnedGPUAllocatedLargePoolMemory =
         this->BinnedGPUAllocatedLargePoolMemory - (ulonglong)uVar10;
    this->BinnedGPUAllocatedLargePoolMemoryWAlignment =
         this->BinnedGPUAllocatedLargePoolMemoryWAlignment - (ulonglong)uVar12;
    if ((uVar12 < uVar10) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("PoolOSRequestedBytes <= PoolOsCommittedBytes",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinnedGPU.cpp"
                           ,0x3e2,L"FMallocBinnedGPU::FreeExternal %d %d"), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (pFVar7->Canary != 0xf4d) {
      UE::Logging::Private::BasicFatalLog
                ((FStaticBasicLogRecord *)
                 &`public:_void___cdecl_FMallocBinnedGPU::FPoolInfoLarge::SetCanary(FMallocBinnedGPU::FPoolInfoLarge::ECanary,bool,bool)___ptr64'
                  ::__l33::LOG_Static,(FLogCategoryBase *)&LogMemory);
    }
    pFVar7->Canary = 0x2a1;
    LeaveCriticalSection((LPCRITICAL_SECTION)&this->Mutex);
    local_res8[0] = uVar13;
    local_res18[0] = param_1;
    UE::Core::Private::Function::CheckCallable(*(void **)&(this->ArenaParams).LargeBlockFree);
    pcVar2 = *(code **)&(this->ArenaParams).LargeBlockFree;
    plVar1 = *(longlong **)&(this->ArenaParams).LargeBlockFree.field_0x28;
    plVar9 = (longlong *)&(this->ArenaParams).LargeBlockFree.field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar9 = plVar1;
    }
    uVar8 = (**(code **)(*plVar9 + 8))();
    (*pcVar2)(uVar8,local_res18,local_res8);
    return;
  }
  if ((param_1 == (void *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinnedGPU.cpp"
                         ,0x3b2,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this_00 = (FPerThreadFreeBlockLists *)0x0;
  uVar13 = (uint)uVar4;
  uVar10 = ((this->ArenaParams).PoolCount - uVar13) - 1;
  uVar12 = 0;
  if ((int)uVar10 < (this->SmallBlockSizesReversedShifted).ArrayNum) {
    uVar12 = ~uVar10 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar12 = (uint)*(ushort *)
                  ((this->SmallBlockSizesReversedShifted).AllocatorInstance.Data +
                  (longlong)(int)uVar10 * 2) << ((this->ArenaParams).MinimumAlignmentShift & 0x1f);
  if ((this->ArenaParams).bPerThreadCaches != false) {
    if (this->BinnedGPUTlsSlot != 0xffffffff) {
      this_00 = TlsGetValue(this->BinnedGPUTlsSlot);
    }
    if (this_00 != (FPerThreadFreeBlockLists *)0x0) {
      pFVar5 = FPerThreadFreeBlockLists::RecycleFullBundle
                         (this_00,&this->ArenaParams,&this->GGlobalRecycler,uVar13);
      uVar10 = 0;
      if ((int)uVar13 < (this_00->FreeLists).ArrayNum) {
        uVar10 = ~uVar13 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar11 = (this_00->FreeLists).AllocatorInstance.Data + (longlong)(int)uVar13 * 0x20;
      if ((param_1 == (void *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("InPtr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\MallocBinnedGPU.h"
                             ,0x104,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (*(int *)(pFVar11 + 8) * uVar12 < (this->ArenaParams).MaxSizePerBundle &&
          *(uint *)(pFVar11 + 8) < (uint)(this->ArenaParams).MaxBlocksPerBundle) {
LAB_14169765e:
        puVar6 = ::operator_new(0x20);
        if (puVar6 == (undefined8 *)0x0) {
          puVar6 = (undefined8 *)0x0;
        }
        else {
          puVar6[3] = param_1;
          if ((param_1 == (void *)0x0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("GPUMemory",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\MallocBinnedGPU.h"
                                 ,0x61,L""), bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        *puVar6 = *(undefined8 *)pFVar11;
        puVar6[1] = 0;
        *(int *)(pFVar11 + 8) = *(int *)(pFVar11 + 8) + 1;
        *(undefined8 **)pFVar11 = puVar6;
        LOCK();
        this->GPUProxyMemory = (TAtomic<__int64>)((longlong)this->GPUProxyMemory + 0x20);
        UNLOCK();
      }
      else {
        if (*(longlong *)(pFVar11 + 0x10) == 0) {
          *(undefined8 *)(pFVar11 + 0x10) = *(undefined8 *)pFVar11;
          *(undefined8 *)(pFVar11 + 0x18) = *(undefined8 *)(pFVar11 + 8);
          *(undefined8 *)pFVar11 = 0;
          *(undefined4 *)(pFVar11 + 8) = 0;
          goto LAB_14169765e;
        }
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("bPushed",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinnedGPU.cpp"
                           ,0x3bb,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      this_00->AllocatedMemory = this_00->AllocatedMemory - (ulonglong)uVar12;
      goto LAB_141697754;
    }
  }
  pFVar5 = ::operator_new(0x20);
  if (pFVar5 == (FBundleNode *)0x0) {
    pFVar5 = (FBundleNode *)0x0;
  }
  else {
    pFVar5[1].field1_0x8.NextBundle = param_1;
    if ((param_1 == (void *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("GPUMemory",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\MallocBinnedGPU.h"
                           ,0x61,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  LOCK();
  this->GPUProxyMemory = (TAtomic<__int64>)((longlong)this->GPUProxyMemory + 0x20);
  UNLOCK();
  pFVar5->NextNodeInCurrentBundle = (FBundleNode *)0x0;
LAB_141697754:
  if (pFVar5 != (FBundleNode *)0x0) {
    (pFVar5->field1_0x8).NextBundle = (FBundleNode *)0x0;
    EnterCriticalSection((LPCRITICAL_SECTION)&this->Mutex);
    Private::FreeBundles(this,pFVar5,uVar12,uVar13);
    if (this_00 == (FPerThreadFreeBlockLists *)0x0) {
      this->BinnedGPUAllocatedSmallPoolMemory =
           this->BinnedGPUAllocatedSmallPoolMemory - (ulonglong)uVar12;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&this->Mutex);
  }
  return;
}

// GetAllocationSize @ 141698a20

bool __thiscall
FMallocBinnedGPU::GetAllocationSize(FMallocBinnedGPU *this,void *param_1,ulong64 *param_2)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  ulong64 uVar6;
  uint uVar7;
  
  uVar6 = PoolIndexFromPtr(this,param_1);
  bVar1 = (this->ArenaParams).PoolCount;
  if (bVar1 <= uVar6) {
    bVar3 = GetAllocationSizeExternal(this,param_1,param_2);
    return bVar3;
  }
  uVar7 = ((uint)bVar1 - (int)uVar6) - 1;
  uVar5 = 0;
  if ((int)uVar7 < (this->SmallBlockSizesReversedShifted).ArrayNum) {
    uVar5 = ~uVar7 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  *param_2 = (ulonglong)
             ((uint)*(ushort *)
                     ((this->SmallBlockSizesReversedShifted).AllocatorInstance.Data +
                     (longlong)(int)uVar7 * 2) << ((this->ArenaParams).MinimumAlignmentShift & 0x1f)
             );
  return true;
}

// GetAllocationSizeExternal @ 141698af0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FMallocBinnedGPU::GetAllocationSizeExternal(FMallocBinnedGPU *this,void *param_1,ulong64 *param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  ulong64 uVar6;
  FPoolInfoLarge *pFVar7;
  
  uVar6 = PoolIndexFromPtr(this,param_1);
  if (uVar6 < (this->ArenaParams).PoolCount) {
    if ((param_1 == (void *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Ptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinnedGPU.cpp"
                           ,0x3ef,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    uVar1 = ((uint)(this->ArenaParams).PoolCount - (int)uVar6) - 1;
    uVar5 = 0;
    if ((int)uVar1 < (this->SmallBlockSizesReversedShifted).ArrayNum) {
      uVar5 = ~uVar1 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    *param_2 = (ulonglong)
               ((uint)*(ushort *)
                       ((this->SmallBlockSizesReversedShifted).AllocatorInstance.Data +
                       (longlong)(int)uVar1 * 2) <<
               ((this->ArenaParams).MinimumAlignmentShift & 0x1f));
  }
  else {
    if (param_1 == (void *)0x0) {
      return false;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)&this->Mutex);
    pFVar7 = Private::FindPoolInfo(this,param_1);
    if (pFVar7 == (FPoolInfoLarge *)0x0) {
      UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogMemory);
    }
    if (pFVar7->Canary != 0xf4d) {
      UE::Logging::Private::BasicFatalLog
                ((FStaticBasicLogRecord *)
                 &`public:_void___cdecl_FMallocBinnedGPU::FPoolInfoLarge::CheckCanary(FMallocBinnedGPU::FPoolInfoLarge::ECanary)const___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogMemory);
    }
    uVar1 = pFVar7->OSCommitSize;
    if ((uVar1 < pFVar7->AllocSize) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("PoolOSRequestedBytes <= PoolOsBytes",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinnedGPU.cpp"
                           ,0x3ff,L"FMallocBinnedGPU::GetAllocationSizeExternal %d %d"), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    *param_2 = (ulonglong)uVar1;
    LeaveCriticalSection((LPCRITICAL_SECTION)&this->Mutex);
  }
  return true;
}

// GetAllocatorStats @ 141698f10

void __thiscall
FMallocBinnedGPU::GetAllocatorStats(FMallocBinnedGPU *this,FGenericMemoryStats *param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulong64 uVar3;
  TStringView<wchar_t> local_18;
  
  uVar3 = GetTotalAllocatedSmallPoolMemory(this);
  local_18.Size = 0x21;
  local_18.DataPtr = L"BinnedGPUAllocatedSmallPoolMemory";
  FGenericMemoryStats::Add(param_1,&local_18,uVar3);
  local_18.DataPtr = L"BinnedGPUAllocatedOSSmallPoolMemory";
  local_18.Size = 0x23;
  FGenericMemoryStats::Add(param_1,&local_18,this->BinnedGPUAllocatedOSSmallPoolMemory);
  local_18.DataPtr = L"BinnedGPUAllocatedLargePoolMemory";
  local_18.Size = 0x21;
  FGenericMemoryStats::Add(param_1,&local_18,this->BinnedGPUAllocatedLargePoolMemory);
  local_18.DataPtr = L"BinnedGPUAllocatedLargePoolMemoryWAlignment";
  local_18.Size = 0x2b;
  FGenericMemoryStats::Add(param_1,&local_18,this->BinnedGPUAllocatedLargePoolMemoryWAlignment);
  lVar1 = this->BinnedGPUAllocatedLargePoolMemoryWAlignment;
  lVar2 = this->BinnedGPUAllocatedOSSmallPoolMemory;
  local_18.DataPtr = L"TotalAllocated";
  local_18.Size = 0xe;
  FGenericMemoryStats::Add(param_1,&local_18,this->BinnedGPUAllocatedLargePoolMemory + uVar3);
  local_18.Size = 0x10;
  local_18.DataPtr = L"TotalOSAllocated";
  FGenericMemoryStats::Add(param_1,&local_18,lVar1 + lVar2);
  FMalloc::GetAllocatorStats((FMalloc *)this,param_1);
  return;
}

// GetDescriptiveName @ 141699590

wchar_t * __thiscall FMallocBinnedGPU::GetDescriptiveName(FMallocBinnedGPU *this)

{
  return L"BinnedGPU";
}

// GetFrontPool @ 141699860

FPoolInfoSmall * __thiscall
FMallocBinnedGPU::GetFrontPool
          (FMallocBinnedGPU *this,FPoolTable *param_1,uint param_2,uint *param_3)

{
  uint uVar1;
  FPoolInfoSmall *pFVar2;
  
  uVar1 = FBitTree::NextAllocBit(&param_1->BlockOfBlockIsExhausted);
  *param_3 = uVar1;
  if (uVar1 == 0xffffffff) {
    return (FPoolInfoSmall *)0x0;
  }
  pFVar2 = Private::GetOrCreatePoolInfoSmall(this,param_2,uVar1);
  return pFVar2;
}

// GetOrCreatePoolInfoLarge @ 14169a0f0

/* WARNING: Enum "Type": Some values do not have unique names */

FPoolInfoLarge * __cdecl
FMallocBinnedGPU::Private::GetOrCreatePoolInfoLarge(FMallocBinnedGPU *param_1,void *param_2)

{
  int *piVar1;
  TArray<void_*,TSizedDefaultAllocator<32>_> *pTVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  PoolHashBucket *pPVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  FPoolInfoLarge *pFVar9;
  undefined **ppuVar10;
  PoolHashBucket *pPVar11;
  PoolHashBucket *pPVar12;
  ulonglong uVar13;
  PoolHashBucket *pPVar14;
  FPoolInfoLarge *pFVar15;
  longlong lVar16;
  ulonglong uVar17;
  uint uVar18;
  undefined1 local_res8 [8];
  PoolHashBucket *local_38 [2];
  
  uVar13 = (ulonglong)param_2 >> ((byte)(param_1->PtrToPoolMapping).HashKeyShift & 0x3f);
  uVar18 = (uint)((ulonglong)param_2 >>
                 ((byte)(param_1->PtrToPoolMapping).PtrToPoolPageBitShift & 0x3f)) &
           (uint)(param_1->PtrToPoolMapping).PoolMask;
  pPVar14 = param_1->HashBuckets +
            ((ulonglong)((int)(param_1->PtrToPoolMapping).MaxHashBuckets - 1) & uVar13 & 0xffffffff)
  ;
  pPVar11 = pPVar14;
  do {
    pFVar9 = pPVar11->FirstPool;
    if (pFVar9 == (FPoolInfoLarge *)0x0) {
      pPVar11->BucketIndex = uVar13;
      pFVar9 = `FMallocBinnedGPU::Private::GetOrCreatePoolInfoLarge'::__l2::<lambda_1>::operator()
                         (local_res8,param_1);
      uVar13 = (ulonglong)uVar18;
      lVar16 = uVar13 * 0x10;
      pPVar11->FirstPool = pFVar9;
      pFVar15 = pFVar9 + uVar13;
      if (pFVar9[uVar13].Canary == 0x2a1) goto LAB_14169a3e6;
      ppuVar10 = &`public:_void___cdecl_FMallocBinnedGPU::FPoolInfoLarge::SetCanary(FMallocBinnedGPU::FPoolInfoLarge::ECanary,bool,bool)___ptr64'
                  ::__l81::LOG_Static;
LAB_14169a3d4:
      UE::Logging::Private::BasicFatalLog
                ((FStaticBasicLogRecord *)ppuVar10,(FLogCategoryBase *)&LogMemory);
LAB_14169a3e6:
      pFVar15->Canary = 0xf4d;
      return (FPoolInfoLarge *)((longlong)&pPVar11->FirstPool->Canary + lVar16);
    }
    if (pPVar11->BucketIndex == uVar13) {
      uVar13 = (ulonglong)uVar18;
      lVar16 = uVar13 * 0x10;
      pFVar15 = pFVar9 + uVar13;
      if ((pFVar9[uVar13].Canary == 0xf4d) || (pFVar9[uVar13].Canary == 0x2a1)) goto LAB_14169a3e6;
      ppuVar10 = &`public:_void___cdecl_FMallocBinnedGPU::FPoolInfoLarge::SetCanary(FMallocBinnedGPU::FPoolInfoLarge::ECanary,bool,bool)___ptr64'
                  ::__l103::LOG_Static;
      goto LAB_14169a3d4;
    }
    pPVar11 = pPVar11->Next;
    if (pPVar11 == pPVar14) {
      if (param_1->HashBucketFreeList == (PoolHashBucket *)0x0) {
        local_38[0] = FMemory::Malloc((ulonglong)(param_1->ArenaParams).AllocationGranularity,0);
        param_1->HashBucketFreeList = local_38[0];
        pTVar2 = &param_1->MallocedPointers;
        pFVar4 = (pTVar2->AllocatorInstance).Data;
        if (((pFVar4 <= (FScriptContainerElement *)local_38) &&
            ((FScriptContainerElement *)local_38 <
             pFVar4 + (longlong)(param_1->MallocedPointers).ArrayMax * 8)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar6 = (code *)swi(3);
          pFVar9 = (FPoolInfoLarge *)(*pcVar6)();
          return pFVar9;
        }
        iVar8 = (param_1->MallocedPointers).ArrayNum;
        piVar1 = &(param_1->MallocedPointers).ArrayMax;
        if (iVar8 == *piVar1) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&pTVar2->AllocatorInstance,piVar1);
        }
        (param_1->MallocedPointers).ArrayNum = iVar8 + 1;
        *(PoolHashBucket **)((pTVar2->AllocatorInstance).Data + (longlong)iVar8 * 8) = local_38[0];
        uVar3 = (param_1->ArenaParams).AllocationGranularity;
        param_1->BinnedGPUHashMemory = param_1->BinnedGPUHashMemory + (ulonglong)uVar3;
        pPVar11 = (PoolHashBucket *)0x0;
        for (uVar17 = (ulonglong)(uVar3 >> 5); uVar17 != 0; uVar17 = uVar17 - 1) {
          pPVar12 = param_1->HashBucketFreeList;
          *(undefined8 *)((longlong)&pPVar11->BucketIndex + (longlong)&pPVar12->BucketIndex) = 0;
          *(undefined8 *)((longlong)&pPVar12->FirstPool + (longlong)pPVar11) = 0;
          pPVar5 = (PoolHashBucket *)
                   ((longlong)&pPVar11->BucketIndex + (longlong)&pPVar12->BucketIndex);
          pPVar5->Prev = pPVar5;
          pPVar11 = pPVar11 + 1;
          pPVar5->Next = pPVar5;
          pPVar5->Prev = pPVar12->Prev;
          pPVar5->Next = pPVar12;
          pPVar12->Prev->Next = pPVar5;
          pPVar12->Prev = pPVar5;
        }
      }
      pPVar11 = param_1->HashBucketFreeList;
      pPVar5 = pPVar11->Next;
      pPVar12 = (PoolHashBucket *)0x0;
      if (pPVar5 != pPVar11) {
        pPVar12 = pPVar5;
      }
      pPVar5->Prev = pPVar11->Prev;
      pPVar11->Prev->Next = pPVar11->Next;
      pPVar11->Prev = pPVar11;
      pPVar11->Next = pPVar11;
      param_1->HashBucketFreeList = pPVar12;
      pFVar9 = pPVar11->FirstPool;
      if (pFVar9 == (FPoolInfoLarge *)0x0) {
        pFVar9 = `FMallocBinnedGPU::Private::GetOrCreatePoolInfoLarge'::__l2::<lambda_1>::operator()
                           (local_res8,param_1);
        pPVar11->FirstPool = pFVar9;
        if (pFVar9[uVar18].Canary != 0x2a1) {
          UE::Logging::Private::BasicFatalLog
                    ((FStaticBasicLogRecord *)
                     &`public:_void___cdecl_FMallocBinnedGPU::FPoolInfoLarge::SetCanary(FMallocBinnedGPU::FPoolInfoLarge::ECanary,bool,bool)___ptr64'
                      ::__l81::LOG_Static,(FLogCategoryBase *)&LogMemory);
        }
        pFVar9[uVar18].Canary = 0xf4d;
      }
      else {
        if ((pFVar9[uVar18].Canary != 0xf4d) && (pFVar9[uVar18].Canary != 0x2a1)) {
          UE::Logging::Private::BasicFatalLog
                    ((FStaticBasicLogRecord *)
                     &`public:_void___cdecl_FMallocBinnedGPU::FPoolInfoLarge::SetCanary(FMallocBinnedGPU::FPoolInfoLarge::ECanary,bool,bool)___ptr64'
                      ::__l103::LOG_Static,(FLogCategoryBase *)&LogMemory);
        }
        pFVar9[uVar18].Canary = 0xf4d;
      }
      pPVar11->BucketIndex = uVar13;
      pPVar11->Prev = pPVar14->Prev;
      pPVar11->Next = pPVar14;
      pPVar14->Prev->Next = pPVar11;
      pPVar14->Prev = pPVar11;
      return pPVar11->FirstPool + uVar18;
    }
  } while( true );
}

// GetOrCreatePoolInfoSmall @ 14169a510

/* WARNING: Enum "Type": Some values do not have unique names */

FPoolInfoSmall * __cdecl
FMallocBinnedGPU::Private::GetOrCreatePoolInfoSmall
          (FMallocBinnedGPU *param_1,uint param_2,uint param_3)

{
  int *piVar1;
  TArray<void_*,TSizedDefaultAllocator<32>_> *pTVar2;
  longlong *plVar3;
  longlong lVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  FPoolInfoSmall *pFVar11;
  undefined **ppuVar12;
  longlong lVar13;
  uint uVar14;
  void *local_48 [2];
  
  uVar10 = param_1->SmallPoolInfosPerPlatformPage;
  uVar14 = ~param_2 >> 0x1f;
  uVar8 = 0;
  if ((int)param_2 < (param_1->SmallPoolTables).ArrayNum) {
    uVar8 = uVar14;
  }
  if (uVar8 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pFVar11 = (FPoolInfoSmall *)(*pcVar6)();
      return pFVar11;
    }
  }
  lVar13 = (longlong)(int)param_2 * 0x60;
  lVar4 = *(longlong *)((param_1->SmallPoolTables).AllocatorInstance.Data + lVar13 + 0x50);
  plVar3 = (longlong *)(lVar4 + ((ulonglong)param_3 / (ulonglong)uVar10) * 8);
  if (*(longlong *)(lVar4 + ((ulonglong)param_3 / (ulonglong)uVar10) * 8) == 0) {
    local_48[0] = FMemory::Malloc((ulonglong)(param_1->ArenaParams).BasePageSize,0);
    *plVar3 = (longlong)local_48[0];
    pTVar2 = &param_1->MallocedPointers;
    pFVar5 = (pTVar2->AllocatorInstance).Data;
    if ((pFVar5 <= (FScriptContainerElement *)local_48) &&
       ((FScriptContainerElement *)local_48 <
        pFVar5 + (longlong)(param_1->MallocedPointers).ArrayMax * 8)) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        pFVar11 = (FPoolInfoSmall *)(*pcVar6)();
        return pFVar11;
      }
    }
    iVar9 = (param_1->MallocedPointers).ArrayNum;
    piVar1 = &(param_1->MallocedPointers).ArrayMax;
    if (iVar9 == *piVar1) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&pTVar2->AllocatorInstance,piVar1);
    }
    (param_1->MallocedPointers).ArrayNum = iVar9 + 1;
    *(void **)((pTVar2->AllocatorInstance).Data + (longlong)iVar9 * 8) = local_48[0];
    param_1->BinnedGPUPoolInfoMemory =
         param_1->BinnedGPUPoolInfoMemory + (ulonglong)(param_1->ArenaParams).AllocationGranularity;
    DefaultConstructItems<FMallocBinnedGPU::FPoolInfoSmall,unsigned_int>((void *)*plVar3,uVar10);
  }
  pFVar11 = (FPoolInfoSmall *)((ulonglong)(param_3 % uVar10) * 0x10 + *plVar3);
  uVar10 = 0;
  if ((int)param_2 < (param_1->SmallPoolTables).ArrayNum) {
    uVar10 = uVar14;
  }
  if (uVar10 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pFVar11 = (FPoolInfoSmall *)(*pcVar6)();
      return pFVar11;
    }
  }
  if (param_3 < *(uint *)((param_1->SmallPoolTables).AllocatorInstance.Data + lVar13 + 0x48)) {
    if ((pFVar11->Canary == 0x69ffeed) || (pFVar11->Canary == 0x5effeed)) goto LAB_14169a77e;
    ppuVar12 = &`public:_void___cdecl_FMallocBinnedGPU::FPoolInfoSmall::SetCanary(FMallocBinnedGPU::FPoolInfoSmall::ECanary,bool,bool)___ptr64'
                ::__l103::LOG_Static;
  }
  else {
    uVar10 = 0;
    if ((int)param_2 < (param_1->SmallPoolTables).ArrayNum) {
      uVar10 = uVar14;
    }
    if (uVar10 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        pFVar11 = (FPoolInfoSmall *)(*pcVar6)();
        return pFVar11;
      }
    }
    *(uint *)((param_1->SmallPoolTables).AllocatorInstance.Data + lVar13 + 0x48) = param_3 + 1;
    if (pFVar11->Canary == 0x5effeed) goto LAB_14169a77e;
    ppuVar12 = &`public:_void___cdecl_FMallocBinnedGPU::FPoolInfoSmall::SetCanary(FMallocBinnedGPU::FPoolInfoSmall::ECanary,bool,bool)___ptr64'
                ::__l81::LOG_Static;
  }
  UE::Logging::Private::BasicFatalLog
            ((FStaticBasicLogRecord *)ppuVar12,(FLogCategoryBase *)&LogMemory);
LAB_14169a77e:
  pFVar11->Canary = 0x69ffeed;
  return pFVar11;
}

// GetTotalAllocatedSmallPoolMemory @ 1416a1700

long64 __thiscall FMallocBinnedGPU::GetTotalAllocatedSmallPoolMemory(FMallocBinnedGPU *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  TAtomic<__int64> TVar3;
  longlong lVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  lVar4 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)&this->FreeBlockListsRegistrationMutex);
  pFVar5 = (this->RegisteredFreeBlockLists).AllocatorInstance.Data;
  iVar2 = (this->RegisteredFreeBlockLists).ArrayNum;
  pFVar1 = pFVar5 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->RegisteredFreeBlockLists).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FMallocBinnedGPU::FPerThreadFreeBlockLists_*,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar5 == pFVar1) break;
    lVar4 = lVar4 + **(longlong **)pFVar5;
    pFVar5 = pFVar5 + 8;
  }
  TVar3 = this->ConsolidatedMemory;
  LeaveCriticalSection((LPCRITICAL_SECTION)&this->FreeBlockListsRegistrationMutex);
  return this->BinnedGPUAllocatedSmallPoolMemory + (longlong)TVar3 + lVar4;
}

// InitMallocBinned @ 1416a3900

void __thiscall FMallocBinnedGPU::InitMallocBinned(FMallocBinnedGPU *this)

{
  uchar *puVar1;
  TArray<void_*,TSizedDefaultAllocator<32>_> *pTVar2;
  ulonglong uVar3;
  uchar uVar4;
  ulong64 uVar5;
  longlong *plVar6;
  void *pvVar7;
  ulonglong uVar8;
  code *pcVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  bool bVar12;
  byte bVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  undefined8 uVar18;
  uint uVar19;
  void *pvVar20;
  longlong *plVar21;
  ulonglong uVar22;
  uint uVar23;
  uint uVar24;
  int iVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  FScriptContainerElement *pFVar29;
  ulong64 uVar30;
  int *piVar31;
  longlong lVar32;
  void *pvVar33;
  void *pvVar34;
  uint uVar35;
  FScriptContainerElement *pFVar36;
  longlong lVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  FIdentityFunctor local_res8 [8];
  FScriptContainerElement *local_res10;
  undefined4 local_res18;
  undefined4 local_res20;
  ForAnyElementType local_f8;
  undefined8 local_f0;
  int *local_e8;
  ulonglong local_e0;
  void *local_d8;
  void *local_d0;
  undefined8 local_c8;
  PoolHashBucket *local_c0;
  void *local_b8;
  int *local_b0;
  longlong local_a8;
  ulong64 local_a0;
  undefined1 local_98 [16];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_78 [3] [16];
  
  uVar14 = 1 << ((this->ArenaParams).MinimumAlignmentShift & 0x1f);
  (this->ArenaParams).MinimumAlignment = uVar14;
  if ((uVar14 < 0x10) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("sizeof(FBundleNode) <= ArenaParams.MinimumAlignment",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinnedGPU.cpp"
                          ,0x22e,L""), bVar12)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  (this->ArenaParams).MaxMemoryPerBlockSize =
       1L << ((this->ArenaParams).MaxMemoryPerBlockSizeShift & 0x3f);
  if ((((this->ArenaParams).BasePageSize & 0xf) != 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArenaParams.BasePageSize % sizeof(FPoolInfoLarge) == 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinnedGPU.cpp"
                          ,0x232,L""), bVar12)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  uVar14 = (this->ArenaParams).BasePageSize;
  uVar22 = (this->ArenaParams).AddressLimit;
  uVar15 = uVar14 >> 4;
  this->NumLargePoolsPerPage = (ulonglong)uVar15;
  uVar26 = 1;
  if (uVar15 != 0) {
    uVar26 = uVar15;
  }
  uVar3 = (ulonglong)(uVar26 - 1) * 2 + 1;
  lVar37 = 0x3f;
  if (uVar3 != 0) {
    for (; uVar3 >> lVar37 == 0; lVar37 = lVar37 + -1) {
    }
  }
  local_res18 = (undefined4)lVar37;
  uVar15 = 1;
  if (uVar14 != 0) {
    uVar15 = uVar14;
  }
  uVar3 = (ulonglong)(uVar15 - 1) * 2 + 1;
  uVar8 = 0x3f;
  if (uVar3 != 0) {
    for (; uVar3 >> uVar8 == 0; uVar8 = uVar8 - 1) {
    }
  }
  local_res20 = (undefined4)uVar8;
  (this->PtrToPoolMapping).PtrToPoolPageBitShift = uVar8 & 0xffffffff;
  (this->PtrToPoolMapping).PoolMask = (1L << ((byte)lVar37 & 0x3f)) - 1;
  (this->PtrToPoolMapping).HashKeyShift = uVar8 + lVar37;
  (this->PtrToPoolMapping).MaxHashBuckets = uVar22 >> ((byte)(uVar8 + lVar37) & 0x3f);
  uVar14 = (this->ArenaParams).AllocationGranularity;
  if (((uVar14 & uVar14 - 1) != 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("FMath::IsPowerOfTwo(ArenaParams.AllocationGranularity)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinnedGPU.cpp"
                          ,0x236,L"OS page size must be a power of two"), bVar12)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  uVar14 = (this->ArenaParams).BasePageSize;
  if (((uVar14 & uVar14 - 1) != 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("FMath::IsPowerOfTwo(ArenaParams.BasePageSize)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinnedGPU.cpp"
                          ,0x237,L"OS page size must be a power of two"), bVar12)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pvVar34 = (void *)0x0;
  local_f8.Data = (FScriptContainerElement *)0x0;
  local_f0 = 0;
  if ((this->ArenaParams).bUseStandardSmallPoolSizes == false) {
    (this->ArenaParams).PoolCount = '\0';
    pvVar20 = pvVar34;
  }
  else {
    iVar25 = (this->ArenaParams).MaxStandardPoolSize / (this->ArenaParams).BasePageSize + 0x34;
    iVar16 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (8,4,iVar25,&local_f8,(int *)&local_f0,(int *)((longlong)&local_f0 + 4));
    memset(local_f8.Data + (longlong)iVar16 * 8,0,(longlong)iVar25 << 3);
    uVar14 = (this->ArenaParams).BasePageSize;
    uVar15 = (this->ArenaParams).MaxStandardPoolSize;
    if (((int)(uint)local_f0 < 1) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    bVar13 = FSizeTableEntry::FillSizeTable
                       ((ulonglong)(this->ArenaParams).AllocationGranularity,
                        (FSizeTableEntry *)local_f8.Data,uVar14,uVar15,uVar14);
    iVar16 = (uint)local_f0 - bVar13;
    (this->ArenaParams).PoolCount = bVar13;
    if (iVar16 < 0) {
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x458,
                          L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                         );
      if (bVar12) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    else {
      pvVar20 = (void *)(longlong)(int)(uint)local_f0;
      if (iVar16 == 0) goto LAB_1416a3c20;
    }
    iVar17 = ((uint)local_f0 - iVar16) - (uint)bVar13;
    iVar25 = (uint)local_f0;
    if (iVar17 != 0) {
      memmove(local_f8.Data + (ulonglong)bVar13 * 8,
              local_f8.Data + (ulonglong)bVar13 * 8 + (longlong)iVar16 * 8,(longlong)iVar17 << 3);
      iVar25 = (uint)local_f0;
    }
    local_f0 = CONCAT44(local_f0._4_4_,iVar25 - iVar16);
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,&local_f8,iVar25 - iVar16,(int *)((longlong)&local_f0 + 4));
    pvVar20 = (void *)(local_f0 & 0xffffffff);
  }
LAB_1416a3c20:
  pFVar36 = (this->ArenaParams).AdditionalBlockSizes.AllocatorInstance.Data;
  iVar16 = (this->ArenaParams).AdditionalBlockSizes.ArrayNum;
  pFVar29 = pFVar36 + (longlong)iVar16 * 4;
  while( true ) {
    uVar14 = (uint)pvVar20;
    if ((this->ArenaParams).AdditionalBlockSizes.ArrayNum != iVar16) {
      local_res8[0] = (FIdentityFunctor)0x0;
      `TCheckedPointerIterator<unsigned_int,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
      uVar14 = (uint)local_f0;
    }
    if (pFVar36 == pFVar29) break;
    uVar15 = *(uint *)pFVar36;
    if ((this->ArenaParams).BasePageSize < uVar15) {
      if ((uVar15 & 0xfff) != 0) {
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Size % 4096 == 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinnedGPU.cpp"
                            ,0x24c,L"");
        if (bVar12) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        uVar14 = (uint)local_f0;
      }
      uVar26 = uVar15 >> 0xc;
      if (0xff < uVar26) {
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Size / 4096 <= std::numeric_limits<uint8>::max()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinnedGPU.cpp"
                            ,0x24d,L"");
        if (bVar12) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        uVar14 = (uint)local_f0;
      }
      if (uVar14 == local_f0._4_4_) {
        uVar14 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x408,&local_f8,(int *)((longlong)&local_f0 + 4));
      }
    }
    else {
      if (uVar14 == local_f0._4_4_) {
        uVar14 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x408,&local_f8,(int *)((longlong)&local_f0 + 4));
      }
      uVar26 = 1;
    }
    local_f0 = CONCAT44(local_f0._4_4_,uVar14 + 1);
    FSizeTableEntry::FSizeTableEntry
              ((FSizeTableEntry *)(local_f8.Data + (longlong)(int)uVar14 * 8),uVar15,
               (ulonglong)(this->ArenaParams).AllocationGranularity,(uchar)uVar26,
               (this->ArenaParams).BasePageSize);
    puVar1 = &(this->ArenaParams).PoolCount;
    *puVar1 = *puVar1 + '\x01';
    pvVar20 = (void *)(local_f0 & 0xffffffff);
    pFVar36 = pFVar36 + 4;
  }
  if ((this->ArenaParams).AdditionalBlockSizes.ArrayNum != 0) {
    AlgoImpl::IntroSortInternal<FSizeTableEntry,int,FIdentityFunctor,TLess<void>_>
              ((FSizeTableEntry *)local_f8.Data,uVar14,local_res8[0],(TLess<void>)local_res8[0]);
    uVar14 = (uint)local_f0;
  }
  if ((this->ArenaParams).PoolCount != uVar14) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("ArenaParams.PoolCount == SizeTable.Num()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinnedGPU.cpp"
                        ,0x25b,L"");
    if (bVar12) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    uVar14 = (uint)local_f0;
  }
  if (0xff < (int)uVar14) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("SizeTable.Num() < 256",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinnedGPU.cpp"
                        ,0x25c,L"");
    if (bVar12) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    uVar14 = (uint)local_f0;
  }
  bVar13 = (this->ArenaParams).PoolCount;
  uVar26 = bVar13 - 1;
  uVar15 = 0;
  if ((int)uVar26 < (int)uVar14) {
    uVar15 = ~uVar26 >> 0x1f;
  }
  if ((uVar15 == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  (this->ArenaParams).MaxPoolSize = *(uint *)&local_f8.Data[(ulonglong)bVar13 * 8 + -8].field_0x0;
  if ((((this->ArenaParams).BasePageSize & 0xf) != 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArenaParams.BasePageSize % sizeof(FPoolInfoSmall) == 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinnedGPU.cpp"
                          ,0x25f,L""), bVar12)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  uVar14 = (uint)(this->ArenaParams).PoolCount;
  this->SmallPoolInfosPerPlatformPage = (this->ArenaParams).BasePageSize >> 4;
  iVar16 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x40,8,uVar14,(ForAnyElementType *)&this->GGlobalRecycler,
                      &(this->GGlobalRecycler).Bundles.ArrayNum,
                      &(this->GGlobalRecycler).Bundles.ArrayMax);
  DefaultConstructItems<FMallocBinnedGPU::FGlobalRecycler::FPaddedBundlePointer,int>
            ((this->GGlobalRecycler).Bundles.AllocatorInstance.Data + (longlong)iVar16 * 0x40,uVar14
            );
  piVar31 = &(this->SmallPoolTables).ArrayNum;
  uVar14 = (uint)(this->ArenaParams).PoolCount;
  local_e8 = piVar31;
  iVar16 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x60,8,uVar14,&(this->SmallPoolTables).AllocatorInstance,piVar31,
                      &(this->SmallPoolTables).ArrayMax);
  DefaultConstructItems<FMallocBinnedGPU::FPoolTable,int>
            ((this->SmallPoolTables).AllocatorInstance.Data + (longlong)iVar16 * 0x60,uVar14);
  local_b0 = &(this->SmallBlockSizesReversedShifted).ArrayNum;
  uVar14 = (uint)(this->ArenaParams).PoolCount;
  iVar16 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (2,2,uVar14,&(this->SmallBlockSizesReversedShifted).AllocatorInstance,local_b0,
                      &(this->SmallBlockSizesReversedShifted).ArrayMax);
  memset((this->SmallBlockSizesReversedShifted).AllocatorInstance.Data + (longlong)iVar16 * 2,0,
         (ulonglong)uVar14 * 2);
  uVar14 = (uint)(this->ArenaParams).PoolCount;
  iVar16 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (8,8,uVar14,&(this->PoolBaseVMPtr).AllocatorInstance,
                      &(this->PoolBaseVMPtr).ArrayNum,&(this->PoolBaseVMPtr).ArrayMax);
  memset((this->PoolBaseVMPtr).AllocatorInstance.Data + (longlong)iVar16 * 8,0,
         (ulonglong)uVar14 << 3);
  uVar14 = (uint)(this->ArenaParams).PoolCount;
  iVar16 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x10,8,uVar14,&(this->PoolBaseVMBlocks).AllocatorInstance,
                      &(this->PoolBaseVMBlocks).ArrayNum,&(this->PoolBaseVMBlocks).ArrayMax);
  DefaultConstructItems<FWindowsPlatformMemory::FPlatformVirtualMemoryBlock,int>
            ((this->PoolBaseVMBlocks).AllocatorInstance.Data + (longlong)iVar16 * 0x10,uVar14);
  iVar25 = ((this->ArenaParams).MaxPoolSize >> ((this->ArenaParams).MinimumAlignmentShift & 0x1f)) +
           1;
  iVar16 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (1,1,iVar25,&(this->MemSizeToIndex).AllocatorInstance,
                      &(this->MemSizeToIndex).ArrayNum,&(this->MemSizeToIndex).ArrayMax);
  memset((this->MemSizeToIndex).AllocatorInstance.Data + iVar16,0,(longlong)iVar25);
  uVar14 = (this->ArenaParams).MinimumAlignment;
  (this->ArenaParams).MaximumAlignmentForSmallBlock = uVar14;
  if ((uVar14 == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArenaParams.MaximumAlignmentForSmallBlock > 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinnedGPU.cpp"
                          ,0x26a,L""), bVar12)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  uVar26 = 0;
  uVar15 = 0;
  uVar14 = 0;
  if ((this->ArenaParams).PoolCount != '\0') {
    pTVar2 = &this->MallocedPointers;
    pvVar20 = pvVar34;
    do {
      uVar35 = (uint)pvVar20;
      if (uVar35 != 0) {
        uVar23 = uVar26;
        if ((int)uVar35 < (int)(uint)local_f0) {
          uVar23 = ~uVar35 >> 0x1f;
        }
        if ((uVar23 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pFVar29 = local_f8.Data + (longlong)(int)uVar35 * 8;
        uVar23 = uVar26;
        if ((int)(uVar35 - 1) < (int)(uint)local_f0) {
          uVar23 = -uVar35 >> 0x1f;
        }
        if ((uVar23 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        if ((*(uint *)&pFVar29->field_0x0 <=
             *(uint *)&local_f8.Data[(longlong)(int)uVar35 * 8 + -8].field_0x0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index == 0 || SizeTable[Index - 1].BinSize < SizeTable[Index].BinSize"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinnedGPU.cpp"
                                ,0x26e,L"Small block sizes must be strictly increasing"), bVar12)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
      uVar24 = ~uVar35 >> 0x1f;
      uVar23 = uVar26;
      if ((int)uVar35 < (int)(uint)local_f0) {
        uVar23 = uVar24;
      }
      if ((uVar23 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      lVar37 = (longlong)(int)uVar35;
      if ((*(uint *)&local_f8.Data[lVar37 * 8].field_0x0 % (this->ArenaParams).MinimumAlignment != 0
          ) && (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("SizeTable[Index].BinSize % ArenaParams.MinimumAlignment == 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinnedGPU.cpp"
                                    ,0x26f,
                                    L"Small block size must be a multiple of ArenaParams.MinimumAlignment"
                                   ), bVar12)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      uVar23 = (this->ArenaParams).MaximumAlignmentForSmallBlock;
      if (uVar23 < (this->ArenaParams).AllocationGranularity) {
        do {
          uVar27 = uVar26;
          if ((int)uVar35 < (int)(uint)local_f0) {
            uVar27 = uVar24;
          }
          if ((uVar27 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          piVar31 = local_e8;
          if ((uVar23 * 2 - 1 & *(uint *)&local_f8.Data[lVar37 * 8].field_0x0) != 0) break;
          uVar23 = (this->ArenaParams).MaximumAlignmentForSmallBlock * 2;
          (this->ArenaParams).MaximumAlignmentForSmallBlock = uVar23;
        } while (uVar23 < (this->ArenaParams).AllocationGranularity);
      }
      uVar23 = uVar14;
      if ((int)uVar35 < (int)(uint)local_f0) {
        uVar23 = uVar24;
      }
      if ((uVar23 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      local_res10 = (FScriptContainerElement *)
                    CONCAT44(local_res10._4_4_,*(undefined4 *)&local_f8.Data[lVar37 * 8].field_0x0);
      uVar23 = uVar14;
      if ((int)uVar35 < *piVar31) {
        uVar23 = uVar24;
      }
      if ((uVar23 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      lVar32 = lVar37 * 0x60;
      *(uint *)((this->SmallPoolTables).AllocatorInstance.Data + lVar32) = (uint)local_res10;
      uVar23 = uVar14;
      if ((int)uVar35 < (int)(uint)local_f0) {
        uVar23 = uVar24;
      }
      if ((uVar23 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      local_res10 = (FScriptContainerElement *)
                    CONCAT71(local_res10._1_7_,local_f8.Data[lVar37 * 8 + 4]);
      uVar23 = uVar14;
      if ((int)uVar35 < *local_e8) {
        uVar23 = uVar24;
      }
      if ((uVar23 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      (this->SmallPoolTables).AllocatorInstance.Data[lVar32 + 6] = local_res10._0_1_;
      uVar23 = uVar14;
      if ((int)uVar35 < *local_e8) {
        uVar23 = uVar24;
      }
      if ((uVar23 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      *(undefined8 *)((this->SmallPoolTables).AllocatorInstance.Data + lVar32 + 0x58) = 0;
      uVar23 = uVar14;
      if ((int)uVar35 < *local_e8) {
        uVar23 = uVar24;
      }
      if ((uVar23 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      *(undefined4 *)((this->SmallPoolTables).AllocatorInstance.Data + lVar32 + 0x48) = 0;
      uVar23 = uVar14;
      if ((int)uVar35 < (int)(uint)local_f0) {
        uVar23 = uVar24;
      }
      if ((uVar23 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      local_e0 = (this->ArenaParams).MaxMemoryPerBlockSize /
                 (ulonglong)
                 (*(int *)(local_f8.Data + lVar37 * 8 + 4) *
                 (this->ArenaParams).AllocationGranularity);
      local_res10 = (FScriptContainerElement *)
                    (((local_e0 + this->SmallPoolInfosPerPlatformPage) * 8 - 8) /
                    (ulonglong)this->SmallPoolInfosPerPlatformPage);
      local_b8 = FMemory::Malloc((ulong64)local_res10,0);
      uVar23 = uVar14;
      if ((int)uVar35 < *local_e8) {
        uVar23 = uVar24;
      }
      if ((uVar23 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      *(void **)((this->SmallPoolTables).AllocatorInstance.Data + lVar32 + 0x50) = local_b8;
      uVar23 = uVar15;
      if ((int)uVar35 < *local_e8) {
        uVar23 = uVar24;
      }
      if ((uVar23 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      local_c8 = *(undefined8 *)((this->SmallPoolTables).AllocatorInstance.Data + lVar32 + 0x50);
      pFVar29 = (pTVar2->AllocatorInstance).Data;
      if (((pFVar29 <= (FScriptContainerElement *)&local_c8) &&
          ((FScriptContainerElement *)&local_c8 <
           pFVar29 + (longlong)(this->MallocedPointers).ArrayMax * 8)) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar12)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      iVar16 = (this->MallocedPointers).ArrayNum;
      if (iVar16 == (this->MallocedPointers).ArrayMax) {
        iVar16 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&pTVar2->AllocatorInstance,&(this->MallocedPointers).ArrayMax);
      }
      (this->MallocedPointers).ArrayNum = iVar16 + 1;
      *(undefined8 *)((pTVar2->AllocatorInstance).Data + (longlong)iVar16 * 8) = local_c8;
      uVar23 = uVar15;
      if ((int)uVar35 < *local_e8) {
        uVar23 = uVar24;
      }
      if ((uVar23 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      memset(*(void **)((this->SmallPoolTables).AllocatorInstance.Data + lVar32 + 0x50),0,
             (size_t)local_res10);
      uVar19 = 0x40;
      this->BinnedGPUPoolInfoMemory = this->BinnedGPUPoolInfoMemory + (longlong)local_res10;
      uVar23 = 8;
      iVar16 = 1;
      uVar28 = (uint)local_e0;
      uVar27 = uVar15;
      if (0x40 < uVar28) {
        do {
          uVar27 = uVar23 >> 3;
          uVar19 = uVar19 << 6;
          uVar23 = uVar23 + iVar16 * 0x200;
          iVar16 = iVar16 * 0x40;
        } while (uVar19 < uVar28);
      }
      uVar23 = uVar23 + ((uVar23 + uVar27 * -8) * 8 - uVar28 >> 6) * -8;
      local_res10 = (FScriptContainerElement *)(ulonglong)uVar23;
      local_d8 = FMemory::Malloc((ulonglong)uVar23,0);
      pFVar29 = (pTVar2->AllocatorInstance).Data;
      if (((pFVar29 <= (FScriptContainerElement *)&local_d8) &&
          ((FScriptContainerElement *)&local_d8 <
           pFVar29 + (longlong)(this->MallocedPointers).ArrayMax * 8)) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar12)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      iVar16 = (this->MallocedPointers).ArrayNum;
      if (iVar16 == (this->MallocedPointers).ArrayMax) {
        iVar16 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&pTVar2->AllocatorInstance,&(this->MallocedPointers).ArrayMax);
      }
      (this->MallocedPointers).ArrayNum = iVar16 + 1;
      *(void **)((pTVar2->AllocatorInstance).Data + (longlong)iVar16 * 8) = local_d8;
      if ((local_d8 == (void *)0x0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Bits",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinnedGPU.cpp"
                              ,0x28c,L""), bVar12)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      this->BinnedGPUFreeBitsMemory = this->BinnedGPUFreeBitsMemory + (longlong)local_res10;
      uVar23 = uVar15;
      if ((int)uVar35 < *local_e8) {
        uVar23 = uVar24;
      }
      if ((uVar23 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      FBitTree::FBitTreeInit
                ((FBitTree *)((this->SmallPoolTables).AllocatorInstance.Data + lVar32 + 8),
                 (uint)local_e0,local_d8,(uint)local_res10,false);
      local_d0 = FMemory::Malloc((ulong64)local_res10,0);
      pFVar29 = (pTVar2->AllocatorInstance).Data;
      if (((pFVar29 <= (FScriptContainerElement *)&local_d0) &&
          ((FScriptContainerElement *)&local_d0 <
           pFVar29 + (longlong)(this->MallocedPointers).ArrayMax * 8)) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar12)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      iVar16 = (this->MallocedPointers).ArrayNum;
      if (iVar16 == (this->MallocedPointers).ArrayMax) {
        iVar16 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&pTVar2->AllocatorInstance,&(this->MallocedPointers).ArrayMax);
      }
      (this->MallocedPointers).ArrayNum = iVar16 + 1;
      *(void **)((pTVar2->AllocatorInstance).Data + (longlong)iVar16 * 8) = local_d0;
      if ((local_d0 == (void *)0x0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Bits",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinnedGPU.cpp"
                              ,0x293,L""), bVar12)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      this->BinnedGPUFreeBitsMemory = this->BinnedGPUFreeBitsMemory + (longlong)local_res10;
      uVar23 = uVar26;
      if ((int)uVar35 < *local_e8) {
        uVar23 = uVar24;
      }
      if ((uVar23 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      FBitTree::FBitTreeInit
                ((FBitTree *)((this->SmallPoolTables).AllocatorInstance.Data + lVar32 + 0x28),
                 (uint)local_e0,local_d0,(uint)local_res10,true);
      pvVar20 = (void *)(ulonglong)(uVar35 + 1);
      piVar31 = local_e8;
    } while (uVar35 + 1 < (uint)(this->ArenaParams).PoolCount);
  }
  if (((this->MemSizeToIndex).ArrayNum < 1) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  bVar13 = (this->ArenaParams).MinimumAlignmentShift;
  pFVar29 = (this->MemSizeToIndex).AllocatorInstance.Data;
  pvVar20 = pvVar34;
  pvVar33 = pvVar34;
  if ((this->ArenaParams).MaxPoolSize >> (bVar13 & 0x1f) != 0xffffffff) {
    do {
      while( true ) {
        uVar23 = (uint)pvVar20;
        uVar35 = uVar26;
        if ((int)uVar23 < (int)(uint)local_f0) {
          uVar35 = ~uVar23 >> 0x1f;
        }
        if ((uVar35 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        if ((uint)((int)pvVar33 << (bVar13 & 0x1f)) <=
            *(uint *)&local_f8.Data[(longlong)(int)uVar23 * 8].field_0x0) break;
        pvVar20 = (void *)(ulonglong)(uVar23 + 1);
        if ((uVar23 + 1 == (uint)(this->ArenaParams).PoolCount) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("PoolIndex != ArenaParams.PoolCount",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinnedGPU.cpp"
                                ,0x2a5,L""), bVar12)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
      if ((0xff < uVar23) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("PoolIndex < 256",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinnedGPU.cpp"
                              ,0x2a7,L""), bVar12)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      *pFVar29 = SUB81(pvVar20,0);
      uVar35 = (int)pvVar33 + 1;
      pvVar33 = (void *)(ulonglong)uVar35;
      bVar13 = (this->ArenaParams).MinimumAlignmentShift;
      pFVar29 = pFVar29 + 1;
    } while (uVar35 != ((this->ArenaParams).MaxPoolSize >> (bVar13 & 0x1f)) + 1);
  }
  piVar31 = local_b0;
  bVar13 = (this->ArenaParams).PoolCount;
  uVar26 = (uint)bVar13;
  pvVar20 = pvVar34;
  if (bVar13 != 0) {
    do {
      uVar23 = (uint)pvVar20;
      uVar35 = (uVar26 - uVar23) - 1;
      uVar26 = uVar15;
      if ((int)uVar35 < (int)(uint)local_f0) {
        uVar26 = ~uVar35 >> 0x1f;
      }
      if ((uVar26 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      bVar13 = (this->ArenaParams).MinimumAlignmentShift;
      uVar26 = *(uint *)&local_f8.Data[(longlong)(int)uVar35 * 8].field_0x0;
      uVar35 = uVar15;
      if ((int)uVar23 < *piVar31) {
        uVar35 = ~uVar23 >> 0x1f;
      }
      if ((uVar35 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      *(short *)((this->SmallBlockSizesReversedShifted).AllocatorInstance.Data +
                (longlong)(int)uVar23 * 2) = (short)(uVar26 >> (bVar13 & 0x1f));
      uVar26 = (uint)(this->ArenaParams).PoolCount;
      pvVar20 = (void *)(ulonglong)(uVar23 + 1);
    } while (uVar23 + 1 != uVar26);
  }
  uVar5 = (this->PtrToPoolMapping).MaxHashBuckets;
  uVar30 = uVar5 * 0x20;
  local_c0 = FMemory::Malloc(uVar30,0);
  this->HashBuckets = local_c0;
  pTVar2 = &this->MallocedPointers;
  pFVar29 = (pTVar2->AllocatorInstance).Data;
  if (((pFVar29 <= (FScriptContainerElement *)&local_c0) &&
      ((FScriptContainerElement *)&local_c0 <
       pFVar29 + (longlong)(this->MallocedPointers).ArrayMax * 8)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar12)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  iVar16 = (this->MallocedPointers).ArrayNum;
  piVar31 = &(this->MallocedPointers).ArrayMax;
  if (iVar16 == *piVar31) {
    iVar16 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&pTVar2->AllocatorInstance,piVar31);
  }
  (this->MallocedPointers).ArrayNum = iVar16 + 1;
  *(PoolHashBucket **)((pTVar2->AllocatorInstance).Data + (longlong)iVar16 * 8) = local_c0;
  this->BinnedGPUHashMemory = this->BinnedGPUHashMemory + uVar30;
  if ((this->HashBuckets == (PoolHashBucket *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("HashBuckets",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinnedGPU.cpp"
                          ,0x2b9,L""), bVar12)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  DefaultConstructItems<FMallocBinnedGPU::PoolHashBucket,unsigned___int64>(this->HashBuckets,uVar5);
  pvVar20 = pvVar34;
  if ((this->ArenaParams).bUseSeparateVMPerPool == false) {
    local_a8 = (ulonglong)(this->ArenaParams).PoolCount * (this->ArenaParams).MaxMemoryPerBlockSize;
    UE::Core::Private::Function::CheckCallable(*(void **)&(this->ArenaParams).ReserveVM);
    pcVar9 = *(code **)&(this->ArenaParams).ReserveVM;
    plVar6 = *(longlong **)&(this->ArenaParams).ReserveVM.field_0x28;
    plVar21 = (longlong *)&(this->ArenaParams).ReserveVM.field_0x10;
    if (plVar6 != (longlong *)0x0) {
      plVar21 = plVar6;
    }
    uVar18 = (**(code **)(*plVar21 + 8))();
    (*pcVar9)(&local_88,uVar18,&local_a8);
    *(undefined8 *)&this->PoolBaseVMBlock = local_88;
    *(undefined8 *)&(this->PoolBaseVMBlock).field_0x8 = uStack_80;
    pvVar20 = *(void **)&this->PoolBaseVMBlock;
  }
  local_res10 = (FScriptContainerElement *)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar13 = 0;
  pvVar33 = pvVar34;
  local_e8 = pvVar20;
  if ((this->ArenaParams).PoolCount != '\0') {
    do {
      uVar26 = (uint)pvVar33;
      local_98._0_12_ = ZEXT812(0);
      auVar11 = local_98;
      if (local_e8 == (void *)0x0) {
        local_a0 = (this->ArenaParams).MaxMemoryPerBlockSize;
        UE::Core::Private::Function::CheckCallable(*(void **)&(this->ArenaParams).ReserveVM);
        plVar6 = *(longlong **)&(this->ArenaParams).ReserveVM.field_0x28;
        pcVar9 = *(code **)&(this->ArenaParams).ReserveVM;
        plVar21 = (longlong *)&(this->ArenaParams).ReserveVM.field_0x10;
        if (plVar6 != (longlong *)0x0) {
          plVar21 = plVar6;
        }
        uVar18 = (**(code **)(*plVar21 + 8))();
        (*pcVar9)(local_78,uVar18,&local_a0);
        uVar38 = local_78[0]._0_4_;
        uVar39 = local_78[0]._4_4_;
        uVar40 = local_78[0]._8_4_;
        uVar41 = local_78[0]._12_4_;
        local_98 = local_78[0];
        piVar31 = local_78[0]._0_8_;
      }
      else {
        uVar38 = 0;
        uVar39 = 0;
        local_98._8_4_ = 0;
        piVar31 = local_e8;
        uVar40 = local_98._8_4_;
        uVar41 = local_98._12_4_;
        local_e8 = (void *)((longlong)local_e8 + (this->ArenaParams).MaxMemoryPerBlockSize);
        local_98 = auVar11;
      }
      local_b8 = piVar31;
      if (uVar26 == 0) {
LAB_1416a5182:
        uVar35 = uVar15;
        if ((int)uVar26 < (this->PoolBaseVMPtr).ArrayNum) {
          uVar35 = ~uVar26 >> 0x1f;
        }
        if ((uVar35 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        *(int **)((this->PoolBaseVMPtr).AllocatorInstance.Data + (longlong)(int)uVar26 * 8) =
             piVar31;
        uVar35 = uVar15;
        if ((int)uVar26 < (this->PoolBaseVMBlocks).ArrayNum) {
          uVar35 = ~uVar26 >> 0x1f;
        }
        if ((uVar35 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pFVar29 = (this->PoolBaseVMBlocks).AllocatorInstance.Data + (longlong)(int)uVar26 * 0x10;
        *(undefined4 *)pFVar29 = uVar38;
        *(undefined4 *)(pFVar29 + 4) = uVar39;
        *(undefined4 *)(pFVar29 + 8) = uVar40;
        *(undefined4 *)(pFVar29 + 0xc) = uVar41;
      }
      else {
        uVar35 = uVar15;
        if ((int)(uVar26 - 1) < (this->PoolBaseVMPtr).ArrayNum) {
          uVar35 = -uVar26 >> 0x1f;
        }
        if ((uVar35 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        if (*(void **)((this->PoolBaseVMPtr).AllocatorInstance.Data + (longlong)(int)uVar26 * 8 + -8
                      ) <= piVar31) goto LAB_1416a5182;
        pvVar20 = pvVar34;
        uVar35 = 0;
        if (uVar26 != 0) {
          do {
            uVar35 = (uint)pvVar20;
            uVar23 = uVar15;
            if ((int)uVar35 < (this->PoolBaseVMPtr).ArrayNum) {
              uVar23 = ~uVar35 >> 0x1f;
            }
            if ((uVar23 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            if (piVar31 < *(void **)((this->PoolBaseVMPtr).AllocatorInstance.Data +
                                    (longlong)(int)uVar35 * 8)) goto LAB_1416a4f1f;
            uVar35 = uVar35 + 1;
            pvVar20 = (void *)(ulonglong)uVar35;
          } while (uVar35 < uVar26);
        }
        if ((uVar26 <= uVar35) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("InsertIndex < Index",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinnedGPU.cpp"
                                ,0x2e2,L""), bVar12)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
LAB_1416a4f1f:
        if (uVar35 < uVar26) {
          do {
            uVar26 = (uint)pvVar33;
            uVar23 = uVar15;
            if ((int)(uVar26 - 1) < (this->PoolBaseVMPtr).ArrayNum) {
              uVar23 = -uVar26 >> 0x1f;
            }
            if ((uVar23 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            local_e0 = (longlong)(int)uVar26 - 1;
            local_b0 = *(int **)((this->PoolBaseVMPtr).AllocatorInstance.Data + local_e0 * 8);
            uVar23 = uVar15;
            if ((int)uVar26 < (this->PoolBaseVMPtr).ArrayNum) {
              uVar23 = ~uVar26 >> 0x1f;
            }
            if ((uVar23 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            *(int **)((this->PoolBaseVMPtr).AllocatorInstance.Data + (longlong)(int)uVar26 * 8) =
                 local_b0;
            uVar23 = uVar15;
            if ((int)(uVar26 - 1) < (this->PoolBaseVMBlocks).ArrayNum) {
              uVar23 = -uVar26 >> 0x1f;
            }
            if ((uVar23 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            pFVar29 = (this->PoolBaseVMBlocks).AllocatorInstance.Data + local_e0 * 0x10;
            uVar18 = *(undefined8 *)pFVar29;
            uVar10 = *(undefined8 *)(pFVar29 + 8);
            uVar23 = uVar15;
            if ((int)uVar26 < (this->PoolBaseVMBlocks).ArrayNum) {
              uVar23 = ~uVar26 >> 0x1f;
            }
            if ((uVar23 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            pvVar33 = (void *)(ulonglong)(uVar26 - 1);
            pFVar29 = (this->PoolBaseVMBlocks).AllocatorInstance.Data + (longlong)(int)uVar26 * 0x10
            ;
            *(undefined8 *)pFVar29 = uVar18;
            *(undefined8 *)(pFVar29 + 8) = uVar10;
          } while (uVar35 < uVar26 - 1);
          piVar31 = local_b8;
          uVar26 = (uint)local_res10;
        }
        uVar23 = uVar15;
        if ((int)uVar35 < (this->PoolBaseVMPtr).ArrayNum) {
          uVar23 = ~uVar35 >> 0x1f;
        }
        if ((uVar23 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        *(int **)((this->PoolBaseVMPtr).AllocatorInstance.Data + (longlong)(int)uVar35 * 8) =
             piVar31;
        uVar23 = uVar15;
        if ((int)uVar35 < (this->PoolBaseVMBlocks).ArrayNum) {
          uVar23 = ~uVar35 >> 0x1f;
        }
        if ((uVar23 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pFVar29 = (this->PoolBaseVMBlocks).AllocatorInstance.Data + (longlong)(int)uVar35 * 0x10;
        *(undefined4 *)pFVar29 = uVar38;
        *(undefined4 *)(pFVar29 + 4) = uVar39;
        *(undefined4 *)(pFVar29 + 8) = uVar40;
        *(undefined4 *)(pFVar29 + 0xc) = uVar41;
      }
      bVar13 = (this->ArenaParams).PoolCount;
      uVar26 = uVar26 + 1;
      local_res10 = (FScriptContainerElement *)CONCAT44(local_res10._4_4_,uVar26);
      pvVar33 = (void *)(ulonglong)uVar26;
    } while (uVar26 < bVar13);
  }
  uVar15 = uVar14;
  if ((int)(bVar13 - 1) < (this->PoolBaseVMPtr).ArrayNum) {
    uVar15 = ~(bVar13 - 1) >> 0x1f;
  }
  if ((uVar15 == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  uVar4 = (this->ArenaParams).PoolCount;
  this->HighestPoolBaseVMPtr =
       *(uchar **)((this->PoolBaseVMPtr).AllocatorInstance.Data + (ulonglong)bVar13 * 8 + -8);
  pvVar20 = pvVar34;
  pvVar33 = pvVar34;
  if (uVar4 != '\x01') {
    do {
      uVar15 = (uint)pvVar20;
      uVar23 = uVar15 + 1;
      uVar35 = ~uVar23 >> 0x1f;
      uVar26 = uVar14;
      if ((int)uVar23 < (this->PoolBaseVMPtr).ArrayNum) {
        uVar26 = uVar35;
      }
      if ((uVar26 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      local_res10 = (this->PoolBaseVMPtr).AllocatorInstance.Data;
      lVar37 = (longlong)(int)uVar23;
      uVar23 = ~uVar15 >> 0x1f;
      uVar26 = uVar14;
      if ((int)uVar15 < (this->PoolBaseVMPtr).ArrayNum) {
        uVar26 = uVar23;
      }
      if ((uVar26 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      if ((*(ulonglong *)(local_res10 + lVar37 * 8) <=
           *(ulonglong *)((this->PoolBaseVMPtr).AllocatorInstance.Data + (longlong)(int)uVar15 * 8))
         && (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                ("PoolBaseVMPtr[Index + 1] > PoolBaseVMPtr[Index]",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinnedGPU.cpp"
                                 ,0x2f5,L""), bVar12)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      uVar26 = uVar14;
      if ((int)(uVar15 + 1) < (this->PoolBaseVMPtr).ArrayNum) {
        uVar26 = uVar35;
      }
      if ((uVar26 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      local_res10 = (this->PoolBaseVMPtr).AllocatorInstance.Data + lVar37 * 8;
      uVar26 = uVar14;
      if ((int)uVar15 < (this->PoolBaseVMPtr).ArrayNum) {
        uVar26 = uVar23;
      }
      if ((uVar26 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      if ((*(ulonglong *)local_res10 <
           *(longlong *)((this->PoolBaseVMPtr).AllocatorInstance.Data + (longlong)(int)uVar15 * 8) +
           (this->ArenaParams).MaxMemoryPerBlockSize) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("PoolBaseVMPtr[Index + 1] >= PoolBaseVMPtr[Index] + ArenaParams.MaxMemoryPerBlockSize"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinnedGPU.cpp"
                              ,0x2f6,L""), bVar12)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      uVar26 = uVar14;
      if ((int)(uVar15 + 1) < (this->PoolBaseVMPtr).ArrayNum) {
        uVar26 = uVar35;
      }
      if ((uVar26 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pFVar29 = (this->PoolBaseVMPtr).AllocatorInstance.Data;
      uVar26 = uVar14;
      if ((int)uVar15 < (this->PoolBaseVMPtr).ArrayNum) {
        uVar26 = uVar23;
      }
      if ((uVar26 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pvVar7 = (void *)(this->ArenaParams).MaxMemoryPerBlockSize;
      pvVar20 = (void *)(ulonglong)(uVar15 + 1);
      pvVar33 = (void *)((longlong)pvVar33 +
                        ((*(longlong *)(pFVar29 + lVar37 * 8) -
                         *(longlong *)
                          ((this->PoolBaseVMPtr).AllocatorInstance.Data + (longlong)(int)uVar15 * 8)
                         ) - (longlong)pvVar7));
    } while (uVar15 + 1 < (this->ArenaParams).PoolCount - 1);
    if (pvVar33 != (void *)0x0) {
      bVar12 = (this->ArenaParams).bUseSeparateVMPerPool;
      if (pvVar33 < pvVar7) {
        if ((bVar12 == false) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("ArenaParams.bUseSeparateVMPerPool",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinnedGPU.cpp"
                                ,0x2ff,L""), bVar12)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pvVar34 = (void *)(this->ArenaParams).MaxMemoryPerBlockSize;
      }
      else {
        if ((bVar12 == false) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("ArenaParams.bUseSeparateVMPerPool",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinnedGPU.cpp"
                                ,0x304,L""), bVar12)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        uVar22 = (ulonglong)(this->ArenaParams).PoolCount;
        pvVar34 = (void *)(((uVar22 - 2) + (longlong)pvVar33) / (uVar22 - 1) +
                          (this->ArenaParams).MaxMemoryPerBlockSize);
      }
    }
  }
  this->PoolSearchDiv = (ulong64)pvVar34;
  if ((FSizeTableEntry *)local_f8.Data != (FSizeTableEntry *)0x0) {
    FMemory::Free(local_f8.Data);
  }
  return;
}

// IsInternallyThreadSafe @ 1416b0bd0

bool __thiscall FMallocBinnedGPU::IsInternallyThreadSafe(FMallocBinnedGPU *this)

{
  return true;
}

// Malloc @ 1416b3310

void * __thiscall FMallocBinnedGPU::Malloc(FMallocBinnedGPU *this,ulong64 param_1,uint param_2)

{
  byte bVar1;
  ushort uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  longlong *plVar7;
  void *pvVar8;
  uint uVar9;
  uint uVar10;
  ulong64 local_res10;
  
  uVar9 = (this->ArenaParams).MinimumAlignment;
  if (uVar9 < param_2) {
    uVar9 = param_2;
  }
  local_res10 = param_1;
  bVar4 = AdjustSmallBlockSizeForAlignment(this,&local_res10,uVar9);
  if ((bVar4) && ((this->ArenaParams).bPerThreadCaches != false)) {
    plVar7 = (longlong *)0x0;
    if (this->BinnedGPUTlsSlot != 0xffffffff) {
      plVar7 = TlsGetValue(this->BinnedGPUTlsSlot);
    }
    if (plVar7 != (longlong *)0x0) {
      uVar5 = BoundSizeToPoolIndex(this,local_res10);
      uVar10 = ((this->ArenaParams).PoolCount - uVar5) - 1;
      uVar6 = 0;
      if ((int)uVar10 < (this->SmallBlockSizesReversedShifted).ArrayNum) {
        uVar6 = ~uVar10 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pvVar8 = (void *)(*pcVar3)();
        return pvVar8;
      }
      uVar2 = *(ushort *)
               ((this->SmallBlockSizesReversedShifted).AllocatorInstance.Data +
               (longlong)(int)uVar10 * 2);
      bVar1 = (this->ArenaParams).MinimumAlignmentShift;
      uVar6 = 0;
      if ((int)uVar5 < (int)plVar7[2]) {
        uVar6 = ~uVar5 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pvVar8 = (void *)(*pcVar3)();
        return pvVar8;
      }
      pvVar8 = FFreeBlockList::PopFromFront
                         ((FFreeBlockList *)((longlong)(int)uVar5 * 0x20 + plVar7[1]),this,uVar5);
      if (pvVar8 != (void *)0x0) {
        *plVar7 = *plVar7 + (ulonglong)((uint)uVar2 << (bVar1 & 0x1f));
        return pvVar8;
      }
    }
  }
  pvVar8 = MallocExternal(this,local_res10,uVar9);
  return pvVar8;
}

// MallocExternal @ 1416b34a0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
FMallocBinnedGPU::MallocExternal(FMallocBinnedGPU *this,ulong64 param_1,uint param_2)

{
  uchar uVar1;
  longlong *plVar2;
  code *pcVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  void *pvVar9;
  FPerThreadFreeBlockLists *this_00;
  FPoolInfoSmall *pFVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  ulong64 uVar13;
  FPoolInfoLarge *pFVar14;
  uint uVar15;
  longlong *plVar16;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar17;
  longlong lVar18;
  uint uVar19;
  FScriptContainerElement *pFVar20;
  int local_res8;
  ulong64 local_res10;
  uint local_res18 [2];
  uint local_res20 [2];
  ulonglong local_80;
  FPoolInfoSmall *local_78;
  FScriptContainerElement *local_70;
  void *local_68;
  LPCRITICAL_SECTION local_60;
  ulonglong local_58;
  ulong64 local_50 [2];
  
  local_res10 = param_1;
  if (((param_2 & param_2 - 1) != 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("FMath::IsPowerOfTwo(Alignment)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinnedGPU.cpp"
                         ,0x356,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    pvVar9 = (void *)(*pcVar3)();
    return pvVar9;
  }
  bVar6 = AdjustSmallBlockSizeForAlignment(this,&local_res10,param_2);
  uVar4 = local_res10;
  if (bVar6) {
    uVar7 = BoundSizeToPoolIndex(this,local_res10);
    this_00 = (FPerThreadFreeBlockLists *)0x0;
    lVar18 = (longlong)(int)uVar7;
    uVar17 = 0;
    if ((this->ArenaParams).bPerThreadCaches != false) {
      if (this->BinnedGPUTlsSlot != 0xffffffff) {
        this_00 = TlsGetValue(this->BinnedGPUTlsSlot);
      }
      if ((this_00 != (FPerThreadFreeBlockLists *)0x0) &&
         (bVar6 = FPerThreadFreeBlockLists::ObtainRecycledPartial
                            (this_00,&this->ArenaParams,&this->GGlobalRecycler,uVar7), bVar6)) {
        uVar8 = uVar17;
        if ((int)uVar7 < (this_00->FreeLists).ArrayNum) {
          uVar8 = ~uVar7 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          pvVar9 = (void *)(*pcVar3)();
          return pvVar9;
        }
        pvVar9 = FFreeBlockList::PopFromFront
                           ((FFreeBlockList *)
                            ((this_00->FreeLists).AllocatorInstance.Data + lVar18 * 0x20),this,uVar7
                           );
        if (pvVar9 != (void *)0x0) {
          uVar7 = ((this->ArenaParams).PoolCount - uVar7) - 1;
          if ((int)uVar7 < (this->SmallBlockSizesReversedShifted).ArrayNum) {
            uVar17 = ~uVar7 >> 0x1f;
          }
          if ((uVar17 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar3 = (code *)swi(3);
            pvVar9 = (void *)(*pcVar3)();
            return pvVar9;
          }
          this_00->AllocatedMemory =
               this_00->AllocatedMemory +
               (ulonglong)
               ((uint)*(ushort *)
                       ((this->SmallBlockSizesReversedShifted).AllocatorInstance.Data +
                       (longlong)(int)uVar7 * 2) <<
               ((this->ArenaParams).MinimumAlignmentShift & 0x1f));
          return pvVar9;
        }
      }
    }
    lpCriticalSection = (LPCRITICAL_SECTION)&this->Mutex;
    local_60 = lpCriticalSection;
    EnterCriticalSection(lpCriticalSection);
    uVar8 = uVar17;
    if ((int)uVar7 < (this->SmallPoolTables).ArrayNum) {
      uVar8 = ~uVar7 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar3 = (code *)swi(3);
      pvVar9 = (void *)(*pcVar3)();
      return pvVar9;
    }
    local_70 = (this->SmallPoolTables).AllocatorInstance.Data + lVar18 * 0x60;
    uVar8 = FBitTree::NextAllocBit((FBitTree *)(local_70 + 0x28));
    local_res18[0] = uVar8;
    if ((uVar8 == 0xffffffff) ||
       (pFVar10 = Private::GetOrCreatePoolInfoSmall(this,uVar7,uVar8), local_78 = pFVar10,
       pFVar10 == (FPoolInfoSmall *)0x0)) {
      pFVar10 = PushNewPoolToFront(this,this,*(uint *)local_70,uVar7,local_res18);
      uVar8 = local_res18[0];
    }
    local_78 = pFVar10;
    BlockPointerFromIndecies
              (this,uVar7,uVar8,(uint)(byte)local_70[6] * (this->ArenaParams).AllocationGranularity)
    ;
    local_68 = FPoolInfoSmall::AllocateRegularBlock
                         (pFVar10,this,(this->ArenaParams).MinimumAlignmentShift);
    uVar19 = ((this->ArenaParams).PoolCount - uVar7) - 1;
    uVar15 = uVar17;
    if ((int)uVar19 < (this->SmallBlockSizesReversedShifted).ArrayNum) {
      uVar15 = ~uVar19 >> 0x1f;
    }
    if ((uVar15 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar3 = (code *)swi(3);
      pvVar9 = (void *)(*pcVar3)();
      return pvVar9;
    }
    this->BinnedGPUAllocatedSmallPoolMemory =
         this->BinnedGPUAllocatedSmallPoolMemory +
         (ulonglong)
         ((uint)*(ushort *)
                 ((this->SmallBlockSizesReversedShifted).AllocatorInstance.Data +
                 (longlong)(int)uVar19 * 2) << ((this->ArenaParams).MinimumAlignmentShift & 0x1f));
    uVar1 = (this->ArenaParams).EmptyCacheAllocExtra;
    if (((uVar1 != '\0') && (this_00 != (FPerThreadFreeBlockLists *)0x0)) &&
       (local_res8 = 0, pFVar10 = local_78, uVar1 != '\0')) {
      do {
        if (pFVar10->Canary != 0x69ffeed) {
          UE::Logging::Private::BasicFatalLog
                    ((FStaticBasicLogRecord *)
                     &`public:_void___cdecl_FMallocBinnedGPU::FPoolInfoSmall::CheckCanary(FMallocBinnedGPU::FPoolInfoSmall::ECanary)const___ptr64'
                      ::__l6::LOG_Static,(FLogCategoryBase *)&LogMemory);
        }
        lpCriticalSection = local_60;
        uVar8 = local_res18[0];
        if (pFVar10->FirstFreeProxy == (FFreeBlock *)0x0) break;
        uVar8 = *(uint *)local_70;
        uVar15 = uVar17;
        if ((int)uVar7 < (this_00->FreeLists).ArrayNum) {
          uVar15 = ~uVar7 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          pvVar9 = (void *)(*pcVar3)();
          return pvVar9;
        }
        pvVar9 = local_68;
        pFVar20 = (this_00->FreeLists).AllocatorInstance.Data + lVar18 * 0x20;
        if ((local_68 == (void *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("InPtr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\MallocBinnedGPU.h"
                               ,0x104,L""), bVar6)) {
          pcVar3 = (code *)swi(3);
          pvVar9 = (void *)(*pcVar3)();
          return pvVar9;
        }
        if ((this->ArenaParams).MaxSizePerBundle <= uVar8 * *(int *)(pFVar20 + 8) ||
            (uint)(this->ArenaParams).MaxBlocksPerBundle <= *(uint *)(pFVar20 + 8)) {
          lpCriticalSection = local_60;
          uVar8 = local_res18[0];
          if (*(longlong *)(pFVar20 + 0x10) != 0) break;
          *(undefined8 *)(pFVar20 + 0x10) = *(undefined8 *)pFVar20;
          *(undefined8 *)(pFVar20 + 0x18) = *(undefined8 *)(pFVar20 + 8);
          *(undefined8 *)pFVar20 = 0;
          *(undefined4 *)(pFVar20 + 8) = 0;
        }
        puVar11 = ::operator_new(0x20);
        if (puVar11 == (undefined8 *)0x0) {
          puVar11 = (undefined8 *)0x0;
        }
        else {
          puVar11[3] = pvVar9;
          if ((pvVar9 == (void *)0x0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("GPUMemory",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\MallocBinnedGPU.h"
                                 ,0x61,L""), bVar6)) {
            pcVar3 = (code *)swi(3);
            pvVar9 = (void *)(*pcVar3)();
            return pvVar9;
          }
        }
        pFVar10 = local_78;
        *puVar11 = *(undefined8 *)pFVar20;
        puVar11[1] = 0;
        *(int *)(pFVar20 + 8) = *(int *)(pFVar20 + 8) + 1;
        *(undefined8 **)pFVar20 = puVar11;
        LOCK();
        this->GPUProxyMemory = (TAtomic<__int64>)((longlong)this->GPUProxyMemory + 0x20);
        UNLOCK();
        local_68 = FPoolInfoSmall::AllocateRegularBlock
                             (local_78,this,(this->ArenaParams).MinimumAlignmentShift);
        local_res8 = local_res8 + 1;
        lpCriticalSection = local_60;
        uVar8 = local_res18[0];
      } while (local_res8 < (int)(uint)(this->ArenaParams).EmptyCacheAllocExtra);
    }
    pFVar10 = local_78;
    if (local_78->Canary != 0x69ffeed) {
      UE::Logging::Private::BasicFatalLog
                ((FStaticBasicLogRecord *)
                 &`public:_void___cdecl_FMallocBinnedGPU::FPoolInfoSmall::CheckCanary(FMallocBinnedGPU::FPoolInfoSmall::ECanary)const___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogMemory);
    }
    if (pFVar10->FirstFreeProxy == (FFreeBlock *)0x0) {
      FBitTree::AllocBit((FBitTree *)(local_70 + 0x28),uVar8);
    }
    LeaveCriticalSection(lpCriticalSection);
  }
  else {
    local_res20[0] = 0;
    local_80 = 0;
    local_50[0] = local_res10;
    local_58 = (ulonglong)param_2;
    UE::Core::Private::Function::CheckCallable(*(void **)&(this->ArenaParams).LargeBlockAlloc);
    pcVar3 = *(code **)&(this->ArenaParams).LargeBlockAlloc;
    plVar2 = *(longlong **)&(this->ArenaParams).LargeBlockAlloc.field_0x28;
    plVar16 = (longlong *)&(this->ArenaParams).LargeBlockAlloc.field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar16 = plVar2;
    }
    uVar12 = (**(code **)(*plVar16 + 8))();
    pvVar9 = (void *)(*pcVar3)(uVar12,local_50,&local_58,&local_80,local_res20);
    if (((ulonglong)pvVar9 & (ulonglong)param_2 - 1) != 0) {
      UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogMemory);
    }
    if (pvVar9 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      Private::OutOfMemory(uVar4,0);
    }
    uVar13 = PoolIndexFromPtr(this,pvVar9);
    if ((uVar13 < (this->ArenaParams).PoolCount) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsOSAllocation(Result)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinnedGPU.cpp"
                           ,0x39d,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      pvVar9 = (void *)(*pcVar3)();
      return pvVar9;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)&this->Mutex);
    this->BinnedGPUAllocatedLargePoolMemoryWAlignment =
         this->BinnedGPUAllocatedLargePoolMemoryWAlignment + local_80;
    this->BinnedGPUAllocatedLargePoolMemory = this->BinnedGPUAllocatedLargePoolMemory + uVar4;
    pFVar14 = Private::GetOrCreatePoolInfoLarge(this,pvVar9);
    if ((((uVar4 == 0) || (local_80 < uVar4)) || (local_80 < (this->ArenaParams).BasePageSize)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Size > 0 && Size <= CommitSize && CommitSize >= ArenaParams.BasePageSize"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinnedGPU.cpp"
                           ,0x3a5,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      pvVar9 = (void *)(*pcVar3)();
      return pvVar9;
    }
    uVar5 = local_80;
    uVar17 = local_res20[0];
    if (pFVar14->Canary != 0xf4d) {
      UE::Logging::Private::BasicFatalLog
                ((FStaticBasicLogRecord *)
                 &`public:_void___cdecl_FMallocBinnedGPU::FPoolInfoLarge::CheckCanary(FMallocBinnedGPU::FPoolInfoLarge::ECanary)const___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogMemory);
    }
    if (((uint)uVar4 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InRequestedBytes != 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinnedGPU.cpp"
                           ,0xbd,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      pvVar9 = (void *)(*pcVar3)();
      return pvVar9;
    }
    if ((uVar5 < (uVar4 & 0xffffffff)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCommittedBytes >= InRequestedBytes",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinnedGPU.cpp"
                           ,0xbe,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      pvVar9 = (void *)(*pcVar3)();
      return pvVar9;
    }
    pFVar14->AllocSize = (uint)uVar4;
    pFVar14->OSCommitSize = (uint)uVar5;
    pFVar14->VMSizeDivVirtualSizeAlignment = uVar17;
    LeaveCriticalSection((LPCRITICAL_SECTION)&this->Mutex);
    local_68 = pvVar9;
  }
  return local_68;
}

// OutOfMemory @ 1416b5dd0

void __cdecl FMallocBinnedGPU::Private::OutOfMemory(ulong64 param_1,uint param_2)

{
                    /* WARNING: Subroutine does not return */
  FGenericPlatformMemory::OnOutOfMemory(param_1,param_2);
}

// PoolIndexFromPtr @ 1416b6180

ulong64 __thiscall FMallocBinnedGPU::PoolIndexFromPtr(FMallocBinnedGPU *this,void *param_1)

{
  byte bVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  ulong64 uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  
  iVar2 = (this->PoolBaseVMPtr).ArrayNum;
  if (this->PoolSearchDiv == 0) {
    if ((iVar2 < 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar7 = (*pcVar3)();
      return uVar7;
    }
    return (ulonglong)
           ((longlong)param_1 - *(longlong *)(this->PoolBaseVMPtr).AllocatorInstance.Data) >>
           ((this->ArenaParams).MaxMemoryPerBlockSizeShift & 0x3f);
  }
  bVar1 = (this->ArenaParams).PoolCount;
  if ((iVar2 < 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar7 = (*pcVar3)();
    return uVar7;
  }
  if (param_1 < *(void **)(this->PoolBaseVMPtr).AllocatorInstance.Data ||
      this->HighestPoolBaseVMPtr + (this->ArenaParams).MaxMemoryPerBlockSize <= param_1) {
    return (ulonglong)bVar1;
  }
  if (((this->PoolBaseVMPtr).ArrayNum < 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar7 = (*pcVar3)();
    return uVar7;
  }
  uVar8 = (ulonglong)((longlong)param_1 - *(longlong *)(this->PoolBaseVMPtr).AllocatorInstance.Data)
          / this->PoolSearchDiv;
  uVar9 = (ulonglong)(this->ArenaParams).PoolCount;
  uVar11 = uVar9 - 1;
  if (uVar8 < uVar9) {
    uVar11 = uVar8;
  }
  uVar10 = (uint)uVar11;
  uVar5 = 0;
  uVar6 = uVar5;
  if ((int)uVar10 < (this->PoolBaseVMPtr).ArrayNum) {
    uVar6 = ~uVar10 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar7 = (*pcVar3)();
    return uVar7;
  }
  if (param_1 < *(void **)((this->PoolBaseVMPtr).AllocatorInstance.Data + (longlong)(int)uVar10 * 8)
     ) {
    do {
      uVar11 = uVar11 - 1;
      if (((this->ArenaParams).PoolCount <= uVar11) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("PoolIndex < ArenaParams.PoolCount",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\MallocBinnedGPU.h"
                             ,0x1a7,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar7 = (*pcVar3)();
        return uVar7;
      }
      uVar10 = (uint)uVar11;
      uVar6 = uVar5;
      if ((int)uVar10 < (this->PoolBaseVMPtr).ArrayNum) {
        uVar6 = ~uVar10 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar7 = (*pcVar3)();
        return uVar7;
      }
    } while (param_1 < *(void **)((this->PoolBaseVMPtr).AllocatorInstance.Data +
                                 (longlong)(int)uVar10 * 8));
    uVar6 = 0;
    if ((int)uVar10 < (this->PoolBaseVMPtr).ArrayNum) {
      uVar6 = ~uVar10 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar7 = (*pcVar3)();
      return uVar7;
    }
    if (param_1 < (void *)(*(longlong *)
                            ((this->PoolBaseVMPtr).AllocatorInstance.Data +
                            (longlong)(int)uVar10 * 8) + (this->ArenaParams).MaxMemoryPerBlockSize))
    {
      return uVar11;
    }
  }
  else {
    uVar6 = 0;
    if ((int)uVar10 < (this->PoolBaseVMPtr).ArrayNum) {
      uVar6 = ~uVar10 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar7 = (*pcVar3)();
      return uVar7;
    }
    if (param_1 < (void *)(*(longlong *)
                            ((this->PoolBaseVMPtr).AllocatorInstance.Data +
                            (longlong)(int)uVar10 * 8) + (this->ArenaParams).MaxMemoryPerBlockSize))
    {
      return uVar11;
    }
    do {
      uVar11 = uVar11 + 1;
      if (((this->ArenaParams).PoolCount <= uVar11) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("PoolIndex < ArenaParams.PoolCount",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\MallocBinnedGPU.h"
                             ,0x1b3,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar7 = (*pcVar3)();
        return uVar7;
      }
      uVar10 = (uint)uVar11;
      uVar6 = uVar5;
      if ((int)uVar10 < (this->PoolBaseVMPtr).ArrayNum) {
        uVar6 = ~uVar10 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar7 = (*pcVar3)();
        return uVar7;
      }
    } while ((void *)(*(longlong *)
                       ((this->PoolBaseVMPtr).AllocatorInstance.Data + (longlong)(int)uVar10 * 8) +
                     (this->ArenaParams).MaxMemoryPerBlockSize) <= param_1);
    if ((int)uVar10 < (this->PoolBaseVMPtr).ArrayNum) {
      uVar5 = ~uVar10 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar7 = (*pcVar3)();
      return uVar7;
    }
    if (*(void **)((this->PoolBaseVMPtr).AllocatorInstance.Data + (longlong)(int)uVar10 * 8) <=
        param_1) {
      return uVar11;
    }
  }
  return (ulonglong)(this->ArenaParams).PoolCount;
}

// PushNewPoolToFront @ 1416b9040

/* WARNING: Enum "Type": Some values do not have unique names */

FPoolInfoSmall * __thiscall
FMallocBinnedGPU::PushNewPoolToFront
          (FMallocBinnedGPU *this,FMallocBinnedGPU *param_1,uint param_2,uint param_3,uint *param_4)

{
  uchar *puVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  FPoolInfoSmall *pFVar8;
  FFreeBlock *pFVar9;
  FFreeBlock *pFVar10;
  FPlatformVirtualMemoryBlock *this_00;
  uint uVar11;
  longlong lVar12;
  
  lVar12 = (longlong)(int)param_3;
  uVar11 = ~param_3 >> 0x1f;
  uVar5 = 0;
  if ((int)param_3 < (param_1->SmallPoolTables).ArrayNum) {
    uVar5 = uVar11;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar8 = (FPoolInfoSmall *)(*pcVar3)();
    return pFVar8;
  }
  pFVar2 = (param_1->SmallPoolTables).AllocatorInstance.Data;
  uVar5 = (uint)(byte)pFVar2[lVar12 * 0x60 + 6] * (param_1->ArenaParams).AllocationGranularity;
  uVar6 = FBitTree::AllocBit((FBitTree *)(pFVar2 + lVar12 * 0x60 + 8));
  if (uVar6 == 0xffffffff) {
                    /* WARNING: Subroutine does not return */
    Private::OutOfMemory((ulonglong)(param_2 + 1),0);
  }
  pFVar9 = (FFreeBlock *)BlockPointerFromIndecies(this,param_3,uVar6,uVar5);
  if ((param_1->ArenaParams).bUseSeparateVMPerPool == false) {
    this_00 = &param_1->PoolBaseVMBlock;
  }
  else {
    uVar7 = 0;
    if ((int)param_3 < (param_1->PoolBaseVMBlocks).ArrayNum) {
      uVar7 = uVar11;
    }
    if ((uVar7 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar8 = (FPoolInfoSmall *)(*pcVar3)();
      return pFVar8;
    }
    this_00 = (FPlatformVirtualMemoryBlock *)
              ((param_1->PoolBaseVMBlocks).AllocatorInstance.Data + lVar12 * 0x10);
  }
  FWindowsPlatformMemory::FPlatformVirtualMemoryBlock::Commit
            (this_00,(longlong)pFVar9 - *(longlong *)this_00,(ulonglong)uVar5);
  uVar7 = 0;
  if ((int)param_3 < (this->PoolBaseVMPtr).ArrayNum) {
    uVar7 = uVar11;
  }
  if ((uVar7 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar8 = (FPoolInfoSmall *)(*pcVar3)();
    return pFVar8;
  }
  puVar1 = (uchar *)(((ulonglong)uVar5 -
                     *(longlong *)((this->PoolBaseVMPtr).AllocatorInstance.Data + lVar12 * 8)) +
                    (longlong)pFVar9);
  if (*(uchar **)(pFVar2 + lVar12 * 0x60 + 0x58) < puVar1) {
    *(uchar **)(pFVar2 + lVar12 * 0x60 + 0x58) = puVar1;
  }
  pFVar10 = ::operator_new(0x20);
  if (pFVar10 == (FFreeBlock *)0x0) {
    pFVar10 = (FFreeBlock *)0x0;
  }
  else {
    pFVar10[1].NextFreeBlock = pFVar9;
    if ((pFVar9 == (FFreeBlock *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("GPUMemory",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\MallocBinnedGPU.h"
                           ,0x61,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar8 = (FPoolInfoSmall *)(*pcVar3)();
      return pFVar8;
    }
  }
  LOCK();
  param_1->GPUProxyMemory = (TAtomic<__int64>)((longlong)param_1->GPUProxyMemory + 0x20);
  UNLOCK();
  uVar11 = param_2 >> ((param_1->ArenaParams).MinimumAlignmentShift & 0x1f);
  pFVar10->BlockSizeShifted = (ushort)uVar11;
  pFVar10->PoolIndex = (uchar)param_3;
  pFVar10->Canary = 0xc3;
  pFVar10->NextFreeBlock = (FFreeBlock *)0x0;
  if (((0xfe < param_3) || (0xffff < uVar11)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InPoolIndex < ((uint8) 0xff) && (InBlockSize >> MinimumAlignmentShift) <= ((uint16) 0xffff)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\MallocBinnedGPU.h"
                         ,0x72,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar8 = (FPoolInfoSmall *)(*pcVar3)();
    return pFVar8;
  }
  pFVar10->NumFreeBlocks = uVar5 / param_2;
  this->BinnedGPUAllocatedOSSmallPoolMemory =
       this->BinnedGPUAllocatedOSSmallPoolMemory + (ulonglong)uVar5;
  if ((((ulonglong)pFVar9 & (ulonglong)(param_1->ArenaParams).AllocationGranularity - 1) != 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsAligned(FreePtr, Allocator.ArenaParams.AllocationGranularity)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinnedGPU.cpp"
                         ,499,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar8 = (FPoolInfoSmall *)(*pcVar3)();
    return pFVar8;
  }
  pFVar8 = Private::GetOrCreatePoolInfoSmall(this,param_3,uVar6);
  if (pFVar8->Canary != 0x69ffeed) {
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`public:_void___cdecl_FMallocBinnedGPU::FPoolInfoSmall::CheckCanary(FMallocBinnedGPU::FPoolInfoSmall::ECanary)const___ptr64'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogMemory);
  }
  pFVar8->Taken = 0;
  pFVar8->FirstFreeProxy = pFVar10;
  FBitTree::FreeBit((FBitTree *)(pFVar2 + lVar12 * 0x60 + 0x28),uVar6);
  *param_4 = uVar6;
  return pFVar8;
}

// QuantizeSize @ 1416b9920

ulong64 __thiscall
FMallocBinnedGPU::QuantizeSize(FMallocBinnedGPU *this,ulong64 param_1,uint param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  uint uVar6;
  
  if ((this->ArenaParams).MinimumAlignment < param_2 || (this->ArenaParams).MaxPoolSize < param_1) {
    uVar3 = (this->ArenaParams).AllocationGranularity;
    if (uVar3 < param_2) {
      uVar3 = param_2;
    }
    uVar5 = (param_1 - 1) + (ulonglong)uVar3 & ~((ulonglong)uVar3 - 1);
  }
  else {
    uVar3 = BoundSizeToPoolIndex(this,param_1);
    uVar6 = ((this->ArenaParams).PoolCount - uVar3) - 1;
    uVar3 = 0;
    if ((int)uVar6 < (this->SmallBlockSizesReversedShifted).ArrayNum) {
      uVar3 = ~uVar6 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return uVar4;
      }
    }
    uVar5 = (ulonglong)
            ((uint)*(ushort *)
                    ((this->SmallBlockSizesReversedShifted).AllocatorInstance.Data +
                    (longlong)(int)uVar6 * 2) << ((this->ArenaParams).MinimumAlignmentShift & 0x1f))
    ;
  }
  if (uVar5 < param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SizeOut >= Count",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\MallocBinnedGPU.h"
                       ,0x25c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return uVar4;
    }
  }
  return uVar5;
}

// Realloc @ 1416badb0

void * __thiscall
FMallocBinnedGPU::Realloc(FMallocBinnedGPU *this,void *param_1,ulong64 param_2,uint param_3)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"MallocBinnedGPU cannot realloc memory because the memory is assumed to not be writable by the CPU\""
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\MallocBinnedGPU.h"
                     ,0x22d,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// SetupTLSCachesOnCurrentThread @ 1416c1370

void __thiscall FMallocBinnedGPU::SetupTLSCachesOnCurrentThread(FMallocBinnedGPU *this)

{
  code *pcVar1;
  bool bVar2;
  DWORD DVar3;
  
  if ((this->ArenaParams).bPerThreadCaches == false) {
    return;
  }
  if (this->BinnedGPUTlsSlot == 0xffffffff) {
    DVar3 = TlsAlloc();
    this->BinnedGPUTlsSlot = DVar3;
    if (DVar3 == 0xffffffff) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("FPlatformTLS::IsValidTlsSlot(BinnedGPUTlsSlot)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinnedGPU.cpp"
                         ,0x450,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  FPerThreadFreeBlockLists::SetTLS(this);
  return;
}

// Trim @ 1416c2e00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FMallocBinnedGPU::Trim(FMallocBinnedGPU *this,bool param_1)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<_public:_virtual_void___cdecl_FMallocBinnedGPU::Trim(bool)_::_5_::FStat_STAT_FMallocBinnedGPU_Trim>
  FVar6;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar7;
  undefined ***pppuVar8;
  FNameEntryId FVar9;
  FName FVar10;
  FNameEntryId FVar11;
  undefined1 auStackY_e8 [32];
  LARGE_INTEGER local_88;
  FName local_80;
  FStatMessage local_70;
  code *local_58 [2];
  undefined **local_48;
  FMallocBinnedGPU *local_40;
  undefined ***local_30;
  ulonglong local_28;
  
  if (!param_1) {
    return;
  }
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  if ((this->ArenaParams).bPerThreadCaches == false) {
    return;
  }
  FVar11.Value = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_FMallocBinnedGPU_Trim ==
        (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FMallocBinnedGPU::Trim(bool)_::_5_::FStat_STAT_FMallocBinnedGPU_Trim>
         )0x0) {
      pFVar5 = ::FName::FName((FName *)&local_88.s,"STAT_FMallocBinnedGPU_Trim");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FMallocBinnedGPU_Trim,*pFVar5,
                 L"STAT_FMallocBinnedGPU_Trim","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,
                 true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar6 = StatPtr_STAT_FMallocBinnedGPU_Trim;
  if (StatPtr_STAT_FMallocBinnedGPU_Trim ==
      (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FMallocBinnedGPU::Trim(bool)_::_5_::FStat_STAT_FMallocBinnedGPU_Trim>
       )0x0) {
    pFVar5 = ::FName::FName((FName *)&local_70,"STAT_FMallocBinnedGPU_Trim");
    FVar6 = (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FMallocBinnedGPU::Trim(bool)_::_5_::FStat_STAT_FMallocBinnedGPU_Trim>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FMallocBinnedGPU_Trim,*pFVar5,
                         L"STAT_FMallocBinnedGPU_Trim","STATGROUP_Quick","STATCAT_Advanced",L"Quick"
                         ,true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar10 = *(FName *)FVar6;
  bVar2 = false;
  bVar4 = false;
  local_80.ComparisonIndex.Value = 0;
  local_80.Number = 0;
  FVar9 = FVar10.ComparisonIndex.Value;
  uVar7 = FVar10.Number;
  if ((FVar9.Value != 0) || (uVar7 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_88.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_88.s,(char *)*(FName *)((longlong)FVar6 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_88.s.LowPart = FVar9.Value;
        local_88.s.HighPart = uVar7;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_88.s,(wchar_t *)*(FName *)((longlong)FVar6 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinnedGPU.cpp"
                   ,0x439);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_88.s.LowPart = FVar9.Value;
      local_88.s.HighPart = uVar7;
      local_80 = FVar10;
      FThreadStats::AddMessage(FVar10,CycleScopeStart);
      bVar3 = true;
      FVar11.Value = local_80.ComparisonIndex.Value;
      goto LAB_1416c2fa2;
    }
  }
  bVar3 = false;
  FVar10 = local_80;
LAB_1416c2fa2:
  local_30 = (undefined ***)0x0;
  local_48 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FMallocBinnedGPU::Trim'::`5'::<lambda_1>,0,0>::_vftable_;
  local_58[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FMallocBinnedGPU::Trim'::__l5::<lambda_1>,void,enum_ENamedThreads::Type>
                ::Call;
  local_40 = this;
  FTaskGraphInterface::BroadcastSlow_OnlyUseForSpecialPurposes
            (false,false,(TFunction<void___cdecl(ENamedThreads::Type)> *)local_58);
  if (local_58[0] != (code *)0x0) {
    pppuVar8 = &local_48;
    if (local_30 != (undefined ***)0x0) {
      pppuVar8 = local_30;
    }
    (*(code *)(*pppuVar8)[2])();
  }
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar10 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_70.NameAndInfo.Number = FVar10.Number & 0xffff6fff | 0x6000;
      local_70.NameAndInfo.Index.Value = FVar11.Value;
      QueryPerformanceCounter(&local_88);
      local_70.StatData.Pad[4] = '\0';
      local_70.StatData.Pad[5] = '\0';
      local_70.StatData.Pad[6] = '\0';
      local_70.StatData.Pad[7] = '\0';
      local_70.StatData.Pad[0] = local_88.s.LowPart._0_1_;
      local_70.StatData.Pad[1] = local_88.s.LowPart._1_1_;
      local_70.StatData.Pad[2] = local_88.s.LowPart._2_1_;
      local_70.StatData.Pad[3] = local_88.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_70);
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
  return;
}

// ValidateHeap @ 1416c7db0

bool __thiscall FMallocBinnedGPU::ValidateHeap(FMallocBinnedGPU *this)

{
  return true;
}

