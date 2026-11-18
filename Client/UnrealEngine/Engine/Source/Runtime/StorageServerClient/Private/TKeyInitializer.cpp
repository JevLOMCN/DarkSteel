// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StorageServerClient
// Functions: 2

// operator<FIoChunkId,TMap<TInterval<unsigned___int64>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,int,0>_>_>_TTuple<FIoChunkId,TMap<TInterval<unsigned___int64>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,int,0>_>_> @ 148cad570

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<FIoChunkId,TMap<TInterval<unsigned___int64>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,int,0>_>_>
* __thiscall
TKeyInitializer<FIoChunkId_const_&>::
operator<FIoChunkId,TMap<TInterval<unsigned___int64>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,int,0>_>_>_TTuple<FIoChunkId,TMap<TInterval<unsigned___int64>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,int,0>_>_>
          (TKeyInitializer<FIoChunkId_const_&> *this,
          TTuple<FIoChunkId,TMap<TInterval<unsigned___int64>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,int,0>_>_>
          *__return_storage_ptr__)

{
  FIoChunkId *pFVar1;
  int iVar2;
  uchar uVar3;
  uchar uVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  uchar uVar9;
  undefined1 auStackY_98 [32];
  undefined1 local_68 [24];
  undefined8 uStack_50;
  void *local_48;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  void *local_28;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_98;
  pFVar1 = this->Key;
  local_30 = 0;
  local_68._16_8_ = 0;
  uStack_50 = 0;
  local_20 = 0;
  local_68._0_8_ = (FScriptContainerElement *)0x0;
  local_68._8_8_ = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  local_3c = 0x80;
  local_38 = 0xffffffff;
  local_34 = 0;
  local_28 = (void *)0x0;
  uVar3 = pFVar1->Id[1];
  uVar4 = pFVar1->Id[2];
  uVar5 = pFVar1->Id[3];
  uVar6 = pFVar1->Id[4];
  uVar7 = pFVar1->Id[5];
  uVar8 = pFVar1->Id[6];
  uVar9 = pFVar1->Id[7];
  __return_storage_ptr__->field_0x0 = pFVar1->Id[0];
  __return_storage_ptr__->field_0x1 = uVar3;
  __return_storage_ptr__->field_0x2 = uVar4;
  __return_storage_ptr__->field_0x3 = uVar5;
  __return_storage_ptr__->field_0x4 = uVar6;
  __return_storage_ptr__->field_0x5 = uVar7;
  __return_storage_ptr__->field_0x6 = uVar8;
  __return_storage_ptr__->field_0x7 = uVar9;
  uVar3 = pFVar1->Id[9];
  uVar4 = pFVar1->Id[10];
  uVar5 = pFVar1->Id[0xb];
  __return_storage_ptr__->field_0x8 = pFVar1->Id[8];
  __return_storage_ptr__->field_0x9 = uVar3;
  __return_storage_ptr__->field_0xa = uVar4;
  __return_storage_ptr__->field_0xb = uVar5;
  TMap<TInterval<unsigned___int64>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,int,0>_>
  ::
  TMap<TInterval<unsigned___int64>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,int,0>_>
            ((TMap<TInterval<unsigned___int64>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,int,0>_>
              *)&__return_storage_ptr__->field_0x10,
             (TMap<TInterval<unsigned___int64>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,int,0>_>
              *)local_68);
  local_20 = local_20 & 0xffffffff00000000;
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  iVar2 = SUB84(local_68._8_8_,4);
  local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)local_68,0,(int *)(local_68 + 0xc));
  }
  local_38 = 0xffffffff;
  local_34 = 0;
  local_40 = 0;
  if (0x80 < local_3c) {
    local_3c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_68 + 0x10),0);
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  if ((FScriptContainerElement *)local_68._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_68._0_8_);
  }
  return __return_storage_ptr__;
}

