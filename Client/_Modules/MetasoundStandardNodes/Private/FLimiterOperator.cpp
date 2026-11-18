// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 9

// BindInputs @ 14b0878e0

void __thiscall
Metasound::FLimiterOperator::BindInputs(FLimiterOperator *this,FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataReadReference<Metasound::FAudioBuffer> *local_res18;
  undefined1 local_48 [16];
  code *local_38;
  TDataReadReference<Metasound::FAudioBuffer> **local_30;
  undefined1 local_28 [16];
  
  FLazyName::Resolve(&LimiterVertexNames::InputAudioName);
  local_res18 = &this->AudioInput;
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
  FLazyName::Resolve(&LimiterVertexNames::InputInGainDbName);
  local_res18 = (TDataReadReference<Metasound::FAudioBuffer> *)&this->InGainDbInput;
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
  FLazyName::Resolve(&LimiterVertexNames::InputThresholdDbName);
  local_res18 = (TDataReadReference<Metasound::FAudioBuffer> *)&this->ThresholdDbInput;
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
  FLazyName::Resolve(&LimiterVertexNames::InputReleaseTimeName);
  local_res18 = (TDataReadReference<Metasound::FAudioBuffer> *)&this->ReleaseTimeInput;
  local_30 = &local_res18;
  local_48._8_8_ = local_28;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FTime>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
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
  FLazyName::Resolve(&LimiterVertexNames::InputKneeModeName);
  local_res18 = (TDataReadReference<Metasound::FAudioBuffer> *)&this->KneeModeInput;
  local_30 = &local_res18;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_48._8_8_ = local_28;
  local_28._0_8_ = &local_res8;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_28._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_38)
  ;
  return;
}

// BindOutputs @ 14b087af0

void __thiscall
Metasound::FLimiterOperator::BindOutputs(FLimiterOperator *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<Metasound::FAudioBuffer> *local_res18 [2];
  FName *local_38;
  TDataWriteReference<Metasound::FAudioBuffer> *local_30;
  code *local_28;
  TDataWriteReference<Metasound::FAudioBuffer> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&LimiterVertexNames::OutputAudioName);
  local_res18[0] = &this->AudioOutput;
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

// FLimiterOperator @ 14b0b4420

FLimiterOperator * __thiscall
Metasound::FLimiterOperator::FLimiterOperator
          (FLimiterOperator *this,FBuildOperatorParams *param_1,
          TDataReadReference<Metasound::FAudioBuffer> *param_2,TDataReadReference<float> *param_3,
          TDataReadReference<float> *param_4,TDataReadReference<Metasound::FTime> *param_5,
          TDataReadReference<Metasound::TEnum<Metasound::EKneeMode,0>_> *param_6)

{
  longlong lVar1;
  double dVar2;
  FResetParams local_38;
  
  this->_padding_ = (longlong)&___7FLimiterOperator_Metasound__6B_;
  *(undefined ***)&this->AudioInput = &___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_
  ;
  *(undefined8 *)&(this->AudioInput).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->AudioInput).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->AudioInput =
       &___7__TDataReadReference_VFAudioBuffer_Metasound___Metasound__6B_;
  *(undefined ***)&this->InGainDbInput = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)&(this->InGainDbInput).field_0x8 = *(undefined8 *)&param_3->field_0x8;
  lVar1 = *(longlong *)&param_3->field_0x10;
  *(longlong *)&(this->InGainDbInput).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->InGainDbInput = &___7__TDataReadReference_M_Metasound__6B_;
  *(undefined ***)&this->ThresholdDbInput = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)&(this->ThresholdDbInput).field_0x8 = *(undefined8 *)&param_4->field_0x8;
  lVar1 = *(longlong *)&param_4->field_0x10;
  *(longlong *)&(this->ThresholdDbInput).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->ThresholdDbInput = &___7__TDataReadReference_M_Metasound__6B_;
  *(undefined ***)&this->ReleaseTimeInput = &___7__TDataReference_VFTime_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->ReleaseTimeInput).field_0x8 = *(undefined8 *)&param_5->field_0x8;
  lVar1 = *(longlong *)&param_5->field_0x10;
  *(longlong *)&(this->ReleaseTimeInput).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->ReleaseTimeInput =
       &___7__TDataReadReference_VFTime_Metasound___Metasound__6B_;
  *(undefined ***)&this->KneeModeInput =
       &___7__TDataReference_V__TEnum_W4EKneeMode_Metasound___0A__Metasound___Metasound__6B_;
  *(undefined8 *)&(this->KneeModeInput).field_0x8 = *(undefined8 *)&param_6->field_0x8;
  lVar1 = *(longlong *)&param_6->field_0x10;
  *(longlong *)&(this->KneeModeInput).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->KneeModeInput =
       &___7__TDataReadReference_V__TEnum_W4EKneeMode_Metasound___0A__Metasound___Metasound__6B_;
  TDataReference<Metasound::FAudioBuffer>::
  TDataReference<Metasound::FAudioBuffer><Metasound::FOperatorSettings_const_&>
            ((TDataReference<Metasound::FAudioBuffer> *)&this->AudioOutput,NewObject,
             param_1->OperatorSettings);
  *(undefined ***)&this->AudioOutput =
       &___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
  Audio::FDynamicsProcessor::FDynamicsProcessor(&this->Limiter);
  this->PrevInGainDb = **(float **)&param_3->field_0x8;
  this->PrevThresholdDb = **(float **)&param_4->field_0x8;
  dVar2 = **(double **)&param_5->field_0x8 * __real_408f400000000000;
  if (dVar2 <= 0.0) {
    dVar2 = 0.0;
  }
  this->PrevReleaseTime = dVar2;
  local_38.OperatorSettings = param_1->OperatorSettings;
  local_38.Environment = param_1->Environment;
  local_38.GraphRenderCost = param_1->GraphRenderCost;
  Reset(this,&local_38);
  return this;
}

