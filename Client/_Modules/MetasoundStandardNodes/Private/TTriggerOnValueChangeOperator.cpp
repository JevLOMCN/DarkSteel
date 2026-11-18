// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 27

// BindInputs @ 14b1f9cb0

void __thiscall
Metasound::TTriggerOnValueChangeOperator<bool>::BindInputs
          (TTriggerOnValueChangeOperator<bool> *this,FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataReadReference<bool> *local_res18 [2];
  FName *local_38;
  TDataReadReference<bool> *local_30;
  code *local_28;
  TDataReadReference<bool> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&TriggerOnValueChangeVertexNames::InputValueName);
  local_res18[0] = &this->ValueInput;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<bool>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<bool>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_30 = local_res18[0];
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14b1f9d40

void __thiscall
Metasound::TTriggerOnValueChangeOperator<bool>::BindOutputs
          (TTriggerOnValueChangeOperator<bool> *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<Metasound::FTrigger> *local_res18 [2];
  FName *local_38;
  TDataWriteReference<Metasound::FTrigger> *local_30;
  code *local_28;
  TDataWriteReference<Metasound::FTrigger> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&TriggerOnValueChangeVertexNames::OutputOnChangeName);
  local_res18[0] = &this->TriggerOnChangeOutput;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_30 = local_res18[0];
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// BindInputs @ 14b1fa0b0

void __thiscall
Metasound::TTriggerOnValueChangeOperator<float>::BindInputs
          (TTriggerOnValueChangeOperator<float> *this,FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataReadReference<float> *local_res18 [2];
  FName *local_38;
  TDataReadReference<float> *local_30;
  code *local_28;
  TDataReadReference<float> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&TriggerOnValueChangeVertexNames::InputValueName);
  local_res18[0] = &this->ValueInput;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<float>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_30 = local_res18[0];
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14b1fa200

void __thiscall
Metasound::TTriggerOnValueChangeOperator<float>::BindOutputs
          (TTriggerOnValueChangeOperator<float> *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<Metasound::FTrigger> *local_res18 [2];
  FName *local_38;
  TDataWriteReference<Metasound::FTrigger> *local_30;
  code *local_28;
  TDataWriteReference<Metasound::FTrigger> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&TriggerOnValueChangeVertexNames::OutputOnChangeName);
  local_res18[0] = &this->TriggerOnChangeOutput;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_30 = local_res18[0];
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// BindInputs @ 14b1fa520

void __thiscall
Metasound::TTriggerOnValueChangeOperator<int>::BindInputs
          (TTriggerOnValueChangeOperator<int> *this,FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataReadReference<int> *local_res18 [2];
  FName *local_38;
  TDataReadReference<int> *local_30;
  code *local_28;
  TDataReadReference<int> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&TriggerOnValueChangeVertexNames::InputValueName);
  local_res18[0] = &this->ValueInput;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<int>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<int>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_30 = local_res18[0];
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14b1fa640

void __thiscall
Metasound::TTriggerOnValueChangeOperator<int>::BindOutputs
          (TTriggerOnValueChangeOperator<int> *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<Metasound::FTrigger> *local_res18 [2];
  FName *local_38;
  TDataWriteReference<Metasound::FTrigger> *local_30;
  code *local_28;
  TDataWriteReference<Metasound::FTrigger> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&TriggerOnValueChangeVertexNames::OutputOnChangeName);
  local_res18[0] = &this->TriggerOnChangeOutput;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_30 = local_res18[0];
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// TTriggerOnValueChangeOperator<int> @ 14b22f920

TTriggerOnValueChangeOperator<int> * __thiscall
Metasound::TTriggerOnValueChangeOperator<int>::TTriggerOnValueChangeOperator<int>
          (TTriggerOnValueChangeOperator<int> *this,FOperatorSettings *param_1,
          TDataReadReference<int> *param_2)

{
  longlong lVar1;
  
  this->_padding_ = (longlong)&___7__TTriggerOnValueChangeOperator_H_Metasound__6B_;
  *(undefined ***)&this->ValueInput = &___7__TDataReference_H_Metasound__6B_;
  *(undefined8 *)&(this->ValueInput).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->ValueInput).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->ValueInput = &___7__TDataReadReference_H_Metasound__6B_;
  TDataReference<Metasound::FTrigger>::
  TDataReference<Metasound::FTrigger><Metasound::FOperatorSettings_const_&>
            ((TDataReference<Metasound::FTrigger> *)&this->TriggerOnChangeOutput,NewObject,param_1);
  *(undefined ***)&this->TriggerOnChangeOutput =
       &___7__TDataWriteReference_VFTrigger_Metasound___Metasound__6B_;
  this->PrevValue = **(int **)&param_2->field_0x8;
  return this;
}

// TTriggerOnValueChangeOperator<float> @ 14b22f9b0

TTriggerOnValueChangeOperator<float> * __thiscall
Metasound::TTriggerOnValueChangeOperator<float>::TTriggerOnValueChangeOperator<float>
          (TTriggerOnValueChangeOperator<float> *this,FOperatorSettings *param_1,
          TDataReadReference<float> *param_2)

