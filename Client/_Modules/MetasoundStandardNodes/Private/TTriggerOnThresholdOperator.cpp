// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 19

// BindInputs @ 14b1fde20

void __thiscall
Metasound::TTriggerOnThresholdOperator<float,float>::BindInputs
          (TTriggerOnThresholdOperator<float,float> *this,FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataReadReference<float> *local_res18;
  undefined1 local_48 [16];
  code *local_38;
  TDataReadReference<float> **local_30;
  undefined1 local_28 [16];
  
  FLazyName::Resolve(&TriggerOnThresholdVertexNames::InThresholdPinName);
  local_res18 = &this->Threshold;
  local_30 = &local_res18;
  local_48._0_8_ = &local_res8;
  local_28._8_8_ = local_48;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_28._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<float>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_48._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_28,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_38)
  ;
  FLazyName::Resolve(&TriggerOnThresholdVertexNames::InPinName);
  local_res18 = &this->In;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_30 = &local_res18;
  local_28._0_8_ = &local_res8;
  local_48._8_8_ = local_28;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<float>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_28._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_38)
  ;
  FLazyName::Resolve(&TriggerOnThresholdVertexNames::InTriggerTypeName);
  local_res18 = (TDataReadReference<float> *)&this->TriggerType;
  local_30 = &local_res18;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_48._8_8_ = local_28;
  local_28._0_8_ = &local_res8;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_28._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_38)
  ;
  return;
}

// BindOutputs @ 14b1fdf70

void __thiscall
Metasound::TTriggerOnThresholdOperator<float,float>::BindOutputs
          (TTriggerOnThresholdOperator<float,float> *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<Metasound::FTrigger> *local_res18 [2];
  FName *local_38;
  TDataWriteReference<Metasound::FTrigger> *local_30;
  code *local_28;
  TDataWriteReference<Metasound::FTrigger> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&TriggerOnThresholdVertexNames::OutPinName);
  local_res18[0] = &this->Out;
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

// BindInputs @ 14b1fe630

void __thiscall
Metasound::TTriggerOnThresholdOperator<Metasound::FAudioBuffer,float>::BindInputs
          (TTriggerOnThresholdOperator<Metasound::FAudioBuffer,float> *this,
          FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataReadReference<float> *local_res18;
  undefined1 local_38 [16];
  code *local_28;
  TDataReadReference<float> **local_20;
  undefined1 local_18 [16];
  
  FLazyName::Resolve(&TriggerOnThresholdVertexNames::InThresholdPinName);
  local_res18 = &this->Threshold;
  local_20 = &local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_18._8_8_ = local_38;
  local_38._0_8_ = &local_res8;
  local_18._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<float>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  FLazyName::Resolve(&TriggerOnThresholdVertexNames::InPinName);
  local_res18 = (TDataReadReference<float> *)&this->In;
  local_20 = &local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FAudioBuffer>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38._8_8_ = local_18;
  local_18._0_8_ = &local_res8;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FAudioBuffer>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_18._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_38,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  FLazyName::Resolve(&TriggerOnThresholdVertexNames::InTriggerTypeName);
  local_res18 = (TDataReadReference<float> *)&this->TriggerType;
  local_20 = &local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38._8_8_ = local_18;
  local_18._0_8_ = &local_res8;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_18._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_38,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14b1fe7e0

void __thiscall
Metasound::TTriggerOnThresholdOperator<Metasound::FAudioBuffer,float>::BindOutputs
          (TTriggerOnThresholdOperator<Metasound::FAudioBuffer,float> *this,
          FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<Metasound::FTrigger> *local_res18 [2];
  FName *local_38;
  TDataWriteReference<Metasound::FTrigger> *local_30;
  code *local_28;
  TDataWriteReference<Metasound::FTrigger> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&TriggerOnThresholdVertexNames::OutPinName);
  local_res18[0] = &this->Out;
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

// BindInputs @ 14b1ff060

void __thiscall
Metasound::TTriggerOnThresholdOperator<int,int>::BindInputs
          (TTriggerOnThresholdOperator<int,int> *this,FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataReadReference<int> *local_res18;
  undefined1 local_48 [16];
  code *local_38;
  TDataReadReference<int> **local_30;
  undefined1 local_28 [16];
  
  FLazyName::Resolve(&TriggerOnThresholdVertexNames::InThresholdPinName);
  local_res18 = &this->Threshold;
  local_30 = &local_res18;
  local_48._0_8_ = &local_res8;
  local_28._8_8_ = local_48;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<int>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_28._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<int>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_48._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_28,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_38)
  ;
  FLazyName::Resolve(&TriggerOnThresholdVertexNames::InPinName);
  local_res18 = &this->In;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<int>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_30 = &local_res18;
  local_28._0_8_ = &local_res8;
  local_48._8_8_ = local_28;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<int>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_28._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_38)
  ;
  FLazyName::Resolve(&TriggerOnThresholdVertexNames::InTriggerTypeName);
  local_res18 = (TDataReadReference<int> *)&this->TriggerType;
  local_30 = &local_res18;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_48._8_8_ = local_28;
  local_28._0_8_ = &local_res8;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_28._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_38)
  ;
  return;
}

