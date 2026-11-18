// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 9

// BindInputs @ 14b1b6e90

void __thiscall
Metasound::FSampleAndHoldOperator::BindInputs
          (FSampleAndHoldOperator *this,FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataReadReference<Metasound::FAudioBuffer> *local_res18;
  undefined1 local_38 [16];
  code *local_28;
  TDataReadReference<Metasound::FAudioBuffer> **local_20;
  undefined1 local_18 [16];
  
  FLazyName::Resolve(&SampleAndHoldVertexNames::InputAudioName);
  local_res18 = &this->AudioInput;
  local_20 = &local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FAudioBuffer>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_18._8_8_ = local_38;
  local_38._0_8_ = &local_res8;
  local_18._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FAudioBuffer>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  FLazyName::Resolve(&SampleAndHoldVertexNames::InputTriggerSampleAndHoldName);
  local_res18 = (TDataReadReference<Metasound::FAudioBuffer> *)&this->TriggerSampleAndHold;
  local_20 = &local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38._8_8_ = local_18;
  local_18._0_8_ = &local_res8;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_18._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_38,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14b1b6f80

void __thiscall
Metasound::FSampleAndHoldOperator::BindOutputs
          (FSampleAndHoldOperator *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataReadReference<Metasound::FTrigger> *local_res18;
  undefined1 local_38 [16];
  code *local_28;
  TDataReadReference<Metasound::FTrigger> **local_20;
  undefined1 local_18 [16];
  
  FLazyName::Resolve(&SampleAndHoldVertexNames::OutputOnSampleAndHoldName);
  local_res18 = &this->TriggerSampleAndHold;
  local_20 = &local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_18._8_8_ = local_38;
  local_38._0_8_ = &local_res8;
  local_18._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataReadReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FOutputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  FLazyName::Resolve(&SampleAndHoldVertexNames::OutputAudioName);
  local_res18 = (TDataReadReference<Metasound::FTrigger> *)&this->AudioOutput;
  local_20 = &local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FAudioBuffer>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38._8_8_ = local_18;
  local_18._0_8_ = &local_res8;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::FAudioBuffer>_>,Metasound::VertexDataPrivate::FOutputBinding>
       ::Call;
  local_18._8_8_ = local_res18;
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)local_38,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// FSampleAndHoldOperator @ 14b1ce610

/* WARNING: Enum "Type": Some values do not have unique names */

FSampleAndHoldOperator * __thiscall
Metasound::FSampleAndHoldOperator::FSampleAndHoldOperator
          (FSampleAndHoldOperator *this,FBuildOperatorParams *param_1,
          TDataReadReference<Metasound::FTrigger> *param_2,
          TDataReadReference<Metasound::FAudioBuffer> *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  this->_padding_ = (longlong)&___7FSampleAndHoldOperator_Metasound__6B_;
  *(undefined ***)&this->AudioInput = &___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_
  ;
  *(undefined8 *)&(this->AudioInput).field_0x8 = *(undefined8 *)&param_3->field_0x8;
  lVar1 = *(longlong *)&param_3->field_0x10;
  *(longlong *)&(this->AudioInput).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->AudioInput =
       &___7__TDataReadReference_VFAudioBuffer_Metasound___Metasound__6B_;
  *(undefined ***)&this->TriggerSampleAndHold =
       &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->TriggerSampleAndHold).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->TriggerSampleAndHold).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->TriggerSampleAndHold =
       &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
  TDataReference<Metasound::FAudioBuffer>::
  TDataReference<Metasound::FAudioBuffer><Metasound::FOperatorSettings_const_&>
            ((TDataReference<Metasound::FAudioBuffer> *)&this->AudioOutput,NewObject,
             param_1->OperatorSettings);
  *(undefined ***)&this->AudioOutput =
       &___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
  puVar2 = *(undefined8 **)&(this->AudioInput).field_0x8;
  this->HoldValue = 0.0;
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar2 + 2) != *(int *)(puVar2 + 1))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_float_const*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  lVar1 = *(longlong *)&(this->AudioOutput).field_0x8;
  this->HoldValue = *(float *)*puVar2;
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(lVar1 + 0x10) != *(int *)(lVar1 + 8))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_int___cdecl_Metasound::FAudioBuffer::Num(void)const___ptr64'::__l3::
                LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  SetToHold(this,0,*(int *)(lVar1 + 8));
  return this;
}

