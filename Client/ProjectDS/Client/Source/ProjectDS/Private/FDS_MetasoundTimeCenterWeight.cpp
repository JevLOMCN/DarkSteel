// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 8

// FDS_MetasoundTimeCenterWeight @ 14bba86e0

FDS_MetasoundTimeCenterWeight * __thiscall
Metasound::FDS_MetasoundTimeCenterWeight::FDS_MetasoundTimeCenterWeight
          (FDS_MetasoundTimeCenterWeight *this,FBuildOperatorParams *param_1,
          TDataReadReference<float> *param_2,TDataReadReference<float> *param_3,
          TDataReadReference<float> *param_4)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  FDS_MetasoundTimeCenterWeight *pFVar4;
  
  this->_padding_ = (longlong)&___7FDS_MetasoundTimeCenterWeight_Metasound__6B_;
  TDataReference<float>::TDataReference<float><>
            ((TDataReference<float> *)&this->WeightValue,NewObject);
  *(undefined ***)&this->WeightValue = &___7__TDataWriteReference_M_Metasound__6B_;
  *(undefined ***)&this->ParamTime = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)&(this->ParamTime).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->ParamTime).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->ParamTime = &___7__TDataReadReference_M_Metasound__6B_;
  *(undefined ***)&this->ParamStartTime = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)&(this->ParamStartTime).field_0x8 = *(undefined8 *)&param_3->field_0x8;
  lVar1 = *(longlong *)&param_3->field_0x10;
  *(longlong *)&(this->ParamStartTime).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->ParamStartTime = &___7__TDataReadReference_M_Metasound__6B_;
  *(undefined ***)&this->ParamEndTime = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)&(this->ParamEndTime).field_0x8 = *(undefined8 *)&param_4->field_0x8;
  lVar1 = *(longlong *)&param_4->field_0x10;
  *(longlong *)&(this->ParamEndTime).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->ParamEndTime = &___7__TDataReadReference_M_Metasound__6B_;
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_2117240275007963085>,true,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Sound\\DS_MetasoundTimeCenterWeight.cpp"
                     ,0x33,"false");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FDS_MetasoundTimeCenterWeight *)(*pcVar2)();
    return pFVar4;
  }
  UpdateTime(this);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_3->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_4->field_0x10);
  return this;
}

// BindInputs @ 14bbac170

