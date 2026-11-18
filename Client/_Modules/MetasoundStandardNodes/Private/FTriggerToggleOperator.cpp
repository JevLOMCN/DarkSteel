// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 9

// FTriggerToggleOperator @ 14b234980

FTriggerToggleOperator * __thiscall
Metasound::FTriggerToggleOperator::FTriggerToggleOperator
          (FTriggerToggleOperator *this,FOperatorSettings *param_1,
          TDataReadReference<Metasound::FTrigger> *param_2,
          TDataReadReference<Metasound::FTrigger> *param_3,TDataReadReference<bool> *param_4)

{
  longlong lVar1;
  
  this->_padding_ = (longlong)&___7FTriggerToggleOperator_Metasound__6B_;
  *(undefined ***)&this->TriggerOn = &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->TriggerOn).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->TriggerOn).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->TriggerOn = &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined ***)&this->TriggerOff = &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->TriggerOff).field_0x8 = *(undefined8 *)&param_3->field_0x8;
  lVar1 = *(longlong *)&param_3->field_0x10;
  *(longlong *)&(this->TriggerOff).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->TriggerOff = &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_
  ;
  *(undefined ***)&this->InitValue = &___7__TDataReference__N_Metasound__6B_;
  *(undefined8 *)&(this->InitValue).field_0x8 = *(undefined8 *)&param_4->field_0x8;
  lVar1 = *(longlong *)&param_4->field_0x10;
  *(longlong *)&(this->InitValue).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->InitValue = &___7__TDataReadReference__N_Metasound__6B_;
  TDataReference<Metasound::FTrigger>::
  TDataReference<Metasound::FTrigger><Metasound::FOperatorSettings_const_&>
            ((TDataReference<Metasound::FTrigger> *)&this->TriggerOutput,NewObject,param_1);
  *(undefined ***)&this->TriggerOutput =
       &___7__TDataWriteReference_VFTrigger_Metasound___Metasound__6B_;
  TDataReference<bool>::TDataReference<bool><bool_const_&>
            ((TDataReference<bool> *)&this->ValueOutput,NewObject,*(bool **)&param_4->field_0x8);
  *(undefined ***)&this->ValueOutput = &___7__TDataWriteReference__N_Metasound__6B_;
  return this;
}

// operator() @ 14b243380

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::FTriggerToggleOperator::GetNodeInfo'::__l2::<lambda_1>::operator()
          (void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  int *piVar1;
  ITextData *pIVar2;
  TRefCountPtr<ITextData> TVar3;
  int iVar4;
  FText *pFVar5;
  FVertexInterface *pFVar6;
  FScriptContainerElement *pFVar7;
  FName local_res10;
  FName local_res18 [2];
  FNodeClassName local_28;
  
  Metasound::FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__);
  ::FName::FName(local_res18,L"Trigger Toggle");
  ::FName::FName(&local_res10,L"");
  Metasound::FNodeClassName::FNodeClassName
            (&local_28,&Metasound::StandardNodes::Namespace,local_res18,&local_res10);
  __return_storage_ptr__->MajorVersion = 1;
  __return_storage_ptr__->MinorVersion = 0;
  (__return_storage_ptr__->ClassName).Namespace = local_28.Namespace;
  (__return_storage_ptr__->ClassName).Name = local_28.Name;
  (__return_storage_ptr__->ClassName).Variant = local_28.Variant;
  pFVar5 = FText::FText((FText *)&local_28);
  FText::operator=(&__return_storage_ptr__->DisplayName,pFVar5);
  if (local_28.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_28.Namespace + 0x10))();
  }
  pFVar5 = FText::FText((FText *)&local_28);
  FText::operator=(&__return_storage_ptr__->Description,pFVar5);
  if (local_28.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_28.Namespace + 0x10))();
  }
  ::FString::operator=(&__return_storage_ptr__->Author,&Metasound::PluginAuthor);
  TVar3 = Metasound::PluginNodeMissingPrompt.TextData;
  pIVar2 = (__return_storage_ptr__->PromptIfMissing).TextData.Reference;
  if (pIVar2 != Metasound::PluginNodeMissingPrompt.TextData.Reference) {
    (__return_storage_ptr__->PromptIfMissing).TextData.Reference =
         Metasound::PluginNodeMissingPrompt.TextData.Reference;
    if (TVar3.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar3.Reference + 8))(TVar3.Reference,&local_res10);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  (__return_storage_ptr__->PromptIfMissing).Flags = Metasound::PluginNodeMissingPrompt.Flags;
  pFVar6 = Metasound::FTriggerToggleOperator::GetVertexInterface();
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
    (**(code **)((longlong)*TVar3.Reference + 8))(TVar3.Reference,&local_res10);
  }
  *(uint *)(pFVar7 + 8) = Metasound::NodeCategories::Trigger.Flags;
  return __return_storage_ptr__;
}