// operator() @ 14b1d2500

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::FSampleAndHoldOperator::GetNodeInfo'::__l2::<lambda_1>::operator()
          (void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  ForAnyElementType _Src;
  FVertexInterface *pFVar1;
  FText *pFVar2;
  FText *pFVar3;
  FNodeClassName *pFVar4;
  longlong lVar5;
  undefined1 local_res10 [8];
  FName local_res18;
  FName local_res20;
  FNodeClassName local_188;
  FString local_168;
  TArray<FText,TSizedDefaultAllocator<32>_> local_158;
  FNodeDisplayStyle local_148;
  TArray<FText,TSizedDefaultAllocator<32>_> local_138;
  FText local_128;
  FText local_118;
  FText local_108;
  FText local_f8;
  FNodeClassName local_e8;
  FVertexInterface local_c8;
  FVertexInterface local_78;
  
  pFVar1 = Metasound::FSampleAndHoldOperator::GetVertexInterface();
  Metasound::FVertexInterface::FVertexInterface(&local_c8,pFVar1);
  local_188.Namespace.ComparisonIndex.Value = 0;
  local_188.Namespace.Number = 0;
  local_188.Name.ComparisonIndex.Value = 0x1010101;
  local_138.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_138.ArrayNum = 0;
  local_138.ArrayMax = 0;
  local_128.TextData.Reference = Metasound::NodeCategories::Filters.TextData.Reference;
  if (Metasound::NodeCategories::Filters.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*Metasound::NodeCategories::Filters.TextData.Reference + 8))
              (Metasound::NodeCategories::Filters.TextData.Reference,local_res10);
  }
  local_128.Flags = Metasound::NodeCategories::Filters.Flags;
  local_158.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_158.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,1,0,&local_158.AllocatorInstance,1,&local_158.ArrayMax);
  ConstructItems<FText,FText,int>(local_158.AllocatorInstance.Data,&local_128,1);
  pFVar1 = Metasound::FVertexInterface::FVertexInterface(&local_78,&local_c8);
  local_118.TextData.Reference = Metasound::PluginNodeMissingPrompt.TextData.Reference;
  if (Metasound::PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*Metasound::PluginNodeMissingPrompt.TextData.Reference + 8))
              (Metasound::PluginNodeMissingPrompt.TextData.Reference,local_res10);
  }
  _Src.Data = Metasound::PluginAuthor.Data.AllocatorInstance.Data;
  lVar5 = (longlong)Metasound::PluginAuthor.Data.ArrayNum;
  local_118.Flags = Metasound::PluginNodeMissingPrompt.Flags;
  local_168.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_168.Data.ArrayNum = Metasound::PluginAuthor.Data.ArrayNum;
  if (Metasound::PluginAuthor.Data.ArrayNum == 0) {
    local_168.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,Metasound::PluginAuthor.Data.ArrayNum,0,(ForAnyElementType *)&local_168,
               Metasound::PluginAuthor.Data.ArrayNum,&local_168.Data.ArrayMax);
    memcpy(local_168.Data.AllocatorInstance.Data,_Src.Data,lVar5 * 2);
  }
  pFVar2 = FText::FText(&local_108);
  pFVar3 = FText::FText(&local_f8);
  ::FName::FName(&local_res20,"SampleAndHold");
  ::FName::FName(&local_res18,"Sample And Hold");
  pFVar4 = Metasound::FNodeClassName::FNodeClassName
                     (&local_e8,&local_res20,&local_res18,&Metasound::StandardNodes::AudioVariant);
  local_148.ImageName = local_188.Namespace;
  local_188.Namespace = pFVar4->Namespace;
  local_148.bShowName = (bool)(undefined1)local_188.Name.ComparisonIndex.Value;
  local_148.bShowInputNames = (bool)local_188.Name.ComparisonIndex.Value._1_1_;
  local_148.bShowOutputNames = (bool)local_188.Name.ComparisonIndex.Value._2_1_;
  local_148.bShowLiterals = (bool)local_188.Name.ComparisonIndex.Value._3_1_;
  local_188.Variant = pFVar4->Variant;
  local_188.Name = pFVar4->Name;
  Metasound::FNodeClassMetadata::FNodeClassMetadata
            (__return_storage_ptr__,&local_188,1,0,pFVar3,pFVar2,&local_168,&local_118,pFVar1,
             &local_158,&local_138,&local_148);
  if (local_128.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_128.TextData.Reference + 0x10))();
  }
  Metasound::FVertexInterface::~FVertexInterface(&local_c8);
  return __return_storage_ptr__;
}