{
  longlong lVar1;
  
  this->_padding_ = (longlong)&___7__TTriggerOnValueChangeOperator_M_Metasound__6B_;
  *(undefined ***)&this->ValueInput = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)&(this->ValueInput).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->ValueInput).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->ValueInput = &___7__TDataReadReference_M_Metasound__6B_;
  TDataReference<Metasound::FTrigger>::
  TDataReference<Metasound::FTrigger><Metasound::FOperatorSettings_const_&>
            ((TDataReference<Metasound::FTrigger> *)&this->TriggerOnChangeOutput,NewObject,param_1);
  *(undefined ***)&this->TriggerOnChangeOutput =
       &___7__TDataWriteReference_VFTrigger_Metasound___Metasound__6B_;
  this->PrevValue = **(float **)&param_2->field_0x8;
  return this;
}

// TTriggerOnValueChangeOperator<bool> @ 14b22fa40

TTriggerOnValueChangeOperator<bool> * __thiscall
Metasound::TTriggerOnValueChangeOperator<bool>::TTriggerOnValueChangeOperator<bool>
          (TTriggerOnValueChangeOperator<bool> *this,FOperatorSettings *param_1,
          TDataReadReference<bool> *param_2)

{
  longlong lVar1;
  
  this->_padding_ = (longlong)&___7__TTriggerOnValueChangeOperator__N_Metasound__6B_;
  *(undefined ***)&this->ValueInput = &___7__TDataReference__N_Metasound__6B_;
  *(undefined8 *)&(this->ValueInput).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->ValueInput).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->ValueInput = &___7__TDataReadReference__N_Metasound__6B_;
  TDataReference<Metasound::FTrigger>::
  TDataReference<Metasound::FTrigger><Metasound::FOperatorSettings_const_&>
            ((TDataReference<Metasound::FTrigger> *)&this->TriggerOnChangeOutput,NewObject,param_1);
  *(undefined ***)&this->TriggerOnChangeOutput =
       &___7__TDataWriteReference_VFTrigger_Metasound___Metasound__6B_;
  this->PrevValue = (bool)**(undefined1 **)&param_2->field_0x8;
  return this;
}

