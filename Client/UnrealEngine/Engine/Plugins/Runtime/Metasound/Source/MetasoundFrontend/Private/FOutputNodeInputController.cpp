// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 6

// FOutputNodeInputController @ 14ae1c510

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FOutputNodeInputController * __thiscall
Metasound::Frontend::FOutputNodeInputController::FOutputNodeInputController
          (FOutputNodeInputController *this,FInitParams *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 auStack_128 [32];
  undefined1 local_108 [72];
  longlong *local_c0;
  FMetasoundFrontendClassInput *local_b8;
  longlong local_a8;
  longlong local_98 [3];
  longlong *local_80;
  FMetasoundFrontendGraph *local_78;
  longlong local_68;
  longlong local_58 [3];
  longlong *local_40;
  INodeController *local_38;
  FSharedReferencer<1> local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_128;
  local_108._16_8_ = (param_1->NodeVertexPtr).CachedObjectPtr;
  local_108._0_4_ = (param_1->ID).A;
  local_108._4_4_ = (param_1->ID).B;
  local_108._8_4_ = (param_1->ID).C;
  local_108._12_4_ = (param_1->ID).D;
  local_108._32_8_ = *(undefined8 *)&(param_1->NodeVertexPtr).GetObject;
  local_c0 = (longlong *)0x0;
  if (local_108._32_8_ != 0) {
    puVar1 = *(undefined8 **)&(param_1->NodeVertexPtr).GetObject.field_0x28;
    puVar4 = (undefined8 *)&(param_1->NodeVertexPtr).GetObject.field_0x10;
    if (puVar1 != (undefined8 *)0x0) {
      puVar4 = puVar1;
    }
    (**(code **)*puVar4)(local_108._0_4_,local_108 + 0x30);
  }
  local_b8 = (param_1->ClassInputPtr).CachedObjectPtr;
  local_a8 = *(longlong *)&(param_1->ClassInputPtr).GetObject;
  local_80 = (longlong *)0x0;
  if (local_a8 != 0) {
    puVar1 = *(undefined8 **)&(param_1->ClassInputPtr).GetObject.field_0x28;
    puVar4 = (undefined8 *)&(param_1->ClassInputPtr).GetObject.field_0x10;
    if (puVar1 != (undefined8 *)0x0) {
      puVar4 = puVar1;
    }
    (**(code **)*puVar4)(puVar4,local_98);
  }
  local_78 = (param_1->GraphPtr).CachedObjectPtr;
  local_68 = *(longlong *)&(param_1->GraphPtr).GetObject;
  local_40 = (longlong *)0x0;
  if (local_68 != 0) {
    puVar1 = *(undefined8 **)&(param_1->GraphPtr).GetObject.field_0x28;
    puVar4 = (undefined8 *)&(param_1->GraphPtr).GetObject.field_0x10;
    if (puVar1 != (undefined8 *)0x0) {
      puVar4 = puVar1;
    }
    (**(code **)*puVar4)(puVar4,local_58);
  }
  local_38 = (param_1->OwningNode).Object;
  local_30.ReferenceController = (param_1->OwningNode).SharedReferenceCount.ReferenceController;
  if (local_30.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_30.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_30.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FBaseInputController::FBaseInputController((FBaseInputController *)this,(FInitParams *)local_108);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_30.ReferenceController);
  if (local_68 != 0) {
    plVar3 = local_58;
    if (local_40 != (longlong *)0x0) {
      plVar3 = local_40;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (local_a8 != 0) {
    plVar3 = local_98;
    if (local_80 != (longlong *)0x0) {
      plVar3 = local_80;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (local_108._32_8_ != 0) {
    plVar3 = (longlong *)(local_108 + 0x30);
    if (local_c0 != (longlong *)0x0) {
      plVar3 = local_c0;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  this->_padding_ = (longlong)&___7FOutputNodeInputController_Frontend_Metasound__6B_;
  FText::FText(&this->CachedDisplayName);
  (this->OwningGraphClassOutputPtr).CachedObjectPtr =
       (param_1->OwningGraphClassOutputPtr).CachedObjectPtr;
  lVar2 = *(longlong *)&(param_1->OwningGraphClassOutputPtr).GetObject;
  *(longlong *)&(this->OwningGraphClassOutputPtr).GetObject = lVar2;
  *(undefined8 *)&(this->OwningGraphClassOutputPtr).GetObject.field_0x28 = 0;
  if (lVar2 != 0) {
    puVar1 = *(undefined8 **)&(param_1->OwningGraphClassOutputPtr).GetObject.field_0x28;
    puVar4 = (undefined8 *)&(param_1->OwningGraphClassOutputPtr).GetObject.field_0x10;
    if (puVar1 != (undefined8 *)0x0) {
      puVar4 = puVar1;
    }
    (**(code **)*puVar4)();
  }
  return this;
}

// GetVertexAccessType @ 14ae3de00

EMetasoundFrontendVertexAccessType __thiscall
Metasound::Frontend::FOutputNodeInputController::GetVertexAccessType
          (FOutputNodeInputController *this)

{
  code *pcVar1;
  longlong *plVar2;
  undefined8 uVar3;
  FMetasoundFrontendClassOutput *pFVar4;
  longlong *plVar5;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&(this->OwningGraphClassOutputPtr).GetObject)
  ;
  pcVar1 = *(code **)&(this->OwningGraphClassOutputPtr).GetObject;
  plVar2 = *(longlong **)&(this->OwningGraphClassOutputPtr).GetObject.field_0x28;
  plVar5 = (longlong *)&(this->OwningGraphClassOutputPtr).GetObject.field_0x10;
  if (plVar2 != (longlong *)0x0) {
    plVar5 = plVar2;
  }
  uVar3 = (**(code **)(*plVar5 + 8))();
  pFVar4 = (FMetasoundFrontendClassOutput *)(*pcVar1)(uVar3);
  (this->OwningGraphClassOutputPtr).CachedObjectPtr = pFVar4;
  return *(EMetasoundFrontendVertexAccessType *)&pFVar4->field_0x30;
}

// IsValid @ 14ae3f8b0

bool __thiscall
Metasound::Frontend::FOutputNodeInputController::IsValid(FOutputNodeInputController *this)

{
  code *pcVar1;
  longlong *plVar2;
  bool bVar3;
  undefined8 uVar4;
  FMetasoundFrontendClassOutput *pFVar5;
  longlong *plVar6;
  
  bVar3 = FBaseInputController::IsValid((FBaseInputController *)this);
  if (bVar3) {
    UE::Core::Private::Function::CheckCallable
              (*(void **)&(this->OwningGraphClassOutputPtr).GetObject);
    pcVar1 = *(code **)&(this->OwningGraphClassOutputPtr).GetObject;
    plVar2 = *(longlong **)&(this->OwningGraphClassOutputPtr).GetObject.field_0x28;
    plVar6 = (longlong *)&(this->OwningGraphClassOutputPtr).GetObject.field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar6 = plVar2;
    }
    uVar4 = (**(code **)(*plVar6 + 8))();
    pFVar5 = (FMetasoundFrontendClassOutput *)(*pcVar1)(uVar4);
    (this->OwningGraphClassOutputPtr).CachedObjectPtr = pFVar5;
    if (pFVar5 != (FMetasoundFrontendClassOutput *)0x0) {
      return true;
    }
  }
  return false;
}

// SetName @ 14ae45700

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Metasound::Frontend::FOutputNodeInputController::SetName
          (FOutputNodeInputController *this,FName *param_1)

{
  code *pcVar1;
  TAccessPtr<FMetasoundFrontendVertex> *pTVar2;
  undefined8 uVar3;
  FMetasoundFrontendVertex *pFVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined1 auStack_78 [32];
  undefined1 local_58 [64];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  pTVar2 = ConstCastAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendVertex>,Metasound::Frontend::TAccessPtr<FMetasoundFrontendVertex_const_>_>
                     ((TAccessPtr<FMetasoundFrontendVertex> *)local_58,
                      (TAccessPtr<FMetasoundFrontendVertex_const_> *)&this->_padding_);
  UE::Core::Private::Function::CheckCallable(*(void **)&pTVar2->GetObject);
  plVar6 = *(longlong **)&(pTVar2->GetObject).field_0x28;
  pcVar1 = *(code **)&pTVar2->GetObject;
  plVar5 = (longlong *)&(pTVar2->GetObject).field_0x10;
  if (plVar6 != (longlong *)0x0) {
    plVar5 = plVar6;
  }
  uVar3 = (**(code **)(*plVar5 + 8))();
  pFVar4 = (FMetasoundFrontendVertex *)(*pcVar1)(uVar3);
  pTVar2->CachedObjectPtr = pFVar4;
  if (local_58._16_8_ != 0) {
    plVar6 = (longlong *)(local_58 + 0x20);
    if ((longlong *)local_58._56_8_ != (longlong *)0x0) {
      plVar6 = (longlong *)local_58._56_8_;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if (pFVar4 != (FMetasoundFrontendVertex *)0x0) {
    pFVar4->Name = *param_1;
  }
  return;
}

// ShareAccess @ 14ae463f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FDocumentAccess * __thiscall
Metasound::Frontend::FOutputNodeInputController::ShareAccess
          (FOutputNodeInputController *this,FDocumentAccess *__return_storage_ptr__)

{
  undefined8 uVar1;
  longlong lVar2;
  FMetasoundFrontendGraph *pFVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined1 auStack_78 [32];
  undefined1 local_58 [40];
  undefined8 uStack_30;
  longlong local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  FDocumentAccess::FDocumentAccess(__return_storage_ptr__);
  TAccessPtr<FMetasoundFrontendVertex_const_>::operator=
            ((TAccessPtr<FMetasoundFrontendVertex_const_> *)__return_storage_ptr__,
             (TAccessPtr<FMetasoundFrontendVertex_const_> *)&this->_padding_);
  TAccessPtr<FMetasoundFrontendClassInput_const_>::operator=
            ((TAccessPtr<FMetasoundFrontendClassInput_const_> *)&__return_storage_ptr__->_padding_,
             (TAccessPtr<FMetasoundFrontendClassInput_const_> *)&this->_padding_);
  (__return_storage_ptr__->Graph).CachedObjectPtr = (FMetasoundFrontendGraph *)this->_padding_;
  local_58._0_8_ = this->_padding_;
  uStack_30 = (longlong *)0x0;
  if ((FMetasoundFrontendGraph *)local_58._0_8_ != (FMetasoundFrontendGraph *)0x0) {
    plVar8 = &this->_padding_;
    if ((longlong *)this->_padding_ != (longlong *)0x0) {
      plVar8 = (longlong *)this->_padding_;
    }
    (**(code **)*plVar8)(plVar8,local_58 + 0x10);
  }
  pFVar3 = *(FMetasoundFrontendGraph **)&(__return_storage_ptr__->Graph).GetObject;
  lVar2 = *(longlong *)&(__return_storage_ptr__->Graph).GetObject.field_0x8;
  lVar4 = *(longlong *)&(__return_storage_ptr__->Graph).GetObject.field_0x10;
  lVar5 = *(longlong *)&(__return_storage_ptr__->Graph).GetObject.field_0x18;
  uVar1 = *(undefined8 *)&(__return_storage_ptr__->Graph).GetObject.field_0x20;
  plVar8 = *(longlong **)&(__return_storage_ptr__->Graph).GetObject.field_0x28;
  *(undefined8 *)&(__return_storage_ptr__->Graph).GetObject = local_58._0_8_;
  *(undefined8 *)&(__return_storage_ptr__->Graph).GetObject.field_0x8 = local_58._8_8_;
  *(undefined4 *)&(__return_storage_ptr__->Graph).GetObject.field_0x10 = local_58._16_4_;
  *(undefined4 *)&(__return_storage_ptr__->Graph).GetObject.field_0x14 = local_58._20_4_;
  *(undefined4 *)&(__return_storage_ptr__->Graph).GetObject.field_0x18 = local_58._24_4_;
  *(undefined4 *)&(__return_storage_ptr__->Graph).GetObject.field_0x1c = local_58._28_4_;
  *(undefined4 *)&(__return_storage_ptr__->Graph).GetObject.field_0x20 = local_58._32_4_;
  *(undefined4 *)&(__return_storage_ptr__->Graph).GetObject.field_0x24 = local_58._36_4_;
  *(undefined4 *)&(__return_storage_ptr__->Graph).GetObject.field_0x28 = (undefined4)uStack_30;
  *(undefined4 *)&(__return_storage_ptr__->Graph).GetObject.field_0x2c = uStack_30._4_4_;
  local_58._16_8_ = lVar4;
  local_58._24_8_ = lVar5;
  local_58._32_8_ = uVar1;
  uStack_30 = plVar8;
  local_58._0_8_ = pFVar3;
  local_58._8_8_ = lVar2;
  if (pFVar3 != (FMetasoundFrontendGraph *)0x0) {
    plVar9 = (longlong *)(local_58 + 0x10);
    if (plVar8 != (longlong *)0x0) {
      plVar9 = plVar8;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  TAccessPtr<FMetasoundFrontendGraph_const_>::
  TAccessPtr<FMetasoundFrontendGraph_const_><FMetasoundFrontendGraph>
            ((TAccessPtr<FMetasoundFrontendGraph_const_> *)local_58,
             (TAccessPtr<FMetasoundFrontendGraph> *)&this->_padding_,Tag);
  __return_storage_ptr__->_padding_ = local_58._0_8_;
  lVar4 = __return_storage_ptr__->_padding_;
  lVar5 = __return_storage_ptr__->_padding_;
  lVar6 = __return_storage_ptr__->_padding_;
  lVar7 = __return_storage_ptr__->_padding_;
  lVar2 = __return_storage_ptr__->_padding_;
  plVar8 = (longlong *)__return_storage_ptr__->_padding_;
  __return_storage_ptr__->_padding_ = local_58._16_8_;
  __return_storage_ptr__->_padding_ = local_58._24_8_;
  *(undefined4 *)&__return_storage_ptr__->_padding_ = local_58._32_4_;
  *(undefined4 *)((longlong)&__return_storage_ptr__->_padding_ + 4) = local_58._36_4_;
  *(undefined4 *)&__return_storage_ptr__->_padding_ = (undefined4)uStack_30;
  *(undefined4 *)((longlong)&__return_storage_ptr__->_padding_ + 4) = uStack_30._4_4_;
  *(undefined4 *)&__return_storage_ptr__->_padding_ = (undefined4)local_28;
  *(undefined4 *)((longlong)&__return_storage_ptr__->_padding_ + 4) = local_28._4_4_;
  *(undefined4 *)&__return_storage_ptr__->_padding_ = plStack_20._0_4_;
  *(undefined4 *)((longlong)&__return_storage_ptr__->_padding_ + 4) = plStack_20._4_4_;
  local_58._16_8_ = lVar4;
  local_58._24_8_ = lVar5;
  local_58._32_8_ = lVar6;
  uStack_30 = (longlong *)lVar7;
  local_28 = lVar2;
  plStack_20 = plVar8;
  if (lVar4 != 0) {
    plVar9 = (longlong *)(local_58 + 0x20);
    if (plVar8 != (longlong *)0x0) {
      plVar9 = plVar8;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  TAccessPtr<FMetasoundFrontendClassOutput_const_>::operator=
            ((TAccessPtr<FMetasoundFrontendClassOutput_const_> *)&__return_storage_ptr__->_padding_,
             &this->OwningGraphClassOutputPtr);
  return __return_storage_ptr__;
}

// ShareAccess @ 14ae465b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FConstDocumentAccess * __thiscall
Metasound::Frontend::FOutputNodeInputController::ShareAccess
          (FOutputNodeInputController *this,FConstDocumentAccess *__return_storage_ptr__)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined1 auStack_78 [32];
  undefined1 local_58 [64];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  FConstDocumentAccess::FConstDocumentAccess(__return_storage_ptr__);
  TAccessPtr<FMetasoundFrontendVertex_const_>::operator=
            (&__return_storage_ptr__->ConstVertex,
             (TAccessPtr<FMetasoundFrontendVertex_const_> *)&this->_padding_);
  TAccessPtr<FMetasoundFrontendClassInput_const_>::operator=
            (&__return_storage_ptr__->ConstClassInput,
             (TAccessPtr<FMetasoundFrontendClassInput_const_> *)&this->_padding_);
  TAccessPtr<FMetasoundFrontendGraph_const_>::
  TAccessPtr<FMetasoundFrontendGraph_const_><FMetasoundFrontendGraph>
            ((TAccessPtr<FMetasoundFrontendGraph_const_> *)local_58,
             (TAccessPtr<FMetasoundFrontendGraph> *)&this->_padding_,Tag);
  (__return_storage_ptr__->ConstGraph).CachedObjectPtr = (FMetasoundFrontendGraph *)local_58._0_8_;
  lVar7 = *(longlong *)&(__return_storage_ptr__->ConstGraph).GetObject;
  uVar8 = *(undefined8 *)&(__return_storage_ptr__->ConstGraph).GetObject.field_0x8;
  uVar1 = *(undefined4 *)&(__return_storage_ptr__->ConstGraph).GetObject.field_0x10;
  uVar2 = *(undefined4 *)&(__return_storage_ptr__->ConstGraph).GetObject.field_0x14;
  uVar3 = *(undefined4 *)&(__return_storage_ptr__->ConstGraph).GetObject.field_0x18;
  uVar4 = *(undefined4 *)&(__return_storage_ptr__->ConstGraph).GetObject.field_0x1c;
  uVar5 = *(undefined8 *)&(__return_storage_ptr__->ConstGraph).GetObject.field_0x20;
  plVar6 = *(longlong **)&(__return_storage_ptr__->ConstGraph).GetObject.field_0x28;
  *(undefined8 *)&(__return_storage_ptr__->ConstGraph).GetObject = local_58._16_8_;
  *(undefined8 *)&(__return_storage_ptr__->ConstGraph).GetObject.field_0x8 = local_58._24_8_;
  *(undefined4 *)&(__return_storage_ptr__->ConstGraph).GetObject.field_0x10 = local_58._32_4_;
  *(undefined4 *)&(__return_storage_ptr__->ConstGraph).GetObject.field_0x14 = local_58._36_4_;
  *(undefined4 *)&(__return_storage_ptr__->ConstGraph).GetObject.field_0x18 = local_58._40_4_;
  *(undefined4 *)&(__return_storage_ptr__->ConstGraph).GetObject.field_0x1c = local_58._44_4_;
  *(undefined4 *)&(__return_storage_ptr__->ConstGraph).GetObject.field_0x20 = local_58._48_4_;
  *(undefined4 *)&(__return_storage_ptr__->ConstGraph).GetObject.field_0x24 = local_58._52_4_;
  *(undefined4 *)&(__return_storage_ptr__->ConstGraph).GetObject.field_0x28 = local_58._56_4_;
  *(undefined4 *)&(__return_storage_ptr__->ConstGraph).GetObject.field_0x2c = local_58._60_4_;
  local_58._32_4_ = uVar1;
  local_58._36_4_ = uVar2;
  local_58._40_4_ = uVar3;
  local_58._44_4_ = uVar4;
  local_58._48_8_ = uVar5;
  local_58._56_8_ = plVar6;
  local_58._16_8_ = lVar7;
  local_58._24_8_ = uVar8;
  if (lVar7 != 0) {
    plVar9 = (longlong *)(local_58 + 0x20);
    if (plVar6 != (longlong *)0x0) {
      plVar9 = plVar6;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  TAccessPtr<FMetasoundFrontendClassOutput_const_>::operator=
            (&__return_storage_ptr__->ConstClassOutput,&this->OwningGraphClassOutputPtr);
  return __return_storage_ptr__;
}

