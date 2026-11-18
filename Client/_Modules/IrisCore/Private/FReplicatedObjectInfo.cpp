// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 7

// FReplicatedObjectInfo @ 1442add90

FReplicatedObjectInfo * __thiscall
UE::Net::Private::FReplicationReader::FReplicatedObjectInfo::FReplicatedObjectInfo
          (FReplicatedObjectInfo *this,FReplicatedObjectInfo *param_1)

{
  uchar *puVar1;
  uint uVar2;
  
  (this->UnresolvedChangeMaskOrPointer).ChangeMaskOrPointer =
       (param_1->UnresolvedChangeMaskOrPointer).ChangeMaskOrPointer;
  *(undefined8 *)&(this->UnresolvedObjectReferences).field_0x0 = 0;
  *(undefined8 *)&(this->UnresolvedObjectReferences).field_0x8 = 0;
  *(undefined8 *)&(this->UnresolvedObjectReferences).field_0x20 = 0;
  *(undefined4 *)&(this->UnresolvedObjectReferences).field_0x28 = 0;
  *(undefined4 *)&(this->UnresolvedObjectReferences).field_0x2c = 0x80;
  *(undefined4 *)&(this->UnresolvedObjectReferences).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->UnresolvedObjectReferences).field_0x34 = 0;
  *(undefined8 *)&(this->UnresolvedObjectReferences).field_0x40 = 0;
  *(undefined4 *)&(this->UnresolvedObjectReferences).field_0x48 = 0;
  TSet<TTuple<unsigned_int,UE::Net::FNetRefHandle>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>,FDefaultSetAllocator>
  ::
  Move<TSet<TTuple<unsigned_int,UE::Net::FNetRefHandle>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>,FDefaultSetAllocator>_>
            ((TSet<TTuple<unsigned_int,UE::Net::FNetRefHandle>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>,FDefaultSetAllocator>
              *)&this->UnresolvedObjectReferences,
             (TSet<TTuple<unsigned_int,UE::Net::FNetRefHandle>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>,FDefaultSetAllocator>
              *)&param_1->UnresolvedObjectReferences);
  *(undefined8 *)&(this->ResolvedDynamicObjectReferences).field_0x0 = 0;
  *(undefined8 *)&(this->ResolvedDynamicObjectReferences).field_0x8 = 0;
  *(undefined8 *)&(this->ResolvedDynamicObjectReferences).field_0x20 = 0;
  *(undefined4 *)&(this->ResolvedDynamicObjectReferences).field_0x28 = 0;
  *(undefined4 *)&(this->ResolvedDynamicObjectReferences).field_0x2c = 0x80;
  *(undefined4 *)&(this->ResolvedDynamicObjectReferences).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ResolvedDynamicObjectReferences).field_0x34 = 0;
  *(undefined8 *)&(this->ResolvedDynamicObjectReferences).field_0x40 = 0;
  *(undefined4 *)&(this->ResolvedDynamicObjectReferences).field_0x48 = 0;
  TSet<TTuple<unsigned_int,UE::Net::FNetRefHandle>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>,FDefaultSetAllocator>
  ::
  Move<TSet<TTuple<unsigned_int,UE::Net::FNetRefHandle>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>,FDefaultSetAllocator>_>
            ((TSet<TTuple<unsigned_int,UE::Net::FNetRefHandle>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>,FDefaultSetAllocator>
              *)&this->ResolvedDynamicObjectReferences,
             (TSet<TTuple<unsigned_int,UE::Net::FNetRefHandle>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>,FDefaultSetAllocator>
              *)&param_1->ResolvedDynamicObjectReferences);
  *(undefined8 *)&(this->UnresolvedHandleCount).field_0x0 = 0;
  *(undefined8 *)&(this->UnresolvedHandleCount).field_0x8 = 0;
  *(undefined8 *)&(this->UnresolvedHandleCount).field_0x20 = 0;
  *(undefined4 *)&(this->UnresolvedHandleCount).field_0x28 = 0;
  *(undefined4 *)&(this->UnresolvedHandleCount).field_0x2c = 0x80;
  *(undefined4 *)&(this->UnresolvedHandleCount).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->UnresolvedHandleCount).field_0x34 = 0;
  *(undefined8 *)&(this->UnresolvedHandleCount).field_0x40 = 0;
  *(undefined4 *)&(this->UnresolvedHandleCount).field_0x48 = 0;
  TSet<TTuple<UE::Net::FNetRefHandle,short>,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,short,0>,FDefaultSetAllocator>
  ::
  Move<TSet<TTuple<UE::Net::FNetRefHandle,short>,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,short,0>,FDefaultSetAllocator>_>
            ((TSet<TTuple<UE::Net::FNetRefHandle,short>,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,short,0>,FDefaultSetAllocator>
              *)&this->UnresolvedHandleCount,
             (TSet<TTuple<UE::Net::FNetRefHandle,short>,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,short,0>,FDefaultSetAllocator>
              *)&param_1->UnresolvedHandleCount);
  *(undefined8 *)&(this->ResolvedDynamicHandleCount).field_0x0 = 0;
  *(undefined8 *)&(this->ResolvedDynamicHandleCount).field_0x8 = 0;
  *(undefined8 *)&(this->ResolvedDynamicHandleCount).field_0x20 = 0;
  *(undefined4 *)&(this->ResolvedDynamicHandleCount).field_0x28 = 0;
  *(undefined4 *)&(this->ResolvedDynamicHandleCount).field_0x2c = 0x80;
  *(undefined4 *)&(this->ResolvedDynamicHandleCount).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ResolvedDynamicHandleCount).field_0x34 = 0;
  *(undefined8 *)&(this->ResolvedDynamicHandleCount).field_0x40 = 0;
  *(undefined4 *)&(this->ResolvedDynamicHandleCount).field_0x48 = 0;
  TSet<TTuple<UE::Net::FNetRefHandle,short>,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,short,0>,FDefaultSetAllocator>
  ::
  Move<TSet<TTuple<UE::Net::FNetRefHandle,short>,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,short,0>,FDefaultSetAllocator>_>
            ((TSet<TTuple<UE::Net::FNetRefHandle,short>,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,short,0>,FDefaultSetAllocator>
              *)&this->ResolvedDynamicHandleCount,
             (TSet<TTuple<UE::Net::FNetRefHandle,short>,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,short,0>,FDefaultSetAllocator>
              *)&param_1->ResolvedDynamicHandleCount);
  puVar1 = param_1->StoredBaselines[1];
  this->StoredBaselines[0] = param_1->StoredBaselines[0];
  this->StoredBaselines[1] = puVar1;
  this->InternalIndex = param_1->InternalIndex;
  this->field7_0x15c = param_1->field7_0x15c;
  (this->field7_0x15c)._s_1.ChangeMaskBitCount = (param_1->field7_0x15c)._s_1.ChangeMaskBitCount;
  uVar2 = ((this->field7_0x15c).Value ^ (param_1->field7_0x15c).Value) & 0x10000 ^
          (this->field7_0x15c).Value;
  (this->field7_0x15c).Value = uVar2;
  uVar2 = (uVar2 ^ (param_1->field7_0x15c).Value) & 0x20000 ^ uVar2;
  (this->field7_0x15c).Value = uVar2;
  uVar2 = (uVar2 ^ (param_1->field7_0x15c).Value) & 0x40000 ^ uVar2;
  (this->field7_0x15c).Value = uVar2;
  uVar2 = (uVar2 ^ (param_1->field7_0x15c).Value) & 0x80000 ^ uVar2;
  (this->field7_0x15c).Value = uVar2;
  uVar2 = (uVar2 ^ (param_1->field7_0x15c).Value) & 0x100000 ^ uVar2;
  (this->field7_0x15c).Value = uVar2;
  uVar2 = (uVar2 ^ (param_1->field7_0x15c).Value) & 0x200000 ^ uVar2;
  (this->field7_0x15c).Value = uVar2;
  uVar2 = (uVar2 ^ (param_1->field7_0x15c).Value) & 0xc00000 ^ uVar2;
  (this->field7_0x15c).Value = uVar2;
  (this->field7_0x15c).Value = (uVar2 ^ (param_1->field7_0x15c).Value) & 0x3000000 ^ uVar2;
  *(uint *)&this->field_0x160 =
       (ZPULL(*(undefined4 *)&this->field_0x160,0,7) ^ param_1->Padding) & 0x7f ^
       *(undefined4 *)&this->field_0x160;
  return this;
}

