// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 23

// IsNull @ 14149e150

bool __thiscall FSharedBuffer::IsNull(FSharedBuffer *this)

{
  return (this->Owner).Owner == (FBufferOwner *)0x0;
}

// FSharedBuffer @ 141815c30

FSharedBuffer * __thiscall
FSharedBuffer::FSharedBuffer
          (FSharedBuffer *this,TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *param_1)

{
  FBufferOwner *pFVar1;
  
  pFVar1 = param_1->Owner;
  param_1->Owner = (FBufferOwner *)0x0;
  (this->Owner).Owner = pFVar1;
  return this;
}

// FSharedBuffer @ 141815c50

FSharedBuffer * __thiscall
FSharedBuffer::FSharedBuffer
          (FSharedBuffer *this,TBufferOwnerPtr<UE::SharedBuffer::Private::FWeakOps> *param_1)

{
  FBufferOwner *pFVar1;
  atomic<unsigned___int64> aVar2;
  atomic<unsigned___int64> aVar3;
  bool bVar4;
  
  pFVar1 = param_1->Owner;
  if (pFVar1 == (FBufferOwner *)0x0) {
    (this->Owner).Owner = (FBufferOwner *)0x0;
    return this;
  }
  aVar2 = pFVar1->ReferenceCountsAndFlags;
  do {
    if (((ulonglong)aVar2 & 0x3fffffff) == 0) {
      (this->Owner).Owner = (FBufferOwner *)0x0;
      return this;
    }
    LOCK();
    aVar3 = pFVar1->ReferenceCountsAndFlags;
    bVar4 = aVar2 == aVar3;
    if (bVar4) {
      pFVar1->ReferenceCountsAndFlags = (atomic<unsigned___int64>)((longlong)aVar2 + 1);
      aVar3 = aVar2;
    }
    UNLOCK();
    aVar2 = aVar3;
  } while (!bVar4);
  (this->Owner).Owner = pFVar1;
  return this;
}

// FSharedBuffer @ 141815cb0

FSharedBuffer * __thiscall FSharedBuffer::FSharedBuffer(FSharedBuffer *this,FBufferOwner *param_1)

{
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&this->Owner,param_1);
  return this;
}

// Clone @ 14181e340

FSharedBuffer __cdecl FSharedBuffer::Clone(void *param_1,ulong64 param_2)

{
  code *pcVar1;
  longlong *plVar2;
  longlong *plVar3;
  bool bVar4;
  FSharedBuffer FVar5;
  ulonglong uVar6;
  ulonglong in_R8;
  void *_Dst;
  longlong *local_res8;
  
  FUniqueBuffer::Alloc((ulong64)&local_res8);
  plVar2 = local_res8;
  _Dst = (void *)0x0;
  if (local_res8 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    if (((ulonglong)local_res8[3] >> 0x3c & 4) == 0) {
      (**(code **)(*local_res8 + 8))(local_res8);
    }
    plVar3 = local_res8;
    uVar6 = plVar2[2];
    if (local_res8 != (longlong *)0x0) {
      if (((ulonglong)local_res8[3] >> 0x3c & 4) == 0) {
        (**(code **)(*local_res8 + 8))(local_res8);
      }
      _Dst = (void *)plVar3[1];
    }
  }
  if ((uVar6 < in_R8) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InView.Size <= Size",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Memory\\MemoryView.h"
                         ,0xdb,L"Failed to copy from a view of %llu bytes to a view of %llu bytes.")
     , bVar4)) {
    pcVar1 = (code *)swi(3);
    FVar5.Owner.Owner = (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)(*pcVar1)();
    return (FSharedBuffer)FVar5.Owner.Owner;
  }
  if (in_R8 == 0) {
    *(longlong **)param_1 = local_res8;
  }
  else {
    memcpy(_Dst,(void *)param_2,in_R8);
    *(longlong **)param_1 = local_res8;
  }
  return (FSharedBuffer)(TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)param_1;
}

// Clone @ 14181e440

FSharedBuffer __cdecl FSharedBuffer::Clone(TMemoryView<void_const_> *param_1)

