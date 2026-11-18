// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 9

// BindInputs @ 14b0e8180

void __thiscall
Metasound::FMidSideEncodeOperator::BindInputs
          (FMidSideEncodeOperator *this,FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataReadReference<Metasound::FAudioBuffer> *local_res18;
  undefined1 local_48 [16];
  code *local_38;
  TDataReadReference<Metasound::FAudioBuffer> **local_30;
  undefined1 local_28 [16];
  
  FLazyName::Resolve(&MidSideEncodeVertexNames::InputAudioLeftName);
  local_res18 = &this->AudioInputLeft;
  local_30 = &local_res18;
  local_48._0_8_ = &local_res8;
  local_28._8_8_ = local_48;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FAudioBuffer>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
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
  FLazyName::Resolve(&MidSideEncodeVertexNames::InputAudioRightName);
  local_res18 = &this->AudioInputRight;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FAudioBuffer>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_30 = &local_res18;
  local_28._0_8_ = &local_res8;
  local_48._8_8_ = local_28;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FAudioBuffer>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_28._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_38)
  ;
  FLazyName::Resolve(&MidSideEncodeVertexNames::InputSpreadAmountName);
  local_res18 = (TDataReadReference<Metasound::FAudioBuffer> *)&this->SpreadAmount;
  local_30 = &local_res18;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_48._8_8_ = local_28;
  local_28._0_8_ = &local_res8;
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
  FLazyName::Resolve(&MidSideEncodeVertexNames::InputEqualPowerName);
  local_res18 = (TDataReadReference<Metasound::FAudioBuffer> *)&this->bEqualPower;
  local_30 = &local_res18;
  local_48._8_8_ = local_28;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<bool>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
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

// BindOutputs @ 14b0e8330

void __thiscall
Metasound::FMidSideEncodeOperator::BindOutputs
          (FMidSideEncodeOperator *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<Metasound::FAudioBuffer> *local_res18;
  undefined1 local_48 [16];
  code *local_38;
  TDataWriteReference<Metasound::FAudioBuffer> **local_30;
  undefined1 local_28 [16];
  
  FLazyName::Resolve(&MidSideEncodeVertexNames::OutputAudioMidName);
  local_res18 = &this->AudioOutputMid;
  local_30 = &local_res18;
  local_48._0_8_ = &local_res8;
  local_28._8_8_ = local_48;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FAudioBuffer>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_28._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::FAudioBuffer>_>,Metasound::VertexDataPrivate::FOutputBinding>
       ::Call;
  local_48._8_8_ = local_res18;
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)local_28,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_38
            );
  FLazyName::Resolve(&MidSideEncodeVertexNames::OutputAudioSideName);
  local_res18 = &this->AudioOutputSide;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FAudioBuffer>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_30 = &local_res18;
  local_28._0_8_ = &local_res8;
  local_48._8_8_ = local_28;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::FAudioBuffer>_>,Metasound::VertexDataPrivate::FOutputBinding>
       ::Call;
  local_28._8_8_ = local_res18;
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_38
            );
  return;
}

// operator() @ 14b14dfd0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::FMidSideEncodeOperator::GetNodeInfo'::__l2::<lambda_1>::operator()
          (void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  ForAnyElementType _Src;
  FVertexInterface *pFVar1;
  FText *pFVar2;
  FText *pFVar3;
  FNodeClassName *pFVar4;
  longlong lVar5;
  undefined1 local_res10 [8];
  FName local_res18 [2];
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
  
  pFVar1 = Metasound::FMidSideEncodeOperator::DeclareVertexInterface();
  Metasound::FVertexInterface::FVertexInterface(&local_c8,pFVar1);
  local_188.Namespace.ComparisonIndex.Value = 0;
  local_188.Namespace.Number = 0;
  local_188.Name.ComparisonIndex.Value = 0x1010101;
  local_138.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_138.ArrayNum = 0;
  local_138.ArrayMax = 0;
  local_128.TextData.Reference = Metasound::NodeCategories::Spatialization.TextData.Reference;
  if (Metasound::NodeCategories::Spatialization.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*Metasound::NodeCategories::Spatialization.TextData.Reference + 8))
              (Metasound::NodeCategories::Spatialization.TextData.Reference,local_res10);
  }
  local_128.Flags = Metasound::NodeCategories::Spatialization.Flags;
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
  ::FName::FName(local_res18,"Mid-Side Decode");
  pFVar4 = Metasound::FNodeClassName::FNodeClassName
                     (&local_e8,&Metasound::StandardNodes::Namespace,local_res18,
                      &Metasound::StandardNodes::AudioVariant);
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

