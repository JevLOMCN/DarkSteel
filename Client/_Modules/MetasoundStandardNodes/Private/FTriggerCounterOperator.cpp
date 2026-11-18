// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 10

// FTriggerCounterOperator @ 14b234190

FTriggerCounterOperator * __thiscall
Metasound::FTriggerCounterOperator::FTriggerCounterOperator
          (FTriggerCounterOperator *this,FOperatorSettings *param_1,
          TDataReadReference<Metasound::FTrigger> *param_2,
          TDataReadReference<Metasound::FTrigger> *param_3,TDataReadReference<float> *param_4,
          TDataReadReference<float> *param_5,TDataReadReference<int> *param_6)

{
  longlong lVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  undefined8 *puVar5;
  FTriggerCounterOperator *pFVar6;
  int iVar7;
  
  this->_padding_ = (longlong)&___7FTriggerCounterOperator_Metasound__6B_;
  *(undefined ***)&this->TriggerIn = &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->TriggerIn).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->TriggerIn).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->TriggerIn = &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined ***)&this->TriggerReset = &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->TriggerReset).field_0x8 = *(undefined8 *)&param_3->field_0x8;
  lVar1 = *(longlong *)&param_3->field_0x10;
  *(longlong *)&(this->TriggerReset).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->TriggerReset =
       &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined ***)&this->StartValue = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)&(this->StartValue).field_0x8 = *(undefined8 *)&param_4->field_0x8;
  lVar1 = *(longlong *)&param_4->field_0x10;
  *(longlong *)&(this->StartValue).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->StartValue = &___7__TDataReadReference_M_Metasound__6B_;
  *(undefined ***)&this->StepSize = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)&(this->StepSize).field_0x8 = *(undefined8 *)&param_5->field_0x8;
  lVar1 = *(longlong *)&param_5->field_0x10;
  *(longlong *)&(this->StepSize).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->StepSize = &___7__TDataReadReference_M_Metasound__6B_;
  *(undefined ***)&this->AutoResetCount = &___7__TDataReference_H_Metasound__6B_;
  *(undefined8 *)&(this->AutoResetCount).field_0x8 = *(undefined8 *)&param_6->field_0x8;
  lVar1 = *(longlong *)&param_6->field_0x10;
  *(longlong *)&(this->AutoResetCount).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->AutoResetCount = &___7__TDataReadReference_H_Metasound__6B_;
  TDataReference<Metasound::FTrigger>::
  TDataReference<Metasound::FTrigger><Metasound::FOperatorSettings_const_&>
            ((TDataReference<Metasound::FTrigger> *)&this->TriggerOut,NewObject,param_1);
  *(undefined ***)&this->TriggerOut =
       &___7__TDataWriteReference_VFTrigger_Metasound___Metasound__6B_;
  TDataReference<Metasound::FTrigger>::
  TDataReference<Metasound::FTrigger><Metasound::FOperatorSettings_const_&>
            ((TDataReference<Metasound::FTrigger> *)&this->TriggerOnReset,NewObject,param_1);
  *(undefined ***)&this->TriggerOnReset =
       &___7__TDataWriteReference_VFTrigger_Metasound___Metasound__6B_;
  TDataReference<float>::TDataReference<float><float_const_&>
            ((TDataReference<float> *)&this->OutValue,NewObject,
             *(float **)&(this->StartValue).field_0x8);
  *(undefined ***)&this->OutValue = &___7__TDataWriteReference_M_Metasound__6B_;
  *(undefined ***)&this->OutCount = &___7__TDataReference_H_Metasound__6B_;
  puVar5 = ::operator_new(0x18);
  if (puVar5 == (undefined8 *)0x0) {
    *(undefined8 *)&(this->OutCount).field_0x8 = 0x10;
    *(undefined8 *)&(this->OutCount).field_0x10 = 0;
  }
  else {
    *(undefined4 *)(puVar5 + 1) = 1;
    *puVar5 = &___7__TIntrusiveReferenceController_H_0A__SharedPointerInternals__6B_;
    *(undefined8 *)((longlong)puVar5 + 0xc) = 1;
    *(undefined8 **)&(this->OutCount).field_0x8 = puVar5 + 2;
    *(undefined8 **)&(this->OutCount).field_0x10 = puVar5;
    if (puVar5 + 2 == (undefined8 *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FTriggerCounterOperator *)(*pcVar3)();
        return pFVar6;
      }
    }
  }
  *(undefined ***)&this->OutCount = &___7__TDataWriteReference_H_Metasound__6B_;
  piVar2 = *(int **)&(this->AutoResetCount).field_0x8;
  this->CurrentAutoResetCount = 0;
  this->CurrentTriggerCount = 0;
  this->CurrentValue = 0.0;
  this->bIsFirstTrigger = true;
  iVar7 = *piVar2;
  if (iVar7 < 0) {
    iVar7 = 0;
  }
  this->CurrentAutoResetCount = iVar7;
  return this;
}