// BindOutputs @ 14b1ff1b0

void __thiscall
Metasound::TTriggerOnThresholdOperator<int,int>::BindOutputs
          (TTriggerOnThresholdOperator<int,int> *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<Metasound::FTrigger> *local_res18 [2];
  FName *local_38;
  TDataWriteReference<Metasound::FTrigger> *local_30;
  code *local_28;
  TDataWriteReference<Metasound::FTrigger> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&TriggerOnThresholdVertexNames::OutPinName);
  local_res18[0] = &this->Out;
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

// operator() @ 14b23f810

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::TTriggerOnThresholdOperator<int,int>::GetNodeInfo'::__l2::<lambda_1>::operator()
          (void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  int *piVar1;
  ITextData *pIVar2;
  FScriptContainerElement *pFVar3;
  TRefCountPtr<ITextData> TVar4;
  int iVar5;
  FName *pFVar6;
  FText *pFVar7;
  longlong lVar8;
  FName local_res10;
  FText local_88;
  FNodeClassName local_78;
  FVertexInterface local_60;
  
  FText::FText(&local_88);
  Metasound::FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__);
  ::FName::FName(&local_res10,L"TriggerOnThreshold");
  pFVar6 = Metasound::GetMetasoundDataTypeName<int>();
  Metasound::FNodeClassName::FNodeClassName
            (&local_78,&Metasound::StandardNodes::Namespace,&local_res10,pFVar6);
  (__return_storage_ptr__->ClassName).Namespace.ComparisonIndex.Value =
       local_78.Namespace.ComparisonIndex.Value;
  (__return_storage_ptr__->ClassName).Namespace.Number = local_78.Namespace.Number;
  (__return_storage_ptr__->ClassName).Name.ComparisonIndex.Value =
       local_78.Name.ComparisonIndex.Value;
  (__return_storage_ptr__->ClassName).Name.Number = local_78.Name.Number;
  __return_storage_ptr__->MajorVersion = 1;
  __return_storage_ptr__->MinorVersion = 0;
  (__return_storage_ptr__->ClassName).Variant = local_78.Variant;
  pIVar2 = (__return_storage_ptr__->DisplayName).TextData.Reference;
  if (pIVar2 != local_88.TextData.Reference) {
    (__return_storage_ptr__->DisplayName).TextData.Reference = local_88.TextData.Reference;
    if (local_88.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_88.TextData.Reference + 8))
                (local_88.TextData.Reference,&local_res10);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  (__return_storage_ptr__->DisplayName).Flags = local_88.Flags;
  pFVar7 = FText::FText((FText *)&local_78);
  FText::operator=(&__return_storage_ptr__->Description,pFVar7);
  if ((longlong *)CONCAT44(local_78.Namespace.Number,local_78.Namespace.ComparisonIndex.Value) !=
      (longlong *)0x0) {
    (**(code **)(*(longlong *)
                  CONCAT44(local_78.Namespace.Number,local_78.Namespace.ComparisonIndex.Value) +
                0x10))();
  }
  ::FString::operator=(&__return_storage_ptr__->Author,&Metasound::PluginAuthor);
  TVar4 = Metasound::PluginNodeMissingPrompt.TextData;
  pIVar2 = (__return_storage_ptr__->PromptIfMissing).TextData.Reference;
  if (pIVar2 != Metasound::PluginNodeMissingPrompt.TextData.Reference) {
    (__return_storage_ptr__->PromptIfMissing).TextData.Reference =
         Metasound::PluginNodeMissingPrompt.TextData.Reference;
    if (TVar4.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar4.Reference + 8))(TVar4.Reference,&local_res10);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  (__return_storage_ptr__->PromptIfMissing).Flags = Metasound::PluginNodeMissingPrompt.Flags;
  local_res10.ComparisonIndex.Value = 0x3f800000;
  Metasound::TTriggerOnThresholdHelper<int,int>::DeclareVertexInterface
            (&local_60,(float *)&local_res10);
  Metasound::FVertexInterface::operator=(&__return_storage_ptr__->DefaultInterface,&local_60);
  Metasound::FVertexInterface::~FVertexInterface(&local_60);
  iVar5 = (__return_storage_ptr__->CategoryHierarchy).ArrayNum;
  piVar1 = &(__return_storage_ptr__->CategoryHierarchy).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(__return_storage_ptr__->CategoryHierarchy).AllocatorInstance,piVar1);
  }
  pFVar3 = (__return_storage_ptr__->CategoryHierarchy).AllocatorInstance.Data;
  (__return_storage_ptr__->CategoryHierarchy).ArrayNum = iVar5 + 1;
  lVar8 = (longlong)iVar5;
  *(undefined8 *)(pFVar3 + lVar8 * 0x10) = 0;
  TVar4 = Metasound::NodeCategories::Trigger.TextData;
  *(ITextData **)(pFVar3 + lVar8 * 0x10) = Metasound::NodeCategories::Trigger.TextData.Reference;
  if (TVar4.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*TVar4.Reference + 8))(TVar4.Reference,&local_res10);
  }
  *(uint *)(pFVar3 + lVar8 * 0x10 + 8) = Metasound::NodeCategories::Trigger.Flags;
  if (local_88.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// operator() @ 14b23fa10

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::TTriggerOnThresholdOperator<float,float>::GetNodeInfo'::__l2::<lambda_1>::operator()
          (void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  int *piVar1;
  ITextData *pIVar2;
  TRefCountPtr<ITextData> TVar3;
  int iVar4;
  FName *pFVar5;
  FText *pFVar6;
  FScriptContainerElement *pFVar7;
  FName local_res10 [3];
  FText local_88;
  FNodeClassName local_78;
  FVertexInterface local_60;
  
  FText::FText(&local_88);
  Metasound::FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__);
  ::FName::FName(local_res10,L"TriggerOnThreshold");
  pFVar5 = Metasound::GetMetasoundDataTypeName<float>();
  Metasound::FNodeClassName::FNodeClassName
            (&local_78,&Metasound::StandardNodes::Namespace,local_res10,pFVar5);
  (__return_storage_ptr__->ClassName).Namespace.ComparisonIndex.Value =
       local_78.Namespace.ComparisonIndex.Value;
  (__return_storage_ptr__->ClassName).Namespace.Number = local_78.Namespace.Number;
  (__return_storage_ptr__->ClassName).Name.ComparisonIndex.Value =
       local_78.Name.ComparisonIndex.Value;
  (__return_storage_ptr__->ClassName).Name.Number = local_78.Name.Number;
  __return_storage_ptr__->MajorVersion = 1;
  __return_storage_ptr__->MinorVersion = 0;
  (__return_storage_ptr__->ClassName).Variant = local_78.Variant;
  pIVar2 = (__return_storage_ptr__->DisplayName).TextData.Reference;
  if (pIVar2 != local_88.TextData.Reference) {
    (__return_storage_ptr__->DisplayName).TextData.Reference = local_88.TextData.Reference;
    if (local_88.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_88.TextData.Reference + 8))
                (local_88.TextData.Reference,local_res10);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  (__return_storage_ptr__->DisplayName).Flags = local_88.Flags;
  pFVar6 = FText::FText((FText *)&local_78);
  FText::operator=(&__return_storage_ptr__->Description,pFVar6);
  if ((longlong *)CONCAT44(local_78.Namespace.Number,local_78.Namespace.ComparisonIndex.Value) !=
      (longlong *)0x0) {
    (**(code **)(*(longlong *)
                  CONCAT44(local_78.Namespace.Number,local_78.Namespace.ComparisonIndex.Value) +
                0x10))();
  }
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
  Metasound::TTriggerOnThresholdHelper<float,float>::DeclareVertexInterface
            (&local_60,&Metasound::TTriggerOnThresholdOperator<float,float>::DefaultThreshold);
  Metasound::FVertexInterface::operator=(&__return_storage_ptr__->DefaultInterface,&local_60);
  Metasound::FVertexInterface::~FVertexInterface(&local_60);
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
  if (local_88.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// operator() @ 14b23fbf0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::TTriggerOnThresholdOperator<Metasound::FAudioBuffer,float>::GetNodeInfo'::__l2::
<lambda_1>::operator()(void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  int *piVar1;
  ITextData *pIVar2;
  TRefCountPtr<ITextData> TVar3;
  int iVar4;
  FName *pFVar5;
  FText *pFVar6;
  FScriptContainerElement *pFVar7;
  FName local_res10 [3];
  FText local_88;
  FNodeClassName local_78;
  FVertexInterface local_60;
  
  FText::FText(&local_88);
  Metasound::FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__);
  ::FName::FName(local_res10,L"TriggerOnThreshold");
  pFVar5 = Metasound::GetMetasoundDataTypeName<Metasound::FAudioBuffer>();
  Metasound::FNodeClassName::FNodeClassName
            (&local_78,&Metasound::StandardNodes::Namespace,local_res10,pFVar5);
  (__return_storage_ptr__->ClassName).Namespace.ComparisonIndex.Value =
       local_78.Namespace.ComparisonIndex.Value;
  (__return_storage_ptr__->ClassName).Namespace.Number = local_78.Namespace.Number;
  (__return_storage_ptr__->ClassName).Name.ComparisonIndex.Value =
       local_78.Name.ComparisonIndex.Value;
  (__return_storage_ptr__->ClassName).Name.Number = local_78.Name.Number;
  __return_storage_ptr__->MajorVersion = 1;
  __return_storage_ptr__->MinorVersion = 0;
  (__return_storage_ptr__->ClassName).Variant = local_78.Variant;
  pIVar2 = (__return_storage_ptr__->DisplayName).TextData.Reference;
  if (pIVar2 != local_88.TextData.Reference) {
    (__return_storage_ptr__->DisplayName).TextData.Reference = local_88.TextData.Reference;
    if (local_88.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_88.TextData.Reference + 8))
                (local_88.TextData.Reference,local_res10);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  (__return_storage_ptr__->DisplayName).Flags = local_88.Flags;
  pFVar6 = FText::FText((FText *)&local_78);
  FText::operator=(&__return_storage_ptr__->Description,pFVar6);
  if ((longlong *)CONCAT44(local_78.Namespace.Number,local_78.Namespace.ComparisonIndex.Value) !=
      (longlong *)0x0) {
    (**(code **)(*(longlong *)
                  CONCAT44(local_78.Namespace.Number,local_78.Namespace.ComparisonIndex.Value) +
                0x10))();
  }
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
  Metasound::TTriggerOnThresholdHelper<Metasound::FAudioBuffer,float>::DeclareVertexInterface
            (&local_60,
             &Metasound::TTriggerOnThresholdOperator<Metasound::FAudioBuffer,float>::
              DefaultThreshold);
  Metasound::FVertexInterface::operator=(&__return_storage_ptr__->DefaultInterface,&local_60);
  Metasound::FVertexInterface::~FVertexInterface(&local_60);
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
  if (local_88.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// CreateOperator @ 14b25a830

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::TTriggerOnThresholdOperator<int,int>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FOperatorSettings *pFVar1;
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar2;
  FInputVertexInterfaceData *this_00;
  INode *pIVar3;
  FName local_res8;
  undefined1 local_88 [16];
  INode local_78;
  undefined1 local_68 [16];
  INode local_58;
  undefined1 local_48 [16];
  INode local_38;
  
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  FLazyName::Resolve(&TriggerOnThresholdVertexNames::InTriggerTypeName);
  FInputVertexInterfaceData::
  GetOrCreateDefaultDataReadReference<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>
            (this,(TDataReadReference<Metasound::TEnum<Metasound::EBufferTriggerType,0>_> *)local_48
             ,&local_res8,pFVar1);
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  this_00 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  FLazyName::Resolve(&TriggerOnThresholdVertexNames::InPinName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<int>
            (this_00,(TDataReadReference<int> *)local_88,&local_res8,pFVar2);
  FLazyName::Resolve(&TriggerOnThresholdVertexNames::InThresholdPinName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<int>
            (this,(TDataReadReference<int> *)local_68,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  pIVar3 = ::operator_new(0x90);
  if (pIVar3 == (INode *)0x0) {
    pIVar3 = (INode *)0x0;
  }
  else {
    *pIVar3 = (INode)&___7__TTriggerOnThresholdOperator_HH_Metasound__6B_;
    pIVar3[1] = (INode)&___7__TDataReference_H_Metasound__6B_;
    pIVar3[2] = (INode)local_88._8_8_;
    pIVar3[3] = local_78;
    if (local_78 != (INode)0x0) {
      *(int *)((longlong)local_78 + 8) = *(int *)((longlong)local_78 + 8) + 1;
    }
    pIVar3[1] = (INode)&___7__TDataReadReference_H_Metasound__6B_;
    pIVar3[5] = (INode)&___7__TDataReference_H_Metasound__6B_;
    pIVar3[6] = (INode)local_68._8_8_;
    pIVar3[7] = local_58;
    if (local_58 != (INode)0x0) {
      *(int *)((longlong)local_58 + 8) = *(int *)((longlong)local_58 + 8) + 1;
    }
    pIVar3[5] = (INode)&___7__TDataReadReference_H_Metasound__6B_;
    pIVar3[9] = (INode)&
                       ___7__TDataReference_V__TEnum_W4EBufferTriggerType_Metasound___0A__Metasound___Metasound__6B_
    ;
    pIVar3[10] = (INode)local_48._8_8_;
    pIVar3[0xb] = local_38;
    if (local_38 != (INode)0x0) {
      *(int *)((longlong)local_38 + 8) = *(int *)((longlong)local_38 + 8) + 1;
    }
    pIVar3[9] = (INode)&
                       ___7__TDataReadReference_V__TEnum_W4EBufferTriggerType_Metasound___0A__Metasound___Metasound__6B_
    ;
    TDataReference<Metasound::FTrigger>::
    TDataReference<Metasound::FTrigger><Metasound::FOperatorSettings_const_&>
              ((TDataReference<Metasound::FTrigger> *)(pIVar3 + 0xd),NewObject,pFVar1);
    pIVar3[0xd] = (INode)&___7__TDataWriteReference_VFTrigger_Metasound___Metasound__6B_;
    *(undefined1 *)(pIVar3 + 0x11) = 0;
    *(undefined4 *)&pIVar3[0x11].field_0x4 = 0;
  }
  param_1->Node = pIVar3;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_58);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_78);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_38);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b25aa00

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::TTriggerOnThresholdOperator<float,float>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FOperatorSettings *pFVar1;
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar2;
  FInputVertexInterfaceData *this_00;
  INode *pIVar3;
  FName local_res8;
  undefined1 local_88 [16];
  INode local_78;
  undefined1 local_68 [16];
  INode local_58;
  undefined1 local_48 [16];
  INode local_38;
  
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  FLazyName::Resolve(&TriggerOnThresholdVertexNames::InTriggerTypeName);
  FInputVertexInterfaceData::
  GetOrCreateDefaultDataReadReference<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>
            (this,(TDataReadReference<Metasound::TEnum<Metasound::EBufferTriggerType,0>_> *)local_48
             ,&local_res8,pFVar1);
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  this_00 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  FLazyName::Resolve(&TriggerOnThresholdVertexNames::InPinName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this_00,(TDataReadReference<float> *)local_88,&local_res8,pFVar2);
  FLazyName::Resolve(&TriggerOnThresholdVertexNames::InThresholdPinName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this,(TDataReadReference<float> *)local_68,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  pIVar3 = ::operator_new(0x90);
  if (pIVar3 == (INode *)0x0) {
    pIVar3 = (INode *)0x0;
  }
  else {
    *pIVar3 = (INode)&___7__TTriggerOnThresholdOperator_MM_Metasound__6B_;
    pIVar3[1] = (INode)&___7__TDataReference_M_Metasound__6B_;
    pIVar3[2] = (INode)local_88._8_8_;
    pIVar3[3] = local_78;
    if (local_78 != (INode)0x0) {
      *(int *)((longlong)local_78 + 8) = *(int *)((longlong)local_78 + 8) + 1;
    }
    pIVar3[1] = (INode)&___7__TDataReadReference_M_Metasound__6B_;
    pIVar3[5] = (INode)&___7__TDataReference_M_Metasound__6B_;
    pIVar3[6] = (INode)local_68._8_8_;
    pIVar3[7] = local_58;
    if (local_58 != (INode)0x0) {
      *(int *)((longlong)local_58 + 8) = *(int *)((longlong)local_58 + 8) + 1;
    }
    pIVar3[5] = (INode)&___7__TDataReadReference_M_Metasound__6B_;
    pIVar3[9] = (INode)&
                       ___7__TDataReference_V__TEnum_W4EBufferTriggerType_Metasound___0A__Metasound___Metasound__6B_
    ;
    pIVar3[10] = (INode)local_48._8_8_;
    pIVar3[0xb] = local_38;
    if (local_38 != (INode)0x0) {
      *(int *)((longlong)local_38 + 8) = *(int *)((longlong)local_38 + 8) + 1;
    }
    pIVar3[9] = (INode)&
                       ___7__TDataReadReference_V__TEnum_W4EBufferTriggerType_Metasound___0A__Metasound___Metasound__6B_
    ;
    TDataReference<Metasound::FTrigger>::
    TDataReference<Metasound::FTrigger><Metasound::FOperatorSettings_const_&>
              ((TDataReference<Metasound::FTrigger> *)(pIVar3 + 0xd),NewObject,pFVar1);
    pIVar3[0xd] = (INode)&___7__TDataWriteReference_VFTrigger_Metasound___Metasound__6B_;
    *(undefined1 *)(pIVar3 + 0x11) = 0;
    *(undefined4 *)&pIVar3[0x11].field_0x4 = 0;
  }
  param_1->Node = pIVar3;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_58);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_78);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_38);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b25abd0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::TTriggerOnThresholdOperator<Metasound::FAudioBuffer,float>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FOperatorSettings *pFVar1;
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar2;
  FInputVertexInterfaceData *this_00;
  INode *pIVar3;
  FName local_res8;
  undefined1 local_88 [16];
  INode local_78;
  undefined1 local_68 [16];
  INode local_58;
  undefined1 local_48 [16];
  INode local_38;
  
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  FLazyName::Resolve(&TriggerOnThresholdVertexNames::InTriggerTypeName);
  FInputVertexInterfaceData::
  GetOrCreateDefaultDataReadReference<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>
            (this,(TDataReadReference<Metasound::TEnum<Metasound::EBufferTriggerType,0>_> *)local_48
             ,&local_res8,pFVar1);
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  this_00 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  FLazyName::Resolve(&TriggerOnThresholdVertexNames::InPinName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FAudioBuffer>
            (this_00,(TDataReadReference<Metasound::FAudioBuffer> *)local_88,&local_res8,pFVar2);
  FLazyName::Resolve(&TriggerOnThresholdVertexNames::InThresholdPinName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this,(TDataReadReference<float> *)local_68,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  pIVar3 = ::operator_new(0x90);
  if (pIVar3 == (INode *)0x0) {
    pIVar3 = (INode *)0x0;
  }
  else {
    *pIVar3 = (INode)&___7__TTriggerOnThresholdOperator_VFAudioBuffer_Metasound__M_Metasound__6B_;
    pIVar3[1] = (INode)&___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_;
    pIVar3[2] = (INode)local_88._8_8_;
    pIVar3[3] = local_78;
    if (local_78 != (INode)0x0) {
      *(int *)((longlong)local_78 + 8) = *(int *)((longlong)local_78 + 8) + 1;
    }
    pIVar3[1] = (INode)&___7__TDataReadReference_VFAudioBuffer_Metasound___Metasound__6B_;
    pIVar3[5] = (INode)&___7__TDataReference_M_Metasound__6B_;
    pIVar3[6] = (INode)local_68._8_8_;
    pIVar3[7] = local_58;
    if (local_58 != (INode)0x0) {
      *(int *)((longlong)local_58 + 8) = *(int *)((longlong)local_58 + 8) + 1;
    }
    pIVar3[5] = (INode)&___7__TDataReadReference_M_Metasound__6B_;
    pIVar3[9] = (INode)&
                       ___7__TDataReference_V__TEnum_W4EBufferTriggerType_Metasound___0A__Metasound___Metasound__6B_
    ;
    pIVar3[10] = (INode)local_48._8_8_;
    pIVar3[0xb] = local_38;
    if (local_38 != (INode)0x0) {
      *(int *)((longlong)local_38 + 8) = *(int *)((longlong)local_38 + 8) + 1;
    }
    pIVar3[9] = (INode)&
                       ___7__TDataReadReference_V__TEnum_W4EBufferTriggerType_Metasound___0A__Metasound___Metasound__6B_
    ;
    TDataReference<Metasound::FTrigger>::
    TDataReference<Metasound::FTrigger><Metasound::FOperatorSettings_const_&>
              ((TDataReference<Metasound::FTrigger> *)(pIVar3 + 0xd),NewObject,pFVar1);
    pIVar3[0xd] = (INode)&___7__TDataWriteReference_VFTrigger_Metasound___Metasound__6B_;
    *(undefined1 *)(pIVar3 + 0x11) = 0;
    *(undefined4 *)&pIVar3[0x11].field_0x4 = 0;
  }
  param_1->Node = pIVar3;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_58);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_78);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_38);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// Execute @ 14b271520

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Metasound::TTriggerOnThresholdOperator<Metasound::FAudioBuffer,float>::Execute
          (TTriggerOnThresholdOperator<Metasound::FAudioBuffer,float> *this)

