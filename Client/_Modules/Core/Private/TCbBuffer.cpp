// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 12

// TCbBuffer<FCbArrayView> @ 14179b790

TCbBuffer<FCbArrayView> * __thiscall
TCbBuffer<FCbArrayView>::TCbBuffer<FCbArrayView>
          (TCbBuffer<FCbArrayView> *this,FCbArrayView *param_1,FSharedBuffer param_2)

{
  atomic<unsigned___int64> *paVar1;
  longlong *plVar2;
  ulonglong *puVar3;
  atomic<unsigned___int64> aVar4;
  ulonglong uVar5;
  longlong *plVar6;
  longlong lVar7;
  FBufferOwner *pFVar8;
  FBufferOwner *pFVar9;
  code *pcVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  bool bVar14;
  TMemoryView<void_const_> *pTVar15;
  TCbBuffer<FCbArrayView> *pTVar16;
  void *pvVar17;
  TMemoryView<void_const_> local_28;
  
  uVar11 = *(undefined4 *)&param_1->field_0x4;
  uVar12 = *(undefined4 *)&param_1->field_0x8;
  uVar13 = *(undefined4 *)&param_1->field_0xc;
  pvVar17 = (void *)0x0;
  *(undefined4 *)&this->_padding_ = *(undefined4 *)param_1;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = uVar11;
  *(undefined4 *)&this->_padding_ = uVar12;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = uVar13;
  (this->Buffer).Owner.Owner = (FBufferOwner *)0x0;
  plVar6 = *(longlong **)param_2.Owner.Owner;
  if (plVar6 != (longlong *)0x0) {
    if (((ulonglong)plVar6[3] >> 0x3c & 4) == 0) {
      (**(code **)(*plVar6 + 8))(plVar6);
    }
    lVar7 = plVar6[2];
    plVar6 = *(longlong **)param_2.Owner.Owner;
    if (plVar6 != (longlong *)0x0) {
      if (((ulonglong)plVar6[3] >> 0x3c & 4) == 0) {
        (**(code **)(*plVar6 + 8))(plVar6);
      }
      pvVar17 = (void *)plVar6[1];
    }
    pTVar15 = FCbFieldView::GetView((FCbFieldView *)this,&local_28);
    if (((pTVar15->Data < pvVar17) ||
        ((ulonglong)((longlong)pvVar17 + lVar7) < (longlong)pTVar15->Data + pTVar15->Size)) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("OuterBuffer.GetView().Contains(ViewType::GetView())",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\CompactBinary.h"
                            ,0x474,L""), bVar14)) {
      pcVar10 = (code *)swi(3);
      pTVar16 = (TCbBuffer<FCbArrayView> *)(*pcVar10)();
      return pTVar16;
    }
    pFVar8 = (this->Buffer).Owner.Owner;
    pFVar9 = *(FBufferOwner **)param_2.Owner.Owner;
    *(undefined8 *)param_2.Owner.Owner = 0;
    (this->Buffer).Owner.Owner = pFVar9;
    if (pFVar8 != (FBufferOwner *)0x0) {
      LOCK();
      paVar1 = &pFVar8->ReferenceCountsAndFlags;
      aVar4 = *paVar1;
      *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + -1);
      UNLOCK();
      if ((aVar4._0_4_ & 0x3fffffff) == 1) {
        (**(code **)(pFVar8->_padding_ + 0x10))(pFVar8);
        pFVar8->Data = (void *)0x0;
        pFVar8->Size = 0;
        LOCK();
        paVar1 = &pFVar8->ReferenceCountsAndFlags;
        aVar4 = *paVar1;
        *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + -0x40000000);
        UNLOCK();
        if (((uint)((ulonglong)aVar4 >> 0x1e) & 0x3fffffff) == 1) {
          (**(code **)pFVar8->_padding_)(pFVar8,1);
        }
      }
    }
  }
  plVar6 = *(longlong **)param_2.Owner.Owner;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar6 + 3;
    lVar7 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (((uint)lVar7 & 0x3fffffff) == 1) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      plVar6[1] = 0;
      plVar6[2] = 0;
      LOCK();
      puVar3 = (ulonglong *)(plVar6 + 3);
      uVar5 = *puVar3;
      *puVar3 = *puVar3 - 0x40000000;
      UNLOCK();
      if (((uint)(uVar5 >> 0x1e) & 0x3fffffff) == 1) {
        (**(code **)*plVar6)(plVar6,1);
      }
    }
  }
  return this;
}

// TCbBuffer<FCbFieldView> @ 14179b930

TCbBuffer<FCbFieldView> * __thiscall
TCbBuffer<FCbFieldView>::TCbBuffer<FCbFieldView>
          (TCbBuffer<FCbFieldView> *this,FCbFieldView *param_1,FSharedBuffer param_2)

