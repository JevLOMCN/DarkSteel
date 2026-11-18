// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 9

// FTriggerDelayOperator @ 14b2343e0

FTriggerDelayOperator * __thiscall
Metasound::FTriggerDelayOperator::FTriggerDelayOperator
          (FTriggerDelayOperator *this,FOperatorSettings *param_1,
          TDataReadReference<Metasound::FTrigger> *param_2,
          TDataReadReference<Metasound::FTrigger> *param_3,
          TDataReadReference<Metasound::FTime> *param_4)

{
  longlong lVar1;
  
  this->_padding_ = (longlong)&___7FTriggerDelayOperator_Metasound__6B_;
  this->SampleRate = (float)param_1->SampleRate;
  *(undefined ***)&this->TriggerIn = &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->TriggerIn).field_0x8 = *(undefined8 *)&param_3->field_0x8;
  lVar1 = *(longlong *)&param_3->field_0x10;
  *(longlong *)&(this->TriggerIn).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->TriggerIn = &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined ***)&this->TriggerReset = &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->TriggerReset).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->TriggerReset).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->TriggerReset =
       &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
  TDataReference<Metasound::FTrigger>::
  TDataReference<Metasound::FTrigger><Metasound::FOperatorSettings_const_&>
            ((TDataReference<Metasound::FTrigger> *)&this->TriggerOut,NewObject,param_1);
  *(undefined ***)&this->TriggerOut =
       &___7__TDataWriteReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined ***)&this->DelayTime = &___7__TDataReference_VFTime_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->DelayTime).field_0x8 = *(undefined8 *)&param_4->field_0x8;
  lVar1 = *(longlong *)&param_4->field_0x10;
  *(longlong *)&(this->DelayTime).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->DelayTime = &___7__TDataReadReference_VFTime_Metasound___Metasound__6B_;
  return this;
}

// operator() @ 14b242c70

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::FTriggerDelayOperator::GetNodeInfo'::__l2::<lambda_1>::operator()
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
  ::FName::FName(local_res18,L"Trigger Delay");
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
  pFVar6 = Metasound::FTriggerDelayOperator::GetVertexInterface();
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

// BindInputs @ 14b2493c0

void __thiscall
Metasound::FTriggerDelayOperator::BindInputs
          (FTriggerDelayOperator *this,FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataReadReference<Metasound::FTrigger> *local_res18;
  undefined1 local_48 [16];
  code *local_38;
  TDataReadReference<Metasound::FTrigger> **local_30;
  undefined1 local_28 [16];
  
  FLazyName::Resolve(&TriggerDelayVertexNames::InputInTriggerDelayName);
  local_res18 = &this->TriggerIn;
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
  FLazyName::Resolve(&TriggerDelayVertexNames::InputResetDelayName);
  local_res18 = &this->TriggerReset;
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
  FLazyName::Resolve(&TriggerDelayVertexNames::InputDelayTimeName);
  local_res18 = (TDataReadReference<Metasound::FTrigger> *)&this->DelayTime;
  local_30 = &local_res18;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FTime>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_48._8_8_ = local_28;
  local_28._0_8_ = &local_res8;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FTime>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_28._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_38)
  ;
  return;
}

// BindOutputs @ 14b24a0d0

void __thiscall
Metasound::FTriggerDelayOperator::BindOutputs
          (FTriggerDelayOperator *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<Metasound::FTrigger> *local_res18 [2];
  FName *local_38;
  TDataWriteReference<Metasound::FTrigger> *local_30;
  code *local_28;
  TDataWriteReference<Metasound::FTrigger> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&TriggerDelayVertexNames::OutputOnTriggerName);
  local_res18[0] = &this->TriggerOut;
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