// operator() @ 14b23fdd0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::TTriggerOnValueChangeOperator<int>::GetNodeInfo'::__l2::<lambda_1>::operator()
          (void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  int *piVar1;
  ITextData *pIVar2;
  TRefCountPtr<ITextData> TVar3;
  int iVar4;
  FName *pFVar5;
  FVertexInterface *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res10 [8];
  FName local_res18;
  FName local_res20;
  FText local_48;
  FText local_38;
  FNodeClassName local_28;
  
  pFVar5 = Metasound::GetMetasoundDataTypeName<int>();
  local_res18 = *pFVar5;
  ::FName::FName(&local_res20,L"Trigger On Value Change");
  FText::FText(&local_38);
  FText::FText(&local_48);
  Metasound::FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__);
  Metasound::FNodeClassName::FNodeClassName
            (&local_28,&Metasound::StandardNodes::Namespace,&local_res20,&local_res18);
  (__return_storage_ptr__->ClassName).Namespace.ComparisonIndex.Value =
       local_28.Namespace.ComparisonIndex.Value;
  (__return_storage_ptr__->ClassName).Namespace.Number = local_28.Namespace.Number;
  (__return_storage_ptr__->ClassName).Name.ComparisonIndex.Value =
       local_28.Name.ComparisonIndex.Value;
  (__return_storage_ptr__->ClassName).Name.Number = local_28.Name.Number;
  __return_storage_ptr__->MajorVersion = 1;
  __return_storage_ptr__->MinorVersion = 0;
  (__return_storage_ptr__->ClassName).Variant = local_28.Variant;
  pIVar2 = (__return_storage_ptr__->DisplayName).TextData.Reference;
  if (pIVar2 != local_38.TextData.Reference) {
    (__return_storage_ptr__->DisplayName).TextData.Reference = local_38.TextData.Reference;
    if (local_38.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_38.TextData.Reference + 8))
                (local_38.TextData.Reference,local_res10);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  (__return_storage_ptr__->DisplayName).Flags = local_38.Flags;
  pIVar2 = (__return_storage_ptr__->Description).TextData.Reference;
  if (pIVar2 != local_48.TextData.Reference) {
    (__return_storage_ptr__->Description).TextData.Reference = local_48.TextData.Reference;
    if (local_48.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_48.TextData.Reference + 8))
                (local_48.TextData.Reference,local_res10);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  (__return_storage_ptr__->Description).Flags = local_48.Flags;
  ::FString::operator=(&__return_storage_ptr__->Author,&Metasound::PluginAuthor);
  TVar3 = Metasound::PluginNodeMissingPrompt.TextData;
  pIVar2 = (__return_storage_ptr__->PromptIfMissing).TextData.Reference;
  if (pIVar2 != Metasound::PluginNodeMissingPrompt.TextData.Reference) {
    (__return_storage_ptr__->PromptIfMissing).TextData.Reference =
         Metasound::PluginNodeMissingPrompt.TextData.Reference;
    if (TVar3.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar3.Reference + 8))(TVar3.Reference,local_res10);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  (__return_storage_ptr__->PromptIfMissing).Flags = Metasound::PluginNodeMissingPrompt.Flags;
  pFVar6 = Metasound::TTriggerOnValueChangeOperator<int>::GetVertexInterface();
  Metasound::FVertexInterface::operator=(&__return_storage_ptr__->DefaultInterface,pFVar6);
  iVar4 = (__return_storage_ptr__->CategoryHierarchy).ArrayNum;
  piVar1 = &(__return_storage_ptr__->CategoryHierarchy).ArrayMax;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(__return_storage_ptr__->CategoryHierarchy).AllocatorInstance,piVar1);
  }
  pFVar7 = (__return_storage_ptr__->CategoryHierarchy).AllocatorInstance.Data;
  (__return_storage_ptr__->CategoryHierarchy).ArrayNum = iVar4 + 1;
  pFVar7 = pFVar7 + (longlong)iVar4 * 0x10;
  *(undefined8 *)pFVar7 = 0;
  TVar3 = Metasound::NodeCategories::Trigger.TextData;
  *(ITextData **)pFVar7 = Metasound::NodeCategories::Trigger.TextData.Reference;
  if (TVar3.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*TVar3.Reference + 8))(TVar3.Reference,local_res10);
  }
  *(uint *)(pFVar7 + 8) = Metasound::NodeCategories::Trigger.Flags;
  if (local_48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
  }
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// operator() @ 14b23ffc0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::TTriggerOnValueChangeOperator<float>::GetNodeInfo'::__l2::<lambda_1>::operator()
          (void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  int *piVar1;
  ITextData *pIVar2;
  TRefCountPtr<ITextData> TVar3;
  int iVar4;
  FName *pFVar5;
  FVertexInterface *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res10 [8];
  FName local_res18;
  FName local_res20;
  FText local_48;
  FText local_38;
  FNodeClassName local_28;
  
  pFVar5 = Metasound::GetMetasoundDataTypeName<float>();
  local_res18 = *pFVar5;
  ::FName::FName(&local_res20,L"Trigger On Value Change");
  FText::FText(&local_38);
  FText::FText(&local_48);
  Metasound::FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__);
  Metasound::FNodeClassName::FNodeClassName
            (&local_28,&Metasound::StandardNodes::Namespace,&local_res20,&local_res18);
  (__return_storage_ptr__->ClassName).Namespace.ComparisonIndex.Value =
       local_28.Namespace.ComparisonIndex.Value;
  (__return_storage_ptr__->ClassName).Namespace.Number = local_28.Namespace.Number;
  (__return_storage_ptr__->ClassName).Name.ComparisonIndex.Value =
       local_28.Name.ComparisonIndex.Value;
  (__return_storage_ptr__->ClassName).Name.Number = local_28.Name.Number;
  __return_storage_ptr__->MajorVersion = 1;
  __return_storage_ptr__->MinorVersion = 0;
  (__return_storage_ptr__->ClassName).Variant = local_28.Variant;
  pIVar2 = (__return_storage_ptr__->DisplayName).TextData.Reference;
  if (pIVar2 != local_38.TextData.Reference) {
    (__return_storage_ptr__->DisplayName).TextData.Reference = local_38.TextData.Reference;
    if (local_38.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_38.TextData.Reference + 8))
                (local_38.TextData.Reference,local_res10);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  (__return_storage_ptr__->DisplayName).Flags = local_38.Flags;
  pIVar2 = (__return_storage_ptr__->Description).TextData.Reference;
  if (pIVar2 != local_48.TextData.Reference) {
    (__return_storage_ptr__->Description).TextData.Reference = local_48.TextData.Reference;
    if (local_48.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_48.TextData.Reference + 8))
                (local_48.TextData.Reference,local_res10);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  (__return_storage_ptr__->Description).Flags = local_48.Flags;
  ::FString::operator=(&__return_storage_ptr__->Author,&Metasound::PluginAuthor);
  TVar3 = Metasound::PluginNodeMissingPrompt.TextData;
  pIVar2 = (__return_storage_ptr__->PromptIfMissing).TextData.Reference;
  if (pIVar2 != Metasound::PluginNodeMissingPrompt.TextData.Reference) {
    (__return_storage_ptr__->PromptIfMissing).TextData.Reference =
         Metasound::PluginNodeMissingPrompt.TextData.Reference;
    if (TVar3.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar3.Reference + 8))(TVar3.Reference,local_res10);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  (__return_storage_ptr__->PromptIfMissing).Flags = Metasound::PluginNodeMissingPrompt.Flags;
  pFVar6 = Metasound::TTriggerOnValueChangeOperator<float>::GetVertexInterface();
  Metasound::FVertexInterface::operator=(&__return_storage_ptr__->DefaultInterface,pFVar6);
  iVar4 = (__return_storage_ptr__->CategoryHierarchy).ArrayNum;
  piVar1 = &(__return_storage_ptr__->CategoryHierarchy).ArrayMax;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(__return_storage_ptr__->CategoryHierarchy).AllocatorInstance,piVar1);
  }
  pFVar7 = (__return_storage_ptr__->CategoryHierarchy).AllocatorInstance.Data;
  (__return_storage_ptr__->CategoryHierarchy).ArrayNum = iVar4 + 1;
  pFVar7 = pFVar7 + (longlong)iVar4 * 0x10;
  *(undefined8 *)pFVar7 = 0;
  TVar3 = Metasound::NodeCategories::Trigger.TextData;
  *(ITextData **)pFVar7 = Metasound::NodeCategories::Trigger.TextData.Reference;
  if (TVar3.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*TVar3.Reference + 8))(TVar3.Reference,local_res10);
  }
  *(uint *)(pFVar7 + 8) = Metasound::NodeCategories::Trigger.Flags;
  if (local_48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
  }
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// operator() @ 14b2401b0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::TTriggerOnValueChangeOperator<bool>::GetNodeInfo'::__l2::<lambda_1>::operator()
          (void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  int *piVar1;
  ITextData *pIVar2;
  TRefCountPtr<ITextData> TVar3;
  int iVar4;
  FName *pFVar5;
  FVertexInterface *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res10 [8];
  FName local_res18;
  FName local_res20;
  FText local_48;
  FText local_38;
  FNodeClassName local_28;
  
  pFVar5 = Metasound::GetMetasoundDataTypeName<bool>();
  local_res18 = *pFVar5;
  ::FName::FName(&local_res20,L"Trigger On Value Change");
  FText::FText(&local_38);
  FText::FText(&local_48);
  Metasound::FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__);
  Metasound::FNodeClassName::FNodeClassName
            (&local_28,&Metasound::StandardNodes::Namespace,&local_res20,&local_res18);
  (__return_storage_ptr__->ClassName).Namespace.ComparisonIndex.Value =
       local_28.Namespace.ComparisonIndex.Value;
  (__return_storage_ptr__->ClassName).Namespace.Number = local_28.Namespace.Number;
  (__return_storage_ptr__->ClassName).Name.ComparisonIndex.Value =
       local_28.Name.ComparisonIndex.Value;
  (__return_storage_ptr__->ClassName).Name.Number = local_28.Name.Number;
  __return_storage_ptr__->MajorVersion = 1;
  __return_storage_ptr__->MinorVersion = 0;
  (__return_storage_ptr__->ClassName).Variant = local_28.Variant;
  pIVar2 = (__return_storage_ptr__->DisplayName).TextData.Reference;
  if (pIVar2 != local_38.TextData.Reference) {
    (__return_storage_ptr__->DisplayName).TextData.Reference = local_38.TextData.Reference;
    if (local_38.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_38.TextData.Reference + 8))
                (local_38.TextData.Reference,local_res10);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  (__return_storage_ptr__->DisplayName).Flags = local_38.Flags;
  pIVar2 = (__return_storage_ptr__->Description).TextData.Reference;
  if (pIVar2 != local_48.TextData.Reference) {
    (__return_storage_ptr__->Description).TextData.Reference = local_48.TextData.Reference;
    if (local_48.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_48.TextData.Reference + 8))
                (local_48.TextData.Reference,local_res10);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  (__return_storage_ptr__->Description).Flags = local_48.Flags;
  ::FString::operator=(&__return_storage_ptr__->Author,&Metasound::PluginAuthor);
  TVar3 = Metasound::PluginNodeMissingPrompt.TextData;
  pIVar2 = (__return_storage_ptr__->PromptIfMissing).TextData.Reference;
  if (pIVar2 != Metasound::PluginNodeMissingPrompt.TextData.Reference) {
    (__return_storage_ptr__->PromptIfMissing).TextData.Reference =
         Metasound::PluginNodeMissingPrompt.TextData.Reference;
    if (TVar3.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar3.Reference + 8))(TVar3.Reference,local_res10);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  (__return_storage_ptr__->PromptIfMissing).Flags = Metasound::PluginNodeMissingPrompt.Flags;
  pFVar6 = Metasound::TTriggerOnValueChangeOperator<bool>::GetVertexInterface();
  Metasound::FVertexInterface::operator=(&__return_storage_ptr__->DefaultInterface,pFVar6);
  iVar4 = (__return_storage_ptr__->CategoryHierarchy).ArrayNum;
  piVar1 = &(__return_storage_ptr__->CategoryHierarchy).ArrayMax;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(__return_storage_ptr__->CategoryHierarchy).AllocatorInstance,piVar1);
  }
  pFVar7 = (__return_storage_ptr__->CategoryHierarchy).AllocatorInstance.Data;
  (__return_storage_ptr__->CategoryHierarchy).ArrayNum = iVar4 + 1;
  pFVar7 = pFVar7 + (longlong)iVar4 * 0x10;
  *(undefined8 *)pFVar7 = 0;
  TVar3 = Metasound::NodeCategories::Trigger.TextData;
  *(ITextData **)pFVar7 = Metasound::NodeCategories::Trigger.TextData.Reference;
  if (TVar3.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*TVar3.Reference + 8))(TVar3.Reference,local_res10);
  }
  *(uint *)(pFVar7 + 8) = Metasound::NodeCategories::Trigger.Flags;
  if (local_48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
  }
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// CreateOperator @ 14b25adb0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::TTriggerOnValueChangeOperator<int>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar1;
  INode *pIVar2;
  FName local_res8;
  undefined1 local_38 [16];
  INode local_28;
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&TriggerOnValueChangeVertexNames::InputValueName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<int>
            (this,(TDataReadReference<int> *)local_38,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  pIVar2 = ::operator_new(0x50);
  if (pIVar2 == (INode *)0x0) {
    pIVar2 = (INode *)0x0;
  }
  else {
    *pIVar2 = (INode)&___7__TTriggerOnValueChangeOperator_H_Metasound__6B_;
    pIVar2[1] = (INode)&___7__TDataReference_H_Metasound__6B_;
    pIVar2[2] = (INode)local_38._8_8_;
    pIVar2[3] = local_28;
    if (local_28 != (INode)0x0) {
      *(int *)((longlong)local_28 + 8) = *(int *)((longlong)local_28 + 8) + 1;
    }
    pIVar2[1] = (INode)&___7__TDataReadReference_H_Metasound__6B_;
    TDataReference<Metasound::FTrigger>::
    TDataReference<Metasound::FTrigger><Metasound::FOperatorSettings_const_&>
              ((TDataReference<Metasound::FTrigger> *)(pIVar2 + 5),NewObject,pFVar1);
    pIVar2[5] = (INode)&___7__TDataWriteReference_VFTrigger_Metasound___Metasound__6B_;
    *(undefined4 *)(pIVar2 + 9) = *(undefined4 *)local_38._8_8_;
  }
  param_1->Node = pIVar2;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_28);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b25aea0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::TTriggerOnValueChangeOperator<float>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar1;
  INode *pIVar2;
  FName local_res8;
  undefined1 local_38 [16];
  INode local_28;
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&TriggerOnValueChangeVertexNames::InputValueName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this,(TDataReadReference<float> *)local_38,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  pIVar2 = ::operator_new(0x50);
  if (pIVar2 == (INode *)0x0) {
    pIVar2 = (INode *)0x0;
  }
  else {
    *pIVar2 = (INode)&___7__TTriggerOnValueChangeOperator_M_Metasound__6B_;
    pIVar2[1] = (INode)&___7__TDataReference_M_Metasound__6B_;
    pIVar2[2] = (INode)local_38._8_8_;
    pIVar2[3] = local_28;
    if (local_28 != (INode)0x0) {
      *(int *)((longlong)local_28 + 8) = *(int *)((longlong)local_28 + 8) + 1;
    }
    pIVar2[1] = (INode)&___7__TDataReadReference_M_Metasound__6B_;
    TDataReference<Metasound::FTrigger>::
    TDataReference<Metasound::FTrigger><Metasound::FOperatorSettings_const_&>
              ((TDataReference<Metasound::FTrigger> *)(pIVar2 + 5),NewObject,pFVar1);
    pIVar2[5] = (INode)&___7__TDataWriteReference_VFTrigger_Metasound___Metasound__6B_;
    *(undefined4 *)(pIVar2 + 9) = *(undefined4 *)local_38._8_8_;
  }
  param_1->Node = pIVar2;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_28);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b25af90

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::TTriggerOnValueChangeOperator<bool>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar1;
  INode *pIVar2;
  FName local_res8;
  undefined1 local_38 [16];
  INode local_28;
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&TriggerOnValueChangeVertexNames::InputValueName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<bool>
            (this,(TDataReadReference<bool> *)local_38,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  pIVar2 = ::operator_new(0x50);
  if (pIVar2 == (INode *)0x0) {
    pIVar2 = (INode *)0x0;
  }
  else {
    *pIVar2 = (INode)&___7__TTriggerOnValueChangeOperator__N_Metasound__6B_;
    pIVar2[1] = (INode)&___7__TDataReference__N_Metasound__6B_;
    pIVar2[2] = (INode)local_38._8_8_;
    pIVar2[3] = local_28;
    if (local_28 != (INode)0x0) {
      *(int *)((longlong)local_28 + 8) = *(int *)((longlong)local_28 + 8) + 1;
    }
    pIVar2[1] = (INode)&___7__TDataReadReference__N_Metasound__6B_;
    TDataReference<Metasound::FTrigger>::
    TDataReference<Metasound::FTrigger><Metasound::FOperatorSettings_const_&>
              ((TDataReference<Metasound::FTrigger> *)(pIVar2 + 5),NewObject,pFVar1);
    pIVar2[5] = (INode)&___7__TDataWriteReference_VFTrigger_Metasound___Metasound__6B_;
    *(undefined1 *)(pIVar2 + 9) = *(undefined1 *)local_38._8_8_;
  }
  param_1->Node = pIVar2;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_28);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// Execute @ 14b2717a0