// BindInputs @ 14b249960

void __thiscall
Metasound::FTriggerToggleOperator::BindInputs
          (FTriggerToggleOperator *this,FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataReadReference<Metasound::FTrigger> *local_res18;
  undefined1 local_48 [16];
  code *local_38;
  TDataReadReference<Metasound::FTrigger> **local_30;
  undefined1 local_28 [16];
  
  FLazyName::Resolve(&TriggerToggle::InputOnTriggerName);
  local_res18 = &this->TriggerOn;
  local_30 = &local_res18;
  local_48._0_8_ = &local_res8;
  local_28._8_8_ = local_48;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_28._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_48._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_28,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_38)
  ;
  FLazyName::Resolve(&TriggerToggle::InputOffTriggerName);
  local_res18 = &this->TriggerOff;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_30 = &local_res18;
  local_28._0_8_ = &local_res8;
  local_48._8_8_ = local_28;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_28._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_38)
  ;
  FLazyName::Resolve(&TriggerToggle::InputInitName);
  local_res18 = (TDataReadReference<Metasound::FTrigger> *)&this->InitValue;
  local_30 = &local_res18;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<bool>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_48._8_8_ = local_28;
  local_28._0_8_ = &local_res8;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<bool>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_28._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_38)
  ;
  return;
}

// BindOutputs @ 14b24a310

void __thiscall
Metasound::FTriggerToggleOperator::BindOutputs
          (FTriggerToggleOperator *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<Metasound::FTrigger> *local_res18;
  undefined1 local_38 [16];
  code *local_28;
  TDataWriteReference<Metasound::FTrigger> **local_20;
  undefined1 local_18 [16];
  
  FLazyName::Resolve(&TriggerToggle::OutputTriggerName);
  local_res18 = &this->TriggerOutput;
  local_20 = &local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_18._8_8_ = local_38;
  local_38._0_8_ = &local_res8;
  local_18._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FOutputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  FLazyName::Resolve(&TriggerToggle::OutputValueName);
  local_res18 = (TDataWriteReference<Metasound::FTrigger> *)&this->ValueOutput;
  local_20 = &local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<bool>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38._8_8_ = local_18;
  local_18._0_8_ = &local_res8;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<bool>_>,Metasound::VertexDataPrivate::FOutputBinding>
       ::Call;
  local_18._8_8_ = local_res18;
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)local_38,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// CreateOperator @ 14b26be10

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::FTriggerToggleOperator::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar1;
  INode *pIVar2;
  FName local_res8;
  undefined1 local_88 [16];
  INode local_78;
  undefined1 local_68 [16];
  INode local_58;
  undefined1 local_48 [16];
  INode local_38;
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&TriggerToggle::InputOnTriggerName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTrigger>
            (this,(TDataReadReference<Metasound::FTrigger> *)local_88,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&TriggerToggle::InputOffTriggerName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTrigger>
            (this,(TDataReadReference<Metasound::FTrigger> *)local_68,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&TriggerToggle::InputInitName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<bool>
            (this,(TDataReadReference<bool> *)local_48,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  pIVar2 = ::operator_new(0xa8);
  if (pIVar2 == (INode *)0x0) {
    pIVar2 = (INode *)0x0;
  }
  else {
    *pIVar2 = (INode)&___7FTriggerToggleOperator_Metasound__6B_;
    pIVar2[1] = (INode)&___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
    pIVar2[2] = (INode)local_88._8_8_;
    pIVar2[3] = local_78;
    if (local_78 != (INode)0x0) {
      *(int *)((longlong)local_78 + 8) = *(int *)((longlong)local_78 + 8) + 1;
    }
    pIVar2[1] = (INode)&___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
    pIVar2[5] = (INode)&___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
    pIVar2[6] = (INode)local_68._8_8_;
    pIVar2[7] = local_58;
    if (local_58 != (INode)0x0) {
      *(int *)((longlong)local_58 + 8) = *(int *)((longlong)local_58 + 8) + 1;
    }
    pIVar2[5] = (INode)&___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
    pIVar2[9] = (INode)&___7__TDataReference__N_Metasound__6B_;
    pIVar2[10] = (INode)local_48._8_8_;
    pIVar2[0xb] = local_38;
    if (local_38 != (INode)0x0) {
      *(int *)((longlong)local_38 + 8) = *(int *)((longlong)local_38 + 8) + 1;
    }
    pIVar2[9] = (INode)&___7__TDataReadReference__N_Metasound__6B_;
    TDataReference<Metasound::FTrigger>::
    TDataReference<Metasound::FTrigger><Metasound::FOperatorSettings_const_&>
              ((TDataReference<Metasound::FTrigger> *)(pIVar2 + 0xd),NewObject,pFVar1);
    pIVar2[0xd] = (INode)&___7__TDataWriteReference_VFTrigger_Metasound___Metasound__6B_;
    TDataReference<bool>::TDataReference<bool><bool_const_&>
              ((TDataReference<bool> *)(pIVar2 + 0x11),NewObject,(bool *)local_48._8_8_);
    pIVar2[0x11] = (INode)&___7__TDataWriteReference__N_Metasound__6B_;
  }
  param_1->Node = pIVar2;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_38);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_58);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_78);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// Execute @ 14b273820

