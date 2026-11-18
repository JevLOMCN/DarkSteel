// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 7

// BindInputs @ 14b086730

void __thiscall
Metasound::FFlangerOperator::BindInputs(FFlangerOperator *this,FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataReadReference<Metasound::FAudioBuffer> *local_res18;
  undefined1 local_48 [16];
  code *local_38;
  TDataReadReference<Metasound::FAudioBuffer> **local_30;
  undefined1 local_28 [16];
  
  FLazyName::Resolve(&FlangerVertexNames::InputAudioName);
  local_res18 = &this->AudioIn;
  local_30 = &local_res18;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FAudioBuffer>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_28._8_8_ = local_48;
  local_48._0_8_ = &local_res8;
  local_28._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FAudioBuffer>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_48._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_28,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_38)
  ;
  FLazyName::Resolve(&FlangerVertexNames::InputModulationRateName);
  local_res18 = (TDataReadReference<Metasound::FAudioBuffer> *)&this->ModulationRate;
  local_30 = &local_res18;
  local_28._0_8_ = &local_res8;
  local_48._8_8_ = local_28;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
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
  FLazyName::Resolve(&FlangerVertexNames::InputModulationDepthName);
  local_res18 = (TDataReadReference<Metasound::FAudioBuffer> *)&this->ModulationDepth;
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
  FLazyName::Resolve(&FlangerVertexNames::InputCenterDelayName);
  local_res18 = (TDataReadReference<Metasound::FAudioBuffer> *)&this->CenterDelay;
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
  FLazyName::Resolve(&FlangerVertexNames::InputMixLevelName);
  local_res18 = (TDataReadReference<Metasound::FAudioBuffer> *)&this->MixLevel;
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
  return;
}

// BindOutputs @ 14b086920