void __thiscall
Metasound::TTriggerOnValueChangeOperator<int>::Execute(TTriggerOnValueChangeOperator<int> *this)

{
  int iVar1;
  
  FTrigger::AdvanceBlock(*(FTrigger **)&(this->TriggerOnChangeOutput).field_0x8);
  iVar1 = **(int **)&(this->ValueInput).field_0x8;
  if (iVar1 != this->PrevValue) {
    this->PrevValue = iVar1;
    FTrigger::TriggerFrame(*(FTrigger **)&(this->TriggerOnChangeOutput).field_0x8,0);
    return;
  }
  return;
}

// Execute @ 14b2717e0

void __thiscall
Metasound::TTriggerOnValueChangeOperator<float>::Execute(TTriggerOnValueChangeOperator<float> *this)

{
  float fVar1;
  FTrigger *this_00;
  
  FTrigger::AdvanceBlock(*(FTrigger **)&(this->TriggerOnChangeOutput).field_0x8);
  fVar1 = **(float **)&(this->ValueInput).field_0x8;
  if (__real_322bcc77 <
      (float)((uint)(fVar1 - this->PrevValue) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    this_00 = *(FTrigger **)&(this->TriggerOnChangeOutput).field_0x8;
    this->PrevValue = fVar1;
    FTrigger::TriggerFrame(this_00,0);
    return;
  }
  return;
}

// Execute @ 14b271840

void __thiscall
Metasound::TTriggerOnValueChangeOperator<bool>::Execute(TTriggerOnValueChangeOperator<bool> *this)

{
  bool bVar1;
  
  FTrigger::AdvanceBlock(*(FTrigger **)&(this->TriggerOnChangeOutput).field_0x8);
  bVar1 = (bool)**(char **)&(this->ValueInput).field_0x8;
  if (bVar1 != this->PrevValue) {
    this->PrevValue = bVar1;
    FTrigger::TriggerFrame(*(FTrigger **)&(this->TriggerOnChangeOutput).field_0x8,0);
    return;
  }
  return;
}

// GetNodeInfo @ 14b27d000

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl Metasound::TTriggerOnValueChangeOperator<int>::GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerOnValueChangeOperator<int>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerOnValueChangeOperator<int>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerOnValueChangeOperator<int>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::TTriggerOnValueChangeOperator<int>::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerOnValueChangeOperator<int>::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::TTriggerOnValueChangeOperator<int>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerOnValueChangeOperator<int>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerOnValueChangeOperator<int>::GetNodeInfo(void)'
              ::__l2::Info;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerOnValueChangeOperator<int>::GetNodeInfo(void)'
          ::__l2::Info;
}