// CreateOperator @ 14b26b600

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::FTriggerDelayOperator::CreateOperator
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
  FLazyName::Resolve(&TriggerDelayVertexNames::InputDelayTimeName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTime>
            (this,(TDataReadReference<Metasound::FTime> *)local_48,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&TriggerDelayVertexNames::InputInTriggerDelayName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTrigger>
            (this,(TDataReadReference<Metasound::FTrigger> *)local_88,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&TriggerDelayVertexNames::InputResetDelayName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTrigger>
            (this,(TDataReadReference<Metasound::FTrigger> *)local_68,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  pIVar2 = ::operator_new(0x90);
  if (pIVar2 == (INode *)0x0) {
    pIVar2 = (INode *)0x0;
  }
  else {
    *pIVar2 = (INode)&___7FTriggerDelayOperator_Metasound__6B_;
    *(float *)(pIVar2 + 1) = (float)pFVar1->SampleRate;
    pIVar2[2] = (INode)&___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
    pIVar2[3] = (INode)local_88._8_8_;
    pIVar2[4] = local_78;
    if (local_78 != (INode)0x0) {
      *(int *)((longlong)local_78 + 8) = *(int *)((longlong)local_78 + 8) + 1;
    }
    pIVar2[2] = (INode)&___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
    pIVar2[6] = (INode)&___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
    pIVar2[7] = (INode)local_68._8_8_;
    pIVar2[8] = local_58;
    if (local_58 != (INode)0x0) {
      *(int *)((longlong)local_58 + 8) = *(int *)((longlong)local_58 + 8) + 1;
    }
    pIVar2[6] = (INode)&___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
    TDataReference<Metasound::FTrigger>::
    TDataReference<Metasound::FTrigger><Metasound::FOperatorSettings_const_&>
              ((TDataReference<Metasound::FTrigger> *)(pIVar2 + 10),NewObject,pFVar1);
    pIVar2[10] = (INode)&___7__TDataWriteReference_VFTrigger_Metasound___Metasound__6B_;
    pIVar2[0xe] = (INode)&___7__TDataReference_VFTime_Metasound___Metasound__6B_;
    pIVar2[0xf] = (INode)local_48._8_8_;
    pIVar2[0x10] = local_38;
    if (local_38 != (INode)0x0) {
      *(int *)((longlong)local_38 + 8) = *(int *)((longlong)local_38 + 8) + 1;
    }
    pIVar2[0xe] = (INode)&___7__TDataReadReference_VFTime_Metasound___Metasound__6B_;
  }
  param_1->Node = pIVar2;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_58);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_78);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_38);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// Execute @ 14b273200

void __thiscall Metasound::FTriggerDelayOperator::Execute(FTriggerDelayOperator *this)

{
  float fVar1;
  double dVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  double dVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 *puVar12;
  
  puVar12 = &(this->TriggerOut).field_0x8;
  FTrigger::AdvanceBlock(*(FTrigger **)puVar12);
  dVar6 = __real_3fe0000000000000;
  plVar4 = *(longlong **)&(this->TriggerIn).field_0x8;
  lVar10 = 0;
  iVar3 = *(int *)((longlong)plVar4 + 0x1c);
  if (0 < iVar3) {
    lVar5 = *plVar4;
    lVar9 = (longlong)iVar3 + -1;
    lVar11 = lVar10;
    if (0 < lVar9) {
      do {
        fVar1 = this->SampleRate;
        iVar3 = *(int *)(lVar5 + lVar11 * 4);
        dVar2 = **(double **)&(this->DelayTime).field_0x8;
        FTrigger::RemoveAfter(*(FTrigger **)puVar12,iVar3);
        lVar8 = (longlong)ROUND(((double)fVar1 + (double)fVar1) * dVar2 + dVar6) >> 1;
        iVar7 = (int)lVar8;
        if (lVar8 < 0) {
          iVar7 = 0;
        }
        FTrigger::TriggerFrame(*(FTrigger **)puVar12,iVar3 + iVar7);
        lVar11 = lVar11 + 1;
      } while (lVar11 < lVar9);
    }
    puVar12 = &(this->TriggerOut).field_0x8;
    fVar1 = this->SampleRate;
    iVar3 = *(int *)(lVar5 + lVar9 * 4);
    dVar2 = **(double **)&(this->DelayTime).field_0x8;
    FTrigger::RemoveAfter(*(FTrigger **)puVar12,iVar3);
    lVar9 = (longlong)ROUND(((double)fVar1 + (double)fVar1) * dVar2 + dVar6) >> 1;
    iVar7 = (int)lVar9;
    if (lVar9 < 0) {
      iVar7 = 0;
    }
    FTrigger::TriggerFrame(*(FTrigger **)puVar12,iVar3 + iVar7);
  }
  plVar4 = *(longlong **)&(this->TriggerReset).field_0x8;
  iVar3 = *(int *)((longlong)plVar4 + 0x1c);
  if (0 < iVar3) {
    lVar5 = *plVar4;
    lVar9 = (longlong)iVar3 + -1;
    if (0 < lVar9) {
      do {
        FTrigger::RemoveAfter
                  (*(FTrigger **)&(this->TriggerOut).field_0x8,*(int *)(lVar5 + lVar10 * 4));
        lVar10 = lVar10 + 1;
      } while (lVar10 < lVar9);
    }
    FTrigger::RemoveAfter(*(FTrigger **)&(this->TriggerOut).field_0x8,*(int *)(lVar5 + lVar9 * 4));
  }
  return;
}

// GetNodeInfo @ 14b283410

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl Metasound::FTriggerDelayOperator::GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      `Metasound::FTriggerDelayOperator::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res8,&::Info);
      atexit(`Metasound::FTriggerDelayOperator::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&::_TSS0);
      return &::Info;
    }
  }
  return &::Info;
}