// FReplicatedObjectInfo @ 1442adfa0

FReplicatedObjectInfo * __thiscall
UE::Net::Private::FReplicationReader::FReplicatedObjectInfo::FReplicatedObjectInfo
          (FReplicatedObjectInfo *this)

{
  (this->UnresolvedChangeMaskOrPointer).ChangeMaskOrPointer = 0;
  *(undefined8 *)&this->UnresolvedObjectReferences = 0;
  *(undefined8 *)&(this->UnresolvedObjectReferences).field_0x8 = 0;
  *(undefined8 *)&(this->UnresolvedObjectReferences).field_0x20 = 0;
  *(undefined4 *)&(this->UnresolvedObjectReferences).field_0x28 = 0;
  *(undefined4 *)&(this->UnresolvedObjectReferences).field_0x2c = 0x80;
  *(undefined4 *)&(this->UnresolvedObjectReferences).field_0x34 = 0;
  *(undefined4 *)&(this->UnresolvedObjectReferences).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->UnresolvedObjectReferences).field_0x40 = 0;
  *(undefined4 *)&(this->UnresolvedObjectReferences).field_0x48 = 0;
  *(undefined8 *)&this->ResolvedDynamicObjectReferences = 0;
  *(undefined8 *)&(this->ResolvedDynamicObjectReferences).field_0x8 = 0;
  *(undefined8 *)&(this->ResolvedDynamicObjectReferences).field_0x20 = 0;
  *(undefined4 *)&(this->ResolvedDynamicObjectReferences).field_0x28 = 0;
  *(undefined4 *)&(this->ResolvedDynamicObjectReferences).field_0x2c = 0x80;
  *(undefined4 *)&(this->ResolvedDynamicObjectReferences).field_0x34 = 0;
  *(undefined4 *)&(this->ResolvedDynamicObjectReferences).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ResolvedDynamicObjectReferences).field_0x40 = 0;
  *(undefined4 *)&(this->ResolvedDynamicObjectReferences).field_0x48 = 0;
  *(undefined8 *)&this->UnresolvedHandleCount = 0;
  *(undefined8 *)&(this->UnresolvedHandleCount).field_0x8 = 0;
  *(undefined8 *)&(this->UnresolvedHandleCount).field_0x20 = 0;
  *(undefined4 *)&(this->UnresolvedHandleCount).field_0x28 = 0;
  *(undefined4 *)&(this->UnresolvedHandleCount).field_0x2c = 0x80;
  *(undefined4 *)&(this->UnresolvedHandleCount).field_0x34 = 0;
  *(undefined4 *)&(this->UnresolvedHandleCount).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->UnresolvedHandleCount).field_0x40 = 0;
  *(undefined4 *)&(this->UnresolvedHandleCount).field_0x48 = 0;
  *(undefined8 *)&this->ResolvedDynamicHandleCount = 0;
  *(undefined8 *)&(this->ResolvedDynamicHandleCount).field_0x8 = 0;
  *(undefined8 *)&(this->ResolvedDynamicHandleCount).field_0x20 = 0;
  *(undefined4 *)&(this->ResolvedDynamicHandleCount).field_0x28 = 0;
  *(undefined4 *)&(this->ResolvedDynamicHandleCount).field_0x2c = 0x80;
  *(undefined4 *)&(this->ResolvedDynamicHandleCount).field_0x34 = 0;
  *(undefined4 *)&(this->ResolvedDynamicHandleCount).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ResolvedDynamicHandleCount).field_0x40 = 0;
  *(undefined4 *)&(this->ResolvedDynamicHandleCount).field_0x48 = 0;
  this->InternalIndex = 0;
  this->field7_0x15c = (FReplicatedObjectInfo_u_348)0x0;
  this->StoredBaselines[0] = (uchar *)0x0;
  this->StoredBaselines[1] = (uchar *)0x0;
  (this->field7_0x15c).Value = (this->field7_0x15c).Value & 0xfebfffff;
  (this->field7_0x15c).Value = (this->field7_0x15c).Value | 0x2800000;
  return this;
}