{
  atomic<unsigned___int64> *paVar1;
  longlong *plVar2;
  ulonglong *puVar3;
  atomic<unsigned___int64> aVar4;
  ulonglong uVar5;
  longlong *plVar6;
  longlong lVar7;
  FBufferOwner *pFVar8;
  FBufferOwner *pFVar9;
  code *pcVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  bool bVar14;
  TMemoryView<void_const_> *pTVar15;
  TCbBuffer<FCbFieldView> *pTVar16;
  void *pvVar17;
  TMemoryView<void_const_> local_28;
  
  uVar11 = param_1->NameLen;
  uVar12 = *(undefined4 *)&param_1->Value;
  uVar13 = *(undefined4 *)((longlong)&param_1->Value + 4);
  pvVar17 = (void *)0x0;
  *(undefined4 *)&this->_padding_ = *(undefined4 *)param_1;
  *(uint *)((longlong)&this->_padding_ + 4) = uVar11;
  *(undefined4 *)&this->_padding_ = uVar12;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = uVar13;
  (this->Buffer).Owner.Owner = (FBufferOwner *)0x0;
  plVar6 = *(longlong **)param_2.Owner.Owner;
  if (plVar6 != (longlong *)0x0) {
    if (((ulonglong)plVar6[3] >> 0x3c & 4) == 0) {
      (**(code **)(*plVar6 + 8))(plVar6);
    }
    lVar7 = plVar6[2];
    plVar6 = *(longlong **)param_2.Owner.Owner;
    if (plVar6 != (longlong *)0x0) {
      if (((ulonglong)plVar6[3] >> 0x3c & 4) == 0) {
        (**(code **)(*plVar6 + 8))(plVar6);
      }
      pvVar17 = (void *)plVar6[1];
    }
    pTVar15 = FCbFieldView::GetView((FCbFieldView *)this,&local_28);
    if (((pTVar15->Data < pvVar17) ||
        ((ulonglong)((longlong)pvVar17 + lVar7) < (longlong)pTVar15->Data + pTVar15->Size)) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("OuterBuffer.GetView().Contains(ViewType::GetView())",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\CompactBinary.h"
                            ,0x474,L""), bVar14)) {
      pcVar10 = (code *)swi(3);
      pTVar16 = (TCbBuffer<FCbFieldView> *)(*pcVar10)();
      return pTVar16;
    }
    pFVar8 = (this->Buffer).Owner.Owner;
    pFVar9 = *(FBufferOwner **)param_2.Owner.Owner;
    *(undefined8 *)param_2.Owner.Owner = 0;
    (this->Buffer).Owner.Owner = pFVar9;
    if (pFVar8 != (FBufferOwner *)0x0) {
      LOCK();
      paVar1 = &pFVar8->ReferenceCountsAndFlags;
      aVar4 = *paVar1;
      *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + -1);
      UNLOCK();
      if ((aVar4._0_4_ & 0x3fffffff) == 1) {
        (**(code **)(pFVar8->_padding_ + 0x10))(pFVar8);
        pFVar8->Data = (void *)0x0;
        pFVar8->Size = 0;
        LOCK();
        paVar1 = &pFVar8->ReferenceCountsAndFlags;
        aVar4 = *paVar1;
        *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + -0x40000000);
        UNLOCK();
        if (((uint)((ulonglong)aVar4 >> 0x1e) & 0x3fffffff) == 1) {
          (**(code **)pFVar8->_padding_)(pFVar8,1);
        }
      }
    }
  }
  plVar6 = *(longlong **)param_2.Owner.Owner;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar6 + 3;
    lVar7 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (((uint)lVar7 & 0x3fffffff) == 1) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      plVar6[1] = 0;
      plVar6[2] = 0;
      LOCK();
      puVar3 = (ulonglong *)(plVar6 + 3);
      uVar5 = *puVar3;
      *puVar3 = *puVar3 - 0x40000000;
      UNLOCK();
      if (((uint)(uVar5 >> 0x1e) & 0x3fffffff) == 1) {
        (**(code **)*plVar6)(plVar6,1);
      }
    }
  }
  return this;
}

// TCbBuffer<FCbObjectView> @ 14179bad0

TCbBuffer<FCbObjectView> * __thiscall
TCbBuffer<FCbObjectView>::TCbBuffer<FCbObjectView>
          (TCbBuffer<FCbObjectView> *this,FCbObjectView *param_1,FSharedBuffer param_2)

