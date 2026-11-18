// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 3

// FBufferOwnerOuterView<FSharedBuffer_const_&,0> @ 14180e870

FBufferOwnerOuterView * __thiscall
UE::SharedBuffer::Private::FBufferOwnerOuterView::FBufferOwnerOuterView<FSharedBuffer_const_&,0>
          (FBufferOwnerOuterView *this,void *param_1,ulong64 param_2,FSharedBuffer *param_3)

{
  atomic<unsigned___int64> *paVar1;
  atomic<unsigned___int64> aVar2;
  FBufferOwner *pFVar3;
  code *pcVar4;
  longlong lVar5;
  bool bVar6;
  FBufferOwnerOuterView *pFVar7;
  void *pvVar8;
  void *pvVar9;
  
  pvVar9 = (void *)0x0;
  this->_padding_ = (longlong)param_1;
  this->_padding_ = param_2;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FBufferOwnerOuterView_Private_SharedBuffer_UE__6B_;
  pFVar3 = (param_3->Owner).Owner;
  if (pFVar3 == (FBufferOwner *)0x0) {
LAB_14180e8d3:
    (this->OuterBuffer).Owner.Owner = pFVar3;
    pvVar8 = pvVar9;
    if (pFVar3 == (FBufferOwner *)0x0) goto LAB_14180e8fb;
  }
  else {
    LOCK();
    paVar1 = &pFVar3->ReferenceCountsAndFlags;
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + 1);
    UNLOCK();
    if (((ulonglong)aVar2 & 0x3fffffff) != 0) goto LAB_14180e8d3;
    LOCK();
    pFVar3->ReferenceCountsAndFlags =
         (atomic<unsigned___int64>)((longlong)pFVar3->ReferenceCountsAndFlags + 0x40000000);
    UNLOCK();
    (this->OuterBuffer).Owner.Owner = pFVar3;
  }
  if (((ulonglong)pFVar3->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
    (**(code **)(pFVar3->_padding_ + 8))(pFVar3);
  }
  pvVar8 = (void *)pFVar3->Size;
LAB_14180e8fb:
  pFVar3 = (this->OuterBuffer).Owner.Owner;
  if (pFVar3 != (FBufferOwner *)0x0) {
    if (((ulonglong)pFVar3->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
      (**(code **)(pFVar3->_padding_ + 8))(pFVar3);
    }
    pvVar9 = pFVar3->Data;
  }
  if (((ulonglong)this->_padding_ >> 0x3c & 4) == 0) {
    pcVar4 = *(code **)(this->_padding_ + 8);
    if (pcVar4 == FBufferOwner::MaterializeBuffer) {
      LOCK();
      this->_padding_ = this->_padding_ | 0x4000000000000000;
      UNLOCK();
    }
    else {
      (*pcVar4)(this);
    }
  }
  lVar5 = this->_padding_;
  if (((ulonglong)this->_padding_ >> 0x3c & 4) == 0) {
    pcVar4 = *(code **)(this->_padding_ + 8);
    if (pcVar4 == FBufferOwner::MaterializeBuffer) {
      LOCK();
      this->_padding_ = this->_padding_ | 0x4000000000000000;
      UNLOCK();
    }
    else {
      (*pcVar4)(this);
    }
  }
  if ((((void *)this->_padding_ < pvVar9) ||
      ((ulonglong)((longlong)pvVar9 + (longlong)pvVar8) < (ulonglong)(this->_padding_ + lVar5))) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("OuterBuffer.GetView().Contains(MakeMemoryView(GetData(), GetSize()))",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Memory\\SharedBuffer.cpp"
                         ,0x50,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pFVar7 = (FBufferOwnerOuterView *)(*pcVar4)();
    return pFVar7;
  }
  LOCK();
  this->_padding_ = this->_padding_ | 0x4000000000000000;
  UNLOCK();
  LOCK();
  this->_padding_ = this->_padding_ | 0x2000000000000000;
  UNLOCK();
  pFVar3 = (this->OuterBuffer).Owner.Owner;
  if ((pFVar3 == (FBufferOwner *)0x0) ||
     (((ulonglong)pFVar3->ReferenceCountsAndFlags >> 0x3c & 1) != 0)) {
    LOCK();
    this->_padding_ = this->_padding_ | 0x1000000000000000;
    UNLOCK();
  }
  return this;
}

// FBufferOwnerOuterView<FSharedBuffer,0> @ 14180ea20

FBufferOwnerOuterView * __thiscall
UE::SharedBuffer::Private::FBufferOwnerOuterView::FBufferOwnerOuterView<FSharedBuffer,0>
          (FBufferOwnerOuterView *this,void *param_1,ulong64 param_2,FSharedBuffer *param_3)

{
  FBufferOwner *pFVar1;
  code *pcVar2;
  longlong lVar3;
  bool bVar4;
  FBufferOwnerOuterView *pFVar5;
  void *pvVar6;
  void *pvVar7;
  
  this->_padding_ = (longlong)param_1;
  pvVar7 = (void *)0x0;
  this->_padding_ = param_2;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FBufferOwnerOuterView_Private_SharedBuffer_UE__6B_;
  pFVar1 = (param_3->Owner).Owner;
  (param_3->Owner).Owner = (FBufferOwner *)0x0;
  (this->OuterBuffer).Owner.Owner = pFVar1;
  pvVar6 = pvVar7;
  if (pFVar1 != (FBufferOwner *)0x0) {
    if (((ulonglong)pFVar1->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
      (**(code **)(pFVar1->_padding_ + 8))(pFVar1);
    }
    pvVar6 = (void *)pFVar1->Size;
  }
  pFVar1 = (this->OuterBuffer).Owner.Owner;
  if (pFVar1 != (FBufferOwner *)0x0) {
    if (((ulonglong)pFVar1->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
      (**(code **)(pFVar1->_padding_ + 8))(pFVar1);
    }
    pvVar7 = pFVar1->Data;
  }
  if (((ulonglong)this->_padding_ >> 0x3c & 4) == 0) {
    pcVar2 = *(code **)(this->_padding_ + 8);
    if (pcVar2 == FBufferOwner::MaterializeBuffer) {
      LOCK();
      this->_padding_ = this->_padding_ | 0x4000000000000000;
      UNLOCK();
    }
    else {
      (*pcVar2)(this);
    }
  }
  lVar3 = this->_padding_;
  if (((ulonglong)this->_padding_ >> 0x3c & 4) == 0) {
    pcVar2 = *(code **)(this->_padding_ + 8);
    if (pcVar2 == FBufferOwner::MaterializeBuffer) {
      LOCK();
      this->_padding_ = this->_padding_ | 0x4000000000000000;
      UNLOCK();
    }
    else {
      (*pcVar2)(this);
    }
  }
  if ((((void *)this->_padding_ < pvVar7) ||
      ((ulonglong)((longlong)pvVar7 + (longlong)pvVar6) < (ulonglong)(this->_padding_ + lVar3))) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("OuterBuffer.GetView().Contains(MakeMemoryView(GetData(), GetSize()))",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Memory\\SharedBuffer.cpp"
                         ,0x50,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FBufferOwnerOuterView *)(*pcVar2)();
    return pFVar5;
  }
  LOCK();
  this->_padding_ = this->_padding_ | 0x4000000000000000;
  UNLOCK();
  LOCK();
  this->_padding_ = this->_padding_ | 0x2000000000000000;
  UNLOCK();
  pFVar1 = (this->OuterBuffer).Owner.Owner;
  if ((pFVar1 == (FBufferOwner *)0x0) ||
     (((ulonglong)pFVar1->ReferenceCountsAndFlags >> 0x3c & 1) != 0)) {
    LOCK();
    this->_padding_ = this->_padding_ | 0x1000000000000000;
    UNLOCK();
  }
  return this;
}

// FreeBuffer @ 141823a70

void __thiscall
UE::SharedBuffer::Private::FBufferOwnerOuterView::FreeBuffer(FBufferOwnerOuterView *this)

{
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::Reset(&(this->OuterBuffer).Owner);
  return;
}

