// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 8

// FWaveShaperOperator @ 14b234a70

FWaveShaperOperator * __thiscall
Metasound::FWaveShaperOperator::FWaveShaperOperator
          (FWaveShaperOperator *this,FOperatorSettings *param_1,
          TDataReadReference<Metasound::FAudioBuffer> *param_2,TDataReadReference<float> *param_3,
          TDataReadReference<float> *param_4,TDataReadReference<float> *param_5,
          TDataReadReference<Metasound::TEnum<Audio::EWaveShaperType,1>_> *param_6)

{
  longlong lVar1;
  
  this->_padding_ = (longlong)&___7FWaveShaperOperator_Metasound__6B_;
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
  *(undefined ***)&this->Amount = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)&(this->Amount).field_0x8 = *(undefined8 *)&param_3->field_0x8;
  lVar1 = *(longlong *)&param_3->field_0x10;
  *(longlong *)&(this->Amount).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->Amount = &___7__TDataReadReference_M_Metasound__6B_;
  *(undefined ***)&this->Bias = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)&(this->Bias).field_0x8 = *(undefined8 *)&param_4->field_0x8;
  lVar1 = *(longlong *)&param_4->field_0x10;
  *(longlong *)&(this->Bias).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->Bias = &___7__TDataReadReference_M_Metasound__6B_;
  *(undefined ***)&this->OutputGain = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)&(this->OutputGain).field_0x8 = *(undefined8 *)&param_5->field_0x8;
  lVar1 = *(longlong *)&param_5->field_0x10;
  *(longlong *)&(this->OutputGain).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->OutputGain = &___7__TDataReadReference_M_Metasound__6B_;
  *(undefined ***)&this->Type =
       &___7__TDataReference_V__TEnum_W4EWaveShaperType_Audio___00_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->Type).field_0x8 = *(undefined8 *)&param_6->field_0x8;
  lVar1 = *(longlong *)&param_6->field_0x10;
  *(longlong *)&(this->Type).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->Type =
       &___7__TDataReadReference_V__TEnum_W4EWaveShaperType_Audio___00_Metasound___Metasound__6B_;
  TDataReference<Metasound::FAudioBuffer>::
  TDataReference<Metasound::FAudioBuffer><Metasound::FOperatorSettings_const_&>
            ((TDataReference<Metasound::FAudioBuffer> *)&this->AudioOutput,NewObject,param_1);
  *(undefined ***)&this->AudioOutput =
       &___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
  Audio::FWaveShaper::FWaveShaper(&this->WaveShaper);
  Audio::FWaveShaper::Init(&this->WaveShaper,(float)param_1->SampleRate);
  return this;
}

// BindInputs @ 14b249ab0

void __thiscall
Metasound::FWaveShaperOperator::BindInputs
          (FWaveShaperOperator *this,FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataReadReference<Metasound::FAudioBuffer> *local_res18;
  undefined1 local_48 [16];
  code *local_38;
  TDataReadReference<Metasound::FAudioBuffer> **local_30;
  undefined1 local_28 [16];
  
  FLazyName::Resolve(&WaveShaperNode::InAudioInputName);
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
  FLazyName::Resolve(&WaveShaperNode::InWaveShapeAmountName);
  local_res18 = (TDataReadReference<Metasound::FAudioBuffer> *)&this->Amount;
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
  FLazyName::Resolve(&WaveShaperNode::InWaveShapeBiasName);
  local_res18 = (TDataReadReference<Metasound::FAudioBuffer> *)&this->Bias;
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
  FLazyName::Resolve(&WaveShaperNode::InOutputGainName);
  local_res18 = (TDataReadReference<Metasound::FAudioBuffer> *)&this->OutputGain;
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
  FLazyName::Resolve(&WaveShaperNode::InTypeName);
  local_res18 = (TDataReadReference<Metasound::FAudioBuffer> *)&this->Type;
  local_30 = &local_res18;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_48._8_8_ = local_28;
  local_28._0_8_ = &local_res8;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_28._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_38)
  ;
  return;
}

// BindOutputs @ 14b24a400