// operator() @ 14b242ae0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::FTriggerCounterOperator::GetNodeInfo'::__l2::<lambda_1>::operator()
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
  ::FName::FName(local_res18,L"Trigger Counter");
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
  pFVar6 = Metasound::FTriggerCounterOperator::GetVertexInterface();
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

// operator() @ 14b2476b0

void __thiscall
`Metasound::FTriggerCounterOperator::Execute'::__l2::<lambda_4>::operator()
          (void *this,int param_1,int param_2)

{
  longlong lVar1;
  
  *(int *)(*(longlong *)this + 300) = *(int *)(*(longlong *)this + 300) + 1;
  lVar1 = *(longlong *)this;
  if (*(char *)(lVar1 + 0x134) == '\0') {
    if ((*(int *)(lVar1 + 0x128) < 1) || (*(int *)(lVar1 + 300) <= *(int *)(lVar1 + 0x128))) {
      **(float **)(lVar1 + 0xf0) = **(float **)(lVar1 + 0x70) + **(float **)(lVar1 + 0xf0);
    }
    else {
      *(undefined4 *)(lVar1 + 300) = 1;
      lVar1 = *(longlong *)this;
      **(undefined4 **)(lVar1 + 0xf0) = **(undefined4 **)(lVar1 + 0x50);
      Metasound::FTrigger::TriggerFrame(*(FTrigger **)(lVar1 + 0xd0),param_1);
    }
  }
  else {
    *(undefined4 *)(lVar1 + 300) = 1;
    lVar1 = *(longlong *)this;
    **(undefined4 **)(lVar1 + 0xf0) = **(undefined4 **)(lVar1 + 0x50);
    *(undefined1 *)(lVar1 + 0x134) = 0;
  }
  **(undefined4 **)(*(longlong *)this + 0x110) = *(undefined4 *)(*(longlong *)this + 300);
  Metasound::FTrigger::TriggerFrame(*(FTrigger **)(*(longlong *)this + 0xb0),param_1);
  return;
}

// BindInputs @ 14b2490e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Metasound::FTriggerCounterOperator::BindInputs
          (FTriggerCounterOperator *this,FInputVertexInterfaceData *param_1)

{
  int iVar1;
  undefined1 auStackY_e8 [32];
  FName local_b8;
  TDataReadReference<Metasound::FTrigger> *local_b0;
  undefined1 local_a8 [16];
  code *local_98;
  TDataReadReference<Metasound::FTrigger> **local_90;
  undefined1 local_88 [16];
  undefined1 local_78 [32];
  void *local_58;
  undefined4 local_50;
  uint local_4c;
  undefined4 local_48;
  undefined4 local_44;
  void *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  local_4c = 0x80;
  local_78._0_8_ = (FScriptContainerElement *)0x0;
  local_78._8_8_ = 0;
  local_58 = (void *)0x0;
  local_50 = 0;
  local_44 = 0;
  local_38 = (void *)0x0;
  local_48 = 0xffffffff;
  FLazyName::Resolve(&TriggerCounterVertexNames::InputInTriggerName);
  local_b0 = &this->TriggerIn;
  local_90 = &local_b0;
  local_a8._0_8_ = &local_b8;
  local_88._8_8_ = local_a8;
  local_98 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_88._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_a8._8_8_ = local_b0;
  FInputVertexInterfaceData::Apply
            (param_1,&local_b8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_88,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_98)
  ;
  FLazyName::Resolve(&TriggerCounterVertexNames::InputResetName);
  local_b0 = &this->TriggerReset;
  local_98 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_90 = &local_b0;
  local_88._0_8_ = &local_b8;
  local_a8._8_8_ = local_88;
  local_a8._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_88._8_8_ = local_b0;
  FInputVertexInterfaceData::Apply
            (param_1,&local_b8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_a8,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_98)
  ;
  FLazyName::Resolve(&TriggerCounterVertexNames::InputStartValueName);
  local_b0 = (TDataReadReference<Metasound::FTrigger> *)&this->StartValue;
  local_90 = &local_b0;
  local_88._0_8_ = &local_b8;
  local_a8._8_8_ = local_88;
  local_98 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_a8._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<float>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_88._8_8_ = local_b0;
  FInputVertexInterfaceData::Apply
            (param_1,&local_b8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_a8,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_98)
  ;
  FLazyName::Resolve(&TriggerCounterVertexNames::InputStepSizeName);
  local_90 = &local_b0;
  local_98 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_b0 = (TDataReadReference<Metasound::FTrigger> *)&this->StepSize;
  local_88._0_8_ = &local_b8;
  local_a8._8_8_ = local_88;
  local_a8._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<float>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_88._8_8_ = local_b0;
  FInputVertexInterfaceData::Apply
            (param_1,&local_b8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_a8,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_98)
  ;
  FLazyName::Resolve(&TriggerCounterVertexNames::InputAutoResetCountName);
  local_b0 = (TDataReadReference<Metasound::FTrigger> *)&this->AutoResetCount;
  local_90 = &local_b0;
  local_98 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<int>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_a8._8_8_ = local_88;
  local_88._0_8_ = &local_b8;
  local_a8._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<int>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_88._8_8_ = local_b0;
  FInputVertexInterfaceData::Apply
            (param_1,&local_b8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_a8,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_98)
  ;
  local_30 = 0;
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,Metasound::FAnyDataReference>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,Metasound::FAnyDataReference>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_78,0,local_78._8_4_);
  iVar1 = SUB84(local_78._8_8_,4);
  local_78._8_8_ = local_78._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)local_78,0,(int *)(local_78 + 0xc));
  }
  local_48 = 0xffffffff;
  local_44 = 0;
  local_50 = 0;
  if (0x80 < local_4c) {
    local_4c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_78 + 0x10),0);
  }
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  if ((FScriptContainerElement *)local_78._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_78._0_8_);
  }
  return;
}

// BindOutputs @ 14b249e30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Metasound::FTriggerCounterOperator::BindOutputs
          (FTriggerCounterOperator *this,FOutputVertexInterfaceData *param_1)

{
  int iVar1;
  undefined1 auStackY_e8 [32];
  FName local_b8;
  TDataWriteReference<Metasound::FTrigger> *local_b0;
  undefined1 local_a8 [16];
  code *local_98;
  TDataWriteReference<Metasound::FTrigger> **local_90;
  undefined1 local_88 [16];
  undefined1 local_78 [32];
  void *local_58;
  undefined4 local_50;
  uint local_4c;
  undefined4 local_48;
  undefined4 local_44;
  void *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  local_4c = 0x80;
  local_78._0_8_ = (FScriptContainerElement *)0x0;
  local_78._8_8_ = 0;
  local_58 = (void *)0x0;
  local_50 = 0;
  local_44 = 0;
  local_38 = (void *)0x0;
  local_48 = 0xffffffff;
  FLazyName::Resolve(&TriggerCounterVertexNames::OutputOnTriggerName);
  local_b0 = &this->TriggerOut;
  local_90 = &local_b0;
  local_a8._0_8_ = &local_b8;
  local_88._8_8_ = local_a8;
  local_98 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_88._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FOutputBinding>
       ::Call;
  local_a8._8_8_ = local_b0;
  FOutputVertexInterfaceData::Apply
            (param_1,&local_b8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)local_88,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_98
            );
  FLazyName::Resolve(&TriggerCounterVertexNames::OutputOnResetName);
  local_b0 = &this->TriggerOnReset;
  local_98 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_90 = &local_b0;
  local_88._0_8_ = &local_b8;
  local_a8._8_8_ = local_88;
  local_a8._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FOutputBinding>
       ::Call;
  local_88._8_8_ = local_b0;
  FOutputVertexInterfaceData::Apply
            (param_1,&local_b8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)local_a8,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_98
            );
  FLazyName::Resolve(&TriggerCounterVertexNames::OutputCountName);
  local_b0 = (TDataWriteReference<Metasound::FTrigger> *)&this->OutCount;
  local_90 = &local_b0;
  local_98 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<int>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_a8._8_8_ = local_88;
  local_88._0_8_ = &local_b8;
  local_a8._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<int>_>,Metasound::VertexDataPrivate::FOutputBinding>
       ::Call;
  local_88._8_8_ = local_b0;
  FOutputVertexInterfaceData::Apply
            (param_1,&local_b8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)local_a8,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_98
            );
  FLazyName::Resolve(&TriggerCounterVertexNames::OutputValueName);
  local_90 = &local_b0;
  local_b0 = (TDataWriteReference<Metasound::FTrigger> *)&this->OutValue;
  local_98 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_88._0_8_ = &local_b8;
  local_a8._8_8_ = local_88;
  local_a8._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<float>_>,Metasound::VertexDataPrivate::FOutputBinding>
       ::Call;
  local_88._8_8_ = local_b0;
  FOutputVertexInterfaceData::Apply
            (param_1,&local_b8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)local_a8,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_98
            );
  local_30 = 0;
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,Metasound::FAnyDataReference>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,Metasound::FAnyDataReference>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_78,0,local_78._8_4_);
  iVar1 = SUB84(local_78._8_8_,4);
  local_78._8_8_ = local_78._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)local_78,0,(int *)(local_78 + 0xc));
  }
  local_48 = 0xffffffff;
  local_44 = 0;
  local_50 = 0;
  if (0x80 < local_4c) {
    local_4c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_78 + 0x10),0);
  }
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  if ((FScriptContainerElement *)local_78._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_78._0_8_);
  }
  return;
}

// CreateOperator @ 14b26b480

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::FTriggerCounterOperator::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar1;
  FTriggerCounterOperator *this_00;
  FTriggerCounterOperator *pFVar2;
  FName local_res8;
  undefined1 local_b8 [32];
  undefined1 local_98 [32];
  undefined1 local_78 [32];
  undefined1 local_58 [32];
  undefined1 local_38 [32];
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&TriggerCounterVertexNames::InputInTriggerName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTrigger>
            (this,(TDataReadReference<Metasound::FTrigger> *)local_38,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&TriggerCounterVertexNames::InputResetName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTrigger>
            (this,(TDataReadReference<Metasound::FTrigger> *)local_58,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&TriggerCounterVertexNames::InputStartValueName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this,(TDataReadReference<float> *)local_78,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&TriggerCounterVertexNames::InputStepSizeName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this,(TDataReadReference<float> *)local_98,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&TriggerCounterVertexNames::InputAutoResetCountName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<int>
            (this,(TDataReadReference<int> *)local_b8,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  this_00 = ::operator_new(0x138);
  pFVar2 = (FTriggerCounterOperator *)0x0;
  if (this_00 != (FTriggerCounterOperator *)0x0) {
    pFVar2 = FTriggerCounterOperator
                       (this_00,pFVar1,(TDataReadReference<Metasound::FTrigger> *)local_38,
                        (TDataReadReference<Metasound::FTrigger> *)local_58,
                        (TDataReadReference<float> *)local_78,(TDataReadReference<float> *)local_98,
                        (TDataReadReference<int> *)local_b8);
  }
  param_1->Node = (INode *)pFVar2;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_b8._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_98._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_78._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_58._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_38._16_8_);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// Execute @ 14b273010

void __thiscall Metasound::FTriggerCounterOperator::Execute(FTriggerCounterOperator *this)

{
  longlong lVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined4 *puVar7;
  FTrigger *pFVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 *puVar12;
  FTriggerCounterOperator *local_res10;
  
  puVar12 = &(this->TriggerOnReset).field_0x8;
  FTrigger::AdvanceBlock(*(FTrigger **)puVar12);
  FTrigger::AdvanceBlock(*(FTrigger **)&(this->TriggerOut).field_0x8);
  piVar2 = &this->CurrentTriggerCount;
  plVar5 = *(longlong **)&(this->TriggerReset).field_0x8;
  lVar11 = 0;
  iVar9 = **(int **)&(this->AutoResetCount).field_0x8;
  if (iVar9 < 0) {
    iVar9 = 0;
  }
  this->CurrentAutoResetCount = iVar9;
  iVar9 = *(int *)((longlong)plVar5 + 0x1c);
  if (0 < iVar9) {
    lVar6 = *plVar5;
    lVar1 = (longlong)iVar9 + -1;
    lVar10 = lVar11;
    if (0 < lVar1) {
      do {
        iVar9 = *(int *)(lVar6 + lVar10 * 4);
        puVar7 = *(undefined4 **)&(this->OutCount).field_0x8;
        *piVar2 = 0;
        *puVar7 = 0;
        **(undefined4 **)&(this->OutValue).field_0x8 =
             **(undefined4 **)&(this->StartValue).field_0x8;
        pFVar8 = *(FTrigger **)puVar12;
        this->bIsFirstTrigger = true;
        FTrigger::TriggerFrame(pFVar8,iVar9);
        lVar10 = lVar10 + 1;
      } while (lVar10 < lVar1);
    }
    iVar9 = *(int *)(lVar6 + lVar1 * 4);
    puVar7 = *(undefined4 **)&(this->OutCount).field_0x8;
    *piVar2 = 0;
    *puVar7 = 0;
    **(undefined4 **)&(this->OutValue).field_0x8 = **(undefined4 **)&(this->StartValue).field_0x8;
    pFVar8 = *(FTrigger **)&(this->TriggerOnReset).field_0x8;
    this->bIsFirstTrigger = true;
    FTrigger::TriggerFrame(pFVar8,iVar9);
  }
  puVar12 = &(this->OutValue).field_0x8;
  plVar5 = *(longlong **)&(this->TriggerIn).field_0x8;
  iVar9 = *(int *)((longlong)plVar5 + 0x14);
  if (0 < *(int *)((longlong)plVar5 + 0x1c)) {
    lVar1 = (longlong)*(int *)((longlong)plVar5 + 0x1c) + -1;
    lVar6 = *plVar5;
    local_res10 = this;
    if (0 < lVar1) {
      do {
        iVar3 = *piVar2;
        iVar4 = *(int *)(lVar6 + lVar11 * 4);
        *piVar2 = iVar3 + 1;
        if (this->bIsFirstTrigger == false) {
          if ((this->CurrentAutoResetCount < 1) || (iVar3 + 1 <= this->CurrentAutoResetCount)) {
            **(float **)puVar12 = **(float **)&(this->StepSize).field_0x8 + **(float **)puVar12;
          }
          else {
            *piVar2 = 1;
            **(undefined4 **)puVar12 = **(undefined4 **)&(this->StartValue).field_0x8;
            FTrigger::TriggerFrame(*(FTrigger **)&(this->TriggerOnReset).field_0x8,iVar4);
          }
        }
        else {
          *piVar2 = 1;
          **(undefined4 **)puVar12 = **(undefined4 **)&(this->StartValue).field_0x8;
          this->bIsFirstTrigger = false;
        }
        **(int **)&(this->OutCount).field_0x8 = *piVar2;
        FTrigger::TriggerFrame(*(FTrigger **)&(this->TriggerOut).field_0x8,iVar4);
        lVar11 = lVar11 + 1;
      } while (lVar11 < lVar1);
    }
    `Metasound::FTriggerCounterOperator::Execute'::__l2::<lambda_4>::operator()
              (&local_res10,*(int *)(lVar6 + lVar1 * 4),iVar9);
  }
  return;
}

