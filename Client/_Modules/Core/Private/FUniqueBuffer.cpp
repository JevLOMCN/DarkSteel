// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 14

// GetSize @ 14149a540

ulong64 __thiscall FUniqueBuffer::GetSize(FUniqueBuffer *this)

{
  FBufferOwner *pFVar1;
  
  pFVar1 = (this->Owner).Owner;
  if (pFVar1 != (FBufferOwner *)0x0) {
    if (((ulonglong)pFVar1->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
      (**(code **)(pFVar1->_padding_ + 8))(pFVar1);
    }
    return pFVar1->Size;
  }
  return 0;
}

// GetView @ 14149a870

TMemoryView<void> * __thiscall
FUniqueBuffer::GetView(FUniqueBuffer *this,TMemoryView<void> *__return_storage_ptr__)

{
  FBufferOwner *pFVar1;
  void *pvVar2;
  void *pvVar3;
  
  pFVar1 = (this->Owner).Owner;
  pvVar3 = (void *)0x0;
  pvVar2 = pvVar3;
  if (pFVar1 != (FBufferOwner *)0x0) {
    if (((ulonglong)pFVar1->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
      (**(code **)(pFVar1->_padding_ + 8))(pFVar1);
    }
    pvVar2 = (void *)pFVar1->Size;
  }
  pFVar1 = (this->Owner).Owner;
  if (pFVar1 != (FBufferOwner *)0x0) {
    if (((ulonglong)pFVar1->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
      (**(code **)(pFVar1->_padding_ + 8))(pFVar1);
    }
    pvVar3 = pFVar1->Data;
  }
  __return_storage_ptr__->Data = pvVar3;
  __return_storage_ptr__->Size = (ulong64)pvVar2;
  return __return_storage_ptr__;
}

// FUniqueBuffer @ 141815cd0

FUniqueBuffer * __thiscall
FUniqueBuffer::FUniqueBuffer
          (FUniqueBuffer *this,TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *param_1)

{
  FBufferOwner *pFVar1;
  
  pFVar1 = param_1->Owner;
  param_1->Owner = (FBufferOwner *)0x0;
  (this->Owner).Owner = pFVar1;
  return this;
}

// FUniqueBuffer @ 141815cf0

FUniqueBuffer * __thiscall FUniqueBuffer::FUniqueBuffer(FUniqueBuffer *this,FBufferOwner *param_1)

{
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&this->Owner,param_1);
  return this;
}

// Alloc @ 14181b4a0

FUniqueBuffer __cdecl FUniqueBuffer::Alloc(ulong64 param_1)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  code *pcVar3;
  bool bVar4;
  undefined8 *puVar5;
  void *pvVar6;
  FUniqueBuffer FVar7;
  ulong64 in_RDX;
  
  puVar5 = ::operator_new(0x20);
  if (puVar5 == (undefined8 *)0x0) {
    *(undefined8 *)param_1 = 0;
  }
  else {
    pvVar6 = FMemory::Malloc(in_RDX,0);
    puVar5[1] = pvVar6;
    puVar5[2] = in_RDX;
    *puVar5 = &___7FBufferOwnerHeap_Private_SharedBuffer_UE__6B_;
    puVar5[3] = 0;
    LOCK();
    puVar5[3] = puVar5[3] | 0x4000000000000000;
    UNLOCK();
    LOCK();
    puVar5[3] = puVar5[3] | 0x1000000000000000;
    UNLOCK();
    *(undefined8 **)param_1 = puVar5;
    uVar2 = puVar5[3];
    if ((((uint)(uVar2 >> 0x1e) & 0x3fffffff) - (uint)((uVar2 & 0x3fffffff) != 0)) +
        ((uint)uVar2 & 0x3fffffff) != 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!FOps::HasRef(*InOwner)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Memory\\SharedBuffer.cpp"
                         ,0x14,
                         L"FBufferOwner is referenced by another TBufferOwnerPtr. Construct this from an existing pointer instead of a raw pointer."
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        FVar7.Owner.Owner = (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)(*pcVar3)();
        return (FUniqueBuffer)FVar7.Owner.Owner;
      }
    }
    LOCK();
    puVar1 = puVar5 + 3;
    uVar2 = *puVar1;
    *puVar1 = *puVar1 + 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 0) {
      LOCK();
      puVar5[3] = puVar5[3] + 0x40000000;
      UNLOCK();
      return (FUniqueBuffer)(TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)param_1;
    }
  }
  return (FUniqueBuffer)(TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)param_1;
}