{
  atomic<unsigned___int64> *paVar1;
  longlong *plVar2;
  ulonglong *puVar3;
  atomic<unsigned___int64> aVar4;
  ulonglong uVar5;
  longlong *plVar6;
  longlong lVar7;
  FBufferOwner *pFVar8;
  FBufferOwner *pFVar9;
  code *pcVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  bool bVar14;
  TMemoryView<void_const_> *pTVar15;
  TCbBuffer<FCbObjectView> *pTVar16;
  void *pvVar17;
  TMemoryView<void_const_> local_28;
  
  uVar11 = *(undefined4 *)&param_1->field_0x4;
  uVar12 = *(undefined4 *)&param_1->field_0x8;
  uVar13 = *(undefined4 *)&param_1->field_0xc;
  pvVar17 = (void *)0x0;
  *(undefined4 *)&this->_padding_ = *(undefined4 *)param_1;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = uVar11;
  *(undefined4 *)&this->_padding_ = uVar12;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = uVar13;
  (this->Buffer).Owner.Owner = (FBufferOwner *)0x0;
  plVar6 = *(longlong **)param_2.Owner.Owner;
  if (plVar6 != (longlong *)0x0) {
    if (((ulonglong)plVar6[3] >> 0x3c & 4) == 0) {
      (**(code **)(*plVar6 + 8))(plVar6);
    }
    lVar7 = plVar6[2];
    plVar6 = *(longlong **)param_2.Owner.Owner;
    if (plVar6 != (longlong *)0x0) {
      if (((ulonglong)plVar6[3] >> 0x3c & 4) == 0) {
        (**(code **)(*plVar6 + 8))(plVar6);
      }
      pvVar17 = (void *)plVar6[1];
    }
    pTVar15 = FCbFieldView::GetView((FCbFieldView *)this,&local_28);
    if (((pTVar15->Data < pvVar17) ||
        ((ulonglong)((longlong)pvVar17 + lVar7) < (longlong)pTVar15->Data + pTVar15->Size)) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("OuterBuffer.GetView().Contains(ViewType::GetView())",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\CompactBinary.h"
                            ,0x474,L""), bVar14)) {
      pcVar10 = (code *)swi(3);
      pTVar16 = (TCbBuffer<FCbObjectView> *)(*pcVar10)();
      return pTVar16;
    }
    pFVar8 = (this->Buffer).Owner.Owner;
    pFVar9 = *(FBufferOwner **)param_2.Owner.Owner;
    *(undefined8 *)param_2.Owner.Owner = 0;
    (this->Buffer).Owner.Owner = pFVar9;
    if (pFVar8 != (FBufferOwner *)0x0) {
      LOCK();
      paVar1 = &pFVar8->ReferenceCountsAndFlags;
      aVar4 = *paVar1;
      *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + -1);
      UNLOCK();
      if ((aVar4._0_4_ & 0x3fffffff) == 1) {
        (**(code **)(pFVar8->_padding_ + 0x10))(pFVar8);
        pFVar8->Data = (void *)0x0;
        pFVar8->Size = 0;
        LOCK();
        paVar1 = &pFVar8->ReferenceCountsAndFlags;
        aVar4 = *paVar1;
        *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + -0x40000000);
        UNLOCK();
        if (((uint)((ulonglong)aVar4 >> 0x1e) & 0x3fffffff) == 1) {
          (**(code **)pFVar8->_padding_)(pFVar8,1);
        }
      }
    }
  }
  plVar6 = *(longlong **)param_2.Owner.Owner;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar6 + 3;
    lVar7 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (((uint)lVar7 & 0x3fffffff) == 1) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      plVar6[1] = 0;
      plVar6[2] = 0;
      LOCK();
      puVar3 = (ulonglong *)(plVar6 + 3);
      uVar5 = *puVar3;
      *puVar3 = *puVar3 - 0x40000000;
      UNLOCK();
      if (((uint)(uVar5 >> 0x1e) & 0x3fffffff) == 1) {
        (**(code **)*plVar6)(plVar6,1);
      }
    }
  }
  return this;
}

// begin @ 14180e430

FCbFieldIterator * __thiscall
TCbBuffer<FCbObjectView>::begin
          (TCbBuffer<FCbObjectView> *this,FCbFieldIterator *__return_storage_ptr__)

{
  atomic<unsigned___int64> *paVar1;
  atomic<unsigned___int64> aVar2;
  FBufferOwner *local_res10 [3];
  FCbFieldViewIterator local_28;
  
  FCbFieldView::CreateViewIterator((FCbFieldView *)this,&local_28);
  if ((local_28._0_1_ & 0x1f) != 0) {
    local_res10[0] = (this->Buffer).Owner.Owner;
    if (local_res10[0] != (FBufferOwner *)0x0) {
      LOCK();
      paVar1 = &local_res10[0]->ReferenceCountsAndFlags;
      aVar2 = *paVar1;
      *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + 1);
      UNLOCK();
      if (((ulonglong)aVar2 & 0x3fffffff) == 0) {
        LOCK();
        local_res10[0]->ReferenceCountsAndFlags =
             (atomic<unsigned___int64>)
             ((longlong)local_res10[0]->ReferenceCountsAndFlags + 0x40000000);
        UNLOCK();
      }
    }
    FCbFieldIterator::MakeRangeView(__return_storage_ptr__,&local_28,(FSharedBuffer)local_res10);
    return __return_storage_ptr__;
  }
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x18 = 0;
  return __return_storage_ptr__;
}

// TCbBuffer<FCbFieldView> @ 1419cb9c0

TCbBuffer<FCbFieldView> * __thiscall
TCbBuffer<FCbFieldView>::TCbBuffer<FCbFieldView>
          (TCbBuffer<FCbFieldView> *this,FSharedBuffer param_1,ECbFieldType param_2)