// GetVertexInterface @ 14b2862f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl Metasound::FTriggerDelayOperator::GetVertexInterface(void)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::FTrigger> *pTVar3;
  TInputDataVertex<Metasound::FTime> *pTVar4;
  TInputDataVertex<Metasound::FTrigger> *pTVar5;
  TInputDataVertex<Metasound::FTrigger> *pTVar6;
  FInputVertexInterface *pFVar7;
  FVertexInterface *pFVar8;
  undefined1 auStackY_178 [32];
  float local_148 [2];
  FOutputVertexInterface local_140;
  FInputVertexInterface local_120;
  FOutputVertexInterfaceDeclarationBuilder local_100;
  TOutputDataVertex<Metasound::FTrigger> local_d8;
  TInputDataVertex<Metasound::FTrigger> local_b8;
  TInputDataVertex<Metasound::FTrigger> local_80;
  TInputDataVertex<Metasound::FTime> local_48;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_178;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pTVar3 = TOutputDataVertex<Metasound::FTrigger>::TOutputDataVertex<Metasound::FTrigger><>
                       (&local_d8,&TriggerDelayVertexNames::OutputOnTriggerName,
                        &FDataVertexMetadata::EmptyBasic);
    FOutputVertexInterface::FOutputVertexInterface(&local_140);
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::
    FOutputVertexInterfaceDeclarationBuilder
              (&local_100,
               (TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *)&local_140,
               &local_140.SubInterfaces);
    if ((local_100.Vertices)->ArrayMax < 1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,1,&(local_100.Vertices)->AllocatorInstance,(local_100.Vertices)->ArrayNum,
                 &(local_100.Vertices)->ArrayMax);
    }
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
              (&local_100,(FOutputDataVertex *)pTVar3);
    VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
              ((FSubInterfaceDeclarationBuilder *)&local_100);
    local_148[0] = 1.0;
    pTVar4 = TInputDataVertex<Metasound::FTime>::TInputDataVertex<Metasound::FTime><float>
                       (&local_48,&TriggerDelayVertexNames::InputDelayTimeName,
                        &FDataVertexMetadata::EmptyBasic,local_148);
    pTVar5 = TInputDataVertex<Metasound::FTrigger>::TInputDataVertex<Metasound::FTrigger><>
                       (&local_80,&TriggerDelayVertexNames::InputResetDelayName,
                        &FDataVertexMetadata::EmptyBasic);
    pTVar6 = TInputDataVertex<Metasound::FTrigger>::TInputDataVertex<Metasound::FTrigger><>
                       (&local_b8,&TriggerDelayVertexNames::InputInTriggerDelayName,
                        &FDataVertexMetadata::EmptyBasic);
    pFVar7 = FInputVertexInterface::
             FInputVertexInterface<Metasound::TInputDataVertex<Metasound::FTrigger>,Metasound::TInputDataVertex<Metasound::FTrigger>,Metasound::TInputDataVertex<Metasound::FTime>_>
                       (&local_120,pTVar6,pTVar5,pTVar4);
    FVertexInterface::FVertexInterface(&::Interface,pFVar7,&local_140);
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_120.SubInterfaces.AllocatorInstance.Data,
               local_120.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_120.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_120.SubInterfaces.AllocatorInstance.Data);
    }
    DestructItems<Metasound::FInputDataVertex,int>
              ((FInputDataVertex *)local_120._padding_,(int)local_120._padding_);
    if ((FInputDataVertex *)local_120._padding_ != (FInputDataVertex *)0x0) {
      FMemory::Free((void *)local_120._padding_);
    }
    if ((0xc < (byte)local_b8._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar8 = (FVertexInterface *)(*pcVar1)();
      return pFVar8;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_b8._48_1_])(&local_b8.field_0x20);
    if ((0xc < (byte)local_80._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar8 = (FVertexInterface *)(*pcVar1)();
      return pFVar8;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_80._48_1_])(&local_80.field_0x20);
    if ((0xc < (byte)local_48._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar8 = (FVertexInterface *)(*pcVar1)();
      return pFVar8;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_48._48_1_])(&local_48.field_0x20);
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_140.SubInterfaces.AllocatorInstance.Data,
               local_140.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_140.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_140.SubInterfaces.AllocatorInstance.Data);
    }
    if ((void *)local_140._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_140._padding_);
    }
    atexit(`Metasound::FTriggerDelayOperator::GetVertexInterface'::__l2::
           _dynamic_atexit_destructor_for__Interface__);
    _Init_thread_footer(&::_TSS0);
  }
  return &::Interface;
}

// Reset @ 14b28b8c0

void __thiscall
Metasound::FTriggerDelayOperator::Reset(FTriggerDelayOperator *this,FResetParams *param_1)

{
  FTrigger::Reset(*(FTrigger **)&(this->TriggerOut).field_0x8);
  return;
}