// AllocZeroed @ 14181b5a0

FUniqueBuffer __cdecl FUniqueBuffer::AllocZeroed(ulong64 param_1)

{
  longlong *plVar1;
  void *_Size;
  void *_Dst;
  
  Alloc(param_1);
  plVar1 = *(longlong **)param_1;
  _Dst = (void *)0x0;
  _Size = _Dst;
  if (plVar1 != (longlong *)0x0) {
    if (((ulonglong)plVar1[3] >> 0x3c & 4) == 0) {
      (**(code **)(*plVar1 + 8))(plVar1);
    }
    _Size = (void *)plVar1[2];
  }
  plVar1 = *(longlong **)param_1;
  if (plVar1 != (longlong *)0x0) {
    if (((ulonglong)plVar1[3] >> 0x3c & 4) == 0) {
      (**(code **)(*plVar1 + 8))(plVar1);
    }
    _Dst = (void *)plVar1[1];
  }
  memset(_Dst,0,(size_t)_Size);
  return (FUniqueBuffer)(TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)param_1;
}

// Clone @ 14181e550

FUniqueBuffer __cdecl FUniqueBuffer::Clone(void *param_1,ulong64 param_2)

{
  Clone(param_1);
  return (FUniqueBuffer)(TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)param_1;
}

// Clone @ 14181e580

FUniqueBuffer __cdecl FUniqueBuffer::Clone(TMemoryView<void_const_> *param_1)

{
  longlong *plVar1;
  void *_Size;
  void *_Src;
  code *pcVar2;
  bool bVar3;
  FUniqueBuffer FVar4;
  undefined8 *in_RDX;
  void *_Dst;
  void *pvVar5;
  
  Alloc((ulong64)param_1);
  plVar1 = param_1->Data;
  _Dst = (void *)0x0;
  pvVar5 = _Dst;
  if (plVar1 != (longlong *)0x0) {
    if (((ulonglong)plVar1[3] >> 0x3c & 4) == 0) {
      (**(code **)(*plVar1 + 8))(plVar1);
    }
    pvVar5 = (void *)plVar1[2];
  }
  plVar1 = param_1->Data;
  if (plVar1 != (longlong *)0x0) {
    if (((ulonglong)plVar1[3] >> 0x3c & 4) == 0) {
      (**(code **)(*plVar1 + 8))(plVar1);
    }
    _Dst = (void *)plVar1[1];
  }
  _Size = (void *)in_RDX[1];
  _Src = (void *)*in_RDX;
  if ((pvVar5 < _Size) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InView.Size <= Size",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Memory\\MemoryView.h"
                         ,0xdb,L"Failed to copy from a view of %llu bytes to a view of %llu bytes.")
     , bVar3)) {
    pcVar2 = (code *)swi(3);
    FVar4.Owner.Owner = (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)(*pcVar2)();
    return (FUniqueBuffer)FVar4.Owner.Owner;
  }
  if (_Size != (void *)0x0) {
    memcpy(_Dst,_Src,(size_t)_Size);
  }
  return (FUniqueBuffer)(TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)param_1;
}

// MakeOwned @ 14182c280

FUniqueBuffer __thiscall FUniqueBuffer::MakeOwned(FUniqueBuffer *this)