{
  atomic<unsigned___int64> *paVar1;
  longlong *plVar2;
  ulonglong *puVar3;
  atomic<unsigned___int64> aVar4;
  longlong lVar5;
  byte bVar6;
  uint uVar7;
  longlong *plVar8;
  FBufferOwner *pFVar9;
  FBufferOwner *pFVar10;
  int iVar11;
  code *pcVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  bool bVar15;
  FCbFieldView *pFVar16;
  ulong64 uVar17;
  TCbBuffer<FCbFieldView> *pTVar18;
  int iVar19;
  ulonglong uVar20;
  uint uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  FCbFieldView local_38;
  
  uVar23 = 0;
  *(undefined2 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  (this->Buffer).Owner.Owner = (FBufferOwner *)0x0;
  plVar8 = *(longlong **)param_1.Owner.Owner;
  if (plVar8 != (longlong *)0x0) {
    if (((ulonglong)plVar8[3] >> 0x3c & 4) == 0) {
      (**(code **)(*plVar8 + 8))(plVar8);
    }
    pFVar16 = FCbFieldView::FCbFieldView(&local_38,(void *)plVar8[1],param_2);
    uVar21 = pFVar16->NameLen;
    uVar13 = *(undefined4 *)&pFVar16->Value;
    uVar14 = *(undefined4 *)((longlong)&pFVar16->Value + 4);
    *(undefined4 *)&this->_padding_ = *(undefined4 *)pFVar16;
    *(uint *)((longlong)&this->_padding_ + 4) = uVar21;
    *(undefined4 *)&this->_padding_ = uVar13;
    *(undefined4 *)((longlong)&this->_padding_ + 4) = uVar14;
    plVar8 = *(longlong **)param_1.Owner.Owner;
    uVar22 = uVar23;
    if (plVar8 != (longlong *)0x0) {
      if (((ulonglong)plVar8[3] >> 0x3c & 4) == 0) {
        (**(code **)(*plVar8 + 8))(plVar8);
      }
      uVar22 = plVar8[2];
    }
    plVar8 = *(longlong **)param_1.Owner.Owner;
    uVar24 = uVar23;
    if (plVar8 != (longlong *)0x0) {
      if (((ulonglong)plVar8[3] >> 0x3c & 4) == 0) {
        (**(code **)(*plVar8 + 8))(plVar8);
      }
      uVar24 = plVar8[1];
    }
    bVar6 = (byte)this->_padding_;
    uVar21 = bVar6 >> 6 & 1;
    if ((char)bVar6 < '\0') {
      uVar7 = *(uint *)((longlong)&this->_padding_ + 4);
      iVar11 = 0x1f;
      if (uVar7 != 0) {
        for (; uVar7 >> iVar11 == 0; iVar11 = iVar11 + -1) {
        }
      }
      iVar19 = 0;
      if (uVar7 != 0) {
        iVar19 = iVar11;
      }
      uVar23 = (ulonglong)(uVar7 + 1 + iVar19 / 7);
    }
    uVar17 = FCbFieldView::GetValueSize((FCbFieldView *)this);
    uVar20 = (this->_padding_ - uVar23) - (ulonglong)uVar21;
    if (((uVar20 < uVar24) || (uVar24 + uVar22 < uVar20 + (uVar21 + (int)uVar23) + uVar17)) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("ValueBuffer.GetView().Contains(ViewType::GetView())",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\CompactBinary.h"
                            ,0x469,L""), bVar15)) {
      pcVar12 = (code *)swi(3);
      pTVar18 = (TCbBuffer<FCbFieldView> *)(*pcVar12)();
      return pTVar18;
    }
    pFVar9 = (this->Buffer).Owner.Owner;
    pFVar10 = *(FBufferOwner **)param_1.Owner.Owner;
    *(undefined8 *)param_1.Owner.Owner = 0;
    (this->Buffer).Owner.Owner = pFVar10;
    if (pFVar9 != (FBufferOwner *)0x0) {
      LOCK();
      paVar1 = &pFVar9->ReferenceCountsAndFlags;
      aVar4 = *paVar1;
      *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + -1);
      UNLOCK();
      if ((aVar4._0_4_ & 0x3fffffff) == 1) {
        (**(code **)(pFVar9->_padding_ + 0x10))(pFVar9);
        pFVar9->Data = (void *)0x0;
        pFVar9->Size = 0;
        LOCK();
        paVar1 = &pFVar9->ReferenceCountsAndFlags;
        aVar4 = *paVar1;
        *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + -0x40000000);
        UNLOCK();
        if (((uint)((ulonglong)aVar4 >> 0x1e) & 0x3fffffff) == 1) {
          (**(code **)pFVar9->_padding_)(pFVar9,1);
        }
      }
    }
  }
  plVar8 = *(longlong **)param_1.Owner.Owner;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar8 + 3;
    lVar5 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (((uint)lVar5 & 0x3fffffff) == 1) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      plVar8[1] = 0;
      plVar8[2] = 0;
      LOCK();
      puVar3 = (ulonglong *)(plVar8 + 3);
      uVar23 = *puVar3;
      *puVar3 = *puVar3 - 0x40000000;
      UNLOCK();
      if (((uint)(uVar23 >> 0x1e) & 0x3fffffff) == 1) {
        (**(code **)*plVar8)(plVar8,1);
      }
    }
  }
  return this;
}

// TCbBuffer<FCbObjectView> @ 1419cbbf0

TCbBuffer<FCbObjectView> * __thiscall
TCbBuffer<FCbObjectView>::TCbBuffer<FCbObjectView>
          (TCbBuffer<FCbObjectView> *this,FSharedBuffer param_1,ECbFieldType param_2)