// CreateOperator @ 14b177d30

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::FMidSideEncodeOperator::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar1;
  undefined1 *puVar2;
  FMidSideEncodeOperator *this_00;
  FName local_res8;
  undefined1 local_a8 [16];
  FGraphRenderCost *local_98;
  undefined1 local_88 [32];
  undefined1 local_68 [32];
  undefined1 local_48 [32];
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&MidSideEncodeVertexNames::InputAudioLeftName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FAudioBuffer>
            (this,(TDataReadReference<Metasound::FAudioBuffer> *)local_a8,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&MidSideEncodeVertexNames::InputAudioRightName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FAudioBuffer>
            (this,(TDataReadReference<Metasound::FAudioBuffer> *)local_88,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&MidSideEncodeVertexNames::InputSpreadAmountName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this,(TDataReadReference<float> *)local_68,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&MidSideEncodeVertexNames::InputEqualPowerName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<bool>
            (this,(TDataReadReference<bool> *)local_48,&local_res8,pFVar1);
  this_00 = ::operator_new(0xe0);
  if (this_00 != (FMidSideEncodeOperator *)0x0) {
    this_00->_padding_ = (longlong)&___7FMidSideEncodeOperator_Metasound__6B_;
    *(undefined ***)&this_00->AudioInputLeft =
         &___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_;
    *(undefined8 *)&(this_00->AudioInputLeft).field_0x8 = local_a8._8_8_;
    *(FGraphRenderCost **)&(this_00->AudioInputLeft).field_0x10 = local_98;
    if (local_98 != (FGraphRenderCost *)0x0) {
      *(int *)&local_98->_padding_ = (int)local_98->_padding_ + 1;
    }
    *(undefined ***)&this_00->AudioInputLeft =
         &___7__TDataReadReference_VFAudioBuffer_Metasound___Metasound__6B_;
    *(undefined ***)&this_00->AudioInputRight =
         &___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_;
    *(undefined8 *)&(this_00->AudioInputRight).field_0x8 = local_88._8_8_;
    *(undefined8 *)&(this_00->AudioInputRight).field_0x10 = local_88._16_8_;
    if ((TReferenceControllerBase<0> *)local_88._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_88._16_8_ + 8) = *(int *)(local_88._16_8_ + 8) + 1;
    }
    *(undefined ***)&this_00->AudioInputRight =
         &___7__TDataReadReference_VFAudioBuffer_Metasound___Metasound__6B_;
    *(undefined ***)&this_00->SpreadAmount = &___7__TDataReference_M_Metasound__6B_;
    *(undefined8 *)&(this_00->SpreadAmount).field_0x8 = local_68._8_8_;
    *(undefined8 *)&(this_00->SpreadAmount).field_0x10 = local_68._16_8_;
    if ((TReferenceControllerBase<0> *)local_68._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_68._16_8_ + 8) = *(int *)(local_68._16_8_ + 8) + 1;
    }
    *(undefined ***)&this_00->SpreadAmount = &___7__TDataReadReference_M_Metasound__6B_;
    *(undefined ***)&this_00->bEqualPower = &___7__TDataReference__N_Metasound__6B_;
    *(undefined8 *)&(this_00->bEqualPower).field_0x8 = local_48._8_8_;
    *(undefined8 *)&(this_00->bEqualPower).field_0x10 = local_48._16_8_;
    if ((TReferenceControllerBase<0> *)local_48._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_48._16_8_ + 8) = *(int *)(local_48._16_8_ + 8) + 1;
    }
    *(undefined ***)&this_00->bEqualPower = &___7__TDataReadReference__N_Metasound__6B_;
    TDataReference<Metasound::FAudioBuffer>::
    TDataReference<Metasound::FAudioBuffer><Metasound::FOperatorSettings_const_&>
              ((TDataReference<Metasound::FAudioBuffer> *)&this_00->AudioOutputMid,NewObject,
               *(FOperatorSettings **)&(param_2->Errors).ArrayNum);
    *(undefined ***)&this_00->AudioOutputMid =
         &___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
    TDataReference<Metasound::FAudioBuffer>::
    TDataReference<Metasound::FAudioBuffer><Metasound::FOperatorSettings_const_&>
              ((TDataReference<Metasound::FAudioBuffer> *)&this_00->AudioOutputSide,NewObject,
               *(FOperatorSettings **)&(param_2->Errors).ArrayNum);
    *(undefined ***)&this_00->AudioOutputSide =
         &___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
    this_00->MidScale = 0.0;
    this_00->SideScale = 0.0;
    this_00->PrevMidScale = 0.0;
    this_00->PrevSideScale = 0.0;
    puVar2 = *(undefined1 **)&(this_00->bEqualPower).field_0x8;
    this_00->PrevSpreadAmount = **(float **)&(this_00->SpreadAmount).field_0x8;
    this_00->bPrevEqualPower = (bool)*puVar2;
    Reset(this_00,(FResetParams *)local_a8);
  }
  param_1->Node = (INode *)this_00;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_48._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_68._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_88._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_98);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// DeclareVertexInterface @ 14b17f750

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl Metasound::FMidSideEncodeOperator::DeclareVertexInterface(void)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::FAudioBuffer> *pTVar3;
  TOutputDataVertex<Metasound::FAudioBuffer> *pTVar4;
  FOutputVertexInterface *pFVar5;
  TInputDataVertex<bool> *pTVar6;
  TInputDataVertex<float> *pTVar7;
  TInputDataVertex<Metasound::FAudioBuffer> *pTVar8;
  TInputDataVertex<Metasound::FAudioBuffer> *pTVar9;
  FInputVertexInterface *pFVar10;
  FVertexInterface *pFVar11;
  undefined1 auStackY_1a8 [32];
  bool local_178 [4];
  float local_174;
  FInputVertexInterface local_170;
  FOutputVertexInterface local_150;
  TOutputDataVertex<Metasound::FAudioBuffer> local_130;
  TOutputDataVertex<Metasound::FAudioBuffer> local_110;
  TInputDataVertex<Metasound::FAudioBuffer> local_f0;
  TInputDataVertex<Metasound::FAudioBuffer> local_b8;
  TInputDataVertex<float> local_80;
  TInputDataVertex<bool> local_48;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FMidSideEncodeOperator::DeclareVertexInterface(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FMidSideEncodeOperator::DeclareVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FMidSideEncodeOperator::DeclareVertexInterface(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    pTVar3 = TOutputDataVertex<Metasound::FAudioBuffer>::
             TOutputDataVertex<Metasound::FAudioBuffer><>
                       (&local_130,&MidSideEncodeVertexNames::OutputAudioSideName,
                        &FDataVertexMetadata::EmptyBasic);
    pTVar4 = TOutputDataVertex<Metasound::FAudioBuffer>::
             TOutputDataVertex<Metasound::FAudioBuffer><>
                       (&local_110,&MidSideEncodeVertexNames::OutputAudioMidName,
                        &FDataVertexMetadata::EmptyBasic);
    pFVar5 = FOutputVertexInterface::
             FOutputVertexInterface<Metasound::TOutputDataVertex<Metasound::FAudioBuffer>,Metasound::TOutputDataVertex<Metasound::FAudioBuffer>_>
                       (&local_150,pTVar4,pTVar3);
    local_178[0] = false;
    pTVar6 = TInputDataVertex<bool>::TInputDataVertex<bool><bool>
                       (&local_48,&MidSideEncodeVertexNames::InputEqualPowerName,
                        &FDataVertexMetadata::EmptyBasic,local_178);
    local_174 = 0.5;
    pTVar7 = TInputDataVertex<float>::TInputDataVertex<float><float>
                       (&local_80,&MidSideEncodeVertexNames::InputSpreadAmountName,
                        &FDataVertexMetadata::EmptyBasic,&local_174);
    pTVar8 = TInputDataVertex<Metasound::FAudioBuffer>::TInputDataVertex<Metasound::FAudioBuffer><>
                       (&local_b8,&MidSideEncodeVertexNames::InputAudioRightName,
                        &FDataVertexMetadata::EmptyBasic);
    pTVar9 = TInputDataVertex<Metasound::FAudioBuffer>::TInputDataVertex<Metasound::FAudioBuffer><>
                       (&local_f0,&MidSideEncodeVertexNames::InputAudioLeftName,
                        &FDataVertexMetadata::EmptyBasic);
    pFVar10 = FInputVertexInterface::
              FInputVertexInterface<Metasound::TInputDataVertex<Metasound::FAudioBuffer>,Metasound::TInputDataVertex<Metasound::FAudioBuffer>,Metasound::TInputDataVertex<float>,Metasound::TInputDataVertex<bool>_>
                        (&local_170,pTVar9,pTVar8,pTVar7,pTVar6);
    FVertexInterface::FVertexInterface
              (&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FMidSideEncodeOperator::DeclareVertexInterface(void)'
                ::__l2::Interface,pFVar10,pFVar5);
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_170.SubInterfaces.AllocatorInstance.Data,
               local_170.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_170.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_170.SubInterfaces.AllocatorInstance.Data);
    }
    DestructItems<Metasound::FInputDataVertex,int>
              ((FInputDataVertex *)local_170._padding_,(int)local_170._padding_);
    if ((FInputDataVertex *)local_170._padding_ != (FInputDataVertex *)0x0) {
      FMemory::Free((void *)local_170._padding_);
    }
    if ((0xc < (byte)local_f0._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar11 = (FVertexInterface *)(*pcVar1)();
      return pFVar11;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_f0._48_1_])(&local_f0.field_0x20);
    if ((0xc < (byte)local_b8._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar11 = (FVertexInterface *)(*pcVar1)();
      return pFVar11;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_b8._48_1_])(&local_b8.field_0x20);
    if ((0xc < (byte)local_80._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar11 = (FVertexInterface *)(*pcVar1)();
      return pFVar11;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_80._48_1_])(&local_80.field_0x20);
    if ((0xc < (byte)local_48._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar11 = (FVertexInterface *)(*pcVar1)();
      return pFVar11;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_48._48_1_])(&local_48.field_0x20);
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_150.SubInterfaces.AllocatorInstance.Data,
               local_150.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_150.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_150.SubInterfaces.AllocatorInstance.Data);
    }
    if ((void *)local_150._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_150._padding_);
    }
    atexit(`Metasound::FMidSideEncodeOperator::DeclareVertexInterface'::__l2::
           _dynamic_atexit_destructor_for__Interface__);
    _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FMidSideEncodeOperator::DeclareVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  return &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FMidSideEncodeOperator::DeclareVertexInterface(void)'
          ::__l2::Interface;
}

// Execute @ 14b18a400

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Metasound::FMidSideEncodeOperator::Execute(FMidSideEncodeOperator *this)

{
  int iVar1;
  undefined1 *puVar2;
  TArray<float,TAlignedHeapAllocator<16>_> *pTVar3;
  TArray<float,TAlignedHeapAllocator<16>_> *pTVar4;
  TArray<float,TAlignedHeapAllocator<16>_> *pTVar5;
  TArray<float,TAlignedHeapAllocator<16>_> *pTVar6;
  undefined8 *puVar7;
  float *pfVar8;
  code *pcVar9;
  bool bVar10;
  float fVar11;
  float fVar12;
  undefined4 uStack_7c;
  TArrayView<float,int> local_78;
  TArrayView<float,int> local_68;
  TArrayView<float,int> local_58;
  TArrayView<float,int> local_48 [3];
  
  fVar12 = **(float **)&(this->SpreadAmount).field_0x8;
  if (__real_3f800000 <= fVar12) {
    fVar12 = __real_3f800000;
  }
  if (fVar12 <= 0.0) {
    fVar12 = 0.0;
  }
  fVar11 = __real_3f800000;
  if (((float)((uint)(fVar12 - this->PrevSpreadAmount) & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
       __real_322bcc77) &&
     (this->bPrevEqualPower == (bool)**(char **)&(this->bEqualPower).field_0x8)) {
    fVar11 = 0.0;
  }
  if (fVar11 != 0.0) {
    UpdateScale(this,fVar12);
    puVar2 = *(undefined1 **)&(this->bEqualPower).field_0x8;
    this->PrevSpreadAmount = fVar12;
    this->bPrevEqualPower = (bool)*puVar2;
  }
  pTVar3 = *(TArray<float,TAlignedHeapAllocator<16>_> **)&(this->AudioOutputSide).field_0x8;
  if ((1 < (byte)LogMetaSound._0_1_) &&
     (*(int *)&pTVar3[1].AllocatorInstance.Data != pTVar3->ArrayNum)) {
    UE::Logging::Private::BasicLog<2>
              ((FStaticBasicLogRecord *)
               &`public:___cdecl_Metasound::FAudioBuffer::operator_class_TArray<float,class_TAlignedHeapAllocator<16>_>&___ptr64(void)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  pTVar4 = *(TArray<float,TAlignedHeapAllocator<16>_> **)&(this->AudioOutputMid).field_0x8;
  if ((1 < (byte)LogMetaSound._0_1_) &&
     (*(int *)&pTVar4[1].AllocatorInstance.Data != pTVar4->ArrayNum)) {
    UE::Logging::Private::BasicLog<2>
              ((FStaticBasicLogRecord *)
               &`public:___cdecl_Metasound::FAudioBuffer::operator_class_TArray<float,class_TAlignedHeapAllocator<16>_>&___ptr64(void)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  pTVar5 = *(TArray<float,TAlignedHeapAllocator<16>_> **)&(this->AudioInputRight).field_0x8;
  if ((1 < (byte)LogMetaSound._0_1_) &&
     (*(int *)&pTVar5[1].AllocatorInstance.Data != pTVar5->ArrayNum)) {
    UE::Logging::Private::BasicLog<2>
              ((FStaticBasicLogRecord *)
               &`public:___cdecl_Metasound::FAudioBuffer::operator_class_TArray<float,class_TAlignedHeapAllocator<16>_>_const&___ptr64(void)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  pTVar6 = *(TArray<float,TAlignedHeapAllocator<16>_> **)&(this->AudioInputLeft).field_0x8;
  if ((1 < (byte)LogMetaSound._0_1_) &&
     (*(int *)&pTVar6[1].AllocatorInstance.Data != pTVar6->ArrayNum)) {
    UE::Logging::Private::BasicLog<2>
              ((FStaticBasicLogRecord *)
               &`public:___cdecl_Metasound::FAudioBuffer::operator_class_TArray<float,class_TAlignedHeapAllocator<16>_>_const&___ptr64(void)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  Audio::EncodeMidSide(pTVar6,pTVar5,pTVar4,pTVar3);
  fVar12 = this->PrevMidScale;
  fVar11 = this->MidScale;
  puVar7 = *(undefined8 **)&(this->AudioOutputMid).field_0x8;
  if (__real_322bcc77 < (float)((uint)(fVar12 - fVar11) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar7 + 2) != *(int *)(puVar7 + 1))) {
      UE::Logging::Private::BasicLog<2>
                ((FStaticBasicLogRecord *)
                 &`public:___cdecl_Metasound::FAudioBuffer::operator_class_TArrayView<float,int>(void)___ptr64'
                  ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    }
    pfVar8 = (float *)*puVar7;
    iVar1 = *(int *)(puVar7 + 1);
    if (iVar1 < 0) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L"");
      if (bVar10) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    local_58._12_4_ = uStack_7c;
    local_58.ArrayNum = iVar1;
    local_58.DataPtr = pfVar8;
    Audio::ArrayFade(&local_58,fVar12,fVar11);
    fVar12 = this->SideScale;
    fVar11 = this->PrevSideScale;
    puVar7 = *(undefined8 **)&(this->AudioOutputSide).field_0x8;
    if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar7 + 2) != *(int *)(puVar7 + 1))) {
      UE::Logging::Private::BasicLog<2>
                ((FStaticBasicLogRecord *)
                 &`public:___cdecl_Metasound::FAudioBuffer::operator_class_TArrayView<float,int>(void)___ptr64'
                  ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    }
    pfVar8 = (float *)*puVar7;
    iVar1 = *(int *)(puVar7 + 1);
    if (iVar1 < 0) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L"");
      if (bVar10) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    local_48[0]._12_4_ = uStack_7c;
    local_48[0].ArrayNum = iVar1;
    local_48[0].DataPtr = pfVar8;
    Audio::ArrayFade(local_48,fVar11,fVar12);
    this->PrevMidScale = this->MidScale;
    this->PrevSideScale = this->SideScale;
  }
  else {
    if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar7 + 2) != *(int *)(puVar7 + 1))) {
      UE::Logging::Private::BasicLog<2>
                ((FStaticBasicLogRecord *)
                 &`public:___cdecl_Metasound::FAudioBuffer::operator_class_TArrayView<float,int>(void)___ptr64'
                  ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    }
    pfVar8 = (float *)*puVar7;
    iVar1 = *(int *)(puVar7 + 1);
    if (iVar1 < 0) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L"");
      if (bVar10) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    local_78._12_4_ = uStack_7c;
    local_78.ArrayNum = iVar1;
    local_78.DataPtr = pfVar8;
    Audio::ArrayMultiplyByConstantInPlace(&local_78,fVar11);
    fVar12 = this->SideScale;
    puVar7 = *(undefined8 **)&(this->AudioOutputSide).field_0x8;
    if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar7 + 2) != *(int *)(puVar7 + 1))) {
      UE::Logging::Private::BasicLog<2>
                ((FStaticBasicLogRecord *)
                 &`public:___cdecl_Metasound::FAudioBuffer::operator_class_TArrayView<float,int>(void)___ptr64'
                  ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    }
    pfVar8 = (float *)*puVar7;
    iVar1 = *(int *)(puVar7 + 1);
    if (iVar1 < 0) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L"");
      if (bVar10) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    local_68._12_4_ = uStack_7c;
    local_68.ArrayNum = iVar1;
    local_68.DataPtr = pfVar8;
    Audio::ArrayMultiplyByConstantInPlace(&local_68,fVar12);
  }
  return;
}

// GetNodeInfo @ 14b197cf0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl Metasound::FMidSideEncodeOperator::GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FMidSideEncodeOperator::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FMidSideEncodeOperator::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FMidSideEncodeOperator::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::FMidSideEncodeOperator::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FMidSideEncodeOperator::GetNodeInfo(void)'
                  ::__l2::Metadata);
      atexit(`Metasound::FMidSideEncodeOperator::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FMidSideEncodeOperator::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FMidSideEncodeOperator::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FMidSideEncodeOperator::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// Reset @ 14b1a7af0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Metasound::FMidSideEncodeOperator::Reset(FMidSideEncodeOperator *this,FResetParams *param_1)

{
  int iVar1;
  TArray<float,TAlignedHeapAllocator<16>_> *pTVar2;
  TArray<float,TAlignedHeapAllocator<16>_> *pTVar3;
  TArray<float,TAlignedHeapAllocator<16>_> *pTVar4;
  TArray<float,TAlignedHeapAllocator<16>_> *pTVar5;
  undefined8 *puVar6;
  float *pfVar7;
  code *pcVar8;
  bool bVar9;
  float fVar10;
  undefined4 uStack_3c;
  TArrayView<float,int> local_38;
  TArrayView<float,int> local_28 [2];
  
  fVar10 = **(float **)&(this->SpreadAmount).field_0x8;
  if (__real_3f800000 <= fVar10) {
    fVar10 = __real_3f800000;
  }
  if (fVar10 <= 0.0) {
    fVar10 = 0.0;
  }
  UpdateScale(this,fVar10);
  pTVar2 = *(TArray<float,TAlignedHeapAllocator<16>_> **)&(this->AudioOutputSide).field_0x8;
  this->PrevMidScale = this->MidScale;
  this->PrevSideScale = this->SideScale;
  this->PrevSpreadAmount = fVar10;
  if ((1 < (byte)LogMetaSound._0_1_) &&
     (*(int *)&pTVar2[1].AllocatorInstance.Data != pTVar2->ArrayNum)) {
    UE::Logging::Private::BasicLog<2>
              ((FStaticBasicLogRecord *)
               &`public:___cdecl_Metasound::FAudioBuffer::operator_class_TArray<float,class_TAlignedHeapAllocator<16>_>&___ptr64(void)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  pTVar3 = *(TArray<float,TAlignedHeapAllocator<16>_> **)&(this->AudioOutputMid).field_0x8;
  if ((1 < (byte)LogMetaSound._0_1_) &&
     (*(int *)&pTVar3[1].AllocatorInstance.Data != pTVar3->ArrayNum)) {
    UE::Logging::Private::BasicLog<2>
              ((FStaticBasicLogRecord *)
               &`public:___cdecl_Metasound::FAudioBuffer::operator_class_TArray<float,class_TAlignedHeapAllocator<16>_>&___ptr64(void)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  pTVar4 = *(TArray<float,TAlignedHeapAllocator<16>_> **)&(this->AudioInputRight).field_0x8;
  if ((1 < (byte)LogMetaSound._0_1_) &&
     (*(int *)&pTVar4[1].AllocatorInstance.Data != pTVar4->ArrayNum)) {
    UE::Logging::Private::BasicLog<2>
              ((FStaticBasicLogRecord *)
               &`public:___cdecl_Metasound::FAudioBuffer::operator_class_TArray<float,class_TAlignedHeapAllocator<16>_>_const&___ptr64(void)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  pTVar5 = *(TArray<float,TAlignedHeapAllocator<16>_> **)&(this->AudioInputLeft).field_0x8;
  if ((1 < (byte)LogMetaSound._0_1_) &&
     (*(int *)&pTVar5[1].AllocatorInstance.Data != pTVar5->ArrayNum)) {
    UE::Logging::Private::BasicLog<2>
              ((FStaticBasicLogRecord *)
               &`public:___cdecl_Metasound::FAudioBuffer::operator_class_TArray<float,class_TAlignedHeapAllocator<16>_>_const&___ptr64(void)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  Audio::EncodeMidSide(pTVar5,pTVar4,pTVar3,pTVar2);
  fVar10 = this->MidScale;
  puVar6 = *(undefined8 **)&(this->AudioOutputMid).field_0x8;
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar6 + 2) != *(int *)(puVar6 + 1))) {
    UE::Logging::Private::BasicLog<2>
              ((FStaticBasicLogRecord *)
               &`public:___cdecl_Metasound::FAudioBuffer::operator_class_TArrayView<float,int>(void)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  pfVar7 = (float *)*puVar6;
  iVar1 = *(int *)(puVar6 + 1);
  if (iVar1 < 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  local_38._12_4_ = uStack_3c;
  local_38.ArrayNum = iVar1;
  local_38.DataPtr = pfVar7;
  Audio::ArrayMultiplyByConstantInPlace(&local_38,fVar10);
  fVar10 = this->SideScale;
  puVar6 = *(undefined8 **)&(this->AudioOutputSide).field_0x8;
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar6 + 2) != *(int *)(puVar6 + 1))) {
    UE::Logging::Private::BasicLog<2>
              ((FStaticBasicLogRecord *)
               &`public:___cdecl_Metasound::FAudioBuffer::operator_class_TArrayView<float,int>(void)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  pfVar7 = (float *)*puVar6;
  iVar1 = *(int *)(puVar6 + 1);
  if (iVar1 < 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  local_28[0]._12_4_ = uStack_3c;
  local_28[0].ArrayNum = iVar1;
  local_28[0].DataPtr = pfVar7;
  Audio::ArrayMultiplyByConstantInPlace(local_28,fVar10);
  return;
}

// UpdateScale @ 14b1abaf0

void __thiscall
Metasound::FMidSideEncodeOperator::UpdateScale(FMidSideEncodeOperator *this,float param_1)

{
  char *pcVar1;
  float fVar2;
  float fVar3;
  
  FMath::SinCos<float>(&this->SideScale,&this->MidScale,param_1 * __real_3fc90fdb);
  fVar2 = this->MidScale * __real_3fb504f3;
  pcVar1 = *(char **)&(this->bEqualPower).field_0x8;
  fVar3 = this->SideScale * __real_3fb504f3;
  this->MidScale = fVar2;
  this->SideScale = fVar3;
  if (*pcVar1 == '\0') {
    if (__real_3f800000 <= fVar2) {
      fVar2 = __real_3f800000;
    }
    if (__real_3f800000 <= fVar3) {
      fVar3 = __real_3f800000;
    }
    if (fVar2 <= 0.0) {
      fVar2 = 0.0;
    }
    if (fVar3 <= 0.0) {
      fVar3 = 0.0;
    }
    this->MidScale = fVar2;
    this->SideScale = fVar3;
  }
  return;
}