void __thiscall
Metasound::FWaveShaperOperator::BindOutputs
          (FWaveShaperOperator *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<Metasound::FAudioBuffer> *local_res18 [2];
  FName *local_38;
  TDataWriteReference<Metasound::FAudioBuffer> *local_30;
  code *local_28;
  TDataWriteReference<Metasound::FAudioBuffer> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&WaveShaperNode::OutAudioName);
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

// CreateOperator @ 14b26c000

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::FWaveShaperOperator::CreateOperator(FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar1;
  INode *pIVar2;
  FName local_res10;
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
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&WaveShaperNode::InAudioInputName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FAudioBuffer>
            (this,(TDataReadReference<Metasound::FAudioBuffer> *)local_d8,&local_res10,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&WaveShaperNode::InWaveShapeAmountName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this,(TDataReadReference<float> *)local_b8,&local_res10,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&WaveShaperNode::InWaveShapeBiasName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this,(TDataReadReference<float> *)local_98,&local_res10,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&WaveShaperNode::InOutputGainName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this,(TDataReadReference<float> *)local_78,&local_res10,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&WaveShaperNode::InTypeName);
  FInputVertexInterfaceData::
  GetOrCreateDefaultDataReadReference<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>
            (this,(TDataReadReference<Metasound::TEnum<Audio::EWaveShaperType,1>_> *)local_58,
             &local_res10,pFVar1);
  local_res10.ComparisonIndex.Value = (param_2->Errors).ArrayNum;
  local_res10.Number = (param_2->Errors).ArrayMax;
  pIVar2 = ::operator_new(0xe0);
  if (pIVar2 == (INode *)0x0) {
    pIVar2 = (INode *)0x0;
  }
  else {
    *pIVar2 = (INode)&___7FWaveShaperOperator_Metasound__6B_;
    pIVar2[1] = (INode)&___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_;
    pIVar2[2] = (INode)local_d8._8_8_;
    pIVar2[3] = local_c8;
    if (local_c8 != (INode)0x0) {
      *(int *)((longlong)local_c8 + 8) = *(int *)((longlong)local_c8 + 8) + 1;
    }
    pIVar2[1] = (INode)&___7__TDataReadReference_VFAudioBuffer_Metasound___Metasound__6B_;
    pIVar2[5] = (INode)&___7__TDataReference_M_Metasound__6B_;
    pIVar2[6] = (INode)local_b8._8_8_;
    pIVar2[7] = local_a8;
    if (local_a8 != (INode)0x0) {
      *(int *)((longlong)local_a8 + 8) = *(int *)((longlong)local_a8 + 8) + 1;
    }
    pIVar2[5] = (INode)&___7__TDataReadReference_M_Metasound__6B_;
    pIVar2[9] = (INode)&___7__TDataReference_M_Metasound__6B_;
    pIVar2[10] = (INode)local_98._8_8_;
    pIVar2[0xb] = local_88;
    if (local_88 != (INode)0x0) {
      *(int *)((longlong)local_88 + 8) = *(int *)((longlong)local_88 + 8) + 1;
    }
    pIVar2[9] = (INode)&___7__TDataReadReference_M_Metasound__6B_;
    pIVar2[0xd] = (INode)&___7__TDataReference_M_Metasound__6B_;
    pIVar2[0xe] = (INode)local_78._8_8_;
    pIVar2[0xf] = local_68;
    if (local_68 != (INode)0x0) {
      *(int *)((longlong)local_68 + 8) = *(int *)((longlong)local_68 + 8) + 1;
    }
    pIVar2[0xd] = (INode)&___7__TDataReadReference_M_Metasound__6B_;
    pIVar2[0x11] = (INode)&
                          ___7__TDataReference_V__TEnum_W4EWaveShaperType_Audio___00_Metasound___Metasound__6B_
    ;
    pIVar2[0x12] = (INode)local_58._8_8_;
    pIVar2[0x13] = local_48;
    if (local_48 != (INode)0x0) {
      *(int *)((longlong)local_48 + 8) = *(int *)((longlong)local_48 + 8) + 1;
    }
    pIVar2[0x11] = (INode)&
                          ___7__TDataReadReference_V__TEnum_W4EWaveShaperType_Audio___00_Metasound___Metasound__6B_
    ;
    TDataReference<Metasound::FAudioBuffer>::
    TDataReference<Metasound::FAudioBuffer><Metasound::FOperatorSettings_const_&>
              ((TDataReference<Metasound::FAudioBuffer> *)(pIVar2 + 0x15),NewObject,
               (FOperatorSettings *)local_res10);
    pIVar2[0x15] = (INode)&___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
    Audio::FWaveShaper::FWaveShaper((FWaveShaper *)(pIVar2 + 0x19));
    Audio::FWaveShaper::Init((FWaveShaper *)(pIVar2 + 0x19),(float)*(int *)local_res10);
  }
  param_1->Node = pIVar2;
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

// Execute @ 14b273920

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Metasound::FWaveShaperOperator::Execute(FWaveShaperOperator *this)

{
  int iVar1;
  undefined8 *puVar2;
  float *pfVar3;
  float *pfVar4;
  longlong lVar5;
  
  puVar2 = *(undefined8 **)&(this->AudioInput).field_0x8;
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar2 + 2) != *(int *)(puVar2 + 1))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_float_const*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  pfVar3 = (float *)*puVar2;
  puVar2 = *(undefined8 **)&(this->AudioOutput).field_0x8;
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar2 + 2) != *(int *)(puVar2 + 1))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_float*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)___ptr64'::
                __l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  pfVar4 = (float *)*puVar2;
  lVar5 = *(longlong *)&(this->AudioInput).field_0x8;
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(lVar5 + 0x10) != *(int *)(lVar5 + 8))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_int___cdecl_Metasound::FAudioBuffer::Num(void)const___ptr64'::__l3::
                LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  iVar1 = *(int *)(lVar5 + 8);
  Audio::FWaveShaper::SetAmount(&this->WaveShaper,**(float **)&(this->Amount).field_0x8);
  Audio::FWaveShaper::SetBias(&this->WaveShaper,**(float **)&(this->Bias).field_0x8);
  Audio::FWaveShaper::SetOutputGainLinear
            (&this->WaveShaper,**(float **)&(this->OutputGain).field_0x8);
  Audio::FWaveShaper::SetType(&this->WaveShaper,**(EWaveShaperType **)&(this->Type).field_0x8);
  Audio::FWaveShaper::ProcessAudioBuffer(&this->WaveShaper,pfVar3,pfVar4,iVar1);
  return;
}