// operator() @ 14b0bc9c0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::FLimiterOperator::GetNodeInfo'::__l2::<lambda_1>::operator()
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
  
  pFVar1 = Metasound::FLimiterOperator::DeclareVertexInterface();
  Metasound::FVertexInterface::FVertexInterface(&local_c8,pFVar1);
  local_188.Namespace.ComparisonIndex.Value = 0;
  local_188.Namespace.Number = 0;
  local_188.Name.ComparisonIndex.Value = 0x1010101;
  local_138.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_138.ArrayNum = 0;
  local_138.ArrayMax = 0;
  local_128.TextData.Reference = Metasound::NodeCategories::Dynamics.TextData.Reference;
  if (Metasound::NodeCategories::Dynamics.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*Metasound::NodeCategories::Dynamics.TextData.Reference + 8))
              (Metasound::NodeCategories::Dynamics.TextData.Reference,local_res10);
  }
  local_128.Flags = Metasound::NodeCategories::Dynamics.Flags;
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
  ::FName::FName(local_res18,L"Limiter");
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

// CreateOperator @ 14b0cd0a0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::FLimiterOperator::CreateOperator(FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar1;
  FLimiterOperator *this_00;
  FLimiterOperator *pFVar2;
  FName local_res8;
  undefined1 local_b8 [32];
  undefined1 local_98 [32];
  undefined1 local_78 [32];
  undefined1 local_58 [32];
  undefined1 local_38 [32];
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&LimiterVertexNames::InputAudioName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FAudioBuffer>
            (this,(TDataReadReference<Metasound::FAudioBuffer> *)local_38,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&LimiterVertexNames::InputInGainDbName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this,(TDataReadReference<float> *)local_58,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&LimiterVertexNames::InputThresholdDbName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this,(TDataReadReference<float> *)local_78,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&LimiterVertexNames::InputReleaseTimeName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTime>
            (this,(TDataReadReference<Metasound::FTime> *)local_98,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&LimiterVertexNames::InputKneeModeName);
  FInputVertexInterfaceData::
  GetOrCreateDefaultDataReadReference<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>
            (this,(TDataReadReference<Metasound::TEnum<Metasound::EKneeMode,0>_> *)local_b8,
             &local_res8,pFVar1);
  this_00 = ::operator_new(0x1d8);
  pFVar2 = (FLimiterOperator *)0x0;
  if (this_00 != (FLimiterOperator *)0x0) {
    pFVar2 = FLimiterOperator(this_00,(FBuildOperatorParams *)param_2,
                              (TDataReadReference<Metasound::FAudioBuffer> *)local_38,
                              (TDataReadReference<float> *)local_58,
                              (TDataReadReference<float> *)local_78,
                              (TDataReadReference<Metasound::FTime> *)local_98,
                              (TDataReadReference<Metasound::TEnum<Metasound::EKneeMode,0>_> *)
                              local_b8);
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

// DeclareVertexInterface @ 14b0d1690

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl Metasound::FLimiterOperator::DeclareVertexInterface(void)

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
  int local_1f8;
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
  TInputDataVertex<Metasound::FTime> local_90;
  undefined1 local_58 [32];
  undefined1 local_38 [16];
  byte local_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_228;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FLimiterOperator::DeclareVertexInterface(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FLimiterOperator::DeclareVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FLimiterOperator::DeclareVertexInterface(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    pTVar3 = TOutputDataVertex<Metasound::FAudioBuffer>::
             TOutputDataVertex<Metasound::FAudioBuffer><>
                       (&local_158,&LimiterVertexNames::OutputAudioName,
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
    local_1f8 = 0;
    pFVar4 = (FInputDataVertex *)
             TInputDataVertex<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::
             TInputDataVertex<Metasound::TEnum<enum_Metasound::EKneeMode,0>_><int>
                       (local_58,&LimiterVertexNames::InputKneeModeName,
                        &FDataVertexMetadata::EmptyBasic,&local_1f8);
    local_1f4 = 0.1;
    pFVar5 = (FInputDataVertex *)
             TInputDataVertex<Metasound::FTime>::TInputDataVertex<Metasound::FTime><float>
                       (&local_90,&LimiterVertexNames::InputReleaseTimeName,
                        &FDataVertexMetadata::EmptyBasic,&local_1f4);
    local_1f0 = 0.0;
    pFVar6 = (FInputDataVertex *)
             TInputDataVertex<float>::TInputDataVertex<float><float>
                       (&local_c8,&LimiterVertexNames::InputThresholdDbName,
                        &FDataVertexMetadata::EmptyBasic,&local_1f0);
    local_1ec = 0.0;
    pFVar7 = (FInputDataVertex *)
             TInputDataVertex<float>::TInputDataVertex<float><float>
                       (&local_100,&LimiterVertexNames::InputInGainDbName,
                        &FDataVertexMetadata::EmptyBasic,&local_1ec);
    pFVar8 = (FInputDataVertex *)
             TInputDataVertex<Metasound::FAudioBuffer>::TInputDataVertex<Metasound::FAudioBuffer><>
                       (&local_138,&LimiterVertexNames::InputAudioName,
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
              (&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FLimiterOperator::DeclareVertexInterface(void)'
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
    if ((0xc < local_28) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar9 = (FVertexInterface *)(*pcVar1)();
      return pFVar9;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_28])(local_38);
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
    atexit(`Metasound::FLimiterOperator::DeclareVertexInterface'::__l2::
           _dynamic_atexit_destructor_for__Interface__);
    _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FLimiterOperator::DeclareVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  return &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FLimiterOperator::DeclareVertexInterface(void)'
          ::__l2::Interface;
}

// Execute @ 14b0d35e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Metasound::FLimiterOperator::Execute(FLimiterOperator *this)

{
  FDynamicsProcessor *this_00;
  EKneeMode EVar1;
  int iVar2;
  undefined8 *puVar3;
  float *pfVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  uint uVar8;
  float fVar9;
  
  this_00 = &this->Limiter;
  fVar9 = **(float **)&(this->InGainDbInput).field_0x8;
  if (__real_42c80000 <= fVar9) {
    fVar9 = __real_42c80000;
  }
  uVar8 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  if (__real_322bcc77 <
      (float)((uint)(fVar9 - this->PrevInGainDb) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    Audio::FDynamicsProcessor::SetInputGain(this_00,fVar9);
    uVar8 = __xmm_7fffffff7fffffff7fffffff7fffffff;
    this->PrevInGainDb = fVar9;
  }
  fVar9 = **(float **)&(this->ThresholdDbInput).field_0x8;
  if (__real_322bcc77 < (float)((uint)(fVar9 - this->PrevThresholdDb) & uVar8)) {
    Audio::FDynamicsProcessor::SetThreshold(this_00,fVar9);
    this->PrevThresholdDb = **(float **)&(this->ThresholdDbInput).field_0x8;
  }
  dVar6 = **(double **)&(this->ReleaseTimeInput).field_0x8 * __real_408f400000000000;
  if (dVar6 <= 0.0) {
    dVar6 = 0.0;
  }
  dVar7 = dVar6 - this->PrevReleaseTime;
  if (__real_3e45798ee2308c3a <
      (double)CONCAT44((uint)((ulonglong)dVar7 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar7,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
    Audio::FDynamicsProcessor::SetReleaseTime(this_00,(float)dVar6);
    this->PrevReleaseTime = dVar6;
  }
  EVar1 = **(EKneeMode **)&(this->KneeModeInput).field_0x8;
  if (this->PrevKneeMode != EVar1) {
    if ((EVar1 == Hard) || (fVar9 = __real_41200000, EVar1 != Soft)) {
      fVar9 = 0.0;
    }
    Audio::FDynamicsProcessor::SetKneeBandwidth(this_00,fVar9);
    this->PrevKneeMode = **(EKneeMode **)&(this->KneeModeInput).field_0x8;
  }
  puVar3 = *(undefined8 **)&(this->AudioOutput).field_0x8;
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar3 + 2) != *(int *)(puVar3 + 1))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_float*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)___ptr64'::
                __l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  pfVar4 = (float *)*puVar3;
  lVar5 = *(longlong *)&(this->AudioInput).field_0x8;
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(lVar5 + 0x10) != *(int *)(lVar5 + 8))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_int___cdecl_Metasound::FAudioBuffer::Num(void)const___ptr64'::__l3::
                LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  iVar2 = *(int *)(lVar5 + 8);
  puVar3 = *(undefined8 **)&(this->AudioInput).field_0x8;
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar3 + 2) != *(int *)(puVar3 + 1))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_float_const*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  Audio::FDynamicsProcessor::ProcessAudio
            (this_00,(float *)*puVar3,iVar2,pfVar4,(float *)0x0,(float *)0x0);
  return;
}

// GetNodeInfo @ 14b0d9910

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl Metasound::FLimiterOperator::GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FLimiterOperator::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FLimiterOperator::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FLimiterOperator::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::FLimiterOperator::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FLimiterOperator::GetNodeInfo(void)'
                  ::__l2::Metadata);
      atexit(`Metasound::FLimiterOperator::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FLimiterOperator::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FLimiterOperator::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FLimiterOperator::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// Reset @ 14b0e54d0

void __thiscall Metasound::FLimiterOperator::Reset(FLimiterOperator *this,FResetParams *param_1)

{
  FDynamicsProcessor *this_00;
  int iVar1;
  undefined8 *puVar2;
  float *pfVar3;
  EKneeMode *pEVar4;
  double dVar5;
  float fVar6;
  float fVar7;
  
  puVar2 = *(undefined8 **)&(this->AudioOutput).field_0x8;
  iVar1 = *(int *)(puVar2 + 1);
  if (0 < iVar1) {
    memset((void *)*puVar2,0,(longlong)iVar1 << 2);
  }
  this_00 = &this->Limiter;
  fVar7 = **(float **)&(this->InGainDbInput).field_0x8;
  if (__real_42c80000 <= fVar7) {
    fVar7 = __real_42c80000;
  }
  dVar5 = **(double **)&(this->ReleaseTimeInput).field_0x8 * __real_408f400000000000;
  if (dVar5 <= 0.0) {
    dVar5 = 0.0;
  }
  Audio::FDynamicsProcessor::Init(this_00,(float)param_1->OperatorSettings->SampleRate,1);
  Audio::FDynamicsProcessor::SetProcessingMode(this_00,Limiter);
  Audio::FDynamicsProcessor::SetInputGain(this_00,fVar7);
  Audio::FDynamicsProcessor::SetThreshold(this_00,**(float **)&(this->ThresholdDbInput).field_0x8);
  Audio::FDynamicsProcessor::SetAttackTime(this_00,0.0);
  Audio::FDynamicsProcessor::SetReleaseTime(this_00,(float)dVar5);
  Audio::FDynamicsProcessor::SetPeakMode(this_00,Peak);
  iVar1 = **(int **)&(this->KneeModeInput).field_0x8;
  fVar6 = 0.0;
  if ((iVar1 != 0) && (iVar1 == 1)) {
    fVar6 = __real_41200000;
  }
  Audio::FDynamicsProcessor::SetKneeBandwidth(this_00,fVar6);
  pfVar3 = *(float **)&(this->ThresholdDbInput).field_0x8;
  this->PrevInGainDb = fVar7;
  this->PrevReleaseTime = (double)(float)dVar5;
  pEVar4 = *(EKneeMode **)&(this->KneeModeInput).field_0x8;
  this->PrevThresholdDb = *pfVar3;
  this->PrevKneeMode = *pEVar4;
  return;
}