{
  void *_Src;
  ulonglong _Size;
  code *pcVar1;
  longlong *plVar2;
  longlong *plVar3;
  bool bVar4;
  FSharedBuffer FVar5;
  undefined8 *in_RDX;
  ulonglong uVar6;
  void *_Dst;
  longlong *local_res8;
  
  FUniqueBuffer::Alloc((ulong64)&local_res8);
  plVar2 = local_res8;
  _Dst = (void *)0x0;
  if (local_res8 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    if (((ulonglong)local_res8[3] >> 0x3c & 4) == 0) {
      (**(code **)(*local_res8 + 8))(local_res8);
    }
    plVar3 = local_res8;
    uVar6 = plVar2[2];
    if (local_res8 != (longlong *)0x0) {
      if (((ulonglong)local_res8[3] >> 0x3c & 4) == 0) {
        (**(code **)(*local_res8 + 8))(local_res8);
      }
      _Dst = (void *)plVar3[1];
    }
  }
  _Src = (void *)*in_RDX;
  _Size = in_RDX[1];
  if ((uVar6 < _Size) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InView.Size <= Size",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Memory\\MemoryView.h"
                         ,0xdb,L"Failed to copy from a view of %llu bytes to a view of %llu bytes.")
     , bVar4)) {
    pcVar1 = (code *)swi(3);
    FVar5.Owner.Owner = (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)(*pcVar1)();
    return (FSharedBuffer)FVar5.Owner.Owner;
  }
  if (_Size == 0) {
    param_1->Data = local_res8;
  }
  else {
    memcpy(_Dst,_Src,_Size);
    param_1->Data = local_res8;
  }
  return (FSharedBuffer)(TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)param_1;
}

// GetSize @ 141827390

ulong64 __thiscall FSharedBuffer::GetSize(FSharedBuffer *this)

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

// IsOwned @ 14182ac90

bool __thiscall FSharedBuffer::IsOwned(FSharedBuffer *this)

{
  FBufferOwner *pFVar1;
  
  pFVar1 = (this->Owner).Owner;
  if ((pFVar1 != (FBufferOwner *)0x0) &&
     (((ulonglong)pFVar1->ReferenceCountsAndFlags >> 0x3c & 1) == 0)) {
    return false;
  }
  return true;
}

// MakeOwned @ 14182c030

FSharedBuffer __thiscall FSharedBuffer::MakeOwned(FSharedBuffer *this)

{
  atomic<unsigned___int64> *paVar1;
  atomic<unsigned___int64> aVar2;
  FSharedBuffer FVar3;
  FBufferOwner *pFVar4;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> in_RDX;
  int iVar5;
  int iVar6;
  TMemoryView<void_const_> local_res8;
  
  pFVar4 = (this->Owner).Owner;
  if ((pFVar4 == (FBufferOwner *)0x0) || ((SUB81(pFVar4->ReferenceCountsAndFlags,7) >> 4 & 1) != 0))
  {
    pFVar4 = (this->Owner).Owner;
    if (pFVar4 != (FBufferOwner *)0x0) {
      LOCK();
      paVar1 = &pFVar4->ReferenceCountsAndFlags;
      aVar2 = *paVar1;
      *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + 1);
      UNLOCK();
      if (((ulonglong)aVar2 & 0x3fffffff) == 0) {
        LOCK();
        pFVar4->ReferenceCountsAndFlags =
             (atomic<unsigned___int64>)((longlong)pFVar4->ReferenceCountsAndFlags + 0x40000000);
        UNLOCK();
      }
    }
    iVar5 = 1;
    iVar6 = 0;
    local_res8.Size = (ulong64)pFVar4;
  }
  else {
    pFVar4 = (this->Owner).Owner;
    if ((pFVar4 != (FBufferOwner *)0x0) &&
       (((ulonglong)pFVar4->ReferenceCountsAndFlags >> 0x3c & 4) == 0)) {
      (**(code **)(pFVar4->_padding_ + 8))(pFVar4);
    }
    pFVar4 = (this->Owner).Owner;
    if ((pFVar4 != (FBufferOwner *)0x0) &&
       (((ulonglong)pFVar4->ReferenceCountsAndFlags >> 0x3c & 4) == 0)) {
      (**(code **)(pFVar4->_padding_ + 8))(pFVar4);
    }
    FVar3 = Clone(&local_res8);
    pFVar4 = *(FBufferOwner **)FVar3.Owner.Owner;
    iVar6 = 2;
    iVar5 = 0;
  }
  if (pFVar4 != (FBufferOwner *)0x0) {
    LOCK();
    paVar1 = &pFVar4->ReferenceCountsAndFlags;
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + 1);
    UNLOCK();
    if (((ulonglong)aVar2 & 0x3fffffff) == 0) {
      LOCK();
      pFVar4->ReferenceCountsAndFlags =
           (atomic<unsigned___int64>)((longlong)pFVar4->ReferenceCountsAndFlags + 0x40000000);
      UNLOCK();
    }
  }
  (in_RDX.Owner)->_padding_ = (longlong)pFVar4;
  if (iVar6 != 0) {
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
              ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&local_res8);
  }
  if (iVar5 != 0) {
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
              ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&local_res8.Size);
  }
  return (FSharedBuffer)(TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)in_RDX.Owner;
}