// GetNodeInfo @ 14b2836e0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl Metasound::FWaveShaperOperator::GetNodeInfo(void)

{
  TRefCountPtr<ITextData> TVar1;
  FVertexInterface *pFVar2;
  FText *pFVar3;
  FName local_res8;
  FNodeClassName local_28;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FNodeClassMetadata::FNodeClassMetadata(&::Info);
      ::FName::FName(&local_res8,L"WaveShaper");
      FNodeClassName::FNodeClassName
                (&local_28,&StandardNodes::Namespace,&local_res8,&StandardNodes::AudioVariant);
      ::Info.ClassName.Name.Number = local_28.Name.Number;
      ::Info.ClassName.Name.ComparisonIndex.Value = local_28.Name.ComparisonIndex.Value;
      ::Info.MajorVersion = 1;
      ::Info.MinorVersion = 0;
      ::Info.ClassName.Namespace = local_28.Namespace;
      ::Info.ClassName.Variant = local_28.Variant;
      pFVar3 = FText::FText((FText *)&local_28);
      FText::operator=(&::Info.DisplayName,pFVar3);
      if (local_28.Namespace != (FName)0x0) {
        (**(code **)(*(longlong *)local_28.Namespace + 0x10))();
      }
      pFVar3 = FText::FText((FText *)&local_28);
      FText::operator=(&::Info.Description,pFVar3);
      if (local_28.Namespace != (FName)0x0) {
        (**(code **)(*(longlong *)local_28.Namespace + 0x10))();
      }
      ::FString::operator=(&::Info.Author,&PluginAuthor);
      local_28.Namespace = (FName)NodeCategories::Filters.TextData.Reference;
      if (NodeCategories::Filters.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*NodeCategories::Filters.TextData.Reference + 8))
                  (NodeCategories::Filters.TextData.Reference,&local_res8);
      }
      local_28.Name.ComparisonIndex.Value = NodeCategories::Filters.Flags;
      DestructItems<FText,int>
                ((FText *)::Info.CategoryHierarchy.AllocatorInstance.Data,
                 ::Info.CategoryHierarchy.ArrayNum);
      TArray<FText,TSizedDefaultAllocator<32>_>::CopyToEmpty<FText,int>
                (&::Info.CategoryHierarchy,(FText *)&local_28,1,::Info.CategoryHierarchy.ArrayMax);
      if (local_28.Namespace != (FName)0x0) {
        (**(code **)((longlong)*(ITextData *)local_28.Namespace + 0x10))();
      }
      TVar1.Reference = ::Info.PromptIfMissing.TextData.Reference;
      if (::Info.PromptIfMissing.TextData.Reference != PluginNodeMissingPrompt.TextData.Reference) {
        ::Info.PromptIfMissing.TextData = PluginNodeMissingPrompt.TextData;
        if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
                    (PluginNodeMissingPrompt.TextData.Reference,&local_res8);
        }
        if (TVar1.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar1.Reference + 0x10))(TVar1.Reference);
        }
      }
      ::Info.PromptIfMissing.Flags = PluginNodeMissingPrompt.Flags;
      pFVar2 = GetVertexInterface();
      FVertexInterface::operator=(&::Info.DefaultInterface,pFVar2);
      atexit(`Metasound::FWaveShaperOperator::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&::_TSS0);
      return &::Info;
    }
  }
  return &::Info;
}

// GetVertexInterface @ 14b2872d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl Metasound::FWaveShaperOperator::GetVertexInterface(void)

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
  TInputDataVertex<float> local_90;
  undefined1 local_58 [32];
  undefined1 local_38 [16];
  byte local_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_228;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pTVar3 = TOutputDataVertex<Metasound::FAudioBuffer>::
             TOutputDataVertex<Metasound::FAudioBuffer><>
                       (&local_158,&WaveShaperNode::OutAudioName,&FDataVertexMetadata::EmptyBasic);
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
             TInputDataVertex<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::
             TInputDataVertex<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_><int>
                       (local_58,&WaveShaperNode::InTypeName,&FDataVertexMetadata::EmptyBasic,
                        &local_1f8);
    local_1f4 = 1.0;
    pFVar5 = (FInputDataVertex *)
             TInputDataVertex<float>::TInputDataVertex<float><float>
                       (&local_90,&WaveShaperNode::InOutputGainName,&FDataVertexMetadata::EmptyBasic
                        ,&local_1f4);
    local_1f0 = 0.0;
    pFVar6 = (FInputDataVertex *)
             TInputDataVertex<float>::TInputDataVertex<float><float>
                       (&local_c8,&WaveShaperNode::InWaveShapeBiasName,
                        &FDataVertexMetadata::EmptyBasic,&local_1f0);
    local_1ec = 1.0;
    pFVar7 = (FInputDataVertex *)
             TInputDataVertex<float>::TInputDataVertex<float><float>
                       (&local_100,&WaveShaperNode::InWaveShapeAmountName,
                        &FDataVertexMetadata::EmptyBasic,&local_1ec);
    pFVar8 = (FInputDataVertex *)
             TInputDataVertex<Metasound::FAudioBuffer>::TInputDataVertex<Metasound::FAudioBuffer><>
                       (&local_138,&WaveShaperNode::InAudioInputName,
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
    FVertexInterface::FVertexInterface(&::Interface,&local_1e8,&local_1c8);
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
    atexit(`Metasound::FWaveShaperOperator::GetVertexInterface'::__l2::
           _dynamic_atexit_destructor_for__Interface__);
    _Init_thread_footer(&::_TSS0);
  }
  return &::Interface;
}

// Reset @ 14b28b9c0

void __thiscall
Metasound::FWaveShaperOperator::Reset(FWaveShaperOperator *this,FResetParams *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)&(this->AudioOutput).field_0x8;
  iVar1 = *(int *)(puVar2 + 1);
  if (0 < iVar1) {
    memset((void *)*puVar2,0,(longlong)iVar1 << 2);
  }
  Audio::FWaveShaper::Init(&this->WaveShaper,(float)param_1->OperatorSettings->SampleRate);
  return;
}

