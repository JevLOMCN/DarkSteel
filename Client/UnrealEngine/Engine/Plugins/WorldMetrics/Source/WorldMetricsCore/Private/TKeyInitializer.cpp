// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WorldMetricsCore
// Functions: 1

// operator<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension>_TTuple<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension> @ 14f130fc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TTuple<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension> * __thiscall
TKeyInitializer<TSubclassOf<UWorldMetricsExtension>_const_&>::
operator<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension>_TTuple<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension>
          (TKeyInitializer<TSubclassOf<UWorldMetricsExtension>_const_&> *this,
          TTuple<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension>
          *__return_storage_ptr__)

{
  UClass *pUVar1;
  int iVar2;
  undefined1 auStackY_2c8 [32];
  UObject *local_298;
  undefined1 local_290 [520];
  undefined4 local_88;
  int local_84;
  TBitArray<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> local_80;
  undefined8 uStack_68;
  ForElementType<FSetElementId> local_20;
  int local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_2c8;
  memset(&local_298,0,0x288);
  local_84 = 0x20;
  local_80.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_80.NumBits = ___xmm_00000000ffffffff0000002000000000;
  local_80.MaxBits = _UNK_150631d74;
  uStack_68 = _UNK_150631d78;
  local_20 = (ForElementType<FSetElementId>)0x0;
  local_18 = 0;
  pUVar1 = (this->Key->Class).field0_0x0.DebugPtr;
  *(UClass **)__return_storage_ptr__ = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  *(UObject **)&__return_storage_ptr__->field_0x8 = local_298;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_298 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_298);
  }
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
  ::
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
            ((TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
              *)&__return_storage_ptr__->field_0x10,
             (TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
              *)local_290);
  local_18 = 0;
  if (local_20 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_20);
  }
  local_88 = 0;
  if (local_84 != 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_>_>
              (0x10,8,0,(ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_> *)
                        local_290,0,&local_84);
  }
  iVar2 = local_80.MaxBits;
  uStack_68 = 0xffffffff;
  local_80._16_8_ = (ulonglong)(uint)local_80.MaxBits << 0x20;
  if (0x20 < (uint)iVar2) {
    local_80.NumBits = 0;
    local_80.MaxBits = 0x20;
    TBitArray<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::Realloc(&local_80,0);
  }
  if (local_80.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_80.AllocatorInstance.SecondaryData);
  }
  if ((ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_>)local_290._512_8_ !=
      (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_>)0x0) {
    FMemory::Free((void *)local_290._512_8_);
  }
  return __return_storage_ptr__;
}

