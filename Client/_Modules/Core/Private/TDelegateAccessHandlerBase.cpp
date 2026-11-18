// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// GetWriteAccessScope @ 14149aaf0

FWriteAccessScope * __thiscall
TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
          (TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *this,
          FWriteAccessScope *__return_storage_ptr__)

{
  ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*> FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*> FVar5;
  ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*> FVar6;
  FWriteAccessScope *pFVar7;
  FWriteAccessScope *local_18 [2];
  
  (__return_storage_ptr__->DestructionSentinel).AccessType = Writer;
  (__return_storage_ptr__->DestructionSentinel).bDestroyed = false;
  (__return_storage_ptr__->DestructionSentinel).Accessor = &this->AccessDetector;
  FVar5 = (ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*>)
          FMRSWRecursiveAccessDetector::GetDestructionSentinelStackTls();
  FVar1 = *(ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*> *)
           ((longlong)FVar5 + 0x20);
  FVar6 = FVar5;
  if (FVar1 != (ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*>)0x0) {
    FVar6 = FVar1;
  }
  local_18[0] = __return_storage_ptr__;
  if ((ulonglong)FVar6 <= local_18) {
    FVar6 = FVar5;
    if (FVar1 != (ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*>)0x0) {
      FVar6 = FVar1;
    }
    if ((local_18 <
         (FWriteAccessScope **)((longlong)FVar6 + (longlong)*(int *)((longlong)FVar5 + 0x2c) * 8))
       && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar7 = (FWriteAccessScope *)(*pcVar2)();
      return pFVar7;
    }
  }
  iVar4 = *(int *)((longlong)FVar5 + 0x28);
  if (iVar4 == *(int *)((longlong)FVar5 + 0x2c)) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*>_>
                      (0x808,(ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*> *
                             )FVar5,(int *)((longlong)FVar5 + 0x2c));
  }
  *(int *)((longlong)FVar5 + 0x28) = iVar4 + 1;
  if (*(ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*> *)
       ((longlong)FVar5 + 0x20) !=
      (ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*>)0x0) {
    FVar5 = *(ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*> *)
             ((longlong)FVar5 + 0x20);
  }
  *(FWriteAccessScope **)((longlong)FVar5 + (longlong)iVar4 * 8) = local_18[0];
  FMRSWRecursiveAccessDetector::AcquireWriteAccess(&this->AccessDetector);
  return __return_storage_ptr__;
}

// GetReadAccessScope @ 1415c7a30

FReadAccessScope * __thiscall
TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
          (TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *this,
          FReadAccessScope *__return_storage_ptr__)

{
  ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*> FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*> FVar5;
  ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*> FVar6;
  FReadAccessScope *pFVar7;
  FReadAccessScope *local_18 [2];
  
  (__return_storage_ptr__->DestructionSentinel).AccessType = Reader;
  (__return_storage_ptr__->DestructionSentinel).bDestroyed = false;
  (__return_storage_ptr__->DestructionSentinel).Accessor = &this->AccessDetector;
  FVar5 = (ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*>)
          FMRSWRecursiveAccessDetector::GetDestructionSentinelStackTls();
  FVar1 = *(ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*> *)
           ((longlong)FVar5 + 0x20);
  FVar6 = FVar5;
  if (FVar1 != (ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*>)0x0) {
    FVar6 = FVar1;
  }
  local_18[0] = __return_storage_ptr__;
  if ((ulonglong)FVar6 <= local_18) {
    FVar6 = FVar5;
    if (FVar1 != (ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*>)0x0) {
      FVar6 = FVar1;
    }
    if ((local_18 <
         (FReadAccessScope **)((longlong)FVar6 + (longlong)*(int *)((longlong)FVar5 + 0x2c) * 8)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar7 = (FReadAccessScope *)(*pcVar2)();
      return pFVar7;
    }
  }
  iVar4 = *(int *)((longlong)FVar5 + 0x28);
  if (iVar4 == *(int *)((longlong)FVar5 + 0x2c)) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*>_>
                      (0x808,(ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*> *
                             )FVar5,(int *)((longlong)FVar5 + 0x2c));
  }
  *(int *)((longlong)FVar5 + 0x28) = iVar4 + 1;
  if (*(ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*> *)
       ((longlong)FVar5 + 0x20) !=
      (ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*>)0x0) {
    FVar5 = *(ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*> *)
             ((longlong)FVar5 + 0x20);
  }
  *(FReadAccessScope **)((longlong)FVar5 + (longlong)iVar4 * 8) = local_18[0];
  FMRSWRecursiveAccessDetector::AcquireReadAccess(&this->AccessDetector);
  return __return_storage_ptr__;
}

