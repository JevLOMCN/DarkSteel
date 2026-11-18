// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 40

// TCbFieldIterator<FCbField> @ 1419cbe20

TCbFieldIterator<FCbField> * __thiscall
TCbFieldIterator<FCbField>::TCbFieldIterator<FCbField>
          (TCbFieldIterator<FCbField> *this,FCbField *param_1,void *param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)&param_1->field_0x8;
  this->_padding_ = *(longlong *)param_1;
  this->_padding_ = lVar1;
  lVar1 = *(longlong *)&param_1->field_0x10;
  *(undefined8 *)&param_1->field_0x10 = 0;
  this->_padding_ = lVar1;
  this->FieldsEnd = param_2;
  return this;
}

// TCbFieldIterator<FCbField> @ 1419cbe50

TCbFieldIterator<FCbField> * __thiscall
TCbFieldIterator<FCbField>::TCbFieldIterator<FCbField>
          (TCbFieldIterator<FCbField> *this,TCbFieldIterator<FCbField> *param_1)

{
  longlong lVar1;
  
  lVar1 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar1;
  lVar1 = param_1->_padding_;
  param_1->_padding_ = 0;
  this->_padding_ = lVar1;
  this->FieldsEnd = param_1->FieldsEnd;
  return this;
}

// TCbFieldIterator<FCbField> @ 1419cbe80

TCbFieldIterator<FCbField> * __thiscall
TCbFieldIterator<FCbField>::TCbFieldIterator<FCbField>
          (TCbFieldIterator<FCbField> *this,TCbFieldIterator<FCbField> *param_1)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  lVar3 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar3;
  lVar3 = param_1->_padding_;
  if (lVar3 != 0) {
    LOCK();
    puVar1 = (ulonglong *)(lVar3 + 0x18);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 + 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 0) {
      LOCK();
      *(longlong *)(lVar3 + 0x18) = *(longlong *)(lVar3 + 0x18) + 0x40000000;
      UNLOCK();
    }
  }
  this->_padding_ = lVar3;
  this->FieldsEnd = param_1->FieldsEnd;
  return this;
}

// TCbFieldIterator<FCbField> @ 1419cbec0

TCbFieldIterator<FCbField> * __thiscall
TCbFieldIterator<FCbField>::TCbFieldIterator<FCbField>(TCbFieldIterator<FCbField> *this)

{
  *(undefined2 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->FieldsEnd = (void *)0x0;
  return this;
}

// TCbFieldIterator<FCbFieldView> @ 1419cbee0

TCbFieldIterator<FCbFieldView> * __thiscall
TCbFieldIterator<FCbFieldView>::TCbFieldIterator<FCbFieldView>
          (TCbFieldIterator<FCbFieldView> *this,FCbFieldView *param_1,void *param_2)

{
  longlong lVar1;
  void *pvVar2;
  
  lVar1 = *(longlong *)param_1;
  pvVar2 = param_1->Value;
  this->FieldsEnd = param_2;
  this->_padding_ = lVar1;
  this->_padding_ = (longlong)pvVar2;
  return this;
}

// TCbFieldIterator<FCbFieldView> @ 1419cbf00

TCbFieldIterator<FCbFieldView> * __thiscall
TCbFieldIterator<FCbFieldView>::TCbFieldIterator<FCbFieldView>(TCbFieldIterator<FCbFieldView> *this)

{
  *(undefined2 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  this->FieldsEnd = (void *)0x0;
  return this;
}

// ~TCbFieldIterator<FCbField> @ 1419d08c0

void __thiscall
TCbFieldIterator<FCbField>::~TCbFieldIterator<FCbField>(TCbFieldIterator<FCbField> *this)

{
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&this->_padding_);
  return;
}

// operator= @ 1419d3690

TCbFieldIterator<FCbField> * __thiscall
TCbFieldIterator<FCbField>::operator=
          (TCbFieldIterator<FCbField> *this,TCbFieldIterator<FCbField> *param_1)

{
  longlong lVar1;
  
  lVar1 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar1;
  FSharedBuffer::operator=((FSharedBuffer *)&this->_padding_,(FSharedBuffer *)&param_1->_padding_);
  this->FieldsEnd = param_1->FieldsEnd;
  return this;
}

// operator== @ 1419d5730

bool __thiscall
TCbFieldIterator<FCbField>::operator==
          (TCbFieldIterator<FCbField> *this,FCbIteratorSentinel *param_1)

{
  return (this->_padding_ & 0x1f) == 0;
}

// operator== @ 1419d5740

bool __thiscall
TCbFieldIterator<FCbFieldView>::operator==
          (TCbFieldIterator<FCbFieldView> *this,FCbIteratorSentinel *param_1)

{
  return (this->_padding_ & 0x1f) == 0;
}

// operator!= @ 1419d5860

bool __thiscall
TCbFieldIterator<FCbField>::operator!=
          (TCbFieldIterator<FCbField> *this,FCbIteratorSentinel *param_1)

{
  return (this->_padding_ & 0x1f) != 0;
}

// operator!= @ 1419d5870

bool __thiscall
TCbFieldIterator<FCbFieldView>::operator!=
          (TCbFieldIterator<FCbFieldView> *this,FCbIteratorSentinel *param_1)

{
  return (this->_padding_ & 0x1f) != 0;
}

// operator-> @ 1419d5af0

FCbField * __thiscall TCbFieldIterator<FCbField>::operator->(TCbFieldIterator<FCbField> *this)

{
  return (FCbField *)this;
}

// operator-> @ 1419d5b00

FCbFieldView * __thiscall
TCbFieldIterator<FCbFieldView>::operator->(TCbFieldIterator<FCbFieldView> *this)

{
  return (FCbFieldView *)this;
}

// operator* @ 1419d5b10

FCbField * __thiscall TCbFieldIterator<FCbField>::operator*(TCbFieldIterator<FCbField> *this)

{
  return (FCbField *)this;
}

// operator* @ 1419d5b20

FCbFieldView * __thiscall
TCbFieldIterator<FCbFieldView>::operator*(TCbFieldIterator<FCbFieldView> *this)

{
  return (FCbFieldView *)this;
}

// operator++ @ 1419d5b30

TCbFieldIterator<FCbField> * __thiscall
TCbFieldIterator<FCbField>::operator++
          (TCbFieldIterator<FCbField> *this,TCbFieldIterator<FCbField> *__return_storage_ptr__,
          int param_1)

{
  ulonglong *puVar1;
  void *pvVar2;
  ulonglong uVar3;
  longlong lVar4;
  void *pvVar5;
  ulong64 uVar6;
  
  lVar4 = this->_padding_;
  __return_storage_ptr__->_padding_ = this->_padding_;
  __return_storage_ptr__->_padding_ = lVar4;
  lVar4 = this->_padding_;
  if (lVar4 != 0) {
    LOCK();
    puVar1 = (ulonglong *)(lVar4 + 0x18);
    uVar3 = *puVar1;
    *puVar1 = *puVar1 + 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 0) {
      LOCK();
      *(longlong *)(lVar4 + 0x18) = *(longlong *)(lVar4 + 0x18) + 0x40000000;
      UNLOCK();
    }
  }
  __return_storage_ptr__->_padding_ = lVar4;
  __return_storage_ptr__->FieldsEnd = this->FieldsEnd;
  lVar4 = this->_padding_;
  uVar6 = FCbFieldView::GetValueSize((FCbFieldView *)this);
  pvVar5 = this->FieldsEnd;
  pvVar2 = (void *)(uVar6 + lVar4);
  uVar3 = -(ulonglong)(pvVar2 != pvVar5);
  FCbFieldView::FCbFieldView
            ((FCbFieldView *)this,(void *)((ulonglong)pvVar2 & uVar3),
             (ECbFieldType)uVar3 & (ECbFieldType)this->_padding_);
  this->FieldsEnd = (void *)(uVar3 & (ulonglong)pvVar5);
  return __return_storage_ptr__;
}