{
  FBufferOwner *pFVar1;
  code *pcVar2;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> TVar3;
  bool bVar4;
  FUniqueBuffer FVar5;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> in_RDX;
  void *_Dst;
  void *_Size;
  void *pvVar6;
  void *_Src;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_res8;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_res10;
  
  pFVar1 = (this->Owner).Owner;
  _Dst = (void *)0x0;
  if ((pFVar1 == (FBufferOwner *)0x0) ||
     (((ulonglong)pFVar1->ReferenceCountsAndFlags >> 0x3c & 1) != 0)) {
    pFVar1 = (this->Owner).Owner;
    (this->Owner).Owner = (FBufferOwner *)0x0;
    local_res10.Owner = (FBufferOwner *)0x0;
    (in_RDX.Owner)->_padding_ = (longlong)pFVar1;
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_res10);
    return (FUniqueBuffer)(TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)in_RDX.Owner;
  }
  pFVar1 = (this->Owner).Owner;
  _Size = _Dst;
  if (pFVar1 != (FBufferOwner *)0x0) {
    if (((ulonglong)pFVar1->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
      (**(code **)(pFVar1->_padding_ + 8))(pFVar1);
    }
    _Size = (void *)pFVar1->Size;
  }
  pFVar1 = (this->Owner).Owner;
  _Src = _Dst;
  if (pFVar1 != (FBufferOwner *)0x0) {
    if (((ulonglong)pFVar1->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
      (**(code **)(pFVar1->_padding_ + 8))(pFVar1);
    }
    _Src = pFVar1->Data;
  }
  Alloc((ulong64)&local_res8);
  TVar3.Owner = local_res8.Owner;
  pvVar6 = _Dst;
  if (local_res8.Owner != (FBufferOwner *)0x0) {
    if (((ulonglong)(local_res8.Owner)->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
      (**(code **)((local_res8.Owner)->_padding_ + 8))(local_res8.Owner);
    }
    pvVar6 = (void *)(TVar3.Owner)->Size;
  }
  TVar3.Owner = local_res8.Owner;
  if (local_res8.Owner != (FBufferOwner *)0x0) {
    if (((ulonglong)(local_res8.Owner)->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
      (**(code **)((local_res8.Owner)->_padding_ + 8))(local_res8.Owner);
    }
    _Dst = (TVar3.Owner)->Data;
  }
  if ((pvVar6 < _Size) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InView.Size <= Size",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Memory\\MemoryView.h"
                         ,0xdb,L"Failed to copy from a view of %llu bytes to a view of %llu bytes.")
     , bVar4)) {
    pcVar2 = (code *)swi(3);
    FVar5.Owner.Owner = (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)(*pcVar2)();
    return (FUniqueBuffer)FVar5.Owner.Owner;
  }
  if (_Size != (void *)0x0) {
    memcpy(_Dst,_Src,(size_t)_Size);
  }
  (in_RDX.Owner)->_padding_ = (longlong)local_res8.Owner;
  local_res8.Owner = (FBufferOwner *)0x0;
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_res8);
  return (FUniqueBuffer)(TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)in_RDX.Owner;
}

// MakeView @ 14182c6f0

FUniqueBuffer __cdecl FUniqueBuffer::MakeView(void *param_1,ulong64 param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  code *pcVar3;
  bool bVar4;
  undefined8 *puVar5;
  FUniqueBuffer FVar6;
  undefined8 in_R8;
  
  puVar5 = ::operator_new(0x20);
  if (puVar5 == (undefined8 *)0x0) {
    *(undefined8 *)param_1 = 0;
  }
  else {
    puVar5[1] = param_2;
    puVar5[2] = in_R8;
    puVar5[3] = 0;
    *puVar5 = &___7FBufferOwnerView_Private_SharedBuffer_UE__6B_;
    LOCK();
    puVar5[3] = puVar5[3] | 0x4000000000000000;
    UNLOCK();
    *(undefined8 **)param_1 = puVar5;
    uVar2 = puVar5[3];
    if ((((uint)(uVar2 >> 0x1e) & 0x3fffffff) - (uint)((uVar2 & 0x3fffffff) != 0)) +
        ((uint)uVar2 & 0x3fffffff) != 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!FOps::HasRef(*InOwner)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Memory\\SharedBuffer.cpp"
                         ,0x14,
                         L"FBufferOwner is referenced by another TBufferOwnerPtr. Construct this from an existing pointer instead of a raw pointer."
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        FVar6.Owner.Owner = (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)(*pcVar3)();
        return (FUniqueBuffer)FVar6.Owner.Owner;
      }
    }
    LOCK();
    puVar1 = puVar5 + 3;
    uVar2 = *puVar1;
    *puVar1 = *puVar1 + 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 0) {
      LOCK();
      puVar5[3] = puVar5[3] + 0x40000000;
      UNLOCK();
    }
  }
  return (FUniqueBuffer)(TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)param_1;
}