// CreateOperator @ 14b1d9dc0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::FSampleAndHoldOperator::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar1;
  FSampleAndHoldOperator *this_00;
  FSampleAndHoldOperator *pFVar2;
  FName local_res8;
  undefined1 local_48 [32];
  undefined1 local_28 [32];
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&SampleAndHoldVertexNames::InputTriggerSampleAndHoldName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTrigger>
            (this,(TDataReadReference<Metasound::FTrigger> *)local_28,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&SampleAndHoldVertexNames::InputAudioName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FAudioBuffer>
            (this,(TDataReadReference<Metasound::FAudioBuffer> *)local_48,&local_res8,pFVar1);
  this_00 = ::operator_new(0x70);
  pFVar2 = (FSampleAndHoldOperator *)0x0;
  if (this_00 != (FSampleAndHoldOperator *)0x0) {
    pFVar2 = FSampleAndHoldOperator
                       (this_00,(FBuildOperatorParams *)param_2,
                        (TDataReadReference<Metasound::FTrigger> *)local_28,
                        (TDataReadReference<Metasound::FAudioBuffer> *)local_48);
  }
  param_1->Node = (INode *)pFVar2;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_48._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_28._16_8_);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// GetNodeInfo @ 14b1e3b90

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl Metasound::FSampleAndHoldOperator::GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FSampleAndHoldOperator::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FSampleAndHoldOperator::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FSampleAndHoldOperator::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::FSampleAndHoldOperator::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FSampleAndHoldOperator::GetNodeInfo(void)'
                  ::__l2::Metadata);
      atexit(`Metasound::FSampleAndHoldOperator::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FSampleAndHoldOperator::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FSampleAndHoldOperator::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FSampleAndHoldOperator::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetVertexInterface @ 14b1e59a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl Metasound::FSampleAndHoldOperator::GetVertexInterface(void)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::FAudioBuffer> *pTVar3;
  TOutputDataVertex<Metasound::FTrigger> *pTVar4;
  FInputDataVertex *pFVar5;
  FInputDataVertex *pFVar6;
  FVertexInterface *pFVar7;
  undefined1 auStackY_188 [32];
  FInputVertexInterface local_158;
  FOutputVertexInterface local_138;
  FOutputVertexInterfaceDeclarationBuilder local_118;
  FInputVertexInterfaceDeclarationBuilder local_f0;
  TOutputDataVertex<Metasound::FAudioBuffer> local_c8;
  TOutputDataVertex<Metasound::FTrigger> local_a8;
  TInputDataVertex<Metasound::FTrigger> local_88;
  TInputDataVertex<Metasound::FAudioBuffer> local_50;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FSampleAndHoldOperator::GetVertexInterface(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FSampleAndHoldOperator::GetVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FSampleAndHoldOperator::GetVertexInterface(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    pTVar3 = TOutputDataVertex<Metasound::FAudioBuffer>::
             TOutputDataVertex<Metasound::FAudioBuffer><>
                       (&local_c8,&SampleAndHoldVertexNames::OutputAudioName,
                        &FDataVertexMetadata::EmptyBasic);
    pTVar4 = TOutputDataVertex<Metasound::FTrigger>::TOutputDataVertex<Metasound::FTrigger><>
                       (&local_a8,&SampleAndHoldVertexNames::OutputOnSampleAndHoldName,
                        &FDataVertexMetadata::EmptyBasic);
    FOutputVertexInterface::FOutputVertexInterface(&local_138);
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::
    FOutputVertexInterfaceDeclarationBuilder
              (&local_118,
               (TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *)&local_138,
               &local_138.SubInterfaces);
    if ((local_118.Vertices)->ArrayMax < 2) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,2,&(local_118.Vertices)->AllocatorInstance,(local_118.Vertices)->ArrayNum,
                 &(local_118.Vertices)->ArrayMax);
    }
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
              (&local_118,(FOutputDataVertex *)pTVar4);
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
              (&local_118,(FOutputDataVertex *)pTVar3);
    VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
              ((FSubInterfaceDeclarationBuilder *)&local_118);
    pFVar5 = (FInputDataVertex *)
             TInputDataVertex<Metasound::FAudioBuffer>::TInputDataVertex<Metasound::FAudioBuffer><>
                       (&local_50,&SampleAndHoldVertexNames::InputAudioName,
                        &FDataVertexMetadata::EmptyBasic);
    pFVar6 = (FInputDataVertex *)
             TInputDataVertex<Metasound::FTrigger>::TInputDataVertex<Metasound::FTrigger><>
                       (&local_88,&SampleAndHoldVertexNames::InputTriggerSampleAndHoldName,
                        &FDataVertexMetadata::EmptyBasic);
    local_158._padding_ = 0;
    local_158._padding_ = 0;
    local_158.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_158.SubInterfaces.ArrayNum = 0;
    local_158.SubInterfaces.ArrayMax = 0;
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::FInputVertexInterfaceDeclarationBuilder
              (&local_f0,
               (TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)&local_158,
               &local_158.SubInterfaces);
    if ((local_f0.Vertices)->ArrayMax < 2) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,2,&(local_f0.Vertices)->AllocatorInstance,(local_f0.Vertices)->ArrayNum,
                 &(local_f0.Vertices)->ArrayMax);
    }
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_f0,pFVar6);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_f0,pFVar5);
    VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
              ((FSubInterfaceDeclarationBuilder *)&local_f0);
    FVertexInterface::FVertexInterface
              (&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FSampleAndHoldOperator::GetVertexInterface(void)'
                ::__l2::Interface,&local_158,&local_138);
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_158.SubInterfaces.AllocatorInstance.Data,
               local_158.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_158.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_158.SubInterfaces.AllocatorInstance.Data);
    }
    DestructItems<Metasound::FInputDataVertex,int>
              ((FInputDataVertex *)local_158._padding_,(int)local_158._padding_);
    if ((FInputDataVertex *)local_158._padding_ != (FInputDataVertex *)0x0) {
      FMemory::Free((void *)local_158._padding_);
    }
    if ((0xc < (byte)local_88._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar7 = (FVertexInterface *)(*pcVar1)();
      return pFVar7;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_88._48_1_])(&local_88.field_0x20);
    if ((0xc < (byte)local_50._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar7 = (FVertexInterface *)(*pcVar1)();
      return pFVar7;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_50._48_1_])(&local_50.field_0x20);
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_138.SubInterfaces.AllocatorInstance.Data,
               local_138.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_138.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_138.SubInterfaces.AllocatorInstance.Data);
    }
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
    atexit(`Metasound::FSampleAndHoldOperator::GetVertexInterface'::__l2::
           _dynamic_atexit_destructor_for__Interface__);
    _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FSampleAndHoldOperator::GetVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  return &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FSampleAndHoldOperator::GetVertexInterface(void)'
          ::__l2::Interface;
}