// GetNodeInfo @ 14b27d090

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl Metasound::TTriggerOnValueChangeOperator<float>::GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerOnValueChangeOperator<float>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerOnValueChangeOperator<float>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerOnValueChangeOperator<float>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::TTriggerOnValueChangeOperator<float>::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerOnValueChangeOperator<float>::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::TTriggerOnValueChangeOperator<float>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerOnValueChangeOperator<float>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerOnValueChangeOperator<float>::GetNodeInfo(void)'
              ::__l2::Info;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerOnValueChangeOperator<float>::GetNodeInfo(void)'
          ::__l2::Info;
}

// GetNodeInfo @ 14b27d120

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl Metasound::TTriggerOnValueChangeOperator<bool>::GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerOnValueChangeOperator<bool>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerOnValueChangeOperator<bool>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerOnValueChangeOperator<bool>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::TTriggerOnValueChangeOperator<bool>::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerOnValueChangeOperator<bool>::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::TTriggerOnValueChangeOperator<bool>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerOnValueChangeOperator<bool>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerOnValueChangeOperator<bool>::GetNodeInfo(void)'
              ::__l2::Info;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerOnValueChangeOperator<bool>::GetNodeInfo(void)'
          ::__l2::Info;
}

// GetVertexInterface @ 14b284640

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl Metasound::TTriggerOnValueChangeOperator<int>::GetVertexInterface(void)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::FTrigger> *pTVar3;
  FInputDataVertex *pFVar4;
  FVertexInterface *pFVar5;
  undefined1 auStackY_138 [32];
  int local_108 [2];
  FInputVertexInterface local_100;
  FOutputVertexInterface local_e0;
  FOutputVertexInterfaceDeclarationBuilder local_c0;
  FInputVertexInterfaceDeclarationBuilder local_98;
  TOutputDataVertex<Metasound::FTrigger> local_70;
  TInputDataVertex<int> local_50;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_138;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerOnValueChangeOperator<int>::GetVertexInterface(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerOnValueChangeOperator<int>::GetVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerOnValueChangeOperator<int>::GetVertexInterface(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    pTVar3 = TOutputDataVertex<Metasound::FTrigger>::TOutputDataVertex<Metasound::FTrigger><>
                       (&local_70,&TriggerOnValueChangeVertexNames::OutputOnChangeName,
                        &FDataVertexMetadata::EmptyBasic);
    FOutputVertexInterface::FOutputVertexInterface(&local_e0);
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::
    FOutputVertexInterfaceDeclarationBuilder
              (&local_c0,
               (TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *)&local_e0,
               &local_e0.SubInterfaces);
    if ((local_c0.Vertices)->ArrayMax < 1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,1,&(local_c0.Vertices)->AllocatorInstance,(local_c0.Vertices)->ArrayNum,
                 &(local_c0.Vertices)->ArrayMax);
    }
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
              (&local_c0,(FOutputDataVertex *)pTVar3);
    VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
              ((FSubInterfaceDeclarationBuilder *)&local_c0);
    local_108[0] = 1;
    pFVar4 = (FInputDataVertex *)
             TInputDataVertex<int>::TInputDataVertex<int><int>
                       (&local_50,&TriggerOnValueChangeVertexNames::InputValueName,
                        &FDataVertexMetadata::EmptyBasic,local_108);
    local_100._padding_ = 0;
    local_100._padding_ = 0;
    local_100.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_100.SubInterfaces.ArrayNum = 0;
    local_100.SubInterfaces.ArrayMax = 0;
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::FInputVertexInterfaceDeclarationBuilder
              (&local_98,
               (TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)&local_100,
               &local_100.SubInterfaces);
    if ((local_98.Vertices)->ArrayMax < 1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,1,&(local_98.Vertices)->AllocatorInstance,(local_98.Vertices)->ArrayNum,
                 &(local_98.Vertices)->ArrayMax);
    }
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_98,pFVar4);
    VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
              ((FSubInterfaceDeclarationBuilder *)&local_98);
    FVertexInterface::FVertexInterface
              (&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerOnValueChangeOperator<int>::GetVertexInterface(void)'
                ::__l2::Interface,&local_100,&local_e0);
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_100.SubInterfaces.AllocatorInstance.Data,
               local_100.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_100.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_100.SubInterfaces.AllocatorInstance.Data);
    }
    DestructItems<Metasound::FInputDataVertex,int>
              ((FInputDataVertex *)local_100._padding_,(int)local_100._padding_);
    if ((FInputDataVertex *)local_100._padding_ != (FInputDataVertex *)0x0) {
      FMemory::Free((void *)local_100._padding_);
    }
    if ((0xc < (byte)local_50._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FVertexInterface *)(*pcVar1)();
      return pFVar5;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_50._48_1_])(&local_50.field_0x20);
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_e0.SubInterfaces.AllocatorInstance.Data,
               local_e0.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_e0.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_e0.SubInterfaces.AllocatorInstance.Data);
    }
    if ((void *)local_e0._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_e0._padding_);
    }
    atexit(`Metasound::TTriggerOnValueChangeOperator<int>::GetVertexInterface'::__l2::
           _dynamic_atexit_destructor_for__Interface__);
    _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerOnValueChangeOperator<int>::GetVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  return &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerOnValueChangeOperator<int>::GetVertexInterface(void)'
          ::__l2::Interface;
}

// GetVertexInterface @ 14b2848d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl Metasound::TTriggerOnValueChangeOperator<float>::GetVertexInterface(void)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::FTrigger> *pTVar3;
  FInputDataVertex *pFVar4;
  FVertexInterface *pFVar5;
  undefined1 auStackY_138 [32];
  float local_108 [2];
  FInputVertexInterface local_100;
  FOutputVertexInterface local_e0;
  FOutputVertexInterfaceDeclarationBuilder local_c0;
  FInputVertexInterfaceDeclarationBuilder local_98;
  TOutputDataVertex<Metasound::FTrigger> local_70;
  TInputDataVertex<float> local_50;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_138;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerOnValueChangeOperator<float>::GetVertexInterface(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerOnValueChangeOperator<float>::GetVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerOnValueChangeOperator<float>::GetVertexInterface(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    pTVar3 = TOutputDataVertex<Metasound::FTrigger>::TOutputDataVertex<Metasound::FTrigger><>
                       (&local_70,&TriggerOnValueChangeVertexNames::OutputOnChangeName,
                        &FDataVertexMetadata::EmptyBasic);
    FOutputVertexInterface::FOutputVertexInterface(&local_e0);
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::
    FOutputVertexInterfaceDeclarationBuilder
              (&local_c0,
               (TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *)&local_e0,
               &local_e0.SubInterfaces);
    if ((local_c0.Vertices)->ArrayMax < 1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,1,&(local_c0.Vertices)->AllocatorInstance,(local_c0.Vertices)->ArrayNum,
                 &(local_c0.Vertices)->ArrayMax);
    }
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
              (&local_c0,(FOutputDataVertex *)pTVar3);
    VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
              ((FSubInterfaceDeclarationBuilder *)&local_c0);
    local_108[0] = 1.0;
    pFVar4 = (FInputDataVertex *)
             TInputDataVertex<float>::TInputDataVertex<float><float>
                       (&local_50,&TriggerOnValueChangeVertexNames::InputValueName,
                        &FDataVertexMetadata::EmptyBasic,local_108);
    local_100._padding_ = 0;
    local_100._padding_ = 0;
    local_100.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_100.SubInterfaces.ArrayNum = 0;
    local_100.SubInterfaces.ArrayMax = 0;
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::FInputVertexInterfaceDeclarationBuilder
              (&local_98,
               (TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)&local_100,
               &local_100.SubInterfaces);
    if ((local_98.Vertices)->ArrayMax < 1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,1,&(local_98.Vertices)->AllocatorInstance,(local_98.Vertices)->ArrayNum,
                 &(local_98.Vertices)->ArrayMax);
    }
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_98,pFVar4);
    VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
              ((FSubInterfaceDeclarationBuilder *)&local_98);
    FVertexInterface::FVertexInterface
              (&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerOnValueChangeOperator<float>::GetVertexInterface(void)'
                ::__l2::Interface,&local_100,&local_e0);
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_100.SubInterfaces.AllocatorInstance.Data,
               local_100.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_100.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_100.SubInterfaces.AllocatorInstance.Data);
    }
    DestructItems<Metasound::FInputDataVertex,int>
              ((FInputDataVertex *)local_100._padding_,(int)local_100._padding_);
    if ((FInputDataVertex *)local_100._padding_ != (FInputDataVertex *)0x0) {
      FMemory::Free((void *)local_100._padding_);
    }
    if ((0xc < (byte)local_50._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FVertexInterface *)(*pcVar1)();
      return pFVar5;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_50._48_1_])(&local_50.field_0x20);
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_e0.SubInterfaces.AllocatorInstance.Data,
               local_e0.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_e0.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_e0.SubInterfaces.AllocatorInstance.Data);
    }
    if ((void *)local_e0._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_e0._padding_);
    }
    atexit(`Metasound::TTriggerOnValueChangeOperator<float>::GetVertexInterface'::__l2::
           _dynamic_atexit_destructor_for__Interface__);
    _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerOnValueChangeOperator<float>::GetVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  return &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerOnValueChangeOperator<float>::GetVertexInterface(void)'
          ::__l2::Interface;
}