// MakeOwned @ 14182c180

FSharedBuffer __thiscall FSharedBuffer::MakeOwned(FSharedBuffer *this)

{
  FBufferOwner *pFVar1;
  longlong lVar2;
  FSharedBuffer FVar3;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> in_RDX;
  TMemoryView<void_const_> local_res8;
  
  pFVar1 = (this->Owner).Owner;
  if ((pFVar1 != (FBufferOwner *)0x0) &&
     (((ulonglong)pFVar1->ReferenceCountsAndFlags >> 0x3c & 1) == 0)) {
    pFVar1 = (this->Owner).Owner;
    if ((pFVar1 != (FBufferOwner *)0x0) &&
       (((ulonglong)pFVar1->ReferenceCountsAndFlags >> 0x3c & 4) == 0)) {
      (**(code **)(pFVar1->_padding_ + 8))(pFVar1);
    }
    pFVar1 = (this->Owner).Owner;
    if ((pFVar1 != (FBufferOwner *)0x0) &&
       (((ulonglong)pFVar1->ReferenceCountsAndFlags >> 0x3c & 4) == 0)) {
      (**(code **)(pFVar1->_padding_ + 8))(pFVar1);
    }
    FVar3 = Clone(&local_res8);
    lVar2 = *(longlong *)FVar3.Owner.Owner;
    *(undefined8 *)FVar3.Owner.Owner = 0;
    (in_RDX.Owner)->_padding_ = lVar2;
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
              ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&local_res8);
    return (FSharedBuffer)(TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)in_RDX.Owner;
  }
  pFVar1 = (this->Owner).Owner;
  (this->Owner).Owner = (FBufferOwner *)0x0;
  local_res8.Size = 0;
  (in_RDX.Owner)->_padding_ = (longlong)pFVar1;
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&local_res8.Size);
  return (FSharedBuffer)(TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)in_RDX.Owner;
}

// MakeView @ 14182c430

FSharedBuffer __cdecl FSharedBuffer::MakeView(void *param_1,ulong64 param_2,FSharedBuffer *param_3)

{
  FSharedBuffer local_18;
  FSharedBuffer *local_10;
  
  local_18.Owner.Owner =
       (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)
       (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)param_2;
  local_10 = param_3;
  MakeSharedBufferViewWithOuter<FSharedBuffer,0>(param_1,&local_18);
  return (FSharedBuffer)(TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)param_1;
}

// MakeView @ 14182c460