void __thiscall
Metasound::FFlangerOperator::BindOutputs(FFlangerOperator *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<Metasound::FAudioBuffer> *local_res18 [2];
  FName *local_38;
  TDataWriteReference<Metasound::FAudioBuffer> *local_30;
  code *local_28;
  TDataWriteReference<Metasound::FAudioBuffer> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&FlangerVertexNames::OutputAudioName);
  local_res18[0] = &this->AudioOut;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FAudioBuffer>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::FAudioBuffer>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_30 = local_res18[0];
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// operator() @ 14b0bbcc0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::FFlangerOperator::GetNodeInfo'::__l2::<lambda_1>::operator()
          (void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  ITextData *pIVar1;
  TRefCountPtr<ITextData> TVar2;
  FVertexInterface *pFVar3;
  FName local_res10;
  FName local_res18 [2];
  FNodeClassName local_48;
  FText local_30;
  FText local_20;
  
  ::FName::FName(local_res18,L"Flanger");
  FText::FText(&local_20);
  FText::FText(&local_30);
  Metasound::FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__);
  ::FName::FName(&local_res10,L"");
  Metasound::FNodeClassName::FNodeClassName
            (&local_48,&Metasound::StandardNodes::Namespace,local_res18,&local_res10);
  (__return_storage_ptr__->ClassName).Namespace.ComparisonIndex.Value =
       local_48.Namespace.ComparisonIndex.Value;
  (__return_storage_ptr__->ClassName).Namespace.Number = local_48.Namespace.Number;
  (__return_storage_ptr__->ClassName).Name.ComparisonIndex.Value =
       local_48.Name.ComparisonIndex.Value;
  (__return_storage_ptr__->ClassName).Name.Number = local_48.Name.Number;
  __return_storage_ptr__->MajorVersion = 1;
  __return_storage_ptr__->MinorVersion = 0;
  (__return_storage_ptr__->ClassName).Variant = local_48.Variant;
  pIVar1 = (__return_storage_ptr__->DisplayName).TextData.Reference;
  if (pIVar1 != local_20.TextData.Reference) {
    (__return_storage_ptr__->DisplayName).TextData.Reference = local_20.TextData.Reference;
    if (local_20.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_20.TextData.Reference + 8))
                (local_20.TextData.Reference,&local_res10);
    }
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
    }
  }
  (__return_storage_ptr__->DisplayName).Flags = local_20.Flags;
  pIVar1 = (__return_storage_ptr__->Description).TextData.Reference;
  if (pIVar1 != local_30.TextData.Reference) {
    (__return_storage_ptr__->Description).TextData.Reference = local_30.TextData.Reference;
    if (local_30.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_30.TextData.Reference + 8))
                (local_30.TextData.Reference,&local_res10);
    }
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
    }
  }
  (__return_storage_ptr__->Description).Flags = local_30.Flags;
  ::FString::operator=(&__return_storage_ptr__->Author,&Metasound::PluginAuthor);
  local_48.Namespace = (FName)Metasound::NodeCategories::Filters.TextData.Reference;
  if (Metasound::NodeCategories::Filters.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*Metasound::NodeCategories::Filters.TextData.Reference + 8))
              (Metasound::NodeCategories::Filters.TextData.Reference,&local_res10);
  }
  local_48.Name.ComparisonIndex.Value = Metasound::NodeCategories::Filters.Flags;
  DestructItems<FText,int>
            ((FText *)(__return_storage_ptr__->CategoryHierarchy).AllocatorInstance.Data,
             (__return_storage_ptr__->CategoryHierarchy).ArrayNum);
  TArray<FText,TSizedDefaultAllocator<32>_>::CopyToEmpty<FText,int>
            (&__return_storage_ptr__->CategoryHierarchy,(FText *)&local_48,1,
             (__return_storage_ptr__->CategoryHierarchy).ArrayMax);
  if (local_48.Namespace != (FName)0x0) {
    (**(code **)((longlong)*(ITextData *)local_48.Namespace + 0x10))();
  }
  TVar2.Reference = Metasound::PluginNodeMissingPrompt.TextData.Reference;
  pIVar1 = (__return_storage_ptr__->PromptIfMissing).TextData.Reference;
  if (pIVar1 != Metasound::PluginNodeMissingPrompt.TextData.Reference) {
    (__return_storage_ptr__->PromptIfMissing).TextData.Reference =
         Metasound::PluginNodeMissingPrompt.TextData.Reference;
    if (TVar2.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar2.Reference + 8))(TVar2.Reference,&local_res10);
    }
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
    }
  }
  (__return_storage_ptr__->PromptIfMissing).Flags = Metasound::PluginNodeMissingPrompt.Flags;
  pFVar3 = Metasound::FFlangerOperator::GetVertexInterface();
  Metasound::FVertexInterface::operator=(&__return_storage_ptr__->DefaultInterface,pFVar3);
  if (local_30.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_30.TextData.Reference + 0x10))();
  }
  if (local_20.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_20.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// CreateOperator @ 14b0cc3d0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::FFlangerOperator::CreateOperator(FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  int iVar1;
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar2;
  int *piVar3;
  INode *pIVar4;
  FName local_res20;
  undefined1 local_d8 [16];
  INode local_c8;
  undefined1 local_b8 [16];
  INode local_a8;
  undefined1 local_98 [16];
  INode local_88;
  undefined1 local_78 [16];
  INode local_68;
  undefined1 local_58 [16];
  INode local_48;
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&FlangerVertexNames::InputAudioName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FAudioBuffer>
            (this,(TDataReadReference<Metasound::FAudioBuffer> *)local_d8,&local_res20,pFVar2);
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&FlangerVertexNames::InputModulationRateName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this,(TDataReadReference<float> *)local_b8,&local_res20,pFVar2);
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&FlangerVertexNames::InputModulationDepthName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this,(TDataReadReference<float> *)local_98,&local_res20,pFVar2);
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&FlangerVertexNames::InputCenterDelayName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this,(TDataReadReference<float> *)local_78,&local_res20,pFVar2);
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&FlangerVertexNames::InputMixLevelName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this,(TDataReadReference<float> *)local_58,&local_res20,pFVar2);
  pIVar4 = ::operator_new(0x1a0);
  if (pIVar4 == (INode *)0x0) {
    pIVar4 = (INode *)0x0;
  }
  else {
    *pIVar4 = (INode)&___7FFlangerOperator_Metasound__6B_;
    pIVar4[1] = (INode)&___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_;
    pIVar4[2] = (INode)local_d8._8_8_;
    pIVar4[3] = local_c8;
    if (local_c8 != (INode)0x0) {
      *(int *)((longlong)local_c8 + 8) = *(int *)((longlong)local_c8 + 8) + 1;
    }
    pIVar4[1] = (INode)&___7__TDataReadReference_VFAudioBuffer_Metasound___Metasound__6B_;
    pIVar4[5] = (INode)&___7__TDataReference_M_Metasound__6B_;
    pIVar4[6] = (INode)local_b8._8_8_;
    pIVar4[7] = local_a8;
    if (local_a8 != (INode)0x0) {
      *(int *)((longlong)local_a8 + 8) = *(int *)((longlong)local_a8 + 8) + 1;
    }
    pIVar4[5] = (INode)&___7__TDataReadReference_M_Metasound__6B_;
    pIVar4[9] = (INode)&___7__TDataReference_M_Metasound__6B_;
    pIVar4[10] = (INode)local_98._8_8_;
    pIVar4[0xb] = local_88;
    if (local_88 != (INode)0x0) {
      *(int *)((longlong)local_88 + 8) = *(int *)((longlong)local_88 + 8) + 1;
    }
    pIVar4[9] = (INode)&___7__TDataReadReference_M_Metasound__6B_;
    pIVar4[0xd] = (INode)&___7__TDataReference_M_Metasound__6B_;
    pIVar4[0xe] = (INode)local_78._8_8_;
    pIVar4[0xf] = local_68;
    if (local_68 != (INode)0x0) {
      *(int *)((longlong)local_68 + 8) = *(int *)((longlong)local_68 + 8) + 1;
    }
    pIVar4[0xd] = (INode)&___7__TDataReadReference_M_Metasound__6B_;
    pIVar4[0x11] = (INode)&___7__TDataReference_M_Metasound__6B_;
    pIVar4[0x12] = (INode)local_58._8_8_;
    pIVar4[0x13] = local_48;
    if (local_48 != (INode)0x0) {
      *(int *)((longlong)local_48 + 8) = *(int *)((longlong)local_48 + 8) + 1;
    }
    pIVar4[0x11] = (INode)&___7__TDataReadReference_M_Metasound__6B_;
    TDataReference<Metasound::FAudioBuffer>::
    TDataReference<Metasound::FAudioBuffer><Metasound::FOperatorSettings_const_&>
              ((TDataReference<Metasound::FAudioBuffer> *)(pIVar4 + 0x15),NewObject,
               *(FOperatorSettings **)&(param_2->Errors).ArrayNum);
    pIVar4[0x15] = (INode)&___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
    Audio::FFlanger::FFlanger((FFlanger *)(pIVar4 + 0x1a));
    piVar3 = *(int **)&(param_2->Errors).ArrayNum;
    iVar1 = *(int *)((longlong)pIVar4[0x16] + 8);
    if (0 < iVar1) {
      memset(*(void **)pIVar4[0x16],0,(longlong)iVar1 << 2);
    }
    Audio::FFlanger::Init((FFlanger *)(pIVar4 + 0x1a),(float)*piVar3);
  }
  param_1->Node = pIVar4;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_48);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_68);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_88);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_a8);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_c8);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// GetNodeInfo @ 14b0d95b0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl Metasound::FFlangerOperator::GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FFlangerOperator::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FFlangerOperator::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FFlangerOperator::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::FFlangerOperator::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FFlangerOperator::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::FFlangerOperator::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FFlangerOperator::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FFlangerOperator::GetNodeInfo(void)'
              ::__l2::Info;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FFlangerOperator::GetNodeInfo(void)'
          ::__l2::Info;
}