// ~FReplicatedObjectInfo @ 1442b04c0

void __thiscall
UE::Net::Private::FReplicationReader::FReplicatedObjectInfo::~FReplicatedObjectInfo
          (FReplicatedObjectInfo *this)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->ResolvedDynamicHandleCount).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ResolvedDynamicHandleCount).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::Net::FNetRefHandle,short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::Net::FNetRefHandle,short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::Net::FNetRefHandle,short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ResolvedDynamicHandleCount);
  *(undefined4 *)&(this->UnresolvedHandleCount).field_0x48 = 0;
  pvVar1 = *(void **)&(this->UnresolvedHandleCount).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::Net::FNetRefHandle,short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::Net::FNetRefHandle,short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::Net::FNetRefHandle,short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->UnresolvedHandleCount);
  *(undefined4 *)&(this->ResolvedDynamicObjectReferences).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ResolvedDynamicObjectReferences).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,UE::Net::FNetRefHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,UE::Net::FNetRefHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,UE::Net::FNetRefHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ResolvedDynamicObjectReferences);
  *(undefined4 *)&(this->UnresolvedObjectReferences).field_0x48 = 0;
  pvVar1 = *(void **)&(this->UnresolvedObjectReferences).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,UE::Net::FNetRefHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,UE::Net::FNetRefHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,UE::Net::FNetRefHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->UnresolvedObjectReferences);
  return;
}