{
  atomic<unsigned___int64> *paVar1;
  longlong *plVar2;
  ulonglong *puVar3;
  atomic<unsigned___int64> aVar4;
  longlong lVar5;
  byte bVar6;
  uint uVar7;
  longlong *plVar8;
  FBufferOwner *pFVar9;
  FBufferOwner *pFVar10;
  int iVar11;
  code *pcVar12;
  bool bVar13;
  ulong64 uVar14;
  TCbBuffer<FCbObjectView> *pTVar15;
  int iVar16;
  ulonglong uVar17;
  uint uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  FCbFieldView local_38;
  
  FCbFieldView::FCbFieldView((FCbFieldView *)this,"\x02",HasFieldType);
  uVar20 = 0;
  (this->Buffer).Owner.Owner = (FBufferOwner *)0x0;
  plVar8 = *(longlong **)param_1.Owner.Owner;
  if (plVar8 != (longlong *)0x0) {
    if (((ulonglong)plVar8[3] >> 0x3c & 4) == 0) {
      (**(code **)(*plVar8 + 8))(plVar8);
    }
    FCbFieldView::FCbFieldView(&local_38,(void *)plVar8[1],param_2);
    *(undefined4 *)&this->_padding_ = local_38._0_4_;
    *(uint *)((longlong)&this->_padding_ + 4) = local_38.NameLen;
    *(undefined4 *)&this->_padding_ = local_38.Value._0_4_;
    *(undefined4 *)((longlong)&this->_padding_ + 4) = local_38.Value._4_4_;
    plVar8 = *(longlong **)param_1.Owner.Owner;
    uVar19 = uVar20;
    if (plVar8 != (longlong *)0x0) {
      if (((ulonglong)plVar8[3] >> 0x3c & 4) == 0) {
        (**(code **)(*plVar8 + 8))(plVar8);
      }
      uVar19 = plVar8[2];
    }
    plVar8 = *(longlong **)param_1.Owner.Owner;
    uVar21 = uVar20;
    if (plVar8 != (longlong *)0x0) {
      if (((ulonglong)plVar8[3] >> 0x3c & 4) == 0) {
        (**(code **)(*plVar8 + 8))(plVar8);
      }
      uVar21 = plVar8[1];
    }
    bVar6 = (byte)this->_padding_;
    uVar18 = bVar6 >> 6 & 1;
    if ((char)bVar6 < '\0') {
      uVar7 = *(uint *)((longlong)&this->_padding_ + 4);
      iVar11 = 0x1f;
      if (uVar7 != 0) {
        for (; uVar7 >> iVar11 == 0; iVar11 = iVar11 + -1) {
        }
      }
      iVar16 = 0;
      if (uVar7 != 0) {
        iVar16 = iVar11;
      }
      uVar20 = (ulonglong)(uVar7 + 1 + iVar16 / 7);
    }
    uVar14 = FCbFieldView::GetValueSize((FCbFieldView *)this);
    uVar17 = (this->_padding_ - uVar20) - (ulonglong)uVar18;
    if (((uVar17 < uVar21) || (uVar21 + uVar19 < uVar17 + (uVar18 + (int)uVar20) + uVar14)) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("ValueBuffer.GetView().Contains(ViewType::GetView())",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\CompactBinary.h"
                            ,0x469,L""), bVar13)) {
      pcVar12 = (code *)swi(3);
      pTVar15 = (TCbBuffer<FCbObjectView> *)(*pcVar12)();
      return pTVar15;
    }
    pFVar9 = (this->Buffer).Owner.Owner;
    pFVar10 = *(FBufferOwner **)param_1.Owner.Owner;
    *(undefined8 *)param_1.Owner.Owner = 0;
    (this->Buffer).Owner.Owner = pFVar10;
    if (pFVar9 != (FBufferOwner *)0x0) {
      LOCK();
      paVar1 = &pFVar9->ReferenceCountsAndFlags;
      aVar4 = *paVar1;
      *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + -1);
      UNLOCK();
      if ((aVar4._0_4_ & 0x3fffffff) == 1) {
        (**(code **)(pFVar9->_padding_ + 0x10))(pFVar9);
        pFVar9->Data = (void *)0x0;
        pFVar9->Size = 0;
        LOCK();
        paVar1 = &pFVar9->ReferenceCountsAndFlags;
        aVar4 = *paVar1;
        *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + -0x40000000);
        UNLOCK();
        if (((uint)((ulonglong)aVar4 >> 0x1e) & 0x3fffffff) == 1) {
          (**(code **)pFVar9->_padding_)(pFVar9,1);
        }
      }
    }
  }
  plVar8 = *(longlong **)param_1.Owner.Owner;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar8 + 3;
    lVar5 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (((uint)lVar5 & 0x3fffffff) == 1) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      plVar8[1] = 0;
      plVar8[2] = 0;
      LOCK();
      puVar3 = (ulonglong *)(plVar8 + 3);
      uVar20 = *puVar3;
      *puVar3 = *puVar3 - 0x40000000;
      UNLOCK();
      if (((uint)(uVar20 >> 0x1e) & 0x3fffffff) == 1) {
        (**(code **)*plVar8)(plVar8,1);
      }
    }
  }
  return this;
}

// MakeOwned @ 141a0a4b0

void __thiscall TCbBuffer<FCbObjectView>::MakeOwned(TCbBuffer<FCbObjectView> *this)