{
  undefined1 *puVar1;
  int iVar2;
  float *pfVar3;
  undefined8 *puVar4;
  bool bVar5;
  int iVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  
  puVar1 = &(this->Out).field_0x8;
  FTrigger::AdvanceBlock(*(FTrigger **)puVar1);
  iVar2 = **(int **)&(this->TriggerType).field_0x8;
  if (iVar2 != 0) {
    if (iVar2 == 1) {
      pfVar3 = *(float **)&(this->Threshold).field_0x8;
      puVar4 = *(undefined8 **)&(this->In).field_0x8;
      if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar4 + 2) != *(int *)(puVar4 + 1))) {
        UE::Logging::Private::BasicLog<2>
                  (&`public:_float_const*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)const___ptr64'
                    ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      }
      pfVar7 = (float *)*puVar4;
      if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar4 + 2) != *(int *)(puVar4 + 1))) {
        UE::Logging::Private::BasicLog<2>
                  (&`public:_int___cdecl_Metasound::FAudioBuffer::Num(void)const___ptr64'::__l3::
                    LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      }
      iVar2 = *(int *)(puVar4 + 1);
      iVar6 = 0;
      fVar9 = this->LastSample;
      if (0 < iVar2) {
        do {
          fVar8 = *pfVar3;
          bVar5 = fVar8 <= fVar9;
          fVar9 = *pfVar7;
          if ((bVar5) && (fVar9 < fVar8)) {
            FTrigger::TriggerFrame(*(FTrigger **)&(this->Out).field_0x8,iVar6);
          }
          pfVar7 = pfVar7 + 1;
          iVar6 = iVar6 + 1;
        } while (iVar6 < iVar2);
      }
      goto LAB_14b27176b;
    }
    if (iVar2 == 2) {
      pfVar3 = *(float **)&(this->Threshold).field_0x8;
      puVar4 = *(undefined8 **)&(this->In).field_0x8;
      if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar4 + 2) != *(int *)(puVar4 + 1))) {
        UE::Logging::Private::BasicLog<2>
                  (&`public:_float_const*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)const___ptr64'
                    ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      }
      pfVar7 = (float *)*puVar4;
      if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar4 + 2) != *(int *)(puVar4 + 1))) {
        UE::Logging::Private::BasicLog<2>
                  (&`public:_int___cdecl_Metasound::FAudioBuffer::Num(void)const___ptr64'::__l3::
                    LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      }
      iVar2 = *(int *)(puVar4 + 1);
      iVar6 = 0;
      fVar9 = *pfVar3;
      fVar9 = fVar9 * fVar9;
      if (iVar2 < 1) {
        return;
      }
      do {
        fVar8 = *pfVar7 * *pfVar7;
        if (fVar8 <= fVar9) {
          if ((fVar8 < fVar9) && (this->bTriggered != false)) {
            this->bTriggered = false;
          }
        }
        else if (this->bTriggered == false) {
          this->bTriggered = true;
          FTrigger::TriggerFrame(*(FTrigger **)puVar1,iVar6);
        }
        pfVar7 = pfVar7 + 1;
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar2);
      return;
    }
  }
  pfVar3 = *(float **)&(this->Threshold).field_0x8;
  puVar4 = *(undefined8 **)&(this->In).field_0x8;
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar4 + 2) != *(int *)(puVar4 + 1))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_float_const*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  pfVar7 = (float *)*puVar4;
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar4 + 2) != *(int *)(puVar4 + 1))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_int___cdecl_Metasound::FAudioBuffer::Num(void)const___ptr64'::__l3::
                LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  iVar2 = *(int *)(puVar4 + 1);
  iVar6 = 0;
  fVar9 = this->LastSample;
  if (0 < iVar2) {
    do {
      fVar8 = *pfVar3;
      bVar5 = fVar9 <= fVar8;
      fVar9 = *pfVar7;
      if ((bVar5) && (fVar8 < fVar9)) {
        FTrigger::TriggerFrame(*(FTrigger **)&(this->Out).field_0x8,iVar6);
      }
      pfVar7 = pfVar7 + 1;
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar2);
  }