// GetVertexInterface @ 14b284b60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl Metasound::TTriggerOnValueChangeOperator<bool>::GetVertexInterface(void)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::FTrigger> *pTVar3;
  FInputDataVertex *pFVar4;
  FVertexInterface *pFVar5;
  undefined1 auStackY_138 [32];
  bool local_108 [8];
  FInputVertexInterface local_100;
  FOutputVertexInterface local_e0;
  FOutputVertexInterfaceDeclarationBuilder local_c0;
  FInputVertexInterfaceDeclarationBuilder local_98;
  TOutputDataVertex<Metasound::FTrigger> local_70;
  TInputDataVertex<bool> local_50;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_138;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerOnValueChangeOperator<bool>::GetVertexInterface(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerOnValueChangeOperator<bool>::GetVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerOnValueChangeOperator<bool>::GetVertexInterface(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    pTVar3 = TOutputDataVertex<Metasound::FTrigger>::TOutputDataVertex<Metasound::FTrigger><>
                       (&local_70,&TriggerOnValueChangeVertexNames::OutputOnChangeName,
                        &FDataVertexMetadata::EmptyBasic);
    FOutputVertexInterface::FOutputVertexInterface(&local_e0);
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::
    FOutputVertexInterfaceDeclarationBuilder
              (&local_c0,
               (TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *)&local_e0,
               &local_e0.SubInterfaces);
    if ((local_c0.Vertices)->ArrayMax < 1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,1,&(local_c0.Vertices)->AllocatorInstance,(local_c0.Vertices)->ArrayNum,
                 &(local_c0.Vertices)->ArrayMax);
    }
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
              (&local_c0,(FOutputDataVertex *)pTVar3);
    VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
              ((FSubInterfaceDeclarationBuilder *)&local_c0);
    local_108[0] = true;
    pFVar4 = (FInputDataVertex *)
             TInputDataVertex<bool>::TInputDataVertex<bool><bool>
                       (&local_50,&TriggerOnValueChangeVertexNames::InputValueName,
                        &FDataVertexMetadata::EmptyBasic,local_108);
    local_100._padding_ = 0;
    local_100._padding_ = 0;
    local_100.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_100.SubInterfaces.ArrayNum = 0;
    local_100.SubInterfaces.ArrayMax = 0;
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::FInputVertexInterfaceDeclarationBuilder
              (&local_98,
               (TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)&local_100,
               &local_100.SubInterfaces);
    if ((local_98.Vertices)->ArrayMax < 1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,1,&(local_98.Vertices)->AllocatorInstance,(local_98.Vertices)->ArrayNum,
                 &(local_98.Vertices)->ArrayMax);
    }
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_98,pFVar4);
    VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
              ((FSubInterfaceDeclarationBuilder *)&local_98);
    FVertexInterface::FVertexInterface
              (&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerOnValueChangeOperator<bool>::GetVertexInterface(void)'
                ::__l2::Interface,&local_100,&local_e0);
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_100.SubInterfaces.AllocatorInstance.Data,
               local_100.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_100.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_100.SubInterfaces.AllocatorInstance.Data);
    }
    DestructItems<Metasound::FInputDataVertex,int>
              ((FInputDataVertex *)local_100._padding_,(int)local_100._padding_);
    if ((FInputDataVertex *)local_100._padding_ != (FInputDataVertex *)0x0) {
      FMemory::Free((void *)local_100._padding_);
    }
    if ((0xc < (byte)local_50._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FVertexInterface *)(*pcVar1)();
      return pFVar5;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_50._48_1_])(&local_50.field_0x20);
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_e0.SubInterfaces.AllocatorInstance.Data,
               local_e0.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_e0.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_e0.SubInterfaces.AllocatorInstance.Data);
    }
    if ((void *)local_e0._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_e0._padding_);
    }
    atexit(`Metasound::TTriggerOnValueChangeOperator<bool>::GetVertexInterface'::__l2::
           _dynamic_atexit_destructor_for__Interface__);
    _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerOnValueChangeOperator<bool>::GetVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  return &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerOnValueChangeOperator<bool>::GetVertexInterface(void)'
          ::__l2::Interface;
}

// Reset @ 14b28a7c0

void __thiscall
Metasound::TTriggerOnValueChangeOperator<int>::Reset
          (TTriggerOnValueChangeOperator<int> *this,FResetParams *param_1)

{
  FTrigger::Reset(*(FTrigger **)&(this->TriggerOnChangeOutput).field_0x8);
  this->PrevValue = **(int **)&(this->ValueInput).field_0x8;
  return;
}

// Reset @ 14b28a7f0

void __thiscall
Metasound::TTriggerOnValueChangeOperator<float>::Reset
          (TTriggerOnValueChangeOperator<float> *this,FResetParams *param_1)

{
  FTrigger::Reset(*(FTrigger **)&(this->TriggerOnChangeOutput).field_0x8);
  this->PrevValue = **(float **)&(this->ValueInput).field_0x8;
  return;
}

// Reset @ 14b28a820

void __thiscall
Metasound::TTriggerOnValueChangeOperator<bool>::Reset
          (TTriggerOnValueChangeOperator<bool> *this,FResetParams *param_1)

{
  FTrigger::Reset(*(FTrigger **)&(this->TriggerOnChangeOutput).field_0x8);
  this->PrevValue = (bool)**(undefined1 **)&(this->ValueInput).field_0x8;
  return;
}

