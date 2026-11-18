// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// FObjectValue @ 1419ce5c0

FObjectValue * __thiscall
FCbAttachment::FObjectValue::FObjectValue(FObjectValue *this,FCbObject *param_1,FIoHash *param_2)

{
  longlong *plVar1;
  ulonglong *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  FSharedBuffer FVar9;
  FIoHash *pFVar10;
  longlong *plVar11;
  TCbBuffer<FCbObjectView> local_28;
  
  FCbFieldView::FCbFieldView((FCbFieldView *)this,"\x02",HasFieldType);
  *(undefined8 *)&(this->Object).field_0x10 = 0;
  (this->Hash).Hash[0] = '\0';
  (this->Hash).Hash[1] = '\0';
  (this->Hash).Hash[2] = '\0';
  (this->Hash).Hash[3] = '\0';
  (this->Hash).Hash[4] = '\0';
  (this->Hash).Hash[5] = '\0';
  (this->Hash).Hash[6] = '\0';
  (this->Hash).Hash[7] = '\0';
  (this->Hash).Hash[8] = '\0';
  (this->Hash).Hash[9] = '\0';
  (this->Hash).Hash[10] = '\0';
  (this->Hash).Hash[0xb] = '\0';
  (this->Hash).Hash[0xc] = '\0';
  (this->Hash).Hash[0xd] = '\0';
  (this->Hash).Hash[0xe] = '\0';
  (this->Hash).Hash[0xf] = '\0';
  (this->Hash).Hash[0x10] = '\0';
  (this->Hash).Hash[0x11] = '\0';
  (this->Hash).Hash[0x12] = '\0';
  (this->Hash).Hash[0x13] = '\0';
  if ((((*(longlong *)&param_1->field_0x10 == 0) ||
       ((*(ulonglong *)(*(longlong *)&param_1->field_0x10 + 0x18) >> 0x3c & 1) == 0)) ||
      ((char)*(byte *)param_1 < '\0')) || ((*(byte *)param_1 & 0x40) == 0)) {
    local_28._padding_ = *(longlong *)param_1;
    local_28._padding_ = *(longlong *)&param_1->field_0x8;
    local_28.Buffer.Owner.Owner =
         (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)(FBufferOwner *)0x0;
    TCbBuffer<FCbObjectView>::MakeOwned(&local_28);
    *(undefined4 *)&this->Object = (undefined4)local_28._padding_;
    *(undefined4 *)&(this->Object).field_0x4 = local_28._padding_._4_4_;
    *(undefined4 *)&(this->Object).field_0x8 = (undefined4)local_28._padding_;
    *(undefined4 *)&(this->Object).field_0xc = local_28._padding_._4_4_;
    plVar11 = *(longlong **)&(this->Object).field_0x10;
    FVar9.Owner.Owner = local_28.Buffer.Owner.Owner;
  }
  else {
    FCbFieldView::GetValueSize((FCbFieldView *)param_1);
    uVar5 = *(undefined4 *)&param_1->field_0x4;
    uVar6 = *(undefined4 *)&param_1->field_0x8;
    uVar7 = *(undefined4 *)&param_1->field_0xc;
    *(undefined4 *)&this->Object = *(undefined4 *)param_1;
    *(undefined4 *)&(this->Object).field_0x4 = uVar5;
    *(undefined4 *)&(this->Object).field_0x8 = uVar6;
    *(undefined4 *)&(this->Object).field_0xc = uVar7;
    plVar11 = *(longlong **)&(this->Object).field_0x10;
    FVar9.Owner.Owner =
         *(TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&param_1->field_0x10;
    *(undefined8 *)&param_1->field_0x10 = 0;
  }
  *(TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&(this->Object).field_0x10 =
       FVar9.Owner.Owner;
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar11 + 3;
    lVar3 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (((uint)lVar3 & 0x3fffffff) == 1) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      plVar11[1] = 0;
      plVar11[2] = 0;
      LOCK();
      puVar2 = (ulonglong *)(plVar11 + 3);
      uVar4 = *puVar2;
      *puVar2 = *puVar2 - 0x40000000;
      UNLOCK();
      if (((uint)(uVar4 >> 0x1e) & 0x3fffffff) == 1) {
        (**(code **)*plVar11)(plVar11,1);
      }
    }
  }
  if (param_2 != (FIoHash *)0x0) {
    uVar8 = *(undefined8 *)(param_2->Hash + 8);
    *(undefined8 *)(this->Hash).Hash = *(undefined8 *)param_2->Hash;
    *(undefined8 *)((this->Hash).Hash + 8) = uVar8;
    *(undefined4 *)((this->Hash).Hash + 0x10) = *(undefined4 *)(param_2->Hash + 0x10);
    return this;
  }
  pFVar10 = FCbObjectView::GetHash((FCbObjectView *)this,(FIoHash *)&local_28);
  uVar8 = *(undefined8 *)(pFVar10->Hash + 8);
  *(undefined8 *)(this->Hash).Hash = *(undefined8 *)pFVar10->Hash;
  *(undefined8 *)((this->Hash).Hash + 8) = uVar8;
  *(undefined4 *)((this->Hash).Hash + 0x10) = *(undefined4 *)(pFVar10->Hash + 0x10);
  return this;
}