LAB_14b27176b:
  this->LastSample = fVar9;
  return;
}

// GetNodeInfo @ 14b27ce50

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl Metasound::TTriggerOnThresholdOperator<int,int>::GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerOnThresholdOperator<int,int>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerOnThresholdOperator<int,int>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerOnThresholdOperator<int,int>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::TTriggerOnThresholdOperator<int,int>::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerOnThresholdOperator<int,int>::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::TTriggerOnThresholdOperator<int,int>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerOnThresholdOperator<int,int>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerOnThresholdOperator<int,int>::GetNodeInfo(void)'
              ::__l2::Info;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerOnThresholdOperator<int,int>::GetNodeInfo(void)'
          ::__l2::Info;
}

// GetNodeInfo @ 14b27cee0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl Metasound::TTriggerOnThresholdOperator<float,float>::GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerOnThresholdOperator<float,float>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerOnThresholdOperator<float,float>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerOnThresholdOperator<float,float>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::TTriggerOnThresholdOperator<float,float>::GetNodeInfo'::__l2::<lambda_1>::
      operator()(local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerOnThresholdOperator<float,float>::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::TTriggerOnThresholdOperator<float,float>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerOnThresholdOperator<float,float>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerOnThresholdOperator<float,float>::GetNodeInfo(void)'
              ::__l2::Info;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerOnThresholdOperator<float,float>::GetNodeInfo(void)'
          ::__l2::Info;
}

