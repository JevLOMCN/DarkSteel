// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 7

// FInputNodeOutputController @ 14ae59310

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FInputNodeOutputController * __thiscall
Metasound::Frontend::FInputNodeOutputController::FInputNodeOutputController
          (FInputNodeOutputController *this,FInitParams *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 auStack_128 [32];
  undefined1 local_108 [72];
  longlong *local_c0;
  FMetasoundFrontendClassOutput *local_b8;
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
  local_b8 = (param_1->ClassOutputPtr).CachedObjectPtr;
  local_a8 = *(longlong *)&(param_1->ClassOutputPtr).GetObject;
  local_80 = (longlong *)0x0;
  if (local_a8 != 0) {
    puVar1 = *(undefined8 **)&(param_1->ClassOutputPtr).GetObject.field_0x28;
    puVar4 = (undefined8 *)&(param_1->ClassOutputPtr).GetObject.field_0x10;
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
  FBaseOutputController::FBaseOutputController
            ((FBaseOutputController *)this,(FInitParams *)local_108);
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
  this->_padding_ = (longlong)&___7FInputNodeOutputController_Frontend_Metasound__6B_;
  FText::FText(&this->CachedDisplayName);
  (this->OwningGraphClassInputPtr).CachedObjectPtr =
       (param_1->OwningGraphClassInputPtr).CachedObjectPtr;
  lVar2 = *(longlong *)&(param_1->OwningGraphClassInputPtr).GetObject;
  *(longlong *)&(this->OwningGraphClassInputPtr).GetObject = lVar2;
  *(undefined8 *)&(this->OwningGraphClassInputPtr).GetObject.field_0x28 = 0;
  if (lVar2 != 0) {
    puVar1 = *(undefined8 **)&(param_1->OwningGraphClassInputPtr).GetObject.field_0x28;
    puVar4 = (undefined8 *)&(param_1->OwningGraphClassInputPtr).GetObject.field_0x10;
    if (puVar1 != (undefined8 *)0x0) {
      puVar4 = puVar1;
    }
    (**(code **)*puVar4)();
  }
  return this;
}

// ~FInputNodeOutputController @ 14ae5c220

void __thiscall
Metasound::Frontend::FInputNodeOutputController::~FInputNodeOutputController
          (FInputNodeOutputController *this)

{
  longlong *plVar1;
  ITextData *pIVar2;
  longlong *plVar3;
  
  if (*(longlong *)&(this->OwningGraphClassInputPtr).GetObject != 0) {
    plVar1 = *(longlong **)&(this->OwningGraphClassInputPtr).GetObject.field_0x28;
    plVar3 = (longlong *)&(this->OwningGraphClassInputPtr).GetObject.field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar3 = plVar1;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  pIVar2 = (this->CachedDisplayName).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  FBaseOutputController::~FBaseOutputController((FBaseOutputController *)this);
  return;
}

// GetVertexAccessType @ 14ae78e90

EMetasoundFrontendVertexAccessType __thiscall
Metasound::Frontend::FInputNodeOutputController::GetVertexAccessType
          (FInputNodeOutputController *this)

{
  code *pcVar1;
  longlong *plVar2;
  undefined8 uVar3;
  FMetasoundFrontendClassInput *pFVar4;
  longlong *plVar5;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&(this->OwningGraphClassInputPtr).GetObject);
  pcVar1 = *(code **)&(this->OwningGraphClassInputPtr).GetObject;
  plVar2 = *(longlong **)&(this->OwningGraphClassInputPtr).GetObject.field_0x28;
  plVar5 = (longlong *)&(this->OwningGraphClassInputPtr).GetObject.field_0x10;
  if (plVar2 != (longlong *)0x0) {
    plVar5 = plVar2;
  }
  uVar3 = (**(code **)(*plVar5 + 8))();
  pFVar4 = (FMetasoundFrontendClassInput *)(*pcVar1)(uVar3);
  (this->OwningGraphClassInputPtr).CachedObjectPtr = pFVar4;
  return (EMetasoundFrontendVertexAccessType)pFVar4->_padding_;
}

// IsValid @ 14ae7aa20

bool __thiscall
Metasound::Frontend::FInputNodeOutputController::IsValid(FInputNodeOutputController *this)

{
  code *pcVar1;
  longlong *plVar2;
  bool bVar3;
  undefined8 uVar4;
  FMetasoundFrontendClassInput *pFVar5;
  longlong *plVar6;
  
  bVar3 = FBaseOutputController::IsValid((FBaseOutputController *)this);
  if (bVar3) {
    UE::Core::Private::Function::CheckCallable
              (*(void **)&(this->OwningGraphClassInputPtr).GetObject);
    pcVar1 = *(code **)&(this->OwningGraphClassInputPtr).GetObject;
    plVar2 = *(longlong **)&(this->OwningGraphClassInputPtr).GetObject.field_0x28;
    plVar6 = (longlong *)&(this->OwningGraphClassInputPtr).GetObject.field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar6 = plVar2;
    }
    uVar4 = (**(code **)(*plVar6 + 8))();
    pFVar5 = (FMetasoundFrontendClassInput *)(*pcVar1)(uVar4);
    (this->OwningGraphClassInputPtr).CachedObjectPtr = pFVar5;
    if (pFVar5 != (FMetasoundFrontendClassInput *)0x0) {
      return true;
    }
  }
  return false;
}