void __thiscall Metasound::FTriggerToggleOperator::Execute(FTriggerToggleOperator *this)

{
  undefined1 *puVar1;
  longlong lVar2;
  undefined1 *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  puVar1 = &(this->TriggerOutput).field_0x8;
  FTrigger::AdvanceBlock(*(FTrigger **)puVar1);
  plVar5 = *(longlong **)&(this->TriggerOn).field_0x8;
  puVar3 = &(this->ValueOutput).field_0x8;
  lVar8 = 0;
  iVar4 = *(int *)((longlong)plVar5 + 0x1c);
  if (0 < iVar4) {
    lVar6 = *plVar5;
    lVar2 = (longlong)iVar4 + -1;
    lVar7 = lVar8;
    if (0 < lVar2) {
      do {
        iVar4 = *(int *)(lVar6 + lVar7 * 4);
        **(undefined1 **)puVar3 = 1;
        FTrigger::TriggerFrame(*(FTrigger **)puVar1,iVar4);
        lVar7 = lVar7 + 1;
      } while (lVar7 < lVar2);
    }
    iVar4 = *(int *)(lVar6 + lVar2 * 4);
    **(undefined1 **)puVar3 = 1;
    FTrigger::TriggerFrame(*(FTrigger **)&(this->TriggerOutput).field_0x8,iVar4);
  }
  plVar5 = *(longlong **)&(this->TriggerOff).field_0x8;
  iVar4 = *(int *)((longlong)plVar5 + 0x1c);
  if (0 < iVar4) {
    lVar6 = *plVar5;
    lVar2 = (longlong)iVar4 + -1;
    if (0 < lVar2) {
      do {
        iVar4 = *(int *)(lVar6 + lVar8 * 4);
        **(undefined1 **)puVar3 = 0;
        FTrigger::TriggerFrame(*(FTrigger **)&(this->TriggerOutput).field_0x8,iVar4);
        lVar8 = lVar8 + 1;
      } while (lVar8 < lVar2);
    }
    iVar4 = *(int *)(lVar6 + lVar2 * 4);
    **(undefined1 **)&(this->ValueOutput).field_0x8 = 0;
    FTrigger::TriggerFrame(*(FTrigger **)&(this->TriggerOutput).field_0x8,iVar4);
  }
  return;
}

// GetNodeInfo @ 14b283650

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl Metasound::FTriggerToggleOperator::GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      `Metasound::FTriggerToggleOperator::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res8,&::Info);
      atexit(`Metasound::FTriggerToggleOperator::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&::_TSS0);
      return &::Info;
    }
  }
  return &::Info;
}