// RemoveResolvedDynamicHandleCount @ 1442df0c0

bool __thiscall
UE::Net::Private::FReplicationReader::FReplicatedObjectInfo::RemoveResolvedDynamicHandleCount
          (FReplicatedObjectInfo *this,FNetRefHandle param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  ulonglong uVar7;
  short *psVar8;
  undefined1 *puVar9;
  FNetRefHandle_u_0 *local_res8;
  FNetRefHandle_u_0 local_res10;
  
  uVar7 = (ulonglong)param_1.field0_0x0 & 0x3fffffffffffff;
  local_res10 = param_1.field0_0x0;
  if (*(int *)&(this->ResolvedDynamicHandleCount).field_0x8 !=
      *(int *)&(this->ResolvedDynamicHandleCount).field_0x34) {
    puVar9 = *(undefined1 **)&(this->ResolvedDynamicHandleCount).field_0x40;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(this->ResolvedDynamicHandleCount).field_0x38;
    }
    iVar6 = *(int *)(puVar9 + ((uVar7 >> 0x20) * 0x17 + uVar7 &
                              (ulonglong)
                              (*(int *)&(this->ResolvedDynamicHandleCount).field_0x48 - 1)) * 4);
    if (iVar6 != -1) {
      lVar2 = *(longlong *)&(this->ResolvedDynamicHandleCount).field_0x0;
      do {
        lVar1 = lVar2 + (longlong)iVar6 * 0x18;
        if ((*(ulonglong *)(lVar2 + (longlong)iVar6 * 0x18) & 0x3fffffffffffff) == uVar7) {
          psVar8 = (short *)(lVar1 + 8);
          if (lVar1 == 0) {
            psVar8 = (short *)0x0;
          }
          if (psVar8 == (short *)0x0) goto LAB_1442df148;
          goto LAB_1442df164;
        }
        iVar6 = *(int *)(lVar1 + 0x10);
      } while (iVar6 != -1);
    }
  }
  psVar8 = (short *)0x0;