// MakeView @ 14182c7e0

FUniqueBuffer __cdecl FUniqueBuffer::MakeView(TMemoryView<void> *param_1)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  code *pcVar4;
  bool bVar5;
  undefined8 *puVar6;
  FUniqueBuffer FVar7;
  undefined8 *in_RDX;
  
  puVar6 = ::operator_new(0x20);
  if (puVar6 == (undefined8 *)0x0) {
    param_1->Data = (void *)0x0;
  }
  else {
    uVar2 = *in_RDX;
    puVar6[2] = in_RDX[1];
    puVar6[3] = 0;
    puVar6[1] = uVar2;
    *puVar6 = &___7FBufferOwnerView_Private_SharedBuffer_UE__6B_;
    LOCK();
    puVar6[3] = puVar6[3] | 0x4000000000000000;
    UNLOCK();
    param_1->Data = puVar6;
    uVar3 = puVar6[3];
    if ((((uint)(uVar3 >> 0x1e) & 0x3fffffff) - (uint)((uVar3 & 0x3fffffff) != 0)) +
        ((uint)uVar3 & 0x3fffffff) != 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!FOps::HasRef(*InOwner)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Memory\\SharedBuffer.cpp"
                         ,0x14,
                         L"FBufferOwner is referenced by another TBufferOwnerPtr. Construct this from an existing pointer instead of a raw pointer."
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        FVar7.Owner.Owner = (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)(*pcVar4)();
        return (FUniqueBuffer)FVar7.Owner.Owner;
      }
    }
    LOCK();
    puVar1 = puVar6 + 3;
    uVar3 = *puVar1;
    *puVar1 = *puVar1 + 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 0) {
      LOCK();
      puVar6[3] = puVar6[3] + 0x40000000;
      UNLOCK();
      return (FUniqueBuffer)(TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)param_1;
    }
  }
  return (FUniqueBuffer)(TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)param_1;
}

// Materialize @ 14182c900

void __thiscall FUniqueBuffer::Materialize(FUniqueBuffer *this)

{
  FBufferOwner *pFVar1;
  
  pFVar1 = (this->Owner).Owner;
  if ((pFVar1 != (FBufferOwner *)0x0) &&
     (((ulonglong)pFVar1->ReferenceCountsAndFlags >> 0x3c & 4) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00014182c918. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pFVar1->_padding_ + 8))();
    return;
  }
  return;
}

// MoveToShared @ 14182c9f0

FSharedBuffer __thiscall FUniqueBuffer::MoveToShared(FUniqueBuffer *this)

{
  FBufferOwner *pFVar1;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> in_RDX;
  
  pFVar1 = (this->Owner).Owner;
  (this->Owner).Owner = (FBufferOwner *)0x0;
  (in_RDX.Owner)->_padding_ = (longlong)pFVar1;
  return (FSharedBuffer)(TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)in_RDX.Owner;
}

// Reset @ 14182ff70

void __thiscall FUniqueBuffer::Reset(FUniqueBuffer *this)

{
  atomic<unsigned___int64> *paVar1;
  atomic<unsigned___int64> aVar2;
  FBufferOwner *pFVar3;
  
  pFVar3 = (this->Owner).Owner;
  if (pFVar3 != (FBufferOwner *)0x0) {
    LOCK();
    paVar1 = &pFVar3->ReferenceCountsAndFlags;
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + -1);
    UNLOCK();
    if ((aVar2._0_4_ & 0x3fffffff) == 1) {
      (**(code **)(pFVar3->_padding_ + 0x10))(pFVar3);
      pFVar3->Data = (void *)0x0;
      pFVar3->Size = 0;
      LOCK();
      paVar1 = &pFVar3->ReferenceCountsAndFlags;
      aVar2 = *paVar1;
      *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + -0x40000000);
      UNLOCK();
      if (((uint)((ulonglong)aVar2 >> 0x1e) & 0x3fffffff) == 1) {
        (**(code **)pFVar3->_padding_)(pFVar3,1);
      }
      (this->Owner).Owner = (FBufferOwner *)0x0;
      return;
    }
  }
  (this->Owner).Owner = (FBufferOwner *)0x0;
  return;
}