// operator<FIoChunkId,TMap<TInterval<unsigned___int64>,StorageServer::FCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,StorageServer::FCacheEntry,0>_>_>_TTuple<FIoChunkId,TMap<TInterval<unsigned___int64>,StorageServer::FCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,StorageServer::FCacheEntry,0>_>_> @ 148cad6a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<FIoChunkId,TMap<TInterval<unsigned___int64>,StorageServer::FCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,StorageServer::FCacheEntry,0>_>_>
* __thiscall
TKeyInitializer<FIoChunkId_const_&>::
operator<FIoChunkId,TMap<TInterval<unsigned___int64>,StorageServer::FCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,StorageServer::FCacheEntry,0>_>_>_TTuple<FIoChunkId,TMap<TInterval<unsigned___int64>,StorageServer::FCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,StorageServer::FCacheEntry,0>_>_>
          (TKeyInitializer<FIoChunkId_const_&> *this,
          TTuple<FIoChunkId,TMap<TInterval<unsigned___int64>,StorageServer::FCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,StorageServer::FCacheEntry,0>_>_>
          *__return_storage_ptr__)

{
  FIoChunkId *pFVar1;
  int iVar2;
  uchar uVar3;
  uchar uVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  uchar uVar9;
  undefined1 auStackY_98 [32];
  undefined1 local_68 [24];
  undefined8 uStack_50;
  void *local_48;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  void *local_28;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_98;
  pFVar1 = this->Key;
  local_30 = 0;
  local_68._16_8_ = 0;
  uStack_50 = 0;
  local_20 = 0;
  local_68._0_8_ = (FScriptContainerElement *)0x0;
  local_68._8_8_ = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  local_3c = 0x80;
  local_38 = 0xffffffff;
  local_34 = 0;
  local_28 = (void *)0x0;
  uVar3 = pFVar1->Id[1];
  uVar4 = pFVar1->Id[2];
  uVar5 = pFVar1->Id[3];
  uVar6 = pFVar1->Id[4];
  uVar7 = pFVar1->Id[5];
  uVar8 = pFVar1->Id[6];
  uVar9 = pFVar1->Id[7];
  __return_storage_ptr__->field_0x0 = pFVar1->Id[0];
  __return_storage_ptr__->field_0x1 = uVar3;
  __return_storage_ptr__->field_0x2 = uVar4;
  __return_storage_ptr__->field_0x3 = uVar5;
  __return_storage_ptr__->field_0x4 = uVar6;
  __return_storage_ptr__->field_0x5 = uVar7;
  __return_storage_ptr__->field_0x6 = uVar8;
  __return_storage_ptr__->field_0x7 = uVar9;
  uVar3 = pFVar1->Id[9];
  uVar4 = pFVar1->Id[10];
  uVar5 = pFVar1->Id[0xb];
  __return_storage_ptr__->field_0x8 = pFVar1->Id[8];
  __return_storage_ptr__->field_0x9 = uVar3;
  __return_storage_ptr__->field_0xa = uVar4;
  __return_storage_ptr__->field_0xb = uVar5;
  TMap<TInterval<unsigned___int64>,StorageServer::FCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,StorageServer::FCacheEntry,0>_>
  ::
  TMap<TInterval<unsigned___int64>,StorageServer::FCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,StorageServer::FCacheEntry,0>_>
            ((TMap<TInterval<unsigned___int64>,StorageServer::FCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,StorageServer::FCacheEntry,0>_>
              *)&__return_storage_ptr__->field_0x10,
             (TMap<TInterval<unsigned___int64>,StorageServer::FCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,StorageServer::FCacheEntry,0>_>
              *)local_68);
  local_20 = local_20 & 0xffffffff00000000;
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  iVar2 = SUB84(local_68._8_8_,4);
  local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x50,8,0,(ForAnyElementType *)local_68,0,(int *)(local_68 + 0xc));
  }
  local_38 = 0xffffffff;
  local_34 = 0;
  local_40 = 0;
  if (0x80 < local_3c) {
    local_3c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_68 + 0x10),0);
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  if ((FScriptContainerElement *)local_68._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_68._0_8_);
  }
  return __return_storage_ptr__;
}