void __thiscall
Metasound::FDS_MetasoundTimeCenterWeight::BindInputs
          (FDS_MetasoundTimeCenterWeight *this,FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataReadReference<float> *local_res18;
  undefined1 local_48 [16];
  code *local_38;
  TDataReadReference<float> **local_30;
  undefined1 local_28 [16];
  
  FLazyName::Resolve(&DS_MetaSoundTimeCenterWeightNames::InputTimeName);
  local_res18 = &this->ParamTime;
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
  FLazyName::Resolve(&DS_MetaSoundTimeCenterWeightNames::InputStartTimeName);
  local_res18 = &this->ParamStartTime;
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
  FLazyName::Resolve(&DS_MetaSoundTimeCenterWeightNames::InputEndTimeName);
  local_res18 = &this->ParamEndTime;
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

// BindOutputs @ 14bbac2c0

void __thiscall
Metasound::FDS_MetasoundTimeCenterWeight::BindOutputs
          (FDS_MetasoundTimeCenterWeight *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<float> *local_res18 [2];
  FName *local_38;
  TDataWriteReference<float> *local_30;
  code *local_28;
  TDataWriteReference<float> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&DS_MetaSoundTimeCenterWeightNames::OutputWeightValueName);
  local_res18[0] = &this->WeightValue;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<float>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_30 = local_res18[0];
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// CreateOperator @ 14bbb25f0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::FDS_MetasoundTimeCenterWeight::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar1;
  TReferenceControllerBase<0> *pTVar2;
  FDS_MetasoundTimeCenterWeight *this_00;
  FDS_MetasoundTimeCenterWeight *pFVar3;
  FName local_res8;
  undefined **local_98 [2];
  TReferenceControllerBase<0> *local_88;
  undefined **local_78 [2];
  TReferenceControllerBase<0> *local_68;
  undefined **local_58 [2];
  TReferenceControllerBase<0> *local_48;
  undefined1 local_38 [32];
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&DS_MetaSoundTimeCenterWeightNames::InputTimeName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this,(TDataReadReference<float> *)local_38,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&DS_MetaSoundTimeCenterWeightNames::InputStartTimeName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this,(TDataReadReference<float> *)local_78,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&DS_MetaSoundTimeCenterWeightNames::InputEndTimeName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this,(TDataReadReference<float> *)local_58,&local_res8,pFVar1);
  this_00 = ::operator_new(0x88);
  pTVar2 = local_48;
  pFVar3 = (FDS_MetasoundTimeCenterWeight *)0x0;
  if (this_00 != (FDS_MetasoundTimeCenterWeight *)0x0) {
    local_98[1] = local_58[1];
    local_88 = local_48;
    if (local_48 != (TReferenceControllerBase<0> *)0x0) {
      local_48->SharedReferenceCount = local_48->SharedReferenceCount + 1;
    }
    local_98[0] = &___7__TDataReadReference_M_Metasound__6B_;
    if (local_68 != (TReferenceControllerBase<0> *)0x0) {
      local_68->SharedReferenceCount = local_68->SharedReferenceCount + 1;
    }
    local_58[1] = (undefined **)local_38._8_8_;
    local_78[0] = &___7__TDataReadReference_M_Metasound__6B_;
    local_48 = (TReferenceControllerBase<0> *)local_38._16_8_;
    if ((TReferenceControllerBase<0> *)local_38._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_38._16_8_ + 8) = *(int *)(local_38._16_8_ + 8) + 1;
    }
    local_58[0] = &___7__TDataReadReference_M_Metasound__6B_;
    pFVar3 = FDS_MetasoundTimeCenterWeight
                       (this_00,(FBuildOperatorParams *)param_2,
                        (TDataReadReference<float> *)local_58,(TDataReadReference<float> *)local_78,
                        (TDataReadReference<float> *)local_98);
  }
  param_1->Node = (INode *)pFVar3;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_68);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_38._16_8_);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// GetNodeInfo @ 14bbbc720

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl Metasound::FDS_MetasoundTimeCenterWeight::GetNodeInfo(void)