FSharedBuffer __cdecl FSharedBuffer::MakeView(void *param_1,ulong64 param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  code *pcVar3;
  bool bVar4;
  undefined8 *puVar5;
  FSharedBuffer FVar6;
  undefined8 in_R8;
  
  puVar5 = ::operator_new(0x20);
  if (puVar5 == (undefined8 *)0x0) {
    *(undefined8 *)param_1 = 0;
  }
  else {
    puVar5[3] = 0;
    *puVar5 = &___7FBufferOwnerView_Private_SharedBuffer_UE__6B_;
    puVar5[1] = param_2;
    puVar5[2] = in_R8;
    LOCK();
    puVar5[3] = puVar5[3] | 0x4000000000000000;
    UNLOCK();
    *puVar5 = &___7FBufferOwnerView_Private_SharedBuffer_UE__6B_;
    LOCK();
    puVar5[3] = puVar5[3] | 0x2000000000000000;
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
        return (FSharedBuffer)FVar6.Owner.Owner;
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
  return (FSharedBuffer)(TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)param_1;
}

// MakeView @ 14182c560

FSharedBuffer __cdecl FSharedBuffer::MakeView(void *param_1,ulong64 param_2,FSharedBuffer *param_3)

{
  FSharedBuffer local_18;
  FSharedBuffer *local_10;
  
  local_18.Owner.Owner =
       (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)
       (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)param_2;
  local_10 = param_3;
  MakeSharedBufferViewWithOuter<FSharedBuffer_const_&,0>(param_1,&local_18);
  return (FSharedBuffer)(TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)param_1;
}

// MakeView @ 14182c590

FSharedBuffer __cdecl
FSharedBuffer::MakeView(TMemoryView<void_const_> *param_1,FSharedBuffer *param_2)

{
  FSharedBuffer local_18;
  FBufferOwner *pFStack_10;
  
  local_18 = (FSharedBuffer)(param_2->Owner).Owner;
  pFStack_10 = param_2[1].Owner.Owner;
  MakeSharedBufferViewWithOuter<FSharedBuffer,0>(param_1,&local_18);
  return (FSharedBuffer)(TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)param_1;
}

// MakeView @ 14182c5c0

FSharedBuffer __cdecl FSharedBuffer::MakeView(TMemoryView<void_const_> *param_1)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  code *pcVar4;
  bool bVar5;
  undefined8 *puVar6;
  FSharedBuffer FVar7;
  undefined8 *in_RDX;
  
  puVar6 = ::operator_new(0x20);
  if (puVar6 == (undefined8 *)0x0) {
    param_1->Data = (void *)0x0;
  }
  else {
    uVar2 = *in_RDX;
    puVar6[2] = in_RDX[1];
    puVar6[3] = 0;
    *puVar6 = &___7FBufferOwnerView_Private_SharedBuffer_UE__6B_;
    puVar6[1] = uVar2;
    LOCK();
    puVar6[3] = puVar6[3] | 0x4000000000000000;
    UNLOCK();
    *puVar6 = &___7FBufferOwnerView_Private_SharedBuffer_UE__6B_;
    LOCK();
    puVar6[3] = puVar6[3] | 0x2000000000000000;
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
        return (FSharedBuffer)FVar7.Owner.Owner;
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
      return (FSharedBuffer)(TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)param_1;
    }
  }
  return (FSharedBuffer)(TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)param_1;
}

// MakeView @ 14182c6c0

FSharedBuffer __cdecl
FSharedBuffer::MakeView(TMemoryView<void_const_> *param_1,FSharedBuffer *param_2)

{
  FSharedBuffer local_18;
  FBufferOwner *pFStack_10;
  
  local_18 = (FSharedBuffer)(param_2->Owner).Owner;
  pFStack_10 = param_2[1].Owner.Owner;
  MakeSharedBufferViewWithOuter<FSharedBuffer_const_&,0>(param_1,&local_18);
  return (FSharedBuffer)(TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)param_1;
}

// Materialize @ 14182c8d0

void __thiscall FSharedBuffer::Materialize(FSharedBuffer *this)

{
  FBufferOwner *pFVar1;
  
  pFVar1 = (this->Owner).Owner;
  if ((pFVar1 != (FBufferOwner *)0x0) &&
     (((ulonglong)pFVar1->ReferenceCountsAndFlags >> 0x3c & 4) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00014182c8e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pFVar1->_padding_ + 8))();
    return;
  }
  return;
}

// MoveToUnique @ 14182ca10

FUniqueBuffer __thiscall FSharedBuffer::MoveToUnique(FSharedBuffer *this)