// operator++ @ 1419d5be0

TCbFieldIterator<FCbField> * __thiscall
TCbFieldIterator<FCbField>::operator++(TCbFieldIterator<FCbField> *this)

{
  void *pvVar1;
  longlong lVar2;
  void *pvVar3;
  ulonglong uVar4;
  ulong64 uVar5;
  
  lVar2 = this->_padding_;
  uVar5 = FCbFieldView::GetValueSize((FCbFieldView *)this);
  pvVar3 = this->FieldsEnd;
  pvVar1 = (void *)(uVar5 + lVar2);
  uVar4 = -(ulonglong)(pvVar1 != pvVar3);
  FCbFieldView::FCbFieldView
            ((FCbFieldView *)this,(void *)((ulonglong)pvVar1 & uVar4),
             (ECbFieldType)this->_padding_ & (ECbFieldType)uVar4);
  this->FieldsEnd = (void *)(uVar4 & (ulonglong)pvVar3);
  return this;
}

// operator++ @ 1419d5c50

TCbFieldIterator<FCbFieldView> * __thiscall
TCbFieldIterator<FCbFieldView>::operator++
          (TCbFieldIterator<FCbFieldView> *this,
          TCbFieldIterator<FCbFieldView> *__return_storage_ptr__,int param_1)

{
  void *pvVar1;
  longlong lVar2;
  void *pvVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulong64 uVar6;
  
  lVar5 = this->_padding_;
  lVar2 = this->_padding_;
  pvVar1 = this->FieldsEnd;
  __return_storage_ptr__->_padding_ = this->_padding_;
  __return_storage_ptr__->_padding_ = lVar5;
  __return_storage_ptr__->FieldsEnd = pvVar1;
  uVar6 = FCbFieldView::GetValueSize((FCbFieldView *)this);
  pvVar3 = this->FieldsEnd;
  pvVar1 = (void *)(uVar6 + lVar2);
  uVar4 = -(ulonglong)(pvVar1 != pvVar3);
  FCbFieldView::FCbFieldView
            ((FCbFieldView *)this,(void *)((ulonglong)pvVar1 & uVar4),
             (ECbFieldType)this->_padding_ & (ECbFieldType)uVar4);
  this->FieldsEnd = (void *)(uVar4 & (ulonglong)pvVar3);
  return __return_storage_ptr__;
}

// operator++ @ 1419d5cd0

TCbFieldIterator<FCbFieldView> * __thiscall
TCbFieldIterator<FCbFieldView>::operator++(TCbFieldIterator<FCbFieldView> *this)

{
  void *pvVar1;
  longlong lVar2;
  void *pvVar3;
  ulonglong uVar4;
  ulong64 uVar5;
  
  lVar2 = this->_padding_;
  uVar5 = FCbFieldView::GetValueSize((FCbFieldView *)this);
  pvVar3 = this->FieldsEnd;
  pvVar1 = (void *)(uVar5 + lVar2);
  uVar4 = -(ulonglong)(pvVar1 != pvVar3);
  FCbFieldView::FCbFieldView
            ((FCbFieldView *)this,(void *)((ulonglong)pvVar1 & uVar4),
             (ECbFieldType)this->_padding_ & (ECbFieldType)uVar4);
  this->FieldsEnd = (void *)(uVar4 & (ulonglong)pvVar3);
  return this;
}

// AppendRangeHash @ 1419e16d0

void __thiscall
TCbFieldIterator<FCbField>::AppendRangeHash
          (TCbFieldIterator<FCbField> *this,FIoHashBuilder *param_1)