// GetVertexInterface @ 14b286fc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl Metasound::FTriggerToggleOperator::GetVertexInterface(void)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<bool> *pTVar3;
  TOutputDataVertex<Metasound::FTrigger> *pTVar4;
  TInputDataVertex<bool> *pTVar5;
  TInputDataVertex<Metasound::FTrigger> *pTVar6;
  TInputDataVertex<Metasound::FTrigger> *pTVar7;
  FInputVertexInterface *pFVar8;
  FVertexInterface *pFVar9;
  undefined1 auStackY_198 [32];
  FOutputVertexInterface local_168;
  FInputVertexInterface local_148;
  FOutputVertexInterfaceDeclarationBuilder local_128;
  TOutputDataVertex<bool> local_100;
  TOutputDataVertex<Metasound::FTrigger> local_e0;
  TInputDataVertex<Metasound::FTrigger> local_c0;
  TInputDataVertex<Metasound::FTrigger> local_88;
  TInputDataVertex<bool> local_50;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_198;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pTVar3 = TOutputDataVertex<bool>::TOutputDataVertex<bool><>
                       (&local_100,&TriggerToggle::OutputValueName,&FDataVertexMetadata::EmptyBasic)
    ;
    pTVar4 = TOutputDataVertex<Metasound::FTrigger>::TOutputDataVertex<Metasound::FTrigger><>
                       (&local_e0,&TriggerToggle::OutputTriggerName,&FDataVertexMetadata::EmptyBasic
                       );
    FOutputVertexInterface::FOutputVertexInterface(&local_168);
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::
    FOutputVertexInterfaceDeclarationBuilder
              (&local_128,
               (TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *)&local_168,
               &local_168.SubInterfaces);
    if ((local_128.Vertices)->ArrayMax < 2) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,2,&(local_128.Vertices)->AllocatorInstance,(local_128.Vertices)->ArrayNum,
                 &(local_128.Vertices)->ArrayMax);
    }
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
              (&local_128,(FOutputDataVertex *)pTVar4);
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
              (&local_128,(FOutputDataVertex *)pTVar3);
    VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
              ((FSubInterfaceDeclarationBuilder *)&local_128);
    pTVar5 = TInputDataVertex<bool>::TInputDataVertex<bool><>
                       (&local_50,&TriggerToggle::InputInitName,&FDataVertexMetadata::EmptyBasic);
    pTVar6 = TInputDataVertex<Metasound::FTrigger>::TInputDataVertex<Metasound::FTrigger><>
                       (&local_88,&TriggerToggle::InputOffTriggerName,
                        &FDataVertexMetadata::EmptyBasic);
    pTVar7 = TInputDataVertex<Metasound::FTrigger>::TInputDataVertex<Metasound::FTrigger><>
                       (&local_c0,&TriggerToggle::InputOnTriggerName,
                        &FDataVertexMetadata::EmptyBasic);
    pFVar8 = FInputVertexInterface::
             FInputVertexInterface<Metasound::TInputDataVertex<Metasound::FTrigger>,Metasound::TInputDataVertex<Metasound::FTrigger>,Metasound::TInputDataVertex<bool>_>
                       (&local_148,pTVar7,pTVar6,pTVar5);
    FVertexInterface::FVertexInterface(&::Interface,pFVar8,&local_168);
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_148.SubInterfaces.AllocatorInstance.Data,
               local_148.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_148.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_148.SubInterfaces.AllocatorInstance.Data);
    }
    DestructItems<Metasound::FInputDataVertex,int>
              ((FInputDataVertex *)local_148._padding_,(int)local_148._padding_);
    if ((FInputDataVertex *)local_148._padding_ != (FInputDataVertex *)0x0) {
      FMemory::Free((void *)local_148._padding_);
    }
    if ((0xc < (byte)local_c0._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar9 = (FVertexInterface *)(*pcVar1)();
      return pFVar9;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_c0._48_1_])(&local_c0.field_0x20);
    if ((0xc < (byte)local_88._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar9 = (FVertexInterface *)(*pcVar1)();
      return pFVar9;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_88._48_1_])(&local_88.field_0x20);
    if ((0xc < (byte)local_50._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar9 = (FVertexInterface *)(*pcVar1)();
      return pFVar9;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_50._48_1_])(&local_50.field_0x20);
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_168.SubInterfaces.AllocatorInstance.Data,
               local_168.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_168.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_168.SubInterfaces.AllocatorInstance.Data);
    }
    if ((void *)local_168._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_168._padding_);
    }
    atexit(`Metasound::FTriggerToggleOperator::GetVertexInterface'::__l2::
           _dynamic_atexit_destructor_for__Interface__);
    _Init_thread_footer(&::_TSS0);
  }
  return &::Interface;
}

// Reset @ 14b28b990

void __thiscall
Metasound::FTriggerToggleOperator::Reset(FTriggerToggleOperator *this,FResetParams *param_1)

{
  FTrigger::Reset(*(FTrigger **)&(this->TriggerOutput).field_0x8);
  **(undefined1 **)&(this->ValueOutput).field_0x8 = **(undefined1 **)&(this->InitValue).field_0x8;
  return;
}