{
  FBufferOwner *pFVar1;
  code *pcVar2;
  longlong lVar3;
  FUniqueBuffer FVar4;
  bool bVar5;
  ulong64 _Size;
  FSharedBuffer FVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  FUniqueBuffer local_res8;
  void *local_res10;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_res18;
  FCbFieldView local_48;
  
  pFVar1 = (this->Buffer).Owner.Owner;
  if ((pFVar1 == (FBufferOwner *)0x0) ||
     (((ulonglong)pFVar1->ReferenceCountsAndFlags >> 0x3c & 1) == 0)) {
    FCbFieldView::GetValueSize((FCbFieldView *)this);
    FUniqueBuffer::Alloc((ulong64)&local_res8);
    FVar4.Owner.Owner = local_res8.Owner.Owner;
    pbVar7 = (byte *)0x0;
    pbVar8 = pbVar7;
    if (local_res8.Owner.Owner != (FBufferOwner *)0x0) {
      if (((ulonglong)*(atomic<unsigned___int64> *)((longlong)local_res8.Owner.Owner + 0x18) >> 0x3c
          & 4) == 0) {
        (**(code **)(*(longlong *)local_res8.Owner.Owner + 8))(local_res8.Owner.Owner);
      }
      pbVar8 = *(byte **)((longlong)FVar4.Owner.Owner + 0x10);
    }
    FVar4.Owner.Owner = local_res8.Owner.Owner;
    pbVar9 = pbVar7;
    if (local_res8.Owner.Owner != (FBufferOwner *)0x0) {
      if (((ulonglong)*(atomic<unsigned___int64> *)((longlong)local_res8.Owner.Owner + 0x18) >> 0x3c
          & 4) == 0) {
        (**(code **)(*(longlong *)local_res8.Owner.Owner + 8))(local_res8.Owner.Owner);
      }
      pbVar9 = *(void **)((longlong)FVar4.Owner.Owner + 8);
    }
    _Size = FCbFieldView::GetValueSize((FCbFieldView *)this);
    local_res10 = (void *)this->_padding_;
    if ((pbVar8 != (byte *)(_Size + 1)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Buffer.GetSize() == sizeof(ECbFieldType) + Source.GetSize()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Serialization\\CompactBinary.cpp"
                           ,0x304,L"Buffer is %llu bytes but %llu is required."), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    lVar3 = this->_padding_;
    if ((pbVar8 == (byte *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InView.Size <= Size",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Memory\\MemoryView.h"
                           ,0xdb,
                           L"Failed to copy from a view of %llu bytes to a view of %llu bytes."),
       bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    *pbVar9 = (byte)lVar3 & 0x1f;
    if (((longlong)pbVar8 - (ulonglong)(pbVar8 != (byte *)0x0) < _Size) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InView.Size <= Size",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Memory\\MemoryView.h"
                           ,0xdb,
                           L"Failed to copy from a view of %llu bytes to a view of %llu bytes."),
       bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (_Size != 0) {
      memcpy(pbVar9 + (pbVar8 != (byte *)0x0),local_res10,_Size);
    }
    if (local_res8.Owner.Owner != (FBufferOwner *)0x0) {
      if (((ulonglong)*(atomic<unsigned___int64> *)((longlong)local_res8.Owner.Owner + 0x18) >> 0x3c
          & 4) == 0) {
        (**(code **)(*(longlong *)local_res8.Owner.Owner + 8))(local_res8.Owner.Owner);
      }
      pbVar7 = *(void **)((longlong)local_res8.Owner.Owner + 8);
    }
    FCbFieldView::FCbFieldView(&local_48,pbVar7,HasFieldType);
    this->_padding_ = local_48._0_8_;
    this->_padding_ = (longlong)local_48.Value;
    FVar6 = FUniqueBuffer::MoveToShared(&local_res8);
    FSharedBuffer::operator=(&this->Buffer,(FSharedBuffer *)FVar6.Owner.Owner);
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_res18);
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_res8.Owner);
  }
  return;
}

// CreateIterator @ 141a7d190

FCbFieldIterator * __thiscall
TCbBuffer<FCbArrayView>::CreateIterator
          (TCbBuffer<FCbArrayView> *this,FCbFieldIterator *__return_storage_ptr__)

{
  atomic<unsigned___int64> *paVar1;
  atomic<unsigned___int64> aVar2;
  FBufferOwner *local_res18 [2];
  FCbFieldViewIterator local_28;
  
  FCbFieldView::CreateViewIterator((FCbFieldView *)this,&local_28);
  if ((local_28._0_1_ & 0x1f) != 0) {
    local_res18[0] = (this->Buffer).Owner.Owner;
    if (local_res18[0] != (FBufferOwner *)0x0) {
      LOCK();
      paVar1 = &local_res18[0]->ReferenceCountsAndFlags;
      aVar2 = *paVar1;
      *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + 1);
      UNLOCK();
      if (((ulonglong)aVar2 & 0x3fffffff) == 0) {
        LOCK();
        local_res18[0]->ReferenceCountsAndFlags =
             (atomic<unsigned___int64>)
             ((longlong)local_res18[0]->ReferenceCountsAndFlags + 0x40000000);
        UNLOCK();
      }
    }
    FCbFieldIterator::MakeRangeView(__return_storage_ptr__,&local_28,(FSharedBuffer)local_res18);
    return __return_storage_ptr__;
  }
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x18 = 0;
  return __return_storage_ptr__;
}

// CreateIterator @ 141a7d220

FCbFieldIterator * __thiscall
TCbBuffer<FCbObjectView>::CreateIterator
          (TCbBuffer<FCbObjectView> *this,FCbFieldIterator *__return_storage_ptr__)

{
  atomic<unsigned___int64> *paVar1;
  atomic<unsigned___int64> aVar2;
  FBufferOwner *local_res18 [2];
  FCbFieldViewIterator local_28;
  
  FCbFieldView::CreateViewIterator((FCbFieldView *)this,&local_28);
  if ((local_28._0_1_ & 0x1f) != 0) {
    local_res18[0] = (this->Buffer).Owner.Owner;
    if (local_res18[0] != (FBufferOwner *)0x0) {
      LOCK();
      paVar1 = &local_res18[0]->ReferenceCountsAndFlags;
      aVar2 = *paVar1;
      *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + 1);
      UNLOCK();
      if (((ulonglong)aVar2 & 0x3fffffff) == 0) {
        LOCK();
        local_res18[0]->ReferenceCountsAndFlags =
             (atomic<unsigned___int64>)
             ((longlong)local_res18[0]->ReferenceCountsAndFlags + 0x40000000);
        UNLOCK();
      }
    }
    FCbFieldIterator::MakeRangeView(__return_storage_ptr__,&local_28,(FSharedBuffer)local_res18);
    return __return_storage_ptr__;
  }
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x18 = 0;
  return __return_storage_ptr__;
}

// MakeOwned @ 141a8acf0