// SetName @ 14ae89090

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Metasound::Frontend::FInputNodeOutputController::SetName
          (FInputNodeOutputController *this,FName *param_1)

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

// ShareAccess @ 14ae8a130

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FDocumentAccess * __thiscall
Metasound::Frontend::FInputNodeOutputController::ShareAccess
          (FInputNodeOutputController *this,FDocumentAccess *__return_storage_ptr__)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 auStack_78 [32];
  undefined1 local_58 [64];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  FDocumentAccess::FDocumentAccess(__return_storage_ptr__);
  TAccessPtr<FMetasoundFrontendVertex_const_>::operator=
            ((TAccessPtr<FMetasoundFrontendVertex_const_> *)__return_storage_ptr__,
             (TAccessPtr<FMetasoundFrontendVertex_const_> *)&this->_padding_);
  TAccessPtr<FMetasoundFrontendClassOutput_const_>::operator=
            ((TAccessPtr<FMetasoundFrontendClassOutput_const_> *)&__return_storage_ptr__->_padding_,
             (TAccessPtr<FMetasoundFrontendClassOutput_const_> *)&this->_padding_);
  TAccessPtr<FMetasoundFrontendGraph>::operator=
            (&__return_storage_ptr__->Graph,(TAccessPtr<FMetasoundFrontendGraph> *)&this->_padding_)
  ;
  TAccessPtr<FMetasoundFrontendGraph_const_>::
  TAccessPtr<FMetasoundFrontendGraph_const_><FMetasoundFrontendGraph>
            ((TAccessPtr<FMetasoundFrontendGraph_const_> *)local_58,
             (TAccessPtr<FMetasoundFrontendGraph> *)&this->_padding_,Tag);
  __return_storage_ptr__->_padding_ = local_58._0_8_;
  lVar7 = __return_storage_ptr__->_padding_;
  lVar8 = __return_storage_ptr__->_padding_;
  uVar1 = *(undefined4 *)&__return_storage_ptr__->_padding_;
  uVar2 = *(undefined4 *)((longlong)&__return_storage_ptr__->_padding_ + 4);
  uVar3 = *(undefined4 *)&__return_storage_ptr__->_padding_;
  uVar4 = *(undefined4 *)((longlong)&__return_storage_ptr__->_padding_ + 4);
  lVar5 = __return_storage_ptr__->_padding_;
  plVar6 = (longlong *)__return_storage_ptr__->_padding_;
  __return_storage_ptr__->_padding_ = local_58._16_8_;
  __return_storage_ptr__->_padding_ = local_58._24_8_;
  *(undefined4 *)&__return_storage_ptr__->_padding_ = local_58._32_4_;
  *(undefined4 *)((longlong)&__return_storage_ptr__->_padding_ + 4) = local_58._36_4_;
  *(undefined4 *)&__return_storage_ptr__->_padding_ = local_58._40_4_;
  *(undefined4 *)((longlong)&__return_storage_ptr__->_padding_ + 4) = local_58._44_4_;
  *(undefined4 *)&__return_storage_ptr__->_padding_ = local_58._48_4_;
  *(undefined4 *)((longlong)&__return_storage_ptr__->_padding_ + 4) = local_58._52_4_;
  *(undefined4 *)&__return_storage_ptr__->_padding_ = local_58._56_4_;
  *(undefined4 *)((longlong)&__return_storage_ptr__->_padding_ + 4) = local_58._60_4_;
  local_58._32_4_ = uVar1;
  local_58._36_4_ = uVar2;
  local_58._40_4_ = uVar3;
  local_58._44_4_ = uVar4;
  local_58._48_8_ = lVar5;
  local_58._56_8_ = plVar6;
  local_58._16_8_ = lVar7;
  local_58._24_8_ = lVar8;
  if (lVar7 != 0) {
    plVar9 = (longlong *)(local_58 + 0x20);
    if (plVar6 != (longlong *)0x0) {
      plVar9 = plVar6;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  TAccessPtr<FMetasoundFrontendClassInput_const_>::operator=
            ((TAccessPtr<FMetasoundFrontendClassInput_const_> *)&__return_storage_ptr__->_padding_,
             &this->OwningGraphClassInputPtr);
  return __return_storage_ptr__;
}

// ShareAccess @ 14ae8a260

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FConstDocumentAccess * __thiscall
Metasound::Frontend::FInputNodeOutputController::ShareAccess
          (FInputNodeOutputController *this,FConstDocumentAccess *__return_storage_ptr__)

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
  TAccessPtr<FMetasoundFrontendClassOutput_const_>::operator=
            (&__return_storage_ptr__->ConstClassOutput,
             (TAccessPtr<FMetasoundFrontendClassOutput_const_> *)&this->_padding_);
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
  TAccessPtr<FMetasoundFrontendClassInput_const_>::operator=
            (&__return_storage_ptr__->ConstClassInput,&this->OwningGraphClassInputPtr);
  return __return_storage_ptr__;
}