{
  atomic<unsigned___int64> *paVar1;
  void *pvVar2;
  atomic<unsigned___int64> aVar3;
  byte bVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  ECbFieldType EVar8;
  ulong64 uVar9;
  int iVar10;
  uint uVar11;
  void *pvVar12;
  ECbFieldType local_res8 [8];
  TMemoryView<void_const_> local_48;
  FCbFieldView local_38;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_28;
  void *local_20;
  
  bVar4 = (byte)this->_padding_;
  if ((bVar4 & 0x40) == 0) {
    uVar11 = (uint)this->_padding_;
    local_38.NameLen = *(uint *)((longlong)&this->_padding_ + 4);
    local_38.Value._0_4_ = (undefined4)this->_padding_;
    local_38.Value._4_4_ = *(undefined4 *)((longlong)&this->_padding_ + 4);
    local_28.Owner = (FBufferOwner *)this->_padding_;
    if (local_28.Owner != (FBufferOwner *)0x0) {
      LOCK();
      paVar1 = &(local_28.Owner)->ReferenceCountsAndFlags;
      aVar3 = *paVar1;
      *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + 1);
      UNLOCK();
      if (((ulonglong)aVar3 & 0x3fffffff) == 0) {
        LOCK();
        (local_28.Owner)->ReferenceCountsAndFlags =
             (atomic<unsigned___int64>)
             ((longlong)(local_28.Owner)->ReferenceCountsAndFlags + 0x40000000);
        UNLOCK();
      }
    }
    pvVar12 = this->FieldsEnd;
    local_38._0_4_ = uVar11;
    local_20 = pvVar12;
    if ((uVar11 & 0x1f) != 0) {
      do {
        EVar8 = (ECbFieldType)uVar11;
        local_res8[0] = EVar8 & (HasFieldName|CustomByName);
        local_20 = pvVar12;
        FBlake3::Update((FBlake3 *)param_1,local_res8,1);
        if ((char)EVar8 < '\0') {
          iVar5 = 0x1f;
          if (local_38.NameLen != 0) {
            for (; local_38.NameLen >> iVar5 == 0; iVar5 = iVar5 + -1) {
            }
          }
          iVar10 = 0;
          if (local_38.NameLen != 0) {
            iVar10 = iVar5;
          }
          uVar11 = local_38.NameLen + 1 + iVar10 / 7;
        }
        else {
          uVar11 = 0;
        }
        lVar7 = CONCAT44(local_38.Value._4_4_,local_38.Value._0_4_);
        local_48.Data = (void *)(lVar7 - (ulonglong)uVar11);
        local_48.Size = FCbFieldView::GetValueSize(&local_38);
        local_48.Size = local_48.Size + uVar11;
        FBlake3::Update((FBlake3 *)param_1,&local_48);
        uVar9 = FCbFieldView::GetValueSize(&local_38);
        pvVar2 = (void *)(uVar9 + lVar7);
        uVar6 = -(ulonglong)(pvVar2 != pvVar12);
        pvVar12 = (void *)((ulonglong)pvVar12 & uVar6);
        FCbFieldView::FCbFieldView
                  (&local_38,(void *)(uVar6 & (ulonglong)pvVar2),(ECbFieldType)uVar6 & EVar8);
        uVar11 = local_38._0_4_ & 0xff;
        local_20 = pvVar12;
      } while ((local_38._0_4_ & 0x1f) != 0);
    }
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_28);
    return;
  }
  if ((char)bVar4 < '\0') {
    uVar11 = *(uint *)((longlong)&this->_padding_ + 4);
    iVar5 = 0x1f;
    if (uVar11 != 0) {
      for (; uVar11 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    iVar10 = 0;
    if (uVar11 != 0) {
      iVar10 = iVar5;
    }
    uVar11 = uVar11 + 1 + iVar10 / 7;
  }
  else {
    uVar11 = 0;
  }
  FCbFieldView::GetValueSize((FCbFieldView *)this);
  local_48.Data = (void *)((this->_padding_ - (ulonglong)uVar11) + -1);
  local_48.Size = (longlong)this->FieldsEnd - (longlong)local_48.Data;
  FBlake3::Update((FBlake3 *)param_1,&local_48);
  return;
}

// AppendRangeHash @ 1419e18b0

void __thiscall
TCbFieldIterator<FCbFieldView>::AppendRangeHash
          (TCbFieldIterator<FCbFieldView> *this,FIoHashBuilder *param_1)

{
  void *pvVar1;
  byte bVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  ECbFieldType EVar6;
  ulong64 uVar7;
  int iVar8;
  uint uVar9;
  void *pvVar10;
  ECbFieldType local_res8 [8];
  TMemoryView<void_const_> local_48;
  FCbFieldView local_38;
  void *local_28;
  
  bVar2 = (byte)this->_padding_;
  if ((bVar2 & 0x40) == 0) {
    uVar9 = (uint)this->_padding_;
    local_38.NameLen = *(uint *)((longlong)&this->_padding_ + 4);
    local_38.Value._0_4_ = (undefined4)this->_padding_;
    local_38.Value._4_4_ = *(undefined4 *)((longlong)&this->_padding_ + 4);
    pvVar10 = this->FieldsEnd;
    if ((uVar9 & 0x1f) != 0) {
      local_38._0_4_ = uVar9;
      do {
        EVar6 = (ECbFieldType)uVar9;
        local_res8[0] = EVar6 & (HasFieldName|CustomByName);
        local_28 = pvVar10;
        FBlake3::Update((FBlake3 *)param_1,local_res8,1);
        if ((char)EVar6 < '\0') {
          iVar3 = 0x1f;
          if (local_38.NameLen != 0) {
            for (; local_38.NameLen >> iVar3 == 0; iVar3 = iVar3 + -1) {
            }
          }
          iVar8 = 0;
          if (local_38.NameLen != 0) {
            iVar8 = iVar3;
          }
          uVar9 = local_38.NameLen + 1 + iVar8 / 7;
        }
        else {
          uVar9 = 0;
        }
        lVar5 = CONCAT44(local_38.Value._4_4_,local_38.Value._0_4_);
        local_48.Data = (void *)(lVar5 - (ulonglong)uVar9);
        local_48.Size = FCbFieldView::GetValueSize(&local_38);
        local_48.Size = local_48.Size + uVar9;
        FBlake3::Update((FBlake3 *)param_1,&local_48);
        uVar7 = FCbFieldView::GetValueSize(&local_38);
        pvVar1 = (void *)(uVar7 + lVar5);
        uVar4 = -(ulonglong)(pvVar1 != pvVar10);
        pvVar10 = (void *)((ulonglong)pvVar10 & uVar4);
        FCbFieldView::FCbFieldView
                  (&local_38,(void *)(uVar4 & (ulonglong)pvVar1),(ECbFieldType)uVar4 & EVar6);
        uVar9 = local_38._0_4_ & 0xff;
      } while ((local_38._0_4_ & 0x1f) != 0);
    }
    return;
  }
  if ((char)bVar2 < '\0') {
    uVar9 = *(uint *)((longlong)&this->_padding_ + 4);
    iVar3 = 0x1f;
    if (uVar9 != 0) {
      for (; uVar9 >> iVar3 == 0; iVar3 = iVar3 + -1) {
      }
    }
    iVar8 = 0;
    if (uVar9 != 0) {
      iVar8 = iVar3;
    }
    uVar9 = uVar9 + 1 + iVar8 / 7;
  }
  else {
    uVar9 = 0;
  }
  FCbFieldView::GetValueSize((FCbFieldView *)this);
  local_48.Data = (void *)((this->_padding_ - (ulonglong)uVar9) + -1);
  local_48.Size = (longlong)this->FieldsEnd - (longlong)local_48.Data;
  FBlake3::Update((FBlake3 *)param_1,&local_48);
  return;
}

// CopyRangeTo @ 1419e6820

void __thiscall
TCbFieldIterator<FCbField>::CopyRangeTo(TCbFieldIterator<FCbField> *this,FArchive *param_1)

{
  atomic<unsigned___int64> *paVar1;
  atomic<unsigned___int64> aVar2;
  byte bVar3;
  int iVar4;
  code *pcVar5;
  ulonglong uVar6;
  bool bVar7;
  ulong64 uVar8;
  longlong lVar9;
  void *pvVar10;
  int iVar11;
  uint uVar12;
  void *pvVar13;
  FCbFieldView local_28;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_18;
  void *local_10;
  
  if (((param_1->field_0x28 & 4) == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ar.IsSaving()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Serialization\\CompactBinary.cpp"
                         ,0x366,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  bVar3 = (byte)this->_padding_;
  if ((bVar3 & 0x40) == 0) {
    uVar12 = (uint)this->_padding_;
    local_28.NameLen = *(uint *)((longlong)&this->_padding_ + 4);
    local_28.Value._0_4_ = (undefined4)this->_padding_;
    local_28.Value._4_4_ = *(undefined4 *)((longlong)&this->_padding_ + 4);
    local_18.Owner = (FBufferOwner *)this->_padding_;
    if (local_18.Owner != (FBufferOwner *)0x0) {
      LOCK();
      paVar1 = &(local_18.Owner)->ReferenceCountsAndFlags;
      aVar2 = *paVar1;
      *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + 1);
      UNLOCK();
      if (((ulonglong)aVar2 & 0x3fffffff) == 0) {
        LOCK();
        (local_18.Owner)->ReferenceCountsAndFlags =
             (atomic<unsigned___int64>)
             ((longlong)(local_18.Owner)->ReferenceCountsAndFlags + 0x40000000);
        UNLOCK();
      }
    }
    pvVar10 = this->FieldsEnd;
    local_28._0_4_ = uVar12;
    while (local_10 = pvVar10, (local_28._0_4_ & 0x1f) != 0) {
      FCbFieldView::CopyTo(&local_28,param_1);
      uVar8 = FCbFieldView::GetValueSize(&local_28);
      pvVar13 = (void *)(CONCAT44(local_28.Value._4_4_,local_28.Value._0_4_) + uVar8);
      uVar6 = -(ulonglong)(pvVar13 != pvVar10);
      pvVar10 = (void *)((ulonglong)pvVar10 & uVar6);
      FCbFieldView::FCbFieldView
                (&local_28,(void *)(uVar6 & (ulonglong)pvVar13),
                 (ECbFieldType)uVar6 & (ECbFieldType)uVar12);
      uVar12 = local_28._0_4_ & 0xff;
    }
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_18);
    return;
  }
  if ((char)bVar3 < '\0') {
    uVar12 = *(uint *)((longlong)&this->_padding_ + 4);
    iVar4 = 0x1f;
    if (uVar12 != 0) {
      for (; uVar12 >> iVar4 == 0; iVar4 = iVar4 + -1) {
      }
    }
    iVar11 = 0;
    if (uVar12 != 0) {
      iVar11 = iVar4;
    }
    uVar12 = uVar12 + 1 + iVar11 / 7;
  }
  else {
    uVar12 = 0;
  }
  FCbFieldView::GetValueSize((FCbFieldView *)this);
  lVar9 = (this->_padding_ - (ulonglong)uVar12) + -1;
                    /* WARNING: Could not recover jumptable at 0x0001419e68c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,lVar9,(longlong)this->FieldsEnd - lVar9);
  return;
}

// CopyRangeTo @ 1419e6990

void __thiscall
TCbFieldIterator<FCbField>::CopyRangeTo(TCbFieldIterator<FCbField> *this,TMemoryView<void> *param_1)

{
  atomic<unsigned___int64> *paVar1;
  atomic<unsigned___int64> aVar2;
  byte bVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  ulong64 uVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  void *pvVar11;
  void *pvVar12;
  void *pvVar13;
  ulong64 uVar14;
  TMemoryView<void> local_58;
  FCbFieldView local_48;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_38;
  void *local_30;
  
  bVar3 = (byte)this->_padding_;
  if ((bVar3 & 0x40) == 0) {
    uVar9 = (uint)this->_padding_;
    local_48.NameLen = *(uint *)((longlong)&this->_padding_ + 4);
    local_48.Value._0_4_ = (undefined4)this->_padding_;
    local_48.Value._4_4_ = *(undefined4 *)((longlong)&this->_padding_ + 4);
    local_38.Owner = (FBufferOwner *)this->_padding_;
    if (local_38.Owner != (FBufferOwner *)0x0) {
      LOCK();
      paVar1 = &(local_38.Owner)->ReferenceCountsAndFlags;
      aVar2 = *paVar1;
      *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + 1);
      UNLOCK();
      if (((ulonglong)aVar2 & 0x3fffffff) == 0) {
        LOCK();
        (local_38.Owner)->ReferenceCountsAndFlags =
             (atomic<unsigned___int64>)
             ((longlong)(local_38.Owner)->ReferenceCountsAndFlags + 0x40000000);
        UNLOCK();
      }
    }
    pvVar11 = this->FieldsEnd;
    local_48._0_4_ = uVar9;
    local_30 = pvVar11;
    if ((uVar9 & 0x1f) != 0) {
      pvVar13 = param_1->Data;
      uVar14 = param_1->Size;
      do {
        if ((char)(ECbFieldType)uVar9 < '\0') {
          iVar4 = 0x1f;
          if (local_48.NameLen != 0) {
            for (; local_48.NameLen >> iVar4 == 0; iVar4 = iVar4 + -1) {
            }
          }
          iVar8 = 0;
          if (local_48.NameLen != 0) {
            iVar8 = iVar4;
          }
          uVar10 = (ulonglong)(local_48.NameLen + 1 + iVar8 / 7);
        }
        else {
          uVar10 = 0;
        }
        local_30 = pvVar11;
        uVar7 = FCbFieldView::GetValueSize(&local_48);
        local_58.Data = param_1->Data;
        uVar10 = uVar10 + uVar7 + 1;
        local_58.Size = uVar10;
        if (param_1->Size < uVar10) {
          local_58.Size = param_1->Size;
        }
        FCbFieldView::CopyTo(&local_48,&local_58);
        if (uVar14 < uVar10) {
          uVar10 = uVar14;
        }
        pvVar13 = (void *)((longlong)pvVar13 + uVar10);
        uVar14 = uVar14 - uVar10;
        param_1->Data = pvVar13;
        param_1->Size = uVar14;
        uVar7 = FCbFieldView::GetValueSize(&local_48);
        pvVar12 = (void *)(CONCAT44(local_48.Value._4_4_,local_48.Value._0_4_) + uVar7);
        uVar10 = -(ulonglong)(pvVar12 != pvVar11);
        pvVar11 = (void *)((ulonglong)pvVar11 & uVar10);
        FCbFieldView::FCbFieldView
                  (&local_48,(void *)(uVar10 & (ulonglong)pvVar12),
                   (ECbFieldType)uVar10 & (ECbFieldType)uVar9);
        uVar9 = local_48._0_4_ & 0xff;
        local_30 = pvVar11;
      } while ((local_48._0_4_ & 0x1f) != 0);
    }
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_38);
  }
  else {
    if ((char)bVar3 < '\0') {
      uVar9 = *(uint *)((longlong)&this->_padding_ + 4);
      iVar4 = 0x1f;
      if (uVar9 != 0) {
        for (; uVar9 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      iVar8 = 0;
      if (uVar9 != 0) {
        iVar8 = iVar4;
      }
      uVar9 = uVar9 + 1 + iVar8 / 7;
    }
    else {
      uVar9 = 0;
    }
    FCbFieldView::GetValueSize((FCbFieldView *)this);
    pvVar11 = (void *)((this->_padding_ - (ulonglong)uVar9) + -1);
    uVar10 = (longlong)this->FieldsEnd - (longlong)pvVar11;
    if ((param_1->Size != uVar10) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InBuffer.GetSize() == Source.GetSize()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Serialization\\CompactBinary.cpp"
                           ,0x355,L"Buffer is %llu bytes but %llu is required."), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if ((param_1->Size < uVar10) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InView.Size <= Size",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Memory\\MemoryView.h"
                           ,0xdb,
                           L"Failed to copy from a view of %llu bytes to a view of %llu bytes."),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (uVar10 != 0) {
      memcpy(param_1->Data,pvVar11,uVar10);
      return;
    }
  }
  return;
}

// CopyRangeTo @ 1419e6bf0

void __thiscall
TCbFieldIterator<FCbFieldView>::CopyRangeTo(TCbFieldIterator<FCbFieldView> *this,FArchive *param_1)

{
  byte bVar1;
  int iVar2;
  code *pcVar3;
  ulonglong uVar4;
  bool bVar5;
  ulong64 uVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  void *pvVar10;
  void *pvVar11;
  FCbFieldView local_28;
  void *local_18;
  
  if (((param_1->field_0x28 & 4) == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ar.IsSaving()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Serialization\\CompactBinary.cpp"
                         ,0x366,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  bVar1 = (byte)this->_padding_;
  if ((bVar1 & 0x40) != 0) {
    if ((char)bVar1 < '\0') {
      uVar9 = *(uint *)((longlong)&this->_padding_ + 4);
      iVar2 = 0x1f;
      if (uVar9 != 0) {
        for (; uVar9 >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
      }
      iVar8 = 0;
      if (uVar9 != 0) {
        iVar8 = iVar2;
      }
      uVar9 = uVar9 + 1 + iVar8 / 7;
    }
    else {
      uVar9 = 0;
    }
    FCbFieldView::GetValueSize((FCbFieldView *)this);
    lVar7 = (this->_padding_ - (ulonglong)uVar9) + -1;
                    /* WARNING: Could not recover jumptable at 0x0001419e6c96. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,lVar7,(longlong)this->FieldsEnd - lVar7);
    return;
  }
  uVar9 = (uint)this->_padding_;
  local_28.NameLen = *(uint *)((longlong)&this->_padding_ + 4);
  local_28.Value._0_4_ = (undefined4)this->_padding_;
  local_28.Value._4_4_ = *(undefined4 *)((longlong)&this->_padding_ + 4);
  pvVar10 = this->FieldsEnd;
  local_28._0_4_ = uVar9;
  while ((local_28._0_4_ & 0x1f) != 0) {
    local_18 = pvVar10;
    FCbFieldView::CopyTo(&local_28,param_1);
    uVar6 = FCbFieldView::GetValueSize(&local_28);
    pvVar11 = (void *)(CONCAT44(local_28.Value._4_4_,local_28.Value._0_4_) + uVar6);
    uVar4 = -(ulonglong)(pvVar11 != pvVar10);
    pvVar10 = (void *)((ulonglong)pvVar10 & uVar4);
    FCbFieldView::FCbFieldView
              (&local_28,(void *)(uVar4 & (ulonglong)pvVar11),
               (ECbFieldType)uVar9 & (ECbFieldType)uVar4);
    uVar9 = local_28._0_4_ & 0xff;
  }
  return;
}

// CopyRangeTo @ 1419e6d30

void __thiscall
TCbFieldIterator<FCbFieldView>::CopyRangeTo
          (TCbFieldIterator<FCbFieldView> *this,TMemoryView<void> *param_1)

{
  byte bVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  ulong64 uVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  void *pvVar9;
  void *pvVar10;
  ulong64 uVar11;
  void *pvVar12;
  TMemoryView<void> local_58;
  FCbFieldView local_48;
  void *local_38;
  
  bVar1 = (byte)this->_padding_;
  if ((bVar1 & 0x40) == 0) {
    uVar7 = (uint)this->_padding_;
    local_48.NameLen = *(uint *)((longlong)&this->_padding_ + 4);
    local_48.Value._0_4_ = (undefined4)this->_padding_;
    local_48.Value._4_4_ = *(undefined4 *)((longlong)&this->_padding_ + 4);
    pvVar9 = this->FieldsEnd;
    if ((uVar7 & 0x1f) != 0) {
      uVar11 = param_1->Size;
      pvVar12 = param_1->Data;
      local_48._0_4_ = uVar7;
      do {
        if ((char)(ECbFieldType)uVar7 < '\0') {
          iVar2 = 0x1f;
          if (local_48.NameLen != 0) {
            for (; local_48.NameLen >> iVar2 == 0; iVar2 = iVar2 + -1) {
            }
          }
          iVar6 = 0;
          if (local_48.NameLen != 0) {
            iVar6 = iVar2;
          }
          uVar8 = (ulonglong)(local_48.NameLen + 1 + iVar6 / 7);
        }
        else {
          uVar8 = 0;
        }
        local_38 = pvVar9;
        uVar5 = FCbFieldView::GetValueSize(&local_48);
        local_58.Data = param_1->Data;
        uVar8 = uVar8 + uVar5 + 1;
        local_58.Size = uVar8;
        if (param_1->Size < uVar8) {
          local_58.Size = param_1->Size;
        }
        FCbFieldView::CopyTo(&local_48,&local_58);
        if (uVar11 < uVar8) {
          uVar8 = uVar11;
        }
        pvVar12 = (void *)((longlong)pvVar12 + uVar8);
        uVar11 = uVar11 - uVar8;
        param_1->Data = pvVar12;
        param_1->Size = uVar11;
        uVar5 = FCbFieldView::GetValueSize(&local_48);
        pvVar10 = (void *)(CONCAT44(local_48.Value._4_4_,local_48.Value._0_4_) + uVar5);
        uVar8 = -(ulonglong)(pvVar10 != pvVar9);
        pvVar9 = (void *)((ulonglong)pvVar9 & uVar8);
        FCbFieldView::FCbFieldView
                  (&local_48,(void *)(uVar8 & (ulonglong)pvVar10),
                   (ECbFieldType)uVar8 & (ECbFieldType)uVar7);
        uVar7 = local_48._0_4_ & 0xff;
      } while ((local_48._0_4_ & 0x1f) != 0);
    }
  }
  else {
    if ((char)bVar1 < '\0') {
      uVar7 = *(uint *)((longlong)&this->_padding_ + 4);
      iVar2 = 0x1f;
      if (uVar7 != 0) {
        for (; uVar7 >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
      }
      iVar6 = 0;
      if (uVar7 != 0) {
        iVar6 = iVar2;
      }
      uVar7 = uVar7 + 1 + iVar6 / 7;
    }
    else {
      uVar7 = 0;
    }
    FCbFieldView::GetValueSize((FCbFieldView *)this);
    pvVar9 = (void *)((this->_padding_ - (ulonglong)uVar7) + -1);
    uVar8 = (longlong)this->FieldsEnd - (longlong)pvVar9;
    if ((param_1->Size != uVar8) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InBuffer.GetSize() == Source.GetSize()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Serialization\\CompactBinary.cpp"
                           ,0x355,L"Buffer is %llu bytes but %llu is required."), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((param_1->Size < uVar8) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InView.Size <= Size",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Memory\\MemoryView.h"
                           ,0xdb,
                           L"Failed to copy from a view of %llu bytes to a view of %llu bytes."),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (uVar8 != 0) {
      memcpy(param_1->Data,pvVar9,uVar8);
      return;
    }
  }
  return;
}

// GetRangeHash @ 141a01bf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FIoHash * __thiscall
TCbFieldIterator<FCbField>::GetRangeHash
          (TCbFieldIterator<FCbField> *this,FIoHash *__return_storage_ptr__)

{
  undefined8 uVar1;
  FBlake3Hash *pFVar2;
  undefined1 auStack_7c8 [32];
  FBlake3Hash local_7a8;
  FBlake3 local_788;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_7c8;
  FBlake3::Reset(&local_788);
  AppendRangeHash(this,(FIoHashBuilder *)&local_788);
  pFVar2 = FBlake3::Finalize(&local_788,&local_7a8);
  __return_storage_ptr__->Hash[0] = '\0';
  __return_storage_ptr__->Hash[1] = '\0';
  __return_storage_ptr__->Hash[2] = '\0';
  __return_storage_ptr__->Hash[3] = '\0';
  __return_storage_ptr__->Hash[4] = '\0';
  __return_storage_ptr__->Hash[5] = '\0';
  __return_storage_ptr__->Hash[6] = '\0';
  __return_storage_ptr__->Hash[7] = '\0';
  __return_storage_ptr__->Hash[8] = '\0';
  __return_storage_ptr__->Hash[9] = '\0';
  __return_storage_ptr__->Hash[10] = '\0';
  __return_storage_ptr__->Hash[0xb] = '\0';
  __return_storage_ptr__->Hash[0xc] = '\0';
  __return_storage_ptr__->Hash[0xd] = '\0';
  __return_storage_ptr__->Hash[0xe] = '\0';
  __return_storage_ptr__->Hash[0xf] = '\0';
  __return_storage_ptr__->Hash[0x10] = '\0';
  __return_storage_ptr__->Hash[0x11] = '\0';
  __return_storage_ptr__->Hash[0x12] = '\0';
  __return_storage_ptr__->Hash[0x13] = '\0';
  uVar1 = *(undefined8 *)(pFVar2->Hash + 8);
  *(undefined8 *)__return_storage_ptr__->Hash = *(undefined8 *)pFVar2->Hash;
  *(undefined8 *)(__return_storage_ptr__->Hash + 8) = uVar1;
  *(undefined4 *)(__return_storage_ptr__->Hash + 0x10) = *(undefined4 *)(pFVar2->Hash + 0x10);
  return __return_storage_ptr__;
}

// GetRangeHash @ 141a01c80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FIoHash * __thiscall
TCbFieldIterator<FCbFieldView>::GetRangeHash
          (TCbFieldIterator<FCbFieldView> *this,FIoHash *__return_storage_ptr__)

{
  undefined8 uVar1;
  FBlake3Hash *pFVar2;
  undefined1 auStack_7c8 [32];
  FBlake3Hash local_7a8;
  FBlake3 local_788;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_7c8;
  FBlake3::Reset(&local_788);
  AppendRangeHash(this,(FIoHashBuilder *)&local_788);
  pFVar2 = FBlake3::Finalize(&local_788,&local_7a8);
  __return_storage_ptr__->Hash[0] = '\0';
  __return_storage_ptr__->Hash[1] = '\0';
  __return_storage_ptr__->Hash[2] = '\0';
  __return_storage_ptr__->Hash[3] = '\0';
  __return_storage_ptr__->Hash[4] = '\0';
  __return_storage_ptr__->Hash[5] = '\0';
  __return_storage_ptr__->Hash[6] = '\0';
  __return_storage_ptr__->Hash[7] = '\0';
  __return_storage_ptr__->Hash[8] = '\0';
  __return_storage_ptr__->Hash[9] = '\0';
  __return_storage_ptr__->Hash[10] = '\0';
  __return_storage_ptr__->Hash[0xb] = '\0';
  __return_storage_ptr__->Hash[0xc] = '\0';
  __return_storage_ptr__->Hash[0xd] = '\0';
  __return_storage_ptr__->Hash[0xe] = '\0';
  __return_storage_ptr__->Hash[0xf] = '\0';
  __return_storage_ptr__->Hash[0x10] = '\0';
  __return_storage_ptr__->Hash[0x11] = '\0';
  __return_storage_ptr__->Hash[0x12] = '\0';
  __return_storage_ptr__->Hash[0x13] = '\0';
  uVar1 = *(undefined8 *)(pFVar2->Hash + 8);
  *(undefined8 *)__return_storage_ptr__->Hash = *(undefined8 *)pFVar2->Hash;
  *(undefined8 *)(__return_storage_ptr__->Hash + 8) = uVar1;
  *(undefined4 *)(__return_storage_ptr__->Hash + 0x10) = *(undefined4 *)(pFVar2->Hash + 0x10);
  return __return_storage_ptr__;
}

// GetRangeSize @ 141a01d10

ulong64 __thiscall TCbFieldIterator<FCbField>::GetRangeSize(TCbFieldIterator<FCbField> *this)

{
  atomic<unsigned___int64> *paVar1;
  atomic<unsigned___int64> aVar2;
  byte bVar3;
  int iVar4;
  ulonglong uVar5;
  ulong64 uVar6;
  int iVar7;
  uint uVar8;
  void *pvVar9;
  uint uVar10;
  void *pvVar11;
  ulong64 uVar12;
  FCbFieldView local_28;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_18;
  void *local_10;
  
  bVar3 = (byte)this->_padding_;
  if ((bVar3 & 0x40) == 0) {
    uVar8 = (uint)this->_padding_;
    local_28.NameLen = *(uint *)((longlong)&this->_padding_ + 4);
    local_28.Value._0_4_ = (undefined4)this->_padding_;
    local_28.Value._4_4_ = *(undefined4 *)((longlong)&this->_padding_ + 4);
    local_18.Owner = (FBufferOwner *)this->_padding_;
    uVar12 = 0;
    if (local_18.Owner != (FBufferOwner *)0x0) {
      LOCK();
      paVar1 = &(local_18.Owner)->ReferenceCountsAndFlags;
      aVar2 = *paVar1;
      *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + 1);
      UNLOCK();
      if (((ulonglong)aVar2 & 0x3fffffff) == 0) {
        LOCK();
        (local_18.Owner)->ReferenceCountsAndFlags =
             (atomic<unsigned___int64>)
             ((longlong)(local_18.Owner)->ReferenceCountsAndFlags + 0x40000000);
        UNLOCK();
      }
    }
    pvVar9 = this->FieldsEnd;
    local_28._0_4_ = uVar8;
    while (local_10 = pvVar9, (local_28._0_4_ & 0x1f) != 0) {
      if ((char)(ECbFieldType)uVar8 < '\0') {
        iVar4 = 0x1f;
        if (local_28.NameLen != 0) {
          for (; local_28.NameLen >> iVar4 == 0; iVar4 = iVar4 + -1) {
          }
        }
        iVar7 = 0;
        if (local_28.NameLen != 0) {
          iVar7 = iVar4;
        }
        uVar10 = local_28.NameLen + 1 + iVar7 / 7;
      }
      else {
        uVar10 = 0;
      }
      uVar6 = FCbFieldView::GetValueSize(&local_28);
      uVar12 = uVar6 + 1 + uVar10 + uVar12;
      uVar6 = FCbFieldView::GetValueSize(&local_28);
      pvVar11 = (void *)(CONCAT44(local_28.Value._4_4_,local_28.Value._0_4_) + uVar6);
      uVar5 = -(ulonglong)(pvVar11 != pvVar9);
      pvVar9 = (void *)((ulonglong)pvVar9 & uVar5);
      FCbFieldView::FCbFieldView
                (&local_28,(void *)(uVar5 & (ulonglong)pvVar11),
                 (ECbFieldType)uVar5 & (ECbFieldType)uVar8);
      uVar8 = local_28._0_4_ & 0xff;
    }
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_18);
    return uVar12;
  }
  if ((char)bVar3 < '\0') {
    uVar8 = *(uint *)((longlong)&this->_padding_ + 4);
    iVar4 = 0x1f;
    if (uVar8 != 0) {
      for (; uVar8 >> iVar4 == 0; iVar4 = iVar4 + -1) {
      }
    }
    iVar7 = 0;
    if (uVar8 != 0) {
      iVar7 = iVar4;
    }
    uVar8 = uVar8 + 1 + iVar7 / 7;
  }
  else {
    uVar8 = 0;
  }
  FCbFieldView::GetValueSize((FCbFieldView *)this);
  return (longlong)this->FieldsEnd - ((this->_padding_ - (ulonglong)uVar8) + -1);
}

// GetRangeSize @ 141a01e90

ulong64 __thiscall
TCbFieldIterator<FCbFieldView>::GetRangeSize(TCbFieldIterator<FCbFieldView> *this)

{
  byte bVar1;
  int iVar2;
  ulonglong uVar3;
  ulong64 uVar4;
  int iVar5;
  uint uVar6;
  void *pvVar7;
  uint uVar8;
  void *pvVar9;
  ulong64 uVar10;
  FCbFieldView local_28;
  void *local_18;
  
  bVar1 = (byte)this->_padding_;
  if ((bVar1 & 0x40) != 0) {
    if ((char)bVar1 < '\0') {
      uVar6 = *(uint *)((longlong)&this->_padding_ + 4);
      iVar2 = 0x1f;
      if (uVar6 != 0) {
        for (; uVar6 >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
      }
      iVar5 = 0;
      if (uVar6 != 0) {
        iVar5 = iVar2;
      }
      uVar6 = uVar6 + 1 + iVar5 / 7;
    }
    else {
      uVar6 = 0;
    }
    FCbFieldView::GetValueSize((FCbFieldView *)this);
    return (longlong)this->FieldsEnd - ((this->_padding_ - (ulonglong)uVar6) + -1);
  }
  uVar6 = (uint)this->_padding_;
  local_28.NameLen = *(uint *)((longlong)&this->_padding_ + 4);
  local_28.Value._0_4_ = (undefined4)this->_padding_;
  local_28.Value._4_4_ = *(undefined4 *)((longlong)&this->_padding_ + 4);
  pvVar7 = this->FieldsEnd;
  uVar10 = 0;
  local_28._0_4_ = uVar6;
  while ((local_28._0_4_ & 0x1f) != 0) {
    if ((char)(ECbFieldType)uVar6 < '\0') {
      iVar2 = 0x1f;
      if (local_28.NameLen != 0) {
        for (; local_28.NameLen >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
      }
      iVar5 = 0;
      if (local_28.NameLen != 0) {
        iVar5 = iVar2;
      }
      uVar8 = local_28.NameLen + 1 + iVar5 / 7;
    }
    else {
      uVar8 = 0;
    }
    local_18 = pvVar7;
    uVar4 = FCbFieldView::GetValueSize(&local_28);
    uVar10 = uVar4 + 1 + uVar8 + uVar10;
    uVar4 = FCbFieldView::GetValueSize(&local_28);
    pvVar9 = (void *)(CONCAT44(local_28.Value._4_4_,local_28.Value._0_4_) + uVar4);
    uVar3 = -(ulonglong)(pvVar9 != pvVar7);
    pvVar7 = (void *)((ulonglong)pvVar7 & uVar3);
    FCbFieldView::FCbFieldView
              (&local_28,(void *)(uVar3 & (ulonglong)pvVar9),
               (ECbFieldType)uVar3 & (ECbFieldType)uVar6);
    uVar6 = local_28._0_4_ & 0xff;
  }
  return uVar10;
}

// IterateRangeAttachments @ 141a079e0

void __thiscall
TCbFieldIterator<FCbField>::IterateRangeAttachments
          (TCbFieldIterator<FCbField> *this,TFunctionRef<void___cdecl(FCbFieldView)> *param_1)

{
  atomic<unsigned___int64> *paVar1;
  atomic<unsigned___int64> aVar2;
  ulonglong uVar3;
  ulong64 uVar4;
  ECbFieldType EVar5;
  uint uVar6;
  byte bVar7;
  void *pvVar8;
  void *pvVar9;
  TFunctionRef<void___cdecl(FCbFieldView)> local_38;
  FCbFieldView local_28;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_18;
  void *local_10;
  
  bVar7 = (byte)this->_padding_;
  if ((bVar7 & 0x40) == 0) {
    bVar7 = bVar7 & 0x1e;
    if (bVar7 == 0xe || (bVar7 == 4 || bVar7 == 2)) {
      uVar6 = (uint)this->_padding_;
      local_28.NameLen = *(uint *)((longlong)&this->_padding_ + 4);
      local_28.Value._0_4_ = (undefined4)this->_padding_;
      local_28.Value._4_4_ = *(undefined4 *)((longlong)&this->_padding_ + 4);
      local_18.Owner = (FBufferOwner *)this->_padding_;
      if (local_18.Owner != (FBufferOwner *)0x0) {
        LOCK();
        paVar1 = &(local_18.Owner)->ReferenceCountsAndFlags;
        aVar2 = *paVar1;
        *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + 1);
        UNLOCK();
        if (((ulonglong)aVar2 & 0x3fffffff) == 0) {
          LOCK();
          (local_18.Owner)->ReferenceCountsAndFlags =
               (atomic<unsigned___int64>)
               ((longlong)(local_18.Owner)->ReferenceCountsAndFlags + 0x40000000);
          UNLOCK();
        }
      }
      pvVar9 = this->FieldsEnd;
      local_28._0_4_ = uVar6;
      while (local_10 = pvVar9, (local_28._0_4_ & 0x1f) != 0) {
        local_38._0_8_ = *(undefined8 *)param_1;
        local_38._8_8_ = *(undefined8 *)&param_1->field_0x8;
        FCbFieldView::IterateAttachments(&local_28,&local_38);
        uVar4 = FCbFieldView::GetValueSize(&local_28);
        pvVar8 = (void *)(CONCAT44(local_28.Value._4_4_,local_28.Value._0_4_) + uVar4);
        uVar3 = -(ulonglong)(pvVar8 != pvVar9);
        pvVar9 = (void *)((ulonglong)pvVar9 & uVar3);
        FCbFieldView::FCbFieldView
                  (&local_28,(void *)(uVar3 & (ulonglong)pvVar8),
                   (ECbFieldType)uVar3 & (ECbFieldType)uVar6);
        uVar6 = local_28._0_4_ & 0xff;
      }
      UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
      ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_18);
    }
  }
  else {
    uVar6 = (uint)this->_padding_;
    local_28.NameLen = *(uint *)((longlong)&this->_padding_ + 4);
    local_28.Value._0_4_ = (undefined4)this->_padding_;
    local_28.Value._4_4_ = *(undefined4 *)((longlong)&this->_padding_ + 4);
    local_18.Owner = (FBufferOwner *)this->_padding_;
    if (local_18.Owner != (FBufferOwner *)0x0) {
      LOCK();
      paVar1 = &(local_18.Owner)->ReferenceCountsAndFlags;
      aVar2 = *paVar1;
      *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + 1);
      UNLOCK();
      if (((ulonglong)aVar2 & 0x3fffffff) == 0) {
        LOCK();
        (local_18.Owner)->ReferenceCountsAndFlags =
             (atomic<unsigned___int64>)
             ((longlong)(local_18.Owner)->ReferenceCountsAndFlags + 0x40000000);
        UNLOCK();
      }
    }
    pvVar9 = this->FieldsEnd;
    local_28._0_4_ = uVar6;
    while (local_10 = pvVar9, (local_28._0_4_ & 0x1f) != 0) {
      EVar5 = (ECbFieldType)uVar6 & CustomById;
      if (EVar5 == ObjectAttachment || (EVar5 == Array || EVar5 == Object)) {
        local_38._0_8_ = *(undefined8 *)param_1;
        local_38._8_8_ = *(undefined8 *)&param_1->field_0x8;
        FCbFieldView::IterateAttachments(&local_28,&local_38);
      }
      uVar4 = FCbFieldView::GetValueSize(&local_28);
      pvVar8 = (void *)(CONCAT44(local_28.Value._4_4_,local_28.Value._0_4_) + uVar4);
      uVar3 = -(ulonglong)(pvVar8 != pvVar9);
      pvVar9 = (void *)((ulonglong)pvVar9 & uVar3);
      FCbFieldView::FCbFieldView
                (&local_28,(void *)(uVar3 & (ulonglong)pvVar8),
                 (ECbFieldType)uVar3 & (ECbFieldType)uVar6);
      uVar6 = local_28._0_4_ & 0xff;
    }
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_18);
  }
  return;
}

// IterateRangeAttachments @ 141a07be0

void __thiscall
TCbFieldIterator<FCbFieldView>::IterateRangeAttachments
          (TCbFieldIterator<FCbFieldView> *this,TFunctionRef<void___cdecl(FCbFieldView)> *param_1)

{
  ulonglong uVar1;
  byte bVar2;
  uint uVar3;
  ulong64 uVar4;
  void *pvVar5;
  void *pvVar6;
  TFunctionRef<void___cdecl(FCbFieldView)> local_38;
  FCbFieldView local_28;
  void *local_18;
  
  bVar2 = (byte)this->_padding_;
  if ((bVar2 & 0x40) == 0) {
    bVar2 = bVar2 & 0x1e;
    if (bVar2 == 0xe || (bVar2 == 4 || bVar2 == 2)) {
      local_28._0_4_ = SUB84(this->_padding_,0);
      local_28.NameLen = *(uint *)((longlong)&this->_padding_ + 4);
      local_28.Value._0_4_ = (undefined4)this->_padding_;
      local_28.Value._4_4_ = *(undefined4 *)((longlong)&this->_padding_ + 4);
      local_18 = this->FieldsEnd;
      while ((local_28._0_4_ & 0x1f) != 0) {
        local_38._0_8_ = *(undefined8 *)param_1;
        local_38._8_8_ = *(undefined8 *)&param_1->field_0x8;
        FCbFieldView::IterateAttachments(&local_28,&local_38);
        uVar4 = FCbFieldView::GetValueSize(&local_28);
        pvVar6 = (void *)(CONCAT44(local_28.Value._4_4_,local_28.Value._0_4_) + uVar4);
        uVar1 = -(ulonglong)(pvVar6 != local_18);
        pvVar5 = (void *)(uVar1 & (ulonglong)local_18);
        FCbFieldView::FCbFieldView
                  (&local_28,(void *)(uVar1 & (ulonglong)pvVar6),
                   (ECbFieldType)uVar1 & local_28.TypeWithFlags);
        local_18 = pvVar5;
      }
    }
  }
  else {
    uVar3 = (uint)this->_padding_;
    local_28.NameLen = *(uint *)((longlong)&this->_padding_ + 4);
    local_28.Value._0_4_ = (undefined4)this->_padding_;
    local_28.Value._4_4_ = *(undefined4 *)((longlong)&this->_padding_ + 4);
    local_18 = this->FieldsEnd;
    local_28._0_4_ = uVar3;
    while ((local_28._0_4_ & 0x1f) != 0) {
      bVar2 = (byte)uVar3 & 0x1e;
      if (bVar2 == 0xe || (bVar2 == 4 || bVar2 == 2)) {
        local_38._0_8_ = *(undefined8 *)param_1;
        local_38._8_8_ = *(undefined8 *)&param_1->field_0x8;
        FCbFieldView::IterateAttachments(&local_28,&local_38);
      }
      uVar4 = FCbFieldView::GetValueSize(&local_28);
      pvVar6 = (void *)(CONCAT44(local_28.Value._4_4_,local_28.Value._0_4_) + uVar4);
      uVar1 = -(ulonglong)(pvVar6 != local_18);
      pvVar5 = (void *)(uVar1 & (ulonglong)local_18);
      FCbFieldView::FCbFieldView
                (&local_28,(void *)(uVar1 & (ulonglong)pvVar6),
                 (ECbFieldType)uVar1 & local_28.TypeWithFlags);
      uVar3 = local_28._0_4_ & 0xff;
      local_18 = pvVar5;
    }
  }
  return;
}

// Reset @ 141a19fd0

void __thiscall TCbFieldIterator<FCbField>::Reset(TCbFieldIterator<FCbField> *this)

{
  atomic<unsigned___int64> *paVar1;
  atomic<unsigned___int64> aVar2;
  FSharedBuffer FVar3;
  FSharedBuffer FStack_18;
  void *local_10;
  
  FStack_18.Owner.Owner =
       (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)(FBufferOwner *)0x0;
  local_10 = (void *)0x0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  FSharedBuffer::operator=((FSharedBuffer *)&this->_padding_,&FStack_18);
  FVar3.Owner.Owner = FStack_18.Owner.Owner;
  this->FieldsEnd = local_10;
  if (FStack_18.Owner.Owner != (FBufferOwner *)0x0) {
    LOCK();
    paVar1 = (atomic<unsigned___int64> *)((longlong)FStack_18.Owner.Owner + 0x18);
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + -1);
    UNLOCK();
    if ((aVar2._0_4_ & 0x3fffffff) == 1) {
      (**(code **)(*(longlong *)FStack_18.Owner.Owner + 0x10))(FStack_18.Owner.Owner);
      *(void **)((longlong)FVar3.Owner.Owner + 8) = (void *)0x0;
      *(ulong64 *)((longlong)FVar3.Owner.Owner + 0x10) = 0;
      LOCK();
      paVar1 = (atomic<unsigned___int64> *)((longlong)FVar3.Owner.Owner + 0x18);
      aVar2 = *paVar1;
      *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 - 0x40000000);
      UNLOCK();
      if (((uint)((ulonglong)aVar2 >> 0x1e) & 0x3fffffff) == 1) {
        (*(code *)**(undefined8 **)FVar3.Owner.Owner)(FVar3.Owner.Owner,1);
      }
    }
  }
  return;
}

// Reset @ 141a1a080

void __thiscall TCbFieldIterator<FCbFieldView>::Reset(TCbFieldIterator<FCbFieldView> *this)

{
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->FieldsEnd = (void *)0x0;
  return;
}

// TryGetRangeView @ 141a25a30

bool __thiscall
TCbFieldIterator<FCbField>::TryGetRangeView
          (TCbFieldIterator<FCbField> *this,TMemoryView<void_const_> *param_1)

{
  byte bVar1;
  void *pvVar2;
  int iVar3;
  void *pvVar4;
  int iVar5;
  uint uVar6;
  
  bVar1 = (byte)this->_padding_;
  if ((bVar1 & 0x40) != 0) {
    if ((char)bVar1 < '\0') {
      uVar6 = *(uint *)((longlong)&this->_padding_ + 4);
      iVar3 = 0x1f;
      if (uVar6 != 0) {
        for (; uVar6 >> iVar3 == 0; iVar3 = iVar3 + -1) {
        }
      }
      iVar5 = 0;
      if (uVar6 != 0) {
        iVar5 = iVar3;
      }
      uVar6 = uVar6 + 1 + iVar5 / 7;
    }
    else {
      uVar6 = 0;
    }
    FCbFieldView::GetValueSize((FCbFieldView *)this);
    pvVar2 = this->FieldsEnd;
    pvVar4 = (void *)((this->_padding_ - (ulonglong)uVar6) + -1);
    param_1->Data = pvVar4;
    param_1->Size = (longlong)pvVar2 - (longlong)pvVar4;
    return true;
  }
  return false;
}

// TryGetRangeView @ 141a25ad0

bool __thiscall
TCbFieldIterator<FCbFieldView>::TryGetRangeView
          (TCbFieldIterator<FCbFieldView> *this,TMemoryView<void_const_> *param_1)

{
  byte bVar1;
  void *pvVar2;
  int iVar3;
  void *pvVar4;
  int iVar5;
  uint uVar6;
  
  bVar1 = (byte)this->_padding_;
  if ((bVar1 & 0x40) != 0) {
    if ((char)bVar1 < '\0') {
      uVar6 = *(uint *)((longlong)&this->_padding_ + 4);
      iVar3 = 0x1f;
      if (uVar6 != 0) {
        for (; uVar6 >> iVar3 == 0; iVar3 = iVar3 + -1) {
        }
      }
      iVar5 = 0;
      if (uVar6 != 0) {
        iVar5 = iVar3;
      }
      uVar6 = uVar6 + 1 + iVar5 / 7;
    }
    else {
      uVar6 = 0;
    }
    FCbFieldView::GetValueSize((FCbFieldView *)this);
    pvVar2 = this->FieldsEnd;
    pvVar4 = (void *)((this->_padding_ - (ulonglong)uVar6) + -1);
    param_1->Data = pvVar4;
    param_1->Size = (longlong)pvVar2 - (longlong)pvVar4;
    return true;
  }
  return false;
}

// begin @ 141a34440

TCbFieldIterator<FCbField> * __thiscall
TCbFieldIterator<FCbField>::begin
          (TCbFieldIterator<FCbField> *this,TCbFieldIterator<FCbField> *__return_storage_ptr__)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  lVar3 = this->_padding_;
  __return_storage_ptr__->_padding_ = this->_padding_;
  __return_storage_ptr__->_padding_ = lVar3;
  lVar3 = this->_padding_;
  if (lVar3 != 0) {
    LOCK();
    puVar1 = (ulonglong *)(lVar3 + 0x18);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 + 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 0) {
      LOCK();
      *(longlong *)(lVar3 + 0x18) = *(longlong *)(lVar3 + 0x18) + 0x40000000;
      UNLOCK();
    }
  }
  __return_storage_ptr__->_padding_ = lVar3;
  __return_storage_ptr__->FieldsEnd = this->FieldsEnd;
  return __return_storage_ptr__;
}

// begin @ 141a34480

TCbFieldIterator<FCbFieldView> * __thiscall
TCbFieldIterator<FCbFieldView>::begin
          (TCbFieldIterator<FCbFieldView> *this,
          TCbFieldIterator<FCbFieldView> *__return_storage_ptr__)

{
  void *pvVar1;
  longlong lVar2;
  
  lVar2 = this->_padding_;
  pvVar1 = this->FieldsEnd;
  __return_storage_ptr__->_padding_ = this->_padding_;
  __return_storage_ptr__->_padding_ = lVar2;
  __return_storage_ptr__->FieldsEnd = pvVar1;
  return __return_storage_ptr__;
}

// end @ 141a344a0

FCbIteratorSentinel __thiscall TCbFieldIterator<FCbField>::end(TCbFieldIterator<FCbField> *this)

{
  FCbIteratorSentinel in_DL;
  
  return in_DL;
}

// end @ 141a344b0

FCbIteratorSentinel __thiscall
TCbFieldIterator<FCbFieldView>::end(TCbFieldIterator<FCbFieldView> *this)

{
  FCbIteratorSentinel in_DL;
  
  return in_DL;
}