void __thiscall TCbBuffer<FCbArrayView>::MakeOwned(TCbBuffer<FCbArrayView> *this)

{
  FBufferOwner *pFVar1;
  FUniqueBuffer FVar2;
  FUniqueBuffer FVar3;
  FSharedBuffer FVar4;
  void *pvVar5;
  FUniqueBuffer local_res8;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_res10;
  void *local_28;
  void *pvStack_20;
  
  pFVar1 = (this->Buffer).Owner.Owner;
  if ((pFVar1 == (FBufferOwner *)0x0) ||
     (((ulonglong)pFVar1->ReferenceCountsAndFlags >> 0x3c & 1) == 0)) {
    FCbArrayView::GetSize((FCbArrayView *)this);
    FUniqueBuffer::Alloc((ulong64)&local_res8);
    FVar2.Owner.Owner = local_res8.Owner.Owner;
    pvVar5 = (void *)0x0;
    local_28 = pvVar5;
    pvStack_20 = pvVar5;
    if (local_res8.Owner.Owner != (FBufferOwner *)0x0) {
      if (((ulonglong)*(atomic<unsigned___int64> *)((longlong)local_res8.Owner.Owner + 0x18) >> 0x3c
          & 4) == 0) {
        (**(code **)(*(longlong *)local_res8.Owner.Owner + 8))(local_res8.Owner.Owner);
      }
      FVar3.Owner.Owner = local_res8.Owner.Owner;
      pvStack_20 = *(void **)((longlong)FVar2.Owner.Owner + 0x10);
      if (local_res8.Owner.Owner != (FBufferOwner *)0x0) {
        if (((ulonglong)*(atomic<unsigned___int64> *)((longlong)local_res8.Owner.Owner + 0x18) >>
             0x3c & 4) == 0) {
          (**(code **)(*(longlong *)local_res8.Owner.Owner + 8))(local_res8.Owner.Owner);
        }
        local_28 = *(void **)((longlong)FVar3.Owner.Owner + 8);
      }
    }
    FCbArrayView::CopyTo((FCbArrayView *)this,(TMemoryView<void> *)&local_28);
    if (local_res8.Owner.Owner != (FBufferOwner *)0x0) {
      if (((ulonglong)*(atomic<unsigned___int64> *)((longlong)local_res8.Owner.Owner + 0x18) >> 0x3c
          & 4) == 0) {
        (**(code **)(*(longlong *)local_res8.Owner.Owner + 8))(local_res8.Owner.Owner);
      }
      pvVar5 = *(void **)((longlong)local_res8.Owner.Owner + 8);
    }
    FCbFieldView::FCbFieldView((FCbFieldView *)&local_28,pvVar5,HasFieldType);
    this->_padding_ = (longlong)local_28;
    this->_padding_ = (longlong)pvStack_20;
    FVar4 = FUniqueBuffer::MoveToShared(&local_res8);
    FSharedBuffer::operator=(&this->Buffer,(FSharedBuffer *)FVar4.Owner.Owner);
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_res10);
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_res8.Owner);
  }
  return;
}

// MakeOwned @ 141a8ae30

void __thiscall TCbBuffer<FCbFieldView>::MakeOwned(TCbBuffer<FCbFieldView> *this)

{
  FBufferOwner *pFVar1;
  FUniqueBuffer FVar2;
  FUniqueBuffer FVar3;
  FCbFieldView *pFVar4;
  FSharedBuffer FVar5;
  void *pvVar6;
  FUniqueBuffer local_res8;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_res10;
  void *local_28;
  void *local_20;
  
  pFVar1 = (this->Buffer).Owner.Owner;
  if ((pFVar1 == (FBufferOwner *)0x0) ||
     (((ulonglong)pFVar1->ReferenceCountsAndFlags >> 0x3c & 1) == 0)) {
    FCbFieldView::GetSize((FCbFieldView *)this);
    FUniqueBuffer::Alloc((ulong64)&local_res8);
    FVar2.Owner.Owner = local_res8.Owner.Owner;
    pvVar6 = (void *)0x0;
    local_28 = pvVar6;
    local_20 = pvVar6;
    if (local_res8.Owner.Owner != (FBufferOwner *)0x0) {
      if (((ulonglong)*(atomic<unsigned___int64> *)((longlong)local_res8.Owner.Owner + 0x18) >> 0x3c
          & 4) == 0) {
        (**(code **)(*(longlong *)local_res8.Owner.Owner + 8))(local_res8.Owner.Owner);
      }
      FVar3.Owner.Owner = local_res8.Owner.Owner;
      local_20 = *(void **)((longlong)FVar2.Owner.Owner + 0x10);
      if (local_res8.Owner.Owner != (FBufferOwner *)0x0) {
        if (((ulonglong)*(atomic<unsigned___int64> *)((longlong)local_res8.Owner.Owner + 0x18) >>
             0x3c & 4) == 0) {
          (**(code **)(*(longlong *)local_res8.Owner.Owner + 8))(local_res8.Owner.Owner);
        }
        local_28 = *(void **)((longlong)FVar3.Owner.Owner + 8);
      }
    }
    FCbFieldView::CopyTo((FCbFieldView *)this,(TMemoryView<void> *)&local_28);
    if (local_res8.Owner.Owner != (FBufferOwner *)0x0) {
      if (((ulonglong)*(atomic<unsigned___int64> *)((longlong)local_res8.Owner.Owner + 0x18) >> 0x3c
          & 4) == 0) {
        (**(code **)(*(longlong *)local_res8.Owner.Owner + 8))(local_res8.Owner.Owner);
      }
      pvVar6 = *(void **)((longlong)local_res8.Owner.Owner + 8);
    }
    pFVar4 = FCbFieldView::FCbFieldView((FCbFieldView *)&local_28,pvVar6,HasFieldType);
    pvVar6 = pFVar4->Value;
    this->_padding_ = *(longlong *)pFVar4;
    this->_padding_ = (longlong)pvVar6;
    FVar5 = FUniqueBuffer::MoveToShared(&local_res8);
    FSharedBuffer::operator=(&this->Buffer,(FSharedBuffer *)FVar5.Owner.Owner);
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_res10);
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_res8.Owner);
  }
  return;
}