// GetVertexInterface @ 14b0dfc60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl Metasound::FFlangerOperator::GetVertexInterface(void)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::FAudioBuffer> *pTVar3;
  FInputDataVertex *pFVar4;
  FInputDataVertex *pFVar5;
  FInputDataVertex *pFVar6;
  FInputDataVertex *pFVar7;
  FInputDataVertex *pFVar8;
  FVertexInterface *pFVar9;
  undefined1 auStackY_228 [32];
  float local_1f8;
  float local_1f4;
  float local_1f0;
  float local_1ec;
  FInputVertexInterface local_1e8;
  FOutputVertexInterface local_1c8;
  FInputVertexInterfaceDeclarationBuilder local_1a8;
  FOutputVertexInterfaceDeclarationBuilder local_180;
  TOutputDataVertex<Metasound::FAudioBuffer> local_158;
  TInputDataVertex<Metasound::FAudioBuffer> local_138;
  TInputDataVertex<float> local_100;
  TInputDataVertex<float> local_c8;
  TInputDataVertex<float> local_90;
  TInputDataVertex<float> local_58;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_228;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FFlangerOperator::GetVertexInterface(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FFlangerOperator::GetVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FFlangerOperator::GetVertexInterface(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    pTVar3 = TOutputDataVertex<Metasound::FAudioBuffer>::
             TOutputDataVertex<Metasound::FAudioBuffer><>
                       (&local_158,&FlangerVertexNames::OutputAudioName,
                        &FDataVertexMetadata::EmptyBasic);
    FOutputVertexInterface::FOutputVertexInterface(&local_1c8);
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::
    FOutputVertexInterfaceDeclarationBuilder
              (&local_180,
               (TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *)&local_1c8,
               &local_1c8.SubInterfaces);
    if ((local_180.Vertices)->ArrayMax < 1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,1,&(local_180.Vertices)->AllocatorInstance,(local_180.Vertices)->ArrayNum,
                 &(local_180.Vertices)->ArrayMax);
    }
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
              (&local_180,(FOutputDataVertex *)pTVar3);
    VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
              ((FSubInterfaceDeclarationBuilder *)&local_180);
    local_1f8 = 0.5;
    pFVar4 = (FInputDataVertex *)
             TInputDataVertex<float>::TInputDataVertex<float><float>
                       (&local_58,&FlangerVertexNames::InputMixLevelName,
                        &FDataVertexMetadata::EmptyBasic,&local_1f8);
    local_1f4 = 0.5;
    pFVar5 = (FInputDataVertex *)
             TInputDataVertex<float>::TInputDataVertex<float><float>
                       (&local_90,&FlangerVertexNames::InputCenterDelayName,
                        &FDataVertexMetadata::EmptyBasic,&local_1f4);
    local_1f0 = 0.5;
    pFVar6 = (FInputDataVertex *)
             TInputDataVertex<float>::TInputDataVertex<float><float>
                       (&local_c8,&FlangerVertexNames::InputModulationDepthName,
                        &FDataVertexMetadata::EmptyBasic,&local_1f0);
    local_1ec = 0.5;
    pFVar7 = (FInputDataVertex *)
             TInputDataVertex<float>::TInputDataVertex<float><float>
                       (&local_100,&FlangerVertexNames::InputModulationRateName,
                        &FDataVertexMetadata::EmptyBasic,&local_1ec);
    pFVar8 = (FInputDataVertex *)
             TInputDataVertex<Metasound::FAudioBuffer>::TInputDataVertex<Metasound::FAudioBuffer><>
                       (&local_138,&FlangerVertexNames::InputAudioName,
                        &FDataVertexMetadata::EmptyBasic);
    local_1e8._padding_ = 0;
    local_1e8._padding_ = 0;
    local_1e8.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1e8.SubInterfaces.ArrayNum = 0;
    local_1e8.SubInterfaces.ArrayMax = 0;
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::FInputVertexInterfaceDeclarationBuilder
              (&local_1a8,
               (TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)&local_1e8,
               &local_1e8.SubInterfaces);
    if ((local_1a8.Vertices)->ArrayMax < 5) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,5,&(local_1a8.Vertices)->AllocatorInstance,(local_1a8.Vertices)->ArrayNum,
                 &(local_1a8.Vertices)->ArrayMax);
    }
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_1a8,pFVar8);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_1a8,pFVar7);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_1a8,pFVar6);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_1a8,pFVar5);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_1a8,pFVar4);
    VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
              ((FSubInterfaceDeclarationBuilder *)&local_1a8);
    FVertexInterface::FVertexInterface
              (&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FFlangerOperator::GetVertexInterface(void)'
                ::__l2::Interface,&local_1e8,&local_1c8);
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_1e8.SubInterfaces.AllocatorInstance.Data,
               local_1e8.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_1e8.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_1e8.SubInterfaces.AllocatorInstance.Data);
    }
    DestructItems<Metasound::FInputDataVertex,int>
              ((FInputDataVertex *)local_1e8._padding_,(int)local_1e8._padding_);
    if ((FInputDataVertex *)local_1e8._padding_ != (FInputDataVertex *)0x0) {
      FMemory::Free((void *)local_1e8._padding_);
    }
    if ((0xc < (byte)local_138._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar9 = (FVertexInterface *)(*pcVar1)();
      return pFVar9;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_138._48_1_])(&local_138.field_0x20);
    if ((0xc < (byte)local_100._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar9 = (FVertexInterface *)(*pcVar1)();
      return pFVar9;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_100._48_1_])(&local_100.field_0x20);
    if ((0xc < (byte)local_c8._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar9 = (FVertexInterface *)(*pcVar1)();
      return pFVar9;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_c8._48_1_])(&local_c8.field_0x20);
    if ((0xc < (byte)local_90._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar9 = (FVertexInterface *)(*pcVar1)();
      return pFVar9;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_90._48_1_])(&local_90.field_0x20);
    if ((0xc < (byte)local_58._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar9 = (FVertexInterface *)(*pcVar1)();
      return pFVar9;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_58._48_1_])(&local_58.field_0x20);
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_1c8.SubInterfaces.AllocatorInstance.Data,
               local_1c8.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_1c8.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_1c8.SubInterfaces.AllocatorInstance.Data);
    }
    if ((void *)local_1c8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_1c8._padding_);
    }
    atexit(`Metasound::FFlangerOperator::GetVertexInterface'::__l2::
           _dynamic_atexit_destructor_for__Interface__);
    _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FFlangerOperator::GetVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  return &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FFlangerOperator::GetVertexInterface(void)'
          ::__l2::Interface;
}

// Reset @ 14b0e51b0

void __thiscall Metasound::FFlangerOperator::Reset(FFlangerOperator *this,FResetParams *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)&(this->AudioOut).field_0x8;
  iVar1 = *(int *)(puVar2 + 1);
  if (0 < iVar1) {
    memset((void *)*puVar2,0,(longlong)iVar1 << 2);
  }
  Audio::FFlanger::Init(&this->Flanger,(float)param_1->OperatorSettings->SampleRate);
  return;
}

