// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 3

// TNameAtomicBitSet<65536> @ 141a6b830

TNameAtomicBitSet<65536> * __thiscall
TNameAtomicBitSet<65536>::TNameAtomicBitSet<65536>(TNameAtomicBitSet<65536> *this)

{
  this->Data = (atomic<unsigned___int64_*>)0x0;
  return this;
}

// GetBuffer @ 141a80870

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulong64 * __thiscall TNameAtomicBitSet<1024>::GetBuffer(TNameAtomicBitSet<1024> *this)

{
  longlong lVar1;
  atomic<unsigned___int64_*> aVar2;
  atomic<unsigned___int64_*> aVar3;
  FWriteBuffer *pFVar4;
  bool bVar5;
  bool bVar6;
  undefined1 auStackY_68 [32];
  FLLMScope local_34;
  FLLMScope local_30;
  FLLMScope local_2c;
  FMemScope local_28;
  TLogScope<0> local_20;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_68;
  aVar2 = this->Data;
  if (aVar2 == (atomic<unsigned___int64_*>)0x0) {
    FLLMScope::FLLMScope(&local_2c,FName,false,None,Default,true);
    FMemScope::FMemScope(&local_28,FName,true);
    FLLMClearScope::FLLMClearScope((FLLMClearScope *)&local_30,Assets,Default);
    FLLMClearScope::FLLMClearScope((FLLMClearScope *)&local_34,AssetClasses,Default);
    bVar5 = -1 < MetadataChannel->Enabled;
    if (bVar5) {
      UE::Trace::Private::FLogScope::ScopedEnter<FMetadataStackClearScopeFields>(&local_20);
      *(undefined8 *)(local_20._8_8_ + 0x28) = *(undefined8 *)(local_20._8_8_ + 0x20);
    }
    aVar2 = (atomic<unsigned___int64_*>)FMemory::MallocZeroed(0x80,8);
    LOCK();
    aVar3 = this->Data;
    bVar6 = aVar3 == (atomic<unsigned___int64_*>)0x0;
    if (bVar6) {
      this->Data = aVar2;
      aVar3 = (atomic<unsigned___int64_*>)0x0;
    }
    UNLOCK();
    if (!bVar6) {
      FMemory::Free((void *)aVar2);
      aVar2 = aVar3;
    }
    if (bVar5) {
      lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      if (*(char *)(lVar1 + 0x9d48) == '\0') {
        __dyn_tls_on_demand_init();
      }
      pFVar4 = *(FWriteBuffer **)(lVar1 + 0x20);
      if ((int)pFVar4 - *(int *)&pFVar4->Cursor < 1) {
        pFVar4 = UE::Trace::Private::Writer_NextBuffer();
      }
      *pFVar4->Cursor = '\n';
      pFVar4->Cursor = pFVar4->Cursor + 1;
      pFVar4->Committed = pFVar4->Cursor;
    }
    FLLMScope::~FLLMScope(&local_34);
    FLLMScope::~FLLMScope(&local_30);
    FMemScope::~FMemScope(&local_28);
    FLLMScope::~FLLMScope(&local_2c);
  }
  return (ulong64 *)aVar2;
}

// SetBitAtomic @ 141a91b30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall TNameAtomicBitSet<65536>::SetBitAtomic(TNameAtomicBitSet<65536> *this,uint param_1)

{
  ulonglong *puVar1;
  longlong lVar2;
  atomic<unsigned___int64_*> aVar3;
  atomic<unsigned___int64_*> aVar4;
  FWriteBuffer *pFVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  bool bVar9;
  bool bVar10;
  undefined1 auStackY_78 [32];
  FLLMScope local_44;
  FLLMScope local_40;
  FLLMScope local_3c;
  FMemScope local_38;
  TLogScope<0> local_30;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_78;
  uVar8 = 1L << ((byte)param_1 & 0x3f);
  aVar3 = this->Data;
  if (aVar3 == (atomic<unsigned___int64_*>)0x0) {
    FLLMScope::FLLMScope(&local_3c,FName,false,None,Default,true);
    FMemScope::FMemScope(&local_38,FName,true);
    FLLMClearScope::FLLMClearScope((FLLMClearScope *)&local_40,Assets,Default);
    FLLMClearScope::FLLMClearScope((FLLMClearScope *)&local_44,AssetClasses,Default);
    bVar9 = -1 < MetadataChannel->Enabled;
    if (bVar9) {
      UE::Trace::Private::FLogScope::ScopedEnter<FMetadataStackClearScopeFields>(&local_30);
      *(undefined8 *)(local_30._8_8_ + 0x28) = *(undefined8 *)(local_30._8_8_ + 0x20);
    }
    aVar3 = (atomic<unsigned___int64_*>)FMemory::MallocZeroed(0x2000,8);
    LOCK();
    aVar4 = this->Data;
    bVar10 = aVar4 == (atomic<unsigned___int64_*>)0x0;
    if (bVar10) {
      this->Data = aVar3;
      aVar4 = (atomic<unsigned___int64_*>)0x0;
    }
    UNLOCK();
    if (!bVar10) {
      FMemory::Free((void *)aVar3);
      aVar3 = aVar4;
    }
    if (bVar9) {
      lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      if (*(char *)(lVar2 + 0x9d48) == '\0') {
        __dyn_tls_on_demand_init();
      }
      pFVar5 = *(FWriteBuffer **)(lVar2 + 0x20);
      if ((int)pFVar5 - *(int *)&pFVar5->Cursor < 1) {
        pFVar5 = UE::Trace::Private::Writer_NextBuffer();
      }
      *pFVar5->Cursor = '\n';
      pFVar5->Cursor = pFVar5->Cursor + 1;
      pFVar5->Committed = pFVar5->Cursor;
    }
    FLLMScope::~FLLMScope(&local_44);
    FLLMScope::~FLLMScope(&local_40);
    FMemScope::~FMemScope(&local_38);
    FLLMScope::~FLLMScope(&local_3c);
  }
  puVar1 = (ulonglong *)((longlong)aVar3 + (ulonglong)(param_1 >> 6) * 8);
  uVar6 = *puVar1;
  do {
    LOCK();
    uVar7 = *puVar1;
    bVar9 = uVar6 == uVar7;
    if (bVar9) {
      *puVar1 = uVar6 | uVar8;
      uVar7 = uVar6;
    }
    UNLOCK();
    uVar6 = uVar7;
  } while (!bVar9);
  return (uVar8 & uVar7) != 0;
}