// Reset @ 14b1e9e80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Metasound::FSampleAndHoldOperator::Reset(FSampleAndHoldOperator *this,FResetParams *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  puVar1 = *(undefined8 **)&(this->AudioInput).field_0x8;
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar1 + 2) != *(int *)(puVar1 + 1))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_float_const*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  lVar2 = *(longlong *)&(this->AudioOutput).field_0x8;
  this->HoldValue = *(float *)*puVar1;
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(lVar2 + 0x10) != *(int *)(lVar2 + 8))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_int___cdecl_Metasound::FAudioBuffer::Num(void)const___ptr64'::__l3::
                LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  SetToHold(this,0,*(int *)(lVar2 + 8));
  return;
}

// SetToHold @ 14b1eb480

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Metasound::FSampleAndHoldOperator::SetToHold(FSampleAndHoldOperator *this,int param_1,int param_2)

{
  float *pfVar1;
  float fVar2;
  longlong *plVar3;
  code *pcVar4;
  longlong lVar5;
  bool bVar6;
  uint uVar7;
  longlong lVar8;
  float *pfVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  
  lVar8 = *(longlong *)&(this->AudioOutput).field_0x8;
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(lVar8 + 0x10) != *(int *)(lVar8 + 8))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_int___cdecl_Metasound::FAudioBuffer::Num(void)const___ptr64'::__l3::
                LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  if ((*(int *)(lVar8 + 8) < param_2) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("AudioOutput->Num() >= EndFrame",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundStandardNodes\\Private\\MetasoundSampleAndHoldNode.cpp"
                         ,0x8e,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  plVar3 = *(longlong **)&(this->AudioOutput).field_0x8;
  if ((1 < (byte)LogMetaSound._0_1_) && ((int)plVar3[2] != (int)plVar3[1])) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_float*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)___ptr64'::
                __l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  uVar10 = param_2 - param_1;
  iVar12 = 0;
  pfVar1 = (float *)(*plVar3 + (longlong)param_1 * 4);
  iVar13 = iVar12;
  if ((0 < (int)uVar10) && (iVar13 = 0, 3 < uVar10)) {
    fVar2 = this->HoldValue;
    if ((&this->HoldValue < pfVar1) || (pfVar1 + (int)(uVar10 - 1) < &this->HoldValue)) {
      uVar7 = uVar10 & 0x80000003;
      if ((int)uVar7 < 0) {
        uVar7 = (uVar7 - 1 | 0xfffffffc) + 1;
      }
      do {
        iVar12 = iVar12 + 4;
      } while (iVar12 < (int)(uVar10 - uVar7));
      iVar13 = (uVar10 - uVar7) + 3;
      pfVar9 = pfVar1;
      for (lVar8 = ((longlong)((int)(iVar13 + (iVar13 >> 0x1f & 3U)) >> 2) & 0xfffffffffffffffU) <<
                   2; iVar13 = iVar12, lVar8 != 0; lVar8 = lVar8 + -1) {
        *pfVar9 = fVar2;
        pfVar9 = pfVar9 + 1;
      }
    }
  }
  lVar8 = (longlong)iVar13;
  lVar14 = (longlong)(int)uVar10;
  if (lVar8 < lVar14) {
    if (3 < lVar14 - lVar8) {
      lVar5 = lVar8 + 2;
      lVar11 = ((lVar14 - lVar8) - 4U >> 2) + 1;
      lVar8 = lVar8 + lVar11 * 4;
      pfVar9 = pfVar1 + lVar5;
      do {
        pfVar9[-2] = this->HoldValue;
        pfVar9[-1] = this->HoldValue;
        *pfVar9 = this->HoldValue;
        pfVar9[1] = this->HoldValue;
        lVar11 = lVar11 + -1;
        pfVar9 = pfVar9 + 4;
      } while (lVar11 != 0);
      if (lVar14 <= lVar8) {
        return;
      }
    }
    do {
      pfVar1[lVar8] = this->HoldValue;
      lVar8 = lVar8 + 1;
    } while (lVar8 < lVar14);
  }
  return;
}

