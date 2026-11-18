// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 2

// FConstDocumentAccess @ 14ad97220

FConstDocumentAccess * __thiscall
Metasound::Frontend::FConstDocumentAccess::FConstDocumentAccess(FConstDocumentAccess *this)

{
  undefined1 *puVar1;
  longlong *plVar2;
  code *pcVar3;
  undefined8 *puVar4;
  FMetasoundFrontendVertex *pFVar5;
  undefined8 uVar6;
  FMetasoundFrontendGraph *pFVar7;
  longlong *plVar8;
  
  plVar8 = (longlong *)&(this->ConstVertex).GetObject.field_0x10;
  (this->ConstVertex).CachedObjectPtr = (FMetasoundFrontendVertex *)0x0;
  *(undefined8 *)&(this->ConstVertex).GetObject = 0;
  *(undefined8 *)&(this->ConstVertex).GetObject.field_0x28 = 0;
  *plVar8 = (longlong)
            &
            ___7__TFunction_OwnedObject_P6APEBUFMetasoundFrontendVertex__XZ_0A__0A__Function_Private_Core_UE__6B_
  ;
  puVar1 = &(this->ConstVertex).GetObject.field_0x18;
  *(code **)puVar1 =
       `Metasound::Frontend::TAccessPtr<FMetasoundFrontendVertex_const_>::
       TAccessPtr<FMetasoundFrontendVertex_const_>'::__l1::<lambda_40_>::<lambda_invoker_cdecl>;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&(this->ConstVertex).GetObject =
         UE::Core::Private::Function::
         TFunctionRefCaller<FMetasoundFrontendVertex_const_*_(__cdecl*)(void),FMetasoundFrontendVertex_const_*>
         ::Call;
  }
  UE::Core::Private::Function::CheckCallable(*(void **)&(this->ConstVertex).GetObject);
  plVar2 = *(longlong **)&(this->ConstVertex).GetObject.field_0x28;
  pcVar3 = *(code **)&(this->ConstVertex).GetObject;
  if (plVar2 != (longlong *)0x0) {
    plVar8 = plVar2;
  }
  puVar4 = (undefined8 *)(**(code **)(*plVar8 + 8))(plVar8);
  if (pcVar3 == UE::Core::Private::Function::
                TFunctionRefCaller<FMetasoundFrontendVertex_const_*_(__cdecl*)(void),FMetasoundFrontendVertex_const_*>
                ::Call) {
    pFVar5 = (FMetasoundFrontendVertex *)(*(code *)*puVar4)();
  }
  else {
    pFVar5 = (FMetasoundFrontendVertex *)(*pcVar3)(puVar4);
  }
  (this->ConstVertex).CachedObjectPtr = pFVar5;
  TAccessPtr<FMetasoundFrontendClassInput_const_>::TAccessPtr<FMetasoundFrontendClassInput_const_>
            (&this->ConstClassInput);
  TAccessPtr<FMetasoundFrontendClassOutput_const_>::TAccessPtr<FMetasoundFrontendClassOutput_const_>
            (&this->ConstClassOutput);
  *(undefined8 *)&this->ConstNode = 0;
  *(undefined8 *)&(this->ConstNode).field_0x10 = 0;
  plVar8 = (longlong *)&(this->ConstNode).field_0x20;
  *(undefined8 *)&(this->ConstNode).field_0x38 = 0;
  *plVar8 = (longlong)
            &
            ___7__TFunction_OwnedObject_P6APEBUFMetasoundFrontendNode__XZ_0A__0A__Function_Private_Core_UE__6B_
  ;
  puVar1 = &(this->ConstNode).field_0x28;
  *(code **)puVar1 =
       `Metasound::Frontend::TAccessPtr<FMetasoundFrontendNode_const_>::
       TAccessPtr<FMetasoundFrontendNode_const_>'::__l1::<lambda_34_>::<lambda_invoker_cdecl>;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&(this->ConstNode).field_0x10 =
         UE::Core::Private::Function::
         TFunctionRefCaller<FMetasoundFrontendNode_const_*_(__cdecl*)(void),FMetasoundFrontendNode_const_*>
         ::Call;
  }
  UE::Core::Private::Function::CheckCallable(*(void **)&(this->ConstNode).field_0x10);
  plVar2 = *(longlong **)&(this->ConstNode).field_0x38;
  pcVar3 = *(code **)&(this->ConstNode).field_0x10;
  if (plVar2 != (longlong *)0x0) {
    plVar8 = plVar2;
  }
  puVar4 = (undefined8 *)(**(code **)(*plVar8 + 8))(plVar8);
  if (pcVar3 == UE::Core::Private::Function::
                TFunctionRefCaller<FMetasoundFrontendNode_const_*_(__cdecl*)(void),FMetasoundFrontendNode_const_*>
                ::Call) {
    uVar6 = (*(code *)*puVar4)();
  }
  else {
    uVar6 = (*pcVar3)(puVar4);
  }
  *(undefined8 *)&this->ConstNode = uVar6;
  FConstClassAccessPtr::FConstClassAccessPtr(&this->ConstClass);
  FConstGraphClassAccessPtr::FConstGraphClassAccessPtr(&this->ConstGraphClass);
  (this->ConstGraph).CachedObjectPtr = (FMetasoundFrontendGraph *)0x0;
  *(undefined8 *)&(this->ConstGraph).GetObject = 0;
  plVar8 = (longlong *)&(this->ConstGraph).GetObject.field_0x10;
  *(undefined8 *)&(this->ConstGraph).GetObject.field_0x28 = 0;
  *plVar8 = (longlong)
            &
            ___7__TFunction_OwnedObject_P6APEBUFMetasoundFrontendGraph__XZ_0A__0A__Function_Private_Core_UE__6B_
  ;
  puVar1 = &(this->ConstGraph).GetObject.field_0x18;
  *(code **)puVar1 =
       `Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraph_const_>::
       TAccessPtr<FMetasoundFrontendGraph_const_>'::__l1::<lambda_32_>::<lambda_invoker_cdecl>;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&(this->ConstGraph).GetObject =
         UE::Core::Private::Function::
         TFunctionRefCaller<FMetasoundFrontendGraph_const_*_(__cdecl*)(void),FMetasoundFrontendGraph_const_*>
         ::Call;
  }
  UE::Core::Private::Function::CheckCallable(*(void **)&(this->ConstGraph).GetObject);
  plVar2 = *(longlong **)&(this->ConstGraph).GetObject.field_0x28;
  pcVar3 = *(code **)&(this->ConstGraph).GetObject;
  if (plVar2 != (longlong *)0x0) {
    plVar8 = plVar2;
  }
  puVar4 = (undefined8 *)(**(code **)(*plVar8 + 8))(plVar8);
  if (pcVar3 == UE::Core::Private::Function::
                TFunctionRefCaller<FMetasoundFrontendGraph_const_*_(__cdecl*)(void),FMetasoundFrontendGraph_const_*>
                ::Call) {
    pFVar7 = (FMetasoundFrontendGraph *)(*(code *)*puVar4)();
  }
  else {
    pFVar7 = (FMetasoundFrontendGraph *)(*pcVar3)(puVar4);
  }
  (this->ConstGraph).CachedObjectPtr = pFVar7;
  plVar8 = (longlong *)&(this->ConstDocument).field_0x20;
  *(undefined8 *)&this->ConstDocument = 0;
  *(undefined8 *)&(this->ConstDocument).field_0x10 = 0;
  *(undefined8 *)&(this->ConstDocument).field_0x38 = 0;
  *plVar8 = (longlong)
            &
            ___7__TFunction_OwnedObject_P6APEBUFMetasoundFrontendDocument__XZ_0A__0A__Function_Private_Core_UE__6B_
  ;
  puVar1 = &(this->ConstDocument).field_0x28;
  *(code **)puVar1 =
       `Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument_const_>::
       TAccessPtr<FMetasoundFrontendDocument_const_>'::__l1::<lambda_26_>::<lambda_invoker_cdecl>;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&(this->ConstDocument).field_0x10 =
         UE::Core::Private::Function::
         TFunctionRefCaller<FMetasoundFrontendDocument_const_*_(__cdecl*)(void),FMetasoundFrontendDocument_const_*>
         ::Call;
  }
  UE::Core::Private::Function::CheckCallable(*(void **)&(this->ConstDocument).field_0x10);
  plVar2 = *(longlong **)&(this->ConstDocument).field_0x38;
  pcVar3 = *(code **)&(this->ConstDocument).field_0x10;
  if (plVar2 != (longlong *)0x0) {
    plVar8 = plVar2;
  }
  puVar4 = (undefined8 *)(**(code **)(*plVar8 + 8))(plVar8);
  if (pcVar3 == UE::Core::Private::Function::
                TFunctionRefCaller<FMetasoundFrontendDocument_const_*_(__cdecl*)(void),FMetasoundFrontendDocument_const_*>
                ::Call) {
    uVar6 = (*(code *)*puVar4)();
  }
  else {
    uVar6 = (*pcVar3)(puVar4);
  }
  *(undefined8 *)&this->ConstDocument = uVar6;
  return this;
}