{
  TRefCountPtr<ITextData> TVar1;
  FVertexInterface *pFVar2;
  FText *pFVar3;
  FName local_res8;
  FName local_res10;
  FNodeClassName local_28;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FDS_MetasoundTimeCenterWeight::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FDS_MetasoundTimeCenterWeight::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FDS_MetasoundTimeCenterWeight::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FDS_MetasoundTimeCenterWeight::GetNodeInfo(void)'
                  ::__l2::Info);
      ::FName::FName(&local_res10,"DS_MetasoundTimeCenterWeight");
      ::FName::FName(&local_res8,"");
      FNodeClassName::FNodeClassName(&local_28,&StandardNodes::Namespace,&local_res10,&local_res8);
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FDS_MetasoundTimeCenterWeight::GetNodeInfo(void)'
      ::__l2::Info.ClassName.Name.Number = local_28.Name.Number;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FDS_MetasoundTimeCenterWeight::GetNodeInfo(void)'
      ::__l2::Info.ClassName.Name.ComparisonIndex.Value = local_28.Name.ComparisonIndex.Value;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FDS_MetasoundTimeCenterWeight::GetNodeInfo(void)'
      ::__l2::Info.MajorVersion = 1;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FDS_MetasoundTimeCenterWeight::GetNodeInfo(void)'
      ::__l2::Info.ClassName.Namespace = local_28.Namespace;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FDS_MetasoundTimeCenterWeight::GetNodeInfo(void)'
      ::__l2::Info.ClassName.Variant = local_28.Variant;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FDS_MetasoundTimeCenterWeight::GetNodeInfo(void)'
      ::__l2::Info.MinorVersion = 1;
      pFVar3 = FText::FText((FText *)&local_28);
      FText::operator=(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FDS_MetasoundTimeCenterWeight::GetNodeInfo(void)'
                        ::__l2::Info.DisplayName,pFVar3);
      if (local_28.Namespace != (FName)0x0) {
        (**(code **)(*(longlong *)local_28.Namespace + 0x10))();
      }
      pFVar3 = FText::FText((FText *)&local_28);
      FText::operator=(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FDS_MetasoundTimeCenterWeight::GetNodeInfo(void)'
                        ::__l2::Info.Description,pFVar3);
      if (local_28.Namespace != (FName)0x0) {
        (**(code **)(*(longlong *)local_28.Namespace + 0x10))();
      }
      ::FString::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FDS_MetasoundTimeCenterWeight::GetNodeInfo(void)'
                  ::__l2::Info.Author,&PluginAuthor);
      local_28.Namespace = (FName)NodeCategories::Conversions.TextData.Reference;
      if (NodeCategories::Conversions.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*NodeCategories::Conversions.TextData.Reference + 8))
                  (NodeCategories::Conversions.TextData.Reference,&local_res8);
      }
      local_28.Name.ComparisonIndex.Value = NodeCategories::Conversions.Flags;
      DestructItems<FText,int>
                ((FText *)`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FDS_MetasoundTimeCenterWeight::GetNodeInfo(void)'
                          ::__l2::Info.CategoryHierarchy.AllocatorInstance.Data,
                 `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FDS_MetasoundTimeCenterWeight::GetNodeInfo(void)'
                 ::__l2::Info.CategoryHierarchy.ArrayNum);
      TArray<FText,TSizedDefaultAllocator<32>_>::CopyToEmpty<FText,int>
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FDS_MetasoundTimeCenterWeight::GetNodeInfo(void)'
                  ::__l2::Info.CategoryHierarchy,(FText *)&local_28,1,
                 `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FDS_MetasoundTimeCenterWeight::GetNodeInfo(void)'
                 ::__l2::Info.CategoryHierarchy.ArrayMax);
      if (local_28.Namespace != (FName)0x0) {
        (**(code **)((longlong)*(ITextData *)local_28.Namespace + 0x10))();
      }
      TVar1.Reference =
           `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FDS_MetasoundTimeCenterWeight::GetNodeInfo(void)'
           ::__l2::Info.PromptIfMissing.TextData.Reference;
      if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FDS_MetasoundTimeCenterWeight::GetNodeInfo(void)'
          ::__l2::Info.PromptIfMissing.TextData.Reference !=
          PluginNodeMissingPrompt.TextData.Reference) {
        `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FDS_MetasoundTimeCenterWeight::GetNodeInfo(void)'
        ::__l2::Info.PromptIfMissing.TextData = PluginNodeMissingPrompt.TextData;
        if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
                    (PluginNodeMissingPrompt.TextData.Reference,&local_res8);
        }
        if (TVar1.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar1.Reference + 0x10))(TVar1.Reference);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FDS_MetasoundTimeCenterWeight::GetNodeInfo(void)'
      ::__l2::Info.PromptIfMissing.Flags = PluginNodeMissingPrompt.Flags;
      pFVar2 = GetVertexInterface();
      FVertexInterface::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FDS_MetasoundTimeCenterWeight::GetNodeInfo(void)'
                  ::__l2::Info.DefaultInterface,pFVar2);
      atexit(`Metasound::FDS_MetasoundTimeCenterWeight::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FDS_MetasoundTimeCenterWeight::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FDS_MetasoundTimeCenterWeight::GetNodeInfo(void)'
              ::__l2::Info;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FDS_MetasoundTimeCenterWeight::GetNodeInfo(void)'
          ::__l2::Info;
}