// GetNodeInfo @ 14b283380

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl Metasound::FTriggerCounterOperator::GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      `Metasound::FTriggerCounterOperator::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res8,&::Info);
      atexit(`Metasound::FTriggerCounterOperator::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&::_TSS0);
      return &::Info;
    }
  }
  return &::Info;
}

// GetVertexInterface @ 14b285df0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl Metasound::FTriggerCounterOperator::GetVertexInterface(void)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<float> *pTVar3;
  TOutputDataVertex<int> *pTVar4;
  TOutputDataVertex<Metasound::FTrigger> *pTVar5;
  TOutputDataVertex<Metasound::FTrigger> *pTVar6;
  FInputDataVertex *pFVar7;
  FInputDataVertex *pFVar8;
  FInputDataVertex *pFVar9;
  FInputDataVertex *pFVar10;
  FInputDataVertex *pFVar11;
  FVertexInterface *pFVar12;
  undefined1 auStackY_288 [32];
  int local_258;
  float local_254;
  float local_250 [2];
  FInputVertexInterface local_248;
  FOutputVertexInterface local_228;
  FInputVertexInterfaceDeclarationBuilder local_208;
  FOutputVertexInterfaceDeclarationBuilder local_1e0;
  TOutputDataVertex<float> local_1b8;
  TOutputDataVertex<int> local_198;
  TOutputDataVertex<Metasound::FTrigger> local_178;
  TOutputDataVertex<Metasound::FTrigger> local_158;
  TInputDataVertex<Metasound::FTrigger> local_138;
  TInputDataVertex<Metasound::FTrigger> local_100;
  TInputDataVertex<float> local_c8;
  TInputDataVertex<float> local_90;
  TInputDataVertex<int> local_58;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_288;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pTVar3 = TOutputDataVertex<float>::TOutputDataVertex<float><>
                       (&local_1b8,&TriggerCounterVertexNames::OutputValueName,
                        &FDataVertexMetadata::EmptyBasic);
    pTVar4 = TOutputDataVertex<int>::TOutputDataVertex<int><>
                       (&local_198,&TriggerCounterVertexNames::OutputCountName,
                        &FDataVertexMetadata::EmptyBasic);
    pTVar5 = TOutputDataVertex<Metasound::FTrigger>::TOutputDataVertex<Metasound::FTrigger><>
                       (&local_178,&TriggerCounterVertexNames::OutputOnResetName,
                        &FDataVertexMetadata::EmptyBasic);
    pTVar6 = TOutputDataVertex<Metasound::FTrigger>::TOutputDataVertex<Metasound::FTrigger><>
                       (&local_158,&TriggerCounterVertexNames::OutputOnTriggerName,
                        &FDataVertexMetadata::EmptyBasic);
    FOutputVertexInterface::FOutputVertexInterface(&local_228);
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::
    FOutputVertexInterfaceDeclarationBuilder
              (&local_1e0,
               (TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *)&local_228,
               &local_228.SubInterfaces);
    if ((local_1e0.Vertices)->ArrayMax < 4) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,4,&(local_1e0.Vertices)->AllocatorInstance,(local_1e0.Vertices)->ArrayNum,
                 &(local_1e0.Vertices)->ArrayMax);
    }
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
              (&local_1e0,(FOutputDataVertex *)pTVar6);
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
              (&local_1e0,(FOutputDataVertex *)pTVar5);
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
              (&local_1e0,(FOutputDataVertex *)pTVar4);
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
              (&local_1e0,(FOutputDataVertex *)pTVar3);
    VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
              ((FSubInterfaceDeclarationBuilder *)&local_1e0);
    local_258 = 0;
    pFVar7 = (FInputDataVertex *)
             TInputDataVertex<int>::TInputDataVertex<int><int>
                       (&local_58,&TriggerCounterVertexNames::InputAutoResetCountName,
                        &FDataVertexMetadata::EmptyBasic,&local_258);
    local_254 = 1.0;
    pFVar8 = (FInputDataVertex *)
             TInputDataVertex<float>::TInputDataVertex<float><float>
                       (&local_90,&TriggerCounterVertexNames::InputStepSizeName,
                        &FDataVertexMetadata::EmptyBasic,&local_254);
    local_250[0] = 0.0;
    pFVar9 = (FInputDataVertex *)
             TInputDataVertex<float>::TInputDataVertex<float><float>
                       (&local_c8,&TriggerCounterVertexNames::InputStartValueName,
                        &FDataVertexMetadata::EmptyBasic,local_250);
    pFVar10 = (FInputDataVertex *)
              TInputDataVertex<Metasound::FTrigger>::TInputDataVertex<Metasound::FTrigger><>
                        (&local_100,&TriggerCounterVertexNames::InputResetName,
                         &FDataVertexMetadata::EmptyBasic);
    pFVar11 = (FInputDataVertex *)
              TInputDataVertex<Metasound::FTrigger>::TInputDataVertex<Metasound::FTrigger><>
                        (&local_138,&TriggerCounterVertexNames::InputInTriggerName,
                         &FDataVertexMetadata::EmptyBasic);
    local_248._padding_ = 0;
    local_248._padding_ = 0;
    local_248.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_248.SubInterfaces.ArrayNum = 0;
    local_248.SubInterfaces.ArrayMax = 0;
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::FInputVertexInterfaceDeclarationBuilder
              (&local_208,
               (TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)&local_248,
               &local_248.SubInterfaces);
    if ((local_208.Vertices)->ArrayMax < 5) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,5,&(local_208.Vertices)->AllocatorInstance,(local_208.Vertices)->ArrayNum,
                 &(local_208.Vertices)->ArrayMax);
    }
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_208,pFVar11);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_208,pFVar10);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_208,pFVar9);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_208,pFVar8);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_208,pFVar7);
    VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
              ((FSubInterfaceDeclarationBuilder *)&local_208);
    FVertexInterface::FVertexInterface(&::Interface,&local_248,&local_228);
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_248.SubInterfaces.AllocatorInstance.Data,
               local_248.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_248.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_248.SubInterfaces.AllocatorInstance.Data);
    }
    DestructItems<Metasound::FInputDataVertex,int>
              ((FInputDataVertex *)local_248._padding_,(int)local_248._padding_);
    if ((FInputDataVertex *)local_248._padding_ != (FInputDataVertex *)0x0) {
      FMemory::Free((void *)local_248._padding_);
    }
    if ((0xc < (byte)local_138._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar12 = (FVertexInterface *)(*pcVar1)();
      return pFVar12;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_138._48_1_])(&local_138.field_0x20);
    if ((0xc < (byte)local_100._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar12 = (FVertexInterface *)(*pcVar1)();
      return pFVar12;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_100._48_1_])(&local_100.field_0x20);
    if ((0xc < (byte)local_c8._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar12 = (FVertexInterface *)(*pcVar1)();
      return pFVar12;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_c8._48_1_])(&local_c8.field_0x20);
    if ((0xc < (byte)local_90._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar12 = (FVertexInterface *)(*pcVar1)();
      return pFVar12;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_90._48_1_])(&local_90.field_0x20);
    if ((0xc < (byte)local_58._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar12 = (FVertexInterface *)(*pcVar1)();
      return pFVar12;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_58._48_1_])(&local_58.field_0x20);
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_228.SubInterfaces.AllocatorInstance.Data,
               local_228.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_228.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_228.SubInterfaces.AllocatorInstance.Data);
    }
    if ((void *)local_228._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_228._padding_);
    }
    atexit(`Metasound::FTriggerCounterOperator::GetVertexInterface'::__l2::
           _dynamic_atexit_destructor_for__Interface__);
    _Init_thread_footer(&::_TSS0);
  }
  return &::Interface;
}

// Reset @ 14b28b850

void __thiscall
Metasound::FTriggerCounterOperator::Reset(FTriggerCounterOperator *this,FResetParams *param_1)

{
  int iVar1;
  
  FTrigger::Reset(*(FTrigger **)&(this->TriggerOut).field_0x8);
  FTrigger::Reset(*(FTrigger **)&(this->TriggerOnReset).field_0x8);
  **(undefined4 **)&(this->OutValue).field_0x8 = **(undefined4 **)&(this->StartValue).field_0x8;
  **(undefined4 **)&(this->OutCount).field_0x8 = 0;
  iVar1 = **(int **)&(this->AutoResetCount).field_0x8;
  this->CurrentTriggerCount = 0;
  this->CurrentValue = 0.0;
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  this->bIsFirstTrigger = true;
  this->CurrentAutoResetCount = iVar1;
  return;
}

