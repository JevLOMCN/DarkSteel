// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WmfMedia
// Functions: 3

// ~FWorkItem @ 14ea97f50

void __thiscall FWmfMediaSession::FWorkItem::~FWorkItem(FWorkItem *this)

{
  longlong *plVar1;
  longlong *plVar2;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->State).SharedReferenceCount.ReferenceController);
  if (*(longlong *)&this->WorkLoad != 0) {
    plVar1 = *(longlong **)&(this->WorkLoad).field_0x28;
    plVar2 = (longlong *)&(this->WorkLoad).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  return;
}

// operator= @ 14ea98400

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FWorkItem * __thiscall FWmfMediaSession::FWorkItem::operator=(FWorkItem *this,FWorkItem *param_1)

{
  undefined8 *puVar1;
  FBaseWorkItemState *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  TReferenceControllerBase<1> *pTVar10;
  longlong lVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  local_48 = *(longlong *)&param_1->WorkLoad;
  plStack_20 = (longlong *)0x0;
  if (local_48 != 0) {
    puVar1 = *(undefined8 **)&(param_1->WorkLoad).field_0x28;
    puVar13 = (undefined8 *)&(param_1->WorkLoad).field_0x10;
    if (puVar1 != (undefined8 *)0x0) {
      puVar13 = puVar1;
    }
    (**(code **)*puVar13)(puVar13,&local_38);
  }
  lVar11 = *(longlong *)&this->WorkLoad;
  uVar12 = *(undefined8 *)&(this->WorkLoad).field_0x8;
  uVar4 = *(undefined4 *)&(this->WorkLoad).field_0x10;
  uVar5 = *(undefined4 *)&(this->WorkLoad).field_0x14;
  uVar6 = *(undefined4 *)&(this->WorkLoad).field_0x18;
  uVar7 = *(undefined4 *)&(this->WorkLoad).field_0x1c;
  uVar8 = *(undefined8 *)&(this->WorkLoad).field_0x20;
  plVar9 = *(longlong **)&(this->WorkLoad).field_0x28;
  *(longlong *)&this->WorkLoad = local_48;
  *(undefined8 *)&(this->WorkLoad).field_0x8 = uStack_40;
  *(undefined4 *)&(this->WorkLoad).field_0x10 = (undefined4)local_38;
  *(undefined4 *)&(this->WorkLoad).field_0x14 = local_38._4_4_;
  *(undefined4 *)&(this->WorkLoad).field_0x18 = uStack_30;
  *(undefined4 *)&(this->WorkLoad).field_0x1c = uStack_2c;
  *(undefined8 *)&(this->WorkLoad).field_0x20 = local_28;
  *(longlong **)&(this->WorkLoad).field_0x28 = plStack_20;
  local_38._0_4_ = uVar4;
  local_38._4_4_ = uVar5;
  uStack_30 = uVar6;
  uStack_2c = uVar7;
  local_28 = uVar8;
  plStack_20 = plVar9;
  local_48 = lVar11;
  uStack_40 = uVar12;
  if (lVar11 != 0) {
    plVar14 = &local_38;
    if (plVar9 != (longlong *)0x0) {
      plVar14 = plVar9;
    }
    (**(code **)(*plVar14 + 0x10))();
  }
  pFVar2 = (param_1->State).Object;
  pTVar3 = (param_1->State).SharedReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar10 = (this->State).SharedReferenceCount.ReferenceController;
  (this->State).Object = pFVar2;
  (this->State).SharedReferenceCount.ReferenceController = pTVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  return this;
}

// Reset @ 14eaba940

void __thiscall FWmfMediaSession::FWorkItem::Reset(FWorkItem *this)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  if (*(longlong *)&this->WorkLoad != 0) {
    plVar1 = *(longlong **)&(this->WorkLoad).field_0x28;
    plVar2 = (longlong *)&(this->WorkLoad).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
    *(undefined8 *)&this->WorkLoad = 0;
  }
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->State != (TSharedPtr<FWmfMediaSession::FBaseWorkItemState,1> *)&local_18) {
    (this->State).Object = (FBaseWorkItemState *)0x0;
    local_18 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->State).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  return;
}

