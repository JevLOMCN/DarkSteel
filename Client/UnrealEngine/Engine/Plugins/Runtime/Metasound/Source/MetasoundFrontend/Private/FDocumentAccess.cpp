// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 1

// FDocumentAccess @ 14ad982c0

FDocumentAccess * __thiscall
Metasound::Frontend::FDocumentAccess::FDocumentAccess(FDocumentAccess *this)

{
  undefined1 *puVar1;
  longlong *plVar2;
  code *pcVar3;
  undefined8 *puVar4;
  FMetasoundFrontendVertex *pFVar5;
  FMetasoundFrontendClassInput *pFVar6;
  FMetasoundFrontendClassOutput *pFVar7;
  undefined8 uVar8;
  FMetasoundFrontendGraph *pFVar9;
  longlong *plVar10;
  
  FConstDocumentAccess::FConstDocumentAccess((FConstDocumentAccess *)this);
  plVar10 = (longlong *)&(this->Vertex).GetObject.field_0x10;
  (this->Vertex).CachedObjectPtr = (FMetasoundFrontendVertex *)0x0;
  *(undefined8 *)&(this->Vertex).GetObject = 0;
  *(undefined8 *)&(this->Vertex).GetObject.field_0x28 = 0;
  *plVar10 = (longlong)
             &
             ___7__TFunction_OwnedObject_P6APEAUFMetasoundFrontendVertex__XZ_0A__0A__Function_Private_Core_UE__6B_
  ;
  puVar1 = &(this->Vertex).GetObject.field_0x18;
  *(code **)puVar1 =
       `Metasound::Frontend::TAccessPtr<FMetasoundFrontendVertex>::
       TAccessPtr<FMetasoundFrontendVertex>'::__l1::<lambda_41_>::<lambda_invoker_cdecl>;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&(this->Vertex).GetObject =
         UE::Core::Private::Function::
         TFunctionRefCaller<FMetasoundFrontendVertex_*_(__cdecl*)(void),FMetasoundFrontendVertex_*>
         ::Call;
  }
  UE::Core::Private::Function::CheckCallable(*(void **)&(this->Vertex).GetObject);
  plVar2 = *(longlong **)&(this->Vertex).GetObject.field_0x28;
  pcVar3 = *(code **)&(this->Vertex).GetObject;
  if (plVar2 != (longlong *)0x0) {
    plVar10 = plVar2;
  }
  puVar4 = (undefined8 *)(**(code **)(*plVar10 + 8))(plVar10);
  if (pcVar3 == UE::Core::Private::Function::
                TFunctionRefCaller<FMetasoundFrontendVertex_*_(__cdecl*)(void),FMetasoundFrontendVertex_*>
                ::Call) {
    pFVar5 = (FMetasoundFrontendVertex *)(*(code *)*puVar4)();
  }
  else {
    pFVar5 = (FMetasoundFrontendVertex *)(*pcVar3)(puVar4);
  }
  (this->Vertex).CachedObjectPtr = pFVar5;
  plVar10 = (longlong *)&(this->ClassInput).GetObject.field_0x10;
  (this->ClassInput).CachedObjectPtr = (FMetasoundFrontendClassInput *)0x0;
  *(undefined8 *)&(this->ClassInput).GetObject = 0;
  *(undefined8 *)&(this->ClassInput).GetObject.field_0x28 = 0;
  *plVar10 = (longlong)
             &
             ___7__TFunction_OwnedObject_P6APEAUFMetasoundFrontendClassInput__XZ_0A__0A__Function_Private_Core_UE__6B_
  ;
  puVar1 = &(this->ClassInput).GetObject.field_0x18;
  *(code **)puVar1 =
       `Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassInput>::
       TAccessPtr<FMetasoundFrontendClassInput>'::__l1::<lambda_39_>::<lambda_invoker_cdecl>;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&(this->ClassInput).GetObject =
         UE::Core::Private::Function::
         TFunctionRefCaller<FMetasoundFrontendClassInput_*_(__cdecl*)(void),FMetasoundFrontendClassInput_*>
         ::Call;
  }
  UE::Core::Private::Function::CheckCallable(*(void **)&(this->ClassInput).GetObject);
  plVar2 = *(longlong **)&(this->ClassInput).GetObject.field_0x28;
  pcVar3 = *(code **)&(this->ClassInput).GetObject;
  if (plVar2 != (longlong *)0x0) {
    plVar10 = plVar2;
  }
  puVar4 = (undefined8 *)(**(code **)(*plVar10 + 8))(plVar10);
  if (pcVar3 == UE::Core::Private::Function::
                TFunctionRefCaller<FMetasoundFrontendClassInput_*_(__cdecl*)(void),FMetasoundFrontendClassInput_*>
                ::Call) {
    pFVar6 = (FMetasoundFrontendClassInput *)(*(code *)*puVar4)();
  }
  else {
    pFVar6 = (FMetasoundFrontendClassInput *)(*pcVar3)(puVar4);
  }
  (this->ClassInput).CachedObjectPtr = pFVar6;
  plVar10 = (longlong *)&(this->ClassOutput).GetObject.field_0x10;
  (this->ClassOutput).CachedObjectPtr = (FMetasoundFrontendClassOutput *)0x0;
  *(undefined8 *)&(this->ClassOutput).GetObject = 0;
  *(undefined8 *)&(this->ClassOutput).GetObject.field_0x28 = 0;
  *plVar10 = (longlong)
             &
             ___7__TFunction_OwnedObject_P6APEAUFMetasoundFrontendClassOutput__XZ_0A__0A__Function_Private_Core_UE__6B_
  ;
  puVar1 = &(this->ClassOutput).GetObject.field_0x18;
  *(code **)puVar1 =
       `Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassOutput>::
       TAccessPtr<FMetasoundFrontendClassOutput>'::__l1::<lambda_37_>::<lambda_invoker_cdecl>;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&(this->ClassOutput).GetObject =
         UE::Core::Private::Function::
         TFunctionRefCaller<FMetasoundFrontendClassOutput_*_(__cdecl*)(void),FMetasoundFrontendClassOutput_*>
         ::Call;
  }
  UE::Core::Private::Function::CheckCallable(*(void **)&(this->ClassOutput).GetObject);
  plVar2 = *(longlong **)&(this->ClassOutput).GetObject.field_0x28;
  pcVar3 = *(code **)&(this->ClassOutput).GetObject;
  if (plVar2 != (longlong *)0x0) {
    plVar10 = plVar2;
  }
  puVar4 = (undefined8 *)(**(code **)(*plVar10 + 8))(plVar10);
  if (pcVar3 == UE::Core::Private::Function::
                TFunctionRefCaller<FMetasoundFrontendClassOutput_*_(__cdecl*)(void),FMetasoundFrontendClassOutput_*>
                ::Call) {
    pFVar7 = (FMetasoundFrontendClassOutput *)(*(code *)*puVar4)();
  }
  else {
    pFVar7 = (FMetasoundFrontendClassOutput *)(*pcVar3)(puVar4);
  }
  (this->ClassOutput).CachedObjectPtr = pFVar7;
  plVar10 = (longlong *)&(this->Node).field_0x20;
  *(undefined8 *)&this->Node = 0;
  *(undefined8 *)&(this->Node).field_0x10 = 0;
  *(undefined8 *)&(this->Node).field_0x38 = 0;
  *plVar10 = (longlong)
             &
             ___7__TFunction_OwnedObject_P6APEAUFMetasoundFrontendNode__XZ_0A__0A__Function_Private_Core_UE__6B_
  ;
  puVar1 = &(this->Node).field_0x28;
  *(code **)puVar1 =
       `Metasound::Frontend::TAccessPtr<FMetasoundFrontendNode>::TAccessPtr<FMetasoundFrontendNode>'
       ::__l1::<lambda_35_>::<lambda_invoker_cdecl>;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&(this->Node).field_0x10 =
         UE::Core::Private::Function::
         TFunctionRefCaller<FMetasoundFrontendNode_*_(__cdecl*)(void),FMetasoundFrontendNode_*>::
         Call;
  }
  UE::Core::Private::Function::CheckCallable(*(void **)&(this->Node).field_0x10);
  plVar2 = *(longlong **)&(this->Node).field_0x38;
  pcVar3 = *(code **)&(this->Node).field_0x10;
  if (plVar2 != (longlong *)0x0) {
    plVar10 = plVar2;
  }
  puVar4 = (undefined8 *)(**(code **)(*plVar10 + 8))(plVar10);
  if (pcVar3 == UE::Core::Private::Function::
                TFunctionRefCaller<FMetasoundFrontendNode_*_(__cdecl*)(void),FMetasoundFrontendNode_*>
                ::Call) {
    uVar8 = (*(code *)*puVar4)();
  }
  else {
    uVar8 = (*pcVar3)(puVar4);
  }
  *(undefined8 *)&this->Node = uVar8;
  plVar10 = (longlong *)&(this->Class).field_0x20;
  *(undefined8 *)&this->Class = 0;
  *(undefined8 *)&(this->Class).field_0x10 = 0;
  *(undefined8 *)&(this->Class).field_0x38 = 0;
  *plVar10 = (longlong)
             &
             ___7__TFunction_OwnedObject_P6APEAUFMetasoundFrontendClass__XZ_0A__0A__Function_Private_Core_UE__6B_
  ;
  puVar1 = &(this->Class).field_0x28;
  *(code **)puVar1 =
       `Metasound::Frontend::TAccessPtr<FMetasoundFrontendClass>::
       TAccessPtr<FMetasoundFrontendClass>'::__l1::<lambda_31_>::<lambda_invoker_cdecl>;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&(this->Class).field_0x10 =
         UE::Core::Private::Function::
         TFunctionRefCaller<FMetasoundFrontendClass_*_(__cdecl*)(void),FMetasoundFrontendClass_*>::
         Call;
  }
  UE::Core::Private::Function::CheckCallable(*(void **)&(this->Class).field_0x10);
  plVar2 = *(longlong **)&(this->Class).field_0x38;
  pcVar3 = *(code **)&(this->Class).field_0x10;
  if (plVar2 != (longlong *)0x0) {
    plVar10 = plVar2;
  }
  puVar4 = (undefined8 *)(**(code **)(*plVar10 + 8))(plVar10);
  if (pcVar3 == UE::Core::Private::Function::
                TFunctionRefCaller<FMetasoundFrontendClass_*_(__cdecl*)(void),FMetasoundFrontendClass_*>
                ::Call) {
    uVar8 = (*(code *)*puVar4)();
  }
  else {
    uVar8 = (*pcVar3)(puVar4);
  }
  *(undefined8 *)&this->Class = uVar8;
  plVar10 = (longlong *)&(this->GraphClass).field_0x20;
  *(undefined8 *)&this->GraphClass = 0;
  *(undefined8 *)&(this->GraphClass).field_0x10 = 0;
  *(undefined8 *)&(this->GraphClass).field_0x38 = 0;
  *plVar10 = (longlong)
             &
             ___7__TFunction_OwnedObject_P6APEAUFMetasoundFrontendGraphClass__XZ_0A__0A__Function_Private_Core_UE__6B_
  ;
  puVar1 = &(this->GraphClass).field_0x28;
  *(code **)puVar1 =
       `Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass>::
       TAccessPtr<FMetasoundFrontendGraphClass>'::__l1::<lambda_29_>::<lambda_invoker_cdecl>;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&(this->GraphClass).field_0x10 =
         UE::Core::Private::Function::
         TFunctionRefCaller<FMetasoundFrontendGraphClass_*_(__cdecl*)(void),FMetasoundFrontendGraphClass_*>
         ::Call;
  }
  UE::Core::Private::Function::CheckCallable(*(void **)&(this->GraphClass).field_0x10);
  plVar2 = *(longlong **)&(this->GraphClass).field_0x38;
  pcVar3 = *(code **)&(this->GraphClass).field_0x10;
  if (plVar2 != (longlong *)0x0) {
    plVar10 = plVar2;
  }
  puVar4 = (undefined8 *)(**(code **)(*plVar10 + 8))(plVar10);
  if (pcVar3 == UE::Core::Private::Function::
                TFunctionRefCaller<FMetasoundFrontendGraphClass_*_(__cdecl*)(void),FMetasoundFrontendGraphClass_*>
                ::Call) {
    uVar8 = (*(code *)*puVar4)();
  }
  else {
    uVar8 = (*pcVar3)(puVar4);
  }
  *(undefined8 *)&this->GraphClass = uVar8;
  plVar10 = (longlong *)&(this->Graph).GetObject.field_0x10;
  (this->Graph).CachedObjectPtr = (FMetasoundFrontendGraph *)0x0;
  *(undefined8 *)&(this->Graph).GetObject = 0;
  *(undefined8 *)&(this->Graph).GetObject.field_0x28 = 0;
  *plVar10 = (longlong)
             &
             ___7__TFunction_OwnedObject_P6APEAUFMetasoundFrontendGraph__XZ_0A__0A__Function_Private_Core_UE__6B_
  ;
  puVar1 = &(this->Graph).GetObject.field_0x18;
  *(code **)puVar1 =
       `Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraph>::
       TAccessPtr<FMetasoundFrontendGraph>'::__l1::<lambda_33_>::<lambda_invoker_cdecl>;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&(this->Graph).GetObject =
         UE::Core::Private::Function::
         TFunctionRefCaller<FMetasoundFrontendGraph_*_(__cdecl*)(void),FMetasoundFrontendGraph_*>::
         Call;
  }
  UE::Core::Private::Function::CheckCallable(*(void **)&(this->Graph).GetObject);
  plVar2 = *(longlong **)&(this->Graph).GetObject.field_0x28;
  pcVar3 = *(code **)&(this->Graph).GetObject;
  if (plVar2 != (longlong *)0x0) {
    plVar10 = plVar2;
  }
  puVar4 = (undefined8 *)(**(code **)(*plVar10 + 8))(plVar10);
  if (pcVar3 == UE::Core::Private::Function::
                TFunctionRefCaller<FMetasoundFrontendGraph_*_(__cdecl*)(void),FMetasoundFrontendGraph_*>
                ::Call) {
    pFVar9 = (FMetasoundFrontendGraph *)(*(code *)*puVar4)();
  }
  else {
    pFVar9 = (FMetasoundFrontendGraph *)(*pcVar3)(puVar4);
  }
  (this->Graph).CachedObjectPtr = pFVar9;
  plVar10 = (longlong *)&(this->Document).field_0x20;
  *(undefined8 *)&this->Document = 0;
  *(undefined8 *)&(this->Document).field_0x10 = 0;
  *(undefined8 *)&(this->Document).field_0x38 = 0;
  *plVar10 = (longlong)
             &
             ___7__TFunction_OwnedObject_P6APEAUFMetasoundFrontendDocument__XZ_0A__0A__Function_Private_Core_UE__6B_
  ;
  puVar1 = &(this->Document).field_0x28;
  *(code **)puVar1 =
       `Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument>::
       TAccessPtr<FMetasoundFrontendDocument>'::__l1::<lambda_27_>::<lambda_invoker_cdecl>;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&(this->Document).field_0x10 =
         UE::Core::Private::Function::
         TFunctionRefCaller<FMetasoundFrontendDocument_*_(__cdecl*)(void),FMetasoundFrontendDocument_*>
         ::Call;
  }
  UE::Core::Private::Function::CheckCallable(*(void **)&(this->Document).field_0x10);
  plVar2 = *(longlong **)&(this->Document).field_0x38;
  pcVar3 = *(code **)&(this->Document).field_0x10;
  if (plVar2 != (longlong *)0x0) {
    plVar10 = plVar2;
  }
  puVar4 = (undefined8 *)(**(code **)(*plVar10 + 8))(plVar10);
  if (pcVar3 == UE::Core::Private::Function::
                TFunctionRefCaller<FMetasoundFrontendDocument_*_(__cdecl*)(void),FMetasoundFrontendDocument_*>
                ::Call) {
    uVar8 = (*(code *)*puVar4)();
  }
  else {
    uVar8 = (*pcVar3)(puVar4);
  }
  *(undefined8 *)&this->Document = uVar8;
  return this;
}