// ~FConstDocumentAccess @ 14ae1d410

void __thiscall
Metasound::Frontend::FConstDocumentAccess::~FConstDocumentAccess(FConstDocumentAccess *this)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (*(longlong *)&(this->ConstDocument).field_0x10 != 0) {
    plVar1 = *(longlong **)&(this->ConstDocument).field_0x38;
    plVar2 = (longlong *)&(this->ConstDocument).field_0x20;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (*(longlong *)&(this->ConstGraph).GetObject != 0) {
    plVar1 = *(longlong **)&(this->ConstGraph).GetObject.field_0x28;
    plVar2 = (longlong *)&(this->ConstGraph).GetObject.field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (*(longlong *)&(this->ConstGraphClass).field_0x10 != 0) {
    plVar1 = *(longlong **)&(this->ConstGraphClass).field_0x38;
    plVar2 = (longlong *)&(this->ConstGraphClass).field_0x20;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (*(longlong *)&(this->ConstClass).field_0x10 != 0) {
    plVar1 = *(longlong **)&(this->ConstClass).field_0x38;
    plVar2 = (longlong *)&(this->ConstClass).field_0x20;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (*(longlong *)&(this->ConstNode).field_0x10 != 0) {
    plVar1 = *(longlong **)&(this->ConstNode).field_0x38;
    plVar2 = (longlong *)&(this->ConstNode).field_0x20;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (*(longlong *)&(this->ConstClassOutput).GetObject != 0) {
    plVar1 = *(longlong **)&(this->ConstClassOutput).GetObject.field_0x28;
    plVar2 = (longlong *)&(this->ConstClassOutput).GetObject.field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (*(longlong *)&(this->ConstClassInput).GetObject != 0) {
    plVar1 = *(longlong **)&(this->ConstClassInput).GetObject.field_0x28;
    plVar2 = (longlong *)&(this->ConstClassInput).GetObject.field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (*(longlong *)&(this->ConstVertex).GetObject != 0) {
    plVar1 = *(longlong **)&(this->ConstVertex).GetObject.field_0x28;
    plVar2 = (longlong *)&(this->ConstVertex).GetObject.field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
                    /* WARNING: Could not recover jumptable at 0x00014ae1d51f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x10))();
    return;
  }
  return;
}