// GetNodeInfo @ 14b27cf70

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TTriggerOnThresholdOperator<Metasound::FAudioBuffer,float>::GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerOnThresholdOperator<Metasound::FAudioBuffer,float>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerOnThresholdOperator<Metasound::FAudioBuffer,float>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerOnThresholdOperator<Metasound::FAudioBuffer,float>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::TTriggerOnThresholdOperator<Metasound::FAudioBuffer,float>::GetNodeInfo'::__l2::
      <lambda_1>::operator()
                (local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerOnThresholdOperator<Metasound::FAudioBuffer,float>::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::TTriggerOnThresholdOperator<Metasound::FAudioBuffer,float>::GetNodeInfo'::
             __l2::_dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerOnThresholdOperator<Metasound::FAudioBuffer,float>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerOnThresholdOperator<Metasound::FAudioBuffer,float>::GetNodeInfo(void)'
              ::__l2::Info;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerOnThresholdOperator<Metasound::FAudioBuffer,float>::GetNodeInfo(void)'
          ::__l2::Info;
}

// Reset @ 14b28a730

void __thiscall
Metasound::TTriggerOnThresholdOperator<int,int>::Reset
          (TTriggerOnThresholdOperator<int,int> *this,FResetParams *param_1)

{
  FTrigger::Reset(*(FTrigger **)&(this->Out).field_0x8);
  this->bTriggered = false;
  this->LastSample = 0;
  return;
}

// Reset @ 14b28a760

void __thiscall
Metasound::TTriggerOnThresholdOperator<float,float>::Reset
          (TTriggerOnThresholdOperator<float,float> *this,FResetParams *param_1)

{
  FTrigger::Reset(*(FTrigger **)&(this->Out).field_0x8);
  this->bTriggered = false;
  this->LastSample = 0.0;
  return;
}

// Reset @ 14b28a790

void __thiscall
Metasound::TTriggerOnThresholdOperator<Metasound::FAudioBuffer,float>::Reset
          (TTriggerOnThresholdOperator<Metasound::FAudioBuffer,float> *this,FResetParams *param_1)

{
  FTrigger::Reset(*(FTrigger **)&(this->Out).field_0x8);
  this->bTriggered = false;
  this->LastSample = 0.0;
  return;
}

