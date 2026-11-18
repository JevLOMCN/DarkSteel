// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 2

// FNode @ 1493ce9c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FNode * __thiscall FNiagaraSystemMemReport::FNode::FNode(FNode *this,UObject *param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  ulong64 uVar3;
  UClass *pUVar4;
  FString *pFVar5;
  FName *pFVar6;
  wchar_t *pwVar7;
  undefined1 auStack_1f8 [32];
  FName local_1d8;
  FArchiveState local_1d0;
  undefined8 local_140;
  ulong64 local_138;
  undefined1 local_128 [72];
  void *local_e0;
  undefined4 local_d8;
  TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_d0;
  void *local_90;
  undefined4 local_88;
  TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_80;
  void *local_40;
  undefined4 local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  (this->ObjectName).ComparisonIndex = 0;
  (this->ObjectName).Number = 0;
  (this->ObjectClass).ComparisonIndex = 0;
  (this->ObjectClass).Number = 0;
  this->Depth = 0;
  this->ExclusiveSizeBytes = 0;
  this->InclusiveSizeBytes = 0;
  FResourceSizeEx::FResourceSizeEx((FResourceSizeEx *)local_128,Exclusive);
  FArchiveState::FArchiveState(&local_1d0);
  local_1d0.ArIsFilterEditorOnly = '\x01';
  local_1d0.ArIsCountingMemory = '\x01';
  local_1d0._padding_ = (longlong)&___7FArchiveCountMem__6B_;
  local_138 = 0;
  local_140 = 0;
  if (param_1 != (UObject *)0x0) {
    (**(code **)(*(longlong *)param_1 + 200))(param_1,&local_1d0);
  }
  FResourceSizeEx::AddDedicatedSystemMemoryBytes((FResourceSizeEx *)local_128,local_138);
  FArchive::~FArchive((FArchive *)&local_1d0);
  (**(code **)(*(longlong *)param_1 + 400))(param_1,local_128);
  uVar2 = *(undefined4 *)&param_1->field_0x1c;
  (this->ObjectName).ComparisonIndex = (FNameEntryId)*(undefined4 *)&param_1->field_0x18;
  (this->ObjectName).Number = uVar2;
  this->ObjectClass = *(FName *)(*(longlong *)&param_1->field_0x10 + 0x18);
  this->Depth = param_2;
  uVar3 = FResourceSizeEx::GetTotalMemoryBytes((FResourceSizeEx *)local_128);
  this->ExclusiveSizeBytes = uVar3;
  uVar3 = FResourceSizeEx::GetTotalMemoryBytes((FResourceSizeEx *)local_128);
  this->InclusiveSizeBytes = uVar3;
  pUVar4 = Z_Construct_UClass_UNiagaraEmitter_NoRegister();
  iVar1 = (int)pUVar4->_padding_;
  if (((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
      ((longlong *)
       *(undefined1 **)
        (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
       &pUVar4->_padding_)) && (param_1 != (UObject *)0x0)) {
    pFVar5 = UNiagaraEmitterBase::GetUniqueEmitterName((UNiagaraEmitterBase *)param_1);
    if ((pFVar5->Data).ArrayNum == 0) {
      pwVar7 = L"";
    }
    else {
      pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    }
    pFVar6 = ::FName::FName(&local_1d8,pwVar7);
    this->ObjectName = *pFVar6;
  }
  local_38 = 0;
  if (local_40 != (void *)0x0) {
    FMemory::Free(local_40);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_80);
  local_88 = 0;
  if (local_90 != (void *)0x0) {
    FMemory::Free(local_90);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_d0);
  local_d8 = 0;
  if (local_e0 != (void *)0x0) {
    FMemory::Free(local_e0);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(local_128 + 8));
  return this;
}

// FNode @ 1493ceb90

FNode * __thiscall
FNiagaraSystemMemReport::FNode::FNode(FNode *this,FName param_1,uint param_2,uint param_3)

{
  this->ObjectName = param_1;
  (this->ObjectClass).ComparisonIndex = 0;
  (this->ObjectClass).Number = 0;
  this->ExclusiveSizeBytes = (ulonglong)param_3;
  this->InclusiveSizeBytes = (ulonglong)param_3;
  this->Depth = param_2;
  return this;
}