// GetVertexInterface @ 14bbbe5c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl Metasound::FDS_MetasoundTimeCenterWeight::GetVertexInterface(void)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<float> *pTVar3;
  FInputDataVertex *pFVar4;
  FInputDataVertex *pFVar5;
  FInputDataVertex *pFVar6;
  FVertexInterface *pFVar7;
  undefined1 auStackY_1a8 [32];
  float local_178;
  float local_174;
  float local_170 [2];
  FInputVertexInterface local_168;
  FOutputVertexInterface local_148;
  FInputVertexInterfaceDeclarationBuilder local_128;
  FOutputVertexInterfaceDeclarationBuilder local_100;
  TOutputDataVertex<float> local_d8;
  TInputDataVertex<float> local_b8;
  TInputDataVertex<float> local_80;
  TInputDataVertex<float> local_48;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FDS_MetasoundTimeCenterWeight::GetVertexInterface(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FDS_MetasoundTimeCenterWeight::GetVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FDS_MetasoundTimeCenterWeight::GetVertexInterface(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    pTVar3 = TOutputDataVertex<float>::TOutputDataVertex<float><>
                       (&local_d8,&DS_MetaSoundTimeCenterWeightNames::OutputWeightValueName,
                        &FDataVertexMetadata::EmptyBasic);
    FOutputVertexInterface::FOutputVertexInterface(&local_148);
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::
    FOutputVertexInterfaceDeclarationBuilder
              (&local_100,
               (TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *)&local_148,
               &local_148.SubInterfaces);
    if ((local_100.Vertices)->ArrayMax < 1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,1,&(local_100.Vertices)->AllocatorInstance,(local_100.Vertices)->ArrayNum,
                 &(local_100.Vertices)->ArrayMax);
    }
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
              (&local_100,(FOutputDataVertex *)pTVar3);
    VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
              ((FSubInterfaceDeclarationBuilder *)&local_100);
    local_178 = 0.0;
    pFVar4 = (FInputDataVertex *)
             TInputDataVertex<float>::TInputDataVertex<float><float>
                       (&local_48,&DS_MetaSoundTimeCenterWeightNames::InputEndTimeName,
                        &FDataVertexMetadata::EmptyBasic,&local_178);
    local_174 = 0.0;
    pFVar5 = (FInputDataVertex *)
             TInputDataVertex<float>::TInputDataVertex<float><float>
                       (&local_80,&DS_MetaSoundTimeCenterWeightNames::InputStartTimeName,
                        &FDataVertexMetadata::EmptyBasic,&local_174);
    local_170[0] = 0.0;
    pFVar6 = (FInputDataVertex *)
             TInputDataVertex<float>::TInputDataVertex<float><float>
                       (&local_b8,&DS_MetaSoundTimeCenterWeightNames::InputTimeName,
                        &FDataVertexMetadata::EmptyBasic,local_170);
    local_168._padding_ = 0;
    local_168._padding_ = 0;
    local_168.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_168.SubInterfaces.ArrayNum = 0;
    local_168.SubInterfaces.ArrayMax = 0;
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::FInputVertexInterfaceDeclarationBuilder
              (&local_128,
               (TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)&local_168,
               &local_168.SubInterfaces);
    if ((local_128.Vertices)->ArrayMax < 3) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,3,&(local_128.Vertices)->AllocatorInstance,(local_128.Vertices)->ArrayNum,
                 &(local_128.Vertices)->ArrayMax);
    }
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_128,pFVar6);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_128,pFVar5);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_128,pFVar4);
    VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
              ((FSubInterfaceDeclarationBuilder *)&local_128);
    FVertexInterface::FVertexInterface
              (&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FDS_MetasoundTimeCenterWeight::GetVertexInterface(void)'
                ::__l2::Interface,&local_168,&local_148);
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_168.SubInterfaces.AllocatorInstance.Data,
               local_168.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_168.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_168.SubInterfaces.AllocatorInstance.Data);
    }
    DestructItems<Metasound::FInputDataVertex,int>
              ((FInputDataVertex *)local_168._padding_,(int)local_168._padding_);
    if ((FInputDataVertex *)local_168._padding_ != (FInputDataVertex *)0x0) {
      FMemory::Free((void *)local_168._padding_);
    }
    if ((0xc < (byte)local_b8._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar7 = (FVertexInterface *)(*pcVar1)();
      return pFVar7;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_b8._48_1_])(&local_b8.field_0x20);
    if ((0xc < (byte)local_80._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar7 = (FVertexInterface *)(*pcVar1)();
      return pFVar7;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_80._48_1_])(&local_80.field_0x20);
    if ((0xc < (byte)local_48._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar7 = (FVertexInterface *)(*pcVar1)();
      return pFVar7;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_48._48_1_])(&local_48.field_0x20);
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_148.SubInterfaces.AllocatorInstance.Data,
               local_148.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_148.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_148.SubInterfaces.AllocatorInstance.Data);
    }
    if ((void *)local_148._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_148._padding_);
    }
    atexit(`Metasound::FDS_MetasoundTimeCenterWeight::GetVertexInterface'::__l2::
           _dynamic_atexit_destructor_for__Interface__);
    _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FDS_MetasoundTimeCenterWeight::GetVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  return &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FDS_MetasoundTimeCenterWeight::GetVertexInterface(void)'
          ::__l2::Interface;
}

// Reset @ 14bbdc420

void __thiscall
Metasound::FDS_MetasoundTimeCenterWeight::Reset
          (FDS_MetasoundTimeCenterWeight *this,FResetParams *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = **(float **)&(this->ParamTime).field_0x8;
  fVar1 = **(float **)&(this->ParamStartTime).field_0x8;
  fVar3 = **(float **)&(this->ParamEndTime).field_0x8;
  if (fVar3 < fVar1) {
    if (fVar2 < fVar3) {
      fVar2 = fVar2 + __real_41c00000;
    }
    fVar3 = fVar3 + __real_41c00000;
  }
  if ((fVar1 <= fVar2) && (fVar2 <= fVar3)) {
    **(float **)&(this->WeightValue).field_0x8 =
         __real_3f800000 -
         (float)((uint)((fVar1 + fVar3) * __real_3f000000 - fVar2) &
                __xmm_7fffffff7fffffff7fffffff7fffffff) * (__real_40000000 / (fVar3 - fVar1));
    return;
  }
  **(undefined4 **)&(this->WeightValue).field_0x8 = 0;
  return;
}

// UpdateTime @ 14bbe5cf0

void __thiscall
Metasound::FDS_MetasoundTimeCenterWeight::UpdateTime(FDS_MetasoundTimeCenterWeight *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = **(float **)&(this->ParamTime).field_0x8;
  fVar1 = **(float **)&(this->ParamStartTime).field_0x8;
  fVar3 = **(float **)&(this->ParamEndTime).field_0x8;
  if (fVar3 < fVar1) {
    if (fVar2 < fVar3) {
      fVar2 = fVar2 + __real_41c00000;
    }
    fVar3 = fVar3 + __real_41c00000;
  }
  if ((fVar1 <= fVar2) && (fVar2 <= fVar3)) {
    **(float **)&(this->WeightValue).field_0x8 =
         __real_3f800000 -
         (float)((uint)((fVar1 + fVar3) * __real_3f000000 - fVar2) &
                __xmm_7fffffff7fffffff7fffffff7fffffff) * (__real_40000000 / (fVar3 - fVar1));
    return;
  }
  **(undefined4 **)&(this->WeightValue).field_0x8 = 0;
  return;
}