{
  atomic<unsigned___int64> *paVar1;
  FBufferOwner *pFVar2;
  atomic<unsigned___int64> aVar3;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> in_RDX;
  
  pFVar2 = (this->Owner).Owner;
  (this->Owner).Owner = (FBufferOwner *)0x0;
  if ((pFVar2 == (FBufferOwner *)0x0) ||
     ((aVar3 = pFVar2->ReferenceCountsAndFlags,
      (((uint)((ulonglong)aVar3 >> 0x1e) & 0x3fffffff) -
      (uint)(((ulonglong)aVar3 & 0x3fffffff) != 0)) + (aVar3._0_4_ & 0x3fffffff) == 1 &&
      ((aVar3._7_1_ >> 4 & 3) == 1)))) {
    (in_RDX.Owner)->_padding_ = (longlong)pFVar2;
    return (FUniqueBuffer)(TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)in_RDX.Owner;
  }
  if (((ulonglong)pFVar2->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
    (**(code **)(pFVar2->_padding_ + 8))(pFVar2);
  }
  if (((ulonglong)pFVar2->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
    (**(code **)(pFVar2->_padding_ + 8))(pFVar2);
  }
  FUniqueBuffer::Clone((TMemoryView<void_const_> *)in_RDX.Owner);
  LOCK();
  paVar1 = &pFVar2->ReferenceCountsAndFlags;
  aVar3 = *paVar1;
  *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + -1);
  UNLOCK();
  if ((aVar3._0_4_ & 0x3fffffff) != 1) {
    return (FUniqueBuffer)(TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)in_RDX.Owner;
  }
  (**(code **)(pFVar2->_padding_ + 0x10))(pFVar2);
  pFVar2->Data = (void *)0x0;
  pFVar2->Size = 0;
  LOCK();
  paVar1 = &pFVar2->ReferenceCountsAndFlags;
  aVar3 = *paVar1;
  *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + -0x40000000);
  UNLOCK();
  if (((uint)((ulonglong)aVar3 >> 0x1e) & 0x3fffffff) != 1) {
    return (FUniqueBuffer)(TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)in_RDX.Owner;
  }
  (**(code **)pFVar2->_padding_)(pFVar2,1);
  return (FUniqueBuffer)(TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)in_RDX.Owner;
}

// Reset @ 14182ff60

void __thiscall FSharedBuffer::Reset(FSharedBuffer *this)

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

// operator= @ 1419d43f0

FSharedBuffer * __thiscall FSharedBuffer::operator=(FSharedBuffer *this,FSharedBuffer *param_1)

{
  atomic<unsigned___int64> *paVar1;
  atomic<unsigned___int64> aVar2;
  FBufferOwner *pFVar3;
  FBufferOwner *pFVar4;
  
  pFVar3 = (this->Owner).Owner;
  pFVar4 = (param_1->Owner).Owner;
  (param_1->Owner).Owner = (FBufferOwner *)0x0;
  (this->Owner).Owner = pFVar4;
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
    }
  }
  return this;
}

// GetView @ 141a82bc0

TMemoryView<void_const_> * __thiscall
FSharedBuffer::GetView(FSharedBuffer *this,TMemoryView<void_const_> *__return_storage_ptr__)

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

// ~FSharedBuffer @ 141c8ef50

void __thiscall FSharedBuffer::~FSharedBuffer(FSharedBuffer *this)

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
                    /* WARNING: Could not recover jumptable at 0x000141480003. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)pFVar3->_padding_)(pFVar3,1);
        return;
      }
    }
  }
  return;
}

// FSharedBuffer @ 141ceb290

FSharedBuffer * __thiscall FSharedBuffer::FSharedBuffer(FSharedBuffer *this,FSharedBuffer *param_1)

{
  atomic<unsigned___int64> *paVar1;
  atomic<unsigned___int64> aVar2;
  FBufferOwner *pFVar3;
  
  pFVar3 = (param_1->Owner).Owner;
  if (pFVar3 != (FBufferOwner *)0x0) {
    LOCK();
    paVar1 = &pFVar3->ReferenceCountsAndFlags;
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + 1);
    UNLOCK();
    if (((ulonglong)aVar2 & 0x3fffffff) == 0) {
      LOCK();
      pFVar3->ReferenceCountsAndFlags =
           (atomic<unsigned___int64>)((longlong)pFVar3->ReferenceCountsAndFlags + 0x40000000);
      UNLOCK();
      (this->Owner).Owner = pFVar3;
      return this;
    }
  }
  (this->Owner).Owner = pFVar3;
  return this;
}

