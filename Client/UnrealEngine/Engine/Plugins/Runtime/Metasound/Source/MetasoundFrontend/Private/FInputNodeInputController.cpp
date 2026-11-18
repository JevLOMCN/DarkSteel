// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 8

// FInputNodeInputController @ 14ae1be60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FInputNodeInputController * __thiscall
Metasound::Frontend::FInputNodeInputController::FInputNodeInputController
          (FInputNodeInputController *this,FInitParams *param_1)

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
  this->_padding_ = (longlong)&___7FInputNodeInputController_Frontend_Metasound__6B_;
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

// CanConnectTo @ 14ae260d0

FConnectability * __thiscall
Metasound::Frontend::FInputNodeInputController::CanConnectTo
          (FInputNodeInputController *this,FConnectability *__return_storage_ptr__,
          IOutputController *param_1)

{
  TArray<Metasound::Frontend::FConverterNodeClassInfo,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  ForAnyElementType _Src;
  int iVar3;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`Metasound::Frontend::FInputNodeInputController::CanConnectTo'::__l2::
             _dynamic_atexit_destructor_for__Connectability__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  pTVar1 = &__return_storage_ptr__->PossibleConverterNodeClasses;
  __return_storage_ptr__->Connectable = Connectability.Connectable;
  __return_storage_ptr__->Reason = Connectability.Reason;
  piVar2 = &(__return_storage_ptr__->PossibleConverterNodeClasses).ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  _Src = Connectability.PossibleConverterNodeClasses.AllocatorInstance;
  iVar3 = Connectability.PossibleConverterNodeClasses.ArrayNum;
  (__return_storage_ptr__->PossibleConverterNodeClasses).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x34,4,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,_Src.Data,(longlong)iVar3 * 0x34);
  }
  return __return_storage_ptr__;
}

// Connect @ 14ae27080

bool __thiscall
Metasound::Frontend::FInputNodeInputController::Connect
          (FInputNodeInputController *this,IOutputController *param_1)

{
  return false;
}

// ConnectWithConverterNode @ 14ae272c0

bool __thiscall
Metasound::Frontend::FInputNodeInputController::ConnectWithConverterNode
          (FInputNodeInputController *this,IOutputController *param_1,
          FConverterNodeClassInfo *param_2)

{
  return false;
}

// GetVertexAccessType @ 14ae3dda0

EMetasoundFrontendVertexAccessType __thiscall
Metasound::Frontend::FInputNodeInputController::GetVertexAccessType(FInputNodeInputController *this)

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

// IsConnectionUserModifiable @ 14ae3f1a0

bool __thiscall
Metasound::Frontend::FInputNodeInputController::IsConnectionUserModifiable
          (FInputNodeInputController *this)

{
  return false;
}

// IsValid @ 14ae3f830

bool __thiscall
Metasound::Frontend::FInputNodeInputController::IsValid(FInputNodeInputController *this)

{
  code *pcVar1;
  longlong *plVar2;
  bool bVar3;
  undefined8 uVar4;
  FMetasoundFrontendClassInput *pFVar5;
  longlong *plVar6;
  
  bVar3 = FBaseInputController::IsValid((FBaseInputController *)this);
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

// SetName @ 14ae45650

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Metasound::Frontend::FInputNodeInputController::SetName
          (FInputNodeInputController *this,FName *param_1)

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