LAB_1442df148:
  local_res8 = &local_res10;
  bVar4 = `UE::Net::Private::FReplicationReader::FReplicatedObjectInfo::
          RemoveResolvedDynamicHandleCount'::__l3::<lambda_1>::operator()(&local_res8);
  if (bVar4) {
LAB_1442df164:
    if ((*psVar8 < 1) &&
       (bVar4 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<4393424413328933191>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationReader.cpp"
                           ,0x147,"HandleCountRef > 0"), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    *psVar8 = *psVar8 + -1;
    if (*psVar8 < 1) {
      if (*(int *)&(this->ResolvedDynamicHandleCount).field_0x8 !=
          *(int *)&(this->ResolvedDynamicHandleCount).field_0x34) {
        TSet<TTuple<UE::Net::FNetRefHandle,short>,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,short,0>,FDefaultSetAllocator>
        ::RemoveImpl<UE::Net::FNetRefHandle>
                  ((TSet<TTuple<UE::Net::FNetRefHandle,short>,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,short,0>,FDefaultSetAllocator>
                    *)&this->ResolvedDynamicHandleCount,
                   (int)((local_res10.Value & 0x3fffffffffffff) >> 0x20) * 0x17 +
                   (int)(local_res10.Value & 0x3fffffffffffff),(FNetRefHandle *)&local_res10._s_0);
      }
      return true;
    }
  }
  return false;
}

// RemoveUnresolvedHandleCount @ 1442dfb00

bool __thiscall
UE::Net::Private::FReplicationReader::FReplicatedObjectInfo::RemoveUnresolvedHandleCount
          (FReplicatedObjectInfo *this,FNetRefHandle param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  ulonglong uVar7;
  short *psVar8;
  undefined1 *puVar9;
  FNetRefHandle_u_0 *local_res8;
  FNetRefHandle_u_0 local_res10;
  
  uVar7 = (ulonglong)param_1.field0_0x0 & 0x3fffffffffffff;
  local_res10 = param_1.field0_0x0;
  if (*(int *)&(this->UnresolvedHandleCount).field_0x8 !=
      *(int *)&(this->UnresolvedHandleCount).field_0x34) {
    puVar9 = *(undefined1 **)&(this->UnresolvedHandleCount).field_0x40;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(this->UnresolvedHandleCount).field_0x38;
    }
    iVar6 = *(int *)(puVar9 + ((uVar7 >> 0x20) * 0x17 + uVar7 &
                              (ulonglong)(*(int *)&(this->UnresolvedHandleCount).field_0x48 - 1)) *
                              4);
    if (iVar6 != -1) {
      lVar2 = *(longlong *)&(this->UnresolvedHandleCount).field_0x0;
      do {
        lVar1 = lVar2 + (longlong)iVar6 * 0x18;
        if ((*(ulonglong *)(lVar2 + (longlong)iVar6 * 0x18) & 0x3fffffffffffff) == uVar7) {
          psVar8 = (short *)(lVar1 + 8);
          if (lVar1 == 0) {
            psVar8 = (short *)0x0;
          }
          if (psVar8 == (short *)0x0) goto LAB_1442dfb88;
          goto LAB_1442dfba4;
        }
        iVar6 = *(int *)(lVar1 + 0x10);
      } while (iVar6 != -1);
    }
  }
  psVar8 = (short *)0x0;
LAB_1442dfb88:
  local_res8 = &local_res10;
  bVar4 = `UE::Net::Private::FReplicationReader::FReplicatedObjectInfo::RemoveUnresolvedHandleCount'
          ::__l3::<lambda_1>::operator()(&local_res8);
  if (bVar4) {
LAB_1442dfba4:
    if ((*psVar8 < 1) &&
       (bVar4 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<4393424413328933170>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationReader.cpp"
                           ,0x132,"HandleCountRef > 0"), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    *psVar8 = *psVar8 + -1;
    if (*psVar8 < 1) {
      if (*(int *)&(this->UnresolvedHandleCount).field_0x8 !=
          *(int *)&(this->UnresolvedHandleCount).field_0x34) {
        TSet<TTuple<UE::Net::FNetRefHandle,short>,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,short,0>,FDefaultSetAllocator>
        ::RemoveImpl<UE::Net::FNetRefHandle>
                  ((TSet<TTuple<UE::Net::FNetRefHandle,short>,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,short,0>,FDefaultSetAllocator>
                    *)&this->UnresolvedHandleCount,
                   (int)((local_res10.Value & 0x3fffffffffffff) >> 0x20) * 0x17 +
                   (int)(local_res10.Value & 0x3fffffffffffff),(FNetRefHandle *)&local_res10._s_0);
      }
      return true;
    }
  }
  return false;
}

// operator() @ 1504b83e0

bool __thiscall
`UE::Net::Private::FReplicationReader::FReplicatedObjectInfo::RemoveResolvedDynamicHandleCount'::
__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<4393424413328933187>);
  if (bVar2) {
    UE::Net::FNetRefHandle::ToString(*(FNetRefHandle **)this,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<4393424413328933187>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504b8447;
    }
  }
  bVar2 = false;
LAB_1504b8447:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 1504b8480

bool __thiscall
`UE::Net::Private::FReplicationReader::FReplicatedObjectInfo::RemoveUnresolvedHandleCount'::__l3::
<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<4393424413328933166>);
  if (bVar2) {
    UE::Net::FNetRefHandle::ToString(*(FNetRefHandle **)this,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<4393424413328933166>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504b84e7;
    }
  }
  bVar2 = false;
LAB_1504b84e7:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