// TCbBuffer<FCbArrayView> @ 141ce29e0

TCbBuffer<FCbArrayView> * __thiscall
TCbBuffer<FCbArrayView>::TCbBuffer<FCbArrayView>
          (TCbBuffer<FCbArrayView> *this,FSharedBuffer param_1,ECbFieldType param_2)

{
  atomic<unsigned___int64> *paVar1;
  longlong *plVar2;
  ulonglong *puVar3;
  atomic<unsigned___int64> aVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong *plVar7;
  FBufferOwner *pFVar8;
  FBufferOwner *pFVar9;
  code *pcVar10;
  bool bVar11;
  TMemoryView<void_const_> *pTVar12;
  TCbBuffer<FCbArrayView> *pTVar13;
  void *pvVar14;
  void *pvVar15;
  FCbFieldView local_38;
  TMemoryView<void_const_> local_28;
  
  FCbArrayView::FCbArrayView((FCbArrayView *)this);
  pvVar14 = (void *)0x0;
  (this->Buffer).Owner.Owner = (FBufferOwner *)0x0;
  plVar7 = *(longlong **)param_1.Owner.Owner;
  if (plVar7 != (longlong *)0x0) {
    if (((ulonglong)plVar7[3] >> 0x3c & 4) == 0) {
      (**(code **)(*plVar7 + 8))(plVar7);
    }
    FCbFieldView::FCbFieldView(&local_38,(void *)plVar7[1],param_2);
    *(undefined4 *)&this->_padding_ = local_38._0_4_;
    *(uint *)((longlong)&this->_padding_ + 4) = local_38.NameLen;
    *(undefined4 *)&this->_padding_ = local_38.Value._0_4_;
    *(undefined4 *)((longlong)&this->_padding_ + 4) = local_38.Value._4_4_;
    plVar7 = *(longlong **)param_1.Owner.Owner;
    pvVar15 = pvVar14;
    if (plVar7 != (longlong *)0x0) {
      if (((ulonglong)plVar7[3] >> 0x3c & 4) == 0) {
        (**(code **)(*plVar7 + 8))(plVar7);
      }
      pvVar15 = (void *)plVar7[2];
    }
    plVar7 = *(longlong **)param_1.Owner.Owner;
    if (plVar7 != (longlong *)0x0) {
      if (((ulonglong)plVar7[3] >> 0x3c & 4) == 0) {
        (**(code **)(*plVar7 + 8))(plVar7);
      }
      pvVar14 = (void *)plVar7[1];
    }
    pTVar12 = FCbFieldView::GetView((FCbFieldView *)this,&local_28);
    if (((pTVar12->Data < pvVar14) ||
        ((ulonglong)((longlong)pvVar14 + (longlong)pvVar15) <
         (longlong)pTVar12->Data + pTVar12->Size)) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("ValueBuffer.GetView().Contains(ViewType::GetView())",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\CompactBinary.h"
                            ,0x469,L""), bVar11)) {
      pcVar10 = (code *)swi(3);
      pTVar13 = (TCbBuffer<FCbArrayView> *)(*pcVar10)();
      return pTVar13;
    }
    pFVar8 = (this->Buffer).Owner.Owner;
    pFVar9 = *(FBufferOwner **)param_1.Owner.Owner;
    *(undefined8 *)param_1.Owner.Owner = 0;
    (this->Buffer).Owner.Owner = pFVar9;
    if (pFVar8 != (FBufferOwner *)0x0) {
      LOCK();
      paVar1 = &pFVar8->ReferenceCountsAndFlags;
      aVar4 = *paVar1;
      *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + -1);
      UNLOCK();
      if ((aVar4._0_4_ & 0x3fffffff) == 1) {
        (**(code **)(pFVar8->_padding_ + 0x10))(pFVar8);
        pFVar8->Data = (void *)0x0;
        pFVar8->Size = 0;
        LOCK();
        paVar1 = &pFVar8->ReferenceCountsAndFlags;
        aVar4 = *paVar1;
        *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + -0x40000000);
        UNLOCK();
        if (((uint)((ulonglong)aVar4 >> 0x1e) & 0x3fffffff) == 1) {
          (**(code **)pFVar8->_padding_)(pFVar8,1);
        }
      }
    }
  }
  plVar7 = *(longlong **)param_1.Owner.Owner;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar7 + 3;
    lVar5 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (((uint)lVar5 & 0x3fffffff) == 1) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      plVar7[1] = 0;
      plVar7[2] = 0;
      LOCK();
      puVar3 = (ulonglong *)(plVar7 + 3);
      uVar6 = *puVar3;
      *puVar3 = *puVar3 - 0x40000000;
      UNLOCK();
      if (((uint)(uVar6 >> 0x1e) & 0x3fffffff) == 1) {
        (**(code **)*plVar7)(plVar7,1);
      }
    }
  }
  return this;
}

